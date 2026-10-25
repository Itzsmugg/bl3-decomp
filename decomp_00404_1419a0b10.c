// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1419a0b10 FUN_1419a0b10 body=286 status=ok
// SIG undefined FUN_1419a0b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419a0b10(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0x230);
  puVar1 = (undefined8 *)(param_1 + 0x228);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent(param_1 + 0x218);
  plVar6 = (longlong *)param_2[1];
  uVar7 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_38 = uVar7;
  plStack_30 = plVar6;
  if (&local_38 != puVar1) {
    local_38 = *puVar1;
    plStack_30 = *(longlong **)(param_1 + 0x230);
    *puVar1 = uVar7;
    *(longlong **)(param_1 + 0x230) = plVar6;
    local_28 = uVar7;
    plStack_20 = plVar6;
  }
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  FUN_141802340(param_1 + 0x218);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1419a0c30 RegisterVirtualWindow body=92 status=ok
// SIG undefined RegisterVirtualWindow(void)

void FSlateApplication::RegisterVirtualWindow(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218);
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 1419a0c90 SetContent body=36 status=ok
// SIG undefined SetContent(void)

void SBox::SetContent(longlong param_1)

{
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218);
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419a0cc0 FUN_1419a0cc0 body=19 status=ok
// SIG undefined FUN_1419a0cc0(void)

void FUN_1419a0cc0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x468) = 1;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218);
  return;
}



// FUNCTION 1419a0ce0 FUN_1419a0ce0 body=125 status=ok
// SIG undefined FUN_1419a0ce0(void)

void FUN_1419a0ce0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  plVar4 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_10 = plVar4;
  FUN_14196cbb0(param_1 + 0x208,&local_18);
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
  return;
}



// FUNCTION 1419a0d60 FUN_1419a0d60 body=344 status=ok
// SIG undefined FUN_1419a0d60(void)

void FUN_1419a0d60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    local_18 = DAT_1469eb218;
    plStack_10 = DAT_1469eb220;
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
    plVar7 = &local_18;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_20 = (longlong *)param_2[1];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    plVar7 = &local_28;
    bVar6 = true;
    bVar5 = false;
    local_28 = lVar4;
  }
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,plVar7);
  plVar7 = plStack_10;
  if (bVar5) {
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_10)(plStack_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_10 + 8))(plStack_10,1);
        }
      }
    }
  }
  plVar7 = local_20;
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar7 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 1419a0ec0 FUN_1419a0ec0 body=12 status=ok
// SIG undefined FUN_1419a0ec0(void)

void FUN_1419a0ec0(longlong param_1)

{
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218);
  return;
}



// FUNCTION 1419a0ed0 FUN_1419a0ed0 body=2901 status=ok
// SIG undefined FUN_1419a0ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419a0ed0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_b38 [32];
  longlong local_b18;
  longlong local_b10;
  undefined4 local_b08;
  longlong local_b00;
  longlong local_af8;
  longlong local_af0;
  undefined1 local_ae8;
  undefined1 local_ae0;
  longlong local_ad8;
  longlong *local_ac8;
  longlong *local_ac0;
  longlong local_ab8;
  longlong *plStack_ab0;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined8 local_aa0;
  undefined4 local_a98;
  undefined8 local_a88;
  undefined1 local_a80;
  undefined8 local_a78;
  undefined4 local_a70;
  undefined4 local_a68;
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined1 local_a58;
  undefined8 local_a50;
  longlong *plStack_a48;
  undefined1 local_a40;
  undefined8 local_a38;
  undefined4 local_a30;
  longlong local_a28;
  longlong local_a20;
  longlong *local_a18;
  longlong *local_a10;
  undefined8 local_a08;
  longlong local_a00;
  longlong *local_9f8;
  longlong *local_9f0;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined1 local_9d8;
  undefined8 local_9d0;
  undefined4 local_9c8;
  undefined1 local_9c0 [8];
  longlong *local_9b8;
  longlong *local_9a8;
  longlong *local_9a0;
  longlong *local_990;
  longlong *local_988;
  longlong *local_978;
  longlong *local_970;
  longlong local_960;
  longlong *plStack_958;
  undefined1 local_948 [688];
  undefined1 local_698 [688];
  undefined1 local_3e8 [912];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b38;
  if (*param_2 != DAT_1469eb218) {
    *(longlong *)(param_1 + 0x38) = *param_2;
    plVar8 = (longlong *)param_2[1];
    plVar10 = *(longlong **)(param_1 + 0x40);
    if (plVar8 != plVar10) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)(param_1 + 0x40);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      *(longlong **)(param_1 + 0x40) = plVar8;
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x40);
  plVar10 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar8[1];
    bVar13 = iVar6 == 0;
    if (bVar13) {
      *(int *)(plVar8 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar6 == (int)plVar8[1];
      if (bVar13) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar8;
        if ((plVar8 != (longlong *)0x0) && (lVar7 = *(longlong *)(param_1 + 0x38), lVar7 != 0)) {
          plVar10 = (longlong *)(param_1 + 0x48);
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_ab8 = lVar7;
          plStack_ab0 = plVar8;
          if (&local_ab8 != plVar10) {
            local_ab8 = *plVar10;
            plStack_ab0 = *(longlong **)(param_1 + 0x50);
            *plVar10 = lVar7;
            *(longlong **)(param_1 + 0x50) = plVar8;
            local_960 = lVar7;
            plStack_958 = plVar8;
          }
          plVar3 = plStack_ab0;
          if (plStack_ab0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_ab0 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_ab0)(plStack_ab0);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plStack_ab0 + 8))(plStack_ab0,1);
              }
            }
          }
          local_a28 = *plVar10;
          local_a20 = *(longlong *)(param_1 + 0x50);
          if (local_a20 != 0) {
            LOCK();
            *(int *)(local_a20 + 8) = *(int *)(local_a20 + 8) + 1;
            UNLOCK();
          }
          lVar7 = FUN_141886d30(local_948);
          *(undefined8 *)(lVar7 + 0x188) = *(undefined8 *)(param_1 + 0x128);
          *(undefined1 *)(lVar7 + 400) = *(undefined1 *)(param_1 + 0x130);
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x198,param_1 + 0x138);
          uVar14 = *(undefined4 *)(param_1 + 0x104);
          uVar15 = *(undefined4 *)(param_1 + 0x108);
          uVar16 = *(undefined4 *)(param_1 + 0x10c);
          *(undefined4 *)(lVar7 + 0x120) = *(undefined4 *)(param_1 + 0x100);
          *(undefined4 *)(lVar7 + 0x124) = uVar14;
          *(undefined4 *)(lVar7 + 0x128) = uVar15;
          *(undefined4 *)(lVar7 + 300) = uVar16;
          *(undefined1 *)(lVar7 + 0x130) = *(undefined1 *)(param_1 + 0x110);
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x138,param_1 + 0x118);
          plVar10 = (longlong *)operator_new(0x398);
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            *(undefined4 *)(plVar10 + 1) = 1;
            *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
            *plVar10 = (longlong)&PTR_FUN_144d61068;
            if (plVar10 != (longlong *)0xfffffffffffffff0) {
              SBorder::SBorder();
            }
          }
          plVar3 = plVar10 + 2;
          local_9a8 = plVar3;
          local_9a0 = plVar10;
          FUN_14044f790(&local_9a8,plVar3);
          local_b18 = 0x388;
          SWidget::SetDebugInfo
                    (plVar3,"SBorder",
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SToolTip.cpp"
                     ,0x34);
          lVar7 = FUN_14188d200(lVar7,&local_a28);
          local_b08 = *(undefined4 *)(lVar7 + 0x90);
          local_ad8 = lVar7 + 0xf8;
          local_af0 = lVar7 + 0xe8;
          local_ae0 = *(undefined1 *)(lVar7 + 0xf1);
          local_b18 = lVar7 + 0x60;
          local_af8 = lVar7 + 200;
          local_ae8 = *(undefined1 *)(lVar7 + 0xf0);
          local_b00 = lVar7 + 0x98;
          local_b10 = lVar7 + 0x78;
          plVar3 = plVar10 + 2;
          SWidget::SWidgetConstruct(plVar3,lVar7,lVar7 + 0x30,lVar7 + 0x40);
          FUN_141971ea0(plVar3,lVar7);
          if (((char)plVar10[5] < '\0') ||
             (cVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar5 != '\0')) {
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
          *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
          *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar4;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_a18 = plVar3;
          local_a10 = plVar10;
          TSlotBase<FSimpleSlot>::operator[](param_1 + -0xd8,&local_a18);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar10 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
            LOCK();
            plVar3 = plVar10 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
            LOCK();
            plVar3 = plVar10 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar10)(plVar10);
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
          FUN_14188af70(local_948);
          goto LAB_1419a19ae;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(plVar8 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  local_a58 = 0;
  local_a68 = DAT_1464aa6e0;
  uStack_a64 = DAT_1464aa6e4;
  uStack_a60 = DAT_1464aa6e8;
  uStack_a5c = DAT_1464aa6ec;
  local_a40 = 1;
  local_a50 = 0;
  plStack_a48 = (longlong *)0x0;
  local_a38 = 0;
  local_a30 = 0;
  lVar7 = STextBlock::FArguments::FArguments(local_3e8);
  FText::operator=(lVar7 + 0x108,param_1 + 8);
  *(undefined1 *)(lVar7 + 0x120) = *(undefined1 *)(param_1 + 0x20);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x128,param_1 + 0x28);
  FUN_1417f9360(lVar7 + 0x140,param_1 + 0x58);
  *(undefined1 *)(lVar7 + 400) = *(undefined1 *)(param_1 + 0xa8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x198,param_1 + 0xb0);
  FUN_140692440(lVar7 + 0x1a8,&local_a68);
  *(undefined1 *)(lVar7 + 0x1d0) = local_a40;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x1d8,&local_a38);
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  local_9b8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_144d72168;
    plVar8[1] = (longlong)FUN_141985a60;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[3] = lVar9;
  }
  local_aa0 = 0;
  local_aa8 = 0;
  local_aa4 = 1;
  local_a98 = 0;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_aa0);
  }
  *(undefined4 *)(lVar7 + 0x2a8) = local_aa8;
  *(undefined1 *)(lVar7 + 0x2ac) = local_aa4;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x2b0,&local_aa0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_aa0);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_9b8 = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_9b8 != (longlong *)0x0) {
      FMemory::Free(local_9b8);
    }
  }
  plVar8 = (longlong *)operator_new(0x660);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144043520;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar3 = plVar8 + 2;
  local_990 = plVar3;
  local_988 = plVar8;
  FUN_14044f790(&local_990,plVar3);
  local_b18 = 0x650;
  SWidget::SetDebugInfo
            (plVar3,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SToolTip.cpp",0x40);
  local_b08 = *(undefined4 *)(lVar7 + 0x90);
  local_ad8 = lVar7 + 0xf8;
  local_af0 = lVar7 + 0xe8;
  local_ae0 = *(undefined1 *)(lVar7 + 0xf1);
  local_af8 = lVar7 + 200;
  local_b00 = lVar7 + 0x98;
  local_ae8 = *(undefined1 *)(lVar7 + 0xf0);
  local_b10 = lVar7 + 0x78;
  local_b18 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar3,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_1419b0120(plVar3,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar5 != '\0')) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar4;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_ac8 = plVar3;
  local_ac0 = plVar8;
  if ((longlong **)(param_1 + 0x48) != &local_ac8) {
    *(longlong **)(param_1 + 0x48) = plVar3;
    local_ac8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_ac0);
  }
  plVar3 = local_ac0;
  if (local_ac0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_ac0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_ac0)(local_ac0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_ac0 + 8))(local_ac0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  FUN_140691150(local_3e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a38);
  plVar8 = plStack_a48;
  if (plStack_a48 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a48 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_a48)(plStack_a48);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_a48 + 8))(plStack_a48,1);
      }
    }
  }
  plVar8 = DAT_1469eb140;
  local_9d8 = 1;
  local_9e8 = 0x41300000;
  uStack_9e4 = 0x41300000;
  uStack_9e0 = 0x41300000;
  uStack_9dc = 0x41300000;
  lVar7 = *DAT_1469eb140;
  local_9d0 = 0;
  local_9c8 = 0;
  puVar11 = (undefined8 *)FName::FName(local_9c0,"ToolTip.BrightBackground",1);
  uVar12 = (**(code **)(lVar7 + 0x40))(plVar8,*puVar11,0);
  local_a08 = *(undefined8 *)(param_1 + 0x48);
  local_a00 = *(longlong *)(param_1 + 0x50);
  local_a80 = 1;
  local_a78 = 0;
  local_a70 = 0;
  uVar14 = 0x41300000;
  uVar15 = 0x41300000;
  uVar16 = 0x41300000;
  uVar17 = 0x41300000;
  if (local_a00 != 0) {
    LOCK();
    *(int *)(local_a00 + 8) = *(int *)(local_a00 + 8) + 1;
    UNLOCK();
    uVar14 = local_9e8;
    uVar15 = uStack_9e4;
    uVar16 = uStack_9e0;
    uVar17 = uStack_9dc;
  }
  local_a88 = uVar12;
  lVar7 = FUN_141886d30(local_698);
  *(undefined8 *)(lVar7 + 0x188) = uVar12;
  *(undefined1 *)(lVar7 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x198,&local_a78);
  *(undefined1 *)(lVar7 + 0x130) = 1;
  *(undefined4 *)(lVar7 + 0x120) = uVar14;
  *(undefined4 *)(lVar7 + 0x124) = uVar15;
  *(undefined4 *)(lVar7 + 0x128) = uVar16;
  *(undefined4 *)(lVar7 + 300) = uVar17;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x138,&local_9d0);
  plVar8 = (longlong *)operator_new(0x398);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144d61068;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar3 = plVar8 + 2;
  local_978 = plVar3;
  local_970 = plVar8;
  FUN_14044f790(&local_978,plVar3);
  local_b18 = 0x388;
  SWidget::SetDebugInfo
            (plVar3,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SToolTip.cpp",0x4a);
  lVar7 = FUN_14188d200(lVar7,&local_a08);
  local_b08 = *(undefined4 *)(lVar7 + 0x90);
  local_ad8 = lVar7 + 0xf8;
  local_af0 = lVar7 + 0xe8;
  local_ae0 = *(undefined1 *)(lVar7 + 0xf1);
  local_b18 = lVar7 + 0x60;
  local_af8 = lVar7 + 200;
  local_ae8 = *(undefined1 *)(lVar7 + 0xf0);
  local_b00 = lVar7 + 0x98;
  local_b10 = lVar7 + 0x78;
  plVar3 = plVar8 + 2;
  SWidget::SWidgetConstruct(plVar3,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_141971ea0(plVar3,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar5 != '\0')) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar4;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_9f8 = plVar3;
  local_9f0 = plVar8;
  TSlotBase<FSimpleSlot>::operator[](param_1 + -0xd8,&local_9f8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  FUN_14188af70(local_698);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9d0);
  plVar8 = plVar10;
LAB_1419a19ae:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 1419a1a30 SetCursorBrush body=12 status=ok
// SIG undefined SetCursorBrush(void)

void FSlateEditableTextLayout::SetCursorBrush(longlong param_1)

{
  FUN_1419bbf30(*(undefined8 *)(param_1 + 0x608));
  return;
}



// FUNCTION 1419a1a40 FUN_1419a1a40 body=249 status=ok
// SIG undefined FUN_1419a1a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419a1a40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
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
  puVar3 = (undefined8 *)(param_1 + 0x348);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar3) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar6 = *puVar3;
    plVar5 = *(longlong **)(param_1 + 0x350);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x34c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x350) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x354) = uStack_30._4_4_;
    local_38 = uVar6;
    uStack_30 = plVar5;
  }
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 1419a1b40 FUN_1419a1b40 body=56 status=ok
// SIG undefined FUN_1419a1b40(void)

void FUN_1419a1b40(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x208) = *param_2;
  *(undefined1 *)(param_1 + 0x20c) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,param_2 + 2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419a1b80 SetDebugSourceInfo body=187 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FSlateEditableTextLayout::SetDebugSourceInfo(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FString::operator=(param_1 + 0x5a8);
  plVar1 = (longlong *)(param_1 + 0x5c0);
  *(undefined1 *)(param_1 + 0x5b8) = *(undefined1 *)(param_2 + 0x10);
  if ((longlong *)(param_2 + 0x18) != plVar1) {
    if ((*(int *)(param_2 + 0x20) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x18), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x5c8) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 0x5c8) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  FTextLayout::SetDebugSourceInfo(*(undefined8 *)(param_1 + 0x48),param_1 + 0x5a8);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FSlateTextBlockLayout::SetDebugSourceInfo(*(longlong *)(param_1 + 0x58),param_1 + 0x5a8);
  }
  return;
}



// FUNCTION 1419a1c40 FUN_1419a1c40 body=276 status=ok
// SIG undefined FUN_1419a1c40(void)

void FUN_1419a1c40(longlong param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (((*(int *)(param_1 + 0x368) == 0) || (*(longlong **)(param_1 + 0x360) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x18))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (((param_2[6] == 0.0) || (*(longlong **)(param_2 + 4) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 4) + 0x18))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((*(char *)(param_1 + 0x358) != *(char *)(param_2 + 2)) ||
         (*param_2 != *(float *)(param_1 + 0x350))) goto LAB_1419a1d17;
      bVar6 = param_2[1] == *(float *)(param_1 + 0x354);
    }
    else {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((param_2[6] != 0.0) &&
         (plVar3 = *(longlong **)(param_2 + 4), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x368) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x360), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      bVar6 = lVar4 == lVar5;
    }
    if (bVar6) {
      return;
    }
  }
LAB_1419a1d17:
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)param_2;
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 2);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x360,param_2 + 4);
  FUN_1418475e0(param_1,5);
  return;
}



// FUNCTION 1419a1d60 SetConsumeMouseWheel body=7 status=ok
// SIG undefined SetConsumeMouseWheel(void)

void SScrollBox::SetConsumeMouseWheel(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3f0) = param_2;
  return;
}



// FUNCTION 1419a1d70 FUN_1419a1d70 body=1440 status=ok
// SIG undefined FUN_1419a1d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1419a1d70(undefined8 *param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_190;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  longlong local_178 [2];
  longlong *local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong *plStack_150;
  undefined8 *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  longlong *local_118;
  longlong *plStack_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0 [3];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_9c [4];
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  plVar13 = (longlong *)0x0;
  if (param_3 == '\0') {
    local_178[0] = 0;
    local_178[1] = 0;
    (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_178,param_1[9]);
    FText::FromString(local_f8,local_178);
    if (local_178[0] != 0) {
      FMemory::Free();
    }
    puVar9 = (undefined8 *)FText::ToString(param_2);
    puVar10 = (undefined8 *)FText::ToString(local_f8);
    psVar16 = &DAT_143f3eda8;
    if (*(int *)(puVar9 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*puVar9;
    }
    if (*(int *)(puVar10 + 1) != 0) {
      psVar16 = (short *)*puVar10;
    }
    lVar19 = (longlong)puVar18 - (longlong)psVar16;
    do {
      sVar3 = *psVar16;
      sVar4 = *(short *)((longlong)psVar16 + lVar19);
      if (sVar3 != sVar4) break;
      psVar16 = psVar16 + 1;
    } while (sVar4 != 0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_f0 + 1;
      lVar19 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (sVar3 == sVar4) {
      return 0;
    }
  }
  uVar11 = FText::ToString(param_2);
  if ((local_c0 != param_1 + 0xce) && (*(char *)(param_1 + 0xcf) != '\0')) {
    *(undefined1 *)(param_1 + 0xcf) = 0;
  }
  FUN_14192a460(param_1[9]);
  FUN_14192a360(param_1[9]);
  FUN_14192a590(param_1[9]);
  (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],uVar11,param_1[9]);
  (**(code **)(*(longlong *)param_1[3] + 0x28))();
  lVar19 = param_1[9];
  if (*(int *)(lVar19 + 0x20) == 0) {
    plVar12 = (longlong *)operator_new(0x10);
    local_168 = plVar13;
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = 0;
      plVar12[1] = 0;
      local_168 = plVar12;
    }
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *plVar12 = (longlong)&PTR_DestroyObject_14413b698;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      plVar12[2] = (longlong)local_168;
      plVar13 = plVar12;
    }
    plStack_160 = plVar13;
    SharedPointerInternals::EnableSharedFromThis(&local_168,local_168,local_168);
    local_158 = local_168;
    plStack_150 = plStack_160;
    local_198 = (undefined8 *)0x0;
    local_190 = (ulonglong)(uint)local_190;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    local_a8 = 0;
    local_a0 = 0;
    _guard_xfg_dispatch_icall_nop(local_9c,0,0x54);
    local_98[0] = 0;
    local_98[1] = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    cVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
    if (cVar6 == '\0') {
      puVar9 = (undefined8 *)FUN_141937ec0(local_128,&local_a8,&local_158,param_1 + 0xc);
      plVar13 = (longlong *)puVar9[1];
      uVar11 = *puVar9;
      plVar12 = local_120;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
    }
    else {
      puVar9 = (undefined8 *)FUN_141937a10(local_138);
      plVar13 = (longlong *)puVar9[1];
      uVar11 = *puVar9;
      plVar12 = local_130;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar12)(plVar12);
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
    local_190 = CONCAT44(local_190._4_4_,1);
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_198,0);
    *local_198 = uVar11;
    local_198[1] = plVar13;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar13 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_98,0);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    plVar13 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_150 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_150)(plStack_150);
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
    local_148 = local_198;
    local_140 = (uint)local_190;
    local_118 = local_168;
    plStack_110 = plStack_160;
    local_13c = local_190._4_4_;
    local_198 = (undefined8 *)0x0;
    local_190 = 0;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    uVar11 = param_1[9];
    uVar14 = FUN_1418d0570(local_e0,&local_118,&local_148);
    FUN_1419270e0(uVar11,uVar14);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_d0);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_d8 + 1;
      lVar5 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_198);
    plVar13 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_160 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_160)(plStack_160);
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
  }
  iVar8 = *(int *)(lVar19 + 0x20);
  piVar1 = (int *)(param_1 + 0xd0);
  iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  iVar17 = 0;
  if (-1 < iVar7) {
    iVar17 = iVar7;
  }
  if (*piVar1 < iVar8) {
    iVar7 = *(int *)(*(longlong *)((longlong)*piVar1 * 0x70 + *(longlong *)(lVar19 + 0x18)) + 8);
    iVar15 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar15 = 0;
    }
    if (iVar17 <= iVar15) goto LAB_1419a229c;
  }
  local_188 = iVar8 + -1;
  iVar8 = *(int *)(*(longlong *)((longlong)iVar8 * 0x70 + -0x70 + *(longlong *)(lVar19 + 0x18)) + 8)
  ;
  local_184 = iVar8 + -1;
  if (iVar8 == 0) {
    local_184 = 0;
  }
  FUN_1419bc080(piVar1,param_1[9],&local_188);
  local_180 = *piVar1;
  iVar8 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  local_17c = 0;
  if (-1 < iVar8) {
    local_17c = iVar8;
  }
  (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_180);
  FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(param_1);
  FUN_1419a7100(param_1);
LAB_1419a229c:
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_108)
  ;
  FUN_1418475e0(*puVar9,1);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_100 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1419a2310 SetError body=101 status=ok
// SIG undefined SetError(void)

void SErrorText::SetError(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar4 = (undefined8 *)*param_1;
  uVar6 = FText::FromString(local_28);
  (*(code *)*puVar4)(param_1,uVar6);
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
  return;
}



// FUNCTION 1419a2380 FUN_1419a2380 body=198 status=ok
// SIG undefined FUN_1419a2380(void)

void FUN_1419a2380(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar6 = TAttribute<FText>::Get(*(longlong *)(param_1 + 0x88) + 0x208);
  cVar5 = FText::IsEmpty(uVar6);
  if ((cVar5 != '\0') && (cVar5 = FText::IsEmpty(param_2), cVar5 == '\0')) {
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x380,local_18);
    FUN_141852100(param_1 + 0x98,uVar6,0,0);
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
  }
  FUN_1419bcd30(*(undefined8 *)(param_1 + 0x88),param_2);
  return;
}



// FUNCTION 1419a2450 FUN_1419a2450 body=314 status=ok
// SIG undefined FUN_1419a2450(void)

void FUN_1419a2450(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  iVar4 = *(int *)(param_2 + 8);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x388) + 8))();
  bVar5 = iVar4 < 2;
  if (bVar5) {
    uVar7 = FUN_1404b03b0();
    uVar7 = FText::FText(local_48,uVar7);
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,&DAT_144d703cc,L"UnrealEd",L"Error");
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x388);
  (**(code **)*puVar8)(puVar8,uVar7);
  if (bVar5) {
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  if ((!bVar5) && (local_28 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001419a2583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x358) + 0x210))
            ((longlong *)(param_1 + -0x358),1 < iVar4,0,0);
  return;
}



// FUNCTION 1419a2590 SetError body=47 status=ok
// SIG undefined SetError(void)

void SPopupErrorText::SetError(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FText::ToString(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001419a25bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,uVar2);
  return;
}



// FUNCTION 1419a25c0 SetExpanded body=84 status=ok
// SIG undefined SetExpanded(void)

void SExpandableArea::SetExpanded(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x370) == param_2) {
    *(byte *)(param_1 + 0x370) = param_2 ^ 1;
    if (param_2 == 0) {
      FCurveSequence::JumpToStart(param_1 + 0x300);
    }
    else {
      FCurveSequence::JumpToEnd();
    }
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x358,param_2);
  }
  return;
}



// FUNCTION 1419a2620 FUN_1419a2620 body=331 status=ok
// SIG undefined FUN_1419a2620(void)

void FUN_1419a2620(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [88];
  undefined1 local_60 [88];
  
  param_2 = param_2 ^ 1;
  if (*(byte *)(param_1 + 0x370) != param_2) {
    lVar3 = param_1 + 0x300;
    *(byte *)(param_1 + 0x370) = param_2;
    if (param_2 == 0) {
      puVar5 = (undefined4 *)FCurveSequence::GetCurve(lVar3,0);
      uVar6 = FCurveSequence::FCurveSequence(local_b8,0,*puVar5,5);
      FUN_1417f8e00(lVar3,uVar6);
      FUN_1417f61f0(local_b8);
      uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_d8);
      FUN_141852100(lVar3,uVar6,0,0);
      plVar7 = local_d0;
    }
    else {
      puVar5 = (undefined4 *)FCurveSequence::GetCurve(lVar3,0);
      uVar6 = FCurveSequence::FCurveSequence(local_60,0,*puVar5,4);
      FUN_1417f8e00(lVar3,uVar6);
      FUN_1417f61f0(local_60);
      uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_c8);
      FUN_141852180(lVar3,uVar6,0,0);
      plVar7 = local_c0;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
              (param_1 + 0x358,*(char *)(param_1 + 0x370) == '\0');
  }
  return;
}



// FUNCTION 1419a2770 SetExpireDuration body=73 status=ok
// SIG undefined SetExpireDuration(void)

void SNotificationExtendable::SetExpireDuration
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x360) = param_2;
  *(undefined1 *)(param_1 + 0x364) = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x368,&local_20,param_3,param_4,param_2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return;
}



// FUNCTION 1419a27c0 FUN_1419a27c0 body=73 status=ok
// SIG undefined FUN_1419a27c0(void)

void FUN_1419a27c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x330) = param_2;
  *(undefined1 *)(param_1 + 0x334) = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x338,&local_20,param_3,param_4,param_2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return;
}



// FUNCTION 1419a2810 FUN_1419a2810 body=73 status=ok
// SIG undefined FUN_1419a2810(void)

void FUN_1419a2810(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x348) = param_2;
  *(undefined1 *)(param_1 + 0x34c) = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x350,&local_20,param_3,param_4,param_2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return;
}



// FUNCTION 1419a2860 FUN_1419a2860 body=159 status=ok
// SIG undefined FUN_1419a2860(void)

void FUN_1419a2860(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140692440(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x28);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,param_2 + 0x30);
  FUN_1418475e0(param_1,1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x30);
  plVar4 = *(longlong **)(param_2 + 0x20);
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
  return;
}



// FUNCTION 1419a2900 SetGlobalParameters body=106 status=ok
// SIG undefined SetGlobalParameters(void)

void SVirtualJoystick::SetGlobalParameters
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,byte param_7,float param_8)

{
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) & 0xfffffffb;
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) | (uint)param_7 << 2;
  *(undefined4 *)(param_1 + 0x21c) = param_3;
  *(undefined4 *)(param_1 + 0x224) = param_5;
  *(undefined4 *)(param_1 + 0x218) = param_2;
  *(undefined4 *)(param_1 + 0x220) = param_4;
  *(undefined4 *)(param_1 + 0x228) = param_6;
  *(float *)(param_1 + 0x22c) = param_8;
  if (0.0 < param_8) {
    *(undefined4 *)(param_1 + 0x230) = 4;
  }
  return;
}



// FUNCTION 1419a2970 SetHAlign body=7 status=ok
// SIG undefined SetHAlign(void)

void SBackgroundBlur::SetHAlign(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x238) = param_2;
  return;
}



// FUNCTION 1419a2980 FUN_1419a2980 body=22 status=ok
// SIG undefined FUN_1419a2980(void)

void FUN_1419a2980(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x238) != param_2) {
    *(int *)(param_1 + 0x238) = param_2;
    FUN_1418475e0(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1419a29a0 FUN_1419a29a0 body=86 status=ok
// SIG undefined FUN_1419a29a0(void)

void FUN_1419a29a0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x280);
  if (cVar1 == '\0') {
    FUN_1418d3b60(param_1 + 0x280,param_2);
    FUN_1418475e0(param_1,5);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419a2a00 FUN_1419a2a00 body=810 status=ok
// SIG undefined FUN_1419a2a00(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1419a2a00(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res18;
  undefined1 local_res19;
  undefined8 local_res20;
  undefined8 local_278;
  longlong *local_270;
  longlong local_268 [3];
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_230 [496];
  
  FText::operator=(param_1 + 0x8e);
  *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x92,param_2 + 0x20);
  if ((*(int *)(param_1 + 0x93) == 0) || ((longlong *)param_1[0x92] == (longlong *)0x0)) {
LAB_1419a2a64:
    uVar10 = FUN_1404b03b0();
    if (*(char *)(param_1 + 0x91) != '\0') {
      uVar10 = TAttribute<FText>::Get(param_1 + 0x8e);
    }
    cVar9 = FText::IsEmpty(uVar10);
    if (cVar9 != '\0') {
      lVar11 = param_1[0xb];
      param_1[0xb] = 0;
      if (lVar11 != 0) {
        FUN_141966250(lVar11);
        FMemory::operator_delete(lVar11,0x68);
      }
      goto LAB_1419a2cbf;
    }
  }
  else {
    cVar9 = (**(code **)(*(longlong *)param_1[0x92] + 0x18))();
    if (cVar9 == '\0') goto LAB_1419a2a64;
  }
  FTextBlockStyle::operator=(param_1 + 0x48,param_1 + 0xc);
  uVar5 = *(undefined1 *)(param_1[9] + 0x8a);
  uVar6 = *(undefined1 *)(param_1[9] + 0x89);
  puVar12 = (undefined8 *)
            (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,local_250);
  plVar7 = (longlong *)param_1[6];
  uVar10 = param_1[5];
  local_res20 = *puVar12;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  lVar11 = operator_new(0x68);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    local_268[1] = 0;
    local_268[2] = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_res11 = 1;
    local_res19 = 1;
    local_res10 = uVar5;
    local_res18 = uVar6;
    local_278 = uVar10;
    local_270 = plVar7;
    uVar10 = FTextBlockStyle::FTextBlockStyle(local_230,param_1 + 0x48);
    lVar11 = FUN_1419a8840(lVar11,local_res20,uVar10,&local_res18,&local_res10,param_1 + 7,
                           &local_278,local_268 + 1);
  }
  plVar1 = param_1 + 0xb;
  if (plVar1 == local_268) {
    if (lVar11 != 0) {
      FUN_141966250(lVar11);
      goto LAB_1419a2c23;
    }
  }
  else {
    lVar8 = *plVar1;
    *plVar1 = lVar11;
    if (lVar8 != 0) {
      FUN_141966250(lVar8);
      lVar11 = lVar8;
LAB_1419a2c23:
      FMemory::operator_delete(lVar11,0x68);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_248 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_248 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_248)(local_248);
      LOCK();
      piVar3 = (int *)((longlong)local_248 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_248 + 8))(local_248,1);
      }
    }
  }
  FSlateTextBlockLayout::SetDebugSourceInfo(*plVar1,param_1 + 0xb5);
LAB_1419a2cbf:
  puVar12 = (undefined8 *)
            (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_240);
  FUN_1418475e0(*puVar12,5);
  if (local_238 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_238 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_238)(local_238);
      LOCK();
      piVar3 = (int *)((longlong)local_238 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_238 + 8))(local_238,1);
      }
    }
  }
  return;
}



// FUNCTION 1419a2d30 SetHorizontalScrollFraction body=101 status=ok
// SIG undefined SetHorizontalScrollFraction(void)

undefined8 *
FSlateEditableTextLayout::SetHorizontalScrollFraction
          (longlong param_1,undefined8 *param_2,float param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_res8 [8];
  
  fVar3 = 0.0;
  if ((0.0 <= param_3) && (fVar3 = param_3, 1.0 <= param_3)) {
    fVar3 = 1.0;
  }
  pfVar1 = (float *)FTextLayout::GetSize(*(undefined8 *)(param_1 + 0x48),local_res8);
  uVar2 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x658) >> 0x20),fVar3 * *pfVar1);
  *(undefined8 *)(param_1 + 0x658) = uVar2;
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1419a2da0 FUN_1419a2da0 body=115 status=ok
// SIG undefined FUN_1419a2da0(void)

void FUN_1419a2da0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4f0);
  if ((*(int *)(param_3 + 0x28) != 0) && (*(longlong **)(param_3 + 0x20) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x18))();
    if (cVar1 != '\0') {
      FText::operator=(param_1 + 0x500,param_3);
      *(undefined1 *)(param_1 + 0x518) = *(undefined1 *)(param_3 + 0x18);
      TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x520,param_3 + 0x20);
    }
  }
  return;
}



// FUNCTION 1419a2e20 SetIgnoreInheritedScale body=180 status=ok
// SIG undefined SetIgnoreInheritedScale(void)

void SScaleBox::SetIgnoreInheritedScale(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  local_27 = 1;
  local_20 = 0;
  local_18 = 0;
  local_28 = param_2;
  cVar1 = TAttribute<bool>::IdenticalTo(param_1 + 0x338,&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (cVar1 == '\0') {
    local_27 = 1;
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)(param_1 + 0x338) = param_2;
    *(undefined1 *)(param_1 + 0x339) = 1;
    local_28 = param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,&local_20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    FUN_1418475e0(param_1,1);
  }
  return;
}



// FUNCTION 1419a2ee0 SetInnerSlotPadding body=8 status=ok
// SIG undefined SetInnerSlotPadding(void)

void SWrapBox::SetInnerSlotPadding(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x248) = param_2;
  return;
}



// FUNCTION 1419a2ef0 FUN_1419a2ef0 body=7 status=ok
// SIG undefined FUN_1419a2ef0(void)

void FUN_1419a2ef0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x600) = param_2;
  return;
}



// FUNCTION 1419a2f00 SetJoystickVisibility body=111 status=ok
// SIG undefined SetJoystickVisibility(void)

void SVirtualJoystick::SetJoystickVisibility(longlong param_1,byte param_2,char param_3)

{
  if (param_3 == '\0') {
    if (param_2 != 0) {
      if (1 < *(uint *)(param_1 + 0x230)) {
        *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) & 0xfffffffe;
        *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) | (uint)param_2;
        *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x21c);
        return;
      }
      *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) & 0xfffffffe;
      *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) | (uint)param_2;
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x218);
      return;
    }
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) & 0xfffffffe;
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) | (uint)param_2;
  return;
}



// FUNCTION 1419a2f70 FUN_1419a2f70 body=142 status=ok
// SIG undefined FUN_1419a2f70(void)

void FUN_1419a2f70(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0xaf) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x57c) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb0,param_2 + 2);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_18);
  FUN_1418475e0(*puVar5,5);
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



// FUNCTION 1419a3000 FUN_1419a3000 body=142 status=ok
// SIG undefined FUN_1419a3000(void)

void FUN_1419a3000(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0xb2) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x594) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb3,param_2 + 2);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_18);
  FUN_1418475e0(*puVar5,5);
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



// FUNCTION 1419a3090 SetLowQualityBackgroundBrush body=14 status=ok
// SIG undefined SetLowQualityBackgroundBrush(void)

void SBackgroundBlur::SetLowQualityBackgroundBrush(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x330) = param_2;
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419a30a0 FUN_1419a30a0 body=144 status=ok
// SIG undefined FUN_1419a30a0(void)

void FUN_1419a30a0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0xaa) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x554) = uVar4;
  *(undefined4 *)(param_1 + 0xab) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x55c) = uVar6;
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xad,param_2 + 6);
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_18);
  FUN_1418475e0(*puVar8,5);
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
  return;
}



// FUNCTION 1419a3130 FUN_1419a3130 body=86 status=ok
// SIG undefined FUN_1419a3130(void)

void FUN_1419a3130(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x2f8);
  if (cVar1 == '\0') {
    FUN_1418d3b60(param_1 + 0x2f8,param_2);
    FUN_1418475e0(param_1,5);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419a3190 FUN_1419a3190 body=86 status=ok
// SIG undefined FUN_1419a3190(void)

void FUN_1419a3190(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x2e0);
  if (cVar1 == '\0') {
    FUN_1418d3b60(param_1 + 0x2e0,param_2);
    FUN_1418475e0(param_1,5);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419a31f0 FUN_1419a31f0 body=86 status=ok
// SIG undefined FUN_1419a31f0(void)

void FUN_1419a31f0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x2c8);
  if (cVar1 == '\0') {
    FUN_1418d3b60(param_1 + 0x2c8,param_2);
    FUN_1418475e0(param_1,5);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419a3250 FUN_1419a3250 body=86 status=ok
// SIG undefined FUN_1419a3250(void)

void FUN_1419a3250(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x2b0);
  if (cVar1 == '\0') {
    FUN_1418d3b60(param_1 + 0x2b0,param_2);
    FUN_1418475e0(param_1,5);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419a32b0 SetMinDesiredSlotHeight body=56 status=ok
// SIG undefined SetMinDesiredSlotHeight(void)

void SUniformGridPanel::SetMinDesiredSlotHeight(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x278) = *param_2;
  *(undefined1 *)(param_1 + 0x27c) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,param_2 + 2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419a32f0 SetMinDesiredSlotHeight body=56 status=ok
// SIG undefined SetMinDesiredSlotHeight(void)

void SUniformGridPanel::SetMinDesiredSlotHeight(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x260) = *param_2;
  *(undefined1 *)(param_1 + 0x264) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x268,param_2 + 2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419a3330 FUN_1419a3330 body=86 status=ok
// SIG undefined FUN_1419a3330(void)

void FUN_1419a3330(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x298);
  if (cVar1 == '\0') {
    FUN_1418d3b60(param_1 + 0x298,param_2);
    FUN_1418475e0(param_1,5);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419a3390 FUN_1419a3390 body=12 status=ok
// SIG undefined FUN_1419a3390(void)

void FUN_1419a3390(longlong param_1)

{
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d8);
  return;
}



// FUNCTION 1419a33a0 FUN_1419a33a0 body=217 status=ok
// SIG undefined FUN_1419a33a0(void)

void FUN_1419a33a0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(param_1 + 0x378) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x378) = param_2;
  if ((*(byte *)(param_1 + 0x438) & 2) == 0) {
    puVar5 = (undefined8 *)FUN_14197f480(param_1,local_18);
    if ((undefined8 *)(param_1 + 0x308) != puVar5) {
      *(undefined8 *)(param_1 + 0x308) = *puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x310,puVar5 + 1);
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
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x238) = *(undefined4 *)(param_1 + 0x378);
  if (*(int *)(param_1 + 0x378) != 1) {
    FUN_14197bb40(param_1);
    return;
  }
  FUN_14197f730();
  return;
}



// FUNCTION 1419a3480 SetPadding body=36 status=ok
// SIG undefined SetPadding(void)

void SWindowTitleBarArea::SetPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x240) = *param_2;
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  *(undefined4 *)(param_1 + 0x24c) = uVar3;
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,param_2 + 6);
  return;
}



// FUNCTION 1419a34b0 SetPadding body=99 status=ok
// SIG undefined SetPadding(void)

void SBorder::SetPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = TAttribute<FMargin>::IdenticalTo(param_1 + 0x240);
  if (cVar4 == '\0') {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x240) = *param_2;
    *(undefined4 *)(param_1 + 0x244) = uVar1;
    *(undefined4 *)(param_1 + 0x248) = uVar2;
    *(undefined4 *)(param_1 + 0x24c) = uVar3;
    *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 4);
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,param_2 + 6);
    FUN_1418475e0(param_1,5);
  }
  return;
}



// FUNCTION 1419a3520 FUN_1419a3520 body=339 status=ok
// SIG undefined FUN_1419a3520(void)

void FUN_1419a3520(longlong param_1,float *param_2)

{
  float *pfVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pfVar1 = (float *)(param_1 + 0x210);
  if ((*(int *)(param_1 + 0x228) == 0) || (*(longlong **)(param_1 + 0x220) == (longlong *)0x0)) {
LAB_1419a356a:
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x18))();
    if (cVar2 == '\0') goto LAB_1419a356a;
    cVar2 = '\x01';
  }
  if ((param_2[6] == 0.0) || (*(longlong **)(param_2 + 4) == (longlong *)0x0)) {
LAB_1419a3589:
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 4) + 0x18))();
    if (cVar3 == '\0') goto LAB_1419a3589;
    cVar3 = '\x01';
  }
  if (cVar2 == cVar3) {
    if (cVar2 == '\0') {
      if ((*(char *)(param_1 + 0x218) != *(char *)(param_2 + 2)) ||
         (*(char *)(param_1 + 0x214) != *(char *)(param_2 + 1))) goto LAB_1419a3601;
      if (*(char *)(param_1 + 0x214) == '\0') goto LAB_1419a3641;
      bVar7 = *param_2 == *pfVar1;
    }
    else {
      lVar5 = 0;
      lVar6 = lVar5;
      if ((param_2[6] != 0.0) &&
         (plVar4 = *(longlong **)(param_2 + 4), lVar6 = 0, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
        lVar6 = *plVar4;
      }
      if ((*(int *)(param_1 + 0x228) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x220), plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
        lVar5 = *plVar4;
      }
      bVar7 = lVar5 == lVar6;
    }
    if (bVar7) goto LAB_1419a3641;
  }
LAB_1419a3601:
  if (param_2 != pfVar1) {
    if (*(char *)(param_1 + 0x214) != '\0') {
      *(undefined1 *)(param_1 + 0x214) = 0;
    }
    if (*(char *)(param_2 + 1) != '\0') {
      *pfVar1 = *param_2;
      *(undefined1 *)(param_1 + 0x214) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 2);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x220,param_2 + 4);
  FUN_1418475e0(param_1,5);
LAB_1419a3641:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 4);
  if (*(char *)(param_2 + 1) != '\0') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1419a3680 SetRowFill body=199 status=ok
// SIG undefined SetRowFill(void)

void SGridPanel::SetRowFill(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)param_2;
  iVar1 = *(int *)(param_1 + 0x270);
  while (iVar1 <= param_2) {
    iVar1 = *(int *)(param_1 + 0x270);
    lVar4 = (longlong)iVar1;
    *(int *)(param_1 + 0x270) = iVar1 + 1;
    if (*(int *)(param_1 + 0x274) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x268,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x268);
    *(undefined4 *)(lVar2 + lVar4 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 4 + lVar4 * 0x18) = 1;
    *(undefined8 *)(lVar2 + 8 + lVar4 * 0x18) = 0;
    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) = 0;
    iVar1 = *(int *)(param_1 + 0x270);
  }
  lVar4 = *(longlong *)(param_1 + 0x268);
  *(undefined4 *)(lVar4 + lVar3 * 0x18) = *param_3;
  *(undefined1 *)(lVar4 + 4 + lVar3 * 0x18) = *(undefined1 *)(param_3 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + lVar3 * 0x18 + 8,param_3 + 2);
  return;
}



// FUNCTION 1419a3750 SetSafeAreaScale body=11 status=ok
// SIG undefined SetSafeAreaScale(void)

void SSafeZone::SetSafeAreaScale(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x338) = *param_2;
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  return;
}



// FUNCTION 1419a3760 FUN_1419a3760 body=506 status=ok
// SIG undefined FUN_1419a3760(void)

void FUN_1419a3760(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined4 local_20;
  
  *(char *)(param_1 + 0x400) = param_2;
  local_30 = DAT_1464b9ee8;
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = DAT_1464b9ee8;
    *(undefined1 *)(param_1 + 0xb1) = 1;
    local_2f = 1;
    local_28 = 0;
    local_20 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    return;
  }
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_58);
  plVar4 = (longlong *)puVar6[1];
  uVar7 = *puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_48 = 0x119;
  local_40 = 0;
  local_38 = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)operator_new(0x38,&local_40);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_GetPoolName_144d50130;
    puVar6[1] = uVar7;
    puVar6[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar6 + 3) = 0x419a5310;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 1;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_5c;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[6] = uVar7;
  }
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
  }
  *(undefined1 *)(param_1 + 0xb0) = (undefined1)local_48;
  *(undefined1 *)(param_1 + 0xb1) = local_48._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  return;
}



// FUNCTION 1419a3960 SetScrollBarAlwaysVisible body=12 status=ok
// SIG undefined SetScrollBarAlwaysVisible(void)

void SScrollBox::SetScrollBarAlwaysVisible(longlong param_1)

{
  FUN_1419a3760(*(undefined8 *)(param_1 + 0x308));
  return;
}



// FUNCTION 1419a3970 FUN_1419a3970 body=17 status=ok
// SIG undefined FUN_1419a3970(void)

void FUN_1419a3970(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xbf;
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) | param_2 << 6;
  return;
}



// FUNCTION 1419a3990 SetScrollBarThickness body=47 status=ok
// SIG undefined SetScrollBarThickness(void)

void SScrollBox::SetScrollBarThickness(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_20 = 1;
  local_28 = param_2;
  FUN_1419a4d40(*(undefined8 *)(param_1 + 0x308),&local_28);
  return;
}



// FUNCTION 1419a39c0 FUN_1419a39c0 body=79 status=ok
// SIG undefined FUN_1419a39c0(void)

void FUN_1419a39c0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x308);
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(lVar2 + 0x388) = uVar1;
  *(undefined1 *)(lVar2 + 0x389) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar2 + 0x390,&local_20,param_3,param_4,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return;
}



// FUNCTION 1419a3a10 SetScrollOffset body=158 status=ok
// SIG undefined SetScrollOffset(void)

undefined8 *
FSlateEditableTextLayout::SetScrollOffset
          (longlong param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float local_res8;
  float local_resc;
  
  FTextLayout::GetSize(*(undefined8 *)(param_1 + 0x48),&local_res8);
  fVar1 = *param_3;
  if (0.0 <= fVar1) {
    fVar2 = local_res8 - *param_4;
    if (fVar1 <= local_res8 - *param_4) {
      fVar2 = fVar1;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x658) = fVar2;
  fVar1 = param_3[1];
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = local_resc - param_4[1], fVar1 <= local_resc - param_4[1])) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x65c) = fVar2;
  *param_2 = *(undefined8 *)(param_1 + 0x658);
  return param_2;
}



// FUNCTION 1419a3ab0 SetScrollOffset body=16 status=ok
// SIG undefined SetScrollOffset(void)

void SScrollBox::SetScrollOffset(longlong param_1,undefined4 param_2)

{
  *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xef;
  *(undefined4 *)(param_1 + 0x2f0) = param_2;
  return;
}



// FUNCTION 1419a3ac0 FUN_1419a3ac0 body=361 status=ok
// SIG undefined FUN_1419a3ac0(void)

void FUN_1419a3ac0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FUN_1404b03b0();
  if (*(char *)(param_2 + 0x18) != '\0') {
    uVar5 = TAttribute<FText>::Get(param_2);
  }
  FText::operator=(param_1 + 0x94,param_2);
  *(undefined1 *)(param_1 + 0x97) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x98,param_2 + 0x20);
  puVar6 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_28,uVar5);
  if (param_1 + 0x9a != puVar6) {
    param_1[0x9a] = *puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x9b,puVar6 + 1);
  }
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(puVar6 + 2);
  *(undefined2 *)((longlong)param_1 + 0x4e2) = *(undefined2 *)((longlong)puVar6 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x4e4) = *(undefined4 *)((longlong)puVar6 + 0x14);
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
  FText::operator=(param_1 + 0x9d,uVar5);
  *(undefined4 *)(param_1 + 0xa0) = 1;
  FUN_14196abc0(param_1,0);
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_38);
  FUN_1418475e0(*puVar6,5);
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



// FUNCTION 1419a3c30 FUN_1419a3c30 body=148 status=ok
// SIG undefined FUN_1419a3c30(void)

void FUN_1419a3c30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong local_10;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    FUN_14196e710(*(undefined8 *)(param_1 + 0x3b0));
  }
  else {
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar4;
    FUN_141959b70(*(undefined8 *)(param_1 + 0x3b0),&local_18,3);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 1419a3cd0 SetSelectionRange body=435 status=ok
// SIG undefined SetSelectionRange(void)

void FSlateEditableTextLayout::FTextInputMethodContext::SetSelectionRange
               (longlong *param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 local_res8;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  longlong local_30 [3];
  
  if (param_1[1] != 0) {
    uVar3 = (**(code **)(*param_1 + 0x18))();
    uVar5 = uVar3;
    if (param_2 <= uVar3) {
      uVar5 = param_2;
    }
    local_30[0] = 0;
    local_30[1] = 0;
    FTextLayout::GetTextOffsetLocations(*(undefined8 *)(param_1[1] + 0x48),local_30);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(local_30,&local_res8,uVar5);
    if (uVar5 + param_3 <= uVar3) {
      uVar3 = uVar5 + param_3;
    }
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(local_30,&local_48,uVar3);
    lVar1 = param_1[1];
    if ((&local_40 != (undefined4 *)(lVar1 + 0x670)) && (*(char *)(lVar1 + 0x678) != '\0')) {
      *(undefined1 *)(lVar1 + 0x678) = 0;
    }
    if (param_4 == 0) {
      FUN_1419bc080(param_1[1] + 0x680,*(undefined8 *)(param_1[1] + 0x48),&local_res8);
      lVar1 = param_1[1];
      if (&local_48 != (undefined8 *)(lVar1 + 0x670)) {
        if (*(char *)(lVar1 + 0x678) != '\0') {
          *(undefined1 *)(lVar1 + 0x678) = 0;
        }
        *(undefined8 *)(lVar1 + 0x670) = local_48;
        *(undefined1 *)(lVar1 + 0x678) = 1;
      }
    }
    else if (param_4 == 1) {
      lVar1 = param_1[1];
      if (&local_res8 != (undefined8 *)(lVar1 + 0x670)) {
        if (*(char *)(lVar1 + 0x678) != '\0') {
          *(undefined1 *)(lVar1 + 0x678) = 0;
        }
        *(undefined8 *)(lVar1 + 0x670) = local_res8;
        *(undefined1 *)(lVar1 + 0x678) = 1;
      }
      FUN_1419bc080(param_1[1] + 0x680,*(undefined8 *)(param_1[1] + 0x48),&local_48);
    }
    puVar2 = (undefined8 *)param_1[1];
    local_40 = *(undefined4 *)(puVar2 + 0xd0);
    iVar4 = (uint)(*(char *)(puVar2 + 0xd1) == '\x01') + *(int *)((longlong)puVar2 + 0x684);
    local_3c = 0;
    if (-1 < iVar4) {
      local_3c = iVar4;
    }
    (**(code **)(*(longlong *)*puVar2 + 0xa8))((longlong *)*puVar2,&local_40);
    FUN_1419a7100(param_1[1]);
    if (local_30[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1419a3e90 FUN_1419a3e90 body=7 status=ok
// SIG undefined FUN_1419a3e90(void)

void FUN_1419a3e90(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x601) = param_2;
  return;
}



// FUNCTION 1419a3ea0 SetShowEffectWhenDisabled body=98 status=ok
// SIG undefined SetShowEffectWhenDisabled(void)

void SBorder::SetShowEffectWhenDisabled(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<bool>::IdenticalTo(param_1 + 0x370);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x370) = *param_2;
    *(undefined1 *)(param_1 + 0x371) = param_2[1];
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x378,param_2 + 8);
    FUN_1418475e0(param_1,5);
  }
  return;
}



// FUNCTION 1419a3f10 FUN_1419a3f10 body=43 status=ok
// SIG undefined FUN_1419a3f10(void)

void FUN_1419a3f10(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x349) = param_2;
  *(undefined1 *)(param_1 + 0x34c) = param_5;
  *(undefined1 *)(param_1 + 0x34a) = param_3;
  *(undefined1 *)(param_1 + 0x34b) = param_4;
  FUN_1419a4dd0(param_1,*(undefined1 *)(param_1 + 0x348));
  return;
}



// FUNCTION 1419a3f40 SetSlotPadding body=58 status=ok
// SIG undefined SetSlotPadding(void)

void SUniformGridPanel::SetSlotPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x230) = *param_2;
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = uVar3;
  *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x248,param_2 + 6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 6);
  return;
}



// FUNCTION 1419a3f80 FUN_1419a3f80 body=77 status=ok
// SIG undefined FUN_1419a3f80(void)

void FUN_1419a3f80(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  if ((param_2 != *(float *)(lVar1 + 0x230)) || (param_3 != *(float *)(lVar1 + 0x234))) {
    *(float *)(lVar1 + 0x230) = param_2;
    *(float *)(lVar1 + 0x234) = param_3;
    uVar2 = (**(code **)(*DAT_1469f4590 + 0x40))();
    *(undefined8 *)(param_1 + 0x3f8) = uVar2;
  }
  return;
}



// FUNCTION 1419a3fd0 FUN_1419a3fd0 body=219 status=ok
// SIG undefined FUN_1419a3fd0(void)

void FUN_1419a3fd0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0;
  local_18 = 0;
  if ((*(int *)(param_1 + 0x318) == 0) || (*(longlong **)(param_1 + 0x310) == (longlong *)0x0)) {
LAB_1419a401c:
    if ((*(char *)(param_1 + 0x30c) == '\x01') && (*(int *)(param_1 + 0x308) == param_2)) {
      bVar1 = true;
      goto LAB_1419a4035;
    }
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))();
    if (cVar2 == '\0') goto LAB_1419a401c;
  }
  bVar1 = false;
LAB_1419a4035:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (!bVar1) {
    local_20 = 0;
    local_18 = 0;
    *(int *)(param_1 + 0x308) = param_2;
    *(undefined1 *)(param_1 + 0x30c) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x310,&local_20,param_3,param_4,param_2)
    ;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    FUN_14199e4f0(param_1);
    FUN_1418475e0(param_1,1);
  }
  return;
}



// FUNCTION 1419a40b0 FUN_1419a40b0 body=211 status=ok
// SIG undefined FUN_1419a40b0(void)

void FUN_1419a40b0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0;
  local_18 = 0;
  if ((*(int *)(param_1 + 0x300) == 0) || (*(longlong **)(param_1 + 0x2f8) == (longlong *)0x0)) {
LAB_1419a40fc:
    if ((*(char *)(param_1 + 0x2f4) == '\x01') && (*(int *)(param_1 + 0x2f0) == param_2)) {
      bVar1 = true;
      goto LAB_1419a4115;
    }
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))();
    if (cVar2 == '\0') goto LAB_1419a40fc;
  }
  bVar1 = false;
LAB_1419a4115:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (!bVar1) {
    local_20 = 0;
    local_18 = 0;
    *(int *)(param_1 + 0x2f0) = param_2;
    *(undefined1 *)(param_1 + 0x2f4) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2f8,&local_20,param_3,param_4,param_2)
    ;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    FUN_1418475e0(param_1,1);
  }
  return;
}



// FUNCTION 1419a4190 FUN_1419a4190 body=254 status=ok
// SIG undefined FUN_1419a4190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419a4190(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [264];
  undefined8 local_d0;
  undefined1 local_bc;
  undefined1 local_b0 [48];
  longlong *local_80;
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  *(longlong *)(param_1 + 0x208) = param_2;
  if (param_2 == 0) {
    SProgressBar::FArguments::FArguments(local_1d8);
    *(undefined8 *)(param_1 + 0x208) = local_d0;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_70);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_b0);
    local_bc = 0;
    FUN_140456c70(local_1d8);
  }
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 1419a4290 FUN_1419a4290 body=258 status=ok
// SIG undefined FUN_1419a4290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419a4290(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_188 [32];
  undefined1 local_168 [264];
  longlong local_60;
  undefined1 local_58 [48];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (param_2 == 0) {
    SScrollBar::FArguments::FArguments(local_168);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
    FUN_140456c70(local_168);
    param_2 = local_60;
  }
  iVar1 = *(int *)(param_1 + 0x3ec);
  *(longlong *)(param_1 + 0x408) = param_2 + 0x338;
  *(longlong *)(param_1 + 0x410) = param_2 + 0x3c0;
  lVar4 = 0x118;
  if (iVar1 != 1) {
    lVar4 = 0x1a0;
  }
  *(longlong *)(param_1 + 0x418) = param_2 + 0x448;
  lVar2 = 0x228;
  if (iVar1 != 1) {
    lVar2 = 0x2b0;
  }
  lVar3 = 0x90;
  if (iVar1 != 1) {
    lVar3 = 8;
  }
  *(longlong *)(param_1 + 0x420) = lVar3 + param_2;
  *(longlong *)(param_1 + 0x428) = lVar4 + param_2;
  *(longlong *)(param_1 + 0x430) = lVar2 + param_2;
  return;
}



// FUNCTION 1419a43a0 FUN_1419a43a0 body=1004 status=ok
// SIG undefined FUN_1419a43a0(void)

void FUN_1419a43a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  short *psVar11;
  int iVar12;
  undefined2 *puVar13;
  ushort *puVar14;
  longlong lVar15;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_res10;
  undefined1 local_res11;
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar8 = FUN_1404b03b0();
  puVar9 = param_1 + 0x84;
  if (*(char *)(param_1 + 0x87) != '\0') {
    uVar8 = TAttribute<FText>::Get(puVar9);
  }
  FText::FText(local_48,uVar8);
  FText::operator=(puVar9,param_2);
  *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x88,param_2 + 0x20);
  uVar8 = FUN_1404b03b0();
  if (*(char *)(param_1 + 0x87) != '\0') {
    uVar8 = TAttribute<FText>::Get(puVar9);
  }
  FText::FText(local_a8,uVar8);
  local_b8[0] = 0;
  local_b8[1] = 0;
  (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_b8,param_1[9]);
  FText::FromString(local_90,local_b8);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)FText::ToString(local_a8);
  puVar10 = (undefined8 *)FText::ToString(local_90);
  puVar14 = &DAT_143f3eda8;
  if (*(int *)(puVar9 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar9;
  }
  if (*(int *)(puVar10 + 1) == 0) {
    psVar11 = &DAT_143f3eda8;
  }
  else {
    psVar11 = (short *)*puVar10;
  }
  lVar15 = (longlong)puVar13 - (longlong)psVar11;
  do {
    sVar4 = *psVar11;
    sVar5 = *(short *)((longlong)psVar11 + lVar15);
    if (sVar4 != sVar5) break;
    psVar11 = psVar11 + 1;
  } while (sVar5 != 0);
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_78);
  lVar15 = FUN_141845d20(*puVar9,&local_res8);
  if (*(char *)(lVar15 + 1) == '\0') {
    puVar9 = (undefined8 *)FText::ToString(local_48);
    puVar10 = (undefined8 *)FText::ToString(local_a8);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar9;
    }
    if (*(int *)(puVar10 + 1) != 0) {
      puVar14 = (ushort *)*puVar10;
    }
    lVar15 = (longlong)puVar13 - (longlong)puVar14;
    do {
      uVar7 = (uint)*(ushort *)((longlong)puVar14 + lVar15);
      iVar12 = *puVar14 - uVar7;
      if (iVar12 != 0) break;
      puVar14 = puVar14 + 1;
    } while (uVar7 != 0);
  }
  else {
    puVar9 = (undefined8 *)FText::ToString(local_90);
    puVar10 = (undefined8 *)FText::ToString(local_a8);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar9;
    }
    if (*(int *)(puVar10 + 1) != 0) {
      puVar14 = (ushort *)*puVar10;
    }
    lVar15 = (longlong)puVar13 - (longlong)puVar14;
    do {
      uVar7 = (uint)*(ushort *)((longlong)puVar14 + lVar15);
      iVar12 = *puVar14 - uVar7;
      if (iVar12 != 0) break;
      puVar14 = puVar14 + 1;
    } while (uVar7 != 0);
  }
  local_res9 = 0;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
  cVar6 = FUN_14199e240(param_1,local_a8,sVar4 != sVar5);
  if (cVar6 == '\0') {
LAB_1419a4654:
    if (iVar12 == 0) goto LAB_1419a4659;
  }
  else {
    puVar9 = (undefined8 *)
             (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_68);
    lVar15 = FUN_141845d20(*puVar9,&local_res10);
    cVar6 = *(char *)(lVar15 + 1);
    local_res11 = 0;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (cVar6 != '\0') {
      FUN_14198c170(param_1,1);
    }
    if (iVar12 != 0) {
      (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,local_a8);
      goto LAB_1419a4654;
    }
LAB_1419a4659:
    if (((*(int *)(param_1 + 0x89) == 0) || ((longlong *)param_1[0x88] == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)param_1[0x88] + 0x18))(), cVar6 == '\0'))
    goto LAB_1419a46c9;
  }
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_58);
  FUN_1418475e0(*puVar9,5);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
LAB_1419a46c9:
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 1419a4790 SetText body=93 status=ok
// SIG undefined SetText(void)

void SNotificationExtendable::SetText(longlong param_1,longlong param_2)

{
  FText::operator=(param_1 + 0x300);
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,param_2 + 0x20);
  FUN_1419bcc80(*(undefined8 *)(param_1 + 0x378),param_1 + 0x300);
  return;
}



// FUNCTION 1419a47f0 SetTextFlowDirection body=57 status=ok
// SIG undefined SetTextFlowDirection(void)

void FSlateEditableTextLayout::SetTextFlowDirection(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_2[1] != '\0') {
    FTextLayout::SetTextFlowDirection(*(undefined8 *)(param_1 + 0x48),*param_2);
    return;
  }
  uVar1 = GetDefaultTextFlowDirection();
  FTextLayout::SetTextFlowDirection(*(undefined8 *)(param_1 + 0x48),uVar1);
  return;
}



// FUNCTION 1419a4830 SetTextFromVirtualKeyboard body=299 status=ok
// SIG undefined SetTextFromVirtualKeyboard(void)

void FSlateEditableTextLayout::FVirtualKeyboardEntry::SetTextFromVirtualKeyboard
               (longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (((*(int *)(*(longlong *)(param_1 + 8) + 0x448) == 0) ||
      (plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x440), plVar1 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar1 + 0x18))(), cVar3 == '\0')) {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((*(int *)(lVar2 + 0x448) != 0) &&
       (plVar1 = *(longlong **)(lVar2 + 0x440), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar2 + 0x440) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(lVar2 + 0x440),0,0);
        *(undefined8 *)(lVar2 + 0x440) = uVar4;
      }
      *(undefined4 *)(lVar2 + 0x448) = 0;
    }
    FText::operator=(lVar2 + 0x420,param_2);
    *(undefined1 *)(lVar2 + 0x438) = 1;
  }
  FText::operator=(*(longlong *)(param_1 + 8) + 0x740,param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x73b) = 1;
  if (param_3 == '\x01') {
    cVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x78))();
    if ((cVar3 != '\x01') &&
       (cVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x78))(), cVar3 != '\x02'
       )) {
      return;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x758) = 1;
  }
  else {
    if (param_3 != '\0') {
      return;
    }
    cVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x78))();
    if (cVar3 != '\x02') {
      return;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x758) = 0;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x73c) = 1;
  return;
}



// FUNCTION 1419a4960 SetTextInRange body=584 status=ok
// SIG undefined SetTextInRange(void)

void FSlateEditableTextLayout::FTextInputMethodContext::SetTextInRange
               (longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  short *psVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong local_58 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar12 = param_1[1];
  if (lVar12 == 0) {
    return;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  (**(code **)(**(longlong **)(lVar12 + 0x18) + 0x10))
            (*(longlong **)(lVar12 + 0x18),local_58,*(undefined8 *)(lVar12 + 0x48));
  FText::FromString(local_20,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,0);
  FUN_141980ac0(param_1[1]);
  FUN_14198b050(param_1[1],param_4);
  local_58[2] = 0;
  local_58[3] = 0;
  plVar5 = *(longlong **)(param_1[1] + 0x18);
  (**(code **)(*plVar5 + 0x10))(plVar5,local_58 + 2,*(undefined8 *)(param_1[1] + 0x48));
  FText::FromString(local_38,local_58 + 2);
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  puVar7 = (undefined8 *)FText::ToString(local_20);
  puVar8 = (undefined8 *)FText::ToString(local_38);
  psVar10 = &DAT_143f3eda8;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar7;
  }
  if (*(int *)(puVar8 + 1) != 0) {
    psVar10 = (short *)*puVar8;
  }
  lVar12 = (longlong)puVar11 - (longlong)psVar10;
  do {
    sVar3 = *psVar10;
    sVar4 = *(short *)((longlong)psVar10 + lVar12);
    if (sVar3 != sVar4) break;
    psVar10 = psVar10 + 1;
  } while (sVar4 != 0);
  if (sVar3 != sVar4) {
    lVar12 = param_1[1];
    if (((*(int *)(lVar12 + 0x448) == 0) || (*(longlong **)(lVar12 + 0x440) == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(**(longlong **)(lVar12 + 0x440) + 0x18))(), cVar6 == '\0')) {
      if ((*(int *)(lVar12 + 0x448) != 0) &&
         (plVar5 = *(longlong **)(lVar12 + 0x440), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*(longlong *)(lVar12 + 0x440) != 0) {
          uVar9 = FMemory::Realloc(*(longlong *)(lVar12 + 0x440),0,0);
          *(undefined8 *)(lVar12 + 0x440) = uVar9;
        }
        *(undefined4 *)(lVar12 + 0x448) = 0;
      }
      FText::operator=(lVar12 + 0x420,local_38);
      *(undefined1 *)(lVar12 + 0x438) = 1;
    }
    (**(code **)(**(longlong **)(param_1[1] + 0x48) + 8))();
    (**(code **)(**(longlong **)param_1[1] + 0x98))(*(longlong **)param_1[1],local_38);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_18 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 1419a4bb0 SetTextShapingMethod body=57 status=ok
// SIG undefined SetTextShapingMethod(void)

void FSlateEditableTextLayout::SetTextShapingMethod(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_2[1] != '\0') {
    FTextLayout::SetTextShapingMethod(*(undefined8 *)(param_1 + 0x48),*param_2);
    return;
  }
  uVar1 = GetDefaultTextShapingMethod();
  FTextLayout::SetTextShapingMethod(*(undefined8 *)(param_1 + 0x48),uVar1);
  return;
}



// FUNCTION 1419a4bf0 SetTextStyle body=90 status=ok
// SIG undefined SetTextStyle(void)

void FSlateEditableTextLayout::SetTextStyle(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_1e8 [480];
  
  FTextBlockStyle::operator=(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = FTextBlockStyle::FTextBlockStyle(local_1e8,param_1 + 0x60);
  FSlateTextLayout::SetDefaultTextStyle(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001419a4c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
  return;
}



// FUNCTION 1419a4c50 FUN_1419a4c50 body=227 status=ok
// SIG undefined FUN_1419a4c50(void)

void FUN_1419a4c50(undefined8 *param_1,undefined4 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0xa1) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x50c) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa2,param_2 + 2);
  *(undefined1 *)(param_1 + 0xa4) = *param_3;
  *(undefined1 *)((longlong)param_1 + 0x521) = param_3[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa5,param_3 + 8);
  *(undefined1 *)(param_1 + 0xa7) = *param_4;
  *(undefined1 *)((longlong)param_1 + 0x539) = param_4[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa8,param_4 + 8);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_18);
  FUN_1418475e0(*puVar5,5);
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



// FUNCTION 1419a4d40 FUN_1419a4d40 body=136 status=ok
// SIG undefined FUN_1419a4d40(void)

void FUN_1419a4d40(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar2 = *(undefined1 *)(param_2 + 1);
  uVar1 = *param_2;
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,param_2 + 2);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  *(undefined8 *)(lVar3 + 0x208) = uVar1;
  *(undefined1 *)(lVar3 + 0x210) = uVar2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x218,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 2);
  return;
}



// FUNCTION 1419a4dd0 FUN_1419a4dd0 body=499 status=ok
// SIG undefined FUN_1419a4dd0(void)

void FUN_1419a4dd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_res18;
  float local_res1c;
  undefined1 local_res20 [8];
  longlong local_28;
  longlong *local_20;
  
  FUN_14189cb10(DAT_1469f4590,&local_28);
  if (local_28 != 0) {
    plVar2 = *(longlong **)(local_28 + 0x2f0);
    plVar3 = *(longlong **)(local_28 + 0x2f8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)0x0;
    if (plVar3 == (longlong *)0x0) {
LAB_1419a4e5a:
      plVar6 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        plVar7 = plVar2;
      }
    }
    else {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar6 = plVar7, !bVar8) {
        LOCK();
        bVar8 = iVar5 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar8) goto LAB_1419a4e5a;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,local_res20);
      local_res18 = (float)local_res20._0_4_;
      local_res1c = (float)local_res20._4_4_;
      FUN_14183d4c0(DAT_1469f4590,param_1 + 0x350,&local_res18);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  uVar9 = 0;
  if (*(char *)(param_1 + 0x34c) == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(param_1 + 0x35c);
  }
  if (*(char *)(param_1 + 0x34a) == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x358);
  }
  if (*(char *)(param_1 + 0x34b) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(param_1 + 0x354);
  }
  if (*(char *)(param_1 + 0x349) != '\0') {
    uVar9 = *(undefined4 *)(param_1 + 0x350);
  }
  *(undefined4 *)(param_1 + 0x350) = uVar9;
  *(undefined4 *)(param_1 + 0x354) = uVar12;
  *(undefined4 *)(param_1 + 0x358) = uVar11;
  *(undefined4 *)(param_1 + 0x35c) = uVar10;
  return;
}



// FUNCTION 1419a4fd0 SetUseAllottedWidth body=7 status=ok
// SIG undefined SetUseAllottedWidth(void)

void SWrapBox::SetUseAllottedWidth(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x250) = param_2;
  return;
}



// FUNCTION 1419a4fe0 FUN_1419a4fe0 body=217 status=ok
// SIG undefined FUN_1419a4fe0(void)

void FUN_1419a4fe0(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0;
  local_28 = 0;
  if ((*(int *)(param_1 + 0x330) == 0) || (*(longlong **)(param_1 + 0x328) == (longlong *)0x0)) {
LAB_1419a502e:
    if ((*(char *)(param_1 + 0x324) == '\x01') && (param_2 == *(float *)(param_1 + 800))) {
      bVar1 = true;
      goto LAB_1419a5048;
    }
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x18))();
    if (cVar2 == '\0') goto LAB_1419a502e;
  }
  bVar1 = false;
LAB_1419a5048:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  if (!bVar1) {
    *(float *)(param_1 + 800) = param_2;
    local_30 = 0;
    local_28 = 0;
    *(undefined1 *)(param_1 + 0x324) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x328,&local_30,param_3,param_4,param_2)
    ;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
    FUN_1418475e0(param_1,1);
  }
  return;
}



// FUNCTION 1419a50c0 SetVAlign body=7 status=ok
// SIG undefined SetVAlign(void)

void SBackgroundBlur::SetVAlign(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x23c) = param_2;
  return;
}



// FUNCTION 1419a50d0 FUN_1419a50d0 body=22 status=ok
// SIG undefined FUN_1419a50d0(void)

void FUN_1419a50d0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x23c) != param_2) {
    *(int *)(param_1 + 0x23c) = param_2;
    FUN_1418475e0(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1419a50f0 SetVerticalScrollFraction body=110 status=ok
// SIG undefined SetVerticalScrollFraction(void)

undefined8 *
FSlateEditableTextLayout::SetVerticalScrollFraction
          (longlong param_1,undefined8 *param_2,float param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_res8 [8];
  
  fVar3 = 0.0;
  if ((0.0 <= param_3) && (fVar3 = param_3, 1.0 <= param_3)) {
    fVar3 = 1.0;
  }
  lVar1 = FTextLayout::GetSize(*(undefined8 *)(param_1 + 0x48),local_res8);
  uVar2 = CONCAT44(fVar3 * *(float *)(lVar1 + 4),(int)*(undefined8 *)(param_1 + 0x658));
  *(undefined8 *)(param_1 + 0x658) = uVar2;
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1419a5160 FUN_1419a5160 body=86 status=ok
// SIG undefined FUN_1419a5160(void)

void FUN_1419a5160(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = TAttribute<FOptionalSize>::IdenticalTo(param_1 + 0x268);
  if (cVar1 == '\0') {
    FUN_1418d3b60(param_1 + 0x268,param_2);
    FUN_1418475e0(param_1,5);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
  return;
}



// FUNCTION 1419a51c0 FUN_1419a51c0 body=142 status=ok
// SIG undefined FUN_1419a51c0(void)

void FUN_1419a51c0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0xa1) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x50c) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa2,param_2 + 2);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_18);
  FUN_1418475e0(*puVar5,5);
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



// FUNCTION 1419a5250 SetWrapWidth body=34 status=ok
// SIG undefined SetWrapWidth(void)

void SWrapBox::SetWrapWidth(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x208) = *param_2;
  *(undefined1 *)(param_1 + 0x20c) = *(undefined1 *)(param_2 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,param_2 + 2);
  return;
}



// FUNCTION 1419a5280 FUN_1419a5280 body=143 status=ok
// SIG undefined FUN_1419a5280(void)

void FUN_1419a5280(undefined8 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined1 *)(param_1 + 0xa7) = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x539) = param_2[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xa8,param_2 + 8);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_18);
  FUN_1418475e0(*puVar5,5);
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



// FUNCTION 1419a5310 FUN_1419a5310 body=126 status=ok
// SIG undefined FUN_1419a5310(void)

undefined1 * FUN_1419a5310(longlong param_1,undefined1 *param_2)

{
  float *pfVar1;
  char cVar2;
  undefined1 *puVar3;
  
  cVar2 = FUN_141846080();
  if (cVar2 != '\0') {
    *param_2 = DAT_1464b9ee8;
    return param_2;
  }
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x3c8) + 0x234);
  if (*pfVar1 <= 0.9999 && *pfVar1 != 0.9999) {
    puVar3 = (undefined1 *)TAttribute<EVisibility>::Get(param_1 + 0x388);
    *param_2 = *puVar3;
    return param_2;
  }
  *param_2 = DAT_1464b9ee9;
  return param_2;
}



// FUNCTION 1419a5390 ShouldDisplayTouchInterface body=87 status=ok
// SIG undefined ShouldDisplayTouchInterface(void)

undefined1 SVirtualJoystick::ShouldDisplayTouchInterface(void)

{
  char cVar1;
  char local_res8 [32];
  
  local_res8[0] = '\0';
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/Engine.InputSettings",L"bAlwaysShowTouchInterface",local_res8,
             &DAT_1468e2400);
  if (local_res8[0] == '\0') {
    cVar1 = FSlateApplication::IsFakingTouchEvents(DAT_1469f4590);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419a53f0 Slot body=81 status=ok
// SIG undefined Slot(void)

undefined8 * SScrollBox::Slot(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar1);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d741f0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419a5450 Slot body=102 status=ok
// SIG undefined Slot(void)

undefined8 * SSplitter::Slot(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d727e0;
    *(undefined4 *)(puVar1 + 4) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x3c) = 1;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419a54c0 GetItem body=15 status=ok
// SIG undefined GetItem(void)

undefined8 UTTLHUDMember::GetItem(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x218) + (longlong)param_2 * 8);
}



// FUNCTION 1419a54e0 FUN_1419a54e0 body=1873 status=ok
// SIG undefined FUN_1419a54e0(void)

void FUN_1419a54e0(undefined8 *param_1,float *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_138;
  undefined1 local_137;
  float local_134;
  float local_130;
  longlong local_128 [4];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  
  plVar11 = (longlong *)0x0;
  local_res8[0] = 0;
  if (*(char *)((longlong)param_1 + 0x73b) != '\0') {
    FUN_1419a1d70(param_1,param_1 + 0xe8,0);
    local_128[0] = 0;
    local_128[1] = 0;
    (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_128,param_1[9]);
    FText::FromString(local_e0,local_128);
    if (local_128[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,local_e0);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_d8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x73b) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x73c) != '\0') {
    local_128[2] = 0;
    local_128[3] = 0;
    (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_128 + 2,param_1[9]);
    FText::FromString(local_c8,local_128 + 2);
    if (local_128[2] != 0) {
      FMemory::Free();
    }
    (**(code **)(*(longlong *)*param_1 + 0xa0))
              ((longlong *)*param_1,local_c8,*(undefined4 *)(param_1 + 0xeb));
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_c0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x73c) = 0;
  }
  if (((param_1[0xbf] != 0) && (lVar7 = param_1[0xbd], lVar7 != 0)) &&
     ((*param_2 != *(float *)(lVar7 + 0x20) ||
      (((((param_2[1] != *(float *)(lVar7 + 0x24) || (param_2[3] != *(float *)(lVar7 + 0x2c))) ||
         (param_2[4] != *(float *)(lVar7 + 0x30))) ||
        ((param_2[5] != *(float *)(lVar7 + 0x34) || (param_2[6] != *(float *)(lVar7 + 0x38))))) ||
       (param_2[2] != *(float *)(lVar7 + 0x28))))))) {
    FGeometry::operator=((float *)(lVar7 + 0x20),param_2);
    (**(code **)(*(longlong *)param_1[0xbf] + 8))((longlong *)param_1[0xbf],1);
  }
  cVar3 = FSlateApplication::AllowMoveCursor(DAT_1469f4590);
  plVar12 = plVar11;
  if (cVar3 != '\0') {
    puVar6 = (undefined8 *)
             (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_f0);
    lVar7 = FUN_141845d20(*puVar6,&local_138);
    if ((*(char *)(lVar7 + 1) != '\0') || (*(char *)(param_1 + 0xef) != '\0')) {
LAB_1419a57c1:
      bVar2 = true;
      plVar12 = (longlong *)0x3;
      goto LAB_1419a5761;
    }
    if ((param_1[0xf0] != 0) && (param_1[0xf1] != 0)) {
      piVar1 = (int *)(param_1[0xf1] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) goto LAB_1419a57c1;
    }
    plVar12 = (longlong *)0x3;
  }
  bVar2 = false;
LAB_1419a5761:
  if (((ulonglong)plVar12 & 2) != 0) {
    plVar12 = (longlong *)(ulonglong)((uint)plVar12 & 0xfffffffd);
    local_137 = 0;
  }
  if ((((ulonglong)plVar12 & 1) != 0) && (local_e8 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_e8 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  plVar12 = plVar11;
  if ((!bVar2) && (plVar12 = (longlong *)FUN_1404b03b0(), *(char *)(param_1 + 0x87) != '\0')) {
    plVar12 = (longlong *)TAttribute<FText>::Get();
  }
  FUN_14199e240(param_1,plVar12,0);
  uVar8 = FUN_1404b03b0();
  if (*(char *)(param_1 + 0x97) != '\0') {
    uVar8 = TAttribute<FText>::Get();
  }
  puVar6 = param_1 + 0x9a;
  cVar3 = FTextSnapshot::IdenticalTo(puVar6,uVar8);
  if (cVar3 == '\0') {
    cVar3 = FTextSnapshot::IsDisplayStringEqualTo(puVar6,uVar8);
    if (cVar3 == '\0') {
      FText::operator=(param_1 + 0x9d,uVar8);
      *(undefined4 *)(param_1 + 0xa0) = 1;
      FUN_14196abc0(param_1,0);
    }
    puVar9 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_b0,uVar8);
    if (puVar6 != puVar9) {
      *puVar6 = *puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x9b,puVar9 + 1);
    }
    *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(puVar9 + 2);
    *(undefined2 *)((longlong)param_1 + 0x4e2) = *(undefined2 *)((longlong)puVar9 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x4e4) = *(undefined4 *)((longlong)puVar9 + 0x14);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_a8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  FUN_1419401f0(param_1 + 0xd);
  fVar13 = (float)FTextEditHelper::CalculateCaretWidth();
  if (((*(int *)(param_1 + 0xa6) != 0) && ((longlong *)param_1[0xa5] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0xa5] + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0xa6) != 0) {
      plVar11 = (longlong *)param_1[0xa5];
    }
    uVar4 = (**(code **)(*plVar11 + 0x38))(plVar11);
    *(undefined1 *)(param_1 + 0xa4) = uVar4;
  }
  fVar15 = 0.0;
  if ((((*(char *)(param_1 + 0xa4) != '\0') && (*(float *)((longlong)param_1 + 0x75c) == 0.0)) &&
      (*(float *)(param_1 + 0xec) == 0.0)) ||
     (cVar3 = (**(code **)(*(longlong *)*param_1 + 0x10))(), uVar4 = DAT_1464b9ee8, cVar3 == '\0'))
  {
    uVar4 = DAT_1464b9ee9;
  }
  if (*(char *)((longlong)param_1 + 0x66c) != '\0') {
    lVar7 = param_1[9];
    iVar5 = FTextLayout::GetLineViewIndexForTextLocation
                      (lVar7,(longlong *)(lVar7 + 0x28),param_1 + 0xcc,
                       *(char *)(param_1 + 0xcd) == '\x01');
    if ((-1 < iVar5) && (iVar5 < *(int *)(lVar7 + 0x30))) {
      fVar18 = 1.0 / *(float *)(param_1[9] + 0x8c);
      lVar7 = (longlong)iVar5 * 0x58 + *(longlong *)(lVar7 + 0x28);
      fVar16 = *(float *)(lVar7 + 0x34);
      fVar17 = fVar16 * fVar18;
      fVar16 = (fVar16 + *(float *)(lVar7 + 0x3c)) * fVar18;
      pfVar10 = (float *)FUN_1419409d0(param_1[9],local_108,param_1 + 0xcc,
                                       *(char *)(param_1 + 0xcd) == '\x01');
      fVar18 = fVar18 * *pfVar10;
      if (0.0 <= fVar18) {
        if (*param_2 < fVar13 + fVar18) {
          *(float *)(param_1 + 0xcb) = ((fVar13 + fVar18) - *param_2) + *(float *)(param_1 + 0xcb);
        }
      }
      else {
        *(float *)(param_1 + 0xcb) = fVar18 + *(float *)(param_1 + 0xcb);
      }
      if (0.0 <= fVar17) {
        if (param_2[1] < fVar16) {
          *(float *)((longlong)param_1 + 0x65c) =
               (fVar16 - param_2[1]) + *(float *)((longlong)param_1 + 0x65c);
        }
      }
      else {
        *(float *)((longlong)param_1 + 0x65c) = fVar17 + *(float *)((longlong)param_1 + 0x65c);
      }
    }
    if (*(char *)((longlong)param_1 + 0x66c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x66c) = 0;
    }
  }
  pfVar10 = (float *)FTextLayout::GetSize(param_1[9],local_100);
  fVar13 = *pfVar10;
  if ((*param_2 <= 0.0) || (fVar13 <= 0.0)) {
    fVar16 = 1.0;
  }
  else {
    fVar16 = *param_2 / fVar13;
  }
  if (((fVar13 <= 0.0) || (1.0 <= fVar16)) ||
     (fVar17 = *(float *)(param_1 + 0xcb) / fVar13, fVar17 < 0.0)) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = 1.0 - fVar16;
    if (fVar17 <= 1.0 - fVar16) {
      fVar18 = fVar17;
    }
  }
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,uVar4);
  *(float *)(param_1 + 0xcb) = fVar18 * fVar13;
  uVar14 = (**(code **)(*(longlong *)*param_1 + 0xb0))
                     ((longlong *)*param_1,fVar18,fVar16,local_res8);
  *(undefined4 *)(param_1 + 0xcb) = uVar14;
  lVar7 = FTextLayout::GetSize(param_1[9],local_f8);
  fVar13 = *(float *)(lVar7 + 4);
  if ((param_2[1] <= 0.0) || (fVar13 <= 0.0)) {
    fVar16 = 1.0;
  }
  else {
    fVar16 = param_2[1] / fVar13;
  }
  if (((0.0 < fVar13) && (fVar16 < 1.0)) &&
     ((fVar17 = *(float *)((longlong)param_1 + 0x65c) / fVar13, 0.0 <= fVar17 &&
      (fVar15 = 1.0 - fVar16, fVar17 <= 1.0 - fVar16)))) {
    fVar15 = fVar17;
  }
  *(float *)((longlong)param_1 + 0x65c) = fVar15 * fVar13;
  local_res10[0] = uVar4;
  uVar14 = (**(code **)(*(longlong *)*param_1 + 0xb8))
                     ((longlong *)*param_1,fVar15,fVar16,local_res10);
  *(undefined4 *)((longlong)param_1 + 0x65c) = uVar14;
  local_134 = *(float *)(param_1[9] + 0x8c);
  local_130 = local_134 * *(float *)((longlong)param_1 + 0x65c);
  local_134 = local_134 * *(float *)(param_1 + 0xcb);
  FTextLayout::SetVisibleRegion(param_1[9],param_2,&local_134);
  return;
}



// FUNCTION 1419a5c40 FUN_1419a5c40 body=349 status=ok
// SIG undefined FUN_1419a5c40(void)

void FUN_1419a5c40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x46b) != '\0') {
    if ((bool)*(char *)(param_1 + 0x46d) != (DAT_1464bfec8 != 0)) {
      *(bool *)(param_1 + 0x46d) = DAT_1464bfec8 != 0;
      *(undefined1 *)(param_1 + 0x468) = 1;
    }
    if (*(char *)(param_1 + 0x469) != '\0') {
      plVar6 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
      plVar3 = (longlong *)plVar6[1];
      lVar4 = *plVar6;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_10 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (lVar4 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = lVar4 + 0x300;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
      }
      local_20 = plVar3;
      FUN_141804510(param_1,&local_28);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (local_20 != (longlong *)0x0)) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar3 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      *(undefined1 *)(param_1 + 0x469) = 0;
    }
  }
  return;
}



// FUNCTION 1419a5da0 Tick body=140 status=ok
// SIG undefined Tick(void)

void SNotificationExtendable::Tick(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar2 = FUN_141847f30(param_1 + 0x390);
  cVar3 = FCurveSequence::EnsureSlateTickDuringAnimation(param_1 + 0x390);
  cVar4 = FCurveSequence::EnsureSlateTickDuringAnimation(param_1 + 0x3f8);
  if ((cVar3 == '\0') && (cVar2 != '\0')) {
    FUN_1419829e0(param_1);
  }
  if ((cVar4 == '\0') && (*(int *)(param_1 + 0x4d8) != -1)) {
    uVar1 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(uVar1,param_1 + 0x4d8);
  }
  return;
}



// FUNCTION 1419a5e30 FUN_1419a5e30 body=1193 status=ok
// SIG undefined FUN_1419a5e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419a5e30(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  byte bVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float local_e8;
  float local_e4;
  undefined1 local_b0 [56];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FGeometry::operator=(param_1 + 0x394);
  if ((*(char *)(param_1 + 0x438) < '\0') &&
     (dVar6 = (double)(**(code **)(*DAT_1469f4590 + 0x40))(),
     0.1 < dVar6 - *(double *)(param_1 + 0x430))) {
    FInertialScrollManager::ClearScrollVelocity(param_1 + 0x330);
  }
  if (*(int *)(param_1 + 0x410) == 0) goto LAB_1419a5faa;
  plVar11 = *(longlong **)(param_1 + 0x400);
  lVar7 = 0;
  if (plVar11 == (longlong *)0x0) {
    lVar7 = param_1 + 0x3e0;
  }
  if (lVar7 == 0 && plVar11 == (longlong *)0x0) goto LAB_1419a5faa;
  local_128 = *param_2;
  uStack_120 = param_2[1];
  local_118 = param_2[2];
  uStack_110 = param_2[3];
  local_108 = *(undefined4 *)(param_2 + 4);
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_100 = *(undefined4 *)(param_2 + 5);
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_f8 = param_2[6];
  if (*(int *)(param_1 + 0x410) == 0) {
LAB_1419a5f38:
    uVar8 = 0;
  }
  else {
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)(param_1 + 0x3e0);
    }
    if (plVar11 == (longlong *)0x0) goto LAB_1419a5f38;
    uVar8 = (**(code **)(*plVar11 + 8))();
  }
  (**(code **)(param_1 + 0x3d0))(uVar8,&local_128);
  if (*(int *)(param_1 + 0x410) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x400);
    if (*(longlong **)(param_1 + 0x400) == (longlong *)0x0) {
      plVar11 = (longlong *)(param_1 + 0x3e0);
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    uVar8 = FMemory::Realloc(*(longlong *)(param_1 + 0x400),0,0);
    *(undefined8 *)(param_1 + 0x400) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(code **)(param_1 + 0x3d0) = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1419a5faa:
  plVar11 = *(longlong **)(param_1 + 0x300);
  local_168 = *(undefined8 *)(param_1 + 0x2f8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_160 = plVar11;
  FUN_14182e310(param_1,&local_e8,param_2,&local_168);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  pfVar9 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_148);
  fVar12 = pfVar9[1];
  if (*(int *)(param_1 + 0x378) != 1) {
    fVar12 = *pfVar9;
  }
  if ((*(byte *)(param_1 + 0x438) & 0x10) != 0) {
    if (*(int *)(param_1 + 0x378) == 1) {
      local_e8 = local_e4;
    }
    fVar12 = fVar12 - local_e8;
    *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xef;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(float *)(param_1 + 0x2f0) = fVar12;
  }
  fVar12 = (float)FUN_141985b10(param_1);
  plVar11 = *(longlong **)(param_1 + 0x300);
  local_158 = *(undefined8 *)(param_1 + 0x2f8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_150 = plVar11;
  FUN_14182e310(param_1,local_b0,param_1 + 0x394,&local_158);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  pfVar9 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_140);
  fVar14 = pfVar9[1];
  if (*(int *)(param_1 + 0x378) != 1) {
    fVar14 = *pfVar9;
  }
  fVar13 = (float)FUN_141985b10(param_1);
  fVar14 = *(float *)(param_1 + 0x2f0) / fVar14;
  fVar15 = 0.0;
  if ((0.0 <= fVar14) && (fVar15 = fVar14, 1.0 - fVar13 <= fVar14)) {
    fVar15 = 1.0 - fVar13;
  }
  pfVar9 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x2f8),local_138);
  if (*(int *)(param_1 + 0x378) == 1) {
    pfVar9 = pfVar9 + 1;
  }
  fVar14 = *pfVar9 * fVar15;
  if (*(char *)(param_1 + 0x354) == '\0') {
    fVar13 = (float)FOverscroll::GetOverscroll(param_1 + 0x350,param_2);
    fVar14 = fVar13 + fVar14;
  }
  bVar4 = *(byte *)(param_1 + 0x438);
  bVar10 = 0;
  lVar7 = *(longlong *)(param_1 + 0x2f8);
  if (0.001 < ABS(fVar14 - *(float *)(lVar7 + 0x208))) {
    bVar10 = 4;
  }
  *(byte *)(param_1 + 0x438) = bVar10 | bVar4 & 0xfb;
  if ((bVar4 & 8) != 0) {
    fVar14 = (float)FMath::FInterpTo(*(undefined4 *)(lVar7 + 0x208),fVar14,param_4,0x41700000);
    lVar7 = *(longlong *)(param_1 + 0x2f8);
  }
  *(float *)(lVar7 + 0x208) = fVar14;
  if (((bVar4 & 4) != 0) && ((*(byte *)(param_1 + 0x438) & 4) == 0)) {
    FUN_1418475e0(param_1,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
  }
  lVar7 = *(longlong *)(param_1 + 0x308);
  lVar5 = *(longlong *)(lVar7 + 0x3c8);
  if ((fVar15 != *(float *)(lVar5 + 0x230)) || (fVar12 != *(float *)(lVar5 + 0x234))) {
    *(float *)(lVar5 + 0x230) = fVar15;
    *(float *)(lVar5 + 0x234) = fVar12;
    uVar8 = (**(code **)(*DAT_1469f4590 + 0x40))();
    *(undefined8 *)(lVar7 + 0x3f8) = uVar8;
    lVar7 = *(longlong *)(param_1 + 0x308);
  }
  pfVar9 = (float *)(*(longlong *)(lVar7 + 0x3c8) + 0x234);
  if (0.9999 < *pfVar9 || *pfVar9 == 0.9999) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x208) = 0;
  }
  return;
}



// FUNCTION 1419a62e0 FUN_1419a62e0 body=200 status=ok
// SIG undefined FUN_1419a62e0(void)

void FUN_1419a62e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x2f8);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x2f0);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      (**(code **)(*plVar6 + 0x28))(plVar6);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 1419a63b0 FUN_1419a63b0 body=2132 status=ok
// SIG undefined FUN_1419a63b0(void)

void FUN_1419a63b0(longlong *param_1,float *param_2,undefined8 param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_res8;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  
  uVar6 = 0;
  uVar12 = 0;
  if (*(uint *)(param_1 + 0x46) - 4 < 2) {
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x46) < 2) {
      fVar16 = *(float *)(param_1 + 0x43);
    }
    else {
      fVar16 = *(float *)((longlong)param_1 + 0x21c);
    }
    *(float *)(param_1 + 0x47) =
         (fVar16 - *(float *)(param_1 + 0x47)) * param_4 * 3.0 + *(float *)(param_1 + 0x47);
  }
  local_res8 = 0;
  uVar8 = uVar6;
  uVar9 = uVar6;
  uVar14 = uVar6;
  if (0 < (int)param_1[0x42]) {
    do {
      lVar3 = param_1[0x41];
      iVar13 = (int)uVar14;
      uVar7 = (uint)uVar8;
      if (*(char *)(uVar9 + lVar3 + 0xca) != '\0') {
        fVar16 = param_4 + *(float *)(uVar9 + lVar3 + 0xbc);
        *(float *)(uVar9 + lVar3 + 0xbc) = fVar16;
        if (*(float *)(param_1 + 0x45) <= fVar16 && fVar16 != *(float *)(param_1 + 0x45)) {
          *(undefined1 *)(uVar9 + lVar3 + 0xca) = 0;
          puVar11 = (undefined8 *)(uVar9 + lVar3 + 0xc0);
          *(int *)(param_1 + 0x47) = (int)param_1[0x43];
          if ((*(byte *)((longlong)param_1 + 0x234) & 4) == 0) {
            *(undefined8 *)(uVar9 + lVar3 + 0x88) = *puVar11;
          }
          (**(code **)(*param_1 + 0x210))(param_1,uVar14,puVar11,param_2);
          uVar7 = local_res8;
        }
      }
      if (*(char *)(uVar9 + lVar3 + 0xc9) == '\0') {
        fVar16 = param_2[2];
        fVar19 = *param_2;
        fVar17 = param_2[1];
        fVar18 = fVar17 * fVar16;
        if (fVar17 * fVar16 <= fVar19 * fVar16) {
          fVar18 = fVar19 * fVar16;
        }
        fVar2 = *(float *)(uVar9 + lVar3 + 0x24);
        fVar16 = (fVar18 * 0.0009765625) / fVar16;
        if (-1.0 <= fVar2) {
          if (0.0 <= fVar2) {
            if (1.0 < fVar2) {
              fVar17 = fVar2 * fVar16;
            }
            else {
              fVar17 = fVar2 * fVar17;
            }
          }
          else {
            fVar17 = (fVar2 + 1.0) * fVar17;
          }
        }
        else {
          fVar17 = fVar2 * fVar16 + fVar17;
        }
        fVar18 = *(float *)(uVar9 + lVar3 + 0x20);
        if (-1.0 <= fVar18) {
          if (0.0 <= fVar18) {
            if (1.0 < fVar18) {
              fVar19 = fVar18 * fVar16;
            }
            else {
              fVar19 = fVar19 * fVar18;
            }
          }
          else {
            fVar19 = (fVar18 + 1.0) * fVar19;
          }
        }
        else {
          fVar19 = fVar18 * fVar16 + fVar19;
        }
        fVar18 = *(float *)(uVar9 + lVar3 + 0x2c);
        pfVar1 = (float *)(uVar9 + lVar3 + 0x88);
        *pfVar1 = (float)(int)fVar19;
        pfVar1[1] = (float)(int)fVar17;
        pfVar1[2] = (float)(int)fVar19;
        pfVar1[3] = (float)(int)fVar17;
        fVar19 = param_2[1];
        if (-1.0 <= fVar18) {
          if (0.0 <= fVar18) {
            if (1.0 < fVar18) {
              fVar19 = fVar18 * fVar16;
            }
            else {
              fVar19 = fVar19 * fVar18;
            }
          }
          else {
            fVar19 = (fVar18 + 1.0) * fVar19;
          }
        }
        else {
          fVar19 = fVar18 * fVar16 + fVar19;
        }
        fVar17 = *(float *)(uVar9 + lVar3 + 0x28);
        fVar18 = *param_2;
        if (-1.0 <= fVar17) {
          if (0.0 <= fVar17) {
            if (1.0 < fVar17) {
              fVar18 = fVar17 * fVar16;
            }
            else {
              fVar18 = fVar17 * fVar18;
            }
          }
          else {
            fVar18 = (fVar17 + 1.0) * fVar18;
          }
        }
        else {
          fVar18 = fVar17 * fVar16 + fVar18;
        }
        *(float *)(uVar9 + lVar3 + 0x9c) = (float)(int)fVar19;
        *(float *)(uVar9 + lVar3 + 0x98) = (float)(int)fVar18;
        fVar19 = *(float *)(uVar9 + lVar3 + 0x3c);
        fVar17 = param_2[1];
        if (-1.0 <= fVar19) {
          if (0.0 <= fVar19) {
            if (1.0 < fVar19) {
              fVar17 = fVar19 * fVar16;
            }
            else {
              fVar17 = fVar17 * fVar19;
            }
          }
          else {
            fVar17 = (fVar19 + 1.0) * fVar17;
          }
        }
        else {
          fVar17 = fVar19 * fVar16 + fVar17;
        }
        fVar19 = *param_2;
        fVar18 = *(float *)(uVar9 + lVar3 + 0x38);
        if (-1.0 <= fVar18) {
          if (0.0 <= fVar18) {
            if (1.0 < fVar18) {
              fVar19 = fVar18 * fVar16;
            }
            else {
              fVar19 = fVar18 * fVar19;
            }
          }
          else {
            fVar19 = (fVar18 + 1.0) * fVar19;
          }
        }
        else {
          fVar19 = fVar18 * fVar16 + fVar19;
        }
        *(float *)(uVar9 + lVar3 + 0xac) = (float)(int)fVar17;
        *(float *)(uVar9 + lVar3 + 0xa8) = (float)(int)fVar19;
        fVar19 = *(float *)(uVar9 + lVar3 + 0x34);
        fVar17 = param_2[1];
        if (-1.0 <= fVar19) {
          if (0.0 <= fVar19) {
            if (1.0 < fVar19) {
              fVar17 = fVar19 * fVar16;
            }
            else {
              fVar17 = fVar17 * fVar19;
            }
          }
          else {
            fVar17 = (fVar19 + 1.0) * fVar17;
          }
        }
        else {
          fVar17 = fVar19 * fVar16 + fVar17;
        }
        fVar19 = *param_2;
        fVar18 = *(float *)(uVar9 + lVar3 + 0x30);
        if (-1.0 <= fVar18) {
          if (0.0 <= fVar18) {
            if (1.0 < fVar18) {
              fVar19 = fVar18 * fVar16;
            }
            else {
              fVar19 = fVar18 * fVar19;
            }
          }
          else {
            fVar19 = (fVar18 + 1.0) * fVar19;
          }
        }
        else {
          fVar19 = fVar18 * fVar16 + fVar19;
        }
        *(undefined1 *)(uVar9 + lVar3 + 0xc9) = 1;
        *(float *)(uVar9 + lVar3 + 0xa4) = (float)(int)fVar17;
        *(float *)(uVar9 + lVar3 + 0xa0) = (float)(int)fVar19;
        *(undefined8 *)(uVar9 + lVar3 + 0xb0) = *(undefined8 *)(uVar9 + lVar3 + 0x40);
      }
      iVar5 = *(int *)(uVar9 + lVar3 + 0xb8);
      if ((-1 < iVar5) || (*(char *)(uVar9 + lVar3 + 200) != '\0')) {
        *(undefined1 *)(uVar9 + lVar3 + 200) = 0;
        cVar4 = FKey::IsValid(uVar9 + lVar3 + 0x48);
        if (cVar4 == '\0') {
          uVar15 = DAT_1469e5ba8;
          local_e0 = DAT_1469e5ba8;
          if (iVar13 == 0) {
            uVar15 = DAT_1469e5b98;
            local_e0 = DAT_1469e5b98;
          }
        }
        else {
          puVar11 = (undefined8 *)FKey::GetFName(uVar9 + lVar3 + 0x48,local_e8);
          uVar15 = *puVar11;
        }
        cVar4 = FKey::IsValid(uVar9 + lVar3 + 0x60);
        if (cVar4 == '\0') {
          uVar10 = DAT_1469e5bb0;
          local_d0 = DAT_1469e5bb0;
          if (iVar13 == 0) {
            uVar10 = DAT_1469e5ba0;
            local_d0 = DAT_1469e5ba0;
          }
        }
        else {
          puVar11 = (undefined8 *)FKey::GetFName(uVar9 + lVar3 + 0x60,local_d8);
          uVar10 = *puVar11;
        }
        FUN_1418c0e60(DAT_1469f4590,2);
        (**(code **)(*(longlong *)(DAT_1469f4590 + 0x78) + 0x80))
                  ((longlong *)(DAT_1469f4590 + 0x78),uVar15,0);
        (**(code **)(*(longlong *)(DAT_1469f4590 + 0x78) + 0x80))
                  ((longlong *)(DAT_1469f4590 + 0x78),uVar10);
        iVar5 = *(int *)(uVar9 + lVar3 + 0xb8);
        uVar7 = local_res8;
      }
      uVar12 = uVar7 + 1;
      if (iVar5 == -1) {
        uVar12 = uVar7;
      }
      uVar8 = (ulonglong)uVar12;
      uVar9 = uVar9 + 0xd0;
      uVar14 = (ulonglong)(iVar13 + 1U);
      local_res8 = uVar12;
    } while ((int)(iVar13 + 1U) < (int)param_1[0x42]);
    if (0 < (int)uVar12) goto LAB_1419a6bdf;
  }
  if ((*(byte *)((longlong)param_1 + 0x234) & 4) == 0) {
    iVar13 = (int)param_1[0x46];
    if (iVar13 == 0) {
      if (uVar12 != 0) {
        return;
      }
      *(int *)((longlong)param_1 + 0x23c) = (int)param_1[0x44];
      *(undefined4 *)(param_1 + 0x46) = 1;
      return;
    }
    if (iVar13 == 1) {
      param_4 = *(float *)((longlong)param_1 + 0x23c) - param_4;
      *(float *)((longlong)param_1 + 0x23c) = param_4;
      if (0.0 < param_4) {
        return;
      }
      if (0.0 < *(float *)((longlong)param_1 + 0x224)) {
        *(float *)((longlong)param_1 + 0x23c) = *(float *)((longlong)param_1 + 0x224);
        *(undefined4 *)(param_1 + 0x46) = 2;
        return;
      }
    }
    else if (iVar13 == 2) {
      param_4 = *(float *)((longlong)param_1 + 0x23c) - param_4;
      *(float *)((longlong)param_1 + 0x23c) = param_4;
      if (0.0 < param_4) {
        return;
      }
      uVar8 = uVar6;
      if (0 < (int)param_1[0x42]) {
        do {
          uVar12 = (int)uVar8 + 1;
          *(undefined8 *)(uVar6 + param_1[0x41] + 0x88) =
               *(undefined8 *)(uVar6 + param_1[0x41] + 0x90);
          uVar6 = uVar6 + 0xd0;
          uVar8 = (ulonglong)uVar12;
        } while ((int)uVar12 < (int)param_1[0x42]);
        *(undefined4 *)(param_1 + 0x46) = 3;
        return;
      }
    }
    else {
      if (iVar13 == 4) {
        *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)((longlong)param_1 + 0x22c);
        *(undefined4 *)(param_1 + 0x46) = 5;
        return;
      }
      if (iVar13 != 5) {
        return;
      }
      param_4 = *(float *)((longlong)param_1 + 0x23c) - param_4;
      *(float *)((longlong)param_1 + 0x23c) = param_4;
      if (0.0 < param_4) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x46) = 3;
    return;
  }
LAB_1419a6bdf:
  *(undefined4 *)(param_1 + 0x46) = 0;
  return;
}



// FUNCTION 1419a6c10 Tick body=86 status=ok
// SIG undefined Tick(void)

void SWrapBox::Tick(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x250) != '\0') {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x208) = uVar1;
    *(undefined1 *)(param_1 + 0x20c) = 1;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x210,&local_20,param_3,param_4,uVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1419a6c70 TranslateLocationVertical body=273 status=ok
// SIG undefined TranslateLocationVertical(void)

void FSlateEditableTextLayout::TranslateLocationVertical
               (longlong param_1,undefined8 param_2,int param_3,float param_4,undefined8 *param_5,
               char *param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float local_res8;
  float local_resc;
  char local_res18 [8];
  undefined1 local_38 [32];
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar6 + 0x30) + -1;
  iVar2 = FTextLayout::GetLineViewIndexForTextLocation
                    (lVar6,(longlong *)(lVar6 + 0x28),param_2,*(char *)(param_1 + 0x688) == '\x01');
  iVar2 = iVar2 + param_3;
  iVar5 = 0;
  if ((-1 < iVar2) && (iVar5 = iVar4, iVar2 < iVar4)) {
    iVar5 = iVar2;
  }
  local_res8 = param_4 * *(float *)(param_1 + 0x67c);
  lVar6 = (longlong)iVar5 * 0x58 + *(longlong *)(lVar6 + 0x28);
  local_res18[0] = '\0';
  local_resc = param_4 * *(float *)(lVar6 + 0x34);
  puVar3 = (undefined8 *)
           FUN_141942d70(*(undefined8 *)(param_1 + 0x48),local_38,lVar6,&local_res8,local_res18);
  uVar1 = *puVar3;
  *param_5 = uVar1;
  if (local_res18[0] == '\x02') {
    iVar2 = (int)((ulonglong)uVar1 >> 0x20) + -1;
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    *param_5 = CONCAT44(iVar5,(int)uVar1);
    if (local_res18 != param_6) {
      param_6[0] = '\x01';
      param_6[1] = '\x01';
    }
  }
  return;
}



// FUNCTION 1419a6d90 TranslateMouseCoordinateFor3DChild body=75 status=ok
// SIG undefined TranslateMouseCoordinateFor3DChild(void)

undefined8 * SViewport::TranslateMouseCoordinateFor3DChild(longlong param_1,undefined8 *param_2)

{
  if (*(longlong **)(param_1 + 0x348) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x348) + 0x18))();
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1419a6de0 TranslatedLocation body=222 status=ok
// SIG undefined TranslatedLocation(void)

int * FSlateEditableTextLayout::TranslatedLocation
                (longlong param_1,int *param_2,int *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
            (*(longlong **)(param_1 + 8),
             *(undefined8 *)((longlong)*param_3 * 0x70 + *(longlong *)(lVar1 + 0x18)));
  lVar2 = **(longlong **)(param_1 + 8);
  if (param_4 < '\x01') {
    iVar3 = (**(code **)(lVar2 + 0x50))(*(longlong **)(param_1 + 8),param_3[1]);
  }
  else {
    iVar3 = (**(code **)(lVar2 + 0x58))();
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  if (iVar3 == -1) {
    if (param_4 < '\x01') {
      iVar3 = *param_3;
      if (0 < iVar3) {
        lVar1 = *(longlong *)((longlong)iVar3 * 0x70 + -0x70 + *(longlong *)(lVar1 + 0x18));
        *param_2 = iVar3 + -1;
        iVar4 = *(int *)(lVar1 + 8);
        iVar3 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        param_2[1] = iVar3;
        return param_2;
      }
    }
    else if (*param_3 < *(int *)(lVar1 + 0x20) + -1) {
      iVar4 = *param_3 + 1;
      param_2[1] = 0;
      goto LAB_1419a6ea0;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
  }
  else {
    iVar4 = *param_3;
    param_2[1] = iVar3;
LAB_1419a6ea0:
    *param_2 = iVar4;
  }
  return param_2;
}



// FUNCTION 1419a6ec0 Undo body=530 status=ok
// SIG undefined Undo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSlateEditableTextLayout::Undo(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [24];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar6 = (*(code *)**(undefined8 **)*param_1)();
  if (((cVar6 == '\0') && (0 < *(int *)(param_1 + 0xd4))) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0xbd] + 8))(), cVar6 == '\0')) {
    iVar9 = *(int *)(param_1 + 0xd5);
    if (iVar9 == -1) {
      iVar9 = *(int *)(param_1 + 0xd4);
      FText::FText(local_68);
      local_48 = 0;
      local_30 = 0;
      local_40 = 0;
      local_38 = 0;
      MakeUndoState(param_1,local_68);
      PushUndoState(param_1,local_68);
      local_48 = 0;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    iVar9 = iVar9 + -1;
    if (-1 < iVar9) {
      lVar10 = (longlong)iVar9 * 0x40 + param_1[0xd3];
      SaveText(param_1,lVar10);
      cVar6 = FUN_1419a1d70(param_1,lVar10,0);
      if (cVar6 != '\0') {
        (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,lVar10);
      }
      puVar8 = (undefined4 *)SlateEditableTextTypes::FCursorInfo::CreateUndo(lVar10 + 0x28,local_80)
      ;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined4 *)(param_1 + 0xd0) = *puVar8;
      *(undefined4 *)((longlong)param_1 + 0x684) = uVar3;
      *(undefined4 *)(param_1 + 0xd1) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x68c) = uVar5;
      param_1[0xd2] = *(undefined8 *)(puVar8 + 4);
      if ((undefined8 *)(lVar10 + 0x18) != param_1 + 0xce) {
        if (*(char *)(param_1 + 0xcf) != '\0') {
          *(undefined1 *)(param_1 + 0xcf) = 0;
        }
        if (*(char *)(lVar10 + 0x20) != '\0') {
          param_1[0xce] = *(undefined8 *)(lVar10 + 0x18);
          *(undefined1 *)(param_1 + 0xcf) = 1;
        }
      }
      local_88 = *(undefined4 *)(param_1 + 0xd0);
      iVar7 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
      local_84 = 0;
      if (-1 < iVar7) {
        local_84 = iVar7;
      }
      (**(code **)(*(longlong *)*param_1 + 0xa8))((longlong *)*param_1,&local_88);
      FUN_1419a7100(param_1);
      *(int *)(param_1 + 0xd5) = iVar9;
    }
  }
  return;
}



// FUNCTION 1419a7100 FUN_1419a7100 body=3290 status=ok
// SIG undefined FUN_1419a7100(void)

void FUN_1419a7100(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  int *piVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 uVar23;
  int iVar24;
  bool bVar25;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_f4;
  char local_f3;
  longlong *local_f0;
  int local_e8;
  uint uStack_e4;
  int local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  int local_b0;
  int iStack_ac;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  longlong *local_58;
  
  iVar13 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  iVar9 = 0;
  if (-1 < iVar13) {
    iVar9 = iVar13;
  }
  local_res10 = CONCAT44(iVar9,*(undefined4 *)(param_1 + 0xd0));
  local_78 = local_res10;
  local_70 = CONCAT31(local_70._1_3_,*(undefined1 *)(param_1 + 0xd1));
  if (&local_78 != param_1 + 0xcc) {
    param_1[0xcc] = local_res10;
    *(undefined4 *)(param_1 + 0xcd) = local_70;
    *(undefined1 *)((longlong)param_1 + 0x66c) = 1;
  }
  (**(code **)(*(longlong *)*param_1 + 0x58))();
  lVar11 = param_1[9];
  plVar21 = param_1 + 0xc9;
  piVar12 = (int *)*plVar21;
  uVar17 = (ulonglong)*(int *)(param_1 + 0xca);
  piVar19 = piVar12 + uVar17 * 8;
  local_f0 = plVar21;
  if (piVar12 != piVar19) {
    do {
      if ((-1 < *piVar12) && (*piVar12 < *(int *)(lVar11 + 0x20))) {
        FTextLayout::RemoveLineHighlight(param_1[9],piVar12);
      }
      piVar12 = piVar12 + 8;
    } while (piVar12 != piVar19);
    uVar17 = (ulonglong)*(uint *)(param_1 + 0xca);
  }
  if ((int)uVar17 != 0) {
    plVar20 = (longlong *)(*plVar21 + 0x18);
    do {
      plVar3 = (longlong *)*plVar20;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar12 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar20 = plVar20 + 4;
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 != 0);
  }
  *(undefined4 *)(param_1 + 0xca) = 0;
  if (*(int *)((longlong)param_1 + 0x654) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar21,0);
  }
  piVar12 = (int *)(param_1 + 0xce);
  iVar9 = *(int *)(param_1 + 0xd0);
  local_e8 = iVar9;
  uVar8 = (uint)(*(char *)(param_1 + 0xd1) == '\x01') + *(int *)((longlong)param_1 + 0x684);
  uVar16 = 0;
  if (-1 < (int)uVar8) {
    uVar16 = uVar8;
  }
  uStack_e4 = uVar16;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    piVar12 = &local_e8;
  }
  plVar21 = *(longlong **)piVar12;
  local_90 = plVar21;
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,local_60)
  ;
  lVar11 = FUN_141845d20(*puVar10,&local_f4);
  cVar2 = *(char *)(lVar11 + 1);
  if (local_f3 != '\0') {
    local_f3 = '\0';
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_58 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    iVar9 = local_e8;
    uVar16 = uStack_e4;
    if ((int)lVar11 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar12 = (int *)((longlong)local_58 + 0xc);
      iVar13 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      iVar9 = local_e8;
      uVar16 = uStack_e4;
      if (iVar13 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
        iVar9 = local_e8;
        uVar16 = uStack_e4;
      }
    }
  }
  cVar5 = (**(code **)(*(longlong *)param_1[0xbd] + 8))();
  if (((int)plVar21 != iVar9) || (bVar25 = false, (uint)((ulonglong)plVar21 >> 0x20) != uVar16)) {
    bVar25 = true;
  }
  cVar6 = FText::IsEmpty(param_1 + 0x9d);
  cVar7 = (*(code *)**(undefined8 **)*param_1)();
  if (cVar6 == '\0') {
    puVar10 = (undefined8 *)FText::ToString(param_1 + 0x9d);
    local_e0 = 0;
    local_a8 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      local_a8 = 0;
    }
    local_98 = (longlong *)(param_1[9] + 0x18);
    local_d0 = puVar10;
    if (0 < *(int *)(param_1[9] + 0x20)) {
      local_c8 = (undefined8 *)0x0;
      do {
        plVar21 = local_f0;
        iVar13 = 0;
        local_a0 = (longlong *)(*local_98 + (longlong)local_c8);
        iVar9 = *(int *)(*local_a0 + 8) + -1;
        if (*(int *)(*local_a0 + 8) == 0) {
          iVar9 = 0;
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar9);
        if (0 < iVar9) {
          do {
            if (*(int *)(puVar10 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar10;
            }
            iVar9 = FUN_141592950(*local_a0,puVar15,*(undefined4 *)(param_1 + 0xa0),0,iVar13);
            puVar10 = local_d0;
            if (iVar9 == -1) break;
            plVar20 = (longlong *)param_1[200];
            uVar4 = param_1[199];
            local_c0 = CONCAT44(local_c0._4_4_,local_a8 + iVar9);
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
            }
            local_d8 = (longlong *)CONCAT44(local_a8 + iVar9,iVar9);
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
            }
            iVar9 = (int)plVar21[1];
            *(int *)(plVar21 + 1) = iVar9 + 1;
            if (*(int *)((longlong)plVar21 + 0xc) < iVar9 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar21,iVar9);
            }
            piVar12 = (int *)((longlong)iVar9 * 0x20 + *plVar21);
            *piVar12 = local_e0;
            *(longlong **)(piVar12 + 1) = local_d8;
            piVar12[3] = -9;
            *(undefined8 *)(piVar12 + 4) = uVar4;
            *(longlong **)(piVar12 + 6) = plVar20;
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar20 + 1;
                lVar11 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar20 + 0xc);
                  iVar9 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar20 + 8))(plVar20,1);
                  }
                }
                if (plVar20 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar20 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar20)(plVar20);
                    LOCK();
                    piVar12 = (int *)((longlong)plVar20 + 0xc);
                    iVar9 = *piVar12;
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar20 + 8))(plVar20,1);
                    }
                  }
                  LOCK();
                  plVar3 = plVar20 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar20)(plVar20);
                    LOCK();
                    piVar12 = (int *)((longlong)plVar20 + 0xc);
                    iVar9 = *piVar12;
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar20 + 8))(plVar20,1);
                    }
                  }
                }
              }
            }
            puVar10 = local_d0;
            iVar13 = (int)local_c0;
          } while ((int)local_c0 < (int)local_b8);
        }
        local_e0 = local_e0 + 1;
        local_c8 = local_c8 + 0xe;
        plVar21 = local_90;
        iVar9 = local_e8;
        uVar16 = uStack_e4;
      } while (local_e0 < (int)local_98[1]);
    }
    *(char *)(param_1[199] + 8) = cVar2;
  }
  plVar20 = local_f0;
  if (cVar5 == '\0') {
    if (bVar25) {
      iVar18 = (int)plVar21;
      bVar25 = SBORROW4(iVar18,iVar9);
      iVar13 = iVar18 - iVar9;
      uVar16 = (uint)((ulonglong)plVar21 >> 0x20);
      if (iVar18 == iVar9) {
        bVar25 = SBORROW4(uVar16,uStack_e4);
        iVar13 = uVar16 - uStack_e4;
      }
      iVar24 = iVar9;
      if (bVar25 != iVar13 < 0) {
        iVar24 = iVar18;
      }
      local_c0 = (ulonglong)uStack_e4;
      if (iVar18 == iVar9) {
        if ((int)uVar16 < (int)uStack_e4) {
          local_c0 = (ulonglong)plVar21 >> 0x20;
        }
      }
      else if (iVar18 < iVar9) {
        local_c0 = (ulonglong)plVar21 >> 0x20;
      }
      bVar25 = SBORROW4(iVar18,iVar9);
      iVar13 = iVar18 - iVar9;
      if (iVar18 == iVar9) {
        bVar25 = SBORROW4(uVar16,uStack_e4);
        iVar13 = uVar16 - uStack_e4;
      }
      iVar14 = iVar9;
      if ((iVar18 != iVar9 || uVar16 != uStack_e4) && bVar25 == iVar13 < 0) {
        iVar14 = iVar18;
      }
      uVar8 = uStack_e4;
      if (iVar18 == iVar9) {
        if ((int)uStack_e4 < (int)uVar16) {
          uVar8 = uVar16;
        }
      }
      else if (iVar9 < iVar18) {
        uVar8 = uVar16;
      }
      *(char *)(param_1[0xc5] + 8) = cVar2;
      if (iVar24 == iVar14) {
        uVar4 = param_1[0xc5];
        plVar21 = (longlong *)param_1[0xc6];
        local_res18 = CONCAT44(uVar8,(int)local_c0);
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
            }
          }
        }
        iVar9 = (int)local_f0[1];
        *(int *)(local_f0 + 1) = iVar9 + 1;
        if (*(int *)((longlong)local_f0 + 0xc) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(local_f0,iVar9);
        }
        piVar12 = (int *)((longlong)iVar9 * 0x20 + *plVar20);
        *piVar12 = iVar24;
        *(undefined8 *)(piVar12 + 1) = local_res18;
        piVar12[3] = -10;
        *(undefined8 *)(piVar12 + 4) = uVar4;
        *(longlong **)(piVar12 + 6) = plVar21;
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar21 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar12 = (int *)((longlong)plVar21 + 0xc);
              iVar9 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar21 + 8))(plVar21,1);
              }
            }
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar21 + 1;
              lVar11 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar12 = (int *)((longlong)plVar21 + 0xc);
                iVar9 = *piVar12;
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar21 + 8))(plVar21,1);
                }
              }
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar21 + 1;
                lVar11 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar21 + 0xc);
                  iVar9 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar21 + 8))(plVar21,1);
                  }
                }
              }
            }
          }
        }
      }
      else {
        local_d8 = (longlong *)(longlong)iVar24;
        local_98 = (longlong *)(param_1[9] + 0x18);
        local_90 = (longlong *)(longlong)iVar14;
        local_a0 = local_d8;
        if ((longlong)local_d8 <= (longlong)local_90) {
          local_b8 = (longlong)local_d8 * 0x70;
          local_res18._0_4_ = iVar24;
          do {
            plVar20 = local_f0;
            uVar4 = param_1[0xc5];
            plVar21 = (longlong *)param_1[0xc6];
            if (local_d8 == local_a0) {
              uVar23 = (undefined4)local_c0;
              iVar13 = *(int *)(*(longlong *)(local_b8 + *local_98) + 8);
              iVar9 = iVar13 + -1;
              if (iVar13 == 0) {
                iVar9 = 0;
              }
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                if (plVar21 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                }
              }
              iVar13 = (int)local_f0[1];
              *(int *)(local_f0 + 1) = iVar13 + 1;
              if (*(int *)((longlong)local_f0 + 0xc) < iVar13 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(local_f0,iVar13);
              }
              piVar12 = (int *)((longlong)iVar13 * 0x20 + *plVar20);
              *piVar12 = (int)local_res18;
              puVar10 = (undefined8 *)CONCAT44(iVar9,uVar23);
            }
            else if (local_d8 == local_90) {
              local_c8 = (undefined8 *)((ulonglong)uVar8 << 0x20);
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                if (plVar21 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                }
              }
              iVar9 = (int)local_f0[1];
              *(int *)(local_f0 + 1) = iVar9 + 1;
              if (*(int *)((longlong)local_f0 + 0xc) < iVar9 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(local_f0,iVar9);
              }
              piVar12 = (int *)((longlong)iVar9 * 0x20 + *plVar20);
              *piVar12 = (int)local_res18;
              puVar10 = local_c8;
            }
            else {
              iVar9 = *(int *)(*(longlong *)(local_b8 + *local_98) + 8);
              uVar16 = iVar9 - 1;
              if (iVar9 == 0) {
                uVar16 = 0;
              }
              local_d0 = (undefined8 *)((ulonglong)uVar16 << 0x20);
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                if (plVar21 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                }
              }
              iVar9 = (int)local_f0[1];
              *(int *)(local_f0 + 1) = iVar9 + 1;
              if (*(int *)((longlong)local_f0 + 0xc) < iVar9 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(local_f0,iVar9);
              }
              piVar12 = (int *)((longlong)iVar9 * 0x20 + *plVar20);
              *piVar12 = (int)local_res18;
              puVar10 = local_d0;
            }
            *(undefined8 **)(piVar12 + 1) = puVar10;
            piVar12[3] = -10;
            *(undefined8 *)(piVar12 + 4) = uVar4;
            *(longlong **)(piVar12 + 6) = plVar21;
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar21 + 1;
                lVar11 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar21 + 0xc);
                  iVar9 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar21 + 8))(plVar21,1);
                  }
                }
                if (plVar21 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar21 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar21)(plVar21);
                    LOCK();
                    piVar12 = (int *)((longlong)plVar21 + 0xc);
                    iVar9 = *piVar12;
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar21 + 8))(plVar21,1);
                    }
                  }
                  LOCK();
                  plVar3 = plVar21 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar21)(plVar21);
                    LOCK();
                    piVar12 = (int *)((longlong)plVar21 + 0xc);
                    iVar9 = *piVar12;
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar21 + 8))(plVar21,1);
                    }
                  }
                }
              }
            }
            local_d8 = (longlong *)((longlong)local_d8 + 1);
            local_res18._0_4_ = (int)local_res18 + 1;
            local_b8 = local_b8 + 0x70;
          } while ((longlong)local_d8 <= (longlong)local_90);
        }
      }
    }
  }
  else {
    local_88 = 0;
    local_80 = 0;
    FTextLayout::GetTextOffsetLocations(param_1[9],&local_88);
    iVar13 = *(int *)(param_1[0xbd] + 0x60);
    iVar18 = *(int *)(param_1[0xbd] + 0x5c);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_88,&local_b0,iVar18);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_88,&local_68,iVar13 + iVar18);
    plVar21 = local_f0;
    if (local_b0 == local_68) {
      local_res18 = CONCAT44(local_64,iStack_ac);
      if (((local_b0 == iVar9) && (iStack_ac <= (int)uVar16)) && ((int)uVar16 <= local_64)) {
        bVar25 = true;
      }
      else {
        bVar25 = false;
      }
      if ((0 < local_64 - iStack_ac) && (bVar25)) {
        plVar20 = (longlong *)param_1[0xc4];
        uVar4 = param_1[0xc3];
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
            }
          }
        }
        iVar9 = (int)local_f0[1];
        *(int *)(local_f0 + 1) = iVar9 + 1;
        if (*(int *)((longlong)local_f0 + 0xc) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(local_f0,iVar9);
        }
        piVar12 = (int *)((longlong)iVar9 * 0x20 + *plVar21);
        *piVar12 = local_b0;
        *(undefined8 *)(piVar12 + 1) = local_res18;
        piVar12[3] = 10;
        *(undefined8 *)(piVar12 + 4) = uVar4;
        *(longlong **)(piVar12 + 6) = plVar20;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar21 = plVar20 + 1;
            lVar11 = *plVar21;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar12 = (int *)((longlong)plVar20 + 0xc);
              iVar9 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar20 + 8))(plVar20,1);
              }
            }
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar21 = plVar20 + 1;
              lVar11 = *plVar21;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar12 = (int *)((longlong)plVar20 + 0xc);
                iVar9 = *piVar12;
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar20 + 8))(plVar20,1);
                }
              }
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                plVar21 = plVar20 + 1;
                lVar11 = *plVar21;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar20 + 0xc);
                  iVar9 = *piVar12;
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar20 + 8))(plVar20,1);
                  }
                }
              }
            }
          }
        }
      }
    }
    plVar20 = local_f0;
    if (local_88 != 0) {
      FMemory::Free();
      plVar20 = local_f0;
    }
  }
  if ((cVar2 != '\0') && (cVar7 == '\0')) {
    iVar9 = (int)param_1[0xd0];
    if ((-1 < iVar9) && (iVar9 < *(int *)(param_1[9] + 0x20))) {
      uVar4 = param_1[0xc1];
      plVar21 = (longlong *)param_1[0xc2];
      iVar18 = *(int *)(*(longlong *)((longlong)iVar9 * 0x70 + *(longlong *)(param_1[9] + 0x18)) + 8
                       );
      iVar13 = iVar18 + -1;
      if (iVar18 == 0) {
        iVar13 = 0;
      }
      if (iVar13 == 0) {
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
          }
        }
        local_res10 = 0;
      }
      else {
        iVar18 = (int)((ulonglong)param_1[0xd0] >> 0x20);
        if (iVar18 == iVar13) {
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
            }
          }
          local_res10 = CONCAT44(iVar13,iVar13 + -1);
        }
        else {
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
            }
          }
          local_res10 = CONCAT44(iVar18 + 1,iVar18);
        }
      }
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      iVar13 = (int)plVar20[1];
      *(int *)(plVar20 + 1) = iVar13 + 1;
      if (*(int *)((longlong)plVar20 + 0xc) < iVar13 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar20,iVar13);
      }
      piVar12 = (int *)((longlong)iVar13 * 0x20 + *plVar20);
      *piVar12 = iVar9;
      *(undefined8 *)(piVar12 + 1) = local_res10;
      piVar12[3] = 0xb;
      *(undefined8 *)(piVar12 + 4) = uVar4;
      *(longlong **)(piVar12 + 6) = plVar21;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar21 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar12 = (int *)((longlong)plVar21 + 0xc);
            iVar9 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar21 + 8))(plVar21,1);
            }
          }
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar21 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar12 = (int *)((longlong)plVar21 + 0xc);
              iVar9 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar21 + 8))(plVar21,1);
              }
            }
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar21 + 1;
              lVar11 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar12 = (int *)((longlong)plVar21 + 0xc);
                iVar9 = *piVar12;
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar21 + 8))(plVar21,1);
                }
              }
            }
          }
        }
      }
    }
  }
  lVar11 = *plVar20;
  lVar22 = (longlong)(int)plVar20[1] * 0x20 + lVar11;
  for (; lVar11 != lVar22; lVar11 = lVar11 + 0x20) {
    FUN_141927440(param_1[9],lVar11);
  }
  return;
}



// FUNCTION 1419a7de0 FUN_1419a7de0 body=470 status=ok
// SIG undefined FUN_1419a7de0(void)

bool FUN_1419a7de0(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_48;
  longlong *local_40 [7];
  
  bVar6 = *(byte *)(param_1 + 0x438) >> 2 & 1;
  if (bVar6 != 0) {
    FInertialScrollManager::UpdateScrollVelocity(param_1 + 0x330,param_3);
    fVar9 = *(float *)(param_1 + 0x340) / *(float *)(param_1 + 0x39c);
    if (fVar9 != 0.0) {
      fVar7 = (float)FOverscroll::GetOverscroll(param_1 + 0x350);
      if (fVar7 != 0.0) {
        fVar8 = 1.0;
        if (fVar7 <= 0.0) {
          if (0.0 <= fVar7) {
            fVar7 = 0.0;
          }
          else {
            fVar7 = -1.0;
          }
        }
        else {
          fVar7 = 1.0;
        }
        if (fVar9 <= 0.0) {
          if (0.0 <= fVar9) {
            fVar8 = 0.0;
          }
          else {
            fVar8 = -1.0;
          }
        }
        if (fVar7 == fVar8) {
          FInertialScrollManager::ClearScrollVelocity(param_1 + 0x330);
          goto LAB_1419a7ee0;
        }
      }
      bVar6 = 1;
      FUN_14199f960(param_1,param_1 + 0x394,fVar9 * param_3,*(undefined1 *)(param_1 + 0x354),0);
    }
  }
LAB_1419a7ee0:
  if (*(char *)(param_1 + 0x354) == '\0') {
    fVar9 = (float)FOverscroll::GetOverscroll(param_1 + 0x350);
    if (fVar9 != 0.0) {
      bVar6 = 1;
    }
    FOverscroll::UpdateOverscroll(param_1 + 0x350,param_3);
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (bVar6 == 0) {
    *(byte *)(param_1 + 0x438) = *(byte *)(param_1 + 0x438) & 0xdb;
    local_40[0] = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x420) != &local_48) {
      *(undefined8 *)(param_1 + 0x420) = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x428,local_40);
      plVar5 = local_40[0];
      if (local_40[0] != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40[0] + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40[0])(local_40[0]);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40[0] + 8))(local_40[0],1);
          }
        }
      }
    }
  }
  return bVar6 != 0;
}



// FUNCTION 1419a7fc0 UpdatePreferredCursorScreenOffsetInLine body=90 status=ok
// SIG undefined UpdatePreferredCursorScreenOffsetInLine(void)

void FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_res8;
  int local_resc;
  undefined1 local_res10 [24];
  
  local_res8 = *(undefined4 *)(param_1 + 0x680);
  iVar1 = (uint)(*(char *)(param_1 + 0x688) == '\x01') + *(int *)(param_1 + 0x684);
  local_resc = 0;
  if (-1 < iVar1) {
    local_resc = iVar1;
  }
  puVar2 = (undefined4 *)
           FUN_1419409d0(*(undefined8 *)(param_1 + 0x48),local_res10,&local_res8,
                         *(char *)(param_1 + 0x688) == '\x01');
  *(undefined4 *)(param_1 + 0x67c) = *puVar2;
  return;
}



// FUNCTION 1419a8020 FUN_1419a8020 body=145 status=ok
// SIG undefined FUN_1419a8020(void)

bool FUN_1419a8020(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = FUN_141983af0();
  if (lVar5 == 0) {
    lVar5 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(lVar5 + 0x18);
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return param_2 == lVar5;
  }
  return param_2 == lVar5;
}



// FUNCTION 1419a80c0 FUN_1419a80c0 body=338 status=ok
// SIG undefined FUN_1419a80c0(void)

undefined8 * FUN_1419a80c0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d77930;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1419a8220 FUN_1419a8220 body=338 status=ok
// SIG undefined FUN_1419a8220(void)

undefined8 * FUN_1419a8220(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67dc0;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1419a8380 NewIntrusiveReferenceController<SListPanel> body=246 status=ok
// SIG undefined NewIntrusiveReferenceController<SListPanel>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SListPanel>(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x2b0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144d77cc8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f46d0(puVar1);
      *puVar1 = &PTR__scalar_deleting_destructor__144d77970;
      puVar2[0x44] = puVar1;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      puVar2[0x43] = &PTR_Count_144d73fc0;
      *(undefined1 *)(puVar2 + 0x47) = 0;
      *(undefined4 *)(puVar2 + 0x48) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x244) = 0;
      puVar2[0x49] = 0;
      *(undefined4 *)(puVar2 + 0x4a) = 0;
      *(undefined4 *)(puVar2 + 0x4b) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x25c) = 0;
      puVar2[0x4c] = 0;
      *(undefined4 *)(puVar2 + 0x4d) = 0;
      *(undefined4 *)(puVar2 + 0x4e) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x274) = 0;
      puVar2[0x4f] = 0;
      *(undefined4 *)(puVar2 + 0x50) = 0;
      *(undefined2 *)(puVar2 + 0x51) = 0;
      puVar2[0x52] = 0;
      *(undefined4 *)(puVar2 + 0x53) = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419a8480 FUN_1419a8480 body=258 status=ok
// SIG undefined FUN_1419a8480(void)

undefined8 * FUN_1419a8480(void)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x388);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &PTR_LAB_144d77cb8;
    if (puVar3 + 2 != (undefined8 *)0x0) {
      FUN_1417f4470();
      puVar3[2] = &PTR__scalar_deleting_destructor__144d77688;
      *(undefined4 *)(puVar3 + 0x60) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x304) = 1;
      puVar3[0x61] = 0;
      *(undefined4 *)(puVar3 + 0x62) = 0;
      *(undefined4 *)(puVar3 + 99) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x31c) = 1;
      puVar3[100] = 0;
      *(undefined4 *)(puVar3 + 0x65) = 0;
      puVar3[0x66] = 0;
      *(undefined4 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = DAT_1469eb218;
      lVar2 = DAT_1469eb220;
      puVar3[0x69] = DAT_1469eb220;
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      puVar3[0x6a] = 0;
      puVar3[0x6b] = 0;
      puVar3[0x6d] = 0;
      puVar3[0x6e] = 0;
      puVar3[0x6f] = 0;
      puVar3[0x70] = 0;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419a8590 FArguments body=376 status=ok
// SIG undefined FArguments(void)

longlong SListPanel::FArguments::FArguments
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x41800000;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0x100;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  uVar1 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  *(undefined1 *)(param_1 + 0xf1) = 1;
  return param_1;
}



// FUNCTION 1419a8710 FArguments body=299 status=ok
// SIG undefined FArguments(void)

longlong STableColumnHeader::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"TableView.Header.Column",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb1e8);
  if (lVar3 == 0) {
    lVar3 = FUN_141835250();
  }
  *(longlong *)(param_1 + 0x108) = lVar3;
  return param_1;
}



// FUNCTION 1419a8840 FUN_1419a8840 body=725 status=ok
// SIG undefined FUN_1419a8840(void)

undefined8 *
FUN_1419a8840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined1 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_208 [480];
  
  plVar10 = (longlong *)0x0;
  if ((((int)param_6[1] == 0) || ((longlong *)*param_6 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)*param_6 + 0x18))(), cVar7 == '\0')) {
    uVar8 = FTextBlockStyle::FTextBlockStyle(local_208,param_3);
    puVar9 = (undefined8 *)FUN_141937d50(local_228,param_2,uVar8);
    bVar6 = false;
    bVar5 = true;
  }
  else {
    if ((int)param_6[1] != 0) {
      plVar10 = (longlong *)*param_6;
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_248,param_2,param_3);
    puVar9 = &local_248;
    bVar6 = true;
    bVar5 = false;
  }
  *param_1 = *puVar9;
  lVar4 = puVar9[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((bVar5) && (local_220 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_220 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_220 + 8))(local_220,1);
      }
    }
  }
  if ((bVar6) && (local_240 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_240 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)local_240 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_240 + 8))(local_240,1);
      }
    }
  }
  param_1[2] = *param_7;
  lVar4 = param_7[1];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)FUN_141937cd0(local_218);
  param_1[4] = *puVar9;
  lVar4 = puVar9[1];
  param_1[5] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_210 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  param_1[6] = 0;
  FTextSnapshot::FTextSnapshot(param_1 + 7);
  FTextSnapshot::FTextSnapshot(param_1 + 10);
  if (param_4[1] != '\0') {
    FTextLayout::SetTextShapingMethod(*param_1,*param_4);
  }
  if (param_5[1] != '\0') {
    FTextLayout::SetTextFlowDirection(*param_1,*param_5);
  }
  local_238 = *param_8;
  local_230 = param_8[1];
  param_8[1] = 0;
  *param_8 = 0;
  FUN_141958be0(*param_1,&local_238);
  FUN_140691580(param_3);
  if (param_4[1] != '\0') {
    param_4[1] = 0;
  }
  if (param_5[1] != '\0') {
    param_5[1] = 0;
  }
  plVar10 = (longlong *)param_7[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_8[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1419a8b20 FUN_1419a8b20 body=422 status=ok
// SIG undefined FUN_1419a8b20(void)

undefined1 * FUN_1419a8b20(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x128) = 0;
  iVar9 = *(int *)(param_2 + 0x130);
  puVar8 = *(undefined8 **)(param_2 + 0x128);
  *(int *)(param_1 + 0x130) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  else {
    FUN_141857eb0(param_1 + 8,iVar9,0);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)(param_2 + 8);
    }
    puVar7 = *(undefined1 **)(param_1 + 0x128);
    if (*(undefined1 **)(param_1 + 0x128) == (undefined1 *)0x0) {
      puVar7 = param_1 + 8;
    }
    lVar10 = (longlong)puVar8 - (longlong)puVar7;
    puVar6 = (undefined8 *)(puVar7 + 0x38);
    do {
      uVar5 = puVar8[1];
      puVar6[-7] = *puVar8;
      puVar6[-6] = uVar5;
      uVar5 = puVar8[3];
      puVar6[-5] = puVar8[2];
      puVar6[-4] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 0x24);
      uVar3 = *(undefined4 *)(puVar8 + 5);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x2c);
      *(undefined4 *)(puVar6 + -3) = *(undefined4 *)(puVar8 + 4);
      *(undefined4 *)((longlong)puVar6 + -0x14) = uVar2;
      *(undefined4 *)(puVar6 + -2) = uVar3;
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar4;
      puVar6[-1] = puVar8[6];
      *puVar6 = *(undefined8 *)(lVar10 + (longlong)puVar6);
      lVar1 = *(longlong *)(lVar10 + 8 + (longlong)puVar6);
      puVar6[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 9;
      puVar6 = puVar6 + 9;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  param_1[0x138] = param_2[0x138];
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  lVar10 = *(longlong *)(param_2 + 0x148);
  *(longlong *)(param_1 + 0x148) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  iVar9 = *(int *)(param_2 + 0x158);
  puVar8 = *(undefined8 **)(param_2 + 0x150);
  *(int *)(param_1 + 0x158) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x150,iVar9,0);
    puVar6 = *(undefined8 **)(param_1 + 0x150);
    do {
      *puVar6 = *puVar8;
      lVar10 = puVar8[1];
      puVar6[1] = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      puVar6 = puVar6 + 2;
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return param_1;
}



// FUNCTION 1419a8cd0 SMultiLineEditableText body=436 status=ok
// SIG undefined SMultiLineEditableText(void)

undefined8 * SMultiLineEditableText::SMultiLineEditableText(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR_FUN_144d771b8;
  param_1[0x41] = &PTR_FUN_144d773c0;
  param_1[0x42] = 0;
  *(undefined2 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0x100;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0x100;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  return param_1;
}



// FUNCTION 1419a8e90 FUN_1419a8e90 body=315 status=ok
// SIG undefined FUN_1419a8e90(void)

undefined8 * FUN_1419a8e90(undefined8 *param_1)

{
  FUN_1417f46d0();
  *param_1 = &PTR_FUN_144d77480;
  FText::FText(param_1 + 0x41);
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  FUN_1417f2e90(param_1 + 0x48);
  FText::FText(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x454) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4dc) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f4) = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return param_1;
}



// FUNCTION 1419a8fd0 FUN_1419a8fd0 body=371 status=ok
// SIG undefined FUN_1419a8fd0(void)

undefined8 * FUN_1419a8fd0(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  FUN_1417f4470();
  *(undefined4 *)(param_1 + 0x5f) = param_2;
  lVar4 = 0;
  *param_1 = &PTR_FUN_144d76ef0;
  param_1[0x5e] = &PTR_LAB_144d77158;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  FGeometry::FGeometry((longlong)param_1 + 0x36c);
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x77) = 3;
  *(undefined1 *)((longlong)param_1 + 0x3bc) = 1;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FInertialScrollManager::FInertialScrollManager(param_1 + 0x7c,0x3fb99999a0000000);
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  lVar1 = DAT_1469eb110;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x40c) = *(undefined4 *)(lVar4 + lVar1);
  *(undefined1 *)(param_1 + 0x82) = 0;
  FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate((longlong)param_1 + 0x414);
  *(undefined2 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41a) = 0;
  return param_1;
}



// FUNCTION 1419a9150 FUN_1419a9150 body=527 status=ok
// SIG undefined FUN_1419a9150(void)

undefined8 * FUN_1419a9150(undefined8 *param_1)

{
  FUN_1417f46d0();
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
  *param_1 = &PTR__scalar_deleting_destructor__144d76ce8;
  FText::FText(param_1 + 0x41);
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  FUN_1417f2e90(param_1 + 0x48);
  FUN_1417efd90(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  FText::FText(param_1 + 0xab);
  *(undefined1 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58c) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  *(undefined2 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x614) = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x62c) = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf9;
  return param_1;
}



// FUNCTION 1419a9360 ~SListPanel body=96 status=ok
// SIG undefined ~SListPanel(void)

void SListPanel::~SListPanel(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x280);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x238);
  TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>::
  ~TIndirectArray<SUniformGridPanel::FSlot,FDefaultAllocator>(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1419a93c0 FUN_1419a93c0 body=526 status=ok
// SIG undefined FUN_1419a93c0(void)

void FUN_1419a93c0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d771b8;
  param_1[0x41] = &PTR_FUN_144d773c0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x7a);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x77);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x73);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x71);
  plVar4 = (longlong *)param_1[0x6e];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_1[0x6b];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x66);
  plVar4 = (longlong *)param_1[0x65];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
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
  plVar4 = (longlong *)param_1[99];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5e);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5a);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x56);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x53);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4d);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4a);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x47);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x44);
  lVar5 = param_1[0x42];
  if (lVar5 != 0) {
    FUN_141965990(lVar5);
    FMemory::operator_delete(lVar5,0x790);
  }
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1419a95d0 FUN_1419a95d0 body=318 status=ok
// SIG undefined FUN_1419a95d0(void)

void FUN_1419a95d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d77480;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x9f);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x9c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x99);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x96);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x91);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8e);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8b);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  plVar4 = (longlong *)param_1[0x85];
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
  FUN_140691580(param_1 + 0x48);
  lVar5 = param_1[0x47];
  if (lVar5 != 0) {
    FUN_141966250(lVar5);
    FMemory::operator_delete(lVar5,0x68);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x45);
  plVar4 = (longlong *)param_1[0x42];
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
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1419a9710 FUN_1419a9710 body=249 status=ok
// SIG undefined FUN_1419a9710(void)

void FUN_1419a9710(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x360);
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
  plVar4 = *(longlong **)(param_1 + 0x348);
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
  plVar4 = *(longlong **)(param_1 + 0x338);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1419a9810 FUN_1419a9810 body=518 status=ok
// SIG undefined FUN_1419a9810(void)

void FUN_1419a9810(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d76ce8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc3);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xbd);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb5);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xaf);
  plVar4 = (longlong *)param_1[0xac];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa9);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa5);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x9b);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x97);
  plVar4 = (longlong *)param_1[0x95];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8f);
  plVar4 = (longlong *)param_1[0x8b];
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
  FUN_140691580(param_1 + 0x48);
  lVar5 = param_1[0x47];
  if (lVar5 != 0) {
    FUN_141966250(lVar5);
    FMemory::operator_delete(lVar5,0x68);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x45);
  plVar4 = (longlong *)param_1[0x42];
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
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1419a9a20 FUN_1419a9a20 body=140 status=ok
// SIG undefined FUN_1419a9a20(void)

undefined4 * FUN_1419a9a20(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  plVar1 = (longlong *)(param_1 + 6);
  if ((longlong *)(param_2 + 6) != plVar1) {
    if ((param_2[8] != 0) && (plVar2 = *(longlong **)(param_2 + 6), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((param_1[8] != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar6 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar6;
      }
      param_1[8] = 0;
    }
  }
  return param_1;
}



// FUNCTION 1419a9ab0 operator== body=69 status=ok
// SIG undefined operator==(void)

ulonglong FSlateFontInfo::operator==(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_2;
  if ((((*param_1 == uVar2) && (uVar2 = param_2[1], param_1[1] == uVar2)) &&
      (uVar2 = (ulonglong)(uint)param_2[2], (uint)param_1[2] == (uint)param_2[2])) &&
     (((uVar2 = 0, *(char *)((longlong)param_1 + 0x14) == *(char *)((longlong)param_2 + 0x14) &&
       (uVar2 = param_2[6], param_1[6] == uVar2)) && (uVar2 = param_2[8], param_1[8] == uVar2)))) {
    uVar1 = (uint)param_2[9];
    uVar2 = (ulonglong)uVar1;
    if ((uint)param_1[9] == uVar1) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1419a9b00 FUN_1419a9b00 body=589 status=ok
// SIG undefined FUN_1419a9b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419a9b00(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong *local_e8;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined8 local_b0;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if ((plVar2 != (longlong *)0x0) && (local_f0 = *(longlong *)(param_1 + 8), local_f0 != 0)) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          local_24 = local_24 & 0xffffff00;
          local_d8[0] = 1;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          uStack_30 = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_58 = 0;
          local_50 = 0;
          local_28 = 0x20702;
          local_e8 = plVar2;
          uVar5 = FUN_140693ff0(local_d8,&local_f0);
          FUN_140438260(param_2,uVar5);
          FUN_140438c20(local_d8);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 != 1) {
            return param_2;
          }
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 != 1) {
            return param_2;
          }
          (**(code **)(*plVar2 + 8))(plVar2,1);
          return param_2;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  return param_2;
}



// FUNCTION 1419a9d50 FUN_1419a9d50 body=464 status=ok
// SIG undefined FUN_1419a9d50(void)

undefined1 * FUN_1419a9d50(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined8 local_a0;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  uint local_14;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar7;
        if (((plVar7 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
           (cVar3 = FUN_141846080(), cVar3 != '\0')) {
          local_14 = local_14 & 0xffffff00;
          local_c8[0] = 1;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_38 = 0;
          uStack_30 = 0;
          local_28 = 0;
          uStack_20 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_48 = 0;
          local_40 = 0;
          local_18 = 0x20702;
          uVar5 = FUN_1406a1ac0(local_c8);
          FUN_140438260(param_2,uVar5);
          FUN_140438c20(local_c8);
          goto LAB_1419a9e18;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  plVar7 = plVar6;
  if (plVar6 != (longlong *)0x0) {
LAB_1419a9e18:
    LOCK();
    plVar6 = plVar7 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return param_2;
}



// FUNCTION 1419a9f20 FUN_1419a9f20 body=477 status=ok
// SIG undefined FUN_1419a9f20(void)

undefined1 *
FUN_1419a9f20(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  
  plVar7 = (longlong *)param_1[2];
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar7[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar7;
        if (((plVar7 != (longlong *)0x0) && (param_1[1] != 0)) &&
           (cVar4 = FUN_141846080(), cVar4 != '\0')) {
          fVar2 = *(float *)(param_4 + 0x28);
          fVar9 = (float)SHeaderRow::FColumn::GetWidth(*param_1);
          fVar9 = fVar9 + fVar2;
          if (fVar9 <= 20.0) {
            fVar9 = 20.0;
          }
          FUN_1419bd0d0(*param_1,fVar9);
          *param_2 = 1;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          param_2[0x20] = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x40) = 0;
          *(undefined8 *)(param_2 + 0x48) = 0;
          *(undefined8 *)(param_2 + 0x50) = 0;
          *(undefined8 *)(param_2 + 0x58) = 0;
          *(undefined8 *)(param_2 + 0x60) = 0;
          *(undefined8 *)(param_2 + 0x68) = 0;
          *(undefined8 *)(param_2 + 0x70) = 0;
          *(undefined8 *)(param_2 + 0x78) = 0;
          *(undefined8 *)(param_2 + 0x80) = 0;
          *(undefined8 *)(param_2 + 0x88) = 0;
          *(undefined8 *)(param_2 + 0x90) = 0;
          *(undefined8 *)(param_2 + 0x98) = 0;
          *(undefined8 *)(param_2 + 0xa0) = 0;
          *(undefined8 *)(param_2 + 0xa8) = 0;
          *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
          *(undefined4 *)(param_2 + 0xb0) = 0x20702;
          goto LAB_1419a9fea;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  plVar7 = plVar6;
  if (plVar6 != (longlong *)0x0) {
LAB_1419a9fea:
    LOCK();
    plVar6 = plVar7 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1419aa100 FUN_1419aa100 body=446 status=ok
// SIG undefined FUN_1419aa100(void)

longlong * FUN_1419aa100(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x294) = 0;
  *(undefined4 *)(lVar1 + 0x290) = 0;
  *(undefined4 *)(lVar1 + 0x230) = *(undefined4 *)(param_3 + 0x108);
  *(undefined1 *)(lVar1 + 0x234) = *(undefined1 *)(param_3 + 0x10c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x238,param_3 + 0x110);
  *(undefined4 *)(lVar1 + 0x248) = *(undefined4 *)(param_3 + 0x120);
  *(undefined1 *)(lVar1 + 0x24c) = *(undefined1 *)(param_3 + 0x124);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x250,param_3 + 0x128);
  *(undefined4 *)(lVar1 + 0x260) = *(undefined4 *)(param_3 + 0x138);
  *(undefined1 *)(lVar1 + 0x264) = *(undefined1 *)(param_3 + 0x13c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x268,param_3 + 0x140);
  *(undefined1 *)(lVar1 + 0x278) = *(undefined1 *)(param_3 + 0x150);
  *(undefined1 *)(lVar1 + 0x279) = *(undefined1 *)(param_3 + 0x151);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x280,param_3 + 0x158);
  *(undefined1 *)(lVar1 + 0x29c) = 0;
  plVar2 = (longlong *)*param_1;
  if (-1 < (char)plVar2[3]) {
    cVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1419aa283;
    }
  }
  bVar4 = 1;
LAB_1419aa283:
  *(byte *)((longlong)plVar2 + 0x19) = *(byte *)((longlong)plVar2 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar2 + 0x19) = *(byte *)((longlong)plVar2 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar1 = param_1[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419aa2d0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_cf21ef6a52e6e29ca60cabbbc1a30be4>_>
::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1419aa340 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FOnlineSubsystemEOS>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b0);
  }
  return param_1;
}



// FUNCTION 1419aa370 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SDPIScaler>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x388);
  }
  return param_1;
}



// FUNCTION 1419aa3a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FD3D12GPUFence::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 4);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1419aa3f0 FUN_1419aa3f0 body=66 status=ok
// SIG undefined FUN_1419aa3f0(void)

undefined8 * FUN_1419aa3f0(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1419aa440 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SListPanel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~SListPanel();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 1419aa490 FUN_1419aa490 body=78 status=ok
// SIG undefined FUN_1419aa490(void)

undefined8 FUN_1419aa490(undefined8 param_1,ulonglong param_2)

{
  FUN_1419a93c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 1419aa4e0 FUN_1419aa4e0 body=366 status=ok
// SIG undefined FUN_1419aa4e0(void)

undefined8 * FUN_1419aa4e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d77480;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x9f);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x9c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x99);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x96);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x91);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8e);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8b);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  plVar4 = (longlong *)param_1[0x85];
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
  FUN_140691580(param_1 + 0x48);
  lVar5 = param_1[0x47];
  if (lVar5 != 0) {
    FUN_141966250(lVar5);
    FMemory::operator_delete(lVar5,0x68);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x45);
  plVar4 = (longlong *)param_1[0x42];
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
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x508);
    }
  }
  return param_1;
}



// FUNCTION 1419aa650 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SPopupErrorText::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1419a9710();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x378);
  }
  return param_1;
}



// FUNCTION 1419aa6a0 FUN_1419aa6a0 body=328 status=ok
// SIG undefined FUN_1419aa6a0(void)

longlong FUN_1419aa6a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x3d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  plVar4 = *(longlong **)(param_1 + 0x318);
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
  plVar4 = *(longlong **)(param_1 + 0x308);
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
  *(undefined ***)(param_1 + 0x2f0) = &PTR_FUN_144024f50;
  FUN_140458b70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x420);
    }
  }
  return param_1;
}



// FUNCTION 1419aa7f0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SGameLayerManager::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1419a9810();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x650);
  }
  return param_1;
}



// FUNCTION 1419aa840 FUN_1419aa840 body=322 status=ok
// SIG undefined FUN_1419aa840(void)

undefined8 * FUN_1419aa840(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *_Src;
  
  puVar4 = (undefined8 *)operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar4);
    *puVar4 = &PTR__scalar_deleting_destructor__144d4edf0;
  }
  if (*(char *)(param_1 + 0x228) == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x210);
    if (param_2 == -1) {
      if ((lVar3 != 0) && (puVar4[1] != lVar3)) {
        puVar4[1] = lVar3;
        FUN_141802340(puVar4);
      }
      iVar2 = *(int *)(param_1 + 0x220);
      *(int *)(param_1 + 0x220) = iVar2 + 1;
      if (*(int *)(param_1 + 0x224) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x218,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x218) + (longlong)iVar2 * 8) = puVar4;
    }
    else {
      if ((lVar3 != 0) && (puVar4[1] != lVar3)) {
        puVar4[1] = lVar3;
        FUN_141802340(puVar4);
      }
      plVar1 = (longlong *)(param_1 + 0x218);
      iVar2 = *(int *)(param_1 + 0x220);
      *(int *)(param_1 + 0x220) = iVar2 + 1;
      if (*(int *)(param_1 + 0x224) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      _Src = (void *)(*plVar1 + (longlong)param_2 * 8);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar2 - param_2) << 3);
      *(undefined8 **)((longlong)param_2 * 8 + *plVar1) = puVar4;
    }
    return puVar4;
  }
  return puVar4;
}



// FUNCTION 1419aa990 FUN_1419aa990 body=135 status=ok
// SIG undefined FUN_1419aa990(void)

void FUN_1419aa990(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar6 = *(undefined8 *)(param_1 + 0x300);
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,local_18);
  uVar6 = FUN_1419aa840(uVar6,0xffffffff);
  FUN_140801a00(uVar6,uVar5);
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



// FUNCTION 1419aaa20 FUN_1419aaa20 body=10 status=ok
// SIG undefined FUN_1419aaa20(void)

void FUN_1419aaa20(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001419aaa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))();
  return;
}



// FUNCTION 1419aaa30 FUN_1419aaa30 body=315 status=ok
// SIG undefined FUN_1419aaa30(void)

undefined8 * FUN_1419aaa30(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x98) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))(), cVar4 != '\0')) {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0x98) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x90);
    }
    uVar5 = (**(code **)(*plVar7 + 0x38))();
    *(undefined1 *)(param_1 + 0x88) = uVar5;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    if (((*(int *)(param_1 + 0xc0) != 0) && (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0xc0) != 0) {
        plVar8 = *(longlong **)(param_1 + 0xb8);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,param_2);
      return param_2;
    }
    puVar6 = (undefined8 *)FUN_14196cff0(*(undefined8 *)(param_1 + 8),local_18,param_1 + 0x148);
    *param_2 = *puVar6;
    lVar3 = puVar6[1];
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_10 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1419aab70 CacheDesiredSize body=50 status=ok
// SIG undefined CacheDesiredSize(void)

void SMultiLineEditableText::CacheDesiredSize(longlong param_1,undefined4 param_2)

{
  FSlateEditableTextLayout::CacheDesiredSize(*(undefined8 *)(param_1 + 0x210));
  SWidget::CacheDesiredSize(param_1,param_2);
  return;
}



// FUNCTION 1419aabb0 CanInsertCarriageReturn body=118 status=ok
// SIG undefined CanInsertCarriageReturn(void)

bool SMultiLineEditableText::CanInsertCarriageReturn(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_res8 [32];
  
  bVar1 = *(byte *)(param_1 + 0x158);
  pbVar3 = (byte *)FSlateApplication::GetModifierKeys(DAT_1469f4590,local_res8);
  bVar5 = true;
  if ((bVar1 & 4) != 0) {
    bVar5 = (*pbVar3 & 3) != 0;
  }
  bVar4 = false;
  bVar2 = bVar5;
  if (((bVar1 & 8) != 0) && (bVar2 = bVar4, (*pbVar3 & 0xc0) != 0)) {
    bVar2 = bVar5;
  }
  bVar5 = bVar2;
  if (((bVar1 & 1) != 0) && (bVar5 = bVar4, (*pbVar3 & 0xc) != 0)) {
    bVar5 = bVar2;
  }
  bVar2 = bVar5;
  if (((bVar1 & 2) != 0) && (bVar2 = bVar4, (*pbVar3 & 0x30) != 0)) {
    bVar2 = bVar5;
  }
  return bVar2;
}



// FUNCTION 1419aac30 CanTypeCharacter body=123 status=ok
// SIG undefined CanTypeCharacter(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SMultiLineEditableText::CanTypeCharacter(longlong param_1,short param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(int *)(param_1 + 0xd0) != 0) && (*(longlong **)(param_1 + 200) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419aac7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x38))
                          (*(longlong **)(param_1 + 200),param_2);
        return (bool)uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001419aac95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))(0,param_2);
      return (bool)uVar2;
    }
  }
  return param_2 != 9;
}



// FUNCTION 1419aacb0 FUN_1419aacb0 body=116 status=ok
// SIG undefined FUN_1419aacb0(void)

undefined1 FUN_1419aacb0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FOverscroll::GetOverscroll(param_1 + 0x414,param_1 + 0x4c);
  if (fVar1 != 0.0) {
    fVar2 = 1.0;
    if (fVar1 <= 0.0) {
      if (0.0 <= fVar1) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = -1.0;
      }
    }
    else {
      fVar1 = 1.0;
    }
    if (param_2 <= 0.0) {
      if (0.0 <= param_2) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = -1.0;
      }
    }
    if (fVar1 == fVar2) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419aad30 FUN_1419aad30 body=56 status=ok
// SIG undefined FUN_1419aad30(void)

void FUN_1419aad30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (*(char *)(lVar1 + 0x228) == '\0') {
    *(undefined1 *)(lVar1 + 0x228) = 1;
    TIndirectArray<SListPanel::FSlot,FDefaultAllocator>::Empty(lVar1 + 0x218,0);
    *(undefined1 *)(lVar1 + 0x228) = 0;
  }
  return;
}



// FUNCTION 1419aad70 FUN_1419aad70 body=1098 status=ok
// SIG undefined FUN_1419aad70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1419aad70(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  undefined4 *puVar7;
  longlong lVar8;
  char cVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_238 [512];
  
  FTextLayout::SetScale(*param_1,param_4);
  pfVar5 = (float *)param_3[2];
  if (*(char *)(pfVar5 + 1) == '\0') {
    fVar16 = 0.0;
  }
  else {
    if (((pfVar5[4] != 0.0) && (*(longlong **)(pfVar5 + 2) != (longlong *)0x0)) &&
       (cVar9 = (**(code **)(**(longlong **)(pfVar5 + 2) + 0x18))(), cVar9 != '\0')) {
      if (pfVar5[4] != 0.0) {
        fVar16 = (float)(**(code **)(**(longlong **)(pfVar5 + 2) + 0x38))();
        *pfVar5 = fVar16;
        goto LAB_1419aae04;
      }
      fVar16 = (float)(**(code **)(_DAT_00000000 + 0x38))();
      *pfVar5 = fVar16;
    }
    fVar16 = *pfVar5;
  }
LAB_1419aae04:
  pcVar6 = (char *)param_3[3];
  if (pcVar6[1] == '\0') {
    cVar9 = '\0';
  }
  else {
    if (((*(int *)(pcVar6 + 0x10) != 0) && (*(longlong **)(pcVar6 + 8) != (longlong *)0x0)) &&
       (cVar9 = (**(code **)(**(longlong **)(pcVar6 + 8) + 0x18))(), cVar9 != '\0')) {
      if (*(int *)(pcVar6 + 0x10) != 0) {
        cVar9 = (**(code **)(**(longlong **)(pcVar6 + 8) + 0x38))();
        *pcVar6 = cVar9;
        goto LAB_1419aae54;
      }
      cVar9 = (**(code **)(_DAT_00000000 + 0x38))();
      *pcVar6 = cVar9;
    }
    cVar9 = *pcVar6;
  }
LAB_1419aae54:
  fVar17 = fVar16;
  if (((cVar9 != '\0') && (fVar3 = *(float *)(param_1 + 6), 1.0 <= fVar3)) &&
     ((fVar17 = fVar3, 1.0 <= fVar16 && (fVar16 <= fVar3)))) {
    fVar17 = fVar16;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  FTextLayout::SetWrappingWidth(*param_1,fVar17);
  if ((((int)param_3[6] != 0) && ((longlong *)param_3[5] != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(*(longlong *)param_3[5] + 0x18))(), cVar9 != '\0')) {
    if ((int)param_3[6] == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = (longlong *)param_3[5];
    }
    uVar10 = (**(code **)(*plVar15 + 0x38))();
    *(undefined1 *)(param_3 + 4) = uVar10;
  }
  FTextLayout::SetWrappingPolicy(*param_1,(char)param_3[4]);
  puVar7 = (undefined4 *)param_3[7];
  if (((puVar7[8] != 0) && (*(longlong **)(puVar7 + 6) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(puVar7 + 6) + 0x18))(), cVar9 != '\0')) {
    if (puVar7[8] == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(puVar7 + 6);
    }
    (**(code **)(*plVar15 + 0x38))(plVar15,&local_278);
    *puVar7 = local_278;
    puVar7[1] = uStack_274;
    puVar7[2] = uStack_270;
    puVar7[3] = uStack_26c;
  }
  FTextLayout::SetMargin(*param_1,puVar7);
  puVar7 = (undefined4 *)param_3[9];
  if (((puVar7[4] != 0) && (*(longlong **)(puVar7 + 2) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(puVar7 + 2) + 0x18))(), cVar9 != '\0')) {
    if (puVar7[4] == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(puVar7 + 2);
    }
    uVar11 = (**(code **)(*plVar15 + 0x38))();
    *puVar7 = uVar11;
  }
  FTextLayout::SetJustification(*param_1,*puVar7);
  puVar7 = (undefined4 *)param_3[8];
  if (((puVar7[4] != 0) && (*(longlong **)(puVar7 + 2) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(puVar7 + 2) + 0x18))(), cVar9 != '\0')) {
    if (puVar7[4] == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(puVar7 + 2);
    }
    uVar11 = (**(code **)(*plVar15 + 0x38))();
    *puVar7 = uVar11;
  }
  FTextLayout::SetLineHeightPercentage(*param_1,*puVar7);
  cVar9 = FSlateTextBlockLayout::IsStyleUpToDate(param_1,param_5);
  if (cVar9 == '\0') {
    uVar13 = *param_1;
    uVar12 = FTextBlockStyle::FTextBlockStyle(local_238,param_5);
    FSlateTextLayout::SetDefaultTextStyle(uVar13,uVar12);
    (**(code **)(*(longlong *)param_1[2] + 0x20))();
  }
  uVar13 = FUN_1404b03b0();
  if (*(char *)(*param_3 + 0x18) != '\0') {
    uVar13 = TAttribute<FText>::Get();
  }
  puVar1 = param_1 + 7;
  cVar9 = FTextSnapshot::IdenticalTo(puVar1,uVar13);
  if (cVar9 == '\0') {
    cVar9 = FTextSnapshot::IsDisplayStringEqualTo(puVar1,uVar13);
    puVar14 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_268,uVar13);
    if (puVar1 != puVar14) {
      *puVar1 = *puVar14;
      *puVar14 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 8,puVar14 + 1);
    }
    *(undefined2 *)(param_1 + 9) = *(undefined2 *)(puVar14 + 2);
    *(undefined2 *)((longlong)param_1 + 0x4a) = *(undefined2 *)((longlong)puVar14 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)puVar14 + 0x14);
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_260 + 1;
      lVar8 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)local_260 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_260 + 8))(local_260,1);
        }
      }
    }
    if (cVar9 != '\0') goto LAB_1419ab09a;
  }
  else {
LAB_1419ab09a:
    cVar9 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
    if (cVar9 == '\0') goto LAB_1419ab0bb;
  }
  uVar13 = FText::ToString(uVar13);
  FSlateTextBlockLayout::UpdateTextLayout(param_1,uVar13);
LAB_1419ab0bb:
  uVar13 = FUN_1404b03b0();
  if (*(char *)(param_3[1] + 0x18) != '\0') {
    uVar13 = TAttribute<FText>::Get();
  }
  puVar1 = param_1 + 10;
  cVar9 = FTextSnapshot::IdenticalTo(puVar1,uVar13);
  if (cVar9 == '\0') {
    cVar9 = FTextSnapshot::IsDisplayStringEqualTo(puVar1,uVar13);
    if (cVar9 == '\0') {
      FUN_1419bdd70(param_1,uVar13);
    }
    puVar14 = (undefined8 *)FTextSnapshot::FTextSnapshot(local_250,uVar13);
    if (puVar1 != puVar14) {
      *puVar1 = *puVar14;
      *puVar14 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,puVar14 + 1);
    }
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar14 + 2);
    *(undefined2 *)((longlong)param_1 + 0x62) = *(undefined2 *)((longlong)puVar14 + 0x12);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)puVar14 + 0x14);
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_248 + 1;
      lVar8 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar2 = (int *)((longlong)local_248 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_248 + 8))(local_248,1);
        }
      }
    }
  }
  (**(code **)(*(longlong *)*param_1 + 8))();
  FTextLayout::GetSize(*param_1,param_2);
  return param_2;
}



// FUNCTION 1419ab1c0 FUN_1419ab1c0 body=466 status=ok
// SIG undefined FUN_1419ab1c0(void)

float * FUN_1419ab1c0(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  
  puVar1 = (undefined8 *)(param_1 + 0x208);
  plVar6 = (longlong *)0x0;
  fVar11 = 0.0;
  fVar10 = 0.0;
  iVar4 = (**(code **)*puVar1)(puVar1);
  plVar5 = plVar6;
  plVar8 = plVar6;
  if (0 < iVar4) {
    do {
      SWidget::GetDesiredSize
                (*(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)plVar5) + 0x10),
                 &local_res8);
      fVar2 = (float)local_res8;
      if ((float)local_res8 <= fVar11) {
        fVar2 = fVar11;
      }
      fVar11 = fVar2;
      fVar10 = fVar10 + local_res8._4_4_;
      uVar7 = (int)plVar8 + 1;
      iVar4 = (**(code **)*puVar1)(puVar1);
      plVar5 = plVar5 + 1;
      plVar8 = (longlong *)(ulonglong)uVar7;
    } while ((int)uVar7 < iVar4);
  }
  if (((*(int *)(param_1 + 0x240) != 0) && (*(longlong **)(param_1 + 0x238) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x18))(), cVar3 != '\0')) {
    plVar5 = plVar6;
    if (*(int *)(param_1 + 0x240) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x238);
    }
    uVar9 = (**(code **)(*plVar5 + 0x38))();
    *(undefined4 *)(param_1 + 0x230) = uVar9;
  }
  if (*(float *)(param_1 + 0x230) <= 0.0) {
    iVar4 = (**(code **)*puVar1)(puVar1);
    if (iVar4 < 1) {
      local_res8 = DAT_1468b5d88;
    }
    else {
      local_res8 = CONCAT44(local_res8._4_4_,fVar11);
      iVar4 = (**(code **)*puVar1)(puVar1);
      local_res8 = CONCAT44((float)*(int *)(param_1 + 0x298) * (fVar10 / (float)iVar4),
                            (float)local_res8);
    }
    *(undefined8 *)param_2 = local_res8;
  }
  else {
    if (((*(int *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x250) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 600) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x250);
      }
      uVar9 = (**(code **)(*plVar6 + 0x38))(plVar6);
      *(undefined4 *)(param_1 + 0x248) = uVar9;
    }
    iVar4 = *(int *)(param_1 + 0x298);
    *param_2 = fVar11;
    param_2[1] = (float)iVar4 * *(float *)(param_1 + 0x248);
  }
  return param_2;
}



// FUNCTION 1419ab3a0 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SMultiLineEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FUN_14196ecb0(*(undefined8 *)(param_1 + 0x210));
  return param_2;
}



// FUNCTION 1419ab3c0 FUN_1419ab3c0 body=337 status=ok
// SIG undefined FUN_1419ab3c0(void)

float * FUN_1419ab3c0(longlong param_1,float *param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  float local_res8;
  float local_resc;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_68 = param_1 + 0x208;
  local_60 = param_1 + 0x420;
  plVar2 = (longlong *)0x0;
  local_58 = param_1 + 0x450;
  local_50 = param_1 + 0x468;
  local_48 = *(undefined1 *)(param_1 + 0x480);
  local_47 = *(undefined1 *)(param_1 + 0x481);
  local_40 = 0;
  local_38 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_40,param_1 + 0x488);
  local_30 = param_1 + 0x498;
  local_28 = param_1 + 0x4d8;
  local_20 = param_1 + 0x4c0;
  FUN_1419aad70(*(undefined8 *)(param_1 + 0x238),&local_res8,&local_68,param_3,param_1 + 0x240);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  if ((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x500) != 0) {
        plVar2 = *(longlong **)(param_1 + 0x4f8);
      }
      uVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
      *(undefined4 *)(param_1 + 0x4f0) = uVar3;
    }
  }
  fVar4 = *(float *)(param_1 + 0x4f0);
  if (*(float *)(param_1 + 0x4f0) <= local_res8) {
    fVar4 = local_res8;
  }
  *param_2 = fVar4;
  param_2[1] = local_resc;
  return param_2;
}



// FUNCTION 1419ab520 FUN_1419ab520 body=388 status=ok
// SIG undefined FUN_1419ab520(void)

float * FUN_1419ab520(longlong param_1,float *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined4 uVar6;
  float local_res10;
  float local_res14;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined1 local_238;
  undefined1 local_237;
  undefined8 local_230;
  undefined4 local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [496];
  
  local_258 = param_1 + 0x208;
  local_250 = param_1 + 0x558;
  local_248 = param_1 + 0x588;
  plVar4 = (longlong *)0x0;
  local_240 = param_1 + 0x5a0;
  local_230 = 0;
  local_238 = *(undefined1 *)(param_1 + 0x5b8);
  local_237 = *(undefined1 *)(param_1 + 0x5b9);
  local_228 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_230,param_1 + 0x5c0);
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  local_220 = param_1 + 0x5d0;
  local_218 = param_1 + 0x610;
  local_210 = param_1 + 0x5f8;
  uVar3 = FUN_1419b28f0(param_1,local_208);
  FUN_1419aad70(uVar1,&local_res10,&local_258,param_3,uVar3);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_230);
  FUN_140691580(local_208);
  fVar5 = 0.0;
  if (*(char *)(param_1 + 0x62c) != '\0') {
    if ((*(int *)(param_1 + 0x638) != 0) && (*(longlong **)(param_1 + 0x630) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x630) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x638) != 0) {
          plVar4 = *(longlong **)(param_1 + 0x630);
        }
        uVar6 = (**(code **)(*plVar4 + 0x38))(plVar4);
        *(undefined4 *)(param_1 + 0x628) = uVar6;
      }
    }
    fVar5 = *(float *)(param_1 + 0x628);
  }
  if (fVar5 <= local_res10) {
    fVar5 = local_res10;
  }
  *param_2 = fVar5;
  param_2[1] = local_res14;
  return param_2;
}



// FUNCTION 1419ab6b0 FUN_1419ab6b0 body=97 status=ok
// SIG undefined FUN_1419ab6b0(void)

undefined8 FUN_1419ab6b0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = SWidget::ComputeVolatility();
  if (((cVar1 != '\0') || (cVar1 = (**(code **)(*param_1 + 0x180))(param_1), cVar1 != '\0')) ||
     (cVar1 = FSlateEditableTextLayout::ComputeVolatility(param_1[0x42]), cVar1 != '\0')) {
    return 1;
  }
  if ((((int)param_1[0x57] != 0) && ((longlong *)param_1[0x56] != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x56] + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1419ab720 FUN_1419ab720 body=233 status=ok
// SIG undefined FUN_1419ab720(void)

undefined1 FUN_1419ab720(longlong param_1)

{
  char cVar1;
  
  cVar1 = SWidget::ComputeVolatility();
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0x230) != 0) && (*(longlong **)(param_1 + 0x228) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x18))(), cVar1 != '\0')) {
      return 1;
    }
    if (((*(int *)(param_1 + 0x448) != 0) && (*(longlong **)(param_1 + 0x440) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x18))(), cVar1 != '\0')) {
      return 1;
    }
    if (((*(int *)(param_1 + 0x460) != 0) && (*(longlong **)(param_1 + 0x458) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))(), cVar1 != '\0')) {
      return 1;
    }
    cVar1 = TAttribute<float>::IsBound(param_1 + 0x468);
    if (((((cVar1 == '\0') && (cVar1 = TAttribute<float>::IsBound(param_1 + 0x480), cVar1 == '\0'))
         && (cVar1 = TAttribute<FMargin>::IsBound(param_1 + 0x498), cVar1 == '\0')) &&
        ((cVar1 = TAttribute<float>::IsBound(param_1 + 0x4c0), cVar1 == '\0' &&
         (cVar1 = TAttribute<float>::IsBound(param_1 + 0x4d8), cVar1 == '\0')))) &&
       (cVar1 = TAttribute<float>::IsBound(param_1 + 0x4f0), cVar1 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419ab810 FUN_1419ab810 body=364 status=ok
// SIG undefined FUN_1419ab810(void)

undefined1 FUN_1419ab810(longlong param_1)

{
  char cVar1;
  
  cVar1 = SWidget::ComputeVolatility();
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0x230) != 0) && (*(longlong **)(param_1 + 0x228) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x18))(), cVar1 != '\0')) {
      return 1;
    }
    if (((*(int *)(param_1 + 0x480) != 0) && (*(longlong **)(param_1 + 0x478) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x478) + 0x18))(), cVar1 != '\0')) {
      return 1;
    }
    if (((*(int *)(param_1 + 0x4c0) != 0) && (*(longlong **)(param_1 + 0x4b8) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x18))(), cVar1 != '\0')) {
      return 1;
    }
    cVar1 = TAttribute<FSlateBrush_const_*>::IsBound(param_1 + 0x4c8);
    if (((cVar1 == '\0') && (cVar1 = TAttribute<FMargin>::IsBound(param_1 + 0x4e8), cVar1 == '\0'))
       && (cVar1 = TAttribute<FMargin>::IsBound(param_1 + 0x510), cVar1 == '\0')) {
      if (((*(int *)(param_1 + 0x550) != 0) && (*(longlong **)(param_1 + 0x548) != (longlong *)0x0))
         && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x18))(), cVar1 != '\0')) {
        return 1;
      }
      cVar1 = TAttribute<FText>::IsBound(param_1 + 0x558);
      if (((cVar1 == '\0') && (cVar1 = TAttribute<float>::IsBound(param_1 + 0x588), cVar1 == '\0'))
         && ((cVar1 = TAttribute<float>::IsBound(param_1 + 0x5a0), cVar1 == '\0' &&
             ((((cVar1 = TAttribute<float>::IsBound(param_1 + 0x5b8), cVar1 == '\0' &&
                (cVar1 = TAttribute<FMargin>::IsBound(param_1 + 0x5d0), cVar1 == '\0')) &&
               (cVar1 = TAttribute<float>::IsBound(param_1 + 0x5f8), cVar1 == '\0')) &&
              ((cVar1 = TAttribute<float>::IsBound(param_1 + 0x610), cVar1 == '\0' &&
               (cVar1 = TAttribute<float>::IsBound(param_1 + 0x628), cVar1 == '\0')))))))) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1419ab980 FUN_1419ab980 body=2499 status=ok
// SIG undefined FUN_1419ab980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419ab980(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_7b8 [32];
  longlong local_798;
  longlong local_790;
  undefined4 local_788;
  longlong local_780;
  longlong local_778;
  longlong local_770;
  undefined1 local_768;
  undefined1 local_760;
  longlong local_758;
  undefined1 local_748 [8];
  longlong *local_740;
  longlong *local_738;
  longlong *local_730;
  int local_728;
  longlong *local_720;
  int local_718;
  longlong *local_710;
  int local_708;
  undefined8 local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined2 local_6e8;
  undefined8 local_6e0;
  undefined4 local_6d8;
  longlong *local_6d0;
  longlong *local_6c8;
  undefined1 *local_6c0;
  code *local_6b8;
  undefined4 uStack_6b0;
  undefined8 local_6a8;
  undefined1 local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined1 local_670;
  undefined8 local_668;
  longlong *plStack_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined1 local_630;
  undefined8 local_628;
  longlong *plStack_620;
  undefined1 local_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined8 local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  longlong *local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8;
  undefined1 local_5b0 [16];
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined1 local_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined1 local_538 [8];
  longlong *local_530;
  longlong *local_528;
  longlong *local_520;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4b8 [280];
  undefined1 local_3a0 [48];
  longlong *local_370;
  undefined1 local_360 [16];
  undefined1 local_350 [24];
  undefined1 local_338 [760];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  *(undefined8 *)(param_1 + 0x2f0) = *param_3;
  plVar3 = (longlong *)param_3[1];
  plVar8 = *(longlong **)(param_1 + 0x2f8);
  if (plVar3 != plVar8) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x2f8);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(param_1 + 0x2f8) = plVar3;
  }
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x31c) = *(undefined1 *)(param_2 + 0x114);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(param_2 + 300);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x338,param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x349) = *(undefined1 *)(param_2 + 0x141);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x350,param_2 + 0x148);
  local_6b8 = FUN_1419b2d40;
  local_510 = 0x3f800000;
  uStack_508 = 0x3f8000003f800000;
  local_630 = 2;
  local_640 = 0x3f800000;
  uStack_638 = 0x3f8000003f800000;
  local_6f8 = FUN_1419b4b50;
  local_618 = 1;
  local_628 = 0;
  plStack_620 = (longlong *)0x0;
  local_610 = 0;
  local_4e8 = 0x3f800000;
  uStack_4e0 = 0x3f8000003f800000;
  local_608 = 0;
  local_680 = 0x3f800000;
  uStack_678 = 0x3f8000003f800000;
  uStack_6b0 = 0;
  local_670 = 2;
  local_668 = 0;
  plStack_660 = (longlong *)0x0;
  local_658 = 1;
  local_5a0 = 0;
  uStack_598 = 0;
  local_650 = 0;
  local_648 = 0;
  local_590 = 1;
  local_588 = 0;
  local_580 = 0;
  uStack_6f0 = 0;
  local_5f8 = FUN_1419b3110;
  uStack_5f0 = 0;
  FName::FName(&local_688,"NoBorder",1);
  lVar6 = SImage::FArguments::FArguments(local_4b8);
  uVar7 = FUN_1417dd6e0(&local_730,param_1,&local_6b8);
  local_6a8 = 0;
  local_6a0 = 1;
  local_698 = 0;
  local_690 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_698,uVar7);
  *(undefined8 *)(lVar6 + 0x108) = local_6a8;
  *(undefined1 *)(lVar6 + 0x110) = local_6a0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x118,&local_698);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_698);
  if (local_728 == 0) {
LAB_1419abc19:
    if (local_730 != (longlong *)0x0) {
      FMemory::Free(local_730);
    }
  }
  else if (local_730 != (longlong *)0x0) {
    (**(code **)(*local_730 + 0x28))(local_730,0);
    if (local_730 != (longlong *)0x0) {
      local_730 = (longlong *)FMemory::Realloc(local_730,0,0);
    }
    local_728 = 0;
    goto LAB_1419abc19;
  }
  FUN_140692440(lVar6 + 0x128,&local_640);
  *(undefined1 *)(lVar6 + 0x150) = local_618;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x158,&local_610);
  plVar8 = (longlong *)FUN_140c61c00();
  plVar3 = plVar8 + 2;
  local_528 = plVar3;
  local_520 = plVar8;
  FUN_14044f790(&local_528,plVar3);
  local_798 = 0x278;
  SWidget::SetDebugInfo
            (plVar3,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SExpanderArrow.cpp"
             ,0x20);
  local_788 = *(undefined4 *)(lVar6 + 0x90);
  local_758 = lVar6 + 0xf8;
  local_770 = lVar6 + 0xe8;
  local_760 = *(undefined1 *)(lVar6 + 0xf1);
  local_778 = lVar6 + 200;
  local_780 = lVar6 + 0x98;
  local_768 = *(undefined1 *)(lVar6 + 0xf0);
  local_790 = lVar6 + 0x78;
  local_798 = lVar6 + 0x60;
  SWidget::SWidgetConstruct(plVar3,lVar6,lVar6 + 0x30,lVar6 + 0x40);
  SImage::Construct(plVar3,lVar6);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar4 != '\0')) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar10 = DAT_1469eb140;
  local_5e8 = plVar3;
  local_5e0 = plVar8;
  lVar6 = FUN_14068f3e0(local_338);
  local_578 = local_688;
  local_570 = local_688;
  lVar9 = (**(code **)(*plVar10 + 0x80))(plVar10,DAT_1469eb160);
  if (lVar9 == 0) {
    lVar9 = FUN_141834930();
  }
  local_568 = (undefined4)local_5f8;
  uStack_564 = local_5f8._4_4_;
  uStack_560 = uStack_5f0;
  uStack_55c = uStack_5ec;
  *(longlong *)(lVar6 + 0x118) = lVar9;
  *(undefined4 *)(lVar6 + 300) = 2;
  *(undefined4 *)(lVar6 + 0x128) = 2;
  uVar7 = FUN_1417dd840(&local_720,param_1,&local_568);
  local_6e8 = 0x119;
  local_6e0 = 0;
  local_6d8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_6e0,uVar7);
  *(undefined1 *)(lVar6 + 0x78) = (undefined1)local_6e8;
  *(undefined1 *)(lVar6 + 0x79) = local_6e8._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x80,&local_6e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6e0);
  if (local_718 == 0) {
LAB_1419abe74:
    if (local_720 != (longlong *)0x0) {
      FMemory::Free(local_720);
    }
  }
  else if (local_720 != (longlong *)0x0) {
    (**(code **)(*local_720 + 0x28))(local_720,0);
    if (local_720 != (longlong *)0x0) {
      local_720 = (longlong *)FMemory::Realloc(local_720,0,0);
    }
    local_718 = 0;
    goto LAB_1419abe74;
  }
  local_558 = (undefined4)local_6f8;
  uStack_554 = local_6f8._4_4_;
  uStack_550 = uStack_6f0;
  uStack_54c = uStack_6ec;
  *(undefined4 *)(lVar6 + 0x1d8) = 1;
  uVar7 = FUN_14068c820(&local_710,param_1,&local_558);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x188,uVar7);
  if (local_708 != 0) {
    if (local_710 == (longlong *)0x0) goto LAB_1419abf02;
    (**(code **)(*local_710 + 0x28))(local_710,0);
    if (local_710 != (longlong *)0x0) {
      local_710 = (longlong *)FMemory::Realloc(local_710,0,0);
    }
    local_708 = 0;
  }
  if (local_710 != (longlong *)0x0) {
    FMemory::Free(local_710);
  }
LAB_1419abf02:
  *(undefined1 *)(lVar6 + 0x140) = 1;
  *(undefined4 *)(lVar6 + 0x130) = (undefined4)local_5a0;
  *(undefined4 *)(lVar6 + 0x134) = local_5a0._4_4_;
  *(undefined4 *)(lVar6 + 0x138) = (undefined4)uStack_598;
  *(undefined4 *)(lVar6 + 0x13c) = uStack_598._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x148,&local_588);
  FUN_140692440(lVar6 + 0x268,&local_680);
  *(undefined1 *)(lVar6 + 0x290) = local_658;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x298,&local_650);
  *(undefined1 *)(lVar6 + 0x2a8) = 0;
  plVar10 = (longlong *)FUN_141880af0();
  plVar3 = plVar10 + 2;
  local_6d0 = plVar3;
  local_6c8 = plVar10;
  FUN_14044f790(&local_6d0,plVar3);
  local_6c0 = local_748;
  local_798 = 0x488;
  SWidget::SetDebugInfo
            (plVar3,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SExpanderArrow.cpp"
             ,0x15);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_740 = plVar3;
  local_738 = plVar10;
  if ((longlong **)(param_1 + 0x300) != &local_740) {
    *(longlong **)(param_1 + 0x300) = plVar3;
    local_740 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x308,&local_738);
  }
  plVar3 = local_738;
  if (local_738 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_738 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_738)(local_738);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_738 + 8))(local_738,1);
      }
    }
  }
  uVar7 = FUN_14188d200(lVar6,&local_5e8);
  puVar11 = (undefined8 *)FUN_14188de80(&local_6d0,local_538,uVar7);
  plVar3 = (longlong *)puVar11[1];
  local_5d8 = *puVar11;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uStack_6f0 = 0;
  local_5b8 = 1;
  local_6f8 = FUN_1419b2f90;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_548 = 0x419b2f90;
  uStack_544 = 1;
  uStack_540 = 0;
  uStack_53c = uStack_6ec;
  local_5d0 = plVar3;
  FUN_1418c8cd0(local_5b0,param_1,&local_548);
  *(undefined1 *)(param_1 + 0x250) = local_5b8;
  *(undefined4 *)(param_1 + 0x240) = (undefined4)local_5c8;
  *(undefined4 *)(param_1 + 0x244) = local_5c8._4_4_;
  *(undefined4 *)(param_1 + 0x248) = (undefined4)uStack_5c0;
  *(undefined4 *)(param_1 + 0x24c) = uStack_5c0._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,local_5b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_5b0);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_5d8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_530 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_530 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_530)(local_530);
      LOCK();
      piVar1 = (int *)((longlong)local_530 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_530 + 8))(local_530,1);
      }
    }
  }
  plVar3 = local_6c8;
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_6c8 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_6c8)(local_6c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_6c8 + 8))(local_6c8,1);
      }
    }
  }
  FUN_140690f70(local_338);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_350);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_360);
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_370 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar1 = (int *)((longlong)local_370 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_370 + 8))(local_370,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_3a0);
  FUN_140456c70(local_4b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_588);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_650);
  plVar3 = plStack_660;
  if (plStack_660 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_660 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_660)(plStack_660);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_660 + 8))(plStack_660,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_610);
  plVar3 = plStack_620;
  if (plStack_620 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_620 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_620)(plStack_620);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_620 + 8))(plStack_620,1);
      }
    }
  }
  return;
}



// FUNCTION 1419ac350 FUN_1419ac350 body=1108 status=ok
// SIG undefined FUN_1419ac350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001419ac5a2) */

void FUN_1419ac350(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_438 [32];
  longlong local_418;
  longlong local_410;
  undefined4 local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e0;
  longlong local_3d8;
  longlong *local_3c8;
  int local_3c0;
  undefined1 local_3b8;
  undefined1 local_3b7;
  longlong local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined1 local_390;
  undefined8 local_388;
  longlong *local_380;
  undefined1 local_378;
  undefined8 local_370;
  undefined4 local_368;
  longlong local_360;
  undefined1 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  local_408 = *(undefined4 *)(param_2 + 0x90);
  local_3d8 = param_2 + 0xf8;
  local_3f8 = param_2 + 200;
  local_3e0 = *(undefined1 *)(param_2 + 0xf1);
  local_400 = param_2 + 0x98;
  local_410 = param_2 + 0x78;
  local_3e8 = *(undefined1 *)(param_2 + 0xf0);
  local_418 = param_2 + 0x60;
  local_3f0 = param_2 + 0xe8;
  FUN_1418066b0(param_1,param_2,param_2 + 0x30,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3a8) = (undefined4)DAT_1468b5d88;
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x3ac) = DAT_1468b5d88._4_4_;
  local_3b8 = DAT_1464b9ee9;
  *(undefined1 *)(param_1 + 0x3b0) = DAT_1464b9ee9;
  *(undefined1 *)(param_1 + 0x3b1) = 1;
  local_3b7 = 1;
  local_3b0 = 0;
  local_3a8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b8,&local_3b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3b0);
  plVar2 = (longlong *)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x108);
  if ((longlong *)(param_2 + 0x130) != plVar2) {
    if ((*(int *)(param_2 + 0x138) == 0) ||
       (plVar5 = *(longlong **)(param_2 + 0x130), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3f8) != 0) &&
         (plVar5 = (longlong *)*plVar2, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar2 != 0) {
          lVar8 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x3f8) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar2);
    }
  }
  pplVar3 = (longlong **)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 0x140);
  if ((((*(int *)(param_2 + 0x128) != 0) && (*pplVar3 != (longlong *)0x0)) &&
      (cVar7 = (**(code **)(**pplVar3 + 0x18))(), cVar7 != '\0')) &&
     ((plVar2 = (longlong *)(param_1 + 0x3d0), *(int *)(param_2 + 0x128) != 0 &&
      (plVar5 = *pplVar3, plVar5 != (longlong *)0x0)))) {
    local_3c8 = (longlong *)0x0;
    local_3c0 = 0;
    if (pplVar3 != &local_3c8) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_3c8);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    if ((local_3c0 != 0) && (local_3c8 != (longlong *)0x0)) {
      (**(code **)(*local_3c8 + 0x20))(local_3c8,local_318);
    }
    iVar4 = *(int *)(param_1 + 0x3d8);
    *(int *)(param_1 + 0x3d8) = iVar4 + 1;
    if (*(int *)(param_1 + 0x3dc) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar4);
    }
    puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar2);
    *puVar10 = 0;
    *puVar10 = local_3c8;
    local_3c8 = (longlong *)0x0;
    *(int *)(puVar10 + 1) = local_3c0;
    local_3c0 = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x3c8);
  local_390 = *(undefined1 *)(lVar8 + 0xb58);
  local_3a0 = *(undefined4 *)(lVar8 + 0xb48);
  uStack_39c = *(undefined4 *)(lVar8 + 0xb4c);
  uStack_398 = *(undefined4 *)(lVar8 + 0xb50);
  uStack_394 = *(undefined4 *)(lVar8 + 0xb54);
  local_388 = *(undefined8 *)(lVar8 + 0xb60);
  local_380 = *(longlong **)(lVar8 + 0xb68);
  if (local_380 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_380 + 1) = (int)local_380[1] + 1;
    UNLOCK();
    lVar8 = *(longlong *)(param_1 + 0x3c8);
  }
  local_378 = 1;
  local_370 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_368 = 0;
  local_358 = 1;
  local_350 = 0;
  local_348 = 0;
  local_330 = 1;
  local_328 = 0;
  local_320 = 0;
  local_360 = lVar8 + 0xac0;
  lVar9 = FUN_141886d30(local_308);
  *(undefined1 *)(lVar9 + 0x130) = 1;
  *(undefined8 *)(lVar9 + 0x120) = 0;
  *(undefined8 *)(lVar9 + 0x128) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x138,&local_328);
  *(longlong *)(lVar9 + 0x188) = lVar8 + 0xac0;
  *(undefined1 *)(lVar9 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x198,&local_350);
  FUN_140692440(lVar9 + 0x250,&local_3a0);
  *(undefined1 *)(lVar9 + 0x278) = local_378;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x280,&local_370);
  FUN_141971ea0(param_1,lVar9);
  FUN_14188af70(local_308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_328);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_350);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_370);
  plVar2 = local_380;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_380 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_380 + 8))(local_380,1);
      }
    }
  }
  uVar13 = uVar12;
  if (0 < *(int *)(param_2 + 0x118)) {
    do {
      iVar4 = *(int *)(param_1 + 0x390);
      uVar6 = *(undefined8 *)(uVar13 + *(longlong *)(param_2 + 0x110));
      *(int *)(param_1 + 0x390) = iVar4 + 1;
      if (*(int *)(param_1 + 0x394) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x388,iVar4);
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      *(undefined8 *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar4 * 8) = uVar6;
      uVar13 = uVar13 + 8;
    } while ((int)uVar11 < *(int *)(param_2 + 0x118));
  }
  FUN_1419b97c0(param_1);
  return;
}



// FUNCTION 1419ac7b0 FUN_1419ac7b0 body=3406 status=ok
// SIG undefined FUN_1419ac7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419ac7b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong **pplVar12;
  undefined1 auStack_5f8 [32];
  undefined8 *local_5d8;
  undefined1 *local_5d0;
  longlong local_5c8;
  undefined4 *local_5c0;
  undefined4 *local_5b8;
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined1 local_5a6;
  undefined1 local_5a5;
  undefined8 local_598;
  undefined8 uStack_590;
  longlong local_588;
  longlong *plStack_580;
  longlong local_578;
  longlong *plStack_570;
  longlong *local_568;
  int local_560;
  longlong *local_558;
  int local_550;
  longlong *local_548;
  longlong *local_540;
  undefined8 local_538;
  longlong *local_530;
  code *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined1 local_518;
  undefined1 local_517;
  undefined8 local_510;
  undefined4 local_508;
  undefined1 local_500;
  undefined1 local_4ff;
  undefined8 local_4f8;
  undefined4 local_4f0;
  longlong local_4e8 [2];
  undefined1 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  longlong *plStack_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [16];
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 local_478 [8];
  longlong *local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  longlong *local_448;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_428 [8];
  undefined1 local_420 [472];
  undefined1 local_248 [480];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
  *(undefined1 *)(param_1 + 0x2a8) = *(undefined1 *)(param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x2a9) = *(undefined1 *)(param_2 + 0x2b9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2b0,param_2 + 0x2c0);
  plVar11 = (longlong *)0x0;
  plVar7 = (longlong *)(param_1 + 0x2d0);
  if ((longlong *)(param_2 + 0x2f0) != plVar7) {
    if ((*(int *)(param_2 + 0x2f8) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x2f0), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x2d8) != 0) &&
         (plVar9 = (longlong *)*plVar7, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar7 != 0) {
          lVar8 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x2d8) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x2e0);
  if ((longlong *)(param_2 + 0x300) != plVar7) {
    if ((*(int *)(param_2 + 0x308) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x300), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x2e8) != 0) &&
         (plVar9 = (longlong *)*plVar7, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar7 != 0) {
          lVar8 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x2e8) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x2f0);
  if ((longlong *)(param_2 + 0x310) != plVar7) {
    if ((*(int *)(param_2 + 0x318) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x310), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x2f8) != 0) &&
         (plVar9 = (longlong *)*plVar7, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar7 != 0) {
          lVar8 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x2f8) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x300);
  if ((longlong *)(param_2 + 0x3e0) != plVar7) {
    if ((*(int *)(param_2 + 1000) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x3e0), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x308) != 0) &&
         (plVar9 = (longlong *)*plVar7, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar7 != 0) {
          lVar8 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x308) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar7);
    }
  }
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 800);
  *(undefined1 *)(param_1 + 0x219) = *(undefined1 *)(param_2 + 0x321);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x220,param_2 + 0x328);
  *(undefined1 *)(param_1 + 0x230) = *(undefined1 *)(param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x231) = *(undefined1 *)(param_2 + 0x339);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x238,param_2 + 0x340);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x350);
  *(undefined1 *)(param_1 + 0x249) = *(undefined1 *)(param_2 + 0x351);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x250,param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x380);
  *(undefined1 *)(param_1 + 0x279) = *(undefined1 *)(param_2 + 0x381);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x398);
  *(undefined1 *)(param_1 + 0x291) = *(undefined1 *)(param_2 + 0x399);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x298,param_2 + 0x3a0);
  plVar7 = (longlong *)(param_1 + 0x2c0);
  if ((longlong *)(param_2 + 0x3b0) != plVar7) {
    if ((*(int *)(param_2 + 0x3b8) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x3b0), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x2c8) != 0) &&
         (plVar9 = (longlong *)*plVar7, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar7 != 0) {
          lVar8 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x2c8) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar7);
    }
  }
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x368);
  *(undefined1 *)(param_1 + 0x261) = *(undefined1 *)(param_2 + 0x369);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x268,param_2 + 0x370);
  *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(param_2 + 0x431);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x438);
  *(undefined1 *)(param_1 + 0x3b4) = *(undefined1 *)(param_2 + 0x43c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b8,param_2 + 0x440);
  *(undefined1 *)(param_1 + 0x3c8) = *(undefined1 *)(param_2 + 0x450);
  *(undefined1 *)(param_1 + 0x3c9) = *(undefined1 *)(param_2 + 0x451);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d0,param_2 + 0x458);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x330,param_2 + 0x3c0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 0x3d0);
  plVar7 = (longlong *)(param_1 + 0x388);
  if ((longlong *)(param_2 + 0x3f0) != plVar7) {
    if ((*(int *)(param_2 + 0x3f8) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x3f0), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x390) != 0) &&
         (plVar9 = (longlong *)*plVar7, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar7 != 0) {
          lVar8 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x390) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x398);
  if ((longlong *)(param_2 + 0x400) != plVar7) {
    if ((*(int *)(param_2 + 0x408) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x400), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3a0) != 0) &&
         (plVar9 = (longlong *)*plVar7, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar7 != 0) {
          lVar8 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar8;
        }
        *(undefined4 *)(param_1 + 0x3a0) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x310);
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x430);
  plVar9 = *(longlong **)(param_2 + 0x2d8);
  lVar8 = *(longlong *)(param_2 + 0x2d0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_588 = lVar8;
  plStack_580 = plVar9;
  if (&local_588 != plVar7) {
    local_588 = *plVar7;
    plStack_580 = *(longlong **)(param_1 + 0x318);
    *plVar7 = lVar8;
    *(longlong **)(param_1 + 0x318) = plVar9;
    local_68 = lVar8;
    plStack_60 = plVar9;
  }
  plVar9 = plStack_580;
  if (plStack_580 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_580 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_580)(plStack_580);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_580 + 8))(plStack_580,1);
      }
    }
  }
  uVar4 = DAT_1464b9ee9;
  lVar8 = *plVar7;
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x388) = DAT_1464b9ee9;
    *(undefined1 *)(lVar8 + 0x389) = 1;
    local_518 = uVar4;
    local_517 = 1;
    local_510 = 0;
    local_508 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x390,&local_510);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_510);
    lVar8 = *plVar7;
    local_528 = SMultiLineEditableText::OnHScrollBarMoved;
    uStack_520 = 0;
    local_498 = 0x419b5010;
    uStack_494 = 1;
    uStack_490 = 0;
    uStack_48c = uStack_51c;
    uVar6 = FUN_14195d910(&local_568,param_1,&local_498);
    FUN_1419a3390(lVar8,uVar6);
    if (local_560 != 0) {
      if (local_568 == (longlong *)0x0) goto LAB_1419acda6;
      (**(code **)(*local_568 + 0x28))(local_568,0);
      if (local_568 != (longlong *)0x0) {
        local_568 = (longlong *)FMemory::Realloc(local_568,0,0);
      }
      local_560 = 0;
    }
    if (local_568 != (longlong *)0x0) {
      FMemory::Free(local_568);
    }
  }
LAB_1419acda6:
  plVar9 = *(longlong **)(param_2 + 0x2e8);
  plVar7 = (longlong *)(param_1 + 800);
  lVar8 = *(longlong *)(param_2 + 0x2e0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_578 = lVar8;
  plStack_570 = plVar9;
  if (&local_578 != plVar7) {
    local_578 = *plVar7;
    plStack_570 = *(longlong **)(param_1 + 0x328);
    *plVar7 = lVar8;
    *(longlong **)(param_1 + 0x328) = plVar9;
    local_58 = lVar8;
    plStack_50 = plVar9;
  }
  plVar9 = plStack_570;
  if (plStack_570 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_570 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_570)(plStack_570);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_570 + 8))(plStack_570,1);
      }
    }
  }
  uVar4 = DAT_1464b9ee9;
  lVar8 = *plVar7;
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x388) = DAT_1464b9ee9;
    *(undefined1 *)(lVar8 + 0x389) = 1;
    local_500 = uVar4;
    local_4ff = 1;
    local_4f8 = 0;
    local_4f0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x390,&local_4f8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4f8);
    lVar8 = *plVar7;
    local_528 = SMultiLineEditableText::OnVScrollBarMoved;
    uStack_520 = 0;
    local_488 = 0x419b9340;
    uStack_484 = 1;
    uStack_480 = 0;
    uStack_47c = uStack_51c;
    uVar6 = FUN_14195d910(&local_558,param_1,&local_488);
    FUN_1419a3390(lVar8,uVar6);
    if (local_550 != 0) {
      if (local_558 == (longlong *)0x0) goto LAB_1419acef2;
      (**(code **)(*local_558 + 0x28))(local_558,0);
      if (local_558 != (longlong *)0x0) {
        local_558 = (longlong *)FMemory::Realloc(local_558,0,0);
      }
      local_550 = 0;
    }
    if (local_558 != (longlong *)0x0) {
      FMemory::Free(local_558);
    }
  }
LAB_1419acef2:
  FTextBlockStyle::FTextBlockStyle(local_428,*(undefined8 *)(param_2 + 0x1f0));
  if ((*(char *)(param_2 + 0x248) != '\0') ||
     (((*(int *)(param_2 + 600) != 0 && (*(longlong **)(param_2 + 0x250) != (longlong *)0x0)) &&
      (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x250) + 0x18))(), cVar5 != '\0')))) {
    uVar6 = FUN_14193e860(param_2 + 0x1f8);
    FUN_1417f9360(local_420,uVar6);
  }
  uStack_590 = *(longlong **)(param_2 + 0x1a0);
  local_598 = *(longlong *)(param_2 + 0x198);
  if (uStack_590 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_590 + 1) = (int)uStack_590[1] + 1;
    UNLOCK();
  }
  if (local_598 == 0) {
    plVar7 = (longlong *)FPlainTextLayoutMarshaller::Create(local_478);
    local_530 = (longlong *)plVar7[1];
    local_598 = *plVar7;
    if (local_530 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_530 + 1) = (int)local_530[1] + 1;
      UNLOCK();
    }
    local_538 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_590,&local_530);
    plVar7 = local_530;
    if (local_530 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_530 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_530)(local_530);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_530 + 8))(local_530,1);
        }
      }
    }
    if (local_470 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_470 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_470)(local_470);
        LOCK();
        piVar2 = (int *)((longlong)local_470 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_470 + 8))(local_470,1);
        }
      }
    }
  }
  if (uStack_590 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_590 + 1) = (int)uStack_590[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(uStack_590 + 1) = (int)uStack_590[1] + 1;
    UNLOCK();
  }
  lVar8 = operator_new(0x790);
  plVar7 = plVar11;
  if (lVar8 != 0) {
    local_468 = (undefined4)local_598;
    uStack_464 = local_598._4_4_;
    uStack_460 = (undefined4)uStack_590;
    uStack_45c = uStack_590._4_4_;
    if (uStack_590 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_590 + 1) = (int)uStack_590[1] + 1;
      UNLOCK();
    }
    local_458 = (undefined4)local_598;
    uStack_454 = local_598._4_4_;
    uStack_450 = (undefined4)uStack_590;
    uStack_44c = uStack_590._4_4_;
    if (uStack_590 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_590 + 1) = (int)uStack_590[1] + 1;
      UNLOCK();
    }
    local_5a7 = *(char *)(param_2 + 0x46b) != '\0';
    if ((bool)local_5a7) {
      local_5a8 = *(undefined1 *)(param_2 + 0x46a);
    }
    local_5a5 = *(char *)(param_2 + 0x469) != '\0';
    if ((bool)local_5a5) {
      local_5a6 = *(undefined1 *)(param_2 + 0x468);
    }
    uVar6 = FTextBlockStyle::FTextBlockStyle(local_248,local_428);
    local_5b8 = &local_468;
    local_5c0 = &local_458;
    local_5d0 = &local_5a8;
    local_5d8 = (undefined8 *)&local_5a6;
    local_5c8 = param_2 + 0x420;
    plVar7 = (longlong *)FUN_1419601e0(lVar8,param_1 + 0x208,param_2 + 0x108,uVar6);
  }
  puVar10 = (undefined8 *)(param_1 + 0x210);
  if (puVar10 == &local_4b0) {
    if (plVar7 == (longlong *)0x0) goto LAB_1419ad16d;
    FUN_141965990(plVar7);
  }
  else {
    plVar9 = (longlong *)*puVar10;
    *puVar10 = plVar7;
    if (plVar9 == (longlong *)0x0) goto LAB_1419ad16d;
    FUN_141965990(plVar9);
    plVar7 = plVar9;
  }
  FMemory::operator_delete(plVar7,0x790);
LAB_1419ad16d:
  plVar7 = uStack_590;
  if (uStack_590 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_590 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_590)(uStack_590);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_590 + 8))(uStack_590,1);
      }
    }
    plVar9 = uStack_590;
    LOCK();
    plVar7 = plVar7 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_590)(uStack_590);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_590 + 8))(uStack_590,1);
      }
    }
  }
  FUN_1419a2a00(*puVar10,param_2 + 0x138);
  FUN_1419a3ac0(*puVar10,param_2 + 0x168);
  FUN_1419a4c50(*puVar10,param_2 + 0x1a8,param_2 + 0x1c0,param_2 + 0x1d8);
  FUN_1419a30a0(*puVar10,param_2 + 0x260);
  FUN_1419a2f70(*puVar10,param_2 + 0x2a0);
  FUN_1419a3000(*puVar10,param_2 + 0x288);
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  local_448 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = param_1;
    *plVar7 = (longlong)&PTR_GetPoolName_144d6e320;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar8;
  }
  local_4e8[0] = 0;
  local_4e8[1] = 0;
  local_4d8 = 1;
  local_4d0 = 0;
  local_4c8 = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_4d0);
  }
  FSlateEditableTextLayout::SetDebugSourceInfo(*puVar10,local_4e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4d0);
  if (local_4e8[0] != 0) {
    FMemory::Free();
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_448 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_448 != (longlong *)0x0) {
      FMemory::Free(local_448);
    }
  }
  plVar9 = (longlong *)operator_new(0x10);
  plVar7 = plVar11;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar7 = plVar9;
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_144d6a6d0;
    plVar9[2] = (longlong)plVar7;
    plVar11 = plVar9;
  }
  pplVar12 = (longlong **)(param_1 + 0x350);
  local_548 = plVar7;
  local_540 = plVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_548,plVar7,plVar7);
  if (pplVar12 != &local_548) {
    *pplVar12 = plVar7;
    local_548 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x358,&local_540);
    plVar11 = local_540;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar7 = *pplVar12;
  local_4c0 = 0;
  plStack_4b8 = (longlong *)0x0;
  puVar10 = (undefined8 *)FName::FName(local_4a8,"EditText",1);
  local_5d0 = (undefined1 *)(param_2 + 0x410);
  local_5d8 = &local_4c0;
  FUN_1418d8750(plVar7,local_438,*puVar10,0);
  if (local_430 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_430 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_430)(local_430);
      LOCK();
      piVar2 = (int *)((longlong)local_430 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_430 + 8))(local_430,1);
      }
    }
  }
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_4b8 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_4b8)(plStack_4b8);
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
  plVar7 = uStack_590;
  if (uStack_590 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_590 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_590)(uStack_590);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_590 + 8))(uStack_590,1);
      }
    }
  }
  FUN_140691580(local_428);
  return;
}



// FUNCTION 1419ad500 FUN_1419ad500 body=1909 status=ok
// SIG undefined FUN_1419ad500(void)

void FUN_1419ad500(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_res10;
  undefined1 local_res11;
  longlong local_res18;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 *local_2d8;
  int local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  longlong *local_2c0;
  longlong local_2b8 [2];
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [8];
  longlong *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined1 local_218 [480];
  
  FText::operator=(param_1 + 0x208,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x120);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x228,param_2 + 0x128);
  FText::operator=(param_1 + 0x420,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x438) = *(undefined1 *)(param_2 + 0x150);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x440,param_2 + 0x158);
  FTextBlockStyle::operator=(param_1 + 0x240,*(undefined8 *)(param_2 + 0x1d8));
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x454) = *(undefined1 *)(param_2 + 0x16c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x458,param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x469) = *(undefined1 *)(param_2 + 0x181);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x470,param_2 + 0x188);
  *(undefined1 *)(param_1 + 0x480) = *(undefined1 *)(param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x481) = *(undefined1 *)(param_2 + 0x199);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x488,param_2 + 0x1a0);
  uVar4 = *(undefined4 *)(param_2 + 0x1e4);
  uVar5 = *(undefined4 *)(param_2 + 0x1e8);
  uVar6 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x49c) = uVar4;
  *(undefined4 *)(param_1 + 0x4a0) = uVar5;
  *(undefined4 *)(param_1 + 0x4a4) = uVar6;
  *(undefined1 *)(param_1 + 0x4a8) = *(undefined1 *)(param_2 + 0x1f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b0,param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x4dc) = *(undefined1 *)(param_2 + 0x20c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4e0,param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x220);
  *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(param_2 + 0x224);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4c8,param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x4f4) = *(undefined1 *)(param_2 + 0x264);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4f8,param_2 + 0x268);
  uStack_2f0 = *(longlong **)(param_2 + 600);
  local_2f8 = *(longlong *)(param_2 + 0x250);
  if (uStack_2f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_2f0 + 1) = (int)uStack_2f0[1] + 1;
    UNLOCK();
  }
  if (local_2f8 == 0) {
    plVar8 = (longlong *)FDefaultRichTextMarkupParser::Create(local_290);
    local_2e0 = (longlong *)plVar8[1];
    local_2f8 = *plVar8;
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
      UNLOCK();
    }
    local_2e8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_2f0,&local_2e0);
    plVar8 = local_2e0;
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_2e0 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_2e0)(local_2e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2e0 + 8))(local_2e0,1);
        }
      }
    }
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_288 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar1 = (int *)((longlong)local_288 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
  }
  uStack_300 = *(longlong **)(param_2 + 0x1b8);
  local_308 = *(longlong *)(param_2 + 0x1b0);
  if (uStack_300 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_300 + 1) = (int)uStack_300[1] + 1;
    UNLOCK();
  }
  if (local_308 == 0) {
    iVar14 = *(int *)(param_2 + 0x248);
    puVar13 = *(undefined8 **)(param_2 + 0x240);
    local_2d8 = (undefined8 *)0x0;
    local_2d0 = iVar14;
    if (iVar14 == 0) {
      local_2cc = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_2d8,iVar14,0);
      puVar11 = local_2d8;
      do {
        *puVar11 = *puVar13;
        lVar9 = puVar13[1];
        puVar11[1] = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        puVar11 = puVar11 + 2;
        puVar13 = puVar13 + 2;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    local_280 = 0;
    uStack_278 = 0;
    local_268 = (undefined4)local_2f8;
    uStack_264 = local_2f8._4_4_;
    uStack_260 = (undefined4)uStack_2f0;
    uStack_25c = uStack_2f0._4_4_;
    if (uStack_2f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_2f0 + 1) = (int)uStack_2f0[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)
             FUN_1418f4140(local_258,&local_268,&local_280,&local_2d8,
                           *(undefined8 *)(param_2 + 0x1d0));
    local_2c0 = (longlong *)plVar8[1];
    local_308 = *plVar8;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
      UNLOCK();
    }
    local_2c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_300,&local_2c0);
    plVar8 = local_2c0;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_2c0 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2c0 + 8))(local_2c0,1);
        }
      }
    }
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_250 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)local_250 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
  }
  puVar13 = *(undefined8 **)(param_2 + 0x278);
  puVar11 = puVar13 + (longlong)*(int *)(param_2 + 0x280) * 2;
  plVar8 = uStack_300;
  for (; uStack_300 = plVar8, puVar13 != puVar11; puVar13 = puVar13 + 2) {
    iVar14 = *(int *)(local_308 + 0x48);
    *(int *)(local_308 + 0x48) = iVar14 + 1;
    if (*(int *)(local_308 + 0x4c) < iVar14 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_308 + 0x40,iVar14);
    }
    puVar12 = (undefined8 *)((longlong)iVar14 * 0x10 + *(longlong *)(local_308 + 0x40));
    *puVar12 = *puVar13;
    lVar9 = puVar13[1];
    puVar12[1] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    plVar8 = uStack_300;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar9 = operator_new(0x68);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    local_248 = 0;
    uStack_240 = 0;
    local_238 = (undefined4)local_308;
    uStack_234 = local_308._4_4_;
    uStack_230 = (undefined4)uStack_300;
    uStack_22c = uStack_300._4_4_;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8 = uStack_300;
    }
    local_res9 = *(char *)(param_2 + 0x23b) != '\0';
    if ((bool)local_res9) {
      local_res8 = *(undefined1 *)(param_2 + 0x23a);
    }
    local_res11 = *(char *)(param_2 + 0x239) != '\0';
    if ((bool)local_res11) {
      local_res10 = *(undefined1 *)(param_2 + 0x238);
    }
    uVar10 = FTextBlockStyle::FTextBlockStyle(local_218,param_1 + 0x240);
    lVar9 = FUN_1419a8840(lVar9,param_1,uVar10,&local_res10,&local_res8,param_2 + 0x1c0,&local_238,
                          &local_248);
  }
  plVar2 = (longlong *)(param_1 + 0x238);
  if (plVar2 == &local_res18) {
    if (lVar9 == 0) goto LAB_1419adaee;
    FUN_141966250(lVar9);
  }
  else {
    lVar3 = *plVar2;
    *plVar2 = lVar9;
    if (lVar3 == 0) goto LAB_1419adaee;
    FUN_141966250(lVar3);
    lVar9 = lVar3;
  }
  FMemory::operator_delete(lVar9,0x68);
LAB_1419adaee:
  plVar7 = uStack_300;
  plVar15 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar15 = uStack_300;
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_300)(uStack_300);
      plVar15 = uStack_300;
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*uStack_300 + 8))(uStack_300,1);
      }
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  local_228 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = param_1;
    *plVar8 = (longlong)&PTR_GetPoolName_144d6e320;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[3] = lVar9;
  }
  local_2b8[0] = 0;
  local_2b8[1] = 0;
  local_2a8 = 1;
  local_2a0 = 0;
  local_298 = 0;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_2a0);
  }
  FTextLayout::SetDebugSourceInfo(*(undefined8 *)*plVar2,local_2b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2a0);
  if (local_2b8[0] != 0) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_228 = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_228 != (longlong *)0x0) {
      FMemory::Free(local_228);
    }
  }
  plVar8 = uStack_300;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar15 + 1;
    lVar9 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_300)(uStack_300);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*uStack_300 + 8))(uStack_300,1);
      }
    }
  }
  plVar8 = uStack_2f0;
  if (uStack_2f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_2f0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_2f0)(uStack_2f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*uStack_2f0 + 8))(uStack_2f0,1);
      }
    }
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
  return;
}



// FUNCTION 1419adc80 FUN_1419adc80 body=9363 status=ok
// SIG undefined FUN_1419adc80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419adc80(longlong param_1,longlong param_2,code *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_2208 [32];
  undefined1 *local_21e8;
  longlong local_21e0;
  undefined4 local_21d8;
  longlong local_21d0;
  longlong local_21c8;
  longlong local_21c0;
  undefined1 local_21b8;
  undefined1 local_21b0;
  longlong local_21a8;
  undefined1 local_2198;
  undefined1 local_2197;
  undefined1 local_2196;
  undefined1 local_2195;
  undefined1 local_2194;
  undefined1 local_2193;
  undefined1 local_2192;
  undefined1 local_2191;
  undefined1 local_2190;
  undefined1 local_218f [7];
  longlong local_2188;
  longlong *local_2178;
  longlong *plStack_2170;
  code *local_2168;
  undefined4 uStack_2160;
  uint uStack_215c;
  longlong local_2158;
  int local_2150;
  int local_214c;
  code *local_2148;
  undefined4 uStack_2140;
  uint uStack_213c;
  undefined8 local_2138;
  longlong *plStack_2130;
  longlong *local_2128;
  longlong *local_2120;
  undefined8 local_2118;
  longlong *local_2110;
  longlong *local_2108;
  longlong *local_2100;
  longlong *local_20f8;
  int local_20f0;
  code *local_20e8;
  undefined4 uStack_20e0;
  undefined4 uStack_20dc;
  undefined2 local_20d8;
  undefined8 local_20d0;
  undefined4 local_20c8;
  longlong *local_20c0;
  longlong *local_20b8;
  undefined2 local_20b0;
  undefined8 local_20a8;
  undefined4 local_20a0;
  undefined8 local_2098;
  longlong *local_2090;
  undefined8 local_2088;
  longlong *local_2080;
  longlong *local_2078;
  longlong *local_2070;
  undefined8 local_2068;
  longlong *local_2060;
  undefined8 local_2058;
  longlong *local_2050;
  undefined8 local_2048;
  longlong *local_2040;
  longlong *local_2038;
  longlong *local_2030;
  undefined1 *local_2028;
  longlong local_2020;
  int local_2018;
  int local_2014;
  undefined1 local_2010 [24];
  undefined1 local_1ff8;
  undefined8 local_1ff0;
  undefined4 local_1fe8;
  undefined8 local_1fe0;
  undefined1 local_1fd8;
  undefined8 local_1fd0;
  undefined4 local_1fc8;
  undefined8 local_1fc0;
  undefined1 local_1fb8 [24];
  undefined1 local_1fa0;
  undefined8 local_1f98;
  undefined4 local_1f90;
  undefined8 local_1f88;
  ulonglong uStack_1f80;
  longlong local_1f78;
  longlong local_1f70;
  undefined1 *local_1f68;
  longlong local_1f60;
  longlong local_1f58;
  undefined1 *local_1f50;
  longlong local_1f48;
  longlong local_1f40;
  undefined1 *local_1f38;
  longlong local_1f30;
  longlong local_1f28;
  undefined1 *local_1f20;
  undefined4 local_1f18;
  undefined1 local_1f14;
  undefined8 local_1f10;
  undefined4 local_1f08;
  undefined8 local_1f00;
  undefined8 local_1ef8;
  undefined4 uStack_1ef0;
  undefined4 uStack_1eec;
  undefined1 local_1ee8;
  undefined8 local_1ee0;
  undefined4 local_1ed8;
  longlong local_1ed0;
  longlong local_1ec8;
  undefined1 *local_1ec0;
  undefined1 local_1eb8;
  undefined1 local_1eb7;
  undefined8 local_1eb0;
  undefined4 local_1ea8;
  undefined4 local_1ea0;
  undefined4 local_1e9c;
  undefined1 local_1e98;
  undefined8 local_1e90;
  undefined4 local_1e88;
  undefined4 local_1e80;
  undefined4 local_1e7c;
  undefined1 local_1e78;
  undefined8 local_1e70;
  undefined4 local_1e68;
  longlong *local_1e60;
  longlong *local_1e58;
  undefined1 *local_1e50;
  undefined1 local_1e48 [8];
  longlong *local_1e40;
  undefined1 local_1e30;
  undefined8 local_1e28;
  undefined4 local_1e20;
  undefined8 local_1e18;
  longlong *local_1e10;
  longlong *local_1e08;
  longlong *local_1e00;
  longlong local_1df8;
  longlong local_1df0;
  longlong local_1de8;
  longlong local_1de0;
  longlong *local_1dd8;
  longlong *local_1dd0;
  undefined8 local_1dc8;
  longlong local_1dc0;
  undefined8 local_1db8;
  longlong *local_1db0;
  longlong *local_1da8;
  longlong *local_1da0;
  undefined8 local_1d98;
  longlong *local_1d90;
  undefined8 local_1d88;
  undefined8 uStack_1d80;
  undefined1 local_1d78;
  undefined8 local_1d70;
  undefined8 uStack_1d68;
  undefined1 local_1d60;
  undefined8 local_1d58;
  undefined4 local_1d50;
  longlong local_1d48;
  undefined1 local_1d40;
  undefined8 local_1d38;
  undefined4 local_1d30;
  undefined4 local_1d28;
  undefined4 uStack_1d24;
  undefined4 uStack_1d20;
  undefined4 uStack_1d1c;
  undefined1 local_1d18;
  undefined8 local_1d10;
  undefined4 local_1d08;
  undefined4 local_1d00;
  undefined4 uStack_1cfc;
  undefined4 uStack_1cf8;
  undefined4 uStack_1cf4;
  undefined1 local_1cf0;
  undefined8 local_1ce8;
  undefined4 local_1ce0;
  undefined4 local_1cd8;
  undefined4 uStack_1cd4;
  undefined4 uStack_1cd0;
  undefined4 uStack_1ccc;
  undefined1 local_1cc8;
  undefined8 local_1cc0;
  undefined8 uStack_1cb8;
  undefined1 local_1cb0;
  undefined8 local_1ca8;
  undefined4 local_1ca0;
  undefined8 local_1c98;
  undefined8 uStack_1c90;
  undefined1 local_1c88;
  undefined8 local_1c80;
  undefined4 local_1c78;
  undefined8 local_1c70;
  undefined8 uStack_1c68;
  undefined1 local_1c60;
  undefined8 local_1c58;
  undefined4 local_1c50;
  undefined8 local_1c48;
  code *local_1c38;
  undefined8 uStack_1c30;
  undefined1 local_1c28 [16];
  code *local_1c18;
  undefined8 uStack_1c10;
  undefined1 local_1c08 [16];
  undefined1 local_1bf8 [8];
  longlong *local_1bf0;
  code *local_1be8;
  longlong lStack_1be0;
  undefined1 local_1bd8 [8];
  longlong *local_1bd0;
  undefined1 local_1bc8 [8];
  longlong *local_1bc0;
  undefined1 local_1bb8 [8];
  longlong *local_1bb0;
  undefined1 local_1ba8 [16];
  undefined1 local_1b98 [8];
  longlong *local_1b90;
  code *local_1b88;
  undefined8 uStack_1b80;
  code *local_1b78;
  longlong lStack_1b70;
  undefined1 local_1b68 [16];
  code *local_1b58;
  undefined8 uStack_1b50;
  longlong *local_1b48;
  longlong *plStack_1b40;
  undefined1 local_1b38 [8];
  longlong *local_1b30;
  longlong *local_1b28;
  longlong *plStack_1b20;
  longlong *local_1b18;
  longlong *local_1b10;
  longlong *local_1b00;
  longlong *local_1af8;
  longlong *local_1ae8;
  longlong *local_1ae0;
  code *local_1ac8;
  undefined8 uStack_1ac0;
  undefined8 local_1ab8;
  undefined8 uStack_1ab0;
  undefined8 local_1aa8;
  undefined8 uStack_1aa0;
  undefined1 local_1a98 [8];
  longlong *local_1a90;
  longlong local_1a88;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined1 local_1a68;
  undefined8 local_1a60;
  undefined4 local_1a58;
  undefined8 local_1a50;
  undefined8 uStack_1a48;
  undefined1 local_1a40;
  undefined8 local_1a38;
  undefined4 local_1a30;
  undefined8 local_1a28;
  undefined8 uStack_1a20;
  undefined1 local_1a18;
  undefined8 local_1a10;
  undefined4 local_1a08;
  undefined1 local_1a00 [8];
  undefined8 local_19f8;
  undefined1 local_19f0 [8];
  longlong *local_19e8;
  undefined1 local_19e0 [8];
  longlong *local_19d8;
  undefined4 local_19d0;
  undefined4 uStack_19cc;
  undefined4 uStack_19c8;
  undefined4 uStack_19c4;
  undefined1 local_19c0;
  undefined8 local_19b8;
  undefined8 uStack_19b0;
  undefined1 local_19a8 [8];
  longlong *local_19a0;
  undefined1 local_1990 [24];
  undefined1 local_1978 [24];
  undefined1 local_1960 [24];
  undefined8 local_1948;
  longlong *plStack_1940;
  undefined1 local_1938 [264];
  longlong local_1830;
  undefined1 local_1818 [264];
  longlong local_1710;
  undefined1 local_16f8 [264];
  longlong local_15f0;
  undefined1 local_15d8 [280];
  undefined1 local_14c0 [24];
  undefined1 local_14a8 [280];
  undefined1 local_1390 [24];
  undefined1 local_1378 [384];
  undefined1 local_11f8 [384];
  undefined1 local_1078 [496];
  undefined1 local_e88 [576];
  undefined1 local_c48 [688];
  undefined1 local_998 [688];
  undefined1 local_6e8 [768];
  undefined1 local_3e8 [912];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2208;
  local_21d8 = *(undefined4 *)(param_2 + 0x90);
  local_21a8 = param_2 + 0xf8;
  local_21c0 = param_2 + 0xe8;
  local_21b0 = *(undefined1 *)(param_2 + 0xf1);
  local_21c8 = param_2 + 200;
  local_21d0 = param_2 + 0x98;
  local_21b8 = *(undefined1 *)(param_2 + 0xf0);
  local_21e0 = param_2 + 0x78;
  local_21e8 = (undefined1 *)(param_2 + 0x60);
  local_2188 = param_1;
  local_20e8 = param_3;
  FUN_1418066b0(param_1,param_2,param_2 + 0x30,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)param_3;
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)((longlong)param_3 + 0xe8);
  *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)((longlong)param_3 + 0xec);
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (param_1 + 0x2f8,(undefined8 *)((longlong)param_3 + 0xf0));
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)((longlong)param_3 + 0x100);
  *(undefined1 *)(param_1 + 0x30c) = *(undefined1 *)((longlong)param_3 + 0x104);
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (param_1 + 0x310,(undefined8 *)((longlong)param_3 + 0x108));
  local_2168 = (code *)(param_1 + 800);
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (local_2168,(undefined8 *)((longlong)param_3 + 0x118));
  plVar9 = *(longlong **)((longlong)param_3 + 0xb8);
  local_2148 = (code *)(param_1 + 0x330);
  uVar10 = *(undefined8 *)((longlong)param_3 + 0xb0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_2138 = uVar10;
  plStack_2130 = plVar9;
  if ((code *)&local_2138 != local_2148) {
    local_2138 = *(undefined8 *)local_2148;
    plStack_2130 = *(longlong **)(param_1 + 0x338);
    *(undefined8 *)local_2148 = uVar10;
    *(longlong **)(param_1 + 0x338) = plVar9;
    local_1948 = uVar10;
    plStack_1940 = plVar9;
  }
  plVar9 = plStack_2130;
  if (plStack_2130 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_2130 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_2130)(plStack_2130);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plStack_2130 + 8))(plStack_2130,1);
      }
    }
  }
  local_1f88 = *param_4;
  uStack_1f80 = param_4[1];
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)((longlong)param_3 + 0xdc);
  FText::FText(local_2010,(undefined8 *)((longlong)param_3 + 8));
  local_1ff8 = *(undefined1 *)((longlong)param_3 + 0x20);
  local_1ff0 = 0;
  local_1fe8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (&local_1ff0,(undefined8 *)((longlong)param_3 + 0x28));
  FText::FText(local_1fb8,(undefined8 *)((longlong)param_3 + 0x38));
  local_1fa0 = *(undefined1 *)((longlong)param_3 + 0x50);
  local_1f98 = 0;
  local_1f90 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (&local_1f98,(undefined8 *)((longlong)param_3 + 0x58));
  if (*(longlong **)((longlong)param_3 + 0xa0) == DAT_1469eb218) {
    if (*(char *)((longlong)param_3 + 0x20) == '\0') {
      plVar9 = (longlong *)FName::ToString(param_3);
      lVar17 = plVar9[1];
      local_2158 = *plVar9;
      *plVar9 = 0;
      local_2150 = (int)plVar9[1];
      local_214c = *(int *)((longlong)plVar9 + 0xc);
      plVar9[1] = 0;
      iVar18 = local_2150;
      if (local_214c < (int)((0xf - (uint)((int)lVar17 != 0)) + local_2150)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2158);
        iVar18 = local_2150;
      }
      local_2150 = (0xf - (uint)(iVar18 != 0)) + iVar18;
      if (local_214c < local_2150) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2158,iVar18);
      }
      lVar17 = (longlong)iVar18 - (ulonglong)(iVar18 != 0);
      puVar12 = (undefined8 *)(local_2158 + lVar17 * 2);
      *puVar12 = 0x620061004c005b;
      puVar12[1] = 0x69004d006c0065;
      *(undefined8 *)(local_2158 + 0x10 + lVar17 * 2) = 0x6e006900730073;
      *(undefined4 *)(local_2158 + 0x18 + lVar17 * 2) = 0x5d0067;
      *(undefined2 *)(local_2158 + 0x1c + lVar17 * 2) = 0;
      local_2020 = local_2158;
      local_2018 = local_2150;
      local_2014 = local_214c;
      uVar10 = FText::FromString(local_19a8,&local_2020);
      FText::FText(local_1e48,uVar10);
      local_1e30 = 1;
      local_1e28 = 0;
      local_1e20 = 0;
      FText::operator=(local_2010,local_1e48);
      local_1ff8 = local_1e30;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1ff0,&local_1e28);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e28);
      if (local_1e40 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1e40 + 1;
        lVar17 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_1e40)(local_1e40);
          LOCK();
          piVar1 = (int *)((longlong)local_1e40 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_1e40 + 8))(local_1e40,1);
          }
        }
      }
      if (local_19a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_19a0 + 1;
        lVar17 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_19a0)(local_19a0);
          LOCK();
          piVar1 = (int *)((longlong)local_19a0 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_19a0 + 8))(local_19a0,1);
          }
        }
      }
      if (local_2020 != 0) {
        FMemory::Free();
      }
      if (local_1a88 != 0) {
        FMemory::Free();
      }
    }
    if (*(char *)((longlong)param_3 + 0x50) == '\0') {
      FText::operator=(local_1fb8,local_2010);
      local_1fa0 = local_1ff8;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1f98,&local_1ff0);
    }
  }
  local_2100 = (longlong *)0x0;
  plVar9 = (longlong *)operator_new(0x240);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar13 = plVar9 + 2;
  local_1b18 = plVar13;
  local_1b10 = plVar9;
  FUN_14044f790(&local_1b18,plVar13);
  local_21e8 = (undefined1 *)0x230;
  SWidget::SetDebugInfo
            (plVar13,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x52);
  lVar17 = SOverlay::FArguments::FArguments(local_1938);
  local_21d8 = *(undefined4 *)(lVar17 + 0x90);
  local_21a8 = lVar17 + 0xf8;
  local_21c0 = lVar17 + 0xe8;
  local_21b0 = *(undefined1 *)(lVar17 + 0xf1);
  local_21c8 = lVar17 + 200;
  local_21d0 = lVar17 + 0x98;
  local_21b8 = *(undefined1 *)(lVar17 + 0xf0);
  local_21e0 = lVar17 + 0x78;
  local_21e8 = (undefined1 *)(lVar17 + 0x60);
  SWidget::SWidgetConstruct(plVar13,lVar17,lVar17 + 0x30,lVar17 + 0x40);
  SOverlay::Construct(plVar13,lVar17);
  if (((char)plVar9[5] < '\0') || (cVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar8;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar9 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_1830 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1938);
  plVar11 = (longlong *)operator_new(0x248);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_144044b58;
    if (plVar11 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar6 = plVar11 + 2;
  local_2038 = plVar6;
  local_2030 = plVar11;
  FUN_14044f790(&local_2038,plVar6);
  local_2028 = &local_2198;
  local_21e8 = (undefined1 *)0x238;
  SWidget::SetDebugInfo
            (plVar6,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x56);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_2088 = 0;
  local_2108 = plVar6;
  local_2080 = plVar11;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2100,&local_2080);
  plVar11 = local_2080;
  if (local_2080 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2080 + 1;
    lVar17 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2080)(local_2080);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_2080 + 8))(local_2080,1);
      }
    }
  }
  uVar10 = SCanvas::FArguments::FArguments(local_1818);
  puVar12 = (undefined8 *)FUN_140693150(&local_2038,local_19e0,uVar10);
  plVar11 = (longlong *)puVar12[1];
  local_1e18 = *puVar12;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_1e10 = plVar11;
  uVar10 = FUN_141801800(plVar13,0);
  FUN_140801a00(uVar10,&local_1e18);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (local_19d8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_19d8 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_19d8)(local_19d8);
      LOCK();
      piVar1 = (int *)((longlong)local_19d8 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_19d8 + 8))(local_19d8,1);
      }
    }
  }
  plVar13 = local_2030;
  if (local_2030 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_2030 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2030)(local_2030);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_2030 + 8))(local_2030,1);
      }
    }
  }
  if (local_1710 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1818);
  plStack_2170 = *(longlong **)((longlong)param_3 + 0xa8);
  local_2178 = *(longlong **)((longlong)param_3 + 0xa0);
  if (plStack_2170 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_2170 + 1) = (int)plStack_2170[1] + 1;
    UNLOCK();
  }
  if (local_2178 == DAT_1469eb218) {
    if (((*(int *)(local_2168 + 8) == 0) || (*(longlong **)local_2168 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)local_2168 + 0x18))(), cVar7 == '\0')) {
      puVar12 = &local_1ab8;
      local_1ab8 = 0x4080000000000000;
      uStack_1ab0 = 0x4080000000000000;
    }
    else {
      puVar12 = &local_1aa8;
      local_1aa8 = 0x4000000000000000;
      uStack_1aa0 = 0x4000000000000000;
    }
    local_1c70 = *puVar12;
    uStack_1c68 = puVar12[1];
    local_1c60 = 1;
    local_1c58 = 0;
    local_1c50 = 0;
    lVar17 = STextBlock::FArguments::FArguments(local_3e8);
    FText::operator=(lVar17 + 0x108,local_2010);
    *(undefined1 *)(lVar17 + 0x120) = local_1ff8;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar17 + 0x128,&local_1ff0);
    FText::operator=(lVar17,local_1fb8);
    *(undefined1 *)(lVar17 + 0x18) = local_1fa0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar17 + 0x20,&local_1f98);
    plVar13 = (longlong *)operator_new(0x660);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar13 + 1) = 1;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      *plVar13 = (longlong)&PTR_FUN_144043520;
      if (plVar13 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar11 = plVar13 + 2;
    local_1b00 = plVar11;
    local_1af8 = plVar13;
    FUN_14044f790(&local_1b00,plVar11);
    local_21e8 = (undefined1 *)0x650;
    SWidget::SetDebugInfo
              (plVar11,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0x61);
    local_21d8 = *(undefined4 *)(lVar17 + 0x90);
    local_21a8 = lVar17 + 0xf8;
    local_21c0 = lVar17 + 0xe8;
    local_21b0 = *(undefined1 *)(lVar17 + 0xf1);
    local_21c8 = lVar17 + 200;
    local_21d0 = lVar17 + 0x98;
    local_21b8 = *(undefined1 *)(lVar17 + 0xf0);
    local_21e0 = lVar17 + 0x78;
    local_21e8 = (undefined1 *)(lVar17 + 0x60);
    SWidget::SWidgetConstruct(plVar11,lVar17,lVar17 + 0x30,lVar17 + 0x40);
    FUN_1419b0120(plVar11,lVar17);
    if (((char)plVar13[5] < '\0') ||
       (cVar7 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar7 != '\0')) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar8;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_1e08 = plVar11;
    local_1e00 = plVar13;
    lVar17 = FUN_14068f180(local_1078);
    uVar10 = *puVar12;
    uVar15 = puVar12[1];
    *(undefined1 *)(lVar17 + 0x120) = 1;
    *(undefined8 *)(lVar17 + 0x110) = uVar10;
    *(undefined8 *)(lVar17 + 0x118) = uVar15;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar17 + 0x128,&local_1c58);
    *(undefined4 *)(lVar17 + 0x10c) = 2;
    plVar11 = (longlong *)operator_new(800);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar11 + 1) = 1;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_144044b78;
      if (plVar11 != (longlong *)0xfffffffffffffff0) {
        FUN_1419618a0();
      }
    }
    plVar6 = plVar11 + 2;
    local_1ae8 = plVar6;
    local_1ae0 = plVar11;
    FUN_14044f790(&local_1ae8,plVar6);
    local_21e8 = (undefined1 *)0x310;
    SWidget::SetDebugInfo
              (plVar6,&DAT_144044860,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0x5d);
    lVar17 = FUN_140692660(lVar17,&local_1e08);
    local_21d8 = *(undefined4 *)(lVar17 + 0x90);
    local_21a8 = lVar17 + 0xf8;
    local_21c0 = lVar17 + 0xe8;
    local_21b0 = *(undefined1 *)(lVar17 + 0xf1);
    local_21e0 = lVar17 + 0x78;
    local_21c8 = lVar17 + 200;
    local_21b8 = *(undefined1 *)(lVar17 + 0xf0);
    local_21d0 = lVar17 + 0x98;
    local_21e8 = (undefined1 *)(lVar17 + 0x60);
    plVar6 = plVar11 + 2;
    SWidget::SWidgetConstruct(plVar6,lVar17,lVar17 + 0x30,lVar17 + 0x40);
    FUN_141972160(plVar6,lVar17);
    if (((char)plVar11[5] < '\0') || (cVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar7 != '\0')
       ) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    plVar3 = plStack_2170;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar8;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_2078 = local_2178;
    local_2070 = plStack_2170;
    local_2178 = plVar6;
    plVar6 = plVar11;
    if (plStack_2170 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2170 + 1;
      lVar17 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        puVar12 = (undefined8 *)*plStack_2170;
        plStack_2170 = plVar11;
        (*(code *)*puVar12)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_2170;
        if (iVar18 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
          plVar6 = plStack_2170;
        }
      }
    }
    plStack_2170 = plVar6;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar11 + 1;
      lVar17 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      LOCK();
      plVar6 = plVar11 + 1;
      lVar17 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    FUN_140690ea0(local_1078);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar17 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      LOCK();
      plVar11 = plVar13 + 1;
      lVar17 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    FUN_140691150(local_3e8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c58);
    param_3 = local_20e8;
  }
  lVar17 = local_2188;
  if (((*(int *)(local_2168 + 8) == 0) || (*(longlong **)local_2168 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(**(longlong **)local_2168 + 0x18))(), lVar17 = local_2188, cVar7 == '\0')
     ) goto LAB_1419aedbd;
  local_2168 = FUN_1419b8ca0;
  uStack_2160 = 0;
  local_1d18 = 1;
  local_1d28 = 0;
  uStack_1d24 = 0x40000000;
  uStack_1d20 = 0;
  uStack_1d1c = 0x40000000;
  local_1d10 = 0;
  local_19d0 = 0x3f800000;
  uStack_19cc = 0;
  uStack_19c8 = 0x3f800000;
  uStack_19c4 = 0x3f800000;
  local_1d08 = 0;
  local_19b8 = 0;
  uStack_19b0 = 0;
  local_19c0 = 2;
  local_1cd8 = 0x3f800000;
  uStack_1cd4 = 0;
  uStack_1cd0 = 0x3f800000;
  uStack_1ccc = 0x3f800000;
  local_1cc8 = 2;
  local_1cc0 = 0;
  uStack_1cb8 = 0;
  local_1cb0 = 1;
  local_1ca8 = 0;
  local_1ca0 = 0;
  FName::FName(&local_1fc0,"NoBorder",1);
  local_1b28 = local_2178;
  plStack_1b20 = plStack_2170;
  uVar20 = 0;
  uVar21 = 0x40000000;
  uVar22 = 0;
  uVar23 = 0x40000000;
  if (plStack_2170 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_2170 + 1) = (int)plStack_2170[1] + 1;
    UNLOCK();
    uVar20 = local_1d28;
    uVar21 = uStack_1d24;
    uVar22 = uStack_1d20;
    uVar23 = uStack_1d1c;
  }
  plVar13 = DAT_1469eb140;
  lVar14 = FUN_14068f3e0(local_6e8);
  local_1c48 = local_1fc0;
  local_19f8 = local_1fc0;
  lVar17 = (**(code **)(*plVar13 + 0x80))(plVar13,DAT_1469eb160);
  if (lVar17 == 0) {
    lVar17 = FUN_141834930();
  }
  *(longlong *)(lVar14 + 0x118) = lVar17;
  FUN_140692440(lVar14 + 0x268,&local_1cd8);
  *(undefined1 *)(lVar14 + 0x290) = local_1cb0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x298,&local_1ca8);
  *(undefined1 *)(lVar14 + 0x140) = 1;
  *(undefined4 *)(lVar14 + 0x130) = uVar20;
  *(undefined4 *)(lVar14 + 0x134) = uVar21;
  *(undefined4 *)(lVar14 + 0x138) = uVar22;
  *(undefined4 *)(lVar14 + 0x13c) = uVar23;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x148,&local_1d10);
  lVar17 = local_2188;
  uStack_1ac0 = CONCAT44(uStack_215c,uStack_2160);
  local_1ac8 = local_2168;
  uVar10 = FUN_14068c820(&local_20f8,local_2188,&local_1ac8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x188,uVar10);
  if (local_20f0 == 0) {
LAB_1419aec3d:
    if (local_20f8 != (longlong *)0x0) {
      FMemory::Free(local_20f8);
    }
  }
  else if (local_20f8 != (longlong *)0x0) {
    (**(code **)(*local_20f8 + 0x28))(local_20f8,0);
    if (local_20f8 != (longlong *)0x0) {
      local_20f8 = (longlong *)FMemory::Realloc(local_20f8,0,0);
    }
    local_20f0 = 0;
    goto LAB_1419aec3d;
  }
  local_1ec8 = FUN_141880af0();
  lVar19 = local_1ec8 + 0x10;
  local_1ed0 = lVar19;
  FUN_14044f790(&local_1ed0,lVar19);
  local_1ec0 = &local_2197;
  local_21e8 = (undefined1 *)0x488;
  SWidget::SetDebugInfo
            (lVar19,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x6a);
  uVar10 = FUN_14188d200(lVar14,&local_1b28);
  plVar11 = (longlong *)FUN_14188de80(&local_1ed0,local_1b38,uVar10);
  plVar6 = plStack_2170;
  plVar13 = (longlong *)*plVar11;
  plVar11 = (longlong *)plVar11[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_20c0 = local_2178;
  local_20b8 = plStack_2170;
  local_2178 = plVar13;
  if (plStack_2170 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_2170 + 1;
    lVar14 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      puVar12 = (undefined8 *)*plStack_2170;
      plStack_2170 = plVar11;
      (*(code *)*puVar12)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar11 = plStack_2170;
      if (iVar18 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
        plVar11 = plStack_2170;
      }
    }
  }
  plStack_2170 = plVar11;
  if (local_1b30 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1b30 + 1;
    lVar14 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1b30)(local_1b30);
      LOCK();
      piVar1 = (int *)((longlong)local_1b30 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_1b30 + 8))(local_1b30,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1ed0);
  FUN_140690f70(local_6e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1ca8);
  FUN_1417f7230(&local_1cd8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_19b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d10);
LAB_1419aedbd:
  local_1f18 = 0x3f800000;
  local_1b48 = local_2178;
  plStack_1b40 = plStack_2170;
  local_1f14 = 1;
  local_1f10 = 0;
  local_1f08 = 0;
  if (plStack_2170 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_2170 + 1) = (int)plStack_2170[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140693c40(local_2108);
  uVar10 = SHorizontalBox::FSlot::FillWidth(uVar10,&local_1f18);
  FUN_140692760(uVar10,&local_1b48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f10);
  uVar5 = DAT_1464b9eeb;
  if (*(longlong **)((longlong)param_3 + 0xb0) != DAT_1469eb218) {
    local_1eb8 = DAT_1464b9eeb;
    lVar19 = *(longlong *)(lVar17 + 0x370) + 0x338;
    local_1eb7 = 1;
    local_1eb0 = 0;
    local_1ea8 = 0;
    local_2168 = FUN_1419b27f0;
    uStack_2160 = 0;
    local_1d40 = 1;
    local_1d38 = 0;
    local_1d30 = 0;
    local_1d48 = lVar19;
    lVar14 = SImage::FArguments::FArguments(local_1378);
    *(longlong *)(lVar14 + 0x108) = lVar19;
    *(undefined1 *)(lVar14 + 0x110) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x118,&local_1d38);
    uStack_1b50 = CONCAT44(uStack_215c,uStack_2160);
    local_1b58 = local_2168;
    uVar10 = FUN_14187cd30(local_1b68,lVar17,&local_1b58);
    local_1d78 = 0;
    local_1d60 = 1;
    local_1d58 = 0;
    local_1d88 = 0x3f800000;
    uStack_1d80 = 0x3f8000003f800000;
    local_1d50 = 0;
    local_1d70 = 0;
    uStack_1d68 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1d58,uVar10);
    FUN_140692440(lVar14 + 0x128,&local_1d88);
    *(undefined1 *)(lVar14 + 0x150) = local_1d60;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x158,&local_1d58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d58);
    FUN_1417f7230(&local_1d88);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1b68);
    *(undefined1 *)(lVar14 + 0x78) = uVar5;
    *(undefined1 *)(lVar14 + 0x79) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x80,&local_1eb0);
    local_1f58 = FUN_140c61c00();
    lVar17 = local_1f58 + 0x10;
    local_1f60 = lVar17;
    FUN_14044f790(&local_1f60,lVar17);
    local_1f50 = &local_2196;
    local_21e8 = (undefined1 *)0x278;
    SWidget::SetDebugInfo
              (lVar17,"SImage",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0xa4);
    puVar12 = (undefined8 *)FUN_14188e090(&local_1f60,local_19f0,lVar14);
    local_2048 = *puVar12;
    local_2040 = (longlong *)puVar12[1];
    if (local_2040 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2040 + 1) = (int)local_2040[1] + 1;
      UNLOCK();
    }
    local_1ea0 = 0x41600000;
    local_1e9c = 0;
    local_1e98 = 1;
    local_1e90 = 0;
    local_1e88 = 0;
    lVar14 = SSpacer::FArguments::FArguments(local_14a8);
    *(undefined8 *)(lVar14 + 0x108) = 0x41600000;
    *(undefined1 *)(lVar14 + 0x110) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x118,&local_1e90);
    local_1f40 = FUN_141880f80();
    lVar17 = local_1f40 + 0x10;
    local_1f48 = lVar17;
    FUN_14044f790(&local_1f48,lVar17);
    local_1f38 = &local_2195;
    local_21e8 = (undefined1 *)0x228;
    SWidget::SetDebugInfo
              (lVar17,"SSpacer",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0x95);
    puVar12 = (undefined8 *)FUN_14188e190(&local_1f48,local_1a98,lVar14);
    local_2058 = *puVar12;
    local_2050 = (longlong *)puVar12[1];
    if (local_2050 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2050 + 1) = (int)local_2050[1] + 1;
      UNLOCK();
    }
    local_1c88 = 1;
    local_1c80 = 0;
    local_1c78 = 0;
    local_1c98 = 0;
    uStack_1c90 = 0;
    FName::FName(&local_1f00,"NoBorder",1);
    plVar13 = DAT_1469eb140;
    uStack_1ef0 = (undefined4)uStack_1f80;
    local_2168 = FUN_1419b2700;
    uStack_2160 = 0;
    lStack_1b70 = (ulonglong)uStack_215c << 0x20;
    local_1b78 = FUN_1419b2700;
    local_1ef8 = 0;
    uStack_1eec = 0;
    local_1ee8 = 1;
    local_1ee0 = 0;
    local_1ed8 = 0;
    lVar14 = FUN_1418ce0e0(local_e88);
    *(undefined1 *)(lVar14 + 0x169) = 0;
    lVar17 = *plVar13;
    puVar12 = (undefined8 *)ISlateStyle::Join(local_1a00,local_1f00,0);
    lVar17 = (**(code **)(lVar17 + 0x80))(plVar13,DAT_1469eb160,*puVar12);
    if (lVar17 == 0) {
      lVar17 = FUN_141834930();
    }
    *(longlong *)(lVar14 + 0x110) = lVar17;
    *(undefined1 *)(lVar14 + 0x200) = 1;
    *(undefined8 *)(lVar14 + 0x1f0) = 0;
    *(undefined8 *)(lVar14 + 0x1f8) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x208,&local_1c80);
    local_1df0 = lVar14 + 0x118;
    local_1df8 = lVar14;
    local_1de8 = FUN_1418d3c80(&local_1df8,&local_2058);
    local_1de0 = local_1de8 + 0x128;
    plVar11 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SComboButton>();
    plVar13 = plVar11 + 2;
    local_1e60 = plVar13;
    local_1e58 = plVar11;
    FUN_14044f790(&local_1e60,plVar13);
    local_1e50 = &local_2194;
    local_21e8 = (undefined1 *)0x358;
    SWidget::SetDebugInfo
              (plVar13,"SComboButton",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0x8f);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_2128 = plVar13;
    local_2120 = plVar11;
    if ((longlong **)(local_2188 + 0x340) != &local_2128) {
      *(longlong **)(local_2188 + 0x340) = plVar13;
      local_2128 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_2188 + 0x348,&local_2120);
    }
    plVar6 = local_2120;
    if (local_2120 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2120 + 1;
      lVar17 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2120)(local_2120);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2120 + 8))(local_2120,1);
        }
      }
    }
    lVar17 = FUN_1418d3c80(&local_1de8,local_2148);
    local_21d8 = *(undefined4 *)(lVar17 + 0x90);
    local_21a8 = lVar17 + 0xf8;
    local_21c0 = lVar17 + 0xe8;
    local_21b0 = *(undefined1 *)(lVar17 + 0xf1);
    local_21c8 = lVar17 + 200;
    local_21d0 = lVar17 + 0x98;
    local_21b8 = *(undefined1 *)(lVar17 + 0xf0);
    local_21e0 = lVar17 + 0x78;
    local_21e8 = (undefined1 *)(lVar17 + 0x60);
    SWidget::SWidgetConstruct(plVar13,lVar17,lVar17 + 0x30,lVar17 + 0x40);
    FUN_14192e4e0(plVar13,lVar17);
    if (((char)plVar11[5] < '\0') ||
       (cVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar7 != '\0')) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar8;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_1dd8 = plVar13;
    local_1dd0 = plVar11;
    lVar14 = FUN_141886d30(local_c48);
    *(undefined1 *)(lVar14 + 0x130) = 1;
    *(undefined8 *)(lVar14 + 0x120) = local_1ef8;
    *(ulonglong *)(lVar14 + 0x128) = CONCAT44(uStack_1eec,uStack_1ef0);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x138,&local_1ee0);
    lVar17 = local_2188;
    uVar10 = SBorder::FArguments::BorderImage<SFlareListItem>(lVar14,local_2188,&local_1b78);
    uVar10 = FUN_14188d200(uVar10,&local_1dd8);
    local_21e8 = &local_2193;
    uVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                       (local_1978,"SBorder",
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                        ,0x8b);
    puVar12 = (undefined8 *)FUN_1418d3ed0(uVar15,local_1b98,uVar10);
    local_2098 = *puVar12;
    local_2090 = (longlong *)puVar12[1];
    if (local_2090 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2090 + 1) = (int)local_2090[1] + 1;
      UNLOCK();
    }
    local_1e80 = 0x41400000;
    local_1e70 = 0;
    local_1e68 = 0;
    local_1e7c = 0;
    local_1e78 = 1;
    lVar19 = SSpacer::FArguments::FArguments(local_15d8);
    *(undefined8 *)(lVar19 + 0x108) = 0x41400000;
    *(undefined1 *)(lVar19 + 0x110) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x118,&local_1e70);
    local_1f28 = FUN_141880f80();
    lVar14 = local_1f28 + 0x10;
    local_1f30 = lVar14;
    FUN_14044f790(&local_1f30,lVar14);
    local_1f20 = &local_2192;
    local_21e8 = (undefined1 *)0x228;
    SWidget::SetDebugInfo
              (lVar14,"SSpacer",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
               ,0x84);
    puVar12 = (undefined8 *)FUN_14188e190(&local_1f30,local_1bc8,lVar19);
    local_2068 = *puVar12;
    local_2060 = (longlong *)puVar12[1];
    if (local_2060 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2060 + 1) = (int)local_2060[1] + 1;
      UNLOCK();
    }
    local_2148 = FUN_1419b3650;
    local_1a78 = 0;
    uStack_1a70 = 0x4000000000000000;
    uStack_2140 = 0;
    local_1a68 = 1;
    local_1a60 = 0;
    local_1a58 = 0;
    uVar10 = FUN_14185c7c0();
    lVar14 = SOverlay::FOverlaySlot::Padding(uVar10,&local_1a78);
    local_1a40 = 1;
    local_1a50 = 0x3f80000000000000;
    uStack_1a48 = 0x3f80000000000000;
    *(undefined2 *)(lVar14 + 0x24) = 0x302;
    local_1a38 = 0;
    local_1a30 = 0;
    lVar19 = SOverlay::FArguments::FArguments(local_16f8);
    uStack_1b80 = CONCAT44(uStack_213c,uStack_2140);
    local_1b88 = local_2148;
    uVar10 = FUN_1417dd840(local_1ba8,lVar17,&local_1b88);
    local_20b0 = 0x119;
    local_20a8 = 0;
    local_20a0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20a8,uVar10);
    *(undefined1 *)(lVar19 + 0x78) = (undefined1)local_20b0;
    *(undefined1 *)(lVar19 + 0x79) = local_20b0._1_1_;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x80,&local_20a8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20a8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1ba8);
    local_21e8 = &local_2191;
    puVar12 = (undefined8 *)
              FUN_140800960(local_1960,"SOverlay",
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                            ,0x80);
    local_2110 = (longlong *)puVar12[1];
    local_2118 = *puVar12;
    if (local_2110 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2110 + 1) = (int)local_2110[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(lVar17 + 0x358) != &local_2118) {
      *(undefined8 *)(lVar17 + 0x358) = local_2118;
      local_2118 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar17 + 0x360,&local_2110);
    }
    plVar13 = local_2110;
    if (local_2110 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_2110 + 1;
      lVar17 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2110)(local_2110);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2110 + 8))(local_2110,1);
        }
      }
    }
    uVar10 = FUN_140801a00(lVar14,&local_2048);
    uVar15 = FUN_14185c7c0();
    uVar15 = SOverlay::FOverlaySlot::Padding(uVar15,&local_1a50);
    uVar15 = FUN_140801a00(uVar15,&local_2098);
    uVar16 = FUN_14185c7c0();
    uVar16 = FUN_140801a00(uVar16,&local_2068);
    uVar16 = SOverlay::FArguments::operator+(lVar19,uVar16);
    uVar15 = SOverlay::FArguments::operator+(uVar16,uVar15);
    uVar10 = SOverlay::FArguments::operator+(uVar15,uVar10);
    puVar12 = (undefined8 *)FUN_1417fcf70(puVar12,local_1bb8,uVar10);
    local_1dc8 = *puVar12;
    local_1dc0 = puVar12[1];
    if (local_1dc0 != 0) {
      LOCK();
      *(int *)(local_1dc0 + 8) = *(int *)(local_1dc0 + 8) + 1;
      UNLOCK();
    }
    uVar10 = FUN_140693c40(local_2108);
    uVar10 = SVerticalBox::FSlot::AutoHeight(uVar10);
    FUN_140692760(uVar10,&local_1dc8);
    if (local_1bb0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_1bb0 + 1;
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_1bb0)(local_1bb0);
        LOCK();
        piVar1 = (int *)((longlong)local_1bb0 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_1bb0 + 8))(local_1bb0,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1960);
    if (local_15f0 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_16f8);
    plVar13 = local_2060;
    if (local_2060 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_2060 + 1;
      lVar17 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2060)(local_2060);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2060 + 8))(local_2060,1);
        }
      }
    }
    if (local_1bc0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_1bc0 + 1;
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_1bc0)(local_1bc0);
        LOCK();
        piVar1 = (int *)((longlong)local_1bc0 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_1bc0 + 8))(local_1bc0,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f30);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_14c0);
    FUN_140456c70(local_15d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e70);
    plVar13 = local_2090;
    if (local_2090 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_2090 + 1;
      lVar17 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2090)(local_2090);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2090 + 8))(local_2090,1);
        }
      }
    }
    if (local_1b90 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_1b90 + 1;
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_1b90)(local_1b90);
        LOCK();
        piVar1 = (int *)((longlong)local_1b90 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_1b90 + 8))(local_1b90,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1978);
    FUN_14188af70(local_c48);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar11 + 1;
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1e60);
    FUN_1418d1c60(local_e88);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1ee0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c80);
    plVar13 = local_2050;
    if (local_2050 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_2050 + 1;
      lVar17 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2050)(local_2050);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2050 + 8))(local_2050,1);
        }
      }
    }
    if (local_1a90 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_1a90 + 1;
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_1a90)(local_1a90);
        LOCK();
        piVar1 = (int *)((longlong)local_1a90 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_1a90 + 8))(local_1a90,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1390);
    FUN_140456c70(local_14a8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e90);
    plVar13 = local_2040;
    if (local_2040 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_2040 + 1;
      lVar17 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2040)(local_2040);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2040 + 8))(local_2040,1);
        }
      }
    }
    if (local_19e8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_19e8 + 1;
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_19e8)(local_19e8);
        LOCK();
        piVar1 = (int *)((longlong)local_19e8 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_19e8 + 8))(local_19e8,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f60);
    FUN_14188b0e0(local_1378);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1eb0);
    uStack_1f80 = uStack_1f80 & 0xffffffff00000000;
    param_3 = local_20e8;
  }
  uStack_20e0 = 0;
  local_20e8 = FUN_1419b39d0;
  uStack_2140 = 0;
  local_2148 = FUN_1419b3a50;
  lVar19 = SImage::FArguments::FArguments(local_11f8);
  lVar14 = local_2188;
  uStack_1c30 = CONCAT44(uStack_213c,uStack_2140);
  local_1c38 = local_2148;
  uVar10 = FUN_1417dd6e0(local_1c28,local_2188,&local_1c38);
  local_1fd8 = 1;
  local_1fe0 = 0;
  local_1fd0 = 0;
  local_1fc8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1fd0,uVar10);
  *(undefined8 *)(lVar19 + 0x108) = local_1fe0;
  *(undefined1 *)(lVar19 + 0x110) = local_1fd8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x118,&local_1fd0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1fd0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1c28);
  uStack_1c10 = CONCAT44(uStack_20dc,uStack_20e0);
  local_1c18 = local_20e8;
  uVar10 = FUN_1417dd840(local_1c08,lVar14,&local_1c18);
  local_20d8 = 0x119;
  local_20d0 = 0;
  local_20c8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20d0,uVar10);
  *(undefined1 *)(lVar19 + 0x78) = (undefined1)local_20d8;
  *(undefined1 *)(lVar19 + 0x79) = local_20d8._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x80,&local_20d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1c08);
  local_1f70 = FUN_140c61c00();
  lVar17 = local_1f70 + 0x10;
  local_1f78 = lVar17;
  FUN_14044f790(&local_1f78,lVar17);
  local_1f68 = &local_2190;
  local_21e8 = (undefined1 *)0x278;
  SWidget::SetDebugInfo
            (lVar17,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0xb3);
  puVar12 = (undefined8 *)FUN_14188e090(&local_1f78,local_1bf8,lVar19);
  local_1db8 = *puVar12;
  plVar13 = (longlong *)puVar12[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_1a18 = 1;
  local_1a10 = 0;
  local_1a28 = 0x4000000000000000;
  uStack_1a20 = 0;
  local_1a08 = 0;
  local_1db0 = plVar13;
  lVar17 = FUN_141801800(plVar9 + 2,1);
  *(undefined2 *)(lVar17 + 0x24) = 0x102;
  uVar10 = SOverlay::FOverlaySlot::Padding(lVar17,&local_1a28);
  FUN_140801a00(uVar10,&local_1db8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar13 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (local_1bf0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1bf0 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_1bf0)(local_1bf0);
      LOCK();
      piVar1 = (int *)((longlong)local_1bf0 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_1bf0 + 8))(local_1bf0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1f78);
  FUN_14188b0e0(local_11f8);
  uStack_2140 = 0;
  local_1cf0 = 1;
  puVar12 = &local_1f88;
  if (*(char *)((longlong)param_3 + 0xd8) != '\0') {
    puVar12 = (undefined8 *)((longlong)param_3 + 200);
  }
  local_1ce8 = 0;
  local_1ce0 = 0;
  local_2148 = FUN_1419b31e0;
  local_1be8 = FUN_1419b31e0;
  lStack_1be0 = (ulonglong)uStack_213c << 0x20;
  local_1da8 = plVar9 + 2;
  local_1da0 = plVar9;
  uVar20 = *(undefined4 *)puVar12;
  uVar21 = *(undefined4 *)((longlong)puVar12 + 4);
  uVar22 = *(undefined4 *)(puVar12 + 1);
  uVar23 = *(undefined4 *)((longlong)puVar12 + 0xc);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc0);
  local_1d00 = uVar20;
  uStack_1cfc = uVar21;
  uStack_1cf8 = uVar22;
  uStack_1cf4 = uVar23;
  uVar10 = FUN_141886d30(local_998);
  lVar17 = SBorder::FArguments::BorderImage<SFlareListItem>(uVar10,lVar14,&local_1be8);
  *(undefined4 *)(lVar17 + 0x118) = uVar4;
  *(undefined4 *)(lVar17 + 0x11c) = *(undefined4 *)((longlong)param_3 + 0xc4);
  *(undefined4 *)(lVar17 + 0x120) = uVar20;
  *(undefined4 *)(lVar17 + 0x124) = uVar21;
  *(undefined4 *)(lVar17 + 0x128) = uVar22;
  *(undefined4 *)(lVar17 + 300) = uVar23;
  *(undefined1 *)(lVar17 + 0x130) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar17 + 0x138,&local_1ce8);
  uVar10 = FUN_14188d200(lVar17,&local_1da8);
  local_21e8 = local_218f;
  uVar15 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (local_1990,"SBorder",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                      ,0xba);
  puVar12 = (undefined8 *)FUN_1418d3ed0(uVar15,local_1bd8,uVar10);
  plVar13 = (longlong *)puVar12[1];
  local_1d98 = *puVar12;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_1d90 = plVar13;
  TSlotBase<FSimpleSlot>::operator[](lVar14 + 0x218,&local_1d98);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar13 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (local_1bd0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1bd0 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_1bd0)(local_1bd0);
      LOCK();
      piVar1 = (int *)((longlong)local_1bd0 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_1bd0 + 8))(local_1bd0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1990);
  FUN_14188af70(local_998);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1ce8);
  plVar13 = plStack_2170;
  if (plStack_2170 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_2170 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_2170)(plStack_2170);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar9 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = local_2100;
  if (local_2100 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_2100 + 1;
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2100)(local_2100);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_2100 + 8))(local_2100,1);
      }
    }
  }
  TAttribute<FText>::~TAttribute<FText>(local_1fb8);
  TAttribute<FText>::~TAttribute<FText>(local_2010);
  return;
}



// FUNCTION 1419b0120 FUN_1419b0120 body=1390 status=ok
// SIG undefined FUN_1419b0120(void)

void FUN_1419b0120(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_res10;
  undefined1 local_res11;
  longlong local_res18 [2];
  longlong local_288 [2];
  undefined1 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_220 [488];
  
  FTextBlockStyle::operator=(param_1 + 0x240,*(undefined8 *)(param_2 + 0x138));
  FText::operator=(param_1 + 0x558,param_2 + 0x278);
  *(undefined1 *)(param_1 + 0x570) = *(undefined1 *)(param_2 + 0x290);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x578,param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined1 *)(param_1 + 0x58c) = *(undefined1 *)(param_2 + 0x2ac);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x590,param_2 + 0x2b0);
  *(undefined1 *)(param_1 + 0x5a0) = *(undefined1 *)(param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x5a1) = *(undefined1 *)(param_2 + 0x2c1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5a8,param_2 + 0x2c8);
  *(undefined1 *)(param_1 + 0x5b8) = *(undefined1 *)(param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x5b9) = *(undefined1 *)(param_2 + 0x2d9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5c0,param_2 + 0x2e0);
  uVar4 = *(undefined4 *)(param_2 + 0x2f4);
  uVar5 = *(undefined4 *)(param_2 + 0x2f8);
  uVar6 = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x5d4) = uVar4;
  *(undefined4 *)(param_1 + 0x5d8) = uVar5;
  *(undefined4 *)(param_1 + 0x5dc) = uVar6;
  *(undefined1 *)(param_1 + 0x5e0) = *(undefined1 *)(param_2 + 0x300);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5e8,param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x318);
  *(undefined1 *)(param_1 + 0x614) = *(undefined1 *)(param_2 + 0x31c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x618,param_2 + 800);
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x330);
  *(undefined1 *)(param_1 + 0x5fc) = *(undefined1 *)(param_2 + 0x334);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x600,param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_2 + 0x348);
  *(undefined1 *)(param_1 + 0x62c) = *(undefined1 *)(param_2 + 0x34c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x630,param_2 + 0x350);
  FUN_1417f9360(param_1 + 0x420,param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x470) = *(undefined1 *)(param_2 + 400);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x478,param_2 + 0x198);
  FUN_140692440(param_1 + 0x488,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x4b0) = *(undefined1 *)(param_2 + 0x1d0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b8,param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(param_2 + 0x1f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4d8,param_2 + 0x1f8);
  FUN_1419a9a20(param_1 + 0x4e8,param_2 + 0x208);
  FUN_1419a9a20(param_1 + 0x510,param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_2 + 600);
  *(undefined1 *)(param_1 + 0x540) = *(undefined1 *)(param_2 + 0x260);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x548,param_2 + 0x268);
  lVar10 = 0;
  plVar2 = (longlong *)(param_1 + 0x640);
  if ((longlong *)(param_2 + 0x378) != plVar2) {
    if ((*(int *)(param_2 + 0x380) == 0) ||
       (plVar11 = *(longlong **)(param_2 + 0x378), plVar11 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x648) != 0) &&
         (plVar11 = (longlong *)*plVar2, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*plVar2 != 0) {
          lVar9 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar9;
        }
        *(undefined4 *)(param_1 + 0x648) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x30))(plVar11,plVar2);
    }
  }
  FText::operator=(param_1 + 0x208,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x120);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x228,param_2 + 0x128);
  local_240 = 0;
  local_238 = 0;
  puVar7 = (undefined8 *)FPlainTextLayoutMarshaller::Create(local_230);
  uVar8 = FUN_141835350();
  lVar9 = operator_new(0x68);
  if (lVar9 != 0) {
    local_260 = *(undefined8 *)(param_2 + 0x368);
    local_258 = *(longlong *)(param_2 + 0x370);
    if (local_258 != 0) {
      LOCK();
      *(int *)(local_258 + 8) = *(int *)(local_258 + 8) + 1;
      UNLOCK();
    }
    local_250 = *puVar7;
    local_248 = puVar7[1];
    if (local_248 != 0) {
      LOCK();
      *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
      UNLOCK();
    }
    local_res9 = *(char *)(param_2 + 0x363) != '\0';
    if ((bool)local_res9) {
      local_res8 = *(undefined1 *)(param_2 + 0x362);
    }
    local_res11 = *(char *)(param_2 + 0x361) != '\0';
    if ((bool)local_res11) {
      local_res10 = *(undefined1 *)(param_2 + 0x360);
    }
    uVar8 = FTextBlockStyle::FTextBlockStyle(local_220,uVar8);
    lVar10 = FUN_1419a8840(lVar9,param_1,uVar8,&local_res10,&local_res8,&local_240,&local_250,
                           &local_260);
  }
  plVar2 = (longlong *)(param_1 + 0x238);
  if (plVar2 == local_res18) {
    if (lVar10 == 0) goto LAB_1419b0599;
    FUN_141966250(lVar10);
  }
  else {
    lVar9 = *plVar2;
    *plVar2 = lVar10;
    if (lVar9 == 0) goto LAB_1419b0599;
    FUN_141966250(lVar9);
    lVar10 = lVar9;
  }
  FMemory::operator_delete(lVar10,0x68);
LAB_1419b0599:
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_228 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)local_228 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_228 + 8))(local_228,1);
      }
    }
  }
  plVar11 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar11 != (longlong *)0x0) {
    plVar11[1] = param_1;
    *plVar11 = (longlong)&PTR_GetPoolName_144d6e320;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar11[3] = lVar10;
  }
  local_288[0] = 0;
  local_288[1] = 0;
  local_278 = 1;
  local_270 = 0;
  local_268 = 0;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_270);
  }
  FTextLayout::SetDebugSourceInfo(*(undefined8 *)*plVar2,local_288);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_270);
  if (local_288[0] != 0) {
    FMemory::Free();
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    lVar10 = FMemory::Realloc(plVar11,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  return;
}



// FUNCTION 1419b0690 FUN_1419b0690 body=5831 status=ok
// SIG undefined FUN_1419b0690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001419b169c) */
/* WARNING: Removing unreachable block (ram,0x0001419b16a5) */
/* WARNING: Removing unreachable block (ram,0x0001419b16b2) */
/* WARNING: Removing unreachable block (ram,0x0001419b16c7) */

void FUN_1419b0690(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *****ppppplVar3;
  longlong ****pppplVar4;
  int iVar5;
  longlong ****pppplVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  char cVar25;
  byte bVar26;
  undefined8 uVar27;
  longlong lVar28;
  longlong *****ppppplVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong lVar32;
  undefined8 *puVar33;
  longlong *****ppppplVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  longlong *plVar37;
  undefined8 *puVar38;
  longlong *****ppppplVar39;
  longlong *****ppppplVar40;
  undefined1 auStack_c88 [32];
  longlong local_c68;
  longlong local_c60;
  undefined4 local_c58;
  longlong local_c50;
  longlong local_c48;
  longlong local_c40;
  undefined1 local_c38;
  undefined1 local_c30;
  longlong local_c28;
  undefined1 local_c18;
  undefined1 local_c17;
  undefined1 local_c16 [6];
  longlong ****local_c10;
  longlong ****local_c08;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  longlong local_be8;
  longlong *plStack_be0;
  longlong ****local_bd8;
  longlong ****local_bd0;
  undefined8 local_bc8;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  longlong local_bb8;
  longlong *local_bb0;
  int local_ba8;
  longlong *local_ba0;
  int local_b98;
  longlong *local_b90;
  int local_b88;
  longlong *local_b80;
  int local_b78;
  undefined8 local_b68;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 local_b58;
  undefined1 local_b54;
  undefined8 local_b50;
  undefined4 local_b48;
  undefined4 local_b40;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined4 local_b30;
  undefined4 local_b28;
  undefined4 local_b20;
  undefined1 local_b1c;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined4 local_b08;
  undefined4 local_b00;
  undefined1 local_afc;
  undefined8 local_af8;
  undefined4 local_af0;
  undefined4 local_ae8;
  undefined4 local_ae0;
  undefined1 local_adc;
  undefined8 local_ad8;
  undefined4 local_ad0;
  undefined8 local_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  longlong *local_ab8;
  longlong *local_ab0;
  undefined1 *local_aa8;
  undefined4 local_aa0;
  undefined1 local_a9c;
  undefined8 local_a98;
  undefined4 local_a90;
  longlong *local_a88;
  longlong *local_a80;
  undefined1 *local_a78;
  undefined4 *local_a70;
  longlong *local_a68;
  undefined4 local_a60;
  undefined1 local_a5c;
  undefined8 local_a58;
  undefined4 local_a50;
  undefined4 local_a48;
  undefined1 local_a44;
  undefined8 local_a40;
  undefined4 local_a38;
  longlong ****local_a30;
  longlong ****local_a28;
  longlong *local_a18;
  longlong *local_a10;
  longlong ****local_a00;
  longlong ****local_9f8;
  undefined4 local_9e8;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined4 local_9d8;
  longlong *local_9d0;
  longlong *local_9c8;
  undefined1 *local_9c0;
  longlong ****local_9b8;
  longlong ****local_9b0;
  longlong ****local_9a8;
  longlong ****local_9a0;
  longlong *local_998;
  longlong *local_990;
  longlong local_988;
  longlong *local_980;
  longlong ****local_978;
  longlong ****local_970;
  longlong ***local_968;
  longlong ***local_960;
  undefined8 local_958;
  longlong local_950;
  longlong *local_948;
  longlong *local_940;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined1 local_908 [8];
  longlong *local_900;
  undefined1 local_8f8 [8];
  longlong *local_8f0;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  longlong local_8d8;
  longlong *plStack_8d0;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined1 local_8b8 [272];
  undefined1 local_7a8 [24];
  undefined1 local_790 [24];
  undefined1 local_778 [24];
  undefined1 local_760 [24];
  undefined1 local_748 [272];
  undefined1 local_638 [24];
  undefined1 local_620 [24];
  undefined1 local_608 [24];
  undefined1 local_5f0 [24];
  undefined1 local_5d8 [272];
  undefined1 local_4c8 [48];
  undefined1 local_498 [16];
  undefined1 local_488 [264];
  longlong local_380;
  undefined1 local_368 [264];
  longlong local_260;
  undefined1 local_248 [496];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c88;
  local_bc8 = (longlong *****)((ulonglong)local_bc8 & 0xffffffff00000000);
  *(undefined1 *)(param_1 + 0x41a) = 1;
  local_a68 = param_5;
  plVar30 = (longlong *)(param_1 + 0x3d0);
  local_bf8 = *param_5;
  uStack_bf0 = (longlong *)param_5[1];
  if (uStack_bf0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_bf0 + 1) = (int)uStack_bf0[1] + 1;
    UNLOCK();
  }
  if (&local_bf8 != plVar30) {
    local_bf8._4_4_ = (undefined4)((ulonglong)local_bf8 >> 0x20);
    uStack_bf0._4_4_ = (undefined4)((ulonglong)uStack_bf0 >> 0x20);
    lVar28 = *plVar30;
    plVar37 = *(longlong **)(param_1 + 0x3d8);
    local_8c8 = (undefined4)local_bf8;
    uStack_8c4 = local_bf8._4_4_;
    uStack_8c0 = (undefined4)uStack_bf0;
    uStack_8bc = uStack_bf0._4_4_;
    *(undefined4 *)plVar30 = (undefined4)local_bf8;
    *(undefined4 *)(param_1 + 0x3d4) = local_bf8._4_4_;
    *(undefined4 *)(param_1 + 0x3d8) = (undefined4)uStack_bf0;
    *(undefined4 *)(param_1 + 0x3dc) = uStack_bf0._4_4_;
    local_bf8 = lVar28;
    uStack_bf0 = plVar37;
  }
  plVar30 = uStack_bf0;
  local_c10 = (longlong ****)param_2;
  local_bb8 = param_1;
  local_ac8 = param_4;
  local_a70 = param_3;
  if (uStack_bf0 != (longlong *)0x0) {
    LOCK();
    plVar37 = uStack_bf0 + 1;
    lVar28 = *plVar37;
    *(int *)plVar37 = (int)*plVar37 + -1;
    UNLOCK();
    if ((int)lVar28 == 1) {
      (**(code **)*uStack_bf0)(uStack_bf0);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*uStack_bf0 + 8))(uStack_bf0,1);
      }
    }
  }
  plVar30 = (longlong *)(param_1 + 800);
  if (param_7 != plVar30) {
    if (((int)param_7[1] == 0) || (param_7 = (longlong *)*param_7, param_7 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x328) != 0) &&
         (plVar37 = (longlong *)*plVar30, plVar37 != (longlong *)0x0)) {
        (**(code **)(*plVar37 + 0x28))(plVar37,0);
        if (*plVar30 != 0) {
          lVar28 = FMemory::Realloc(*plVar30,0,0);
          *plVar30 = lVar28;
        }
        *(undefined4 *)(param_1 + 0x328) = 0;
      }
    }
    else {
      (**(code **)(*param_7 + 0x30))(param_7,plVar30);
    }
  }
  lVar28 = *param_6;
  if (lVar28 != 0) {
    plVar37 = (longlong *)param_6[1];
    plVar30 = (longlong *)(param_1 + 0x310);
    if (plVar37 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar37 + 1) = (int)plVar37[1] + 1;
      UNLOCK();
    }
    local_be8 = lVar28;
    plStack_be0 = plVar37;
    if (&local_be8 != plVar30) {
      local_be8 = *plVar30;
      plStack_be0 = *(longlong **)(param_1 + 0x318);
      *plVar30 = lVar28;
      *(longlong **)(param_1 + 0x318) = plVar37;
      local_8d8 = lVar28;
      plStack_8d0 = plVar37;
    }
    plVar37 = plStack_be0;
    if (plStack_be0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_be0 + 1;
      lVar28 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar28 == 1) {
        (**(code **)*plStack_be0)(plStack_be0);
        LOCK();
        piVar1 = (int *)((longlong)plVar37 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_be0 + 8))(plStack_be0,1);
        }
      }
    }
    lVar28 = *plVar30;
    local_c08 = (longlong ****)STableViewBase::ScrollBar_OnUserScrolled;
    uStack_c00 = 0;
    local_938 = 0x419bb6b0;
    uStack_934 = 1;
    uStack_930 = 0;
    uStack_92c = uStack_bfc;
    uVar27 = FUN_14195d910(&local_bb0,param_1,&local_938);
    FUN_1419a3390(lVar28,uVar27);
    if (local_ba8 != 0) {
      if (local_bb0 == (longlong *)0x0) goto LAB_1419b0906;
      (**(code **)(*local_bb0 + 0x28))(local_bb0,0);
      if (local_bb0 != (longlong *)0x0) {
        local_bb0 = (longlong *)FMemory::Realloc(local_bb0,0,0);
      }
      local_ba8 = 0;
    }
    if (local_bb0 != (longlong *)0x0) {
      FMemory::Free(local_bb0);
    }
  }
LAB_1419b0906:
  ppppplVar39 = (longlong *****)(param_1 + 0x310);
  local_c08 = (longlong ****)ppppplVar39;
  if (*ppppplVar39 != (longlong ****)0x0) {
    local_ac8 = &LAB_1404c20d8;
    uStack_ac0 = 0;
    lVar28 = SListPanel::FArguments::FArguments(local_8b8);
    *(undefined4 *)(lVar28 + 0x108) = *param_2;
    *(undefined1 *)(lVar28 + 0x10c) = *(undefined1 *)(param_2 + 1);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar28 + 0x110,param_2 + 2);
    *(undefined4 *)(lVar28 + 0x120) = *param_3;
    *(undefined1 *)(lVar28 + 0x124) = *(undefined1 *)(param_3 + 1);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar28 + 0x128,param_3 + 2);
    local_918 = (undefined4)local_ac8;
    uStack_914 = local_ac8._4_4_;
    uStack_910 = uStack_ac0;
    uStack_90c = uStack_abc;
    uVar27 = FUN_1419a8220(&local_b80,param_1,&local_918);
    local_b58 = 0;
    local_b54 = 1;
    local_b50 = 0;
    local_b48 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_b50,uVar27);
    *(undefined4 *)(lVar28 + 0x138) = local_b58;
    *(undefined1 *)(lVar28 + 0x13c) = local_b54;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar28 + 0x140,&local_b50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b50);
    if (local_b78 == 0) {
LAB_1419b12be:
      if (local_b80 != (longlong *)0x0) {
        FMemory::Free(local_b80);
      }
    }
    else if (local_b80 != (longlong *)0x0) {
      (**(code **)(*local_b80 + 0x28))(local_b80,0);
      if (local_b80 != (longlong *)0x0) {
        local_b80 = (longlong *)FMemory::Realloc(local_b80,0,0);
      }
      local_b78 = 0;
      goto LAB_1419b12be;
    }
    *(undefined1 *)(lVar28 + 0x150) = *param_4;
    *(undefined1 *)(lVar28 + 0x151) = param_4[1];
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar28 + 0x158,param_4 + 8);
    local_ab0 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SListPanel>();
    local_ab8 = local_ab0 + 2;
    FUN_14044f790(&local_ab8);
    local_aa8 = &local_c17;
    local_c68 = 0x2a0;
    SWidget::SetDebugInfo
              (local_ab8,"SListPanel",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
               ,0x45);
    uVar27 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
             Expose<SListView<TSharedPtr<FString,1>_>_>(&local_ab8,param_1 + 0x300);
    plVar30 = (longlong *)FUN_1419aa100(uVar27,local_908,lVar28);
    ppppplVar39 = (longlong *****)plVar30[1];
    local_bc8 = (longlong *****)*plVar30;
    if (ppppplVar39 != (longlong *****)0x0) {
      LOCK();
      *(int *)(ppppplVar39 + 1) = *(int *)(ppppplVar39 + 1) + 1;
      UNLOCK();
    }
    bVar24 = false;
    bVar23 = false;
    bVar22 = false;
    bVar21 = false;
    bVar20 = false;
    bVar19 = false;
    bVar18 = false;
    bVar17 = false;
    bVar16 = false;
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
    bVar12 = false;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = false;
    ppppplVar29 = (longlong *****)local_c08;
    ppppplVar34 = ppppplVar39;
    ppppplVar40 = (longlong *****)local_c08;
    goto LAB_1419b139f;
  }
  local_b68 = STableViewBase::ScrollBar_OnUserScrolled;
  uStack_b60 = 0;
  local_a98 = 0;
  local_a90 = 0;
  uStack_bc0 = 0;
  local_a40 = 0;
  local_a38 = 0;
  local_aa0 = 0x41800000;
  local_a9c = 1;
  local_bc8 = (longlong *****)&LAB_1404c20d8;
  local_a48 = 0x3f800000;
  local_a44 = 1;
  lVar28 = SScrollBar::FArguments::FArguments(local_5d8);
  local_8e8 = (undefined4)local_b68;
  uStack_8e4 = local_b68._4_4_;
  uStack_8e0 = uStack_b60;
  uStack_8dc = uStack_b5c;
  uVar27 = FUN_14195d910(&local_ba0,param_1,&local_8e8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar28 + 0x110,uVar27);
  if (local_b98 == 0) {
LAB_1419b09eb:
    if (local_ba0 != (longlong *)0x0) {
      FMemory::Free(local_ba0);
    }
  }
  else if (local_ba0 != (longlong *)0x0) {
    (**(code **)(*local_ba0 + 0x28))(local_ba0,0);
    if (local_ba0 != (longlong *)0x0) {
      local_ba0 = (longlong *)FMemory::Realloc(local_ba0,0,0);
    }
    local_b98 = 0;
    goto LAB_1419b09eb;
  }
  ppppplVar29 = (longlong *****)operator_new(0x448);
  if (ppppplVar29 == (longlong *****)0x0) {
    ppppplVar29 = (longlong *****)0x0;
  }
  else {
    *(undefined4 *)(ppppplVar29 + 1) = 1;
    *(undefined4 *)((longlong)ppppplVar29 + 0xc) = 1;
    *ppppplVar29 = (longlong ****)&PTR_FUN_144d6e640;
    if (ppppplVar29 != (longlong *****)0xfffffffffffffff0) {
      SScrollBar::SScrollBar();
    }
  }
  ppppplVar34 = ppppplVar29 + 2;
  local_a00 = (longlong ****)ppppplVar34;
  local_9f8 = (longlong ****)ppppplVar29;
  FUN_14044f790(&local_a00,ppppplVar34);
  local_c68 = 0x438;
  SWidget::SetDebugInfo
            (ppppplVar34,"SScrollBar",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x3d);
  if (ppppplVar29 != (longlong *****)0x0) {
    LOCK();
    *(int *)(ppppplVar29 + 1) = *(int *)(ppppplVar29 + 1) + 1;
    UNLOCK();
  }
  local_bd8 = (longlong ****)ppppplVar34;
  local_bd0 = (longlong ****)ppppplVar29;
  if (ppppplVar39 != &local_bd8) {
    *ppppplVar39 = (longlong ****)ppppplVar34;
    local_bd8 = (longlong ****)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x318,&local_bd0);
  }
  pppplVar6 = local_bd0;
  if ((longlong *****)local_bd0 != (longlong *****)0x0) {
    LOCK();
    ppppplVar39 = (longlong *****)(local_bd0 + 1);
    iVar5 = *(int *)ppppplVar39;
    *(int *)ppppplVar39 = *(int *)ppppplVar39 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**local_bd0)(local_bd0);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*local_bd0)[1])(local_bd0,1);
      }
    }
  }
  local_c58 = *(undefined4 *)(lVar28 + 0x90);
  local_c28 = lVar28 + 0xf8;
  local_c40 = lVar28 + 0xe8;
  local_c30 = *(undefined1 *)(lVar28 + 0xf1);
  local_c48 = lVar28 + 200;
  local_c50 = lVar28 + 0x98;
  local_c38 = *(undefined1 *)(lVar28 + 0xf0);
  local_c60 = lVar28 + 0x78;
  local_c68 = lVar28 + 0x60;
  SWidget::SWidgetConstruct(ppppplVar34,lVar28,lVar28 + 0x30,lVar28 + 0x40);
  FUN_141976670(ppppplVar34,lVar28);
  if ((*(char *)(ppppplVar29 + 5) < '\0') ||
     (cVar25 = (*(code *)(*ppppplVar34)[0x3d])(ppppplVar34), cVar25 != '\0')) {
    bVar26 = 1;
  }
  else {
    bVar26 = 0;
  }
  *(byte *)((longlong)ppppplVar29 + 0x29) = *(byte *)((longlong)ppppplVar29 + 0x29) & 0xfe;
  *(byte *)((longlong)ppppplVar29 + 0x29) = *(byte *)((longlong)ppppplVar29 + 0x29) | bVar26;
  if (ppppplVar29 != (longlong *****)0x0) {
    LOCK();
    *(int *)(ppppplVar29 + 1) = *(int *)(ppppplVar29 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(ppppplVar29 + 1) = *(int *)(ppppplVar29 + 1) + 1;
    UNLOCK();
  }
  local_9b8 = (longlong ****)ppppplVar34;
  local_9b0 = (longlong ****)ppppplVar29;
  lVar28 = FUN_14068f180(local_248);
  *(undefined4 *)(lVar28 + 0x148) = local_aa0;
  *(undefined1 *)(lVar28 + 0x14c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar28 + 0x150,&local_a98);
  plVar30 = (longlong *)operator_new(800);
  if (plVar30 == (longlong *)0x0) {
    plVar30 = (longlong *)0x0;
    local_b68 = (code *)0x0;
  }
  else {
    *(undefined4 *)(plVar30 + 1) = 1;
    *(undefined4 *)((longlong)plVar30 + 0xc) = 1;
    *plVar30 = (longlong)&PTR_FUN_144044b78;
    local_b68 = (code *)plVar30;
    if (plVar30 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar37 = plVar30 + 2;
  local_a18 = plVar37;
  local_a10 = plVar30;
  FUN_14044f790(&local_a18,plVar37);
  local_c68 = 0x310;
  SWidget::SetDebugInfo
            (plVar37,&DAT_144d765f8,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x3a);
  lVar28 = FUN_140692660(lVar28,&local_9b8);
  local_c58 = *(undefined4 *)(lVar28 + 0x90);
  local_c28 = lVar28 + 0xf8;
  local_c40 = lVar28 + 0xe8;
  local_c30 = *(undefined1 *)(lVar28 + 0xf1);
  local_c48 = lVar28 + 200;
  local_c50 = lVar28 + 0x98;
  local_c38 = *(undefined1 *)(lVar28 + 0xf0);
  local_c60 = lVar28 + 0x78;
  local_c68 = lVar28 + 0x60;
  SWidget::SWidgetConstruct(plVar37,lVar28,lVar28 + 0x30,lVar28 + 0x40);
  FUN_141972160(plVar37,lVar28);
  if (((char)plVar30[5] < '\0') ||
     (cVar25 = (**(code **)(*plVar37 + 0x1e8))(plVar37), cVar25 != '\0')) {
    bVar26 = 1;
  }
  else {
    bVar26 = 0;
  }
  *(byte *)((longlong)plVar30 + 0x29) = *(byte *)((longlong)plVar30 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar30 + 0x29) = *(byte *)((longlong)plVar30 + 0x29) | bVar26;
  if (plVar30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
    UNLOCK();
  }
  local_948 = plVar37;
  local_940 = plVar30;
  puVar31 = (undefined8 *)operator_new(0x88);
  if (puVar31 == (undefined8 *)0x0) {
    puVar31 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar31);
    *puVar31 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  puVar38 = (undefined8 *)0x0;
  lVar32 = SListPanel::FArguments::FArguments(local_748);
  *(undefined4 *)(lVar32 + 0x108) = *(undefined4 *)local_c10;
  *(undefined1 *)(lVar32 + 0x10c) = *(undefined1 *)((longlong)local_c10 + 4);
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (lVar32 + 0x110,(undefined4 *)((longlong)local_c10 + 8));
  *(undefined4 *)(lVar32 + 0x120) = *local_a70;
  *(undefined1 *)(lVar32 + 0x124) = *(undefined1 *)(local_a70 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar32 + 0x128,local_a70 + 2);
  lVar28 = local_bb8;
  local_928 = (undefined4)local_bc8;
  uStack_924 = local_bc8._4_4_;
  uStack_920 = uStack_bc0;
  uStack_91c = uStack_bbc;
  uVar27 = FUN_1419a8220(&local_b90,local_bb8,&local_928);
  local_b40 = 0;
  local_b3c = 1;
  local_b38 = 0;
  local_b30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_b38,uVar27);
  *(undefined4 *)(lVar32 + 0x138) = local_b40;
  *(undefined1 *)(lVar32 + 0x13c) = local_b3c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar32 + 0x140,&local_b38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b38);
  if (local_b88 == 0) {
LAB_1419b0e95:
    if (local_b90 != (longlong *)0x0) {
      FMemory::Free(local_b90);
    }
  }
  else if (local_b90 != (longlong *)0x0) {
    (**(code **)(*local_b90 + 0x28))(local_b90,0);
    if (local_b90 != (longlong *)0x0) {
      local_b90 = (longlong *)FMemory::Realloc(local_b90,0,0);
    }
    local_b88 = 0;
    goto LAB_1419b0e95;
  }
  *(undefined1 *)(lVar32 + 0x150) = *local_ac8;
  *(undefined1 *)(lVar32 + 0x151) = local_ac8[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar32 + 0x158,local_ac8 + 8);
  local_a80 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SListPanel>();
  local_a88 = local_a80 + 2;
  FUN_14044f790(&local_a88);
  local_a78 = &local_c18;
  local_c68 = 0x2a0;
  SWidget::SetDebugInfo
            (local_a88,"SListPanel",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x31);
  uVar27 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_a88,lVar28 + 0x300);
  puVar33 = (undefined8 *)FUN_1419aa100(uVar27,local_8f8,lVar32);
  local_958 = *puVar33;
  local_950 = puVar33[1];
  if (local_950 != 0) {
    LOCK();
    *(int *)(local_950 + 8) = *(int *)(local_950 + 8) + 1;
    UNLOCK();
  }
  puVar33 = (undefined8 *)operator_new(0x88);
  if (puVar33 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar33);
    *puVar33 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar38 = puVar33;
  }
  local_b08 = 1;
  local_b00 = 0x3f800000;
  local_afc = 1;
  local_af8 = 0;
  local_af0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_af8,&local_a40);
  *(undefined4 *)(puVar38 + 5) = local_b08;
  *(undefined1 *)((longlong)puVar38 + 0x34) = local_afc;
  *(undefined4 *)(puVar38 + 6) = local_b00;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar38 + 7,&local_af8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_af8);
  ppppplVar34 = (longlong *****)operator_new(0x248);
  if (ppppplVar34 == (longlong *****)0x0) {
    ppppplVar34 = (longlong *****)0x0;
  }
  else {
    *(undefined4 *)(ppppplVar34 + 1) = 1;
    *(undefined4 *)((longlong)ppppplVar34 + 0xc) = 1;
    *ppppplVar34 = (longlong ****)&PTR_FUN_144044b58;
    if (ppppplVar34 != (longlong *****)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  ppppplVar39 = ppppplVar34 + 2;
  local_bc8 = ppppplVar39;
  local_a30 = (longlong ****)ppppplVar39;
  local_a28 = (longlong ****)ppppplVar34;
  FUN_14044f790(&local_a30,ppppplVar39);
  local_c68 = 0x238;
  SWidget::SetDebugInfo
            (ppppplVar39,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x2d);
  uVar27 = SVerticalBox::FSlot::AutoHeight(puVar31);
  uVar27 = FUN_140692760(uVar27,&local_948);
  uVar35 = FUN_140692760(puVar38,&local_958);
  uVar36 = SCanvas::FArguments::FArguments(local_488);
  uVar35 = SOverlay::FArguments::operator+(uVar36,uVar35);
  lVar28 = SOverlay::FArguments::operator+(uVar35,uVar27);
  local_c58 = *(undefined4 *)(lVar28 + 0x90);
  local_c28 = lVar28 + 0xf8;
  local_c40 = lVar28 + 0xe8;
  local_c30 = *(undefined1 *)(lVar28 + 0xf1);
  local_c48 = lVar28 + 200;
  local_c50 = lVar28 + 0x98;
  local_c38 = *(undefined1 *)(lVar28 + 0xf0);
  local_c60 = lVar28 + 0x78;
  local_c68 = lVar28 + 0x60;
  SWidget::SWidgetConstruct(ppppplVar39,lVar28,lVar28 + 0x30,lVar28 + 0x40);
  SHorizontalBox::Construct(ppppplVar39,lVar28);
  if ((*(char *)(ppppplVar34 + 5) < '\0') ||
     (cVar25 = (*(code *)(*ppppplVar39)[0x3d])(ppppplVar39), cVar25 != '\0')) {
    bVar26 = 1;
  }
  else {
    bVar26 = 0;
  }
  *(byte *)((longlong)ppppplVar34 + 0x29) = *(byte *)((longlong)ppppplVar34 + 0x29) & 0xfe;
  *(byte *)((longlong)ppppplVar34 + 0x29) = *(byte *)((longlong)ppppplVar34 + 0x29) | bVar26;
  if (ppppplVar34 != (longlong *****)0x0) {
    LOCK();
    *(int *)(ppppplVar34 + 1) = *(int *)(ppppplVar34 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(ppppplVar34 + 1) = *(int *)(ppppplVar34 + 1) + 1;
    UNLOCK();
  }
  bVar24 = true;
  bVar23 = true;
  bVar22 = true;
  bVar21 = true;
  bVar20 = true;
  bVar19 = true;
  bVar18 = true;
  bVar17 = true;
  bVar16 = true;
  bVar15 = true;
  bVar14 = true;
  bVar13 = true;
  bVar12 = true;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = true;
  ppppplVar39 = (longlong *****)local_c08;
  ppppplVar40 = ppppplVar34;
LAB_1419b139f:
  if (ppppplVar34 != (longlong *****)0x0) {
    LOCK();
    *(int *)(ppppplVar34 + 1) = *(int *)(ppppplVar34 + 1) + 1;
    UNLOCK();
  }
  local_c10 = (longlong ****)ppppplVar40;
  local_9a8 = (longlong ****)local_bc8;
  local_9a0 = (longlong ****)ppppplVar34;
  if ((bVar8) && (ppppplVar39 != (longlong *****)0x0)) {
    LOCK();
    ppppplVar3 = ppppplVar39 + 1;
    iVar5 = *(int *)ppppplVar3;
    *(int *)ppppplVar3 = *(int *)ppppplVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**ppppplVar39)(ppppplVar39);
      LOCK();
      piVar1 = (int *)((longlong)ppppplVar39 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*ppppplVar39)[1])(ppppplVar39,1);
      }
    }
  }
  if ((bVar9) && (local_900 != (longlong *)0x0)) {
    LOCK();
    plVar30 = local_900 + 1;
    lVar28 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar28 == 1) {
      (**(code **)*local_900)(local_900);
      LOCK();
      piVar1 = (int *)((longlong)local_900 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_900 + 8))(local_900,1);
      }
    }
  }
  plVar30 = local_ab0;
  if ((bVar10) && (local_ab0 != (longlong *)0x0)) {
    LOCK();
    plVar37 = local_ab0 + 1;
    lVar28 = *plVar37;
    *(int *)plVar37 = (int)*plVar37 + -1;
    UNLOCK();
    if ((int)lVar28 == 1) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar30 + 8))(plVar30,1);
      }
    }
  }
  if (bVar11) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_760);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_778);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_790);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_7a8);
    FUN_140456c70(local_8b8);
  }
  pppplVar6 = local_c10;
  if ((bVar12) && ((longlong *****)local_c10 != (longlong *****)0x0)) {
    LOCK();
    ppppplVar39 = (longlong *****)(local_c10 + 1);
    iVar5 = *(int *)ppppplVar39;
    *(int *)ppppplVar39 = *(int *)ppppplVar39 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**local_c10)(local_c10);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*pppplVar6)[1])(pppplVar6,1);
      }
    }
  }
  if ((bVar13) && (ppppplVar40 != (longlong *****)0x0)) {
    LOCK();
    ppppplVar39 = ppppplVar40 + 1;
    iVar5 = *(int *)ppppplVar39;
    *(int *)ppppplVar39 = *(int *)ppppplVar39 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**ppppplVar40)(ppppplVar40);
      LOCK();
      piVar1 = (int *)((longlong)ppppplVar40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*ppppplVar40)[1])(ppppplVar40,1);
      }
    }
  }
  pppplVar6 = local_a28;
  if ((bVar14) && ((longlong *****)local_a28 != (longlong *****)0x0)) {
    LOCK();
    ppppplVar39 = (longlong *****)(local_a28 + 1);
    iVar5 = *(int *)ppppplVar39;
    *(int *)ppppplVar39 = *(int *)ppppplVar39 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**local_a28)(local_a28);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*local_a28)[1])(local_a28,1);
      }
    }
  }
  if (bVar15) {
    if (local_380 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_488);
  }
  if ((bVar16) && (local_8f0 != (longlong *)0x0)) {
    LOCK();
    plVar30 = local_8f0 + 1;
    lVar28 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar28 == 1) {
      (**(code **)*local_8f0)(local_8f0);
      LOCK();
      piVar1 = (int *)((longlong)local_8f0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_8f0 + 8))(local_8f0,1);
      }
    }
  }
  plVar30 = local_a80;
  if ((bVar17) && (local_a80 != (longlong *)0x0)) {
    LOCK();
    plVar37 = local_a80 + 1;
    lVar28 = *plVar37;
    *(int *)plVar37 = (int)*plVar37 + -1;
    UNLOCK();
    if ((int)lVar28 == 1) {
      (**(code **)*local_a80)(local_a80);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar30 + 8))(plVar30,1);
      }
    }
  }
  if (bVar7) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_5f0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_608);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_620);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_638);
    FUN_140456c70(local_748);
  }
  plVar30 = local_a10;
  if ((bVar19) && (local_a10 != (longlong *)0x0)) {
    LOCK();
    plVar37 = local_a10 + 1;
    lVar28 = *plVar37;
    *(int *)plVar37 = (int)*plVar37 + -1;
    UNLOCK();
    if ((int)lVar28 == 1) {
      (**(code **)*local_a10)(local_a10);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a10 + 8))(local_a10,1);
      }
    }
  }
  if (bVar20) {
    FUN_140690ea0(local_248);
  }
  if ((bVar21) && (ppppplVar29 != (longlong *****)0x0)) {
    LOCK();
    ppppplVar39 = ppppplVar29 + 1;
    iVar5 = *(int *)ppppplVar39;
    *(int *)ppppplVar39 = *(int *)ppppplVar39 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**ppppplVar29)(ppppplVar29);
      LOCK();
      piVar1 = (int *)((longlong)ppppplVar29 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*ppppplVar29)[1])(ppppplVar29,1);
      }
    }
  }
  pppplVar6 = local_9f8;
  if ((bVar22) && ((longlong *****)local_9f8 != (longlong *****)0x0)) {
    LOCK();
    ppppplVar39 = (longlong *****)(local_9f8 + 1);
    iVar5 = *(int *)ppppplVar39;
    *(int *)ppppplVar39 = *(int *)ppppplVar39 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**local_9f8)(local_9f8);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*local_9f8)[1])(local_9f8,1);
      }
    }
  }
  if (bVar23) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_498);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_4c8);
    FUN_140456c70(local_5d8);
  }
  if (bVar24) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a40);
  }
  if (bVar18) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a98);
  }
  plVar30 = local_a68;
  lVar28 = *local_a68;
  if (lVar28 == 0) {
    TSlotBase<FSimpleSlot>::operator[](local_bb8 + 0x218,&local_9a8);
  }
  else {
    if (*param_6 == 0) {
      local_968 = *local_c08;
      pppplVar6 = (longlong ****)local_c08[1];
      if (pppplVar6 != (longlong ****)0x0) {
        LOCK();
        *(int *)(pppplVar6 + 1) = *(int *)(pppplVar6 + 1) + 1;
        UNLOCK();
        lVar28 = *local_a68;
      }
      local_960 = (longlong ***)pppplVar6;
      FUN_1419bb9b0(lVar28,&local_968,0x41800000);
      if (pppplVar6 != (longlong ****)0x0) {
        LOCK();
        pppplVar4 = pppplVar6 + 1;
        iVar5 = *(int *)pppplVar4;
        *(int *)pppplVar4 = *(int *)pppplVar4 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (*(code *)**pppplVar6)(pppplVar6);
          LOCK();
          piVar1 = (int *)((longlong)pppplVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (*(code *)(*pppplVar6)[1])(pppplVar6,1);
          }
        }
      }
    }
    puVar31 = (undefined8 *)0x0;
    local_a60 = 0x3f800000;
    local_a5c = 1;
    local_a58 = 0;
    local_a50 = 0;
    local_978 = (longlong ****)local_bc8;
    if (ppppplVar34 != (longlong *****)0x0) {
      LOCK();
      *(int *)(ppppplVar34 + 1) = *(int *)(ppppplVar34 + 1) + 1;
      UNLOCK();
    }
    local_970 = (longlong ****)ppppplVar34;
    puVar33 = (undefined8 *)operator_new(0x88);
    puVar38 = puVar31;
    if (puVar33 != (undefined8 *)0x0) {
      FUN_1417f13c0(puVar33);
      *puVar33 = &PTR__scalar_deleting_destructor__144042bf8;
      puVar38 = puVar33;
    }
    local_b28 = 1;
    local_b20 = 0x3f800000;
    local_b1c = 1;
    local_b18 = 0;
    local_b10 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_b18,&local_a58);
    *(undefined4 *)(puVar38 + 5) = local_b28;
    *(undefined1 *)((longlong)puVar38 + 0x34) = local_b1c;
    *(undefined4 *)(puVar38 + 6) = local_b20;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar38 + 7,&local_b18);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b18);
    local_988 = *plVar30;
    plVar30 = (longlong *)plVar30[1];
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
      UNLOCK();
    }
    local_980 = plVar30;
    puVar33 = (undefined8 *)operator_new(0x88);
    if (puVar33 != (undefined8 *)0x0) {
      FUN_1417f13c0(puVar33);
      *puVar33 = &PTR__scalar_deleting_destructor__144042bf8;
      puVar31 = puVar33;
    }
    local_9e8 = 0;
    local_9e4 = 1;
    local_9e0 = 0;
    local_9d8 = 0;
    local_ae8 = 0;
    local_ae0 = 0;
    local_adc = 1;
    local_ad8 = 0;
    local_ad0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_ad8,&local_9e0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9e0);
    *(undefined4 *)(puVar31 + 5) = local_ae8;
    *(undefined1 *)((longlong)puVar31 + 0x34) = local_adc;
    *(undefined4 *)(puVar31 + 6) = local_ae0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar31 + 7,&local_ad8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_ad8);
    plVar37 = (longlong *)operator_new(0x248);
    if (plVar37 == (longlong *)0x0) {
      plVar37 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar37 + 1) = 1;
      *(undefined4 *)((longlong)plVar37 + 0xc) = 1;
      *plVar37 = (longlong)&PTR_DestroyObject_144d503e8;
      if (plVar37 != (longlong *)0xfffffffffffffff0) {
        FUN_1417f4670();
      }
    }
    plVar2 = plVar37 + 2;
    local_9d0 = plVar2;
    local_9c8 = plVar37;
    FUN_14044f790(&local_9d0,plVar2);
    local_9c0 = local_c16;
    local_c68 = 0x238;
    SWidget::SetDebugInfo
              (plVar2,"SVerticalBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
               ,0x57);
    uVar27 = FUN_1417f9c30(puVar38,&local_978);
    uVar35 = FUN_1417f9c30(puVar31,&local_988);
    uVar36 = SCanvas::FArguments::FArguments(local_368);
    uVar35 = SOverlay::FArguments::operator+(uVar36,uVar35);
    lVar28 = SOverlay::FArguments::operator+(uVar35,uVar27);
    local_c58 = *(undefined4 *)(lVar28 + 0x90);
    local_c28 = lVar28 + 0xf8;
    local_c40 = lVar28 + 0xe8;
    local_c30 = *(undefined1 *)(lVar28 + 0xf1);
    local_c68 = lVar28 + 0x60;
    local_c48 = lVar28 + 200;
    local_c38 = *(undefined1 *)(lVar28 + 0xf0);
    local_c50 = lVar28 + 0x98;
    local_c60 = lVar28 + 0x78;
    plVar2 = plVar37 + 2;
    SWidget::SWidgetConstruct(plVar2,lVar28,lVar28 + 0x30,lVar28 + 0x40);
    SHorizontalBox::Construct(plVar2,lVar28);
    if (((char)plVar37[5] < '\0') ||
       (cVar25 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar25 != '\0')) {
      bVar26 = 1;
    }
    else {
      bVar26 = 0;
    }
    *(byte *)((longlong)plVar37 + 0x29) = *(byte *)((longlong)plVar37 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar37 + 0x29) = *(byte *)((longlong)plVar37 + 0x29) | bVar26;
    if (plVar37 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar37 + 1) = (int)plVar37[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar37 + 1) = (int)plVar37[1] + 1;
      UNLOCK();
    }
    local_998 = plVar2;
    local_990 = plVar37;
    TSlotBase<FSimpleSlot>::operator[](local_bb8 + 0x218,&local_998);
    if (plVar37 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar37 + 1;
      lVar28 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar28 == 1) {
        (**(code **)*plVar37)(plVar37);
        LOCK();
        piVar1 = (int *)((longlong)plVar37 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar37 + 8))(plVar37,1);
        }
      }
      LOCK();
      plVar2 = plVar37 + 1;
      lVar28 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar28 == 1) {
        (**(code **)*plVar37)(plVar37);
        LOCK();
        piVar1 = (int *)((longlong)plVar37 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar37 + 8))(plVar37,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_9d0);
    if (local_260 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_368);
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      plVar37 = plVar30 + 1;
      lVar28 = *plVar37;
      *(int *)plVar37 = (int)*plVar37 + -1;
      UNLOCK();
      if ((int)lVar28 == 1) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar30 + 8))(plVar30,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a58);
  }
  if (ppppplVar34 != (longlong *****)0x0) {
    LOCK();
    ppppplVar39 = ppppplVar34 + 1;
    iVar5 = *(int *)ppppplVar39;
    *(int *)ppppplVar39 = *(int *)ppppplVar39 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**ppppplVar34)(ppppplVar34);
      LOCK();
      piVar1 = (int *)((longlong)ppppplVar34 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)(*ppppplVar34)[1])(ppppplVar34,1);
      }
    }
  }
  return;
}



// FUNCTION 1419b1d60 Create body=282 status=ok
// SIG undefined Create(void)

undefined8 *
SlateEditableTextTypes::FCursorLineHighlighter::Create(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  
  puVar3 = (undefined8 *)operator_new(0x30);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_2;
    *puVar3 = &PTR__scalar_deleting_destructor__144d77178;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    plVar2 = DAT_1469eb140;
    lVar1 = *DAT_1469eb140;
    puVar4 = (undefined8 *)FName::FName(local_res8,"EditableText.SelectionBackground",1);
    uVar5 = (**(code **)(lVar1 + 0x40))(plVar2,*puVar4,0);
    puVar3[2] = uVar5;
    local_28 = 0;
    local_20 = 0;
    *(undefined1 *)(puVar3 + 3) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar3 + 4,&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar4;
    puVar6 = puVar3;
  }
  *param_1 = puVar4;
  param_1[1] = puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar4,puVar4);
  return param_1;
}



// FUNCTION 1419b1e80 Create body=275 status=ok
// SIG undefined Create(void)

undefined8 * SlateEditableTextTypes::FTextCompositionHighlighter::Create(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144d77188;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    plVar2 = DAT_1469eb140;
    lVar1 = *DAT_1469eb140;
    puVar4 = (undefined8 *)FName::FName(local_res8,"EditableText.CompositionBackground",1);
    uVar5 = (**(code **)(lVar1 + 0x40))(plVar2,*puVar4,0);
    puVar3[1] = uVar5;
    local_28 = 0;
    local_20 = 0;
    *(undefined1 *)(puVar3 + 2) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar3 + 3,&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar4;
    puVar6 = puVar3;
  }
  *param_1 = puVar4;
  param_1[1] = puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar4,puVar4);
  return param_1;
}



// FUNCTION 1419b1fa0 FUN_1419b1fa0 body=123 status=ok
// SIG undefined FUN_1419b1fa0(void)

undefined8 * FUN_1419b1fa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_144d771a8;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  return param_1;
}



// FUNCTION 1419b2020 FUN_1419b2020 body=123 status=ok
// SIG undefined FUN_1419b2020(void)

undefined8 * FUN_1419b2020(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_144d77198;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  return param_1;
}



// FUNCTION 1419b20a0 FUN_1419b20a0 body=56 status=ok
// SIG undefined FUN_1419b20a0(void)

void FUN_1419b20a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d77c78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1419b20e0 FUN_1419b20e0 body=84 status=ok
// SIG undefined FUN_1419b20e0(void)

void FUN_1419b20e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144d77bb8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1419b2140 FUN_1419b2140 body=84 status=ok
// SIG undefined FUN_1419b2140(void)

void FUN_1419b2140(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144d77bf8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1419b21a0 FUN_1419b21a0 body=84 status=ok
// SIG undefined FUN_1419b21a0(void)

void FUN_1419b21a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144d77c38;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1419b2200 FUN_1419b2200 body=56 status=ok
// SIG undefined FUN_1419b2200(void)

void FUN_1419b2200(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d77b78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1419b2240 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d77930;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1419b22a0 CreateUndo body=37 status=ok
// SIG undefined CreateUndo(void)

undefined8 *
SlateEditableTextTypes::FCursorInfo::CreateUndo(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)((longlong)param_1 + 9);
  return param_2;
}



// FUNCTION 1419b22f0 Empty body=103 status=ok
// SIG undefined Empty(void)

void TIndirectArray<SListPanel::FSlot,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    FSlotBase::~FSlotBase(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1419b2360 GetMeanAbsError body=12 status=ok
// SIG undefined GetMeanAbsError(void)

void ARacingGameState::GetMeanAbsError(longlong param_1)

{
  FInertialScrollManager::ClearScrollVelocity(param_1 + 0x3e0);
  return;
}



// FUNCTION 1419b2370 FUN_1419b2370 body=393 status=ok
// SIG undefined FUN_1419b2370(void)

void FUN_1419b2370(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar8 = *(longlong **)(param_1 + 0x168);
  plVar7 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar8[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar8 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar8[1];
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar8;
        if ((plVar8 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x160) != 0))
        goto LAB_1419b24bf;
        break;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar8 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  local_38 = 0;
  local_30 = 0;
  puVar4 = (undefined8 *)operator_new(0x20,&local_38);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_144d77b78;
    puVar4[1] = param_1 + -0x208;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[3] = uVar5;
  }
  puVar4 = (undefined8 *)FUN_141853de0(param_1 + -0x208,local_28,0x3f000000,&local_38);
  *(undefined8 *)(param_1 + 0x160) = *puVar4;
  plVar8 = (longlong *)puVar4[1];
  plVar6 = *(longlong **)(param_1 + 0x168);
  if (plVar8 != plVar6) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x168);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x168) = plVar8;
  }
  plVar8 = plVar7;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
LAB_1419b24bf:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return;
}



// FUNCTION 1419b2500 Execute body=31 status=ok
// SIG undefined Execute(void)

undefined4 *
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),<lambda_5858c97ba83c0655933f0aedcce386ec>_>
::Execute(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = SHeaderRow::FColumn::GetWidth(*(undefined8 *)(param_1 + 8));
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1419b2520 FUN_1419b2520 body=27 status=ok
// SIG undefined FUN_1419b2520(void)

undefined8 FUN_1419b2520(longlong param_1,undefined8 param_2)

{
  FUN_1419a9b00(param_1 + 8);
  return param_2;
}



// FUNCTION 1419b2540 FUN_1419b2540 body=27 status=ok
// SIG undefined FUN_1419b2540(void)

undefined8 FUN_1419b2540(longlong param_1,undefined8 param_2)

{
  FUN_1419a9d50(param_1 + 8);
  return param_2;
}



// FUNCTION 1419b2560 FUN_1419b2560 body=27 status=ok
// SIG undefined FUN_1419b2560(void)

undefined8 FUN_1419b2560(longlong param_1,undefined8 param_2)

{
  FUN_1419a9f20(param_1 + 8);
  return param_2;
}



// FUNCTION 1419b2580 FUN_1419b2580 body=60 status=ok
// SIG undefined FUN_1419b2580(void)

undefined1 FUN_1419b2580(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x180))();
  if (cVar1 == '\0') {
    cVar1 = FUN_14198a9c0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x210));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419b25c0 FUN_1419b25c0 body=209 status=ok
// SIG undefined FUN_1419b25c0(void)

undefined8 * FUN_1419b25c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  puVar5 = (undefined8 *)
           (**(code **)(param_1 + 0x18))
                     ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar7,local_res10)
  ;
  *param_2 = *puVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1419b26a0 FUN_1419b26a0 body=8 status=ok
// SIG undefined FUN_1419b26a0(void)

void FUN_1419b26a0(undefined8 *param_1)

{
  FUN_14193f460(*param_1);
  return;
}



// FUNCTION 1419b26f0 FUN_1419b26f0 body=8 status=ok
// SIG undefined FUN_1419b26f0(void)

longlong FUN_1419b26f0(longlong param_1)

{
  return param_1 + 0x388;
}



// FUNCTION 1419b2700 FUN_1419b2700 body=229 status=ok
// SIG undefined FUN_1419b2700(void)

undefined * FUN_1419b2700(longlong *param_1)

{
  char cVar1;
  
  if ((longlong *)param_1[0x68] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x68] + 0x1a8))();
    if (cVar1 == '\0') {
      cVar1 = FUN_14192b710(param_1[0x68]);
      if (cVar1 == '\0') goto LAB_1419b2745;
    }
    return (undefined *)(param_1[0x6e] + 0x448);
  }
LAB_1419b2745:
  cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
  if ((cVar1 == '\0') && ((int)param_1[0x6a] != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1469eb368) {
      _Init_thread_header(&DAT_1469eb368);
      if (DAT_1469eb368 == -1) {
        FSlateNoResource::FSlateNoResource(&DAT_1469eb2e0,&DAT_1468b5d88);
        atexit((_func_5014 *)&LAB_143e82ec0);
        _Init_thread_footer(&DAT_1469eb368);
      }
    }
    return &DAT_1469eb2e0;
  }
  return (undefined *)(param_1[0x6e] + 0x3c0);
}



// FUNCTION 1419b27f0 FUN_1419b27f0 body=254 status=ok
// SIG undefined FUN_1419b27f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1419b27f0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  plVar2 = (longlong *)param_1[0x68];
  uVar4 = DAT_1464aa6c0;
  uVar5 = DAT_1464aa6c4;
  uVar6 = DAT_1464aa6c8;
  uVar7 = DAT_1464aa6cc;
  if ((plVar2 != (longlong *)0x0) && (iVar1 = (int)param_1[0x6a], iVar1 != 0)) {
    if (iVar1 == 1) {
      cVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2);
      uVar4 = DAT_1464aa6c0;
      uVar5 = DAT_1464aa6c4;
      uVar6 = DAT_1464aa6c8;
      uVar7 = DAT_1464aa6cc;
      if ((cVar3 == '\0') &&
         (cVar3 = FUN_14192b710(param_1[0x68]), uVar4 = DAT_1464aa6c0, uVar5 = DAT_1464aa6c4,
         uVar6 = DAT_1464aa6c8, uVar7 = DAT_1464aa6cc, cVar3 == '\0')) {
        uVar7 = 0x3f000000;
      }
    }
    else if ((iVar1 != 2) ||
            (((cVar3 = (**(code **)(*param_1 + 0x1a8))(param_1), uVar4 = DAT_1464aa6c0,
              uVar5 = DAT_1464aa6c4, uVar6 = DAT_1464aa6c8, uVar7 = DAT_1464aa6cc, cVar3 == '\0' &&
              (cVar3 = (**(code **)(*(longlong *)param_1[0x68] + 0x1a8))(), uVar4 = DAT_1464aa6c0,
              uVar5 = DAT_1464aa6c4, uVar6 = DAT_1464aa6c8, uVar7 = DAT_1464aa6cc, cVar3 == '\0'))
             && (cVar3 = FUN_14192b710(param_1[0x68]), uVar4 = DAT_1464aa6c0, uVar5 = DAT_1464aa6c4,
                uVar6 = DAT_1464aa6c8, uVar7 = DAT_1464aa6cc, cVar3 == '\0')))) {
      uVar4 = _DAT_1468b5d78;
      uVar5 = uRam00000001468b5d7c;
      uVar6 = uRam00000001468b5d80;
      uVar7 = uRam00000001468b5d84;
    }
  }
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 1419b28f0 FUN_1419b28f0 body=950 status=ok
// SIG undefined FUN_1419b28f0(void)

longlong FUN_1419b28f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  undefined8 local_res8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [32];
  longlong *local_30;
  
  FTextBlockStyle::FTextBlockStyle(param_2,param_1 + 0x240);
  if (*(char *)(param_1 + 0x470) == '\0') {
    puVar9 = (undefined8 *)(param_1 + 0x248);
  }
  else {
    puVar9 = (undefined8 *)FUN_14193e860(param_1 + 0x420);
  }
  local_c0 = *puVar9;
  local_b0 = *(undefined4 *)(puVar9 + 2);
  uStack_ac = *(undefined4 *)((longlong)puVar9 + 0x14);
  uStack_a8 = *(undefined4 *)(puVar9 + 3);
  uStack_a4 = *(undefined4 *)((longlong)puVar9 + 0x1c);
  local_b8 = puVar9[1];
  local_a0 = *(undefined4 *)(puVar9 + 4);
  uStack_9c = *(undefined4 *)((longlong)puVar9 + 0x24);
  uStack_98 = *(undefined4 *)(puVar9 + 5);
  uStack_94 = *(undefined4 *)((longlong)puVar9 + 0x2c);
  local_90 = puVar9[6];
  local_88 = (longlong *)puVar9[7];
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_80 = puVar9[8];
  local_78 = *(undefined4 *)(puVar9 + 9);
  local_74 = *(undefined1 *)((longlong)puVar9 + 0x4c);
  FUN_1417f9360(param_2 + 8,&local_c0);
  plVar13 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_88 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  plVar13 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    puVar12 = (undefined4 *)(param_1 + 0x298);
  }
  else {
    puVar12 = (undefined4 *)(param_1 + 0x488);
    if (((*(int *)(param_1 + 0x4c0) != 0) && (*(longlong **)(param_1 + 0x4b8) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x18))(), cVar8 != '\0')) {
      plVar11 = plVar13;
      if (*(int *)(param_1 + 0x4c0) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x4b8);
      }
      (**(code **)(*plVar11 + 0x38))(plVar11,local_50);
      FUN_140692440(puVar12,local_50);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_30 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  local_d8 = *(undefined1 *)(puVar12 + 4);
  local_e8 = *puVar12;
  uStack_e4 = puVar12[1];
  uStack_e0 = puVar12[2];
  uStack_dc = puVar12[3];
  local_d0 = *(undefined8 *)(puVar12 + 6);
  local_c8 = *(longlong **)(puVar12 + 8);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  FUN_140692440(param_2 + 0x58,&local_e8);
  plVar11 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c8 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x4d0) == '\0') {
    puVar9 = (undefined8 *)(param_1 + 0x2c0);
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 0x4c8);
    if (((*(int *)(param_1 + 0x4e0) != 0) && (*(longlong **)(param_1 + 0x4d8) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x18))(), cVar8 != '\0')) {
      plVar11 = plVar13;
      if (*(int *)(param_1 + 0x4e0) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x4d8);
      }
      (**(code **)(*plVar11 + 0x38))(plVar11,&local_res8);
      *puVar9 = local_res8;
    }
  }
  uVar4 = *(undefined4 *)((longlong)puVar9 + 4);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)puVar9;
  *(undefined4 *)(param_2 + 0x84) = uVar4;
  if (*(char *)(param_1 + 0x4f8) == '\0') {
    puVar9 = (undefined8 *)(param_1 + 0x2c8);
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 0x4e8);
    if (((*(int *)(param_1 + 0x508) != 0) && (*(longlong **)(param_1 + 0x500) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x18))(), cVar8 != '\0')) {
      plVar11 = plVar13;
      if (*(int *)(param_1 + 0x508) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x500);
      }
      (**(code **)(*plVar11 + 0x38))(plVar11,&local_70);
      *puVar9 = local_70;
      *(undefined8 *)(param_1 + 0x4f0) = uStack_68;
    }
  }
  uVar4 = *(undefined4 *)((longlong)puVar9 + 4);
  uVar5 = *(undefined4 *)(puVar9 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar9 + 0xc);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)puVar9;
  *(undefined4 *)(param_2 + 0x8c) = uVar4;
  *(undefined4 *)(param_2 + 0x90) = uVar5;
  *(undefined4 *)(param_2 + 0x94) = uVar6;
  if (*(char *)(param_1 + 0x520) == '\0') {
    puVar9 = (undefined8 *)(param_1 + 0x300);
  }
  else {
    puVar9 = (undefined8 *)(param_1 + 0x510);
    if (((*(int *)(param_1 + 0x530) != 0) && (*(longlong **)(param_1 + 0x528) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x528) + 0x18))(), cVar8 != '\0')) {
      plVar11 = plVar13;
      if (*(int *)(param_1 + 0x530) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x528);
      }
      (**(code **)(*plVar11 + 0x38))(plVar11,&local_60);
      *puVar9 = local_60;
      *(undefined8 *)(param_1 + 0x518) = uStack_58;
    }
  }
  uVar4 = *(undefined4 *)((longlong)puVar9 + 4);
  uVar5 = *(undefined4 *)(puVar9 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar9 + 0xc);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)puVar9;
  *(undefined4 *)(param_2 + 0xc4) = uVar4;
  *(undefined4 *)(param_2 + 200) = uVar5;
  *(undefined4 *)(param_2 + 0xcc) = uVar6;
  if (*(char *)(param_1 + 0x540) == '\0') {
    param_1 = param_1 + 0x310;
  }
  else {
    if (((*(int *)(param_1 + 0x550) != 0) && (*(longlong **)(param_1 + 0x548) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x18))(), cVar8 != '\0')) {
      if (*(int *)(param_1 + 0x550) != 0) {
        plVar13 = *(longlong **)(param_1 + 0x548);
      }
      uVar10 = (**(code **)(*plVar13 + 0x38))(plVar13);
      *(undefined8 *)(param_1 + 0x538) = uVar10;
    }
    param_1 = *(longlong *)(param_1 + 0x538);
  }
  FUN_1406922e0(param_2 + 0xd0,param_1);
  return param_2;
}



// FUNCTION 1419b2cb0 FUN_1419b2cb0 body=126 status=ok
// SIG undefined FUN_1419b2cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1419b2cb0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x240) == 0) {
    return (ulonglong)*(uint *)(param_1 + 0x230);
  }
  if (*(longlong **)(param_1 + 0x238) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x240) != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x38))();
        *(int *)(param_1 + 0x230) = (int)uVar2;
        return uVar2;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(int *)(param_1 + 0x230) = (int)uVar2;
      return uVar2;
    }
  }
  return (ulonglong)*(uint *)(param_1 + 0x230);
}



// FUNCTION 1419b2d40 FUN_1419b2d40 body=580 status=ok
// SIG undefined FUN_1419b2d40(void)

void FUN_1419b2d40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = *(longlong **)(param_1 + 0x2f8);
  plVar7 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar7, !bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x2f0);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  cVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  pcVar3 = *(code **)(**(longlong **)(param_1 + 0x300) + 0x1a8);
  if (cVar5 == '\0') {
    cVar5 = (*pcVar3)();
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if (cVar5 == '\0') {
      uVar8 = DAT_1469f56c8;
      if ((iVar6 < DAT_1469f56d0) &&
         (_Init_thread_header(&DAT_1469f56d0), uVar8 = DAT_1469f56c8, DAT_1469f56d0 == -1)) {
        FName::FName(&DAT_1469f56c8,"TreeArrow_Collapsed",1);
        _Init_thread_footer(&DAT_1469f56d0);
        uVar8 = DAT_1469f56c8;
      }
    }
    else {
      uVar8 = DAT_1469f56b8;
      if ((iVar6 < DAT_1469f56c0) &&
         (_Init_thread_header(&DAT_1469f56c0), uVar8 = DAT_1469f56b8, DAT_1469f56c0 == -1)) {
        FName::FName(&DAT_1469f56b8,"TreeArrow_Collapsed_Hovered",1);
        _Init_thread_footer(&DAT_1469f56c0);
        uVar8 = DAT_1469f56b8;
      }
    }
  }
  else {
    cVar5 = (*pcVar3)();
    iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if (cVar5 == '\0') {
      uVar8 = DAT_1469f56a8;
      if ((iVar6 < DAT_1469f56b0) &&
         (_Init_thread_header(&DAT_1469f56b0), uVar8 = DAT_1469f56a8, DAT_1469f56b0 == -1)) {
        FName::FName(&DAT_1469f56a8,"TreeArrow_Expanded",1);
        _Init_thread_footer(&DAT_1469f56b0);
        uVar8 = DAT_1469f56a8;
      }
    }
    else {
      uVar8 = DAT_1469f5698;
      if ((iVar6 < DAT_1469f56a0) &&
         (_Init_thread_header(&DAT_1469f56a0), uVar8 = DAT_1469f5698, DAT_1469f56a0 == -1)) {
        FName::FName(&DAT_1469f5698,"TreeArrow_Expanded_Hovered",1);
        _Init_thread_footer(&DAT_1469f56a0);
        uVar8 = DAT_1469f5698;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001419b2f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x310) + 0x40))(*(longlong **)(param_1 + 0x310),uVar8,0);
  return;
}



// FUNCTION 1419b2f90 FUN_1419b2f90 body=372 status=ok
// SIG undefined FUN_1419b2f90(void)

float * FUN_1419b2f90(longlong param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  
  plVar7 = *(longlong **)(param_1 + 0x2f8);
  plVar8 = (longlong *)0x0;
  plVar9 = plVar7;
  plVar10 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar7[1];
    bVar11 = iVar6 == 0;
    if (bVar11) {
      *(int *)(plVar7 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar8, plVar10 = (longlong *)0x0, !bVar11) {
      LOCK();
      bVar11 = iVar6 == (int)plVar7[1];
      if (bVar11) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar11) {
        plVar9 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 0x2f0);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if (((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x18))(), cVar4 != '\0')) {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0x340) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x338);
    }
    uVar5 = (**(code **)(*plVar7 + 0x38))();
    *(undefined4 *)(param_1 + 0x330) = uVar5;
  }
  iVar6 = (**(code **)(*plVar10 + 0x30))(plVar10);
  iVar6 = iVar6 - *(int *)(param_1 + 0x330);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  fVar12 = 10.0;
  if (*(char *)(param_1 + 0x31c) != '\0') {
    if (((*(int *)(param_1 + 0x328) != 0) && (*(longlong **)(param_1 + 800) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x328) != 0) {
        plVar8 = *(longlong **)(param_1 + 800);
      }
      uVar5 = (**(code **)(*plVar8 + 0x38))();
      *(undefined4 *)(param_1 + 0x318) = uVar5;
    }
    fVar12 = *(float *)(param_1 + 0x318);
  }
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = (float)iVar6 * fVar12;
  return param_2;
}



// FUNCTION 1419b3110 FUN_1419b3110 body=204 status=ok
// SIG undefined FUN_1419b3110(void)

undefined1 * FUN_1419b3110(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x2f8);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x2f0);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  iVar5 = (**(code **)(*plVar7 + 0x38))(plVar7);
  uVar3 = DAT_1464b9eea;
  if (iVar5 != 0) {
    uVar3 = DAT_1464b9ee8;
  }
  *param_2 = uVar3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 1419b31e0 FUN_1419b31e0 body=91 status=ok
// SIG undefined FUN_1419b31e0(void)

longlong FUN_1419b31e0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1a8))();
  if (((cVar1 != '\0') && ((int)param_1[0x60] != 0)) &&
     ((longlong *)param_1[0x5f] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x5f] + 0x18))();
    if (cVar1 != '\0') {
      return param_1[0x6e] + 0x2b0;
    }
  }
  return param_1[0x6e] + 0x228;
}



// FUNCTION 1419b3240 GetDefaultQueryFilter body=34 status=ok
// SIG undefined GetDefaultQueryFilter(void)

undefined8 * ANavigationData::GetDefaultQueryFilter(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x3d0);
  lVar1 = *(longlong *)(param_1 + 0x3d8);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419b3270 GetItemHeight body=24 status=ok
// SIG undefined GetItemHeight(void)

undefined4 STableViewBase::GetItemHeight(undefined4 param_1)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  lVar1 = FUN_1419b3520(param_1,local_res10);
  return *(undefined4 *)(lVar1 + 4);
}



// FUNCTION 1419b3290 GetItemPadding body=166 status=ok
// SIG undefined GetItemPadding(void)

float SListPanel::GetItemPadding(longlong param_1,float *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_1419b2cb0();
  if ((((param_3 == '\0') && (0.0 < fVar3)) &&
      (iVar2 = (int)ROUND((*param_2 / fVar3 + *param_2 / fVar3) - 0.5) >> 1, 0 < iVar2)) &&
     (iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x208))(), iVar2 < iVar1)) {
    return ((*param_2 - 0.001) - (float)iVar2 * fVar3) / (float)iVar2;
  }
  return 0.0;
}



// FUNCTION 1419b3340 FUN_1419b3340 body=470 status=ok
// SIG undefined FUN_1419b3340(void)

float * FUN_1419b3340(longlong param_1,float *param_2,float *param_3,char param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = (float)FUN_1419b2cb0();
  if (((*(int *)(param_1 + 600) != 0) && (*(longlong **)(param_1 + 0x250) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 600) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x250);
    }
    uVar7 = (**(code **)(*plVar4 + 0x38))();
    *(undefined4 *)(param_1 + 0x248) = uVar7;
  }
  fVar1 = *(float *)(param_1 + 0x248);
  fVar9 = 0.0;
  fVar10 = 0.0;
  if (param_4 == '\x01') {
    if (0.0 < fVar6) {
      fVar8 = *param_3 / fVar6;
      iVar5 = (int)ROUND((fVar8 + fVar8) - 0.5) >> 1;
      if (0 < iVar5) {
        fVar9 = (float)iVar5;
        fVar9 = ((*param_3 - 0.001) - fVar9 * fVar6) / fVar9;
        fVar10 = (fVar9 / (fVar9 + fVar6)) * fVar1;
      }
    }
    goto LAB_1419b34d6;
  }
  if (param_4 == '\x02') {
    if (fVar6 <= 0.0) goto LAB_1419b34d6;
    fVar8 = *param_3;
    iVar5 = (int)ROUND((fVar8 / fVar6 + fVar8 / fVar6) - 0.5) >> 1;
    if (iVar5 < 1) goto LAB_1419b34d6;
  }
  else {
    if ((param_4 != '\x06') || (fVar6 <= 0.0)) goto LAB_1419b34d6;
    iVar5 = (int)ROUND((*param_3 / fVar6 + *param_3 / fVar6) - 0.5) >> 1;
    iVar3 = (*(code *)**(undefined8 **)(param_1 + 0x208))();
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
    if (iVar5 < 1) goto LAB_1419b34d6;
    fVar8 = *param_3;
  }
  fVar9 = ((fVar8 - 0.001) - (float)iVar5 * fVar6) / (float)iVar5;
LAB_1419b34d6:
  *param_2 = fVar9 + fVar6;
  param_2[1] = fVar10 + fVar1;
  return param_2;
}



// FUNCTION 1419b3520 FUN_1419b3520 body=269 status=ok
// SIG undefined FUN_1419b3520(void)

float * FUN_1419b3520(longlong param_1,float *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  plVar5 = (longlong *)0x0;
  if (((*(int *)(lVar1 + 0x288) != 0) && (*(longlong **)(lVar1 + 0x280) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x280) + 0x18))(), cVar2 != '\0')) {
    plVar4 = plVar5;
    if (*(int *)(lVar1 + 0x288) != 0) {
      plVar4 = *(longlong **)(lVar1 + 0x280);
    }
    uVar3 = (**(code **)(*plVar4 + 0x38))();
    *(undefined1 *)(lVar1 + 0x278) = uVar3;
  }
  fVar6 = (float)SListPanel::GetItemPadding(lVar1,param_1 + 0x36c,*(undefined1 *)(lVar1 + 0x278));
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (((*(int *)(lVar1 + 0x288) != 0) && (*(longlong **)(lVar1 + 0x280) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x280) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(lVar1 + 0x288) != 0) {
      plVar5 = *(longlong **)(lVar1 + 0x280);
    }
    uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    *(undefined1 *)(lVar1 + 0x278) = uVar3;
  }
  FUN_1419b3340(lVar1,&local_res8,param_1 + 0x36c,*(undefined1 *)(lVar1 + 0x278));
  param_2[1] = local_resc;
  *param_2 = fVar6 + local_res8;
  return param_2;
}



// FUNCTION 1419b3630 GetItemWidth body=23 status=ok
// SIG undefined GetItemWidth(void)

undefined4 STableViewBase::GetItemWidth(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined4 *)FUN_1419b3520(param_1,local_res10);
  return *puVar1;
}



// FUNCTION 1419b3650 FUN_1419b3650 body=110 status=ok
// SIG undefined FUN_1419b3650(void)

undefined1 * FUN_1419b3650(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  
  if ((int)param_1[0x6a] == 2) {
    if (param_1[0x68] == 0) {
LAB_1419b3690:
      *param_2 = DAT_1464b9ee9;
      return param_2;
    }
    cVar1 = (**(code **)(*param_1 + 0x1a8))();
    if (cVar1 == '\0') {
      cVar1 = FUN_14192b710(param_1[0x68]);
      if (cVar1 == '\0') goto LAB_1419b3690;
    }
  }
  *param_2 = DAT_1464b9ee8;
  return param_2;
}



// FUNCTION 1419b36c0 FUN_1419b36c0 body=40 status=ok
// SIG undefined FUN_1419b36c0(void)

void FUN_1419b36c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x300) + 0x170))();
  (**(code **)*puVar1)(puVar1);
  return;
}



// FUNCTION 1419b36f0 FUN_1419b36f0 body=413 status=ok
// SIG undefined FUN_1419b36f0(void)

undefined8 * FUN_1419b36f0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  float *pfVar4;
  longlong *plVar5;
  float local_res20;
  float local_res24;
  undefined8 local_28 [2];
  
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x390))) {
    plVar5 = (longlong *)((longlong)param_3 * 0x10 + *(longlong *)(param_1 + 0x398));
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x388) + (longlong)param_3 * 8);
    SWidget::GetDesiredSize(*plVar5,&local_res20);
    if ((((*(longlong *)(lVar1 + 0xb0) != DAT_1469eb218) &&
         (plVar2 = (longlong *)*plVar5, (int)plVar2[0x6a] == 2)) &&
        ((plVar2[0x68] == 0 ||
         ((cVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2), cVar3 == '\0' &&
          (cVar3 = FUN_14192b710(plVar2[0x68]), cVar3 == '\0')))))) &&
       (DAT_1464b9ee9 != DAT_1464b9ee8)) {
      if (*(longlong *)(*plVar5 + 0x358) == 0) {
        pfVar4 = (float *)local_28;
        local_28[0] = DAT_1468b5d88;
      }
      else {
        pfVar4 = (float *)SWidget::GetDesiredSize(*(longlong *)(*plVar5 + 0x358),local_28);
      }
      local_res20 = local_res20 + *pfVar4;
      local_res24 = local_res24 + pfVar4[1];
    }
    if (((*(int *)(param_1 + 0x3f8) != 0) && (*(longlong **)(param_1 + 0x3f0) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x3f8) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x3f0);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,local_28,lVar1,0);
      pfVar4 = &local_res20;
      if (local_res20 <= (float)local_28[0]) {
        pfVar4 = (float *)local_28;
      }
      *param_2 = *(undefined8 *)pfVar4;
      return param_2;
    }
  }
  *param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 1419b3890 FUN_1419b3890 body=38 status=ok
// SIG undefined FUN_1419b3890(void)

undefined4 * FUN_1419b3890(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1419811b0(*(undefined8 *)(param_1 + 0x20));
  param_2[1] = uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1419b38c0 FUN_1419b38c0 body=38 status=ok
// SIG undefined FUN_1419b38c0(void)

undefined4 * FUN_1419b38c0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_141981180(*(undefined8 *)(param_1 + 0x20));
  param_2[1] = uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1419b38f0 FUN_1419b38f0 body=220 status=ok
// SIG undefined FUN_1419b38f0(void)

undefined8 * FUN_1419b38f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar6 = (undefined8 *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x2e8,local_28);
  plVar3 = (longlong *)puVar6[1];
  uVar4 = *puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar7 = plVar3 + 1;
  *param_2 = uVar4;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 1419b39d0 FUN_1419b39d0 body=119 status=ok
// SIG undefined FUN_1419b39d0(void)

undefined1 * FUN_1419b39d0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x300) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x2f8);
      }
      uVar2 = (**(code **)(*plVar4 + 0x38))();
      *(undefined4 *)(param_1 + 0x2f0) = uVar2;
    }
  }
  uVar3 = DAT_1464b9eea;
  if (*(int *)(param_1 + 0x2f0) != 0) {
    uVar3 = DAT_1464b9eeb;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1419b3a50 FUN_1419b3a50 body=319 status=ok
// SIG undefined FUN_1419b3a50(void)

longlong FUN_1419b3a50(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar1 != '\0')) {
    plVar4 = plVar6;
    if (*(int *)(param_1 + 0x318) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x310);
    }
    uVar2 = (**(code **)(*plVar4 + 0x38))();
    *(undefined4 *)(param_1 + 0x308) = uVar2;
  }
  if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar1 != '\0')) {
    plVar4 = plVar6;
    if (*(int *)(param_1 + 0x300) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x2f8);
    }
    uVar2 = (**(code **)(*plVar4 + 0x38))();
    *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  }
  if (*(int *)(param_1 + 0x2f0) == 1) {
    if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x318) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x310);
      }
      uVar2 = (**(code **)(*plVar6 + 0x38))(plVar6);
      *(undefined4 *)(param_1 + 0x308) = uVar2;
    }
    lVar3 = 0x118;
    lVar5 = 8;
  }
  else {
    if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x318) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x310);
      }
      uVar2 = (**(code **)(*plVar6 + 0x38))(plVar6);
      *(undefined4 *)(param_1 + 0x308) = uVar2;
    }
    lVar3 = 0x1a0;
    lVar5 = 0x90;
  }
  if (*(int *)(param_1 + 0x308) != 1) {
    lVar3 = lVar5;
  }
  return lVar3 + *(longlong *)(param_1 + 0x370);
}



// FUNCTION 1419b3b90 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SMultiLineEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FSlateEditableTextLayout::GetText(*(undefined8 *)(param_1 + 0x210));
  return param_2;
}



// FUNCTION 1419b3bb0 GetVirtualKeyboardDismissAction body=98 status=ok
// SIG undefined GetVirtualKeyboardDismissAction(void)

undefined1 SMultiLineEditableText::GetVirtualKeyboardDismissAction(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1d0) != 0) {
    if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x1d0) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x1c8);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x1c0) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x1c0);
  }
  return *(undefined1 *)(param_1 + 0x1c0);
}



// FUNCTION 1419b3c30 GetVirtualKeyboardTrigger body=96 status=ok
// SIG undefined GetVirtualKeyboardTrigger(void)

undefined4 SMultiLineEditableText::GetVirtualKeyboardTrigger(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1b8) != 0) {
    if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x1b8) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x1b0);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined4 *)(param_1 + 0x1a8) = uVar2;
      }
    }
    return *(undefined4 *)(param_1 + 0x1a8);
  }
  return *(undefined4 *)(param_1 + 0x1a8);
}



// FUNCTION 1419b3c90 FUN_1419b3c90 body=125 status=ok
// SIG undefined FUN_1419b3c90(void)

void FUN_1419b3c90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar6 = *(undefined8 *)(param_1 + 0x300);
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,local_18);
  uVar6 = FUN_1419aa840(uVar6,0);
  FUN_140801a00(uVar6,uVar5);
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



// FUNCTION 1419b3d10 IsBound body=43 status=ok
// SIG undefined IsBound(void)

undefined8 TAttribute<FText>::IsBound(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419b3d40 FUN_1419b3d40 body=99 status=ok
// SIG undefined FUN_1419b3d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1419b3d40(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 1;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x20) != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
        *(undefined1 *)(param_1 + 0x10) = uVar2;
        return uVar2;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined1 *)(param_1 + 0x10) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x10);
}



// FUNCTION 1419b3db0 FUN_1419b3db0 body=31 status=ok
// SIG undefined FUN_1419b3db0(void)

undefined8 FUN_1419b3db0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x41a) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x300) + 0x29c) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1419b3dd0 FUN_1419b3dd0 body=70 status=ok
// SIG undefined FUN_1419b3dd0(void)

undefined1 FUN_1419b3dd0(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)FUN_14189c9c0(DAT_1469f4590);
  if (fVar2 < *(float *)(param_1 + 0x33c) || fVar2 == *(float *)(param_1 + 0x33c)) {
    cVar1 = FUN_14198bef0(*(undefined8 *)(param_1 + 0x310));
    if ((cVar1 != '\0') || (*(char *)(param_1 + 0x418) == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1419b3e20 IsStyleUpToDate body=898 status=ok
// SIG undefined IsStyleUpToDate(void)

ulonglong FSlateTextBlockLayout::IsStyleUpToDate(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FSlateTextLayout::GetDefaultTextStyle(*param_1);
  uVar2 = uVar1;
  if ((((((*(longlong *)(uVar1 + 8) == *(longlong *)(param_2 + 8)) &&
         (*(longlong *)(uVar1 + 0x10) == *(longlong *)(param_2 + 0x10))) &&
        (*(int *)(uVar1 + 0x18) == *(int *)(param_2 + 0x18))) &&
       (((uVar2 = 0, *(char *)(uVar1 + 0x1c) == *(char *)(param_2 + 0x1c) &&
         (uVar2 = *(ulonglong *)(param_2 + 0x38), *(ulonglong *)(uVar1 + 0x38) == uVar2)) &&
        ((uVar2 = *(ulonglong *)(param_2 + 0x48), *(ulonglong *)(uVar1 + 0x48) == uVar2 &&
         ((uVar2 = (ulonglong)*(uint *)(param_2 + 0x50),
          *(uint *)(uVar1 + 0x50) == *(uint *)(param_2 + 0x50) &&
          (*(float *)(param_2 + 0x58) == *(float *)(uVar1 + 0x58))))))))) &&
      (*(float *)(param_2 + 0x5c) == *(float *)(uVar1 + 0x5c))) &&
     ((*(float *)(param_2 + 0x60) == *(float *)(uVar1 + 0x60) &&
      (*(float *)(param_2 + 100) == *(float *)(uVar1 + 100))))) {
    uVar2 = 0;
    if (((*(char *)(uVar1 + 0x68) == *(char *)(param_2 + 0x68)) &&
        ((((*(char *)(uVar1 + 0x68) != '\x01' ||
           (uVar2 = *(ulonglong *)(param_2 + 0x70), *(ulonglong *)(uVar1 + 0x70) == uVar2)) &&
          (*(float *)(param_2 + 0x80) == *(float *)(uVar1 + 0x80))) &&
         ((*(float *)(param_2 + 0x84) == *(float *)(uVar1 + 0x84) &&
          (*(float *)(param_2 + 0x88) == *(float *)(uVar1 + 0x88))))))) &&
       ((*(float *)(param_2 + 0x8c) == *(float *)(uVar1 + 0x8c) &&
        (((*(float *)(param_2 + 0x90) == *(float *)(uVar1 + 0x90) &&
          (*(float *)(param_2 + 0x94) == *(float *)(uVar1 + 0x94))) &&
         ((*(float *)(param_2 + 0x98) == *(float *)(uVar1 + 0x98) &&
          (((*(float *)(param_2 + 0x9c) == *(float *)(uVar1 + 0x9c) &&
            (*(float *)(param_2 + 0xa0) == *(float *)(uVar1 + 0xa0))) &&
           (*(float *)(param_2 + 0xa4) == *(float *)(uVar1 + 0xa4))))))))))) {
      uVar2 = 0;
      if ((*(char *)(uVar1 + 0xa8) == *(char *)(param_2 + 0xa8)) &&
         ((((*(char *)(uVar1 + 0xa8) != '\x01' ||
            (uVar2 = *(ulonglong *)(param_2 + 0xb0), *(ulonglong *)(uVar1 + 0xb0) == uVar2)) &&
           (((*(float *)(param_2 + 0xc0) == *(float *)(uVar1 + 0xc0) &&
             ((*(float *)(param_2 + 0xc4) == *(float *)(uVar1 + 0xc4) &&
              (*(float *)(param_2 + 200) == *(float *)(uVar1 + 200))))) &&
            (*(float *)(param_2 + 0xcc) == *(float *)(uVar1 + 0xcc))))) &&
          ((((*(float *)(param_2 + 0xd8) == *(float *)(uVar1 + 0xd8) &&
             (*(float *)(param_2 + 0xdc) == *(float *)(uVar1 + 0xdc))) &&
            (uVar2 = 0, *(char *)(uVar1 + 0x13c) == *(char *)(param_2 + 0x13c))) &&
           (((*(float *)(param_2 + 0xe0) == *(float *)(uVar1 + 0xe0) &&
             (*(float *)(param_2 + 0xe8) == *(float *)(uVar1 + 0xe8))) &&
            ((*(float *)(param_2 + 0xe4) == *(float *)(uVar1 + 0xe4) &&
             (*(float *)(param_2 + 0xec) == *(float *)(uVar1 + 0xec))))))))))) {
        uVar2 = FSlateColor::operator==(uVar1 + 0xf0,param_2 + 0xf0);
        if ((((char)uVar2 != '\0') &&
            (uVar2 = 0, *(char *)(uVar1 + 0x13d) == *(char *)(param_2 + 0x13d))) &&
           ((uVar2 = 0, *(char *)(uVar1 + 0x13e) == *(char *)(param_2 + 0x13e) &&
            (((((uVar2 = *(ulonglong *)(param_2 + 0x118), *(ulonglong *)(uVar1 + 0x118) == uVar2 &&
                (uVar2 = *(ulonglong *)(param_2 + 0x120), *(ulonglong *)(uVar1 + 0x120) == uVar2))
               && (uVar2 = 0, ((*(byte *)(uVar1 + 0x150) ^ *(byte *)(param_2 + 0x150)) & 1) == 0))
              && ((*(float *)(param_2 + 0x128) == *(float *)(uVar1 + 0x128) &&
                  (*(float *)(param_2 + 300) == *(float *)(uVar1 + 300))))) &&
             ((*(float *)(param_2 + 0x130) == *(float *)(uVar1 + 0x130) &&
              (*(float *)(param_2 + 0x134) == *(float *)(uVar1 + 0x134))))))))) {
          return 1;
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1419b41b0 FUN_1419b41b0 body=107 status=ok
// SIG undefined FUN_1419b41b0(void)

ulonglong FUN_1419b41b0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xa1) != '\0') {
    if ((*(int *)(param_1 + 0xb0) != 0) && (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xb0) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0xa8);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0xa0) = uVar2;
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0xa0);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1419b4220 FUN_1419b4220 body=12 status=ok
// SIG undefined FUN_1419b4220(void)

void FUN_1419b4220(void)

{
  FUN_1418aa260(DAT_1469f4590);
  return;
}



// FUNCTION 1419b4230 FUN_1419b4230 body=2275 status=ok
// SIG undefined FUN_1419b4230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419b4230(longlong param_1,float *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  float *local_330;
  float *local_328;
  char local_318;
  float local_310;
  float fStack_30c;
  longlong local_308;
  float local_300;
  float fStack_2fc;
  undefined8 local_2f8;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  undefined4 local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  undefined8 local_2cc;
  float local_2c4;
  float local_2c0 [2];
  undefined8 local_2b8;
  undefined1 local_2b0 [4];
  float local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  float fStack_298;
  float fStack_294;
  float local_290;
  float fStack_28c;
  float fStack_288;
  undefined4 auStack_284 [5];
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  float fStack_260;
  float fStack_25c;
  float local_258;
  undefined4 uStack_254;
  float fStack_250;
  undefined4 auStack_24c [5];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  float local_220;
  float local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  float local_204;
  undefined1 local_200 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  ulonglong local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  longlong local_150;
  longlong *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_2f8 = param_3;
  fVar17 = (float)FUN_1419b2cb0();
  if (fVar17 <= 0.0) {
    puVar2 = (undefined8 *)(param_1 + 0x208);
    iVar8 = (**(code **)*puVar2)(puVar2);
    if (0 < iVar8) {
      lVar14 = SWidget::GetDesiredSize
                         (*(undefined8 *)(**(longlong **)(param_1 + 0x218) + 0x10),local_200);
      iVar16 = 0;
      fVar17 = (float)-((int)ROUND((*(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x290)) *
                                   *(float *)(lVar14 + 4) - 0.5) >> 1) - *(float *)(param_1 + 0x294)
      ;
      iVar8 = (**(code **)*puVar2)(puVar2);
      if (0 < iVar8) {
        lVar14 = 0;
        do {
          SWidget::GetDesiredSize
                    (*(undefined8 *)(*(longlong *)(lVar14 + *(longlong *)(param_1 + 0x218)) + 0x10),
                     local_2b0);
          fVar18 = local_2ac;
          local_300 = *param_2;
          lVar10 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 0x218));
          fStack_2fc = local_2ac;
          local_2cc = 0x3f800000;
          local_2c4 = fVar17;
          lVar12 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar10 + 0x10) + 0xd0);
          if (*(char *)(lVar12 + 0x18) == '\0') {
            local_268 = CONCAT44(fStack_2fc,local_300);
            fVar19 = param_2[2];
            local_218 = 0x3f800000;
            uStack_214 = 0;
            uStack_210 = 0;
            uStack_20c = 0x3f800000;
            local_208 = 0;
            local_204 = fVar17;
            Concatenate<FTransform2D>(auStack_24c,&local_218,param_2 + 7);
            plVar15 = *(longlong **)(lVar10 + 0x18);
            fStack_25c = param_2[3];
            uStack_234 = CONCAT31(uStack_234._1_3_,
                                  (byte)uStack_234 ^
                                  (*(byte *)(param_2 + 0xd) ^ (byte)uStack_234) & 1);
            local_100 = *(undefined8 *)(lVar10 + 0x10);
            uStack_254 = 0;
            local_258 = fVar19 * fVar17 + param_2[4];
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            uStack_130 = CONCAT44(fStack_25c,fVar19);
            local_128 = (ulonglong)(uint)local_258;
            uStack_120 = CONCAT44(auStack_24c[0],fVar17);
            local_138 = local_268;
            uVar20 = local_238;
            uVar21 = uStack_234;
            fStack_260 = fVar19;
            fStack_250 = fVar17;
          }
          else {
            lVar12 = *(longlong *)(lVar10 + 0x10);
            if (((*(int *)(lVar12 + 0x118) != 0) &&
                (*(longlong **)(lVar12 + 0x110) != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(**(longlong **)(lVar12 + 0x110) + 0x18))(), cVar5 != '\0')) {
              if (*(int *)(lVar12 + 0x118) == 0) {
                plVar15 = (longlong *)0x0;
              }
              else {
                plVar15 = *(longlong **)(lVar12 + 0x110);
              }
              (**(code **)(*plVar15 + 0x38))(plVar15,&local_2a8);
              *(undefined8 *)(lVar12 + 0x100) = local_2a8;
            }
            uVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(lVar10 + 0x10) + 0xd0);
            local_2d8 = param_2[2];
            local_328 = param_2 + 7;
            local_2d4 = param_2[3];
            local_330 = &local_2d8;
            local_2d0 = param_2[4];
            local_338 = (undefined8 *)(lVar12 + 0x100);
            FGeometry::FGeometry(&local_1c0,&local_300,&local_2cc,uVar11);
            plVar15 = *(longlong **)(lVar10 + 0x18);
            local_100 = *(undefined8 *)(lVar10 + 0x10);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            local_138 = local_1c0;
            uStack_130 = uStack_1b8;
            local_128 = local_1b0;
            uStack_120 = uStack_1a8;
            uVar20 = (int)local_190;
            uVar21 = (int)((ulonglong)local_190 >> 0x20);
          }
          local_108 = CONCAT44(uVar21,uVar20);
          local_f8 = plVar15;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            LOCK();
            plVar13 = plVar15 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          FUN_141801ed0(local_2f8,&local_138);
          plVar15 = local_f8;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_f8 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          fVar17 = fVar17 + fVar18;
          iVar16 = iVar16 + 1;
          lVar14 = lVar14 + 8;
          iVar8 = (**(code **)*puVar2)(puVar2);
        } while (iVar16 < iVar8);
      }
    }
  }
  else {
    if (((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x288) == 0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = *(longlong **)(param_1 + 0x280);
      }
      uVar6 = (**(code **)(*plVar15 + 0x38))();
      *(undefined1 *)(param_1 + 0x278) = uVar6;
    }
    cVar5 = *(char *)(param_1 + 0x278);
    fVar17 = *param_2;
    local_318 = cVar5;
    fVar18 = (float)SListPanel::GetItemPadding(param_1,param_2,cVar5);
    FUN_1419b3340(param_1,&local_310,param_2,cVar5);
    puVar2 = (undefined8 *)(param_1 + 0x208);
    fVar19 = fStack_30c * *(float *)(param_1 + 0x290);
    bVar4 = true;
    iVar16 = 0;
    fVar23 = 0.0;
    fVar19 = (float)-((int)ROUND((fVar19 + fVar19) - 0.5) >> 1) - *(float *)(param_1 + 0x294);
    iVar8 = (**(code **)*puVar2)(puVar2);
    if (0 < iVar8) {
      lVar14 = 0;
      fVar24 = local_310 + fVar18;
      local_308 = 0;
      do {
        if (bVar4) {
          if ((byte)(cVar5 - 4U) < 2) {
            iVar8 = (**(code **)*puVar2)(puVar2);
            iVar8 = iVar8 - iVar16;
            if (iVar8 < 1) {
              fVar22 = 0.0;
            }
            else {
              if (((*(int *)(param_1 + 0x288) != 0) &&
                  (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) &&
                 (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x18))(), cVar7 != '\0'))
              {
                if (*(int *)(param_1 + 0x288) == 0) {
                  plVar15 = (longlong *)0x0;
                }
                else {
                  plVar15 = *(longlong **)(param_1 + 0x280);
                }
                uVar6 = (**(code **)(*plVar15 + 0x38))();
                *(undefined1 *)(param_1 + 0x278) = uVar6;
              }
              FUN_1419b3340(param_1,local_2c0,param_2,*(undefined1 *)(param_1 + 0x278));
              if (local_2c0[0] <= 0.0) {
                iVar9 = 0;
              }
              else {
                fVar22 = *param_2 / local_2c0[0];
                iVar9 = (int)ROUND((fVar22 + fVar22) - 0.5) >> 1;
              }
              if (iVar8 <= iVar9) {
                iVar9 = iVar8;
              }
              fVar22 = (*param_2 - 0.001) - (float)iVar9 * local_2c0[0];
            }
            if (cVar5 != '\x04') {
              fVar22 = fVar22 * 0.5;
            }
            fVar23 = fVar23 + fVar22;
            lVar14 = local_308;
          }
          bVar4 = false;
        }
        fVar22 = fVar23 + fVar18 * 0.5;
        local_2e4 = 0x3f800000;
        lVar14 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 0x218));
        plVar15 = (longlong *)(lVar14 + 0x10);
        local_2e0 = fVar22;
        local_2dc = fVar19;
        lVar10 = TAttribute<TOptional<FTransform2D>_>::Get(*plVar15 + 0xd0);
        if (*(char *)(lVar10 + 0x18) == '\0') {
          local_2a0 = CONCAT44(fStack_30c,local_310);
          fVar3 = param_2[2];
          local_230 = 0x3f800000;
          uStack_22c = 0;
          uStack_228 = 0;
          uStack_224 = 0x3f800000;
          local_220 = fVar22;
          local_21c = fVar19;
          Concatenate<FTransform2D>(auStack_284,&local_230,param_2 + 7);
          plVar13 = *(longlong **)(lVar14 + 0x18);
          uStack_26c = CONCAT31(uStack_26c._1_3_,
                                (byte)uStack_26c ^ (*(byte *)(param_2 + 0xd) ^ (byte)uStack_26c) & 1
                               );
          local_150 = *plVar15;
          fStack_294 = fVar3 * fVar22 + param_2[3];
          local_290 = fVar3 * fVar19 + param_2[4];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          uStack_180 = CONCAT44(fStack_294,fVar3);
          local_178 = CONCAT44(fVar22,local_290);
          uStack_170 = CONCAT44(auStack_284[0],fVar19);
          local_188 = local_2a0;
          uVar20 = local_270;
          uVar21 = uStack_26c;
          fStack_298 = fVar3;
          fStack_28c = fVar22;
          fStack_288 = fVar19;
        }
        else {
          lVar10 = *plVar15;
          if (((*(int *)(lVar10 + 0x118) != 0) &&
              (*(longlong **)(lVar10 + 0x110) != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(**(longlong **)(lVar10 + 0x110) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar10 + 0x118) == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)(lVar10 + 0x110);
            }
            (**(code **)(*plVar13 + 0x38))(plVar13,&local_2b8);
            *(undefined8 *)(lVar10 + 0x100) = local_2b8;
          }
          uVar11 = TAttribute<TOptional<FTransform2D>_>::Get(*plVar15 + 0xd0);
          local_2f0 = param_2[2];
          local_328 = param_2 + 7;
          local_2ec = param_2[3];
          local_330 = &local_2f0;
          local_2e8 = param_2[4];
          local_338 = (undefined8 *)(lVar10 + 0x100);
          FGeometry::FGeometry(&local_1f8,&local_310,&local_2e4,uVar11);
          plVar13 = *(longlong **)(lVar14 + 0x18);
          local_150 = *plVar15;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_188 = local_1f8;
          uStack_180 = uStack_1f0;
          local_178 = local_1e8;
          uStack_170 = uStack_1e0;
          uVar20 = (int)local_1c8;
          uVar21 = (int)((ulonglong)local_1c8 >> 0x20);
        }
        local_158 = CONCAT44(uVar21,uVar20);
        local_148 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          LOCK();
          plVar15 = plVar13 + 1;
          lVar14 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
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
        FUN_141801ed0(local_2f8,&local_188);
        plVar15 = local_148;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_148 + 1;
          lVar14 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        fVar23 = fVar23 + fVar24;
        if (fVar17 < fVar24 + fVar23) {
          fVar19 = fVar19 + fStack_30c;
          fVar23 = 0.0;
          bVar4 = true;
        }
        lVar14 = local_308 + 8;
        iVar16 = iVar16 + 1;
        local_308 = lVar14;
        iVar8 = (**(code **)*puVar2)(puVar2);
        cVar5 = local_318;
      } while (iVar16 < iVar8);
    }
  }
  return;
}



// FUNCTION 1419b4b50 FUN_1419b4b50 body=403 status=ok
// SIG undefined FUN_1419b4b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1419b4b50(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  ushort local_res10 [12];
  
  FSlateApplication::GetModifierKeys(DAT_1469f4590,local_res10);
  if (((local_res10[0] & 1) == 0) && ((local_res10[0] & 2) == 0)) {
    plVar6 = *(longlong **)(param_1 + 0x2f8);
    plVar4 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) {
LAB_1419b4bcd:
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    else {
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (!bVar7) {
        LOCK();
        bVar7 = iVar3 == (int)plVar6[1];
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar7) {
          plVar4 = (longlong *)0x0;
          if (plVar6 != (longlong *)0x0) {
            plVar4 = *(longlong **)(param_1 + 0x2f0);
          }
          goto LAB_1419b4bcd;
        }
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(plVar6 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
      (**(code **)(_DAT_00000000 + 0x20))(0);
      plVar6 = (longlong *)0x0;
    }
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x2f8);
    plVar5 = (longlong *)0x0;
    plVar6 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar5 = (longlong *)0x0, plVar6 = (longlong *)0x0, !bVar7) {
        LOCK();
        bVar7 = iVar3 == (int)plVar4[1];
        if (bVar7) {
          *(int *)(plVar4 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar7) {
          plVar6 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            plVar5 = *(longlong **)(param_1 + 0x2f0);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(plVar4 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    (**(code **)(*plVar5 + 0x60))(plVar5);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b4cf0 OnCursorMoved body=87 status=ok
// SIG undefined OnCursorMoved(void)

void SMultiLineEditableText::OnCursorMoved(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x100) != 0) && (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x100) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0xf8);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 1419b4d50 FUN_1419b4d50 body=238 status=ok
// SIG undefined FUN_1419b4d50(void)

undefined1 *
FUN_1419b4d50(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  float fVar2;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  fVar2 = (float)FUN_14189c9c0(DAT_1469f4590);
  if ((fVar2 < *(float *)(param_1 + 0x378) || fVar2 == *(float *)(param_1 + 0x378)) &&
     (*(longlong *)(param_1 + 800) != 0)) {
    cVar1 = FUN_14198bef0();
    if (cVar1 != '\0') {
      local_28 = DAT_1469e9880;
      local_20 = DAT_1469e9888;
      local_18 = DAT_1469e9890;
      if (DAT_1469e9890 != 0) {
        LOCK();
        *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
        UNLOCK();
      }
      cVar1 = FUN_140472340(param_4,&local_28);
      if (cVar1 != '\0') {
        *param_2 = 1;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined4 *)(param_2 + 0x38) = 0;
        return param_2;
      }
    }
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 2;
  return param_2;
}



// FUNCTION 1419b4e40 FUN_1419b4e40 body=241 status=ok
// SIG undefined FUN_1419b4e40(void)

undefined1 *
FUN_1419b4e40(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  float fVar2;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  fVar2 = (float)FUN_14189c9c0(DAT_1469f4590);
  if (fVar2 < *(float *)(param_1 + 0x33c) || fVar2 == *(float *)(param_1 + 0x33c)) {
    cVar1 = FUN_14198bef0(*(undefined8 *)(param_1 + 0x310));
    if ((cVar1 != '\0') || (*(char *)(param_1 + 0x418) == '\0')) {
      local_28 = DAT_1469e9880;
      local_20 = DAT_1469e9888;
      local_18 = DAT_1469e9890;
      if (DAT_1469e9890 != 0) {
        LOCK();
        *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
        UNLOCK();
      }
      cVar1 = FUN_140472340(param_4,&local_28);
      if (cVar1 != '\0') {
        *param_2 = 1;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined4 *)(param_2 + 0x38) = 0;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 1;
  return param_2;
}



// FUNCTION 1419b4f70 OnFocusReceived body=155 status=ok
// SIG undefined OnFocusReceived(void)

undefined1 *
SMultiLineEditableText::OnFocusReceived
          (longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141986a30(*(undefined8 *)(param_1 + 0x210),param_4);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b5010 OnHScrollBarMoved body=62 status=ok
// SIG undefined OnHScrollBarMoved(void)

void SMultiLineEditableText::OnHScrollBarMoved(longlong param_1,undefined4 param_2)

{
  undefined1 local_res8 [32];
  
  FSlateEditableTextLayout::SetHorizontalScrollFraction
            (*(undefined8 *)(param_1 + 0x210),local_res8,param_2);
  TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x330,param_2);
  return;
}



// FUNCTION 1419b5050 FUN_1419b5050 body=334 status=ok
// SIG undefined FUN_1419b5050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1419b5050(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)0x0;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x20] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[0x4c] = '\0';
  param_2[0x4d] = '\0';
  param_2[0x4e] = '\0';
  param_2[0x4f] = '\0';
  param_2[0x50] = '\0';
  param_2[0x51] = '\0';
  param_2[0x52] = '\0';
  param_2[0x53] = '\0';
  param_2[0x54] = '\0';
  param_2[0x55] = '\0';
  param_2[0x56] = '\0';
  param_2[0x57] = '\0';
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\0';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  param_2[0x68] = '\0';
  param_2[0x69] = '\0';
  param_2[0x6a] = '\0';
  param_2[0x6b] = '\0';
  param_2[0x6c] = '\0';
  param_2[0x6d] = '\0';
  param_2[0x6e] = '\0';
  param_2[0x6f] = '\0';
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  param_2[0x74] = '\0';
  param_2[0x75] = '\0';
  param_2[0x76] = '\0';
  param_2[0x77] = '\0';
  param_2[0x78] = '\0';
  param_2[0x79] = '\0';
  param_2[0x7a] = '\0';
  param_2[0x7b] = '\0';
  param_2[0x7c] = '\0';
  param_2[0x7d] = '\0';
  param_2[0x7e] = '\0';
  param_2[0x7f] = '\0';
  param_2[0x80] = '\0';
  param_2[0x81] = '\0';
  param_2[0x82] = '\0';
  param_2[0x83] = '\0';
  param_2[0x84] = '\0';
  param_2[0x85] = '\0';
  param_2[0x86] = '\0';
  param_2[0x87] = '\0';
  param_2[0x88] = '\0';
  param_2[0x89] = '\0';
  param_2[0x8a] = '\0';
  param_2[0x8b] = '\0';
  param_2[0x8c] = '\0';
  param_2[0x8d] = '\0';
  param_2[0x8e] = '\0';
  param_2[0x8f] = '\0';
  param_2[0x90] = '\0';
  param_2[0x91] = '\0';
  param_2[0x92] = '\0';
  param_2[0x93] = '\0';
  param_2[0x94] = '\0';
  param_2[0x95] = '\0';
  param_2[0x96] = '\0';
  param_2[0x97] = '\0';
  param_2[0x98] = '\0';
  param_2[0x99] = '\0';
  param_2[0x9a] = '\0';
  param_2[0x9b] = '\0';
  param_2[0x9c] = '\0';
  param_2[0x9d] = '\0';
  param_2[0x9e] = '\0';
  param_2[0x9f] = '\0';
  param_2[0xa0] = '\0';
  param_2[0xa1] = '\0';
  param_2[0xa2] = '\0';
  param_2[0xa3] = '\0';
  param_2[0xa4] = '\0';
  param_2[0xa5] = '\0';
  param_2[0xa6] = '\0';
  param_2[0xa7] = '\0';
  param_2[0xa8] = '\0';
  param_2[0xa9] = '\0';
  param_2[0xaa] = '\0';
  param_2[0xab] = '\0';
  param_2[0xac] = '\0';
  param_2[0xad] = '\0';
  param_2[0xae] = '\0';
  param_2[0xaf] = '\0';
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  if ((*(int *)(param_1 + 0x390) != 0) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x390) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x388);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,local_f8,param_3,param_4);
      FUN_140439160(param_2,local_f8);
      FUN_140438c20(local_f8);
    }
  }
  if (*param_2 == '\0') {
    uVar2 = FUN_141986dc0(*(undefined8 *)(param_1 + 0x210),local_f8,param_4);
    FUN_140439160(param_2,uVar2);
    FUN_140438c20(local_f8);
  }
  return param_2;
}



// FUNCTION 1419b51a0 FUN_1419b51a0 body=334 status=ok
// SIG undefined FUN_1419b51a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1419b51a0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)0x0;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x20] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[0x4c] = '\0';
  param_2[0x4d] = '\0';
  param_2[0x4e] = '\0';
  param_2[0x4f] = '\0';
  param_2[0x50] = '\0';
  param_2[0x51] = '\0';
  param_2[0x52] = '\0';
  param_2[0x53] = '\0';
  param_2[0x54] = '\0';
  param_2[0x55] = '\0';
  param_2[0x56] = '\0';
  param_2[0x57] = '\0';
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\0';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  param_2[0x68] = '\0';
  param_2[0x69] = '\0';
  param_2[0x6a] = '\0';
  param_2[0x6b] = '\0';
  param_2[0x6c] = '\0';
  param_2[0x6d] = '\0';
  param_2[0x6e] = '\0';
  param_2[0x6f] = '\0';
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  param_2[0x74] = '\0';
  param_2[0x75] = '\0';
  param_2[0x76] = '\0';
  param_2[0x77] = '\0';
  param_2[0x78] = '\0';
  param_2[0x79] = '\0';
  param_2[0x7a] = '\0';
  param_2[0x7b] = '\0';
  param_2[0x7c] = '\0';
  param_2[0x7d] = '\0';
  param_2[0x7e] = '\0';
  param_2[0x7f] = '\0';
  param_2[0x80] = '\0';
  param_2[0x81] = '\0';
  param_2[0x82] = '\0';
  param_2[0x83] = '\0';
  param_2[0x84] = '\0';
  param_2[0x85] = '\0';
  param_2[0x86] = '\0';
  param_2[0x87] = '\0';
  param_2[0x88] = '\0';
  param_2[0x89] = '\0';
  param_2[0x8a] = '\0';
  param_2[0x8b] = '\0';
  param_2[0x8c] = '\0';
  param_2[0x8d] = '\0';
  param_2[0x8e] = '\0';
  param_2[0x8f] = '\0';
  param_2[0x90] = '\0';
  param_2[0x91] = '\0';
  param_2[0x92] = '\0';
  param_2[0x93] = '\0';
  param_2[0x94] = '\0';
  param_2[0x95] = '\0';
  param_2[0x96] = '\0';
  param_2[0x97] = '\0';
  param_2[0x98] = '\0';
  param_2[0x99] = '\0';
  param_2[0x9a] = '\0';
  param_2[0x9b] = '\0';
  param_2[0x9c] = '\0';
  param_2[0x9d] = '\0';
  param_2[0x9e] = '\0';
  param_2[0x9f] = '\0';
  param_2[0xa0] = '\0';
  param_2[0xa1] = '\0';
  param_2[0xa2] = '\0';
  param_2[0xa3] = '\0';
  param_2[0xa4] = '\0';
  param_2[0xa5] = '\0';
  param_2[0xa6] = '\0';
  param_2[0xa7] = '\0';
  param_2[0xa8] = '\0';
  param_2[0xa9] = '\0';
  param_2[0xaa] = '\0';
  param_2[0xab] = '\0';
  param_2[0xac] = '\0';
  param_2[0xad] = '\0';
  param_2[0xae] = '\0';
  param_2[0xaf] = '\0';
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,local_f8,param_3,param_4);
      FUN_140439160(param_2,local_f8);
      FUN_140438c20(local_f8);
    }
  }
  if (*param_2 == '\0') {
    uVar2 = FUN_1419872e0(*(undefined8 *)(param_1 + 0x210),local_f8,param_4);
    FUN_140439160(param_2,uVar2);
    FUN_140438c20(local_f8);
  }
  return param_2;
}



// FUNCTION 1419b52f0 FUN_1419b52f0 body=431 status=ok
// SIG undefined FUN_1419b52f0(void)

undefined1 *
FUN_1419b52f0(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  uint uStackX_24;
  
  bVar5 = false;
  if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
    plVar7 = (longlong *)((ulonglong)uStackX_24 << 0x20);
  }
  else {
    plVar7 = *(longlong **)(param_4 + 0x28);
    lVar3 = *(longlong *)(param_4 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    bVar5 = true;
    if (lVar3 == DAT_1469e99b8) {
      bVar4 = true;
      goto LAB_1419b5351;
    }
  }
  bVar4 = false;
LAB_1419b5351:
  if ((bVar5) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (!bVar4) {
    FUN_1417c9760(param_1,param_2,param_3,param_4);
    return param_2;
  }
  FInertialScrollManager::ClearScrollVelocity(param_1 + 0x7c);
  iVar6 = (**(code **)(*param_1 + 0x250))(param_1);
  if ((double)iVar6 != (double)param_1[0x66]) {
    param_1[0x66] = (longlong)(double)iVar6;
    TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 100);
    FUN_1419bb590(param_1);
  }
  FUN_1419bb590(param_1);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b54a0 OnKeyUp body=33 status=ok
// SIG undefined OnKeyUp(void)

undefined8
SMultiLineEditableText::OnKeyUp
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FSlateEditableTextLayout::HandleKeyUp(*(undefined8 *)(param_1 + 0x210),param_2,param_4);
  return param_2;
}



// FUNCTION 1419b54d0 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SMultiLineEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FUN_141988a60(*(undefined8 *)(param_1 + 0x210));
  return param_2;
}



// FUNCTION 1419b54f0 OnMouseButtonDoubleClick body=154 status=ok
// SIG undefined OnMouseButtonDoubleClick(void)

undefined1 * STableViewBase::OnMouseButtonDoubleClick(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_141846080();
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b5590 FUN_1419b5590 body=361 status=ok
// SIG undefined FUN_1419b5590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1419b5590(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_4 + 0x38);
  plVar5 = *(longlong **)(param_4 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar7 = lVar4 == DAT_1469e9868;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)();
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
  if ((((bVar7) && (*(int *)(param_1 + 0x648) != 0)) &&
      (*(longlong **)(param_1 + 0x640) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x640) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x648) == 0) {
      (**(code **)(_DAT_00000000 + 0x38))(0,param_2);
      return param_2;
    }
    (**(code **)(**(longlong **)(param_1 + 0x640) + 0x38))(*(longlong **)(param_1 + 0x640),param_2);
    return param_2;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b5700 FUN_1419b5700 body=191 status=ok
// SIG undefined FUN_1419b5700(void)

undefined8 FUN_1419b5700(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)(param_4 + 0x38);
  plVar5 = *(longlong **)(param_4 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar6 = lVar4 == DAT_1469e9880;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x378) = 0;
  }
  FUN_141988b90(*(undefined8 *)(param_1 + 0x210),param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1419b57c0 FUN_1419b57c0 body=333 status=ok
// SIG undefined FUN_1419b57c0(void)

undefined1 * FUN_1419b57c0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  
  FInertialScrollManager::ClearScrollVelocity(param_1 + 0x3e0);
  lVar4 = *(longlong *)(param_4 + 0x38);
  plVar5 = *(longlong **)(param_4 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == DAT_1469e9880) &&
     (cVar7 = FUN_14198bef0(*(undefined8 *)(param_1 + 0x310)), cVar7 != '\0')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x33c) = 0;
    *param_2 = 1;
  }
  else {
    cVar7 = FUN_141846080(param_1);
    if (cVar7 == '\0') {
      *param_2 = 0;
    }
    else {
      *param_2 = 1;
    }
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b5910 FUN_1419b5910 body=521 status=ok
// SIG undefined FUN_1419b5910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1419b5910(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_148 [32];
  int local_128;
  int local_124;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar4 = *(longlong *)(param_4 + 0x38);
  plVar5 = *(longlong **)(param_4 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar8 = lVar4 == DAT_1469e9880;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (bVar8) {
    fVar9 = (float)FUN_14189c9c0();
    if (((*(float *)(param_1 + 0x378) <= fVar9 && fVar9 != *(float *)(param_1 + 0x378)) ||
        (*(longlong *)(param_1 + 800) == 0)) || (cVar6 = FUN_14198bef0(), cVar6 == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    *(undefined4 *)(param_1 + 0x378) = 0;
    if (bVar8) {
      local_64 = local_64 & 0xffffff00;
      *(undefined1 *)(param_1 + 0x37c) = 0;
      local_110 = 0;
      local_108 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_118[0] = 1;
      local_e8 = 0;
      uStack_e0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_128 = (int)(*(float *)(param_1 + 900) * *(float *)(param_3 + 0x24) +
                        *(float *)(param_1 + 0x380) * *(float *)(param_3 + 0x1c) +
                       *(float *)(param_3 + 0x2c));
      local_68 = 0x20702;
      local_88 = 0;
      uStack_80 = 0;
      local_124 = (int)(*(float *)(param_1 + 0x380) * *(float *)(param_3 + 0x20) +
                        *(float *)(param_1 + 900) * *(float *)(param_3 + 0x28) +
                       *(float *)(param_3 + 0x30));
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uVar7 = FUN_1406a1ac0(local_118);
      uVar7 = FReply::SetMousePos(uVar7,&local_128);
      FUN_140438260(param_2,uVar7);
      FUN_140438c20(local_118);
      return param_2;
    }
  }
  FUN_1419892c0(*(undefined8 *)(param_1 + 0x210),param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1419b5b20 FUN_1419b5b20 body=306 status=ok
// SIG undefined FUN_1419b5b20(void)

undefined1 * FUN_1419b5b20(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)(param_4 + 0x38);
  plVar5 = *(longlong **)(param_4 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == DAT_1469e9880) && (*(longlong *)(param_1 + 0x330) != DAT_1469eb218)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (bVar6) {
    FUN_1419b9380(param_1,param_4);
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b5c60 FUN_1419b5c60 body=782 status=ok
// SIG undefined FUN_1419b5c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419b5c60(longlong *param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_218 [32];
  int local_1f8;
  int local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined8 local_1d4;
  float local_1cc;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
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
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar4 = *(longlong *)(param_4 + 0x38);
  plVar5 = *(longlong **)(param_4 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar8 = lVar4 == DAT_1469e9880;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (bVar8) {
    (**(code **)(*param_1 + 0x238))(param_1,param_4);
    local_114 = local_114 & 0xffffff00;
    local_1c8[0] = 1;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x20702;
    uVar7 = FUN_1406a1ac0(local_1c8);
    FUN_140438260(local_108,uVar7);
    FUN_140438c20(local_1c8);
    *(undefined1 *)(param_1 + 0x81) = 0;
    cVar6 = FUN_141846080(param_1);
    if (cVar6 != '\0') {
      local_1e0 = param_3[3];
      local_1dc = param_3[4];
      local_1cc = param_3[2] * param_3[1];
      local_1d4 = 0;
      local_1d8 = param_3[2] * *param_3;
      FSlateRotatedRect::ToBoundingRect(&local_1e0,&local_1f0);
      fVar9 = *(float *)(param_1 + 0x80) * param_3[8] +
              *(float *)((longlong)param_1 + 0x404) * param_3[10] + param_3[0xc];
      if ((local_1ec <= fVar9) && (local_1ec = fVar9, local_1e4 <= fVar9)) {
        local_1ec = local_1e4;
      }
      fVar9 = param_3[0xb] +
              *(float *)((longlong)param_1 + 0x404) * param_3[9] +
              *(float *)(param_1 + 0x80) * param_3[7];
      local_1f4 = (int)ROUND(local_1ec + local_1ec + 0.5) >> 1;
      if ((local_1f0 <= fVar9) && (local_1f0 = fVar9, local_1e8 <= fVar9)) {
        local_1f0 = local_1e8;
      }
      local_1f8 = (int)ROUND(local_1f0 + local_1f0 + 0.5) >> 1;
      FReply::SetMousePos(local_108,&local_1f8);
    }
    FReply::FReply(param_2,local_108);
    FUN_140438c20(local_108);
  }
  else {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 1419b5f70 FUN_1419b5f70 body=27 status=ok
// SIG undefined FUN_1419b5f70(void)

void FUN_1419b5f70(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(undefined1 *)(param_1 + 0x408) = 0;
  return;
}



// FUNCTION 1419b5f90 OnMouseEnter body=132 status=ok
// SIG undefined OnMouseEnter(void)

void STableViewBase::OnMouseEnter(longlong param_1,float *param_2,longlong param_3)

{
  char cVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(char *)(param_3 + 0x5c) != '\0') && (*(char *)(param_1 + 0x338) == '\0')) {
    local_20 = *param_2 * param_2[7];
    local_18 = param_2[1] * param_2[9];
    local_14 = param_2[1] * param_2[10];
    local_1c = *param_2 * param_2[8];
    local_28 = param_2[0xb];
    local_24 = param_2[0xc];
    cVar1 = FSlateRotatedRect::IsUnderLocation(&local_28,param_3 + 0x20);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x338) = 1;
    }
  }
  return;
}



// FUNCTION 1419b6020 OnMouseLeave body=49 status=ok
// SIG undefined OnMouseLeave(void)

void STableViewBase::OnMouseLeave(longlong param_1)

{
  char cVar1;
  
  SWidget::OnMouseLeave();
  *(undefined1 *)(param_1 + 0x338) = 0;
  cVar1 = FUN_141846080(param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x33c) = 0;
  }
  return;
}



// FUNCTION 1419b6060 FUN_1419b6060 body=819 status=ok
// SIG undefined FUN_1419b6060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1419b6060(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  float local_194;
  undefined4 local_190;
  float local_18c;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [24];
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_128;
  undefined8 local_120;
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
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint local_94;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_188 = DAT_1469e9880;
  local_180 = DAT_1469e9888;
  local_178 = DAT_1469e9890;
  if (DAT_1469e9890 != 0) {
    LOCK();
    *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
    UNLOCK();
  }
  cVar9 = FUN_140472340(param_4,&local_188);
  if (cVar9 != '\0') {
    fVar13 = *(float *)(param_4 + 0x2c) / *(float *)(param_3 + 8);
    *(float *)(param_1 + 0x378) = ABS(fVar13) + *(float *)(param_1 + 0x378);
    fVar11 = (float)FUN_14189c9c0(DAT_1469f4590);
    if (((fVar11 < *(float *)(param_1 + 0x378) || fVar11 == *(float *)(param_1 + 0x378)) &&
        (*(longlong *)(param_1 + 800) != 0)) && (cVar9 = FUN_14198bef0(), cVar9 != '\0')) {
      FSlateEditableTextLayout::GetScrollOffset(*(undefined8 *)(param_1 + 0x210),&local_190);
      local_194 = local_18c - fVar13;
      local_198 = local_190;
      FSlateEditableTextLayout::SetScrollOffset
                (*(undefined8 *)(param_1 + 0x210),local_170,&local_198,param_3);
      if (*(char *)(param_1 + 0x37c) == '\0') {
        fVar11 = *(float *)(param_3 + 0x28);
        fVar13 = *(float *)(param_3 + 0x24);
        fVar1 = *(float *)(param_3 + 0x1c);
        fVar2 = *(float *)(param_3 + 0x20);
        fVar3 = *(float *)(param_4 + 0x18);
        fVar4 = *(float *)(param_4 + 0x1c);
        fVar5 = *(float *)(param_3 + 0x2c);
        fVar6 = *(float *)(param_3 + 0x2c);
        fVar7 = *(float *)(param_3 + 0x30);
        fVar8 = *(float *)(param_3 + 0x30);
        *(undefined1 *)(param_1 + 0x37c) = 1;
        fVar12 = 1.0 / (fVar1 * fVar11 - fVar2 * fVar13);
        *(float *)(param_1 + 900) =
             (fVar4 - fVar7) * fVar1 * fVar12 - (fVar3 - fVar5) * fVar2 * fVar12;
        *(float *)(param_1 + 0x380) =
             (fVar3 - fVar6) * fVar11 * fVar12 - (fVar4 - fVar8) * fVar13 * fVar12;
      }
      if (local_18c != local_194) {
        FSlateEditableTextLayout::GetSize(*(undefined8 *)(param_1 + 0x210),local_168);
        TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x340);
        *(float *)(param_1 + 900) = (local_18c - local_194) + *(float *)(param_1 + 900);
      }
      local_94 = local_94 & 0xffffff00;
      local_148[0] = 1;
      local_140 = 0;
      local_138 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0x20702;
      uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_160);
      uVar10 = FUN_14048f0a0(local_148,uVar10);
      FUN_140438260(param_2,uVar10);
      FUN_140438c20(local_148);
      return param_2;
    }
  }
  FUN_141989cf0(*(undefined8 *)(param_1 + 0x210),param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1419b63a0 FUN_1419b63a0 body=1123 status=ok
// SIG undefined FUN_1419b63a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1419b63a0(longlong *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
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
  longlong lVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_218 [32];
  code *local_1f8;
  undefined4 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [24];
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint local_d4;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1e8 = DAT_1469e9880;
  local_1e0 = DAT_1469e9888;
  local_1d8 = DAT_1469e9890;
  if (DAT_1469e9890 != 0) {
    LOCK();
    *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
    UNLOCK();
  }
  cVar15 = FUN_140472340(param_4,&local_1e8);
  if (cVar15 != '\0') {
    fVar20 = *(float *)(param_4 + 0x2c) / *(float *)(param_3 + 8);
    *(float *)((longlong)param_1 + 0x33c) = ABS(fVar20) + *(float *)((longlong)param_1 + 0x33c);
    fVar18 = (float)FUN_14189c9c0(DAT_1469f4590);
    if ((fVar18 < *(float *)((longlong)param_1 + 0x33c) ||
         fVar18 == *(float *)((longlong)param_1 + 0x33c)) &&
       ((cVar15 = FUN_14198bef0(param_1[0x62]), cVar15 != '\0' || ((char)param_1[0x83] == '\0')))) {
      if ((char)param_1[0x82] == '\0') {
        local_1f8 = FUN_1419bdc00;
        uStack_1f0 = 0;
        *(undefined1 *)(param_1 + 0x82) = 1;
        uVar16 = FUN_1417ddb00(local_1c0,param_1,&local_1f8);
        FUN_141853de0(param_1,local_1d0,0,uVar16);
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1c8 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar2 = (int *)((longlong)local_1c8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_1c8 + 8))(local_1c8,1);
            }
          }
        }
      }
      *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - fVar20;
      fVar18 = (float)(**(code **)(*param_1 + 0x218))(param_1,param_3,-fVar20,(char)param_1[0x83]);
      local_d4 = local_d4 & 0xffffff00;
      local_188[0] = 1;
      local_180 = 0;
      local_178 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0x20702;
      cVar15 = FUN_141846080(param_1);
      if (cVar15 == '\0') {
        uVar16 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_1b0);
        uVar17 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_1a0);
        uVar17 = FUN_140693ff0(local_188,uVar17);
        FUN_14048f0a0(uVar17,uVar16);
        fVar4 = *(float *)(param_3 + 0x1c);
        fVar5 = *(float *)(param_3 + 0x20);
        fVar6 = *(float *)(param_3 + 0x28);
        fVar7 = *(float *)(param_3 + 0x24);
        fVar8 = *(float *)(param_4 + 0x18);
        fVar9 = *(float *)(param_4 + 0x1c);
        fVar10 = *(float *)(param_3 + 0x2c);
        fVar11 = *(float *)(param_3 + 0x2c);
        fVar19 = 1.0 / (fVar4 * fVar6 - fVar5 * fVar7);
        fVar12 = *(float *)(param_3 + 0x30);
        fVar13 = *(float *)(param_3 + 0x30);
        *(undefined1 *)(param_1 + 0x81) = 1;
        *(float *)((longlong)param_1 + 0x404) =
             fVar4 * fVar19 * (fVar9 - fVar13) - fVar5 * fVar19 * (fVar8 - fVar11);
        *(float *)(param_1 + 0x80) =
             fVar6 * fVar19 * (fVar8 - fVar10) - fVar7 * fVar19 * (fVar9 - fVar12);
      }
      if (fVar18 != 0.0) {
        *(float *)((longlong)param_1 + 0x404) = fVar20 + *(float *)((longlong)param_1 + 0x404);
      }
      FReply::FReply(param_2,local_188);
      FUN_140438c20(local_188);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1419b6810 FUN_1419b6810 body=401 status=ok
// SIG undefined FUN_1419b6810(void)

undefined1 * FUN_1419b6810(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_res8;
  float local_resc;
  undefined4 local_38;
  float local_34;
  undefined1 local_30 [40];
  
  if ((*(longlong *)(param_1 + 800) != 0) && (cVar1 = FUN_14198bef0(), cVar1 != '\0')) {
    fVar4 = *(float *)(param_4 + 100);
    fVar3 = (float)FUN_141984530();
    FSlateEditableTextLayout::GetScrollOffset(*(undefined8 *)(param_1 + 0x210),&local_38);
    local_resc = local_34 + -(fVar3 * fVar4);
    local_res8 = local_38;
    FSlateEditableTextLayout::SetScrollOffset
              (*(undefined8 *)(param_1 + 0x210),local_30,&local_res8,param_3);
    if (local_34 != local_resc) {
      lVar2 = FSlateEditableTextLayout::GetSize(*(undefined8 *)(param_1 + 0x210),local_30);
      fVar3 = 0.0;
      fVar4 = *(float *)(lVar2 + 4) - *(float *)(param_3 + 4);
      if (fVar4 != 0.0) {
        fVar3 = local_resc / fVar4;
      }
      TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x340,fVar3);
      FReply::Handled(param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}


