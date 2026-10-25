// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142d63e60 FUN_142d63e60 body=165 status=ok
// SIG undefined FUN_142d63e60(void)

undefined8 * FUN_142d63e60(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_18 [16];
  
  lVar6 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      FUN_142c6c710(param_2);
      uVar4 = FUN_1406d4330(param_2);
      puVar5 = (undefined8 *)FUN_142d61120(local_18,uVar4,param_3);
      uVar2 = *(undefined4 *)(puVar5 + 1);
      *param_1 = *puVar5;
      *(undefined4 *)(param_1 + 1) = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 142d63f10 FUN_142d63f10 body=226 status=ok
// SIG undefined FUN_142d63f10(void)

undefined8 * FUN_142d63f10(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_18;
  undefined4 local_10 [2];
  
  lVar3 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      FUN_142c6c710(param_2);
      lVar3 = FUN_1406d4330(param_2);
      local_18 = 0;
      local_10[0] = 0;
      if (lVar3 != 0) {
        FUN_142c703a0(lVar3,&DAT_146b321b8,&local_18);
        FUN_142c703a0(lVar3,&DAT_146b321c0,(longlong)&local_18 + 4);
        FUN_142c703a0(lVar3,&DAT_146b321c8,local_10);
      }
      *param_1 = local_18;
      *(undefined4 *)(param_1 + 1) = local_10[0];
    }
  }
  return param_1;
}



// FUNCTION 142d64010 FUN_142d64010 body=4998 status=ok
// SIG undefined FUN_142d64010(void)

byte FUN_142d64010(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong **pplVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  char cVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  byte bVar20;
  byte bVar21;
  int *piVar22;
  undefined8 *local_res8;
  byte local_res18 [8];
  byte local_res20 [8];
  undefined1 local_a8;
  char local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  byte local_9a [2];
  ulonglong local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88 [2];
  int local_80;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  lVar13 = param_1[1];
  bVar21 = 0;
  local_res20[0] = 0;
  if (lVar13 != 0) {
    plVar17 = (longlong *)*param_2;
    local_res8 = param_1;
    if (plVar17 == (longlong *)0x0) {
      plVar17 = (longlong *)param_2[1];
      if (plVar17 != (longlong *)0x0) {
        local_res20[0] = 0;
        cVar16 = (**(code **)(*plVar17 + 0xa0))(plVar17);
        while (cVar16 == '\0') {
          puVar6 = *(undefined1 **)plVar17[1];
          if ((undefined1 *)((undefined8 *)plVar17[1])[1] < puVar6 + 1) {
            (**(code **)(*plVar17 + 0x50))(plVar17,&local_res8,1);
          }
          else {
            uVar14 = (ulonglong)local_res8 >> 8;
            local_res8 = (undefined8 *)CONCAT71((int7)uVar14,*puVar6);
            *(longlong *)plVar17[1] = *(longlong *)plVar17[1] + 1;
          }
          if (((ulonglong)local_res8 & 0x80) != 0) {
            local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff7f);
            pbVar1 = *(byte **)plVar17[1];
            if ((byte *)((undefined8 *)plVar17[1])[1] < pbVar1 + 1) {
              (**(code **)(*plVar17 + 0x50))(plVar17,local_res20,1);
            }
            else {
              local_res20[0] = *pbVar1;
              *(longlong *)plVar17[1] = *(longlong *)plVar17[1] + 1;
            }
          }
          bVar8 = false;
          lVar13 = param_1[1];
          if (*(int *)(lVar13 + 0x188) <= (int)(uint)local_res20[0]) {
            iVar2 = *(int *)(lVar13 + 0x188);
            iVar18 = ((uint)local_res20[0] - *(int *)(lVar13 + 0x188)) + 1;
            iVar11 = iVar18 + iVar2;
            *(int *)(lVar13 + 0x188) = iVar11;
            if (*(int *)(lVar13 + 0x18c) < iVar11) {
              TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar13 + 0x180));
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar2 * 0xf8 + *(longlong *)(lVar13 + 0x180)),0,
                       (longlong)iVar18 * 0xf8);
            lVar13 = param_1[1];
            bVar8 = true;
          }
          puVar15 = (undefined4 *)((ulonglong)local_res20[0] * 0xf8 + *(longlong *)(lVar13 + 0x180))
          ;
          switch((ulonglong)local_res8 & 0xff) {
          case 0:
          case 1:
            *(undefined8 *)(puVar15 + 0x32) = *param_1;
            puVar7 = *(undefined4 **)plVar17[1];
            if ((undefined4 *)((undefined8 *)plVar17[1])[1] < puVar7 + 1) {
              (**(code **)(*plVar17 + 0x50))(plVar17,puVar15,4);
              if ((*(byte *)((longlong)plVar17 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar17,puVar15,4);
              }
            }
            else {
              *puVar15 = *puVar7;
              *(longlong *)plVar17[1] = *(longlong *)plVar17[1] + 4;
            }
            (**(code **)(*plVar17 + 0x30))(plVar17,puVar15 + 2);
            FUN_1424879e0(puVar15 + 4,plVar17,param_2);
            FUN_1424879e0(puVar15 + 7,plVar17,param_2);
            plVar19 = (longlong *)plVar17[1];
            if ((undefined4 *)plVar19[1] < (undefined4 *)*plVar19 + 1) {
              (**(code **)(*plVar17 + 0x50))(plVar17,&local_98,4);
              if ((*(byte *)((longlong)plVar17 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar17,&local_98,4);
              }
            }
            else {
              local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)*plVar19);
              *plVar19 = *plVar19 + 4;
            }
            FUN_142d6d500(puVar15,local_98 & 0xffffffff);
            (**(code **)(*plVar17 + 8))(plVar17,&local_8c);
            FUN_142d6d600(puVar15,local_8c);
            (**(code **)(*plVar17 + 8))(plVar17,&local_8b);
            FUN_142d6d5a0(puVar15,local_8b);
            if ((char)local_res8 == '\0') {
              FUN_1424879e0(puVar15 + 10,plVar17,param_2);
              FUN_1424879e0(puVar15 + 0xd,plVar17,param_2);
              FUN_1424879e0(puVar15 + 0x10,plVar17,param_2);
              FUN_1424879e0(puVar15 + 0x13,plVar17,param_2);
              FUN_1424879e0(puVar15 + 0x16,plVar17,param_2);
              FUN_1424879e0(puVar15 + 0x19,plVar17,param_2);
              FUN_1424879e0(puVar15 + 0x1c,plVar17,param_2);
              FUN_1424879e0(puVar15 + 0x1f,plVar17,param_2);
              goto switchD_142d65006_caseD_f;
            }
            break;
          case 2:
            plVar19 = (longlong *)plVar17[1];
            local_88[0] = 0;
            if ((undefined4 *)plVar19[1] < (undefined4 *)*plVar19 + 1) {
              (**(code **)(*plVar17 + 0x50))(plVar17,local_88,4);
              if ((*(byte *)((longlong)plVar17 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar17,local_88,4);
              }
              FUN_142d6d500(puVar15,local_88[0]);
            }
            else {
              local_88[0] = *(undefined4 *)*plVar19;
              *plVar19 = *plVar19 + 4;
              FUN_142d6d500(puVar15,local_88[0]);
            }
            break;
          case 3:
            (**(code **)(*plVar17 + 8))(plVar17,&local_8a);
            FUN_142d6d600(puVar15,local_8a);
            break;
          case 4:
            (**(code **)(*plVar17 + 8))(plVar17,&local_89);
            FUN_142d6d5a0(puVar15,local_89);
            break;
          case 5:
            FUN_1424879e0(puVar15 + 4,plVar17,param_2);
            break;
          case 6:
            FUN_1424879e0(puVar15 + 7,plVar17,param_2);
            break;
          case 7:
            FUN_1424879e0(puVar15 + 10,plVar17,param_2);
            break;
          case 8:
            FUN_1424879e0(puVar15 + 0xd,plVar17,param_2);
            break;
          case 9:
            FUN_1424879e0(puVar15 + 0x10,plVar17,param_2);
            break;
          case 10:
            FUN_1424879e0(puVar15 + 0x13,plVar17,param_2);
            break;
          case 0xb:
            FUN_1424879e0(puVar15 + 0x16,plVar17,param_2);
            break;
          case 0xc:
            FUN_1424879e0(puVar15 + 0x19,plVar17,param_2);
            break;
          case 0xd:
            FUN_1424879e0(puVar15 + 0x1c,plVar17,param_2);
            break;
          case 0xe:
            FUN_1424879e0(puVar15 + 0x1f,plVar17,param_2);
            break;
          case 0xf:
switchD_142d65006_caseD_f:
            FUN_1424879e0(puVar15 + 0x22,plVar17,param_2);
          }
          FUN_142d75970(puVar15,0);
          if ((bVar8) && (0 < *(int *)(param_1[1] + 0x280))) {
            FUN_142d5bd80(param_1[1],&local_68,puVar15);
            local_50 = local_68;
            uStack_4c = uStack_64;
            uStack_48 = uStack_60;
            uStack_44 = uStack_5c;
            local_40 = local_58;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1[1] + 0x278,&local_50);
          }
          cVar16 = (**(code **)(*plVar17 + 0xa0))(plVar17);
        }
      }
    }
    else {
      plVar19 = (longlong *)param_2[3];
      uVar14 = 0;
      uVar3 = *(uint *)(param_2 + 0xd);
      local_res18[0] = 0;
      local_78 = plVar19;
      if (0 < *(int *)(lVar13 + 0x188)) {
        do {
          bVar20 = (byte)uVar14;
          piVar22 = (int *)(uVar14 * 0xf8 + *(longlong *)(lVar13 + 0x180));
          lVar13 = *(longlong *)(piVar22 + 2);
          if (((lVar13 != 0) && (*(char *)(lVar13 + 0xad) != '\0')) &&
             ((uVar10 = uVar3 & 1, uVar10 != 0 || (*(char *)(lVar13 + 0xac) == '\0')))) {
            if ((uVar10 == 0) || (*(char *)(lVar13 + 0xad) != '\x02')) {
              bVar21 = 0;
            }
            else {
              bVar21 = 1;
            }
            if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] <= (int)uVar14)) ||
               (local_98 = plVar19[1], param_1 = local_res8,
               *piVar22 != *(int *)(local_98 + uVar14 * 0x48))) {
              plVar19 = (longlong *)plVar17[1];
              local_9a[0] = bVar21 ^ 1 | 0x80;
              if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                (**(code **)(*plVar17 + 0x50))(plVar17,local_9a,1);
              }
              else {
                local_9a[0] = *(byte *)*plVar19;
                *plVar19 = *plVar19 + 1;
              }
              plVar19 = (longlong *)plVar17[1];
              if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
              }
              else {
                local_res18[0] = *(byte *)*plVar19;
                *plVar19 = *plVar19 + 1;
              }
              piVar4 = *(int **)plVar17[1];
              if ((int *)((undefined8 *)plVar17[1])[1] < piVar4 + 1) {
                (**(code **)(*plVar17 + 0x50))(plVar17,piVar22,4);
                if ((*(byte *)((longlong)plVar17 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(plVar17,piVar22,4);
                }
              }
              else {
                *piVar22 = *piVar4;
                *(longlong *)plVar17[1] = *(longlong *)plVar17[1] + 4;
              }
              (**(code **)(*plVar17 + 0x30))(plVar17,piVar22 + 2);
              FUN_1424879e0(piVar22 + 4,plVar17,param_2);
              FUN_1424879e0(piVar22 + 7,plVar17,param_2);
              plVar19 = (longlong *)plVar17[1];
              local_7c = piVar22[0x28];
              if ((int *)plVar19[1] < (int *)*plVar19 + 1) {
                (**(code **)(*plVar17 + 0x50))(plVar17,&local_7c,4);
                if ((*(byte *)((longlong)plVar17 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(plVar17,&local_7c,4);
                }
              }
              else {
                local_7c = *(int *)*plVar19;
                *plVar19 = *plVar19 + 4;
              }
              local_8e = *(undefined1 *)((longlong)piVar22 + 0xef);
              (**(code **)(*plVar17 + 8))(plVar17,&local_8e);
              local_8d = (undefined1)piVar22[0x3c];
              (**(code **)(*plVar17 + 8))(plVar17,&local_8d);
              if (bVar21 != 0) {
                FUN_1424879e0(piVar22 + 10,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0xd,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0x10,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0x13,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0x16,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0x19,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0x1c,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0x1f,plVar17,param_2);
                FUN_1424879e0(piVar22 + 0x22,plVar17,param_2);
              }
              bVar21 = 1;
              plVar19 = local_78;
              bVar20 = local_res18[0];
              local_res20[0] = bVar21;
            }
            else {
              cVar16 = '\x01';
              if (*(float *)(local_98 + 0x3c + uVar14 * 0x48) != (float)piVar22[0x28]) {
                plVar19 = (longlong *)plVar17[1];
                local_a8 = 0x82;
                if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                  (**(code **)(*plVar17 + 0x50))(plVar17,&local_a8,1);
                }
                else {
                  local_a8 = *(undefined1 *)*plVar19;
                  *plVar19 = *plVar19 + 1;
                }
                plVar19 = (longlong *)plVar17[1];
                if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                  (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                }
                else {
                  local_res18[0] = *(byte *)*plVar19;
                  *plVar19 = *plVar19 + 1;
                }
                plVar19 = (longlong *)plVar17[1];
                cVar16 = '\0';
                local_80 = piVar22[0x28];
                if ((int *)plVar19[1] < (int *)*plVar19 + 1) {
                  (**(code **)(*plVar17 + 0x50))(plVar17,&local_80,4);
                  if ((*(byte *)((longlong)plVar17 + 0x29) & 0x10) != 0) {
                    FArchive::ByteSwap(plVar17,&local_80,4);
                  }
                }
                else {
                  local_80 = *(int *)*plVar19;
                  *plVar19 = *plVar19 + 4;
                }
              }
              cVar9 = FUN_142487af0(piVar22 + 4,*(undefined4 *)(local_98 + 0x10 + uVar14 * 0x48));
              if (cVar9 != '\0') {
                plVar19 = (longlong *)plVar17[1];
                local_a7 = cVar16 * -0x80 + '\x05';
                if ((char *)plVar19[1] < (char *)*plVar19 + 1) {
                  (**(code **)(*plVar17 + 0x50))(plVar17,&local_a7,1);
                }
                else {
                  local_a7 = *(char *)*plVar19;
                  *plVar19 = *plVar19 + 1;
                }
                if (cVar16 != '\0') {
                  plVar19 = (longlong *)plVar17[1];
                  if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                  }
                  else {
                    local_res18[0] = *(byte *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  cVar16 = '\0';
                }
                FUN_1424879e0(piVar22 + 4,plVar17,param_2);
              }
              cVar9 = FUN_142487af0(piVar22 + 7,*(undefined4 *)(local_98 + 0x14 + uVar14 * 0x48));
              if (cVar9 != '\0') {
                local_a6 = 6;
                if (cVar16 != '\0') {
                  local_a6 = 0x86;
                }
                plVar19 = (longlong *)plVar17[1];
                if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                  (**(code **)(*plVar17 + 0x50))(plVar17,&local_a6,1);
                }
                else {
                  local_a6 = *(undefined1 *)*plVar19;
                  *plVar19 = *plVar19 + 1;
                }
                if (cVar16 != '\0') {
                  plVar19 = (longlong *)plVar17[1];
                  if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                  }
                  else {
                    local_res18[0] = *(byte *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  cVar16 = '\0';
                }
                FUN_1424879e0(piVar22 + 7,plVar17,param_2);
              }
              bVar20 = *(byte *)(local_98 + 0x40 + uVar14 * 0x48);
              if (*(byte *)((longlong)piVar22 + 0xef) != (bVar20 & 1)) {
                local_a5 = 3;
                if (cVar16 != '\0') {
                  local_a5 = 0x83;
                }
                plVar19 = (longlong *)plVar17[1];
                if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                  (**(code **)(*plVar17 + 0x50))(plVar17,&local_a5,1);
                }
                else {
                  local_a5 = *(undefined1 *)*plVar19;
                  *plVar19 = *plVar19 + 1;
                }
                if (cVar16 != '\0') {
                  plVar19 = (longlong *)plVar17[1];
                  if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                  }
                  else {
                    local_res18[0] = *(byte *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  cVar16 = '\0';
                }
                local_90 = *(undefined1 *)((longlong)piVar22 + 0xef);
                (**(code **)(*plVar17 + 8))(plVar17,&local_90);
                bVar20 = *(byte *)(local_98 + 0x40 + uVar14 * 0x48);
              }
              if (*(byte *)(piVar22 + 0x3c) != (bVar20 >> 1 & 1)) {
                local_a4 = 4;
                if (cVar16 != '\0') {
                  local_a4 = 0x84;
                }
                plVar19 = (longlong *)plVar17[1];
                if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                  (**(code **)(*plVar17 + 0x50))(plVar17,&local_a4,1);
                }
                else {
                  local_a4 = *(undefined1 *)*plVar19;
                  *plVar19 = *plVar19 + 1;
                }
                if (cVar16 != '\0') {
                  plVar19 = (longlong *)plVar17[1];
                  if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                  }
                  else {
                    local_res18[0] = *(byte *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  cVar16 = '\0';
                }
                local_8f = (undefined1)piVar22[0x3c];
                (**(code **)(*plVar17 + 8))(plVar17,&local_8f);
              }
              if (bVar21 != 0) {
                cVar9 = FUN_142487af0(piVar22 + 10,*(undefined4 *)(local_98 + 0x18 + uVar14 * 0x48))
                ;
                if (cVar9 != '\0') {
                  local_a3 = 7;
                  if (cVar16 != '\0') {
                    local_a3 = 0x87;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_a3,1);
                  }
                  else {
                    local_a3 = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 10,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0xd,*(undefined4 *)(local_98 + 0x1c + uVar14 * 0x48)
                                     );
                if (cVar9 != '\0') {
                  local_a2 = 8;
                  if (cVar16 != '\0') {
                    local_a2 = 0x88;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_a2,1);
                  }
                  else {
                    local_a2 = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0xd,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0x10,
                                      *(undefined4 *)(local_98 + 0x20 + uVar14 * 0x48));
                if (cVar9 != '\0') {
                  local_a1 = 9;
                  if (cVar16 != '\0') {
                    local_a1 = 0x89;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_a1,1);
                  }
                  else {
                    local_a1 = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0x10,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0x13,
                                      *(undefined4 *)(local_98 + 0x24 + uVar14 * 0x48));
                if (cVar9 != '\0') {
                  local_a0 = 10;
                  if (cVar16 != '\0') {
                    local_a0 = 0x8a;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_a0,1);
                  }
                  else {
                    local_a0 = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0x13,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0x16,
                                      *(undefined4 *)(local_98 + 0x28 + uVar14 * 0x48));
                if (cVar9 != '\0') {
                  local_9f = 0xb;
                  if (cVar16 != '\0') {
                    local_9f = 0x8b;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_9f,1);
                  }
                  else {
                    local_9f = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0x16,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0x19,
                                      *(undefined4 *)(local_98 + 0x2c + uVar14 * 0x48));
                if (cVar9 != '\0') {
                  local_9e = 0xc;
                  if (cVar16 != '\0') {
                    local_9e = 0x8c;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_9e,1);
                  }
                  else {
                    local_9e = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0x19,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0x1c,
                                      *(undefined4 *)(local_98 + 0x30 + uVar14 * 0x48));
                if (cVar9 != '\0') {
                  local_9d = 0xd;
                  if (cVar16 != '\0') {
                    local_9d = 0x8d;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_9d,1);
                  }
                  else {
                    local_9d = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0x1c,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0x1f,
                                      *(undefined4 *)(local_98 + 0x34 + uVar14 * 0x48));
                if (cVar9 != '\0') {
                  local_9c = 0xe;
                  if (cVar16 != '\0') {
                    local_9c = 0x8e;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_9c,1);
                  }
                  else {
                    local_9c = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0x1f,plVar17,param_2);
                }
                cVar9 = FUN_142487af0(piVar22 + 0x22,
                                      *(undefined4 *)(local_98 + 0x38 + uVar14 * 0x48));
                if (cVar9 != '\0') {
                  local_9b = 0xf;
                  if (cVar16 != '\0') {
                    local_9b = 0x8f;
                  }
                  plVar19 = (longlong *)plVar17[1];
                  if ((undefined1 *)plVar19[1] < (undefined1 *)*plVar19 + 1) {
                    (**(code **)(*plVar17 + 0x50))(plVar17,&local_9b,1);
                  }
                  else {
                    local_9b = *(undefined1 *)*plVar19;
                    *plVar19 = *plVar19 + 1;
                  }
                  if (cVar16 != '\0') {
                    plVar19 = (longlong *)plVar17[1];
                    if ((byte *)plVar19[1] < (byte *)*plVar19 + 1) {
                      (**(code **)(*plVar17 + 0x50))(plVar17,local_res18,1);
                    }
                    else {
                      local_res18[0] = *(byte *)*plVar19;
                      *plVar19 = *plVar19 + 1;
                    }
                    cVar16 = '\0';
                  }
                  FUN_1424879e0(piVar22 + 0x22,plVar17,param_2);
                }
              }
              bVar21 = local_res20[0] | cVar16 == '\0';
              plVar19 = local_78;
              param_1 = local_res8;
              bVar20 = local_res18[0];
              local_res20[0] = bVar21;
            }
          }
          lVar13 = param_1[1];
          local_res18[0] = bVar20 + 1;
          uVar14 = (ulonglong)local_res18[0];
        } while ((int)(uint)local_res18[0] < *(int *)(lVar13 + 0x188));
        if (bVar21 != 0) {
          plVar12 = (longlong *)operator_new(0x18);
          plVar19 = (longlong *)0x0;
          plVar17 = plVar19;
          if (plVar12 != (longlong *)0x0) {
            plVar12[2] = 0;
            *plVar12 = (longlong)&PTR_FUN_145886360;
            plVar12[1] = 0;
            plVar12[2] = 0;
            plVar17 = plVar12;
          }
          local_78 = plVar17;
          plVar12 = (longlong *)operator_new(0x18);
          if (plVar12 != (longlong *)0x0) {
            *(undefined4 *)(plVar12 + 1) = 1;
            *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
            *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
            plVar12[2] = (longlong)plVar17;
            plVar19 = plVar12;
          }
          local_70 = plVar19;
          SharedPointerInternals::EnableSharedFromThis(&local_78,plVar17,plVar17);
          pplVar5 = (longlong **)param_2[2];
          if (pplVar5 != &local_78) {
            *pplVar5 = local_78;
            local_78 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(pplVar5 + 1);
            plVar19 = local_70;
          }
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar19 + 1;
            lVar13 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar22 = (int *)((longlong)plVar19 + 0xc);
              iVar2 = *piVar22;
              *piVar22 = *piVar22 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19);
              }
            }
          }
          lVar13 = plVar17[2];
          iVar2 = *(int *)(param_1[1] + 0x188);
          iVar11 = (int)lVar13 + iVar2;
          *(int *)(plVar17 + 2) = iVar11;
          if (*(int *)((longlong)plVar17 + 0x14) < iVar11) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar17 + 1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(plVar17[1] + (longlong)(int)lVar13 * 0x48),0,(longlong)iVar2 * 0x48);
          lVar13 = param_1[1];
          bVar20 = 0;
          if (0 < *(int *)(lVar13 + 0x188)) {
            do {
              uVar14 = (ulonglong)bVar20;
              puVar15 = (undefined4 *)(uVar14 * 0xf8 + *(longlong *)(lVar13 + 0x180));
              lVar13 = *(longlong *)(puVar15 + 2);
              if (((lVar13 != 0) && (*(char *)(lVar13 + 0xad) != '\0')) &&
                 (((uVar3 & 1) != 0 || (*(char *)(lVar13 + 0xac) == '\0')))) {
                lVar13 = plVar17[1];
                *(undefined4 *)(lVar13 + uVar14 * 0x48) = *puVar15;
                *(undefined8 *)(lVar13 + 8 + uVar14 * 0x48) = *(undefined8 *)(puVar15 + 2);
                *(undefined4 *)(lVar13 + 0x10 + uVar14 * 0x48) = puVar15[5];
                *(undefined4 *)(lVar13 + 0x14 + uVar14 * 0x48) = puVar15[8];
                *(undefined4 *)(lVar13 + 0x18 + uVar14 * 0x48) = puVar15[0xb];
                *(undefined4 *)(lVar13 + 0x1c + uVar14 * 0x48) = puVar15[0xe];
                *(undefined4 *)(lVar13 + 0x20 + uVar14 * 0x48) = puVar15[0x11];
                *(undefined4 *)(lVar13 + 0x24 + uVar14 * 0x48) = puVar15[0x14];
                *(undefined4 *)(lVar13 + 0x28 + uVar14 * 0x48) = puVar15[0x17];
                *(undefined4 *)(lVar13 + 0x2c + uVar14 * 0x48) = puVar15[0x1a];
                *(undefined4 *)(lVar13 + 0x30 + uVar14 * 0x48) = puVar15[0x1d];
                *(undefined4 *)(lVar13 + 0x34 + uVar14 * 0x48) = puVar15[0x20];
                *(undefined4 *)(lVar13 + 0x38 + uVar14 * 0x48) = puVar15[0x23];
                *(undefined4 *)(lVar13 + 0x3c + uVar14 * 0x48) = puVar15[0x28];
                pbVar1 = (byte *)(lVar13 + 0x40 + uVar14 * 0x48);
                *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)puVar15 + 0xef) ^
                                    *(byte *)(lVar13 + 0x40 + uVar14 * 0x48)) & 1;
                pbVar1 = (byte *)(lVar13 + 0x40 + uVar14 * 0x48);
                *pbVar1 = *pbVar1 ^ (*(char *)(puVar15 + 0x3c) * '\x02' ^
                                    *(byte *)(lVar13 + 0x40 + uVar14 * 0x48)) & 2;
              }
              lVar13 = param_1[1];
              bVar20 = bVar20 + 1;
            } while ((int)(uint)bVar20 < *(int *)(lVar13 + 0x188));
          }
        }
      }
    }
  }
  return bVar21;
}



// FUNCTION 142d653e0 FUN_142d653e0 body=378 status=ok
// SIG undefined FUN_142d653e0(void)

byte FUN_142d653e0(longlong param_1,char *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  bVar4 = FUN_142c79030();
  lVar1 = *param_3;
  bVar4 = bVar4 & 1;
  if (lVar1 != 0) {
    if (*param_2 != '\0') {
      if (*param_2 != '\x01') {
        return bVar4;
      }
      lVar2 = *(longlong *)(param_2 + 0x28);
      if (lVar2 == 0) {
        return bVar4;
      }
      if (*(char *)(lVar2 + 0xa0) == *(char *)(param_1 + 0x468)) {
        return bVar4;
      }
      FUN_142c881e0(lVar1,CONCAT71((int7)((ulonglong)lVar2 >> 8),0x15),param_2);
    }
    FBitWriter::WriteBit(lVar1,*(undefined1 *)(param_1 + 0x468));
    return bVar4;
  }
  if (param_4 == 0) {
    return bVar4;
  }
  if (*param_2 == '\0') {
    bVar5 = false;
    if (*(char *)(param_4 + 0x28) < '\0') goto LAB_142d65535;
    lVar1 = *(longlong *)(param_4 + 0xa8);
    if (*(longlong *)(param_4 + 0xa0) <= lVar1) goto LAB_142d654f3;
    bVar3 = *(byte *)((longlong)(int)(lVar1 >> 3) + *(longlong *)(param_4 + 0x90)) &
            '\x01' << ((byte)lVar1 & 7);
    *(longlong *)(param_4 + 0xa8) = lVar1 + 1;
  }
  else {
    if (*param_2 != '\x01') {
      return bVar4;
    }
    if (param_2[1] != '\x15') {
      return bVar4;
    }
    bVar5 = false;
    if (*(char *)(param_4 + 0x28) < '\0') goto LAB_142d65535;
    lVar1 = *(longlong *)(param_4 + 0xa8);
    if (*(longlong *)(param_4 + 0xa0) <= lVar1) {
LAB_142d654f3:
      bVar5 = false;
      FUN_1416952d0(param_4,1);
      goto LAB_142d65535;
    }
    bVar3 = *(byte *)((longlong)(int)(lVar1 >> 3) + *(longlong *)(param_4 + 0x90)) &
            '\x01' << ((byte)lVar1 & 7);
    *(longlong *)(param_4 + 0xa8) = lVar1 + 1;
  }
  bVar5 = bVar3 != 0;
LAB_142d65535:
  *(bool *)(param_1 + 0x468) = bVar5;
  return bVar4;
}



// FUNCTION 142d65560 FUN_142d65560 body=657 status=ok
// SIG undefined FUN_142d65560(void)

byte FUN_142d65560(longlong param_1,char *param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_28 [2];
  
  bVar1 = FUN_142c79030();
  lVar4 = *param_3;
  bVar1 = bVar1 & 1;
  if (lVar4 == 0) {
    if (param_4 != 0) {
      if (*param_2 == '\0') {
        FUN_142d52660(param_4,param_1 + 0x528);
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar3[1] = param_1;
          *plVar3 = (longlong)&DAT_143f3ed00;
          plVar3[2] = (longlong)FUN_142d67410;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar4;
          *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        iVar7 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar7 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar7 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar7);
        }
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_2 + 0x30));
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        if (local_28 != puVar5) {
          if (plVar3 == (longlong *)0x0) {
            return bVar1;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        if (plVar3 == (longlong *)0x0) {
          return bVar1;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
      }
      else {
        if (*param_2 != '\x01') {
          return bVar1;
        }
        if (param_2[1] != '\x0e') {
          return bVar1;
        }
        FUN_142d52660(param_4,param_1 + 0x528);
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar3[1] = param_1;
          *plVar3 = (longlong)&DAT_143f3ed00;
          plVar3[2] = (longlong)FUN_142d67410;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar4;
          *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        iVar7 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar7 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar7 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar7);
        }
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_2 + 0x30));
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        if (local_28 != puVar5) {
          if (plVar3 == (longlong *)0x0) {
            return bVar1;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        if (plVar3 == (longlong *)0x0) {
          return bVar1;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
      }
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  else if (*param_2 == '\0') {
    FUN_142d52660(lVar4,param_1 + 0x528);
  }
  else if ((*param_2 == '\x01') && (lVar8 = *(longlong *)(param_2 + 0x28), lVar8 != 0)) {
    iVar7 = *(int *)(lVar8 + 0x70);
    if (iVar7 == *(int *)(param_1 + 0x530)) {
      lVar6 = *(longlong *)(param_1 + 0x528);
      lVar8 = *(longlong *)(lVar8 + 0x68);
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        cVar2 = FUN_142d98d60(lVar8,lVar6);
        if (cVar2 == '\0') goto LAB_142d65601;
        lVar8 = lVar8 + 0x50;
        lVar6 = lVar6 + 0x50;
      }
    }
    else {
LAB_142d65601:
      FUN_142c881e0(lVar4,0xe,param_2);
      FUN_142d52660(lVar4,(longlong *)(param_1 + 0x528));
    }
  }
  return bVar1;
}



// FUNCTION 142d65800 FUN_142d65800 body=1499 status=ok
// SIG undefined FUN_142d65800(void)

byte FUN_142d65800(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  char local_res18 [8];
  undefined8 local_40 [3];
  
  bVar2 = FUN_142c79030();
  bVar2 = bVar2 & 1;
  param_3 = (longlong *)*param_3;
  if (param_3 != (longlong *)0x0) {
    param_4 = param_3;
    if (*param_2 == '\0') {
      plVar4 = (longlong *)param_3[1];
      local_res18[0] = *(char *)(param_1 + 0x4d8);
      if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,local_res18,1);
      }
      else {
        local_res18[0] = *(char *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
      FUN_142d52660(param_3,param_1 + 0x578);
    }
    else {
      if (*param_2 != '\x01') {
        return bVar2;
      }
      lVar5 = *(longlong *)(param_2 + 0x28);
      if (lVar5 == 0) {
        return bVar2;
      }
      if (*(char *)(lVar5 + 0x78) != *(char *)(param_1 + 0x4d8)) {
        FUN_142c881e0(param_3,0xf,param_2);
        plVar4 = (longlong *)param_3[1];
        local_res18[0] = *(char *)(param_1 + 0x4d8);
        if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,local_res18,1);
        }
        else {
          local_res18[0] = *(char *)*plVar4;
          *plVar4 = *plVar4 + 1;
        }
      }
      iVar8 = *(int *)(lVar5 + 0x70);
      if (iVar8 == *(int *)(param_1 + 0x580)) {
        lVar7 = *(longlong *)(param_1 + 0x578);
        lVar9 = *(longlong *)(lVar5 + 0x68);
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          cVar3 = FUN_142d98d60(lVar9,lVar7);
          if (cVar3 == '\0') goto LAB_142d658ff;
          lVar9 = lVar9 + 0x50;
          lVar7 = lVar7 + 0x50;
        }
      }
      else {
LAB_142d658ff:
        FUN_142c881e0(param_3,0xe,param_2);
        FUN_142d52660(param_3,param_1 + 0x578);
      }
      if (((*(float *)(param_1 + 0x4dc) == *(float *)(lVar5 + 0x7c)) &&
          (*(float *)(param_1 + 0x4e0) == *(float *)(lVar5 + 0x80))) &&
         (*(float *)(param_1 + 0x4e4) == *(float *)(lVar5 + 0x84))) {
        return bVar2;
      }
      FUN_142c881e0(param_3,0x10,param_2);
    }
    goto LAB_142d65db0;
  }
  if (param_4 == (longlong *)0x0) {
    return bVar2;
  }
  if (*param_2 != '\0') {
    if (*param_2 != '\x01') {
      return bVar2;
    }
    cVar3 = param_2[1];
    if (cVar3 != '\x0e') {
      if (cVar3 != '\x0f') {
        if (cVar3 != '\x10') {
          return bVar2;
        }
        goto LAB_142d65db0;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x4d8);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        plVar4[1] = param_1;
        *plVar4 = (longlong)&PTR_GetPoolName_143fcffe0;
        plVar4[2] = (longlong)FUN_142d67470;
        *(undefined1 *)(plVar4 + 3) = uVar1;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_GetPoolName_143fd0028;
      }
      iVar8 = *(int *)(param_2 + 0x38);
      *(int *)(param_2 + 0x38) = iVar8 + 1;
      if (*(int *)(param_2 + 0x3c) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar8);
      }
      puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_2 + 0x30));
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      if (local_40 != puVar6) {
        if (plVar4 == (longlong *)0x0) goto LAB_142d65ac5;
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
LAB_142d65ac5:
      plVar4 = (longlong *)param_4[1];
      if ((undefined1 *)*plVar4 + 1 <= (undefined1 *)plVar4[1]) {
        uVar1 = *(undefined1 *)*plVar4;
        *plVar4 = *plVar4 + 1;
        *(undefined1 *)(param_1 + 0x4d8) = uVar1;
        return bVar2;
      }
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
      *(char *)(param_1 + 0x4d8) = local_res18[0];
      return bVar2;
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = param_1;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_142d67440;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    iVar8 = *(int *)(param_2 + 0x38);
    *(int *)(param_2 + 0x38) = iVar8 + 1;
    if (*(int *)(param_2 + 0x3c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar8);
    }
    puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_2 + 0x30));
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    if (local_40 != puVar6) {
      if (plVar4 == (longlong *)0x0) goto LAB_142d65bd3;
      (**(code **)(*plVar4 + 0x30))(plVar4);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
LAB_142d65bd3:
    FUN_142d52660(param_4,param_1 + 0x578);
    return bVar2;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x4d8);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143fcffe0;
    plVar4[2] = (longlong)FUN_142d67470;
    *(undefined1 *)(plVar4 + 3) = uVar1;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143fd0028;
  }
  iVar8 = *(int *)(param_2 + 0x38);
  *(int *)(param_2 + 0x38) = iVar8 + 1;
  if (*(int *)(param_2 + 0x3c) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar8);
  }
  puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_2 + 0x30));
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  if (local_40 == puVar6) {
LAB_142d65c7b:
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  else if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4);
    goto LAB_142d65c7b;
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_142d67440;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  iVar8 = *(int *)(param_2 + 0x38);
  *(int *)(param_2 + 0x38) = iVar8 + 1;
  if (*(int *)(param_2 + 0x3c) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar8);
  }
  puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_2 + 0x30));
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  if (local_40 == puVar6) {
LAB_142d65d2e:
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  else if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4);
    goto LAB_142d65d2e;
  }
  plVar4 = (longlong *)param_4[1];
  if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
    (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
  }
  else {
    local_res18[0] = *(char *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  *(char *)(param_1 + 0x4d8) = local_res18[0];
  FUN_142d52660(param_4,param_1 + 0x578);
LAB_142d65db0:
  FUN_1406da970(param_4,param_1 + 0x4dc);
  return bVar2;
}



// FUNCTION 142d65de0 FUN_142d65de0 body=272 status=ok
// SIG undefined FUN_142d65de0(void)

undefined1 FUN_142d65de0(char *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  uVar3 = 1;
  pcVar1 = *(char **)param_2[1];
  if ((char *)((undefined8 *)param_2[1])[1] < pcVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,1);
  }
  else {
    *param_1 = *pcVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if (*param_1 == -1) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *param_1 = -1;
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
    }
  }
  else {
    local_res8 = *(undefined8 *)(param_1 + 8);
    uVar4 = FUN_142e1a5a0();
    uVar3 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar4,&local_res8,0);
    *(undefined8 *)(param_1 + 8) = local_res8;
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x10,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  *param_4 = 1;
  return uVar3;
}



// FUNCTION 142d65ef0 FUN_142d65ef0 body=1683 status=ok
// SIG undefined FUN_142d65ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d65ef0(longlong *param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  ushort uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  ushort uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  byte local_res10 [8];
  undefined8 local_res18;
  ushort local_res20 [4];
  int local_48 [4];
  
  uVar16 = 0;
  uVar14 = 0;
  local_res20[0] = 0;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    uVar11 = uVar14;
    if (((*(float *)(param_1 + 0x10) == 0.0) && (*(float *)((longlong)param_1 + 0x84) == 0.0)) &&
       (*(float *)(param_1 + 0x11) == 0.0)) {
      uVar11 = 8;
    }
    local_res20[0] = uVar14;
    if (((ABS(*(float *)((longlong)param_1 + 0x8c) - (float)DAT_1464aa788) <= 0.0001) &&
        (ABS(*(float *)(param_1 + 0x12) - DAT_1464aa788._4_4_) <= 0.0001)) &&
       (ABS(*(float *)((longlong)param_1 + 0x94) - DAT_1464aa790) <= 0.0001)) {
      local_res20[0] = 0x10;
    }
    bVar10 = *(byte *)(param_1 + 5);
    uVar17 = uVar14;
    if (ABS(*(float *)((longlong)param_1 + 0xa4) - 1.0) <= 1e-08) {
      uVar17 = 0x80;
    }
    if (ABS(*(float *)(param_1 + 0x14)) <= 1e-08) {
      uVar14 = 0x20;
    }
    local_res20[0] =
         uVar17 | uVar14 |
         (((((((ushort)(bVar10 >> 7) * 2 | (ushort)(bVar10 >> 5 & 1)) * 2 |
             (ushort)(bVar10 >> 4 & 1)) * 2 | (ushort)(bVar10 >> 3 & 1)) * 2 |
           (ushort)(bVar10 >> 2 & 1)) * 2 | (ushort)(bVar10 >> 1 & 1)) * 2 | (ushort)(bVar10 & 1))
         << 8 | -(ushort)(param_1[0x13] != 0) & 0x40 |
         -(ushort)(param_1[4] != 0) & 4 | -(ushort)((int)param_1[3] != 0) & 2 |
         (ushort)((int)param_1[1] != 0) | uVar11 | local_res20[0];
  }
  plVar3 = (longlong *)param_2[1];
  local_res18 = param_3;
  if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res20,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res20,2);
    }
  }
  else {
    local_res20[0] = *(ushort *)*plVar3;
    *plVar3 = *plVar3 + 2;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    bVar10 = (byte)(local_res20[0] >> 8);
    *(byte *)(param_1 + 5) =
         ((((((bVar10 >> 6) << 2 | bVar10 >> 5 & 1 | 2) * '\x02' | bVar10 >> 4 & 1) * '\x02' |
           bVar10 >> 3 & 1) * '\x02' | bVar10 >> 2 & 1) * '\x02' | bVar10 >> 1 & 1) * '\x02' |
         bVar10 & 1;
    *(undefined4 *)(param_1 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,0);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if ((*(int *)((longlong)param_1 + 0x1c) < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 2,0);
    }
    param_1[4] = 0;
    param_1[0x13] = 0;
    uVar7 = DAT_1468b5d98;
    param_1[0x10] = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x11) = uVar7;
    fVar5 = DAT_1464aa790;
    *(ulonglong *)((longlong)param_1 + 0x8c) = CONCAT44(DAT_1464aa788._4_4_,(float)DAT_1464aa788);
    *(float *)((longlong)param_1 + 0x94) = fVar5;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  }
  *param_4 = 1;
  local_res10[0] = 1;
  if ((local_res20[0] & 1) != 0) {
    local_48[0] = 0xff;
    if ((int)param_1[1] < 0x100) {
      local_48[0] = (int)param_1[1];
    }
    (**(code **)(*param_2 + 0x58))(param_2,local_48,8);
    iVar19 = local_48[0];
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + local_48[0];
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + local_48[0]) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      puVar13 = (undefined4 *)((longlong)iVar2 * 0x90 + *param_1);
      if (iVar19 != 0) {
        puVar12 = (undefined8 *)(puVar13 + 7);
        do {
          *puVar13 = 0;
          puVar13 = puVar13 + 0x24;
          *(undefined4 *)(puVar12 + -3) = 0;
          *(undefined1 *)((longlong)puVar12 + -0x14) = 0;
          puVar12[-2] = 0;
          puVar12[-1] = 0;
          *puVar12 = 0;
          puVar12[1] = 0;
          *(undefined4 *)(puVar12 + 2) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x24) = 0;
          uVar6 = uRam00000001468b5b78;
          *(undefined8 *)((longlong)puVar12 + 0x34) = _DAT_1468b5b70;
          *(undefined8 *)((longlong)puVar12 + 0x3c) = uVar6;
          uVar6 = uRam00000001468b5b88;
          *(undefined8 *)((longlong)puVar12 + 0x44) = _DAT_1468b5b80;
          *(undefined8 *)((longlong)puVar12 + 0x4c) = uVar6;
          uVar9 = uRam00000001468b5b9c;
          uVar8 = uRam00000001468b5b98;
          uVar7 = uRam00000001468b5b94;
          *(undefined4 *)((longlong)puVar12 + 0x54) = _DAT_1468b5b90;
          *(undefined4 *)(puVar12 + 0xb) = uVar7;
          *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar8;
          *(undefined4 *)(puVar12 + 0xc) = uVar9;
          *(longlong *)((longlong)puVar12 + 100) = _DAT_1468b5d90;
          *(undefined4 *)((longlong)puVar12 + 0x6c) = DAT_1468b5d98;
          *(undefined1 *)(puVar12 + 0xe) = 0;
          iVar19 = iVar19 + -1;
          puVar12 = puVar12 + 0x12;
        } while (iVar19 != 0);
      }
    }
    uVar18 = uVar16;
    if (0 < local_48[0]) {
      do {
        lVar20 = *param_1 + uVar18;
        (**(code **)(*param_2 + 0x40))(param_2,lVar20);
        puVar4 = *(undefined1 **)param_2[1];
        if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,lVar20 + 8,1);
        }
        else {
          *(undefined1 *)(lVar20 + 8) = *puVar4;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
        }
        cVar1 = *(char *)(lVar20 + 8);
        if (cVar1 == '\x01') {
          puVar13 = *(undefined4 **)param_2[1];
          if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar13 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,lVar20 + 0xc,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              lVar20 = lVar20 + 0xc;
LAB_142d663fa:
              FArchive::ByteSwap(param_2,lVar20,4);
            }
          }
          else {
            *(undefined4 *)(lVar20 + 0xc) = *puVar13;
            *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
          }
        }
        else if (cVar1 == '\x03') {
          FUN_1406da970(param_2,lVar20 + 0x14);
        }
        else if (cVar1 == '\x05') {
          puVar13 = *(undefined4 **)param_2[1];
          if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar13 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,lVar20 + 0x2c,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              lVar20 = lVar20 + 0x2c;
              goto LAB_142d663fa;
            }
          }
          else {
            *(undefined4 *)(lVar20 + 0x2c) = *puVar13;
            *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
          }
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar18 = uVar18 + 0x90;
        param_3 = local_res18;
      } while ((int)uVar15 < local_48[0]);
    }
  }
  if ((local_res20[0] & 2) != 0) {
    FUN_142d52830(param_2,param_1 + 2);
  }
  if ((local_res20[0] & 4) != 0) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 4);
  }
  if ((local_res20[0] & 0x40) != 0) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x13);
  }
  if ((local_res20[0] & 8) == 0) {
    FUN_142315ac0(param_1 + 0x10,param_2,param_3,local_res10);
    *param_4 = *param_4 & local_res10[0];
  }
  if ((local_res20[0] & 0x10) == 0) {
    bVar10 = FUN_14292e650((longlong)param_1 + 0x8c,param_2);
    *param_4 = *param_4 & bVar10;
  }
  if ((local_res20[0] & 0x20) == 0) {
    puVar13 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar13 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x14,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x14,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = *puVar13;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if (-1 < (char)local_res20[0]) {
    puVar13 = *(undefined4 **)param_2[1];
    if (puVar13 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
      *(undefined4 *)((longlong)param_1 + 0xa4) = *puVar13;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      return 1;
    }
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0xa4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,(longlong)param_1 + 0xa4,4);
    }
  }
  return 1;
}



// FUNCTION 142d66590 FUN_142d66590 body=471 status=ok
// SIG undefined FUN_142d66590(void)

void FUN_142d66590(undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  uint uVar4;
  ushort local_res8 [8];
  
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,1);
  }
  else {
    param_1[2] = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  plVar3 = (longlong *)param_2[1];
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_res8[0] = (ushort)(byte)param_1[1] << 0xe | *(ushort *)(param_1 + 0x10);
    if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,2);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar3;
      *plVar3 = *plVar3 + 2;
    }
    (**(code **)(*param_2 + 0x50))
              (param_2,*(undefined8 *)(param_1 + 8),(longlong)*(int *)(param_1 + 0x10));
    *param_4 = 1;
    return;
  }
  if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,2);
    }
  }
  else {
    local_res8[0] = *(ushort *)*plVar3;
    *plVar3 = *plVar3 + 2;
  }
  param_1[1] = (byte)(local_res8[0] >> 0xe);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = local_res8[0] & 0x3fff;
  if ((int)uVar1 < (int)uVar4) {
    *(uint *)(param_1 + 0x10) = uVar4;
    if (*(int *)(param_1 + 0x14) < (int)uVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)uVar1 + *(longlong *)(param_1 + 8)),0,
               (longlong)(int)(uVar4 - uVar1));
  }
  else if (((int)uVar4 < (int)uVar1) && (uVar4 != uVar1)) {
    *(uint *)(param_1 + 0x10) = uVar4;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 8);
  }
  (**(code **)(*param_2 + 0x50))
            (param_2,*(undefined8 *)(param_1 + 8),(longlong)*(int *)(param_1 + 0x10));
  *param_4 = 1;
  return;
}



// FUNCTION 142d66770 FUN_142d66770 body=417 status=ok
// SIG undefined FUN_142d66770(void)

undefined8 FUN_142d66770(longlong param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  int local_58 [4];
  undefined8 local_48;
  undefined4 local_40;
  
  *param_4 = 1;
  (**(code **)(*param_2 + 8))(param_2,param_1);
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    local_res8[0] = 0;
    (**(code **)(*param_2 + 0x60))(param_2,local_res8,0x14);
    local_res10[0] = 0;
    local_res20[0] = 0;
    local_58[0] = 0;
    iVar3 = 1 << ((char)local_res8[0] + 1U & 0x1f);
    iVar2 = 1 << ((char)local_res8[0] + 2U & 0x1f);
    (**(code **)(*param_2 + 0x60))(param_2,local_res10,iVar2);
    (**(code **)(*param_2 + 0x60))(param_2,local_res20,iVar2);
    (**(code **)(*param_2 + 0x60))(param_2,local_58,iVar2);
    *(float *)(param_1 + 4) = (float)(local_res10[0] - iVar3);
    *(float *)(param_1 + 8) = (float)(local_res20[0] - iVar3);
    bVar1 = 1;
    *(float *)(param_1 + 0xc) = (float)(local_58[0] - iVar3);
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 4);
    local_40 = *(undefined4 *)(param_1 + 0xc);
    bVar1 = FUN_140a79b20(&local_48,param_2);
  }
  *param_4 = *param_4 & bVar1;
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar1);
  FUN_142315ac0(param_1 + 0x10,param_2,param_3,local_res8);
  *param_4 = *param_4 & (byte)local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x1c);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x24);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x2c);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x38);
  return 1;
}



// FUNCTION 142d66920 FUN_142d66920 body=57 status=ok
// SIG undefined FUN_142d66920(void)

void FUN_142d66920(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 != 0) && (cVar1 = FUN_1428cdc10(), cVar1 != '\0')) &&
     (iVar2 = FUN_1428cf800(param_1), iVar2 != 3)) {
    FUN_142c71720(param_1);
    FUN_142d392d0(param_1);
  }
  return;
}



// FUNCTION 142d66960 FUN_142d66960 body=604 status=ok
// SIG undefined FUN_142d66960(void)

void FUN_142d66960(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 local_res8;
  uint uStackX_c;
  undefined1 local_res20 [8];
  longlong *local_48;
  undefined4 *local_40;
  undefined8 local_38 [2];
  
  plVar8 = (longlong *)0x0;
  plVar2 = (longlong *)(param_1 + 600);
  local_res8 = 0;
  if (((*plVar2 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) ||
     (*(longlong *)(param_1 + 0x268) == 0)) {
LAB_142d66a0a:
    plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar6 = plVar8;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x268) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_142d66a0a;
    plVar6 = *(longlong **)(param_1 + 0x268);
    plVar7 = plVar8;
    plVar9 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar9 = plVar8, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar6[1];
        if (bVar10) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar9 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar7 = *(longlong **)(param_1 + 0x260);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    plVar6 = (longlong *)0x1;
    if (plVar7[3] != 0) {
      bVar10 = true;
      goto LAB_142d66a12;
    }
  }
  bVar10 = false;
LAB_142d66a12:
  if ((plVar6 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  if (bVar10) {
    plVar9 = *(longlong **)(param_1 + 0x268);
    plVar6 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar9 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar6 = plVar8, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar9[1];
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar8 = (longlong *)0x0;
          plVar6 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x260);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar9 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    lVar5 = *(longlong *)(plVar8[3] + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if (lVar5 == 0) {
      local_res8 = 0;
    }
    else {
      local_res8 = *(undefined4 *)(lVar5 + 0x790);
    }
    local_40 = &local_res8;
    local_48 = plVar2;
    TSet<TTuple<UFlareSimulatedSector_*,float>,TDefaultMapHashableKeyFuncs<UFlareSimulatedSector_*,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UFlareSimulatedSector_*_const_&,float_const_&>_>
              (param_1 + 0x208,local_res20,&local_48,0);
  }
  *plVar2 = 0;
  if ((undefined8 *)(param_1 + 0x260) != local_38) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    plVar2 = *(longlong **)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x268) = 0;
    if (plVar2 != (longlong *)0x0) {
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
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x170) + 0x178,&DAT_146b32180);
  }
  plVar2 = *(longlong **)(param_1 + 0x180);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d66bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x448))(plVar2,&DAT_146b32180);
    return;
  }
  return;
}



// FUNCTION 142d66bc0 FUN_142d66bc0 body=27 status=ok
// SIG undefined FUN_142d66bc0(void)

void FUN_142d66bc0(undefined8 param_1)

{
  FUN_1423437a0();
  FUN_142d72530(param_1);
  return;
}



// FUNCTION 142d66be0 FUN_142d66be0 body=1728 status=ok
// SIG undefined FUN_142d66be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d66be0(longlong *param_1,longlong *param_2,longlong *param_3,float *param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  longlong local_178 [5];
  undefined1 local_150;
  byte local_14f;
  code *local_148;
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  longlong *local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  if (param_2 == param_3) {
    return;
  }
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar5 = param_1[0x24];
  local_198 = param_2;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
  }
  fVar1 = *(float *)(lVar5 + 0x790);
  if ((param_1[0x30] == 0) || (fVar1 < *(float *)(param_1 + 0x3c))) goto LAB_142d670e4;
  uVar8 = 0;
  fVar11 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1] + param_4[2] * param_4[2]);
  if (*(float *)(param_1 + 0x3e) <= 0.0 && *(float *)(param_1 + 0x3e) != 0.0) {
    *(undefined4 *)(param_1 + 0x3e) = 0;
    if (param_1[0x23] != 0) {
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      FUN_140725150(param_1[0x23],local_178,0);
      plVar6 = local_178;
      if (local_b8 != (longlong *)0x0) {
        plVar6 = local_b8;
      }
      uVar7 = (longlong)(int)local_b0 & 0x1fffffffffffffff;
      if (plVar6 + (int)local_b0 < plVar6) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) {
        local_188 = 0;
        do {
          plVar3 = (longlong *)*plVar6;
          cVar4 = (**(code **)(*plVar3 + 0x400))(plVar3,0);
          if (cVar4 != '\0') {
            fVar9 = (float)(**(code **)(*plVar3 + 0x7f0))(plVar3);
            *(float *)(param_1 + 0x3e) = fVar9 + *(float *)(param_1 + 0x3e);
          }
          plVar6 = plVar6 + 1;
          uVar8 = uVar8 + 1;
          param_2 = local_198;
        } while (uVar8 != uVar7);
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (0.0 < *(float *)(param_1 + 0x3e)) {
    fVar11 = fVar11 / *(float *)(param_1 + 0x3e);
  }
  if (fVar11 < *(float *)(param_1 + 0x31)) goto LAB_142d670e4;
  local_14f = local_14f & 0xfe;
  local_e8 = 1.0;
  local_e4 = 1.0;
  local_178[0] = 0;
  local_178[1] = 0;
  *(float *)(param_1 + 0x3c) = fVar1 + *(float *)((longlong)param_1 + 0x18c);
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0x3f80000000000000;
  local_178[2] = 0;
  local_178[3] = 0;
  local_178[4] = 0;
  local_150 = 0x40;
  local_118 = (longlong *)0x0;
  local_108 = 0;
  local_148 = AK::MemoryMgr::StartProfileThreadUsage;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x3f800000;
  if ((char)param_1[0x32] != '\0') {
    (**(code **)(*param_2 + 0x308))(param_2,&local_198);
    fVar11 = (float)local_198 * *(float *)(param_5 + 0x38) +
             local_198._4_4_ * *(float *)(param_5 + 0x3c) + local_190 * *(float *)(param_5 + 0x40);
    local_198._0_4_ = (float)local_198 - fVar11 * *(float *)(param_5 + 0x38);
    local_198._4_4_ = local_198._4_4_ - fVar11 * *(float *)(param_5 + 0x3c);
    local_190 = local_190 - fVar11 * *(float *)(param_5 + 0x40);
    fVar11 = local_198._4_4_ * local_198._4_4_ + (float)local_198 * (float)local_198 +
             local_190 * local_190;
    if (fVar11 == 1.0) {
LAB_142d66f9d:
    }
    else {
      if (1e-08 <= fVar11) {
        auVar10 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar9 = auVar10._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar11 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar11 * 0.5 * fVar9 * fVar9);
        local_198._0_4_ = (float)local_198 * fVar9;
        local_198._4_4_ = local_198._4_4_ * fVar9;
        local_190 = local_190 * fVar9;
        goto LAB_142d66f9d;
      }
      local_190 = DAT_1468b5d98;
      local_198 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    local_f8 = local_198;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,local_190);
  }
  if ((char)param_1[0x2f] != '\0') {
    lVar5 = *(longlong *)(param_1[0x23] + 0x168);
    if (lVar5 == 0) {
      local_198 = (longlong *)0x3f8000003f800000;
      local_190 = 1.0;
    }
    else {
      local_198 = *(longlong **)(lVar5 + 0x230);
      local_190 = *(float *)(lVar5 + 0x238);
    }
    fVar11 = (float)((ulonglong)local_198 >> 0x20);
    plVar6 = local_198;
    if (SUB84(local_198,0) <= fVar11) {
      plVar6 = (longlong *)(ulonglong)(uint)fVar11;
    }
    fVar11 = SUB84(plVar6,0);
    if (SUB84(plVar6,0) <= local_190) {
      fVar11 = local_190;
    }
    local_e8 = local_e8 * fVar11;
    local_e4 = local_e4 * fVar11;
    uStack_f0 = CONCAT44(uStack_f0._4_4_ * fVar11,(undefined4)uStack_f0);
  }
  local_1a8 = local_178;
  local_1a0 = 0;
  FUN_142d68ea0(param_1[0x30],param_1[0x23],param_5,0);
  if (local_108 != 0) {
    plVar6 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar6 = local_118;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_178[2] != 0) {
    FMemory::Free();
  }
  if (local_178[0] != 0) {
    FMemory::Free();
  }
LAB_142d670e4:
  if (param_1[0x33] != 0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x308))((longlong *)param_1[0x23],&local_198);
    fVar11 = *(float *)(param_5 + 0x3c);
    fVar9 = *(float *)(param_5 + 0x38);
    fVar2 = *(float *)(param_5 + 0x40);
    fVar12 = ((float)local_198 * fVar9 + local_198._4_4_ * fVar11 + local_190 * fVar2) /
             (fVar9 * fVar9 + fVar11 * fVar11 + fVar2 * fVar2);
    fVar9 = (float)local_198 - fVar12 * fVar9;
    fVar13 = local_198._4_4_ - fVar12 * fVar11;
    fVar11 = local_190 - fVar12 * fVar2;
    fVar11 = fVar13 * fVar13 + fVar9 * fVar9 + fVar11 * fVar11;
    if (fVar11 < *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34)) {
      if ((0.0 < (float)(int)param_1[0x40]) &&
         (fVar11 <= *(float *)((longlong)param_1 + 0x1a4) * *(float *)((longlong)param_1 + 0x1a4)))
      {
        FUN_142d72530(param_1);
      }
    }
    else {
      FUN_142d75d10(param_1,param_5);
    }
  }
  *(float *)((longlong)param_1 + 0x1c4) = fVar1;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = *(undefined8 *)(param_5 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)(param_5 + 0x28);
  param_1[0x39] = *(longlong *)(param_5 + 0x38);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_5 + 0x40);
  cVar4 = UActorComponent::IsComponentTickEnabled(param_1);
  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x3f8))(param_1), cVar4 != '\0')) {
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  return;
}



// FUNCTION 142d672a0 thunk_FUN_142d6c590 body=5 status=ok
// SIG undefined thunk_FUN_142d6c590(void)

void thunk_FUN_142d6c590(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  iVar6 = FUN_14233f450();
  if (iVar6 == 3) {
    lVar9 = *(longlong *)(param_1 + 0x180);
    lVar10 = (longlong)*(int *)(param_1 + 0x188) * 0xf8 + lVar9;
    for (; lVar9 != lVar10; lVar9 = lVar9 + 0xf8) {
      FUN_142d594f0(lVar9,1);
    }
    lVar9 = *(longlong *)(param_1 + 400);
    lVar10 = (longlong)*(int *)(param_1 + 0x198) * 0xf8 + lVar9;
    for (; lVar9 != lVar10; lVar9 = lVar9 + 0xf8) {
      if (*(longlong *)(lVar9 + 8) != 0) {
        if (*(longlong *)(lVar9 + 200) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(*(longlong *)(lVar9 + 200) + 0x118);
        }
        uVar11 = FUN_142c98860(*(longlong *)(lVar9 + 8) + 0x40,uVar8);
        FUN_14246fd50(lVar9 + 0x1c,uVar11);
        FUN_14246fd70(lVar9 + 0x94);
        if (((*(char *)(lVar9 + 0xf2) == '\0') && (*(longlong *)(lVar9 + 8) != 0)) &&
           (*(char *)(*(longlong *)(lVar9 + 8) + 0x7e) != '\0')) {
          fVar1 = *(float *)(lVar9 + 0xa0);
          if (fVar1 < *(float *)(lVar9 + 0xd4)) {
            if (fVar1 < *(float *)(lVar9 + 0xd0) || fVar1 == *(float *)(lVar9 + 0xd0)) {
              *(undefined4 *)(lVar9 + 0xa0) = *(undefined4 *)(lVar9 + 0x14);
            }
          }
          else {
            fVar1 = *(float *)(lVar9 + 0x20);
            *(float *)(lVar9 + 0xa0) = fVar1;
            if (*(float *)(lVar9 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar9 + 0x14)) {
              *(undefined1 *)(lVar9 + 0xee) = 1;
            }
          }
          FUN_142d75970(lVar9);
        }
      }
    }
    bVar4 = false;
    *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
    iVar6 = *(int *)(param_1 + 0x29c);
    iVar7 = *(int *)(param_1 + 0x290) + -1;
    lVar9 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar10 = lVar9 << 4;
      bVar4 = false;
      do {
        lVar2 = *(longlong *)(param_1 + 0x288);
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar3 + 0x40))(), cVar5 == '\0')) {
          bVar4 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar6 = *(int *)(param_1 + 0x29c);
    }
    *(int *)(param_1 + 0x29c) = iVar6 + -1;
    if (bVar4) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x288),0)
      ;
      return;
    }
  }
  return;
}



// FUNCTION 142d672b0 FUN_142d672b0 body=64 status=ok
// SIG undefined FUN_142d672b0(void)

void FUN_142d672b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_142343b00();
  plVar1 = *(longlong **)(param_1 + 0x118);
  uVar2 = FUN_142e6f710();
  uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  return;
}



// FUNCTION 142d672f0 FUN_142d672f0 body=278 status=ok
// SIG undefined FUN_142d672f0(void)

void FUN_142d672f0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_142343b00();
  FUN_142d75c40(param_1);
  if (param_1[0x42] != 0) goto LAB_142d67367;
  lVar5 = param_1[4];
  if (lVar5 == 0) {
LAB_142d67355:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142d67355;
  }
  param_1[0x42] = lVar5;
  if (lVar5 == 0) {
    return;
  }
LAB_142d67367:
  uVar4 = UEnvQueryTest_Random::StaticClass();
  lVar5 = AGameStateBase::OnRep_GameModeClass(param_1[0x42],uVar4);
  if (lVar5 != 0) {
    lVar3 = UEnvQueryTest_Random::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x3d0))(param_1,lVar5);
    }
  }
  if ((((*(byte *)(param_1[0x42] + 0x94) & 0x18) != 0x10) &&
      ((*(byte *)(param_1[0x42] + 0x94) & 2) == 0)) && (iVar2 = FUN_14233f450(param_1), iVar2 == 3))
  {
    *(byte *)(param_1[0x42] + 0x90) = *(byte *)(param_1[0x42] + 0x90) & 0xfe;
  }
  return;
}



// FUNCTION 142d67410 FUN_142d67410 body=34 status=ok
// SIG undefined FUN_142d67410(void)

void FUN_142d67410(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c725a0();
  FUN_142db29a0(param_1 + 0x520,uVar1);
  return;
}



// FUNCTION 142d67440 FUN_142d67440 body=43 status=ok
// SIG undefined FUN_142d67440(void)

void FUN_142d67440(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  FUN_142db29a0(param_1 + 0xae,uVar1);
  return;
}



// FUNCTION 142d67470 FUN_142d67470 body=177 status=ok
// SIG undefined FUN_142d67470(void)

void FUN_142d67470(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if (param_2 < *(byte *)(param_1 + 0x4d8)) {
    do {
      param_2 = param_2 + 1;
      switch(param_2) {
      case 1:
        FUN_142d5d000(param_1);
        break;
      case 2:
        FUN_142d5d1e0(param_1);
        break;
      case 3:
        FUN_142d5d0c0(param_1);
        break;
      case 4:
        FUN_142d71390(param_1);
        break;
      case 5:
        FUN_142d5e660(param_1);
        break;
      case 6:
        lVar1 = FUN_142d60c00(param_1);
        if (lVar1 != 0) {
          FUN_142cac380(lVar1,0x3f800000);
        }
      }
    } while (param_2 < *(byte *)(param_1 + 0x4d8));
  }
  return;
}



// FUNCTION 142d67540 FUN_142d67540 body=142 status=ok
// SIG undefined FUN_142d67540(void)

void FUN_142d67540(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 1);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d675d0 FUN_142d675d0 body=142 status=ok
// SIG undefined FUN_142d675d0(void)

void FUN_142d675d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 0xd);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d67660 FUN_142d67660 body=142 status=ok
// SIG undefined FUN_142d67660(void)

void FUN_142d67660(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 5);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d676f0 FUN_142d676f0 body=142 status=ok
// SIG undefined FUN_142d676f0(void)

void FUN_142d676f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 3);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d67780 FUN_142d67780 body=142 status=ok
// SIG undefined FUN_142d67780(void)

void FUN_142d67780(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 0xf);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d67810 FUN_142d67810 body=142 status=ok
// SIG undefined FUN_142d67810(void)

void FUN_142d67810(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 7);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d678a0 FUN_142d678a0 body=142 status=ok
// SIG undefined FUN_142d678a0(void)

void FUN_142d678a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 0xb);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d67930 FUN_142d67930 body=142 status=ok
// SIG undefined FUN_142d67930(void)

void FUN_142d67930(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar1 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar1) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 9);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d679c0 FUN_142d679c0 body=536 status=ok
// SIG undefined FUN_142d679c0(void)

void FUN_142d679c0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined8 *local_res10;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  plVar6 = (longlong *)FUN_142c725a0();
  if (param_2 == plVar6) {
    lVar8 = *(longlong *)(param_1 + 0x10);
    lVar7 = (**(code **)(*plVar6 + 0x6d0))(plVar6,*(undefined8 *)(param_6 + 0x88),1);
    if ((lVar7 == 0) ||
       ((cVar4 = FUN_1426aaac0(lVar7), cVar4 != '\0' &&
        (cVar4 = FBodyInstance::IsValidBodyInstance(lVar7), cVar4 != '\0')))) {
      lVar8 = FUN_142c71f80(param_1);
      if (lVar8 != 0) {
        local_30 = *(undefined8 *)(param_1 + 0xb8);
        local_28 = *(longlong **)(param_1 + 0xc0);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
          UNLOCK();
        }
        local_res10 = &local_30;
        TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
        RemoveAll<<lambda_75c4bb420badbf6619ba8f8d778f9e7f>_>(lVar8 + 0x1b8,&local_res10);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (local_28 != (longlong *)0x0)) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
        if (*(int *)(lVar8 + 0x1c0) == 0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop
                             (L"&UDynamicPhysicalAnimationComponent::OnRigidBodyOverlap",L"::");
          pwVar3 = (wchar_t *)0x0;
          while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar3 = pwVar2;
          }
          FName::FName(&local_38,pwVar3 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(plVar6 + 0xac,lVar8,local_38);
        }
      }
    }
    else {
      plVar10 = *(longlong **)(lVar8 + 0x1d8);
      plVar6 = plVar10 + *(int *)(lVar8 + 0x1e0);
      for (; plVar10 != plVar6; plVar10 = plVar10 + 1) {
        if (*plVar10 == *(longlong *)(param_6 + 0x88)) {
          return;
        }
      }
      if ((((param_4 != (longlong *)0x0) &&
           (iVar5 = (**(code **)(*param_4 + 0x4e8))(param_4), iVar5 - 2U < 2)) &&
          (lVar8 = (**(code **)(*param_4 + 0x6d0))(param_4,*(undefined8 *)(param_6 + 0x80),1),
          lVar8 != 0)) && ((*(char *)(lVar8 + 10) == '\0' && (*(char *)(param_1 + 0x510) == '\0'))))
      {
        FUN_142c652b0(param_1);
        *(undefined1 *)(param_1 + 0x510) = 1;
      }
    }
  }
  return;
}



// FUNCTION 142d67be0 FUN_142d67be0 body=361 status=ok
// SIG undefined FUN_142d67be0(void)

void FUN_142d67be0(longlong *param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  longlong *local_38;
  int local_30;
  longlong local_28 [2];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == '\0') {
    return;
  }
  local_28[0] = 0;
  uVar4 = param_2 & 0xffffffff;
  local_28[1] = 0;
  lVar1 = FUN_1424497b0(param_1,param_2,local_28,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      uStack_10 = 0;
      local_18 = FUN_142d5aa70;
      local_38 = (longlong *)0x0;
      plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_30 = 3;
      local_38 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_1443187f0;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_10;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
      }
      uVar3 = FUN_14164ab60();
      plVar2 = (longlong *)
               FUN_14158f860(uVar3,local_res20,&local_38,
                             L"UGbxGameInstance_CheckForSplitscreenPlayerController",0);
      param_1[0x3d] = *plVar2;
      if (local_30 != 0) {
        if (local_38 == (longlong *)0x0) goto LAB_142d67d2a;
        (**(code **)(*local_38 + 0x28))(local_38,0);
        if (local_38 != (longlong *)0x0) {
          local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
        }
        local_30 = 0;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      goto LAB_142d67d2a;
    }
    if (lVar1 != 0) {
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x108);
    }
  }
  (**(code **)(*param_1 + 0x390))(param_1,uVar4);
LAB_142d67d2a:
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d67d50 FUN_142d67d50 body=266 status=ok
// SIG undefined FUN_142d67d50(void)

void FUN_142d67d50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  
  pwVar7 = (wchar_t *)0x0;
  if (0 < *(int *)(param_1 + 0x200)) {
    plVar1 = (longlong *)(param_1 + 0x1f8);
    plVar2 = (longlong *)*plVar1;
    pwVar3 = pwVar7;
    pwVar8 = pwVar7;
    do {
      iVar6 = (int)pwVar3;
      if (*plVar2 == param_2) {
        pwVar3 = _guard_xfg_dispatch_icall_nop
                           (L"&UImpactFXManagerComponent::OnTrackedComponentDeactivated",L"::");
        while (pwVar8 = pwVar3, pwVar8 != (wchar_t *)0x0) {
          pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
          pwVar7 = pwVar8;
        }
        FName::FName(&local_res8,pwVar7 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x108,param_1,local_res8);
        iVar4 = *(int *)(param_1 + 0x200);
        iVar5 = (iVar4 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *plVar1),
                     (void *)((longlong)(iVar4 - iVar5) * 0x10 + *plVar1),(longlong)iVar5 << 4);
          iVar4 = *(int *)(param_1 + 0x200);
        }
        *(int *)(param_1 + 0x200) = iVar4 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
        return;
      }
      pwVar3 = (wchar_t *)(ulonglong)(iVar6 + 1);
      pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
      plVar2 = plVar2 + 2;
    } while ((longlong)pwVar8 < (longlong)*(int *)(param_1 + 0x200));
  }
  return;
}



// FUNCTION 142d67e60 FUN_142d67e60 body=266 status=ok
// SIG undefined FUN_142d67e60(void)

void FUN_142d67e60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  
  pwVar7 = (wchar_t *)0x0;
  if (0 < *(int *)(param_1 + 0x200)) {
    plVar1 = (longlong *)(param_1 + 0x1f8);
    plVar2 = (longlong *)*plVar1;
    pwVar3 = pwVar7;
    pwVar8 = pwVar7;
    do {
      iVar6 = (int)pwVar3;
      if (*plVar2 == param_2) {
        pwVar3 = _guard_xfg_dispatch_icall_nop
                           (L"&UImpactFXManagerComponent::OnTrackedParticleSystemFinished",L"::");
        while (pwVar8 = pwVar3, pwVar8 != (wchar_t *)0x0) {
          pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
          pwVar7 = pwVar8;
        }
        FName::FName(&local_res8,pwVar7 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x8a8,param_1,local_res8);
        iVar4 = *(int *)(param_1 + 0x200);
        iVar5 = (iVar4 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *plVar1),
                     (void *)((longlong)(iVar4 - iVar5) * 0x10 + *plVar1),(longlong)iVar5 << 4);
          iVar4 = *(int *)(param_1 + 0x200);
        }
        *(int *)(param_1 + 0x200) = iVar4 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
        return;
      }
      pwVar3 = (wchar_t *)(ulonglong)(iVar6 + 1);
      pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
      plVar2 = plVar2 + 2;
    } while ((longlong)pwVar8 < (longlong)*(int *)(param_1 + 0x200));
  }
  return;
}



// FUNCTION 142d67f70 FUN_142d67f70 body=330 status=ok
// SIG undefined FUN_142d67f70(void)

void FUN_142d67f70(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res8 [2];
  undefined1 local_38 [48];
  
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    lVar9 = *(longlong *)(param_1 + 200);
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x1d8,local_res8);
    plVar6 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar6 = (longlong *)(*(longlong *)(lVar9 + 0x1d8) + (longlong)local_res8[0] * 0x28);
    }
    plVar8 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    if ((plVar8 != (longlong *)0x0) && (cVar3 = FUN_1404d5210(plVar8), cVar3 != '\0')) {
      FUN_142d5bd80(lVar9,local_38,param_1);
      uVar1 = *(undefined4 *)(param_1 + 0xa0);
      bVar2 = false;
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      iVar5 = *(int *)((longlong)plVar8 + 0x14);
      iVar4 = (int)plVar8[1] + -1;
      lVar9 = (longlong)iVar4;
      if (-1 < iVar4) {
        lVar7 = lVar9 << 4;
        bVar2 = false;
        do {
          if (((*(int *)(lVar7 + 8 + *plVar8) == 0) ||
              (plVar6 = *(longlong **)(lVar7 + *plVar8), plVar6 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,local_38,uVar1), cVar3 == '\0')) {
            bVar2 = true;
          }
          lVar7 = lVar7 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        iVar5 = *(int *)((longlong)plVar8 + 0x14);
      }
      *(int *)((longlong)plVar8 + 0x14) = iVar5 + -1;
      if (bVar2) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
      }
    }
  }
  return;
}



// FUNCTION 142d680c0 FUN_142d680c0 body=603 status=ok
// SIG undefined FUN_142d680c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d680c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x6c);
  if (((param_1 != 0) && (plVar5 != (longlong *)0x0)) && (param_2 != 0)) {
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x670))(plVar5);
    if ((plVar6 != (longlong *)0x0) && ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) != 0)) {
      cVar4 = (**(code **)(*plVar6 + 0x768))(plVar6);
      if (cVar4 != '\0') {
        lVar1 = plVar5[0x2d];
        if (lVar1 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar1 + 0x220);
          local_40 = *(float *)(lVar1 + 0x228);
        }
        fVar3 = local_40;
        uVar2 = local_48;
        lVar1 = *(longlong *)(param_2 + 0x168);
        if (lVar1 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar1 + 0x220);
          local_40 = *(float *)(lVar1 + 0x228);
        }
        fStack_54 = (float)((ulonglong)uVar2 >> 0x20);
        fVar10 = (float)((ulonglong)local_48 >> 0x20) - fStack_54;
        local_58 = (float)uVar2;
        fVar11 = (float)local_48 - local_58;
        local_40 = local_40 - fVar3;
        fVar7 = fVar10 * fVar10 + fVar11 * fVar11 + local_40 * local_40;
        if (1e-08 < fVar7) {
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar11 = fVar11 * fVar8;
          fVar10 = fVar10 * fVar8;
          local_40 = local_40 * fVar8;
        }
        local_40 = local_40 * 100.0 + fVar3;
        local_48 = CONCAT44(fVar10 * 100.0 + fStack_54,fVar11 * 100.0 + local_58);
        FUN_1423990b0(param_1,&local_48,0,0,0);
      }
    }
  }
  return;
}



// FUNCTION 142d68320 FUN_142d68320 body=566 status=ok
// SIG undefined FUN_142d68320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d68320(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  if ((param_3 != 0) && (param_4 != (longlong *)0x0)) {
    plVar6 = (longlong *)(**(code **)(*param_4 + 0x670))(param_4);
    if ((plVar6 != (longlong *)0x0) && ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) != 0)) {
      cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6);
      if (cVar5 != '\0') {
        lVar2 = param_4[0x2d];
        if (lVar2 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar2 + 0x220);
          local_40 = *(float *)(lVar2 + 0x228);
        }
        fVar4 = local_40;
        uVar3 = local_48;
        lVar2 = *(longlong *)(param_3 + 0x168);
        if (lVar2 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar2 + 0x220);
          local_40 = *(float *)(lVar2 + 0x228);
        }
        fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
        fVar10 = (float)((ulonglong)local_48 >> 0x20) - fStack_54;
        local_58 = (float)uVar3;
        fVar11 = (float)local_48 - local_58;
        local_40 = local_40 - fVar4;
        fVar7 = fVar10 * fVar10 + fVar11 * fVar11 + local_40 * local_40;
        if (1e-08 < fVar7) {
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar11 = fVar11 * fVar8;
          fVar10 = fVar10 * fVar8;
          local_40 = local_40 * fVar8;
        }
        *(ulonglong *)(param_1 + 0x30) =
             CONCAT44(fVar10 * 100.0 + fStack_54,fVar11 * 100.0 + local_58);
        *(float *)(param_1 + 0x38) = local_40 * 100.0 + fVar4;
      }
    }
  }
  return;
}



// FUNCTION 142d68560 FUN_142d68560 body=1100 status=ok
// SIG undefined FUN_142d68560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d68560(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  uint uVar20;
  wchar_t *pwVar21;
  undefined8 local_res10;
  code *local_38;
  undefined8 uStack_30;
  
  plVar12 = (longlong *)FUN_142c6f130();
  pwVar21 = (wchar_t *)0x0;
  if (plVar12 == (longlong *)0x0) goto LAB_142d68623;
  lVar13 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
      lVar13 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_142d68623;
  puVar14 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,&local_res10);
  (**(code **)(*plVar12 + 0xa00))(plVar12,1,*puVar14);
  pwVar18 = (wchar_t *)plVar12[0x98];
  if (pwVar18 == (wchar_t *)0x0) {
LAB_142d68619:
    pwVar18 = pwVar21;
  }
  else {
    lVar13 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(pwVar18 + 8) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar18 + 8) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
        != lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_142d68619;
  }
  *(wchar_t **)(param_1 + 0x590) = pwVar18;
LAB_142d68623:
  plVar12 = (longlong *)FUN_142d60c00(param_1);
  if (plVar12 != (longlong *)0x0) {
    iVar3 = *(int *)((longlong)plVar12 + 0xc);
    pwVar18 = pwVar21;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar20 = iVar3 >> 0x1f & 0xffff;
      uVar11 = iVar3 + uVar20;
      pwVar18 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar11 >> 0x10) * 8) +
                (longlong)(int)((uVar11 & 0xffff) - uVar20) * 0x18);
    }
    if ((*(uint *)(pwVar18 + 4) >> 0x1d & 1) == 0) {
      if (((int)plVar12[0x172] != -1) &&
         (lVar13 = *(longlong *)(plVar12[0x17e] + (longlong)(int)plVar12[0x172] * 8), lVar13 != 0))
      {
        *(undefined1 *)(lVar13 + 0x191) = 1;
      }
      lVar13 = *(longlong *)(param_1 + 0x10);
      if ((*(longlong *)(lVar13 + 0x128) != 0) && (lVar15 = FUN_142d5ffa0(param_1), lVar15 != 0)) {
        uVar4 = *(undefined8 *)(lVar13 + 0x128);
        puVar14 = (undefined8 *)FName::FName(&local_res10,L"UGbxAction_Ragdoll::Begin",1);
        if (*(longlong *)(lVar15 + 0x560) == 0) {
          *(undefined8 *)(lVar15 + 0x558) = *puVar14;
          *(undefined8 *)(lVar15 + 0x560) = uVar4;
        }
      }
      lVar15 = *(longlong *)(lVar13 + 0x110);
      lVar13 = lVar15 + (longlong)*(int *)(lVar13 + 0x118) * 0x18;
      if (lVar15 != lVar13) {
        plVar1 = (longlong *)(param_1 + 0x508);
        do {
          iVar3 = *(int *)(param_1 + 0x510);
          *(int *)(param_1 + 0x510) = iVar3 + 1;
          if (*(int *)(param_1 + 0x514) < iVar3 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
          }
          uVar4 = uRam00000001468b5b78;
          lVar5 = *plVar1;
          lVar19 = (longlong)iVar3 * 0x50;
          *(undefined8 *)(lVar19 + lVar5) = _DAT_1468b5b70;
          ((undefined8 *)(lVar19 + lVar5))[1] = uVar4;
          uVar10 = uRam00000001468b5b8c;
          uVar9 = uRam00000001468b5b88;
          uVar8 = uRam00000001468b5b84;
          puVar2 = (undefined4 *)(lVar19 + 0x10 + lVar5);
          *puVar2 = _DAT_1468b5b80;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          uVar10 = uRam00000001468b5b9c;
          uVar9 = uRam00000001468b5b98;
          uVar8 = uRam00000001468b5b94;
          puVar2 = (undefined4 *)(lVar19 + 0x20 + lVar5);
          *puVar2 = _DAT_1468b5b90;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          *(undefined8 *)(lVar19 + 0x30 + lVar5) = 0xffffffffffffffff;
          *(undefined4 *)(lVar19 + 0x38 + lVar5) = 0xffffffff;
          *(undefined8 *)(lVar19 + 0x40 + lVar5) = 0;
          FUN_142d58070(lVar19 + *plVar1,plVar12,lVar15);
          lVar15 = lVar15 + 0x18;
        } while (lVar15 != lVar13);
      }
      plVar1 = plVar12 + 0x1e0;
      plVar16 = (longlong *)FMemory::Realloc(0,0x30);
      pwVar18 = pwVar21;
      if (plVar16 != (longlong *)0x0) {
        plVar16[1] = param_1;
        *plVar16 = (longlong)&DAT_143f3ed00;
        plVar16[2] = (longlong)FUN_142d752a0;
        lVar13 = FDelegateHandle::GenerateNewID();
        plVar16[4] = lVar13;
        *plVar16 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        plVar17 = (longlong *)(**(code **)(*plVar16 + 0x20))(plVar16,&local_res10);
        iVar3 = (int)plVar12[0x1e1];
        pwVar18 = (wchar_t *)*plVar17;
        *(int *)(plVar12 + 0x1e1) = iVar3 + 1;
        if (*(int *)((longlong)plVar12 + 0xf0c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
        }
        puVar14 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
        *puVar14 = plVar16;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      *(wchar_t **)(param_1 + 0x468) = pwVar18;
      plVar1 = plVar12 + 0x200;
      plVar16 = (longlong *)FMemory::Realloc(0,0x30);
      pwVar18 = pwVar21;
      if (plVar16 != (longlong *)0x0) {
        plVar16[1] = param_1;
        *plVar16 = (longlong)&DAT_143f3ed00;
        plVar16[2] = (longlong)FUN_142d736b0;
        lVar13 = FDelegateHandle::GenerateNewID();
        plVar16[4] = lVar13;
        *plVar16 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        plVar17 = (longlong *)(**(code **)(*plVar16 + 0x20))(plVar16,&local_res10);
        iVar3 = (int)plVar12[0x201];
        pwVar18 = (wchar_t *)*plVar17;
        *(int *)(plVar12 + 0x201) = iVar3 + 1;
        if (*(int *)((longlong)plVar12 + 0x100c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
        }
        puVar14 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
        *puVar14 = plVar16;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      *(wchar_t **)(param_1 + 0x470) = pwVar18;
      lVar13 = FUN_142c71f10(param_1);
      if (lVar13 != 0) {
        (**(code **)(*plVar12 + 0x630))(plVar12,1);
        uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
        local_38 = FUN_142db2cc0;
        pwVar18 = _guard_xfg_dispatch_icall_nop
                            (L"&UDynamicPhysicalAnimationComponent::OnRigidBodyOverlap",L"::");
        while (pwVar7 = pwVar18, pwVar7 != (wchar_t *)0x0) {
          pwVar18 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
          pwVar21 = pwVar7;
        }
        FName::FName(&local_res10,pwVar21 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                  (plVar12 + 0xac,lVar13,&local_38,local_res10);
        *(undefined4 *)(lVar13 + 0x1b0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142d689b0 FUN_142d689b0 body=1264 status=ok
// SIG undefined FUN_142d689b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d689b0(ulonglong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  longlong **param_9)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined4 local_310;
  undefined8 *local_308;
  undefined *local_300;
  longlong **local_2f8;
  undefined4 local_2f0;
  longlong *local_2e8;
  undefined8 uStack_2e0;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined1 local_2c0 [8];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined2 local_2a4;
  undefined1 local_2a2;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined4 local_298;
  undefined2 local_294;
  longlong local_270;
  undefined8 local_268;
  longlong local_250;
  undefined8 local_248;
  undefined1 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  longlong local_228;
  undefined4 local_220;
  longlong *local_218;
  int local_210;
  ulonglong local_208;
  undefined **local_1f8;
  char local_1f0;
  longlong *local_1e8;
  undefined1 local_1d8 [176];
  undefined1 local_128;
  undefined **local_118;
  char local_110;
  longlong *local_108;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  iVar1 = DAT_1466ad414;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2c8 = param_8;
  if (param_2 == (longlong *)0x0) {
LAB_142d68dfb:
    if (((*(int *)(param_9 + 1) != 0) && (*param_9 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**param_9 + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_9 + 1) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *param_9;
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,0);
    }
    goto LAB_142d68e2b;
  }
  if ((DAT_1466ad410 == 1) && (-1 < DAT_1466ad414)) {
    uStack_2e0._0_4_ = (int)param_1;
    uStack_2e0._4_4_ = (undefined4)(param_1 >> 0x20);
    uStack_2d0 = (int)uStack_2e0;
    uStack_2cc = uStack_2e0._4_4_;
    local_2e8 = param_2;
    uStack_2e0 = param_1;
    local_2d8 = param_2;
    uVar3 = FUN_142d5eba0();
    piVar4 = (int *)FUN_142d61070(uVar3,&local_2d8);
    if ((iVar1 < *piVar4) || (iVar8 = *piVar4 + 1, *piVar4 = iVar8, iVar1 < iVar8))
    goto LAB_142d68dfb;
  }
  lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar5 == 0) {
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_9,0);
    goto LAB_142d68e2b;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b33f10) && (_Init_thread_header(&DAT_146b33f10), DAT_146b33f10 == -1))
  {
    FName::FName(&DAT_146b33f08,L"ImpactData",1);
    _Init_thread_footer(&DAT_146b33f10);
  }
  local_2a8 = 0x10000;
  local_2b0 = 0;
  local_2b8 = 0;
  local_298 = 0;
  local_270 = 0;
  local_268 = 0;
  local_250 = 0;
  local_248 = 0;
  local_2a0 = 0;
  local_2d8 = (longlong *)0x0;
  local_2a4 = 0;
  local_294 = 0x101;
  local_29c = 0;
  local_2a2 = 0;
  FCollisionQueryParams::AddIgnoredActor(&local_2b8,param_2);
  local_2b8 = DAT_146b33f08;
  local_118 = &PTR__scalar_deleting_destructor__143f73ca8;
  local_2a4 = CONCAT11(local_2a4._1_1_,1);
  local_2a8._0_2_ = CONCAT11(1,(undefined1)local_2a8);
  local_110 = '\0';
  FGCObject::Init(&local_118);
  local_118 = &PTR_FUN_14588b698;
  local_108 = param_2;
  FUN_1412f6f40(local_f8,local_2c8);
  local_234 = *param_4;
  local_238 = param_6;
  local_22c = *(undefined4 *)(param_4 + 1);
  local_220 = (undefined4)param_3[1];
  local_228 = *param_3;
  local_218 = (longlong *)0x0;
  local_210 = 0;
  if (((param_9 != &local_218) && (*(int *)(param_9 + 1) != 0)) &&
     (plVar6 = *param_9, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_218);
  }
  local_1f8 = &PTR__scalar_deleting_destructor__143f73ca8;
  local_1f0 = '\0';
  local_208 = param_1;
  FGCObject::Init(&local_1f8);
  local_1f8 = &PTR_FUN_14588b698;
  local_1e8 = local_108;
  FUN_1412f6f40(local_1d8,local_f8);
  local_128 = param_5;
  local_2e8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x140,0);
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x14);
  local_2e8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_14588bc78;
    *(undefined1 *)(plVar6 + 2) = local_238;
    *(undefined8 *)((longlong)plVar6 + 0x14) = local_234;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = local_22c;
    plVar6[4] = local_228;
    *(undefined4 *)(plVar6 + 5) = local_220;
    plVar6[6] = 0;
    *(undefined4 *)(plVar6 + 7) = 0;
    if (((&local_218 != (longlong **)(plVar6 + 6)) && (local_210 != 0)) &&
       (local_218 != (longlong *)0x0)) {
      (**(code **)(*local_218 + 0x30))();
    }
    plVar6[8] = local_208;
    plVar6[10] = (longlong)&PTR__scalar_deleting_destructor__143f73ca8;
    *(undefined1 *)(plVar6 + 0xb) = 0;
    FGCObject::Init(plVar6 + 10);
    plVar6[10] = (longlong)&PTR_FUN_14588b698;
    plVar6[0xc] = (longlong)local_1e8;
    FUN_142d512c0(plVar6 + 0xe,local_1d8);
    *(undefined1 *)(plVar6 + 0x24) = local_128;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[0x27] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_14588bcc0;
  }
  FUN_1409c5510(local_1d8);
  local_1f8 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (local_1f0 != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,&local_1f8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_218);
  local_2f0 = 0;
  local_2f8 = &local_2e8;
  local_300 = &DAT_146aefe68;
  local_308 = &local_2b8;
  local_310 = param_7;
  local_318 = param_4;
  FUN_142330010(lVar5,local_2c0,1,param_3);
  if ((int)uStack_2e0 == 0) {
LAB_142d68d9c:
    if (local_2e8 != (longlong *)0x0) {
      FMemory::Free(local_2e8);
    }
  }
  else if (local_2e8 != (longlong *)0x0) {
    (**(code **)(*local_2e8 + 0x28))(local_2e8,0);
    if (local_2e8 != (longlong *)0x0) {
      local_2e8 = (longlong *)FMemory::Realloc(local_2e8,0,0);
    }
    uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
    goto LAB_142d68d9c;
  }
  FUN_1409c5510(local_f8);
  local_118 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (local_110 != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,&local_118);
  }
  if (local_250 != 0) {
    FMemory::Free();
  }
  if (local_270 != 0) {
    FMemory::Free();
  }
LAB_142d68e2b:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_9);
  return;
}



// FUNCTION 142d68ea0 FUN_142d68ea0 body=204 status=ok
// SIG undefined FUN_142d68ea0(void)

void FUN_142d68ea0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,char param_6)

{
  char cVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_2 != 0) &&
     ((param_6 != '\0' || (cVar1 = FUN_142d62bf0(param_2,param_1), cVar1 == '\0')))) {
    if (((*(char *)(param_1 + 0x301) != '\0') ||
        (((*(char *)(param_1 + 0x300) == '\0' && (*(longlong *)(param_1 + 0x30) != 0)) &&
         (cVar1 = FUN_142d639b0(), cVar1 != '\0')))) && (DAT_1466ad3f4 == 1)) {
      local_18 = *(undefined8 *)(param_3 + 0x20);
      local_10 = *(undefined4 *)(param_3 + 0x28);
      local_c = DAT_1466ad400;
      cVar1 = FUN_142d6c0a0(&local_18);
      if (cVar1 != '\0') {
        return;
      }
    }
    FUN_142d5e050(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 142d68f70 FUN_142d68f70 body=122 status=ok
// SIG undefined FUN_142d68f70(void)

void FUN_142d68f70(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_142235230(param_2);
    if (param_4 == '\0') {
      bVar2 = iVar1 == 1;
    }
    else {
      bVar2 = iVar1 == 3;
    }
    if (!bVar2) {
      FUN_142d68ea0(param_1,param_2,param_3,param_4,&DAT_1466ad4f0,0);
    }
  }
  return;
}



// FUNCTION 142d68ff0 FUN_142d68ff0 body=689 status=ok
// SIG undefined FUN_142d68ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d68ff0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  code *local_138;
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  longlong local_e8 [5];
  undefined1 local_c0;
  byte local_bf;
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  if (param_1 == 0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (param_2 == 0) {
    return;
  }
  iVar2 = FUN_142235230(param_2);
  if (iVar2 == 1) {
    return;
  }
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_128);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_4;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_bf = local_bf & 0xfe;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_48 = 0;
  local_138 = FUN_142d596c0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0;
  local_44 = 0x3f800000;
  local_c0 = 0;
  local_158 = (longlong *)0x0;
  local_148 = 0;
  if (local_f8 == 0) {
LAB_142d69125:
    local_188[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar4 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar4 = local_108;
    }
    if (plVar4 == (longlong *)0x0) goto LAB_142d69125;
    plVar4 = (longlong *)(**(code **)*plVar4)(plVar4,local_178);
    (**(code **)(*plVar4 + 8))(plVar4);
    local_188[0] = local_138;
  }
  FGenericPlatformMemory::MemswapGreaterThan8(local_188,local_b8,0x50);
  if (local_148 != 0) {
    plVar4 = local_178;
    if (local_158 != (longlong *)0x0) {
      plVar4 = local_158;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  cVar1 = FUN_142d62bf0(param_2,param_1);
  if (cVar1 == '\0') {
    if (((*(char *)(param_1 + 0x301) != '\0') ||
        (((*(char *)(param_1 + 0x300) == '\0' && (*(longlong *)(param_1 + 0x30) != 0)) &&
         (cVar1 = FUN_142d639b0(), cVar1 != '\0')))) && (DAT_1466ad3f4 == 1)) {
      local_198 = *(undefined8 *)(param_3 + 0x20);
      local_190 = *(undefined4 *)(param_3 + 0x28);
      local_18c = DAT_1466ad400;
      cVar1 = FUN_142d6c0a0(&local_198);
      if (cVar1 != '\0') goto LAB_142d691fa;
    }
    local_1a8 = local_e8;
    FUN_142d5e050(param_1,param_2,param_3,0);
  }
LAB_142d691fa:
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_e8[2] != 0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    plVar4 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar4 = local_108;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d692b0 FUN_142d692b0 body=983 status=ok
// SIG undefined FUN_142d692b0(void)

undefined1 *
FUN_142d692b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5
             ,char param_6,undefined8 param_7,longlong param_8,longlong param_9)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte local_res10;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_98;
  undefined1 local_90 [88];
  
  local_res10 = 0;
  if (((param_2 != 0) && ((*(byte *)(param_1 + 0xb8) & 1) == 0)) &&
     ((*(byte *)(param_8 + 0x28) & 1) == 0)) {
    lVar3 = FWeakObjectPtr::Get(param_5 + 0x6c);
    lVar4 = 0x14;
    if (lVar3 != 0) {
      lVar4 = 0x20;
    }
    uVar5 = *(undefined8 *)(lVar4 + param_5);
    local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(lVar4 + 8 + param_5));
    local_98 = lVar3;
    FUN_142d60510(&local_128,param_3,param_5,param_6,param_8);
    if (param_6 == '\x01') {
      lVar3 = FUN_1405c6c50(param_3);
      if (lVar3 != 0) {
        local_res10 = 4;
        FUN_1405c1370(&local_e8,lVar3 + 0x1e8);
        local_b8 = (undefined4)local_118;
        local_ac = local_120;
        local_e0 = *(undefined8 *)(param_8 + 0x20);
        local_b4 = local_128;
        local_e8 = param_2;
        local_c0 = uVar5;
        uVar5 = FUN_1405c1370(local_90,&local_e8);
        FUN_1405cc150(lVar3,uVar5);
        if (local_d0 != 0) {
          FMemory::Free();
        }
      }
    }
    else if (param_9 == 0) {
      uVar1 = (undefined4)local_118;
      local_100 = (undefined4)local_118;
      local_108 = uVar5;
      cVar2 = FUN_14059f060(param_4,param_2,&local_108,0x3f800000,0x42480000);
      if (cVar2 != '\0') {
        local_108 = local_128;
        local_100 = local_120;
        local_120 = uVar1;
        local_128 = uVar5;
        lVar3 = FUN_1405ab680(param_4,&local_128,0,&local_108,1);
        if (lVar3 != 0) {
          local_res10 = 4;
          FUN_142d56040(lVar3,param_8,param_2);
          FUN_142d56040(lVar3,param_1 + 0x90,param_2);
          if ((*(uint *)(param_2 + 0x60) & 0x1000) != 0) {
            FUN_1405a9570(lVar3,param_3);
          }
          FUN_1405a3150(lVar3,&local_108,param_2,0);
          FUN_140591060(&local_108);
          lVar6 = FWeakObjectPtr::Get(param_5 + 0x74);
          lVar4 = 0;
          if (lVar6 == 0) {
            lVar6 = lVar4;
            if (local_98 != 0) {
              lVar6 = *(longlong *)(local_98 + 0x168);
            }
          }
          else {
            lVar6 = FWeakObjectPtr::Get(param_5 + 0x74);
          }
          if (((*(byte *)(param_1 + 0x28) & 1) != 0) && (lVar6 != 0)) {
            FUN_142397000(lVar3,0,0,1);
            if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
              local_118 = 0;
              lVar7 = lVar4;
            }
            else {
              lVar7 = *(longlong *)(param_5 + 0x80);
            }
            FUN_142382f60(lVar3,lVar6,&DAT_146532180,lVar7);
            FUN_142d680c0(lVar3,param_3,param_5);
          }
          if (*(int *)(param_8 + 0x70) != 0) {
            if (*(longlong *)(param_8 + 0x60) == 0) {
              lVar4 = param_8 + 0x40;
            }
            if (lVar4 != 0 || *(longlong *)(param_8 + 0x60) != 0) {
              FUN_142a51ce0(param_8 + 0x30,lVar3,param_7);
            }
          }
          FUN_1405a9540(lVar3,0);
        }
      }
    }
    else {
      local_res10 = 4;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_e8 = 0;
      if ((*(uint *)(param_2 + 0x60) & 0x1000) != 0) {
        local_e8 = param_3;
      }
      local_e0 = param_2;
      FUN_142d55f20(&local_e8,param_8,param_2);
      FUN_142d55f20(&local_e8,param_1 + 0x90,param_2);
      local_120 = (undefined4)local_118;
      local_128 = uVar5;
      FUN_142d68320(&local_e8,&local_128,param_3,lVar3);
      FUN_142d92350(param_9,&local_e8);
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
    }
    return (undefined1 *)(ulonglong)local_res10;
  }
  return &stack0x00000000;
}



// FUNCTION 142d69690 FUN_142d69690 body=2665 status=ok
// SIG undefined FUN_142d69690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_142d69690(char *param_1,longlong param_2,undefined8 param_3,longlong param_4,char param_5,
             undefined8 param_6,longlong param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_fffffffffffffe08;
  uint uVar23;
  undefined8 in_stack_fffffffffffffe10;
  uint uVar25;
  ulonglong uVar24;
  undefined8 in_stack_fffffffffffffe18;
  uint uVar26;
  ulonglong in_stack_fffffffffffffe20;
  undefined4 uVar27;
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  float local_140;
  undefined1 local_138 [8];
  float local_130;
  float local_128;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  
  iVar4 = DAT_1466ad418;
  uVar26 = (uint)((ulonglong)in_stack_fffffffffffffe18 >> 0x20);
  uVar23 = (uint)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
  uVar25 = (uint)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
  bVar11 = 0;
  if ((*(byte *)(param_7 + 0x28) & 8) != 0) {
    return &stack0x00000000;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return &stack0x00000000;
  }
  if (*param_1 == '\0') {
    lVar9 = *(longlong *)(param_7 + 0x98);
    if (lVar9 == 0) {
      lVar9 = **(longlong **)(param_1 + 0x38);
    }
    if ((DAT_1466ad410 == 1) && (-1 < DAT_1466ad418)) {
      local_158 = param_2;
      uStack_150 = lVar9;
      uVar5 = FUN_142d5eba0();
      piVar6 = (int *)FUN_142d61070(uVar5,&local_158);
      iVar2 = *piVar6;
      if (iVar4 < iVar2) {
LAB_142d6973a:
        return (undefined1 *)CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),8);
      }
      iVar2 = iVar2 + 1;
      *piVar6 = iVar2;
      if (iVar4 < iVar2) goto LAB_142d6973a;
    }
  }
  lVar9 = *(longlong *)(param_7 + 0x98);
  if (lVar9 == 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = rand();
      iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar4);
      iVar2 = iVar4 + -1;
      if (iVar3 <= iVar4 + -1) {
        iVar2 = iVar3;
      }
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 8);
    if (lVar9 == 0) goto LAB_142d6a0d8;
  }
  fVar21 = *(float *)(param_1 + 0x58);
  fVar12 = *(float *)(param_1 + 0x54);
  iVar4 = rand();
  fVar20 = *(float *)(param_7 + 0xa0);
  fVar12 = (float)iVar4 * 3.051851e-05 * (fVar21 - fVar12) + fVar12;
  fVar21 = fVar20;
  if (fVar20 <= 0.0001) {
    fVar21 = *(float *)(param_1 + 0x48);
  }
  fVar21 = fVar21 * fVar12 * *(float *)(param_7 + 0x90);
  if (fVar20 <= 0.0001) {
    fVar20 = *(float *)(param_1 + 0x4c);
  }
  fVar12 = fVar20 * fVar12 * *(float *)(param_7 + 0x94);
  local_198 = *(float *)(param_1 + 0x50) * *(float *)(param_7 + 0x8c);
  if ((fVar21 <= 0.0) || (fVar12 <= 0.0)) goto LAB_142d6a0d8;
  fVar20 = *(float *)(param_4 + 0x28);
  local_178 = *(undefined8 *)(param_4 + 0x20);
  local_168 = -*(float *)(param_4 + 0x2c);
  local_164 = -*(float *)(param_4 + 0x30);
  local_160 = -*(float *)(param_4 + 0x34);
  if (param_5 == '\x01') {
    if (*(longlong *)(param_2 + 0x168) == 0) {
      local_1a0 = (float)DAT_1464aa7b0;
      puVar7 = &local_1a8;
      local_1a8 = DAT_1464aa7a8;
    }
    else {
      puVar7 = (undefined8 *)FUN_142369f10(*(longlong *)(param_2 + 0x168),local_138);
    }
    local_1a8 = *puVar7;
    fVar19 = (float)((ulonglong)local_1a8 >> 0x20);
    fVar14 = *(float *)(puVar7 + 1);
    fVar22 = (float)local_1a8;
  }
  else {
    local_1a8 = *(undefined8 *)(param_7 + 0x80);
    fVar14 = *(float *)(param_7 + 0x88);
    fVar19 = (float)((ulonglong)local_1a8 >> 0x20);
    fVar22 = (float)local_1a8;
  }
  lVar10 = param_4 + 0x74;
  local_1a0 = fVar14;
  cVar1 = FWeakObjectPtr::IsValid(lVar10);
  if (cVar1 != '\0') {
    lVar8 = FWeakObjectPtr::Get(lVar10);
    if (*(float *)(lVar8 + 0x20c) <= 0.0 && *(float *)(lVar8 + 0x20c) != 0.0) {
      fVar13 = -1.0;
    }
    else {
      fVar13 = 1.0;
    }
    if (*(float *)(lVar8 + 0x208) <= 0.0 && *(float *)(lVar8 + 0x208) != 0.0) {
      fVar17 = -1.0;
    }
    else {
      fVar17 = 1.0;
    }
    if (*(float *)(lVar8 + 0x204) <= 0.0 && *(float *)(lVar8 + 0x204) != 0.0) {
      fVar18 = -1.0;
    }
    else {
      fVar18 = 1.0;
    }
    fVar13 = fVar18 * fVar17 * fVar13;
    local_168 = local_168 * fVar13;
    local_164 = local_164 * fVar13;
    local_160 = local_160 * fVar13;
  }
  if (((fVar22 == 0.0) && (fVar19 == 0.0)) && (fVar14 == 0.0)) {
LAB_142d69bca:
    puVar7 = (undefined8 *)FVector4::ToOrientationQuat(&local_168,local_138);
  }
  else {
    local_128 = fVar19 * local_160 - fVar14 * local_164;
    fVar19 = fVar22 * local_164 - fVar19 * local_168;
    fVar22 = fVar14 * local_168 - fVar22 * local_160;
    fVar14 = fVar22 * fVar22 + local_128 * local_128 + fVar19 * fVar19;
    if (fVar14 <= 1e-08) goto LAB_142d69bca;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = CONCAT44(0,fVar14);
    local_10c = 0;
    local_fc = 0;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = CONCAT44(0,fVar14);
    auVar16 = rsqrtss(auVar15,auVar16);
    local_ec = 0;
    local_dc = 0x3f800000;
    local_104 = auVar16._0_4_;
    local_104 = local_104 + local_104 * (0.5 - fVar14 * 0.5 * local_104 * local_104);
    local_104 = local_104 + local_104 * (0.5 - fVar14 * 0.5 * local_104 * local_104);
    local_108 = local_104 * local_128;
    local_100 = local_104 * fVar19;
    local_104 = local_104 * fVar22;
    local_f8 = local_100 * local_164 - local_160 * local_104;
    local_f4 = local_160 * local_108 - local_168 * local_100;
    local_f0 = local_168 * local_104 - local_164 * local_108;
    local_e8 = DAT_1468b5d90;
    local_e0 = DAT_1468b5d98;
    local_e4 = DAT_1468b5d94;
    local_118 = local_168;
    local_114 = local_164;
    local_110 = local_160;
    puVar7 = (undefined8 *)FMatrix::ToQuat(&local_118,local_138);
  }
  local_158 = *puVar7;
  uStack_150 = puVar7[1];
  if (param_1[0x5c] != '\0') {
    fVar14 = *(float *)(param_1 + 0x60);
    iVar4 = rand();
    uVar5 = *(undefined8 *)(param_4 + 0x2c);
    local_1a0 = *(float *)(param_4 + 0x34);
    fVar14 = ((float)iVar4 * fVar14 * 6.103702e-05 - fVar14) * 0.008726646;
    if (fVar14 < 0.0) {
      fVar22 = fVar14 * 0.15915494 - 0.5;
    }
    else {
      fVar22 = fVar14 * 0.15915494 + 0.5;
    }
    fVar14 = fVar14 - (float)(int)fVar22 * 6.2831855;
    fVar22 = 1.0;
    if (fVar14 <= 1.5707964) {
      if (fVar14 < -1.5707964) {
        fVar14 = -3.1415927 - fVar14;
        fVar22 = -1.0;
      }
    }
    else {
      fVar14 = 3.1415927 - fVar14;
      fVar22 = -1.0;
    }
    local_1a8._0_4_ = (float)uVar5;
    fVar19 = fVar14 * fVar14;
    fVar14 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19 +
               0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fVar14;
    local_1a8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    local_1a8._0_4_ = (float)local_1a8 * fVar14;
    local_1a8._4_4_ = local_1a8._4_4_ * fVar14;
    fVar14 = local_1a0 * fVar14;
    fVar22 = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19 +
               0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * fVar22;
    fVar17 = local_158._4_4_ * (float)local_1a8;
    fVar18 = (float)local_158 * (float)local_1a8;
    fVar19 = (float)local_158 * local_1a8._4_4_;
    fVar13 = local_158._4_4_ * local_1a8._4_4_;
    local_158 = CONCAT44((float)uStack_150 * (float)local_1a8 * fRam0000000146b320a4 +
                         fVar22 * local_158._4_4_ +
                         uStack_150._4_4_ * local_1a8._4_4_ * fRam0000000146b32094 +
                         (float)local_158 * fVar14 * fRam0000000146b32084,
                         uStack_150._4_4_ * (float)local_1a8 * _DAT_146b320a0 +
                         fVar22 * (float)local_158 +
                         (float)uStack_150 * local_1a8._4_4_ * _DAT_146b32090 +
                         local_158._4_4_ * fVar14 * _DAT_146b32080);
    uStack_150 = CONCAT44(fVar18 * fRam0000000146b320ac + fVar22 * uStack_150._4_4_ +
                          fVar13 * fRam0000000146b3209c +
                          (float)uStack_150 * fVar14 * fRam0000000146b3208c,
                          fVar17 * fRam0000000146b320a8 + fVar22 * (float)uStack_150 +
                          fVar19 * fRam0000000146b32098 +
                          uStack_150._4_4_ * fVar14 * fRam0000000146b32088);
    local_1a8 = uVar5;
  }
  FQuat::Rotator(&local_158,&local_148);
  lVar8 = FUN_142d5eab0(param_3);
  uVar27 = (undefined4)(in_stack_fffffffffffffe20 >> 0x20);
  if (lVar8 != 0) {
    local_130 = fVar12;
    if (*(char *)(param_7 + 0x28) < '\0') {
      local_180 = fVar12;
      if ((*(uint *)(param_1 + 0x28) & 8) == 0) {
        local_188 = CONCAT44(fVar21,local_198);
        uVar24 = (ulonglong)uVar25 << 0x20;
        lVar9 = FUN_142d54ef0(lVar8,lVar9,&local_188,0,(ulonglong)uVar23 << 0x20,uVar24,
                              CONCAT44(uVar26,0x3c23d70a));
        if (lVar9 != 0) {
          local_1a8 = local_178;
          local_188 = local_148;
          local_180 = local_140;
          local_1a0 = fVar20;
          FUN_142399680(lVar9,&local_1a8,&local_188,0,0,uVar24 & 0xffffffffffffff00);
        }
      }
      else {
        local_1a8 = local_148;
        local_1a0 = local_140;
        local_188 = CONCAT44(fVar21,local_198);
        local_170 = fVar20;
        lVar9 = FUN_142d70f10(lVar8,param_1 + 0x30,lVar9,&local_188,&local_178,&local_1a8,
                              (ulonglong)uVar26 << 0x20,
                              in_stack_fffffffffffffe20 & 0xffffffff00000000,0,0x3c23d70a);
      }
    }
    else {
      local_188 = local_148;
      local_1a8 = local_178;
      local_180 = local_140;
      local_178 = CONCAT44(fVar21,local_198);
      local_170 = fVar12;
      if ((*(uint *)(param_1 + 0x28) & 8) == 0) {
        local_1a0 = fVar20;
        uVar5 = FWeakObjectPtr::Get(lVar10);
        lVar9 = FUN_142d6fda0(lVar8,lVar9,&local_178,uVar5,0,&local_1a8,&local_188,
                              CONCAT44(uVar27,1),0,0,0,0x3c23d70a);
      }
      else {
        local_1a0 = fVar20;
        uVar5 = FWeakObjectPtr::Get(lVar10);
        lVar9 = FUN_142d71150(lVar8,param_1 + 0x30,lVar9,&local_178,uVar5,0,&local_1a8,&local_188,1,
                              0,0,0,0x3c23d70a);
      }
    }
    if (lVar9 != 0) {
      FUN_142376e80(lVar9,*(float *)(param_1 + 100) - *(float *)(param_1 + 0x68));
      if (*(int *)(param_7 + 0x70) != 0) {
        lVar10 = 0;
        if (*(longlong *)(param_7 + 0x60) == 0) {
          lVar10 = param_7 + 0x40;
        }
        if (lVar10 != 0 || *(longlong *)(param_7 + 0x60) != 0) {
          FUN_142a51ce0(param_7 + 0x30,lVar9,param_6);
        }
      }
      bVar11 = 2;
      goto LAB_142d6a0d8;
    }
  }
  bVar11 = 8;
LAB_142d6a0d8:
  return (undefined1 *)(ulonglong)bVar11;
}



// FUNCTION 142d6a100 FUN_142d6a100 body=1123 status=ok
// SIG undefined FUN_142d6a100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d6a100(char *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong param_5,longlong param_6,undefined1 param_7,char param_8,
                       char param_9,char param_10,undefined8 param_11,longlong param_12,
                       longlong *param_13)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 local_150;
  byte local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  char local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_11;
  local_138 = param_6;
  local_f8 = param_13;
  local_148 = 0;
  if ((*(byte *)(param_12 + 0x28) & 4) != 0) goto LAB_142d6a541;
  lVar8 = param_2;
  local_108 = param_4;
  if (param_9 != '\0') {
    lVar7 = *(longlong *)(param_5 + 400);
    if (lVar7 != 0) {
      lVar5 = FUN_142e4e4a0();
      iVar2 = *(int *)(lVar5 + 0x90);
      uVar6 = (longlong)iVar2;
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar2) ||
         (uVar6 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + 0x88),
         *(longlong *)(uVar6 + (longlong)iVar2 * 8) != lVar5 + 0x88)) {
        param_13 = (longlong *)(uVar6 & 0xffffffffffffff00);
      }
      else {
        param_13 = (longlong *)CONCAT71((int7)(uVar6 >> 8),1);
      }
      if ((((char)param_13 != '\0') &&
          (param_13 = (longlong *)FUN_141651650(), (char)param_13 == '\0')) &&
         (*(char *)(lVar7 + 200) == '\0')) goto LAB_142d6a1dd;
    }
    lVar8 = param_3;
  }
LAB_142d6a1dd:
  lVar7 = local_138;
  if (((lVar8 == 0) && ((param_8 == '\0' || ((param_2 == 0 && (param_3 == 0)))))) ||
     (((*(byte *)(param_12 + 0x28) & 0x40) != 0 &&
      (((param_2 != 0 &&
        (uVar4 = *(uint *)(param_2 + 0x14c) >> 1, param_13 = (longlong *)(ulonglong)uVar4,
        (uVar4 & 1) != 0)) ||
       ((param_3 != 0 &&
        (uVar4 = *(uint *)(param_3 + 0x14c) >> 1, param_13 = (longlong *)(ulonglong)uVar4,
        (uVar4 & 1) != 0)))))))) {
LAB_142d6a541:
    return (ulonglong)param_13 & 0xffffffffffffff00;
  }
  local_130 = FWeakObjectPtr::Get(local_138 + 0x6c);
  lVar5 = *(longlong *)(lVar7 + 0x20);
  local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(lVar7 + 0x28));
  local_158 = param_12;
  FUN_142d60510(local_f0,local_108,lVar7,param_7);
  uVar1 = *(undefined4 *)(param_12 + 0xa4);
  FRotator::Quaternion(local_f0);
  local_a8 = local_108;
  uStack_a0 = uStack_100;
  local_98._8_4_ = (undefined4)local_120;
  local_98._0_8_ = lVar5;
  local_98._12_4_ = 0;
  local_88._4_4_ = uVar1;
  local_88._0_4_ = uVar1;
  local_88._8_4_ = uVar1;
  local_88._12_4_ = 0;
  local_128 = lVar5;
  if (param_8 == '\0') {
    if (lVar8 == 0) goto LAB_142d6a53a;
    if (param_10 != '\0') {
      if ((*param_1 == '\0') && ((*(byte *)(param_5 + 0x830) & 2) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) goto LAB_142d6a53a;
    }
    uVar12 = 1;
    if (*(int *)(param_12 + 0x70) != 0) {
      lVar7 = 0;
      if (*(longlong *)(param_12 + 0x60) == 0) {
        lVar7 = param_12 + 0x40;
      }
      if ((lVar7 != 0 || *(longlong *)(param_12 + 0x60) != 0) &&
         (uVar12 = 1, (*(byte *)(param_12 + 0x29) & 1) == 0)) {
        uVar12 = 0;
      }
    }
    local_150 = 0;
    local_158 = CONCAT71(local_158._1_7_,uVar12);
    lVar8 = FUN_14245f910(param_5,lVar8,&local_a8,1);
    lVar7 = 0;
    if (lVar8 != 0) {
      local_148 = 1;
      if ((param_1[0x28] & 4U) != 0) {
        FUN_142398ea0(lVar8,local_130);
        FUN_1423979a0(lVar8,1);
      }
      FUN_142d560e0(lVar8,param_12);
      FUN_142d560e0(lVar8,param_1 + 0x90);
      lVar7 = lVar8;
    }
    if (*(int *)(param_12 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_12 + 0x60);
      lVar10 = 0;
      if (lVar5 == 0) {
        lVar10 = param_12 + 0x40;
      }
LAB_142d6a4b1:
      if (lVar10 != 0 || lVar5 != 0) {
        FUN_142a51ce0(param_12 + 0x30,lVar8,local_140);
      }
    }
  }
  else {
    FActorSpawnParameters::FActorSpawnParameters(local_e0);
    local_b8 = 1;
    if ((param_1[0x28] & 4U) == 0) {
      if (param_10 != '\0') {
        if ((*param_1 == '\0') && ((*(byte *)(param_5 + 0x830) & 2) != 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) goto LAB_142d6a40c;
      }
      bVar3 = false;
    }
    else {
LAB_142d6a40c:
      bVar3 = true;
      local_d0 = local_130;
    }
    uVar9 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    lVar8 = FUN_142550d00(param_5,uVar9,&local_a8,local_e0);
    *local_f8 = lVar8;
    if (lVar8 == 0) goto LAB_142d6a53a;
    lVar7 = *(longlong *)(lVar8 + 0x458);
    local_118 = param_9;
    local_148 = 1;
    local_128 = param_2;
    local_120 = param_3;
    FUN_142d922a0(lVar8,&local_128);
    FUN_142d561c0(lVar8,param_12);
    FUN_142d561c0(lVar8,param_1 + 0x90);
    if (bVar3) {
      FUN_142d91d40(lVar8,1);
    }
    if (*(int *)(param_12 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_12 + 0x60);
      lVar10 = 0;
      if (lVar5 == 0) {
        lVar10 = param_12 + 0x40;
      }
      goto LAB_142d6a4b1;
    }
  }
  if ((lVar7 != 0) && ((param_1[0x28] & 1U) != 0)) {
    FUN_142397000(lVar7,0,0,1);
    lVar5 = local_138;
    lVar8 = local_138 + 0x74;
    lVar10 = FWeakObjectPtr::Get(lVar8);
    if (lVar10 != 0) {
      FWeakObjectPtr::Get(lVar8);
    }
    if ((param_1[0x28] & 2U) == 0) {
      local_140 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar5 + 0x80);
    }
    uVar11 = FWeakObjectPtr::Get(lVar8);
    FUN_142382f60(lVar7,uVar11,&DAT_146532180,uVar9);
  }
LAB_142d6a53a:
  return (ulonglong)local_148;
}



// FUNCTION 142d6a570 FUN_142d6a570 body=765 status=ok
// SIG undefined FUN_142d6a570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d6a570(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                       longlong param_5,byte param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  byte local_138;
  undefined1 local_130;
  char local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  longlong local_108 [2];
  longlong local_f8;
  undefined8 local_e8;
  byte local_e0;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((*(byte *)(param_5 + 0x28) & 0x20) == 0) {
    local_127 = param_4;
    local_110 = param_2;
    lVar4 = FWeakObjectPtr::Get(param_3 + 100);
    local_128 = '\0';
    lVar5 = FUN_142d5e550(param_1,lVar4,&local_128);
    if (lVar5 == 0) {
      lVar5 = param_1 + 400;
      for (lVar6 = param_1; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (*(char *)(lVar6 + 0x180) != '\0') {
          lVar5 = lVar6 + 400;
          break;
        }
      }
    }
    uVar11 = 0;
    if ((*(char *)(lVar5 + 1) != '\0') && (*(longlong *)(lVar5 + 8) != 0)) {
      lVar6 = FUN_142d5e550(*(longlong *)(lVar5 + 8),lVar4,local_118);
      if (lVar6 == 0) {
        lVar6 = FUN_142d6de30(*(undefined8 *)(lVar5 + 8));
      }
      uVar11 = *(undefined8 *)(lVar6 + 0x20);
    }
    if (*(char *)(lVar5 + 0x10) == '\0') {
      lVar6 = *(longlong *)(param_1 + 0x2e0);
    }
    else {
      lVar6 = *(longlong *)(lVar5 + 0x18);
    }
    FUN_1412f6f40(local_108,param_5);
    if (param_6 != 0) {
      if (local_128 == '\0') {
        iVar1 = *(int *)(param_1 + 0x2f8);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x2fc);
      }
      if (DAT_1466ad3f0 < iVar1) {
        if (((local_e0 & 4) == 0) && ((param_6 & 1) == 0)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 4;
        }
        if (((local_e0 & 8) == 0) && ((param_6 & 2) == 0)) {
          bVar7 = 0;
        }
        else {
          bVar7 = 8;
        }
        if (((local_e0 & 1) == 0) && ((param_6 & 4) == 0)) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        local_e0 = local_e0 & 0xf2 | bVar3 | bVar7 | bVar8;
      }
    }
    local_120 = 0;
    if (lVar4 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x2f0);
      for (lVar2 = *(longlong *)(param_1 + 0x30); (lVar9 == 0 && (lVar2 != 0));
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
        lVar9 = *(longlong *)(lVar2 + 0x2f0);
      }
      local_120 = 0;
      if (lVar6 != 0) {
        local_e8 = FUN_142db9220(*(undefined1 *)(lVar4 + 0x50));
      }
    }
    local_140 = local_108;
    local_130 = 1;
    local_138 = param_6;
    local_168 = *(undefined8 *)(lVar5 + 0x20);
    local_170 = *(undefined1 *)(param_1 + 0x38);
    local_178 = *(undefined1 *)(lVar5 + 1);
    local_160 = uVar11;
    local_158 = lVar6;
    local_150 = lVar4;
    local_148 = lVar9;
    bVar3 = FUN_142d71ca0(lVar5,local_110,param_3,local_127);
    if (local_98 != 0) {
      plVar10 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar10 = local_a8;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    local_58 = (ulonglong)bVar3;
  }
  else {
    local_58 = local_58 & 0xffffffffffffff00;
  }
  return local_58;
}



// FUNCTION 142d6a870 FUN_142d6a870 body=577 status=ok
// SIG undefined FUN_142d6a870(void)

void FUN_142d6a870(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [28];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  cVar2 = FUN_142d62bf0(param_2);
  if (cVar2 != '\0') {
    return;
  }
  if (*(int *)(param_3 + 1) == 0) {
    return;
  }
  lVar4 = param_2[0x2d];
  if (lVar4 != 0) {
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142d6a90f;
  }
  lVar4 = 0;
LAB_142d6a90f:
  param_3 = (undefined8 *)*param_3;
  if (*(float *)(param_1 + 0x2ec) * *(float *)(param_1 + 0x2ec) <=
      *(float *)(param_3 + 6) * *(float *)(param_3 + 6) +
      *(float *)((longlong)param_3 + 0x34) * *(float *)((longlong)param_3 + 0x34) +
      *(float *)(param_3 + 7) * *(float *)(param_3 + 7)) {
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    if ((lVar4 != 0) && (lVar3 != 0)) {
      if (*(float *)(lVar3 + 0x790) - *(float *)(lVar4 + 0x6bc) < *(float *)(param_1 + 0x2e8)) {
        return;
      }
      *(float *)(lVar4 + 0x6bc) = *(float *)(lVar3 + 0x790);
    }
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FWeakObjectPtr::operator=(local_24,param_4);
    FWeakObjectPtr::operator=(local_2c,*(undefined8 *)(param_4 + 0x118));
    local_84 = *param_3;
    local_7c = *(undefined4 *)(param_3 + 1);
    local_6c = *(undefined8 *)((longlong)param_3 + 0xc);
    local_64 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_78 = local_84;
    local_70 = local_7c;
    FWeakObjectPtr::operator=(local_34,param_3[5]);
    if (((*(char *)(param_1 + 0x301) != '\0') ||
        (((*(char *)(param_1 + 0x300) == '\0' && (*(longlong *)(param_1 + 0x30) != 0)) &&
         (cVar2 = FUN_142d639b0(), cVar2 != '\0')))) && (DAT_1466ad3f4 == 1)) {
      local_a8 = local_78;
      local_9c = DAT_1466ad400;
      local_a0 = local_70;
      cVar2 = FUN_142d6c0a0(&local_a8);
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_142d5e050(param_1,param_2,local_98,param_5,param_6);
  }
  return;
}



// FUNCTION 142d6aac0 FUN_142d6aac0 body=883 status=ok
// SIG undefined FUN_142d6aac0(void)

void FUN_142d6aac0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [32];
  undefined1 local_198 [17];
  undefined1 local_187;
  undefined1 local_e8 [208];
  
  if (param_2 == 0) {
    return;
  }
  lVar3 = FUN_142e20fc0();
  lVar6 = param_2;
  while (lVar6 != lVar3) {
    lVar6 = *(longlong *)(lVar6 + 0x30);
    if (lVar6 == 0) {
      return;
    }
  }
  FUN_142c62180(local_1b8);
  local_187 = 2;
  FUN_142d5db60(param_1,param_4,local_198);
  lVar6 = *(longlong *)(param_1 + 0x178);
  if (((lVar6 == 0) && (*param_4 != 0)) &&
     (plVar7 = *(longlong **)(*param_4 + 0x118), plVar7 != (longlong *)0x0)) {
    FUN_142d6f610(param_1,*(undefined8 *)(param_1 + 0x130));
    local_1e8 = UScrollBox::GetPrivateStaticClass();
    uVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,local_1e8);
    *(undefined8 *)(param_1 + 0x168) = uVar4;
    local_1e0 = FUN_142e27720();
    uVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,local_1e0);
    *(undefined8 *)(param_1 + 0x178) = uVar4;
    local_1d8 = ULevelSequencePlayer::GetPrivateStaticClass();
    uVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,local_1d8);
    *(undefined8 *)(param_1 + 0x170) = uVar4;
    plVar5 = (longlong *)(**(code **)(*plVar7 + 0x668))(plVar7);
    if (plVar5 != (longlong *)0x0) {
      local_1d0 = UThrobber::GetPrivateStaticClass();
      uVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,local_1d0);
      *(undefined8 *)(param_1 + 0x180) = uVar4;
    }
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    lVar6 = *(longlong *)(param_1 + 0x178);
    if (!bVar8) {
      plVar7 = (longlong *)0x0;
    }
    *(longlong **)(param_1 + 0x280) = plVar7;
  }
  if (lVar6 != 0) {
    if ((*(longlong *)(param_1 + 0x260) != 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x268) + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) {
        local_200 = *(longlong *)(param_1 + 0x268);
        local_208 = 0;
        if (local_200 != 0) {
          LOCK();
          iVar2 = *(int *)(local_200 + 8);
          bVar8 = iVar2 == 0;
          if (bVar8) {
            *(int *)(local_200 + 8) = 0;
            iVar2 = 0;
          }
          UNLOCK();
          while (!bVar8) {
            LOCK();
            bVar8 = iVar2 == *(int *)(local_200 + 8);
            if (bVar8) {
              *(int *)(local_200 + 8) = iVar2 + 1;
            }
            UNLOCK();
            if (bVar8) {
              if (local_200 != 0) {
                local_208 = *(undefined8 *)(param_1 + 0x260);
              }
              goto LAB_142d6acc9;
            }
            LOCK();
            iVar2 = *(int *)(local_200 + 8);
            bVar8 = iVar2 == 0;
            if (bVar8) {
              *(int *)(local_200 + 8) = 0;
              iVar2 = 0;
            }
            UNLOCK();
          }
          local_200 = 0;
        }
LAB_142d6acc9:
        FUN_142c84750(*(undefined8 *)(param_1 + 0x178),&local_208);
      }
    }
    uVar4 = FUN_1405e0fd0(local_e8,local_1b8);
    FUN_142c7bb40(*(undefined8 *)(param_1 + 0x178),&local_1f8,param_2,uVar4,0);
    if (local_1f8 != 0) {
      FUN_140634b70(local_1f8 + 0x58,local_1c8,param_1,FUN_142d66960);
      plVar5 = local_1f0;
      *(longlong *)(param_1 + 600) = param_3;
      *(longlong *)(param_1 + 0x260) = local_1f8;
      plVar7 = *(longlong **)(param_1 + 0x268);
      if (local_1f0 != plVar7) {
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_1f0 + 0xc) = *(int *)((longlong)local_1f0 + 0xc) + 1;
          UNLOCK();
          plVar7 = *(longlong **)(param_1 + 0x268);
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        *(longlong **)(param_1 + 0x268) = plVar5;
      }
      if (((*(longlong *)(param_1 + 0x280) != 0) && (param_3 != 0)) &&
         (*(longlong *)(param_3 + 0x30) != 0)) {
        FUN_142e35e80();
      }
    }
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1f0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
  }
  FUN_142c63c50(local_1b8);
  return;
}



// FUNCTION 142d6ae40 FUN_142d6ae40 body=1518 status=ok
// SIG undefined FUN_142d6ae40(void)

void FUN_142d6ae40(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined4 local_res8 [2];
  longlong local_res10;
  longlong *in_stack_fffffffffffffd98;
  undefined8 local_258;
  longlong local_250;
  longlong local_248;
  longlong *local_240;
  undefined1 local_238 [8];
  longlong local_230;
  longlong local_228;
  longlong *local_220;
  undefined4 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [17];
  undefined1 local_1a7;
  undefined1 local_108 [208];
  
  local_res10 = param_2;
  FUN_142c62180(local_1d8);
  bVar13 = false;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    if ((*(longlong *)(param_1 + 0x168) == 0) ||
       ((*(uint *)(*(longlong *)(param_1 + 0x168) + 0x840) >> 3 & 1) == 0)) {
      lVar9 = *(longlong *)(param_1 + 0x160);
      lVar11 = 0;
      if (lVar9 != 0) {
        plVar5 = *(longlong **)(lVar9 + 0x50);
        plVar10 = plVar5 + (longlong)*(int *)(lVar9 + 0x58) * 2;
        for (; plVar5 != plVar10; plVar5 = plVar5 + 2) {
          if (*plVar5 == local_res10) {
            lVar11 = plVar5[1];
            break;
          }
        }
      }
    }
    else {
      local_1a7 = 2;
      bVar13 = true;
      FUN_142d5db60(param_1,param_3,local_1b8);
      lVar9 = *(longlong *)(param_1 + 0x160);
      lVar7 = 0;
      if (lVar9 == 0) {
        local_230 = 0;
      }
      else {
        plVar5 = *(longlong **)(lVar9 + 0x50);
        plVar10 = plVar5 + (longlong)*(int *)(lVar9 + 0x58) * 2;
        for (; local_230 = 0, plVar5 != plVar10; plVar5 = plVar5 + 2) {
          if (*plVar5 == local_res10) {
            local_230 = plVar5[1];
            break;
          }
        }
      }
      plVar5 = (longlong *)
               FUN_142c707b0(*(undefined8 *)(param_1 + 0x178),local_1f8,local_230,local_1d8);
      lVar11 = *plVar5;
      if (lVar11 != 0) {
        lVar6 = FUN_142e20fc0();
        lVar9 = lVar11;
        do {
          if (lVar9 == lVar6) goto LAB_142d6af57;
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
      }
      lVar11 = *(longlong *)(param_1 + 0x150);
LAB_142d6af57:
      lVar9 = lVar7;
      if (((*(char *)(param_1 + 0x158) != '\0') && (local_res10 != 0)) &&
         (lVar9 = 0, *(longlong *)(local_res10 + 0x38) != 0)) {
        lVar9 = *(longlong *)(param_1 + 0x160);
        if (lVar9 == 0) {
          local_228 = 0;
        }
        else {
          plVar5 = *(longlong **)(lVar9 + 0x50);
          plVar10 = plVar5 + (longlong)*(int *)(lVar9 + 0x58) * 2;
          for (; local_228 = lVar7, plVar5 != plVar10; plVar5 = plVar5 + 2) {
            if (*plVar5 == *(longlong *)(local_res10 + 0x38)) {
              local_228 = plVar5[1];
              break;
            }
          }
        }
        plVar5 = (longlong *)
                 FUN_142c707b0(*(undefined8 *)(param_1 + 0x178),local_1f0,local_228,local_1d8);
        lVar9 = *plVar5;
      }
      in_stack_fffffffffffffd98 = param_3;
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x430))
                (*(longlong **)(param_1 + 0x168),local_res10,lVar11,lVar9,param_3);
      if (lVar9 != 0) {
        lVar6 = FUN_142e20fc0();
        lVar7 = lVar9;
        do {
          if (lVar7 == lVar6) {
            if (*(char *)(param_1 + 0x158) == '\0') break;
            if ((*(longlong *)(param_1 + 0x168) != 0) &&
               (lVar7 = FUN_1422312c0(*(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x118)),
               lVar7 != 0)) {
              lVar6 = FUN_142e4e4a0();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (((bVar2) && (cVar3 = FUN_141651650(), cVar3 == '\0')) &&
                 (*(char *)(lVar7 + 200) == '\0')) break;
            }
            lVar11 = lVar9;
            if (local_res10 != 0) {
              local_res10 = *(longlong *)(local_res10 + 0x38);
            }
            break;
          }
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
    }
    uVar12 = 0;
    if (lVar11 != 0) {
      lVar7 = FUN_142e20fc0();
      lVar9 = lVar11;
      do {
        if (lVar9 == lVar7) {
          if (!bVar13) {
            FUN_142d5db60(param_1,param_3,local_1b8);
          }
          if ((*(longlong *)(param_1 + 0x260) == 0) || (*(longlong *)(param_1 + 0x268) == 0))
          goto LAB_142d6b19e;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x268) + 8);
          LOCK();
          iVar4 = *piVar1;
          if (iVar4 == 0) {
            *piVar1 = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (iVar4 < 1) goto LAB_142d6b19e;
          local_250 = *(longlong *)(param_1 + 0x268);
          local_258 = 0;
          if (local_250 == 0) goto LAB_142d6b18d;
          LOCK();
          iVar4 = *(int *)(local_250 + 8);
          bVar13 = iVar4 == 0;
          if (bVar13) {
            *(int *)(local_250 + 8) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (!bVar13) goto LAB_142d6b170;
          goto LAB_142d6b188;
        }
        lVar9 = *(longlong *)(lVar9 + 0x30);
      } while (lVar9 != 0);
    }
  }
  goto LAB_142d6b417;
  while( true ) {
    LOCK();
    iVar4 = *(int *)(local_250 + 8);
    bVar13 = iVar4 == 0;
    if (bVar13) {
      *(int *)(local_250 + 8) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar13) break;
LAB_142d6b170:
    LOCK();
    bVar13 = iVar4 == *(int *)(local_250 + 8);
    if (bVar13) {
      *(int *)(local_250 + 8) = iVar4 + 1;
    }
    UNLOCK();
    if (bVar13) {
      if (local_250 != 0) {
        local_258 = *(undefined8 *)(param_1 + 0x260);
      }
      goto LAB_142d6b18d;
    }
  }
LAB_142d6b188:
  local_250 = 0;
LAB_142d6b18d:
  FUN_142c84750(*(undefined8 *)(param_1 + 0x178),&local_258);
LAB_142d6b19e:
  uVar8 = FUN_1405e0fd0(local_108,local_1d8);
  FUN_142c7bb40(*(undefined8 *)(param_1 + 0x178),&local_248,lVar11,uVar8,
                (ulonglong)in_stack_fffffffffffffd98 & 0xffffffffffffff00);
  if (local_248 != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x120);
    if ((lVar9 == 0) && (lVar9 = FUN_1423407b0(), lVar9 == 0)) {
      local_res8[0] = 0;
    }
    else {
      local_res8[0] = *(undefined4 *)(lVar9 + 0x790);
    }
    local_220 = &local_res10;
    local_218 = local_res8;
    TSet<TTuple<UFlareSimulatedSector_*,float>,TDefaultMapHashableKeyFuncs<UFlareSimulatedSector_*,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UFlareSimulatedSector_*_const_&,float_const_&>_>
              (param_1 + 0x1b8,local_238,&local_220,0);
    FUN_140634b70(local_248 + 0x58,local_1e8,param_1,FUN_142d66960);
    plVar10 = local_240;
    *(longlong *)(param_1 + 600) = local_res10;
    *(longlong *)(param_1 + 0x260) = local_248;
    plVar5 = *(longlong **)(param_1 + 0x268);
    if (local_240 != plVar5) {
      if (local_240 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_240 + 0xc) = *(int *)((longlong)local_240 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(param_1 + 0x268);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(longlong **)(param_1 + 0x268) = plVar10;
    }
    if (((*(longlong *)(param_1 + 0x280) != 0) && (local_res10 != 0)) &&
       (*(longlong *)(local_res10 + 0x30) != 0)) {
      FUN_142e35e80(*(longlong *)(param_1 + 0x280),*(longlong *)(local_res10 + 0x30));
    }
    if (*(longlong *)(param_1 + 0x168) != 0) {
      local_210 = uVar12;
      if (*param_3 != 0) {
        local_210 = *(undefined8 *)(*param_3 + 0x118);
      }
      if (param_3[1] != 0) {
        uVar12 = *(undefined8 *)(param_3[1] + 0x118);
      }
      local_208 = uVar12;
      local_200 = local_res10;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_1 + 0x168) + 0x3c0,&local_210);
    }
    plVar10 = *(longlong **)(param_1 + 0x138);
    plVar5 = plVar10 + *(int *)(param_1 + 0x140);
    for (; plVar10 != plVar5; plVar10 = plVar10 + 1) {
      if (*plVar10 == local_res10) goto LAB_142d6b3cc;
    }
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_142dafbc0(*(longlong *)(param_1 + 0x170) + 0x178,&DAT_146b32180);
    }
    plVar5 = *(longlong **)(param_1 + 0x180);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x440))(plVar5,&DAT_146b32180,1);
    }
  }
LAB_142d6b3cc:
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_240 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)local_240 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_240 + 8))(local_240,1);
      }
    }
  }
LAB_142d6b417:
  FUN_142c63c50(local_1d8);
  return;
}



// FUNCTION 142d6b430 FUN_142d6b430 body=1165 status=ok
// SIG undefined FUN_142d6b430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d6b430(longlong param_1,longlong *param_2,float *param_3,float *param_4,
                       undefined1 param_5,char param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [12];
  float local_17c;
  undefined8 local_174;
  float local_16c;
  float local_168;
  float fStack_164;
  float local_160;
  undefined8 local_15c;
  float local_154;
  undefined1 local_11c [8];
  undefined1 local_114 [28];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_90;
  undefined8 local_88;
  int *local_78;
  
  iVar1 = DAT_1466ad414;
  piVar3 = (int *)(DAT_1468387a8 ^ (ulonglong)auStack_1d8);
  if (param_2 == (longlong *)0x0) {
LAB_142d6b85a:
    return (ulonglong)piVar3 & 0xffffffffffffff00;
  }
  local_78 = piVar3;
  if ((DAT_1466ad410 == 1) && (-1 < DAT_1466ad414)) {
    local_198 = param_2;
    uStack_190 = param_1;
    uVar4 = FUN_142d5eba0();
    piVar3 = (int *)FUN_142d61070(uVar4,&local_198);
    if ((iVar1 < *piVar3) || (iVar7 = *piVar3 + 1, *piVar3 = iVar7, iVar1 < iVar7))
    goto LAB_142d6b85a;
  }
  lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  piVar3 = (int *)0x0;
  if (lVar5 == 0) goto LAB_142d6b85a;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b33f00) && (_Init_thread_header(&DAT_146b33f00), DAT_146b33f00 == -1))
  {
    FName::FName(&DAT_146b33ef8,L"ImpactData",1);
    _Init_thread_footer(&DAT_146b33f00);
  }
  local_e8 = 0x10000;
  local_f0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_e0 = 0;
  local_198 = (longlong *)0x0;
  local_f8 = 0;
  local_e4 = 0;
  local_dc = 0;
  local_e2 = 0;
  local_d8 = 0;
  local_d4 = 0x101;
  FCollisionQueryParams::AddIgnoredActor(&local_f8);
  local_f8 = DAT_146b33ef8;
  local_e4 = CONCAT11(local_e4._1_1_,1);
  local_e8._0_2_ = CONCAT11(1,(undefined1)local_e8);
  _guard_xfg_dispatch_icall_nop(local_188,0,0x90);
  local_17c = 1.0;
  local_1a8 = &DAT_146aefe68;
  local_1b0 = &local_f8;
  local_1b8 = CONCAT44(local_1b8._4_4_,param_7);
  UWorld::LineTraceSingleByChannel(lVar5,local_188,param_3,param_4);
  lVar5 = FWeakObjectPtr::Get(local_11c);
  lVar6 = FWeakObjectPtr::Get(local_114);
  if (((((lVar5 == 0) && (lVar6 == 0)) || (1.0 <= local_17c)) ||
      (((local_168 == 0.0 && (fStack_164 == 0.0)) && (local_160 == 0.0)))) && (param_6 == '\0')) {
    uVar8 = 0;
    goto LAB_142d6b831;
  }
  if (((lVar5 == 0) && (lVar6 == 0)) &&
     ((1.0 <= local_17c && (((local_168 == 0.0 && (fStack_164 == 0.0)) && (local_160 == 0.0)))))) {
    local_174 = *(undefined8 *)param_4;
    local_168 = (float)local_174;
    fStack_164 = (float)((ulonglong)local_174 >> 0x20);
    fVar12 = *param_3 - *param_4;
    local_16c = param_4[2];
    fVar13 = param_3[1] - param_4[1];
    local_154 = param_3[2] - param_4[2];
    fVar9 = fVar13 * fVar13 + fVar12 * fVar12 + local_154 * local_154;
    if (fVar9 == 1.0) {
LAB_142d6b77a:
      local_198 = (longlong *)CONCAT44(fVar13,fVar12);
    }
    else {
      if (1e-08 <= fVar9) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar12 = fVar12 * fVar10;
        fVar13 = fVar13 * fVar10;
        local_154 = local_154 * fVar10;
        goto LAB_142d6b77a;
      }
      local_198 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_154 = DAT_1468b5d98;
    }
    uStack_190 = CONCAT44(uStack_190._4_4_,local_154);
    local_15c = local_198;
    local_160 = local_16c;
  }
  if (((*(char *)(param_1 + 0x301) == '\0') &&
      (((*(char *)(param_1 + 0x300) != '\0' || (*(longlong *)(param_1 + 0x30) == 0)) ||
       (cVar2 = FUN_142d639b0(), cVar2 == '\0')))) || (DAT_1466ad3f4 != 1)) {
LAB_142d6b80e:
    local_1b8 = param_8;
    FUN_142d5e050(param_1,param_2,local_188,param_5);
  }
  else {
    local_198 = (longlong *)CONCAT44(fStack_164,local_168);
    uStack_190 = CONCAT44(DAT_1466ad400,local_160);
    cVar2 = FUN_142d6c0a0(&local_198);
    if (cVar2 == '\0') goto LAB_142d6b80e;
  }
  uVar8 = 1;
LAB_142d6b831:
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_b0 == 0) {
    return uVar8;
  }
  FMemory::Free();
  return uVar8;
}



// FUNCTION 142d6b8c0 FUN_142d6b8c0 body=140 status=ok
// SIG undefined FUN_142d6b8c0(void)

void FUN_142d6b8c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,char param_6)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_142235230(param_2);
    if (param_6 == '\0') {
      bVar2 = iVar1 == 1;
    }
    else {
      bVar2 = iVar1 == 3;
    }
    if (!bVar2) {
      FUN_142d6b430(param_1,param_2,param_3,param_4,param_6,0,param_5,&DAT_1466ad4f0);
    }
  }
  return;
}



// FUNCTION 142d6b950 FUN_142d6b950 body=608 status=ok
// SIG undefined FUN_142d6b950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d6b950(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  longlong *local_1a0;
  code *local_198 [2];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  code *local_148;
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  longlong local_f8 [5];
  undefined1 local_d0;
  byte local_cf;
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  if (param_1 == 0) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_142235230(param_2);
  if (iVar1 == 1) {
    return;
  }
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_138);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77b70;
    puVar2[1] = param_5;
  }
  local_cf = local_cf & 0xfe;
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_58 = 0;
  local_148 = FUN_142d596c0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_c8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_68 = 0x3f800000;
  local_64 = 0x3f800000;
  local_60 = 0;
  local_54 = 0x3f800000;
  local_d0 = 0;
  local_168 = (longlong *)0x0;
  local_158 = 0;
  if (local_108 != 0) {
    plVar3 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar3 = local_118;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)*plVar3)(plVar3,local_188);
      (**(code **)(*plVar3 + 8))(plVar3);
      local_198[0] = local_148;
      goto LAB_142d6ba91;
    }
  }
  local_198[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_142d6ba91:
  FGenericPlatformMemory::MemswapGreaterThan8(local_198,local_c8,0x50);
  if (local_158 != 0) {
    plVar3 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar3 = local_168;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_1a0 = local_f8;
  local_1a8 = param_6;
  local_1b0 = 0;
  local_1b8 = 0;
  FUN_142d6b430(param_1,param_2,param_3,param_4);
  if (local_88 != 0) {
    plVar3 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar3 = local_98;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_f8[2] != 0) {
    FMemory::Free();
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    plVar3 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar3 = local_118;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d6bbb0 FUN_142d6bbb0 body=262 status=ok
// SIG undefined FUN_142d6bbb0(void)

void FUN_142d6bbb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 400)) {
    plVar1 = (longlong *)(param_1 + 0x188);
    iVar6 = *(int *)(param_1 + 400);
    plVar2 = (longlong *)*plVar1;
    if (plVar2[(longlong)iVar6 + -1] == param_2) {
      *(int *)(param_1 + 400) = iVar6 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      if (*(int *)(param_1 + 400) < 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(*plVar1 + -8 + (longlong)*(int *)(param_1 + 400) * 8);
      }
      *(longlong *)(param_1 + 0x198) = lVar7;
      if (lVar7 != 0) {
        FUN_142d6f3f0(param_1);
      }
      FUN_142d6cea0(param_1,param_2);
      return;
    }
    plVar4 = plVar2 + iVar6;
    if (plVar4 != plVar2) {
      while (plVar4 = plVar4 + -1, *plVar4 != param_2) {
        if (plVar4 == plVar2) {
          return;
        }
      }
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
      if (iVar3 != -1) {
        iVar5 = (iVar6 - iVar3) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop(plVar2 + iVar3,plVar2 + (iVar3 + 1),(longlong)iVar5 << 3);
          iVar6 = *(int *)(param_1 + 400);
        }
        *(int *)(param_1 + 400) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 142d6bcc0 FUN_142d6bcc0 body=215 status=ok
// SIG undefined FUN_142d6bcc0(void)

void FUN_142d6bcc0(longlong param_1)

{
  char cVar1;
  
  FUN_142c7d610();
  if ((*(longlong *)(param_1 + 0x1c8) != 0) || (*(longlong *)(param_1 + 0x1d0) != 0)) {
    FUN_142c821f0(param_1 + 0x1d8);
    FUN_142c821f0(param_1 + 0x1f0,*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  cVar1 = FUN_142c73840((undefined8 *)(param_1 + 0x1d8));
  if ((cVar1 != '\0') || (cVar1 = FUN_142c73840((undefined4 *)(param_1 + 0x1f0)), cVar1 != '\0')) {
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x1f0);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 500);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x200);
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  return;
}



// FUNCTION 142d6bda0 FUN_142d6bda0 body=336 status=ok
// SIG undefined FUN_142d6bda0(void)

void FUN_142d6bda0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1417510e0();
    lVar3 = *(longlong *)(param_1 + 0x30);
    iVar8 = 0;
    plVar6 = (longlong *)(lVar3 + 0x308);
    if (0 < *(int *)(lVar3 + 0x310)) {
      lVar7 = 0;
      do {
        local_res8 = *(undefined4 *)(*plVar6 + lVar7);
        local_resc = *(undefined4 *)(*plVar6 + 4 + lVar7);
        cVar4 = FWeakObjectPtr::IsValid(&local_res8);
        if (cVar4 == '\0') {
          iVar2 = *(int *)(lVar3 + 0x310);
          iVar5 = (iVar2 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar6 + (longlong)iVar8 * 8),
                       (void *)(*plVar6 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
            iVar2 = *(int *)(lVar3 + 0x310);
          }
          *(int *)(lVar3 + 0x310) = iVar2 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
        }
        else {
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 8;
        }
      } while (iVar8 < *(int *)(lVar3 + 0x310));
    }
    FWeakObjectPtr::operator=(&local_res8,param_1);
    lVar7 = *plVar6;
    iVar8 = *(int *)(lVar3 + 0x310);
    for (lVar9 = lVar7; lVar9 != lVar7 + (longlong)iVar8 * 8; lVar9 = lVar9 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar9,&local_res8);
      if (cVar4 != '\0') {
        if ((int)(lVar9 - lVar7 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    iVar8 = *(int *)(lVar3 + 0x310);
    *(int *)(lVar3 + 0x310) = iVar8 + 1;
    if (*(int *)(lVar3 + 0x314) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar8 * 8);
    *puVar1 = local_res8;
    puVar1[1] = local_resc;
  }
  return;
}



// FUNCTION 142d6bef0 FUN_142d6bef0 body=74 status=ok
// SIG undefined FUN_142d6bef0(void)

void FUN_142d6bef0(longlong param_1)

{
  float fVar1;
  
  FUN_142349c80();
  fVar1 = *(float *)(param_1 + 0x1c8);
  if (0.0 < fVar1) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(float *)(param_1 + 0x1c4) = SQRT(fVar1);
    UObjectBaseUtility::MarkPackageDirty(param_1);
    return;
  }
  return;
}



// FUNCTION 142d6bf40 FUN_142d6bf40 body=346 status=ok
// SIG undefined FUN_142d6bf40(void)

void FUN_142d6bf40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar1 = (longlong *)(param_1 + 400);
  lVar4 = *plVar1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x198);
  lVar3 = uVar6 * 0xf8 + lVar4;
  if (lVar4 != lVar3) {
    do {
      iVar2 = *(int *)(param_1 + 0x188);
      *(int *)(param_1 + 0x188) = iVar2 + 1;
      if (*(int *)(param_1 + 0x18c) < iVar2 + 1) {
        TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x180),iVar2);
      }
      FUN_142d50fa0((longlong)iVar2 * 0xf8 + *(longlong *)(param_1 + 0x180),lVar4);
      lVar4 = lVar4 + 0xf8;
    } while (lVar4 != lVar3);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x198);
  }
  if ((int)uVar6 != 0) {
    lVar4 = *plVar1 + 0xb0;
    do {
      thunk_FUN_142478640(lVar4 + 0xc);
      thunk_FUN_142478640(lVar4);
      thunk_FUN_142478640(lVar4 + -0x1c);
      thunk_FUN_142478640(lVar4 + -0x28);
      thunk_FUN_142478640(lVar4 + -0x34);
      thunk_FUN_142478640(lVar4 + -0x40);
      thunk_FUN_142478640(lVar4 + -0x4c);
      thunk_FUN_142478640(lVar4 + -0x58);
      thunk_FUN_142478640(lVar4 + -100);
      thunk_FUN_142478640(lVar4 + -0x70);
      thunk_FUN_142478640(lVar4 + -0x7c);
      thunk_FUN_142478640(lVar4 + -0x88);
      thunk_FUN_142478640(lVar4 + -0x94);
      thunk_FUN_142478640(lVar4 + -0xa0);
      lVar4 = lVar4 + 0xf8;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  return;
}



// FUNCTION 142d6c0a0 FUN_142d6c0a0 body=534 status=ok
// SIG undefined FUN_142d6c0a0(void)

ulonglong FUN_142d6c0a0(float *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = 0.0;
  lVar8 = FUN_142d5eba0();
  pfVar10 = *(float **)(lVar8 + 0x1b50);
  if (*(float **)(lVar8 + 0x1b50) == (float *)0x0) {
    pfVar10 = (float *)(lVar8 + 0x1150);
  }
  lVar8 = (longlong)*(int *)(lVar8 + 7000);
  pfVar1 = pfVar10 + lVar8 * 5;
  if (pfVar10 != pfVar1) {
    fVar3 = param_1[3];
    do {
      fVar13 = pfVar10[3];
      fVar12 = fVar13 + fVar3 + 0.0001;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (fVar12 * fVar12 <
          (pfVar10[1] - param_1[1]) * (pfVar10[1] - param_1[1]) +
          (*pfVar10 - *param_1) * (*pfVar10 - *param_1) +
          (pfVar10[2] - param_1[2]) * (pfVar10[2] - param_1[2])) {
        fVar13 = 0.0;
      }
      else {
        lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),DAT_1466ad404 <= fVar13);
        if (DAT_1466ad404 <= fVar13) {
          fVar13 = DAT_1466ad40c;
          if (DAT_1466ad404 <= fVar3) {
LAB_142d6c1e4:
            fVar13 = 1.0;
          }
        }
        else {
          fVar13 = DAT_1466ad408;
          if (DAT_1466ad404 > fVar3) goto LAB_142d6c1e4;
        }
      }
      fVar14 = fVar14 + fVar13;
      if (DAT_1466ad3fc < fVar14) {
        return CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      }
      pfVar10 = pfVar10 + 5;
    } while (pfVar10 != pfVar1);
  }
  uVar5 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  lVar8 = FUN_142d5eba0();
  iVar4 = *(int *)(lVar8 + 7000);
  uVar7 = iVar4 + 1;
  uVar9 = (ulonglong)uVar7;
  *(uint *)(lVar8 + 7000) = uVar7;
  if (*(int *)(lVar8 + 0x1b5c) < (int)uVar7) {
    uVar9 = FUN_142d6db20(lVar8 + 0x1150,iVar4);
  }
  lVar11 = *(longlong *)(lVar8 + 0x1b50);
  if (*(longlong *)(lVar8 + 0x1b50) == 0) {
    lVar11 = lVar8 + 0x1150;
  }
  puVar2 = (undefined8 *)(lVar11 + (longlong)iVar4 * 0x14);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  *(undefined4 *)(lVar11 + 0x10 + (longlong)iVar4 * 0x14) = 0;
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 142d6c2c0 FUN_142d6c2c0 body=155 status=ok
// SIG undefined FUN_142d6c2c0(void)

void FUN_142d6c2c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x188);
    iVar2 = *(int *)(param_1 + 400);
    lVar3 = *(longlong *)(param_1 + 0x198);
    *(int *)(param_1 + 400) = iVar2 + 1;
    if (*(int *)(param_1 + 0x194) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_2;
    *(undefined8 *)(param_1 + 0x198) =
         *(undefined8 *)(*plVar1 + -8 + (longlong)*(int *)(param_1 + 400) * 8);
    FUN_142d6f3f0(param_1);
    if (lVar3 != 0) {
      FUN_142d6cea0(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 142d6c360 FUN_142d6c360 body=559 status=ok
// SIG undefined FUN_142d6c360(void)

ulonglong FUN_142d6c360(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  lVar3 = param_1[2];
  lVar4 = FUN_142c71f10();
  uVar5 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if ((uVar5 != 0) && ((*(byte *)(uVar5 + 0xb1c) & 8) != 0)) goto LAB_142d6c3ff;
  if (*(longlong *)(lVar3 + 0x120) == 0) {
LAB_142d6c3ce:
    uVar5 = FUN_142d63780(param_1);
    if (((char)uVar5 != '\0') &&
       ((uVar5 = *(ulonglong *)(lVar3 + 0x120), uVar5 == 0 ||
        (*(float *)(uVar5 + 0x90) < *(float *)((longlong)param_1 + 0x4ec))))) {
      return 1;
    }
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 0x4d4);
    if (cVar1 == '\0') {
      uVar5 = FUN_142d63780(param_1);
      if (((char)uVar5 != '\0') ||
         ((lVar4 != 0 &&
          (*(float *)(lVar4 + 0x1b0) <= *(float *)(lVar3 + 0x104) &&
           *(float *)(lVar3 + 0x104) != *(float *)(lVar4 + 0x1b0))))) {
        uVar5 = FUN_142c84e30(param_1,0,1);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x1ac) = 0;
        }
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x120) + 0x94);
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            *(undefined1 *)((longlong)param_1 + 0x4d4) = 3;
            uVar5 = *(ulonglong *)(lVar3 + 0x120);
            if (*(char *)(uVar5 + 0x8c) != '\0') {
              FUN_142d5d0c0(param_1);
              *(undefined1 *)(param_1 + 0x9b) = 3;
              uVar5 = FUN_142c76980(param_1);
            }
          }
          else {
            if (iVar2 == 2) {
              *(undefined1 *)((longlong)param_1 + 0x4d4) = 1;
              return 1;
            }
            if (iVar2 == 3) {
              *(undefined1 *)((longlong)param_1 + 0x4d4) = 2;
              return 1;
            }
          }
        }
      }
      goto LAB_142d6c3ff;
    }
    if (cVar1 == '\x01') {
      return 1;
    }
    if (cVar1 == '\x02') {
      *(undefined1 *)((longlong)param_1 + 0x4d4) = 3;
    }
    else if (cVar1 != '\x03') goto LAB_142d6c3ce;
    uVar5 = FUN_142d63780(param_1);
    if ((((char)uVar5 != '\0') || (lVar4 == 0)) ||
       (*(float *)(lVar4 + 0x1b0) <= *(float *)(lVar3 + 0x104))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x120) >> 8),
                      *(float *)(*(longlong *)(lVar3 + 0x120) + 0x90) <
                      *(float *)((longlong)param_1 + 0x4ec));
    }
    *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
    if (*(char *)(lVar3 + 0x100) != '\0') {
      uVar6 = (**(code **)(*param_1 + 0xa0))(param_1,1);
      uVar6 = FUN_142d50d30(lVar3 + 0xe8,uVar6);
      uVar5 = FUN_142c7be60(param_1,uVar6,lVar3 + 0x108,0x3f800000,1,*(undefined4 *)(lVar3 + 0xe0),0
                            ,1);
    }
  }
LAB_142d6c3ff:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142d6c590 FUN_142d6c590 body=444 status=ok
// SIG undefined FUN_142d6c590(void)

void FUN_142d6c590(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  iVar6 = FUN_14233f450();
  if (iVar6 == 3) {
    lVar9 = *(longlong *)(param_1 + 0x180);
    lVar10 = (longlong)*(int *)(param_1 + 0x188) * 0xf8 + lVar9;
    for (; lVar9 != lVar10; lVar9 = lVar9 + 0xf8) {
      FUN_142d594f0(lVar9,1);
    }
    lVar9 = *(longlong *)(param_1 + 400);
    lVar10 = (longlong)*(int *)(param_1 + 0x198) * 0xf8 + lVar9;
    for (; lVar9 != lVar10; lVar9 = lVar9 + 0xf8) {
      if (*(longlong *)(lVar9 + 8) != 0) {
        if (*(longlong *)(lVar9 + 200) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(*(longlong *)(lVar9 + 200) + 0x118);
        }
        uVar11 = FUN_142c98860(*(longlong *)(lVar9 + 8) + 0x40,uVar8);
        FUN_14246fd50(lVar9 + 0x1c,uVar11);
        FUN_14246fd70(lVar9 + 0x94);
        if (((*(char *)(lVar9 + 0xf2) == '\0') && (*(longlong *)(lVar9 + 8) != 0)) &&
           (*(char *)(*(longlong *)(lVar9 + 8) + 0x7e) != '\0')) {
          fVar1 = *(float *)(lVar9 + 0xa0);
          if (fVar1 < *(float *)(lVar9 + 0xd4)) {
            if (fVar1 < *(float *)(lVar9 + 0xd0) || fVar1 == *(float *)(lVar9 + 0xd0)) {
              *(undefined4 *)(lVar9 + 0xa0) = *(undefined4 *)(lVar9 + 0x14);
            }
          }
          else {
            fVar1 = *(float *)(lVar9 + 0x20);
            *(float *)(lVar9 + 0xa0) = fVar1;
            if (*(float *)(lVar9 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar9 + 0x14)) {
              *(undefined1 *)(lVar9 + 0xee) = 1;
            }
          }
          FUN_142d75970(lVar9);
        }
      }
    }
    bVar4 = false;
    *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
    iVar6 = *(int *)(param_1 + 0x29c);
    iVar7 = *(int *)(param_1 + 0x290) + -1;
    lVar9 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar10 = lVar9 << 4;
      bVar4 = false;
      do {
        lVar2 = *(longlong *)(param_1 + 0x288);
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar3 + 0x40))(), cVar5 == '\0')) {
          bVar4 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar6 = *(int *)(param_1 + 0x29c);
    }
    *(int *)(param_1 + 0x29c) = iVar6 + -1;
    if (bVar4) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x288),0)
      ;
      return;
    }
  }
  return;
}



// FUNCTION 142d6c750 FUN_142d6c750 body=91 status=ok
// SIG undefined FUN_142d6c750(void)

void FUN_142d6c750(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x14);
  if (fVar3 <= 0.0) {
    fVar3 = 1.0;
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xa0) / fVar3;
  }
  if (fVar1 < param_3) {
    fVar2 = fVar3 * param_2 + *(float *)(param_1 + 0xa0);
    fVar3 = fVar3 * param_3 + *(float *)(param_1 + 0x14);
    if (fVar3 <= fVar2) {
      fVar2 = fVar3;
    }
    FUN_142d6f560(fVar1,fVar2,0);
    return;
  }
  return;
}



// FUNCTION 142d6c7b0 FUN_142d6c7b0 body=216 status=ok
// SIG undefined FUN_142d6c7b0(void)

void FUN_142d6c7b0(byte *param_1,float param_2,float param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    cVar2 = FUN_142d63b40(lVar3,param_1);
    if (cVar2 != '\0') {
      bVar1 = *param_1;
      if ((int)(uint)bVar1 < *(int *)(lVar3 + 0x188)) {
        lVar3 = (ulonglong)bVar1 * 0xf8 + *(longlong *)(lVar3 + 0x180);
      }
      else {
        lVar3 = (longlong)(int)((uint)bVar1 - *(int *)(lVar3 + 0x188)) * 0xf8 +
                *(longlong *)(lVar3 + 400);
      }
      fVar5 = *(float *)(lVar3 + 0x20) - *(float *)(lVar3 + 0x14);
      if (fVar5 <= 0.0) {
        fVar5 = 1.0;
        fVar4 = 1.0;
      }
      else {
        fVar4 = *(float *)(lVar3 + 0xa0) / fVar5;
      }
      if (fVar4 < param_3) {
        fVar4 = fVar5 * param_2 + *(float *)(lVar3 + 0xa0);
        fVar5 = fVar5 * param_3 + *(float *)(lVar3 + 0x14);
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
        FUN_142d6f560(lVar3,fVar4,0);
      }
    }
  }
  return;
}



// FUNCTION 142d6c890 FUN_142d6c890 body=129 status=ok
// SIG undefined FUN_142d6c890(void)

undefined8 *
FUN_142d6c890(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1407c3030(param_4);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  else {
    uVar1 = param_4[1];
    *param_2 = *param_4;
    param_2[1] = uVar1;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_4 + 2);
  }
  return param_2;
}



// FUNCTION 142d6c920 FUN_142d6c920 body=82 status=ok
// SIG undefined FUN_142d6c920(void)

void FUN_142d6c920(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x225) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    plVar2 = (longlong *)FUN_142d5ed40(lVar1);
    if (plVar2 != (longlong *)0x0) {
      *(undefined1 *)(param_1 + 0x225) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142d6c965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x278))(plVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142d6c980 FUN_142d6c980 body=585 status=ok
// SIG undefined FUN_142d6c980(void)

void FUN_142d6c980(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  
  lVar1 = param_1 + 0x1038;
  if (*(longlong *)(param_1 + 0x1138) != 0) {
    uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x1138),0,0);
    *(undefined8 *)(param_1 + 0x1138) = uVar6;
  }
  puVar2 = (uint *)(param_1 + 0x1140);
  uVar5 = *puVar2;
  if (uVar5 != 0) {
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation(lVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar11;
        lVar10 = *(longlong *)(param_1 + 0x1138);
        if (*(longlong *)(param_1 + 0x1138) == 0) {
          lVar10 = lVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar10 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_64 = 1;
    puStack_38 = (uint *)(param_1 + 0x1010);
    local_68 = 0;
    iVar3 = *(int *)(param_1 + 0x1028);
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)(param_1 + 0x1020);
      if (*(uint **)(param_1 + 0x1020) == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar5 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar10 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_142d6cacf;
        uVar5 = puVar13[lVar10 + 1];
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
LAB_142d6cacf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar10 = *(longlong *)(param_1 + 0x1000);
        if (*(longlong *)(param_1 + 0x1000) == 0) {
          lVar10 = param_1;
        }
        lVar10 = lVar10 + (longlong)iStack_2c * 0x20;
        uVar5 = GetTypeHash(lVar10);
        uVar5 = uVar5 & *puVar2 - 1;
        *(uint *)(lVar10 + 0x1c) = uVar5;
        lVar7 = *(longlong *)(param_1 + 0x1138);
        if (*(longlong *)(param_1 + 0x1138) == 0) {
          lVar7 = lVar1;
        }
        *(undefined4 *)(lVar10 + 0x18) =
             *(undefined4 *)(lVar7 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4);
        lVar10 = *(longlong *)(param_1 + 0x1138);
        if (*(longlong *)(param_1 + 0x1138) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4) = iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 142d6cbd0 FUN_142d6cbd0 body=45 status=ok
// SIG undefined FUN_142d6cbd0(void)

void FUN_142d6cbd0(longlong param_1)

{
  if (*(char *)(param_1 + 0xf3) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xf4) != '\0') {
    FUN_142d594f0(param_1,0);
    return;
  }
  FUN_142d63220(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 200),1);
  return;
}



// FUNCTION 142d6cc00 FUN_142d6cc00 body=79 status=ok
// SIG undefined FUN_142d6cc00(void)

void FUN_142d6cc00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 8))();
  iVar1 = DAT_146b32128;
  lVar2 = (longlong)DAT_146b32128;
  DAT_146b32128 = DAT_146b32128 + 1;
  if (DAT_146b3212c < DAT_146b32128) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b32120,iVar1);
  }
  *(longlong **)(DAT_146b32120 + lVar2 * 8) = param_1;
  return;
}



// FUNCTION 142d6cc50 FUN_142d6cc50 body=585 status=ok
// SIG undefined FUN_142d6cc50(void)

undefined8 FUN_142d6cc50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 local_res10;
  
  if (DAT_1466ad424 == 0) {
    return 0;
  }
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  uVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,lVar2,1);
  lVar2 = FUN_142d5eab0(uVar3);
  if (lVar2 == 0) {
    return 0;
  }
  iVar9 = *(int *)(lVar2 + 0x870);
  plVar6 = *(longlong **)(lVar2 + 0x868);
  if (*(longlong **)(lVar2 + 0x868) == (longlong *)0x0) {
    plVar6 = (longlong *)(lVar2 + 0x668);
  }
  plVar8 = plVar6;
  while( true ) {
    if (plVar8 == plVar6 + iVar9) {
      return 0;
    }
    if ((longlong *)*plVar8 == param_1) break;
    plVar8 = plVar8 + 1;
  }
  iVar7 = (int)((longlong)plVar8 - (longlong)plVar6 >> 3);
  if (iVar7 < 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x870) <= iVar7) {
    return 0;
  }
  iVar1 = (iVar9 - iVar7) + -1;
  if (0 < iVar1) {
    iVar1 = 1;
  }
  if (iVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(plVar6 + iVar7,plVar6 + (iVar9 - iVar1),(longlong)iVar1 << 3);
    iVar9 = *(int *)(lVar2 + 0x870);
  }
  *(int *)(lVar2 + 0x870) = iVar9 + -1;
  FUN_142d6dbc0();
  iVar9 = *(int *)(lVar2 + 0x660);
  *(int *)(lVar2 + 0x660) = iVar9 + 1;
  if (*(int *)(lVar2 + 0x664) < iVar9 + 1) {
    TArray<FChildZOrder,TInlineAllocator<64,FDefaultAllocator>_>::ResizeGrow(lVar2 + 0x458,iVar9);
  }
  lVar5 = *(longlong *)(lVar2 + 0x658);
  if (*(longlong *)(lVar2 + 0x658) == 0) {
    lVar5 = lVar2 + 0x458;
  }
  *(longlong **)(lVar5 + (longlong)iVar9 * 8) = param_1;
  if ((char)param_1[0xe4] != '\0') {
    FWeakObjectPtr::operator=(&local_res10,param_1);
    lVar5 = param_1[0xe5];
    if (*(int *)(lVar2 + 0x880) != *(int *)(lVar2 + 0x8ac)) {
      lVar4 = *(longlong *)(lVar2 + 0x8b8);
      if (*(longlong *)(lVar2 + 0x8b8) == 0) {
        lVar4 = lVar2 + 0x8b0;
      }
      iVar9 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                               (longlong)*(int *)(lVar2 + 0x8c0) - 1U) * 4);
      if (iVar9 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)(lVar2 + 0x878));
          if (*plVar6 == lVar5) {
            if (iVar9 != -1) goto LAB_142d6ce32;
            break;
          }
          iVar9 = (int)plVar6[3];
        } while (iVar9 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_142d6ce32:
    TArray<TWeakObjectPtr<AShipCharacter,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    RemoveSingleSwap(plVar6 + 1,&local_res10,CONCAT71((int7)((ulonglong)plVar6 >> 8),1));
    local_res10 = 0;
    param_1[0xe5] = 0;
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
  FUN_142359580(param_1);
  return 1;
}



// FUNCTION 142d6cea0 FUN_142d6cea0 body=179 status=ok
// SIG undefined FUN_142d6cea0(void)

void FUN_142d6cea0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
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
      lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
        FUN_142dd6230(lVar3,param_2);
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}



// FUNCTION 142d6cf60 FUN_142d6cf60 body=179 status=ok
// SIG undefined FUN_142d6cf60(void)

void FUN_142d6cf60(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar3 = *(int *)(param_1 + 0xa08);
    iVar2 = (iVar3 - param_2) - param_3;
    if (param_3 <= iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa00);
      if (*(longlong *)(param_1 + 0xa00) == 0) {
        lVar1 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 0x14),
                 (void *)(lVar1 + (longlong)(iVar3 - iVar2) * 0x14),(longlong)iVar2 * 0x14);
      iVar3 = *(int *)(param_1 + 0xa08);
    }
    *(int *)(param_1 + 0xa08) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_142d6dc60(param_1);
    }
  }
  return;
}



// FUNCTION 142d6d020 FUN_142d6d020 body=80 status=ok
// SIG undefined FUN_142d6d020(void)

void FUN_142d6d020(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142d6d0c0(lVar2 + 0x3d0,param_2,lVar2 + 0x578);
    }
  }
  return;
}



// FUNCTION 142d6d070 FUN_142d6d070 body=80 status=ok
// SIG undefined FUN_142d6d070(void)

void FUN_142d6d070(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142d6d0c0(lVar2 + 0x3d0,param_2,lVar2 + 0x568);
    }
  }
  return;
}



// FUNCTION 142d6d0c0 FUN_142d6d0c0 body=105 status=ok
// SIG undefined FUN_142d6d0c0(void)

void FUN_142d6d0c0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  iVar1 = FUN_142d5e490(param_3,local_res10);
  if (iVar1 != -1) {
    iVar2 = (int)param_3[1];
    iVar3 = (iVar2 - iVar1) + -1;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_3 + (longlong)iVar1 * 8),
                 (void *)(*param_3 + (longlong)(iVar1 + 1) * 8),(longlong)iVar3 << 3);
      iVar2 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar2 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_3);
    return;
  }
  return;
}



// FUNCTION 142d6d130 FUN_142d6d130 body=12 status=ok
// SIG undefined FUN_142d6d130(void)

void FUN_142d6d130(longlong param_1,undefined8 param_2)

{
  FUN_142d6d0c0(param_1,param_2,param_1 + 0x198);
  return;
}



// FUNCTION 142d6d140 FUN_142d6d140 body=215 status=ok
// SIG undefined FUN_142d6d140(void)

void FUN_142d6d140(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    plVar6 = *(longlong **)(param_1 + 0x1c8);
    plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x1d0) * 0x13;
    if (plVar6 != plVar5) {
      while (*plVar6 != param_2) {
        plVar6 = plVar6 + 0x13;
        if (plVar6 == plVar5) {
          return;
        }
      }
      uVar2 = FUN_142e1b840();
      lVar3 = UStruct::FindPropertyByName(uVar2,param_3);
      if (lVar3 != 0) {
        lVar4 = UMulticastDelegateProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar3 = (longlong)*(int *)(lVar3 + 0x44) + (longlong)plVar6, lVar3 != 0)) {
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar3,param_4);
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d6d220 FUN_142d6d220 body=433 status=ok
// SIG undefined FUN_142d6d220(void)

void FUN_142d6d220(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_2 == 0) {
    iVar9 = *(int *)(param_1 + 0x1b0) + -1;
    if (-1 < iVar9) {
      lVar10 = (longlong)iVar9 << 4;
      lVar11 = lVar10;
      do {
        lVar1 = *(longlong *)(param_1 + 0x1a8);
        lVar6 = *(longlong *)(lVar10 + lVar1);
        if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x94) & 2) != 0)) {
LAB_142d6d2cd:
          iVar5 = *(int *)(param_1 + 0x1b0);
          iVar4 = (iVar5 - iVar9) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar11 + lVar1),(void *)((longlong)(iVar5 - iVar4) * 0x10 + lVar1),
                       (longlong)iVar4 << 4);
            iVar5 = *(int *)(param_1 + 0x1b0);
          }
          *(int *)(param_1 + 0x1b0) = iVar5 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink((longlong *)(param_1 + 0x1a8));
        }
        else {
          uVar3 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar3 < (int)DAT_1469e91c4) {
            uVar8 = uVar3 & 0xffff;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0xffff;
              uVar8 = uVar8 - 0x10000;
            }
            lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)uVar8 * 0x18;
          }
          else {
            lVar6 = 0;
          }
          if (((byte)((uint)*(undefined4 *)(lVar6 + 8) >> 0x1d) & 1) != 0) goto LAB_142d6d2cd;
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -0x10;
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) {
          return;
        }
      } while( true );
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x1a8);
    iVar9 = *(int *)(param_1 + 0x1b0);
    plVar7 = plVar2;
    if (plVar2 != plVar2 + (longlong)iVar9 * 2) {
      while (*plVar7 != param_2) {
        plVar7 = plVar7 + 2;
        if (plVar7 == plVar2 + (longlong)iVar9 * 2) {
          return;
        }
      }
      iVar5 = (int)((longlong)plVar7 - (longlong)plVar2 >> 4);
      if (iVar5 != -1) {
        iVar4 = (iVar9 - iVar5) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar2 + (longlong)iVar5 * 2,plVar2 + (longlong)(iVar9 - iVar4) * 2,
                     (longlong)iVar4 << 4);
          iVar9 = *(int *)(param_1 + 0x1b0);
        }
        *(int *)(param_1 + 0x1b0) = iVar9 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink((longlong *)(param_1 + 0x1a8));
      }
    }
  }
  return;
}



// FUNCTION 142d6d3e0 RemoveSingleSwap body=196 status=ok
// SIG undefined RemoveSingleSwap(void)

undefined8
TArray<TWeakObjectPtr<AShipCharacter,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar7 = lVar2;
  while( true ) {
    if (lVar7 == lVar2 + (longlong)(int)lVar3 * 8) {
      return 0;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,param_2);
    if (cVar4 != '\0') break;
    lVar7 = lVar7 + 8;
  }
  iVar6 = (int)(lVar7 - lVar2 >> 3);
  if (iVar6 == -1) {
    return 0;
  }
  iVar1 = (int)param_1[1];
  iVar5 = (iVar1 - iVar6) + -1;
  if (0 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar6 * 8),
               (void *)(*param_1 + (longlong)(iVar1 - iVar5) * 8),(longlong)iVar5 << 3);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 != '\0') {
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
  }
  return 1;
}



// FUNCTION 142d6d4b0 FUN_142d6d4b0 body=70 status=ok
// SIG undefined FUN_142d6d4b0(void)

void FUN_142d6d4b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_2 + 0x30);
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x25] == '\x03')) {
      (**(code **)(*plVar1 + 0xdc0))();
    }
    FUN_14245cc40(param_1,param_2);
  }
  return;
}



// FUNCTION 142d6d500 FUN_142d6d500 body=160 status=ok
// SIG undefined FUN_142d6d500(void)

void FUN_142d6d500(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0xa0);
  if ((fVar1 <= *(float *)(param_1 + 0x14)) && (*(float *)(param_1 + 0x14) < param_2)) {
    FUN_142d676f0();
    fVar1 = *(float *)(param_1 + 0xa0);
  }
  fVar2 = *(float *)(param_1 + 0x20);
  if ((fVar1 < fVar2) && (fVar2 <= param_2)) {
    FUN_142d67660(param_1);
    fVar1 = *(float *)(param_1 + 0xa0);
    fVar2 = *(float *)(param_1 + 0x20);
  }
  if ((fVar2 <= fVar1) && (param_2 < fVar2)) {
    FUN_142d67810(param_1);
    fVar1 = *(float *)(param_1 + 0xa0);
  }
  if ((*(float *)(param_1 + 0x14) < fVar1) && (param_2 <= *(float *)(param_1 + 0x14))) {
    FUN_142d67540(param_1);
  }
  *(float *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 142d6d5a0 FUN_142d6d5a0 body=92 status=ok
// SIG undefined FUN_142d6d5a0(void)

void FUN_142d6d5a0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xf0) == param_2) {
    *(char *)(param_1 + 0xf0) = param_2;
    return;
  }
  if (param_2 != '\0') {
    FUN_142d675d0();
    *(char *)(param_1 + 0xf0) = param_2;
    return;
  }
  FUN_142d67780();
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return;
}



// FUNCTION 142d6d600 FUN_142d6d600 body=92 status=ok
// SIG undefined FUN_142d6d600(void)

void FUN_142d6d600(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xef) == param_2) {
    *(char *)(param_1 + 0xef) = param_2;
    return;
  }
  if (param_2 != '\0') {
    FUN_142d67930();
    *(char *)(param_1 + 0xef) = param_2;
    return;
  }
  FUN_142d678a0();
  *(undefined1 *)(param_1 + 0xef) = 0;
  return;
}



// FUNCTION 142d6d660 FUN_142d6d660 body=53 status=ok
// SIG undefined FUN_142d6d660(void)

void FUN_142d6d660(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  
  puVar5 = (undefined4 *)FGuid::NewGuid(local_18);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  *(undefined4 *)(param_1 + 0x1d4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d8) = uVar3;
  *(undefined4 *)(param_1 + 0x1dc) = uVar4;
  FUN_142d751d0(param_1);
  return;
}



// FUNCTION 142d6d6a0 FUN_142d6d6a0 body=18 status=ok
// SIG undefined FUN_142d6d6a0(void)

void FUN_142d6d6a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x224) = 0;
  return;
}



// FUNCTION 142d6d6c0 FUN_142d6d6c0 body=194 status=ok
// SIG undefined FUN_142d6d6c0(void)

void FUN_142d6d6c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 == (longlong *)0x0) {
LAB_142d6d6fc:
    uVar4 = 0;
  }
  else {
    lVar1 = plVar2[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      plVar2 = *(longlong **)(param_1 + 200);
      if (lVar1 == 0) goto LAB_142d6d6fc;
    }
    uVar4 = *(undefined4 *)(lVar1 + 0x790);
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  if (((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(*plVar2 + 0x260))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar3 = plVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar2 != plVar3) {
      do {
        if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar2 + 0x11);
          return;
        }
        plVar2 = plVar2 + 0x13;
      } while (plVar2 != plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 142d6d790 FUN_142d6d790 body=113 status=ok
// SIG undefined FUN_142d6d790(void)

void FUN_142d6d790(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    cVar3 = FUN_142d63b40(lVar2,param_1);
    if (cVar3 != '\0') {
      bVar1 = *param_1;
      if (*(int *)(lVar2 + 0x188) <= (int)(uint)bVar1) {
        FUN_142d6d6c0((longlong)(int)((uint)bVar1 - *(int *)(lVar2 + 0x188)) * 0xf8 +
                      *(longlong *)(lVar2 + 400));
        return;
      }
      FUN_142d6d6c0((ulonglong)bVar1 * 0xf8 + *(longlong *)(lVar2 + 0x180));
    }
  }
  return;
}



// FUNCTION 142d6d810 FUN_142d6d810 body=281 status=ok
// SIG undefined FUN_142d6d810(void)

void FUN_142d6d810(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  byte local_28 [8];
  longlong local_20;
  int local_18;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_142e1a5a0();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
    if (lVar3 != 0) {
      local_28[0] = 0xff;
      local_20 = 0;
      local_18 = 0;
      FUN_142d63500(lVar3,local_28,param_2);
      if (local_20 != 0) {
        iVar1 = *(int *)(local_20 + 0x188);
        if ((int)(uint)local_28[0] < iVar1) {
          piVar5 = (int *)((ulonglong)local_28[0] * 0xf8 + *(longlong *)(local_20 + 0x180));
          if (local_18 != *piVar5) {
            return;
          }
          if (*(longlong *)(piVar5 + 2) == 0) {
            return;
          }
          iVar4 = (uint)local_28[0] - iVar1;
        }
        else {
          iVar4 = (uint)local_28[0] - iVar1;
          if (*(int *)(local_20 + 0x198) <= iVar4) {
            return;
          }
          piVar5 = (int *)((longlong)iVar4 * 0xf8 + *(longlong *)(local_20 + 400));
          if (local_18 != *piVar5) {
            return;
          }
          if (*(longlong *)(piVar5 + 2) == 0) {
            return;
          }
        }
        if (iVar1 <= (int)(uint)local_28[0]) {
          FUN_142d6d6c0((longlong)iVar4 * 0xf8 + *(longlong *)(local_20 + 400));
          return;
        }
        FUN_142d6d6c0((ulonglong)local_28[0] * 0xf8 + *(longlong *)(local_20 + 0x180));
      }
    }
  }
  return;
}



// FUNCTION 142d6d930 FUN_142d6d930 body=164 status=ok
// SIG undefined FUN_142d6d930(void)

void FUN_142d6d930(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x1000);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x1000);
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
        *(void **)((longlong)param_1 + 0x1000) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x1000) = uVar2;
  return;
}



// FUNCTION 142d6d9e0 FUN_142d6d9e0 body=166 status=ok
// SIG undefined FUN_142d6d9e0(void)

void FUN_142d6d9e0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xa00);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x14);
    pvVar1 = *(void **)((longlong)param_1 + 0xa00);
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
        *(void **)((longlong)param_1 + 0xa00) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x14);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xa00) = uVar2;
  return;
}



// FUNCTION 142d6da90 FUN_142d6da90 body=132 status=ok
// SIG undefined FUN_142d6da90(void)

void FUN_142d6da90(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1008);
  iVar2 = 0x80;
  if (0x80 < uVar1) {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x100c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
    iVar2 = (int)(uVar3 >> 5);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x100c) = iVar2;
  FUN_142d6d930(param_1,param_2,iVar2,0x20);
  return;
}



// FUNCTION 142d6db20 FUN_142d6db20 body=152 status=ok
// SIG undefined FUN_142d6db20(void)

void FUN_142d6db20(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa08);
  iVar4 = 0x80;
  if (0x80 < uVar1) {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xa0c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x14,0);
    iVar4 = (int)(uVar3 / 0x14);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xa0c) = iVar4;
  FUN_142d6d9e0(param_1,param_2,iVar4,0x14);
  return;
}



// FUNCTION 142d6dbc0 FUN_142d6dbc0 body=159 status=ok
// SIG undefined FUN_142d6dbc0(void)

void FUN_142d6dbc0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x208);
  uVar3 = *(uint *)(param_1 + 0x20c);
  if (uVar2 < 0x41) {
    uVar2 = 0x40;
    goto LAB_142d6dc32;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x20c);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_142d6dc32;
    }
    if (uVar2 == 0) goto LAB_142d6dc32;
  }
  uVar2 = uVar3;
LAB_142d6dc32:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x20c) = uVar2;
    FUN_1405f0340(param_1,*(undefined4 *)(param_1 + 0x208),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 142d6dc60 FUN_142d6dc60 body=180 status=ok
// SIG undefined FUN_142d6dc60(void)

void FUN_142d6dc60(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa08);
  uVar4 = *(uint *)(param_1 + 0xa0c);
  uVar2 = 0x80;
  if ((((0x80 < uVar1) &&
       ((uVar2 = uVar4, 0x3fff < (ulonglong)((longlong)(int)(uVar4 - uVar1) * 0x14) ||
        ((int)(uVar1 * 3) < (int)(uVar4 * 2))))) && ((0x40 < uVar4 - uVar1 || (uVar1 == 0)))) &&
     (uVar2 = uVar1, 0 < (int)uVar1)) {
    uVar3 = FMemory::QuantizeSize((longlong)(int)uVar1 * 0x14,0);
    uVar4 = *(uint *)(param_1 + 0xa0c);
    uVar2 = (uint)(uVar3 / 0x14);
  }
  if (uVar2 == uVar4) {
    return;
  }
  *(uint *)(param_1 + 0xa0c) = uVar2;
  FUN_142d6d9e0(param_1,*(undefined4 *)(param_1 + 0xa08),uVar2,0x14);
  return;
}



// FUNCTION 142d6dd20 FUN_142d6dd20 body=113 status=ok
// SIG undefined FUN_142d6dd20(void)

void FUN_142d6dd20(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x100c)) {
    *(int *)(param_1 + 0x100c) = iVar1;
    FUN_142d6d930(param_1,*(undefined4 *)(param_1 + 0x1008),iVar1,0x20);
  }
  return;
}



// FUNCTION 142d6dda0 FUN_142d6dda0 body=130 status=ok
// SIG undefined FUN_142d6dda0(void)

void FUN_142d6dda0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x81) {
      iVar2 = 0x80;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x14,0);
      iVar2 = (int)(uVar1 / 0x14);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xa0c)) {
    *(int *)(param_1 + 0xa0c) = iVar2;
    FUN_142d6d9e0(param_1,*(undefined4 *)(param_1 + 0xa08),iVar2,0x14);
  }
  return;
}



// FUNCTION 142d6de30 FUN_142d6de30 body=43 status=ok
// SIG undefined FUN_142d6de30(void)

longlong FUN_142d6de30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 400;
  if (param_1 != 0) {
    while (*(char *)(param_1 + 0x180) == '\0') {
      param_1 = *(longlong *)(param_1 + 0x30);
      if (param_1 == 0) {
        return lVar1;
      }
    }
    lVar1 = param_1 + 400;
  }
  return lVar1;
}



// FUNCTION 142d6de60 FUN_142d6de60 body=512 status=ok
// SIG undefined FUN_142d6de60(void)

longlong FUN_142d6de60(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_res8;
  byte local_38;
  undefined7 uStack_37;
  ulonglong uStack_30;
  int local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = FUN_142e1a5a0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  uStack_30 = 0;
  local_28 = 0;
  local_38 = 0xff;
  local_res8 = param_2;
  FUN_142d61ef0(&local_res8,*(undefined8 *)(param_2 + 0x118),
                CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
  lVar3 = local_res8;
  FUN_142d63500(local_res8,&local_38,param_1);
  local_20 = CONCAT71(uStack_37,local_38);
  local_10 = CONCAT44(uStack_24,local_28);
  uStack_18 = uStack_30;
  if (uStack_30 != 0) {
    if ((int)(uint)local_38 < *(int *)(uStack_30 + 0x188)) {
      if (local_28 == *(int *)(*(longlong *)(uStack_30 + 0x180) + (ulonglong)local_38 * 0xf8)) {
        lVar6 = *(longlong *)(*(longlong *)(uStack_30 + 0x180) + 8 + (ulonglong)local_38 * 0xf8);
joined_r0x000142d6df81:
        if (lVar6 != 0) goto LAB_142d6dfaf;
      }
    }
    else {
      iVar2 = (uint)local_38 - *(int *)(uStack_30 + 0x188);
      if (iVar2 < *(int *)(uStack_30 + 0x198)) {
        lVar6 = (longlong)iVar2 * 0xf8;
        if (local_28 == *(int *)(*(longlong *)(uStack_30 + 400) + lVar6)) {
          lVar6 = *(longlong *)(*(longlong *)(uStack_30 + 400) + 8 + lVar6);
          goto joined_r0x000142d6df81;
        }
      }
    }
  }
  if (lVar3 != 0) {
    puVar4 = (ulonglong *)FUN_142d5bb30(lVar3,&local_38,*(undefined8 *)(param_1 + 0x50),0);
    local_20 = *puVar4;
    uStack_18 = puVar4[1];
    local_10 = puVar4[2];
  }
LAB_142d6dfaf:
  if (uStack_18 != 0) {
    uVar7 = (uint)(byte)local_20;
    if ((int)(uint)(byte)local_20 < *(int *)(uStack_18 + 0x188)) {
      lVar6 = *(longlong *)(uStack_18 + 0x180);
      uVar5 = local_20 & 0xff;
    }
    else {
      iVar2 = uVar7 - *(int *)(uStack_18 + 0x188);
      if (*(int *)(uStack_18 + 0x198) <= iVar2) {
        return 0;
      }
      lVar6 = *(longlong *)(uStack_18 + 400);
      uVar5 = (ulonglong)iVar2;
    }
    if (((int)local_10 == *(int *)(lVar6 + uVar5 * 0xf8)) &&
       (*(longlong *)(lVar6 + 8 + uVar5 * 0xf8) != 0)) {
      if ((int)uVar7 < *(int *)(lVar3 + 0x188)) {
        return (local_20 & 0xff) * 0xf8 + *(longlong *)(lVar3 + 0x180);
      }
      return (longlong)(int)(uVar7 - *(int *)(lVar3 + 0x188)) * 0xf8 + *(longlong *)(lVar3 + 400);
    }
  }
  return 0;
}



// FUNCTION 142d6e060 FUN_142d6e060 body=67 status=ok
// SIG undefined FUN_142d6e060(void)

void FUN_142d6e060(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dafbc0(lVar2 + 0x3d0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d6e0b0 FUN_142d6e0b0 body=67 status=ok
// SIG undefined FUN_142d6e0b0(void)

void FUN_142d6e0b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  if (param_1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142dbb5d0(lVar2 + 0x3d0,local_res10);
    }
  }
  return;
}



// FUNCTION 142d6e100 FUN_142d6e100 body=65 status=ok
// SIG undefined FUN_142d6e100(void)

void FUN_142d6e100(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x198) != 0) && (param_2 != 0)) {
    FUN_142dc73d0(param_2);
    FUN_142dd6b40(param_2,*(undefined8 *)(param_1 + 0x198));
  }
  return;
}



// FUNCTION 142d6e150 FUN_142d6e150 body=1181 status=ok
// SIG undefined FUN_142d6e150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d6e150(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  float local_168;
  float local_164;
  undefined4 local_160;
  undefined8 local_158 [2];
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [48];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar7 = FUN_142c71f10();
  plVar8 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,1);
  if ((((lVar7 != 0) && (param_1[3] != 0)) && (plVar8 != (longlong *)0x0)) &&
     ((0 < (int)plVar8[0x17f] && (*(longlong *)(param_1[2] + 0x120) != 0)))) {
    lVar7 = (**(code **)(*plVar8 + 0x6d0))
                      (plVar8,*(undefined8 *)(*(longlong *)(param_1[2] + 0x120) + 0x78),1);
    if (lVar7 != 0) {
      FUN_142c728d0(param_1);
      FUN_142699110(lVar7,local_e8,1,0);
      plVar8 = (longlong *)plVar8[0x23];
      if (plVar8 != (longlong *)0x0) {
        lVar9 = APostProcessVolume::GetPrivateStaticClass();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          if (param_3 != 0) {
            local_178 = 0;
            FUN_14223c850(plVar8,param_2,0,0);
            local_158[0] = 0;
            (**(code **)(*plVar8 + 0x838))(plVar8,param_3,0,1);
          }
          if (*(char *)((longlong)param_1 + 0x4cf) == '\0') {
            fVar17 = 1.0;
          }
          else {
            fVar17 = -1.0;
          }
          cVar1 = *(char *)((longlong)param_1 + 0x4ce);
          fVar14 = fVar17;
          if (cVar1 != '\x03') {
            fVar14 = 0.0;
          }
          fVar18 = fVar17;
          if (cVar1 != '\x02') {
            fVar18 = 0.0;
          }
          if (cVar1 != '\x01') {
            fVar17 = 0.0;
          }
          pfVar10 = (float *)FUN_142699110(lVar7,&local_128,1,0);
          local_148 = 0;
          local_140 = 0x3f800000;
          fVar2 = *pfVar10;
          fVar3 = pfVar10[1];
          fVar4 = pfVar10[2];
          fVar5 = pfVar10[3];
          fVar16 = fVar3 * fVar14 - fVar4 * fVar18;
          fVar13 = fVar4 * fVar17 - fVar2 * fVar14;
          fVar16 = fVar16 + fVar16;
          fVar12 = fVar2 * fVar18 - fVar3 * fVar17;
          fVar13 = fVar13 + fVar13;
          fVar12 = fVar12 + fVar12;
          local_164 = (fVar16 * fVar4 - fVar12 * fVar2) + fVar5 * fVar13 + fVar18;
          local_168 = (fVar12 * fVar3 - fVar13 * fVar4) + fVar5 * fVar16 + fVar17;
          if (1.0 < ABS((fVar13 * fVar2 - fVar16 * fVar3) + fVar5 * fVar12 + fVar14)) {
            local_168 = 1.0;
          }
          fVar17 = local_164 * local_164 + local_168 * local_168;
          if (1e-08 < fVar17) {
            auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
            fVar14 = auVar15._0_4_;
            fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
            fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
            local_168 = local_168 * fVar14;
            local_158[0] = CONCAT44(local_158[0]._4_4_,fVar14);
            local_164 = fVar14 * local_164;
          }
          fVar17 = local_168;
          local_160 = 0;
          fVar14 = -local_164;
          puVar11 = (undefined8 *)
                    FVector::RotateAngleAxis
                              (&local_168,local_158,*(float *)(param_1 + 0x9a) * 57.295776,
                               &local_148);
          local_11c = 0;
          local_128 = (undefined4)*puVar11;
          local_124 = (undefined4)((ulonglong)*puVar11 >> 0x20);
          local_160 = *(undefined4 *)(puVar11 + 1);
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0x3f800000;
          uStack_fc = 0;
          local_110 = 0;
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0x3f800000;
          local_120 = local_160;
          local_118 = fVar14;
          local_114 = fVar17;
          FQuat::FQuat(local_138,&local_128);
          FUN_14223d160(plVar8,local_138,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d6e5f0 FUN_142d6e5f0 body=805 status=ok
// SIG undefined FUN_142d6e5f0(void)

void FUN_142d6e5f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  LARGE_INTEGER local_res10;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  int local_80;
  double local_78;
  undefined8 local_70;
  char local_67;
  byte local_66;
  
  plVar3 = *(longlong **)(param_2 + 0x170);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar7 = (longlong *)FUN_142d5ed40(uVar6);
      if (plVar7 != (longlong *)0x0) {
        local_98 = (longlong *)0x0;
        local_90 = 0;
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_98,(char)param_1[0x3b]);
        fVar10 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x1f);
        fVar11 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x25);
        FUN_142bd2270(&local_88,param_1,param_2,0xffffffff);
LAB_142d6e700:
        if ((int)local_88[1] <= local_80) goto LAB_142d6e74e;
        if ((*(byte *)((longlong)local_88 + 0x156) & 1) != 0) goto LAB_142d6e74e;
        if ((0.0 <= local_78) &&
           (QueryPerformanceCounter(&local_res10),
           local_78 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))
        goto LAB_142d6e74e;
        bVar9 = true;
        do {
          if (!bVar9) {
            *(int *)(local_88 + 0x27) = local_80;
            if (local_98 == (longlong *)0x0) {
              return;
            }
            FMemory::Free();
            return;
          }
          lVar5 = (**(code **)(*plVar3 + 0x2a8))
                            (plVar3,((longlong)
                                     (*(int *)(*local_88 + 4 + (longlong)local_80 * 0xc) * 2) >> 1)
                                    + local_88[3]);
          iVar8 = 0;
          if (lVar5 != 0) {
            for (plVar7 = local_98; iVar8 = 0, plVar7 != local_98 + (longlong)(int)local_90 * 2;
                plVar7 = plVar7 + 2) {
              if (*plVar7 == lVar5) {
                iVar8 = (int)plVar7[1];
                break;
              }
            }
          }
          fVar12 = (float)iVar8;
          if ((local_66 & 2) == 0) {
            if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
LAB_142d6e7f9:
              sVar4 = local_70._4_2_;
              if (local_67 == '\0') {
                local_70 = CONCAT44(local_70._4_4_,(float)local_70 + fVar12);
              }
              else if (local_67 == '\x01') {
                if ((sVar4 == 0) || (fVar12 < (float)local_70)) {
LAB_142d6e834:
                  local_70 = CONCAT44(local_70._4_4_,fVar12);
                }
              }
              else if (local_67 == '\x02') {
                if (sVar4 == 0) goto LAB_142d6e834;
                if ((float)local_70 < fVar12) {
                  local_70 = CONCAT44(local_70._4_4_,fVar12);
                }
              }
              local_70._0_6_ = CONCAT24(sVar4 + 1,(float)local_70);
            }
            else {
              cVar1 = *(char *)((longlong)param_1 + 0x5a);
              if (cVar1 == '\0') {
                bVar9 = fVar12 < fVar10;
LAB_142d6e7f2:
                if (!bVar9) goto LAB_142d6e7f9;
              }
              else {
                if (cVar1 == '\x01') {
                  bVar9 = fVar11 < fVar12;
                  goto LAB_142d6e7f2;
                }
                if (((cVar1 == '\x02') && (fVar10 <= fVar12)) && (fVar12 <= fVar11))
                goto LAB_142d6e7f9;
              }
            }
            local_70 = CONCAT26(local_70._6_2_ + 1,(undefined6)local_70);
          }
          FUN_142bf3280(&local_88);
          if ((*(byte *)((longlong)local_88 + 0x156) & 1) != 0) goto LAB_142d6e700;
          local_80 = local_80 + 1;
          local_70 = 0;
          local_66 = local_66 & 0xfd | 1;
          if (local_80 < (int)local_88[1]) goto LAB_142d6e890;
LAB_142d6e74e:
          bVar9 = false;
        } while( true );
      }
    }
  }
  return;
LAB_142d6e890:
  do {
    uVar2 = *(uint *)(*local_88 + 4 + (longlong)local_80 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
  } while ((!bVar9) && (local_80 = local_80 + 1, local_80 < (int)local_88[1]));
  goto LAB_142d6e700;
}



// FUNCTION 142d6e940 FUN_142d6e940 body=53 status=ok
// SIG undefined FUN_142d6e940(void)

void FUN_142d6e940(longlong param_1,longlong param_2)

{
  FUN_142d524f0(param_2 + 0x68,param_1 + 0x528);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142d6e980 FUN_142d6e980 body=88 status=ok
// SIG undefined FUN_142d6e980(void)

void FUN_142d6e980(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(param_1 + 0x4d8);
  FUN_142d524f0(param_2 + 0x68,param_1 + 0x578);
  *(undefined8 *)(param_2 + 0x7c) = *(undefined8 *)(param_1 + 0x4dc);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x4e4);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142d6e9e0 FUN_142d6e9e0 body=664 status=ok
// SIG undefined FUN_142d6e9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d6e9e0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined1 local_208 [56];
  longlong local_1d0;
  undefined2 local_d8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_218 = param_6;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b33eb0) && (_Init_thread_header(&DAT_146b33eb0), DAT_146b33eb0 == -1))
  {
    FName::FName(&DAT_146b33ea8,L"ScriptedDeath",1);
    _Init_thread_footer(&DAT_146b33eb0);
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
  uVar2 = UScrollBox::GetPrivateStaticClass();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar2);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  cVar1 = FUN_1407c3030(plVar3 + 0x8d);
  if (cVar1 != '\0') {
    return;
  }
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_142e0a580();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar4 != 0) goto LAB_142d6ead8;
  }
  uVar2 = FUN_142e0a580();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
LAB_142d6ead8:
  if ((param_2 == (longlong *)0x0) || (lVar5 = (**(code **)(*param_2 + 0x668))(param_2), lVar5 == 0)
     ) {
    lVar5 = (**(code **)(*param_1 + 0x668))(param_1);
  }
  FUN_142dafbc0(plVar3 + 0x8d,&DAT_146b33ea8);
  FUN_142d0aa70(local_208,param_1,param_2,0);
  local_d8 = 0x101;
  local_1d0 = lVar5;
  fVar7 = (float)(**(code **)(*plVar3 + 0x408))(plVar3);
  FUN_142d32ae0(local_208,fVar7 * 100.0,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar6 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar6 = local_98;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142dbb5d0(plVar3 + 0x8d,&DAT_146b33ea8);
  local_220 = FUN_142d9cad0(local_218,0);
  local_228 = (undefined1 *)&param_5;
  FUN_142d6ed70(plVar3 + 0x7a,param_3,lVar4,param_4);
  return;
}



// FUNCTION 142d6ec80 FUN_142d6ec80 body=226 status=ok
// SIG undefined FUN_142d6ec80(void)

void FUN_142d6ec80(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  uVar2 = UScrollBox::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  if (lVar3 == 0) {
    return;
  }
  cVar1 = FUN_1407c3030(lVar3 + 0x3d0);
  if (cVar1 != '\0') {
    return;
  }
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_142e0a580();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar4 != 0) goto LAB_142d6ed1a;
  }
  uVar2 = FUN_142e0a580();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
LAB_142d6ed1a:
  uVar5 = FUN_142d9cad0(param_6,0);
  FUN_142d6ed70(lVar3 + 0x3d0,param_3,lVar4,param_4,&param_5,uVar5);
  return;
}



// FUNCTION 142d6ed70 FUN_142d6ed70 body=675 status=ok
// SIG undefined FUN_142d6ed70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d6ed70(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_48;
  undefined8 local_44;
  float local_3c;
  undefined1 local_28 [16];
  
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     ((((lVar7 = *(longlong *)(param_1 + 0x160), lVar7 != 0 ||
        (lVar7 = *(longlong *)(param_1 + 0x130), lVar7 != 0)) &&
       (*(longlong *)(param_1 + 0x168) != 0)) &&
      ((param_2 != 0 && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x118), lVar1 != 0))
      )))) {
    lVar2 = *(longlong *)(lVar1 + 0x168);
    if (lVar2 == 0) {
      uVar9 = (undefined4)DAT_1468b5da0;
      uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_c0 = (float)DAT_1468b5da8;
    }
    else {
      local_98 = *(float *)(lVar2 + 0x210);
      fStack_94 = *(float *)(lVar2 + 0x214);
      fStack_90 = *(float *)(lVar2 + 0x218);
      fStack_8c = *(float *)(lVar2 + 0x21c);
      auVar3._4_4_ = -(uint)(fStack_94 != *(float *)(lVar2 + 0x254));
      auVar3._0_4_ = -(uint)(local_98 != *(float *)(lVar2 + 0x250));
      auVar3._8_4_ = -(uint)(fStack_90 != *(float *)(lVar2 + 600));
      auVar3._12_4_ = -(uint)(fStack_8c != *(float *)(lVar2 + 0x25c));
      iVar5 = movmskps((int)lVar7,auVar3);
      if (iVar5 != 0) {
        *(float *)(lVar2 + 0x250) = local_98;
        *(float *)(lVar2 + 0x254) = fStack_94;
        *(float *)(lVar2 + 600) = fStack_90;
        *(float *)(lVar2 + 0x25c) = fStack_8c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_98,local_28);
        *(undefined8 *)(lVar2 + 0x260) = *puVar6;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar9 = (undefined4)*(undefined8 *)(lVar2 + 0x260);
      uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
      local_c0 = (float)*(undefined4 *)(lVar2 + 0x268);
    }
    local_c8 = CONCAT44(uVar10,uVar9);
    local_bc = local_c8;
    local_b4 = local_c0;
    FRotator::RotateVector(&local_c8,&local_b0,param_4);
    _guard_xfg_dispatch_icall_nop(&local_88,0,0x58);
    local_88 = *(undefined8 *)(param_1 + 0x168);
    local_60 = *param_4;
    local_58 = *(undefined4 *)(param_4 + 1);
    local_48 = -1;
    lVar7 = *(longlong *)(lVar1 + 0x168);
    if (lVar7 == 0) {
      local_c0 = (float)DAT_1468b5d98;
      puVar6 = &local_c8;
      local_c8 = _DAT_1468b5d90;
    }
    else {
      puVar6 = &local_bc;
      local_b4 = *(undefined4 *)(lVar7 + 0x228);
      local_bc = *(undefined8 *)(lVar7 + 0x220);
    }
    local_c0 = *(float *)(puVar6 + 1) - local_a8 * 100.0;
    local_44 = CONCAT44((float)((ulonglong)*puVar6 >> 0x20) - local_ac * 100.0,
                        (float)*puVar6 - local_b0 * 100.0);
    local_54 = param_6;
    local_80 = param_3;
    local_3c = local_c0;
    lVar7 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar8 = *(longlong **)(lVar1 + 0x4c0);
    }
    else {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar8 + 0x6d0))
                        (plVar8,*param_5,CONCAT71((int7)((ulonglong)(lVar7 + 0x88) >> 8),1));
      if (lVar7 != 0) {
        local_48 = (int)*(short *)(lVar7 + 4);
      }
    }
    FUN_142d6ae40(param_1,param_2,&local_88);
  }
  return;
}



// FUNCTION 142d6f020 FUN_142d6f020 body=309 status=ok
// SIG undefined FUN_142d6f020(void)

void FUN_142d6f020(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  plVar6 = *(longlong **)(param_1 + 0x30);
  uVar9 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x38) < plVar6) {
    uVar9 = uVar7;
  }
  iVar5 = DAT_146b3217c;
  if (uVar9 != 0) {
    do {
      plVar8 = (longlong *)*plVar6;
      if ((plVar8 != (longlong *)0x0) && ((int)plVar8[6] != iVar5)) {
        *(int *)(plVar8 + 6) = iVar5;
        (**(code **)(*plVar8 + 0x280))(plVar8,param_2,iVar5,param_3,0);
        iVar5 = DAT_146b3217c;
      }
      plVar6 = plVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar9);
  }
  plVar6 = *(longlong **)(param_1 + 0x40);
  plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x48) * 2;
  for (; plVar6 != plVar8; plVar6 = plVar6 + 2) {
    if ((*plVar6 != 0) &&
       (uVar3 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b, *(uint *)(param_3 + 4) = uVar3,
       fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000), fVar4 = fVar4 - (float)(int)fVar4,
       fVar4 < *(float *)(plVar6 + 1) || fVar4 == *(float *)(plVar6 + 1))) {
      plVar2 = (longlong *)*plVar6;
      uVar1 = *(undefined1 *)((longlong)plVar6 + 0xc);
      if ((int)plVar2[6] != iVar5) {
        *(int *)(plVar2 + 6) = iVar5;
        (**(code **)(*plVar2 + 0x280))(plVar2,param_2,iVar5,param_3,uVar1);
        iVar5 = DAT_146b3217c;
      }
    }
  }
  DAT_146b3217c = iVar5 + 1;
  return;
}



// FUNCTION 142d6f160 FUN_142d6f160 body=278 status=ok
// SIG undefined FUN_142d6f160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d6f160(LARGE_INTEGER param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_338 [32];
  LARGE_INTEGER local_318 [2];
  undefined1 local_308 [760];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  if (((*(int *)(param_1.QuadPart + 0x1dc) == 0 && *(int *)(param_1.QuadPart + 0x1d8) == 0) &&
      *(int *)(param_1.QuadPart + 0x1d4) == 0) && *(int *)(param_1.QuadPart + 0x1d0) == 0) {
    puVar5 = (undefined4 *)FGuid::NewGuid(local_318);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined8 *)(param_1.QuadPart + 0x1e0) = 0;
    *(undefined4 *)(param_1.QuadPart + 0x1d0) = uVar1;
    *(undefined4 *)(param_1.QuadPart + 0x1d4) = uVar2;
    *(undefined4 *)(param_1.QuadPart + 0x1d8) = uVar3;
    *(undefined4 *)(param_1.QuadPart + 0x1dc) = uVar4;
    FUN_142d751d0(param_1.QuadPart);
  }
  if (*(double *)(param_1.QuadPart + 0x1e0) == 0.0) {
    QueryPerformanceCounter(local_318);
    *(double *)(param_1.QuadPart + 0x1e0) =
         (double)local_318[0].QuadPart * DAT_1468b02f8 + 16777216.0;
    local_318[0] = param_1;
    if ((DAT_146aeb000 == '\0') &&
       (puVar6 = (undefined8 *)FUN_14218cc90(), puVar6 != &DAT_146aeaff8)) {
      DAT_146aeaff8 = *puVar6;
      DAT_146aeb000 = '\x01';
    }
    FUN_140ac3af0(local_308,L"game_instance_started",DAT_146aeaff8,local_318);
    FUN_14217f3d0(local_308);
  }
  return;
}



// FUNCTION 142d6f280 FUN_142d6f280 body=242 status=ok
// SIG undefined FUN_142d6f280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d6f280(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_338 [32];
  longlong local_318 [2];
  undefined1 local_308 [760];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  if ((*(double *)(param_1 + 0x1e0) != 0.0) &&
     (((*(int *)(param_1 + 0x1dc) != 0 || *(int *)(param_1 + 0x1d8) != 0) ||
      *(int *)(param_1 + 0x1d4) != 0) || *(int *)(param_1 + 0x1d0) != 0)) {
    local_318[0] = param_1;
    if ((DAT_146aeb000 == '\0') &&
       (puVar5 = (undefined8 *)FUN_14218cc90(), puVar5 != &DAT_146aeaff8)) {
      DAT_146aeaff8 = *puVar5;
      DAT_146aeb000 = '\x01';
    }
    FUN_140ac3af0(local_308,L"game_instance_stopped",DAT_146aeaff8,local_318);
    FUN_14217f3d0(local_308);
    FUN_14218b510();
    puVar6 = (undefined4 *)FGuid::NewGuid(local_318);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = uVar1;
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    *(undefined4 *)(param_1 + 0x1d8) = uVar3;
    *(undefined4 *)(param_1 + 0x1dc) = uVar4;
    FUN_142d751d0(param_1);
  }
  return;
}



// FUNCTION 142d6f380 FUN_142d6f380 body=98 status=ok
// SIG undefined FUN_142d6f380(void)

void FUN_142d6f380(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14244f490(param_1,0);
  if (lVar2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      FUN_142e57840(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 142d6f3f0 FUN_142d6f3f0 body=179 status=ok
// SIG undefined FUN_142d6f3f0(void)

void FUN_142d6f3f0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
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
      lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
        FUN_142dd6b40(lVar3,param_2);
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}



// FUNCTION 142d6f4b0 FUN_142d6f4b0 body=96 status=ok
// SIG undefined FUN_142d6f4b0(void)

void FUN_142d6f4b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3e0))(plVar1,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x208) + 0x3b0))(*(longlong **)(param_1 + 0x208),0);
  }
  *(longlong **)(param_1 + 0x208) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x3d0))(param_2,param_1);
  }
  return;
}



// FUNCTION 142d6f510 FUN_142d6f510 body=62 status=ok
// SIG undefined FUN_142d6f510(void)

undefined1 FUN_142d6f510(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142d6de60(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    FUN_142d6f560(lVar1,param_3,1);
    return 1;
  }
  return 0;
}



// FUNCTION 142d6f550 FUN_142d6f550 body=7 status=ok
// SIG undefined FUN_142d6f550(void)

void FUN_142d6f550(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf1) = param_2;
  return;
}



// FUNCTION 142d6f560 FUN_142d6f560 body=173 status=ok
// SIG undefined FUN_142d6f560(void)

void FUN_142d6f560(longlong param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 0xf3) == '\0') {
    return;
  }
  fVar8 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0xa0);
  if (fVar8 <= fVar7) {
    if ((0.0 < *(float *)(param_1 + 0x2c)) && (*(longlong *)(param_1 + 8) != 0)) {
      fVar7 = (1.0 - *(float *)(param_1 + 0x2c)) * fVar7;
      fVar2 = *(float *)(*(longlong *)(param_1 + 8) + 0x80);
      if (fVar7 <= fVar2) {
        fVar7 = fVar2;
      }
    }
    if (((*(longlong *)(param_1 + 8) != 0) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30), lVar3 != 0)) &&
       (*(char *)(lVar3 + 0x48) != '\0')) {
      fVar7 = (float)(int)fVar7;
    }
    if ((fVar8 <= param_2) && (fVar8 = fVar7, param_2 <= fVar7)) {
      fVar8 = param_2;
    }
  }
  *(float *)(param_1 + 0xa0) = fVar8;
  if (param_3 == '\0') {
    if (fVar1 != *(float *)(param_1 + 0xe0)) {
      return;
    }
    *(float *)(param_1 + 0xe0) = fVar8;
    return;
  }
  plVar4 = *(longlong **)(param_1 + 200);
  if (plVar4 == (longlong *)0x0) {
LAB_142d6d6fc:
    uVar6 = 0;
  }
  else {
    lVar3 = plVar4[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
      plVar4 = *(longlong **)(param_1 + 200);
      if (lVar3 == 0) goto LAB_142d6d6fc;
    }
    uVar6 = *(undefined4 *)(lVar3 + 0x790);
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar6;
  if (((plVar4 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(*plVar4 + 0x260))();
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1c8);
    plVar5 = plVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x1d0) * 0x13;
    if (plVar4 != plVar5) {
      do {
        if (*plVar4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) {
          FUN_142d57b90(param_1,plVar4 + 0x11);
          return;
        }
        plVar4 = plVar4 + 0x13;
      } while (plVar4 != plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 142d6f610 FUN_142d6f610 body=331 status=ok
// SIG undefined FUN_142d6f610(void)

void FUN_142d6f610(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x130);
  }
  if (param_2 != *(longlong *)(param_1 + 0x160)) {
    uVar4 = 0;
    *(longlong *)(param_1 + 0x160) = param_2;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    if (*(int *)(param_1 + 0x1a4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x198,0);
    }
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1a8,0);
    }
    lVar1 = *(longlong *)(param_1 + 0x160);
    if (lVar1 != 0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x30);
      uVar5 = (longlong)*(int *)(lVar1 + 0x38) & 0x1fffffffffffffff;
      if (puVar3 + *(int *)(lVar1 + 0x38) < puVar3) {
        uVar5 = uVar4;
      }
      uVar2 = uVar4;
      if (uVar5 != 0) {
        do {
          FUN_142d555d0(param_1,*puVar3,param_1 + 0x198);
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar2 != uVar5);
        lVar1 = *(longlong *)(param_1 + 0x160);
      }
      puVar3 = *(undefined8 **)(lVar1 + 0x40);
      uVar5 = (longlong)*(int *)(lVar1 + 0x48) & 0x1fffffffffffffff;
      if (puVar3 + *(int *)(lVar1 + 0x48) < puVar3) {
        uVar5 = uVar4;
      }
      if (uVar5 != 0) {
        do {
          FUN_142d555d0(param_1,*puVar3,param_1 + 0x1a8);
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 != uVar5);
      }
    }
  }
  return;
}



// FUNCTION 142d6f760 FUN_142d6f760 body=25 status=ok
// SIG undefined FUN_142d6f760(void)

void FUN_142d6f760(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 400) == 0) {
    *(undefined8 *)(param_1 + 0x188) = param_2;
    *(undefined8 *)(param_1 + 400) = param_3;
  }
  return;
}



// FUNCTION 142d6f780 FUN_142d6f780 body=508 status=ok
// SIG undefined FUN_142d6f780(void)

void FUN_142d6f780(longlong param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  if (*(char *)(param_1 + 0x1c0) != param_2) {
    *(char *)(param_1 + 0x1c0) = param_2;
    if (param_2 == '\0') {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UImpactFXManagerComponent::OnHit",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res8,pwVar4 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(param_1 + 0x118) + 0x280,param_1,local_res8);
    }
    else {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UImpactFXManagerComponent::OnHit",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(local_res18,pwVar4 + 2,1);
      lVar7 = *(longlong *)(param_1 + 0x118);
      plVar8 = (longlong *)(lVar7 + 0x280);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res18[0];
      local_res8 = 0;
      if ((local_res18[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_20);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
      iVar1 = *(int *)(lVar7 + 0x288);
      lVar6 = (longlong)iVar1;
      *(int *)(lVar7 + 0x288) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x28c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      lVar7 = *plVar8;
      *(undefined4 *)(lVar7 + lVar6 * 0x10) = local_28;
      *(undefined4 *)(lVar7 + 4 + lVar6 * 0x10) = local_24;
      *(longlong *)(lVar7 + 8 + lVar6 * 0x10) = local_20;
    }
    if ((*(char *)(param_1 + 0x1c1) != '\0') &&
       (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x168), plVar8 != (longlong *)0x0))
    {
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*plVar8 + 0x630))(plVar8,*(undefined1 *)(param_1 + 0x1c0));
      }
    }
  }
  return;
}



// FUNCTION 142d6f980 FUN_142d6f980 body=73 status=ok
// SIG undefined FUN_142d6f980(void)

void FUN_142d6f980(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142d6f610(lVar2 + 0x3d0,param_2);
    }
  }
  return;
}



// FUNCTION 142d6f9d0 FUN_142d6f9d0 body=39 status=ok
// SIG undefined FUN_142d6f9d0(void)

void FUN_142d6f9d0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0x224) = 0;
  if (((*(char *)(param_1 + 0x200) == param_2) ||
      (*(char *)(param_1 + 0x200) = param_2, param_2 == '\0')) ||
     (*(char *)(param_1 + 0x225) != '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0x225) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    plVar2 = (longlong *)FUN_142d5ed40(lVar1);
    if (plVar2 != (longlong *)0x0) {
      *(undefined1 *)(param_1 + 0x225) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142d6c965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x278))(plVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142d6fa00 FUN_142d6fa00 body=119 status=ok
// SIG undefined FUN_142d6fa00(void)

void FUN_142d6fa00(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    cVar2 = FUN_142d63b40(lVar3,param_1);
    if (cVar2 != '\0') {
      bVar1 = *param_1;
      if ((int)(uint)bVar1 < *(int *)(lVar3 + 0x188)) {
        lVar3 = (ulonglong)bVar1 * 0xf8 + *(longlong *)(lVar3 + 0x180);
      }
      else {
        lVar3 = (longlong)(int)((uint)bVar1 - *(int *)(lVar3 + 0x188)) * 0xf8 +
                *(longlong *)(lVar3 + 400);
      }
      FUN_142d6f560(lVar3,param_2,1);
    }
  }
  return;
}



// FUNCTION 142d6fa80 FUN_142d6fa80 body=61 status=ok
// SIG undefined FUN_142d6fa80(void)

void FUN_142d6fa80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0x188) = param_2;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x488);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x1a0) = uVar1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 142d6fac0 FUN_142d6fac0 body=524 status=ok
// SIG undefined FUN_142d6fac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d6fac0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  if ((*(longlong *)(param_1 + 0x288) == 0) && (*(longlong *)(param_1 + 0x168) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x120);
    if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
      return;
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x168);
    local_a8 = &LAB_142d543a8;
    uStack_a0 = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,uVar1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,(longlong *)(param_1 + 0x288),&local_98,0x800000);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 142d6fcd0 FUN_142d6fcd0 body=33 status=ok
// SIG undefined FUN_142d6fcd0(void)

undefined1 FUN_142d6fcd0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_141651650();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(param_1 + 200);
  }
  return uVar2;
}



// FUNCTION 142d6fd00 FUN_142d6fd00 body=112 status=ok
// SIG undefined FUN_142d6fd00(void)

void FUN_142d6fd00(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xf4) = 0;
  FUN_14246fd50(param_1 + 0x10,0);
  FUN_14246fd50(param_1 + 0x1c,0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_14246fd50(param_1 + 0x34,0);
  FUN_14246fd50(param_1 + 0x4c,0);
  FUN_14246fd50(param_1 + 0x58,0);
  FUN_14246fd50(param_1 + 100,0);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142d6fd70 FUN_142d6fd70 body=39 status=ok
// SIG undefined FUN_142d6fd70(void)

void FUN_142d6fd70(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_14245ee10();
  uVar1 = FUN_14164ab60();
  FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x1c8));
  return;
}



// FUNCTION 142d6fda0 FUN_142d6fda0 body=605 status=ok
// SIG undefined FUN_142d6fda0(void)

longlong FUN_142d6fda0(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                      undefined8 param_5,undefined8 *param_6,undefined8 *param_7,int param_8,
                      undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((param_2 == 0) || (param_4 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)(param_4 + 0x2f0) & 8) == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(param_4 + 0x118);
      if (lVar2 != 0) {
        lVar3 = UVoipListenerSynthComponent::GetPrivateStaticClass();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_38 = *param_3;
          local_30 = *(undefined4 *)(param_3 + 1);
          lVar2 = FUN_142d54ef0(param_1,param_2,&local_38,param_9,CONCAT44(uVar4,param_10),param_11,
                                param_12);
          if (lVar2 == 0) {
            return 0;
          }
          local_38 = *param_7;
          local_30 = *(undefined4 *)(param_7 + 1);
          local_28 = *param_6;
          local_20 = *(undefined4 *)(param_6 + 1);
          FUN_142399680(lVar2,&local_28,&local_38,0,0,param_11 & 0xffffff00);
          return lVar2;
        }
      }
    }
    lVar2 = FUN_142d54ef0(param_1,param_2,param_3,param_9,CONCAT44(uVar4,param_10),param_11,param_12
                         );
    FUN_142382f60(lVar2,param_4,&DAT_146af29ec);
    if (param_8 == 1) {
      local_28 = *param_7;
      local_20 = *(undefined4 *)(param_7 + 1);
      local_38 = *param_6;
      local_30 = *(undefined4 *)(param_6 + 1);
      FUN_142399680(lVar2);
    }
    else {
      local_28 = *param_7;
      local_20 = *(undefined4 *)(param_7 + 1);
      local_38 = *param_6;
      local_30 = *(undefined4 *)(param_6 + 1);
      FUN_1423982b0(lVar2,&local_38,&local_28,0,0,param_11 & 0xffffff00);
    }
  }
  return lVar2;
}



// FUNCTION 142d70000 FUN_142d70000 body=395 status=ok
// SIG undefined FUN_142d70000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d70000(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_158 [32];
  char local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  longlong local_d8 [5];
  undefined1 local_b0;
  byte local_af;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_af = local_af & 0xfe;
  local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_38 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_b0 = 0x40;
  local_78 = (longlong *)0x0;
  local_68 = 0;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_40 = 0;
  local_34 = *(undefined4 *)(lVar1 + 0x1e0);
  if (param_2 != 0) {
    local_138 = *(char *)(lVar1 + 0xa1);
    local_120 = 0;
    if ((local_138 != '\0') &&
       (lVar2 = *(longlong *)(lVar1 + 0xa8), lVar3 = lVar2, local_120 = 0, lVar2 != 0)) {
      do {
        lVar4 = lVar3;
        if (*(char *)(lVar3 + 0x180) != '\0') break;
        plVar5 = (longlong *)(lVar3 + 0x30);
        lVar3 = *plVar5;
        lVar4 = lVar2;
      } while (*plVar5 != 0);
      local_120 = *(undefined8 *)(lVar4 + 0x1b0);
    }
    local_f0 = 0;
    local_100 = local_d8;
    local_f8 = 0;
    local_e8 = 0;
    local_108 = 0;
    local_118 = *(undefined8 *)(lVar1 + 0xb8);
    local_110 = 0;
    local_128 = *(undefined8 *)(lVar1 + 0xc0);
    local_130 = 0;
    FUN_142d71ca0(lVar1 + 0xa0,param_2,param_3,0);
    if (local_68 != 0) {
      plVar5 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar5 = local_78;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_d8[2] != 0) {
      FMemory::Free();
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d70190 FUN_142d70190 body=1014 status=ok
// SIG undefined FUN_142d70190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d70190(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined4 param_5,undefined8 *param_6,undefined1 param_7,undefined8 *param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  longlong lStack_4d0;
  undefined1 local_4c8;
  undefined1 uStack_4c7;
  undefined2 uStack_4c6;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  undefined1 local_498 [560];
  undefined8 local_268 [2];
  undefined8 local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined4 local_1cc;
  undefined2 local_1c8;
  undefined1 local_1c6;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  undefined8 local_198;
  longlong *local_190;
  int local_188;
  undefined1 local_180 [256];
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [4];
  longlong *local_50;
  int local_48;
  int iStack_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  lVar6 = *(longlong *)(param_2 + 0x18);
  if (lVar6 != 0) {
    local_4c8 = param_7;
    uStack_4c7 = param_9;
    local_4a8 = param_5;
    local_238 = _DAT_146b32060 & _DAT_146b32070;
    uStack_234 = uRam0000000146b32064 & uRam0000000146b32074;
    uStack_230 = uRam0000000146b32068 & uRam0000000146b32078;
    uStack_22c = uRam0000000146b3206c & uRam0000000146b3207c;
    uStack_4bc = *(undefined4 *)(param_6 + 1);
    lVar1 = *(longlong *)(param_1 + 0x10);
    uStack_4c4 = (undefined4)*param_6;
    uStack_4c0 = (undefined4)((ulonglong)*param_6 >> 0x20);
    local_4b8 = *param_8;
    uStack_4b0 = *(undefined4 *)(param_8 + 1);
    uStack_4ac = param_10;
    local_258 = 0;
    lStack_250 = (ulonglong)uRam0000000146b3206c << 0x20;
    local_228 = 0;
    uStack_220 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    uStack_4a0 = param_11;
    local_268[0] = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 1;
    local_1d0 = 0;
    local_1cc = 0;
    local_1c8 = 0;
    local_1c6 = 1;
    local_1c0 = 0;
    local_1b8 = 0;
    local_4d8 = lVar6;
    lStack_4d0 = param_4;
    FWeakObjectPtr::operator=(local_1b0,0);
    local_1a8 = 0;
    FWeakObjectPtr::operator=(local_1a0,0);
    local_258 = *param_3;
    lStack_250 = param_3[1];
    local_248 = param_3[2];
    uStack_240 = param_3[3];
    local_198 = 0;
    local_190 = (longlong *)0x0;
    local_188 = 0;
    local_80 = 0;
    local_78 = 0;
    local_50 = (longlong *)0x0;
    local_268[0] = *(undefined8 *)(lVar1 + 0x90);
    local_238 = *(uint *)(param_3 + 4);
    uStack_234 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_230 = *(uint *)(param_3 + 5);
    uStack_22c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_1e0 = CONCAT44(0x3f000000,(undefined4)local_1e0);
    local_1b8 = 1;
    local_48 = 1;
    iStack_44 = 0;
    TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (local_70,0);
    plVar3 = local_70;
    if (local_50 != (longlong *)0x0) {
      plVar3 = local_50;
    }
    *plVar3 = lVar6;
    iVar2 = local_48;
    if (param_4 != 0) {
      lVar6 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (iStack_44 < local_48) {
        TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_70,iVar2);
      }
      plVar3 = local_70;
      if (local_50 != (longlong *)0x0) {
        plVar3 = local_50;
      }
      plVar3[lVar6] = param_4;
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x60);
    if (plVar3 == (longlong *)0x0) {
      if ((local_188 != 0) && (local_190 != (longlong *)0x0)) {
        (**(code **)(*local_190 + 0x28))(local_190,0);
        if (local_190 != (longlong *)0x0) {
          local_190 = (longlong *)FMemory::Realloc(local_190,0,0);
        }
        local_188 = 0;
      }
    }
    else {
      *plVar3 = (longlong)&PTR_GetPoolName_14588bbe8;
      plVar3[1] = (longlong)FUN_142d570b0;
      plVar3[2] = local_4d8;
      plVar3[3] = lStack_4d0;
      plVar3[4] = CONCAT44(uStack_4c4,CONCAT22(uStack_4c6,CONCAT11(uStack_4c7,local_4c8)));
      plVar3[5] = CONCAT44(uStack_4bc,uStack_4c0);
      *(undefined4 *)(plVar3 + 6) = (undefined4)local_4b8;
      *(undefined4 *)((longlong)plVar3 + 0x34) = local_4b8._4_4_;
      *(undefined4 *)(plVar3 + 7) = uStack_4b0;
      *(undefined4 *)((longlong)plVar3 + 0x3c) = uStack_4ac;
      *(undefined4 *)(plVar3 + 8) = local_4a8;
      *(undefined4 *)((longlong)plVar3 + 0x44) = uStack_4a4;
      *(undefined4 *)(plVar3 + 9) = (undefined4)uStack_4a0;
      *(undefined4 *)((longlong)plVar3 + 0x4c) = uStack_4a0._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar3[10] = lVar6;
      *plVar3 = (longlong)&PTR_GetPoolName_14588bc30;
      FUN_142d5b880(plVar3,&local_190);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar6 = FMemory::Realloc(plVar3,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
    uVar4 = FUN_140a7a570(local_498,local_268);
    uVar5 = FUN_142c728d0(param_1);
    FUN_1424ad6e0(uVar5,uVar4);
    if (local_50 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1409f5970(local_180);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_190);
    if (local_210 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d70590 FUN_142d70590 body=2430 status=ok
// SIG undefined FUN_142d70590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d70590(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint3 uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ushort *puVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined1 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  undefined8 *local_3d0;
  undefined1 local_3c8;
  undefined8 *local_3c0;
  undefined1 local_3b8;
  float local_3b0;
  undefined8 local_3a8;
  float local_398 [2];
  float local_390;
  float local_38c;
  float local_388;
  undefined8 local_380;
  uint local_378 [2];
  float local_370 [2];
  ulonglong local_368;
  undefined8 local_360;
  float local_358;
  ushort *local_350;
  ulonglong local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  float local_308;
  undefined8 local_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  float local_238;
  undefined4 uStack_234;
  uint *local_230;
  float *local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [12];
  undefined1 local_1ac [20];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  char local_144;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  int local_10c;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  local_380 = CONCAT44(local_380._4_4_,param_2);
  local_298 = param_1;
  lVar10 = FUN_142c6f130();
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  if (*(int *)(lVar2 + 0x70) < 1) {
    return;
  }
  local_398[0] = 0.0;
  FUN_142c703a0(param_1,&DAT_146b32188,local_398);
  FUN_142d61120(&local_390,param_1,0);
  lVar13 = *(longlong *)(lVar10 + 0x168);
  if (lVar13 == 0) {
    puVar21 = &local_284;
    local_284 = _DAT_1468b5d90;
    local_27c = DAT_1468b5d98;
  }
  else {
    puVar21 = (undefined8 *)&local_2bc;
    local_2bc = *(undefined4 *)(lVar13 + 0x220);
    local_168 = *(undefined4 *)(lVar13 + 0x220);
    uStack_164 = *(undefined4 *)(lVar13 + 0x224);
    uStack_160 = *(undefined4 *)(lVar13 + 0x228);
    uStack_15c = *(undefined4 *)(lVar13 + 0x22c);
    local_2b4 = *(undefined4 *)(lVar13 + 0x228);
    uStack_2b8 = *(undefined4 *)(lVar13 + 0x224);
  }
  local_340 = *puVar21;
  local_338 = *(undefined4 *)(puVar21 + 1);
  uVar4 = (uint3)((uint)*(undefined4 *)(puVar21 + 1) >> 8);
  if (((local_390 == 0.0) && (local_38c == 0.0)) && (local_388 == 0.0)) {
    iVar9 = (int)CONCAT71((uint7)uVar4,1);
  }
  else {
    iVar9 = (uint)uVar4 << 8;
  }
  if ((char)iVar9 == '\0') {
    puVar11 = (undefined8 *)FVector::Rotation(&local_390,local_1ac);
  }
  else {
    if (lVar13 == 0) {
      local_29c = DAT_1468b5da8;
      puVar12 = &local_2a4;
      local_2a4 = DAT_1468b5da0;
    }
    else {
      local_218 = *(float *)(lVar13 + 0x210);
      fStack_214 = *(float *)(lVar13 + 0x214);
      fStack_210 = *(float *)(lVar13 + 0x218);
      fStack_20c = *(float *)(lVar13 + 0x21c);
      auVar26._4_4_ = -(uint)(fStack_214 != *(float *)(lVar13 + 0x254));
      auVar26._0_4_ = -(uint)(local_218 != *(float *)(lVar13 + 0x250));
      auVar26._8_4_ = -(uint)(fStack_210 != *(float *)(lVar13 + 600));
      auVar26._12_4_ = -(uint)(fStack_20c != *(float *)(lVar13 + 0x25c));
      iVar9 = movmskps(iVar9,auVar26);
      if (iVar9 != 0) {
        *(float *)(lVar13 + 0x250) = local_218;
        *(float *)(lVar13 + 0x254) = fStack_214;
        *(float *)(lVar13 + 600) = fStack_210;
        *(float *)(lVar13 + 0x25c) = fStack_20c;
        puVar11 = (undefined8 *)FQuat::Rotator(&local_218,local_1b8);
        *(undefined8 *)(lVar13 + 0x260) = *puVar11;
        *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar11 + 1);
      }
      local_270 = *(undefined4 *)(lVar13 + 0x268);
      puVar12 = &local_278;
      local_278 = *(undefined8 *)(lVar13 + 0x260);
    }
    local_358 = (float)*(undefined4 *)(puVar12 + 1);
    puVar11 = &local_360;
    local_360 = *puVar12;
  }
  local_330 = *puVar11;
  local_328 = *(undefined4 *)(puVar11 + 1);
  lVar13 = *(longlong *)(lVar10 + 0x168);
  if (lVar13 == 0) {
    local_2c8 = 0x3f800000;
    puVar11 = (undefined8 *)&local_2c8;
    local_2c4 = 0x3f800000;
    local_2c0 = 0x3f800000;
  }
  else {
    puVar11 = (undefined8 *)&local_2b0;
    local_2b0 = *(undefined4 *)(lVar13 + 0x230);
    local_158 = *(undefined4 *)(lVar13 + 0x230);
    uStack_154 = *(undefined4 *)(lVar13 + 0x234);
    uStack_150 = *(undefined4 *)(lVar13 + 0x238);
    uStack_14c = *(undefined4 *)(lVar13 + 0x23c);
    local_2a8 = *(undefined4 *)(lVar13 + 0x238);
    uStack_2ac = *(undefined4 *)(lVar13 + 0x234);
  }
  local_290 = *puVar11;
  local_140 = 0;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_10c = 0;
  local_100 = (undefined1 *)0x0;
  local_f8 = 0;
  local_148 = 0.0;
  local_144 = '\0';
  local_110 = 0xffffffff;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
            (&local_140,*(int *)(lVar2 + 0x70) * 2);
  uVar18 = 0;
  uVar17 = uVar18;
  if (0 < *(int *)(lVar2 + 0x70)) {
    do {
      iVar9 = 0;
      lVar13 = *(longlong *)(lVar2 + 0x68);
      if (0 < *(int *)(uVar18 + lVar13)) {
        do {
          local_378[0] = iVar9 << 0x10 | (uint)uVar17;
          local_370[0] = *(float *)(uVar18 + 4 + *(longlong *)(lVar2 + 0x68));
          if ((1e-08 < local_370[0]) || (local_144 != '\0')) {
            if ((int)local_138 != local_10c) {
              puVar14 = local_108;
              if (local_100 != (undefined1 *)0x0) {
                puVar14 = local_100;
              }
              iVar1 = *(int *)(puVar14 + (longlong)(int)(local_f8 - 1U & local_378[0]) * 4);
              while (iVar1 != -1) {
                lVar15 = (longlong)iVar1;
                if (*(uint *)(local_140 + lVar15 * 0x10) == local_378[0]) {
                  if (((iVar1 != -1) && (lVar15 = lVar15 * 0x10 + local_140, lVar15 != 0)) &&
                     (pfVar16 = (float *)(lVar15 + 4), pfVar16 != (float *)0x0)) {
                    local_148 = local_148 - *pfVar16;
                  }
                  break;
                }
                iVar1 = *(int *)(local_140 + 8 + lVar15 * 0x10);
              }
            }
            local_148 = local_148 + local_370[0];
            local_230 = local_378;
            local_228 = local_370;
            FUN_1407b93f0(&local_140,&local_368,&local_230);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(uVar18 + lVar13));
      }
      uVar23 = (uint)uVar17 + 1;
      uVar18 = uVar18 + 0x28;
      uVar17 = (ulonglong)uVar23;
    } while ((int)uVar23 < *(int *)(lVar2 + 0x70));
    param_2 = (int)local_380;
  }
  fVar33 = 5.0;
  FName::FName(&local_2d0,L"PhysicsActor",1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar13 = DAT_146b33f38;
  lVar19 = DAT_146b33f38 + 0x30;
  lVar15 = FWeakObjectPtr::Get(lVar19);
  if (lVar15 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar13 + 0x38)) &&
       (local_380 = 0, *(longlong *)(lVar13 + 0x40) != 0)) {
      lVar15 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar19,lVar15);
      if ((lVar15 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar13 + 0x38) = DAT_1464b56f4;
      }
      lVar15 = FWeakObjectPtr::Get(lVar19);
      if (lVar15 != 0) goto LAB_142d70a5d;
    }
  }
  else {
LAB_142d70a5d:
    lVar13 = FUN_142e0ceb0();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_2d0 = *(undefined8 *)(lVar15 + 0x1d8);
      fVar33 = *(float *)(lVar15 + 0x1d4);
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x90);
  if (plVar3 != (longlong *)0x0) {
    lVar13 = plVar3[0x1f];
    if (lVar13 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar13 = plVar3[0x1f];
      if (lVar13 == 0) goto LAB_142d70b19;
    }
    if (*(float *)(lVar13 + 0xcc) != 0.0) {
      fVar33 = *(float *)(lVar13 + 0xcc);
    }
  }
LAB_142d70b19:
  local_350 = (ushort *)0x0;
  local_348 = 0;
  FUN_1409c0150(&local_148,param_2,0,&local_350);
  uVar7 = local_338;
  uStack_250 = *(undefined4 *)(puVar21 + 1);
  local_258 = *puVar21;
  uStack_24c = (undefined4)local_330;
  uStack_248 = (undefined4)((ulonglong)local_330 >> 0x20);
  fVar25 = local_388 * local_398[0];
  uStack_244 = local_328;
  fVar28 = local_390 * local_398[0];
  fVar27 = local_38c * local_398[0];
  uStack_260 = 0;
  uStack_240 = CONCAT44(fVar27,fVar28);
  local_358 = fVar25;
  local_268 = lVar10;
  local_238 = fVar25;
  if (0 < (int)local_348) {
    fVar8 = (float)local_290;
    uVar6 = local_340._4_4_;
    puVar20 = local_350;
    local_368 = local_348 & 0xffffffff;
    do {
      uVar17 = (ulonglong)*puVar20;
      local_310 = CONCAT44(fVar27,fVar28);
      local_320 = _DAT_1468b5d90;
      local_318 = DAT_1468b5d98;
      uVar30 = (undefined4)local_340;
      uVar31 = uVar6;
      uVar32 = uVar7;
      uVar24 = 0;
      local_308 = fVar25;
      uVar22 = 0;
      if (*(longlong *)(lVar2 + 0x80) != 0) {
        uStack_2f0 = 0;
        fStack_2ec = 0.0;
        local_300 = 0;
        uStack_2f8 = 0;
        uStack_2f4 = 0;
        local_2e8 = 1;
        local_2e4 = 0;
        local_2dc = 0;
        local_1f8 = local_268;
        uStack_1f0 = uStack_260;
        uStack_1e0 = CONCAT44(uStack_24c,uStack_250);
        local_2d8 = 1;
        local_1e8 = local_258;
        local_1d8 = CONCAT44(uStack_244,uStack_248);
        uStack_1d0 = uStack_240;
        local_1c8 = CONCAT44(uStack_234,local_238);
        FUN_142d9d660(*(longlong *)(lVar2 + 0x80),&local_1f8,&local_300);
        local_310 = CONCAT44(uStack_2f0,uStack_2f4);
        local_308 = fStack_2ec;
        local_320 = local_2e4;
        local_318 = local_2dc;
        uVar30 = (undefined4)local_300;
        uVar31 = local_300._4_4_;
        uVar32 = uStack_2f8;
        uVar24 = local_2d8;
        uVar22 = local_2e8;
      }
      if (*(char *)(*(longlong *)(lVar2 + 0x68) + 8 + uVar17 * 0x28) == '\0') {
        iVar9 = rand();
        lVar10 = *(longlong *)(lVar2 + 0x68);
        fVar29 = (*(float *)(lVar2 + 0x7c) - *(float *)(lVar2 + 0x78)) * (float)iVar9 * 3.051851e-05
                 + *(float *)(lVar2 + 0x78);
      }
      else {
        iVar9 = rand();
        lVar10 = *(longlong *)(lVar2 + 0x68);
        fVar29 = (*(float *)(lVar10 + 0x10 + uVar17 * 0x28) -
                 *(float *)(lVar10 + 0xc + uVar17 * 0x28)) * (float)iVar9 * 3.051851e-05 +
                 *(float *)(lVar10 + 0xc + uVar17 * 0x28);
      }
      fVar29 = fVar29 * fVar8;
      FRotator::Quaternion(&local_330,&local_208);
      local_198 = local_208;
      uStack_190 = uStack_200;
      local_3a8 = local_2d0;
      local_3c0 = &local_320;
      local_3d8 = *(undefined4 *)(lVar2 + 0x88);
      local_188._4_4_ = uVar31;
      local_188._0_4_ = uVar30;
      local_188._8_4_ = uVar32;
      local_188._12_4_ = 0;
      local_3d0 = &local_310;
      local_178._4_4_ = fVar29;
      local_178._0_4_ = fVar29;
      local_178._8_4_ = fVar29;
      local_178._12_4_ = 0;
      local_3c8 = uVar22;
      local_3b8 = uVar24;
      local_3b0 = fVar33;
      FUN_142d70190(local_298,*(longlong *)(lVar2 + 0x68) + uVar17 * 0x28,&local_198,
                    *(undefined8 *)(lVar10 + 0x20 + uVar17 * 0x28));
      puVar20 = puVar20 + 2;
      local_368 = local_368 - 1;
    } while (local_368 != 0);
    local_368 = 0;
  }
  if (local_350 != (ushort *)0x0) {
    FMemory::Free(local_350);
  }
  local_f8 = 0;
  if (local_100 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_140);
  return;
}



// FUNCTION 142d70f10 FUN_142d70f10 body=575 status=ok
// SIG undefined FUN_142d70f10(void)

longlong FUN_142d70f10(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                      uint param_9,undefined4 param_10)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8;
  undefined4 local_resc;
  longlong *local_res10;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar7 = *param_2;
  plVar1 = (longlong *)(param_1 + 0x878);
  if (*(int *)(param_1 + 0x880) != *(int *)(param_1 + 0x8ac)) {
    lVar6 = *(longlong *)(param_1 + 0x8b8);
    if (*(longlong *)(param_1 + 0x8b8) == 0) {
      lVar6 = param_1 + 0x8b0;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                             (longlong)*(int *)(param_1 + 0x8c0) - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar5 * 0x20 + *plVar1);
        if (*plVar8 == lVar7) {
          if ((iVar5 != -1) && (plVar8 != (longlong *)0x0)) goto LAB_142d70fd5;
          break;
        }
        iVar5 = (int)plVar8[3];
      } while (iVar5 != -1);
    }
  }
  local_res10 = param_2;
  FUN_140d1c9b0(plVar1,&local_res8,&local_res10,0);
  plVar8 = (longlong *)((longlong)local_res8 * 0x20 + *plVar1);
LAB_142d70fd5:
  plVar1 = plVar8 + 1;
  cVar4 = FUN_142d59760(param_1,plVar1,param_4,param_5,param_6);
  if (cVar4 == '\0') {
    return 0;
  }
  local_68 = *param_4;
  local_60 = *(undefined4 *)(param_4 + 1);
  uVar3 = *(undefined4 *)(param_6 + 1);
  uVar2 = *param_6;
  lVar7 = 0;
  if ((param_3 != 0) &&
     (lVar7 = FUN_142d54ef0(param_1,param_3,&local_68,param_7,param_8,param_9,param_10), lVar7 != 0)
     ) {
    local_58 = *param_5;
    local_50 = *(undefined4 *)(param_5 + 1);
    local_68 = uVar2;
    local_60 = uVar3;
    FUN_142399680(lVar7,&local_58,&local_68,0,0,param_9 & 0xffffff00);
  }
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x720) = 1;
    *(longlong *)(lVar7 + 0x728) = *param_2;
    FWeakObjectPtr::operator=(&local_res8,lVar7);
    iVar5 = (int)plVar8[2];
    *(int *)(plVar8 + 2) = iVar5 + 1;
    if (*(int *)((longlong)plVar8 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
    }
    lVar6 = *plVar1;
    *(int *)(lVar6 + (longlong)iVar5 * 8) = local_res8;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar5 * 8) = local_resc;
  }
  return lVar7;
}



// FUNCTION 142d71150 FUN_142d71150 body=563 status=ok
// SIG undefined FUN_142d71150(void)

longlong FUN_142d71150(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                      undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12
                      ,undefined4 param_13)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8;
  undefined4 local_resc;
  longlong *local_res10;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar5 = *param_2;
  plVar1 = (longlong *)(param_1 + 0x878);
  if (*(int *)(param_1 + 0x880) != *(int *)(param_1 + 0x8ac)) {
    lVar4 = *(longlong *)(param_1 + 0x8b8);
    if (*(longlong *)(param_1 + 0x8b8) == 0) {
      lVar4 = param_1 + 0x8b0;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                             (longlong)*(int *)(param_1 + 0x8c0) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *plVar1);
        if (*plVar6 == lVar5) {
          if ((iVar3 != -1) && (plVar6 != (longlong *)0x0)) goto LAB_142d71215;
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  local_res10 = param_2;
  FUN_140d1c9b0(plVar1,&local_res8,&local_res10,0);
  plVar6 = (longlong *)((longlong)local_res8 * 0x20 + *plVar1);
LAB_142d71215:
  plVar1 = plVar6 + 1;
  cVar2 = FUN_142d59760(param_1,plVar1,param_4,param_7,param_8);
  if (cVar2 == '\0') {
    lVar5 = 0;
  }
  else {
    local_50 = *(undefined4 *)(param_8 + 1);
    local_58 = *param_8;
    local_40 = *(undefined4 *)(param_7 + 1);
    local_30 = *(undefined4 *)(param_4 + 1);
    local_48 = *param_7;
    local_38 = *param_4;
    lVar5 = FUN_142d6fda0(param_1,param_3,&local_38,param_5,param_6,&local_48,&local_58,param_9,
                          param_10,param_11,param_12,param_13);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x720) = 1;
      *(longlong *)(lVar5 + 0x728) = *param_2;
      FWeakObjectPtr::operator=(&local_res8,lVar5);
      iVar3 = (int)plVar6[2];
      *(int *)(plVar6 + 2) = iVar3 + 1;
      if (*(int *)((longlong)plVar6 + 0x14) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      lVar4 = *plVar1;
      *(int *)(lVar4 + (longlong)iVar3 * 8) = local_res8;
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 8) = local_resc;
    }
  }
  return lVar5;
}



// FUNCTION 142d71390 FUN_142d71390 body=753 status=ok
// SIG undefined FUN_142d71390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142d71390(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  float fVar7;
  longlong local_res8;
  longlong local_res10;
  longlong local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 **ppuStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  lVar1 = param_1[2];
  *(longlong **)(*(longlong *)(lVar1 + 0x120) + 0x48) = param_1 + 0x96;
  lVar3 = FUN_142c6f8b0(param_1,1);
  if (lVar3 == 0) {
LAB_142d7140a:
    lVar3 = 0;
  }
  else {
    lVar4 = AGGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142d7140a;
  }
  lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x120) + 0x2a8))(*(longlong **)(lVar1 + 0x120),lVar3)
  ;
  uVar6 = 0;
  if (lVar3 == 0) {
LAB_142d71659:
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0xa0))(param_1,1);
    uVar5 = FUN_142c9fbb0(lVar3,uVar5);
    *(undefined8 *)((longlong)param_1 + 0x4dc) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)param_1 + 0x4e4) = DAT_1468b5d98;
    local_res8 = 0;
    lVar3 = FUN_142c6f130(param_1);
    if ((lVar3 == 0) ||
       (lVar4 = FUN_142c6f130(param_1), lVar3 = 0, *(char *)(lVar4 + 0x128) == '\x03')) {
      fVar7 = *(float *)((longlong)param_1 + 0x4ec) - *(float *)(lVar1 + 0x104);
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      uVar6 = FUN_142d588e0(param_1,fVar7 * 100.0,(longlong)param_1 + 0x4dc,&local_res8);
      lVar3 = local_res8;
      if ((char)uVar6 == '\0') goto LAB_142d71659;
    }
    local_78 = *(longlong *)((longlong)param_1 + 0x4dc);
    local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)((longlong)param_1 + 0x4e4));
    FUN_142d6e150(param_1,&local_78,lVar3);
    local_res10 = FUN_142c71f10(param_1);
    local_res8 = FUN_142d60c00(param_1);
    if (local_res8 != 0) {
      lVar3 = FUN_1423ac7e0(local_res8);
      if (lVar3 != 0) {
        lVar4 = UMonkeyAnim::StaticClass();
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
          *(undefined1 *)(lVar3 + 0x632) = 1;
        }
      }
      if (((local_res8 != 0) && (local_res10 != 0)) && (lVar3 = FUN_142dabbf0(), lVar3 != 0)) {
        local_58 = &local_res8;
        local_78 = 0;
        local_50 = &local_res10;
        local_70 = 0;
        local_48 = &local_78;
        ppuStack_60 = &local_58;
        local_68 = &LAB_142d596a0;
        local_40 = param_1;
        FUN_1426936b0(lVar3,&local_68);
        FUN_142cac150(local_res8,&local_78,1);
        FUN_142cac380(local_res8,0x3f800000);
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
    }
    FUN_142c7be60(param_1,uVar5,lVar1 + 0x108,0x3f800000,0,0,0x3dcccccd,1);
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 142d71690 FUN_142d71690 body=470 status=ok
// SIG undefined FUN_142d71690(void)

void FUN_142d71690(undefined8 param_1,longlong param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char local_128 [4];
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
  undefined8 local_f0;
  byte local_e8 [12];
  undefined4 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  
  if (param_2 != 0) {
    local_100 = *(undefined4 *)(param_3 + 0x28);
    local_f0 = *(undefined8 *)(param_3 + 0x38);
    local_11c = *(undefined4 *)(param_3 + 0xc);
    local_108 = *(undefined4 *)(param_3 + 0x20);
    local_104 = *(undefined4 *)(param_3 + 0x24);
    local_110 = *(undefined4 *)(param_3 + 0x18);
    local_10c = *(undefined4 *)(param_3 + 0x1c);
    local_124 = *(undefined8 *)(param_3 + 4);
    uVar10 = (undefined4)local_124;
    uVar11 = (undefined4)((ulonglong)local_124 >> 0x20);
    local_128[0] = *param_3;
    local_118 = *(undefined8 *)(param_3 + 0x10);
    uVar12 = (undefined4)local_118;
    uVar13 = (undefined4)((ulonglong)local_118 >> 0x20);
    local_fc = *(undefined4 *)(param_3 + 0x2c);
    local_f8 = *(undefined4 *)(param_3 + 0x30);
    if (local_128[0] != '\0') {
      FUN_142d73f40(local_128);
      uVar12 = (undefined4)local_118;
      uVar13 = (undefined4)((ulonglong)local_118 >> 0x20);
      uVar10 = (undefined4)local_124;
      uVar11 = (undefined4)((ulonglong)local_124 >> 0x20);
    }
    uVar9 = local_f0;
    uVar8 = local_f8;
    uVar7 = local_fc;
    uVar6 = local_100;
    uVar5 = local_104;
    uVar4 = local_108;
    uVar3 = local_10c;
    uVar2 = local_110;
    uVar1 = local_11c;
    _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
    local_e8[0] = local_e8[0] | 1;
    local_78 = uVar6;
    local_74 = uVar7;
    local_70 = uVar8;
    local_dc = 0x3f800000;
    local_c8 = CONCAT44(uVar11,uVar10);
    local_d4 = CONCAT44(uVar11,uVar10);
    local_bc = CONCAT44(uVar13,uVar12);
    local_b0 = CONCAT44(uVar13,uVar12);
    local_cc = uVar1;
    local_c0 = uVar1;
    local_b4 = uVar2;
    local_a8 = uVar2;
    local_84 = uVar3;
    local_80 = uVar4;
    local_7c = uVar5;
    local_68 = uVar9;
    FUN_142d71870(param_1,param_2,local_e8,0,0);
  }
  return;
}



// FUNCTION 142d71870 FUN_142d71870 body=495 status=ok
// SIG undefined FUN_142d71870(void)

void FUN_142d71870(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  
  if (param_2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  }
  if ((((param_1 != 0) && (*(char *)(param_1 + 0xe0) != '\0')) && (param_2 != (longlong *)0x0)) &&
     (lVar3 != 0)) {
    bVar1 = false;
    if ((param_4 != '\0') && (iVar2 = FUN_1428cf800(lVar3), iVar2 - 1U < 2)) {
      param_4 = '\0';
      bVar1 = true;
    }
    FUN_142d71bd0(param_1 + 0xf0,param_2,param_3,param_4,0,&DAT_1466ad4f0,0);
    if ((bVar1) && (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
      lVar4 = FUN_142e4e3f0();
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
        local_5c = *(undefined4 *)(param_3 + 0x28);
        bVar1 = false;
        local_64 = *(undefined8 *)(param_3 + 0x20);
        local_50 = *(undefined4 *)(param_3 + 0x34);
        local_4c = *(undefined4 *)(param_3 + 100);
        local_48 = *(undefined4 *)(param_3 + 0x68);
        local_44 = *(undefined4 *)(param_3 + 0x6c);
        local_40 = *(undefined4 *)(param_3 + 0x70);
        local_3c = *(undefined4 *)(param_3 + 0x74);
        local_38 = *(undefined4 *)(param_3 + 0x78);
        local_30 = *(undefined8 *)(param_3 + 0x80);
        local_58 = *(undefined8 *)(param_3 + 0x2c);
        local_68[0] = 0;
        if (((((*(uint *)(param_1 + 0x118) & 1) != 0) &&
             (bVar1 = true, (*(uint *)(param_1 + 0x118) >> 1 & 1) != 0)) || (local_30 = 0, bVar1))
           && (lVar4 = FWeakObjectPtr::Get(&local_44), lVar4 != 0)) {
          FUN_142d73b60(local_68);
        }
        FUN_142e4e640(lVar3,param_1,param_2,local_68);
      }
    }
  }
  return;
}



// FUNCTION 142d71a60 FUN_142d71a60 body=358 status=ok
// SIG undefined FUN_142d71a60(void)

void FUN_142d71a60(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 local_res18 [2];
  
  if (param_3 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_4 + 100);
    plVar8 = (longlong *)*param_2;
    plVar3 = (longlong *)0x0;
    plVar6 = plVar8 + (longlong)(int)param_2[1] * 0x2a;
    for (; plVar8 != plVar6; plVar8 = plVar8 + 0x2a) {
      if (*plVar8 == lVar2) {
        plVar3 = plVar8 + 2;
        break;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      param_1 = plVar3;
    }
    uVar7 = 0;
    cVar5 = *(char *)((longlong)param_1 + 1);
    if ((cVar5 != '\0') && (param_1[1] != 0)) {
      lVar4 = FUN_142d5e550(param_1[1],lVar2,local_res18);
      if (lVar4 == 0) {
        lVar1 = param_1[1];
        lVar4 = lVar1 + 400;
        for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (*(char *)(lVar1 + 0x180) != '\0') {
            lVar4 = lVar1 + 400;
            break;
          }
        }
      }
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      cVar5 = *(char *)((longlong)param_1 + 1);
    }
    local_res18[0] = 0;
    FUN_142d71ca0(param_1,param_3,param_4,param_5,cVar5,param_6,param_1[4],uVar7,param_1[3],lVar2,0,
                  param_7,0,param_8);
  }
  return;
}



// FUNCTION 142d71bd0 FUN_142d71bd0 body=196 status=ok
// SIG undefined FUN_142d71bd0(void)

void FUN_142d71bd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 1) != '\0') {
      for (lVar1 = *(longlong *)(param_1 + 8); (lVar1 != 0 && (*(char *)(lVar1 + 0x180) == '\0'));
          lVar1 = *(longlong *)(lVar1 + 0x30)) {
      }
    }
    FUN_142d71ca0();
  }
  return;
}



// FUNCTION 142d71ca0 FUN_142d71ca0 body=2187 status=ok
// SIG undefined FUN_142d71ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142d71ca0(char *param_1,longlong *param_2,longlong param_3,char param_4,
                       undefined1 param_5,char param_6,longlong param_7,longlong param_8,
                       longlong param_9,undefined8 param_10,longlong param_11,longlong param_12,
                       undefined8 param_13,char param_14)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong *plVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  char local_res20;
  ulonglong in_stack_fffffffffffffef8;
  undefined4 uVar24;
  byte local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  longlong *local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  char local_73;
  char local_72;
  undefined1 local_71;
  undefined8 local_68 [6];
  
  local_b8 = 0;
  uVar10 = (**(code **)(*param_2 + 0x148))(param_2);
  uVar11 = uVar10;
  if ((uVar10 == 0) || ((*(uint *)(uVar10 + 0x830) & 0x400) != 0)) goto LAB_142d7250e;
  uVar11 = FUN_1428cf800(uVar10);
  uVar24 = uStack_8c;
  fVar20 = fStack_90;
  iVar9 = DAT_1466ad41c;
  iVar7 = (int)uVar11;
  local_res20 = param_4;
  if (param_4 == '\0') {
    if (iVar7 == 1) goto LAB_142d7250e;
  }
  else if (iVar7 == 0) {
    local_res20 = '\0';
  }
  fStack_90 = (float)param_7;
  fVar3 = fStack_90;
  uStack_8c = (undefined4)((ulonglong)param_7 >> 0x20);
  uVar4 = uStack_8c;
  if (((param_14 == '\0') && (*param_1 == '\0')) && (param_7 != 0)) {
    if ((DAT_1466ad410 == 1) && (-1 < DAT_1466ad41c)) {
      local_98 = param_2;
      uVar12 = FUN_142d5eba0();
      puVar13 = (uint *)FUN_142d61070(uVar12,&local_98);
      uVar8 = *puVar13;
      uVar11 = (ulonglong)uVar8;
      if (iVar9 < (int)uVar8) goto LAB_142d7250e;
      uVar8 = uVar8 + 1;
      uVar11 = (ulonglong)uVar8;
      *puVar13 = uVar8;
      fVar20 = fStack_90;
      uVar24 = uStack_8c;
      if (iVar9 < (int)uVar8) goto LAB_142d7250e;
    }
    uStack_8c = uVar24;
    fStack_90 = fVar20;
    fVar20 = fStack_90;
    uVar24 = uStack_8c;
    if (DAT_1466ad3f4 == 1) {
      local_98 = *(longlong **)(param_3 + 0x20);
      fStack_90 = *(float *)(param_3 + 0x28);
      uStack_8c = DAT_1466ad400;
      uVar11 = FUN_142d6c0a0(&local_98);
      fVar20 = fStack_90;
      uVar24 = uStack_8c;
      if ((char)uVar11 != '\0') {
LAB_142d7250e:
        return uVar11 & 0xffffffffffffff00;
      }
    }
  }
  uStack_8c = uVar24;
  fStack_90 = fVar20;
  uVar24 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
  uVar11 = 0;
  local_68[0] = 0;
  if ((local_res20 != '\0') && (iVar7 == 3)) {
    bVar1 = true;
    local_b8 = 0;
LAB_142d722a2:
    if ((((param_9 != 0) && ((param_1[0xb8] & 1U) == 0)) && ((*(byte *)(param_12 + 0x28) & 1) == 0))
       && ((param_6 == '\x01' || (!bVar1)))) {
      fVar20 = *(float *)(param_9 + 0x38);
      if ((0.0 < fVar20) && (lVar16 = FUN_142d80ec0(uVar10), lVar16 != 0)) {
        local_98._1_7_ = (uint7)((ulonglong)local_98 >> 8) & 0xffffff;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_98 = (longlong *)((ulonglong)local_98._1_7_ << 8);
        fStack_90 = fVar20;
        fVar20 = (float)FUN_142d818a0(lVar16,&local_98,0,param_3 + 0x20,CONCAT44(uVar24,0x3f800000),
                                      1);
        if (fVar20 <= 0.0) goto LAB_142d7237e;
      }
      bVar6 = FUN_142d692b0(param_1,param_9,param_2,uVar10,param_3,param_6,param_10,param_12,
                            local_68[0]);
      local_b8 = local_b8 | bVar6;
    }
LAB_142d7237e:
    return (ulonglong)local_b8;
  }
  if (((param_1[0xb8] & 2U) == 0) && ((*(byte *)(param_12 + 0x28) & 2) == 0)) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      plVar14 = param_2;
      if (param_1[0x78] != '\0') {
        plVar14 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x6c);
      }
      if (plVar14 != (longlong *)0x0) {
        uVar12 = *(undefined8 *)(param_1 + 0x80);
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x668))();
        if (plVar14 != (longlong *)0x0) {
          lVar16 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
              lVar16 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if (local_res20 == '\0') {
              if (((*(uint *)((longlong)plVar14 + 0x4cc) >> 1 & 1) == 0) ||
                 (cVar5 = (**(code **)(*plVar14 + 0x768))(plVar14), cVar5 == '\0')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
LAB_142d71ed8:
                FUN_142e56460(plVar14,uVar12,0);
              }
            }
            else if ((char)plVar14[0x25] == '\x03') goto LAB_142d71ed8;
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      fStack_90 = 0.0;
      local_a8 = local_a8 & 0xffffff00;
      local_98 = (longlong *)(ulonglong)local_a8;
      uStack_a0 = *(undefined4 *)(param_3 + 0x1c);
      local_a8 = (uint)*(undefined8 *)(param_3 + 0x14);
      uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x14) >> 0x20);
      in_stack_fffffffffffffef8 = uVar10;
      FUN_142d40cc0(*(longlong *)(param_1 + 0x88),&local_a8,&local_98,0,uVar10,0,0,0);
    }
  }
  if (((*(byte *)(param_12 + 0x28) & 4) == 0) && ((param_7 != 0 || (param_8 != 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((float)*(int *)(param_1 + 0x40) <= 0.0) || ((*(byte *)(param_12 + 0x28) & 8) != 0)) {
LAB_142d71f94:
    bVar2 = false;
  }
  else {
    if ((*param_1 == '\0') && ((*(byte *)(uVar10 + 0x830) & 2) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) goto LAB_142d71f94;
    bVar2 = true;
  }
  if ((!bVar1) && (!bVar2)) {
    local_b8 = 0;
    goto LAB_142d72267;
  }
  if ((param_6 == '\x01') && (cVar5 = FUN_142880f60(DAT_146b17150,uVar10), cVar5 != '\0')) {
LAB_142d7224e:
    local_b8 = 0;
  }
  else {
    if ((local_res20 == '\0') ||
       ((iVar9 = FUN_1428cf800(uVar10), uVar18 = 1, iVar9 != 2 &&
        (iVar9 = FUN_1428cf800(uVar10), iVar9 != 1)))) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        param_11 = *(longlong *)(param_1 + 0x70);
      }
      local_a8 = 0;
      uStack_a4 = 0;
      uVar18 = 1;
      if (param_11 != 0) {
        fVar20 = 0.0;
        if (bVar2) {
          fVar23 = *(float *)(param_1 + 0x4c);
          if (*(float *)(param_1 + 0x4c) <= *(float *)(param_1 + 0x48)) {
            fVar23 = *(float *)(param_1 + 0x48);
          }
          fVar20 = *(float *)(param_12 + 0x94);
          if (*(float *)(param_12 + 0x94) <= *(float *)(param_12 + 0x90)) {
            fVar20 = *(float *)(param_12 + 0x90);
          }
          fVar20 = fVar23 * *(float *)(param_1 + 0x58) * fVar20;
        }
        if (((bVar1) && (param_7 != 0)) && ((*(byte *)(param_7 + 0x98) & 1) != 0)) {
          fVar23 = (*(float *)(param_7 + 0xa8) - *(float *)(param_7 + 0x9c)) * 0.5;
          fVar22 = (*(float *)(param_7 + 0xac) - *(float *)(param_7 + 0xa0)) * 0.5;
          fVar21 = (*(float *)(param_7 + 0xb0) - *(float *)(param_7 + 0xa4)) * 0.5;
          if (fVar23 <= fVar22) {
            fVar23 = fVar22;
          }
          if (fVar23 <= fVar21) {
            fVar23 = fVar21;
          }
          if (fVar20 < fVar23) {
            fVar20 = fVar23;
          }
        }
        uVar18 = 0;
        local_a8 = 0;
        uStack_a4 = 0;
        if (param_11 != 0) {
          uVar18 = 1;
          lVar16 = FUN_142d80ec0(uVar10);
          if (lVar16 != 0) {
            in_stack_fffffffffffffef8 = CONCAT44((int)(in_stack_fffffffffffffef8 >> 0x20),fVar20);
            fVar20 = (float)FUN_142d81a10(lVar16,param_11,param_2,param_3 + 0x20,
                                          in_stack_fffffffffffffef8,1);
            uVar18 = 1;
            if (0.0 < fVar20) {
              plVar14 = (longlong *)(**(code **)(*param_2 + 0x688))();
              uVar19 = 1;
              if ((plVar14 != (longlong *)0x0) &&
                 (cVar5 = (**(code **)(*plVar14 + 0x780))(plVar14), cVar5 != '\0')) {
                cVar5 = (**(code **)(*plVar14 + 0x778))(plVar14);
                uVar19 = 1;
                if (cVar5 != '\0') {
                  uVar19 = uVar11;
                }
              }
              uVar18 = (undefined1)uVar19;
            }
            if (fVar20 <= 0.0) goto LAB_142d7224e;
          }
        }
      }
    }
    if (bVar2) {
      in_stack_fffffffffffffef8 = CONCAT71((int7)(in_stack_fffffffffffffef8 >> 8),param_6);
      local_b8 = FUN_142d69690(param_1,param_2,uVar10,param_3,in_stack_fffffffffffffef8,param_10,
                               param_12);
    }
    if (bVar1) {
      if ((local_b8 & 8) != 0) {
        local_98 = param_2;
        fStack_90 = fVar3;
        uStack_8c = uVar4;
        uVar12 = FUN_142d5eba0();
        piVar15 = (int *)FUN_142d61070(uVar12,&local_98);
        if (1 < *piVar15) goto LAB_142d72267;
      }
      in_stack_fffffffffffffef8 = uVar10;
      bVar6 = FUN_142d6a100(param_1,param_7,param_8,param_2,uVar10,param_3,param_6,local_res20,
                            param_5,uVar18,param_10,param_12,local_68);
      local_b8 = local_b8 | bVar6;
    }
  }
LAB_142d72267:
  uVar24 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
  plVar14 = DAT_1466ad4d0;
joined_r0x000142d7227f:
  if (plVar14 == DAT_1466ad4d0 + (longlong)DAT_1466ad4d8 * 2) {
    bVar1 = false;
  }
  else {
    if (((int)plVar14[1] == 0) || (*plVar14 == 0)) goto LAB_142d7228f;
    if (((param_1[0xb8] & 1U) == 0) && ((*(byte *)(param_12 + 0x28) & 1) == 0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = 1;
    }
    local_71 = 0;
    uVar12 = FWeakObjectPtr::Get(param_3 + 0x6c);
    fStack_90 = (float)uVar12;
    uStack_8c = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar12 = FWeakObjectPtr::Get(param_3 + 100);
    local_80 = *(undefined8 *)(param_3 + 0x20);
    DAT_1466ad4e4 = DAT_1466ad4e4 + 1;
    uStack_88 = (undefined4)uVar12;
    uStack_84 = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_78 = *(undefined4 *)(param_3 + 0x28);
    local_72 = param_6;
    bVar1 = false;
    local_73 = local_res20;
    lVar16 = (longlong)(DAT_1466ad4d8 + -1);
    local_98 = param_2;
    local_74 = uVar18;
    if (-1 < DAT_1466ad4d8 + -1) {
      lVar17 = lVar16 << 4;
      bVar1 = false;
      do {
        if (((*(int *)(lVar17 + 8 + (longlong)DAT_1466ad4d0) == 0) ||
            (plVar14 = *(longlong **)(lVar17 + (longlong)DAT_1466ad4d0), plVar14 == (longlong *)0x0)
            ) || (cVar5 = (**(code **)(*plVar14 + 0x40))(plVar14,&local_98), cVar5 == '\0')) {
          bVar1 = true;
        }
        lVar17 = lVar17 + -0x10;
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
    iVar9 = DAT_1466ad4d8;
    uVar24 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
    DAT_1466ad4e4 = DAT_1466ad4e4 + -1;
    if ((bVar1) && (DAT_1466ad4e4 < 1)) {
      uVar19 = uVar11;
      if (0 < DAT_1466ad4d8) {
        do {
          if (((*(int *)(uVar11 + 8 + (longlong)DAT_1466ad4d0) == 0) ||
              (*(longlong **)(uVar11 + (longlong)DAT_1466ad4d0) == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(**(longlong **)(uVar11 + (longlong)DAT_1466ad4d0) + 0x10))(),
             cVar5 != '\0')) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1466ad4d0,uVar19,1,1);
          }
          else {
            uVar19 = (ulonglong)((int)uVar19 + 1);
            uVar11 = uVar11 + 0x10;
          }
          uVar24 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
        } while ((int)uVar19 < DAT_1466ad4d8);
      }
      _DAT_1466ad4e0 = DAT_1466ad4d8 * 2;
      if (DAT_1466ad4d8 * 2 < 3) {
        _DAT_1466ad4e0 = 2;
      }
      if (iVar9 <= _DAT_1466ad4e0) goto LAB_142d72503;
      if (DAT_1466ad4dc != DAT_1466ad4d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1466ad4d0);
      }
      bVar1 = false;
    }
    else {
LAB_142d72503:
      bVar1 = false;
    }
  }
  goto LAB_142d722a2;
LAB_142d7228f:
  plVar14 = plVar14 + 2;
  goto joined_r0x000142d7227f;
}



// FUNCTION 142d72530 FUN_142d72530 body=535 status=ok
// SIG undefined FUN_142d72530(void)

void FUN_142d72530(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res8;
  undefined8 local_res10;
  
  iVar5 = *(int *)(param_1 + 0x200) + -1;
  lVar11 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar12 = lVar11 << 4;
    do {
      lVar1 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x1f8));
      if (lVar1 != 0) {
        iVar5 = *(int *)(lVar1 + 0xc);
        if (iVar5 < (int)DAT_1469e91c4) {
          uVar9 = iVar5 >> 0x1f & 0xffff;
          uVar6 = iVar5 + uVar9;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
          if (lVar1 != 0) {
            lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              pwVar10 = (wchar_t *)0x0;
              pwVar8 = _guard_xfg_dispatch_icall_nop
                                 (L"&UImpactFXManagerComponent::OnTrackedParticleSystemFinished",
                                  L"::");
              while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
                pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
                pwVar10 = pwVar4;
              }
              FName::FName(&local_res8,pwVar10 + 2,1);
              TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x8a8,param_1,local_res8);
              FUN_142600fa0(lVar1);
              goto LAB_142d726f1;
            }
          }
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&UImpactFXManagerComponent::OnTrackedComponentDeactivated",L"::");
          pwVar10 = (wchar_t *)0x0;
          while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar10 = pwVar4;
          }
          FName::FName(&local_res10,pwVar10 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                    (*(longlong *)(lVar12 + *(longlong *)(param_1 + 0x1f8)) + 0x108,param_1,
                     local_res10);
          plVar2 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x1f8));
          (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
        }
      }
LAB_142d726f1:
      lVar12 = lVar12 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x204)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1f8,0);
    return;
  }
  return;
}



// FUNCTION 142d72750 FUN_142d72750 body=664 status=ok
// SIG undefined FUN_142d72750(void)

void FUN_142d72750(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  longlong local_a8;
  longlong lStack_a0;
  float local_98;
  undefined4 uStack_94;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  if ((*(longlong *)(param_1 + 0x160) != 0) || (*(longlong *)(param_1 + 0x130) != 0)) {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      bVar7 = false;
    }
    else {
      fVar12 = (float)FUN_142d19870();
      bVar7 = fVar12 <= 0.0;
    }
    cVar9 = FUN_1407c3030(param_1 + 0x98);
    if ((((cVar9 == '\0') || (!bVar7)) &&
        ((*(longlong *)(param_2 + 0x2d0) == 0 ||
         ((*(char *)(*(longlong *)(param_2 + 0x2d0) + 0x248) == '\0' || (bVar7)))))) &&
       ((FUN_142d58e60(param_1,&local_a8,param_2), local_a8 != 0 &&
        ((0.0 < local_98 || (fStack_74 != 0.0)))))) {
      plVar1 = (longlong *)(param_1 + 0x270);
      plVar5 = (longlong *)*plVar1;
      iVar4 = *(int *)(param_1 + 0x278);
      lVar11 = (longlong)iVar4 * 0x58;
      for (plVar10 = plVar5; plVar10 != plVar5 + (longlong)iVar4 * 0xb; plVar10 = plVar10 + 0xb) {
        if ((((*plVar10 == local_a8) && (plVar10[1] == lStack_a0)) && (plVar10[3] == lStack_90)) &&
           (plVar10[4] == local_88)) {
          iVar8 = (int)(((longlong)plVar10 - (longlong)plVar5) / 0x58);
          if (iVar8 != -1) {
            plVar5 = *(longlong **)(param_2 + 0x50);
            if (plVar5 == (longlong *)0x0) goto LAB_142d728f1;
            lVar11 = plVar5[0x1f];
            if (lVar11 == 0) {
              (**(code **)(*plVar5 + 0x368))(plVar5);
              lVar11 = plVar5[0x1f];
              if (lVar11 == 0) goto LAB_142d728f1;
            }
            if (*(char *)(lVar11 + 0x81) != '\0') {
              lVar11 = (longlong)iVar8 * 0x58 + *plVar1;
              *(float *)(lVar11 + 0x10) = local_98 + *(float *)(lVar11 + 0x10);
              *(float *)(lVar11 + 0x34) = fStack_74 + *(float *)(lVar11 + 0x34);
            }
            goto LAB_142d728f1;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x278) = iVar4 + 1;
      if (*(int *)(param_1 + 0x27c) < iVar4 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      lVar6 = *plVar1;
      *(longlong *)(lVar11 + lVar6) = local_a8;
      ((longlong *)(lVar11 + lVar6))[1] = lStack_a0;
      puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar6);
      *puVar2 = CONCAT44(uStack_94,local_98);
      puVar2[1] = lStack_90;
      plVar1 = (longlong *)(lVar11 + 0x20 + lVar6);
      *plVar1 = local_88;
      plVar1[1] = lStack_80;
      puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar6);
      *puVar2 = CONCAT44(fStack_74,local_78);
      puVar2[1] = uStack_70;
      puVar3 = (undefined4 *)(lVar11 + 0x40 + lVar6);
      *puVar3 = local_68;
      puVar3[1] = uStack_64;
      puVar3[2] = uStack_60;
      puVar3[3] = uStack_5c;
      *(undefined8 *)(lVar11 + 0x50 + lVar6) = local_58;
LAB_142d728f1:
      if (bVar7) {
        (**(code **)(**(longlong **)(param_1 + 0x168) + 0x428))();
      }
      else {
        FUN_142d6fac0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142d729f0 FUN_142d729f0 body=87 status=ok
// SIG undefined FUN_142d729f0(void)

void FUN_142d729f0(longlong param_1)

{
  longlong *plVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)(param_1 + 200) != '\0') {
    plVar1 = (longlong *)FUN_142c6f130(param_1);
    if (plVar1 != (longlong *)0x0) {
      if (((*(byte *)(plVar1 + 0x12) & 0x20) == 0) && ((char)plVar1[0x25] != '\x03')) {
        return;
      }
      (**(code **)(*plVar1 + 0x3a0))(plVar1,0x3f800000);
    }
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



// FUNCTION 142d72a50 FUN_142d72a50 body=34 status=ok
// SIG undefined FUN_142d72a50(void)

void FUN_142d72a50(undefined8 param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_142d74160(param_1);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 142d72a80 FUN_142d72a80 body=136 status=ok
// SIG undefined FUN_142d72a80(void)

void FUN_142d72a80(longlong param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = param_2 + *(float *)(param_1 + 0x51c);
  *(float *)(param_1 + 0x51c) = fVar3;
  if ((*(char *)(param_1 + 0x510) == '\0') &&
     (*(float *)(param_1 + 0x514) <= fVar3 && fVar3 != *(float *)(param_1 + 0x514))) {
    FUN_142c652b0();
    *(undefined1 *)(param_1 + 0x510) = 1;
  }
  FUN_142c85cd0(param_1,param_2);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x1e9) == '\0') {
    uVar2 = FUN_142c725a0(param_1);
    cVar1 = FUN_142db72e0(param_1 + 0x520,uVar2);
    if (cVar1 != '\0') {
      FUN_142c76980(param_1);
    }
  }
  return;
}



// FUNCTION 142d72b10 FUN_142d72b10 body=204 status=ok
// SIG undefined FUN_142d72b10(void)

void FUN_142d72b10(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_142d5c4e0(param_1 + 8,0x80);
  iVar3 = *(int *)(param_1 + 7000) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 * 0x14;
    do {
      lVar2 = *(longlong *)(param_1 + 0x1b50);
      if (*(longlong *)(param_1 + 0x1b50) == 0) {
        lVar2 = param_1 + 0x1150;
      }
      piVar1 = (int *)(lVar2 + 0x10 + lVar4);
      *piVar1 = *piVar1 + 1;
      if (DAT_1466ad3f8 < *(int *)(lVar2 + 0x10 + lVar4)) {
        FUN_142d6cf60(param_1 + 0x1150,iVar3,1,iVar3 == 0);
      }
      lVar4 = lVar4 + -0x14;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  if (0x7f < *(int *)(param_1 + 0x1b5c)) {
    return;
  }
  FUN_142d6dda0(param_1 + 0x1150,0x80);
  return;
}



// FUNCTION 142d72be0 PurgeUnreferencedMIDsTicker body=16 status=ok
// SIG undefined PurgeUnreferencedMIDsTicker(void)

undefined1 FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker(void)

{
  FUN_142d751d0();
  return 1;
}



// FUNCTION 142d72bf0 FUN_142d72bf0 body=467 status=ok
// SIG undefined FUN_142d72bf0(void)

void FUN_142d72bf0(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_3 != 3) {
    FUN_142357eb0();
    plVar1 = (longlong *)(param_1 + 400);
    lVar4 = *plVar1;
    uVar6 = (ulonglong)*(int *)(param_1 + 0x198);
    lVar7 = uVar6 * 0xf8 + lVar4;
    if (lVar4 != lVar7) {
      do {
        iVar3 = *(int *)(param_1 + 0x188);
        *(int *)(param_1 + 0x188) = iVar3 + 1;
        if (*(int *)(param_1 + 0x18c) < iVar3 + 1) {
          TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(param_1 + 0x180,iVar3);
        }
        FUN_142d50fa0((longlong)iVar3 * 0xf8 + *(longlong *)(param_1 + 0x180),lVar4);
        lVar4 = lVar4 + 0xf8;
      } while (lVar4 != lVar7);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x198);
    }
    if ((int)uVar6 != 0) {
      lVar4 = *plVar1 + 0xb0;
      do {
        thunk_FUN_142478640(lVar4 + 0xc);
        thunk_FUN_142478640(lVar4);
        thunk_FUN_142478640(lVar4 + -0x1c);
        thunk_FUN_142478640(lVar4 + -0x28);
        thunk_FUN_142478640(lVar4 + -0x34);
        thunk_FUN_142478640(lVar4 + -0x40);
        thunk_FUN_142478640(lVar4 + -0x4c);
        thunk_FUN_142478640(lVar4 + -0x58);
        thunk_FUN_142478640(lVar4 + -100);
        thunk_FUN_142478640(lVar4 + -0x70);
        thunk_FUN_142478640(lVar4 + -0x7c);
        thunk_FUN_142478640(lVar4 + -0x88);
        thunk_FUN_142478640(lVar4 + -0x94);
        thunk_FUN_142478640(lVar4 + -0xa0);
        lVar4 = lVar4 + 0xf8;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 != 0);
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    iVar2 = FUN_14233f450(param_1);
    if ((iVar2 == 3) && (0 < *(int *)(param_1 + 0x188))) {
      do {
        FUN_142d73750((longlong)iVar3 * 0xf8 + *(longlong *)(param_1 + 0x180),param_2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x188));
    }
  }
  return;
}



// FUNCTION 142d72dd0 FUN_142d72dd0 body=125 status=ok
// SIG undefined FUN_142d72dd0(void)

void FUN_142d72dd0(longlong *param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_142357eb0();
  if (0 < (int)param_1[0x40]) {
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    fVar3 = param_2 + *(float *)((longlong)param_1 + 0x1c4) + 0.1;
    if (fVar3 < *(float *)(lVar2 + 0x790) || fVar3 == *(float *)(lVar2 + 0x790)) {
      FUN_142d72530(param_1);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,0);
  }
  return;
}



// FUNCTION 142d72e50 FUN_142d72e50 body=709 status=ok
// SIG undefined FUN_142d72e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d72e50(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 in_XMM5 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [80];
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if ((((lVar1 != 0) && (plVar2 = *(longlong **)(param_1 + 0x188), plVar2 != (longlong *)0x0)) &&
      (*(longlong *)(lVar1 + 0x1a0) == plVar2[0x91])) && (*(longlong *)(lVar1 + 0x1a8) == 0)) {
    (**(code **)(*plVar2 + 0x830))(plVar2,&local_98,local_58);
    FRotator::RotateVector(local_58,&local_c8,&DAT_1464aa7a8);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar1 == 0) {
      local_b8 = _DAT_1468b5d90;
      local_b0 = DAT_1468b5d98;
    }
    else {
      local_b8 = *(undefined8 *)(lVar1 + 0x220);
      local_b0 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_80 = local_c0;
    local_78 = local_98;
    local_70 = local_90;
    local_68 = local_b8;
    local_60 = (float)local_b0;
    UKismetMathLibrary::FindClosestPointOnLine(&local_a8,&local_68,&local_78,local_88);
    fVar8 = *(float *)(param_1 + 0x178);
    lVar1 = *(longlong *)(param_1 + 0x180);
    lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x1a0) + 0x168);
    if (lVar3 == 0) {
      pfVar7 = (float *)&DAT_1468b5b70;
    }
    else {
      pfVar7 = (float *)(lVar3 + 0x210);
    }
    auVar12 = *(undefined1 (*) [16])(pfVar7 + 8);
    fVar4 = auVar12._0_4_;
    fVar5 = auVar12._4_4_;
    fVar6 = auVar12._8_4_;
    fVar18 = *pfVar7 * _DAT_146b32150;
    fVar19 = pfVar7[1] * fRam0000000146b32154;
    fVar20 = pfVar7[2] * fRam0000000146b32158;
    fVar21 = pfVar7[3] * fRam0000000146b3215c;
    auVar12 = rcpps(in_XMM5,auVar12);
    fVar15 = (float)((uint)((local_c8 * fVar8 + local_a8) - pfVar7[4]) & _DAT_146b32070);
    fVar16 = (float)((uint)((fStack_c4 * fVar8 + local_a4) - pfVar7[5]) & uRam0000000146b32074);
    fVar17 = (float)((uint)((local_c0 * fVar8 + local_a0) - pfVar7[6]) & uRam0000000146b32078);
    fVar8 = fVar17 * fVar19 - fVar16 * fVar20;
    fVar9 = fVar15 * fVar20 - fVar17 * fVar18;
    fVar10 = fVar16 * fVar18 - fVar15 * fVar19;
    fVar11 = auVar12._0_4_;
    fVar13 = auVar12._4_4_;
    fVar14 = auVar12._8_4_;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar4;
    fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar5;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar6;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar4;
    fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar5;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar6;
    local_60 = ((fVar9 * fVar18 - fVar8 * fVar19) + fVar21 * fVar10 + fVar17) *
               (float)(-(uint)((float)((uint)fVar6 & uRam0000000146b320f8) <= fRam0000000146b32148)
                       & (uint)fVar14 ^ (uint)fVar14);
    *(ulonglong *)(lVar1 + 0x1cc) =
         CONCAT44(((fVar8 * fVar20 - fVar10 * fVar18) + fVar21 * fVar9 + fVar16) *
                  (float)(-(uint)((float)((uint)fVar5 & uRam0000000146b320f4) <=
                                 fRam0000000146b32144) & (uint)fVar13 ^ (uint)fVar13),
                  ((fVar10 * fVar19 - fVar9 * fVar20) + fVar21 * fVar8 + fVar15) *
                  (float)(-(uint)((float)((uint)fVar4 & _DAT_146b320f0) <= _DAT_146b32140) &
                          (uint)fVar11 ^ (uint)fVar11));
    *(float *)(lVar1 + 0x1d4) = local_60;
    FUN_142357eb0(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 142d73120 FUN_142d73120 body=1415 status=ok
// SIG undefined FUN_142d73120(void)

void FUN_142d73120(longlong param_1,float param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined1 local_98 [12];
  undefined1 local_8c [132];
  
  FUN_142357eb0();
  if ((*(char *)(param_1 + 0x225) == '\0') && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    FUN_142d6c920(param_1);
  }
  if (*(char *)(param_1 + 0x200) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x208) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) goto LAB_142d731cf;
  }
  *(undefined8 *)(param_1 + 0x208) = 0;
  FUN_142d75c40(param_1);
LAB_142d731cf:
  if ((((*(longlong *)(param_1 + 0x210) != 0) &&
       (*(longlong **)(param_1 + 0x208) != (longlong *)0x0)) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0x2a0))(), cVar2 != '\0')) &&
     (((*(longlong *)(param_1 + 0x1a0) != 0 || (*(longlong *)(param_1 + 0x1a8) != 0)) ||
      ((DAT_1468b5d90 != *(float *)(param_1 + 0x1b8) ||
       ((DAT_1468b5d94 != *(float *)(param_1 + 0x1bc) ||
        (DAT_1468b5d98 != *(float *)(param_1 + 0x1c0))))))))) {
    FUN_142d613d0(param_1,&local_a8);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x210) + 0x168);
    if (lVar4 == 0) {
      local_b8 = DAT_1468b5d90;
      fStack_b4 = DAT_1468b5d94;
      local_b0 = DAT_1468b5d98;
    }
    else {
      local_b8 = *(float *)(lVar4 + 0x220);
      fStack_b4 = *(float *)(lVar4 + 0x224);
      local_b0 = *(float *)(lVar4 + 0x228);
    }
    local_d8 = (float)local_a8 - local_b8;
    local_d0 = local_a0 - local_b0;
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x18c);
    local_c0 = *(float *)(*(longlong *)(param_1 + 0x208) + 0x194);
    local_c8._0_4_ = (float)uVar5;
    local_d4 = local_a8._4_4_ - fStack_b4;
    fVar11 = (float)local_c8 * (float)local_c8;
    local_c8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    fVar8 = local_c8._4_4_ * local_c8._4_4_;
    fVar15 = local_d4 * local_d4 + local_d8 * local_d8 + local_d0 * local_d0;
    fVar9 = *(float *)(param_1 + 0x1c4) * *(float *)(param_1 + 0x1c4);
    fVar10 = local_c0 * local_c0;
    local_c8 = uVar5;
    if (*(char *)(param_1 + 0x224) == '\0') {
      if (fVar15 <= fVar9) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x1f0,0);
        *(undefined1 *)(param_1 + 0x224) = 1;
      }
    }
    else if (fVar9 < fVar15) {
      *(undefined1 *)(param_1 + 0x224) = 0;
    }
    fVar9 = local_d4;
    fVar13 = local_d0;
    fVar14 = local_d8;
    if (((*(char *)(param_1 + 0x178) == '\0') &&
        (*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) < fVar15)) &&
       ((fVar16 = *(float *)(param_1 + 400), fVar16 <= 0.0 ||
        (*(float *)(param_1 + 0x21c) <= fVar16 && fVar16 != *(float *)(param_1 + 0x21c))))) {
      FVector::Rotation(&local_c8,&local_b8);
      FVector::Rotation(&local_d8,&local_a8);
      uVar5 = FMath::RInterpTo(local_98,&local_b8,&local_a8,param_2,
                               *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x198) * param_2);
      puVar6 = (undefined8 *)FRotator::Vector(uVar5,local_8c);
      local_a8 = *puVar6;
      fVar9 = (float)((ulonglong)local_a8 >> 0x20);
      fVar13 = *(float *)(puVar6 + 1);
      fVar14 = (float)local_a8;
    }
    fVar16 = *(float *)(param_1 + 0x194);
    if (fVar16 <= 0.0) {
      fVar16 = SQRT(fVar11 + fVar8 + fVar10) * ((*(float *)(param_1 + 0x198) - 1.0) * param_2 + 1.0)
      ;
    }
    if (*(char *)(param_1 + 0x180) != '\0') {
      fVar8 = *(float *)(param_1 + 0x220);
      fVar10 = *(float *)(param_1 + 0x184);
      if (fVar8 != fVar10) {
        fVar11 = param_2 * *(float *)(param_1 + 0x188);
        if (fVar8 <= fVar10) {
          fVar8 = fVar8 + fVar11;
          if (fVar10 <= fVar8) {
            fVar8 = fVar10;
          }
        }
        else {
          fVar8 = fVar8 - fVar11;
          if (fVar8 <= fVar10) {
            fVar8 = fVar10;
          }
        }
        *(float *)(param_1 + 0x220) = fVar8;
      }
    }
    fVar11 = fVar9 * fVar9 + fVar14 * fVar14 + fVar13 * fVar13;
    fVar8 = fVar9;
    local_a0 = fVar13;
    fVar10 = fVar14;
    if ((fVar11 != 1.0) &&
       (fVar8 = DAT_1468b5d94, local_a0 = DAT_1468b5d98, fVar10 = DAT_1468b5d90, 1e-08 <= fVar11)) {
      auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar10 = auVar12._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
      fVar8 = fVar9 * fVar10;
      local_a0 = fVar13 * fVar10;
      fVar10 = fVar14 * fVar10;
    }
    lVar4 = *(longlong *)(param_1 + 0x208);
    local_a0 = local_a0 * fVar16;
    *(ulonglong *)(lVar4 + 0x18c) = CONCAT44(fVar8 * fVar16,fVar10 * fVar16);
    *(float *)(lVar4 + 0x194) = local_a0;
    fVar8 = *(float *)(param_1 + 0x1d8);
    *(float *)(param_1 + 0x21c) = param_2 + *(float *)(param_1 + 0x21c);
    if ((0.0 < fVar8) && (fVar15 <= fVar8 * fVar8)) {
      cVar2 = *(char *)(param_1 + 0x200);
      *(undefined1 *)(param_1 + 0x224) = 0;
      if (((bool)cVar2 != (cVar2 == '\0')) &&
         ((*(bool *)(param_1 + 0x200) = cVar2 == '\0', cVar2 == '\0' &&
          (*(char *)(param_1 + 0x225) == '\0')))) {
        FUN_142d6c920(param_1);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1e0,0)
      ;
    }
  }
  return;
}



// FUNCTION 142d736b0 FUN_142d736b0 body=153 status=ok
// SIG undefined FUN_142d736b0(void)

void FUN_142d736b0(longlong *param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1[3] + 0x118) != 0) {
    if (*(char *)(*(longlong *)(param_1[3] + 0x118) + 0x128) == '\x03') {
      do {
        cVar1 = FUN_142d74530(param_1,param_2);
      } while (cVar1 != '\0');
      return;
    }
    if ((byte)((char)param_1[0x9b] - 5U) < 2) {
      *(float *)(param_1 + 0x9e) = param_2 + *(float *)(param_1 + 0x9e);
      uVar3 = (**(code **)(*param_1 + 0x110))(param_1);
      lVar2 = FUN_142d60c00(param_1);
      if (lVar2 != 0) {
        FUN_142cac380(lVar2,uVar3);
      }
    }
  }
  return;
}



// FUNCTION 142d73750 FUN_142d73750 body=982 status=ok
// SIG undefined FUN_142d73750(void)

void FUN_142d73750(longlong param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0xa4) = 0;
  if ((*(longlong *)(lVar1 + 0x30) == 0) || (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x48) == '\0'))
  {
    fVar7 = *(float *)(param_1 + 0x20);
  }
  else {
    fVar7 = (float)(int)*(float *)(param_1 + 0x20);
  }
  fVar10 = *(float *)(param_1 + 0xa0);
  uVar4 = 1;
  if (((ABS(fVar10 - *(float *)(param_1 + 0x14)) < 0.0001) &&
      (0.0001 <= ABS(*(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0x14)))) && (fVar10 < fVar7))
  {
    FUN_142d67540(param_1);
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0xee) = 0;
    if (fVar10 != *(float *)(param_1 + 0xa0)) {
      FUN_142d67f70(param_1);
      *(float *)(param_1 + 0xdc) = fVar10;
    }
  }
  cVar2 = FUN_14247c3d0(param_1 + 0x94,0);
  if (cVar2 == '\0') goto LAB_142d73af1;
  fVar5 = (float)FUN_142d62870(param_1);
  fVar7 = *(float *)(param_1 + 0xa0);
  fVar10 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x44) - fVar10;
  if ((fVar7 != *(float *)(param_1 + 0xe0)) || (fVar9 != 0.0)) {
    FUN_142d6d6c0(param_1);
    fVar10 = *(float *)(param_1 + 0x38);
    fVar7 = *(float *)(param_1 + 0xa0);
  }
  fVar8 = *(float *)(param_1 + 0x50);
  if (fVar8 != 0.0) {
    fVar11 = *(float *)(param_1 + 0x5c);
    cVar2 = FUN_142d639f0(param_1,0);
    if (cVar2 != '\0') {
      fVar11 = fVar11 + *(float *)(param_1 + 0x68);
    }
    if ((*(float *)(param_1 + 0xe4) <= 0.0) || (*(float *)(param_1 + 0xe4) + fVar11 <= fVar5)) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      fVar9 = fVar9 + fVar8;
    }
  }
  fVar11 = (float)FUN_142d5b670(param_1);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar8 = *(float *)(param_1 + 0x14);
  fVar6 = fVar5 - fVar8;
  fVar10 = fVar10 + fVar9 + fVar11;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0xa4) = fVar10;
  if ((0.0 < fVar10) && (0.0 < fVar6)) {
    *(float *)(param_1 + 0xa8) = (fVar10 - fVar8) / fVar6;
  }
  fVar10 = fVar9 + fVar11 + *(float *)(param_1 + 0xb4);
  if (0.0 < *(float *)(param_1 + 0xc0)) {
    fVar10 = fVar10 + *(float *)(param_1 + 0xc0) * fVar6;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  fVar10 = fVar10 * param_2 + *(float *)(param_1 + 0xe8) + fVar7;
  if (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x48) != '\0') {
    *(float *)(param_1 + 0xe8) = fVar10 - (float)(int)fVar10;
    fVar10 = (float)(int)fVar10;
  }
  *(float *)(param_1 + 0xa0) = fVar10;
  if (fVar8 <= fVar5) {
    if (*(float *)(param_1 + 0x2c) <= 0.0) {
LAB_142d73a1a:
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
         (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x48) != '\0')) {
        fVar5 = (float)(int)fVar5;
      }
    }
    else if (lVar1 != 0) {
      fVar5 = (1.0 - *(float *)(param_1 + 0x2c)) * fVar5;
      if (fVar5 <= *(float *)(lVar1 + 0x80)) {
        fVar5 = *(float *)(lVar1 + 0x80);
      }
      goto LAB_142d73a1a;
    }
    fVar10 = *(float *)(param_1 + 0xa0);
    if ((fVar8 <= fVar10) && (fVar8 = fVar10, fVar5 <= fVar10)) {
      fVar8 = fVar5;
    }
  }
  cVar2 = *(char *)(param_1 + 0xf0);
  *(float *)(param_1 + 0xa0) = fVar8;
  fVar8 = fVar8 - fVar7;
  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_1 + 0xef);
  *(char *)(param_1 + 0xed) = cVar2;
  *(bool *)(param_1 + 0xef) = 1e-08 < fVar8;
  if ((1e-08 < fVar8) || (-1e-08 <= fVar8)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0xf0) = cVar3;
  if (cVar2 == '\0') {
LAB_142d73abb:
    if (cVar3 != '\0') {
      FUN_142d675d0(param_1);
    }
  }
  else if (cVar3 == '\0') {
    FUN_142d67780(param_1);
  }
  else if (cVar2 == '\0') goto LAB_142d73abb;
  if (*(char *)(param_1 + 0xec) == '\0') {
    if (*(char *)(param_1 + 0xef) != '\0') {
      FUN_142d67930(param_1);
    }
  }
  else if (*(char *)(param_1 + 0xef) == '\0') {
    FUN_142d678a0(param_1);
  }
LAB_142d73af1:
  FUN_142d5a890(param_1,uVar4);
  FUN_142d75970(param_1,0);
  return;
}



// FUNCTION 142d73b60 FUN_142d73b60 body=991 status=ok
// SIG undefined FUN_142d73b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d73b60(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
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
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x24);
  if (lVar3 != 0) {
    *param_1 = 1;
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x2c);
    if (plVar4 == (longlong *)0x0) {
      lVar3 = *(longlong *)(lVar3 + 0x168);
      if (lVar3 == 0) {
        fVar7 = 0.0;
        fVar9 = 0.0;
        fVar10 = 0.0;
        fVar11 = (float)(_DAT_146b32060 & _DAT_146b32070);
        fVar12 = (float)(uRam0000000146b32064 & uRam0000000146b32074);
        fVar13 = (float)(uRam0000000146b32068 & uRam0000000146b32078);
        uVar14 = (uint)fRam0000000146b3206c & uRam0000000146b3207c;
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        fVar25 = fRam0000000146b3206c;
      }
      else {
        fVar15 = *(float *)(lVar3 + 0x210);
        fVar16 = *(float *)(lVar3 + 0x214);
        fVar17 = *(float *)(lVar3 + 0x218);
        fVar7 = *(float *)(lVar3 + 0x220);
        fVar9 = *(float *)(lVar3 + 0x224);
        fVar10 = *(float *)(lVar3 + 0x228);
        fVar11 = *(float *)(lVar3 + 0x230);
        fVar12 = *(float *)(lVar3 + 0x234);
        fVar13 = *(float *)(lVar3 + 0x238);
        uVar14 = *(uint *)(lVar3 + 0x23c);
        fVar25 = *(float *)(lVar3 + 0x21c);
      }
      auVar8._4_4_ = -(uint)(fRam0000000146b32144 < (float)((uint)fVar12 & uRam0000000146b320f4));
      auVar8._0_4_ = -(uint)(_DAT_146b32140 < (float)((uint)fVar11 & _DAT_146b320f0));
      auVar8._8_4_ = -(uint)(fRam0000000146b32148 < (float)((uint)fVar13 & uRam0000000146b320f8));
      auVar8._12_4_ = -(uint)(fRam0000000146b3214c < (float)(uVar14 & uRam0000000146b320fc));
      iVar6 = movmskps((int)lVar3,auVar8);
      fVar18 = _DAT_1468b5b90;
      fVar19 = fRam00000001468b5b94;
      fVar20 = fRam00000001468b5b98;
      fVar21 = _DAT_1468b5b70;
      fVar22 = fRam00000001468b5b74;
      fVar23 = fRam00000001468b5b78;
      fVar24 = fRam00000001468b5b7c;
      fVar26 = _DAT_1468b5b80;
      fVar27 = fRam00000001468b5b84;
      fVar28 = fRam00000001468b5b88;
      if (iVar6 != 0) {
        fVar21 = fVar15 * _DAT_146b32150;
        fVar22 = fVar16 * fRam0000000146b32154;
        fVar23 = fVar17 * fRam0000000146b32158;
        fVar24 = fVar25 * fRam0000000146b3215c;
        auVar2._4_4_ = fVar12;
        auVar2._0_4_ = fVar11;
        auVar2._8_4_ = fVar13;
        auVar2._12_4_ = uVar14;
        auVar8 = rcpps(in_XMM1,auVar2);
        fVar15 = auVar8._0_4_;
        fVar16 = auVar8._4_4_;
        fVar17 = auVar8._8_4_;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar11;
        fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar12;
        fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar13;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar11;
        fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar12;
        fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar13;
        fVar18 = (float)((-(uint)((float)((uint)fVar11 & _DAT_146b320f0) <= _DAT_146b32140) &
                          (uint)fVar15 ^ (uint)fVar15) & _DAT_146b32070);
        fVar19 = (float)((-(uint)((float)((uint)fVar12 & uRam0000000146b320f4) <=
                                 fRam0000000146b32144) & (uint)fVar16 ^ (uint)fVar16) &
                        uRam0000000146b32074);
        fVar20 = (float)((-(uint)((float)((uint)fVar13 & uRam0000000146b320f8) <=
                                 fRam0000000146b32148) & (uint)fVar17 ^ (uint)fVar17) &
                        uRam0000000146b32078);
        fVar7 = fVar18 * fVar7;
        fVar9 = fVar19 * fVar9;
        fVar10 = fVar20 * fVar10;
        fVar15 = fVar10 * fVar22 - fVar9 * fVar23;
        fVar16 = fVar7 * fVar23 - fVar10 * fVar21;
        fVar17 = fVar9 * fVar21 - fVar7 * fVar22;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar26 = (float)((uint)(0.0 - ((fVar17 * fVar22 - fVar16 * fVar23) + fVar24 * fVar15 + fVar7
                                      )) & _DAT_146b32070);
        fVar27 = (float)((uint)(0.0 - ((fVar15 * fVar23 - fVar17 * fVar21) + fVar24 * fVar16 + fVar9
                                      )) & uRam0000000146b32074);
        fVar28 = (float)((uint)(0.0 - ((fVar16 * fVar21 - fVar15 * fVar22) +
                                      fVar24 * fVar17 + fVar10)) & uRam0000000146b32078);
      }
    }
    else {
      pfVar5 = (float *)(**(code **)(*plVar4 + 0x420))
                                  (plVar4,local_88,*(undefined8 *)(param_1 + 0x38),0);
      auVar8 = *(undefined1 (*) [16])(pfVar5 + 8);
      fVar15 = auVar8._0_4_;
      fVar16 = auVar8._4_4_;
      fVar17 = auVar8._8_4_;
      auVar1._4_4_ = -(uint)(fRam0000000146b32144 < (float)((uint)fVar16 & uRam0000000146b320f4));
      auVar1._0_4_ = -(uint)(_DAT_146b32140 < (float)((uint)fVar15 & _DAT_146b320f0));
      auVar1._8_4_ = -(uint)(fRam0000000146b32148 < (float)((uint)fVar17 & uRam0000000146b320f8));
      auVar1._12_4_ = -(uint)(fRam0000000146b3214c < (float)(auVar8._12_4_ & uRam0000000146b320fc));
      iVar6 = movmskps((int)plVar4,auVar1);
      fVar18 = _DAT_1468b5b90;
      fVar19 = fRam00000001468b5b94;
      fVar20 = fRam00000001468b5b98;
      fVar21 = _DAT_1468b5b70;
      fVar22 = fRam00000001468b5b74;
      fVar23 = fRam00000001468b5b78;
      fVar24 = fRam00000001468b5b7c;
      fVar26 = _DAT_1468b5b80;
      fVar27 = fRam00000001468b5b84;
      fVar28 = fRam00000001468b5b88;
      if (iVar6 != 0) {
        fVar21 = *pfVar5 * _DAT_146b32150;
        fVar22 = pfVar5[1] * fRam0000000146b32154;
        fVar23 = pfVar5[2] * fRam0000000146b32158;
        fVar24 = pfVar5[3] * fRam0000000146b3215c;
        auVar8 = rcpps(in_XMM1,auVar8);
        fVar7 = auVar8._0_4_;
        fVar9 = auVar8._4_4_;
        fVar10 = auVar8._8_4_;
        fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar15;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar16;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar17;
        fVar7 = (fVar7 + fVar7) - fVar7 * fVar7 * fVar15;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar16;
        fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar17;
        fVar18 = (float)((-(uint)((float)((uint)fVar15 & _DAT_146b320f0) <= _DAT_146b32140) &
                          (uint)fVar7 ^ (uint)fVar7) & _DAT_146b32070);
        fVar19 = (float)((-(uint)((float)((uint)fVar16 & uRam0000000146b320f4) <=
                                 fRam0000000146b32144) & (uint)fVar9 ^ (uint)fVar9) &
                        uRam0000000146b32074);
        fVar20 = (float)((-(uint)((float)((uint)fVar17 & uRam0000000146b320f8) <=
                                 fRam0000000146b32148) & (uint)fVar10 ^ (uint)fVar10) &
                        uRam0000000146b32078);
        fVar7 = pfVar5[4] * fVar18;
        fVar9 = pfVar5[5] * fVar19;
        fVar10 = pfVar5[6] * fVar20;
        fVar15 = fVar10 * fVar22 - fVar9 * fVar23;
        fVar16 = fVar7 * fVar23 - fVar10 * fVar21;
        fVar17 = fVar9 * fVar21 - fVar7 * fVar22;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar26 = (float)((uint)(0.0 - ((fVar17 * fVar22 - fVar16 * fVar23) + fVar24 * fVar15 + fVar7
                                      )) & _DAT_146b32070);
        fVar27 = (float)((uint)(0.0 - ((fVar15 * fVar23 - fVar17 * fVar21) + fVar24 * fVar16 + fVar9
                                      )) & uRam0000000146b32074);
        fVar28 = (float)((uint)(0.0 - ((fVar16 * fVar21 - fVar15 * fVar22) +
                                      fVar24 * fVar17 + fVar10)) & uRam0000000146b32078);
      }
    }
    fVar7 = *(float *)(param_1 + 4) * fVar18;
    fVar9 = *(float *)(param_1 + 8) * fVar19;
    fVar10 = *(float *)(param_1 + 0xc) * fVar20;
    fVar15 = fVar10 * fVar22 - fVar9 * fVar23;
    fVar16 = fVar7 * fVar23 - fVar10 * fVar21;
    fVar17 = fVar9 * fVar21 - fVar7 * fVar22;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar17 = fVar17 + fVar17;
    *(ulonglong *)(param_1 + 4) =
         CONCAT44((fVar15 * fVar23 - fVar17 * fVar21) + fVar24 * fVar16 + fVar9 + fVar27,
                  (fVar17 * fVar22 - fVar16 * fVar23) + fVar24 * fVar15 + fVar7 + fVar26);
    *(float *)(param_1 + 0xc) =
         (fVar16 * fVar21 - fVar15 * fVar22) + fVar24 * fVar17 + fVar10 + fVar28;
    fVar18 = *(float *)(param_1 + 0x10) * fVar18;
    fVar19 = *(float *)(param_1 + 0x14) * fVar19;
    fVar20 = *(float *)(param_1 + 0x18) * fVar20;
    fVar15 = fVar20 * fVar22 - fVar19 * fVar23;
    fVar16 = fVar18 * fVar23 - fVar20 * fVar21;
    fVar17 = fVar19 * fVar21 - fVar18 * fVar22;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar17 = fVar17 + fVar17;
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT44((fVar15 * fVar23 - fVar17 * fVar21) + fVar24 * fVar16 + fVar19,
                  (fVar17 * fVar22 - fVar16 * fVar23) + fVar24 * fVar15 + fVar18);
    *(float *)(param_1 + 0x18) = (fVar16 * fVar21 - fVar15 * fVar22) + fVar24 * fVar17 + fVar20;
  }
  return;
}



// FUNCTION 142d73f40 FUN_142d73f40 body=540 status=ok
// SIG undefined FUN_142d73f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d73f40(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*param_1 != '\0') {
    *param_1 = '\0';
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x24);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x2c);
      if (plVar2 == (longlong *)0x0) {
        lVar1 = *(longlong *)(lVar1 + 0x168);
        if (lVar1 == 0) {
          fVar5 = 0.0;
          fVar7 = 0.0;
          fVar9 = 0.0;
          fVar11 = (float)(_DAT_146b32060 & _DAT_146b32070);
          fVar13 = (float)(uRam0000000146b32064 & uRam0000000146b32074);
          fVar15 = (float)(uRam0000000146b32068 & uRam0000000146b32078);
          fVar16 = 0.0;
          fVar17 = 0.0;
          fVar18 = 0.0;
          fVar19 = fRam0000000146b3206c;
        }
        else {
          fVar16 = *(float *)(lVar1 + 0x210);
          fVar17 = *(float *)(lVar1 + 0x214);
          fVar18 = *(float *)(lVar1 + 0x218);
          fVar5 = *(float *)(lVar1 + 0x220);
          fVar7 = *(float *)(lVar1 + 0x224);
          fVar9 = *(float *)(lVar1 + 0x228);
          fVar11 = *(float *)(lVar1 + 0x230);
          fVar13 = *(float *)(lVar1 + 0x234);
          fVar15 = *(float *)(lVar1 + 0x238);
          fVar19 = *(float *)(lVar1 + 0x21c);
        }
      }
      else {
        pfVar3 = (float *)(**(code **)(*plVar2 + 0x420))
                                    (plVar2,local_78,*(undefined8 *)(param_1 + 0x38),0);
        fVar5 = pfVar3[4];
        fVar7 = pfVar3[5];
        fVar9 = pfVar3[6];
        fVar11 = pfVar3[8];
        fVar13 = pfVar3[9];
        fVar15 = pfVar3[10];
        fVar16 = *pfVar3;
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
      }
      fVar10 = *(float *)(param_1 + 4) * fVar11;
      fVar12 = *(float *)(param_1 + 8) * fVar13;
      fVar14 = *(float *)(param_1 + 0xc) * fVar15;
      fVar4 = fVar14 * fVar17 - fVar12 * fVar18;
      fVar6 = fVar10 * fVar18 - fVar14 * fVar16;
      fVar8 = fVar12 * fVar16 - fVar10 * fVar17;
      fVar4 = fVar4 + fVar4;
      fVar6 = fVar6 + fVar6;
      fVar8 = fVar8 + fVar8;
      *(ulonglong *)(param_1 + 4) =
           CONCAT44((fVar4 * fVar18 - fVar8 * fVar16) + fVar19 * fVar6 + fVar12 + fVar7,
                    (fVar8 * fVar17 - fVar6 * fVar18) + fVar19 * fVar4 + fVar10 + fVar5);
      *(float *)(param_1 + 0xc) =
           (fVar6 * fVar16 - fVar4 * fVar17) + fVar19 * fVar8 + fVar14 + fVar9;
      fVar11 = *(float *)(param_1 + 0x10) * fVar11;
      fVar13 = *(float *)(param_1 + 0x14) * fVar13;
      fVar15 = *(float *)(param_1 + 0x18) * fVar15;
      fVar5 = fVar15 * fVar17 - fVar13 * fVar18;
      fVar7 = fVar11 * fVar18 - fVar15 * fVar16;
      fVar9 = fVar13 * fVar16 - fVar11 * fVar17;
      fVar5 = fVar5 + fVar5;
      fVar7 = fVar7 + fVar7;
      fVar9 = fVar9 + fVar9;
      *(ulonglong *)(param_1 + 0x10) =
           CONCAT44((fVar5 * fVar18 - fVar9 * fVar16) + fVar19 * fVar7 + fVar13,
                    (fVar9 * fVar17 - fVar7 * fVar18) + fVar19 * fVar5 + fVar11);
      *(float *)(param_1 + 0x18) = (fVar7 * fVar16 - fVar5 * fVar17) + fVar19 * fVar9 + fVar15;
    }
  }
  return;
}



// FUNCTION 142d74160 FUN_142d74160 body=972 status=ok
// SIG undefined FUN_142d74160(void)

bool FUN_142d74160(longlong param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_48 [48];
  
  cVar2 = *(char *)(param_1 + 0x478);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (cVar2 == '\0') {
    plVar13 = *(longlong **)(param_1 + 0x470);
    if (plVar13 != (longlong *)0x0) {
      if ((char)plVar13[0x49] == '\0') {
        (**(code **)(*plVar13 + 0x5a0))(plVar13,3);
        plVar13 = *(longlong **)(param_1 + 0x470);
      }
      lVar8 = *plVar13;
      uVar9 = FUN_142d58bc0(param_1,&local_78);
      (**(code **)(lVar8 + 0x620))(*(undefined8 *)(param_1 + 0x470),uVar9);
    }
    if (((*(longlong *)(param_1 + 0x18) != 0) && (DAT_146b17150 != 0)) &&
       (lVar8 = FUN_142c6f130(param_1), lVar8 != 0)) {
      lVar12 = *(longlong *)(lVar8 + 0x168);
      if (lVar12 == 0) {
        uVar14 = (undefined4)DAT_1468b5da0;
        uVar15 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        uVar7 = DAT_1468b5da8;
      }
      else {
        local_68 = *(float *)(lVar12 + 0x210);
        fStack_64 = *(float *)(lVar12 + 0x214);
        fStack_60 = *(float *)(lVar12 + 0x218);
        fStack_5c = *(float *)(lVar12 + 0x21c);
        auVar4._4_4_ = -(uint)(*(float *)(lVar12 + 0x254) != fStack_64);
        auVar4._0_4_ = -(uint)(*(float *)(lVar12 + 0x250) != local_68);
        auVar4._8_4_ = -(uint)(*(float *)(lVar12 + 600) != fStack_60);
        auVar4._12_4_ = -(uint)(*(float *)(lVar12 + 0x25c) != fStack_5c);
        iVar6 = movmskps((int)lVar8,auVar4);
        if (iVar6 != 0) {
          *(float *)(lVar12 + 0x250) = local_68;
          *(float *)(lVar12 + 0x254) = fStack_64;
          *(float *)(lVar12 + 600) = fStack_60;
          *(float *)(lVar12 + 0x25c) = fStack_5c;
          puVar11 = (undefined8 *)FQuat::Rotator(&local_68,&local_78);
          *(undefined8 *)(lVar12 + 0x260) = *puVar11;
          *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar11 + 1);
        }
        uVar14 = (undefined4)*(undefined8 *)(lVar12 + 0x260);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x260) >> 0x20);
        uVar7 = *(undefined4 *)(lVar12 + 0x268);
      }
      local_78 = CONCAT44(uVar15,uVar14);
      local_70 = uVar7;
      FUN_142d61120(&local_78,param_1,0);
      lVar12 = FVector::Rotation(&local_78,&local_68);
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xc4);
      local_88 = CONCAT44(*(float *)(lVar12 + 4) + 180.0,uVar14);
      if (0.0 < fVar1) {
        if (*(longlong *)(param_1 + 0x470) != 0) {
          local_78 = local_88;
          local_70 = uVar7;
          FUN_142d85fe0(*(longlong *)(param_1 + 0x470) + 0x2428,&local_78,fVar1,1,0,0);
        }
      }
      else {
        local_78 = local_88;
        local_70 = uVar7;
        AActor::SetActorRotation(lVar8,&local_78,0);
      }
    }
    uVar9 = FDifficultyFloat::FDifficultyFloat(&local_68);
    uVar10 = FUN_142c62320(local_48);
    uVar10 = FUN_142c82380(uVar10,*(undefined4 *)(lVar3 + 0x1b8));
    uVar10 = FAIStimulus::SetExpirationAge(uVar10,0);
    uVar10 = vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(uVar10,*(undefined8 *)(lVar3 + 0x1c0));
    uVar10 = FInputModeUIOnly::SetLockMouseToViewportBehavior(uVar10,2);
    FUN_142c7c510(param_1,lVar3 + 200,uVar10,uVar9);
    *(undefined1 *)(param_1 + 0x478) = 1;
  }
  else if (cVar2 == '\x01') {
    lVar8 = FUN_142c6f130(param_1);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x128) != '\x03')) {
      if (*(char *)(param_1 + 0x468) == '\0') goto LAB_142d74509;
    }
    else if ((*(longlong **)(param_1 + 0x470) != (longlong *)0x0) &&
            (((cVar5 = (**(code **)(**(longlong **)(param_1 + 0x470) + 0x558))(), cVar5 != '\0' ||
              (lVar8 = *(longlong *)(param_1 + 0x470), DAT_1468b5d90 != *(float *)(lVar8 + 0x4ec)))
             || ((DAT_1468b5d94 != *(float *)(lVar8 + 0x4f0) ||
                 (DAT_1468b5d98 != *(float *)(lVar8 + 0x4f4))))))) goto LAB_142d74509;
    *(undefined1 *)(param_1 + 0x468) = 1;
    FUN_142c76980(param_1);
    uVar9 = FDifficultyFloat::FDifficultyFloat(&local_78);
    uVar10 = FUN_142c62320(&local_68);
    uVar10 = FUN_142c82380(uVar10,0);
    uVar10 = FAIStimulus::SetExpirationAge(uVar10,*(undefined4 *)(lVar3 + 0x1bc));
    uVar10 = vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(uVar10,*(undefined8 *)(lVar3 + 0x1c0));
    FUN_142c7c510(param_1,lVar3 + 0x140,uVar10,uVar9);
    *(undefined1 *)(param_1 + 0x478) = 2;
  }
  else if ((cVar2 == '\x02') && (cVar5 = FUN_142c73400(param_1,1,1), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 0x478) = 3;
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0xb20))();
  }
LAB_142d74509:
  return *(char *)(param_1 + 0x478) != cVar2;
}



// FUNCTION 142d74530 FUN_142d74530 body=855 status=ok
// SIG undefined FUN_142d74530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142d74530(longlong *param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1[3] + 0x118) != 0) &&
      (*(char *)(*(longlong *)(param_1[3] + 0x118) + 0x128) != '\x03')) && (1e-08 < param_2)) {
    return false;
  }
  lVar2 = param_1[0x9b];
  lVar6 = param_1[2];
  switch((char)lVar2) {
  case '\0':
    FUN_142d5d000(param_1);
    *(undefined1 *)(param_1 + 0x9b) = 1;
    break;
  case '\x01':
    fVar7 = *(float *)(param_1 + 0x9d);
    *(float *)(param_1 + 0x9d) = param_2 + fVar7;
    if (param_2 + fVar7 < *(float *)(lVar6 + 0xd0)) goto switchD_142d745ac_default;
    FUN_142d5d1e0(param_1);
    *(undefined1 *)(param_1 + 0x9b) = 2;
    break;
  case '\x02':
  case '\x03':
    cVar1 = FUN_142d63780(param_1);
    if (cVar1 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x4ec) = 0;
      lVar2 = FUN_142c71f10(param_1);
      if (lVar2 != 0) {
        *(float *)(lVar2 + 0x1b0) = param_2 + *(float *)(lVar2 + 0x1b0);
      }
    }
    else {
      *(float *)((longlong)param_1 + 0x4ec) = param_2 + *(float *)((longlong)param_1 + 0x4ec);
    }
    *(float *)(param_1 + 0x9d) = param_2 + *(float *)(param_1 + 0x9d);
    lVar2 = FUN_142d61cd0(param_1);
    if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x220), lVar2 != 0)) &&
       (lVar4 = param_1[2], *(longlong *)(lVar4 + 0x120) != 0)) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,1);
      if ((plVar3 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*plVar3 + 0x6d0))
                            (plVar3,*(undefined8 *)(*(longlong *)(lVar4 + 0x120) + 0x78),1),
         lVar4 != 0)) {
        lVar4 = FUN_142699110(lVar4,local_58,1,0);
        local_78 = 0;
        local_68 = *(undefined4 *)(lVar4 + 0x10);
        local_64 = *(undefined4 *)(lVar4 + 0x14);
        local_60 = *(undefined4 *)(lVar4 + 0x18);
        FUN_14223c850(lVar2,&local_68,0,0);
      }
    }
    if ((((*(longlong *)(lVar6 + 0x120) != 0) &&
         (*(float *)(lVar6 + 0x104) < *(float *)(param_1 + 0x9d))) &&
        (cVar1 = FUN_142d6c360(param_1), cVar1 != '\0')) &&
       (cVar1 = FUN_142d71390(param_1), cVar1 != '\0')) {
      *(undefined1 *)(param_1 + 0x9b) = 4;
      FUN_142c76980(param_1);
    }
    plVar3 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar6 = plVar3[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar6 = plVar3[0x1f];
    }
    if (*(float *)(param_1 + 0x9d) <= *(float *)(lVar6 + 0x7c)) {
      return false;
    }
    uVar5 = (**(code **)(*param_1 + 0xa0))(param_1,1);
    cVar1 = FUN_142db72e0(param_1 + 0xae,uVar5);
    if (cVar1 == '\0') {
      return false;
    }
    FUN_142c76980(param_1);
    return false;
  case '\x04':
    FUN_142d5e660(param_1);
    *(undefined1 *)(param_1 + 0x9b) = 5;
    FUN_142c76980(param_1);
    return false;
  case '\x05':
    *(float *)(param_1 + 0x9e) = param_2 + *(float *)(param_1 + 0x9e);
    fVar7 = (float)(**(code **)(*param_1 + 0x110))(param_1);
    lVar6 = FUN_142d60c00(param_1);
    if (lVar6 != 0) {
      FUN_142cac380(lVar6);
    }
    if (fVar7 <= 0.0) {
      *(undefined1 *)(param_1 + 0x9b) = 6;
      FUN_142c76980(param_1);
    }
    return false;
  case '\x06':
    cVar1 = FUN_142c73400(param_1,1,1);
    if (cVar1 != '\0') goto switchD_142d745ac_default;
    *(undefined1 *)(param_1 + 0x9b) = 7;
    break;
  default:
    goto switchD_142d745ac_default;
  }
  FUN_142c76980(param_1);
switchD_142d745ac_default:
  return (char)param_1[0x9b] != (char)lVar2;
}



// FUNCTION 142d748b0 FUN_142d748b0 body=1203 status=ok
// SIG undefined FUN_142d748b0(void)

void FUN_142d748b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  int local_res8 [2];
  float local_res10 [2];
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_d8 [4];
  undefined1 local_c8 [160];
  
  iVar8 = 1;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,1);
  uVar5 = FUN_142c71f10(param_1);
  lVar7 = param_1[2];
  if (*(float *)(lVar7 + 0xd0) <= 1e-08 && *(float *)(lVar7 + 0xd0) != 1e-08) {
    local_res10[0] = 0.0;
    FUN_142c703a0(param_1,&DAT_146b32188,local_res10);
    FUN_142d61120(&local_118,param_1,0);
    local_f8 = 0;
    local_f0[0] = 0;
    FUN_142c703a0(param_1,&DAT_146b321b8,&local_f8);
    FUN_142c703a0(param_1,&DAT_146b321c0,(longlong)&local_f8 + 4);
    FUN_142c703a0(param_1,&DAT_146b321c8,local_f0);
    local_res8[0] = -1;
    FUN_142c711a0(param_1,&DAT_146b321b0,local_res8);
    if ((local_res8[0] != -1) ||
       (((int)plVar4[0x17f] != 0 &&
        ((*(longlong *)plVar4[0x17e] == 0 || (*(short *)(*(longlong *)plVar4[0x17e] + 4) != -1))))))
    {
      if (1e-08 < ABS(*(float *)(lVar7 + 0xd4) - 1.0)) {
        local_110 = *(float *)(lVar7 + 0xd4) + local_110;
        if (local_110 <= 0.0) {
          local_110 = 0.0;
        }
        fVar9 = local_114 * local_114 + local_118 * local_118 + local_110 * local_110;
        if (1e-08 < fVar9) {
          auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar11 = auVar12._0_4_;
          fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
          fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
          local_118 = local_118 * fVar11;
          local_114 = local_114 * fVar11;
          local_110 = local_110 * fVar11;
        }
      }
      iVar3 = FUN_142da91e0(uVar5);
      if (iVar3 == -1) {
        if ((int)plVar4[0x17f] < 1) {
          return;
        }
        if (*(int **)plVar4[0x17e] == (int *)0x0) {
          return;
        }
        iVar3 = **(int **)plVar4[0x17e];
        if (iVar3 == -1) {
          return;
        }
      }
      else {
        iVar8 = 2;
      }
      if (*(char *)(lVar7 + 0xdc) != '\0') {
        local_e0 = 0.0;
        local_d8[2] = 0.0;
        local_d8[0] = 0.0;
        local_d8[1] = 0.0;
        (**(code **)(*plVar4 + 0x620))(plVar4,local_d8,0);
      }
      fVar11 = local_res10[0];
      iVar1 = (int)plVar4[0x17f];
      fVar9 = *(float *)(lVar7 + 0xd8);
      fVar13 = local_res10[0] / (float)(iVar8 * iVar1);
      if (0 < iVar1) {
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(plVar4[0x17e] + lVar7 * 8);
          if (lVar2 != 0) {
            FUN_142699400(lVar2,local_c8);
            if (lVar7 == iVar3) {
              pfVar6 = &local_e8;
              fVar10 = fVar11 * 0.5;
              local_e8 = local_118 * fVar10;
              fStack_e4 = local_114 * fVar10;
              local_e0 = fVar10 * local_110;
            }
            else {
              pfVar6 = local_d8;
              local_d8[1] = local_114 * fVar13;
              local_d8[0] = local_118 * fVar13;
              local_d8[2] = fVar13 * local_110;
            }
            local_108 = *(undefined8 *)pfVar6;
            local_100 = pfVar6[2];
            fVar10 = (float)FUN_142696270(lVar2);
            fVar10 = 1.0 / fVar10;
            fVar10 = local_108._4_4_ * fVar10 * local_108._4_4_ * fVar10 +
                     (float)local_108 * fVar10 * (float)local_108 * fVar10 +
                     local_100 * fVar10 * local_100 * fVar10;
            if ((fVar9 * fVar9 < fVar10) && (1e-08 < fVar10)) {
              fVar10 = ABS(fVar9) / SQRT(fVar10);
              local_100 = local_100 * fVar10;
              local_108 = CONCAT44(local_108._4_4_ * fVar10,(float)local_108 * fVar10);
            }
            FUN_14268e770(lVar2,&local_108,0);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar1);
      }
    }
  }
  return;
}



// FUNCTION 142d74d70 FUN_142d74d70 body=384 status=ok
// SIG undefined FUN_142d74d70(void)

void FUN_142d74d70(longlong param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 local_res8 [8];
  int local_28;
  int local_24;
  longlong local_20;
  
  plVar6 = *(longlong **)(param_1 + 0x118);
  if ((plVar6 != (longlong *)0x0) && ((char)plVar6[0x25] == '\x03')) {
    uVar4 = FUN_142dfdf30();
    lVar5 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
    if (lVar5 != 0) {
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      plVar6 = (longlong *)FName::FName(local_res8,L"OnOwnerExperienceLevelChanged",1);
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = *plVar6;
      plVar6 = (longlong *)(lVar5 + 0x1b0);
      piVar2 = (int *)*plVar6;
      iVar8 = *(int *)(lVar5 + 0x1b8);
      for (piVar9 = piVar2; piVar9 != piVar2 + (longlong)iVar8 * 4; piVar9 = piVar9 + 4) {
        if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
            ((cVar3 = FWeakObjectPtr::IsValid(piVar9), cVar3 == '\0' &&
             (cVar3 = FWeakObjectPtr::IsValid(&local_28), cVar3 == '\0')))) &&
           (*(longlong *)(piVar9 + 2) == local_20)) {
          iVar8 = (int)((longlong)piVar9 - (longlong)piVar2 >> 4);
          if (iVar8 != -1) {
            iVar1 = *(int *)(lVar5 + 0x1b8);
            iVar7 = (iVar1 - iVar8) + -1;
            if (0 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar8 * 0x10 + *plVar6),
                         (void *)((longlong)(iVar1 - iVar7) * 0x10 + *plVar6),(longlong)iVar7 << 4);
              iVar1 = *(int *)(lVar5 + 0x1b8);
            }
            *(int *)(lVar5 + 0x1b8) = iVar1 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar6);
          }
          break;
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
    }
  }
  FUN_142359510(param_1);
  return;
}



// FUNCTION 142d74ef0 FUN_142d74ef0 body=734 status=ok
// SIG undefined FUN_142d74ef0(void)

void FUN_142d74ef0(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  if ((*(longlong *)(param_1 + 0x160) == 0) && (*(longlong *)(param_1 + 0x130) == 0)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x178) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x278) == 0) {
    return;
  }
  plVar4 = *(longlong **)(param_1 + 0x270);
  plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0x278) * 0xb;
  plVar2 = plVar4;
  if (plVar4 != plVar7) {
    while (plVar6 = plVar2 + 0xb, plVar6 != plVar7) {
      pfVar1 = (float *)(plVar2 + 0xd);
      plVar2 = plVar6;
      if (*(float *)(plVar4 + 2) < *pfVar1) {
        plVar4 = plVar6;
      }
    }
  }
  local_78 = *plVar4;
  lStack_70 = plVar4[1];
  local_68 = plVar4[2];
  lStack_60 = plVar4[3];
  local_58 = plVar4[4];
  lStack_50 = plVar4[5];
  local_48 = plVar4[6];
  lStack_40 = plVar4[7];
  local_38 = (undefined4)plVar4[8];
  uStack_34 = *(undefined4 *)((longlong)plVar4 + 0x44);
  uStack_30 = (undefined4)plVar4[9];
  uStack_2c = *(undefined4 *)((longlong)plVar4 + 0x4c);
  local_28 = plVar4[10];
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(int *)(param_1 + 0x27c) != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1 + 0x270,0);
  }
  if (local_78 == 0) {
    return;
  }
  uVar5 = uVar9;
  if ((float)local_68 <= 0.0) {
    if (local_48._4_4_ == 0.0) {
      return;
    }
    if (((float)local_68 <= 0.0) && (local_48._4_4_ == 0.0)) goto LAB_142d75118;
  }
  uVar8 = *(uint *)(local_78 + 0x840) >> 3;
  cVar3 = FUN_1407c3030(param_1);
  if (cVar3 == '\0') {
    if ((uVar8 & 1) != 0) goto LAB_142d75030;
  }
  else {
    if ((uVar8 & 1) == 0) goto LAB_142d75118;
LAB_142d75030:
    uVar5 = *(ulonglong *)(param_1 + 400);
    if (*(ulonglong *)(param_1 + 400) != 0) goto LAB_142d75118;
  }
  uVar5 = (ulonglong)((byte)uVar8 & 1);
  plVar4 = *(longlong **)(param_1 + 0x198 + uVar5 * 0x10);
  uVar5 = (ulonglong)*(int *)(param_1 + 0x1a0 + uVar5 * 0x10);
  uVar10 = uVar5 & 0x1fffffffffffffff;
  if (plVar4 + uVar5 < plVar4) {
    uVar10 = uVar9;
  }
  uVar5 = uVar9;
  if (uVar10 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        plVar6 = (longlong *)UAnimNotifyState::GetPrivateStaticClass();
        plVar7 = plVar2;
        do {
          if (plVar7 == plVar6) {
            plVar7 = (longlong *)plVar2[0x1f];
            if (plVar7 == (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x368))(plVar2);
              plVar7 = (longlong *)plVar2[0x1f];
              if (plVar7 == (longlong *)0x0) break;
            }
            uVar5 = (**(code **)(*plVar7 + 0x278))(plVar7,&local_78,param_1,uVar5);
            break;
          }
          plVar7 = (longlong *)plVar7[6];
        } while (plVar7 != (longlong *)0x0);
      }
      plVar4 = plVar4 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
LAB_142d75118:
  FUN_142d6ae40(param_1,uVar5,&local_78);
  if ((*(longlong *)(param_1 + 0x168) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x168) + 0x840) >> 3 & 1) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b33ec0) &&
       (_Init_thread_header(&DAT_146b33ec0), DAT_146b33ec0 == -1)) {
      FName::FName(&DAT_146b33eb8,L"AlreadyDead",1);
      _Init_thread_footer(&DAT_146b33ec0);
    }
    FUN_142dafbc0(param_1,&DAT_146b33eb8);
    FUN_142dafbc0(param_1 + 0x98,&DAT_146b33eb8);
  }
  return;
}



// FUNCTION 142d751d0 FUN_142d751d0 body=207 status=ok
// SIG undefined FUN_142d751d0(void)

void FUN_142d751d0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  LARGE_INTEGER local_res8;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = *(longlong *)(lVar2 + 0x148);
    if (lVar2 != 0) {
      lVar3 = FUN_142e4e3f0();
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
        if ((double)param_1[0x3c] == 0.0) {
          fVar4 = 0.0;
        }
        else {
          QueryPerformanceCounter(&local_res8);
          fVar4 = (float)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                         (double)param_1[0x3c]);
        }
        FUN_142d90ed0(lVar2,param_1 + 0x3a,fVar4);
      }
    }
  }
  return;
}



// FUNCTION 142d752a0 FUN_142d752a0 body=1739 status=ok
// SIG undefined FUN_142d752a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d752a0(longlong *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
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
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
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
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [8];
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
  undefined1 local_138 [16];
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
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar12 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if (lVar12 != 0) {
    pfVar14 = (float *)param_1[0xa1];
    lVar12 = param_1[0xb2];
    pfVar15 = pfVar14 + (longlong)(int)param_1[0xa2] * 0x14;
    local_128 = *(undefined8 *)(lVar12 + 0x210);
    uStack_120 = *(undefined8 *)(lVar12 + 0x218);
    iVar2 = *(int *)(lVar12 + 0x76c);
    local_118 = *(undefined8 *)(lVar12 + 0x220);
    uStack_110 = *(undefined8 *)(lVar12 + 0x228);
    local_108 = *(undefined8 *)(lVar12 + 0x230);
    uStack_100 = *(undefined8 *)(lVar12 + 0x238);
    for (; pfVar14 != pfVar15; pfVar14 = pfVar14 + 0x14) {
      if ((pfVar14[0xc] != -NAN) && (*(longlong *)(pfVar14 + 0x10) != 0)) {
        uVar10 = FUN_142699110(*(longlong *)(pfVar14 + 0x10),&local_158,1,0);
        fVar33 = fRam0000000146b320c8;
        fVar32 = fRam0000000146b320c4;
        fVar23 = _DAT_146b320c0;
        fVar48 = fRam0000000146b32068;
        fVar47 = fRam0000000146b32064;
        fVar46 = _DAT_146b32060;
        auVar1 = *(undefined1 (*) [16])(pfVar14 + 8);
        fVar7 = auVar1._0_4_;
        fVar8 = auVar1._4_4_;
        fVar9 = auVar1._8_4_;
        fVar3 = local_138._0_4_;
        fVar4 = local_138._4_4_;
        fVar5 = local_138._8_4_;
        fVar6 = local_138._12_4_;
        local_188 = 0.0;
        fStack_184 = 0.0;
        fStack_180 = 0.0;
        fStack_17c = fRam0000000146b3206c;
        local_168 = (float)((uint)_DAT_146b32060 & _DAT_146b32070);
        fStack_164 = (float)((uint)fRam0000000146b32064 & uRam0000000146b32074);
        fStack_160 = (float)((uint)fRam0000000146b32068 & uRam0000000146b32078);
        fStack_15c = (float)((uint)fRam0000000146b3206c & uRam0000000146b3207c);
        _local_178 = ZEXT816(0);
        auVar16 = minps(auVar1,local_138);
        auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146b320c4);
        auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146b320c0);
        auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146b320c8);
        auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146b320cc);
        iVar11 = movmskps(uVar10,auVar17);
        if (iVar11 == 0) {
          fVar46 = *pfVar14;
          fVar47 = pfVar14[1];
          fVar48 = pfVar14[2];
          fVar23 = pfVar14[3];
          fVar32 = pfVar14[4] * fVar3;
          fVar33 = pfVar14[5] * fVar4;
          fVar24 = pfVar14[6] * fVar5;
          fVar25 = pfVar14[7] * fVar6;
          local_188 = local_158 * fVar23 * _DAT_146b320a0 + fStack_14c * fVar46 +
                      fStack_154 * fVar48 * _DAT_146b32090 + fStack_150 * fVar47 * _DAT_146b32080;
          fStack_184 = local_158 * fVar48 * fRam0000000146b320a4 + fStack_14c * fVar47 +
                       fStack_154 * fVar23 * fRam0000000146b32094 +
                       fStack_150 * fVar46 * fRam0000000146b32084;
          fStack_180 = local_158 * fVar47 * fRam0000000146b320a8 + fStack_14c * fVar48 +
                       fStack_154 * fVar46 * fRam0000000146b32098 +
                       fStack_150 * fVar23 * fRam0000000146b32088;
          fStack_17c = local_158 * fVar46 * fRam0000000146b320ac + fStack_14c * fVar23 +
                       fStack_154 * fVar47 * fRam0000000146b3209c +
                       fStack_150 * fVar48 * fRam0000000146b3208c;
          fVar46 = fVar24 * fStack_154 - fVar33 * fStack_150;
          fVar47 = fVar32 * fStack_150 - fVar24 * local_158;
          fVar48 = fVar33 * local_158 - fVar32 * fStack_154;
          fVar23 = fVar25 * fStack_14c - fVar25 * fStack_14c;
          fVar46 = fVar46 + fVar46;
          fVar47 = fVar47 + fVar47;
          fVar48 = fVar48 + fVar48;
          fVar23 = fVar23 + fVar23;
          local_178._4_4_ =
               (fVar46 * fStack_150 - fVar48 * local_158) + fStack_14c * fVar47 + fVar33 +
               fStack_144;
          local_178._0_4_ =
               (fVar48 * fStack_154 - fVar47 * fStack_150) + fStack_14c * fVar46 + fVar32 +
               local_148;
          fStack_170 = (fVar47 * local_158 - fVar46 * fStack_154) + fStack_14c * fVar48 + fVar24 +
                       fStack_140;
          fStack_16c = (fVar23 * fStack_14c - fVar23 * fStack_14c) + fStack_14c * fVar23 + fVar25 +
                       fStack_13c;
        }
        else {
          fVar24 = fStack_154 + fStack_154;
          fVar28 = fStack_150 + fStack_150;
          fVar30 = local_158 * (local_158 + local_158);
          fVar25 = (local_158 + local_158) * fStack_14c;
          fVar43 = (fVar28 * fStack_14c + fVar24 * local_158) * fVar3;
          fVar44 = (fVar25 + fVar28 * fStack_154) * fVar4;
          fVar45 = (fVar24 * fStack_14c + fVar28 * local_158) * fVar5;
          fVar34 = fVar4 * (fVar24 * local_158 - fVar28 * fStack_14c);
          fVar36 = fVar5 * (fVar28 * fStack_154 - fVar25);
          fVar38 = fVar3 * (fVar28 * local_158 - fVar24 * fStack_14c);
          fVar18 = (float)((uint)((_DAT_146b32060 - (fStack_150 * fVar28 + fStack_154 * fVar24)) *
                                 fVar3) & _DAT_146b32070);
          fVar20 = (float)((uint)((fRam0000000146b32064 - (fStack_150 * fVar28 + fVar30)) * fVar4) &
                          uRam0000000146b32074);
          fVar21 = (float)((uint)((fRam0000000146b32068 - (fStack_154 * fVar24 + fVar30)) * fVar5) &
                          uRam0000000146b32078);
          fVar22 = (float)((uint)((fRam0000000146b3206c - (fVar30 + fVar30)) * fVar6) &
                          uRam0000000146b3207c);
          fVar24 = *pfVar14;
          fVar25 = pfVar14[1];
          fVar28 = pfVar14[2];
          fVar30 = pfVar14[3];
          fVar26 = fVar25 + fVar25;
          fVar29 = fVar28 + fVar28;
          fVar31 = (fVar24 + fVar24) * fVar24;
          fVar27 = (fVar24 + fVar24) * fVar30;
          fVar40 = (fVar29 * fVar30 + fVar26 * fVar24) * fVar7;
          fVar41 = (fVar27 + fVar29 * fVar25) * fVar8;
          fVar42 = (fVar26 * fVar30 + fVar29 * fVar24) * fVar9;
          fVar35 = fVar8 * (fVar26 * fVar24 - fVar29 * fVar30);
          fVar37 = fVar9 * (fVar29 * fVar25 - fVar27);
          fVar39 = fVar7 * (fVar29 * fVar24 - fVar26 * fVar30);
          fVar30 = (float)((uint)((_DAT_146b32060 - (fVar29 * fVar28 + fVar26 * fVar25)) * fVar7) &
                          _DAT_146b32070);
          fVar27 = (float)((uint)((fRam0000000146b32064 - (fVar29 * fVar28 + fVar31)) * fVar8) &
                          uRam0000000146b32074);
          fVar26 = (float)((uint)((fRam0000000146b32068 - (fVar26 * fVar25 + fVar31)) * fVar9) &
                          uRam0000000146b32078);
          fVar29 = (float)((uint)((fRam0000000146b3206c - (fVar31 + fVar31)) * auVar1._12_4_) &
                          uRam0000000146b3207c);
          fVar24 = pfVar14[4];
          fVar25 = pfVar14[5];
          fVar28 = pfVar14[6];
          local_1d8 = fVar40 * fVar34 + fVar30 * fVar18 + fVar39 * fVar45 + fVar29 * local_148;
          fStack_1d4 = fVar40 * fVar20 + fVar30 * fVar43 + fVar39 * fVar36 + fVar29 * fStack_144;
          fStack_1d0 = fVar40 * fVar44 + fVar30 * fVar38 + fVar39 * fVar21 + fVar29 * fStack_140;
          fStack_1cc = fVar40 * fVar22 + fVar30 * fVar22 + fVar39 * fVar22 +
                       fVar29 * fRam0000000146b3206c;
          local_1c8 = fVar27 * fVar34 + fVar35 * fVar18 + fVar41 * fVar45 + fVar29 * local_148;
          fStack_1c4 = fVar27 * fVar20 + fVar35 * fVar43 + fVar41 * fVar36 + fVar29 * fStack_144;
          fStack_1c0 = fVar27 * fVar44 + fVar35 * fVar38 + fVar41 * fVar21 + fVar29 * fStack_140;
          fStack_1bc = fVar27 * fVar22 + fVar35 * fVar22 + fVar41 * fVar22 +
                       fVar29 * fRam0000000146b3206c;
          local_1b8 = fVar37 * fVar34 + fVar42 * fVar18 + fVar26 * fVar45 + fVar29 * local_148;
          fStack_1b4 = fVar37 * fVar20 + fVar42 * fVar43 + fVar26 * fVar36 + fVar29 * fStack_144;
          fStack_1b0 = fVar37 * fVar44 + fVar42 * fVar38 + fVar26 * fVar21 + fVar29 * fStack_140;
          fStack_1ac = fVar37 * fVar22 + fVar42 * fVar22 + fVar26 * fVar22 +
                       fVar29 * fRam0000000146b3206c;
          local_1a8 = fVar25 * fVar34 + fVar24 * fVar18 + fVar28 * fVar45 +
                      fRam0000000146b3206c * local_148;
          fStack_1a4 = fVar25 * fVar20 + fVar24 * fVar43 + fVar28 * fVar36 +
                       fRam0000000146b3206c * fStack_144;
          fStack_1a0 = fVar25 * fVar44 + fVar24 * fVar38 + fVar28 * fVar21 +
                       fRam0000000146b3206c * fStack_140;
          fStack_19c = fVar25 * fVar22 + fVar24 * fVar22 + fVar28 * fVar22 +
                       fRam0000000146b3206c * fRam0000000146b3206c;
          FMatrix::RemoveScaling(&local_1d8);
          fVar46 = (float)(-(uint)(fVar23 <= fVar3 * fVar7) & (_DAT_146b320b0 ^ (uint)fVar46) ^
                          _DAT_146b320b0);
          fVar47 = (float)(-(uint)(fVar32 <= fVar4 * fVar8) & (uRam0000000146b320b4 ^ (uint)fVar47)
                          ^ uRam0000000146b320b4);
          fVar48 = (float)(-(uint)(fVar33 <= fVar5 * fVar9) & (uRam0000000146b320b8 ^ (uint)fVar48)
                          ^ uRam0000000146b320b8);
          local_1d8 = local_1d8 * fVar46;
          fStack_1d4 = fStack_1d4 * fVar46;
          fStack_1d0 = fStack_1d0 * fVar46;
          fStack_1c0 = fStack_1c0 * fVar47;
          fStack_1c4 = fStack_1c4 * fVar47;
          local_1c8 = local_1c8 * fVar47;
          fStack_1b0 = fStack_1b0 * fVar48;
          local_1b8 = local_1b8 * fVar48;
          fStack_1b4 = fStack_1b4 * fVar48;
          FQuat::FQuat(&local_198,&local_1d8);
          local_1e8 = 0x322bcc77;
          auVar19._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
          auVar19._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
          auVar19._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
          auVar19._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
          fVar32 = auVar19._4_4_ + auVar19._0_4_;
          fVar33 = auVar19._8_4_ + auVar19._4_4_;
          fVar24 = auVar19._12_4_ + auVar19._8_4_;
          fVar25 = auVar19._0_4_ + auVar19._12_4_;
          auVar16._4_4_ = fVar33;
          auVar16._0_4_ = fVar32;
          auVar16._8_4_ = fVar24;
          auVar16._12_4_ = fVar25;
          auVar16 = rsqrtps(auVar19,auVar16);
          fVar46 = auVar16._0_4_;
          fVar47 = auVar16._4_4_;
          fVar48 = auVar16._8_4_;
          fVar23 = auVar16._12_4_;
          fVar46 = (_DAT_146b32050 - fVar46 * fVar46 * fVar32 * _DAT_146b32050) * fVar46 + fVar46;
          fVar47 = (fRam0000000146b32054 - fVar47 * fVar47 * fVar33 * fRam0000000146b32054) * fVar47
                   + fVar47;
          fVar48 = (fRam0000000146b32058 - fVar48 * fVar48 * fVar24 * fRam0000000146b32058) * fVar48
                   + fVar48;
          fVar23 = (fRam0000000146b3205c - fVar23 * fVar23 * fVar25 * fRam0000000146b3205c) * fVar23
                   + fVar23;
          local_178._4_4_ = fStack_1a4;
          local_178._0_4_ = local_1a8;
          fStack_170 = fStack_1a0;
          local_198 = (float)(((uint)(((_DAT_146b32050 - fVar46 * fVar46 * fVar32 * _DAT_146b32050)
                                       * fVar46 + fVar46) * local_198) ^ _DAT_146b32040) &
                              -(uint)(1e-08 <= fVar32) ^ _DAT_146b32040);
          fStack_194 = (float)(((uint)(((fRam0000000146b32054 -
                                        fVar47 * fVar47 * fVar33 * fRam0000000146b32054) * fVar47 +
                                       fVar47) * fStack_194) ^ uRam0000000146b32044) &
                               -(uint)(1e-08 <= fVar33) ^ uRam0000000146b32044);
          fStack_190 = (float)(((uint)(((fRam0000000146b32058 -
                                        fVar48 * fVar48 * fVar24 * fRam0000000146b32058) * fVar48 +
                                       fVar48) * fStack_190) ^ uRam0000000146b32048) &
                               -(uint)(1e-08 <= fVar24) ^ uRam0000000146b32048);
          fStack_18c = (float)(((uint)(((fRam0000000146b3205c -
                                        fVar23 * fVar23 * fVar25 * fRam0000000146b3205c) * fVar23 +
                                       fVar23) * fStack_18c) ^ uRam0000000146b3204c) &
                               -(uint)(1e-08 <= fVar25) ^ uRam0000000146b3204c);
          fStack_16c = 0.0;
          local_188 = local_198;
          fStack_184 = fStack_194;
          fStack_180 = fStack_190;
          fStack_17c = fStack_18c;
        }
        fStack_15c = fVar6 * auVar1._12_4_;
        fStack_160 = fVar5 * fVar9;
        fStack_164 = fVar4 * fVar8;
        local_168 = fVar3 * fVar7;
        FUN_14162bcf0(&local_188,&local_f8,&local_128);
        puVar13 = (undefined8 *)
                  ((longlong)(int)pfVar14[0xc] * 0x30 +
                  *(longlong *)(lVar12 + 0x728 + (longlong)iVar2 * 0x10));
        *puVar13 = local_f8;
        puVar13[1] = uStack_f0;
        puVar13[2] = local_e8;
        puVar13[3] = uStack_e0;
        puVar13[4] = local_d8;
        puVar13[5] = uStack_d0;
      }
    }
  }
  return;
}



// FUNCTION 142d75970 FUN_142d75970 body=714 status=ok
// SIG undefined FUN_142d75970(void)

void FUN_142d75970(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  int local_res10 [2];
  undefined1 local_58 [64];
  
  if ((*(char *)(param_1 + 0xf1) != '\0') &&
     (0.0001 < ABS(*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0xdc)))) {
    *(undefined1 *)(param_1 + 0xf1) = 0;
  }
  if (param_2 != '\0') {
    FUN_142d5a890(param_1,0);
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xa0))) {
    FUN_142d67f70(param_1);
  }
  if (((((1e-08 < ABS(*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0x14))) ||
        (1e-08 < ABS(*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0x20)))) ||
       (1e-08 < ABS(*(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0x2c)))) &&
      ((*(longlong **)(param_1 + 200) != (longlong *)0x0 && (*(longlong *)(param_1 + 8) != 0)))) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x260))();
    lVar9 = *(longlong *)(param_1 + 200);
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(lVar9 + 0x228,local_res10);
    plVar8 = (longlong *)0x0;
    if (local_res10[0] != -1) {
      plVar8 = (longlong *)(*(longlong *)(lVar9 + 0x228) + (longlong)local_res10[0] * 0x28);
    }
    plVar10 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    if ((plVar10 != (longlong *)0x0) && (cVar5 = FUN_1404d5210(plVar10), cVar5 != '\0')) {
      FUN_142d5bd80(lVar9,local_58,param_1);
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      bVar4 = false;
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
      iVar7 = *(int *)((longlong)plVar10 + 0x14);
      iVar6 = (int)plVar10[1] + -1;
      lVar9 = (longlong)iVar6;
      if (-1 < iVar6) {
        lVar11 = lVar9 << 4;
        bVar4 = false;
        do {
          if (((*(int *)(lVar11 + 8 + *plVar10) == 0) ||
              (plVar8 = *(longlong **)(lVar11 + *plVar10), plVar8 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar8 + 0x40))(plVar8,local_58,uVar2,uVar1), cVar5 == '\0')) {
            bVar4 = true;
          }
          lVar11 = lVar11 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        iVar7 = *(int *)((longlong)plVar10 + 0x14);
      }
      *(int *)((longlong)plVar10 + 0x14) = iVar7 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,0);
      }
    }
  }
  fVar3 = *(float *)(param_1 + 0x2c);
  fVar12 = *(float *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x14);
  *(float *)(param_1 + 0xd4) = fVar12;
  *(float *)(param_1 + 0xd8) = fVar3;
  if ((0.0 < fVar3) && (*(longlong *)(param_1 + 8) != 0)) {
    fVar12 = (1.0 - fVar3) * fVar12;
    fVar3 = *(float *)(*(longlong *)(param_1 + 8) + 0x80);
    if (fVar12 <= fVar3) {
      fVar12 = fVar3;
    }
  }
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30), lVar9 != 0)) &&
     (*(char *)(lVar9 + 0x48) != '\0')) {
    *(float *)(param_1 + 0xac) = (float)(int)fVar12;
    return;
  }
  *(float *)(param_1 + 0xac) = fVar12;
  return;
}



// FUNCTION 142d75c40 FUN_142d75c40 body=194 status=ok
// SIG undefined FUN_142d75c40(void)

void FUN_142d75c40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    return;
  }
  lVar2 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  uVar3 = FUN_1429f6c00();
  plVar4 = (longlong *)AGameStateBase::OnRep_GameModeClass(lVar5,uVar3);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1429f6c00();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142d75cdc;
  }
  plVar4 = (longlong *)0x0;
LAB_142d75cdc:
  *(longlong **)(param_1 + 0x208) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3d0))(plVar4,param_1);
  }
  return;
}



// FUNCTION 142d75d10 FUN_142d75d10 body=2630 status=ok
// SIG undefined FUN_142d75d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d75d10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined8 *local_340;
  undefined *local_338;
  undefined8 local_328;
  float local_320;
  ulonglong local_318;
  float local_310;
  undefined1 local_308 [8];
  float local_300;
  undefined4 local_2fc;
  undefined1 local_2f8 [32];
  float local_2d8;
  float fStack_2d4;
  float local_2d0;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined1 local_294 [44];
  undefined8 local_268;
  ulonglong local_260;
  float local_258;
  float local_254;
  float local_250;
  uint local_24c;
  float local_248;
  float local_244;
  float local_240;
  undefined4 local_23c;
  undefined8 local_238;
  float local_230;
  undefined4 local_22c;
  int local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1e8 [5];
  byte local_1c0;
  byte local_1bf;
  code *local_1b8 [2];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float local_158;
  float local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_138;
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 local_e8 [48];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  lVar6 = FWeakObjectPtr::Get(param_2 + 0x74);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x24e) == '\x02')) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  fVar18 = *(float *)(param_1 + 0x1e8);
  fVar19 = *(float *)(lVar6 + 0x790);
  if ((fVar18 < 0.0) ||
     ((*(int *)(param_1 + 0x200) == 0 &&
      (fVar17 = fVar19 - *(float *)(param_1 + 0x1c4),
      *(float *)(param_1 + 0x1ac) <= fVar17 && fVar17 != *(float *)(param_1 + 0x1ac))))) {
    *(float *)(param_1 + 0x1e8) = fVar19;
    fVar18 = fVar19;
  }
  if (fVar19 - fVar18 < *(float *)(param_1 + 0x1ac)) {
    return;
  }
  cVar3 = '\0';
  lVar6 = 0;
  FUN_140729f20(local_2f8,param_2);
  if ((*(char *)(param_1 + 0x1b0) != '\0') &&
     (*(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168) != 0)) {
    local_260 = 0;
    local_268 = (code *)0x0;
    local_220 = (longlong *)0x0;
    local_218 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_258 = 9.18355e-41;
    local_250 = 0.0;
    local_318 = 0;
    local_244 = (float)CONCAT22(local_244._2_2_,0x101);
    local_24c = local_24c & 0xffffff00;
    local_254 = (float)((uint)local_254 & 0xff000000);
    local_248 = 0.0;
    FCollisionQueryParams::AddIgnoredActor(&local_268);
    local_254 = (float)CONCAT31(local_254._1_3_,1);
    if (*(float *)(param_1 + 0x1ec) == 0.0) {
      FUN_14222da00(*(undefined8 *)(param_1 + 0x118),1,local_308,&local_328);
      if ((float)local_328 <= local_328._4_4_) {
        local_328._0_4_ = local_328._4_4_;
      }
      if ((float)local_328 <= local_320) {
        local_328._0_4_ = local_320;
      }
      *(float *)(param_1 + 0x1ec) = (float)local_328 * 1.5;
    }
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x168);
    (**(code **)(*plVar10 + 0x428))(plVar10,&local_318,*(undefined8 *)(param_1 + 0x1b8));
    lVar7 = *(longlong *)(param_1 + 0x120);
    local_328 = local_318;
    local_320 = local_310 - *(float *)(param_1 + 0x1ec);
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    local_338 = &DAT_146aefe68;
    local_348 = (longlong *)((ulonglong)local_348._4_4_ << 0x20);
    local_340 = &local_268;
    cVar2 = UWorld::LineTraceSingleByChannel(lVar7,local_2f8,&local_318,&local_328);
    if (cVar2 == '\0') {
      plVar10 = local_220;
      if (local_200 != 0) {
        FMemory::Free();
        plVar10 = local_220;
      }
      goto LAB_142d7670a;
    }
    if (local_200 != 0) {
      FMemory::Free();
    }
    if (local_220 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (fVar19 < *(float *)(param_1 + 0x1e4)) {
    iVar14 = *(int *)(param_1 + 0x200);
    if ((iVar14 == 0) &&
       (fVar17 = fStack_2d4 - *(float *)(param_1 + 0x1d8),
       fVar19 = local_2d8 - *(float *)(param_1 + 0x1d4),
       fVar18 = local_2d0 - *(float *)(param_1 + 0x1dc),
       16384.0 < fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18)) goto LAB_142d75fee;
  }
  else {
    iVar14 = *(int *)(param_1 + 0x200);
    *(float *)(param_1 + 0x1e4) = fVar19 + *(float *)(param_1 + 0x1a8);
LAB_142d75fee:
    lVar6 = 1;
  }
  cVar2 = (char)lVar6;
  lVar7 = (longlong)(iVar14 + -1);
  if (-1 < iVar14 + -1) {
    lVar15 = lVar7 << 4;
    cVar3 = '\0';
    do {
      lVar1 = *(longlong *)(param_1 + 0x1f8);
      if (*(longlong *)(lVar15 + 8 + lVar1) == 0) {
        cVar3 = '\x01';
      }
      else {
        lVar8 = FWeakObjectPtr::Get(local_294);
        if (*(longlong *)(lVar15 + 8 + lVar1) == lVar8) {
          lVar6 = 0;
        }
      }
      cVar2 = (char)lVar6;
      lVar15 = lVar15 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_128);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_138 = (code *)&LAB_142d596b0;
  if (cVar2 != '\0') {
    local_1bf = local_1bf & 0xfe;
    local_1e8[0] = 0;
    local_1e8[1] = 0;
    local_1e8[2] = 0;
    local_1e8[3] = 0;
    local_1e8[4] = 0;
    local_188 = (longlong *)0x0;
    local_178 = 0;
    local_1b8[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    fStack_15c = 1.0;
    local_158 = 1.0;
    local_154 = 1.0;
    local_150 = 0;
    local_148 = 0;
    local_144 = 0x3f800000;
    local_1c0 = cVar3 << 4 | 8;
    local_238 = (float *)0x0;
    local_228 = 0;
    if (local_f8 == 0) {
LAB_142d76169:
      local_268 = AK::MemoryMgr::StartProfileThreadUsage;
    }
    else {
      plVar10 = local_128;
      if (local_108 != (longlong *)0x0) {
        plVar10 = local_108;
      }
      if (plVar10 == (longlong *)0x0) goto LAB_142d76169;
      plVar10 = (longlong *)(**(code **)*plVar10)(plVar10,&local_258);
      (**(code **)(*plVar10 + 8))(plVar10);
      local_268 = local_138;
    }
    FGenericPlatformMemory::MemswapGreaterThan8(&local_268,local_1b8,0x50);
    if (local_228 != 0) {
      pfVar11 = &local_258;
      if (local_238 != (float *)0x0) {
        pfVar11 = local_238;
      }
      if (pfVar11 != (float *)0x0) {
        (**(code **)(*(longlong *)pfVar11 + 0x10))(pfVar11,0);
      }
    }
    if (local_238 != (float *)0x0) {
      FMemory::Free();
    }
    local_1bf = local_1bf | 1;
    lVar6 = *(longlong *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x178) != '\0') {
      lVar7 = *(longlong *)(lVar6 + 0x168);
      if (lVar7 == 0) {
        local_328 = 0x3f8000003f800000;
        local_320 = 1.0;
      }
      else {
        local_328 = *(ulonglong *)(lVar7 + 0x230);
        local_320 = *(float *)(lVar7 + 0x238);
      }
      fVar18 = (float)(local_328 >> 0x20);
      uVar21 = local_328;
      if ((float)local_328 <= fVar18) {
        uVar21 = (ulonglong)(uint)fVar18;
      }
      fVar18 = (float)uVar21;
      if ((float)uVar21 <= local_320) {
        fVar18 = local_320;
      }
      fStack_15c = fStack_15c * fVar18;
      local_158 = local_158 * fVar18;
      local_154 = local_154 * fVar18;
    }
    lVar7 = *(longlong *)(param_1 + 0x198);
    if ((lVar6 != 0) && (cVar3 = FUN_142d62bf0(lVar6,lVar7), cVar3 == '\0')) {
      if (((*(char *)(lVar7 + 0x301) != '\0') ||
          (((*(char *)(lVar7 + 0x300) == '\0' && (*(longlong *)(lVar7 + 0x30) != 0)) &&
           (cVar3 = FUN_142d639b0(), cVar3 != '\0')))) && (DAT_1466ad3f4 == 1)) {
        local_2fc = DAT_1466ad400;
        local_300 = local_2d0;
        cVar3 = FUN_142d6c0a0(local_308);
        if (cVar3 != '\0') goto LAB_142d76317;
      }
      local_348 = local_1e8;
      FUN_142d5e050(lVar7,lVar6,local_2f8,0);
    }
LAB_142d76317:
    if (local_178 != 0) {
      plVar10 = local_1a8;
      if (local_188 != (longlong *)0x0) {
        plVar10 = local_188;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_1e8[2] != 0) {
      FMemory::Free();
    }
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x200)) {
    pfVar11 = (float *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x308))
                                 (*(longlong **)(param_1 + 0x118),local_308);
    fVar18 = pfVar11[1];
    fVar19 = *pfVar11;
    fVar17 = pfVar11[2];
    fVar20 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17;
    if (fVar20 == 1.0) {
      local_328 = *(ulonglong *)pfVar11;
      local_320 = pfVar11[2];
      fVar24 = (float)(local_328 >> 0x20);
      fVar22 = local_320;
      fVar25 = (float)local_328;
    }
    else {
      fVar24 = DAT_1468b5d94;
      fVar22 = DAT_1468b5d98;
      fVar25 = DAT_1468b5d90;
      if (1e-08 <= fVar20) {
        auVar23 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
        fVar22 = auVar23._0_4_;
        fVar22 = fVar22 + fVar22 * (0.5 - fVar20 * 0.5 * fVar22 * fVar22);
        fVar22 = fVar22 * (0.5 - fVar20 * 0.5 * fVar22 * fVar22) + fVar22;
        fVar25 = fVar22 * fVar19;
        fVar24 = fVar22 * fVar18;
        fVar22 = fVar22 * fVar17;
      }
    }
    local_24c = 0;
    local_23c = 0;
    local_268 = (code *)CONCAT44(fVar24,fVar25);
    local_260 = (ulonglong)(uint)fVar22;
    local_22c = 0x3f800000;
    local_258 = local_2c0;
    local_254 = local_2bc;
    local_248 = local_2b8 * fVar24 - local_2bc * fVar22;
    local_250 = local_2b8;
    local_244 = local_2c0 * fVar22 - local_2b8 * fVar25;
    local_240 = local_2bc * fVar25 - local_2c0 * fVar24;
    local_230 = local_2b8 * 2.0 + local_2d0;
    local_238 = (float *)CONCAT44(local_2bc * 2.0 + fStack_2d4,local_2c0 * 2.0 + local_2d8);
    FUN_140487e30(local_e8,&local_268);
    iVar14 = *(int *)(param_1 + 0x200) + -1;
    if (-1 < iVar14) {
      lVar7 = (longlong)iVar14 << 4;
      lVar6 = lVar7;
      do {
        lVar15 = *(longlong *)(param_1 + 0x1f8);
        lVar1 = *(longlong *)(lVar15 + lVar7);
        if (lVar1 == 0) {
LAB_142d76666:
          iVar12 = *(int *)(param_1 + 0x200);
          iVar5 = (iVar12 - iVar14) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar15 + lVar6),(void *)((longlong)(iVar12 - iVar5) * 0x10 + lVar15)
                       ,(longlong)iVar5 << 4);
            iVar12 = *(int *)(param_1 + 0x200);
          }
          *(int *)(param_1 + 0x200) = iVar12 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x1f8);
        }
        else {
          uVar4 = *(uint *)(lVar1 + 0xc);
          lVar8 = 0;
          if ((int)uVar4 < (int)DAT_1469e91c4) {
            uVar13 = uVar4 & 0xffff;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                    (longlong)(int)uVar13 * 0x18;
          }
          if (((byte)((uint)*(undefined4 *)(lVar8 + 8) >> 0x1d) & 1) != 0) goto LAB_142d76666;
          local_348 = (longlong *)((ulonglong)local_348 & 0xffffffffffffff00);
          FUN_142399d60(lVar1,local_e8,0,0);
        }
        lVar6 = lVar6 + -0x10;
        lVar7 = lVar7 + -0x10;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
  }
  plVar10 = local_108;
  if (local_f8 != 0) {
    plVar16 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar16 = local_108;
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16,0);
      plVar10 = local_108;
    }
  }
LAB_142d7670a:
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d76760 FUN_142d76760 body=102 status=ok
// SIG undefined FUN_142d76760(void)

undefined1 FUN_142d76760(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
      if (lVar2 == 0) goto LAB_142d767b9;
    }
    iVar1 = FUN_1428cf800(lVar2);
    if (((iVar1 == 3) && (*(char *)(param_1 + 0xf1) != '\0')) &&
       (*(float *)(param_1 + 0xa0) != *(float *)(param_1 + 0xdc))) {
      *(undefined1 *)(param_1 + 0xf1) = 0;
    }
  }
LAB_142d767b9:
  return *(undefined1 *)(param_1 + 0xf1);
}



// FUNCTION 142d767d0 FUN_142d767d0 body=58 status=ok
// SIG undefined FUN_142d767d0(void)

void FUN_142d767d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1458959d8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145895a20;
  }
  return;
}



// FUNCTION 142d76820 FUN_142d76820 body=20 status=ok
// SIG undefined FUN_142d76820(void)

undefined1 FUN_142d76820(longlong param_1)

{
  FUN_142d7b010(param_1 + 8);
  return 1;
}



// FUNCTION 142d76840 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145895a68;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_145895ab0;
  }
  return;
}



// FUNCTION 142d76890 FUN_142d76890 body=117 status=ok
// SIG undefined FUN_142d76890(void)

void FUN_142d76890(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_78 [80];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_4);
  (*pcVar2)(uVar1,param_2,param_3,uVar3);
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_4 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d76910 FUN_142d76910 body=210 status=ok
// SIG undefined FUN_142d76910(void)

undefined8 FUN_142d76910(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  uVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,lVar3);
  (*pcVar2)(uVar1,param_2,param_3,uVar4);
  if (*(int *)(lVar3 + 0x40) != 0) {
    plVar5 = *(longlong **)(lVar3 + 0x30);
    if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(lVar3 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_4 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142d769f0 FUN_142d769f0 body=185 status=ok
// SIG undefined FUN_142d769f0(void)

undefined8 FUN_142d769f0(undefined8 param_1,undefined8 param_2)

{
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_14217e740();
  FUN_142194380(param_1,0x18,1,0,0);
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a100;
  local_18 = 0;
  local_20 = param_1;
  FArchive::SetIsSaving(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  FUN_14158ce90(local_b8,param_2);
  FArchive::~FArchive(local_b8);
  return param_1;
}



// FUNCTION 142d76ab0 FUN_142d76ab0 body=170 status=ok
// SIG undefined FUN_142d76ab0(void)

longlong FUN_142d76ab0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_14217bdd0(param_1,0,param_3,param_4,param_2);
  cVar2 = FUN_14218fca0(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_14218fca0(param_1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x2e0);
      *(int *)(param_1 + 0x2e0) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2e4) < iVar1 + 1) {
        FUN_140ae1b70(param_1 + 0x38,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(param_1 + 0x2d8) == 0) {
        lVar3 = param_1 + 0x38;
      }
      FUN_142d76ba0(lVar3 + (longlong)iVar1 * 0xa8,param_4,param_1 + 8,param_5);
    }
  }
  return param_1;
}



// FUNCTION 142d76b60 FUN_142d76b60 body=51 status=ok
// SIG undefined FUN_142d76b60(void)

undefined8
FUN_142d76b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_142d76ab0(param_1,&local_18,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 142d76ba0 FUN_142d76ba0 body=261 status=ok
// SIG undefined FUN_142d76ba0(void)

longlong FUN_142d76ba0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_14217e740(&local_28);
  FUN_142194380(&local_28,0x27,0,0,0);
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  if (*(int *)(param_1 + 0x8c) < 1) {
    FUN_140a70170(param_1,1);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar1 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
    TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  FUN_14217e5b0((longlong)iVar1 * 0x20 + lVar2,&local_28);
  FUN_14217f430(&local_28);
  *(undefined8 *)(param_1 + 0x90) = param_2;
  FString::FString(param_1 + 0x98,param_3);
  return param_1;
}



// FUNCTION 142d76cb0 FUN_142d76cb0 body=677 status=ok
// SIG undefined FUN_142d76cb0(void)

uint * FUN_142d76cb0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined8 *_Src;
  bool bVar13;
  uint local_res8 [2];
  
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)(int)uVar9 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar9 * 0x40 + *param_1);
  puVar8 = (undefined4 *)param_3[1];
  FString::FString(_Src,*param_3);
  *(undefined4 *)(_Src + 2) = *puVar8;
  *(undefined4 *)((longlong)_Src + 0x14) = puVar8[1];
  FString::FString(_Src + 3,puVar8 + 2);
  FString::FString(_Src + 5,puVar8 + 6);
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar9 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      plVar11 = (longlong *)(lVar10 * 0x40 + *param_1);
      if (plVar11[5] != 0) {
        FMemory::Free();
      }
      if (plVar11[3] != 0) {
        FMemory::Free();
      }
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar11,_Src,0x38);
      uVar6 = *param_2;
      bVar4 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x40 + *param_1) = uVar6;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar6 * 0x40 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar11 = (longlong *)param_1[4];
      *param_2 = uVar9;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar2 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142d76f31;
    }
  }
  cVar5 = FUN_142d7e9d0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar7);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x3c) = uVar6;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         uVar9;
  }
LAB_142d76f31:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142d76f60 FUN_142d76f60 body=213 status=ok
// SIG undefined FUN_142d76f60(void)

longlong * FUN_142d76f60(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar7 = (longlong *)*param_1;
  plVar8 = plVar7 + (longlong)(int)param_1[1] * 2;
  while( true ) {
    if (plVar7 == plVar8) {
      plVar7 = (longlong *)param_2[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
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
      return (longlong *)0x0;
    }
    puVar4 = (undefined8 *)*plVar7;
    if ((puVar4 != (undefined8 *)0x0) &&
       (cVar6 = (**(code **)*puVar4)(puVar4,*param_2), cVar6 != '\0')) break;
    plVar7 = plVar7 + 2;
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return plVar7;
}



// FUNCTION 142d77040 FUN_142d77040 body=89 status=ok
// SIG undefined FUN_142d77040(void)

longlong FUN_142d77040(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (lVar1 != 0) {
    lVar3 = FUN_142e4e3f0();
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



// FUNCTION 142d770a0 FUN_142d770a0 body=674 status=ok
// SIG undefined FUN_142d770a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142d770a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar11 = 0;
  puStack_a8 = (uint *)(param_1 + 2);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar3 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar3 != 0) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puStack_a8;
    }
    uVar2 = *puVar12;
    uVar10 = uVar11;
    uVar13 = uVar11;
    while (uVar2 == 0) {
      iVar8 = (int)uVar10;
      uStack_d0 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uStack_d0;
      local_e8._0_4_ = iVar8 + 1;
      uVar10 = (ulonglong)(uint)local_e8;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142d771b0;
      uVar2 = puVar12[(longlong)iVar8 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar8 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_d8._4_4_ = (uStack_d0 - iVar8) + 0x1f;
    if (iVar3 < local_d8._4_4_) {
LAB_142d771b0:
      local_d8._4_4_ = iVar3;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  uStack_98 = uStack_d0;
  uStack_b0 = (uint)local_e8;
  uStack_ac = local_e8._4_4_;
  uStack_e0 = (uint)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar6 = iVar3 <= local_d8._4_4_;
  uVar10 = uVar11;
  uVar13 = uVar11;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar6) {
LAB_142d772dd:
    lVar1 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return (int)lVar1;
  }
  do {
    plVar7 = local_e8;
    lVar4 = *local_e8;
    lVar1 = (longlong)iStack_cc * 0x28;
    lVar5 = *(longlong *)(lVar4 + (longlong)iStack_cc * 0x28);
    if ((int)uVar10 != (int)uVar11) {
      puVar9 = local_50;
      if (local_48 != 0) {
        puVar9 = (undefined1 *)0x0;
      }
      for (iVar3 = *(int *)(((ulonglong)puVar9 | local_48) +
                           (longlong)
                           (int)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5 & (int)uVar13 - 1U) *
                           4); iVar3 != -1; iVar3 = *(int *)(local_88 + 8 + (longlong)iVar3 * 0x10))
      {
        if (*(longlong *)(local_88 + (longlong)iVar3 * 0x10) == lVar5) {
          if (iVar3 != -1) goto LAB_142d772a7;
          break;
        }
      }
    }
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar1 + lVar4);
    FUN_140800100(&local_88,local_c0,*plVar7 + lVar1,0);
LAB_142d772a7:
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    if ((int)local_d8[6] <= iStack_cc) goto LAB_142d772dd;
    uVar11 = (ulonglong)local_54;
    uVar10 = local_80 & 0xffffffff;
    uVar13 = (ulonglong)local_40;
  } while( true );
}



// FUNCTION 142d77350 FUN_142d77350 body=499 status=ok
// SIG undefined FUN_142d77350(void)

longlong FUN_142d77350(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void **ppvVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  longlong lVar6;
  void *_Src_00;
  void *local_58;
  int local_50;
  int local_4c;
  void **local_48;
  longlong local_40 [3];
  
  cVar5 = FUN_14218fca0();
  if (cVar5 != '\0') {
    local_50 = *(int *)(param_1 + 0x10);
    lVar6 = (longlong)local_50;
    _Src = *(void **)(param_1 + 8);
    ppvVar1 = (void **)(param_1 + 8);
    local_58 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_58,(0xc - (uint)(local_50 != 0)) + local_50,0);
    _Src_00 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar6 * 2);
    iVar2 = local_50;
    lVar6 = (longlong)local_50;
    local_50 = (0xc - (uint)(local_50 != 0)) + local_50;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
      _Src_00 = local_58;
    }
    iVar3 = local_50;
    builtin_wcsncpy((wchar_t *)((longlong)_Src_00 + (lVar6 - (ulonglong)(iVar2 != 0)) * 2),
                    L"_instigator",0xc);
    local_48 = ppvVar1;
    FString::FString(local_40,ppvVar1);
    ppvVar4 = local_48;
    if (local_48 != &local_58) {
      *(int *)(local_48 + 1) = iVar3;
      if ((iVar3 == 0) && (*(int *)((longlong)local_48 + 0xc) == 0)) {
        *(undefined4 *)((longlong)local_48 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(local_48,iVar3);
        _guard_xfg_dispatch_icall_nop(*ppvVar4,_Src_00,(longlong)iVar3 * 2);
      }
    }
    if (_Src_00 != (void *)0x0) {
      FMemory::Free(_Src_00);
    }
    cVar5 = FUN_14218fca0(param_1);
    if (cVar5 != '\0') {
      iVar2 = *(int *)(param_1 + 0x2e0);
      *(int *)(param_1 + 0x2e0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
        FUN_140ae1b70(param_1 + 0x38,iVar2);
      }
      lVar6 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(param_1 + 0x2d8) == 0) {
        lVar6 = param_1 + 0x38;
      }
      FUN_140ac3930((longlong)iVar2 * 0xa8 + lVar6,param_2,ppvVar1,param_3);
    }
    FString::operator=(ppvVar4,local_40);
    if (local_40[0] != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142d77550 FUN_142d77550 body=436 status=ok
// SIG undefined FUN_142d77550(void)

void FUN_142d77550(undefined8 *param_1,int *param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  undefined1 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_28;
  undefined8 local_20;
  
  uVar2 = *(undefined1 *)((longlong)*param_2 + *(longlong *)*param_1);
  *param_2 = *param_2 + 1;
  iVar6 = 0;
  if (param_4 != '\0') {
    local_28 = (void *)0x0;
    local_20 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    pvVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_14588d1f4,4);
    if (((int)local_20 != 0) && (iVar7 = (int)local_20 + -1, iVar7 != 0)) {
      iVar5 = (int)param_3[1];
      iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
      *(int *)(param_3 + 1) = iVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      pvVar1 = (void *)(*param_3 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
  }
  FString::PrintfImpl(&local_28,&DAT_14503e0a0,uVar2);
  pvVar3 = local_28;
  if ((int)local_20 != 0) {
    iVar6 = (int)local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar7 = (int)param_3[1];
    iVar5 = (uint)(iVar7 == 0) + iVar7 + iVar6;
    *(int *)(param_3 + 1) = iVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
    }
    pvVar1 = (void *)(*param_3 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142d77710 FUN_142d77710 body=434 status=ok
// SIG undefined FUN_142d77710(void)

void FUN_142d77710(undefined8 *param_1,int *param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_28;
  undefined8 local_20;
  
  uVar2 = *(undefined4 *)((longlong)*param_2 + *(longlong *)*param_1);
  *param_2 = *param_2 + 4;
  iVar6 = 0;
  if (param_4 != '\0') {
    local_28 = (void *)0x0;
    local_20 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    pvVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_14588d1f4,4);
    if (((int)local_20 != 0) && (iVar7 = (int)local_20 + -1, iVar7 != 0)) {
      iVar5 = (int)param_3[1];
      iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
      *(int *)(param_3 + 1) = iVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      pvVar1 = (void *)(*param_3 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
  }
  FString::PrintfImpl(&local_28,&DAT_14503e0a0,uVar2);
  pvVar3 = local_28;
  if ((int)local_20 != 0) {
    iVar6 = (int)local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar7 = (int)param_3[1];
    iVar5 = (uint)(iVar7 == 0) + iVar7 + iVar6;
    *(int *)(param_3 + 1) = iVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
    }
    pvVar1 = (void *)(*param_3 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142d778d0 FUN_142d778d0 body=438 status=ok
// SIG undefined FUN_142d778d0(void)

void FUN_142d778d0(undefined8 *param_1,int *param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_28;
  undefined8 local_20;
  
  fVar2 = *(float *)((longlong)*param_2 + *(longlong *)*param_1);
  *param_2 = *param_2 + 4;
  iVar6 = 0;
  if (param_4 != '\0') {
    local_28 = (void *)0x0;
    local_20 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    pvVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_14588d1f4,4);
    if (((int)local_20 != 0) && (iVar7 = (int)local_20 + -1, iVar7 != 0)) {
      iVar5 = (int)param_3[1];
      iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
      *(int *)(param_3 + 1) = iVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      pvVar1 = (void *)(*param_3 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
  }
  FString::PrintfImpl(&local_28,&DAT_144dd47e8,(double)fVar2);
  pvVar3 = local_28;
  if ((int)local_20 != 0) {
    iVar6 = (int)local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar7 = (int)param_3[1];
    iVar5 = (uint)(iVar7 == 0) + iVar7 + iVar6;
    *(int *)(param_3 + 1) = iVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
    }
    pvVar1 = (void *)(*param_3 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142d77a90 FUN_142d77a90 body=433 status=ok
// SIG undefined FUN_142d77a90(void)

void FUN_142d77a90(undefined8 *param_1,int *param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_28;
  undefined8 local_20;
  
  uVar2 = *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1);
  *param_2 = *param_2 + 8;
  iVar6 = 0;
  if (param_4 != '\0') {
    local_28 = (void *)0x0;
    local_20 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    pvVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_14588d1f4,4);
    if (((int)local_20 != 0) && (iVar7 = (int)local_20 + -1, iVar7 != 0)) {
      iVar5 = (int)param_3[1];
      iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
      *(int *)(param_3 + 1) = iVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      pvVar1 = (void *)(*param_3 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
  }
  FString::PrintfImpl(&local_28,&DAT_1458964a0,uVar2);
  pvVar3 = local_28;
  if ((int)local_20 != 0) {
    iVar6 = (int)local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar7 = (int)param_3[1];
    iVar5 = (uint)(iVar7 == 0) + iVar7 + iVar6;
    *(int *)(param_3 + 1) = iVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
    }
    pvVar1 = (void *)(*param_3 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142d77c50 FUN_142d77c50 body=433 status=ok
// SIG undefined FUN_142d77c50(void)

void FUN_142d77c50(undefined8 *param_1,int *param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_28;
  undefined8 local_20;
  
  uVar2 = *(undefined8 *)((longlong)*param_2 + *(longlong *)*param_1);
  *param_2 = *param_2 + 8;
  iVar6 = 0;
  if (param_4 != '\0') {
    local_28 = (void *)0x0;
    local_20 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    pvVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,&DAT_14588d1f4,4);
    if (((int)local_20 != 0) && (iVar7 = (int)local_20 + -1, iVar7 != 0)) {
      iVar5 = (int)param_3[1];
      iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
      *(int *)(param_3 + 1) = iVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
      }
      pvVar1 = (void *)(*param_3 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
  }
  FString::PrintfImpl(&local_28,L"%ull",uVar2);
  pvVar3 = local_28;
  if ((int)local_20 != 0) {
    iVar6 = (int)local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar7 = (int)param_3[1];
    iVar5 = (uint)(iVar7 == 0) + iVar7 + iVar6;
    *(int *)(param_3 + 1) = iVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
    }
    pvVar1 = (void *)(*param_3 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142d77e10 FUN_142d77e10 body=285 status=ok
// SIG undefined FUN_142d77e10(void)

void FUN_142d77e10(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  void **ppvVar1;
  void *_Src;
  wchar_t *_Str;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *local_38;
  uint local_30;
  uint local_2c;
  
  _Src = (void *)*param_3;
  pvVar2 = (void *)0x0;
  local_38 = (void *)0x0;
  lVar3 = param_3[1] - (longlong)_Src >> 1;
  uVar5 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar6 = uVar5;
  if (lVar3 != 0) {
    iVar4 = (int)lVar3 + 1;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar4);
      pvVar2 = (void *)(ulonglong)local_30;
    }
    local_30 = iVar4 + (int)pvVar2;
    if ((int)local_2c < (int)local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    uVar6 = local_2c;
    uVar5 = local_30;
    pvVar2 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar3 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)(int)uVar5 * 2 + -2) = 0;
  }
  ppvVar1 = (void **)(param_1 + 3);
  if (ppvVar1 == &local_38) {
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar2;
    *(uint *)(param_1 + 4) = uVar5;
    *(uint *)((longlong)param_1 + 0x24) = uVar6;
  }
  if (*(int *)(param_1 + 4) == 0) {
    _Str = L"";
  }
  else {
    _Str = *ppvVar1;
  }
  iVar4 = _wtoi(_Str);
  *(int *)((longlong)*param_2 + *(longlong *)*param_1) = iVar4;
  *param_2 = *param_2 + 4;
  return;
}



// FUNCTION 142d77f30 FUN_142d77f30 body=302 status=ok
// SIG undefined FUN_142d77f30(void)

void FUN_142d77f30(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  void **ppvVar1;
  void *_Src;
  wchar_t *_Str;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  void *local_38;
  uint local_30;
  uint local_2c;
  
  _Src = (void *)*param_3;
  pvVar2 = (void *)0x0;
  local_38 = (void *)0x0;
  lVar3 = param_3[1] - (longlong)_Src >> 1;
  uVar5 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar6 = uVar5;
  if (lVar3 != 0) {
    iVar4 = (int)lVar3 + 1;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar4);
      pvVar2 = (void *)(ulonglong)local_30;
    }
    local_30 = iVar4 + (int)pvVar2;
    if ((int)local_2c < (int)local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
    }
    uVar6 = local_2c;
    uVar5 = local_30;
    pvVar2 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar3 * 2);
    *(undefined2 *)((longlong)pvVar2 + (longlong)(int)uVar5 * 2 + -2) = 0;
  }
  ppvVar1 = (void **)(param_1 + 3);
  if (ppvVar1 == &local_38) {
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar2;
    *(uint *)(param_1 + 4) = uVar5;
    *(uint *)((longlong)param_1 + 0x24) = uVar6;
  }
  if (*(int *)(param_1 + 4) == 0) {
    _Str = L"";
  }
  else {
    _Str = *ppvVar1;
  }
  dVar7 = _wtof(_Str);
  *(float *)((longlong)*param_2 + *(longlong *)*param_1) = (float)dVar7;
  *param_2 = *param_2 + 4;
  return;
}



// FUNCTION 142d78060 FUN_142d78060 body=834 status=ok
// SIG undefined FUN_142d78060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142d78060(undefined8 *param_1,longlong *param_2)

{
  undefined *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined *puVar4;
  short *psVar5;
  longlong lVar6;
  wchar_t *_Buf1;
  wchar_t *_Str;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  int *local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined *)0x0;
  local_a8 = (int *)0x0;
  local_9c = 0;
  local_98 = param_2;
  local_78 = param_1;
  iVar3 = MNP_OverrideOutput_WC(&DAT_14588bd3c);
  puVar1 = PTR_DAT_1466ad5e0;
  lVar6 = *param_2;
  psVar5 = &DAT_14588bd3c;
  if (lVar6 != param_2[1]) {
    do {
      if (psVar5 == &DAT_14588bd3c + iVar3) goto LAB_142d780ec;
    } while ((*(short *)(lVar6 + -0x14588bd3c + (longlong)psVar5) == *psVar5) &&
            (psVar5 = psVar5 + 1, lVar6 + -0x14588bd3c + (longlong)psVar5 != param_2[1]));
  }
  if (psVar5 == &DAT_14588bd3c + iVar3) {
LAB_142d780ec:
    *param_2 = lVar6 + ((longlong)iVar3 * 2 >> 1) * 2;
    iVar3 = MNP_OverrideOutput_WC(&DAT_14588bd6c);
    local_88 = &DAT_14588bd6c;
    local_80 = &DAT_14588bd6c + (longlong)iVar3 * 2;
    FUN_142d95e90(param_2,&local_70,&local_88);
    piVar7 = local_a8;
    if (local_50 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    while( true ) {
      _Str = local_70;
      iVar3 = MNP_OverrideOutput_WC(&DAT_14588bf18);
      lVar6 = (longlong)iVar3;
      uVar8 = (uint)puVar4;
      if ((iVar3 < 1) || ((longlong)local_68 - (longlong)_Str >> 1 < lVar6)) break;
      local_88 = (undefined *)(lVar6 * 2);
      iVar3 = _guard_xfg_dispatch_icall_nop(_Str,&DAT_14588bf18,lVar6 * 2);
      _Buf1 = _Str;
      while (iVar3 != 0) {
        if (_Buf1 == local_68 + -lVar6) goto LAB_142d78223;
        _Buf1 = _Buf1 + 1;
        iVar3 = _guard_xfg_dispatch_icall_nop(_Buf1,&DAT_14588bf18,lVar6 * 2);
      }
      if (_Buf1 == local_68) break;
      local_70 = (wchar_t *)(local_88 + (longlong)_Buf1);
      if ((longlong)_Buf1 - (longlong)_Str >> 1 != 0) {
        iVar3 = _wtoi(_Str);
        local_a0 = uVar8 + 1;
        if (local_9c < (int)local_a0) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,puVar4);
          piVar7 = local_a8;
        }
        puVar4 = (undefined *)(ulonglong)local_a0;
        piVar7[(int)uVar8] = iVar3;
      }
    }
LAB_142d78223:
    param_1 = local_78;
    if ((longlong)local_68 - (longlong)_Str >> 1 != 0) {
      iVar3 = _wtoi(_Str);
      local_a0 = uVar8 + 1;
      if (local_9c < (int)local_a0) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,puVar4);
      }
      local_a8[(int)uVar8] = iVar3;
      uVar8 = local_a0;
    }
    plVar2 = local_98;
    piVar7 = local_a8;
    *local_98 = local_60;
    local_98[1] = local_58;
    iVar3 = MNP_OverrideOutput_WC(&DAT_14588bd6c);
    local_98 = (longlong *)&DAT_14588bd6c;
    local_90 = &DAT_14588bd6c + (longlong)iVar3 * 2;
    FUN_142d95e30(plVar2,&local_98);
    puVar4 = PTR_DAT_1466ad5e0;
    if (PTR_DAT_1466ad5e0 == (undefined *)0x0) {
      local_90 = (undefined *)0x0;
    }
    else {
      iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
      local_90 = puVar4 + (longlong)iVar3 * 2;
    }
    local_98 = (longlong *)puVar4;
    FUN_142d95e30(plVar2,&local_98);
    *param_1 = piVar7;
    *(uint *)(param_1 + 1) = uVar8;
  }
  else {
    if (PTR_DAT_1466ad5e0 != (undefined *)0x0) {
      iVar3 = MNP_OverrideOutput_WC(PTR_DAT_1466ad5e0);
      puVar4 = puVar1 + (longlong)iVar3 * 2;
    }
    local_98 = (longlong *)puVar1;
    local_90 = puVar4;
    FUN_142d95e90(param_2,&local_70,&local_98);
    if (local_50 == '\0') {
      local_70 = (wchar_t *)*param_2;
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *param_2 = local_60;
      param_2[1] = local_58;
    }
    iVar3 = _wtoi(local_70);
    local_a0 = 1;
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    *local_a8 = iVar3;
    *param_1 = local_a8;
    *(uint *)(param_1 + 1) = local_a0;
  }
  *(int *)((longlong)param_1 + 0xc) = local_9c;
  return param_1;
}



// FUNCTION 142d783b0 FUN_142d783b0 body=270 status=ok
// SIG undefined FUN_142d783b0(void)

uint FUN_142d783b0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  iVar1 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
  local_28 = L":";
  local_20 = &DAT_14588d1f4 + iVar1;
  plVar3 = (longlong *)FUN_142d95d90(param_1,local_18,&local_28);
  pwVar5 = (wchar_t *)0x0;
  iVar1 = 0;
  local_28 = (wchar_t *)0x0;
  lVar6 = plVar3[1] - *plVar3 >> 1;
  local_20 = (undefined2 *)0x0;
  if (lVar6 != 0) {
    iVar7 = (int)lVar6 + 1;
    iVar4 = iVar1;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,iVar7);
      pwVar5 = (wchar_t *)((ulonglong)local_20 & 0xffffffff);
      iVar4 = local_20._4_4_;
    }
    iVar1 = iVar7 + (int)pwVar5;
    local_20 = (undefined2 *)CONCAT44(local_20._4_4_,iVar1);
    if (iVar4 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
      iVar1 = (int)local_20;
    }
    pwVar5 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,(void *)*plVar3,lVar6 * 2);
    pwVar5[(longlong)iVar1 + -1] = L'\0';
  }
  _Str = L"";
  if (iVar1 != 0) {
    _Str = pwVar5;
  }
  uVar2 = _wtoi(_Str);
  if (pwVar5 != (wchar_t *)0x0) {
    FMemory::Free(pwVar5);
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}



// FUNCTION 142d784c0 FUN_142d784c0 body=269 status=ok
// SIG undefined FUN_142d784c0(void)

int FUN_142d784c0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t *_Str;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  iVar1 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
  local_28 = L":";
  local_20 = &DAT_14588d1f4 + iVar1;
  plVar2 = (longlong *)FUN_142d95d90(param_1,local_18,&local_28);
  pwVar4 = (wchar_t *)0x0;
  iVar1 = 0;
  local_28 = (wchar_t *)0x0;
  lVar5 = plVar2[1] - *plVar2 >> 1;
  local_20 = (undefined2 *)0x0;
  if (lVar5 != 0) {
    iVar6 = (int)lVar5 + 1;
    iVar3 = iVar1;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,iVar6);
      pwVar4 = (wchar_t *)((ulonglong)local_20 & 0xffffffff);
      iVar3 = local_20._4_4_;
    }
    iVar1 = iVar6 + (int)pwVar4;
    local_20 = (undefined2 *)CONCAT44(local_20._4_4_,iVar1);
    if (iVar3 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
      iVar1 = (int)local_20;
    }
    pwVar4 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,(void *)*plVar2,lVar5 * 2);
    pwVar4[(longlong)iVar1 + -1] = L'\0';
  }
  _Str = L"";
  if (iVar1 != 0) {
    _Str = pwVar4;
  }
  iVar1 = _wtoi(_Str);
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  return iVar1;
}



// FUNCTION 142d785d0 FUN_142d785d0 body=285 status=ok
// SIG undefined FUN_142d785d0(void)

float FUN_142d785d0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t *_Str;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  wchar_t *local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  iVar1 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
  local_38 = L":";
  local_30 = &DAT_14588d1f4 + iVar1;
  plVar2 = (longlong *)FUN_142d95d90(param_1,local_28,&local_38);
  pwVar4 = (wchar_t *)0x0;
  iVar1 = 0;
  local_38 = (wchar_t *)0x0;
  lVar5 = plVar2[1] - *plVar2 >> 1;
  local_30 = (undefined2 *)0x0;
  if (lVar5 != 0) {
    iVar6 = (int)lVar5 + 1;
    iVar3 = iVar1;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar6);
      pwVar4 = (wchar_t *)((ulonglong)local_30 & 0xffffffff);
      iVar3 = local_30._4_4_;
    }
    iVar1 = iVar6 + (int)pwVar4;
    local_30 = (undefined2 *)CONCAT44(local_30._4_4_,iVar1);
    if (iVar3 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
      iVar1 = (int)local_30;
    }
    pwVar4 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,(void *)*plVar2,lVar5 * 2);
    pwVar4[(longlong)iVar1 + -1] = L'\0';
  }
  _Str = L"";
  if (iVar1 != 0) {
    _Str = pwVar4;
  }
  dVar7 = _wtof(_Str);
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  return (float)dVar7;
}



// FUNCTION 142d786f0 FUN_142d786f0 body=271 status=ok
// SIG undefined FUN_142d786f0(void)

longlong FUN_142d786f0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t *_Str;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  iVar1 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
  local_28 = L":";
  local_20 = &DAT_14588d1f4 + iVar1;
  plVar2 = (longlong *)FUN_142d95d90(param_1,local_18,&local_28);
  pwVar4 = (wchar_t *)0x0;
  iVar1 = 0;
  local_28 = (wchar_t *)0x0;
  lVar5 = plVar2[1] - *plVar2 >> 1;
  local_20 = (undefined2 *)0x0;
  if (lVar5 != 0) {
    iVar6 = (int)lVar5 + 1;
    iVar3 = iVar1;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,iVar6);
      pwVar4 = (wchar_t *)((ulonglong)local_20 & 0xffffffff);
      iVar3 = local_20._4_4_;
    }
    iVar1 = iVar6 + (int)pwVar4;
    local_20 = (undefined2 *)CONCAT44(local_20._4_4_,iVar1);
    if (iVar3 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
      iVar1 = (int)local_20;
    }
    pwVar4 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,(void *)*plVar2,lVar5 * 2);
    pwVar4[(longlong)iVar1 + -1] = L'\0';
  }
  _Str = L"";
  if (iVar1 != 0) {
    _Str = pwVar4;
  }
  lVar5 = _wtoi64(_Str);
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  return lVar5;
}



// FUNCTION 142d78800 FUN_142d78800 body=276 status=ok
// SIG undefined FUN_142d78800(void)

ulonglong FUN_142d78800(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  iVar1 = MNP_OverrideOutput_WC(&DAT_14588d1f4);
  local_28 = L":";
  local_20 = &DAT_14588d1f4 + iVar1;
  plVar2 = (longlong *)FUN_142d95d90(param_1,local_18,&local_28);
  pwVar5 = (wchar_t *)0x0;
  iVar1 = 0;
  local_28 = (wchar_t *)0x0;
  lVar6 = plVar2[1] - *plVar2 >> 1;
  local_20 = (undefined2 *)0x0;
  if (lVar6 != 0) {
    iVar7 = (int)lVar6 + 1;
    iVar4 = iVar1;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,iVar7);
      pwVar5 = (wchar_t *)((ulonglong)local_20 & 0xffffffff);
      iVar4 = local_20._4_4_;
    }
    iVar1 = iVar7 + (int)pwVar5;
    local_20 = (undefined2 *)CONCAT44(local_20._4_4_,iVar1);
    if (iVar4 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
      iVar1 = (int)local_20;
    }
    pwVar5 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,(void *)*plVar2,lVar6 * 2);
    pwVar5[(longlong)iVar1 + -1] = L'\0';
  }
  _Str = L"";
  if (iVar1 != 0) {
    _Str = pwVar5;
  }
  uVar3 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  if (pwVar5 != (wchar_t *)0x0) {
    FMemory::Free(pwVar5);
  }
  return uVar3;
}



// FUNCTION 142d78920 FUN_142d78920 body=409 status=ok
// SIG undefined FUN_142d78920(void)

int FUN_142d78920(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar12 = 0;
  iVar7 = 0;
  if ((*(longlong **)*param_1 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(**(longlong **)*param_1 + 0x60))(), cVar5 == '\0')) {
    bVar15 = 0;
    uVar14 = uVar12;
  }
  else {
    bVar15 = 1;
    uVar14 = uVar12;
  }
  do {
    iVar13 = (int)uVar14;
    uVar12 = uVar12 + 1;
    uVar14 = (ulonglong)(iVar13 + 1);
    if ((longlong)uVar12 < lVar11) {
      lVar8 = uVar12 * 0x10;
      do {
        if ((*(longlong **)(lVar8 + *param_1) == (longlong *)0x0) ||
           (cVar5 = (**(code **)(**(longlong **)(lVar8 + *param_1) + 0x60))(), cVar5 == '\0')) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar15 != bVar6) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)uVar12 < lVar11);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar9 != 0) {
        plVar10 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar10;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x10 + *param_1),
                   (void *)((longlong)iVar13 * 0x10 + *param_1),(longlong)iVar9 << 4);
      }
      iVar7 = iVar7 + iVar9;
    }
    bVar15 = bVar15 ^ 1;
    if (lVar11 <= (longlong)uVar12) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar3 - iVar7;
    }
  } while( true );
}



// FUNCTION 142d78ac0 FUN_142d78ac0 body=412 status=ok
// SIG undefined FUN_142d78ac0(void)

int FUN_142d78ac0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  
  iVar3 = (int)param_1[1];
  lVar12 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar11 = 0;
  puVar4 = *(undefined8 **)*param_1;
  iVar8 = 0;
  if ((puVar4 == (undefined8 *)0x0) ||
     (cVar6 = (**(code **)*puVar4)(puVar4,*param_2), cVar6 == '\0')) {
    bVar16 = 1;
    uVar15 = uVar11;
  }
  else {
    bVar16 = 0;
    uVar15 = uVar11;
  }
  do {
    iVar14 = (int)uVar15;
    uVar11 = uVar11 + 1;
    uVar15 = (ulonglong)(iVar14 + 1);
    if ((longlong)uVar11 < lVar12) {
      lVar9 = uVar11 * 0x10;
      do {
        puVar4 = *(undefined8 **)(lVar9 + *param_1);
        if ((puVar4 == (undefined8 *)0x0) ||
           (cVar6 = (**(code **)*puVar4)(puVar4,*param_2), cVar6 == '\0')) {
          bVar7 = 1;
        }
        else {
          bVar7 = 0;
        }
        if (bVar16 != bVar7) break;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)uVar11 < lVar12);
    }
    iVar10 = (int)uVar15 - iVar14;
    if (bVar16 == 0) {
      if (iVar10 != 0) {
        plVar13 = (longlong *)((longlong)iVar14 * 0x10 + 8 + *param_1);
        do {
          plVar5 = (longlong *)*plVar13;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar13 = plVar13 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar8 != iVar14) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x10 + *param_1),
                   (void *)((longlong)iVar14 * 0x10 + *param_1),(longlong)iVar10 << 4);
      }
      iVar8 = iVar8 + iVar10;
    }
    bVar16 = bVar16 ^ 1;
    if (lVar12 <= (longlong)uVar11) {
      *(int *)(param_1 + 1) = iVar8;
      return iVar3 - iVar8;
    }
  } while( true );
}



// FUNCTION 142d78c60 FUN_142d78c60 body=695 status=ok
// SIG undefined FUN_142d78c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d78c60(undefined4 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [8];
  code *local_d8;
  longlong lStack_d0;
  uint *puStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_88;
  undefined1 local_84;
  longlong local_80;
  undefined8 local_78;
  uint local_70 [4];
  uint *local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_84 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_60 = (uint *)0x0;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(&local_80,param_1[4] - param_1[0xf]);
  FUN_1409f3920(&local_108,param_2);
  uStack_f0 = &local_88;
  local_a8 = 0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x28,&puStack_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_14589a778;
    FUN_1409f3920(puVar7 + 1,&local_108);
    puVar7[4] = uStack_f0;
  }
  local_d8 = FUN_142d7e300;
  FUN_142d807f0(param_1,&local_d8);
  if (uStack_100 != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)(param_1 + 2);
  if ((int)local_78 - local_4c == param_1[4] - param_1[0xf]) {
    uVar8 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 1) = local_84;
    *param_1 = local_88;
    puVar3 = uStack_f0;
    if (plVar1 != &local_80) {
      TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
      ::Empty(plVar1);
      puStack_c8 = local_70;
      local_108 = (code *)0x100000000;
      local_f8._4_4_ = 0;
      uStack_f0._0_4_ = 0;
      if ((int)local_58 != 0) {
        puVar9 = local_70;
        if (local_60 != (uint *)0x0) {
          puVar9 = local_60;
        }
        uVar5 = *puVar9;
        uStack_f0._0_4_ = 0;
        iVar6 = 0;
        while (uVar5 == 0) {
          uStack_f0._0_4_ = (uint)uStack_f0 + 0x20;
          uVar4 = (ulonglong)local_108 >> 0x20;
          local_108 = (code *)CONCAT44((int)uVar4,iVar6 + 1);
          if ((int)((int)local_58 + -1 + ((int)local_58 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) {
            local_f8._4_4_ = (int)local_58;
            goto LAB_142d78e3d;
          }
          uVar5 = puVar9[(longlong)iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        local_108 = (code *)CONCAT44(uVar5,SUB84(local_108,0));
        if (uVar5 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        local_f8._4_4_ = ((uint)uStack_f0 - iVar6) + 0x1f;
        if ((int)local_58 < local_f8._4_4_) {
          local_f8._4_4_ = (int)local_58;
        }
      }
LAB_142d78e3d:
      local_d8 = (code *)&local_80;
      lStack_d0 = (longlong)local_108;
      uStack_c0 = 0xffffffff;
      iStack_bc = local_f8._4_4_;
      iStack_b8 = (uint)uStack_f0;
      uStack_b4 = uStack_f0._4_4_;
      uStack_100 = (longlong)local_108;
      local_e8 = (uint)uStack_f0;
      uStack_e4 = uStack_f0._4_4_;
      uStack_f0._0_4_ = 0xffffffff;
      uStack_f0._4_4_ = local_f8._4_4_;
      puVar3 = (undefined4 *)CONCAT44(local_f8._4_4_,0xffffffff);
      bVar2 = local_f8._4_4_ < (int)local_58;
      local_108 = local_d8;
      local_f8 = puStack_c8;
      if (bVar2) {
        do {
          TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                    (plVar1,local_e0,*(longlong *)local_108 + (longlong)uStack_f0._4_4_ * 0x18,0);
          uStack_f0._0_4_ = (uint)uStack_f0 & ~uStack_100._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
          puVar3 = (undefined4 *)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
        } while (uStack_f0._4_4_ < (int)local_f8[6]);
      }
    }
    uStack_f0 = puVar3;
    uVar8 = 1;
  }
  local_38 = 0;
  if (local_40 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_80);
  return uVar8;
}



// FUNCTION 142d78f20 FUN_142d78f20 body=695 status=ok
// SIG undefined FUN_142d78f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d78f20(undefined4 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [8];
  code *local_d8;
  longlong lStack_d0;
  uint *puStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_88;
  undefined1 local_84;
  longlong local_80;
  undefined8 local_78;
  uint local_70 [4];
  uint *local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_84 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_60 = (uint *)0x0;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(&local_80,param_1[4] - param_1[0xf]);
  FUN_1409f3920(&local_108,param_2);
  uStack_f0 = &local_88;
  local_a8 = 0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x28,&puStack_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_14589a778;
    FUN_1409f3920(puVar7 + 1,&local_108);
    puVar7[4] = uStack_f0;
  }
  local_d8 = FUN_142d7e350;
  FUN_142d807f0(param_1,&local_d8);
  if (uStack_100 != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)(param_1 + 2);
  if ((int)local_78 - local_4c == param_1[4] - param_1[0xf]) {
    uVar8 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 1) = local_84;
    *param_1 = local_88;
    puVar3 = uStack_f0;
    if (plVar1 != &local_80) {
      TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
      ::Empty(plVar1);
      puStack_c8 = local_70;
      local_108 = (code *)0x100000000;
      local_f8._4_4_ = 0;
      uStack_f0._0_4_ = 0;
      if ((int)local_58 != 0) {
        puVar9 = local_70;
        if (local_60 != (uint *)0x0) {
          puVar9 = local_60;
        }
        uVar5 = *puVar9;
        uStack_f0._0_4_ = 0;
        iVar6 = 0;
        while (uVar5 == 0) {
          uStack_f0._0_4_ = (uint)uStack_f0 + 0x20;
          uVar4 = (ulonglong)local_108 >> 0x20;
          local_108 = (code *)CONCAT44((int)uVar4,iVar6 + 1);
          if ((int)((int)local_58 + -1 + ((int)local_58 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) {
            local_f8._4_4_ = (int)local_58;
            goto LAB_142d790fd;
          }
          uVar5 = puVar9[(longlong)iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        local_108 = (code *)CONCAT44(uVar5,SUB84(local_108,0));
        if (uVar5 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        local_f8._4_4_ = ((uint)uStack_f0 - iVar6) + 0x1f;
        if ((int)local_58 < local_f8._4_4_) {
          local_f8._4_4_ = (int)local_58;
        }
      }
LAB_142d790fd:
      local_d8 = (code *)&local_80;
      lStack_d0 = (longlong)local_108;
      uStack_c0 = 0xffffffff;
      iStack_bc = local_f8._4_4_;
      iStack_b8 = (uint)uStack_f0;
      uStack_b4 = uStack_f0._4_4_;
      uStack_100 = (longlong)local_108;
      local_e8 = (uint)uStack_f0;
      uStack_e4 = uStack_f0._4_4_;
      uStack_f0._0_4_ = 0xffffffff;
      uStack_f0._4_4_ = local_f8._4_4_;
      puVar3 = (undefined4 *)CONCAT44(local_f8._4_4_,0xffffffff);
      bVar2 = local_f8._4_4_ < (int)local_58;
      local_108 = local_d8;
      local_f8 = puStack_c8;
      if (bVar2) {
        do {
          TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                    (plVar1,local_e0,*(longlong *)local_108 + (longlong)uStack_f0._4_4_ * 0x18,0);
          uStack_f0._0_4_ = (uint)uStack_f0 & ~uStack_100._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
          puVar3 = (undefined4 *)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
        } while (uStack_f0._4_4_ < (int)local_f8[6]);
      }
    }
    uStack_f0 = puVar3;
    uVar8 = 1;
  }
  local_38 = 0;
  if (local_40 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_80);
  return uVar8;
}



// FUNCTION 142d791e0 FUN_142d791e0 body=33 status=ok
// SIG undefined FUN_142d791e0(void)

undefined8 * FUN_142d791e0(undefined8 *param_1)

{
  FUN_14243ca00();
  *param_1 = &PTR_FUN_145899728;
  return param_1;
}



// FUNCTION 142d79210 FUN_142d79210 body=73 status=ok
// SIG undefined FUN_142d79210(void)

undefined8 * FUN_142d79210(undefined8 *param_1)

{
  FUN_14246d240();
  *param_1 = &PTR__scalar_deleting_destructor__145898720;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0x40000000;
  return param_1;
}



// FUNCTION 142d79260 FUN_142d79260 body=119 status=ok
// SIG undefined FUN_142d79260(void)

undefined8 * FUN_142d79260(undefined8 *param_1)

{
  FUN_1425d8690();
  *param_1 = &PTR_FUN_145895b20;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 9;
  return param_1;
}



// FUNCTION 142d792e0 FUN_142d792e0 body=393 status=ok
// SIG undefined FUN_142d792e0(void)

undefined8 * FUN_142d792e0(undefined8 *param_1,undefined8 param_2)

{
  uint local_res8 [2];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  FUN_142d959c0();
  if (*(char *)((longlong)param_1 + 0x99) == '\0') {
    local_res8[0] = 0;
    FUN_142d95b60(param_1,param_2,local_res8,0);
    if (*(char *)((longlong)param_1 + 0x99) == '\0') {
      *(char *)(param_1 + 0x13) = (char)local_res8[0];
      if ((char)local_res8[0] == '\0') {
        FUN_142d84c90(param_1,param_2);
      }
      else if ((local_res8[0] & 0xff) == 1) {
        FUN_142d84aa0(param_1,param_2);
      }
      else {
        FUN_142d90e10(param_1,L"corrupted sub-type field in micropatch");
      }
      if (*(char *)((longlong)param_1 + 0x99) == '\0') {
        local_res8[0] = 0;
        FUN_142d95b60(param_1,param_2,local_res8,1);
        if (*(char *)((longlong)param_1 + 0x99) == '\0') {
          FUN_142d959c0(param_1,param_2,param_1 + 0xd,local_res8[0]);
          if (*(char *)((longlong)param_1 + 0x99) == '\0') {
            local_res8[0] = 0;
            FUN_142d95b60(param_1,param_2,local_res8,1);
            if (*(char *)((longlong)param_1 + 0x99) == '\0') {
              FUN_142d959c0(param_1,param_2,param_1 + 0xf,local_res8[0]);
            }
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142d79470 FUN_142d79470 body=1345 status=ok
// SIG undefined FUN_142d79470(void)

undefined8 * FUN_142d79470(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  
  FUN_1423e4560();
  *param_1 = &PTR__scalar_deleting_destructor__145897c20;
  if (((*(char *)(param_2 + 0x6f0) != '\0') && (lVar6 = FUN_142d805f0(param_2), lVar6 != 0)) &&
     (*(longlong *)(lVar6 + 0x488) != 0)) {
    fVar12 = (float)DAT_1464aa798;
    fVar13 = DAT_1464aa798._4_4_;
    fVar15 = DAT_1464aa7a0;
    if (((ABS(*(float *)(param_2 + 0x70c) - (float)DAT_1464aa798) <= 0.0001) &&
        (ABS(*(float *)(param_2 + 0x710) - DAT_1464aa798._4_4_) <= 0.0001)) &&
       (ABS(*(float *)(param_2 + 0x714) - DAT_1464aa7a0) <= 0.0001)) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x488) + 0x168);
      if (lVar6 == 0) {
        fVar12 = (float)DAT_1464aa7a8;
        fVar13 = (float)((ulonglong)DAT_1464aa7a8 >> 0x20);
        fVar15 = DAT_1464aa7b0;
      }
      else {
        puVar7 = (undefined8 *)FUN_142369f10(lVar6,&local_f8);
        fVar12 = (float)*puVar7;
        fVar13 = (float)((ulonglong)*puVar7 >> 0x20);
        fVar15 = *(float *)(puVar7 + 1);
      }
    }
    fVar2 = *(float *)(param_2 + 0x710);
    fVar3 = *(float *)(param_2 + 0x70c);
    fVar16 = *(float *)(param_2 + 0x714);
    local_f8 = CONCAT44(fVar13,fVar12);
    fVar8 = fVar3 * fVar12 + fVar2 * fVar13 + fVar16 * fVar15;
    fVar12 = fVar12 - fVar3 * fVar8;
    fVar13 = fVar13 - fVar2 * fVar8;
    fVar15 = fVar15 - fVar16 * fVar8;
    fVar9 = fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15;
    fVar8 = fVar12;
    fVar14 = fVar13;
    fVar10 = fVar15;
    if ((fVar9 != 1.0) &&
       (fVar8 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, fVar10 = DAT_1468b5d98, 1e-08 <= fVar9)) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar8 = fVar10 * fVar12;
      fVar14 = fVar10 * fVar13;
      fVar10 = fVar10 * fVar15;
    }
    plVar1 = param_1 + 0x74;
    iVar4 = *(int *)(param_1 + 0x75);
    fVar12 = fVar10 * 15.0;
    uStack_c0 = 0x3fc00000;
    fVar9 = fVar8 * 15.0;
    fVar17 = fVar14 * 15.0;
    fVar15 = (fVar16 * fVar14 - fVar2 * fVar10) * 15.0;
    fVar16 = (fVar3 * fVar10 - fVar16 * fVar8) * 15.0;
    fStack_d0 = (*(float *)(param_2 + 0x700) + fVar9) - fVar15;
    fStack_cc = (*(float *)(param_2 + 0x704) + fVar17) - fVar16;
    fVar13 = (fVar2 * fVar8 - fVar3 * fVar14) * 15.0;
    local_e0 = (*(float *)(param_2 + 0x708) - fVar12) + fVar13;
    local_f0 = (*(float *)(param_2 + 0x708) + fVar12) - fVar13;
    local_dc = CONCAT44((*(float *)(param_2 + 0x704) - fVar17) + fVar16,
                        (*(float *)(param_2 + 0x700) - fVar9) + fVar15);
    uStack_c4 = DAT_1464aa738;
    *(int *)(param_1 + 0x75) = iVar4 + 1;
    local_e8 = local_f8;
    fStack_d4 = local_e0;
    fStack_c8 = local_f0;
    if (*(int *)((longlong)param_1 + 0x3ac) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar4);
    }
    uVar5 = CONCAT44(uStack_c0,uStack_c4);
    lVar6 = *plVar1;
    uStack_c0 = 0x3fc00000;
    puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar6);
    *puVar7 = local_dc;
    puVar7[1] = CONCAT44(fStack_d0,fStack_d4);
    puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar6);
    *puVar7 = CONCAT44(fStack_c8,fStack_cc);
    puVar7[1] = uVar5;
    iVar4 = *(int *)(param_1 + 0x75);
    local_f0 = *(float *)(param_2 + 0x708) + fVar12 + fVar13;
    local_e0 = (*(float *)(param_2 + 0x708) - fVar12) - fVar13;
    fStack_d0 = *(float *)(param_2 + 0x700) + fVar9 + fVar15;
    fStack_cc = *(float *)(param_2 + 0x704) + fVar17 + fVar16;
    local_dc = CONCAT44((*(float *)(param_2 + 0x704) - fVar17) - fVar16,
                        (*(float *)(param_2 + 0x700) - fVar9) - fVar15);
    uStack_c4 = DAT_1464aa738;
    *(int *)(param_1 + 0x75) = iVar4 + 1;
    fStack_d4 = local_e0;
    fStack_c8 = local_f0;
    if (*(int *)((longlong)param_1 + 0x3ac) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar6);
    *puVar7 = local_dc;
    puVar7[1] = CONCAT44(fStack_d0,fStack_d4);
    puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar6);
    *puVar7 = CONCAT44(fStack_c8,fStack_cc);
    puVar7[1] = CONCAT44(uStack_c0,uStack_c4);
  }
  return param_1;
}



// FUNCTION 142d799c0 FUN_142d799c0 body=31 status=ok
// SIG undefined FUN_142d799c0(void)

void * FUN_142d799c0(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x140);
  return param_1;
}



// FUNCTION 142d799e0 FUN_142d799e0 body=585 status=ok
// SIG undefined FUN_142d799e0(void)

longlong FUN_142d799e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined1 param_5,undefined8 *param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  plVar2 = (longlong *)param_6[6];
  local_98 = 0;
  local_a8 = (longlong *)0x0;
  if (plVar2 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(local_c8,param_6 + 2,0x20);
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
    plVar2 = (longlong *)param_6[6];
  }
  param_6[6] = 0;
  local_98 = *(int *)(param_6 + 8);
  local_a8 = plVar2;
  *(undefined4 *)(param_6 + 8) = 0;
  if (local_98 == 0) {
LAB_142d79a9b:
    local_d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar1 = local_c8;
    if (plVar2 != (longlong *)0x0) {
      plVar1 = plVar2;
    }
    if (plVar1 == (longlong *)0x0) goto LAB_142d79a9b;
    (**(code **)(*plVar1 + 8))();
    local_d8[0] = (code *)*param_6;
  }
  *param_6 = AK::MemoryMgr::StartProfileThreadUsage;
  plVar2 = (longlong *)param_4[6];
  local_58 = (longlong *)0x0;
  local_48 = 0;
  if (plVar2 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(local_78,param_4 + 2,0x20);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
    plVar2 = (longlong *)param_4[6];
  }
  param_4[6] = 0;
  local_48 = *(int *)(param_4 + 8);
  local_58 = plVar2;
  *(undefined4 *)(param_4 + 8) = 0;
  if (local_48 != 0) {
    plVar1 = local_78;
    if (plVar2 != (longlong *)0x0) {
      plVar1 = plVar2;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
      local_88[0] = (code *)*param_4;
      goto LAB_142d79b48;
    }
  }
  local_88[0] = FUN_1406a5e50;
LAB_142d79b48:
  *param_4 = FUN_1406a5e50;
  FUN_1406a4e00(param_1,param_2,param_3,local_88,param_5,local_d8,param_7);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(code **)(param_1 + 0x100) = AK::MemoryMgr::StartProfileThreadUsage;
  if (*(int *)(param_4 + 8) != 0) {
    plVar2 = (longlong *)param_4[6];
    if ((longlong *)param_4[6] == (longlong *)0x0) {
      plVar2 = param_4 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (param_4[6] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_6 + 8) != 0) {
    plVar2 = (longlong *)param_6[6];
    if ((longlong *)param_6[6] == (longlong *)0x0) {
      plVar2 = param_6 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (param_6[6] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142d79c30 FUN_142d79c30 body=56 status=ok
// SIG undefined FUN_142d79c30(void)

undefined8 * FUN_142d79c30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14450f810;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  return param_1;
}



// FUNCTION 142d79c70 FUN_142d79c70 body=143 status=ok
// SIG undefined FUN_142d79c70(void)

undefined8 * FUN_142d79c70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14164ab60();
  FUN_14158c9d0(param_1,L"FGbxProcess",0,uVar1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14450fba8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  return param_1;
}



// FUNCTION 142d79d00 FUN_142d79d00 body=164 status=ok
// SIG undefined FUN_142d79d00(void)

undefined8 *
FUN_142d79d00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 *param_9)

{
  *param_1 = &PTR_FUN_14589a3d8;
  FWeakObjectPtr::operator=(param_1 + 1);
  FWeakObjectPtr::operator=(param_1 + 2,param_3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 4) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 5) = param_8;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = *(undefined8 *)(param_9 + 2);
  *(undefined4 *)(param_1 + 7) = *param_9;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x3c,*(undefined8 *)(param_9 + 4));
  return param_1;
}



// FUNCTION 142d79db0 CAkRectifier body=16 status=ok
// SIG undefined CAkRectifier(void)

undefined8 * DSP::CAkRectifier::CAkRectifier(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 142d79dc0 FUN_142d79dc0 body=882 status=ok
// SIG undefined FUN_142d79dc0(void)

undefined4 * FUN_142d79dc0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong local_28 [2];
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FString::operator=(param_1 + 6,param_3);
  local_28[0] = 0;
  local_28[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x10,"SparkPatchEntry",0x10,0x3f);
  cVar1 = FString::StartsWith(param_2,local_28,1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (cVar1 == '\0') {
    local_28[0] = 0;
    local_28[1] = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x15,"SparkLevelPatchEntry",0x15,0x3f)
    ;
    cVar1 = FString::StartsWith(param_2,local_28,1);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 == '\0') {
      local_28[0] = 0;
      local_28[1] = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_28[0],0x1a,"SparkStreamedPackageEntry",0x1a,0x3f);
      cVar1 = FString::StartsWith(param_2,local_28,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 == '\0') {
        local_28[0] = 0;
        local_28[1] = 0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_28[0],0x13,"SparkSaveGameEntry",0x13,0x3f);
        cVar1 = FString::StartsWith(param_2,local_28,1);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 == '\0') {
          local_28[0] = 0;
          local_28[1] = 0x15;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Convert<char,wchar_t>
                    (local_28[0],0x15,"SparkPostLoadedEntry",0x15,0x3f);
          cVar1 = FString::StartsWith(param_2,local_28,1);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (cVar1 == '\0') {
            local_28[0] = 0;
            local_28[1] = 0x1a;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
            FGenericPlatformString::Convert<char,wchar_t>
                      (local_28[0],0x1a,"SparkCharacterLoadedEntry",0x1a,0x3f);
            cVar1 = FString::StartsWith(param_2,local_28,1);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
            if (cVar1 == '\0') {
              local_28[0] = 0;
              local_28[1] = 0x1a;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
              FGenericPlatformString::Convert<char,wchar_t>
                        (local_28[0],0x1a,"SparkEarlyLevelPatchEntry",0x1a,0x3f);
              cVar1 = FString::StartsWith(param_2,local_28,1);
              if (local_28[0] != 0) {
                FMemory::Free();
              }
              if (cVar1 == '\0') goto LAB_142d7a0f1;
              *param_1 = 7;
            }
            else {
              *param_1 = 6;
            }
          }
          else {
            *param_1 = 5;
          }
        }
        else {
          *param_1 = 4;
        }
      }
      else {
        *param_1 = 3;
      }
    }
    else {
      *param_1 = 2;
    }
  }
  else {
    *param_1 = 1;
  }
  FString::operator=(param_1 + 2,param_2);
LAB_142d7a0f1:
  cVar1 = FString::EndsWith(param_2,L".Major",1);
  param_1[1] = (cVar1 != '\0') + 1;
  return param_1;
}



// FUNCTION 142d7a140 FUN_142d7a140 body=1040 status=ok
// SIG undefined FUN_142d7a140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * FUN_142d7a140(undefined2 *param_1,longlong *param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  short *psVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined2 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  plVar9 = (longlong *)(param_1 + 4);
  *(undefined1 *)(param_1 + 1) = 0;
  *plVar9 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if ((param_2[1] - *param_2 & 0xfffffffffffffffeU) != 0) {
    iVar5 = MNP_OverrideOutput_WC(&DAT_14588d124);
    psVar7 = &DAT_14588d124;
    if (*param_2 != param_2[1]) {
      lVar8 = *param_2 + -0x14588d124;
      do {
        if (psVar7 == &DAT_14588d124 + iVar5) goto LAB_142d7a1fe;
      } while ((*(short *)(lVar8 + (longlong)psVar7) == *psVar7) &&
              (psVar7 = psVar7 + 1, lVar8 + (longlong)psVar7 != param_2[1]));
    }
    if (psVar7 == &DAT_14588d124 + iVar5) {
LAB_142d7a1fe:
      iVar5 = MNP_OverrideOutput_WC(&DAT_14588d124);
      local_98 = L"(";
      uStack_90 = &DAT_14588d124 + iVar5;
      cVar4 = FUN_142d95e30(param_2,&local_98);
      if (cVar4 != '\0') {
        iVar5 = MNP_OverrideOutput_WC(&DAT_14588d18c);
        local_98 = (wchar_t *)&DAT_14588d18c;
        uStack_90 = (undefined2 *)(&DAT_14588d18c + (longlong)iVar5 * 2);
        FUN_142d95d90(param_2,&local_88,&local_98);
        local_98 = local_88;
        uStack_90 = puStack_80;
        uVar6 = FUN_14063eb30(&local_78,&local_98);
        cVar4 = FString::IsNumeric(uVar6);
        if (CONCAT44(uStack_74,local_78) != 0) {
          FMemory::Free();
        }
        if (cVar4 != '\0') {
          iVar5 = _wtoi(local_88);
          *(char *)((longlong)param_1 + 1) = (char)iVar5;
          iVar5 = MNP_OverrideOutput_WC(&DAT_14588d18c);
          local_88 = L",";
          puStack_80 = (undefined2 *)(&DAT_14588d18c + (longlong)iVar5 * 2);
          FUN_142d95d90(param_2,&local_98,&local_88);
          local_78 = (undefined4)local_98;
          uStack_74 = local_98._4_4_;
          uStack_70 = (int)uStack_90;
          uStack_6c = uStack_90._4_4_;
          uVar6 = FUN_14063eb30(&local_88,&local_78);
          cVar4 = FString::IsNumeric(uVar6);
          if (local_88 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (cVar4 != '\0') {
            iVar5 = _wtoi(local_98);
            *(char *)(param_1 + 1) = (char)iVar5;
            iVar5 = MNP_OverrideOutput_WC(&DAT_14588d18c);
            local_88 = L",";
            puStack_80 = (undefined2 *)(&DAT_14588d18c + (longlong)iVar5 * 2);
            FUN_142d95d90(param_2,&local_98,&local_88);
            local_78 = (undefined4)local_98;
            uStack_74 = local_98._4_4_;
            uStack_70 = (int)uStack_90;
            uStack_6c = uStack_90._4_4_;
            uVar6 = FUN_14063eb30(&local_88,&local_78);
            cVar4 = FString::IsNumeric(uVar6);
            if (local_88 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            if (cVar4 != '\0') {
              iVar5 = _wtoi(local_98);
              *(int *)(param_1 + 2) = iVar5;
              iVar5 = MNP_OverrideOutput_WC(&DAT_14588d13c);
              local_88 = L")";
              puStack_80 = (undefined2 *)(&DAT_14588d13c + (longlong)iVar5 * 2);
              FUN_142d95e90(param_2,&local_68,&local_88);
              if (local_48 != '\0') {
                local_88 = local_68;
                puStack_80 = (undefined2 *)local_60;
                FUN_14063eb30(&local_98,&local_88);
                if (plVar9 == &local_98) {
                  if (local_98 != (wchar_t *)0x0) {
                    FMemory::Free();
                  }
                }
                else {
                  if (*plVar9 != 0) {
                    FMemory::Free();
                  }
                  *plVar9 = (longlong)local_98;
                  *(int *)(param_1 + 8) = (int)uStack_90;
                  *(undefined4 *)(param_1 + 10) = uStack_90._4_4_;
                }
                local_98 = (wchar_t *)0x0;
                uStack_90 = (undefined2 *)0x9;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
                pwVar3 = local_98;
                FGenericPlatformString::Memcpy(local_98,L"MatchAll",0x12);
                psVar7 = &DAT_143f3eda8;
                pwVar10 = L"";
                if ((int)uStack_90 != 0) {
                  pwVar10 = pwVar3;
                }
                if (*(int *)(param_1 + 8) != 0) {
                  psVar7 = (short *)*plVar9;
                }
                lVar8 = (longlong)pwVar10 - (longlong)psVar7;
                do {
                  sVar1 = *psVar7;
                  sVar2 = *(short *)((longlong)psVar7 + lVar8);
                  if (sVar1 != sVar2) break;
                  psVar7 = psVar7 + 1;
                } while (sVar2 != 0);
                *(bool *)(param_1 + 0xc) = sVar1 == sVar2;
                if (pwVar3 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar3);
                }
                *param_2 = local_58;
                param_2[1] = local_50;
                iVar5 = MNP_OverrideOutput_WC(&DAT_14588d18c);
                local_88 = L",";
                puStack_80 = (undefined2 *)(&DAT_14588d18c + (longlong)iVar5 * 2);
                cVar4 = FUN_142d95e30(param_2,&local_88);
                if (cVar4 != '\0') {
                  *(undefined1 *)param_1 = 1;
                }
              }
            }
          }
        }
      }
    }
    else {
      *(undefined2 *)((longlong)param_1 + 1) = 0x101;
      *(undefined1 *)param_1 = 1;
    }
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar9 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar9 = (longlong *)(param_3 + 0x10);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142d7a550 FUN_142d7a550 body=33 status=ok
// SIG undefined FUN_142d7a550(void)

undefined8 * FUN_142d7a550(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145896698;
  return param_1;
}



// FUNCTION 142d7a580 FUN_142d7a580 body=187 status=ok
// SIG undefined FUN_142d7a580(void)

undefined8 * FUN_142d7a580(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_145896918;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0x42c80000;
  return param_1;
}



// FUNCTION 142d7a640 FUN_142d7a640 body=88 status=ok
// SIG undefined FUN_142d7a640(void)

undefined8 * FUN_142d7a640(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145896e28;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 142d7a6a0 FUN_142d7a6a0 body=63 status=ok
// SIG undefined FUN_142d7a6a0(void)

undefined8 * FUN_142d7a6a0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145896ba0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142d7a6e0 FUN_142d7a6e0 body=80 status=ok
// SIG undefined FUN_142d7a6e0(void)

undefined8 * FUN_142d7a6e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar1);
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x20;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__145897338;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145051140;
  return param_1;
}



// FUNCTION 142d7a730 FUN_142d7a730 body=160 status=ok
// SIG undefined FUN_142d7a730(void)

undefined8 * FUN_142d7a730(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_145897d98;
  param_1[5] = &PTR_LAB_145898698;
  param_1[0x5a] = &PTR_LAB_1458986c8;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0x3f000000;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined1 *)((longlong)param_1 + 0x70d) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 1;
  return param_1;
}



// FUNCTION 142d7a7d0 FUN_142d7a7d0 body=67 status=ok
// SIG undefined FUN_142d7a7d0(void)

undefined8 * FUN_142d7a7d0(undefined8 *param_1)

{
  FUN_14235e0f0();
  *param_1 = &PTR__scalar_deleting_destructor__145898f10;
  param_1[5] = &PTR_LAB_145899468;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x1f;
  return param_1;
}



// FUNCTION 142d7a820 FUN_142d7a820 body=43 status=ok
// SIG undefined FUN_142d7a820(void)

undefined8 * FUN_142d7a820(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_145899498;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142d7a850 FUN_142d7a850 body=281 status=ok
// SIG undefined FUN_142d7a850(void)

undefined8 * FUN_142d7a850(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14589a140;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x43800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x49800000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3e800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_142cdd310(param_1 + 0x31);
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3e99999a;
  return param_1;
}



// FUNCTION 142d7a970 FUN_142d7a970 body=195 status=ok
// SIG undefined FUN_142d7a970(void)

undefined8 * FUN_142d7a970(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__1458970b0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x54)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  if ((undefined2 *)param_1[9] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(int *)((longlong)param_1 + 0x84) < 0) && (*(int *)((longlong)param_1 + 0x84) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
  }
  if ((undefined2 *)param_1[0xf] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xf] = 0;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 142d7aa40 FUN_142d7aa40 body=231 status=ok
// SIG undefined FUN_142d7aa40(void)

undefined8 * FUN_142d7aa40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140455c90(param_1,uVar1);
  param_1[5] = 0x10100;
  *param_1 = &PTR_FUN_145896220;
  *(undefined4 *)(param_1 + 6) = 0x1010001;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  *(undefined4 *)(param_1 + 7) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x10001;
  *(undefined4 *)(param_1 + 8) = 0x10100;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x42c80000;
  *(undefined4 *)(param_1 + 9) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42c80000;
  *(undefined4 *)(param_1 + 10) = 0x42c80000;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0xc) = 0x42dc0000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x43070000;
  *(undefined4 *)(param_1 + 0xd) = 0x1010100;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xe) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x41e80000;
  return param_1;
}



// FUNCTION 142d7ab30 FUN_142d7ab30 body=232 status=ok
// SIG undefined FUN_142d7ab30(void)

undefined8 * FUN_142d7ab30(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1406a5110();
  puVar1 = param_1 + 0x26;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_14589a3f8;
  *puVar1 = &PTR_FUN_14589a6a0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  return param_1;
}



// FUNCTION 142d7ac20 FUN_142d7ac20 body=186 status=ok
// SIG undefined FUN_142d7ac20(void)

void FUN_142d7ac20(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x18);
    do {
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (plVar2[2] != 0) {
            FMemory::Free();
          }
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      if (puVar4[-2] != 0) {
        FMemory::Free();
      }
      puVar4 = puVar4 + 5;
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



// FUNCTION 142d7ace0 FUN_142d7ace0 body=148 status=ok
// SIG undefined FUN_142d7ace0(void)

longlong FUN_142d7ace0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int local_res8 [2];
  longlong *local_res10;
  
  if (*param_2 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x90,local_res8);
    if ((local_res8[0] == -1) ||
       (lVar1 = *(longlong *)(param_1 + 0x90) + (longlong)local_res8[0] * 0x18, lVar1 == 0)) {
      local_res10 = param_2;
      FUN_140608300(param_1 + 0x90,local_res8,&local_res10,0);
      lVar1 = *(longlong *)(param_1 + 0x90) + (longlong)local_res8[0] * 0x18;
    }
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  return param_1;
}



// FUNCTION 142d7ad80 FUN_142d7ad80 body=153 status=ok
// SIG undefined FUN_142d7ad80(void)

undefined8 FUN_142d7ad80(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    puVar4 = &DAT_143f3eda8;
    if (param_2[4] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_2 + 2);
    }
    if (param_1[4] == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 2);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) {
      if (param_2[8] == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(param_2 + 6);
      }
      if (param_1[8] != 0) {
        puVar4 = *(undefined2 **)(param_1 + 6);
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d7ae20 FUN_142d7ae20 body=70 status=ok
// SIG undefined FUN_142d7ae20(void)

undefined8 * FUN_142d7ae20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    puVar2 = (undefined8 *)FUN_14218d320();
    if (puVar2 != param_1) {
      if (*(char *)(param_1 + 6) != '\0') {
        *(undefined1 *)(param_1 + 6) = 0;
      }
      uVar1 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar1;
      uVar1 = puVar2[3];
      param_1[2] = puVar2[2];
      param_1[3] = uVar1;
      uVar1 = puVar2[5];
      param_1[4] = puVar2[4];
      param_1[5] = uVar1;
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return param_1;
}



// FUNCTION 142d7ae70 FUN_142d7ae70 body=408 status=ok
// SIG undefined FUN_142d7ae70(void)

void FUN_142d7ae70(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong *plVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  float local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_78;
  float *local_70;
  
  puVar2 = (undefined4 *)*param_1;
  pfVar10 = (float *)0x0;
  uVar1 = *(undefined4 *)(param_1[1] + 0x48);
  *puVar2 = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(puVar2 + 2,uVar1);
  plVar3 = (longlong *)param_1[1];
  plVar9 = (longlong *)plVar3[8];
  if ((longlong *)plVar3[8] == (longlong *)0x0) {
    plVar9 = plVar3;
  }
  pfVar7 = (float *)((longlong)(int)plVar3[9] & 0x1fffffffffffffff);
  if (plVar9 + (int)plVar3[9] < plVar9) {
    pfVar7 = pfVar10;
  }
  pfVar8 = pfVar10;
  if (pfVar7 != (float *)0x0) {
    do {
      local_res20 = *plVar9;
      if (*(char *)param_1[2] == '\0') {
        fVar11 = 1.0;
      }
      else {
        fVar11 = (float)FUN_142c98860(local_res20 + 8,*(undefined8 *)param_1[3]);
      }
      pfVar4 = (float *)*param_1;
      local_res10[0] = fVar11;
      if ((1e-08 < fVar11) || (*(char *)(pfVar4 + 1) != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(pfVar4 + 2,local_res8,local_res20);
        pfVar6 = pfVar10;
        if (local_res8[0] != -1) {
          pfVar6 = (float *)(*(longlong *)(pfVar4 + 2) + (longlong)local_res8[0] * 0x18);
        }
        fVar12 = *pfVar4;
        pfVar5 = pfVar6 + 2;
        if (pfVar6 == (float *)0x0) {
          pfVar5 = pfVar10;
        }
        if (pfVar5 != (float *)0x0) {
          fVar12 = fVar12 - *pfVar5;
        }
        local_78 = &local_res20;
        *pfVar4 = fVar12 + fVar11;
        local_70 = local_res10;
        TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                  (pfVar4 + 2,local_res18,&local_78,0);
      }
      plVar9 = plVar9 + 1;
      pfVar8 = (float *)((longlong)pfVar8 + 1);
    } while (pfVar8 != pfVar7);
  }
  return;
}



// FUNCTION 142d7b010 FUN_142d7b010 body=1059 status=ok
// SIG undefined FUN_142d7b010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d7b010(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  wchar_t **ppwVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res18;
  wchar_t *local_108;
  int local_100;
  int local_fc;
  wchar_t *local_f8;
  int local_f0;
  int local_ec;
  undefined **local_c8 [18];
  undefined8 local_38;
  wchar_t **local_30;
  undefined8 local_28;
  
  local_res18 = 0;
  local_108 = (wchar_t *)0x0;
  local_fc = 0;
  if (((DAT_146b3415c == 0 && _DAT_146b34158 == 0) && _DAT_146b34150 == 0) && _DAT_146b34154 == 0) {
    local_100 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,0xb);
    local_100 = local_100 + 0xb;
    if (local_fc < local_100) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108);
    }
    builtin_wcsncpy(local_108,L"NO-GAME-ID",0xb);
  }
  else {
    FUN_141682af0(&DAT_146b34150,&local_f8,0);
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_108 = local_f8;
    local_100 = local_f0;
    local_fc = local_ec;
    local_res18 = DAT_146b33f30;
  }
  if (DAT_146aeaf18 == '\0') {
    puVar6 = (undefined8 *)FUN_14218ce40();
    if (puVar6 != &DAT_146aeaeb0) {
      DAT_146aeaeb0 = *puVar6;
      uRam0000000146aeaeb8 = puVar6[1];
      _DAT_146aeaec0 = puVar6[2];
      uRam0000000146aeaec8 = puVar6[3];
      _DAT_146aeaed0 = puVar6[4];
      DAT_146aeaed8 = puVar6[5];
      _DAT_146aeaee0 = puVar6[6];
      _DAT_146aeaee8 = puVar6[7];
      _DAT_146aeaef0 = puVar6[8];
      _DAT_146aeaef8 = puVar6[9];
      DAT_146aeaf00 = puVar6[10];
      DAT_146aeaf08 = (wchar_t *)puVar6[0xb];
      DAT_146aeaf10 = (wchar_t *)puVar6[0xc];
      DAT_146aeaf18 = '\x01';
    }
  }
  lVar3 = *(longlong *)(param_3 + 0x10);
  plVar9 = (longlong *)(lVar3 + 0xd0);
  if (*(longlong *)DAT_146aeaf08 != 0) {
    cVar5 = FUN_1407ce010(DAT_146aeaf08 + 4);
    if (cVar5 != '\0') {
      plVar8 = (longlong *)*plVar9;
      plVar1 = plVar8 + (longlong)*(int *)(lVar3 + 0xd8) * 5;
      if (plVar8 != plVar1) {
        do {
          if ((*(longlong *)*plVar8 == *(longlong *)DAT_146aeaf08) &&
             (*(longlong *)(((longlong *)*plVar8)[1] + 0x28) ==
              *(longlong *)(*(longlong *)(DAT_146aeaf08 + 4) + 0x28))) {
            FUN_14217e740(&local_f8);
            FUN_142194380(&local_f8,0x18,1,0,0);
            FArchive::FArchive(local_c8);
            local_38 = 0;
            local_c8[0] = &PTR_FUN_143f4a100;
            local_30 = &local_f8;
            local_28 = 0;
            FArchive::SetIsSaving(local_c8,1);
            FArchive::SetIsPersistent(local_c8,1);
            FUN_14158ce90(local_c8,&local_108);
            FArchive::~FArchive(local_c8);
            FUN_14217f450(plVar8 + 1,&local_f8);
            ppwVar7 = &local_f8;
            goto LAB_142d7b23e;
          }
          plVar8 = plVar8 + 5;
        } while (plVar8 != plVar1);
      }
      local_f8 = DAT_146aeaf08;
      FUN_142d769f0(&local_f0,&local_108);
      iVar2 = *(int *)(lVar3 + 0xd8);
      *(int *)(lVar3 + 0xd8) = iVar2 + 1;
      if (*(int *)(lVar3 + 0xdc) < iVar2 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
      }
      lVar4 = *plVar9;
      *(wchar_t **)(lVar4 + (longlong)iVar2 * 0x28) = local_f8;
      FUN_14217e5b0(lVar4 + (longlong)iVar2 * 0x28 + 8,&local_f0);
      ppwVar7 = (wchar_t **)&local_f0;
LAB_142d7b23e:
      FUN_14217f430(ppwVar7);
    }
  }
  if (*(longlong *)DAT_146aeaf10 != 0) {
    cVar5 = FUN_1407ce010(DAT_146aeaf10 + 4);
    if (cVar5 != '\0') {
      plVar8 = (longlong *)*plVar9;
      plVar1 = plVar8 + (longlong)*(int *)(lVar3 + 0xd8) * 5;
      if (plVar8 != plVar1) {
        do {
          if ((*(longlong *)*plVar8 == *(longlong *)DAT_146aeaf10) &&
             (*(longlong *)(((longlong *)*plVar8)[1] + 0x28) ==
              *(longlong *)(*(longlong *)(DAT_146aeaf10 + 4) + 0x28))) {
            FUN_14217e740(&local_f8);
            FUN_142194380(&local_f8,10,0,0,1);
            local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,local_res18);
            FUN_14217f450(plVar8 + 1,&local_f8);
            ppwVar7 = &local_f8;
            goto LAB_142d7b328;
          }
          plVar8 = plVar8 + 5;
        } while (plVar8 != plVar1);
      }
      local_f8 = DAT_146aeaf10;
      FUN_14217e740(&local_f0);
      FUN_142194380(&local_f0,10,0,0,1);
      iVar2 = *(int *)(lVar3 + 0xd8);
      local_f0 = local_res18;
      *(int *)(lVar3 + 0xd8) = iVar2 + 1;
      if (*(int *)(lVar3 + 0xdc) < iVar2 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
      }
      lVar3 = *plVar9;
      *(wchar_t **)(lVar3 + (longlong)iVar2 * 0x28) = local_f8;
      FUN_14217e5b0(lVar3 + (longlong)iVar2 * 0x28 + 8,&local_f0);
      ppwVar7 = (wchar_t **)&local_f0;
LAB_142d7b328:
      FUN_14217f430(ppwVar7);
    }
  }
  if (local_108 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d7b470 FUN_142d7b470 body=43 status=ok
// SIG undefined FUN_142d7b470(void)

undefined8 * FUN_142d7b470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142d7b4a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ALandscape::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140c64680();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x598);
  }
  return param_1;
}



// FUNCTION 142d7b4e0 FUN_142d7b4e0 body=209 status=ok
// SIG undefined FUN_142d7b4e0(void)

longlong FUN_142d7b4e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x538);
  }
  return param_1;
}



// FUNCTION 142d7b5c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNiagaraSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14074ee10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 142d7b600 FUN_142d7b600 body=43 status=ok
// SIG undefined FUN_142d7b600(void)

undefined8 * FUN_142d7b600(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142d7b630 `scalar_deleting_destructor' body=105 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FFixupSmartPointersForPIEArchive::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142d7b6a0 FUN_142d7b6a0 body=113 status=ok
// SIG undefined FUN_142d7b6a0(void)

longlong FUN_142d7b6a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  FUN_142d7ac20(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142d7b720 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameplayTask_SpawnActor::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142d7b780 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPrimaryAssetLabel::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x58);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142d7b7d0 FUN_142d7b7d0 body=124 status=ok
// SIG undefined FUN_142d7b7d0(void)

longlong FUN_142d7b7d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x750);
  }
  return param_1;
}



// FUNCTION 142d7b850 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USynthSound::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 142d7b8a0 FUN_142d7b8a0 body=129 status=ok
// SIG undefined FUN_142d7b8a0(void)

longlong FUN_142d7b8a0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x23;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142d7b930 FUN_142d7b930 body=224 status=ok
// SIG undefined FUN_142d7b930(void)

longlong FUN_142d7b930(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x118);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 142d7ba10 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleTrailSource::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142d7ba70 FUN_142d7ba70 body=85 status=ok
// SIG undefined FUN_142d7ba70(void)

longlong FUN_142d7ba70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TArray<FControllerIcons,TSizedDefaultAllocator<32>_>::
  ~TArray<FControllerIcons,TSizedDefaultAllocator<32>_>(param_1 + 0x80);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142d7bad0 FUN_142d7bad0 body=158 status=ok
// SIG undefined FUN_142d7bad0(void)

longlong FUN_142d7bad0(longlong param_1,ulonglong param_2)

{
  FUN_1408708d0(param_1 + 0x1a8);
  FUN_1408708d0(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x138);
  FUN_1404bf750(param_1 + 0x130);
  FUN_1406a5390(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 142d7bb70 FUN_142d7bb70 body=406 status=ok
// SIG undefined FUN_142d7bb70(void)

void FUN_142d7bb70(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uStackX_c;
  longlong local_38;
  longlong *local_30;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x28);
  bVar9 = false;
  if (lVar5 == 0) {
    plVar12 = (longlong *)((ulonglong)uStackX_c << 0x20);
LAB_142d7bbea:
    bVar8 = false;
    plVar13 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x60);
    plVar12 = *(longlong **)(lVar5 + 0x68);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    if (lVar6 == 0) goto LAB_142d7bbea;
    param_2 = (undefined8 *)*param_2;
    plVar13 = *(longlong **)(*plVar1 + 0x68);
    uVar7 = *(undefined8 *)(*plVar1 + 0x60);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    cVar11 = (**(code **)*param_2)(param_2,uVar7);
    if (cVar11 != '\0') {
      bVar10 = true;
      goto LAB_142d7bbf2;
    }
  }
  bVar10 = false;
LAB_142d7bbf2:
  if ((bVar8) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if ((bVar9) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar5 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar3 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (bVar10) {
    (**(code **)(*(longlong *)*plVar1 + 0x28))();
    local_30 = (longlong *)0x0;
    if (plVar1 != &local_38) {
      *plVar1 = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_30);
      plVar1 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_30 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x38);
  }
  return;
}



// FUNCTION 142d7bd10 FUN_142d7bd10 body=207 status=ok
// SIG undefined FUN_142d7bd10(void)

undefined8 FUN_142d7bd10(float *param_1,float param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_res10 [2];
  int local_res20 [2];
  undefined8 local_28;
  float *local_20;
  
  if ((param_2 <= 1e-08) && (*(char *)(param_1 + 1) == '\0')) {
    return 0;
  }
  local_res10[0] = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 2,local_res20);
  pfVar2 = (float *)0x0;
  if (local_res20[0] != -1) {
    pfVar2 = (float *)(*(longlong *)(param_1 + 2) + (longlong)local_res20[0] * 0x18);
  }
  fVar3 = *param_1;
  pfVar1 = pfVar2 + 2;
  if (pfVar2 == (float *)0x0) {
    pfVar1 = (float *)0x0;
  }
  if (pfVar1 != (float *)0x0) {
    fVar3 = fVar3 - *pfVar1;
  }
  local_20 = local_res10;
  *param_1 = fVar3 + param_2;
  local_28 = param_3;
  TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
            (param_1 + 2,local_res20,&local_28,0);
  return 1;
}



// FUNCTION 142d7bde0 FUN_142d7bde0 body=665 status=ok
// SIG undefined FUN_142d7bde0(void)

ulonglong FUN_142d7bde0(longlong param_1,longlong param_2,char param_3,longlong param_4)

{
  void *_Src;
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong *in_RAX;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  void *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  local_e8 = param_2;
  if (*(char *)(param_1 + 0x99) == '\0') {
    iVar4 = 0;
    _Src = *(void **)(param_1 + 0x58);
    local_f8 = (void *)0x0;
    lVar11 = *(longlong *)(param_1 + 0x60) - (longlong)_Src >> 1;
    local_f0 = 0;
    if (lVar11 != 0) {
      iVar12 = (int)(lVar11 + 1U);
      iVar8 = 0;
      if (0 < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,lVar11 + 1U & 0xffffffff);
        iVar4 = (int)local_f0;
        iVar8 = local_f0._4_4_;
      }
      iVar4 = iVar4 + iVar12;
      local_f0 = CONCAT44(local_f0._4_4_,iVar4);
      if (iVar8 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
      }
      _guard_xfg_dispatch_icall_nop(local_f8,_Src,lVar11 * 2);
      *(undefined2 *)((longlong)local_f8 + (longlong)((int)local_f0 + -1) * 2) = 0;
    }
    lVar11 = local_e8;
    plVar5 = (longlong *)FUN_142d82f20(&local_f8);
    in_RAX = plVar5;
    if (local_f8 != (void *)0x0) {
      in_RAX = (longlong *)FMemory::Free();
    }
    if (plVar5 != (longlong *)0x0) {
      lVar6 = UBlueprintGeneratedClass::GetPrivateStaticClass();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar6 = param_1 + 0x50;
        FWeakObjectPtr::operator=(lVar6,plVar5);
        if (*(char *)(param_1 + 0x98) == '\0') {
          if (param_3 == '\0') {
            local_f8 = *(void **)(param_1 + 0x68);
            puVar9 = local_88;
            local_f0 = *(undefined8 *)(param_1 + 0x70);
            local_e8 = *(longlong *)(param_1 + 0x78);
            local_e0 = *(undefined8 *)(param_1 + 0x80);
          }
          else {
            local_f8 = *(void **)(param_1 + 0x78);
            puVar9 = local_d8;
            local_f0 = *(undefined8 *)(param_1 + 0x80);
            local_e8 = *(longlong *)(param_1 + 0x68);
            local_e0 = *(undefined8 *)(param_1 + 0x70);
          }
          uVar7 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9,param_4);
          bVar2 = FUN_142d7c080(param_1,&local_e8,&local_f8,uVar7);
          if ((((bVar2 != 0) && ((*(byte *)(lVar11 + 4) & 1) != 0)) &&
              (cVar3 = FWeakObjectPtr::IsValid(lVar6), cVar3 != '\0')) &&
             (plVar5 = (longlong *)FWeakObjectPtr::Get(lVar6), plVar5 != (longlong *)0x0)) {
            plVar10 = (longlong *)plVar5[0x1f];
            if (plVar10 == (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x368))(plVar5);
              plVar10 = (longlong *)plVar5[0x1f];
              if (plVar10 == (longlong *)0x0) goto LAB_142d7c04f;
            }
            if (param_3 != '\0') {
              (**(code **)(*plVar10 + 0x268))();
              FUN_1404bed90(param_4);
              return (ulonglong)bVar2;
            }
            (**(code **)(*plVar10 + 0x270))(plVar10,0);
          }
LAB_142d7c04f:
          FUN_1404bed90(param_4);
          return (ulonglong)bVar2;
        }
      }
      in_RAX = (longlong *)FUN_1404bed90(param_4);
      goto LAB_142d7c065;
    }
    iVar4 = *(int *)(param_4 + 0x40);
  }
  else {
    iVar4 = *(int *)(param_4 + 0x40);
  }
  if (iVar4 != 0) {
    in_RAX = *(longlong **)(param_4 + 0x30);
    plVar5 = in_RAX;
    if (in_RAX == (longlong *)0x0) {
      plVar5 = (longlong *)(param_4 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      in_RAX = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    in_RAX = (longlong *)FMemory::Free();
  }
LAB_142d7c065:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d7c080 FUN_142d7c080 body=1644 status=ok
// SIG undefined FUN_142d7c080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d7c080(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined1 uVar2;
  void *pvVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_198 [32];
  char local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  int local_158;
  int local_154;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_148 = param_1;
  local_118 = param_4;
  local_d0 = param_3;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 10);
  if ((cVar5 == '\0') || (lVar8 = FWeakObjectPtr::Get(param_1 + 10), local_120 = lVar8, lVar8 == 0))
  {
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar14 = *(longlong **)(param_4 + 0x30);
      if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
        plVar14 = (longlong *)(param_4 + 0x10);
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    lVar8 = *(longlong *)(param_4 + 0x30);
LAB_142d7c6b9:
    if (lVar8 != 0) {
      FMemory::Free();
    }
    uVar10 = 0;
  }
  else {
    plVar14 = (longlong *)0x0;
    local_110 = (longlong *)0x0;
    local_108 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = 0;
    if (0 < (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
      FUN_14089d3b0(&local_98);
    }
    local_168 = *(longlong *)(lVar8 + 0x38);
    local_178 = '\0';
    local_160 = 0xffffffff;
    local_15c = 0x100;
    local_15a = 0;
    local_170 = lVar8;
    FUN_140cbbd90(&local_170);
    plVar16 = plVar14;
    while (local_168 != 0) {
      local_d8 = *(longlong *)(local_168 + 0x18);
      iVar7 = (int)((ulonglong)local_d8 >> 0x20);
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = param_1 + 7;
        }
        iVar6 = *(int *)((longlong)plVar15 +
                        ((longlong)(iVar7 + (int)local_d8) & (longlong)(int)param_1[9] - 1U) * 4);
        if (iVar6 != -1) {
          do {
            plVar15 = (longlong *)((longlong)iVar6 * 0x20 + *param_1);
            if (*plVar15 == local_d8) {
              if (iVar6 != -1) goto LAB_142d7c202;
              break;
            }
            iVar6 = (int)plVar15[3];
          } while (iVar6 != -1);
        }
      }
      plVar15 = plVar14;
LAB_142d7c202:
      plVar9 = plVar15 + 1;
      if (plVar15 == (longlong *)0x0) {
        plVar9 = plVar14;
      }
      if (plVar9 != (longlong *)0x0) {
        if ((int)local_90 != local_64) {
          puVar11 = local_60;
          if (local_58 != (undefined1 *)0x0) {
            puVar11 = local_58;
          }
          iVar7 = *(int *)(puVar11 + (longlong)(int)(iVar7 + (int)local_d8 & local_50 - 1U) * 4);
          while (iVar7 != -1) {
            lVar8 = (longlong)iVar7 * 0x20;
            if (*(longlong *)(local_98 + lVar8) == local_d8) {
              if ((iVar7 != -1) && (lVar8 = local_98 + lVar8, lVar8 != 0)) goto LAB_142d7c2b6;
              break;
            }
            iVar7 = *(int *)(local_98 + lVar8 + 0x18);
          }
        }
        local_150 = &local_d8;
        FUN_140d1c9b0(&local_98,&local_158,&local_150,0);
        lVar8 = (longlong)local_158 * 0x20 + local_98;
LAB_142d7c2b6:
        plVar15 = (longlong *)(lVar8 + 8);
        if (plVar15 != (longlong *)(local_168 + 0x48)) {
          iVar7 = *(int *)(local_168 + 0x50);
          pvVar3 = *(void **)(local_168 + 0x48);
          *(int *)(lVar8 + 0x10) = iVar7;
          if ((iVar7 == 0) && (*(int *)(lVar8 + 0x14) == 0)) {
            *(undefined4 *)(lVar8 + 0x14) = 0;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar15,iVar7);
            _guard_xfg_dispatch_icall_nop((void *)*plVar15,pvVar3,(longlong)iVar7);
          }
        }
        piVar13 = (int *)*plVar9;
        local_f8 = &local_130;
        local_f0 = &local_140;
        local_e8 = 0;
        local_e0 = 0;
        piVar1 = piVar13 + (int)plVar9[1];
        param_1 = local_148;
        local_100 = plVar15;
        if (piVar13 != piVar1) {
          do {
            local_154 = *piVar13;
            local_150 = (longlong *)CONCAT44(local_150._4_4_,local_154);
            if ((local_154 < 0) || ((int)local_100[1] <= local_154)) {
LAB_142d7c3f5:
              local_178 = '\x01';
              break;
            }
            uVar2 = *(undefined1 *)((longlong)local_154 + *local_100);
            cVar5 = FUN_142d82990(&local_100,&local_154,&local_110);
            plVar16 = local_110;
            if (cVar5 == '\0') goto LAB_142d7c3f5;
            local_c8 = *param_2;
            local_c0 = param_2[1];
            iVar7 = 0;
            if ((int)local_108 != 0) {
              iVar7 = (int)local_108 + -1;
            }
            local_b8 = local_110;
            local_b0 = (longlong)iVar7 * 2 + (longlong)local_110;
            cVar5 = FUN_142d7d0a0(uVar2,&local_b8,&local_c8);
            if (cVar5 == '\0') goto LAB_142d7c3f5;
            local_a8 = *local_d0;
            local_a0 = local_d0[1];
            cVar5 = FUN_142d90f70(&local_100,&local_150,&local_a8);
            if (cVar5 == '\0') goto LAB_142d7c3f5;
            piVar13 = piVar13 + 1;
          } while (piVar13 != piVar1);
          cVar5 = local_178;
          if (local_e8 != 0) {
            FMemory::Free();
          }
          param_1 = local_148;
          if (cVar5 != '\0') {
            if (local_140 != 0) {
              FMemory::Free();
            }
            if (local_130 != 0) {
              FMemory::Free();
            }
            local_50 = 0;
            if (local_58 != (undefined1 *)0x0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (&local_98);
            if (plVar16 != (longlong *)0x0) {
              FMemory::Free(plVar16);
            }
            lVar8 = local_118;
            if (*(int *)(local_118 + 0x40) != 0) {
              plVar14 = *(longlong **)(local_118 + 0x30);
              if (*(longlong **)(local_118 + 0x30) == (longlong *)0x0) {
                plVar14 = (longlong *)(local_118 + 0x10);
              }
              if (plVar14 != (longlong *)0x0) {
                (**(code **)(*plVar14 + 0x10))(plVar14,0);
              }
            }
            lVar8 = *(longlong *)(lVar8 + 0x30);
            goto LAB_142d7c6b9;
          }
        }
      }
      local_168 = *(longlong *)(local_168 + 0x28);
      FUN_140cbbd90(&local_170);
      lVar8 = local_120;
    }
    local_168 = *(longlong *)(lVar8 + 0x38);
    local_160 = 0xffffffff;
    local_15c = 0x100;
    local_15a = 0;
    local_170 = lVar8;
    FUN_140cbbd90(&local_170);
    lVar4 = local_168;
    while (local_168 = lVar4, lVar4 != 0) {
      lVar8 = *(longlong *)(lVar4 + 0x18);
      if ((int)local_90 != local_64) {
        puVar11 = local_60;
        if (local_58 != (undefined1 *)0x0) {
          puVar11 = local_58;
        }
        iVar7 = *(int *)(puVar11 +
                        (longlong)
                        (int)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8 & local_50 - 1U) * 4);
        while (iVar7 != -1) {
          lVar12 = (longlong)iVar7 * 0x20;
          if (*(longlong *)(local_98 + lVar12) == lVar8) {
            plVar15 = (longlong *)(local_98 + lVar12);
            if (iVar7 != -1) goto LAB_142d7c582;
            break;
          }
          iVar7 = *(int *)(local_98 + lVar12 + 0x18);
        }
      }
      plVar15 = plVar14;
LAB_142d7c582:
      plVar9 = plVar15 + 1;
      if (plVar15 == (longlong *)0x0) {
        plVar9 = plVar14;
      }
      if ((plVar9 != (longlong *)0x0) && (plVar15 = (longlong *)(lVar4 + 0x48), plVar15 != plVar9))
      {
        iVar7 = (int)plVar9[1];
        pvVar3 = (void *)*plVar9;
        *(int *)(lVar4 + 0x50) = iVar7;
        if ((iVar7 == 0) && (*(int *)(lVar4 + 0x54) == 0)) {
          *(undefined4 *)(lVar4 + 0x54) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar15,iVar7);
          _guard_xfg_dispatch_icall_nop((void *)*plVar15,pvVar3,(longlong)iVar7);
        }
      }
      local_168 = *(longlong *)(lVar4 + 0x28);
      FUN_140cbbd90(&local_170);
      lVar8 = local_120;
      lVar4 = local_168;
    }
    FUN_142d80280(local_148,lVar8,&local_130,&local_140);
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    if (plVar16 != (longlong *)0x0) {
      FMemory::Free(plVar16);
    }
    lVar8 = local_118;
    if (*(int *)(local_118 + 0x40) != 0) {
      plVar14 = *(longlong **)(local_118 + 0x30);
      if (*(longlong **)(local_118 + 0x30) == (longlong *)0x0) {
        plVar14 = (longlong *)(local_118 + 0x10);
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    if (*(longlong *)(lVar8 + 0x30) != 0) {
      FMemory::Free();
    }
    uVar10 = 1;
  }
  return uVar10;
}



// FUNCTION 142d7c6f0 FUN_142d7c6f0 body=874 status=ok
// SIG undefined FUN_142d7c6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d7c6f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  short *psVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  short *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  if (((lVar3 == 0) || (plVar10 = (longlong *)param_1[1], plVar10 == (longlong *)0x0)) ||
     (lVar8 = param_1[2], lVar8 == 0)) {
    if (*(int *)(param_4 + 0x40) != 0) {
      plVar10 = *(longlong **)(param_4 + 0x30);
      if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
        plVar10 = (longlong *)(param_4 + 0x10);
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (*(longlong *)(param_4 + 0x30) != 0) {
      FMemory::Free();
    }
    return 0;
  }
  local_98 = (short *)0x0;
  local_90 = 0;
  if ((*(int *)(param_2 + 1) != 0) && (0 < *(int *)(param_2 + 1) + -1)) {
    local_a8 = 0;
    local_b0 = 0x800000000000000;
    local_b8 = lVar3;
    (**(code **)(*plVar10 + 0x2d8))(plVar10,&local_98,lVar8,lVar8);
    if (*(int *)(param_2 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_2;
    }
    psVar7 = &DAT_143f3eda8;
    if ((int)local_90 != 0) {
      psVar7 = local_98;
    }
    lVar9 = (longlong)puVar11 - (longlong)psVar7;
    do {
      sVar1 = *psVar7;
      sVar2 = *(short *)((longlong)psVar7 + lVar9);
      if (sVar1 != sVar2) break;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    if (sVar1 != sVar2) {
      if (local_98 != (short *)0x0) {
        FMemory::Free(local_98);
        FUN_1404bed90(param_4);
        return 0;
      }
      goto LAB_142d7ca17;
    }
  }
  uVar5 = DAT_1468b6160;
  if (*(int *)(param_3 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  cVar6 = FUN_141766f20(plVar10,0x400000000000000,DAT_1468b6160);
  if ((cVar6 != '\0') && (puVar11 != (undefined2 *)0x0)) {
    local_b0 = uVar5;
    local_b8 = lVar3;
    lVar8 = (**(code **)(*plVar10 + 0x2e0))(plVar10,puVar11,lVar8,0x400000000000000);
    if (lVar8 != 0) {
      if (*(int *)(param_3 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*param_3;
      }
      psVar7 = &DAT_143f3eda8;
      if ((int)local_90 != 0) {
        psVar7 = local_98;
      }
      lVar8 = (longlong)puVar11 - (longlong)psVar7;
      do {
        sVar1 = *psVar7;
        sVar2 = *(short *)((longlong)psVar7 + lVar8);
        if (sVar1 != sVar2) break;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        lVar8 = plVar10[4];
        if (lVar8 != 0) {
          lVar9 = UMapProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            local_88 = *(undefined8 *)(lVar8 + 0x70);
            uStack_70 = *(undefined4 *)(lVar8 + 0x80);
            uStack_6c = *(undefined4 *)(lVar8 + 0x84);
            uStack_68 = *(undefined8 *)(lVar8 + 0x88);
            local_80 = *(longlong *)(lVar8 + 0x78);
            local_60 = *(undefined4 *)(lVar8 + 0x90);
            uStack_5c = *(undefined4 *)(lVar8 + 0x94);
            uStack_58 = *(undefined4 *)(lVar8 + 0x98);
            uStack_54 = *(undefined4 *)(lVar8 + 0x9c);
            local_78 = *(int *)(lVar8 + 0x44) + lVar3;
            local_50 = *(undefined4 *)(lVar8 + 0xa0);
            FScriptMapHelper::Rehash(&local_88);
            goto LAB_142d7c9be;
          }
        }
        lVar8 = plVar10[4];
        if (lVar8 != 0) {
          lVar9 = USetProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            local_88 = *(undefined8 *)(lVar8 + 0x70);
            local_78 = *(longlong *)(lVar8 + 0x78);
            uStack_70 = *(undefined4 *)(lVar8 + 0x80);
            uStack_6c = *(undefined4 *)(lVar8 + 0x84);
            uStack_68 = *(undefined8 *)(lVar8 + 0x88);
            local_80 = *(int *)(lVar8 + 0x44) + lVar3;
            local_60 = *(undefined4 *)(lVar8 + 0x90);
            FScriptSetHelper::Rehash(&local_88);
          }
        }
      }
LAB_142d7c9be:
      if (local_98 != (short *)0x0) {
        FMemory::Free();
      }
      FUN_1404bed90(param_4);
      return 1;
    }
  }
  if (local_98 != (short *)0x0) {
    FMemory::Free();
  }
LAB_142d7ca17:
  FUN_1404bed90(param_4);
  return 0;
}



// FUNCTION 142d7ca60 FUN_142d7ca60 body=346 status=ok
// SIG undefined FUN_142d7ca60(void)

void FUN_142d7ca60(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_38;
  undefined4 local_30;
  
  if (*(longlong *)(param_1 + 0x500) != 0) {
    uVar2 = 0;
    lVar1 = FUN_1405ab470(param_1,0,1,0);
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0x4f8) != 0) {
        FUN_1405a9570(lVar1);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x518);
      uVar5 = (longlong)*(int *)(param_1 + 0x520) & 0x1fffffffffffffff;
      if (puVar3 + *(int *)(param_1 + 0x520) < puVar3) {
        uVar5 = uVar2;
      }
      if (uVar5 != 0) {
        do {
          FUN_1405aaf50(lVar1,*puVar3);
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar2 != uVar5);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x508);
      puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x510) * 2;
      for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
        FUN_1405aaad0(lVar1,*puVar3,*(undefined4 *)(puVar3 + 1),0,4);
      }
      local_38 = *(undefined8 *)(param_1 + 0x528);
      local_30 = *(undefined4 *)(param_1 + 0x530);
      FUN_1423990b0(lVar1,&local_38,0,0,0);
      FUN_1405a3150(lVar1,&local_38,*(undefined8 *)(param_1 + 0x500),0);
      FUN_140591060(&local_38);
    }
  }
  return;
}



// FUNCTION 142d7cbc0 FUN_142d7cbc0 body=222 status=ok
// SIG undefined FUN_142d7cbc0(void)

void FUN_142d7cbc0(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_18;
  int local_10;
  
  *param_3 = 1;
  if ((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar3 == 0) {
        return;
      }
      if (*(longlong *)(lVar3 + 0x488) == 0) {
        return;
      }
      plVar4 = (longlong *)*param_2;
      plVar1 = plVar4 + (int)param_2[1];
      while( true ) {
        if (plVar4 == plVar1) {
          return;
        }
        if ((*plVar4 != 0) &&
           (cVar2 = FUN_142235c20(*plVar4,*(undefined8 *)(lVar3 + 0x488)), cVar2 != '\0')) break;
        plVar4 = plVar4 + 1;
      }
    }
    *param_3 = 0;
  }
  return;
}



// FUNCTION 142d7cca0 FUN_142d7cca0 body=164 status=ok
// SIG undefined FUN_142d7cca0(void)

void FUN_142d7cca0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_142d95ce0(param_1,&local_18);
  puVar2 = local_18;
  puVar1 = local_18 + (int)local_10;
  puVar4 = local_18;
  while( true ) {
    if (puVar4 == puVar1) {
      if (puVar2 != (undefined8 *)0x0) {
        FMemory::Free(puVar2);
      }
      *param_3 = 0;
      return;
    }
    if ((param_2 != 0) && (cVar3 = FUN_142235c20(param_2,*puVar4), cVar3 == '\0')) break;
    puVar4 = puVar4 + 1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free(puVar2);
  }
  *param_3 = 1;
  return;
}



// FUNCTION 142d7cd50 FUN_142d7cd50 body=209 status=ok
// SIG undefined FUN_142d7cd50(void)

void FUN_142d7cd50(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_142d95ce0(param_1,&local_38);
  plVar4 = local_38;
  plVar1 = local_38 + (int)local_30;
  plVar7 = local_38;
  while( true ) {
    if (plVar7 == plVar1) {
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      *param_3 = 0;
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 == 0) break;
    plVar6 = (longlong *)*param_2;
    plVar2 = plVar6 + (int)param_2[1];
    while( true ) {
      if (plVar6 == plVar2) goto LAB_142d7cdd5;
      if ((*plVar6 != 0) && (cVar5 = FUN_142235c20(*plVar6,lVar3), cVar5 != '\0')) break;
      plVar6 = plVar6 + 1;
    }
    plVar7 = plVar7 + 1;
  }
LAB_142d7cdd5:
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  *param_3 = 1;
  return;
}


