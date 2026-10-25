// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142134380 SetPosition body=102 status=ok
// SIG undefined SetPosition(void)

void UCanvasPanelSlot::SetPosition
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  local_res8 = (undefined4)param_2;
  uStackX_c = (undefined4)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x38) = local_res8;
  *(undefined4 *)(param_1 + 0x3c) = uStackX_c;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = uVar3;
    *(undefined4 *)(lVar1 + 0x28) = uVar4;
    *(undefined4 *)(lVar1 + 0x2c) = uVar5;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x38,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421343f0 SetPositionInViewport body=127 status=ok
// SIG undefined SetPositionInViewport(void)

void UUserWidget::SetPositionInViewport(longlong param_1,undefined8 param_2,char param_3)

{
  float fVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (float)param_2;
  uStack_14 = (float)((ulonglong)param_2 >> 0x20);
  if (param_3 != '\0') {
    fVar1 = (float)FUN_1420ffff0();
    *(float *)(param_1 + 0x1cc) = (1.0 / fVar1) * uStack_14;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(float *)(param_1 + 0x1c8) = (1.0 / fVar1) * local_18;
    return;
  }
  *(float *)(param_1 + 0x1c8) = local_18;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(float *)(param_1 + 0x1cc) = uStack_14;
  return;
}



// FUNCTION 142134470 SetPressMethod body=27 status=ok
// SIG undefined SetPressMethod(void)

void UButton::SetPressMethod(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3ba) = param_2;
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_141959630(*(longlong *)(param_1 + 0x410),param_2);
    return;
  }
  return;
}



// FUNCTION 142134490 FUN_142134490 body=25 status=ok
// SIG undefined FUN_142134490(void)

void FUN_142134490(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x108) = param_2;
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 0x280) = param_2;
  return;
}



// FUNCTION 1421344b0 SetRenderAngle body=13 status=ok
// SIG undefined SetRenderAngle(void)

void UWidget::SetRenderAngle(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  FUN_142143560();
  return;
}



// FUNCTION 1421344c0 FUN_1421344c0 body=148 status=ok
// SIG undefined FUN_1421344c0(void)

void FUN_1421344c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *local_20;
  
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  FUN_1420f9830(param_1,&local_28);
  if (local_28 != 0) {
    *(undefined4 *)(local_28 + 200) = param_2;
    FUN_1418475e0(local_28,1);
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
      piVar2 = (int *)((longlong)plVar5 + 0xc);
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



// FUNCTION 142134560 SetRenderScale body=12 status=ok
// SIG undefined SetRenderScale(void)

void UWidget::SetRenderScale(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  FUN_142143560();
  return;
}



// FUNCTION 142134570 SetRenderShear body=12 status=ok
// SIG undefined SetRenderShear(void)

void UWidget::SetRenderShear(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  FUN_142143560();
  return;
}



// FUNCTION 142134580 SetRenderTransform body=37 status=ok
// SIG undefined SetRenderTransform(void)

void UWidget::SetRenderTransform(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar2 = param_2[6];
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x90) = *param_2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  FUN_142143560();
  return;
}



// FUNCTION 1421345b0 FUN_1421345b0 body=199 status=ok
// SIG undefined FUN_1421345b0(void)

void FUN_1421345b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  *(undefined8 *)(param_1 + 0xac) = param_2;
  FUN_1420f9830(param_1,&local_48);
  if (local_48 != 0) {
    *(undefined8 *)(local_48 + 0x100) = param_2;
    *(undefined1 *)(local_48 + 0x108) = 1;
    local_28 = 0;
    local_20 = 0;
    local_30 = 1;
    local_38 = param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(local_48 + 0x110,&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
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
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 142134680 SetRenderTranslation body=12 status=ok
// SIG undefined SetRenderTranslation(void)

void UWidget::SetRenderTranslation(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  FUN_142143560();
  return;
}



// FUNCTION 142134690 FUN_142134690 body=39 status=ok
// SIG undefined FUN_142134690(void)

void FUN_142134690(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(undefined4 *)(param_1 + 0x120) = param_3;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x3fc) = param_2;
    *(undefined4 *)(lVar1 + 0x400) = param_3;
  }
  return;
}



// FUNCTION 1421346c0 SetResourceObject body=149 status=ok
// SIG undefined SetResourceObject(void)

void FSlateBrush::SetResourceObject(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x48) != param_2) {
    *(longlong *)(param_1 + 0x48) = param_2;
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x70) != &local_18) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_10);
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
    }
  }
  return;
}



// FUNCTION 142134760 FUN_142134760 body=7 status=ok
// SIG undefined FUN_142134760(void)

void FUN_142134760(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3f8) = param_2;
  return;
}



// FUNCTION 142134770 FUN_142134770 body=210 status=ok
// SIG undefined FUN_142134770(void)

void FUN_142134770(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  *(int *)(param_1 + 0x4c) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    plVar6 = (longlong *)0x0;
    if (param_2 < 1) {
      param_2 = 0;
    }
    *(int *)(lVar2 + 0x68) = param_2;
    if ((*(longlong *)(lVar2 + 0x50) != 0) && (*(longlong *)(lVar2 + 0x58) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x58) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        plVar3 = *(longlong **)(lVar2 + 0x58);
        plVar5 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar5 = plVar6, !bVar7) {
            LOCK();
            bVar7 = iVar4 == (int)plVar3[1];
            if (bVar7) {
              *(int *)(plVar3 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar7) {
              plVar5 = plVar3;
              if (plVar3 != (longlong *)0x0) {
                plVar6 = *(longlong **)(lVar2 + 0x50);
              }
              break;
            }
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar7 = iVar4 == 0;
            if (bVar7) {
              *(int *)(plVar3 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        SGridPanel::NotifySlotChanged(plVar6);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
  }
  return;
}



// FUNCTION 142134850 SetRow body=16 status=ok
// SIG undefined SetRow(void)

void UUniformGridSlot::SetRow(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x2c) = param_2;
  }
  return;
}



// FUNCTION 142134860 SetRowFill body=220 status=ok
// SIG undefined SetRowFill(void)

void UGridPanel::SetRowFill(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 0x130);
  while (iVar1 <= param_2) {
    iVar1 = *(int *)(param_1 + 0x130);
    *(int *)(param_1 + 0x130) = iVar1 + 1;
    if (*(int *)(param_1 + 0x134) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x128,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar1 * 4) = 0;
    iVar1 = *(int *)(param_1 + 0x130);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x128) + (longlong)param_2 * 4) = param_3;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_34 = 1;
    local_30 = 0;
    local_28 = 0;
    local_38 = param_3;
    SGridPanel::SetRowFill(*(longlong *)(param_1 + 0x138),param_2,&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  }
  return;
}



// FUNCTION 142134940 FUN_142134940 body=17 status=ok
// SIG undefined FUN_142134940(void)

longlong FUN_142134940(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong in_RAX;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *(int *)(param_1 + 0x50) = param_2;
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 == 0) {
    return in_RAX;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(lVar3 + 0x6c) = param_2;
  if ((*(longlong *)(lVar3 + 0x50) != 0) && (*(longlong *)(lVar3 + 0x58) != 0)) {
    plVar7 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x58) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(lVar3 + 0x58);
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
              plVar7 = *(longlong **)(lVar3 + 0x50);
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
      SGridPanel::NotifySlotChanged(plVar7,lVar3);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
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
        return lVar3;
      }
      return lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 142134960 setPxD6JointDriveForceLimit body=6 status=ok
// SIG undefined setPxD6JointDriveForceLimit(void)

void setPxD6JointDriveForceLimit(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 142134970 SetScrollBarVisibility body=183 status=ok
// SIG undefined SetScrollBarVisibility(void)

void UScrollBox::SetScrollBarVisibility(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  *(char *)(param_1 + 0x821) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x850);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      local_res10[0] = DAT_1464b9ee8;
      FUN_1419a39c0(lVar1,local_res10);
    }
    else {
      if (param_2 == '\x01') {
        local_res10[0] = DAT_1464b9ee9;
        FUN_1419a39c0(lVar1,local_res10);
        return;
      }
      if (param_2 == '\x02') {
        local_res10[0] = DAT_1464b9eea;
        FUN_1419a39c0(lVar1,local_res10);
        return;
      }
      if (param_2 == '\x03') {
        local_res10[0] = DAT_1464b9eeb;
        FUN_1419a39c0(lVar1,local_res10);
        return;
      }
      if (param_2 == '\x04') {
        local_res10[0] = DAT_1464b9eec;
        FUN_1419a39c0(lVar1,local_res10);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142134a30 FUN_142134a30 body=25 status=ok
// SIG undefined FUN_142134a30(void)

void FUN_142134a30(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x848) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x850);
  if (lVar1 == 0) {
    return;
  }
  *(byte *)(lVar1 + 0x438) = *(byte *)(lVar1 + 0x438) & 0xef;
  *(undefined4 *)(lVar1 + 0x2f0) = param_2;
  return;
}



// FUNCTION 142134a50 SetScrollbarThickness body=56 status=ok
// SIG undefined SetScrollbarThickness(void)

void UScrollBox::SetScrollbarThickness(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(int *)(param_1 + 0x824) = (int)uVar1;
  *(int *)(param_1 + 0x828) = (int)((ulonglong)uVar1 >> 0x20);
  if (*(longlong *)(param_1 + 0x850) != 0) {
    SScrollBox::SetScrollBarThickness(*(longlong *)(param_1 + 0x850),uVar1);
    return;
  }
  return;
}



// FUNCTION 142134a90 FUN_142134a90 body=38 status=ok
// SIG undefined FUN_142134a90(void)

void FUN_142134a90(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x2b0))) {
    FUN_142134b90(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + (longlong)param_2 * 8));
    return;
  }
  FUN_142134b90(param_1,0);
  return;
}



// FUNCTION 142134ac0 FUN_142134ac0 body=193 status=ok
// SIG undefined FUN_142134ac0(void)

void FUN_142134ac0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x3a8);
  if (param_2 == 0) {
    FUN_1420e7ad0(lVar1);
  }
  else {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (lVar1 + 0x558,0);
    if ((*(int *)(lVar1 + 0x3c8) != 0) && (*(longlong **)(lVar1 + 0x3c0) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x3c0) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(lVar1 + 0x3c8) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar1 + 0x3c0);
        }
        uVar3 = (**(code **)(*plVar4 + 0x38))();
        *(undefined4 *)(lVar1 + 0x3b8) = uVar3;
      }
    }
    if (*(int *)(lVar1 + 0x3b8) != 0) {
      (**(code **)(*(longlong *)(lVar1 + 0x430) + 0x18))(lVar1 + 0x430,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000142134b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x430) + 0x30))(lVar1 + 0x430,3);
      return;
    }
  }
  return;
}



// FUNCTION 142134b90 FUN_142134b90 body=183 status=ok
// SIG undefined FUN_142134b90(void)

void FUN_142134b90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x30))();
  if (lVar3 != 0) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (lVar3 + 0x558,0);
    if ((*(int *)(lVar3 + 0x3c8) != 0) && (*(longlong **)(lVar3 + 0x3c0) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(lVar3 + 0x3c0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(lVar3 + 0x3c8) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar3 + 0x3c0);
        }
        uVar2 = (**(code **)(*plVar4 + 0x38))();
        *(undefined4 *)(lVar3 + 0x3b8) = uVar2;
      }
    }
    if (*(int *)(lVar3 + 0x3b8) != 0) {
      (**(code **)(*(longlong *)(lVar3 + 0x430) + 0x18))(lVar3 + 0x430,param_2,1,0);
      (**(code **)(*(longlong *)(lVar3 + 0x430) + 0x30))(lVar3 + 0x430,3);
    }
  }
  return;
}



// FUNCTION 142134c50 FUN_142134c50 body=141 status=ok
// SIG undefined FUN_142134c50(void)

void FUN_142134c50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 local_48 [64];
  
  lVar1 = *(longlong *)(param_1 + 0x650);
  if (lVar1 != 0) {
    uVar2 = FUN_1420c17b0(local_48);
    FUN_141959880(lVar1,uVar2);
  }
  FKey::operator=(param_1 + 0x558,param_2);
  *(uint *)(param_1 + 0x570) =
       *(uint *)(param_1 + 0x570) ^ (*(uint *)(param_1 + 0x570) ^ *(uint *)(param_2 + 0x18)) & 1;
  uVar3 = (*(uint *)(param_2 + 0x18) ^ *(uint *)(param_1 + 0x570)) & 2 ^ *(uint *)(param_1 + 0x570);
  *(uint *)(param_1 + 0x570) = uVar3;
  uVar3 = (*(uint *)(param_2 + 0x18) ^ uVar3) & 4 ^ uVar3;
  *(uint *)(param_1 + 0x570) = uVar3;
  *(uint *)(param_1 + 0x570) = (*(uint *)(param_2 + 0x18) ^ uVar3) & 8 ^ uVar3;
  return;
}



// FUNCTION 142134ce0 FUN_142134ce0 body=491 status=ok
// SIG undefined FUN_142134ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142134ce0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar5 = UComboBoxString::FindOptionIndex();
  if (iVar5 != -1) {
    plVar7 = (longlong *)((longlong)iVar5 * 0x10 + param_1[399]);
    plVar2 = param_1 + 0x195;
    plVar3 = (longlong *)plVar7[1];
    lVar4 = *plVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_78 = lVar4;
    plStack_70 = plVar3;
    if (&local_78 != plVar2) {
      local_78 = *plVar2;
      plStack_70 = (longlong *)param_1[0x196];
      *plVar2 = lVar4;
      param_1[0x196] = (longlong)plVar3;
      local_38 = lVar4;
      plStack_30 = plVar3;
    }
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_70 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    FString::operator=(param_1 + 0x22,param_2);
    if (param_1[0x193] != 0) {
      local_68 = *plVar2;
      local_60 = param_1[0x196];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_1419a3c30(param_1[0x191],&local_68);
      local_58 = *plVar2;
      local_50 = param_1[0x196];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      lVar4 = param_1[0x193];
      uVar6 = (**(code **)(*param_1 + 0x2d0))(param_1,local_48,&local_58);
      SBox::SetContent(lVar4,uVar6);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142134ed0 FUN_142134ed0 body=623 status=ok
// SIG undefined FUN_142134ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142134ed0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void **ppvVar4;
  int iVar5;
  undefined8 *puVar6;
  void *_Src;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *pvVar12;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  if (-1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    lVar11 = (longlong)param_2;
    if (param_2 < (int)param_1[400]) {
      plVar3 = param_1 + 0x195;
      uStack_90 = *(longlong **)(param_1[399] + 8 + lVar11 * 0x10);
      local_98 = *(longlong *)(param_1[399] + lVar11 * 0x10);
      if (uStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
        UNLOCK();
      }
      if (&local_98 != plVar3) {
        local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
        uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
        lVar8 = *plVar3;
        plVar7 = (longlong *)param_1[0x196];
        local_58 = (undefined4)local_98;
        uStack_54 = local_98._4_4_;
        uStack_50 = (undefined4)uStack_90;
        uStack_4c = uStack_90._4_4_;
        *(undefined4 *)plVar3 = (undefined4)local_98;
        *(undefined4 *)((longlong)param_1 + 0xcac) = local_98._4_4_;
        *(undefined4 *)(param_1 + 0x196) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)param_1 + 0xcb4) = uStack_90._4_4_;
        local_98 = lVar8;
        uStack_90 = plVar7;
      }
      plVar7 = uStack_90;
      if (uStack_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_90 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*uStack_90)(uStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*uStack_90 + 8))(uStack_90,1);
          }
        }
      }
      pvVar12 = (void *)0x0;
      local_a8 = (void *)0x0;
      if (param_2 < (int)param_1[400]) {
        puVar6 = *(undefined8 **)(param_1[399] + lVar11 * 0x10);
        local_a0 = *(int *)(puVar6 + 1);
        lVar11 = (longlong)local_a0;
        _Src = (void *)*puVar6;
        if (local_a0 == 0) {
          uStack_9c = 0;
          pvVar12 = (void *)0x0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
          pvVar12 = local_a8;
          _guard_xfg_dispatch_icall_nop(local_a8,_Src,lVar11 * 2);
        }
      }
      else {
        local_a0 = 0;
        uStack_9c = 0;
      }
      uVar9 = uStack_9c;
      iVar5 = local_a0;
      ppvVar4 = (void **)(param_1 + 0x22);
      if (ppvVar4 == &local_a8) {
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
      }
      else {
        if (*ppvVar4 != (void *)0x0) {
          FMemory::Free();
        }
        *ppvVar4 = pvVar12;
        *(int *)(param_1 + 0x23) = iVar5;
        *(undefined4 *)((longlong)param_1 + 0x11c) = uVar9;
      }
      if (param_1[0x193] != 0) {
        local_88 = *plVar3;
        local_80 = param_1[0x196];
        if (local_80 != 0) {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        FUN_1419a3c30(param_1[0x191],&local_88);
        local_78 = *plVar3;
        local_70 = param_1[0x196];
        if (local_70 != 0) {
          LOCK();
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
          UNLOCK();
        }
        lVar11 = param_1[0x193];
        uVar10 = (**(code **)(*param_1 + 0x2d0))(param_1,local_68,&local_78);
        SBox::SetContent(lVar11,uVar10);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142135140 FUN_142135140 body=65 status=ok
// SIG undefined FUN_142135140(void)

void FUN_142135140(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
            (param_1 + 0x558,0);
  FUN_1421327b0(param_1,local_res10,1,param_3);
  return;
}



// FUNCTION 142135190 FUN_142135190 body=167 status=ok
// SIG undefined FUN_142135190(void)

void FUN_142135190(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong local_18;
  undefined8 local_10;
  
  if (*param_2 != *(char *)(param_1 + 0x2a0)) {
    *(char *)(param_1 + 0x2a0) = *param_2;
    if (*param_2 == '\0') {
      lVar1 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x30))();
      if (lVar1 != 0) {
        FUN_1420e7ad0(lVar1);
        return;
      }
    }
    else if ((byte)(*param_2 - 1U) < 2) {
      local_18 = 0;
      local_10 = 0;
      FUN_1420fe240(param_1 + 0x208,&local_18);
      lVar1 = local_18;
      if ((0 < (int)local_10) && (*(longlong *)(local_18 + (longlong)((int)local_10 + -1) * 8) != 0)
         ) {
        FUN_142134b90(param_1);
      }
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142135240 FUN_142135240 body=72 status=ok
// SIG undefined FUN_142135240(void)

void FUN_142135240(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x1d8) = local_38;
  *(undefined4 *)(param_1 + 0x1dc) = uStack_34;
  *(undefined4 *)(param_1 + 0x1e0) = uStack_30;
  *(undefined4 *)(param_1 + 0x1e4) = uStack_2c;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    FUN_1419bc9e0(*(longlong *)(param_1 + 0x200),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142135290 FUN_142135290 body=102 status=ok
// SIG undefined FUN_142135290(void)

void FUN_142135290(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res8 = (undefined4)param_2;
  uStackX_c = (undefined4)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x1d0) = local_res8;
  *(undefined4 *)(param_1 + 0x1d4) = uStackX_c;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    local_28 = local_res8;
    local_18 = 0;
    local_10 = 0;
    local_24 = uStackX_c;
    local_20 = 1;
    FUN_1419bcaf0(*(longlong *)(param_1 + 0x200),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  return;
}



// FUNCTION 142135300 SetSidesToPad body=65 status=ok
// SIG undefined SetSidesToPad(void)

void USafeZone::SetSidesToPad
               (longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x118) = param_2;
  *(undefined1 *)(param_1 + 0x119) = param_3;
  *(undefined1 *)(param_1 + 0x11a) = param_4;
  *(undefined1 *)(param_1 + 0x11b) = param_5;
  if ((*(longlong *)(param_1 + 0x120) != 0) && (0 < *(int *)(param_1 + 0x108))) {
    FUN_1419a3f10(*(longlong *)(param_1 + 0x120));
    return;
  }
  return;
}



// FUNCTION 142135350 SetSize body=102 status=ok
// SIG undefined SetSize(void)

void UCanvasPanelSlot::SetSize
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  local_res8 = (undefined4)param_2;
  uStackX_c = (undefined4)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x40) = local_res8;
  *(undefined4 *)(param_1 + 0x44) = uStackX_c;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = uVar3;
    *(undefined4 *)(lVar1 + 0x28) = uVar4;
    *(undefined4 *)(lVar1 + 0x2c) = uVar5;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x38,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421353c0 SetSize body=92 status=ok
// SIG undefined SetSize(void)

void UHorizontalBoxSlot::SetSize(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 1);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    puVar2 = (undefined4 *)UWidget::ConvertSerializedSizeParamToRuntime(local_28);
    lVar1 = *(longlong *)(param_1 + 0x58);
    *(undefined4 *)(lVar1 + 0x28) = *puVar2;
    *(undefined4 *)(lVar1 + 0x30) = puVar2[2];
    *(undefined1 *)(lVar1 + 0x34) = *(undefined1 *)(puVar2 + 3);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x38,puVar2 + 4);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_18);
  }
  return;
}



// FUNCTION 142135420 FUN_142135420 body=90 status=ok
// SIG undefined FUN_142135420(void)

void FUN_142135420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x100) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x108);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x208) = param_2;
    *(undefined1 *)(lVar1 + 0x210) = 1;
    local_18 = 0;
    local_10 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x218,&local_18,param_3,param_4,param_2,1)
    ;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  return;
}



// FUNCTION 142135480 FUN_142135480 body=371 status=ok
// SIG undefined FUN_142135480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142135480(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_1[0xf3] != 0) {
    (**(code **)(*param_1 + 0x950))(param_1,0);
  }
  plVar3 = param_1 + 0xf4;
  if (*plVar3 != 0) {
    FUN_14212cbc0();
    local_40 = (longlong *)0x0;
    if (plVar3 != &local_48) {
      *plVar3 = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf5,&local_40);
      plVar5 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  lVar6 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_58 = lVar6;
  plStack_50 = plVar5;
  if (&local_58 != plVar3) {
    local_58 = *plVar3;
    plStack_50 = (longlong *)param_1[0xf5];
    *plVar3 = lVar6;
    param_1[0xf5] = (longlong)plVar5;
    local_38 = lVar6;
    plStack_30 = plVar5;
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x938))(param_1);
  return;
}



// FUNCTION 142135600 SetSliderBarColor body=60 status=ok
// SIG undefined SetSliderBarColor(void)

void USlider::SetSliderBarColor(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x34c) = local_38;
  *(undefined4 *)(param_1 + 0x350) = uStack_34;
  *(undefined4 *)(param_1 + 0x354) = uStack_30;
  *(undefined4 *)(param_1 + 0x358) = uStack_2c;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_141959c80(*(longlong *)(param_1 + 0x3c8),&local_38);
  }
  return;
}



// FUNCTION 142135640 SetSliderHandleColor body=60 status=ok
// SIG undefined SetSliderHandleColor(void)

void USlider::SetSliderHandleColor(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x35c) = local_38;
  *(undefined4 *)(param_1 + 0x360) = uStack_34;
  *(undefined4 *)(param_1 + 0x364) = uStack_30;
  *(undefined4 *)(param_1 + 0x368) = uStack_2c;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_141959d90(*(longlong *)(param_1 + 0x3c8),&local_38);
  }
  return;
}



// FUNCTION 142135680 SetSlotPadding body=62 status=ok
// SIG undefined SetSlotPadding(void)

void UUniformGridPanel::SetSlotPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x118) = local_38;
  *(undefined4 *)(param_1 + 0x11c) = uStack_34;
  *(undefined4 *)(param_1 + 0x120) = uStack_30;
  *(undefined4 *)(param_1 + 0x124) = uStack_2c;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SUniformGridPanel::SetSlotPadding(*(longlong *)(param_1 + 0x130),&local_38);
  }
  return;
}



// FUNCTION 1421356c0 FUN_1421356c0 body=17 status=ok
// SIG undefined FUN_1421356c0(void)

void FUN_1421356c0(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x5e8);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3c8);
  if ((param_2 != *(float *)(lVar1 + 0x230)) || (param_3 != *(float *)(lVar1 + 0x234))) {
    *(float *)(lVar1 + 0x230) = param_2;
    *(float *)(lVar1 + 0x234) = param_3;
    uVar3 = (**(code **)(*DAT_1469f4590 + 0x40))();
    *(undefined8 *)(lVar2 + 0x3f8) = uVar3;
  }
  return;
}



// FUNCTION 1421356e0 FUN_1421356e0 body=71 status=ok
// SIG undefined FUN_1421356e0(void)

void FUN_1421356e0(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x370) = param_2;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    SSlider::SetStepSize(*(longlong *)(param_1 + 0x3c8),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142135730 FUN_142135730 body=23 status=ok
// SIG undefined FUN_142135730(void)

void FUN_142135730(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  *(char *)(param_1 + 0x118) = (char)param_2;
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 == 0) {
    return;
  }
  uStack_20 = 0;
  uStack_18 = 0;
  if ((*(int *)(lVar1 + 0x318) == 0) || (*(longlong **)(lVar1 + 0x310) == (longlong *)0x0)) {
LAB_1419a401c:
    if ((*(char *)(lVar1 + 0x30c) == '\x01') && (*(int *)(lVar1 + 0x308) == param_2)) {
      bVar2 = true;
      goto LAB_1419a4035;
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x310) + 0x18))();
    if (cVar3 == '\0') goto LAB_1419a401c;
  }
  bVar2 = false;
LAB_1419a4035:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_20);
  if (!bVar2) {
    uStack_20 = 0;
    uStack_18 = 0;
    *(int *)(lVar1 + 0x308) = param_2;
    *(undefined1 *)(lVar1 + 0x30c) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x310,&uStack_20,param_3,param_4,param_2);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_20);
    FUN_14199e4f0(lVar1);
    FUN_1418475e0(lVar1,1);
  }
  return;
}



// FUNCTION 142135750 FUN_142135750 body=23 status=ok
// SIG undefined FUN_142135750(void)

void FUN_142135750(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  *(char *)(param_1 + 0x119) = (char)param_2;
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 == 0) {
    return;
  }
  uStack_20 = 0;
  uStack_18 = 0;
  if ((*(int *)(lVar1 + 0x300) == 0) || (*(longlong **)(lVar1 + 0x2f8) == (longlong *)0x0)) {
LAB_1419a40fc:
    if ((*(char *)(lVar1 + 0x2f4) == '\x01') && (*(int *)(lVar1 + 0x2f0) == param_2)) {
      bVar2 = true;
      goto LAB_1419a4115;
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x2f8) + 0x18))();
    if (cVar3 == '\0') goto LAB_1419a40fc;
  }
  bVar2 = false;
LAB_1419a4115:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_20);
  if (!bVar2) {
    uStack_20 = 0;
    uStack_18 = 0;
    *(int *)(lVar1 + 0x2f0) = param_2;
    *(undefined1 *)(lVar1 + 0x2f4) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x2f8,&uStack_20,param_3,param_4,param_2);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_20);
    FUN_1418475e0(lVar1,1);
  }
  return;
}



// FUNCTION 142135770 SetStyle body=60 status=ok
// SIG undefined SetStyle(void)

void UButton::SetStyle(longlong param_1)

{
  FButtonStyle::operator=(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x410) != 0) {
    SButton::SetButtonStyle(*(longlong *)(param_1 + 0x410),param_1 + 0x120);
  }
  return;
}



// FUNCTION 1421357b0 FUN_1421357b0 body=238 status=ok
// SIG undefined FUN_1421357b0(void)

void FUN_1421357b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FText::operator=(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x438) != 0) {
    FText::FText(local_38,param_1 + 0x100);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_14195a190(*(undefined8 *)(param_1 + 0x438),local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 1421358a0 FUN_1421358a0 body=238 status=ok
// SIG undefined FUN_1421358a0(void)

void FUN_1421358a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FText::operator=(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    FText::FText(local_38,param_1 + 0x100);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_14195a1a0(*(undefined8 *)(param_1 + 0xa10),local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 142135990 FUN_142135990 body=238 status=ok
// SIG undefined FUN_142135990(void)

void FUN_142135990(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FText::operator=(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FText::FText(local_38,param_1 + 0x120);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_1419bcc10(*(undefined8 *)(param_1 + 0x3c0),local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 142135a80 FUN_142135a80 body=238 status=ok
// SIG undefined FUN_142135a80(void)

void FUN_142135a80(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FText::operator=(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    FText::FText(local_38,param_1 + 0x120);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_14195a1c0(*(undefined8 *)(param_1 + 0xbe0),local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 142135b70 FUN_142135b70 body=161 status=ok
// SIG undefined FUN_142135b70(void)

void FUN_142135b70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FText::operator=(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FText::FText(local_38,param_2);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    SRichTextBlock::SetText(*(undefined8 *)(param_1 + 0x350),local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
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
  }
  return;
}



// FUNCTION 142135c20 FUN_142135c20 body=247 status=ok
// SIG undefined FUN_142135c20(void)

void FUN_142135c20(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_18 [16];
  
  FText::operator=(param_1 + 0x24);
  FWeakObjectPtr::operator=(param_1 + 0x27,0);
  param_1[0x28] = 0;
  if (param_1[0x40] != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1,local_38);
    FUN_1419bcc80(param_1[0x40],local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 142135d20 SetTextBlockVisibility body=196 status=ok
// SIG undefined SetTextBlockVisibility(void)

void UInputKeySelector::SetTextBlockVisibility(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x650);
  if (lVar1 != 0) {
    if (param_2 != '\0') {
      if (param_2 == '\x01') {
        local_res8[0] = DAT_1464b9ee9;
        SInputKeySelector::SetTextBlockVisibility(lVar1,local_res8);
        return;
      }
      if (param_2 == '\x02') {
        local_res8[0] = DAT_1464b9eea;
        SInputKeySelector::SetTextBlockVisibility(lVar1,local_res8);
        return;
      }
      if (param_2 == '\x03') {
        local_res8[0] = DAT_1464b9eeb;
        SInputKeySelector::SetTextBlockVisibility(lVar1,local_res8);
        return;
      }
      if (param_2 == '\x04') {
        local_res8[0] = DAT_1464b9eec;
        SInputKeySelector::SetTextBlockVisibility(lVar1,local_res8);
        return;
      }
    }
    local_res8[0] = DAT_1464b9ee8;
    SInputKeySelector::SetTextBlockVisibility(lVar1,local_res8);
  }
  return;
}



// FUNCTION 142135df0 FUN_142135df0 body=27 status=ok
// SIG undefined FUN_142135df0(void)

void FUN_142135df0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x130) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x4c0) = param_2;
  }
  return;
}



// FUNCTION 142135e10 FUN_142135e10 body=547 status=ok
// SIG undefined FUN_142135e10(void)

void FUN_142135e10(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_res8;
  undefined8 local_res10;
  float fStackX_1c;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  *(undefined8 *)(param_1 + 0x6ac) = param_2;
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x388);
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
    local_res10._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x6ac) >> 0x20);
    local_res10._4_4_ = local_res10._4_4_ + 0.0;
    uVar2 = ((int)ROUND((local_res10._4_4_ + local_res10._4_4_) - 0.5) >> 1) +
            (int)*(undefined8 *)(param_1 + 0x6ac) + *(int *)(param_1 + 0x6a8);
    iVar6 = (int)local_res10._4_4_;
    fVar7 = local_res10._4_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != local_res10._4_4_)) {
      auVar8._4_4_ = local_res10._4_4_;
      auVar8._0_4_ = local_res10._4_4_;
      auVar8._8_8_ = 0;
      uVar3 = movmskps(uVar2,auVar8);
      fVar7 = (float)(int)(iVar6 - (uVar3 & 1));
    }
    local_res10._4_4_ = local_res10._4_4_ - fVar7;
    if (0.0 <= local_res10._4_4_) {
      if (0.99999994 <= local_res10._4_4_) {
        local_res10._4_4_ = 0.99999994;
      }
      local_res8 = CONCAT44(local_res10._4_4_,uVar2);
    }
    else {
      local_res8 = (ulonglong)uVar2;
    }
    fStackX_1c = (float)((ulonglong)param_2 >> 0x20);
    fStackX_1c = fStackX_1c + 0.0;
    uVar2 = ((int)ROUND((fStackX_1c + fStackX_1c) - 0.5) >> 1) + (int)param_2 +
            *(int *)(param_1 + 0x6a8);
    iVar6 = (int)fStackX_1c;
    fVar7 = fStackX_1c;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fStackX_1c)) {
      auVar9._4_4_ = fStackX_1c;
      auVar9._0_4_ = fStackX_1c;
      auVar9._8_8_ = 0;
      uVar3 = movmskps(uVar2,auVar9);
      fVar7 = (float)(int)(iVar6 - (uVar3 & 1));
    }
    fStackX_1c = fStackX_1c - fVar7;
    if (0.0 <= fStackX_1c) {
      if (0.99999994 <= fStackX_1c) {
        fStackX_1c = 0.99999994;
      }
      local_res10 = CONCAT44(fStackX_1c,uVar2);
    }
    else {
      local_res10 = (ulonglong)uVar2;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x6c0);
    puVar5 = (undefined1 *)
             FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                       (local_b8,local_res10,local_res8,*(undefined8 *)(param_1 + 0x6a0),0);
    local_3c = 0;
    uStack_38 = 0;
    local_ac = puVar5[0xc];
    local_90 = 0x3f800000;
    local_a8 = *(undefined8 *)(puVar5 + 0x10);
    local_a0 = *(undefined8 *)(puVar5 + 0x18);
    local_98 = *(undefined4 *)(puVar5 + 0x20);
    local_b8[0] = *puVar5;
    local_b4 = *(undefined8 *)(puVar5 + 4);
    local_94 = *(undefined4 *)(puVar5 + 0x24);
    local_78 = local_78 & 0xc0;
    local_88 = 0;
    local_80 = 0x80000000;
    local_7c = 0;
    local_84 = uVar1;
    FUN_141f4a590(param_1 + 0x388,local_b8,param_1 + 0x28,DAT_146ae7800);
  }
  return;
}



// FUNCTION 142136040 FUN_142136040 body=71 status=ok
// SIG undefined FUN_142136040(void)

void FUN_142136040(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*(float *)(param_1 + 0x780) == *param_2) && (*(float *)(param_1 + 0x784) == param_2[1])) &&
      (*(float *)(param_1 + 0x788) == param_2[2])) && (*(float *)(param_1 + 0x78c) == param_2[3])) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x780) = *param_2;
  *(float *)(param_1 + 0x784) = fVar1;
  *(float *)(param_1 + 0x788) = fVar2;
  *(float *)(param_1 + 0x78c) = fVar3;
  FUN_142142c60();
  return;
}



// FUNCTION 142136090 FUN_142136090 body=1004 status=ok
// SIG undefined FUN_142136090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142136090(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_3e8 [32];
  longlong local_3c8;
  longlong local_3c0;
  undefined4 local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined1 local_398;
  undefined1 local_390;
  longlong local_388;
  undefined1 local_378 [8];
  longlong local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  code *local_348;
  undefined1 *puStack_340;
  undefined8 local_338;
  longlong *plStack_330;
  undefined8 local_328;
  undefined1 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  longlong *local_2b8;
  longlong *local_2b0;
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN_1420f9830(param_1,&local_370);
  uStack_2d0 = (undefined1 *)CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0);
  if (local_370 == 0) goto LAB_14213641e;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_338 = 0;
    plStack_330 = (longlong *)0x0;
    FMediaModule::SetTimeSource(local_370,&local_338);
    plVar8 = plStack_330;
    uStack_2d0 = (undefined1 *)CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0);
    if (plStack_330 == (longlong *)0x0) goto LAB_14213641e;
    LOCK();
    plVar1 = plStack_330 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uStack_2d0 = (undefined1 *)CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0);
    if ((int)lVar7 != 1) goto LAB_14213641e;
    (**(code **)*plStack_330)(plStack_330);
    LOCK();
    piVar3 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 != 1) goto LAB_14213641e;
    lVar7 = *plVar8;
  }
  else {
    puStack_340 = local_378;
    local_348 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_2d8 = 0x420e6680;
    uStack_2d4 = 1;
    local_328 = 0;
    local_320 = 1;
    local_318 = 0;
    local_310 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2f8 = 1;
    local_2f0 = 0;
    local_2e8 = 0;
    local_378[0] = 0;
    uStack_2d0 = puStack_340;
    FUN_14213eb80(*(longlong *)(param_1 + 0x68),local_2c8,&local_2d8);
    lVar7 = FUN_1418875b0(local_298);
    *(undefined1 *)(lVar7 + 0x200) = 1;
    *(undefined8 *)(lVar7 + 0x1f0) = 0;
    *(undefined8 *)(lVar7 + 0x1f8) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x208,&local_2f0);
    *(undefined8 *)(lVar7 + 0x218) = 0;
    *(undefined1 *)(lVar7 + 0x220) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x228,&local_318);
    plVar8 = (longlong *)FUN_141881010();
    plVar1 = plVar8 + 2;
    local_2b8 = plVar1;
    local_2b0 = plVar8;
    FUN_14044f790(&local_2b8,plVar1);
    local_3c8 = 0x450;
    SWidget::SetDebugInfo
              (plVar1,"SToolTip",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp",0x178)
    ;
    lVar7 = FUN_140692660(lVar7,local_2c8);
    local_3b8 = *(undefined4 *)(lVar7 + 0x90);
    local_388 = lVar7 + 0xf8;
    local_3a0 = lVar7 + 0xe8;
    local_390 = *(undefined1 *)(lVar7 + 0xf1);
    local_3a8 = lVar7 + 200;
    local_3b0 = lVar7 + 0x98;
    local_398 = *(undefined1 *)(lVar7 + 0xf0);
    local_3c0 = lVar7 + 0x78;
    local_3c8 = lVar7 + 0x60;
    SWidget::SWidgetConstruct(plVar1,lVar7,lVar7 + 0x30,lVar7 + 0x40);
    FUN_141978900(plVar1,lVar7);
    if ((char)plVar8[5] < '\0') {
LAB_1421362be:
      bVar6 = 1;
    }
    else {
      cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
      if (cVar5 != '\0') goto LAB_1421362be;
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    FUN_14188b170(local_298);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2f0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_318);
    if (plVar1 == (longlong *)0x0) {
      local_360 = (longlong *)0x0;
    }
    else {
      local_360 = plVar8 + 0x60;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_358 = plVar8;
    FMediaModule::SetTimeSource(local_370,&local_360);
    plVar1 = local_358;
    if (local_358 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_358 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_358)(local_358);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_14213641e;
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_14213641e;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar3 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 != 1) goto LAB_14213641e;
    lVar7 = *plVar8;
  }
  (**(code **)(lVar7 + 8))(plVar8,1);
LAB_14213641e:
  plVar8 = local_368;
  if (local_368 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_368 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_368)(local_368);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_368 + 8))(local_368,1);
      }
    }
  }
  return;
}



// FUNCTION 142136480 FUN_142136480 body=130 status=ok
// SIG undefined FUN_142136480(void)

void FUN_142136480(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FText::operator=(param_1 + 0x40);
  FUN_1420f9830(param_1,&local_18);
  if (local_18 != 0) {
    FUN_14185b7b0(local_18,param_2);
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
  }
  return;
}



// FUNCTION 142136510 SetTouchMethod body=27 status=ok
// SIG undefined SetTouchMethod(void)

void UButton::SetTouchMethod(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b9) = param_2;
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_14195a360(*(longlong *)(param_1 + 0x410),param_2);
    return;
  }
  return;
}



// FUNCTION 142136530 FUN_142136530 body=277 status=ok
// SIG undefined FUN_142136530(void)

void FUN_142136530(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [16];
  longlong local_18;
  longlong *plStack_10;
  
  if ((((param_2 != (longlong *)0x0) && ((*(uint *)((longlong)param_2 + 0x4cc) >> 1 & 1) != 0)) &&
      (cVar4 = (**(code **)(*param_2 + 0x768))(param_2), cVar4 != '\0')) && (param_2[0xa1] != 0)) {
    FUN_1420f9830(param_1,&local_38);
    if (local_38 != 0) {
      FUN_14253e150(local_28,param_2);
      lVar5 = FUN_1423111a0(local_28);
      if (lVar5 != 0) {
        cVar4 = FUN_1418c3710(DAT_1469f4590,*(undefined4 *)(lVar5 + 0x108),&local_38,2);
        if (cVar4 == '\0') {
          local_18 = local_38;
          plStack_10 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
            UNLOCK();
          }
          FUN_14185b9a0(lVar5 + 0x110,&local_18,2,0);
        }
      }
    }
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142136650 FUN_142136650 body=25 status=ok
// SIG undefined FUN_142136650(void)

void FUN_142136650(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  *(float *)(param_1 + 0x11c) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 == 0) {
    return;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  if ((*(int *)(lVar1 + 0x330) == 0) || (*(longlong **)(lVar1 + 0x328) == (longlong *)0x0)) {
LAB_1419a502e:
    if ((*(char *)(lVar1 + 0x324) == '\x01') && (param_2 == *(float *)(lVar1 + 800))) {
      bVar2 = true;
      goto LAB_1419a5048;
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x328) + 0x18))();
    if (cVar3 == '\0') goto LAB_1419a502e;
  }
  bVar2 = false;
LAB_1419a5048:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_30);
  if (!bVar2) {
    *(float *)(lVar1 + 800) = param_2;
    uStack_30 = 0;
    uStack_28 = 0;
    *(undefined1 *)(lVar1 + 0x324) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x328,&uStack_30,param_3,param_4,param_2);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_30);
    FUN_1418475e0(lVar1,1);
  }
  return;
}



// FUNCTION 142136670 FUN_142136670 body=71 status=ok
// SIG undefined FUN_142136670(void)

void FUN_142136670(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x100) = param_2;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    SSlider::SetStepSize(*(longlong *)(param_1 + 0x3c8),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421366c0 FUN_1421366c0 body=130 status=ok
// SIG undefined FUN_1421366c0(void)

void FUN_1421366c0(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  *(float *)(param_1 + 0x100) = param_2;
  if (lVar1 != 0) {
    local_30 = 0;
    local_28 = 0;
    *(float *)(lVar1 + 0x2f0) = param_2;
    *(undefined1 *)(lVar1 + 0x2f4) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x2f8,&local_30,param_3,param_4,param_2);
    FUN_14192abd0(lVar1,(double)param_2,0,0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  }
  return;
}



// FUNCTION 142136750 FUN_142136750 body=23 status=ok
// SIG undefined FUN_142136750(void)

void FUN_142136750(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x129) = (char)param_2;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x23c) = param_2;
  return;
}



// FUNCTION 142136770 FUN_142136770 body=27 status=ok
// SIG undefined FUN_142136770(void)

void FUN_142136770(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(char *)(lVar1 + 0x129) = (char)param_2;
  lVar1 = *(longlong *)(lVar1 + 0x1c0);
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x23c) = param_2;
  return;
}



// FUNCTION 142136790 FUN_142136790 body=23 status=ok
// SIG undefined FUN_142136790(void)

void FUN_142136790(longlong param_1,int param_2)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x119) = (char)param_2;
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x23c) != param_2) {
    *(int *)(lVar1 + 0x23c) = param_2;
    FUN_1418475e0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 1421367b0 FUN_1421367b0 body=27 status=ok
// SIG undefined FUN_1421367b0(void)

void FUN_1421367b0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(char *)(lVar1 + 0x119) = (char)param_2;
  lVar1 = *(longlong *)(lVar1 + 0x250);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x23c) != param_2) {
    *(int *)(lVar1 + 0x23c) = param_2;
    FUN_1418475e0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 1421367d0 FUN_1421367d0 body=17 status=ok
// SIG undefined FUN_1421367d0(void)

void FUN_1421367d0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x49) = (char)param_2;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x23c) != param_2) {
    *(int *)(lVar1 + 0x23c) = param_2;
    FUN_1418475e0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 1421367f0 SetVerticalAlignment body=16 status=ok
// SIG undefined SetVerticalAlignment(void)

void UGridSlot::SetVerticalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x49) = (char)param_2;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x24) = param_2;
  }
  return;
}



// FUNCTION 142136800 SetVerticalAlignment body=16 status=ok
// SIG undefined SetVerticalAlignment(void)

void UHorizontalBoxSlot::SetVerticalAlignment(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x51) = param_2;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x21) = param_2;
  }
  return;
}



// FUNCTION 142136810 SetVerticalAlignment body=16 status=ok
// SIG undefined SetVerticalAlignment(void)

void UOverlaySlot::SetVerticalAlignment(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x51) = param_2;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x25) = param_2;
  }
  return;
}



// FUNCTION 142136820 SetVerticalAlignment body=16 status=ok
// SIG undefined SetVerticalAlignment(void)

void UScrollBoxSlot::SetVerticalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x49) = (char)param_2;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x4c) = param_2;
  }
  return;
}



// FUNCTION 142136830 SetVerticalAlignment body=16 status=ok
// SIG undefined SetVerticalAlignment(void)

void UUniformGridSlot::SetVerticalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x39) = (char)param_2;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x24) = param_2;
  }
  return;
}



// FUNCTION 142136840 SetVerticalAlignment body=16 status=ok
// SIG undefined SetVerticalAlignment(void)

void UWidgetSwitcherSlot::SetVerticalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x49) = (char)param_2;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x24) = param_2;
  }
  return;
}



// FUNCTION 142136850 FUN_142136850 body=17 status=ok
// SIG undefined FUN_142136850(void)

void FUN_142136850(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0x23c) = param_2;
  return;
}



// FUNCTION 142136870 FUN_142136870 body=21 status=ok
// SIG undefined FUN_142136870(void)

void FUN_142136870(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x120);
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x23c) = param_2;
  return;
}



// FUNCTION 142136890 SetVerticalAlignment body=16 status=ok
// SIG undefined SetVerticalAlignment(void)

void UWrapBoxSlot::SetVerticalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x51) = (char)param_2;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x24) = param_2;
  }
  return;
}



// FUNCTION 1421368a0 FUN_1421368a0 body=63 status=ok
// SIG undefined FUN_1421368a0(void)

void FUN_1421368a0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x360);
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + 0x698) = *param_2;
    *(undefined4 *)(lVar2 + 0x6a0) = uVar1;
    *(undefined8 *)(lVar2 + 0x6b0) = *(undefined8 *)(lVar2 + 0x698);
    *(undefined4 *)(lVar2 + 0x6b8) = uVar1;
  }
  return;
}



// FUNCTION 1421368e0 FUN_1421368e0 body=41 status=ok
// SIG undefined FUN_1421368e0(void)

void FUN_1421368e0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x360);
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + 0x6a4) = *param_2;
    *(undefined4 *)(lVar2 + 0x6ac) = uVar1;
  }
  return;
}



// FUNCTION 142136910 FUN_142136910 body=225 status=ok
// SIG undefined FUN_142136910(void)

void FUN_142136910(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(char *)(param_1 + 0xb7) = param_2;
  FUN_1420f9830(param_1,&local_38);
  if (local_38 != (longlong *)0x0) {
    local_28 = DAT_1464b9ee8;
    if ((((param_2 != '\0') && (local_28 = DAT_1464b9ee9, param_2 != '\x01')) &&
        (local_28 = DAT_1464b9eea, param_2 != '\x02')) &&
       ((local_28 = DAT_1464b9eeb, param_2 != '\x03' &&
        (local_28 = DAT_1464b9ee8, param_2 == '\x04')))) {
      local_28 = DAT_1464b9eec;
    }
    local_27 = 1;
    local_20 = 0;
    local_18 = 0;
    (**(code **)(*local_38 + 0x1b8))(local_38,&local_28);
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
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



// FUNCTION 142136a00 FUN_142136a00 body=168 status=ok
// SIG undefined FUN_142136a00(void)

void FUN_142136a00(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  if (param_2 != 0) {
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x958))(0,&local_18);
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
  }
  if (param_1[0xf3] != 0) {
    FUN_14212cbc0(param_1);
  }
  param_1[0xf3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x000142136aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x938))(param_1);
  return;
}



// FUNCTION 142136ab0 FUN_142136ab0 body=278 status=ok
// SIG undefined FUN_142136ab0(void)

void FUN_142136ab0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_1[0xe6] != 0) {
    lVar1 = UUserWidget::GetPrivateStaticClass();
    lVar4 = param_1[0xe6];
    for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar1) goto LAB_142136af3;
    }
  }
  lVar4 = 0;
LAB_142136af3:
  if (param_2 != 0) {
    lVar1 = UUserWidget::GetPrivateStaticClass();
    lVar3 = param_2;
    do {
      lVar2 = param_2;
      if (lVar3 == lVar1) goto LAB_142136b10;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  lVar2 = 0;
LAB_142136b10:
  if ((lVar4 != lVar2) && (param_1[0xe6] = param_2, (*(byte *)(param_1 + 0x19) & 0x20) != 0)) {
    if (param_2 != 0) {
      lVar3 = UUserWidget::GetPrivateStaticClass();
      for (lVar4 = param_1[0xe6]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar3) {
          if (param_1[0xe6] != 0) {
            lVar4 = param_1[0x24];
            if (lVar4 == 0) {
              lVar4 = FUN_1423407b0(param_1);
            }
            uVar5 = FUN_1420c4b00(lVar4,param_1[0xe6],0);
                    /* WARNING: Could not recover jumptable at 0x000142136bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x950))(param_1,uVar5);
            return;
          }
          break;
        }
      }
    }
    (**(code **)(*param_1 + 0x950))(param_1,0);
  }
  return;
}



// FUNCTION 142136bd0 SetWidthOverride body=68 status=ok
// SIG undefined SetWidthOverride(void)

void USizeBox::SetWidthOverride(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419a5160(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 142136c20 SetWindowTitleBarCloseButtonActive body=7 status=ok
// SIG undefined SetWindowTitleBarCloseButtonActive(void)

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(undefined1 param_1)

{
  DAT_1464bfecc = param_1;
  return;
}



// FUNCTION 142136c30 FUN_142136c30 body=244 status=ok
// SIG undefined FUN_142136c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142136c30(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *local_18;
  int local_10;
  
  _DAT_146ae7a38 = *param_1;
  _DAT_146ae7a3c = param_1[1];
  DAT_146ae7a40 = *(undefined8 *)(param_1 + 2);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar1 = (undefined8 *)operator_new(0x20,&local_18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f3f048;
    puVar1[1] = FUN_14210bdd0;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[3] = uVar2;
    *puVar1 = &PTR_GetPoolName_143f3f090;
  }
  if ((local_10 != 0) && (local_18 != (longlong *)0x0)) {
    (**(code **)(*local_18 + 0x30))(local_18,&DAT_1469f4b88);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    return;
  }
  if ((DAT_1469f4b90 != 0) && (DAT_1469f4b88 != (longlong *)0x0)) {
    (**(code **)(*DAT_1469f4b88 + 0x28))(DAT_1469f4b88,0);
    if (DAT_1469f4b88 != (longlong *)0x0) {
      DAT_1469f4b88 = (longlong *)FMemory::Realloc(DAT_1469f4b88,0,0);
    }
    DAT_1469f4b90 = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  return;
}



// FUNCTION 142136d30 FUN_142136d30 body=527 status=ok
// SIG undefined FUN_142136d30(void)

void FUN_142136d30(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar3 = DAT_146b17150;
  uVar10 = 0;
  if (DAT_146b17150 != 0) {
    lVar7 = FUN_142937670();
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (((bVar9) && (lVar3 = *(longlong *)(lVar3 + 0x7b0), lVar3 != 0)) &&
       (plVar4 = *(longlong **)(lVar3 + 0xe8), plVar4 != (longlong *)0x0)) {
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar9) {
        LOCK();
        bVar9 = iVar6 == (int)plVar4[1];
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar5 = *(longlong **)(lVar3 + 0xe0);
          if (plVar5 != (longlong *)0x0) {
            bVar9 = param_1 == 0;
            plVar11 = plVar5;
            if (bVar9) {
              puVar8 = &local_50;
              local_50 = 0;
              plStack_48 = (longlong *)0x0;
            }
            else {
              puVar8 = (undefined8 *)FUN_1420f9830(param_1,local_40);
            }
            (**(code **)(*plVar5 + 0x58))
                      (plVar5,puVar8,param_2,param_3,param_4,param_5,uVar10,plVar11);
            plVar5 = plStack_48;
            if ((bVar9) && (plStack_48 != (longlong *)0x0)) {
              LOCK();
              plVar11 = plStack_48 + 1;
              lVar3 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plStack_48)(plStack_48);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            if ((!bVar9) && (local_38 != (longlong *)0x0)) {
              LOCK();
              plVar5 = local_38 + 1;
              lVar3 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar1 = (int *)((longlong)local_38 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_38 + 8))(local_38,1);
                }
              }
            }
          }
          LOCK();
          plVar5 = plVar4 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 != 1) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 != 1) {
            return;
          }
          (**(code **)(*plVar4 + 8))(plVar4,1);
          return;
        }
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 142136f40 SetZOrder body=92 status=ok
// SIG undefined SetZOrder(void)

void UCanvasPanelSlot::SetZOrder(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  *(int *)(param_1 + 100) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xac) = 1;
    local_20 = 0;
    local_18 = 0;
    *(float *)(lVar1 + 0xa8) = (float)param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0xb0,&local_20,param_3,param_4,(float)param_2);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142136fa0 FUN_142136fa0 body=205 status=ok
// SIG undefined FUN_142136fa0(void)

undefined1 FUN_142136fa0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 != '\0') {
    if (*(char *)((longlong)param_1 + 0x796) == '\0') {
      lVar2 = param_1[0x24];
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      if ((0.5 < *(float *)(lVar2 + 0x790) - *(float *)((longlong)param_1 + 0x36c)) &&
         (0.0 < *(float *)((longlong)param_1 + 0x36c))) {
        return 0;
      }
    }
    dVar3 = DAT_1468b5a78;
    if (*(char *)((longlong)param_1 + 0x729) != '\0') {
      lVar2 = param_1[0x24];
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      dVar3 = (double)*(float *)(lVar2 + 0x790);
    }
    if ((double)*(float *)((longlong)param_1 + 0x744) <= dVar3 - (double)param_1[0xe9]) {
      if ((char)param_1[0xe8] != '\0') {
        return *(undefined1 *)((longlong)param_1 + 0x741);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142137070 FUN_142137070 body=19 status=ok
// SIG undefined FUN_142137070(void)

undefined8 FUN_142137070(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x148);
  if (lVar2 == 0) {
    return 0;
  }
  if (((*(char *)(lVar2 + 0x2a0) != '\0') && (*(longlong *)(lVar2 + 0x220) != 0)) &&
     (*(longlong *)(lVar2 + 0x228) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x228) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      return 0;
    }
  }
  if (*(char *)(lVar2 + 0x298) != '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142137090 ShouldSerializeWidgetTree body=252 status=ok
// SIG undefined ShouldSerializeWidgetTree(void)

undefined8 UUserWidget::ShouldSerializeWidgetTree(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    if (((*(uint *)(param_1 + 8) >> 5 & 1) != 0) &&
       (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 != 0)) {
      lVar3 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && ((*(byte *)(lVar4 + 0x2e8) & 6) == 6)) {
        return 1;
      }
    }
    do {
      if ((*(uint *)(param_1 + 8) >> 5 & 1) != 0) {
        lVar4 = GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (cVar2 = ShouldSerializeWidgetTree(param_1,param_2), cVar2 != '\0')) {
          return 1;
        }
      }
      param_1 = *(longlong *)(param_1 + 0x20);
    } while (param_1 != 0);
  }
  return 0;
}



// FUNCTION 142137190 FUN_142137190 body=662 status=ok
// SIG undefined FUN_142137190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142137190(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_558 [32];
  longlong local_538;
  longlong local_530;
  undefined8 *local_528;
  undefined4 local_520;
  longlong local_518;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined1 local_4f0 [32];
  undefined1 local_4d0 [40];
  undefined1 local_4a8 [112];
  undefined1 local_438 [8];
  undefined1 local_430 [320];
  longlong *local_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [320];
  longlong *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  undefined1 local_170 [320];
  longlong *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  if (((*(char *)(param_1 + 0x301) != '\0') && (DAT_1469f4590 != 0)) &&
     (*(longlong *)(param_1 + 0x2e0) != 0)) {
    FUN_1420f1f20(param_1,local_438);
    local_530 = param_1 + 0x340;
    local_538 = param_1 + 0x428;
    local_508 = 0;
    local_518 = param_1 + 0x338;
    local_528 = &local_508;
    local_520 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    FUN_1418892a0(local_4a8,*(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8),
                  (longlong)*(float *)(param_1 + 0x2f4),param_1 + 0x420);
    cVar5 = FWidgetPath::IsValid(local_438);
    if (cVar5 == '\0') {
      FWidgetPath::FWidgetPath(local_2d8);
      FUN_1418beca0(DAT_1469f4590,local_2d8,local_4a8,0);
      uVar6 = FWidgetPath::FWidgetPath(local_178);
      uVar6 = FUN_1417f3670(local_4d0,uVar6);
      FUN_14188ce90(param_1 + 0x318,uVar6);
      FUN_1420d83e0(local_4d0);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
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
      FUN_140456b10(local_170);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_188);
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_190 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      FUN_140456b10(local_2d0);
    }
    else {
      FUN_1417f3670(local_4f0,local_438);
      FUN_14188ce90(param_1 + 0x318,local_4f0);
      FUN_1420d83e0(local_4f0);
      FUN_1418beca0(DAT_1469f4590,local_438,local_4a8,0);
    }
    FPointerEvent::~FPointerEvent(local_4a8);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_2e8);
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2f0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar2 = (int *)((longlong)local_2f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    FUN_140456b10(local_430);
  }
  return;
}



// FUNCTION 142137430 SlateExpansionChanged body=50 status=ok
// SIG undefined SlateExpansionChanged(void)

void UExpandableArea::SlateExpansionChanged(longlong param_1,undefined1 param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  *(undefined1 *)(param_1 + 0x2d8) = param_2;
  if (0 < *(int *)(param_1 + 0x308)) {
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x300,&local_18);
  }
  return;
}



// FUNCTION 142137470 SlateHandleClicked body=154 status=ok
// SIG undefined SlateHandleClicked(void)

undefined1 * UButton::SlateHandleClicked(longlong param_1,undefined1 *param_2)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3c0,0);
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



// FUNCTION 142137510 FUN_142137510 body=14 status=ok
// SIG undefined FUN_142137510(void)

void FUN_142137510(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3f0,0);
  return;
}



// FUNCTION 142137550 SlateHandleUserScrolled body=32 status=ok
// SIG undefined SlateHandleUserScrolled(void)

void UScrollBox::SlateHandleUserScrolled(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x838,local_res10);
  return;
}



// FUNCTION 142137570 SlateMeshToSlateRenderData body=418 status=ok
// SIG undefined SlateMeshToSlateRenderData(void)

void SlateMeshToSlateRenderData(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  void *pvVar10;
  void *local_38;
  uint local_30;
  
  pvVar10 = (void *)0x0;
  iVar4 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_3 + 1) = 0;
  iVar3 = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,0);
    iVar3 = *(int *)((longlong)param_3 + 0xc);
  }
  if (iVar3 < iVar4) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,iVar4);
  }
  pvVar6 = pvVar10;
  if (0 < iVar4) {
    do {
      iVar3 = (int)param_3[1];
      lVar8 = *(longlong *)(param_1 + 0x38);
      *(int *)(param_3 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
      }
      pvVar7 = (void *)((longlong)pvVar6 + 1);
      *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) =
           *(undefined4 *)(lVar8 + (longlong)pvVar6 * 4);
      pvVar6 = pvVar7;
    } while ((longlong)pvVar7 < (longlong)iVar4);
  }
  local_30 = *(uint *)(param_1 + 0x30);
  lVar8 = (longlong)(int)local_30;
  pvVar6 = *(void **)(param_1 + 0x28);
  local_38 = (void *)0x0;
  pvVar7 = pvVar10;
  if (local_30 != 0) {
    TArray<FIKChainLink,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pvVar7 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,pvVar6,lVar8 * 0x3c);
  }
  uVar2 = local_30;
  *(undefined4 *)(param_2 + 1) = 0;
  iVar4 = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
    iVar4 = *(int *)((longlong)param_2 + 0xc);
  }
  if (iVar4 < (int)uVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,uVar2);
  }
  if (uVar2 != 0) {
    do {
      iVar4 = (int)param_2[1];
      lVar8 = (longlong)iVar4;
      puVar5 = (undefined4 *)((longlong)(int)pvVar10 * 0x3c + (longlong)pvVar7);
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      lVar1 = *param_2;
      uVar9 = (int)pvVar10 + 1;
      pvVar10 = (void *)(ulonglong)uVar9;
      *(undefined4 *)(lVar1 + 0x18 + lVar8 * 0x28) = *puVar5;
      *(undefined4 *)(lVar1 + 0x1c + lVar8 * 0x28) = puVar5[1];
      *(undefined4 *)(lVar1 + 0x20 + lVar8 * 0x28) = puVar5[2];
      *(undefined4 *)(lVar1 + lVar8 * 0x28) = puVar5[3];
      *(undefined4 *)(lVar1 + 4 + lVar8 * 0x28) = puVar5[4];
      *(undefined4 *)(lVar1 + 8 + lVar8 * 0x28) = puVar5[5];
      *(undefined4 *)(lVar1 + 0xc + lVar8 * 0x28) = puVar5[6];
      *(undefined4 *)(lVar1 + 0x10 + lVar8 * 0x28) = puVar5[7];
      *(undefined4 *)(lVar1 + 0x14 + lVar8 * 0x28) = puVar5[8];
    } while (uVar9 < uVar2);
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}



// FUNCTION 142137720 SlateOnCheckStateChangedCallback body=39 status=ok
// SIG undefined SlateOnCheckStateChangedCallback(void)

void UCheckBox::SlateOnCheckStateChangedCallback(longlong param_1,char param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2 != '\0';
  *(char *)(param_1 + 0x118) = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x748,local_res10);
  return;
}



// FUNCTION 142137750 SlotAsBorderSlot body=99 status=ok
// SIG undefined SlotAsBorderSlot(void)

longlong UWidgetLayoutLibrary::SlotAsBorderSlot(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UBorderSlot::GetPrivateStaticClass();
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



// FUNCTION 1421377c0 SlotAsCanvasSlot body=99 status=ok
// SIG undefined SlotAsCanvasSlot(void)

longlong UWidgetLayoutLibrary::SlotAsCanvasSlot(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UCanvasPanelSlot::GetPrivateStaticClass();
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



// FUNCTION 142137830 SlotAsGridSlot body=99 status=ok
// SIG undefined SlotAsGridSlot(void)

longlong UWidgetLayoutLibrary::SlotAsGridSlot(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UGridSlot::GetPrivateStaticClass();
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



// FUNCTION 1421378a0 SlotAsHorizontalBoxSlot body=99 status=ok
// SIG undefined SlotAsHorizontalBoxSlot(void)

longlong UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UHorizontalBoxSlot::GetPrivateStaticClass();
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



// FUNCTION 142137910 SlotAsOverlaySlot body=99 status=ok
// SIG undefined SlotAsOverlaySlot(void)

longlong UWidgetLayoutLibrary::SlotAsOverlaySlot(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UOverlaySlot::GetPrivateStaticClass();
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



// FUNCTION 142137980 SlotAsUniformGridSlot body=99 status=ok
// SIG undefined SlotAsUniformGridSlot(void)

longlong UWidgetLayoutLibrary::SlotAsUniformGridSlot(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UUniformGridSlot::GetPrivateStaticClass();
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



// FUNCTION 1421379f0 SlotAsVerticalBoxSlot body=99 status=ok
// SIG undefined SlotAsVerticalBoxSlot(void)

longlong UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UVerticalBoxSlot::GetPrivateStaticClass();
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



// FUNCTION 142137a60 FUN_142137a60 body=157 status=ok
// SIG undefined FUN_142137a60(void)

void FUN_142137a60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [40];
  undefined1 local_18;
  
  if (*(longlong *)(param_1 + 0x128) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x3b0);
  FActorSpawnParameters::FActorSpawnParameters(local_40);
  local_18 = 1;
  local_58 = 0;
  local_50 = 0;
  if (param_2 != 0) {
    lVar2 = FUN_1428dfc70();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) goto LAB_142137ac4;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_2 = 0;
LAB_142137ac4:
  UWorld::SpawnActor(uVar1,param_2,&local_58,local_4c,local_40);
  return;
}



// FUNCTION 142137b00 FUN_142137b00 body=460 status=ok
// SIG undefined FUN_142137b00(void)

void FUN_142137b00(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong **pplVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_38 [2];
  longlong *local_28;
  longlong *local_20;
  longlong *local_18 [2];
  
  plVar3 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_28);
  pplVar4 = (longlong **)(**(code **)(*local_28 + 0x80))();
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_18[0] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14404bee8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_142101eb0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar5;
    *plVar3 = (longlong)&PTR_FUN_14404bf30;
  }
  if (local_18 != pplVar4) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(pplVar4 + 1) != 0) && (plVar6 = *pplVar4, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar4 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar4,0,0);
          *pplVar4 = plVar6;
        }
        *(undefined4 *)(pplVar4 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,pplVar4);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    local_18[0] = (longlong *)FMemory::Realloc(plVar3,0,0);
    if (local_18[0] != (longlong *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  (**(code **)(*local_28 + 0x50))(local_28,param_2);
  local_38[0] = 0;
  local_38[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],&DAT_144f99358,8);
  (**(code **)(*local_28 + 0x48))(local_28,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_28 + 0x78))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142137cd0 FUN_142137cd0 body=435 status=ok
// SIG undefined FUN_142137cd0(void)

void FUN_142137cd0(longlong param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong local_res8;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if ((*(byte *)(param_1 + 0x6f1) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x388);
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x6c0);
      local_res8 = (ulonglong)*(uint *)(param_1 + 0x6a8);
      puVar4 = (undefined1 *)
               FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                         (local_b8,local_res8,*(undefined8 *)(param_1 + 0x6a0));
      local_3c = 0;
      uStack_38 = 0;
      local_ac = puVar4[0xc];
      local_90 = 0x3f800000;
      local_a8 = *(undefined8 *)(puVar4 + 0x10);
      local_a0 = *(undefined8 *)(puVar4 + 0x18);
      local_98 = *(undefined4 *)(puVar4 + 0x20);
      local_b8[0] = *puVar4;
      local_b4 = *(undefined8 *)(puVar4 + 4);
      local_94 = *(undefined4 *)(puVar4 + 0x24);
      local_78 = local_78 & 0xc0;
      local_88 = 0;
      local_80 = 0x80000000;
      local_7c = 0;
      local_84 = uVar2;
      FUN_141f4a590(param_1 + 0x388,local_b8,param_1 + 0x28,DAT_146ae7800);
      FUN_141f4f4a0(param_1 + 0x388,param_1 + 0x28);
    }
    if (param_2 != '\0') {
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x6c8,param_1);
      local_res8 = FWeakObjectPtr::Get(param_1 + 0x380);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_1 + 0x378) + 0x358,&local_res8);
    }
    *(undefined8 *)(param_1 + 0x6ac) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x700);
    *(int *)(param_1 + 0x700) = iVar1 + 1;
    if (*(int *)(param_1 + 0x704) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x6f8,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + (longlong)iVar1 * 4) = 0;
  }
  return;
}



// FUNCTION 142137e90 FUN_142137e90 body=147 status=ok
// SIG undefined FUN_142137e90(void)

void FUN_142137e90(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) | 0x40;
  uVar4 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x170);
  bVar1 = *(byte *)(param_1 + 0x1ac);
  uVar3 = (longlong)*(int *)(param_1 + 0x178) & 0x1fffffffffffffff;
  if (puVar2 + *(int *)(param_1 + 0x178) < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      FUN_142137cd0(*puVar2,1);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 != uVar3);
    bVar1 = *(byte *)(param_1 + 0x1ac);
  }
  *(byte *)(param_1 + 0x1ac) = bVar1 & 0xbf;
  FUN_142142860(param_1);
  return;
}



// FUNCTION 142137f30 FUN_142137f30 body=92 status=ok
// SIG undefined FUN_142137f30(void)

void FUN_142137f30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar2 + *(int *)(param_1 + 0x178);
    if (plVar2 != plVar1) {
      while (*(longlong *)(*plVar2 + 0x378) != param_2) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1) {
          FUN_142142860(param_1);
          return;
        }
      }
      FUN_142137cd0(*plVar2,1);
    }
    FUN_142142860(param_1);
  }
  return;
}



// FUNCTION 142137f90 FUN_142137f90 body=257 status=ok
// SIG undefined FUN_142137f90(void)

void FUN_142137f90(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  *(byte *)((longlong)param_1 + 0x1ac) = *(byte *)((longlong)param_1 + 0x1ac) | 0x40;
  bVar2 = *(byte *)((longlong)param_1 + 0x1ac);
  uVar6 = 0;
  puVar5 = (undefined8 *)param_1[0x2e];
  uVar7 = (longlong)(int)param_1[0x2f] & 0x1fffffffffffffff;
  if (puVar5 + (int)param_1[0x2f] < puVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      FUN_142137cd0(*puVar5,1);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != uVar7);
    bVar2 = *(byte *)((longlong)param_1 + 0x1ac);
  }
  *(byte *)((longlong)param_1 + 0x1ac) = bVar2 & 0xbf;
  FUN_142142860(param_1);
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(local_res8,param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar3 = lVar1 + 0x400;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    FUN_142534fa0(lVar3,local_res8);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_1428800b0(uVar4,param_1);
  }
  return;
}



// FUNCTION 1421380a0 FUN_1421380a0 body=214 status=ok
// SIG undefined FUN_1421380a0(void)

void FUN_1421380a0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  lVar2 = param_1[0x36];
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x1e0) + -1;
    if (-1 < iVar4) {
      do {
        FUN_1423747d0(param_1[0x36],iVar4);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      lVar2 = param_1[0x36];
    }
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x2a0))(param_1);
      if (lVar2 != 0) {
        FUN_142712050(lVar2,param_1[0x36]);
      }
    }
    FUN_142362b90(param_1[0x36]);
    iVar4 = *(int *)(param_1[0x36] + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar3 = iVar4 >> 0x1f & 0xffff;
      uVar1 = iVar4 + uVar3;
      lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar3) * 0x18;
    }
    else {
      lVar2 = 0;
    }
    *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 0x20000000;
    param_1[0x36] = 0;
  }
  return;
}



// FUNCTION 142138180 FUN_142138180 body=141 status=ok
// SIG undefined FUN_142138180(void)

void FUN_142138180(longlong param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (iVar3 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0) + -1, -1 < iVar3)) {
    lVar2 = (longlong)iVar3 << 4;
    do {
      lVar1 = *(longlong *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1d8));
      if ((*(longlong *)(lVar1 + 8) == param_2) && (*(char *)(lVar1 + 2) == *param_3)) {
        FUN_1423747d0(*(longlong *)(param_1 + 0x1b0),iVar3);
      }
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}



// FUNCTION 142138210 FUN_142138210 body=864 status=ok
// SIG undefined FUN_142138210(void)

ulonglong FUN_142138210(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  wint_t wVar2;
  wint_t wVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  wint_t *pwVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  bool bVar19;
  undefined4 local_res10 [2];
  wchar_t *local_38;
  ulonglong local_30;
  
  local_res10[0] = 0;
  bVar19 = false;
  if (*(int *)(param_2 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*param_2;
  }
  pwVar13 = &DAT_1441474a0;
  do {
    wVar2 = *(wint_t *)((longlong)(puVar18 + -0xa20a3a50) + (longlong)pwVar13);
    if ((wVar2 == 0) && (*pwVar13 == 0)) goto LAB_14213829f;
    if (wVar2 != *pwVar13) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar13);
      if (wVar2 != wVar3) break;
    }
    pwVar13 = pwVar13 + 1;
  } while( true );
  puVar7 = (undefined8 *)(ulonglong)wVar3;
  pwVar17 = local_38;
  if (wVar2 == wVar3) {
LAB_14213829f:
    local_30 = 3;
    local_38 = (wchar_t *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    pwVar17 = local_38;
    FGenericPlatformString::Memcpy(local_38,&DAT_144faa880,6);
    uVar4 = *(int *)(param_2 + 5) - *(int *)((longlong)param_2 + 0x54);
    puVar7 = (undefined8 *)(ulonglong)uVar4;
    if (uVar4 != 0) {
      iVar12 = (int)local_30;
      pwVar9 = L"";
      if ((int)local_30 != 0) {
        pwVar9 = pwVar17;
      }
      iVar5 = FUN_140438070(pwVar9);
      puVar7 = (undefined8 *)param_2[0xc];
      if ((undefined8 *)param_2[0xc] == (undefined8 *)0x0) {
        puVar7 = param_2 + 0xb;
      }
      iVar5 = *(int *)((longlong)puVar7 +
                      ((longlong)*(int *)(param_2 + 0xd) - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        puVar7 = (undefined8 *)param_2[4];
        do {
          lVar15 = (longlong)iVar5;
          pwVar9 = L"";
          if (iVar12 != 0) {
            pwVar9 = pwVar17;
          }
          if (*(int *)(puVar7 + lVar15 * 4 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)puVar7[lVar15 * 4];
          }
          puVar7 = (undefined8 *)FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,pwVar9);
          if ((int)puVar7 == 0) goto LAB_14213835c;
          puVar7 = (undefined8 *)param_2[4];
          iVar5 = *(int *)(puVar7 + lVar15 * 4 + 3);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14213835c:
    bVar19 = true;
    if (iVar5 != -1) {
      bVar1 = true;
      goto LAB_142138374;
    }
  }
  bVar1 = false;
LAB_142138374:
  if ((bVar19) && (pwVar17 != (wchar_t *)0x0)) {
    puVar7 = (undefined8 *)FMemory::Free(pwVar17);
  }
  if (bVar1) {
    local_30 = 3;
    local_38 = (wchar_t *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    pwVar17 = local_38;
    FGenericPlatformString::Memcpy(local_38,&DAT_144faa880,6);
    if (*(int *)(param_2 + 5) != *(int *)((longlong)param_2 + 0x54)) {
      iVar12 = (int)local_30;
      pwVar9 = L"";
      if ((int)local_30 != 0) {
        pwVar9 = pwVar17;
      }
      iVar5 = FUN_140438070(pwVar9);
      puVar7 = (undefined8 *)param_2[0xc];
      if ((undefined8 *)param_2[0xc] == (undefined8 *)0x0) {
        puVar7 = param_2 + 0xb;
      }
      iVar5 = *(int *)((longlong)puVar7 +
                      ((longlong)*(int *)(param_2 + 0xd) - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar15 = param_2[4];
        do {
          lVar16 = (longlong)iVar5 * 0x20;
          pwVar9 = L"";
          if (iVar12 != 0) {
            pwVar9 = pwVar17;
          }
          if (*(int *)(lVar16 + 8 + lVar15) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = *(undefined2 **)(lVar16 + lVar15);
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,pwVar9);
          if (iVar6 == 0) {
            if (iVar5 != -1) {
              lVar16 = param_2[4] + lVar16;
              goto LAB_142138449;
            }
            break;
          }
          lVar15 = param_2[4];
          iVar5 = *(int *)(lVar16 + 0x18 + lVar15);
        } while (iVar5 != -1);
      }
    }
    lVar16 = 0;
LAB_142138449:
    if (pwVar17 != (wchar_t *)0x0) {
      FMemory::Free(pwVar17);
    }
    iVar12 = *(int *)(param_3 + 1);
    uVar14 = *(uint *)(lVar16 + 0x14);
    uVar4 = iVar12 - 1;
    if (iVar12 == 0) {
      uVar4 = 0;
    }
    if (*(uint *)(lVar16 + 0x10) < uVar4) {
      uVar4 = *(uint *)(lVar16 + 0x10);
    }
    uVar10 = iVar12 - 1;
    if (iVar12 == 0) {
      uVar10 = 0;
    }
    uVar11 = uVar4;
    if ((uVar4 <= uVar14) && (uVar11 = uVar10, uVar14 < uVar10)) {
      uVar11 = uVar14;
    }
    if (iVar12 == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*param_3;
    }
    iVar12 = uVar11 - uVar4;
    local_38 = (wchar_t *)0x0;
    pwVar17 = (wchar_t *)0x0;
    uVar14 = iVar12 + 1;
    if (iVar12 == 0) {
      uVar14 = 0;
    }
    local_30 = (ulonglong)uVar14;
    bVar19 = uVar14 == 0;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pwVar17 = local_38;
      iVar5 = (int)local_30;
      bVar19 = (int)local_30 == 0;
      if (0 < (int)local_30) {
        wcsncpy(local_38,puVar18 + (int)uVar4,(longlong)iVar12);
        pwVar17[iVar12] = L'\0';
        bVar19 = iVar5 == 0;
      }
    }
    pwVar9 = L"";
    if (!bVar19) {
      pwVar9 = pwVar17;
    }
    puVar7 = (undefined8 *)FName::FName(local_res10,pwVar9,1);
    lVar15 = FUN_1420f64f0(*(undefined8 *)(param_1 + 0x10),*puVar7,0);
    if (pwVar17 != (wchar_t *)0x0) {
      FMemory::Free(pwVar17);
    }
    uVar8 = (ulonglong)(lVar15 != 0);
  }
  else {
    uVar8 = (ulonglong)puVar7 & 0xffffffffffffff00;
  }
  return uVar8;
}



// FUNCTION 142138570 FUN_142138570 body=98 status=ok
// SIG undefined FUN_142138570(void)

undefined1 FUN_142138570(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x618) != 0) {
    if (*(longlong **)(param_1 + 0x610) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x610) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x618) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x610);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x608) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x608);
  }
  return *(undefined1 *)(param_1 + 0x608);
}



// FUNCTION 1421385e0 FUN_1421385e0 body=181 status=ok
// SIG undefined FUN_1421385e0(void)

ulonglong FUN_1421385e0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    uVar4 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      uVar4 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(uVar4 + 0x58) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142138686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x340))();
        return uVar4;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1421386a0 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_1421386c6;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_1421386c6:
  lVar2 = UMovieScene2DTransformSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 1421386e0 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_142138706;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_142138706:
  lVar2 = UMovieSceneMarginSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 142138720 SynchronizeProperties body=341 status=ok
// SIG undefined SynchronizeProperties(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UBackgroundBlur::SynchronizeProperties(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_14213dc10();
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x118);
    uStack_3c = *(uint *)(param_1 + 0x11c);
    uStack_38 = *(undefined8 *)(param_1 + 0x120);
    local_30 = CONCAT71(local_30._1_7_,1);
    local_28 = 0;
    local_20 = 0;
    SWindowTitleBarArea::SetPadding(*(longlong *)(param_1 + 0x1c0),&local_40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    SBackgroundBlur::SetHAlign(*(undefined8 *)(param_1 + 0x1c0),*(undefined1 *)(param_1 + 0x128));
    SBackgroundBlur::SetVAlign(*(undefined8 *)(param_1 + 0x1c0),*(undefined1 *)(param_1 + 0x129));
    SBackgroundBlur::SetApplyAlphaToBlur
              (*(undefined8 *)(param_1 + 0x1c0),*(undefined1 *)(param_1 + 0x12a));
    local_44 = *(char *)(param_1 + 0x130) != '\0';
    if ((bool)local_44) {
      local_48 = *(undefined4 *)(param_1 + 0x134);
    }
    uVar1 = uStack_3c >> 8;
    uStack_3c = uStack_3c & 0xffffff00;
    if ((bool)local_44) {
      local_40 = local_48;
      uStack_3c = CONCAT31((int3)uVar1,1);
    }
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    local_30 = 0;
    local_28 = local_28 & 0xffffffff00000000;
    SBackgroundBlur::SetBlurRadius(*(undefined8 *)(param_1 + 0x1c0),&local_40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
    local_40 = *(undefined4 *)(param_1 + 300);
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    uStack_38 = 0;
    local_30 = local_30 & 0xffffffff00000000;
    SBackgroundBlur::SetBlurStrength(*(undefined8 *)(param_1 + 0x1c0),&local_40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
    SBackgroundBlur::SetLowQualityBackgroundBrush(*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x138);
  }
  return;
}



// FUNCTION 142138880 SynchronizeProperties body=167 status=ok
// SIG undefined SynchronizeProperties(void)

void UBackgroundBlurSlot::SynchronizeProperties(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(lVar2 + 0x118) = uVar3;
    *(undefined4 *)(lVar2 + 0x11c) = uVar4;
    *(undefined4 *)(lVar2 + 0x120) = uVar5;
    *(undefined4 *)(lVar2 + 0x124) = uVar6;
    if (*(longlong *)(lVar2 + 0x1c0) != 0) {
      local_28 = 1;
      local_20 = 0;
      local_18 = 0;
      local_38 = uVar3;
      uStack_34 = uVar4;
      uStack_30 = uVar5;
      uStack_2c = uVar6;
      SWindowTitleBarArea::SetPadding(*(longlong *)(lVar2 + 0x1c0),&local_38);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)(lVar2 + 0x128) = uVar1;
    lVar2 = *(longlong *)(lVar2 + 0x1c0);
    if (lVar2 != 0) {
      SBackgroundBlur::SetHAlign(lVar2,uVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)(lVar2 + 0x129) = uVar1;
    lVar2 = *(longlong *)(lVar2 + 0x1c0);
    if (lVar2 != 0) {
      SBackgroundBlur::SetVAlign(lVar2,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142138930 FUN_142138930 body=2701 status=ok
// SIG undefined FUN_142138930(void)

/* WARNING: Removing unreachable block (ram,0x00014213909b) */

void FUN_142138930(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_5f8;
  int local_5f0;
  longlong *local_5e8;
  int local_5e0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined4 local_590;
  undefined8 local_588;
  undefined4 local_580;
  byte local_578 [8];
  undefined8 local_570;
  undefined4 local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined1 local_550;
  undefined8 local_548;
  undefined4 local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined1 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined1 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  longlong local_4c8;
  undefined1 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  longlong local_4a8;
  undefined1 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 local_478 [8];
  undefined8 local_470;
  longlong *plStack_468;
  undefined1 local_460 [8];
  undefined8 local_458;
  undefined4 local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined1 local_438;
  undefined8 local_430;
  longlong *local_428;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined1 local_3f8;
  undefined8 local_3f0;
  longlong *plStack_3e8;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined1 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined1 local_350 [136];
  undefined1 local_2c8;
  longlong *local_2c0;
  int local_2b8;
  undefined1 local_2b0 [24];
  undefined1 local_298 [16];
  undefined1 local_288 [136];
  undefined1 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [136];
  undefined1 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [40];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_f8 [184];
  
  FUN_14213dc10();
  if (((*(longlong *)(param_1 + 0x138) == 0) ||
      (lVar13 = FWeakObjectPtr::Get(param_1 + 0x130), lVar13 == 0)) ||
     (lVar13 = UObject::FindFunction(lVar13,*(undefined8 *)(param_1 + 0x138)), lVar13 == 0)) {
    local_3b8 = 1;
    puVar15 = &local_3c8;
    local_3b0 = 0;
    bVar11 = true;
    bVar6 = false;
    local_3c8 = *(undefined8 *)(param_1 + 0x11c);
    uStack_3c0 = *(undefined8 *)(param_1 + 0x124);
    local_3a8 = 0;
  }
  else {
    local_res10 = *(undefined8 *)(param_1 + 0x138);
    uVar14 = FWeakObjectPtr::Get(param_1 + 0x130);
    puVar15 = (undefined8 *)FUN_1420c4410(local_2b0,uVar14,&local_res10);
    bVar11 = false;
    bVar6 = true;
  }
  local_510 = *(undefined4 *)puVar15;
  uStack_50c = *(undefined4 *)((longlong)puVar15 + 4);
  uStack_508 = *(undefined4 *)(puVar15 + 1);
  uStack_504 = *(undefined4 *)((longlong)puVar15 + 0xc);
  local_500 = *(undefined1 *)(puVar15 + 2);
  local_4f8 = 0;
  local_4f0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_4f8,puVar15 + 3);
  if (bVar11) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3b0);
  }
  if (bVar6) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_298);
  }
  if (((*(longlong *)(param_1 + 0x200) == 0) ||
      (lVar13 = FWeakObjectPtr::Get(param_1 + 0x1f8), lVar13 == 0)) ||
     (lVar13 = UObject::FindFunction(lVar13,*(undefined8 *)(param_1 + 0x200)), lVar13 == 0)) {
    uVar7 = *(undefined4 *)(param_1 + 0x1e8);
    uVar8 = *(undefined4 *)(param_1 + 0x1ec);
    uVar9 = *(undefined4 *)(param_1 + 0x1f0);
    uVar10 = *(undefined4 *)(param_1 + 500);
    local_368 = 1;
    local_360 = 0;
    local_358 = 0;
    local_378 = uVar7;
    uStack_374 = uVar8;
    uStack_370 = uVar9;
    uStack_36c = uVar10;
    local_120 = uVar7;
    uStack_11c = uVar8;
    uStack_118 = uVar9;
    uStack_114 = uVar10;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_360);
    puVar16 = &local_488;
    local_478[0] = 0;
    local_488 = uVar7;
    uStack_484 = uVar8;
    uStack_480 = uVar9;
    uStack_47c = uVar10;
    bVar12 = false;
    bVar11 = false;
    bVar6 = true;
    local_460[0] = 1;
    local_470 = 0;
    plStack_468 = (longlong *)0x0;
    local_458 = 0;
    local_450 = 0;
  }
  else {
    local_res18 = *(undefined8 *)(param_1 + 0x200);
    uVar14 = FWeakObjectPtr::Get(param_1 + 0x1f8);
    puVar16 = (undefined4 *)FUN_1420c4410(local_148,uVar14,&local_res18);
    local_520 = 0;
    local_518 = 0;
    local_528 = *(undefined1 *)(puVar16 + 4);
    local_538 = *puVar16;
    uStack_534 = puVar16[1];
    uStack_530 = puVar16[2];
    uStack_52c = puVar16[3];
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_520,puVar16 + 6);
    local_5f8 = (longlong *)FMemory::Realloc(0,0x50);
    local_5f0 = 5;
    if (local_5f8 != (longlong *)0x0) {
      local_550 = local_528;
      local_548 = 0;
      local_560 = local_538;
      uStack_55c = uStack_534;
      uStack_558 = uStack_530;
      uStack_554 = uStack_52c;
      local_540 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_548,&local_520);
      *local_5f8 = (longlong)&PTR_FUN_144fb1a98;
      FWeakObjectPtr::operator=(local_5f8 + 1,param_1);
      local_5f8[2] = (longlong)FUN_1420ee3a0;
      *(undefined4 *)(local_5f8 + 3) = local_560;
      *(undefined4 *)((longlong)local_5f8 + 0x1c) = uStack_55c;
      *(undefined4 *)(local_5f8 + 4) = uStack_558;
      *(undefined4 *)((longlong)local_5f8 + 0x24) = uStack_554;
      *(undefined1 *)(local_5f8 + 5) = local_550;
      local_5f8[6] = 0;
      *(undefined4 *)(local_5f8 + 7) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(local_5f8 + 6,&local_548);
      lVar13 = FDelegateHandle::GenerateNewID();
      local_5f8[8] = lVar13;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_548);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_520);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar16 + 6);
    local_3f8 = 0;
    local_3e0 = 1;
    local_3d8 = 0;
    local_3d0 = 0;
    local_408 = 0x3f800000;
    uStack_404 = 0;
    uStack_400 = 0x3f800000;
    uStack_3fc = 0x3f800000;
    local_3f0 = 0;
    plStack_3e8 = (longlong *)0x0;
    if (local_5f8 != (longlong *)0x0) {
      (**(code **)(*local_5f8 + 0x30))(local_5f8,&local_3d8);
    }
    puVar16 = &local_408;
    bVar12 = true;
    bVar11 = true;
    bVar6 = false;
  }
  local_438 = *(undefined1 *)(puVar16 + 4);
  local_430 = *(undefined8 *)(puVar16 + 6);
  local_428 = *(longlong **)(puVar16 + 8);
  local_448 = *puVar16;
  uStack_444 = puVar16[1];
  uStack_440 = puVar16[2];
  uStack_43c = puVar16[3];
  if (local_428 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_428 + 1) = (int)local_428[1] + 1;
    UNLOCK();
  }
  local_420 = *(undefined1 *)(puVar16 + 10);
  local_418 = 0;
  local_410 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_418,puVar16 + 0xc);
  if ((bVar6) &&
     (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_458), plVar5 = plStack_468,
     plStack_468 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_468 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_468)(plStack_468);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_468 + 8))(plStack_468,1);
      }
    }
  }
  if ((bVar11) &&
     (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3d8), plVar5 = plStack_3e8,
     plStack_3e8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_3e8 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_3e8)(plStack_3e8);
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
  if (bVar12) {
    if (local_5f0 != 0) {
      if (local_5f8 == (longlong *)0x0) goto LAB_142138df5;
      (**(code **)(*local_5f8 + 0x28))(local_5f8,0);
      local_5f8 = (longlong *)FMemory::Realloc(local_5f8,0,0);
    }
    if (local_5f8 != (longlong *)0x0) {
      FMemory::Free(local_5f8);
    }
  }
LAB_142138df5:
  if (((*(longlong *)(param_1 + 0x1e0) == 0) ||
      (lVar13 = FWeakObjectPtr::Get(param_1 + 0x1d8), lVar13 == 0)) ||
     (lVar13 = UObject::FindFunction(lVar13,*(undefined8 *)(param_1 + 0x1e0)), lVar13 == 0)) {
    lVar13 = param_1 + 0x150;
    FUN_14080bc50(local_288,lVar13);
    local_200 = 1;
    local_1f8 = 0;
    local_1f0 = 0;
    uVar14 = FUN_1420f8790(local_288);
    FUN_1406922e0(lVar13,uVar14);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f8);
    FSlateBrush::~FSlateBrush(local_288);
    puVar15 = &local_498;
    local_498 = 0;
    local_490 = 0;
    bVar11 = false;
    bVar6 = true;
    local_4a0 = 1;
    local_4a8 = lVar13;
  }
  else {
    local_res20 = *(undefined8 *)(param_1 + 0x1e0);
    uVar14 = FWeakObjectPtr::Get(param_1 + 0x1d8);
    lVar13 = FUN_1420c4510(local_f8,uVar14,&local_res20);
    FUN_14080bc50(local_350,lVar13);
    local_2c8 = *(undefined1 *)(lVar13 + 0x88);
    pplVar3 = (longlong **)(lVar13 + 0x90);
    local_2c0 = (longlong *)0x0;
    local_2b8 = 0;
    if (((pplVar3 != &local_2c0) && (*(int *)(lVar13 + 0x98) != 0)) &&
       (plVar5 = *pplVar3, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_2c0);
    }
    bVar11 = true;
    bVar6 = false;
    local_5e8 = (longlong *)FMemory::Realloc(0,0xc0,0);
    if (local_5e8 != (longlong *)0x0) {
      FUN_14080bc50(local_1e8,local_350);
      local_160 = local_2c8;
      local_158 = 0;
      local_150 = 0;
      if ((local_2b8 != 0) && (local_2c0 != (longlong *)0x0)) {
        (**(code **)(*local_2c0 + 0x30))(local_2c0,&local_158);
      }
      FUN_1420cd1c0(local_5e8,param_1,UBorder::ConvertImage,local_1e8);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2c0);
    FSlateBrush::~FSlateBrush(local_350);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(pplVar3);
    FSlateBrush::~FSlateBrush();
    local_5c8 = 0;
    local_5c0 = 0;
    if (local_5e8 != (longlong *)0x0) {
      (**(code **)(*local_5e8 + 0x30))(local_5e8,&local_5c8);
    }
    lVar13 = 0;
    puVar15 = &local_5c8;
    local_5e0 = 0xc;
  }
  local_4c0 = 1;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4c8 = lVar13;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_4b8,puVar15);
  if (bVar6) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_498);
  }
  if (bVar11) {
    if (local_5e0 != 0) {
      if (local_5e8 == (longlong *)0x0) goto LAB_1421390e6;
      (**(code **)(*local_5e8 + 0x28))(local_5e8,0);
      local_5e8 = (longlong *)FMemory::Realloc(local_5e8,0,0);
    }
    if (local_5e8 != (longlong *)0x0) {
      FMemory::Free(local_5e8);
    }
  }
LAB_1421390e6:
  local_3a0 = *(undefined4 *)(param_1 + 0x140);
  uStack_39c = *(undefined4 *)(param_1 + 0x144);
  uStack_398 = *(undefined4 *)(param_1 + 0x148);
  uStack_394 = *(undefined4 *)(param_1 + 0x14c);
  local_390 = 1;
  local_388 = 0;
  local_380 = 0;
  SBorder::SetPadding(*(undefined8 *)(param_1 + 0x250),&local_3a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_388);
  FUN_1419a0580(*(undefined8 *)(param_1 + 0x250),&local_448);
  lVar13 = *(longlong *)(param_1 + 0x250);
  *(undefined4 *)(lVar13 + 0x288) = local_510;
  *(undefined4 *)(lVar13 + 0x28c) = uStack_50c;
  *(undefined4 *)(lVar13 + 0x290) = uStack_508;
  *(undefined4 *)(lVar13 + 0x294) = uStack_504;
  *(undefined1 *)(lVar13 + 0x298) = local_500;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x2a0,&local_4f8);
  FUN_1419a06c0(*(undefined8 *)(param_1 + 0x250),&local_4c8);
  local_4e8 = *(undefined4 *)(param_1 + 0x208);
  local_4e4 = *(undefined4 *)(param_1 + 0x20c);
  local_4e0 = 1;
  local_4d8 = 0;
  local_4d0 = 0;
  FUN_1419a1c40(*(undefined8 *)(param_1 + 0x250),&local_4e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4d8);
  local_578[0] = *(byte *)(param_1 + 0x11a) & 1;
  local_578[1] = 1;
  local_570 = 0;
  local_568 = 0;
  SBorder::SetShowEffectWhenDisabled(*(undefined8 *)(param_1 + 0x250),local_578);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_570);
  local_5b8 = 0;
  local_5b0 = 0;
  puVar15 = (undefined8 *)operator_new(0x28,&local_5b8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144fb1b18;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    puVar15[2] = FUN_142102ad0;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar15[4] = uVar14;
  }
  FUN_14185b0f0(*(undefined8 *)(param_1 + 0x250),&local_5b8);
  local_5a8 = 0;
  local_5a0 = 0;
  puVar15 = (undefined8 *)operator_new(0x28,&local_5a8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144fb1b18;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    puVar15[2] = UBorder::HandleMouseButtonDown;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar15[4] = uVar14;
  }
  FUN_14185b130(*(undefined8 *)(param_1 + 0x250),&local_5a8);
  local_598 = 0;
  local_590 = 0;
  puVar15 = (undefined8 *)operator_new(0x28,&local_598);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144fb1b18;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    puVar15[2] = UBorder::HandleMouseButtonUp;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar15[4] = uVar14;
  }
  FUN_14185b1b0(*(undefined8 *)(param_1 + 0x250),&local_598);
  local_588 = 0;
  local_580 = 0;
  puVar15 = (undefined8 *)operator_new(0x28,&local_588);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_144fb1b18;
    FWeakObjectPtr::operator=(puVar15 + 1,param_1);
    puVar15[2] = UBorder::HandleMouseMove;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar15[4] = uVar14;
  }
  FUN_14185b170(*(undefined8 *)(param_1 + 0x250),&local_588);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
  plVar5 = local_428;
  if (local_428 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_428 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_428)(local_428);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4f8);
  return;
}



// FUNCTION 1421393c0 FUN_1421393c0 body=167 status=ok
// SIG undefined FUN_1421393c0(void)

void FUN_1421393c0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(lVar2 + 0x140) = uVar3;
    *(undefined4 *)(lVar2 + 0x144) = uVar4;
    *(undefined4 *)(lVar2 + 0x148) = uVar5;
    *(undefined4 *)(lVar2 + 0x14c) = uVar6;
    if (*(longlong *)(lVar2 + 0x250) != 0) {
      local_28 = 1;
      local_20 = 0;
      local_18 = 0;
      local_38 = uVar3;
      uStack_34 = uVar4;
      uStack_30 = uVar5;
      uStack_2c = uVar6;
      SBorder::SetPadding(*(longlong *)(lVar2 + 0x250),&local_38);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)(lVar2 + 0x118) = uVar1;
    lVar2 = *(longlong *)(lVar2 + 0x250);
    if (lVar2 != 0) {
      FUN_1419a2980(lVar2,uVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)(lVar2 + 0x119) = uVar1;
    lVar2 = *(longlong *)(lVar2 + 0x250);
    if (lVar2 != 0) {
      FUN_1419a50d0(lVar2,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142139470 FUN_142139470 body=240 status=ok
// SIG undefined FUN_142139470(void)

void FUN_142139470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_14213dc10();
  lVar4 = *(longlong *)(param_1 + 0x410);
  uVar5 = *(undefined4 *)(param_1 + 0x398);
  uVar6 = *(undefined4 *)(param_1 + 0x39c);
  uVar7 = *(undefined4 *)(param_1 + 0x3a0);
  uVar8 = *(undefined4 *)(param_1 + 0x3a4);
  local_60 = 0;
  *(undefined4 *)(lVar4 + 0x288) = uVar5;
  *(undefined4 *)(lVar4 + 0x28c) = uVar6;
  *(undefined4 *)(lVar4 + 0x290) = uVar7;
  *(undefined4 *)(lVar4 + 0x294) = uVar8;
  *(undefined1 *)(lVar4 + 0x298) = 1;
  local_58 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            (lVar4 + 0x2a0,&local_60,param_3,param_4,uVar5,uVar7,1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  local_50 = *(undefined4 *)(param_1 + 0x3a8);
  uStack_4c = *(undefined4 *)(param_1 + 0x3ac);
  uStack_48 = *(undefined4 *)(param_1 + 0x3b0);
  uStack_44 = *(undefined4 *)(param_1 + 0x3b4);
  local_40 = 0;
  local_28 = 1;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_20 = 0;
  local_18 = 0;
  FUN_1419a0580(*(undefined8 *)(param_1 + 0x410),&local_50);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142139560 SynchronizeProperties body=110 status=ok
// SIG undefined SynchronizeProperties(void)

void UUGMenuItemContainerSlot::SynchronizeProperties(longlong param_1)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x38);
    uStack_34 = *(undefined4 *)(param_1 + 0x3c);
    uStack_30 = *(undefined4 *)(param_1 + 0x40);
    uStack_2c = *(undefined4 *)(param_1 + 0x44);
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SButton::SetContentPadding(*(longlong *)(param_1 + 0x50),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1419a2980(*(longlong *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x48));
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1419a50d0(*(longlong *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x49));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1421395d0 SynchronizeProperties body=369 status=ok
// SIG undefined SynchronizeProperties(void)

void UCanvasPanelSlot::SynchronizeProperties
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  lVar8 = *(longlong *)(param_1 + 0x68);
  lVar9 = 0;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x20) = uVar1;
    *(undefined4 *)(lVar8 + 0x24) = uVar2;
    *(undefined4 *)(lVar8 + 0x28) = uVar5;
    *(undefined4 *)(lVar8 + 0x2c) = uVar6;
    *(undefined1 *)(lVar8 + 0x30) = 1;
    local_28 = CONCAT71(local_28._1_7_,1);
    local_20 = 0;
    local_18 = 0;
    uStack_30 = uVar7;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x38,&local_20,param_3,param_4,uVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    lVar9 = *(longlong *)(param_1 + 0x68);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  uVar6 = *(undefined4 *)(param_1 + 0x54);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  lVar8 = 0;
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x48) = uVar1;
    *(undefined4 *)(lVar9 + 0x4c) = uVar2;
    *(undefined4 *)(lVar9 + 0x50) = uVar5;
    *(undefined4 *)(lVar9 + 0x54) = uVar6;
    *(undefined1 *)(lVar9 + 0x58) = 1;
    local_28 = CONCAT71(local_28._1_7_,1);
    local_20 = 0;
    local_18 = 0;
    uStack_30 = uVar7;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x60,&local_20,param_3,param_4,uVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    lVar8 = *(longlong *)(param_1 + 0x68);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  lVar9 = 0;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x70) = uVar1;
    *(undefined4 *)(lVar8 + 0x74) = uVar2;
    *(undefined1 *)(lVar8 + 0x78) = 1;
    uStack_30 = CONCAT71(uStack_30._1_7_,1);
    local_28 = 0;
    local_20 = local_20 & 0xffffffff00000000;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_28,param_3,param_4,uVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    lVar9 = *(longlong *)(param_1 + 0x68);
  }
  uVar3 = *(undefined1 *)(param_1 + 0x60);
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0x90) = uVar3;
    *(undefined1 *)(lVar9 + 0x91) = 1;
    uStack_30 = 0;
    local_28 = local_28 & 0xffffffff00000000;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar9 + 0x98,&uStack_30,param_3,param_4,CONCAT11(1,uVar3));
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_30);
    lVar8 = *(longlong *)(param_1 + 0x68);
    if (lVar8 != 0) {
      iVar4 = *(int *)(param_1 + 100);
      *(undefined1 *)(lVar8 + 0xac) = 1;
      uStack_30 = 0;
      local_28 = local_28 & 0xffffffff00000000;
      *(float *)(lVar8 + 0xa8) = (float)iVar4;
      TBaseDelegate<FSlateBrush_const_*>::operator=
                (lVar8 + 0xb0,&uStack_30,param_3,param_4,(float)iVar4);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_30);
    }
  }
  return;
}



// FUNCTION 142139750 SynchronizeProperties body=305 status=ok
// SIG undefined SynchronizeProperties(void)

void UCheckBox::SynchronizeProperties(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res8;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  FUN_14213dc10();
  FUN_141959ed0(*(undefined8 *)(param_1 + 0x758),param_1 + 0x130);
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x120);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x128));
      if (lVar1 != 0) {
        local_res8 = *(undefined8 *)(param_1 + 0x128);
        uVar2 = FWeakObjectPtr::Get(param_1 + 0x120);
        puVar3 = (undefined1 *)FUN_1420c48a0(local_28,uVar2,&local_res8);
        local_58 = *puVar3;
        iVar5 = 1;
        iVar4 = 0;
        goto LAB_14213981b;
      }
    }
  }
  local_58 = *(undefined1 *)(param_1 + 0x118);
  puVar3 = &local_40;
  local_3f = 1;
  iVar4 = 2;
  local_38 = 0;
  local_30 = 0;
  iVar5 = 0;
  local_40 = local_58;
LAB_14213981b:
  local_57 = puVar3[1];
  local_50 = 0;
  local_48 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_50,puVar3 + 8);
  FUN_141957130(*(undefined8 *)(param_1 + 0x758),&local_58);
  if (iVar4 != 0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  }
  if (iVar5 != 0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_20);
  }
  return;
}



// FUNCTION 142139890 FUN_142139890 body=306 status=ok
// SIG undefined FUN_142139890(void)

void FUN_142139890(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  float fVar9;
  
  FUN_14213dc10();
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 < 1) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0x19;
    if (iVar1 < 0x19) {
      iVar8 = iVar1;
    }
  }
  UCharacterMovementComponent::SetAvoidanceGroupMask(*(undefined8 *)(param_1 + 0x1a8),iVar8);
  fVar9 = 1e-08;
  if (1e-08 <= *(float *)(param_1 + 0x104)) {
    fVar9 = *(float *)(param_1 + 0x104);
  }
  FUN_141959620(*(undefined8 *)(param_1 + 0x1a8),fVar9);
  UCharacterMovementComponent::SetRVOAvoidanceWeight
            (*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x108));
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  if (lVar2 == 0) {
    return;
  }
  lVar6 = UCanvasPanelSlot::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar6 = *(longlong *)(lVar2 + 0x68);
    if (lVar6 == 0) {
      cVar4 = *(char *)(lVar2 + 0x60);
    }
    else {
      if (((*(int *)(lVar6 + 0xa0) == 0) || (*(longlong **)(lVar6 + 0x98) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x98) + 0x18))(), cVar4 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(int *)(lVar6 + 0xa0) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(lVar6 + 0x98);
        }
        uVar5 = (**(code **)(*plVar7 + 0x38))();
        *(undefined1 *)(lVar6 + 0x90) = uVar5;
      }
      cVar4 = *(char *)(lVar6 + 0x90);
    }
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x1a0) = 0;
    }
    return;
  }
  return;
}



// FUNCTION 1421399e0 FUN_1421399e0 body=1248 status=ok
// SIG undefined FUN_1421399e0(void)

void FUN_1421399e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170;
  undefined1 local_16f;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_48 [16];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14213dc10();
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x120) == 0) {
LAB_142139a77:
    FText::FText(local_f8,param_1 + 0x100);
    local_e0 = 1;
    puVar8 = local_f8;
    local_d8 = 0;
    bVar5 = false;
    bVar4 = true;
    local_d0 = 0;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x118);
    if (lVar6 == 0) goto LAB_142139a77;
    lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x120));
    if (lVar6 == 0) goto LAB_142139a77;
    local_1e0 = *(undefined8 *)(param_1 + 0x120);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x118);
    puVar8 = (undefined1 *)FUN_1420c47a0(local_98,uVar7,&local_1e0);
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(local_128,puVar8);
  local_110 = puVar8[0x18];
  local_108 = 0;
  local_100 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_108,puVar8 + 0x20);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x140);
    if (lVar6 != 0) {
      lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x148));
      if (lVar6 != 0) {
        local_1d8 = *(undefined8 *)(param_1 + 0x148);
        uVar9 = FWeakObjectPtr::Get(param_1 + 0x140);
        puVar8 = (undefined1 *)FUN_1420c47a0(local_68,uVar9,&local_1d8,param_4,uVar7);
        bVar5 = true;
        bVar4 = false;
        goto LAB_142139bf2;
      }
    }
  }
  FText::FText(local_c8,param_1 + 0x128);
  local_b0 = 1;
  puVar8 = local_c8;
  local_a8 = 0;
  bVar5 = false;
  bVar4 = true;
  local_a0 = 0;
LAB_142139bf2:
  FText::FText(local_158,puVar8);
  local_140 = puVar8[0x18];
  local_138 = 0;
  local_130 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_138,puVar8 + 0x20);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_48);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  FUN_14195a190(*(undefined8 *)(param_1 + 0x438),local_128);
  FUN_141956f80(*(undefined8 *)(param_1 + 0x438),local_158);
  local_1a0 = *(undefined1 *)(param_1 + 0x400);
  local_19f = 1;
  local_198 = 0;
  local_190 = 0;
  FUN_141958980(*(undefined8 *)(param_1 + 0x438),&local_1a0);
  local_188 = *(undefined1 *)(param_1 + 0x401);
  local_187 = 1;
  local_180 = 0;
  local_178 = 0;
  FUN_141958870(*(undefined8 *)(param_1 + 0x438),&local_188);
  local_1d0 = *(undefined1 *)(param_1 + 0x40d);
  local_1cf = 1;
  local_1c8 = 0;
  local_1c0 = 0;
  FUN_141956090(*(undefined8 *)(param_1 + 0x438),&local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c8);
  local_170 = *(undefined1 *)(param_1 + 0x410);
  local_16f = 1;
  local_168 = 0;
  local_160 = 0;
  FUN_14195a3a0(*(undefined8 *)(param_1 + 0x438),&local_170);
  local_1b8 = (uint)*(byte *)(param_1 + 0x411);
  local_1b4 = 1;
  local_1b0 = 0;
  local_1a8 = 0;
  FUN_141958b90(*(undefined8 *)(param_1 + 0x438),&local_1b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b0);
  uVar7 = *(undefined8 *)(param_1 + 0x438);
  if ((*(byte *)(param_1 + 0x412) & 1) == 0) {
    local_res18._1_1_ = 0;
    puVar10 = &local_res18;
  }
  else {
    puVar10 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x413));
  }
  FUN_14195a300(uVar7,puVar10);
  if ((*(byte *)(param_1 + 0x412) & 2) == 0) {
    local_res21 = 0;
    puVar8 = &local_res20;
  }
  else {
    local_res10 = *(undefined1 *)(param_1 + 0x414);
    puVar8 = &local_res10;
    local_res11 = 1;
  }
  FUN_14195a250(uVar7,puVar8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_138);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  return;
}



// FUNCTION 142139ec0 FUN_142139ec0 body=1607 status=ok
// SIG undefined FUN_142139ec0(void)

void FUN_142139ec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_248;
  undefined1 local_247;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 local_230;
  undefined1 local_22f;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_218;
  undefined1 local_217;
  undefined8 local_210;
  undefined4 local_208;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined8 local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170;
  undefined1 local_16f;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_48 [16];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14213dc10();
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x120) == 0) {
LAB_142139f5a:
    FText::FText(local_f8,param_1 + 0x100);
    local_e0 = 1;
    puVar8 = local_f8;
    local_d8 = 0;
    bVar5 = false;
    bVar4 = true;
    local_d0 = 0;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x118);
    if (lVar6 == 0) goto LAB_142139f5a;
    lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x120));
    if (lVar6 == 0) goto LAB_142139f5a;
    local_270 = *(undefined8 *)(param_1 + 0x120);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x118);
    puVar8 = (undefined1 *)FUN_1420c47a0(local_98,uVar7,&local_270);
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(local_128,puVar8);
  local_110 = puVar8[0x18];
  local_108 = 0;
  local_100 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_108,puVar8 + 0x20);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x940) != 0) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x938);
    if (lVar6 != 0) {
      lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x940));
      if (lVar6 != 0) {
        local_268 = *(undefined8 *)(param_1 + 0x940);
        uVar9 = FWeakObjectPtr::Get(param_1 + 0x938);
        puVar8 = (undefined1 *)FUN_1420c47a0(local_68,uVar9,&local_268,param_4,uVar7);
        bVar5 = true;
        bVar4 = false;
        goto LAB_14213a108;
      }
    }
  }
  FText::FText(local_c8,param_1 + 0x920);
  local_b0 = 1;
  puVar8 = local_c8;
  local_a8 = 0;
  bVar5 = false;
  bVar4 = true;
  local_a0 = 0;
LAB_14213a108:
  FText::FText(local_158,puVar8);
  local_140 = puVar8[0x18];
  local_138 = 0;
  local_130 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_138,puVar8 + 0x20);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_48);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  FUN_141959f70(*(undefined8 *)(param_1 + 0xa10),param_1 + 0x128);
  FUN_14195a1a0(*(undefined8 *)(param_1 + 0xa10),local_128);
  FUN_141956f90(*(undefined8 *)(param_1 + 0xa10),local_158);
  local_1b8 = *(undefined1 *)(param_1 + 0x9c8);
  local_1b7 = 1;
  local_1b0 = 0;
  local_1a8 = 0;
  FUN_1419589c0(*(undefined8 *)(param_1 + 0xa10),&local_1b8);
  local_1a0 = *(undefined1 *)(param_1 + 0x9c9);
  local_19f = 1;
  local_198 = 0;
  local_190 = 0;
  FUN_1419588e0(*(undefined8 *)(param_1 + 0xa10),&local_1a0);
  local_260 = *(undefined4 *)(param_1 + 0x9cc);
  local_25c = 1;
  local_258 = 0;
  local_250 = 0;
  FUN_1419594d0(*(undefined8 *)(param_1 + 0xa10),&local_260);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_258);
  local_248 = *(undefined1 *)(param_1 + 0x9e0);
  local_247 = 1;
  local_240 = 0;
  local_238 = 0;
  FUN_141957100(*(undefined8 *)(param_1 + 0xa10),&local_248);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_240);
  local_230 = *(undefined1 *)(param_1 + 0x9e1);
  local_22f = 1;
  local_228 = 0;
  local_220 = 0;
  FUN_141959850(*(undefined8 *)(param_1 + 0xa10),&local_230);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_228);
  local_218 = *(undefined1 *)(param_1 + 0x9e2);
  local_217 = 1;
  local_210 = 0;
  local_208 = 0;
  FUN_141959650(*(undefined8 *)(param_1 + 0xa10),&local_218);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_210);
  local_200 = *(undefined1 *)(param_1 + 0x9e3);
  local_1ff = 1;
  local_1f8 = 0;
  local_1f0 = 0;
  FUN_141956220(*(undefined8 *)(param_1 + 0xa10),&local_200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f8);
  local_1e8 = *(undefined1 *)(param_1 + 0x9e4);
  local_1e7 = 1;
  local_1e0 = 0;
  local_1d8 = 0;
  FUN_141959820(*(undefined8 *)(param_1 + 0xa10),&local_1e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e0);
  local_188 = *(undefined1 *)(param_1 + 0x9e5);
  local_187 = 1;
  local_180 = 0;
  local_178 = 0;
  FUN_1419560c0(*(undefined8 *)(param_1 + 0xa10),&local_188);
  local_170 = *(undefined1 *)(param_1 + 0x9e8);
  local_16f = 1;
  local_168 = 0;
  local_160 = 0;
  FUN_14195a3e0(*(undefined8 *)(param_1 + 0xa10),&local_170);
  local_1d0 = (uint)*(byte *)(param_1 + 0x9e9);
  local_1cc = 1;
  local_1c8 = 0;
  local_1c0 = 0;
  FUN_141958ba0(*(undefined8 *)(param_1 + 0xa10),&local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c8);
  uVar7 = *(undefined8 *)(param_1 + 0xa10);
  if ((*(byte *)(param_1 + 0x9ea) & 1) == 0) {
    local_res18._1_1_ = 0;
    puVar10 = &local_res18;
  }
  else {
    puVar10 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x9eb));
  }
  FUN_14195a310(uVar7,puVar10);
  if ((*(byte *)(param_1 + 0x9ea) & 2) == 0) {
    local_res21 = 0;
    puVar8 = &local_res20;
  }
  else {
    local_res10 = *(undefined1 *)(param_1 + 0x9ec);
    puVar8 = &local_res10;
    local_res11 = 1;
  }
  FUN_14195a260(uVar7,puVar8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_138);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  return;
}



// FUNCTION 14213a510 SynchronizeProperties body=43 status=ok
// SIG undefined SynchronizeProperties(void)

void UExpandableArea::SynchronizeProperties(longlong param_1)

{
  FUN_14213dc10();
                    /* WARNING: Could not recover jumptable at 0x00014213a534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 800) + 0x210))
            (*(longlong **)(param_1 + 800),*(undefined1 *)(param_1 + 0x2d8));
  return;
}



// FUNCTION 14213a540 SynchronizeProperties body=256 status=ok
// SIG undefined SynchronizeProperties(void)

void UGridPanel::SynchronizeProperties(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_14213dc10();
  SGridPanel::ClearFill(*(undefined8 *)(param_1 + 0x138));
  uVar1 = 0;
  uVar2 = uVar1;
  uVar4 = uVar1;
  if (0 < *(int *)(param_1 + 0x120)) {
    do {
      local_28 = *(undefined4 *)(uVar2 + *(longlong *)(param_1 + 0x118));
      local_24 = 1;
      local_20 = 0;
      local_18 = 0;
      SGridPanel::SetColumnFill(*(undefined8 *)(param_1 + 0x138),uVar4,&local_28);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 4;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x120));
  }
  uVar2 = uVar1;
  if (0 < *(int *)(param_1 + 0x130)) {
    do {
      local_28 = *(undefined4 *)(uVar1 + *(longlong *)(param_1 + 0x128));
      local_24 = 1;
      local_20 = 0;
      local_18 = 0;
      SGridPanel::SetRowFill(*(undefined8 *)(param_1 + 0x138),uVar2,&local_28);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
      uVar3 = (int)uVar2 + 1;
      uVar1 = uVar1 + 4;
      uVar2 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x130));
  }
  return;
}



// FUNCTION 14213a640 FUN_14213a640 body=730 status=ok
// SIG undefined FUN_14213a640(void)

void FUN_14213a640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(uint *)(*(longlong *)(param_1 + 0x68) + 0x20) = (uint)*(byte *)(param_1 + 0x48);
    lVar8 = 0;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x68) + 0x24) = (uint)*(byte *)(param_1 + 0x49);
      lVar8 = *(longlong *)(param_1 + 0x68);
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  plVar11 = (longlong *)0x0;
  lVar9 = 0;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x28) = uVar2;
    *(undefined4 *)(lVar8 + 0x2c) = uVar4;
    *(undefined4 *)(lVar8 + 0x30) = uVar5;
    *(undefined4 *)(lVar8 + 0x34) = uVar6;
    *(undefined1 *)(lVar8 + 0x38) = 1;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar8 + 0x40,&local_20,param_3,param_4,uVar2,uVar5,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    lVar9 = *(longlong *)(param_1 + 0x68);
  }
  if (lVar9 != 0) {
    iVar7 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < 1) {
      iVar7 = 0;
    }
    *(int *)(lVar9 + 0x68) = iVar7;
    if ((*(longlong *)(lVar9 + 0x50) != 0) && (*(longlong *)(lVar9 + 0x58) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x58) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        plVar3 = *(longlong **)(lVar9 + 0x58);
        plVar10 = plVar3;
        plVar12 = plVar11;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar7 = (int)plVar3[1];
          bVar13 = iVar7 == 0;
          if (bVar13) {
            *(int *)(plVar3 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          while (plVar10 = plVar11, !bVar13) {
            LOCK();
            bVar13 = iVar7 == (int)plVar3[1];
            if (bVar13) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
            }
            UNLOCK();
            if (bVar13) {
              plVar10 = plVar3;
              plVar12 = (longlong *)0x0;
              if (plVar3 != (longlong *)0x0) {
                plVar12 = *(longlong **)(lVar9 + 0x50);
              }
              break;
            }
            LOCK();
            iVar7 = (int)plVar3[1];
            bVar13 = iVar7 == 0;
            if (bVar13) {
              *(int *)(plVar3 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
          }
        }
        SGridPanel::NotifySlotChanged(plVar12);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar10 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
    }
  }
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14212db50(*(longlong *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x50));
    lVar8 = *(longlong *)(param_1 + 0x68);
  }
  iVar7 = *(int *)(param_1 + 0x54);
  if (lVar8 != 0) {
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    *(int *)(lVar8 + 0x60) = iVar7;
    if ((*(longlong *)(lVar8 + 0x50) != 0) && (*(longlong *)(lVar8 + 0x58) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar8 + 0x58) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        plVar3 = *(longlong **)(lVar8 + 0x58);
        plVar10 = plVar3;
        plVar12 = plVar11;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar7 = (int)plVar3[1];
          bVar13 = iVar7 == 0;
          if (bVar13) {
            *(int *)(plVar3 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          while (plVar10 = plVar11, !bVar13) {
            LOCK();
            bVar13 = iVar7 == (int)plVar3[1];
            if (bVar13) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
            }
            UNLOCK();
            if (bVar13) {
              plVar10 = plVar3;
              plVar12 = (longlong *)0x0;
              if (plVar3 != (longlong *)0x0) {
                plVar12 = *(longlong **)(lVar8 + 0x50);
              }
              break;
            }
            LOCK();
            iVar7 = (int)plVar3[1];
            bVar13 = iVar7 == 0;
            if (bVar13) {
              *(int *)(plVar3 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
          }
        }
        SGridPanel::NotifySlotChanged(plVar12,lVar8);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar10 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
    }
  }
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1420e7d30(*(longlong *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x58));
    lVar8 = *(longlong *)(param_1 + 0x68);
  }
  uVar2 = *(undefined4 *)(param_1 + 100);
  lVar9 = 0;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x74) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(lVar8 + 0x78) = uVar2;
    lVar9 = *(longlong *)(param_1 + 0x68);
  }
  if (((lVar9 != 0) &&
      (*(undefined4 *)(lVar9 + 0x70) = *(undefined4 *)(param_1 + 0x5c),
      *(longlong *)(lVar9 + 0x50) != 0)) && (*(longlong *)(lVar9 + 0x58) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar9 + 0x58) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      plVar3 = *(longlong **)(lVar9 + 0x58);
      plVar10 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar13 = iVar7 == 0;
        if (bVar13) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar10 = plVar11, !bVar13) {
          LOCK();
          bVar13 = iVar7 == (int)plVar3[1];
          if (bVar13) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar13) {
            plVar10 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar11 = *(longlong **)(lVar9 + 0x50);
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar3[1];
          bVar13 = iVar7 == 0;
          if (bVar13) {
            *(int *)(plVar3 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      SGridPanel::NotifySlotChanged(plVar11,lVar9);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14213a920 SynchronizeProperties body=212 status=ok
// SIG undefined SynchronizeProperties(void)

void UHorizontalBoxSlot::SynchronizeProperties(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x58) = 1;
    *(undefined4 *)(lVar6 + 0x48) = uVar1;
    *(undefined4 *)(lVar6 + 0x4c) = uVar2;
    *(undefined4 *)(lVar6 + 0x50) = uVar3;
    *(undefined4 *)(lVar6 + 0x54) = uVar4;
    local_20 = 0;
    local_18 = 0;
    local_28[0] = 1;
    local_38 = uVar1;
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x60,&local_20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  local_resc = *(undefined1 *)(param_1 + 0x4c);
  local_res8 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = local_res8;
  *(undefined1 *)(param_1 + 0x4c) = local_resc;
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    puVar5 = (undefined4 *)UWidget::ConvertSerializedSizeParamToRuntime(&local_38,&local_res8);
    lVar6 = *(longlong *)(param_1 + 0x58);
    *(undefined4 *)(lVar6 + 0x28) = *puVar5;
    *(undefined4 *)(lVar6 + 0x30) = puVar5[2];
    *(undefined1 *)(lVar6 + 0x34) = *(undefined1 *)(puVar5 + 3);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x38,puVar5 + 4);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  lVar7 = 0;
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(param_1 + 0x50);
    lVar7 = *(longlong *)(param_1 + 0x58);
  }
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x21) = *(undefined1 *)(param_1 + 0x51);
  }
  return;
}



// FUNCTION 14213aa00 FUN_14213aa00 body=1415 status=ok
// SIG undefined FUN_14213aa00(void)

void FUN_14213aa00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong *local_418;
  int local_410;
  undefined8 local_3f8;
  undefined4 local_3f0;
  longlong local_3e8;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  longlong local_3b8;
  undefined1 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  longlong local_398;
  undefined1 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368;
  undefined8 local_360;
  longlong *plStack_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined1 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined1 local_2f8 [136];
  undefined1 local_270;
  longlong *local_268;
  int local_260;
  undefined1 local_258 [32];
  longlong *local_238;
  undefined1 local_228 [16];
  undefined1 local_218 [136];
  undefined1 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [136];
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [160];
  
  FUN_14213dc10();
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
LAB_14213aaa2:
    local_368 = 0;
    puVar11 = &local_378;
    local_350 = 1;
    local_378 = *(undefined8 *)(param_1 + 0x198);
    uStack_370 = *(undefined8 *)(param_1 + 0x1a0);
    local_348 = 0;
    bVar7 = false;
    bVar6 = true;
    local_360 = 0;
    plStack_358 = (longlong *)0x0;
    local_340 = 0;
  }
  else {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x1a8);
    if (lVar9 == 0) goto LAB_14213aaa2;
    lVar9 = UObject::FindFunction(lVar9,*(undefined8 *)(param_1 + 0x1b0));
    if (lVar9 == 0) goto LAB_14213aaa2;
    local_res10 = *(undefined8 *)(param_1 + 0x1b0);
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x1a8);
    puVar11 = (undefined8 *)FUN_1420c4690(local_258,uVar10,&local_res10);
    bVar7 = true;
    bVar6 = false;
  }
  local_338 = *(undefined4 *)puVar11;
  uStack_334 = *(undefined4 *)((longlong)puVar11 + 4);
  uStack_330 = *(undefined4 *)(puVar11 + 1);
  uStack_32c = *(undefined4 *)((longlong)puVar11 + 0xc);
  local_328 = *(undefined1 *)(puVar11 + 2);
  local_320 = puVar11[3];
  local_318 = (longlong *)puVar11[4];
  if (local_318 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_318 + 1) = (int)local_318[1] + 1;
    UNLOCK();
  }
  local_310 = *(undefined1 *)(puVar11 + 5);
  local_308 = 0;
  local_300 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_308,puVar11 + 6);
  if (bVar6) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_348);
    plVar5 = plStack_358;
    if (plStack_358 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_358 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_358)(plStack_358);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_358 + 8))(plStack_358,1);
        }
      }
    }
  }
  if (bVar7) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_228);
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_238 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar2 = (int *)((longlong)local_238 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 400) == 0) {
LAB_14213ad78:
    lVar9 = param_1 + 0x100;
    FUN_14080bc50(local_218,lVar9);
    local_190 = 1;
    local_188 = 0;
    local_180 = 0;
    uVar10 = FUN_1420f8790(local_218);
    FUN_1406922e0(lVar9,uVar10);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_188);
    FSlateBrush::~FSlateBrush(local_218);
    puVar11 = &local_3a8;
    local_3a8 = 0;
    local_3a0 = 0;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
    local_3b0 = 1;
    local_3b8 = lVar9;
  }
  else {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x188);
    if (lVar9 == 0) goto LAB_14213ad78;
    lVar9 = UObject::FindFunction(lVar9,*(undefined8 *)(param_1 + 400));
    if (lVar9 == 0) goto LAB_14213ad78;
    local_res18 = *(undefined8 *)(param_1 + 400);
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x188);
    lVar9 = FUN_1420c4510(local_d8,uVar10,&local_res18);
    FUN_14080bc50(local_2f8,lVar9);
    local_270 = *(undefined1 *)(lVar9 + 0x88);
    pplVar3 = (longlong **)(lVar9 + 0x90);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    if (((pplVar3 != &local_268) && (*(int *)(lVar9 + 0x98) != 0)) &&
       (plVar5 = *pplVar3, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_268);
    }
    local_418 = (longlong *)FMemory::Realloc(0,0xc0,0);
    local_410 = 0xc;
    bVar8 = true;
    bVar7 = true;
    bVar6 = false;
    if (local_418 != (longlong *)0x0) {
      FUN_14080bc50(local_178,local_2f8);
      local_f0 = local_270;
      local_e8 = 0;
      local_e0 = 0;
      if ((local_260 != 0) && (local_268 != (longlong *)0x0)) {
        (**(code **)(*local_268 + 0x30))(local_268,&local_e8);
      }
      FUN_1420cd1c0(local_418,param_1,UImage::ConvertImage,local_178);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_268);
    FSlateBrush::~FSlateBrush(local_2f8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(pplVar3);
    FSlateBrush::~FSlateBrush();
    local_3f8 = 0;
    local_3f0 = 0;
    if (local_418 != (longlong *)0x0) {
      (**(code **)(*local_418 + 0x30))(local_418,&local_3f8);
    }
    lVar9 = 0;
    puVar11 = &local_3f8;
  }
  local_3e0 = 1;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3e8 = lVar9;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_3d8,puVar11);
  if (bVar6) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3a8);
  }
  if (bVar7) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3f8);
  }
  if (bVar8) {
    if (local_410 != 0) {
      if (local_418 == (longlong *)0x0) goto LAB_14213ae77;
      (**(code **)(*local_418 + 0x28))(local_418,0);
      local_418 = (longlong *)FMemory::Realloc(local_418,0,0);
    }
    if (local_418 != (longlong *)0x0) {
      FMemory::Free(local_418);
    }
  }
LAB_14213ae77:
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_398 = local_3e8;
    local_390 = local_3e0;
    local_388 = 0;
    local_380 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_388,&local_3d8);
    FUN_141956fc0(*(undefined8 *)(param_1 + 0x1c8),&local_398);
    SImage::SetColorAndOpacity(*(undefined8 *)(param_1 + 0x1c8),&local_338);
    local_3c8 = 0;
    local_3c0 = 0;
    puVar11 = (undefined8 *)operator_new(0x28,&local_3c8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_144fb1b18;
      FWeakObjectPtr::operator=(puVar11 + 1,param_1);
      puVar11[2] = FUN_142102c20;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar11[4] = uVar10;
    }
    FUN_141959520(*(undefined8 *)(param_1 + 0x1c8),&local_3c8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_308);
  plVar5 = local_318;
  if (local_318 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_318 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_318)(local_318);
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



// FUNCTION 14213af90 FUN_14213af90 body=554 status=ok
// SIG undefined FUN_14213af90(void)

void FUN_14213af90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [56];
  
  FUN_14213dc10();
  uVar3 = *(undefined8 *)(param_1 + 0x650);
  uVar5 = FUN_1420c17b0(local_40,param_1 + 0x558);
  FUN_141959880(uVar3,uVar5);
  local_98 = *(undefined4 *)(param_1 + 0x5c8);
  uStack_94 = *(undefined4 *)(param_1 + 0x5cc);
  uStack_90 = *(undefined4 *)(param_1 + 0x5d0);
  uStack_8c = *(undefined4 *)(param_1 + 0x5d4);
  local_88 = 1;
  local_80 = 0;
  local_78 = 0;
  SInputKeySelector::SetMargin(*(undefined8 *)(param_1 + 0x650),&local_98);
  SInputKeySelector::SetButtonStyle(*(undefined8 *)(param_1 + 0x650),param_1 + 0x100);
  FUN_14195a340(*(undefined8 *)(param_1 + 0x650),param_1 + 0x378);
  lVar9 = *(longlong *)(param_1 + 0x650);
  lVar6 = FText::FText(local_70,param_1 + 0x5e8);
  FText::operator=(lVar9 + 0x358,lVar6);
  plVar4 = *(longlong **)(lVar6 + 8);
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x650);
  lVar6 = FText::FText(local_58,param_1 + 0x600);
  FText::operator=(lVar9 + 0x370,lVar6);
  plVar4 = *(longlong **)(lVar6 + 8);
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  local_a8 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x650) + 0x388) = *(undefined1 *)(param_1 + 0x618);
  *(undefined1 *)(*(longlong *)(param_1 + 0x650) + 0x389) = *(undefined1 *)(param_1 + 0x619);
  iVar8 = *(int *)(param_1 + 0x628);
  lVar9 = *(longlong *)(param_1 + 0x620);
  local_a0 = iVar8;
  if (iVar8 == 0) {
    local_9c = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar8,0);
    lVar9 = lVar9 - local_a8;
    puVar7 = (undefined8 *)(local_a8 + 8);
    do {
      puVar7[-1] = *(undefined8 *)(lVar9 + -8 + (longlong)puVar7);
      *puVar7 = *(undefined8 *)(lVar9 + (longlong)puVar7);
      lVar6 = *(longlong *)(lVar9 + 8 + (longlong)puVar7);
      puVar7[1] = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      puVar7 = puVar7 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_142131410(*(undefined8 *)(param_1 + 0x650),&local_a8);
  return;
}



// FUNCTION 14213b1c0 FUN_14213b1c0 body=978 status=ok
// SIG undefined FUN_14213b1c0(void)

void FUN_14213b1c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulonglong local_res8;
  undefined1 local_188;
  undefined1 local_187;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170;
  undefined1 local_16f;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined1 local_13f;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_30 [24];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14213dc10();
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x150);
    if (lVar6 != 0) {
      lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x158));
      if (lVar6 != 0) {
        local_res8 = *(ulonglong *)(param_1 + 0x158);
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x150);
        puVar8 = (undefined1 *)FUN_1420c47a0(local_50,uVar7,&local_res8);
        bVar5 = true;
        bVar4 = false;
        goto LAB_14213b289;
      }
    }
  }
  FText::FText(local_b0,param_1 + 0x138);
  local_98 = 1;
  puVar8 = local_b0;
  local_90 = 0;
  bVar5 = false;
  bVar4 = true;
  local_88 = 0;
LAB_14213b289:
  FText::FText(local_e0,puVar8);
  local_c8 = puVar8[0x18];
  local_c0 = 0;
  local_b8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_c0,puVar8 + 0x20);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_90);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_30);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  FUN_1419bcf50(*(undefined8 *)(param_1 + 0x3c0),param_1 + 0x160);
  FText::FText(local_80,param_1 + 0x120);
  local_68 = 1;
  local_60 = 0;
  local_58 = 0;
  FUN_1419bcc10(*(undefined8 *)(param_1 + 0x3c0),local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  FUN_1419bc3c0(*(undefined8 *)(param_1 + 0x3c0),local_e0);
  local_188 = *(undefined1 *)(param_1 + 0x39c);
  local_187 = 1;
  local_180 = 0;
  local_178 = 0;
  FUN_1419bb980(*(undefined8 *)(param_1 + 0x3c0),&local_188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_180);
  local_170 = *(undefined1 *)(param_1 + 0x340);
  local_16f = 1;
  local_168 = 0;
  local_160 = 0;
  SMultiLineEditableText::SetClearTextSelectionOnFocusLoss
            (*(undefined8 *)(param_1 + 0x3c0),&local_170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_168);
  local_f8 = *(undefined1 *)(param_1 + 0x39e);
  local_f7 = 1;
  local_f0 = 0;
  local_e8 = 0;
  SMultiLineEditableText::SetVirtualKeyboardDismissAction
            (*(undefined8 *)(param_1 + 0x3c0),&local_f8);
  local_158 = *(undefined1 *)(param_1 + 0x398);
  local_157 = 1;
  local_150 = 0;
  local_148 = 0;
  SMultiLineEditableText::SetClearTextSelectionOnFocusLoss
            (*(undefined8 *)(param_1 + 0x3c0),&local_158);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_150);
  local_140 = *(undefined1 *)(param_1 + 0x399);
  local_13f = 1;
  local_138 = 0;
  local_130 = 0;
  SMultiLineEditableText::SetRevertTextOnEscape(*(undefined8 *)(param_1 + 0x3c0),&local_140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_138);
  local_128 = *(undefined1 *)(param_1 + 0x39a);
  local_127 = 1;
  local_120 = 0;
  local_118 = 0;
  SMultiLineEditableText::SetClearKeyboardFocusOnCommit(*(undefined8 *)(param_1 + 0x3c0),&local_128)
  ;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_120);
  local_110 = *(undefined1 *)(param_1 + 0x39b);
  local_10f = 1;
  local_108 = 0;
  local_100 = 0;
  SMultiLineEditableText::SetAllowContextMenu(*(undefined8 *)(param_1 + 0x3c0),&local_110);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
  FUN_1420cc020(param_1,*(undefined8 *)(param_1 + 0x3c0));
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c0);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  return;
}



// FUNCTION 14213b5a0 FUN_14213b5a0 body=771 status=ok
// SIG undefined FUN_14213b5a0(void)

void FUN_14213b5a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulonglong local_res8;
  undefined1 local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_30 [24];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14213dc10();
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x150);
    if (lVar6 != 0) {
      lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x158));
      if (lVar6 != 0) {
        local_res8 = *(ulonglong *)(param_1 + 0x158);
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x150);
        puVar8 = (undefined1 *)FUN_1420c47a0(local_50,uVar7,&local_res8);
        bVar5 = true;
        bVar4 = false;
        goto LAB_14213b65a;
      }
    }
  }
  FText::FText(local_b0,param_1 + 0x138);
  local_98 = 1;
  puVar8 = local_b0;
  local_90 = 0;
  bVar5 = false;
  bVar4 = true;
  local_88 = 0;
LAB_14213b65a:
  FText::FText(local_e0,puVar8);
  local_c8 = puVar8[0x18];
  local_c0 = 0;
  local_b8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_c0,puVar8 + 0x20);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_90);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_30);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  FUN_14195a020(*(undefined8 *)(param_1 + 0xbe0),param_1 + 0x160);
  FText::FText(local_80,param_1 + 0x120);
  local_68 = 1;
  local_60 = 0;
  local_58 = 0;
  FUN_14195a1c0(*(undefined8 *)(param_1 + 0xbe0),local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  FUN_141956fb0(*(undefined8 *)(param_1 + 0xbe0),local_e0);
  local_128 = *(undefined1 *)(param_1 + 0xb31);
  local_127 = 1;
  local_120 = 0;
  local_118 = 0;
  FUN_141956100(*(undefined8 *)(param_1 + 0xbe0),&local_128);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_120);
  local_110 = *(undefined1 *)(param_1 + 0xb30);
  local_10f = 1;
  local_108 = 0;
  local_100 = 0;
  FUN_141958a50(*(undefined8 *)(param_1 + 0xbe0),&local_110);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
  local_f8 = *(undefined1 *)(param_1 + 0xb33);
  local_f7 = 1;
  local_f0 = 0;
  local_e8 = 0;
  FUN_14195a470(*(undefined8 *)(param_1 + 0xbe0),&local_f8);
  FUN_1420cc250(param_1,*(undefined8 *)(param_1 + 0xbe0));
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c0);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  return;
}



// FUNCTION 14213b8b0 SynchronizeProperties body=113 status=ok
// SIG undefined SynchronizeProperties(void)

void UOverlaySlot::SynchronizeProperties
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar6 = *(longlong *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  lVar5 = 0;
  if (lVar6 != 0) {
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)(lVar6 + 0x38) = 1;
    *(undefined4 *)(lVar6 + 0x28) = uVar1;
    *(undefined4 *)(lVar6 + 0x2c) = uVar2;
    *(undefined4 *)(lVar6 + 0x30) = uVar3;
    *(undefined4 *)(lVar6 + 0x34) = uVar4;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar6 + 0x40,&local_20,param_3,param_4,uVar1,uVar3,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  lVar6 = 0;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x24) = *(undefined1 *)(param_1 + 0x50);
    lVar6 = *(longlong *)(param_1 + 0x38);
  }
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x25) = *(undefined1 *)(param_1 + 0x51);
  }
  return;
}



// FUNCTION 14213b930 FUN_14213b930 body=1746 status=ok
// SIG undefined FUN_14213b930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014213bf05) */

void FUN_14213b930(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 auStack_2c8 [32];
  ulonglong local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined1 local_284;
  undefined8 local_280;
  undefined4 local_278;
  longlong *local_270;
  int local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined1 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_140 [32];
  longlong *local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [24];
  undefined4 local_e8;
  char local_e4;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  char local_c4 [12];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_2a8 = local_2a8 & 0xffffffff00000000;
  FUN_14213dc10();
  local_2a8 = 0;
  if (((*(longlong *)(param_1 + 0x2d8) == 0) ||
      (lVar7 = FWeakObjectPtr::Get(param_1 + 0x2d0), lVar7 == 0)) ||
     (lVar7 = UObject::FindFunction(lVar7,*(undefined8 *)(param_1 + 0x2d8)), lVar7 == 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x2c0);
    local_1f4 = 1;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1f8 = uVar3;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f0);
    puVar9 = &local_88;
    bVar6 = false;
    bVar5 = true;
    bVar4 = false;
    local_88 = uVar3;
    local_84 = 1;
    local_80 = 1;
    local_78 = 0;
    local_70 = 0;
    plVar10 = local_270;
    iVar12 = local_268;
  }
  else {
    local_260 = *(undefined8 *)(param_1 + 0x2d8);
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x2d0);
    puVar9 = (undefined4 *)FUN_1420c4320(local_100,uVar8,&local_260);
    local_280 = 0;
    local_278 = 0;
    local_284 = *(undefined1 *)(puVar9 + 1);
    local_288 = *puVar9;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_280,puVar9 + 2);
    plVar10 = (longlong *)FMemory::Realloc(0,0x40,0);
    local_268 = 4;
    local_270 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      local_29c = local_284;
      local_2a0 = local_288;
      local_298 = 0;
      local_290 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_298,&local_280);
      *plVar10 = (longlong)&PTR_FUN_144fb1d98;
      FWeakObjectPtr::operator=(plVar10 + 1,param_1);
      plVar10[2] = (longlong)FUN_1420ee290;
      *(undefined4 *)(plVar10 + 3) = local_2a0;
      *(undefined1 *)((longlong)plVar10 + 0x1c) = local_29c;
      plVar10[4] = 0;
      *(undefined4 *)(plVar10 + 5) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar10 + 4,&local_298);
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar10[6] = lVar7;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_298);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_280);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar9 + 2);
    local_a4 = 0;
    local_a0 = 1;
    local_98 = 0;
    local_90 = 0;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,&local_98);
    }
    puVar9 = &local_a8;
    bVar6 = true;
    bVar5 = false;
    bVar4 = true;
    iVar12 = 4;
  }
  local_e4 = 0;
  if (*(char *)(puVar9 + 1) != '\0') {
    local_e8 = *puVar9;
    local_e4 = 1;
  }
  local_e0 = *(undefined1 *)(puVar9 + 2);
  local_d8 = 0;
  local_d0 = 0;
  local_e4 = *(char *)(puVar9 + 1) != '\0';
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_d8,puVar9 + 4);
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
  }
  if (bVar6) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    local_a4 = 0;
  }
  if (bVar4) {
    if (iVar12 != 0) {
      if (plVar10 == (longlong *)0x0) goto LAB_14213bc4d;
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      plVar10 = (longlong *)FMemory::Realloc(plVar10,0,0);
      local_270 = plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
  }
LAB_14213bc4d:
  local_2a8 = 0;
  if (((*(longlong *)(param_1 + 0x2f8) == 0) ||
      (lVar7 = FWeakObjectPtr::Get(param_1 + 0x2f0), lVar7 == 0)) ||
     (lVar7 = UObject::FindFunction(lVar7,*(undefined8 *)(param_1 + 0x2f8)), lVar7 == 0)) {
    local_1d0 = 0;
    puVar11 = &local_1e0;
    local_1b8 = 1;
    local_1e0 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_1d8 = *(undefined8 *)(param_1 + 0x2e8);
    local_1b0 = 0;
    bVar5 = false;
    bVar4 = true;
    local_1c8 = 0;
    plStack_1c0 = (longlong *)0x0;
    local_1a8 = 0;
  }
  else {
    local_2a8 = *(ulonglong *)(param_1 + 0x2f8);
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x2f0);
    puVar11 = (undefined8 *)FUN_1420c4690(local_140,uVar8,&local_2a8);
    bVar5 = true;
    bVar4 = false;
  }
  local_238 = *(undefined4 *)puVar11;
  uStack_234 = *(undefined4 *)((longlong)puVar11 + 4);
  uStack_230 = *(undefined4 *)(puVar11 + 1);
  uStack_22c = *(undefined4 *)((longlong)puVar11 + 0xc);
  local_228 = *(undefined1 *)(puVar11 + 2);
  local_220 = puVar11[3];
  local_218 = (longlong *)puVar11[4];
  if (local_218 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_218 + 1) = (int)local_218[1] + 1;
    UNLOCK();
  }
  local_210 = *(undefined1 *)(puVar11 + 5);
  local_208 = 0;
  local_200 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_208,puVar11 + 6);
  if ((bVar4) &&
     (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b0), plVar10 = plStack_1c0,
     plStack_1c0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_1c0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_1c0)(plStack_1c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
      }
    }
  }
  if ((bVar5) &&
     (TBaseDelegate<FText>::~TBaseDelegate<FText>(local_110), local_120 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_120 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  FUN_1419a4190(*(undefined8 *)(param_1 + 0x300),param_1 + 0x100);
  FUN_1419a04e0(*(undefined8 *)(param_1 + 0x300),*(undefined1 *)(param_1 + 0x2c4));
  if (*(char *)(param_1 + 0x2c5) == '\0') {
    local_c4[0] = local_e4 != '\0';
    if ((bool)local_c4[0]) {
      local_c8 = local_e8;
    }
    local_c4[4] = local_e0;
    local_b8 = 0;
    local_b0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_b8,&local_d8);
    puVar9 = &local_c8;
    bVar4 = true;
  }
  else {
    local_64 = 0;
    puVar9 = &local_68;
    local_60 = 1;
    bVar4 = false;
    local_58 = 0;
    local_50 = 0;
  }
  local_254 = *(char *)(puVar9 + 1) != '\0';
  if ((bool)local_254) {
    local_258 = *puVar9;
  }
  local_250 = *(undefined1 *)(puVar9 + 2);
  local_248 = 0;
  local_240 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_248,puVar9 + 4);
  FUN_1419a3520(*(undefined8 *)(param_1 + 0x300),&local_258);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    local_c4[0] = 0;
  }
  local_170 = local_228;
  local_168 = local_220;
  local_160 = local_218;
  local_180 = local_238;
  uStack_17c = uStack_234;
  uStack_178 = uStack_230;
  uStack_174 = uStack_22c;
  if (local_218 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_218 + 1) = (int)local_218[1] + 1;
    UNLOCK();
  }
  local_158 = local_210;
  local_150 = 0;
  local_148 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_150,&local_208);
  FUN_1419a2860(*(undefined8 *)(param_1 + 0x300),&local_180);
  local_1a0 = *(undefined8 *)(param_1 + 0x2c8);
  local_198 = 1;
  local_190 = 0;
  local_188 = 0;
  FUN_1419a07d0(*(undefined8 *)(param_1 + 0x300),&local_1a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_208);
  plVar10 = local_218;
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_218 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  return;
}



// FUNCTION 14213c010 FUN_14213c010 body=102 status=ok
// SIG undefined FUN_14213c010(void)

void FUN_14213c010(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_14213dc10();
  FUN_142130dd0(param_1[0x27],param_1[0x25]);
  *(longlong *)(param_1[0x27] + 0x4c0) = param_1[0x26];
  lVar1 = param_1[0x27];
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  FWeakObjectPtr::operator=(lVar1 + 0x428,uVar2);
  return;
}



// FUNCTION 14213c080 FUN_14213c080 body=169 status=ok
// SIG undefined FUN_14213c080(void)

void FUN_14213c080(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_14213dc10();
  FText::FText(local_38,param_1 + 0x120);
  local_20 = 1;
  local_18 = 0;
  local_10 = 0;
  SRichTextBlock::SetText(*(undefined8 *)(param_1 + 0x350),local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
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
  FUN_1420cc480(param_1,*(undefined8 *)(param_1 + 0x350));
  return;
}



// FUNCTION 14213c190 SynchronizeProperties body=96 status=ok
// SIG undefined SynchronizeProperties(void)

void UScaleBox::SynchronizeProperties(longlong param_1)

{
  FUN_14213dc10();
  FUN_1419a40b0(*(undefined8 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x119));
  FUN_1419a3fd0(*(undefined8 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x118));
  FUN_1419a4fe0(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x11c));
  SScaleBox::SetIgnoreInheritedScale
            (*(undefined8 *)(param_1 + 0x128),*(undefined1 *)(param_1 + 0x120));
  return;
}



// FUNCTION 14213c1f0 SynchronizeProperties body=56 status=ok
// SIG undefined SynchronizeProperties(void)

void UScaleBoxSlot::SynchronizeProperties(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1419a2980(*(longlong *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x48));
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1419a50d0(*(longlong *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x49));
      return;
    }
  }
  return;
}



// FUNCTION 14213c230 SynchronizeProperties body=232 status=ok
// SIG undefined SynchronizeProperties(void)

void UScrollBox::SynchronizeProperties(longlong param_1)

{
  char cVar1;
  undefined1 local_res8 [32];
  
  FUN_14213dc10();
  SScrollBox::SetScrollOffset(*(undefined8 *)(param_1 + 0x850),*(undefined4 *)(param_1 + 0x848));
  FUN_1419a33a0(*(undefined8 *)(param_1 + 0x850),*(undefined1 *)(param_1 + 0x820));
  cVar1 = *(char *)(param_1 + 0x821);
  if ((cVar1 == '\0') ||
     ((((local_res8[0] = DAT_1464b9ee9, cVar1 != '\x01' &&
        (local_res8[0] = DAT_1464b9eea, cVar1 != '\x02')) &&
       (local_res8[0] = DAT_1464b9eeb, cVar1 != '\x03')) &&
      (local_res8[0] = DAT_1464b9eec, cVar1 != '\x04')))) {
    local_res8[0] = DAT_1464b9ee8;
  }
  FUN_1419a39c0(*(undefined8 *)(param_1 + 0x850),local_res8);
  SScrollBox::SetScrollBarThickness
            (*(undefined8 *)(param_1 + 0x850),*(undefined8 *)(param_1 + 0x824));
  SScrollBox::SetScrollBarAlwaysVisible
            (*(undefined8 *)(param_1 + 0x850),*(undefined1 *)(param_1 + 0x82c));
  SScrollBox::SetAllowOverscroll
            (*(undefined8 *)(param_1 + 0x850),*(char *)(param_1 + 0x82d) == '\0');
  FUN_1419a3970(*(undefined8 *)(param_1 + 0x850),*(undefined1 *)(param_1 + 0x834));
  return;
}



// FUNCTION 14213c320 SynchronizeProperties body=113 status=ok
// SIG undefined SynchronizeProperties(void)

void UScrollBoxSlot::SynchronizeProperties
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = uVar3;
    *(undefined4 *)(lVar1 + 0x28) = uVar4;
    *(undefined4 *)(lVar1 + 0x2c) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x38,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x50) + 0x48) = (uint)*(byte *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        *(uint *)(*(longlong *)(param_1 + 0x50) + 0x4c) = (uint)*(byte *)(param_1 + 0x49);
      }
    }
  }
  return;
}



// FUNCTION 14213c3a0 SynchronizeProperties body=660 status=ok
// SIG undefined SynchronizeProperties(void)

void USizeBox::SynchronizeProperties(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_14213dc10();
  uVar1 = *(uint *)(param_1 + 0x118);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x118) = uVar1 & 0xfffffffe;
    if (lVar2 != 0) {
      local_28 = 0xbf800000;
      goto LAB_14213c3fb;
    }
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x11c);
    *(uint *)(param_1 + 0x118) = uVar1 | 1;
    if (lVar2 != 0) {
LAB_14213c3fb:
      local_24 = 1;
      local_20 = 0;
      local_18 = 0;
      FUN_1419a5160(lVar2,&local_28);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if ((uVar1 & 2) == 0) {
    *(uint *)(param_1 + 0x118) = uVar1 & 0xfffffffd;
    if (lVar2 != 0) {
      local_28 = 0xbf800000;
      goto LAB_14213c453;
    }
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x120);
    *(uint *)(param_1 + 0x118) = uVar1 | 2;
    if (lVar2 != 0) {
LAB_14213c453:
      local_24 = 1;
      local_20 = 0;
      local_18 = 0;
      FUN_1419a29a0(lVar2,&local_28);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if ((uVar1 & 4) == 0) {
    *(uint *)(param_1 + 0x118) = uVar1 & 0xfffffffb;
    if (lVar2 != 0) {
      local_28 = 0xbf800000;
      goto LAB_14213c4ab;
    }
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x124);
    *(uint *)(param_1 + 0x118) = uVar1 | 4;
    if (lVar2 != 0) {
LAB_14213c4ab:
      local_24 = 1;
      local_20 = 0;
      local_18 = 0;
      FUN_1419a3330(lVar2,&local_28);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if ((uVar1 & 8) == 0) {
    *(uint *)(param_1 + 0x118) = uVar1 & 0xfffffff7;
    if (lVar2 != 0) {
      local_28 = 0xbf800000;
      goto LAB_14213c503;
    }
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x118) = uVar1 | 8;
    if (lVar2 != 0) {
LAB_14213c503:
      local_24 = 1;
      local_20 = 0;
      local_18 = 0;
      FUN_1419a3250(lVar2,&local_28);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if ((uVar1 & 0x10) == 0) {
    *(uint *)(param_1 + 0x118) = uVar1 & 0xffffffef;
    if (lVar2 != 0) {
      local_28 = 0xbf800000;
      goto LAB_14213c55b;
    }
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 300);
    *(uint *)(param_1 + 0x118) = uVar1 | 0x10;
    if (lVar2 != 0) {
LAB_14213c55b:
      local_24 = 1;
      local_20 = 0;
      local_18 = 0;
      FUN_1419a31f0(lVar2,&local_28);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if ((uVar1 & 0x20) == 0) {
    *(uint *)(param_1 + 0x118) = uVar1 & 0xffffffdf;
    if (lVar2 == 0) goto LAB_14213c5cc;
    local_28 = 0xbf800000;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x130);
    *(uint *)(param_1 + 0x118) = uVar1 | 0x20;
    if (lVar2 == 0) goto LAB_14213c5cc;
  }
  local_24 = 1;
  local_20 = 0;
  local_18 = 0;
  FUN_1419a3190(lVar2,&local_28);
LAB_14213c5cc:
  uVar1 = *(uint *)(param_1 + 0x118);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if ((uVar1 & 0x40) == 0) {
    *(uint *)(param_1 + 0x118) = uVar1 & 0xffffffbf;
    if (lVar2 == 0) {
      return;
    }
    local_28 = 0xbf800000;
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x134);
    *(uint *)(param_1 + 0x118) = uVar1 | 0x40;
    if (lVar2 == 0) {
      return;
    }
  }
  local_24 = 1;
  local_20 = 0;
  local_18 = 0;
  FUN_1419a3130(lVar2,&local_28);
  return;
}



// FUNCTION 14213c640 SynchronizeProperties body=110 status=ok
// SIG undefined SynchronizeProperties(void)

void UUGMenuItemContainerSlot::SynchronizeProperties(longlong param_1)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x38);
    uStack_34 = *(undefined4 *)(param_1 + 0x3c);
    uStack_30 = *(undefined4 *)(param_1 + 0x40);
    uStack_2c = *(undefined4 *)(param_1 + 0x44);
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SBorder::SetPadding(*(longlong *)(param_1 + 0x50),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1419a2980(*(longlong *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x48));
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1419a50d0(*(longlong *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x49));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14213c6b0 FUN_14213c6b0 body=529 status=ok
// SIG undefined FUN_14213c6b0(void)

void FUN_14213c6b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res8;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_14213dc10();
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x108);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x110));
      if (lVar1 != 0) {
        local_res8 = *(undefined8 *)(param_1 + 0x110);
        uVar2 = FWeakObjectPtr::Get(param_1 + 0x108);
        puVar3 = (undefined4 *)FUN_1420c4320(&local_48,uVar2,&local_res8);
        local_78 = *puVar3;
        iVar5 = 1;
        iVar4 = 0;
        goto LAB_14213c764;
      }
    }
  }
  local_78 = *(undefined4 *)(param_1 + 0x100);
  puVar3 = &local_60;
  local_5c = 1;
  iVar4 = 2;
  local_58 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = local_78;
LAB_14213c764:
  local_74 = *(undefined1 *)(puVar3 + 1);
  local_70 = 0;
  local_68 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_70,puVar3 + 2);
  if (iVar4 != 0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  }
  if (iVar5 != 0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_40);
  }
  FUN_141959550(*(undefined8 *)(param_1 + 0x3c8),*(undefined1 *)(param_1 + 0x348));
  local_48 = *(undefined4 *)(param_1 + 0x34c);
  uStack_44 = *(undefined4 *)(param_1 + 0x350);
  uStack_40 = *(undefined4 *)(param_1 + 0x354);
  uStack_3c = *(undefined4 *)(param_1 + 0x358);
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_141959c80(*(undefined8 *)(param_1 + 0x3c8),&local_48);
  local_48 = *(undefined4 *)(param_1 + 0x35c);
  uStack_44 = *(undefined4 *)(param_1 + 0x360);
  uStack_40 = *(undefined4 *)(param_1 + 0x364);
  uStack_3c = *(undefined4 *)(param_1 + 0x368);
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_141959d90(*(undefined8 *)(param_1 + 0x3c8),&local_48);
  SSlider::SetStepSize(*(undefined8 *)(param_1 + 0x3c8),&local_78);
  local_60._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x36d));
  local_58 = 0;
  local_50 = 0;
  SMultiLineEditableText::SetSelectAllTextWhenFocused(*(undefined8 *)(param_1 + 0x3c8),&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  local_60._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x36c));
  local_58 = 0;
  local_50 = 0;
  SSlider::SetLocked(*(undefined8 *)(param_1 + 0x3c8),&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  local_60 = *(undefined4 *)(param_1 + 0x370);
  local_5c = 1;
  local_58 = 0;
  local_50 = 0;
  SSlider::SetStepSize(*(undefined8 *)(param_1 + 0x3c8),&local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_70);
  return;
}



// FUNCTION 14213c8d0 FUN_14213c8d0 body=99 status=ok
// SIG undefined FUN_14213c8d0(void)

void FUN_14213c8d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_14213dc10();
  lVar2 = *(longlong *)(param_1 + 0x108);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(lVar2 + 0x208) = uVar1;
  *(undefined1 *)(lVar2 + 0x210) = 1;
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar2 + 0x218,&local_18,param_3,param_4,uVar1,1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  return;
}



// FUNCTION 14213c940 FUN_14213c940 body=1819 status=ok
// SIG undefined FUN_14213c940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14213c940(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  float local_1f0;
  undefined1 local_1ec;
  longlong *local_1e8;
  int local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  float local_1a8;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined1 local_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [4];
  undefined1 local_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_54;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FUN_14213dc10();
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  uVar3 = *(undefined4 *)(param_1 + 0x408);
  bVar6 = false;
  if ((*(int *)(lVar10 + 0x3c0) != 0) &&
     (plVar13 = *(longlong **)(lVar10 + 0x3b8), plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x28))(plVar13,0);
    if (*(longlong *)(lVar10 + 0x3b8) != 0) {
      uVar9 = FMemory::Realloc(*(longlong *)(lVar10 + 0x3b8),0,0);
      *(undefined8 *)(lVar10 + 0x3b8) = uVar9;
    }
    *(undefined4 *)(lVar10 + 0x3c0) = 0;
  }
  *(undefined4 *)(lVar10 + 0x3b0) = uVar3;
  *(undefined1 *)(lVar10 + 0x3b4) = 1;
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  local_1d8 = *(undefined4 *)(param_1 + 0x40c);
  local_1d4 = 1;
  *(undefined4 *)(lVar10 + 0x3f8) = local_1d8;
  *(undefined1 *)(lVar10 + 0x3fc) = 1;
  local_1d0 = 0;
  local_1c8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x400,&local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d0);
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  local_1c0 = *(undefined4 *)(param_1 + 0x464);
  local_1bc = 1;
  *(undefined4 *)(lVar10 + 0x4f8) = local_1c0;
  *(undefined1 *)(lVar10 + 0x4fc) = 1;
  local_1b8 = 0;
  local_1b0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x500,&local_1b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b8);
  local_180 = *(undefined1 *)(param_1 + 0x480);
  local_190 = *(undefined4 *)(param_1 + 0x470);
  uStack_18c = *(undefined4 *)(param_1 + 0x474);
  uStack_188 = *(undefined4 *)(param_1 + 0x478);
  uStack_184 = *(undefined4 *)(param_1 + 0x47c);
  local_178 = *(undefined8 *)(param_1 + 0x488);
  local_170 = *(longlong **)(param_1 + 0x490);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
    UNLOCK();
  }
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  local_168 = 1;
  local_160 = 0;
  local_158 = 0;
  FUN_140692440(lVar10 + 0x2b0,&local_190);
  *(undefined1 *)(lVar10 + 0x2d8) = local_168;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x2e0,&local_160);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_160);
  plVar13 = local_170;
  bVar7 = true;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x4d8);
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  if ((uVar5 & 1) == 0) {
    *(uint *)(param_1 + 0x4d8) = uVar5 & 0xfffffffe;
    if (lVar10 != 0) {
      local_b4 = 0;
      local_b0 = 1;
      local_a8 = 0;
      local_a0 = 0;
      if ((local_b8 != (undefined1 *)(lVar10 + 0x428)) && (*(char *)(lVar10 + 0x42c) != '\0')) {
        *(undefined1 *)(lVar10 + 0x42c) = 0;
      }
      *(undefined1 *)(lVar10 + 0x430) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x438,&local_a8);
      SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
      puVar12 = &local_a8;
      goto LAB_14213cc06;
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x4dc);
    *(uint *)(param_1 + 0x4d8) = uVar5 | 1;
    if (lVar10 != 0) {
      local_134 = 1;
      local_130 = 1;
      local_128 = 0;
      local_120 = 0;
      if (&local_138 != (undefined4 *)(lVar10 + 0x428)) {
        *(undefined4 *)(lVar10 + 0x428) = uVar3;
        *(undefined1 *)(lVar10 + 0x42c) = 1;
      }
      *(undefined1 *)(lVar10 + 0x430) = 1;
      local_138 = uVar3;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x438,&local_128);
      SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
      puVar12 = &local_128;
LAB_14213cc06:
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar12);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x4d8);
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  if ((uVar5 & 2) == 0) {
    *(uint *)(param_1 + 0x4d8) = uVar5 & 0xfffffffd;
    if (lVar10 != 0) {
      local_94 = 0;
      local_90 = 1;
      local_88 = 0;
      local_80 = 0;
      if ((local_98 != (undefined1 *)(lVar10 + 0x448)) && (*(char *)(lVar10 + 0x44c) != '\0')) {
        *(undefined1 *)(lVar10 + 0x44c) = 0;
      }
      *(undefined1 *)(lVar10 + 0x450) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x458,&local_88);
      SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
      puVar12 = &local_88;
      goto LAB_14213ccea;
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x4e0);
    *(uint *)(param_1 + 0x4d8) = uVar5 | 2;
    if (lVar10 != 0) {
      local_114 = 1;
      local_110 = 1;
      local_108 = 0;
      local_100 = 0;
      if (&local_118 != (undefined4 *)(lVar10 + 0x448)) {
        *(undefined4 *)(lVar10 + 0x448) = uVar3;
        *(undefined1 *)(lVar10 + 0x44c) = 1;
      }
      *(undefined1 *)(lVar10 + 0x450) = 1;
      local_118 = uVar3;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x458,&local_108);
      SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
      puVar12 = &local_108;
LAB_14213ccea:
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar12);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x4d8);
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  if ((uVar5 & 4) == 0) {
    *(uint *)(param_1 + 0x4d8) = uVar5 & 0xfffffffb;
    if (lVar10 != 0) {
      local_74 = 0;
      local_70 = 1;
      local_68 = 0;
      local_60 = 0;
      if ((undefined4 *)(lVar10 + 0x428) != (undefined4 *)(lVar10 + 0x468)) {
        if (*(char *)(lVar10 + 0x46c) != '\0') {
          *(undefined1 *)(lVar10 + 0x46c) = 0;
        }
        if (*(char *)(lVar10 + 0x42c) != '\0') {
          *(undefined4 *)(lVar10 + 0x468) = *(undefined4 *)(lVar10 + 0x428);
          *(undefined1 *)(lVar10 + 0x46c) = 1;
        }
      }
      *(undefined1 *)(lVar10 + 0x470) = *(undefined1 *)(lVar10 + 0x430);
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x478,lVar10 + 0x438);
      SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
      puVar12 = &local_68;
      goto LAB_14213cddc;
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x4e4);
    *(uint *)(param_1 + 0x4d8) = uVar5 | 4;
    if (lVar10 != 0) {
      local_f4 = 1;
      local_f0 = 1;
      local_e8 = 0;
      local_e0 = 0;
      if (&local_f8 != (undefined4 *)(lVar10 + 0x468)) {
        *(undefined4 *)(lVar10 + 0x468) = uVar3;
        *(undefined1 *)(lVar10 + 0x46c) = 1;
      }
      *(undefined1 *)(lVar10 + 0x470) = 1;
      local_f8 = uVar3;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x478,&local_e8);
      SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
      puVar12 = &local_e8;
LAB_14213cddc:
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar12);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x4d8);
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  if ((uVar5 & 8) == 0) {
    *(uint *)(param_1 + 0x4d8) = uVar5 & 0xfffffff7;
    if (lVar10 == 0) goto LAB_14213ced3;
    local_54 = 0;
    local_50 = 1;
    local_48 = 0;
    local_40 = 0;
    if ((undefined4 *)(lVar10 + 0x448) != (undefined4 *)(lVar10 + 0x488)) {
      if (*(char *)(lVar10 + 0x48c) != '\0') {
        *(undefined1 *)(lVar10 + 0x48c) = 0;
      }
      if (*(char *)(lVar10 + 0x44c) != '\0') {
        *(undefined4 *)(lVar10 + 0x488) = *(undefined4 *)(lVar10 + 0x448);
        *(undefined1 *)(lVar10 + 0x48c) = 1;
      }
    }
    *(undefined1 *)(lVar10 + 0x490) = *(undefined1 *)(lVar10 + 0x450);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x498,lVar10 + 0x458);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
    puVar12 = &local_48;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x4e8);
    *(uint *)(param_1 + 0x4d8) = uVar5 | 8;
    if (lVar10 == 0) goto LAB_14213ced3;
    local_d4 = 1;
    local_d0 = 1;
    local_c8 = 0;
    local_c0 = 0;
    if (&local_d8 != (undefined4 *)(lVar10 + 0x488)) {
      *(undefined4 *)(lVar10 + 0x488) = uVar3;
      *(undefined1 *)(lVar10 + 0x48c) = 1;
    }
    *(undefined1 *)(lVar10 + 0x490) = 1;
    local_d8 = uVar3;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x498,&local_c8);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar10);
    puVar12 = &local_c8;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar12);
LAB_14213ced3:
  local_1f8 = 0;
  if (((*(longlong *)(param_1 + 0x110) == 0) ||
      (lVar10 = FWeakObjectPtr::Get(param_1 + 0x108), lVar10 == 0)) ||
     (lVar10 = UObject::FindFunction(lVar10,*(undefined8 *)(param_1 + 0x110)), lVar10 == 0)) {
    local_1f0 = *(float *)(param_1 + 0x100);
    pfVar11 = &local_1a8;
    local_1a4 = 1;
    bVar6 = true;
    bVar7 = false;
    local_1a0 = 0;
    local_198 = 0;
    local_1a8 = local_1f0;
  }
  else {
    local_1f8 = *(undefined8 *)(param_1 + 0x110);
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x108);
    pfVar11 = (float *)FUN_1420c4320(local_150,uVar9,&local_1f8);
    local_1f0 = *pfVar11;
  }
  local_1ec = *(undefined1 *)(pfVar11 + 1);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1e8,pfVar11 + 2);
  if (bVar6) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1a0);
  }
  if (bVar7) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_148);
  }
  lVar10 = *(longlong *)(param_1 + 0x4f0);
  *(float *)(lVar10 + 0x2f0) = local_1f0;
  *(undefined1 *)(lVar10 + 0x2f4) = local_1ec;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x2f8,&local_1e8);
  if (((local_1e0 != 0) && (local_1e8 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_1e8 + 0x18))(), cVar8 != '\0')) {
    plVar13 = (longlong *)0x0;
    if (local_1e0 != 0) {
      plVar13 = local_1e8;
    }
    local_1f0 = (float)(**(code **)(*plVar13 + 0x38))(plVar13);
  }
  FUN_14192abd0(lVar10,(double)local_1f0,0,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e8);
  return;
}



// FUNCTION 14213d060 FUN_14213d060 body=1336 status=ok
// SIG undefined FUN_14213d060(void)

void FUN_14213d060(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_res10;
  longlong local_res18;
  undefined4 local_258;
  undefined1 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined1 local_240;
  undefined1 local_23f;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined1 local_220;
  undefined8 local_218;
  undefined4 local_210;
  longlong local_208;
  longlong lStack_200;
  undefined1 local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  longlong local_180;
  longlong *local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  longlong lStack_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  longlong *local_50;
  undefined1 local_40 [24];
  
  FUN_14213dc10();
  (**(code **)(*param_1 + 0x2d8))(param_1,local_c8);
  if (param_1[0x2f] == 0) {
LAB_14213d111:
    local_1f8 = (char)param_1[0x2b];
    local_1f0 = param_1[0x2c];
    local_1e8 = (longlong *)param_1[0x2d];
    local_208 = param_1[0x29];
    lStack_200 = param_1[0x2a];
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
      UNLOCK();
    }
    local_1e0 = 1;
    plVar8 = &local_208;
    local_1d8 = 0;
    bVar5 = false;
    bVar4 = true;
    local_1d0 = 0;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x2e);
    if (lVar6 == 0) goto LAB_14213d111;
    lVar6 = UObject::FindFunction(lVar6,param_1[0x2f]);
    if (lVar6 == 0) goto LAB_14213d111;
    local_res10 = param_1[0x2f];
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x2e);
    plVar8 = (longlong *)FUN_1420c4690(local_70,uVar7,&local_res10);
    bVar5 = true;
    bVar4 = false;
  }
  local_198 = (int)*plVar8;
  uStack_194 = *(undefined4 *)((longlong)plVar8 + 4);
  uStack_190 = (int)plVar8[1];
  uStack_18c = *(undefined4 *)((longlong)plVar8 + 0xc);
  local_188 = (char)plVar8[2];
  local_180 = plVar8[3];
  local_178 = (longlong *)plVar8[4];
  if (local_178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_178 + 1) = (int)local_178[1] + 1;
    UNLOCK();
  }
  local_170 = (undefined1)plVar8[5];
  local_168 = 0;
  local_160 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_168,plVar8 + 6);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d8);
    plVar8 = local_1e8;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_40);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  if (param_1[0x3e] != 0) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x3d);
    if (lVar6 != 0) {
      lVar6 = UObject::FindFunction(lVar6,param_1[0x3e]);
      if (lVar6 != 0) {
        local_res18 = param_1[0x3e];
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x3d);
        plVar8 = (longlong *)FUN_1420c4410(local_98,uVar7,&local_res18);
        bVar5 = true;
        bVar4 = false;
        goto LAB_14213d2d4;
      }
    }
  }
  local_148 = 1;
  plVar8 = &local_158;
  local_140 = 0;
  bVar5 = false;
  bVar4 = true;
  local_158 = param_1[0x3b];
  lStack_150 = param_1[0x3c];
  local_138 = 0;
LAB_14213d2d4:
  local_1c8 = (int)*plVar8;
  uStack_1c4 = *(undefined4 *)((longlong)plVar8 + 4);
  uStack_1c0 = (int)plVar8[1];
  uStack_1bc = *(undefined4 *)((longlong)plVar8 + 0xc);
  local_1b8 = (undefined1)plVar8[2];
  local_1b0 = 0;
  local_1a8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1b0,plVar8 + 3);
  if (bVar4) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_140);
  }
  if (bVar5) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  }
  if (param_1[0x40] != 0) {
    FUN_1419bcc80(param_1[0x40],local_c8);
    local_130 = param_1[0x30];
    local_120 = (undefined4)param_1[0x32];
    uStack_11c = *(undefined4 *)((longlong)param_1 + 0x194);
    uStack_118 = (undefined4)param_1[0x33];
    uStack_114 = *(undefined4 *)((longlong)param_1 + 0x19c);
    local_128 = param_1[0x31];
    local_110 = (undefined4)param_1[0x34];
    uStack_10c = *(undefined4 *)((longlong)param_1 + 0x1a4);
    uStack_108 = (undefined4)param_1[0x35];
    uStack_104 = *(undefined4 *)((longlong)param_1 + 0x1ac);
    local_100 = param_1[0x36];
    local_f8 = (longlong *)param_1[0x37];
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    local_f0 = param_1[0x38];
    local_e8 = (undefined4)param_1[0x39];
    local_e4 = *(undefined1 *)((longlong)param_1 + 0x1cc);
    local_e0 = 1;
    local_d8 = 0;
    local_d0 = 0;
    FUN_1419bc210(param_1[0x40],&local_130);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    plVar8 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_f8)(local_f8);
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
    FUN_1419bbcf0(param_1[0x40],&local_198);
    local_228 = (undefined4)param_1[0x3a];
    local_224 = *(undefined4 *)((longlong)param_1 + 0x1d4);
    local_220 = 1;
    local_218 = 0;
    local_210 = 0;
    FUN_1419bcaf0(param_1[0x40],&local_228);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_218);
    FUN_1419bc9e0(param_1[0x40],&local_1c8);
    local_258 = (undefined4)param_1[0x3f];
    local_254 = 1;
    local_250 = 0;
    local_248 = 0;
    FUN_1419bc8d0(param_1[0x40],&local_258);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_250);
    local_240 = *(undefined1 *)((longlong)param_1 + 0x1fd);
    local_23f = 1;
    local_238 = 0;
    local_230 = 0;
    FUN_1419bbb80(param_1[0x40],&local_240);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_238);
    FUN_1420cc6b0(param_1,param_1[0x40]);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_168);
  plVar8 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_178)(local_178);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_a8);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c0 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 14213d5a0 SynchronizeProperties body=114 status=ok
// SIG undefined SynchronizeProperties(void)

void UThrobber::SynchronizeProperties(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_14213dc10();
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 < 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0x19;
    if (iVar1 < 0x19) {
      iVar2 = iVar1;
    }
  }
  SThrobber::SetNumPieces(*(undefined8 *)(param_1 + 0x198),iVar2);
  FUN_141956110(*(undefined8 *)(param_1 + 0x198),
                -(*(char *)(param_1 + 0x106) != '\0') & 4U |
                -(*(char *)(param_1 + 0x104) != '\0') & 2U | *(char *)(param_1 + 0x105) != '\0');
  return;
}



// FUNCTION 14213d620 SynchronizeProperties body=164 status=ok
// SIG undefined SynchronizeProperties(void)

void UUniformGridPanel::SynchronizeProperties(longlong param_1)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_14213dc10();
  local_38 = *(undefined4 *)(param_1 + 0x118);
  uStack_34 = *(undefined4 *)(param_1 + 0x11c);
  uStack_30 = *(undefined8 *)(param_1 + 0x120);
  local_28 = CONCAT31(local_28._1_3_,1);
  local_20 = 0;
  local_18 = 0;
  SUniformGridPanel::SetSlotPadding(*(undefined8 *)(param_1 + 0x130),&local_38);
  local_38 = *(undefined4 *)(param_1 + 0x128);
  uStack_34._0_1_ = 1;
  uStack_30 = 0;
  local_28 = 0;
  SUniformGridPanel::SetMinDesiredSlotHeight(*(undefined8 *)(param_1 + 0x130),&local_38);
  local_38 = *(undefined4 *)(param_1 + 300);
  uStack_34 = CONCAT31(uStack_34._1_3_,1);
  uStack_30 = 0;
  local_28 = 0;
  SUniformGridPanel::SetMinDesiredSlotHeight(*(undefined8 *)(param_1 + 0x130),&local_38);
  return;
}



// FUNCTION 14213d720 FUN_14213d720 body=1164 status=ok
// SIG undefined FUN_14213d720(void)

void FUN_14213d720(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [24];
  undefined1 local_90 [16];
  undefined1 local_80 [32];
  longlong *local_60;
  undefined1 local_50 [24];
  
  FUN_14213dc10();
  plVar4 = *(longlong **)(param_1 + 0xe8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar11 = (int)plVar4[1];
    bVar15 = iVar11 == 0;
    if (bVar15) {
      *(int *)(plVar4 + 1) = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (!bVar15) {
      while( true ) {
        LOCK();
        bVar15 = iVar11 == (int)plVar4[1];
        if (bVar15) {
          *(int *)(plVar4 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar15) break;
        LOCK();
        iVar11 = (int)plVar4[1];
        bVar15 = iVar11 == 0;
        if (bVar15) {
          *(int *)(plVar4 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar15) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        lVar5 = *(longlong *)(param_1 + 0xe0);
        if (lVar5 != 0) {
          if (((*(longlong *)(param_1 + 0x120) == 0) ||
              (lVar12 = FWeakObjectPtr::Get(param_1 + 0x118), lVar12 == 0)) ||
             (lVar12 = UObject::FindFunction(lVar12,*(undefined8 *)(param_1 + 0x120)), lVar12 == 0))
          {
            local_e8 = 1;
            puVar14 = &local_f8;
            local_e0 = 0;
            bVar10 = false;
            bVar15 = true;
            local_f8 = *(undefined8 *)(param_1 + 0x108);
            uStack_f0 = *(undefined8 *)(param_1 + 0x110);
            local_d8 = 0;
          }
          else {
            local_res10 = *(undefined8 *)(param_1 + 0x120);
            uVar13 = FWeakObjectPtr::Get(param_1 + 0x118);
            puVar14 = (undefined8 *)FUN_1420c4410(local_a8,uVar13,&local_res10);
            bVar10 = true;
            bVar15 = false;
          }
          local_1a0 = *(undefined4 *)puVar14;
          uStack_19c = *(undefined4 *)((longlong)puVar14 + 4);
          uStack_198 = *(undefined4 *)(puVar14 + 1);
          uStack_194 = *(undefined4 *)((longlong)puVar14 + 0xc);
          local_190 = *(undefined1 *)(puVar14 + 2);
          local_188 = 0;
          local_180 = 0;
          TBaseDelegate<FSlateBrush_const_*>::operator=(&local_188,puVar14 + 3);
          if (bVar15) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e0);
          }
          if (bVar10) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(local_90);
          }
          if (((*(longlong *)(param_1 + 0x158) == 0) ||
              (lVar12 = FWeakObjectPtr::Get(param_1 + 0x150), lVar12 == 0)) ||
             (lVar12 = UObject::FindFunction(lVar12,*(undefined8 *)(param_1 + 0x158)), lVar12 == 0))
          {
            local_128 = *(undefined1 *)(param_1 + 0x138);
            local_120 = *(undefined8 *)(param_1 + 0x140);
            local_118 = *(longlong **)(param_1 + 0x148);
            local_138 = *(undefined8 *)(param_1 + 0x128);
            uStack_130 = *(undefined8 *)(param_1 + 0x130);
            if (local_118 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_118 + 1) = (int)local_118[1] + 1;
              UNLOCK();
            }
            local_110 = 1;
            puVar14 = &local_138;
            local_108 = 0;
            bVar10 = false;
            bVar15 = true;
            local_100 = 0;
          }
          else {
            local_res18 = *(undefined8 *)(param_1 + 0x158);
            uVar13 = FWeakObjectPtr::Get(param_1 + 0x150);
            puVar14 = (undefined8 *)FUN_1420c4690(local_80,uVar13,&local_res18);
            bVar10 = true;
            bVar15 = false;
          }
          local_178 = *(undefined4 *)puVar14;
          uStack_174 = *(undefined4 *)((longlong)puVar14 + 4);
          uStack_170 = *(undefined4 *)(puVar14 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar14 + 0xc);
          local_168 = *(undefined1 *)(puVar14 + 2);
          local_160 = puVar14[3];
          local_158 = (longlong *)puVar14[4];
          if (local_158 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_158 + 1) = (int)local_158[1] + 1;
            UNLOCK();
          }
          local_150 = *(undefined1 *)(puVar14 + 5);
          local_148 = 0;
          local_140 = 0;
          TBaseDelegate<FSlateBrush_const_*>::operator=(&local_148,puVar14 + 6);
          if ((bVar15) &&
             (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108), plVar3 = local_118,
             local_118 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_118 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_118 + 8))(local_118,1);
              }
            }
          }
          if ((bVar10) &&
             (TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50), local_60 != (longlong *)0x0)) {
            LOCK();
            plVar3 = local_60 + 1;
            lVar12 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)local_60 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
          *(undefined4 *)(lVar5 + 0x288) = local_1a0;
          *(undefined4 *)(lVar5 + 0x28c) = uStack_19c;
          *(undefined4 *)(lVar5 + 0x290) = uStack_198;
          *(undefined4 *)(lVar5 + 0x294) = uStack_194;
          *(undefined1 *)(lVar5 + 0x298) = local_190;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x2a0,&local_188);
          FUN_140692440(lVar5 + 0x2b0,&local_178);
          *(undefined1 *)(lVar5 + 0x2d8) = local_150;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x2e0,&local_148);
          uVar6 = *(undefined4 *)(param_1 + 0x160);
          uVar7 = *(undefined4 *)(param_1 + 0x164);
          uVar8 = *(undefined4 *)(param_1 + 0x168);
          uVar9 = *(undefined4 *)(param_1 + 0x16c);
          local_c0 = 1;
          local_b8 = 0;
          local_b0 = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_d0 = uVar6;
          uStack_cc = uVar7;
          uStack_c8 = uVar8;
          uStack_c4 = uVar9;
          TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1b0,&local_b8);
          *(undefined1 *)(lVar5 + 0x250) = 1;
          *(undefined4 *)(lVar5 + 0x240) = uVar6;
          *(undefined4 *)(lVar5 + 0x244) = uVar7;
          *(undefined4 *)(lVar5 + 0x248) = uVar8;
          *(undefined4 *)(lVar5 + 0x24c) = uVar9;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 600,&local_1b0);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b0);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_148);
          plVar3 = local_158;
          if (local_158 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_158 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_158)(local_158);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_188);
        }
        LOCK();
        plVar3 = plVar4 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14213dbb0 FUN_14213dbb0 body=95 status=ok
// SIG undefined FUN_14213dbb0(void)

void FUN_14213dbb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_14213dc10();
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x360);
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(lVar1 + 0x680) = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(lVar1 + 0x688) = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x360);
    *(undefined8 *)(lVar1 + 0x708) = *(undefined8 *)(param_1 + 0x138);
    *(undefined4 *)(lVar1 + 0x710) = *(undefined4 *)(param_1 + 0x140);
  }
  return;
}



// FUNCTION 14213dc10 FUN_14213dc10 body=3140 status=ok
// SIG undefined FUN_14213dc10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14213dc10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_5a8 [32];
  longlong local_588;
  longlong local_580;
  undefined4 local_578;
  longlong local_570;
  longlong local_568;
  longlong local_560;
  undefined1 local_558;
  undefined1 local_550;
  longlong local_548;
  undefined1 local_538 [8];
  ulonglong local_530;
  undefined1 local_528 [8];
  undefined2 local_520;
  longlong *local_518;
  int local_510;
  longlong *local_508;
  longlong *local_500;
  byte local_4f8 [8];
  longlong *local_4f0;
  int local_4e8;
  undefined1 local_4e0;
  undefined1 local_4df;
  longlong *local_4d8;
  int local_4d0;
  longlong *local_4c8;
  longlong *plStack_4c0;
  undefined2 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  longlong *local_4a0;
  int local_498;
  longlong *local_490;
  longlong *local_488;
  byte local_480 [8];
  undefined8 local_478;
  undefined4 local_470;
  undefined1 local_468;
  undefined1 local_467;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 local_450;
  undefined1 local_44f;
  undefined8 local_448;
  undefined4 local_440;
  undefined1 local_438;
  undefined1 local_437;
  undefined8 local_430;
  undefined4 local_428;
  undefined1 local_420;
  undefined1 local_41f;
  undefined8 local_418;
  undefined4 local_410;
  longlong *local_408;
  longlong *plStack_400;
  code *local_3f8;
  undefined1 *puStack_3f0;
  longlong local_3e8;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368;
  undefined8 local_360;
  undefined4 local_358;
  longlong *local_350;
  longlong *local_340;
  code *local_328;
  undefined1 *puStack_320;
  undefined1 local_318 [16];
  longlong *local_308;
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d0 [16];
  uint local_2c0;
  undefined1 local_2bc;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  local_530 = local_530 & 0xffffffff00000000;
  FUN_1420f9830(param_1,&local_508);
  plVar17 = local_508;
  if (local_508 == (longlong *)0x0) goto LAB_14213e7ee;
  if ((*(byte *)(param_1 + 0xb4) & 8) != 0) {
    local_2c0 = (uint)*(byte *)(param_1 + 0xb5);
    local_2bc = 1;
    local_2b8 = 1;
    local_2b0 = 0;
    local_2a8 = 0;
    FUN_14185a850(local_508,&local_2c0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2b0);
  }
  local_530 = 0;
  if (((*(longlong *)(param_1 + 0x38) == 0) ||
      (lVar7 = FWeakObjectPtr::Get(param_1 + 0x30), lVar7 == 0)) ||
     (lVar7 = UObject::FindFunction(lVar7,*(undefined8 *)(param_1 + 0x38)), lVar7 == 0)) {
    pbVar14 = local_480;
    bVar3 = false;
    bVar18 = true;
    local_480[0] = *(byte *)(param_1 + 0xb4) >> 2 & 1;
    local_480[1] = 1;
    local_478 = 0;
    local_470 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x30);
    local_4f8[0] = 0;
    local_4f8[1] = 1;
    local_4f0 = (longlong *)0x0;
    local_4e8 = 0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_350 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      if (((local_4e8 != 0) && (local_4f0 != (longlong *)0x0)) &&
         ((**(code **)(*local_4f0 + 0x28))(local_4f0,0), local_4f0 != (longlong *)0x0)) {
        local_4f0 = (longlong *)FMemory::Realloc(local_4f0,0,0);
      }
    }
    else {
      plVar9[2] = lVar7;
      *plVar9 = (longlong)&PTR_LAB_144fb28b8;
      FWeakObjectPtr::operator=(plVar9 + 3,lVar8);
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      if (lVar8 != 0) {
        uVar11 = FWeakObjectPtr::Get(plVar9 + 3);
        lVar7 = FUN_14178ac60(uVar11,lVar7);
        plVar9[1] = lVar7;
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_4f0);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      local_350 = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_350 != (longlong *)0x0) {
        FMemory::Free(local_350);
      }
    }
    pbVar14 = local_4f8;
    bVar3 = true;
    bVar18 = false;
  }
  SWidget::SetEnabled(plVar17,pbVar14);
  if (bVar18) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_478);
  }
  if (bVar3) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4f0);
  }
  local_530 = 0;
  if (((*(longlong *)(param_1 + 0x88) == 0) ||
      (lVar7 = FWeakObjectPtr::Get(param_1 + 0x80), lVar7 == 0)) ||
     (lVar7 = UObject::FindFunction(lVar7,*(undefined8 *)(param_1 + 0x88)), lVar7 == 0)) {
    local_420 = *(undefined1 *)(param_1 + 0xb7);
    local_41f = 1;
    local_418 = 0;
    local_410 = 0;
    puVar13 = (undefined1 *)FUN_1420ee520(param_1,local_528,&local_420);
    local_430 = 0;
    puVar15 = &local_430;
    local_428 = 0;
    bVar4 = false;
    bVar3 = false;
    bVar18 = true;
    local_44f = 1;
    local_438 = *puVar13;
    local_437 = 1;
    plVar9 = local_4a0;
    local_450 = local_438;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x88);
    local_530 = FWeakObjectPtr::Get(param_1 + 0x80);
    local_520 = 0x100;
    local_518 = (longlong *)0x0;
    local_510 = 0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_340 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      if (((local_510 != 0) && (local_518 != (longlong *)0x0)) &&
         ((**(code **)(*local_518 + 0x28))(local_518,0), local_518 != (longlong *)0x0)) {
        local_518 = (longlong *)FMemory::Realloc(local_518,0,0);
      }
    }
    else {
      *plVar9 = (longlong)&PTR_LAB_144fb28b8;
      plVar9[2] = lVar7;
      FWeakObjectPtr::operator=(plVar9 + 3,local_530);
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar8;
      if (local_530 != 0) {
        uVar11 = FWeakObjectPtr::Get(plVar9 + 3);
        lVar7 = FUN_14178ac60(uVar11,lVar7);
        plVar9[1] = lVar7;
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_518);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      local_340 = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_340 != (longlong *)0x0) {
        FMemory::Free(local_340);
      }
    }
    local_4e0 = (undefined1)local_520;
    local_4df = local_520._1_1_;
    local_4d8 = (longlong *)0x0;
    local_4d0 = 0;
    if ((local_510 != 0) && (local_518 != (longlong *)0x0)) {
      (**(code **)(*local_518 + 0x30))(local_518,&local_4d8);
    }
    plVar9 = (longlong *)FMemory::Realloc(0,0x40,0);
    local_498 = 4;
    local_4a0 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      local_468 = local_4e0;
      local_467 = local_4df;
      local_460 = 0;
      local_458 = 0;
      if ((local_4d0 != 0) && (local_4d8 != (longlong *)0x0)) {
        (**(code **)(*local_4d8 + 0x30))(local_4d8,&local_460);
      }
      FUN_1420cd270(plVar9,param_1,FUN_1420ee520,&local_468);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_518);
    local_4b8 = 0x119;
    local_4b8._0_1_ = 0x19;
    local_4b0 = 0;
    local_4b8._1_1_ = 1;
    local_4a8 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_4b0);
    }
    puVar15 = &local_4b0;
    bVar4 = true;
    bVar3 = true;
    bVar18 = false;
    local_44f = local_4b8._1_1_;
    local_450 = (undefined1)local_4b8;
  }
  local_448 = 0;
  local_440 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_448,puVar15);
  (**(code **)(*plVar17 + 0x1b8))(plVar17,&local_450);
  if (bVar18) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_430);
  }
  if (bVar3) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4b0);
  }
  if (bVar4) {
    if (local_498 != 0) {
      if (plVar9 == (longlong *)0x0) goto LAB_14213e170;
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      plVar9 = (longlong *)FMemory::Realloc(plVar9,0,0);
      local_4a0 = plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
LAB_14213e170:
  if (*(char *)((longlong)plVar17 + 0x1a) != *(char *)(param_1 + 0xb6)) {
    *(char *)((longlong)plVar17 + 0x1a) = *(char *)(param_1 + 0xb6);
    (**(code **)(*plVar17 + 0x1f0))(plVar17);
    FUN_1418475e0(plVar17,1);
  }
  *(byte *)(plVar17 + 3) =
       (*(char *)(param_1 + 0xb4) << 3 ^ *(byte *)(plVar17 + 3)) & 0x7f ^
       *(char *)(param_1 + 0xb4) << 3;
  FUN_1418475e0(plVar17,5);
  *(undefined4 *)(plVar17 + 0x19) = *(undefined4 *)(param_1 + 0xb8);
  FUN_1418475e0(plVar17,1);
  FUN_142143560(param_1);
  local_3e8 = *(longlong *)(param_1 + 0xac);
  plVar9 = (longlong *)0x0;
  plVar17[0x20] = local_3e8;
  local_3e0 = 1;
  local_3d8 = 0;
  local_3d0 = 0;
  *(undefined1 *)(plVar17 + 0x21) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar17 + 0x22,&local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3d8);
  local_530 = 0;
  if (((*(longlong *)(param_1 + 0x78) == 0) ||
      (lVar7 = FWeakObjectPtr::Get((undefined4 *)(param_1 + 0x70)), lVar7 == 0)) ||
     (lVar7 = UObject::FindFunction(lVar7,*(undefined8 *)(param_1 + 0x78)), lVar7 == 0)) {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      cVar5 = FText::IsEmpty(param_1 + 0x40);
      if ((cVar5 != '\0') &&
         (cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x58), cVar5 == '\0'))
      goto LAB_14213e7ee;
      cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x58);
      bVar18 = cVar5 == '\0';
      if (bVar18) {
        FText::FText(local_380,param_1 + 0x40);
        local_368 = 1;
        local_360 = 0;
        local_358 = 0;
        puVar13 = local_380;
      }
      else {
        local_530 = *(ulonglong *)(param_1 + 0x60);
        uVar11 = FWeakObjectPtr::Get(param_1 + 0x58);
        puVar13 = (undefined1 *)FUN_1420c47a0(local_2f0,uVar11,&local_530);
      }
      FUN_14185b6c0(plVar17,puVar13);
      if ((bVar18) &&
         (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_360), local_378 != (longlong *)0x0)) {
        LOCK();
        plVar17 = local_378 + 1;
        lVar7 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_378)(local_378);
          LOCK();
          piVar1 = (int *)((longlong)local_378 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_378 + 8))(local_378,1);
          }
        }
      }
      if (bVar18) goto LAB_14213e7ee;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2d0);
      plVar9 = local_2e8;
      goto LAB_14213e7a1;
    }
    puStack_3f0 = local_538;
    local_3c8 = 0;
    local_3f8 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_328 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_3c0 = 1;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_398 = 1;
    local_390 = 0;
    local_388 = 0;
    local_538[0] = 0;
    puStack_320 = puStack_3f0;
    FUN_14213eb80(*(longlong *)(param_1 + 0x68),local_318,&local_328);
    lVar7 = FUN_1418875b0(local_298);
    *(undefined1 *)(lVar7 + 0x200) = 1;
    *(undefined8 *)(lVar7 + 0x1f0) = 0;
    *(undefined8 *)(lVar7 + 0x1f8) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x208,&local_390);
    *(undefined8 *)(lVar7 + 0x218) = 0;
    *(undefined1 *)(lVar7 + 0x220) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x228,&local_3b8);
    plVar9 = (longlong *)FUN_141881010();
    plVar16 = plVar9 + 2;
    local_308 = plVar16;
    local_300 = plVar9;
    FUN_14044f790(&local_308,plVar16);
    local_588 = 0x450;
    SWidget::SetDebugInfo
              (plVar16,"SToolTip",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp",0x44a)
    ;
    lVar7 = FUN_140692660(lVar7,local_318);
    local_578 = *(undefined4 *)(lVar7 + 0x90);
    local_548 = lVar7 + 0xf8;
    local_560 = lVar7 + 0xe8;
    local_550 = *(undefined1 *)(lVar7 + 0xf1);
    local_568 = lVar7 + 200;
    local_570 = lVar7 + 0x98;
    local_558 = *(undefined1 *)(lVar7 + 0xf0);
    local_580 = lVar7 + 0x78;
    local_588 = lVar7 + 0x60;
    SWidget::SWidgetConstruct(plVar16,lVar7,lVar7 + 0x30,lVar7 + 0x40);
    FUN_141978900(plVar16,lVar7);
    if (((char)plVar9[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar17 = plVar9 + 1;
      lVar7 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      plVar17 = local_508;
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar17 = local_508;
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
          plVar17 = local_508;
        }
      }
    }
    FUN_14188b170(local_298);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_390);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3b8);
    if (plVar16 == (longlong *)0x0) {
      local_490 = (longlong *)0x0;
    }
    else {
      local_490 = plVar9 + 0x60;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar17 = local_508;
    }
    local_488 = plVar9;
    FMediaModule::SetTimeSource(plVar17,&local_490);
    plVar17 = local_488;
    if (local_488 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_488 + 1;
      lVar7 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_488)(local_488);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14213e7ee;
    LOCK();
    plVar17 = plVar9 + 1;
    lVar7 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_14213e7ee;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_14213e7ee;
    lVar7 = *plVar9;
  }
  else {
    plVar12 = (longlong *)operator_new(0x28);
    plVar16 = plVar9;
    if (plVar12 != (longlong *)0x0) {
      plVar12[1] = 0;
      plVar12[2] = 0;
      plVar12[3] = 0;
      plVar12[4] = 0;
      *plVar12 = (longlong)&PTR_FUN_144faee10;
      FWeakObjectPtr::operator=(plVar12 + 1,0);
      plVar12[2] = 0;
      plVar12[3] = 0;
      plVar12[4] = 0;
      plVar16 = plVar12;
    }
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *plVar12 = (longlong)&PTR_FUN_143f7de48;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      plVar12[2] = (longlong)plVar16;
      plVar9 = plVar12;
    }
    local_4c8 = plVar16;
    plStack_4c0 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_4c8,plVar16,plVar16);
    *(undefined4 *)(local_4c8 + 1) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)((longlong)local_4c8 + 0xc) = *(undefined4 *)(param_1 + 0x74);
    local_4c8[2] = *(longlong *)(param_1 + 0x78);
    local_408 = local_4c8;
    plStack_400 = plStack_4c0;
    if (plStack_4c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_4c0 + 1) = (int)plStack_4c0[1] + 1;
      UNLOCK();
      plVar17 = local_508;
    }
    FMediaModule::SetTimeSource(plVar17,&local_408);
    plVar17 = plStack_400;
    plVar9 = plStack_4c0;
    if (plStack_400 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_400 + 1;
      lVar7 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_400)(plStack_400);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = plStack_4c0;
        if (iVar2 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
          plVar9 = plStack_4c0;
        }
      }
    }
LAB_14213e7a1:
    if (plVar9 == (longlong *)0x0) goto LAB_14213e7ee;
    LOCK();
    plVar17 = plVar9 + 1;
    lVar7 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_14213e7ee;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_14213e7ee;
    lVar7 = *plVar9;
  }
  (**(code **)(lVar7 + 8))(plVar9,1);
LAB_14213e7ee:
  plVar17 = local_500;
  if (local_500 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_500 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_500)(local_500);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_500 + 8))(local_500,1);
      }
    }
  }
  return;
}



// FUNCTION 14213e860 FUN_14213e860 body=38 status=ok
// SIG undefined FUN_14213e860(void)

void FUN_14213e860(longlong *param_1)

{
  FUN_14213dc10();
                    /* WARNING: Could not recover jumptable at 0x00014213e87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1,(int)param_1[0x23]);
  return;
}



// FUNCTION 14213e890 SynchronizeProperties body=113 status=ok
// SIG undefined SynchronizeProperties(void)

void UWidgetSwitcherSlot::SynchronizeProperties
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x38) = 1;
    *(undefined4 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(lVar1 + 0x2c) = uVar3;
    *(undefined4 *)(lVar1 + 0x30) = uVar4;
    *(undefined4 *)(lVar1 + 0x34) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x40,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x50) + 0x20) = (uint)*(byte *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        *(uint *)(*(longlong *)(param_1 + 0x50) + 0x24) = (uint)*(byte *)(param_1 + 0x49);
      }
    }
  }
  return;
}



// FUNCTION 14213e910 SynchronizeProperties body=138 status=ok
// SIG undefined SynchronizeProperties(void)

void UWindowTitleBarAreaSlot::SynchronizeProperties(longlong param_1)

{
  longlong lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(lVar1 + 0x120) != 0) {
      local_38 = *(undefined4 *)(param_1 + 0x38);
      uStack_34 = *(undefined4 *)(param_1 + 0x3c);
      uStack_30 = *(undefined4 *)(param_1 + 0x40);
      uStack_2c = *(undefined4 *)(param_1 + 0x44);
      local_28 = 1;
      local_20 = 0;
      local_18 = 0;
      SWindowTitleBarArea::SetPadding(*(longlong *)(lVar1 + 0x120),&local_38);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
    if (*(longlong *)(lVar1 + 0x120) != 0) {
      SBackgroundBlur::SetHAlign(*(longlong *)(lVar1 + 0x120),*(undefined1 *)(param_1 + 0x48));
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
    if (*(longlong *)(lVar1 + 0x120) != 0) {
      SBackgroundBlur::SetVAlign(*(longlong *)(lVar1 + 0x120),*(undefined1 *)(param_1 + 0x49));
      return;
    }
  }
  return;
}



// FUNCTION 14213e9a0 SynchronizeProperties body=118 status=ok
// SIG undefined SynchronizeProperties(void)

void UWrapBox::SynchronizeProperties(longlong param_1)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_14213dc10();
  SWrapBox::SetInnerSlotPadding(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x118));
  SWrapBox::SetUseAllottedWidth(*(undefined8 *)(param_1 + 0x128),*(char *)(param_1 + 0x124) == '\0')
  ;
  local_28 = *(undefined4 *)(param_1 + 0x120);
  local_20 = 0;
  local_18 = 0;
  local_24 = 1;
  SWrapBox::SetWrapWidth(*(undefined8 *)(param_1 + 0x128),&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return;
}



// FUNCTION 14213ea20 SynchronizeProperties body=258 status=ok
// SIG undefined SynchronizeProperties(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWrapBoxSlot::SynchronizeProperties(longlong param_1)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  float local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x58);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_44 = *(undefined4 *)(param_1 + 0x3c);
  uStack_40 = *(undefined4 *)(param_1 + 0x40);
  uStack_3c = *(undefined4 *)(param_1 + 0x44);
  lVar3 = 0;
  if (lVar4 != 0) {
    local_38 = 1;
    local_30 = 0;
    local_28 = 0;
    *(undefined1 *)(lVar4 + 0x38) = 1;
    *(undefined4 *)(lVar4 + 0x28) = local_48;
    *(undefined4 *)(lVar4 + 0x2c) = uStack_44;
    *(undefined4 *)(lVar4 + 0x30) = uStack_40;
    *(undefined4 *)(lVar4 + 0x34) = uStack_3c;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x40,&local_30);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
    lVar3 = *(longlong *)(param_1 + 0x58);
  }
  lVar4 = 0;
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x58) = *(undefined1 *)(param_1 + 0x48);
    lVar4 = *(longlong *)(param_1 + 0x58);
  }
  fVar1 = *(float *)(param_1 + 0x4c);
  if (lVar4 != 0) {
    bVar2 = fVar1 != 0.0;
    if (!bVar2) {
      fVar1 = local_20[0];
    }
    if (local_20 != (float *)(lVar4 + 0x50)) {
      if (*(char *)(lVar4 + 0x54) != '\0') {
        *(undefined1 *)(lVar4 + 0x54) = 0;
      }
      if (bVar2) {
        *(float *)(lVar4 + 0x50) = fVar1;
        *(undefined1 *)(lVar4 + 0x54) = 1;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(uint *)(*(longlong *)(param_1 + 0x58) + 0x20) = (uint)*(byte *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x58) + 0x24) = (uint)*(byte *)(param_1 + 0x51);
    }
  }
  return;
}



// FUNCTION 14213eb30 TakeWidget body=66 status=ok
// SIG undefined TakeWidget(void)

undefined8 UWidget::TakeWidget(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = UE4Function_Private::
             TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
             ::Call;
  FUN_14213eb80(0x420e6680,param_2,&local_18);
  return param_2;
}



// FUNCTION 14213eb80 FUN_14213eb80 body=1509 status=ok
// SIG undefined FUN_14213eb80(void)

undefined8 * FUN_14213eb80(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *local_res10;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar9 = (longlong *)0x0;
  bVar4 = false;
  uStack_c0 = (longlong *)0x0;
  if ((param_1[0x1a] != 0) && (param_1[0x1b] != 0)) {
    piVar1 = (int *)(param_1[0x1b] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_b0 = (longlong *)param_1[0x1b];
      local_c8 = plVar9;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_b0 + 1);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(local_b0 + 1) = 0;
          plVar6 = plVar9;
        }
        else {
          plVar6 = (longlong *)(ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar10) {
          iVar5 = (int)plVar6;
          LOCK();
          bVar10 = iVar5 == (int)local_b0[1];
          if (bVar10) {
            *(int *)(local_b0 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar10) {
            local_c8 = (longlong *)param_1[0x1a];
            goto LAB_14213ec2c;
          }
          plVar6 = (longlong *)0x0;
          LOCK();
          uVar3 = *(uint *)(local_b0 + 1);
          bVar10 = uVar3 == 0;
          if (bVar10) {
            *(uint *)(local_b0 + 1) = 0;
          }
          else {
            plVar6 = (longlong *)(ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_c8 = (longlong *)0x0;
        local_b0 = (longlong *)0x0;
      }
LAB_14213ec2c:
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_b0);
      plVar6 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      goto LAB_14213eda9;
    }
  }
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x2c0))(param_1,local_58);
  local_a0 = (longlong *)puVar8[1];
  local_c8 = (longlong *)*puVar8;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  local_a8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_a0);
  plVar6 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  param_1[0x1a] = (longlong)local_c8;
  plVar6 = (longlong *)param_1[0x1b];
  if (uStack_c0 != plVar6) {
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)uStack_c0 + 0xc) = *(int *)((longlong)uStack_c0 + 0xc) + 1;
      UNLOCK();
      plVar6 = (longlong *)param_1[0x1b];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    param_1[0x1b] = (longlong)uStack_c0;
  }
  bVar4 = true;
LAB_14213eda9:
  lVar7 = UUserWidget::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    local_d0 = (longlong *)param_1[0x1d];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)local_d0[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(local_d0 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)local_d0[1];
        if (bVar10) {
          *(int *)(local_d0 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar6 = (longlong *)param_1[0x1c];
          if (plVar6 == (longlong *)0x0) goto LAB_14213ee18;
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
          local_88 = 0;
          local_c8 = plVar6;
          local_80 = local_d0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_80);
          plVar6 = local_80;
          plVar9 = local_d0;
          if (local_80 == (longlong *)0x0) goto LAB_14213f09a;
          LOCK();
          plVar2 = local_80 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 != 1) goto LAB_14213f09a;
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = local_80;
          plVar9 = local_d0;
          if (iVar5 != 1) goto LAB_14213f09a;
          goto LAB_14213f08b;
        }
        LOCK();
        iVar5 = (int)local_d0[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(local_d0 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
      local_d0 = (longlong *)0x0;
    }
LAB_14213ee18:
    local_68 = (undefined4)local_c8;
    uStack_64 = local_c8._4_4_;
    uStack_60 = (undefined4)uStack_c0;
    uStack_5c = uStack_c0._4_4_;
    if (uStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
      UNLOCK();
    }
    lVar7 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    local_res10 = param_1;
    if (!bVar10) {
      local_res10 = plVar9;
    }
    puVar8 = (undefined8 *)(*(code *)*param_3)(local_48,param_3[1],&local_res10,&local_68);
    local_98 = (longlong *)*puVar8;
    local_90 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar9 = (longlong *)CONCAT44(uStack_5c,uStack_60);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar6 = local_98;
    local_98 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_90);
    plVar9 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    param_1[0x1c] = (longlong)plVar6;
    plVar9 = (longlong *)param_1[0x1d];
    if (local_d0 != plVar9) {
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)param_1[0x1d];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      param_1[0x1d] = (longlong)local_d0;
    }
    plVar9 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    local_c8 = plVar6;
    local_78 = 0;
    local_70 = local_d0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_70);
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = local_d0;
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = local_70;
        plVar9 = local_d0;
        if (iVar5 == 1) {
LAB_14213f08b:
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar9 = local_d0;
        }
      }
    }
LAB_14213f09a:
    plVar6 = local_d0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  if (bVar4) {
    (**(code **)(*param_1 + 0x2b0))(param_1);
    (**(code **)(*param_1 + 0x2c8))(param_1);
  }
  plVar9 = uStack_c0;
  *param_2 = local_c8;
  param_2[1] = uStack_c0;
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = uStack_c0 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_c0)(uStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*uStack_c0 + 8))(uStack_c0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14213f170 FUN_14213f170 body=649 status=ok
// SIG undefined FUN_14213f170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14213f170(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined **local_158 [2];
  code *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [24];
  undefined4 local_110;
  undefined8 local_100;
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar1 = UUserWidget::GetWidgetTreeOwningClass();
  FUN_1417812e0(local_128,*(undefined8 *)(lVar1 + 0x2e0),param_1);
  local_110 = 8;
  local_100 = 0x40000000;
  lVar2 = FUN_141798990(local_128);
  *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) | 0x80;
  uVar8 = 0;
  *(longlong *)(param_1 + 0x1a0) = lVar2;
  if (lVar2 != 0) {
    plVar7 = *(longlong **)(lVar1 + 0x300);
    uVar6 = (longlong)*(int *)(lVar1 + 0x308) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(lVar1 + 0x308) < plVar7) {
      uVar6 = uVar8;
    }
    if (uVar6 != 0) {
      local_158[0] = (undefined **)0x0;
      do {
        plVar4 = (longlong *)0x0;
        lVar2 = *plVar7;
        if (lVar2 != 0) {
          lVar3 = param_1;
          if (param_1 == -1) {
            lVar3 = GetTransientPackage();
          }
          local_168 = 0xff800000;
          local_170 = 0;
          local_178 = 0;
          plVar4 = (longlong *)FUN_1417987a0(lVar2,lVar3,0,0xefffffff);
        }
        lVar2 = (**(code **)(*plVar4 + 0x298))(plVar4);
        if (lVar2 != 0) {
          local_158[0] = &PTR_FUN_144f1b058;
          FUN_141f442e0(plVar4,local_158);
          lVar2 = (**(code **)(*plVar4 + 0x298))(plVar4);
          plVar5 = (longlong *)FUN_140c2d5e0(lVar1,*(undefined8 *)(lVar2 + 0x18));
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x380))
                      (plVar5,*(int *)((longlong)plVar5 + 0x44) + param_1,plVar4);
          }
        }
        plVar7 = plVar7 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
      lVar2 = *(longlong *)(param_1 + 0x1a0);
    }
    plStack_140 = &local_138;
    local_148 = FUN_1420e67d0;
    local_138 = param_1;
    local_130 = lVar1;
    if (*(undefined ***)(lVar2 + 0x28) != (undefined **)0x0) {
      local_158[0] = *(undefined ***)(lVar2 + 0x28);
      FUN_1420e67d0(&local_138,local_158);
      FUN_1420f6990(*(undefined8 *)(lVar2 + 0x28),&local_148,0);
    }
    FUN_142104e20(param_1);
  }
  local_48 = 0;
  if (local_50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_90);
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_e8);
  return;
}



// FUNCTION 14213f400 FUN_14213f400 body=427 status=ok
// SIG undefined FUN_14213f400(void)

void FUN_14213f400(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  lVar8 = 0;
  uStack_20 = (undefined1 *)CONCAT44(uStack_20._4_4_,(undefined4)uStack_20);
  if (param_1[0x60] != 0) {
    iVar7 = *(int *)(param_1[0x60] + 0xc);
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar10 = iVar7 >> 0x1f & 0xffff;
      uVar6 = iVar7 + uVar10;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    uStack_20 = (undefined1 *)CONCAT44(uStack_20._4_4_,(undefined4)uStack_20);
    if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) {
      uStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = 0x406ddef0;
      uStack_24 = 1;
      lVar8 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar8 + 0x58) == '\0') {
        (**(code **)(*(longlong *)param_1[0x60] + 800))((longlong *)param_1[0x60],param_2,param_4);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x67];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar11 = iVar7 == 0;
    if (bVar11) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (!bVar11) {
      while( true ) {
        LOCK();
        bVar11 = iVar7 == (int)plVar3[1];
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x66];
        if (plVar4 != (longlong *)0x0) {
          uVar9 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 0x61);
          cVar2 = *(char *)((longlong)param_1 + 0x345);
          cVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,uVar9);
          if (cVar2 != cVar5) {
            *(bool *)((longlong)param_1 + 0x345) = cVar2 == '\0';
            (**(code **)(*param_1 + 0x220))(param_1);
          }
        }
        LOCK();
        plVar4 = plVar3 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14213f5b0 FUN_14213f5b0 body=1241 status=ok
// SIG undefined FUN_14213f5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14213f5b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8 [2];
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  uint uStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 local_150;
  uint local_148 [4];
  uint *local_138;
  undefined8 local_130;
  undefined4 local_128;
  int local_124;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar10 = 0;
  local_1c8[0] = 0;
  local_198 = (uint *)CONCAT44(local_198._4_4_,(undefined4)local_198);
  if ((((*(char *)(param_1 + 0x6d0) == '\0') ||
       (local_198 = (uint *)CONCAT44(local_198._4_4_,(undefined4)local_198),
       *(longlong *)(param_1 + 0x300) == 0)) ||
      (*(undefined1 *)(param_1 + 0x6d0) = 0,
      local_198 = (uint *)CONCAT44(local_198._4_4_,(undefined4)local_198),
      *(int *)(param_1 + 0x630) == 0)) ||
     (local_198 = (uint *)CONCAT44(local_198._4_4_,(undefined4)local_198),
     *(longlong **)(param_1 + 0x628) == (longlong *)0x0)) goto LAB_14213fa4a;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x628) + 0x18))();
  local_198 = (uint *)CONCAT44(local_198._4_4_,(undefined4)local_198);
  if ((cVar3 == '\0') ||
     (local_198 = (uint *)CONCAT44(local_198._4_4_,(undefined4)local_198),
     *(longlong *)(param_1 + 0x648) == 0)) goto LAB_14213fa4a;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_158 = 0;
  local_150 = 0;
  local_138 = (uint *)0x0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  if (*(int *)(param_1 + 0x6bc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x6b0,0);
  }
  local_1d8 = &local_158;
  local_1d0 = 1;
  local_198._0_4_ = 0;
  local_198._4_4_ = 0;
  local_1e8 = &local_1a8;
  uStack_190 = 0;
  iStack_18c = 0;
  local_1e0 = &local_108;
  FUN_142116750(param_1,*(undefined8 *)(param_1 + 0x648),param_1 + 0x6b0,&local_1c0);
  uVar7 = uVar10;
  if (*(char *)(param_1 + 0x6d1) == '\0') {
    if (*(int *)(param_1 + 0x560) - *(int *)(param_1 + 0x58c) == (int)local_100 - local_d4) {
      lVar5 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Difference
                        (param_1 + 0x558,&local_1a8,&local_108);
      uVar7 = 1;
      if (*(int *)(lVar5 + 8) - *(int *)(lVar5 + 0x34) < 1) {
        lVar5 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Difference
                          (&local_108,&local_b8,param_1 + 0x558);
        uVar7 = 3;
        if (*(int *)(lVar5 + 8) - *(int *)(lVar5 + 0x34) < 1) goto LAB_14213f776;
      }
    }
    bVar1 = true;
  }
  else {
LAB_14213f776:
    bVar1 = false;
  }
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    local_70 = 0;
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
  }
  if ((uVar7 & 1) != 0) {
    local_160 = 0;
    if (local_168 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_1a8);
  }
  if (bVar1) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
              (param_1 + 0x558,&local_108);
    lVar5 = *(longlong *)(param_1 + 0x5b0);
    if ((lVar5 == 0) ||
       (piVar6 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                  (param_1 + 0x558,local_1c8,lVar5), *piVar6 == -1)) {
      *(undefined8 *)(param_1 + 0x5b0) = 0;
      *(undefined8 *)(param_1 + 0x5a8) = 0;
    }
    else if ((*(longlong *)(param_1 + 0x5a8) == 0) ||
            (piVar6 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                       (param_1 + 0x558,local_1c8), *piVar6 == -1)) {
      *(longlong *)(param_1 + 0x5a8) = lVar5;
    }
    (**(code **)(*(longlong *)(param_1 + 0x430) + 0x30))((longlong *)(param_1 + 0x430),3);
  }
  plVar8 = (longlong *)(param_1 + 0x650);
  local_198 = (uint *)CONCAT44(local_198._4_4_,(undefined4)local_198);
  if (plVar8 != &local_158) {
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(plVar8,(int)local_150 - local_124);
    puStack_a8 = local_148;
    local_1a8 = (longlong *)0x100000000;
    local_198._4_4_ = 0;
    uStack_190 = 0;
    if ((int)local_130 != 0) {
      puVar9 = local_148;
      if (local_138 != (uint *)0x0) {
        puVar9 = local_138;
      }
      uVar7 = *puVar9;
      while (uVar7 == 0) {
        uStack_190 = uStack_190 + 0x20;
        uVar2 = (ulonglong)local_1a8 >> 0x20;
        local_1a8 = (longlong *)CONCAT44((int)uVar2,uVar10 + 1);
        if ((int)((int)local_130 + -1 + ((int)local_130 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar10)
        {
          local_198._4_4_ = (int)local_130;
          goto LAB_14213f92d;
        }
        uVar7 = puVar9[(longlong)(int)uVar10 + 1];
        uVar10 = uVar10 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar4 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      local_1a8 = (longlong *)CONCAT44(uVar7,SUB84(local_1a8,0));
      if (uVar7 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_198._4_4_ = (uStack_190 - iVar4) + 0x1f;
      if ((int)local_130 < local_198._4_4_) {
        local_198._4_4_ = (int)local_130;
      }
    }
LAB_14213f92d:
    local_b8 = &local_158;
    uStack_b0 = local_1a8;
    uStack_a0 = 0xffffffff;
    iStack_9c = local_198._4_4_;
    iStack_98 = uStack_190;
    iStack_94 = iStack_18c;
    uStack_1a0 = local_1a8;
    local_188 = uStack_190;
    iStack_184 = iStack_18c;
    uStack_190 = 0xffffffff;
    iStack_18c = local_198._4_4_;
    bVar1 = local_198._4_4_ < (int)local_130;
    local_1a8 = local_b8;
    local_198 = puStack_a8;
    if (bVar1) {
      do {
        TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                  (plVar8,local_1c8,*local_1a8 + (longlong)iStack_18c * 0x18,0);
        uStack_190 = uStack_190 & ~uStack_1a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a0);
      } while (iStack_18c < (int)local_198[6]);
    }
  }
  TArray<FItemInfo,FDefaultAllocator>::operator=(param_1 + 0x6a0,&local_1c0);
  if ((int)local_1b8 != 0) {
    plVar8 = (longlong *)(local_1c0 + 0x10);
    iVar4 = (int)local_1b8;
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  local_110 = 0;
  if (local_118 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_158);
  local_c0 = 0;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_108);
LAB_14213fa4a:
  FUN_1419bd770(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14213fa90 FUN_14213fa90 body=811 status=ok
// SIG undefined FUN_14213fa90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14213fa90(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  uint local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_90;
  char local_8c;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
  local_c8 = lVar14;
  if ((*(byte *)(lVar14 + 0x830) & 0x20) == 0) {
    local_c0 = FUN_1428dfc70();
    local_b0[0] = 5;
    local_58 = '\0';
    local_b8 = lVar14;
    FUN_14044bc80(&local_a8,&local_b8,&local_c0);
    FUN_14045a130(local_b0);
    if (local_8c == '\0') {
LAB_14213fb41:
      FUN_142227cf0(local_80);
      lVar14 = local_a8;
      iVar17 = local_90 + 1;
      if (iVar17 < local_70 + local_98) {
        lVar16 = (longlong)iVar17 * 8;
        iVar15 = local_70;
        iVar11 = local_98;
        do {
          if (iVar17 < iVar11) {
            lVar13 = *(longlong *)(lVar16 + local_a0);
          }
          else {
            lVar13 = *(longlong *)(local_78 + (longlong)(iVar17 - iVar11) * 8);
          }
          local_88 = local_88 + 1;
          if ((lVar13 != 0) &&
             (lVar8 = AActor::GetLevel(lVar13), iVar15 = local_70, iVar11 = local_98, lVar8 != 0)) {
            if ((local_b0[0] & 1) != 0) {
              iVar1 = *(int *)(lVar13 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar12 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar12;
                lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                        (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
              }
              else {
                lVar9 = 0;
              }
              if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_14213fce8;
            }
            if (((local_b0[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar13), iVar15 = local_70,
               iVar11 = local_98, cVar6 != '\0')) {
              if ((local_b0[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar8 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar8 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar8 + 600);
                if (((*(longlong *)(lVar8 + 0xc0) == 0) ||
                    (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                   (piVar2 == piVar10)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar15 = local_70;
                iVar11 = local_98;
                if ((!bVar5) || (!bVar3)) goto LAB_14213fce8;
              }
              lVar8 = ULevel::GetWorld(lVar8);
              iVar15 = local_70;
              iVar11 = local_98;
              if (lVar8 == lVar14) {
                lVar8 = AActor::GetLevel(lVar13);
                if (lVar8 == *(longlong *)(lVar14 + 0x30)) goto LAB_14213fda4;
                lVar8 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar15 = local_70;
                iVar11 = local_98;
                if (!bVar5) goto LAB_14213fda4;
              }
            }
          }
LAB_14213fce8:
          iVar17 = iVar17 + 1;
          lVar16 = lVar16 + 8;
          if (iVar15 + iVar11 <= iVar17) break;
        } while( true );
      }
      local_80 = 0;
      local_8c = '\x01';
      lVar14 = local_c8;
    }
LAB_14213fd3c:
    if (local_58 != '\0') {
      local_58 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_a8,local_60);
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_a0 != 0) {
        FMemory::Free();
      }
    }
    *(uint *)(lVar14 + 0x830) = *(uint *)(lVar14 + 0x830) | 0x20;
  }
  FUN_142552700(lVar14,2,param_2);
  return;
LAB_14213fda4:
  lVar14 = local_c8;
  local_90 = iVar17;
  local_80 = lVar13;
  if (local_8c != '\0') goto LAB_14213fd3c;
  goto LAB_14213fb41;
}



// FUNCTION 14213fdc0 FUN_14213fdc0 body=117 status=ok
// SIG undefined FUN_14213fdc0(void)

void FUN_14213fdc0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  FUN_142880d70(*(longlong *)(param_1 + 0x370) + 8);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x370) + 0x158);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00014213fe2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x360) + 0x1e8))(*(longlong **)(param_1 + 0x360),param_4);
  return;
}



// FUNCTION 14213fe40 FUN_14213fe40 body=204 status=ok
// SIG undefined FUN_14213fe40(void)

void FUN_14213fe40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 800))
                  (*(longlong **)(param_1 + 0x300),param_2,param_4);
      }
    }
  }
  return;
}



// FUNCTION 14213ff10 FUN_14213ff10 body=2475 status=ok
// SIG undefined FUN_14213ff10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14213ff10(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar19;
  uint *puVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_328 [32];
  char local_308 [8];
  uint local_300;
  uint uStack_2fc;
  uint *puStack_2f8;
  undefined4 local_2f0;
  int iStack_2ec;
  uint uStack_2e8;
  undefined4 uStack_2e4;
  float local_2e0;
  float local_2dc;
  uint local_2d8;
  longlong *local_2d0;
  undefined8 uStack_2c8;
  uint *puStack_2c0;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined8 local_2a8;
  longlong *local_298;
  undefined8 uStack_290;
  uint *local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  longlong *local_268;
  undefined2 local_260;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined1 local_238;
  undefined1 local_237;
  undefined8 local_230;
  undefined4 local_228;
  uint local_220;
  undefined1 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_208;
  undefined1 local_207;
  undefined8 local_200;
  undefined4 local_1f8;
  uint local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  float local_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148;
  undefined1 local_147;
  undefined8 local_140;
  undefined4 local_138;
  char local_130 [8];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  longlong *plVar18;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  plVar18 = (longlong *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  lVar9 = FUN_1423111a0(param_1 + 0x2f0);
  local_2a8 = (longlong *)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
  if (lVar9 != 0) {
    plVar10 = (longlong *)FUN_142547b00(param_1 + 0x2f0);
    local_2a8 = (longlong *)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
    if (plVar10 != (longlong *)0x0) {
      uVar11 = (**(code **)(*plVar10 + 0x148))(plVar10);
      lVar9 = UWorld::GetGameViewport(uVar11);
      local_2a8 = (longlong *)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
      if (lVar9 != 0) {
        plVar13 = *(longlong **)(lVar9 + 0xe8);
        plVar16 = plVar13;
        plVar19 = plVar18;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          iVar8 = (int)plVar13[1];
          bVar21 = iVar8 == 0;
          if (bVar21) {
            *(int *)(plVar13 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
          while (plVar16 = plVar18, plVar19 = (longlong *)0x0, !bVar21) {
            LOCK();
            bVar21 = iVar8 == (int)plVar13[1];
            if (bVar21) {
              *(int *)(plVar13 + 1) = iVar8 + 1;
            }
            UNLOCK();
            if (bVar21) {
              plVar16 = plVar13;
              if (plVar13 != (longlong *)0x0) {
                plVar19 = *(longlong **)(lVar9 + 0xe0);
              }
              break;
            }
            LOCK();
            iVar8 = (int)plVar13[1];
            bVar21 = iVar8 == 0;
            if (bVar21) {
              *(int *)(plVar13 + 1) = 0;
              iVar8 = 0;
            }
            UNLOCK();
          }
        }
        lVar9 = (**(code **)*plVar19)(plVar19);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar16 + 1;
          lVar17 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        local_2d0 = (longlong *)(param_1 + 0x310);
        uStack_2fc = 1;
        iVar8 = *(int *)(param_1 + 0x338);
        puStack_2f8 = (uint *)(param_1 + 800);
        local_300 = 0;
        iStack_2ec = 0;
        uStack_2e8 = 0;
        if (iVar8 != 0) {
          puVar20 = *(uint **)(param_1 + 0x330);
          if (*(uint **)(param_1 + 0x330) == (uint *)0x0) {
            puVar20 = puStack_2f8;
          }
          uVar15 = *puVar20;
          plVar13 = plVar18;
          plVar16 = plVar18;
          while (uVar15 == 0) {
            iVar7 = (int)plVar13;
            uStack_2e8 = (int)plVar16 + 0x20;
            plVar16 = (longlong *)(ulonglong)uStack_2e8;
            local_300 = iVar7 + 1;
            plVar13 = (longlong *)(ulonglong)local_300;
            if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1421400f4;
            uVar15 = puVar20[(longlong)iVar7 + 1];
          }
          uStack_2fc = -uVar15 & uVar15;
          iVar7 = 0x1f;
          if (uStack_2fc != 0) {
            for (; uStack_2fc >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uStack_2fc == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          iStack_2ec = (uStack_2e8 - iVar7) + 0x1f;
          if (iVar8 < iStack_2ec) {
LAB_1421400f4:
            iStack_2ec = iVar8;
          }
        }
        local_2f0 = 0xffffffff;
        uStack_2b8 = CONCAT44(iStack_2ec,0xffffffff);
        auVar4._8_4_ = uStack_2e8;
        auVar4._0_8_ = uStack_2b8;
        auVar4._12_4_ = uStack_2e4;
        local_2a8._0_4_ = SUB84(local_2d0,0);
        local_2a8._4_4_ = (undefined4)((ulonglong)local_2d0 >> 0x20);
        uStack_2c8 = CONCAT44(uStack_2fc,local_300);
        local_260 = 0;
        uStack_2b0 = uStack_2e8;
        local_278._8_4_ = (undefined4)local_2a8;
        local_278._0_8_ = auVar4._8_8_;
        local_278._12_4_ = local_2a8._4_4_;
        iVar8 = iStack_2ec;
        puStack_2c0 = puStack_2f8;
        local_298 = local_2d0;
        uStack_290 = uStack_2c8;
        local_288 = puStack_2f8;
        uStack_280 = uStack_2b8;
        local_268 = local_2d0;
        local_2a8 = local_2d0;
        if (iStack_2ec < *(int *)(param_1 + 0x338)) {
          do {
            lVar17 = *local_298 + (longlong)iVar8 * 0x48;
            lVar12 = FWeakObjectPtr::Get(lVar17 + 8);
            uVar5 = local_d0;
            if (lVar12 == 0) {
              lVar17 = (longlong)(int)local_d0;
              iVar8 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,iVar8);
              if (local_d0._4_4_ < iVar8) {
                FUN_1407eebb0(local_e0,uVar5 & 0xffffffff);
              }
              puVar14 = local_e0;
              if (local_d8 != (undefined1 *)0x0) {
                puVar14 = local_d8;
              }
              *(undefined8 *)(puVar14 + lVar17 * 8) = 0;
            }
            else {
              local_248 = *(undefined4 *)(lVar12 + 0x220);
              uStack_244 = *(undefined4 *)(lVar12 + 0x224);
              local_240 = *(undefined4 *)(lVar12 + 0x228);
              local_110 = local_240;
              cVar6 = FUN_142119c10(plVar10,&local_248,&local_2e0);
              if (cVar6 == '\0') {
                if (*(longlong *)(lVar17 + 0x10) != 0) {
                  lVar12 = *(longlong *)(lVar17 + 0x18);
                  if ((*(int *)(lVar12 + 0xc0) != 0) &&
                     (*(longlong **)(lVar12 + 0xb8) != (longlong *)0x0)) {
                    cVar6 = (**(code **)(**(longlong **)(lVar12 + 0xb8) + 0x18))();
                    if (cVar6 != '\0') {
                      plVar13 = plVar18;
                      if (*(int *)(lVar12 + 0xc0) != 0) {
                        plVar13 = *(longlong **)(lVar12 + 0xb8);
                      }
                      (**(code **)(*plVar13 + 0x38))(plVar13,local_308);
                      *(char *)(lVar12 + 0xb0) = local_308[0];
                    }
                  }
                  if (*(char *)(lVar12 + 0xb0) != DAT_1464b9ee9) {
                    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                              (*(longlong *)(lVar17 + 0x10) + 0x718,0);
                  }
                }
                local_130[0] = DAT_1464b9ee9;
                local_130[1] = 1;
                local_128 = 0;
                local_120 = 0;
                (**(code **)(**(longlong **)(lVar17 + 0x18) + 0x1b8))
                          (*(longlong **)(lVar17 + 0x18),local_130);
              }
              else {
                local_148 = DAT_1464b9eec;
                local_147 = 1;
                local_140 = 0;
                local_138 = 0;
                (**(code **)(**(longlong **)(lVar17 + 0x18) + 0x1b8))
                          (*(longlong **)(lVar17 + 0x18),&local_148);
                lVar12 = *(longlong *)(lVar17 + 0x38);
                if (lVar12 != 0) {
                  lVar17 = *(longlong *)(lVar17 + 0x10);
                  fVar24 = local_2dc * *(float *)(lVar9 + 0x24) +
                           local_2e0 * *(float *)(lVar9 + 0x1c) + *(float *)(lVar9 + 0x2c);
                  fVar23 = local_2e0 * *(float *)(lVar9 + 0x20) +
                           local_2dc * *(float *)(lVar9 + 0x28) + *(float *)(lVar9 + 0x30);
                  fVar22 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                                 *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x24));
                  fVar25 = *(float *)(param_2 + 0x28) * fVar22 *
                           (fVar24 - *(float *)(param_2 + 0x2c)) -
                           *(float *)(param_2 + 0x24) * fVar22 *
                           (fVar23 - *(float *)(param_2 + 0x30));
                  fVar22 = *(float *)(param_2 + 0x1c) * fVar22 *
                           (fVar23 - *(float *)(param_2 + 0x30)) -
                           *(float *)(param_2 + 0x20) * fVar22 *
                           (fVar24 - *(float *)(param_2 + 0x2c));
                  if (lVar17 == 0) {
                    if ((*(float *)(param_1 + 0x300) == 0.0) && (*(float *)(param_1 + 0x304) == 0.0)
                       ) {
                      local_208 = 1;
                    }
                    else {
                      local_208 = 0;
                    }
                    local_207 = 1;
                    local_200 = 0;
                    local_1f8 = 0;
                    *(undefined1 *)(lVar12 + 0x90) = local_208;
                    *(undefined1 *)(lVar12 + 0x91) = 1;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x98,&local_200);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_200);
                    uStack_1a8 = *(undefined4 *)(param_1 + 0x300);
                    uStack_1a4 = *(undefined4 *)(param_1 + 0x304);
                    local_1a0 = 1;
                    local_198 = 0;
                    local_190 = 0;
                    *(undefined1 *)(lVar12 + 0x30) = 1;
                    *(float *)(lVar12 + 0x20) = fVar25;
                    *(float *)(lVar12 + 0x24) = fVar22;
                    *(undefined4 *)(lVar12 + 0x28) = uStack_1a8;
                    *(undefined4 *)(lVar12 + 0x2c) = uStack_1a4;
                    local_1b0 = fVar25;
                    fStack_1ac = fVar22;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x38,&local_198);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
                    puStack_2c0 = (uint *)CONCAT71(puStack_2c0._1_7_,1);
                    uStack_2b8 = 0;
                    uStack_2b0 = 0;
                    local_2d0 = (longlong *)0x0;
                    uStack_2c8 = 0;
                    *(undefined1 *)(lVar12 + 0x58) = 1;
                    *(undefined8 *)(lVar12 + 0x48) = 0;
                    *(undefined8 *)(lVar12 + 0x50) = 0;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x60,&uStack_2b8);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_2b8);
                    local_168 = *(undefined4 *)(param_1 + 0x308);
                    local_164 = *(undefined4 *)(param_1 + 0x30c);
                    *(undefined4 *)(lVar12 + 0x70) = local_168;
                    *(undefined4 *)(lVar12 + 0x74) = local_164;
                    local_160 = 1;
                    local_158 = 0;
                    local_150 = 0;
                    *(undefined1 *)(lVar12 + 0x78) = 1;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x80,&local_158);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_158);
                    local_1f0 = local_2d8 ^ 0x80000000;
                    local_1ec = 1;
                    *(uint *)(lVar12 + 0xa8) = local_1f0;
                    local_1e8 = 0;
                    local_1e0 = 0;
                    *(undefined1 *)(lVar12 + 0xac) = 1;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0xb0,&local_1e8);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e8);
                  }
                  else {
                    uVar2 = *(undefined4 *)(lVar17 + 0x75c);
                    uVar3 = *(undefined4 *)(lVar17 + 0x760);
                    fVar24 = (float)(int)*(undefined8 *)(lVar17 + 0x738);
                    fVar23 = (float)(int)((ulonglong)*(undefined8 *)(lVar17 + 0x738) >> 0x20);
                    if (((fVar24 == 0.0) && (fVar23 == 0.0)) || (*(char *)(lVar17 + 0x758) != '\0'))
                    {
                      local_238 = 1;
                    }
                    else {
                      local_238 = 0;
                    }
                    local_237 = 1;
                    local_230 = 0;
                    local_228 = 0;
                    *(undefined1 *)(lVar12 + 0x90) = local_238;
                    *(undefined1 *)(lVar12 + 0x91) = 1;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x98,&local_230);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_230);
                    local_1c8 = 1;
                    local_1c0 = 0;
                    local_1b8 = 0;
                    *(undefined1 *)(lVar12 + 0x30) = 1;
                    *(float *)(lVar12 + 0x20) = fVar25;
                    *(float *)(lVar12 + 0x24) = fVar22;
                    *(float *)(lVar12 + 0x28) = fVar24;
                    *(float *)(lVar12 + 0x2c) = fVar23;
                    local_1d8 = fVar25;
                    fStack_1d4 = fVar22;
                    fStack_1d0 = fVar24;
                    fStack_1cc = fVar23;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x38,&local_1c0);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c0);
                    local_f8 = 1;
                    local_f0 = 0;
                    local_e8 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    *(undefined1 *)(lVar12 + 0x58) = 1;
                    *(undefined8 *)(lVar12 + 0x48) = 0;
                    *(undefined8 *)(lVar12 + 0x50) = 0;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x60,&local_f0);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f0);
                    *(undefined4 *)(lVar12 + 0x70) = uVar2;
                    *(undefined4 *)(lVar12 + 0x74) = uVar3;
                    local_180 = 1;
                    local_178 = 0;
                    local_170 = 0;
                    *(undefined1 *)(lVar12 + 0x78) = 1;
                    local_188 = uVar2;
                    local_184 = uVar3;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x80,&local_178);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_178);
                    local_220 = local_2d8 ^ 0x80000000;
                    local_21c = 1;
                    *(uint *)(lVar12 + 0xa8) = local_220;
                    local_218 = 0;
                    local_210 = 0;
                    *(undefined1 *)(lVar12 + 0xac) = 1;
                    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0xb0,&local_218);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_218);
                  }
                }
              }
            }
            uStack_280 = CONCAT44(uStack_280._4_4_,(uint)uStack_280 & ~uStack_290._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_290);
            iVar8 = uStack_280._4_4_;
          } while (uStack_280._4_4_ < (int)local_288[6]);
          if (((char)local_260 != '\0') && (local_260._1_1_ != '\0')) {
            TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_268,(int)local_268[1] - *(int *)((longlong)local_268 + 0x34),1
                               );
          }
        }
      }
    }
  }
  plVar10 = plVar18;
  if (0 < (int)local_d0) {
    do {
      puVar14 = local_e0;
      if (local_d8 != (undefined1 *)0x0) {
        puVar14 = local_d8;
      }
      FUN_14212c450(param_1,*(undefined8 *)(puVar14 + (longlong)plVar10));
      uVar15 = (int)plVar18 + 1;
      plVar18 = (longlong *)(ulonglong)uVar15;
      plVar10 = plVar10 + 1;
    } while ((int)uVar15 < (int)local_d0);
  }
  if (local_d8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421408c0 FUN_1421408c0 body=2049 status=ok
// SIG undefined FUN_1421408c0(void)

void FUN_1421408c0(longlong param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 local_res8;
  undefined8 local_res18;
  float fStackX_24;
  undefined1 local_e8 [4];
  undefined8 local_e4;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined8 local_70;
  undefined4 local_68;
  
  if (*(int *)(param_1 + 0x6c0) != 1) {
    return;
  }
  param_2 = param_2 * *(float *)(param_1 + 0x6e8);
  if (*(char *)(param_1 + 0x6f0) == '\0') {
    param_2 = -param_2;
  }
  dVar24 = ((double)(int)*(undefined8 *)(param_1 + 0x6a0) * (double)param_2) /
           (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x6a0) >> 0x20);
  lVar19 = (longlong)dVar24;
  dVar7 = dVar24;
  if ((lVar19 != -0x8000000000000000) && ((double)lVar19 != dVar24)) {
    auVar6._8_4_ = SUB84(dVar24,0);
    auVar6._0_8_ = dVar24;
    auVar6._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    uVar14 = movmskpd(0,auVar6);
    dVar7 = (double)(longlong)(lVar19 - (ulonglong)(uVar14 & 1));
  }
  dVar24 = dVar24 - dVar7;
  dVar8 = dVar24;
  if ((0.0 < dVar24) && (dVar8 = 0.9999999403953552, dVar24 <= 0.9999999403953552)) {
    dVar8 = dVar24;
  }
  fVar22 = (float)dVar8;
  if (0.0 <= fVar22) {
    if (0.99999994 <= fVar22) {
      fVar22 = 0.99999994;
    }
  }
  else {
    fVar22 = 0.0;
  }
  uVar21 = *(ulonglong *)(param_1 + 0x6ac);
  fVar22 = fVar22 + *(float *)(param_1 + 0x6b0);
  uVar14 = (uint)uVar21;
  *(uint *)(param_1 + 0x6ac) = ((int)ROUND((fVar22 + fVar22) - 0.5) >> 1) + uVar14 + (int)dVar7;
  iVar17 = (int)fVar22;
  fVar23 = fVar22;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar22)) {
    auVar25._4_4_ = fVar22;
    auVar25._0_4_ = fVar22;
    auVar25._8_8_ = 0;
    uVar15 = movmskps((int)dVar7,auVar25);
    fVar23 = (float)(int)(iVar17 - (uVar15 & 1));
  }
  *(float *)(param_1 + 0x6b0) = fVar22 - fVar23;
  uVar4 = *(ulonglong *)(param_1 + 0x6ac);
  uVar15 = (uint)uVar4;
  local_res8._4_4_ = (float)(uVar4 >> 0x20);
  fVar22 = local_res8._4_4_;
  if (((int)uVar15 < 0) || ((uVar15 == 0 && (local_res8._4_4_ < 0.0)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  uVar2 = *(uint *)(param_1 + 0x6b4);
  if (((int)uVar2 < (int)uVar15) || ((uVar15 == uVar2 && (0.0 <= local_res8._4_4_)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  cVar1 = *(char *)(param_1 + 0x6f0);
  uVar5 = *(ulonglong *)(param_1 + 0x6b8);
  uVar20 = (uint)uVar5;
  local_res8._4_4_ = (float)(uVar21 >> 0x20);
  local_res18._4_4_ = (float)(uVar5 >> 0x20);
  uVar13 = uVar21;
  if (cVar1 == '\0') {
    if ((((int)uVar14 <= (int)uVar20) &&
        ((uVar14 != uVar20 || (local_res8._4_4_ <= local_res18._4_4_)))) ||
       (((int)uVar20 <= (int)uVar15 &&
        ((uVar13 = uVar5, uVar20 != uVar15 || (local_res18._4_4_ < fVar22)))))) goto LAB_142140b52;
LAB_142140ae9:
    bVar12 = true;
    local_res8 = uVar5;
  }
  else {
    if ((((int)uVar14 < (int)uVar20) ||
        ((uVar14 == uVar20 && (local_res8._4_4_ < local_res18._4_4_)))) &&
       (((int)uVar20 < (int)uVar15 ||
        ((uVar13 = uVar5, uVar20 == uVar15 && (local_res18._4_4_ <= fVar22)))))) goto LAB_142140ae9;
LAB_142140b52:
    local_res8 = uVar13;
    bVar12 = false;
  }
  if (((bVar9) || (bVar10)) ||
     ((bVar12 && (*(int *)(param_1 + 0x6e0) + -1 <= *(int *)(param_1 + 0x6e4))))) {
    *(int *)(param_1 + 0x6e4) = *(int *)(param_1 + 0x6e4) + 1;
  }
  if ((*(int *)(param_1 + 0x6e0) == 0) || (*(int *)(param_1 + 0x6e4) < *(int *)(param_1 + 0x6e0))) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (bVar9) {
    if (bVar11) {
      local_res8 = 0;
      *(undefined8 *)(param_1 + 0x6ac) = 0;
    }
    else if (*(int *)(param_1 + 0x6ec) == 2) {
      *(bool *)(param_1 + 0x6f0) = cVar1 == '\0';
      local_res8 = uVar4;
      if (((int)uVar15 < 1) && ((uVar15 != 0 || (fVar22 < 0.0)))) {
        if (fVar22 == 0.0) {
          local_res8 = (ulonglong)-uVar15;
          *(ulonglong *)(param_1 + 0x6ac) = local_res8;
          goto LAB_142140e44;
        }
        fVar22 = 1.0 - fVar22;
        if (fVar22 < 0.0) {
          local_res8 = (ulonglong)(-uVar15 - 1);
          *(ulonglong *)(param_1 + 0x6ac) = local_res8;
          goto LAB_142140e44;
        }
        if (0.99999994 <= fVar22) {
          fVar22 = 0.99999994;
        }
        local_res8 = CONCAT44(fVar22,-uVar15 - 1);
      }
      *(ulonglong *)(param_1 + 0x6ac) = local_res8;
    }
    else {
      local_res8 = (ulonglong)uVar2;
      fVar23 = *(float *)(param_1 + 0x6b0) + 0.0;
      iVar17 = ((int)ROUND(fVar23 * 2.0 - 0.5) >> 1) + uVar2;
      *(int *)(param_1 + 0x6ac) = *(int *)(param_1 + 0x6ac) + iVar17;
      iVar18 = (int)fVar23;
      fVar22 = fVar23;
      if ((iVar18 != -0x80000000) && ((float)iVar18 != fVar23)) {
        auVar26._4_4_ = fVar23;
        auVar26._0_4_ = fVar23;
        auVar26._8_8_ = 0;
        uVar14 = movmskps(iVar17,auVar26);
        fVar22 = (float)(int)(iVar18 - (uVar14 & 1));
      }
      *(float *)(param_1 + 0x6b0) = fVar23 - fVar22;
      uVar21 = *(ulonglong *)(param_1 + 0x6ac);
    }
  }
  else if (bVar10) {
    local_res18 = CONCAT44(0x3f7fffff,uVar2 - 1);
    if (bVar11) {
      *(ulonglong *)(param_1 + 0x6ac) = local_res18;
    }
    else if (*(int *)(param_1 + 0x6ec) == 2) {
      *(bool *)(param_1 + 0x6f0) = cVar1 == '\0';
      fVar22 = fVar22 - 0.0;
      iVar17 = (int)ROUND((fVar22 + fVar22) - 0.5) >> 1;
      local_res8._4_4_ = fVar22 - (float)iVar17;
      if (0.0 <= local_res8._4_4_) {
        if (0.99999994 <= local_res8._4_4_) {
          local_res8._4_4_ = 0.99999994;
        }
      }
      else {
        local_res8._4_4_ = 0.0;
      }
      local_res8._4_4_ = 0.99999994 - local_res8._4_4_;
      iVar18 = (int)ROUND((local_res8._4_4_ + local_res8._4_4_) - 0.5) >> 1;
      uVar14 = (iVar18 - ((uVar15 - uVar2) + iVar17)) + (uVar2 - 1);
      local_res8._4_4_ = local_res8._4_4_ - (float)iVar18;
      if (0.0 <= local_res8._4_4_) {
        if (0.99999994 <= local_res8._4_4_) {
          local_res8._4_4_ = 0.99999994;
        }
        local_res8 = CONCAT44(local_res8._4_4_,uVar14);
        *(ulonglong *)(param_1 + 0x6ac) = local_res8;
      }
      else {
        local_res8 = (ulonglong)uVar14;
        *(ulonglong *)(param_1 + 0x6ac) = local_res8;
      }
    }
    else {
      fVar22 = fVar22 - 0.0;
      iVar17 = (int)ROUND((fVar22 + fVar22) - 0.5) >> 1;
      uVar14 = (uVar15 - uVar2) + iVar17;
      fVar22 = fVar22 - (float)iVar17;
      if (0.0 <= fVar22) {
        if (0.99999994 <= fVar22) {
          fVar22 = 0.99999994;
        }
        local_res8 = CONCAT44(fVar22,uVar14);
        *(ulonglong *)(param_1 + 0x6ac) = local_res8;
        uVar21 = local_res8;
      }
      else {
        local_res8 = (ulonglong)uVar14;
        *(ulonglong *)(param_1 + 0x6ac) = local_res8;
        uVar21 = local_res8;
      }
    }
  }
  else if ((bVar12) && (bVar11)) {
    *(ulonglong *)(param_1 + 0x6ac) = uVar5;
  }
LAB_142140e44:
  lVar19 = FWeakObjectPtr::Get(param_1 + 0x388);
  if ((lVar19 != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x378) + 0x298))();
    *(byte *)(param_1 + 0x6f1) = *(byte *)(param_1 + 0x6f1) | 1;
    local_res18._4_4_ = (float)(uVar21 >> 0x20);
    local_res18._4_4_ = local_res18._4_4_ + 0.0;
    uVar14 = ((int)ROUND((local_res18._4_4_ + local_res18._4_4_) - 0.5) >> 1) + (int)uVar21 +
             *(int *)(param_1 + 0x6a8);
    iVar17 = (int)local_res18._4_4_;
    fVar22 = local_res18._4_4_;
    if ((iVar17 != -0x80000000) && ((float)iVar17 != local_res18._4_4_)) {
      auVar27._4_4_ = local_res18._4_4_;
      auVar27._0_4_ = local_res18._4_4_;
      auVar27._8_8_ = 0;
      uVar15 = movmskps(uVar14,auVar27);
      fVar22 = (float)(int)(iVar17 - (uVar15 & 1));
    }
    local_res18._4_4_ = local_res18._4_4_ - fVar22;
    if (0.0 <= local_res18._4_4_) {
      if (0.99999994 <= local_res18._4_4_) {
        local_res18._4_4_ = 0.99999994;
      }
      local_res8 = CONCAT44(local_res18._4_4_,uVar14);
    }
    else {
      local_res8 = (ulonglong)uVar14;
    }
    fStackX_24 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x6ac) >> 0x20);
    fStackX_24 = fStackX_24 + 0.0;
    uVar14 = ((int)ROUND((fStackX_24 + fStackX_24) - 0.5) >> 1) +
             (int)*(undefined8 *)(param_1 + 0x6ac) + *(int *)(param_1 + 0x6a8);
    iVar17 = (int)fStackX_24;
    fVar22 = fStackX_24;
    if ((iVar17 != -0x80000000) && ((float)iVar17 != fStackX_24)) {
      auVar28._4_4_ = fStackX_24;
      auVar28._0_4_ = fStackX_24;
      auVar28._8_8_ = 0;
      uVar15 = movmskps(uVar14,auVar28);
      fVar22 = (float)(int)(iVar17 - (uVar15 & 1));
    }
    fStackX_24 = fStackX_24 - fVar22;
    if (0.0 <= fStackX_24) {
      if (0.99999994 <= fStackX_24) {
        fStackX_24 = 0.99999994;
      }
      local_res18 = CONCAT44(fStackX_24,uVar14);
    }
    else {
      local_res18 = (ulonglong)uVar14;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x6c0);
    puVar16 = (undefined1 *)
              FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                        (local_e8,local_res18,local_res8,*(undefined8 *)(param_1 + 0x6a0),0);
    local_70 = 0x3f800000;
    local_68 = 0;
    local_dc = puVar16[0xc];
    local_d8 = *(undefined8 *)(puVar16 + 0x10);
    local_d0 = *(undefined8 *)(puVar16 + 0x18);
    local_c8 = *(undefined4 *)(puVar16 + 0x20);
    local_e8[0] = *puVar16;
    local_e4 = *(undefined8 *)(puVar16 + 4);
    local_c4 = *(undefined4 *)(puVar16 + 0x24);
    local_a8 = local_a8 & 0xc0;
    local_b8 = 0;
    local_c0 = 0x3f800000;
    local_b0 = 0x80000000;
    local_ac = 0;
    local_b4 = uVar3;
    FUN_141f4a590(param_1 + 0x388,local_e8,param_1 + 0x28,DAT_146ae7800);
    *(byte *)(param_1 + 0x6f1) = *(byte *)(param_1 + 0x6f1) & 0xfe;
    FUN_1420e18a0(param_1);
  }
  if (bVar11) {
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x6c8,param_1);
    local_res8 = FWeakObjectPtr::Get(param_1 + 0x380);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 0x378) + 0x358,&local_res8);
  }
  return;
}



// FUNCTION 1421410d0 FUN_1421410d0 body=574 status=ok
// SIG undefined FUN_1421410d0(void)

void FUN_1421410d0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong local_48;
  longlong *local_40;
  
  uVar7 = 0;
  iVar13 = (int)param_1[0x2f];
  uVar12 = uVar7;
  if (0 < iVar13) {
    do {
      FUN_1421408c0(*(undefined8 *)(uVar7 + param_1[0x2e]),param_3);
      iVar13 = (int)param_1[0x2f];
      uVar7 = uVar7 + 8;
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar13);
  }
  uVar12 = 0;
  plVar14 = (longlong *)param_1[0x30];
  uVar7 = (longlong)(int)param_1[0x31] & 0x1fffffffffffffff;
  if (plVar14 + (int)param_1[0x31] < plVar14) {
    uVar7 = uVar12;
  }
  if (uVar7 != 0) {
    do {
      uVar8 = 0;
      iVar6 = (int)param_1[0x2f];
      lVar5 = *plVar14;
      uVar11 = uVar8;
      if (0 < iVar6) {
        do {
          iVar9 = (int)uVar8;
          lVar3 = param_1[0x2e];
          if (*(longlong *)(uVar11 + lVar3) == lVar5) {
            iVar4 = (iVar6 - iVar9) + -1;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar3 + (longlong)iVar9 * 8),
                         (void *)(lVar3 + (longlong)(iVar6 - iVar4) * 8),(longlong)iVar4 << 3);
              iVar6 = (int)param_1[0x2f];
            }
            *(int *)(param_1 + 0x2f) = iVar6 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x2e);
            iVar6 = (int)param_1[0x2f];
            iVar9 = iVar9 + -1;
            uVar11 = uVar11 - 8;
          }
          uVar8 = (ulonglong)(iVar9 + 1U);
          uVar11 = uVar11 + 8;
        } while ((int)(iVar9 + 1U) < iVar6);
      }
      plVar14 = plVar14 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar7);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (*(int *)((longlong)param_1 + 0x18c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
  }
  if ((0 < iVar13) && ((int)param_1[0x2f] < 1)) {
    FUN_1420f9830(param_1,&local_48);
    if (local_48 != 0) {
      FUN_1418475e0(local_48,5);
    }
    plVar14 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 400) == 0) {
      lVar5 = lVar5 + 0x400;
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 400) + 0x98);
    }
    FUN_1425328c0(lVar5,param_1,param_3);
  }
  return;
}



// FUNCTION 142141310 FUN_142141310 body=1403 status=ok
// SIG undefined FUN_142141310(void)

void FUN_142141310(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  double dVar12;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *local_30;
  
  FUN_142357eb0();
  (**(code **)(*param_1 + 0x938))(param_1);
  if ((param_1[0xf3] != 0) || (param_1[0xf4] != 0)) {
    if ((char)param_1[0xe5] == '\x01') {
      if ((param_1[0xf3] != 0) || (param_1[0xf4] != 0)) {
        lVar5 = param_1[0x24];
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        lVar6 = FUN_1420fd490(param_1);
        local_50 = lVar6;
        if (((lVar6 == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) ||
           (cVar3 = (**(code **)(*param_1 + 0x460))(param_1), cVar3 == '\0')) {
          if ((char)param_1[0x101] != '\0') {
            FUN_14212cbc0(param_1);
          }
        }
        else if ((((char)param_1[0x101] == '\0') &&
                 (cVar3 = UWorld::IsGameWorld(lVar5), cVar3 != '\0')) &&
                ((lVar7 = UWorld::GetGameViewport(lVar5), lVar7 != 0 &&
                 (plVar2 = *(longlong **)(lVar7 + 0xe8), plVar2 != (longlong *)0x0)))) {
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (!bVar11) {
            LOCK();
            bVar11 = iVar4 == (int)plVar2[1];
            if (bVar11) {
              *(int *)(plVar2 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar11) {
              if (plVar2 == (longlong *)0x0) {
                return;
              }
              plVar8 = *(longlong **)(lVar7 + 0xe0);
              local_78 = plVar8;
              if (plVar8 == (longlong *)0x0) goto LAB_142141810;
              local_90 = (longlong *)0x0;
              FLocalPlayerContext::FLocalPlayerContext(&local_60,lVar6,lVar5);
              (**(code **)(*plVar8 + 0x38))(plVar8,&local_48,lVar6,param_1 + 0x102);
              if (local_48 == (longlong *)0x0) {
                plVar8 = (longlong *)operator_new(0x48);
                plVar10 = (longlong *)0x0;
                local_98 = plVar10;
                if (plVar8 != (longlong *)0x0) {
                  plVar8[1] = 0;
                  plVar8[2] = 0;
                  *plVar8 = (longlong)&PTR_FUN_144fafab0;
                  FLocalPlayerContext::FLocalPlayerContext(plVar8 + 3);
                  plVar8[5] = 0;
                  plVar8[6] = 0;
                  plVar8[7] = 0;
                  plVar8[8] = 0;
                  *(undefined4 *)(plVar8 + 3) = local_60;
                  *(undefined4 *)((longlong)plVar8 + 0x1c) = local_5c;
                  *(undefined4 *)(plVar8 + 4) = local_58;
                  *(undefined4 *)((longlong)plVar8 + 0x24) = local_54;
                  local_98 = plVar8;
                }
                plVar9 = (longlong *)operator_new(0x18);
                plVar8 = plVar10;
                if (plVar9 != (longlong *)0x0) {
                  *(undefined4 *)(plVar9 + 1) = 1;
                  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
                  *plVar9 = (longlong)&PTR_FUN_143f3f2d0;
                  plVar9[2] = (longlong)local_98;
                  plVar8 = plVar9;
                }
                plVar9 = local_98 + 1;
                if (local_98 == (longlong *)0x0) {
                  plVar9 = plVar10;
                }
                if (plVar9 != (longlong *)0x0) {
                  if ((*plVar9 != 0) && (plVar9[1] != 0)) {
                    piVar1 = (int *)(plVar9[1] + 8);
                    LOCK();
                    iVar4 = *piVar1;
                    if (iVar4 == 0) {
                      *piVar1 = 0;
                      iVar4 = 0;
                    }
                    UNLOCK();
                    if (0 < iVar4) goto LAB_142141631;
                  }
                  if (plVar8 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                    UNLOCK();
                  }
                  *plVar9 = (longlong)local_98;
                  plVar10 = (longlong *)plVar9[1];
                  if (plVar8 != plVar10) {
                    if (plVar8 != (longlong *)0x0) {
                      LOCK();
                      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
                      UNLOCK();
                      plVar10 = (longlong *)plVar9[1];
                    }
                    if (plVar10 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar10 + 8))(plVar10,1);
                      }
                    }
                    plVar9[1] = (longlong)plVar8;
                  }
                  if (plVar8 != (longlong *)0x0) {
                    LOCK();
                    plVar10 = plVar8 + 1;
                    lVar5 = *plVar10;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*plVar8)(plVar8);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar8 + 0xc);
                      iVar4 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar8 + 8))(plVar8,1);
                      }
                    }
                  }
                }
LAB_142141631:
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                  UNLOCK();
                }
                local_38 = local_98;
                local_30 = plVar8;
                (**(code **)(*local_78 + 0x40))
                          (local_78,local_50,param_1 + 0x102,&local_38,(int)param_1[0x103]);
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                  UNLOCK();
                }
                local_70 = 0;
                local_68 = plVar8;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&local_90,&local_68);
                plVar10 = local_68;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_68 + 1;
                  lVar5 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_68)(local_68);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*local_68 + 8))(local_68,1);
                    }
                  }
                }
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = plVar8 + 1;
                  lVar5 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar8)(plVar8);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar8 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      lVar5 = *plVar8;
LAB_14214176e:
                      (**(code **)(lVar5 + 8))(plVar8,1);
                    }
                  }
                }
              }
              else {
                plStack_80 = plStack_40;
                if (plStack_40 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
                  UNLOCK();
                }
                local_98 = local_48;
                local_88 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&local_90,&plStack_80);
                plVar8 = plStack_80;
                if (plStack_80 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = plStack_80 + 1;
                  lVar5 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plStack_80)(plStack_80);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar8 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      lVar5 = *plStack_80;
                      plVar8 = plStack_80;
                      goto LAB_14214176e;
                    }
                  }
                }
              }
              *(undefined1 *)(param_1 + 0x101) = 1;
              FUN_1421342d0(param_1[0xf3],&local_60);
              FUN_1420df330(local_98,param_1);
              if (plStack_40 != (longlong *)0x0) {
                LOCK();
                plVar8 = plStack_40 + 1;
                lVar5 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plStack_40)(plStack_40);
                  LOCK();
                  piVar1 = (int *)((longlong)plStack_40 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plStack_40 + 8))(plStack_40,1);
                  }
                }
              }
              plVar8 = local_90;
              if (local_90 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_90 + 1;
                lVar5 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_90)(local_90);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*local_90 + 8))(local_90,1);
                  }
                }
              }
LAB_142141810:
              LOCK();
              plVar8 = plVar2 + 1;
              lVar5 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar5 != 1) {
                return;
              }
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 != 1) {
                return;
              }
              (**(code **)(*plVar2 + 8))(plVar2,1);
              return;
            }
            LOCK();
            iVar4 = (int)plVar2[1];
            bVar11 = iVar4 == 0;
            if (bVar11) {
              *(int *)(plVar2 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
      }
    }
    else {
      cVar3 = (**(code **)(*param_1 + 0x968))(param_1);
      if (cVar3 != '\0') {
        dVar12 = 0.0;
        if ((double)param_1[0xe9] != 0.0) {
          dVar12 = (double)FUN_1420f9f90(param_1);
          dVar12 = dVar12 - (double)param_1[0xe9];
        }
                    /* WARNING: Could not recover jumptable at 0x00014214139c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x970))(param_1,(float)dVar12);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142141890 FUN_142141890 body=27 status=ok
// SIG undefined FUN_142141890(void)

void FUN_142141890(undefined8 param_1)

{
  FUN_142357eb0();
  FUN_142137190(param_1);
  return;
}



// FUNCTION 1421418b0 FUN_1421418b0 body=227 status=ok
// SIG undefined FUN_1421418b0(void)

void FUN_1421418b0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar2 = (longlong *)param_1[6];
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  plVar9 = plVar8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = (longlong *)param_1[5];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  cVar4 = (**(code **)(*plVar9 + 0x58))(plVar9,(int)param_1[7]);
  if (cVar4 != '\0') {
    if (param_1 == (longlong *)0x308) {
      param_1 = plVar8;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x38))(plVar9,param_1);
    lVar3 = *plVar9;
    cVar4 = (**(code **)(lVar3 + 0x50))(plVar9,puVar6);
    (**(code **)(lVar3 + 0x40))(plVar9,*puVar6,cVar4 == '\0');
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  return;
}



// FUNCTION 1421419a0 FUN_1421419a0 body=224 status=ok
// SIG undefined FUN_1421419a0(void)

void FUN_1421419a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_res10;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 0x390);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  cVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,*(undefined4 *)(param_1 + 0x3a0));
  if (cVar4 != '\0') {
    puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1);
    local_res10 = *puVar6;
    cVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,&local_res10);
    (**(code **)(*plVar8 + 0x40))(plVar8,local_res10,cVar4 == '\0');
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  return;
}



// FUNCTION 142141a80 ToggleOpen body=78 status=ok
// SIG undefined ToggleOpen(void)

void UMenuAnchor::ToggleOpen(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    cVar3 = FUN_14192b710(plVar1);
    (**(code **)(lVar2 + 0x210))(plVar1,cVar3 == '\0',param_2,0);
  }
  return;
}



// FUNCTION 142141ad0 FUN_142141ad0 body=1035 status=ok
// SIG undefined FUN_142141ad0(void)

undefined8 *
FUN_142141ad0(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  
  bVar12 = false;
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar6 != '\0') {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
    cVar6 = UWorld::IsGameWorld(uVar7);
    if (cVar6 != '\0') {
      uVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
      lVar8 = UEngine::GetLocalPlayerFromControllerId(DAT_146b17150,uVar7,0);
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x30) != 0)) {
        puVar13 = *(undefined8 **)(param_1 + 8);
        local_b0 = puVar13 + *(int *)(param_1 + 0x10);
        fVar16 = (float)((ulonglong)*param_5 >> 0x20);
        fVar17 = 1.0 / (*(float *)(param_4 + 0x1c) * *(float *)(param_4 + 0x28) -
                       *(float *)(param_4 + 0x20) * *(float *)(param_4 + 0x24));
        fVar14 = fVar17 * *(float *)(param_4 + 0x28);
        fVar15 = -(fVar17 * *(float *)(param_4 + 0x20));
        fVar18 = fVar17 * *(float *)(param_4 + 0x1c);
        fVar17 = -(fVar17 * *(float *)(param_4 + 0x24));
        local_res8._0_4_ = (float)*param_5;
        local_res8 = (longlong *)
                     CONCAT44((fVar16 * fVar18 + (float)local_res8 * fVar15 +
                              -*(float *)(param_4 + 0x30) * fVar18 +
                              -*(float *)(param_4 + 0x2c) * fVar15) * *(float *)(param_4 + 8),
                              (fVar16 * fVar17 + (float)local_res8 * fVar14 +
                              -*(float *)(param_4 + 0x30) * fVar17 +
                              -*(float *)(param_4 + 0x2c) * fVar14) * *(float *)(param_4 + 8));
        plVar5 = local_res8;
        plVar11 = local_res8;
        if (puVar13 != local_b0) {
          do {
            local_res8 = (longlong *)*puVar13;
            plVar9 = (longlong *)FWeakObjectPtr::Get(&local_res8);
            if (plVar9 == (longlong *)0x0) {
LAB_142141d05:
              bVar4 = false;
            }
            else {
              plVar11 = (longlong *)plVar9[0x106];
              bVar12 = true;
              lVar3 = plVar9[0x105];
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              if ((lVar3 == 0) || (lVar3 != *param_3)) goto LAB_142141d05;
              bVar4 = true;
            }
            if ((bVar12) && (bVar12 = false, plVar11 != (longlong *)0x0)) {
              LOCK();
              plVar10 = plVar11 + 1;
              lVar3 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            if ((((bVar4) &&
                 (plVar10 = (longlong *)
                            FWidget3DHitTester::GetHitResultAtScreenPositionAndCache
                                      (param_1,*(undefined8 *)(lVar8 + 0x30),plVar5),
                 plVar10 != (longlong *)0x0)) && (*(char *)((longlong)plVar9 + 0x764) != '\0')) &&
               ((((float)(int)plVar9[0xe7] != 0.0 &&
                 ((float)(int)((ulonglong)plVar9[0xe7] >> 0x20) != 0.0)) && (plVar9 == plVar10)))) {
              local_98 = (undefined8 *)operator_new(0x10);
              if (local_98 == (undefined8 *)0x0) {
                local_98 = (undefined8 *)0x0;
              }
              else {
                *(undefined4 *)local_98 = (undefined4)DAT_1468b5d88;
                *(undefined4 *)((longlong)local_98 + 4) = DAT_1468b5d88._4_4_;
                *(undefined4 *)(local_98 + 1) = (undefined4)DAT_1468b5d88;
                *(undefined4 *)((longlong)local_98 + 0xc) = DAT_1468b5d88._4_4_;
              }
              local_90 = (undefined8 *)operator_new(0x18);
              if (local_90 != (undefined8 *)0x0) {
                *(undefined4 *)(local_90 + 1) = 1;
                *local_90 = &PTR_FUN_144d50328;
                *(undefined4 *)((longlong)local_90 + 0xc) = 1;
                local_90[2] = local_98;
              }
              SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
              local_a0 = *(undefined4 *)(param_1 + 0x4c);
              local_a8 = *(undefined8 *)(param_1 + 0x44);
              (**(code **)(*plVar9 + 0x948))(plVar9,&local_a8,&local_b8);
              *local_98 = local_b8;
              local_98[1] = local_b8;
              *param_2 = local_98;
              param_2[1] = local_90;
              return param_2;
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 != local_b0);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142141ee0 FUN_142141ee0 body=370 status=ok
// SIG undefined FUN_142141ee0(void)

void FUN_142141ee0(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  (**(code **)(*param_1 + 0x70))(param_1,1);
  lVar5 = (longlong)(int)param_1[0x6f];
  if ((int)param_1[0x6f] != 0) {
    lVar2 = param_1[0x6e];
    iVar6 = 0;
    bVar7 = ((*(int *)(lVar2 + 0x1c) != param_2[3] || *(int *)(lVar2 + 0x14) != param_2[1]) ||
            *(int *)(lVar2 + 0x18) != param_2[2]) || *param_2 != *(int *)(lVar2 + 0x10);
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar2 = lVar2 + 1;
      iVar4 = iVar3 + 1;
      if (lVar2 < lVar5) {
        piVar1 = (int *)(param_1[0x6e] + (lVar2 * 5 + 3) * 8);
        do {
          if (bVar7 != (((piVar1[-2] != *param_2 || piVar1[-1] != param_2[1]) ||
                        piVar1[1] != param_2[3]) || param_2[2] != *piVar1)) break;
          iVar4 = iVar4 + 1;
          lVar2 = lVar2 + 1;
          piVar1 = piVar1 + 10;
        } while (lVar2 < lVar5);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0x6e] + (longlong)iVar6 * 0x28),
                     (void *)(param_1[0x6e] + (longlong)iVar3 * 0x28),
                     (longlong)(iVar4 - iVar3) * 0x28);
        }
        iVar6 = iVar6 + (iVar4 - iVar3);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar3 = iVar4;
    } while (lVar2 < lVar5);
    *(int *)(param_1 + 0x6f) = iVar6;
  }
  return;
}



// FUNCTION 142142060 Unhandled body=178 status=ok
// SIG undefined Unhandled(void)

undefined8 UWidgetBlueprintLibrary::Unhandled(undefined8 param_1)

{
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
  
  FEventReply::FEventReply(param_1,0);
  local_14 = local_14 & 0xffffff00;
  local_c8[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
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
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0x20702;
  FUN_140439160(param_1,local_c8);
  FUN_140438c20(local_c8);
  return param_1;
}



// FUNCTION 142142120 FUN_142142120 body=185 status=ok
// SIG undefined FUN_142142120(void)

undefined8 FUN_142142120(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) | 0x10;
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_2 + 0x58) != &local_18) {
    *(undefined8 *)(param_2 + 0x58) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x60,&local_10);
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
  }
  FUN_140459130(param_2,param_2);
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 1421421e0 FUN_1421421e0 body=531 status=ok
// SIG undefined FUN_1421421e0(void)

void FUN_1421421e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (((*(char *)(param_1 + 0x764) != '\0') && (*(char *)(param_1 + 0x81c) == '\0')) &&
     (*param_2 != 0)) {
    FUN_1419843c0(*param_2,&local_48);
    plVar4 = local_40;
    if (local_48 != 0) {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      if (local_48 != 0) {
        FWeakObjectPtr::operator=(local_res8,param_1);
        lVar3 = *(longlong *)(local_48 + 8);
        iVar8 = *(int *)(local_48 + 0x10);
        for (lVar9 = lVar3; lVar9 != (longlong)iVar8 * 8 + lVar3; lVar9 = lVar9 + 8) {
          cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar9,local_res8);
          if (cVar5 != '\0') {
            iVar8 = (int)(lVar9 - lVar3 >> 3);
            if (iVar8 != -1) {
              iVar7 = *(int *)(local_48 + 0x10);
              iVar6 = (iVar7 - iVar8) + -1;
              if (0 < iVar6) {
                iVar6 = 1;
              }
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(local_48 + 8) + (longlong)iVar8 * 8),
                           (void *)(*(longlong *)(local_48 + 8) + (longlong)(iVar7 - iVar6) * 8),
                           (longlong)iVar6 << 3);
                iVar7 = *(int *)(local_48 + 0x10);
              }
              *(int *)(local_48 + 0x10) = iVar7 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(local_48 + 8);
            }
            break;
          }
        }
        if (*(int *)(local_48 + 0x10) == 0) {
          local_38 = 0;
          uStack_30 = 0;
          FUN_1419a1a40(*param_2,&local_38);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
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
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142142400 FUN_142142400 body=59 status=ok
// SIG undefined FUN_142142400(void)

void FUN_142142400(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x36] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x2a0))();
    if (lVar1 != 0) {
      FUN_142712050(lVar1,param_1[0x36]);
      return;
    }
  }
  return;
}



// FUNCTION 142142440 FUN_142142440 body=295 status=ok
// SIG undefined FUN_142142440(void)

void FUN_142142440(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)(param_1 + 0x828);
  lVar5 = *plVar3;
  if (lVar5 != 0) {
    if (((*(char *)(param_1 + 0x764) == '\0') || (*(char *)(param_1 + 0x81c) != '\0')) &&
       (DAT_1469f4590 != 0)) {
      plVar6 = *(longlong **)(param_1 + 0x830);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_18 = lVar5;
      local_10 = plVar6;
      FAudioDevice::RegisterPluginListener(DAT_1469f4590,&local_18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)();
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
    }
    local_20 = (longlong *)0x0;
    if (plVar3 != &local_28) {
      *plVar3 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x830,&local_20);
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_20 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  return;
}



// FUNCTION 142142570 FUN_142142570 body=749 status=ok
// SIG undefined FUN_142142570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142142570(longlong param_1,char param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  byte local_ec;
  undefined4 local_e8;
  undefined ***local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 0x728) == '\x01') {
    *(undefined8 *)(param_1 + 0x7c0) = 0;
  }
  else if ((*(longlong *)(param_1 + 0x7c0) == 0) || (param_2 != '\0')) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = FUN_142909590();
    lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
    local_ec = local_ec | 1;
    *(longlong *)(param_1 + 0x7c0) = lVar5;
    local_100 = 0;
    *(undefined1 *)(lVar5 + 0x9c) = 2;
    local_e0 = &local_108;
    local_108 = &PTR_FUN_1440fbd78;
    local_68 = _DAT_1464aa810;
    uStack_60 = _DAT_1464aa818;
    local_50 = DAT_1468b5d98;
    local_f8 = 0;
    local_d0 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    lVar5 = *(longlong *)(param_1 + 0x7c0);
    local_58 = _DAT_1468b5d90;
    local_44 = DAT_1468b5da8;
    local_f0 = 1;
    local_e8 = 6;
    local_d8 = 3;
    local_4c = DAT_1468b5da0;
    local_40 = 0x3f800000;
    local_3c = 0x3f800000;
    local_38 = 0x3f800000;
    iVar2 = *(int *)(lVar5 + 0x40);
    *(int *)(lVar5 + 0x40) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x44) < iVar2 + 1) {
      FUN_140822570(lVar5 + 0x38,iVar2);
    }
    FUN_1420ce830((longlong)iVar2 * 0xe0 + *(longlong *)(lVar5 + 0x38),&local_108);
    local_108 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (local_b8 != 0) {
      FMemory::Free();
    }
    fVar7 = (float)*(int *)(param_1 + 0x738);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x7c0) + 0x38);
    if (*(char *)(param_1 + 0x81c) == '\x01') {
      fVar6 = *(float *)(param_1 + 0x820) * 0.017453292;
      fVar7 = fVar7 / fVar6;
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 * 0.5);
      fVar7 = fVar6 * (fVar7 + fVar7);
    }
    iVar2 = *(int *)(param_1 + 0x73c);
    fVar6 = *(float *)(param_1 + 0x75c);
    fVar1 = *(float *)(param_1 + 0x760);
    *(undefined4 *)(lVar5 + 200) = 0x3c23d70a;
    *(float *)(lVar5 + 0xcc) = (float)*(int *)(param_1 + 0x738);
    *(float *)(lVar5 + 0xd0) = (float)*(int *)(param_1 + 0x73c);
    cVar3 = FUN_140618120(&DAT_1468b5b70);
    if (cVar3 == '\0') {
      cVar3 = FUN_140618120(&DAT_1468b5b80);
      if (cVar3 == '\0') {
        FUN_140618120(&DAT_1468b5b90);
      }
    }
    local_28 = _DAT_1468b5b70;
    uStack_20 = uRam00000001468b5b78;
    FQuat::Rotator(&local_28,&local_118);
    *(undefined8 *)(lVar5 + 0xbc) = local_118;
    *(undefined4 *)(lVar5 + 0xc4) = local_110;
    *(ulonglong *)(lVar5 + 0xb0) = CONCAT44(fVar7 * fVar6 - fVar7 * 0.5,0x3f000000);
    *(float *)(lVar5 + 0xb8) = (float)iVar2 * fVar1 - (float)iVar2 * 0.5;
  }
  return;
}



// FUNCTION 142142860 FUN_142142860 body=457 status=ok
// SIG undefined FUN_142142860(void)

void FUN_142142860(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  longlong *local_30;
  
  local_30 = (longlong *)param_1[0x1d];
  lVar9 = 0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)local_30[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(local_30 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)local_30[1];
      if (bVar10) {
        *(int *)(local_30 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        lVar9 = param_1[0x1c];
        goto LAB_1421428c4;
      }
      LOCK();
      iVar5 = (int)local_30[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(local_30 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
    lVar9 = 0;
    local_30 = (longlong *)0x0;
  }
LAB_1421428c4:
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar9 == 0) || (lVar6 == 0)) goto LAB_1421429db;
  bVar8 = 0;
  bVar10 = true;
  if (*(char *)((longlong)param_1 + 0x1ad) == '\x01') {
    lVar4 = param_1[2];
    if (lVar4 == 0) {
LAB_142142969:
      bVar8 = 1;
    }
    else {
      lVar7 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar10 = false;
      }
      if ((!bVar10) || ((*(byte *)(lVar4 + 0x2e8) & 0x20) != 0)) goto LAB_142142969;
      bVar8 = 0;
    }
    bVar3 = *(byte *)((longlong)param_1 + 0x1ac);
    FWeakObjectPtr::operator=(local_res10,param_1);
    if (*(longlong *)(lVar6 + 400) == 0) {
      lVar6 = lVar6 + 0x400;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 400) + 0x98);
    }
    iVar5 = FLatentActionManager::GetNumActionsForObject(lVar6,local_res10);
    if (iVar5 != 0) {
      bVar8 = 1;
    }
    bVar8 = 0 < (int)param_1[0x2f] | bVar8 | bVar3 >> 3;
  }
  *(byte *)(lVar9 + 0x18) = *(byte *)(lVar9 + 0x18) & 0xfd;
  *(byte *)(lVar9 + 0x18) = *(byte *)(lVar9 + 0x18) | (bVar8 & 1) * '\x02';
LAB_1421429db:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142142a30 FUN_142142a30 body=553 status=ok
// SIG undefined FUN_142142a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142142a30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [24];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x548) != *(int *)(param_1 + 0xe0)) {
    plVar6 = (longlong *)0x0;
    *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0xe0);
    local_30 = 0;
    local_28 = 0;
    FUN_141fc6750(local_48,param_1 + 0xe8);
    FUN_141fc6750(local_48,param_1 + 0x188);
    FUN_141fc6750(local_48,param_1 + 0x228);
    FUN_141fc6750(local_48,param_1 + 0x2c8);
    FUN_141fc6750(local_48,param_1 + 0x368);
    FUN_141fc6750(local_48,param_1 + 0x408);
    FUN_141fc6750(local_48,param_1 + 0x4a8);
    plVar5 = (longlong *)operator_new(0x48);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_144f1c890;
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[7] = 0;
      if (local_30 == 0) {
        _guard_xfg_dispatch_icall_nop(plVar5 + 4,local_48,0x18);
      }
      if (plVar5[7] != 0) {
        FMemory::Free();
      }
      plVar5[7] = local_30;
      local_30 = 0;
      *(undefined4 *)(plVar5 + 8) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar5 + 0x44) = local_28._4_4_;
      local_28 = 0;
      plVar6 = plVar5;
    }
    plVar5 = plVar6 + 2;
    local_58 = plVar5;
    local_50 = plVar6;
    TSharedRef<FStringTable,1>::Init<FStringTable>(&local_58,plVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_68 = plVar5;
    local_60 = plVar6;
    if ((longlong **)(param_1 + 0xd0) != &local_68) {
      *(longlong **)(param_1 + 0xd0) = plVar5;
      local_68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_60);
    }
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    }
    TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
    ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(local_48);
  }
  return;
}



// FUNCTION 142142c60 FUN_142142c60 body=201 status=ok
// SIG undefined FUN_142142c60(void)

void FUN_142142c60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(longlong *)(param_1 + 0x800) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x7f8);
    puVar3 = (undefined8 *)FName::FName(local_res8,"SlateUI",1);
    FUN_1425a28b0(*(undefined8 *)(param_1 + 0x800),*puVar3,uVar2);
    local_28 = *(undefined4 *)(param_1 + 0x780);
    uStack_24 = *(undefined4 *)(param_1 + 0x784);
    uStack_20 = *(undefined4 *)(param_1 + 0x788);
    uStack_1c = *(undefined4 *)(param_1 + 0x78c);
    puVar3 = (undefined8 *)FName::FName(local_res8,"TintColorAndOpacity",1);
    FUN_1425a2be0(*(undefined8 *)(param_1 + 0x800),*puVar3,&local_28);
    uVar1 = *(undefined4 *)(param_1 + 0x790);
    puVar3 = (undefined8 *)FName::FName(local_res8,"OpacityFromTexture",1);
    FUN_1425a2750(*(undefined8 *)(param_1 + 0x800),*puVar3,uVar1);
  }
  return;
}



// FUNCTION 142142d30 FUN_142142d30 body=373 status=ok
// SIG undefined FUN_142142d30(void)

void FUN_142142d30(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_68 = *param_2;
  local_60 = param_2[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_142142eb0(param_1,&local_68,param_1 + 0x28,2);
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_142142eb0(param_1,&local_58,param_1 + 0x50,3);
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_142142eb0(param_1,&local_48,param_1 + 0x78,0);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_142142eb0(param_1,&local_38,param_1 + 0xa0,1);
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_142142eb0(param_1,&local_28,param_1 + 200,4);
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_142142eb0(param_1,&local_18,param_1 + 0xf0,5);
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 142142eb0 FUN_142142eb0 body=1128 status=ok
// SIG undefined FUN_142142eb0(void)

void FUN_142142eb0(undefined8 param_1,longlong *param_2,undefined1 *param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  undefined8 local_a8 [2];
  longlong local_98 [2];
  undefined8 local_88 [2];
  longlong local_78 [2];
  undefined8 local_68 [2];
  undefined1 local_58 [16];
  longlong local_48 [2];
  undefined8 local_38 [2];
  
  switch(*param_3) {
  case 0:
    lVar6 = *param_2 + (ulonglong)param_4 * 0x28;
    plVar5 = (longlong *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 8) = 0;
    if (((local_b8 != plVar5) && (*(int *)(lVar6 + 0x28) != 0)) &&
       (plVar11 = (longlong *)*plVar5, plVar11 != (longlong *)0x0)) {
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      if (*plVar5 != 0) {
        lVar8 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar8;
      }
      *(undefined4 *)(lVar6 + 0x28) = 0;
    }
    if ((undefined8 *)(lVar6 + 0x10) != local_a8) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      plVar5 = *(longlong **)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    break;
  case 1:
    cVar7 = FWeakObjectPtr::IsValid(param_3 + 0x10);
    if (cVar7 != '\0') {
      uVar10 = FWeakObjectPtr::Get(param_3 + 0x10);
      lVar6 = *param_2;
      puVar9 = (undefined8 *)FUN_1420f9830(uVar10,local_58);
      lVar6 = lVar6 + (ulonglong)param_4 * 0x28;
      plVar5 = (longlong *)(lVar6 + 0x20);
      *(undefined1 *)(lVar6 + 8) = 1;
      if (((local_48 != plVar5) && (*(int *)(lVar6 + 0x28) != 0)) &&
         (plVar11 = (longlong *)*plVar5, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*plVar5 != 0) {
          lVar8 = FMemory::Realloc(*plVar5,0,0);
          *plVar5 = lVar8;
        }
        *(undefined4 *)(lVar6 + 0x28) = 0;
      }
      *(undefined8 *)(lVar6 + 0x10) = *puVar9;
      plVar5 = (longlong *)puVar9[1];
      plVar11 = *(longlong **)(lVar6 + 0x18);
      if (plVar5 != plVar11) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar11 = *(longlong **)(lVar6 + 0x18);
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
        *(longlong **)(lVar6 + 0x18) = plVar5;
      }
      plVar5 = (longlong *)puVar9[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar5 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    break;
  case 2:
    lVar6 = *param_2 + (ulonglong)param_4 * 0x28;
    plVar5 = (longlong *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 8) = 2;
    if (((local_78 != plVar5) && (*(int *)(lVar6 + 0x28) != 0)) &&
       (plVar11 = (longlong *)*plVar5, plVar11 != (longlong *)0x0)) {
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      if (*plVar5 != 0) {
        lVar8 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar8;
      }
      *(undefined4 *)(lVar6 + 0x28) = 0;
    }
    if ((undefined8 *)(lVar6 + 0x10) != local_68) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      plVar5 = *(longlong **)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    break;
  case 3:
    lVar6 = *param_2 + (ulonglong)param_4 * 0x28;
    plVar5 = (longlong *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 8) = 3;
    if (((local_98 != plVar5) && (*(int *)(lVar6 + 0x28) != 0)) &&
       (plVar11 = (longlong *)*plVar5, plVar11 != (longlong *)0x0)) {
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      if (*plVar5 != 0) {
        lVar8 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar8;
      }
      *(undefined4 *)(lVar6 + 0x28) = 0;
    }
    if ((undefined8 *)(lVar6 + 0x10) != local_88) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      plVar5 = *(longlong **)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    break;
  case 4:
  case 5:
    cVar7 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_3 + 0x18);
    if (cVar7 != '\0') {
      uVar10 = *(undefined8 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x18);
      uVar4 = *(undefined4 *)(param_3 + 0x1c);
      local_c8 = 0;
      local_c0 = 0;
      puVar9 = (undefined8 *)operator_new(0x28,&local_c8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &PTR_GetPoolName_144fb1f78;
        *(undefined4 *)(puVar9 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uVar4;
        puVar9[2] = uVar10;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[4] = uVar10;
      }
      lVar6 = *param_2 + (ulonglong)param_4 * 0x28;
      *(undefined1 *)(lVar6 + 8) = *param_3;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x20,&local_c8);
      if ((undefined8 *)(lVar6 + 0x10) != local_38) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        plVar5 = *(longlong **)(lVar6 + 0x18);
        *(undefined8 *)(lVar6 + 0x18) = 0;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142143330 FUN_142143330 body=551 status=ok
// SIG undefined FUN_142143330(void)

void FUN_142143330(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 local_res10;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  bVar5 = false;
  fVar2 = *(float *)(param_1 + 0x770);
  fVar3 = *(float *)(param_1 + 0x774);
  fVar4 = *(float *)(param_1 + 0x778);
  fVar10 = *(float *)(param_1 + 0x77c);
  bVar6 = false;
  if (*(char *)(param_1 + 0x794) == '\0') {
    fVar10 = 1.0;
  }
  else if (*(char *)(param_1 + 0x794) == '\x01') {
    fVar10 = 0.0;
  }
  local_res10 = param_2;
  local_38 = fVar2;
  fStack_34 = fVar3;
  fStack_30 = fVar4;
  fStack_2c = fVar10;
  if (((int)param_2 != 0) && (iVar7 = (int)(param_2 >> 0x20), iVar7 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0x7f8);
    if (lVar8 == 0) {
      lVar8 = NewObject<UTextureRenderTarget2D>(param_1);
      bVar5 = true;
      *(longlong *)(param_1 + 0x7f8) = lVar8;
      *(float *)(lVar8 + 200) = fVar2;
      *(float *)(lVar8 + 0xcc) = fVar3;
      *(float *)(lVar8 + 0xd0) = fVar4;
      *(float *)(lVar8 + 0xd4) = fVar10;
      FUN_14287a5c0(*(undefined8 *)(param_1 + 0x7f8),param_2 & 0xffffffff,local_res10._4_4_,2,0);
      bVar6 = true;
      if (*(longlong *)(param_1 + 0x800) != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x7f8);
        puVar9 = (undefined8 *)FName::FName(&local_res10,"SlateUI",1);
        FUN_1425a28b0(*(undefined8 *)(param_1 + 0x800),*puVar9,uVar1);
        bVar6 = true;
      }
    }
    else {
      if ((*(int *)(lVar8 + 0xc0) != (int)param_2) || (*(int *)(lVar8 + 0xc4) != iVar7)) {
        FUN_14287a5c0(lVar8,param_2,iVar7,2,0);
        lVar8 = *(longlong *)(param_1 + 0x7f8);
        bVar5 = true;
      }
      if ((((fVar2 == *(float *)(lVar8 + 200)) && (fVar3 == *(float *)(lVar8 + 0xcc))) &&
          (fVar4 == *(float *)(lVar8 + 0xd0))) && (fVar10 == *(float *)(lVar8 + 0xd4))) {
        if (!bVar5) goto LAB_1421434d7;
      }
      else {
        bVar5 = true;
        *(float *)(lVar8 + 200) = fVar2;
        *(float *)(lVar8 + 0xcc) = fVar3;
        *(float *)(lVar8 + 0xd0) = fVar4;
        *(float *)(lVar8 + 0xd4) = fVar10;
        lVar8 = *(longlong *)(param_1 + 0x7f8);
        bVar6 = true;
      }
      FUN_142894320(lVar8,1);
    }
  }
LAB_1421434d7:
  lVar8 = *(longlong *)(param_1 + 0x7f8);
  if (lVar8 != 0) {
    if ((bVar6) && (*(longlong *)(param_1 + 0x800) != 0)) {
      local_38 = *(float *)(lVar8 + 200);
      fStack_34 = *(float *)(lVar8 + 0xcc);
      fStack_30 = *(float *)(lVar8 + 0xd0);
      fStack_2c = *(float *)(lVar8 + 0xd4);
      puVar9 = (undefined8 *)FName::FName(&local_res10,"BackColor",1);
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x800),*puVar9,&local_38);
    }
    if (bVar5) {
      FUN_1423424e0(param_1);
    }
  }
  return;
}



// FUNCTION 142143560 FUN_142143560 body=876 status=ok
// SIG undefined FUN_142143560(void)

void FUN_142143560(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  float *pfVar9;
  float fVar10;
  float fVar12;
  undefined1 local_res10 [8];
  longlong local_e8;
  longlong *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 uVar11;
  
  FUN_1420f9830(param_1,&local_e8);
  if (local_e8 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae7a64) &&
       (_Init_thread_header(&DAT_146ae7a64), DAT_146ae7a64 == -1)) {
      DAT_146ae7a50 = DAT_1464aa770;
      DAT_146ae7a60 = 0.0;
      DAT_146ae7a48 = (float)DAT_1468b5d88;
      DAT_146ae7a4c = DAT_1468b5d88._4_4_;
      DAT_146ae7a54 = DAT_1464aa774;
      DAT_146ae7a58 = (float)DAT_1468b5d88;
      DAT_146ae7a5c = DAT_1468b5d88._4_4_;
      _Init_thread_footer(&DAT_146ae7a64);
    }
    fVar3 = *(float *)(param_1 + 0x98);
    if ((((DAT_146ae7a50 == fVar3) && (DAT_146ae7a54 == *(float *)(param_1 + 0x9c))) &&
        (DAT_146ae7a58 == *(float *)(param_1 + 0xa0))) &&
       (((DAT_146ae7a5c == *(float *)(param_1 + 0xa4) &&
         (DAT_146ae7a60 == *(float *)(param_1 + 0xa8))) &&
        ((DAT_146ae7a48 == *(float *)(param_1 + 0x90) &&
         (DAT_146ae7a4c == *(float *)(param_1 + 0x94))))))) {
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_7c = 1;
      TAttribute<TOptional<FTransform2D>_>::operator=(local_e8 + 0xd0,local_98);
      FUN_1418475e0(local_e8,5);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      uVar11 = __libm_sse2_sincosf_(*(float *)(param_1 + 0xa8) * 0.017453292);
      fVar12 = (float)((ulonglong)uVar11 >> 0x20);
      fVar10 = (float)uVar11;
      fVar4 = *(float *)(param_1 + 0x9c);
      pfVar9 = (float *)FShear2D::FromShearAngles(local_res10,param_1 + 0xa0);
      local_b0 = 1;
      local_ac = 1;
      local_a8 = 0;
      local_a0 = 0;
      local_d8 = -fVar10 * fVar3 * pfVar9[1] + fVar12 * fVar3;
      fStack_d0 = fVar12 * fVar4 * *pfVar9 + -fVar10 * fVar4;
      fStack_d4 = fVar12 * fVar3 * pfVar9[1] + fVar10 * fVar3;
      fStack_cc = fVar10 * fVar4 * *pfVar9 + fVar12 * fVar4;
      local_c8 = local_d8;
      fStack_c4 = fStack_d4;
      fStack_c0 = fStack_d0;
      fStack_bc = fStack_cc;
      local_b8 = uVar6;
      TAttribute<TOptional<FTransform2D>_>::operator=(local_e8 + 0xd0,&local_c8);
      FUN_1418475e0(local_e8,5);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    }
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  return;
}



// FUNCTION 1421438d0 FUN_1421438d0 body=443 status=ok
// SIG undefined FUN_1421438d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421438d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined1 local_e4 [4];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  int local_80;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x2f8) != 2) {
    plVar3 = *(longlong **)(param_1 + 0x5b8);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x430) + 0x20))();
    }
    else {
      uVar6 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_a8 = 0xffffffff;
      plVar1 = (longlong *)(param_1 + 0x558);
      uVar5 = uVar6;
      uVar7 = uVar6;
      if (0 < (int)plVar3[1]) {
        do {
          local_e0 = *(undefined8 *)(uVar7 + *plVar3);
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId(plVar1,&local_e8);
          uVar2 = uVar6;
          if (local_e8 != -1) {
            uVar2 = (longlong)local_e8 * 0x10 + *plVar1;
          }
          if (uVar2 != 0) {
            FUN_14058cbf0(&local_d8,local_e4,&local_e0,0);
            plVar3 = *(longlong **)(param_1 + 0x5b8);
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar7 = uVar7 + 8;
        } while ((int)uVar4 < (int)plVar3[1]);
      }
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Difference
                (plVar1,local_88,&local_d8);
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
                (plVar1,&local_d8);
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_88);
      local_90 = 0;
      if (local_98 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_d8);
      if (local_80 - local_54 < 1) {
        return;
      }
    }
    (**(code **)(*(longlong *)(param_1 + 0x430) + 0x30))((longlong *)(param_1 + 0x430),3);
  }
  return;
}



// FUNCTION 142143a90 FUN_142143a90 body=1176 status=ok
// SIG undefined FUN_142143a90(void)

void FUN_142143a90(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong *local_d8;
  longlong *local_d0;
  uint local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint local_70;
  uint uStack_6c;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  pplVar2 = (longlong **)(param_1 + 0x330);
  if (*pplVar2 != (longlong *)0x0) {
    return;
  }
  lVar6 = operator_new(0x3a8);
  plVar10 = (longlong *)0x0;
  plVar7 = plVar10;
  if (lVar6 != 0) {
    FName::FName(&local_res10,L"RichTextStyle",1);
    plVar7 = (longlong *)FSlateStyleSet::FSlateStyleSet(lVar6,&local_res10);
  }
  plVar8 = (longlong *)operator_new(0x18);
  plVar14 = plVar10;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
    plVar8[2] = (longlong)plVar7;
    plVar14 = plVar8;
  }
  local_d8 = plVar7;
  local_d0 = plVar14;
  SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar7);
  if (pplVar2 != &local_d8) {
    *pplVar2 = plVar7;
    local_d8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x338,&local_d0);
    plVar14 = local_d0;
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar9 = FVectorParameterNameAndCurves::StaticStruct();
    lVar6 = *(longlong *)(param_1 + 0x138);
    for (lVar12 = *(longlong *)(lVar6 + 0x28); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
      if (lVar12 == lVar9) {
        uStack_c4 = 1;
        plVar7 = (longlong *)(lVar6 + 0x30);
        local_c8 = 0;
        uVar4 = *(uint *)(lVar6 + 0x58);
        puVar3 = (uint *)(lVar6 + 0x40);
        uStack_b4 = 0;
        iStack_b0 = 0;
        if (uVar4 == 0) goto LAB_142143ca5;
        puVar16 = *(uint **)(lVar6 + 0x50);
        if (*(uint **)(lVar6 + 0x50) == (uint *)0x0) {
          puVar16 = puVar3;
        }
        uVar13 = *puVar16;
        iStack_b0 = 0;
        goto joined_r0x000142143c48;
      }
    }
  }
  goto LAB_142143df7;
joined_r0x000142143c48:
  if (uVar13 != 0) goto LAB_142143c77;
  iVar5 = (int)plVar10;
  iStack_b0 = iStack_b0 + 0x20;
  local_c8 = iVar5 + 1;
  plVar10 = (longlong *)(ulonglong)local_c8;
  if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142143ca1;
  uVar13 = puVar16[(longlong)iVar5 + 1];
  goto joined_r0x000142143c48;
LAB_142143c77:
  uStack_c4 = -uVar13 & uVar13;
  iVar5 = 0x1f;
  if (uStack_c4 != 0) {
    for (; uStack_c4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  if (uStack_c4 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f - iVar5;
  }
  uStack_b4 = (iStack_b0 - iVar5) + 0x1f;
  if ((int)uVar4 < (int)uStack_b4) {
LAB_142143ca1:
    uStack_b4 = uVar4;
  }
LAB_142143ca5:
  local_b8 = 0xffffffff;
  uStack_6c = *(uint *)(lVar6 + 0x58);
  uStack_58 = CONCAT44(uStack_c4,local_c8);
  uStack_90 = CONCAT44(uStack_b4,0xffffffff);
  local_88 = CONCAT44(uStack_ac,iStack_b0);
  local_70 = -1 << ((byte)uStack_6c & 0x1f);
  uVar15 = uStack_6c & 0xffffffe0;
  uStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  puStack_c0 = puVar3;
  local_98 = puVar3;
  local_60 = plVar7;
  puStack_50 = puVar3;
  uStack_48 = uStack_90;
  uStack_40 = local_88;
  local_a8 = plVar7;
  uVar13 = uStack_6c;
  if (uStack_6c != uVar4) {
    puVar16 = *(uint **)(lVar6 + 0x50);
    if (*(uint **)(lVar6 + 0x50) == (uint *)0x0) {
      puVar16 = puVar3;
    }
    uVar13 = puVar16[(int)uStack_6c >> 5] & local_70;
    iVar5 = (int)uStack_6c >> 5;
    while (uVar13 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142143d72;
      uVar13 = puVar16[(longlong)iVar5 + 1];
      local_70 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar5 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_6c = (uVar15 - iVar5) + 0x1f;
    uVar13 = uStack_6c;
    if ((int)uVar4 < (int)uStack_6c) {
LAB_142143d72:
      uStack_6c = uVar4;
      uVar13 = uVar4;
    }
  }
  while( true ) {
    if (((uStack_90._4_4_ == uVar13) && (local_98 == puVar3)) && (local_a8 == plVar7)) break;
    lVar6 = *(longlong *)(*local_a8 + (longlong)(int)uStack_90._4_4_ * 0x18);
    lVar12 = *(longlong *)(*local_a8 + 8 + (longlong)(int)uStack_90._4_4_ * 0x18);
    plVar10 = (longlong *)FName::FName(local_res18,L"Default",1);
    if (lVar6 == *plVar10) {
      FTextBlockStyle::operator=(param_1 + 0x150,lVar12 + 8);
    }
    FUN_1417e7da0(*pplVar2,lVar6,lVar12 + 8);
    uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
  }
LAB_142143df7:
  uVar18 = 0;
  plVar10 = *(longlong **)(param_1 + 0x140);
  uVar17 = (longlong)*(int *)(param_1 + 0x148) & 0x1fffffffffffffff;
  if (plVar10 + *(int *)(param_1 + 0x148) < plVar10) {
    uVar17 = uVar18;
  }
  if (uVar17 != 0) {
    do {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        lVar9 = URichTextBlockDecorator::GetPrivateStaticClass();
        lVar12 = lVar6;
        do {
          if (lVar12 == lVar9) {
            local_res10 = 0;
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar11 = FUN_1417985e0(lVar6,param_1,0,0,0,0,0,0,0);
            iVar5 = *(int *)(param_1 + 0x348);
            *(int *)(param_1 + 0x348) = iVar5 + 1;
            if (*(int *)(param_1 + 0x34c) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x340,iVar5);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x340) + (longlong)iVar5 * 8) = uVar11;
            break;
          }
          lVar12 = *(longlong *)(lVar12 + 0x30);
        } while (lVar12 != 0);
      }
      plVar10 = plVar10 + 1;
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar17);
  }
  return;
}



// FUNCTION 142143f30 FUN_142143f30 body=2053 status=ok
// SIG undefined FUN_142143f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142143f30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  char local_268;
  undefined1 local_267 [15];
  longlong *local_258;
  longlong *plStack_250;
  undefined1 local_248 [8];
  longlong local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  undefined1 *local_200;
  float local_1f8;
  float local_1f4;
  code *local_1e8;
  undefined1 *puStack_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  code *local_198;
  undefined1 *puStack_190;
  undefined1 local_188 [8];
  longlong *local_180;
  longlong *local_178;
  longlong *plStack_170;
  undefined1 local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (DAT_1469f4590 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x728) == '\x01') {
    FUN_142142440();
    return;
  }
  plVar5 = (longlong *)0x0;
  local_258 = (longlong *)0x0;
  plStack_250 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x798) != 0) {
    puStack_1e0 = local_267;
    local_267[0] = 0;
    local_1e8 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_198 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    puStack_190 = puStack_1e0;
    FUN_14213eb80(*(longlong *)(param_1 + 0x798),&local_230,&local_198);
    plVar6 = local_228;
    local_218 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_228 + 1) = (int)local_228[1] + 1;
      UNLOCK();
    }
    local_258 = local_230;
    local_220 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_250,&local_218);
    plVar4 = local_218;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_218 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = local_228;
      if ((int)lVar3 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = local_228;
        if (iVar2 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
          plVar6 = local_228;
        }
      }
    }
    plVar4 = local_228;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
  }
  bVar11 = false;
  plVar6 = (longlong *)(param_1 + 0x828);
  lVar3 = *plVar6;
  local_268 = '\0';
  if (lVar3 == 0) {
    fVar13 = (float)(int)*(undefined8 *)(param_1 + 0x738);
    fVar12 = (float)(int)((ulonglong)*(undefined8 *)(param_1 + 0x738) >> 0x20);
    local_1f8 = fVar13;
    local_1f4 = fVar12;
    lVar3 = SVirtualWindow::FArguments::FArguments(local_168);
    *(float *)(lVar3 + 0x108) = fVar13;
    *(float *)(lVar3 + 0x10c) = fVar12;
    local_208 = (longlong *)
                SharedPointerInternals::NewIntrusiveReferenceController<SVirtualWindow>();
    plVar4 = local_208 + 2;
    local_210 = plVar4;
    FUN_14044f790(&local_210,plVar4);
    local_200 = local_248;
    local_278 = 0x608;
    SWidget::SetDebugInfo
              (plVar4,"SVirtualWindow",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
               ,0x569);
    plVar4 = (longlong *)FUN_1420dafe0(&local_210,local_188,lVar3);
    local_238 = (longlong *)plVar4[1];
    local_240 = *plVar4;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_238 + 1) = (int)local_238[1] + 1;
      UNLOCK();
    }
    if (plVar6 != &local_240) {
      *plVar6 = local_240;
      local_240 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x830,&local_238);
    }
    plVar4 = local_238;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_238 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_180 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    plVar4 = local_208;
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_208 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    FUN_140456c70(local_168);
    FUN_1419a2ef0(*plVar6,*(undefined1 *)(param_1 + 0x765));
    lVar3 = *plVar6;
    if ((lVar3 != 0) &&
       (((*(char *)(param_1 + 0x764) == '\0' || (*(char *)(param_1 + 0x81c) != '\0')) &&
        (DAT_1469f4590 != 0)))) {
      plVar7 = *(longlong **)(param_1 + 0x830);
      plVar4 = plVar7 + 1;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar4 = (int)*plVar4 + 1;
        UNLOCK();
        LOCK();
        *(int *)plVar4 = (int)*plVar4 + 1;
        UNLOCK();
      }
      local_1d8 = lVar3;
      local_1d0 = plVar7;
      FAudioDevice::RegisterPluginListener(DAT_1469f4590,&local_1d8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    lVar3 = *plVar6;
    bVar11 = true;
    local_268 = '\x01';
  }
  fVar13 = (float)(int)*(undefined8 *)(param_1 + 0x738);
  fVar12 = (float)(int)((ulonglong)*(undefined8 *)(param_1 + 0x738) >> 0x20);
  local_1a8 = CONCAT44(fVar12,fVar13);
  FUN_141857b30(lVar3,CONCAT44(fVar12,fVar13));
  bVar10 = false;
  plVar4 = *(longlong **)(param_1 + 0x7b8);
  if (local_258 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x7a0);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar2 = (int)plVar4[1];
        bVar11 = iVar2 == 0;
        if (bVar11) {
          *(int *)(plVar4 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        while (plVar7 = plVar5, !bVar11) {
          LOCK();
          bVar11 = iVar2 == (int)plVar4[1];
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar2 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar7 = plVar4;
            if (plVar4 != (longlong *)0x0) {
              plVar5 = *(longlong **)(param_1 + 0x7b0);
            }
            break;
          }
          LOCK();
          iVar2 = (int)plVar4[1];
          bVar11 = iVar2 == 0;
          if (bVar11) {
            *(int *)(plVar4 + 1) = 0;
            iVar2 = 0;
          }
          UNLOCK();
        }
      }
      bVar11 = plVar5 != DAT_1469eb218;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar7 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (bVar11) {
        *(longlong **)(param_1 + 0x7b0) = DAT_1469eb218;
        plVar4 = DAT_1469eb220;
        plVar5 = *(longlong **)(param_1 + 0x7b8);
        if (DAT_1469eb220 != plVar5) {
          if (DAT_1469eb220 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)DAT_1469eb220 + 0xc) = *(int *)((longlong)DAT_1469eb220 + 0xc) + 1;
            UNLOCK();
            plVar5 = *(longlong **)(param_1 + 0x7b8);
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
          *(longlong **)(param_1 + 0x7b8) = plVar4;
        }
        bVar10 = true;
      }
      local_1b8 = DAT_1469eb218;
      local_1b0 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      FUN_14185a760(*plVar6,&local_1b8);
      plVar5 = plStack_250;
      cVar8 = local_268;
    }
    else {
      plVar9 = plVar5;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar2 = (int)plVar4[1];
        bVar11 = iVar2 == 0;
        if (bVar11) {
          *(int *)(plVar4 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar2 == (int)plVar4[1];
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar2 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (plVar4 == (longlong *)0x0) goto LAB_1421444ea;
            plVar5 = plVar4;
            plVar9 = *(longlong **)(param_1 + 0x7b0);
            break;
          }
          LOCK();
          iVar2 = (int)plVar4[1];
          bVar11 = iVar2 == 0;
          if (bVar11) {
            *(int *)(plVar4 + 1) = 0;
            iVar2 = 0;
          }
          UNLOCK();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar5 + 1;
          lVar3 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
LAB_1421444ea:
      cVar8 = local_268;
      if ((plVar7 == plVar9) && (plVar5 = plStack_250, local_268 == '\0')) goto LAB_1421446ac;
      *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(param_1 + 0x7a0);
      plVar5 = *(longlong **)(param_1 + 0x7a8);
      plVar4 = *(longlong **)(param_1 + 0x7b8);
      if (plVar5 != plVar4) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar4 = *(longlong **)(param_1 + 0x7b8);
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(longlong **)(param_1 + 0x7b8) = plVar5;
      }
      local_1c8 = *(undefined8 *)(param_1 + 0x7a0);
      local_1c0 = *(longlong *)(param_1 + 0x7a8);
      if (local_1c0 != 0) {
        LOCK();
        *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
        UNLOCK();
      }
      FUN_14185a760(*plVar6,&local_1c8);
      bVar10 = true;
      plVar5 = plStack_250;
    }
  }
  else {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar2 = (int)plVar4[1];
      bVar10 = iVar2 == 0;
      if (bVar10) {
        *(int *)(plVar4 + 1) = 0;
        iVar2 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar5, !bVar10) {
        LOCK();
        bVar10 = iVar2 == (int)plVar4[1];
        if (bVar10) {
          *(int *)(plVar4 + 1) = iVar2 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar7 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            plVar5 = *(longlong **)(param_1 + 0x7b0);
          }
          break;
        }
        LOCK();
        iVar2 = (int)plVar4[1];
        bVar10 = iVar2 == 0;
        if (bVar10) {
          *(int *)(plVar4 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
      }
    }
    bVar10 = local_258 == plVar5;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if ((bVar10) && (plVar5 = plStack_250, !bVar11)) goto LAB_1421446ac;
    *(longlong **)(param_1 + 0x7b0) = local_258;
    plVar5 = *(longlong **)(param_1 + 0x7b8);
    if (plStack_250 != plVar5) {
      if (plStack_250 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_250 + 0xc) = *(int *)((longlong)plStack_250 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(param_1 + 0x7b8);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plStack_250,1);
        }
      }
      *(longlong **)(param_1 + 0x7b8) = plStack_250;
    }
    plVar5 = plStack_250;
    local_178 = local_258;
    plStack_170 = plStack_250;
    if (plStack_250 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_250 + 1) = (int)plStack_250[1] + 1;
      UNLOCK();
    }
    FUN_14185a760(*plVar6,&local_178);
    bVar10 = true;
    cVar8 = local_268;
  }
  if ((cVar8 != '\0') || (bVar10)) {
    FUN_1423424e0(param_1);
  }
LAB_1421446ac:
  plVar6 = plStack_250;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_250)(plStack_250);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_250 + 8))(plStack_250,1);
      }
    }
  }
  return;
}



// FUNCTION 142144740 UpdateWidgetProperties body=235 status=ok
// SIG undefined UpdateWidgetProperties(void)

void USafeZone::UpdateWidgetProperties(longlong param_1)

{
  longlong lVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) && (0 < *(int *)(param_1 + 0x108))) {
    lVar1 = **(longlong **)(param_1 + 0x100);
    local_48 = *(undefined4 *)(lVar1 + 0x3c);
    uStack_44 = *(undefined4 *)(lVar1 + 0x40);
    uStack_40 = *(undefined4 *)(lVar1 + 0x44);
    uStack_3c = *(undefined4 *)(lVar1 + 0x48);
    SSafeZone::SetSafeAreaScale(*(longlong *)(param_1 + 0x120),&local_48);
    FUN_1419a4dd0(*(undefined8 *)(param_1 + 0x120),*(undefined1 *)(lVar1 + 0x38));
    FUN_1419a2980(*(undefined8 *)(param_1 + 0x120),*(undefined1 *)(lVar1 + 0x4c));
    FUN_1419a50d0(*(undefined8 *)(param_1 + 0x120),*(undefined1 *)(lVar1 + 0x4d));
    local_38 = *(undefined4 *)(lVar1 + 0x50);
    uStack_34 = *(undefined4 *)(lVar1 + 0x54);
    uStack_30 = *(undefined4 *)(lVar1 + 0x58);
    uStack_2c = *(undefined4 *)(lVar1 + 0x5c);
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SBorder::SetPadding(*(undefined8 *)(param_1 + 0x120),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    FUN_1419a3f10(*(undefined8 *)(param_1 + 0x120),*(undefined1 *)(param_1 + 0x118),
                  *(undefined1 *)(param_1 + 0x119),*(undefined1 *)(param_1 + 0x11a),
                  *(undefined1 *)(param_1 + 0x11b));
  }
  return;
}



// FUNCTION 142144830 FUN_142144830 body=289 status=ok
// SIG undefined FUN_142144830(void)

void FUN_142144830(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x430);
  if (*(longlong *)(lVar3 + 0x18) == 0) {
    lVar3 = operator_new();
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1420cf240(lVar3,1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x430) + 0x18) = uVar4;
    lVar3 = *(longlong *)(param_1 + 0x430);
  }
  plVar1 = *(longlong **)(lVar3 + 0x20);
  lVar3 = *(longlong *)(lVar3 + 0x18);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined1 *)(lVar3 + 0x2a) = 1;
  if (*(int *)(lVar2 + 0x38) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar4 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar4,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    (**(code **)(**(longlong **)(lVar3 + 0x18) + 8))(*(longlong **)(lVar3 + 0x18),1);
  }
  *(undefined2 *)(lVar3 + 0x28) = 0;
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x4b) & 1) != 0)) {
    *(undefined4 *)(plVar1 + 0x17) = 0x3f800000;
    *(byte *)((longlong)plVar1 + 0x4b) = *(byte *)((longlong)plVar1 + 0x4b) & 0xfe;
    (**(code **)(*plVar1 + 0x278))(plVar1);
  }
  return;
}



// FUNCTION 142144960 FUN_142144960 body=848 status=ok
// SIG undefined FUN_142144960(void)

void FUN_142144960(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  uint local_b8;
  uint uStack_b4;
  int iStack_a4;
  uint uStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_84;
  uint uStack_80;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  uint local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    plVar8 = (longlong *)0x0;
    if ((*(int *)(*param_1 + 0x520) != 0) &&
       ((plVar7 = *(longlong **)(*param_1 + 0x518), plVar7 != (longlong *)0x0 &&
        (cVar4 = (**(code **)(*plVar7 + 0x18))(), cVar4 != '\0')))) {
      iVar6 = (int)param_1[6];
      local_68 = (uint *)(param_1 + 3);
      uStack_b4 = 1;
      local_b8 = 0;
      iStack_a4 = 0;
      uStack_a0 = 0;
      if (iVar6 != 0) {
        puVar10 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar2 = *puVar10;
        plVar7 = plVar8;
        plVar9 = plVar8;
        while (uVar2 == 0) {
          iVar5 = (int)plVar7;
          uStack_a0 = (int)plVar9 + 0x20;
          plVar9 = (longlong *)(ulonglong)uStack_a0;
          local_b8 = iVar5 + 1;
          plVar7 = (longlong *)(ulonglong)local_b8;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142144a80;
          uVar2 = puVar10[(longlong)iVar5 + 1];
        }
        uStack_b4 = -uVar2 & uVar2;
        iVar5 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_a4 = (uStack_a0 - iVar5) + 0x1f;
        if (iVar6 < iStack_a4) {
LAB_142144a80:
          iStack_a4 = iVar6;
        }
      }
      uStack_70 = CONCAT44(uStack_b4,local_b8);
      uStack_38._0_4_ = 0xffffffff;
      uStack_38._4_4_ = iStack_a4;
      uStack_30 = uStack_a0;
      local_58 = uStack_a0;
      uStack_60._0_4_ = 0xffffffff;
      uStack_60._4_4_ = iStack_a4;
      local_50 = param_1 + 1;
      uStack_48 = uStack_70;
      puStack_40 = local_68;
      if (iStack_a4 < iVar6) {
        do {
          plVar7 = *(longlong **)((longlong)uStack_60._4_4_ * 0x20 + 8 + param_1[1]);
          (**(code **)(*plVar7 + 0x50))(plVar7,local_28);
          plVar7 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_20 + 1;
            lVar3 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          uStack_60._0_4_ = (uint)uStack_60 & ~uStack_70._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
        } while (uStack_60._4_4_ < (int)local_68[6]);
      }
      local_50 = param_1 + 0xb;
      uStack_94 = 1;
      iVar6 = (int)param_1[0x10];
      local_68 = (uint *)(param_1 + 0xd);
      local_98 = 0;
      iStack_84 = 0;
      uStack_80 = 0;
      if (iVar6 != 0) {
        puVar10 = (uint *)param_1[0xf];
        if ((uint *)param_1[0xf] == (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar2 = *puVar10;
        plVar7 = plVar8;
        plVar9 = plVar8;
        while (uVar2 == 0) {
          iVar5 = (int)plVar7;
          uStack_80 = (int)plVar9 + 0x20;
          plVar9 = (longlong *)(ulonglong)uStack_80;
          local_98 = iVar5 + 1;
          plVar7 = (longlong *)(ulonglong)local_98;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142144bec;
          uVar2 = puVar10[(longlong)iVar5 + 1];
        }
        uStack_94 = -uVar2 & uVar2;
        iVar5 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_84 = (uStack_80 - iVar5) + 0x1f;
        if (iVar6 < iStack_84) {
LAB_142144bec:
          iStack_84 = iVar6;
        }
      }
      uStack_70 = CONCAT44(uStack_94,local_98);
      uStack_60 = CONCAT44(iStack_84,0xffffffff);
      local_58 = uStack_80;
      uStack_30 = uStack_80;
      uStack_38 = uStack_60;
      uStack_48 = uStack_70;
      puStack_40 = local_68;
      if (iStack_84 < iVar6) {
        do {
          uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_48._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
        } while (uStack_38._4_4_ < (int)puStack_40[6]);
      }
    }
    lVar3 = *param_1;
    if (((*(int *)(lVar3 + 0x530) != 0) && (*(longlong **)(lVar3 + 0x528) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x528) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(lVar3 + 0x530) != 0) {
        plVar8 = *(longlong **)(lVar3 + 0x528);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8);
    }
  }
  return;
}



// FUNCTION 142144cd0 FUN_142144cd0 body=47 status=ok
// SIG undefined FUN_142144cd0(void)

longlong FUN_142144cd0(void)

{
  if (DAT_146ae8980 == 0) {
    FUN_141786440(&DAT_146ae8980,&PTR_GetPrivateStaticClass_144fb32e0);
  }
  return DAT_146ae8980;
}



// FUNCTION 142144d00 FUN_142144d00 body=47 status=ok
// SIG undefined FUN_142144d00(void)

longlong FUN_142144d00(void)

{
  if (DAT_146ae8928 == 0) {
    FUN_141786a30(&DAT_146ae8928,&PTR_FUN_146501bc0);
  }
  return DAT_146ae8928;
}



// FUNCTION 142144d30 FUN_142144d30 body=47 status=ok
// SIG undefined FUN_142144d30(void)

longlong FUN_142144d30(void)

{
  if (DAT_146ae8930 == 0) {
    FUN_141786a30(&DAT_146ae8930,&PTR_FUN_146501c40);
  }
  return DAT_146ae8930;
}



// FUNCTION 142144d60 FUN_142144d60 body=47 status=ok
// SIG undefined FUN_142144d60(void)

longlong FUN_142144d60(void)

{
  if (DAT_146ae8938 == 0) {
    FUN_141786a30(&DAT_146ae8938,&PTR_FUN_146501cc0);
  }
  return DAT_146ae8938;
}



// FUNCTION 142144d90 FUN_142144d90 body=47 status=ok
// SIG undefined FUN_142144d90(void)

longlong FUN_142144d90(void)

{
  if (DAT_146ae8940 == 0) {
    FUN_141786a30(&DAT_146ae8940,&PTR_FUN_146501d40);
  }
  return DAT_146ae8940;
}



// FUNCTION 142144dc0 FUN_142144dc0 body=47 status=ok
// SIG undefined FUN_142144dc0(void)

longlong FUN_142144dc0(void)

{
  if (DAT_146ae8948 == 0) {
    FUN_141786a30(&DAT_146ae8948,&PTR_FUN_146501dc0);
  }
  return DAT_146ae8948;
}



// FUNCTION 142144df0 FUN_142144df0 body=47 status=ok
// SIG undefined FUN_142144df0(void)

longlong FUN_142144df0(void)

{
  if (DAT_146ae8950 == 0) {
    FUN_141786a30(&DAT_146ae8950,&PTR_FUN_146501e40);
  }
  return DAT_146ae8950;
}



// FUNCTION 142144e20 FUN_142144e20 body=47 status=ok
// SIG undefined FUN_142144e20(void)

longlong FUN_142144e20(void)

{
  if (DAT_146ae8958 == 0) {
    FUN_141786a30(&DAT_146ae8958,&PTR_FUN_146501ec0);
  }
  return DAT_146ae8958;
}



// FUNCTION 142144e50 FUN_142144e50 body=47 status=ok
// SIG undefined FUN_142144e50(void)

longlong FUN_142144e50(void)

{
  if (DAT_146ae8960 == 0) {
    FUN_141786a30(&DAT_146ae8960,&PTR_FUN_146501f40);
  }
  return DAT_146ae8960;
}



// FUNCTION 142144e80 FUN_142144e80 body=47 status=ok
// SIG undefined FUN_142144e80(void)

longlong FUN_142144e80(void)

{
  if (DAT_146ae8968 == 0) {
    FUN_141786a30(&DAT_146ae8968,&PTR_FUN_146501fc0);
  }
  return DAT_146ae8968;
}



// FUNCTION 142144eb0 FUN_142144eb0 body=47 status=ok
// SIG undefined FUN_142144eb0(void)

longlong FUN_142144eb0(void)

{
  if (DAT_146ae8970 == 0) {
    FUN_141786a30(&DAT_146ae8970,&PTR_FUN_146502040);
  }
  return DAT_146ae8970;
}



// FUNCTION 142144ee0 FUN_142144ee0 body=47 status=ok
// SIG undefined FUN_142144ee0(void)

longlong FUN_142144ee0(void)

{
  if (DAT_146ae8978 == 0) {
    FUN_141786a30(&DAT_146ae8978,&PTR_FUN_1465020c0);
  }
  return DAT_146ae8978;
}



// FUNCTION 142144f10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheckedStateBinding::GetPrivateStaticClass(void)

{
  if (DAT_146ae8b78 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"CheckedStateBinding",&DAT_146ae8b78,
                  StaticRegisterNativesUCheckedStateBinding,0x68,0x10000000,0,L"Engine",
                  &LAB_142146d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPropertyBinding::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae8b78;
}



// FUNCTION 142144fc0 FUN_142144fc0 body=47 status=ok
// SIG undefined FUN_142144fc0(void)

longlong FUN_142144fc0(void)

{
  if (DAT_146ae8b70 == 0) {
    FUN_141786440(&DAT_146ae8b70,&PTR_GetPrivateStaticClass_144fb2cb0);
  }
  return DAT_146ae8b70;
}



// FUNCTION 142144ff0 FUN_142144ff0 body=47 status=ok
// SIG undefined FUN_142144ff0(void)

longlong FUN_142144ff0(void)

{
  if (DAT_146ae8b68 == 0) {
    FUN_141786a30(&DAT_146ae8b68,&PTR_FUN_146504800);
  }
  return DAT_146ae8b68;
}



// FUNCTION 142145020 FUN_142145020 body=47 status=ok
// SIG undefined FUN_142145020(void)

longlong FUN_142145020(void)

{
  if (DAT_146ae8bd8 == 0) {
    FUN_141786a30(&DAT_146ae8bd8,&PTR_FUN_146504df0);
  }
  return DAT_146ae8bd8;
}



// FUNCTION 142145050 FUN_142145050 body=47 status=ok
// SIG undefined FUN_142145050(void)

longlong FUN_142145050(void)

{
  if (DAT_146ae8c48 == 0) {
    FUN_141786440(&DAT_146ae8c48,&PTR_FUN_144fb3aa0);
  }
  return DAT_146ae8c48;
}



// FUNCTION 142145080 FUN_142145080 body=47 status=ok
// SIG undefined FUN_142145080(void)

longlong FUN_142145080(void)

{
  if (DAT_146ae8be0 == 0) {
    FUN_141786a30(&DAT_146ae8be0,&PTR_FUN_146504eb0);
  }
  return DAT_146ae8be0;
}



// FUNCTION 1421450b0 FUN_1421450b0 body=47 status=ok
// SIG undefined FUN_1421450b0(void)

longlong FUN_1421450b0(void)

{
  if (DAT_146ae8be8 == 0) {
    FUN_141786a30(&DAT_146ae8be8,&PTR_FUN_146504f30);
  }
  return DAT_146ae8be8;
}



// FUNCTION 1421450e0 FUN_1421450e0 body=47 status=ok
// SIG undefined FUN_1421450e0(void)

longlong FUN_1421450e0(void)

{
  if (DAT_146ae8bf0 == 0) {
    FUN_141786a30(&DAT_146ae8bf0,&PTR_FUN_146504f70);
  }
  return DAT_146ae8bf0;
}



// FUNCTION 142145110 FUN_142145110 body=47 status=ok
// SIG undefined FUN_142145110(void)

longlong FUN_142145110(void)

{
  if (DAT_146ae8bf8 == 0) {
    FUN_141786a30(&DAT_146ae8bf8,&PTR_FUN_146504fb0);
  }
  return DAT_146ae8bf8;
}



// FUNCTION 142145140 FUN_142145140 body=47 status=ok
// SIG undefined FUN_142145140(void)

longlong FUN_142145140(void)

{
  if (DAT_146ae8c00 == 0) {
    FUN_141786a30(&DAT_146ae8c00,&PTR_FUN_146505060);
  }
  return DAT_146ae8c00;
}



// FUNCTION 142145170 FUN_142145170 body=47 status=ok
// SIG undefined FUN_142145170(void)

longlong FUN_142145170(void)

{
  if (DAT_146ae8c08 == 0) {
    FUN_141786a30(&DAT_146ae8c08,&PTR_FUN_146505110);
  }
  return DAT_146ae8c08;
}



// FUNCTION 1421451a0 FUN_1421451a0 body=47 status=ok
// SIG undefined FUN_1421451a0(void)

longlong FUN_1421451a0(void)

{
  if (DAT_146ae8c10 == 0) {
    FUN_141786a30(&DAT_146ae8c10,&PTR_FUN_146505190);
  }
  return DAT_146ae8c10;
}



// FUNCTION 1421451d0 FUN_1421451d0 body=47 status=ok
// SIG undefined FUN_1421451d0(void)

longlong FUN_1421451d0(void)

{
  if (DAT_146ae8c18 == 0) {
    FUN_141786a30(&DAT_146ae8c18,&PTR_FUN_146505210);
  }
  return DAT_146ae8c18;
}



// FUNCTION 142145200 FUN_142145200 body=47 status=ok
// SIG undefined FUN_142145200(void)

longlong FUN_142145200(void)

{
  if (DAT_146ae8c20 == 0) {
    FUN_141786a30(&DAT_146ae8c20,&PTR_FUN_146505290);
  }
  return DAT_146ae8c20;
}



// FUNCTION 142145230 FUN_142145230 body=47 status=ok
// SIG undefined FUN_142145230(void)

longlong FUN_142145230(void)

{
  if (DAT_146ae8c28 == 0) {
    FUN_141786a30(&DAT_146ae8c28,&PTR_FUN_1465052d0);
  }
  return DAT_146ae8c28;
}



// FUNCTION 142145260 FUN_142145260 body=47 status=ok
// SIG undefined FUN_142145260(void)

longlong FUN_142145260(void)

{
  if (DAT_146ae8c30 == 0) {
    FUN_141786a30(&DAT_146ae8c30,&PTR_FUN_146505390);
  }
  return DAT_146ae8c30;
}



// FUNCTION 142145290 FUN_142145290 body=47 status=ok
// SIG undefined FUN_142145290(void)

longlong FUN_142145290(void)

{
  if (DAT_146ae8c38 == 0) {
    FUN_141786a30(&DAT_146ae8c38,&PTR_FUN_146505410);
  }
  return DAT_146ae8c38;
}



// FUNCTION 1421452c0 FUN_1421452c0 body=47 status=ok
// SIG undefined FUN_1421452c0(void)

longlong FUN_1421452c0(void)

{
  if (DAT_146ae8c40 == 0) {
    FUN_141786a30(&DAT_146ae8c40,&PTR_FUN_146505490);
  }
  return DAT_146ae8c40;
}



// FUNCTION 142145300 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCircularThrobber::GetPrivateStaticClass(void)

{
  if (DAT_146ae8ba0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"CircularThrobber",&DAT_146ae8ba0,
                  StaticRegisterNativesUCircularThrobber,0x1b8,0x10000000,0,L"Engine",&LAB_142146d60
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae8ba0;
}



// FUNCTION 1421453b0 FUN_1421453b0 body=47 status=ok
// SIG undefined FUN_1421453b0(void)

longlong FUN_1421453b0(void)

{
  if (DAT_146ae8b98 == 0) {
    FUN_141786440(&DAT_146ae8b98,&PTR_GetPrivateStaticClass_144fb36e0);
  }
  return DAT_146ae8b98;
}



// FUNCTION 1421453e0 FUN_1421453e0 body=47 status=ok
// SIG undefined FUN_1421453e0(void)

longlong FUN_1421453e0(void)

{
  if (DAT_146ae8b80 == 0) {
    FUN_141786a30(&DAT_146ae8b80,&PTR_FUN_1465048a0);
  }
  return DAT_146ae8b80;
}



// FUNCTION 142145410 FUN_142145410 body=47 status=ok
// SIG undefined FUN_142145410(void)

longlong FUN_142145410(void)

{
  if (DAT_146ae8b88 == 0) {
    FUN_141786a30(&DAT_146ae8b88,&PTR_FUN_146504920);
  }
  return DAT_146ae8b88;
}



// FUNCTION 142145440 FUN_142145440 body=47 status=ok
// SIG undefined FUN_142145440(void)

longlong FUN_142145440(void)

{
  if (DAT_146ae8b90 == 0) {
    FUN_141786a30(&DAT_146ae8b90,&PTR_FUN_1465049a0);
  }
  return DAT_146ae8b90;
}



// FUNCTION 142145490 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBorderSlot::GetPrivateStaticClass(void)

{
  if (DAT_146ae89b0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"BorderSlot",&DAT_146ae89b0,StaticRegisterNativesUBorderSlot,0x60,
                  0x10000000,0,L"Engine",&LAB_142146c80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae89b0;
}



// FUNCTION 142145540 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UColorBinding::GetPrivateStaticClass(void)

{
  if (DAT_146ae8bc0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ColorBinding",&DAT_146ae8bc0,StaticRegisterNativesUColorBinding,
                  0x68,0x10000000,0,L"Engine",&LAB_142146d80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPropertyBinding::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae8bc0;
}



// FUNCTION 1421455f0 FUN_1421455f0 body=47 status=ok
// SIG undefined FUN_1421455f0(void)

longlong FUN_1421455f0(void)

{
  if (DAT_146ae89a8 == 0) {
    FUN_141786440(&DAT_146ae89a8,&PTR_GetPrivateStaticClass_144fb3ed0);
  }
  return DAT_146ae89a8;
}



// FUNCTION 142145620 FUN_142145620 body=47 status=ok
// SIG undefined FUN_142145620(void)

longlong FUN_142145620(void)

{
  if (DAT_146ae8990 == 0) {
    FUN_141786a30(&DAT_146ae8990,&PTR_FUN_146502540);
  }
  return DAT_146ae8990;
}



// FUNCTION 142145650 FUN_142145650 body=47 status=ok
// SIG undefined FUN_142145650(void)

longlong FUN_142145650(void)

{
  if (DAT_146ae8998 == 0) {
    FUN_141786a30(&DAT_146ae8998,&PTR_FUN_1465025c0);
  }
  return DAT_146ae8998;
}



// FUNCTION 142145680 FUN_142145680 body=47 status=ok
// SIG undefined FUN_142145680(void)

longlong FUN_142145680(void)

{
  if (DAT_146ae89a0 == 0) {
    FUN_141786a30(&DAT_146ae89a0,&PTR_FUN_146502640);
  }
  return DAT_146ae89a0;
}



// FUNCTION 1421456b0 FUN_1421456b0 body=47 status=ok
// SIG undefined FUN_1421456b0(void)

longlong FUN_1421456b0(void)

{
  if (DAT_146ae8bb8 == 0) {
    FUN_141786440(&DAT_146ae8bb8,&PTR_GetPrivateStaticClass_144fb3f90);
  }
  return DAT_146ae8bb8;
}



// FUNCTION 1421456e0 FUN_1421456e0 body=47 status=ok
// SIG undefined FUN_1421456e0(void)

longlong FUN_1421456e0(void)

{
  if (DAT_146ae8ba8 == 0) {
    FUN_141786a30(&DAT_146ae8ba8,&PTR_FUN_146504bc0);
  }
  return DAT_146ae8ba8;
}



// FUNCTION 142145710 FUN_142145710 body=47 status=ok
// SIG undefined FUN_142145710(void)

longlong FUN_142145710(void)

{
  if (DAT_146ae8bb0 == 0) {
    FUN_141786a30(&DAT_146ae8bb0,&PTR_FUN_146504c40);
  }
  return DAT_146ae8bb0;
}



// FUNCTION 142145770 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UComboBox::StaticClass(void)

{
  if (DAT_146ae8bd0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ComboBox",&DAT_146ae8bd0,FUN_140447710,0x138,0x10000000,0,
                  L"Engine",&LAB_142146d90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae8bd0;
}



// FUNCTION 142145820 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBrushBinding::GetPrivateStaticClass(void)

{
  if (DAT_146ae89c8 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"BrushBinding",&DAT_146ae89c8,StaticRegisterNativesUBrushBinding,
                  0x68,0x10000000,0,L"Engine",&LAB_142146ca0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPropertyBinding::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae89c8;
}



// FUNCTION 1421458d0 FUN_1421458d0 body=47 status=ok
// SIG undefined FUN_1421458d0(void)

longlong FUN_1421458d0(void)

{
  if (DAT_146ae89c0 == 0) {
    FUN_141786440(&DAT_146ae89c0,&PTR_GetPrivateStaticClass_144fb41f0);
  }
  return DAT_146ae89c0;
}



// FUNCTION 142145900 FUN_142145900 body=47 status=ok
// SIG undefined FUN_142145900(void)

longlong FUN_142145900(void)

{
  if (DAT_146ae89b8 == 0) {
    FUN_141786a30(&DAT_146ae89b8,&PTR_FUN_1465027b0);
  }
  return DAT_146ae89b8;
}



// FUNCTION 142145940 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UButton::GetPrivateStaticClass(void)

{
  if (DAT_146ae8a30 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"Button",&DAT_146ae8a30,StaticRegisterNativesUButton,0x420,
                  0x10000000,0,L"Engine",&LAB_142146cb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UContentWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae8a30;
}



// FUNCTION 1421459f0 FUN_1421459f0 body=47 status=ok
// SIG undefined FUN_1421459f0(void)

longlong FUN_1421459f0(void)

{
  if (DAT_146ae8a28 == 0) {
    FUN_141786440(&DAT_146ae8a28,&PTR_GetPrivateStaticClass_144fb4610);
  }
  return DAT_146ae8a28;
}



// FUNCTION 142145a20 FUN_142145a20 body=47 status=ok
// SIG undefined FUN_142145a20(void)

longlong FUN_142145a20(void)

{
  if (DAT_146ae89f0 == 0) {
    FUN_141786a30(&DAT_146ae89f0,&PTR_FUN_146502970);
  }
  return DAT_146ae89f0;
}



// FUNCTION 142145a50 FUN_142145a50 body=47 status=ok
// SIG undefined FUN_142145a50(void)

longlong FUN_142145a50(void)

{
  if (DAT_146ae89f8 == 0) {
    FUN_141786a30(&DAT_146ae89f8,&PTR_FUN_1465029f0);
  }
  return DAT_146ae89f8;
}



// FUNCTION 142145a80 FUN_142145a80 body=47 status=ok
// SIG undefined FUN_142145a80(void)

longlong FUN_142145a80(void)

{
  if (DAT_146ae8a00 == 0) {
    FUN_141786a30(&DAT_146ae8a00,&PTR_FUN_146502a70);
  }
  return DAT_146ae8a00;
}



// FUNCTION 142145ab0 FUN_142145ab0 body=47 status=ok
// SIG undefined FUN_142145ab0(void)

longlong FUN_142145ab0(void)

{
  if (DAT_146ae8a08 == 0) {
    FUN_141786a30(&DAT_146ae8a08,&PTR_FUN_146502af0);
  }
  return DAT_146ae8a08;
}


