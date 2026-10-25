// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431e9aa0 FUN_1431e9aa0 body=546 status=ok
// SIG undefined FUN_1431e9aa0(void)

void FUN_1431e9aa0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0x2d;
  if (((*(byte *)(param_1 + 0x20) & 2) != 0) &&
     (iVar2 = AK::SrcFileServices::IsPrebufferingReady
                        (*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x68)),
     iVar2 == 0x2d)) {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
  }
  FUN_1431c8eb0(param_1);
  if (iVar2 != 0x2d) {
    *(int *)(param_2 + 0x38) = iVar2;
    return;
  }
  do {
    *(undefined4 *)(param_1 + 0x8c) = 0x2e;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    iVar2 = FUN_1431e9cd0(param_1);
    if (iVar2 != 0x2d) {
      *(int *)(param_2 + 0x38) = iVar2;
      break;
    }
    iVar2 = **(ushort **)(param_1 + 0x130) + 2;
    *(int *)(param_1 + 0xe8) = iVar2;
    if ((*(short *)(param_1 + 0x80) == 0) && ((*(byte *)(param_1 + 0x82) & 1) == 0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0xec) = cVar1;
    if (*(char *)(param_1 + 0x140) == '\0') {
      *(int *)(param_1 + 0xe8) = iVar2 + *(int *)(param_1 + 0x68);
    }
    else if ((cVar1 == '\0') || (*(int *)(param_1 + 0x68) != 0)) {
      *(undefined1 *)(param_1 + 0xec) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xec) = 1;
    }
    DecodeVorbis(param_1 + 0x88,*(undefined2 *)(param_1 + 0x104),*(ushort **)(param_1 + 0x130),
                 param_1 + 0x148,param_1 + 0x150);
    iVar2 = *(int *)(param_1 + 0x8c);
    *(int *)(param_2 + 0x38) = iVar2;
    if (iVar2 == 2) {
LAB_1431e9bea:
      if (*(char *)(param_1 + 0x140) != '\0') goto LAB_1431e9bf3;
    }
    else {
      if (*(char *)(param_1 + 0x140) == '\0') {
        if (*(int *)(param_1 + 0x94) != 0) {
          uVar3 = (*(int *)(param_1 + 0x94) - (uint)**(ushort **)(param_1 + 0x130)) - 2;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar3;
          *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar3;
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar3;
        }
        goto LAB_1431e9bea;
      }
LAB_1431e9bf3:
      if (*(void **)(param_1 + 0x130) != (void *)0x0) {
        AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x130));
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined1 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
    }
  } while ((*(int *)(param_1 + 0x8c) == 0x2b) || (*(int *)(param_1 + 0x8c) == 0x2e));
  if ((*(int *)(param_2 + 0x38) - 0x2dU < 2) || (*(int *)(param_2 + 0x38) == 0x11)) {
    FUN_1431c8210(param_1,*(undefined8 *)(param_1 + 0x148),*(undefined2 *)(param_1 + 0x88),
                  *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0xe0),param_2);
    if (*(int *)(param_2 + 0x38) != 0x2e) {
      return;
    }
    if (*(longlong *)(param_1 + 0x60) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x94) != 0) {
      *(undefined4 *)(param_2 + 0x38) = 0x2d;
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 2;
  return;
}



// FUNCTION 1431e9cd0 FUN_1431e9cd0 body=579 status=ok
// SIG undefined FUN_1431e9cd0(void)

undefined8 FUN_1431e9cd0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  size_t _Size;
  ulonglong uVar11;
  
  do {
    if (*(int *)(param_1 + 0x68) == 0) {
      bVar1 = *(byte *)(param_1 + 0x82);
      if ((bVar1 & 1) != 0) {
        return 0x11;
      }
      if ((bVar1 & 2) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
      }
      else {
        *(byte *)(param_1 + 0x82) = bVar1 & 0xfd;
      }
      uVar3 = FUN_1431c8680(param_1);
      if ((int)uVar3 != 0x2d) {
        return uVar3;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x13c);
    uVar11 = (ulonglong)uVar6;
    if (uVar6 < 2) {
      uVar2 = *(uint *)(param_1 + 0x68);
      _Size = (size_t)uVar2;
      if (uVar2 != 0) {
        if (2 - uVar11 <= _Size) {
          _Size = (size_t)(2 - uVar6);
        }
        iVar9 = (int)_Size;
        if (iVar9 == 2) {
          lVar8 = *(longlong *)(param_1 + 0x60);
          *(longlong *)(param_1 + 0x130) = lVar8;
        }
        else {
          if (*(char *)(param_1 + 0x140) == '\0') {
            pvVar4 = AK::MemoryMgr::Malign
                               (g_LEngineDefaultPoolId,(ulonglong)*(ushort *)(param_1 + 0x104) + 2,8
                               );
            *(void **)(param_1 + 0x130) = pvVar4;
            if (pvVar4 == (void *)0x0) {
              return 0x34;
            }
            uVar11 = (ulonglong)*(uint *)(param_1 + 0x13c);
            *(undefined1 *)(param_1 + 0x140) = 1;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(uVar11 + *(longlong *)(param_1 + 0x130)),*(void **)(param_1 + 0x60),
                     _Size);
          uVar6 = *(uint *)(param_1 + 0x13c);
          lVar8 = *(longlong *)(param_1 + 0x60);
          uVar2 = *(uint *)(param_1 + 0x68);
        }
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar9;
        *(uint *)(param_1 + 0x13c) = iVar9 + uVar6;
        *(size_t *)(param_1 + 0x60) = _Size + lVar8;
        *(uint *)(param_1 + 0x68) = uVar2 - iVar9;
        if (iVar9 + uVar6 == 2) goto LAB_1431e9df8;
      }
    }
    else {
LAB_1431e9df8:
      uVar6 = *(uint *)(param_1 + 0x138);
      if (((uVar6 == 0) && (*(uint *)(param_1 + 0x68) < **(ushort **)(param_1 + 0x130) + 8)) &&
         (*(char *)(param_1 + 0x140) == '\0')) {
        puVar5 = AK::MemoryMgr::Malign
                           (g_LEngineDefaultPoolId,(ulonglong)(**(ushort **)(param_1 + 0x130) + 10),
                            8);
        if (puVar5 == (undefined2 *)0x0) {
          return 0x34;
        }
        *puVar5 = **(undefined2 **)(param_1 + 0x130);
        uVar6 = *(uint *)(param_1 + 0x138);
        *(undefined2 **)(param_1 + 0x130) = puVar5;
        *(undefined1 *)(param_1 + 0x140) = 1;
      }
      uVar2 = (uint)**(ushort **)(param_1 + 0x130);
      if ((uVar6 < uVar2) && (uVar7 = *(uint *)(param_1 + 0x68), uVar7 != 0)) {
        uVar2 = uVar2 - uVar6;
        uVar10 = uVar7;
        if (uVar2 <= uVar7) {
          uVar10 = uVar2;
        }
        if (*(char *)(param_1 + 0x140) != '\0') {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)*(ushort **)(param_1 + 0x130) + (ulonglong)uVar6 + 2),
                     *(void **)(param_1 + 0x60),(ulonglong)uVar10);
          uVar6 = *(uint *)(param_1 + 0x138);
          uVar7 = *(uint *)(param_1 + 0x68);
        }
        *(uint *)(param_1 + 0x138) = uVar10 + uVar6;
        *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar10;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar10;
        *(uint *)(param_1 + 0x68) = uVar7 - uVar10;
      }
    }
    if ((*(int *)(param_1 + 0x13c) == 2) &&
       (*(uint *)(param_1 + 0x138) == (uint)**(ushort **)(param_1 + 0x130))) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      return 0x2d;
    }
  } while( true );
}



// FUNCTION 1431e9f20 IsPrebufferingReady body=103 status=ok
// SIG undefined IsPrebufferingReady(void)

undefined8 AK::SrcFileServices::IsPrebufferingReady(longlong *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,local_res8);
  if ((int)uVar2 - 0x2dU < 2) {
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uint)(local_res8[0] + param_2) < uVar1) {
      return 0x2e;
    }
  }
  else if ((int)uVar2 != 0x11) {
    return uVar2;
  }
  return 0x2d;
}



// FUNCTION 1431e9f90 FUN_1431e9f90 body=38 status=ok
// SIG undefined FUN_1431e9f90(void)

void FUN_1431e9f90(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x290);
    return;
  }
  *(undefined2 *)(param_1 + 0x54) = 1;
  return;
}



// FUNCTION 1431e9fc0 FUN_1431e9fc0 body=139 status=ok
// SIG undefined FUN_1431e9fc0(void)

undefined4 FUN_1431e9fc0(longlong param_1,char param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  if (param_2 == '\0') {
    *(short *)(param_1 + 0x80) = *(short *)(param_1 + 0x80) + -1;
  }
  uVar2 = *(ushort *)(param_1 + 0x54);
  if (1 < uVar2) {
    uVar2 = uVar2 - 1;
    *(ushort *)(param_1 + 0x54) = uVar2;
  }
  uVar3 = 0x11;
  if (param_2 == '\0') {
    if (uVar2 == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0x106);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xfa);
    }
    vorbis_dsp_restart(param_1 + 0x98,*(undefined2 *)(param_1 + 0xf8),uVar1);
    *(undefined4 *)(param_1 + 0x90) = 3;
    *(undefined4 *)(param_1 + 0x8c) = 0x2d;
    uVar3 = 0x2d;
  }
  return uVar3;
}



// FUNCTION 1431ea050 FUN_1431ea050 body=617 status=ok
// SIG undefined FUN_1431ea050(void)

undefined8 FUN_1431ea050(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  uint local_50;
  int local_48 [2];
  undefined8 local_40;
  float local_38 [3];
  undefined1 local_2b;
  undefined1 local_28 [8];
  short *local_20;
  
  local_48[0] = 0;
  local_40 = 0;
  piVar1 = (int *)(param_1 + 0x3c);
  uVar9 = AkFileParser::Parse(param_2,*(undefined4 *)(param_1 + 0x68),local_28,param_1 + 0x40,
                              (int *)(param_1 + 0x38),piVar1,(int *)(param_1 + 0x30),
                              (int *)(param_1 + 0x34),local_48,0,0);
  if ((int)uVar9 == 1) {
    if (*local_20 == -1) {
      uVar2 = local_20[1];
      uVar3 = *(undefined4 *)(local_20 + 10);
      lVar5 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(lVar5 + 0x230) = CONCAT44(uVar3,*(undefined4 *)(local_20 + 2));
      *(uint *)(lVar5 + 0x238) = (uVar2 & 0xff) << 8 | local_50 & 0xfffd0020 | 0x50020;
      if (local_48[0] != 0) {
        CAkSrcFileBase::StoreAnalysisData(param_1,local_48);
      }
      iVar4 = *(int *)(local_20 + 0xc);
      *(int *)(param_1 + 0x28) = iVar4;
      uVar6 = *(undefined4 *)(local_20 + 0x10);
      uVar7 = *(undefined4 *)(local_20 + 0x12);
      uVar8 = *(undefined4 *)(local_20 + 0x14);
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(local_20 + 0xe);
      *(undefined4 *)(param_1 + 0xf4) = uVar6;
      *(undefined4 *)(param_1 + 0xf8) = uVar7;
      *(undefined4 *)(param_1 + 0xfc) = uVar8;
      uVar6 = *(undefined4 *)(local_20 + 0x18);
      uVar7 = *(undefined4 *)(local_20 + 0x1a);
      uVar8 = *(undefined4 *)(local_20 + 0x1c);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(local_20 + 0x16);
      *(undefined4 *)(param_1 + 0x104) = uVar6;
      *(undefined4 *)(param_1 + 0x108) = uVar7;
      *(undefined4 *)(param_1 + 0x10c) = uVar8;
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(local_20 + 0x1e);
      *(short *)(param_1 + 0x114) = local_20[0x20];
      *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + 8;
      *(undefined4 *)(param_1 + 0xe0) = uVar3;
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(local_20 + 2);
      if ((*(int *)(param_1 + 0x38) == 0) && (*piVar1 == 0)) {
        *piVar1 = iVar4 + -1;
      }
      iVar4 = *(int *)(param_1 + 0x34);
      if (*(short *)(param_1 + 0x54) == 1) {
        iVar11 = *(int *)(param_1 + 0x30);
        iVar12 = *(int *)(param_1 + 0x100);
      }
      else {
        iVar11 = *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xfc);
        iVar12 = *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xfc);
      }
      *(int *)(param_1 + 0x78) = iVar4 + iVar12;
      *(int *)(param_1 + 0x7c) = iVar4 + iVar11;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),local_38)
      ;
      CAkSrcFileBase::GetStreamLoopHeuristic(param_1,*(short *)(param_1 + 0x54) != 1,local_38);
      local_38[0] = (float)*(uint *)(local_20 + 4) * 0.001;
      local_2b = (undefined1)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x2a0);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_38)
      ;
      if (*(uint *)(param_1 + 0xfc) != 0) {
        pvVar10 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)*(uint *)(param_1 + 0xfc))
        ;
        *(void **)(param_1 + 0x120) = pvVar10;
        if (pvVar10 == (void *)0x0) {
          return 0x34;
        }
      }
      *(undefined4 *)(param_1 + 0x90) = 1;
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                        (*(longlong **)(param_1 + 0x58),1);
    }
    else {
      uVar9 = 7;
    }
  }
  return uVar9;
}



// FUNCTION 1431ea2c0 FUN_1431ea2c0 body=496 status=ok
// SIG undefined FUN_1431ea2c0(void)

ulonglong FUN_1431ea2c0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined8 local_res8;
  
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) ^ (*(byte *)(param_1[3] + 0x295) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
  iVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x80))
                    ((longlong *)param_1[0xb],&local_res8,param_1 + 0xd,0);
  if (iVar1 == 0x2e) {
    return 0x3f;
  }
  if ((iVar1 != 0x2d) && (iVar1 != 0x11)) {
    return 2;
  }
  uVar6 = 0;
  if ((int)param_1[0x12] == 0) {
    uVar3 = (**(code **)(*param_1 + 0xe8))();
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (param_1[3] == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined2 *)(param_1[3] + 0x290);
    }
    *(undefined2 *)((longlong)param_1 + 0x54) = uVar5;
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1,local_res8,0);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    uVar2 = *(uint *)((longlong)param_1 + 0x34);
    param_1[0xc] = param_1[0xc] + (ulonglong)uVar2;
    *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar2;
    *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + uVar2;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1,local_res8,0);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
  }
  uVar2 = FUN_1431e97f0(param_1);
  uVar3 = (ulonglong)uVar2;
  if (uVar2 == 1) {
    lVar4 = param_1[3];
    if ((*(byte *)(lVar4 + 0x295) & 0x40) != 0) {
      if (param_1[0x24] != 0) {
        uVar2 = FUN_1431c8ca0(param_1);
        uVar3 = (ulonglong)uVar2;
        if ((int)param_1[0xd] != 0) {
          if ((*(byte *)((longlong)param_1 + 0x82) & 2) == 0) {
            (**(code **)(*(longlong *)param_1[0xb] + 0x88))();
          }
          else {
            *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfd;
          }
          param_1[0xc] = 0;
          *(undefined4 *)(param_1 + 0xd) = 0;
        }
        lVar4 = param_1[3];
        if ((*(byte *)(lVar4 + 0x295) & 0x40) == 0) {
          uVar6 = *(uint *)(lVar4 + 0x28c);
        }
        *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + uVar6;
      }
      *(byte *)(lVar4 + 0x295) = *(byte *)(lVar4 + 0x295) & 0x3f;
      *(byte *)(lVar4 + 0x296) = *(byte *)(lVar4 + 0x296) & 0xfe;
      *(undefined4 *)(lVar4 + 0x28c) = 0;
    }
    CAkSrcFileVorbis::VorbisDSPRestart(param_1,uVar6 & 0xffff);
    *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
  }
  else if ((uVar2 == 0x3f) && ((int)param_1[0xd] == 0)) {
    if ((*(byte *)((longlong)param_1 + 0x82) & 2) == 0) {
      (**(code **)(*(longlong *)param_1[0xb] + 0x88))();
      param_1[0xc] = 0;
    }
    else {
      param_1[0xc] = 0;
      *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfd;
    }
  }
  return uVar3;
}



// FUNCTION 1431ea4c0 StartStream body=278 status=ok
// SIG undefined StartStream(void)

ulonglong CAkSrcFileVorbis::StartStream(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x82) & 4) == 0) {
    if ((*(longlong *)(param_1 + 0x58) == 0) || (2 < *(int *)(param_1 + 0x90))) {
      local_18 = 0;
      local_10 = 0;
      uVar4 = FUN_1431c8560(param_1,&local_18,0);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar2 = FUN_1431c8750(param_1,local_res8);
      if (uVar2 != 1) {
        return (ulonglong)uVar2;
      }
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))();
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      if (local_res8[0] != '\0') {
        FUN_1431e9f90(param_1);
        uVar4 = FUN_1431e97f0(param_1);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        VorbisDSPRestart(param_1,0);
        return uVar4 & 0xffffffff;
      }
    }
    uVar2 = FUN_1431ea2c0();
    if (uVar2 != 1) {
      return (ulonglong)uVar2;
    }
    uVar4 = 1;
    if ((*(byte *)(param_1 + 0x20) & 2) == 0) goto LAB_1431ea596;
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    uVar4 = 1;
    if ((*(byte *)(param_1 + 0x20) & 2) == 0) goto LAB_1431ea596;
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
  }
  uVar2 = AK::SrcFileServices::IsPrebufferingReady(uVar3,uVar1);
  if (uVar2 == 0x2e) {
    FUN_1431c8eb0(param_1);
    return 0x3f;
  }
  if (uVar2 == 0x2d) {
    uVar2 = 1;
  }
  uVar4 = (ulonglong)uVar2;
LAB_1431ea596:
  FUN_1431c8eb0(param_1);
  return uVar4;
}



// FUNCTION 1431ea600 StopStream body=173 status=ok
// SIG undefined StopStream(void)

void CAkSrcFileVorbis::StopStream(longlong *param_1)

{
  vorbis_dsp_clear(param_1 + 0x13);
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((void *)param_1[0x24] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x24]);
    param_1[0x24] = 0;
  }
  if (((char)param_1[0x28] != '\0') && ((void *)param_1[0x26] != (void *)0x0)) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[0x26]);
    param_1[0x26] = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
    param_1[0x27] = 0;
  }
  if ((void *)param_1[0x29] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[0x29]);
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  CAkSrcFileBase::StopStream(param_1);
  return;
}



// FUNCTION 1431ea6b0 FUN_1431ea6b0 body=198 status=ok
// SIG undefined FUN_1431ea6b0(void)

undefined4 FUN_1431ea6b0(longlong param_1,uint param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = FUN_1431c8f90();
  if (param_2 < 2) {
    iVar4 = vorbis_dsp_init(param_1 + 0x98,*(undefined4 *)(param_1 + 0xa8));
    if (iVar4 == -1) {
      return 2;
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(lVar2 + 0x295) & 0x40) == 0) {
      uVar5 = *(uint *)(lVar2 + 0x28c);
    }
    else {
      uVar5 = 0;
    }
    *(byte *)(lVar2 + 0x295) = *(byte *)(lVar2 + 0x295) & 0x3f;
    *(byte *)(lVar2 + 0x296) = *(byte *)(lVar2 + 0x296) & 0xfe;
    *(undefined4 *)(lVar2 + 0x28c) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar5;
    if (*(short *)(param_1 + 0x54) == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0x106);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xfa);
    }
    vorbis_dsp_restart(param_1 + 0x98,uVar5 & 0xffff,uVar1);
    *(undefined4 *)(param_1 + 0x90) = 3;
  }
  return uVar3;
}



// FUNCTION 1431ea780 VirtualOn body=137 status=ok
// SIG undefined VirtualOn(void)

void CAkSrcFileVorbis::VirtualOn(longlong param_1,uint param_2)

{
  CAkSrcFileBase::VirtualOn();
  if (param_2 < 2) {
    vorbis_dsp_clear(param_1 + 0x98);
    if ((*(char *)(param_1 + 0x140) != '\0') && (*(void **)(param_1 + 0x130) != (void *)0x0)) {
      AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x130));
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined1 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    if (*(void **)(param_1 + 0x148) != (void *)0x0) {
      AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x148));
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
  }
  return;
}



// FUNCTION 1431ea810 VorbisDSPRestart body=62 status=ok
// SIG undefined VorbisDSPRestart(void)

void CAkSrcFileVorbis::VorbisDSPRestart(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0x106);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xfa);
  }
  vorbis_dsp_restart(param_1 + 0x98,param_2,uVar1);
  *(undefined4 *)(param_1 + 0x90) = 3;
  return;
}



// FUNCTION 1431ea850 FUN_1431ea850 body=86 status=ok
// SIG undefined FUN_1431ea850(void)

undefined8 * FUN_1431ea850(undefined8 *param_1)

{
  FUN_1431c7cd0();
  *param_1 = &PTR__scalar_deleting_destructor__145ad1e60;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xb,0,0xa8);
  return param_1;
}



// FUNCTION 1431ea8b0 `scalar_deleting_destructor' body=92 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSrcBankVorbis::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad1e60;
  if (param_1[0x10] != 0) {
    AkVorbisCodebookMgr::ReleaseCodebook(&DAT_146b521c0,param_1 + 0xb);
  }
  CAkSrcBaseEx::~CAkSrcBaseEx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1431ea910 FUN_1431ea910 body=146 status=ok
// SIG undefined FUN_1431ea910(void)

undefined4 FUN_1431ea910(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    uVar3 = FUN_1431eab60();
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(lVar2 + 0x295) & 0x40) == 0) {
      iVar4 = *(int *)(lVar2 + 0x28c);
    }
    else {
      iVar4 = 0;
    }
    *(byte *)(lVar2 + 0x295) = *(byte *)(lVar2 + 0x295) & 0x3f;
    *(byte *)(lVar2 + 0x296) = *(byte *)(lVar2 + 0x296) & 0xfe;
    *(undefined4 *)(lVar2 + 0x28c) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar4;
    if (*(short *)(param_1 + 0x54) == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0xd6);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xca);
    }
    vorbis_dsp_restart(param_1 + 0x68,iVar4,uVar1);
    *(undefined4 *)(param_1 + 0x60) = 3;
    return uVar3;
  }
  return 1;
}



// FUNCTION 1431ea9b0 FUN_1431ea9b0 body=216 status=ok
// SIG undefined FUN_1431ea9b0(void)

void FUN_1431ea9b0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x54) == 1) {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xc4);
  }
  *(undefined1 *)(param_1 + 0xbc) = 1;
  *(int *)(param_1 + 0xb8) = iVar1 + (*(int *)(param_1 + 0x108) - *(int *)(param_1 + 0x100));
  DecodeVorbis(param_1 + 0x58,*(undefined2 *)(param_1 + 0xd4),*(undefined8 *)(param_1 + 0x100),
               param_1 + 0x110,param_1 + 0x118);
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_2 + 0x38) = iVar1;
  if (iVar1 != 2) {
    *(longlong *)(param_1 + 0x100) =
         *(longlong *)(param_1 + 0x100) + (ulonglong)*(uint *)(param_1 + 100);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0x58);
    FUN_1431c8210(param_1,*(undefined8 *)(param_1 + 0x110),*(uint *)(param_1 + 0x58) & 0xffff,
                  *(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xb0),param_2);
  }
  return;
}



// FUNCTION 1431eaa90 FUN_1431eaa90 body=148 status=ok
// SIG undefined FUN_1431eaa90(void)

undefined4 FUN_1431eaa90(longlong param_1,char param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x54);
  if (1 < uVar3) {
    uVar3 = uVar3 - 1;
    *(ushort *)(param_1 + 0x54) = uVar3;
  }
  uVar2 = 0x11;
  if (param_2 == '\0') {
    *(ulonglong *)(param_1 + 0x100) =
         (ulonglong)*(uint *)(param_1 + 0xcc) + (ulonglong)*(uint *)(param_1 + 0xc0) +
         *(longlong *)(param_1 + 0x108);
    if (uVar3 == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0xd6);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xca);
    }
    vorbis_dsp_restart(param_1 + 0x68,*(undefined2 *)(param_1 + 200),uVar1);
    *(undefined4 *)(param_1 + 0x60) = 3;
    *(undefined4 *)(param_1 + 0x5c) = 0x2d;
    uVar2 = 0x2d;
  }
  return uVar2;
}



// FUNCTION 1431eab60 FUN_1431eab60 body=125 status=ok
// SIG undefined FUN_1431eab60(void)

undefined8 FUN_1431eab60(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint local_res8 [2];
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    uVar2 = FUN_1431c7f80();
    if (uVar2 < *(uint *)(param_1 + 0x28)) {
      local_res8[0] = uVar2;
      iVar3 = FUN_1431eb110(param_1,local_res8);
      if (iVar3 == 1) {
        lVar1 = *(longlong *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x2c) = local_res8[0];
        *(byte *)(lVar1 + 0x295) = *(byte *)(lVar1 + 0x295) & 0x3f;
        *(byte *)(lVar1 + 0x296) = *(byte *)(lVar1 + 0x296) & 0xfe;
        *(uint *)(lVar1 + 0x28c) = uVar2 - local_res8[0];
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1431eabe0 FUN_1431eabe0 body=768 status=ok
// SIG undefined FUN_1431eabe0(void)

ulonglong FUN_1431eabe0(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong lVar13;
  uint uVar14;
  ushort *_Src;
  undefined8 local_68;
  uint local_60;
  undefined1 local_58;
  int local_50 [2];
  undefined8 local_48;
  undefined1 local_40 [8];
  short *local_38;
  
  if (param_2 != 0) {
    uVar14 = 0;
    puVar1 = (uint *)(param_1 + 0x3c);
    local_50[0] = 0;
    local_48 = 0;
    uVar11 = AkFileParser::Parse(param_2,param_3,local_40,param_1 + 0x40,(uint *)(param_1 + 0x38),
                                 puVar1,(int *)(param_1 + 0x30),(uint *)(param_1 + 0x34),local_50,0,
                                 0);
    if ((int)uVar11 != 1) {
      return uVar11;
    }
    if (*local_38 != -1) {
      return 7;
    }
    uVar2 = local_38[1];
    uVar3 = *(undefined4 *)(local_38 + 10);
    local_68 = (ushort *)CONCAT44(uVar3,*(undefined4 *)(local_38 + 2));
    lVar13 = *(longlong *)(param_1 + 0x18);
    if (lVar13 != 0) {
      *(ushort **)(lVar13 + 0x230) = local_68;
      *(uint *)(lVar13 + 0x238) = (uVar2 & 0xff) << 8 | local_60 & 0xfffd0020 | 0x50020;
    }
    if (local_50[0] != 0) {
      *(undefined8 *)(param_1 + 0x10) = local_48;
    }
    uVar10 = *(uint *)(param_1 + 0x34);
    param_2 = (ulonglong)uVar10 + param_2;
    *(longlong *)(param_1 + 0x108) = param_2;
    uVar4 = *(uint *)(local_38 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar4;
    uVar5 = *(undefined4 *)(local_38 + 0x10);
    uVar6 = *(undefined4 *)(local_38 + 0x12);
    uVar7 = *(undefined4 *)(local_38 + 0x14);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(local_38 + 0xe);
    *(undefined4 *)(param_1 + 0xc4) = uVar5;
    *(undefined4 *)(param_1 + 200) = uVar6;
    *(undefined4 *)(param_1 + 0xcc) = uVar7;
    uVar5 = *(undefined4 *)(local_38 + 0x18);
    uVar6 = *(undefined4 *)(local_38 + 0x1a);
    uVar7 = *(undefined4 *)(local_38 + 0x1c);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(local_38 + 0x16);
    *(undefined4 *)(param_1 + 0xd4) = uVar5;
    *(undefined4 *)(param_1 + 0xd8) = uVar6;
    *(undefined4 *)(param_1 + 0xdc) = uVar7;
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(local_38 + 0x1e);
    *(short *)(param_1 + 0xe4) = local_38[0x20];
    uVar5 = *(undefined4 *)(local_38 + 2);
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    uVar8 = *puVar1;
    *(undefined4 *)(param_1 + 0xe8) = uVar5;
    if (uVar8 == 0) {
      uVar8 = uVar4 - 1;
      *puVar1 = uVar8;
    }
    if (((*(uint *)(param_1 + 0x38) <= uVar8) && (uVar8 < uVar4)) &&
       (param_3 == *(int *)(param_1 + 0x30) + uVar10)) {
      *(longlong *)(param_1 + 0x100) = param_2;
      FUN_1431e9f90(param_1);
      if (*(uint *)(param_1 + 0xcc) != 0) {
        pvVar12 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)*(uint *)(param_1 + 0xcc))
        ;
        *(void **)(param_1 + 0xf0) = pvVar12;
        if (pvVar12 == (void *)0x0) {
          return 0x34;
        }
      }
      uVar11 = 1;
      _Src = *(ushort **)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x60) = 1;
      if (*(uint *)(param_1 + 0xcc) != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 0xf0),_Src,(ulonglong)*(uint *)(param_1 + 0xcc));
        *(longlong *)(param_1 + 0x100) =
             *(longlong *)(param_1 + 0x100) + (ulonglong)*(uint *)(param_1 + 0xcc);
        _Src = *(ushort **)(param_1 + 0x100);
      }
      local_68 = _Src + 1;
      local_60 = (uint)*_Src;
      local_58 = 0;
      *(ulonglong *)(param_1 + 0x100) = (longlong)_Src + (ulonglong)local_60 + 2;
      lVar13 = FUN_1431ebc30(&DAT_146b521c0,param_1 + 0x58,*(undefined8 *)(param_1 + 0x18),&local_68
                            );
      *(longlong *)(param_1 + 0x80) = lVar13;
      if ((lVar13 != 0) &&
         (iVar9 = vorbis_dsp_init(param_1 + 0x68,*(undefined1 *)(param_1 + 0xb0)), iVar9 == 0)) {
        lVar13 = *(longlong *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x60) = 3;
        uVar10 = uVar14;
        if ((lVar13 != 0) && (uVar10 = 0, (*(byte *)(lVar13 + 0x295) & 0x40) != 0)) {
          if (*(longlong *)(param_1 + 0xf0) != 0) {
            uVar10 = FUN_1431eab60(param_1);
            uVar11 = (ulonglong)uVar10;
            lVar13 = *(longlong *)(param_1 + 0x18);
            if ((*(byte *)(lVar13 + 0x295) & 0x40) == 0) {
              uVar14 = *(uint *)(lVar13 + 0x28c);
            }
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar14;
          }
          *(byte *)(lVar13 + 0x295) = *(byte *)(lVar13 + 0x295) & 0x3f;
          *(byte *)(lVar13 + 0x296) = *(byte *)(lVar13 + 0x296) & 0xfe;
          *(undefined4 *)(lVar13 + 0x28c) = 0;
          uVar10 = uVar14;
        }
        CAkSrcBankVorbis::VorbisDSPRestart(param_1,uVar10 & 0xffff);
        return uVar11;
      }
      return 2;
    }
  }
  return 2;
}



// FUNCTION 1431eaf00 StopStream body=118 status=ok
// SIG undefined StopStream(void)

void CAkSrcBankVorbis::StopStream(longlong *param_1)

{
  vorbis_dsp_clear(param_1 + 0xd);
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((void *)param_1[0x1e] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[0x22]);
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  CAkSrcBaseEx::StopStream(param_1);
  return;
}



// FUNCTION 1431eaf80 FUN_1431eaf80 body=305 status=ok
// SIG undefined FUN_1431eaf80(void)

undefined4 FUN_1431eaf80(longlong param_1,uint param_2,char param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_2 < 2) && (iVar4 = vorbis_dsp_init(param_1 + 0x68), iVar4 == -1)) {
    return 2;
  }
  iVar4 = 0;
  uVar5 = 1;
  if (param_2 == 1) {
    if (param_3 == '\0') {
      iVar4 = FUN_1431eb110();
      uVar5 = 1;
      if (iVar4 != 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        uVar5 = FUN_1431eb110(param_1);
      }
    }
    else {
      uVar5 = FUN_1431eab60(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(lVar2 + 0x295) & 0x40) == 0) {
      iVar4 = *(int *)(lVar2 + 0x28c);
    }
    else {
      iVar4 = 0;
    }
    *(byte *)(lVar2 + 0x295) = *(byte *)(lVar2 + 0x295) & 0x3f;
    *(byte *)(lVar2 + 0x296) = *(byte *)(lVar2 + 0x296) & 0xfe;
    *(undefined4 *)(lVar2 + 0x28c) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar4;
    sVar3 = *(short *)(param_1 + 0x54);
  }
  else {
    if (param_2 != 0) {
      return 1;
    }
    *(ulonglong *)(param_1 + 0x100) =
         (ulonglong)*(uint *)(param_1 + 0xd0) + *(longlong *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      sVar3 = 1;
    }
    else {
      sVar3 = *(short *)(*(longlong *)(param_1 + 0x18) + 0x290);
    }
    *(short *)(param_1 + 0x54) = sVar3;
  }
  if (sVar3 == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xd6);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xca);
  }
  vorbis_dsp_restart(param_1 + 0x68,iVar4,uVar1);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar5;
}



// FUNCTION 1431eb0c0 VirtualOn body=66 status=ok
// SIG undefined VirtualOn(void)

void CAkSrcBankVorbis::VirtualOn(longlong param_1,uint param_2)

{
  if (param_2 < 2) {
    vorbis_dsp_clear(param_1 + 0x68);
    if (*(void **)(param_1 + 0x110) != (void *)0x0) {
      AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x110));
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
  }
  return;
}



// FUNCTION 1431eb110 FUN_1431eb110 body=194 status=ok
// SIG undefined FUN_1431eb110(void)

undefined8 FUN_1431eb110(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_2 == 0) {
    *param_2 = 0;
    uVar1 = *(uint *)(param_1 + 0xd0);
    goto LAB_1431eb19a;
  }
  uVar1 = *(uint *)(param_1 + 0xcc);
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if ((lVar2 == 0) || (uVar1 >> 2 == 0)) {
    *param_2 = 0;
    return 2;
  }
  iVar6 = 0;
  uVar4 = 0;
  uVar7 = 0;
  if (uVar1 >> 2 == 0) {
LAB_1431eb188:
    uVar1 = *(uint *)(param_1 + 0xd0);
    uVar7 = 0;
  }
  else {
    do {
      uVar5 = *(ushort *)(lVar2 + uVar4 * 4) + uVar7;
      if (*param_2 < uVar5) break;
      iVar6 = iVar6 + (uint)*(ushort *)(lVar2 + 2 + uVar4 * 4);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar7 = uVar5;
    } while (uVar3 < uVar1 >> 2);
    if ((int)uVar4 == 0) goto LAB_1431eb188;
    uVar1 = uVar1 + iVar6;
  }
  *param_2 = uVar7;
LAB_1431eb19a:
  *(ulonglong *)(param_1 + 0x100) = (ulonglong)uVar1 + *(longlong *)(param_1 + 0x108);
  return 1;
}



// FUNCTION 1431eb1e0 VorbisDSPRestart body=56 status=ok
// SIG undefined VorbisDSPRestart(void)

void CAkSrcBankVorbis::VorbisDSPRestart(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xd6);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xca);
  }
  vorbis_dsp_restart(param_1 + 0x68,param_2,uVar1);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return;
}



// FUNCTION 1431eb220 _vorbis_window body=83 status=ok
// SIG undefined _vorbis_window(void)

undefined * _vorbis_window(int param_1)

{
  if (param_1 == 0x80) {
    return &DAT_1467be4a0;
  }
  if (param_1 == 0x100) {
    return &DAT_1467be6a0;
  }
  if (param_1 == 0x200) {
    return &DAT_1467beaa0;
  }
  if (param_1 != 0x400) {
    if (param_1 != 0x800) {
      return (undefined *)0x0;
    }
    return &DAT_1467c02a0;
  }
  return &DAT_1467bf2a0;
}



// FUNCTION 1431eb280 vorbis_dsp_clear body=92 status=ok
// SIG undefined vorbis_dsp_clear(void)

void vorbis_dsp_clear(longlong param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    if ((void *)**(undefined8 **)(param_1 + 0x28) != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)**(undefined8 **)(param_1 + 0x28));
      **(undefined8 **)(param_1 + 0x28) = 0;
      pvVar1 = *(void **)(param_1 + 0x20);
    }
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1431eb2e0 vorbis_dsp_init body=271 status=ok
// SIG undefined vorbis_dsp_init(void)

undefined8 vorbis_dsp_init(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *_Dst;
  void *pvVar3;
  void *_Size;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2;
  *(int *)(param_1 + 0x10) = param_2;
  puVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,lVar5 << 4);
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)0x0;
    *(undefined8 **)(param_1 + 0x28) = puVar2 + lVar5;
    *puVar2 = 0;
    **(undefined8 **)(param_1 + 0x28) = 0;
    uVar1 = (*(int *)(*(longlong *)(param_1 + 0x18) + 4) >> 2) * *(int *)(param_1 + 0x10) * 4 + 0xf;
    uVar4 = uVar1 & 0xfffffff0;
    _Dst = pvVar3;
    _Size = pvVar3;
    if (uVar4 != 0) {
      _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar4);
      _Size = (void *)(ulonglong)uVar4;
    }
    **(undefined8 **)(param_1 + 0x28) = _Dst;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(size_t)_Size);
      *(undefined1 *)(param_1 + 0x44) = 1;
      if (0 < param_2) {
        do {
          *(void **)(*(longlong *)(param_1 + 0x28) + (longlong)pvVar3 * 8) = _Dst;
          _Dst = (void *)((longlong)_Dst +
                         (longlong)
                         (int)((longlong)((longlong)(int)uVar1 & 0xfffffffffffffff0U) /
                              (longlong)param_2));
          pvVar3 = (void *)((longlong)pvVar3 + 1);
        } while ((longlong)pvVar3 < lVar5);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1431eb3f0 vorbis_dsp_pcmout body=376 status=ok
// SIG undefined vorbis_dsp_pcmout(void)

int vorbis_dsp_pcmout(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    iVar7 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
    if (param_2 != 0) {
      if (param_3 < iVar7) {
        iVar7 = param_3;
      }
      piVar1 = *(int **)(param_1 + 0x18);
      uVar3 = _vorbis_window(*piVar1 >> 1);
      uVar8 = uVar3;
      uVar4 = _vorbis_window(piVar1[1] >> 1);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar6 = 0;
      lVar9 = 0;
      do {
        if (param_4 < iVar6) {
          iVar2 = iVar6 + -1;
        }
        else {
          iVar2 = iVar6;
          if (iVar6 == param_4) {
            iVar2 = iVar5 + -1;
          }
        }
        mdct_unroll_lap(*piVar1,piVar1[1],*(undefined4 *)(param_1 + 0x38),
                        *(undefined4 *)(param_1 + 0x3c),
                        *(undefined8 *)(lVar9 + *(longlong *)(param_1 + 0x20)),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar9),uVar8,uVar4,
                        param_2 + (longlong)(iVar2 * param_3) * 4,iVar5,*(int *)(param_1 + 0x30),
                        *(int *)(param_1 + 0x30) + iVar7);
        iVar5 = piVar1[*(int *)(param_1 + 0x3c)];
        if (iVar5 < 0) {
          iVar5 = iVar5 + 3;
        }
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(*(longlong *)(param_1 + 0x28) + lVar9),
                   (void *)(*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) +
                           (longlong)(iVar5 >> 2) * 4),(ulonglong)(uint)((iVar5 >> 2) * 4));
        iVar5 = *(int *)(param_1 + 0x10);
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 8;
        uVar8 = uVar3;
      } while (iVar6 < iVar5);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar7;
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
    return iVar7;
  }
  return 0;
}



// FUNCTION 1431eb570 vorbis_dsp_restart body=20 status=ok
// SIG undefined vorbis_dsp_restart(void)

undefined8 vorbis_dsp_restart(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x40) = param_2;
  *(undefined2 *)(param_1 + 0x42) = param_3;
  return 0;
}



// FUNCTION 1431eb590 vorbis_dsp_synthesis body=479 status=ok
// SIG undefined vorbis_dsp_synthesis(void)

void vorbis_dsp_synthesis(undefined8 *param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar8 = 0;
  iVar10 = *(int *)(param_1 + 2);
  if (0 < iVar10) {
    uVar7 = uVar8;
    uVar12 = uVar8;
    do {
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      *(longlong *)(uVar7 + param_1[4]) = param_3;
      param_3 = param_3 + param_4 / iVar10;
      uVar7 = uVar7 + 8;
    } while ((int)uVar11 < *(int *)(param_1 + 2));
  }
  lVar2 = param_1[3];
  *(undefined1 *)(param_1 + 1) = 0;
  pbVar3 = (byte *)*param_2;
  *param_1 = pbVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  bVar1 = *pbVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  iVar10 = *(int *)((longlong)param_1 + 0x3c);
  *(int *)(param_1 + 7) = iVar10;
  lVar4 = (ulonglong)(bVar1 & 1) * 2;
  *(uint *)((longlong)param_1 + 0x3c) = (uint)*(byte *)(lVar4 + *(longlong *)(lVar2 + 0x20));
  iVar10 = *(int *)(lVar2 + (longlong)iVar10 * 4);
  if (*(char *)((longlong)param_1 + 0x44) == '\0') {
    iVar5 = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
    uVar7 = uVar8;
    do {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(uVar7 + param_1[5]),
                 (void *)(*(longlong *)(uVar7 + param_1[4]) + (longlong)iVar5 * 4),
                 (ulonglong)(uint)(iVar5 * 4));
      uVar11 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar11;
      uVar7 = uVar7 + 8;
    } while ((int)uVar11 < *(int *)(param_1 + 2));
    *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  }
  iVar5 = *(int *)(param_1 + 6);
  *(undefined4 *)(param_1 + 6) = 0;
  if (iVar5 == -1) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    if (*(int *)(lVar2 + 4) / 2 <= (int)(uint)*(ushort *)(param_1 + 8)) {
      return;
    }
  }
  else {
    iVar5 = *(int *)(lVar2 + (longlong)*(int *)((longlong)param_1 + 0x3c) * 4);
    uVar9 = ((int)((iVar10 >> 0x1f & 3U) + iVar10) >> 2) +
            ((int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2);
    uVar6 = *(ushort *)(param_1 + 8);
    *(uint *)((longlong)param_1 + 0x34) = uVar9;
    uVar11 = 0;
    if (uVar6 != 0) {
      *(uint *)(param_1 + 6) = (uint)uVar6;
      if (uVar6 == uVar9 || (int)(uint)uVar6 < (int)uVar9) {
        *(undefined2 *)(param_1 + 8) = 0;
        uVar11 = (uint)uVar6;
      }
      else {
        uVar6 = uVar6 - (short)uVar9;
        *(uint *)(param_1 + 6) = uVar9;
        *(ushort *)(param_1 + 8) = uVar6;
        uVar11 = uVar9;
        if (*(int *)(lVar2 + 4) / 2 <= (int)(uint)uVar6) {
          return;
        }
      }
    }
    if ((*(char *)(param_2 + 2) != '\0') &&
       (iVar10 = uVar9 - *(ushort *)((longlong)param_1 + 0x42),
       *(int *)((longlong)param_1 + 0x34) = iVar10, iVar10 < (int)uVar11)) {
      *(uint *)((longlong)param_1 + 0x34) = uVar11;
    }
  }
  FUN_1431ec4d0(param_1,*(longlong *)(lVar2 + 0x28) +
                        (ulonglong)*(byte *)(lVar4 + 1 + *(longlong *)(lVar2 + 0x20)) * 0x28);
  return;
}



// FUNCTION 1431eb770 vorbis_shift_dct body=122 status=ok
// SIG undefined vorbis_shift_dct(void)

void vorbis_shift_dct(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0;
  do {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x3c) * 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    _guard_xfg_dispatch_icall_nop
              (*(void **)(lVar3 + *(longlong *)(param_1 + 0x28)),
               (void *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3) +
                       (longlong)(iVar1 >> 2) * 4),(ulonglong)(uint)((iVar1 >> 2) * 4));
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + 8;
  } while (iVar2 < *(int *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}



// FUNCTION 1431eb7f0 DecodeVorbis body=712 status=ok
// SIG undefined DecodeVorbis(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ushort * DecodeVorbis(int *param_1,ushort param_2,longlong param_3,undefined8 *param_4,uint *param_5
                     )

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  AKRESULT AVar6;
  ushort *_Dst;
  void *pvVar7;
  ushort *puVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  ushort *_Src;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 auStack_a0 [5];
  uint local_78;
  uint local_74;
  ushort *local_70;
  longlong local_68;
  ushort *local_60;
  uint local_58;
  undefined1 local_50;
  
  local_78 = param_1[0x18];
  local_70 = (ushort *)(ulonglong)local_78;
  puVar12 = (ushort *)0x0;
  *param_1 = 0;
  local_74 = (*(int *)(*(longlong *)(param_1 + 10) + 4) >> 1) * param_1[8] * 4 + 0xfU & 0xfffffff0;
  uVar10 = (longlong)(int)local_74 + 0xf;
  if (uVar10 <= (ulonglong)(longlong)(int)local_74) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x1431eb86d;
  lVar4 = -(uVar10 & 0xfffffffffffffff0);
  local_68 = (longlong)&local_78 + lVar4;
  puVar14 = puVar12;
  _Dst = puVar12;
  do {
    iVar16 = param_1[0x19];
    puVar8 = puVar14 + 1;
    if (local_70 < puVar8) goto LAB_1431eba78;
    if (_Dst != (ushort *)0x0) {
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eb8ad;
      AVar6 = AK::MemoryMgr::Free(g_LEngineDefaultPoolId,_Dst);
      puVar8 = (ushort *)(ulonglong)AVar6;
      _Dst = puVar12;
    }
    uVar2 = *(ushort *)(param_3 + (longlong)puVar14);
    _Src = (ushort *)(param_3 + (longlong)puVar14) + 1;
    if (param_2 < uVar2) {
LAB_1431eba69:
      *param_1 = 0;
      param_1[1] = 2;
      goto LAB_1431eba94;
    }
    if (param_1[2] == 4) {
LAB_1431eba78:
      puVar8 = *(ushort **)(param_1 + 0xc);
      param_1[1] = 0x2e;
      param_1[3] = (int)puVar14;
      if (*(longlong *)puVar8 != 0) {
        *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eba94;
        puVar8 = (ushort *)vorbis_shift_dct(param_1 + 4);
      }
      goto LAB_1431eba94;
    }
    uVar10 = (ulonglong)uVar2;
    if (local_70 < (ushort *)((longlong)puVar14 + uVar10 + 2)) goto LAB_1431eba78;
    if (local_70 < (ushort *)((longlong)puVar14 + uVar10 + 10)) {
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eb90c;
      _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)(uVar2 + 8));
      puVar8 = (ushort *)0x0;
      if (_Dst == (ushort *)0x0) goto LAB_1431eba69;
      *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eb926;
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,uVar10);
      _Src = _Dst;
    }
    local_60 = _Src;
    lVar5 = local_68;
    uVar11 = local_74;
    local_58 = (uint)uVar2;
    uVar15 = (int)puVar14 + 2 + local_58;
    puVar14 = (ushort *)(ulonglong)uVar15;
    if ((uVar15 == local_78) && ((char)iVar16 != '\0')) {
      local_50 = 1;
      param_1[2] = 4;
    }
    else {
      local_50 = 0;
    }
    piVar1 = param_1 + 4;
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eb96d;
    vorbis_dsp_synthesis(piVar1,&local_60,lVar5,uVar11);
    iVar16 = param_1[0x11] - param_1[0x10];
  } while (iVar16 == 0);
  iVar13 = param_1[8];
  param_1[3] = uVar15;
  pvVar7 = (void *)*param_4;
  uVar11 = iVar13 * iVar16 * 4;
  if (pvVar7 == (void *)0x0) {
LAB_1431eb9bf:
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eb9d2;
    pvVar7 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)uVar11,0x10);
    *param_4 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      param_1[1] = 2;
      param_1[0x17] = 0;
      puVar8 = (ushort *)0x0;
      goto LAB_1431eba94;
    }
    *param_5 = uVar11;
    iVar13 = param_1[8];
  }
  else if (*param_5 < uVar11) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eb9bf;
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,pvVar7);
    goto LAB_1431eb9bf;
  }
  puVar14 = (ushort *)(ulonglong)(iVar13 + 1);
  if ((param_1[0x16] & 0x8000U) != 0) {
    puVar14 = puVar12;
    do {
      bVar9 = (byte)puVar12;
      uVar11 = (int)puVar12 + 1;
      puVar12 = (ushort *)(ulonglong)uVar11;
      puVar14 = (ushort *)
                (ulonglong)((int)puVar14 + (((uint)param_1[0x16] >> 0xc) >> (bVar9 & 0x1f) & 1));
    } while (uVar11 < 3);
  }
  uVar3 = *param_4;
  *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eba31;
  vorbis_dsp_pcmout(piVar1,uVar3,iVar16,puVar14);
  param_1[0x17] = iVar16;
  *param_1 = iVar16;
  if (param_1[2] == 4) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431eba4e;
    puVar8 = (ushort *)vorbis_dsp_pcmout(piVar1,0,0,0);
    if ((int)puVar8 == 0) {
      param_1[1] = 0x11;
      goto LAB_1431eba94;
    }
  }
  puVar8 = (ushort *)(ulonglong)(uint)-*param_1;
  param_1[1] = 0x2e - (uint)(*param_1 != 0);
LAB_1431eba94:
  if (_Dst != (ushort *)0x0) {
    *(undefined8 *)((longlong)auStack_a0 + lVar4) = 0x1431ebaa7;
    AVar6 = AK::MemoryMgr::Free(g_LEngineDefaultPoolId,_Dst);
    puVar8 = (ushort *)(ulonglong)AVar6;
  }
  return puVar8;
}



// FUNCTION 1431ebac0 FUN_1431ebac0 body=358 status=ok
// SIG undefined FUN_1431ebac0(void)

bool FUN_1431ebac0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar9 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar9)) {
    puVar8 = &DAT_145ad1f50;
    uVar7 = 0;
    do {
      uVar2 = *puVar8;
      uVar10 = (ulonglong)uVar2;
      if (uVar1 < uVar2) {
        if (uVar2 != 0) {
          uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
          puVar4 = (undefined8 *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar6 = FUN_143134440(param_1);
          if (cVar6 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)puVar4;
            *(uint *)(param_1 + 1) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          }
          else {
            if (uVar2 != 0) {
              do {
                uVar7 = *(uint *)(param_1 + 1);
                if (uVar7 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar7 + 1;
                  puVar11 = (undefined8 *)(*param_1 + (ulonglong)uVar7 * 8);
                  if (puVar11 != (undefined8 *)0x0) {
                    *puVar11 = 0;
                  }
                }
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar11 = puVar4;
            if (uVar1 != 0) {
              do {
                puVar8 = (uint *)*puVar11;
                while (puVar8 != (uint *)0x0) {
                  puVar5 = *(uint **)(puVar8 + 2);
                  *(undefined8 *)(puVar8 + 2) =
                       *(undefined8 *)(*param_1 + ((ulonglong)*puVar8 % (ulonglong)uVar2) * 8);
                  *(uint **)(*param_1 + ((ulonglong)*puVar8 % (ulonglong)uVar2) * 8) = puVar8;
                  puVar8 = puVar5;
                }
                uVar9 = uVar9 - 1;
                puVar11 = puVar11 + 1;
              } while (uVar9 != 0);
            }
            if (puVar4 != (undefined8 *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
            }
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 1431ebc30 FUN_1431ebc30 body=477 status=ok
// SIG undefined FUN_1431ebc30(void)

uint * FUN_1431ebc30(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar9 = *(uint **)(*param_1 +
                            ((ulonglong)*(uint *)(param_2 + 0x88) %
                            (ulonglong)*(uint *)(param_1 + 1)) * 8); puVar9 != (uint *)0x0;
        puVar9 = *(uint **)(puVar9 + 2)) {
      if (*puVar9 == *(uint *)(param_2 + 0x88)) {
        if (puVar9 != (uint *)0x0) {
          puVar9[0x1c] = puVar9[0x1c] + 1;
          puVar9 = puVar9 + 0x1e;
          goto LAB_1431ebd97;
        }
        break;
      }
    }
  }
  puVar7 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0xc0);
  puVar9 = (uint *)0x0;
  if (puVar7 != (uint *)0x0) {
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x2e] = 0;
    puVar7[0x2f] = 0;
    puVar7[0x24] = 0;
    puVar7[0x19] = *(uint *)(param_2 + 0x84);
    uVar2 = *(undefined1 *)(param_2 + 0x58);
    iVar6 = vorbis_info_init(puVar7 + 0x1e,*(undefined1 *)(param_2 + 0x8c),
                             *(undefined1 *)(param_2 + 0x8d));
    if (iVar6 == 0) {
      local_38 = *param_4;
      local_2c = *(undefined4 *)(param_4 + 1);
      local_30 = 0;
      iVar6 = vorbis_unpack_books(puVar7,uVar2,&local_38);
      if (iVar6 == 0) {
        puVar7[0x1c] = puVar7[0x1c] + 1;
        *puVar7 = *(uint *)(param_2 + 0x88);
        cVar5 = FUN_1431ebac0(param_1);
        if (cVar5 != '\0') {
          uVar3 = *(uint *)(param_1 + 1);
          *(undefined8 *)(puVar7 + 2) =
               *(undefined8 *)(*param_1 + ((ulonglong)*puVar7 % (ulonglong)uVar3) * 8);
          *(uint **)(*param_1 + ((ulonglong)*puVar7 % (ulonglong)uVar3) * 8) = puVar7;
          *(int *)(param_1 + 2) = (int)param_1[2] + 1;
          puVar9 = puVar7 + 0x1e;
          goto LAB_1431ebd97;
        }
      }
    }
    Codebook::Term(puVar7);
    lVar4 = g_LEngineDefaultPoolId;
    puVar11 = puVar7 + 0x14;
    lVar10 = 4;
    lVar8 = g_LEngineDefaultPoolId;
    do {
      puVar1 = puVar11 + -4;
      puVar11 = puVar11 + -4;
      lVar10 = lVar10 + -1;
      if (*(void **)puVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(lVar8,*(void **)puVar1);
        lVar8 = g_LEngineDefaultPoolId;
      }
    } while (lVar10 != 0);
    AK::MemoryMgr::Free(lVar4,puVar7);
  }
LAB_1431ebd97:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return puVar9;
}



// FUNCTION 1431ebe10 ReleaseCodebook body=346 status=ok
// SIG undefined ReleaseCodebook(void)

void AkVorbisCodebookMgr::ReleaseCodebook(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x88) % (ulonglong)*(uint *)(param_1 + 1);
    puVar1 = *(uint **)(*param_1 + uVar2 * 8);
    puVar9 = (uint *)0x0;
    while (puVar3 = puVar1, puVar3 != (uint *)0x0) {
      if (*puVar3 == *(uint *)(param_2 + 0x88)) {
        if (puVar3 != (uint *)0x0) {
          puVar3[0x1c] = puVar3[0x1c] - 1;
          if (0 < (int)puVar3[0x1c]) goto LAB_1431ebf2a;
          lVar8 = *(longlong *)(puVar3 + 2);
          if (lVar8 != 0) goto LAB_1431ebeb3;
          uVar7 = uVar2;
          goto LAB_1431ebea2;
        }
        break;
      }
      puVar9 = puVar3;
      puVar1 = *(uint **)(puVar3 + 2);
    }
  }
  goto LAB_1431ebf58;
  while (*(longlong *)(*param_1 + uVar7 * 8) == 0) {
LAB_1431ebea2:
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    if (*(uint *)(param_1 + 1) <= uVar6) break;
  }
LAB_1431ebeb3:
  if (puVar9 == (uint *)0x0) {
    *(longlong *)(*param_1 + uVar2 * 8) = lVar8;
  }
  else {
    *(longlong *)(puVar9 + 2) = lVar8;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  Codebook::Term(puVar3);
  lVar4 = g_LEngineDefaultPoolId;
  puVar9 = puVar3 + 0x14;
  lVar8 = 4;
  lVar5 = g_LEngineDefaultPoolId;
  do {
    puVar1 = puVar9 + -4;
    puVar9 = puVar9 + -4;
    lVar8 = lVar8 + -1;
    if (*(void **)puVar1 != (void *)0x0) {
      AK::MemoryMgr::Free(lVar5,*(void **)puVar1);
      lVar5 = g_LEngineDefaultPoolId;
    }
  } while (lVar8 != 0);
  AK::MemoryMgr::Free(lVar4,puVar3);
LAB_1431ebf2a:
  if (((int)param_1[2] == 0) && ((void *)*param_1 != (void *)0x0)) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
LAB_1431ebf58:
                    /* WARNING: Could not recover jumptable at 0x0001431ebf63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1431ebf70 Term body=220 status=ok
// SIG undefined Term(void)

void Codebook::Term(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  pvVar2 = *(void **)(param_1 + 0xb8);
  uVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar5 = uVar3;
    if (0 < *(int *)(param_1 + 0x90)) {
      do {
        if (*(void **)(uVar5 + (longlong)pvVar2) != (void *)0x0) {
          AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(uVar5 + (longlong)pvVar2));
          pvVar2 = *(void **)(param_1 + 0xb8);
        }
        pvVar1 = *(void **)(uVar5 + 0x10 + (longlong)pvVar2);
        if (pvVar1 != (void *)0x0) {
          AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,pvVar1);
          pvVar2 = *(void **)(param_1 + 0xb8);
        }
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
        uVar5 = uVar5 + 0x20;
      } while ((int)uVar4 < *(int *)(param_1 + 0x90));
    }
    if (pvVar2 != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar2);
    }
  }
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1431ec050 ilog body=28 status=ok
// SIG undefined ilog(void)

int ilog(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = 0;
  uVar2 = param_1 - 1;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  uVar3 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    do {
      iVar1 = iVar1 + 1;
      uVar2 = (uint)uVar3;
      uVar3 = uVar3 >> 1;
    } while (1 < uVar2);
  }
  return iVar1;
}



// FUNCTION 1431ec070 mapping_info_unpack body=1120 status=ok
// SIG undefined mapping_info_unpack(void)

undefined8
mapping_info_unpack(int *param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ushort *puVar11;
  byte *pbVar12;
  short *psVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  bVar16 = *(byte *)(param_4 + 1);
  bVar15 = *(byte *)*param_4;
  bVar7 = (byte)((char)bVar16 + 1) & 7;
  iVar9 = *(int *)((longlong)param_4 + 0xc) - ((char)bVar16 + 1 >> 3);
  puVar11 = (ushort *)((byte *)*param_4 + ((longlong)(char)bVar16 + 1 >> 3));
  *(byte *)(param_4 + 1) = bVar7;
  *(int *)((longlong)param_4 + 0xc) = iVar9;
  *param_4 = (longlong)puVar11;
  if ((bVar15 >> (bVar16 & 0x1f) & 1) == 0) {
    iVar9 = 1;
  }
  else {
    uVar1 = *puVar11;
    uVar6 = bVar7 + 4;
    *(byte *)(param_4 + 1) = (byte)uVar6 & 7;
    *(uint *)((longlong)param_4 + 0xc) = iVar9 - (uVar6 >> 3);
    *param_4 = (longlong)((ulonglong)(uVar6 >> 3) + (longlong)puVar11);
    iVar9 = (uVar1 >> bVar7 & 0xf) + 1;
  }
  uVar10 = 0;
  *param_1 = iVar9;
  bVar16 = *(byte *)(param_4 + 1);
  bVar15 = *(byte *)*param_4;
  bVar7 = (byte)((char)bVar16 + 1) & 7;
  iVar9 = *(int *)((longlong)param_4 + 0xc) - ((char)bVar16 + 1 >> 3);
  *(byte *)(param_4 + 1) = bVar7;
  pbVar12 = (byte *)*param_4 + ((longlong)(char)bVar16 + 1 >> 3);
  *(int *)((longlong)param_4 + 0xc) = iVar9;
  *param_4 = (longlong)pbVar12;
  if ((bVar15 >> (bVar16 & 0x1f) & 1) != 0) {
    sVar2 = *(short *)pbVar12;
    uVar6 = bVar7 + 8;
    *(byte *)(param_4 + 1) = (byte)uVar6 & 7;
    *param_4 = (longlong)(pbVar12 + (uVar6 >> 3));
    iVar8 = (char)(sVar2 >> bVar7) + 1;
    *(uint *)((longlong)param_4 + 0xc) = iVar9 - (uVar6 >> 3);
    param_1[6] = iVar8;
    uVar17 = uVar10;
    if (iVar8 * 2 != 0) {
      uVar6 = iVar8 * 2 + 3U & 0xfffffffc;
      uVar14 = *(int *)(param_5 + 0x50) + uVar6;
      if (uVar14 <= *(uint *)(param_5 + 0x54)) {
        uVar17 = *(ulonglong *)(param_5 + 0x48);
        *(uint *)(param_5 + 0x50) = uVar14;
        *(ulonglong *)(param_5 + 0x48) = uVar6 + uVar17;
        iVar8 = param_1[6];
      }
    }
    *(ulonglong *)(param_1 + 8) = uVar17;
    if (0 < iVar8) {
      iVar9 = ilog(param_3);
      uVar17 = uVar10;
      uVar18 = uVar10;
      do {
        bVar15 = (byte)(&DAT_1467c22b0)[iVar9] &
                 (byte)(*(longlong *)*param_4 >> (*(byte *)(param_4 + 1) & 0x3f));
        iVar8 = (char)*(byte *)(param_4 + 1) + iVar9;
        *(byte *)(param_4 + 1) = (byte)iVar8 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar8 >> 3);
        *param_4 = ((longlong)iVar8 >> 3) + *param_4;
        *(byte *)(uVar17 + *(longlong *)(param_1 + 8)) = bVar15;
        bVar16 = *(byte *)(param_4 + 1);
        uVar3 = (&DAT_1467c22b0)[iVar9];
        iVar8 = iVar9 + (char)bVar16;
        lVar4 = *(longlong *)*param_4;
        *(byte *)(param_4 + 1) = (byte)iVar8 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar8 >> 3);
        bVar16 = (byte)uVar3 & (byte)(lVar4 >> (bVar16 & 0x3f));
        *param_4 = ((longlong)iVar8 >> 3) + *param_4;
        *(byte *)(uVar17 + 1 + *(longlong *)(param_1 + 8)) = bVar16;
        if ((((uint)bVar15 == (uint)bVar16) || (param_3 <= (int)(uint)bVar15)) ||
           (param_3 <= (int)(uint)bVar16)) goto LAB_1431ec4b4;
        uVar6 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar6;
        uVar17 = uVar17 + 2;
      } while ((int)uVar6 < param_1[6]);
    }
  }
  bVar16 = *(byte *)(param_4 + 1);
  iVar9 = (char)bVar16 + 2;
  uVar1 = *(ushort *)*param_4;
  *(byte *)(param_4 + 1) = (byte)iVar9 & 7;
  *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
  *param_4 = ((longlong)iVar9 >> 3) + *param_4;
  if ((uVar1 >> (bVar16 & 0x1f) & 3) == 0) {
    if (1 < *param_1) {
      uVar17 = uVar10;
      if (param_3 != 0) {
        uVar6 = param_3 + 3U & 0xfffffffc;
        uVar14 = *(int *)(param_5 + 0x50) + uVar6;
        if (uVar14 <= *(uint *)(param_5 + 0x54)) {
          uVar17 = *(ulonglong *)(param_5 + 0x48);
          *(uint *)(param_5 + 0x50) = uVar14;
          *(ulonglong *)(param_5 + 0x48) = uVar6 + uVar17;
        }
      }
      *(ulonglong *)(param_1 + 2) = uVar17;
      uVar17 = uVar10;
      if (0 < param_3) {
        do {
          bVar16 = *(byte *)(param_4 + 1);
          iVar9 = (char)bVar16 + 4;
          uVar1 = *(ushort *)*param_4;
          *(byte *)(param_4 + 1) = (byte)iVar9 & 7;
          *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
          *param_4 = ((longlong)iVar9 >> 3) + *param_4;
          *(byte *)(uVar17 + *(longlong *)(param_1 + 2)) = (byte)(uVar1 >> (bVar16 & 0x1f)) & 0xf;
          if (*param_1 <= (int)(uint)*(byte *)(uVar17 + *(longlong *)(param_1 + 2)))
          goto LAB_1431ec4b4;
          uVar17 = uVar17 + 1;
        } while ((longlong)uVar17 < (longlong)param_3);
      }
    }
    iVar9 = *param_1;
    uVar17 = uVar10;
    if (iVar9 * 2 != 0) {
      uVar6 = iVar9 * 2 + 3U & 0xfffffffc;
      uVar14 = *(int *)(param_5 + 0x50) + uVar6;
      if (uVar14 <= *(uint *)(param_5 + 0x54)) {
        uVar17 = *(ulonglong *)(param_5 + 0x48);
        *(uint *)(param_5 + 0x50) = uVar14;
        *(ulonglong *)(param_5 + 0x48) = uVar6 + uVar17;
        iVar9 = *param_1;
      }
    }
    *(ulonglong *)(param_1 + 4) = uVar17;
    uVar17 = uVar10;
    if (0 < iVar9) {
      do {
        lVar4 = param_4[1];
        iVar9 = (char)lVar4 + 8;
        bVar16 = (byte)iVar9 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
        *(byte *)(param_4 + 1) = bVar16;
        psVar13 = (short *)(((longlong)(char)lVar4 + 8 >> 3) + *param_4);
        *param_4 = (longlong)psVar13;
        uVar6 = bVar16 + 8;
        sVar2 = *psVar13;
        *(byte *)(param_4 + 1) = (byte)uVar6 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (uVar6 >> 3);
        *param_4 = (ulonglong)(uVar6 >> 3) + (longlong)psVar13;
        *(char *)(uVar17 + *(longlong *)(param_1 + 4)) = (char)(sVar2 >> bVar16);
        if (*(int *)(param_2 + 0x10) <= (int)*(char *)(*(longlong *)(param_1 + 4) + uVar17))
        goto LAB_1431ec4b4;
        bVar16 = *(byte *)(param_4 + 1);
        iVar9 = (char)bVar16 + 8;
        sVar2 = *(short *)*param_4;
        *(byte *)(param_4 + 1) = (byte)iVar9 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
        *param_4 = ((longlong)iVar9 >> 3) + *param_4;
        *(char *)(*(longlong *)(param_1 + 4) + 1 + uVar17) = (char)(sVar2 >> (bVar16 & 0x1f));
        if (*(int *)(param_2 + 0x14) <= (int)*(char *)(*(longlong *)(param_1 + 4) + 1 + uVar17))
        goto LAB_1431ec4b4;
        uVar6 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar6;
        uVar17 = uVar17 + 2;
      } while ((int)uVar6 < *param_1);
    }
    uVar5 = 0;
  }
  else {
LAB_1431ec4b4:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 1431ec4d0 FUN_1431ec4d0 body=1259 status=ok
// SIG undefined FUN_1431ec4d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1431ec4d0(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined8 *puVar35;
  longlong lVar36;
  undefined4 uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong *plVar40;
  ulonglong uVar41;
  int *piVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  int local_res8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [48];
  longlong *local_78 [2];
  longlong local_68;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x3c) * 4);
  uVar41 = (longlong)iVar2 * 8;
  uVar23 = uVar41 + 0xf;
  if (uVar23 <= uVar41) {
    uVar23 = 0xffffffffffffff0;
  }
  uStack_b0 = 0x1431ec535;
  lVar36 = -(uVar23 & 0xfffffffffffffff0);
  uVar24 = (longlong)iVar2 * 4;
  uVar23 = uVar24 + 0xf;
  if (uVar23 <= uVar24) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_a8 + lVar36 + -8) = 0x1431ec561;
  lVar25 = -(uVar23 & 0xfffffffffffffff0);
  uVar23 = uVar24 + 0xf;
  lVar34 = (longlong)local_78 + lVar25 + lVar36;
  local_68 = lVar34;
  if (uVar23 <= uVar24) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_a8 + lVar25 + lVar36 + -8) = 0x1431ec582;
  lVar6 = -(uVar23 & 0xfffffffffffffff0);
  uVar23 = uVar41 + 0xf;
  lVar16 = lVar6 + lVar25 + lVar36 + -0x78;
  if (uVar23 <= uVar41) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_a8 + lVar6 + lVar25 + lVar36 + -8) = 0x1431ec59f;
  lVar7 = -(uVar23 & 0xfffffffffffffff0);
  puVar30 = auStack_a8 + lVar7 + lVar6 + lVar25 + lVar36;
  uVar23 = 0;
  local_res8 = 0;
  plVar40 = (longlong *)((longlong)local_78 + lVar7 + lVar6 + lVar25 + lVar36);
  local_78[0] = plVar40;
  if (0 < iVar2) {
    puVar29 = auStack_a8 + lVar7 + lVar6 + lVar25 + lVar36;
    uVar41 = uVar23;
    do {
      uVar24 = uVar23;
      if (1 < *param_2) {
        uVar24 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 2) + uVar41);
      }
      uVar27 = (longlong)
               *(int *)((longlong)*(char *)(*(longlong *)(param_2 + 4) + uVar24 * 2) * 0x40 + 0x34 +
                       *(longlong *)(lVar4 + 0x30)) * 4;
      uVar24 = uVar27 + 0xf;
      if (uVar24 <= uVar27) {
        uVar24 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar29 + -8) = 0x1431ec61a;
      lVar34 = -(uVar24 & 0xfffffffffffffff0);
      puVar30 = puVar29 + lVar34;
      *plVar40 = (longlong)(puVar29 + lVar34 + 0x30);
      *(undefined8 *)(puVar29 + lVar34 + -8) = 0x1431ec632;
      lVar25 = FUN_1431efa10(param_1);
      *plVar40 = lVar25;
      *(uint *)((longlong)local_78 + uVar41 * 4 + lVar16 + 0x78) = (uint)(lVar25 != 0);
      _Dst = *(void **)((longlong)plVar40 + (*(longlong *)(param_1 + 0x20) - (longlong)local_78[0]))
      ;
      *(undefined8 *)(puVar29 + lVar34 + -8) = 0x1431ec65b;
      _guard_xfg_dispatch_icall_nop(_Dst,0,((longlong)iVar3 & 0x7fffffffU) << 1);
      uVar41 = uVar41 + 1;
      local_res8 = local_res8 + 1;
      plVar40 = plVar40 + 1;
      puVar29 = puVar29 + lVar34;
      lVar34 = local_68;
    } while (local_res8 < *(int *)(param_1 + 0x10));
  }
  uVar41 = uVar23;
  uVar24 = uVar23;
  if (0 < param_2[6]) {
    do {
      uVar27 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + uVar41);
      if ((*(int *)((longlong)local_78 + uVar27 * 4 + lVar16 + 0x78) != 0) ||
         (*(int *)((longlong)local_78 +
                  (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + 1 + uVar41) * 4 + lVar16 + 0x78)
          != 0)) {
        *(undefined4 *)((longlong)local_78 + uVar27 * 4 + lVar16 + 0x78) = 1;
        *(undefined4 *)
         ((longlong)local_78 +
         (ulonglong)*(byte *)(uVar41 + 1 + *(longlong *)(param_2 + 8)) * 4 + lVar16 + 0x78) = 1;
      }
      uVar31 = (int)uVar24 + 1;
      uVar41 = uVar41 + 2;
      uVar24 = (ulonglong)uVar31;
    } while ((int)uVar31 < param_2[6]);
  }
  uVar41 = uVar23;
  uVar24 = uVar23;
  if (0 < *param_2) {
    do {
      uVar27 = uVar23;
      uVar32 = uVar23;
      uVar33 = uVar23;
      puVar35 = (undefined8 *)((longlong)local_78 + lVar36);
      uVar39 = uVar23;
      uVar37 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          if ((*(longlong *)(param_2 + 2) == 0) ||
             ((uint)*(byte *)(*(longlong *)(param_2 + 2) + uVar27) == (uint)uVar24)) {
            uVar39 = (ulonglong)((int)uVar39 + 1);
            *(uint *)(uVar33 + lVar34) =
                 (uint)(*(int *)((longlong)local_78 + uVar27 * 4 + lVar16 + 0x78) != 0);
            uVar33 = uVar33 + 4;
            *puVar35 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar27 * 8);
            puVar35 = puVar35 + 1;
          }
          uVar37 = (undefined4)uVar39;
          uVar31 = (int)uVar32 + 1;
          uVar27 = uVar27 + 1;
          uVar32 = (ulonglong)uVar31;
        } while ((int)uVar31 < *(int *)(param_1 + 0x10));
      }
      lVar25 = *(longlong *)(param_2 + 4);
      *(undefined4 *)(puVar30 + 0x20) = uVar37;
      cVar1 = *(char *)(lVar25 + 1 + uVar41);
      lVar25 = *(longlong *)(lVar4 + 0x38);
      *(undefined8 *)(puVar30 + -8) = 0x1431ec785;
      res_inverse(param_1,lVar25 + (longlong)cVar1 * 0x28,
                  (undefined8 *)((longlong)local_78 + lVar36),lVar34);
      uVar31 = (uint)uVar24 + 1;
      uVar41 = uVar41 + 2;
      uVar24 = (ulonglong)uVar31;
    } while ((int)uVar31 < *param_2);
  }
  piVar42 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (*piVar42 < DAT_146b52210) {
    *(undefined8 *)(puVar30 + -8) = 0x1431ec958;
    _Init_thread_header(&DAT_146b52210);
    if (DAT_146b52210 == -1) {
      _DAT_146b52200 = 0;
      uRam0000000146b52208 = 0;
      *(undefined8 *)(puVar30 + -8) = 0x1431ec97c;
      _Init_thread_footer(&DAT_146b52210);
    }
  }
  if (*piVar42 < DAT_146b52230) {
    *(undefined8 *)(puVar30 + -8) = 0x1431ec98d;
    _Init_thread_header(&DAT_146b52230);
    if (DAT_146b52230 == -1) {
      _DAT_146b52220 = 0xffffffffffffffff;
      uRam0000000146b52228 = 0xffffffffffffffff;
      *(undefined8 *)(puVar30 + -8) = 0x1431ec9b6;
      _Init_thread_footer(&DAT_146b52230);
    }
  }
  lVar36 = (longlong)(param_2[6] + -1);
  if (-1 < param_2[6] + -1) {
    iVar2 = _DAT_146b52200;
    iVar17 = DAT_146b52200_4;
    iVar18 = (int)uRam0000000146b52208;
    iVar19 = uRam0000000146b52208._4_4_;
    uVar31 = _DAT_146b52220;
    uVar20 = DAT_146b52220_4;
    uVar21 = (uint)uRam0000000146b52228;
    uVar22 = uRam0000000146b52228._4_4_;
    uVar38 = (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3;
    do {
      puVar28 = *(uint **)(*(longlong *)(param_1 + 0x20) +
                          (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + lVar36 * 2 + 1) * 8);
      if (0 < (int)uVar38) {
        lVar34 = *(longlong *)
                  (*(longlong *)(param_1 + 0x20) +
                  (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + lVar36 * 2) * 8) -
                 (longlong)puVar28;
        puVar26 = puVar28;
        uVar41 = (ulonglong)uVar38;
        do {
          uVar8 = *puVar28;
          uVar9 = puVar28[1];
          uVar10 = puVar28[2];
          uVar11 = puVar28[3];
          piVar42 = (int *)(lVar34 + (longlong)puVar28);
          iVar12 = *piVar42;
          iVar13 = piVar42[1];
          iVar14 = piVar42[2];
          iVar15 = piVar42[3];
          puVar28 = puVar28 + 4;
          uVar43 = -(uint)((int)uVar31 < (int)uVar8 != iVar12 < iVar2);
          uVar44 = -(uint)((int)uVar20 < (int)uVar9 != iVar13 < iVar17);
          uVar45 = -(uint)((int)uVar21 < (int)uVar10 != iVar14 < iVar18);
          uVar46 = -(uint)((int)uVar22 < (int)uVar11 != iVar15 < iVar19);
          uVar47 = -(uint)(iVar12 < iVar2) & uVar8;
          uVar48 = -(uint)(iVar13 < iVar17) & uVar9;
          uVar49 = -(uint)(iVar14 < iVar18) & uVar10;
          uVar50 = -(uint)(iVar15 < iVar19) & uVar11;
          piVar42 = (int *)(lVar34 + -0x10 + (longlong)(puVar26 + 4));
          *piVar42 = (((uVar31 ^ uVar43) & uVar8) + iVar12) - uVar47;
          piVar42[1] = (((uVar20 ^ uVar44) & uVar9) + iVar13) - uVar48;
          piVar42[2] = (((uVar21 ^ uVar45) & uVar10) + iVar14) - uVar49;
          piVar42[3] = (((uVar22 ^ uVar46) & uVar11) + iVar15) - uVar50;
          *puVar26 = (uVar47 + iVar12) - (uVar43 & uVar8);
          puVar26[1] = (uVar48 + iVar13) - (uVar44 & uVar9);
          puVar26[2] = (uVar49 + iVar14) - (uVar45 & uVar10);
          puVar26[3] = (uVar50 + iVar15) - (uVar46 & uVar11);
          uVar41 = uVar41 - 1;
          puVar26 = puVar26 + 4;
        } while (uVar41 != 0);
      }
      lVar36 = lVar36 + -1;
    } while (-1 < lVar36);
  }
  uVar41 = uVar23;
  uVar24 = uVar23;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar41 * 8);
      uVar27 = uVar23;
      if (1 < *param_2) {
        uVar27 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 2) + uVar41);
      }
      cVar1 = *(char *)(*(longlong *)(param_2 + 4) + uVar27 * 2);
      lVar36 = *(longlong *)(lVar4 + 0x30);
      lVar34 = local_78[0][uVar41];
      *(undefined8 *)(puVar30 + -8) = 0x1431ec8f1;
      floor1_inverse2(param_1,(longlong)cVar1 * 0x40 + lVar36,lVar34,uVar5);
      uVar31 = (int)uVar24 + 1;
      uVar41 = uVar41 + 1;
      uVar24 = (ulonglong)uVar31;
    } while ((int)uVar31 < *(int *)(param_1 + 0x10));
    uVar41 = uVar23;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        uVar5 = *(undefined8 *)(uVar23 + *(longlong *)(param_1 + 0x20));
        *(undefined8 *)(puVar30 + -8) = 0x1431ec920;
        FUN_1431ec9c0(iVar3,uVar5);
        uVar31 = (int)uVar41 + 1;
        uVar23 = uVar23 + 8;
        uVar41 = (ulonglong)uVar31;
      } while ((int)uVar31 < *(int *)(param_1 + 0x10));
      *(undefined1 *)(param_1 + 0x44) = 0;
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  return 0;
}



// FUNCTION 1431ec9c0 FUN_1431ec9c0 body=3194 status=ok
// SIG undefined FUN_1431ec9c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431ec9c0(uint param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  byte bVar14;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float local_2168;
  float fStack_2164;
  float fStack_2160;
  float fStack_215c;
  float local_2138;
  float fStack_2134;
  float fStack_2130;
  float fStack_212c;
  float local_20e8 [60];
  float local_1ff8 [2030];
  
  iVar10 = 4;
  if ((param_1 & 0x10) == 0) {
    uVar2 = 0x10;
    do {
      iVar10 = iVar10 + 1;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while ((param_1 & uVar2) == 0);
  }
  iVar3 = (int)param_1 / 2;
  iVar9 = -iVar10 + 0xd;
  FUN_1431ee290(param_2,iVar3,iVar9);
  FUN_1431ed640(param_2,iVar3,iVar9,local_20e8);
  iVar13 = 5 - iVar9;
  bVar14 = 0;
  if (0 < iVar13) {
    iVar1 = iVar9 * 4;
    uVar2 = 1;
    pfVar8 = (float *)(&DAT_145ad2400 + (longlong)(-iVar10 + 0xf) * 0x10);
    do {
      iVar1 = iVar1 + 4;
      if (0 < (int)uVar2) {
        iVar4 = iVar3 >> (bVar14 & 0x1f);
        iVar10 = iVar4;
        if (iVar4 < 0) {
          iVar10 = iVar4 + 1;
        }
        pfVar7 = local_20e8;
        lVar11 = (longlong)iVar1;
        uVar12 = (ulonglong)uVar2;
        do {
          fVar55 = *(float *)(&DAT_145ad24a0 + lVar11 * 4);
          fVar57 = *(float *)(&DAT_145ad25c0 + lVar11 * 4);
          fVar47 = *(float *)(&DAT_145ad26e0 + lVar11 * 4);
          pfVar6 = pfVar7 + (longlong)iVar4 + -0x10;
          fVar60 = *(float *)(&DAT_145ad2800 + lVar11 * 4);
          pfVar5 = pfVar7 + (longlong)(iVar10 >> 1) + -0x10;
          fVar61 = *pfVar8;
          fVar63 = pfVar8[1];
          fVar66 = pfVar8[2];
          fVar69 = pfVar8[3];
          fVar56 = fVar55;
          fVar58 = fVar55;
          fVar59 = fVar55;
          fVar49 = fVar47;
          fVar51 = fVar47;
          fVar53 = fVar47;
          fVar79 = fVar57;
          fVar81 = fVar57;
          fVar77 = fVar57;
          fVar27 = fVar60;
          fVar17 = fVar60;
          fVar19 = fVar60;
          do {
            fVar31 = fVar53;
            fVar29 = fVar51;
            fVar26 = fVar49;
            fVar24 = fVar47;
            fVar20 = fVar59;
            fVar18 = fVar58;
            fVar16 = fVar56;
            fVar15 = fVar55;
            fVar39 = *pfVar6 - pfVar6[4];
            fVar41 = pfVar6[1] - pfVar6[5];
            fVar43 = pfVar6[2] - pfVar6[6];
            fVar45 = pfVar6[3] - pfVar6[7];
            *pfVar6 = *pfVar6 + pfVar6[4];
            pfVar6[1] = pfVar6[1] + pfVar6[5];
            pfVar6[2] = pfVar6[2] + pfVar6[6];
            pfVar6[3] = pfVar6[3] + pfVar6[7];
            fVar55 = fVar15 * fVar61 - fVar57;
            fVar56 = fVar16 * fVar63 - fVar79;
            fVar58 = fVar18 * fVar66 - fVar81;
            fVar59 = fVar20 * fVar69 - fVar77;
            fVar23 = pfVar6[0xc] - pfVar6[8];
            fVar25 = pfVar6[0xd] - pfVar6[9];
            fVar28 = pfVar6[0xe] - pfVar6[10];
            fVar30 = pfVar6[0xf] - pfVar6[0xb];
            fVar47 = fVar24 * fVar61 - fVar60;
            fVar49 = fVar26 * fVar63 - fVar27;
            fVar51 = fVar29 * fVar66 - fVar17;
            fVar53 = fVar31 * fVar69 - fVar19;
            pfVar6[8] = pfVar6[8] + pfVar6[0xc];
            pfVar6[9] = pfVar6[9] + pfVar6[0xd];
            pfVar6[10] = pfVar6[10] + pfVar6[0xe];
            pfVar6[0xb] = pfVar6[0xb] + pfVar6[0xf];
            fVar57 = pfVar5[1];
            fVar60 = pfVar5[2];
            fVar79 = pfVar5[3];
            fVar32 = pfVar5[4] - *pfVar5;
            fVar33 = pfVar5[5] - fVar57;
            fVar35 = pfVar5[6] - fVar60;
            fVar37 = pfVar5[7] - fVar79;
            fVar81 = pfVar5[5];
            fVar77 = pfVar5[6];
            fVar27 = pfVar5[7];
            pfVar6[4] = *pfVar5 + pfVar5[4];
            pfVar6[5] = fVar57 + fVar81;
            pfVar6[6] = fVar60 + fVar77;
            pfVar6[7] = fVar79 + fVar27;
            fVar57 = pfVar5[9];
            fVar60 = pfVar5[10];
            fVar79 = pfVar5[0xb];
            fVar17 = pfVar5[0xc] - pfVar5[8];
            fVar19 = pfVar5[0xd] - fVar57;
            fVar21 = pfVar5[0xe] - fVar60;
            fVar22 = pfVar5[0xf] - fVar79;
            fVar81 = pfVar5[0xd];
            fVar77 = pfVar5[0xe];
            fVar27 = pfVar5[0xf];
            pfVar6[0xc] = pfVar5[8] + pfVar5[0xc];
            pfVar6[0xd] = fVar57 + fVar81;
            pfVar6[0xe] = fVar60 + fVar77;
            pfVar6[0xf] = fVar79 + fVar27;
            pfVar6 = pfVar6 + -0x10;
            *pfVar5 = fVar23 * fVar55 + fVar39 * fVar47;
            pfVar5[1] = fVar25 * fVar56 + fVar41 * fVar49;
            pfVar5[2] = fVar28 * fVar58 + fVar43 * fVar51;
            pfVar5[3] = fVar30 * fVar59 + fVar45 * fVar53;
            pfVar5[8] = fVar39 * fVar55 - fVar23 * fVar47;
            pfVar5[9] = fVar41 * fVar56 - fVar25 * fVar49;
            pfVar5[10] = fVar43 * fVar58 - fVar28 * fVar51;
            pfVar5[0xb] = fVar45 * fVar59 - fVar30 * fVar53;
            pfVar5[4] = fVar17 * fVar47 + fVar32 * fVar55;
            pfVar5[5] = fVar19 * fVar49 + fVar33 * fVar56;
            pfVar5[6] = fVar21 * fVar51 + fVar35 * fVar58;
            pfVar5[7] = fVar22 * fVar53 + fVar37 * fVar59;
            pfVar5[0xc] = fVar17 * fVar55 - fVar32 * fVar47;
            pfVar5[0xd] = fVar19 * fVar56 - fVar33 * fVar49;
            pfVar5[0xe] = fVar21 * fVar58 - fVar35 * fVar51;
            pfVar5[0xf] = fVar22 * fVar59 - fVar37 * fVar53;
            pfVar5 = pfVar5 + -0x10;
            fVar57 = fVar15;
            fVar79 = fVar16;
            fVar81 = fVar18;
            fVar77 = fVar20;
            fVar60 = fVar24;
            fVar27 = fVar26;
            fVar17 = fVar29;
            fVar19 = fVar31;
          } while (pfVar7 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4) * 4 <= pfVar5);
          do {
            fVar45 = fVar53;
            fVar43 = fVar51;
            fVar41 = fVar49;
            fVar39 = fVar47;
            fVar37 = fVar59;
            fVar35 = fVar58;
            fVar33 = fVar56;
            fVar32 = fVar55;
            fVar23 = *pfVar6 - pfVar6[4];
            fVar25 = pfVar6[1] - pfVar6[5];
            fVar28 = pfVar6[2] - pfVar6[6];
            fVar30 = pfVar6[3] - pfVar6[7];
            fVar55 = fVar32 * fVar61 - fVar15;
            fVar56 = fVar33 * fVar63 - fVar16;
            fVar58 = fVar35 * fVar66 - fVar18;
            fVar59 = fVar37 * fVar69 - fVar20;
            *pfVar6 = *pfVar6 + pfVar6[4];
            pfVar6[1] = pfVar6[1] + pfVar6[5];
            pfVar6[2] = pfVar6[2] + pfVar6[6];
            pfVar6[3] = pfVar6[3] + pfVar6[7];
            fVar18 = pfVar6[8] - pfVar6[0xc];
            fVar20 = pfVar6[9] - pfVar6[0xd];
            fVar21 = pfVar6[10] - pfVar6[0xe];
            fVar22 = pfVar6[0xb] - pfVar6[0xf];
            fVar47 = fVar39 * fVar61 - fVar24;
            fVar49 = fVar41 * fVar63 - fVar26;
            fVar51 = fVar43 * fVar66 - fVar29;
            fVar53 = fVar45 * fVar69 - fVar31;
            pfVar6[8] = pfVar6[8] + pfVar6[0xc];
            pfVar6[9] = pfVar6[9] + pfVar6[0xd];
            pfVar6[10] = pfVar6[10] + pfVar6[0xe];
            pfVar6[0xb] = pfVar6[0xb] + pfVar6[0xf];
            fVar57 = pfVar5[1];
            fVar60 = pfVar5[2];
            fVar79 = pfVar5[3];
            fVar81 = pfVar5[5];
            fVar77 = pfVar5[6];
            fVar27 = pfVar5[7];
            fVar24 = *pfVar5 - pfVar5[4];
            fVar26 = fVar57 - pfVar5[5];
            fVar29 = fVar60 - pfVar5[6];
            fVar31 = fVar79 - pfVar5[7];
            pfVar6[4] = *pfVar5 + pfVar5[4];
            pfVar6[5] = fVar57 + fVar81;
            pfVar6[6] = fVar60 + fVar77;
            pfVar6[7] = fVar79 + fVar27;
            fVar57 = pfVar5[9];
            fVar60 = pfVar5[10];
            fVar79 = pfVar5[0xb];
            fVar17 = pfVar5[0xc] - pfVar5[8];
            fVar19 = pfVar5[0xd] - fVar57;
            fVar15 = pfVar5[0xe] - fVar60;
            fVar16 = pfVar5[0xf] - fVar79;
            fVar81 = pfVar5[0xd];
            fVar77 = pfVar5[0xe];
            fVar27 = pfVar5[0xf];
            pfVar6[0xc] = pfVar5[8] + pfVar5[0xc];
            pfVar6[0xd] = fVar57 + fVar81;
            pfVar6[0xe] = fVar60 + fVar77;
            pfVar6[0xf] = fVar79 + fVar27;
            pfVar6 = pfVar6 + -0x10;
            *pfVar5 = fVar23 * fVar47 - fVar18 * fVar55;
            pfVar5[1] = fVar25 * fVar49 - fVar20 * fVar56;
            pfVar5[2] = fVar28 * fVar51 - fVar21 * fVar58;
            pfVar5[3] = fVar30 * fVar53 - fVar22 * fVar59;
            pfVar5[8] = fVar18 * fVar47 + fVar23 * fVar55;
            pfVar5[9] = fVar20 * fVar49 + fVar25 * fVar56;
            pfVar5[10] = fVar21 * fVar51 + fVar28 * fVar58;
            pfVar5[0xb] = fVar22 * fVar53 + fVar30 * fVar59;
            pfVar5[4] = fVar17 * fVar47 - fVar24 * fVar55;
            pfVar5[5] = fVar19 * fVar49 - fVar26 * fVar56;
            pfVar5[6] = fVar15 * fVar51 - fVar29 * fVar58;
            pfVar5[7] = fVar16 * fVar53 - fVar31 * fVar59;
            pfVar5[0xc] = fVar17 * fVar55 + fVar24 * fVar47;
            pfVar5[0xd] = fVar19 * fVar56 + fVar26 * fVar49;
            pfVar5[0xe] = fVar15 * fVar58 + fVar29 * fVar51;
            pfVar5[0xf] = fVar16 * fVar59 + fVar31 * fVar53;
            pfVar5 = pfVar5 + -0x10;
            fVar15 = fVar32;
            fVar16 = fVar33;
            fVar18 = fVar35;
            fVar20 = fVar37;
            fVar24 = fVar39;
            fVar26 = fVar41;
            fVar29 = fVar43;
            fVar31 = fVar45;
          } while (pfVar7 <= pfVar5);
          pfVar7 = pfVar7 + ((longlong)iVar3 >> (bVar14 & 0x3f));
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      iVar13 = iVar13 + -1;
      pfVar8 = pfVar8 + 4;
      bVar14 = bVar14 + 1;
    } while (0 < iVar13);
  }
  if (0 < iVar3) {
    pfVar8 = local_1ff8;
    uVar12 = (ulonglong)((iVar3 - 1U >> 7) + 1);
    do {
      fVar51 = pfVar8[-0x38] - pfVar8[-0x3c];
      fVar53 = pfVar8[-0x37] - pfVar8[-0x3b];
      fVar79 = pfVar8[-0x36] - pfVar8[-0x3a];
      fVar81 = pfVar8[-0x35] - pfVar8[-0x39];
      fVar61 = pfVar8[4] - pfVar8[8];
      fVar63 = pfVar8[5] - pfVar8[9];
      fVar66 = pfVar8[6] - pfVar8[10];
      fVar69 = pfVar8[7] - pfVar8[0xb];
      fVar55 = pfVar8[0xc] - pfVar8[0x10];
      fVar57 = pfVar8[0xd] - pfVar8[0x11];
      fVar47 = pfVar8[0xe] - pfVar8[0x12];
      fVar60 = pfVar8[0xf] - pfVar8[0x13];
      fVar56 = pfVar8[-0x30] - pfVar8[-0x34];
      fVar58 = pfVar8[-0x2f] - pfVar8[-0x33];
      fVar59 = pfVar8[-0x2e] - pfVar8[-0x32];
      fVar49 = pfVar8[-0x2d] - pfVar8[-0x31];
      pfVar8[4] = pfVar8[8] + pfVar8[4];
      pfVar8[5] = pfVar8[9] + pfVar8[5];
      pfVar8[6] = pfVar8[10] + pfVar8[6];
      pfVar8[7] = pfVar8[0xb] + pfVar8[7];
      pfVar8[8] = pfVar8[-0x38] + pfVar8[-0x3c];
      pfVar8[9] = pfVar8[-0x37] + pfVar8[-0x3b];
      pfVar8[10] = pfVar8[-0x36] + pfVar8[-0x3a];
      pfVar8[0xb] = pfVar8[-0x35] + pfVar8[-0x39];
      pfVar8[0xc] = pfVar8[0x10] + pfVar8[0xc];
      pfVar8[0xd] = pfVar8[0x11] + pfVar8[0xd];
      pfVar8[0xe] = pfVar8[0x12] + pfVar8[0xe];
      pfVar8[0xf] = pfVar8[0x13] + pfVar8[0xf];
      pfVar8[0x10] = pfVar8[-0x30] + pfVar8[-0x34];
      pfVar8[0x11] = pfVar8[-0x2f] + pfVar8[-0x33];
      pfVar8[0x12] = pfVar8[-0x2e] + pfVar8[-0x32];
      pfVar8[0x13] = pfVar8[-0x2d] + pfVar8[-0x31];
      pfVar8[-0x3c] = fVar61 * 0.38268343 - fVar55 * 0.9238795;
      pfVar8[-0x3b] = fVar63 * 0.38268343 - fVar57 * 0.9238795;
      pfVar8[-0x3a] = fVar66 * 0.38268343 - fVar47 * 0.9238795;
      pfVar8[-0x39] = fVar69 * 0.38268343 - fVar60 * 0.9238795;
      pfVar8[-0x38] = fVar51 * 0.9238795 + fVar56 * 0.38268343;
      pfVar8[-0x37] = fVar53 * 0.9238795 + fVar58 * 0.38268343;
      pfVar8[-0x36] = fVar79 * 0.9238795 + fVar59 * 0.38268343;
      pfVar8[-0x35] = fVar81 * 0.9238795 + fVar49 * 0.38268343;
      pfVar8[-0x34] = fVar55 * 0.38268343 + fVar61 * 0.9238795;
      pfVar8[-0x33] = fVar57 * 0.38268343 + fVar63 * 0.9238795;
      pfVar8[-0x32] = fVar47 * 0.38268343 + fVar66 * 0.9238795;
      pfVar8[-0x31] = fVar60 * 0.38268343 + fVar69 * 0.9238795;
      pfVar8[-0x30] = fVar56 * 0.9238795 - fVar51 * 0.38268343;
      pfVar8[-0x2f] = fVar58 * 0.9238795 - fVar53 * 0.38268343;
      pfVar8[-0x2e] = fVar59 * 0.9238795 - fVar79 * 0.38268343;
      pfVar8[-0x2d] = fVar49 * 0.9238795 - fVar81 * 0.38268343;
      fVar61 = pfVar8[-0x28] - pfVar8[-0x2c];
      fVar63 = pfVar8[-0x27] - pfVar8[-0x2b];
      fVar66 = pfVar8[-0x26] - pfVar8[-0x2a];
      fVar69 = pfVar8[-0x25] - pfVar8[-0x29];
      fVar55 = pfVar8[0x14] - pfVar8[0x18];
      fVar57 = pfVar8[0x15] - pfVar8[0x19];
      fVar47 = pfVar8[0x16] - pfVar8[0x1a];
      fVar60 = pfVar8[0x17] - pfVar8[0x1b];
      fVar56 = pfVar8[0x1c] - pfVar8[0x20];
      fVar58 = pfVar8[0x1d] - pfVar8[0x21];
      fVar59 = pfVar8[0x1e] - pfVar8[0x22];
      fVar49 = pfVar8[0x1f] - pfVar8[0x23];
      fVar51 = pfVar8[-0x20] - pfVar8[-0x24];
      fVar53 = pfVar8[-0x1f] - pfVar8[-0x23];
      fVar79 = pfVar8[-0x1e] - pfVar8[-0x22];
      fVar81 = pfVar8[-0x1d] - pfVar8[-0x21];
      pfVar8[0x14] = pfVar8[0x18] + pfVar8[0x14];
      pfVar8[0x15] = pfVar8[0x19] + pfVar8[0x15];
      pfVar8[0x16] = pfVar8[0x1a] + pfVar8[0x16];
      pfVar8[0x17] = pfVar8[0x1b] + pfVar8[0x17];
      pfVar8[0x18] = pfVar8[-0x28] + pfVar8[-0x2c];
      pfVar8[0x19] = pfVar8[-0x27] + pfVar8[-0x2b];
      pfVar8[0x1a] = pfVar8[-0x26] + pfVar8[-0x2a];
      pfVar8[0x1b] = pfVar8[-0x25] + pfVar8[-0x29];
      pfVar8[0x1c] = pfVar8[0x20] + pfVar8[0x1c];
      pfVar8[0x1d] = pfVar8[0x21] + pfVar8[0x1d];
      pfVar8[0x1e] = pfVar8[0x22] + pfVar8[0x1e];
      pfVar8[0x1f] = pfVar8[0x23] + pfVar8[0x1f];
      pfVar8[0x20] = pfVar8[-0x20] + pfVar8[-0x24];
      pfVar8[0x21] = pfVar8[-0x1f] + pfVar8[-0x23];
      pfVar8[0x22] = pfVar8[-0x1e] + pfVar8[-0x22];
      pfVar8[0x23] = pfVar8[-0x1d] + pfVar8[-0x21];
      pfVar8[-0x2c] = (fVar55 - fVar56) * 0.70710677;
      pfVar8[-0x2b] = (fVar57 - fVar58) * 0.70710677;
      pfVar8[-0x2a] = (fVar47 - fVar59) * 0.70710677;
      pfVar8[-0x29] = (fVar60 - fVar49) * 0.70710677;
      pfVar8[-0x28] = (fVar51 + fVar61) * 0.70710677;
      pfVar8[-0x27] = (fVar53 + fVar63) * 0.70710677;
      pfVar8[-0x26] = (fVar79 + fVar66) * 0.70710677;
      pfVar8[-0x25] = (fVar81 + fVar69) * 0.70710677;
      pfVar8[-0x24] = (fVar56 + fVar55) * 0.70710677;
      pfVar8[-0x23] = (fVar58 + fVar57) * 0.70710677;
      pfVar8[-0x22] = (fVar59 + fVar47) * 0.70710677;
      pfVar8[-0x21] = (fVar49 + fVar60) * 0.70710677;
      pfVar8[-0x20] = (fVar51 - fVar61) * 0.70710677;
      pfVar8[-0x1f] = (fVar53 - fVar63) * 0.70710677;
      pfVar8[-0x1e] = (fVar79 - fVar66) * 0.70710677;
      pfVar8[-0x1d] = (fVar81 - fVar69) * 0.70710677;
      fVar51 = pfVar8[-0x18] - pfVar8[-0x1c];
      fVar53 = pfVar8[-0x17] - pfVar8[-0x1b];
      fVar79 = pfVar8[-0x16] - pfVar8[-0x1a];
      fVar81 = pfVar8[-0x15] - pfVar8[-0x19];
      fVar56 = pfVar8[-0x10] - pfVar8[-0x14];
      fVar58 = pfVar8[-0xf] - pfVar8[-0x13];
      fVar59 = pfVar8[-0xe] - pfVar8[-0x12];
      fVar49 = pfVar8[-0xd] - pfVar8[-0x11];
      fVar55 = pfVar8[0x2c] - pfVar8[0x30];
      fVar57 = pfVar8[0x2d] - pfVar8[0x31];
      fVar47 = pfVar8[0x2e] - pfVar8[0x32];
      fVar60 = pfVar8[0x2f] - pfVar8[0x33];
      fVar61 = pfVar8[0x24] - pfVar8[0x28];
      fVar63 = pfVar8[0x25] - pfVar8[0x29];
      fVar66 = pfVar8[0x26] - pfVar8[0x2a];
      fVar69 = pfVar8[0x27] - pfVar8[0x2b];
      pfVar8[0x24] = pfVar8[0x28] + pfVar8[0x24];
      pfVar8[0x25] = pfVar8[0x29] + pfVar8[0x25];
      pfVar8[0x26] = pfVar8[0x2a] + pfVar8[0x26];
      pfVar8[0x27] = pfVar8[0x2b] + pfVar8[0x27];
      pfVar8[0x28] = pfVar8[-0x18] + pfVar8[-0x1c];
      pfVar8[0x29] = pfVar8[-0x17] + pfVar8[-0x1b];
      pfVar8[0x2a] = pfVar8[-0x16] + pfVar8[-0x1a];
      pfVar8[0x2b] = pfVar8[-0x15] + pfVar8[-0x19];
      pfVar8[0x2c] = pfVar8[0x30] + pfVar8[0x2c];
      pfVar8[0x2d] = pfVar8[0x31] + pfVar8[0x2d];
      pfVar8[0x2e] = pfVar8[0x32] + pfVar8[0x2e];
      pfVar8[0x2f] = pfVar8[0x33] + pfVar8[0x2f];
      pfVar8[0x30] = pfVar8[-0x10] + pfVar8[-0x14];
      pfVar8[0x31] = pfVar8[-0xf] + pfVar8[-0x13];
      pfVar8[0x32] = pfVar8[-0xe] + pfVar8[-0x12];
      pfVar8[0x33] = pfVar8[-0xd] + pfVar8[-0x11];
      pfVar8[-0x1c] = fVar61 * 0.9238795 - fVar55 * 0.38268343;
      pfVar8[-0x1b] = fVar63 * 0.9238795 - fVar57 * 0.38268343;
      pfVar8[-0x1a] = fVar66 * 0.9238795 - fVar47 * 0.38268343;
      pfVar8[-0x19] = fVar69 * 0.9238795 - fVar60 * 0.38268343;
      pfVar8[-0x18] = fVar56 * 0.9238795 + fVar51 * 0.38268343;
      pfVar8[-0x17] = fVar58 * 0.9238795 + fVar53 * 0.38268343;
      pfVar8[-0x16] = fVar59 * 0.9238795 + fVar79 * 0.38268343;
      pfVar8[-0x15] = fVar49 * 0.9238795 + fVar81 * 0.38268343;
      pfVar8[-0x14] = fVar55 * 0.9238795 + fVar61 * 0.38268343;
      pfVar8[-0x13] = fVar57 * 0.9238795 + fVar63 * 0.38268343;
      pfVar8[-0x12] = fVar47 * 0.9238795 + fVar66 * 0.38268343;
      pfVar8[-0x11] = fVar60 * 0.9238795 + fVar69 * 0.38268343;
      pfVar8[-0x10] = fVar56 * 0.38268343 - fVar51 * 0.9238795;
      pfVar8[-0xf] = fVar58 * 0.38268343 - fVar53 * 0.9238795;
      pfVar8[-0xe] = fVar59 * 0.38268343 - fVar79 * 0.9238795;
      pfVar8[-0xd] = fVar49 * 0.38268343 - fVar81 * 0.9238795;
      fVar55 = pfVar8[0x40];
      fVar57 = pfVar8[0x41];
      fVar47 = pfVar8[0x42];
      fVar60 = pfVar8[0x43];
      fVar61 = pfVar8[0x38];
      fVar63 = pfVar8[0x39];
      fVar66 = pfVar8[0x3a];
      fVar69 = pfVar8[0x3b];
      fVar56 = pfVar8[0x34];
      fVar58 = pfVar8[0x35];
      fVar59 = pfVar8[0x36];
      fVar49 = pfVar8[0x37];
      fVar51 = pfVar8[-8];
      fVar53 = pfVar8[-7];
      fVar79 = pfVar8[-6];
      fVar81 = pfVar8[-5];
      fVar77 = pfVar8[0x3c];
      fVar27 = pfVar8[0x3d];
      fVar17 = pfVar8[0x3e];
      fVar19 = pfVar8[0x3f];
      fVar15 = pfVar8[-0xc];
      fVar16 = pfVar8[-0xb];
      fVar18 = pfVar8[-10];
      fVar20 = pfVar8[-9];
      pfVar8[0x34] = fVar61 + fVar56;
      pfVar8[0x35] = fVar63 + fVar58;
      pfVar8[0x36] = fVar66 + fVar59;
      pfVar8[0x37] = fVar69 + fVar49;
      pfVar8[0x38] = fVar51 + fVar15;
      pfVar8[0x39] = fVar53 + fVar16;
      pfVar8[0x3a] = fVar79 + fVar18;
      pfVar8[0x3b] = fVar81 + fVar20;
      pfVar8[0x3c] = fVar55 + fVar77;
      pfVar8[0x3d] = fVar57 + fVar27;
      pfVar8[0x3e] = fVar47 + fVar17;
      pfVar8[0x3f] = fVar60 + fVar19;
      pfVar8[0x40] = *pfVar8 + pfVar8[-4];
      pfVar8[0x41] = pfVar8[1] + pfVar8[-3];
      pfVar8[0x42] = pfVar8[2] + pfVar8[-2];
      pfVar8[0x43] = pfVar8[3] + pfVar8[-1];
      pfVar8[-0xc] = fVar56 - fVar61;
      pfVar8[-0xb] = fVar58 - fVar63;
      pfVar8[-10] = fVar59 - fVar66;
      pfVar8[-9] = fVar49 - fVar69;
      pfVar8[-8] = *pfVar8 - pfVar8[-4];
      pfVar8[-7] = pfVar8[1] - pfVar8[-3];
      pfVar8[-6] = pfVar8[2] - pfVar8[-2];
      pfVar8[-5] = pfVar8[3] - pfVar8[-1];
      pfVar8[-4] = fVar77 - fVar55;
      pfVar8[-3] = fVar27 - fVar57;
      pfVar8[-2] = fVar17 - fVar47;
      pfVar8[-1] = fVar19 - fVar60;
      *pfVar8 = fVar15 - fVar51;
      pfVar8[1] = fVar16 - fVar53;
      pfVar8[2] = fVar18 - fVar79;
      pfVar8[3] = fVar20 - fVar81;
      fVar95 = pfVar8[-0x38] + pfVar8[-0x3c];
      fVar96 = pfVar8[-0x37] + pfVar8[-0x3b];
      fVar97 = pfVar8[-0x36] + pfVar8[-0x3a];
      fVar98 = pfVar8[-0x35] + pfVar8[-0x39];
      fVar49 = pfVar8[-0x3c] - pfVar8[-0x38];
      fVar77 = pfVar8[-0x3b] - pfVar8[-0x37];
      fVar16 = pfVar8[-0x3a] - pfVar8[-0x36];
      fVar29 = pfVar8[-0x39] - pfVar8[-0x35];
      fVar43 = *pfVar8 + pfVar8[-4];
      fVar34 = pfVar8[1] + pfVar8[-3];
      fVar36 = pfVar8[2] + pfVar8[-2];
      fVar38 = pfVar8[3] + pfVar8[-1];
      fVar55 = pfVar8[-0x28] + pfVar8[-0x2c];
      fVar57 = pfVar8[-0x27] + pfVar8[-0x2b];
      fVar47 = pfVar8[-0x26] + pfVar8[-0x2a];
      fVar60 = pfVar8[-0x25] + pfVar8[-0x29];
      fVar83 = pfVar8[-0x2c] - pfVar8[-0x28];
      fVar85 = pfVar8[-0x2b] - pfVar8[-0x27];
      fVar87 = pfVar8[-0x2a] - pfVar8[-0x26];
      fVar89 = pfVar8[-0x29] - pfVar8[-0x25];
      fVar51 = pfVar8[-0xc] - pfVar8[-8];
      fVar27 = pfVar8[-0xb] - pfVar8[-7];
      fVar18 = pfVar8[-10] - pfVar8[-6];
      fVar31 = pfVar8[-9] - pfVar8[-5];
      fVar99 = pfVar8[-0x30] + pfVar8[-0x34];
      fVar100 = pfVar8[-0x2f] + pfVar8[-0x33];
      fVar101 = pfVar8[-0x2e] + pfVar8[-0x32];
      fVar102 = pfVar8[-0x2d] + pfVar8[-0x31];
      fVar56 = pfVar8[-0x18] + pfVar8[-0x1c];
      fVar53 = pfVar8[-0x17] + pfVar8[-0x1b];
      fVar17 = pfVar8[-0x16] + pfVar8[-0x1a];
      fVar20 = pfVar8[-0x15] + pfVar8[-0x19];
      fVar72 = pfVar8[-0x1c] - pfVar8[-0x18];
      fVar73 = pfVar8[-0x1b] - pfVar8[-0x17];
      fVar74 = pfVar8[-0x1a] - pfVar8[-0x16];
      fVar75 = pfVar8[-0x19] - pfVar8[-0x15];
      fVar45 = pfVar8[-0x34] - pfVar8[-0x30];
      fVar64 = pfVar8[-0x33] - pfVar8[-0x2f];
      fVar67 = pfVar8[-0x32] - pfVar8[-0x2e];
      fVar70 = pfVar8[-0x31] - pfVar8[-0x2d];
      fVar21 = pfVar8[-4] - *pfVar8;
      fVar23 = pfVar8[-3] - pfVar8[1];
      fVar28 = pfVar8[-2] - pfVar8[2];
      fVar32 = pfVar8[-1] - pfVar8[3];
      fVar61 = pfVar8[-0x20] + pfVar8[-0x24];
      fVar63 = pfVar8[-0x1f] + pfVar8[-0x23];
      fVar66 = pfVar8[-0x1e] + pfVar8[-0x22];
      fVar69 = pfVar8[-0x1d] + pfVar8[-0x21];
      fVar91 = pfVar8[-0x24] - pfVar8[-0x20];
      fVar92 = pfVar8[-0x23] - pfVar8[-0x1f];
      fVar93 = pfVar8[-0x22] - pfVar8[-0x1e];
      fVar94 = pfVar8[-0x21] - pfVar8[-0x1d];
      fVar58 = pfVar8[-0x10] + pfVar8[-0x14];
      fVar79 = pfVar8[-0xf] + pfVar8[-0x13];
      fVar19 = pfVar8[-0xe] + pfVar8[-0x12];
      fVar24 = pfVar8[-0xd] + pfVar8[-0x11];
      fVar35 = pfVar8[-0x14] - pfVar8[-0x10];
      fVar37 = pfVar8[-0x13] - pfVar8[-0xf];
      fVar39 = pfVar8[-0x12] - pfVar8[-0xe];
      fVar41 = pfVar8[-0x11] - pfVar8[-0xd];
      fVar22 = fVar21 + fVar83;
      fVar25 = fVar23 + fVar85;
      fVar30 = fVar28 + fVar87;
      fVar33 = fVar32 + fVar89;
      fVar59 = pfVar8[-8] + pfVar8[-0xc];
      fVar81 = pfVar8[-7] + pfVar8[-0xb];
      fVar15 = pfVar8[-6] + pfVar8[-10];
      fVar26 = pfVar8[-5] + pfVar8[-9];
      fVar84 = fVar35 + fVar72;
      fVar86 = fVar37 + fVar73;
      fVar88 = fVar39 + fVar74;
      fVar90 = fVar41 + fVar75;
      fVar72 = fVar72 - fVar35;
      fVar73 = fVar73 - fVar37;
      fVar74 = fVar74 - fVar39;
      fVar75 = fVar75 - fVar41;
      fVar76 = fVar45 + fVar49;
      fVar78 = fVar64 + fVar77;
      fVar80 = fVar67 + fVar16;
      fVar82 = fVar70 + fVar29;
      fVar49 = fVar49 - fVar45;
      fVar77 = fVar77 - fVar64;
      fVar16 = fVar16 - fVar67;
      fVar29 = fVar29 - fVar70;
      fVar62 = fVar59 + fVar55;
      fVar65 = fVar81 + fVar57;
      fVar68 = fVar15 + fVar47;
      fVar71 = fVar26 + fVar60;
      fVar40 = (-fVar72 - fVar76) * 0.70710677;
      fVar42 = (-fVar73 - fVar78) * 0.70710677;
      fVar44 = (-fVar74 - fVar80) * 0.70710677;
      fVar46 = (-fVar75 - fVar82) * 0.70710677;
      fVar59 = fVar59 - fVar55;
      fVar81 = fVar81 - fVar57;
      fVar15 = fVar15 - fVar47;
      fVar26 = fVar26 - fVar60;
      fVar35 = fVar51 - fVar91;
      fVar37 = fVar27 - fVar92;
      fVar39 = fVar18 - fVar93;
      fVar41 = fVar31 - fVar94;
      fVar48 = (fVar84 - fVar49) * 0.70710677;
      fVar50 = (fVar86 - fVar77) * 0.70710677;
      fVar52 = (fVar88 - fVar16) * 0.70710677;
      fVar54 = (fVar90 - fVar29) * 0.70710677;
      fVar51 = fVar51 + fVar91;
      fVar27 = fVar27 + fVar92;
      fVar18 = fVar18 + fVar93;
      fVar31 = fVar31 + fVar94;
      fVar72 = (fVar76 - fVar72) * 0.70710677;
      fVar73 = (fVar78 - fVar73) * 0.70710677;
      fVar74 = (fVar80 - fVar74) * 0.70710677;
      fVar75 = (fVar82 - fVar75) * 0.70710677;
      fVar76 = (-fVar84 - fVar49) * 0.70710677;
      fVar78 = (-fVar86 - fVar77) * 0.70710677;
      fVar80 = (-fVar88 - fVar16) * 0.70710677;
      fVar82 = (-fVar90 - fVar29) * 0.70710677;
      fVar21 = fVar21 - fVar83;
      fVar23 = fVar23 - fVar85;
      fVar28 = fVar28 - fVar87;
      fVar32 = fVar32 - fVar89;
      fVar49 = fVar58 + fVar99;
      fVar77 = fVar79 + fVar100;
      fVar16 = fVar19 + fVar101;
      fVar29 = fVar24 + fVar102;
      fVar58 = fVar58 - fVar99;
      fVar79 = fVar79 - fVar100;
      fVar19 = fVar19 - fVar101;
      fVar24 = fVar24 - fVar102;
      fVar45 = fVar43 - fVar61;
      fVar64 = fVar34 - fVar63;
      fVar67 = fVar36 - fVar66;
      fVar70 = fVar38 - fVar69;
      fVar43 = fVar43 + fVar61;
      fVar34 = fVar34 + fVar63;
      fVar36 = fVar36 + fVar66;
      fVar38 = fVar38 + fVar69;
      fVar55 = fVar56 - fVar95;
      fVar57 = fVar53 - fVar96;
      fVar47 = fVar17 - fVar97;
      fVar60 = fVar20 - fVar98;
      fVar56 = fVar56 + fVar95;
      fVar53 = fVar53 + fVar96;
      fVar17 = fVar17 + fVar97;
      fVar20 = fVar20 + fVar98;
      pfVar8[-0x3c] = fVar51 + fVar48;
      pfVar8[-0x3b] = fVar27 + fVar50;
      pfVar8[-0x3a] = fVar18 + fVar52;
      pfVar8[-0x39] = fVar31 + fVar54;
      pfVar8[-0x38] = fVar21 + fVar40;
      pfVar8[-0x37] = fVar23 + fVar42;
      pfVar8[-0x36] = fVar28 + fVar44;
      pfVar8[-0x35] = fVar32 + fVar46;
      pfVar8[-0x34] = fVar51 - fVar48;
      pfVar8[-0x33] = fVar27 - fVar50;
      pfVar8[-0x32] = fVar18 - fVar52;
      pfVar8[-0x31] = fVar31 - fVar54;
      pfVar8[-0x30] = fVar21 - fVar40;
      pfVar8[-0x2f] = fVar23 - fVar42;
      pfVar8[-0x2e] = fVar28 - fVar44;
      pfVar8[-0x2d] = fVar32 - fVar46;
      pfVar8[-0x2c] = fVar35 + fVar72;
      pfVar8[-0x2b] = fVar37 + fVar73;
      pfVar8[-0x2a] = fVar39 + fVar74;
      pfVar8[-0x29] = fVar41 + fVar75;
      pfVar8[-0x28] = fVar22 + fVar76;
      pfVar8[-0x27] = fVar25 + fVar78;
      pfVar8[-0x26] = fVar30 + fVar80;
      pfVar8[-0x25] = fVar33 + fVar82;
      pfVar8[-0x24] = fVar35 - fVar72;
      pfVar8[-0x23] = fVar37 - fVar73;
      pfVar8[-0x22] = fVar39 - fVar74;
      pfVar8[-0x21] = fVar41 - fVar75;
      pfVar8[-0x20] = fVar22 - fVar76;
      pfVar8[-0x1f] = fVar25 - fVar78;
      pfVar8[-0x1e] = fVar30 - fVar80;
      pfVar8[-0x1d] = fVar33 - fVar82;
      pfVar8[-0x1c] = fVar58 + fVar59;
      pfVar8[-0x1b] = fVar79 + fVar81;
      pfVar8[-0x1a] = fVar19 + fVar15;
      pfVar8[-0x19] = fVar24 + fVar26;
      pfVar8[-0x18] = fVar45 - fVar55;
      pfVar8[-0x17] = fVar64 - fVar57;
      pfVar8[-0x16] = fVar67 - fVar47;
      pfVar8[-0x15] = fVar70 - fVar60;
      pfVar8[-0x14] = fVar59 - fVar58;
      pfVar8[-0x13] = fVar81 - fVar79;
      pfVar8[-0x12] = fVar15 - fVar19;
      pfVar8[-0x11] = fVar26 - fVar24;
      pfVar8[-0x10] = fVar55 + fVar45;
      pfVar8[-0xf] = fVar57 + fVar64;
      pfVar8[-0xe] = fVar47 + fVar67;
      pfVar8[-0xd] = fVar60 + fVar70;
      pfVar8[-0xc] = fVar62 - fVar56;
      pfVar8[-0xb] = fVar65 - fVar53;
      pfVar8[-10] = fVar68 - fVar17;
      pfVar8[-9] = fVar71 - fVar20;
      pfVar8[-8] = fVar43 - fVar49;
      pfVar8[-7] = fVar34 - fVar77;
      pfVar8[-6] = fVar36 - fVar16;
      pfVar8[-5] = fVar38 - fVar29;
      pfVar8[-4] = fVar56 + fVar62;
      pfVar8[-3] = fVar53 + fVar65;
      pfVar8[-2] = fVar17 + fVar68;
      pfVar8[-1] = fVar20 + fVar71;
      *pfVar8 = fVar49 + fVar43;
      pfVar8[1] = fVar77 + fVar34;
      pfVar8[2] = fVar16 + fVar36;
      pfVar8[3] = fVar29 + fVar38;
      fVar56 = pfVar8[0x28] + pfVar8[0x24];
      fVar51 = pfVar8[0x29] + pfVar8[0x25];
      fVar77 = pfVar8[0x2a] + pfVar8[0x26];
      fVar15 = pfVar8[0x2b] + pfVar8[0x27];
      fVar43 = pfVar8[0x24] - pfVar8[0x28];
      fVar45 = pfVar8[0x25] - pfVar8[0x29];
      fVar34 = pfVar8[0x26] - pfVar8[0x2a];
      fVar64 = pfVar8[0x27] - pfVar8[0x2b];
      fVar61 = pfVar8[0x20] + pfVar8[0x1c];
      fVar63 = pfVar8[0x21] + pfVar8[0x1d];
      fVar66 = pfVar8[0x22] + pfVar8[0x1e];
      fVar69 = pfVar8[0x23] + pfVar8[0x1f];
      fVar72 = pfVar8[0x1c] - pfVar8[0x20];
      fVar73 = pfVar8[0x1d] - pfVar8[0x21];
      fVar74 = pfVar8[0x1e] - pfVar8[0x22];
      fVar75 = pfVar8[0x1f] - pfVar8[0x23];
      fVar76 = pfVar8[8] + pfVar8[4];
      fVar78 = pfVar8[9] + pfVar8[5];
      fVar80 = pfVar8[10] + pfVar8[6];
      fVar82 = pfVar8[0xb] + pfVar8[7];
      fVar49 = pfVar8[4] - pfVar8[8];
      fVar81 = pfVar8[5] - pfVar8[9];
      fVar19 = pfVar8[6] - pfVar8[10];
      fVar20 = pfVar8[7] - pfVar8[0xb];
      fVar55 = pfVar8[0x18] + pfVar8[0x14];
      fVar57 = pfVar8[0x19] + pfVar8[0x15];
      fVar47 = pfVar8[0x1a] + pfVar8[0x16];
      fVar60 = pfVar8[0x1b] + pfVar8[0x17];
      fVar48 = pfVar8[0x14] - pfVar8[0x18];
      fVar52 = pfVar8[0x15] - pfVar8[0x19];
      fVar62 = pfVar8[0x16] - pfVar8[0x1a];
      fVar68 = pfVar8[0x17] - pfVar8[0x1b];
      fVar83 = pfVar8[0x10] + pfVar8[0xc];
      fVar84 = pfVar8[0x11] + pfVar8[0xd];
      fVar85 = pfVar8[0x12] + pfVar8[0xe];
      fVar86 = pfVar8[0x13] + pfVar8[0xf];
      fVar21 = pfVar8[0xc] - pfVar8[0x10];
      fVar22 = pfVar8[0xd] - pfVar8[0x11];
      fVar23 = pfVar8[0xe] - pfVar8[0x12];
      fVar25 = pfVar8[0xf] - pfVar8[0x13];
      fVar58 = pfVar8[0x30] + pfVar8[0x2c];
      fVar53 = pfVar8[0x31] + pfVar8[0x2d];
      fVar27 = pfVar8[0x32] + pfVar8[0x2e];
      fVar16 = pfVar8[0x33] + pfVar8[0x2f];
      local_2138 = (float)*(undefined8 *)(pfVar8 + 0x34);
      fStack_2134 = (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x34) >> 0x20);
      fStack_2130 = (float)*(undefined8 *)(pfVar8 + 0x36);
      fStack_212c = (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x36) >> 0x20);
      fVar24 = pfVar8[0x2c] - pfVar8[0x30];
      fVar26 = pfVar8[0x2d] - pfVar8[0x31];
      fVar29 = pfVar8[0x2e] - pfVar8[0x32];
      fVar31 = pfVar8[0x2f] - pfVar8[0x33];
      local_2168 = (float)*(undefined8 *)(pfVar8 + 0x3c);
      fStack_2164 = (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x3c) >> 0x20);
      fStack_2160 = (float)*(undefined8 *)(pfVar8 + 0x3e);
      fStack_215c = (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x3e) >> 0x20);
      fVar59 = pfVar8[0x38] + local_2138;
      fVar79 = pfVar8[0x39] + fStack_2134;
      fVar17 = pfVar8[0x3a] + fStack_2130;
      fVar18 = pfVar8[0x3b] + fStack_212c;
      local_2138 = local_2138 - pfVar8[0x38];
      fStack_2134 = fStack_2134 - pfVar8[0x39];
      fStack_2130 = fStack_2130 - pfVar8[0x3a];
      fStack_212c = fStack_212c - pfVar8[0x3b];
      fVar28 = pfVar8[0x40] + local_2168;
      fVar30 = pfVar8[0x41] + fStack_2164;
      fVar32 = pfVar8[0x42] + fStack_2160;
      fVar33 = pfVar8[0x43] + fStack_215c;
      local_2168 = local_2168 - pfVar8[0x40];
      fStack_2164 = fStack_2164 - pfVar8[0x41];
      fStack_2160 = fStack_2160 - pfVar8[0x42];
      fStack_215c = fStack_215c - pfVar8[0x43];
      fVar50 = fVar24 + fVar43;
      fVar54 = fVar26 + fVar45;
      fVar65 = fVar29 + fVar34;
      fVar71 = fVar31 + fVar64;
      fVar43 = fVar43 - fVar24;
      fVar45 = fVar45 - fVar26;
      fVar34 = fVar34 - fVar29;
      fVar64 = fVar64 - fVar31;
      fVar40 = fVar21 + fVar49;
      fVar42 = fVar22 + fVar81;
      fVar44 = fVar23 + fVar19;
      fVar46 = fVar25 + fVar20;
      fVar49 = fVar49 - fVar21;
      fVar81 = fVar81 - fVar22;
      fVar19 = fVar19 - fVar23;
      fVar20 = fVar20 - fVar25;
      fVar24 = local_2168 + fVar48;
      fVar26 = fStack_2164 + fVar52;
      fVar29 = fStack_2160 + fVar62;
      fVar31 = fStack_215c + fVar68;
      fVar36 = fVar59 - fVar55;
      fVar67 = fVar79 - fVar57;
      fVar38 = fVar17 - fVar47;
      fVar70 = fVar18 - fVar60;
      fVar59 = fVar59 + fVar55;
      fVar79 = fVar79 + fVar57;
      fVar17 = fVar17 + fVar47;
      fVar18 = fVar18 + fVar60;
      fVar35 = (-fVar43 - fVar40) * 0.70710677;
      fVar37 = (-fVar45 - fVar42) * 0.70710677;
      fVar39 = (-fVar34 - fVar44) * 0.70710677;
      fVar41 = (-fVar64 - fVar46) * 0.70710677;
      fVar40 = (fVar40 - fVar43) * 0.70710677;
      fVar42 = (fVar42 - fVar45) * 0.70710677;
      fVar44 = (fVar44 - fVar34) * 0.70710677;
      fVar46 = (fVar46 - fVar64) * 0.70710677;
      fVar43 = (fVar50 - fVar49) * 0.70710677;
      fVar45 = (fVar54 - fVar81) * 0.70710677;
      fVar34 = (fVar65 - fVar19) * 0.70710677;
      fVar64 = (fVar71 - fVar20) * 0.70710677;
      fVar21 = local_2138 - fVar72;
      fVar22 = fStack_2134 - fVar73;
      fVar23 = fStack_2130 - fVar74;
      fVar25 = fStack_212c - fVar75;
      fVar50 = (-fVar50 - fVar49) * 0.70710677;
      fVar54 = (-fVar54 - fVar81) * 0.70710677;
      fVar65 = (-fVar65 - fVar19) * 0.70710677;
      fVar71 = (-fVar71 - fVar20) * 0.70710677;
      local_2138 = local_2138 + fVar72;
      fStack_2134 = fStack_2134 + fVar73;
      fStack_2130 = fStack_2130 + fVar74;
      fStack_212c = fStack_212c + fVar75;
      local_2168 = local_2168 - fVar48;
      fStack_2164 = fStack_2164 - fVar52;
      fStack_2160 = fStack_2160 - fVar62;
      fStack_215c = fStack_215c - fVar68;
      fVar48 = fVar58 - fVar83;
      fVar52 = fVar53 - fVar84;
      fVar62 = fVar27 - fVar85;
      fVar68 = fVar16 - fVar86;
      fVar58 = fVar58 + fVar83;
      fVar53 = fVar53 + fVar84;
      fVar27 = fVar27 + fVar85;
      fVar16 = fVar16 + fVar86;
      fVar49 = fVar28 - fVar61;
      fVar81 = fVar30 - fVar63;
      fVar19 = fVar32 - fVar66;
      fVar20 = fVar33 - fVar69;
      fVar28 = fVar28 + fVar61;
      fVar30 = fVar30 + fVar63;
      fVar32 = fVar32 + fVar66;
      fVar33 = fVar33 + fVar69;
      fVar55 = fVar56 - fVar76;
      fVar57 = fVar51 - fVar78;
      fVar47 = fVar77 - fVar80;
      fVar60 = fVar15 - fVar82;
      fVar56 = fVar56 + fVar76;
      fVar51 = fVar51 + fVar78;
      fVar77 = fVar77 + fVar80;
      fVar15 = fVar15 + fVar82;
      pfVar8[4] = local_2138 + fVar43;
      pfVar8[5] = fStack_2134 + fVar45;
      pfVar8[6] = fStack_2130 + fVar34;
      pfVar8[7] = fStack_212c + fVar64;
      pfVar8[8] = local_2168 + fVar35;
      pfVar8[9] = fStack_2164 + fVar37;
      pfVar8[10] = fStack_2160 + fVar39;
      pfVar8[0xb] = fStack_215c + fVar41;
      pfVar8[0xc] = local_2138 - fVar43;
      pfVar8[0xd] = fStack_2134 - fVar45;
      pfVar8[0xe] = fStack_2130 - fVar34;
      pfVar8[0xf] = fStack_212c - fVar64;
      pfVar8[0x10] = local_2168 - fVar35;
      pfVar8[0x11] = fStack_2164 - fVar37;
      pfVar8[0x12] = fStack_2160 - fVar39;
      pfVar8[0x13] = fStack_215c - fVar41;
      pfVar8[0x14] = fVar21 + fVar40;
      pfVar8[0x15] = fVar22 + fVar42;
      pfVar8[0x16] = fVar23 + fVar44;
      pfVar8[0x17] = fVar25 + fVar46;
      pfVar8[0x18] = fVar24 + fVar50;
      pfVar8[0x19] = fVar26 + fVar54;
      pfVar8[0x1a] = fVar29 + fVar65;
      pfVar8[0x1b] = fVar31 + fVar71;
      pfVar8[0x1c] = fVar21 - fVar40;
      pfVar8[0x1d] = fVar22 - fVar42;
      pfVar8[0x1e] = fVar23 - fVar44;
      pfVar8[0x1f] = fVar25 - fVar46;
      pfVar8[0x20] = fVar24 - fVar50;
      pfVar8[0x21] = fVar26 - fVar54;
      pfVar8[0x22] = fVar29 - fVar65;
      pfVar8[0x23] = fVar31 - fVar71;
      pfVar8[0x24] = fVar48 + fVar36;
      pfVar8[0x25] = fVar52 + fVar67;
      pfVar8[0x26] = fVar62 + fVar38;
      pfVar8[0x27] = fVar68 + fVar70;
      pfVar8[0x28] = fVar49 - fVar55;
      pfVar8[0x29] = fVar81 - fVar57;
      pfVar8[0x2a] = fVar19 - fVar47;
      pfVar8[0x2b] = fVar20 - fVar60;
      pfVar8[0x2c] = fVar36 - fVar48;
      pfVar8[0x2d] = fVar67 - fVar52;
      pfVar8[0x2e] = fVar38 - fVar62;
      pfVar8[0x2f] = fVar70 - fVar68;
      pfVar8[0x30] = fVar55 + fVar49;
      pfVar8[0x31] = fVar57 + fVar81;
      pfVar8[0x32] = fVar47 + fVar19;
      pfVar8[0x33] = fVar60 + fVar20;
      pfVar8[0x34] = fVar59 - fVar56;
      pfVar8[0x35] = fVar79 - fVar51;
      pfVar8[0x36] = fVar17 - fVar77;
      pfVar8[0x37] = fVar18 - fVar15;
      pfVar8[0x38] = fVar28 - fVar58;
      pfVar8[0x39] = fVar30 - fVar53;
      pfVar8[0x3a] = fVar32 - fVar27;
      pfVar8[0x3b] = fVar33 - fVar16;
      pfVar8[0x3c] = fVar56 + fVar59;
      pfVar8[0x3d] = fVar51 + fVar79;
      pfVar8[0x3e] = fVar77 + fVar17;
      pfVar8[0x3f] = fVar15 + fVar18;
      pfVar8[0x40] = fVar58 + fVar28;
      pfVar8[0x41] = fVar53 + fVar30;
      pfVar8[0x42] = fVar27 + fVar32;
      pfVar8[0x43] = fVar16 + fVar33;
      pfVar8 = pfVar8 + 0x80;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_1431ee550(local_20e8,iVar3 * 2,iVar9,param_2);
  return;
}



// FUNCTION 1431ed640 FUN_1431ed640 body=3129 status=ok
// SIG undefined FUN_1431ed640(void)

void FUN_1431ed640(longlong param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  
  iVar21 = 0;
  lVar23 = (longlong)param_3;
  lVar15 = lVar23 + 10;
  lVar14 = lVar23 * 0x10;
  fVar9 = *(float *)(&DAT_145ad2420 + lVar14);
  fVar10 = *(float *)(&UNK_145ad2424 + lVar14);
  fVar11 = *(float *)(&UNK_145ad2428 + lVar14);
  fVar12 = *(float *)(&UNK_145ad242c + lVar14);
  lVar14 = lVar23 + 1;
  iVar18 = (int)((param_2 >> 0x1f & 0xfU) + param_2) >> 4;
  lVar16 = lVar15 * 0x10;
  fVar67 = *(float *)(&DAT_145ad24a0 + lVar16);
  fVar68 = *(float *)(&UNK_145ad24a4 + lVar16);
  fVar69 = *(float *)(&UNK_145ad24a8 + lVar16);
  fVar71 = *(float *)(&UNK_145ad24ac + lVar16);
  lVar16 = lVar15 * 0x10;
  fVar29 = *(float *)(&DAT_145ad25c0 + lVar16);
  fVar30 = *(float *)(&UNK_145ad25c4 + lVar16);
  fVar31 = *(float *)(&UNK_145ad25c8 + lVar16);
  fVar35 = *(float *)(&UNK_145ad25cc + lVar16);
  lVar16 = lVar15 * 0x10;
  fVar47 = *(float *)(&DAT_145ad26e0 + lVar16);
  fVar49 = *(float *)(&UNK_145ad26e4 + lVar16);
  fVar51 = *(float *)(&UNK_145ad26e8 + lVar16);
  fVar55 = *(float *)(&UNK_145ad26ec + lVar16);
  local_1b8 = *(undefined8 *)(&DAT_145ad2b70 + lVar14 * 0x10);
  uStack_1b0 = *(undefined8 *)(&UNK_145ad2b78 + lVar14 * 0x10);
  lVar16 = lVar14 * 0x10;
  local_198 = *(float *)(&DAT_145ad2ae0 + lVar16);
  fStack_194 = *(float *)(&UNK_145ad2ae4 + lVar16);
  fStack_190 = *(float *)(&UNK_145ad2ae8 + lVar16);
  fStack_18c = *(float *)(&UNK_145ad2aec + lVar16);
  lVar15 = lVar15 * 0x10;
  fVar36 = *(float *)(&DAT_145ad2800 + lVar15);
  fVar40 = *(float *)(&UNK_145ad2804 + lVar15);
  fVar44 = *(float *)(&UNK_145ad2808 + lVar15);
  fVar108 = *(float *)(&UNK_145ad280c + lVar15);
  local_188 = *(undefined8 *)(&DAT_145ad2c00 + lVar14 * 0x10);
  uStack_180 = *(undefined8 *)(&UNK_145ad2c08 + lVar14 * 0x10);
  local_1a8 = *(undefined8 *)(&DAT_145ad2c90 + lVar14 * 0x10);
  uStack_1a0 = *(undefined8 *)(&UNK_145ad2c98 + lVar14 * 0x10);
  lVar14 = lVar23 * 0x10;
  lVar15 = lVar23 + 0xb;
  fVar119 = *(float *)(&DAT_145ad2430 + lVar14);
  fVar121 = *(float *)(&UNK_145ad2434 + lVar14);
  fVar123 = *(float *)(&UNK_145ad2438 + lVar14);
  fVar125 = *(float *)(&UNK_145ad243c + lVar14);
  local_1f8 = *(undefined8 *)(&DAT_145ad24a0 + lVar15 * 0x10);
  uStack_1f0 = *(undefined8 *)(&UNK_145ad24a8 + lVar15 * 0x10);
  local_218 = *(undefined8 *)(&DAT_145ad25c0 + lVar15 * 0x10);
  uStack_210 = *(undefined8 *)(&UNK_145ad25c8 + lVar15 * 0x10);
  local_1e8 = *(undefined8 *)(&DAT_145ad26e0 + lVar15 * 0x10);
  uStack_1e0 = *(undefined8 *)(&UNK_145ad26e8 + lVar15 * 0x10);
  local_208 = *(undefined8 *)(&DAT_145ad2800 + lVar15 * 0x10);
  uStack_200 = *(undefined8 *)(&UNK_145ad2808 + lVar15 * 0x10);
  uVar13 = (int)(param_2 + (param_2 >> 0x1f & 0x7fU)) >> 7;
  uVar17 = (ulonglong)uVar13;
  if (0 < (int)uVar13) {
    pfVar20 = param_4 + 0x20;
    pfVar19 = param_4 + 0x30;
    pfVar22 = param_4 + 0x10;
    iVar25 = iVar18 * 2;
    uVar24 = uVar17;
    fVar26 = fVar29;
    fVar27 = fVar30;
    fVar28 = fVar31;
    fVar59 = fVar35;
    fVar34 = local_198;
    fVar73 = fStack_194;
    fVar39 = fStack_190;
    fVar75 = fStack_18c;
    fVar43 = fVar36;
    fVar105 = fVar40;
    fVar109 = fVar44;
    fVar112 = fVar108;
    do {
      fVar108 = fVar55;
      fVar44 = fVar51;
      fVar40 = fVar49;
      fVar36 = fVar47;
      fVar35 = fVar71;
      fVar31 = fVar69;
      fVar30 = fVar68;
      fVar29 = fVar67;
      lVar15 = (longlong)iVar25;
      lVar16 = (longlong)iVar21;
      pfVar3 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      fVar67 = fVar29 * fVar9 - fVar26;
      fVar68 = fVar30 * fVar10 - fVar27;
      fVar69 = fVar31 * fVar11 - fVar28;
      fVar71 = fVar35 * fVar12 - fVar59;
      pfVar1 = (float *)(param_1 + lVar15 * 0x10);
      pfVar2 = (float *)(param_1 + lVar16 * 0x10);
      pfVar4 = (float *)(param_1 + 0x30 + lVar16 * 0x10);
      pfVar5 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      pfVar6 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      fVar26 = *pfVar5 + *pfVar3;
      fVar32 = pfVar5[1] + pfVar3[1];
      fVar37 = pfVar5[2] + pfVar3[2];
      fVar41 = pfVar5[3] + pfVar3[3];
      pfVar5 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      fVar81 = *pfVar3 - *pfVar5;
      fVar85 = pfVar3[1] - pfVar5[1];
      fVar89 = pfVar3[2] - pfVar5[2];
      fVar93 = pfVar3[3] - pfVar5[3];
      local_198 = fVar34 * fVar9 - (float)local_1b8;
      fStack_194 = fVar73 * fVar10 - local_1b8._4_4_;
      fStack_190 = fVar39 * fVar11 - (float)uStack_1b0;
      fStack_18c = fVar75 * fVar12 - uStack_1b0._4_4_;
      fVar97 = *pfVar6 + *pfVar1;
      fVar99 = pfVar6[1] + pfVar1[1];
      fVar101 = pfVar6[2] + pfVar1[2];
      fVar103 = pfVar6[3] + pfVar1[3];
      pfVar3 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      fVar59 = *pfVar1 - *pfVar3;
      fVar61 = pfVar1[1] - pfVar3[1];
      fVar63 = pfVar1[2] - pfVar3[2];
      fVar65 = pfVar1[3] - pfVar3[3];
      pfVar1 = (float *)(param_1 + 0x10 + lVar16 * 0x10);
      fVar27 = *pfVar1 + *pfVar2;
      fVar33 = pfVar1[1] + pfVar2[1];
      fVar38 = pfVar1[2] + pfVar2[2];
      fVar42 = pfVar1[3] + pfVar2[3];
      local_1b8 = CONCAT44(fVar73,fVar34);
      uStack_1b0 = CONCAT44(fVar75,fVar39);
      pfVar1 = (float *)(param_1 + 0x10 + lVar16 * 0x10);
      fVar73 = *pfVar2 - *pfVar1;
      fVar75 = pfVar2[1] - pfVar1[1];
      fVar77 = pfVar2[2] - pfVar1[2];
      fVar79 = pfVar2[3] - pfVar1[3];
      fVar47 = fVar36 * fVar9 - fVar43;
      fVar49 = fVar40 * fVar10 - fVar105;
      fVar51 = fVar44 * fVar11 - fVar109;
      fVar55 = fVar108 * fVar12 - fVar112;
      pfVar1 = (float *)(param_1 + 0x20 + lVar16 * 0x10);
      fVar28 = *pfVar4 + *pfVar1;
      fVar34 = pfVar4[1] + pfVar1[1];
      fVar39 = pfVar4[2] + pfVar1[2];
      fVar43 = pfVar4[3] + pfVar1[3];
      pfVar1 = (float *)(param_1 + 0x20 + lVar16 * 0x10);
      fVar105 = *pfVar4 - *pfVar1;
      fVar109 = pfVar4[1] - pfVar1[1];
      fVar112 = pfVar4[2] - pfVar1[2];
      fVar115 = pfVar4[3] - pfVar1[3];
      lVar15 = (longlong)(iVar25 - iVar18);
      pfVar1 = (float *)(param_1 + lVar15 * 0x10);
      fVar138 = fVar59 * fVar67 - fVar81 * fVar47;
      fVar142 = fVar61 * fVar68 - fVar85 * fVar49;
      fVar146 = fVar63 * fVar69 - fVar89 * fVar51;
      fVar150 = fVar65 * fVar71 - fVar93 * fVar55;
      fVar82 = fVar81 * fVar67 + fVar59 * fVar47;
      fVar86 = fVar85 * fVar68 + fVar61 * fVar49;
      fVar90 = fVar89 * fVar69 + fVar63 * fVar51;
      fVar94 = fVar93 * fVar71 + fVar65 * fVar55;
      pfVar3 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      pfVar4 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      fVar126 = fVar105 * fVar67 - fVar73 * fVar47;
      fVar127 = fVar109 * fVar68 - fVar75 * fVar49;
      fVar128 = fVar112 * fVar69 - fVar77 * fVar51;
      fVar129 = fVar115 * fVar71 - fVar79 * fVar55;
      fVar106 = fVar105 * fVar47 + fVar73 * fVar67;
      fVar110 = fVar109 * fVar49 + fVar75 * fVar68;
      fVar113 = fVar112 * fVar51 + fVar77 * fVar69;
      fVar116 = fVar115 * fVar55 + fVar79 * fVar71;
      pfVar5 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      lVar15 = (longlong)(iVar25 + iVar18);
      fVar83 = (float)local_188 * fVar9 - (float)local_1a8;
      fVar87 = local_188._4_4_ * fVar10 - local_1a8._4_4_;
      fVar91 = (float)uStack_180 * fVar11 - (float)uStack_1a0;
      fVar95 = uStack_180._4_4_ * fVar12 - uStack_1a0._4_4_;
      local_1a8 = local_188;
      uStack_1a0 = uStack_180;
      pfVar2 = (float *)(param_1 + lVar15 * 0x10);
      pfVar6 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      pfVar7 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      pfVar8 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      fVar59 = *pfVar6 + *pfVar8;
      fVar73 = pfVar6[1] + pfVar8[1];
      fVar75 = pfVar6[2] + pfVar8[2];
      fVar105 = pfVar6[3] + pfVar8[3];
      fVar130 = *pfVar7 + *pfVar2;
      fVar132 = pfVar7[1] + pfVar2[1];
      fVar134 = pfVar7[2] + pfVar2[2];
      fVar136 = pfVar7[3] + pfVar2[3];
      local_188 = CONCAT44(fVar87,fVar83);
      uStack_180 = CONCAT44(fVar95,fVar91);
      pfVar7 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      fVar65 = *pfVar2 - *pfVar7;
      fVar77 = pfVar2[1] - pfVar7[1];
      fVar79 = pfVar2[2] - pfVar7[2];
      fVar81 = pfVar2[3] - pfVar7[3];
      pfVar2 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      fVar109 = *pfVar6 - *pfVar2;
      fVar112 = pfVar6[1] - pfVar2[1];
      fVar61 = pfVar6[2] - pfVar2[2];
      fVar63 = pfVar6[3] - pfVar2[3];
      fVar74 = *pfVar5 - *pfVar1;
      fVar76 = pfVar5[1] - pfVar1[1];
      fVar78 = pfVar5[2] - pfVar1[2];
      fVar80 = pfVar5[3] - pfVar1[3];
      fVar98 = *pfVar5 + *pfVar1;
      fVar100 = pfVar5[1] + pfVar1[1];
      fVar102 = pfVar5[2] + pfVar1[2];
      fVar104 = pfVar5[3] + pfVar1[3];
      fVar89 = *pfVar4 - *pfVar3;
      fVar93 = pfVar4[1] - pfVar3[1];
      fVar70 = pfVar4[2] - pfVar3[2];
      fVar72 = pfVar4[3] - pfVar3[3];
      fVar107 = *pfVar4 + *pfVar3;
      fVar111 = pfVar4[1] + pfVar3[1];
      fVar114 = pfVar4[2] + pfVar3[2];
      fVar117 = pfVar4[3] + pfVar3[3];
      fVar85 = local_198 * fVar109 + fVar83 * fVar65;
      fVar115 = fStack_194 * fVar112 + fVar87 * fVar77;
      fVar45 = fStack_190 * fVar61 + fVar91 * fVar79;
      fVar46 = fStack_18c * fVar63 + fVar95 * fVar81;
      fVar48 = local_198 * fVar65 - fVar83 * fVar109;
      fVar50 = fStack_194 * fVar77 - fVar87 * fVar112;
      fVar52 = fStack_190 * fVar79 - fVar91 * fVar61;
      fVar56 = fStack_18c * fVar81 - fVar95 * fVar63;
      fVar109 = fVar83 * fVar89 + local_198 * fVar74;
      fVar112 = fVar87 * fVar93 + fStack_194 * fVar76;
      fVar61 = fVar91 * fVar70 + fStack_190 * fVar78;
      fVar63 = fVar95 * fVar72 + fStack_18c * fVar80;
      fVar118 = local_198 * fVar89 - fVar83 * fVar74;
      fVar120 = fStack_194 * fVar93 - fVar87 * fVar76;
      fVar122 = fStack_190 * fVar70 - fVar91 * fVar78;
      fVar124 = fStack_18c * fVar72 - fVar95 * fVar80;
      fVar65 = (float)local_1e8 * fVar119 - (float)local_208;
      fVar77 = local_1e8._4_4_ * fVar121 - local_208._4_4_;
      fVar79 = (float)uStack_1e0 * fVar123 - (float)uStack_200;
      fVar81 = uStack_1e0._4_4_ * fVar125 - uStack_200._4_4_;
      local_208 = local_1e8;
      uStack_200 = uStack_1e0;
      fVar84 = (float)local_1f8 * fVar119 - (float)local_218;
      fVar88 = local_1f8._4_4_ * fVar121 - local_218._4_4_;
      fVar92 = (float)uStack_1f0 * fVar123 - (float)uStack_210;
      fVar96 = uStack_1f0._4_4_ * fVar125 - uStack_210._4_4_;
      fVar89 = fVar85 - fVar109;
      fVar70 = fVar115 - fVar112;
      fVar74 = fVar45 - fVar61;
      fVar78 = fVar46 - fVar63;
      local_218 = local_1f8;
      uStack_210 = uStack_1f0;
      local_1e8 = CONCAT44(fVar77,fVar65);
      uStack_1e0 = CONCAT44(fVar81,fVar79);
      fVar83 = fVar48 - fVar118;
      fVar91 = fVar50 - fVar120;
      fVar53 = fVar52 - fVar122;
      fVar57 = fVar56 - fVar124;
      local_1f8 = CONCAT44(fVar88,fVar84);
      uStack_1f0 = CONCAT44(fVar96,fVar92);
      fVar139 = fVar138 - fVar126;
      fVar143 = fVar142 - fVar127;
      fVar147 = fVar146 - fVar128;
      fVar151 = fVar150 - fVar129;
      fVar60 = fVar106 - fVar82;
      fVar62 = fVar110 - fVar86;
      fVar64 = fVar113 - fVar90;
      fVar66 = fVar116 - fVar94;
      fVar93 = fVar97 - fVar27;
      fVar72 = fVar99 - fVar33;
      fVar76 = fVar101 - fVar38;
      fVar80 = fVar103 - fVar42;
      fVar131 = fVar130 - fVar98;
      fVar133 = fVar132 - fVar100;
      fVar135 = fVar134 - fVar102;
      fVar137 = fVar136 - fVar104;
      fVar140 = fVar59 - fVar107;
      fVar144 = fVar73 - fVar111;
      fVar148 = fVar75 - fVar114;
      fVar152 = fVar105 - fVar117;
      fVar87 = fVar28 - fVar26;
      fVar95 = fVar34 - fVar32;
      fVar54 = fVar39 - fVar37;
      fVar58 = fVar43 - fVar41;
      *param_4 = fVar89 * fVar84 - fVar83 * fVar65;
      param_4[1] = fVar109 + fVar85;
      param_4[2] = fVar131 * fVar84 - fVar140 * fVar65;
      param_4[3] = fVar98 + fVar130;
      *pfVar22 = fVar70 * fVar88 - fVar91 * fVar77;
      pfVar22[1] = fVar112 + fVar115;
      pfVar22[2] = fVar133 * fVar88 - fVar144 * fVar77;
      pfVar22[3] = fVar100 + fVar132;
      *pfVar20 = fVar74 * fVar92 - fVar53 * fVar79;
      pfVar20[1] = fVar61 + fVar45;
      pfVar20[2] = fVar135 * fVar92 - fVar148 * fVar79;
      pfVar20[3] = fVar102 + fVar134;
      *pfVar19 = fVar78 * fVar96 - fVar57 * fVar81;
      pfVar19[1] = fVar63 + fVar46;
      pfVar19[2] = fVar137 * fVar96 - fVar152 * fVar81;
      pfVar19[3] = fVar104 + fVar136;
      param_4[4] = fVar60 * fVar84 - fVar139 * fVar65;
      param_4[5] = fVar126 + fVar138;
      param_4[6] = fVar87 * fVar84 - fVar93 * fVar65;
      param_4[7] = fVar27 + fVar97;
      pfVar22[4] = fVar62 * fVar88 - fVar143 * fVar77;
      pfVar22[5] = fVar127 + fVar142;
      pfVar22[6] = fVar95 * fVar88 - fVar72 * fVar77;
      pfVar22[7] = fVar33 + fVar99;
      pfVar20[4] = fVar64 * fVar92 - fVar147 * fVar79;
      pfVar20[5] = fVar128 + fVar146;
      pfVar20[6] = fVar54 * fVar92 - fVar76 * fVar79;
      pfVar20[7] = fVar38 + fVar101;
      pfVar19[4] = fVar66 * fVar96 - fVar151 * fVar81;
      pfVar19[5] = fVar129 + fVar150;
      pfVar19[6] = fVar58 * fVar96 - fVar80 * fVar81;
      pfVar19[7] = fVar42 + fVar103;
      param_4[8] = fVar83 * fVar84 + fVar89 * fVar65;
      param_4[9] = fVar118 + fVar48;
      param_4[10] = fVar140 * fVar84 + fVar131 * fVar65;
      param_4[0xb] = fVar107 + fVar59;
      pfVar22[8] = fVar91 * fVar88 + fVar70 * fVar77;
      pfVar22[9] = fVar120 + fVar50;
      pfVar22[10] = fVar144 * fVar88 + fVar133 * fVar77;
      pfVar22[0xb] = fVar111 + fVar73;
      pfVar20[8] = fVar53 * fVar92 + fVar74 * fVar79;
      pfVar20[9] = fVar122 + fVar52;
      pfVar20[10] = fVar148 * fVar92 + fVar135 * fVar79;
      pfVar20[0xb] = fVar114 + fVar75;
      pfVar19[8] = fVar57 * fVar96 + fVar78 * fVar81;
      pfVar19[9] = fVar124 + fVar56;
      pfVar19[10] = fVar152 * fVar96 + fVar137 * fVar81;
      pfVar19[0xb] = fVar117 + fVar105;
      iVar21 = iVar21 + 4;
      iVar25 = iVar25 + 4;
      param_4[0xc] = fVar60 * fVar65 + fVar139 * fVar84;
      param_4[0xd] = fVar106 + fVar82;
      param_4[0xe] = fVar87 * fVar65 + fVar93 * fVar84;
      param_4[0xf] = fVar28 + fVar26;
      param_4 = param_4 + 0x40;
      pfVar22[0xc] = fVar62 * fVar77 + fVar143 * fVar88;
      pfVar22[0xd] = fVar110 + fVar86;
      pfVar22[0xe] = fVar95 * fVar77 + fVar72 * fVar88;
      pfVar22[0xf] = fVar34 + fVar32;
      pfVar22 = pfVar22 + 0x40;
      pfVar20[0xc] = fVar64 * fVar79 + fVar147 * fVar92;
      pfVar20[0xd] = fVar113 + fVar90;
      pfVar20[0xe] = fVar54 * fVar79 + fVar76 * fVar92;
      pfVar20[0xf] = fVar39 + fVar37;
      pfVar20 = pfVar20 + 0x40;
      pfVar19[0xc] = fVar66 * fVar81 + fVar151 * fVar96;
      pfVar19[0xd] = fVar116 + fVar94;
      pfVar19[0xe] = fVar58 * fVar81 + fVar80 * fVar96;
      pfVar19[0xf] = fVar43 + fVar41;
      pfVar19 = pfVar19 + 0x40;
      uVar24 = uVar24 - 1;
      fVar26 = fVar29;
      fVar27 = fVar30;
      fVar28 = fVar31;
      fVar59 = fVar35;
      fVar34 = local_198;
      fVar73 = fStack_194;
      fVar39 = fStack_190;
      fVar75 = fStack_18c;
      fVar43 = fVar36;
      fVar105 = fVar40;
      fVar109 = fVar44;
      fVar112 = fVar108;
    } while (uVar24 != 0);
    fVar119 = *(float *)(&DAT_145ad2430 + lVar14);
    fVar121 = *(float *)(&UNK_145ad2434 + lVar14);
    fVar123 = *(float *)(&UNK_145ad2438 + lVar14);
    fVar125 = *(float *)(&UNK_145ad243c + lVar14);
  }
  lVar23 = lVar23 + 2;
  local_208 = *(undefined8 *)(&DAT_145ad2ae0 + lVar23 * 0x10);
  uStack_200 = *(undefined8 *)(&UNK_145ad2ae8 + lVar23 * 0x10);
  local_1e8 = *(undefined8 *)(&DAT_145ad2b70 + lVar23 * 0x10);
  uStack_1e0 = *(undefined8 *)(&UNK_145ad2b78 + lVar23 * 0x10);
  local_218 = *(undefined8 *)(&DAT_145ad2c00 + lVar23 * 0x10);
  uStack_210 = *(undefined8 *)(&UNK_145ad2c08 + lVar23 * 0x10);
  local_1f8 = *(undefined8 *)(&DAT_145ad2c90 + lVar23 * 0x10);
  uStack_1f0 = *(undefined8 *)(&UNK_145ad2c98 + lVar23 * 0x10);
  if (0 < (int)uVar13) {
    pfVar20 = param_4 + 0x30;
    pfVar19 = param_4 + 0x20;
    pfVar22 = param_4 + 0x10;
    iVar21 = iVar21 + iVar18 * 2;
    do {
      fVar143 = fVar55;
      fVar138 = fVar51;
      fVar134 = fVar49;
      fVar130 = fVar47;
      lVar14 = (longlong)(iVar21 + iVar18 * -2);
      lVar15 = (longlong)iVar21;
      pfVar1 = (float *)(param_1 + lVar14 * 0x10);
      pfVar3 = (float *)(param_1 + 0x30 + lVar14 * 0x10);
      fVar54 = fVar67 * fVar9 - fVar29;
      fVar57 = fVar68 * fVar10 - fVar30;
      fVar60 = fVar69 * fVar11 - fVar31;
      fVar64 = fVar71 * fVar12 - fVar35;
      pfVar4 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      pfVar2 = (float *)(param_1 + lVar15 * 0x10);
      pfVar5 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      pfVar6 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      fVar29 = *pfVar5 + *pfVar4;
      fVar35 = pfVar5[1] + pfVar4[1];
      fVar27 = pfVar5[2] + pfVar4[2];
      fVar59 = pfVar5[3] + pfVar4[3];
      pfVar5 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      fVar33 = *pfVar4 - *pfVar5;
      fVar37 = pfVar4[1] - pfVar5[1];
      fVar38 = pfVar4[2] - pfVar5[2];
      fVar41 = pfVar4[3] - pfVar5[3];
      fVar90 = *pfVar6 + *pfVar2;
      fVar96 = pfVar6[1] + pfVar2[1];
      fVar99 = pfVar6[2] + pfVar2[2];
      fVar102 = pfVar6[3] + pfVar2[3];
      pfVar4 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      fVar73 = *pfVar2 - *pfVar4;
      fVar39 = pfVar2[1] - pfVar4[1];
      fVar75 = pfVar2[2] - pfVar4[2];
      fVar43 = pfVar2[3] - pfVar4[3];
      pfVar2 = (float *)(param_1 + 0x10 + lVar14 * 0x10);
      fVar30 = *pfVar2 + *pfVar1;
      fVar26 = pfVar2[1] + pfVar1[1];
      fVar28 = pfVar2[2] + pfVar1[2];
      fVar34 = pfVar2[3] + pfVar1[3];
      pfVar2 = (float *)(param_1 + 0x10 + lVar14 * 0x10);
      fVar105 = *pfVar1 - *pfVar2;
      fVar109 = pfVar1[1] - pfVar2[1];
      fVar112 = pfVar1[2] - pfVar2[2];
      fVar32 = pfVar1[3] - pfVar2[3];
      fVar47 = fVar130 * fVar9 - fVar36;
      fVar49 = fVar134 * fVar10 - fVar40;
      fVar51 = fVar138 * fVar11 - fVar44;
      fVar55 = fVar143 * fVar12 - fVar108;
      pfVar1 = (float *)(param_1 + 0x20 + lVar14 * 0x10);
      fVar31 = *pfVar3 + *pfVar1;
      fVar36 = pfVar3[1] + pfVar1[1];
      fVar40 = pfVar3[2] + pfVar1[2];
      fVar44 = pfVar3[3] + pfVar1[3];
      pfVar1 = (float *)(param_1 + 0x20 + lVar14 * 0x10);
      fVar108 = *pfVar3 - *pfVar1;
      fVar42 = pfVar3[1] - pfVar1[1];
      fVar61 = pfVar3[2] - pfVar1[2];
      fVar63 = pfVar3[3] - pfVar1[3];
      lVar15 = (longlong)(iVar21 - iVar18);
      pfVar1 = (float *)(param_1 + lVar15 * 0x10);
      fVar148 = fVar73 * fVar54 - fVar33 * fVar47;
      fVar150 = fVar39 * fVar57 - fVar37 * fVar49;
      fVar151 = fVar75 * fVar60 - fVar38 * fVar51;
      fVar152 = fVar43 * fVar64 - fVar41 * fVar55;
      fVar82 = fVar33 * fVar54 + fVar73 * fVar47;
      fVar84 = fVar37 * fVar57 + fVar39 * fVar49;
      fVar86 = fVar38 * fVar60 + fVar75 * fVar51;
      fVar88 = fVar41 * fVar64 + fVar43 * fVar55;
      pfVar3 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      pfVar4 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      fVar141 = fVar108 * fVar54 - fVar105 * fVar47;
      fVar145 = fVar42 * fVar57 - fVar109 * fVar49;
      fVar149 = fVar61 * fVar60 - fVar112 * fVar51;
      fVar153 = fVar63 * fVar64 - fVar32 * fVar55;
      fVar106 = fVar108 * fVar47 + fVar105 * fVar54;
      fVar110 = fVar42 * fVar49 + fVar109 * fVar57;
      fVar113 = fVar61 * fVar51 + fVar112 * fVar60;
      fVar116 = fVar63 * fVar55 + fVar32 * fVar64;
      pfVar5 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      lVar15 = (longlong)(iVar21 + iVar18);
      fVar131 = local_198 * fVar9 - (float)local_1b8;
      fVar135 = fStack_194 * fVar10 - local_1b8._4_4_;
      fVar139 = fStack_190 * fVar11 - (float)uStack_1b0;
      fVar144 = fStack_18c * fVar12 - uStack_1b0._4_4_;
      fVar81 = (float)local_188 * fVar9 - (float)local_1a8;
      fVar89 = local_188._4_4_ * fVar10 - local_1a8._4_4_;
      fVar93 = (float)uStack_180 * fVar11 - (float)uStack_1a0;
      fVar115 = uStack_180._4_4_ * fVar12 - uStack_1a0._4_4_;
      local_1b8 = CONCAT44(fStack_194,local_198);
      uStack_1b0 = CONCAT44(fStack_18c,fStack_190);
      pfVar2 = (float *)(param_1 + lVar15 * 0x10);
      pfVar6 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      pfVar7 = (float *)(param_1 + 0x30 + lVar15 * 0x10);
      fVar92 = *pfVar6 + *pfVar2;
      fVar97 = pfVar6[1] + pfVar2[1];
      fVar100 = pfVar6[2] + pfVar2[2];
      fVar103 = pfVar6[3] + pfVar2[3];
      local_1a8 = local_188;
      uStack_1a0 = uStack_180;
      local_188 = CONCAT44(fVar89,fVar81);
      uStack_180 = CONCAT44(fVar115,fVar93);
      pfVar6 = (float *)(param_1 + 0x10 + lVar15 * 0x10);
      fVar43 = *pfVar2 - *pfVar6;
      fVar105 = pfVar2[1] - pfVar6[1];
      fVar109 = pfVar2[2] - pfVar6[2];
      fVar112 = pfVar2[3] - pfVar6[3];
      pfVar2 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      fVar108 = *pfVar7 - *pfVar2;
      fVar73 = pfVar7[1] - pfVar2[1];
      fVar39 = pfVar7[2] - pfVar2[2];
      fVar75 = pfVar7[3] - pfVar2[3];
      pfVar2 = (float *)(param_1 + 0x20 + lVar15 * 0x10);
      fVar107 = *pfVar7 + *pfVar2;
      fVar111 = pfVar7[1] + pfVar2[1];
      fVar114 = pfVar7[2] + pfVar2[2];
      fVar117 = pfVar7[3] + pfVar2[3];
      fVar33 = *pfVar4 - *pfVar3;
      fVar37 = pfVar4[1] - pfVar3[1];
      fVar38 = pfVar4[2] - pfVar3[2];
      fVar42 = pfVar4[3] - pfVar3[3];
      fVar118 = *pfVar4 + *pfVar3;
      fVar122 = pfVar4[1] + pfVar3[1];
      fVar126 = pfVar4[2] + pfVar3[2];
      fVar128 = pfVar4[3] + pfVar3[3];
      fVar94 = *pfVar5 + *pfVar1;
      fVar98 = pfVar5[1] + pfVar1[1];
      fVar101 = pfVar5[2] + pfVar1[2];
      fVar104 = pfVar5[3] + pfVar1[3];
      fVar61 = *pfVar5 - *pfVar1;
      fVar63 = pfVar5[1] - pfVar1[1];
      fVar77 = pfVar5[2] - pfVar1[2];
      fVar79 = pfVar5[3] - pfVar1[3];
      fVar70 = fVar131 * fVar108 + fVar81 * fVar43;
      fVar74 = fVar135 * fVar73 + fVar89 * fVar105;
      fVar78 = fVar139 * fVar39 + fVar93 * fVar109;
      fVar83 = fVar144 * fVar75 + fVar115 * fVar112;
      fVar32 = fVar131 * fVar43 - fVar81 * fVar108;
      fVar41 = fVar135 * fVar105 - fVar89 * fVar73;
      fVar65 = fVar139 * fVar109 - fVar93 * fVar39;
      fVar85 = fVar144 * fVar112 - fVar115 * fVar75;
      fVar43 = (float)local_218 * fVar119 - (float)local_1f8;
      fVar105 = local_218._4_4_ * fVar121 - local_1f8._4_4_;
      fVar109 = (float)uStack_210 * fVar123 - (float)uStack_1f0;
      fVar112 = uStack_210._4_4_ * fVar125 - uStack_1f0._4_4_;
      fVar108 = fVar81 * fVar33 + fVar131 * fVar61;
      fVar73 = fVar89 * fVar37 + fVar135 * fVar63;
      fVar39 = fVar93 * fVar38 + fVar139 * fVar77;
      fVar75 = fVar115 * fVar42 + fVar144 * fVar79;
      local_1f8 = local_218;
      uStack_1f0 = uStack_210;
      fVar132 = fVar131 * fVar33 - fVar81 * fVar61;
      fVar136 = fVar135 * fVar37 - fVar89 * fVar63;
      fVar140 = fVar139 * fVar38 - fVar93 * fVar77;
      fVar146 = fVar144 * fVar42 - fVar115 * fVar79;
      local_218 = CONCAT44(fVar105,fVar43);
      uStack_210 = CONCAT44(fVar112,fVar109);
      fVar56 = (float)local_208 * fVar119 - (float)local_1e8;
      fVar58 = local_208._4_4_ * fVar121 - local_1e8._4_4_;
      fVar62 = (float)uStack_200 * fVar123 - (float)uStack_1e0;
      fVar66 = uStack_200._4_4_ * fVar125 - uStack_1e0._4_4_;
      local_1e8 = local_208;
      uStack_1e0 = uStack_200;
      fVar72 = fVar70 - fVar108;
      fVar76 = fVar74 - fVar73;
      fVar80 = fVar78 - fVar39;
      fVar87 = fVar83 - fVar75;
      fVar91 = fVar106 - fVar82;
      fVar95 = fVar110 - fVar84;
      fVar52 = fVar113 - fVar86;
      fVar53 = fVar116 - fVar88;
      fVar133 = fVar132 - fVar32;
      fVar137 = fVar136 - fVar41;
      fVar142 = fVar140 - fVar65;
      fVar147 = fVar146 - fVar85;
      local_208 = CONCAT44(fVar58,fVar56);
      uStack_200 = CONCAT44(fVar66,fVar62);
      fVar33 = fVar141 - fVar148;
      fVar42 = fVar145 - fVar150;
      fVar77 = fVar149 - fVar151;
      fVar89 = fVar153 - fVar152;
      fVar45 = fVar92 - fVar94;
      fVar46 = fVar97 - fVar98;
      fVar48 = fVar100 - fVar101;
      fVar50 = fVar103 - fVar104;
      fVar37 = fVar30 - fVar90;
      fVar61 = fVar26 - fVar96;
      fVar79 = fVar28 - fVar99;
      fVar93 = fVar34 - fVar102;
      fVar120 = fVar118 - fVar107;
      fVar124 = fVar122 - fVar111;
      fVar127 = fVar126 - fVar114;
      fVar129 = fVar128 - fVar117;
      fVar38 = fVar31 - fVar29;
      fVar63 = fVar36 - fVar35;
      fVar81 = fVar40 - fVar27;
      fVar115 = fVar44 - fVar59;
      *param_4 = fVar56 * fVar133 + fVar43 * fVar72;
      param_4[1] = fVar108 + fVar70;
      param_4[2] = fVar56 * fVar120 + fVar43 * fVar45;
      param_4[3] = fVar94 + fVar92;
      *pfVar22 = fVar58 * fVar137 + fVar105 * fVar76;
      pfVar22[1] = fVar73 + fVar74;
      pfVar22[2] = fVar58 * fVar124 + fVar105 * fVar46;
      pfVar22[3] = fVar98 + fVar97;
      *pfVar19 = fVar62 * fVar142 + fVar109 * fVar80;
      pfVar19[1] = fVar39 + fVar78;
      pfVar19[2] = fVar62 * fVar127 + fVar109 * fVar48;
      pfVar19[3] = fVar101 + fVar100;
      *pfVar20 = fVar66 * fVar147 + fVar112 * fVar87;
      pfVar20[1] = fVar75 + fVar83;
      pfVar20[2] = fVar66 * fVar129 + fVar112 * fVar50;
      pfVar20[3] = fVar104 + fVar103;
      param_4[4] = fVar43 * fVar91 + fVar56 * fVar33;
      param_4[5] = fVar141 + fVar148;
      param_4[6] = fVar43 * fVar38 + fVar56 * fVar37;
      param_4[7] = fVar30 + fVar90;
      pfVar22[4] = fVar105 * fVar95 + fVar58 * fVar42;
      pfVar22[5] = fVar145 + fVar150;
      pfVar22[6] = fVar105 * fVar63 + fVar58 * fVar61;
      pfVar22[7] = fVar26 + fVar96;
      pfVar19[4] = fVar109 * fVar52 + fVar62 * fVar77;
      pfVar19[5] = fVar149 + fVar151;
      pfVar19[6] = fVar109 * fVar81 + fVar62 * fVar79;
      pfVar19[7] = fVar28 + fVar99;
      pfVar20[4] = fVar112 * fVar53 + fVar66 * fVar89;
      pfVar20[5] = fVar153 + fVar152;
      pfVar20[6] = fVar112 * fVar115 + fVar66 * fVar93;
      pfVar20[7] = fVar34 + fVar102;
      param_4[8] = fVar56 * fVar72 - fVar43 * fVar133;
      param_4[9] = fVar132 + fVar32;
      param_4[10] = fVar56 * fVar45 - fVar43 * fVar120;
      param_4[0xb] = fVar118 + fVar107;
      pfVar22[8] = fVar58 * fVar76 - fVar105 * fVar137;
      pfVar22[9] = fVar136 + fVar41;
      pfVar22[10] = fVar58 * fVar46 - fVar105 * fVar124;
      pfVar22[0xb] = fVar122 + fVar111;
      pfVar19[8] = fVar62 * fVar80 - fVar109 * fVar142;
      pfVar19[9] = fVar140 + fVar65;
      pfVar19[10] = fVar62 * fVar48 - fVar109 * fVar127;
      pfVar19[0xb] = fVar126 + fVar114;
      pfVar20[8] = fVar66 * fVar87 - fVar112 * fVar147;
      pfVar20[9] = fVar146 + fVar85;
      pfVar20[10] = fVar66 * fVar50 - fVar112 * fVar129;
      pfVar20[0xb] = fVar128 + fVar117;
      iVar21 = iVar21 + 4;
      param_4[0xc] = fVar56 * fVar91 - fVar43 * fVar33;
      param_4[0xd] = fVar106 + fVar82;
      param_4[0xe] = fVar56 * fVar38 - fVar43 * fVar37;
      param_4[0xf] = fVar31 + fVar29;
      param_4 = param_4 + 0x40;
      pfVar22[0xc] = fVar58 * fVar95 - fVar105 * fVar42;
      pfVar22[0xd] = fVar110 + fVar84;
      pfVar22[0xe] = fVar58 * fVar63 - fVar105 * fVar61;
      pfVar22[0xf] = fVar36 + fVar35;
      pfVar22 = pfVar22 + 0x40;
      pfVar19[0xc] = fVar62 * fVar52 - fVar109 * fVar77;
      pfVar19[0xd] = fVar113 + fVar86;
      pfVar19[0xe] = fVar62 * fVar81 - fVar109 * fVar79;
      pfVar19[0xf] = fVar40 + fVar27;
      pfVar19 = pfVar19 + 0x40;
      pfVar20[0xc] = fVar66 * fVar53 - fVar112 * fVar89;
      pfVar20[0xd] = fVar116 + fVar88;
      pfVar20[0xe] = fVar66 * fVar115 - fVar112 * fVar93;
      pfVar20[0xf] = fVar44 + fVar59;
      pfVar20 = pfVar20 + 0x40;
      uVar17 = uVar17 - 1;
      fVar29 = fVar67;
      fVar30 = fVar68;
      fVar31 = fVar69;
      fVar35 = fVar71;
      fVar67 = fVar54;
      fVar68 = fVar57;
      fVar69 = fVar60;
      fVar71 = fVar64;
      fVar36 = fVar130;
      fVar40 = fVar134;
      fVar44 = fVar138;
      fVar108 = fVar143;
      local_198 = fVar131;
      fStack_194 = fVar135;
      fStack_190 = fVar139;
      fStack_18c = fVar144;
    } while (uVar17 != 0);
  }
  return;
}



// FUNCTION 1431ee290 FUN_1431ee290 body=704 status=ok
// SIG undefined FUN_1431ee290(void)

void FUN_1431ee290(float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float *pfVar40;
  longlong lVar41;
  float *pfVar42;
  float *pfVar43;
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar41 = (longlong)param_3;
  pfVar43 = param_1 + (longlong)param_2 + -0x10;
  lVar2 = lVar41 * 0x10;
  fVar5 = *(float *)(&DAT_145ad2410 + lVar2);
  fVar6 = *(float *)(&UNK_145ad2414 + lVar2);
  fVar7 = *(float *)(&UNK_145ad2418 + lVar2);
  fVar8 = *(float *)(&UNK_145ad241c + lVar2);
  lVar2 = lVar41 * 0x10;
  lVar3 = lVar41 * 0x10;
  lVar4 = lVar41 * 0x10;
  lVar41 = lVar41 * 0x10;
  if (param_1 < pfVar43) {
    pfVar42 = pfVar43 + 4;
    pfVar40 = param_1 + 8;
    fVar45 = *(float *)(&DAT_145ad24a0 + lVar2) * fVar5 - *(float *)(&DAT_145ad25c0 + lVar4);
    fVar34 = *(float *)(&UNK_145ad24a4 + lVar2) * fVar6 - *(float *)(&UNK_145ad25c4 + lVar4);
    fVar35 = *(float *)(&UNK_145ad24a8 + lVar2) * fVar7 - *(float *)(&UNK_145ad25c8 + lVar4);
    fVar36 = *(float *)(&UNK_145ad24ac + lVar2) * fVar8 - *(float *)(&UNK_145ad25cc + lVar4);
    fVar50 = *(float *)(&DAT_145ad26e0 + lVar3) * fVar5 - *(float *)(&DAT_145ad2800 + lVar41);
    fVar37 = *(float *)(&UNK_145ad26e4 + lVar3) * fVar6 - *(float *)(&UNK_145ad2804 + lVar41);
    fVar38 = *(float *)(&UNK_145ad26e8 + lVar3) * fVar7 - *(float *)(&UNK_145ad2808 + lVar41);
    fVar39 = *(float *)(&UNK_145ad26ec + lVar3) * fVar8 - *(float *)(&UNK_145ad280c + lVar41);
    local_f8 = *(float *)(&DAT_145ad24a0 + lVar2);
    fStack_f4 = *(float *)(&UNK_145ad24a4 + lVar2);
    fStack_f0 = *(float *)(&UNK_145ad24a8 + lVar2);
    fStack_ec = *(float *)(&UNK_145ad24ac + lVar2);
    local_e8 = *(float *)(&DAT_145ad26e0 + lVar3);
    fStack_e4 = *(float *)(&UNK_145ad26e4 + lVar3);
    fStack_e0 = *(float *)(&UNK_145ad26e8 + lVar3);
    fStack_dc = *(float *)(&UNK_145ad26ec + lVar3);
    do {
      fVar53 = fVar39;
      fVar52 = fVar38;
      fVar51 = fVar37;
      fVar49 = fVar50;
      fVar48 = fVar36;
      fVar47 = fVar35;
      fVar46 = fVar34;
      fVar44 = fVar45;
      fVar34 = pfVar40[4];
      fVar35 = pfVar40[5];
      fVar36 = pfVar40[6];
      fVar37 = pfVar40[-4];
      fVar38 = pfVar40[-3];
      fVar39 = pfVar40[-2];
      fVar9 = pfVar40[-1];
      fVar10 = pfVar42[4];
      fVar11 = pfVar42[5];
      fVar12 = pfVar42[6];
      fVar13 = pfVar42[7];
      fVar14 = pfVar40[-8];
      fVar15 = pfVar40[-7];
      fVar16 = pfVar40[-6];
      fVar17 = pfVar40[-5];
      fVar18 = *pfVar40;
      fVar19 = pfVar40[1];
      fVar20 = pfVar40[2];
      fVar21 = pfVar40[3];
      fVar22 = pfVar42[8];
      fVar23 = pfVar42[9];
      fVar24 = pfVar42[10];
      fVar25 = pfVar42[0xb];
      fVar26 = *pfVar42;
      fVar27 = pfVar42[1];
      fVar28 = pfVar42[2];
      fVar29 = pfVar42[3];
      fVar30 = pfVar42[-4];
      fVar31 = pfVar42[-3];
      fVar32 = pfVar42[-2];
      fVar33 = pfVar42[-1];
      fVar45 = fVar44 * fVar5 - local_f8;
      fVar50 = fVar49 * fVar5 - local_e8;
      pfVar40[-8] = fVar24 * fVar46 - fVar22 * fVar51;
      pfVar40[-7] = fVar12 * fVar47 - fVar10 * fVar52;
      pfVar40[-6] = fVar28 * fVar48 - fVar26 * fVar53;
      pfVar40[-5] = fVar32 * fVar45 - fVar30 * fVar50;
      pfVar40[-4] = fVar15 * fVar51 + fVar17 * fVar46;
      pfVar40[-3] = fVar38 * fVar52 + fVar9 * fVar47;
      pfVar40[-2] = fVar19 * fVar53 + fVar21 * fVar48;
      pfVar40[-1] = fVar35 * fVar50 + pfVar40[7] * fVar45;
      *pfVar40 = fVar22 * fVar46 + fVar24 * fVar51;
      pfVar40[1] = fVar10 * fVar47 + fVar12 * fVar52;
      pfVar40[2] = fVar26 * fVar48 + fVar28 * fVar53;
      pfVar40[3] = fVar30 * fVar45 + fVar32 * fVar50;
      pfVar40[4] = fVar17 * fVar51 - fVar15 * fVar46;
      pfVar40[5] = fVar9 * fVar52 - fVar38 * fVar47;
      pfVar40[6] = fVar21 * fVar53 - fVar19 * fVar48;
      pfVar40[7] = pfVar40[7] * fVar50 - fVar35 * fVar45;
      *pfVar43 = fVar36 * fVar53 - fVar34 * fVar48;
      pfVar43[1] = fVar20 * fVar52 - fVar18 * fVar47;
      pfVar43[2] = fVar39 * fVar51 - fVar37 * fVar46;
      pfVar43[3] = fVar16 * fVar49 - fVar14 * fVar44;
      pfVar43 = pfVar43 + -0x10;
      *pfVar42 = fVar31 * fVar48 + fVar33 * fVar53;
      pfVar42[1] = fVar27 * fVar47 + fVar29 * fVar52;
      pfVar42[2] = fVar11 * fVar46 + fVar13 * fVar51;
      pfVar42[3] = fVar23 * fVar44 + fVar25 * fVar49;
      pfVar42[4] = fVar34 * fVar53 + fVar36 * fVar48;
      pfVar42[5] = fVar18 * fVar52 + fVar20 * fVar47;
      pfVar42[6] = fVar37 * fVar51 + fVar39 * fVar46;
      pfVar42[7] = fVar14 * fVar49 + fVar16 * fVar44;
      pfVar42[8] = fVar33 * fVar48 - fVar31 * fVar53;
      pfVar42[9] = fVar29 * fVar47 - fVar27 * fVar52;
      pfVar42[10] = fVar13 * fVar46 - fVar11 * fVar51;
      pfVar42[0xb] = fVar25 * fVar44 - fVar23 * fVar49;
      pfVar1 = pfVar40 + 8;
      pfVar42 = pfVar42 + -0x10;
      pfVar40 = pfVar40 + 0x10;
      fVar34 = fVar46 * fVar6 - fStack_f4;
      fVar35 = fVar47 * fVar7 - fStack_f0;
      fVar36 = fVar48 * fVar8 - fStack_ec;
      fVar37 = fVar51 * fVar6 - fStack_e4;
      fVar38 = fVar52 * fVar7 - fStack_e0;
      fVar39 = fVar53 * fVar8 - fStack_dc;
      local_f8 = fVar44;
      fStack_f4 = fVar46;
      fStack_f0 = fVar47;
      fStack_ec = fVar48;
      local_e8 = fVar49;
      fStack_e4 = fVar51;
      fStack_e0 = fVar52;
      fStack_dc = fVar53;
    } while (pfVar1 < pfVar43);
  }
  return;
}



// FUNCTION 1431ee550 FUN_1431ee550 body=839 status=ok
// SIG undefined FUN_1431ee550(void)

void FUN_1431ee550(longlong param_1,int param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  uVar20 = 0;
  lVar26 = (longlong)param_3;
  lVar17 = lVar26 + 1;
  local_108 = *(undefined8 *)(&DAT_145ad2910 + lVar26 * 0x10);
  uStack_100 = *(undefined8 *)(&UNK_145ad2918 + lVar26 * 0x10);
  lVar5 = lVar17 * 0x10;
  fVar8 = *(float *)(&DAT_145ad2400 + lVar5);
  fVar9 = *(float *)(&UNK_145ad2404 + lVar5);
  fVar10 = *(float *)(&UNK_145ad2408 + lVar5);
  fVar11 = *(float *)(&UNK_145ad240c + lVar5);
  lVar5 = lVar17 * 0x10;
  lVar6 = lVar17 * 0x10;
  lVar7 = lVar17 * 0x10;
  lVar17 = lVar17 * 0x10;
  lVar21 = lVar26 * 0x10;
  fVar12 = *(float *)(&DAT_145ad23f0 + lVar21);
  fVar13 = *(float *)(&UNK_145ad23f4 + lVar21);
  fVar14 = *(float *)(&UNK_145ad23f8 + lVar21);
  fVar15 = *(float *)(&UNK_145ad23fc + lVar21);
  local_128 = *(undefined8 *)(&DAT_145ad2980 + lVar26 * 0x10);
  uStack_120 = *(undefined8 *)(&UNK_145ad2988 + lVar26 * 0x10);
  iVar16 = (int)((param_2 >> 1) + (param_2 >> 0x1f & 7U)) >> 3;
  bVar22 = (char)param_3 - 1;
  local_f8 = *(undefined8 *)(&DAT_145ad29f0 + lVar26 * 0x10);
  uStack_f0 = *(undefined8 *)(&UNK_145ad29f8 + lVar26 * 0x10);
  local_118 = *(undefined8 *)(&DAT_145ad2a60 + lVar26 * 0x10);
  uStack_110 = *(undefined8 *)(&UNK_145ad2a68 + lVar26 * 0x10);
  iVar25 = iVar16 + -1;
  lVar21 = (longlong)iVar25;
  uVar24 = uVar20;
  fVar43 = *(float *)(&DAT_145ad2920 + lVar5);
  fVar44 = *(float *)(&UNK_145ad2924 + lVar5);
  fVar45 = *(float *)(&UNK_145ad2928 + lVar5);
  fVar46 = *(float *)(&UNK_145ad292c + lVar5);
  fVar39 = *(float *)(&DAT_145ad2a00 + lVar7);
  fVar40 = *(float *)(&UNK_145ad2a04 + lVar7);
  fVar41 = *(float *)(&UNK_145ad2a08 + lVar7);
  fVar42 = *(float *)(&UNK_145ad2a0c + lVar7);
  fVar32 = *(float *)(&DAT_145ad2990 + lVar6);
  fVar34 = *(float *)(&UNK_145ad2994 + lVar6);
  fVar36 = *(float *)(&UNK_145ad2998 + lVar6);
  fVar38 = *(float *)(&UNK_145ad299c + lVar6);
  fVar47 = *(float *)(&DAT_145ad2a70 + lVar17);
  fVar49 = *(float *)(&UNK_145ad2a74 + lVar17);
  fVar51 = *(float *)(&UNK_145ad2a78 + lVar17);
  fVar53 = *(float *)(&UNK_145ad2a7c + lVar17);
  do {
    fVar37 = fVar42;
    fVar35 = fVar41;
    fVar33 = fVar40;
    fVar31 = fVar39;
    fVar30 = fVar46;
    fVar29 = fVar45;
    fVar28 = fVar44;
    fVar27 = fVar43;
    uVar18 = (ulonglong)((ushort)(&DAT_145ad1fc0)[lVar21] >> (bVar22 & 0x3f));
    pfVar1 = (float *)(param_1 + uVar18 * 0x10);
    fVar43 = fVar8 * fVar27 - fVar32;
    fVar44 = fVar9 * fVar28 - fVar34;
    fVar45 = fVar10 * fVar29 - fVar36;
    fVar46 = fVar11 * fVar30 - fVar38;
    fVar39 = fVar31 * fVar8 - fVar47;
    fVar40 = fVar33 * fVar9 - fVar49;
    fVar41 = fVar35 * fVar10 - fVar51;
    fVar42 = fVar37 * fVar11 - fVar53;
    uVar19 = (ulonglong)((ushort)(&DAT_145ad1fc0)[uVar20] >> (bVar22 & 0x3f));
    iVar23 = (int)uVar24;
    pfVar2 = (float *)(param_1 + (uVar18 + 1) * 0x10);
    pfVar3 = (float *)(param_1 + uVar19 * 0x10);
    fVar32 = *pfVar3 + pfVar1[3];
    fVar34 = pfVar3[2] + pfVar1[1];
    fVar36 = pfVar3[1] + pfVar1[2];
    fVar38 = pfVar3[3] + *pfVar1;
    pfVar4 = (float *)(param_1 + (uVar19 + 1) * 0x10);
    fVar59 = *pfVar4 - pfVar2[3];
    fVar62 = pfVar4[2] - pfVar2[1];
    fVar64 = pfVar4[1] - pfVar2[2];
    fVar66 = pfVar4[3] - *pfVar2;
    fVar71 = (*pfVar4 + pfVar2[3]) * 0.5;
    fVar72 = (pfVar4[2] + pfVar2[1]) * 0.5;
    fVar73 = (pfVar4[1] + pfVar2[2]) * 0.5;
    fVar74 = (pfVar4[3] + *pfVar2) * 0.5;
    fVar67 = (pfVar1[3] - *pfVar3) * 0.5;
    fVar68 = (pfVar1[1] - pfVar3[2]) * 0.5;
    fVar69 = (pfVar1[2] - pfVar3[1]) * 0.5;
    fVar70 = (*pfVar1 - pfVar3[3]) * 0.5;
    fVar47 = (fVar59 * fVar43 + fVar32 * fVar39) * 0.5;
    fVar49 = (fVar62 * fVar44 + fVar34 * fVar40) * 0.5;
    fVar51 = (fVar64 * fVar45 + fVar36 * fVar41) * 0.5;
    fVar53 = (fVar66 * fVar46 + fVar38 * fVar42) * 0.5;
    fVar60 = (fVar59 * fVar39 - fVar32 * fVar43) * 0.5;
    fVar34 = (fVar62 * fVar40 - fVar34 * fVar44) * 0.5;
    fVar65 = (fVar64 * fVar41 - fVar36 * fVar45) * 0.5;
    fVar38 = (fVar66 * fVar42 - fVar38 * fVar46) * 0.5;
    fVar55 = (float)local_108 * fVar12 - (float)local_128;
    fVar56 = local_108._4_4_ * fVar13 - local_128._4_4_;
    fVar57 = (float)uStack_100 * fVar14 - (float)uStack_120;
    fVar58 = uStack_100._4_4_ * fVar15 - uStack_120._4_4_;
    local_128 = local_108;
    uStack_120 = uStack_100;
    fVar59 = fVar47 + fVar71;
    fVar62 = fVar49 + fVar72;
    fVar64 = fVar51 + fVar73;
    fVar66 = fVar53 + fVar74;
    fVar71 = fVar71 - fVar47;
    fVar72 = fVar72 - fVar49;
    fVar73 = fVar73 - fVar51;
    fVar74 = fVar74 - fVar53;
    fVar32 = -(fVar60 + fVar67);
    fVar36 = -(fVar34 + fVar68);
    fVar47 = -(fVar65 + fVar69);
    fVar51 = -(fVar38 + fVar70);
    local_108 = CONCAT44(fVar56,fVar55);
    uStack_100 = CONCAT44(fVar58,fVar57);
    fVar48 = (float)local_f8 * fVar12 - (float)local_118;
    fVar50 = local_f8._4_4_ * fVar13 - local_118._4_4_;
    fVar52 = (float)uStack_f0 * fVar14 - (float)uStack_110;
    fVar54 = uStack_f0._4_4_ * fVar15 - uStack_110._4_4_;
    local_118 = local_f8;
    uStack_110 = uStack_f0;
    local_f8 = CONCAT44(fVar50,fVar48);
    uStack_f0 = CONCAT44(fVar54,fVar52);
    pfVar1 = (float *)(param_4 + (longlong)iVar23 * 0x10);
    *pfVar1 = (fVar48 * fVar32 + fVar55 * fVar59) * 5.9604645e-08;
    pfVar1[1] = (fVar50 * fVar36 + fVar56 * fVar62) * 5.9604645e-08;
    pfVar1[2] = (fVar52 * fVar47 + fVar57 * fVar64) * 5.9604645e-08;
    pfVar1[3] = (fVar54 * fVar51 + fVar58 * fVar66) * 5.9604645e-08;
    lVar17 = (longlong)iVar25;
    uVar24 = (ulonglong)(iVar23 + 1);
    uVar20 = uVar20 + 1;
    lVar21 = lVar21 + -1;
    iVar25 = iVar25 + -1;
    fVar61 = -(fVar60 - fVar67);
    fVar63 = -(fVar34 - fVar68);
    fVar69 = -(fVar65 - fVar69);
    fVar70 = -(fVar38 - fVar70);
    fVar34 = (fVar48 - fVar55) * 0.70710677;
    fVar38 = (fVar50 - fVar56) * 0.70710677;
    fVar49 = (fVar52 - fVar57) * 0.70710677;
    fVar53 = (fVar54 - fVar58) * 0.70710677;
    fVar60 = (fVar55 + fVar48) * 0.70710677;
    fVar65 = (fVar56 + fVar50) * 0.70710677;
    fVar67 = (fVar57 + fVar52) * 0.70710677;
    fVar68 = (fVar58 + fVar54) * 0.70710677;
    pfVar1 = (float *)(param_4 + ((longlong)iVar23 + (longlong)iVar16) * 0x10);
    *pfVar1 = (fVar55 * fVar32 - fVar48 * fVar59) * 5.9604645e-08;
    pfVar1[1] = (fVar56 * fVar36 - fVar50 * fVar62) * 5.9604645e-08;
    pfVar1[2] = (fVar57 * fVar47 - fVar52 * fVar64) * 5.9604645e-08;
    pfVar1[3] = (fVar58 * fVar51 - fVar54 * fVar66) * 5.9604645e-08;
    pfVar1 = (float *)(param_4 + lVar17 * 0x10);
    *pfVar1 = (fVar68 * fVar70 + fVar53 * fVar74) * 5.9604645e-08;
    pfVar1[1] = (fVar67 * fVar69 + fVar49 * fVar73) * 5.9604645e-08;
    pfVar1[2] = (fVar65 * fVar63 + fVar38 * fVar72) * 5.9604645e-08;
    pfVar1[3] = (fVar60 * fVar61 + fVar34 * fVar71) * 5.9604645e-08;
    pfVar1 = (float *)(param_4 + (lVar17 + iVar16) * 0x10);
    *pfVar1 = (fVar53 * fVar70 - fVar68 * fVar74) * 5.9604645e-08;
    pfVar1[1] = (fVar49 * fVar69 - fVar67 * fVar73) * 5.9604645e-08;
    pfVar1[2] = (fVar38 * fVar63 - fVar65 * fVar72) * 5.9604645e-08;
    pfVar1[3] = (fVar34 * fVar61 - fVar60 * fVar71) * 5.9604645e-08;
    fVar32 = fVar27;
    fVar34 = fVar28;
    fVar36 = fVar29;
    fVar38 = fVar30;
    fVar47 = fVar31;
    fVar49 = fVar33;
    fVar51 = fVar35;
    fVar53 = fVar37;
  } while ((longlong)uVar20 < lVar21);
  return;
}



// FUNCTION 1431ee8a0 mdct_unroll_lap body=1403 status=ok
// SIG undefined mdct_unroll_lap(void)

void mdct_unroll_lap(int param_1,int param_2,int param_3,int param_4,longlong param_5,
                    longlong param_6,longlong param_7,longlong param_8,float *param_9,
                    undefined8 param_10,int param_11,int param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  int iVar33;
  
  iVar19 = param_1 >> 2;
  iVar20 = param_2 >> 2;
  iVar15 = iVar19;
  if ((param_4 != 0) && (param_3 != 0)) {
    iVar15 = iVar20;
  }
  iVar16 = iVar20;
  if (param_3 == 0) {
    iVar16 = iVar19;
  }
  uVar27 = param_6 + (longlong)iVar16 * 4;
  if ((param_4 == 0) || (param_3 == 0)) {
    lVar18 = param_7 + ((longlong)param_1 >> 1) * 4;
  }
  else {
    lVar18 = param_8 + ((longlong)param_2 >> 1) * 4;
  }
  if ((param_4 == 0) || (param_3 == 0)) {
    param_8 = param_7;
  }
  uVar26 = 0;
  iVar25 = 0;
  iVar16 = iVar25;
  if ((param_3 != 0) && (param_4 == 0)) {
    iVar16 = iVar20 - iVar19;
  }
  if ((param_3 == 0) || (iVar33 = iVar20, param_4 == 0)) {
    iVar33 = iVar19;
  }
  if ((param_3 == 0) && (param_4 != 0)) {
    iVar25 = iVar20 - iVar19;
  }
  if (iVar16 != 0) {
    iVar19 = iVar16;
    if (param_12 < iVar16) {
      iVar19 = param_12;
    }
    if (param_11 < iVar16) {
      iVar16 = param_11;
    }
    uVar21 = uVar27 + (longlong)iVar19 * -4;
    param_11 = param_11 - iVar16;
    param_12 = param_12 - iVar19;
    uVar27 = uVar27 + (longlong)iVar16 * -4;
    if (uVar21 < uVar27) {
      if ((((uint)uVar21 | (uint)uVar27 | (uint)param_9) & 0xf) == 0) {
        do {
          fVar1 = *(float *)(uVar27 - 0x10);
          fVar2 = *(float *)(uVar27 - 0xc);
          fVar3 = *(float *)(uVar27 - 8);
          pfVar30 = (float *)(uVar27 - 4);
          uVar27 = uVar27 - 0x10;
          *param_9 = *pfVar30;
          param_9[1] = fVar3;
          param_9[2] = fVar2;
          param_9[3] = fVar1;
          param_9 = param_9 + 4;
        } while (uVar21 < uVar27);
      }
      else {
        do {
          pfVar30 = (float *)(uVar27 - 4);
          uVar27 = uVar27 - 4;
          *param_9 = *pfVar30;
          param_9 = param_9 + 1;
        } while (uVar21 < uVar27);
      }
    }
  }
  iVar19 = iVar33;
  if (param_12 < iVar33) {
    iVar19 = param_12;
  }
  iVar20 = iVar33;
  if (param_11 < iVar33) {
    iVar20 = param_11;
  }
  pfVar24 = (float *)(uVar27 + (longlong)iVar19 * -4);
  param_11 = param_11 - iVar20;
  lVar17 = (longlong)iVar20;
  param_12 = param_12 - iVar19;
  pfVar28 = (float *)(uVar27 + lVar17 * -4);
  pfVar30 = (float *)(param_5 + (longlong)iVar15 * 4 + lVar17 * -4);
  pfVar22 = (float *)(lVar18 + lVar17 * -4);
  pfVar32 = (float *)(param_8 + lVar17 * 4);
  if (pfVar24 < pfVar28) {
    pfVar23 = pfVar22;
    pfVar29 = pfVar28;
    pfVar31 = pfVar30;
    if ((((uint)pfVar24 | (uint)pfVar28 | (uint)param_9) & 0xf) == 0) {
      do {
        fVar1 = *pfVar32;
        fVar2 = pfVar32[1];
        fVar3 = pfVar32[2];
        fVar4 = pfVar32[3];
        pfVar22 = pfVar23 + -4;
        pfVar30 = pfVar31 + -4;
        pfVar28 = pfVar29 + -4;
        pfVar32 = pfVar32 + 4;
        fVar5 = *pfVar22;
        fVar6 = pfVar23[-3];
        fVar7 = pfVar23[-2];
        fVar8 = *pfVar30;
        fVar9 = pfVar31[-3];
        fVar10 = pfVar31[-2];
        fVar11 = *pfVar28;
        fVar12 = pfVar29[-3];
        fVar13 = pfVar29[-2];
        *param_9 = fVar1 * pfVar31[-1] + pfVar23[-1] * pfVar29[-1];
        param_9[1] = fVar2 * fVar10 + fVar7 * fVar13;
        param_9[2] = fVar3 * fVar9 + fVar6 * fVar12;
        param_9[3] = fVar4 * fVar8 + fVar5 * fVar11;
        param_9 = param_9 + 4;
        pfVar23 = pfVar22;
        pfVar29 = pfVar28;
        pfVar31 = pfVar30;
      } while (pfVar24 < pfVar28);
    }
    else {
      do {
        fVar1 = *pfVar32;
        pfVar22 = pfVar22 + -1;
        pfVar23 = pfVar30 + -1;
        pfVar30 = pfVar30 + -1;
        pfVar28 = pfVar28 + -1;
        pfVar32 = pfVar32 + 1;
        *param_9 = fVar1 * *pfVar23 + *pfVar22 * *pfVar28;
        param_9 = param_9 + 1;
      } while (pfVar24 < pfVar28);
    }
  }
  iVar15 = iVar33;
  if (param_12 < iVar33) {
    iVar15 = param_12;
  }
  if (param_11 < iVar33) {
    iVar33 = param_11;
  }
  pfVar24 = pfVar28 + iVar15;
  lVar18 = (longlong)iVar33;
  pfVar28 = pfVar28 + lVar18;
  pfVar30 = pfVar30 + lVar18;
  pfVar22 = pfVar22 + -lVar18;
  pfVar32 = pfVar32 + lVar18;
  if ((((byte)pfVar24 | (byte)pfVar28 | (byte)param_9) & 0xf) == 0) {
    for (; pfVar28 < pfVar24; pfVar28 = pfVar28 + 4) {
      fVar1 = pfVar28[1];
      fVar2 = pfVar28[2];
      fVar3 = pfVar28[3];
      fVar4 = *pfVar30;
      fVar5 = pfVar30[1];
      fVar6 = pfVar30[2];
      fVar7 = pfVar30[3];
      fVar8 = *pfVar32;
      fVar9 = pfVar32[1];
      fVar10 = pfVar32[2];
      fVar11 = pfVar32[3];
      pfVar30 = pfVar30 + 4;
      pfVar32 = pfVar32 + 4;
      fVar12 = pfVar22[-4];
      fVar13 = pfVar22[-3];
      fVar14 = pfVar22[-2];
      *param_9 = pfVar22[-1] * *pfVar28 - fVar8 * fVar4;
      param_9[1] = fVar14 * fVar1 - fVar9 * fVar5;
      param_9[2] = fVar13 * fVar2 - fVar10 * fVar6;
      param_9[3] = fVar12 * fVar3 - fVar11 * fVar7;
      param_9 = param_9 + 4;
      pfVar22 = pfVar22 + -4;
    }
  }
  else {
    uVar27 = (ulonglong)((longlong)pfVar24 + (3 - (longlong)pfVar28)) >> 2;
    if (pfVar24 < pfVar28) {
      uVar27 = uVar26;
    }
    uVar21 = uVar26;
    if (3 < uVar27) {
      lVar18 = (uVar27 - 4 >> 2) + 1;
      uVar21 = lVar18 * 4;
      do {
        *param_9 = pfVar22[-1] * *pfVar28 - *pfVar30 * *pfVar32;
        param_9[1] = pfVar22[-2] * pfVar28[1] - pfVar32[1] * pfVar30[1];
        pfVar24 = pfVar22 + -3;
        pfVar22 = pfVar22 + -4;
        param_9[2] = *pfVar24 * pfVar28[2] - pfVar32[2] * pfVar30[2];
        pfVar24 = pfVar28 + 3;
        pfVar28 = pfVar28 + 4;
        pfVar23 = pfVar32 + 3;
        pfVar32 = pfVar32 + 4;
        pfVar29 = pfVar30 + 3;
        pfVar30 = pfVar30 + 4;
        param_9[3] = *pfVar24 * *pfVar22 - *pfVar23 * *pfVar29;
        param_9 = param_9 + 4;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (uVar21 < uVar27) {
      lVar18 = (longlong)pfVar28 - (longlong)pfVar30;
      do {
        pfVar28 = (float *)(lVar18 + (longlong)pfVar30);
        pfVar22 = pfVar22 + -1;
        fVar1 = *pfVar32;
        uVar21 = uVar21 + 1;
        fVar2 = *pfVar30;
        pfVar32 = pfVar32 + 1;
        pfVar30 = pfVar30 + 1;
        *param_9 = *pfVar28 * *pfVar22 - fVar1 * fVar2;
        param_9 = param_9 + 1;
      } while (uVar21 < uVar27);
    }
  }
  if (iVar25 != 0) {
    iVar19 = iVar25;
    if (param_12 - iVar15 < iVar25) {
      iVar19 = param_12 - iVar15;
    }
    if (param_11 - iVar33 < iVar25) {
      iVar25 = param_11 - iVar33;
    }
    pfVar28 = pfVar30 + iVar19;
    pfVar30 = pfVar30 + iVar25;
    if ((((byte)pfVar28 | (byte)pfVar30 | (byte)param_9) & 0xf) == 0) {
      for (; pfVar30 < pfVar28; pfVar30 = pfVar30 + 4) {
        fVar1 = pfVar30[1];
        fVar2 = pfVar30[2];
        fVar3 = pfVar30[3];
        *param_9 = -*pfVar30;
        param_9[1] = -fVar1;
        param_9[2] = -fVar2;
        param_9[3] = -fVar3;
        param_9 = param_9 + 4;
      }
    }
    else {
      uVar27 = (ulonglong)((longlong)pfVar28 + (3 - (longlong)pfVar30)) >> 2;
      if (pfVar28 < pfVar30) {
        uVar27 = uVar26;
      }
      if (uVar27 != 0) {
        if ((0xf < uVar27) &&
           ((pfVar30 + (uVar27 - 1) < param_9 || (param_9 + (uVar27 - 1) < pfVar30)))) {
          do {
            fVar1 = pfVar30[1];
            fVar2 = pfVar30[2];
            fVar3 = pfVar30[3];
            uVar26 = uVar26 + 0x10;
            *param_9 = *pfVar30 * -1.0;
            param_9[1] = fVar1 * -1.0;
            param_9[2] = fVar2 * -1.0;
            param_9[3] = fVar3 * -1.0;
            fVar1 = pfVar30[5];
            fVar2 = pfVar30[6];
            fVar3 = pfVar30[7];
            param_9[4] = pfVar30[4] * -1.0;
            param_9[5] = fVar1 * -1.0;
            param_9[6] = fVar2 * -1.0;
            param_9[7] = fVar3 * -1.0;
            fVar1 = pfVar30[9];
            fVar2 = pfVar30[10];
            fVar3 = pfVar30[0xb];
            param_9[8] = pfVar30[8] * -1.0;
            param_9[9] = fVar1 * -1.0;
            param_9[10] = fVar2 * -1.0;
            param_9[0xb] = fVar3 * -1.0;
            pfVar28 = pfVar30 + 0xc;
            fVar1 = pfVar30[0xd];
            fVar2 = pfVar30[0xe];
            fVar3 = pfVar30[0xf];
            pfVar30 = pfVar30 + 0x10;
            param_9[0xc] = *pfVar28 * -1.0;
            param_9[0xd] = fVar1 * -1.0;
            param_9[0xe] = fVar2 * -1.0;
            param_9[0xf] = fVar3 * -1.0;
            param_9 = param_9 + 0x10;
          } while (uVar26 < (uVar27 & 0xfffffffffffffff0));
        }
        if (uVar26 < uVar27) {
          if (3 < uVar27 - uVar26) {
            lVar18 = ((uVar27 - uVar26) - 4 >> 2) + 1;
            uVar26 = uVar26 + lVar18 * 4;
            do {
              *param_9 = -*pfVar30;
              param_9[1] = -pfVar30[1];
              param_9[2] = -pfVar30[2];
              pfVar28 = pfVar30 + 3;
              pfVar30 = pfVar30 + 4;
              param_9[3] = -*pfVar28;
              param_9 = param_9 + 4;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (uVar26 < uVar27) {
            pfVar28 = param_9;
            do {
              uVar26 = uVar26 + 1;
              *pfVar28 = -*(float *)(((longlong)pfVar30 - (longlong)param_9) + (longlong)pfVar28);
              pfVar28 = pfVar28 + 1;
            } while (uVar26 < uVar27);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1431eee30 vorbis_info_init body=89 status=ok
// SIG undefined vorbis_info_init(void)

undefined8 vorbis_info_init(int *param_1,byte param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar2 = 1 << (param_2 & 0x1f);
  iVar1 = 1 << (param_3 & 0x1f);
  *param_1 = iVar2;
  param_1[1] = iVar1;
  if (((0x3f < iVar2) && (iVar2 <= iVar1)) && (iVar1 < 0x2001)) {
    return 0;
  }
  return 0xffffff7b;
}



// FUNCTION 1431eee90 vorbis_unpack_books body=1318 status=ok
// SIG undefined vorbis_unpack_books(void)

undefined8 vorbis_unpack_books(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined *local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  iVar15 = (char)*(byte *)(param_3 + 1) + 8;
  iVar11 = (char)(*(short *)*param_3 >> (*(byte *)(param_3 + 1) & 0x1f)) + 1;
  *(byte *)(param_3 + 1) = (byte)iVar15 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar15 >> 3);
  *param_3 = ((longlong)iVar15 >> 3) + *param_3;
  *(int *)(param_1 + 0x90) = iVar11;
  uVar12 = iVar11 * 0x20;
  pvVar7 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar12);
  *(void **)(param_1 + 0xb8) = pvVar7;
  if (pvVar7 == (void *)0x0) {
    return 0xffffff7b;
  }
  _guard_xfg_dispatch_icall_nop(pvVar7,0,(longlong)(int)uVar12);
  lVar1 = param_1 + 0x10;
  iVar11 = 0;
  pvVar7 = (void *)0x0;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x90) * 0x48;
  iVar15 = *(int *)(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0x90)) {
    iVar15 = iVar11;
    do {
      bVar2 = *(byte *)(param_3 + 1);
      uVar14 = (ulonglong)DAT_1467c22d8;
      iVar13 = (char)bVar2 + 10;
      lVar6 = *(longlong *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar13 & 7;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar13 >> 3);
      *param_3 = ((longlong)iVar13 >> 3) + *param_3;
      local_38 = (&PTR_DAT_1467c2440)[lVar6 >> (bVar2 & 0x3f) & 0xffffffffU & uVar14];
      local_30 = 0;
      local_2c = 0x36a;
      uVar8 = vorbis_book_unpack(&local_38,(longlong)iVar15 * 0x20 + *(longlong *)(param_1 + 0xb8),
                                 lVar1,(param_2 == 2) + '\x01');
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x90));
    iVar15 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - iVar15;
  pvVar9 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)*(uint *)(param_1 + 100));
  *(void **)(param_1 + 0x50) = pvVar9;
  *(void **)(param_1 + 0x58) = pvVar9;
  if (pvVar9 == (void *)0x0) {
    uVar8 = 0xffffff75;
  }
  else {
    bVar2 = *(byte *)(param_3 + 1);
    iVar15 = (char)bVar2 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar15 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar15 >> 3);
    iVar13 = (uVar4 >> (bVar2 & 0x1f) & 0x3f) + 1;
    *param_3 = ((longlong)iVar15 >> 3) + *param_3;
    *(int *)(param_1 + 0x88) = iVar13;
    uVar12 = iVar13 * 0x40;
    pvVar9 = pvVar7;
    if ((iVar13 != 0) &&
       (uVar10 = *(int *)(param_1 + 0x60) + uVar12, uVar10 <= *(uint *)(param_1 + 100))) {
      pvVar9 = *(void **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x60) = uVar10;
      *(ulonglong *)(param_1 + 0x58) = (ulonglong)uVar12 + (longlong)pvVar9;
      if (pvVar9 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(pvVar9,0,(ulonglong)uVar12);
      }
    }
    *(void **)(param_1 + 0xa8) = pvVar9;
    iVar15 = iVar11;
    if (0 < *(int *)(param_1 + 0x88)) {
      do {
        iVar13 = floor1_info_unpack((longlong)iVar15 * 0x40 + *(longlong *)(param_1 + 0xa8),
                                    param_1 + 0x78,param_3,lVar1);
        if (iVar13 != 0) {
          return 0xffffff7b;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_1 + 0x88));
    }
    bVar2 = *(byte *)(param_3 + 1);
    iVar15 = (char)bVar2 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar15 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar15 >> 3);
    iVar13 = (uVar4 >> (bVar2 & 0x1f) & 0x3f) + 1;
    *param_3 = ((longlong)iVar15 >> 3) + *param_3;
    *(int *)(param_1 + 0x8c) = iVar13;
    pvVar9 = pvVar7;
    if ((iVar13 * 5 != 0) &&
       (uVar12 = *(int *)(param_1 + 0x60) + iVar13 * 0x28, uVar12 <= *(uint *)(param_1 + 100))) {
      pvVar9 = *(void **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x60) = uVar12;
      *(ulonglong *)(param_1 + 0x58) = (ulonglong)(uint)(iVar13 * 0x28) + (longlong)pvVar9;
      iVar13 = *(int *)(param_1 + 0x8c);
    }
    *(void **)(param_1 + 0xb0) = pvVar9;
    iVar15 = iVar11;
    if (0 < iVar13) {
      do {
        iVar13 = res_unpack(*(longlong *)(param_1 + 0xb0) + (longlong)iVar15 * 0x28,param_1 + 0x78,
                            param_3,lVar1);
        if (iVar13 != 0) {
          return 0xffffff7b;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_1 + 0x8c));
    }
    bVar2 = *(byte *)(param_3 + 1);
    iVar15 = (char)bVar2 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar15 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar15 >> 3);
    iVar13 = (uVar4 >> (bVar2 & 0x1f) & 0x3f) + 1;
    *param_3 = ((longlong)iVar15 >> 3) + *param_3;
    *(int *)(param_1 + 0x84) = iVar13;
    pvVar9 = pvVar7;
    if ((iVar13 * 5 != 0) &&
       (uVar12 = *(int *)(param_1 + 0x60) + iVar13 * 0x28, uVar12 <= *(uint *)(param_1 + 100))) {
      pvVar9 = *(void **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x60) = uVar12;
      *(ulonglong *)(param_1 + 0x58) = (ulonglong)(uint)(iVar13 * 0x28) + (longlong)pvVar9;
      iVar13 = *(int *)(param_1 + 0x84);
    }
    *(void **)(param_1 + 0xa0) = pvVar9;
    if (0 < iVar13) {
      do {
        iVar15 = mapping_info_unpack(*(longlong *)(param_1 + 0xa0) + (longlong)iVar11 * 0x28,
                                     param_1 + 0x78,param_2,param_3,lVar1);
        if (iVar15 != 0) {
          return 0xffffff7b;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x84));
    }
    bVar2 = *(byte *)(param_3 + 1);
    iVar15 = (char)bVar2 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar15 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar15 >> 3);
    iVar11 = (uVar4 >> (bVar2 & 0x1f) & 0x3f) + 1;
    *param_3 = ((longlong)iVar15 >> 3) + *param_3;
    *(int *)(param_1 + 0x80) = iVar11;
    pvVar9 = pvVar7;
    if (iVar11 != 0) {
      uVar12 = iVar11 * 2 + 3U & 0xfffffffc;
      uVar10 = *(int *)(param_1 + 0x60) + uVar12;
      if (uVar10 <= *(uint *)(param_1 + 100)) {
        pvVar9 = *(void **)(param_1 + 0x58);
        *(uint *)(param_1 + 0x60) = uVar10;
        *(ulonglong *)(param_1 + 0x58) = (ulonglong)uVar12 + (longlong)pvVar9;
        iVar11 = *(int *)(param_1 + 0x80);
      }
    }
    *(void **)(param_1 + 0x98) = pvVar9;
    pvVar9 = pvVar7;
    if (0 < iVar11) {
      do {
        bVar2 = *(byte *)(param_3 + 1);
        iVar15 = (char)bVar2 + 1;
        bVar3 = *(byte *)*param_3;
        *(byte *)(param_3 + 1) = (byte)iVar15 & 7;
        *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar15 >> 3);
        *param_3 = (longlong)((byte *)*param_3 + ((longlong)iVar15 >> 3));
        *(byte *)((longlong)pvVar9 + *(longlong *)(param_1 + 0x98)) = bVar3 >> (bVar2 & 0x1f) & 1;
        bVar2 = *(byte *)(param_3 + 1);
        iVar15 = (char)bVar2 + 8;
        sVar5 = *(short *)*param_3;
        *(byte *)(param_3 + 1) = (byte)iVar15 & 7;
        *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar15 >> 3);
        *param_3 = ((longlong)iVar15 >> 3) + *param_3;
        *(char *)((longlong)pvVar9 + *(longlong *)(param_1 + 0x98) + 1) =
             (char)(sVar5 >> (bVar2 & 0x1f));
        if (*(int *)(param_1 + 0x84) <=
            (int)(uint)*(byte *)((longlong)pvVar9 + *(longlong *)(param_1 + 0x98) + 1)) {
          return 0xffffff7b;
        }
        uVar12 = (int)pvVar7 + 1;
        pvVar7 = (void *)(ulonglong)uVar12;
        pvVar9 = (void *)((longlong)pvVar9 + 2);
      } while ((int)uVar12 < *(int *)(param_1 + 0x80));
    }
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 1431ef3c0 floor1_info_unpack body=1613 status=ok
// SIG undefined floor1_info_unpack(void)

undefined8
floor1_info_unpack(ulonglong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  sbyte sVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  ulonglong uVar12;
  ushort *puVar13;
  undefined1 uVar14;
  longlong lVar15;
  undefined1 uVar16;
  int iVar17;
  ulonglong uVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ushort uVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  
  uVar12 = 0;
  uVar27 = 0;
  iVar20 = -1;
  iVar21 = (char)*(byte *)(param_3 + 1) + 5;
  uVar24 = *(ushort *)*param_3 >> (*(byte *)(param_3 + 1) & 0x1f);
  *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
  uVar23 = uVar24 & 0x1f;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
  *param_3 = ((longlong)iVar21 >> 3) + *param_3;
  *(uint *)(param_1 + 6) = uVar23;
  uVar18 = uVar12;
  if ((uVar24 & 0x1f) != 0) {
    uVar9 = uVar23 + 3 & 0xfffffffc;
    uVar25 = *(int *)(param_4 + 0x50) + uVar9;
    if (uVar25 <= *(uint *)(param_4 + 0x54)) {
      uVar18 = *(ulonglong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar25;
      *(ulonglong *)(param_4 + 0x48) = uVar9 + uVar18;
      uVar23 = (uint)param_1[6];
    }
  }
  param_1[1] = uVar18;
  uVar18 = uVar12;
  if (0 < (int)uVar23) {
    do {
      bVar2 = *(byte *)(param_3 + 1);
      iVar21 = (char)bVar2 + 4;
      uVar24 = *(ushort *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
      iVar17 = (int)uVar18;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
      *param_3 = ((longlong)iVar21 >> 3) + *param_3;
      *(byte *)((longlong)iVar17 + param_1[1]) = (byte)(uVar24 >> (bVar2 & 0x1f)) & 0xf;
      iVar21 = (int)*(char *)((longlong)iVar17 + param_1[1]);
      if (iVar21 <= iVar20) {
        iVar21 = iVar20;
      }
      iVar20 = iVar21;
      uVar18 = (ulonglong)(iVar17 + 1U);
    } while ((int)(iVar17 + 1U) < (int)param_1[6]);
  }
  iVar21 = (iVar20 + 1) * 0xb;
  uVar18 = uVar12;
  if (iVar21 != 0) {
    uVar23 = iVar21 + 3U & 0xfffffffc;
    uVar9 = *(int *)(param_4 + 0x50) + uVar23;
    if (uVar9 <= *(uint *)(param_4 + 0x54)) {
      uVar18 = *(ulonglong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar9;
      *(ulonglong *)(param_4 + 0x48) = uVar23 + uVar18;
    }
  }
  *param_1 = uVar18;
  uVar18 = uVar12;
  if (0 < iVar20 + 1) {
    do {
      bVar2 = *(byte *)(param_3 + 1);
      iVar21 = (char)bVar2 + 3;
      uVar24 = *(ushort *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
      *param_3 = ((longlong)iVar21 >> 3) + *param_3;
      lVar15 = (longlong)(int)uVar18 * 0xb;
      *(byte *)(lVar15 + *param_1) = ((byte)(uVar24 >> (bVar2 & 0x1f)) & 7) + 1;
      bVar2 = *(byte *)(param_3 + 1);
      iVar21 = (char)bVar2 + 2;
      uVar24 = *(ushort *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
      *param_3 = ((longlong)iVar21 >> 3) + *param_3;
      *(byte *)(*param_1 + 1 + lVar15) = (byte)(uVar24 >> (bVar2 & 0x1f)) & 3;
      if (*(char *)(*param_1 + 1 + lVar15) == '\0') {
        *(undefined1 *)(*param_1 + 2 + lVar15) = 0;
        uVar22 = *param_1;
        iVar21 = *(int *)(param_2 + 0x18);
      }
      else {
        bVar2 = *(byte *)(param_3 + 1);
        iVar21 = (char)bVar2 + 8;
        sVar4 = *(short *)*param_3;
        *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
        *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
        *param_3 = ((longlong)iVar21 >> 3) + *param_3;
        *(char *)(*param_1 + 2 + lVar15) = (char)(sVar4 >> (bVar2 & 0x1f));
        uVar22 = *param_1;
        iVar21 = *(int *)(param_2 + 0x18);
        if (iVar21 <= (int)(uint)*(byte *)(uVar22 + 2 + lVar15)) goto LAB_1431ef90e;
      }
      if (iVar21 <= (int)(uint)*(byte *)(uVar22 + 2 + lVar15)) goto LAB_1431ef90e;
      iVar21 = 0;
      lVar26 = 0;
      if (0 < 1 << (*(byte *)(uVar22 + 1 + lVar15) & 0x1f)) {
        do {
          bVar2 = *(byte *)(param_3 + 1);
          iVar17 = (char)bVar2 + 8;
          sVar4 = *(short *)*param_3;
          *(byte *)(param_3 + 1) = (byte)iVar17 & 7;
          *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar17 >> 3);
          *param_3 = ((longlong)iVar17 >> 3) + *param_3;
          *(char *)(*param_1 + lVar26 + 3 + lVar15) = (char)(sVar4 >> (bVar2 & 0x1f)) + -1;
          bVar2 = *(byte *)(*param_1 + lVar26 + 3 + lVar15);
          if ((*(int *)(param_2 + 0x18) <= (int)(uint)bVar2) && (bVar2 != 0xff)) goto LAB_1431ef90e;
          iVar21 = iVar21 + 1;
          lVar26 = lVar26 + 1;
        } while (iVar21 < 1 << (*(byte *)(*param_1 + 1 + lVar15) & 0x1f));
      }
      uVar23 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar23;
    } while ((int)uVar23 < iVar20 + 1);
  }
  uVar18 = 0;
  bVar2 = *(byte *)(param_3 + 1);
  iVar21 = (char)bVar2 + 2;
  uVar24 = *(ushort *)*param_3;
  *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
  *param_3 = ((longlong)iVar21 >> 3) + *param_3;
  *(uint *)(param_1 + 7) = (uVar24 >> (bVar2 & 0x1f) & 3) + 1;
  bVar2 = *(byte *)(param_3 + 1);
  iVar21 = (char)bVar2 + 4;
  uVar24 = *(ushort *)*param_3;
  *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
  uVar23 = uVar24 >> (bVar2 & 0x1f) & 0xf;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
  *param_3 = ((longlong)iVar21 >> 3) + *param_3;
  if (0 < (int)(uint)param_1[6]) {
    uVar22 = (ulonglong)(uint)param_1[6];
    pcVar11 = (char *)param_1[1];
    do {
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      uVar27 = (int)uVar12 + (int)*(char *)((longlong)cVar3 * 0xb + *param_1);
      uVar12 = (ulonglong)uVar27;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  iVar21 = (uVar27 + 2) * 2;
  uVar12 = uVar18;
  if (iVar21 != 0) {
    uVar9 = iVar21 + 3U & 0xfffffffc;
    uVar25 = *(int *)(param_4 + 0x50) + uVar9;
    if (uVar25 <= *(uint *)(param_4 + 0x54)) {
      uVar12 = *(ulonglong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar25;
      *(ulonglong *)(param_4 + 0x48) = uVar9 + uVar12;
    }
  }
  param_1[2] = uVar12;
  uVar12 = uVar18;
  if (uVar27 + 2 != 0) {
    uVar9 = uVar27 + 5 & 0xfffffffc;
    uVar25 = *(int *)(param_4 + 0x50) + uVar9;
    if (uVar25 <= *(uint *)(param_4 + 0x54)) {
      uVar12 = *(ulonglong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar25;
      *(ulonglong *)(param_4 + 0x48) = uVar9 + uVar12;
    }
  }
  param_1[3] = uVar12;
  uVar12 = uVar18;
  if (uVar27 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar27 + 3;
    uVar25 = *(int *)(param_4 + 0x50) + (uVar9 & 0xfffffffc);
    if (uVar25 <= *(uint *)(param_4 + 0x54)) {
      uVar12 = *(ulonglong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar25;
      *(ulonglong *)(param_4 + 0x48) = (uVar9 & 0xfffffffc) + uVar12;
    }
  }
  param_1[5] = uVar12;
  uVar12 = uVar18;
  if (uVar27 != 0) {
    uVar27 = *(int *)(param_4 + 0x50) + (uVar9 & 0xfffffffc);
    if (uVar27 <= *(uint *)(param_4 + 0x54)) {
      uVar12 = *(ulonglong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar27;
      *(ulonglong *)(param_4 + 0x48) = (uVar9 & 0xfffffffc) + uVar12;
    }
  }
  uVar27 = 0;
  param_1[4] = uVar12;
  sVar8 = (sbyte)uVar23;
  uVar12 = uVar18;
  uVar22 = uVar18;
  if (0 < (int)param_1[6]) {
    do {
      uVar27 = (int)uVar12 +
               (int)*(char *)((longlong)*(char *)((longlong)(int)uVar22 + param_1[1]) * 0xb +
                             *param_1);
      if ((longlong)uVar18 < (longlong)(int)uVar27) {
        lVar15 = uVar18 * 2 + 4;
        do {
          uVar6 = (&DAT_1467c22b0)[uVar23];
          bVar2 = *(byte *)(param_3 + 1);
          iVar21 = (int)(char)bVar2 + uVar23;
          lVar26 = *(longlong *)*param_3;
          *(byte *)(param_3 + 1) = (byte)iVar21 & 7;
          uVar24 = (ushort)uVar6 & (ushort)(lVar26 >> (bVar2 & 0x3f));
          *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar21 >> 3);
          *param_3 = ((longlong)iVar21 >> 3) + *param_3;
          *(ushort *)(lVar15 + param_1[2]) = uVar24;
          if ((int)(1 << sVar8 | 1U >> 0x20 - sVar8) <= (int)(uint)uVar24) goto LAB_1431ef90e;
          uVar18 = uVar18 + 1;
          lVar15 = lVar15 + 2;
        } while ((longlong)uVar18 < (longlong)(int)uVar27);
      }
      uVar9 = (int)uVar22 + 1;
      uVar12 = (ulonglong)uVar27;
      uVar22 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)param_1[6]);
  }
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
LAB_1431ef90e:
    uVar7 = 0xffffffff;
  }
  else {
    *(undefined2 *)param_1[2] = 0;
    *(short *)(param_1[2] + 2) = 1 << sVar8;
    uVar27 = uVar27 + 2;
    *(uint *)((longlong)param_1 + 0x34) = uVar27;
    iVar21 = 0;
    if (0 < (int)uVar27) {
      do {
        *(char *)((longlong)iVar21 + param_1[3]) = (char)iVar21;
        iVar21 = iVar21 + 1;
        uVar27 = *(uint *)((longlong)param_1 + 0x34);
      } while (iVar21 < (int)uVar27);
    }
    mergesort(param_1[3],param_1[2],uVar27 & 0xffff);
    iVar21 = 0;
    if (0 < *(int *)((longlong)param_1 + 0x34) + -2) {
      do {
        puVar13 = (ushort *)param_1[2];
        iVar17 = 0;
        uVar16 = 0;
        uVar19 = 0;
        lVar15 = (longlong)iVar21;
        iVar10 = 0;
        iVar20 = 1;
        uVar14 = 1;
        uVar24 = puVar13[1];
        puVar1 = puVar13 + lVar15 + 2;
        if (0 < iVar21 + 2) {
          do {
            uVar5 = *puVar13;
            if ((uVar19 < uVar5) && (uVar5 < *puVar1)) {
              iVar17 = iVar10;
              uVar19 = uVar5;
            }
            uVar16 = (undefined1)iVar17;
            if ((uVar5 < uVar24) && (*puVar1 < uVar5)) {
              iVar20 = iVar10;
              uVar24 = uVar5;
            }
            uVar14 = (undefined1)iVar20;
            iVar10 = iVar10 + 1;
            puVar13 = puVar13 + 1;
          } while (iVar10 < iVar21 + 2);
        }
        iVar21 = iVar21 + 1;
        *(undefined1 *)(lVar15 + param_1[5]) = uVar16;
        *(undefined1 *)(lVar15 + param_1[4]) = uVar14;
      } while (iVar21 < *(int *)((longlong)param_1 + 0x34) + -2);
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1431efa10 FUN_1431efa10 body=903 status=ok
// SIG undefined FUN_1431efa10(void)

uint * FUN_1431efa10(longlong *param_1,longlong *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  int local_res8;
  int local_res10;
  longlong local_58;
  
  bVar1 = *(byte *)(param_1 + 1);
  lVar14 = *(longlong *)(param_1[3] + 0x40);
  pbVar18 = (byte *)*param_1 + ((longlong)(char)bVar1 + 1 >> 3);
  iVar5 = *(int *)(&DAT_1467c229c + (longlong)(int)param_2[7] * 4);
  bVar2 = *(byte *)*param_1;
  bVar13 = (byte)((char)bVar1 + 1) & 7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - ((char)bVar1 + 1 >> 3);
  *(byte *)(param_1 + 1) = bVar13;
  *param_1 = (longlong)pbVar18;
  if ((bVar2 >> (bVar1 & 0x1f) & 1) == 0) {
    param_3 = (uint *)0x0;
  }
  else {
    iVar16 = 0;
    for (uVar6 = iVar5 - 1; uVar6 != 0; uVar6 = uVar6 >> 1) {
      iVar16 = iVar16 + 1;
    }
    lVar12 = *(longlong *)pbVar18;
    local_res8 = 2;
    uVar6 = (&DAT_1467c22b0)[iVar16];
    iVar8 = (uint)bVar13 + iVar16;
    *(byte *)(param_1 + 1) = (byte)iVar8 & 7;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar8 >> 3);
    *param_1 = (longlong)(pbVar18 + ((longlong)iVar8 >> 3));
    *param_3 = (uint)(lVar12 >> bVar13) & uVar6;
    uVar6 = (&DAT_1467c22b0)[iVar16];
    bVar1 = *(byte *)(param_1 + 1);
    lVar12 = *(longlong *)*param_1;
    iVar16 = (char)bVar1 + iVar16;
    *(byte *)(param_1 + 1) = (byte)iVar16 & 7;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar16 >> 3);
    *param_1 = ((longlong)iVar16 >> 3) + *param_1;
    param_3[1] = (uint)(lVar12 >> (bVar1 & 0x3f)) & uVar6;
    local_res10 = 0;
    if (0 < (int)param_2[6]) {
      local_58 = 0;
      do {
        iVar16 = 0;
        cVar3 = *(char *)(param_2[1] + local_58);
        lVar12 = *param_2;
        lVar11 = (longlong)cVar3 * 0xb;
        bVar1 = *(byte *)(lVar11 + 1 + lVar12);
        cVar4 = *(char *)(lVar11 + lVar12);
        if (bVar1 != 0) {
          iVar16 = ak_vorbis_book_decode
                             ((ulonglong)*(byte *)(lVar11 + 2 + lVar12) * 0x20 + lVar14,param_1);
        }
        if (0 < (longlong)cVar4) {
          lVar12 = 0;
          do {
            bVar2 = *(byte *)(((longlong)iVar16 & (longlong)(1 << (bVar1 & 0x1f)) - 1U) +
                              (longlong)cVar3 * 0xb + 3 + *param_2);
            iVar16 = iVar16 >> (bVar1 & 0x1f);
            lVar11 = local_res8 + lVar12;
            if (bVar2 == 0xff) {
              uVar6 = 0;
            }
            else {
              uVar6 = ak_vorbis_book_decode((ulonglong)bVar2 * 0x20 + lVar14,param_1);
            }
            lVar12 = lVar12 + 1;
            param_3[lVar11] = uVar6;
          } while (lVar12 < cVar4);
        }
        local_res8 = local_res8 + cVar4;
        local_58 = local_58 + 1;
        local_res10 = local_res10 + 1;
      } while (local_res10 < (int)param_2[6]);
    }
    iVar16 = 2;
    if (2 < *(int *)((longlong)param_2 + 0x34)) {
      lVar14 = 2;
      do {
        lVar12 = param_2[2];
        lVar11 = (longlong)*(char *)(lVar14 + -2 + param_2[5]);
        lVar15 = (longlong)*(char *)(param_2[4] + -2 + lVar14);
        uVar6 = (uint)*(ushort *)(lVar12 + lVar11 * 2);
        uVar17 = (param_3[lVar15] & 0x7fff) - (param_3[lVar11] & 0x7fff);
        iVar7 = (int)(((uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f)) *
                     (*(ushort *)(lVar12 + lVar14 * 2) - uVar6)) /
                (int)(*(ushort *)(lVar12 + lVar15 * 2) - uVar6);
        uVar6 = param_3[lVar14];
        iVar8 = -iVar7;
        if (-1 < (int)uVar17) {
          iVar8 = iVar7;
        }
        uVar17 = (param_3[lVar11] & 0x7fff) + iVar8;
        uVar10 = iVar5 - uVar17;
        if (uVar6 == 0) {
          param_3[lVar14] = uVar17 | 0x8000;
        }
        else {
          uVar9 = uVar17;
          if ((int)uVar10 < (int)uVar17) {
            uVar9 = uVar10;
          }
          if ((int)uVar6 < (int)(uVar9 * 2)) {
            if ((uVar6 & 1) == 0) {
              iVar8 = (int)uVar6 >> 1;
            }
            else {
              iVar8 = -((int)(uVar6 + 1) >> 1);
            }
          }
          else if ((int)uVar17 < (int)uVar10) {
            iVar8 = uVar6 - uVar17;
          }
          else {
            iVar8 = (uVar10 - uVar6) + -1;
          }
          param_3[lVar14] = uVar17 + iVar8;
          param_3[*(char *)(lVar14 + -2 + param_2[5])] =
               param_3[*(char *)(lVar14 + -2 + param_2[5])] & 0x7fff;
          param_3[*(char *)(param_2[4] + -2 + lVar14)] =
               param_3[*(char *)(param_2[4] + -2 + lVar14)] & 0x7fff;
        }
        iVar16 = iVar16 + 1;
        lVar14 = lVar14 + 1;
      } while (iVar16 < *(int *)((longlong)param_2 + 0x34));
    }
  }
  return param_3;
}



// FUNCTION 1431efda0 floor1_inverse2 body=228 status=ok
// SIG undefined floor1_inverse2(void)

undefined8 floor1_inverse2(longlong param_1,longlong param_2,int *param_3,void *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_3 == (int *)0x0) {
    _guard_xfg_dispatch_icall_nop
              (param_4,0,
               (ulonglong)
               (uint)((*(int *)(*(longlong *)(param_1 + 0x18) +
                               (longlong)*(int *)(param_1 + 0x3c) * 4) / 2) * 4));
    return 0;
  }
  iVar6 = *(int *)(param_2 + 0x38) * *param_3;
  iVar5 = 1;
  if (1 < *(int *)(param_2 + 0x34)) {
    lVar7 = 1;
    uVar1 = 0;
    do {
      lVar3 = (longlong)*(char *)(*(longlong *)(param_2 + 0x18) + lVar7);
      uVar2 = uVar1;
      if ((param_3[lVar3] & 0x7fffU) == param_3[lVar3]) {
        iVar4 = (param_3[lVar3] & 0x7fffU) * *(int *)(param_2 + 0x38);
        uVar2 = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + lVar3 * 2);
        render_line(uVar1,uVar2,iVar6,iVar4,param_4);
        iVar6 = iVar4;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 1;
      uVar1 = uVar2;
    } while (iVar5 < *(int *)(param_2 + 0x34));
  }
  return 1;
}



// FUNCTION 1431efe90 mergesort body=577 status=ok
// SIG undefined mergesort(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void mergesort(undefined1 *param_1,longlong param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_res20;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  ulonglong uVar10;
  
  uVar4 = (ulonglong)param_3 + 0xf;
  if (uVar4 <= param_3) {
    uVar4 = 0xffffffffffffff0;
  }
  uVar9 = 1;
  local_68 = 1;
  puVar7 = (undefined1 *)((longlong)&local_68 - (uVar4 & 0xfffffffffffffff0));
  puVar11 = param_1;
  if (1 < param_3) {
    uVar13 = (uint)param_3;
    local_60 = (uint)param_3;
    puVar6 = puVar7;
    do {
      puVar7 = puVar11;
      puVar11 = puVar6;
      uVar3 = 0;
      uVar4 = uVar9 & 0xffff;
      uVar5 = (uint)uVar4;
      local_5c = uVar5;
      if (uVar5 < uVar13) {
        do {
          uVar10 = (ulonglong)uVar3;
          uVar8 = (uint)uVar3;
          uVar5 = uVar5 * 2 + (uint)uVar3;
          uVar9 = (ulonglong)(uint)uVar3;
          local_res20 = (uint)uVar3 + (int)uVar4;
          if (uVar13 <= uVar5) {
            uVar5 = uVar13;
          }
          uVar15 = (ulonglong)local_res20;
          uVar14 = uVar15;
          if (uVar10 < uVar15) {
            do {
              local_64 = (uint)uVar10;
              uVar8 = local_64;
              if ((longlong)(ulonglong)uVar5 <= (longlong)uVar14) break;
              uVar1 = uVar3 + 1;
              uVar8 = local_64 + 1;
              uVar4 = uVar14;
              uVar10 = uVar9 + 1;
              cVar2 = puVar7[uVar9];
              if (*(ushort *)(param_2 + (longlong)(char)puVar7[uVar14] * 2) <=
                  *(ushort *)(param_2 + (longlong)(char)puVar7[uVar9] * 2)) {
                uVar8 = local_64;
                local_res20 = local_res20 + 1;
                uVar4 = uVar14 + 1;
                uVar10 = uVar9;
                cVar2 = puVar7[uVar14];
              }
              uVar9 = uVar10;
              uVar10 = (ulonglong)uVar8;
              puVar11[uVar3] = cVar2;
              uVar14 = uVar4;
              uVar3 = uVar1;
            } while ((longlong)uVar9 < (longlong)uVar15);
            uVar4 = (ulonglong)local_5c;
            uVar13 = local_60;
          }
          for (lVar12 = (longlong)(int)uVar8; lVar12 < (longlong)uVar15; lVar12 = lVar12 + 1) {
            uVar9 = (ulonglong)uVar3;
            uVar3 = uVar3 + 1;
            puVar11[uVar9] = puVar7[lVar12];
          }
          for (lVar12 = (longlong)(int)local_res20; lVar12 < (longlong)(ulonglong)uVar5;
              lVar12 = lVar12 + 1) {
            uVar9 = (ulonglong)uVar3;
            uVar3 = uVar3 + 1;
            puVar11[uVar9] = puVar7[lVar12];
          }
          uVar5 = (uint)uVar4;
        } while (uVar3 + uVar5 < uVar13);
        uVar9 = (ulonglong)local_68;
      }
      if (uVar3 < param_3) {
        puVar6 = puVar11 + uVar3;
        uVar4 = (ulonglong)(ushort)(param_3 - uVar3);
        do {
          *puVar6 = puVar6[(longlong)puVar7 - (longlong)puVar11];
          puVar6 = puVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar3 = (short)uVar9 * 2;
      uVar9 = CONCAT62((int6)(uVar9 >> 0x10),uVar3);
      local_68 = (uint)uVar9;
      puVar6 = puVar7;
    } while (uVar3 < param_3);
  }
  uVar4 = (ulonglong)param_3;
  if ((puVar7 == param_1) && (param_3 != 0)) {
    lVar12 = (longlong)puVar11 - (longlong)puVar7;
    do {
      *puVar7 = puVar7[lVar12];
      puVar7 = puVar7 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1431f00e0 render_line body=574 status=ok
// SIG undefined render_line(void)

void render_line(int param_1,int param_2,uint param_3,int param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  
  lVar16 = (longlong)param_2;
  param_2 = param_2 - param_1;
  uVar9 = (ulonglong)(int)param_3;
  uVar13 = param_4 - param_3;
  uVar5 = (int)uVar13 >> 0x1f;
  iVar1 = (int)uVar13 / param_2;
  lVar11 = (longlong)iVar1;
  uVar6 = iVar1 * param_2 >> 0x1f;
  iVar21 = ((uVar13 ^ uVar5) - uVar5) - ((iVar1 * param_2 ^ uVar6) - uVar6);
  iVar10 = (uVar5 & 0xfffffffe) + 1 + iVar1;
  iVar7 = 0;
  *(float *)(param_5 + (longlong)param_1 * 4) =
       (float)*(int *)(param_5 + (longlong)param_1 * 4) * *(float *)(&DAT_1467c3700 + uVar9 * 4);
  lVar15 = (longlong)(param_1 + 1);
  if (lVar15 < lVar16) {
    if (3 < lVar16 - lVar15) {
      lVar18 = (longlong)iVar10;
      pfVar14 = (float *)(param_5 + lVar15 * 4 + 8);
      lVar17 = ((lVar16 - lVar15) - 4U >> 2) + 1;
      lVar15 = lVar15 + lVar17 * 4;
      uVar20 = uVar9;
      do {
        iVar7 = iVar7 + iVar21;
        lVar2 = lVar11;
        if (param_2 <= iVar7) {
          lVar2 = lVar18;
        }
        iVar19 = iVar1;
        if (param_2 <= iVar7) {
          iVar19 = iVar10;
        }
        if (param_2 <= iVar7) {
          iVar7 = iVar7 - param_2;
        }
        iVar7 = iVar7 + iVar21;
        pfVar14[-2] = (float)(int)pfVar14[-2] * *(float *)(&DAT_1467c3700 + (lVar2 + uVar20) * 4);
        lVar4 = lVar11;
        iVar8 = iVar1;
        if (param_2 <= iVar7) {
          iVar7 = iVar7 - param_2;
          lVar4 = lVar18;
          iVar8 = iVar10;
        }
        iVar7 = iVar7 + iVar21;
        lVar4 = lVar2 + uVar20 + lVar4;
        lVar2 = lVar11;
        if (param_2 <= iVar7) {
          lVar2 = lVar18;
        }
        lVar2 = lVar2 + lVar4;
        iVar3 = iVar1;
        if (param_2 <= iVar7) {
          iVar3 = iVar10;
        }
        pfVar14[-1] = (float)(int)pfVar14[-1] * *(float *)(&DAT_1467c3700 + lVar4 * 4);
        if (param_2 <= iVar7) {
          iVar7 = iVar7 - param_2;
        }
        *pfVar14 = (float)(int)*pfVar14 * *(float *)(&DAT_1467c3700 + lVar2 * 4);
        iVar7 = iVar7 + iVar21;
        iVar12 = iVar1;
        if (param_2 <= iVar7) {
          iVar7 = iVar7 - param_2;
          iVar12 = iVar10;
        }
        param_3 = iVar12 + iVar3 + iVar8 + iVar19 + (int)uVar9;
        uVar9 = (ulonglong)param_3;
        uVar20 = iVar12 + lVar2;
        pfVar14[1] = (float)(int)pfVar14[1] * *(float *)(&DAT_1467c3700 + uVar20 * 4);
        pfVar14 = pfVar14 + 4;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    if (lVar15 < lVar16) {
      lVar11 = (longlong)(int)param_3;
      do {
        iVar7 = iVar7 + iVar21;
        iVar19 = iVar1;
        if (param_2 <= iVar7) {
          iVar19 = iVar10;
        }
        lVar11 = lVar11 + iVar19;
        *(float *)(param_5 + lVar15 * 4) =
             (float)*(int *)(param_5 + lVar15 * 4) * *(float *)(&DAT_1467c3700 + lVar11 * 4);
        lVar15 = lVar15 + 1;
        if (param_2 <= iVar7) {
          iVar7 = iVar7 - param_2;
        }
      } while (lVar15 < lVar16);
    }
  }
  return;
}



// FUNCTION 1431f0320 res_inverse body=1586 status=ok
// SIG undefined res_inverse(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 res_inverse(longlong param_1,int *param_2,longlong *param_3,int *param_4,int param_5)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  char *pcVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  undefined8 auStack_c0 [5];
  int aiStack_98 [4];
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  
  local_50 = *(longlong *)(param_1 + 0x18);
  iVar7 = param_2[8];
  iVar14 = param_2[6];
  local_58 = (ulonglong)*(byte *)((longlong)param_2 + 0x25) * 0x20 + *(longlong *)(local_50 + 0x40);
  iVar18 = 0;
  bVar2 = *(byte *)(local_58 + 0x1a);
  uVar23 = (ulonglong)bVar2;
  uVar25 = (uint)bVar2;
  local_78 = CONCAT44(local_78._4_4_,iVar7);
  iVar10 = *(int *)(local_50 + (longlong)*(int *)(param_1 + 0x3c) * 4);
  iVar24 = param_2[7];
  local_70 = uVar23;
  if (*param_2 < 2) {
    iVar10 = iVar10 >> 1;
    if (iVar10 <= iVar24) {
      iVar24 = iVar10;
    }
    if (0 < iVar24 - iVar14) {
      iVar7 = (iVar24 - iVar14) / iVar7;
      lVar20 = (longlong)iVar7;
      iVar7 = (bVar2 - 1) + iVar7;
      if (0 < (longlong)param_5) {
        lVar11 = 0;
        plVar15 = param_3;
        do {
          if (param_4[lVar11] != 0) {
            iVar18 = iVar18 + 1;
            *plVar15 = param_3[lVar11];
            plVar15 = plVar15 + 1;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < param_5);
        if (iVar18 != 0) {
          lVar11 = (longlong)iVar18;
          local_68 = lVar11;
          uVar12 = lVar11 * 8 + 0xf;
          if (uVar12 <= (ulonglong)(lVar11 * 8)) {
            uVar12 = 0xffffffffffffff0;
          }
          auStack_c0[0] = 0x1431f0429;
          lVar19 = -(uVar12 & 0xfffffffffffffff0);
          plVar15 = (longlong *)((longlong)&local_88 + lVar19);
          iVar7 = iVar7 - iVar7 % (int)(uint)bVar2;
          local_40 = plVar15;
          uVar12 = (longlong)(iVar7 * iVar18) + 0xf;
          if (uVar12 <= (ulonglong)(longlong)(iVar7 * iVar18)) {
            uVar12 = 0xffffffffffffff0;
          }
          *(undefined8 *)((longlong)auStack_c0 + lVar19) = 0x1431f045d;
          lVar5 = -(uVar12 & 0xfffffffffffffff0);
          *plVar15 = (longlong)&local_88 + lVar5 + lVar19;
          if (1 < lVar11) {
            lVar13 = 1;
            iVar14 = iVar7;
            do {
              lVar8 = (longlong)iVar14;
              iVar14 = iVar14 + iVar7;
              plVar15[lVar13] = lVar8 + *plVar15;
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar11);
          }
          local_60 = lVar20;
          local_88._4_4_ = 0;
          if ('\0' < *(char *)((longlong)param_2 + 0x26)) {
            do {
              iVar14 = 0;
              lVar13 = 0;
              local_88._0_4_ = 0;
              iVar7 = local_88._4_4_;
              if (0 < lVar20) {
                do {
                  if (iVar7 == 0) {
                    *(undefined1 *)(uVar23 + lVar13 + -1 + *plVar15) = 1;
                    for (lVar8 = uVar23 - 2; -1 < lVar8; lVar8 = lVar8 + -1) {
                      pcVar16 = (char *)(lVar8 + lVar13 + *plVar15);
                      *pcVar16 = pcVar16[1] * (char)param_2[9];
                    }
                    lVar8 = 1;
                    uVar12 = uVar23;
                    if (1 < lVar11) {
                      do {
                        while (uVar12 = uVar12 - 1, -1 < (longlong)uVar12) {
                          *(undefined1 *)(plVar15[lVar8] + uVar12 + lVar13) =
                               *(undefined1 *)(uVar12 + lVar13 + plVar15[lVar8 + -1]);
                        }
                        lVar8 = lVar8 + 1;
                        uVar12 = uVar23;
                      } while (lVar8 < lVar11);
                    }
                    lVar8 = 0;
                    plVar21 = plVar15;
                    iVar7 = local_88._4_4_;
                    iVar14 = (int)local_88;
                    if (0 < lVar11) {
                      do {
                        lVar20 = local_58;
                        *(undefined8 *)((longlong)auStack_c0 + lVar5 + lVar19) = 0x1431f057c;
                        uVar12 = ak_vorbis_book_decode(lVar20,param_1);
                        uVar12 = uVar12 & 0xffffffff;
                        if (*(int *)(param_1 + 0xc) < 0) {
                          return 0;
                        }
                        lVar20 = 0;
                        if (uVar25 != 0) {
                          lVar17 = *plVar21;
                          do {
                            uVar22 = (uint)*(char *)(lVar17 + lVar20 + lVar13);
                            *(char *)(lVar17 + lVar20 + lVar13) = (char)(uVar12 / uVar22);
                            lVar17 = *plVar21;
                            lVar1 = lVar17 + lVar20;
                            lVar20 = lVar20 + 1;
                            uVar12 = (ulonglong)
                                     ((int)uVar12 - (int)*(char *)(lVar1 + lVar13) * uVar22);
                          } while (lVar20 < (longlong)uVar23);
                        }
                        lVar8 = lVar8 + 1;
                        plVar21 = plVar21 + 1;
                        lVar20 = local_60;
                        iVar7 = local_88._4_4_;
                        iVar14 = (int)local_88;
                      } while (lVar8 < lVar11);
                    }
                  }
                  iVar10 = 0;
                  local_80 = local_80 & 0xffffffff00000000;
                  if (uVar25 != 0) {
                    iVar18 = iVar14 * (int)local_78;
                    iVar24 = (int)local_78;
                    do {
                      if (lVar20 <= lVar13) goto LAB_1431f06e9;
                      if (0 < lVar11) {
                        bVar2 = (byte)iVar7 & 0x1f;
                        lVar20 = local_68;
                        plVar21 = param_3;
                        do {
                          cVar3 = *(char *)(lVar13 + *(longlong *)
                                                      (((longlong)plVar15 - (longlong)param_3) +
                                                      (longlong)plVar21));
                          if ((*(byte *)((longlong)cVar3 + *(longlong *)(param_2 + 2)) &
                              ((byte)(1 << bVar2) | (byte)(1 >> 0x20 - bVar2))) != 0) {
                            *(int *)((longlong)aiStack_98 + lVar5 + lVar19) = iVar24;
                            lVar11 = (ulonglong)
                                     *(byte *)((longlong)(iVar7 + cVar3 * 8) +
                                              *(longlong *)(param_2 + 4)) * 0x20 +
                                     *(longlong *)(local_50 + 0x40);
                            local_48 = *plVar21 + (longlong)(param_2[6] + iVar18) * 4;
                            pcVar4 = *(code **)(*(longlong *)(lVar11 + 0x10) + 0x48);
                            *(undefined8 *)((longlong)auStack_c0 + lVar5 + lVar19) = 0x1431f068c;
                            (*pcVar4)(lVar11,&local_48,0);
                            iVar7 = local_88._4_4_;
                            iVar24 = (int)local_78;
                          }
                          plVar21 = plVar21 + 1;
                          lVar20 = lVar20 + -1;
                        } while (lVar20 != 0);
                        lVar20 = local_60;
                        lVar11 = local_68;
                        plVar15 = local_40;
                        iVar14 = (int)local_88;
                        iVar10 = (int)local_80;
                      }
                      iVar10 = iVar10 + 1;
                      iVar14 = iVar14 + 1;
                      local_80 = CONCAT44(local_80._4_4_,iVar10);
                      iVar18 = iVar18 + iVar24;
                      local_88._0_4_ = iVar14;
                      lVar13 = lVar13 + 1;
                      uVar23 = local_70;
                    } while (iVar10 < (int)uVar25);
                  }
                } while (lVar13 < lVar20);
              }
LAB_1431f06e9:
              local_88._4_4_ = iVar7 + 1;
              uVar23 = local_70;
            } while (iVar7 + 1 < (int)*(char *)((longlong)param_2 + 0x26));
          }
        }
      }
    }
  }
  else {
    iVar10 = iVar10 * param_5 >> 1;
    if (iVar10 <= iVar24) {
      iVar24 = iVar10;
    }
    if (0 < iVar24 - iVar14) {
      iVar10 = (iVar24 - iVar14) / iVar7;
      lVar20 = (longlong)iVar10;
      iVar10 = (bVar2 - 1) + iVar10;
      uVar9 = (ulonglong)(iVar10 - iVar10 % (int)(uint)bVar2);
      uVar12 = uVar9 + 0xf;
      if (uVar12 <= uVar9) {
        uVar12 = 0xffffffffffffff0;
      }
      auStack_c0[0] = 0x1431f0763;
      lVar11 = -(uVar12 & 0xfffffffffffffff0);
      iVar14 = iVar14 / 2;
      uVar12 = (longlong)&local_88 + lVar11;
      local_80 = uVar12;
      local_88._4_4_ = iVar14;
      if (param_4[1] != 0 || *param_4 != 0) {
        local_78 = lVar20;
        local_88._0_4_ = 0;
        iVar7 = iVar7 / 2;
        if ('\0' < *(char *)((longlong)param_2 + 0x26)) {
          do {
            iVar24 = 0;
            lVar19 = 0;
            iVar10 = (int)local_88;
            if (0 < lVar20) {
              do {
                uVar9 = local_70;
                if (iVar10 == 0) {
                  *(undefined1 *)(local_70 + lVar19 + -1 + uVar12) = 1;
                  if (-1 < (longlong)(uVar9 - 2)) {
                    lVar20 = uVar9 - 1;
                    pcVar16 = (char *)(lVar19 + (uVar9 - 2) + uVar12);
                    do {
                      *pcVar16 = pcVar16[1] * (char)param_2[9];
                      lVar20 = lVar20 + -1;
                      pcVar16 = pcVar16 + -1;
                    } while (lVar20 != 0);
                  }
                  lVar20 = local_58;
                  *(undefined8 *)((longlong)auStack_c0 + lVar11) = 0x1431f0815;
                  uVar22 = ak_vorbis_book_decode(lVar20);
                  uVar12 = local_80;
                  lVar20 = local_78;
                  iVar14 = local_88._4_4_;
                  iVar10 = (int)local_88;
                  if ((int)uVar23 != 0) {
                    pcVar16 = (char *)(local_80 + lVar19);
                    do {
                      cVar3 = *pcVar16;
                      cVar6 = (char)(uVar22 / (uint)(int)cVar3);
                      *pcVar16 = cVar6;
                      uVar22 = uVar22 - (int)cVar6 * (int)cVar3;
                      uVar9 = uVar9 - 1;
                      pcVar16 = pcVar16 + 1;
                    } while (uVar9 != 0);
                  }
                }
                iVar18 = 0;
                if ((int)uVar23 != 0) {
                  bVar2 = (byte)iVar10 & 0x1f;
                  iVar14 = iVar24 * iVar7 + iVar14;
                  do {
                    if (lVar20 <= lVar19) goto LAB_1431f0912;
                    cVar3 = *(char *)(lVar19 + uVar12);
                    if ((*(byte *)((longlong)cVar3 + *(longlong *)(param_2 + 2)) &
                        ((byte)(1 << bVar2) | (byte)(1 >> 0x20 - bVar2))) != 0) {
                      *(int *)((longlong)aiStack_98 + lVar11) = iVar7;
                      lVar20 = (ulonglong)
                               *(byte *)((longlong)(iVar10 + cVar3 * 8) + *(longlong *)(param_2 + 4)
                                        ) * 0x20 + *(longlong *)(local_50 + 0x40);
                      pcVar4 = *(code **)(*(longlong *)(lVar20 + 0x10) + 0x48);
                      *(undefined8 *)((longlong)auStack_c0 + lVar11) = 0x1431f08d8;
                      (*pcVar4)(lVar20,param_3,iVar14,param_1);
                      uVar12 = local_80;
                      lVar20 = local_78;
                      iVar10 = (int)local_88;
                    }
                    iVar18 = iVar18 + 1;
                    iVar24 = iVar24 + 1;
                    iVar14 = iVar14 + iVar7;
                    lVar19 = lVar19 + 1;
                  } while (iVar18 < (int)uVar25);
                  uVar23 = (ulonglong)uVar25;
                }
                iVar14 = local_88._4_4_;
              } while (lVar19 < lVar20);
LAB_1431f0912:
              local_88._0_4_ = iVar10;
              uVar23 = (ulonglong)uVar25;
              iVar14 = local_88._4_4_;
            }
            local_88._0_4_ = (int)local_88 + 1;
          } while ((int)local_88 < *(char *)((longlong)param_2 + 0x26));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1431f0960 res_unpack body=1021 status=ok
// SIG undefined res_unpack(void)

undefined8 res_unpack(uint *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  sbyte sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ushort *puVar16;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  bVar4 = *(byte *)(param_3 + 1);
  uVar2 = *(ushort *)*param_3;
  iVar8 = (char)bVar4 + 2;
  *(byte *)(param_3 + 1) = (byte)iVar8 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar8 >> 3);
  *param_3 = ((longlong)iVar8 >> 3) + *param_3;
  *param_1 = uVar2 >> (bVar4 & 0x1f) & 3;
  iVar8 = (char)*(byte *)(param_3 + 1) + 0x18;
  uVar13 = (uint)(*(longlong *)*param_3 >> (*(byte *)(param_3 + 1) & 0x3f)) & DAT_1467c2310;
  *(byte *)(param_3 + 1) = (byte)iVar8 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar8 >> 3);
  *param_3 = ((longlong)iVar8 >> 3) + *param_3;
  param_1[6] = uVar13;
  iVar8 = (char)*(byte *)(param_3 + 1) + 0x18;
  uVar13 = (uint)(*(longlong *)*param_3 >> (*(byte *)(param_3 + 1) & 0x3f)) & DAT_1467c2310;
  *(byte *)(param_3 + 1) = (byte)iVar8 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar8 >> 3);
  *param_3 = ((longlong)iVar8 >> 3) + *param_3;
  param_1[7] = uVar13;
  iVar8 = (char)*(byte *)(param_3 + 1) + 0x18;
  uVar13 = (uint)(*(longlong *)*param_3 >> (*(byte *)(param_3 + 1) & 0x3f)) & DAT_1467c2310;
  *(byte *)(param_3 + 1) = (byte)iVar8 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar8 >> 3);
  *param_3 = ((longlong)iVar8 >> 3) + *param_3;
  param_1[8] = uVar13 + 1;
  bVar4 = *(byte *)(param_3 + 1);
  iVar8 = (char)bVar4 + 6;
  uVar2 = *(ushort *)*param_3;
  *(byte *)(param_3 + 1) = (byte)iVar8 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar8 >> 3);
  *param_3 = ((longlong)iVar8 >> 3) + *param_3;
  *(byte *)(param_1 + 9) = ((byte)(uVar2 >> (bVar4 & 0x1f)) & 0x3f) + 1;
  iVar8 = (char)*(byte *)(param_3 + 1) + 8;
  bVar4 = (byte)(*(short *)*param_3 >> (*(byte *)(param_3 + 1) & 0x1f));
  *(byte *)(param_3 + 1) = (byte)iVar8 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar8 >> 3);
  *param_3 = ((longlong)iVar8 >> 3) + *param_3;
  *(byte *)((longlong)param_1 + 0x25) = bVar4;
  if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar4) {
    return 1;
  }
  cVar7 = (char)param_1[9];
  if (cVar7 != '\0') {
    uVar13 = (int)cVar7 + 3U & 0xfffffffc;
    uVar14 = *(int *)(param_4 + 0x50) + uVar13;
    if (uVar14 <= *(uint *)(param_4 + 0x54)) {
      lVar15 = *(longlong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar14;
      *(ulonglong *)(param_4 + 0x48) = (ulonglong)uVar13 + lVar15;
      cVar7 = (char)param_1[9];
      goto LAB_1431f0b3d;
    }
  }
  lVar15 = 0;
LAB_1431f0b3d:
  uVar13 = cVar7 * 8;
  *(longlong *)(param_1 + 2) = lVar15;
  if ((((int)cVar7 & 0x1fffffffU) == 0) ||
     (uVar14 = *(int *)(param_4 + 0x50) + uVar13, *(uint *)(param_4 + 0x54) < uVar14)) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar14;
    *(ulonglong *)(param_4 + 0x48) = (ulonglong)uVar13 + lVar15;
    cVar7 = (char)param_1[9];
  }
  iVar8 = 0;
  *(longlong *)(param_1 + 4) = lVar15;
  if (cVar7 < '\x01') {
    cVar7 = (char)param_1[9];
  }
  else {
    lVar15 = 0;
    do {
      bVar4 = *(byte *)(param_3 + 1);
      uVar2 = *(ushort *)*param_3;
      pbVar9 = (byte *)(((longlong)(char)bVar4 + 3 >> 3) + *param_3);
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - ((char)bVar4 + 3 >> 3)
      ;
      bVar5 = (byte)((char)bVar4 + 3) & 7;
      bVar10 = (byte)(uVar2 >> (bVar4 & 0x1f)) & 7;
      *(byte *)(param_3 + 1) = bVar5;
      *param_3 = (longlong)pbVar9;
      bVar4 = *pbVar9;
      uVar13 = bVar5 + 1 & 0xffffff07;
      iVar12 = *(int *)((longlong)param_3 + 0xc) - (bVar5 + 1 >> 3);
      puVar16 = (ushort *)(pbVar9 + ((ulonglong)bVar5 + 1 >> 3));
      sVar11 = (sbyte)uVar13;
      *(sbyte *)(param_3 + 1) = sVar11;
      *(int *)((longlong)param_3 + 0xc) = iVar12;
      *param_3 = (longlong)puVar16;
      if ((bVar4 >> bVar5 & 1) != 0) {
        uVar2 = *puVar16;
        uVar13 = uVar13 + 5;
        *(byte *)(param_3 + 1) = (byte)uVar13 & 7;
        *(uint *)((longlong)param_3 + 0xc) = iVar12 - (uVar13 >> 3);
        *param_3 = (longlong)((ulonglong)(uVar13 >> 3) + (longlong)puVar16);
        bVar10 = bVar10 | (char)(uVar2 >> sVar11) * '\b';
      }
      iVar8 = iVar8 + 1;
      *(byte *)(lVar15 + *(longlong *)(param_1 + 2)) = bVar10;
      lVar15 = lVar15 + 1;
      cVar7 = (char)param_1[9];
    } while (iVar8 < cVar7);
  }
  iVar8 = 0;
  if ('\0' < cVar7) {
    lVar15 = 0;
    iVar12 = 0;
    do {
      iVar6 = 0;
      do {
        if ((*(byte *)(lVar15 + *(longlong *)(param_1 + 2)) >> ((byte)iVar6 & 0x1f) & 1) == 0) {
          *(undefined1 *)((longlong)(iVar12 + iVar6) + *(longlong *)(param_1 + 4)) = 0xff;
        }
        else {
          bVar4 = *(byte *)(param_3 + 1);
          iVar1 = (char)bVar4 + 8;
          sVar3 = *(short *)*param_3;
          *(byte *)(param_3 + 1) = (byte)iVar1 & 7;
          *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar1 >> 3);
          bVar4 = (byte)(sVar3 >> (bVar4 & 0x1f));
          *param_3 = ((longlong)iVar1 >> 3) + *param_3;
          if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar4) {
            return 1;
          }
          *(byte *)((longlong)(iVar12 + iVar6) + *(longlong *)(param_1 + 4)) = bVar4;
          if ((int)*(char *)((longlong)param_1 + 0x26) < iVar6 + 1) {
            *(byte *)((longlong)param_1 + 0x26) = (byte)iVar6 + 1;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 8);
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 + 8;
      lVar15 = lVar15 + 1;
    } while (iVar8 < (char)param_1[9]);
  }
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 1431f0d60 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,1>,LeafByte> body=351 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,1>,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,1>,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  ulonglong *puVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  
  lVar11 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar4 = *(int *)(lVar11 + 0x34);
  uVar5 = *(uint *)(lVar11 + 0x38);
  iVar6 = *(int *)(lVar11 + 0x3c);
  piVar15 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar13 = 0;
  piVar1 = piVar15 + param_5;
  if (piVar15 != piVar1) {
    bVar10 = *(byte *)(param_4 + 1);
    puVar9 = (ulonglong *)*param_4;
    do {
      uVar13 = uVar13 | *puVar9 >> (bVar10 & 0x3f);
      iVar12 = 0x40 - (char)bVar10;
      for (; ((int)(uint)bVar2 <= iVar12 && (piVar15 != piVar1)); piVar15 = piVar15 + 1) {
        bVar7 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
        uVar14 = (uint)bVar7;
        uVar3 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
        uVar13 = uVar13 >> (bVar7 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar11 = *param_1 + (ulonglong)uVar3 * 2;
          bVar7 = 0;
          do {
            uVar8 = (uint)uVar13;
            uVar13 = uVar13 >> 1;
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + (ulonglong)bVar7 * 2;
            bVar7 = *(byte *)((ulonglong)(uVar8 & 1) + lVar11);
          } while (bVar7 < 0x80);
          uVar8 = bVar7 & 0x7f;
        }
        else {
          uVar8 = uVar3 & 0x7fff;
        }
        iVar12 = iVar12 - uVar14;
        *piVar15 = *piVar15 + (uVar8 & uVar5) * iVar6 + iVar4;
      }
      iVar12 = ((char)param_4[1] - iVar12) + (0x40 - (char)bVar10);
      bVar10 = (byte)iVar12 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
      *param_4 = *param_4 + ((longlong)iVar12 >> 3);
      puVar9 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar10;
    } while (piVar15 != piVar1);
  }
  return;
}



// FUNCTION 1431f0ec0 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,2>,LeafByte> body=395 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,2>,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,2>,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong *puVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  lVar14 = param_1[2];
  bVar2 = *(byte *)(lVar14 + 0x50);
  iVar5 = *(int *)(lVar14 + 0x34);
  uVar6 = *(uint *)(lVar14 + 0x38);
  iVar7 = *(int *)(lVar14 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar16 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar16 + param_5;
  uVar8 = 0;
  if (piVar16 != piVar1) {
    bVar12 = *(byte *)(param_4 + 1);
    puVar10 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar10 >> (bVar12 & 0x3f);
      iVar11 = 0x40 - (char)bVar12;
      for (; ((int)(uint)bVar3 <= iVar11 && (piVar16 != piVar1)); piVar16 = piVar16 + 2) {
        bVar9 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
        uVar15 = (uint)bVar9;
        uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
        uVar8 = uVar8 >> (bVar9 & 0x3f);
        if (uVar4 < 0x8000) {
          lVar14 = *param_1 + (ulonglong)uVar4 * 2;
          bVar9 = 0;
          do {
            uVar13 = (uint)uVar8;
            uVar8 = uVar8 >> 1;
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + (ulonglong)bVar9 * 2;
            bVar9 = *(byte *)((ulonglong)(uVar13 & 1) + lVar14);
          } while (bVar9 < 0x80);
          uVar13 = bVar9 & 0x7f;
        }
        else {
          uVar13 = uVar4 & 0x7fff;
        }
        iVar11 = iVar11 - uVar15;
        *piVar16 = *piVar16 + (uVar13 & uVar6) * iVar7 + iVar5;
        piVar16[1] = piVar16[1] + ((int)uVar13 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
      }
      iVar11 = ((char)param_4[1] - iVar11) + (0x40 - (char)bVar12);
      bVar12 = (byte)iVar11 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar11 >> 3);
      *param_4 = *param_4 + ((longlong)iVar11 >> 3);
      puVar10 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar12;
    } while (piVar16 != piVar1);
  }
  return;
}



// FUNCTION 1431f1050 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,4>,LeafByte> body=460 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,4>,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,4>,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  lVar14 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)(lVar14 + 0x34);
  uVar6 = *(uint *)(lVar14 + 0x38);
  bVar3 = *(byte *)(lVar14 + 0x50);
  iVar7 = *(int *)(lVar14 + 0x3c);
  piVar16 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar16 + param_5;
  uVar8 = 0;
  if (piVar16 != piVar1) {
    bVar12 = *(byte *)(param_4 + 1);
    puVar9 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar9 >> (bVar12 & 0x3f);
      iVar10 = 0x40 - (char)bVar12;
      iVar11 = iVar10;
      if ((int)(uint)bVar2 <= iVar10) {
        do {
          if (piVar16 == piVar1) break;
          bVar12 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar15 = (uint)bVar12;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar12 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar14 = *param_1 + (ulonglong)uVar4 * 2;
            bVar12 = 0;
            do {
              uVar13 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar15 = uVar15 + 1;
              lVar14 = lVar14 + (ulonglong)bVar12 * 2;
              bVar12 = *(byte *)((ulonglong)(uVar13 & 1) + lVar14);
            } while (bVar12 < 0x80);
            uVar13 = bVar12 & 0x7f;
          }
          else {
            uVar13 = uVar4 & 0x7fff;
          }
          iVar11 = iVar11 - uVar15;
          *piVar16 = *piVar16 + (uVar13 & uVar6) * iVar7 + iVar5;
          uVar13 = (int)uVar13 >> (bVar3 & 0x1f);
          piVar16[1] = piVar16[1] + (uVar13 & uVar6) * iVar7 + iVar5;
          uVar13 = (int)uVar13 >> (bVar3 & 0x1f);
          piVar16[2] = piVar16[2] + (uVar13 & uVar6) * iVar7 + iVar5;
          piVar16[3] = piVar16[3] + ((int)uVar13 >> (bVar3 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar16 = piVar16 + 4;
        } while ((int)(uint)bVar2 <= iVar11);
      }
      iVar10 = ((char)param_4[1] - iVar11) + iVar10;
      bVar12 = (byte)iVar10 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar10 >> 3);
      *param_4 = *param_4 + ((longlong)iVar10 >> 3);
      puVar9 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar12;
    } while (piVar16 != piVar1);
  }
  return;
}



// FUNCTION 1431f1220 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,8>,LeafByte> body=545 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,8>,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,8>,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)(lVar15 + 0x34);
  uVar6 = *(uint *)(lVar15 + 0x38);
  bVar3 = *(byte *)(lVar15 + 0x50);
  iVar7 = *(int *)(lVar15 + 0x3c);
  piVar10 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar10 + param_5;
  uVar8 = 0;
  if (piVar10 != piVar1) {
    bVar13 = *(byte *)(param_4 + 1);
    puVar9 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar9 >> (bVar13 & 0x3f);
      iVar11 = 0x40 - (char)bVar13;
      iVar12 = iVar11;
      if ((int)(uint)bVar2 <= iVar11) {
        do {
          if (piVar10 == piVar1) break;
          bVar13 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar16 = (uint)bVar13;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar13 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar15 = *param_1 + (ulonglong)uVar4 * 2;
            bVar13 = 0;
            do {
              uVar14 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + (ulonglong)bVar13 * 2;
              bVar13 = *(byte *)((ulonglong)(uVar14 & 1) + lVar15);
            } while (bVar13 < 0x80);
            uVar14 = bVar13 & 0x7f;
          }
          else {
            uVar14 = uVar4 & 0x7fff;
          }
          iVar12 = iVar12 - uVar16;
          *piVar10 = *piVar10 + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[1] = piVar10[1] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[2] = piVar10[2] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[3] = piVar10[3] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[4] = piVar10[4] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[5] = piVar10[5] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[6] = piVar10[6] + (uVar14 & uVar6) * iVar7 + iVar5;
          piVar10[7] = piVar10[7] + ((int)uVar14 >> (bVar3 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar10 = piVar10 + 8;
        } while ((int)(uint)bVar2 <= iVar12);
      }
      iVar11 = ((char)param_4[1] - iVar12) + iVar11;
      bVar13 = (byte)iVar11 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar11 >> 3);
      *param_4 = *param_4 + ((longlong)iVar11 >> 3);
      puVar9 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar13;
    } while (piVar10 != piVar1);
  }
  return;
}



// FUNCTION 1431f1450 vorbis_book_decodev_add_t<ExpandEntry1Stereo,LeafByte> body=371 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandEntry1Stereo,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandEntry1Stereo,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  ulonglong *puVar9;
  byte bVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar4 = *(int *)(param_1[2] + 0x34);
  iVar5 = *(int *)(param_1[2] + 0x3c);
  piVar12 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar13 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar14 = 0;
  piVar1 = piVar12 + param_5;
  if (piVar12 != piVar1) {
    bVar10 = *(byte *)(param_4 + 1);
    puVar9 = (ulonglong *)*param_4;
    do {
      uVar14 = uVar14 | *puVar9 >> (bVar10 & 0x3f);
      iVar16 = 0x40 - (char)bVar10;
      piVar6 = piVar12;
      while ((piVar12 = piVar6, (int)(uint)bVar2 <= iVar16 && (piVar12 != piVar1))) {
        bVar7 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar14));
        uVar15 = (uint)bVar7;
        uVar3 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar14) * 2);
        uVar14 = uVar14 >> (bVar7 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar11 = *param_1 + (ulonglong)uVar3 * 2;
          bVar7 = 0;
          do {
            uVar8 = (uint)uVar14;
            uVar14 = uVar14 >> 1;
            uVar15 = uVar15 + 1;
            lVar11 = lVar11 + (ulonglong)bVar7 * 2;
            bVar7 = *(byte *)((ulonglong)(uVar8 & 1) + lVar11);
          } while (bVar7 < 0x80);
          uVar8 = bVar7 & 0x7f;
        }
        else {
          uVar8 = uVar3 & 0x7fff;
        }
        iVar16 = iVar16 - uVar15;
        *piVar13 = *piVar13 + uVar8 * iVar5 + iVar4;
        piVar6 = piVar13 + 1;
        piVar13 = piVar12;
      }
      iVar16 = ((char)param_4[1] - iVar16) + (0x40 - (char)bVar10);
      bVar10 = (byte)iVar16 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar16 >> 3);
      *param_4 = *param_4 + ((longlong)iVar16 >> 3);
      puVar9 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar10;
    } while (piVar12 != piVar1);
  }
  return;
}



// FUNCTION 1431f15d0 vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,2>,LeafByte> body=390 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,2>,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,2>,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  ulonglong *puVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  
  lVar12 = param_1[2];
  bVar2 = *(byte *)(lVar12 + 0x50);
  iVar5 = *(int *)(lVar12 + 0x34);
  uVar6 = *(uint *)(lVar12 + 0x38);
  iVar7 = *(int *)(lVar12 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar14 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar15 = 0;
  piVar1 = piVar17 + param_5;
  if (piVar17 != piVar1) {
    bVar11 = *(byte *)(param_4 + 1);
    puVar10 = (ulonglong *)*param_4;
    do {
      uVar15 = uVar15 | *puVar10 >> (bVar11 & 0x3f);
      iVar13 = 0x40 - (char)bVar11;
      for (; ((int)(uint)bVar3 <= iVar13 && (piVar17 != piVar1)); piVar17 = piVar17 + 1) {
        bVar8 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar15));
        uVar16 = (uint)bVar8;
        uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar15) * 2);
        uVar15 = uVar15 >> (bVar8 & 0x3f);
        if (uVar4 < 0x8000) {
          lVar12 = *param_1 + (ulonglong)uVar4 * 2;
          bVar8 = 0;
          do {
            uVar9 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar16 = uVar16 + 1;
            lVar12 = lVar12 + (ulonglong)bVar8 * 2;
            bVar8 = *(byte *)((ulonglong)(uVar9 & 1) + lVar12);
          } while (bVar8 < 0x80);
          uVar9 = bVar8 & 0x7f;
        }
        else {
          uVar9 = uVar4 & 0x7fff;
        }
        iVar13 = iVar13 - uVar16;
        *piVar14 = *piVar14 + (uVar9 & uVar6) * iVar7 + iVar5;
        piVar14 = piVar14 + 1;
        *piVar17 = *piVar17 + ((int)uVar9 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
      }
      iVar13 = ((char)param_4[1] - iVar13) + (0x40 - (char)bVar11);
      bVar11 = (byte)iVar13 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar13 >> 3);
      *param_4 = *param_4 + ((longlong)iVar13 >> 3);
      puVar10 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar11;
    } while (piVar17 != piVar1);
  }
  return;
}



// FUNCTION 1431f1760 vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,4>,LeafByte> body=456 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,4>,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,4>,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)(lVar15 + 0x50);
  iVar5 = *(int *)(lVar15 + 0x34);
  uVar6 = *(uint *)(lVar15 + 0x38);
  iVar7 = *(int *)(lVar15 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar17 + param_5;
  uVar8 = 0;
  if (piVar17 != piVar1) {
    bVar14 = *(byte *)(param_4 + 1);
    puVar10 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar10 >> (bVar14 & 0x3f);
      iVar12 = 0x40 - (char)bVar14;
      iVar13 = iVar12;
      if ((int)(uint)bVar3 <= iVar12) {
        do {
          if (piVar17 == piVar1) break;
          bVar14 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar16 = (uint)bVar14;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar14 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar15 = *param_1 + (ulonglong)uVar4 * 2;
            bVar14 = 0;
            do {
              uVar9 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + (ulonglong)bVar14 * 2;
              bVar14 = *(byte *)((ulonglong)(uVar9 & 1) + lVar15);
            } while (bVar14 < 0x80);
            uVar9 = bVar14 & 0x7f;
          }
          else {
            uVar9 = uVar4 & 0x7fff;
          }
          iVar13 = iVar13 - uVar16;
          *piVar11 = *piVar11 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          *piVar17 = *piVar17 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[1] = piVar11[1] + (uVar9 & uVar6) * iVar7 + iVar5;
          piVar11 = piVar11 + 2;
          piVar17[1] = piVar17[1] + ((int)uVar9 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar17 = piVar17 + 2;
        } while ((int)(uint)bVar3 <= iVar13);
      }
      iVar12 = ((char)param_4[1] - iVar13) + iVar12;
      bVar14 = (byte)iVar12 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
      *param_4 = *param_4 + ((longlong)iVar12 >> 3);
      puVar10 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar14;
    } while (piVar17 != piVar1);
  }
  return;
}



// FUNCTION 1431f1930 vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,8>,LeafByte> body=537 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,8>,LeafByte>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,8>,LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)(lVar15 + 0x50);
  iVar5 = *(int *)(lVar15 + 0x34);
  uVar6 = *(uint *)(lVar15 + 0x38);
  iVar7 = *(int *)(lVar15 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar17 + param_5;
  uVar8 = 0;
  if (piVar17 != piVar1) {
    bVar14 = *(byte *)(param_4 + 1);
    puVar10 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar10 >> (bVar14 & 0x3f);
      iVar12 = 0x40 - (char)bVar14;
      iVar13 = iVar12;
      if ((int)(uint)bVar3 <= iVar12) {
        do {
          if (piVar17 == piVar1) break;
          bVar14 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar16 = (uint)bVar14;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar14 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar15 = *param_1 + (ulonglong)uVar4 * 2;
            bVar14 = 0;
            do {
              uVar9 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + (ulonglong)bVar14 * 2;
              bVar14 = *(byte *)((ulonglong)(uVar9 & 1) + lVar15);
            } while (bVar14 < 0x80);
            uVar9 = bVar14 & 0x7f;
          }
          else {
            uVar9 = uVar4 & 0x7fff;
          }
          iVar13 = iVar13 - uVar16;
          *piVar11 = *piVar11 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          *piVar17 = *piVar17 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[1] = piVar11[1] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar17[1] = piVar17[1] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[2] = piVar11[2] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar17[2] = piVar17[2] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[3] = piVar11[3] + (uVar9 & uVar6) * iVar7 + iVar5;
          piVar11 = piVar11 + 4;
          piVar17[3] = piVar17[3] + ((int)uVar9 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar17 = piVar17 + 4;
        } while ((int)(uint)bVar3 <= iVar13);
      }
      iVar12 = ((char)param_4[1] - iVar13) + iVar12;
      bVar14 = (byte)iVar12 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
      *param_4 = *param_4 + ((longlong)iVar12 >> 3);
      puVar10 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar14;
    } while (piVar17 != piVar1);
  }
  return;
}



// FUNCTION 1431f1b50 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,1>,LeafWord> body=355 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,1>,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,1>,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  ulonglong *puVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  
  lVar11 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar4 = *(int *)(lVar11 + 0x34);
  uVar5 = *(uint *)(lVar11 + 0x38);
  iVar6 = *(int *)(lVar11 + 0x3c);
  piVar15 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar13 = 0;
  piVar1 = piVar15 + param_5;
  if (piVar15 != piVar1) {
    bVar10 = *(byte *)(param_4 + 1);
    puVar9 = (ulonglong *)*param_4;
    do {
      uVar13 = uVar13 | *puVar9 >> (bVar10 & 0x3f);
      iVar12 = 0x40 - (char)bVar10;
      for (; ((int)(uint)bVar2 <= iVar12 && (piVar15 != piVar1)); piVar15 = piVar15 + 1) {
        bVar7 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar13));
        uVar14 = (uint)bVar7;
        uVar3 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar13) * 2);
        uVar13 = uVar13 >> (bVar7 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar11 = *param_1 + (ulonglong)uVar3 * 2;
          bVar7 = 0;
          do {
            uVar8 = (uint)uVar13;
            uVar13 = uVar13 >> 1;
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + (ulonglong)bVar7 * 2;
            bVar7 = *(byte *)((ulonglong)(uVar8 & 1) + lVar11);
          } while (bVar7 < 0x80);
          uVar8 = (uint)*(ushort *)(lVar11 + (ulonglong)(bVar7 & 0x7f) * 2);
        }
        else {
          uVar8 = uVar3 & 0x7fff;
        }
        iVar12 = iVar12 - uVar14;
        *piVar15 = *piVar15 + (uVar8 & uVar5) * iVar6 + iVar4;
      }
      iVar12 = ((char)param_4[1] - iVar12) + (0x40 - (char)bVar10);
      bVar10 = (byte)iVar12 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
      *param_4 = *param_4 + ((longlong)iVar12 >> 3);
      puVar9 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar10;
    } while (piVar15 != piVar1);
  }
  return;
}



// FUNCTION 1431f1cc0 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,2>,LeafWord> body=376 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,2>,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,2>,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  
  lVar9 = param_1[2];
  bVar2 = *(byte *)(lVar9 + 0x50);
  iVar5 = *(int *)(lVar9 + 0x34);
  uVar6 = *(uint *)(lVar9 + 0x38);
  iVar7 = *(int *)(lVar9 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar16 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar14 = 0;
  piVar1 = piVar16 + param_5;
  if (piVar16 != piVar1) {
    bVar11 = *(byte *)(param_4 + 1);
    puVar8 = (ulonglong *)*param_4;
    do {
      uVar14 = uVar14 | *puVar8 >> (bVar11 & 0x3f);
      iVar13 = 0x40 - (char)bVar11;
      for (; ((int)(uint)bVar3 <= iVar13 && (piVar16 != piVar1)); piVar16 = piVar16 + 2) {
        bVar10 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar14));
        uVar15 = (uint)bVar10;
        uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar14) * 2);
        uVar14 = uVar14 >> (bVar10 & 0x3f);
        if (uVar4 < 0x8000) {
          bVar10 = 0;
          lVar9 = *param_1 + (ulonglong)uVar4 * 2;
          do {
            uVar12 = (uint)uVar14;
            uVar14 = uVar14 >> 1;
            uVar15 = uVar15 + 1;
            lVar9 = lVar9 + (ulonglong)bVar10 * 2;
            bVar10 = *(byte *)((ulonglong)(uVar12 & 1) + lVar9);
          } while (bVar10 < 0x80);
          uVar12 = (uint)*(ushort *)(lVar9 + (ulonglong)(bVar10 & 0x7f) * 2);
        }
        else {
          uVar12 = uVar4 & 0x7fff;
        }
        iVar13 = iVar13 - uVar15;
        *piVar16 = *piVar16 + (uVar12 & uVar6) * iVar7 + iVar5;
        piVar16[1] = piVar16[1] + ((int)uVar12 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
      }
      iVar13 = ((char)param_4[1] - iVar13) + (0x40 - (char)bVar11);
      bVar11 = (byte)iVar13 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar13 >> 3);
      *param_4 = *param_4 + ((longlong)iVar13 >> 3);
      puVar8 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar11;
    } while (piVar16 != piVar1);
  }
  return;
}



// FUNCTION 1431f1e40 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,4>,LeafWord> body=463 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,4>,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,4>,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  lVar14 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)(lVar14 + 0x34);
  uVar6 = *(uint *)(lVar14 + 0x38);
  bVar3 = *(byte *)(lVar14 + 0x50);
  iVar7 = *(int *)(lVar14 + 0x3c);
  piVar16 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar16 + param_5;
  uVar8 = 0;
  if (piVar16 != piVar1) {
    bVar12 = *(byte *)(param_4 + 1);
    puVar9 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar9 >> (bVar12 & 0x3f);
      iVar10 = 0x40 - (char)bVar12;
      iVar11 = iVar10;
      if ((int)(uint)bVar2 <= iVar10) {
        do {
          if (piVar16 == piVar1) break;
          bVar12 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar15 = (uint)bVar12;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar12 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar14 = *param_1 + (ulonglong)uVar4 * 2;
            bVar12 = 0;
            do {
              uVar13 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar15 = uVar15 + 1;
              lVar14 = lVar14 + (ulonglong)bVar12 * 2;
              bVar12 = *(byte *)((ulonglong)(uVar13 & 1) + lVar14);
            } while (bVar12 < 0x80);
            uVar13 = (uint)*(ushort *)(lVar14 + (ulonglong)(bVar12 & 0x7f) * 2);
          }
          else {
            uVar13 = uVar4 & 0x7fff;
          }
          iVar11 = iVar11 - uVar15;
          *piVar16 = *piVar16 + (uVar13 & uVar6) * iVar7 + iVar5;
          uVar13 = (int)uVar13 >> (bVar3 & 0x1f);
          piVar16[1] = piVar16[1] + (uVar13 & uVar6) * iVar7 + iVar5;
          uVar13 = (int)uVar13 >> (bVar3 & 0x1f);
          piVar16[2] = piVar16[2] + (uVar13 & uVar6) * iVar7 + iVar5;
          piVar16[3] = piVar16[3] + ((int)uVar13 >> (bVar3 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar16 = piVar16 + 4;
        } while ((int)(uint)bVar2 <= iVar11);
      }
      iVar10 = ((char)param_4[1] - iVar11) + iVar10;
      bVar12 = (byte)iVar10 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar10 >> 3);
      *param_4 = *param_4 + ((longlong)iVar10 >> 3);
      puVar9 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar12;
    } while (piVar16 != piVar1);
  }
  return;
}



// FUNCTION 1431f2010 vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,8>,LeafWord> body=548 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,8>,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<MonoPolicy,8>,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *(int *)(lVar15 + 0x34);
  uVar6 = *(uint *)(lVar15 + 0x38);
  bVar3 = *(byte *)(lVar15 + 0x50);
  iVar7 = *(int *)(lVar15 + 0x3c);
  piVar10 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar10 + param_5;
  uVar8 = 0;
  if (piVar10 != piVar1) {
    bVar13 = *(byte *)(param_4 + 1);
    puVar9 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar9 >> (bVar13 & 0x3f);
      iVar11 = 0x40 - (char)bVar13;
      iVar12 = iVar11;
      if ((int)(uint)bVar2 <= iVar11) {
        do {
          if (piVar10 == piVar1) break;
          bVar13 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar16 = (uint)bVar13;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar13 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar15 = *param_1 + (ulonglong)uVar4 * 2;
            bVar13 = 0;
            do {
              uVar14 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + (ulonglong)bVar13 * 2;
              bVar13 = *(byte *)((ulonglong)(uVar14 & 1) + lVar15);
            } while (bVar13 < 0x80);
            uVar14 = (uint)*(ushort *)(lVar15 + (ulonglong)(bVar13 & 0x7f) * 2);
          }
          else {
            uVar14 = uVar4 & 0x7fff;
          }
          iVar12 = iVar12 - uVar16;
          *piVar10 = *piVar10 + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[1] = piVar10[1] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[2] = piVar10[2] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[3] = piVar10[3] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[4] = piVar10[4] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[5] = piVar10[5] + (uVar14 & uVar6) * iVar7 + iVar5;
          uVar14 = (int)uVar14 >> (bVar3 & 0x1f);
          piVar10[6] = piVar10[6] + (uVar14 & uVar6) * iVar7 + iVar5;
          piVar10[7] = piVar10[7] + ((int)uVar14 >> (bVar3 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar10 = piVar10 + 8;
        } while ((int)(uint)bVar2 <= iVar12);
      }
      iVar11 = ((char)param_4[1] - iVar12) + iVar11;
      bVar13 = (byte)iVar11 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar11 >> 3);
      *param_4 = *param_4 + ((longlong)iVar11 >> 3);
      puVar9 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar13;
    } while (piVar10 != piVar1);
  }
  return;
}



// FUNCTION 1431f2240 vorbis_book_decodev_add_t<ExpandEntry1Stereo,LeafWord> body=380 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandEntry1Stereo,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandEntry1Stereo,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar4 = *(int *)(param_1[2] + 0x34);
  iVar5 = *(int *)(param_1[2] + 0x3c);
  piVar12 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar13 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar14 = 0;
  piVar1 = piVar12 + param_5;
  if (piVar12 != piVar1) {
    bVar11 = *(byte *)(param_4 + 1);
    puVar8 = (ulonglong *)*param_4;
    do {
      uVar14 = uVar14 | *puVar8 >> (bVar11 & 0x3f);
      iVar16 = 0x40 - (char)bVar11;
      piVar6 = piVar12;
      while ((piVar12 = piVar6, (int)(uint)bVar2 <= iVar16 && (piVar12 != piVar1))) {
        bVar10 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar14));
        uVar15 = (uint)bVar10;
        uVar3 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar14) * 2);
        uVar14 = uVar14 >> (bVar10 & 0x3f);
        if (uVar3 < 0x8000) {
          bVar10 = 0;
          lVar9 = *param_1 + (ulonglong)uVar3 * 2;
          do {
            uVar7 = (uint)uVar14;
            uVar14 = uVar14 >> 1;
            uVar15 = uVar15 + 1;
            lVar9 = lVar9 + (ulonglong)bVar10 * 2;
            bVar10 = *(byte *)((ulonglong)(uVar7 & 1) + lVar9);
          } while (bVar10 < 0x80);
          uVar7 = (uint)*(ushort *)(lVar9 + (ulonglong)(bVar10 & 0x7f) * 2);
        }
        else {
          uVar7 = uVar3 & 0x7fff;
        }
        iVar16 = iVar16 - uVar15;
        *piVar13 = *piVar13 + uVar7 * iVar5 + iVar4;
        piVar6 = piVar13 + 1;
        piVar13 = piVar12;
      }
      iVar16 = ((char)param_4[1] - iVar16) + (0x40 - (char)bVar11);
      bVar11 = (byte)iVar16 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar16 >> 3);
      *param_4 = *param_4 + ((longlong)iVar16 >> 3);
      puVar8 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar11;
    } while (piVar12 != piVar1);
  }
  return;
}



// FUNCTION 1431f23c0 vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,2>,LeafWord> body=395 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,2>,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,2>,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  
  lVar9 = param_1[2];
  bVar2 = *(byte *)(lVar9 + 0x50);
  iVar5 = *(int *)(lVar9 + 0x34);
  uVar6 = *(uint *)(lVar9 + 0x38);
  iVar7 = *(int *)(lVar9 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar14 = (int *)(*param_2 + (longlong)param_3 * 4);
  uVar15 = 0;
  piVar1 = piVar17 + param_5;
  if (piVar17 != piVar1) {
    bVar11 = *(byte *)(param_4 + 1);
    puVar8 = (ulonglong *)*param_4;
    do {
      uVar15 = uVar15 | *puVar8 >> (bVar11 & 0x3f);
      iVar13 = 0x40 - (char)bVar11;
      for (; ((int)(uint)bVar3 <= iVar13 && (piVar17 != piVar1)); piVar17 = piVar17 + 1) {
        bVar10 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar15));
        uVar16 = (uint)bVar10;
        uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar15) * 2);
        uVar15 = uVar15 >> (bVar10 & 0x3f);
        if (uVar4 < 0x8000) {
          bVar10 = 0;
          lVar9 = *param_1 + (ulonglong)uVar4 * 2;
          do {
            uVar12 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar16 = uVar16 + 1;
            lVar9 = lVar9 + (ulonglong)bVar10 * 2;
            bVar10 = *(byte *)((ulonglong)(uVar12 & 1) + lVar9);
          } while (bVar10 < 0x80);
          uVar12 = (uint)*(ushort *)(lVar9 + (ulonglong)(bVar10 & 0x7f) * 2);
        }
        else {
          uVar12 = uVar4 & 0x7fff;
        }
        iVar13 = iVar13 - uVar16;
        *piVar14 = *piVar14 + (uVar12 & uVar6) * iVar7 + iVar5;
        *piVar17 = *piVar17 + ((int)uVar12 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
        piVar14 = piVar14 + 1;
      }
      iVar13 = ((char)param_4[1] - iVar13) + (0x40 - (char)bVar11);
      bVar11 = (byte)iVar13 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar13 >> 3);
      *param_4 = *param_4 + ((longlong)iVar13 >> 3);
      puVar8 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar11;
    } while (piVar17 != piVar1);
  }
  return;
}



// FUNCTION 1431f2550 vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,4>,LeafWord> body=461 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,4>,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,4>,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)(lVar15 + 0x50);
  iVar5 = *(int *)(lVar15 + 0x34);
  uVar6 = *(uint *)(lVar15 + 0x38);
  iVar7 = *(int *)(lVar15 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar17 + param_5;
  uVar8 = 0;
  if (piVar17 != piVar1) {
    bVar14 = *(byte *)(param_4 + 1);
    puVar10 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar10 >> (bVar14 & 0x3f);
      iVar12 = 0x40 - (char)bVar14;
      iVar13 = iVar12;
      if ((int)(uint)bVar3 <= iVar12) {
        do {
          if (piVar17 == piVar1) break;
          bVar14 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar16 = (uint)bVar14;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar14 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar15 = *param_1 + (ulonglong)uVar4 * 2;
            bVar14 = 0;
            do {
              uVar9 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + (ulonglong)bVar14 * 2;
              bVar14 = *(byte *)((ulonglong)(uVar9 & 1) + lVar15);
            } while (bVar14 < 0x80);
            uVar9 = (uint)*(ushort *)(lVar15 + (ulonglong)(bVar14 & 0x7f) * 2);
          }
          else {
            uVar9 = uVar4 & 0x7fff;
          }
          iVar13 = iVar13 - uVar16;
          *piVar11 = *piVar11 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          *piVar17 = *piVar17 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[1] = piVar11[1] + (uVar9 & uVar6) * iVar7 + iVar5;
          piVar11 = piVar11 + 2;
          piVar17[1] = piVar17[1] + ((int)uVar9 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar17 = piVar17 + 2;
        } while ((int)(uint)bVar3 <= iVar13);
      }
      iVar12 = ((char)param_4[1] - iVar13) + iVar12;
      bVar14 = (byte)iVar12 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
      *param_4 = *param_4 + ((longlong)iVar12 >> 3);
      puVar10 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar14;
    } while (piVar17 != piVar1);
  }
  return;
}



// FUNCTION 1431f2720 vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,8>,LeafWord> body=542 status=ok
// SIG undefined vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,8>,LeafWord>(void)

void vorbis_book_decodev_add_t<ExpandRecursive<StereoPolicy,8>,LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  
  lVar15 = param_1[2];
  bVar2 = *(byte *)(lVar15 + 0x50);
  iVar5 = *(int *)(lVar15 + 0x34);
  uVar6 = *(uint *)(lVar15 + 0x38);
  iVar7 = *(int *)(lVar15 + 0x3c);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  piVar17 = (int *)(param_2[1] + (longlong)param_3 * 4);
  piVar11 = (int *)(*param_2 + (longlong)param_3 * 4);
  piVar1 = piVar17 + param_5;
  uVar8 = 0;
  if (piVar17 != piVar1) {
    bVar14 = *(byte *)(param_4 + 1);
    puVar10 = (ulonglong *)*param_4;
    do {
      uVar8 = uVar8 | *puVar10 >> (bVar14 & 0x3f);
      iVar12 = 0x40 - (char)bVar14;
      iVar13 = iVar12;
      if ((int)(uint)bVar3 <= iVar12) {
        do {
          if (piVar17 == piVar1) break;
          bVar14 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
          uVar16 = (uint)bVar14;
          uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
          uVar8 = uVar8 >> (bVar14 & 0x3f);
          if (uVar4 < 0x8000) {
            lVar15 = *param_1 + (ulonglong)uVar4 * 2;
            bVar14 = 0;
            do {
              uVar9 = (uint)uVar8;
              uVar8 = uVar8 >> 1;
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + (ulonglong)bVar14 * 2;
              bVar14 = *(byte *)((ulonglong)(uVar9 & 1) + lVar15);
            } while (bVar14 < 0x80);
            uVar9 = (uint)*(ushort *)(lVar15 + (ulonglong)(bVar14 & 0x7f) * 2);
          }
          else {
            uVar9 = uVar4 & 0x7fff;
          }
          iVar13 = iVar13 - uVar16;
          *piVar11 = *piVar11 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          *piVar17 = *piVar17 + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[1] = piVar11[1] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar17[1] = piVar17[1] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[2] = piVar11[2] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar17[2] = piVar17[2] + (uVar9 & uVar6) * iVar7 + iVar5;
          uVar9 = (int)uVar9 >> (bVar2 & 0x1f);
          piVar11[3] = piVar11[3] + (uVar9 & uVar6) * iVar7 + iVar5;
          piVar11 = piVar11 + 4;
          piVar17[3] = piVar17[3] + ((int)uVar9 >> (bVar2 & 0x1f) & uVar6) * iVar7 + iVar5;
          piVar17 = piVar17 + 4;
        } while ((int)(uint)bVar3 <= iVar13);
      }
      iVar12 = ((char)param_4[1] - iVar13) + iVar12;
      bVar14 = (byte)iVar12 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar12 >> 3);
      *param_4 = *param_4 + ((longlong)iVar12 >> 3);
      puVar10 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar14;
    } while (piVar17 != piVar1);
  }
  return;
}



// FUNCTION 1431f2940 vorbis_book_decodev_add_SIMD_2<LeafByte> body=575 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_2<LeafByte>(void)

void vorbis_book_decodev_add_SIMD_2<LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  byte bVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  int iVar30;
  ulonglong uVar31;
  int iVar32;
  undefined1 auVar34 [16];
  undefined1 auVar33 [12];
  undefined1 auVar35 [16];
  
  piVar29 = (int *)param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  uVar31 = (ulonglong)param_3;
  iVar13 = piVar29[0x14];
  param_5 = param_5 + param_3;
  iVar4 = piVar29[0xc];
  iVar5 = *piVar29;
  iVar6 = piVar29[1];
  iVar7 = piVar29[2];
  iVar8 = piVar29[3];
  auVar1 = *(undefined1 (*) [16])(piVar29 + 4);
  iVar14 = piVar29[8];
  sVar9 = *(short *)((longlong)piVar29 + 0x22);
  iVar15 = piVar29[9];
  sVar10 = *(short *)((longlong)piVar29 + 0x26);
  iVar16 = piVar29[10];
  sVar11 = *(short *)((longlong)piVar29 + 0x2a);
  iVar17 = piVar29[0xb];
  sVar12 = *(short *)((longlong)piVar29 + 0x2e);
  uVar18 = 0;
  piVar29 = (int *)(*param_2 + uVar31 * 4);
  if (param_3 < param_5) {
    bVar23 = *(byte *)(param_4 + 1);
    puVar21 = (ulonglong *)*param_4;
    do {
      uVar18 = uVar18 | *puVar21 >> (bVar23 & 0x3f);
      iVar22 = 0x40 - (char)bVar23;
      while ((iVar30 = (int)uVar31, (int)((uint)bVar2 * 2) <= iVar22 && (iVar30 < param_5))) {
        lVar25 = *param_1;
        uVar31 = (ulonglong)*(ushort *)(param_1 + 3) & uVar18 & 0xffffffff;
        bVar19 = *(byte *)(uVar31 + param_1[1]);
        uVar26 = (uint)bVar19;
        uVar3 = *(ushort *)(lVar25 + uVar31 * 2);
        uVar18 = uVar18 >> (bVar19 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar24 = lVar25 + (ulonglong)uVar3 * 2;
          bVar19 = 0;
          do {
            uVar28 = (uint)uVar18;
            uVar18 = uVar18 >> 1;
            uVar26 = uVar26 + 1;
            lVar24 = lVar24 + (ulonglong)bVar19 * 2;
            bVar19 = *(byte *)((ulonglong)(uVar28 & 1) + lVar24);
          } while (bVar19 < 0x80);
          uVar28 = bVar19 & 0x7f;
        }
        else {
          uVar28 = uVar3 & 0x7fff;
        }
        uVar31 = (ulonglong)*(ushort *)(param_1 + 3) & uVar18 & 0xffffffff;
        bVar19 = *(byte *)(uVar31 + param_1[1]);
        uVar27 = (uint)bVar19;
        uVar3 = *(ushort *)(lVar25 + uVar31 * 2);
        uVar18 = uVar18 >> (bVar19 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar25 = lVar25 + (ulonglong)uVar3 * 2;
          bVar19 = 0;
          do {
            uVar20 = (uint)uVar18;
            uVar18 = uVar18 >> 1;
            uVar27 = uVar27 + 1;
            lVar25 = lVar25 + (ulonglong)bVar19 * 2;
            bVar19 = *(byte *)((ulonglong)(uVar20 & 1) + lVar25);
          } while (bVar19 < 0x80);
          uVar20 = bVar19 & 0x7f;
        }
        else {
          uVar20 = uVar3 & 0x7fff;
        }
        iVar22 = (iVar22 - uVar26) - uVar27;
        uVar28 = uVar20 << ((char)iVar13 * '\x02' & 0x1fU) | uVar28;
        auVar34._4_4_ = uVar28;
        auVar34._0_4_ = uVar28;
        auVar34._8_4_ = uVar28;
        auVar34._12_4_ = uVar28;
        auVar34 = auVar34 & auVar1;
        iVar32 = CONCAT22(auVar34._2_2_ * sVar9,auVar34._0_2_ * (short)iVar14);
        auVar33._0_8_ =
             CONCAT26(auVar34._6_2_ * sVar10,CONCAT24(auVar34._4_2_ * (short)iVar15,iVar32));
        auVar33._8_2_ = auVar34._8_2_ * (short)iVar16;
        auVar33._10_2_ = auVar34._10_2_ * sVar11;
        auVar35._12_2_ = auVar34._12_2_ * (short)iVar17;
        auVar35._0_12_ = auVar33;
        auVar35._14_2_ = auVar34._14_2_ * sVar12;
        *piVar29 = (iVar32 >> iVar4) + iVar5 + *piVar29;
        piVar29[1] = ((int)((ulonglong)auVar33._0_8_ >> 0x20) >> iVar4) + iVar6 + piVar29[1];
        piVar29[2] = (auVar33._8_4_ >> iVar4) + iVar7 + piVar29[2];
        piVar29[3] = (auVar35._12_4_ >> iVar4) + iVar8 + piVar29[3];
        piVar29 = piVar29 + 4;
        uVar31 = (ulonglong)(iVar30 + 4);
      }
      iVar22 = ((char)param_4[1] - iVar22) + (0x40 - (char)bVar23);
      bVar23 = (byte)iVar22 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar22 >> 3);
      *param_4 = *param_4 + ((longlong)iVar22 >> 3);
      puVar21 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar23;
    } while (iVar30 < param_5);
  }
  return;
}



// FUNCTION 1431f2b80 vorbis_book_decodev_add_SIMD_4<LeafByte> body=399 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_4<LeafByte>(void)

void vorbis_book_decodev_add_SIMD_4<LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  ulonglong *puVar19;
  int iVar20;
  ulonglong uVar21;
  int *piVar22;
  int iVar23;
  byte bVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  
  piVar22 = (int *)param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *piVar22;
  iVar6 = piVar22[1];
  iVar7 = piVar22[2];
  iVar8 = piVar22[3];
  auVar1 = *(undefined1 (*) [16])(piVar22 + 4);
  iVar12 = piVar22[8];
  iVar13 = piVar22[9];
  iVar14 = piVar22[10];
  sVar9 = *(short *)((longlong)piVar22 + 0x2a);
  iVar15 = piVar22[0xb];
  sVar10 = *(short *)((longlong)piVar22 + 0x2e);
  iVar4 = piVar22[0xc];
  uVar16 = 0;
  uVar21 = (ulonglong)param_3;
  param_5 = param_5 + param_3;
  piVar22 = (int *)(*param_2 + uVar21 * 4);
  if (param_3 < param_5) {
    bVar24 = *(byte *)(param_4 + 1);
    puVar19 = (ulonglong *)*param_4;
    do {
      uVar16 = uVar16 | *puVar19 >> (bVar24 & 0x3f);
      iVar23 = 0x40 - (char)bVar24;
      while ((iVar20 = (int)uVar21, (int)(uint)bVar2 <= iVar23 && (iVar20 < param_5))) {
        bVar17 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar16));
        uVar26 = (uint)bVar17;
        uVar3 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar16) * 2);
        uVar16 = uVar16 >> (bVar17 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar25 = *param_1 + (ulonglong)uVar3 * 2;
          bVar17 = 0;
          do {
            uVar18 = (uint)uVar16;
            uVar16 = uVar16 >> 1;
            uVar26 = uVar26 + 1;
            lVar25 = lVar25 + (ulonglong)bVar17 * 2;
            bVar17 = *(byte *)((ulonglong)(uVar18 & 1) + lVar25);
          } while (bVar17 < 0x80);
          uVar18 = bVar17 & 0x7f;
        }
        else {
          uVar18 = uVar3 & 0x7fff;
        }
        iVar23 = iVar23 - uVar26;
        auVar27._4_4_ = uVar18;
        auVar27._0_4_ = uVar18;
        auVar27._8_4_ = uVar18;
        auVar27._12_4_ = uVar18;
        auVar27 = auVar27 & auVar1;
        iVar11 = CONCAT22(auVar27._10_2_ * sVar9,auVar27._8_2_ * (short)iVar14);
        *piVar22 = ((int)(uint)(ushort)(auVar27._0_2_ * (short)iVar12) >> iVar4) + iVar5 + *piVar22;
        piVar22[1] = ((int)(uint)(ushort)(auVar27._4_2_ * (short)iVar13) >> iVar4) + iVar6 +
                     piVar22[1];
        piVar22[2] = (iVar11 >> iVar4) + iVar7 + piVar22[2];
        piVar22[3] = ((int)(CONCAT26(auVar27._14_2_ * sVar10,
                                     CONCAT24(auVar27._12_2_ * (short)iVar15,iVar11)) >> 0x20) >>
                     iVar4) + iVar8 + piVar22[3];
        piVar22 = piVar22 + 4;
        uVar21 = (ulonglong)(iVar20 + 4);
      }
      iVar23 = ((char)param_4[1] - iVar23) + (0x40 - (char)bVar24);
      bVar24 = (byte)iVar23 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar23 >> 3);
      *param_4 = *param_4 + ((longlong)iVar23 >> 3);
      puVar19 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar24;
    } while (iVar20 < param_5);
  }
  return;
}



// FUNCTION 1431f2d10 FUN_1431f2d10 body=304 status=ok
// SIG undefined FUN_1431f2d10(void)

void FUN_1431f2d10(longlong *param_1,undefined8 param_2,int param_3,longlong *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong *puVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar3 = 0;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  param_5 = param_5 + param_3;
  if (param_3 < param_5) {
    bVar7 = *(byte *)(param_4 + 1);
    puVar6 = (ulonglong *)*param_4;
    iVar12 = *(int *)((longlong)param_4 + 0xc);
    do {
      uVar3 = uVar3 | *puVar6 >> (bVar7 & 0x3f);
      iVar10 = 0x40 - (char)bVar7;
      iVar11 = iVar10;
      for (; ((int)(uint)bVar1 <= iVar11 && (param_3 < param_5)); param_3 = param_3 + 8) {
        bVar4 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar3));
        uVar9 = (uint)bVar4;
        uVar2 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar3) * 2);
        uVar3 = uVar3 >> (bVar4 & 0x3f);
        if (uVar2 < 0x8000) {
          lVar8 = *param_1 + (ulonglong)uVar2 * 2;
          bVar4 = 0;
          do {
            uVar5 = (uint)uVar3;
            uVar3 = uVar3 >> 1;
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + (ulonglong)bVar4 * 2;
            bVar4 = *(byte *)((ulonglong)(uVar5 & 1) + lVar8);
          } while (bVar4 < 0x80);
        }
        iVar11 = iVar11 - uVar9;
      }
      iVar10 = ((char)bVar7 - iVar11) + iVar10;
      bVar7 = (byte)iVar10 & 7;
      iVar12 = iVar12 - (iVar10 >> 3);
      *(byte *)(param_4 + 1) = bVar7;
      *param_4 = *param_4 + ((longlong)iVar10 >> 3);
      puVar6 = (ulonglong *)*param_4;
      *(int *)((longlong)param_4 + 0xc) = iVar12;
    } while (param_3 < param_5);
  }
  return;
}



// FUNCTION 1431f2e40 vorbis_book_decodev_add_SIMD_4_2ch<LeafByte> body=619 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_4_2ch<LeafByte>(void)

void vorbis_book_decodev_add_SIMD_4_2ch<LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  byte bVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int *local_res8;
  
  piVar27 = (int *)param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  iVar5 = *piVar27;
  iVar6 = piVar27[1];
  iVar7 = piVar27[2];
  iVar8 = piVar27[3];
  auVar1 = *(undefined1 (*) [16])(piVar27 + 4);
  iVar4 = piVar27[0xc];
  uVar29 = (ulonglong)param_3;
  param_5 = param_5 + param_3;
  iVar13 = piVar27[8];
  iVar14 = piVar27[9];
  iVar15 = piVar27[10];
  sVar9 = *(short *)((longlong)piVar27 + 0x2a);
  iVar16 = piVar27[0xb];
  sVar10 = *(short *)((longlong)piVar27 + 0x2e);
  uVar17 = 0;
  piVar27 = (int *)(*param_2 + uVar29 * 4);
  local_res8 = (int *)(param_2[1] + uVar29 * 4);
  if (param_3 < param_5) {
    bVar23 = *(byte *)(param_4 + 1);
    puVar21 = (ulonglong *)*param_4;
    do {
      uVar17 = uVar17 | *puVar21 >> (bVar23 & 0x3f);
      iVar22 = 0x40 - (char)bVar23;
      while ((iVar28 = (int)uVar29, (int)((uint)bVar2 * 2) <= iVar22 && (iVar28 < param_5))) {
        lVar25 = *param_1;
        uVar29 = (ulonglong)*(ushort *)(param_1 + 3) & uVar17 & 0xffffffff;
        bVar18 = *(byte *)(uVar29 + param_1[1]);
        uVar26 = (uint)bVar18;
        uVar3 = *(ushort *)(lVar25 + uVar29 * 2);
        uVar17 = uVar17 >> (bVar18 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar24 = lVar25 + (ulonglong)uVar3 * 2;
          bVar18 = 0;
          do {
            uVar19 = (uint)uVar17;
            uVar17 = uVar17 >> 1;
            uVar26 = uVar26 + 1;
            lVar24 = lVar24 + (ulonglong)bVar18 * 2;
            bVar18 = *(byte *)((ulonglong)(uVar19 & 1) + lVar24);
          } while (bVar18 < 0x80);
          uVar19 = bVar18 & 0x7f;
        }
        else {
          uVar19 = uVar3 & 0x7fff;
        }
        auVar31._4_4_ = uVar19;
        auVar31._0_4_ = uVar19;
        auVar31._8_4_ = uVar19;
        auVar31._12_4_ = uVar19;
        auVar31 = auVar31 & auVar1;
        uVar29 = (ulonglong)*(ushort *)(param_1 + 3) & uVar17 & 0xffffffff;
        iVar11 = CONCAT22(auVar31._10_2_ * sVar9,auVar31._8_2_ * (short)iVar15);
        bVar18 = *(byte *)(uVar29 + param_1[1]);
        uVar19 = (uint)bVar18;
        uVar3 = *(ushort *)(lVar25 + uVar29 * 2);
        uVar17 = uVar17 >> (bVar18 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar25 = lVar25 + (ulonglong)uVar3 * 2;
          bVar18 = 0;
          do {
            uVar20 = (uint)uVar17;
            uVar17 = uVar17 >> 1;
            uVar19 = uVar19 + 1;
            lVar25 = lVar25 + (ulonglong)bVar18 * 2;
            bVar18 = *(byte *)((ulonglong)(uVar20 & 1) + lVar25);
          } while (bVar18 < 0x80);
          uVar20 = bVar18 & 0x7f;
        }
        else {
          uVar20 = uVar3 & 0x7fff;
        }
        iVar22 = (iVar22 - uVar26) - uVar19;
        auVar30._4_4_ = uVar20;
        auVar30._0_4_ = uVar20;
        auVar30._8_4_ = uVar20;
        auVar30._12_4_ = uVar20;
        auVar30 = auVar30 & auVar1;
        iVar12 = CONCAT22(auVar30._10_2_ * sVar9,auVar30._8_2_ * (short)iVar15);
        *piVar27 = *piVar27 + ((int)(uint)(ushort)(auVar31._0_2_ * (short)iVar13) >> iVar4) + iVar5;
        piVar27[1] = piVar27[1] + (iVar11 >> iVar4) + iVar7;
        piVar27[2] = piVar27[2] +
                     ((int)(uint)(ushort)(auVar30._0_2_ * (short)iVar13) >> iVar4) + iVar5;
        piVar27[3] = piVar27[3] + (iVar12 >> iVar4) + iVar7;
        piVar27 = piVar27 + 4;
        *local_res8 = *local_res8 +
                      ((int)(uint)(ushort)(auVar31._4_2_ * (short)iVar14) >> iVar4) + iVar6;
        local_res8[1] =
             local_res8[1] +
             ((int)(CONCAT26(auVar31._14_2_ * sVar10,CONCAT24(auVar31._12_2_ * (short)iVar16,iVar11)
                            ) >> 0x20) >> iVar4) + iVar8;
        local_res8[2] =
             local_res8[2] + ((int)(uint)(ushort)(auVar30._4_2_ * (short)iVar14) >> iVar4) + iVar6;
        local_res8[3] =
             local_res8[3] +
             ((int)(CONCAT26(auVar30._14_2_ * sVar10,CONCAT24(auVar30._12_2_ * (short)iVar16,iVar12)
                            ) >> 0x20) >> iVar4) + iVar8;
        local_res8 = local_res8 + 4;
        uVar29 = (ulonglong)(iVar28 + 4);
      }
      iVar22 = ((char)param_4[1] - iVar22) + (0x40 - (char)bVar23);
      bVar23 = (byte)iVar22 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar22 >> 3);
      *param_4 = *param_4 + ((longlong)iVar22 >> 3);
      puVar21 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar23;
    } while (iVar28 < param_5);
  }
  return;
}



// FUNCTION 1431f30b0 vorbis_book_decodev_add_SIMD_8_2ch<LeafByte> body=489 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_8_2ch<LeafByte>(void)

void vorbis_book_decodev_add_SIMD_8_2ch<LeafByte>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  ulonglong uVar23;
  byte bVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  int iVar30;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar31 [12];
  undefined1 auVar33 [16];
  
  piVar28 = (int *)param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  uVar18 = 0;
  uVar23 = (ulonglong)param_3;
  bVar3 = *(byte *)(piVar28 + 0x14);
  param_5 = param_5 + param_3;
  iVar5 = *piVar28;
  iVar6 = piVar28[1];
  iVar7 = piVar28[2];
  iVar8 = piVar28[3];
  auVar1 = *(undefined1 (*) [16])(piVar28 + 4);
  iVar14 = piVar28[8];
  sVar9 = *(short *)((longlong)piVar28 + 0x22);
  iVar15 = piVar28[9];
  sVar10 = *(short *)((longlong)piVar28 + 0x26);
  iVar16 = piVar28[10];
  sVar11 = *(short *)((longlong)piVar28 + 0x2a);
  iVar17 = piVar28[0xb];
  sVar12 = *(short *)((longlong)piVar28 + 0x2e);
  piVar28 = (int *)(*param_2 + uVar23 * 4);
  piVar29 = (int *)(param_2[1] + uVar23 * 4);
  if (param_3 < param_5) {
    bVar24 = *(byte *)(param_4 + 1);
    puVar21 = (ulonglong *)*param_4;
    do {
      uVar18 = uVar18 | *puVar21 >> (bVar24 & 0x3f);
      iVar27 = 0x40 - (char)bVar24;
      while ((iVar22 = (int)uVar23, (int)(uint)bVar2 <= iVar27 && (iVar22 < param_5))) {
        bVar19 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar18));
        uVar26 = (uint)bVar19;
        uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar18) * 2);
        uVar18 = uVar18 >> (bVar19 & 0x3f);
        if (uVar4 < 0x8000) {
          lVar25 = *param_1 + (ulonglong)uVar4 * 2;
          bVar19 = 0;
          do {
            uVar20 = (uint)uVar18;
            uVar18 = uVar18 >> 1;
            uVar26 = uVar26 + 1;
            lVar25 = lVar25 + (ulonglong)bVar19 * 2;
            bVar19 = *(byte *)((ulonglong)(uVar20 & 1) + lVar25);
          } while (bVar19 < 0x80);
          uVar20 = bVar19 & 0x7f;
        }
        else {
          uVar20 = uVar4 & 0x7fff;
        }
        iVar27 = iVar27 - uVar26;
        auVar34._4_4_ = uVar20;
        auVar34._0_4_ = uVar20;
        auVar34._8_4_ = uVar20;
        auVar34._12_4_ = uVar20;
        auVar34 = auVar34 & auVar1;
        uVar20 = uVar20 >> ((bVar3 & 7) << 2);
        iVar13 = CONCAT22(auVar34._10_2_ * sVar11,auVar34._8_2_ * (short)iVar16);
        auVar32._4_4_ = uVar20;
        auVar32._0_4_ = uVar20;
        auVar32._8_4_ = uVar20;
        auVar32._12_4_ = uVar20;
        auVar32 = auVar32 & auVar1;
        iVar30 = CONCAT22(auVar32._2_2_ * sVar9,auVar32._0_2_ * (short)iVar14);
        auVar31._0_8_ =
             CONCAT26(auVar32._6_2_ * sVar10,CONCAT24(auVar32._4_2_ * (short)iVar15,iVar30));
        auVar31._8_2_ = auVar32._8_2_ * (short)iVar16;
        auVar31._10_2_ = auVar32._10_2_ * sVar11;
        auVar33._12_2_ = auVar32._12_2_ * (short)iVar17;
        auVar33._0_12_ = auVar31;
        auVar33._14_2_ = auVar32._14_2_ * sVar12;
        *piVar28 = *piVar28 + (uint)(ushort)(auVar34._0_2_ * (short)iVar14) + iVar5;
        piVar28[1] = piVar28[1] + iVar13 + iVar7;
        piVar28[2] = piVar28[2] + iVar30 + iVar5;
        piVar28[3] = piVar28[3] + auVar31._8_4_ + iVar7;
        piVar28 = piVar28 + 4;
        *piVar29 = *piVar29 + (uint)(ushort)(auVar34._4_2_ * (short)iVar15) + iVar6;
        piVar29[1] = piVar29[1] +
                     (int)(CONCAT26(auVar34._14_2_ * sVar12,
                                    CONCAT24(auVar34._12_2_ * (short)iVar17,iVar13)) >> 0x20) +
                     iVar8;
        piVar29[2] = piVar29[2] + (int)((ulonglong)auVar31._0_8_ >> 0x20) + iVar6;
        piVar29[3] = piVar29[3] + auVar33._12_4_ + iVar8;
        piVar29 = piVar29 + 4;
        uVar23 = (ulonglong)(iVar22 + 4);
      }
      iVar27 = ((char)param_4[1] - iVar27) + (0x40 - (char)bVar24);
      bVar24 = (byte)iVar27 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar27 >> 3);
      *param_4 = *param_4 + ((longlong)iVar27 >> 3);
      puVar21 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar24;
    } while (iVar22 < param_5);
  }
  return;
}



// FUNCTION 1431f32a0 vorbis_book_decodev_add_SIMD_2<LeafWord> body=580 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_2<LeafWord>(void)

void vorbis_book_decodev_add_SIMD_2<LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  byte bVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  int iVar30;
  ulonglong uVar31;
  int iVar32;
  undefined1 auVar34 [16];
  undefined1 auVar33 [12];
  undefined1 auVar35 [16];
  
  piVar29 = (int *)param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  uVar31 = (ulonglong)param_3;
  iVar13 = piVar29[0x14];
  param_5 = param_5 + param_3;
  iVar4 = piVar29[0xc];
  iVar5 = *piVar29;
  iVar6 = piVar29[1];
  iVar7 = piVar29[2];
  iVar8 = piVar29[3];
  auVar1 = *(undefined1 (*) [16])(piVar29 + 4);
  iVar14 = piVar29[8];
  sVar9 = *(short *)((longlong)piVar29 + 0x22);
  iVar15 = piVar29[9];
  sVar10 = *(short *)((longlong)piVar29 + 0x26);
  iVar16 = piVar29[10];
  sVar11 = *(short *)((longlong)piVar29 + 0x2a);
  iVar17 = piVar29[0xb];
  sVar12 = *(short *)((longlong)piVar29 + 0x2e);
  uVar18 = 0;
  piVar29 = (int *)(*param_2 + uVar31 * 4);
  if (param_3 < param_5) {
    bVar23 = *(byte *)(param_4 + 1);
    puVar21 = (ulonglong *)*param_4;
    do {
      uVar18 = uVar18 | *puVar21 >> (bVar23 & 0x3f);
      iVar22 = 0x40 - (char)bVar23;
      while ((iVar30 = (int)uVar31, (int)((uint)bVar2 * 2) <= iVar22 && (iVar30 < param_5))) {
        lVar25 = *param_1;
        uVar31 = (ulonglong)*(ushort *)(param_1 + 3) & uVar18 & 0xffffffff;
        bVar19 = *(byte *)(uVar31 + param_1[1]);
        uVar26 = (uint)bVar19;
        uVar3 = *(ushort *)(lVar25 + uVar31 * 2);
        uVar18 = uVar18 >> (bVar19 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar24 = lVar25 + (ulonglong)uVar3 * 2;
          bVar19 = 0;
          do {
            uVar28 = (uint)uVar18;
            uVar18 = uVar18 >> 1;
            uVar26 = uVar26 + 1;
            lVar24 = lVar24 + (ulonglong)bVar19 * 2;
            bVar19 = *(byte *)((ulonglong)(uVar28 & 1) + lVar24);
          } while (bVar19 < 0x80);
          uVar28 = (uint)*(ushort *)(lVar24 + (ulonglong)(bVar19 & 0x7f) * 2);
        }
        else {
          uVar28 = uVar3 & 0x7fff;
        }
        uVar31 = (ulonglong)*(ushort *)(param_1 + 3) & uVar18 & 0xffffffff;
        bVar19 = *(byte *)(uVar31 + param_1[1]);
        uVar27 = (uint)bVar19;
        uVar3 = *(ushort *)(lVar25 + uVar31 * 2);
        uVar18 = uVar18 >> (bVar19 & 0x3f);
        if (uVar3 < 0x8000) {
          lVar25 = lVar25 + (ulonglong)uVar3 * 2;
          bVar19 = 0;
          do {
            uVar20 = (uint)uVar18;
            uVar18 = uVar18 >> 1;
            uVar27 = uVar27 + 1;
            lVar25 = lVar25 + (ulonglong)bVar19 * 2;
            bVar19 = *(byte *)((ulonglong)(uVar20 & 1) + lVar25);
          } while (bVar19 < 0x80);
          uVar20 = (uint)*(ushort *)(lVar25 + (ulonglong)(bVar19 & 0x7f) * 2);
        }
        else {
          uVar20 = uVar3 & 0x7fff;
        }
        iVar22 = (iVar22 - uVar26) - uVar27;
        uVar28 = uVar20 << ((char)iVar13 * '\x02' & 0x1fU) | uVar28;
        auVar34._4_4_ = uVar28;
        auVar34._0_4_ = uVar28;
        auVar34._8_4_ = uVar28;
        auVar34._12_4_ = uVar28;
        auVar34 = auVar34 & auVar1;
        iVar32 = CONCAT22(auVar34._2_2_ * sVar9,auVar34._0_2_ * (short)iVar14);
        auVar33._0_8_ =
             CONCAT26(auVar34._6_2_ * sVar10,CONCAT24(auVar34._4_2_ * (short)iVar15,iVar32));
        auVar33._8_2_ = auVar34._8_2_ * (short)iVar16;
        auVar33._10_2_ = auVar34._10_2_ * sVar11;
        auVar35._12_2_ = auVar34._12_2_ * (short)iVar17;
        auVar35._0_12_ = auVar33;
        auVar35._14_2_ = auVar34._14_2_ * sVar12;
        *piVar29 = (iVar32 >> iVar4) + iVar5 + *piVar29;
        piVar29[1] = ((int)((ulonglong)auVar33._0_8_ >> 0x20) >> iVar4) + iVar6 + piVar29[1];
        piVar29[2] = (auVar33._8_4_ >> iVar4) + iVar7 + piVar29[2];
        piVar29[3] = (auVar35._12_4_ >> iVar4) + iVar8 + piVar29[3];
        piVar29 = piVar29 + 4;
        uVar31 = (ulonglong)(iVar30 + 4);
      }
      iVar22 = ((char)param_4[1] - iVar22) + (0x40 - (char)bVar23);
      bVar23 = (byte)iVar22 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar22 >> 3);
      *param_4 = *param_4 + ((longlong)iVar22 >> 3);
      puVar21 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar23;
    } while (iVar30 < param_5);
  }
  return;
}



// FUNCTION 1431f34f0 vorbis_book_decodev_add_SIMD_4<LeafWord> body=384 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_4<LeafWord>(void)

void vorbis_book_decodev_add_SIMD_4<LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ushort uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  
  piVar23 = (int *)param_1[2];
  uVar26 = 0;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  uVar22 = (ulonglong)param_3;
  iVar3 = *piVar23;
  iVar4 = piVar23[1];
  iVar5 = piVar23[2];
  iVar6 = piVar23[3];
  param_5 = param_5 + param_3;
  uVar7 = *(ushort *)(piVar23 + 4);
  uVar8 = *(ushort *)(piVar23 + 5);
  uVar9 = *(ushort *)(piVar23 + 6);
  uVar10 = *(ushort *)(piVar23 + 7);
  iVar11 = piVar23[8];
  iVar12 = piVar23[9];
  iVar13 = piVar23[10];
  iVar14 = piVar23[0xb];
  iVar2 = piVar23[0xc];
  piVar23 = (int *)(*param_2 + uVar22 * 4);
  if (param_3 < param_5) {
    bVar19 = *(byte *)(param_4 + 1);
    puVar16 = (ulonglong *)*param_4;
    do {
      uVar26 = uVar26 | *puVar16 >> (bVar19 & 0x3f);
      iVar24 = 0x40 - (char)bVar19;
      while ((iVar21 = (int)uVar22, (int)(uint)bVar1 <= iVar24 && (iVar21 < param_5))) {
        bVar18 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar26));
        uVar25 = (uint)bVar18;
        uVar15 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar26) * 2);
        uVar26 = uVar26 >> (bVar18 & 0x3f);
        if (uVar15 < 0x8000) {
          bVar18 = 0;
          lVar17 = *param_1 + (ulonglong)uVar15 * 2;
          do {
            uVar20 = (uint)uVar26;
            uVar26 = uVar26 >> 1;
            uVar25 = uVar25 + 1;
            lVar17 = lVar17 + (ulonglong)bVar18 * 2;
            bVar18 = *(byte *)((ulonglong)(uVar20 & 1) + lVar17);
          } while (bVar18 < 0x80);
          uVar15 = *(ushort *)(lVar17 + (ulonglong)(bVar18 & 0x7f) * 2);
        }
        else {
          uVar15 = uVar15 & 0x7fff;
        }
        iVar24 = iVar24 - uVar25;
        *piVar23 = ((int)(uint)(ushort)((uVar15 & uVar7) * (short)iVar11) >> iVar2) + iVar3 +
                   *piVar23;
        piVar23[1] = ((int)(uint)(ushort)((uVar15 & uVar8) * (short)iVar12) >> iVar2) + iVar4 +
                     piVar23[1];
        piVar23[2] = ((int)(uint)(ushort)((uVar15 & uVar9) * (short)iVar13) >> iVar2) + iVar5 +
                     piVar23[2];
        piVar23[3] = ((int)(uint)(ushort)((uVar15 & uVar10) * (short)iVar14) >> iVar2) + iVar6 +
                     piVar23[3];
        piVar23 = piVar23 + 4;
        uVar22 = (ulonglong)(iVar21 + 4);
      }
      iVar24 = ((char)param_4[1] - iVar24) + (0x40 - (char)bVar19);
      bVar19 = (byte)iVar24 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar24 >> 3);
      *param_4 = *param_4 + ((longlong)iVar24 >> 3);
      puVar16 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar19;
    } while (iVar21 < param_5);
  }
  return;
}



// FUNCTION 1431f3670 vorbis_book_decodev_add_SIMD_4_2ch<LeafWord> body=624 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_4_2ch<LeafWord>(void)

void vorbis_book_decodev_add_SIMD_4_2ch<LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  ulonglong *puVar20;
  int iVar21;
  byte bVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  ulonglong uVar29;
  int *local_res8;
  
  piVar27 = (int *)param_1[2];
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  iVar3 = *piVar27;
  iVar4 = piVar27[1];
  iVar5 = piVar27[2];
  iVar6 = piVar27[3];
  uVar7 = *(ushort *)(piVar27 + 4);
  uVar8 = *(ushort *)(piVar27 + 5);
  uVar9 = *(ushort *)(piVar27 + 6);
  uVar10 = *(ushort *)(piVar27 + 7);
  iVar2 = piVar27[0xc];
  uVar29 = (ulonglong)param_3;
  param_5 = param_5 + param_3;
  iVar11 = piVar27[8];
  iVar12 = piVar27[9];
  iVar13 = piVar27[10];
  iVar14 = piVar27[0xb];
  uVar15 = 0;
  piVar27 = (int *)(*param_2 + uVar29 * 4);
  local_res8 = (int *)(param_2[1] + uVar29 * 4);
  if (param_3 < param_5) {
    bVar22 = *(byte *)(param_4 + 1);
    puVar20 = (ulonglong *)*param_4;
    do {
      uVar15 = uVar15 | *puVar20 >> (bVar22 & 0x3f);
      iVar21 = 0x40 - (char)bVar22;
      while ((iVar28 = (int)uVar29, (int)((uint)bVar1 * 2) <= iVar21 && (iVar28 < param_5))) {
        lVar24 = *param_1;
        uVar29 = (ulonglong)*(ushort *)(param_1 + 3) & uVar15 & 0xffffffff;
        bVar16 = *(byte *)(uVar29 + param_1[1]);
        uVar25 = (uint)bVar16;
        uVar17 = *(ushort *)(lVar24 + uVar29 * 2);
        uVar15 = uVar15 >> (bVar16 & 0x3f);
        if (uVar17 < 0x8000) {
          lVar23 = lVar24 + (ulonglong)uVar17 * 2;
          bVar16 = 0;
          do {
            uVar26 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar25 = uVar25 + 1;
            lVar23 = lVar23 + (ulonglong)bVar16 * 2;
            bVar16 = *(byte *)((ulonglong)(uVar26 & 1) + lVar23);
          } while (bVar16 < 0x80);
          uVar17 = *(ushort *)(lVar23 + (ulonglong)(bVar16 & 0x7f) * 2);
        }
        else {
          uVar17 = uVar17 & 0x7fff;
        }
        uVar29 = (ulonglong)*(ushort *)(param_1 + 3) & uVar15 & 0xffffffff;
        bVar16 = *(byte *)(uVar29 + param_1[1]);
        uVar26 = (uint)bVar16;
        uVar18 = *(ushort *)(lVar24 + uVar29 * 2);
        uVar15 = uVar15 >> (bVar16 & 0x3f);
        if (uVar18 < 0x8000) {
          lVar24 = lVar24 + (ulonglong)uVar18 * 2;
          bVar16 = 0;
          do {
            uVar19 = (uint)uVar15;
            uVar15 = uVar15 >> 1;
            uVar26 = uVar26 + 1;
            lVar24 = lVar24 + (ulonglong)bVar16 * 2;
            bVar16 = *(byte *)((ulonglong)(uVar19 & 1) + lVar24);
          } while (bVar16 < 0x80);
          uVar18 = *(ushort *)(lVar24 + (ulonglong)(bVar16 & 0x7f) * 2);
        }
        else {
          uVar18 = uVar18 & 0x7fff;
        }
        iVar21 = (iVar21 - uVar25) - uVar26;
        *piVar27 = *piVar27 +
                   ((int)(uint)(ushort)((uVar17 & uVar7) * (short)iVar11) >> iVar2) + iVar3;
        piVar27[1] = piVar27[1] +
                     ((int)(uint)(ushort)((uVar17 & uVar9) * (short)iVar13) >> iVar2) + iVar5;
        piVar27[2] = piVar27[2] +
                     ((int)(uint)(ushort)((uVar18 & uVar7) * (short)iVar11) >> iVar2) + iVar3;
        piVar27[3] = piVar27[3] +
                     ((int)(uint)(ushort)((uVar18 & uVar9) * (short)iVar13) >> iVar2) + iVar5;
        piVar27 = piVar27 + 4;
        *local_res8 = *local_res8 +
                      ((int)(uint)(ushort)((uVar17 & uVar8) * (short)iVar12) >> iVar2) + iVar4;
        local_res8[1] =
             local_res8[1] +
             ((int)(uint)(ushort)((uVar17 & uVar10) * (short)iVar14) >> iVar2) + iVar6;
        local_res8[2] =
             local_res8[2] +
             ((int)(uint)(ushort)((uVar18 & uVar8) * (short)iVar12) >> iVar2) + iVar4;
        local_res8[3] =
             local_res8[3] +
             ((int)(uint)(ushort)((uVar18 & uVar10) * (short)iVar14) >> iVar2) + iVar6;
        local_res8 = local_res8 + 4;
        uVar29 = (ulonglong)(iVar28 + 4);
      }
      iVar21 = ((char)param_4[1] - iVar21) + (0x40 - (char)bVar22);
      bVar22 = (byte)iVar21 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar21 >> 3);
      *param_4 = *param_4 + ((longlong)iVar21 >> 3);
      puVar20 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar22;
    } while (iVar28 < param_5);
  }
  return;
}



// FUNCTION 1431f38e0 vorbis_book_decodev_add_SIMD_8_2ch<LeafWord> body=494 status=ok
// SIG undefined vorbis_book_decodev_add_SIMD_8_2ch<LeafWord>(void)

void vorbis_book_decodev_add_SIMD_8_2ch<LeafWord>
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,int param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  ulonglong uVar23;
  byte bVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  int iVar30;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar31 [12];
  undefined1 auVar33 [16];
  
  piVar28 = (int *)param_1[2];
  bVar2 = *(byte *)((longlong)param_1 + 0x1c);
  uVar18 = 0;
  uVar23 = (ulonglong)param_3;
  bVar3 = *(byte *)(piVar28 + 0x14);
  param_5 = param_5 + param_3;
  iVar5 = *piVar28;
  iVar6 = piVar28[1];
  iVar7 = piVar28[2];
  iVar8 = piVar28[3];
  auVar1 = *(undefined1 (*) [16])(piVar28 + 4);
  iVar14 = piVar28[8];
  sVar9 = *(short *)((longlong)piVar28 + 0x22);
  iVar15 = piVar28[9];
  sVar10 = *(short *)((longlong)piVar28 + 0x26);
  iVar16 = piVar28[10];
  sVar11 = *(short *)((longlong)piVar28 + 0x2a);
  iVar17 = piVar28[0xb];
  sVar12 = *(short *)((longlong)piVar28 + 0x2e);
  piVar28 = (int *)(*param_2 + uVar23 * 4);
  piVar29 = (int *)(param_2[1] + uVar23 * 4);
  if (param_3 < param_5) {
    bVar24 = *(byte *)(param_4 + 1);
    puVar21 = (ulonglong *)*param_4;
    do {
      uVar18 = uVar18 | *puVar21 >> (bVar24 & 0x3f);
      iVar27 = 0x40 - (char)bVar24;
      while ((iVar22 = (int)uVar23, (int)(uint)bVar2 <= iVar27 && (iVar22 < param_5))) {
        bVar19 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar18));
        uVar26 = (uint)bVar19;
        uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar18) * 2);
        uVar18 = uVar18 >> (bVar19 & 0x3f);
        if (uVar4 < 0x8000) {
          lVar25 = *param_1 + (ulonglong)uVar4 * 2;
          bVar19 = 0;
          do {
            uVar20 = (uint)uVar18;
            uVar18 = uVar18 >> 1;
            uVar26 = uVar26 + 1;
            lVar25 = lVar25 + (ulonglong)bVar19 * 2;
            bVar19 = *(byte *)((ulonglong)(uVar20 & 1) + lVar25);
          } while (bVar19 < 0x80);
          uVar20 = (uint)*(ushort *)(lVar25 + (ulonglong)(bVar19 & 0x7f) * 2);
        }
        else {
          uVar20 = uVar4 & 0x7fff;
        }
        iVar27 = iVar27 - uVar26;
        auVar34._4_4_ = uVar20;
        auVar34._0_4_ = uVar20;
        auVar34._8_4_ = uVar20;
        auVar34._12_4_ = uVar20;
        auVar34 = auVar34 & auVar1;
        uVar20 = uVar20 >> ((bVar3 & 7) << 2);
        iVar13 = CONCAT22(auVar34._10_2_ * sVar11,auVar34._8_2_ * (short)iVar16);
        auVar32._4_4_ = uVar20;
        auVar32._0_4_ = uVar20;
        auVar32._8_4_ = uVar20;
        auVar32._12_4_ = uVar20;
        auVar32 = auVar32 & auVar1;
        iVar30 = CONCAT22(auVar32._2_2_ * sVar9,auVar32._0_2_ * (short)iVar14);
        auVar31._0_8_ =
             CONCAT26(auVar32._6_2_ * sVar10,CONCAT24(auVar32._4_2_ * (short)iVar15,iVar30));
        auVar31._8_2_ = auVar32._8_2_ * (short)iVar16;
        auVar31._10_2_ = auVar32._10_2_ * sVar11;
        auVar33._12_2_ = auVar32._12_2_ * (short)iVar17;
        auVar33._0_12_ = auVar31;
        auVar33._14_2_ = auVar32._14_2_ * sVar12;
        *piVar28 = *piVar28 + (uint)(ushort)(auVar34._0_2_ * (short)iVar14) + iVar5;
        piVar28[1] = piVar28[1] + iVar13 + iVar7;
        piVar28[2] = piVar28[2] + iVar30 + iVar5;
        piVar28[3] = piVar28[3] + auVar31._8_4_ + iVar7;
        piVar28 = piVar28 + 4;
        *piVar29 = *piVar29 + (uint)(ushort)(auVar34._4_2_ * (short)iVar15) + iVar6;
        piVar29[1] = piVar29[1] +
                     (int)(CONCAT26(auVar34._14_2_ * sVar12,
                                    CONCAT24(auVar34._12_2_ * (short)iVar17,iVar13)) >> 0x20) +
                     iVar8;
        piVar29[2] = piVar29[2] + (int)((ulonglong)auVar31._0_8_ >> 0x20) + iVar6;
        piVar29[3] = piVar29[3] + auVar33._12_4_ + iVar8;
        piVar29 = piVar29 + 4;
        uVar23 = (ulonglong)(iVar22 + 4);
      }
      iVar27 = ((char)param_4[1] - iVar27) + (0x40 - (char)bVar24);
      bVar24 = (byte)iVar27 & 7;
      *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar27 >> 3);
      *param_4 = *param_4 + ((longlong)iVar27 >> 3);
      puVar21 = (ulonglong *)*param_4;
      *(byte *)(param_4 + 1) = bVar24;
    } while (iVar22 < param_5);
  }
  return;
}



// FUNCTION 1431f3ad0 BuildTree body=531 status=ok
// SIG undefined BuildTree(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BuildTree(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,int param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int local_res8 [2];
  undefined8 auStack_a0 [5];
  int aiStack_78 [2];
  longlong alStack_70 [2];
  int aiStack_60 [2];
  longlong local_58 [4];
  longlong local_38 [2];
  
  lVar15 = param_5;
  iVar17 = 1 << ((byte)param_7 & 0x1f);
  local_res8[0] = 0;
  *(short *)(param_1 + 3) = (short)iVar17 + -1;
  lVar1 = (longlong)(int)(iVar17 + (uint)*(ushort *)(param_5 + 10) * 2) * 4;
  uVar12 = lVar1 + 7;
  if (uVar12 <= lVar1 - 8U) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x1431f3b4c;
  uVar14 = (ulonglong)iVar17;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar14 + 0xf;
  lVar1 = (longlong)local_38 + lVar7;
  if (uVar12 <= uVar14) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar7) = 0x1431f3b6c;
  uVar3 = *(undefined2 *)(param_5 + 8);
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  *(int **)((longlong)local_58 + lVar8 + lVar7 + 0x10) = &param_7;
  lVar2 = (longlong)local_38 + lVar8 + lVar7;
  *(longlong *)((longlong)local_58 + lVar8 + lVar7 + 8) = lVar2;
  local_38[0] = lVar2;
  *(int **)((longlong)local_58 + lVar8 + lVar7) = local_res8;
  *(int *)((longlong)aiStack_60 + lVar8 + lVar7) = param_7;
  *(longlong *)((longlong)alStack_70 + lVar8 + lVar7 + 8) = param_5;
  *(undefined8 *)((longlong)alStack_70 + lVar8 + lVar7) = param_4;
  *(undefined8 **)((longlong)aiStack_78 + lVar8 + lVar7) = param_1;
  *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar7) = 0x1431f3bb5;
  iVar9 = _make_words(param_2,uVar3,lVar1,param_3);
  local_res8[0] = (uint)*(ushort *)(lVar15 + 10) - local_res8[0];
  *(char *)((longlong)param_1 + 0x1b) = (char)param_7;
  uVar11 = (param_7 + -1) * local_res8[0] + iVar17 * 2 + iVar9;
  if ((char)param_7 == '\x02') {
    uVar11 = uVar11 + local_res8[0];
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar7) = 0x1431f3bf3;
  pvVar10 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar11);
  *param_1 = pvVar10;
  if (pvVar10 == (void *)0x0) {
    iVar9 = 2;
  }
  else {
    iVar9 = 0;
    iVar16 = 0;
    param_1[1] = (void *)((longlong)pvVar10 + uVar14 * 2);
    param_5._0_4_ = iVar17 * 3;
    if (0 < iVar17) {
      lVar15 = 0;
      iVar13 = (int)param_5;
      do {
        if (iVar9 != 0) goto LAB_1431f3cac;
        *(undefined1 *)(lVar15 + param_1[1]) = *(undefined1 *)(lVar15 + local_38[0]);
        iVar4 = *(int *)(lVar1 + lVar15 * 4);
        if (iVar4 < 0) {
          *(ushort *)((longlong)pvVar10 + lVar15 * 2) = (ushort)iVar4 | 0x8000;
        }
        else {
          *(short *)((longlong)pvVar10 + lVar15 * 2) = (short)(iVar13 / 2);
          uVar5 = *(undefined4 *)(lVar1 + lVar15 * 4);
          uVar6 = *param_1;
          *(undefined8 *)((longlong)alStack_70 + lVar8 + lVar7 + 8) = param_6;
          *(int **)((longlong)alStack_70 + lVar8 + lVar7) = local_res8;
          *(int *)((longlong)aiStack_78 + lVar8 + lVar7) = param_7;
          *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar7) = 0x1431f3c91;
          iVar9 = pack_sub_tree(uVar6,&param_5,lVar1,uVar5);
          iVar13 = (int)param_5;
        }
        iVar16 = iVar16 + 1;
        lVar15 = lVar15 + 1;
      } while (iVar16 < iVar17);
      if (iVar9 != 0) {
LAB_1431f3cac:
        pvVar10 = (void *)*param_1;
        if (pvVar10 != (void *)0x0) {
          *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar7) = 0x1431f3cbf;
          AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar10);
          *param_1 = 0;
        }
      }
    }
  }
  return iVar9;
}



// FUNCTION 1431f3cf0 Grow body=114 status=ok
// SIG undefined Grow(void)

undefined8 GrowableAlloc::Grow(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 1) < param_2) {
    iVar2 = 0x100;
    if (0x100 < param_2) {
      iVar2 = param_2;
    }
    pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(longlong)iVar2);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    if ((void *)*param_1 != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)*param_1);
    }
    *(int *)(param_1 + 1) = iVar2;
    *param_1 = pvVar1;
  }
  return 1;
}



// FUNCTION 1431f3d70 FUN_1431f3d70 body=799 status=ok
// SIG undefined FUN_1431f3d70(void)

undefined8
FUN_1431f3d70(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,int *param_5,
             longlong param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0xff;
  *(int *)(param_6 + 0x58) =
       *(int *)(param_6 + 0x58) +
       ((*(byte *)(param_1 + 0x1b) + 1) * (uint)*(ushort *)((longlong)param_5 + 10) + -2) *
       param_5[10];
  if ((ulonglong)*(ushort *)((longlong)param_5 + 10) != 0) {
    lVar9 = 0;
    do {
      cVar7 = *(char *)(lVar9 + param_2);
      if ('\0' < cVar7) {
        if (cVar7 < iVar10) {
          iVar10 = (int)cVar7;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)(ulonglong)*(ushort *)((longlong)param_5 + 10));
  }
  iVar10 = iVar10 + 1;
  do {
    iVar10 = iVar10 + 1;
    iVar4 = BuildTree(param_1,param_2,param_3,param_4,param_5,param_6,iVar10);
  } while (iVar4 == 1);
  if (iVar4 == 2) {
    uVar6 = 0xffffff75;
  }
  else {
    if ((param_5[9] == 1) && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x50) != '\0')) {
      iVar10 = param_5[3];
      bVar3 = -(char)param_5[1] - 8U & 0x1f;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x34) =
           *param_5 << (-bVar3 & 0x1f) | *param_5 >> bVar3;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x38) =
           (1 << (*(byte *)(*(longlong *)(param_1 + 0x10) + 0x50) & 0x1f)) + -1;
      bVar3 = (byte)(-8 - iVar10) & 0x1f;
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x40);
      iVar8 = 0;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x3c) =
           iVar4 << (0x20 - bVar3 & 0x1f) | iVar4 >> bVar3;
      if (*(byte *)(param_1 + 0x1a) != 1) {
        uVar5 = 1;
        do {
          iVar8 = iVar8 + 1;
          uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
        } while (*(byte *)(param_1 + 0x1a) != uVar5);
      }
      *(undefined **)(*(longlong *)(param_1 + 0x10) + 0x48) =
           (&PTR_vorbis_book_decodev_add_t<ExpandEntry1Stereo,LeafByte>_1467c2360)
           [(longlong)iVar8 + ((longlong)param_7 + (ulonglong)*(byte *)(param_1 + 0x1b) * 2) * 4];
      cVar7 = *(char *)(param_1 + 0x1a);
      if (((cVar7 - 4U & 0xfb) == 0) || (cVar7 == '\x02')) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        uVar1 = puVar2[0xd];
        *puVar2 = uVar1;
        puVar2[1] = uVar1;
        puVar2[2] = uVar1;
        puVar2[3] = uVar1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38);
        lVar9 = *(longlong *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x38) << (*(byte *)(lVar9 + 0x50) & 0x1f);
        lVar9 = *(longlong *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x18) =
             *(int *)(lVar9 + 0x38) << (*(char *)(lVar9 + 0x50) * '\x02' & 0x1fU);
        lVar9 = *(longlong *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x1c) =
             *(int *)(lVar9 + 0x38) << (*(char *)(lVar9 + 0x50) * '\x03' & 0x1fU);
        cVar7 = *(char *)(param_1 + 0x1a);
      }
      if (cVar7 == '\b') {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3c);
        lVar9 = *(longlong *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x3c) >> (*(byte *)(lVar9 + 0x50) & 0x1f);
        lVar9 = *(longlong *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x28) =
             *(int *)(lVar9 + 0x3c) >> (*(char *)(lVar9 + 0x50) * '\x02' & 0x1fU);
        lVar9 = *(longlong *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x2c) =
             *(int *)(lVar9 + 0x3c) >> (*(char *)(lVar9 + 0x50) * '\x03' & 0x1fU);
        cVar7 = *(char *)(param_1 + 0x1a);
      }
      if ((cVar7 - 2U & 0xfd) == 0) {
        lVar9 = *(longlong *)(param_1 + 0x10);
        uVar5 = *(uint *)(lVar9 + 0x3c);
        iVar4 = -((uint)*(byte *)(lVar9 + 0x50) + (uint)*(byte *)(lVar9 + 0x50) * 2) - param_5[3];
        iVar10 = (-8 - iVar10) - iVar4;
        if (iVar10 < 1) {
          *(undefined4 *)(lVar9 + 0x30) = 0;
          lVar9 = *(longlong *)(param_1 + 0x10);
        }
        else {
          *(int *)(lVar9 + 0x30) = iVar10;
          lVar9 = *(longlong *)(param_1 + 0x10);
          uVar5 = *(int *)(lVar9 + 0x40) >> ((byte)iVar4 & 0x1f);
        }
        *(uint *)(lVar9 + 0x20) = uVar5;
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0x24) =
             uVar5 >> (*(byte *)(*(longlong *)(param_1 + 0x10) + 0x50) & 0x1f);
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) =
             uVar5 >> (*(char *)(*(longlong *)(param_1 + 0x10) + 0x50) * '\x02' & 0x1fU);
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c) =
             uVar5 >> (*(char *)(*(longlong *)(param_1 + 0x10) + 0x50) * '\x03' & 0x1fU);
        if (0xffff < ((1 << (*(byte *)(*(longlong *)(param_1 + 0x10) + 0x50) & 0x1f)) + -1) * uVar5)
        {
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x48) =
               *(undefined8 *)
                (&DAT_1467c22e0 +
                ((longlong)iVar8 +
                ((longlong)param_7 + (ulonglong)*(byte *)(param_1 + 0x1b) * 2) * 4) * 8);
        }
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1431f4090 _make_words body=1123 status=ok
// SIG undefined _make_words(void)

uint _make_words(byte *param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined8 param_5
                ,undefined8 param_6,undefined8 param_7,int param_8,int *param_9,void *param_10,
                undefined4 *param_11)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint local_f8;
  int local_f4;
  int local_f0;
  uint local_d8 [38];
  
  local_f4 = 0;
  local_f8 = 0;
  iVar12 = 0;
  *param_9 = 0;
  if (param_2 < 2) {
    *param_3 = 0x80000000;
    return 0;
  }
  bVar5 = (byte)param_8;
  uVar13 = 1 << (bVar5 & 0x1f);
  _guard_xfg_dispatch_icall_nop(param_3,0,(longlong)(int)uVar13 * 4);
  _guard_xfg_dispatch_icall_nop(param_10,0,(longlong)(int)uVar13);
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x84);
  local_f0 = 0;
  if (0 < param_2) {
    do {
      bVar2 = *param_1;
      uVar16 = (ulonglong)(char)bVar2;
      if (bVar2 != 0) {
        uVar15 = local_d8[uVar16];
        puVar4 = local_d8 + uVar16;
        if ((iVar12 != 0) && (uVar15 == 0)) {
          return 0xffffffff;
        }
        iVar12 = param_8;
        if ((char)bVar2 < param_8) {
          iVar12 = (int)(char)bVar2;
        }
        uVar14 = uVar15;
        if (param_8 < (char)bVar2) {
          uVar14 = uVar15 >> (bVar2 - bVar5 & 0x1f);
        }
        uVar9 = 0;
        iVar10 = 0;
        iVar11 = iVar12;
        if (0 < iVar12) {
          do {
            bVar6 = (byte)iVar10;
            iVar10 = iVar10 + 1;
            uVar9 = (ulonglong)
                    ((uint)uVar9 | (uVar14 >> (bVar6 & 0x1f) & 1) << ((byte)(iVar11 + -1) & 0x1f));
            iVar11 = iVar11 + -1;
          } while (iVar10 < iVar12);
        }
        puVar1 = param_3 + uVar9;
        iVar12 = (int)(char)bVar2;
        if (param_3[uVar9] == 0) {
          if (param_8 < (char)bVar2) {
            *puVar1 = uVar13;
            *(byte *)(uVar9 + (longlong)param_10) = bVar5;
          }
          else {
            *param_9 = *param_9 + 1;
            uVar14 = decpack(local_f0,local_f4,param_4,param_5,param_6,param_7);
            local_f4 = local_f4 + 1;
            if (local_f8 < uVar14) {
              local_f8 = uVar14;
            }
            *puVar1 = uVar14 | 0x80000000;
            *(byte *)(uVar9 + (longlong)param_10) = bVar2;
            if (iVar12 < param_8) {
              iVar11 = 0;
              iVar10 = 1 << (bVar5 - bVar2 & 0x1f);
              if (0 < iVar10) {
                do {
                  uVar3 = iVar11 << (bVar2 & 0x1f);
                  iVar11 = iVar11 + 1;
                  lVar8 = (longlong)(int)(uVar3 | (uint)uVar9);
                  param_3[lVar8] = uVar14 | 0x80000000;
                  *(byte *)(lVar8 + (longlong)param_10) = bVar2;
                } while (iVar11 < iVar10);
              }
            }
          }
        }
        uVar14 = *puVar1;
        if (param_8 < iVar12) {
          iVar11 = param_8;
          while( true ) {
            puVar1 = param_3 + uVar14;
            if ((char)bVar2 + -1 <= iVar11) break;
            uVar14 = uVar15 >> ((bVar2 - (char)iVar11) - 1 & 0x3f) & 1;
            if ((longlong)puVar1 - (longlong)param_3 >> 2 < (longlong)(int)uVar13) {
              if (puVar1[uVar14] == 0) {
                puVar1[uVar14] = uVar13;
              }
            }
            else {
              uVar13 = uVar13 + 2;
              puVar1[1] = 0;
              *puVar1 = uVar13;
            }
            uVar14 = puVar1[uVar14];
            iVar11 = iVar11 + 1;
          }
          uVar14 = decpack(local_f0,local_f4,param_4,param_5,param_6,param_7);
          local_f4 = local_f4 + 1;
          if (local_f8 < uVar14) {
            local_f8 = uVar14;
          }
          if ((longlong)puVar1 - (longlong)param_3 >> 2 < (longlong)(int)uVar13) {
            puVar1[uVar15 >> ((bVar2 - (char)iVar11) - 1 & 0x3f) & 1] = uVar14 | 0x80000000;
          }
          else {
            uVar13 = uVar13 + 2;
            *puVar1 = uVar14 | 0x80000000;
            puVar1[1] = 0;
          }
        }
        uVar9 = uVar16 & 0xffffffff;
        if (0 < iVar12) {
          do {
            uVar14 = (int)uVar9 - 1;
            if ((local_d8[uVar16] & 1) != 0) {
              local_d8[(int)uVar9] = local_d8[(int)uVar14] * 2;
              break;
            }
            uVar9 = (ulonglong)uVar14;
            local_d8[uVar16] = local_d8[uVar16] + 1;
            uVar16 = uVar16 - 1;
          } while (0 < (longlong)uVar16);
        }
        iVar11 = (char)bVar2 + 1;
        uVar14 = *puVar4;
        iVar12 = local_f4;
        if (iVar11 < 0x21) {
          puVar4 = local_d8 + iVar11;
          do {
            uVar3 = *puVar4;
            if (uVar3 >> 1 != uVar15) break;
            uVar14 = uVar14 * 2;
            iVar11 = iVar11 + 1;
            *puVar4 = uVar14;
            puVar4 = puVar4 + 1;
            uVar15 = uVar3;
          } while (iVar11 < 0x21);
        }
      }
      local_f0 = local_f0 + 1;
      param_1 = param_1 + 1;
    } while (local_f0 < param_2);
    if (0x7f < local_f8) {
      uVar7 = 4;
      if (local_f8 < 0x8000) {
        uVar7 = 2;
      }
      *param_11 = uVar7;
      return uVar13;
    }
  }
  *param_11 = 1;
  return uVar13;
}



// FUNCTION 1431f4500 ak_vorbis_book_decode body=327 status=ok
// SIG undefined ak_vorbis_book_decode(void)

ushort ak_vorbis_book_decode(longlong *param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar6 = (ulonglong)
          (int)((uint)(*(longlong *)*param_2 >> (*(byte *)(param_2 + 1) & 0x3f)) & DAT_1467c2310);
  uVar4 = 0;
  if (*(char *)((longlong)param_1 + 0x1b) == '\x01') {
    bVar2 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar6));
    uVar7 = (uint)bVar2;
    uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar6) * 2);
    uVar6 = uVar6 >> (bVar2 & 0x3f);
    if (uVar4 < 0x8000) {
      lVar5 = *param_1 + (ulonglong)uVar4 * 2;
      bVar2 = 0;
      do {
        uVar3 = (uint)uVar6;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + (ulonglong)bVar2 * 2;
        bVar2 = *(byte *)((ulonglong)(uVar3 & 1) + lVar5);
      } while (bVar2 < 0x80);
      uVar4 = bVar2 & 0x7f;
      goto LAB_1431f4615;
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x1b) != '\x02') goto LAB_1431f4615;
    bVar2 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar6));
    uVar7 = (uint)bVar2;
    uVar4 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar6) * 2);
    uVar6 = uVar6 >> (bVar2 & 0x3f);
    if (uVar4 < 0x8000) {
      lVar5 = *param_1 + (ulonglong)uVar4 * 2;
      bVar2 = 0;
      do {
        uVar3 = (uint)uVar6;
        uVar6 = uVar6 >> 1;
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + (ulonglong)bVar2 * 2;
        bVar2 = *(byte *)((ulonglong)(uVar3 & 1) + lVar5);
      } while (bVar2 < 0x80);
      uVar4 = *(ushort *)(lVar5 + (ulonglong)(bVar2 & 0x7f) * 2);
      goto LAB_1431f4615;
    }
  }
  uVar4 = uVar4 & 0x7fff;
LAB_1431f4615:
  iVar1 = (int)(char)*(byte *)(param_2 + 1) + uVar7;
  *(byte *)(param_2 + 1) = (byte)iVar1 & 7;
  *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) - (iVar1 >> 3);
  *param_2 = ((longlong)iVar1 >> 3) + *param_2;
  return uVar4;
}



// FUNCTION 1431f4650 decpack body=375 status=ok
// SIG undefined decpack(void)

ulonglong decpack(uint param_1,ulonglong param_2,int param_3,longlong param_4,longlong *param_5,
                 longlong param_6)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  
  uVar11 = (ulonglong)param_1;
  uVar9 = 0;
  iVar4 = *(int *)(param_6 + 0x24);
  if (iVar4 == 0) {
    return uVar11;
  }
  uVar10 = uVar9;
  if (iVar4 == 1) {
    bVar1 = *(byte *)(param_4 + 0x1a);
    if (*(int *)(param_6 + 0x20) == 1) {
      uVar10 = 0;
      if (bVar1 != 0) {
        bVar6 = 0;
        uVar8 = (ulonglong)bVar1;
        do {
          iVar4 = (int)uVar11;
          uVar11 = (longlong)iVar4 / (longlong)param_3 & 0xffffffff;
          bVar1 = bVar6 & 0x1f;
          bVar6 = bVar6 + *(char *)(*(longlong *)(param_4 + 0x10) + 0x50);
          uVar9 = uVar9 | (uint)*(ushort *)
                                 (*(longlong *)(param_6 + 0x18) +
                                 ((longlong)iVar4 % (longlong)param_3 & 0xffffffffU) * 2) << bVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        return (ulonglong)uVar9;
      }
    }
    else {
      iVar4 = 0;
      if (bVar1 != 0) {
        bVar1 = *(byte *)(*(longlong *)(param_4 + 0x10) + 0x50);
        iVar12 = *(int *)((longlong)param_5 + 0xc);
        bVar6 = *(byte *)(param_5 + 1);
        do {
          uVar10 = (&DAT_1467c22b0)[bVar1];
          iVar5 = (uint)bVar1 + (int)(char)bVar6;
          lVar2 = *(longlong *)*param_5;
          bVar7 = (byte)iVar5 & 7;
          iVar12 = iVar12 - (iVar5 >> 3);
          *(byte *)(param_5 + 1) = bVar7;
          *(int *)((longlong)param_5 + 0xc) = iVar12;
          *param_5 = ((longlong)iVar5 >> 3) + *param_5;
          bVar1 = *(byte *)(*(longlong *)(param_4 + 0x10) + 0x50);
          cVar3 = (char)iVar4;
          iVar4 = iVar4 + 1;
          uVar9 = uVar9 | ((uint)(lVar2 >> (bVar6 & 0x3f)) & uVar10) << (bVar1 * cVar3 & 0x1f);
          uVar10 = uVar9;
          bVar6 = bVar7;
        } while (iVar4 < (int)(uint)*(byte *)(param_4 + 0x1a));
      }
    }
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        return param_2 & 0xffffffff;
      }
      return 0;
    }
    if (*(byte *)(param_4 + 0x1a) != 0) {
      iVar4 = 0;
      uVar8 = (ulonglong)*(byte *)(param_4 + 0x1a);
      do {
        iVar12 = (int)uVar11;
        uVar11 = (longlong)iVar12 / (longlong)param_3 & 0xffffffff;
        uVar9 = uVar9 | iVar12 % param_3 << ((byte)iVar4 & 0x1f);
        iVar4 = iVar4 + *(int *)(param_6 + 0x10);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return (ulonglong)uVar9;
    }
  }
  return (ulonglong)uVar10;
}



// FUNCTION 1431f47d0 pack_sub_tree body=1323 status=ok
// SIG undefined pack_sub_tree(void)

int pack_sub_tree(longlong param_1,int *param_2,longlong param_3,int param_4,int param_5,
                 int *param_6,longlong *param_7)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int local_38;
  int local_34;
  
  plVar6 = param_7;
  local_34 = 1;
  if ((int)param_7[1] < 2) {
    pvVar9 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x100);
    if (pvVar9 == (void *)0x0) {
      return 2;
    }
    if ((void *)*param_7 != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)*param_7);
    }
    *(undefined4 *)(param_7 + 1) = 0x100;
    *param_7 = (longlong)pvVar9;
  }
  *(short *)*param_7 = (short)param_4;
  uVar3 = *(uint *)(param_3 + 4 + (longlong)param_4 * 4);
  uVar4 = *(uint *)(param_3 + (longlong)param_4 * 4);
  if ((int)param_7[3] < 1) {
    pvVar9 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x100);
    if (pvVar9 == (void *)0x0) {
      return 2;
    }
    if ((void *)param_7[2] != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_7[2]);
    }
    *(undefined4 *)(param_7 + 3) = 0x100;
    param_7[2] = (longlong)pvVar9;
  }
  iVar18 = 0;
  iVar8 = 1;
  param_7._0_4_ = -((int)~uVar4 >> 0x1f) - ((int)~uVar3 >> 0x1f);
  do {
    if (iVar18 != 0) {
      return iVar18;
    }
    cVar7 = GrowableAlloc::Grow(plVar6 + 4,(int)param_7 * 2);
    if (cVar7 == '\0') {
      iVar18 = 2;
    }
    cVar7 = GrowableAlloc::Grow(plVar6 + 6,(int)param_7 * 4);
    iVar14 = *param_2;
    if (cVar7 == '\0') {
      iVar18 = 2;
    }
    lVar10 = (longlong)iVar8;
    lVar15 = 0;
    local_38 = 0;
    lVar17 = 0;
    param_7._0_4_ = 0;
    iVar16 = iVar14 + iVar8 * 2;
    iVar8 = 0;
    if (0 < lVar10) {
      puVar13 = (undefined2 *)(iVar16 + param_1);
      iVar19 = iVar18;
      do {
        iVar8 = local_38;
        if (iVar18 != 0) break;
        lVar12 = (longlong)*(short *)(*plVar6 + lVar17 * 2);
        if (1 < local_34) {
          sVar2 = *(short *)(plVar6[2] + lVar17 * 2);
          iVar14 = iVar14 - ((int)sVar2 & 0xfffffffeU);
          iVar18 = iVar19;
          if (0xff < iVar14) {
            iVar18 = 1;
          }
          *(char *)(sVar2 + param_1) = (char)(iVar14 / 2);
          iVar14 = *param_2;
          iVar19 = iVar18;
        }
        iVar8 = *(int *)(param_3 + lVar12 * 4);
        iVar5 = *(int *)(param_3 + 4 + lVar12 * 4);
        if (iVar8 < 0) {
          if (iVar5 < 0) {
            if (param_5 == 1) {
              *(byte *)(iVar14 + param_1) = (byte)iVar8 | 0x80;
              *(byte *)((longlong)*param_2 + 1 + param_1) =
                   *(byte *)(param_3 + 4 + lVar12 * 4) | 0x80;
              *param_6 = *param_6 + -2;
            }
            else {
              *(byte *)(iVar14 + param_1) = (byte)((iVar16 - iVar14) / 2) | 0x80;
              *(byte *)((longlong)*param_2 + 1 + param_1) =
                   (byte)(((iVar16 - *param_2) + 2) / 2) | 0x80;
              *puVar13 = *(undefined2 *)(param_3 + lVar12 * 4);
              puVar13[1] = *(undefined2 *)(param_3 + 4 + lVar12 * 4);
              puVar13 = puVar13 + 2;
              *param_6 = *param_6 + -2;
              iVar16 = iVar16 + 4;
            }
          }
          else {
            *(short *)(lVar15 + plVar6[6]) = (short)iVar14 + 1;
            if (param_5 == 1) {
              *(byte *)(*param_2 + param_1) = *(byte *)(param_3 + lVar12 * 4) | 0x80;
            }
            else {
              iVar8 = iVar16 - *param_2;
              iVar16 = iVar16 + 2;
              *(byte *)(*param_2 + param_1) = (byte)(iVar8 / 2) | 0x80;
              *puVar13 = *(undefined2 *)(param_3 + lVar12 * 4);
              puVar13 = puVar13 + 1;
            }
            local_38 = local_38 + 1;
            *(undefined2 *)(lVar15 + plVar6[4]) = *(undefined2 *)(param_3 + 4 + lVar12 * 4);
            *(undefined4 *)(param_3 + 4 + lVar12 * 4) = 0;
            psVar1 = (short *)(plVar6[4] + lVar15);
            lVar15 = lVar15 + 2;
            param_7._0_4_ =
                 ((int)param_7 - ((int)~*(uint *)(param_3 + (longlong)*psVar1 * 4) >> 0x1f)) -
                 ((int)~*(uint *)(param_3 + 4 + (longlong)*psVar1 * 4) >> 0x1f);
            *param_6 = *param_6 + -1;
          }
        }
        else if (iVar5 < 0) {
          *(short *)(lVar15 + plVar6[6]) = (short)iVar14;
          if (param_5 == 1) {
            *(byte *)((longlong)*param_2 + 1 + param_1) = *(byte *)(param_3 + 4 + lVar12 * 4) | 0x80
            ;
          }
          else {
            iVar8 = iVar16 - *param_2;
            iVar16 = iVar16 + 2;
            *(byte *)((longlong)*param_2 + 1 + param_1) = (byte)(iVar8 / 2) | 0x80;
            *puVar13 = *(undefined2 *)(param_3 + 4 + lVar12 * 4);
            puVar13 = puVar13 + 1;
          }
          local_38 = local_38 + 1;
          *(undefined2 *)(lVar15 + plVar6[4]) = *(undefined2 *)(param_3 + lVar12 * 4);
          *(undefined4 *)(param_3 + lVar12 * 4) = 0;
          psVar1 = (short *)(plVar6[4] + lVar15);
          lVar15 = lVar15 + 2;
          param_7._0_4_ =
               ((int)param_7 - ((int)~*(uint *)(param_3 + (longlong)*psVar1 * 4) >> 0x1f)) -
               ((int)~*(uint *)(param_3 + 4 + (longlong)*psVar1 * 4) >> 0x1f);
          *param_6 = *param_6 + -1;
        }
        else {
          local_38 = local_38 + 2;
          *(short *)(lVar15 + plVar6[4]) = (short)iVar8;
          *(undefined2 *)(plVar6[4] + 2 + lVar15) = *(undefined2 *)(param_3 + 4 + lVar12 * 4);
          *(short *)(lVar15 + plVar6[6]) = (short)*param_2;
          *(short *)(plVar6[6] + 2 + lVar15) = (short)*param_2 + 1;
          *(undefined8 *)(param_3 + lVar12 * 4) = 0;
          lVar12 = (longlong)*(short *)(lVar15 + plVar6[4]);
          lVar11 = (longlong)*(short *)(lVar15 + 2 + plVar6[4]);
          param_7._0_4_ =
               ((((int)param_7 - ((int)~*(uint *)(param_3 + lVar12 * 4) >> 0x1f)) -
                ((int)~*(uint *)(param_3 + 4 + lVar12 * 4) >> 0x1f)) -
               ((int)~*(uint *)(param_3 + lVar11 * 4) >> 0x1f)) -
               ((int)~*(uint *)(param_3 + 4 + lVar11 * 4) >> 0x1f);
          lVar15 = lVar15 + 4;
        }
        *param_2 = *param_2 + 2;
        lVar17 = lVar17 + 1;
        iVar14 = *param_2;
        iVar8 = local_38;
      } while (lVar17 < lVar10);
    }
    if (param_5 == 2) {
      *param_2 = iVar16;
    }
    lVar10 = *plVar6;
    lVar15 = plVar6[1];
    local_34 = local_34 + 1;
    *plVar6 = plVar6[4];
    *(int *)(plVar6 + 1) = (int)plVar6[5];
    plVar6[4] = lVar10;
    *(int *)(plVar6 + 5) = (int)lVar15;
    lVar10 = plVar6[2];
    lVar15 = plVar6[3];
    plVar6[2] = plVar6[6];
    *(int *)(plVar6 + 3) = (int)plVar6[7];
    plVar6[6] = lVar10;
    *(int *)(plVar6 + 7) = (int)lVar15;
    if (iVar8 == 0) {
      return iVar18;
    }
  } while( true );
}



// FUNCTION 1431f4d00 vorbis_book_unpack body=2058 status=ok
// SIG undefined vorbis_book_unpack(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
vorbis_book_unpack(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  char cVar17;
  byte *pbVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  ushort *puVar27;
  char *pcVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [64];
  char *local_88;
  ulonglong local_80;
  uint local_78;
  int local_74;
  ushort local_70;
  ushort local_6e;
  int local_6c;
  longlong local_60;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar29 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  bVar2 = *(byte *)(param_1 + 1);
  local_6e = 0;
  iVar21 = (char)bVar2 + 4;
  uVar24 = *(ushort *)*param_1;
  *(byte *)(param_1 + 1) = (byte)iVar21 & 7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar21 >> 3);
  *param_1 = ((longlong)iVar21 >> 3) + *param_1;
  *(byte *)((longlong)param_2 + 0x1a) = (byte)(uVar24 >> (bVar2 & 0x1f)) & 0xf;
  uVar3 = DAT_1467c22e8;
  bVar2 = *(byte *)(param_1 + 1);
  lVar4 = *(longlong *)*param_1;
  bVar6 = (byte)((char)bVar2 + 0xe) & 7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - ((char)bVar2 + 0xe >> 3);
  uVar24 = (ushort)(lVar4 >> (bVar2 & 0x3f)) & (ushort)uVar3;
  uVar22 = (ulonglong)uVar24;
  pbVar18 = (byte *)(((longlong)(char)bVar2 + 0xe >> 3) + *param_1);
  *(byte *)(param_1 + 1) = bVar6;
  uVar11 = uVar22 + 0xf;
  *param_1 = (longlong)pbVar18;
  if (uVar11 <= uVar22) {
    uVar11 = 0xffffffffffffff0;
  }
  uStack_d0 = 0x1431f4df0;
  bVar2 = *pbVar18;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  puVar20 = auStack_c8 + lVar4;
  puVar27 = (ushort *)(pbVar18 + ((ulonglong)bVar6 + 1 >> 3));
  bVar7 = (byte)(bVar6 + 1) & 7;
  iVar21 = *(int *)((longlong)param_1 + 0xc) - (bVar6 + 1 >> 3);
  *(byte *)(param_1 + 1) = bVar7;
  *(int *)((longlong)param_1 + 0xc) = iVar21;
  pcVar28 = (char *)((longlong)&local_88 + lVar4);
  *param_1 = (longlong)puVar27;
  uVar11 = uVar22;
  local_88 = pcVar28;
  local_80 = uVar22;
  local_70 = uVar24;
  if ((bVar2 >> bVar6 & 1) == 0) {
    uVar23 = *puVar27 >> bVar7 & 7;
    bVar6 = (byte)(bVar7 + 3) & 7;
    iVar21 = iVar21 - (bVar7 + 3 >> 3);
    *(int *)((longlong)param_1 + 0xc) = iVar21;
    pbVar18 = (byte *)(((ulonglong)bVar7 + 3 >> 3) + (longlong)puVar27);
    *(byte *)(param_1 + 1) = bVar6;
    uVar9 = bVar6 + 1;
    *param_1 = (longlong)pbVar18;
    bVar2 = *pbVar18;
    *(byte *)(param_1 + 1) = (byte)uVar9 & 7;
    *(uint *)((longlong)param_1 + 0xc) = iVar21 - (uVar9 >> 3);
    *param_1 = (longlong)(pbVar18 + (uVar9 >> 3));
    if ((bVar2 >> bVar6 & 1) == 0) {
      local_6e = uVar24;
      if (uVar22 != 0) {
        do {
          bVar2 = *(byte *)(param_1 + 1);
          uVar9 = (&DAT_1467c22b0)[uVar23];
          iVar21 = (int)(char)bVar2 + uVar23;
          lVar5 = *(longlong *)*param_1;
          *(byte *)(param_1 + 1) = (byte)iVar21 & 7;
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar21 >> 3);
          uVar9 = (uint)(lVar5 >> (bVar2 & 0x3f)) & uVar9;
          *param_1 = ((longlong)iVar21 >> 3) + *param_1;
          cVar17 = (char)uVar9 + '\x01';
          pcVar28[uVar29] = cVar17;
          if ((int)(uint)*(byte *)((longlong)param_2 + 0x1c) < (int)(uVar9 + 1)) {
            *(char *)((longlong)param_2 + 0x1c) = cVar17;
          }
          uVar29 = uVar29 + 1;
        } while ((longlong)uVar29 < (longlong)uVar22);
      }
    }
    else if (uVar22 != 0) {
      uVar24 = 0;
      do {
        bVar2 = *(byte *)(param_1 + 1);
        bVar6 = *(byte *)*param_1;
        bVar7 = (byte)((char)bVar2 + 1) & 7;
        iVar21 = *(int *)((longlong)param_1 + 0xc) - ((char)bVar2 + 1 >> 3);
        pbVar18 = (byte *)*param_1 + ((longlong)(char)bVar2 + 1 >> 3);
        *(byte *)(param_1 + 1) = bVar7;
        *(int *)((longlong)param_1 + 0xc) = iVar21;
        *param_1 = (longlong)pbVar18;
        if ((bVar6 >> (bVar2 & 0x1f) & 1) == 0) {
          *pcVar28 = '\0';
        }
        else {
          uVar24 = uVar24 + 1;
          uVar25 = (uint)(*(longlong *)pbVar18 >> bVar7) & (&DAT_1467c22b0)[uVar23];
          uVar9 = bVar7 + uVar23;
          *(byte *)(param_1 + 1) = (byte)uVar9 & 7;
          cVar17 = (char)uVar25 + '\x01';
          *(uint *)((longlong)param_1 + 0xc) = iVar21 - (uVar9 >> 3);
          *param_1 = (longlong)(pbVar18 + (uVar9 >> 3));
          *pcVar28 = cVar17;
          if ((int)(uint)*(byte *)((longlong)param_2 + 0x1c) < (int)(uVar25 + 1)) {
            *(char *)((longlong)param_2 + 0x1c) = cVar17;
          }
        }
        pcVar28 = pcVar28 + 1;
        uVar22 = uVar22 - 1;
        uVar11 = local_80;
        local_6e = uVar24;
      } while (uVar22 != 0);
    }
  }
  else {
    uVar9 = bVar7 + 5;
    uVar23 = *puVar27 >> bVar7 & 0x1f;
    *(byte *)(param_1 + 1) = (byte)uVar9 & 7;
    *(uint *)((longlong)param_1 + 0xc) = iVar21 - (uVar9 >> 3);
    *param_1 = (longlong)((ulonglong)(uVar9 >> 3) + (longlong)puVar27);
    uVar12 = uVar29;
    uVar30 = uVar29;
    local_6e = uVar24;
    if (uVar22 != 0) {
      do {
        uVar23 = uVar23 + 1;
        uVar9 = 0;
        uVar16 = uVar29;
        uVar19 = uVar29;
        for (uVar25 = (uint)uVar24 - (int)uVar12; uVar25 != 0; uVar25 = uVar25 >> 1) {
          uVar9 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar9;
          uVar16 = uVar16 + 1;
        }
        uVar25 = (&DAT_1467c22b0)[uVar16];
        bVar2 = *(byte *)(param_1 + 1);
        iVar21 = uVar9 + (int)(char)bVar2;
        lVar5 = *(longlong *)*param_1;
        *(byte *)(param_1 + 1) = (byte)iVar21 & 7;
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar21 >> 3);
        *param_1 = ((longlong)iVar21 >> 3) + *param_1;
        uVar25 = (uint)(lVar5 >> (bVar2 & 0x3f)) & uVar25;
        uVar16 = uVar29;
        if (0 < (int)uVar25) {
          do {
            if ((int)(uint)uVar24 <= (int)uVar12) break;
            pcVar28[uVar30] = (char)uVar23;
            uVar9 = (int)uVar16 + 1;
            uVar30 = uVar30 + 1;
            uVar12 = (ulonglong)((int)uVar12 + 1);
            uVar16 = (ulonglong)uVar9;
          } while ((int)uVar9 < (int)uVar25);
        }
        *(char *)((longlong)param_2 + 0x1c) = (char)uVar23;
      } while ((longlong)uVar30 < (longlong)uVar22);
    }
  }
  uVar22 = 0;
  iVar21 = (char)*(byte *)(param_1 + 1) + 1;
  bVar2 = *(byte *)*param_1 >> (*(byte *)(param_1 + 1) & 0x1f);
  *(byte *)(param_1 + 1) = (byte)iVar21 & 7;
  local_58 = bVar2 & 1;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar21 >> 3);
  *param_1 = (longlong)((byte *)*param_1 + ((longlong)iVar21 >> 3));
  uVar9 = 0;
  if ((bVar2 & 1) == 0) {
    uVar11 = uVar11 & 0xffff;
    uVar26 = (uint)uVar11;
    uVar29 = uVar11;
    uVar12 = uVar22;
    uVar23 = uVar9;
    uVar25 = uVar26;
    while (uVar25 != 0) {
      uVar23 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar23;
      uVar25 = (uint)uVar29 >> 1;
      uVar29 = (ulonglong)uVar25;
    }
    uVar23 = ((int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3) + 1;
    local_50 = 4;
    if (1 < local_6e) {
      if (uVar23 == 3) {
        uVar23 = 4;
      }
      uVar29 = uVar22;
      uVar10 = uVar9;
      for (uVar25 = ((uint)local_6e + (uint)local_6e * 2) - 6; uVar25 != 0; uVar25 = uVar25 >> 1) {
        uVar10 = (int)uVar29 + 1;
        uVar29 = (ulonglong)uVar10;
      }
      local_50 = uVar23;
      if ((int)uVar10 < (int)(uVar23 * 4)) {
        local_50 = 1;
        if ((int)uVar23 / 2 != 0) {
          local_50 = (int)uVar23 / 2;
        }
      }
    }
    while (uVar26 != 0) {
      uVar9 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar9;
      uVar26 = (uint)uVar11 >> 1;
      uVar11 = (ulonglong)uVar26;
    }
    local_54 = 0;
    bVar8 = (int)local_50 < ((int)(uVar9 + ((int)uVar9 >> 0x1f & 7U)) >> 3) + 1;
    uVar9 = 0;
  }
  else {
    *(undefined8 *)(auStack_c8 + lVar4 + -8) = 0x1431f51b0;
    pvVar13 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,0x60,0x10);
    param_2[2] = pvVar13;
    if (pvVar13 == (void *)0x0) {
      return 0xffffff75;
    }
    *(undefined8 *)((longlong)pvVar13 + 0x48) = 0;
    bVar2 = *(byte *)(param_1 + 1);
    uVar25 = (uint)(*(longlong *)*param_1 >> (bVar2 & 0x3f)) & _DAT_1467c2330;
    bVar6 = (byte)((char)bVar2 + 0x20) & 7;
    iVar21 = *(int *)((longlong)param_1 + 0xc) - ((char)bVar2 + 0x20 >> 3);
    plVar31 = (longlong *)(((longlong)(char)bVar2 + 0x20 >> 3) + *param_1);
    *(byte *)(param_1 + 1) = bVar6;
    *(int *)((longlong)param_1 + 0xc) = iVar21;
    *param_1 = (longlong)plVar31;
    local_74 = ((int)uVar25 >> 0x15 & 0x3ffU) - 0x314;
    uVar23 = uVar25 & 0x1fffff;
    if ((uVar25 & 0x1fffff) == 0) {
      local_74 = -9999;
      local_78 = 0;
    }
    else {
      do {
        uVar26 = uVar23;
        local_74 = local_74 + -1;
        uVar23 = uVar26 * 2;
      } while (((uVar26 & 0x7fffffff) >> 0x1d & 1) == 0);
      local_78 = uVar26 * -2;
      if (-1 < (int)uVar25) {
        local_78 = uVar26 * 2;
      }
    }
    uVar25 = (uint)(*plVar31 >> bVar6) & _DAT_1467c2330;
    uVar23 = bVar6 + 0x20;
    local_6c = ((int)uVar25 >> 0x15 & 0x3ffU) - 0x314;
    *(byte *)(param_1 + 1) = (byte)uVar23 & 7;
    *param_1 = (ulonglong)(uVar23 >> 3) + (longlong)plVar31;
    *(uint *)((longlong)param_1 + 0xc) = iVar21 - (uVar23 >> 3);
    uVar23 = uVar25 & 0x1fffff;
    if ((uVar25 & 0x1fffff) == 0) {
      local_6c = -9999;
      uVar23 = 0;
    }
    else {
      do {
        uVar26 = uVar23;
        local_6c = local_6c + -1;
        uVar23 = uVar26 * 2;
      } while (((uVar26 & 0x7fffffff) >> 0x1d & 1) == 0);
      uVar23 = uVar26 * -2;
      if (-1 < (int)uVar25) {
        uVar23 = uVar26 * 2;
      }
    }
    *(uint *)(param_2[2] + 0x40) = uVar23;
    bVar2 = *(byte *)(param_1 + 1);
    iVar21 = (char)bVar2 + 4;
    uVar24 = *(ushort *)*param_1;
    *(byte *)(param_1 + 1) = (byte)iVar21 & 7;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar21 >> 3);
    *param_1 = ((longlong)iVar21 >> 3) + *param_1;
    *(byte *)(param_2[2] + 0x50) = ((byte)(uVar24 >> (bVar2 & 0x1f)) & 0xf) + 1;
    iVar21 = (char)param_1[1] + 1;
    uVar11 = uVar11 & 0xffff;
    *(byte *)(param_1 + 1) = (byte)iVar21 & 7;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar21 >> 3);
    *param_1 = *param_1 + ((longlong)iVar21 >> 3);
    piVar1 = (int *)(param_2[2] + 0x40);
    *piVar1 = *piVar1 >> (*(byte *)(param_2[2] + 0x50) & 0x1f);
    local_6c = local_6c + (uint)*(byte *)(param_2[2] + 0x50);
    uVar25 = (uint)uVar11;
    uVar29 = uVar22;
    uVar23 = uVar25;
    while (uVar23 != 0) {
      uVar9 = (int)uVar29 + 1;
      uVar29 = (ulonglong)uVar9;
      uVar23 = (uint)uVar11 >> 1;
      uVar11 = (ulonglong)uVar23;
    }
    bVar2 = *(byte *)((longlong)param_2 + 0x1a);
    uVar9 = uVar25 >> ((byte)((int)((bVar2 - 1) * (uVar9 - 1)) / (int)(uint)bVar2) & 0x1f);
    while( true ) {
      iVar15 = 1;
      iVar21 = 1;
      if (bVar2 != 0) {
        uVar11 = (ulonglong)bVar2;
        do {
          iVar21 = iVar21 * uVar9;
          iVar15 = iVar15 * (uVar9 + 1);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if ((iVar21 <= (int)uVar25) && ((int)uVar25 < iVar15)) break;
      iVar15 = -1;
      if (iVar21 <= (int)uVar25) {
        iVar15 = 1;
      }
      uVar9 = iVar15 + uVar9;
    }
    uVar23 = (uint)bVar2 * (uint)*(byte *)(param_2[2] + 0x50) + 8 >> 3;
    uVar11 = (longlong)(int)uVar9 * 2 + 0xf;
    if (uVar11 <= (ulonglong)((longlong)(int)uVar9 * 2)) {
      uVar11 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_c8 + lVar4 + -8) = 0x1431f53ed;
    puVar20 = auStack_c8 + -(uVar11 & 0xfffffffffffffff0) + lVar4;
    lVar4 = (longlong)&local_88 + -(uVar11 & 0xfffffffffffffff0) + lVar4;
    local_60 = lVar4;
    if (0 < (int)uVar9) {
      do {
        bVar2 = *(byte *)(param_1 + 1);
        lVar5 = *(longlong *)*param_1;
        uVar3 = (&DAT_1467c22b0)[*(byte *)(param_2[2] + 0x50)];
        iVar21 = (int)(char)bVar2 + (uint)*(byte *)(param_2[2] + 0x50);
        *(byte *)(param_1 + 1) = (byte)iVar21 & 7;
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar21 >> 3);
        *param_1 = ((longlong)iVar21 >> 3) + *param_1;
        *(ushort *)(lVar4 + uVar22 * 2) = (ushort)(lVar5 >> (bVar2 & 0x3f)) & (ushort)uVar3;
        uVar22 = uVar22 + 1;
      } while ((longlong)uVar22 < (longlong)(int)uVar9);
    }
    iVar21 = 0;
    local_54 = 1;
    local_50 = 4;
    if (1 < local_6e) {
      uVar25 = uVar23;
      if (uVar23 == 3) {
        uVar25 = 4;
      }
      for (uVar26 = (local_6e - 2) * 3; uVar26 != 0; uVar26 = uVar26 >> 1) {
        iVar21 = iVar21 + 1;
      }
      local_50 = uVar25;
      if (iVar21 < (int)(uVar25 * 4)) {
        local_50 = 1;
        if (uVar25 >> 1 != 0) {
          local_50 = uVar25 >> 1;
        }
      }
    }
    bVar8 = local_50 < uVar23;
  }
  pcVar28 = local_88;
  *(char *)((longlong)param_2 + 0x1b) = bVar8 + '\x01';
  *(undefined4 *)(puVar20 + 0x30) = param_4;
  *(undefined8 *)(puVar20 + 0x28) = param_3;
  *(uint **)(puVar20 + 0x20) = &local_78;
  *(undefined8 *)(puVar20 + -8) = 0x1431f54f9;
  uVar14 = FUN_1431f3d70(param_2,pcVar28,uVar9,param_1);
  return uVar14;
}



// FUNCTION 1431f5510 FUN_1431f5510 body=43 status=ok
// SIG undefined FUN_1431f5510(void)

undefined8 * FUN_1431f5510(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431f5540 FUN_1431f5540 body=43 status=ok
// SIG undefined FUN_1431f5540(void)

undefined8 * FUN_1431f5540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1431f5570 Clone body=69 status=ok
// SIG undefined Clone(void)

void CAkFxSrcSilenceParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4658;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 1431f55c0 FUN_1431f55c0 body=71 status=ok
// SIG undefined FUN_1431f55c0(void)

undefined8 * FUN_1431f55c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = &PTR_FUN_145ae4688;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431f5610 FUN_1431f5610 body=40 status=ok
// SIG undefined FUN_1431f5610(void)

void FUN_1431f5610(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4658;
    return;
  }
  return;
}



// FUNCTION 1431f5640 Execute body=74 status=ok
// SIG undefined Execute(void)

void CAkFXSrcSilence::Execute(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = (**(code **)(*param_1 + 0x58))();
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(ushort *)((longlong)param_2 + 0x12) = uVar1;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)*param_2,0,(ulonglong)((uint)uVar1 * *(int *)((longlong)param_1 + 0xc)));
  return;
}



// FUNCTION 1431f56e0 Init body=189 status=ok
// SIG undefined Init(void)

undefined8
CAkFXSrcSilence::Init
          (longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
          undefined4 *param_5)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  
  *(longlong **)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 8) = *param_5;
  *(uint *)(param_1 + 0xc) = (uint)param_5[2] >> 3 & 7;
  uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
  *(undefined2 *)(param_1 + 0x18) = uVar2;
  *(longlong *)(param_1 + 0x20) = param_4;
  fVar1 = *(float *)(param_4 + 0x10);
  fVar5 = *(float *)(param_4 + 0xc);
  plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  iVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  fVar5 = (float)iVar3 * 4.656613e-10 * (fVar1 - fVar5) + fVar5;
  *(float *)(param_1 + 0x14) = fVar5;
  fVar5 = fVar5 + *(float *)(*(longlong *)(param_1 + 0x20) + 8);
  *(float *)(param_1 + 0x1c) = fVar5;
  if (fVar5 < 0.001) {
    *(undefined4 *)(param_1 + 0x1c) = 0x3a83126f;
  }
  return 1;
}



// FUNCTION 1431f58c0 TimeSkip body=163 status=ok
// SIG undefined TimeSkip(void)

undefined4 CAkFXSrcSilence::TimeSkip(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  
  uVar4 = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar6 = *param_2 * uVar1;
  uVar5 = 0x2d;
  if (*(short *)(param_1 + 0x18) != 0) {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x20) + 8) + *(float *)(param_1 + 0x14);
    if (fVar8 <= 0.001) {
      fVar8 = 0.001;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar3 = (int)(longlong)(fVar8 * (float)*(uint *)(param_1 + 8)) * (int)*(short *)(param_1 + 0x18)
            * uVar1;
    if (uVar2 < uVar3) {
      uVar3 = uVar3 - uVar2;
      uVar4 = uVar6;
      if (uVar3 <= uVar6) {
        uVar4 = uVar3;
      }
      *(uint *)(param_1 + 0x10) = uVar4 + uVar2;
      bVar7 = uVar6 <= uVar4;
      uVar6 = uVar4;
      if (bVar7) goto LAB_1431f5949;
    }
    uVar5 = 0x11;
    uVar6 = uVar4;
  }
LAB_1431f5949:
  *param_2 = uVar6 / uVar1 & 0xffff;
  return uVar5;
}



// FUNCTION 1431f5970 CreateSineSource body=48 status=ok
// SIG undefined CreateSineSource(void)

void CreateSineSource(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_145ae46f0;
    return;
  }
  return;
}



// FUNCTION 1431f59a0 CreateSineSourceParams body=37 status=ok
// SIG undefined CreateSineSourceParams(void)

void CreateSineSourceParams(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x20);
  if (lVar1 != 0) {
    CAkFxSrcSineParams::CAkFxSrcSineParams(lVar1);
    return;
  }
  return;
}



// FUNCTION 1431f59d0 Execute body=225 status=ok
// SIG undefined Execute(void)

void CAkFXSrcSine::Execute(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    *(float *)(param_1 + 0x1c) = (*(float *)(lVar1 + 8) * 6.2831855) / *(float *)(param_1 + 0x20);
  }
  if ((*(byte *)(lVar1 + 0x18) & 4) != 0) {
    *(uint *)(param_1 + 8) =
         (int)(longlong)((float)*(uint *)(param_1 + 0x10) * *(float *)(lVar1 + 0x10)) + 3U &
         0xfffffffc;
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined1 *)(lVar1 + 0x18) = 0;
  uVar2 = *(ushort *)(param_2 + 2);
  *(ushort *)((longlong)param_2 + 0x12) = uVar2;
  uVar4 = 0x2d;
  if (*(short *)(param_1 + 0x14) != 0) {
    uVar3 = (int)*(short *)(param_1 + 0x14) * *(int *)(param_1 + 8);
    if (*(uint *)(param_1 + 0xc) < uVar3) {
      uVar3 = uVar3 - *(uint *)(param_1 + 0xc);
      if (uVar2 < uVar3) goto LAB_1431f5a6d;
      uVar2 = (ushort)uVar3;
      *(ushort *)((longlong)param_2 + 0x12) = uVar2;
    }
    else {
      uVar2 = 0;
      *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    }
    uVar4 = 0x11;
  }
LAB_1431f5a6d:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if (*(short *)((longlong)param_2 + 0x12) != 0) {
    AK::DSP::AkSineOsc::Process
              (param_1 + 0x18,*param_2,*(short *)((longlong)param_2 + 0x12),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc))
    ;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
  }
  return;
}



// FUNCTION 1431f5af0 Init body=219 status=ok
// SIG undefined Init(void)

undefined8
CAkFXSrcSine::Init(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  uint *param_5)

{
  float fVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  char cVar5;
  
  *(longlong *)(param_1 + 0x28) = param_4;
  cVar5 = '\0';
  uVar2 = *(uint *)(param_4 + 0x14);
  for (uVar4 = uVar2; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
    cVar5 = cVar5 + '\x01';
  }
  *(char *)(param_5 + 1) = cVar5;
  param_5[1] = param_5[1] & 0xff;
  param_5[1] = param_5[1] | uVar2 << 0xc | 0x100;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
  uVar2 = *param_5;
  uVar3 = (**(code **)(*param_3 + 0x60))(param_3);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x10);
  *(uint *)(param_1 + 0x10) = uVar2;
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 8) = (int)(longlong)((float)uVar2 * fVar1) + 3U & 0xfffffffc;
  uVar2 = *param_5;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x20) = (float)uVar2;
  *(float *)(param_1 + 0x1c) = (fVar1 * 6.2831855) / (float)uVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x18) = 0;
  return 1;
}



// FUNCTION 1431f5ca0 CAkFxSrcSineParams body=19 status=ok
// SIG undefined CAkFxSrcSineParams(void)

undefined8 * CAkFxSrcSineParams::CAkFxSrcSineParams(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145ae4758;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1431f5cc0 FUN_1431f5cc0 body=43 status=ok
// SIG undefined FUN_1431f5cc0(void)

undefined8 * FUN_1431f5cc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1431f5cf0 Clone body=70 status=ok
// SIG undefined Clone(void)

void CAkFxSrcSineParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae4758;
    *(undefined1 *)(puVar2 + 3) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined1 *)(puVar2 + 3) = 0xff;
    return;
  }
  return;
}



// FUNCTION 1431f5d80 SetParam body=234 status=ok
// SIG undefined SetParam(void)

undefined8 CAkFxSrcSineParams::SetParam(longlong param_1,short param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == 0) {
    *(float *)(param_1 + 8) = *param_3;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
    return 1;
  }
  if (param_2 == 1) {
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0xc) = fVar2;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
    return 1;
  }
  if (param_2 == 2) {
    fVar2 = *param_3;
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 3600.0 <= fVar2)) {
      fVar1 = 3600.0;
    }
    *(float *)(param_1 + 0x10) = fVar1;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 4;
    return 1;
  }
  if (param_2 == 3) {
    *(float *)(param_1 + 0x14) = *param_3;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 8;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1431f5e70 SetParamsBlock body=88 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkFxSrcSineParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[1] * 0.05);
  *(float *)(param_1 + 0xc) = fVar1;
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  return 1;
}



// FUNCTION 1431f5ed0 Process body=809 status=ok
// SIG undefined Process(void)

void AK::DSP::AkSineOsc::Process
               (float *param_1,float *param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_res18;
  
  fVar6 = *param_1;
  local_res18 = param_1[1];
  fVar10 = fVar6 + local_res18;
  pfVar1 = param_2 + param_3;
  if (3.1415925 <= fVar10) {
    fVar10 = fVar10 - 6.2831855;
  }
  fVar3 = local_res18 + fVar10;
  if (3.1415925 <= fVar3) {
    fVar3 = fVar3 - 6.2831855;
  }
  fVar11 = local_res18 + fVar3;
  if (3.1415925 <= fVar11) {
    fVar11 = fVar11 - 6.2831855;
  }
  local_res18 = local_res18 * 4.0;
  fVar5 = fVar11;
  pfVar2 = param_2;
  if (6.2831855 <= local_res18) {
    local_res18 = local_res18 - 6.2831855;
  }
  for (; pfVar2 < pfVar1; pfVar2 = pfVar2 + 4) {
    fVar11 = fVar6 * fVar6;
    fVar12 = fVar10 * fVar10;
    fVar13 = fVar3 * fVar3;
    fVar14 = fVar5 * fVar5;
    fVar4 = fVar11 * fVar6 * fVar11;
    fVar7 = fVar12 * fVar10 * fVar12;
    fVar8 = fVar13 * fVar3 * fVar13;
    fVar9 = fVar14 * fVar5 * fVar14;
    fVar15 = fVar6 + local_res18;
    fVar16 = fVar10 + local_res18;
    fVar17 = fVar3 + local_res18;
    fVar18 = fVar5 + local_res18;
    *pfVar2 = fVar11 * fVar6 * -0.16652186 + fVar6 + fVar4 * 0.008199913 +
              fVar4 * fVar11 * -0.00016147594;
    pfVar2[1] = fVar12 * fVar10 * -0.16652186 + fVar10 + fVar7 * 0.008199913 +
                fVar7 * fVar12 * -0.00016147594;
    pfVar2[2] = fVar13 * fVar3 * -0.16652186 + fVar3 + fVar8 * 0.008199913 +
                fVar8 * fVar13 * -0.00016147594;
    pfVar2[3] = fVar14 * fVar5 * -0.16652186 + fVar5 + fVar9 * 0.008199913 +
                fVar9 * fVar14 * -0.00016147594;
    fVar6 = (float)((uint)(fVar15 - 6.2831855) & -(uint)(3.1415925 <= fVar15) |
                   ~-(uint)(3.1415925 <= fVar15) & (uint)fVar15);
    fVar10 = (float)((uint)(fVar16 - 6.2831855) & -(uint)(3.1415925 <= fVar16) |
                    ~-(uint)(3.1415925 <= fVar16) & (uint)fVar16);
    fVar3 = (float)((uint)(fVar17 - 6.2831855) & -(uint)(3.1415925 <= fVar17) |
                   ~-(uint)(3.1415925 <= fVar17) & (uint)fVar17);
    fVar5 = (float)((uint)(fVar18 - 6.2831855) & -(uint)(3.1415925 <= fVar18) |
                   ~-(uint)(3.1415925 <= fVar18) & (uint)fVar18);
  }
  *param_1 = fVar6;
  if (param_5 == param_4) {
    ApplyGain(param_2,param_4,fVar11,pfVar1,fVar6,fVar3);
  }
  else {
    if (3 < param_3) {
      pfVar2 = param_2 + (param_3 & 0xfffffffc);
      fVar3 = (param_5 - param_4) / (float)(param_3 & 0xfffffffc);
      fVar5 = fVar3 * 4.0;
      fVar10 = fVar3 + param_4 + fVar3;
      fVar6 = fVar3 + param_4;
      fVar3 = fVar10 + fVar3;
      fVar11 = param_4;
      for (; param_2 < pfVar2; param_2 = param_2 + 4) {
        *param_2 = *param_2 * fVar11;
        param_2[1] = param_2[1] * fVar6;
        param_2[2] = param_2[2] * fVar10;
        param_2[3] = param_2[3] * fVar3;
        fVar6 = fVar6 + fVar5;
        fVar10 = fVar10 + fVar5;
        fVar3 = fVar3 + fVar5;
        fVar11 = fVar11 + fVar5;
      }
    }
    if (param_2 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_2) & 0xfffffffffffffffcU)) {
        fVar6 = (param_5 - param_4) / (float)param_3;
        do {
          *param_2 = param_4 * *param_2;
          fVar10 = param_4 + fVar6 + fVar6;
          param_2[1] = (param_4 + fVar6) * param_2[1];
          fVar3 = fVar10 + fVar6;
          param_2[2] = fVar10 * param_2[2];
          param_4 = fVar3 + fVar6;
          param_2[3] = fVar3 * param_2[3];
          param_2 = param_2 + 4;
        } while (param_2 < pfVar1 + -3);
      }
      if (param_2 < pfVar1) {
        fVar6 = param_4;
        do {
          *param_2 = fVar6 * *param_2;
          param_2 = param_2 + 1;
          fVar6 = fVar6 + (param_5 - param_4) / (float)param_3;
        } while (param_2 < pfVar1);
      }
    }
  }
  return;
}



// FUNCTION 1431f6200 `scalar_deleting_destructor' body=119 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkToneGen::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ae47b0;
  puVar1 = param_1 + 0x28;
  lVar2 = 3;
  do {
    puVar1 = (undefined8 *)((longlong)puVar1 + -0x24);
    AK::MemoryMgr::StartProfileThreadUsage((long)puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1431f6280 AkCreateToneSource body=325 status=ok
// SIG undefined AkCreateToneSource(void)

undefined8 * AkCreateToneSource(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (longlong)puVar1 + 0xd4;
    *puVar1 = &PTR__scalar_deleting_destructor__145ae47b0;
    lVar2 = 3;
    do {
      CAkLpFilter::CAkLpFilter(lVar3);
      lVar3 = lVar3 + 0x24;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar1 + 0xd4),0,0x6c);
    *(undefined2 *)((longlong)puVar1 + 0xc) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x3c) = 1;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x10] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0x3f800000;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined2 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431f63d0 AkCreateToneSourceParams body=37 status=ok
// SIG undefined AkCreateToneSourceParams(void)

void AkCreateToneSourceParams(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x50);
  if (lVar1 != 0) {
    CAkToneGenParams::CAkToneGenParams(lVar1);
    return;
  }
  return;
}



// FUNCTION 1431f6400 Execute body=122 status=ok
// SIG undefined Execute(void)

void CAkToneGen::Execute(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar3 = (uint)uVar1;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    uVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
    uVar3 = (uint)uVar1;
    if (uVar2 <= uVar1) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != 0) {
    (**(code **)(param_1 + 0x80))(param_1,*param_2,uVar3);
    *(short *)((longlong)param_2 + 0x12) = (short)uVar3;
  }
  if ((*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) &&
     (*(char *)(param_1 + 0x3c) != '\0')) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x11;
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  return;
}



// FUNCTION 1431f64b0 FUN_1431f64b0 body=6 status=ok
// SIG undefined FUN_1431f64b0(void)

undefined4 FUN_1431f64b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// FUNCTION 1431f64c0 FUN_1431f64c0 body=1623 status=ok
// SIG undefined FUN_1431f64c0(void)

undefined8
FUN_1431f64c0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,uint *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  
  *(undefined8 *)(param_1 + 0x148) = param_3;
  cVar10 = '\0';
  uVar15 = *param_5;
  *(uint *)(param_1 + 8) = uVar15;
  *(longlong *)(param_1 + 0x140) = param_4;
  fVar17 = (float)uVar15 * 0.5;
  if (20000.0 <= fVar17) {
    fVar17 = 20000.0;
  }
  *(float *)(param_1 + 0x30) = fVar17;
  uVar2 = *(undefined8 *)(param_4 + 0x1c);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_4 + 0x14);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x2c);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_4 + 0x24);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x3c);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_4 + 0x34);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_4 + 0x44);
  uVar15 = *(uint *)(param_4 + 0x4c);
  *(uint *)(param_1 + 0xd0) = uVar15;
  for (uVar7 = uVar15; uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
    cVar10 = cVar10 + '\x01';
  }
  *(char *)(param_5 + 1) = cVar10;
  param_5[1] = param_5[1] & 0xff;
  param_5[1] = param_5[1] | uVar15 << 0xc | 0x100;
  sVar3 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x60))();
  *(short *)(param_1 + 0xc) = sVar3;
  *(bool *)(param_1 + 0x3c) = sVar3 != 0;
  if (*(int *)(param_1 + 0xb4) == 1) {
    iVar8 = (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xbc));
    *(int *)(param_1 + 0x68) = iVar8;
    iVar13 = (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xc0));
    *(int *)(param_1 + 0x6c) = iVar13;
    iVar11 = (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xc4));
    *(int *)(param_1 + 0x70) = iVar11;
    iVar4 = (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xcc));
    *(int *)(param_1 + 0x74) = iVar4;
    *(int *)(param_1 + 0x1c) = iVar8 + iVar4 + iVar13 + iVar11;
    uVar15 = *(uint *)(param_1 + 0x68);
    if (uVar15 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 1;
      uVar15 = 1;
    }
    *(float *)(param_1 + 0x54) = 1.0 / (float)uVar15;
    fVar17 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_1 + 200) * 0.05);
    uVar15 = *(uint *)(param_1 + 0x6c);
    if (uVar15 == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      uVar15 = 1;
    }
    uVar7 = *(uint *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(float *)(param_1 + 0x58) = (-1.0 / (float)uVar15) * (1.0 - fVar17);
    if (uVar7 == 0) {
      *(undefined4 *)(param_1 + 0x74) = 1;
      uVar7 = 1;
    }
    *(float *)(param_1 + 0x60) = (-1.0 / (float)uVar7) * fVar17;
    iVar4 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    uVar12 = 0;
    if (sVar3 == 1) {
      uVar15 = *param_5;
      uVar19 = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(int *)(param_1 + 0x68) = (int)(longlong)((float)uVar15 * 0.005);
      *(int *)(param_1 + 0x70) =
           (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xb8));
      uVar12 = (undefined4)(longlong)((float)*param_5 * 0.005);
      fVar17 = -1.0 / (float)((longlong)((float)*param_5 * 0.005) & 0xffffffff);
      fVar18 = 1.0 / (float)((longlong)((float)uVar15 * 0.005) & 0xffffffff);
    }
    else {
      uVar19 = 0x3f800000;
      fVar17 = 0.0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      fVar18 = 0.0;
      *(int *)(param_1 + 0x70) =
           (int)(longlong)((float)*(uint *)(param_1 + 8) * *(float *)(param_1 + 0xb8));
    }
    *(undefined4 *)(param_1 + 0x74) = uVar12;
    *(float *)(param_1 + 0x54) = fVar18;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(float *)(param_1 + 0x60) = fVar17;
    *(undefined4 *)(param_1 + 0x7c) = uVar19;
    iVar4 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x70) +
            *(int *)(param_1 + 0x74);
    *(int *)(param_1 + 0x1c) = iVar4;
  }
  lVar16 = 0;
  *(int *)(param_1 + 0x18) = *(short *)(param_1 + 0xc) * iVar4;
  if (*(uint *)(param_1 + 0xb0) < 4) {
    fVar17 = *(float *)(param_1 + 0x98);
    fVar18 = *(float *)(param_1 + 0x9c);
    if (fVar17 != fVar18) {
      iVar4 = rand();
      fVar17 = (float)iVar4 * 3.051851e-05 * (fVar18 - fVar17) + fVar17;
    }
    *(float *)(param_1 + 0x2c) = fVar17;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      fVar17 = *(float *)(param_1 + 0xac);
      fVar18 = *(float *)(param_1 + 0xa8);
      if (fVar18 != fVar17) {
        iVar4 = rand();
        fVar18 = (float)iVar4 * 3.051851e-05 * (fVar17 - fVar18) + fVar18;
      }
      *(float *)(param_1 + 0x34) = fVar18;
    }
  }
  else if (*(uint *)(param_1 + 0xb0) == 5) {
    plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0x78);
    plVar1 = (longlong *)(param_1 + 0x90);
    *plVar1 = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) {
      return 0x34;
    }
    *(undefined8 *)(param_1 + 0x40) = 0x3fffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0x3e042108;
    if ((plVar1 < plVar5) || ((longlong *)((longlong)plVar5 + 0x74) < plVar1)) {
      lVar16 = 0x1c;
      for (lVar9 = 0x1c; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined4 *)plVar5 = 0;
        plVar5 = (longlong *)((longlong)plVar5 + 4);
      }
    }
    uVar15 = (uint)lVar16;
    if (3 < 0x1e - uVar15) {
      uVar7 = (0x1a - uVar15 >> 2) + 1;
      uVar14 = (ulonglong)uVar7;
      uVar15 = uVar15 + uVar7 * 4;
      lVar16 = lVar16 * 4;
      do {
        *(undefined4 *)(lVar16 + *plVar1) = 0;
        *(undefined4 *)(lVar16 + 4 + *plVar1) = 0;
        *(undefined4 *)(lVar16 + 8 + *plVar1) = 0;
        *(undefined4 *)(lVar16 + 0xc + *plVar1) = 0;
        uVar14 = uVar14 - 1;
        lVar16 = lVar16 + 0x10;
      } while (uVar14 != 0);
    }
    if (uVar15 < 0x1e) {
      uVar14 = (ulonglong)(0x1e - uVar15);
      lVar16 = (ulonglong)uVar15 * 4;
      do {
        *(undefined4 *)(lVar16 + *plVar1) = 0;
        uVar14 = uVar14 - 1;
        lVar16 = lVar16 + 4;
      } while (uVar14 != 0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  lVar16 = param_1 + 0xd4;
  lVar9 = 3;
  *(float *)(param_1 + 0x50) = (float)(uint)(*(int *)(param_1 + 8) << 2);
  do {
    CAkLpFilter::SetCoefs
              (lVar16,(float)*(uint *)(param_1 + 8) * 0.375,*(undefined4 *)(param_1 + 0x50));
    lVar16 = lVar16 + 0x24;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  switch(*(undefined4 *)(param_1 + 0xb0)) {
  case 0:
    *(undefined **)(param_1 + 0x88) = &DAT_1467c3bb0;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      *(code **)(param_1 + 0x80) = CAkToneGen::ProcessWaveTableNoSweep;
    }
    else {
      pcVar6 = CAkToneGen::ProcessWaveTableLogSweep;
      if (*(int *)(param_1 + 0xa4) != 1) {
        pcVar6 = CAkToneGen::ProcessWaveTableLinSweep;
      }
      *(code **)(param_1 + 0x80) = pcVar6;
    }
    break;
  case 1:
    *(undefined **)(param_1 + 0x88) = &DAT_1467c43b0;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      pcVar6 = CAkToneGen::ProcessOversampledWaveTableLogSweep;
      if (*(int *)(param_1 + 0xa4) != 1) {
        pcVar6 = CAkToneGen::ProcessOversampledWaveTableLinSweep;
      }
      *(code **)(param_1 + 0x80) = pcVar6;
      return 1;
    }
    goto LAB_1431f6a54;
  case 2:
    *(undefined **)(param_1 + 0x88) = &DAT_1467c4bb0;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      pcVar6 = CAkToneGen::ProcessOversampledWaveTableLogSweep;
      if (*(int *)(param_1 + 0xa4) != 1) {
        pcVar6 = CAkToneGen::ProcessOversampledWaveTableLinSweep;
      }
      *(code **)(param_1 + 0x80) = pcVar6;
      return 1;
    }
    goto LAB_1431f6a54;
  case 3:
    *(undefined **)(param_1 + 0x88) = &DAT_1467c53b0;
    if (*(char *)(param_1 + 0xa0) != '\0') {
      pcVar6 = CAkToneGen::ProcessOversampledWaveTableLogSweep;
      if (*(int *)(param_1 + 0xa4) != 1) {
        pcVar6 = CAkToneGen::ProcessOversampledWaveTableLinSweep;
      }
      *(code **)(param_1 + 0x80) = pcVar6;
      return 1;
    }
LAB_1431f6a54:
    *(code **)(param_1 + 0x80) = CAkToneGen::ProcessOversampledWaveTableNoSweep;
    break;
  case 4:
    *(code **)(param_1 + 0x80) = CAkToneGen::ProcessWhiteNoise;
    break;
  case 5:
    *(code **)(param_1 + 0x80) = CAkToneGen::ProcessPinkNoise;
  }
  return 1;
}



// FUNCTION 1431f6b30 Reset body=215 status=ok
// SIG undefined Reset(void)

undefined4 CAkToneGen::Reset(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  fVar3 = ::_guard_xfg_dispatch_icall_nop
                    (10.0,*(float *)(*(longlong *)(param_1 + 0x140) + 8) * 0.05);
  *(undefined8 *)(param_1 + 0x160) = 0;
  lVar1 = 3;
  *(float *)(param_1 + 0x15c) = fVar3;
  *(float *)(param_1 + 0x158) = fVar3;
  fVar3 = 10.0 / (float)*(uint *)(param_1 + 8);
  *(float *)(param_1 + 0x150) = fVar3;
  *(float *)(param_1 + 0x154) = -fVar3;
  param_1 = param_1 + 0xd4;
  do {
    CAkLpFilter::Reset(param_1);
    param_1 = param_1 + 0x24;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 1;
}



// FUNCTION 1431f6c40 Term body=86 status=ok
// SIG undefined Term(void)

undefined8 CAkToneGen::Term(undefined8 *param_1,longlong *param_2)

{
  if (param_1[0x12] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x12] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 1431f6ca0 CAkToneGenParams body=14 status=ok
// SIG undefined CAkToneGenParams(void)

undefined8 * CAkToneGenParams::CAkToneGenParams(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145ae4818;
  return param_1;
}



// FUNCTION 1431f6cb0 FUN_1431f6cb0 body=43 status=ok
// SIG undefined FUN_1431f6cb0(void)

undefined8 * FUN_1431f6cb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1431f6ce0 FUN_1431f6ce0 body=95 status=ok
// SIG undefined FUN_1431f6ce0(void)

void FUN_1431f6ce0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae4818;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 1431f6fc0 CAkLpFilter body=24 status=ok
// SIG undefined CAkLpFilter(void)

undefined8 * CAkLpFilter::CAkLpFilter(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1431f6fe0 Reset body=11 status=ok
// SIG undefined Reset(void)

void CAkLpFilter::Reset(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1431f6ff0 SetCoefs body=141 status=ok
// SIG undefined SetCoefs(void)

void CAkLpFilter::SetCoefs(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = ::_guard_xfg_dispatch_icall_nop((param_2 * 3.1415927) / param_3);
  fVar1 = 1.0 / fVar1;
  fVar3 = fVar1 * fVar1;
  fVar2 = 1.0 / (fVar1 * 1.4142135 + 1.0 + fVar3);
  *param_1 = fVar2;
  param_1[2] = fVar2;
  param_1[3] = ((1.0 - fVar3) + (1.0 - fVar3)) * fVar2;
  param_1[1] = fVar2 + fVar2;
  param_1[4] = ((1.0 - fVar1 * 1.4142135) + fVar3) * fVar2;
  return;
}



// FUNCTION 1431f7080 ProcessOversampledWaveTableLinSweep body=1598 status=ok
// SIG undefined ProcessOversampledWaveTableLinSweep(void)

void CAkToneGen::ProcessOversampledWaveTableLinSweep(longlong param_1,float *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar5;
  
  lVar7 = *(longlong *)(param_1 + 0x140);
  fVar14 = *(float *)(lVar7 + 0x10);
  fVar16 = *(float *)(lVar7 + 0xc);
  fVar9 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar7 + 8) * 0.05);
  fVar10 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar9;
  fVar9 = fVar9 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar9) / fVar10);
  if (fVar9 <= 0.0) {
    fVar10 = -fVar10;
  }
  *(float *)(param_1 + 0x154) = fVar10;
  fVar16 = fVar16 + *(float *)(param_1 + 0x2c);
  fVar14 = fVar14 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar16) {
    if (*(float *)(param_1 + 0x30) <= fVar16) {
      fVar16 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar16 = 0.001;
  }
  if (0.001 <= fVar14) {
    if (*(float *)(param_1 + 0x30) <= fVar14) {
      fVar14 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar14 = 0.001;
  }
  *(float *)(param_1 + 0x38) = (fVar14 - fVar16) / (float)(uint)(*(int *)(param_1 + 0x1c) << 2);
  if (param_3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar8 = param_3;
    do {
      iVar8 = iVar8 + -1;
      lVar7 = 2;
      fVar14 = (((float)(uVar4 * 4) * *(float *)(param_1 + 0x38) + fVar16) * 512.0) /
               *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x28) = fVar14;
      fVar10 = fVar14 - (float)((longlong)fVar14 & 0xffffffff);
      do {
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar6 = *(uint *)(param_1 + 0x20) & 0x1ff;
        iVar1 = (int)(longlong)fVar14;
        uVar4 = *(uint *)(param_1 + 0x20) + iVar1;
        fVar9 = *(float *)(param_1 + 0x24) + fVar10;
        fVar15 = (*(float *)(lVar2 + (ulonglong)(uVar6 + 1 & 0x1ff) * 4) -
                 *(float *)(lVar2 + (ulonglong)uVar6 * 4)) * *(float *)(param_1 + 0x24) +
                 *(float *)(lVar2 + (ulonglong)uVar6 * 4);
        *(float *)(param_1 + 0x24) = fVar9;
        if (1.0 < fVar9) {
          uVar4 = uVar4 + 1;
          *(float *)(param_1 + 0x24) = fVar9 - 1.0;
        }
        *(uint *)(param_1 + 0x20) = uVar4 & 0x1ff;
        fVar9 = *(float *)(param_1 + 0xe8);
        fVar13 = *(float *)(param_1 + 0xec);
        fVar12 = *(float *)(param_1 + 0xf4);
        *(float *)(param_1 + 0xe8) = fVar15;
        *(float *)(param_1 + 0xec) = fVar9;
        *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0xf0);
        fVar12 = (fVar9 * *(float *)(param_1 + 0xd8) + fVar15 * *(float *)(param_1 + 0xd4) +
                 *(float *)(param_1 + 0xdc) * fVar13) -
                 (*(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xe0) +
                 *(float *)(param_1 + 0xe4) * fVar12);
        *(float *)(param_1 + 0xf0) = fVar12;
        fVar9 = *(float *)(param_1 + 0x10c);
        fVar15 = *(float *)(param_1 + 0x110);
        fVar13 = *(float *)(param_1 + 0x118);
        *(float *)(param_1 + 0x10c) = fVar12;
        *(float *)(param_1 + 0x110) = fVar9;
        *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114);
        fVar12 = (fVar9 * *(float *)(param_1 + 0xfc) + fVar12 * *(float *)(param_1 + 0xf8) +
                 *(float *)(param_1 + 0x100) * fVar15) -
                 (*(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x104) +
                 *(float *)(param_1 + 0x108) * fVar13);
        *(float *)(param_1 + 0x114) = fVar12;
        fVar9 = *(float *)(param_1 + 0x130);
        fVar15 = *(float *)(param_1 + 0x134);
        fVar13 = *(float *)(param_1 + 0x13c);
        *(float *)(param_1 + 0x134) = fVar9;
        *(float *)(param_1 + 0x130) = fVar12;
        *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x138);
        *(float *)(param_1 + 0x138) =
             (fVar9 * *(float *)(param_1 + 0x120) + fVar12 * *(float *)(param_1 + 0x11c) +
             *(float *)(param_1 + 0x124) * fVar15) -
             (*(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x128) +
             *(float *)(param_1 + 300) * fVar13);
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar4 = *(uint *)(param_1 + 0x20) & 0x1ff;
        fVar15 = (*(float *)(lVar2 + (ulonglong)(uVar4 + 1 & 0x1ff) * 4) -
                 *(float *)(lVar2 + (ulonglong)uVar4 * 4)) * *(float *)(param_1 + 0x24) +
                 *(float *)(lVar2 + (ulonglong)uVar4 * 4);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + iVar1;
        fVar9 = fVar10 + *(float *)(param_1 + 0x24);
        *(float *)(param_1 + 0x24) = fVar9;
        if (1.0 < fVar9) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(float *)(param_1 + 0x24) = fVar9 - 1.0;
        }
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x1ff;
        fVar9 = *(float *)(param_1 + 0xe8);
        fVar13 = *(float *)(param_1 + 0xec);
        fVar11 = *(float *)(param_1 + 0xf4);
        *(float *)(param_1 + 0xec) = fVar9;
        *(float *)(param_1 + 0xe8) = fVar15;
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf0);
        fVar11 = (fVar9 * *(float *)(param_1 + 0xd8) + fVar15 * *(float *)(param_1 + 0xd4) +
                 *(float *)(param_1 + 0xdc) * fVar13) -
                 (*(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xf0) +
                 *(float *)(param_1 + 0xe4) * fVar11);
        *(float *)(param_1 + 0xf0) = fVar11;
        fVar9 = *(float *)(param_1 + 0x10c);
        fVar15 = *(float *)(param_1 + 0x110);
        fVar13 = *(float *)(param_1 + 0x118);
        *(float *)(param_1 + 0x110) = fVar9;
        *(float *)(param_1 + 0x10c) = fVar11;
        *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x114);
        fVar13 = (fVar9 * *(float *)(param_1 + 0xfc) + fVar11 * *(float *)(param_1 + 0xf8) +
                 *(float *)(param_1 + 0x100) * fVar15) -
                 (*(float *)(param_1 + 0x104) * fVar12 + *(float *)(param_1 + 0x108) * fVar13);
        *(float *)(param_1 + 0x114) = fVar13;
        fVar9 = *(float *)(param_1 + 0x134);
        fVar15 = *(float *)(param_1 + 0x13c);
        *(float *)(param_1 + 0x134) = fVar12;
        *(float *)(param_1 + 0x130) = fVar13;
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x138);
        fVar9 = (fVar13 * *(float *)(param_1 + 0x11c) + fVar12 * *(float *)(param_1 + 0x120) +
                *(float *)(param_1 + 0x124) * fVar9) -
                (*(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x138) +
                *(float *)(param_1 + 300) * fVar15);
        *(float *)(param_1 + 0x138) = fVar9;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uVar5 = (ulonglong)*(ushort *)(param_1 + 100);
      uVar4 = *(uint *)(param_1 + 0x78);
      if (*(uint *)(param_1 + 0x68 + uVar5 * 4) <= uVar4) {
        uVar3 = *(ushort *)(param_1 + 100) + 1;
        uVar5 = (ulonglong)uVar3;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(ushort *)(param_1 + 100) = uVar3;
        uVar4 = 0;
      }
      fVar14 = *(float *)(param_1 + 0x54 + uVar5 * 4) + *(float *)(param_1 + 0x7c);
      *(uint *)(param_1 + 0x78) = uVar4 + 1;
      *(float *)(param_1 + 0x7c) = fVar14;
      if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
        fVar10 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
        *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
      }
      else {
        fVar10 = *(float *)(param_1 + 0x158);
      }
      *(float *)(param_1 + 0x15c) = fVar10;
      iVar1 = *(int *)(param_1 + 0x14);
      *param_2 = fVar10 * fVar14 * fVar9;
      param_2 = param_2 + 1;
      uVar4 = iVar1 + 1;
      *(uint *)(param_1 + 0x14) = uVar4;
      if (*(uint *)(param_1 + 0x1c) <= uVar4) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        }
        uVar4 = 0;
      }
    } while (iVar8 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f76c0 ProcessOversampledWaveTableLogSweep body=1690 status=ok
// SIG undefined ProcessOversampledWaveTableLogSweep(void)

void CAkToneGen::ProcessOversampledWaveTableLogSweep(longlong param_1,float *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar5;
  
  lVar7 = *(longlong *)(param_1 + 0x140);
  fVar17 = *(float *)(lVar7 + 0xc);
  fVar15 = *(float *)(lVar7 + 0x10);
  fVar9 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar7 + 8) * 0.05);
  fVar11 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar9;
  fVar9 = fVar9 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar9) / fVar11);
  if (fVar9 <= 0.0) {
    fVar11 = -fVar11;
  }
  *(float *)(param_1 + 0x154) = fVar11;
  fVar17 = fVar17 + *(float *)(param_1 + 0x2c);
  fVar15 = fVar15 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar17) {
    if (*(float *)(param_1 + 0x30) <= fVar17) {
      fVar17 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar17 = 0.001;
  }
  if (0.001 <= fVar15) {
    if (*(float *)(param_1 + 0x30) <= fVar15) {
      fVar15 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar15 = 0.001;
  }
  fVar11 = (float)*(uint *)(param_1 + 0x1c);
  if (fVar17 < fVar15) {
    fVar11 = (0.0625 / (fVar11 * fVar11)) * (fVar15 - fVar17);
  }
  else {
    fVar11 = (fVar15 - fVar17) / SQRT(fVar11 * 4.0);
  }
  *(float *)(param_1 + 0x38) = fVar11;
  if (param_3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar8 = param_3;
    do {
      iVar8 = iVar8 + -1;
      fVar11 = (float)(uVar4 * 4);
      if (fVar17 < fVar15) {
        fVar11 = fVar11 * fVar11;
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      lVar7 = 2;
      fVar11 = ((*(float *)(param_1 + 0x38) * fVar11 + fVar17) * 512.0) / *(float *)(param_1 + 0x50)
      ;
      *(float *)(param_1 + 0x28) = fVar11;
      fVar9 = fVar11 - (float)((longlong)fVar11 & 0xffffffff);
      do {
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar6 = *(uint *)(param_1 + 0x20) & 0x1ff;
        iVar1 = (int)(longlong)fVar11;
        uVar4 = *(uint *)(param_1 + 0x20) + iVar1;
        fVar10 = *(float *)(param_1 + 0x24) + fVar9;
        fVar16 = (*(float *)(lVar2 + (ulonglong)(uVar6 + 1 & 0x1ff) * 4) -
                 *(float *)(lVar2 + (ulonglong)uVar6 * 4)) * *(float *)(param_1 + 0x24) +
                 *(float *)(lVar2 + (ulonglong)uVar6 * 4);
        *(float *)(param_1 + 0x24) = fVar10;
        if (1.0 < fVar10) {
          uVar4 = uVar4 + 1;
          *(float *)(param_1 + 0x24) = fVar10 - 1.0;
        }
        *(uint *)(param_1 + 0x20) = uVar4 & 0x1ff;
        fVar10 = *(float *)(param_1 + 0xe8);
        fVar14 = *(float *)(param_1 + 0xec);
        fVar13 = *(float *)(param_1 + 0xf4);
        *(float *)(param_1 + 0xe8) = fVar16;
        *(float *)(param_1 + 0xec) = fVar10;
        *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0xf0);
        fVar13 = (fVar16 * *(float *)(param_1 + 0xd4) + fVar10 * *(float *)(param_1 + 0xd8) +
                 fVar14 * *(float *)(param_1 + 0xdc)) -
                 (*(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xe0) +
                 fVar13 * *(float *)(param_1 + 0xe4));
        *(float *)(param_1 + 0xf0) = fVar13;
        fVar10 = *(float *)(param_1 + 0x10c);
        fVar16 = *(float *)(param_1 + 0x110);
        fVar14 = *(float *)(param_1 + 0x118);
        *(float *)(param_1 + 0x10c) = fVar13;
        *(float *)(param_1 + 0x110) = fVar10;
        *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114);
        fVar13 = (fVar13 * *(float *)(param_1 + 0xf8) + fVar10 * *(float *)(param_1 + 0xfc) +
                 fVar16 * *(float *)(param_1 + 0x100)) -
                 (*(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x104) +
                 fVar14 * *(float *)(param_1 + 0x108));
        *(float *)(param_1 + 0x114) = fVar13;
        fVar10 = *(float *)(param_1 + 0x130);
        fVar16 = *(float *)(param_1 + 0x134);
        fVar14 = *(float *)(param_1 + 0x13c);
        *(float *)(param_1 + 0x134) = fVar10;
        *(float *)(param_1 + 0x130) = fVar13;
        *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x138);
        *(float *)(param_1 + 0x138) =
             (fVar13 * *(float *)(param_1 + 0x11c) + fVar10 * *(float *)(param_1 + 0x120) +
             fVar16 * *(float *)(param_1 + 0x124)) -
             (fVar14 * *(float *)(param_1 + 300) +
             *(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x128));
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar4 = *(uint *)(param_1 + 0x20) & 0x1ff;
        fVar16 = (*(float *)(lVar2 + (ulonglong)(uVar4 + 1 & 0x1ff) * 4) -
                 *(float *)(lVar2 + (ulonglong)uVar4 * 4)) * *(float *)(param_1 + 0x24) +
                 *(float *)(lVar2 + (ulonglong)uVar4 * 4);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + iVar1;
        fVar10 = fVar9 + *(float *)(param_1 + 0x24);
        *(float *)(param_1 + 0x24) = fVar10;
        if (1.0 < fVar10) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(float *)(param_1 + 0x24) = fVar10 - 1.0;
        }
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x1ff;
        fVar10 = *(float *)(param_1 + 0xe8);
        fVar14 = *(float *)(param_1 + 0xec);
        fVar12 = *(float *)(param_1 + 0xf4);
        *(float *)(param_1 + 0xec) = fVar10;
        *(float *)(param_1 + 0xe8) = fVar16;
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf0);
        fVar12 = (fVar16 * *(float *)(param_1 + 0xd4) + fVar10 * *(float *)(param_1 + 0xd8) +
                 fVar14 * *(float *)(param_1 + 0xdc)) -
                 (fVar12 * *(float *)(param_1 + 0xe4) +
                 *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xf0));
        *(float *)(param_1 + 0xf0) = fVar12;
        fVar10 = *(float *)(param_1 + 0x10c);
        fVar16 = *(float *)(param_1 + 0x110);
        fVar14 = *(float *)(param_1 + 0x118);
        *(float *)(param_1 + 0x110) = fVar10;
        *(float *)(param_1 + 0x10c) = fVar12;
        *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x114);
        fVar14 = (fVar12 * *(float *)(param_1 + 0xf8) + fVar10 * *(float *)(param_1 + 0xfc) +
                 fVar16 * *(float *)(param_1 + 0x100)) -
                 (fVar14 * *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x104) * fVar13);
        *(float *)(param_1 + 0x114) = fVar14;
        fVar10 = *(float *)(param_1 + 0x134);
        fVar16 = *(float *)(param_1 + 0x13c);
        *(float *)(param_1 + 0x134) = fVar13;
        *(float *)(param_1 + 0x130) = fVar14;
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x138);
        fVar10 = (fVar13 * *(float *)(param_1 + 0x120) + fVar14 * *(float *)(param_1 + 0x11c) +
                 fVar10 * *(float *)(param_1 + 0x124)) -
                 (fVar16 * *(float *)(param_1 + 300) +
                 *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x138));
        *(float *)(param_1 + 0x138) = fVar10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uVar5 = (ulonglong)*(ushort *)(param_1 + 100);
      uVar4 = *(uint *)(param_1 + 0x78);
      if (*(uint *)(param_1 + 0x68 + uVar5 * 4) <= uVar4) {
        uVar3 = *(ushort *)(param_1 + 100) + 1;
        uVar5 = (ulonglong)uVar3;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(ushort *)(param_1 + 100) = uVar3;
        uVar4 = 0;
      }
      fVar11 = *(float *)(param_1 + 0x54 + uVar5 * 4) + *(float *)(param_1 + 0x7c);
      *(uint *)(param_1 + 0x78) = uVar4 + 1;
      *(float *)(param_1 + 0x7c) = fVar11;
      if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
        fVar9 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
        *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
      }
      else {
        fVar9 = *(float *)(param_1 + 0x158);
      }
      *(float *)(param_1 + 0x15c) = fVar9;
      iVar1 = *(int *)(param_1 + 0x14);
      *param_2 = fVar9 * fVar11 * fVar10;
      param_2 = param_2 + 1;
      uVar4 = iVar1 + 1;
      *(uint *)(param_1 + 0x14) = uVar4;
      if (*(uint *)(param_1 + 0x1c) <= uVar4) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        }
        uVar4 = 0;
      }
    } while (iVar8 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f7d60 ProcessOversampledWaveTableNoSweep body=1469 status=ok
// SIG undefined ProcessOversampledWaveTableNoSweep(void)

void CAkToneGen::ProcessOversampledWaveTableNoSweep(longlong param_1,float *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar5;
  
  fVar15 = *(float *)(*(longlong *)(param_1 + 0x140) + 0xc);
  fVar9 = ::_guard_xfg_dispatch_icall_nop
                    (10.0,*(float *)(*(longlong *)(param_1 + 0x140) + 8) * 0.05);
  fVar10 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar9;
  fVar9 = fVar9 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar9) / fVar10);
  if (fVar9 <= 0.0) {
    fVar10 = -fVar10;
  }
  *(float *)(param_1 + 0x154) = fVar10;
  fVar15 = fVar15 + *(float *)(param_1 + 0x2c);
  if (0.001 <= fVar15) {
    if (*(float *)(param_1 + 0x30) <= fVar15) {
      fVar15 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar15 = 0.001;
  }
  fVar15 = (fVar15 * 512.0) / *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x28) = fVar15;
  fVar10 = fVar15 - (float)((longlong)fVar15 & 0xffffffff);
  iVar8 = param_3;
  while (iVar8 != 0) {
    iVar8 = iVar8 + -1;
    lVar7 = 2;
    do {
      lVar1 = *(longlong *)(param_1 + 0x88);
      uVar6 = *(uint *)(param_1 + 0x20) & 0x1ff;
      iVar2 = (int)(longlong)fVar15;
      uVar4 = *(uint *)(param_1 + 0x20) + iVar2;
      fVar9 = *(float *)(param_1 + 0x24) + fVar10;
      fVar14 = (*(float *)(lVar1 + (ulonglong)(uVar6 + 1 & 0x1ff) * 4) -
               *(float *)(lVar1 + (ulonglong)uVar6 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar1 + (ulonglong)uVar6 * 4);
      *(float *)(param_1 + 0x24) = fVar9;
      if (1.0 < fVar9) {
        uVar4 = uVar4 + 1;
        *(float *)(param_1 + 0x24) = fVar9 - 1.0;
      }
      *(uint *)(param_1 + 0x20) = uVar4 & 0x1ff;
      fVar9 = *(float *)(param_1 + 0xe8);
      fVar13 = *(float *)(param_1 + 0xec);
      fVar12 = *(float *)(param_1 + 0xf4);
      *(float *)(param_1 + 0xe8) = fVar14;
      *(float *)(param_1 + 0xec) = fVar9;
      *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0xf0);
      fVar12 = (fVar9 * *(float *)(param_1 + 0xd8) + fVar14 * *(float *)(param_1 + 0xd4) +
               fVar13 * *(float *)(param_1 + 0xdc)) -
               (fVar12 * *(float *)(param_1 + 0xe4) +
               *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xe0));
      *(float *)(param_1 + 0xf0) = fVar12;
      fVar9 = *(float *)(param_1 + 0x10c);
      fVar14 = *(float *)(param_1 + 0x110);
      fVar13 = *(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x10c) = fVar12;
      *(float *)(param_1 + 0x110) = fVar9;
      *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114);
      fVar12 = (fVar9 * *(float *)(param_1 + 0xfc) + fVar12 * *(float *)(param_1 + 0xf8) +
               fVar14 * *(float *)(param_1 + 0x100)) -
               (fVar13 * *(float *)(param_1 + 0x108) +
               *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x104));
      *(float *)(param_1 + 0x114) = fVar12;
      fVar9 = *(float *)(param_1 + 0x130);
      fVar14 = *(float *)(param_1 + 0x134);
      fVar13 = *(float *)(param_1 + 0x13c);
      *(float *)(param_1 + 0x134) = fVar9;
      *(float *)(param_1 + 0x130) = fVar12;
      *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x138);
      *(float *)(param_1 + 0x138) =
           (fVar12 * *(float *)(param_1 + 0x11c) + fVar9 * *(float *)(param_1 + 0x120) +
           fVar14 * *(float *)(param_1 + 0x124)) -
           (fVar13 * *(float *)(param_1 + 300) +
           *(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x128));
      lVar1 = *(longlong *)(param_1 + 0x88);
      uVar4 = *(uint *)(param_1 + 0x20) & 0x1ff;
      fVar14 = (*(float *)(lVar1 + (ulonglong)(uVar4 + 1 & 0x1ff) * 4) -
               *(float *)(lVar1 + (ulonglong)uVar4 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar1 + (ulonglong)uVar4 * 4);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + iVar2;
      fVar9 = fVar10 + *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x24) = fVar9;
      if (1.0 < fVar9) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        *(float *)(param_1 + 0x24) = fVar9 - 1.0;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x1ff;
      fVar9 = *(float *)(param_1 + 0xe8);
      fVar13 = *(float *)(param_1 + 0xec);
      fVar11 = *(float *)(param_1 + 0xf4);
      *(float *)(param_1 + 0xec) = fVar9;
      *(float *)(param_1 + 0xe8) = fVar14;
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf0);
      fVar11 = (fVar9 * *(float *)(param_1 + 0xd8) + fVar14 * *(float *)(param_1 + 0xd4) +
               fVar13 * *(float *)(param_1 + 0xdc)) -
               (fVar11 * *(float *)(param_1 + 0xe4) +
               *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xf0));
      *(float *)(param_1 + 0xf0) = fVar11;
      fVar9 = *(float *)(param_1 + 0x10c);
      fVar14 = *(float *)(param_1 + 0x110);
      fVar13 = *(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x110) = fVar9;
      *(float *)(param_1 + 0x10c) = fVar11;
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x114);
      fVar13 = (fVar9 * *(float *)(param_1 + 0xfc) + fVar11 * *(float *)(param_1 + 0xf8) +
               fVar14 * *(float *)(param_1 + 0x100)) -
               (fVar13 * *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x104) * fVar12);
      *(float *)(param_1 + 0x114) = fVar13;
      fVar9 = *(float *)(param_1 + 0x134);
      fVar14 = *(float *)(param_1 + 0x13c);
      *(float *)(param_1 + 0x134) = fVar12;
      *(float *)(param_1 + 0x130) = fVar13;
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x138);
      fVar9 = (fVar13 * *(float *)(param_1 + 0x11c) + fVar12 * *(float *)(param_1 + 0x120) +
              fVar9 * *(float *)(param_1 + 0x124)) -
              (fVar14 * *(float *)(param_1 + 300) +
              *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x138));
      *(float *)(param_1 + 0x138) = fVar9;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar5 = (ulonglong)*(ushort *)(param_1 + 100);
    uVar4 = *(uint *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x68 + uVar5 * 4) <= uVar4) {
      uVar3 = *(ushort *)(param_1 + 100) + 1;
      uVar5 = (ulonglong)uVar3;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar3;
      uVar4 = 0;
    }
    fVar14 = *(float *)(param_1 + 0x54 + uVar5 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar4 + 1;
    *(float *)(param_1 + 0x7c) = fVar14;
    if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
      fVar13 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
      *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
    }
    else {
      fVar13 = *(float *)(param_1 + 0x158);
    }
    *(float *)(param_1 + 0x15c) = fVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar4 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar13 * fVar14 * fVar9;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar4) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f8320 ProcessPinkNoise body=549 status=ok
// SIG undefined ProcessPinkNoise(void)

void CAkToneGen::ProcessPinkNoise(longlong param_1,float *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar3;
  
  fVar5 = ::_guard_xfg_dispatch_icall_nop
                    (10.0,*(float *)(*(longlong *)(param_1 + 0x140) + 8) * 0.05);
  fVar7 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar5;
  fVar5 = fVar5 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar5) / fVar7);
  if (fVar5 <= 0.0) {
    fVar7 = -fVar7;
  }
  *(float *)(param_1 + 0x154) = fVar7;
  iVar4 = param_3;
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    uVar2 = *(int *)(param_1 + 0x44) + 1U & *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x44) = uVar2;
    if (uVar2 != 0) {
      uVar3 = 0;
      for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      *(float *)(param_1 + 0x48) =
           *(float *)(param_1 + 0x48) - *(float *)(*(longlong *)(param_1 + 0x90) + uVar3 * 4);
      DAT_1467c3ba0 = DAT_1467c3ba0 * 0xbb38435 + 0x3619636b;
      fVar7 = (float)DAT_1467c3ba0;
      *(float *)(param_1 + 0x48) = fVar7 * 4.656613e-10 + *(float *)(param_1 + 0x48);
      *(float *)(*(longlong *)(param_1 + 0x90) + uVar3 * 4) = fVar7 * 4.656613e-10;
    }
    DAT_1467c3ba0 = DAT_1467c3ba0 * 0xbb38435 + 0x3619636b;
    uVar2 = *(uint *)(param_1 + 0x78);
    uVar3 = (ulonglong)*(ushort *)(param_1 + 100);
    fVar7 = (float)DAT_1467c3ba0;
    if (*(uint *)(param_1 + 0x68 + uVar3 * 4) <= uVar2) {
      uVar1 = *(ushort *)(param_1 + 100) + 1;
      uVar3 = (ulonglong)uVar1;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar1;
      uVar2 = 0;
    }
    fVar5 = *(float *)(param_1 + 0x54 + uVar3 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar2 + 1;
    *(float *)(param_1 + 0x7c) = fVar5;
    if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
      fVar6 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
      *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x158);
    }
    fVar7 = (fVar7 * 4.656613e-10 + *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x4c) * fVar5
            * fVar6;
    *(float *)(param_1 + 0x15c) = fVar6;
    if (-1.0 < fVar7) {
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
    }
    else {
      fVar7 = -1.0;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar2 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar7;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar2) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f8550 ProcessWaveTableLinSweep body=658 status=ok
// SIG undefined ProcessWaveTableLinSweep(void)

void CAkToneGen::ProcessWaveTableLinSweep(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x140);
  fVar15 = *(float *)(lVar4 + 0xc);
  fVar14 = *(float *)(lVar4 + 0x10);
  fVar10 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar4 + 8) * 0.05);
  fVar12 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar10;
  fVar10 = fVar10 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar10) / fVar12);
  if (fVar10 <= 0.0) {
    fVar12 = -fVar12;
  }
  *(float *)(param_1 + 0x154) = fVar12;
  fVar15 = fVar15 + *(float *)(param_1 + 0x2c);
  fVar14 = fVar14 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar15) {
    if (*(float *)(param_1 + 0x30) <= fVar15) {
      fVar15 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar15 = 0.001;
  }
  if (0.001 <= fVar14) {
    if (*(float *)(param_1 + 0x30) <= fVar14) {
      fVar14 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar14 = 0.001;
  }
  fVar14 = (fVar14 - fVar15) / (float)*(uint *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x38) = fVar14;
  if (param_3 != 0) {
    uVar7 = *(uint *)(param_1 + 0x14);
    iVar9 = param_3;
    do {
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar8 = *(uint *)(param_1 + 0x20) & 0x1ff;
      iVar9 = iVar9 + -1;
      fVar13 = (((float)uVar7 * fVar14 + fVar15) * 512.0) / (float)*(uint *)(param_1 + 8);
      *(float *)(param_1 + 0x28) = fVar13;
      fVar12 = *(float *)(lVar4 + (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
      fVar10 = *(float *)(lVar4 + (ulonglong)uVar8 * 4);
      fVar1 = *(float *)(param_1 + 0x24);
      fVar2 = *(float *)(lVar4 + (ulonglong)uVar8 * 4);
      uVar7 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar13;
      fVar13 = (fVar13 - (float)((longlong)fVar13 & 0xffffffff)) + *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x24) = fVar13;
      if (1.0 < fVar13) {
        uVar7 = uVar7 + 1;
        *(float *)(param_1 + 0x24) = fVar13 - 1.0;
      }
      uVar6 = (ulonglong)*(ushort *)(param_1 + 100);
      *(uint *)(param_1 + 0x20) = uVar7 & 0x1ff;
      uVar7 = *(uint *)(param_1 + 0x78);
      if (*(uint *)(param_1 + 0x68 + uVar6 * 4) <= uVar7) {
        uVar5 = *(ushort *)(param_1 + 100) + 1;
        uVar6 = (ulonglong)uVar5;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(ushort *)(param_1 + 100) = uVar5;
        uVar7 = 0;
      }
      fVar13 = *(float *)(param_1 + 0x54 + uVar6 * 4) + *(float *)(param_1 + 0x7c);
      *(uint *)(param_1 + 0x78) = uVar7 + 1;
      *(float *)(param_1 + 0x7c) = fVar13;
      if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
        fVar11 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
        *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
      }
      else {
        fVar11 = *(float *)(param_1 + 0x158);
      }
      *(float *)(param_1 + 0x15c) = fVar11;
      iVar3 = *(int *)(param_1 + 0x14);
      *param_2 = fVar11 * ((fVar12 - fVar10) * fVar1 + fVar2) * fVar13;
      param_2 = param_2 + 1;
      uVar7 = iVar3 + 1;
      *(uint *)(param_1 + 0x14) = uVar7;
      if (*(uint *)(param_1 + 0x1c) <= uVar7) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        }
        uVar7 = 0;
      }
    } while (iVar9 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f87f0 ProcessWaveTableLogSweep body=702 status=ok
// SIG undefined ProcessWaveTableLogSweep(void)

void CAkToneGen::ProcessWaveTableLogSweep(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x140);
  fVar13 = *(float *)(lVar3 + 0xc);
  fVar12 = *(float *)(lVar3 + 0x10);
  fVar8 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar3 + 8) * 0.05);
  fVar10 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar8;
  fVar8 = fVar8 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar8) / fVar10);
  if (fVar8 <= 0.0) {
    fVar10 = -fVar10;
  }
  *(float *)(param_1 + 0x154) = fVar10;
  fVar13 = fVar13 + *(float *)(param_1 + 0x2c);
  fVar12 = fVar12 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar13) {
    if (*(float *)(param_1 + 0x30) <= fVar13) {
      fVar13 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar13 = 0.001;
  }
  if (0.001 <= fVar12) {
    if (*(float *)(param_1 + 0x30) <= fVar12) {
      fVar12 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar12 = 0.001;
  }
  fVar10 = (float)*(uint *)(param_1 + 0x1c);
  if (fVar13 < fVar12) {
    fVar10 = fVar10 * fVar10;
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  *(float *)(param_1 + 0x38) = (fVar12 - fVar13) / fVar10;
  if (param_3 != 0) {
    uVar6 = *(uint *)(param_1 + 0x14);
    iVar7 = param_3;
    do {
      iVar7 = iVar7 + -1;
      fVar10 = (float)uVar6;
      if (fVar13 < fVar12) {
        fVar10 = fVar10 * fVar10;
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      lVar3 = *(longlong *)(param_1 + 0x88);
      uVar6 = *(uint *)(param_1 + 0x20) & 0x1ff;
      fVar11 = ((fVar10 * *(float *)(param_1 + 0x38) + fVar13) * 512.0) /
               (float)*(uint *)(param_1 + 8);
      *(float *)(param_1 + 0x28) = fVar11;
      fVar10 = *(float *)(lVar3 + (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
      fVar8 = *(float *)(lVar3 + (ulonglong)uVar6 * 4);
      fVar1 = *(float *)(param_1 + 0x24);
      fVar2 = *(float *)(lVar3 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar11;
      fVar11 = (fVar11 - (float)((longlong)fVar11 & 0xffffffff)) + *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x24) = fVar11;
      if (1.0 < fVar11) {
        uVar6 = uVar6 + 1;
        *(float *)(param_1 + 0x24) = fVar11 - 1.0;
      }
      uVar5 = (ulonglong)*(ushort *)(param_1 + 100);
      *(uint *)(param_1 + 0x20) = uVar6 & 0x1ff;
      uVar6 = *(uint *)(param_1 + 0x78);
      if (*(uint *)(param_1 + 0x68 + uVar5 * 4) <= uVar6) {
        uVar4 = *(ushort *)(param_1 + 100) + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(ushort *)(param_1 + 100) = uVar4;
        uVar6 = 0;
      }
      fVar11 = *(float *)(param_1 + 0x54 + uVar5 * 4) + *(float *)(param_1 + 0x7c);
      *(uint *)(param_1 + 0x78) = uVar6 + 1;
      *(float *)(param_1 + 0x7c) = fVar11;
      if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
        fVar9 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
        *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
      }
      else {
        fVar9 = *(float *)(param_1 + 0x158);
      }
      *(float *)(param_1 + 0x15c) = fVar9;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      uVar6 = *(uint *)(param_1 + 0x14);
      *param_2 = fVar9 * ((fVar10 - fVar8) * fVar1 + fVar2) * fVar11;
      param_2 = param_2 + 1;
      if (*(uint *)(param_1 + 0x1c) <= uVar6) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        }
        uVar6 = 0;
      }
    } while (iVar7 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f8ab0 ProcessWaveTableNoSweep body=558 status=ok
// SIG undefined ProcessWaveTableNoSweep(void)

void CAkToneGen::ProcessWaveTableNoSweep(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar6;
  
  fVar13 = *(float *)(*(longlong *)(param_1 + 0x140) + 0xc);
  fVar9 = ::_guard_xfg_dispatch_icall_nop
                    (10.0,*(float *)(*(longlong *)(param_1 + 0x140) + 8) * 0.05);
  fVar12 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar9;
  fVar9 = fVar9 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar9) / fVar12);
  if (fVar9 <= 0.0) {
    fVar12 = -fVar12;
  }
  *(float *)(param_1 + 0x154) = fVar12;
  fVar13 = fVar13 + *(float *)(param_1 + 0x2c);
  if (0.001 <= fVar13) {
    if (*(float *)(param_1 + 0x30) <= fVar13) {
      fVar13 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar13 = 0.001;
  }
  fVar13 = (fVar13 * 512.0) / (float)*(uint *)(param_1 + 8);
  *(float *)(param_1 + 0x28) = fVar13;
  iVar8 = param_3;
  while (iVar8 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    iVar8 = iVar8 + -1;
    fVar12 = *(float *)(param_1 + 0x24);
    uVar7 = *(uint *)(param_1 + 0x20) & 0x1ff;
    fVar9 = *(float *)(lVar3 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
    uVar5 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar13;
    fVar1 = *(float *)(lVar3 + (ulonglong)uVar7 * 4);
    fVar11 = fVar12 + (fVar13 - (float)((longlong)fVar13 & 0xffffffff));
    fVar2 = *(float *)(lVar3 + (ulonglong)uVar7 * 4);
    *(float *)(param_1 + 0x24) = fVar11;
    if (1.0 < fVar11) {
      uVar5 = uVar5 + 1;
      *(float *)(param_1 + 0x24) = fVar11 - 1.0;
    }
    uVar7 = *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x20) = uVar5 & 0x1ff;
    uVar6 = (ulonglong)*(ushort *)(param_1 + 100);
    if (*(uint *)(param_1 + 0x68 + uVar6 * 4) <= uVar7) {
      uVar4 = *(ushort *)(param_1 + 100) + 1;
      uVar6 = (ulonglong)uVar4;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar4;
      uVar7 = 0;
    }
    fVar11 = *(float *)(param_1 + 0x54 + uVar6 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar7 + 1;
    *(float *)(param_1 + 0x7c) = fVar11;
    if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
      fVar10 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
      *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
    }
    else {
      fVar10 = *(float *)(param_1 + 0x158);
    }
    *(float *)(param_1 + 0x15c) = fVar10;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar5 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar10 * ((fVar9 - fVar1) * fVar12 + fVar2) * fVar11;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar5) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f8ce0 ProcessWhiteNoise body=398 status=ok
// SIG undefined ProcessWhiteNoise(void)

void CAkToneGen::ProcessWhiteNoise(longlong param_1,float *param_2,int param_3)

{
  ushort uVar1;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar2;
  
  fVar5 = ::_guard_xfg_dispatch_icall_nop
                    (10.0,*(float *)(*(longlong *)(param_1 + 0x140) + 8) * 0.05);
  fVar7 = *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0x158) = fVar5;
  fVar5 = fVar5 - *(float *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x164) = (int)(longlong)(ABS(fVar5) / fVar7);
  if (fVar5 <= 0.0) {
    fVar7 = -fVar7;
  }
  *(float *)(param_1 + 0x154) = fVar7;
  iVar4 = param_3;
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    DAT_1467c3ba0 = DAT_1467c3ba0 * 0xbb38435 + 0x3619636b;
    uVar3 = *(uint *)(param_1 + 0x78);
    uVar2 = (ulonglong)*(ushort *)(param_1 + 100);
    fVar7 = (float)DAT_1467c3ba0;
    if (*(uint *)(param_1 + 0x68 + uVar2 * 4) <= uVar3) {
      uVar1 = *(ushort *)(param_1 + 100) + 1;
      uVar2 = (ulonglong)uVar1;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar1;
      uVar3 = 0;
    }
    fVar5 = *(float *)(param_1 + 0x54 + uVar2 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar3 + 1;
    *(float *)(param_1 + 0x7c) = fVar5;
    if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x164)) {
      fVar6 = *(float *)(param_1 + 0x154) + *(float *)(param_1 + 0x15c);
      *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) + 1;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x158);
    }
    *(float *)(param_1 + 0x15c) = fVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar3 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar5 * fVar7 * fVar6 * 4.656613e-10;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar3) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xb4) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1431f8e70 FUN_1431f8e70 body=43 status=ok
// SIG undefined FUN_1431f8e70(void)

undefined8 * FUN_1431f8e70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1431f8ea0 ApplyGain body=547 status=ok
// SIG undefined ApplyGain(void)

void AK::DSP::ApplyGain(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar6 = (ulonglong)uVar3;
  if (uVar4 != 0) {
    lVar8 = 0;
    if (param_3 == param_2) {
      uVar6 = (ulonglong)uVar4;
      do {
        ApplyGain(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar8 * 4,param_2,uVar3);
        lVar8 = lVar8 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    else {
      uVar7 = (ulonglong)uVar4;
      do {
        pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar8 * 4);
        pfVar1 = pfVar5 + uVar6;
        if (3 < uVar3) {
          uVar4 = uVar3 & 0xfffffffc;
          pfVar2 = pfVar5 + uVar4;
          fVar11 = (param_3 - param_2) / (float)uVar4;
          fVar9 = fVar11 * 4.0;
          fVar10 = fVar11 + param_2 + fVar11;
          fVar13 = fVar11 + param_2;
          fVar11 = fVar10 + fVar11;
          fVar12 = param_2;
          for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
            *pfVar5 = *pfVar5 * fVar12;
            pfVar5[1] = pfVar5[1] * fVar13;
            pfVar5[2] = pfVar5[2] * fVar10;
            pfVar5[3] = pfVar5[3] * fVar11;
            fVar13 = fVar13 + fVar9;
            fVar10 = fVar10 + fVar9;
            fVar11 = fVar11 + fVar9;
            fVar12 = fVar12 + fVar9;
          }
        }
        if (pfVar5 < pfVar1) {
          fVar13 = param_2;
          if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
            fVar10 = (param_3 - param_2) / (float)uVar6;
            do {
              *pfVar5 = fVar13 * *pfVar5;
              fVar11 = fVar13 + fVar10 + fVar10;
              pfVar5[1] = (fVar13 + fVar10) * pfVar5[1];
              fVar12 = fVar11 + fVar10;
              pfVar5[2] = fVar11 * pfVar5[2];
              fVar13 = fVar12 + fVar10;
              pfVar5[3] = fVar12 * pfVar5[3];
              pfVar5 = pfVar5 + 4;
            } while (pfVar5 < pfVar1 + -3);
          }
          if (pfVar5 < pfVar1) {
            fVar10 = fVar13;
            do {
              *pfVar5 = fVar10 * *pfVar5;
              pfVar5 = pfVar5 + 1;
              fVar10 = fVar10 + (param_3 - fVar13) / (float)uVar6;
            } while (pfVar5 < pfVar1);
          }
        }
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}



// FUNCTION 1431f90d0 FUN_1431f90d0 body=86 status=ok
// SIG undefined FUN_1431f90d0(void)

undefined8 * FUN_1431f90d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4848;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(uint *)(puVar1 + 5) = *(uint *)(puVar1 + 5) & 0xff;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431f9130 Execute body=414 status=ok
// SIG undefined Execute(void)

void CAkPeakLimiterFX::Execute(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  
  lVar7 = param_1[2];
  if (*(char *)(lVar7 + 0x18) != '\0') {
    fVar8 = ::_guard_xfg_dispatch_icall_nop
                      (-2.2 / ((float)*(uint *)((longlong)param_1 + 0x24) * *(float *)(lVar7 + 0x10)
                              ));
    *(float *)((longlong)param_1 + 0x5c) = fVar8;
    *(undefined1 *)(lVar7 + 0x18) = 0;
    lVar7 = param_1[2];
  }
  if (*(char *)(lVar7 + 0x22) != '\0') {
    iVar1 = InitDelayLine(param_1);
    if (iVar1 != 1) {
      return;
    }
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  uVar2 = *(uint *)(param_1 + 7);
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
    uVar3 = *(ushort *)((longlong)param_2 + 0x12);
    goto LAB_1431f928b;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x54);
  if ((uVar5 == 0) && (*(short *)((longlong)param_2 + 0x12) == 0)) {
    return;
  }
  if ((uVar5 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) {
    *(uint *)((longlong)param_1 + 0x54) = uVar2;
    uVar5 = uVar2;
LAB_1431f91df:
    *(uint *)(param_1 + 0xb) = uVar2;
  }
  else if (*(uint *)(param_1 + 0xb) < uVar2) {
    uVar5 = (uVar5 - *(uint *)(param_1 + 0xb)) + uVar2;
    *(uint *)((longlong)param_1 + 0x54) = uVar5;
    goto LAB_1431f91df;
  }
  uVar4 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar2 = uVar5;
  if (uVar4 <= uVar5) {
    uVar2 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0x54) = uVar5 - uVar2;
  uVar3 = *(ushort *)((longlong)param_2 + 0x12);
  iVar1 = (uint)*(ushort *)(param_2 + 2) - (uint)uVar3;
  if (iVar1 != 0) {
    uVar3 = *(ushort *)(param_2 + 2);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar7 = 0;
      uVar6 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 +
                           ((ulonglong)*(ushort *)(param_2 + 2) * lVar7 +
                           (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar1 * 4));
        lVar7 = lVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar3 = *(ushort *)(param_2 + 2);
    }
    *(ushort *)((longlong)param_2 + 0x12) = uVar3;
  }
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_1431f928b:
  if (uVar3 != 0) {
    (*(code *)param_1[1])(param_1,param_2);
    AK::DSP::ApplyGain(param_2,(int)param_1[4],*(undefined4 *)(param_1[2] + 0x14),
                       *(undefined1 *)(param_1[2] + 0x20));
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1[2] + 0x14);
  }
  return;
}



// FUNCTION 1431f9320 InitDelayLine body=354 status=ok
// SIG undefined InitDelayLine(void)

undefined8 CAkPeakLimiterFX::InitDelayLine(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  float fVar7;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x28) & 0xff;
  uVar6 = (ulonglong)uVar5;
  *(uint *)(param_1 + 0x30) = uVar5;
  if ((*(char *)(lVar1 + 0x20) == '\0') && ((*(uint *)(param_1 + 0x28) & 0x8000) != 0)) {
    uVar5 = uVar5 - 1;
    *(uint *)(param_1 + 0x30) = uVar5;
  }
  if (*(char *)(lVar1 + 0x21) != '\0') {
    uVar5 = 1;
  }
  *(uint *)(param_1 + 0x34) = uVar5;
  uVar4 = (ulonglong)((float)*(uint *)(param_1 + 0x24) * *(float *)(lVar1 + 0x1c));
  *(int *)(param_1 + 0x38) = (int)uVar4;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(-4.4 / (float)(uVar4 & 0xffffffff));
  *(float *)(param_1 + 0x60) = fVar7;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                    (*(longlong **)(param_1 + 0x18),(uVar4 & 0xffffffff) * uVar6 * 4);
  *(longlong *)(param_1 + 0x48) = lVar1;
  if (lVar1 == 0) {
LAB_1431f9467:
    uVar3 = 0x34;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x21) == '\0') || (*(int *)(param_1 + 0x30) == 1)
       ) {
      pcVar2 = FUN_1431f9490;
    }
    else if (((*(uint *)(param_1 + 0x28) & 0x8000) == 0) ||
            (*(char *)(*(longlong *)(param_1 + 0x10) + 0x20) != '\0')) {
      pcVar2 = FUN_1431f9af0;
    }
    else {
      pcVar2 = FUN_1431fa240;
    }
    *(code **)(param_1 + 8) = pcVar2;
    if (*(uint *)(param_1 + 0x34) != 0) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                        (*(longlong **)(param_1 + 0x18),(ulonglong)*(uint *)(param_1 + 0x34) << 4);
      *(longlong *)(param_1 + 0x40) = lVar1;
      if (lVar1 == 0) goto LAB_1431f9467;
    }
    uVar3 = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x22) = 0;
  }
  return uVar3;
}



// FUNCTION 1431f9490 FUN_1431f9490 body=1622 status=ok
// SIG undefined FUN_1431f9490(void)

void FUN_1431f9490(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  ulonglong uVar19;
  float *pfVar20;
  uint uVar21;
  float *pfVar22;
  uint uVar23;
  float *pfVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_res20;
  longlong local_108;
  
  lVar25 = *(longlong *)(param_1 + 0x10);
  pfVar20 = (float *)0x0;
  uVar9 = *(uint *)(param_1 + 0x30);
  pfVar22 = (float *)0x0;
  uVar10 = *(uint *)(param_1 + 0x38);
  uVar11 = *(uint *)(param_1 + 0x50);
  fVar4 = *(float *)(lVar25 + 8);
  fVar5 = *(float *)(param_1 + 0x60);
  fVar6 = *(float *)(param_1 + 0x5c);
  fVar7 = *(float *)(lVar25 + 0xc);
  if ((*(char *)(lVar25 + 0x20) == '\0') && ((*(uint *)(param_2 + 1) & 0x8000) != 0)) {
    uVar19 = (ulonglong)(uVar9 * uVar10);
    pfVar24 = (float *)(*param_2 +
                       (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                       (ulonglong)*(ushort *)(param_2 + 2) * 4);
    lVar25 = *(longlong *)(param_1 + 0x48);
    pfVar1 = pfVar24 + *(ushort *)((longlong)param_2 + 0x12);
    pfVar2 = (float *)(lVar25 + (uVar19 + uVar10) * 4);
    pfVar22 = (float *)(lVar25 + uVar19 * 4);
    pfVar3 = (float *)(lVar25 + (uVar19 + uVar11) * 4);
    while (pfVar20 = pfVar3, pfVar24 < pfVar1) {
      uVar19 = (longlong)pfVar1 - (longlong)pfVar24 >> 2;
      uVar15 = (longlong)pfVar2 - (longlong)pfVar20 >> 2;
      if ((longlong)uVar15 <= (longlong)uVar19) {
        uVar19 = uVar15;
      }
      uVar15 = uVar19 & 0xffffffff;
      uVar16 = (uint)uVar19;
      while (uVar16 != 0) {
        fVar29 = *pfVar20;
        *pfVar20 = *pfVar24;
        pfVar20 = pfVar20 + 1;
        *pfVar24 = fVar29;
        pfVar24 = pfVar24 + 1;
        uVar16 = (int)uVar15 - 1;
        uVar15 = (ulonglong)uVar16;
      }
      pfVar3 = pfVar22;
      if (pfVar20 != pfVar2) {
        pfVar3 = pfVar20;
      }
    }
  }
  local_res20 = 0;
  if (uVar9 != 0) {
    lVar25 = 0;
    local_108 = 0;
    do {
      uVar8 = *(ushort *)((longlong)param_2 + 0x12);
      pfVar24 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * local_108 * 4);
      lVar12 = *(longlong *)(param_1 + 0x48);
      pfVar1 = pfVar24 + uVar8;
      uVar16 = local_res20 * uVar10;
      pfVar2 = (float *)(lVar12 + ((ulonglong)uVar16 + (ulonglong)uVar11) * 4);
      pfVar3 = (float *)(lVar12 + ((ulonglong)uVar16 + (ulonglong)uVar10) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      pfVar22 = (float *)(lVar12 + (ulonglong)uVar16 * 4);
      fVar29 = *(float *)(lVar13 + lVar25);
      fVar27 = *(float *)(lVar13 + 4 + lVar25);
      fVar30 = *(float *)(lVar13 + 8 + lVar25);
      uVar16 = *(uint *)(lVar13 + 0xc + lVar25);
      if (*(char *)(param_1 + 100) != '\0') {
        uVar21 = uVar10;
        if (uVar8 <= uVar10) {
          uVar21 = (uint)uVar8;
        }
        uVar19 = 0;
        if (3 < uVar21) {
          pfVar20 = pfVar24 + 2;
          do {
            uVar23 = uVar21 - (int)uVar19;
            fVar26 = ABS(pfVar20[-2]);
            fVar18 = fVar26;
            if (fVar26 <= fVar27) {
              fVar18 = fVar27;
            }
            fVar28 = ABS(pfVar20[-1]);
            uVar17 = uVar23;
            if (fVar26 < fVar27) {
              uVar17 = uVar16;
            }
            bVar14 = fVar28 < fVar18;
            if (!bVar14) {
              fVar18 = fVar28;
            }
            uVar16 = uVar23 - 1;
            if (bVar14) {
              uVar16 = uVar17;
            }
            fVar27 = ABS(*pfVar20);
            fVar26 = fVar27;
            if (fVar27 <= fVar18) {
              fVar26 = fVar18;
            }
            fVar28 = ABS(pfVar20[1]);
            uVar17 = uVar23 - 2;
            if (fVar27 < fVar18) {
              uVar17 = uVar16;
            }
            fVar27 = fVar28;
            if (fVar28 <= fVar26) {
              fVar27 = fVar26;
            }
            uVar16 = uVar23 - 3;
            if (fVar28 < fVar26) {
              uVar16 = uVar17;
            }
            pfVar20 = pfVar20 + 4;
            uVar23 = (int)uVar19 + 4;
            uVar19 = (ulonglong)uVar23;
          } while (uVar23 < uVar21 - 3);
        }
        if ((uint)uVar19 < uVar21) {
          pfVar20 = pfVar24 + uVar19;
          fVar18 = fVar27;
          do {
            fVar26 = *pfVar20;
            pfVar20 = pfVar20 + 1;
            fVar26 = ABS(fVar26);
            fVar27 = fVar26;
            if (fVar26 <= fVar18) {
              fVar27 = fVar18;
            }
            uVar23 = uVar21 - (int)uVar19;
            if (fVar26 < fVar18) {
              uVar23 = uVar16;
            }
            uVar16 = uVar23;
            uVar23 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar23;
            fVar18 = fVar27;
          } while (uVar23 < uVar21);
        }
        if (local_res20 == uVar9 - 1) {
          *(undefined1 *)(param_1 + 100) = 0;
        }
      }
      fVar18 = (float)(((uint)fVar27 & 0x7fffff) + 0x3f800000);
      fVar26 = fVar18 + 1.0;
      fVar18 = ((23.162373 / (fVar26 * fVar26 * fVar26)) * (fVar18 * fVar18 * fVar18 - 1.0) +
               ((float)((uint)fVar27 >> 0x17 & 0xff) - 127.0) * 6.0206) - fVar4;
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      while (pfVar20 = pfVar2, pfVar24 < pfVar1) {
        uVar19 = (longlong)pfVar1 - (longlong)pfVar24 >> 2;
        uVar15 = (longlong)pfVar3 - (longlong)pfVar20 >> 2;
        if ((longlong)uVar15 <= (longlong)uVar19) {
          uVar19 = uVar15;
        }
        uVar15 = uVar19 & 0xffffffff;
        uVar21 = (uint)uVar19;
        while (uVar21 != 0) {
          fVar26 = *pfVar24;
          uVar21 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar21;
          fVar28 = *pfVar20;
          *pfVar20 = fVar26;
          fVar26 = ABS(fVar26);
          if (fVar26 <= fVar30) {
            fVar26 = fVar30;
          }
          pfVar20 = pfVar20 + 1;
          if ((uVar16 == 0) || (fVar27 < fVar26)) {
            fVar30 = 0.0;
            fVar27 = (float)(((uint)fVar26 & 0x7fffff) + 0x3f800000);
            fVar18 = fVar27 + 1.0;
            fVar18 = ((23.162373 / (fVar18 * fVar18 * fVar18)) * (fVar27 * fVar27 * fVar27 - 1.0) +
                     ((float)((uint)fVar26 >> 0x17 & 0xff) - 127.0) * 6.0206) - fVar4;
            fVar27 = fVar26;
            uVar16 = uVar10;
            if (fVar18 <= 0.0) {
              fVar18 = 0.0;
            }
          }
          else {
            fVar30 = fVar26;
            uVar16 = uVar16 - 1;
          }
          fVar26 = fVar6;
          if (0.0 <= fVar18 - fVar29) {
            fVar26 = fVar5;
          }
          fVar29 = (fVar29 - fVar18) * fVar26 + fVar18;
          fVar26 = fVar29 * (0.05 / fVar7 - 0.05);
          if (-37.0 <= fVar26) {
            uVar23 = (uint)(longlong)(fVar26 * 27866352.0 + 1.0653532e+09);
            fVar26 = (float)((uVar23 & 0x7fffff) + 0x3f800000);
            fVar26 = ((fVar26 * 0.32518977 + 0.020805772) * fVar26 + 0.65304345) *
                     (float)(uVar23 & 0xff800000);
          }
          else {
            fVar26 = 0.0;
          }
          *pfVar24 = fVar26 * fVar28;
          pfVar24 = pfVar24 + 1;
        }
        pfVar2 = pfVar22;
        if (pfVar20 != pfVar3) {
          pfVar2 = pfVar20;
        }
      }
      local_res20 = local_res20 + 1;
      local_108 = local_108 + 1;
      *(float *)(lVar25 + *(longlong *)(param_1 + 0x40)) = fVar29;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4 + lVar25) = fVar27;
      *(float *)(*(longlong *)(param_1 + 0x40) + 8 + lVar25) = fVar30;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0xc + lVar25) = uVar16;
      lVar25 = lVar25 + 0x10;
    } while (local_res20 < uVar9);
  }
  *(int *)(param_1 + 0x50) = (int)((longlong)pfVar20 - (longlong)pfVar22 >> 2);
  return;
}



// FUNCTION 1431f9af0 FUN_1431f9af0 body=1864 status=ok
// SIG undefined FUN_1431f9af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431f9af0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_res18;
  longlong local_128;
  longlong local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  longlong local_100;
  longlong local_f8;
  
  bVar2 = *(byte *)(param_1 + 0x28);
  uVar24 = (ulonglong)bVar2;
  uVar3 = *(ushort *)((longlong)param_2 + 0x12);
  local_118 = *(float *)(param_1 + 0x38);
  uVar4 = *(ushort *)(param_2 + 2);
  local_128 = *param_2;
  local_108 = 0.05 / *(float *)(*(longlong *)(param_1 + 0x10) + 0xc) - 0.05;
  local_114 = *(float *)(*(longlong *)(param_1 + 0x10) + 8);
  local_110 = *(float *)(param_1 + 0x60);
  local_10c = *(float *)(param_1 + 0x5c);
  lVar21 = *(longlong *)(param_1 + 0x48) + (ulonglong)(*(int *)(param_1 + 0x50) * (uint)bVar2) * 4;
  local_100 = *(longlong *)(param_1 + 0x48) + (ulonglong)((int)local_118 * (uint)bVar2) * 4;
  pfVar12 = *(float **)(param_1 + 0x40);
  fVar29 = *pfVar12;
  fVar9 = pfVar12[1];
  fVar26 = pfVar12[2];
  fVar27 = pfVar12[3];
  uVar10 = uVar24 * 4 + 0xf;
  if (uVar10 <= uVar24 * 4) {
    uVar10 = 0xffffffffffffff0;
  }
  local_120 = (longlong)&local_128 - (uVar10 & 0xfffffffffffffff0);
  uVar23 = (uint)bVar2;
  if (*(char *)(param_1 + 100) != '\0') {
    fVar8 = local_118;
    if ((uint)uVar3 <= (uint)local_118) {
      fVar8 = (float)(uint)uVar3;
    }
    if (uVar23 != 0) {
      uVar10 = uVar24;
      lVar17 = local_128;
      do {
        uVar15 = 0;
        if (3 < (uint)fVar8) {
          pfVar12 = (float *)(lVar17 + 8);
          do {
            fVar18 = (float)((int)fVar8 - (int)uVar15);
            fVar25 = ABS(pfVar12[-2]);
            fVar14 = fVar25;
            if (fVar25 <= fVar9) {
              fVar14 = fVar9;
            }
            fVar28 = ABS(pfVar12[-1]);
            fVar7 = fVar18;
            if (fVar25 <= fVar9) {
              fVar7 = fVar27;
            }
            fVar9 = fVar14;
            if (fVar14 < fVar28) {
              fVar9 = fVar28;
            }
            fVar27 = (float)((int)fVar18 - 1);
            if (fVar28 <= fVar14) {
              fVar27 = fVar7;
            }
            fVar25 = ABS(*pfVar12);
            fVar14 = fVar25;
            if (fVar25 <= fVar9) {
              fVar14 = fVar9;
            }
            fVar7 = (float)((int)fVar18 - 2);
            if (fVar25 <= fVar9) {
              fVar7 = fVar27;
            }
            fVar27 = (float)((int)fVar18 - 3);
            fVar9 = ABS(pfVar12[1]);
            if (ABS(pfVar12[1]) <= fVar14) {
              fVar27 = fVar7;
              fVar9 = fVar14;
            }
            pfVar12 = pfVar12 + 4;
            uVar13 = (int)uVar15 + 4;
            uVar15 = (ulonglong)uVar13;
          } while (uVar13 < (int)fVar8 - 3U);
        }
        if ((uint)(float)uVar15 < (uint)fVar8) {
          pfVar12 = (float *)(lVar17 + uVar15 * 4);
          do {
            fVar14 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            fVar18 = (float)((int)fVar8 - (int)uVar15);
            fVar25 = ABS(fVar14);
            if (ABS(fVar14) <= fVar9) {
              fVar18 = fVar27;
              fVar25 = fVar9;
            }
            fVar9 = fVar25;
            fVar27 = fVar18;
            fVar14 = (float)((int)uVar15 + 1);
            uVar15 = (ulonglong)(uint)fVar14;
          } while ((uint)fVar14 < (uint)fVar8);
        }
        lVar17 = lVar17 + (ulonglong)uVar4 * 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  uVar10 = 0;
  fVar8 = (float)(((uint)fVar9 & 0x7fffff) + 0x3f800000);
  fVar14 = fVar8 + 1.0;
  fVar8 = ((23.162373 / (fVar14 * fVar14 * fVar14)) * (fVar8 * fVar8 * fVar8 - 1.0) +
          ((float)((uint)fVar9 >> 0x17 & 0xff) - 127.0) * 6.0206) - local_114;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (uVar3 != 0) {
    do {
      local_res18 = (uint)uVar3;
      uVar15 = (ulonglong)((uint)uVar3 - (int)uVar10);
      lVar17 = local_100 + -lVar21;
      auVar5._8_8_ = lVar17 >> 0x3f;
      auVar5._0_8_ = lVar17 >> 2;
      if (SUB168(auVar5 / SEXT816((longlong)uVar24),0) <= (longlong)uVar15) {
        uVar15 = (ulonglong)SUB164(auVar5 / SEXT816((longlong)uVar24),0);
      }
      if ((int)uVar15 != 0) {
        uVar22 = (ulonglong)uVar4;
        local_f8 = uVar24 * -4;
        lVar17 = local_120 + 8 + -lVar21;
        fVar14 = fVar26;
        do {
          uVar13 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar13;
          uVar20 = 0;
          lVar16 = local_128;
          if (3 < uVar23) {
            lVar1 = uVar22 * 4;
            uVar6 = (bVar2 - 4 >> 2) + 1;
            uVar19 = (ulonglong)uVar6;
            uVar20 = (ulonglong)(uVar6 * 4);
            pfVar12 = (float *)(lVar21 + 4);
            do {
              *(float *)(lVar17 + -0xc + (longlong)pfVar12) = pfVar12[-1];
              fVar26 = *(float *)(lVar16 + uVar10 * 4);
              pfVar12[-1] = fVar26;
              fVar26 = ABS(fVar26);
              *(float *)(lVar17 + -8 + (longlong)pfVar12) = *pfVar12;
              if (fVar26 <= fVar14) {
                fVar26 = fVar14;
              }
              fVar18 = *(float *)(lVar16 + lVar1 + uVar10 * 4);
              lVar16 = lVar16 + lVar1 + lVar1;
              *pfVar12 = fVar18;
              fVar18 = ABS(fVar18);
              *(float *)(lVar17 + -4 + (longlong)pfVar12) = pfVar12[1];
              if (fVar18 <= fVar26) {
                fVar18 = fVar26;
              }
              fVar26 = *(float *)(lVar16 + uVar10 * 4);
              pfVar12[1] = fVar26;
              lVar16 = lVar16 + lVar1;
              *(float *)(lVar17 + -0x10 + (longlong)(pfVar12 + 4)) = pfVar12[2];
              fVar26 = ABS(fVar26);
              fVar14 = *(float *)(lVar16 + uVar10 * 4);
              if (fVar26 <= fVar18) {
                fVar26 = fVar18;
              }
              pfVar12[2] = fVar14;
              lVar16 = lVar16 + lVar1;
              fVar14 = ABS(fVar14);
              if (fVar14 <= fVar26) {
                fVar14 = fVar26;
              }
              uVar19 = uVar19 - 1;
              pfVar12 = pfVar12 + 4;
            } while (uVar19 != 0);
          }
          if ((uint)uVar20 < uVar23) {
            uVar19 = (ulonglong)((uint)bVar2 - (uint)uVar20);
            pfVar12 = (float *)(lVar16 + uVar10 * 4);
            pfVar11 = (float *)(lVar21 + uVar20 * 4);
            fVar26 = fVar14;
            do {
              *(float *)(lVar17 + -8 + (longlong)pfVar11) = *pfVar11;
              fVar14 = *pfVar12;
              pfVar12 = pfVar12 + uVar22;
              *pfVar11 = fVar14;
              fVar14 = ABS(fVar14);
              if (fVar14 <= fVar26) {
                fVar14 = fVar26;
              }
              uVar19 = uVar19 - 1;
              pfVar11 = pfVar11 + 1;
              fVar26 = fVar14;
            } while (uVar19 != 0);
          }
          lVar17 = lVar17 + local_f8;
          lVar21 = lVar21 + uVar24 * 4;
          if ((fVar27 == 0.0) || (fVar9 < fVar14)) {
            fVar26 = 0.0;
            fVar9 = (float)(((uint)fVar14 & 0x7fffff) + 0x3f800000);
            fVar27 = fVar9 + 1.0;
            fVar8 = ((23.162373 / (fVar27 * fVar27 * fVar27)) * (fVar9 * fVar9 * fVar9 - 1.0) +
                    ((float)((uint)fVar14 >> 0x17 & 0xff) - 127.0) * 6.0206) - local_114;
            fVar9 = fVar14;
            fVar27 = local_118;
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
          }
          else {
            fVar26 = fVar14;
            fVar27 = (float)((int)fVar27 - 1);
          }
          fVar14 = local_10c;
          if (0.0 <= fVar8 - fVar29) {
            fVar14 = local_110;
          }
          fVar29 = (fVar29 - fVar8) * fVar14 + fVar8;
          if (-37.0 <= fVar29 * local_108) {
            uVar6 = (uint)(longlong)(fVar29 * local_108 * 27866352.0 + 1.0653532e+09);
            fVar14 = (float)((uVar6 & 0x7fffff) + 0x3f800000);
            fVar14 = ((fVar14 * 0.32518977 + 0.020805772) * fVar14 + 0.65304345) *
                     (float)(uVar6 & 0xff800000);
          }
          else {
            fVar14 = 0.0;
          }
          uVar20 = 0;
          lVar16 = local_128;
          if (3 < uVar23) {
            uVar6 = (bVar2 - 4 >> 2) + 1;
            lVar1 = uVar22 * 4;
            uVar19 = (ulonglong)uVar6;
            uVar20 = (ulonglong)(uVar6 * 4);
            pfVar12 = (float *)(local_120 + 8);
            do {
              *(float *)(lVar16 + uVar10 * 4) = fVar14 * pfVar12[-2];
              *(float *)(lVar16 + lVar1 + uVar10 * 4) = fVar14 * pfVar12[-1];
              lVar16 = lVar16 + lVar1 + lVar1;
              *(float *)(lVar16 + uVar10 * 4) = fVar14 * *pfVar12;
              lVar16 = lVar16 + lVar1;
              *(float *)(lVar16 + uVar10 * 4) = fVar14 * pfVar12[1];
              lVar16 = lVar16 + lVar1;
              uVar19 = uVar19 - 1;
              pfVar12 = pfVar12 + 4;
            } while (uVar19 != 0);
          }
          if ((uint)uVar20 < uVar23) {
            pfVar11 = (float *)(lVar16 + uVar10 * 4);
            uVar19 = (ulonglong)((uint)bVar2 - (uint)uVar20);
            pfVar12 = (float *)(local_120 + uVar20 * 4);
            do {
              fVar18 = *pfVar12;
              pfVar12 = pfVar12 + 1;
              *pfVar11 = fVar14 * fVar18;
              pfVar11 = pfVar11 + uVar4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          uVar10 = (ulonglong)((int)uVar10 + 1);
          fVar14 = fVar26;
        } while (uVar13 != 0);
      }
      if (lVar21 == local_100) {
        lVar21 = *(longlong *)(param_1 + 0x48);
      }
    } while ((uint)uVar10 < local_res18);
  }
  **(float **)(param_1 + 0x40) = fVar29;
  *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar9;
  *(float *)(*(longlong *)(param_1 + 0x40) + 8) = fVar26;
  *(float *)(*(longlong *)(param_1 + 0x40) + 0xc) = fVar27;
  *(int *)(param_1 + 0x50) =
       (int)((lVar21 - *(longlong *)(param_1 + 0x48) >> 2 & 0xffffffffU) / uVar24);
  return;
}



// FUNCTION 1431fa240 FUN_1431fa240 body=1913 status=ok
// SIG undefined FUN_1431fa240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431fa240(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar12;
  float fVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  uint local_108;
  longlong local_100;
  longlong local_f8;
  
  bVar2 = *(byte *)(param_1 + 0x28);
  local_120 = *(float *)(param_1 + 0x38);
  uVar3 = *(ushort *)(param_2 + 2);
  lVar16 = *param_2;
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar17 = (ulonglong)uVar4;
  local_108 = (uint)bVar2;
  fVar19 = (float)(uint)*(ushort *)((longlong)param_2 + 0x12);
  local_11c = *(float *)(*(longlong *)(param_1 + 0x10) + 8);
  local_118 = *(float *)(param_1 + 0x60);
  local_110 = 0.05 / *(float *)(*(longlong *)(param_1 + 0x10) + 0xc) - 0.05;
  local_114 = *(float *)(param_1 + 0x5c);
  lVar24 = *(longlong *)(param_1 + 0x48) + (ulonglong)(*(int *)(param_1 + 0x50) * (uint)bVar2) * 4;
  local_130 = lVar16;
  local_128 = (ulonglong)bVar2;
  local_100 = *(longlong *)(param_1 + 0x48) + (ulonglong)((int)local_120 * (uint)bVar2) * 4;
  pfVar11 = *(float **)(param_1 + 0x40);
  fVar29 = *pfVar11;
  fVar9 = pfVar11[1];
  fVar26 = pfVar11[2];
  fVar27 = pfVar11[3];
  uVar18 = (ulonglong)bVar2 * 4;
  uVar10 = uVar18 + 0xf;
  if (uVar10 <= uVar18) {
    uVar10 = 0xffffffffffffff0;
  }
  lVar23 = (longlong)&local_138 - (uVar10 & 0xfffffffffffffff0);
  local_138 = lVar23;
  if (*(char *)(param_1 + 100) != '\0') {
    fVar8 = local_120;
    if ((uint)fVar19 <= (uint)local_120) {
      fVar8 = (float)(uint)*(ushort *)((longlong)param_2 + 0x12);
    }
    if (uVar4 != 0) {
      do {
        uVar10 = 0;
        if (3 < (uint)fVar8) {
          pfVar11 = (float *)(lVar16 + 8);
          do {
            fVar20 = (float)((int)fVar8 - (int)uVar10);
            fVar25 = ABS(pfVar11[-2]);
            fVar13 = fVar25;
            if (fVar25 <= fVar9) {
              fVar13 = fVar9;
            }
            fVar28 = ABS(pfVar11[-1]);
            fVar7 = fVar20;
            if (fVar25 <= fVar9) {
              fVar7 = fVar27;
            }
            fVar9 = fVar13;
            if (fVar13 < fVar28) {
              fVar9 = fVar28;
            }
            fVar27 = (float)((int)fVar20 - 1);
            if (fVar28 <= fVar13) {
              fVar27 = fVar7;
            }
            fVar25 = ABS(*pfVar11);
            fVar13 = fVar25;
            if (fVar25 <= fVar9) {
              fVar13 = fVar9;
            }
            fVar7 = (float)((int)fVar20 - 2);
            if (fVar25 <= fVar9) {
              fVar7 = fVar27;
            }
            fVar27 = (float)((int)fVar20 - 3);
            fVar9 = ABS(pfVar11[1]);
            if (ABS(pfVar11[1]) <= fVar13) {
              fVar27 = fVar7;
              fVar9 = fVar13;
            }
            pfVar11 = pfVar11 + 4;
            uVar12 = (int)uVar10 + 4;
            uVar10 = (ulonglong)uVar12;
          } while (uVar12 < (int)fVar8 - 3U);
        }
        if ((uint)(float)uVar10 < (uint)fVar8) {
          pfVar11 = (float *)(lVar16 + uVar10 * 4);
          do {
            fVar13 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar20 = (float)((int)fVar8 - (int)uVar10);
            fVar25 = ABS(fVar13);
            if (ABS(fVar13) <= fVar9) {
              fVar20 = fVar27;
              fVar25 = fVar9;
            }
            fVar9 = fVar25;
            fVar27 = fVar20;
            fVar13 = (float)((int)uVar10 + 1);
            uVar10 = (ulonglong)(uint)fVar13;
          } while ((uint)fVar13 < (uint)fVar8);
        }
        lVar16 = lVar16 + (ulonglong)uVar3 * 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  uVar10 = 0;
  fVar8 = (float)(((uint)fVar9 & 0x7fffff) + 0x3f800000);
  fVar13 = fVar8 + 1.0;
  fVar8 = ((23.162373 / (fVar13 * fVar13 * fVar13)) * (fVar8 * fVar8 * fVar8 - 1.0) +
          ((float)((uint)fVar9 >> 0x17 & 0xff) - 127.0) * 6.0206) - local_11c;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar19 != 0.0) {
    do {
      lVar16 = local_100 + -lVar24;
      auVar5._8_8_ = lVar16 >> 0x3f;
      auVar5._0_8_ = lVar16 >> 2;
      uVar18 = (ulonglong)(uint)((int)fVar19 - (int)uVar10);
      if (SUB168(auVar5 / SEXT816((longlong)local_128),0) <= (longlong)uVar18) {
        uVar18 = (ulonglong)SUB164(auVar5 / SEXT816((longlong)local_128),0);
      }
      if ((int)uVar18 != 0) {
        uVar17 = (ulonglong)uVar3;
        local_f8 = local_128 * -4;
        lVar16 = lVar23 + 8 + -lVar24;
        fVar13 = fVar26;
        do {
          uVar12 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar12;
          uVar21 = 0;
          lVar14 = local_130;
          if (3 < uVar4) {
            lVar1 = uVar17 * 4;
            uVar6 = (uVar4 - 4 >> 2) + 1;
            uVar22 = (ulonglong)uVar6;
            uVar21 = (ulonglong)(uVar6 * 4);
            pfVar11 = (float *)(lVar24 + 4);
            do {
              *(float *)(lVar16 + -0xc + (longlong)pfVar11) = pfVar11[-1];
              fVar26 = *(float *)(lVar14 + uVar10 * 4);
              pfVar11[-1] = fVar26;
              fVar26 = ABS(fVar26);
              *(float *)(lVar16 + -8 + (longlong)pfVar11) = *pfVar11;
              if (fVar26 <= fVar13) {
                fVar26 = fVar13;
              }
              fVar20 = *(float *)(lVar14 + lVar1 + uVar10 * 4);
              lVar14 = lVar14 + lVar1 + lVar1;
              *pfVar11 = fVar20;
              fVar20 = ABS(fVar20);
              *(float *)(lVar16 + -4 + (longlong)pfVar11) = pfVar11[1];
              if (fVar20 <= fVar26) {
                fVar20 = fVar26;
              }
              fVar26 = *(float *)(lVar14 + uVar10 * 4);
              pfVar11[1] = fVar26;
              lVar14 = lVar14 + lVar1;
              *(float *)(lVar16 + -0x10 + (longlong)(pfVar11 + 4)) = pfVar11[2];
              fVar26 = ABS(fVar26);
              fVar13 = *(float *)(lVar14 + uVar10 * 4);
              if (fVar26 <= fVar20) {
                fVar26 = fVar20;
              }
              pfVar11[2] = fVar13;
              lVar14 = lVar14 + lVar1;
              fVar13 = ABS(fVar13);
              if (fVar13 <= fVar26) {
                fVar13 = fVar26;
              }
              uVar22 = uVar22 - 1;
              pfVar11 = pfVar11 + 4;
              lVar23 = local_138;
            } while (uVar22 != 0);
          }
          uVar6 = (uint)uVar21;
          if (uVar6 < uVar4) {
            lVar23 = uVar21 * 4;
            uVar22 = (ulonglong)(uVar4 - uVar6);
            uVar21 = (ulonglong)(uVar6 + (uVar4 - uVar6));
            pfVar11 = (float *)(lVar24 + lVar23);
            fVar26 = fVar13;
            do {
              *(float *)(lVar16 + -8 + (longlong)pfVar11) = *pfVar11;
              fVar13 = *(float *)(lVar14 + uVar10 * 4);
              lVar14 = lVar14 + uVar17 * 4;
              *pfVar11 = fVar13;
              fVar13 = ABS(fVar13);
              if (fVar13 <= fVar26) {
                fVar13 = fVar26;
              }
              uVar22 = uVar22 - 1;
              pfVar11 = pfVar11 + 1;
              lVar23 = local_138;
              fVar26 = fVar13;
            } while (uVar22 != 0);
          }
          uVar22 = local_128;
          lVar16 = lVar16 + local_f8;
          *(undefined4 *)(lVar23 + uVar21 * 4) = *(undefined4 *)(lVar24 + uVar21 * 4);
          *(undefined4 *)(lVar24 + uVar21 * 4) = *(undefined4 *)(lVar14 + uVar10 * 4);
          *(undefined4 *)(lVar14 + uVar10 * 4) = *(undefined4 *)(lVar23 + uVar21 * 4);
          lVar24 = lVar24 + uVar22 * 4;
          if ((fVar27 == 0.0) || (fVar9 < fVar13)) {
            fVar26 = 0.0;
            fVar9 = (float)(((uint)fVar13 & 0x7fffff) + 0x3f800000);
            fVar27 = fVar9 + 1.0;
            fVar8 = ((23.162373 / (fVar27 * fVar27 * fVar27)) * (fVar9 * fVar9 * fVar9 - 1.0) +
                    ((float)((uint)fVar13 >> 0x17 & 0xff) - 127.0) * 6.0206) - local_11c;
            fVar9 = fVar13;
            fVar27 = local_120;
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
          }
          else {
            fVar26 = fVar13;
            fVar27 = (float)((int)fVar27 - 1);
          }
          fVar13 = local_114;
          if (0.0 <= fVar8 - fVar29) {
            fVar13 = local_118;
          }
          fVar29 = (fVar29 - fVar8) * fVar13 + fVar8;
          if (-37.0 <= fVar29 * local_110) {
            uVar6 = (uint)(longlong)(fVar29 * local_110 * 27866352.0 + 1.0653532e+09);
            local_10c = (float)(uVar6 & 0xff800000);
            fVar13 = (float)((uVar6 & 0x7fffff) + 0x3f800000);
            local_10c = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) * local_10c;
          }
          else {
            local_10c = 0.0;
          }
          uVar21 = 0;
          lVar14 = local_130;
          if (3 < uVar4) {
            uVar6 = (uVar4 - 4 >> 2) + 1;
            lVar1 = uVar17 * 4;
            uVar22 = (ulonglong)uVar6;
            uVar21 = (ulonglong)(uVar6 * 4);
            pfVar11 = (float *)(lVar23 + 8);
            do {
              *(float *)(lVar14 + uVar10 * 4) = local_10c * pfVar11[-2];
              *(float *)(lVar14 + lVar1 + uVar10 * 4) = local_10c * pfVar11[-1];
              lVar14 = lVar14 + lVar1 + lVar1;
              *(float *)(lVar14 + uVar10 * 4) = local_10c * *pfVar11;
              lVar14 = lVar14 + lVar1;
              *(float *)(lVar14 + uVar10 * 4) = local_10c * pfVar11[1];
              lVar14 = lVar14 + lVar1;
              uVar22 = uVar22 - 1;
              pfVar11 = pfVar11 + 4;
              lVar23 = local_138;
            } while (uVar22 != 0);
          }
          if ((uint)uVar21 < uVar4) {
            pfVar15 = (float *)(lVar14 + uVar10 * 4);
            pfVar11 = (float *)(lVar23 + uVar21 * 4);
            uVar21 = (ulonglong)(uVar4 - (uint)uVar21);
            do {
              fVar13 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              *pfVar15 = local_10c * fVar13;
              pfVar15 = pfVar15 + uVar3;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          uVar10 = (ulonglong)((int)uVar10 + 1);
          fVar13 = fVar26;
        } while (uVar12 != 0);
      }
      if (lVar24 == local_100) {
        lVar24 = *(longlong *)(param_1 + 0x48);
      }
    } while ((uint)(float)uVar10 < (uint)fVar19);
  }
  **(float **)(param_1 + 0x40) = fVar29;
  *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar9;
  *(float *)(*(longlong *)(param_1 + 0x40) + 8) = fVar26;
  *(float *)(*(longlong *)(param_1 + 0x40) + 0xc) = fVar27;
  *(int *)(param_1 + 0x50) =
       (int)((lVar24 - *(longlong *)(param_1 + 0x48) >> 2 & 0xffffffffU) / (ulonglong)local_108);
  return;
}



// FUNCTION 1431fa9c0 Reset body=126 status=ok
// SIG undefined Reset(void)

undefined8 CAkPeakLimiterFX::Reset(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x48),0,
               (ulonglong)*(byte *)(param_1 + 0x28) * (ulonglong)*(uint *)(param_1 + 0x38) * 4);
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) && (uVar2 = 0, *(int *)(param_1 + 0x34) != 0)) {
    do {
      uVar1 = (ulonglong)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4 + uVar1 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8 + uVar1 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + uVar1 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xc + uVar1 * 0x10) = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x34));
  }
  *(undefined1 *)(param_1 + 100) = 1;
  return 1;
}



// FUNCTION 1431faa40 Term body=90 status=ok
// SIG undefined Term(void)

undefined8 CAkPeakLimiterFX::Term(undefined8 *param_1,longlong *param_2)

{
  if (param_1[9] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 1431faab0 FUN_1431faab0 body=43 status=ok
// SIG undefined FUN_1431faab0(void)

undefined8 * FUN_1431faab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1431faae0 Clone body=83 status=ok
// SIG undefined Clone(void)

void CAkPeakLimiterFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae4898;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)(puVar2 + 3) = 1;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined1 *)((longlong)puVar2 + 0x22) = 1;
    return;
  }
  return;
}



// FUNCTION 1431fab40 FUN_1431fab40 body=40 status=ok
// SIG undefined FUN_1431fab40(void)

void FUN_1431fab40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4898;
    return;
  }
  return;
}



// FUNCTION 1431fabc0 FUN_1431fabc0 body=277 status=ok
// SIG undefined FUN_1431fabc0(void)

undefined8 FUN_1431fabc0(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 0:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    break;
  case 1:
    *(float *)(param_1 + 0xc) = *param_3;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x22) = 1;
    return 1;
  case 3:
    *(float *)(param_1 + 0x10) = *param_3;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return 1;
  case 4:
    fVar1 = *param_3;
    fVar2 = -24.0;
    if ((-24.0 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
      fVar2 = 24.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x14) = fVar1;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return 1;
  case 5:
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 0x22) = 1;
    return 1;
  case 6:
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 0x22) = 1;
    return 1;
  default:
    return 0x1f;
  }
  *(float *)(param_1 + 8) = fVar2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return 1;
}



// FUNCTION 1431fad00 SetParamsBlock body=124 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkPeakLimiterFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x14) = fVar1;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return 1;
}



// FUNCTION 1431fad80 FUN_1431fad80 body=43 status=ok
// SIG undefined FUN_1431fad80(void)

undefined8 * FUN_1431fad80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1431fadc0 CreateAkMatrixReverbFX body=149 status=ok
// SIG undefined CreateAkMatrixReverbFX(void)

undefined8 * CreateAkMatrixReverbFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4dc0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    *(undefined4 *)(puVar1 + 0x48) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x244) = 0xffffffff;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    _guard_xfg_dispatch_icall_nop(puVar1 + 10,0,0x1e0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431fae60 Execute body=973 status=ok
// SIG undefined Execute(void)

void CAkFDNReverbFX::Execute(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (*(char *)(param_1[2] + 0x68) != '\0') {
    iVar3 = InitDelayLines(param_1,(int)param_2[1]);
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if (*(int *)((longlong)param_1 + 0x254) == 0) {
    return;
  }
  lVar9 = param_1[2];
  uVar11 = 0;
  if ((*(float *)(lVar9 + 8) == *(float *)(param_1 + 4)) &&
     (*(float *)((longlong)param_1 + 0x24) == *(float *)(lVar9 + 0xc))) {
    uVar4 = *(uint *)(param_1 + 0x4a);
  }
  else {
    iVar3 = *(int *)(lVar9 + 0x18);
    uVar4 = *(uint *)((longlong)param_1 + 0x24c);
    dVar15 = 1.0 / (double)*(float *)(lVar9 + 0xc);
    dVar15 = 1.0 - 1.0 / (dVar15 * dVar15);
    dVar12 = ::_guard_xfg_dispatch_icall_nop
                       (0.001,((double)*(uint *)((longlong)param_1 +
                                                (ulonglong)(iVar3 - 1) * 4 + 0x50) *
                              (1.0 / (double)uVar4)) / (double)*(float *)(lVar9 + 8));
    dVar13 = ::_guard_xfg_dispatch_icall_nop(dVar12);
    dVar12 = DAT_1467c5c98;
    if (1.0 < dVar13 * DAT_1467c5c98 * dVar15) {
      dVar15 = 1.0 / (dVar13 * DAT_1467c5c98);
    }
    uVar10 = uVar11;
    if (iVar3 != 0) {
      do {
        dVar13 = ::_guard_xfg_dispatch_icall_nop
                           (0.001,((double)*(uint *)((longlong)param_1 + uVar10 * 4 + 0x50) *
                                  (1.0 / (double)uVar4)) / (double)*(float *)(param_1[2] + 8));
        dVar14 = ::_guard_xfg_dispatch_icall_nop(dVar13);
        uVar8 = (ulonglong)((uint)uVar10 & 3);
        uVar7 = (uint)uVar10 + 1;
        dVar14 = dVar14 * dVar12 * dVar15;
        *(float *)((longlong)param_1 + (uVar8 + (uVar10 >> 2) * 4) * 4 + 0x170) =
             (float)((1.0 - dVar14) * dVar13);
        *(float *)((longlong)param_1 + (uVar8 + (uVar10 >> 2) * 4) * 4 + 0x1b0) = (float)dVar14;
        lVar9 = param_1[2];
        uVar10 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(lVar9 + 0x18));
      uVar4 = *(uint *)((longlong)param_1 + 0x24c);
    }
    fVar1 = 1.0 / *(float *)(lVar9 + 0xc);
    fVar1 = (1.0 - fVar1) / (fVar1 + 1.0);
    fVar2 = 1.0 / (1.0 - fVar1);
    *(float *)((longlong)param_1 + 0x44) = fVar2;
    *(float *)(param_1 + 9) = -(fVar2 * fVar1);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar9 + 8);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar9 + 0xc);
    uVar4 = (uint)(longlong)((float)uVar4 * *(float *)(lVar9 + 8));
    *(uint *)(param_1 + 0x4a) = uVar4;
  }
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x244) = 0xffffffff;
    uVar5 = *(ushort *)((longlong)param_2 + 0x12);
    goto LAB_1431fb1e7;
  }
  uVar7 = *(uint *)((longlong)param_1 + 0x244);
  if ((uVar7 == 0) && (uVar5 = 0, *(short *)((longlong)param_2 + 0x12) == 0)) goto LAB_1431fb1e7;
  if ((uVar7 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) {
    *(uint *)((longlong)param_1 + 0x244) = uVar4;
    uVar7 = uVar4;
LAB_1431fb14e:
    *(uint *)(param_1 + 0x49) = uVar4;
  }
  else if (*(uint *)(param_1 + 0x49) < uVar4) {
    uVar7 = (uVar7 - *(uint *)(param_1 + 0x49)) + uVar4;
    *(uint *)((longlong)param_1 + 0x244) = uVar7;
    goto LAB_1431fb14e;
  }
  uVar6 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar4 = uVar7;
  if (uVar6 <= uVar7) {
    uVar4 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0x244) = uVar7 - uVar4;
  uVar5 = *(ushort *)((longlong)param_2 + 0x12);
  uVar10 = (ulonglong)*(byte *)(param_2 + 1);
  iVar3 = (uint)*(ushort *)(param_2 + 2) - (uint)uVar5;
  if (iVar3 != 0) {
    uVar5 = *(ushort *)(param_2 + 2);
    if (*(byte *)(param_2 + 1) != 0) {
      do {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 +
                           (*(ushort *)(param_2 + 2) * uVar11 +
                           (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar3 * 4));
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar5 = *(ushort *)(param_2 + 2);
    }
    *(ushort *)((longlong)param_2 + 0x12) = uVar5;
  }
  if (*(int *)((longlong)param_1 + 0x244) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_1431fb1e7:
  if (uVar5 != 0) {
    (*(code *)param_1[1])(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)(param_1[2] + 0x10);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1[2] + 0x14);
  }
  return;
}



// FUNCTION 1431fb2c0 InitDelayLines body=1118 status=ok
// SIG undefined InitDelayLines(void)

undefined8 CAkFDNReverbFX::InitDelayLines(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar8 = param_2 & 0xffffffff;
  TermDelayLines();
  lVar6 = param_1[2];
  uVar12 = 0;
  if ((*(int *)(lVar6 + 0x24) == 0) && (uVar10 = uVar12, *(int *)(lVar6 + 0x18) != 0)) {
    do {
      uVar9 = (int)uVar10 + 1;
      *(undefined4 *)(param_1[2] + 0x28 + uVar10 * 4) = *(undefined4 *)(&DAT_145ae4d10 + uVar10 * 4)
      ;
      lVar6 = param_1[2];
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(lVar6 + 0x18));
  }
  if (*(int *)(lVar6 + 0x20) == 0) {
    uVar9 = (uint)(uVar8 >> 0xc);
    uVar7 = uVar9 & 0xffff7;
    uVar8 = (ulonglong)((int)param_2 - (uVar9 - uVar7 >> 3) & 0xff | uVar7 << 0xc);
  }
  iVar2 = (int)(uVar8 >> 0xc);
  *(uint *)((longlong)param_1 + 0x254) = (uint)uVar8 & 0xff;
  iVar11 = *(int *)(lVar6 + 0x18);
  if (iVar2 == 3) {
    if (iVar11 == 4) {
      pcVar3 = ProcessStereo4;
    }
    else if (iVar11 == 8) {
      pcVar3 = ProcessStereo8;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = ProcessStereo12;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1431fb4bf;
      pcVar3 = ProcessStereo16;
    }
  }
  else if (iVar2 == 4) {
    if (iVar11 == 4) {
      pcVar3 = ProcessMono4;
    }
    else if (iVar11 == 8) {
      pcVar3 = ProcessMono8;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = ProcessMono12;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1431fb4bf;
      pcVar3 = ProcessMono16;
    }
  }
  else if (iVar2 == 0x607) {
    if (iVar11 == 4) {
      pcVar3 = ProcessFivePointZero4;
    }
    else if (iVar11 == 8) {
      pcVar3 = ProcessFivePointZero8;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = ProcessFivePointZero12;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1431fb4bf;
      pcVar3 = ProcessFivePointZero16;
    }
  }
  else if (iVar2 == 0x60f) {
    if (iVar11 == 4) {
      pcVar3 = ProcessFivePointOne4;
    }
    else if (iVar11 == 8) {
      pcVar3 = ProcessFivePointOne8;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = ProcessFivePointOne12;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1431fb4bf;
      pcVar3 = ProcessFivePointOne16;
    }
  }
  else if (iVar11 == 4) {
    pcVar3 = ProcessN4;
  }
  else if (iVar11 == 8) {
    pcVar3 = ProcessN8;
  }
  else if (iVar11 == 0xc) {
    pcVar3 = ProcessN12;
  }
  else {
    if (iVar11 != 0x10) goto LAB_1431fb4bf;
    pcVar3 = ProcessN16;
  }
  param_1[1] = (longlong)pcVar3;
LAB_1431fb4bf:
  lVar6 = param_1[2];
  iVar11 = (int)(longlong)((float)*(uint *)((longlong)param_1 + 0x24c) * *(float *)(lVar6 + 0x1c));
  *(int *)(param_1 + 8) = iVar11;
  if (iVar11 != 0) {
    lVar4 = (**(code **)(*(longlong *)param_1[3] + 8))();
    param_1[5] = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    param_1[6] = lVar4;
    lVar6 = param_1[2];
    param_1[7] = lVar4 + (ulonglong)*(uint *)(param_1 + 8) * 4;
  }
  uVar8 = uVar12;
  if (*(int *)(lVar6 + 0x18) != 0) {
    do {
      fVar13 = *(float *)(lVar6 + 0x28 + uVar8 * 4) * 0.001 *
               (float)*(uint *)((longlong)param_1 + 0x24c);
      uVar10 = (ulonglong)fVar13;
      *(int *)((longlong)param_1 + uVar8 * 4 + 0x50) = (int)uVar10;
      if ((uVar10 & 1) == 0) {
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        *(uint *)((longlong)param_1 + uVar8 * 4 + 0x50) = uVar9;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (double)(uVar10 & 0xffffffff);
      auVar14 = sqrtpd(ZEXT416((uint)fVar13),auVar14);
      iVar11 = (int)auVar14._0_8_ + 1;
      while (uVar5 = 3, 3 < iVar11) {
        while ((int)((uVar10 & 0xffffffff) % uVar5) != 0) {
          uVar9 = (int)uVar5 + 2;
          uVar5 = (ulonglong)uVar9;
          if (iVar11 <= (int)uVar9) goto LAB_1431fb5b7;
        }
        piVar1 = (int *)((longlong)param_1 + uVar8 * 4 + 0x50);
        *piVar1 = *piVar1 + 2;
        uVar10 = (ulonglong)*(uint *)((longlong)param_1 + uVar8 * 4 + 0x50);
      }
LAB_1431fb5b7:
      lVar6 = param_1[2];
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(lVar6 + 0x18));
  }
  qsort(param_1 + 10,(ulonglong)*(uint *)(lVar6 + 0x18),4,(_PtFuncCompare *)&LAB_1431fadb0);
  if ((*(uint *)(param_1[2] + 0x18) & 0xfffffffc) != 0) {
    do {
      uVar9 = (int)uVar12 * 4;
      iVar11 = *(int *)((longlong)param_1 + (ulonglong)(uVar9 + 3) * 4 + 0x50);
      lVar6 = (ulonglong)(uint)(iVar11 * 4) * 4;
      lVar4 = (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],lVar6);
      param_1[uVar12 + 0x22] = lVar4;
      if (lVar4 == 0) {
        return 0x34;
      }
      param_1[uVar12 + 0x26] = lVar4;
      param_1[uVar12 + 0x2a] = lVar6 + lVar4;
      param_1[(ulonglong)uVar9 + 0x12] =
           lVar4 + (ulonglong)
                   (uint)((iVar11 - *(int *)((longlong)param_1 + (ulonglong)uVar9 * 4 + 0x50)) * 4)
                   * 4;
      param_1[(ulonglong)(uVar9 + 1) + 0x12] =
           param_1[uVar12 + 0x22] +
           (ulonglong)
           ((iVar11 - *(int *)((longlong)param_1 + (ulonglong)(uVar9 + 1) * 4 + 0x50)) * 4 + 1) * 4;
      param_1[(ulonglong)(uVar9 + 2) + 0x12] =
           param_1[uVar12 + 0x22] +
           (ulonglong)
           ((iVar11 - *(int *)((longlong)param_1 + (ulonglong)(uVar9 + 2) * 4 + 0x50)) * 4 + 2) * 4;
      lVar6 = uVar12 + 0x22;
      uVar7 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar7;
      param_1[(ulonglong)(uVar9 + 3) + 0x12] = param_1[lVar6] + 0xc;
    } while (uVar7 < *(uint *)(param_1[2] + 0x18) >> 2);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  *(undefined1 *)(param_1[2] + 0x68) = 0;
  return 1;
}



// FUNCTION 1431fb720 ProcessFivePointOne12 body=2952 status=ok
// SIG undefined ProcessFivePointOne12(void)

void CAkFDNReverbFX::ProcessFivePointOne12(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float *pfVar38;
  ulonglong uVar39;
  float *pfVar40;
  float *pfVar41;
  uint uVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
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
  float fVar64;
  float fVar65;
  float *local_res18;
  float *local_res20;
  float *local_2f8;
  float *local_2f0;
  float *local_2e8;
  float *local_2e0;
  float *local_2d8;
  float *local_2d0;
  float *local_2c8;
  float *local_2c0;
  float *local_2b8;
  float *local_2b0;
  undefined8 local_298;
  undefined8 uStack_290;
  float local_278;
  float local_248;
  float local_238;
  float local_218;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  
  fVar1 = *(float *)(param_1 + 0x44);
  lVar13 = *(longlong *)(param_1 + 0x10);
  fVar48 = *(float *)(param_1 + 0x4c);
  fVar62 = *(float *)(param_1 + 0x230);
  local_238 = *(float *)(param_1 + 0x234);
  local_2e8 = *(float **)(param_1 + 0xb8);
  pfVar14 = *(float **)(param_1 + 0x28);
  pfVar15 = *(float **)(param_1 + 0x110);
  pfVar16 = *(float **)(param_1 + 0x118);
  pfVar17 = *(float **)(param_1 + 0x120);
  pfVar18 = *(float **)(param_1 + 0x150);
  pfVar19 = *(float **)(param_1 + 0x158);
  pfVar20 = *(float **)(param_1 + 0x160);
  pfVar44 = *(float **)(param_1 + 0x138);
  pfVar45 = *(float **)(param_1 + 0x140);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar12 = *(ushort *)(param_2 + 2);
  pfVar43 = *(float **)(param_1 + 0x130);
  fVar46 = -2.0 / (float)*(uint *)(lVar13 + 0x18);
  local_2e0 = *(float **)(param_1 + 0xc0);
  local_248 = *(float *)(param_1 + 0x23c);
  local_278 = *(float *)(param_1 + 0x240);
  pfVar21 = *(float **)(param_1 + 0x38);
  local_res20 = *(float **)(param_1 + 0x98);
  local_2f8 = *(float **)(param_1 + 0xa0);
  local_2f0 = *(float **)(param_1 + 0xa8);
  local_2b0 = *(float **)(param_1 + 0xb0);
  fVar4 = *(float *)(lVar13 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar13 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar41 = *(float **)(param_1 + 0x30);
  pfVar40 = *(float **)(param_1 + 0x90);
  uVar30 = *(undefined8 *)(param_1 + 0x180);
  uVar31 = *(undefined8 *)(param_1 + 0x188);
  fVar22 = *(float *)(param_1 + 0x170);
  fVar23 = *(float *)(param_1 + 0x174);
  fVar24 = *(float *)(param_1 + 0x178);
  fVar25 = *(float *)(param_1 + 0x17c);
  fVar26 = *(float *)(param_1 + 0x1b0);
  fVar27 = *(float *)(param_1 + 0x1b4);
  fVar28 = *(float *)(param_1 + 0x1b8);
  fVar29 = *(float *)(param_1 + 0x1bc);
  fVar61 = *(float *)(param_1 + 0x1f0);
  fVar63 = *(float *)(param_1 + 500);
  fVar64 = *(float *)(param_1 + 0x1f8);
  fVar65 = *(float *)(param_1 + 0x1fc);
  fVar57 = *(float *)(param_1 + 0x200);
  fVar58 = *(float *)(param_1 + 0x204);
  fVar59 = *(float *)(param_1 + 0x208);
  fVar60 = *(float *)(param_1 + 0x20c);
  local_2d8 = *(float **)(param_1 + 200);
  local_2b8 = *(float **)(param_1 + 0xd0);
  local_2d0 = *(float **)(param_1 + 0xd8);
  local_2c8 = *(float **)(param_1 + 0xe0);
  uVar32 = *(undefined8 *)(param_1 + 400);
  uVar33 = *(undefined8 *)(param_1 + 0x198);
  local_2c0 = *(float **)(param_1 + 0xe8);
  uVar34 = *(undefined8 *)(param_1 + 0x1c0);
  uVar35 = *(undefined8 *)(param_1 + 0x1c8);
  uVar36 = *(undefined8 *)(param_1 + 0x1d0);
  uVar37 = *(undefined8 *)(param_1 + 0x1d8);
  uVar42 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_298 = *(undefined8 *)(param_1 + 0x210);
  uStack_290 = *(undefined8 *)(param_1 + 0x218);
  local_218 = fVar48;
  fVar52 = fVar62;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar48 = *pfVar40;
      fVar62 = *local_res20;
      pfVar38 = pfVar40 + 4;
      pfVar40 = pfVar15;
      if (pfVar38 < pfVar18) {
        pfVar40 = pfVar38;
      }
      pfVar38 = local_res20 + 4;
      local_res20 = pfVar15 + 1;
      if (pfVar38 < pfVar18) {
        local_res20 = pfVar38;
      }
      fVar61 = fVar48 * fVar22 + fVar61 * fVar26;
      fVar63 = fVar62 * fVar23 + fVar63 * fVar27;
      fVar64 = *local_2f8 * fVar24 + fVar64 * fVar28;
      fVar65 = *local_2f0 * fVar25 + fVar65 * fVar29;
      pfVar38 = local_2f8 + 4;
      local_2f8 = pfVar15 + 2;
      if (pfVar38 < pfVar18) {
        local_2f8 = pfVar38;
      }
      pfVar38 = local_2f0 + 4;
      local_2f0 = pfVar15 + 3;
      if (pfVar38 < pfVar18) {
        local_2f0 = pfVar38;
      }
      fVar48 = *local_2e8;
      fVar62 = *local_2b0;
      fVar47 = *local_2e0;
      fVar49 = *local_2d8;
      pfVar38 = local_2b0 + 4;
      local_2b0 = pfVar16;
      if (pfVar38 < pfVar19) {
        local_2b0 = pfVar38;
      }
      pfVar38 = local_2e8 + 4;
      local_2e8 = pfVar16 + 1;
      if (pfVar38 < pfVar19) {
        local_2e8 = pfVar38;
      }
      pfVar38 = local_2e0 + 4;
      local_2e0 = pfVar16 + 2;
      if (pfVar38 < pfVar19) {
        local_2e0 = pfVar38;
      }
      pfVar38 = local_2d8 + 4;
      local_2d8 = pfVar16 + 3;
      if (pfVar38 < pfVar19) {
        local_2d8 = pfVar38;
      }
      local_1e8 = (float)uVar34;
      fStack_1e4 = (float)((ulonglong)uVar34 >> 0x20);
      fStack_1e0 = (float)uVar35;
      fStack_1dc = (float)((ulonglong)uVar35 >> 0x20);
      fVar50 = *local_2d0;
      local_1f8 = (float)uVar30;
      fStack_1f4 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_1f0 = (float)uVar31;
      fStack_1ec = (float)((ulonglong)uVar31 >> 0x20);
      fVar51 = *local_2c8;
      fVar8 = *local_2b8;
      fVar57 = fVar62 * local_1f8 + fVar57 * local_1e8;
      fVar58 = fVar48 * fStack_1f4 + fVar58 * fStack_1e4;
      fVar59 = fVar47 * fStack_1f0 + fVar59 * fStack_1e0;
      fVar60 = fVar49 * fStack_1ec + fVar60 * fStack_1dc;
      pfVar38 = local_2b8 + 4;
      local_1c8 = (float)uVar36;
      fStack_1c4 = (float)((ulonglong)uVar36 >> 0x20);
      fStack_1c0 = (float)uVar37;
      fStack_1bc = (float)((ulonglong)uVar37 >> 0x20);
      local_2b8 = pfVar17;
      if (pfVar38 < pfVar20) {
        local_2b8 = pfVar38;
      }
      pfVar38 = local_2d0 + 4;
      local_1d8 = (float)uVar32;
      fStack_1d4 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_1d0 = (float)uVar33;
      fStack_1cc = (float)((ulonglong)uVar33 >> 0x20);
      local_2d0 = pfVar17 + 1;
      if (pfVar38 < pfVar20) {
        local_2d0 = pfVar38;
      }
      pfVar38 = local_2c8 + 4;
      local_2c8 = pfVar17 + 2;
      if (pfVar38 < pfVar20) {
        local_2c8 = pfVar38;
      }
      fVar47 = fVar8 * local_1d8 + local_1c8 * (float)local_298;
      fVar49 = fVar50 * fStack_1d4 + fStack_1c4 * local_298._4_4_;
      fVar50 = fVar51 * fStack_1d0 + fStack_1c0 * (float)uStack_290;
      fVar51 = *local_2c0 * fStack_1cc + fStack_1bc * uStack_290._4_4_;
      pfVar38 = local_2c0 + 4;
      local_2c0 = pfVar17 + 3;
      if (pfVar38 < pfVar20) {
        local_2c0 = pfVar38;
      }
      local_298 = CONCAT44(fVar49,fVar47);
      uStack_290 = CONCAT44(fVar51,fVar50);
      fVar48 = *local_res18;
      uVar39 = (ulonglong)*(ushort *)(param_2 + 2);
      fVar62 = local_res18[uVar39];
      fVar8 = local_res18[uVar39 * 2];
      fVar9 = local_res18[uVar39 * 5];
      fVar10 = local_res18[uVar39 * 3];
      fVar11 = local_res18[uVar39 * 4];
      local_248 = local_248 + (fVar4 - fVar5) * (1.0 / (float)uVar12);
      local_278 = local_278 + (fVar6 - fVar7) * (1.0 / (float)uVar12);
      fVar53 = fVar51 + fVar60 + fVar65 + fVar49 + fVar58 + fVar63 +
               fVar50 + fVar59 + fVar64 + fVar47 + fVar57 + fVar61;
      *local_res18 = fVar48 * local_248 +
                     (fVar49 * -1.0 + fVar63 * -1.0 + fVar58 * -1.0 +
                      fVar51 * -1.0 + fVar65 * -1.0 + fVar60 * -1.0 +
                     fVar47 * 1.0 + fVar61 * 1.0 + fVar57 * 1.0 +
                     fVar50 * 1.0 + fVar64 * 1.0 + fVar59 * 1.0) * local_278;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar62 * local_248 +
           (fVar49 * 1.0 + fVar63 * 1.0 + fVar58 * 1.0 +
            fVar51 * -1.0 + fVar65 * -1.0 + fVar60 * -1.0 +
           fVar47 * 1.0 + fVar61 * 1.0 + fVar57 * 1.0 +
           fVar50 * -1.0 + fVar64 * -1.0 + fVar59 * -1.0) * local_278;
      fVar54 = fVar53 * fVar46;
      fVar55 = fVar53 * fVar46;
      fVar56 = fVar53 * fVar46;
      fVar53 = fVar53 * fVar46;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar8 * local_248 +
           (fVar49 * 1.0 + fVar63 * 1.0 + fVar58 * 1.0 +
            fVar51 * -1.0 + fVar65 * -1.0 + fVar60 * -1.0 +
           fVar47 * -1.0 + fVar61 * -1.0 + fVar57 * -1.0 +
           fVar50 * 1.0 + fVar64 * 1.0 + fVar59 * 1.0) * local_278;
      fVar62 = fVar8 + fVar9 + fVar11 + fVar48 + fVar62 + fVar10;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 5] =
           fVar9 * local_248 +
           (fVar49 * 1.0 + fVar63 * 1.0 + fVar58 * -1.0 +
            fVar51 * -1.0 + fVar65 * -1.0 + fVar60 * 1.0 +
           fVar47 * 1.0 + fVar61 * 1.0 + fVar57 * -1.0 +
           fVar50 * -1.0 + fVar64 * -1.0 + fVar59 * 1.0) * local_278;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar10 * local_248 +
           (fVar49 * -1.0 + fVar63 * -1.0 + fVar58 * 1.0 +
            fVar51 * 1.0 + fVar65 * 1.0 + fVar60 * 1.0 +
           fVar47 * -1.0 + fVar61 * -1.0 + fVar57 * 1.0 +
           fVar50 * 1.0 + fVar64 * -1.0 + fVar59 * -1.0) * local_278;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar11 * local_248 +
           (fVar49 * -1.0 + fVar63 * -1.0 + fVar58 * 1.0 +
            fVar51 * 1.0 + fVar65 * -1.0 + fVar60 * -1.0 +
           fVar47 * 1.0 + fVar61 * 1.0 + fVar57 * 1.0 + fVar50 * -1.0 + fVar64 * -1.0 + fVar59 * 1.0
           ) * local_278;
      local_res18 = local_res18 + 1;
      local_238 = (fVar3 * local_238 + fVar62) - fVar52;
      fVar48 = local_238;
      if (pfVar14 != (float *)0x0) {
        fVar48 = *pfVar41;
        pfVar38 = pfVar41 + 1;
        *pfVar41 = local_238;
        pfVar41 = pfVar14;
        if (pfVar38 != pfVar21) {
          pfVar41 = pfVar38;
        }
      }
      pfVar38 = pfVar43 + 4;
      fVar52 = fVar1 * fVar48 + fVar2 * local_218;
      *pfVar43 = fVar52 + fVar55 + fVar63;
      pfVar43[1] = fVar52 + fVar56 + fVar64;
      pfVar43[2] = fVar52 + fVar53 + fVar65;
      pfVar43[3] = fVar52 + fVar57 + fVar54;
      pfVar43 = pfVar15;
      if (pfVar38 < pfVar18) {
        pfVar43 = pfVar38;
      }
      *pfVar44 = fVar52 + fVar58 + fVar55;
      pfVar44[1] = fVar52 + fVar59 + fVar56;
      pfVar44[2] = fVar52 + fVar60 + fVar53;
      pfVar44[3] = fVar52 + fVar47 + fVar54;
      pfVar38 = pfVar44 + 4;
      *pfVar45 = fVar52 + fVar49 + fVar55;
      pfVar45[1] = fVar52 + fVar50 + fVar56;
      pfVar45[2] = fVar52 + fVar51 + fVar53;
      pfVar45[3] = fVar52 + fVar54 + fVar61;
      pfVar44 = pfVar16;
      if (pfVar38 < pfVar19) {
        pfVar44 = pfVar38;
      }
      pfVar38 = pfVar45 + 4;
      pfVar45 = pfVar17;
      if (pfVar38 < pfVar20) {
        pfVar45 = pfVar38;
      }
      uVar42 = uVar42 - 1;
      local_218 = fVar48;
      fVar52 = fVar62;
    } while (uVar42 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar48;
  *(float *)(param_1 + 0x230) = fVar62;
  *(float *)(param_1 + 0x234) = local_238;
  *(float **)(param_1 + 0x30) = pfVar41;
  *(float **)(param_1 + 0xb0) = local_2b0;
  *(float **)(param_1 + 0xb8) = local_2e8;
  *(float **)(param_1 + 0xc0) = local_2e0;
  *(float **)(param_1 + 200) = local_2d8;
  *(float **)(param_1 + 0xd0) = local_2b8;
  *(float **)(param_1 + 0x90) = pfVar40;
  *(float **)(param_1 + 0xd8) = local_2d0;
  *(float **)(param_1 + 0x98) = local_res20;
  *(float **)(param_1 + 0xe0) = local_2c8;
  *(float **)(param_1 + 0x140) = pfVar45;
  *(float **)(param_1 + 0xa0) = local_2f8;
  *(float *)(param_1 + 0x1f0) = fVar61;
  *(float *)(param_1 + 500) = fVar63;
  *(float *)(param_1 + 0x1f8) = fVar64;
  *(float *)(param_1 + 0x1fc) = fVar65;
  *(float *)(param_1 + 0x200) = fVar57;
  *(float *)(param_1 + 0x204) = fVar58;
  *(float *)(param_1 + 0x208) = fVar59;
  *(float *)(param_1 + 0x20c) = fVar60;
  *(float **)(param_1 + 0xe8) = local_2c0;
  *(undefined8 *)(param_1 + 0x210) = local_298;
  *(undefined8 *)(param_1 + 0x218) = uStack_290;
  *(float **)(param_1 + 0x130) = pfVar43;
  *(float **)(param_1 + 0x138) = pfVar44;
  *(float **)(param_1 + 0xa8) = local_2f0;
  return;
}



// FUNCTION 1431fc2b0 ProcessFivePointOne16 body=3585 status=ok
// SIG undefined ProcessFivePointOne16(void)

void CAkFDNReverbFX::ProcessFivePointOne16(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float *pfVar44;
  float *pfVar45;
  ulonglong uVar46;
  float *pfVar47;
  float *pfVar48;
  uint uVar49;
  float *pfVar50;
  float *pfVar51;
  float *pfVar52;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float *local_res18;
  float *local_res20;
  float *local_358;
  float *local_350;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  float *local_318;
  float *local_310;
  float *local_308;
  float *local_300;
  float *local_2f8;
  float *local_2f0;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_288;
  float local_268;
  float local_258;
  float local_238;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  
  fVar1 = *(float *)(param_1 + 0x44);
  lVar13 = *(longlong *)(param_1 + 0x10);
  local_res20 = *(float **)(param_1 + 0x98);
  fVar55 = *(float *)(param_1 + 0x4c);
  fVar65 = *(float *)(param_1 + 0x230);
  local_258 = *(float *)(param_1 + 0x234);
  pfVar14 = *(float **)(param_1 + 0x28);
  pfVar15 = *(float **)(param_1 + 0x110);
  pfVar16 = *(float **)(param_1 + 0x118);
  pfVar17 = *(float **)(param_1 + 0x120);
  pfVar18 = *(float **)(param_1 + 0x128);
  pfVar19 = *(float **)(param_1 + 0x150);
  pfVar51 = *(float **)(param_1 + 0x138);
  pfVar52 = *(float **)(param_1 + 0x140);
  pfVar48 = *(float **)(param_1 + 0x148);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar12 = *(ushort *)(param_2 + 2);
  pfVar50 = *(float **)(param_1 + 0x130);
  local_358 = *(float **)(param_1 + 0xa0);
  fVar53 = -2.0 / (float)*(uint *)(lVar13 + 0x18);
  local_350 = *(float **)(param_1 + 0xa8);
  local_268 = *(float *)(param_1 + 0x23c);
  local_288 = *(float *)(param_1 + 0x240);
  pfVar20 = *(float **)(param_1 + 0x38);
  pfVar21 = *(float **)(param_1 + 0x158);
  pfVar22 = *(float **)(param_1 + 0x168);
  pfVar44 = *(float **)(param_1 + 0x90);
  fVar4 = *(float *)(lVar13 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar13 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar47 = *(float **)(param_1 + 0x30);
  pfVar23 = *(float **)(param_1 + 0x160);
  local_2f0 = *(float **)(param_1 + 0xb0);
  uVar32 = *(undefined8 *)(param_1 + 0x180);
  uVar33 = *(undefined8 *)(param_1 + 0x188);
  fVar24 = *(float *)(param_1 + 0x170);
  fVar25 = *(float *)(param_1 + 0x174);
  fVar26 = *(float *)(param_1 + 0x178);
  fVar27 = *(float *)(param_1 + 0x17c);
  fVar28 = *(float *)(param_1 + 0x1b0);
  fVar29 = *(float *)(param_1 + 0x1b4);
  fVar30 = *(float *)(param_1 + 0x1b8);
  fVar31 = *(float *)(param_1 + 0x1bc);
  local_2a8 = *(float *)(param_1 + 0x210);
  fStack_2a4 = *(float *)(param_1 + 0x214);
  fStack_2a0 = *(float *)(param_1 + 0x218);
  fStack_29c = *(float *)(param_1 + 0x21c);
  local_2c8 = *(float *)(param_1 + 0x220);
  fStack_2c4 = *(float *)(param_1 + 0x224);
  fStack_2c0 = *(float *)(param_1 + 0x228);
  fStack_2bc = *(float *)(param_1 + 0x22c);
  fVar64 = *(float *)(param_1 + 0x1f0);
  fVar66 = *(float *)(param_1 + 500);
  fVar67 = *(float *)(param_1 + 0x1f8);
  fVar68 = *(float *)(param_1 + 0x1fc);
  local_348 = *(float **)(param_1 + 0xb8);
  local_340 = *(float **)(param_1 + 0xc0);
  local_338 = *(float **)(param_1 + 200);
  local_300 = *(float **)(param_1 + 0xd0);
  local_330 = *(float **)(param_1 + 0xd8);
  local_328 = *(float **)(param_1 + 0xe0);
  local_320 = *(float **)(param_1 + 0xe8);
  local_2f8 = *(float **)(param_1 + 0xf0);
  uVar34 = *(undefined8 *)(param_1 + 400);
  uVar35 = *(undefined8 *)(param_1 + 0x198);
  local_318 = *(float **)(param_1 + 0xf8);
  uVar36 = *(undefined8 *)(param_1 + 0x1a0);
  uVar37 = *(undefined8 *)(param_1 + 0x1a8);
  local_310 = *(float **)(param_1 + 0x100);
  uVar38 = *(undefined8 *)(param_1 + 0x1c0);
  uVar39 = *(undefined8 *)(param_1 + 0x1c8);
  local_308 = *(float **)(param_1 + 0x108);
  uVar40 = *(undefined8 *)(param_1 + 0x1d0);
  uVar41 = *(undefined8 *)(param_1 + 0x1d8);
  uVar42 = *(undefined8 *)(param_1 + 0x1e0);
  uVar43 = *(undefined8 *)(param_1 + 0x1e8);
  uVar49 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_2b8 = *(undefined8 *)(param_1 + 0x200);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x208);
  local_238 = fVar55;
  fVar59 = fVar65;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar55 = *pfVar44;
      pfVar45 = pfVar44 + 4;
      fVar65 = *local_res20;
      fVar57 = *local_358;
      pfVar44 = pfVar15;
      if (pfVar45 < pfVar19) {
        pfVar44 = pfVar45;
      }
      pfVar45 = local_res20 + 4;
      local_res20 = pfVar15 + 1;
      if (pfVar45 < pfVar19) {
        local_res20 = pfVar45;
      }
      pfVar45 = local_358 + 4;
      local_358 = pfVar15 + 2;
      if (pfVar45 < pfVar19) {
        local_358 = pfVar45;
      }
      fVar64 = fVar55 * fVar24 + fVar64 * fVar28;
      fVar66 = fVar65 * fVar25 + fVar66 * fVar29;
      fVar67 = fVar57 * fVar26 + fVar67 * fVar30;
      fVar68 = *local_350 * fVar27 + fVar68 * fVar31;
      pfVar45 = local_350 + 4;
      local_350 = pfVar15 + 3;
      if (pfVar45 < pfVar19) {
        local_350 = pfVar45;
      }
      fVar55 = *local_348;
      fVar65 = *local_2f0;
      fVar57 = *local_340;
      fVar58 = *local_338;
      pfVar45 = local_2f0 + 4;
      local_2f0 = pfVar16;
      if (pfVar45 < pfVar21) {
        local_2f0 = pfVar45;
      }
      pfVar45 = local_348 + 4;
      local_348 = pfVar16 + 1;
      if (pfVar45 < pfVar21) {
        local_348 = pfVar45;
      }
      pfVar45 = local_340 + 4;
      local_340 = pfVar16 + 2;
      if (pfVar45 < pfVar21) {
        local_340 = pfVar45;
      }
      pfVar45 = local_338 + 4;
      local_338 = pfVar16 + 3;
      if (pfVar45 < pfVar21) {
        local_338 = pfVar45;
      }
      local_208 = (float)uVar38;
      fStack_204 = (float)((ulonglong)uVar38 >> 0x20);
      fStack_200 = (float)uVar39;
      fStack_1fc = (float)((ulonglong)uVar39 >> 0x20);
      fVar8 = *local_330;
      local_218 = (float)uVar32;
      fStack_214 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_210 = (float)uVar33;
      fStack_20c = (float)((ulonglong)uVar33 >> 0x20);
      fVar9 = *local_300;
      fVar54 = fVar65 * local_218 + local_208 * (float)local_2b8;
      fVar56 = fVar55 * fStack_214 + fStack_204 * local_2b8._4_4_;
      fVar57 = fVar57 * fStack_210 + fStack_200 * (float)uStack_2b0;
      fVar58 = fVar58 * fStack_20c + fStack_1fc * uStack_2b0._4_4_;
      local_2b8 = CONCAT44(fVar56,fVar54);
      uStack_2b0 = CONCAT44(fVar58,fVar57);
      pfVar45 = local_300 + 4;
      local_1e8 = (float)uVar40;
      fStack_1e4 = (float)((ulonglong)uVar40 >> 0x20);
      fStack_1e0 = (float)uVar41;
      fStack_1dc = (float)((ulonglong)uVar41 >> 0x20);
      local_300 = pfVar17;
      if (pfVar45 < pfVar23) {
        local_300 = pfVar45;
      }
      pfVar45 = local_330 + 4;
      local_1f8 = (float)uVar34;
      fStack_1f4 = (float)((ulonglong)uVar34 >> 0x20);
      fStack_1f0 = (float)uVar35;
      fStack_1ec = (float)((ulonglong)uVar35 >> 0x20);
      local_330 = pfVar17 + 1;
      if (pfVar45 < pfVar23) {
        local_330 = pfVar45;
      }
      pfVar45 = local_328 + 4;
      local_2a8 = fVar9 * local_1f8 + local_1e8 * local_2a8;
      fStack_2a4 = fVar8 * fStack_1f4 + fStack_1e4 * fStack_2a4;
      fStack_2a0 = *local_328 * fStack_1f0 + fStack_1e0 * fStack_2a0;
      fStack_29c = *local_320 * fStack_1ec + fStack_1dc * fStack_29c;
      local_328 = pfVar17 + 2;
      if (pfVar45 < pfVar23) {
        local_328 = pfVar45;
      }
      pfVar45 = local_320 + 4;
      local_320 = pfVar17 + 3;
      if (pfVar45 < pfVar23) {
        local_320 = pfVar45;
      }
      fVar55 = *local_2f8;
      fVar65 = *local_318;
      fVar8 = *local_310;
      pfVar45 = local_2f8 + 4;
      local_1c8 = (float)uVar42;
      fStack_1c4 = (float)((ulonglong)uVar42 >> 0x20);
      fStack_1c0 = (float)uVar43;
      fStack_1bc = (float)((ulonglong)uVar43 >> 0x20);
      local_2f8 = pfVar18;
      if (pfVar45 < pfVar22) {
        local_2f8 = pfVar45;
      }
      pfVar45 = local_318 + 4;
      local_1d8 = (float)uVar36;
      fStack_1d4 = (float)((ulonglong)uVar36 >> 0x20);
      fStack_1d0 = (float)uVar37;
      fStack_1cc = (float)((ulonglong)uVar37 >> 0x20);
      local_318 = pfVar18 + 1;
      if (pfVar45 < pfVar22) {
        local_318 = pfVar45;
      }
      pfVar45 = local_310 + 4;
      local_310 = pfVar18 + 2;
      if (pfVar45 < pfVar22) {
        local_310 = pfVar45;
      }
      local_2c8 = fVar55 * local_1d8 + local_1c8 * local_2c8;
      fStack_2c4 = fVar65 * fStack_1d4 + fStack_1c4 * fStack_2c4;
      fStack_2c0 = fVar8 * fStack_1d0 + fStack_1c0 * fStack_2c0;
      fStack_2bc = *local_308 * fStack_1cc + fStack_1bc * fStack_2bc;
      pfVar45 = local_308 + 4;
      local_308 = pfVar18 + 3;
      if (pfVar45 < pfVar22) {
        local_308 = pfVar45;
      }
      fVar55 = *local_res18;
      uVar46 = (ulonglong)*(ushort *)(param_2 + 2);
      fVar65 = local_res18[uVar46];
      fVar8 = local_res18[uVar46 * 2];
      fVar9 = local_res18[uVar46 * 5];
      fVar10 = local_res18[uVar46 * 3];
      fVar11 = local_res18[uVar46 * 4];
      local_268 = local_268 + (fVar4 - fVar5) * (1.0 / (float)uVar12);
      local_288 = local_288 + (fVar6 - fVar7) * (1.0 / (float)uVar12);
      fVar60 = fStack_2bc + fVar58 + fVar68 + fStack_29c + fStack_2c4 + fVar56 + fVar66 + fStack_2a4
               + fStack_2c0 + fVar57 + fVar67 + fStack_2a0 + local_2c8 + fVar54 + fVar64 + local_2a8
      ;
      *local_res18 = fVar55 * local_268 +
                     (fStack_2c4 * -1.0 + fVar66 * -1.0 + fVar56 * -1.0 + fStack_2a4 * -1.0 +
                      fStack_2bc * -1.0 + fVar68 * -1.0 + fVar58 * -1.0 + fStack_29c * -1.0 +
                     local_2c8 * 1.0 + fVar64 * 1.0 + fVar54 * 1.0 + local_2a8 * 1.0 +
                     fStack_2c0 * 1.0 + fVar67 * 1.0 + fVar57 * 1.0 + fStack_2a0 * 1.0) * local_288;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar65 * local_268 +
           (fVar66 * 1.0 + fVar56 * 1.0 + fStack_2a4 * 1.0 + fStack_2c4 * 1.0 +
            fVar68 * -1.0 + fVar58 * -1.0 + fStack_29c * -1.0 + fStack_2bc * -1.0 +
           fVar64 * 1.0 + fVar54 * 1.0 + local_2a8 * 1.0 + local_2c8 * 1.0 +
           fVar67 * -1.0 + fVar57 * -1.0 + fStack_2a0 * -1.0 + fStack_2c0 * -1.0) * local_288;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar8 * local_268 +
           (fStack_2c4 * 1.0 + fVar66 * 1.0 + fVar56 * 1.0 + fStack_2a4 * 1.0 +
            fStack_2bc * -1.0 + fVar68 * -1.0 + fVar58 * -1.0 + fStack_29c * -1.0 +
           local_2c8 * -1.0 + fVar64 * -1.0 + fVar54 * -1.0 + local_2a8 * -1.0 +
           fStack_2c0 * 1.0 + fVar67 * 1.0 + fVar57 * 1.0 + fStack_2a0 * 1.0) * local_288;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 5] =
           fVar9 * local_268 +
           (fStack_2c4 * -1.0 + fVar66 * 1.0 + fVar56 * -1.0 + fStack_2a4 * 1.0 +
            fStack_2bc * 1.0 + fVar68 * -1.0 + fVar58 * 1.0 + fStack_29c * -1.0 +
           local_2c8 * -1.0 + fVar64 * 1.0 + fVar54 * -1.0 + local_2a8 * 1.0 +
           fStack_2c0 * 1.0 + fVar67 * -1.0 + fVar57 * 1.0 + fStack_2a0 * -1.0) * local_288;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar10 * local_268 +
           (fVar66 * -1.0 + fVar56 * 1.0 + fStack_2a4 * -1.0 + fStack_2c4 * 1.0 +
            fVar68 * 1.0 + fVar58 * 1.0 + fStack_29c * 1.0 + fStack_2bc * -1.0 +
           fVar64 * -1.0 + fVar54 * 1.0 + local_2a8 * -1.0 + local_2c8 * 1.0 +
           fVar67 * -1.0 + fVar57 * -1.0 + fStack_2a0 * 1.0 + fStack_2c0 * -1.0) * local_288;
      fVar61 = fVar60 * fVar53;
      fVar62 = fVar60 * fVar53;
      fVar63 = fVar60 * fVar53;
      fVar60 = fVar60 * fVar53;
      fVar65 = fVar8 + fVar9 + fVar11 + fVar55 + fVar65 + fVar10;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar11 * local_268 +
           (fStack_2c4 * 1.0 + fVar66 * -1.0 + fVar56 * 1.0 + fStack_2a4 * -1.0 +
            fStack_2bc * 1.0 + fVar68 * -1.0 + fVar58 * -1.0 + fStack_29c * 1.0 +
           local_2c8 * -1.0 + fVar64 * 1.0 + fVar54 * 1.0 + local_2a8 * 1.0 +
           fStack_2c0 * -1.0 + fVar67 * -1.0 + fVar57 * 1.0 + fStack_2a0 * -1.0) * local_288;
      local_res18 = local_res18 + 1;
      local_258 = (fVar3 * local_258 + fVar65) - fVar59;
      fVar55 = local_258;
      if (pfVar14 != (float *)0x0) {
        fVar55 = *pfVar47;
        pfVar45 = pfVar47 + 1;
        *pfVar47 = local_258;
        pfVar47 = pfVar14;
        if (pfVar45 != pfVar20) {
          pfVar47 = pfVar45;
        }
      }
      pfVar45 = pfVar50 + 4;
      fVar59 = fVar1 * fVar55 + fVar2 * local_238;
      *pfVar50 = fVar59 + fVar62 + fVar66;
      pfVar50[1] = fVar59 + fVar63 + fVar67;
      pfVar50[2] = fVar59 + fVar60 + fVar68;
      pfVar50[3] = fVar59 + fVar54 + fVar61;
      *pfVar51 = fVar59 + fVar56 + fVar62;
      pfVar51[1] = fVar59 + fVar57 + fVar63;
      pfVar51[2] = fVar59 + fVar58 + fVar60;
      pfVar51[3] = fVar59 + local_2a8 + fVar61;
      pfVar50 = pfVar15;
      if (pfVar45 < pfVar19) {
        pfVar50 = pfVar45;
      }
      pfVar45 = pfVar51 + 4;
      pfVar51 = pfVar16;
      if (pfVar45 < pfVar21) {
        pfVar51 = pfVar45;
      }
      *pfVar52 = fVar59 + fStack_2a4 + fVar62;
      pfVar52[1] = fVar59 + fStack_2a0 + fVar63;
      pfVar52[2] = fVar59 + fStack_29c + fVar60;
      pfVar52[3] = fVar59 + local_2c8 + fVar61;
      pfVar45 = pfVar52 + 4;
      *pfVar48 = fVar59 + fStack_2c4 + fVar62;
      pfVar48[1] = fVar59 + fStack_2c0 + fVar63;
      pfVar48[2] = fVar59 + fStack_2bc + fVar60;
      pfVar48[3] = fVar59 + fVar61 + fVar64;
      pfVar52 = pfVar17;
      if (pfVar45 < pfVar23) {
        pfVar52 = pfVar45;
      }
      pfVar45 = pfVar48 + 4;
      pfVar48 = pfVar18;
      if (pfVar45 < pfVar22) {
        pfVar48 = pfVar45;
      }
      uVar49 = uVar49 - 1;
      local_238 = fVar55;
      fVar59 = fVar65;
    } while (uVar49 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar55;
  *(float *)(param_1 + 0x230) = fVar65;
  *(float *)(param_1 + 0x234) = local_258;
  *(float **)(param_1 + 0x30) = pfVar47;
  *(float **)(param_1 + 0x90) = pfVar44;
  *(float **)(param_1 + 0x98) = local_res20;
  *(float **)(param_1 + 0xa0) = local_358;
  *(float **)(param_1 + 0xa8) = local_350;
  *(float **)(param_1 + 0xb8) = local_348;
  *(float **)(param_1 + 0xc0) = local_340;
  *(float **)(param_1 + 200) = local_338;
  *(float **)(param_1 + 0xd0) = local_300;
  *(float **)(param_1 + 0xd8) = local_330;
  *(float **)(param_1 + 0xe0) = local_328;
  *(float **)(param_1 + 0xe8) = local_320;
  *(float **)(param_1 + 0xf0) = local_2f8;
  *(float **)(param_1 + 0xf8) = local_318;
  *(float **)(param_1 + 0x100) = local_310;
  *(float **)(param_1 + 0x140) = pfVar52;
  *(float *)(param_1 + 0x1f0) = fVar64;
  *(float *)(param_1 + 500) = fVar66;
  *(float *)(param_1 + 0x1f8) = fVar67;
  *(float *)(param_1 + 0x1fc) = fVar68;
  *(float **)(param_1 + 0x108) = local_308;
  *(undefined8 *)(param_1 + 0x200) = local_2b8;
  *(undefined8 *)(param_1 + 0x208) = uStack_2b0;
  *(float *)(param_1 + 0x210) = local_2a8;
  *(float *)(param_1 + 0x214) = fStack_2a4;
  *(float *)(param_1 + 0x218) = fStack_2a0;
  *(float *)(param_1 + 0x21c) = fStack_29c;
  *(float *)(param_1 + 0x220) = local_2c8;
  *(float *)(param_1 + 0x224) = fStack_2c4;
  *(float *)(param_1 + 0x228) = fStack_2c0;
  *(float *)(param_1 + 0x22c) = fStack_2bc;
  *(float **)(param_1 + 0x130) = pfVar50;
  *(float **)(param_1 + 0x138) = pfVar51;
  *(float **)(param_1 + 0x148) = pfVar48;
  *(float **)(param_1 + 0xb0) = local_2f0;
  return;
}



// FUNCTION 1431fd0c0 ProcessFivePointOne4 body=1529 status=ok
// SIG undefined ProcessFivePointOne4(void)

void CAkFDNReverbFX::ProcessFivePointOne4(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float *local_res18;
  float local_1b8;
  float local_1a8;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  
  fVar2 = *(float *)(param_1 + 0x48);
  lVar14 = *(longlong *)(param_1 + 0x10);
  local_1b8 = *(float *)(param_1 + 0x23c);
  fVar40 = *(float *)(param_1 + 0x230);
  local_188 = *(float *)(param_1 + 0x1f0);
  fStack_184 = *(float *)(param_1 + 500);
  fStack_180 = *(float *)(param_1 + 0x1f8);
  fStack_17c = *(float *)(param_1 + 0x1fc);
  pfVar15 = *(float **)(param_1 + 0x110);
  pfVar16 = *(float **)(param_1 + 0x150);
  pfVar33 = *(float **)(param_1 + 0x130);
  pfVar30 = *(float **)(param_1 + 0x98);
  pfVar32 = *(float **)(param_1 + 0xa0);
  pfVar31 = *(float **)(param_1 + 0xa8);
  fVar3 = *(float *)(param_1 + 0x238);
  fVar4 = *(float *)(param_1 + 0x44);
  fVar39 = *(float *)(param_1 + 0x4c);
  fVar41 = *(float *)(param_1 + 0x234);
  fVar19 = *(float *)(param_1 + 0x170);
  fVar20 = *(float *)(param_1 + 0x174);
  fVar21 = *(float *)(param_1 + 0x178);
  fVar22 = *(float *)(param_1 + 0x17c);
  fVar23 = *(float *)(param_1 + 0x1b0);
  fVar24 = *(float *)(param_1 + 0x1b4);
  fVar25 = *(float *)(param_1 + 0x1b8);
  fVar26 = *(float *)(param_1 + 0x1bc);
  local_res18 = (float *)*param_2;
  uVar13 = *(ushort *)(param_2 + 2);
  uVar34 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar35 = -2.0 / (float)*(uint *)(lVar14 + 0x18);
  local_1a8 = *(float *)(param_1 + 0x240);
  pfVar17 = *(float **)(param_1 + 0x28);
  pfVar18 = *(float **)(param_1 + 0x38);
  fVar5 = *(float *)(lVar14 + 0x10);
  fVar6 = *(float *)(param_1 + 0x23c);
  fVar7 = *(float *)(lVar14 + 0x14);
  pfVar29 = *(float **)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x240);
  pfVar28 = *(float **)(param_1 + 0x90);
  fVar42 = fVar39;
  fVar37 = fVar40;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar40 = *pfVar28;
      pfVar1 = pfVar28 + 4;
      fVar39 = *pfVar30;
      fVar9 = *pfVar32;
      pfVar28 = pfVar15;
      if (pfVar1 < pfVar16) {
        pfVar28 = pfVar1;
      }
      pfVar1 = pfVar30 + 4;
      pfVar30 = pfVar15 + 1;
      if (pfVar1 < pfVar16) {
        pfVar30 = pfVar1;
      }
      pfVar1 = pfVar32 + 4;
      uVar27 = (ulonglong)*(ushort *)(param_2 + 2);
      pfVar32 = pfVar15 + 2;
      if (pfVar1 < pfVar16) {
        pfVar32 = pfVar1;
      }
      pfVar1 = pfVar31 + 4;
      fVar10 = *local_res18;
      fVar11 = local_res18[uVar27];
      local_188 = fVar40 * fVar19 + local_188 * fVar23;
      fStack_184 = fVar39 * fVar20 + fStack_184 * fVar24;
      fStack_180 = fVar9 * fVar21 + fStack_180 * fVar25;
      fStack_17c = *pfVar31 * fVar22 + fStack_17c * fVar26;
      fVar40 = local_res18[uVar27 * 2];
      pfVar31 = pfVar15 + 3;
      if (pfVar1 < pfVar16) {
        pfVar31 = pfVar1;
      }
      fVar39 = local_res18[uVar27 * 5];
      fVar9 = local_res18[uVar27 * 3];
      fVar12 = local_res18[uVar27 * 4];
      fVar36 = fStack_17c + fStack_184 + fStack_180 + local_188;
      local_1b8 = local_1b8 + (fVar5 - fVar6) * (1.0 / (float)uVar13);
      local_1a8 = local_1a8 + (fVar7 - fVar8) * (1.0 / (float)uVar13);
      *local_res18 = fVar10 * local_1b8 +
                     (fStack_184 * -1.0 + fStack_17c * -1.0 + local_188 * 1.0 + fStack_180 * 1.0) *
                     local_1a8;
      fVar38 = (fStack_184 * 1.0 + fStack_17c * -1.0 + local_188 * 1.0 + fStack_180 * -1.0) *
               local_1a8;
      local_res18[*(ushort *)(param_2 + 2)] = fVar11 * local_1b8 + fVar38;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar40 * local_1b8 +
           (fStack_184 * 1.0 + fStack_17c * -1.0 + local_188 * -1.0 + fStack_180 * 1.0) * local_1a8;
      fVar40 = fVar40 + fVar39 + fVar12 + fVar10 + fVar11 + fVar9;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 5] = fVar39 * local_1b8 + fVar38;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar9 * local_1b8 +
           (fStack_184 * -1.0 + fStack_17c * 1.0 + local_188 * -1.0 + fStack_180 * -1.0) * local_1a8
      ;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar12 * local_1b8 +
           (fStack_184 * -1.0 + fStack_17c * -1.0 + local_188 * 1.0 + fStack_180 * -1.0) * local_1a8
      ;
      local_res18 = local_res18 + 1;
      fVar41 = (fVar3 * fVar41 + fVar40) - fVar37;
      fVar39 = fVar41;
      if (pfVar17 != (float *)0x0) {
        fVar39 = *pfVar29;
        pfVar1 = pfVar29 + 1;
        *pfVar29 = fVar41;
        pfVar29 = pfVar17;
        if (pfVar1 != pfVar18) {
          pfVar29 = pfVar1;
        }
      }
      pfVar1 = pfVar33 + 4;
      fVar37 = fVar4 * fVar39 + fVar2 * fVar42;
      *pfVar33 = fVar37 + fVar36 * fVar35 + fStack_184;
      pfVar33[1] = fVar37 + fVar36 * fVar35 + fStack_180;
      pfVar33[2] = fVar37 + fVar36 * fVar35 + fStack_17c;
      pfVar33[3] = fVar37 + fVar36 * fVar35 + local_188;
      pfVar33 = pfVar15;
      if (pfVar1 < pfVar16) {
        pfVar33 = pfVar1;
      }
      uVar34 = uVar34 - 1;
      fVar42 = fVar39;
      fVar37 = fVar40;
    } while (uVar34 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar39;
  *(float *)(param_1 + 0x230) = fVar40;
  *(float *)(param_1 + 0x234) = fVar41;
  *(float **)(param_1 + 0x30) = pfVar29;
  *(float *)(param_1 + 0x1f0) = local_188;
  *(float *)(param_1 + 500) = fStack_184;
  *(float *)(param_1 + 0x1f8) = fStack_180;
  *(float *)(param_1 + 0x1fc) = fStack_17c;
  *(float **)(param_1 + 0x130) = pfVar33;
  *(float **)(param_1 + 0x90) = pfVar28;
  *(float **)(param_1 + 0x98) = pfVar30;
  *(float **)(param_1 + 0xa0) = pfVar32;
  *(float **)(param_1 + 0xa8) = pfVar31;
  return;
}



// FUNCTION 1431fd6c0 ProcessFivePointOne8 body=2194 status=ok
// SIG undefined ProcessFivePointOne8(void)

void CAkFDNReverbFX::ProcessFivePointOne8(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float *pfVar36;
  ulonglong uVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  uint uVar42;
  float *pfVar43;
  float *pfVar44;
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
  float *local_res18;
  float *local_res20;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  float local_208;
  float local_1e8;
  float local_1d8;
  float local_1b8;
  
  fVar1 = *(float *)(param_1 + 0x44);
  lVar13 = *(longlong *)(param_1 + 0x10);
  fVar57 = *(float *)(param_1 + 0x230);
  local_1d8 = *(float *)(param_1 + 0x234);
  local_res20 = *(float **)(param_1 + 0xa8);
  pfVar14 = *(float **)(param_1 + 0x28);
  pfVar15 = *(float **)(param_1 + 0x38);
  pfVar16 = *(float **)(param_1 + 0x110);
  pfVar17 = *(float **)(param_1 + 0x118);
  pfVar18 = *(float **)(param_1 + 0x150);
  pfVar19 = *(float **)(param_1 + 0x158);
  pfVar40 = *(float **)(param_1 + 0x130);
  pfVar41 = *(float **)(param_1 + 0x138);
  pfVar44 = *(float **)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar20 = *(float *)(param_1 + 0x170);
  fVar21 = *(float *)(param_1 + 0x174);
  fVar22 = *(float *)(param_1 + 0x178);
  fVar23 = *(float *)(param_1 + 0x17c);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar12 = *(ushort *)(param_2 + 2);
  local_238 = *(float **)(param_1 + 0xb8);
  local_248 = *(float **)(param_1 + 0xc0);
  fVar45 = -2.0 / (float)*(uint *)(lVar13 + 0x18);
  local_240 = *(float **)(param_1 + 200);
  pfVar43 = *(float **)(param_1 + 0xb0);
  local_1e8 = *(float *)(param_1 + 0x23c);
  local_208 = *(float *)(param_1 + 0x240);
  local_230 = *(float **)(param_1 + 0xa0);
  fVar4 = *(float *)(lVar13 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar13 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar39 = *(float **)(param_1 + 0x30);
  fVar55 = *(float *)(param_1 + 0x4c);
  pfVar38 = *(float **)(param_1 + 0x98);
  fVar24 = *(float *)(param_1 + 0x180);
  fVar25 = *(float *)(param_1 + 0x184);
  fVar26 = *(float *)(param_1 + 0x188);
  fVar27 = *(float *)(param_1 + 0x18c);
  fVar28 = *(float *)(param_1 + 0x1b0);
  fVar29 = *(float *)(param_1 + 0x1b4);
  fVar30 = *(float *)(param_1 + 0x1b8);
  fVar31 = *(float *)(param_1 + 0x1bc);
  fVar32 = *(float *)(param_1 + 0x1c0);
  fVar33 = *(float *)(param_1 + 0x1c4);
  fVar34 = *(float *)(param_1 + 0x1c8);
  fVar35 = *(float *)(param_1 + 0x1cc);
  uVar42 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar46 = *(float *)(param_1 + 0x1f0);
  fVar49 = *(float *)(param_1 + 500);
  fVar51 = *(float *)(param_1 + 0x1f8);
  fVar53 = *(float *)(param_1 + 0x1fc);
  fVar47 = *(float *)(param_1 + 0x200);
  fVar50 = *(float *)(param_1 + 0x204);
  fVar52 = *(float *)(param_1 + 0x208);
  fVar54 = *(float *)(param_1 + 0x20c);
  local_1b8 = fVar55;
  fVar48 = fVar57;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar57 = *pfVar38;
      fVar55 = *pfVar44;
      pfVar36 = pfVar44 + 4;
      pfVar44 = pfVar16;
      if (pfVar36 < pfVar18) {
        pfVar44 = pfVar36;
      }
      pfVar36 = pfVar38 + 4;
      pfVar38 = pfVar16 + 1;
      if (pfVar36 < pfVar18) {
        pfVar38 = pfVar36;
      }
      fVar8 = *pfVar43;
      fVar46 = fVar55 * fVar20 + fVar28 * fVar46;
      fVar49 = fVar57 * fVar21 + fVar29 * fVar49;
      fVar51 = *local_230 * fVar22 + fVar30 * fVar51;
      fVar53 = *local_res20 * fVar23 + fVar31 * fVar53;
      pfVar36 = local_230 + 4;
      local_230 = pfVar16 + 2;
      if (pfVar36 < pfVar18) {
        local_230 = pfVar36;
      }
      pfVar36 = local_res20 + 4;
      local_res20 = pfVar16 + 3;
      if (pfVar36 < pfVar18) {
        local_res20 = pfVar36;
      }
      fVar57 = *local_248;
      fVar55 = *local_238;
      pfVar36 = pfVar43 + 4;
      pfVar43 = pfVar17;
      if (pfVar36 < pfVar19) {
        pfVar43 = pfVar36;
      }
      pfVar36 = local_238 + 4;
      local_238 = pfVar17 + 1;
      if (pfVar36 < pfVar19) {
        local_238 = pfVar36;
      }
      pfVar36 = local_248 + 4;
      local_248 = pfVar17 + 2;
      if (pfVar36 < pfVar19) {
        local_248 = pfVar36;
      }
      pfVar36 = local_240 + 4;
      fVar47 = fVar8 * fVar24 + fVar32 * fVar47;
      fVar50 = fVar55 * fVar25 + fVar33 * fVar50;
      fVar52 = fVar57 * fVar26 + fVar34 * fVar52;
      fVar54 = *local_240 * fVar27 + fVar35 * fVar54;
      local_240 = pfVar17 + 3;
      if (pfVar36 < pfVar19) {
        local_240 = pfVar36;
      }
      uVar37 = (ulonglong)*(ushort *)(param_2 + 2);
      fVar57 = local_res18[uVar37];
      fVar55 = local_res18[uVar37 * 2];
      fVar8 = *local_res18;
      fVar9 = local_res18[uVar37 * 5];
      fVar10 = local_res18[uVar37 * 3];
      fVar11 = local_res18[uVar37 * 4];
      local_1e8 = local_1e8 + (fVar4 - fVar5) * (1.0 / (float)uVar12);
      local_208 = local_208 + (fVar6 - fVar7) * (1.0 / (float)uVar12);
      fVar56 = fVar54 + fVar53 + fVar50 + fVar49 + fVar52 + fVar51 + fVar47 + fVar46;
      *local_res18 = fVar8 * local_1e8 +
                     (fVar50 * -1.0 + fVar49 * -1.0 + fVar54 * -1.0 + fVar53 * -1.0 +
                     fVar47 * 1.0 + fVar46 * 1.0 + fVar52 * 1.0 + fVar51 * 1.0) * local_208;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar57 * local_1e8 +
           (fVar50 * 1.0 + fVar49 * 1.0 + fVar54 * -1.0 + fVar53 * -1.0 +
           fVar47 * 1.0 + fVar46 * 1.0 + fVar52 * -1.0 + fVar51 * -1.0) * local_208;
      fVar57 = fVar55 + fVar9 + fVar11 + fVar8 + fVar57 + fVar10;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar55 * local_1e8 +
           (fVar50 * 1.0 + fVar49 * 1.0 + fVar54 * -1.0 + fVar53 * -1.0 +
           fVar47 * -1.0 + fVar46 * -1.0 + fVar52 * 1.0 + fVar51 * 1.0) * local_208;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 5] =
           fVar9 * local_1e8 +
           (fVar50 * -1.0 + fVar49 * 1.0 + fVar54 * 1.0 + fVar53 * -1.0 +
           fVar47 * -1.0 + fVar46 * 1.0 + fVar52 * 1.0 + fVar51 * -1.0) * local_208;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar10 * local_1e8 +
           (fVar50 * 1.0 + fVar49 * -1.0 + fVar54 * 1.0 + fVar53 * 1.0 +
           fVar47 * 1.0 + fVar46 * -1.0 + fVar52 * -1.0 + fVar51 * -1.0) * local_208;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar11 * local_1e8 +
           (fVar50 * 1.0 + fVar49 * -1.0 + fVar54 * -1.0 + fVar53 * -1.0 +
           fVar47 * 1.0 + fVar46 * 1.0 + fVar52 * 1.0 + fVar51 * -1.0) * local_208;
      local_res18 = local_res18 + 1;
      local_1d8 = (fVar3 * local_1d8 + fVar57) - fVar48;
      fVar55 = local_1d8;
      if (pfVar14 != (float *)0x0) {
        fVar55 = *pfVar39;
        pfVar36 = pfVar39 + 1;
        *pfVar39 = local_1d8;
        pfVar39 = pfVar14;
        if (pfVar36 != pfVar15) {
          pfVar39 = pfVar36;
        }
      }
      pfVar36 = pfVar40 + 4;
      fVar48 = fVar1 * fVar55 + fVar2 * local_1b8;
      *pfVar40 = fVar48 + fVar56 * fVar45 + fVar49;
      pfVar40[1] = fVar48 + fVar56 * fVar45 + fVar51;
      pfVar40[2] = fVar48 + fVar56 * fVar45 + fVar53;
      pfVar40[3] = fVar48 + fVar47 + fVar56 * fVar45;
      pfVar40 = pfVar16;
      if (pfVar36 < pfVar18) {
        pfVar40 = pfVar36;
      }
      *pfVar41 = fVar48 + fVar50 + fVar56 * fVar45;
      pfVar41[1] = fVar48 + fVar52 + fVar56 * fVar45;
      pfVar41[2] = fVar48 + fVar54 + fVar56 * fVar45;
      pfVar41[3] = fVar48 + fVar56 * fVar45 + fVar46;
      pfVar36 = pfVar41 + 4;
      pfVar41 = pfVar17;
      if (pfVar36 < pfVar19) {
        pfVar41 = pfVar36;
      }
      uVar42 = uVar42 - 1;
      local_1b8 = fVar55;
      fVar48 = fVar57;
    } while (uVar42 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar55;
  *(float *)(param_1 + 0x230) = fVar57;
  *(float *)(param_1 + 0x234) = local_1d8;
  *(float **)(param_1 + 0x30) = pfVar39;
  *(float **)(param_1 + 0xa0) = local_230;
  *(float **)(param_1 + 0xa8) = local_res20;
  *(float **)(param_1 + 0xb8) = local_238;
  *(float **)(param_1 + 0xc0) = local_248;
  *(float *)(param_1 + 0x200) = fVar47;
  *(float *)(param_1 + 0x204) = fVar50;
  *(float *)(param_1 + 0x208) = fVar52;
  *(float *)(param_1 + 0x20c) = fVar54;
  *(float **)(param_1 + 200) = local_240;
  *(float *)(param_1 + 0x1f0) = fVar46;
  *(float *)(param_1 + 500) = fVar49;
  *(float *)(param_1 + 0x1f8) = fVar51;
  *(float *)(param_1 + 0x1fc) = fVar53;
  *(float **)(param_1 + 0x130) = pfVar40;
  *(float **)(param_1 + 0x138) = pfVar41;
  *(float **)(param_1 + 0x90) = pfVar44;
  *(float **)(param_1 + 0x98) = pfVar38;
  *(float **)(param_1 + 0xb0) = pfVar43;
  return;
}



// FUNCTION 1431fdf60 ProcessFivePointZero12 body=2790 status=ok
// SIG undefined ProcessFivePointZero12(void)

void CAkFDNReverbFX::ProcessFivePointZero12(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float *pfVar37;
  ulonglong uVar38;
  float *pfVar39;
  float *pfVar40;
  uint uVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
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
  float fVar64;
  float *local_res18;
  float *local_res20;
  float *local_2c8;
  float *local_2c0;
  float *local_2b8;
  float *local_2b0;
  float *local_2a8;
  float *local_2a0;
  float *local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_228;
  float local_218;
  float local_208;
  float local_1e8;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  
  fVar1 = *(float *)(param_1 + 0x44);
  lVar12 = *(longlong *)(param_1 + 0x10);
  fVar48 = *(float *)(param_1 + 0x4c);
  fVar64 = *(float *)(param_1 + 0x230);
  local_208 = *(float *)(param_1 + 0x234);
  local_2b8 = *(float **)(param_1 + 0xb8);
  pfVar13 = *(float **)(param_1 + 0x28);
  pfVar14 = *(float **)(param_1 + 0x110);
  pfVar15 = *(float **)(param_1 + 0x118);
  pfVar16 = *(float **)(param_1 + 0x120);
  pfVar17 = *(float **)(param_1 + 0x150);
  pfVar18 = *(float **)(param_1 + 0x158);
  pfVar19 = *(float **)(param_1 + 0x160);
  pfVar43 = *(float **)(param_1 + 0x138);
  pfVar44 = *(float **)(param_1 + 0x140);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar11 = *(ushort *)(param_2 + 2);
  pfVar42 = *(float **)(param_1 + 0x130);
  fVar45 = -2.0 / (float)*(uint *)(lVar12 + 0x18);
  local_2b0 = *(float **)(param_1 + 0xc0);
  local_228 = *(float *)(param_1 + 0x23c);
  local_218 = *(float *)(param_1 + 0x240);
  pfVar20 = *(float **)(param_1 + 0x38);
  local_res20 = *(float **)(param_1 + 0x98);
  local_2c8 = *(float **)(param_1 + 0xa0);
  local_2c0 = *(float **)(param_1 + 0xa8);
  local_280 = *(float **)(param_1 + 0xb0);
  fVar4 = *(float *)(lVar12 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar12 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar40 = *(float **)(param_1 + 0x30);
  pfVar39 = *(float **)(param_1 + 0x90);
  uVar29 = *(undefined8 *)(param_1 + 0x180);
  uVar30 = *(undefined8 *)(param_1 + 0x188);
  fVar21 = *(float *)(param_1 + 0x170);
  fVar22 = *(float *)(param_1 + 0x174);
  fVar23 = *(float *)(param_1 + 0x178);
  fVar24 = *(float *)(param_1 + 0x17c);
  fVar25 = *(float *)(param_1 + 0x1b0);
  fVar26 = *(float *)(param_1 + 0x1b4);
  fVar27 = *(float *)(param_1 + 0x1b8);
  fVar28 = *(float *)(param_1 + 0x1bc);
  fVar60 = *(float *)(param_1 + 0x1f0);
  fVar61 = *(float *)(param_1 + 500);
  fVar62 = *(float *)(param_1 + 0x1f8);
  fVar63 = *(float *)(param_1 + 0x1fc);
  fVar46 = *(float *)(param_1 + 0x200);
  fVar49 = *(float *)(param_1 + 0x204);
  fVar51 = *(float *)(param_1 + 0x208);
  fVar53 = *(float *)(param_1 + 0x20c);
  local_2a8 = *(float **)(param_1 + 200);
  local_288 = *(float **)(param_1 + 0xd0);
  local_2a0 = *(float **)(param_1 + 0xd8);
  local_298 = *(float **)(param_1 + 0xe0);
  uVar31 = *(undefined8 *)(param_1 + 400);
  uVar32 = *(undefined8 *)(param_1 + 0x198);
  local_290 = *(float **)(param_1 + 0xe8);
  uVar33 = *(undefined8 *)(param_1 + 0x1c0);
  uVar34 = *(undefined8 *)(param_1 + 0x1c8);
  uVar35 = *(undefined8 *)(param_1 + 0x1d0);
  uVar36 = *(undefined8 *)(param_1 + 0x1d8);
  uVar41 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_268 = *(undefined8 *)(param_1 + 0x210);
  uStack_260 = *(undefined8 *)(param_1 + 0x218);
  local_1e8 = fVar48;
  fVar55 = fVar64;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar48 = *pfVar39;
      fVar64 = *local_res20;
      pfVar37 = pfVar39 + 4;
      pfVar39 = pfVar14;
      if (pfVar37 < pfVar17) {
        pfVar39 = pfVar37;
      }
      pfVar37 = local_res20 + 4;
      local_res20 = pfVar14 + 1;
      if (pfVar37 < pfVar17) {
        local_res20 = pfVar37;
      }
      fVar60 = fVar48 * fVar21 + fVar60 * fVar25;
      fVar61 = fVar64 * fVar22 + fVar61 * fVar26;
      fVar62 = *local_2c8 * fVar23 + fVar62 * fVar27;
      fVar63 = *local_2c0 * fVar24 + fVar63 * fVar28;
      pfVar37 = local_2c8 + 4;
      local_2c8 = pfVar14 + 2;
      if (pfVar37 < pfVar17) {
        local_2c8 = pfVar37;
      }
      pfVar37 = local_2c0 + 4;
      local_2c0 = pfVar14 + 3;
      if (pfVar37 < pfVar17) {
        local_2c0 = pfVar37;
      }
      fVar48 = *local_2b8;
      fVar64 = *local_280;
      fVar47 = *local_2b0;
      fVar50 = *local_2a8;
      pfVar37 = local_280 + 4;
      local_280 = pfVar15;
      if (pfVar37 < pfVar18) {
        local_280 = pfVar37;
      }
      pfVar37 = local_2b8 + 4;
      local_2b8 = pfVar15 + 1;
      if (pfVar37 < pfVar18) {
        local_2b8 = pfVar37;
      }
      pfVar37 = local_2b0 + 4;
      local_2b0 = pfVar15 + 2;
      if (pfVar37 < pfVar18) {
        local_2b0 = pfVar37;
      }
      pfVar37 = local_2a8 + 4;
      local_2a8 = pfVar15 + 3;
      if (pfVar37 < pfVar18) {
        local_2a8 = pfVar37;
      }
      local_1c8 = (float)uVar33;
      fStack_1c4 = (float)((ulonglong)uVar33 >> 0x20);
      fStack_1c0 = (float)uVar34;
      fStack_1bc = (float)((ulonglong)uVar34 >> 0x20);
      fVar52 = *local_2a0;
      fVar54 = *local_298;
      local_1d8 = (float)uVar29;
      fStack_1d4 = (float)((ulonglong)uVar29 >> 0x20);
      fStack_1d0 = (float)uVar30;
      fStack_1cc = (float)((ulonglong)uVar30 >> 0x20);
      fVar8 = *local_288;
      fVar46 = fVar64 * local_1d8 + local_1c8 * fVar46;
      fVar49 = fVar48 * fStack_1d4 + fStack_1c4 * fVar49;
      fVar51 = fVar47 * fStack_1d0 + fStack_1c0 * fVar51;
      fVar53 = fVar50 * fStack_1cc + fStack_1bc * fVar53;
      pfVar37 = local_288 + 4;
      local_1a8 = (float)uVar35;
      fStack_1a4 = (float)((ulonglong)uVar35 >> 0x20);
      fStack_1a0 = (float)uVar36;
      fStack_19c = (float)((ulonglong)uVar36 >> 0x20);
      local_288 = pfVar16;
      if (pfVar37 < pfVar19) {
        local_288 = pfVar37;
      }
      pfVar37 = local_2a0 + 4;
      local_1b8 = (float)uVar31;
      fStack_1b4 = (float)((ulonglong)uVar31 >> 0x20);
      fStack_1b0 = (float)uVar32;
      fStack_1ac = (float)((ulonglong)uVar32 >> 0x20);
      local_2a0 = pfVar16 + 1;
      if (pfVar37 < pfVar19) {
        local_2a0 = pfVar37;
      }
      pfVar37 = local_298 + 4;
      local_298 = pfVar16 + 2;
      if (pfVar37 < pfVar19) {
        local_298 = pfVar37;
      }
      fVar47 = fVar8 * local_1b8 + local_1a8 * (float)local_268;
      fVar50 = fVar52 * fStack_1b4 + fStack_1a4 * local_268._4_4_;
      fVar52 = fVar54 * fStack_1b0 + fStack_1a0 * (float)uStack_260;
      fVar54 = *local_290 * fStack_1ac + fStack_19c * uStack_260._4_4_;
      pfVar37 = local_290 + 4;
      local_290 = pfVar16 + 3;
      if (pfVar37 < pfVar19) {
        local_290 = pfVar37;
      }
      local_268 = CONCAT44(fVar50,fVar47);
      uStack_260 = CONCAT44(fVar54,fVar52);
      fVar48 = *local_res18;
      uVar38 = (ulonglong)*(ushort *)(param_2 + 2);
      fVar64 = local_res18[uVar38];
      fVar8 = local_res18[uVar38 * 2];
      fVar9 = local_res18[uVar38 * 3];
      fVar10 = local_res18[uVar38 * 4];
      local_228 = local_228 + (fVar4 - fVar5) * (1.0 / (float)uVar11);
      local_218 = local_218 + (fVar6 - fVar7) * (1.0 / (float)uVar11);
      fVar56 = fVar54 + fVar53 + fVar63 + fVar50 + fVar49 + fVar61 +
               fVar52 + fVar51 + fVar62 + fVar47 + fVar46 + fVar60;
      *local_res18 = fVar48 * local_228 +
                     (fVar50 * -1.0 + fVar61 * -1.0 + fVar49 * -1.0 +
                      fVar54 * -1.0 + fVar63 * -1.0 + fVar53 * -1.0 +
                     fVar47 * 1.0 + fVar60 * 1.0 + fVar46 * 1.0 +
                     fVar52 * 1.0 + fVar62 * 1.0 + fVar51 * 1.0) * local_218;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar64 * local_228 +
           (fVar50 * 1.0 + fVar61 * 1.0 + fVar49 * 1.0 +
            fVar54 * -1.0 + fVar63 * -1.0 + fVar53 * -1.0 +
           fVar47 * 1.0 + fVar60 * 1.0 + fVar46 * 1.0 +
           fVar52 * -1.0 + fVar62 * -1.0 + fVar51 * -1.0) * local_218;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar8 * local_228 +
           (fVar50 * 1.0 + fVar61 * 1.0 + fVar49 * 1.0 +
            fVar54 * -1.0 + fVar63 * -1.0 + fVar53 * -1.0 +
           fVar47 * -1.0 + fVar60 * -1.0 + fVar46 * -1.0 +
           fVar52 * 1.0 + fVar62 * 1.0 + fVar51 * 1.0) * local_218;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar9 * local_228 +
           (fVar50 * -1.0 + fVar61 * -1.0 + fVar49 * 1.0 +
            fVar54 * 1.0 + fVar63 * 1.0 + fVar53 * 1.0 +
           fVar47 * -1.0 + fVar60 * -1.0 + fVar46 * 1.0 +
           fVar52 * 1.0 + fVar62 * -1.0 + fVar51 * -1.0) * local_218;
      fVar57 = fVar56 * fVar45;
      fVar58 = fVar56 * fVar45;
      fVar59 = fVar56 * fVar45;
      fVar56 = fVar56 * fVar45;
      fVar64 = fVar8 + fVar9 + fVar48 + fVar64 + fVar10;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar10 * local_228 +
           (fVar50 * -1.0 + fVar61 * -1.0 + fVar49 * 1.0 +
            fVar54 * 1.0 + fVar63 * -1.0 + fVar53 * -1.0 +
           fVar47 * 1.0 + fVar60 * 1.0 + fVar46 * 1.0 + fVar52 * -1.0 + fVar62 * -1.0 + fVar51 * 1.0
           ) * local_218;
      local_res18 = local_res18 + 1;
      local_208 = (fVar3 * local_208 + fVar64) - fVar55;
      fVar48 = local_208;
      if (pfVar13 != (float *)0x0) {
        fVar48 = *pfVar40;
        pfVar37 = pfVar40 + 1;
        *pfVar40 = local_208;
        pfVar40 = pfVar13;
        if (pfVar37 != pfVar20) {
          pfVar40 = pfVar37;
        }
      }
      pfVar37 = pfVar42 + 4;
      fVar55 = fVar1 * fVar48 + fVar2 * local_1e8;
      *pfVar42 = fVar55 + fVar58 + fVar61;
      pfVar42[1] = fVar55 + fVar59 + fVar62;
      pfVar42[2] = fVar55 + fVar56 + fVar63;
      pfVar42[3] = fVar55 + fVar46 + fVar57;
      pfVar42 = pfVar14;
      if (pfVar37 < pfVar17) {
        pfVar42 = pfVar37;
      }
      *pfVar43 = fVar55 + fVar49 + fVar58;
      pfVar43[1] = fVar55 + fVar51 + fVar59;
      pfVar43[2] = fVar55 + fVar53 + fVar56;
      pfVar43[3] = fVar55 + fVar47 + fVar57;
      pfVar37 = pfVar43 + 4;
      *pfVar44 = fVar55 + fVar50 + fVar58;
      pfVar44[1] = fVar55 + fVar52 + fVar59;
      pfVar44[2] = fVar55 + fVar54 + fVar56;
      pfVar44[3] = fVar55 + fVar57 + fVar60;
      pfVar43 = pfVar15;
      if (pfVar37 < pfVar18) {
        pfVar43 = pfVar37;
      }
      pfVar37 = pfVar44 + 4;
      pfVar44 = pfVar16;
      if (pfVar37 < pfVar19) {
        pfVar44 = pfVar37;
      }
      uVar41 = uVar41 - 1;
      local_1e8 = fVar48;
      fVar55 = fVar64;
    } while (uVar41 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar48;
  *(float *)(param_1 + 0x230) = fVar64;
  *(float *)(param_1 + 0x234) = local_208;
  *(float **)(param_1 + 0x30) = pfVar40;
  *(float **)(param_1 + 0xb0) = local_280;
  *(float **)(param_1 + 0xb8) = local_2b8;
  *(float **)(param_1 + 0xc0) = local_2b0;
  *(float **)(param_1 + 200) = local_2a8;
  *(float **)(param_1 + 0xd0) = local_288;
  *(float **)(param_1 + 0x90) = pfVar39;
  *(float **)(param_1 + 0xd8) = local_2a0;
  *(float **)(param_1 + 0x98) = local_res20;
  *(float **)(param_1 + 0xe0) = local_298;
  *(float **)(param_1 + 0x140) = pfVar44;
  *(float **)(param_1 + 0xa0) = local_2c8;
  *(float *)(param_1 + 0x1f0) = fVar60;
  *(float *)(param_1 + 500) = fVar61;
  *(float *)(param_1 + 0x1f8) = fVar62;
  *(float *)(param_1 + 0x1fc) = fVar63;
  *(float *)(param_1 + 0x200) = fVar46;
  *(float *)(param_1 + 0x204) = fVar49;
  *(float *)(param_1 + 0x208) = fVar51;
  *(float *)(param_1 + 0x20c) = fVar53;
  *(float **)(param_1 + 0xe8) = local_290;
  *(undefined8 *)(param_1 + 0x210) = local_268;
  *(undefined8 *)(param_1 + 0x218) = uStack_260;
  *(float **)(param_1 + 0x130) = pfVar42;
  *(float **)(param_1 + 0x138) = pfVar43;
  *(float **)(param_1 + 0xa8) = local_2c0;
  return;
}



// FUNCTION 1431fea50 ProcessFivePointZero16 body=3463 status=ok
// SIG undefined ProcessFivePointZero16(void)

void CAkFDNReverbFX::ProcessFivePointZero16(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float *pfVar43;
  float *pfVar44;
  ulonglong uVar45;
  float *pfVar46;
  float *pfVar47;
  uint uVar48;
  float *pfVar49;
  float *pfVar50;
  float *pfVar51;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float *local_res18;
  float *local_res20;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  float *local_318;
  float *local_310;
  float *local_308;
  float *local_300;
  float *local_2f8;
  float *local_2f0;
  float *local_2e8;
  float *local_2e0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_268;
  float local_258;
  float local_248;
  float local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  
  fVar1 = *(float *)(param_1 + 0x44);
  lVar12 = *(longlong *)(param_1 + 0x10);
  local_res20 = *(float **)(param_1 + 0x98);
  fVar55 = *(float *)(param_1 + 0x4c);
  fVar67 = *(float *)(param_1 + 0x230);
  local_248 = *(float *)(param_1 + 0x234);
  pfVar13 = *(float **)(param_1 + 0x28);
  pfVar14 = *(float **)(param_1 + 0x110);
  pfVar15 = *(float **)(param_1 + 0x118);
  pfVar16 = *(float **)(param_1 + 0x120);
  pfVar17 = *(float **)(param_1 + 0x128);
  pfVar18 = *(float **)(param_1 + 0x150);
  pfVar50 = *(float **)(param_1 + 0x138);
  pfVar51 = *(float **)(param_1 + 0x140);
  pfVar47 = *(float **)(param_1 + 0x148);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar11 = *(ushort *)(param_2 + 2);
  pfVar49 = *(float **)(param_1 + 0x130);
  local_348 = *(float **)(param_1 + 0xa0);
  fVar52 = -2.0 / (float)*(uint *)(lVar12 + 0x18);
  local_340 = *(float **)(param_1 + 0xa8);
  local_268 = *(float *)(param_1 + 0x23c);
  local_258 = *(float *)(param_1 + 0x240);
  pfVar19 = *(float **)(param_1 + 0x38);
  pfVar20 = *(float **)(param_1 + 0x158);
  pfVar21 = *(float **)(param_1 + 0x168);
  pfVar43 = *(float **)(param_1 + 0x90);
  fVar4 = *(float *)(lVar12 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar12 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar46 = *(float **)(param_1 + 0x30);
  pfVar22 = *(float **)(param_1 + 0x160);
  local_2e0 = *(float **)(param_1 + 0xb0);
  uVar31 = *(undefined8 *)(param_1 + 0x180);
  uVar32 = *(undefined8 *)(param_1 + 0x188);
  fVar23 = *(float *)(param_1 + 0x170);
  fVar24 = *(float *)(param_1 + 0x174);
  fVar25 = *(float *)(param_1 + 0x178);
  fVar26 = *(float *)(param_1 + 0x17c);
  fVar27 = *(float *)(param_1 + 0x1b0);
  fVar28 = *(float *)(param_1 + 0x1b4);
  fVar29 = *(float *)(param_1 + 0x1b8);
  fVar30 = *(float *)(param_1 + 0x1bc);
  local_298 = *(float *)(param_1 + 0x210);
  fStack_294 = *(float *)(param_1 + 0x214);
  fStack_290 = *(float *)(param_1 + 0x218);
  fStack_28c = *(float *)(param_1 + 0x21c);
  local_288 = *(float *)(param_1 + 0x220);
  fStack_284 = *(float *)(param_1 + 0x224);
  fStack_280 = *(float *)(param_1 + 0x228);
  fStack_27c = *(float *)(param_1 + 0x22c);
  fVar53 = *(float *)(param_1 + 0x1f0);
  fVar56 = *(float *)(param_1 + 500);
  fVar58 = *(float *)(param_1 + 0x1f8);
  fVar60 = *(float *)(param_1 + 0x1fc);
  local_338 = *(float **)(param_1 + 0xb8);
  local_330 = *(float **)(param_1 + 0xc0);
  local_328 = *(float **)(param_1 + 200);
  local_2f0 = *(float **)(param_1 + 0xd0);
  local_320 = *(float **)(param_1 + 0xd8);
  local_318 = *(float **)(param_1 + 0xe0);
  local_310 = *(float **)(param_1 + 0xe8);
  local_2e8 = *(float **)(param_1 + 0xf0);
  uVar33 = *(undefined8 *)(param_1 + 400);
  uVar34 = *(undefined8 *)(param_1 + 0x198);
  local_308 = *(float **)(param_1 + 0xf8);
  uVar35 = *(undefined8 *)(param_1 + 0x1a0);
  uVar36 = *(undefined8 *)(param_1 + 0x1a8);
  local_300 = *(float **)(param_1 + 0x100);
  uVar37 = *(undefined8 *)(param_1 + 0x1c0);
  uVar38 = *(undefined8 *)(param_1 + 0x1c8);
  local_2f8 = *(float **)(param_1 + 0x108);
  uVar39 = *(undefined8 *)(param_1 + 0x1d0);
  uVar40 = *(undefined8 *)(param_1 + 0x1d8);
  uVar41 = *(undefined8 *)(param_1 + 0x1e0);
  uVar42 = *(undefined8 *)(param_1 + 0x1e8);
  uVar48 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_2a8 = *(undefined8 *)(param_1 + 0x200);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x208);
  local_228 = fVar55;
  fVar62 = fVar67;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar55 = *pfVar43;
      pfVar44 = pfVar43 + 4;
      fVar67 = *local_res20;
      fVar59 = *local_348;
      fVar61 = *local_340;
      pfVar43 = pfVar14;
      if (pfVar44 < pfVar18) {
        pfVar43 = pfVar44;
      }
      pfVar44 = local_res20 + 4;
      local_res20 = pfVar14 + 1;
      if (pfVar44 < pfVar18) {
        local_res20 = pfVar44;
      }
      pfVar44 = local_348 + 4;
      local_348 = pfVar14 + 2;
      if (pfVar44 < pfVar18) {
        local_348 = pfVar44;
      }
      pfVar44 = local_340 + 4;
      local_340 = pfVar14 + 3;
      if (pfVar44 < pfVar18) {
        local_340 = pfVar44;
      }
      fVar53 = fVar55 * fVar23 + fVar27 * fVar53;
      fVar56 = fVar67 * fVar24 + fVar28 * fVar56;
      fVar58 = fVar59 * fVar25 + fVar29 * fVar58;
      fVar60 = fVar61 * fVar26 + fVar30 * fVar60;
      fVar55 = *local_338;
      fVar67 = *local_2e0;
      fVar59 = *local_330;
      fVar61 = *local_328;
      pfVar44 = local_2e0 + 4;
      local_2e0 = pfVar15;
      if (pfVar44 < pfVar20) {
        local_2e0 = pfVar44;
      }
      pfVar44 = local_338 + 4;
      local_338 = pfVar15 + 1;
      if (pfVar44 < pfVar20) {
        local_338 = pfVar44;
      }
      pfVar44 = local_330 + 4;
      local_330 = pfVar15 + 2;
      if (pfVar44 < pfVar20) {
        local_330 = pfVar44;
      }
      pfVar44 = local_328 + 4;
      local_328 = pfVar15 + 3;
      if (pfVar44 < pfVar20) {
        local_328 = pfVar44;
      }
      local_208 = (float)uVar37;
      fStack_204 = (float)((ulonglong)uVar37 >> 0x20);
      fStack_200 = (float)uVar38;
      fStack_1fc = (float)((ulonglong)uVar38 >> 0x20);
      fVar8 = *local_320;
      local_218 = (float)uVar31;
      fStack_214 = (float)((ulonglong)uVar31 >> 0x20);
      fStack_210 = (float)uVar32;
      fStack_20c = (float)((ulonglong)uVar32 >> 0x20);
      fVar9 = *local_2f0;
      fVar54 = fVar67 * local_218 + local_208 * (float)local_2a8;
      fVar57 = fVar55 * fStack_214 + fStack_204 * local_2a8._4_4_;
      fVar59 = fVar59 * fStack_210 + fStack_200 * (float)uStack_2a0;
      fVar61 = fVar61 * fStack_20c + fStack_1fc * uStack_2a0._4_4_;
      local_2a8 = CONCAT44(fVar57,fVar54);
      uStack_2a0 = CONCAT44(fVar61,fVar59);
      pfVar44 = local_2f0 + 4;
      local_1e8 = (float)uVar39;
      fStack_1e4 = (float)((ulonglong)uVar39 >> 0x20);
      fStack_1e0 = (float)uVar40;
      fStack_1dc = (float)((ulonglong)uVar40 >> 0x20);
      local_2f0 = pfVar16;
      if (pfVar44 < pfVar22) {
        local_2f0 = pfVar44;
      }
      pfVar44 = local_320 + 4;
      local_1f8 = (float)uVar33;
      fStack_1f4 = (float)((ulonglong)uVar33 >> 0x20);
      fStack_1f0 = (float)uVar34;
      fStack_1ec = (float)((ulonglong)uVar34 >> 0x20);
      local_320 = pfVar16 + 1;
      if (pfVar44 < pfVar22) {
        local_320 = pfVar44;
      }
      pfVar44 = local_318 + 4;
      local_298 = fVar9 * local_1f8 + local_1e8 * local_298;
      fStack_294 = fVar8 * fStack_1f4 + fStack_1e4 * fStack_294;
      fStack_290 = *local_318 * fStack_1f0 + fStack_1e0 * fStack_290;
      fStack_28c = *local_310 * fStack_1ec + fStack_1dc * fStack_28c;
      local_318 = pfVar16 + 2;
      if (pfVar44 < pfVar22) {
        local_318 = pfVar44;
      }
      pfVar44 = local_310 + 4;
      local_310 = pfVar16 + 3;
      if (pfVar44 < pfVar22) {
        local_310 = pfVar44;
      }
      fVar55 = *local_2e8;
      fVar67 = *local_308;
      fVar8 = *local_300;
      pfVar44 = local_2e8 + 4;
      local_1c8 = (float)uVar41;
      fStack_1c4 = (float)((ulonglong)uVar41 >> 0x20);
      fStack_1c0 = (float)uVar42;
      fStack_1bc = (float)((ulonglong)uVar42 >> 0x20);
      local_2e8 = pfVar17;
      if (pfVar44 < pfVar21) {
        local_2e8 = pfVar44;
      }
      pfVar44 = local_308 + 4;
      local_1d8 = (float)uVar35;
      fStack_1d4 = (float)((ulonglong)uVar35 >> 0x20);
      fStack_1d0 = (float)uVar36;
      fStack_1cc = (float)((ulonglong)uVar36 >> 0x20);
      local_308 = pfVar17 + 1;
      if (pfVar44 < pfVar21) {
        local_308 = pfVar44;
      }
      pfVar44 = local_300 + 4;
      local_300 = pfVar17 + 2;
      if (pfVar44 < pfVar21) {
        local_300 = pfVar44;
      }
      local_288 = fVar55 * local_1d8 + local_1c8 * local_288;
      fStack_284 = fVar67 * fStack_1d4 + fStack_1c4 * fStack_284;
      fStack_280 = fVar8 * fStack_1d0 + fStack_1c0 * fStack_280;
      fStack_27c = *local_2f8 * fStack_1cc + fStack_1bc * fStack_27c;
      pfVar44 = local_2f8 + 4;
      local_2f8 = pfVar17 + 3;
      if (pfVar44 < pfVar21) {
        local_2f8 = pfVar44;
      }
      uVar45 = (ulonglong)*(ushort *)(param_2 + 2);
      fVar55 = *local_res18;
      fVar67 = local_res18[uVar45];
      fVar8 = local_res18[uVar45 * 2];
      fVar9 = local_res18[uVar45 * 3];
      fVar10 = local_res18[uVar45 * 4];
      local_268 = local_268 + (fVar4 - fVar5) * (1.0 / (float)uVar11);
      local_258 = local_258 + (fVar6 - fVar7) * (1.0 / (float)uVar11);
      fVar63 = fStack_27c + fVar61 + fVar60 + fStack_28c + fStack_284 + fVar57 + fVar56 + fStack_294
               + fStack_280 + fVar59 + fVar58 + fStack_290 + local_288 + fVar54 + fVar53 + local_298
      ;
      fVar64 = fVar63 * fVar52;
      fVar65 = fVar63 * fVar52;
      fVar66 = fVar63 * fVar52;
      fVar63 = fVar63 * fVar52;
      *local_res18 = fVar55 * local_268 +
                     (fStack_284 * -1.0 + fVar56 * -1.0 + fVar57 * -1.0 + fStack_294 * -1.0 +
                      fStack_27c * -1.0 + fVar60 * -1.0 + fVar61 * -1.0 + fStack_28c * -1.0 +
                     local_288 * 1.0 + fVar53 * 1.0 + fVar54 * 1.0 + local_298 * 1.0 +
                     fStack_280 * 1.0 + fVar58 * 1.0 + fVar59 * 1.0 + fStack_290 * 1.0) * local_258;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar67 * local_268 +
           (fStack_284 * 1.0 + fVar56 * 1.0 + fVar57 * 1.0 + fStack_294 * 1.0 +
            fStack_27c * -1.0 + fVar60 * -1.0 + fVar61 * -1.0 + fStack_28c * -1.0 +
           local_288 * 1.0 + fVar53 * 1.0 + fVar54 * 1.0 + local_298 * 1.0 +
           fStack_280 * -1.0 + fVar58 * -1.0 + fVar59 * -1.0 + fStack_290 * -1.0) * local_258;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar8 * local_268 +
           (fStack_284 * 1.0 + fVar56 * 1.0 + fVar57 * 1.0 + fStack_294 * 1.0 +
            fStack_27c * -1.0 + fVar60 * -1.0 + fVar61 * -1.0 + fStack_28c * -1.0 +
           local_288 * -1.0 + fVar53 * -1.0 + fVar54 * -1.0 + local_298 * -1.0 +
           fStack_280 * 1.0 + fVar58 * 1.0 + fVar59 * 1.0 + fStack_290 * 1.0) * local_258;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar9 * local_268 +
           (fStack_284 * 1.0 + fVar56 * -1.0 + fVar57 * 1.0 + fStack_294 * -1.0 +
            fStack_27c * -1.0 + fVar60 * 1.0 + fVar61 * 1.0 + fStack_28c * 1.0 +
           local_288 * 1.0 + fVar53 * -1.0 + fVar54 * 1.0 + local_298 * -1.0 +
           fStack_280 * -1.0 + fVar58 * -1.0 + fVar59 * -1.0 + fStack_290 * 1.0) * local_258;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar10 * local_268 +
           (fStack_284 * 1.0 + fVar56 * -1.0 + fVar57 * 1.0 + fStack_294 * -1.0 +
            fStack_27c * 1.0 + fVar60 * -1.0 + fVar61 * -1.0 + fStack_28c * 1.0 +
           local_288 * -1.0 + fVar53 * 1.0 + fVar54 * 1.0 + local_298 * 1.0 +
           fStack_280 * -1.0 + fVar58 * -1.0 + fVar59 * 1.0 + fStack_290 * -1.0) * local_258;
      local_res18 = local_res18 + 1;
      fVar67 = fVar8 + fVar9 + fVar55 + fVar67 + fVar10;
      local_248 = (fVar3 * local_248 + fVar67) - fVar62;
      fVar55 = local_248;
      if (pfVar13 != (float *)0x0) {
        fVar55 = *pfVar46;
        pfVar44 = pfVar46 + 1;
        *pfVar46 = local_248;
        pfVar46 = pfVar13;
        if (pfVar44 != pfVar19) {
          pfVar46 = pfVar44;
        }
      }
      pfVar44 = pfVar49 + 4;
      fVar62 = fVar1 * fVar55 + fVar2 * local_228;
      *pfVar49 = fVar62 + fVar65 + fVar56;
      pfVar49[1] = fVar62 + fVar66 + fVar58;
      pfVar49[2] = fVar62 + fVar63 + fVar60;
      pfVar49[3] = fVar62 + fVar54 + fVar64;
      *pfVar50 = fVar62 + fVar57 + fVar65;
      pfVar50[1] = fVar62 + fVar59 + fVar66;
      pfVar50[2] = fVar62 + fVar61 + fVar63;
      pfVar50[3] = fVar62 + local_298 + fVar64;
      pfVar49 = pfVar14;
      if (pfVar44 < pfVar18) {
        pfVar49 = pfVar44;
      }
      pfVar44 = pfVar50 + 4;
      *pfVar51 = fVar62 + fStack_294 + fVar65;
      pfVar51[1] = fVar62 + fStack_290 + fVar66;
      pfVar51[2] = fVar62 + fStack_28c + fVar63;
      pfVar51[3] = fVar62 + local_288 + fVar64;
      pfVar50 = pfVar15;
      if (pfVar44 < pfVar20) {
        pfVar50 = pfVar44;
      }
      *pfVar47 = fVar62 + fStack_284 + fVar65;
      pfVar47[1] = fVar62 + fStack_280 + fVar66;
      pfVar47[2] = fVar62 + fStack_27c + fVar63;
      pfVar47[3] = fVar62 + fVar64 + fVar53;
      pfVar44 = pfVar51 + 4;
      pfVar51 = pfVar16;
      if (pfVar44 < pfVar22) {
        pfVar51 = pfVar44;
      }
      pfVar44 = pfVar47 + 4;
      pfVar47 = pfVar17;
      if (pfVar44 < pfVar21) {
        pfVar47 = pfVar44;
      }
      uVar48 = uVar48 - 1;
      local_228 = fVar55;
      fVar62 = fVar67;
    } while (uVar48 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar55;
  *(float *)(param_1 + 0x230) = fVar67;
  *(float *)(param_1 + 0x234) = local_248;
  *(float **)(param_1 + 0x30) = pfVar46;
  *(float **)(param_1 + 0x90) = pfVar43;
  *(float **)(param_1 + 0x98) = local_res20;
  *(float **)(param_1 + 0xa0) = local_348;
  *(float **)(param_1 + 0xa8) = local_340;
  *(float **)(param_1 + 0xb8) = local_338;
  *(float **)(param_1 + 0xc0) = local_330;
  *(float **)(param_1 + 200) = local_328;
  *(float **)(param_1 + 0xd0) = local_2f0;
  *(float **)(param_1 + 0xd8) = local_320;
  *(float **)(param_1 + 0xe0) = local_318;
  *(float **)(param_1 + 0xe8) = local_310;
  *(float **)(param_1 + 0xf0) = local_2e8;
  *(float **)(param_1 + 0xf8) = local_308;
  *(float **)(param_1 + 0x100) = local_300;
  *(float *)(param_1 + 0x1f0) = fVar53;
  *(float *)(param_1 + 500) = fVar56;
  *(float *)(param_1 + 0x1f8) = fVar58;
  *(float *)(param_1 + 0x1fc) = fVar60;
  *(float **)(param_1 + 0x108) = local_2f8;
  *(undefined8 *)(param_1 + 0x200) = local_2a8;
  *(undefined8 *)(param_1 + 0x208) = uStack_2a0;
  *(float *)(param_1 + 0x210) = local_298;
  *(float *)(param_1 + 0x214) = fStack_294;
  *(float *)(param_1 + 0x218) = fStack_290;
  *(float *)(param_1 + 0x21c) = fStack_28c;
  *(float *)(param_1 + 0x220) = local_288;
  *(float *)(param_1 + 0x224) = fStack_284;
  *(float *)(param_1 + 0x228) = fStack_280;
  *(float *)(param_1 + 0x22c) = fStack_27c;
  *(float **)(param_1 + 0x130) = pfVar49;
  *(float **)(param_1 + 0x138) = pfVar50;
  *(float **)(param_1 + 0x140) = pfVar51;
  *(float **)(param_1 + 0x148) = pfVar47;
  *(float **)(param_1 + 0xb0) = local_2e0;
  return;
}



// FUNCTION 1431ff7e0 ProcessFivePointZero4 body=1461 status=ok
// SIG undefined ProcessFivePointZero4(void)

void CAkFDNReverbFX::ProcessFivePointZero4(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float *local_res18;
  float local_198;
  float local_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  
  fVar2 = *(float *)(param_1 + 0x238);
  lVar14 = *(longlong *)(param_1 + 0x10);
  local_188 = *(float *)(param_1 + 0x240);
  fVar39 = *(float *)(param_1 + 0x230);
  local_178 = *(float *)(param_1 + 0x1f0);
  fStack_174 = *(float *)(param_1 + 500);
  fStack_170 = *(float *)(param_1 + 0x1f8);
  fStack_16c = *(float *)(param_1 + 0x1fc);
  pfVar15 = *(float **)(param_1 + 0x110);
  pfVar16 = *(float **)(param_1 + 0x150);
  pfVar33 = *(float **)(param_1 + 0x130);
  pfVar30 = *(float **)(param_1 + 0x98);
  pfVar32 = *(float **)(param_1 + 0xa0);
  pfVar31 = *(float **)(param_1 + 0xa8);
  fVar19 = *(float *)(param_1 + 0x170);
  fVar20 = *(float *)(param_1 + 0x174);
  fVar21 = *(float *)(param_1 + 0x178);
  fVar22 = *(float *)(param_1 + 0x17c);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x48);
  fVar38 = *(float *)(param_1 + 0x4c);
  fVar40 = *(float *)(param_1 + 0x234);
  fVar23 = *(float *)(param_1 + 0x1b0);
  fVar24 = *(float *)(param_1 + 0x1b4);
  fVar25 = *(float *)(param_1 + 0x1b8);
  fVar26 = *(float *)(param_1 + 0x1bc);
  local_res18 = (float *)*param_2;
  uVar13 = *(ushort *)(param_2 + 2);
  uVar34 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar35 = -2.0 / (float)*(uint *)(lVar14 + 0x18);
  local_198 = *(float *)(param_1 + 0x23c);
  pfVar17 = *(float **)(param_1 + 0x28);
  pfVar18 = *(float **)(param_1 + 0x38);
  fVar5 = *(float *)(lVar14 + 0x10);
  fVar6 = *(float *)(param_1 + 0x23c);
  fVar7 = *(float *)(lVar14 + 0x14);
  pfVar29 = *(float **)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x240);
  pfVar28 = *(float **)(param_1 + 0x90);
  fVar41 = fVar38;
  fVar37 = fVar39;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar39 = *pfVar28;
      pfVar1 = pfVar28 + 4;
      fVar38 = *pfVar30;
      fVar9 = *pfVar32;
      pfVar28 = pfVar15;
      if (pfVar1 < pfVar16) {
        pfVar28 = pfVar1;
      }
      pfVar1 = pfVar30 + 4;
      pfVar30 = pfVar15 + 1;
      if (pfVar1 < pfVar16) {
        pfVar30 = pfVar1;
      }
      pfVar1 = pfVar32 + 4;
      uVar27 = (ulonglong)*(ushort *)(param_2 + 2);
      pfVar32 = pfVar15 + 2;
      if (pfVar1 < pfVar16) {
        pfVar32 = pfVar1;
      }
      pfVar1 = pfVar31 + 4;
      fVar10 = *local_res18;
      fVar11 = local_res18[uVar27];
      local_178 = fVar39 * fVar19 + local_178 * fVar23;
      fStack_174 = fVar38 * fVar20 + fStack_174 * fVar24;
      fStack_170 = fVar9 * fVar21 + fStack_170 * fVar25;
      fStack_16c = *pfVar31 * fVar22 + fStack_16c * fVar26;
      fVar38 = local_res18[uVar27 * 2];
      pfVar31 = pfVar15 + 3;
      if (pfVar1 < pfVar16) {
        pfVar31 = pfVar1;
      }
      fVar9 = local_res18[uVar27 * 3];
      fVar12 = local_res18[uVar27 * 4];
      fVar36 = fStack_16c + fStack_174 + fStack_170 + local_178;
      local_198 = local_198 + (fVar5 - fVar6) * (1.0 / (float)uVar13);
      local_188 = local_188 + (fVar7 - fVar8) * (1.0 / (float)uVar13);
      *local_res18 = fVar10 * local_198 +
                     (fStack_174 * -1.0 + fStack_16c * -1.0 + local_178 * 1.0 + fStack_170 * 1.0) *
                     local_188;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar11 * local_198 +
           (fStack_174 * 1.0 + fStack_16c * -1.0 + local_178 * 1.0 + fStack_170 * -1.0) * local_188;
      fVar39 = fVar38 + fVar9 + fVar10 + fVar11 + fVar12;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar38 * local_198 +
           (fStack_174 * 1.0 + fStack_16c * -1.0 + local_178 * -1.0 + fStack_170 * 1.0) * local_188;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar9 * local_198 +
           (fStack_174 * -1.0 + fStack_16c * 1.0 + local_178 * -1.0 + fStack_170 * -1.0) * local_188
      ;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar12 * local_198 +
           (fStack_174 * -1.0 + fStack_16c * -1.0 + local_178 * 1.0 + fStack_170 * -1.0) * local_188
      ;
      local_res18 = local_res18 + 1;
      fVar40 = (fVar2 * fVar40 + fVar39) - fVar37;
      fVar38 = fVar40;
      if (pfVar17 != (float *)0x0) {
        fVar38 = *pfVar29;
        pfVar1 = pfVar29 + 1;
        *pfVar29 = fVar40;
        pfVar29 = pfVar17;
        if (pfVar1 != pfVar18) {
          pfVar29 = pfVar1;
        }
      }
      pfVar1 = pfVar33 + 4;
      fVar37 = fVar3 * fVar38 + fVar4 * fVar41;
      *pfVar33 = fVar37 + fVar36 * fVar35 + fStack_174;
      pfVar33[1] = fVar37 + fVar36 * fVar35 + fStack_170;
      pfVar33[2] = fVar37 + fVar36 * fVar35 + fStack_16c;
      pfVar33[3] = fVar37 + fVar36 * fVar35 + local_178;
      pfVar33 = pfVar15;
      if (pfVar1 < pfVar16) {
        pfVar33 = pfVar1;
      }
      uVar34 = uVar34 - 1;
      fVar41 = fVar38;
      fVar37 = fVar39;
    } while (uVar34 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar38;
  *(float *)(param_1 + 0x230) = fVar39;
  *(float *)(param_1 + 0x234) = fVar40;
  *(float **)(param_1 + 0x30) = pfVar29;
  *(float *)(param_1 + 0x1f0) = local_178;
  *(float *)(param_1 + 500) = fStack_174;
  *(float *)(param_1 + 0x1f8) = fStack_170;
  *(float *)(param_1 + 0x1fc) = fStack_16c;
  *(float **)(param_1 + 0x130) = pfVar33;
  *(float **)(param_1 + 0x90) = pfVar28;
  *(float **)(param_1 + 0x98) = pfVar30;
  *(float **)(param_1 + 0xa0) = pfVar32;
  *(float **)(param_1 + 0xa8) = pfVar31;
  return;
}



// FUNCTION 1431ffda0 ProcessFivePointZero8 body=2075 status=ok
// SIG undefined ProcessFivePointZero8(void)

void CAkFDNReverbFX::ProcessFivePointZero8(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float *pfVar35;
  ulonglong uVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  uint uVar41;
  float *pfVar42;
  float *pfVar43;
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
  float *local_res18;
  float *local_res20;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1c8;
  float local_1a8;
  
  fVar1 = *(float *)(param_1 + 0x44);
  lVar12 = *(longlong *)(param_1 + 0x10);
  fVar52 = *(float *)(param_1 + 0x230);
  local_res20 = *(float **)(param_1 + 0xa8);
  pfVar13 = *(float **)(param_1 + 0x28);
  pfVar14 = *(float **)(param_1 + 0x38);
  pfVar15 = *(float **)(param_1 + 0x110);
  pfVar16 = *(float **)(param_1 + 0x118);
  pfVar17 = *(float **)(param_1 + 0x150);
  pfVar18 = *(float **)(param_1 + 0x158);
  pfVar39 = *(float **)(param_1 + 0x130);
  pfVar40 = *(float **)(param_1 + 0x138);
  pfVar43 = *(float **)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar53 = *(float *)(param_1 + 0x234);
  fVar19 = *(float *)(param_1 + 0x170);
  fVar20 = *(float *)(param_1 + 0x174);
  fVar21 = *(float *)(param_1 + 0x178);
  fVar22 = *(float *)(param_1 + 0x17c);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar11 = *(ushort *)(param_2 + 2);
  local_218 = *(float **)(param_1 + 0xb8);
  local_228 = *(float **)(param_1 + 0xc0);
  fVar44 = -2.0 / (float)*(uint *)(lVar12 + 0x18);
  local_220 = *(float **)(param_1 + 200);
  pfVar42 = *(float **)(param_1 + 0xb0);
  local_1d8 = *(float *)(param_1 + 0x23c);
  local_1c8 = *(float *)(param_1 + 0x240);
  local_210 = *(float **)(param_1 + 0xa0);
  fVar4 = *(float *)(lVar12 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar12 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar38 = *(float **)(param_1 + 0x30);
  fVar50 = *(float *)(param_1 + 0x4c);
  pfVar37 = *(float **)(param_1 + 0x98);
  fVar23 = *(float *)(param_1 + 0x180);
  fVar24 = *(float *)(param_1 + 0x184);
  fVar25 = *(float *)(param_1 + 0x188);
  fVar26 = *(float *)(param_1 + 0x18c);
  fVar27 = *(float *)(param_1 + 0x1b0);
  fVar28 = *(float *)(param_1 + 0x1b4);
  fVar29 = *(float *)(param_1 + 0x1b8);
  fVar30 = *(float *)(param_1 + 0x1bc);
  fVar31 = *(float *)(param_1 + 0x1c0);
  fVar32 = *(float *)(param_1 + 0x1c4);
  fVar33 = *(float *)(param_1 + 0x1c8);
  fVar34 = *(float *)(param_1 + 0x1cc);
  uVar41 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_1e8 = *(float *)(param_1 + 0x200);
  fStack_1e4 = *(float *)(param_1 + 0x204);
  fStack_1e0 = *(float *)(param_1 + 0x208);
  fStack_1dc = *(float *)(param_1 + 0x20c);
  fVar45 = *(float *)(param_1 + 0x1f0);
  fVar47 = *(float *)(param_1 + 500);
  fVar48 = *(float *)(param_1 + 0x1f8);
  fVar49 = *(float *)(param_1 + 0x1fc);
  local_1a8 = fVar50;
  fVar46 = fVar52;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar52 = *pfVar37;
      fVar50 = *pfVar43;
      pfVar35 = pfVar43 + 4;
      pfVar43 = pfVar15;
      if (pfVar35 < pfVar17) {
        pfVar43 = pfVar35;
      }
      pfVar35 = pfVar37 + 4;
      pfVar37 = pfVar15 + 1;
      if (pfVar35 < pfVar17) {
        pfVar37 = pfVar35;
      }
      fVar8 = *pfVar42;
      fVar45 = fVar50 * fVar19 + fVar27 * fVar45;
      fVar47 = fVar52 * fVar20 + fVar28 * fVar47;
      fVar48 = *local_210 * fVar21 + fVar29 * fVar48;
      fVar49 = *local_res20 * fVar22 + fVar30 * fVar49;
      pfVar35 = local_210 + 4;
      local_210 = pfVar15 + 2;
      if (pfVar35 < pfVar17) {
        local_210 = pfVar35;
      }
      pfVar35 = local_res20 + 4;
      local_res20 = pfVar15 + 3;
      if (pfVar35 < pfVar17) {
        local_res20 = pfVar35;
      }
      fVar52 = *local_228;
      fVar50 = *local_218;
      pfVar35 = pfVar42 + 4;
      pfVar42 = pfVar16;
      if (pfVar35 < pfVar18) {
        pfVar42 = pfVar35;
      }
      pfVar35 = local_218 + 4;
      local_218 = pfVar16 + 1;
      if (pfVar35 < pfVar18) {
        local_218 = pfVar35;
      }
      pfVar35 = local_228 + 4;
      local_228 = pfVar16 + 2;
      if (pfVar35 < pfVar18) {
        local_228 = pfVar35;
      }
      pfVar35 = local_220 + 4;
      local_1e8 = fVar8 * fVar23 + local_1e8 * fVar31;
      fStack_1e4 = fVar50 * fVar24 + fStack_1e4 * fVar32;
      fStack_1e0 = fVar52 * fVar25 + fStack_1e0 * fVar33;
      fStack_1dc = *local_220 * fVar26 + fStack_1dc * fVar34;
      local_220 = pfVar16 + 3;
      if (pfVar35 < pfVar18) {
        local_220 = pfVar35;
      }
      uVar36 = (ulonglong)*(ushort *)(param_2 + 2);
      fVar52 = local_res18[uVar36];
      fVar50 = local_res18[uVar36 * 2];
      fVar8 = *local_res18;
      fVar9 = local_res18[uVar36 * 3];
      fVar10 = local_res18[uVar36 * 4];
      local_1d8 = local_1d8 + (fVar4 - fVar5) * (1.0 / (float)uVar11);
      local_1c8 = local_1c8 + (fVar6 - fVar7) * (1.0 / (float)uVar11);
      fVar51 = fStack_1dc + fVar49 + fStack_1e4 + fVar47 + fStack_1e0 + fVar48 + local_1e8 + fVar45;
      *local_res18 = fVar8 * local_1d8 +
                     (fStack_1e4 * -1.0 + fVar47 * -1.0 + fStack_1dc * -1.0 + fVar49 * -1.0 +
                     local_1e8 * 1.0 + fVar45 * 1.0 + fStack_1e0 * 1.0 + fVar48 * 1.0) * local_1c8;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar52 * local_1d8 +
           (fStack_1e4 * 1.0 + fVar47 * 1.0 + fStack_1dc * -1.0 + fVar49 * -1.0 +
           local_1e8 * 1.0 + fVar45 * 1.0 + fStack_1e0 * -1.0 + fVar48 * -1.0) * local_1c8;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar50 * local_1d8 +
           (fStack_1e4 * 1.0 + fVar47 * 1.0 + fStack_1dc * -1.0 + fVar49 * -1.0 +
           local_1e8 * -1.0 + fVar45 * -1.0 + fStack_1e0 * 1.0 + fVar48 * 1.0) * local_1c8;
      fVar52 = fVar50 + fVar9 + fVar8 + fVar52 + fVar10;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar9 * local_1d8 +
           (fStack_1e4 * 1.0 + fVar47 * -1.0 + fStack_1dc * 1.0 + fVar49 * 1.0 +
           local_1e8 * 1.0 + fVar45 * -1.0 + fStack_1e0 * -1.0 + fVar48 * -1.0) * local_1c8;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar10 * local_1d8 +
           (fStack_1e4 * 1.0 + fVar47 * -1.0 + fStack_1dc * -1.0 + fVar49 * -1.0 +
           local_1e8 * 1.0 + fVar45 * 1.0 + fStack_1e0 * 1.0 + fVar48 * -1.0) * local_1c8;
      local_res18 = local_res18 + 1;
      fVar53 = (fVar3 * fVar53 + fVar52) - fVar46;
      fVar50 = fVar53;
      if (pfVar13 != (float *)0x0) {
        fVar50 = *pfVar38;
        pfVar35 = pfVar38 + 1;
        *pfVar38 = fVar53;
        pfVar38 = pfVar13;
        if (pfVar35 != pfVar14) {
          pfVar38 = pfVar35;
        }
      }
      pfVar35 = pfVar39 + 4;
      fVar46 = fVar1 * fVar50 + fVar2 * local_1a8;
      *pfVar39 = fVar46 + fVar51 * fVar44 + fVar47;
      pfVar39[1] = fVar46 + fVar51 * fVar44 + fVar48;
      pfVar39[2] = fVar46 + fVar51 * fVar44 + fVar49;
      pfVar39[3] = fVar46 + local_1e8 + fVar51 * fVar44;
      pfVar39 = pfVar15;
      if (pfVar35 < pfVar17) {
        pfVar39 = pfVar35;
      }
      *pfVar40 = fVar46 + fStack_1e4 + fVar51 * fVar44;
      pfVar40[1] = fVar46 + fStack_1e0 + fVar51 * fVar44;
      pfVar40[2] = fVar46 + fStack_1dc + fVar51 * fVar44;
      pfVar40[3] = fVar46 + fVar51 * fVar44 + fVar45;
      pfVar35 = pfVar40 + 4;
      pfVar40 = pfVar16;
      if (pfVar35 < pfVar18) {
        pfVar40 = pfVar35;
      }
      uVar41 = uVar41 - 1;
      local_1a8 = fVar50;
      fVar46 = fVar52;
    } while (uVar41 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar50;
  *(float *)(param_1 + 0x230) = fVar52;
  *(float *)(param_1 + 0x234) = fVar53;
  *(float **)(param_1 + 0x30) = pfVar38;
  *(float **)(param_1 + 0xa0) = local_210;
  *(float **)(param_1 + 0xa8) = local_res20;
  *(float **)(param_1 + 0xb8) = local_218;
  *(float **)(param_1 + 0xc0) = local_228;
  *(float *)(param_1 + 0x200) = local_1e8;
  *(float *)(param_1 + 0x204) = fStack_1e4;
  *(float *)(param_1 + 0x208) = fStack_1e0;
  *(float *)(param_1 + 0x20c) = fStack_1dc;
  *(float **)(param_1 + 200) = local_220;
  *(float *)(param_1 + 0x1f0) = fVar45;
  *(float *)(param_1 + 500) = fVar47;
  *(float *)(param_1 + 0x1f8) = fVar48;
  *(float *)(param_1 + 0x1fc) = fVar49;
  *(float **)(param_1 + 0x130) = pfVar39;
  *(float **)(param_1 + 0x138) = pfVar40;
  *(float **)(param_1 + 0x90) = pfVar43;
  *(float **)(param_1 + 0x98) = pfVar37;
  *(float **)(param_1 + 0xb0) = pfVar42;
  return;
}



// FUNCTION 1432005c0 ProcessMono12 body=2052 status=ok
// SIG undefined ProcessMono12(void)

void CAkFDNReverbFX::ProcessMono12(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  uint uVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
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
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1b8;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  
  pfVar9 = *(float **)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_1 + 0x10);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x118);
  pfVar13 = *(float **)(param_1 + 0x120);
  pfVar14 = *(float **)(param_1 + 0x150);
  pfVar15 = *(float **)(param_1 + 0x158);
  pfVar16 = *(float **)(param_1 + 0x160);
  pfVar36 = *(float **)(param_1 + 0x130);
  pfVar37 = *(float **)(param_1 + 0x138);
  pfVar38 = *(float **)(param_1 + 0x140);
  pfVar39 = *(float **)(param_1 + 0x90);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  fVar57 = *(float *)(param_1 + 0x23c);
  fVar58 = *(float *)(param_1 + 0x240);
  fVar42 = *(float *)(param_1 + 0x4c);
  fVar56 = *(float *)(param_1 + 0x230);
  fVar54 = *(float *)(param_1 + 0x234);
  local_1b8 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  fVar59 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  pfVar17 = *(float **)(param_1 + 0x38);
  local_1d8 = *(float **)(param_1 + 0x98);
  local_res10 = *(float **)(param_1 + 0xa0);
  local_res18 = *(float **)(param_1 + 0xa8);
  pfVar33 = *(float **)(param_1 + 0xb0);
  local_1d0 = *(float **)(param_1 + 0xb8);
  local_res20 = *(float **)(param_1 + 0xc0);
  local_1f8 = *(float **)(param_1 + 200);
  local_1c8 = *(float **)(param_1 + 0xd0);
  fVar4 = *(float *)(lVar10 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar10 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar34 = *(float **)(param_1 + 0x30);
  uVar22 = *(undefined8 *)(param_1 + 0x180);
  uVar23 = *(undefined8 *)(param_1 + 0x188);
  uVar35 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar18 = *(float *)(param_1 + 0x170);
  fVar19 = *(float *)(param_1 + 0x174);
  fVar20 = *(float *)(param_1 + 0x178);
  fVar21 = *(float *)(param_1 + 0x17c);
  local_188 = *(float *)(param_1 + 0x210);
  fStack_184 = *(float *)(param_1 + 0x214);
  fStack_180 = *(float *)(param_1 + 0x218);
  fStack_17c = *(float *)(param_1 + 0x21c);
  fVar40 = *(float *)(param_1 + 0x1f0);
  fVar43 = *(float *)(param_1 + 500);
  fVar45 = *(float *)(param_1 + 0x1f8);
  fVar47 = *(float *)(param_1 + 0x1fc);
  uVar24 = *(undefined8 *)(param_1 + 400);
  uVar25 = *(undefined8 *)(param_1 + 0x198);
  uVar26 = *(undefined8 *)(param_1 + 0x1b0);
  uVar27 = *(undefined8 *)(param_1 + 0x1b8);
  local_1f0 = *(float **)(param_1 + 0xd8);
  uVar28 = *(undefined8 *)(param_1 + 0x1c0);
  uVar29 = *(undefined8 *)(param_1 + 0x1c8);
  local_1e8 = *(float **)(param_1 + 0xe0);
  uVar30 = *(undefined8 *)(param_1 + 0x1d0);
  uVar31 = *(undefined8 *)(param_1 + 0x1d8);
  local_1e0 = *(float **)(param_1 + 0xe8);
  local_198 = *(undefined8 *)(param_1 + 0x200);
  uStack_190 = *(undefined8 *)(param_1 + 0x208);
  fVar49 = fVar42;
  fVar55 = fVar56;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar42 = *pfVar39;
      fVar56 = *local_1d8;
      fVar41 = *local_res10;
      pfVar32 = pfVar39 + 4;
      local_168 = (float)uVar26;
      fStack_164 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_160 = (float)uVar27;
      fStack_15c = (float)((ulonglong)uVar27 >> 0x20);
      pfVar39 = pfVar11;
      if (pfVar32 < pfVar14) {
        pfVar39 = pfVar32;
      }
      pfVar32 = local_1d8 + 4;
      local_1d8 = pfVar11 + 1;
      if (pfVar32 < pfVar14) {
        local_1d8 = pfVar32;
      }
      pfVar32 = local_res10 + 4;
      fVar44 = *pfVar33;
      local_res10 = pfVar11 + 2;
      if (pfVar32 < pfVar14) {
        local_res10 = pfVar32;
      }
      fVar40 = fVar42 * fVar18 + local_168 * fVar40;
      fVar43 = fVar56 * fVar19 + fStack_164 * fVar43;
      fVar45 = fVar41 * fVar20 + fStack_160 * fVar45;
      fVar47 = *local_res18 * fVar21 + fStack_15c * fVar47;
      pfVar32 = local_res18 + 4;
      local_res18 = pfVar11 + 3;
      if (pfVar32 < pfVar14) {
        local_res18 = pfVar32;
      }
      fVar42 = *local_res20;
      fVar56 = *local_1d0;
      pfVar32 = pfVar33 + 4;
      local_148 = (float)uVar28;
      fStack_144 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_140 = (float)uVar29;
      fStack_13c = (float)((ulonglong)uVar29 >> 0x20);
      pfVar33 = pfVar12;
      if (pfVar32 < pfVar15) {
        pfVar33 = pfVar32;
      }
      pfVar32 = local_1d0 + 4;
      local_158 = (float)uVar22;
      fStack_154 = (float)((ulonglong)uVar22 >> 0x20);
      fStack_150 = (float)uVar23;
      fStack_14c = (float)((ulonglong)uVar23 >> 0x20);
      local_1d0 = pfVar12 + 1;
      if (pfVar32 < pfVar15) {
        local_1d0 = pfVar32;
      }
      pfVar32 = local_res20 + 4;
      local_res20 = pfVar12 + 2;
      if (pfVar32 < pfVar15) {
        local_res20 = pfVar32;
      }
      fVar41 = fVar44 * local_158 + local_148 * (float)local_198;
      fVar44 = fVar56 * fStack_154 + fStack_144 * local_198._4_4_;
      fVar46 = fVar42 * fStack_150 + fStack_140 * (float)uStack_190;
      fVar48 = *local_1f8 * fStack_14c + fStack_13c * uStack_190._4_4_;
      pfVar32 = local_1f8 + 4;
      local_198 = CONCAT44(fVar44,fVar41);
      uStack_190 = CONCAT44(fVar48,fVar46);
      local_1f8 = pfVar12 + 3;
      if (pfVar32 < pfVar15) {
        local_1f8 = pfVar32;
      }
      fVar57 = fVar57 + (fVar4 - fVar5) * (1.0 / (float)uVar8);
      fVar58 = fVar58 + (fVar6 - fVar7) * (1.0 / (float)uVar8);
      fVar42 = *local_1f0;
      fVar56 = *local_1c8;
      pfVar32 = local_1c8 + 4;
      local_1c8 = pfVar13;
      if (pfVar32 < pfVar16) {
        local_1c8 = pfVar32;
      }
      local_128 = (float)uVar30;
      fStack_124 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_120 = (float)uVar31;
      fStack_11c = (float)((ulonglong)uVar31 >> 0x20);
      pfVar32 = local_1f0 + 4;
      local_138 = (float)uVar24;
      fStack_134 = (float)((ulonglong)uVar24 >> 0x20);
      fStack_130 = (float)uVar25;
      fStack_12c = (float)((ulonglong)uVar25 >> 0x20);
      local_1f0 = pfVar13 + 1;
      if (pfVar32 < pfVar16) {
        local_1f0 = pfVar32;
      }
      pfVar32 = local_1e8 + 4;
      local_188 = fVar56 * local_138 + local_128 * local_188;
      fStack_184 = fVar42 * fStack_134 + fStack_124 * fStack_184;
      fStack_180 = *local_1e8 * fStack_130 + fStack_120 * fStack_180;
      fStack_17c = *local_1e0 * fStack_12c + fStack_11c * fStack_17c;
      local_1e8 = pfVar13 + 2;
      if (pfVar32 < pfVar16) {
        local_1e8 = pfVar32;
      }
      pfVar32 = local_1e0 + 4;
      local_1e0 = pfVar13 + 3;
      if (pfVar32 < pfVar16) {
        local_1e0 = pfVar32;
      }
      fVar56 = *local_1b8;
      fVar50 = fStack_17c + fVar48 + fVar47 + fStack_184 + fVar44 + fVar43 +
               fStack_180 + fVar46 + fVar45 + local_188 + fVar41 + fVar40;
      fVar51 = fVar50 * fVar59;
      fVar52 = fVar50 * fVar59;
      fVar53 = fVar50 * fVar59;
      fVar50 = fVar50 * fVar59;
      *local_1b8 = fVar56 * fVar57 +
                   (fStack_184 * -1.0 + fVar43 * -1.0 + fVar44 * -1.0 +
                    fStack_17c * -1.0 + fVar47 * -1.0 + fVar48 * -1.0 +
                   local_188 * 1.0 + fVar40 * 1.0 + fVar41 * 1.0 +
                   fStack_180 * 1.0 + fVar45 * 1.0 + fVar46 * 1.0) * fVar58;
      local_1b8 = local_1b8 + 1;
      fVar54 = (fVar3 * fVar54 + fVar56) - fVar55;
      fVar42 = fVar54;
      if (pfVar9 != (float *)0x0) {
        fVar42 = *pfVar34;
        pfVar32 = pfVar34 + 1;
        *pfVar34 = fVar54;
        pfVar34 = pfVar9;
        if (pfVar32 != pfVar17) {
          pfVar34 = pfVar32;
        }
      }
      pfVar32 = pfVar36 + 4;
      fVar49 = fVar1 * fVar42 + fVar2 * fVar49;
      *pfVar36 = fVar49 + fVar52 + fVar43;
      pfVar36[1] = fVar49 + fVar53 + fVar45;
      pfVar36[2] = fVar49 + fVar50 + fVar47;
      pfVar36[3] = fVar49 + fVar41 + fVar51;
      pfVar36 = pfVar11;
      if (pfVar32 < pfVar14) {
        pfVar36 = pfVar32;
      }
      pfVar32 = pfVar37 + 4;
      *pfVar37 = fVar49 + fVar44 + fVar52;
      pfVar37[1] = fVar49 + fVar46 + fVar53;
      pfVar37[2] = fVar49 + fVar48 + fVar50;
      pfVar37[3] = fVar49 + local_188 + fVar51;
      *pfVar38 = fVar49 + fStack_184 + fVar52;
      pfVar38[1] = fVar49 + fStack_180 + fVar53;
      pfVar38[2] = fVar49 + fStack_17c + fVar50;
      pfVar38[3] = fVar49 + fVar51 + fVar40;
      pfVar37 = pfVar12;
      if (pfVar32 < pfVar15) {
        pfVar37 = pfVar32;
      }
      pfVar32 = pfVar38 + 4;
      pfVar38 = pfVar13;
      if (pfVar32 < pfVar16) {
        pfVar38 = pfVar32;
      }
      uVar35 = uVar35 - 1;
      fVar49 = fVar42;
      fVar55 = fVar56;
    } while (uVar35 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar42;
  *(float *)(param_1 + 0x230) = fVar56;
  *(float *)(param_1 + 0x234) = fVar54;
  *(float **)(param_1 + 0x30) = pfVar34;
  *(float **)(param_1 + 0xb0) = pfVar33;
  *(float **)(param_1 + 0xb8) = local_1d0;
  *(float **)(param_1 + 0xc0) = local_res20;
  *(float **)(param_1 + 200) = local_1f8;
  *(float **)(param_1 + 0xd0) = local_1c8;
  *(float **)(param_1 + 0xd8) = local_1f0;
  *(float **)(param_1 + 0x98) = local_1d8;
  *(float **)(param_1 + 0xe0) = local_1e8;
  *(float **)(param_1 + 0x140) = pfVar38;
  *(float **)(param_1 + 0xa0) = local_res10;
  *(float **)(param_1 + 0xe8) = local_1e0;
  *(float *)(param_1 + 0x1f0) = fVar40;
  *(float *)(param_1 + 500) = fVar43;
  *(float *)(param_1 + 0x1f8) = fVar45;
  *(float *)(param_1 + 0x1fc) = fVar47;
  *(undefined8 *)(param_1 + 0x200) = local_198;
  *(undefined8 *)(param_1 + 0x208) = uStack_190;
  *(float *)(param_1 + 0x210) = local_188;
  *(float *)(param_1 + 0x214) = fStack_184;
  *(float *)(param_1 + 0x218) = fStack_180;
  *(float *)(param_1 + 0x21c) = fStack_17c;
  *(float **)(param_1 + 0x130) = pfVar36;
  *(float **)(param_1 + 0x138) = pfVar37;
  *(float **)(param_1 + 0x90) = pfVar39;
  *(float **)(param_1 + 0xa8) = local_res18;
  return;
}



// FUNCTION 143200dd0 ProcessMono16 body=2643 status=ok
// SIG undefined ProcessMono16(void)

void CAkFDNReverbFX::ProcessMono16(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  uint uVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
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
  float fVar64;
  float fVar65;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  float *local_218;
  float *local_210;
  float *local_208;
  float *local_200;
  float *local_1f0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  
  pfVar9 = *(float **)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_1 + 0x10);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x118);
  pfVar13 = *(float **)(param_1 + 0x120);
  pfVar14 = *(float **)(param_1 + 0x128);
  pfVar15 = *(float **)(param_1 + 0x150);
  pfVar16 = *(float **)(param_1 + 0x158);
  pfVar43 = *(float **)(param_1 + 0x130);
  pfVar44 = *(float **)(param_1 + 0x138);
  pfVar45 = *(float **)(param_1 + 0x140);
  pfVar41 = *(float **)(param_1 + 0x148);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  fVar63 = *(float *)(param_1 + 0x23c);
  fVar64 = *(float *)(param_1 + 0x240);
  fVar47 = *(float *)(param_1 + 0x4c);
  fVar62 = *(float *)(param_1 + 0x230);
  fVar60 = *(float *)(param_1 + 0x234);
  local_1f0 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  fVar65 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  pfVar17 = *(float **)(param_1 + 0x38);
  pfVar18 = *(float **)(param_1 + 0x160);
  pfVar19 = *(float **)(param_1 + 0x168);
  pfVar39 = *(float **)(param_1 + 0x90);
  local_218 = *(float **)(param_1 + 0x98);
  local_res10 = *(float **)(param_1 + 0xa0);
  local_res18 = *(float **)(param_1 + 0xa8);
  local_210 = *(float **)(param_1 + 0xb0);
  fVar4 = *(float *)(lVar10 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar10 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar40 = *(float **)(param_1 + 0x30);
  local_res20 = *(float **)(param_1 + 0xb8);
  uVar24 = *(undefined8 *)(param_1 + 0x180);
  uVar25 = *(undefined8 *)(param_1 + 0x188);
  uVar42 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar20 = *(float *)(param_1 + 0x170);
  fVar21 = *(float *)(param_1 + 0x174);
  fVar22 = *(float *)(param_1 + 0x178);
  fVar23 = *(float *)(param_1 + 0x17c);
  local_1c8 = *(float *)(param_1 + 0x210);
  fStack_1c4 = *(float *)(param_1 + 0x214);
  fStack_1c0 = *(float *)(param_1 + 0x218);
  fStack_1bc = *(float *)(param_1 + 0x21c);
  local_1b8 = *(float *)(param_1 + 0x220);
  fStack_1b4 = *(float *)(param_1 + 0x224);
  fStack_1b0 = *(float *)(param_1 + 0x228);
  fStack_1ac = *(float *)(param_1 + 0x22c);
  fVar56 = *(float *)(param_1 + 0x1f0);
  fVar57 = *(float *)(param_1 + 500);
  fVar58 = *(float *)(param_1 + 0x1f8);
  fVar59 = *(float *)(param_1 + 0x1fc);
  local_268 = *(float **)(param_1 + 0xc0);
  local_260 = *(float **)(param_1 + 200);
  local_208 = *(float **)(param_1 + 0xd0);
  local_258 = *(float **)(param_1 + 0xd8);
  uVar26 = *(undefined8 *)(param_1 + 400);
  uVar27 = *(undefined8 *)(param_1 + 0x198);
  local_250 = *(float **)(param_1 + 0xe0);
  uVar28 = *(undefined8 *)(param_1 + 0x1a0);
  uVar29 = *(undefined8 *)(param_1 + 0x1a8);
  local_248 = *(float **)(param_1 + 0xe8);
  uVar30 = *(undefined8 *)(param_1 + 0x1b0);
  uVar31 = *(undefined8 *)(param_1 + 0x1b8);
  local_200 = *(float **)(param_1 + 0xf0);
  uVar32 = *(undefined8 *)(param_1 + 0x1c0);
  uVar33 = *(undefined8 *)(param_1 + 0x1c8);
  local_240 = *(float **)(param_1 + 0xf8);
  uVar34 = *(undefined8 *)(param_1 + 0x1d0);
  uVar35 = *(undefined8 *)(param_1 + 0x1d8);
  local_238 = *(float **)(param_1 + 0x100);
  uVar36 = *(undefined8 *)(param_1 + 0x1e0);
  uVar37 = *(undefined8 *)(param_1 + 0x1e8);
  local_230 = *(float **)(param_1 + 0x108);
  local_1d8 = *(undefined8 *)(param_1 + 0x200);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x208);
  fVar51 = fVar47;
  fVar61 = fVar62;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar47 = *pfVar39;
      local_198 = (float)uVar30;
      fStack_194 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_190 = (float)uVar31;
      fStack_18c = (float)((ulonglong)uVar31 >> 0x20);
      fVar62 = *local_218;
      fVar49 = *local_res10;
      pfVar38 = pfVar39 + 4;
      pfVar39 = pfVar11;
      if (pfVar38 < pfVar15) {
        pfVar39 = pfVar38;
      }
      pfVar38 = local_218 + 4;
      local_218 = pfVar11 + 1;
      if (pfVar38 < pfVar15) {
        local_218 = pfVar38;
      }
      pfVar38 = local_res10 + 4;
      local_res10 = pfVar11 + 2;
      if (pfVar38 < pfVar15) {
        local_res10 = pfVar38;
      }
      fVar56 = fVar47 * fVar20 + fVar56 * local_198;
      fVar57 = fVar62 * fVar21 + fVar57 * fStack_194;
      fVar58 = fVar49 * fVar22 + fVar58 * fStack_190;
      fVar59 = *local_res18 * fVar23 + fVar59 * fStack_18c;
      pfVar38 = local_res18 + 4;
      local_res18 = pfVar11 + 3;
      if (pfVar38 < pfVar15) {
        local_res18 = pfVar38;
      }
      fVar47 = *local_210;
      pfVar38 = local_210 + 4;
      fVar62 = *local_res20;
      fVar49 = *local_268;
      local_210 = pfVar12;
      if (pfVar38 < pfVar16) {
        local_210 = pfVar38;
      }
      pfVar38 = local_res20 + 4;
      local_178 = (float)uVar32;
      fStack_174 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_170 = (float)uVar33;
      fStack_16c = (float)((ulonglong)uVar33 >> 0x20);
      local_res20 = pfVar12 + 1;
      if (pfVar38 < pfVar16) {
        local_res20 = pfVar38;
      }
      local_188 = (float)uVar24;
      fStack_184 = (float)((ulonglong)uVar24 >> 0x20);
      fStack_180 = (float)uVar25;
      fStack_17c = (float)((ulonglong)uVar25 >> 0x20);
      pfVar38 = local_268 + 4;
      local_268 = pfVar12 + 2;
      if (pfVar38 < pfVar16) {
        local_268 = pfVar38;
      }
      pfVar38 = local_260 + 4;
      fVar46 = fVar47 * local_188 + (float)local_1d8 * local_178;
      fVar48 = fVar62 * fStack_184 + local_1d8._4_4_ * fStack_174;
      fVar49 = fVar49 * fStack_180 + (float)uStack_1d0 * fStack_170;
      fVar50 = *local_260 * fStack_17c + uStack_1d0._4_4_ * fStack_16c;
      local_260 = pfVar12 + 3;
      if (pfVar38 < pfVar16) {
        local_260 = pfVar38;
      }
      local_1d8 = CONCAT44(fVar48,fVar46);
      uStack_1d0 = CONCAT44(fVar50,fVar49);
      fVar47 = *local_208;
      fVar62 = *local_258;
      fVar52 = *local_250;
      pfVar38 = local_208 + 4;
      local_208 = pfVar13;
      if (pfVar38 < pfVar18) {
        local_208 = pfVar38;
      }
      local_158 = (float)uVar34;
      fStack_154 = (float)((ulonglong)uVar34 >> 0x20);
      fStack_150 = (float)uVar35;
      fStack_14c = (float)((ulonglong)uVar35 >> 0x20);
      pfVar38 = local_258 + 4;
      local_168 = (float)uVar26;
      fStack_164 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_160 = (float)uVar27;
      fStack_15c = (float)((ulonglong)uVar27 >> 0x20);
      local_258 = pfVar13 + 1;
      if (pfVar38 < pfVar18) {
        local_258 = pfVar38;
      }
      pfVar38 = local_250 + 4;
      local_250 = pfVar13 + 2;
      if (pfVar38 < pfVar18) {
        local_250 = pfVar38;
      }
      local_1c8 = fVar47 * local_168 + local_1c8 * local_158;
      fStack_1c4 = fVar62 * fStack_164 + fStack_1c4 * fStack_154;
      fStack_1c0 = fVar52 * fStack_160 + fStack_1c0 * fStack_150;
      fStack_1bc = *local_248 * fStack_15c + fStack_1bc * fStack_14c;
      pfVar38 = local_248 + 4;
      local_248 = pfVar13 + 3;
      if (pfVar38 < pfVar18) {
        local_248 = pfVar38;
      }
      fVar47 = *local_240;
      fVar52 = *local_200;
      fVar53 = *local_238;
      fVar54 = *local_230;
      pfVar38 = local_200 + 4;
      local_200 = pfVar14;
      if (pfVar38 < pfVar19) {
        local_200 = pfVar38;
      }
      pfVar38 = local_240 + 4;
      local_240 = pfVar14 + 1;
      if (pfVar38 < pfVar19) {
        local_240 = pfVar38;
      }
      pfVar38 = local_238 + 4;
      local_238 = pfVar14 + 2;
      if (pfVar38 < pfVar19) {
        local_238 = pfVar38;
      }
      pfVar38 = local_230 + 4;
      local_230 = pfVar14 + 3;
      if (pfVar38 < pfVar19) {
        local_230 = pfVar38;
      }
      local_148 = (float)uVar28;
      fStack_144 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_140 = (float)uVar29;
      fStack_13c = (float)((ulonglong)uVar29 >> 0x20);
      local_138 = (float)uVar36;
      fStack_134 = (float)((ulonglong)uVar36 >> 0x20);
      fStack_130 = (float)uVar37;
      fStack_12c = (float)((ulonglong)uVar37 >> 0x20);
      fVar63 = fVar63 + (fVar4 - fVar5) * (1.0 / (float)uVar8);
      fVar64 = fVar64 + (fVar6 - fVar7) * (1.0 / (float)uVar8);
      fVar62 = *local_1f0;
      local_1b8 = fVar52 * local_148 + local_1b8 * local_138;
      fStack_1b4 = fVar47 * fStack_144 + fStack_1b4 * fStack_134;
      fStack_1b0 = fVar53 * fStack_140 + fStack_1b0 * fStack_130;
      fStack_1ac = fVar54 * fStack_13c + fStack_1ac * fStack_12c;
      fVar52 = fStack_1ac + fVar50 + fVar59 + fStack_1bc + fStack_1b4 + fVar48 + fVar57 + fStack_1c4
               + fStack_1b0 + fVar49 + fVar58 + fStack_1c0 + local_1b8 + fVar46 + fVar56 + local_1c8
      ;
      fVar53 = fVar52 * fVar65;
      fVar54 = fVar52 * fVar65;
      fVar55 = fVar52 * fVar65;
      fVar52 = fVar52 * fVar65;
      *local_1f0 = fVar62 * fVar63 +
                   (fStack_1b4 * -1.0 + fVar57 * -1.0 + fVar48 * -1.0 + fStack_1c4 * -1.0 +
                    fStack_1ac * -1.0 + fVar59 * -1.0 + fVar50 * -1.0 + fStack_1bc * -1.0 +
                   local_1b8 * 1.0 + fVar56 * 1.0 + fVar46 * 1.0 + local_1c8 * 1.0 +
                   fStack_1b0 * 1.0 + fVar58 * 1.0 + fVar49 * 1.0 + fStack_1c0 * 1.0) * fVar64;
      local_1f0 = local_1f0 + 1;
      fVar60 = (fVar3 * fVar60 + fVar62) - fVar61;
      fVar47 = fVar60;
      if (pfVar9 != (float *)0x0) {
        fVar47 = *pfVar40;
        pfVar38 = pfVar40 + 1;
        *pfVar40 = fVar60;
        pfVar40 = pfVar9;
        if (pfVar38 != pfVar17) {
          pfVar40 = pfVar38;
        }
      }
      pfVar38 = pfVar43 + 4;
      fVar51 = fVar1 * fVar47 + fVar2 * fVar51;
      *pfVar43 = fVar51 + fVar54 + fVar57;
      pfVar43[1] = fVar51 + fVar55 + fVar58;
      pfVar43[2] = fVar51 + fVar52 + fVar59;
      pfVar43[3] = fVar51 + fVar46 + fVar53;
      *pfVar44 = fVar51 + fVar48 + fVar54;
      pfVar44[1] = fVar51 + fVar49 + fVar55;
      pfVar44[2] = fVar51 + fVar50 + fVar52;
      pfVar44[3] = fVar51 + local_1c8 + fVar53;
      pfVar43 = pfVar11;
      if (pfVar38 < pfVar15) {
        pfVar43 = pfVar38;
      }
      pfVar38 = pfVar44 + 4;
      *pfVar45 = fVar51 + fStack_1c4 + fVar54;
      pfVar45[1] = fVar51 + fStack_1c0 + fVar55;
      pfVar45[2] = fVar51 + fStack_1bc + fVar52;
      pfVar45[3] = fVar51 + local_1b8 + fVar53;
      pfVar44 = pfVar12;
      if (pfVar38 < pfVar16) {
        pfVar44 = pfVar38;
      }
      *pfVar41 = fVar51 + fStack_1b4 + fVar54;
      pfVar41[1] = fVar51 + fStack_1b0 + fVar55;
      pfVar41[2] = fVar51 + fStack_1ac + fVar52;
      pfVar41[3] = fVar51 + fVar53 + fVar56;
      pfVar38 = pfVar45 + 4;
      pfVar45 = pfVar13;
      if (pfVar38 < pfVar18) {
        pfVar45 = pfVar38;
      }
      pfVar38 = pfVar41 + 4;
      pfVar41 = pfVar14;
      if (pfVar38 < pfVar19) {
        pfVar41 = pfVar38;
      }
      uVar42 = uVar42 - 1;
      fVar51 = fVar47;
      fVar61 = fVar62;
    } while (uVar42 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar47;
  *(float *)(param_1 + 0x230) = fVar62;
  *(float *)(param_1 + 0x234) = fVar60;
  *(float **)(param_1 + 0x30) = pfVar40;
  *(float **)(param_1 + 0x90) = pfVar39;
  *(float **)(param_1 + 0x98) = local_218;
  *(float **)(param_1 + 0xa0) = local_res10;
  *(float **)(param_1 + 0xa8) = local_res18;
  *(float **)(param_1 + 0xb0) = local_210;
  *(float **)(param_1 + 0xb8) = local_res20;
  *(float **)(param_1 + 0xc0) = local_268;
  *(float **)(param_1 + 200) = local_260;
  *(float **)(param_1 + 0xd0) = local_208;
  *(float **)(param_1 + 0xd8) = local_258;
  *(float **)(param_1 + 0xe0) = local_250;
  *(float **)(param_1 + 0xe8) = local_248;
  *(float **)(param_1 + 0xf0) = local_200;
  *(float **)(param_1 + 0xf8) = local_240;
  *(float **)(param_1 + 0x100) = local_238;
  *(float **)(param_1 + 0x140) = pfVar45;
  *(float **)(param_1 + 0x108) = local_230;
  *(float *)(param_1 + 0x1f0) = fVar56;
  *(float *)(param_1 + 500) = fVar57;
  *(float *)(param_1 + 0x1f8) = fVar58;
  *(float *)(param_1 + 0x1fc) = fVar59;
  *(undefined8 *)(param_1 + 0x200) = local_1d8;
  *(undefined8 *)(param_1 + 0x208) = uStack_1d0;
  *(float *)(param_1 + 0x210) = local_1c8;
  *(float *)(param_1 + 0x214) = fStack_1c4;
  *(float *)(param_1 + 0x218) = fStack_1c0;
  *(float *)(param_1 + 0x21c) = fStack_1bc;
  *(float *)(param_1 + 0x220) = local_1b8;
  *(float *)(param_1 + 0x224) = fStack_1b4;
  *(float *)(param_1 + 0x228) = fStack_1b0;
  *(float *)(param_1 + 0x22c) = fStack_1ac;
  *(float **)(param_1 + 0x130) = pfVar43;
  *(float **)(param_1 + 0x138) = pfVar44;
  *(float **)(param_1 + 0x148) = pfVar41;
  return;
}



// FUNCTION 143201830 ProcessMono4 body=993 status=ok
// SIG undefined ProcessMono4(void)

void CAkFDNReverbFX::ProcessMono4(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float *local_res10;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  
  fVar29 = *(float *)(param_1 + 0x4c);
  lVar10 = *(longlong *)(param_1 + 0x10);
  fVar30 = *(float *)(param_1 + 0x234);
  pfVar11 = *(float **)(param_1 + 0x110);
  uVar27 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  pfVar12 = *(float **)(param_1 + 0x150);
  pfVar26 = *(float **)(param_1 + 0x130);
  pfVar22 = *(float **)(param_1 + 0x90);
  pfVar25 = *(float **)(param_1 + 0x98);
  pfVar24 = *(float **)(param_1 + 0xa0);
  pfVar23 = *(float **)(param_1 + 0xa8);
  fVar15 = *(float *)(param_1 + 0x170);
  fVar16 = *(float *)(param_1 + 0x174);
  fVar17 = *(float *)(param_1 + 0x178);
  fVar18 = *(float *)(param_1 + 0x17c);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(lVar10 + 0x10);
  fVar4 = *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x238);
  fVar32 = *(float *)(param_1 + 0x23c);
  fVar33 = *(float *)(param_1 + 0x240);
  fVar35 = *(float *)(param_1 + 0x230);
  fVar36 = *(float *)(param_1 + 0x1f0);
  fVar37 = *(float *)(param_1 + 500);
  fVar38 = *(float *)(param_1 + 0x1f8);
  fVar39 = *(float *)(param_1 + 0x1fc);
  fVar6 = *(float *)(param_1 + 0x23c);
  local_res10 = (float *)*param_2;
  uVar9 = *(ushort *)(param_2 + 2);
  fVar40 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  pfVar13 = *(float **)(param_1 + 0x28);
  pfVar14 = *(float **)(param_1 + 0x38);
  fVar7 = *(float *)(lVar10 + 0x14);
  pfVar21 = *(float **)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x240);
  uVar19 = *(undefined8 *)(param_1 + 0x1b0);
  uVar20 = *(undefined8 *)(param_1 + 0x1b8);
  fVar28 = fVar29;
  fVar34 = fVar35;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar29 = *pfVar25;
      pfVar1 = pfVar22 + 4;
      local_118 = (float)uVar19;
      fStack_114 = (float)((ulonglong)uVar19 >> 0x20);
      fStack_110 = (float)uVar20;
      fStack_10c = (float)((ulonglong)uVar20 >> 0x20);
      fVar35 = *pfVar22;
      fVar31 = *pfVar24;
      fVar32 = fVar32 + (fVar3 - fVar6) * (1.0 / (float)uVar9);
      fVar33 = fVar33 + (fVar7 - fVar8) * (1.0 / (float)uVar9);
      pfVar22 = pfVar11;
      if (pfVar1 < pfVar12) {
        pfVar22 = pfVar1;
      }
      pfVar1 = pfVar25 + 4;
      pfVar25 = pfVar11 + 1;
      if (pfVar1 < pfVar12) {
        pfVar25 = pfVar1;
      }
      pfVar1 = pfVar24 + 4;
      pfVar24 = pfVar11 + 2;
      if (pfVar1 < pfVar12) {
        pfVar24 = pfVar1;
      }
      pfVar1 = pfVar23 + 4;
      fVar36 = fVar35 * fVar15 + fVar36 * local_118;
      fVar37 = fVar29 * fVar16 + fVar37 * fStack_114;
      fVar38 = fVar31 * fVar17 + fVar38 * fStack_110;
      fVar39 = *pfVar23 * fVar18 + fVar39 * fStack_10c;
      pfVar23 = pfVar11 + 3;
      if (pfVar1 < pfVar12) {
        pfVar23 = pfVar1;
      }
      fVar35 = *local_res10;
      fVar31 = fVar39 + fVar37 + fVar38 + fVar36;
      *local_res10 = fVar35 * fVar32 +
                     (fVar37 * -1.0 + fVar39 * -1.0 + fVar36 * 1.0 + fVar38 * 1.0) * fVar33;
      local_res10 = local_res10 + 1;
      fVar30 = (fVar5 * fVar30 + fVar35) - fVar34;
      fVar29 = fVar30;
      if (pfVar13 != (float *)0x0) {
        fVar29 = *pfVar21;
        pfVar1 = pfVar21 + 1;
        *pfVar21 = fVar30;
        pfVar21 = pfVar13;
        if (pfVar1 != pfVar14) {
          pfVar21 = pfVar1;
        }
      }
      pfVar1 = pfVar26 + 4;
      fVar28 = fVar2 * fVar29 + fVar4 * fVar28;
      *pfVar26 = fVar28 + fVar31 * fVar40 + fVar37;
      pfVar26[1] = fVar28 + fVar31 * fVar40 + fVar38;
      pfVar26[2] = fVar28 + fVar31 * fVar40 + fVar39;
      pfVar26[3] = fVar28 + fVar31 * fVar40 + fVar36;
      pfVar26 = pfVar11;
      if (pfVar1 < pfVar12) {
        pfVar26 = pfVar1;
      }
      uVar27 = uVar27 - 1;
      fVar28 = fVar29;
      fVar34 = fVar35;
    } while (uVar27 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar29;
  *(float *)(param_1 + 0x230) = fVar35;
  *(float *)(param_1 + 0x234) = fVar30;
  *(float **)(param_1 + 0x30) = pfVar21;
  *(float *)(param_1 + 0x1f0) = fVar36;
  *(float *)(param_1 + 500) = fVar37;
  *(float *)(param_1 + 0x1f8) = fVar38;
  *(float *)(param_1 + 0x1fc) = fVar39;
  *(float **)(param_1 + 0x130) = pfVar26;
  *(float **)(param_1 + 0x90) = pfVar22;
  *(float **)(param_1 + 0x98) = pfVar25;
  *(float **)(param_1 + 0xa0) = pfVar24;
  *(float **)(param_1 + 0xa8) = pfVar23;
  return;
}



// FUNCTION 143201c20 ProcessMono8 body=1488 status=ok
// SIG undefined ProcessMono8(void)

void CAkFDNReverbFX::ProcessMono8(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  uint uVar30;
  float *pfVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
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
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_188;
  float *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
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
  
  local_res10 = *(float **)(param_1 + 0xa8);
  lVar9 = *(longlong *)(param_1 + 0x10);
  pfVar10 = *(float **)(param_1 + 0x38);
  pfVar11 = *(float **)(param_1 + 0x28);
  pfVar12 = *(float **)(param_1 + 0x110);
  pfVar13 = *(float **)(param_1 + 0x118);
  pfVar14 = *(float **)(param_1 + 0x150);
  pfVar15 = *(float **)(param_1 + 0x158);
  pfVar28 = *(float **)(param_1 + 0x130);
  pfVar29 = *(float **)(param_1 + 0x138);
  pfVar32 = *(float **)(param_1 + 0x90);
  pfVar31 = *(float **)(param_1 + 0xb0);
  fVar1 = *(float *)(lVar9 + 0x10);
  fVar2 = *(float *)(param_1 + 0x23c);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x238);
  fVar47 = *(float *)(param_1 + 0x23c);
  fVar48 = *(float *)(param_1 + 0x240);
  fVar43 = *(float *)(param_1 + 0x4c);
  fVar46 = *(float *)(param_1 + 0x230);
  fVar44 = *(float *)(param_1 + 0x234);
  fVar33 = *(float *)(param_1 + 0x1f0);
  fVar36 = *(float *)(param_1 + 500);
  fVar38 = *(float *)(param_1 + 0x1f8);
  fVar40 = *(float *)(param_1 + 0x1fc);
  local_168 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  local_188 = *(float **)(param_1 + 0xb8);
  local_res18 = *(float **)(param_1 + 0xc0);
  fVar49 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  local_res20 = *(float **)(param_1 + 200);
  pfVar27 = *(float **)(param_1 + 0x98);
  pfVar25 = *(float **)(param_1 + 0xa0);
  fVar6 = *(float *)(lVar9 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar26 = *(float **)(param_1 + 0x30);
  uVar16 = *(undefined8 *)(param_1 + 0x170);
  uVar17 = *(undefined8 *)(param_1 + 0x178);
  uVar18 = *(undefined8 *)(param_1 + 0x180);
  uVar19 = *(undefined8 *)(param_1 + 0x188);
  uVar20 = *(undefined8 *)(param_1 + 0x1b0);
  uVar21 = *(undefined8 *)(param_1 + 0x1b8);
  uVar22 = *(undefined8 *)(param_1 + 0x1c0);
  uVar23 = *(undefined8 *)(param_1 + 0x1c8);
  uVar30 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_158 = *(undefined8 *)(param_1 + 0x200);
  uStack_150 = *(undefined8 *)(param_1 + 0x208);
  fVar35 = fVar43;
  fVar45 = fVar46;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar43 = *pfVar27;
      fVar46 = *pfVar32;
      fVar34 = *pfVar25;
      pfVar24 = pfVar32 + 4;
      local_128 = (float)uVar20;
      fStack_124 = (float)((ulonglong)uVar20 >> 0x20);
      fStack_120 = (float)uVar21;
      fStack_11c = (float)((ulonglong)uVar21 >> 0x20);
      pfVar32 = pfVar12;
      if (pfVar24 < pfVar14) {
        pfVar32 = pfVar24;
      }
      pfVar24 = pfVar27 + 4;
      local_138 = (float)uVar16;
      fStack_134 = (float)((ulonglong)uVar16 >> 0x20);
      fStack_130 = (float)uVar17;
      fStack_12c = (float)((ulonglong)uVar17 >> 0x20);
      pfVar27 = pfVar12 + 1;
      if (pfVar24 < pfVar14) {
        pfVar27 = pfVar24;
      }
      pfVar24 = pfVar25 + 4;
      pfVar25 = pfVar12 + 2;
      if (pfVar24 < pfVar14) {
        pfVar25 = pfVar24;
      }
      fVar37 = *pfVar31;
      fVar33 = fVar46 * local_138 + local_128 * fVar33;
      fVar36 = fVar43 * fStack_134 + fStack_124 * fVar36;
      fVar38 = fVar34 * fStack_130 + fStack_120 * fVar38;
      fVar40 = *local_res10 * fStack_12c + fStack_11c * fVar40;
      pfVar24 = local_res10 + 4;
      local_res10 = pfVar12 + 3;
      if (pfVar24 < pfVar14) {
        local_res10 = pfVar24;
      }
      fVar43 = *local_res18;
      fVar46 = *local_188;
      pfVar24 = pfVar31 + 4;
      local_108 = (float)uVar22;
      fStack_104 = (float)((ulonglong)uVar22 >> 0x20);
      fStack_100 = (float)uVar23;
      fStack_fc = (float)((ulonglong)uVar23 >> 0x20);
      pfVar31 = pfVar13;
      if (pfVar24 < pfVar15) {
        pfVar31 = pfVar24;
      }
      pfVar24 = local_188 + 4;
      local_118 = (float)uVar18;
      fStack_114 = (float)((ulonglong)uVar18 >> 0x20);
      fStack_110 = (float)uVar19;
      fStack_10c = (float)((ulonglong)uVar19 >> 0x20);
      local_188 = pfVar13 + 1;
      if (pfVar24 < pfVar15) {
        local_188 = pfVar24;
      }
      pfVar24 = local_res18 + 4;
      local_res18 = pfVar13 + 2;
      if (pfVar24 < pfVar15) {
        local_res18 = pfVar24;
      }
      fVar34 = fVar37 * local_118 + local_108 * (float)local_158;
      fVar37 = fVar46 * fStack_114 + fStack_104 * local_158._4_4_;
      fVar39 = fVar43 * fStack_110 + fStack_100 * (float)uStack_150;
      fVar41 = *local_res20 * fStack_10c + fStack_fc * uStack_150._4_4_;
      pfVar24 = local_res20 + 4;
      local_res20 = pfVar13 + 3;
      if (pfVar24 < pfVar15) {
        local_res20 = pfVar24;
      }
      local_158 = CONCAT44(fVar37,fVar34);
      uStack_150 = CONCAT44(fVar41,fVar39);
      fVar46 = *local_168;
      fVar48 = fVar48 + (fVar6 - fVar7) * (1.0 / (float)uVar8);
      fVar47 = fVar47 + (fVar1 - fVar2) * (1.0 / (float)uVar8);
      fVar42 = fVar41 + fVar40 + fVar37 + fVar36 + fVar39 + fVar38 + fVar34 + fVar33;
      *local_168 = fVar46 * fVar47 +
                   (fVar37 * -1.0 + fVar36 * -1.0 + fVar41 * -1.0 + fVar40 * -1.0 +
                   fVar34 * 1.0 + fVar33 * 1.0 + fVar39 * 1.0 + fVar38 * 1.0) * fVar48;
      local_168 = local_168 + 1;
      fVar44 = (fVar5 * fVar44 + fVar46) - fVar45;
      fVar43 = fVar44;
      if (pfVar11 != (float *)0x0) {
        fVar43 = *pfVar26;
        pfVar24 = pfVar26 + 1;
        *pfVar26 = fVar44;
        pfVar26 = pfVar11;
        if (pfVar24 != pfVar10) {
          pfVar26 = pfVar24;
        }
      }
      pfVar24 = pfVar28 + 4;
      fVar35 = fVar3 * fVar43 + fVar4 * fVar35;
      *pfVar28 = fVar35 + fVar42 * fVar49 + fVar36;
      pfVar28[1] = fVar35 + fVar42 * fVar49 + fVar38;
      pfVar28[2] = fVar35 + fVar42 * fVar49 + fVar40;
      pfVar28[3] = fVar35 + fVar34 + fVar42 * fVar49;
      pfVar28 = pfVar12;
      if (pfVar24 < pfVar14) {
        pfVar28 = pfVar24;
      }
      *pfVar29 = fVar35 + fVar37 + fVar42 * fVar49;
      pfVar29[1] = fVar35 + fVar39 + fVar42 * fVar49;
      pfVar29[2] = fVar35 + fVar41 + fVar42 * fVar49;
      pfVar29[3] = fVar35 + fVar42 * fVar49 + fVar33;
      pfVar24 = pfVar29 + 4;
      pfVar29 = pfVar13;
      if (pfVar24 < pfVar15) {
        pfVar29 = pfVar24;
      }
      uVar30 = uVar30 - 1;
      fVar35 = fVar43;
      fVar45 = fVar46;
    } while (uVar30 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar43;
  *(float *)(param_1 + 0x230) = fVar46;
  *(float *)(param_1 + 0x234) = fVar44;
  *(float **)(param_1 + 0x30) = pfVar26;
  *(float **)(param_1 + 0xa0) = pfVar25;
  *(float **)(param_1 + 0xa8) = local_res10;
  *(float **)(param_1 + 0xb8) = local_188;
  *(float **)(param_1 + 0xc0) = local_res18;
  *(float **)(param_1 + 200) = local_res20;
  *(float *)(param_1 + 0x1f0) = fVar33;
  *(float *)(param_1 + 500) = fVar36;
  *(float *)(param_1 + 0x1f8) = fVar38;
  *(float *)(param_1 + 0x1fc) = fVar40;
  *(undefined8 *)(param_1 + 0x200) = local_158;
  *(undefined8 *)(param_1 + 0x208) = uStack_150;
  *(float **)(param_1 + 0x130) = pfVar28;
  *(float **)(param_1 + 0x138) = pfVar29;
  *(float **)(param_1 + 0x90) = pfVar32;
  *(float **)(param_1 + 0x98) = pfVar27;
  *(float **)(param_1 + 0xb0) = pfVar31;
  return;
}



// FUNCTION 1432021f0 ProcessN12 body=2514 status=ok
// SIG undefined ProcessN12(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkFDNReverbFX::ProcessN12(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  uint local_res10;
  float *local_res18;
  float *local_res20;
  undefined8 auStack_260 [5];
  undefined8 local_238;
  undefined8 local_230;
  float *local_228;
  float *pfStack_220;
  float *local_218;
  float *pfStack_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
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
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_108 = *(float *)(param_1 + 0x44);
  pfVar12 = *(float **)(param_1 + 0x130);
  lVar22 = *param_2;
  pfVar21 = *(float **)(param_1 + 0x30);
  fStack_104 = local_108;
  fStack_100 = local_108;
  fStack_fc = local_108;
  local_f8 = *(float *)(param_1 + 0x48);
  fStack_f4 = local_f8;
  fStack_f0 = local_f8;
  fStack_ec = local_f8;
  fVar30 = *(float *)(param_1 + 0x234);
  fVar2 = *(float *)(lVar7 + 0x10);
  fVar3 = *(float *)(param_1 + 0x23c);
  fVar4 = *(float *)(param_1 + 0x238);
  fVar35 = *(float *)(param_1 + 0x23c);
  fVar36 = *(float *)(param_1 + 0x240);
  fVar25 = *(float *)(param_1 + 0x4c);
  fVar24 = *(float *)(param_1 + 0x230);
  uVar5 = *(ushort *)(param_2 + 2);
  local_1b0 = pfVar12;
  local_118 = -2.0 / (float)*(uint *)(lVar7 + 0x18);
  fStack_114 = local_118;
  fStack_110 = local_118;
  fStack_10c = local_118;
  local_1a0 = *(float **)(param_1 + 0x28);
  local_198 = *(float **)(param_1 + 0x38);
  local_1e8 = *(float **)(param_1 + 0x110);
  local_1d0 = *(float **)(param_1 + 0x118);
  local_1c8 = *(float **)(param_1 + 0x120);
  local_238 = *(float **)(param_1 + 0x150);
  local_1e0 = *(float **)(param_1 + 0x158);
  local_1d8 = *(float **)(param_1 + 0x160);
  local_1c0 = *(float **)(param_1 + 0x138);
  local_1b8 = *(float **)(param_1 + 0x140);
  local_1a8 = *(float **)(param_1 + 0x90);
  local_230 = *(float **)(param_1 + 0x98);
  local_228 = *(float **)(param_1 + 0xa0);
  local_128 = (*(float *)(lVar7 + 0x14) - *(float *)(param_1 + 0x240)) * (1.0 / (float)uVar5);
  fStack_124 = local_128;
  fStack_120 = local_128;
  fStack_11c = local_128;
  fVar31 = *(float *)(param_1 + 0x1f0);
  fVar32 = *(float *)(param_1 + 500);
  fVar33 = *(float *)(param_1 + 0x1f8);
  fVar34 = *(float *)(param_1 + 0x1fc);
  fVar41 = *(float *)(param_1 + 0x200);
  fVar42 = *(float *)(param_1 + 0x204);
  fVar43 = *(float *)(param_1 + 0x208);
  fVar44 = *(float *)(param_1 + 0x20c);
  fVar37 = *(float *)(param_1 + 0x210);
  fVar38 = *(float *)(param_1 + 0x214);
  fVar39 = *(float *)(param_1 + 0x218);
  fVar40 = *(float *)(param_1 + 0x21c);
  uVar6 = *(uint *)(param_1 + 0x254);
  pfStack_220 = *(float **)(param_1 + 0xa8);
  local_218 = *(float **)(param_1 + 0xb0);
  pfStack_210 = *(float **)(param_1 + 0xb8);
  local_208 = *(float **)(param_1 + 0xc0);
  local_res18 = *(float **)(param_1 + 200);
  local_188 = *(undefined8 *)(param_1 + 0x170);
  uStack_180 = *(undefined8 *)(param_1 + 0x178);
  local_200 = *(float **)(param_1 + 0xd0);
  local_168 = *(undefined8 *)(param_1 + 0x180);
  uStack_160 = *(undefined8 *)(param_1 + 0x188);
  local_1f8 = *(float **)(param_1 + 0xd8);
  local_148 = *(undefined8 *)(param_1 + 400);
  uStack_140 = *(undefined8 *)(param_1 + 0x198);
  local_1f0 = *(float **)(param_1 + 0xe0);
  local_res20 = *(float **)(param_1 + 0xe8);
  local_178 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_170 = *(undefined8 *)(param_1 + 0x1b8);
  local_158 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_150 = *(undefined8 *)(param_1 + 0x1c8);
  local_res10 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_138 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_130 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(int *)(lVar7 + 0x20) == 0) {
    pfVar20 = (float *)(&DAT_145ae48d0 + (ulonglong)(uVar6 - 1) * 0x40);
  }
  else {
    pfVar20 = (float *)&DAT_145ae4cd0;
  }
  uVar13 = (ulonglong)uVar6 * 0x10;
  uVar9 = uVar13 + 0xf;
  if (uVar9 <= uVar13) {
    uVar9 = 0xffffffffffffff0;
  }
  lVar7 = -(uVar9 & 0xfffffffffffffff0);
  uVar9 = uVar13 + 0xf;
  pfVar1 = (float *)((longlong)&local_238 + lVar7);
  if (uVar9 <= uVar13) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_260 + lVar7) = 0x143202534;
  lVar8 = (lVar7 - (uVar9 & 0xfffffffffffffff0)) + -0x238;
  pfVar19 = local_1a8;
  if (local_res10 != 0) {
    uVar18 = uVar6 - 1;
    pfVar16 = local_1b8;
    fVar26 = fVar24;
    fVar45 = fVar25;
    do {
      pfVar12 = pfVar19 + 4;
      fVar25 = *local_230;
      fVar24 = *pfVar19;
      pfVar19 = local_1e8;
      if (pfVar12 < local_238) {
        pfVar19 = pfVar12;
      }
      pfVar12 = local_1e8 + 1;
      if (local_230 + 4 < local_238) {
        pfVar12 = local_230 + 4;
      }
      local_230 = pfVar12;
      fVar31 = fVar24 * (float)local_188 + fVar31 * (float)local_178;
      fVar32 = fVar25 * local_188._4_4_ + fVar32 * local_178._4_4_;
      fVar33 = *local_228 * (float)uStack_180 + fVar33 * (float)uStack_170;
      fVar34 = *pfStack_220 * uStack_180._4_4_ + fVar34 * uStack_170._4_4_;
      pfVar12 = local_1e8 + 2;
      if (local_228 + 4 < local_238) {
        pfVar12 = local_228 + 4;
      }
      local_228 = pfVar12;
      pfVar12 = local_1e8 + 3;
      if (pfStack_220 + 4 < local_238) {
        pfVar12 = pfStack_220 + 4;
      }
      pfStack_220 = pfVar12;
      uVar9 = 0;
      do {
        lVar10 = uVar9 * 0x40;
        uVar14 = (int)uVar9 + 1;
        fVar25 = *(float *)(&UNK_145ae48d4 + lVar10);
        fVar24 = *(float *)(&UNK_145ae48d8 + lVar10);
        fVar27 = *(float *)(&UNK_145ae48dc + lVar10);
        pfVar12 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        *pfVar12 = *(float *)(&DAT_145ae48d0 + lVar10) * fVar31;
        pfVar12[1] = fVar25 * fVar32;
        pfVar12[2] = fVar24 * fVar33;
        pfVar12[3] = fVar27 * fVar34;
        uVar9 = (ulonglong)uVar14;
      } while (uVar14 < uVar18);
      fVar25 = pfVar20[1];
      fVar24 = pfVar20[2];
      fVar27 = pfVar20[3];
      fVar41 = fVar41 * (float)local_158;
      fVar42 = fVar42 * local_158._4_4_;
      fVar43 = fVar43 * (float)uStack_150;
      fVar44 = fVar44 * uStack_150._4_4_;
      pfVar12 = (float *)((longlong)&local_238 + (ulonglong)uVar14 * 0x10 + lVar8 + 0x238);
      *pfVar12 = *pfVar20 * fVar31;
      pfVar12[1] = fVar25 * fVar32;
      pfVar12[2] = fVar24 * fVar33;
      pfVar12[3] = fVar27 * fVar34;
      fVar25 = *local_218;
      fVar24 = *pfStack_210;
      pfVar12 = local_1d0;
      if (local_218 + 4 < local_1e0) {
        pfVar12 = local_218 + 4;
      }
      local_218 = pfVar12;
      pfVar12 = local_1d0 + 1;
      if (pfStack_210 + 4 < local_1e0) {
        pfVar12 = pfStack_210 + 4;
      }
      pfStack_210 = pfVar12;
      pfVar12 = local_1d0 + 2;
      if (local_208 + 4 < local_1e0) {
        pfVar12 = local_208 + 4;
      }
      fVar41 = fVar25 * (float)local_168 + fVar41;
      fVar42 = fVar24 * local_168._4_4_ + fVar42;
      fVar43 = *local_208 * (float)uStack_160 + fVar43;
      fVar44 = *local_res18 * uStack_160._4_4_ + fVar44;
      pfVar11 = local_res18 + 4;
      local_208 = pfVar12;
      local_res18 = local_1d0 + 3;
      if (pfVar11 < local_1e0) {
        local_res18 = pfVar11;
      }
      uVar9 = 0;
      do {
        lVar10 = uVar9 * 0x40;
        uVar14 = (int)uVar9 + 1;
        fVar25 = *(float *)(&UNK_145ae48e4 + lVar10);
        fVar24 = *(float *)(&UNK_145ae48e8 + lVar10);
        fVar27 = *(float *)(&UNK_145ae48ec + lVar10);
        pfVar12 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        fVar28 = pfVar12[1];
        fVar23 = pfVar12[2];
        fVar29 = pfVar12[3];
        pfVar11 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        *pfVar11 = *(float *)(&DAT_145ae48e0 + lVar10) * fVar41 + *pfVar12;
        pfVar11[1] = fVar25 * fVar42 + fVar28;
        pfVar11[2] = fVar24 * fVar43 + fVar23;
        pfVar11[3] = fVar27 * fVar44 + fVar29;
        uVar9 = (ulonglong)uVar14;
      } while (uVar14 < uVar18);
      fVar25 = pfVar20[5];
      fVar24 = pfVar20[6];
      fVar27 = pfVar20[7];
      fVar37 = fVar37 * (float)local_138;
      fVar38 = fVar38 * local_138._4_4_;
      fVar39 = fVar39 * (float)uStack_130;
      fVar40 = fVar40 * uStack_130._4_4_;
      pfVar12 = (float *)((longlong)&local_238 + (ulonglong)uVar14 * 0x10 + lVar8 + 0x238);
      fVar28 = pfVar12[1];
      fVar23 = pfVar12[2];
      fVar29 = pfVar12[3];
      pfVar11 = (float *)((longlong)&local_238 + (ulonglong)uVar14 * 0x10 + lVar8 + 0x238);
      *pfVar11 = pfVar20[4] * fVar41 + *pfVar12;
      pfVar11[1] = fVar25 * fVar42 + fVar28;
      pfVar11[2] = fVar24 * fVar43 + fVar23;
      pfVar11[3] = fVar27 * fVar44 + fVar29;
      fVar25 = *local_200;
      fVar24 = *local_1f8;
      pfVar12 = local_1c8;
      if (local_200 + 4 < local_1d8) {
        pfVar12 = local_200 + 4;
      }
      local_200 = pfVar12;
      pfVar12 = local_1c8 + 1;
      if (local_1f8 + 4 < local_1d8) {
        pfVar12 = local_1f8 + 4;
      }
      local_1f8 = pfVar12;
      pfVar12 = local_1c8 + 2;
      if (local_1f0 + 4 < local_1d8) {
        pfVar12 = local_1f0 + 4;
      }
      fVar37 = fVar25 * (float)local_148 + fVar37;
      fVar38 = fVar24 * local_148._4_4_ + fVar38;
      fVar39 = *local_1f0 * (float)uStack_140 + fVar39;
      fVar40 = *local_res20 * uStack_140._4_4_ + fVar40;
      pfVar11 = local_res20 + 4;
      local_1f0 = pfVar12;
      local_res20 = local_1c8 + 3;
      if (pfVar11 < local_1d8) {
        local_res20 = pfVar11;
      }
      uVar9 = 0;
      do {
        lVar10 = uVar9 * 0x40;
        uVar14 = (int)uVar9 + 1;
        fVar25 = *(float *)(&UNK_145ae48f4 + lVar10);
        fVar24 = *(float *)(&UNK_145ae48f8 + lVar10);
        fVar27 = *(float *)(&UNK_145ae48fc + lVar10);
        pfVar12 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        fVar28 = pfVar12[1];
        fVar23 = pfVar12[2];
        fVar29 = pfVar12[3];
        pfVar11 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        *pfVar11 = *(float *)(&DAT_145ae48f0 + lVar10) * fVar37 + *pfVar12;
        pfVar11[1] = fVar25 * fVar38 + fVar28;
        pfVar11[2] = fVar24 * fVar39 + fVar23;
        pfVar11[3] = fVar27 * fVar40 + fVar29;
        uVar9 = (ulonglong)uVar14;
      } while (uVar14 < uVar18);
      fVar25 = pfVar20[9];
      fVar24 = pfVar20[10];
      fVar27 = pfVar20[0xb];
      uVar17 = 0;
      pfVar12 = (float *)((longlong)&local_238 + (ulonglong)uVar14 * 0x10 + lVar8 + 0x238);
      fVar28 = pfVar12[1];
      fVar23 = pfVar12[2];
      fVar29 = pfVar12[3];
      pfVar11 = (float *)((longlong)&local_238 + (ulonglong)uVar14 * 0x10 + lVar8 + 0x238);
      *pfVar11 = pfVar20[8] * fVar37 + *pfVar12;
      pfVar11[1] = fVar25 * fVar38 + fVar28;
      pfVar11[2] = fVar24 * fVar39 + fVar23;
      pfVar11[3] = fVar27 * fVar40 + fVar29;
      do {
        uVar14 = *(ushort *)(param_2 + 2) * uVar17;
        uVar9 = (ulonglong)uVar17;
        uVar17 = uVar17 + 1;
        *(undefined1 (*) [16])(pfVar1 + uVar9 * 4) =
             ZEXT416(*(uint *)(lVar22 + (ulonglong)uVar14 * 4));
        pfVar12 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        fVar25 = pfVar12[2];
        fVar24 = pfVar12[3];
        fVar27 = pfVar12[1] + fVar24;
        pfVar11 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        *pfVar11 = fVar27 + *pfVar12 + fVar25;
        pfVar11[1] = fVar27 + fVar27;
        pfVar11[2] = fVar27 + fVar25 + fVar25;
        pfVar11[3] = fVar27 + fVar24 + fVar24;
      } while (uVar17 < uVar6);
      fVar36 = fVar36 + local_128;
      fVar35 = fVar35 + (fVar2 - fVar3) * (1.0 / (float)uVar5);
      uVar9 = 0;
      fVar27 = fVar44 + fVar34 + fVar40 + fVar42 + fVar32 + fVar38 +
               fVar43 + fVar33 + fVar39 + fVar41 + fVar31 + fVar37;
      do {
        iVar15 = (int)uVar9;
        pfVar12 = pfVar1 + uVar9 * 4;
        fVar25 = pfVar12[1];
        fVar24 = pfVar12[2];
        fVar28 = pfVar12[3];
        fVar23 = *pfVar12 * fVar35 +
                 *(float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238) * fVar36;
        pfVar12 = (float *)((longlong)&local_238 + uVar9 * 0x10 + lVar8 + 0x238);
        *pfVar12 = fVar23;
        pfVar12[1] = fVar25;
        pfVar12[2] = fVar24;
        pfVar12[3] = fVar28;
        uVar14 = iVar15 + 1;
        uVar9 = (ulonglong)uVar14;
        *(float *)(lVar22 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar15) * 4) = fVar23;
      } while (uVar14 < uVar6);
      fVar28 = fVar27 * local_118;
      fVar23 = fVar27 * fStack_114;
      fVar29 = fVar27 * fStack_110;
      fVar27 = fVar27 * fStack_10c;
      lVar22 = lVar22 + 4;
      fVar24 = *pfVar1;
      if (1 < uVar6) {
        pfVar12 = (float *)((longlong)&local_228 + lVar7);
        uVar9 = (ulonglong)uVar18;
        do {
          fVar24 = fVar24 + *pfVar12;
          pfVar12 = pfVar12 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      fVar30 = (fVar4 * fVar30 + fVar24) - fVar26;
      fVar25 = fVar30;
      if (local_1a0 != (float *)0x0) {
        fVar25 = *pfVar21;
        pfVar12 = pfVar21 + 1;
        *pfVar21 = fVar30;
        pfVar21 = local_1a0;
        if (pfVar12 != local_198) {
          pfVar21 = pfVar12;
        }
      }
      fVar26 = local_108 * fVar25 + local_f8 * fVar45;
      *local_1b0 = fVar26 + fVar23 + fVar32;
      local_1b0[1] = fVar26 + fVar29 + fVar33;
      local_1b0[2] = fVar26 + fVar27 + fVar34;
      local_1b0[3] = fVar26 + fVar41 + fVar28;
      pfVar12 = local_1e8;
      if (local_1b0 + 4 < local_238) {
        pfVar12 = local_1b0 + 4;
      }
      *local_1c0 = fVar26 + fVar42 + fVar23;
      local_1c0[1] = fVar26 + fVar43 + fVar29;
      local_1c0[2] = fVar26 + fVar44 + fVar27;
      local_1c0[3] = fVar26 + fVar37 + fVar28;
      pfVar11 = local_1c0 + 4;
      *pfVar16 = fVar26 + fVar38 + fVar23;
      pfVar16[1] = fVar26 + fVar39 + fVar29;
      pfVar16[2] = fVar26 + fVar40 + fVar27;
      pfVar16[3] = fVar26 + fVar28 + fVar31;
      local_1c0 = local_1d0;
      if (pfVar11 < local_1e0) {
        local_1c0 = pfVar11;
      }
      local_1b0 = pfVar12;
      pfVar11 = pfVar16 + 4;
      pfVar16 = local_1c8;
      if (pfVar11 < local_1d8) {
        pfVar16 = pfVar11;
      }
      local_res10 = local_res10 - 1;
      fVar26 = fVar24;
      fVar45 = fVar25;
      local_1b8 = pfVar16;
    } while (local_res10 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar25;
  *(float *)(param_1 + 0x230) = fVar24;
  *(float *)(param_1 + 0x234) = fVar30;
  *(float **)(param_1 + 0x30) = pfVar21;
  *(float **)(param_1 + 0x140) = local_1b8;
  *(float **)(param_1 + 0x98) = local_230;
  *(float **)(param_1 + 0xa0) = local_228;
  *(float **)(param_1 + 0xa8) = pfStack_220;
  *(float **)(param_1 + 0xb0) = local_218;
  *(float **)(param_1 + 0xb8) = pfStack_210;
  *(float **)(param_1 + 0xc0) = local_208;
  *(float **)(param_1 + 200) = local_res18;
  *(float **)(param_1 + 0xd0) = local_200;
  *(float **)(param_1 + 0xd8) = local_1f8;
  *(float **)(param_1 + 0xe0) = local_1f0;
  *(float *)(param_1 + 0x1f0) = fVar31;
  *(float *)(param_1 + 500) = fVar32;
  *(float *)(param_1 + 0x1f8) = fVar33;
  *(float *)(param_1 + 0x1fc) = fVar34;
  *(float *)(param_1 + 0x200) = fVar41;
  *(float *)(param_1 + 0x204) = fVar42;
  *(float *)(param_1 + 0x208) = fVar43;
  *(float *)(param_1 + 0x20c) = fVar44;
  *(float *)(param_1 + 0x210) = fVar37;
  *(float *)(param_1 + 0x214) = fVar38;
  *(float *)(param_1 + 0x218) = fVar39;
  *(float *)(param_1 + 0x21c) = fVar40;
  *(float **)(param_1 + 0xe8) = local_res20;
  *(float **)(param_1 + 0x130) = pfVar12;
  *(float **)(param_1 + 0x138) = local_1c0;
  *(float **)(param_1 + 0x90) = pfVar19;
  return;
}



// FUNCTION 143202bd0 ProcessN16 body=3143 status=ok
// SIG undefined ProcessN16(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkFDNReverbFX::ProcessN16(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  uint local_res10;
  float *local_res18;
  float *local_res20;
  undefined8 auStack_2d0 [5];
  undefined8 local_2a8;
  undefined8 local_2a0;
  float *local_298;
  float *pfStack_290;
  float *local_288;
  float *pfStack_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
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
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  local_118 = *(float *)(param_1 + 0x44);
  pfVar10 = *(float **)(param_1 + 0x130);
  lVar20 = *param_2;
  pfVar19 = *(float **)(param_1 + 0x30);
  fStack_114 = local_118;
  fStack_110 = local_118;
  fStack_10c = local_118;
  local_108 = *(float *)(param_1 + 0x48);
  fStack_104 = local_108;
  fStack_100 = local_108;
  fStack_fc = local_108;
  fVar2 = *(float *)(param_1 + 0x238);
  fVar29 = *(float *)(param_1 + 0x23c);
  fVar30 = *(float *)(param_1 + 0x240);
  fVar23 = *(float *)(param_1 + 0x230);
  fVar28 = *(float *)(param_1 + 0x234);
  local_1e8 = pfVar10;
  local_128 = -2.0 / (float)*(uint *)(lVar4 + 0x18);
  fStack_124 = local_128;
  fStack_120 = local_128;
  fStack_11c = local_128;
  local_1d8 = *(float **)(param_1 + 0x28);
  local_1d0 = *(float **)(param_1 + 0x38);
  local_238 = *(float **)(param_1 + 0x110);
  local_218 = *(float **)(param_1 + 0x118);
  local_210 = *(float **)(param_1 + 0x120);
  local_208 = *(float **)(param_1 + 0x128);
  local_2a0 = *(float **)(param_1 + 0x150);
  local_230 = *(float **)(param_1 + 0x158);
  local_228 = *(float **)(param_1 + 0x160);
  local_220 = *(float **)(param_1 + 0x168);
  local_200 = *(float **)(param_1 + 0x138);
  fVar27 = (*(float *)(lVar4 + 0x10) - *(float *)(param_1 + 0x23c)) *
           (1.0 / (float)*(ushort *)(param_2 + 2));
  local_138 = (*(float *)(lVar4 + 0x14) - *(float *)(param_1 + 0x240)) *
              (1.0 / (float)*(ushort *)(param_2 + 2));
  local_f8 = fVar27;
  fStack_f4 = fVar27;
  fStack_f0 = fVar27;
  fStack_ec = fVar27;
  fStack_134 = local_138;
  fStack_130 = local_138;
  fStack_12c = local_138;
  local_1c8 = *(float *)(param_1 + 0x4c);
  fStack_1c4 = local_1c8;
  fStack_1c0 = local_1c8;
  fStack_1bc = local_1c8;
  fVar31 = *(float *)(param_1 + 0x1f0);
  fVar32 = *(float *)(param_1 + 500);
  fVar33 = *(float *)(param_1 + 0x1f8);
  fVar34 = *(float *)(param_1 + 0x1fc);
  fVar39 = *(float *)(param_1 + 0x200);
  fVar40 = *(float *)(param_1 + 0x204);
  fVar41 = *(float *)(param_1 + 0x208);
  fVar42 = *(float *)(param_1 + 0x20c);
  fVar43 = *(float *)(param_1 + 0x210);
  fVar44 = *(float *)(param_1 + 0x214);
  fVar45 = *(float *)(param_1 + 0x218);
  fVar46 = *(float *)(param_1 + 0x21c);
  fVar35 = *(float *)(param_1 + 0x220);
  fVar36 = *(float *)(param_1 + 0x224);
  fVar37 = *(float *)(param_1 + 0x228);
  fVar38 = *(float *)(param_1 + 0x22c);
  uVar3 = *(uint *)(param_1 + 0x254);
  local_1f0 = *(float **)(param_1 + 0x140);
  local_1f8 = *(float **)(param_1 + 0x148);
  local_1e0 = *(float **)(param_1 + 0x90);
  local_298 = *(float **)(param_1 + 0x98);
  pfStack_290 = *(float **)(param_1 + 0xa0);
  local_288 = *(float **)(param_1 + 0xa8);
  pfStack_280 = *(float **)(param_1 + 0xb0);
  local_278 = *(float **)(param_1 + 0xb8);
  local_270 = *(float **)(param_1 + 0xc0);
  local_res18 = *(float **)(param_1 + 200);
  local_268 = *(float **)(param_1 + 0xd0);
  local_260 = *(float **)(param_1 + 0xd8);
  local_1b8 = *(undefined8 *)(param_1 + 0x170);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x178);
  local_258 = *(float **)(param_1 + 0xe0);
  local_res20 = *(float **)(param_1 + 0xe8);
  local_198 = *(undefined8 *)(param_1 + 0x180);
  uStack_190 = *(undefined8 *)(param_1 + 0x188);
  local_178 = *(undefined8 *)(param_1 + 400);
  uStack_170 = *(undefined8 *)(param_1 + 0x198);
  local_250 = *(float **)(param_1 + 0xf0);
  local_158 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_150 = *(undefined8 *)(param_1 + 0x1a8);
  local_248 = *(float **)(param_1 + 0xf8);
  local_1a8 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x1b8);
  local_240 = *(float **)(param_1 + 0x100);
  local_188 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_180 = *(undefined8 *)(param_1 + 0x1c8);
  local_2a8 = *(float **)(param_1 + 0x108);
  local_168 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_160 = *(undefined8 *)(param_1 + 0x1d8);
  local_res10 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_148 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_140 = *(undefined8 *)(param_1 + 0x1e8);
  if (*(int *)(lVar4 + 0x20) == 0) {
    pfVar18 = (float *)(&DAT_145ae48d0 + (ulonglong)(uVar3 - 1) * 0x40);
  }
  else {
    pfVar18 = (float *)&DAT_145ae4cd0;
  }
  uVar11 = (ulonglong)uVar3 * 0x10;
  uVar7 = uVar11 + 0xf;
  if (uVar7 <= uVar11) {
    uVar7 = 0xffffffffffffff0;
  }
  lVar4 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = uVar11 + 0xf;
  pfVar1 = (float *)((longlong)&local_2a8 + lVar4);
  if (uVar7 <= uVar11) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_2d0 + lVar4) = 0x143202fa8;
  lVar6 = (lVar4 - (uVar7 & 0xfffffffffffffff0)) + -0x2a8;
  pfVar17 = local_1e0;
  if (local_res10 != 0) {
    uVar16 = uVar3 - 1;
    pfVar14 = local_1f0;
    fVar24 = fVar23;
    do {
      pfVar10 = pfVar17 + 4;
      fVar23 = *local_298;
      fVar26 = *pfVar17;
      fVar25 = *pfStack_290;
      pfVar17 = local_238;
      if (pfVar10 < local_2a0) {
        pfVar17 = pfVar10;
      }
      pfVar10 = local_238 + 1;
      if (local_298 + 4 < local_2a0) {
        pfVar10 = local_298 + 4;
      }
      local_298 = pfVar10;
      pfVar10 = local_238 + 2;
      if (pfStack_290 + 4 < local_2a0) {
        pfVar10 = pfStack_290 + 4;
      }
      pfStack_290 = pfVar10;
      pfVar10 = local_238 + 3;
      if (local_288 + 4 < local_2a0) {
        pfVar10 = local_288 + 4;
      }
      fVar31 = fVar26 * (float)local_1b8 + (float)local_1a8 * fVar31;
      fVar32 = fVar23 * local_1b8._4_4_ + local_1a8._4_4_ * fVar32;
      fVar33 = fVar25 * (float)uStack_1b0 + (float)uStack_1a0 * fVar33;
      fVar34 = *local_288 * uStack_1b0._4_4_ + uStack_1a0._4_4_ * fVar34;
      local_288 = pfVar10;
      uVar7 = 0;
      do {
        lVar8 = uVar7 * 0x40;
        uVar12 = (int)uVar7 + 1;
        fVar23 = *(float *)(&UNK_145ae48d4 + lVar8);
        fVar26 = *(float *)(&UNK_145ae48d8 + lVar8);
        fVar25 = *(float *)(&UNK_145ae48dc + lVar8);
        pfVar10 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        *pfVar10 = *(float *)(&DAT_145ae48d0 + lVar8) * fVar31;
        pfVar10[1] = fVar23 * fVar32;
        pfVar10[2] = fVar26 * fVar33;
        pfVar10[3] = fVar25 * fVar34;
        uVar7 = (ulonglong)uVar12;
      } while (uVar12 < uVar16);
      fVar23 = pfVar18[1];
      fVar26 = pfVar18[2];
      fVar25 = pfVar18[3];
      pfVar10 = (float *)((longlong)&local_2a8 + (ulonglong)uVar12 * 0x10 + lVar6 + 0x2a8);
      *pfVar10 = *pfVar18 * fVar31;
      pfVar10[1] = fVar23 * fVar32;
      pfVar10[2] = fVar26 * fVar33;
      pfVar10[3] = fVar25 * fVar34;
      fVar23 = *pfStack_280;
      fVar26 = *local_278;
      fVar25 = *local_270;
      fVar22 = *local_res18;
      pfVar10 = local_218;
      if (pfStack_280 + 4 < local_230) {
        pfVar10 = pfStack_280 + 4;
      }
      pfStack_280 = pfVar10;
      pfVar10 = local_218 + 1;
      if (local_278 + 4 < local_230) {
        pfVar10 = local_278 + 4;
      }
      local_278 = pfVar10;
      pfVar10 = local_218 + 2;
      if (local_270 + 4 < local_230) {
        pfVar10 = local_270 + 4;
      }
      pfVar9 = local_res18 + 4;
      local_270 = pfVar10;
      local_res18 = local_218 + 3;
      if (pfVar9 < local_230) {
        local_res18 = pfVar9;
      }
      fVar39 = fVar23 * (float)local_198 + (float)local_188 * fVar39;
      fVar40 = fVar26 * local_198._4_4_ + local_188._4_4_ * fVar40;
      fVar41 = fVar25 * (float)uStack_190 + (float)uStack_180 * fVar41;
      fVar42 = fVar22 * uStack_190._4_4_ + uStack_180._4_4_ * fVar42;
      uVar7 = 0;
      do {
        lVar8 = uVar7 * 0x40;
        uVar12 = (int)uVar7 + 1;
        fVar23 = *(float *)(&UNK_145ae48e4 + lVar8);
        fVar26 = *(float *)(&UNK_145ae48e8 + lVar8);
        fVar25 = *(float *)(&UNK_145ae48ec + lVar8);
        pfVar10 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        fVar22 = pfVar10[1];
        fVar21 = pfVar10[2];
        fVar5 = pfVar10[3];
        pfVar9 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        *pfVar9 = *(float *)(&DAT_145ae48e0 + lVar8) * fVar39 + *pfVar10;
        pfVar9[1] = fVar23 * fVar40 + fVar22;
        pfVar9[2] = fVar26 * fVar41 + fVar21;
        pfVar9[3] = fVar25 * fVar42 + fVar5;
        uVar7 = (ulonglong)uVar12;
      } while (uVar12 < uVar16);
      fVar23 = pfVar18[5];
      fVar26 = pfVar18[6];
      fVar25 = pfVar18[7];
      pfVar10 = (float *)((longlong)&local_2a8 + (ulonglong)uVar12 * 0x10 + lVar6 + 0x2a8);
      fVar22 = pfVar10[1];
      fVar21 = pfVar10[2];
      fVar5 = pfVar10[3];
      pfVar9 = (float *)((longlong)&local_2a8 + (ulonglong)uVar12 * 0x10 + lVar6 + 0x2a8);
      *pfVar9 = pfVar18[4] * fVar39 + *pfVar10;
      pfVar9[1] = fVar23 * fVar40 + fVar22;
      pfVar9[2] = fVar26 * fVar41 + fVar21;
      pfVar9[3] = fVar25 * fVar42 + fVar5;
      fVar23 = *local_268;
      fVar26 = *local_260;
      fVar25 = *local_258;
      fVar22 = *local_res20;
      pfVar10 = local_210;
      if (local_268 + 4 < local_228) {
        pfVar10 = local_268 + 4;
      }
      local_268 = pfVar10;
      pfVar10 = local_210 + 1;
      if (local_260 + 4 < local_228) {
        pfVar10 = local_260 + 4;
      }
      local_260 = pfVar10;
      pfVar10 = local_210 + 2;
      if (local_258 + 4 < local_228) {
        pfVar10 = local_258 + 4;
      }
      pfVar9 = local_res20 + 4;
      local_258 = pfVar10;
      local_res20 = local_210 + 3;
      if (pfVar9 < local_228) {
        local_res20 = pfVar9;
      }
      fVar43 = fVar23 * (float)local_178 + (float)local_168 * fVar43;
      fVar44 = fVar26 * local_178._4_4_ + local_168._4_4_ * fVar44;
      fVar45 = fVar25 * (float)uStack_170 + (float)uStack_160 * fVar45;
      fVar46 = fVar22 * uStack_170._4_4_ + uStack_160._4_4_ * fVar46;
      uVar7 = 0;
      do {
        lVar8 = uVar7 * 0x40;
        uVar12 = (int)uVar7 + 1;
        fVar23 = *(float *)(&UNK_145ae48f4 + lVar8);
        fVar26 = *(float *)(&UNK_145ae48f8 + lVar8);
        fVar25 = *(float *)(&UNK_145ae48fc + lVar8);
        pfVar10 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        fVar22 = pfVar10[1];
        fVar21 = pfVar10[2];
        fVar5 = pfVar10[3];
        pfVar9 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        *pfVar9 = *(float *)(&DAT_145ae48f0 + lVar8) * fVar43 + *pfVar10;
        pfVar9[1] = fVar23 * fVar44 + fVar22;
        pfVar9[2] = fVar26 * fVar45 + fVar21;
        pfVar9[3] = fVar25 * fVar46 + fVar5;
        uVar7 = (ulonglong)uVar12;
      } while (uVar12 < uVar16);
      fVar23 = pfVar18[9];
      fVar26 = pfVar18[10];
      fVar25 = pfVar18[0xb];
      pfVar10 = (float *)((longlong)&local_2a8 + (ulonglong)uVar12 * 0x10 + lVar6 + 0x2a8);
      fVar22 = pfVar10[1];
      fVar21 = pfVar10[2];
      fVar5 = pfVar10[3];
      pfVar9 = (float *)((longlong)&local_2a8 + (ulonglong)uVar12 * 0x10 + lVar6 + 0x2a8);
      *pfVar9 = fVar43 * pfVar18[8] + *pfVar10;
      pfVar9[1] = fVar44 * fVar23 + fVar22;
      pfVar9[2] = fVar45 * fVar26 + fVar21;
      pfVar9[3] = fVar46 * fVar25 + fVar5;
      fVar23 = *local_250;
      fVar26 = *local_248;
      fVar25 = *local_240;
      pfVar10 = local_208;
      if (local_250 + 4 < local_220) {
        pfVar10 = local_250 + 4;
      }
      local_250 = pfVar10;
      pfVar10 = local_208 + 1;
      if (local_248 + 4 < local_220) {
        pfVar10 = local_248 + 4;
      }
      local_248 = pfVar10;
      pfVar10 = local_208 + 2;
      if (local_240 + 4 < local_220) {
        pfVar10 = local_240 + 4;
      }
      local_240 = pfVar10;
      pfVar10 = local_208 + 3;
      if (local_2a8 + 4 < local_220) {
        pfVar10 = local_2a8 + 4;
      }
      fVar35 = fVar23 * (float)local_158 + (float)local_148 * fVar35;
      fVar36 = fVar26 * local_158._4_4_ + local_148._4_4_ * fVar36;
      fVar37 = fVar25 * (float)uStack_150 + (float)uStack_140 * fVar37;
      fVar38 = *local_2a8 * uStack_150._4_4_ + uStack_140._4_4_ * fVar38;
      local_2a8 = pfVar10;
      uVar7 = 0;
      do {
        lVar8 = uVar7 * 0x40;
        uVar12 = (int)uVar7 + 1;
        fVar23 = *(float *)(&UNK_145ae4904 + lVar8);
        fVar26 = *(float *)(&UNK_145ae4908 + lVar8);
        fVar25 = *(float *)(&UNK_145ae490c + lVar8);
        pfVar10 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        fVar22 = pfVar10[1];
        fVar21 = pfVar10[2];
        fVar5 = pfVar10[3];
        pfVar9 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        *pfVar9 = *(float *)(&DAT_145ae4900 + lVar8) * fVar35 + *pfVar10;
        pfVar9[1] = fVar23 * fVar36 + fVar22;
        pfVar9[2] = fVar26 * fVar37 + fVar21;
        pfVar9[3] = fVar25 * fVar38 + fVar5;
        uVar7 = (ulonglong)uVar12;
      } while (uVar12 < uVar16);
      fVar23 = pfVar18[0xd];
      fVar26 = pfVar18[0xe];
      fVar25 = pfVar18[0xf];
      uVar15 = 0;
      pfVar10 = (float *)((longlong)&local_2a8 + (ulonglong)uVar12 * 0x10 + lVar6 + 0x2a8);
      fVar22 = pfVar10[1];
      fVar21 = pfVar10[2];
      fVar5 = pfVar10[3];
      pfVar9 = (float *)((longlong)&local_2a8 + (ulonglong)uVar12 * 0x10 + lVar6 + 0x2a8);
      *pfVar9 = pfVar18[0xc] * fVar35 + *pfVar10;
      pfVar9[1] = fVar23 * fVar36 + fVar22;
      pfVar9[2] = fVar26 * fVar37 + fVar21;
      pfVar9[3] = fVar25 * fVar38 + fVar5;
      do {
        uVar12 = *(ushort *)(param_2 + 2) * uVar15;
        uVar7 = (ulonglong)uVar15;
        uVar15 = uVar15 + 1;
        *(undefined1 (*) [16])(pfVar1 + uVar7 * 4) =
             ZEXT416(*(uint *)(lVar20 + (ulonglong)uVar12 * 4));
        pfVar10 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        fVar23 = pfVar10[2];
        fVar26 = pfVar10[3];
        fVar25 = pfVar10[1] + fVar26;
        pfVar9 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        *pfVar9 = fVar25 + *pfVar10 + fVar23;
        pfVar9[1] = fVar25 + fVar25;
        pfVar9[2] = fVar25 + fVar23 + fVar23;
        pfVar9[3] = fVar25 + fVar26 + fVar26;
      } while (uVar15 < uVar3);
      fVar30 = fVar30 + local_138;
      fVar29 = fVar29 + fVar27;
      uVar7 = 0;
      fVar27 = fVar42 + fVar34 + fVar46 + fVar38 + fVar40 + fVar32 + fVar44 + fVar36 +
               fVar41 + fVar33 + fVar45 + fVar37 + fVar39 + fVar31 + fVar43 + fVar35;
      do {
        iVar13 = (int)uVar7;
        pfVar10 = pfVar1 + uVar7 * 4;
        fVar23 = pfVar10[1];
        fVar26 = pfVar10[2];
        fVar25 = pfVar10[3];
        fVar22 = *pfVar10 * fVar29 +
                 *(float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8) * fVar30;
        pfVar10 = (float *)((longlong)&local_2a8 + uVar7 * 0x10 + lVar6 + 0x2a8);
        *pfVar10 = fVar22;
        pfVar10[1] = fVar23;
        pfVar10[2] = fVar26;
        pfVar10[3] = fVar25;
        uVar12 = iVar13 + 1;
        uVar7 = (ulonglong)uVar12;
        *(float *)(lVar20 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar13) * 4) = fVar22;
      } while (uVar12 < uVar3);
      fVar26 = fVar27 * local_128;
      fVar25 = fVar27 * fStack_124;
      fVar22 = fVar27 * fStack_120;
      fVar27 = fVar27 * fStack_11c;
      lVar20 = lVar20 + 4;
      fVar23 = *pfVar1;
      if (1 < uVar3) {
        pfVar10 = (float *)((longlong)&local_298 + lVar4);
        uVar7 = (ulonglong)uVar16;
        do {
          fVar23 = fVar23 + *pfVar10;
          pfVar10 = pfVar10 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      fVar28 = (fVar2 * fVar28 + fVar23) - fVar24;
      fVar24 = fVar28;
      fStack_1c4 = fVar2;
      if (local_1d8 != (float *)0x0) {
        fVar24 = *pfVar19;
        fStack_1c4 = 0.0;
        pfVar10 = pfVar19 + 1;
        *pfVar19 = fVar28;
        pfVar19 = local_1d8;
        if (pfVar10 != local_1d0) {
          pfVar19 = pfVar10;
        }
      }
      fVar21 = local_108 * local_1c8;
      local_1c8 = fVar24;
      fStack_1c0 = fStack_1c4;
      fStack_1bc = fStack_1c4;
      fVar21 = local_118 * fVar24 + fVar21;
      *local_1e8 = fVar21 + fVar25 + fVar32;
      local_1e8[1] = fVar21 + fVar22 + fVar33;
      local_1e8[2] = fVar21 + fVar27 + fVar34;
      local_1e8[3] = fVar21 + fVar39 + fVar26;
      pfVar10 = local_238;
      if (local_1e8 + 4 < local_2a0) {
        pfVar10 = local_1e8 + 4;
      }
      *local_200 = fVar21 + fVar40 + fVar25;
      local_200[1] = fVar21 + fVar41 + fVar22;
      local_200[2] = fVar21 + fVar42 + fVar27;
      local_200[3] = fVar21 + fVar43 + fVar26;
      pfVar9 = local_200 + 4;
      local_1e8 = pfVar10;
      local_200 = local_218;
      if (pfVar9 < local_230) {
        local_200 = pfVar9;
      }
      *pfVar14 = fVar21 + fVar44 + fVar25;
      pfVar14[1] = fVar21 + fVar45 + fVar22;
      pfVar14[2] = fVar21 + fVar46 + fVar27;
      pfVar14[3] = fVar21 + fVar35 + fVar26;
      pfVar9 = pfVar14 + 4;
      *local_1f8 = fVar21 + fVar36 + fVar25;
      local_1f8[1] = fVar21 + fVar37 + fVar22;
      local_1f8[2] = fVar21 + fVar38 + fVar27;
      local_1f8[3] = fVar21 + fVar26 + fVar31;
      pfVar14 = local_210;
      if (pfVar9 < local_228) {
        pfVar14 = pfVar9;
      }
      pfVar9 = local_1f8 + 4;
      local_1f8 = local_208;
      if (pfVar9 < local_220) {
        local_1f8 = pfVar9;
      }
      local_res10 = local_res10 - 1;
      fVar27 = local_f8;
      fVar24 = fVar23;
      local_1f0 = pfVar14;
    } while (local_res10 != 0);
  }
  *(float *)(param_1 + 0x4c) = local_1c8;
  *(float *)(param_1 + 0x230) = fVar23;
  *(float *)(param_1 + 0x234) = fVar28;
  *(float **)(param_1 + 0x30) = pfVar19;
  *(float **)(param_1 + 0x140) = local_1f0;
  *(float **)(param_1 + 0x98) = local_298;
  *(float **)(param_1 + 0xa0) = pfStack_290;
  *(float **)(param_1 + 0xa8) = local_288;
  *(float **)(param_1 + 0xb0) = pfStack_280;
  *(float **)(param_1 + 0xb8) = local_278;
  *(float **)(param_1 + 0xc0) = local_270;
  *(float **)(param_1 + 200) = local_res18;
  *(float **)(param_1 + 0xd0) = local_268;
  *(float **)(param_1 + 0xd8) = local_260;
  *(float **)(param_1 + 0xe0) = local_258;
  *(float **)(param_1 + 0xe8) = local_res20;
  *(float **)(param_1 + 0xf0) = local_250;
  *(float **)(param_1 + 0xf8) = local_248;
  *(float **)(param_1 + 0x100) = local_240;
  *(float *)(param_1 + 0x1f0) = fVar31;
  *(float *)(param_1 + 500) = fVar32;
  *(float *)(param_1 + 0x1f8) = fVar33;
  *(float *)(param_1 + 0x1fc) = fVar34;
  *(float *)(param_1 + 0x200) = fVar39;
  *(float *)(param_1 + 0x204) = fVar40;
  *(float *)(param_1 + 0x208) = fVar41;
  *(float *)(param_1 + 0x20c) = fVar42;
  *(float *)(param_1 + 0x210) = fVar43;
  *(float *)(param_1 + 0x214) = fVar44;
  *(float *)(param_1 + 0x218) = fVar45;
  *(float *)(param_1 + 0x21c) = fVar46;
  *(float *)(param_1 + 0x220) = fVar35;
  *(float *)(param_1 + 0x224) = fVar36;
  *(float *)(param_1 + 0x228) = fVar37;
  *(float *)(param_1 + 0x22c) = fVar38;
  *(float **)(param_1 + 0x108) = local_2a8;
  *(float **)(param_1 + 0x130) = pfVar10;
  *(float **)(param_1 + 0x138) = local_200;
  *(float **)(param_1 + 0x148) = local_1f8;
  *(float **)(param_1 + 0x90) = pfVar17;
  return;
}



// FUNCTION 143203820 ProcessN4 body=1441 status=ok
// SIG undefined ProcessN4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkFDNReverbFX::ProcessN4(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  longlong lVar13;
  float *pfVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  float *pfVar22;
  longlong lVar23;
  uint uVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint local_res10;
  undefined8 auStack_1a0 [5];
  undefined8 local_178;
  undefined8 local_170;
  float *local_168;
  float *pfStack_160;
  float *local_158;
  float fStack_150;
  float fStack_14c;
  float *local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  float *local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_158._0_4_ = *(float *)(param_1 + 0x44);
  lVar9 = *(longlong *)(param_1 + 0x10);
  pfVar18 = *(float **)(param_1 + 0x90);
  pfVar25 = *(float **)(param_1 + 0x98);
  pfVar22 = *(float **)(param_1 + 0xa0);
  uVar8 = *(uint *)(param_1 + 0x254);
  lVar23 = *param_2;
  fVar31 = *(float *)(param_1 + 0x1f0);
  fVar32 = *(float *)(param_1 + 500);
  fVar33 = *(float *)(param_1 + 0x1f8);
  fVar34 = *(float *)(param_1 + 0x1fc);
  fVar35 = *(float *)(param_1 + 0x234);
  fVar2 = *(float *)(param_1 + 0x238);
  fVar36 = *(float *)(param_1 + 0x23c);
  fVar37 = *(float *)(param_1 + 0x240);
  fVar30 = *(float *)(param_1 + 0x4c);
  fVar27 = *(float *)(param_1 + 0x230);
  fVar3 = *(float *)(lVar9 + 0x10);
  fVar4 = *(float *)(param_1 + 0x23c);
  fVar5 = *(float *)(lVar9 + 0x14);
  fVar6 = *(float *)(param_1 + 0x240);
  fStack_150 = local_158._0_4_;
  fStack_14c = local_158._0_4_;
  local_118 = *(float *)(param_1 + 0x48);
  fStack_114 = local_118;
  fStack_110 = local_118;
  fStack_10c = local_118;
  uVar7 = *(ushort *)(param_2 + 2);
  fVar39 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  local_130 = *(float **)(param_1 + 0x28);
  local_178 = *(float **)(param_1 + 0x30);
  local_128 = *(float **)(param_1 + 0x38);
  pfVar10 = *(float **)(param_1 + 0x110);
  pfVar11 = *(float **)(param_1 + 0x150);
  pfStack_160 = *(float **)(param_1 + 0x130);
  local_168 = *(float **)(param_1 + 0xa8);
  local_res10 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_108 = *(undefined8 *)(param_1 + 0x170);
  uStack_100 = *(undefined8 *)(param_1 + 0x178);
  local_f8 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(int *)(lVar9 + 0x20) == 0) {
    local_170 = (float *)(&DAT_145ae48d0 + (ulonglong)(uVar8 - 1) * 0x40);
  }
  else {
    local_170 = (float *)&DAT_145ae4cd0;
  }
  uVar19 = (ulonglong)uVar8 * 0x10;
  uVar16 = uVar19 + 0xf;
  if (uVar16 <= uVar19) {
    uVar16 = 0xffffffffffffff0;
  }
  lVar9 = -(uVar16 & 0xfffffffffffffff0);
  uVar16 = uVar19 + 0xf;
  pfVar1 = (float *)((longlong)&local_178 + lVar9);
  if (uVar16 <= uVar19) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1a0 + lVar9) = 0x143203a5a;
  fVar15 = local_158._0_4_;
  pfVar14 = local_170;
  lVar13 = (lVar9 - (uVar16 & 0xfffffffffffffff0)) + -0x178;
  local_158 = pfVar22;
  local_170 = pfVar25;
  if (local_res10 != 0) {
    local_148 = pfVar10 + 1;
    local_140 = pfVar10 + 2;
    local_138 = pfVar10 + 3;
    pfVar25 = local_178;
    fVar28 = fVar27;
    fVar38 = fVar30;
    do {
      fVar30 = *local_170;
      fVar27 = *local_158;
      local_178 = pfVar10;
      if (pfVar18 + 4 < pfVar11) {
        local_178 = pfVar18 + 4;
      }
      pfVar22 = local_148;
      if (local_170 + 4 < pfVar11) {
        pfVar22 = local_170 + 4;
      }
      fVar29 = *local_168;
      local_170 = pfVar22;
      pfVar22 = local_140;
      if (local_158 + 4 < pfVar11) {
        pfVar22 = local_158 + 4;
      }
      local_158 = pfVar22;
      pfVar22 = local_138;
      if (local_168 + 4 < pfVar11) {
        pfVar22 = local_168 + 4;
      }
      local_168 = pfVar22;
      fVar31 = *pfVar18 * (float)local_108 + fVar31 * (float)local_f8;
      fVar32 = fVar30 * local_108._4_4_ + fVar32 * local_f8._4_4_;
      fVar33 = fVar27 * (float)uStack_100 + fVar33 * (float)uStack_f0;
      fVar34 = fVar29 * uStack_100._4_4_ + fVar34 * uStack_f0._4_4_;
      uVar16 = 0;
      do {
        lVar17 = uVar16 * 0x40;
        uVar20 = (int)uVar16 + 1;
        fVar30 = *(float *)(&UNK_145ae48d4 + lVar17);
        fVar27 = *(float *)(&UNK_145ae48d8 + lVar17);
        fVar29 = *(float *)(&UNK_145ae48dc + lVar17);
        pfVar18 = (float *)((longlong)&local_178 + uVar16 * 0x10 + lVar13 + 0x178);
        *pfVar18 = *(float *)(&DAT_145ae48d0 + lVar17) * fVar31;
        pfVar18[1] = fVar30 * fVar32;
        pfVar18[2] = fVar27 * fVar33;
        pfVar18[3] = fVar29 * fVar34;
        uVar16 = (ulonglong)uVar20;
      } while (uVar20 < uVar8 - 1);
      fVar30 = pfVar14[1];
      fVar27 = pfVar14[2];
      fVar29 = pfVar14[3];
      uVar24 = 0;
      pfVar18 = (float *)((longlong)&local_178 + (ulonglong)uVar20 * 0x10 + lVar13 + 0x178);
      *pfVar18 = *pfVar14 * fVar31;
      pfVar18[1] = fVar30 * fVar32;
      pfVar18[2] = fVar27 * fVar33;
      pfVar18[3] = fVar29 * fVar34;
      do {
        uVar20 = *(ushort *)(param_2 + 2) * uVar24;
        uVar16 = (ulonglong)uVar24;
        uVar24 = uVar24 + 1;
        *(undefined1 (*) [16])(pfVar1 + uVar16 * 4) =
             ZEXT416(*(uint *)(lVar23 + (ulonglong)uVar20 * 4));
        pfVar18 = (float *)((longlong)&local_178 + uVar16 * 0x10 + lVar13 + 0x178);
        fVar30 = pfVar18[2];
        fVar27 = pfVar18[3];
        fVar29 = pfVar18[1] + fVar27;
        pfVar22 = (float *)((longlong)&local_178 + uVar16 * 0x10 + lVar13 + 0x178);
        *pfVar22 = fVar29 + *pfVar18 + fVar30;
        pfVar22[1] = fVar29 + fVar29;
        pfVar22[2] = fVar29 + fVar30 + fVar30;
        pfVar22[3] = fVar29 + fVar27 + fVar27;
      } while (uVar24 < uVar8);
      fVar36 = fVar36 + (fVar3 - fVar4) * (1.0 / (float)uVar7);
      fVar37 = fVar37 + (fVar5 - fVar6) * (1.0 / (float)uVar7);
      uVar16 = 0;
      fVar29 = fVar34 + fVar32 + fVar33 + fVar31;
      do {
        iVar21 = (int)uVar16;
        pfVar18 = pfVar1 + uVar16 * 4;
        fVar30 = pfVar18[1];
        fVar27 = pfVar18[2];
        fVar12 = pfVar18[3];
        fVar26 = *pfVar18 * fVar36 +
                 *(float *)((longlong)&local_178 + uVar16 * 0x10 + lVar13 + 0x178) * fVar37;
        pfVar18 = (float *)((longlong)&local_178 + uVar16 * 0x10 + lVar13 + 0x178);
        *pfVar18 = fVar26;
        pfVar18[1] = fVar30;
        pfVar18[2] = fVar27;
        pfVar18[3] = fVar12;
        uVar20 = iVar21 + 1;
        uVar16 = (ulonglong)uVar20;
        *(float *)(lVar23 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar21) * 4) = fVar26;
      } while (uVar20 < uVar8);
      fVar27 = *pfVar1;
      lVar23 = lVar23 + 4;
      if (1 < uVar8) {
        pfVar18 = (float *)((longlong)&local_168 + lVar9);
        uVar16 = (ulonglong)(uVar8 - 1);
        do {
          fVar27 = fVar27 + *pfVar18;
          pfVar18 = pfVar18 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      fVar35 = (fVar2 * fVar35 + fVar27) - fVar28;
      fVar30 = fVar35;
      if (local_130 != (float *)0x0) {
        fVar30 = *pfVar25;
        pfVar18 = pfVar25 + 1;
        *pfVar25 = fVar35;
        pfVar25 = local_130;
        if (pfVar18 != local_128) {
          pfVar25 = pfVar18;
        }
      }
      pfVar18 = pfStack_160 + 4;
      fVar28 = fVar15 * fVar30 + local_118 * fVar38;
      *pfStack_160 = fVar28 + fVar29 * fVar39 + fVar32;
      pfStack_160[1] = fVar28 + fVar29 * fVar39 + fVar33;
      pfStack_160[2] = fVar28 + fVar29 * fVar39 + fVar34;
      pfStack_160[3] = fVar28 + fVar29 * fVar39 + fVar31;
      pfStack_160 = pfVar10;
      if (pfVar18 < pfVar11) {
        pfStack_160 = pfVar18;
      }
      local_res10 = local_res10 - 1;
      pfVar18 = local_178;
      fVar28 = fVar27;
      fVar38 = fVar30;
      local_178 = pfVar25;
    } while (local_res10 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar30;
  *(float *)(param_1 + 0x230) = fVar27;
  *(float *)(param_1 + 0x234) = fVar35;
  *(float **)(param_1 + 0x30) = local_178;
  *(float *)(param_1 + 0x1f0) = fVar31;
  *(float *)(param_1 + 500) = fVar32;
  *(float *)(param_1 + 0x1f8) = fVar33;
  *(float *)(param_1 + 0x1fc) = fVar34;
  *(float **)(param_1 + 0x130) = pfStack_160;
  *(float **)(param_1 + 0x90) = pfVar18;
  *(float **)(param_1 + 0x98) = local_170;
  *(float **)(param_1 + 0xa0) = local_158;
  *(float **)(param_1 + 0xa8) = local_168;
  return;
}



// FUNCTION 143203dd0 ProcessN8 body=1878 status=ok
// SIG undefined ProcessN8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkFDNReverbFX::ProcessN8(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  float fVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint local_res10;
  float *local_res18;
  undefined8 auStack_1f0 [5];
  undefined8 local_1c8;
  undefined8 local_1c0;
  float *local_1b8;
  float *pfStack_1b0;
  float *local_1a8;
  float *pfStack_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float *local_180;
  float *local_178;
  float *local_170;
  float *local_168;
  float *local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  local_108 = *(float *)(param_1 + 0x44);
  pfVar17 = *(float **)(param_1 + 0x138);
  lVar26 = *param_2;
  pfVar25 = *(float **)(param_1 + 0x30);
  pfVar24 = *(float **)(param_1 + 0x130);
  fVar32 = *(float *)(param_1 + 0x234);
  fStack_104 = local_108;
  fStack_100 = local_108;
  fStack_fc = local_108;
  local_f8 = *(float *)(param_1 + 0x48);
  fVar2 = *(float *)(lVar10 + 0x10);
  fVar3 = *(float *)(lVar10 + 0x14);
  fVar4 = *(float *)(param_1 + 0x23c);
  fVar5 = *(float *)(param_1 + 0x240);
  fVar6 = *(float *)(param_1 + 0x238);
  fVar33 = *(float *)(param_1 + 0x23c);
  fVar34 = *(float *)(param_1 + 0x240);
  fVar30 = *(float *)(param_1 + 0x4c);
  fVar28 = *(float *)(param_1 + 0x230);
  fStack_f4 = local_f8;
  fStack_f0 = local_f8;
  fStack_ec = local_f8;
  uVar8 = *(ushort *)(param_2 + 2);
  local_178 = pfVar17;
  local_158 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  fStack_154 = local_158;
  fStack_150 = local_158;
  fStack_14c = local_158;
  local_168 = *(float **)(param_1 + 0x28);
  local_160 = *(float **)(param_1 + 0x38);
  local_1c8 = *(float **)(param_1 + 0x110);
  local_188 = *(float **)(param_1 + 0x118);
  pfVar11 = *(float **)(param_1 + 0x150);
  local_1c0 = *(float **)(param_1 + 0x158);
  local_170 = *(float **)(param_1 + 0x90);
  local_1b8 = *(float **)(param_1 + 0x98);
  pfStack_1b0 = *(float **)(param_1 + 0xa0);
  local_1a8 = *(float **)(param_1 + 0xa8);
  pfStack_1a0 = *(float **)(param_1 + 0xb0);
  local_198 = *(float **)(param_1 + 0xb8);
  local_190 = *(float **)(param_1 + 0xc0);
  local_res18 = *(float **)(param_1 + 200);
  fVar35 = *(float *)(param_1 + 0x1f0);
  fVar36 = *(float *)(param_1 + 500);
  fVar37 = *(float *)(param_1 + 0x1f8);
  fVar38 = *(float *)(param_1 + 0x1fc);
  fVar39 = *(float *)(param_1 + 0x200);
  fVar40 = *(float *)(param_1 + 0x204);
  fVar41 = *(float *)(param_1 + 0x208);
  fVar42 = *(float *)(param_1 + 0x20c);
  uVar9 = *(uint *)(param_1 + 0x254);
  local_148 = *(undefined8 *)(param_1 + 0x170);
  uStack_140 = *(undefined8 *)(param_1 + 0x178);
  local_128 = *(undefined8 *)(param_1 + 0x180);
  uStack_120 = *(undefined8 *)(param_1 + 0x188);
  local_138 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_130 = *(undefined8 *)(param_1 + 0x1b8);
  local_118 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_110 = *(undefined8 *)(param_1 + 0x1c8);
  local_res10 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  if (*(int *)(lVar10 + 0x20) == 0) {
    local_180 = (float *)(&DAT_145ae48d0 + (ulonglong)(uVar9 - 1) * 0x40);
  }
  else {
    local_180 = (float *)&DAT_145ae4cd0;
  }
  uVar18 = (ulonglong)uVar9 * 0x10;
  uVar14 = uVar18 + 0xf;
  if (uVar14 <= uVar18) {
    uVar14 = 0xffffffffffffff0;
  }
  lVar10 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = uVar18 + 0xf;
  pfVar1 = (float *)((longlong)&local_1c8 + lVar10);
  if (uVar14 <= uVar18) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1f0 + lVar10) = 0x14320408b;
  lVar13 = (lVar10 - (uVar14 & 0xfffffffffffffff0)) + -0x1c8;
  pfVar23 = local_170;
  if (local_res10 != 0) {
    uVar22 = uVar9 - 1;
    fVar29 = fVar28;
    fVar43 = fVar30;
    do {
      pfVar17 = pfVar23 + 4;
      fVar30 = *local_1b8;
      fVar28 = *pfVar23;
      fVar31 = *pfStack_1b0;
      pfVar23 = local_1c8;
      if (pfVar17 < pfVar11) {
        pfVar23 = pfVar17;
      }
      pfVar17 = local_1c8 + 1;
      if (local_1b8 + 4 < pfVar11) {
        pfVar17 = local_1b8 + 4;
      }
      local_1b8 = pfVar17;
      pfVar17 = local_1c8 + 2;
      if (pfStack_1b0 + 4 < pfVar11) {
        pfVar17 = pfStack_1b0 + 4;
      }
      pfStack_1b0 = pfVar17;
      pfVar17 = local_1c8 + 3;
      if (local_1a8 + 4 < pfVar11) {
        pfVar17 = local_1a8 + 4;
      }
      fVar35 = fVar28 * (float)local_148 + (float)local_138 * fVar35;
      fVar36 = fVar30 * local_148._4_4_ + local_138._4_4_ * fVar36;
      fVar37 = fVar31 * (float)uStack_140 + (float)uStack_130 * fVar37;
      fVar38 = *local_1a8 * uStack_140._4_4_ + uStack_130._4_4_ * fVar38;
      local_1a8 = pfVar17;
      uVar14 = 0;
      do {
        lVar15 = uVar14 * 0x40;
        uVar19 = (int)uVar14 + 1;
        fVar30 = *(float *)(&UNK_145ae48d4 + lVar15);
        fVar28 = *(float *)(&UNK_145ae48d8 + lVar15);
        fVar31 = *(float *)(&UNK_145ae48dc + lVar15);
        pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar13 + 0x1c8);
        *pfVar17 = *(float *)(&DAT_145ae48d0 + lVar15) * fVar35;
        pfVar17[1] = fVar30 * fVar36;
        pfVar17[2] = fVar28 * fVar37;
        pfVar17[3] = fVar31 * fVar38;
        uVar14 = (ulonglong)uVar19;
      } while (uVar19 < uVar22);
      fVar30 = local_180[1];
      fVar28 = local_180[2];
      fVar31 = local_180[3];
      pfVar17 = (float *)((longlong)&local_1c8 + (ulonglong)uVar19 * 0x10 + lVar13 + 0x1c8);
      *pfVar17 = *local_180 * fVar35;
      pfVar17[1] = fVar30 * fVar36;
      pfVar17[2] = fVar28 * fVar37;
      pfVar17[3] = fVar31 * fVar38;
      fVar30 = *pfStack_1a0;
      fVar28 = *local_198;
      fVar31 = *local_190;
      fVar7 = *local_res18;
      pfVar17 = local_188;
      if (pfStack_1a0 + 4 < local_1c0) {
        pfVar17 = pfStack_1a0 + 4;
      }
      pfStack_1a0 = pfVar17;
      pfVar17 = local_188 + 1;
      if (local_198 + 4 < local_1c0) {
        pfVar17 = local_198 + 4;
      }
      local_198 = pfVar17;
      pfVar17 = local_188 + 2;
      if (local_190 + 4 < local_1c0) {
        pfVar17 = local_190 + 4;
      }
      pfVar16 = local_res18 + 4;
      local_190 = pfVar17;
      local_res18 = local_188 + 3;
      if (pfVar16 < local_1c0) {
        local_res18 = pfVar16;
      }
      fVar39 = fVar30 * (float)local_128 + (float)local_118 * fVar39;
      fVar40 = fVar28 * local_128._4_4_ + local_118._4_4_ * fVar40;
      fVar41 = fVar31 * (float)uStack_120 + (float)uStack_110 * fVar41;
      fVar42 = fVar7 * uStack_120._4_4_ + uStack_110._4_4_ * fVar42;
      uVar14 = 0;
      do {
        lVar15 = uVar14 * 0x40;
        uVar19 = (int)uVar14 + 1;
        fVar30 = *(float *)(&UNK_145ae48e4 + lVar15);
        fVar28 = *(float *)(&UNK_145ae48e8 + lVar15);
        fVar31 = *(float *)(&UNK_145ae48ec + lVar15);
        pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar13 + 0x1c8);
        fVar7 = pfVar17[1];
        fVar27 = pfVar17[2];
        fVar12 = pfVar17[3];
        pfVar16 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar13 + 0x1c8);
        *pfVar16 = *(float *)(&DAT_145ae48e0 + lVar15) * fVar39 + *pfVar17;
        pfVar16[1] = fVar30 * fVar40 + fVar7;
        pfVar16[2] = fVar28 * fVar41 + fVar27;
        pfVar16[3] = fVar31 * fVar42 + fVar12;
        uVar14 = (ulonglong)uVar19;
      } while (uVar19 < uVar22);
      fVar30 = local_180[5];
      fVar28 = local_180[6];
      fVar31 = local_180[7];
      uVar21 = 0;
      pfVar17 = (float *)((longlong)&local_1c8 + (ulonglong)uVar19 * 0x10 + lVar13 + 0x1c8);
      fVar7 = pfVar17[1];
      fVar27 = pfVar17[2];
      fVar12 = pfVar17[3];
      pfVar16 = (float *)((longlong)&local_1c8 + (ulonglong)uVar19 * 0x10 + lVar13 + 0x1c8);
      *pfVar16 = local_180[4] * fVar39 + *pfVar17;
      pfVar16[1] = fVar30 * fVar40 + fVar7;
      pfVar16[2] = fVar28 * fVar41 + fVar27;
      pfVar16[3] = fVar31 * fVar42 + fVar12;
      do {
        uVar19 = *(ushort *)(param_2 + 2) * uVar21;
        uVar14 = (ulonglong)uVar21;
        uVar21 = uVar21 + 1;
        *(undefined1 (*) [16])(pfVar1 + uVar14 * 4) =
             ZEXT416(*(uint *)(lVar26 + (ulonglong)uVar19 * 4));
        pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar13 + 0x1c8);
        fVar30 = pfVar17[2];
        fVar28 = pfVar17[3];
        fVar31 = pfVar17[1] + fVar28;
        pfVar16 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar13 + 0x1c8);
        *pfVar16 = fVar31 + *pfVar17 + fVar30;
        pfVar16[1] = fVar31 + fVar31;
        pfVar16[2] = fVar31 + fVar30 + fVar30;
        pfVar16[3] = fVar31 + fVar28 + fVar28;
      } while (uVar21 < uVar9);
      fVar33 = fVar33 + (fVar2 - fVar4) * (1.0 / (float)uVar8);
      fVar34 = fVar34 + (fVar3 - fVar5) * (1.0 / (float)uVar8);
      uVar14 = 0;
      fVar31 = fVar42 + fVar38 + fVar40 + fVar36 + fVar41 + fVar37 + fVar39 + fVar35;
      do {
        iVar20 = (int)uVar14;
        pfVar17 = pfVar1 + uVar14 * 4;
        fVar30 = pfVar17[1];
        fVar28 = pfVar17[2];
        fVar7 = pfVar17[3];
        fVar27 = *pfVar17 * fVar33 +
                 *(float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar13 + 0x1c8) * fVar34;
        pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar13 + 0x1c8);
        *pfVar17 = fVar27;
        pfVar17[1] = fVar30;
        pfVar17[2] = fVar28;
        pfVar17[3] = fVar7;
        uVar19 = iVar20 + 1;
        uVar14 = (ulonglong)uVar19;
        *(float *)(lVar26 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar20) * 4) = fVar27;
      } while (uVar19 < uVar9);
      lVar26 = lVar26 + 4;
      fVar28 = *pfVar1;
      if (1 < uVar9) {
        pfVar17 = (float *)((longlong)&local_1b8 + lVar10);
        uVar14 = (ulonglong)uVar22;
        do {
          fVar28 = fVar28 + *pfVar17;
          pfVar17 = pfVar17 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      fVar32 = (fVar6 * fVar32 + fVar28) - fVar29;
      fVar30 = fVar32;
      if (local_168 != (float *)0x0) {
        fVar30 = *pfVar25;
        pfVar17 = pfVar25 + 1;
        *pfVar25 = fVar32;
        pfVar25 = local_168;
        if (pfVar17 != local_160) {
          pfVar25 = pfVar17;
        }
      }
      pfVar17 = pfVar24 + 4;
      fVar29 = local_108 * fVar30 + local_f8 * fVar43;
      *pfVar24 = fVar29 + fVar31 * fStack_154 + fVar36;
      pfVar24[1] = fVar29 + fVar31 * fStack_150 + fVar37;
      pfVar24[2] = fVar29 + fVar31 * fStack_14c + fVar38;
      pfVar24[3] = fVar29 + fVar39 + fVar31 * local_158;
      pfVar24 = local_1c8;
      if (pfVar17 < pfVar11) {
        pfVar24 = pfVar17;
      }
      *local_178 = fVar29 + fVar40 + fVar31 * fStack_154;
      local_178[1] = fVar29 + fVar41 + fVar31 * fStack_150;
      local_178[2] = fVar29 + fVar42 + fVar31 * fStack_14c;
      local_178[3] = fVar29 + fVar31 * local_158 + fVar35;
      pfVar17 = local_188;
      if (local_178 + 4 < local_1c0) {
        pfVar17 = local_178 + 4;
      }
      local_res10 = local_res10 - 1;
      local_178 = pfVar17;
      fVar29 = fVar28;
      fVar43 = fVar30;
    } while (local_res10 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar30;
  *(float *)(param_1 + 0x230) = fVar28;
  *(float *)(param_1 + 0x234) = fVar32;
  *(float **)(param_1 + 0x30) = pfVar25;
  *(float **)(param_1 + 0x98) = local_1b8;
  *(float *)(param_1 + 0x1f0) = fVar35;
  *(float *)(param_1 + 500) = fVar36;
  *(float *)(param_1 + 0x1f8) = fVar37;
  *(float *)(param_1 + 0x1fc) = fVar38;
  *(float *)(param_1 + 0x200) = fVar39;
  *(float *)(param_1 + 0x204) = fVar40;
  *(float *)(param_1 + 0x208) = fVar41;
  *(float *)(param_1 + 0x20c) = fVar42;
  *(float **)(param_1 + 200) = local_res18;
  *(float **)(param_1 + 0x130) = pfVar24;
  *(float **)(param_1 + 0x138) = pfVar17;
  *(float **)(param_1 + 0x90) = pfVar23;
  *(float **)(param_1 + 0xa0) = pfStack_1b0;
  *(float **)(param_1 + 0xa8) = local_1a8;
  *(float **)(param_1 + 0xb0) = pfStack_1a0;
  *(float **)(param_1 + 0xb8) = local_198;
  *(float **)(param_1 + 0xc0) = local_190;
  return;
}



// FUNCTION 143204530 ProcessStereo12 body=2209 status=ok
// SIG undefined ProcessStereo12(void)

void CAkFDNReverbFX::ProcessStereo12(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  uint uVar40;
  float *pfVar41;
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
  float fVar64;
  float *local_res18;
  float *local_res20;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x238);
  local_1f0 = *(float **)(param_1 + 0xb8);
  pfVar10 = *(float **)(param_1 + 0x28);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x118);
  pfVar13 = *(float **)(param_1 + 0x120);
  pfVar14 = *(float **)(param_1 + 0x150);
  pfVar15 = *(float **)(param_1 + 0x158);
  pfVar16 = *(float **)(param_1 + 0x160);
  pfVar38 = *(float **)(param_1 + 0x138);
  pfVar39 = *(float **)(param_1 + 0x140);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar64 = *(float *)(param_1 + 0x23c);
  fVar45 = *(float *)(param_1 + 0x4c);
  fVar61 = *(float *)(param_1 + 0x230);
  fVar62 = *(float *)(param_1 + 0x234);
  pfVar41 = *(float **)(param_1 + 0x90);
  local_200 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  pfVar37 = *(float **)(param_1 + 0x130);
  local_228 = *(float **)(param_1 + 0xc0);
  fVar42 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  local_198 = *(float *)(param_1 + 0x240);
  pfVar17 = *(float **)(param_1 + 0x38);
  local_1f8 = *(float **)(param_1 + 0x98);
  local_res18 = *(float **)(param_1 + 0xa0);
  local_res20 = *(float **)(param_1 + 0xa8);
  pfVar35 = *(float **)(param_1 + 0xb0);
  fVar4 = *(float *)(lVar9 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar9 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar36 = *(float **)(param_1 + 0x30);
  local_220 = *(float **)(param_1 + 200);
  uVar26 = *(undefined8 *)(param_1 + 0x180);
  uVar27 = *(undefined8 *)(param_1 + 0x188);
  fVar18 = *(float *)(param_1 + 0x170);
  fVar19 = *(float *)(param_1 + 0x174);
  fVar20 = *(float *)(param_1 + 0x178);
  fVar21 = *(float *)(param_1 + 0x17c);
  fVar22 = *(float *)(param_1 + 0x1b0);
  fVar23 = *(float *)(param_1 + 0x1b4);
  fVar24 = *(float *)(param_1 + 0x1b8);
  fVar25 = *(float *)(param_1 + 0x1bc);
  fVar57 = *(float *)(param_1 + 0x1f0);
  fVar58 = *(float *)(param_1 + 500);
  fVar59 = *(float *)(param_1 + 0x1f8);
  fVar60 = *(float *)(param_1 + 0x1fc);
  fVar43 = *(float *)(param_1 + 0x200);
  fVar46 = *(float *)(param_1 + 0x204);
  fVar48 = *(float *)(param_1 + 0x208);
  fVar50 = *(float *)(param_1 + 0x20c);
  fVar44 = *(float *)(param_1 + 0x210);
  fVar47 = *(float *)(param_1 + 0x214);
  fVar49 = *(float *)(param_1 + 0x218);
  fVar51 = *(float *)(param_1 + 0x21c);
  local_1e8 = *(float **)(param_1 + 0xd0);
  local_218 = *(float **)(param_1 + 0xd8);
  local_210 = *(float **)(param_1 + 0xe0);
  local_208 = *(float **)(param_1 + 0xe8);
  uVar28 = *(undefined8 *)(param_1 + 400);
  uVar29 = *(undefined8 *)(param_1 + 0x198);
  uVar30 = *(undefined8 *)(param_1 + 0x1c0);
  uVar31 = *(undefined8 *)(param_1 + 0x1c8);
  uVar40 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar32 = *(undefined8 *)(param_1 + 0x1d0);
  uVar33 = *(undefined8 *)(param_1 + 0x1d8);
  fVar52 = fVar45;
  fVar63 = fVar61;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar45 = *pfVar41;
      fVar61 = *local_1f8;
      pfVar34 = pfVar41 + 4;
      pfVar41 = pfVar11;
      if (pfVar34 < pfVar14) {
        pfVar41 = pfVar34;
      }
      pfVar34 = local_1f8 + 4;
      fVar53 = *pfVar35;
      local_1f8 = pfVar11 + 1;
      if (pfVar34 < pfVar14) {
        local_1f8 = pfVar34;
      }
      pfVar34 = local_res18 + 4;
      fVar57 = fVar18 * fVar45 + fVar22 * fVar57;
      fVar58 = fVar19 * fVar61 + fVar23 * fVar58;
      fVar59 = fVar20 * *local_res18 + fVar24 * fVar59;
      fVar60 = fVar21 * *local_res20 + fVar25 * fVar60;
      local_res18 = pfVar11 + 2;
      if (pfVar34 < pfVar14) {
        local_res18 = pfVar34;
      }
      pfVar34 = local_res20 + 4;
      local_res20 = pfVar11 + 3;
      if (pfVar34 < pfVar14) {
        local_res20 = pfVar34;
      }
      fVar45 = *local_228;
      fVar61 = *local_1f0;
      pfVar34 = pfVar35 + 4;
      local_178 = (float)uVar30;
      fStack_174 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_170 = (float)uVar31;
      fStack_16c = (float)((ulonglong)uVar31 >> 0x20);
      pfVar35 = pfVar12;
      if (pfVar34 < pfVar15) {
        pfVar35 = pfVar34;
      }
      pfVar34 = local_1f0 + 4;
      local_188 = (float)uVar26;
      fStack_184 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_180 = (float)uVar27;
      fStack_17c = (float)((ulonglong)uVar27 >> 0x20);
      local_1f0 = pfVar12 + 1;
      if (pfVar34 < pfVar15) {
        local_1f0 = pfVar34;
      }
      pfVar34 = local_228 + 4;
      local_228 = pfVar12 + 2;
      if (pfVar34 < pfVar15) {
        local_228 = pfVar34;
      }
      fVar43 = fVar53 * local_188 + local_178 * fVar43;
      fVar46 = fVar61 * fStack_184 + fStack_174 * fVar46;
      fVar48 = fVar45 * fStack_180 + fStack_170 * fVar48;
      fVar50 = *local_220 * fStack_17c + fStack_16c * fVar50;
      pfVar34 = local_220 + 4;
      local_220 = pfVar12 + 3;
      if (pfVar34 < pfVar15) {
        local_220 = pfVar34;
      }
      fVar64 = fVar64 + (fVar4 - fVar5) * (1.0 / (float)uVar8);
      fVar45 = *local_218;
      fVar61 = *local_1e8;
      pfVar34 = local_1e8 + 4;
      fVar53 = *local_210;
      local_1e8 = pfVar13;
      if (pfVar34 < pfVar16) {
        local_1e8 = pfVar34;
      }
      local_158 = (float)uVar32;
      fStack_154 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_150 = (float)uVar33;
      fStack_14c = (float)((ulonglong)uVar33 >> 0x20);
      pfVar34 = local_218 + 4;
      local_168 = (float)uVar28;
      fStack_164 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_160 = (float)uVar29;
      fStack_15c = (float)((ulonglong)uVar29 >> 0x20);
      local_218 = pfVar13 + 1;
      if (pfVar34 < pfVar16) {
        local_218 = pfVar34;
      }
      pfVar34 = local_210 + 4;
      local_210 = pfVar13 + 2;
      if (pfVar34 < pfVar16) {
        local_210 = pfVar34;
      }
      fVar44 = fVar61 * local_168 + local_158 * fVar44;
      fVar47 = fVar45 * fStack_164 + fStack_154 * fVar47;
      fVar49 = fVar53 * fStack_160 + fStack_150 * fVar49;
      fVar51 = *local_208 * fStack_15c + fStack_14c * fVar51;
      pfVar34 = local_208 + 4;
      local_208 = pfVar13 + 3;
      if (pfVar34 < pfVar16) {
        local_208 = pfVar34;
      }
      fVar45 = local_200[*(ushort *)(param_2 + 2)];
      local_198 = local_198 + (fVar6 - fVar7) * (1.0 / (float)uVar8);
      fVar53 = fVar51 + fVar50 + fVar60 + fVar47 + fVar46 + fVar58 +
               fVar49 + fVar48 + fVar59 + fVar44 + fVar43 + fVar57;
      fVar61 = *local_200 + fVar45;
      *local_200 = *local_200 * fVar64 +
                   (fVar47 * -1.0 + fVar58 * -1.0 + fVar46 * -1.0 +
                    fVar51 * -1.0 + fVar60 * -1.0 + fVar50 * -1.0 +
                   fVar44 * 1.0 + fVar57 * 1.0 + fVar43 * 1.0 +
                   fVar49 * 1.0 + fVar59 * 1.0 + fVar48 * 1.0) * local_198;
      fVar54 = fVar53 * fVar42;
      fVar55 = fVar53 * fVar42;
      fVar56 = fVar53 * fVar42;
      fVar53 = fVar53 * fVar42;
      local_200[*(ushort *)(param_2 + 2)] =
           fVar45 * fVar64 +
           (fVar47 * 1.0 + fVar58 * 1.0 + fVar46 * 1.0 +
            fVar51 * -1.0 + fVar60 * -1.0 + fVar50 * -1.0 +
           fVar44 * 1.0 + fVar57 * 1.0 + fVar43 * 1.0 +
           fVar49 * -1.0 + fVar59 * -1.0 + fVar48 * -1.0) * local_198;
      local_200 = local_200 + 1;
      fVar62 = (fVar1 * fVar62 + fVar61) - fVar63;
      fVar45 = fVar62;
      if (pfVar10 != (float *)0x0) {
        fVar45 = *pfVar36;
        pfVar34 = pfVar36 + 1;
        *pfVar36 = fVar62;
        pfVar36 = pfVar10;
        if (pfVar34 != pfVar17) {
          pfVar36 = pfVar34;
        }
      }
      pfVar34 = pfVar37 + 4;
      fVar52 = fVar2 * fVar45 + fVar3 * fVar52;
      *pfVar37 = fVar52 + fVar55 + fVar58;
      pfVar37[1] = fVar52 + fVar56 + fVar59;
      pfVar37[2] = fVar52 + fVar53 + fVar60;
      pfVar37[3] = fVar52 + fVar43 + fVar54;
      pfVar37 = pfVar11;
      if (pfVar34 < pfVar14) {
        pfVar37 = pfVar34;
      }
      *pfVar38 = fVar52 + fVar46 + fVar55;
      pfVar38[1] = fVar52 + fVar48 + fVar56;
      pfVar38[2] = fVar52 + fVar50 + fVar53;
      pfVar38[3] = fVar52 + fVar44 + fVar54;
      pfVar34 = pfVar38 + 4;
      *pfVar39 = fVar52 + fVar47 + fVar55;
      pfVar39[1] = fVar52 + fVar49 + fVar56;
      pfVar39[2] = fVar52 + fVar51 + fVar53;
      pfVar39[3] = fVar52 + fVar54 + fVar57;
      pfVar38 = pfVar12;
      if (pfVar34 < pfVar15) {
        pfVar38 = pfVar34;
      }
      pfVar34 = pfVar39 + 4;
      pfVar39 = pfVar13;
      if (pfVar34 < pfVar16) {
        pfVar39 = pfVar34;
      }
      uVar40 = uVar40 - 1;
      fVar52 = fVar45;
      fVar63 = fVar61;
    } while (uVar40 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar45;
  *(float *)(param_1 + 0x230) = fVar61;
  *(float *)(param_1 + 0x234) = fVar62;
  *(float **)(param_1 + 0x30) = pfVar36;
  *(float **)(param_1 + 0xb0) = pfVar35;
  *(float **)(param_1 + 0xb8) = local_1f0;
  *(float **)(param_1 + 0xc0) = local_228;
  *(float **)(param_1 + 200) = local_220;
  *(float **)(param_1 + 0xd0) = local_1e8;
  *(float **)(param_1 + 0xd8) = local_218;
  *(float **)(param_1 + 0x98) = local_1f8;
  *(float **)(param_1 + 0xe0) = local_210;
  *(float **)(param_1 + 0xa0) = local_res18;
  *(float *)(param_1 + 0x1f0) = fVar57;
  *(float *)(param_1 + 500) = fVar58;
  *(float *)(param_1 + 0x1f8) = fVar59;
  *(float *)(param_1 + 0x1fc) = fVar60;
  *(float *)(param_1 + 0x210) = fVar44;
  *(float *)(param_1 + 0x214) = fVar47;
  *(float *)(param_1 + 0x218) = fVar49;
  *(float *)(param_1 + 0x21c) = fVar51;
  *(float **)(param_1 + 0xe8) = local_208;
  *(float *)(param_1 + 0x200) = fVar43;
  *(float *)(param_1 + 0x204) = fVar46;
  *(float *)(param_1 + 0x208) = fVar48;
  *(float *)(param_1 + 0x20c) = fVar50;
  *(float **)(param_1 + 0x130) = pfVar37;
  *(float **)(param_1 + 0x138) = pfVar38;
  *(float **)(param_1 + 0x140) = pfVar39;
  *(float **)(param_1 + 0x90) = pfVar41;
  *(float **)(param_1 + 0xa8) = local_res20;
  return;
}



// FUNCTION 143204de0 ProcessStereo16 body=2811 status=ok
// SIG undefined ProcessStereo16(void)

void CAkFDNReverbFX::ProcessStereo16(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  uint uVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float *local_res18;
  float *local_res20;
  float *local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_238;
  float *local_230;
  float *local_228;
  float *local_220;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x238);
  local_238 = *(float **)(param_1 + 0x98);
  pfVar10 = *(float **)(param_1 + 0x28);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x118);
  pfVar13 = *(float **)(param_1 + 0x120);
  pfVar14 = *(float **)(param_1 + 0x128);
  pfVar15 = *(float **)(param_1 + 0x150);
  pfVar16 = *(float **)(param_1 + 0x158);
  pfVar45 = *(float **)(param_1 + 0x138);
  pfVar46 = *(float **)(param_1 + 0x140);
  pfVar47 = *(float **)(param_1 + 0x148);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar70 = *(float *)(param_1 + 0x23c);
  fVar51 = *(float *)(param_1 + 0x4c);
  fVar67 = *(float *)(param_1 + 0x230);
  fVar68 = *(float *)(param_1 + 0x234);
  local_250 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  pfVar44 = *(float **)(param_1 + 0x130);
  local_res18 = *(float **)(param_1 + 0xa0);
  fVar48 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  local_res20 = *(float **)(param_1 + 0xa8);
  local_230 = *(float **)(param_1 + 0xb0);
  local_1b8 = *(float *)(param_1 + 0x240);
  pfVar17 = *(float **)(param_1 + 0x38);
  pfVar18 = *(float **)(param_1 + 0x160);
  pfVar19 = *(float **)(param_1 + 0x168);
  pfVar41 = *(float **)(param_1 + 0x90);
  fVar4 = *(float *)(lVar9 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar9 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar42 = *(float **)(param_1 + 0x30);
  uVar28 = *(undefined8 *)(param_1 + 0x180);
  uVar29 = *(undefined8 *)(param_1 + 0x188);
  fVar20 = *(float *)(param_1 + 0x170);
  fVar21 = *(float *)(param_1 + 0x174);
  fVar22 = *(float *)(param_1 + 0x178);
  fVar23 = *(float *)(param_1 + 0x17c);
  fVar24 = *(float *)(param_1 + 0x1b0);
  fVar25 = *(float *)(param_1 + 0x1b4);
  fVar26 = *(float *)(param_1 + 0x1b8);
  fVar27 = *(float *)(param_1 + 0x1bc);
  local_1f8 = *(float *)(param_1 + 0x220);
  fStack_1f4 = *(float *)(param_1 + 0x224);
  fStack_1f0 = *(float *)(param_1 + 0x228);
  fStack_1ec = *(float *)(param_1 + 0x22c);
  fVar63 = *(float *)(param_1 + 0x1f0);
  fVar64 = *(float *)(param_1 + 500);
  fVar65 = *(float *)(param_1 + 0x1f8);
  fVar66 = *(float *)(param_1 + 0x1fc);
  fVar49 = *(float *)(param_1 + 0x200);
  fVar52 = *(float *)(param_1 + 0x204);
  fVar54 = *(float *)(param_1 + 0x208);
  fVar56 = *(float *)(param_1 + 0x20c);
  local_298 = *(float **)(param_1 + 0xb8);
  local_290 = *(float **)(param_1 + 0xc0);
  local_288 = *(float **)(param_1 + 200);
  local_228 = *(float **)(param_1 + 0xd0);
  local_280 = *(float **)(param_1 + 0xd8);
  local_278 = *(float **)(param_1 + 0xe0);
  local_270 = *(float **)(param_1 + 0xe8);
  local_220 = *(float **)(param_1 + 0xf0);
  uVar30 = *(undefined8 *)(param_1 + 400);
  uVar31 = *(undefined8 *)(param_1 + 0x198);
  local_268 = *(float **)(param_1 + 0xf8);
  uVar32 = *(undefined8 *)(param_1 + 0x1a0);
  uVar33 = *(undefined8 *)(param_1 + 0x1a8);
  local_260 = *(float **)(param_1 + 0x100);
  uVar34 = *(undefined8 *)(param_1 + 0x1c0);
  uVar35 = *(undefined8 *)(param_1 + 0x1c8);
  local_258 = *(float **)(param_1 + 0x108);
  uVar36 = *(undefined8 *)(param_1 + 0x1d0);
  uVar37 = *(undefined8 *)(param_1 + 0x1d8);
  uVar38 = *(undefined8 *)(param_1 + 0x1e0);
  uVar39 = *(undefined8 *)(param_1 + 0x1e8);
  uVar43 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_208 = *(undefined8 *)(param_1 + 0x210);
  uStack_200 = *(undefined8 *)(param_1 + 0x218);
  fVar58 = fVar51;
  fVar69 = fVar67;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar51 = *pfVar41;
      fVar67 = *local_238;
      fVar55 = *local_res18;
      pfVar40 = pfVar41 + 4;
      pfVar41 = pfVar11;
      if (pfVar40 < pfVar15) {
        pfVar41 = pfVar40;
      }
      pfVar40 = local_238 + 4;
      local_238 = pfVar11 + 1;
      if (pfVar40 < pfVar15) {
        local_238 = pfVar40;
      }
      pfVar40 = local_res18 + 4;
      local_res18 = pfVar11 + 2;
      if (pfVar40 < pfVar15) {
        local_res18 = pfVar40;
      }
      fVar63 = fVar51 * fVar20 + fVar63 * fVar24;
      fVar64 = fVar67 * fVar21 + fVar64 * fVar25;
      fVar65 = fVar55 * fVar22 + fVar65 * fVar26;
      fVar66 = *local_res20 * fVar23 + fVar66 * fVar27;
      pfVar40 = local_res20 + 4;
      local_res20 = pfVar11 + 3;
      if (pfVar40 < pfVar15) {
        local_res20 = pfVar40;
      }
      fVar51 = *local_230;
      pfVar40 = local_230 + 4;
      fVar67 = *local_298;
      fVar55 = *local_290;
      local_230 = pfVar12;
      if (pfVar40 < pfVar16) {
        local_230 = pfVar40;
      }
      local_198 = (float)uVar34;
      fStack_194 = (float)((ulonglong)uVar34 >> 0x20);
      fStack_190 = (float)uVar35;
      fStack_18c = (float)((ulonglong)uVar35 >> 0x20);
      pfVar40 = local_298 + 4;
      local_1a8 = (float)uVar28;
      fStack_1a4 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_1a0 = (float)uVar29;
      fStack_19c = (float)((ulonglong)uVar29 >> 0x20);
      local_298 = pfVar12 + 1;
      if (pfVar40 < pfVar16) {
        local_298 = pfVar40;
      }
      pfVar40 = local_290 + 4;
      local_290 = pfVar12 + 2;
      if (pfVar40 < pfVar16) {
        local_290 = pfVar40;
      }
      pfVar40 = local_288 + 4;
      fVar49 = fVar51 * local_1a8 + local_198 * fVar49;
      fVar52 = fVar67 * fStack_1a4 + fStack_194 * fVar52;
      fVar54 = fVar55 * fStack_1a0 + fStack_190 * fVar54;
      fVar56 = *local_288 * fStack_19c + fStack_18c * fVar56;
      local_288 = pfVar12 + 3;
      if (pfVar40 < pfVar16) {
        local_288 = pfVar40;
      }
      fVar51 = *local_228;
      fVar67 = *local_280;
      fVar55 = *local_278;
      pfVar40 = local_228 + 4;
      local_228 = pfVar13;
      if (pfVar40 < pfVar18) {
        local_228 = pfVar40;
      }
      local_178 = (float)uVar36;
      fStack_174 = (float)((ulonglong)uVar36 >> 0x20);
      fStack_170 = (float)uVar37;
      fStack_16c = (float)((ulonglong)uVar37 >> 0x20);
      pfVar40 = local_280 + 4;
      local_188 = (float)uVar30;
      fStack_184 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_180 = (float)uVar31;
      fStack_17c = (float)((ulonglong)uVar31 >> 0x20);
      local_280 = pfVar13 + 1;
      if (pfVar40 < pfVar18) {
        local_280 = pfVar40;
      }
      pfVar40 = local_278 + 4;
      local_278 = pfVar13 + 2;
      if (pfVar40 < pfVar18) {
        local_278 = pfVar40;
      }
      fVar50 = fVar51 * local_188 + local_178 * (float)local_208;
      fVar53 = fVar67 * fStack_184 + fStack_174 * local_208._4_4_;
      fVar55 = fVar55 * fStack_180 + fStack_170 * (float)uStack_200;
      fVar57 = *local_270 * fStack_17c + fStack_16c * uStack_200._4_4_;
      pfVar40 = local_270 + 4;
      local_270 = pfVar13 + 3;
      if (pfVar40 < pfVar18) {
        local_270 = pfVar40;
      }
      fVar51 = *local_268;
      fVar59 = *local_220;
      local_208 = CONCAT44(fVar53,fVar50);
      uStack_200 = CONCAT44(fVar57,fVar55);
      fVar60 = *local_260;
      fVar61 = *local_258;
      pfVar40 = local_220 + 4;
      local_220 = pfVar14;
      if (pfVar40 < pfVar19) {
        local_220 = pfVar40;
      }
      pfVar40 = local_268 + 4;
      local_268 = pfVar14 + 1;
      if (pfVar40 < pfVar19) {
        local_268 = pfVar40;
      }
      pfVar40 = local_260 + 4;
      local_260 = pfVar14 + 2;
      if (pfVar40 < pfVar19) {
        local_260 = pfVar40;
      }
      fVar70 = fVar70 + (fVar4 - fVar5) * (1.0 / (float)uVar8);
      local_158 = (float)uVar38;
      fStack_154 = (float)((ulonglong)uVar38 >> 0x20);
      fStack_150 = (float)uVar39;
      fStack_14c = (float)((ulonglong)uVar39 >> 0x20);
      pfVar40 = local_258 + 4;
      local_258 = pfVar14 + 3;
      if (pfVar40 < pfVar19) {
        local_258 = pfVar40;
      }
      local_168 = (float)uVar32;
      fStack_164 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_160 = (float)uVar33;
      fStack_15c = (float)((ulonglong)uVar33 >> 0x20);
      fVar67 = *local_250;
      local_1f8 = fVar59 * local_168 + local_158 * local_1f8;
      fStack_1f4 = fVar51 * fStack_164 + fStack_154 * fStack_1f4;
      fStack_1f0 = fVar60 * fStack_160 + fStack_150 * fStack_1f0;
      fStack_1ec = fVar61 * fStack_15c + fStack_14c * fStack_1ec;
      fVar51 = local_250[*(ushort *)(param_2 + 2)];
      local_1b8 = local_1b8 + (fVar6 - fVar7) * (1.0 / (float)uVar8);
      fVar59 = fStack_1ec + fVar56 + fVar66 + fVar57 + fStack_1f4 + fVar52 + fVar64 + fVar53 +
               fStack_1f0 + fVar54 + fVar65 + fVar55 + local_1f8 + fVar49 + fVar63 + fVar50;
      fVar60 = fVar59 * fVar48;
      fVar61 = fVar59 * fVar48;
      fVar62 = fVar59 * fVar48;
      fVar59 = fVar59 * fVar48;
      *local_250 = fVar67 * fVar70 +
                   (fStack_1f4 * -1.0 + fVar64 * -1.0 + fVar52 * -1.0 + fVar53 * -1.0 +
                    fStack_1ec * -1.0 + fVar66 * -1.0 + fVar56 * -1.0 + fVar57 * -1.0 +
                   local_1f8 * 1.0 + fVar63 * 1.0 + fVar49 * 1.0 + fVar50 * 1.0 +
                   fStack_1f0 * 1.0 + fVar65 * 1.0 + fVar54 * 1.0 + fVar55 * 1.0) * local_1b8;
      local_250[*(ushort *)(param_2 + 2)] =
           fVar51 * fVar70 +
           (fStack_1f4 * 1.0 + fVar64 * 1.0 + fVar52 * 1.0 + fVar53 * 1.0 +
            fStack_1ec * -1.0 + fVar66 * -1.0 + fVar56 * -1.0 + fVar57 * -1.0 +
           local_1f8 * 1.0 + fVar63 * 1.0 + fVar49 * 1.0 + fVar50 * 1.0 +
           fStack_1f0 * -1.0 + fVar65 * -1.0 + fVar54 * -1.0 + fVar55 * -1.0) * local_1b8;
      local_250 = local_250 + 1;
      fVar67 = fVar67 + fVar51;
      fVar68 = (fVar1 * fVar68 + fVar67) - fVar69;
      fVar51 = fVar68;
      if (pfVar10 != (float *)0x0) {
        fVar51 = *pfVar42;
        pfVar40 = pfVar42 + 1;
        *pfVar42 = fVar68;
        pfVar42 = pfVar10;
        if (pfVar40 != pfVar17) {
          pfVar42 = pfVar40;
        }
      }
      pfVar40 = pfVar44 + 4;
      fVar58 = fVar2 * fVar51 + fVar3 * fVar58;
      *pfVar44 = fVar58 + fVar61 + fVar64;
      pfVar44[1] = fVar58 + fVar62 + fVar65;
      pfVar44[2] = fVar58 + fVar59 + fVar66;
      pfVar44[3] = fVar58 + fVar49 + fVar60;
      *pfVar45 = fVar58 + fVar52 + fVar61;
      pfVar45[1] = fVar58 + fVar54 + fVar62;
      pfVar45[2] = fVar58 + fVar56 + fVar59;
      pfVar45[3] = fVar58 + fVar50 + fVar60;
      pfVar44 = pfVar11;
      if (pfVar40 < pfVar15) {
        pfVar44 = pfVar40;
      }
      pfVar40 = pfVar45 + 4;
      *pfVar46 = fVar58 + fVar53 + fVar61;
      pfVar46[1] = fVar58 + fVar55 + fVar62;
      pfVar46[2] = fVar58 + fVar57 + fVar59;
      pfVar46[3] = fVar58 + local_1f8 + fVar60;
      pfVar45 = pfVar12;
      if (pfVar40 < pfVar16) {
        pfVar45 = pfVar40;
      }
      *pfVar47 = fVar58 + fStack_1f4 + fVar61;
      pfVar47[1] = fVar58 + fStack_1f0 + fVar62;
      pfVar47[2] = fVar58 + fStack_1ec + fVar59;
      pfVar47[3] = fVar58 + fVar60 + fVar63;
      pfVar40 = pfVar46 + 4;
      pfVar46 = pfVar13;
      if (pfVar40 < pfVar18) {
        pfVar46 = pfVar40;
      }
      pfVar40 = pfVar47 + 4;
      pfVar47 = pfVar14;
      if (pfVar40 < pfVar19) {
        pfVar47 = pfVar40;
      }
      uVar43 = uVar43 - 1;
      fVar58 = fVar51;
      fVar69 = fVar67;
    } while (uVar43 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar51;
  *(float *)(param_1 + 0x230) = fVar67;
  *(float *)(param_1 + 0x234) = fVar68;
  *(float **)(param_1 + 0x30) = pfVar42;
  *(float **)(param_1 + 0x90) = pfVar41;
  *(float **)(param_1 + 0x98) = local_238;
  *(float **)(param_1 + 0xa0) = local_res18;
  *(float **)(param_1 + 0xa8) = local_res20;
  *(float **)(param_1 + 0xb0) = local_230;
  *(float **)(param_1 + 0xb8) = local_298;
  *(float **)(param_1 + 0xc0) = local_290;
  *(float **)(param_1 + 200) = local_288;
  *(float **)(param_1 + 0xd0) = local_228;
  *(float **)(param_1 + 0xd8) = local_280;
  *(float **)(param_1 + 0xe0) = local_278;
  *(float **)(param_1 + 0xe8) = local_270;
  *(float **)(param_1 + 0xf0) = local_220;
  *(float **)(param_1 + 0xf8) = local_268;
  *(float **)(param_1 + 0x100) = local_260;
  *(float **)(param_1 + 0x148) = pfVar47;
  *(float *)(param_1 + 0x200) = fVar49;
  *(float *)(param_1 + 0x204) = fVar52;
  *(float *)(param_1 + 0x208) = fVar54;
  *(float *)(param_1 + 0x20c) = fVar56;
  *(float **)(param_1 + 0x108) = local_258;
  *(float *)(param_1 + 0x1f0) = fVar63;
  *(float *)(param_1 + 500) = fVar64;
  *(float *)(param_1 + 0x1f8) = fVar65;
  *(float *)(param_1 + 0x1fc) = fVar66;
  *(undefined8 *)(param_1 + 0x210) = local_208;
  *(undefined8 *)(param_1 + 0x218) = uStack_200;
  *(float *)(param_1 + 0x220) = local_1f8;
  *(float *)(param_1 + 0x224) = fStack_1f4;
  *(float *)(param_1 + 0x228) = fStack_1f0;
  *(float *)(param_1 + 0x22c) = fStack_1ec;
  *(float **)(param_1 + 0x130) = pfVar44;
  *(float **)(param_1 + 0x138) = pfVar45;
  *(float **)(param_1 + 0x140) = pfVar46;
  return;
}



// FUNCTION 1432058e0 ProcessStereo4 body=1135 status=ok
// SIG undefined ProcessStereo4(void)

void CAkFDNReverbFX::ProcessStereo4(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float *local_res18;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  fVar15 = *(float *)(param_1 + 0x170);
  fVar16 = *(float *)(param_1 + 0x174);
  fVar17 = *(float *)(param_1 + 0x178);
  fVar18 = *(float *)(param_1 + 0x17c);
  fVar19 = *(float *)(param_1 + 0x1b0);
  fVar20 = *(float *)(param_1 + 0x1b4);
  fVar21 = *(float *)(param_1 + 0x1b8);
  fVar22 = *(float *)(param_1 + 0x1bc);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x150);
  pfVar28 = *(float **)(param_1 + 0x130);
  pfVar25 = *(float **)(param_1 + 0x90);
  pfVar24 = *(float **)(param_1 + 0x98);
  pfVar27 = *(float **)(param_1 + 0xa0);
  pfVar26 = *(float **)(param_1 + 0xa8);
  fVar34 = *(float *)(param_1 + 0x234);
  fVar32 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x238);
  fVar36 = *(float *)(param_1 + 0x23c);
  fVar37 = *(float *)(param_1 + 0x240);
  fVar33 = *(float *)(param_1 + 0x230);
  fVar39 = *(float *)(param_1 + 0x1f0);
  fVar40 = *(float *)(param_1 + 500);
  fVar41 = *(float *)(param_1 + 0x1f8);
  fVar42 = *(float *)(param_1 + 0x1fc);
  local_res18 = (float *)*param_2;
  uVar9 = *(ushort *)(param_2 + 2);
  uVar29 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar30 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  pfVar13 = *(float **)(param_1 + 0x28);
  pfVar14 = *(float **)(param_1 + 0x38);
  fVar5 = *(float *)(lVar10 + 0x10);
  fVar6 = *(float *)(param_1 + 0x23c);
  fVar7 = *(float *)(lVar10 + 0x14);
  pfVar23 = *(float **)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x240);
  fVar31 = fVar32;
  fVar38 = fVar33;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar32 = *pfVar24;
      pfVar1 = pfVar25 + 4;
      fVar33 = *pfVar25;
      fVar35 = *pfVar27;
      fVar36 = fVar36 + (fVar5 - fVar6) * (1.0 / (float)uVar9);
      fVar37 = fVar37 + (fVar7 - fVar8) * (1.0 / (float)uVar9);
      pfVar25 = pfVar11;
      if (pfVar1 < pfVar12) {
        pfVar25 = pfVar1;
      }
      pfVar1 = pfVar24 + 4;
      pfVar24 = pfVar11 + 1;
      if (pfVar1 < pfVar12) {
        pfVar24 = pfVar1;
      }
      pfVar1 = pfVar27 + 4;
      pfVar27 = pfVar11 + 2;
      if (pfVar1 < pfVar12) {
        pfVar27 = pfVar1;
      }
      pfVar1 = pfVar26 + 4;
      fVar39 = fVar33 * fVar15 + fVar39 * fVar19;
      fVar40 = fVar32 * fVar16 + fVar40 * fVar20;
      fVar41 = fVar35 * fVar17 + fVar41 * fVar21;
      fVar42 = *pfVar26 * fVar18 + fVar42 * fVar22;
      pfVar26 = pfVar11 + 3;
      if (pfVar1 < pfVar12) {
        pfVar26 = pfVar1;
      }
      fVar32 = local_res18[*(ushort *)(param_2 + 2)];
      fVar35 = fVar42 + fVar40 + fVar41 + fVar39;
      fVar33 = *local_res18 + fVar32;
      *local_res18 = *local_res18 * fVar36 +
                     (fVar40 * -1.0 + fVar42 * -1.0 + fVar39 * 1.0 + fVar41 * 1.0) * fVar37;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar32 * fVar36 + (fVar40 * 1.0 + fVar42 * -1.0 + fVar39 * 1.0 + fVar41 * -1.0) * fVar37;
      local_res18 = local_res18 + 1;
      fVar34 = (fVar4 * fVar34 + fVar33) - fVar38;
      fVar32 = fVar34;
      if (pfVar13 != (float *)0x0) {
        fVar32 = *pfVar23;
        pfVar1 = pfVar23 + 1;
        *pfVar23 = fVar34;
        pfVar23 = pfVar13;
        if (pfVar1 != pfVar14) {
          pfVar23 = pfVar1;
        }
      }
      pfVar1 = pfVar28 + 4;
      fVar31 = fVar2 * fVar32 + fVar3 * fVar31;
      *pfVar28 = fVar31 + fVar35 * fVar30 + fVar40;
      pfVar28[1] = fVar31 + fVar35 * fVar30 + fVar41;
      pfVar28[2] = fVar31 + fVar35 * fVar30 + fVar42;
      pfVar28[3] = fVar31 + fVar35 * fVar30 + fVar39;
      pfVar28 = pfVar11;
      if (pfVar1 < pfVar12) {
        pfVar28 = pfVar1;
      }
      uVar29 = uVar29 - 1;
      fVar31 = fVar32;
      fVar38 = fVar33;
    } while (uVar29 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar32;
  *(float *)(param_1 + 0x230) = fVar33;
  *(float *)(param_1 + 0x234) = fVar34;
  *(float **)(param_1 + 0x30) = pfVar23;
  *(float **)(param_1 + 0x90) = pfVar25;
  *(float *)(param_1 + 0x1f0) = fVar39;
  *(float *)(param_1 + 500) = fVar40;
  *(float *)(param_1 + 0x1f8) = fVar41;
  *(float *)(param_1 + 0x1fc) = fVar42;
  *(float **)(param_1 + 0x130) = pfVar28;
  *(float **)(param_1 + 0x98) = pfVar24;
  *(float **)(param_1 + 0xa0) = pfVar27;
  *(float **)(param_1 + 0xa8) = pfVar26;
  return;
}



// FUNCTION 143205d50 ProcessStereo8 body=1628 status=ok
// SIG undefined ProcessStereo8(void)

void CAkFDNReverbFX::ProcessStereo8(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  uint uVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
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
  float *local_res18;
  float *local_res20;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x238);
  local_res18 = *(float **)(param_1 + 0xa8);
  pfVar10 = *(float **)(param_1 + 0x38);
  pfVar11 = *(float **)(param_1 + 0x28);
  pfVar12 = *(float **)(param_1 + 0x110);
  pfVar13 = *(float **)(param_1 + 0x118);
  pfVar14 = *(float **)(param_1 + 0x150);
  pfVar15 = *(float **)(param_1 + 0x158);
  pfVar32 = *(float **)(param_1 + 0x138);
  pfVar35 = *(float **)(param_1 + 0x90);
  pfVar34 = *(float **)(param_1 + 0x98);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar52 = *(float *)(param_1 + 0x23c);
  fVar53 = *(float *)(param_1 + 0x240);
  fVar47 = *(float *)(param_1 + 0x4c);
  fVar49 = *(float *)(param_1 + 0x230);
  fVar50 = *(float *)(param_1 + 0x234);
  fVar16 = *(float *)(param_1 + 0x170);
  fVar17 = *(float *)(param_1 + 0x174);
  fVar18 = *(float *)(param_1 + 0x178);
  fVar19 = *(float *)(param_1 + 0x17c);
  pfVar36 = *(float **)(param_1 + 0xb0);
  fVar20 = *(float *)(param_1 + 0x1b0);
  fVar21 = *(float *)(param_1 + 0x1b4);
  fVar22 = *(float *)(param_1 + 0x1b8);
  fVar23 = *(float *)(param_1 + 0x1bc);
  local_1b0 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  pfVar31 = *(float **)(param_1 + 0x130);
  local_1a8 = *(float **)(param_1 + 0xb8);
  fVar37 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  local_res20 = *(float **)(param_1 + 0xc0);
  local_1b8 = *(float **)(param_1 + 200);
  pfVar29 = *(float **)(param_1 + 0xa0);
  fVar4 = *(float *)(lVar9 + 0x10);
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar6 = *(float *)(lVar9 + 0x14);
  fVar7 = *(float *)(param_1 + 0x240);
  pfVar30 = *(float **)(param_1 + 0x30);
  uVar24 = *(undefined8 *)(param_1 + 0x180);
  uVar25 = *(undefined8 *)(param_1 + 0x188);
  uVar26 = *(undefined8 *)(param_1 + 0x1c0);
  uVar27 = *(undefined8 *)(param_1 + 0x1c8);
  fVar38 = *(float *)(param_1 + 0x1f0);
  fVar41 = *(float *)(param_1 + 500);
  fVar43 = *(float *)(param_1 + 0x1f8);
  fVar45 = *(float *)(param_1 + 0x1fc);
  fVar39 = *(float *)(param_1 + 0x200);
  fVar42 = *(float *)(param_1 + 0x204);
  fVar44 = *(float *)(param_1 + 0x208);
  fVar46 = *(float *)(param_1 + 0x20c);
  uVar33 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar40 = fVar47;
  fVar51 = fVar49;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar47 = *pfVar34;
      fVar49 = *pfVar35;
      pfVar28 = pfVar35 + 4;
      pfVar35 = pfVar12;
      if (pfVar28 < pfVar14) {
        pfVar35 = pfVar28;
      }
      pfVar28 = pfVar34 + 4;
      pfVar34 = pfVar12 + 1;
      if (pfVar28 < pfVar14) {
        pfVar34 = pfVar28;
      }
      fVar48 = *pfVar36;
      pfVar28 = pfVar29 + 4;
      fVar38 = fVar49 * fVar16 + fVar20 * fVar38;
      fVar41 = fVar47 * fVar17 + fVar21 * fVar41;
      fVar43 = *pfVar29 * fVar18 + fVar22 * fVar43;
      fVar45 = *local_res18 * fVar19 + fVar23 * fVar45;
      pfVar29 = pfVar12 + 2;
      if (pfVar28 < pfVar14) {
        pfVar29 = pfVar28;
      }
      pfVar28 = local_res18 + 4;
      local_res18 = pfVar12 + 3;
      if (pfVar28 < pfVar14) {
        local_res18 = pfVar28;
      }
      fVar47 = *local_res20;
      fVar49 = *local_1a8;
      pfVar28 = pfVar36 + 4;
      local_158 = (float)uVar26;
      fStack_154 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_150 = (float)uVar27;
      fStack_14c = (float)((ulonglong)uVar27 >> 0x20);
      pfVar36 = pfVar13;
      if (pfVar28 < pfVar15) {
        pfVar36 = pfVar28;
      }
      pfVar28 = local_1a8 + 4;
      local_168 = (float)uVar24;
      fStack_164 = (float)((ulonglong)uVar24 >> 0x20);
      fStack_160 = (float)uVar25;
      fStack_15c = (float)((ulonglong)uVar25 >> 0x20);
      local_1a8 = pfVar13 + 1;
      if (pfVar28 < pfVar15) {
        local_1a8 = pfVar28;
      }
      pfVar28 = local_res20 + 4;
      local_res20 = pfVar13 + 2;
      if (pfVar28 < pfVar15) {
        local_res20 = pfVar28;
      }
      fVar39 = fVar48 * local_168 + local_158 * fVar39;
      fVar42 = fVar49 * fStack_164 + fStack_154 * fVar42;
      fVar44 = fVar47 * fStack_160 + fStack_150 * fVar44;
      fVar46 = *local_1b8 * fStack_15c + fStack_14c * fVar46;
      pfVar28 = local_1b8 + 4;
      local_1b8 = pfVar13 + 3;
      if (pfVar28 < pfVar15) {
        local_1b8 = pfVar28;
      }
      fVar47 = local_1b0[*(ushort *)(param_2 + 2)];
      fVar52 = fVar52 + (fVar4 - fVar5) * (1.0 / (float)uVar8);
      fVar53 = fVar53 + (fVar6 - fVar7) * (1.0 / (float)uVar8);
      fVar49 = *local_1b0 + fVar47;
      fVar48 = fVar46 + fVar45 + fVar42 + fVar41 + fVar44 + fVar43 + fVar39 + fVar38;
      *local_1b0 = *local_1b0 * fVar52 +
                   (fVar42 * -1.0 + fVar41 * -1.0 + fVar46 * -1.0 + fVar45 * -1.0 +
                   fVar39 * 1.0 + fVar38 * 1.0 + fVar44 * 1.0 + fVar43 * 1.0) * fVar53;
      local_1b0[*(ushort *)(param_2 + 2)] =
           fVar47 * fVar52 +
           (fVar42 * 1.0 + fVar41 * 1.0 + fVar46 * -1.0 + fVar45 * -1.0 +
           fVar39 * 1.0 + fVar38 * 1.0 + fVar44 * -1.0 + fVar43 * -1.0) * fVar53;
      local_1b0 = local_1b0 + 1;
      fVar50 = (fVar1 * fVar50 + fVar49) - fVar51;
      fVar47 = fVar50;
      if (pfVar11 != (float *)0x0) {
        fVar47 = *pfVar30;
        pfVar28 = pfVar30 + 1;
        *pfVar30 = fVar50;
        pfVar30 = pfVar11;
        if (pfVar28 != pfVar10) {
          pfVar30 = pfVar28;
        }
      }
      pfVar28 = pfVar31 + 4;
      fVar40 = fVar2 * fVar47 + fVar3 * fVar40;
      *pfVar31 = fVar40 + fVar48 * fVar37 + fVar41;
      pfVar31[1] = fVar40 + fVar48 * fVar37 + fVar43;
      pfVar31[2] = fVar40 + fVar48 * fVar37 + fVar45;
      pfVar31[3] = fVar40 + fVar39 + fVar48 * fVar37;
      pfVar31 = pfVar12;
      if (pfVar28 < pfVar14) {
        pfVar31 = pfVar28;
      }
      *pfVar32 = fVar40 + fVar42 + fVar48 * fVar37;
      pfVar32[1] = fVar40 + fVar44 + fVar48 * fVar37;
      pfVar32[2] = fVar40 + fVar46 + fVar48 * fVar37;
      pfVar32[3] = fVar40 + fVar48 * fVar37 + fVar38;
      pfVar28 = pfVar32 + 4;
      pfVar32 = pfVar13;
      if (pfVar28 < pfVar15) {
        pfVar32 = pfVar28;
      }
      uVar33 = uVar33 - 1;
      fVar40 = fVar47;
      fVar51 = fVar49;
    } while (uVar33 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar47;
  *(float *)(param_1 + 0x230) = fVar49;
  *(float *)(param_1 + 0x234) = fVar50;
  *(float **)(param_1 + 0x30) = pfVar30;
  *(float **)(param_1 + 0xa0) = pfVar29;
  *(float **)(param_1 + 0xa8) = local_res18;
  *(float **)(param_1 + 0xb8) = local_1a8;
  *(float **)(param_1 + 0xc0) = local_res20;
  *(float *)(param_1 + 0x200) = fVar39;
  *(float *)(param_1 + 0x204) = fVar42;
  *(float *)(param_1 + 0x208) = fVar44;
  *(float *)(param_1 + 0x20c) = fVar46;
  *(float **)(param_1 + 200) = local_1b8;
  *(float *)(param_1 + 0x1f0) = fVar38;
  *(float *)(param_1 + 500) = fVar41;
  *(float *)(param_1 + 0x1f8) = fVar43;
  *(float *)(param_1 + 0x1fc) = fVar45;
  *(float **)(param_1 + 0x130) = pfVar31;
  *(float **)(param_1 + 0x138) = pfVar32;
  *(float **)(param_1 + 0x90) = pfVar35;
  *(float **)(param_1 + 0x98) = pfVar34;
  *(float **)(param_1 + 0xb0) = pfVar36;
  return;
}



// FUNCTION 1432063b0 Reset body=162 status=ok
// SIG undefined Reset(void)

undefined8 CAkFDNReverbFX::Reset(longlong param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x28),0,(ulonglong)(uint)(*(int *)(param_1 + 0x40) << 2));
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffffffc) != 0) {
    do {
      puVar1 = (undefined8 *)(param_1 + (uVar3 + 0x1f) * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      _Dst = *(void **)(param_1 + 0x110 + uVar3 * 8);
      if (_Dst != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,0,(ulonglong)
                          (uint)(*(int *)(param_1 + 0x50 + (ulonglong)((int)uVar3 * 4 + 3) * 4) << 4
                                ));
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 2);
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  return 1;
}



// FUNCTION 143206460 Term body=64 status=ok
// SIG undefined Term(void)

undefined8 CAkFDNReverbFX::Term(undefined8 *param_1,longlong *param_2)

{
  TermDelayLines();
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1432064a0 TermDelayLines body=112 status=ok
// SIG undefined TermDelayLines(void)

void CAkFDNReverbFX::TermDelayLines(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x110);
  lVar2 = 4;
  do {
    if (*plVar1 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 143206510 FUN_143206510 body=43 status=ok
// SIG undefined FUN_143206510(void)

undefined8 * FUN_143206510(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143206540 Clone body=117 status=ok
// SIG undefined Clone(void)

undefined8 * CAkFDNReverbFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae4e10;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(param_1 + 0x68);
    *(undefined1 *)(puVar2 + 0xd) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432065c0 FUN_1432065c0 body=40 status=ok
// SIG undefined FUN_1432065c0(void)

void FUN_1432065c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4e10;
    return;
  }
  return;
}



// FUNCTION 143206640 FUN_143206640 body=317 status=ok
// SIG undefined FUN_143206640(void)

undefined8 FUN_143206640(longlong param_1,short param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 8) = *param_3;
    return 1;
  case 1:
    *(float *)(param_1 + 0xc) = *param_3;
    return 1;
  case 2:
    *(float *)(param_1 + 0x18) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  case 3:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    break;
  case 4:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x14) = fVar2;
    return 1;
  case 5:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  case 6:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(uint *)(param_1 + 0x20) = (uint)(cVar1 != '\0');
    return 1;
  case 7:
    *(float *)(param_1 + 0x24) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  default:
    *(float *)(param_1 + 8 + (longlong)param_2 * 4) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
  *(float *)(param_1 + 0x10) = fVar2;
  return 1;
}



// FUNCTION 1432067a0 SetParamsBlock body=206 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkFDNReverbFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  iVar2 = param_2[2];
  *(int *)(param_1 + 0x18) = iVar2;
  fVar6 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x10) = fVar6;
  fVar6 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x14) = fVar6;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(uint *)(param_1 + 0x20) = (uint)(*(char *)(param_2 + 6) != '\0');
  iVar3 = *(int *)((longlong)param_2 + 0x19);
  param_2 = (undefined4 *)((longlong)param_2 + 0x1d);
  *(int *)(param_1 + 0x24) = iVar3;
  if ((iVar3 == 1) && (iVar2 != 0)) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined4 *)(param_1 + 0x28 + uVar5 * 4) = uVar1;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  return 1;
}



// FUNCTION 143206870 FUN_143206870 body=43 status=ok
// SIG undefined FUN_143206870(void)

undefined8 * FUN_143206870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1432068a0 FUN_1432068a0 body=1039 status=ok
// SIG undefined FUN_1432068a0(void)

void FUN_1432068a0(longlong param_1,int param_2,undefined4 *param_3)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_88 [28];
  
  lVar3 = (longlong)param_2;
  fVar7 = local_res10[0];
  switch(*param_3) {
  case 0:
    fVar7 = 4.2039e-45;
    break;
  case 1:
    fVar7 = 5.60519e-45;
    break;
  case 2:
    fVar7 = 7.00649e-45;
    break;
  case 3:
    fVar7 = 8.40779e-45;
    break;
  case 4:
    fVar7 = 0.0;
    break;
  case 5:
    fVar7 = 2.8026e-45;
    break;
  case 6:
    fVar7 = 1.4013e-45;
  }
  DSP::ComputeBiquadCoefs
            (local_res10,local_88,local_res20,local_res8,local_res18,fVar7,
             (float)*(uint *)(param_1 + 0x8c),param_3[2],param_3[1],param_3[3]);
  uVar2 = *(uint *)(param_1 + 0x24 + lVar3 * 0x28);
  local_res8[0] = -local_res8[0];
  local_res18[0] = -local_res18[0];
  pfVar1 = *(float **)(param_1 + 0x18 + lVar3 * 0x28);
  if (((uVar2 & 1) != 0) || (*(char *)(param_1 + 0x28 + lVar3 * 0x28) != '\0')) {
    *pfVar1 = local_res10[0];
    pfVar1[1] = local_res10[0];
    pfVar1[2] = local_res10[0];
    pfVar1[3] = local_res10[0];
    pfVar1[4] = 0.0;
    pfVar1[5] = 0.0;
    pfVar1[6] = 0.0;
    fVar4 = local_res18[0] * local_88[0];
    fVar8 = local_res8[0] * local_res18[0];
    fVar5 = local_res8[0] * local_res8[0];
    fVar7 = local_res8[0] * local_res10[0] + local_88[0];
    pfVar1[7] = fVar7;
    pfVar1[10] = fVar7;
    pfVar1[8] = 0.0;
    pfVar1[9] = 0.0;
    fVar6 = fVar7 * local_res8[0] + local_res20[0] + local_res18[0] * local_res10[0];
    pfVar1[0xb] = fVar6;
    pfVar1[0xe] = fVar6;
    pfVar1[0xd] = fVar7;
    pfVar1[0xc] = 0.0;
    fVar7 = local_res8[0] * local_88[0] + local_res20[0];
    pfVar1[0xf] = fVar6 * local_res8[0] + fVar8 * local_res10[0] + fVar4;
    pfVar1[0x11] = fVar7;
    pfVar1[0x10] = local_88[0];
    fVar7 = fVar7 * local_res8[0] + fVar4;
    pfVar1[0x12] = fVar7;
    pfVar1[0x13] = (fVar7 + fVar4) * local_res8[0] + local_res18[0] * local_res20[0];
    pfVar1[0x15] = local_res8[0] * local_res20[0];
    fVar7 = local_res8[0] * local_res20[0] * local_res8[0];
    pfVar1[0x14] = local_res20[0];
    pfVar1[0x16] = fVar7 + local_res18[0] * local_res20[0];
    pfVar1[0x17] = ((local_res20[0] + local_res20[0]) * local_res18[0] + fVar7) * local_res8[0];
    pfVar1[0x19] = fVar5 + local_res18[0];
    pfVar1[0x18] = local_res8[0];
    pfVar1[0x1a] = (local_res18[0] + local_res18[0] + fVar5) * local_res8[0];
    pfVar1[0x1b] = (local_res18[0] * 3.0 + fVar5) * local_res8[0] * local_res8[0] +
                   local_res18[0] * local_res18[0];
    pfVar1[0x1c] = local_res18[0];
    pfVar1[0x1d] = fVar8;
    pfVar1[0x1e] = fVar8 * local_res8[0] + local_res18[0] * local_res18[0];
    pfVar1[0x1f] = ((local_res18[0] + local_res18[0]) * local_res18[0] + fVar8 * local_res8[0]) *
                   local_res8[0];
    pfVar1 = pfVar1 + 0x20;
    if (*(char *)(param_1 + 0x28 + lVar3 * 0x28) != '\0') {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x24 + lVar3 * 0x28);
  }
  if ((uVar2 & 2) != 0) {
    pfVar1[1] = local_res10[0];
    fVar7 = local_res8[0] * local_res10[0] + local_88[0];
    pfVar1[3] = local_res10[0];
    fVar6 = local_res8[0] * local_res8[0] + local_res18[0];
    *pfVar1 = 0.0;
    pfVar1[2] = 0.0;
    pfVar1[4] = local_res10[0];
    pfVar1[5] = fVar7;
    pfVar1[6] = local_res10[0];
    pfVar1[7] = fVar7;
    pfVar1[8] = local_88[0];
    pfVar1[10] = local_88[0];
    fVar7 = local_res8[0] * local_88[0] + local_res20[0];
    pfVar1[9] = fVar7;
    pfVar1[0xb] = fVar7;
    pfVar1[0xc] = local_res20[0];
    pfVar1[0xe] = local_res20[0];
    pfVar1[0xd] = local_res8[0] * local_res20[0];
    pfVar1[0xf] = local_res8[0] * local_res20[0];
    pfVar1[0x10] = local_res8[0];
    pfVar1[0x11] = fVar6;
    pfVar1[0x12] = local_res8[0];
    pfVar1[0x13] = fVar6;
    pfVar1[0x14] = local_res18[0];
    pfVar1[0x15] = local_res8[0] * local_res18[0];
    pfVar1[0x16] = local_res18[0];
    pfVar1[0x17] = local_res8[0] * local_res18[0];
    pfVar1 = pfVar1 + 0x18;
    uVar2 = *(uint *)(param_1 + 0x24 + lVar3 * 0x28);
  }
  if (3 < uVar2) {
    *pfVar1 = local_res10[0];
    pfVar1[1] = local_88[0];
    pfVar1[2] = local_res20[0];
    pfVar1[3] = local_res8[0];
    pfVar1[4] = local_res18[0];
  }
  return;
}



// FUNCTION 143206cd0 ComputeBiquadCoefs body=1602 status=ok
// SIG undefined ComputeBiquadCoefs(void)

void DSP::ComputeBiquadCoefs
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               int param_6,float param_7,float param_8,float param_9,float param_10)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = 0.0;
  fVar4 = 0.0;
  fVar2 = param_7 * 0.45;
  if (param_8 <= param_7 * 0.45) {
    fVar2 = param_8;
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  if (param_6 == 3) {
    fVar2 = ::_guard_xfg_dispatch_icall_nop((fVar2 * 3.1415927) / param_7);
    fVar2 = 1.0 / fVar2;
    fVar9 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 + fVar8;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar10 = fVar8;
  }
  else if (param_6 == 4) {
    fVar2 = ::_guard_xfg_dispatch_icall_nop((fVar2 * 3.1415927) / param_7);
    fVar9 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 * -2.0;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar10 = fVar8;
  }
  else {
    if (param_6 == 5) {
      uVar3 = __libm_sse2_sincosf_((fVar2 * 6.2831855) / param_7);
      fVar8 = (float)uVar3 * (0.5 / param_10);
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar7 = 1.0 - fVar8;
      fVar10 = -fVar8;
      fVar9 = fVar8;
    }
    else if (param_6 == 6) {
      uVar3 = __libm_sse2_sincosf_((fVar2 * 6.2831855) / param_7);
      fVar8 = 1.0;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar10 = 1.0;
      fVar9 = (float)uVar3 * (0.5 / param_10);
      fVar7 = 1.0 - fVar9;
      fVar6 = fVar4;
    }
    else {
      if (param_6 == 0) {
        if (-37.0 <= param_9 * 0.025) {
          uVar1 = (uint)(longlong)(param_9 * 0.025 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar9 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                  (float)(uVar1 & 0xff800000);
        }
        uVar3 = __libm_sse2_sincosf_((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar9 - 1.0;
        fVar6 = fVar9 + 1.0;
        fVar7 = fVar4 * fVar2;
        fVar2 = fVar6 * fVar2;
        fVar10 = fVar6 - fVar7;
        fVar7 = fVar7 + fVar6;
        fVar5 = SQRT(fVar9) * (float)uVar3 * 1.4142135;
        fVar6 = (fVar4 - fVar2) * (fVar9 + fVar9);
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar8 = (fVar10 + fVar5) * fVar9;
        fVar10 = (fVar10 - fVar5) * fVar9;
        fVar9 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_14320728c;
      }
      if (param_6 == 2) {
        if (-37.0 <= param_9 * 0.025) {
          uVar1 = (uint)(longlong)(param_9 * 0.025 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar9 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                  (float)(uVar1 & 0xff800000);
        }
        uVar3 = __libm_sse2_sincosf_((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar10 = fVar9 - 1.0;
        fVar7 = fVar9 + 1.0;
        fVar6 = fVar7 * fVar2;
        fVar5 = SQRT(fVar9) * (float)uVar3 * 1.4142135;
        fVar2 = fVar10 * fVar2;
        fVar4 = fVar10 - fVar6;
        fVar8 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar10) * fVar9 * -2.0;
        fVar10 = (fVar8 - fVar5) * fVar9;
        fVar8 = (fVar8 + fVar5) * fVar9;
        fVar9 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_14320728c;
      }
      if (param_6 != 1) goto LAB_14320728c;
      param_7 = (fVar2 * 6.2831855) / param_7;
      fVar4 = ::_guard_xfg_dispatch_icall_nop(param_7);
      if (-37.0 <= param_9 * 0.025) {
        uVar1 = (uint)(longlong)(param_9 * 0.025 * 27866352.0 + 1.0653532e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      fVar9 = ::_guard_xfg_dispatch_icall_nop(param_7);
      fVar4 = fVar4 * -2.0;
      fVar9 = fVar9 * (0.5 / param_10);
      fVar8 = fVar9 * fVar7;
      fVar9 = fVar9 / fVar7;
      fVar10 = 1.0 - fVar8;
      fVar8 = fVar8 + 1.0;
      fVar7 = 1.0 - fVar9;
      fVar6 = fVar4;
    }
    fVar9 = fVar9 + 1.0;
  }
LAB_14320728c:
  fVar9 = 1.0 / fVar9;
  *param_1 = fVar9 * fVar8;
  *param_2 = fVar9 * fVar6;
  *param_3 = fVar9 * fVar10;
  *param_4 = fVar9 * fVar4;
  *param_5 = fVar9 * fVar7;
  return;
}



// FUNCTION 143207320 CreateAkParametricEQFX body=117 status=ok
// SIG undefined CreateAkParametricEQFX(void)

undefined8 * CreateAkParametricEQFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4e40;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432073a0 Execute body=2226 status=ok
// SIG undefined Execute(void)

void CAkParametricEQFX::Execute(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  float fVar64;
  uint local_res18;
  uint local_res20;
  float fStack_11c;
  float fStack_10c;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  if ((*(int *)(param_1 + 0x88) != 0) && (*(short *)((longlong)param_2 + 0x12) != 0)) {
    plVar17 = (longlong *)(param_1 + 8);
    local_res20 = 0;
    do {
      lVar21 = (longlong)(int)local_res20;
      cVar3 = *(char *)(*(longlong *)(param_1 + 0x80) + (lVar21 * 5 + 2) * 4 + 0x10);
      if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x4c + lVar21) != '\0') {
        FUN_1432068a0(param_1,local_res20);
        *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x4c + lVar21) = 0;
      }
      if (cVar3 != '\0') {
        uVar4 = *(ushort *)((longlong)param_2 + 0x12);
        uVar13 = (ulonglong)uVar4;
        uVar5 = *(ushort *)(param_2 + 2);
        uVar27 = (ulonglong)uVar5;
        local_res18 = (uint)uVar4;
        pfVar24 = (float *)*param_2;
        if ((uVar4 & 3) != 0) {
          pfVar14 = pfVar24 + uVar13;
          iVar15 = 4 - (uVar4 & 3);
          local_res18 = (uint)uVar4 + iVar15;
          uVar13 = (ulonglong)local_res18;
          do {
            *pfVar14 = 0.0;
            pfVar14 = pfVar14 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        uVar28 = (uint)uVar13;
        pfVar14 = (float *)*plVar17;
        uVar19 = *(uint *)((longlong)plVar17 + 0x1c);
        if ((char)plVar17[4] == '\0') {
          if (3 < uVar19) {
            pfVar23 = pfVar14 + 8;
            uVar18 = (ulonglong)(uVar19 >> 2);
            do {
              fVar41 = pfVar23[-4];
              fVar42 = pfVar23[-3];
              fVar43 = pfVar23[-2];
              fVar44 = pfVar23[-1];
              fVar61 = *pfVar14;
              fVar62 = pfVar14[1];
              fVar63 = pfVar14[2];
              fVar64 = pfVar14[3];
              fVar53 = *pfVar23;
              fVar54 = pfVar23[1];
              fVar55 = pfVar23[2];
              fVar56 = pfVar23[3];
              fVar57 = pfVar23[4];
              fVar58 = pfVar23[5];
              fVar59 = pfVar23[6];
              fVar60 = pfVar23[7];
              lVar16 = (ulonglong)((*(uint *)((longlong)plVar17 + 0x1c) >> 1 & 1) * 0x18) +
                       (ulonglong)((*(uint *)((longlong)plVar17 + 0x1c) & 1) << 5);
              lVar21 = plVar17[2];
              fVar38 = *(float *)(lVar21 + lVar16 * 4);
              fVar40 = *(float *)(lVar21 + 4 + lVar16 * 4);
              fVar37 = *(float *)(lVar21 + 8 + lVar16 * 4);
              fVar39 = *(float *)(lVar21 + 0xc + lVar16 * 4);
              fVar2 = *(float *)(lVar21 + 0x10 + lVar16 * 4);
              if (pfVar24 < pfVar24 + uVar13) {
                uVar12 = (ulonglong)((uint)uVar5 + (uint)uVar5);
                pfVar29 = pfVar24 + ((uint)uVar5 + (uint)uVar5);
                lVar21 = ((uint)uVar5 + (uint)uVar5 * 2) - uVar12;
                fVar45 = fVar61;
                fVar46 = fVar62;
                fVar47 = fVar63;
                fVar48 = fVar64;
                local_f8 = fVar41;
                fStack_f4 = fVar42;
                fStack_f0 = fVar43;
                fStack_ec = fVar44;
                do {
                  pfVar1 = pfVar29 + lVar21;
                  fVar6 = *pfVar1;
                  fVar7 = pfVar1[1];
                  fVar44 = pfVar1[2];
                  fVar64 = pfVar1[3];
                  pfVar1 = pfVar29 + (uVar27 - uVar12);
                  fVar8 = *pfVar1;
                  fVar50 = pfVar1[1];
                  fVar42 = pfVar1[2];
                  fVar62 = pfVar1[3];
                  pfVar1 = pfVar29 + -uVar12;
                  fVar52 = *pfVar1;
                  fVar51 = pfVar1[1];
                  fVar41 = pfVar1[2];
                  fVar61 = pfVar1[3];
                  fVar9 = *pfVar29;
                  fVar10 = pfVar29[1];
                  fVar43 = pfVar29[2];
                  fVar63 = pfVar29[3];
                  fVar33 = fVar52 * fVar38 + fVar40 * fVar45 + fVar37 * local_f8 + fVar39 * fVar53 +
                           fVar2 * fVar57;
                  fVar34 = fVar8 * fVar38 + fVar40 * fVar46 + fVar37 * fStack_f4 + fVar39 * fVar54 +
                           fVar2 * fVar58;
                  fVar35 = fVar9 * fVar38 + fVar40 * fVar47 + fVar37 * fStack_f0 + fVar39 * fVar55 +
                           fVar2 * fVar59;
                  fVar36 = fVar6 * fVar38 + fVar40 * fVar48 + fVar37 * fStack_ec + fVar39 * fVar56 +
                           fVar2 * fVar60;
                  fVar45 = fVar52 * fVar40 + fVar51 * fVar38 + fVar37 * fVar45 + fVar33 * fVar39 +
                           fVar2 * fVar53;
                  fVar46 = fVar8 * fVar40 + fVar50 * fVar38 + fVar37 * fVar46 + fVar34 * fVar39 +
                           fVar2 * fVar54;
                  fVar47 = fVar9 * fVar40 + fVar10 * fVar38 + fVar37 * fVar47 + fVar35 * fVar39 +
                           fVar2 * fVar55;
                  fVar48 = fVar6 * fVar40 + fVar7 * fVar38 + fVar37 * fVar48 + fVar36 * fVar39 +
                           fVar2 * fVar56;
                  fVar57 = fVar51 * fVar40 + fVar41 * fVar38 + fVar52 * fVar37 + fVar45 * fVar39 +
                           fVar33 * fVar2;
                  fVar58 = fVar50 * fVar40 + fVar42 * fVar38 + fVar8 * fVar37 + fVar46 * fVar39 +
                           fVar34 * fVar2;
                  fVar59 = fVar10 * fVar40 + fVar43 * fVar38 + fVar9 * fVar37 + fVar47 * fVar39 +
                           fVar35 * fVar2;
                  fVar60 = fVar7 * fVar40 + fVar44 * fVar38 + fVar6 * fVar37 + fVar48 * fVar39 +
                           fVar36 * fVar2;
                  fVar53 = fVar41 * fVar40 + fVar61 * fVar38 + fVar51 * fVar37 + fVar57 * fVar39 +
                           fVar45 * fVar2;
                  fVar54 = fVar42 * fVar40 + fVar62 * fVar38 + fVar50 * fVar37 + fVar58 * fVar39 +
                           fVar46 * fVar2;
                  fVar55 = fVar43 * fVar40 + fVar63 * fVar38 + fVar10 * fVar37 + fVar59 * fVar39 +
                           fVar47 * fVar2;
                  fVar56 = fVar44 * fVar40 + fVar64 * fVar38 + fVar7 * fVar37 + fVar60 * fVar39 +
                           fVar48 * fVar2;
                  pfVar1 = pfVar29 + -uVar12;
                  *pfVar1 = fVar33;
                  pfVar1[1] = fVar45;
                  pfVar1[2] = fVar57;
                  pfVar1[3] = fVar53;
                  pfVar1 = pfVar29 + (uVar27 - uVar12);
                  *pfVar1 = fVar34;
                  pfVar1[1] = fVar46;
                  pfVar1[2] = fVar58;
                  pfVar1[3] = fVar54;
                  *pfVar29 = fVar35;
                  pfVar29[1] = fVar47;
                  pfVar29[2] = fVar59;
                  pfVar29[3] = fVar55;
                  pfVar1 = pfVar29 + lVar21;
                  *pfVar1 = fVar36;
                  pfVar1[1] = fVar48;
                  pfVar1[2] = fVar60;
                  pfVar1[3] = fVar56;
                  pfVar29 = pfVar29 + 4;
                  fVar45 = fVar61;
                  fVar46 = fVar62;
                  fVar47 = fVar63;
                  fVar48 = fVar64;
                  local_f8 = fVar41;
                  fStack_f4 = fVar42;
                  fStack_f0 = fVar43;
                  fStack_ec = fVar44;
                } while (pfVar29 + -uVar12 < pfVar24 + uVar13);
              }
              *pfVar14 = fVar61;
              pfVar14[1] = fVar62;
              pfVar14[2] = fVar63;
              pfVar14[3] = fVar64;
              pfVar24 = pfVar24 + (uint)uVar5 * 4;
              pfVar23[-4] = fVar41;
              pfVar23[-3] = fVar42;
              pfVar23[-2] = fVar43;
              pfVar23[-1] = fVar44;
              pfVar14 = pfVar14 + 0x10;
              *pfVar23 = fVar53;
              pfVar23[1] = fVar54;
              pfVar23[2] = fVar55;
              pfVar23[3] = fVar56;
              uVar19 = uVar19 - 4;
              pfVar23[4] = fVar57;
              pfVar23[5] = fVar58;
              pfVar23[6] = fVar59;
              pfVar23[7] = fVar60;
              pfVar23 = pfVar23 + 0x10;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
            uVar13 = (ulonglong)local_res18;
          }
          uVar28 = (uint)uVar13;
          if (1 < uVar19) {
            fVar38 = pfVar14[8];
            fVar40 = pfVar14[9];
            fVar37 = pfVar14[0xc];
            fVar39 = pfVar14[0xd];
            uVar18 = (ulonglong)((*(uint *)((longlong)plVar17 + 0x1c) & 1) << 5);
            lVar21 = plVar17[2];
            pfVar23 = (float *)(lVar21 + 0x50 + uVar18 * 4);
            fVar2 = *pfVar23;
            fVar41 = pfVar23[1];
            fVar42 = pfVar23[2];
            fVar43 = pfVar23[3];
            pfVar23 = (float *)(lVar21 + uVar18 * 4);
            fVar44 = *pfVar23;
            fVar61 = pfVar23[1];
            fVar62 = pfVar23[2];
            fVar63 = pfVar23[3];
            pfVar23 = (float *)(lVar21 + 0x10 + uVar18 * 4);
            fVar64 = *pfVar23;
            fVar53 = pfVar23[1];
            fVar54 = pfVar23[2];
            fVar55 = pfVar23[3];
            pfVar23 = (float *)(lVar21 + 0x20 + uVar18 * 4);
            fVar56 = *pfVar23;
            fVar57 = pfVar23[1];
            fVar58 = pfVar23[2];
            fVar59 = pfVar23[3];
            pfVar23 = (float *)(lVar21 + 0x30 + uVar18 * 4);
            fVar60 = *pfVar23;
            fVar45 = pfVar23[1];
            fVar46 = pfVar23[2];
            fVar47 = pfVar23[3];
            pfVar23 = (float *)(lVar21 + 0x40 + uVar18 * 4);
            fVar48 = *pfVar23;
            fVar6 = pfVar23[1];
            fVar7 = pfVar23[2];
            fVar8 = pfVar23[3];
            fVar50 = *pfVar14;
            fVar52 = pfVar14[1];
            fVar51 = pfVar14[4];
            fVar9 = pfVar14[5];
            for (pfVar23 = pfVar24; pfVar23 < pfVar24 + uVar13; pfVar23 = pfVar23 + 4) {
              pfVar29 = pfVar23 + uVar27;
              fVar10 = *pfVar29;
              fVar33 = pfVar29[1];
              fVar34 = pfVar29[2];
              fVar35 = pfVar29[3];
              fVar36 = *pfVar23;
              fVar30 = pfVar23[1];
              fVar31 = pfVar23[2];
              fVar32 = pfVar23[3];
              fVar49 = fVar36 * fVar64 + fVar36 * fVar44 + fVar56 * fVar50 + fVar60 * fVar51 +
                       fVar48 * fVar38 + fVar2 * fVar37;
              fVar50 = fVar36 * fVar53 + fVar30 * fVar61 + fVar57 * fVar50 + fVar45 * fVar51 +
                       fVar6 * fVar38 + fVar41 * fVar37;
              fVar51 = fVar10 * fVar54 + fVar10 * fVar62 + fVar58 * fVar52 + fVar46 * fVar9 +
                       fVar7 * fVar40 + fVar42 * fVar39;
              fVar52 = fVar10 * fVar55 + fVar33 * fVar63 + fVar59 * fVar52 + fVar47 * fVar9 +
                       fVar8 * fVar40 + fVar43 * fVar39;
              fVar37 = fVar31 * fVar64 + fVar31 * fVar44 + fVar30 * fVar56 + fVar36 * fVar60 +
                       fVar50 * fVar48 + fVar49 * fVar2;
              fVar38 = fVar31 * fVar53 + fVar32 * fVar61 + fVar30 * fVar57 + fVar36 * fVar45 +
                       fVar50 * fVar6 + fVar49 * fVar41;
              fVar39 = fVar34 * fVar54 + fVar34 * fVar62 + fVar33 * fVar58 + fVar10 * fVar46 +
                       fVar52 * fVar7 + fVar51 * fVar42;
              fVar40 = fVar34 * fVar55 + fVar35 * fVar63 + fVar33 * fVar59 + fVar10 * fVar47 +
                       fVar52 * fVar8 + fVar51 * fVar43;
              *pfVar23 = fVar49;
              pfVar23[1] = fVar50;
              pfVar23[2] = fVar37;
              pfVar23[3] = fVar38;
              pfVar29 = pfVar23 + uVar27;
              *pfVar29 = fVar51;
              pfVar29[1] = fVar52;
              pfVar29[2] = fVar39;
              pfVar29[3] = fVar40;
              fVar50 = fVar32;
              fVar52 = fVar35;
              fVar51 = fVar31;
              fVar9 = fVar34;
            }
            *pfVar14 = fVar50;
            pfVar14[4] = fVar51;
            pfVar24 = pfVar24 + ((uint)uVar5 + (uint)uVar5);
            pfVar14[8] = fVar38;
            uVar19 = uVar19 - 2;
            pfVar14[0xc] = fVar37;
            pfVar14[1] = fVar52;
            pfVar14[5] = fVar9;
            pfVar14[9] = fVar40;
            pfVar14[0xd] = fVar39;
          }
        }
        if (uVar19 != 0) {
          do {
            uVar25 = *(uint *)((longlong)plVar17 + 0x1c);
            uVar26 = uVar25 - uVar19;
            uVar22 = uVar26 >> 2;
            uVar20 = uVar26 & 3;
            if ((uVar25 - 1 == uVar26) && ((uVar25 & 1) != 0)) {
              uVar11 = uVar22;
              if ((uVar25 != 1) && (1 < uVar20)) {
                uVar11 = uVar22 + 1;
              }
              lVar21 = *plVar17;
              uVar13 = (ulonglong)(uVar11 << 4);
              fVar38 = *(float *)(lVar21 + uVar13 * 4);
              fVar40 = *(float *)(lVar21 + 4 + uVar13 * 4);
              fStack_fc = *(float *)(lVar21 + 8 + uVar13 * 4);
              fStack_ec = *(float *)(lVar21 + 0xc + uVar13 * 4);
            }
            else {
              lVar16 = (ulonglong)(uVar22 << 4) + (ulonglong)uVar20;
              lVar21 = *plVar17;
              fVar38 = *(float *)(lVar21 + lVar16 * 4);
              fVar40 = *(float *)(lVar21 + 0x10 + lVar16 * 4);
              fStack_fc = *(float *)(lVar21 + 0x20 + lVar16 * 4);
              fStack_ec = *(float *)(lVar21 + 0x30 + lVar16 * 4);
            }
            pfVar14 = (float *)plVar17[2];
            fVar37 = *pfVar14;
            fVar39 = pfVar14[1];
            fVar2 = pfVar14[2];
            fVar41 = pfVar14[3];
            fVar42 = pfVar14[4];
            fVar43 = pfVar14[5];
            fVar44 = pfVar14[6];
            fVar61 = pfVar14[7];
            fVar62 = pfVar14[8];
            fVar63 = pfVar14[9];
            fVar64 = pfVar14[10];
            fVar53 = pfVar14[0xb];
            fVar54 = pfVar14[0xc];
            fVar55 = pfVar14[0xd];
            fVar56 = pfVar14[0xe];
            fVar57 = pfVar14[0xf];
            fVar58 = pfVar14[0x10];
            fVar59 = pfVar14[0x11];
            fVar60 = pfVar14[0x12];
            fVar45 = pfVar14[0x13];
            fVar46 = pfVar14[0x14];
            fVar47 = pfVar14[0x15];
            fVar48 = pfVar14[0x16];
            fVar6 = pfVar14[0x17];
            fVar7 = pfVar14[0x18];
            fVar8 = pfVar14[0x19];
            fVar50 = pfVar14[0x1a];
            fVar52 = pfVar14[0x1b];
            fVar51 = pfVar14[0x1c];
            fVar9 = pfVar14[0x1d];
            fVar10 = pfVar14[0x1e];
            fVar33 = pfVar14[0x1f];
            pfVar14 = pfVar24;
            fStack_11c = fVar38;
            fStack_10c = fVar40;
            if (pfVar24 < pfVar24 + uVar28) {
              do {
                fVar34 = *pfVar14;
                fVar35 = pfVar14[1];
                fStack_10c = pfVar14[2];
                fStack_11c = pfVar14[3];
                fVar36 = fVar7 * fStack_fc;
                fVar30 = fVar8 * fStack_fc;
                fVar31 = fVar51 * fStack_ec;
                fVar32 = fVar9 * fStack_ec;
                fVar49 = fVar33 * fStack_ec;
                fStack_ec = fVar35 * fVar64 +
                            fVar44 * fStack_10c +
                            fVar60 * fVar38 + fStack_10c * fVar2 + fVar48 * fVar40 +
                            fVar50 * fStack_fc + fVar10 * fStack_ec + fVar34 * fVar56;
                fStack_fc = fVar35 * fVar53 +
                            fVar61 * fStack_10c +
                            fVar45 * fVar38 + fStack_11c * fVar41 + fVar6 * fVar40 +
                            fVar52 * fStack_fc + fVar49 + fVar34 * fVar57;
                *pfVar14 = fVar35 * fVar62 +
                           fVar42 * fStack_10c +
                           fVar58 * fVar38 + fVar34 * fVar37 + fVar46 * fVar40 + fVar36 + fVar31 +
                           fVar34 * fVar54;
                pfVar14[1] = fVar35 * fVar63 +
                             fVar43 * fStack_10c +
                             fVar59 * fVar38 + fVar35 * fVar39 + fVar47 * fVar40 + fVar30 + fVar32 +
                             fVar34 * fVar55;
                pfVar14[2] = fStack_ec;
                pfVar14[3] = fStack_fc;
                pfVar14 = pfVar14 + 4;
                fVar40 = fStack_10c;
                fVar38 = fStack_11c;
              } while (pfVar14 < pfVar24 + uVar28);
              uVar25 = *(uint *)((longlong)plVar17 + 0x1c);
            }
            if ((uVar25 - 1 == uVar26) && ((uVar25 & 1) != 0)) {
              if ((uVar25 != 1) && (1 < uVar20)) {
                uVar22 = uVar22 + 1;
              }
              uVar13 = (ulonglong)(uVar22 << 4);
              *(float *)(*plVar17 + uVar13 * 4) = fStack_11c;
              *(float *)(*plVar17 + 4 + uVar13 * 4) = fStack_10c;
              *(float *)(*plVar17 + 8 + uVar13 * 4) = fStack_fc;
              *(float *)(*plVar17 + 0xc + uVar13 * 4) = fStack_ec;
            }
            else {
              lVar21 = (ulonglong)(uVar22 << 4) + (ulonglong)uVar20;
              *(float *)(*plVar17 + lVar21 * 4) = fStack_11c;
              *(float *)(*plVar17 + 0x10 + lVar21 * 4) = fStack_10c;
              *(float *)(*plVar17 + 0x20 + lVar21 * 4) = fStack_fc;
              *(float *)(*plVar17 + 0x30 + lVar21 * 4) = fStack_ec;
            }
            pfVar24 = pfVar24 + uVar27;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      local_res20 = local_res20 + 1;
      plVar17 = plVar17 + 5;
    } while (local_res20 < 3);
    lVar21 = *(longlong *)(param_1 + 0x80);
    fVar38 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar21 + 0x44) * 0.05);
    AK::DSP::ApplyGain(param_2,*(undefined4 *)(param_1 + 0x98),fVar38,*(undefined1 *)(lVar21 + 0x48)
                      );
    *(float *)(param_1 + 0x98) = fVar38;
  }
  return;
}



// FUNCTION 143207c60 Init body=404 status=ok
// SIG undefined Init(void)

undefined8
CAkParametricEQFX::Init
          (longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
          undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  float fVar8;
  
  uVar4 = param_5[1] & 0xff;
  *(uint *)(param_1 + 0x88) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = *param_5;
  *(longlong *)(param_1 + 0x80) = param_4;
  if (((param_5[1] & 0x8000) != 0) && (*(char *)(param_4 + 0x48) == '\0')) {
    uVar4 = uVar4 - 1;
    *(uint *)(param_1 + 0x88) = uVar4;
  }
  if (uVar4 != 0) {
    uVar4 = 0;
    plVar6 = (longlong *)(param_1 + 0x10);
    do {
      uVar2 = *(uint *)(param_1 + 0x88);
      *(uint *)((longlong)plVar6 + 0x14) = uVar2;
      *(undefined1 *)(plVar6 + 3) = 0;
      uVar1 = (uVar2 & 1) + ((uVar2 >> 1 & 1) + (uVar2 >> 2)) * 4;
      iVar7 = uVar1 * 0x10;
      iVar3 = 0xf;
      if (3 < uVar2) {
        iVar3 = 0x23;
      }
      *(uint *)(plVar6 + 2) =
           iVar3 + iVar7 + (-(uint)((uVar2 & 2) != 0) & 0x60) + (uVar2 & 1) * 0x80;
      _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
      *plVar6 = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        return 0x34;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(plVar6 + 2));
      uVar4 = uVar4 + 1;
      uVar5 = *plVar6 + 0xfU & 0xfffffffffffffff0;
      plVar6[-1] = uVar5;
      *(int *)(plVar6 + 2) = iVar7;
      plVar6[1] = uVar5 + (ulonglong)((uVar1 & 0xfffffff) << 2) * 4;
      plVar6 = plVar6 + 5;
    } while (uVar4 < 3);
    param_4 = *(longlong *)(param_1 + 0x80);
  }
  *(undefined1 *)(param_4 + 0x4c) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x4d) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x4e) = 1;
  fVar8 = ::_guard_xfg_dispatch_icall_nop
                    (10.0,*(float *)(*(longlong *)(param_1 + 0x80) + 0x44) * 0.05);
  *(float *)(param_1 + 0x98) = fVar8;
  return 1;
}



// FUNCTION 143207e00 Reset body=80 status=ok
// SIG undefined Reset(void)

undefined8 CAkParametricEQFX::Reset(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),0,(ulonglong)*(uint *)(param_1 + 0x20));
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x30),0,(ulonglong)*(uint *)(param_1 + 0x48));
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x58),0,(ulonglong)*(uint *)(param_1 + 0x70));
  }
  return 1;
}



// FUNCTION 143207e50 Term body=141 status=ok
// SIG undefined Term(void)

undefined8 CAkParametricEQFX::Term(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 2;
  lVar2 = 3;
  do {
    if (*plVar1 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      plVar1[-1] = 0;
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 143207ee0 Clone body=107 status=ok
// SIG undefined Clone(void)

undefined8 * CAkParameterEQFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae4e88;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined2 *)((longlong)puVar2 + 0x4c) = 0x101;
    *(undefined1 *)((longlong)puVar2 + 0x4e) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143207f50 FUN_143207f50 body=50 status=ok
// SIG undefined FUN_143207f50(void)

void FUN_143207f50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4e88;
    *(undefined2 *)((longlong)puVar1 + 0x4c) = 0x101;
    *(undefined1 *)((longlong)puVar1 + 0x4e) = 1;
    return;
  }
  return;
}



// FUNCTION 143208220 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkDelayFX::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ae4eb8;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 8);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143208270 CreateAkDelayFX body=75 status=ok
// SIG undefined CreateAkDelayFX(void)

undefined8 * CreateAkDelayFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145ae4eb8;
    CAkDelayFXDSP::CAkDelayFXDSP(puVar1 + 1);
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432082c0 CreateAkDelayFXParams body=37 status=ok
// SIG undefined CreateAkDelayFXParams(void)

void CreateAkDelayFXParams(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x20);
  if (lVar1 != 0) {
    CAkDelayFXParams::CAkDelayFXParams(lVar1);
    return;
  }
  return;
}



// FUNCTION 1432082f0 Execute body=172 status=ok
// SIG undefined Execute(void)

void CAkDelayFX::Execute(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(lVar2 + 0x1d) != '\0') {
    lVar3 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    iVar1 = CAkDelayFXDSP::InitDelay
                      (param_1 + 8,*(undefined8 *)(param_1 + 0x58),lVar3,
                       *(undefined4 *)(param_2 + 8));
    if (iVar1 != 1) {
      return;
    }
    CAkDelayFXDSP::ResetDelay(param_1 + 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x1d) = 0;
    lVar2 = *(longlong *)(param_1 + 0x50);
  }
  if (*(char *)(lVar2 + 0x15) != '\0') {
    CAkDelayFXDSP::ComputeTailLength
              (param_1 + 8,*(undefined1 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 8));
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x15) = 0;
    lVar2 = *(longlong *)(param_1 + 0x50);
  }
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  CAkDelayFXDSP::Process(param_1 + 8,param_2,lVar3);
  return;
}



// FUNCTION 1432083a0 Init body=171 status=ok
// SIG undefined Init(void)

undefined4
CAkDelayFX::Init(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                undefined4 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(longlong *)(param_1 + 0x50) = param_4;
  lVar2 = param_4 + 8;
  if (param_4 == 0) {
    lVar2 = 0;
  }
  CAkDelayFXDSP::Setup(param_1 + 8,lVar2,*param_5);
  lVar2 = *(longlong *)(param_1 + 0x50) + 8;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar2 = 0;
  }
  uVar1 = CAkDelayFXDSP::InitDelay(param_1 + 8,param_2,lVar2,param_5[1]);
  CAkDelayFXDSP::ComputeTailLength
            (param_1 + 8,*(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x14),
             *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 8));
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x1d) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x15) = 0;
  return uVar1;
}



// FUNCTION 143208450 Reset body=23 status=ok
// SIG undefined Reset(void)

undefined8 CAkDelayFX::Reset(longlong param_1)

{
  CAkDelayFXDSP::ResetDelay(param_1 + 8);
  return 1;
}



// FUNCTION 143208470 Term body=68 status=ok
// SIG undefined Term(void)

undefined8 CAkDelayFX::Term(undefined8 *param_1,longlong *param_2)

{
  CAkDelayFXDSP::TermDelay(param_1 + 1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1432084c0 CAkDelayFXParams body=14 status=ok
// SIG undefined CAkDelayFXParams(void)

undefined8 * CAkDelayFXParams::CAkDelayFXParams(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145ae4f00;
  return param_1;
}



// FUNCTION 1432084d0 Clone body=77 status=ok
// SIG undefined Clone(void)

void CAkDelayFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae4f00;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined1 *)((longlong)puVar2 + 0x15) = 1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar2 + 0x1d) = 1;
    return;
  }
  return;
}



// FUNCTION 143208560 FUN_143208560 body=313 status=ok
// SIG undefined FUN_143208560(void)

undefined8 FUN_143208560(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x18) = *param_3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return 1;
  case 1:
    fVar1 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar1) && (fVar2 = fVar1, 100.0 <= fVar1)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x15) = 1;
    *(float *)(param_1 + 8) = fVar2 * 0.01;
    return 1;
  case 2:
    fVar1 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar1) && (fVar2 = fVar1, 100.0 <= fVar1)) {
      fVar2 = 100.0;
    }
    *(float *)(param_1 + 0xc) = fVar2 * 0.01;
    return 1;
  case 3:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x10) = fVar1;
    return 1;
  case 4:
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return 1;
  default:
    return 0x1f;
  }
  if (*param_3 == 0.0) {
    *(undefined1 *)(param_1 + 0x15) = 1;
    *(undefined1 *)(param_1 + 0x14) = 0;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return 1;
}



// FUNCTION 1432086c0 SetParamsBlock body=160 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkDelayFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fVar1 = (float)param_2[1];
  *(float *)(param_1 + 8) = fVar1;
  fVar2 = (float)param_2[2];
  *(float *)(param_1 + 0xc) = fVar2;
  fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x10) = fVar3;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(float *)(param_1 + 8) = fVar1 * 0.01;
  *(float *)(param_1 + 0xc) = fVar2 * 0.01;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return 1;
}



// FUNCTION 143208760 CAkDelayFXDSP body=29 status=ok
// SIG undefined CAkDelayFXDSP(void)

undefined8 * CAkDelayFXDSP::CAkDelayFXDSP(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 143208780 ComputeTailLength body=109 status=ok
// SIG undefined ComputeTailLength(void)

void CAkDelayFXDSP::ComputeTailLength(longlong param_1,char param_2,float param_3)

{
  float fVar1;
  
  if ((param_2 != '\0') && (param_3 != 0.0)) {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(param_3);
    if (-0.6 <= fVar1 * 20.0) {
      fVar1 = 100.0;
    }
    else {
      fVar1 = -60.0 / (fVar1 * 20.0);
    }
    *(int *)(param_1 + 0x40) = (int)(longlong)((float)*(uint *)(param_1 + 8) * fVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 8);
  return;
}



// FUNCTION 1432087f0 InitDelay body=264 status=ok
// SIG undefined InitDelay(void)

undefined4
CAkDelayFXDSP::InitDelay(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *_Dst;
  undefined8 uVar6;
  ulonglong uVar7;
  
  AK::DSP::CAkDelayLineMemory<float>::Term();
  uVar4 = param_4 & 0xff;
  *(uint *)(param_1 + 7) = uVar4;
  cVar2 = *(char *)(param_3 + 0x14);
  *(char *)((longlong)param_1 + 0x44) = cVar2;
  if (((param_4 & 0x8000) != 0) && (cVar2 == '\0')) {
    uVar4 = uVar4 - 1;
    *(uint *)(param_1 + 7) = uVar4;
  }
  if (uVar4 == 0) {
    uVar5 = 2;
  }
  else {
    uVar3 = *(uint *)((longlong)param_1 + 0x3c);
    fVar1 = *(float *)(param_3 + 0x10);
    _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
    *param_1 = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
LAB_143208877:
      uVar5 = 0x34;
    }
    else {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uVar4 * 8));
      *(uint *)(param_1 + 2) = uVar4;
      uVar7 = 0;
      *(uint *)(param_1 + 1) = (int)(longlong)((float)uVar3 * fVar1) + 3U & 0xfffffffc;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      if (((int)param_1[1] != 0) && ((int)param_1[2] != 0)) {
        do {
          uVar6 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 1) << 2);
          *(undefined8 *)(*param_1 + uVar7 * 8) = uVar6;
          if (*(longlong *)(*param_1 + uVar7 * 8) == 0) goto LAB_143208877;
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 2));
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 143208900 Process body=1106 status=ok
// SIG undefined Process(void)

void CAkDelayFXDSP::Process(longlong *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
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
  
  uVar9 = *(uint *)(param_1 + 8);
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    uVar11 = *(ushort *)((longlong)param_2 + 0x12);
    goto LAB_143208a01;
  }
  uVar17 = *(uint *)(param_1 + 3);
  if ((uVar17 == 0) && (uVar11 = 0, *(short *)((longlong)param_2 + 0x12) == 0)) goto LAB_143208a01;
  if ((uVar17 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) {
    *(uint *)(param_1 + 3) = uVar9;
    uVar17 = uVar9;
LAB_143208965:
    *(uint *)((longlong)param_1 + 0x1c) = uVar9;
  }
  else if (*(uint *)((longlong)param_1 + 0x1c) < uVar9) {
    uVar17 = (uVar17 - *(uint *)((longlong)param_1 + 0x1c)) + uVar9;
    *(uint *)(param_1 + 3) = uVar17;
    goto LAB_143208965;
  }
  uVar12 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar9 = uVar17;
  if (uVar12 <= uVar17) {
    uVar9 = uVar12;
  }
  *(uint *)(param_1 + 3) = uVar17 - uVar9;
  uVar15 = (ulonglong)*(byte *)(param_2 + 1);
  uVar11 = *(ushort *)((longlong)param_2 + 0x12);
  iVar13 = (uint)*(ushort *)(param_2 + 2) - (uint)uVar11;
  if (iVar13 != 0) {
    uVar11 = *(ushort *)(param_2 + 2);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar16 = 0;
      do {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 +
                           ((ulonglong)*(ushort *)(param_2 + 2) * lVar16 +
                           (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar13 * 4));
        lVar16 = lVar16 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      uVar11 = *(ushort *)(param_2 + 2);
    }
    *(ushort *)((longlong)param_2 + 0x12) = uVar11;
  }
  if ((int)param_1[3] != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_143208a01:
  if (*(char *)(param_3 + 3) == '\0') {
    *param_3 = 0.0;
  }
  uVar9 = 0;
  uVar15 = 0;
  if ((int)param_1[7] != 0) {
    fVar55 = 1.0 / (float)uVar11;
    do {
      uVar12 = 0;
      fVar50 = *(float *)(param_1 + 5);
      fVar45 = *(float *)(param_1 + 4);
      fVar44 = *(float *)((longlong)param_1 + 0x24);
      uVar9 = *(uint *)((longlong)param_1 + 0xc);
      uVar17 = *(uint *)(param_1 + 1);
      fVar41 = (param_3[2] - fVar50) * fVar55;
      fVar20 = fVar41 * 4.0;
      fVar21 = fVar41 + fVar50;
      pfVar19 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar15 * 4);
      fVar34 = fVar41 + fVar21;
      fVar41 = fVar41 + fVar34;
      fVar42 = (*param_3 - fVar45) * fVar55;
      fVar22 = fVar42 * 4.0;
      fVar23 = fVar42 + fVar45;
      fVar35 = fVar42 + fVar23;
      fVar42 = fVar42 + fVar35;
      fVar43 = (param_3[1] - fVar44) * fVar55;
      fVar24 = fVar43 * 4.0;
      fVar25 = fVar43 + fVar44;
      fVar36 = fVar43 + fVar25;
      fVar43 = fVar43 + fVar36;
      fVar26 = 1.0 - fVar44;
      fVar28 = 1.0 - fVar25;
      fVar30 = 1.0 - fVar36;
      fVar32 = 1.0 - fVar43;
      fVar46 = fVar44;
      fVar47 = fVar25;
      fVar48 = fVar36;
      fVar49 = fVar43;
      fVar51 = fVar45;
      fVar52 = fVar23;
      fVar53 = fVar35;
      fVar54 = fVar42;
      fVar27 = fVar50;
      fVar29 = fVar21;
      fVar31 = fVar34;
      fVar33 = fVar41;
      if (uVar11 != 0) {
        do {
          uVar14 = uVar17 - uVar9;
          if (uVar11 - uVar12 <= uVar14) {
            uVar14 = uVar11 - uVar12;
          }
          pfVar18 = (float *)(*(longlong *)(*param_1 + uVar15 * 8) + (ulonglong)uVar9 * 4);
          for (uVar10 = uVar14 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            fVar1 = *pfVar19;
            fVar2 = pfVar19[1];
            fVar3 = pfVar19[2];
            fVar4 = pfVar19[3];
            fVar44 = fVar44 + fVar24;
            fVar25 = fVar25 + fVar24;
            fVar36 = fVar36 + fVar24;
            fVar43 = fVar43 + fVar24;
            fVar5 = *pfVar18;
            fVar6 = pfVar18[1];
            fVar7 = pfVar18[2];
            fVar8 = pfVar18[3];
            fVar45 = fVar45 + fVar22;
            fVar23 = fVar23 + fVar22;
            fVar35 = fVar35 + fVar22;
            fVar42 = fVar42 + fVar22;
            fVar37 = fVar1 * fVar26;
            fVar38 = fVar2 * fVar28;
            fVar39 = fVar3 * fVar30;
            fVar40 = fVar4 * fVar32;
            fVar27 = fVar20 + fVar27;
            fVar29 = fVar20 + fVar29;
            fVar31 = fVar20 + fVar31;
            fVar33 = fVar20 + fVar33;
            fVar26 = 1.0 - fVar44;
            fVar28 = 1.0 - fVar25;
            fVar30 = 1.0 - fVar36;
            fVar32 = 1.0 - fVar43;
            *pfVar19 = (fVar37 + fVar5 * fVar46) * fVar50;
            pfVar19[1] = (fVar38 + fVar6 * fVar47) * fVar21;
            pfVar19[2] = (fVar39 + fVar7 * fVar48) * fVar34;
            pfVar19[3] = (fVar40 + fVar8 * fVar49) * fVar41;
            pfVar19 = pfVar19 + 4;
            *pfVar18 = fVar5 * fVar51 + fVar1;
            pfVar18[1] = fVar6 * fVar52 + fVar2;
            pfVar18[2] = fVar7 * fVar53 + fVar3;
            pfVar18[3] = fVar8 * fVar54 + fVar4;
            pfVar18 = pfVar18 + 4;
            fVar46 = fVar44;
            fVar47 = fVar25;
            fVar48 = fVar36;
            fVar49 = fVar43;
            fVar50 = fVar27;
            fVar21 = fVar29;
            fVar34 = fVar31;
            fVar41 = fVar33;
            fVar51 = fVar45;
            fVar52 = fVar23;
            fVar53 = fVar35;
            fVar54 = fVar42;
          }
          uVar10 = uVar14 + uVar9;
          uVar12 = uVar12 + uVar14;
          uVar9 = 0;
          if (uVar10 != uVar17) {
            uVar9 = uVar10;
          }
        } while (uVar12 < uVar11);
      }
      uVar17 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar17;
    } while (uVar17 < *(uint *)(param_1 + 7));
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar9;
  lVar16 = *(longlong *)(param_3 + 2);
  param_1[4] = *(longlong *)param_3;
  param_1[5] = lVar16;
  param_1[6] = *(longlong *)(param_3 + 4);
  return;
}



// FUNCTION 143208d60 ResetDelay body=111 status=ok
// SIG undefined ResetDelay(void)

void CAkDelayFXDSP::ResetDelay(longlong *param_1)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  
  if ((int)param_1[1] == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  uVar2 = 0;
  if ((int)param_1[2] == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  do {
    _Dst = *(void **)(*param_1 + uVar2 * 8);
    if (_Dst != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)((int)param_1[1] << 2));
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 2));
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 143208dd0 Setup body=35 status=ok
// SIG undefined Setup(void)

void CAkDelayFXDSP::Setup(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143208e00 Term body=165 status=ok
// SIG undefined Term(void)

void AK::DSP::CAkDelayLineMemory<float>::Term(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if ((int)param_1[2] != 0) {
    do {
      lVar2 = *param_1;
      lVar1 = *(longlong *)(uVar3 * 8 + lVar2);
      if (lVar1 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,lVar1);
        *(undefined8 *)(uVar3 * 8 + *param_1) = 0;
        lVar2 = *param_1;
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 2));
  }
  (**(code **)(*param_2 + 0x10))(param_2,lVar2);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 143208eb0 TermDelay body=5 status=ok
// SIG undefined TermDelay(void)

void CAkDelayFXDSP::TermDelay(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if ((int)param_1[2] != 0) {
    do {
      lVar2 = *param_1;
      lVar1 = *(longlong *)(uVar3 * 8 + lVar2);
      if (lVar1 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,lVar1);
        *(undefined8 *)(uVar3 * 8 + *param_1) = 0;
        lVar2 = *param_1;
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 2));
  }
  (**(code **)(*param_2 + 0x10))(param_2,lVar2);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 143208ec0 FUN_143208ec0 body=43 status=ok
// SIG undefined FUN_143208ec0(void)

undefined8 * FUN_143208ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 143208ef0 FUN_143208ef0 body=60 status=ok
// SIG undefined FUN_143208ef0(void)

undefined8 * FUN_143208ef0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4f38;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[6] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143208f30 Execute body=101 status=ok
// SIG undefined Execute(void)

void CAkExpanderFX::Execute(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(short *)(param_2 + 0x12) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    local_28 = *(undefined4 *)(lVar1 + 8);
    uStack_24 = *(undefined4 *)(lVar1 + 0xc);
    uStack_20 = *(undefined4 *)(lVar1 + 0x10);
    uStack_1c = *(undefined4 *)(lVar1 + 0x14);
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    (**(code **)(param_1 + 0x10))(local_28,local_18,&local_28);
    AK::DSP::ApplyGain(param_2,*(undefined4 *)(param_1 + 0x18),(undefined4)local_18,
                       *(undefined1 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x18) = (undefined4)local_18;
  }
  return;
}



// FUNCTION 143208fa0 Init body=372 status=ok
// SIG undefined Init(void)

undefined8
CAkExpanderFX::Init(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                   uint *param_5)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  undefined4 local_58;
  
  *(longlong *)(param_1 + 8) = param_4;
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  fVar9 = *(float *)(param_4 + 0x10);
  fVar3 = *(float *)(param_4 + 0x14);
  cVar6 = (char)((ulonglong)uVar5 >> 0x20);
  *(char *)(param_1 + 0x48) = cVar6;
  bVar1 = (byte)param_5[1];
  uVar7 = (uint)bVar1;
  *(uint *)(param_1 + 0x1c) = (uint)bVar1;
  uVar2 = *param_5;
  *(float *)(param_1 + 0x38) = fVar9;
  *(uint *)(param_1 + 0x20) = uVar2;
  fVar10 = (float)uVar2;
  fVar9 = ::_guard_xfg_dispatch_icall_nop(-2.2 / (fVar10 * fVar9));
  *(float *)(param_1 + 0x3c) = fVar9;
  *(float *)(param_1 + 0x40) = fVar3;
  fVar9 = ::_guard_xfg_dispatch_icall_nop(-2.2 / (fVar10 * fVar3));
  *(float *)(param_1 + 0x44) = fVar9;
  cVar8 = (char)((ulonglong)uVar5 >> 0x28);
  if ((cVar8 == '\0') || (bVar1 == 1)) {
    *(code **)(param_1 + 0x10) = Process;
  }
  else {
    *(code **)(param_1 + 0x10) = ProcessLinked;
    if (((param_5[1] & 0x8000) != 0) && (cVar6 == '\0')) {
      uVar7 = bVar1 - 1;
    }
  }
  if (cVar8 != '\0') {
    uVar7 = 1;
  }
  *(uint *)(param_1 + 0x24) = uVar7;
  lVar4 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)uVar7 << 3);
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (lVar4 == 0) {
    uVar5 = 0x34;
  }
  else {
    fVar9 = ::_guard_xfg_dispatch_icall_nop(-43.066322 / (float)*(uint *)(param_1 + 0x20));
    local_58 = (undefined4)uVar5;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x18) = local_58;
    *(float *)(param_1 + 0x28) = fVar9;
  }
  return uVar5;
}



// FUNCTION 143209120 Process body=2477 status=ok
// SIG undefined Process(void)

void CAkExpanderFX::Process(longlong param_1,longlong *param_2,float *param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar2 = *param_3;
  fVar19 = param_3[1] - 1.0;
  if (param_3[2] == *(float *)(param_1 + 0x38)) {
    fVar14 = *(float *)(param_1 + 0x3c);
  }
  else {
    *(float *)(param_1 + 0x38) = param_3[2];
    fVar14 = ::_guard_xfg_dispatch_icall_nop(-2.2 / ((float)*(uint *)(param_1 + 0x20) * param_3[2]))
    ;
    *(float *)(param_1 + 0x3c) = fVar14;
  }
  if (param_3[3] == *(float *)(param_1 + 0x40)) {
    fVar15 = *(float *)(param_1 + 0x44);
  }
  else {
    *(float *)(param_1 + 0x40) = param_3[3];
    fVar15 = ::_guard_xfg_dispatch_icall_nop(-2.2 / ((float)*(uint *)(param_1 + 0x20) * param_3[3]))
    ;
    *(float *)(param_1 + 0x44) = fVar15;
  }
  fVar3 = *(float *)(param_1 + 0x28);
  if (((*(uint *)(param_2 + 1) & 0x8000) == 0) || (*(char *)(param_1 + 0x48) != '\0')) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar4 = *(int *)(param_1 + 0x1c) - 1;
  }
  if (uVar4 != 0) {
    uVar13 = 0;
    uVar9 = (ulonglong)uVar4;
    uVar8 = uVar13;
    uVar12 = uVar13;
    do {
      pfVar10 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar8 * 4);
      uVar11 = (ulonglong)*(ushort *)((longlong)param_2 + 0x12);
      if ((float *)(*param_2 +
                   (*(ushort *)(param_2 + 2) * uVar8 +
                   (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4) < pfVar10) {
        uVar11 = uVar13;
      }
      fVar5 = *(float *)(uVar12 + 4 + *(longlong *)(param_1 + 0x30));
      fVar17 = *(float *)(uVar12 + *(longlong *)(param_1 + 0x30));
      uVar1 = uVar13;
      if (3 < uVar11) {
        lVar7 = (uVar11 - 4 >> 2) + 1;
        uVar1 = lVar7 * 4;
        do {
          fVar6 = *pfVar10;
          fVar16 = fVar6 * fVar6 + 1e-25;
          fVar16 = (fVar5 - fVar16) * fVar3 + fVar16;
          fVar5 = (float)(((uint)fVar16 & 0x7fffff) + 0x3f800000);
          fVar18 = fVar5 + 1.0;
          fVar5 = fVar2 - ((11.581186 / (fVar18 * fVar18 * fVar18)) * (fVar5 * fVar5 * fVar5 - 1.0)
                          + ((float)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 3.0103);
          if (fVar5 <= 0.0) {
            fVar5 = 0.0;
          }
          fVar18 = fVar14;
          if (0.0 <= fVar5 - fVar17) {
            fVar18 = fVar15;
          }
          fVar5 = (fVar17 - fVar5) * fVar18 + fVar5;
          fVar17 = fVar5 * fVar19 * -0.05;
          if (-37.0 <= fVar17) {
            uVar4 = (uint)(longlong)(fVar17 * 27866352.0 + 1.0653532e+09);
            fVar17 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            fVar17 = ((fVar17 * 0.32518977 + 0.020805772) * fVar17 + 0.65304345) *
                     (float)(uVar4 & 0xff800000);
          }
          else {
            fVar17 = 0.0;
          }
          *pfVar10 = fVar6 * fVar17;
          fVar17 = pfVar10[1];
          fVar18 = fVar17 * fVar17 + 1e-25;
          fVar18 = (fVar16 - fVar18) * fVar3 + fVar18;
          fVar6 = (float)(((uint)fVar18 & 0x7fffff) + 0x3f800000);
          fVar16 = fVar6 + 1.0;
          fVar6 = fVar2 - ((11.581186 / (fVar16 * fVar16 * fVar16)) * (fVar6 * fVar6 * fVar6 - 1.0)
                          + ((float)((uint)fVar18 >> 0x17 & 0xff) - 127.0) * 3.0103);
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          fVar16 = fVar14;
          if (0.0 <= fVar6 - fVar5) {
            fVar16 = fVar15;
          }
          fVar6 = (fVar5 - fVar6) * fVar16 + fVar6;
          fVar5 = fVar6 * fVar19 * -0.05;
          if (-37.0 <= fVar5) {
            uVar4 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
            fVar5 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) *
                    (float)(uVar4 & 0xff800000);
          }
          else {
            fVar5 = 0.0;
          }
          pfVar10[1] = fVar17 * fVar5;
          fVar5 = pfVar10[2];
          fVar16 = fVar5 * fVar5 + 1e-25;
          fVar16 = (fVar18 - fVar16) * fVar3 + fVar16;
          fVar17 = (float)(((uint)fVar16 & 0x7fffff) + 0x3f800000);
          fVar18 = fVar17 + 1.0;
          fVar18 = fVar2 - ((11.581186 / (fVar18 * fVar18 * fVar18)) *
                            (fVar17 * fVar17 * fVar17 - 1.0) +
                           ((float)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 3.0103);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar17 = fVar14;
          if (0.0 <= fVar18 - fVar6) {
            fVar17 = fVar15;
          }
          fVar18 = (fVar6 - fVar18) * fVar17 + fVar18;
          fVar17 = fVar18 * fVar19 * -0.05;
          if (-37.0 <= fVar17) {
            uVar4 = (uint)(longlong)(fVar17 * 27866352.0 + 1.0653532e+09);
            fVar17 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            fVar17 = ((fVar17 * 0.32518977 + 0.020805772) * fVar17 + 0.65304345) *
                     (float)(uVar4 & 0xff800000);
          }
          else {
            fVar17 = 0.0;
          }
          pfVar10[2] = fVar5 * fVar17;
          fVar6 = pfVar10[3];
          fVar5 = fVar6 * fVar6 + 1e-25;
          fVar5 = (fVar16 - fVar5) * fVar3 + fVar5;
          fVar17 = (float)(((uint)fVar5 & 0x7fffff) + 0x3f800000);
          fVar16 = fVar17 + 1.0;
          fVar17 = fVar2 - ((11.581186 / (fVar16 * fVar16 * fVar16)) *
                            (fVar17 * fVar17 * fVar17 - 1.0) +
                           ((float)((uint)fVar5 >> 0x17 & 0xff) - 127.0) * 3.0103);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          fVar16 = fVar14;
          if (0.0 <= fVar17 - fVar18) {
            fVar16 = fVar15;
          }
          fVar17 = (fVar18 - fVar17) * fVar16 + fVar17;
          fVar16 = fVar17 * fVar19 * -0.05;
          if (-37.0 <= fVar16) {
            uVar4 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09);
            fVar16 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
            fVar16 = ((fVar16 * 0.32518977 + 0.020805772) * fVar16 + 0.65304345) *
                     (float)(uVar4 & 0xff800000);
          }
          else {
            fVar16 = 0.0;
          }
          pfVar10[3] = fVar6 * fVar16;
          pfVar10 = pfVar10 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      for (; uVar1 < uVar11; uVar1 = uVar1 + 1) {
        fVar6 = *pfVar10;
        fVar16 = fVar6 * fVar6 + 1e-25;
        fVar5 = (fVar5 - fVar16) * fVar3 + fVar16;
        fVar16 = (float)(((uint)fVar5 & 0x7fffff) + 0x3f800000);
        fVar18 = fVar16 + 1.0;
        fVar16 = fVar2 - ((11.581186 / (fVar18 * fVar18 * fVar18)) *
                          (fVar16 * fVar16 * fVar16 - 1.0) +
                         ((float)((uint)fVar5 >> 0x17 & 0xff) - 127.0) * 3.0103);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar18 = fVar14;
        if (0.0 <= fVar16 - fVar17) {
          fVar18 = fVar15;
        }
        fVar17 = (fVar17 - fVar16) * fVar18 + fVar16;
        fVar16 = fVar17 * fVar19 * -0.05;
        if (-37.0 <= fVar16) {
          uVar4 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09);
          fVar16 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
          fVar16 = ((fVar16 * 0.32518977 + 0.020805772) * fVar16 + 0.65304345) *
                   (float)(uVar4 & 0xff800000);
        }
        else {
          fVar16 = 0.0;
        }
        *pfVar10 = fVar6 * fVar16;
        pfVar10 = pfVar10 + 1;
      }
      uVar8 = uVar8 + 1;
      *(float *)(uVar12 + 4 + *(longlong *)(param_1 + 0x30)) = fVar5;
      *(float *)(uVar12 + *(longlong *)(param_1 + 0x30)) = fVar17;
      uVar12 = uVar12 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 143209ad0 ProcessLinked body=1259 status=ok
// SIG undefined ProcessLinked(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkExpanderFX::ProcessLinked(longlong param_1,longlong *param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  float *pfVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong local_c8 [20];
  
  if (((*(uint *)(param_2 + 1) & 0x8000) == 0) || (*(char *)(param_1 + 0x48) != '\0')) {
    uVar17 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar17 = *(int *)(param_1 + 0x1c) - 1;
  }
  fVar5 = param_3[1];
  fVar6 = *param_3;
  if (param_3[2] == *(float *)(param_1 + 0x38)) {
    fVar19 = *(float *)(param_1 + 0x3c);
  }
  else {
    *(float *)(param_1 + 0x38) = param_3[2];
    fVar19 = ::_guard_xfg_dispatch_icall_nop(-2.2 / ((float)*(uint *)(param_1 + 0x20) * param_3[2]))
    ;
    *(float *)(param_1 + 0x3c) = fVar19;
  }
  if (param_3[3] == *(float *)(param_1 + 0x40)) {
    fVar20 = *(float *)(param_1 + 0x44);
  }
  else {
    *(float *)(param_1 + 0x40) = param_3[3];
    fVar20 = ::_guard_xfg_dispatch_icall_nop(-2.2 / ((float)*(uint *)(param_1 + 0x20) * param_3[3]))
    ;
    *(float *)(param_1 + 0x44) = fVar20;
  }
  fVar7 = *(float *)(param_1 + 0x28);
  uVar16 = (ulonglong)uVar17;
  fVar24 = (*(float **)(param_1 + 0x30))[1];
  fVar23 = **(float **)(param_1 + 0x30);
  uVar13 = uVar16 * 8 + 0xf;
  if (uVar13 <= uVar16 * 8) {
    uVar13 = 0xffffffffffffff0;
  }
  lVar10 = -(uVar13 & 0xfffffffffffffff0);
  plVar4 = (longlong *)((longlong)local_c8 + lVar10);
  if (uVar17 != 0) {
    uVar8 = *(ushort *)(param_2 + 2);
    lVar14 = *param_2;
    plVar12 = plVar4;
    do {
      *plVar12 = lVar14;
      plVar12 = plVar12 + 1;
      lVar14 = lVar14 + (ulonglong)uVar8 * 4;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar18 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  while (uVar18 = uVar18 - 1, -1 < (int)uVar18) {
    uVar13 = 0;
    fVar22 = 0.0;
    if (3 < uVar17) {
      puVar15 = (undefined8 *)((longlong)local_c8 + lVar10 + 0x10);
      uVar11 = (uVar17 - 4 >> 2) + 1;
      uVar16 = (ulonglong)uVar11;
      uVar13 = (ulonglong)(uVar11 * 4);
      do {
        puVar1 = puVar15 + -2;
        puVar2 = puVar15 + -1;
        pfVar9 = (float *)*puVar15;
        puVar3 = puVar15 + 1;
        puVar15 = puVar15 + 4;
        fVar22 = fVar22 + *(float *)*puVar1 * *(float *)*puVar1 +
                 *(float *)*puVar2 * *(float *)*puVar2 + *pfVar9 * *pfVar9 +
                 *(float *)*puVar3 * *(float *)*puVar3;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if ((uint)uVar13 < uVar17) {
      plVar12 = plVar4 + uVar13;
      uVar13 = (ulonglong)(uVar17 - (uint)uVar13);
      do {
        pfVar9 = (float *)*plVar12;
        plVar12 = plVar12 + 1;
        fVar22 = fVar22 + *pfVar9 * *pfVar9;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    fVar22 = fVar22 * (1.0 / (float)uVar17) + 1e-25;
    fVar24 = (fVar24 - fVar22) * fVar7 + fVar22;
    fVar22 = (float)(((uint)fVar24 & 0x7fffff) + 0x3f800000);
    fVar21 = fVar22 + 1.0;
    fVar22 = fVar6 - ((11.581186 / (fVar21 * fVar21 * fVar21)) * (fVar22 * fVar22 * fVar22 - 1.0) +
                     ((float)((uint)fVar24 >> 0x17 & 0xff) - 127.0) * 3.0103);
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    fVar21 = fVar19;
    if (0.0 <= fVar22 - fVar23) {
      fVar21 = fVar20;
    }
    fVar23 = (fVar23 - fVar22) * fVar21 + fVar22;
    fVar22 = fVar23 * (fVar5 - 1.0) * -0.05;
    if (-37.0 <= fVar22) {
      uVar11 = (uint)(longlong)(fVar22 * 27866352.0 + 1.0653532e+09);
      fVar22 = (float)((uVar11 & 0x7fffff) + 0x3f800000);
      fVar22 = ((fVar22 * 0.32518977 + 0.020805772) * fVar22 + 0.65304345) *
               (float)(uVar11 & 0xff800000);
    }
    else {
      fVar22 = 0.0;
    }
    uVar13 = 0;
    if (3 < uVar17) {
      uVar11 = (uVar17 - 4 >> 2) + 1;
      uVar16 = (ulonglong)uVar11;
      uVar13 = (ulonglong)(uVar11 * 4);
      puVar15 = (undefined8 *)((longlong)local_c8 + lVar10 + 0x10);
      do {
        pfVar9 = (float *)puVar15[-2];
        *pfVar9 = fVar22 * *pfVar9;
        puVar15[-2] = pfVar9 + 1;
        pfVar9 = (float *)puVar15[-1];
        *pfVar9 = fVar22 * *pfVar9;
        puVar15[-1] = pfVar9 + 1;
        pfVar9 = (float *)*puVar15;
        *pfVar9 = fVar22 * *pfVar9;
        *puVar15 = pfVar9 + 1;
        pfVar9 = (float *)puVar15[1];
        *pfVar9 = fVar22 * *pfVar9;
        puVar15[1] = pfVar9 + 1;
        uVar16 = uVar16 - 1;
        puVar15 = puVar15 + 4;
      } while (uVar16 != 0);
    }
    if ((uint)uVar13 < uVar17) {
      uVar16 = (ulonglong)(uVar17 - (uint)uVar13);
      plVar12 = plVar4 + uVar13;
      do {
        pfVar9 = (float *)*plVar12;
        *pfVar9 = fVar22 * *pfVar9;
        *plVar12 = (longlong)(pfVar9 + 1);
        uVar16 = uVar16 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar16 != 0);
    }
  }
  *(float *)(*(longlong *)(param_1 + 0x30) + 4) = fVar24;
  **(float **)(param_1 + 0x30) = fVar23;
  return;
}



// FUNCTION 14320a000 FUN_14320a000 body=72 status=ok
// SIG undefined FUN_14320a000(void)

undefined8 FUN_14320a000(undefined8 *param_1,longlong *param_2)

{
  if (param_1[6] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14320a050 FUN_14320a050 body=71 status=ok
// SIG undefined FUN_14320a050(void)

void FUN_14320a050(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae4f90;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14320a0a0 FUN_14320a0a0 body=40 status=ok
// SIG undefined FUN_14320a0a0(void)

void FUN_14320a0a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4f90;
    return;
  }
  return;
}



// FUNCTION 14320a120 FUN_14320a120 body=345 status=ok
// SIG undefined FUN_14320a120(void)

undefined4 FUN_14320a120(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      fVar1 = *param_3;
      fVar2 = -96.3;
      if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 8) = fVar2;
      return 1;
    case 1:
      *(float *)(param_1 + 0xc) = *param_3;
      return 1;
    case 2:
      fVar1 = *param_3;
      fVar2 = 0.0;
      if ((0.0 <= fVar1) && (fVar2 = fVar1, 2.0 <= fVar1)) {
        fVar2 = 2.0;
      }
      *(float *)(param_1 + 0x10) = fVar2;
      return 1;
    case 3:
      fVar1 = *param_3;
      fVar2 = 0.0;
      if ((0.0 <= fVar1) && (fVar2 = fVar1, 2.0 <= fVar1)) {
        fVar2 = 2.0;
      }
      break;
    case 4:
      fVar1 = *param_3;
      fVar2 = -24.0;
      if ((-24.0 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
        fVar2 = 24.0;
      }
      fVar1 = _guard_xfg_dispatch_icall_nop(10.0,fVar2 * 0.05);
      *(float *)(param_1 + 0x18) = fVar1;
      return 1;
    case 5:
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)param_3;
      return 1;
    case 6:
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)param_3;
      return 1;
    default:
      return 0x1f;
    }
    *(float *)(param_1 + 0x14) = fVar2;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 14320a2a0 FUN_14320a2a0 body=116 status=ok
// SIG undefined FUN_14320a2a0(void)

undefined8 FUN_14320a2a0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  fVar1 = _guard_xfg_dispatch_icall_nop(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x18) = fVar1;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x15);
  return 1;
}



// FUNCTION 14320a320 FUN_14320a320 body=43 status=ok
// SIG undefined FUN_14320a320(void)

undefined8 * FUN_14320a320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14320a350 ComputeFilterCoefsFromParams body=253 status=ok
// SIG undefined ComputeFilterCoefsFromParams(void)

void DSP::MonoLFO<DSP::Bipolar,FlangerOutputPolicy>::ComputeFilterCoefsFromParams
               (uint param_1,longlong param_2,float *param_3,float *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  double dVar5;
  undefined8 extraout_XMM0_Qb;
  
  fVar4 = *(float *)(param_2 + 8);
  if (fVar4 == 0.0) {
    *param_4 = 0.0;
    *param_3 = 1.0;
    return;
  }
  dVar5 = (double)param_1;
  dVar1 = (double)*(float *)(param_2 + 4);
  if (dVar5 <= (double)*(float *)(param_2 + 4)) {
    dVar1 = dVar5;
  }
  dVar1 = ::_guard_xfg_dispatch_icall_nop((dVar5 * 0.5) / dVar1);
  dVar1 = ::_guard_xfg_dispatch_icall_nop(-(dVar1 * (double)fVar4));
  auVar2._0_8_ = ::_guard_xfg_dispatch_icall_nop
                           (((dVar1 * dVar5 * 0.5) / dVar5) * 6.283185307179586);
  auVar2._8_8_ = extraout_XMM0_Qb;
  dVar5 = 2.0 - auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 - 1.0;
  auVar3 = sqrtpd(auVar2,auVar3);
  fVar4 = (float)(auVar3._0_8_ - dVar5);
  *param_4 = fVar4;
  *param_3 = fVar4 + 1.0;
  return;
}



// FUNCTION 14320a450 CreateAkFlangerFX body=105 status=ok
// SIG undefined CreateAkFlangerFX(void)

undefined8 * CreateAkFlangerFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae4fc0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
    _guard_xfg_dispatch_icall_nop(puVar1 + 6,0,0x80);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14320a4c0 Execute body=1656 status=ok
// SIG undefined Execute(void)

void CAkFlangerFX::Execute(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined4 local_res8 [2];
  uint local_res18 [2];
  void *local_res20;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong local_b8;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(lVar11 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar11 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(lVar11 + 0x20);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar11 + 0x18);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  uVar20 = *(undefined4 *)(lVar11 + 0x2c);
  uVar1 = *(undefined4 *)(lVar11 + 0x30);
  uVar2 = *(undefined4 *)(lVar11 + 0x34);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar11 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = uVar20;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar20 = *(undefined4 *)(lVar11 + 0x3c);
  uVar1 = *(undefined4 *)(lVar11 + 0x40);
  uVar2 = *(undefined4 *)(lVar11 + 0x44);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar11 + 0x38);
  *(undefined4 *)(param_1 + 100) = uVar20;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  CAkFlangerFXParams::SetDirty(lVar11,0);
  uVar15 = 0;
  local_b8 = 0;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 0x6f) != '\0') {
    iVar7 = LiveParametersUpdate(param_1,param_2);
    if (iVar7 != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (*(char *)(param_1 + 100) != '\0') {
    uVar14 = uVar15;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        DSP::UniComb::SetParams
                  (uVar14 * 0x38 + *(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x3c));
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(param_1 + 0xb8));
    }
    plVar3 = *(longlong **)(param_1 + 0x10);
    if ((plVar3 != (longlong *)0x0) && (*(char *)(param_1 + 0x6c) != '\0')) {
      uVar12 = *(uint *)(param_1 + 0xbc);
      DSP::MonoLFO<DSP::Bipolar,FlangerOutputPolicy>::ComputeFilterCoefsFromParams
                (uVar12,param_1 + 0x40,local_res18,local_res8);
      if ((int)plVar3[1] != 0) {
        fVar17 = (float)uVar12;
        uVar14 = uVar15;
        do {
          lVar11 = uVar14 * 0x20 + *plVar3;
          if (fVar17 <= *(float *)(param_1 + 0x44)) {
            fVar16 = 1.0;
          }
          else {
            fVar16 = *(float *)(param_1 + 0x44) / fVar17;
          }
          *(float *)(lVar11 + 0x10) = fVar16;
          if (*(int *)(param_1 + 0x40) == 0) {
            *(float *)(lVar11 + 0x10) = fVar16 * 6.2831855;
          }
          *(uint *)(lVar11 + 4) = local_res18[0];
          *(undefined4 *)(lVar11 + 8) = local_res8[0];
          if (*(int *)(lVar11 + 0x14) != *(int *)(param_1 + 0x40)) {
            if (*(int *)(lVar11 + 0x14) == 0) {
              fVar16 = *(float *)(lVar11 + 0xc) * 0.15915494;
            }
            else {
              if (*(int *)(param_1 + 0x40) != 0) goto LAB_14320a68a;
              fVar16 = *(float *)(lVar11 + 0xc) * 6.2831855;
            }
            *(float *)(lVar11 + 0xc) = fVar16;
          }
LAB_14320a68a:
          uVar12 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar12;
          *(undefined4 *)(lVar11 + 0x14) = *(undefined4 *)(param_1 + 0x40);
        } while (uVar12 < *(uint *)(plVar3 + 1));
      }
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    return;
  }
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    uVar6 = *(ushort *)((longlong)param_2 + 0x12);
    goto LAB_14320a7b7;
  }
  uVar12 = *(uint *)(param_1 + 0xb0);
  if ((uVar12 == 0) && (uVar6 = 0, *(short *)((longlong)param_2 + 0x12) == 0)) goto LAB_14320a7b7;
  uVar10 = (uint)(longlong)(*(float *)(param_1 + 0x68) * 0.001 * (float)*(uint *)(param_1 + 0xbc));
  if ((uVar12 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) {
    *(uint *)(param_1 + 0xb0) = uVar10;
    uVar12 = uVar10;
LAB_14320a717:
    *(uint *)(param_1 + 0xb4) = uVar10;
  }
  else if (*(uint *)(param_1 + 0xb4) < uVar10) {
    uVar12 = (uVar12 - *(uint *)(param_1 + 0xb4)) + uVar10;
    *(uint *)(param_1 + 0xb0) = uVar12;
    goto LAB_14320a717;
  }
  uVar9 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar10 = uVar12;
  if (uVar9 <= uVar12) {
    uVar10 = uVar9;
  }
  *(uint *)(param_1 + 0xb0) = uVar12 - uVar10;
  uVar6 = *(ushort *)((longlong)param_2 + 0x12);
  uVar14 = (ulonglong)*(byte *)(param_2 + 1);
  iVar7 = (uint)*(ushort *)(param_2 + 2) - (uint)uVar6;
  if (iVar7 != 0) {
    uVar6 = *(ushort *)(param_2 + 2);
    if (*(byte *)(param_2 + 1) != 0) {
      uVar13 = uVar15;
      do {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 +
                           (*(ushort *)(param_2 + 2) * uVar13 +
                           (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar7 * 4));
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar6 = *(ushort *)(param_2 + 2);
    }
    *(ushort *)((longlong)param_2 + 0x12) = uVar6;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_14320a7b7:
  if (0x1f < uVar6) {
    uVar12 = *(uint *)(param_2 + 1);
    uVar14 = (ulonglong)uVar6;
    if (*(char *)(param_1 + 0x6e) == '\0') {
      uVar10 = uVar12 >> 0xc & 0xffff7;
      uVar12 = uVar12 - ((uVar12 >> 0xc) - uVar10 >> 3) & 0xff | uVar10 << 0xc;
    }
    if ((*(char *)(param_1 + 0x6d) == '\0') && ((uVar12 & 0x7000) == 0x7000)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    pvVar8 = (void *)(**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                               (*(longlong **)(param_1 + 0x20),
                                (ulonglong)*(ushort *)(param_2 + 2) << 2);
    if (pvVar8 != (void *)0x0) {
      fVar17 = 1.0 - *(float *)(param_1 + 0xa0);
      fVar16 = 1.0 - *(float *)(param_1 + 0x60);
      local_res20 = pvVar8;
      if (*(char *)(param_1 + 0x6c) == '\0') {
        uVar13 = uVar15;
        if ((char)uVar12 != '\0') {
          do {
            uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
            if ((!bVar5) || ((int)uVar15 != 2)) {
              _Src = (void *)(*param_2 + uVar15 * *(ushort *)(param_2 + 2) * 4);
              ::_guard_xfg_dispatch_icall_nop(pvVar8,_Src,(ulonglong)((uint)uVar6 * 4));
              DSP::UniComb::ProcessBuffer(uVar13 * 0x38 + *(longlong *)(param_1 + 8),_Src,uVar14,0);
              uVar13 = (ulonglong)((int)uVar13 + 1);
              in_stack_ffffffffffffff38 = CONCAT44(uVar20,(uint)uVar6);
              DSP::Mix2Interp(_Src,local_res20,*(float *)(param_1 + 0x9c) * (1.0 - fVar17),
                              *(float *)(param_1 + 0x5c) * (1.0 - fVar16),
                              *(float *)(param_1 + 0x9c) * fVar17,
                              *(float *)(param_1 + 0x5c) * fVar16,in_stack_ffffffffffffff38);
              pvVar8 = local_res20;
            }
            uVar10 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar10;
          } while (uVar10 < (uVar12 & 0xff));
        }
      }
      else {
        lVar11 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                           (*(longlong **)(param_1 + 0x20),uVar14 << 2);
        uVar20 = *(undefined4 *)(param_1 + 0x4c);
        uVar1 = *(undefined4 *)(param_1 + 0x3c);
        uVar2 = *(undefined4 *)(param_1 + 0x7c);
        uVar10 = uVar12 & 0xff;
        uVar13 = uVar15;
        local_res18[0] = uVar10;
        if ((char)uVar12 != '\0') {
          do {
            uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
            if ((!bVar5) || ((int)uVar15 != 2)) {
              if (lVar11 != 0) {
                puVar18 = local_res8;
                FUN_14320b080(uVar13 * 0x20 + **(longlong **)(param_1 + 0x10),lVar11,uVar14,uVar1,
                              uVar2,uVar20,puVar18);
                uVar19 = (undefined4)((ulonglong)puVar18 >> 0x20);
              }
              pvVar8 = (void *)(*param_2 + uVar15 * *(ushort *)(param_2 + 2) * 4);
              ::_guard_xfg_dispatch_icall_nop(local_res20,pvVar8,(ulonglong)((uint)uVar6 * 4));
              DSP::UniComb::ProcessBuffer
                        (uVar13 * 0x38 + *(longlong *)(param_1 + 8),pvVar8,uVar14,lVar11);
              uVar13 = (ulonglong)((int)local_b8 + 1);
              in_stack_ffffffffffffff38 = CONCAT44(uVar19,(uint)uVar6);
              DSP::Mix2Interp(pvVar8,local_res20,*(float *)(param_1 + 0x9c) * (1.0 - fVar17),
                              *(float *)(param_1 + 0x5c) * (1.0 - fVar16),
                              *(float *)(param_1 + 0x9c) * fVar17,
                              *(float *)(param_1 + 0x5c) * fVar16,in_stack_ffffffffffffff38);
              uVar10 = local_res18[0];
              local_b8 = uVar13;
            }
            uVar12 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar12;
          } while (uVar12 < uVar10);
        }
        if (lVar11 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                    (*(longlong **)(param_1 + 0x20),lVar11);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                (*(longlong **)(param_1 + 0x20),local_res20);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
    }
  }
  return;
}



// FUNCTION 14320ab40 Init body=313 status=ok
// SIG undefined Init(void)

ulonglong CAkFlangerFX::Init(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4
                            ,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  *(longlong *)(param_1 + 0x18) = param_4;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  uVar1 = *(undefined4 *)(param_4 + 0x2c);
  uVar2 = *(undefined4 *)(param_4 + 0x30);
  uVar3 = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)(param_4 + 0x3c);
  uVar2 = *(undefined4 *)(param_4 + 0x40);
  uVar3 = *(undefined4 *)(param_4 + 0x44);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  CAkFlangerFXParams::SetDirty(param_4,0);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
  uVar7 = param_5[1];
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar6 = uVar7 >> 0xc & 0xffff7;
    uVar7 = uVar7 & 0xf00 | uVar7 - ((uVar7 >> 0xc) - uVar6 >> 3) & 0xff | uVar6 << 0xc;
  }
  uVar6 = uVar7 >> 0xc;
  if ((((byte)uVar6 & 7) == 7) && (*(char *)(param_1 + 0x6d) == '\0')) {
    uVar7 = uVar7 & 0xf00 | uVar7 - (uVar6 - (uVar6 & 0xffffb) >> 2) & 0xff |
            (uVar6 & 0xffffb) << 0xc;
  }
  *(uint *)(param_1 + 0xb8) = uVar7 & 0xff;
  *(undefined4 *)(param_1 + 0xbc) = *param_5;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar5 = InitUniCombs(param_1,uVar7);
  if ((int)uVar5 == 1) {
    uVar6 = InitLFO(param_1,uVar7);
    uVar7 = 1;
    if (uVar6 != 1) {
      uVar7 = uVar6;
    }
    uVar5 = (ulonglong)uVar7;
  }
  return uVar5;
}



// FUNCTION 14320ac80 InitLFO body=158 status=ok
// SIG undefined InitLFO(void)

undefined8 CAkFlangerFX::InitLFO(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 1;
  if ((*(char *)(param_1 + 0x6c) != '\0') && ((char)param_2 != '\0')) {
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),0x10)
    ;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0x34;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
    uVar1 = FUN_14320bf00(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),uVar1,
                          param_2,*(undefined4 *)(param_1 + 0xbc),param_1 + 0x40);
  }
  return uVar1;
}



// FUNCTION 14320ad20 InitUniCombs body=512 status=ok
// SIG undefined InitUniCombs(void)

undefined8 CAkFlangerFX::InitUniCombs(longlong param_1,byte param_2)

{
  float fVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (param_2 != 0) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                      (*(longlong **)(param_1 + 0x20),(ulonglong)param_2 * 0x38);
    *(longlong *)(param_1 + 8) = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    uVar10 = 0;
    uVar3 = 0;
    if (3 < param_2) {
      uVar3 = (param_2 - 4 >> 2) + 1;
      uVar12 = (ulonglong)uVar3;
      uVar3 = uVar3 * 4;
      uVar8 = uVar10;
      do {
        lVar4 = *(longlong *)(param_1 + 8);
        puVar5 = (undefined8 *)(uVar8 + lVar4);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          *(undefined4 *)(puVar5 + 6) = 0;
          lVar4 = *(longlong *)(param_1 + 8);
        }
        puVar5 = (undefined8 *)(lVar4 + 0x38 + uVar8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          *(undefined4 *)(puVar5 + 6) = 0;
          lVar4 = *(longlong *)(param_1 + 8);
        }
        puVar5 = (undefined8 *)(uVar8 + 0x70 + lVar4);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          *(undefined4 *)(puVar5 + 6) = 0;
          lVar4 = *(longlong *)(param_1 + 8);
        }
        puVar5 = (undefined8 *)(uVar8 + 0xa8 + lVar4);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          *(undefined4 *)(puVar5 + 6) = 0;
        }
        uVar8 = uVar8 + 0xe0;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar11 = (uint)param_2;
    if (uVar3 < param_2) {
      lVar4 = (ulonglong)uVar3 * 0x38;
      uVar8 = (ulonglong)(uVar11 - uVar3);
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar4);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          *(undefined4 *)(puVar5 + 6) = 0;
        }
        lVar4 = lVar4 + 0x38;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar3 = *(uint *)(param_1 + 0xbc);
    fVar1 = *(float *)(param_1 + 0x68);
    if (uVar11 != 0) {
      do {
        plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
        uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar7 = DSP::UniComb::Init(uVar10 * 0x38 + *(longlong *)(param_1 + 8),
                                   *(undefined8 *)(param_1 + 0x20),
                                   (longlong)(fVar1 * 0.001 * (float)uVar3) & 0xffffffff,uVar2,
                                   *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34),
                                   *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c));
        if ((int)uVar7 != 1) {
          return uVar7;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar11);
    }
  }
  return 1;
}



// FUNCTION 14320af20 LiveParametersUpdate body=344 status=ok
// SIG undefined LiveParametersUpdate(void)

undefined8 CAkFlangerFX::LiveParametersUpdate(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar7 = uVar3 >> 0xc & 0xffff7;
    uVar3 = uVar3 & 0xf00 | uVar3 - ((uVar3 >> 0xc) - uVar7 >> 3) & 0xff | uVar7 << 0xc;
  }
  uVar7 = uVar3 >> 0xc;
  if ((((byte)uVar7 & 7) == 7) && (*(char *)(param_1 + 0x6d) == '\0')) {
    uVar3 = uVar3 & 0xf00 | uVar3 - (uVar7 - (uVar7 & 0xffffb) >> 2) & 0xff |
            (uVar7 & 0xffffb) << 0xc;
  }
  lVar6 = 0;
  uVar7 = *(uint *)(param_1 + 0xb8);
  uVar5 = uVar3 & 0xff;
  uVar4 = (ulonglong)uVar5;
  if ((*(char *)(param_1 + 0xac) != *(char *)(param_1 + 0x6c)) || (uVar5 != uVar7)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *plVar1 = 0;
      }
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    uVar2 = InitLFO(param_1,uVar3);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
  }
  if ((*(float *)(param_1 + 0x68) != *(float *)(param_1 + 0xa8)) || (uVar5 != uVar7)) {
    TermUniCombs(param_1);
    uVar2 = InitUniCombs(param_1,uVar3);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    if ((*(longlong *)(param_1 + 8) != 0) && ((char)uVar3 != '\0')) {
      do {
        DSP::UniComb::Reset(*(longlong *)(param_1 + 8) + lVar6);
        lVar6 = lVar6 + 0x38;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(uint *)(param_1 + 0xb8) = uVar5;
  return 1;
}



// FUNCTION 14320b080 FUN_14320b080 body=3447 status=ok
// SIG undefined FUN_14320b080(void)

void FUN_14320b080(undefined8 *param_1,float *param_2,uint param_3,float param_4,float param_5,
                  float param_6)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float _X;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  
  local_c8 = *(undefined1 (*) [16])(param_1 + 2);
  fVar11 = local_c8._0_4_;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  pfVar1 = param_2 + param_3;
  fVar25 = (param_4 - param_5) / (float)param_3;
  fVar24 = fVar11;
  if (fVar11 <= 1e-08) {
    auVar12._0_8_ = local_c8._4_8_ << 0x20;
    auVar12._8_4_ = local_c8._8_4_;
    auVar12._12_4_ = local_c8._12_4_;
    local_c8._4_12_ = auVar12._4_12_;
    local_c8._0_4_ = 0x322bcc77;
    fVar24 = 1e-08;
  }
  uVar8 = local_c8._4_4_;
  uStack_d0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  _X = uStack_d0._4_4_;
  if (uVar8 < 6) {
    pfVar5 = (float *)(longlong)(int)uVar8;
    uStack_d0._0_4_ = (float)uVar3;
    auVar13._0_4_ = (float)uStack_d0;
    local_d8._0_4_ = (float)uVar2;
    local_d8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar26 = local_d8._4_4_;
    local_d8 = uVar2;
    uStack_d0 = uVar3;
    switch(uVar8) {
    case 0:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        fVar26 = 1.0 / fVar24;
        do {
          auVar13._0_4_ = (1.5707964 - _X) * fVar26;
          iVar6 = (int)auVar13._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar13._0_4_)) {
            auVar13._4_4_ = auVar13._0_4_;
            auVar13._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar13);
            auVar13._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar13._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              auVar13._0_4_ = _X * _X;
              *param_2 = (((0.008306325 - auVar13._0_4_ * 0.00018363654) * auVar13._0_4_ -
                          0.16664828) * auVar13._0_4_ + 0.9999966) * _X * param_5;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          auVar14._0_4_ = (3.1415927 - _X) * fVar26;
          iVar6 = (int)auVar14._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar14._0_4_)) {
            auVar14._4_4_ = auVar14._0_4_;
            auVar14._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar14);
            auVar14._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar14._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              auVar14._0_4_ = 3.1415927 - _X;
              auVar13._0_4_ = auVar14._0_4_ * auVar14._0_4_;
              *param_2 = (((0.008306325 - auVar13._0_4_ * 0.00018363654) * auVar13._0_4_ -
                          0.16664828) * auVar13._0_4_ + 0.9999966) * auVar14._0_4_ * param_5;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          auVar15._0_4_ = (4.712389 - _X) * fVar26;
          iVar6 = (int)auVar15._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar15._0_4_)) {
            auVar15._4_4_ = auVar15._0_4_;
            auVar15._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar15);
            auVar15._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar15._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              auVar14._0_4_ = _X - 3.1415927;
              auVar13._0_4_ = auVar14._0_4_ * auVar14._0_4_;
              *param_2 = ((0.16664828 -
                          (0.008306325 - auVar13._0_4_ * 0.00018363654) * auVar13._0_4_) *
                          auVar13._0_4_ - 0.9999966) * auVar14._0_4_ * param_5;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          auVar16._0_4_ = (6.2831855 - _X) * fVar26;
          iVar6 = (int)auVar16._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar16._0_4_)) {
            auVar16._4_4_ = auVar16._0_4_;
            auVar16._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar16);
            auVar16._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar16._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              auVar14._0_4_ = 6.2831855 - _X;
              auVar13._0_4_ = auVar14._0_4_ * auVar14._0_4_;
              *param_2 = ((0.16664828 -
                          (0.008306325 - auVar13._0_4_ * 0.00018363654) * auVar13._0_4_) *
                          auVar13._0_4_ - 0.9999966) * auVar14._0_4_ * param_5;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          if (6.2831855 <= _X) {
            _X = _X + -6.2831855;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 1:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar17._0_4_ = (0.5 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar17._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar17._0_4_)) {
            auVar17._4_4_ = auVar17._0_4_;
            auVar17._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar17);
            auVar17._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar17._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              auVar14._0_4_ = (_X * 4.0 - 1.0) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_ * param_5;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          auVar18._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar18._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar18._0_4_)) {
            auVar18._4_4_ = auVar18._0_4_;
            auVar18._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar18);
            auVar18._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar18._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              auVar14._0_4_ = ((1.0 - _X) * 4.0 - 1.0) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_ * param_5;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 2:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar19._0_4_ = (param_6 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar19._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar19._0_4_)) {
            auVar19._4_4_ = auVar19._0_4_;
            auVar19._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar19);
            auVar19._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar19._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              _X = _X + fVar24;
              auVar14._0_4_ = fVar26 * param_5 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          auVar20._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar20._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar20._0_4_)) {
            auVar20._4_4_ = auVar20._0_4_;
            auVar20._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar20);
            auVar20._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar20._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = uVar10;
          }
          uVar7 = uVar10;
          if (uVar9 != 0) {
            do {
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              _X = _X + fVar24;
              auVar14._0_4_ = -(fVar26 * param_5) - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 3:
      if (param_2 < pfVar1) {
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar21._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar21._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar21._0_4_)) {
            auVar21._4_4_ = auVar21._0_4_;
            auVar21._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar21);
            auVar21._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar21._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar10 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar10 = 0;
          }
          uVar9 = 0;
          if (uVar10 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar9 = uVar9 + 1;
              auVar14._0_4_ = ((_X + _X) - 1.0) * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar9 < uVar10);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 4:
      if (param_2 < pfVar1) {
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar22._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar22._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar22._0_4_)) {
            auVar22._4_4_ = auVar22._0_4_;
            auVar22._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar22);
            auVar22._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar22._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar10 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar10 = 0;
          }
          uVar9 = 0;
          if (uVar10 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar9 = uVar9 + 1;
              auVar14._0_4_ = (1.0 - (_X + _X)) * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar9 < uVar10);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 5:
      if (param_2 < pfVar1) {
        uVar10 = local_c8._8_8_;
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar23._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar23._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar23._0_4_)) {
            auVar23._4_4_ = auVar23._0_4_;
            auVar23._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar23);
            auVar23._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar23._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar9 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar9 = 0;
          }
          if (uVar9 != 0) {
            pfVar5 = (float *)(uVar10 >> 0x21);
            uVar7 = 0;
            do {
              uVar7 = uVar7 + 1;
              param_5 = param_5 + fVar25;
              _X = _X + fVar24;
              auVar14._0_4_ =
                   (float)(uint)(uVar10 >> 0x21) * 4.656613e-10 * param_5 * fVar26 -
                   auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar9);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uVar10 = uVar10 * 0x5851f42d4c957f2d + 1;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_c8._8_8_ = uVar10;
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
    }
  }
  uStack_d0 = uVar3;
  local_d8 = uVar2;
  if (fVar11 != 0.0) {
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
    *(undefined1 (*) [16])(param_1 + 2) = local_c8;
    if (uVar8 == 0) {
      fVar11 = 6.2831855;
    }
    else {
      if (uVar8 == 5) {
        return;
      }
      fVar11 = 1.0;
    }
    fVar11 = _guard_xfg_dispatch_icall_nop(_X,fVar11);
    *(float *)((longlong)param_1 + 0xc) = fVar11;
  }
  return;
}



// FUNCTION 14320be10 Reset body=91 status=ok
// SIG undefined Reset(void)

undefined8 CAkFlangerFX::Reset(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(uint *)(param_1 + 0xb8) != 0)) {
    lVar1 = 0;
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8);
    do {
      DSP::UniComb::Reset(*(longlong *)(param_1 + 8) + lVar1);
      lVar1 = lVar1 + 0x38;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 1;
}



// FUNCTION 14320be70 FUN_14320be70 body=143 status=ok
// SIG undefined FUN_14320be70(void)

void FUN_14320be70(longlong param_1,uint param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  float fVar2;
  
  if ((float)param_2 <= (float)param_3[1]) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)param_3[1] / (float)param_2;
  }
  *(float *)(param_1 + 0x10) = fVar2;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = fVar2 * 6.2831855;
  }
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 4) = param_4;
  iVar1 = *param_3;
  if (*(int *)(param_1 + 0x14) != iVar1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.15915494;
      *(int *)(param_1 + 0x14) = *param_3;
      return;
    }
    if (iVar1 == 0) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 6.2831855;
      iVar1 = *param_3;
    }
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



// FUNCTION 14320bf00 FUN_14320bf00 body=722 status=ok
// SIG undefined FUN_14320bf00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14320bf00(longlong *param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
             undefined4 param_5,int *param_6)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined8 auStack_110 [5];
  undefined4 auStack_e8 [4];
  longlong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  int iStack_bc;
  longlong lStack_b8;
  
  if (*param_1 != 0) {
    auStack_110[0] = 0x14320bf66;
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((char)(param_4 & 0xffffffff) != '\0') {
    auStack_110[0] = 0x14320bf8a;
    lVar3 = (**(code **)(*param_2 + 8))(param_2,(param_4 & 0xff) << 5);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    *(int *)(param_1 + 1) = (int)(param_4 & 0xff);
    uVar4 = (param_4 & 0xff) * 4;
    uVar5 = uVar4 + 0xf;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffffffffff0;
    }
    auStack_110[0] = 0x14320bfc6;
    lVar3 = -(uVar5 & 0xfffffffffffffff0);
    local_d8 = (longlong)&local_d8 + lVar3;
    *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14320bfea;
    FUN_14320c840(param_3,param_4 & 0xffffffff,param_6 + 4,(longlong)&local_d8 + lVar3);
    uVar5 = 0;
    if ((int)param_1[1] != 0) {
      do {
        puVar6 = (undefined8 *)(*param_1 + uVar5 * 0x20);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        pcVar1 = *(code **)(*param_3 + 0xd8);
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14320c06a;
        iVar2 = (*pcVar1)(param_3);
        puVar6 = (undefined8 *)(uVar5 * 0x20 + *param_1);
        fVar8 = *(float *)(local_d8 + uVar5 * 4);
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14320c096;
        DSP::MonoLFO<DSP::Bipolar,FlangerOutputPolicy>::ComputeFilterCoefsFromParams
                  (param_5,param_6,local_res8,local_res20);
        *(undefined4 *)((longlong)auStack_e8 + lVar3) = local_res20[0];
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14320c0bd;
        FUN_14320be70(puVar6,param_5,param_6,local_res8[0]);
        local_d0 = *puVar6;
        local_c0 = *(undefined4 *)(puVar6 + 2);
        iStack_bc = *(int *)((longlong)puVar6 + 0x14);
        lStack_b8 = puVar6[3];
        if (*param_6 == 0) {
          fVar9 = 6.2831855;
        }
        else {
          fVar9 = 1.0;
        }
        fVar8 = fVar9 * fVar8 * 0.0027777778;
        uStack_c8._0_4_ = (undefined4)puVar6[1];
        uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        if (iStack_bc == 1) {
          fVar8 = fVar8 + 0.25;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        else if (iStack_bc == 3) {
          fVar8 = fVar8 + 0.5;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        else if (iStack_bc == 5) {
          lStack_b8 = (longlong)iVar2 * 0x5851f42d4c957f2d + 1;
        }
        if (fVar8 < 0.0) {
          fVar8 = fVar8 + fVar9;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        if (fVar9 <= fVar8) {
          fVar8 = fVar8 - fVar9;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        *puVar6 = local_d0;
        puVar6[1] = uStack_c8;
        *(undefined4 *)(puVar6 + 2) = local_c0;
        *(int *)((longlong)puVar6 + 0x14) = iStack_bc;
        puVar6[3] = lStack_b8;
        if (iStack_bc == 0) {
          fVar9 = 6.2831855;
LAB_14320c170:
          *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14320c175;
          fVar8 = _guard_xfg_dispatch_icall_nop(fVar8,fVar9);
          *(float *)((longlong)puVar6 + 0xc) = fVar8;
        }
        else if (iStack_bc != 5) {
          fVar9 = 1.0;
          goto LAB_14320c170;
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 1));
    }
  }
  return 1;
}



// FUNCTION 14320c1e0 Term body=137 status=ok
// SIG undefined Term(void)

undefined8 CAkFlangerFX::Term(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  TermUniCombs();
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
      *plVar1 = 0;
    }
    *(undefined4 *)(plVar1 + 1) = 0;
    if (param_1[2] != 0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
    }
    param_1[2] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14320c270 TermUniCombs body=95 status=ok
// SIG undefined TermUniCombs(void)

void CAkFlangerFX::TermUniCombs(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        DSP::UniComb::Term((ulonglong)uVar2 * 0x38 + *(longlong *)(param_1 + 8),
                           *(undefined8 *)(param_1 + 0x20));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb8));
      lVar1 = *(longlong *)(param_1 + 8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14320c2d0 FUN_14320c2d0 body=43 status=ok
// SIG undefined FUN_14320c2d0(void)

undefined8 * FUN_14320c2d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14320c300 Clone body=93 status=ok
// SIG undefined Clone(void)

void CAkFlangerFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5008;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    *(undefined1 *)((longlong)puVar2 + 0x47) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x3c) = 1;
    return;
  }
  return;
}



// FUNCTION 14320c360 FUN_14320c360 body=40 status=ok
// SIG undefined FUN_14320c360(void)

void FUN_14320c360(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5008;
    return;
  }
  return;
}



// FUNCTION 14320c3f0 SetDirty body=7 status=ok
// SIG undefined SetDirty(void)

void CAkFlangerFXParams::SetDirty(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x47) = param_2;
  *(undefined1 *)(param_1 + 0x3c) = param_2;
  return;
}



// FUNCTION 14320c400 FUN_14320c400 body=720 status=ok
// SIG undefined FUN_14320c400(void)

undefined4 FUN_14320c400(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x40) = *param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    break;
  case 1:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x38) = fVar2 * 0.01;
    return 1;
  case 2:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(bool *)(param_1 + 0x46) = cVar1 != '\0';
    return 1;
  case 5:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
      fVar2 = 1.0;
    }
    *(float *)(param_1 + 8) = fVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 6:
    fVar3 = *param_3;
    fVar2 = -1.0;
    if ((-1.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
      fVar2 = 1.0;
    }
    *(float *)(param_1 + 0xc) = fVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 7:
    fVar3 = *param_3;
    fVar2 = -1.0;
    if ((-1.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
      fVar2 = 1.0;
    }
    *(float *)(param_1 + 0x10) = fVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 8:
    fVar3 = *param_3;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(int *)(param_1 + 0x18) = (int)(longlong)fVar3;
    return 1;
  case 9:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 10:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x14) = fVar2 * 0.01;
    return 1;
  case 0xe:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(bool *)(param_1 + 0x44) = cVar1 != '\0';
    return 1;
  case 0x10:
    fVar3 = *param_3;
    fVar2 = -24.0;
    if ((-24.0 <= fVar3) && (fVar2 = fVar3, 24.0 <= fVar3)) {
      fVar2 = 24.0;
    }
    fVar3 = _guard_xfg_dispatch_icall_nop(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x34) = fVar3;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 0x11:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(bool *)(param_1 + 0x45) = cVar1 != '\0';
    return 1;
  case 0x12:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x20) = fVar2 * 0.01;
    return 1;
  case 0x13:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x24) = fVar2 * 0.01;
    return 1;
  case 0x14:
    fVar3 = *param_3;
    fVar2 = -180.0;
    if ((-180.0 <= fVar3) && (fVar2 = fVar3, 180.0 <= fVar3)) {
      fVar2 = 180.0;
    }
    *(float *)(param_1 + 0x28) = fVar2;
    return 1;
  case 0x15:
    *(int *)(param_1 + 0x30) = (int)(longlong)*param_3;
    return 1;
  case 0x16:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 180.0 <= fVar3)) {
      fVar2 = 180.0;
    }
    *(float *)(param_1 + 0x2c) = fVar2;
    return 1;
  }
  return 1;
}



// FUNCTION 14320c730 SetParamsBlock body=262 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkFlangerFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  fVar3 = (float)param_2[4];
  *(float *)(param_1 + 0x14) = fVar3;
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 0x18) = param_2[6];
  fVar1 = (float)param_2[7];
  *(float *)(param_1 + 0x20) = fVar1;
  fVar2 = (float)param_2[8];
  *(float *)(param_1 + 0x24) = fVar2;
  *(undefined4 *)(param_1 + 0x28) = param_2[9];
  *(undefined4 *)(param_1 + 0x30) = param_2[10];
  *(undefined4 *)(param_1 + 0x2c) = param_2[0xb];
  *(float *)(param_1 + 0x24) = fVar2 * 0.01;
  *(float *)(param_1 + 0x14) = fVar3 * 0.01;
  *(float *)(param_1 + 0x20) = fVar1 * 0.01;
  fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0xc] * 0.05);
  *(float *)(param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 0x38) = (float)param_2[0xd] * 0.01;
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)((longlong)param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return 1;
}



// FUNCTION 14320c840 FUN_14320c840 body=925 status=ok
// SIG undefined FUN_14320c840(void)

void FUN_14320c840(longlong *param_1,ulonglong param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar16 = param_2 & 0xffffffff;
  _guard_xfg_dispatch_icall_nop(param_4,0,(param_2 & 0xff) << 2);
  fVar3 = param_3[2];
  uVar15 = 0;
  uVar14 = (uint)param_2;
  if (fVar3 == 0.0) {
    uVar16 = uVar16 >> 0xc;
    uVar11 = uVar15;
    if ((uVar16 & 2) != 0) {
      uVar11 = 2;
      param_4[1] = param_3[1];
      if ((uVar16 & 4) != 0) {
        uVar11 = 3;
        param_4[2] = param_3[1] * 0.5;
      }
    }
    if ((uVar16 & 0x210) != 0) {
      iVar8 = (int)uVar11;
      param_4[uVar11] = 0.0;
      param_4[iVar8 + 1] = param_3[1];
      if (((uint)uVar16 & 0x210) == 0x210) {
        param_4[iVar8 + 2] = 0.0;
        param_4[iVar8 + 3] = param_3[1];
      }
    }
  }
  else if (fVar3 == 1.4013e-45) {
    if ((param_2 & 0x210000) != 0) {
      uVar7 = (uVar14 & 0x4000 | 0x8000) >> 0xe;
      param_4[uVar7] = param_3[1];
      param_4[uVar7 + 1] = param_3[1];
      if ((uVar14 & 0x210000) == 0x210000) {
        param_4[uVar7 + 2] = param_3[1] * 0.5;
        param_4[uVar7 + 3] = param_3[1] * 0.5;
      }
    }
  }
  else if (fVar3 == 2.8026e-45) {
    uVar16 = uVar16 >> 0xc;
    if ((uVar16 & 0x210) == 0) {
      if (((uVar16 & 3) != 0) && (param_4[1] = param_3[1], (uVar16 & 4) != 0)) {
        param_4[2] = param_3[1] * 0.5;
      }
    }
    else {
      lVar10 = 2;
      param_4[1] = param_3[1] * 0.5;
      if ((uVar16 & 4) != 0) {
        lVar10 = 3;
        param_4[2] = param_3[1] * 0.25;
      }
      iVar8 = (int)lVar10;
      param_4[lVar10] = param_3[1] * 0.5;
      param_4[iVar8 + 1] = param_3[1];
      if (((uint)uVar16 & 0x210) == 0x210) {
        param_4[iVar8 + 2] = param_3[1] * 0.25;
        param_4[iVar8 + 3] = param_3[1] * 0.75;
      }
    }
  }
  else if ((fVar3 == 4.2039e-45) && (uVar7 = uVar14 - ((uint)(uVar16 >> 0xf) & 1) & 0xff, 1 < uVar7)
          ) {
    uVar16 = (ulonglong)(uVar7 - 1);
    pfVar9 = param_4;
    do {
      pfVar9 = pfVar9 + 1;
      iVar8 = (**(code **)(*param_1 + 0xd8))(param_1);
      *pfVar9 = (float)iVar8 * param_3[1] * 4.656613e-10;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar7 = uVar14 & 0xff;
  if ((param_2 & 0xff) != 0) {
    if (0xf < uVar7) {
      fVar3 = *param_3;
      if ((param_3 < param_4) || (param_4 + (uVar7 - 1) < param_3)) {
        uVar12 = 8;
        do {
          pfVar9 = param_4 + uVar15;
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + uVar15;
          *pfVar2 = fVar3 + *pfVar9;
          pfVar2[1] = fVar3 + fVar4;
          pfVar2[2] = fVar3 + fVar5;
          pfVar2[3] = fVar3 + fVar6;
          uVar13 = (int)uVar15 + 0x10;
          uVar15 = (ulonglong)uVar13;
          pfVar9 = param_4 + (uVar12 - 4);
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + (uVar12 - 4);
          *pfVar2 = *pfVar9 + fVar3;
          pfVar2[1] = fVar4 + fVar3;
          pfVar2[2] = fVar5 + fVar3;
          pfVar2[3] = fVar6 + fVar3;
          pfVar9 = param_4 + uVar12;
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + uVar12;
          *pfVar2 = *pfVar9 + fVar3;
          pfVar2[1] = fVar4 + fVar3;
          pfVar2[2] = fVar5 + fVar3;
          pfVar2[3] = fVar6 + fVar3;
          uVar1 = uVar12 + 4;
          uVar12 = uVar12 + 0x10;
          pfVar9 = param_4 + uVar1;
          fVar4 = pfVar9[1];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[3];
          pfVar2 = param_4 + uVar1;
          *pfVar2 = fVar3 + *pfVar9;
          pfVar2[1] = fVar3 + fVar4;
          pfVar2[2] = fVar3 + fVar5;
          pfVar2[3] = fVar3 + fVar6;
        } while (uVar13 < (uVar14 & 0xf0));
      }
    }
    uVar14 = (uint)uVar15;
    if (uVar14 < uVar7) {
      if (3 < uVar7 - uVar14) {
        uVar12 = ((uVar7 - uVar14) - 4 >> 2) + 1;
        pfVar9 = param_4 + uVar15 + 2;
        uVar16 = (ulonglong)uVar12;
        uVar15 = (ulonglong)(uVar14 + uVar12 * 4);
        do {
          pfVar9[-2] = pfVar9[-2] + *param_3;
          pfVar9[-1] = pfVar9[-1] + *param_3;
          *pfVar9 = *pfVar9 + *param_3;
          pfVar9[1] = pfVar9[1] + *param_3;
          pfVar9 = pfVar9 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if ((uint)uVar15 < uVar7) {
        param_4 = param_4 + uVar15;
        uVar16 = (ulonglong)(uVar7 - (uint)uVar15);
        do {
          *param_4 = *param_4 + *param_3;
          param_4 = param_4 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14320cbe0 FUN_14320cbe0 body=308 status=ok
// SIG undefined FUN_14320cbe0(void)

void FUN_14320cbe0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  
  pfVar1 = param_3 + param_6;
  if (param_3 < pfVar1) {
    if ((param_6 & 0x1f) == 0) {
      do {
        fVar4 = param_2[1];
        fVar5 = param_2[2];
        fVar6 = param_2[3];
        fVar7 = param_1[1];
        fVar8 = param_1[2];
        fVar9 = param_1[3];
        fVar10 = param_1[4];
        fVar11 = param_1[5];
        fVar12 = param_1[6];
        fVar13 = param_1[7];
        *param_3 = *param_2 * param_5 + *param_1 * param_4;
        param_3[1] = fVar4 * param_5 + fVar7 * param_4;
        param_3[2] = fVar5 * param_5 + fVar8 * param_4;
        param_3[3] = fVar6 * param_5 + fVar9 * param_4;
        fVar4 = param_2[5];
        fVar5 = param_2[6];
        fVar6 = param_2[7];
        fVar7 = param_1[8];
        fVar8 = param_1[9];
        fVar9 = param_1[10];
        fVar14 = param_1[0xb];
        param_3[4] = param_2[4] * param_5 + fVar10 * param_4;
        param_3[5] = fVar4 * param_5 + fVar11 * param_4;
        param_3[6] = fVar5 * param_5 + fVar12 * param_4;
        param_3[7] = fVar6 * param_5 + fVar13 * param_4;
        fVar4 = param_2[9];
        fVar5 = param_2[10];
        fVar6 = param_2[0xb];
        fVar10 = param_1[0xc];
        fVar11 = param_1[0xd];
        fVar12 = param_1[0xe];
        fVar13 = param_1[0xf];
        param_3[8] = param_2[8] * param_5 + fVar7 * param_4;
        param_3[9] = fVar4 * param_5 + fVar8 * param_4;
        param_3[10] = fVar5 * param_5 + fVar9 * param_4;
        param_3[0xb] = fVar6 * param_5 + fVar14 * param_4;
        fVar4 = param_2[0xd];
        fVar5 = param_2[0xe];
        fVar6 = param_2[0xf];
        fVar7 = param_1[0x10];
        fVar8 = param_1[0x11];
        fVar9 = param_1[0x12];
        fVar14 = param_1[0x13];
        param_3[0xc] = param_2[0xc] * param_5 + fVar10 * param_4;
        param_3[0xd] = fVar4 * param_5 + fVar11 * param_4;
        param_3[0xe] = fVar5 * param_5 + fVar12 * param_4;
        param_3[0xf] = fVar6 * param_5 + fVar13 * param_4;
        fVar4 = param_2[0x11];
        fVar5 = param_2[0x12];
        fVar6 = param_2[0x13];
        fVar10 = param_1[0x14];
        fVar11 = param_1[0x15];
        fVar12 = param_1[0x16];
        fVar13 = param_1[0x17];
        param_3[0x10] = param_2[0x10] * param_5 + fVar7 * param_4;
        param_3[0x11] = fVar4 * param_5 + fVar8 * param_4;
        param_3[0x12] = fVar5 * param_5 + fVar9 * param_4;
        param_3[0x13] = fVar6 * param_5 + fVar14 * param_4;
        fVar4 = param_2[0x15];
        fVar5 = param_2[0x16];
        fVar6 = param_2[0x17];
        fVar7 = param_1[0x18];
        fVar8 = param_1[0x19];
        fVar9 = param_1[0x1a];
        fVar14 = param_1[0x1b];
        param_3[0x14] = param_2[0x14] * param_5 + fVar10 * param_4;
        param_3[0x15] = fVar4 * param_5 + fVar11 * param_4;
        param_3[0x16] = fVar5 * param_5 + fVar12 * param_4;
        param_3[0x17] = fVar6 * param_5 + fVar13 * param_4;
        fVar4 = param_2[0x19];
        fVar5 = param_2[0x1a];
        fVar6 = param_2[0x1b];
        fVar10 = param_1[0x1c];
        fVar11 = param_1[0x1d];
        fVar12 = param_1[0x1e];
        fVar13 = param_1[0x1f];
        param_1 = param_1 + 0x20;
        param_3[0x18] = param_2[0x18] * param_5 + fVar7 * param_4;
        param_3[0x19] = fVar4 * param_5 + fVar8 * param_4;
        param_3[0x1a] = fVar5 * param_5 + fVar9 * param_4;
        param_3[0x1b] = fVar6 * param_5 + fVar14 * param_4;
        pfVar2 = param_2 + 0x1c;
        fVar4 = param_2[0x1d];
        fVar5 = param_2[0x1e];
        fVar6 = param_2[0x1f];
        param_2 = param_2 + 0x20;
        param_3[0x1c] = *pfVar2 * param_5 + fVar10 * param_4;
        param_3[0x1d] = fVar4 * param_5 + fVar11 * param_4;
        param_3[0x1e] = fVar5 * param_5 + fVar12 * param_4;
        param_3[0x1f] = fVar6 * param_5 + fVar13 * param_4;
        param_3 = param_3 + 0x20;
      } while (param_3 < pfVar1);
      return;
    }
    lVar15 = (longlong)param_1 - (longlong)param_3;
    do {
      pfVar2 = (float *)(lVar15 + (longlong)param_3);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      pfVar3 = (float *)((longlong)param_2 + (longlong)param_3 + (lVar15 - (longlong)param_1));
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      *param_3 = *pfVar3 * param_5 + *pfVar2 * param_4;
      param_3[1] = fVar7 * param_5 + fVar4 * param_4;
      param_3[2] = fVar8 * param_5 + fVar5 * param_4;
      param_3[3] = fVar9 * param_5 + fVar6 * param_4;
      param_3 = param_3 + 4;
    } while (param_3 < pfVar1);
  }
  return;
}



// FUNCTION 14320ce40 Mix2Interp body=377 status=ok
// SIG undefined Mix2Interp(void)

void DSP::Mix2Interp(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                    float param_6,float param_7,uint param_8)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_5 == param_4) && (param_7 == param_6)) {
    FUN_14320cbe0(param_1,param_2,param_6,param_5);
    return;
  }
  uVar2 = 0;
  fVar7 = 1.0 / (float)param_8;
  uVar5 = (ulonglong)((longlong)(param_3 + param_8) + (3 - (longlong)param_3)) >> 2;
  if (param_3 + param_8 < param_3) {
    uVar5 = uVar2;
  }
  fVar13 = (param_5 - param_4) * fVar7;
  fVar7 = (param_7 - param_6) * fVar7;
  if (3 < uVar5) {
    lVar3 = (uVar5 - 4 >> 2) + 1;
    uVar2 = lVar3 * 4;
    do {
      fVar9 = param_6 + fVar7 + fVar7;
      fVar6 = param_2[1];
      *param_3 = param_6 * *param_2 + param_4 * *param_1;
      fVar11 = param_4 + fVar13 + fVar13;
      fVar8 = param_2[2];
      fVar10 = fVar9 + fVar7;
      param_3[1] = (param_4 + fVar13) * param_1[1] + (param_6 + fVar7) * fVar6;
      fVar12 = fVar11 + fVar13;
      fVar6 = param_2[3];
      param_6 = fVar10 + fVar7;
      param_2 = param_2 + 4;
      param_3[2] = fVar11 * param_1[2] + fVar9 * fVar8;
      pfVar1 = param_1 + 3;
      param_4 = fVar12 + fVar13;
      param_1 = param_1 + 4;
      param_3[3] = fVar12 * *pfVar1 + fVar10 * fVar6;
      param_3 = param_3 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (uVar2 < uVar5) {
    lVar4 = (longlong)param_1 - (longlong)param_2;
    lVar3 = (longlong)param_3 - (longlong)param_2;
    do {
      fVar8 = param_4 * *(float *)(lVar4 + (longlong)param_2);
      param_4 = param_4 + fVar13;
      uVar2 = uVar2 + 1;
      fVar6 = param_6 * *param_2;
      param_6 = param_6 + fVar7;
      *(float *)(lVar3 + (longlong)param_2) = fVar8 + fVar6;
      param_2 = param_2 + 1;
    } while (uVar2 < uVar5);
  }
  return;
}



// FUNCTION 14320cfc0 Mix2Interp body=354 status=ok
// SIG undefined Mix2Interp(void)

void DSP::Mix2Interp(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                    float param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_4 == param_3) && (param_6 == param_5)) {
    pfVar1 = param_1 + param_7;
    if (param_1 < pfVar1) {
      if ((param_7 & 0x1f) == 0) {
        do {
          fVar6 = param_2[1];
          fVar11 = param_2[2];
          fVar7 = param_2[3];
          *param_1 = *param_2 * param_6 + *param_1 * param_4;
          param_1[1] = fVar6 * param_6 + param_1[1] * param_4;
          param_1[2] = fVar11 * param_6 + param_1[2] * param_4;
          param_1[3] = fVar7 * param_6 + param_1[3] * param_4;
          fVar6 = param_2[5];
          fVar11 = param_2[6];
          fVar7 = param_2[7];
          param_1[4] = param_2[4] * param_6 + param_1[4] * param_4;
          param_1[5] = fVar6 * param_6 + param_1[5] * param_4;
          param_1[6] = fVar11 * param_6 + param_1[6] * param_4;
          param_1[7] = fVar7 * param_6 + param_1[7] * param_4;
          fVar6 = param_2[9];
          fVar11 = param_2[10];
          fVar7 = param_2[0xb];
          param_1[8] = param_2[8] * param_6 + param_1[8] * param_4;
          param_1[9] = fVar6 * param_6 + param_1[9] * param_4;
          param_1[10] = fVar11 * param_6 + param_1[10] * param_4;
          param_1[0xb] = fVar7 * param_6 + param_1[0xb] * param_4;
          fVar6 = param_2[0xd];
          fVar11 = param_2[0xe];
          fVar7 = param_2[0xf];
          param_1[0xc] = param_2[0xc] * param_6 + param_1[0xc] * param_4;
          param_1[0xd] = fVar6 * param_6 + param_1[0xd] * param_4;
          param_1[0xe] = fVar11 * param_6 + param_1[0xe] * param_4;
          param_1[0xf] = fVar7 * param_6 + param_1[0xf] * param_4;
          fVar6 = param_2[0x11];
          fVar11 = param_2[0x12];
          fVar7 = param_2[0x13];
          param_1[0x10] = param_2[0x10] * param_6 + param_1[0x10] * param_4;
          param_1[0x11] = fVar6 * param_6 + param_1[0x11] * param_4;
          param_1[0x12] = fVar11 * param_6 + param_1[0x12] * param_4;
          param_1[0x13] = fVar7 * param_6 + param_1[0x13] * param_4;
          fVar6 = param_2[0x15];
          fVar11 = param_2[0x16];
          fVar7 = param_2[0x17];
          param_1[0x14] = param_2[0x14] * param_6 + param_1[0x14] * param_4;
          param_1[0x15] = fVar6 * param_6 + param_1[0x15] * param_4;
          param_1[0x16] = fVar11 * param_6 + param_1[0x16] * param_4;
          param_1[0x17] = fVar7 * param_6 + param_1[0x17] * param_4;
          fVar6 = param_2[0x19];
          fVar11 = param_2[0x1a];
          fVar7 = param_2[0x1b];
          param_1[0x18] = param_2[0x18] * param_6 + param_1[0x18] * param_4;
          param_1[0x19] = fVar6 * param_6 + param_1[0x19] * param_4;
          param_1[0x1a] = fVar11 * param_6 + param_1[0x1a] * param_4;
          param_1[0x1b] = fVar7 * param_6 + param_1[0x1b] * param_4;
          pfVar2 = param_2 + 0x1c;
          fVar6 = param_2[0x1d];
          fVar11 = param_2[0x1e];
          fVar7 = param_2[0x1f];
          param_2 = param_2 + 0x20;
          param_1[0x1c] = *pfVar2 * param_6 + param_1[0x1c] * param_4;
          param_1[0x1d] = fVar6 * param_6 + param_1[0x1d] * param_4;
          param_1[0x1e] = fVar11 * param_6 + param_1[0x1e] * param_4;
          param_1[0x1f] = fVar7 * param_6 + param_1[0x1f] * param_4;
          param_1 = param_1 + 0x20;
        } while (param_1 < pfVar1);
        return;
      }
      lVar4 = (longlong)param_2 - (longlong)param_1;
      do {
        pfVar2 = (float *)(lVar4 + (longlong)param_1);
        fVar6 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar7 = pfVar2[3];
        *param_1 = *pfVar2 * param_6 + *param_1 * param_4;
        param_1[1] = fVar6 * param_6 + param_1[1] * param_4;
        param_1[2] = fVar11 * param_6 + param_1[2] * param_4;
        param_1[3] = fVar7 * param_6 + param_1[3] * param_4;
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1);
    }
    return;
  }
  uVar3 = 0;
  fVar6 = 1.0 / (float)param_7;
  uVar5 = (ulonglong)((longlong)(param_1 + param_7) + (3 - (longlong)param_1)) >> 2;
  if (param_1 + param_7 < param_1) {
    uVar5 = uVar3;
  }
  fVar11 = (param_4 - param_3) * fVar6;
  fVar6 = (param_6 - param_5) * fVar6;
  if (3 < uVar5) {
    lVar4 = (uVar5 - 4 >> 2) + 1;
    uVar3 = lVar4 * 4;
    do {
      fVar7 = param_3 + fVar11 + fVar11;
      *param_1 = param_3 * *param_1 + param_5 * *param_2;
      fVar9 = param_5 + fVar6 + fVar6;
      fVar8 = fVar7 + fVar11;
      param_1[1] = (param_5 + fVar6) * param_2[1] + (param_3 + fVar11) * param_1[1];
      fVar10 = fVar9 + fVar6;
      param_3 = fVar8 + fVar11;
      param_1[2] = fVar9 * param_2[2] + fVar7 * param_1[2];
      pfVar1 = param_2 + 3;
      param_5 = fVar10 + fVar6;
      param_2 = param_2 + 4;
      param_1[3] = fVar10 * *pfVar1 + fVar8 * param_1[3];
      param_1 = param_1 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (uVar3 < uVar5) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      fVar7 = param_3 * *param_1;
      param_3 = param_3 + fVar11;
      uVar3 = uVar3 + 1;
      fVar8 = param_5 * *(float *)(lVar4 + (longlong)param_1);
      param_5 = param_5 + fVar6;
      *param_1 = fVar8 + fVar7;
      param_1 = param_1 + 1;
    } while (uVar3 < uVar5);
  }
  return;
}



// FUNCTION 14320d130 Init body=230 status=ok
// SIG undefined Init(void)

undefined8
DSP::UniComb::Init(uint *param_1,longlong *param_2,uint param_3,undefined8 param_4,uint param_5,
                  uint param_6,uint param_7,float param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 8;
  if (8 < param_3) {
    uVar3 = param_3;
  }
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  uVar2 = uVar3 + 3 & 0xfffffffc;
  param_1[0xc] = param_7;
  *param_1 = uVar2;
  fVar4 = (float)uVar2;
  uVar3 = (uint)(longlong)(fVar4 * param_8) & 0xfffffffc;
  param_1[1] = uVar3;
  if (0x18fff < uVar3 * 8 + 0x1000) {
    uVar3 = (uint)(longlong)((12288.0 / fVar4) * fVar4) & 0xfffffffc;
    param_1[1] = uVar3;
  }
  if (uVar2 <= uVar3) {
    param_1[1] = uVar3 - 4;
  }
  uVar3 = uVar2 * 2 + 0x400;
  param_1[7] = param_5;
  param_1[2] = uVar3;
  param_1[8] = param_6;
  param_1[9] = param_7;
  lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)uVar3 << 2);
  *(longlong *)(param_1 + 4) = lVar1;
  if (lVar1 != 0) {
    param_1[6] = 0;
    return 1;
  }
  return 0x34;
}



// FUNCTION 14320d220 ProcessBuffer body=451 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::UniComb::ProcessBuffer(int *param_1,float *param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar3 = *(longlong *)(param_1 + 4);
  if (param_4 != 0) {
    ProcessBufferLFO(param_1,param_2,param_3,param_4,lVar3);
    return;
  }
  fVar12 = (float)param_1[7];
  fVar13 = (float)param_1[8];
  fVar14 = (float)param_1[9];
  uVar8 = param_1[6];
  uVar1 = param_1[2];
  iVar2 = *param_1;
  fVar18 = (float)param_1[10];
  fVar9 = (float)param_1[0xc];
  fVar15 = fVar18 - fVar12;
  fVar17 = fVar9 - fVar14;
  fVar11 = 1.0 / (float)param_3;
  fVar10 = (float)param_1[0xb];
  fVar16 = fVar10 - fVar13;
  if (param_3 != 0) {
    do {
      uVar6 = (ulonglong)((uVar1 - iVar2) + uVar8) % (ulonglong)uVar1;
      uVar5 = (uint)uVar6;
      if (uVar1 - uVar8 < uVar1 - (uint)uVar6) {
        uVar5 = uVar8;
      }
      uVar7 = uVar1 - uVar5;
      if (param_3 <= uVar1 - uVar5) {
        uVar7 = param_3;
      }
      param_3 = param_3 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        fVar18 = *(float *)(lVar3 + uVar6 * 4);
        fVar12 = fVar12 + fVar15 * fVar11;
        uVar4 = (ulonglong)uVar8;
        fVar13 = fVar13 + fVar16 * fVar11;
        uVar8 = uVar8 + 1;
        fVar14 = fVar14 + fVar17 * fVar11;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        fVar9 = fVar18 * fVar12 + *param_2;
        *(float *)(lVar3 + uVar4 * 4) = fVar9;
        *param_2 = fVar9 * fVar14 + fVar18 * fVar13;
        param_2 = param_2 + 1;
      }
      uVar8 = uVar8 % uVar1;
    } while (param_3 != 0);
    fVar18 = (float)param_1[10];
    fVar10 = (float)param_1[0xb];
    fVar9 = (float)param_1[0xc];
  }
  param_1[7] = (int)fVar18;
  param_1[9] = (int)fVar9;
  param_1[8] = (int)fVar10;
  param_1[6] = uVar8;
  return;
}



// FUNCTION 14320d3f0 ProcessBufferLFO body=1666 status=ok
// SIG undefined ProcessBufferLFO(void)

ulonglong DSP::UniComb::ProcessBufferLFO
                    (int *param_1,float *param_2,uint param_3,float *param_4,longlong param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
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
  
  uVar2 = param_1[2];
  fVar14 = (float)param_1[10];
  uVar7 = param_1[6];
  fVar16 = (float)param_1[7];
  iVar10 = uVar2 - *param_1;
  fVar18 = (float)param_1[8];
  fVar21 = (float)param_1[9];
  uVar3 = param_1[1];
  uVar11 = (uVar2 - uVar3) - 1;
  fVar13 = (float)param_1[0xc];
  uVar9 = (ulonglong)(iVar10 + uVar7) / (ulonglong)uVar2;
  uVar6 = (ulonglong)(iVar10 + uVar7) % (ulonglong)uVar2;
  fVar12 = 1.0 / (float)param_3;
  fVar15 = (float)param_1[0xb];
  fVar24 = (fVar14 - fVar16) * fVar12;
  fVar25 = (fVar13 - fVar21) * fVar12;
  fVar12 = (fVar15 - fVar18) * fVar12;
  if (param_3 != 0) {
    do {
      uVar5 = uVar11 - (int)uVar6;
      uVar4 = (uVar2 - uVar7) - 1;
      if (uVar4 <= uVar5) {
        uVar5 = uVar4;
      }
      uVar4 = param_3;
      if (uVar5 < param_3) {
        uVar4 = uVar5;
      }
      while ((param_3 != 0 &&
             ((((uVar11 <= (uint)uVar6 || ((uint)uVar6 < (uint)param_1[1])) || (uVar7 == uVar2 - 1))
              || (uVar4 < 8))))) {
        fVar14 = *param_4;
        uVar5 = iVar10 + uVar7;
        fVar16 = fVar16 + fVar24;
        param_3 = param_3 - 1;
        param_4 = param_4 + 1;
        fVar18 = fVar18 + fVar12;
        fVar21 = fVar21 + fVar25;
        fVar14 = (float)uVar3 * fVar14 + (float)uVar5;
        uVar9 = (ulonglong)fVar14;
        fVar14 = fVar14 - (float)(uVar9 & 0xffffffff);
        fVar13 = (1.0 - fVar14) *
                 *(float *)(param_5 + ((uVar9 & 0xffffffff) % (ulonglong)uVar2) * 4) +
                 fVar14 * *(float *)(param_5 + ((ulonglong)((int)uVar9 + 1) % (ulonglong)uVar2) * 4)
        ;
        fVar14 = fVar13 * fVar16 + *param_2;
        *(float *)(param_5 + (ulonglong)uVar7 * 4) = fVar14;
        uVar7 = (uVar7 + 1) % uVar2;
        uVar6 = (ulonglong)(uVar5 + 1) % (ulonglong)uVar2;
        uVar5 = uVar11 - (int)uVar6;
        *param_2 = fVar14 * fVar21 + fVar13 * fVar18;
        param_2 = param_2 + 1;
        uVar4 = (uVar2 - uVar7) - 1;
        if (uVar4 <= uVar5) {
          uVar5 = uVar4;
        }
        uVar4 = param_3;
        if (uVar5 < param_3) {
          uVar4 = uVar5;
        }
      }
      uVar6 = (ulonglong)(iVar10 + uVar7) % (ulonglong)uVar2;
      uVar4 = (uVar2 - uVar7) - 1;
      uVar5 = uVar11 - (int)uVar6;
      if (uVar4 <= uVar5) {
        uVar5 = uVar4;
      }
      uVar4 = param_3;
      if (uVar5 < param_3) {
        uVar4 = uVar5;
      }
      uVar5 = uVar4 >> 3;
      uVar9 = (ulonglong)(uVar5 * -8);
      param_3 = param_3 + uVar5 * -8;
      if (uVar4 >> 3 != 0) {
        fVar14 = (float)uVar3;
        do {
          iVar8 = (int)uVar6;
          fVar13 = fVar14 * *param_4 + (float)uVar6;
          uVar9 = (ulonglong)fVar13;
          fVar13 = fVar13 - (float)(uVar9 & 0xffffffff);
          fVar15 = (1.0 - fVar13) * *(float *)(param_5 + (uVar9 & 0xffffffff) * 4) +
                   fVar13 * *(float *)(param_5 + (ulonglong)((int)uVar9 + 1) * 4);
          fVar13 = param_4[1];
          fVar19 = fVar18 + fVar12 + fVar12;
          fVar17 = fVar16 + fVar24 + fVar24;
          fVar16 = fVar15 * (fVar16 + fVar24) + *param_2;
          *(float *)(param_5 + (ulonglong)uVar7 * 4) = fVar16;
          fVar22 = fVar21 + fVar25 + fVar25;
          *param_2 = fVar16 * (fVar21 + fVar25) + fVar15 * (fVar18 + fVar12);
          fVar16 = fVar14 * fVar13 + (float)(iVar8 + 1);
          uVar9 = (ulonglong)fVar16;
          fVar16 = fVar16 - (float)(uVar9 & 0xffffffff);
          fVar21 = (1.0 - fVar16) * *(float *)(param_5 + (uVar9 & 0xffffffff) * 4) +
                   fVar16 * *(float *)(param_5 + (ulonglong)((int)uVar9 + 1) * 4);
          fVar16 = param_4[2];
          fVar18 = fVar21 * fVar17 + param_2[1];
          *(float *)(param_5 + (ulonglong)(uVar7 + 1) * 4) = fVar18;
          param_2[1] = fVar18 * fVar22 + fVar21 * fVar19;
          fVar16 = fVar14 * fVar16 + (float)(iVar8 + 2);
          uVar9 = (ulonglong)fVar16;
          fVar16 = fVar16 - (float)(uVar9 & 0xffffffff);
          fVar21 = (1.0 - fVar16) * *(float *)(param_5 + (uVar9 & 0xffffffff) * 4) +
                   fVar16 * *(float *)(param_5 + (ulonglong)((int)uVar9 + 1) * 4);
          fVar17 = fVar17 + fVar24;
          fVar19 = fVar19 + fVar12;
          fVar22 = fVar22 + fVar25;
          fVar16 = param_4[3];
          fVar13 = fVar17 + fVar24;
          fVar20 = fVar19 + fVar12;
          fVar18 = fVar21 * fVar17 + param_2[2];
          *(float *)(param_5 + (ulonglong)(uVar7 + 2) * 4) = fVar18;
          fVar23 = fVar22 + fVar25;
          param_2[2] = fVar18 * fVar22 + fVar21 * fVar19;
          fVar16 = fVar14 * fVar16 + (float)(iVar8 + 3);
          uVar9 = (ulonglong)fVar16;
          fVar16 = fVar16 - (float)(uVar9 & 0xffffffff);
          fVar21 = (1.0 - fVar16) * *(float *)(param_5 + (uVar9 & 0xffffffff) * 4) +
                   fVar16 * *(float *)(param_5 + (ulonglong)((int)uVar9 + 1) * 4);
          fVar16 = param_4[4];
          fVar17 = fVar20 + fVar12;
          fVar15 = fVar13 + fVar24;
          fVar18 = fVar21 * fVar13 + param_2[3];
          *(float *)(param_5 + (ulonglong)(uVar7 + 3) * 4) = fVar18;
          fVar22 = fVar23 + fVar25;
          param_2[3] = fVar18 * fVar23 + fVar21 * fVar20;
          fVar16 = fVar14 * fVar16 + (float)(iVar8 + 4);
          uVar9 = (ulonglong)fVar16;
          fVar16 = fVar16 - (float)(uVar9 & 0xffffffff);
          fVar21 = (1.0 - fVar16) * *(float *)(param_5 + (uVar9 & 0xffffffff) * 4) +
                   fVar16 * *(float *)(param_5 + (ulonglong)((int)uVar9 + 1) * 4);
          fVar16 = param_4[5];
          fVar18 = fVar21 * fVar15 + param_2[4];
          *(float *)(param_5 + (ulonglong)(uVar7 + 4) * 4) = fVar18;
          param_2[4] = fVar18 * fVar22 + fVar21 * fVar17;
          fVar16 = fVar14 * fVar16 + (float)(iVar8 + 5);
          fVar15 = fVar15 + fVar24;
          uVar9 = (ulonglong)fVar16;
          fVar17 = fVar17 + fVar12;
          fVar22 = fVar22 + fVar25;
          fVar16 = fVar16 - (float)(uVar9 & 0xffffffff);
          fVar21 = (1.0 - fVar16) * *(float *)(param_5 + (uVar9 & 0xffffffff) * 4) +
                   fVar16 * *(float *)(param_5 + (ulonglong)((int)uVar9 + 1) * 4);
          fVar16 = param_4[6];
          fVar19 = fVar17 + fVar12;
          fVar13 = fVar15 + fVar24;
          fVar18 = fVar21 * fVar15 + param_2[5];
          *(float *)(param_5 + (ulonglong)(uVar7 + 5) * 4) = fVar18;
          fVar20 = fVar22 + fVar25;
          param_2[5] = fVar18 * fVar22 + fVar21 * fVar17;
          fVar16 = fVar14 * fVar16 + (float)(iVar8 + 6);
          uVar9 = (ulonglong)fVar16;
          fVar16 = fVar16 - (float)(uVar9 & 0xffffffff);
          fVar15 = (1.0 - fVar16) * *(float *)(param_5 + (uVar9 & 0xffffffff) * 4) +
                   fVar16 * *(float *)(param_5 + (ulonglong)((int)uVar9 + 1) * 4);
          fVar18 = fVar19 + fVar12;
          fVar16 = fVar13 + fVar24;
          fVar13 = fVar15 * fVar13 + param_2[6];
          *(float *)(param_5 + (ulonglong)(uVar7 + 6) * 4) = fVar13;
          fVar21 = fVar20 + fVar25;
          param_2[6] = fVar13 * fVar20 + fVar15 * fVar19;
          pfVar1 = param_4 + 7;
          param_4 = param_4 + 8;
          fVar13 = fVar14 * *pfVar1 + (float)(iVar8 + 7);
          uVar6 = (ulonglong)fVar13;
          fVar13 = fVar13 - (float)(uVar6 & 0xffffffff);
          uVar9 = (ulonglong)((int)uVar6 + 1);
          fVar15 = (1.0 - fVar13) * *(float *)(param_5 + (uVar6 & 0xffffffff) * 4) +
                   fVar13 * *(float *)(param_5 + uVar9 * 4);
          fVar13 = fVar15 * fVar16 + param_2[7];
          uVar6 = (ulonglong)(iVar8 + 8);
          *(float *)(param_5 + (ulonglong)(uVar7 + 7) * 4) = fVar13;
          uVar7 = uVar7 + 8;
          param_2[7] = fVar13 * fVar21 + fVar15 * fVar18;
          param_2 = param_2 + 8;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    } while (param_3 != 0);
    fVar14 = (float)param_1[10];
    fVar15 = (float)param_1[0xb];
    fVar13 = (float)param_1[0xc];
  }
  param_1[9] = (int)fVar13;
  param_1[7] = (int)fVar14;
  param_1[8] = (int)fVar15;
  param_1[6] = uVar7;
  return uVar9;
}



// FUNCTION 14320da80 Reset body=46 status=ok
// SIG undefined Reset(void)

void DSP::UniComb::Reset(longlong param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x10),0,(ulonglong)(uint)(*(int *)(param_1 + 8) << 2));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14320dab0 SetParams body=106 status=ok
// SIG undefined SetParams(void)

void DSP::UniComb::SetParams(uint *param_1,uint param_2,uint param_3,uint param_4,float param_5)

{
  uint uVar1;
  float fVar2;
  
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  fVar2 = (float)*param_1;
  uVar1 = (uint)(longlong)(fVar2 * param_5) & 0xfffffffc;
  param_1[1] = uVar1;
  if (0x18fff < uVar1 * 8 + 0x1000) {
    uVar1 = (uint)(longlong)((12288.0 / fVar2) * fVar2) & 0xfffffffc;
    param_1[1] = uVar1;
  }
  if (*param_1 <= uVar1) {
    param_1[1] = uVar1 - 4;
  }
  return;
}



// FUNCTION 14320db20 Term body=45 status=ok
// SIG undefined Term(void)

void DSP::UniComb::Term(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14320db50 FUN_14320db50 body=639 status=ok
// SIG undefined FUN_14320db50(void)

void FUN_14320db50(longlong *param_1,longlong *param_2,float param_3,float param_4,char param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  float *pfVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar7 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_5 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar7 = uVar7 - 1;
  }
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  if (*(ushort *)(param_2 + 2) <= *(ushort *)((longlong)param_1 + 0x12)) {
    uVar6 = *(ushort *)(param_2 + 2);
  }
  uVar9 = (ulonglong)uVar6;
  if (uVar7 != 0) {
    lVar13 = 0;
    if (param_4 == param_3) {
      uVar9 = (ulonglong)uVar7;
      do {
        AK::DSP::ApplyGain(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar13 * 4,
                           *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar13 * 4,param_3,uVar6
                          );
        lVar13 = lVar13 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else {
      uVar12 = (ulonglong)uVar7;
      do {
        pfVar8 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar13 * 4);
        pfVar1 = pfVar8 + uVar9;
        pfVar10 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar13 * 4);
        if (3 < uVar6) {
          uVar7 = uVar6 & 0xfffffffc;
          pfVar2 = pfVar8 + uVar7;
          fVar16 = (param_4 - param_3) / (float)uVar7;
          fVar14 = fVar16 * 4.0;
          fVar15 = fVar16 + param_3 + fVar16;
          fVar18 = fVar16 + param_3;
          fVar16 = fVar15 + fVar16;
          fVar17 = param_3;
          for (; pfVar8 < pfVar2; pfVar8 = pfVar8 + 4) {
            fVar3 = pfVar8[1];
            fVar4 = pfVar8[2];
            fVar5 = pfVar8[3];
            *pfVar10 = *pfVar8 * fVar17;
            pfVar10[1] = fVar3 * fVar18;
            pfVar10[2] = fVar4 * fVar15;
            pfVar10[3] = fVar5 * fVar16;
            pfVar10 = pfVar10 + 4;
            fVar18 = fVar18 + fVar14;
            fVar15 = fVar15 + fVar14;
            fVar16 = fVar16 + fVar14;
            fVar17 = fVar17 + fVar14;
          }
        }
        if (pfVar8 < pfVar1) {
          fVar18 = param_3;
          if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar8) & 0xfffffffffffffffcU)) {
            fVar15 = (param_4 - param_3) / (float)uVar9;
            do {
              *pfVar10 = fVar18 * *pfVar8;
              fVar16 = fVar18 + fVar15 + fVar15;
              pfVar10[1] = (fVar18 + fVar15) * pfVar8[1];
              fVar17 = fVar16 + fVar15;
              pfVar10[2] = fVar16 * pfVar8[2];
              pfVar2 = pfVar8 + 3;
              fVar18 = fVar17 + fVar15;
              pfVar8 = pfVar8 + 4;
              pfVar10[3] = fVar17 * *pfVar2;
              pfVar10 = pfVar10 + 4;
            } while (pfVar8 < pfVar1 + -3);
          }
          if (pfVar8 < pfVar1) {
            lVar11 = (longlong)pfVar10 - (longlong)pfVar8;
            fVar15 = fVar18;
            do {
              *(float *)(lVar11 + (longlong)pfVar8) = fVar15 * *pfVar8;
              pfVar8 = pfVar8 + 1;
              fVar15 = fVar15 + (param_4 - fVar18) / (float)uVar9;
            } while (pfVar8 < pfVar1);
          }
        }
        lVar13 = lVar13 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}



// FUNCTION 14320ddd0 ApplyGain body=298 status=ok
// SIG undefined ApplyGain(void)

void AK::DSP::ApplyGain(float *param_1,float *param_2,float param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  pfVar7 = param_1 + (param_4 & 0xffffffff);
  if (3 < (uint)param_4) {
    pfVar1 = param_1 + (param_4 & 0xfffffffc);
    for (; param_1 < pfVar1; param_1 = param_1 + 4) {
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      *param_2 = *param_1 * param_3;
      param_2[1] = fVar2 * param_3;
      param_2[2] = fVar3 * param_3;
      param_2[3] = fVar4 * param_3;
      param_2 = param_2 + 4;
    }
  }
  uVar8 = 0;
  uVar9 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_1)) >> 2;
  if (pfVar7 < param_1) {
    uVar9 = uVar8;
  }
  if (uVar9 != 0) {
    if (0xf < uVar9) {
      do {
        fVar2 = param_1[1];
        fVar3 = param_1[2];
        fVar4 = param_1[3];
        uVar8 = uVar8 + 0x10;
        *param_2 = *param_1 * param_3;
        param_2[1] = fVar2 * param_3;
        param_2[2] = fVar3 * param_3;
        param_2[3] = fVar4 * param_3;
        fVar2 = param_1[5];
        fVar3 = param_1[6];
        fVar4 = param_1[7];
        param_2[4] = param_1[4] * param_3;
        param_2[5] = fVar2 * param_3;
        param_2[6] = fVar3 * param_3;
        param_2[7] = fVar4 * param_3;
        fVar2 = param_1[9];
        fVar3 = param_1[10];
        fVar4 = param_1[0xb];
        param_2[8] = param_1[8] * param_3;
        param_2[9] = fVar2 * param_3;
        param_2[10] = fVar3 * param_3;
        param_2[0xb] = fVar4 * param_3;
        pfVar7 = param_1 + 0xc;
        fVar2 = param_1[0xd];
        fVar3 = param_1[0xe];
        fVar4 = param_1[0xf];
        param_1 = param_1 + 0x10;
        param_2[0xc] = *pfVar7 * param_3;
        param_2[0xd] = fVar2 * param_3;
        param_2[0xe] = fVar3 * param_3;
        param_2[0xf] = fVar4 * param_3;
        param_2 = param_2 + 0x10;
      } while (uVar8 < (uVar9 & 0xfffffffffffffff0));
    }
    if (uVar8 < uVar9) {
      if (3 < uVar9 - uVar8) {
        lVar6 = ((uVar9 - uVar8) - 4 >> 2) + 1;
        uVar8 = uVar8 + lVar6 * 4;
        do {
          fVar2 = *param_1;
          fVar3 = param_1[1];
          fVar4 = param_1[2];
          fVar5 = param_1[3];
          param_1 = param_1 + 4;
          *param_2 = fVar2 * param_3;
          param_2[1] = fVar3 * param_3;
          param_2[2] = fVar4 * param_3;
          param_2[3] = fVar5 * param_3;
          param_2 = param_2 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (uVar8 < uVar9) {
        pfVar7 = param_1;
        do {
          uVar8 = uVar8 + 1;
          fVar2 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          *(float *)((longlong)param_2 + (-4 - (longlong)param_1) + (longlong)pfVar7) =
               param_3 * fVar2;
        } while (uVar8 < uVar9);
      }
    }
  }
  return;
}



// FUNCTION 14320df00 FUN_14320df00 body=60 status=ok
// SIG undefined FUN_14320df00(void)

undefined8 * FUN_14320df00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5040;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[6] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14320df40 FUN_14320df40 body=232 status=ok
// SIG undefined FUN_14320df40(void)

void FUN_14320df40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  
  if (*(short *)(param_2 + 0x12) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    fVar2 = *(float *)(lVar1 + 0x10);
    if (fVar2 != *(float *)(param_1 + 0x38)) {
      *(float *)(param_1 + 0x38) = fVar2;
      if (fVar2 <= 0.001) {
        fVar2 = 0.001;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(-2.2 / (fVar2 * *(float *)(param_1 + 0x48)));
      *(float *)(param_1 + 0x3c) = fVar2;
    }
    fVar2 = *(float *)(lVar1 + 0x14);
    if (fVar2 != *(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x40) = fVar2;
      if (fVar2 <= 0.001) {
        fVar2 = 0.001;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(-2.2 / (fVar2 * *(float *)(param_1 + 0x48)));
      *(float *)(param_1 + 0x44) = fVar2;
    }
    (**(code **)(param_1 + 0x10))
              (param_1,param_2,*(undefined4 *)(lVar1 + 8),1.0 / *(float *)(lVar1 + 0xc) - 1.0,
               *(undefined4 *)(param_1 + 0x24));
    AK::DSP::ApplyGain(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(lVar1 + 0x18),
                       *(undefined1 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
  }
  return;
}



// FUNCTION 14320e030 FUN_14320e030 body=482 status=ok
// SIG undefined FUN_14320e030(void)

undefined8
FUN_14320e030(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,uint *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  *(longlong *)(param_1 + 8) = param_4;
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_4 + 0x1c);
  uVar9 = param_5[1];
  *(uint *)(param_1 + 0x1c) = uVar9 & 0xff;
  *(float *)(param_1 + 0x20) = (float)*param_5;
  if (((*(char *)(param_4 + 0x1d) != '\0') && (1 < (uVar9 & 0xff))) && (param_3 != (longlong *)0x0))
  {
    lVar5 = (**(code **)(*param_3 + 8))(param_3);
    if (lVar5 != 0) {
      plVar6 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
      cVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
      if (cVar3 == '\0') {
        bVar2 = true;
        plVar6 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
        uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
        fVar11 = *(float *)(param_1 + 0x20) / (float)uVar4;
        goto LAB_14320e0f7;
      }
    }
  }
  fVar11 = *(float *)(param_1 + 0x20);
  bVar2 = false;
LAB_14320e0f7:
  *(float *)(param_1 + 0x48) = fVar11;
  fVar10 = *(float *)(param_4 + 0x10);
  *(float *)(param_1 + 0x38) = fVar10;
  if (fVar10 <= 0.001) {
    fVar10 = 0.001;
  }
  fVar10 = _guard_xfg_dispatch_icall_nop(-2.2 / (fVar10 * fVar11));
  *(float *)(param_1 + 0x3c) = fVar10;
  fVar10 = *(float *)(param_4 + 0x14);
  *(float *)(param_1 + 0x40) = fVar10;
  if (fVar10 <= 0.001) {
    fVar10 = 0.001;
  }
  fVar11 = _guard_xfg_dispatch_icall_nop(-2.2 / (fVar10 * fVar11));
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x24) = iVar1;
  *(float *)(param_1 + 0x44) = fVar11;
  if (((param_5[1] & 0x8000) != 0) && (*(char *)(param_4 + 0x1c) == '\0')) {
    *(int *)(param_1 + 0x24) = iVar1 + -1;
  }
  if (bVar2) {
    pcVar7 = FUN_14320e8d0;
  }
  else if ((*(char *)(param_4 + 0x1d) == '\0') ||
          (pcVar7 = CAkCompressorFX::ProcessLinked, iVar1 == 1)) {
    pcVar7 = CAkCompressorFX::Process;
  }
  *(code **)(param_1 + 0x10) = pcVar7;
  uVar9 = 1;
  if (*(char *)(param_4 + 0x1d) == '\0') {
    uVar9 = *(uint *)(param_1 + 0x24);
  }
  *(uint *)(param_1 + 0x28) = uVar9;
  lVar5 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)uVar9 << 3);
  *(longlong *)(param_1 + 0x30) = lVar5;
  if (lVar5 == 0) {
    uVar8 = 0x34;
  }
  else {
    fVar11 = _guard_xfg_dispatch_icall_nop(-43.066322 / *(float *)(param_1 + 0x20));
    *(float *)(param_1 + 0x2c) = fVar11;
    uVar8 = 1;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 0x18);
  }
  return uVar8;
}



// FUNCTION 14320e220 Process body=719 status=ok
// SIG undefined Process(void)

void CAkCompressorFX::Process
               (longlong param_1,longlong *param_2,float param_3,float param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x3c);
  fVar3 = *(float *)(param_1 + 0x44);
  if (param_5 != 0) {
    lVar11 = 0;
    uVar9 = (ulonglong)param_5;
    lVar12 = lVar11;
    do {
      lVar7 = *param_2;
      uVar5 = *(ushort *)(param_2 + 2);
      uVar6 = *(ushort *)((longlong)param_2 + 0x12);
      pfVar10 = (float *)(lVar7 + (ulonglong)uVar5 * lVar12 * 4);
      fVar15 = *(float *)(*(longlong *)(param_1 + 0x30) + lVar11);
      fVar16 = *(float *)(*(longlong *)(param_1 + 0x30) + 4 + lVar11);
      do {
        fVar4 = *pfVar10;
        fVar13 = fVar4 * fVar4 + 1e-25;
        fVar16 = (fVar16 - fVar13) * fVar1 + fVar13;
        fVar13 = (float)(((uint)fVar16 & 0x7fffff) + 0x3f800000);
        fVar14 = fVar13 + 1.0;
        fVar13 = ((((fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186) / (fVar14 * fVar14 * fVar14)) *
                  10.0 + ((float)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 3.0103) - param_3;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar14 = fVar3;
        if (0.0 <= fVar13 - fVar15) {
          fVar14 = fVar2;
        }
        fVar15 = (fVar15 - fVar13) * fVar14 + fVar13;
        fVar13 = fVar15 * param_4 * 0.05;
        if (-37.0 <= fVar13) {
          uVar8 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
          fVar13 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
          fVar13 = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                   (float)(uVar8 & 0xff800000);
        }
        else {
          fVar13 = 0.0;
        }
        *pfVar10 = fVar4 * fVar13;
        pfVar10 = pfVar10 + 1;
      } while (pfVar10 < (float *)(lVar7 + ((ulonglong)uVar6 + (ulonglong)uVar5 * lVar12) * 4));
      lVar12 = lVar12 + 1;
      *(float *)(lVar11 + *(longlong *)(param_1 + 0x30)) = fVar15;
      *(float *)(*(longlong *)(param_1 + 0x30) + 4 + lVar11) = fVar16;
      lVar11 = lVar11 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 14320e4f0 ProcessLinked body=984 status=ok
// SIG undefined ProcessLinked(void)

void CAkCompressorFX::ProcessLinked
               (longlong param_1,undefined8 *param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar12 = (float *)*param_2;
  uVar6 = *(ushort *)(param_2 + 2);
  fVar2 = *(float *)(param_1 + 0x3c);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar15 = **(float **)(param_1 + 0x30);
  fVar16 = (*(float **)(param_1 + 0x30))[1];
  pfVar1 = pfVar12 + *(ushort *)((longlong)param_2 + 0x12);
  fVar4 = *(float *)(param_1 + 0x2c);
  do {
    uVar7 = 0;
    fVar14 = 0.0;
    pfVar10 = pfVar12;
    if (3 < param_5) {
      uVar7 = (param_5 - 4 >> 2) + 1;
      uVar11 = (ulonglong)uVar7;
      uVar7 = uVar7 * 4;
      do {
        fVar13 = *pfVar10;
        pfVar8 = pfVar10 + uVar6;
        pfVar9 = pfVar8 + uVar6;
        fVar5 = pfVar9[uVar6];
        pfVar10 = pfVar9 + uVar6 + uVar6;
        fVar14 = fVar14 + fVar13 * fVar13 + *pfVar8 * *pfVar8 + *pfVar9 * *pfVar9 + fVar5 * fVar5;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar7 < param_5) {
      uVar11 = (ulonglong)(param_5 - uVar7);
      do {
        fVar13 = *pfVar10;
        pfVar10 = pfVar10 + uVar6;
        fVar14 = fVar14 + fVar13 * fVar13;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    fVar14 = fVar14 * (1.0 / (float)param_5) + 1e-25;
    fVar16 = (fVar16 - fVar14) * fVar4 + fVar14;
    fVar14 = (float)(((uint)fVar16 & 0x7fffff) + 0x3f800000);
    fVar13 = fVar14 + 1.0;
    fVar14 = ((11.581186 / (fVar13 * fVar13 * fVar13)) * (fVar14 * fVar14 * fVar14 - 1.0) +
             ((float)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 3.0103) - param_3;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    fVar13 = fVar3;
    if (0.0 <= fVar14 - fVar15) {
      fVar13 = fVar2;
    }
    fVar15 = (fVar15 - fVar14) * fVar13 + fVar14;
    fVar14 = fVar15 * param_4 * 0.05;
    if (-37.0 <= fVar14) {
      uVar7 = (uint)(longlong)(fVar14 * 27866352.0 + 1.0653532e+09);
      fVar14 = (float)((uVar7 & 0x7fffff) + 0x3f800000);
      fVar14 = ((fVar14 * 0.32518977 + 0.020805772) * fVar14 + 0.65304345) *
               (float)(uVar7 & 0xff800000);
    }
    else {
      fVar14 = 0.0;
    }
    uVar7 = 0;
    pfVar10 = pfVar12;
    if (3 < param_5) {
      uVar7 = (param_5 - 4 >> 2) + 1;
      uVar11 = (ulonglong)uVar7;
      uVar7 = uVar7 * 4;
      do {
        *pfVar10 = fVar14 * *pfVar10;
        pfVar10 = pfVar10 + uVar6;
        *pfVar10 = fVar14 * *pfVar10;
        pfVar10 = pfVar10 + uVar6;
        *pfVar10 = fVar14 * *pfVar10;
        pfVar10 = pfVar10 + uVar6;
        *pfVar10 = fVar14 * *pfVar10;
        pfVar10 = pfVar10 + uVar6;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar7 < param_5) {
      uVar11 = (ulonglong)(param_5 - uVar7);
      do {
        *pfVar10 = fVar14 * *pfVar10;
        pfVar10 = pfVar10 + uVar6;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    pfVar12 = pfVar12 + 1;
  } while (pfVar12 < pfVar1);
  **(float **)(param_1 + 0x30) = fVar15;
  *(float *)(*(longlong *)(param_1 + 0x30) + 4) = fVar16;
  return;
}


