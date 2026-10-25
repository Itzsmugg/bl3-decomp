// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1421087f0 NativePaint body=122 status=ok
// SIG undefined NativePaint(void)

int UUserWidget::NativePaint
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,int param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  undefined1 local_10;
  int local_c;
  
  if ((*(byte *)(param_1 + 0x1ac) & 0x10) != 0) {
    local_28 = param_5;
    local_18 = param_7;
    local_10 = param_8;
    local_20 = param_6;
    local_c = param_6;
    local_38 = param_3;
    local_30 = param_4;
    FUN_14215cd10(param_1,&local_38);
    if (local_c <= param_6) {
      local_c = param_6;
    }
    return local_c;
  }
  return param_6;
}



// FUNCTION 142108890 NativeTick body=133 status=ok
// SIG undefined NativeTick(void)

void UUserWidget::NativeTick(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x1ad) != '\0') {
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
    FUN_1421410d0(param_1,param_2,param_3);
    if ((*(byte *)(param_1 + 0x1ac) & 8) != 0) {
      local_58 = *param_2;
      uStack_50 = param_2[1];
      local_48 = param_2[2];
      uStack_40 = param_2[3];
      local_38 = *(undefined4 *)(param_2 + 4);
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_30 = *(undefined4 *)(param_2 + 5);
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
      local_28 = param_2[6];
      FUN_14215dde0(param_1,&local_58,param_3);
    }
  }
  return;
}



// FUNCTION 142108920 FUN_142108920 body=97 status=ok
// SIG undefined FUN_142108920(void)

void FUN_142108920(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x2b0) <= param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + (longlong)param_2 * 8);
  }
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x30))();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x623) = 1;
    *(undefined8 *)(lVar1 + 0x5c0) = uVar2;
    *(undefined4 *)(lVar1 + 0x5c8) = 0;
    FUN_1419bb590(lVar1);
    return;
  }
  return;
}



// FUNCTION 142108990 FUN_142108990 body=494 status=ok
// SIG undefined FUN_142108990(void)

void FUN_142108990(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar9 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar9;
    if (*(int *)(param_1 + 0x3c8) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x3c0);
    }
    uVar6 = (**(code **)(*plVar8 + 0x38))();
    *(undefined4 *)(param_1 + 0x3b8) = uVar6;
  }
  if (*(int *)(param_1 + 0x3b8) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x5a8) = *param_2;
  if (*(int *)(param_1 + 0x3b8) == 3) {
    uVar7 = *(ushort *)(param_3 + 8) & 0xc;
    if ((*(ushort *)(param_3 + 8) & 3) == 0) {
      if (uVar7 == 0) goto LAB_142108a28;
    }
    else {
      if (uVar7 == 0) {
        (**(code **)(*(longlong *)(param_1 + 0x430) + 0x20))();
      }
      (**(code **)(*(longlong *)(param_1 + 0x430) + 0x28))((longlong *)(param_1 + 0x430),*param_2);
    }
    (**(code **)(*(longlong *)(param_1 + 0x430) + 0x30))((longlong *)(param_1 + 0x430),1);
  }
  else {
LAB_142108a28:
    uVar3 = *param_2;
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (param_1 + 0x558,0);
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar9 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
      *(undefined4 *)(param_1 + 0x3b8) = uVar6;
    }
    if (*(int *)(param_1 + 0x3b8) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x430) + 0x18))(param_1 + 0x430,uVar3,1);
      (**(code **)(*(longlong *)(param_1 + 0x430) + 0x30))(param_1 + 0x430,1);
    }
  }
  FUN_142100550(param_1 + 0x438,local_18,param_2);
  uVar3 = *param_2;
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_3 + 0xc);
  *(undefined1 *)(param_1 + 0x623) = 1;
  *(undefined8 *)(param_1 + 0x5c0) = uVar3;
  FUN_1419bb590(param_1);
  plVar9 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
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



// FUNCTION 142108b80 FUN_142108b80 body=58 status=ok
// SIG undefined FUN_142108b80(void)

undefined1 FUN_142108b80(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UUserInterfaceSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return *(undefined1 *)(lVar2 + 0x221);
}



// FUNCTION 142108bc0 FUN_142108bc0 body=2734 status=ok
// SIG undefined FUN_142108bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142108bc0(longlong *param_1,longlong param_2,undefined4 param_3,float *param_4,float *param_5,
             undefined4 param_6,longlong *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong *plVar15;
  undefined1 auStack_708 [32];
  longlong local_6e8;
  longlong local_6e0;
  undefined4 local_6d8;
  longlong local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  undefined1 local_6b8;
  undefined1 local_6b0;
  longlong local_6a8;
  undefined1 local_698 [16];
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  longlong *local_668;
  longlong *local_660;
  undefined4 local_658;
  longlong *local_650;
  longlong *local_648;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  longlong *local_628;
  undefined8 local_620;
  longlong *local_618;
  undefined8 local_610;
  longlong *local_608;
  float *local_600;
  undefined4 local_5f8;
  undefined1 local_5f4;
  undefined8 local_5f0;
  undefined4 local_5e8;
  code *local_5d8;
  undefined1 *puStack_5d0;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  undefined1 local_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined8 uStack_590;
  longlong *local_588;
  longlong *local_580;
  longlong *local_570;
  longlong *local_568;
  undefined1 local_558 [8];
  longlong *local_550;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined1 local_518 [272];
  undefined1 local_408 [24];
  longlong *local_3f0;
  undefined1 local_3e8 [912];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_708;
  local_628 = param_7;
  local_658 = param_3;
  local_600 = param_4;
  puVar9 = (undefined8 *)operator_new(0xa8);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    FGameDragDropOperation::FGameDragDropOperation(puVar9);
    FGCObject::FGCObject(puVar9 + 9);
    *puVar9 = &PTR__scalar_deleting_destructor__144fb1578;
    puVar9[9] = &PTR_LAB_144fb15d0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    uVar11 = (**(code **)(*DAT_1469eaf38 + 0x40))();
    puVar9[0x14] = uVar11;
  }
  plVar10 = (longlong *)operator_new(0x18);
  plVar13 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
    plVar10[2] = (longlong)puVar9;
    plVar13 = plVar10;
  }
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)plVar13;
  plVar10 = puVar9 + 1;
  if (puVar9 == (undefined8 *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 != (longlong *)0x0) {
    if (*plVar10 != 0) {
      if (plVar10[1] != 0) {
        piVar1 = (int *)(plVar10[1] + 8);
        LOCK();
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *piVar1 = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (0 < iVar8) goto LAB_142108d6e;
      }
      plVar13 = (longlong *)param_1[1];
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *plVar10 = (longlong)puVar9;
    plVar15 = (longlong *)plVar10[1];
    if (plVar13 != plVar15) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar15 = (longlong *)plVar10[1];
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
      plVar10[1] = (longlong)plVar13;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar13 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
  }
LAB_142108d6e:
  plVar13 = local_628;
  *(undefined4 *)(*param_1 + 0x98) = local_658;
  fVar3 = param_5[1];
  fVar4 = local_600[1];
  lVar12 = *param_1;
  *(float *)(lVar12 + 0x88) = *param_5 - *local_600;
  *(float *)(lVar12 + 0x8c) = fVar3 - fVar4;
  *(undefined8 *)(*param_1 + 0x90) = *(undefined8 *)param_5;
  uStack_670 = (longlong *)local_628[1];
  lVar12 = *param_1;
  local_678 = *local_628;
  plVar10 = (longlong *)(lVar12 + 0x60);
  if (uStack_670 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_670 + 1) = (int)uStack_670[1] + 1;
    UNLOCK();
  }
  if (&local_678 != plVar10) {
    local_678._4_4_ = (undefined4)((ulonglong)local_678 >> 0x20);
    uStack_670._4_4_ = (undefined4)((ulonglong)uStack_670 >> 0x20);
    lVar5 = *plVar10;
    plVar15 = *(longlong **)(lVar12 + 0x68);
    local_540 = (undefined4)local_678;
    uStack_53c = local_678._4_4_;
    uStack_538 = (undefined4)uStack_670;
    uStack_534 = uStack_670._4_4_;
    *(undefined4 *)plVar10 = (undefined4)local_678;
    *(undefined4 *)(lVar12 + 100) = local_678._4_4_;
    *(undefined4 *)(lVar12 + 0x68) = (undefined4)uStack_670;
    *(undefined4 *)(lVar12 + 0x6c) = uStack_670._4_4_;
    local_678 = lVar5;
    uStack_670 = plVar15;
  }
  plVar10 = uStack_670;
  if (uStack_670 != (longlong *)0x0) {
    LOCK();
    plVar15 = uStack_670 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*uStack_670)(uStack_670);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*uStack_670 + 8))(uStack_670,1);
      }
    }
  }
  lVar12 = *param_1;
  uVar11 = (**(code **)(**(longlong **)(*plVar13 + 0x300) + 0x148))();
  uVar11 = UWorld::GetGameViewport(uVar11);
  *(undefined8 *)(lVar12 + 0x70) = uVar11;
  uStack_680 = (longlong *)0x0;
  *(longlong *)(*param_1 + 0x58) = param_2;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    uVar11 = FText::FromString(local_558,param_2 + 0x28);
    FText::FText(local_5c8,uVar11);
    local_5b0 = 1;
    local_5a8 = 0;
    local_5a0 = 0;
    lVar12 = STextBlock::FArguments::FArguments(local_3e8);
    FText::operator=(lVar12 + 0x108,local_5c8);
    *(undefined1 *)(lVar12 + 0x120) = local_5b0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x128,&local_5a8);
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
    plVar10 = plVar13 + 2;
    local_588 = plVar10;
    local_580 = plVar13;
    FUN_14044f790(&local_588,plVar10);
    local_6e8 = 0x650;
    SWidget::SetDebugInfo
              (plVar10,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\UMGDragDropOp.cpp",0xa4
              );
    local_6d8 = *(undefined4 *)(lVar12 + 0x90);
    local_6a8 = lVar12 + 0xf8;
    local_6c0 = lVar12 + 0xe8;
    local_6b0 = *(undefined1 *)(lVar12 + 0xf1);
    local_6c8 = lVar12 + 200;
    local_6d0 = lVar12 + 0x98;
    local_6b8 = *(undefined1 *)(lVar12 + 0xf0);
    local_6e0 = lVar12 + 0x78;
    local_6e8 = lVar12 + 0x60;
    SWidget::SWidgetConstruct(plVar10,lVar12,lVar12 + 0x30,lVar12 + 0x40);
    FUN_1419b0120(plVar10,lVar12);
    if (((char)plVar13[5] < '\0') ||
       (cVar6 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar6 != '\0')) {
      bVar7 = 1;
    }
    else {
      bVar7 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar7;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_620 = 0;
    local_688 = plVar10;
    local_618 = plVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_680,&local_618);
    plVar10 = local_618;
    if (local_618 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_618 + 1;
      lVar12 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_618)(local_618);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_618 + 8))(local_618,1);
        }
      }
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar13 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
      LOCK();
      plVar10 = plVar13 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    FUN_140691150(local_3e8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5a8);
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_5c0 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    uStack_590 = (undefined1 *)CONCAT44(uStack_590._4_4_,(undefined4)uStack_590);
    if (local_550 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_550 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      uStack_590 = (undefined1 *)CONCAT44(uStack_590._4_4_,(undefined4)uStack_590);
      if ((int)lVar12 == 1) {
        (**(code **)*local_550)(local_550);
        LOCK();
        piVar1 = (int *)((longlong)local_550 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          lVar12 = *local_550;
LAB_142109231:
          (**(code **)(lVar12 + 8))(local_550,1);
        }
      }
    }
  }
  else {
    puStack_5d0 = local_698;
    local_698[0] = 0;
    local_5d8 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_598 = 0x420e6680;
    uStack_594 = 1;
    uStack_590 = puStack_5d0;
    FUN_14213eb80(*(longlong *)(param_2 + 0x40),&local_650,&local_598);
    plVar13 = local_648;
    local_608 = local_648;
    if (local_648 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_648 + 1) = (int)local_648[1] + 1;
      UNLOCK();
    }
    local_688 = local_650;
    local_610 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_680,&local_608);
    plVar10 = local_608;
    if (local_608 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_608 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      plVar13 = local_648;
      if ((int)lVar12 == 1) {
        (**(code **)*local_608)(local_608);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar13 = local_648;
        if (iVar8 == 1) {
          (**(code **)(*local_608 + 8))(local_608,1);
          plVar13 = local_648;
        }
      }
    }
    plVar10 = local_648;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar13 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_648)(local_648);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          lVar12 = *local_648;
          local_550 = local_648;
          goto LAB_142109231;
        }
      }
    }
  }
  local_5f8 = param_6;
  local_5f4 = 1;
  local_5f0 = 0;
  local_5e8 = 0;
  if (uStack_680 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_680 + 1) = (int)uStack_680[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14200e250(local_518);
  *(undefined4 *)(lVar12 + 0x108) = param_6;
  *(undefined1 *)(lVar12 + 0x10c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x110,&local_5f0);
  puVar2 = (undefined4 *)(lVar12 + 0x120);
  local_638 = (undefined4)local_688;
  uStack_634 = local_688._4_4_;
  uStack_630 = (undefined4)uStack_680;
  uStack_62c = uStack_680._4_4_;
  if (uStack_680 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_680 + 1) = (int)uStack_680[1] + 1;
    UNLOCK();
  }
  if (&local_638 != puVar2) {
    local_638 = *puVar2;
    uStack_634 = *(undefined4 *)(lVar12 + 0x124);
    uStack_630 = *(undefined4 *)(lVar12 + 0x128);
    uStack_62c = *(undefined4 *)(lVar12 + 300);
    local_530 = (undefined4)local_688;
    uStack_52c = local_688._4_4_;
    uStack_528 = (undefined4)uStack_680;
    uStack_524 = uStack_680._4_4_;
    *puVar2 = (undefined4)local_688;
    *(undefined4 *)(lVar12 + 0x124) = local_688._4_4_;
    *(undefined4 *)(lVar12 + 0x128) = (undefined4)uStack_680;
    *(undefined4 *)(lVar12 + 300) = uStack_680._4_4_;
  }
  if (CONCAT44(uStack_62c,uStack_630) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_62c,uStack_630) + 8);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      puVar9 = (undefined8 *)CONCAT44(uStack_62c,uStack_630);
      (**(code **)*puVar9)(puVar9);
      LOCK();
      piVar1 = (int *)((longlong)puVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_62c,uStack_630) + 8))
                  ((longlong *)CONCAT44(uStack_62c,uStack_630),1);
      }
    }
  }
  plVar13 = uStack_680;
  if (uStack_680 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_680 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_680)(uStack_680);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*uStack_680 + 8))(uStack_680,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x290);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_DestroyObject_144f65c80;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_141961b00();
    }
  }
  plVar10 = plVar13 + 2;
  local_570 = plVar10;
  local_568 = plVar13;
  FUN_14044f790(&local_570,plVar10);
  local_6e8 = 0x280;
  SWidget::SetDebugInfo
            (plVar10,"SDPIScaler",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Slate\\UMGDragDropOp.cpp",0xae);
  local_6d8 = *(undefined4 *)(lVar12 + 0x90);
  local_6a8 = lVar12 + 0xf8;
  local_6c0 = lVar12 + 0xe8;
  local_6b0 = *(undefined1 *)(lVar12 + 0xf1);
  local_6c8 = lVar12 + 200;
  local_6d0 = lVar12 + 0x98;
  local_6b8 = *(undefined1 *)(lVar12 + 0xf0);
  local_6e0 = lVar12 + 0x78;
  local_6e8 = lVar12 + 0x60;
  SWidget::SWidgetConstruct(plVar10,lVar12,lVar12 + 0x30,lVar12 + 0x40);
  SDPIScaler::Construct(plVar10,lVar12);
  if (-1 < (char)plVar13[5]) {
    cVar6 = (**(code **)(*plVar10 + 0x1e8))(plVar10);
    if (cVar6 == '\0') {
      bVar7 = 0;
      goto LAB_142109467;
    }
  }
  bVar7 = 1;
LAB_142109467:
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar7;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  lVar12 = *param_1;
  pplVar14 = (longlong **)(lVar12 + 0x78);
  local_668 = plVar10;
  local_660 = plVar13;
  if (pplVar14 != &local_668) {
    *pplVar14 = plVar10;
    local_668 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar12 + 0x80,&local_660);
  }
  plVar10 = local_660;
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_660 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_660 + 8))(local_660,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
    LOCK();
    plVar10 = plVar13 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_3f0 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar1 = (int *)((longlong)local_3f0 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_408);
  FUN_140456c70(local_518);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5f0);
  SWidget::SlatePrepass(*(undefined8 *)(*param_1 + 0x78));
  (**(code **)(*(longlong *)*param_1 + 0x48))();
  plVar13 = uStack_680;
  if (uStack_680 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_680 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*uStack_680)(uStack_680);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*uStack_680 + 8))(uStack_680,1);
      }
    }
  }
  plVar13 = (longlong *)local_628[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return param_1;
}



// FUNCTION 142109670 NoResourceBrush body=198 status=ok
// SIG undefined NoResourceBrush(void)

undefined8 UWidgetBlueprintLibrary::NoResourceBrush(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **local_98 [8];
  longlong *local_58;
  longlong *local_20;
  
  uVar5 = FSlateNoResource::FSlateNoResource(local_98,&DAT_1468b5d88);
  FUN_14080bc50(param_1,uVar5);
  local_98[0] = &PTR__scalar_deleting_destructor__143f489a8;
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142109740 FUN_142109740 body=132 status=ok
// SIG undefined FUN_142109740(void)

void FUN_142109740(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    uVar3 = UUserListEntry::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142109782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
      return;
    }
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      uVar3 = UUserListEntry::GetPrivateStaticClass();
      cVar4 = UClass::ImplementsInterface(lVar2,uVar3);
      if (cVar4 != '\0') {
        FUN_142150e10(lVar1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1421097d0 FUN_1421097d0 body=423 status=ok
// SIG undefined FUN_1421097d0(void)

void FUN_1421097d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_res8;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x5d0);
  if (lVar4 != 0) {
    local_res8 = lVar4;
    FUN_142100550(param_1 + 0x438,&local_28,&local_res8);
    if ((*(char *)(param_1 + 0x623) != '\0') && (local_28 != (longlong *)0x0)) {
      *(longlong *)(param_1 + 0x5a8) = lVar4;
      puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x50))(local_28,local_18);
      local_38 = *puVar6;
      local_30 = (longlong *)puVar6[1];
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_1419b4220(param_1,*(undefined4 *)(param_1 + 0x5c8),&local_38,0);
      plVar7 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
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
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_10 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
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
    *(undefined1 *)(param_1 + 0x623) = 0;
    if (((*(int *)(param_1 + 0x550) != 0) && (*(longlong **)(param_1 + 0x548) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x550) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x548);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,local_res8,&local_28);
    }
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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



// FUNCTION 142109980 FUN_142109980 body=440 status=ok
// SIG undefined FUN_142109980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_142109980(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  code *local_108;
  undefined1 *puStack_100;
  char local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_100 = local_118;
      local_118[0] = 0;
      local_108 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_108,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3a8))
                  (*(longlong **)(param_1 + 0x300),local_f8,param_3,param_4);
        if (local_f8[0] == '\0') {
          FUN_1417c9950(param_1,param_2,param_3,param_4);
          FUN_140438c20(local_f8);
          return param_2;
        }
        FReply::FReply(param_2,local_f8);
        FUN_140438c20(local_f8);
        return param_2;
      }
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



// FUNCTION 142109b40 FUN_142109b40 body=130 status=ok
// SIG undefined FUN_142109b40(void)

void FUN_142109b40(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_14215b170(param_1,*(undefined8 *)(param_2 + 0x378));
  iVar1 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x30))(param_2 + 0x28);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar1 + 1;
    if (*(int *)(param_1 + 0x18c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x180,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar1 * 8) = param_2;
  }
  FUN_142142860(param_1);
  return;
}



// FUNCTION 142109bd0 FUN_142109bd0 body=1141 status=ok
// SIG undefined FUN_142109bd0(void)

void FUN_142109bd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  ulonglong local_res8;
  longlong local_res18 [2];
  longlong local_198;
  longlong lStack_190;
  undefined1 local_188;
  longlong local_180;
  longlong *local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  longlong local_110;
  longlong *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  longlong *local_48;
  undefined1 local_38 [16];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1[0x40] != 0) {
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar9 < DAT_146ae7bc0) && (_Init_thread_header(&DAT_146ae7bc0), DAT_146ae7bc0 == -1)) {
      FName::FName(&DAT_146ae7bb8,L"TextDelegate",1);
      _Init_thread_footer(&DAT_146ae7bc0);
    }
    if ((*piVar9 < DAT_146ae7bd0) && (_Init_thread_header(&DAT_146ae7bd0), DAT_146ae7bd0 == -1)) {
      FName::FName(&DAT_146ae7bc8,L"ColorAndOpacityDelegate",1);
      _Init_thread_footer(&DAT_146ae7bd0);
    }
    if ((*piVar9 < DAT_146ae7be0) && (_Init_thread_header(&DAT_146ae7be0), DAT_146ae7be0 == -1)) {
      FName::FName(&DAT_146ae7bd8,L"ShadowColorAndOpacityDelegate",1);
      _Init_thread_footer(&DAT_146ae7be0);
    }
    lVar3 = *param_2;
    if (lVar3 == DAT_146ae7bb8) {
      (**(code **)(*param_1 + 0x2d8))(param_1,local_c0);
      FUN_1419bcc80(param_1[0x40],local_c0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_a0);
      plVar8 = local_b8;
    }
    else {
      if (lVar3 != DAT_146ae7bc8) {
        if (lVar3 != DAT_146ae7bd8) {
          return;
        }
        cVar6 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x3d);
        if (cVar6 == '\0') {
          local_d8 = 1;
          plVar8 = &local_e8;
          local_d0 = 0;
          local_e8 = param_1[0x3b];
          lStack_e0 = param_1[0x3c];
          local_c8 = 0;
        }
        else {
          local_res18[0] = param_1[0x3e];
          uVar7 = FWeakObjectPtr::Get(param_1 + 0x3d);
          plVar8 = (longlong *)FUN_1420c4410(local_90,uVar7,local_res18);
        }
        local_158 = (int)*plVar8;
        uStack_154 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_150 = (int)plVar8[1];
        uStack_14c = *(undefined4 *)((longlong)plVar8 + 0xc);
        local_148 = (undefined1)plVar8[2];
        local_140 = 0;
        local_138 = 0;
        TBaseDelegate<FSlateBrush_const_*>::operator=(&local_140,plVar8 + 3);
        if (cVar6 == '\0') {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d0);
        }
        else {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78);
        }
        FUN_1419bc9e0(param_1[0x40],&local_158);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_140);
        return;
      }
      cVar6 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x2e);
      if (cVar6 == '\0') {
        local_188 = (char)param_1[0x2b];
        local_180 = param_1[0x2c];
        local_178 = (longlong *)param_1[0x2d];
        local_198 = param_1[0x29];
        lStack_190 = param_1[0x2a];
        if (local_178 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_178 + 1) = (int)local_178[1] + 1;
          UNLOCK();
        }
        local_170 = 1;
        plVar8 = &local_198;
        local_168 = 0;
        bVar5 = false;
        bVar4 = true;
        local_160 = 0;
      }
      else {
        local_res8 = param_1[0x2f];
        uVar7 = FWeakObjectPtr::Get(param_1 + 0x2e);
        plVar8 = (longlong *)FUN_1420c4690(local_68,uVar7,&local_res8);
        bVar5 = true;
        bVar4 = false;
      }
      local_128 = (int)*plVar8;
      uStack_124 = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_120 = (int)plVar8[1];
      uStack_11c = *(undefined4 *)((longlong)plVar8 + 0xc);
      local_118 = (char)plVar8[2];
      local_110 = plVar8[3];
      local_108 = (longlong *)plVar8[4];
      if (local_108 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_108 + 1) = (int)local_108[1] + 1;
        UNLOCK();
      }
      local_100 = (undefined1)plVar8[5];
      local_f8 = 0;
      local_f0 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f8,plVar8 + 6);
      if ((bVar4) &&
         (TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_168), plVar8 = local_178,
         local_178 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar9 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      if ((bVar5) &&
         (TBaseDelegate<FText>::~TBaseDelegate<FText>(local_38), local_48 != (longlong *)0x0)) {
        LOCK();
        plVar8 = local_48 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar9 = (int *)((longlong)local_48 + 0xc);
          iVar2 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      FUN_1419bbcf0(param_1[0x40],&local_128);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
      plVar8 = local_108;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar9 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14210a050 FUN_14210a050 body=279 status=ok
// SIG undefined FUN_14210a050(void)

undefined8 FUN_14210a050(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  cVar2 = FUN_14192b710();
  if (cVar2 == '\0') {
    FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x6b,0);
    if (((int)param_1[0x7a] != 0) && ((longlong *)param_1[0x79] != (longlong *)0x0)) {
      cVar2 = (**(code **)(*(longlong *)param_1[0x79] + 0x18))();
      if (cVar2 != '\0') {
        if ((int)param_1[0x7a] == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)param_1[0x79];
        }
        (**(code **)(*plVar3 + 0x40))();
      }
    }
  }
  else {
    FUN_1420fe410(param_1[0x75],&local_18);
    if (0 < local_10) {
      lVar1 = *local_18;
      if (lVar1 != param_1[0x74]) {
        FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x6e,0);
        param_1[0x74] = lVar1;
        TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
                  (param_1 + 0x72,lVar1,3);
      }
      (**(code **)(*param_1 + 0x210))(param_1,0,1,0);
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  FUN_141946eb0(param_1,param_2);
  return param_2;
}



// FUNCTION 14210a170 OnClosed body=135 status=ok
// SIG undefined OnClosed(void)

void FDelegateToolTip::OnClosed(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x18) != &local_18) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_10);
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
  return;
}



// FUNCTION 14210a200 FUN_14210a200 body=406 status=ok
// SIG undefined FUN_14210a200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14210a200(longlong param_1,char *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  char local_90 [8];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong *local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FDragDropOperation::OnCursorQuery();
  if (*param_2 == '\0') {
    local_98[0] = 1;
    pcVar1 = param_2 + 8;
    local_60 = 1;
    *param_2 = '\x01';
    local_90[0] = '\0';
    local_90[1] = '\0';
    local_90[2] = '\0';
    local_90[3] = '\0';
    local_90[4] = '\0';
    local_90[5] = '\0';
    local_90[6] = '\0';
    local_90[7] = '\0';
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    if (pcVar1 != local_90) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x10,&uStack_88);
    }
    if (param_2 + 0x18 != (char *)&local_80) {
      *(undefined8 *)(param_2 + 0x18) = local_80;
      local_80 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x20,&uStack_78);
    }
    if (param_2 + 0x28 != (char *)&local_70) {
      *(undefined8 *)(param_2 + 0x28) = local_70;
      local_70 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x30,&uStack_68);
    }
    *(undefined4 *)(param_2 + 0x38) = local_60;
    FCursorReply::~FCursorReply(local_98);
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (lVar5 != 0) {
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0xa8))(lVar5 + 0x28,&local_38,0,param_2);
    if (local_28 != '\0') {
      local_58 = local_38;
      local_50 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      uVar6 = FUN_1421007a0(*(undefined8 *)(param_1 + 0x70),local_48);
      FCursorReply::SetCursorWidget(param_2,uVar6,&local_58);
      if (local_28 != '\0') {
        local_28 = 0;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_30 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar3 = (int *)((longlong)local_30 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14210a3a0 FUN_14210a3a0 body=259 status=ok
// SIG undefined FUN_14210a3a0(void)

undefined1 *
FUN_14210a3a0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x448))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
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



// FUNCTION 14210a4b0 FUN_14210a4b0 body=598 status=ok
// SIG undefined FUN_14210a4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14210a4b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_158 [40];
  undefined1 local_130 [24];
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x346) == '\0') {
    cVar4 = FUN_141846080();
    if ((cVar4 != '\0') && (*(char *)(param_1 + 0x344) != '\0')) {
      plVar2 = *(longlong **)(param_1 + 0x338);
      plVar7 = (longlong *)0x0;
      plVar8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar7, !bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar8 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = *(longlong **)(param_1 + 0x330);
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
              LOCK();
              plVar8 = plVar2 + 1;
              lVar3 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              plVar8 = plVar2;
              if ((int)lVar3 == 1) {
                (**(code **)*plVar2)(plVar2);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
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
      (**(code **)(*plVar7 + 0x30))(plVar7,2);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    FUN_14210a710(param_1,param_2,param_3,param_4);
  }
  else {
    *(undefined1 *)(param_1 + 0x346) = 0;
    plVar2 = *(longlong **)(param_1 + 0x338);
    plVar7 = plVar2;
    plVar8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar5 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x330);
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
    local_64 = local_64 & 0xffffff00;
    local_118[0] = 1;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_110 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_68 = 0x20702;
    uVar6 = (**(code **)(*plVar8 + 0xa8))(plVar8,local_130);
    uVar6 = FUN_140693ff0(local_118,uVar6);
    FUN_140438260(param_2,uVar6);
    FUN_140438c20(local_118);
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
  }
  return param_2;
}



// FUNCTION 14210a710 FUN_14210a710 body=1099 status=ok
// SIG undefined FUN_14210a710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14210a710(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  longlong *local_1a8;
  longlong local_1a0 [2];
  longlong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178 [2];
  code *local_168;
  undefined1 *puStack_160;
  undefined8 local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar7 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      puStack_160 = local_1b8;
      local_1b8[0] = 0;
      local_168 = FUN_1406ddef0;
      local_148 = 0x406ddef0;
      uStack_144 = 1;
      puStack_140 = puStack_160;
      lVar5 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
      if (*(char *)(lVar5 + 0x58) == '\0') {
        local_1a0[0] = 0;
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3f0))
                  (*(longlong **)(param_1 + 0x300),param_3,param_4,local_1a0);
        if (local_1a0[0] != 0) {
          local_178[0] = *(undefined8 *)(param_4 + 0x18);
          local_180 = *(undefined8 *)(param_3 + 0xc);
          uVar10 = FUN_1420ffff0(*(undefined8 *)(param_1 + 0x300));
          puVar6 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_138);
          local_188 = *puVar6;
          plVar8 = (longlong *)puVar6[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_130 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar1 = (int *)((longlong)local_130 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_130 + 8))(local_130,1);
              }
            }
          }
          plVar9 = plVar8 + 1;
          local_158 = local_188;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar9 = (int)*plVar9 + 1;
            UNLOCK();
          }
          local_1c8 = &local_158;
          local_1d8 = &local_180;
          local_1d0 = uVar10;
          local_150 = plVar8;
          FUN_142108bc0(&local_1b0,local_1a0[0],*(undefined4 *)(param_4 + 0x50),local_178);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar8)();
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
          plVar8 = local_1a8;
          if (local_1a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
            UNLOCK();
          }
          local_74 = local_74 & 0xffffff00;
          local_128[0] = 1;
          local_120 = 0;
          local_118 = 0;
          local_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_80 = 0;
          local_78 = 0x20702;
          local_190 = local_1a8;
          if (local_1a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
            UNLOCK();
          }
          local_1a0[1] = 0;
          local_88 = local_1b0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_190);
          plVar9 = local_190;
          if (local_190 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_190 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            plVar8 = local_1a8;
            if ((int)lVar5 == 1) {
              (**(code **)*local_190)(local_190);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar8 = local_1a8;
              if (iVar2 == 1) {
                (**(code **)(*local_190 + 8))(local_190,1);
                plVar8 = local_1a8;
              }
            }
          }
          plVar3 = local_1a8;
          plVar9 = (longlong *)0x0;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar8 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            plVar9 = local_1a8;
            if ((int)lVar5 == 1) {
              (**(code **)*local_1a8)(local_1a8);
              plVar9 = local_1a8;
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_1a8 + 8))(local_1a8,1);
              }
            }
          }
          FUN_140438260(param_2,local_128);
          FUN_140438c20(local_128);
          plVar8 = local_1a8;
          if (plVar9 == (longlong *)0x0) {
            return param_2;
          }
          LOCK();
          plVar9 = plVar9 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 != 1) {
            return param_2;
          }
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return param_2;
          }
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
          return param_2;
        }
      }
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



// FUNCTION 14210ab60 FUN_14210ab60 body=329 status=ok
// SIG undefined FUN_14210ab60(void)

void FUN_14210ab60(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res18 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  plVar4 = *(longlong **)(param_3 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = *plVar4;
    uVar8 = FUN_1420ff340();
    cVar6 = (**(code **)(lVar5 + 0x50))(plVar4,uVar8);
    if (cVar6 != '\0') {
      plVar4 = *(longlong **)(param_3 + 0x78);
      lVar5 = *(longlong *)(param_3 + 0x70);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      uStack_20 = (undefined1 *)CONCAT44(uStack_20._4_4_,(undefined4)uStack_20);
      if ((lVar5 != 0) &&
         (uStack_20 = (undefined1 *)CONCAT44(uStack_20._4_4_,(undefined4)uStack_20),
         *(longlong *)(param_1 + 0x300) != 0)) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
        if (iVar3 < (int)DAT_1469e91c4) {
          uVar10 = iVar3 >> 0x1f & 0xffff;
          uVar7 = iVar3 + uVar10;
          lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar10) * 0x18;
        }
        else {
          lVar9 = 0;
        }
        uStack_20 = (undefined1 *)CONCAT44(uStack_20._4_4_,(undefined4)uStack_20);
        if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) {
          uStack_20 = local_res18;
          local_res18[0] = 0;
          local_28 = 0x406ddef0;
          uStack_24 = 1;
          lVar9 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
          if (*(char *)(lVar9 + 0x58) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3f8))
                      (*(longlong **)(param_1 + 0x300),param_2,param_3,*(undefined8 *)(lVar5 + 0x58)
                      );
          }
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
  }
  return;
}



// FUNCTION 14210acb0 FUN_14210acb0 body=327 status=ok
// SIG undefined FUN_14210acb0(void)

void FUN_14210acb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res10 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  plVar4 = *(longlong **)(param_2 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = *plVar4;
    uVar8 = FUN_1420ff340();
    cVar6 = (**(code **)(lVar5 + 0x50))(plVar4,uVar8);
    if (cVar6 != '\0') {
      plVar4 = *(longlong **)(param_2 + 0x78);
      lVar5 = *(longlong *)(param_2 + 0x70);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      uStack_10 = (undefined1 *)CONCAT44(uStack_10._4_4_,(undefined4)uStack_10);
      if ((lVar5 != 0) &&
         (uStack_10 = (undefined1 *)CONCAT44(uStack_10._4_4_,(undefined4)uStack_10),
         *(longlong *)(param_1 + 0x300) != 0)) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
        if (iVar3 < (int)DAT_1469e91c4) {
          uVar10 = iVar3 >> 0x1f & 0xffff;
          uVar7 = iVar3 + uVar10;
          lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar10) * 0x18;
        }
        else {
          lVar9 = 0;
        }
        uStack_10 = (undefined1 *)CONCAT44(uStack_10._4_4_,(undefined4)uStack_10);
        if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) {
          uStack_10 = local_res10;
          local_res10[0] = 0;
          local_18 = 0x406ddef0;
          uStack_14 = 1;
          lVar9 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
          if (*(char *)(lVar9 + 0x58) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x300) + 0x400))
                      (*(longlong **)(param_1 + 0x300),param_2,*(undefined8 *)(lVar5 + 0x58));
          }
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
  }
  return;
}



// FUNCTION 14210ae00 FUN_14210ae00 body=727 status=ok
// SIG undefined FUN_14210ae00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14210ae00(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

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
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_48;
  undefined4 local_40;
  char local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x3b8) == 0) || (*(longlong **)(param_1 + 0x3b0) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x18))(), cVar4 == '\0')) {
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
  }
  else {
    fVar11 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                   *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
    fVar13 = *(float *)(param_3 + 0x1c) * fVar11;
    fVar11 = -(*(float *)(param_3 + 0x20) * fVar11);
    fVar12 = *(float *)(param_3 + 4) * 0.25;
    fVar13 = fVar13 * *(float *)(param_4 + 0x1c) + fVar11 * *(float *)(param_4 + 0x18) +
             (-(fVar11 * *(float *)(param_3 + 0x2c)) - fVar13 * *(float *)(param_3 + 0x30));
    fVar11 = 3.0;
    if ((3.0 <= fVar12) && (fVar11 = fVar12, 10.0 <= fVar12)) {
      fVar11 = 10.0;
    }
    plVar7 = (longlong *)0x0;
    if (fVar11 <= fVar13) {
      local_48 = (*(float *)(param_3 + 4) - fVar11 < fVar13) + 1;
    }
    else {
      local_48 = 0;
    }
    plVar2 = *(longlong **)(param_1 + 0x390);
    plVar8 = plVar2;
    plVar9 = plVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar7, !bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar8 = plVar2;
          plVar9 = (longlong *)0x0;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = *(longlong **)(param_1 + 0x388);
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
    puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x38))(plVar9,param_1 + -8);
    local_58 = *puVar6;
    if (*(int *)(param_1 + 0x3b8) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x3b0);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_40,param_4,local_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (&local_40 != (undefined4 *)(param_1 + 0x3d0)) {
      if (*(char *)(param_1 + 0x3d4) != '\0') {
        *(undefined1 *)(param_1 + 0x3d4) = 0;
      }
      if (local_3c != '\0') {
        *(undefined4 *)(param_1 + 0x3d0) = local_40;
        *(undefined1 *)(param_1 + 0x3d4) = 1;
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
  }
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14210b0e0 FUN_14210b0e0 body=506 status=ok
// SIG undefined FUN_14210b0e0(void)

undefined1 * FUN_14210b0e0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 local_res20 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  plVar10 = *(longlong **)(param_4 + 0x70);
  lVar8 = 0;
  if (plVar10 == (longlong *)0x0) {
LAB_14210b208:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar4 = *plVar10;
    uVar7 = FUN_1420ff340();
    cVar5 = (**(code **)(lVar4 + 0x50))(plVar10,uVar7);
    if (cVar5 == '\0') goto LAB_14210b208;
    plVar10 = *(longlong **)(param_4 + 0x78);
    lVar4 = *(longlong *)(param_4 + 0x70);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uStack_30 = (undefined1 *)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
    if ((lVar4 != 0) &&
       (uStack_30 = (undefined1 *)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30),
       *(longlong *)(param_1 + 0x300) != 0)) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar9 = iVar3 >> 0x1f & 0xffff;
        uVar6 = iVar3 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
      }
      uStack_30 = (undefined1 *)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
      if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) {
        uStack_30 = local_res20;
        local_res20[0] = 0;
        local_38 = 0x406ddef0;
        uStack_34 = 1;
        lVar8 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
        if (*(char *)(lVar8 + 0x58) == '\0') {
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x408))
                            (*(longlong **)(param_1 + 0x300),param_3,param_4,
                             *(undefined8 *)(lVar4 + 0x58));
          if (cVar5 != '\0') {
            FReply::Handled(param_2);
            goto LAB_14210b284;
          }
        }
      }
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
LAB_14210b284:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14210b2e0 FUN_14210b2e0 body=351 status=ok
// SIG undefined FUN_14210b2e0(void)

void FUN_14210b2e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x50) != *(int *)(param_1 + 0x98)) {
    return;
  }
  FUN_14214b6c0();
  SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x78),&local_res8);
  lVar1 = *(longlong *)(param_1 + 0x58);
  fVar4 = local_res8 * *(float *)(lVar1 + 0x4c) + *(float *)(param_2 + 0x18);
  fVar5 = local_resc * *(float *)(lVar1 + 0x50) + *(float *)(param_2 + 0x1c);
  switch(*(undefined1 *)(lVar1 + 0x48)) {
  case 0:
    fVar5 = fVar5 + *(float *)(param_1 + 0x8c);
    fVar4 = fVar4 + *(float *)(param_1 + 0x88);
  default:
    goto switchD_14210b370_caseD_1;
  case 2:
    local_res8 = local_res8 * 0.5;
  case 3:
    goto switchD_14210b370_caseD_3;
  case 4:
    local_resc = local_resc * 0.5;
  case 7:
    fVar5 = fVar5 - local_resc;
    goto switchD_14210b370_caseD_1;
  case 5:
    local_resc = local_resc * 0.5;
  case 8:
    local_res8 = local_res8 * 0.5;
    break;
  case 6:
    local_resc = local_resc * 0.5;
    break;
  case 9:
    break;
  }
  fVar5 = fVar5 - local_resc;
switchD_14210b370_caseD_3:
  fVar4 = fVar4 - local_res8;
switchD_14210b370_caseD_1:
  dVar2 = (double)(**(code **)(*DAT_1469eaf38 + 0x40))();
  dVar2 = dVar2 - *(double *)(param_1 + 0xa0);
  if (dVar2 < 0.15) {
    fVar3 = (float)(dVar2 * 6.666666666666667);
    fVar5 = (fVar5 - *(float *)(param_1 + 0x94)) * fVar3 + *(float *)(param_1 + 0x94);
    fVar4 = (fVar4 - *(float *)(param_1 + 0x90)) * fVar3 + *(float *)(param_1 + 0x90);
  }
  *(float *)(param_1 + 0x44) = fVar5;
  *(float *)(param_1 + 0x40) = fVar4;
  return;
}



// FUNCTION 14210b470 FUN_14210b470 body=211 status=ok
// SIG undefined FUN_14210b470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14210b470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108 = param_1 + -8;
  local_100 = param_3;
  local_f8 = param_4;
  FUN_1420d9eb0(&local_108,local_e8);
  if (((local_e8[0] == '\0') && (*(int *)(param_1 + 0x410) != 0)) &&
     (*(longlong **)(param_1 + 0x408) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x408) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x410) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_4);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x408) + 0x38))
                  (*(longlong **)(param_1 + 0x408),param_2,param_4);
      }
      goto LAB_14210b51b;
    }
  }
  FUN_140438260(param_2,local_e8);
LAB_14210b51b:
  FUN_140438c20(local_e8);
  return param_2;
}



// FUNCTION 14210b550 FUN_14210b550 body=896 status=ok
// SIG undefined FUN_14210b550(void)

void FUN_14210b550(longlong param_1,char param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  char local_res10;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined **local_b8 [9];
  longlong *local_70;
  longlong *local_48;
  longlong *local_40;
  
  local_res10 = param_2;
  if ((*(longlong *)(param_1 + 0x58) != 0) && (*(int *)(param_3 + 0x50) == *(int *)(param_1 + 0x98))
     ) {
    if (param_2 == '\0') {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        plVar2 = *(longlong **)(param_1 + 0x10);
        plVar12 = (longlong *)0x0;
        plVar10 = plVar2;
        plVar11 = plVar12;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar13 = iVar5 == 0;
          if (bVar13) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (plVar10 = plVar12, plVar11 = (longlong *)0x0, !bVar13) {
            LOCK();
            bVar13 = iVar5 == (int)plVar2[1];
            if (bVar13) {
              *(int *)(plVar2 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar13) {
              plVar10 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar11 = *(longlong **)(param_1 + 8);
                LOCK();
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                UNLOCK();
                LOCK();
                plVar10 = plVar2 + 1;
                lVar3 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*plVar2)(plVar2);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar2 + 8))(plVar2,1);
                  }
                }
                LOCK();
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                UNLOCK();
                plVar10 = plVar2;
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar2[1];
            bVar13 = iVar5 == 0;
            if (bVar13) {
              *(int *)(plVar2 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        FUN_1418890d0(local_b8,param_3);
        local_b8[0] = &PTR__scalar_deleting_destructor__144d5efe0;
        local_48 = plVar11;
        local_40 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar10 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        plVar2 = local_48;
        lVar3 = *(longlong *)(param_1 + 0x60);
        uStack_c0 = (undefined1 *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
        if (local_48 != (longlong *)0x0) {
          lVar8 = *local_48;
          uVar7 = FUN_1420ff340();
          cVar4 = (**(code **)(lVar8 + 0x50))(plVar2,uVar7);
          plVar11 = local_40;
          plVar2 = local_48;
          uStack_c0 = (undefined1 *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
          if (cVar4 != '\0') {
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            uStack_c0 = (undefined1 *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
            if ((local_48 != (longlong *)0x0) &&
               (lVar8 = *(longlong *)(lVar3 + 0x300),
               uStack_c0 = (undefined1 *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0), lVar8 != 0
               )) {
              iVar5 = *(int *)(lVar8 + 0xc);
              if (iVar5 < (int)DAT_1469e91c4) {
                uVar9 = iVar5 >> 0x1f & 0xffff;
                uVar6 = iVar5 + uVar9;
                plVar12 = (longlong *)
                          (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                          (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18);
              }
              uStack_c0 = (undefined1 *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
              if ((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0) {
                uStack_c0 = local_res8;
                local_res8[0] = 0;
                local_c8 = 0x406ddef0;
                uStack_c4 = 1;
                lVar8 = FUN_1415d8310(&local_c8,&DAT_14622e6dc);
                if (*(char *)(lVar8 + 0x58) == '\0') {
                  plVar12 = *(longlong **)(lVar3 + 0x300);
                  (**(code **)(*plVar12 + 0x418))(plVar12,local_b8,plVar2[0xb]);
                }
              }
            }
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar11 + 1;
              lVar3 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
        }
        plVar12 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_70 + 1;
          lVar3 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)local_70 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
        local_b8[0] = &PTR_FUN_144d56560;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar10 + 1;
          lVar3 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      param_2 = local_res10;
      FUN_14214b580(*(undefined8 *)(param_1 + 0x58),param_3);
    }
    else {
      FUN_14214b800(*(longlong *)(param_1 + 0x58),param_3);
    }
  }
  FDragDropOperation::OnDrop(param_1,param_2,param_3);
  return;
}



// FUNCTION 14210b8d0 FUN_14210b8d0 body=506 status=ok
// SIG undefined FUN_14210b8d0(void)

undefined1 * FUN_14210b8d0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 local_res20 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  plVar10 = *(longlong **)(param_4 + 0x70);
  lVar8 = 0;
  if (plVar10 == (longlong *)0x0) {
LAB_14210b9f8:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar4 = *plVar10;
    uVar7 = FUN_1420ff340();
    cVar5 = (**(code **)(lVar4 + 0x50))(plVar10,uVar7);
    if (cVar5 == '\0') goto LAB_14210b9f8;
    plVar10 = *(longlong **)(param_4 + 0x78);
    lVar4 = *(longlong *)(param_4 + 0x70);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uStack_30 = (undefined1 *)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
    if ((lVar4 != 0) &&
       (uStack_30 = (undefined1 *)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30),
       *(longlong *)(param_1 + 0x300) != 0)) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar9 = iVar3 >> 0x1f & 0xffff;
        uVar6 = iVar3 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
      }
      uStack_30 = (undefined1 *)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
      if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) {
        uStack_30 = local_res20;
        local_res20[0] = 0;
        local_38 = 0x406ddef0;
        uStack_34 = 1;
        lVar8 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
        if (*(char *)(lVar8 + 0x58) == '\0') {
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x410))
                            (*(longlong **)(param_1 + 0x300),param_3,param_4,
                             *(undefined8 *)(lVar4 + 0x58));
          if (cVar5 != '\0') {
            FReply::Handled(param_2);
            goto LAB_14210ba74;
          }
        }
      }
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
LAB_14210ba74:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14210bad0 FUN_14210bad0 body=220 status=ok
// SIG undefined FUN_14210bad0(void)

void FUN_14210bad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
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
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x360))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 14210bbb0 FUN_14210bbb0 body=188 status=ok
// SIG undefined FUN_14210bbb0(void)

void FUN_14210bbb0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
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
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x358))
                  (*(longlong **)(param_1 + 0x300),param_2);
      }
    }
  }
  return;
}



// FUNCTION 14210bc70 FUN_14210bc70 body=346 status=ok
// SIG undefined FUN_14210bc70(void)

undefined1 *
FUN_14210bc70(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x350))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 14210bdd0 FUN_14210bdd0 body=364 status=ok
// SIG undefined FUN_14210bdd0(void)

void FUN_14210bdd0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  
  if (((DAT_146ae7a40 != 0) && (lVar5 = FWeakObjectPtr::Get(&DAT_146ae7a38), lVar5 != 0)) &&
     (lVar5 = UObject::FindFunction(lVar5,DAT_146ae7a40), lVar5 != 0)) {
    plVar6 = (longlong *)FWeakObjectPtr::Get(&DAT_146ae7a38);
    uVar7 = FUN_14178ac60(plVar6,DAT_146ae7a40);
                    /* WARNING: Could not recover jumptable at 0x00014210be45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x208))(plVar6,uVar7,0);
    return;
  }
  lVar5 = DAT_146b17150;
  if (DAT_146b17150 != 0) {
    lVar8 = FUN_142937670();
    lVar3 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14210be96;
  }
  lVar5 = 0;
LAB_14210be96:
  plVar6 = *(longlong **)(lVar5 + 0x11e8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar6[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar6 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        bVar9 = iVar4 == (int)plVar6[1];
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) break;
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (plVar6 != (longlong *)0x0) {
        if (*(longlong *)(lVar5 + 0x11e0) != 0) {
          FUN_141856430();
        }
        LOCK();
        plVar1 = plVar6 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
    }
  }
  return;
}



// FUNCTION 14210bf40 OnGenerateEntryWidgetInternal body=152 status=ok
// SIG undefined OnGenerateEntryWidgetInternal(void)

undefined8
UListView::OnGenerateEntryWidgetInternal(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_28;
  undefined8 local_20;
  code *local_18;
  longlong *plStack_10;
  
  plStack_10 = &local_28;
  lVar1 = param_1 + -0x208;
  local_18 = FUN_1420e67f0;
  local_28 = lVar1;
  local_20 = param_3;
  if (*(longlong *)(param_1 + -0x108) != 0) {
    lVar3 = UUserWidget::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + -0x108);
    for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) goto LAB_14210bfa0;
    }
  }
  lVar5 = 0;
LAB_14210bfa0:
  uVar4 = FUN_1420c1c40(param_1 + -0xe0,lVar5,&local_18);
  FUN_1420f6700(lVar1,uVar4);
  return uVar4;
}



// FUNCTION 14210bfe0 FUN_14210bfe0 body=422 status=ok
// SIG undefined FUN_14210bfe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14210bfe0(longlong param_1,undefined8 param_2,void **param_3)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_38;
  void *local_30;
  ulonglong local_28;
  
  if ((*(int *)(param_1 + 0x148) != 0) && (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x148) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014210c03e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0x38))
                  (*(longlong **)(param_1 + 0x140),param_2,param_3);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014210c05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x120);
    if (lVar4 != 0) {
      lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 0x128));
      if (lVar4 != 0) {
        local_30 = (void *)0x0;
        local_28 = 0;
        local_38 = param_2;
        if (&local_30 != param_3) {
          uVar1 = *(uint *)(param_3 + 1);
          pvVar2 = *param_3;
          local_28 = (ulonglong)uVar1;
          if (uVar1 != 0) {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_30,uVar1,0)
            ;
            _guard_xfg_dispatch_icall_nop(local_30,pvVar2,(longlong)(int)uVar1 << 3);
          }
        }
        plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x120);
        uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 0x128));
        (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_38);
        pvVar2 = local_30;
        if (param_3 != &local_30) {
          lVar4 = (longlong)(int)local_28;
          *(int *)(param_3 + 1) = (int)local_28;
          if (((int)local_28 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (param_3,local_28 & 0xffffffff);
            _guard_xfg_dispatch_icall_nop(*param_3,pvVar2,lVar4 << 3);
          }
        }
        if (local_30 != (void *)0x0) {
          FMemory::Free(local_30);
        }
      }
    }
  }
  return;
}



// FUNCTION 14210c1a0 FUN_14210c1a0 body=538 status=ok
// SIG undefined FUN_14210c1a0(void)

undefined1 * FUN_14210c1a0(longlong *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *local_28;
  int local_20;
  
  lVar4 = *param_3;
  if (((lVar4 != DAT_1469e9910) && (lVar4 != DAT_1469e9970)) && (lVar4 != DAT_1469eae58)) {
    if (lVar4 != DAT_1469e9958) {
      FReply::Unhandled(param_2);
      FKey::~FKey(param_3);
      return param_2;
    }
    (**(code **)(*param_1 + 0x210))(param_1,0,1,0);
    FReply::Handled(param_2);
    FKey::~FKey(param_3);
    return param_2;
  }
  FUN_1420fe410(param_1[0x75],&local_28);
  plVar8 = (longlong *)0x0;
  if (0 < local_20) {
    lVar4 = param_1[0x75];
    uVar5 = *local_28;
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (lVar4 + 0x558,0);
    if (((*(int *)(lVar4 + 0x3c8) != 0) && (*(longlong **)(lVar4 + 0x3c0) != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(**(longlong **)(lVar4 + 0x3c0) + 0x18))(), cVar6 != '\0')) {
      if (*(int *)(lVar4 + 0x3c8) != 0) {
        plVar8 = *(longlong **)(lVar4 + 0x3c0);
      }
      uVar7 = (**(code **)(*plVar8 + 0x38))();
      *(undefined4 *)(lVar4 + 0x3b8) = uVar7;
    }
    if (*(int *)(lVar4 + 0x3b8) != 0) {
      (**(code **)(*(longlong *)(lVar4 + 0x430) + 0x18))(lVar4 + 0x430,uVar5,1,0);
      (**(code **)(*(longlong *)(lVar4 + 0x430) + 0x30))(lVar4 + 0x430,3);
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
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  plVar8 = (longlong *)param_3[2];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 14210c3c0 FUN_14210c3c0 body=314 status=ok
// SIG undefined FUN_14210c3c0(void)

void FUN_14210c3c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong local_18;
  longlong *local_10;
  
  FUN_1420f9830(param_1,&local_18);
  if (local_18 == 0) {
    bVar9 = *(byte *)(param_1 + 0xb4) >> 2 & 1;
  }
  else {
    if (((*(int *)(local_18 + 0xa8) != 0) && (*(longlong **)(local_18 + 0xa0) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(local_18 + 0xa0) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(local_18 + 0xa8) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(local_18 + 0xa0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined1 *)(local_18 + 0x98) = uVar5;
    }
    bVar9 = *(byte *)(local_18 + 0x98);
  }
  plVar7 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (((bVar9 != 0) && (*(longlong *)(param_2 + 8) != 0)) &&
     ((lVar6 = FWeakObjectPtr::Get(param_2), lVar6 != 0 &&
      (lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_2 + 8)), lVar6 != 0)))) {
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_2);
    uVar8 = FUN_14178ac60(plVar7,*(undefined8 *)(param_2 + 8));
    (**(code **)(*plVar7 + 0x208))(plVar7,uVar8,0);
  }
  return;
}



// FUNCTION 14210c500 OnItemClickedInternal body=31 status=ok
// SIG undefined OnItemClickedInternal(void)

void UListView::OnItemClickedInternal(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xc0,local_res8);
  return;
}



// FUNCTION 14210c520 FUN_14210c520 body=235 status=ok
// SIG undefined FUN_14210c520(void)

void FUN_14210c520(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong *local_18;
  longlong *local_10;
  
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_142100550(*(longlong *)(param_1 + 0x110) + 0x438,&local_18,&local_res10);
    if ((local_18 != (longlong *)0x0) && (iVar6 = (**(code **)(*local_18 + 0x38))(), 0 < iVar6)) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x288))
                        (*(longlong **)(param_1 + 0x110),&local_res10);
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x280))
                (*(longlong **)(param_1 + 0x110),&local_res10,cVar5 == '\0');
    }
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  local_res8 = local_res10;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xc0,&local_res8);
  return;
}



// FUNCTION 14210c610 FUN_14210c610 body=31 status=ok
// SIG undefined FUN_14210c610(void)

void FUN_14210c610(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xd0,local_res8);
  return;
}



// FUNCTION 14210c630 OnItemExpansionChangedInternal body=36 status=ok
// SIG undefined OnItemExpansionChangedInternal(void)

void UTreeView::OnItemExpansionChangedInternal
               (longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x130,&local_18);
  return;
}



// FUNCTION 14210c660 OnItemScrolledIntoViewInternal body=36 status=ok
// SIG undefined OnItemScrolledIntoViewInternal(void)

void UListView::OnItemScrolledIntoViewInternal
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x100,&local_18);
  return;
}



// FUNCTION 14210c690 FUN_14210c690 body=575 status=ok
// SIG undefined FUN_14210c690(void)

void FUN_14210c690(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  int local_res8 [2];
  longlong local_res10;
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong *local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,local_res8);
  lVar4 = 0;
  if (local_res8[0] != -1) {
    lVar4 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 8);
  }
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  if (lVar3 == 0) {
    local_68 = &local_res10;
    local_60 = param_3;
    FUN_14068d230(param_1 + 8,local_res20,&local_68,0);
    local_70 = *param_3;
    local_58 = &local_70;
    local_50 = &local_res10;
    FUN_1405c0510(param_1 + 0x58,local_78,&local_58,0);
    (*(code *)**(undefined8 **)*param_3)();
    param_2 = local_res10;
  }
  uVar6 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 200);
  if (*(int *)(param_1 + 200) != 0) {
    bVar12 = **(longlong **)(param_1 + 0xc0) != param_2;
    uVar9 = uVar6;
    uVar11 = uVar6;
    do {
      iVar8 = (int)uVar9;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)(iVar8 + 1);
      if ((longlong)uVar6 < lVar4) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + uVar6 * 8);
        do {
          if (bVar12 != (*plVar5 != param_2)) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar6 = uVar6 + 1;
          plVar5 = plVar5 + 1;
        } while ((longlong)uVar6 < lVar4);
      }
      iVar7 = (int)uVar9 - iVar8;
      if (bVar12 != false) {
        iVar10 = (int)uVar11;
        if (iVar10 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar8 * 8),
                     (longlong)iVar7 << 3);
          param_2 = local_res10;
        }
        uVar11 = (ulonglong)(uint)(iVar10 + iVar7);
      }
      bVar12 = (bool)(bVar12 ^ 1);
    } while ((longlong)uVar6 < lVar4);
    *(int *)(param_1 + 200) = (int)uVar11;
    param_3 = local_res18;
  }
  iVar8 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar8 + 1;
  if (*(int *)(param_1 + 0xb4) < iVar8 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0xa8),iVar8,0);
    param_2 = local_res10;
  }
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar8 * 8) = param_2;
  plVar5 = (longlong *)param_3[1];
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 14210c8d0 OnItemSelectionChanged body=132 status=ok
// SIG undefined OnItemSelectionChanged(void)

void SObjectTableRow<UObject_*>::OnItemSelectionChanged(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    uVar3 = UUserListEntry::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014210c912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      return;
    }
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      uVar3 = UUserListEntry::GetPrivateStaticClass();
      cVar4 = UClass::ImplementsInterface(lVar2,uVar3);
      if (cVar4 != '\0') {
        FUN_142150e60(lVar1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 14210c960 FUN_14210c960 body=346 status=ok
// SIG undefined FUN_14210c960(void)

undefined1 *
FUN_14210c960(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x388))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 14210cac0 FUN_14210cac0 body=1050 status=ok
// SIG undefined FUN_14210cac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14210cac0(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  int local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar2 = *(longlong **)(param_4 + 0x28);
  lVar3 = *(longlong *)(param_4 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  cVar5 = (**(code **)(*param_1 + 400))();
  if (cVar5 == '\0') goto LAB_14210cb80;
  if ((char)param_1[0x7d] == '\0') {
    if (((lVar3 == DAT_1469e9a00) || (lVar3 == DAT_1469ea5b8)) || (lVar3 == DAT_1469ea618)) {
      plVar4 = *(longlong **)param_1[0x7e];
      for (plVar9 = plVar4; plVar9 != plVar4 + (int)((longlong *)param_1[0x7e])[1];
          plVar9 = plVar9 + 1) {
        if (*plVar9 == param_1[0x74]) {
          iVar8 = (int)((longlong)plVar9 - (longlong)plVar4 >> 3);
          if (0 < iVar8) {
            FUN_142134ac0(param_1,plVar4[(longlong)iVar8 + -1]);
          }
          break;
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
    }
    else if (((lVar3 == DAT_1469e9a30) || (lVar3 == DAT_1469ea5d0)) || (lVar3 == DAT_1469ea630)) {
      plVar4 = *(longlong **)param_1[0x7e];
      iVar8 = (int)((longlong *)param_1[0x7e])[1];
      for (plVar9 = plVar4; plVar9 != plVar4 + iVar8; plVar9 = plVar9 + 1) {
        if (*plVar9 == param_1[0x74]) {
          iVar7 = (int)((longlong)plVar9 - (longlong)plVar4 >> 3);
          goto LAB_14210cd96;
        }
      }
      iVar7 = -1;
LAB_14210cd96:
      if (iVar7 < iVar8 + -1) {
        FUN_142134ac0(param_1,plVar4[(longlong)iVar7 + 1]);
      }
      FReply::Handled(param_2);
    }
    else {
      FUN_141949570(param_1,param_2,param_3,param_4);
    }
  }
  else {
    if (((lVar3 != DAT_1469e9910) && (lVar3 != DAT_1469e9970)) && (lVar3 != DAT_1469eae58)) {
      if (((lVar3 == DAT_1469e9958) || (lVar3 == DAT_1469eae70)) || (lVar3 == DAT_1469e98e0)) {
        FUN_14210dca0(param_1,0);
      }
      else if (*(char *)((longlong)param_1 + 0x3e9) != '\0') {
        FReply::Handled(param_2);
        goto joined_r0x00014210cdb9;
      }
LAB_14210cb80:
      FUN_1417c9760(param_1,param_2,param_3,param_4);
      if (plVar2 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar4 = plVar2 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_2;
      }
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 != 1) {
        return param_2;
      }
      (**(code **)(*plVar2 + 8))(plVar2,1);
      return param_2;
    }
    if (*(char *)((longlong)param_1 + 0x3e9) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x3e9) = 1;
      FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x6b,0);
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x79);
      FUN_141946eb0(param_1,param_2);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x3e9) = 0;
      FUN_1420fe410(param_1[0x75],&local_128);
      if (0 < local_120) {
        FUN_142112280(param_1,*local_128,3);
      }
      local_54 = local_54 & 0xffffff00;
      local_108[0] = 1;
      local_100 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0x20702;
      uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_118);
      FUN_14185b9a0(local_108,uVar6,2,0);
      FReply::FReply(param_2,local_108);
      FUN_140438c20(local_108);
      if (local_128 != (undefined8 *)0x0) {
        FMemory::Free(local_128);
      }
    }
  }
joined_r0x00014210cdb9:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14210cee0 FUN_14210cee0 body=1606 status=ok
// SIG undefined FUN_14210cee0(void)

undefined1 *
FUN_14210cee0(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  
  plVar2 = (longlong *)param_1[0xb7];
  bVar3 = false;
  if (((int)plVar2[1] < 1) || ((*(byte *)(param_4 + 8) & 0x30) != 0)) {
LAB_14210d4fa:
    FUN_1419b52f0(param_1,param_2,param_3,param_4);
  }
  else {
    plVar8 = *(longlong **)(param_4 + 0x28);
    lVar7 = *(longlong *)(param_4 + 0x18);
    local_res8 = 0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar11 = lVar7 == DAT_1469e99d0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar6 = (int *)((longlong)plVar8 + 0xc);
        iVar10 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (bVar11) {
      local_50 = *(longlong *)*plVar2;
LAB_14210d1a1:
      local_res8 = 1;
      if (local_50 == 0) goto LAB_14210d1cc;
      (**(code **)(*param_1 + 0x270))(param_1,&local_50,param_4);
    }
    else {
      plVar8 = *(longlong **)(param_4 + 0x28);
      lVar7 = *(longlong *)(param_4 + 0x18);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      bVar11 = lVar7 == DAT_1469e99b8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar6 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (bVar11) {
        local_50 = *(longlong *)(*plVar2 + -8 + (longlong)(int)plVar2[1] * 8);
        goto LAB_14210d1a1;
      }
      plVar8 = *(longlong **)(param_4 + 0x28);
      lVar7 = *(longlong *)(param_4 + 0x18);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      bVar11 = lVar7 == DAT_1469e9988;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar6 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (bVar11) {
        iVar10 = 0;
        if (param_1[0xb5] != 0) {
          plVar8 = (longlong *)*plVar2;
          for (plVar9 = plVar8; plVar9 != plVar8 + (int)plVar2[1]; plVar9 = plVar9 + 1) {
            if (*plVar9 == param_1[0xb5]) {
              iVar10 = (int)((longlong)plVar9 - (longlong)plVar8 >> 3);
              goto LAB_14210d080;
            }
          }
          iVar10 = -1;
        }
LAB_14210d080:
        fVar12 = (float)(**(code **)(*param_1 + 0x228))(param_1);
        iVar5 = (**(code **)(*param_1 + 0x230))(param_1);
        plVar8 = (longlong *)*plVar2;
        iVar5 = (int)fVar12 - (int)fVar12 % iVar5;
        if (iVar5 <= iVar10) {
          plVar8 = plVar8 + (iVar10 - iVar5);
        }
        local_50 = *plVar8;
        goto LAB_14210d1a1;
      }
      plVar8 = *(longlong **)(param_4 + 0x28);
      lVar7 = *(longlong *)(param_4 + 0x18);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      bVar11 = lVar7 == DAT_1469e99a0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar6 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (bVar11) {
        iVar10 = 0;
        if (param_1[0xb5] != 0) {
          plVar8 = (longlong *)*plVar2;
          for (plVar9 = plVar8; plVar9 != plVar8 + (int)plVar2[1]; plVar9 = plVar9 + 1) {
            if (*plVar9 == param_1[0xb5]) {
              iVar10 = (int)((longlong)plVar9 - (longlong)plVar8 >> 3);
              goto LAB_14210d150;
            }
          }
          iVar10 = -1;
        }
LAB_14210d150:
        fVar12 = (float)(**(code **)(*param_1 + 0x228))(param_1);
        iVar5 = (**(code **)(*param_1 + 0x230))(param_1);
        iVar5 = (int)fVar12 - (int)fVar12 % iVar5;
        if (iVar10 < (int)plVar2[1] - iVar5) {
          local_50 = *(longlong *)(*plVar2 + (longlong)(iVar5 + iVar10) * 8);
        }
        else {
          local_50 = *(longlong *)(*plVar2 + -8 + (longlong)(int)plVar2[1] * 8);
        }
        goto LAB_14210d1a1;
      }
LAB_14210d1cc:
      if (param_1[0xb5] == 0) {
        plVar8 = (longlong *)CONCAT44(uStackX_c,local_res8);
LAB_14210d203:
        bVar11 = false;
      }
      else {
        plVar8 = *(longlong **)(param_4 + 0x28);
        lVar7 = *(longlong *)(param_4 + 0x18);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        bVar3 = true;
        if (lVar7 != DAT_1469e9970) goto LAB_14210d203;
        bVar11 = true;
      }
      if ((bVar3) && (plVar8 != (longlong *)0x0)) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar6 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      bVar3 = false;
      if (bVar11) {
        local_58 = param_1[0xb5];
        if (((*(byte *)(param_4 + 8) & 0xc) == 0) &&
           (piVar6 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x77), *piVar6 != 2
           )) {
          plVar2 = param_1 + 0x86;
          cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_58);
          if (cVar4 == '\0') {
            (**(code **)(*plVar2 + 0x18))(plVar2,local_58,1);
            lVar7 = *plVar2;
            goto LAB_14210d2ec;
          }
          local_res8 = 0;
        }
        else {
          lVar7 = param_1[0x86];
          cVar4 = (**(code **)(lVar7 + 0x10))(param_1 + 0x86,&local_58);
          (**(code **)(lVar7 + 0x18))(param_1 + 0x86,local_58,cVar4 == '\0',1);
          lVar7 = param_1[0x86];
LAB_14210d2ec:
          (**(code **)(lVar7 + 0x30))(param_1 + 0x86,0);
          local_res8 = 1;
        }
        param_1[0xb6] = param_1[0xb5];
        FUN_142100550(param_1 + 0x87,&local_48,&local_58);
        if (local_48 == 0) {
          *(undefined4 *)(param_1 + 0xb9) = *(undefined4 *)(param_4 + 0xc);
          param_1[0xb8] = local_58;
          FUN_1419bb590(param_1);
        }
        plVar2 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_40 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar6 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
      }
      else {
        uVar1 = *(ushort *)(param_4 + 8);
        if ((((uVar1 & 3) == 0) && ((uVar1 & 0x30) == 0)) && ((uVar1 & 0xc) != 0)) {
          plVar8 = *(longlong **)(param_4 + 0x28);
          bVar3 = true;
          lVar7 = *(longlong *)(param_4 + 0x18);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          if ((lVar7 != DAT_1469e9b68) ||
             (piVar6 = (int *)TAttribute<enum_ESelectionMode::Type>::Get(param_1 + 0x77),
             *piVar6 != 3)) goto LAB_14210d458;
          bVar11 = true;
        }
        else {
          plVar8 = (longlong *)CONCAT44(uStackX_c,local_res8);
LAB_14210d458:
          bVar11 = false;
        }
        if ((bVar3) && (plVar8 != (longlong *)0x0)) {
          LOCK();
          plVar9 = plVar8 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar6 = (int *)((longlong)plVar8 + 0xc);
            iVar10 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        if (bVar11) {
          param_1 = param_1 + 0x86;
          (**(code **)(*param_1 + 0x20))(param_1);
          iVar10 = 0;
          if (0 < (int)plVar2[1]) {
            lVar7 = 0;
            do {
              (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(*plVar2 + lVar7),1,0);
              iVar10 = iVar10 + 1;
              lVar7 = lVar7 + 8;
            } while (iVar10 < (int)plVar2[1]);
          }
          (**(code **)(*param_1 + 0x30))(param_1,0);
          goto LAB_14210d38c;
        }
      }
      if ((char)local_res8 == '\0') goto LAB_14210d4fa;
    }
LAB_14210d38c:
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
  }
  return param_2;
}



// FUNCTION 14210d530 FUN_14210d530 body=837 status=ok
// SIG undefined FUN_14210d530(void)

undefined1 *
FUN_14210d530(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong local_res8;
  longlong local_28 [2];
  
  if ((param_1[0xb5] != 0) && ((*(byte *)(param_4 + 8) & 0x30) == 0)) {
    plVar2 = *(longlong **)(param_4 + 0x28);
    lVar3 = *(longlong *)(param_4 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    bVar10 = lVar3 == DAT_1469e99e8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if (bVar10) {
      local_res8 = param_1[0xb5];
      if (local_res8 != 0) {
        plVar2 = (longlong *)param_1[0xd6];
        for (plVar8 = plVar2; plVar8 != plVar2 + (int)param_1[0xd7]; plVar8 = plVar8 + 1) {
          if (*plVar8 == local_res8) {
            uVar9 = (longlong)plVar8 - (longlong)plVar2 >> 3;
            goto LAB_14210d613;
          }
        }
        uVar9 = 0xffffffff;
LAB_14210d613:
        plVar2 = param_1 + 0x86;
        iVar7 = (int)uVar9;
        cVar4 = (**(code **)(*plVar2 + 0x58))(plVar2,uVar9 & 0xffffffff);
        if ((cVar4 == '\0') ||
           (cVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,&local_res8), cVar4 == '\0')) {
          iVar5 = (**(code **)(*plVar2 + 0x68))(plVar2,uVar9 & 0xffffffff);
          do {
            iVar7 = iVar7 + -1;
            if (iVar7 < 0) goto LAB_14210d6a5;
            iVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,iVar7);
          } while (iVar5 <= iVar6);
          (**(code **)(*param_1 + 0x270))(param_1,param_1[0xd6] + (longlong)iVar7 * 8,param_4);
        }
        else {
          (**(code **)(*plVar2 + 0x40))(plVar2,local_res8,0);
        }
      }
LAB_14210d6a5:
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
    plVar2 = *(longlong **)(param_4 + 0x28);
    lVar3 = *(longlong *)(param_4 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    bVar10 = lVar3 == DAT_1469e9a18;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if (bVar10) {
      lVar3 = param_1[0xb5];
      if (lVar3 != 0) {
        plVar2 = (longlong *)param_1[0xd6];
        for (plVar8 = plVar2; plVar8 != plVar2 + (int)param_1[0xd7]; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar3) {
            uVar9 = (longlong)plVar8 - (longlong)plVar2 >> 3;
            goto LAB_14210d7c4;
          }
        }
        uVar9 = 0xffffffff;
LAB_14210d7c4:
        plVar2 = param_1 + 0x86;
        local_28[0] = lVar3;
        cVar4 = (**(code **)(*plVar2 + 0x58))(plVar2,uVar9 & 0xffffffff);
        if (cVar4 != '\0') {
          cVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,local_28);
          if (cVar4 == '\0') {
            (**(code **)(*plVar2 + 0x40))(plVar2,local_28[0],1);
            FReply::Handled(param_2);
            return param_2;
          }
          if ((int)uVar9 < (int)param_1[0xd7] + -1) {
            (**(code **)(*param_1 + 0x270))
                      (param_1,param_1[0xd6] + (longlong)((int)uVar9 + 1) * 8,param_4);
          }
        }
      }
      FReply::Handled(param_2);
      return param_2;
    }
  }
  FUN_14210cee0(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14210d880 FUN_14210d880 body=440 status=ok
// SIG undefined FUN_14210d880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14210d880(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  code *local_108;
  undefined1 *puStack_100;
  char local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_100 = local_118;
      local_118[0] = 0;
      local_108 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_108,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x398))
                  (*(longlong **)(param_1 + 0x300),local_f8,param_3,param_4);
        if (local_f8[0] == '\0') {
          FUN_1417c9760(param_1,param_2,param_3,param_4);
          FUN_140438c20(local_f8);
          return param_2;
        }
        FReply::FReply(param_2,local_f8);
        FUN_140438c20(local_f8);
        return param_2;
      }
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



// FUNCTION 14210da40 FUN_14210da40 body=440 status=ok
// SIG undefined FUN_14210da40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14210da40(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  code *local_108;
  undefined1 *puStack_100;
  char local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_100 = local_118;
      local_118[0] = 0;
      local_108 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_108,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3a0))
                  (*(longlong **)(param_1 + 0x300),local_f8,param_3,param_4);
        if (local_f8[0] == '\0') {
          FSlateEditableTextLayout::HandleKeyUp(param_1,param_2,param_3,param_4);
          FUN_140438c20(local_f8);
          return param_2;
        }
        FReply::FReply(param_2,local_f8);
        FUN_140438c20(local_f8);
        return param_2;
      }
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



// FUNCTION 14210dc00 FUN_14210dc00 body=81 status=ok
// SIG undefined FUN_14210dc00(void)

void FUN_14210dc00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142142860(param_1);
    }
  }
  return;
}



// FUNCTION 14210dc60 FUN_14210dc60 body=58 status=ok
// SIG undefined FUN_14210dc60(void)

void FUN_14210dc60(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_2 == 0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), param_3 == lVar1)) {
    (**(code **)(*param_1 + 0x298))(param_1);
  }
  return;
}



// FUNCTION 14210dca0 FUN_14210dca0 body=300 status=ok
// SIG undefined FUN_14210dca0(void)

void FUN_14210dca0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong local_res18 [2];
  undefined1 *local_18;
  longlong *plStack_10;
  
  if (param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x3a0);
    *(undefined1 *)(param_1 + 0x3e9) = 0;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x3a8);
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                (lVar2 + 0x558,0);
      if ((*(int *)(lVar2 + 0x3c8) != 0) && (*(longlong **)(lVar2 + 0x3c0) != (longlong *)0x0)) {
        cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x3c0) + 0x18))();
        if (cVar3 != '\0') {
          if (*(int *)(lVar2 + 0x3c8) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(lVar2 + 0x3c0);
          }
          uVar4 = (**(code **)(*plVar5 + 0x38))();
          *(undefined4 *)(lVar2 + 0x3b8) = uVar4;
        }
      }
      if (*(int *)(lVar2 + 0x3b8) != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x430) + 0x18))(lVar2 + 0x430,lVar1,1);
        (**(code **)(*(longlong *)(lVar2 + 0x430) + 0x30))(lVar2 + 0x430,1);
      }
      lVar1 = *(longlong *)(param_1 + 0x3a8);
      *(undefined8 *)(lVar1 + 0x5c0) = *(undefined8 *)(param_1 + 0x3a0);
      *(undefined4 *)(lVar1 + 0x5c8) = 0;
      FUN_1419bb590();
    }
    plStack_10 = local_res18;
    local_18 = &LAB_14196e240;
    local_res18[0] = param_1;
    FUN_14189a880(DAT_1469f4590,&local_18,0);
  }
  return;
}



// FUNCTION 14210ddd0 FUN_14210ddd0 body=346 status=ok
// SIG undefined FUN_14210ddd0(void)

undefined1 *
FUN_14210ddd0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x440))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 14210df30 FUN_14210df30 body=604 status=ok
// SIG undefined FUN_14210df30(void)

undefined1 * FUN_14210df30(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar7 = *(longlong **)(param_4 + 0x48);
  lVar2 = *(longlong *)(param_4 + 0x38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar2 == DAT_1469e9868;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  plVar7 = (longlong *)0x0;
  if (bVar9) {
    plVar5 = *(longlong **)(param_1 + 0x338);
    plVar6 = plVar5;
    plVar8 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar6 = plVar7, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar3 == (int)plVar5[1];
        if (bVar9) {
          *(int *)(plVar5 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar6 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x330);
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plVar5 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            plVar6 = plVar5;
            if ((int)lVar2 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar5 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    lVar2 = *plVar8;
    plVar5 = (longlong *)(param_1 + 0x308);
    if (param_1 == 0) {
      plVar5 = plVar7;
    }
    puVar4 = (undefined8 *)(**(code **)(lVar2 + 0x38))(plVar8,plVar5);
    (**(code **)(lVar2 + 0x90))(plVar8,*puVar4);
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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



// FUNCTION 14210e190 FUN_14210e190 body=607 status=ok
// SIG undefined FUN_14210e190(void)

undefined1 * FUN_14210e190(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

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
  
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar3 == DAT_1469e9868;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (bVar9) {
    plVar2 = *(longlong **)(param_1 + 0x390);
    plVar7 = plVar2;
    plVar8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar5 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x388);
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar2 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            plVar7 = plVar2;
            if ((int)lVar3 == 1) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
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
    puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,param_1 + -8);
    cVar4 = (**(code **)(*plVar8 + 0x90))(plVar8,*puVar6);
    if (cVar4 == '\0') {
      (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
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



// FUNCTION 14210e3f0 FUN_14210e3f0 body=346 status=ok
// SIG undefined FUN_14210e3f0(void)

undefined1 *
FUN_14210e3f0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 1000))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 14210e550 FUN_14210e550 body=507 status=ok
// SIG undefined FUN_14210e550(void)

undefined1 * FUN_14210e550(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  bVar9 = lVar3 == DAT_1469e9868;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (bVar9) {
    plVar2 = *(longlong **)(param_1 + 0x390);
    plVar7 = plVar2;
    plVar8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar5 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x388);
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
    uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,param_1 + -8);
    cVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar6);
    if (cVar4 != '\0') {
      (**(code **)(*plVar8 + 0x30))(plVar8,3);
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
      if (plVar7 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar2 = plVar7 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_2;
      }
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 != 1) {
        return param_2;
      }
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return param_2;
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
  }
  FUN_14210ef00(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14210e750 FUN_14210e750 body=470 status=ok
// SIG undefined FUN_14210e750(void)

undefined1 * FUN_14210e750(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x620) == '\0') {
LAB_14210e806:
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar8;
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar5;
    }
    if (*(int *)(param_1 + 0x3b8) == 0) goto LAB_14210e806;
    plVar7 = *(longlong **)(param_4 + 0x48);
    lVar2 = *(longlong *)(param_4 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x1;
    if (((lVar2 == DAT_1469e9868) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) &&
       ((*(ushort *)(param_4 + 8) & 3) == 0)) {
      bVar3 = true;
      goto LAB_14210e80e;
    }
  }
  bVar3 = false;
LAB_14210e80e:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  if (bVar3) {
    plVar8 = (longlong *)(param_1 + 0x430);
    iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (0 < iVar6) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      (**(code **)(*plVar8 + 0x30))(plVar8,2);
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
  }
  else {
    FUN_1419b57c0(param_1,param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 14210e930 FUN_14210e930 body=1483 status=ok
// SIG undefined FUN_14210e930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_14210e930(longlong param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  longlong *local_1b8;
  code *local_1a8;
  undefined1 *puStack_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  longlong *local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [16];
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar9 = (longlong *)0x0;
  *(undefined1 *)(param_1 + 0x344) = 0;
  uStack_150 = (undefined1 *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
  if (*(longlong *)(param_1 + 0x300) == 0) {
LAB_14210ea17:
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
  }
  else {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    plVar6 = plVar9;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar12 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar12;
      plVar6 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar12) * 0x18);
    }
    uStack_150 = (undefined1 *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
    if ((*(uint *)(plVar6 + 1) >> 0x1c & 1) != 0) goto LAB_14210ea17;
    puStack_1a0 = local_1c8;
    local_1c8[0] = 0;
    local_1a8 = FUN_1406ddef0;
    local_158 = 0x406ddef0;
    uStack_154 = 1;
    uStack_150 = puStack_1a0;
    lVar7 = FUN_1415d8310(&local_158,&DAT_14622e6dc);
    if (*(char *)(lVar7 + 0x58) != '\0') goto LAB_14210ea17;
    (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3b0))
              (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
  }
  if (*param_2 != '\0') {
    return param_2;
  }
  plVar6 = *(longlong **)(param_1 + 0x338);
  local_1b8 = (longlong *)0x0;
  plVar13 = plVar6;
  plVar14 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar6[1];
    bVar15 = iVar5 == 0;
    if (bVar15) {
      *(int *)(plVar6 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar13 = plVar9, !bVar15) {
      LOCK();
      bVar15 = iVar5 == (int)plVar6[1];
      if (bVar15) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar13 = plVar6;
        plVar14 = (longlong *)0x0;
        if (plVar6 != (longlong *)0x0) {
          plVar14 = *(longlong **)(param_1 + 0x330);
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar13 = plVar6 + 1;
          lVar7 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          plVar13 = plVar6;
          local_1b8 = plVar14;
          if ((int)lVar7 == 1) {
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar15 = iVar5 == 0;
      if (bVar15) {
        *(int *)(plVar6 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  iVar5 = (**(code **)(*(longlong *)(param_1 + 0x308) + 0x70))();
  lVar7 = *(longlong *)(param_4 + 0x38);
  plVar6 = *(longlong **)(param_4 + 0x48);
  local_1c0 = CONCAT44(local_1c0._4_4_,iVar5);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if ((lVar7 == DAT_1469e9868) && (iVar5 != 0)) {
    plVar9 = (longlong *)0x1;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if ((char)plVar9 == '\0') goto LAB_14210ee90;
  lVar7 = *(longlong *)(param_1 + 0x300);
  if (lVar7 == 0) {
LAB_14210ebcc:
    lVar7 = param_1 + 0x308;
    if (param_1 == 0) {
      lVar7 = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x38))(plVar14,lVar7);
    cVar3 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar10);
    if (cVar3 == '\0') {
      if ((int)local_1c0 != 3) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,*puVar10,1);
      *(undefined1 *)(param_1 + 0x344) = 1;
    }
  }
  else {
    uVar8 = UUserListEntry::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    if (plVar9 == (longlong *)0x0) goto LAB_14210ebcc;
    cVar3 = (**(code **)(*plVar9 + 0x20))(plVar9);
    if (cVar3 != '\0') goto LAB_14210ebcc;
  }
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_148);
  plVar9 = (longlong *)puVar10[1];
  uVar8 = *puVar10;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_140 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_198 = uVar8;
  local_190 = plVar9;
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_138);
  plVar6 = (longlong *)puVar10[1];
  local_1c0 = *puVar10;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_130 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar2 = (int *)((longlong)local_130 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  local_188 = local_1c0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_178 = DAT_1469e9868;
  local_170 = DAT_1469e9870;
  local_168 = DAT_1469e9878;
  if (DAT_1469e9878 != 0) {
    LOCK();
    *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
    UNLOCK();
  }
  local_64 = local_64 & 0xffffff00;
  local_118[0] = 1;
  local_110 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x20702;
  local_180 = plVar6;
  uVar8 = (**(code **)(*local_1b8 + 0xa8))(local_1b8,local_128);
  uVar11 = FUN_140466100(local_118,&local_198,&local_178);
  uVar8 = FUN_14185b9a0(uVar11,uVar8,0,0);
  uVar8 = FUN_140693ff0(uVar8,&local_188);
  FUN_140459130(param_2,uVar8);
  FUN_140438c20(local_118);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar6 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_14210ee90:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar13 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14210ef00 FUN_14210ef00 body=1381 status=ok
// SIG undefined FUN_14210ef00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14210ef00(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_1a8 [32];
  char local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar2 = *(longlong **)(param_1 + 0x390);
  plVar10 = plVar2;
  plVar12 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar13 = iVar4 == 0;
    if (bVar13) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, plVar12 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar4 == (int)plVar2[1];
      if (bVar13) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = *(longlong **)(param_1 + 0x388);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 0x430) = 0;
  plVar2 = *(longlong **)(param_4 + 0x48);
  lVar11 = *(longlong *)(param_4 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_188 = lVar11 == DAT_1469e9868;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (local_188 != '\0') {
    iVar4 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
    local_180 = CONCAT44(local_180._4_4_,iVar4);
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar12 + 0x38))(plVar12,param_1 + -8);
      local_188 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar5);
      if ((int)local_180 == 3) {
        if ((*(ushort *)(param_4 + 8) & 0xc) == 0) {
          if ((*(ushort *)(param_4 + 8) & 3) == 0) goto LAB_14210f062;
          (**(code **)(*plVar12 + 0x28))(plVar12,*puVar5);
        }
        else {
          (**(code **)(*plVar12 + 0x18))(plVar12,*puVar5,local_188 == '\0',1);
        }
        *(undefined1 *)(param_1 + 0x430) = 1;
      }
LAB_14210f062:
      if ((local_188 == '\0') && (*(char *)(param_1 + 0x430) == '\0')) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
        (**(code **)(*plVar12 + 0x18))(plVar12,*puVar5,1);
        *(undefined1 *)(param_1 + 0x430) = 1;
      }
      local_178 = (longlong *)(param_1 + 8);
      plVar6 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_178,local_138)
      ;
      plVar2 = (longlong *)plVar6[1];
      lVar11 = *plVar6 + -8;
      if (*plVar6 == 0) {
        lVar11 = 0;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_130 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      local_170 = 0;
      if (lVar11 != 0) {
        local_170 = lVar11 + 8;
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_168 = plVar2;
      plVar7 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_178,local_128)
      ;
      plVar6 = (longlong *)plVar7[1];
      local_180 = *plVar7 + -8;
      if (*plVar7 == 0) {
        local_180 = 0;
      }
      local_178 = plVar6 + 1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)local_178 = (int)*local_178 + 1;
        UNLOCK();
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_120 + 1;
        lVar11 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)local_120 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      local_160 = local_180 + 8;
      if (local_180 == 0) {
        local_160 = 0;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_150 = DAT_1469e9868;
      local_148 = DAT_1469e9870;
      local_140 = DAT_1469e9878;
      if (DAT_1469e9878 != 0) {
        LOCK();
        *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
        UNLOCK();
      }
      local_54 = local_54 & 0xffffff00;
      local_100 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_108[0] = 1;
      local_58 = 0x20702;
      local_158 = plVar6;
      uVar8 = (**(code **)(*plVar12 + 0xa8))(plVar12,local_118);
      uVar9 = FUN_140466100(local_108,&local_170,&local_150);
      uVar8 = FUN_14185b9a0(uVar9,uVar8,0,0);
      uVar8 = FUN_140693ff0(uVar8,&local_160);
      FUN_140438260(param_2,uVar8);
      FUN_140438c20(local_108);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar11 = *local_178;
        *(int *)local_178 = (int)*local_178 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar2 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
        plVar12 = plVar2 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      if (plVar10 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar2 = plVar10 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 != 1) {
        return param_2;
      }
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*plVar10 + 8))(plVar10,1);
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
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14210f470 FUN_14210f470 body=346 status=ok
// SIG undefined FUN_14210f470(void)

undefined1 *
FUN_14210f470(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3b0))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 14210f5d0 FUN_14210f5d0 body=342 status=ok
// SIG undefined FUN_14210f5d0(void)

undefined8 FUN_14210f5d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x620) == '\0') {
LAB_14210f68a:
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar8;
      if (*(int *)(param_1 + 0x3c8) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar5;
    }
    if (*(int *)(param_1 + 0x3b8) == 0) goto LAB_14210f68a;
    plVar7 = *(longlong **)(param_4 + 0x48);
    lVar2 = *(longlong *)(param_4 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)0x1;
    if (((lVar2 == DAT_1469e9880) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) &&
       (((*(ushort *)(param_4 + 8) & 3) == 0 && (cVar4 = FUN_1419b3dd0(param_1), cVar4 == '\0')))) {
      bVar3 = true;
      goto LAB_14210f692;
    }
  }
  bVar3 = false;
LAB_14210f692:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  if (bVar3) {
    plVar8 = (longlong *)(param_1 + 0x430);
    iVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (0 < iVar6) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
      (**(code **)(*plVar8 + 0x30))(plVar8,2);
    }
  }
  FUN_1419b5c60(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 14210f730 FUN_14210f730 body=2174 status=ok
// SIG undefined FUN_14210f730(void)

char * FUN_14210f730(longlong param_1,char *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  float *local_res18;
  longlong local_res20;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  code *local_428;
  undefined1 *puStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined8 uStack_410;
  undefined1 local_408 [8];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  uint local_354;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint local_294;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
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
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  
  plVar14 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  uStack_410 = (undefined1 *)CONCAT44(uStack_410._4_4_,(undefined4)uStack_410);
  if (*(longlong *)(param_1 + 0x300) == 0) {
LAB_14210f819:
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
  }
  else {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    plVar8 = plVar14;
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar12 = iVar7 >> 0x1f & 0xffff;
      uVar6 = iVar7 + uVar12;
      plVar8 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18);
    }
    uStack_410 = (undefined1 *)CONCAT44(uStack_410._4_4_,(undefined4)uStack_410);
    if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) != 0) goto LAB_14210f819;
    puStack_420 = local_res10;
    local_res10[0] = 0;
    local_428 = FUN_1406ddef0;
    local_418 = 0x406ddef0;
    uStack_414 = 1;
    uStack_410 = puStack_420;
    lVar9 = FUN_1415d8310(&local_418,&DAT_14622e6dc);
    if (*(char *)(lVar9 + 0x58) != '\0') goto LAB_14210f819;
    (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3c0))
              (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
  }
  plVar8 = *(longlong **)(param_1 + 0x338);
  plVar13 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar8[1];
    bVar15 = iVar7 == 0;
    if (bVar15) {
      *(int *)(plVar8 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar13 = plVar14, !bVar15) {
      LOCK();
      bVar15 = iVar7 == (int)plVar8[1];
      if (bVar15) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar13 = plVar8;
        plVar14 = (longlong *)0x0;
        if (plVar8 != (longlong *)0x0) {
          plVar14 = *(longlong **)(param_1 + 0x330);
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar13 = plVar8 + 1;
          lVar9 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          plVar13 = plVar8;
          if ((int)lVar9 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar8[1];
      bVar15 = iVar7 == 0;
      if (bVar15) {
        *(int *)(plVar8 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x38))(plVar14,param_1 + 0x308);
  if ((*param_2 != '\0') || (puVar10 == (undefined8 *)0x0)) goto LAB_14210ff65;
  iVar7 = (**(code **)(*(longlong *)(param_1 + 0x308) + 0x70))(param_1 + 0x308);
  plVar8 = *(longlong **)(local_res20 + 0x48);
  lVar9 = *(longlong *)(local_res20 + 0x38);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if (lVar9 == DAT_1469e9868) {
    cVar5 = FUN_141846080(param_1);
    local_res8 = 1;
    if (cVar5 == '\0') goto LAB_14210f979;
  }
  else {
LAB_14210f979:
    local_res8 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((char)local_res8 != '\0') {
    cVar5 = SObjectTableRow<UObject_*>::IsItemSelectable(param_1);
    if (cVar5 != '\0') {
      local_438 = *local_res18 * local_res18[7];
      local_430 = local_res18[1] * local_res18[9];
      local_42c = local_res18[1] * local_res18[10];
      local_434 = *local_res18 * local_res18[8];
      local_440 = local_res18[0xb];
      local_43c = local_res18[0xc];
      cVar5 = FSlateRotatedRect::IsUnderLocation(&local_440,local_res20 + 0x18);
      if (cVar5 != '\0') {
        if (iVar7 == 2) {
          (**(code **)(*plVar14 + 0x20))(plVar14);
          (**(code **)(*plVar14 + 0x30))(plVar14,2);
          local_354 = local_354 & 0xffffff00;
          local_408[0] = 1;
          local_400 = 0;
          local_3d8 = 0;
          uStack_3d0 = 0;
          local_3c8 = 0;
          uStack_3c0 = 0;
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          local_398 = 0;
          uStack_390 = 0;
          local_378 = 0;
          uStack_370 = 0;
          local_368 = 0;
          uStack_360 = 0;
          local_3f8 = 0;
          local_3e8 = 0;
          local_3e0 = 0;
          local_388 = 0;
          local_380 = 0;
          local_358 = 0x20702;
          FUN_140439160(param_2,local_408);
          FUN_140438c20(local_408);
        }
        else if (iVar7 == 3) {
          iVar7 = (**(code **)(*plVar14 + 0x60))(plVar14);
          if (1 < iVar7) {
            cVar5 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar10);
            if (cVar5 != '\0') {
              (**(code **)(*plVar14 + 0x20))(plVar14);
              (**(code **)(*plVar14 + 0x18))(plVar14,*puVar10,1);
              (**(code **)(*plVar14 + 0x30))(plVar14,2);
              local_294 = local_294 & 0xffffff00;
              local_348[0] = 1;
              local_340 = 0;
              local_318 = 0;
              uStack_310 = 0;
              local_308 = 0;
              uStack_300 = 0;
              local_2f8 = 0;
              uStack_2f0 = 0;
              local_2e8 = 0;
              uStack_2e0 = 0;
              local_2d8 = 0;
              uStack_2d0 = 0;
              local_2b8 = 0;
              uStack_2b0 = 0;
              local_2a8 = 0;
              uStack_2a0 = 0;
              local_338 = 0;
              local_328 = 0;
              local_320 = 0;
              local_2c8 = 0;
              local_2c0 = 0;
              local_298 = 0x20702;
              FUN_140439160(param_2,local_348);
              FUN_140438c20(local_348);
            }
          }
        }
      }
    }
    cVar5 = (**(code **)(*plVar14 + 0x88))(plVar14,*puVar10);
    if (cVar5 != '\0') {
      local_1d4 = local_1d4 & 0xffffff00;
      local_288[0] = 1;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_280 = 0;
      local_278 = 0;
      local_268 = 0;
      local_260 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1d8 = 0x20702;
      FUN_140439160(param_2,local_288);
      FUN_140438c20(local_288);
    }
    if (*(char *)(param_1 + 0x344) != '\0') {
      local_114 = local_114 & 0xffffff00;
      local_1c8[0] = 1;
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
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_148 = 0;
      local_140 = 0;
      local_118 = 0x20702;
      FUN_140439160(param_2,local_1c8);
      FUN_140438c20(local_1c8);
      (**(code **)(*plVar14 + 0x30))(plVar14,2);
    }
    uVar11 = FUN_1406a1ac0(param_2);
    FUN_140459130(param_2,uVar11);
    goto LAB_14210ff65;
  }
  bVar15 = false;
  if (iVar7 == 0) {
    plVar8 = (longlong *)CONCAT44(uStackX_c,local_res8);
LAB_14210fd93:
    bVar4 = false;
  }
  else {
    bVar15 = true;
    plVar8 = *(longlong **)(local_res20 + 0x48);
    lVar9 = *(longlong *)(local_res20 + 0x38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar9 != DAT_1469e9880) goto LAB_14210fd93;
    bVar4 = true;
  }
  if ((bVar15) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (bVar4) {
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar13 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    cVar5 = FUN_1419b3dd0(plVar14 + -0x86);
    if (cVar5 == '\0') {
      cVar5 = SObjectTableRow<UObject_*>::IsItemSelectable(param_1);
      if (cVar5 != '\0') {
        cVar5 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar10);
        if (cVar5 == '\0') {
          (**(code **)(*plVar14 + 0x20))(plVar14);
          (**(code **)(*plVar14 + 0x18))(plVar14,*puVar10,1);
          (**(code **)(*plVar14 + 0x30))(plVar14,2);
        }
      }
      (**(code **)(*plVar14 + 0x80))(plVar14,*puVar10,local_res20);
      local_54 = local_54 & 0xffffff00;
      local_108[0] = 1;
      local_100 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0x20702;
      FUN_140439160(param_2,local_108);
      FUN_140438c20(local_108);
    }
    if (plVar13 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar14 = plVar13 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_14210ff65:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14210ffb0 FUN_14210ffb0 body=2241 status=ok
// SIG undefined FUN_14210ffb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14210ffb0(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_518 [32];
  char local_4f8;
  longlong *local_4f0;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float *local_4d0;
  undefined1 local_4c8 [8];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  uint local_414;
  undefined1 local_408 [8];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  uint local_354;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  uint local_294;
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  uint local_1d4;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  plVar10 = *(longlong **)(param_1 + 0x390);
  plVar9 = plVar10;
  plVar11 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar10[1];
    bVar12 = iVar6 == 0;
    if (bVar12) {
      *(int *)(plVar10 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar9 = (longlong *)0x0, plVar11 = (longlong *)0x0, !bVar12) {
      LOCK();
      bVar12 = iVar6 == (int)plVar10[1];
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar10;
        if ((plVar10 != (longlong *)0x0) &&
           (plVar11 = *(longlong **)(param_1 + 0x388), plVar11 != (longlong *)0x0)) {
          local_4f0 = plVar11 + -0x86;
          goto LAB_14211002f;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(plVar10 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  local_4f0 = (longlong *)0x0;
  plVar10 = plVar9;
LAB_14211002f:
  local_4d0 = param_3;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar10 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    plVar9 = plVar10 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar9 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_4f8 = lVar3 == DAT_1469e9868;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (local_4f8 != '\0') {
    local_414 = local_414 & 0xffffff00;
    local_4c8[0] = 0;
    local_4c0 = 0;
    local_4b8 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_468 = 0;
    uStack_460 = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_448 = 0;
    local_440 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_418 = 0x20702;
    uVar7 = FUN_1406a1ac0(local_4c8);
    FUN_140438260(local_108,uVar7);
    FUN_140438c20(local_4c8);
    if (*(char *)(param_1 + 0x430) != '\0') {
      local_354 = local_354 & 0xffffff00;
      local_408[0] = 1;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_400 = 0;
      local_3f8 = 0;
      local_3e8 = 0;
      local_3e0 = 0;
      local_388 = 0;
      local_380 = 0;
      local_358 = 0x20702;
      uVar7 = FUN_1406a1ac0(local_408);
      FUN_140459130(local_108,uVar7);
      FUN_140438c20(local_408);
    }
    local_4e0 = *local_4d0 * local_4d0[7];
    local_4d8 = local_4d0[1] * local_4d0[9];
    local_4d4 = local_4d0[1] * local_4d0[10];
    local_4dc = *local_4d0 * local_4d0[8];
    local_4e8 = local_4d0[0xb];
    local_4e4 = local_4d0[0xc];
    cVar4 = FSlateRotatedRect::IsUnderLocation(&local_4e8,param_4 + 0x18);
    cVar5 = FUN_141846080(param_1);
    if (cVar5 != '\0') {
      if (cVar4 != '\0') {
        iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
        if (iVar6 == 2) {
          if (*(char *)(param_1 + 0x430) == '\0') {
            (**(code **)(*plVar11 + 0x20))(plVar11);
            (**(code **)(*plVar11 + 0x30))(plVar11,2);
          }
          local_1d4 = local_1d4 & 0xffffff00;
          local_288[0] = 1;
          local_280 = 0;
          local_278 = 0;
          local_268 = 0;
          local_260 = 0;
          local_258 = 0;
          uStack_250 = 0;
          local_248 = 0;
          uStack_240 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_208 = 0;
          local_200 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1d8 = 0x20702;
          uVar7 = FUN_1406a1ac0(local_288);
          FUN_140459130(local_108,uVar7);
          FUN_140438c20(local_288);
        }
        else if ((((iVar6 == 3) && (*(char *)(param_1 + 0x430) == '\0')) &&
                 ((*(ushort *)(param_4 + 8) & 0xc) == 0)) && ((*(ushort *)(param_4 + 8) & 3) == 0))
        {
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
          cVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
          if ((cVar4 != '\0') && (iVar6 = (**(code **)(*plVar11 + 0x60))(plVar11), 1 < iVar6)) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
            (**(code **)(*plVar11 + 0x18))(plVar11,*puVar8,1);
            (**(code **)(*plVar11 + 0x30))(plVar11,2);
            local_294 = local_294 & 0xffffff00;
            local_348[0] = 1;
            local_340 = 0;
            local_318 = 0;
            uStack_310 = 0;
            local_308 = 0;
            uStack_300 = 0;
            local_2f8 = 0;
            uStack_2f0 = 0;
            local_2e8 = 0;
            uStack_2e0 = 0;
            local_2d8 = 0;
            uStack_2d0 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_338 = 0;
            local_328 = 0;
            local_320 = 0;
            local_2c8 = 0;
            local_2c0 = 0;
            local_298 = 0x20702;
            uVar7 = FUN_1406a1ac0(local_348);
            FUN_140459130(local_108,uVar7);
            FUN_140438c20(local_348);
          }
        }
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
      if ((puVar8 != (undefined8 *)0x0) &&
         (cVar4 = (**(code **)(*plVar11 + 0x88))(plVar11,*puVar8), cVar4 != '\0')) {
        local_114 = local_114 & 0xffffff00;
        local_1c8[0] = 1;
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
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_148 = 0;
        local_140 = 0;
        local_118 = 0x20702;
        uVar7 = FUN_1406a1ac0(local_1c8);
        FUN_140459130(local_108,uVar7);
        FUN_140438c20(local_1c8);
      }
      if (*(char *)(param_1 + 0x430) != '\0') {
        (**(code **)(*plVar11 + 0x30))(plVar11,2);
      }
      FReply::FReply(param_2,local_108);
      FUN_140438c20(local_108);
      goto LAB_142110804;
    }
    FUN_140438c20(local_108);
    goto LAB_14211060d;
  }
  plVar9 = *(longlong **)(param_4 + 0x48);
  lVar3 = *(longlong *)(param_4 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (lVar3 == DAT_1469e9880) {
    cVar4 = FUN_1419b3dd0(local_4f0);
    local_4f8 = '\x01';
    if (cVar4 != '\0') goto LAB_142110745;
  }
  else {
LAB_142110745:
    local_4f8 = '\0';
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if ((local_4f8 != '\0') &&
     (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8), iVar6 - 1U < 3)) {
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + -8);
    cVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar8);
    if (cVar4 == '\0') {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      (**(code **)(*plVar11 + 0x18))(plVar11,*puVar8,1);
      (**(code **)(*plVar11 + 0x30))(plVar11,2);
    }
    (**(code **)(*plVar11 + 0x80))(plVar11,*puVar8,param_4);
    FReply::Handled(param_2);
LAB_142110804:
    if (plVar10 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 != 1) {
      return param_2;
    }
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return param_2;
    }
    (**(code **)(*plVar10 + 8))(plVar10,1);
    return param_2;
  }
LAB_14211060d:
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
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    plVar11 = plVar10 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_2;
}



// FUNCTION 142110880 FUN_142110880 body=346 status=ok
// SIG undefined FUN_142110880(void)

undefined1 *
FUN_142110880(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3c0))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 1421109e0 FUN_1421109e0 body=193 status=ok
// SIG undefined FUN_1421109e0(void)

void FUN_1421109e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
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
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x450))
                  (*(longlong **)(param_1 + 0x300),param_2);
      }
    }
  }
  return;
}



// FUNCTION 142110ab0 FUN_142110ab0 body=269 status=ok
// SIG undefined FUN_142110ab0(void)

void FUN_142110ab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  SWidget::OnMouseEnter();
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar4 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar4 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3d0))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3);
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x300) != 0) && (*(int *)(param_1 + 0x318) != 0)) &&
     (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))();
    if (cVar2 != '\0') {
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
                (param_1 + 0x310,*(undefined8 *)(param_1 + 0x300));
    }
  }
  return;
}



// FUNCTION 142110bc0 FUN_142110bc0 body=209 status=ok
// SIG undefined FUN_142110bc0(void)

void FUN_142110bc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  SWidget::OnMouseEnter();
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
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3d0))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142110ca0 FUN_142110ca0 body=253 status=ok
// SIG undefined FUN_142110ca0(void)

void FUN_142110ca0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  SWidget::OnMouseLeave();
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar4 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar4 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3d8))
                  (*(longlong **)(param_1 + 0x300),param_2);
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x300) != 0) && (*(int *)(param_1 + 0x328) != 0)) &&
     (*(longlong **)(param_1 + 800) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))();
    if (cVar2 != '\0') {
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
                (param_1 + 800,*(undefined8 *)(param_1 + 0x300));
    }
  }
  return;
}



// FUNCTION 142110da0 FUN_142110da0 body=193 status=ok
// SIG undefined FUN_142110da0(void)

void FUN_142110da0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  SWidget::OnMouseLeave();
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
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3d8))
                  (*(longlong **)(param_1 + 0x300),param_2);
      }
    }
  }
  return;
}



// FUNCTION 142110e70 FUN_142110e70 body=346 status=ok
// SIG undefined FUN_142110e70(void)

undefined1 *
FUN_142110e70(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3c8))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 142110fd0 FUN_142110fd0 body=346 status=ok
// SIG undefined FUN_142110fd0(void)

undefined1 *
FUN_142110fd0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3e0))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 142111130 FUN_142111130 body=290 status=ok
// SIG undefined FUN_142111130(void)

undefined8 FUN_142111130(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)param_1[0xb7];
  if (((plVar1 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x622) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x621) != '\0' || (*(char *)(param_4 + 0x19) != '\x01')))) {
    iVar3 = (**(code **)(*param_1 + 0x230))();
    if (param_1[0xb5] == 0) {
      iVar4 = 0;
    }
    else {
      plVar2 = (longlong *)*plVar1;
      for (plVar5 = plVar2; plVar5 != plVar2 + (int)plVar1[1]; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_1[0xb5]) {
          iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
          goto LAB_1421111c9;
        }
      }
      iVar4 = -1;
    }
LAB_1421111c9:
    if (*(char *)(param_4 + 0x18) == '\x02') {
      iVar3 = -iVar3;
    }
    else if (*(char *)(param_4 + 0x18) != '\x03') goto LAB_142111223;
    iVar4 = iVar4 + iVar3;
    if ((-1 < iVar4) && (iVar4 < (int)plVar1[1])) {
      (**(code **)(*param_1 + 0x270))(param_1,*plVar1 + (longlong)iVar4 * 8,param_4);
      local_18 = 0;
      uStack_10 = 0;
      FUN_1418f84e0(param_2,&local_18);
      return param_2;
    }
  }
LAB_142111223:
  FUN_1417ca320(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 142111260 FUN_142111260 body=552 status=ok
// SIG undefined FUN_142111260(void)

undefined8 FUN_142111260(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  
  plVar7 = (longlong *)param_1[0xb7];
  uVar4 = 0;
  iVar6 = 0;
  if (((plVar7 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x622) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x621) != '\0' || (*(char *)(param_4 + 0x19) != '\x01')))) {
    iVar2 = (**(code **)(*param_1 + 0x230))();
    if (param_1[0xb5] != 0) {
      plVar1 = (longlong *)*plVar7;
      for (plVar3 = plVar1; plVar3 != plVar1 + (int)plVar7[1]; plVar3 = plVar3 + 1) {
        if (*plVar3 == param_1[0xb5]) {
          uVar4 = (longlong)plVar3 - (longlong)plVar1 >> 3;
          goto LAB_142111303;
        }
      }
      uVar4 = 0xffffffff;
    }
LAB_142111303:
    uVar5 = (int)uVar4 >> 0x1f;
    if (*(char *)(param_4 + 0x18) == '\0') {
      if (((char)param_1[0xc5] != '\0') ||
         (0 < (int)((longlong)((ulonglong)uVar5 << 0x20 | uVar4 & 0xffffffff) % (longlong)iVar2))) {
        iVar2 = -1;
        goto LAB_14211134d;
      }
    }
    else if ((*(char *)(param_4 + 0x18) == '\x01') &&
            (((char)param_1[0xc5] != '\0' ||
             ((int)((longlong)((ulonglong)uVar5 << 0x20 | uVar4 & 0xffffffff) % (longlong)iVar2) <
              iVar2 + -1)))) {
      iVar2 = 1;
LAB_14211134d:
      iVar2 = iVar2 + (int)uVar4;
      if ((-1 < iVar2) && (iVar2 < (int)plVar7[1])) {
        (**(code **)(*param_1 + 0x270))(param_1,*plVar7 + (longlong)iVar2 * 8,param_4);
        local_28 = 0;
        uStack_20 = 0;
        FUN_1418f84e0(param_2,&local_28);
        return param_2;
      }
    }
    plVar7 = (longlong *)param_1[0xb7];
  }
  if (((plVar7 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x622) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x621) != '\0' || (*(char *)(param_4 + 0x19) != '\x01')))) {
    iVar2 = (**(code **)(*param_1 + 0x230))(param_1);
    if (param_1[0xb5] != 0) {
      plVar1 = (longlong *)*plVar7;
      for (plVar3 = plVar1; plVar3 != plVar1 + (int)plVar7[1]; plVar3 = plVar3 + 1) {
        if (*plVar3 == param_1[0xb5]) {
          iVar6 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
          goto LAB_1421113fb;
        }
      }
      iVar6 = -1;
    }
LAB_1421113fb:
    if (*(char *)(param_4 + 0x18) == '\x02') {
      iVar2 = -iVar2;
    }
    else if (*(char *)(param_4 + 0x18) != '\x03') goto LAB_142111455;
    iVar6 = iVar6 + iVar2;
    if ((-1 < iVar6) && (iVar6 < (int)plVar7[1])) {
      (**(code **)(*param_1 + 0x270))(param_1,*plVar7 + (longlong)iVar6 * 8,param_4);
      local_28 = 0;
      uStack_20 = 0;
      FUN_1418f84e0(param_2,&local_28);
      return param_2;
    }
  }
LAB_142111455:
  FUN_1417ca320(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 142111490 FUN_142111490 body=411 status=ok
// SIG undefined FUN_142111490(void)

undefined8 *
FUN_142111490(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  code *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x348))();
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x300) + 0x378))(*(longlong **)(param_1 + 0x300),param_2)
    ;
    return param_2;
  }
  FUN_1417ca320(param_1,&local_58,param_3,param_4);
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      puStack_60 = local_res8;
      local_res8[0] = 0;
      local_68 = FUN_1406ddef0;
      lVar4 = FUN_1415d8310(&local_68,&DAT_14622e6dc);
      if (*(char *)(lVar4 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x380))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4,&local_58);
        goto LAB_142111603;
      }
    }
  }
  *param_2 = local_58;
  param_2[1] = local_50;
  param_2[2] = local_48;
  param_2[3] = local_40;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_2 + 4,local_38);
  *(undefined1 *)(param_2 + 6) = local_28;
LAB_142111603:
  FUN_14188bb50(&local_58);
  return param_2;
}



// FUNCTION 142111630 FUN_142111630 body=490 status=ok
// SIG undefined FUN_142111630(void)

undefined4 FUN_142111630(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 uVar7;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 800) < 1) {
    uVar6 = uVar5;
    if (0 < *(int *)(param_1 + 0x310)) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x308);
        if (*(longlong *)(param_1 + 0x308) == 0) {
          lVar3 = param_1 + 0x218;
        }
        lVar3 = lVar3 + uVar6;
        if ((((*(longlong **)(lVar3 + 0x30) != (longlong *)0x0) &&
             (**(longlong **)(lVar3 + 0x30) != 0)) && (0 < *(int *)(lVar3 + 8))) &&
           (0 < *(int *)(lVar3 + 0x18))) {
          if (*(longlong **)(lVar3 + 0x40) == (longlong *)0x0) {
            iVar1 = 0;
            uVar7 = 0;
          }
          else {
            iVar1 = (**(code **)(**(longlong **)(lVar3 + 0x40) + 0x10))();
            if (iVar1 < 1) goto LAB_1421117de;
            uVar7 = *(undefined8 *)(lVar3 + 0x40);
          }
          FSlateDrawElement::MakeCustomVerts
                    (in_stack_00000028,in_stack_00000030,lVar3 + 0x30,lVar3,lVar3 + 0x10,uVar7,0,
                     iVar1,0);
        }
LAB_1421117de:
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 + 0x50;
      } while ((int)uVar4 < *(int *)(param_1 + 0x310));
    }
  }
  else {
    uVar6 = uVar5;
    do {
      lVar3 = *(longlong *)(param_1 + 0x318);
      lVar2 = *(longlong *)(param_1 + 0x308);
      if (*(longlong *)(param_1 + 0x308) == 0) {
        lVar2 = param_1 + 0x218;
      }
      lVar2 = lVar2 + (longlong)*(int *)(lVar3 + uVar6) * 0x50;
      if (((*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) && (**(longlong **)(lVar2 + 0x30) != 0)
          ) && ((0 < *(int *)(lVar2 + 8) &&
                ((0 < *(int *)(lVar2 + 0x18) && (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0))))
               )) {
        (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x10))();
        FSlateDrawElement::MakeCustomVerts
                  (in_stack_00000028,in_stack_00000030,lVar2 + 0x30,lVar2,lVar2 + 0x10,
                   *(undefined8 *)(lVar2 + 0x40),*(undefined4 *)(lVar3 + 4 + uVar6),
                   *(undefined4 *)(lVar3 + 8 + uVar6),0);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0xc;
    } while ((int)uVar4 < *(int *)(param_1 + 800));
  }
  return in_stack_00000030;
}



// FUNCTION 142111820 FUN_142111820 body=324 status=ok
// SIG undefined FUN_142111820(void)

ulonglong FUN_142111820(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *puStack_30;
  
  uVar2 = FUN_14184ebd0();
  uVar5 = (ulonglong)uVar2;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      puStack_30 = local_res8;
      local_res8[0] = 0;
      local_38 = FUN_1406ddef0;
      lVar4 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
      if (*(char *)(lVar4 + 0x58) == '\0') {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x328))
                          (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4,param_5,uVar2,
                           param_7,param_8);
      }
    }
  }
  return uVar5;
}



// FUNCTION 142111970 FUN_142111970 body=1244 status=ok
// SIG undefined FUN_142111970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142111970(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,float *param_7,undefined1 param_8)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  float *local_210;
  float *local_208;
  undefined1 local_200;
  byte local_1f8 [8];
  float *local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 local_18c;
  byte local_184;
  undefined1 local_178 [8];
  longlong *local_170;
  longlong *local_130;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  bVar17 = (char)param_1[0x7f] != '\0';
  local_1f0 = param_7;
  if ((bool)*(char *)((longlong)param_1 + 0x3f9) != bVar17) {
    *(bool *)((longlong)param_1 + 0x3f9) = bVar17;
    local_1d8 = param_1[0x7d];
    local_1d0 = param_1[0x7e];
    if (local_1d0 != 0) {
      LOCK();
      *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
      UNLOCK();
    }
    FUN_14185a760(param_1[0x83],&local_1d8);
  }
  if ((*(char *)((longlong)param_1 + 0x3f9) != '\0') && (lVar9 = param_1[0x7d], lVar9 != 0)) {
    if ((*(int *)(lVar9 + 0xc0) == 0) ||
       ((*(longlong **)(lVar9 + 0xb8) == (longlong *)0x0 ||
        (cVar8 = (**(code **)(**(longlong **)(lVar9 + 0xb8) + 0x18))(), cVar8 == '\0')))) {
      local_1f8[0] = *(byte *)(lVar9 + 0xb0);
    }
    else {
      if (*(int *)(lVar9 + 0xc0) == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)(lVar9 + 0xb8);
      }
      (**(code **)(*plVar13 + 0x38))(plVar13,local_1f8);
      *(byte *)(lVar9 + 0xb0) = local_1f8[0];
    }
    if ((local_1f8[0] & 0x19) != 0) {
      lVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_1c8);
      plVar13 = *(longlong **)(lVar9 + 8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_1c0 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)local_1c0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3);
      plVar4 = *(longlong **)(param_1[0x86] + 0x20);
      fVar18 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
      if ((1.0 <= fVar18) && (fVar18 = (float)(**(code **)(*plVar4 + 0x2b8))(plVar4), 1.0 <= fVar18)
         ) {
        pfVar14 = (float *)(param_1 + 0x6f);
        cVar8 = (char)param_1[0x71];
        if (cVar8 != '\0') {
          if (cVar8 == '\x01') {
            pfVar14 = (float *)param_1[0x72];
          }
          else if (cVar8 == '\x03') {
            pfVar14 = local_1f0 + 8;
          }
          else {
            pfVar14 = local_1f0 + 4;
          }
        }
        fVar5 = *pfVar14;
        fVar6 = pfVar14[1];
        fVar7 = pfVar14[2];
        fVar19 = pfVar14[3];
        pfVar10 = (float *)TAttribute<FLinearColor>::Get(param_1 + 0x51);
        fVar18 = *local_1f0;
        pfVar14 = local_1f0 + 1;
        pfVar2 = local_1f0 + 2;
        fVar19 = local_1f0[3] * pfVar10[3] * fVar19;
        local_1f0 = *(float **)(param_1[0x86] + 0x18);
        lVar9 = *(longlong *)(param_1[0x86] + 0x28);
        local_1e8 = *pfVar10 * fVar18 * fVar5 * fVar19;
        local_1e0 = *pfVar2 * pfVar10[2] * fVar7 * fVar19;
        local_1e4 = *pfVar14 * pfVar10[1] * fVar6 * fVar19;
        local_1dc = fVar19 * fVar19;
        if (lVar9 != 0) {
          FUN_1425a28b0(lVar9,param_1[0x98],plVar4);
        }
        local_1b8 = param_3[3];
        local_1b4 = param_3[4];
        local_1b0 = param_3[2];
        local_184 = (*(byte *)(param_3 + 0xd) & 1) * '\x02' | local_184 & 0xfc;
        local_1a4 = *param_3;
        local_210 = &local_1e8;
        local_1a0 = param_3[1];
        local_19c = param_3[7];
        uStack_198 = param_3[8];
        uStack_194 = param_3[9];
        uStack_190 = param_3[10];
        local_18c = *(undefined8 *)(param_3 + 0xb);
        local_218 = CONCAT71(local_218._1_7_,6);
        local_1ac = 0;
        FSlateDrawElement::MakeBox(param_5,param_6,&local_1b8,param_1 + 0x6b);
        if (param_1[0x99] != 0) {
          local_218 = 0;
          FUN_141853310(param_1[0x99],*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                        param_6);
        }
        puVar15 = *(undefined8 **)(local_1f0 + 2);
        puVar16 = puVar15 + (longlong)(int)local_1f0[4] * 2;
        for (; puVar15 != puVar16; puVar15 = puVar15 + 2) {
          uVar11 = FUN_1418092c0(*puVar15,local_178,param_2);
          FUN_141852c20(param_5,uVar11);
          if (local_130 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_130 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (local_130 != (longlong *)0x0)) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
          if (local_170 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_170 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (local_170 != (longlong *)0x0)) {
              (**(code **)(*local_170 + 8))(local_170,1);
            }
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar13 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      return (ulonglong)param_6;
    }
  }
  local_200 = param_8;
  local_208 = param_7;
  local_210 = (float *)CONCAT44(local_210._4_4_,param_6);
  local_218 = param_5;
  uVar12 = FUN_14184ebd0(param_1,param_2,param_3,param_4);
  return uVar12;
}



// FUNCTION 142111e50 FUN_142111e50 body=346 status=ok
// SIG undefined FUN_142111e50(void)

undefined1 *
FUN_142111e50(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x390))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 142111fb0 FUN_142111fb0 body=346 status=ok
// SIG undefined FUN_142111fb0(void)

undefined1 *
FUN_142111fb0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x3b8))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 142112110 FUN_142112110 body=317 status=ok
// SIG undefined FUN_142112110(void)

void FUN_142112110(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  FUN_1423937b0();
  if ((char)param_1[0xe5] != '\x01') {
    if ((*(char *)((longlong)param_1 + 0x764) != '\0') &&
       (*(char *)((longlong)param_1 + 0x81c) == '\0')) {
      lVar5 = param_1[0x24];
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      cVar4 = UWorld::IsGameWorld(lVar5);
      if (cVar4 != '\0') {
        (**(code **)(*DAT_146b17150 + 0x358))(DAT_146b17150,&local_28);
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        FUN_142129550(param_1,&local_18);
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
    if ((param_1[0x108] == 0) && (DAT_146ab62f7 == '\0')) {
      lVar6 = operator_new(0x38);
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar5 = FUN_1420cf240(lVar6,*(undefined1 *)((longlong)param_1 + 0x766),1);
      }
      param_1[0x108] = lVar5;
    }
  }
  param_1[0xf8] = 0;
                    /* WARNING: Could not recover jumptable at 0x000142112246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x928))(param_1);
  return;
}



// FUNCTION 142112250 OnSelectionChangedInternal body=39 status=ok
// SIG undefined OnSelectionChangedInternal(void)

void UListView::OnSelectionChangedInternal(longlong param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = param_2 != 0;
  local_18 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xf0,&local_18);
  return;
}



// FUNCTION 142112280 FUN_142112280 body=122 status=ok
// SIG undefined FUN_142112280(void)

void FUN_142112280(longlong *param_1,longlong param_2,int param_3)

{
  if (param_3 != 1) {
    if (param_2 != param_1[0x74]) {
      FSlateApplication::PlaySound(DAT_1469f4590,param_1 + 0x6e,0);
      param_1[0x74] = param_2;
      TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
                (param_1 + 0x72,param_2,param_3);
    }
    (**(code **)(*param_1 + 0x210))(param_1,0,1,0);
  }
  return;
}



// FUNCTION 142112300 FUN_142112300 body=94 status=ok
// SIG undefined FUN_142112300(void)

void FUN_142112300(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_18;
  longlong local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 0x11c);
  uVar2 = *(undefined4 *)(param_1 + 0x120);
  uVar3 = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x128);
  *(undefined1 *)(param_2 + 0x49) = *(undefined1 *)(param_1 + 0x129);
  local_18 = *(longlong *)(param_1 + 0x1c0);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x1c8);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e33c0(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112360 FUN_142112360 body=94 status=ok
// SIG undefined FUN_142112360(void)

void FUN_142112360(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_18;
  longlong local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 0x144);
  uVar2 = *(undefined4 *)(param_1 + 0x148);
  uVar3 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x118);
  *(undefined1 *)(param_2 + 0x49) = *(undefined1 *)(param_1 + 0x119);
  local_18 = *(longlong *)(param_1 + 0x250);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 600);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e35f0(param_2,&local_18);
  }
  return;
}



// FUNCTION 1421123c0 FUN_1421123c0 body=63 status=ok
// SIG undefined FUN_1421123c0(void)

void FUN_1421123c0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x410);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x418);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e3850(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112400 FUN_142112400 body=63 status=ok
// SIG undefined FUN_142112400(void)

void FUN_142112400(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x118);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x120);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e3ab0(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112440 FUN_142112440 body=309 status=ok
// SIG undefined FUN_142112440(void)

void FUN_142112440(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 local_res8 [2];
  undefined8 local_48;
  longlong *local_40;
  code *local_38;
  undefined4 *puStack_30;
  undefined8 local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x758) != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_48 = DAT_1469eb218;
      local_40 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar8 = &local_48;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      puStack_30 = local_res8;
      local_res8[0] = 0;
      local_38 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_18 = 0x420e6680;
      uStack_14 = 1;
      uStack_10 = puStack_30;
      FUN_14213eb80(*(longlong *)(param_2 + 0x30),&local_28,&local_18);
      puVar8 = &local_28;
      bVar6 = true;
      bVar5 = false;
    }
    FUN_141956440(*(undefined8 *)(param_1 + 0x758),puVar8);
    plVar3 = local_40;
    if ((bVar5) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
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
    if ((bVar6) && (local_20 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  return;
}



// FUNCTION 142112580 FUN_142112580 body=63 status=ok
// SIG undefined FUN_142112580(void)

void FUN_142112580(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x138);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x140);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e3c50(param_2,&local_18);
  }
  return;
}



// FUNCTION 1421125c0 FUN_1421125c0 body=63 status=ok
// SIG undefined FUN_1421125c0(void)

void FUN_1421125c0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x118);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x120);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e3f50(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112600 FUN_142112600 body=309 status=ok
// SIG undefined FUN_142112600(void)

void FUN_142112600(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 local_res8 [2];
  undefined8 local_48;
  longlong *local_40;
  code *local_38;
  undefined4 *puStack_30;
  undefined8 local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_48 = DAT_1469eb218;
      local_40 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar8 = &local_48;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      puStack_30 = local_res8;
      local_res8[0] = 0;
      local_38 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_18 = 0x420e6680;
      uStack_14 = 1;
      uStack_10 = puStack_30;
      FUN_14213eb80(*(longlong *)(param_2 + 0x30),&local_28,&local_18);
      puVar8 = &local_28;
      bVar6 = true;
      bVar5 = false;
    }
    FUN_1419a0cc0(*(undefined8 *)(param_1 + 0x120),puVar8);
    plVar3 = local_40;
    if ((bVar5) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
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
    if ((bVar6) && (local_20 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  return;
}



// FUNCTION 142112740 FUN_142112740 body=360 status=ok
// SIG undefined FUN_142112740(void)

void FUN_142112740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 local_res8 [2];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  code *local_38;
  undefined4 *puStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_58 = DAT_1469eb218;
      local_50 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar8 = &local_58;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      puStack_30 = local_res8;
      local_res8[0] = 0;
      local_38 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_18 = 0x420e6680;
      uStack_14 = 1;
      uStack_10 = puStack_30;
      FUN_14213eb80(*(longlong *)(param_2 + 0x30),&local_48,&local_18);
      puVar8 = &local_48;
      bVar5 = true;
      bVar4 = false;
    }
    local_28 = *puVar8;
    local_20 = puVar8[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_141956620(*(undefined8 *)(param_1 + 0x148),&local_28);
    plVar7 = local_50;
    if ((bVar4) && (local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar7 = local_40;
    if ((bVar5) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421128b0 FUN_1421128b0 body=178 status=ok
// SIG undefined FUN_1421128b0(void)

void FUN_1421128b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    puStack_10 = local_res8;
    local_res8[0] = 0;
    local_18 = 0x420e6680;
    uStack_14 = 1;
    FUN_14213eb80(*(longlong *)(param_2 + 0x30),local_28,&local_18);
    SBox::SetContent(*(undefined8 *)(param_1 + 0x118),local_28);
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



// FUNCTION 142112970 FUN_142112970 body=67 status=ok
// SIG undefined FUN_142112970(void)

void FUN_142112970(longlong param_1,longlong *param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x118);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x120);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_2 + 0x288))(param_2,&local_18);
  }
  return;
}



// FUNCTION 1421129c0 FUN_1421129c0 body=328 status=ok
// SIG undefined FUN_1421129c0(void)

void FUN_1421129c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 local_res8 [2];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  code *local_28;
  undefined4 *puStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_48 = DAT_1469eb218;
      local_40 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar8 = &local_48;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_18 = 0x420e6680;
      uStack_14 = 1;
      uStack_10 = puStack_20;
      FUN_14213eb80(*(longlong *)(param_2 + 0x30),&local_38,&local_18);
      puVar8 = &local_38;
      bVar6 = true;
      bVar5 = false;
    }
    plVar1 = local_40;
    FUN_142130770(*(undefined8 *)(param_1 + 0x138),puVar8);
    plVar3 = local_40;
    if ((bVar5) && (plVar1 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plVar1 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar1 = local_30;
    if ((bVar6) && (local_30 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142112b20 FUN_142112b20 body=63 status=ok
// SIG undefined FUN_142112b20(void)

void FUN_142112b20(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x128);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x130);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e4490(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112b60 FUN_142112b60 body=63 status=ok
// SIG undefined FUN_142112b60(void)

void FUN_142112b60(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x850);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x858);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e46c0(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112ba0 FUN_142112ba0 body=63 status=ok
// SIG undefined FUN_142112ba0(void)

void FUN_142112ba0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x138);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x140);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e4990(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112be0 FUN_142112be0 body=63 status=ok
// SIG undefined FUN_142112be0(void)

void FUN_142112be0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x130);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x138);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e4b90(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112c20 FUN_142112c20 body=63 status=ok
// SIG undefined FUN_142112c20(void)

void FUN_142112c20(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x118);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x120);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e4e10(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112c60 FUN_142112c60 body=360 status=ok
// SIG undefined FUN_142112c60(void)

void FUN_142112c60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 local_res8 [2];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  code *local_38;
  undefined4 *puStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      local_58 = DAT_1469eb218;
      local_50 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar8 = &local_58;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      puStack_30 = local_res8;
      local_res8[0] = 0;
      local_38 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_18 = 0x420e6680;
      uStack_14 = 1;
      uStack_10 = puStack_30;
      FUN_14213eb80(*(longlong *)(param_2 + 0x30),&local_48,&local_18);
      puVar8 = &local_48;
      bVar5 = true;
      bVar4 = false;
    }
    local_28 = *puVar8;
    local_20 = puVar8[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1419a0d60(*(undefined8 *)(param_1 + 0x128),&local_28);
    plVar7 = local_50;
    if ((bVar4) && (local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar7 = local_40;
    if ((bVar5) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142112dd0 FUN_142112dd0 body=63 status=ok
// SIG undefined FUN_142112dd0(void)

void FUN_142112dd0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x120);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x128);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e50c0(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112e10 FUN_142112e10 body=63 status=ok
// SIG undefined FUN_142112e10(void)

void FUN_142112e10(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x120);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x128);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e53b0(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112e50 FUN_142112e50 body=63 status=ok
// SIG undefined FUN_142112e50(void)

void FUN_142112e50(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(param_1 + 0x128);
  if (local_18 != 0) {
    local_10 = *(longlong *)(param_1 + 0x130);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1420e55e0(param_2,&local_18);
  }
  return;
}



// FUNCTION 142112eb0 FUN_142112eb0 body=66 status=ok
// SIG undefined FUN_142112eb0(void)

void FUN_142112eb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_18;
  longlong lStack_10;
  
  plVar1 = *(longlong **)(param_1 + 0x250);
  if (plVar1 != (longlong *)0x0) {
    local_18 = DAT_1469eb218;
    lStack_10 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x208))(plVar1,&local_18);
  }
  return;
}



// FUNCTION 142112f00 FUN_142112f00 body=66 status=ok
// SIG undefined FUN_142112f00(void)

void FUN_142112f00(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_18;
  longlong lStack_10;
  
  plVar1 = *(longlong **)(param_1 + 0x410);
  if (plVar1 != (longlong *)0x0) {
    local_18 = DAT_1469eb218;
    lStack_10 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x208))(plVar1,&local_18);
  }
  return;
}



// FUNCTION 142112f50 FUN_142112f50 body=245 status=ok
// SIG undefined FUN_142112f50(void)

void FUN_142112f50(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar5 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_14199ec30(*(undefined8 *)(param_1 + 0x118),&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_20;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_20;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_20;
          }
        }
      }
    }
    plVar4 = plStack_20;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142113070 FUN_142113070 body=245 status=ok
// SIG undefined FUN_142113070(void)

void FUN_142113070(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar5 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_14199ed70(*(undefined8 *)(param_1 + 0x138),&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_20;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_20;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_20;
          }
        }
      }
    }
    plVar4 = plStack_20;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142113170 FUN_142113170 body=245 status=ok
// SIG undefined FUN_142113170(void)

void FUN_142113170(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar5 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_141855e90(*(undefined8 *)(param_1 + 0x118),&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_20;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_20;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_20;
          }
        }
      }
    }
    plVar4 = plStack_20;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142113290 FUN_142113290 body=72 status=ok
// SIG undefined FUN_142113290(void)

void FUN_142113290(longlong param_1)

{
  longlong lVar1;
  undefined8 local_18;
  longlong lStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 != 0) {
    local_18 = DAT_1469eb218;
    lStack_10 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x148);
    }
    FUN_141956620(lVar1,&local_18);
  }
  return;
}



// FUNCTION 142113300 FUN_142113300 body=181 status=ok
// SIG undefined FUN_142113300(void)

void FUN_142113300(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar1 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_1418560f0(*(undefined8 *)(param_1 + 0x118),&local_18);
    }
    plVar5 = plStack_20;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar1 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142113400 FUN_142113400 body=72 status=ok
// SIG undefined FUN_142113400(void)

void FUN_142113400(longlong param_1)

{
  longlong lVar1;
  undefined8 local_18;
  longlong lStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 != 0) {
    local_18 = DAT_1469eb218;
    lStack_10 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x128);
    }
    FSlateApplication::RegisterVirtualWindow(lVar1,&local_18);
  }
  return;
}



// FUNCTION 142113450 FUN_142113450 body=245 status=ok
// SIG undefined FUN_142113450(void)

void FUN_142113450(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar5 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_14199eeb0(*(undefined8 *)(param_1 + 0x850),&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_20;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_20;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_20;
          }
        }
      }
    }
    plVar4 = plStack_20;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142113570 FUN_142113570 body=245 status=ok
// SIG undefined FUN_142113570(void)

void FUN_142113570(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar5 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_14199efb0(*(undefined8 *)(param_1 + 0x130),&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_20;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_20;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_20;
          }
        }
      }
    }
    plVar4 = plStack_20;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142113670 FUN_142113670 body=72 status=ok
// SIG undefined FUN_142113670(void)

void FUN_142113670(longlong param_1)

{
  longlong lVar1;
  undefined8 local_18;
  longlong lStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 != 0) {
    local_18 = DAT_1469eb218;
    lStack_10 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x128);
    }
    FUN_1419a0d60(lVar1,&local_18);
  }
  return;
}



// FUNCTION 1421136c0 FUN_1421136c0 body=181 status=ok
// SIG undefined FUN_1421136c0(void)

void FUN_1421136c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar1 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_14199f0b0(*(undefined8 *)(param_1 + 0x120),&local_18);
    }
    plVar5 = plStack_20;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar1 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421137a0 FUN_1421137a0 body=245 status=ok
// SIG undefined FUN_1421137a0(void)

void FUN_1421137a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1420f9830(*(undefined8 *)(param_2 + 0x30),&local_28);
    plVar5 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_14199f2f0(*(undefined8 *)(param_1 + 0x128),&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_20;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_20;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_20;
          }
        }
      }
    }
    plVar4 = plStack_20;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421138a0 FUN_1421138a0 body=1183 status=ok
// SIG undefined FUN_1421138a0(void)

undefined1 *
FUN_1421138a0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 local_res8 [16];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined1 local_278 [8];
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
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
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  
  puVar8 = local_1b8;
  plVar11 = (longlong *)0x0;
  uStack_280 = (undefined1 *)CONCAT44(uStack_280._4_4_,(undefined4)uStack_280);
  if (*(longlong *)(param_1 + 0x300) == 0) {
LAB_142113975:
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
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    plVar5 = plVar11;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar9 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar9;
      plVar5 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18);
    }
    uStack_280 = (undefined1 *)CONCAT44(uStack_280._4_4_,(undefined4)uStack_280);
    if ((*(uint *)(plVar5 + 1) >> 0x1c & 1) != 0) goto LAB_142113975;
    uStack_280 = local_res8;
    local_res8[0] = 0;
    local_288 = 0x406ddef0;
    uStack_284 = 1;
    lVar6 = FUN_1415d8310(&local_288,&DAT_14622e6dc);
    if (*(char *)(lVar6 + 0x58) != '\0') goto LAB_142113975;
    (**(code **)(**(longlong **)(param_1 + 0x300) + 0x438))
              (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
  }
  if (*(char *)(param_1 + 0x346) == '\0') {
    return param_2;
  }
  *(undefined1 *)(param_1 + 0x346) = 0;
  plVar5 = *(longlong **)(param_1 + 0x338);
  plVar10 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar5[1];
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(plVar5 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar10 = plVar11, !bVar12) {
      LOCK();
      bVar12 = iVar4 == (int)plVar5[1];
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar10 = plVar5;
        plVar11 = (longlong *)0x0;
        if (plVar5 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 0x330);
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar5 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          plVar10 = plVar5;
          if ((int)lVar6 == 1) {
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
        break;
      }
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x38))(plVar11,param_1 + 0x308);
  if (puVar7 == (undefined8 *)0x0) goto LAB_142113cd7;
  iVar4 = (**(code **)(*(longlong *)(param_1 + 0x308) + 0x70))(param_1 + 0x308);
  if (iVar4 != 0) {
    cVar2 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar7);
    if (cVar2 == '\0') {
      if (iVar4 != 3) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,*puVar7,1);
      (**(code **)(*plVar11 + 0x30))(plVar11,2);
      local_1c4 = local_1c4 & 0xffffff00;
      local_278[0] = 1;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_270 = 0;
      local_268 = 0;
      local_258 = 0;
      local_250 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1c8 = 0x20702;
      FUN_140439160(param_2,local_278);
      puVar8 = local_278;
    }
    else {
      if (1 < iVar4 - 2U) goto LAB_142113c21;
      (**(code **)(*plVar11 + 0x18))(plVar11,*puVar7,1);
      (**(code **)(*plVar11 + 0x30))(plVar11,2);
      local_104 = local_104 & 0xffffff00;
      local_1b8[0] = 1;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_198 = 0;
      local_190 = 0;
      local_138 = 0;
      local_130 = 0;
      local_108 = 0x20702;
      FUN_140439160(param_2,puVar8);
    }
    FUN_140438c20(puVar8);
  }
LAB_142113c21:
  cVar2 = (**(code **)(*plVar11 + 0x88))(plVar11,*puVar7);
  if (cVar2 != '\0') {
    local_44 = local_44 & 0xffffff00;
    local_f8[0] = 1;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_48 = 0x20702;
    FUN_140439160(param_2,local_f8);
    FUN_140438c20(local_f8);
  }
LAB_142113cd7:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142113d40 FUN_142113d40 body=933 status=ok
// SIG undefined FUN_142113d40(void)

undefined1 * FUN_142113d40(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 local_268 [8];
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  
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
  if (*(char *)(param_1 + 0x431) == '\0') {
    return param_2;
  }
  *(undefined1 *)(param_1 + 0x431) = 0;
  plVar2 = *(longlong **)(param_1 + 0x390);
  plVar8 = plVar2;
  plVar9 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 0x388);
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
  plVar2 = (longlong *)(param_1 + -8);
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x38))(plVar9,plVar2);
  if (puVar6 == (undefined8 *)0x0) goto LAB_142114074;
  iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2);
  if (iVar5 != 0) {
    cVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
    if (cVar4 == '\0') {
      if (iVar5 != 3) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,*puVar6,1);
      (**(code **)(*plVar9 + 0x30))(plVar9,2);
      local_1b4 = local_1b4 & 0xffffff00;
      local_268[0] = 1;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_260 = 0;
      local_258 = 0;
      local_248 = 0;
      local_240 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1b8 = 0x20702;
      FUN_140439160(param_2,local_268);
      puVar7 = local_268;
    }
    else {
      if (1 < iVar5 - 2U) goto LAB_142113fbf;
      (**(code **)(*plVar9 + 0x18))(plVar9,*puVar6,1);
      (**(code **)(*plVar9 + 0x30))(plVar9,2);
      local_f4 = local_f4 & 0xffffff00;
      local_1a8[0] = 1;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_188 = 0;
      local_180 = 0;
      local_128 = 0;
      local_120 = 0;
      local_f8 = 0x20702;
      FUN_140439160(param_2,local_1a8);
      puVar7 = local_1a8;
    }
    FUN_140438c20(puVar7);
  }
LAB_142113fbf:
  cVar4 = (**(code **)(*plVar9 + 0x88))(plVar9,*puVar6);
  if (cVar4 != '\0') {
    local_34 = local_34 & 0xffffff00;
    local_e8[0] = 1;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_68 = 0;
    local_60 = 0;
    local_38 = 0x20702;
    FUN_140439160(param_2,local_e8);
    FUN_140438c20(local_e8);
  }
LAB_142114074:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1421140f0 FUN_1421140f0 body=346 status=ok
// SIG undefined FUN_1421140f0(void)

undefined1 *
FUN_1421140f0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x438))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 142114250 FUN_142114250 body=346 status=ok
// SIG undefined FUN_142114250(void)

undefined1 *
FUN_142114250(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x420))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 1421143b0 FUN_1421143b0 body=346 status=ok
// SIG undefined FUN_1421143b0(void)

undefined1 *
FUN_1421143b0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x430))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 142114510 FUN_142114510 body=484 status=ok
// SIG undefined FUN_142114510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142114510(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  *(undefined1 *)(param_1 + 0x346) = 1;
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_120)
  ;
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_118 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  plVar7 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_138 = DAT_1469e9868;
  local_130 = DAT_1469e9870;
  local_128 = DAT_1469e9878;
  if (DAT_1469e9878 != 0) {
    LOCK();
    *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
    UNLOCK();
  }
  local_54 = local_54 & 0xffffff00;
  local_108[0] = 1;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x20702;
  local_148 = uVar6;
  local_140 = plVar3;
  uVar6 = FUN_140466100(local_108,&local_148,&local_138);
  FUN_140438260(param_2,uVar6);
  FUN_140438c20(local_108);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
    LOCK();
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return param_2;
}



// FUNCTION 142114700 FUN_142114700 body=346 status=ok
// SIG undefined FUN_142114700(void)

undefined1 *
FUN_142114700(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *puStack_20;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_20 = local_res8;
      local_res8[0] = 0;
      local_28 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x428))
                  (*(longlong **)(param_1 + 0x300),param_2,param_3,param_4);
        return param_2;
      }
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



// FUNCTION 142114860 FUN_142114860 body=60 status=ok
// SIG undefined FUN_142114860(void)

void FUN_142114860(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0xb8);
  return;
}



// FUNCTION 1421148a0 FUN_1421148a0 body=246 status=ok
// SIG undefined FUN_1421148a0(void)

void FUN_1421148a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (((*(longlong *)(param_1 + 0x120) != 0) || (lVar5 = FUN_1423407b0(), lVar5 != 0)) &&
     (DAT_146b17150 != (longlong *)0x0)) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    cVar4 = UWorld::IsGameWorld(lVar5);
    if (cVar4 != '\0') {
      (**(code **)(*DAT_146b17150 + 0x358))(DAT_146b17150,&local_28);
      if (local_28 != 0) {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        FUN_1421421e0(param_1,&local_18);
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
  FUN_142393f60(param_1);
  return;
}



// FUNCTION 1421149a0 FUN_1421149a0 body=135 status=ok
// SIG undefined FUN_1421149a0(void)

void FUN_1421149a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  code *local_18;
  undefined1 *puStack_10;
  
  lVar1 = param_1[0x34];
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1420e67e0;
  lVar2 = *(longlong *)(lVar1 + 0x28);
  if (lVar2 != 0) {
    local_res10 = lVar2;
    FUN_1420e67e0(local_res8,&local_res10);
    FUN_1420f6990(*(undefined8 *)(lVar1 + 0x28),&local_18,0);
  }
  (**(code **)(*param_1 + 0x308))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142114a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 142114a30 Open body=73 status=ok
// SIG undefined Open(void)

void UMenuAnchor::Open(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    cVar1 = FUN_14192b710();
    if (cVar1 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x148) + 0x210))
                (*(longlong **)(param_1 + 0x148),1,param_2,0);
    }
  }
  return;
}



// FUNCTION 142114a80 FUN_142114a80 body=2452 status=ok
// SIG undefined FUN_142114a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142114a80(longlong param_1,longlong param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  float local_2b8;
  undefined1 local_2b0;
  undefined1 local_2a8;
  byte local_2a7 [7];
  longlong local_2a0;
  float local_298;
  undefined8 uStack_294;
  float fStack_28c;
  longlong local_288;
  longlong *local_280;
  float local_278;
  float local_274;
  float local_270;
  undefined8 local_26c;
  float local_264;
  longlong local_260;
  longlong local_258;
  undefined1 local_250;
  undefined1 local_24f;
  undefined8 local_248;
  undefined4 local_240;
  longlong local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined1 local_1a8 [56];
  longlong *local_170;
  float local_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined8 local_12c;
  undefined1 local_120 [56];
  longlong *local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  uint uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (*DAT_146ae79a0 == 0) {
    return 0;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  UNLOCK();
  if ((*(char *)(param_1 + 0x404) != '\0') && (*(ulonglong *)(param_1 + 0x410) != DAT_1468c21b0)) {
    iVar4 = *DAT_146ae79b8;
    if (*DAT_146ae79b8 < 1) {
      iVar4 = *(int *)(param_1 + 0x400);
    }
    if (DAT_1468c21b0 % (ulonglong)(longlong)iVar4 == (longlong)*(int *)(param_1 + 0x3fc)) {
      *(undefined1 *)(param_1 + 0x406) = 1;
    }
  }
  iVar4 = DAT_146ae7988;
  plVar12 = (longlong *)0x0;
  local_260 = param_2;
  if (0 < DAT_146ae77b0) {
    if ((DAT_146500f84 == '\0') ||
       (plVar9 = (longlong *)(ulonglong)DAT_146500f80, DAT_146500f78 != DAT_1468c21b0)) {
      plVar9 = plVar12;
    }
    if (DAT_146ae77b0 < (int)plVar9) {
      lVar13 = (longlong)DAT_146ae7988;
      plVar12 = DAT_146ae7980;
      if (DAT_146ae7980 == (longlong *)0x0) {
        plVar12 = (longlong *)&DAT_146ae7968;
      }
      plVar9 = plVar12;
      do {
        if (plVar9 == plVar12 + lVar13) {
LAB_142114b9c:
          DAT_146ae7988 = DAT_146ae7988 + 1;
          if (DAT_146ae798c < DAT_146ae7988) {
            TArray<wchar_t_const_*,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
                      (&DAT_146ae7968,iVar4);
          }
          plVar12 = DAT_146ae7980;
          if (DAT_146ae7980 == (longlong *)0x0) {
            plVar12 = (longlong *)&DAT_146ae7968;
          }
          plVar12[lVar13] = param_1;
          return 0;
        }
        if (*plVar9 == param_1) {
          if ((int)((longlong)plVar9 - (longlong)plVar12 >> 3) != -1) {
            return 0;
          }
          goto LAB_142114b9c;
        }
        plVar9 = plVar9 + 1;
      } while( true );
    }
  }
  local_13c = param_3[7];
  fStack_138 = param_3[8];
  fStack_134 = param_3[9];
  fStack_130 = param_3[10];
  local_12c = *(undefined8 *)(param_3 + 0xb);
  fVar2 = param_3[3];
  fVar19 = SQRT(fStack_138 * fStack_138 + local_13c * local_13c) * *param_3;
  fVar18 = SQRT(fStack_130 * fStack_130 + fStack_134 * fStack_134) * param_3[1];
  fVar3 = param_3[4];
  if ((fVar19 == *(float *)(param_1 + 0x3e0)) && (fVar18 == *(float *)(param_1 + 0x3e4))) {
    if (*(char *)(param_1 + 0x406) == '\0') goto LAB_142114cae;
  }
  else {
    *(float *)(param_1 + 0x3e0) = fVar19;
    *(float *)(param_1 + 0x3e4) = fVar18;
    *(undefined1 *)(param_1 + 0x406) = 1;
  }
  lVar13 = FWeakObjectPtr::Get(param_1 + 0x428);
  if (((lVar13 == 0) || (*(longlong *)(lVar13 + 0x1b8) == 0)) ||
     ((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' &&
      ((DAT_1468c21ae != '\0' && (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 != '\0') ||
       ((DAT_1468c21ae == '\0' || (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      uVar11 = 0;
      goto LAB_142114dae;
    }
  }
  else {
    uVar11 = *(undefined8 *)(lVar13 + 0x1b8);
LAB_142114dae:
    (**(code **)(**(longlong **)(DAT_1469f4590 + 0x18) + 0x168))
              (*(longlong **)(DAT_1469f4590 + 0x18),uVar11);
  }
  if ((DAT_146500f84 == '\0') || (DAT_146500f78 != DAT_1468c21b0)) {
    DAT_146500f80 = 0;
  }
  DAT_146500f80 = DAT_146500f80 + 1;
  DAT_146500f84 = '\x01';
  DAT_146500f78 = DAT_1468c21b0;
  *(ulonglong *)(param_1 + 0x410) = DAT_1468c21b0;
  dVar5 = DAT_1468b5a78 - *(double *)(param_1 + 0x408);
  uVar16 = (int)ROUND(fVar19 + fVar19 + 0.5) >> 1;
  uVar15 = (int)ROUND(fVar18 + fVar18 + 0.5) >> 1;
  if (((*(int *)(param_1 + 0xc0) == 0) || (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))(), cVar7 == '\0')) {
    local_2a8 = *(undefined1 *)(param_1 + 0xb0);
  }
  else {
    if (*(int *)(param_1 + 0xc0) != 0) {
      plVar12 = *(longlong **)(param_1 + 0xb8);
    }
    (**(code **)(*plVar12 + 0x38))(plVar12,&local_2a8);
    *(undefined1 *)(param_1 + 0xb0) = local_2a8;
  }
  local_24f = 1;
  local_248 = 0;
  local_240 = 0;
  local_250 = local_2a8;
  SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x418),&local_250);
  FUN_14185c5d0(*(undefined8 *)(param_1 + 0x418),param_3[2]);
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  local_2a0 = *(longlong *)(*(longlong *)(param_1 + 0x430) + 0x18);
  plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x430) + 0x20);
  if ((uVar16 != 0) && (uVar15 != 0)) {
    lVar13 = *(longlong *)(param_1 + 1000);
    pbVar14 = (byte *)(lVar13 + 0xb0);
    if ((*(int *)(lVar13 + 0xc0) == 0) ||
       ((*(longlong **)(lVar13 + 0xb8) == (longlong *)0x0 ||
        (cVar7 = (**(code **)(**(longlong **)(lVar13 + 0xb8) + 0x18))(), cVar7 == '\0')))) {
      local_2a7[0] = *pbVar14;
    }
    else if (*(int *)(lVar13 + 0xc0) == 0) {
      (**(code **)(_DAT_00000000 + 0x38))(0,local_2a7);
      *pbVar14 = local_2a7[0];
    }
    else {
      (**(code **)(**(longlong **)(lVar13 + 0xb8) + 0x38))(*(longlong **)(lVar13 + 0xb8),local_2a7);
      *pbVar14 = local_2a7[0];
    }
    if ((local_2a7[0] & 0x19) != 0) {
      fVar19 = (float)uVar16;
      fVar18 = (float)(**(code **)(*plVar12 + 0x2b0))(plVar12);
      if ((fVar18 != fVar19) ||
         (fVar18 = (float)(**(code **)(*plVar12 + 0x2b8))(plVar12), fVar18 != (float)uVar15)) {
        lVar13 = FHdrImageWrapper::GetHeight(plVar12);
        if ((lVar13 == 0) || (*(char *)((longlong)plVar12 + 0xe2) != '\x02')) {
          local_2c8 = (undefined8 *)((ulonglong)local_2c8 & 0xffffffffffffff00);
          FUN_14287a5c0(plVar12,uVar16,uVar15,2);
          FUN_142894320(plVar12,1);
        }
        else {
          FUN_14288b390(plVar12,uVar16,uVar15);
        }
      }
      local_298 = param_3[2];
      uStack_a4 = uStack_a4 & 0xfffffffe;
      *(float *)(param_1 + 0x360) = fVar19;
      local_d8 = (1.0 / local_298) * fVar19;
      fStack_d4 = (1.0 / local_298) * (float)uVar15;
      *(float *)(param_1 + 0x364) = (float)uVar15;
      uStack_294 = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      *(float *)(local_2a0 + 0x2c) = -(float)((int)ROUND(fVar2 + fVar2 + 0.5) >> 1);
      *(float *)(local_2a0 + 0x30) = -(float)((int)ROUND(fVar3 + fVar3 + 0.5) >> 1);
      fStack_28c = local_298;
      fStack_d0 = local_298;
      fStack_cc = fVar2;
      local_c8 = fVar3;
      fStack_c4 = fVar2;
      fStack_c0 = fVar3;
      fStack_bc = local_298;
      fStack_b0 = local_298;
      fStack_ac = fVar2;
      local_a8 = fVar3;
      plVar10 = (longlong *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_218);
      plVar9 = (longlong *)plVar10[1];
      lVar13 = *plVar10;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_210 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_210)(local_210);
          LOCK();
          piVar1 = (int *)((longlong)local_210 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_210 + 8))(local_210,1);
          }
        }
      }
      lVar6 = local_260;
      local_2c0 = (undefined8 *)CONCAT44(local_2c0._4_4_,*(undefined4 *)(local_260 + 0x28));
      local_2c8 = (undefined8 *)DAT_1468b5a78;
      FPaintArgs::FPaintArgs
                (local_1a8,param_1,*(undefined8 *)(local_260 + 8),*(undefined8 *)(local_260 + 0x18))
      ;
      uVar11 = (**(code **)(*(longlong *)(param_1 + 0x2f0) + 0x10))();
      *(undefined8 *)(param_1 + 0x4c8) = uVar11;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_238 = lVar13;
      local_230 = plVar9;
      FUN_1418467f0(*(undefined8 *)(param_1 + 0x4c8),lVar6,&local_238,&local_d8);
      if (lVar13 == 0) {
        local_288 = 0;
      }
      else {
        local_288 = lVar13 + 0x2f0;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
      }
      local_264 = fStack_d4 * fStack_d0;
      local_26c = 0;
      local_270 = local_d8 * fStack_d0;
      local_278 = fStack_cc;
      local_274 = local_c8;
      local_280 = plVar9;
      FSlateRotatedRect::ToBoundingRect(&local_278,&local_208);
      plVar10 = *(longlong **)(param_1 + 0x420);
      local_228 = *(undefined8 *)(param_1 + 0x418);
      local_1f8 = local_208;
      uStack_1f0 = uStack_200;
      local_1e8 = CONCAT44(fStack_d4,local_d8);
      uStack_1e0 = CONCAT44(fStack_cc,fStack_d0);
      local_1d8 = CONCAT44(fStack_c4,local_c8);
      uStack_1d0 = CONCAT44(fStack_bc,fStack_c0);
      local_1b8 = CONCAT44(uStack_a4,local_a8);
      local_1c8 = uStack_b8;
      uStack_1c4 = uStack_b4;
      fStack_1c0 = fStack_b0;
      fStack_1bc = fStack_ac;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      bVar17 = DAT_146ae77bc != 0;
      local_2c0 = (undefined8 *)CONCAT71(local_2c0._1_7_,1);
      local_2c8 = (undefined8 *)CONCAT71(local_2c8._1_7_,1);
      local_220 = plVar10;
      uVar11 = FUN_14182c690(local_1a8,local_120,&local_288,*(undefined8 *)(param_1 + 0x4c8));
      local_2c0 = &local_1f8;
      local_2c8 = &local_1e8;
      local_2b8 = (float)dVar5;
      local_2b0 = bVar17;
      FUN_1420f3570(local_2a0,uVar11,plVar12,&local_228);
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_e8 != (longlong *)0x0)) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar10 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (local_280 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_280 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_280 != (longlong *)0x0)) {
          (**(code **)(*local_280 + 8))(local_280,1);
        }
      }
      *(undefined1 *)(param_1 + 0x406) = 0;
      local_258 = param_1;
      TArray<SRetainerWidget_*,TInlineAllocator<3,FDefaultAllocator>_>::Remove
                (&DAT_146ae7968,&local_258);
      *(double *)(param_1 + 0x408) = DAT_1468b5a78;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_170 != (longlong *)0x0)) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
      return 1;
    }
  }
LAB_142114cae:
  LOCK();
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  UNLOCK();
  return 0;
}



// FUNCTION 142115420 FUN_142115420 body=552 status=ok
// SIG undefined FUN_142115420(void)

void FUN_142115420(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 local_res8;
  undefined8 local_res10;
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
  
  if ((*(byte *)(param_1 + 0x6f1) & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x700);
    *(int *)(param_1 + 0x700) = iVar4 + 1;
    if (*(int *)(param_1 + 0x704) < iVar4 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x6f8,iVar4);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + (longlong)iVar4 * 4) = 1;
    return;
  }
  local_res10._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x6ac) >> 0x20);
  fVar9 = local_res10._4_4_ + 0.0;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  iVar5 = (int)*(undefined8 *)(param_1 + 0x6ac);
  uVar1 = ((int)ROUND((fVar9 + fVar9) - 0.5) >> 1) + iVar5 + *(int *)(param_1 + 0x6a8);
  iVar4 = (int)fVar9;
  fVar6 = fVar9;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar9)) {
    auVar7._4_4_ = fVar9;
    auVar7._0_4_ = fVar9;
    auVar7._8_8_ = 0;
    uVar2 = movmskps(uVar1,auVar7);
    fVar6 = (float)(int)(iVar4 - (uVar2 & 1));
  }
  fVar9 = fVar9 - fVar6;
  if (0.0 <= fVar9) {
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    local_res8 = CONCAT44(fVar9,uVar1);
  }
  else {
    local_res8 = (ulonglong)uVar1;
  }
  local_res10._4_4_ = local_res10._4_4_ + 0.0;
  uVar1 = ((int)ROUND((local_res10._4_4_ + local_res10._4_4_) - 0.5) >> 1) + iVar5 +
          *(int *)(param_1 + 0x6a8);
  iVar4 = (int)local_res10._4_4_;
  fVar6 = local_res10._4_4_;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != local_res10._4_4_)) {
    auVar8._4_4_ = local_res10._4_4_;
    auVar8._0_4_ = local_res10._4_4_;
    auVar8._8_8_ = 0;
    uVar2 = movmskps(uVar1,auVar8);
    fVar6 = (float)(int)(iVar4 - (uVar2 & 1));
  }
  local_res10._4_4_ = local_res10._4_4_ - fVar6;
  if (0.0 <= local_res10._4_4_) {
    if (0.99999994 <= local_res10._4_4_) {
      local_res10._4_4_ = 0.99999994;
    }
    local_res10 = CONCAT44(local_res10._4_4_,uVar1);
  }
  else {
    local_res10 = (ulonglong)uVar1;
  }
  puVar3 = (undefined1 *)
           FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                     (local_b8,local_res10,local_res8,*(undefined8 *)(param_1 + 0x6a0),0);
  local_3c = 0;
  uStack_38 = 0;
  local_ac = puVar3[0xc];
  local_90 = 0x3f800000;
  local_a8 = *(undefined8 *)(puVar3 + 0x10);
  local_a0 = *(undefined8 *)(puVar3 + 0x18);
  local_98 = *(undefined4 *)(puVar3 + 0x20);
  local_b8[0] = *puVar3;
  local_b4 = *(undefined8 *)(puVar3 + 4);
  local_94 = *(undefined4 *)(puVar3 + 0x24);
  local_78 = local_78 & 0xc0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x80000000;
  local_7c = 0;
  FUN_141f4a590(param_1 + 0x388,local_b8,param_1 + 0x28,DAT_146ae7800);
  FUN_1420e18a0(param_1);
  return;
}



// FUNCTION 142115650 FUN_142115650 body=172 status=ok
// SIG undefined FUN_142115650(void)

void FUN_142115650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar2 + *(int *)(param_1 + 0x178);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*(longlong *)(*plVar2 + 0x378) == param_2) {
        FUN_142115420();
        return;
      }
    }
  }
  return;
}



// FUNCTION 142115700 FUN_142115700 body=2251 status=ok
// SIG undefined FUN_142115700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_142115700(longlong *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_4c8 [32];
  uint local_4a8;
  undefined1 *local_4a0;
  undefined *local_498;
  undefined8 local_488;
  float local_480;
  float local_478;
  float fStack_474;
  float local_470;
  longlong local_468;
  undefined8 local_460;
  float local_458;
  float fStack_454;
  float local_450;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  longlong local_438;
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  float local_418;
  float local_414;
  float local_410;
  float local_408;
  float local_404;
  float local_400;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  undefined1 local_3e8 [8];
  float local_3e0;
  float fStack_3dc;
  float local_3d8;
  undefined8 local_3d0;
  float local_3c8;
  undefined8 local_3b8;
  float local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  float local_378;
  float fStack_374;
  float fStack_370;
  undefined4 uStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_2e8 [72];
  longlong local_2a0;
  longlong local_280;
  undefined1 local_268 [72];
  longlong local_220;
  longlong local_200;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [320];
  longlong *local_a0;
  undefined1 local_98 [16];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x90) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_2 + 0x94) = DAT_1468b5d88._4_4_;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  FWidgetPath::FWidgetPath((longlong)param_2 + 0xa0);
  *(undefined1 *)((longlong)param_2 + 0x200) = 0;
  pfVar10 = (float *)((longlong)param_2 + 0x204);
  pfVar11 = (float *)((longlong)param_2 + 0x210);
  *(longlong *)pfVar10 = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x20c) = DAT_1468b5d98;
  *(longlong *)pfVar11 = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x218) = DAT_1468b5d98;
  bVar3 = *(byte *)(param_1 + 0x60);
  local_468 = 0;
  local_460 = 0;
  if (bVar3 == 0) {
    local_348 = *(float *)(param_1 + 0x42);
    fStack_344 = *(float *)((longlong)param_1 + 0x214);
    fStack_340 = *(float *)(param_1 + 0x43);
    fStack_33c = *(float *)((longlong)param_1 + 0x21c);
    fVar15 = *(float *)(param_1 + 0x44);
    fVar17 = *(float *)((longlong)param_1 + 0x224);
    fVar19 = *(float *)(param_1 + 0x45);
    uStack_36c = *(undefined4 *)((longlong)param_1 + 0x22c);
    local_428 = 0;
    local_420 = 0;
    fVar13 = fStack_344 * 0.0 - fStack_340 * 0.0;
    fVar14 = fStack_340 * 1.0 - local_348 * 0.0;
    fVar16 = local_348 * 0.0 - fStack_344 * 1.0;
    fVar18 = fStack_33c * 0.0 - fStack_33c * 0.0;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    fVar16 = fVar16 + fVar16;
    fVar18 = fVar18 + fVar18;
    fVar20 = (fVar16 * fStack_344 - fVar14 * fStack_340) + fVar13 * fStack_33c + 1.0;
    fVar21 = (fVar13 * fStack_340 - fVar16 * local_348) + fVar14 * fStack_33c + 0.0;
    fVar14 = (fVar14 * local_348 - fVar13 * fStack_344) + fVar16 * fStack_33c + 0.0;
    fStack_35c = (fVar18 * fStack_33c - fVar18 * fStack_33c) + fVar18 * fStack_33c + 0.0;
    local_3d8 = fVar19;
    local_378 = fVar15;
    fStack_374 = fVar17;
    fStack_370 = fVar19;
    local_368 = fVar20;
    fStack_364 = fVar21;
    fStack_360 = fVar14;
    FUN_1420fddc0(param_1,&local_428);
    FUN_140e3fc20(local_268,&DAT_146aefe90);
    FUN_1423016c0(local_268,&local_428);
    *pfVar10 = fVar15;
    *(float *)((longlong)param_2 + 0x208) = fVar17;
    *(float *)((longlong)param_2 + 0x20c) = local_3d8;
    fVar13 = *(float *)((longlong)param_1 + 0x2fc);
    local_480 = fVar13 * fVar14 + fVar19;
    *(longlong *)pfVar11 = CONCAT44(fVar13 * fVar21 + fVar17,fVar13 * fVar20 + fVar15);
    *(float *)((longlong)param_2 + 0x218) = local_480;
    lVar9 = param_1[0x24];
    bVar3 = *(byte *)(param_1 + 0x5f);
    local_3e0 = fVar15;
    fStack_3dc = fVar17;
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0(param_1);
    }
    local_498 = &DAT_146aefe68;
    local_4a0 = local_268;
    local_4a8 = (uint)bVar3;
    UWorld::LineTraceMultiByChannel(lVar9,&local_468,pfVar10,pfVar11);
    if (local_200 != 0) {
      FMemory::Free();
    }
    lVar9 = local_428;
    if (local_220 != 0) {
      FMemory::Free();
      lVar9 = local_428;
    }
LAB_142115cb5:
    if (lVar9 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (bVar3 < 3) {
      local_438 = 0;
      local_430 = 0;
      FUN_1420fddc0(param_1,&local_438);
      FUN_140e3fc20(local_2e8,&DAT_146aefe90);
      FUN_1423016c0(local_2e8,&local_438);
      lVar9 = param_1[0x24];
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(param_1);
      }
      uVar8 = UWorld::GetFirstPlayerController(lVar9);
      lVar9 = FUN_14270bb10(uVar8);
      if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x70), lVar9 != 0)) {
        if ((char)param_1[0x60] == '\x01') {
          cVar5 = FUN_142480f40(lVar9,local_3e8);
          if (cVar5 != '\0') {
            local_4a0 = (undefined1 *)CONCAT71(local_4a0._1_7_,1);
            local_4a8 = local_4a8 & 0xffffff00;
            cVar5 = FUN_14244a240(uVar8,local_3e8,&local_458,&local_418);
            if (cVar5 == '\x01') {
              *(longlong *)pfVar10 = CONCAT44(fStack_454,local_458);
              *(float *)((longlong)param_2 + 0x20c) = local_450;
              fVar13 = *(float *)((longlong)param_1 + 0x2fc);
              local_480 = fVar13 * local_410 + local_450;
              *(longlong *)pfVar11 =
                   CONCAT44(fVar13 * local_414 + fStack_454,fVar13 * local_418 + local_458);
              *(float *)((longlong)param_2 + 0x218) = local_480;
              lVar9 = param_1[0x24];
              bVar3 = *(byte *)(param_1 + 0x5f);
              if (lVar9 == 0) {
                lVar9 = FUN_1423407b0(param_1);
              }
LAB_142115acc:
              local_4a8 = (uint)bVar3;
              local_498 = &DAT_146aefe68;
              local_4a0 = local_2e8;
              UWorld::LineTraceMultiByChannel(lVar9,&local_468,pfVar10,pfVar11);
            }
          }
        }
        else if ((char)param_1[0x60] == '\x02') {
          FUN_142481d50(lVar9,&local_448);
          local_43c = local_444 * 0.5;
          local_4a0 = (undefined1 *)CONCAT71(local_4a0._1_7_,1);
          local_440 = local_448 * 0.5;
          local_4a8 = local_4a8 & 0xffffff00;
          cVar5 = FUN_14244a240(uVar8,&local_440,&local_478,&local_408);
          if (cVar5 == '\x01') {
            *(longlong *)pfVar10 = CONCAT44(fStack_474,local_478);
            *(float *)((longlong)param_2 + 0x20c) = local_470;
            fVar13 = *(float *)((longlong)param_1 + 0x2fc);
            local_480 = fVar13 * local_400 + local_470;
            *(longlong *)pfVar11 =
                 CONCAT44(fVar13 * local_404 + fStack_474,local_478 + fVar13 * local_408);
            *(float *)((longlong)param_2 + 0x218) = local_480;
            fVar13 = *(float *)((longlong)param_1 + 0x2fc);
            lVar9 = param_1[0x24];
            bVar3 = *(byte *)(param_1 + 0x5f);
            local_3f0 = fVar13 * local_400 + local_470;
            local_3f4 = fVar13 * local_404 + fStack_474;
            local_3f8 = fVar13 * local_408 + local_478;
            if (lVar9 == 0) {
              lVar9 = FUN_1423407b0(param_1);
            }
            pfVar11 = &local_3f8;
            pfVar10 = &local_478;
            goto LAB_142115acc;
          }
        }
      }
      if (local_280 != 0) {
        FMemory::Free();
      }
      lVar9 = local_438;
      if (local_2a0 != 0) {
        FMemory::Free();
        lVar9 = local_438;
      }
      goto LAB_142115cb5;
    }
    if (bVar3 == 3) {
      FUN_140729f20(param_2,param_1 + 0x72);
      *(byte *)((longlong)param_2 + 0x200) = *(byte *)(param_1 + 0x72) & 1;
      *(longlong *)pfVar10 = *(longlong *)((longlong)param_1 + 0x3d4);
      *(undefined4 *)((longlong)param_2 + 0x20c) = *(undefined4 *)((longlong)param_1 + 0x3dc);
      *(longlong *)pfVar11 = param_1[0x7c];
      *(int *)((longlong)param_2 + 0x218) = (int)param_1[0x7d];
    }
  }
  if ((char)param_1[0x60] != '\x03') {
    lVar12 = (longlong)(int)local_460 * 0x90 + local_468;
    lVar9 = local_468;
    while ((lVar9 != lVar12 &&
           (plVar6 = (longlong *)FWeakObjectPtr::Get(lVar9 + 0x74), plVar6 != (longlong *)0x0))) {
      lVar7 = AUGDungeon::GetPrivateStaticClass();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) break;
      cVar5 = (**(code **)(*plVar6 + 0x460))(plVar6);
      if (cVar5 != '\0') {
        *(undefined1 *)((longlong)param_2 + 0x200) = 1;
        FUN_140729f20(param_2,lVar9);
      }
      lVar9 = lVar9 + 0x90;
    }
  }
  if (*(char *)((longlong)param_2 + 0x200) == '\0') goto LAB_142115f78;
  plVar6 = (longlong *)FWeakObjectPtr::Get((longlong)param_2 + 0x74);
  if (plVar6 == (longlong *)0x0) {
LAB_142115dd9:
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar9 = AUGDungeon::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142115dd9;
  }
  *(longlong **)((longlong)param_2 + 0x98) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar6 + 0x81c) == '\x01') {
      local_318 = *(float *)(param_1 + 0x42);
      fStack_314 = *(float *)((longlong)param_1 + 0x214);
      fStack_310 = *(float *)(param_1 + 0x43);
      fStack_30c = *(float *)((longlong)param_1 + 0x21c);
      fVar13 = fStack_314 * 0.0 - fStack_310 * 0.0;
      fVar15 = fStack_310 * 1.0 - local_318 * 0.0;
      fVar17 = local_318 * 0.0 - fStack_314 * 1.0;
      fVar19 = fStack_30c * 0.0 - fStack_30c * 0.0;
      fVar13 = fVar13 + fVar13;
      fVar15 = fVar15 + fVar15;
      fVar17 = fVar17 + fVar17;
      fVar19 = fVar19 + fVar19;
      local_358 = (fVar17 * fStack_314 - fVar15 * fStack_310) + fStack_30c * fVar13 + 1.0;
      fStack_354 = (fVar13 * fStack_310 - fVar17 * local_318) + fStack_30c * fVar15 + 0.0;
      local_3c8 = (fVar15 * local_318 - fVar13 * fStack_314) + fStack_30c * fVar17 + 0.0;
      fStack_34c = (fVar19 * fStack_30c - fVar19 * fStack_30c) + fStack_30c * fVar19 + 0.0;
      local_3d0 = CONCAT44(fStack_354,local_358);
      local_3a8 = *(undefined8 *)((longlong)param_2 + 0x20);
      local_3a0 = *(undefined4 *)((longlong)param_2 + 0x28);
      local_3b8 = local_3d0;
      local_3b0 = local_3c8;
      fStack_350 = local_3c8;
      FUN_1420f9fd0(plVar6,&local_398,&local_3a8,&local_3b8);
      *(undefined8 *)((longlong)param_2 + 0x20) = local_398;
      *(undefined4 *)((longlong)param_2 + 0x90) = local_38c;
      *(undefined4 *)((longlong)param_2 + 0x94) = local_388;
      *(undefined4 *)((longlong)param_2 + 0x28) = local_390;
    }
    else {
      local_480 = *(float *)((longlong)param_2 + 0x28);
      local_488 = *(undefined8 *)((longlong)param_2 + 0x20);
      (**(code **)(*plVar6 + 0x948))(plVar6,&local_488,(longlong)param_2 + 0x90);
    }
    uVar8 = (**(code **)(*param_1 + 0x580))(param_1,local_1e8,param_2);
    FUN_1417f9510((longlong)param_2 + 0xa0,uVar8);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_98);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a0 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    FUN_140456b10(local_1e0);
  }
LAB_142115f78:
  if (local_468 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142115fd0 PlayAnimation body=133 status=ok
// SIG undefined PlayAnimation(void)

void UUserWidget::PlayAnimation
               (undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_1420fd1e0();
  if (lVar1 != 0) {
    FUN_142116100(lVar1,(double)param_3,0,param_4,param_5,param_6);
    UWidget::InvalidateLayoutAndVolatility(param_1);
    FUN_14215b1b0(param_1,param_2);
    FUN_142142860(param_1);
  }
  return;
}



// FUNCTION 142116060 PlayAnimationTo body=148 status=ok
// SIG undefined PlayAnimationTo(void)

void UUserWidget::PlayAnimationTo
               (undefined8 param_1,undefined8 param_2,float param_3,float param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_1420fd1e0();
  if (lVar1 != 0) {
    FUN_142116100(lVar1,(double)param_3,(double)param_4,param_5,param_6,param_7);
    UWidget::InvalidateLayoutAndVolatility(param_1);
    FUN_14215b1b0(param_1,param_2);
    FUN_142142860(param_1);
  }
  return;
}



// FUNCTION 142116100 FUN_142116100 body=1542 status=ok
// SIG undefined FUN_142116100(void)

/* WARNING: Removing unreachable block (ram,0x000142116389) */
/* WARNING: Removing unreachable block (ram,0x000142116487) */

void FUN_142116100(longlong param_1,double param_2,double param_3,int param_4,int param_5,
                  uint param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined8 local_res8;
  undefined8 local_res18;
  ulonglong local_118 [3];
  undefined1 local_100 [4];
  undefined8 local_fc;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined4 local_8c;
  undefined4 uStack_88;
  
  FUN_141f54cb0(param_1 + 0x388,*(undefined8 *)(param_1 + 0x378),param_1 + 0x28);
  uVar9 = *(int *)(param_1 + 0x6b4) - 1;
  *(uint *)(param_1 + 0x6e8) = param_6 & 0x7fffffff;
  *(int *)(param_1 + 0x6ec) = param_5;
  iVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x6a0) >> 0x20);
  dVar20 = (double)(int)*(undefined8 *)(param_1 + 0x6a0);
  local_res8 = CONCAT44(0x3f7fffff,uVar9);
  local_118[2] = local_res8;
  dVar16 = (dVar20 * param_2) / (double)iVar6;
  lVar7 = (longlong)dVar16;
  if (param_5 == 1) {
    dVar11 = dVar16;
    if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar16)) {
      auVar12._8_8_ = dVar16;
      auVar12._0_8_ = dVar16;
      uVar3 = movmskpd(iVar6,auVar12);
      dVar11 = (double)(longlong)(lVar7 - (ulonglong)(uVar3 & 1));
    }
    dVar16 = dVar16 - dVar11;
    dVar17 = dVar16;
    if ((0.0 < dVar16) && (dVar17 = 0.9999999403953552, dVar16 <= 0.9999999403953552)) {
      dVar17 = dVar16;
    }
    fVar10 = (float)dVar17;
    if (0.0 <= fVar10) {
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
    }
    else {
      fVar10 = 0.0;
    }
    fVar10 = 0.99999994 - fVar10;
    iVar8 = (int)ROUND((fVar10 + fVar10) - 0.5) >> 1;
    uVar3 = (uVar9 - (int)dVar11) + iVar8;
    fVar10 = fVar10 - (float)iVar8;
    if (0.0 <= fVar10) {
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      local_res8 = CONCAT44(fVar10,uVar3);
    }
    else {
      local_res8 = (ulonglong)uVar3;
    }
  }
  else {
    dVar11 = dVar16;
    if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar16)) {
      auVar13._8_8_ = dVar16;
      auVar13._0_8_ = dVar16;
      uVar3 = movmskpd(iVar6,auVar13);
      dVar11 = (double)(longlong)(lVar7 - (ulonglong)(uVar3 & 1));
    }
    dVar16 = dVar16 - dVar11;
    dVar17 = dVar16;
    if ((0.0 < dVar16) && (dVar17 = 0.9999999403953552, dVar16 <= 0.9999999403953552)) {
      dVar17 = dVar16;
    }
    fVar10 = (float)dVar17;
    if (0.0 <= fVar10) {
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      local_res8 = CONCAT44(fVar10,(int)dVar11);
    }
    else {
      local_res8 = (ulonglong)(uint)(int)dVar11;
    }
  }
  *(ulonglong *)(param_1 + 0x6ac) = local_res8;
  local_118[1] = *(undefined8 *)(param_1 + 0x6ac);
  local_118[0] = 0;
  uVar3 = (uint)local_118[1];
  if (((int)uVar3 < 0) ||
     ((local_res8._4_4_ = (float)(local_118[1] >> 0x20), uVar3 == 0 && (local_res8._4_4_ < 0.0)))) {
    puVar4 = local_118;
  }
  else if (((int)uVar3 < (int)uVar9) || ((uVar3 == uVar9 && (local_res8._4_4_ < 0.99999994)))) {
    puVar4 = local_118 + 1;
  }
  else {
    puVar4 = local_118 + 2;
  }
  uVar2 = *puVar4;
  *(ulonglong *)(param_1 + 0x6ac) = uVar2;
  dVar20 = (dVar20 * param_3) / (double)iVar6;
  lVar7 = (longlong)dVar20;
  dVar16 = dVar20;
  if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar20)) {
    auVar14._8_8_ = dVar20;
    auVar14._0_8_ = dVar20;
    uVar3 = movmskpd((int)uVar2,auVar14);
    dVar16 = (double)(longlong)(lVar7 - (ulonglong)(uVar3 & 1));
  }
  dVar20 = dVar20 - dVar16;
  uVar3 = (uint)dVar16;
  dVar16 = dVar20;
  if ((0.0 < dVar20) && (dVar16 = 0.9999999403953552, dVar20 <= 0.9999999403953552)) {
    dVar16 = dVar20;
  }
  fVar10 = (float)dVar16;
  if (0.0 <= fVar10) {
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    local_res8 = CONCAT44(fVar10,uVar3);
  }
  else {
    local_res8 = (ulonglong)uVar3;
  }
  local_118[1] = 0;
  local_118[0] = local_res8;
  if (((int)uVar3 < 0) || ((uVar3 == 0 && (local_res8._4_4_ < 0.0)))) {
    puVar4 = local_118 + 1;
  }
  else if (((int)uVar3 < (int)uVar9) || ((uVar3 == uVar9 && (local_res8._4_4_ < 0.99999994)))) {
    puVar4 = local_118;
  }
  else {
    puVar4 = local_118 + 2;
  }
  *(ulonglong *)(param_1 + 0x6b8) = *puVar4;
  iVar6 = param_4 * 2;
  if (param_5 != 2) {
    iVar6 = param_4;
  }
  *(int *)(param_1 + 0x6e0) = iVar6;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(bool *)(param_1 + 0x6f0) = param_5 != 1;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x388);
  if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
    local_118[0] = *(ulonglong *)(param_1 + 0x6ac);
    local_res18._4_4_ = (float)(local_118[0] >> 0x20);
    fVar10 = local_res18._4_4_ + 0.0;
    uVar9 = ((int)ROUND((fVar10 + fVar10) - 0.5) >> 1) + (int)local_118[0] +
            *(int *)(param_1 + 0x6a8);
    iVar6 = (int)fVar10;
    fVar15 = fVar10;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar10)) {
      auVar18._4_4_ = fVar10;
      auVar18._0_4_ = fVar10;
      auVar18._8_8_ = 0;
      uVar3 = movmskps(uVar9,auVar18);
      fVar15 = (float)(int)(iVar6 - (uVar3 & 1));
    }
    fVar10 = fVar10 - fVar15;
    if (0.0 <= fVar10) {
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      local_res8 = CONCAT44(fVar10,uVar9);
    }
    else {
      local_res8 = (ulonglong)uVar9;
    }
    local_res18._4_4_ = local_res18._4_4_ + 0.0;
    uVar9 = ((int)ROUND((local_res18._4_4_ + local_res18._4_4_) - 0.5) >> 1) + (int)local_118[0] +
            *(int *)(param_1 + 0x6a8);
    iVar6 = (int)local_res18._4_4_;
    fVar10 = local_res18._4_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != local_res18._4_4_)) {
      auVar19._4_4_ = local_res18._4_4_;
      auVar19._0_4_ = local_res18._4_4_;
      auVar19._8_8_ = 0;
      uVar3 = movmskps(uVar9,auVar19);
      fVar10 = (float)(int)(iVar6 - (uVar3 & 1));
    }
    local_res18._4_4_ = local_res18._4_4_ - fVar10;
    if (0.0 <= local_res18._4_4_) {
      if (0.99999994 <= local_res18._4_4_) {
        local_res18._4_4_ = 0.99999994;
      }
      local_res18 = CONCAT44(local_res18._4_4_,uVar9);
    }
    else {
      local_res18 = (ulonglong)uVar9;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x6c0);
    puVar5 = (undefined1 *)
             FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                       (local_100,local_res18,local_res8,*(undefined8 *)(param_1 + 0x6a0),0);
    local_8c = 0;
    uStack_88 = 0;
    local_f4 = puVar5[0xc];
    local_d8 = 0x3f800000;
    local_f0 = *(undefined8 *)(puVar5 + 0x10);
    local_e8 = *(undefined8 *)(puVar5 + 0x18);
    local_e0 = *(undefined4 *)(puVar5 + 0x20);
    local_100[0] = *puVar5;
    local_fc = *(undefined8 *)(puVar5 + 4);
    local_dc = *(undefined4 *)(puVar5 + 0x24);
    local_c0 = local_c0 & 0xc0;
    local_d0 = 0;
    local_c8 = 0x80000000;
    local_c4 = 0;
    local_cc = uVar1;
    FUN_141f4a590(param_1 + 0x388,local_100,param_1 + 0x28,DAT_146ae7800);
  }
  *(undefined4 *)(param_1 + 0x6c0) = 1;
  local_res8 = FWeakObjectPtr::Get(param_1 + 0x380);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (*(longlong *)(param_1 + 0x378) + 0x348,&local_res8);
  return;
}



// FUNCTION 142116710 PlaySound body=58 status=ok
// SIG undefined PlaySound(void)

void UUserWidget::PlaySound(undefined8 param_1,longlong param_2)

{
  longlong local_28 [2];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 != 0) {
    local_28[1] = 0;
    local_14 = 0;
    local_18 = 0xffffffff;
    local_28[0] = param_2;
    FSlateApplication::PlaySound(DAT_1469f4590,local_28,0);
  }
  return;
}



// FUNCTION 142116750 FUN_142116750 body=1504 status=ok
// SIG undefined FUN_142116750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_142116750(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  void *_Dst;
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  char cVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  char local_128;
  char local_127;
  byte local_126;
  char local_125;
  char local_124;
  int local_120;
  undefined1 local_118 [16];
  undefined1 *local_108;
  undefined8 local_100;
  uint local_f8;
  int local_f4;
  int local_f0;
  undefined1 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 *local_88;
  char *local_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  undefined8 local_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_98 = param_7;
  local_e8 = param_5;
  local_b8 = param_6;
  local_e0 = param_3;
  local_d8 = param_4;
  local_90 = param_2;
  TBitArray<FDefaultBitArrayAllocator>::Add(param_5);
  cVar16 = '\0';
  local_120 = 0;
  iVar9 = *(int *)(param_5 + 0x18) + -1;
  local_128 = '\0';
  if (0 < (int)param_2[1]) {
    bVar1 = (byte)iVar9 & 0x1f;
    local_f8 = 1 << bVar1 | 1U >> 0x20 - bVar1;
    local_a0 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
    local_b0 = 0;
    do {
      uVar6 = local_f8;
      iVar9 = local_120;
      plVar14 = (longlong *)0x0;
      puVar20 = (undefined8 *)(*param_2 + local_b0);
      local_d0 = 0;
      local_c8 = 0;
      if (*(int *)(param_1 + 0x630) != 0) {
        plVar14 = *(longlong **)(param_1 + 0x628);
      }
      local_c0 = puVar20;
      (**(code **)(*plVar14 + 0x38))(plVar14,*puVar20,&local_d0);
      local_126 = 0 < (int)local_c8;
      local_f0 = (int)param_2[1] + -1;
      puVar11 = *(undefined1 **)(param_5 + 0x10);
      if (*(undefined1 **)(param_5 + 0x10) == (undefined1 *)0x0) {
        puVar11 = param_5;
      }
      uVar10 = *(uint *)(puVar11 + local_a0);
      if (iVar9 == local_f0) {
        uVar10 = uVar10 & ~uVar6;
      }
      else {
        uVar10 = uVar10 | uVar6;
      }
      *(uint *)(puVar11 + local_a0) = uVar10;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x650),&local_f4,*puVar20);
      pcVar12 = (char *)0x0;
      if (local_f4 != -1) {
        pcVar12 = (char *)(*(longlong *)(param_1 + 0x650) + (longlong)local_f4 * 0x18);
      }
      pcVar8 = pcVar12 + 8;
      if (pcVar12 == (char *)0x0) {
        pcVar8 = (char *)0x0;
      }
      if (pcVar8 == (char *)0x0) {
        local_127 = '\0';
        cVar16 = '\0';
      }
      else {
        local_127 = *pcVar8;
        cVar16 = pcVar8[1];
      }
      if (param_8 != '\0') {
        iVar9 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
        }
        iVar19 = 0;
        local_100 = 0;
        *(undefined8 *)(*param_3 + (longlong)iVar9 * 8) = *puVar20;
        local_108 = (undefined1 *)0x0;
        if (local_118 != param_5) {
          iVar9 = *(int *)(param_5 + 0x18);
          uVar6 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU);
          iVar18 = 0;
          if ((uVar6 & 0xffffffe0) != 0) {
            local_100 = ((ulonglong)uVar6 & 0xffffffe0) << 0x20;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(local_118,0);
            iVar9 = *(int *)(param_5 + 0x18);
            iVar18 = local_100._4_4_;
          }
          local_100 = CONCAT44(local_100._4_4_,iVar9);
          iVar19 = 0;
          if (iVar9 != 0) {
            puVar11 = *(undefined1 **)(param_5 + 0x10);
            if (*(undefined1 **)(param_5 + 0x10) == (undefined1 *)0x0) {
              puVar11 = param_5;
            }
            puVar15 = local_118;
            if (local_108 != (undefined1 *)0x0) {
              puVar15 = local_108;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar15,puVar11,
                       (longlong)((int)(iVar18 + 0x1f + (iVar18 + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2)
            ;
            iVar19 = (int)local_100;
          }
        }
        puVar11 = local_108;
        local_68 = 0;
        local_60 = 0;
        uVar6 = iVar19 + 0x1f + (iVar19 + 0x1f >> 0x1f & 0x1fU);
        uVar10 = 0;
        iVar9 = 0;
        if ((uVar6 & 0xffffffe0) != 0) {
          local_60 = ((ulonglong)uVar6 & 0xffffffe0) << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(local_78,0);
          iVar9 = local_60._4_4_;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar19);
        uVar7 = 0;
        if (iVar19 != 0) {
          puVar15 = local_118;
          if (puVar11 != (undefined1 *)0x0) {
            puVar15 = puVar11;
          }
          puVar13 = local_78;
          if (local_68 != 0) {
            puVar13 = (undefined1 *)0x0;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((ulonglong)puVar13 | local_68),puVar15,
                     (longlong)((int)(iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2);
          uVar7 = (undefined4)local_60;
          iVar9 = local_60._4_4_;
        }
        uVar3 = local_68;
        if (local_120 == local_f0) {
          uVar10 = 2;
        }
        uVar6 = uVar10 | local_58 & 0xfffffffc | (uint)local_126;
        local_58 = uVar6;
        if (puVar11 != (undefined1 *)0x0) {
          FMemory::Free(puVar11);
        }
        iVar19 = (int)local_d8[1];
        *(int *)(local_d8 + 1) = iVar19 + 1;
        if (*(int *)((longlong)local_d8 + 0xc) < iVar19 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(local_d8,iVar19);
        }
        _Dst = (void *)(*local_d8 + (longlong)iVar19 * 0x28);
        *(undefined8 *)((longlong)_Dst + 0x10) = 0;
        if (uVar3 == 0) {
          _guard_xfg_dispatch_icall_nop(_Dst,local_78,0x10);
        }
        if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
          FMemory::Free();
        }
        *(ulonglong *)((longlong)_Dst + 0x10) = uVar3;
        *(undefined4 *)((longlong)_Dst + 0x18) = uVar7;
        *(int *)((longlong)_Dst + 0x1c) = iVar9;
        *(uint *)((longlong)_Dst + 0x20) = *(uint *)((longlong)_Dst + 0x20) & 0xfffffffc;
        *(uint *)((longlong)_Dst + 0x20) = *(uint *)((longlong)_Dst + 0x20) | uVar6 & 3;
        if (((*(int *)(param_1 + 0x3c8) != 0) &&
            (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar4 != '\0')) {
          if (*(int *)(param_1 + 0x3c8) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x3c0);
          }
          uVar7 = (**(code **)(*plVar14 + 0x38))();
          *(undefined4 *)(param_1 + 0x3b8) = uVar7;
        }
        puVar20 = local_c0;
        param_5 = local_e8;
        param_3 = local_e0;
        if ((*(int *)(param_1 + 0x3b8) != 0) &&
           (cVar4 = (**(code **)(*(longlong *)(param_1 + 0x430) + 0x10))
                              ((longlong *)(param_1 + 0x430),local_c0), param_5 = local_e8,
           param_3 = local_e0, cVar4 != '\0')) {
          FUN_14058cbf0(local_b8,local_a8,puVar20,0);
          param_5 = local_e8;
          param_3 = local_e0;
        }
      }
      cVar4 = local_127;
      if ((local_127 != '\0') || (cVar5 = '\0', cVar16 != '\0')) {
        if ((param_8 == '\0') || (local_127 == '\0')) {
          uVar17 = 0;
        }
        else {
          uVar17 = 1;
        }
        local_108 = (undefined1 *)0x0;
        local_100 = 0;
        if (local_118 != param_5) {
          iVar9 = *(int *)(param_5 + 0x18);
          uVar6 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU);
          iVar19 = 0;
          if ((uVar6 & 0xffffffe0) != 0) {
            local_100 = ((ulonglong)uVar6 & 0xffffffe0) << 0x20;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(local_118,0);
            iVar9 = *(int *)(param_5 + 0x18);
            iVar19 = local_100._4_4_;
          }
          local_100 = CONCAT44(local_100._4_4_,iVar9);
          if (iVar9 != 0) {
            puVar11 = *(undefined1 **)(param_5 + 0x10);
            if (*(undefined1 **)(param_5 + 0x10) == (undefined1 *)0x0) {
              puVar11 = param_5;
            }
            puVar15 = local_118;
            if (local_108 != (undefined1 *)0x0) {
              puVar15 = local_108;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar15,puVar11,
                       (longlong)((int)(iVar19 + 0x1f + (iVar19 + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2)
            ;
          }
        }
        uVar2 = local_98;
        local_138 = local_98;
        local_140 = local_b8;
        local_148 = local_118;
        local_130 = uVar17;
        cVar5 = FUN_142116750(param_1,&local_d0,param_3);
        if ((cVar4 != '\0') || (cVar5 != '\0')) {
          local_80 = &local_125;
          local_125 = cVar4;
          local_124 = cVar5;
          local_88 = puVar20;
          TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_>
                    (uVar2,local_a4,&local_88);
        }
      }
      if (((local_128 == '\0') && (cVar4 == '\0')) && (cVar5 == '\0')) {
        cVar16 = '\0';
      }
      else {
        cVar16 = '\x01';
      }
      local_128 = cVar16;
      if (local_d0 != 0) {
        FMemory::Free();
      }
      local_120 = local_120 + 1;
      local_b0 = local_b0 + 8;
      param_2 = local_90;
    } while (local_120 < (int)local_90[1]);
  }
  if (*(longlong *)(param_5 + 0x10) != 0) {
    FMemory::Free();
  }
  return cVar16;
}



// FUNCTION 142116d60 FUN_142116d60 body=332 status=ok
// SIG undefined FUN_142116d60(void)

void FUN_142116d60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *local_28;
  undefined8 *local_20;
  
  FUN_1417931d0();
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar6 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar5;
  if (lVar5 != lVar6) {
    do {
      lVar2 = operator_new(0x10);
      puVar3 = (undefined8 *)0x0;
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)FString::FString(lVar2,lVar5);
      }
      puVar4 = (undefined8 *)operator_new(0x18);
      local_20 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 1) = 1;
        *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
        *puVar4 = &PTR_DestroyObject_14413b698;
        puVar4[2] = puVar3;
        local_20 = puVar4;
      }
      local_28 = puVar3;
      SharedPointerInternals::EnableSharedFromThis(&local_28,puVar3,puVar3);
      iVar1 = *(int *)(param_1 + 0xc80);
      *(int *)(param_1 + 0xc80) = iVar1 + 1;
      if (*(int *)(param_1 + 0xc84) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xc78,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xc78));
      *puVar3 = local_28;
      puVar3[1] = local_20;
      local_20 = (undefined8 *)0x0;
      local_28 = (undefined8 *)0x0;
      if (*(longlong *)(param_1 + 0xc88) != 0) {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc88) + 0x3b0) + 0x208))();
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar6);
  }
  return;
}



// FUNCTION 142116eb0 PostLoad body=322 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UBackgroundBlur::PostLoad(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UPanelWidget::PostLoad();
  local_18 = _DAT_1464b0068;
  uStack_14 = uRam00000001464b006c;
  uStack_10 = uRam00000001464b0070;
  uStack_c = uRam00000001464b0074;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if (((iVar4 < 0xc) && (0 < *(int *)(param_1 + 0x108))) &&
     (lVar1 = **(longlong **)(param_1 + 0x100), lVar1 != 0)) {
    lVar6 = UBackgroundBlurSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      lVar6 = 0;
      uVar7 = UBackgroundBlurSlot::GetPrivateStaticClass();
      lVar8 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
      lVar2 = *(longlong *)(lVar1 + 0x30);
      *(longlong *)(lVar8 + 0x30) = lVar2;
      *(longlong *)(lVar2 + 0x28) = lVar8;
      *(longlong *)(lVar8 + 0x28) = param_1;
      **(longlong **)(param_1 + 0x100) = lVar8;
      iVar4 = *(int *)(lVar1 + 0xc);
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar9 = iVar4 >> 0x1f & 0xffff;
        uVar5 = iVar4 + uVar9;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
    }
  }
  return;
}



// FUNCTION 142117000 PostLoad body=227 status=ok
// SIG undefined PostLoad(void)

void UBorder::PostLoad(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  UPanelWidget::PostLoad();
  if ((0 < *(int *)(param_1 + 0x108)) && (lVar4 = **(longlong **)(param_1 + 0x100), lVar4 != 0)) {
    lVar2 = UBorderSlot::GetPrivateStaticClass();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      lVar4 = 0;
      uVar3 = UBorderSlot::GetPrivateStaticClass();
      lVar2 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
      if (0 < *(int *)(param_1 + 0x108)) {
        lVar4 = **(longlong **)(param_1 + 0x100);
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar4;
      *(longlong *)(lVar4 + 0x28) = lVar2;
      **(longlong **)(param_1 + 0x100) = lVar2;
    }
  }
  return;
}



// FUNCTION 1421170f0 PostLoad body=354 status=ok
// SIG undefined PostLoad(void)

void UButton::PostLoad(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  
  UPanelWidget::PostLoad();
  lVar6 = 0;
  if ((0 < *(int *)(param_1 + 0x108)) && (lVar5 = **(longlong **)(param_1 + 0x100), lVar5 != 0)) {
    lVar3 = UButtonSlot::GetPrivateStaticClass();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res8 = 0;
      uVar4 = UButtonSlot::GetPrivateStaticClass();
      lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
      if (0 < *(int *)(param_1 + 0x108)) {
        lVar6 = **(longlong **)(param_1 + 0x100);
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
      *(longlong *)(lVar5 + 0x30) = lVar6;
      *(longlong *)(lVar6 + 0x28) = lVar5;
      **(longlong **)(param_1 + 0x100) = lVar5;
    }
  }
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  lVar6 = DAT_1469eb160;
  if ((iVar2 < 0x18d) && (*(longlong *)(param_1 + 0x118) != 0)) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x28);
    if ((lVar5 != 0) &&
       ((plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28),
        plVar7 != (longlong *)0x0 &&
        (plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,&local_res8), *plVar8 == lVar6)))
       ) {
      FButtonStyle::operator=(param_1 + 0x120,plVar7);
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  return;
}



// FUNCTION 142117260 FUN_142117260 body=702 status=ok
// SIG undefined FUN_142117260(void)

void FUN_142117260(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  
  UPanelWidget::PostLoad();
  iVar5 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  lVar4 = DAT_1469eb150;
  if (iVar5 < 0x18d) {
    if (*(longlong *)(param_1 + 0x6b0) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x28);
      if (((lVar3 != 0) &&
          (plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28),
          plVar6 != (longlong *)0x0)) &&
         (plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,local_res10), *plVar7 == lVar4))
      {
        FCheckBoxStyle::operator=(param_1 + 0x130,plVar6);
      }
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      FUN_1406922e0(param_1 + 0x140,*(longlong *)(param_1 + 0x6b8) + 0x28);
      *(undefined8 *)(param_1 + 0x6b8) = 0;
    }
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      FUN_1406922e0(param_1 + 0x1c8,*(longlong *)(param_1 + 0x6c0) + 0x28);
      *(undefined8 *)(param_1 + 0x6c0) = 0;
    }
    if (*(longlong *)(param_1 + 0x6c8) != 0) {
      FUN_1406922e0(param_1 + 0x250,*(longlong *)(param_1 + 0x6c8) + 0x28);
      *(undefined8 *)(param_1 + 0x6c8) = 0;
    }
    if (*(longlong *)(param_1 + 0x6d0) != 0) {
      FUN_1406922e0(param_1 + 0x2d8,*(longlong *)(param_1 + 0x6d0) + 0x28);
      *(undefined8 *)(param_1 + 0x6d0) = 0;
    }
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      FUN_1406922e0(param_1 + 0x360,*(longlong *)(param_1 + 0x6d8) + 0x28);
      *(undefined8 *)(param_1 + 0x6d8) = 0;
    }
    if (*(longlong *)(param_1 + 0x6e0) != 0) {
      FUN_1406922e0(param_1 + 1000,*(longlong *)(param_1 + 0x6e0) + 0x28);
      *(undefined8 *)(param_1 + 0x6e0) = 0;
    }
    if (*(longlong *)(param_1 + 0x6e8) != 0) {
      FUN_1406922e0(param_1 + 0x470,*(longlong *)(param_1 + 0x6e8) + 0x28);
      *(undefined8 *)(param_1 + 0x6e8) = 0;
    }
    if (*(longlong *)(param_1 + 0x6f0) != 0) {
      FUN_1406922e0(param_1 + 0x4f8,*(longlong *)(param_1 + 0x6f0) + 0x28);
      *(undefined8 *)(param_1 + 0x6f0) = 0;
    }
    if (*(longlong *)(param_1 + 0x6f8) != 0) {
      FUN_1406922e0(param_1 + 0x580,*(longlong *)(param_1 + 0x6f8) + 0x28);
      *(undefined8 *)(param_1 + 0x6f8) = 0;
    }
  }
  iVar5 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar5 < 0x1d3) {
    pfVar2 = (float *)(param_1 + 0x718);
    *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_1 + 0x704);
    *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x70c);
    *(undefined8 *)(param_1 + 0x704) = 0;
    *(undefined8 *)(param_1 + 0x70c) = 0;
    if (((DAT_1464aa6c0 != *pfVar2) || (DAT_1464aa6c4 != *(float *)(param_1 + 0x71c))) ||
       ((DAT_1464aa6c8 != *(float *)(param_1 + 0x720) ||
        ((DAT_1464aa6cc != *(float *)(param_1 + 0x724) || (*(char *)(param_1 + 0x728) != '\0'))))))
    {
      FUN_140692440(param_1 + 0x640,pfVar2);
      local_28 = 0;
      local_38 = DAT_1464aa6c0;
      fStack_34 = DAT_1464aa6c4;
      fStack_30 = DAT_1464aa6c8;
      fStack_2c = DAT_1464aa6cc;
      local_20 = 0;
      plStack_18 = (longlong *)0x0;
      FUN_140692440(pfVar2,&local_38);
      plVar6 = plStack_18;
      if (plStack_18 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_18 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_18)(plStack_18);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_18 + 8))(plStack_18,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142117520 PostLoad body=74 status=ok
// SIG undefined PostLoad(void)

void UCircularThrobber::PostLoad(longlong param_1)

{
  int iVar1;
  
  UObject::PostLoad();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar1 < 0x18d) && (*(longlong *)(param_1 + 0x110) != 0)) {
    FUN_1406922e0(param_1 + 0x118,*(longlong *)(param_1 + 0x110) + 0x28);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  return;
}



// FUNCTION 142117570 FUN_142117570 body=382 status=ok
// SIG undefined FUN_142117570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142117570(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  UObject::PostLoad();
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar6 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar5;
  if (lVar5 != lVar6) {
    do {
      lVar2 = operator_new(0x10);
      puVar3 = (undefined8 *)0x0;
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)FString::FString(lVar2,lVar5);
      }
      puVar4 = (undefined8 *)operator_new(0x18);
      uStack_20 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 1) = 1;
        *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
        *puVar4 = &PTR_DestroyObject_14413b698;
        puVar4[2] = puVar3;
        uStack_20 = puVar4;
      }
      local_28 = puVar3;
      SharedPointerInternals::EnableSharedFromThis(&local_28,puVar3,puVar3);
      iVar1 = *(int *)(param_1 + 0xc80);
      *(int *)(param_1 + 0xc80) = iVar1 + 1;
      if (*(int *)(param_1 + 0xc84) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xc78,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xc78));
      *puVar3 = local_28;
      puVar3[1] = uStack_20;
      uStack_20 = (undefined8 *)0x0;
      local_28 = (undefined8 *)0x0;
      if (*(longlong *)(param_1 + 0xc88) != 0) {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc88) + 0x3b0) + 0x208))();
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar6);
  }
  local_28 = (undefined8 *)CONCAT44(uRam00000001464b006c,_DAT_1464b0068);
  uStack_20 = (undefined8 *)CONCAT44(uRam00000001464b0074,uRam00000001464b0070);
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_28);
  if (iVar1 < 7) {
    *(undefined1 *)(param_1 + 0xbc5) = 0;
  }
  return;
}



// FUNCTION 1421176f0 FUN_1421176f0 body=602 status=ok
// SIG undefined FUN_1421176f0(void)

void FUN_1421176f0(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 local_res10 [8];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined1 local_60 [56];
  longlong *local_28;
  
  UObject::PostLoad();
  iVar6 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  lVar4 = DAT_1469eb180;
  if (iVar6 < 0x18d) {
    if (*(longlong *)(param_1 + 0x368) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x368) + 0x28);
      if (((lVar3 != 0) &&
          (plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28),
          plVar7 != (longlong *)0x0)) &&
         (plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,local_res10), *plVar8 == lVar4))
      {
        FEditableTextStyle::operator=(param_1 + 0x150,plVar7);
      }
      *(undefined8 *)(param_1 + 0x368) = 0;
    }
    if (*(longlong *)(param_1 + 0x370) != 0) {
      FUN_1406922e0(param_1 + 0x1d0,*(longlong *)(param_1 + 0x370) + 0x28);
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    if (*(longlong *)(param_1 + 0x378) != 0) {
      FUN_1406922e0(param_1 + 600,*(longlong *)(param_1 + 0x378) + 0x28);
      *(undefined8 *)(param_1 + 0x378) = 0;
    }
    if (*(longlong *)(param_1 + 0x380) != 0) {
      FUN_1406922e0(param_1 + 0x2e0,*(longlong *)(param_1 + 0x380) + 0x28);
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
  }
  iVar6 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar6 < 0x1d3) {
    cVar5 = FSlateFontInfo::HasValidFont(param_1 + 0x388);
    if (cVar5 != '\0') {
      FUN_1417f9360(param_1 + 0x158,param_1 + 0x388);
      uVar9 = FUN_1417efd90(local_60);
      FUN_141925d20(param_1 + 0x388,uVar9);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_28 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
    pfVar2 = (float *)(param_1 + 0x3d8);
    if (((DAT_1464aa6e0 != *pfVar2) || (DAT_1464aa6e4 != *(float *)(param_1 + 0x3dc))) ||
       ((DAT_1464aa6e8 != *(float *)(param_1 + 0x3e0) ||
        ((DAT_1464aa6ec != *(float *)(param_1 + 0x3e4) || (*(char *)(param_1 + 1000) != '\0')))))) {
      FUN_140692440(param_1 + 0x1a8,pfVar2);
      local_78 = 0;
      local_88 = DAT_1464aa6e0;
      fStack_84 = DAT_1464aa6e4;
      fStack_80 = DAT_1464aa6e8;
      fStack_7c = DAT_1464aa6ec;
      local_70 = 0;
      plStack_68 = (longlong *)0x0;
      FUN_140692440(pfVar2,&local_88);
      plVar7 = plStack_68;
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_68 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_68)(plStack_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_68 + 8))(plStack_68,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142117950 FUN_142117950 body=864 status=ok
// SIG undefined FUN_142117950(void)

void FUN_142117950(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined1 local_60 [56];
  longlong *local_28;
  
  UObject::PostLoad();
  iVar5 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar5 < 0x18d) && (*(longlong *)(param_1 + 0x918) != 0)) {
    lVar6 = USlateWidgetStyleAsset::GetStyle<FScrollBarStyle>();
    if (lVar6 != 0) {
      FEditableTextBoxStyle::operator=(param_1 + 0x128,lVar6);
    }
    *(undefined8 *)(param_1 + 0x918) = 0;
  }
  iVar5 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar5 < 0x1d3) {
    cVar4 = FSlateFontInfo::HasValidFont(param_1 + 0x948);
    if (cVar4 != '\0') {
      FUN_1417f9360(param_1 + 0x360,param_1 + 0x948);
      uVar7 = FUN_1417efd90(local_60);
      FUN_141925d20(param_1 + 0x948,uVar7);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x9d0);
    *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x9d8);
    *(undefined8 *)(param_1 + 0x9d0) = 0;
    *(undefined8 *)(param_1 + 0x9d8) = 0;
    if ((((DAT_1464aa6e0 != *(float *)(param_1 + 0x998)) ||
         (DAT_1464aa6e4 != *(float *)(param_1 + 0x99c))) ||
        (DAT_1464aa6e8 != *(float *)(param_1 + 0x9a0))) ||
       (DAT_1464aa6ec != *(float *)(param_1 + 0x9a4))) {
      local_d8 = *(undefined4 *)(param_1 + 0x998);
      uStack_d4 = *(undefined4 *)(param_1 + 0x99c);
      uStack_d0 = *(undefined4 *)(param_1 + 0x9a0);
      uStack_cc = *(undefined4 *)(param_1 + 0x9a4);
      local_c8 = 0;
      local_c0 = 0;
      plStack_b8 = (longlong *)0x0;
      FUN_140692440(param_1 + 0x3b0,&local_d8);
      plVar1 = plStack_b8;
      if (plStack_b8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_b8 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b8)(plStack_b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_b8 + 8))(plStack_b8,1);
          }
        }
      }
      uVar7 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
      *(ulonglong *)(param_1 + 0x998) = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
      *(undefined8 *)(param_1 + 0x9a0) = uVar7;
    }
    if (((DAT_1464aa6c0 != *(float *)(param_1 + 0x9a8)) ||
        (DAT_1464aa6c4 != *(float *)(param_1 + 0x9ac))) ||
       ((DAT_1464aa6c8 != *(float *)(param_1 + 0x9b0) ||
        (DAT_1464aa6cc != *(float *)(param_1 + 0x9b4))))) {
      local_b0 = *(undefined4 *)(param_1 + 0x9a8);
      uStack_ac = *(undefined4 *)(param_1 + 0x9ac);
      uStack_a8 = *(undefined4 *)(param_1 + 0x9b0);
      uStack_a4 = *(undefined4 *)(param_1 + 0x9b4);
      local_a0 = 0;
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      FUN_140692440(param_1 + 0x3d8,&local_b0);
      plVar1 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_90 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
      uVar7 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
      *(ulonglong *)(param_1 + 0x9a8) = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
      *(undefined8 *)(param_1 + 0x9b0) = uVar7;
    }
    if (((DAT_1464aa6e0 != *(float *)(param_1 + 0x9b8)) ||
        (DAT_1464aa6e4 != *(float *)(param_1 + 0x9bc))) ||
       ((DAT_1464aa6e8 != *(float *)(param_1 + 0x9c0) ||
        (DAT_1464aa6ec != *(float *)(param_1 + 0x9c4))))) {
      local_88 = *(undefined4 *)(param_1 + 0x9b8);
      uStack_84 = *(undefined4 *)(param_1 + 0x9bc);
      uStack_80 = *(undefined4 *)(param_1 + 0x9c0);
      uStack_7c = *(undefined4 *)(param_1 + 0x9c4);
      local_78 = 0;
      local_70 = 0;
      plStack_68 = (longlong *)0x0;
      FUN_140692440(param_1 + 0x400,&local_88);
      plVar1 = plStack_68;
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_68 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_68)(plStack_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_68 + 8))(plStack_68,1);
          }
        }
      }
      uVar7 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
      *(ulonglong *)(param_1 + 0x9b8) = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
      *(undefined8 *)(param_1 + 0x9c0) = uVar7;
    }
  }
  return;
}



// FUNCTION 142117cb0 FUN_142117cb0 body=189 status=ok
// SIG undefined FUN_142117cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142117cb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
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
  longlong *plStack_18;
  
  UObject::PostLoad();
  local_48 = _DAT_1464b0088;
  uStack_44 = uRam00000001464b008c;
  uStack_40 = uRam00000001464b0090;
  uStack_3c = uRam00000001464b0094;
  iVar5 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_48);
  if (iVar5 < 0x19) {
    FUN_1417f9360(param_1 + 0x380,param_1 + 0x578);
    local_38 = *(undefined4 *)(param_1 + 0x5d8);
    uStack_34 = *(undefined4 *)(param_1 + 0x5dc);
    uStack_30 = *(undefined4 *)(param_1 + 0x5e0);
    uStack_2c = *(undefined4 *)(param_1 + 0x5e4);
    local_28 = 0;
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    FUN_140692440(param_1 + 0x3d0,&local_38);
    plVar4 = plStack_18;
    if (plStack_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_18 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_18)(plStack_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_18 + 8))(plStack_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142117d70 FUN_142117d70 body=171 status=ok
// SIG undefined FUN_142117d70(void)

void FUN_142117d70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_58 [56];
  longlong *local_20;
  
  UObject::PostLoad();
  iVar5 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar5 < 0x1d3) && (cVar4 = FSlateFontInfo::HasValidFont(param_1 + 0x348), cVar4 != '\0')) {
    FUN_1417f9360(param_1 + 0x168,param_1 + 0x348);
    uVar6 = FUN_1417efd90(local_58);
    FUN_141925d20(param_1 + 0x348,uVar6);
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
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142117e20 FUN_142117e20 body=843 status=ok
// SIG undefined FUN_142117e20(void)

void FUN_142117e20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined1 local_60 [56];
  longlong *local_28;
  
  UObject::PostLoad();
  iVar5 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar5 < 0x18d) && (*(longlong *)(param_1 + 0xb38) != 0)) {
    lVar6 = USlateWidgetStyleAsset::GetStyle<FScrollBarStyle>();
    if (lVar6 != 0) {
      FEditableTextBoxStyle::operator=(param_1 + 0x160,lVar6);
    }
    *(undefined8 *)(param_1 + 0xb38) = 0;
  }
  iVar5 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar5 < 0x1d3) {
    cVar4 = FSlateFontInfo::HasValidFont(param_1 + 0xb40);
    if (cVar4 != '\0') {
      FUN_1417f9360(param_1 + 0x398,param_1 + 0xb40);
      uVar7 = FUN_1417efd90(local_60);
      FUN_141925d20(param_1 + 0xb40,uVar7);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
    if ((((DAT_1464aa6e0 != *(float *)(param_1 + 0xb90)) ||
         (DAT_1464aa6e4 != *(float *)(param_1 + 0xb94))) ||
        (DAT_1464aa6e8 != *(float *)(param_1 + 0xb98))) ||
       (DAT_1464aa6ec != *(float *)(param_1 + 0xb9c))) {
      local_d8 = *(undefined4 *)(param_1 + 0xb90);
      uStack_d4 = *(undefined4 *)(param_1 + 0xb94);
      uStack_d0 = *(undefined4 *)(param_1 + 0xb98);
      uStack_cc = *(undefined4 *)(param_1 + 0xb9c);
      local_c8 = 0;
      local_c0 = 0;
      plStack_b8 = (longlong *)0x0;
      FUN_140692440(param_1 + 1000,&local_d8);
      plVar1 = plStack_b8;
      if (plStack_b8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_b8 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b8)(plStack_b8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_b8 + 8))(plStack_b8,1);
          }
        }
      }
      uVar7 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
      *(ulonglong *)(param_1 + 0xb90) = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
      *(undefined8 *)(param_1 + 0xb98) = uVar7;
    }
    if (((DAT_1464aa6c0 != *(float *)(param_1 + 0xba0)) ||
        (DAT_1464aa6c4 != *(float *)(param_1 + 0xba4))) ||
       ((DAT_1464aa6c8 != *(float *)(param_1 + 0xba8) ||
        (DAT_1464aa6cc != *(float *)(param_1 + 0xbac))))) {
      local_b0 = *(undefined4 *)(param_1 + 0xba0);
      uStack_ac = *(undefined4 *)(param_1 + 0xba4);
      uStack_a8 = *(undefined4 *)(param_1 + 0xba8);
      uStack_a4 = *(undefined4 *)(param_1 + 0xbac);
      local_a0 = 0;
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      FUN_140692440(param_1 + 0x410,&local_b0);
      plVar1 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_90 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
      uVar7 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
      *(ulonglong *)(param_1 + 0xba0) = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
      *(undefined8 *)(param_1 + 0xba8) = uVar7;
    }
    if (((DAT_1464aa6e0 != *(float *)(param_1 + 0xbb0)) ||
        (DAT_1464aa6e4 != *(float *)(param_1 + 0xbb4))) ||
       ((DAT_1464aa6e8 != *(float *)(param_1 + 3000) ||
        (DAT_1464aa6ec != *(float *)(param_1 + 0xbbc))))) {
      local_88 = *(undefined4 *)(param_1 + 0xbb0);
      uStack_84 = *(undefined4 *)(param_1 + 0xbb4);
      uStack_80 = *(undefined4 *)(param_1 + 3000);
      uStack_7c = *(undefined4 *)(param_1 + 0xbbc);
      local_78 = 0;
      local_70 = 0;
      plStack_68 = (longlong *)0x0;
      FUN_140692440(param_1 + 0x438,&local_88);
      plVar1 = plStack_68;
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_68 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_68)(plStack_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_68 + 8))(plStack_68,1);
          }
        }
      }
      uVar7 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
      *(ulonglong *)(param_1 + 0xbb0) = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
      *(undefined8 *)(param_1 + 3000) = uVar7;
    }
  }
  return;
}



// FUNCTION 142118170 PostLoad body=205 status=ok
// SIG undefined PostLoad(void)

void UPanelWidget::PostLoad(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  UObject::PostLoad();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    iVar5 = 1;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if ((*(longlong *)(lVar6 + lVar2) == 0) ||
         (*(longlong *)(*(longlong *)(lVar6 + lVar2) + 0x30) == 0)) {
        iVar1 = *(int *)(param_1 + 0x108);
        iVar3 = (iVar1 - iVar4) + -1;
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar4 * 8),(void *)(lVar2 + (longlong)iVar5 * 8),
                     (longlong)iVar3 << 3);
          iVar1 = *(int *)(param_1 + 0x108);
        }
        *(int *)(param_1 + 0x108) = iVar1 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x100);
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + -1;
        lVar6 = lVar6 + -8;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x108));
  }
  return;
}



// FUNCTION 142118240 PostLoad body=265 status=ok
// SIG undefined PostLoad(void)

void UProgressBar::PostLoad(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  
  UObject::PostLoad();
  iVar3 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  lVar2 = DAT_1469eb198;
  if (iVar3 < 0x18d) {
    if (*(longlong *)(param_1 + 0x2a0) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x28);
      if (((lVar1 != 0) &&
          (plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28),
          plVar4 != (longlong *)0x0)) &&
         (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_res10), *plVar5 == lVar2))
      {
        FProgressBarStyle::operator=(param_1 + 0x100,plVar4);
      }
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      FUN_1406922e0(param_1 + 0x108,*(longlong *)(param_1 + 0x2a8) + 0x28);
      *(undefined8 *)(param_1 + 0x2a8) = 0;
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      FUN_1406922e0(param_1 + 400,*(longlong *)(param_1 + 0x2b0) + 0x28);
      *(undefined8 *)(param_1 + 0x2b0) = 0;
    }
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      FUN_1406922e0(param_1 + 0x218,*(longlong *)(param_1 + 0x2b8) + 0x28);
      *(undefined8 *)(param_1 + 0x2b8) = 0;
    }
  }
  return;
}



// FUNCTION 142118350 PostLoad body=83 status=ok
// SIG undefined PostLoad(void)

void UScrollBar::PostLoad(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  UObject::PostLoad();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar1 < 0x18d) && (*(longlong *)(param_1 + 0x5d0) != 0)) {
    lVar2 = USlateWidgetStyleAsset::GetStyle<FScrollBarStyle>();
    if (lVar2 != 0) {
      FScrollBarStyle::operator=(param_1 + 0x100,lVar2);
    }
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
  return;
}



// FUNCTION 1421183b0 PostLoad body=200 status=ok
// SIG undefined PostLoad(void)

void UScrollBox::PostLoad(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  
  UPanelWidget::PostLoad();
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  lVar5 = DAT_1469eb200;
  if (iVar2 < 0x18d) {
    if (*(longlong *)(param_1 + 0x810) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x810) + 0x28);
      if (((lVar1 != 0) &&
          (plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28),
          plVar3 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,local_res10), *plVar4 == lVar5))
      {
        FScrollBoxStyle::operator=(param_1 + 0x118,plVar3);
      }
      *(undefined8 *)(param_1 + 0x810) = 0;
    }
    if (*(longlong *)(param_1 + 0x818) != 0) {
      lVar5 = USlateWidgetStyleAsset::GetStyle<FScrollBarStyle>();
      if (lVar5 != 0) {
        FScrollBarStyle::operator=(param_1 + 0x340,lVar5);
      }
      *(undefined8 *)(param_1 + 0x818) = 0;
    }
  }
  return;
}



// FUNCTION 142118480 PostLoad body=148 status=ok
// SIG undefined PostLoad(void)

void USpinBox::PostLoad(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  
  UObject::PostLoad();
  iVar3 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  lVar2 = DAT_1469eb1d0;
  if ((iVar3 < 0x18d) && (*(longlong *)(param_1 + 0x400) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x400) + 0x28);
    if ((lVar1 != 0) &&
       ((plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28),
        plVar4 != (longlong *)0x0 &&
        (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,local_res10), *plVar5 == lVar2)))
       ) {
      FSpinBoxStyle::operator=(param_1 + 0x118,plVar4);
    }
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  return;
}



// FUNCTION 142118520 PostLoad body=74 status=ok
// SIG undefined PostLoad(void)

void UThrobber::PostLoad(longlong param_1)

{
  int iVar1;
  
  UObject::PostLoad();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar1 < 0x18d) && (*(longlong *)(param_1 + 0x108) != 0)) {
    FUN_1406922e0(param_1 + 0x110,*(longlong *)(param_1 + 0x108) + 0x28);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 142118570 FUN_142118570 body=268 status=ok
// SIG undefined FUN_142118570(void)

void FUN_142118570(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 local_28 [32];
  
  UObject::PostLoad();
  if ((((*(uint *)(param_1 + 8) >> 5 & 1) != 0) && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) {
    lVar4 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(longlong *)(lVar1 + 0x348) = param_1;
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_28,param_1);
      FSoftObjectPath::operator=(lVar1 + 0x330,uVar5);
      FWeakObjectPtr::operator=(lVar1 + 800,param_1);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar1 + 0x328) = DAT_1464b56f4;
      plVar2 = *(longlong **)(lVar1 + 0x348);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,lVar1,1);
      }
      *(byte *)(lVar1 + 0x2e8) = *(byte *)(lVar1 + 0x2e8) & 0xfb;
      bVar6 = 0;
      if (*(longlong *)(lVar1 + 0x330) != 0) {
        bVar6 = 4;
      }
      *(byte *)(lVar1 + 0x2e8) = *(byte *)(lVar1 + 0x2e8) | bVar6;
    }
  }
  return;
}



// FUNCTION 142118680 PostLoad body=56 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UWidgetAnimation::PostLoad(longlong param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_1464b00f8;
  uStack_14 = uRam00000001464b00fc;
  uStack_10 = uRam00000001464b0100;
  uStack_c = uRam00000001464b0104;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(_DAT_1464b00f8,&local_18);
  if (iVar1 < 9) {
    *(undefined1 *)(param_1 + 0x380) = 0;
  }
  ULandscapeSplineControlPoint::PostLoad(param_1);
  return;
}



// FUNCTION 1421186c0 FUN_1421186c0 body=313 status=ok
// SIG undefined FUN_1421186c0(void)

void FUN_1421186c0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  FUN_1422f5440();
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x2e0) + 8);
    *puVar1 = *puVar1 & 0xfffbffff;
  }
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar2 < 0x1a0) {
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar5 < DAT_146ae8728) && (_Init_thread_header(&DAT_146ae8728), DAT_146ae8728 == -1)) {
      FName::FName(&DAT_146ae8720,L"Visiblity",1);
      _Init_thread_footer(&DAT_146ae8728);
    }
    if ((*piVar5 < DAT_146ae8738) && (_Init_thread_header(&DAT_146ae8738), DAT_146ae8738 == -1)) {
      FName::FName(&DAT_146ae8730,L"Visibility",1);
      _Init_thread_footer(&DAT_146ae8738);
    }
    lVar3 = *(longlong *)(param_1 + 0x2f0);
    lVar4 = (longlong)*(int *)(param_1 + 0x2f8) * 0x50 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x50) {
      if (*(longlong *)(lVar3 + 0x10) == DAT_146ae8720) {
        *(undefined8 *)(lVar3 + 0x10) = DAT_146ae8730;
      }
    }
  }
  return;
}



// FUNCTION 142118800 PostLoad body=227 status=ok
// SIG undefined PostLoad(void)

void UWindowTitleBarArea::PostLoad(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  UPanelWidget::PostLoad();
  if ((0 < *(int *)(param_1 + 0x108)) && (lVar4 = **(longlong **)(param_1 + 0x100), lVar4 != 0)) {
    lVar2 = UWindowTitleBarAreaSlot::GetPrivateStaticClass();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      lVar4 = 0;
      uVar3 = UWindowTitleBarAreaSlot::GetPrivateStaticClass();
      lVar2 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
      if (0 < *(int *)(param_1 + 0x108)) {
        lVar4 = **(longlong **)(param_1 + 0x100);
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar4;
      *(longlong *)(lVar4 + 0x28) = lVar2;
      **(longlong **)(param_1 + 0x100) = lVar2;
    }
  }
  return;
}



// FUNCTION 1421188f0 FUN_1421188f0 body=385 status=ok
// SIG undefined FUN_1421188f0(void)

void FUN_1421188f0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0x7f;
    UUserWidget::ShouldSerializeWidgetTree();
  }
  else {
    cVar6 = UUserWidget::ShouldSerializeWidgetTree();
    if (cVar6 == '\0') {
      *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0x7f;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + 8);
      *puVar1 = *puVar1 | 0x40;
    }
    else {
      *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) | 0x80;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + 8);
      *puVar1 = *puVar1 & 0xffffffbf;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar8 = UWidgetBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (iVar11 = 0, 0 < *(int *)(param_1 + 0x198))) {
      iVar12 = 1;
      lVar8 = 0;
      plVar2 = (longlong *)(param_1 + 400);
      do {
        plVar9 = *(longlong **)(lVar4 + 0x310);
        plVar3 = plVar9 + *(int *)(lVar4 + 0x318);
        if (plVar9 != plVar3) {
          do {
            if (*plVar9 == *(longlong *)(lVar8 + *plVar2)) goto LAB_142118a35;
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar3);
        }
        iVar7 = *(int *)(param_1 + 0x198);
        iVar10 = (iVar7 - iVar11) + -1;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar11 * 0x10 + *plVar2),
                     (void *)((longlong)iVar12 * 0x10 + *plVar2),(longlong)iVar10 << 4);
          iVar7 = *(int *)(param_1 + 0x198);
        }
        *(int *)(param_1 + 0x198) = iVar7 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar2);
        iVar11 = iVar11 + -1;
        iVar12 = iVar12 + -1;
        lVar8 = lVar8 + -0x10;
LAB_142118a35:
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar11 < *(int *)(param_1 + 0x198));
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142118a80 FUN_142118a80 body=221 status=ok
// SIG undefined FUN_142118a80(void)

undefined8 FUN_142118a80(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  local_28 = param_2[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar6 = (**(code **)(*param_1 + 0x558))(param_1,&local_38,0);
  local_20 = *param_2;
  local_18 = param_2[1];
  local_10 = param_2[2];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  cVar7 = (**(code **)(*param_1 + 0x560))(param_1,&local_20);
  if ((cVar6 == '\0') && (cVar7 == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  plVar4 = (longlong *)param_2[2];
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
  return uVar8;
}



// FUNCTION 142118b60 FUN_142118b60 body=558 status=ok
// SIG undefined FUN_142118b60(void)

ulonglong FUN_142118b60(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 *local_res20;
  undefined4 *local_b8;
  undefined **local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined2 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [56];
  
  if ((DAT_1469f4590 == 0) || (*(longlong *)(param_1 + 0x2e0) == 0)) {
    plVar6 = (longlong *)param_2[2];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = (int)lVar5 - 1;
      register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar8;
      if (uVar8 == 0) {
        register0x00000020 = (BADSPACEBASE *)(**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          register0x00000020 = (BADSPACEBASE *)(**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    return (ulonglong)register0x00000020 & 0xffffffffffffff00;
  }
  local_90 = *param_2;
  local_88 = param_2[1];
  local_80 = param_2[2];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  uVar9 = FUN_1417ad0d0();
  FInputKeyManager::GetCodesFromKey(uVar9,&local_90,&local_b8,&local_res20);
  bVar12 = local_res20 != (undefined4 *)0x0;
  if (local_b8 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *local_b8;
  }
  if (local_res20 == (undefined4 *)0x0) {
    lVar5 = *param_2;
    uVar11 = 0;
    if (lVar5 == DAT_1469e98f8) {
      uVar11 = 9;
    }
    else if (lVar5 == DAT_1469e98e0) {
      uVar11 = 8;
    }
    else {
      if (lVar5 != DAT_1469e9910) goto LAB_142118c39;
      uVar11 = 10;
    }
    bVar12 = true;
  }
  else {
    uVar11 = *local_res20;
  }
LAB_142118c39:
  uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8);
  local_78 = *param_2;
  local_70 = param_2[1];
  local_68 = param_2[2];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  FKeyEvent::FKeyEvent(local_60,&local_78,param_1 + 0x338,uVar4,param_3,uVar10,uVar11);
  bVar7 = FUN_1418b3200(DAT_1469f4590,local_60);
  if (bVar12) {
    local_a4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8);
    local_a8 = *(undefined2 *)(param_1 + 0x338);
    local_b0 = &PTR_FUN_144d565a8;
    local_a0 = 0;
    local_98 = (undefined2)uVar11;
    local_a6 = param_3;
    bVar7 = FUN_1418b2f50(DAT_1469f4590,&local_b0);
    local_b0 = &PTR_FUN_144d56560;
    FUN_1418613e0(local_60);
    FKey::~FKey(param_2);
  }
  else {
    FUN_1418613e0(local_60);
    FKey::~FKey(param_2);
  }
  return (ulonglong)bVar7;
}



// FUNCTION 142118d90 FUN_142118d90 body=768 status=ok
// SIG undefined FUN_142118d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142118d90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_4b8 [32];
  undefined1 *local_498;
  longlong *local_490;
  longlong *local_488;
  undefined4 local_480;
  longlong local_478;
  undefined1 local_468 [4];
  undefined1 local_464 [4];
  longlong local_460;
  longlong local_458;
  longlong local_450;
  undefined1 local_448 [32];
  undefined1 local_428 [112];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [320];
  longlong *local_270;
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  undefined1 local_250 [320];
  longlong *local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  if ((DAT_1469f4590 == 0) || (*(longlong *)(param_1 + 0x2e0) == 0)) {
    plVar3 = (longlong *)param_2[2];
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
  }
  else {
    plVar3 = (longlong *)(param_1 + 0x340);
    if (*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x374)) {
      lVar4 = *param_2;
      lVar6 = *(longlong *)(param_1 + 0x380);
      if (*(longlong *)(param_1 + 0x380) == 0) {
        lVar6 = param_1 + 0x378;
      }
      iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                               (longlong)*(int *)(param_1 + 0x388) - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)((longlong)iVar5 * 0x20 + *plVar3) == lVar4) {
            if (iVar5 != -1) goto LAB_14211902a;
            break;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *plVar3);
        } while (iVar5 != -1);
      }
    }
    FUN_1417aacf0(plVar3,local_464,param_2,0);
    if (*(int *)(param_1 + 800) < 1) {
      uVar7 = FUN_1420f1f20(param_1,local_258);
      FUN_1417f3670(local_448,uVar7);
      FUN_14188ce90(param_1 + 0x318,local_448);
      FUN_1420d83e0(local_448);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_108);
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      FUN_140456b10(local_250);
    }
    local_468[0] = DAT_1464b9ee8;
    local_498 = local_468;
    FWeakWidgetPath::ToWidgetPath(param_1 + 0x318,local_3b8,0,0);
    local_460 = *param_2;
    local_458 = param_2[1];
    local_450 = param_2[2];
    if (local_450 != 0) {
      LOCK();
      *(int *)(local_450 + 8) = *(int *)(local_450 + 8) + 1;
      UNLOCK();
    }
    local_498 = (undefined1 *)(param_1 + 0x428);
    local_478 = param_1 + 0x338;
    local_488 = &local_460;
    local_480 = 0;
    local_490 = plVar3;
    FUN_1418892a0(local_428,*(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8),
                  (longlong)*(float *)(param_1 + 0x2f4),param_1 + 0x420);
    FUN_1418be8d0(DAT_1469f4590,local_f8,local_3b8,local_428);
    FUN_140438c20(local_f8);
    FPointerEvent::~FPointerEvent(local_428);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_268);
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_270 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar2 = (int *)((longlong)local_270 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
    FUN_140456b10(local_3b0);
LAB_14211902a:
    FKey::~FKey(param_2);
  }
  return;
}



// FUNCTION 142119090 PrivateAllocateWidget body=106 status=ok
// SIG undefined PrivateAllocateWidget(void)

longlong * TWidgetAllocator<SImage,0>::PrivateAllocateWidget(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x450);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144044b48;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1420ccdf0();
    }
  }
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
  Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>(param_1);
  return param_1;
}



// FUNCTION 142119100 Private_ClearSelection body=37 status=ok
// SIG undefined Private_ClearSelection(void)

void SListView<UObject_*>::Private_ClearSelection(longlong param_1)

{
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
            (param_1 + 0x128,0);
  FInertialScrollManager::ClearScrollVelocity(param_1 + -0x50);
  return;
}



// FUNCTION 142119190 Private_GetSelectionMode body=88 status=ok
// SIG undefined Private_GetSelectionMode(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SListView<UObject_*>::Private_GetSelectionMode(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + -0x68) == 0) {
    return (ulonglong)*(uint *)(param_1 + -0x78);
  }
  if (*(longlong **)(param_1 + -0x70) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x70) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x68) != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + -0x70) + 0x38))();
        *(int *)(param_1 + -0x78) = (int)uVar3;
        return uVar3;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(undefined4 *)(param_1 + -0x78) = uVar2;
    }
  }
  return (ulonglong)*(uint *)(param_1 + -0x78);
}



// FUNCTION 142119220 Private_IsItemExpanded body=95 status=ok
// SIG undefined Private_IsItemExpanded(void)

longlong STreeView<UObject_*>::Private_IsItemExpanded(longlong param_1)

{
  char *pcVar1;
  uint7 uVar2;
  char *pcVar3;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x220),local_res8);
  pcVar3 = (char *)0x0;
  if (local_res8[0] != -1) {
    pcVar3 = (char *)(*(longlong *)(param_1 + 0x220) + (longlong)local_res8[0] * 0x18);
  }
  pcVar1 = pcVar3 + 8;
  if (pcVar3 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  uVar2 = (uint7)((ulonglong)pcVar1 >> 8);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142119280 Private_IsItemSelected body=75 status=ok
// SIG undefined Private_IsItemSelected(void)

undefined8 SListView<UObject_*>::Private_IsItemSelected(longlong param_1,undefined8 *param_2)

{
  int local_res8 [8];
  
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
            ((longlong *)(param_1 + 0x128),local_res8,*param_2);
  if (local_res8[0] != -1) {
    return CONCAT71((int7)(int3)((uint)local_res8[0] >> 8),
                    (longlong)local_res8[0] * 0x10 + *(longlong *)(param_1 + 0x128) != 0);
  }
  return 0xffffffffffffff00;
}



// FUNCTION 142119300 Private_ItemFromWidget body=87 status=ok
// SIG undefined Private_ItemFromWidget(void)

longlong SListView<UObject_*>::Private_ItemFromWidget(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x60),local_res8);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)local_res8[0] * 0x18;
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 142119360 FUN_142119360 body=224 status=ok
// SIG undefined FUN_142119360(void)

void FUN_142119360(longlong param_1)

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
    (**(code **)(*plVar8 + 0x48))(plVar8,local_res10,cVar4 == '\0');
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



// FUNCTION 142119440 FUN_142119440 body=121 status=ok
// SIG undefined FUN_142119440(void)

void FUN_142119440(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x210) != 0) && (*(longlong **)(param_1 + 0x208) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x210) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x208);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3);
      (**(code **)(*(longlong *)(param_1 + -0x430) + 0x278))();
    }
  }
  return;
}



// FUNCTION 1421194c0 Private_OnItemClicked body=26 status=ok
// SIG undefined Private_OnItemClicked(void)

bool SListView<UObject_*>::Private_OnItemClicked(longlong param_1)

{
  char cVar1;
  
  cVar1 = TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x1b8);
  return cVar1 != '\0';
}



// FUNCTION 1421194e0 Private_OnItemDoubleClicked body=26 status=ok
// SIG undefined Private_OnItemDoubleClicked(void)

bool SListView<UObject_*>::Private_OnItemDoubleClicked(longlong param_1)

{
  char cVar1;
  
  cVar1 = TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x1c8);
  return cVar1 != '\0';
}



// FUNCTION 142119520 Private_SelectRangeFromCurrentTo body=335 status=ok
// SIG undefined Private_SelectRangeFromCurrentTo(void)

void SListView<UObject_*>::Private_SelectRangeFromCurrentTo(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  plVar4 = (longlong *)0x0;
  iVar8 = 0;
  if (((*(int *)(param_1 + -0x68) != 0) && (*(longlong **)(param_1 + -0x70) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x70) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + -0x68) != 0) {
      plVar4 = *(longlong **)(param_1 + -0x70);
    }
    uVar3 = (**(code **)(*plVar4 + 0x38))();
    *(undefined4 *)(param_1 + -0x78) = uVar3;
  }
  if (*(int *)(param_1 + -0x78) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x188);
    if (*(longlong *)(param_1 + 0x180) != 0) {
      plVar1 = (longlong *)*plVar4;
      for (plVar5 = plVar1; plVar5 != plVar1 + (int)plVar4[1]; plVar5 = plVar5 + 1) {
        if (*plVar5 == *(longlong *)(param_1 + 0x180)) {
          iVar8 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
          goto LAB_1421195a8;
        }
      }
      iVar8 = -1;
    }
LAB_1421195a8:
    plVar1 = (longlong *)*plVar4;
    iVar9 = (int)plVar4[1];
    for (plVar5 = plVar1; plVar5 != plVar1 + iVar9; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) {
        iVar6 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
        goto LAB_1421195d3;
      }
    }
    iVar6 = -1;
LAB_1421195d3:
    if (iVar8 < 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar9;
      if (iVar8 < iVar9) {
        iVar11 = iVar8;
      }
    }
    iVar8 = 0;
    if ((-1 < iVar6) && (iVar8 = iVar9, iVar6 < iVar9)) {
      iVar8 = iVar6;
    }
    iVar9 = iVar8;
    if (iVar11 <= iVar8) {
      iVar9 = iVar11;
      iVar11 = iVar8;
    }
    if (iVar9 <= iVar11) {
      lVar7 = (longlong)iVar9 << 3;
      uVar10 = (ulonglong)((iVar11 - iVar9) + 1);
      do {
        FUN_14058cbf0(param_1 + 0x128,local_res8,*plVar4 + lVar7,0);
        lVar7 = lVar7 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    FInertialScrollManager::ClearScrollVelocity(param_1 + -0x50);
  }
  return;
}



// FUNCTION 142119670 FUN_142119670 body=390 status=ok
// SIG undefined FUN_142119670(void)

void FUN_142119670(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  longlong *local_38;
  undefined4 *local_30;
  
  local_res10 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x220,&local_res18,param_2);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (local_res18 != -1) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x220) + (longlong)local_res18 * 0x18);
  }
  plVar3 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = plVar6;
  }
  cVar2 = '\0';
  if (plVar3 == (longlong *)0x0) {
    if (param_3 == '\0') {
      return;
    }
    local_res18 = (uint)local_res18._2_2_ << 0x10;
  }
  else {
    cVar2 = (char)*plVar3;
    local_res18 = (uint)CONCAT21(local_res18._2_2_,*(undefined1 *)((longlong)plVar3 + 1)) << 8;
  }
  local_38 = &local_res10;
  local_res18 = CONCAT31(local_res18._1_3_,param_3);
  local_30 = &local_res18;
  TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_>
            (param_1 + 0x220,local_res8,&local_38,0);
  if (cVar2 != param_3) {
    if (cVar2 != '\0') {
      plVar5 = *(longlong **)(param_1 + 0x280);
      for (plVar3 = plVar5; plVar3 != plVar5 + *(int *)(param_1 + 0x288); plVar3 = plVar3 + 1) {
        if (*plVar3 == local_res10) {
          iVar4 = (int)((longlong)plVar3 - (longlong)plVar5 >> 3);
          if (iVar4 != -1) {
            local_38 = (longlong *)CONCAT44(local_38._4_4_,iVar4);
            local_30 = (undefined4 *)(param_1 + -0x430);
            cVar2 = FUN_1420cc8e0(param_1 + 0x128,&local_38);
            if (cVar2 != '\0') {
              FUN_142135140((undefined4 *)(param_1 + -0x430),local_res10,3);
            }
          }
          break;
        }
      }
    }
    lVar1 = local_res10;
    if (((*(int *)(param_1 + 0x298) != 0) && (*(longlong **)(param_1 + 0x290) != (longlong *)0x0))
       && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x290) + 0x18))(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x298) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x290);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,lVar1,param_3);
    }
    (**(code **)(*(longlong *)(param_1 + -0x430) + 0x278))();
  }
  return;
}



// FUNCTION 142119800 Private_SetItemSelection body=166 status=ok
// SIG undefined Private_SetItemSelection(void)

void SListView<UObject_*>::Private_SetItemSelection
               (longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = param_2;
  if ((*(int *)(param_1 + -0x68) != 0) && (*(longlong **)(param_1 + -0x70) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x70) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x68) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x70);
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined4 *)(param_1 + -0x78) = uVar2;
    }
  }
  if (*(int *)(param_1 + -0x78) != 0) {
    if (param_3 == '\0') {
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (param_1 + 0x128,param_2);
    }
    else {
      FUN_14058cbf0(param_1 + 0x128,local_res8,&local_res10,0);
    }
    if (param_4 != '\0') {
      *(undefined8 *)(param_1 + 0x178) = param_2;
      *(undefined8 *)(param_1 + 0x180) = param_2;
    }
    FInertialScrollManager::ClearScrollVelocity(param_1 + -0x50);
  }
  return;
}



// FUNCTION 1421198b0 FUN_1421198b0 body=365 status=ok
// SIG undefined FUN_1421198b0(void)

void FUN_1421198b0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  uint *puVar9;
  int iStack_14;
  
  plVar7 = (longlong *)0x0;
  uVar8 = 0;
  if (((*(int *)(param_1 + -0x68) != 0) && (*(longlong **)(param_1 + -0x70) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x70) + 0x18))(), cVar2 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + -0x68) != 0) {
      plVar6 = *(longlong **)(param_1 + -0x70);
    }
    uVar3 = (**(code **)(*plVar6 + 0x38))();
    *(undefined4 *)(param_1 + -0x78) = uVar3;
  }
  if (((*(int *)(param_1 + -0x78) != 0) && (*(int *)(param_1 + 0x1b0) != 0)) &&
     ((*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0 &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x18))(), cVar2 != '\0')))) {
    if (0 < *(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x15c)) {
      iVar1 = *(int *)(param_1 + 0x150);
      iStack_14 = 0;
      if (iVar1 != 0) {
        puVar9 = *(uint **)(param_1 + 0x148);
        if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x138);
        }
        uVar4 = *puVar9;
        plVar6 = plVar7;
        while (uVar4 == 0) {
          iVar5 = (int)plVar7;
          uVar8 = (int)plVar6 + 0x20;
          plVar6 = (longlong *)(ulonglong)uVar8;
          plVar7 = (longlong *)(ulonglong)(iVar5 + 1);
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1421199d7;
          uVar4 = puVar9[(longlong)iVar5 + 1];
        }
        uVar4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uVar4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_14 = (uVar8 - iVar5) + 0x1f;
        if (iVar1 < iStack_14) {
LAB_1421199d7:
          iStack_14 = iVar1;
        }
      }
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x128) + (longlong)iStack_14 * 0x10);
    }
    TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
              (param_1 + 0x1a8,plVar7,param_2);
  }
  return;
}



// FUNCTION 142119a20 FUN_142119a20 body=415 status=ok
// SIG undefined FUN_142119a20(void)

void FUN_142119a20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int local_res8 [2];
  longlong *local_28;
  longlong *local_20;
  
  plVar11 = (longlong *)0x0;
  plVar8 = plVar11;
  plVar10 = plVar11;
  if (0 < (int)param_1[0x19]) {
    do {
      uVar3 = *(undefined8 *)((longlong)plVar10 + param_1[0x18]);
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 1,local_res8,uVar3);
      plVar6 = plVar11;
      if (local_res8[0] != -1) {
        plVar6 = (longlong *)((longlong)local_res8[0] * 0x20 + param_1[1]);
      }
      plVar9 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar9 = plVar11;
      }
      if (plVar9 != (longlong *)0x0) {
        local_28 = (longlong *)*plVar9;
        local_20 = (longlong *)plVar9[1];
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 1,uVar3);
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0xb,local_28);
        if (*param_1 != 0) {
          (**(code **)(*local_28 + 8))();
          lVar4 = *param_1;
          if (((*(int *)(lVar4 + 0x540) != 0) && (*(longlong **)(lVar4 + 0x538) != (longlong *)0x0))
             && (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x538) + 0x18))(), cVar5 != '\0')) {
            plVar6 = plVar11;
            if (*(int *)(lVar4 + 0x540) != 0) {
              plVar6 = *(longlong **)(lVar4 + 0x538);
            }
            (**(code **)(*plVar6 + 0x40))(plVar6,&local_28);
          }
        }
        plVar6 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_20 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_20)(local_20);
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
      }
      uVar7 = (int)plVar8 + 1;
      plVar8 = (longlong *)(ulonglong)uVar7;
      plVar10 = plVar10 + 1;
    } while ((int)uVar7 < (int)param_1[0x19]);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(uint *)((longlong)param_1 + 0xcc) < 0x80000000) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  return;
}



// FUNCTION 142119bc0 ProjectWorldLocationToWidgetPosition body=66 status=ok
// SIG undefined ProjectWorldLocationToWidgetPosition(void)

void UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18 [2];
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  FUN_142119c10(local_28,&local_28,local_18);
  *param_3 = local_18[0];
  return;
}



// FUNCTION 142119c10 FUN_142119c10 body=480 status=ok
// SIG undefined FUN_142119c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142119c10(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_1 == 0) {
LAB_142119dcb:
    *param_3 = _DAT_1468b5d90;
    *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
    return 0;
  }
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  cVar2 = FUN_1427135c0((int)local_38,&local_38,&local_48,0);
  if (cVar2 == '\0') goto LAB_142119dcb;
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 != 0) {
    cVar2 = UWorld::IsGameWorld(lVar3);
    if (cVar2 != '\0') {
      lVar3 = UWorld::GetGameViewport(lVar3);
      if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0xb0), plVar1 != (longlong *)0x0)) {
        FUN_142481d50(lVar3,&local_res8);
        (**(code **)(*plVar1 + 0x110))
                  (plVar1,local_res20,
                   CONCAT44((float)((int)ROUND(local_44 * 2.0 + 0.5) >> 1) / local_res8._4_4_,
                            (float)((int)ROUND(local_48 * 2.0 + 0.5) >> 1) / (float)local_res8));
        local_res8 = CONCAT44((float)local_res20._4_4_,(float)local_res20._0_4_);
        uVar4 = CONCAT44((float)local_res20._4_4_,(float)local_res20._0_4_);
        goto LAB_142119d72;
      }
    }
  }
  uVar4 = 0;
LAB_142119d72:
  FUN_1420de980(param_1,uVar4,local_res20,&local_res8);
  *(float *)param_3 = (float)local_res8;
  *(undefined4 *)(param_3 + 1) = local_40;
  *(float *)((longlong)param_3 + 4) = local_res8._4_4_;
  return 1;
}



// FUNCTION 142119df0 FUN_142119df0 body=455 status=ok
// SIG undefined FUN_142119df0(void)

void FUN_142119df0(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  UBlueprintGeneratedClass::PurgeClass(param_1,param_2);
  uVar4 = 0;
  if (*(longlong **)(param_1 + 0x2e0) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x2e0);
    uVar2 = GetTransientPackage();
    (**(code **)(lVar1 + 0x138))(*(undefined8 *)(param_1 + 0x2e0),0,uVar2,param_2 | 0x34);
    FLinkerLoad::InvalidateExport(*(undefined8 *)(param_1 + 0x2e0));
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x300);
  uVar6 = (longlong)*(int *)(param_1 + 0x308) & 0x1fffffffffffffff;
  if (puVar7 + *(int *)(param_1 + 0x308) < puVar7) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      plVar3 = (longlong *)*puVar7;
      lVar1 = *plVar3;
      uVar2 = GetTransientPackage();
      (**(code **)(lVar1 + 0x138))(plVar3,0,uVar2,param_2 | 0x34);
      FLinkerLoad::InvalidateExport(plVar3);
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar4 != uVar6);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x30c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x300,0);
  }
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xfb;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x344)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x338,0);
  }
  if (*(undefined2 **)(param_1 + 0x338) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x338) = 0;
  }
  *(undefined4 *)(param_1 + 0x328) = 0;
  plVar3 = *(longlong **)(param_1 + 0x2f0);
  for (iVar5 = *(int *)(param_1 + 0x2f8); iVar5 != 0; iVar5 = iVar5 + -1) {
    if (plVar3[4] != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 10;
  }
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(int *)(param_1 + 0x2fc) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x2f0,0);
  }
  return;
}



// FUNCTION 142119fc0 FUN_142119fc0 body=883 status=ok
// SIG undefined FUN_142119fc0(void)

double * FUN_142119fc0(longlong param_1,double *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  FUN_1419aad30();
  lVar1 = param_1 + 0x438;
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x4f8,param_1 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  if (*(int *)(param_1 + 0x4ec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4e0,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x5b8);
  if ((plVar4 == (longlong *)0x0) || (iVar8 = (int)plVar4[1], iVar8 < 1)) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_142119a20(lVar1);
    FUN_142144960(lVar1);
  }
  else {
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    iVar6 = (int)ROUND(((float)*(double *)(param_1 + 0x330) + (float)*(double *)(param_1 + 0x330)) -
                       0.5) >> 1;
    iVar7 = 0;
    if ((-1 < iVar6) && (iVar7 = iVar8 + -1, iVar6 < iVar8 + -1)) {
      iVar7 = iVar6;
    }
    uVar2 = *(undefined4 *)(param_3 + 8);
    fVar16 = 0.0;
    cVar9 = '\0';
    iVar6 = iVar7;
    do {
      if (iVar8 <= iVar6) break;
      fVar10 = (float)FUN_1420f84e0(param_1,*plVar4 + (longlong)iVar6 * 8,iVar6,iVar7,uVar2);
      fVar3 = *(float *)(param_3 + 4);
      if (iVar6 == iVar7) {
        fVar11 = (float)*(double *)(param_1 + 0x330) - (float)(int)*(double *)(param_1 + 0x330);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        fVar11 = 1.0 - fVar11;
        fVar12 = fVar3 / (fVar11 * fVar10);
        fVar16 = fVar10;
        if (fVar11 <= fVar12) {
          fVar12 = fVar11;
        }
      }
      else if (fVar10 + fVar13 <= fVar3) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = (fVar3 - fVar13) / fVar10;
      }
      fVar15 = fVar12 + fVar15;
      fVar14 = fVar14 + fVar10;
      if (iVar6 == iVar7) {
        fVar10 = fVar15 * fVar10;
      }
      iVar8 = (int)plVar4[1];
      fVar13 = fVar13 + fVar10;
      if (iVar8 + -1 <= iVar6) {
        cVar9 = '\x01';
      }
      iVar6 = iVar6 + 1;
    } while (fVar13 <= fVar3);
    if ((cVar9 == '\0') || (fVar3 = *(float *)(param_3 + 4), fVar3 <= fVar13)) {
      *param_2 = *(double *)(param_1 + 0x330);
      param_2[1] = (double)fVar14;
      param_2[2] = (double)fVar15;
    }
    else {
      fVar15 = (fVar14 - fVar3) / fVar16 + (float)iVar7;
      iVar8 = iVar7;
      if (fVar14 < fVar3) {
        do {
          iVar8 = iVar8 + -1;
          if (iVar8 < 0) break;
          fVar16 = (float)FUN_1420f84e0(param_1,*plVar4 + (longlong)iVar8 * 8,iVar8,iVar7,uVar2);
          fVar13 = *(float *)(param_3 + 4);
          fVar14 = fVar16 + fVar14;
          if (fVar13 < fVar14) {
            fVar15 = (fVar14 - fVar13) / fVar16 + (float)iVar8;
          }
        } while (fVar14 < fVar13);
      }
      lVar5 = *(longlong *)(param_1 + 0x5b8);
      *param_2 = (double)fVar15;
      iVar8 = *(int *)(lVar5 + 8);
      param_2[1] = (double)fVar14;
      param_2[2] = (double)((float)iVar8 - fVar15);
    }
    *(char *)(param_2 + 3) = cVar9;
    FUN_142119a20(lVar1);
    FUN_142144960(lVar1);
  }
  return param_2;
}



// FUNCTION 14211a340 FUN_14211a340 body=949 status=ok
// SIG undefined FUN_14211a340(void)

double * FUN_14211a340(longlong *param_1,double *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  longlong *plVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  
  FUN_1419aad30();
  plVar4 = (longlong *)param_1[0xb7];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  else {
    fVar1 = *param_3;
    fVar11 = (float)STableViewBase::GetItemWidth(param_1);
    fVar12 = (float)STableViewBase::GetItemHeight(param_1);
    iVar9 = (**(code **)(*param_1 + 0x230))(param_1);
    iVar10 = (int)plVar4[1];
    if (iVar10 % iVar9 != 0) {
      iVar10 = (iVar10 - iVar10 % iVar9) + iVar9;
    }
    dVar5 = 0.0;
    dVar3 = (double)param_1[0x66];
    if (0.0 <= dVar3) {
      dVar18 = (double)iVar10 - (double)((1.0 / fVar12) * param_3[1]) * (double)iVar9;
      if (dVar3 <= dVar18) {
        dVar18 = dVar3;
      }
    }
    else {
      dVar18 = 0.0;
    }
    fVar2 = param_3[2];
    dVar13 = dVar18 / (double)iVar9;
    fVar17 = 0.0;
    fVar16 = 0.0;
    fVar15 = (float)dVar13;
    fVar19 = 0.0;
    iVar9 = ((int)ROUND((fVar15 + fVar15) - 0.5) >> 1) * iVar9;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x9f,param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x9d) = 0;
    if (*(int *)((longlong)param_1 + 0x4ec) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9c,0);
    }
    bVar8 = true;
    bVar6 = true;
    iVar10 = iVar9;
    bVar7 = bVar6;
    do {
      if ((int)plVar4[1] <= iVar10) break;
      if (bVar6) {
        bVar6 = false;
        fVar19 = fVar19 + fVar12;
        fVar14 = 1.0;
        if (bVar7) {
          bVar7 = false;
          fVar14 = fVar15 - (float)(int)dVar13;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar14 = 1.0 - fVar14;
        }
        fVar16 = fVar16 + fVar14 * fVar12;
        if ((param_3[1] < fVar16) &&
           (fVar14 = 1.0 - (fVar16 - param_3[1]) * (1.0 / fVar12), fVar14 <= 0.0)) {
          fVar14 = 0.0;
        }
        dVar5 = dVar5 + (double)fVar14;
      }
      FUN_1420f84e0(param_1,*plVar4 + (longlong)iVar10 * 8,iVar10,iVar9,fVar2);
      fVar17 = fVar17 + fVar11;
      if (fVar1 < fVar17 + fVar11) {
        bVar6 = true;
        fVar17 = 0.0;
        if (param_3[1] <= fVar16) {
          bVar8 = false;
        }
      }
      iVar10 = iVar10 + 1;
    } while (bVar8);
    FUN_142119a20(param_1 + 0x87);
    FUN_142144960(param_1 + 0x87);
    *(bool *)(param_2 + 3) = dVar18 <= dVar3;
    *param_2 = dVar18;
    param_2[2] = dVar5;
    param_2[1] = (double)fVar19;
  }
  return param_2;
}



// FUNCTION 14211a700 FUN_14211a700 body=113 status=ok
// SIG undefined FUN_14211a700(void)

void FUN_14211a700(longlong *param_1)

{
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x9f,param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (*(int *)((longlong)param_1 + 0x4ec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9c,0);
  }
  FUN_142119a20(param_1 + 0x87);
                    /* WARNING: Could not recover jumptable at 0x00014211a76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1);
  return;
}



// FUNCTION 14211a780 FUN_14211a780 body=140 status=ok
// SIG undefined FUN_14211a780(void)

undefined8 * FUN_14211a780(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_1420c2310(param_1,local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14211a810 FUN_14211a810 body=527 status=ok
// SIG undefined FUN_14211a810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211a810(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined1 local_2b8;
  undefined1 local_2b0;
  longlong local_2a8;
  longlong *local_298;
  longlong *local_290;
  undefined1 local_278 [592];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar6 = (longlong *)operator_new(0x648);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144044af8;
    if (plVar6 + 2 != (longlong *)0x0) {
      FUN_141920820(plVar6 + 2,0);
    }
  }
  plVar1 = plVar6 + 2;
  local_298 = plVar1;
  local_290 = plVar6;
  FUN_14044f790(&local_298,plVar1);
  local_2e8 = 0x638;
  SWidget::SetDebugInfo
            (plVar1,"SListView<TSharedPtr<FString>>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ListViewBase.cpp",
             0x6a);
  lVar7 = FUN_14068eb10(local_278);
  local_2a8 = lVar7 + 0xf8;
  local_2b0 = *(undefined1 *)(lVar7 + 0xf1);
  local_2c0 = lVar7 + 0xe8;
  local_2d8 = *(undefined4 *)(lVar7 + 0x90);
  local_2c8 = lVar7 + 200;
  local_2d0 = lVar7 + 0x98;
  local_2b8 = *(undefined1 *)(lVar7 + 0xf0);
  local_2e0 = lVar7 + 0x78;
  local_2e8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_14192b750(plVar1,lVar7);
  if (-1 < (char)plVar6[5]) {
    cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar4 == '\0') {
      bVar5 = 0;
      goto LAB_14211a969;
    }
  }
  bVar5 = 1;
LAB_14211a969:
  *(byte *)((longlong)plVar6 + 0x29) = *(byte *)((longlong)plVar6 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar6 + 0x29) = *(byte *)((longlong)plVar6 + 0x29) | bVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  FUN_1420d7ab0(local_278);
  return param_2;
}



// FUNCTION 14211aa20 FUN_14211aa20 body=140 status=ok
// SIG undefined FUN_14211aa20(void)

undefined8 * FUN_14211aa20(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_1420c2bb0(param_1,local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14211aab0 FUN_14211aab0 body=140 status=ok
// SIG undefined FUN_14211aab0(void)

undefined8 * FUN_14211aab0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_1420c3750(param_1,local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14211ab40 FUN_14211ab40 body=939 status=ok
// SIG undefined FUN_14211ab40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211ab40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong local_270;
  undefined4 local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined1 local_248;
  undefined1 local_240;
  longlong local_238;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined1 local_1d8 [272];
  longlong *local_c8;
  undefined1 local_a0 [32];
  undefined1 local_80 [20];
  undefined1 local_6c;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_208 = param_1;
  plVar8 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SBackgroundBlur>();
  plVar4 = plVar8 + 2;
  local_1f0 = plVar4;
  local_1e8 = plVar8;
  FUN_14044f790(&local_1f0,plVar4);
  local_278 = 0x338;
  SWidget::SetDebugInfo
            (plVar4,"SBackgroundBlur",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\BackgroundBlur.cpp",
             0x2c);
  lVar9 = FUN_1420cd8d0(local_1d8);
  local_238 = lVar9 + 0xf8;
  local_240 = *(undefined1 *)(lVar9 + 0xf1);
  local_250 = lVar9 + 0xe8;
  local_268 = *(undefined4 *)(lVar9 + 0x90);
  local_258 = lVar9 + 200;
  local_260 = lVar9 + 0x98;
  local_248 = *(undefined1 *)(lVar9 + 0xf0);
  local_270 = lVar9 + 0x78;
  local_278 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SBackgroundBlur::Construct(plVar4,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar11 = (longlong **)(param_1 + 0x1c0);
  local_228 = plVar4;
  local_220 = plVar8;
  if (pplVar11 != &local_228) {
    *pplVar11 = plVar4;
    local_228 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c8,&local_220);
  }
  plVar4 = local_220;
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_220 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_220 + 8))(local_220,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar4 = plVar8 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_60);
  local_6c = 0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_a0);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_c8 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  FUN_140456c70(local_1d8);
  iVar3 = *(int *)(local_208 + 0x108);
  if (iVar3 < 1) goto LAB_14211ae5b;
  local_200 = *pplVar11;
  local_1f8 = *(longlong *)(param_1 + 0x1c8);
  if (local_1f8 != 0) {
    LOCK();
    *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
    UNLOCK();
    iVar3 = *(int *)(local_208 + 0x108);
  }
  if ((iVar3 < 1) || (lVar9 = **(longlong **)(local_208 + 0x100), lVar9 == 0)) {
LAB_14211ae4d:
    lVar9 = 0;
  }
  else {
    lVar10 = UBackgroundBlurSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14211ae4d;
  }
  FUN_1420e33c0(lVar9,&local_200);
LAB_14211ae5b:
  plVar4 = *(longlong **)(param_1 + 0x1c8);
  local_218 = *pplVar11;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_218;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_210 = plVar4;
      (**(code **)*plVar4)();
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14211aef0 FUN_14211aef0 body=933 status=ok
// SIG undefined FUN_14211aef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211aef0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong **pplVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  undefined4 local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined1 local_368;
  undefined1 local_360;
  longlong local_358;
  longlong *local_348;
  longlong *local_340;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  longlong local_320;
  longlong *local_318;
  longlong *local_310;
  undefined1 local_2f8 [688];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  plVar9 = (longlong *)operator_new(0x398);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144d61068;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar1 = plVar9 + 2;
  local_318 = plVar1;
  local_310 = plVar9;
  FUN_14044f790(&local_318,plVar1);
  local_398 = 0x388;
  SWidget::SetDebugInfo
            (plVar1,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Border.cpp",0x2e);
  lVar10 = FUN_141886d30(local_2f8);
  local_358 = lVar10 + 0xf8;
  local_360 = *(undefined1 *)(lVar10 + 0xf1);
  local_370 = lVar10 + 0xe8;
  local_388 = *(undefined4 *)(lVar10 + 0x90);
  local_378 = lVar10 + 200;
  local_380 = lVar10 + 0x98;
  local_368 = *(undefined1 *)(lVar10 + 0xf0);
  local_390 = lVar10 + 0x78;
  local_398 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141971ea0(plVar1,lVar10);
  if (((char)plVar9[5] < '\0') || (cVar7 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar7 != '\0')) {
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
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  pplVar4 = (longlong **)(param_1 + 0x250);
  local_348 = plVar1;
  local_340 = plVar9;
  if (pplVar4 != &local_348) {
    *pplVar4 = plVar1;
    local_348 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 600,&local_340);
  }
  plVar1 = local_340;
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_340 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_340 + 8))(local_340,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_14188af70(local_2f8);
  iVar5 = *(int *)(param_1 + 0x108);
  if (iVar5 < 1) goto LAB_14211b1ed;
  local_328 = *pplVar4;
  local_320 = *(longlong *)(param_1 + 600);
  if (local_320 != 0) {
    LOCK();
    *(int *)(local_320 + 8) = *(int *)(local_320 + 8) + 1;
    UNLOCK();
    iVar5 = *(int *)(param_1 + 0x108);
  }
  if ((iVar5 < 1) || (lVar10 = **(longlong **)(param_1 + 0x100), lVar10 == 0)) {
LAB_14211b1db:
    lVar10 = 0;
  }
  else {
    lVar11 = UBorderSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14211b1db;
  }
  FUN_1420e35f0(lVar10,&local_328);
LAB_14211b1ed:
  plVar9 = *(longlong **)(param_1 + 600);
  local_338 = *pplVar4;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_338;
  param_2[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      local_330 = plVar9;
      (**(code **)*plVar9)();
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14211b2a0 FUN_14211b2a0 body=2051 status=ok
// SIG undefined FUN_14211b2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14211b2a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_458 [32];
  longlong local_438;
  longlong local_430;
  undefined4 local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined1 local_408;
  undefined1 local_400;
  longlong local_3f8;
  longlong *local_3e8;
  longlong *local_3e0;
  longlong *local_3d8 [2];
  longlong *local_3c8 [2];
  longlong *local_3b8 [2];
  uint local_3a8;
  uint local_3a4;
  longlong local_3a0;
  undefined8 local_398;
  longlong *local_390;
  undefined8 *local_388;
  longlong *local_380 [2];
  longlong *local_370 [2];
  undefined8 local_360;
  longlong local_358;
  longlong *local_350;
  longlong *local_348;
  undefined1 local_338 [760];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_3a4 = (uint)*(byte *)(param_1 + 0x3b9);
  local_3a8 = (uint)*(byte *)(param_1 + 0x3b8);
  local_3a0 = param_1;
  local_388 = param_2;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_3b8[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)&LAB_142137530;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_3c8[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)&LAB_142137520;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar9;
    *plVar10 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_3d8[0] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_144fb1b58;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)UButton::SlateHandleClicked;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  lVar9 = FUN_14068f3e0(local_338);
  pplVar2 = (longlong **)(lVar9 + 0x188);
  if (local_3d8 != pplVar2) {
    if (plVar11 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 400) != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar12;
        }
        *(undefined4 *)(lVar9 + 400) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x30))(plVar11,pplVar2);
    }
  }
  pplVar2 = (longlong **)(lVar9 + 0x198);
  if (local_3c8 != pplVar2) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 0x1a0) != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar12;
        }
        *(undefined4 *)(lVar9 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar2);
    }
  }
  pplVar2 = (longlong **)(lVar9 + 0x1a8);
  if (local_3b8 != pplVar2) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 0x1b0) != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar12;
        }
        *(undefined4 *)(lVar9 + 0x1b0) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar2);
    }
  }
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  local_380[0] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    plVar12[2] = (longlong)FUN_142137510;
    lVar13 = FDelegateHandle::GenerateNewID();
    plVar12[4] = lVar13;
    *plVar12 = (longlong)&PTR_FUN_143f4d1b8;
  }
  pplVar2 = (longlong **)(lVar9 + 0x1b8);
  if (local_380 == pplVar2) {
LAB_14211b535:
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      local_380[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
      if (local_380[0] != (longlong *)0x0) {
        FMemory::Free(local_380[0]);
      }
    }
  }
  else {
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x30))(plVar12,pplVar2);
      goto LAB_14211b535;
    }
    if ((*(int *)(lVar9 + 0x1c0) != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      if (*pplVar2 != (longlong *)0x0) {
        plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
        *pplVar2 = plVar12;
      }
      *(undefined4 *)(lVar9 + 0x1c0) = 0;
    }
  }
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  local_370[0] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    plVar12[2] = (longlong)&LAB_142137540;
    lVar13 = FDelegateHandle::GenerateNewID();
    plVar12[4] = lVar13;
    *plVar12 = (longlong)&PTR_FUN_143f4d1b8;
  }
  pplVar2 = (longlong **)(lVar9 + 0x1c8);
  if (local_370 == pplVar2) {
LAB_14211b5d7:
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      local_370[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
      if (local_370[0] != (longlong *)0x0) {
        FMemory::Free(local_370[0]);
      }
    }
  }
  else {
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x30))(plVar12,pplVar2);
      goto LAB_14211b5d7;
    }
    if ((*(int *)(lVar9 + 0x1d0) != 0) && (plVar12 = *pplVar2, plVar12 != (longlong *)0x0)) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      if (*pplVar2 != (longlong *)0x0) {
        plVar12 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
        *pplVar2 = plVar12;
      }
      *(undefined4 *)(lVar9 + 0x1d0) = 0;
    }
  }
  *(longlong *)(lVar9 + 0x118) = param_1 + 0x120;
  *(uint *)(lVar9 + 0x1d8) = local_3a8;
  *(uint *)(lVar9 + 0x1dc) = local_3a4;
  *(undefined1 *)(lVar9 + 0x2a8) = *(undefined1 *)(param_1 + 0x3bb);
  plVar14 = (longlong *)FUN_141880af0();
  plVar12 = plVar14 + 2;
  local_350 = plVar12;
  local_348 = plVar14;
  FUN_14044f790(&local_350,plVar12);
  local_438 = 0x488;
  SWidget::SetDebugInfo
            (plVar12,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Button.cpp",0x26);
  local_428 = *(undefined4 *)(lVar9 + 0x90);
  local_3f8 = lVar9 + 0xf8;
  local_410 = lVar9 + 0xe8;
  local_400 = *(undefined1 *)(lVar9 + 0xf1);
  local_418 = lVar9 + 200;
  local_420 = lVar9 + 0x98;
  local_408 = *(undefined1 *)(lVar9 + 0xf0);
  local_430 = lVar9 + 0x78;
  local_438 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_14192dae0(plVar12,lVar9);
  if (((char)plVar14[5] < '\0') || (cVar6 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    plVar10 = local_3c8[0];
    plVar8 = local_3b8[0];
    plVar11 = local_3d8[0];
  }
  local_3e8 = plVar12;
  local_3e0 = plVar14;
  if ((longlong **)(local_3a0 + 0x410) != &local_3e8) {
    *(longlong **)(local_3a0 + 0x410) = plVar12;
    local_3e8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_3a0 + 0x418,&local_3e0);
  }
  plVar12 = local_3e0;
  if (local_3e0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_3e0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar10 = local_3c8[0];
    plVar8 = local_3b8[0];
    plVar11 = local_3d8[0];
    if ((int)lVar9 == 1) {
      (**(code **)*local_3e0)(local_3e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = local_3c8[0];
      plVar8 = local_3b8[0];
      plVar11 = local_3d8[0];
      if (iVar3 == 1) {
        (**(code **)(*local_3e0 + 8))(local_3e0,1);
        plVar10 = local_3c8[0];
        plVar8 = local_3b8[0];
        plVar11 = local_3d8[0];
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar14 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar8 = plVar14 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar10 = local_3c8[0];
    plVar8 = local_3b8[0];
    plVar11 = local_3d8[0];
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = local_3c8[0];
      plVar8 = local_3b8[0];
      plVar11 = local_3d8[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
        plVar10 = local_3c8[0];
        plVar8 = local_3b8[0];
        plVar11 = local_3d8[0];
      }
    }
  }
  FUN_140690f70(local_338);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    local_3d8[0] = (longlong *)FMemory::Realloc(plVar11,0,0);
    if (local_3d8[0] != (longlong *)0x0) {
      FMemory::Free(local_3d8[0]);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_3c8[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_3c8[0] != (longlong *)0x0) {
      FMemory::Free(local_3c8[0]);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_3b8[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_3b8[0] != (longlong *)0x0) {
      FMemory::Free(local_3b8[0]);
    }
  }
  lVar9 = local_3a0;
  iVar3 = *(int *)(local_3a0 + 0x108);
  if (iVar3 < 1) goto LAB_14211ba07;
  local_360 = *(undefined8 *)(local_3a0 + 0x410);
  local_358 = *(longlong *)(local_3a0 + 0x418);
  if (local_358 != 0) {
    LOCK();
    *(int *)(local_358 + 8) = *(int *)(local_358 + 8) + 1;
    UNLOCK();
    iVar3 = *(int *)(local_3a0 + 0x108);
  }
  if ((iVar3 < 1) || (lVar13 = **(longlong **)(local_3a0 + 0x100), lVar13 == 0)) {
LAB_14211b9f9:
    lVar13 = 0;
  }
  else {
    lVar15 = UButtonSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14211b9f9;
  }
  FUN_1420e3850(lVar13,&local_360);
LAB_14211ba07:
  puVar5 = local_388;
  local_398 = *(undefined8 *)(lVar9 + 0x410);
  plVar8 = *(longlong **)(lVar9 + 0x418);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *local_388 = local_398;
  local_388[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_390 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  return puVar5;
}



// FUNCTION 14211bab0 FUN_14211bab0 body=914 status=ok
// SIG undefined FUN_14211bab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211bab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar8 = (longlong *)operator_new(0x240);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144fb23f8;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_141961aa0();
    }
  }
  plVar11 = plVar8 + 2;
  local_188 = plVar11;
  local_180 = plVar8;
  FUN_14044f790(&local_188,plVar11);
  local_208 = 0x230;
  SWidget::SetDebugInfo
            (plVar11,"SConstraintCanvas",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\CanvasPanel.cpp",
             0x39);
  lVar9 = SCanvas::FArguments::FArguments(local_168);
  local_1c8 = lVar9 + 0xf8;
  local_1d0 = *(undefined1 *)(lVar9 + 0xf1);
  local_1e0 = lVar9 + 0xe8;
  local_1f8 = *(undefined4 *)(lVar9 + 0x90);
  local_1e8 = lVar9 + 200;
  local_1f0 = lVar9 + 0x98;
  local_1d8 = *(undefined1 *)(lVar9 + 0xf0);
  local_200 = lVar9 + 0x78;
  local_208 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SOverlay::Construct(plVar11,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x118);
  local_1b8 = plVar11;
  local_1b0 = plVar8;
  if (pplVar3 != &local_1b8) {
    *pplVar3 = plVar11;
    local_1b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x120,&local_1b0);
  }
  plVar11 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  plVar11 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar11 + *(int *)(param_1 + 0x108);
  for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar10 = UCanvasPanelSlot::GetPrivateStaticClass();
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
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_198 = *pplVar3;
        local_190 = *(longlong *)(param_1 + 0x120);
        if (local_190 != 0) {
          LOCK();
          *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e3ab0(lVar9,&local_198);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x120);
  local_1a8 = *pplVar3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1a8;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1a0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14211be50 FUN_14211be50 body=1242 status=ok
// SIG undefined FUN_14211be50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211be50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  undefined1 auStack_428 [32];
  longlong local_408;
  longlong local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined1 local_3d8;
  undefined1 local_3d0;
  longlong local_3c8;
  undefined1 local_3b8 [8];
  longlong *local_3b0;
  longlong *local_3a8;
  longlong *local_3a0 [2];
  undefined4 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  code *local_368;
  undefined1 *puStack_360;
  undefined8 local_358;
  longlong *local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  longlong *local_338;
  longlong *local_330;
  undefined1 local_320 [728];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  bVar6 = *(byte *)(param_1 + 0x700);
  local_390 = 0;
  local_388 = param_1;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_3a0[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_14419ca48;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    plVar7[2] = (longlong)UCheckBox::SlateOnCheckStateChangedCallback;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_14419ca90;
  }
  lVar8 = FUN_1418cdb90(local_320);
  pplVar12 = (longlong **)(lVar8 + 0x128);
  if (local_3a0 != pplVar12) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x130) != 0) && (plVar9 = *pplVar12, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*pplVar12 != (longlong *)0x0) {
          plVar9 = (longlong *)FMemory::Realloc(*pplVar12,0,0);
          *pplVar12 = plVar9;
        }
        *(undefined4 *)(lVar8 + 0x130) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar12);
    }
  }
  *(uint *)(lVar8 + 0x150) = (uint)bVar6;
  *(longlong *)(lVar8 + 0x118) = param_1 + 0x130;
  *(undefined1 *)(lVar8 + 0x218) = *(undefined1 *)(param_1 + 0x740);
  plVar10 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SCheckBox>();
  plVar9 = plVar10 + 2;
  local_338 = plVar9;
  local_330 = plVar10;
  FUN_14044f790(&local_338,plVar9);
  local_408 = 0x498;
  SWidget::SetDebugInfo
            (plVar9,"SCheckBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\CheckBox.cpp",0x28);
  local_3f8 = *(undefined4 *)(lVar8 + 0x90);
  local_3c8 = lVar8 + 0xf8;
  local_3e0 = lVar8 + 0xe8;
  local_3d0 = *(undefined1 *)(lVar8 + 0xf1);
  local_3e8 = lVar8 + 200;
  local_3f0 = lVar8 + 0x98;
  local_3d8 = *(undefined1 *)(lVar8 + 0xf0);
  local_400 = lVar8 + 0x78;
  local_408 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar9,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_14192dfa0(plVar9,lVar8);
  if (((char)plVar10[5] < '\0') || (cVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    plVar7 = local_3a0[0];
  }
  pplVar12 = (longlong **)(param_1 + 0x758);
  local_3b0 = plVar9;
  local_3a8 = plVar10;
  if (pplVar12 != &local_3b0) {
    *pplVar12 = plVar9;
    local_3b0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x760,&local_3a8);
  }
  plVar9 = local_3a8;
  if (local_3a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_3a8 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_3a0[0];
    if ((int)lVar8 == 1) {
      (**(code **)*local_3a8)(local_3a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_3a0[0];
      if (iVar2 == 1) {
        (**(code **)(*local_3a8 + 8))(local_3a8,1);
        plVar7 = local_3a0[0];
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar7 = plVar10 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_3a0[0];
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_3a0[0];
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
        plVar7 = local_3a0[0];
      }
    }
  }
  FUN_1418d1af0(local_320);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_3a0[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_3a0[0] != (longlong *)0x0) {
      FMemory::Free(local_3a0[0]);
    }
  }
  if (0 < *(int *)(local_388 + 0x108)) {
    lVar8 = *(longlong *)(**(longlong **)(local_388 + 0x100) + 0x30);
    if (lVar8 == 0) {
      local_380 = DAT_1469eb218;
      local_378 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar11 = &local_380;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      puStack_360 = local_3b8;
      local_3b8[0] = 0;
      local_368 = UE4Function_Private::
                  TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                  ::Call;
      local_348 = 0x420e6680;
      uStack_344 = 1;
      uStack_340 = puStack_360;
      FUN_14213eb80(lVar8,&local_358,&local_348);
      puVar11 = &local_358;
      bVar4 = true;
      bVar3 = false;
    }
    FUN_141956440(*pplVar12,puVar11);
    plVar7 = local_378;
    if ((bVar3) && (local_378 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_378 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_378)(local_378);
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
    if ((bVar4) && (local_350 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_350 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_350)(local_350);
        LOCK();
        piVar1 = (int *)((longlong)local_350 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_350 + 8))(local_350,1);
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x760);
  plVar9 = *pplVar12;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar9;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return param_2;
}



// FUNCTION 14211c330 FUN_14211c330 body=969 status=ok
// SIG undefined FUN_14211c330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211c330(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong **pplVar10;
  float fVar11;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  undefined4 local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  undefined1 local_358;
  undefined1 local_350;
  longlong local_348;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_320;
  undefined1 local_308 [320];
  longlong *local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [320];
  longlong *local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  SCircularThrobber::FArguments::FArguments(local_1a8);
  iVar3 = *(int *)(param_1 + 0x100);
  fVar11 = *(float *)(param_1 + 0x104);
  if (fVar11 <= 1e-08) {
    fVar11 = 1e-08;
  }
  if (iVar3 < 1) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0x19;
    if (iVar3 < 0x19) {
      iVar9 = iVar3;
    }
  }
  lVar7 = SCircularThrobber::FArguments::FArguments(local_308);
  *(float *)(lVar7 + 0x114) = fVar11;
  *(longlong *)(lVar7 + 0x108) = param_1 + 0x118;
  *(int *)(lVar7 + 0x110) = iVar9;
  *(undefined4 *)(lVar7 + 0x118) = *(undefined4 *)(param_1 + 0x108);
  plVar8 = (longlong *)FUN_141920480();
  plVar4 = plVar8 + 2;
  local_328 = plVar4;
  local_320 = plVar8;
  FUN_14044f790(&local_328,plVar4);
  local_388 = 0x2c8;
  SWidget::SetDebugInfo
            (plVar4,"SCircularThrobber",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\CircularThrobber.cpp"
             ,0x25);
  local_378 = *(undefined4 *)(lVar7 + 0x90);
  local_348 = lVar7 + 0xf8;
  local_360 = lVar7 + 0xe8;
  local_350 = *(undefined1 *)(lVar7 + 0xf1);
  local_368 = lVar7 + 200;
  local_370 = lVar7 + 0x98;
  local_358 = *(undefined1 *)(lVar7 + 0xf0);
  local_380 = lVar7 + 0x78;
  local_388 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SCircularThrobber::Construct(plVar4,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar5 != '\0')) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar10 = (longlong **)(param_1 + 0x1a8);
  local_338 = plVar4;
  local_330 = plVar8;
  if (pplVar10 != &local_338) {
    *pplVar10 = plVar4;
    local_338 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b0,&local_330);
  }
  plVar4 = local_330;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_330 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
    LOCK();
    plVar4 = plVar8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1b8);
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1c8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  FUN_140456c70(local_308);
  plVar4 = *(longlong **)(param_1 + 0x1b0);
  plVar8 = *pplVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar8;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  FUN_140456c70(local_1a8);
  return param_2;
}



// FUNCTION 14211c700 FUN_14211c700 body=1847 status=ok
// SIG undefined FUN_14211c700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211c700(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  longlong **pplVar15;
  int iVar16;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined1 local_3a8;
  undefined1 local_3a0;
  longlong local_398;
  longlong *local_388 [2];
  longlong local_378;
  int local_370;
  int local_36c;
  longlong *local_368;
  longlong *local_360;
  int local_358;
  uint uStack_354;
  uint *puStack_350;
  undefined4 local_348;
  int iStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  longlong local_338;
  longlong *local_330;
  undefined8 uStack_328;
  uint *local_320;
  uint uStack_318;
  int iStack_314;
  int local_310;
  undefined4 uStack_30c;
  undefined1 local_308 [4];
  int local_304;
  longlong *local_300;
  longlong *local_2f8;
  longlong *plStack_2f0;
  uint *puStack_2e8;
  undefined4 uStack_2e0;
  int iStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  longlong local_2c8;
  undefined8 local_2c0;
  uint local_2b8 [4];
  uint *local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  int local_294;
  longlong local_288;
  undefined4 local_280;
  undefined1 local_278 [272];
  longlong *local_168;
  undefined1 local_130 [48];
  longlong *local_100;
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [24];
  longlong *local_a0;
  undefined1 local_8f;
  undefined1 local_70;
  undefined1 local_50;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  iVar13 = 0;
  plVar8 = (longlong *)(param_1 + 0x100);
  iVar10 = *(int *)(param_1 + 0x108);
  local_2c8 = 0;
  local_2c0 = 0;
  local_2a8 = (uint *)0x0;
  local_2a0 = 0;
  local_298 = 0xffffffff;
  local_294 = 0;
  local_288 = 0;
  local_280 = 0;
  local_338 = param_1;
  local_300 = param_2;
  if (0 < iVar10) {
    FUN_1405effc0(&local_2c8,iVar10);
    iVar10 = *(int *)(param_1 + 0x108);
    iVar13 = (int)local_2a0;
  }
  lVar12 = *plVar8;
  lVar6 = lVar12 + (longlong)iVar10 * 8;
  if (lVar12 != lVar6) {
    do {
      FUN_14058cbf0(&local_2c8,local_308,lVar12,0);
      lVar12 = lVar12 + 8;
    } while (lVar12 != lVar6);
    iVar13 = (int)local_2a0;
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 0;
  if (0 < (int)local_2c0 - local_294) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_378);
    iVar13 = (int)local_2a0;
  }
  uStack_354 = 1;
  local_358 = 0;
  puStack_350 = local_2b8;
  iStack_344 = 0;
  iStack_340 = 0;
  if (iVar13 != 0) {
    puVar14 = local_2b8;
    if (local_2a8 != (uint *)0x0) {
      puVar14 = local_2a8;
    }
    uVar2 = *puVar14;
    iStack_340 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_358;
      iStack_340 = iStack_340 + 0x20;
      iVar10 = local_358 + 1;
      bVar3 = (int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 <= local_358;
      local_358 = iVar10;
      iStack_344 = iVar13;
      if (bVar3) goto LAB_14211c8ab;
      uVar2 = puVar14[lVar6 + 1];
    }
    uStack_354 = -uVar2 & uVar2;
    local_304 = 0x1f;
    if (uStack_354 != 0) {
      for (; uStack_354 >> local_304 == 0; local_304 = local_304 + -1) {
      }
    }
    if (uStack_354 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_304;
    }
    iStack_344 = (iStack_340 - iVar10) + 0x1f;
    if (iVar13 < iStack_344) {
      iStack_344 = iVar13;
    }
  }
LAB_14211c8ab:
  local_348 = 0xffffffff;
  local_330 = &local_2c8;
  uStack_328 = CONCAT44(uStack_354,local_358);
  uStack_2e0 = 0xffffffff;
  iStack_2dc = iStack_344;
  iStack_2d8 = iStack_340;
  uStack_2d4 = uStack_33c;
  uStack_318 = 0xffffffff;
  iStack_314 = iStack_344;
  local_310 = iStack_340;
  uStack_30c = uStack_33c;
  lVar6 = local_378;
  lVar12 = param_1;
  iVar10 = local_370;
  iVar16 = local_36c;
  local_320 = puStack_350;
  local_2f8 = local_330;
  plStack_2f0 = (longlong *)uStack_328;
  puStack_2e8 = puStack_350;
  iVar11 = local_370;
  if (iStack_344 < iVar13) {
    do {
      iVar13 = iStack_314;
      local_388[0] = (longlong *)*local_330;
      local_370 = iVar11 + 1;
      if (iVar16 < local_370) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_378,iVar11);
        lVar6 = local_378;
        iVar16 = local_36c;
      }
      iVar10 = local_370;
      *(longlong *)(lVar6 + (longlong)iVar11 * 8) = local_388[0][(longlong)iVar13 * 2];
      uStack_318 = uStack_318 & ~uStack_328._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_328);
      lVar12 = local_338;
      iVar11 = iVar10;
    } while (iStack_314 < (int)local_320[6]);
  }
  if (plVar8 == &local_378) {
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  else {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = lVar6;
    *(int *)(param_1 + 0x108) = iVar10;
    *(int *)(param_1 + 0x10c) = iVar16;
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_388[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144fb1b98;
    FWeakObjectPtr::operator=(plVar7 + 1,lVar12);
    plVar7[2] = (longlong)FUN_142101040;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar6;
  }
  lVar6 = FUN_1420cd370(local_278);
  pplVar15 = (longlong **)(lVar6 + 0x1b0);
  *(longlong **)(lVar6 + 0x198) = plVar8;
  if (local_388 != pplVar15) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar6 + 0x1b8) != 0) && (plVar8 = *pplVar15, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar15 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar15,0,0);
          *pplVar15 = plVar8;
        }
        *(undefined4 *)(lVar6 + 0x1b8) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar15);
    }
  }
  *(undefined1 *)(lVar6 + 0x232) = *(undefined1 *)(lVar12 + 0x120);
  plVar9 = (longlong *)FUN_1420cb0f0();
  plVar8 = plVar9 + 2;
  local_2f8 = plVar8;
  plStack_2f0 = plVar9;
  FUN_14044f790(&local_2f8,plVar8);
  local_3d8 = 0x3f8;
  SWidget::SetDebugInfo
            (plVar8,"SComboBox<UObject*>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBox.cpp",0x1d);
  local_3c8 = *(undefined4 *)(lVar6 + 0x90);
  local_398 = lVar6 + 0xf8;
  local_3b0 = lVar6 + 0xe8;
  local_3a0 = *(undefined1 *)(lVar6 + 0xf1);
  local_3b8 = lVar6 + 200;
  local_3c0 = lVar6 + 0x98;
  local_3a8 = *(undefined1 *)(lVar6 + 0xf0);
  local_3d0 = lVar6 + 0x78;
  local_3d8 = lVar6 + 0x60;
  SWidget::SWidgetConstruct(plVar8,lVar6,lVar6 + 0x30,lVar6 + 0x40);
  FUN_1420e9070(plVar8,lVar6);
  if (((char)plVar9[5] < '\0') || (cVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8), cVar4 != '\0')) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  lVar6 = local_338;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar5;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar7 = local_388[0];
  }
  pplVar15 = (longlong **)(local_338 + 0x128);
  local_368 = plVar8;
  local_360 = plVar9;
  if (pplVar15 != &local_368) {
    *pplVar15 = plVar8;
    local_368 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_338 + 0x130,&local_360);
  }
  plVar8 = local_360;
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_360 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_388[0];
    if ((int)lVar12 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_388[0];
      if (iVar10 == 1) {
        (**(code **)(*local_360 + 8))(local_360,1);
        plVar7 = local_388[0];
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar8 = plVar9 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar7 = local_388[0];
    if ((int)lVar12 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_388[0];
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
        plVar7 = local_388[0];
      }
    }
  }
  local_50 = 0;
  local_70 = 0;
  local_8f = 0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a0 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar7 = local_388[0];
    if ((int)lVar12 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_388[0];
      if (iVar10 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
        plVar7 = local_388[0];
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f0);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_100 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar7 = local_388[0];
    if ((int)lVar12 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_388[0];
      if (iVar10 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
        plVar7 = local_388[0];
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_130);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_168 + 1;
    lVar12 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar7 = local_388[0];
    if ((int)lVar12 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_388[0];
      if (iVar10 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
        plVar7 = local_388[0];
      }
    }
  }
  FUN_140456c70(local_278);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_388[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_388[0] != (longlong *)0x0) {
      FMemory::Free(local_388[0]);
    }
  }
  plVar9 = local_300;
  plVar8 = *(longlong **)(lVar6 + 0x130);
  plVar7 = *pplVar15;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *local_300 = (longlong)plVar7;
  local_300[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  local_280 = 0;
  if (local_288 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_2c8);
  return plVar9;
}



// FUNCTION 14211ce40 FUN_14211ce40 body=2830 status=ok
// SIG undefined FUN_14211ce40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211ce40(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_688 [32];
  longlong local_668;
  longlong local_660;
  undefined4 local_658;
  longlong local_650;
  longlong local_648;
  longlong local_640;
  undefined1 local_638;
  undefined1 local_630;
  longlong local_628;
  undefined1 local_618 [8];
  longlong local_610;
  longlong *plStack_608;
  longlong *local_600;
  longlong *local_5f8;
  longlong local_5f0;
  longlong *plStack_5e8;
  undefined8 local_5e0;
  longlong *plStack_5d8;
  longlong *local_5d0;
  longlong *local_5c8;
  int local_5c0;
  longlong *local_5b8;
  longlong *local_5b0;
  undefined1 *local_5a8;
  longlong *local_5a0 [2];
  longlong *local_590 [2];
  longlong *local_580 [2];
  undefined8 local_570;
  longlong *local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined1 local_550;
  longlong local_548;
  longlong *local_540;
  undefined1 local_538;
  undefined8 local_530;
  undefined4 local_528;
  longlong local_520;
  longlong local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined1 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined1 local_4d8 [8];
  longlong *local_4d0;
  longlong *local_4c8;
  longlong *local_4c0;
  longlong local_4b0;
  longlong *plStack_4a8;
  longlong local_4a0;
  longlong *plStack_498;
  undefined8 local_490;
  longlong *plStack_488;
  undefined1 local_478 [496];
  undefined1 local_288 [576];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  local_568 = param_2;
  local_5c0 = UComboBoxString::FindOptionIndex(param_1,param_1 + 0x22);
  if (local_5c0 != -1) {
    plVar7 = param_1 + 0x195;
    plVar13 = (longlong *)((longlong)local_5c0 * 0x10 + param_1[399]);
    plVar10 = (longlong *)plVar13[1];
    lVar11 = *plVar13;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_610 = lVar11;
    plStack_608 = plVar10;
    if (&local_610 != plVar7) {
      local_610 = *plVar7;
      plStack_608 = (longlong *)param_1[0x196];
      *plVar7 = lVar11;
      param_1[0x196] = (longlong)plVar10;
      local_4b0 = lVar11;
      plStack_4a8 = plVar10;
    }
    plVar7 = plStack_608;
    if (plStack_608 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_608 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_608)(plStack_608);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_608 + 8))(plStack_608,1);
        }
      }
    }
  }
  local_510 = param_1[0x176];
  uStack_508 = param_1[0x177];
  local_550 = (undefined1)param_1[0x185];
  local_548 = param_1[0x186];
  local_540 = (longlong *)param_1[0x187];
  local_500 = 1;
  local_4f8 = 0;
  local_4f0 = 0;
  local_560 = (undefined4)param_1[0x183];
  uStack_55c = *(undefined4 *)((longlong)param_1 + 0xc1c);
  uStack_558 = (undefined4)param_1[0x184];
  uStack_554 = *(undefined4 *)((longlong)param_1 + 0xc24);
  if (local_540 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_540 + 1) = (int)local_540[1] + 1;
    UNLOCK();
  }
  local_538 = 1;
  local_530 = 0;
  local_528 = 0;
  plVar7 = (longlong *)operator_new(800);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_144044b78;
    if (plVar7 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar10 = plVar7 + 2;
  local_5b8 = plVar10;
  local_5b0 = plVar7;
  FUN_14044f790(&local_5b8,plVar10);
  local_5a8 = local_618;
  local_668 = 0x310;
  SWidget::SetDebugInfo
            (plVar10,&DAT_144f99ae4,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxString.cpp",
             0x6d);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_600 = plVar10;
  local_5f8 = plVar7;
  if ((longlong **)(param_1 + 0x193) != &local_600) {
    param_1[0x193] = (longlong)plVar10;
    local_600 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x194,&local_5f8);
  }
  plVar7 = local_5f8;
  if (local_5f8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_5f8 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5f8)(local_5f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_5f8 + 8))(local_5f8,1);
      }
    }
  }
  uVar8 = FUN_14068f180(local_478);
  puVar9 = (undefined8 *)FUN_14188dd80(&local_5b8,local_4e8,uVar8);
  plVar7 = (longlong *)puVar9[1];
  local_570 = *puVar9;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_580[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)&LAB_1404c218c;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_590[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_144fb1c18;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)&LAB_1404c2180;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_FUN_144fb1c60;
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_5a0[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_144fb1bd8;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)&LAB_1404c2108;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
  }
  plVar10 = (longlong *)param_1[0x196];
  lVar11 = param_1[0x195];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14195f0e0(local_288);
  *(longlong **)(lVar12 + 0x118) = param_1 + 0x24;
  *(longlong **)(lVar12 + 0x128) = param_1 + 0x9f;
  FUN_140692440(lVar12 + 0x158,&local_560);
  *(undefined1 *)(lVar12 + 0x180) = local_538;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x188,&local_530);
  *(longlong **)(lVar12 + 0x198) = param_1 + 399;
  plVar13 = (longlong *)(lVar12 + 0x1e0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_5f0 = lVar11;
  plStack_5e8 = plVar10;
  if (&local_5f0 != plVar13) {
    local_5f0 = *plVar13;
    plStack_5e8 = *(longlong **)(lVar12 + 0x1e8);
    *plVar13 = lVar11;
    *(longlong **)(lVar12 + 0x1e8) = plVar10;
    local_4a0 = lVar11;
    plStack_498 = plVar10;
  }
  plVar13 = plStack_5e8;
  if (plStack_5e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_5e8 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_5e8)(plStack_5e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_5e8 + 8))(plStack_5e8,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar10 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  *(undefined1 *)(lVar12 + 0x140) = 1;
  *(undefined4 *)(lVar12 + 0x130) = (undefined4)local_510;
  *(undefined4 *)(lVar12 + 0x134) = local_510._4_4_;
  *(undefined4 *)(lVar12 + 0x138) = (undefined4)uStack_508;
  *(undefined4 *)(lVar12 + 0x13c) = uStack_508._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x148,&local_4f8);
  pplVar3 = (longlong **)(lVar12 + 0x1b0);
  *(int *)(lVar12 + 500) = (int)param_1[0x178];
  *(undefined1 *)(lVar12 + 0x238) = *(undefined1 *)((longlong)param_1 + 0xbc4);
  *(undefined1 *)(lVar12 + 0x239) = *(undefined1 *)((longlong)param_1 + 0xbc5);
  if (local_5a0 != pplVar3) {
    if (local_5a0[0] == (longlong *)0x0) {
      if ((*(int *)(lVar12 + 0x1b8) != 0) && (plVar10 = *pplVar3, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar10 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar10;
        }
        *(undefined4 *)(lVar12 + 0x1b8) = 0;
      }
    }
    else {
      (**(code **)(*local_5a0[0] + 0x30))(local_5a0[0],pplVar3);
    }
  }
  pplVar3 = (longlong **)(lVar12 + 0x1a0);
  if (local_590 != pplVar3) {
    if (local_590[0] == (longlong *)0x0) {
      if ((*(int *)(lVar12 + 0x1a8) != 0) && (plVar10 = *pplVar3, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar10 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar10;
        }
        *(undefined4 *)(lVar12 + 0x1a8) = 0;
      }
    }
    else {
      (**(code **)(*local_590[0] + 0x30))(local_590[0],pplVar3);
    }
  }
  pplVar3 = (longlong **)(lVar12 + 0x1c0);
  if (local_580 != pplVar3) {
    if (local_580[0] == (longlong *)0x0) {
      if ((*(int *)(lVar12 + 0x1c8) != 0) && (plVar10 = *pplVar3, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar10 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar10;
        }
        *(undefined4 *)(lVar12 + 0x1c8) = 0;
      }
    }
    else {
      (**(code **)(*local_580[0] + 0x30))(local_580[0],pplVar3);
    }
  }
  local_5e0 = local_570;
  *(char *)(lVar12 + 0x23a) = (char)param_1[0x188];
  puVar9 = (undefined8 *)(lVar12 + 0x108);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plStack_5d8 = plVar7;
  if (&local_5e0 != puVar9) {
    local_5e0 = *puVar9;
    plStack_5d8 = *(longlong **)(lVar12 + 0x110);
    local_490 = local_570;
    *puVar9 = local_570;
    *(longlong **)(lVar12 + 0x110) = plVar7;
    plStack_488 = plVar7;
  }
  plVar10 = plStack_5d8;
  if (plStack_5d8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_5d8 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_5d8)(plStack_5d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_5d8 + 8))(plStack_5d8,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar10 = (longlong *)FUN_14195e700();
  plVar7 = plVar10 + 2;
  local_4c8 = plVar7;
  local_4c0 = plVar10;
  FUN_14044f790(&local_4c8,plVar7);
  local_668 = 0x400;
  SWidget::SetDebugInfo
            (plVar7,"SComboBox< TSharedPtr<FString> >",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBoxString.cpp",
             0x5e);
  local_658 = *(undefined4 *)(lVar12 + 0x90);
  local_628 = lVar12 + 0xf8;
  local_640 = lVar12 + 0xe8;
  local_630 = *(undefined1 *)(lVar12 + 0xf1);
  local_648 = lVar12 + 200;
  local_650 = lVar12 + 0x98;
  local_638 = *(undefined1 *)(lVar12 + 0xf0);
  local_660 = lVar12 + 0x78;
  local_668 = lVar12 + 0x60;
  SWidget::SWidgetConstruct(plVar7,lVar12,lVar12 + 0x30,lVar12 + 0x40);
  FUN_141970aa0(plVar7,lVar12);
  if (((char)plVar10[5] < '\0') || (cVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x191);
  local_5d0 = plVar7;
  local_5c8 = plVar10;
  if (pplVar3 != &local_5d0) {
    *pplVar3 = plVar7;
    local_5d0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x192,&local_5c8);
  }
  plVar7 = local_5c8;
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_5c8 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5c8)(local_5c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_5c8 + 8))(local_5c8,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar7 = plVar10 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_141965540(local_288);
  plVar7 = local_5a0[0];
  if (local_5a0[0] != (longlong *)0x0) {
    (**(code **)(*local_5a0[0] + 0x28))(local_5a0[0],0);
    local_5a0[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_5a0[0] != (longlong *)0x0) {
      FMemory::Free(local_5a0[0]);
    }
  }
  plVar7 = local_590[0];
  if (local_590[0] != (longlong *)0x0) {
    (**(code **)(*local_590[0] + 0x28))(local_590[0],0);
    local_590[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_590[0] != (longlong *)0x0) {
      FMemory::Free(local_590[0]);
    }
  }
  plVar7 = local_580[0];
  if (local_580[0] != (longlong *)0x0) {
    (**(code **)(*local_580[0] + 0x28))(local_580[0],0);
    local_580[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_580[0] != (longlong *)0x0) {
      FMemory::Free(local_580[0]);
    }
  }
  if (local_4e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_4e0 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_4e0)(local_4e0);
      LOCK();
      piVar1 = (int *)((longlong)local_4e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_4e0 + 8))(local_4e0,1);
      }
    }
  }
  plVar7 = local_5b0;
  if (local_5b0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_5b0 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_5b0)(local_5b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_5b0 + 8))(local_5b0,1);
      }
    }
  }
  FUN_140690ea0(local_478);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_530);
  plVar7 = local_540;
  if (local_540 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_540 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_540)(local_540);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_540 + 8))(local_540,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4f8);
  if (local_5c0 != -1) {
    local_520 = param_1[0x195];
    local_518 = param_1[0x196];
    if (local_518 != 0) {
      LOCK();
      *(int *)(local_518 + 8) = *(int *)(local_518 + 8) + 1;
      UNLOCK();
    }
    lVar11 = param_1[0x193];
    uVar8 = (**(code **)(*param_1 + 0x2d0))(param_1,local_4d8,&local_520);
    SBox::SetContent(lVar11,uVar8);
    if (local_4d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_4d0 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_4d0)(local_4d0);
        LOCK();
        piVar1 = (int *)((longlong)local_4d0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_4d0 + 8))(local_4d0,1);
        }
      }
    }
  }
  plVar13 = local_568;
  plVar7 = (longlong *)param_1[0x192];
  plVar10 = *pplVar3;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *local_568 = (longlong)plVar10;
  local_568[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  return plVar13;
}



// FUNCTION 14211d950 FUN_14211d950 body=2463 status=ok
// SIG undefined FUN_14211d950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14211d950(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_658 [32];
  undefined8 local_638;
  undefined1 local_628;
  undefined1 local_627;
  undefined1 local_626;
  undefined1 local_625 [5];
  undefined8 local_620;
  longlong *plStack_618;
  longlong *local_610;
  longlong *local_608;
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined8 local_5d0;
  longlong *local_5c8;
  undefined8 local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  longlong *local_5a8;
  undefined8 local_5a0;
  longlong *local_598;
  longlong *local_590;
  longlong *local_588;
  undefined1 *local_580;
  longlong *local_578;
  longlong *local_570;
  undefined1 *local_568;
  longlong *local_560;
  longlong *local_558;
  undefined1 *local_550;
  longlong *local_548;
  longlong *local_540;
  undefined1 *local_538;
  undefined1 local_530 [8];
  longlong *local_528;
  undefined1 local_520 [8];
  longlong *local_518;
  undefined1 local_510 [8];
  longlong *local_508;
  undefined1 local_500 [8];
  longlong *local_4f8;
  undefined1 local_4e8 [264];
  longlong local_3e0;
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [264];
  longlong local_2a0;
  undefined1 local_288 [264];
  longlong local_180;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_658;
  cVar5 = *(char *)(param_1 + 0x100);
  local_620 = 0;
  plStack_618 = (longlong *)0x0;
  if (cVar5 == '\0') {
    plVar8 = (longlong *)operator_new(0x248);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144044b58;
      if (plVar8 != (longlong *)0xfffffffffffffff0) {
        SHorizontalBox::SHorizontalBox();
      }
    }
    plVar1 = plVar8 + 2;
    local_548 = plVar1;
    local_540 = plVar8;
    FUN_14044f790(&local_548,plVar1);
    local_538 = local_625;
    local_638 = 0x238;
    SWidget::SetDebugInfo
              (plVar1,"SHorizontalBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBox.cpp"
               ,0xc6);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_5e0 = plVar1;
    local_5d8 = plVar8;
    if ((longlong **)(param_1 + 0x130) != &local_5e0) {
      *(longlong **)(param_1 + 0x130) = plVar1;
      local_5e0 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_5d8);
    }
    plVar8 = local_5d8;
    if (local_5d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_5d8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_5d8)(local_5d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5d8 + 8))(local_5d8,1);
        }
      }
    }
    uVar10 = SCanvas::FArguments::FArguments(local_168);
    puVar9 = (undefined8 *)FUN_140693150(&local_548,local_500,uVar10);
    local_598 = (longlong *)puVar9[1];
    local_620 = *puVar9;
    if (local_598 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_598 + 1) = (int)local_598[1] + 1;
      UNLOCK();
    }
    local_5a0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_618,&local_598);
    plVar8 = local_598;
    if (local_598 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_598 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_598)(local_598);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_598 + 8))(local_598,1);
        }
      }
    }
    if (local_4f8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_4f8 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_4f8)(local_4f8);
        LOCK();
        piVar2 = (int *)((longlong)local_4f8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_4f8 + 8))(local_4f8,1);
        }
      }
    }
    plVar8 = local_540;
    if (local_540 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_540 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_540)(local_540);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_540 + 8))(local_540,1);
        }
      }
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_168);
  }
  else if (cVar5 == '\x01') {
    plVar8 = (longlong *)operator_new(0x248);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_DestroyObject_144d503e8;
      if (plVar8 != (longlong *)0xfffffffffffffff0) {
        FUN_1417f4670();
      }
    }
    plVar1 = plVar8 + 2;
    local_560 = plVar1;
    local_558 = plVar8;
    FUN_14044f790(&local_560,plVar1);
    local_550 = &local_626;
    local_638 = 0x238;
    SWidget::SetDebugInfo
              (plVar1,"SVerticalBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBox.cpp"
               ,0xc9);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_5f0 = plVar1;
    local_5e8 = plVar8;
    if ((longlong **)(param_1 + 0x130) != &local_5f0) {
      *(longlong **)(param_1 + 0x130) = plVar1;
      local_5f0 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_5e8);
    }
    plVar8 = local_5e8;
    if (local_5e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_5e8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_5e8)(local_5e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5e8 + 8))(local_5e8,1);
        }
      }
    }
    uVar10 = SCanvas::FArguments::FArguments(local_288);
    puVar9 = (undefined8 *)FUN_1417fd340(&local_560,local_510,uVar10);
    local_5a8 = (longlong *)puVar9[1];
    local_620 = *puVar9;
    if (local_5a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5a8 + 1) = (int)local_5a8[1] + 1;
      UNLOCK();
    }
    local_5b0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_618,&local_5a8);
    plVar8 = local_5a8;
    if (local_5a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_5a8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_5a8)(local_5a8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5a8 + 8))(local_5a8,1);
        }
      }
    }
    if (local_508 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_508 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_508)(local_508);
        LOCK();
        piVar2 = (int *)((longlong)local_508 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_508 + 8))(local_508,1);
        }
      }
    }
    plVar8 = local_558;
    if (local_558 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_558 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_558)(local_558);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_558 + 8))(local_558,1);
        }
      }
    }
    if (local_180 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_288);
  }
  else if (cVar5 == '\x02') {
    lVar7 = SWrapBox::FArguments::FArguments(local_4e8);
    *(undefined1 *)(lVar7 + 0x138) = 1;
    uVar4 = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(lVar7 + 0x130) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(lVar7 + 0x134) = uVar4;
    plVar8 = (longlong *)operator_new(0x268);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144fb2418;
      if (plVar8 != (longlong *)0xfffffffffffffff0) {
        SWrapBox::SWrapBox();
      }
    }
    plVar1 = plVar8 + 2;
    local_578 = plVar1;
    local_570 = plVar8;
    FUN_14044f790(&local_578,plVar1);
    local_568 = &local_627;
    local_638 = 600;
    SWidget::SetDebugInfo
              (plVar1,"SWrapBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBox.cpp"
               ,0xcc);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_600 = plVar1;
    local_5f8 = plVar8;
    if ((longlong **)(param_1 + 0x130) != &local_600) {
      *(longlong **)(param_1 + 0x130) = plVar1;
      local_600 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_5f8);
    }
    plVar8 = local_5f8;
    if (local_5f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_5f8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_5f8)(local_5f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5f8 + 8))(local_5f8,1);
        }
      }
    }
    puVar9 = (undefined8 *)FUN_1420db0e0(&local_578,local_520,lVar7);
    local_5b8 = (longlong *)puVar9[1];
    local_620 = *puVar9;
    if (local_5b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5b8 + 1) = (int)local_5b8[1] + 1;
      UNLOCK();
    }
    local_5c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_618,&local_5b8);
    plVar8 = local_5b8;
    if (local_5b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_5b8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_5b8)(local_5b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5b8 + 8))(local_5b8,1);
        }
      }
    }
    if (local_518 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_518 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_518)(local_518);
        LOCK();
        piVar2 = (int *)((longlong)local_518 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_518 + 8))(local_518,1);
        }
      }
    }
    plVar8 = local_570;
    if (local_570 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_570 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_570)(local_570);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_570 + 8))(local_570,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_3c8);
    if (local_3e0 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_4e8);
  }
  else if (cVar5 == '\x03') {
    lVar7 = SOverlay::FArguments::FArguments(local_3a8);
    *(undefined1 *)(lVar7 + 0xf1) = 1;
    plVar8 = (longlong *)operator_new(0x240);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_1440f90d0;
      if (plVar8 != (longlong *)0xfffffffffffffff0) {
        FUN_1417f4610();
      }
    }
    plVar1 = plVar8 + 2;
    local_590 = plVar1;
    local_588 = plVar8;
    FUN_14044f790(&local_590,plVar1);
    local_580 = &local_628;
    local_638 = 0x230;
    SWidget::SetDebugInfo
              (plVar1,"SOverlay",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBox.cpp"
               ,0xd1);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_610 = plVar1;
    local_608 = plVar8;
    if ((longlong **)(param_1 + 0x130) != &local_610) {
      *(longlong **)(param_1 + 0x130) = plVar1;
      local_610 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_608);
    }
    plVar8 = local_608;
    if (local_608 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_608 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_608)(local_608);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_608 + 8))(local_608,1);
        }
      }
    }
    puVar9 = (undefined8 *)FUN_1417fcf70(&local_590,local_530,lVar7);
    local_5c8 = (longlong *)puVar9[1];
    local_620 = *puVar9;
    if (local_5c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5c8 + 1) = (int)local_5c8[1] + 1;
      UNLOCK();
    }
    local_5d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_618,&local_5c8);
    plVar8 = local_5c8;
    if (local_5c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_5c8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_5c8)(local_5c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5c8 + 8))(local_5c8,1);
        }
      }
    }
    if (local_528 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_528 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_528)(local_528);
        LOCK();
        piVar2 = (int *)((longlong)local_528 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_528 + 8))(local_528,1);
        }
      }
    }
    plVar8 = local_588;
    if (local_588 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_588 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_588)(local_588);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_588 + 8))(local_588,1);
        }
      }
    }
    if (local_2a0 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_3a8);
  }
  plVar8 = plStack_618;
  *param_2 = local_620;
  param_2[1] = plStack_618;
  if (plStack_618 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_618 + 1) = (int)plStack_618[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plStack_618 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_618)(plStack_618);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_618 + 8))(plStack_618,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14211e2f0 FUN_14211e2f0 body=1993 status=ok
// SIG undefined FUN_14211e2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14211e2f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 uVar15;
  longlong **pplVar16;
  undefined1 auStack_658 [32];
  longlong local_638;
  longlong local_630;
  undefined4 local_628;
  longlong local_620;
  longlong local_618;
  longlong local_610;
  undefined1 local_608;
  undefined1 local_600;
  longlong local_5f8;
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6;
  undefined1 local_5e5;
  longlong *local_5e0;
  longlong *local_5d8;
  longlong *local_5d0 [2];
  longlong *local_5c0 [2];
  uint local_5b0;
  undefined1 local_5ac;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined8 *local_598;
  undefined4 local_590;
  undefined1 local_58c;
  undefined8 local_588;
  undefined4 local_580;
  undefined1 local_578;
  undefined1 local_577;
  undefined8 local_570;
  undefined4 local_568;
  undefined1 local_560;
  undefined1 local_55f;
  undefined8 local_558;
  undefined4 local_550;
  undefined1 local_548;
  undefined1 local_547;
  undefined8 local_540;
  undefined4 local_538;
  undefined1 local_530;
  undefined1 local_52f;
  undefined8 local_528;
  undefined4 local_520;
  undefined1 local_518;
  undefined1 local_517;
  undefined8 local_510;
  undefined4 local_508;
  undefined4 local_500;
  undefined1 local_4fc;
  longlong local_4f8;
  undefined4 local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined8 local_4e0;
  undefined4 local_4d8;
  longlong *local_4d0;
  longlong *local_4c8;
  undefined1 local_4b8 [1120];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_658;
  local_5b0 = (uint)*(byte *)(param_1 + 0x411);
  local_5e5 = *(undefined1 *)(param_1 + 0x410);
  local_5ac = 1;
  local_5a8 = 0;
  uVar15 = 0;
  local_5a0 = 0;
  local_4e7 = 1;
  local_4e0 = 0;
  local_4d8 = 0;
  switch(*(undefined1 *)(param_1 + 0x40e)) {
  default:
    break;
  case 1:
    uVar15 = 1;
    break;
  case 2:
    uVar15 = 2;
    break;
  case 3:
    uVar15 = 3;
    break;
  case 4:
    uVar15 = 4;
    break;
  case 5:
    uVar15 = 5;
  }
  local_5e6 = *(undefined1 *)(param_1 + 0x40a);
  uVar4 = *(undefined1 *)(param_1 + 0x40c);
  uVar5 = *(undefined1 *)(param_1 + 0x40b);
  uVar2 = *(undefined4 *)(param_1 + 0x404);
  local_5e7 = *(undefined1 *)(param_1 + 0x409);
  local_5e8 = *(undefined1 *)(param_1 + 0x408);
  local_4fc = 1;
  local_4f8 = 0;
  local_4f0 = 0;
  local_517 = 1;
  local_510 = 0;
  local_508 = 0;
  local_52f = 1;
  local_528 = 0;
  local_520 = 0;
  local_547 = 1;
  local_540 = 0;
  local_538 = 0;
  local_55f = 1;
  local_558 = 0;
  local_550 = 0;
  local_577 = 1;
  local_570 = 0;
  local_568 = 0;
  local_58c = 1;
  local_588 = 0;
  local_580 = 0;
  local_598 = param_2;
  local_590 = uVar2;
  local_578 = local_5e8;
  local_560 = local_5e7;
  local_548 = local_5e6;
  local_530 = uVar5;
  local_518 = uVar4;
  local_500 = uVar15;
  local_4e8 = local_5e5;
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_5c0[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d200;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)UEditableText::HandleOnTextCommitted;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_FUN_143f4d248;
  }
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  local_5d0[0] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    plVar12[2] = (longlong)UEditableText::HandleOnTextChanged;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar12[4] = lVar11;
    *plVar12 = (longlong)&PTR_FUN_143f4d2d8;
  }
  lVar11 = SEditableText::FArguments::FArguments(local_4b8);
  *(longlong *)(lVar11 + 0x198) = param_1 + 0x150;
  *(undefined4 *)(lVar11 + 0x3a8) = uVar2;
  *(undefined1 *)(lVar11 + 0x3ac) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x3b0,&local_588);
  *(undefined1 *)(lVar11 + 0x2d8) = local_5e8;
  *(undefined1 *)(lVar11 + 0x2d9) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x2e0,&local_570);
  *(undefined1 *)(lVar11 + 0x2f0) = local_5e7;
  *(undefined1 *)(lVar11 + 0x2f1) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x2f8,&local_558);
  *(undefined1 *)(lVar11 + 0x308) = local_5e6;
  *(undefined1 *)(lVar11 + 0x309) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x310,&local_540);
  *(undefined1 *)(lVar11 + 800) = uVar5;
  *(undefined1 *)(lVar11 + 0x321) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x328,&local_528);
  *(undefined1 *)(lVar11 + 0x3c0) = uVar4;
  *(undefined1 *)(lVar11 + 0x3c1) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x3c8,&local_510);
  pplVar16 = (longlong **)(lVar11 + 0x388);
  if (local_5d0 != pplVar16) {
    if (plVar12 == (longlong *)0x0) {
      if ((*(int *)(lVar11 + 0x390) != 0) && (plVar14 = *pplVar16, plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x28))(plVar14,0);
        if (*pplVar16 != (longlong *)0x0) {
          plVar14 = (longlong *)FMemory::Realloc(*pplVar16,0,0);
          *pplVar16 = plVar14;
        }
        *(undefined4 *)(lVar11 + 0x390) = 0;
      }
    }
    else {
      (**(code **)(*plVar12 + 0x30))(plVar12,pplVar16);
    }
  }
  pplVar16 = (longlong **)(lVar11 + 0x398);
  if (local_5c0 != pplVar16) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar11 + 0x3a0) != 0) && (plVar14 = *pplVar16, plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x28))(plVar14,0);
        if (*pplVar16 != (longlong *)0x0) {
          plVar14 = (longlong *)FMemory::Realloc(*pplVar16,0,0);
          *pplVar16 = plVar14;
        }
        *(undefined4 *)(lVar11 + 0x3a0) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar16);
    }
  }
  *(undefined4 *)(lVar11 + 0x408) = uVar15;
  plVar14 = (longlong *)(lVar11 + 0x410);
  *(undefined1 *)(lVar11 + 0x40c) = 1;
  if (((&local_4f8 != plVar14) && (*(int *)(lVar11 + 0x418) != 0)) &&
     (plVar6 = (longlong *)*plVar14, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    if (*plVar14 != 0) {
      lVar13 = FMemory::Realloc(*plVar14,0,0);
      *plVar14 = lVar13;
    }
    *(undefined4 *)(lVar11 + 0x418) = 0;
  }
  *(undefined1 *)(lVar11 + 0x420) = *(undefined1 *)(param_1 + 0x40f);
  *(undefined1 *)(lVar11 + 0x440) = local_5e5;
  *(undefined1 *)(lVar11 + 0x441) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x448,&local_4e0);
  *(uint *)(lVar11 + 0x338) = local_5b0;
  *(undefined1 *)(lVar11 + 0x33c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x340,&local_5a8);
  plVar14 = (longlong *)operator_new(0x4b8);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144d6e620;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      FUN_141923430();
    }
  }
  plVar6 = plVar14 + 2;
  local_4d0 = plVar6;
  local_4c8 = plVar14;
  FUN_14044f790(&local_4d0,plVar6);
  local_638 = 0x4a8;
  SWidget::SetDebugInfo
            (plVar6,"SEditableText",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\EditableText.cpp",
             0x34);
  local_628 = *(undefined4 *)(lVar11 + 0x90);
  local_5f8 = lVar11 + 0xf8;
  local_610 = lVar11 + 0xe8;
  local_600 = *(undefined1 *)(lVar11 + 0xf1);
  local_618 = lVar11 + 200;
  local_620 = lVar11 + 0x98;
  local_608 = *(undefined1 *)(lVar11 + 0xf0);
  local_630 = lVar11 + 0x78;
  local_638 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141930f60(plVar6,lVar11);
  if (((char)plVar14[5] < '\0') || (cVar8 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar8 != '\0'))
  {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar9;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    plVar12 = local_5d0[0];
    plVar10 = local_5c0[0];
  }
  local_5e0 = plVar14 + 2;
  pplVar16 = (longlong **)(param_1 + 0x438);
  local_5d8 = plVar14;
  if (pplVar16 != &local_5e0) {
    *pplVar16 = local_5e0;
    local_5e0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x440,&local_5d8);
  }
  plVar6 = local_5d8;
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_5d8 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar12 = local_5d0[0];
    plVar10 = local_5c0[0];
    if ((int)lVar11 == 1) {
      (**(code **)*local_5d8)(local_5d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar12 = local_5d0[0];
      plVar10 = local_5c0[0];
      if (iVar3 == 1) {
        (**(code **)(*local_5d8 + 8))(local_5d8,1);
        plVar12 = local_5d0[0];
        plVar10 = local_5c0[0];
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar14 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    LOCK();
    plVar10 = plVar14 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar12 = local_5d0[0];
    plVar10 = local_5c0[0];
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar12 = local_5d0[0];
      plVar10 = local_5c0[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
        plVar12 = local_5d0[0];
        plVar10 = local_5c0[0];
      }
    }
  }
  FUN_141923fa0(local_4b8);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,0);
    local_5d0[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
    if (local_5d0[0] != (longlong *)0x0) {
      FMemory::Free(local_5d0[0]);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_5c0[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_5c0[0] != (longlong *)0x0) {
      FMemory::Free(local_5c0[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_588);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_570);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_558);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_540);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_528);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_510);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5a8);
  puVar7 = local_598;
  plVar10 = *(longlong **)(param_1 + 0x440);
  plVar12 = *pplVar16;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *local_598 = plVar12;
  local_598[1] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  return puVar7;
}



// FUNCTION 14211eae0 FUN_14211eae0 body=2031 status=ok
// SIG undefined FUN_14211eae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14211eae0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined1 auStack_6b8 [32];
  longlong local_698;
  longlong local_690;
  undefined4 local_688;
  longlong local_680;
  longlong local_678;
  longlong local_670;
  undefined1 local_668;
  undefined1 local_660;
  longlong local_658;
  undefined1 local_648;
  undefined1 local_647;
  undefined1 local_646;
  undefined1 local_645;
  undefined1 local_644;
  longlong *local_640;
  longlong *local_638;
  longlong *local_630 [2];
  longlong *local_620 [2];
  uint local_610;
  undefined1 local_60c;
  undefined8 local_608;
  undefined4 local_600;
  undefined8 *local_5f8;
  undefined4 local_5f0;
  undefined1 local_5ec;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined1 local_5d8;
  undefined1 local_5d7;
  undefined8 local_5d0;
  undefined4 local_5c8;
  undefined1 local_5c0;
  undefined1 local_5bf;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590;
  undefined1 local_58f;
  undefined8 local_588;
  undefined4 local_580;
  undefined1 local_578;
  undefined1 local_577;
  undefined8 local_570;
  undefined4 local_568;
  undefined1 local_560;
  undefined1 local_55f;
  undefined8 local_558;
  undefined4 local_550;
  undefined4 local_548;
  undefined1 local_544;
  longlong local_540;
  undefined4 local_538;
  undefined1 local_530;
  undefined1 local_52f;
  undefined8 local_528;
  undefined4 local_520;
  longlong *local_518;
  longlong *local_510;
  undefined1 local_4f8 [1184];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_6b8;
  local_610 = (uint)*(byte *)(param_1 + 0x9e9);
  local_644 = *(undefined1 *)(param_1 + 0x9e8);
  local_60c = 1;
  local_608 = 0;
  uVar16 = 0;
  local_600 = 0;
  local_52f = 1;
  local_528 = 0;
  local_520 = 0;
  switch(*(undefined1 *)(param_1 + 0x9e6)) {
  default:
    break;
  case 1:
    uVar16 = 1;
    break;
  case 2:
    uVar16 = 2;
    break;
  case 3:
    uVar16 = 3;
    break;
  case 4:
    uVar16 = 4;
    break;
  case 5:
    uVar16 = 5;
  }
  local_645 = *(undefined1 *)(param_1 + 0x9e3);
  uVar5 = *(undefined1 *)(param_1 + 0x9e5);
  uVar6 = *(undefined1 *)(param_1 + 0x9e4);
  uVar3 = *(undefined4 *)(param_1 + 0x9cc);
  local_646 = *(undefined1 *)(param_1 + 0x9e2);
  local_647 = *(undefined1 *)(param_1 + 0x9e1);
  local_648 = *(undefined1 *)(param_1 + 0x9e0);
  local_544 = 1;
  local_540 = 0;
  local_538 = 0;
  local_55f = 1;
  local_558 = 0;
  local_550 = 0;
  local_577 = 1;
  local_570 = 0;
  local_568 = 0;
  local_58f = 1;
  local_588 = 0;
  local_580 = 0;
  local_5a7 = 1;
  local_5a0 = 0;
  local_598 = 0;
  local_5bf = 1;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5d7 = 1;
  local_5d0 = 0;
  local_5c8 = 0;
  local_5ec = 1;
  local_5e8 = 0;
  local_5e0 = 0;
  local_5f8 = param_2;
  local_5f0 = uVar3;
  local_5d8 = local_648;
  local_5c0 = local_647;
  local_5a8 = local_646;
  local_590 = local_645;
  local_578 = uVar6;
  local_560 = uVar5;
  local_548 = uVar16;
  local_530 = local_644;
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_620[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d200;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)&LAB_1404c2180;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_FUN_143f4d248;
  }
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  local_630[0] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    plVar12[2] = (longlong)&LAB_1404c2108;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar12[4] = lVar11;
    *plVar12 = (longlong)&PTR_FUN_143f4d2d8;
  }
  lVar11 = FUN_1418ce820(local_4f8);
  *(longlong *)(lVar11 + 0x108) = param_1 + 0x128;
  *(undefined4 *)(lVar11 + 0x378) = uVar3;
  *(undefined1 *)(lVar11 + 0x37c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x380,&local_5e8);
  *(undefined1 *)(lVar11 + 0x2b8) = local_648;
  *(undefined1 *)(lVar11 + 0x2b9) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x2c0,&local_5d0);
  *(undefined1 *)(lVar11 + 0x2d0) = local_647;
  *(undefined1 *)(lVar11 + 0x2d1) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x2d8,&local_5b8);
  *(undefined1 *)(lVar11 + 0x2e8) = local_646;
  *(undefined1 *)(lVar11 + 0x2e9) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x2f0,&local_5a0);
  *(undefined1 *)(lVar11 + 0x300) = local_645;
  *(undefined1 *)(lVar11 + 0x301) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x308,&local_588);
  *(undefined1 *)(lVar11 + 0x390) = uVar6;
  *(undefined1 *)(lVar11 + 0x391) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x398,&local_570);
  *(undefined1 *)(lVar11 + 0x330) = uVar5;
  *(undefined1 *)(lVar11 + 0x331) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x338,&local_558);
  pplVar2 = (longlong **)(lVar11 + 0x358);
  if (local_630 != pplVar2) {
    if (plVar12 == (longlong *)0x0) {
      if ((*(int *)(lVar11 + 0x360) != 0) && (plVar13 = *pplVar2, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar13;
        }
        *(undefined4 *)(lVar11 + 0x360) = 0;
      }
    }
    else {
      (**(code **)(*plVar12 + 0x30))(plVar12,pplVar2);
    }
  }
  pplVar2 = (longlong **)(lVar11 + 0x368);
  if (local_620 != pplVar2) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar11 + 0x370) != 0) && (plVar13 = *pplVar2, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar13;
        }
        *(undefined4 *)(lVar11 + 0x370) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar2);
    }
  }
  *(undefined4 *)(lVar11 + 0x440) = uVar16;
  plVar13 = (longlong *)(lVar11 + 0x448);
  *(undefined1 *)(lVar11 + 0x444) = 1;
  if (((&local_540 != plVar13) && (*(int *)(lVar11 + 0x450) != 0)) &&
     (plVar15 = (longlong *)*plVar13, plVar15 != (longlong *)0x0)) {
    (**(code **)(*plVar15 + 0x28))(plVar15,0);
    if (*plVar13 != 0) {
      lVar14 = FMemory::Realloc(*plVar13,0,0);
      *plVar13 = lVar14;
    }
    *(undefined4 *)(lVar11 + 0x450) = 0;
  }
  *(undefined1 *)(lVar11 + 0x458) = *(undefined1 *)(param_1 + 0x9e7);
  *(undefined1 *)(lVar11 + 0x478) = local_644;
  *(undefined1 *)(lVar11 + 0x479) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x480,&local_528);
  *(uint *)(lVar11 + 0x318) = local_610;
  *(undefined1 *)(lVar11 + 0x31c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 800,&local_608);
  plVar15 = (longlong *)FUN_1418cc850();
  plVar13 = plVar15 + 2;
  local_518 = plVar13;
  local_510 = plVar15;
  FUN_14044f790(&local_518,plVar13);
  local_698 = 0x540;
  SWidget::SetDebugInfo
            (plVar13,"SEditableTextBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\EditableTextBox.cpp"
             ,0x35);
  local_688 = *(undefined4 *)(lVar11 + 0x90);
  local_658 = lVar11 + 0xf8;
  local_670 = lVar11 + 0xe8;
  local_660 = *(undefined1 *)(lVar11 + 0xf1);
  local_678 = lVar11 + 200;
  local_680 = lVar11 + 0x98;
  local_668 = *(undefined1 *)(lVar11 + 0xf0);
  local_690 = lVar11 + 0x78;
  local_698 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar13,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141931a20(plVar13,lVar11);
  if (((char)plVar15[5] < '\0') || (cVar8 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar9;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    plVar12 = local_630[0];
    plVar10 = local_620[0];
  }
  local_640 = plVar15 + 2;
  pplVar2 = (longlong **)(param_1 + 0xa10);
  local_638 = plVar15;
  if (pplVar2 != &local_640) {
    *pplVar2 = local_640;
    local_640 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa18,&local_638);
  }
  plVar13 = local_638;
  if (local_638 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_638 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar12 = local_630[0];
    plVar10 = local_620[0];
    if ((int)lVar11 == 1) {
      (**(code **)*local_638)(local_638);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar12 = local_630[0];
      plVar10 = local_620[0];
      if (iVar4 == 1) {
        (**(code **)(*local_638 + 8))(local_638,1);
        plVar12 = local_630[0];
        plVar10 = local_620[0];
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar15 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    plVar10 = plVar15 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar12 = local_630[0];
    plVar10 = local_620[0];
    if ((int)lVar11 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar12 = local_630[0];
      plVar10 = local_620[0];
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
        plVar12 = local_630[0];
        plVar10 = local_620[0];
      }
    }
  }
  FUN_1418d2030(local_4f8);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,0);
    local_630[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
    if (local_630[0] != (longlong *)0x0) {
      FMemory::Free(local_630[0]);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_620[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_620[0] != (longlong *)0x0) {
      FMemory::Free(local_620[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_588);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_570);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_558);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_540);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_528);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_608);
  puVar7 = local_5f8;
  plVar10 = *(longlong **)(param_1 + 0xa18);
  plVar12 = *pplVar2;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *local_5f8 = plVar12;
  local_5f8[1] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  return puVar7;
}



// FUNCTION 14211f2f0 FUN_14211f2f0 body=2350 status=ok
// SIG undefined FUN_14211f2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14211f2f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  char cVar16;
  byte bVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong **pplVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined1 auStack_5b8 [32];
  longlong local_598;
  longlong local_590;
  undefined4 local_588;
  longlong local_580;
  longlong local_578;
  longlong local_570;
  undefined1 local_568;
  undefined1 local_560;
  longlong local_558;
  undefined1 local_548;
  undefined1 local_547 [7];
  longlong *local_540 [2];
  undefined8 local_530;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 local_520;
  longlong *plStack_518;
  undefined8 local_510;
  longlong *plStack_508;
  longlong *local_500;
  longlong *local_4f8;
  longlong **local_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  undefined8 local_4d8;
  longlong *local_4d0;
  undefined8 local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  longlong *local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 *local_498;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined1 local_480;
  undefined8 local_478;
  longlong *local_470;
  undefined1 local_468;
  undefined8 local_460;
  undefined4 local_458;
  code *local_448;
  undefined1 *puStack_440;
  code *local_438;
  undefined1 *puStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined1 local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  undefined8 local_3a0;
  longlong *plStack_398;
  undefined8 local_390;
  longlong *plStack_388;
  undefined1 local_378 [784];
  ulonglong local_68;
  
  puVar24 = &local_4b8;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  local_530 = (code *)((ulonglong)local_530 & 0xffffffff00000000);
  local_498 = param_2;
  local_4f0 = (longlong **)param_1;
  if (*(longlong *)(param_1 + 0x310) == 0) {
    local_4e8 = DAT_1469eb218;
    local_4e0 = DAT_1469eb220;
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
    puVar23 = &local_4e8;
    bVar14 = false;
    bVar13 = true;
  }
  else {
    puStack_440 = &local_548;
    local_448 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_3d8 = 0x420e6680;
    uStack_3d4 = 1;
    local_548 = 0;
    uStack_3d0 = puStack_440;
    FUN_14213eb80(*(longlong *)(param_1 + 0x310),&local_4c8,&local_3d8);
    puVar23 = &local_4c8;
    bVar14 = true;
    bVar13 = false;
  }
  plVar4 = local_4e0;
  plVar3 = (longlong *)puVar23[1];
  local_4a8 = *puVar23;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((bVar13) && (local_4e0 != (longlong *)0x0)) {
    LOCK();
    plVar18 = local_4e0 + 1;
    lVar19 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_4e0)(local_4e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4e0 + 8))(local_4e0,1);
      }
    }
  }
  plVar4 = local_4c0;
  if ((bVar14) && (local_4c0 != (longlong *)0x0)) {
    LOCK();
    plVar18 = local_4c0 + 1;
    lVar19 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_4c0)(local_4c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4c0 + 8))(local_4c0,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x318) == 0) {
    local_4d8 = DAT_1469eb218;
    local_4d0 = DAT_1469eb220;
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
    puVar24 = &local_4d8;
    bVar14 = false;
    bVar13 = true;
  }
  else {
    puStack_430 = local_547;
    local_438 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_3c8 = 0x420e6680;
    uStack_3c4 = 1;
    local_547[0] = 0;
    uStack_3c0 = puStack_430;
    FUN_14213eb80(*(longlong *)(param_1 + 0x318),puVar24,&local_3c8);
    bVar14 = true;
    bVar13 = false;
  }
  plVar18 = local_4d0;
  local_4a0 = *puVar24;
  plVar4 = (longlong *)puVar24[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((bVar13) && (local_4d0 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_4d0 + 1;
    lVar19 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_4d0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4d0 + 8))(local_4d0,1);
      }
    }
  }
  plVar18 = local_4b0;
  if ((bVar14) && (local_4b0 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_4b0 + 1;
    lVar19 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_4b0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4b0 + 8))(local_4b0,1);
      }
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x2e0);
  uVar6 = *(undefined4 *)(param_1 + 0x2e4);
  uVar7 = *(undefined4 *)(param_1 + 0x2e8);
  uVar8 = *(undefined4 *)(param_1 + 0x2ec);
  uVar9 = *(undefined4 *)(param_1 + 0x2f0);
  uVar10 = *(undefined4 *)(param_1 + 0x2f4);
  uVar11 = *(undefined4 *)(param_1 + 0x2f8);
  uVar12 = *(undefined4 *)(param_1 + 0x2fc);
  local_530 = UExpandableArea::SlateExpansionChanged;
  local_480 = *(undefined1 *)(param_1 + 0x2c0);
  local_490 = *(undefined4 *)(param_1 + 0x2b0);
  uStack_48c = *(undefined4 *)(param_1 + 0x2b4);
  uStack_488 = *(undefined4 *)(param_1 + 0x2b8);
  uStack_484 = *(undefined4 *)(param_1 + 700);
  local_478 = *(undefined8 *)(param_1 + 0x2c8);
  local_470 = *(longlong **)(param_1 + 0x2d0);
  uStack_528 = 0;
  local_3f0 = 1;
  local_3e8 = 0;
  local_3e0 = 0;
  local_418 = 1;
  local_410 = 0;
  local_408 = 0;
  if (local_470 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_470 + 1) = (int)local_470[1] + 1;
    UNLOCK();
  }
  local_468 = 1;
  local_460 = 0;
  local_458 = 0;
  local_428 = uVar9;
  uStack_424 = uVar10;
  uStack_420 = uVar11;
  uStack_41c = uVar12;
  local_400 = uVar5;
  uStack_3fc = uVar6;
  uStack_3f8 = uVar7;
  uStack_3f4 = uVar8;
  plVar18 = (longlong *)FMemory::Realloc(0,0x30);
  local_540[0] = plVar18;
  if (plVar18 != (longlong *)0x0) {
    *plVar18 = (longlong)&PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(plVar18 + 1,param_1);
    *(undefined4 *)(plVar18 + 2) = (undefined4)local_530;
    *(undefined4 *)((longlong)plVar18 + 0x14) = local_530._4_4_;
    *(undefined4 *)(plVar18 + 3) = uStack_528;
    *(undefined4 *)((longlong)plVar18 + 0x1c) = uStack_524;
    lVar19 = FDelegateHandle::GenerateNewID();
    plVar18[5] = lVar19;
    *plVar18 = (longlong)&PTR_FUN_143fcff98;
  }
  lVar19 = FUN_1419c01d0(local_378);
  *(longlong *)(lVar19 + 0x108) = param_1 + 0x108;
  *(longlong *)(lVar19 + 0x150) = param_1 + 0x228;
  local_530 = (code *)lVar19;
  FUN_140692440(lVar19 + 0x110,&local_490);
  *(undefined1 *)(lVar19 + 0x138) = local_468;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x140,&local_460);
  *(undefined4 *)(lVar19 + 0x1f8) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(lVar19 + 0x250) = uVar9;
  *(undefined4 *)(lVar19 + 0x254) = uVar10;
  *(undefined4 *)(lVar19 + 600) = uVar11;
  *(undefined4 *)(lVar19 + 0x25c) = uVar12;
  *(undefined1 *)(lVar19 + 0x260) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x268,&local_410);
  *(undefined1 *)(lVar19 + 0x238) = 1;
  *(undefined4 *)(lVar19 + 0x228) = uVar5;
  *(undefined4 *)(lVar19 + 0x22c) = uVar6;
  *(undefined4 *)(lVar19 + 0x230) = uVar7;
  *(undefined4 *)(lVar19 + 0x234) = uVar8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar19 + 0x240,&local_3e8);
  pplVar22 = (longlong **)(lVar19 + 0x278);
  if (local_540 != pplVar22) {
    if (plVar18 == (longlong *)0x0) {
      if ((*(int *)(lVar19 + 0x280) != 0) && (plVar20 = *pplVar22, plVar20 != (longlong *)0x0)) {
        (**(code **)(*plVar20 + 0x28))(plVar20,0);
        if (*pplVar22 != (longlong *)0x0) {
          plVar20 = (longlong *)FMemory::Realloc(*pplVar22,0,0);
          *pplVar22 = plVar20;
        }
        *(undefined4 *)(lVar19 + 0x280) = 0;
      }
    }
    else {
      (**(code **)(*plVar18 + 0x30))(plVar18,pplVar22);
    }
  }
  puVar24 = (undefined8 *)(lVar19 + 0x1a0);
  local_520 = local_4a8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar18 = local_540[0];
  }
  plStack_518 = plVar3;
  if (&local_520 != puVar24) {
    local_520 = *puVar24;
    plStack_518 = *(longlong **)(lVar19 + 0x1a8);
    local_3a0 = local_4a8;
    *puVar24 = local_4a8;
    *(longlong **)(lVar19 + 0x1a8) = plVar3;
    plStack_398 = plVar3;
  }
  plVar20 = plStack_518;
  if (plStack_518 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_518 + 1;
    lVar15 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    plVar18 = local_540[0];
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_518)(plStack_518);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar18 = local_540[0];
      if (iVar2 == 1) {
        (**(code **)(*plStack_518 + 8))(plStack_518,1);
        plVar18 = local_540[0];
      }
    }
  }
  puVar24 = (undefined8 *)(lVar19 + 0x1b0);
  local_510 = local_4a0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar18 = local_540[0];
  }
  plStack_508 = plVar4;
  if (&local_510 != puVar24) {
    local_510 = *puVar24;
    plStack_508 = *(longlong **)(lVar19 + 0x1b8);
    local_390 = local_4a0;
    *puVar24 = local_4a0;
    *(longlong **)(lVar19 + 0x1b8) = plVar4;
    plStack_388 = plVar4;
  }
  plVar20 = plStack_508;
  if (plStack_508 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_508 + 1;
    lVar19 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    plVar18 = local_540[0];
    if ((int)lVar19 == 1) {
      (**(code **)*plStack_508)(plStack_508);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar18 = local_540[0];
      if (iVar2 == 1) {
        (**(code **)(*plStack_508 + 8))(plStack_508,1);
        plVar18 = local_540[0];
      }
    }
  }
  plVar21 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SExpandableArea>();
  plVar20 = plVar21 + 2;
  local_3b8 = plVar20;
  local_3b0 = plVar21;
  FUN_14044f790(&local_3b8,plVar20);
  local_598 = 0x388;
  SWidget::SetDebugInfo
            (plVar20,"SExpandableArea",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ExpandableArea.cpp",
             0x74);
  local_558 = (longlong)local_530 + 0xf8;
  local_570 = (longlong)local_530 + 0xe8;
  local_578 = (longlong)local_530 + 200;
  local_580 = (longlong)local_530 + 0x98;
  local_590 = (longlong)local_530 + 0x78;
  local_598 = (longlong)local_530 + 0x60;
  local_560 = *(undefined1 *)((longlong)local_530 + 0xf1);
  local_568 = *(undefined1 *)((longlong)local_530 + 0xf0);
  local_588 = *(undefined4 *)((longlong)local_530 + 0x90);
  SWidget::SWidgetConstruct(plVar20,local_530,(longlong)local_530 + 0x30,(longlong)local_530 + 0x40)
  ;
  FUN_1419729b0(plVar20,local_530);
  if (-1 < (char)plVar21[5]) {
    cVar16 = (**(code **)(*plVar20 + 0x1e8))(plVar20);
    if (cVar16 == '\0') {
      bVar17 = 0;
      goto LAB_14211f974;
    }
  }
  bVar17 = 1;
LAB_14211f974:
  *(byte *)((longlong)plVar21 + 0x29) = *(byte *)((longlong)plVar21 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar21 + 0x29) = *(byte *)((longlong)plVar21 + 0x29) | bVar17;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    plVar18 = local_540[0];
  }
  local_500 = plVar21 + 2;
  pplVar22 = (longlong **)((longlong)local_4f0 + 800);
  local_4f8 = plVar21;
  if (pplVar22 != &local_500) {
    *pplVar22 = local_500;
    lVar19 = (longlong)local_4f0 + 0x328;
    local_500 = (longlong *)0x0;
    local_4f0 = pplVar22;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar19,&local_4f8);
    pplVar22 = local_4f0;
  }
  local_4f0 = pplVar22;
  plVar20 = local_4f8;
  if (local_4f8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_4f8 + 1;
    lVar19 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    plVar18 = local_540[0];
    if ((int)lVar19 == 1) {
      (**(code **)*local_4f8)(local_4f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar18 = local_540[0];
      if (iVar2 == 1) {
        (**(code **)(*local_4f8 + 8))(local_4f8,1);
        plVar18 = local_540[0];
      }
    }
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar21 + 1;
    lVar19 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
    LOCK();
    plVar18 = plVar21 + 1;
    lVar19 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    plVar18 = local_540[0];
    if ((int)lVar19 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar18 = local_540[0];
      if (iVar2 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
        plVar18 = local_540[0];
      }
    }
  }
  SExpandableArea::FArguments::~FArguments(local_378);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x28))(plVar18,0);
    local_540[0] = (longlong *)FMemory::Realloc(plVar18,0,0);
    if (local_540[0] != (longlong *)0x0) {
      FMemory::Free(local_540[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_460);
  plVar18 = local_470;
  if (local_470 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_470 + 1;
    lVar19 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_470)(local_470);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_470 + 8))(local_470,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3e8);
  puVar24 = local_498;
  plVar18 = *local_4f0;
  plVar20 = local_4f0[1];
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  *local_498 = plVar18;
  local_498[1] = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar20 + 1;
      lVar19 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20,1);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar4 + 1;
    lVar19 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar19 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
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
  return puVar24;
}



// FUNCTION 14211fc20 FUN_14211fc20 body=934 status=ok
// SIG undefined FUN_14211fc20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211fc20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_188 [320];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  plVar8 = (longlong *)operator_new(0x288);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144d81de8;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      SGridPanel::SGridPanel();
    }
  }
  plVar11 = plVar8 + 2;
  local_1a8 = plVar11;
  local_1a0 = plVar8;
  FUN_14044f790(&local_1a8,plVar11);
  local_228 = 0x278;
  SWidget::SetDebugInfo
            (plVar11,"SGridPanel",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\GridPanel.cpp",0x3a)
  ;
  lVar9 = SGridPanel::FArguments::FArguments(local_188);
  local_1e8 = lVar9 + 0xf8;
  local_1f0 = *(undefined1 *)(lVar9 + 0xf1);
  local_200 = lVar9 + 0xe8;
  local_218 = *(undefined4 *)(lVar9 + 0x90);
  local_208 = lVar9 + 200;
  local_210 = lVar9 + 0x98;
  local_1f8 = *(undefined1 *)(lVar9 + 0xf0);
  local_220 = lVar9 + 0x78;
  local_228 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SGridPanel::Construct(plVar11,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x138);
  local_1d8 = plVar11;
  local_1d0 = plVar8;
  if (pplVar3 != &local_1d8) {
    *pplVar3 = plVar11;
    local_1d8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x140,&local_1d0);
  }
  plVar11 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  SGridPanel::FArguments::~FArguments(local_188);
  plVar11 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar11 + *(int *)(param_1 + 0x108);
  for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar10 = UGridSlot::GetPrivateStaticClass();
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
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_1b8 = *pplVar3;
        local_1b0 = *(longlong *)(param_1 + 0x140);
        if (local_1b0 != 0) {
          LOCK();
          *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e3c50(lVar9,&local_1b8);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x140);
  local_1c8 = *pplVar3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1c8;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1c0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14211ffd0 FUN_14211ffd0 body=914 status=ok
// SIG undefined FUN_14211ffd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14211ffd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar8 = (longlong *)operator_new(0x248);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144044b58;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar11 = plVar8 + 2;
  local_188 = plVar11;
  local_180 = plVar8;
  FUN_14044f790(&local_188,plVar11);
  local_208 = 0x238;
  SWidget::SetDebugInfo
            (plVar11,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\HorizontalBox.cpp",
             0x3d);
  lVar9 = SCanvas::FArguments::FArguments(local_168);
  local_1c8 = lVar9 + 0xf8;
  local_1d0 = *(undefined1 *)(lVar9 + 0xf1);
  local_1e0 = lVar9 + 0xe8;
  local_1f8 = *(undefined4 *)(lVar9 + 0x90);
  local_1e8 = lVar9 + 200;
  local_1f0 = lVar9 + 0x98;
  local_1d8 = *(undefined1 *)(lVar9 + 0xf0);
  local_200 = lVar9 + 0x78;
  local_208 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SHorizontalBox::Construct(plVar11,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x118);
  local_1b8 = plVar11;
  local_1b0 = plVar8;
  if (pplVar3 != &local_1b8) {
    *pplVar3 = plVar11;
    local_1b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x120,&local_1b0);
  }
  plVar11 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  plVar11 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar11 + *(int *)(param_1 + 0x108);
  for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar10 = UHorizontalBoxSlot::GetPrivateStaticClass();
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
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_198 = *pplVar3;
        local_190 = *(longlong *)(param_1 + 0x120);
        if (local_190 != 0) {
          LOCK();
          *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e3f50(lVar9,&local_198);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x120);
  local_1a8 = *pplVar3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1a8;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1a0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142120370 FUN_142120370 body=799 status=ok
// SIG undefined FUN_142120370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142120370(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined4 local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208;
  undefined1 local_200;
  longlong local_1f8;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined1 local_1b8 [280];
  undefined1 local_a0 [48];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  plVar7 = (longlong *)FUN_140c61c00();
  plVar4 = plVar7 + 2;
  local_1d8 = plVar4;
  local_1d0 = plVar7;
  FUN_14044f790(&local_1d8,plVar4);
  local_238 = 0x278;
  SWidget::SetDebugInfo
            (plVar4,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Image.cpp",0x2d);
  lVar8 = SImage::FArguments::FArguments(local_1b8);
  local_1f8 = lVar8 + 0xf8;
  local_200 = *(undefined1 *)(lVar8 + 0xf1);
  local_210 = lVar8 + 0xe8;
  local_228 = *(undefined4 *)(lVar8 + 0x90);
  local_218 = lVar8 + 200;
  local_220 = lVar8 + 0x98;
  local_208 = *(undefined1 *)(lVar8 + 0xf0);
  local_230 = lVar8 + 0x78;
  local_238 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SImage::Construct(plVar4,lVar8);
  if (((char)plVar7[5] < '\0') || (cVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar5 != '\0')) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  pplVar9 = (longlong **)(param_1 + 0x1c8);
  local_1e8 = plVar4;
  local_1e0 = plVar7;
  if (pplVar9 != &local_1e8) {
    *pplVar9 = plVar4;
    local_1e8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1d0,&local_1e0);
  }
  plVar4 = local_1e0;
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1e0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar4 = plVar7 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_60);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_a0);
  FUN_140456c70(local_1b8);
  plVar4 = *(longlong **)(param_1 + 0x1d0);
  plVar7 = *pplVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return param_2;
}



// FUNCTION 142120690 FUN_142120690 body=1857 status=ok
// SIG undefined FUN_142120690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142120690(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  int iVar12;
  undefined1 auStack_3f8 [32];
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined1 local_3a8;
  undefined1 local_3a0;
  longlong local_398;
  longlong *local_388 [2];
  longlong *local_378 [2];
  longlong *local_368;
  longlong *local_360;
  longlong local_358;
  int local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 local_340;
  longlong *local_338;
  uint local_330;
  undefined1 local_328;
  undefined8 local_320;
  undefined4 local_318;
  longlong *local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined1 local_2c8 [24];
  undefined1 local_2b0 [24];
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  local_348 = *(undefined8 *)(param_1 + 0x558);
  local_308 = *(undefined4 *)(param_1 + 0x5c8);
  uStack_304 = *(undefined4 *)(param_1 + 0x5cc);
  uStack_300 = *(undefined4 *)(param_1 + 0x5d0);
  uStack_2fc = *(undefined4 *)(param_1 + 0x5d4);
  local_340 = *(undefined8 *)(param_1 + 0x560);
  local_338 = *(longlong **)(param_1 + 0x568);
  local_2f8 = 1;
  local_2f0 = 0;
  local_2e8 = 0;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_338 + 1) = (int)local_338[1] + 1;
    UNLOCK();
  }
  local_328 = 1;
  local_330 = local_330 ^ (*(uint *)(param_1 + 0x570) ^ local_330) & 0xf;
  local_320 = 0;
  local_318 = 0;
  local_310 = param_2;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_378[0] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)&LAB_142102500;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_388[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    plVar6[2] = (longlong)&LAB_1404c2108;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar5;
    *plVar6 = (longlong)&PTR_FUN_143f4d2d8;
  }
  iVar12 = *(int *)(param_1 + 0x628);
  lVar5 = *(longlong *)(param_1 + 0x620);
  local_358 = 0;
  local_350 = iVar12;
  if (iVar12 == 0) {
    local_34c = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_358,iVar12,0);
    lVar5 = lVar5 - local_358;
    puVar10 = (undefined8 *)(local_358 + 8);
    do {
      puVar10[-1] = *(undefined8 *)(lVar5 + -8 + (longlong)puVar10);
      *puVar10 = *(undefined8 *)(lVar5 + (longlong)puVar10);
      lVar7 = *(longlong *)(lVar5 + 8 + (longlong)puVar10);
      puVar10[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      puVar10 = puVar10 + 3;
      iVar12 = iVar12 + -1;
      plVar4 = local_378[0];
      plVar6 = local_388[0];
    } while (iVar12 != 0);
  }
  lVar5 = FUN_1420cda70(local_298);
  FKey::operator=(lVar5 + 0x108,&local_348);
  *(uint *)(lVar5 + 0x120) = *(uint *)(lVar5 + 0x120) & 0xfffffff0;
  *(uint *)(lVar5 + 0x120) = *(uint *)(lVar5 + 0x120) | local_330 & 0xf;
  *(undefined1 *)(lVar5 + 0x128) = local_328;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x130,&local_320);
  *(undefined1 *)(lVar5 + 0x1b8) = 1;
  *(undefined4 *)(lVar5 + 0x1a8) = local_308;
  *(undefined4 *)(lVar5 + 0x1ac) = uStack_304;
  *(undefined4 *)(lVar5 + 0x1b0) = uStack_300;
  *(undefined4 *)(lVar5 + 0x1b4) = uStack_2fc;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x1c0,&local_2f0);
  *(longlong *)(lVar5 + 0x1d0) = param_1 + 0x100;
  *(longlong *)(lVar5 + 0x1d8) = param_1 + 0x378;
  lVar7 = FText::FText(local_2c8,param_1 + 0x5e8);
  FText::operator=(lVar5 + 0x1e0,lVar7);
  plVar8 = *(longlong **)(lVar7 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_378[0];
    plVar6 = local_388[0];
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_378[0];
      plVar6 = local_388[0];
      if (iVar12 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
        plVar4 = local_378[0];
        plVar6 = local_388[0];
      }
    }
  }
  lVar7 = FText::FText(local_2b0,param_1 + 0x600);
  FText::operator=(lVar5 + 0x1f8,lVar7);
  plVar8 = *(longlong **)(lVar7 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_378[0];
    plVar6 = local_388[0];
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_378[0];
      plVar6 = local_388[0];
      if (iVar12 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
        plVar4 = local_378[0];
        plVar6 = local_388[0];
      }
    }
  }
  *(undefined1 *)(lVar5 + 0x210) = *(undefined1 *)(param_1 + 0x618);
  *(undefined1 *)(lVar5 + 0x211) = *(undefined1 *)(param_1 + 0x619);
  TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(lVar5 + 0x218,&local_358);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_358);
  pplVar11 = (longlong **)(lVar5 + 0x228);
  if (local_388 != pplVar11) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x230) != 0) && (plVar8 = *pplVar11, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar11 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar11,0,0);
          *pplVar11 = plVar8;
        }
        *(undefined4 *)(lVar5 + 0x230) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,pplVar11);
    }
  }
  pplVar11 = (longlong **)(lVar5 + 0x238);
  if (local_378 != pplVar11) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x240) != 0) && (plVar8 = *pplVar11, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar11 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar11,0,0);
          *pplVar11 = plVar8;
        }
        *(undefined4 *)(lVar5 + 0x240) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,pplVar11);
    }
  }
  plVar9 = (longlong *)FUN_1420cb6d0();
  plVar8 = plVar9 + 2;
  local_2e0 = plVar8;
  local_2d8 = plVar9;
  FUN_14044f790(&local_2e0,plVar8);
  local_3d8 = 1000;
  SWidget::SetDebugInfo
            (plVar8,"SInputKeySelector",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\InputKeySelector.cpp"
             ,0x8d);
  local_3c8 = *(undefined4 *)(lVar5 + 0x90);
  local_398 = lVar5 + 0xf8;
  local_3b0 = lVar5 + 0xe8;
  local_3a0 = *(undefined1 *)(lVar5 + 0xf1);
  local_3b8 = lVar5 + 200;
  local_3c0 = lVar5 + 0x98;
  local_3a8 = *(undefined1 *)(lVar5 + 0xf0);
  local_3d0 = lVar5 + 0x78;
  local_3d8 = lVar5 + 0x60;
  plVar8 = plVar9 + 2;
  SWidget::SWidgetConstruct(plVar8,lVar5,lVar5 + 0x30,lVar5 + 0x40);
  FUN_141932ca0(plVar8,lVar5);
  if (((char)plVar9[5] < '\0') || (cVar2 = (**(code **)(*plVar8 + 0x1e8))(plVar8), cVar2 != '\0')) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar3;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar4 = local_378[0];
    plVar6 = local_388[0];
  }
  pplVar11 = (longlong **)(param_1 + 0x650);
  local_368 = plVar8;
  local_360 = plVar9;
  if (pplVar11 != &local_368) {
    *pplVar11 = plVar8;
    local_368 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x658,&local_360);
  }
  plVar8 = local_360;
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_360 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_378[0];
    plVar6 = local_388[0];
    if ((int)lVar5 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_378[0];
      plVar6 = local_388[0];
      if (iVar12 == 1) {
        (**(code **)(*local_360 + 8))(local_360,1);
        plVar4 = local_378[0];
        plVar6 = local_388[0];
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar4 = plVar9 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_378[0];
    plVar6 = local_388[0];
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_378[0];
      plVar6 = local_388[0];
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
        plVar4 = local_378[0];
        plVar6 = local_388[0];
      }
    }
  }
  FUN_1420d7c00(local_298);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_388[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_388[0] != (longlong *)0x0) {
      FMemory::Free(local_388[0]);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    local_378[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
    if (local_378[0] != (longlong *)0x0) {
      FMemory::Free(local_378[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_320);
  plVar4 = local_338;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_338 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_338 + 8))(local_338,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2f0);
  plVar8 = local_310;
  plVar4 = *(longlong **)(param_1 + 0x658);
  plVar6 = *pplVar11;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *local_310 = (longlong)plVar6;
  local_310[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return plVar8;
}



// FUNCTION 142120de0 FUN_142120de0 body=1087 status=ok
// SIG undefined FUN_142120de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142120de0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  undefined1 uVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_258 [32];
  longlong local_238;
  longlong local_230;
  undefined4 local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208;
  undefined1 local_200;
  longlong local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  code *local_1b8;
  undefined1 *puStack_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_168 [272];
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  uVar5 = *(undefined1 *)(param_1 + 0x119);
  local_1d0 = 0;
  lVar11 = FUN_1420cdd90(local_168);
  *(undefined1 *)(lVar11 + 0x118) = uVar5;
  plVar12 = (longlong *)operator_new(0x480);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144fb2438;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      FUN_141961be0();
    }
  }
  plVar6 = plVar12 + 2;
  local_188 = plVar6;
  local_180 = plVar12;
  FUN_14044f790(&local_188,plVar6);
  local_238 = 0x470;
  SWidget::SetDebugInfo
            (plVar6,"SInvalidationPanel",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\InvalidationBox.cpp"
             ,0x1e);
  local_228 = *(undefined4 *)(lVar11 + 0x90);
  local_1f8 = lVar11 + 0xf8;
  local_210 = lVar11 + 0xe8;
  local_200 = *(undefined1 *)(lVar11 + 0xf1);
  local_218 = lVar11 + 200;
  local_220 = lVar11 + 0x98;
  local_208 = *(undefined1 *)(lVar11 + 0xf0);
  local_230 = lVar11 + 0x78;
  local_238 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_141974040(plVar6,lVar11);
  if (((char)plVar12[5] < '\0') || (cVar9 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar9 != '\0'))
  {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar10;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x120);
  local_1e0 = plVar6;
  local_1d8 = plVar12;
  if (pplVar3 != &local_1e0) {
    *pplVar3 = plVar6;
    local_1e0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&local_1d8);
  }
  plVar6 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar12 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar6 = plVar12 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_58 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FUN_140456c70(local_168);
  FUN_1419a0830(*pplVar3,*(undefined1 *)(param_1 + 0x118));
  if (0 < *(int *)(param_1 + 0x108)) {
    lVar11 = *(longlong *)(**(longlong **)(param_1 + 0x100) + 0x30);
    if (lVar11 == 0) {
      local_1c8 = DAT_1469eb218;
      local_1c0 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar13 = &local_1c8;
      bVar8 = false;
      bVar7 = true;
    }
    else {
      puStack_1b0 = local_1e8;
      local_1e8[0] = 0;
      local_1b8 = UE4Function_Private::
                  TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                  ::Call;
      local_198 = 0x420e6680;
      uStack_194 = 1;
      uStack_190 = puStack_1b0;
      FUN_14213eb80(lVar11,&local_1a8,&local_198);
      puVar13 = &local_1a8;
      bVar8 = true;
      bVar7 = false;
    }
    FUN_1419a0cc0(*pplVar3,puVar13);
    plVar12 = local_1c0;
    if ((bVar7) && (local_1c0 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_1c0 + 1;
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if ((bVar8) && (local_1a0 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_1a0 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar2 = (int *)((longlong)local_1a0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x128);
  plVar6 = *pplVar3;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar6;
  param_2[1] = (longlong)plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar12 + 1;
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142121220 FUN_142121220 body=1121 status=ok
// SIG undefined FUN_142121220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142121220(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_4b8 [32];
  longlong local_498;
  longlong local_490;
  undefined4 local_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  undefined1 local_468;
  undefined1 local_460;
  longlong local_458;
  longlong local_448;
  longlong *local_440;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined1 local_408 [8];
  longlong *local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  if (param_1[0x20] != 0) {
    lVar7 = UUserWidget::GetPrivateStaticClass();
    for (lVar9 = param_1[0x20]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar7) {
        if (param_1[0x20] != 0) {
          plVar10 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1,local_408);
          local_440 = (longlong *)plVar10[1];
          local_448 = *plVar10;
          if (local_440 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_440 + 1) = (int)local_440[1] + 1;
            UNLOCK();
          }
          plVar10 = param_1 + 0x3f;
          if (plVar10 != &local_448) {
            *plVar10 = local_448;
            local_448 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_440);
          }
          plVar4 = local_440;
          if (local_440 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_440 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_440)(local_440);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_440 + 8))(local_440,1);
              }
            }
          }
          if (local_400 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_400 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_400)(local_400);
              LOCK();
              piVar2 = (int *)((longlong)local_400 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_400 + 8))(local_400,1);
              }
            }
          }
          plVar4 = (longlong *)param_1[0x40];
          lVar9 = *plVar10;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          *param_2 = lVar9;
          param_2[1] = (longlong)plVar4;
          if (plVar4 == (longlong *)0x0) {
            return param_2;
          }
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          if (plVar4 == (longlong *)0x0) {
            return param_2;
          }
          LOCK();
          plVar10 = plVar4 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 != 1) {
            return param_2;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 != 1) {
            return param_2;
          }
          (**(code **)(*plVar4 + 8))(plVar4,1);
          return param_2;
        }
        break;
      }
    }
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_3e0,L"No EntryWidgetClass specified on this list",&DAT_144f99888,
                     L"Error_MissingEntryWidgetClass");
  FText::FText(local_438,uVar8);
  local_420 = 1;
  local_418 = 0;
  local_410 = 0;
  lVar9 = STextBlock::FArguments::FArguments(local_3c8);
  FText::operator=(lVar9 + 0x108,local_438);
  *(undefined1 *)(lVar9 + 0x120) = local_420;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_418);
  plVar10 = (longlong *)operator_new(0x660);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144043520;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar4 = plVar10 + 2;
  local_3f8 = plVar4;
  local_3f0 = plVar10;
  FUN_14044f790(&local_3f8,plVar4);
  local_498 = 0x650;
  SWidget::SetDebugInfo
            (plVar4,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ListViewBase.cpp",
             0x44);
  local_488 = *(undefined4 *)(lVar9 + 0x90);
  local_458 = lVar9 + 0xf8;
  local_470 = lVar9 + 0xe8;
  local_460 = *(undefined1 *)(lVar9 + 0xf1);
  local_478 = lVar9 + 200;
  local_480 = lVar9 + 0x98;
  local_468 = *(undefined1 *)(lVar9 + 0xf0);
  local_490 = lVar9 + 0x78;
  local_498 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1419b0120(plVar4,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar4 = plVar10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_140691150(local_3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
  if (local_430 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_430 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_3d8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3d8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_3d8)(local_3d8);
      LOCK();
      piVar2 = (int *)((longlong)local_3d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3d8 + 8))(local_3d8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142121690 FUN_142121690 body=1836 status=ok
// SIG undefined FUN_142121690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142121690(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong **pplVar14;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0 [2];
  longlong *local_290 [2];
  longlong *local_280;
  longlong *local_278;
  longlong **local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong *local_248;
  longlong *local_240;
  uint local_238;
  undefined1 local_234;
  longlong local_230;
  undefined4 local_228;
  code *local_218;
  undefined1 *puStack_210;
  undefined8 local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined1 local_1c8 [272];
  longlong *local_b8;
  longlong *local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined1 local_68 [17];
  undefined1 local_57;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  bVar7 = *(byte *)(param_1 + 0x130);
  local_270 = (longlong **)((ulonglong)local_270 & 0xffffffff00000000);
  local_234 = 1;
  local_230 = 0;
  local_228 = 0;
  local_268 = param_1;
  local_240 = param_2;
  local_238 = (uint)bVar7;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_290[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_14419ca48;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)UMenuAnchor::HandleMenuOpenChanged;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_14419ca90;
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_2a0[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_144fb1d58;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)FUN_142101a60;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar9;
  }
  lVar9 = FUN_1418cec60(local_1c8);
  *(uint *)(lVar9 + 0x158) = (uint)bVar7;
  plVar12 = (longlong *)(lVar9 + 0x160);
  *(undefined1 *)(lVar9 + 0x15c) = 1;
  if (((&local_230 != plVar12) && (*(int *)(lVar9 + 0x168) != 0)) &&
     (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (*plVar12 != 0) {
      lVar11 = FMemory::Realloc(*plVar12,0,0);
      *plVar12 = lVar11;
    }
    *(undefined4 *)(lVar9 + 0x168) = 0;
  }
  pplVar14 = (longlong **)(lVar9 + 0x138);
  if (local_2a0 != pplVar14) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 0x140) != 0) && (plVar12 = *pplVar14, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar14 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar14,0,0);
          *pplVar14 = plVar12;
        }
        *(undefined4 *)(lVar9 + 0x140) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar14);
    }
  }
  pplVar14 = (longlong **)(lVar9 + 0x148);
  if (local_290 != pplVar14) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 0x150) != 0) && (plVar12 = *pplVar14, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar14 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar14,0,0);
          *pplVar14 = plVar12;
        }
        *(undefined4 *)(lVar9 + 0x150) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar14);
    }
  }
  *(undefined1 *)(lVar9 + 0x172) = *(undefined1 *)(param_1 + 0x131);
  *(undefined1 *)(lVar9 + 0x173) = *(undefined1 *)(param_1 + 0x132);
  plVar12 = (longlong *)operator_new(0x310);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144d6a7f0;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      FUN_141923690();
    }
  }
  plVar3 = plVar12 + 2;
  local_1e8 = plVar3;
  local_1e0 = plVar12;
  FUN_14044f790(&local_1e8,plVar3);
  local_2f8 = 0x300;
  SWidget::SetDebugInfo
            (plVar3,"SMenuAnchor",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\MenuAnchor.cpp",0x1f
            );
  local_2e8 = *(undefined4 *)(lVar9 + 0x90);
  local_2b8 = lVar9 + 0xf8;
  local_2d0 = lVar9 + 0xe8;
  local_2c0 = *(undefined1 *)(lVar9 + 0xf1);
  local_2d8 = lVar9 + 200;
  local_2e0 = lVar9 + 0x98;
  local_2c8 = *(undefined1 *)(lVar9 + 0xf0);
  local_2f0 = lVar9 + 0x78;
  local_2f8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar3,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141933410(plVar3,lVar9);
  if (((char)plVar12[5] < '\0') || (cVar6 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar8 = local_290[0];
    plVar10 = local_2a0[0];
  }
  local_270 = (longlong **)(local_268 + 0x148);
  local_280 = plVar3;
  local_278 = plVar12;
  if (local_270 != &local_280) {
    *local_270 = plVar3;
    local_280 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_268 + 0x150,&local_278);
  }
  plVar3 = local_278;
  if (local_278 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_278 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_290[0];
    plVar10 = local_2a0[0];
    if ((int)lVar9 == 1) {
      (**(code **)*local_278)(local_278);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_290[0];
      plVar10 = local_2a0[0];
      if (iVar2 == 1) {
        (**(code **)(*local_278 + 8))(local_278,1);
        plVar8 = local_290[0];
        plVar10 = local_2a0[0];
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar8 = plVar12 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_290[0];
    plVar10 = local_2a0[0];
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_290[0];
      plVar10 = local_2a0[0];
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
        plVar8 = local_290[0];
        plVar10 = local_2a0[0];
      }
    }
  }
  local_57 = 0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_90);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_98 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_290[0];
    plVar10 = local_2a0[0];
    if ((int)lVar9 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_290[0];
      plVar10 = local_2a0[0];
      if (iVar2 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
        plVar8 = local_290[0];
        plVar10 = local_2a0[0];
      }
    }
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_b8 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_290[0];
    plVar10 = local_2a0[0];
    if ((int)lVar9 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_290[0];
      plVar10 = local_2a0[0];
      if (iVar2 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
        plVar8 = local_290[0];
        plVar10 = local_2a0[0];
      }
    }
  }
  FUN_140456c70(local_1c8);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_2a0[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_2a0[0] != (longlong *)0x0) {
      FMemory::Free(local_2a0[0]);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_290[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_290[0] != (longlong *)0x0) {
      FMemory::Free(local_290[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_230);
  pplVar14 = local_270;
  if (0 < *(int *)(local_268 + 0x108)) {
    lVar9 = *(longlong *)(**(longlong **)(local_268 + 0x100) + 0x30);
    if (lVar9 == 0) {
      local_260 = DAT_1469eb218;
      local_258 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar13 = &local_260;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      puStack_210 = local_2a8;
      local_2a8[0] = 0;
      local_218 = UE4Function_Private::
                  TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                  ::Call;
      local_1f8 = 0x420e6680;
      uStack_1f4 = 1;
      uStack_1f0 = puStack_210;
      FUN_14213eb80(lVar9,&local_250,&local_1f8);
      puVar13 = &local_250;
      bVar5 = true;
      bVar4 = false;
    }
    pplVar14 = local_270;
    local_208 = *puVar13;
    local_200 = puVar13[1];
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
    }
    FUN_141956620(*local_270,&local_208);
    plVar8 = local_258;
    if ((bVar4) && (local_258 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_258 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_258)(local_258);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_258 + 8))(local_258,1);
        }
      }
    }
    plVar8 = local_248;
    if ((bVar5) && (local_248 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_248 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_248 + 8))(local_248,1);
        }
      }
    }
  }
  plVar12 = local_240;
  plVar8 = pplVar14[1];
  plVar10 = *pplVar14;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *local_240 = (longlong)plVar10;
  local_240[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  return plVar12;
}



// FUNCTION 142121dc0 FUN_142121dc0 body=1708 status=ok
// SIG undefined FUN_142121dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142121dc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong **pplVar14;
  undefined1 auStack_638 [32];
  longlong local_618;
  longlong local_610;
  undefined4 local_608;
  longlong local_600;
  longlong local_5f8;
  longlong local_5f0;
  undefined1 local_5e8;
  undefined1 local_5e0;
  longlong local_5d8;
  undefined1 local_5c8;
  undefined1 local_5c7;
  undefined1 local_5c6;
  undefined1 local_5c5;
  longlong *local_5c0;
  longlong *local_5b8;
  longlong *local_5b0 [2];
  longlong *local_5a0 [2];
  longlong local_590;
  longlong *local_588;
  undefined1 local_580;
  undefined1 local_57f;
  undefined8 local_578;
  undefined4 local_570;
  undefined1 local_568;
  undefined1 local_567;
  undefined8 local_560;
  undefined4 local_558;
  undefined1 local_550;
  undefined1 local_54f;
  undefined8 local_548;
  undefined4 local_540;
  undefined1 local_538;
  undefined1 local_537;
  undefined8 local_530;
  undefined4 local_528;
  undefined1 local_520;
  undefined1 local_51f;
  undefined8 local_518;
  undefined4 local_510;
  undefined1 local_508;
  undefined1 local_507;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined1 local_4f0;
  undefined1 local_4ef;
  undefined8 local_4e8;
  undefined4 local_4e0;
  longlong *local_4d8;
  longlong *local_4d0;
  undefined1 local_4b8 [1136];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_638;
  uVar4 = *(undefined1 *)(param_1 + 0x39e);
  local_5c5 = *(undefined1 *)(param_1 + 0x399);
  uVar5 = *(undefined1 *)(param_1 + 0x39b);
  uVar6 = *(undefined1 *)(param_1 + 0x39a);
  local_5c6 = *(undefined1 *)(param_1 + 0x398);
  local_5c7 = *(undefined1 *)(param_1 + 0x340);
  local_5c8 = *(undefined1 *)(param_1 + 0x39c);
  local_4ef = 1;
  local_4e8 = 0;
  local_4e0 = 0;
  local_507 = 1;
  local_500 = 0;
  local_4f8 = 0;
  local_51f = 1;
  local_518 = 0;
  local_510 = 0;
  local_537 = 1;
  local_530 = 0;
  local_528 = 0;
  local_54f = 1;
  local_548 = 0;
  local_540 = 0;
  local_567 = 1;
  local_560 = 0;
  local_558 = 0;
  local_57f = 1;
  local_578 = 0;
  local_570 = 0;
  local_590 = param_1;
  local_588 = param_2;
  local_580 = local_5c8;
  local_568 = local_5c7;
  local_550 = local_5c6;
  local_538 = local_5c5;
  local_520 = uVar6;
  local_508 = uVar5;
  local_4f0 = uVar4;
  plVar10 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_5a0[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d200;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)UMultiLineEditableText::HandleOnTextCommitted;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar11;
    *plVar10 = (longlong)&PTR_FUN_143f4d248;
  }
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  local_5b0[0] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    plVar12[2] = (longlong)UMultiLineEditableText::HandleOnTextChanged;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar12[4] = lVar11;
    *plVar12 = (longlong)&PTR_FUN_143f4d2d8;
  }
  lVar11 = FUN_1419215b0(local_4b8);
  *(longlong *)(lVar11 + 0x1f0) = param_1 + 0x160;
  *(undefined1 *)(lVar11 + 0x398) = local_5c8;
  *(undefined1 *)(lVar11 + 0x399) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x3a0,&local_578);
  *(undefined1 *)(lVar11 + 0x2b8) = local_5c7;
  *(undefined1 *)(lVar11 + 0x2b9) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x2c0,&local_560);
  *(undefined1 *)(lVar11 + 0x338) = local_5c6;
  *(undefined1 *)(lVar11 + 0x339) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x340,&local_548);
  *(undefined1 *)(lVar11 + 0x350) = local_5c5;
  *(undefined1 *)(lVar11 + 0x351) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x358,&local_530);
  *(undefined1 *)(lVar11 + 0x368) = uVar6;
  *(undefined1 *)(lVar11 + 0x369) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x370,&local_518);
  *(undefined1 *)(lVar11 + 0x380) = uVar5;
  *(undefined1 *)(lVar11 + 0x381) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x388,&local_500);
  *(undefined1 *)(lVar11 + 0x431) = *(undefined1 *)(param_1 + 0x39d);
  *(undefined1 *)(lVar11 + 0x450) = uVar4;
  *(undefined1 *)(lVar11 + 0x451) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x458,&local_4e8);
  pplVar14 = (longlong **)(lVar11 + 0x300);
  if (local_5b0 != pplVar14) {
    if (plVar12 == (longlong *)0x0) {
      if ((*(int *)(lVar11 + 0x308) != 0) && (plVar13 = *pplVar14, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar14 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar14,0,0);
          *pplVar14 = plVar13;
        }
        *(undefined4 *)(lVar11 + 0x308) = 0;
      }
    }
    else {
      (**(code **)(*plVar12 + 0x30))(plVar12,pplVar14);
    }
  }
  pplVar14 = (longlong **)(lVar11 + 0x310);
  if (local_5a0 != pplVar14) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar11 + 0x318) != 0) && (plVar13 = *pplVar14, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar14 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar14,0,0);
          *pplVar14 = plVar13;
        }
        *(undefined4 *)(lVar11 + 0x318) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar14);
    }
  }
  plVar13 = (longlong *)operator_new(0x3f0);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144d6e650;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      SMultiLineEditableText::SMultiLineEditableText();
    }
  }
  plVar1 = plVar13 + 2;
  local_4d8 = plVar1;
  local_4d0 = plVar13;
  FUN_14044f790(&local_4d8,plVar1);
  local_618 = 0x3e0;
  SWidget::SetDebugInfo
            (plVar1,"SMultiLineEditableText",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\MultiLineEditableText.cpp"
             ,0x2f);
  local_608 = *(undefined4 *)(lVar11 + 0x90);
  local_5d8 = lVar11 + 0xf8;
  local_5f0 = lVar11 + 0xe8;
  local_5e0 = *(undefined1 *)(lVar11 + 0xf1);
  local_5f8 = lVar11 + 200;
  local_600 = lVar11 + 0x98;
  local_5e8 = *(undefined1 *)(lVar11 + 0xf0);
  local_610 = lVar11 + 0x78;
  local_618 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_1419ac7b0(plVar1,lVar11);
  if (((char)plVar13[5] < '\0') || (cVar8 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar8 != '\0'))
  {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  lVar11 = local_590;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar9;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    plVar12 = local_5b0[0];
    plVar10 = local_5a0[0];
  }
  pplVar14 = (longlong **)(local_590 + 0x3c0);
  local_5c0 = plVar1;
  local_5b8 = plVar13;
  if (pplVar14 != &local_5c0) {
    *pplVar14 = plVar1;
    local_5c0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_590 + 0x3c8,&local_5b8);
  }
  plVar1 = local_5b8;
  if (local_5b8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_5b8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar12 = local_5b0[0];
    plVar10 = local_5a0[0];
    if ((int)lVar7 == 1) {
      (**(code **)*local_5b8)(local_5b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar12 = local_5b0[0];
      plVar10 = local_5a0[0];
      if (iVar3 == 1) {
        (**(code **)(*local_5b8 + 8))(local_5b8,1);
        plVar12 = local_5b0[0];
        plVar10 = local_5a0[0];
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar10 = plVar13 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar12 = local_5b0[0];
    plVar10 = local_5a0[0];
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar12 = local_5b0[0];
      plVar10 = local_5a0[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
        plVar12 = local_5b0[0];
        plVar10 = local_5a0[0];
      }
    }
  }
  FUN_141924260(local_4b8);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,0);
    local_5b0[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
    if (local_5b0[0] != (longlong *)0x0) {
      FMemory::Free(local_5b0[0]);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_5a0[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_5a0[0] != (longlong *)0x0) {
      FMemory::Free(local_5a0[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_578);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_560);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_548);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_530);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_518);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_500);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4e8);
  plVar13 = local_588;
  plVar10 = *(longlong **)(lVar11 + 0x3c8);
  plVar12 = *pplVar14;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *local_588 = (longlong)plVar12;
  local_588[1] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  return plVar13;
}



// FUNCTION 142122470 FUN_142122470 body=1405 status=ok
// SIG undefined FUN_142122470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142122470(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  undefined1 auStack_758 [32];
  longlong local_738;
  longlong local_730;
  undefined4 local_728;
  longlong local_720;
  longlong local_718;
  longlong local_710;
  undefined1 local_708;
  undefined1 local_700;
  longlong local_6f8;
  longlong *local_6e8;
  longlong *local_6e0;
  longlong *local_6d8 [2];
  longlong *local_6c8 [2];
  longlong **local_6b8;
  longlong *local_6b0;
  undefined1 local_6a8;
  undefined1 local_6a7;
  undefined8 local_6a0;
  undefined4 local_698;
  undefined1 local_690;
  undefined1 local_68f;
  undefined8 local_688;
  undefined4 local_680;
  undefined1 local_678;
  undefined1 local_677;
  undefined8 local_670;
  undefined4 local_668;
  longlong *local_660;
  longlong *local_658;
  undefined1 local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_758;
  uVar3 = *(undefined1 *)(param_1 + 0xb33);
  uVar4 = *(undefined1 *)(param_1 + 0xb30);
  uVar5 = *(undefined1 *)(param_1 + 0xb31);
  local_677 = 1;
  local_670 = 0;
  local_668 = 0;
  local_68f = 1;
  local_688 = 0;
  local_680 = 0;
  local_6a7 = 1;
  local_6a0 = 0;
  local_698 = 0;
  local_6b8 = (longlong **)param_1;
  local_6b0 = param_2;
  local_6a8 = uVar5;
  local_690 = uVar4;
  local_678 = uVar3;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_6c8[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f4d200;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)UMultiLineEditableTextBox::HandleOnTextCommitted;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_143f4d248;
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_6d8[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)UMultiLineEditableTextBox::HandleOnTextChanged;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar9;
    *plVar10 = (longlong)&PTR_FUN_143f4d2d8;
  }
  lVar9 = FUN_1419219a0(local_648);
  *(longlong *)(lVar9 + 0x108) = param_1 + 0x160;
  *(longlong *)(lVar9 + 0x110) = param_1 + 0x950;
  *(undefined1 *)(lVar9 + 0x378) = uVar5;
  *(undefined1 *)(lVar9 + 0x379) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x380,&local_6a0);
  *(undefined1 *)(lVar9 + 0x2d0) = uVar4;
  *(undefined1 *)(lVar9 + 0x2d1) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x2d8,&local_688);
  *(undefined1 *)(lVar9 + 0x5b9) = *(undefined1 *)(param_1 + 0xb32);
  *(undefined1 *)(lVar9 + 0x5d8) = uVar3;
  *(undefined1 *)(lVar9 + 0x5d9) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x5e0,&local_670);
  pplVar13 = (longlong **)(lVar9 + 0x428);
  if (local_6d8 != pplVar13) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 0x430) != 0) && (plVar11 = *pplVar13, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*pplVar13 != (longlong *)0x0) {
          plVar11 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
          *pplVar13 = plVar11;
        }
        *(undefined4 *)(lVar9 + 0x430) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar13);
    }
  }
  pplVar13 = (longlong **)(lVar9 + 0x438);
  if (local_6c8 != pplVar13) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 0x440) != 0) && (plVar11 = *pplVar13, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*pplVar13 != (longlong *)0x0) {
          plVar11 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
          *pplVar13 = plVar11;
        }
        *(undefined4 *)(lVar9 + 0x440) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar13);
    }
  }
  plVar12 = (longlong *)FUN_14195e9c0();
  plVar11 = plVar12 + 2;
  local_660 = plVar11;
  local_658 = plVar12;
  FUN_14044f790(&local_660,plVar11);
  local_738 = 0x5e8;
  SWidget::SetDebugInfo
            (plVar11,"SMultiLineEditableTextBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\MultiLineEditableTextBox.cpp"
             ,0x32);
  local_728 = *(undefined4 *)(lVar9 + 0x90);
  local_6f8 = lVar9 + 0xf8;
  local_710 = lVar9 + 0xe8;
  local_700 = *(undefined1 *)(lVar9 + 0xf1);
  local_718 = lVar9 + 200;
  local_720 = lVar9 + 0x98;
  local_708 = *(undefined1 *)(lVar9 + 0xf0);
  local_730 = lVar9 + 0x78;
  local_738 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1419336d0(plVar11,lVar9);
  if (((char)plVar12[5] < '\0') || (cVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar6 != '\0')
     ) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar8 = local_6c8[0];
    plVar10 = local_6d8[0];
  }
  pplVar13 = (longlong **)((longlong)local_6b8 + 0xbe0);
  local_6e8 = plVar11;
  local_6e0 = plVar12;
  if (pplVar13 != &local_6e8) {
    lVar9 = (longlong)local_6b8 + 0xbe8;
    *pplVar13 = plVar11;
    local_6e8 = (longlong *)0x0;
    local_6b8 = pplVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9,&local_6e0);
    pplVar13 = local_6b8;
  }
  local_6b8 = pplVar13;
  plVar11 = local_6e0;
  if (local_6e0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_6e0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_6c8[0];
    plVar10 = local_6d8[0];
    if ((int)lVar9 == 1) {
      (**(code **)*local_6e0)(local_6e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_6c8[0];
      plVar10 = local_6d8[0];
      if (iVar2 == 1) {
        (**(code **)(*local_6e0 + 8))(local_6e0,1);
        plVar8 = local_6c8[0];
        plVar10 = local_6d8[0];
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar12 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar8 = plVar12 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_6c8[0];
    plVar10 = local_6d8[0];
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_6c8[0];
      plVar10 = local_6d8[0];
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
        plVar8 = local_6c8[0];
        plVar10 = local_6d8[0];
      }
    }
  }
  FUN_1419245b0(local_648);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_6d8[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_6d8[0] != (longlong *)0x0) {
      FMemory::Free(local_6d8[0]);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_6c8[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_6c8[0] != (longlong *)0x0) {
      FMemory::Free(local_6c8[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_688);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_670);
  plVar11 = local_6b0;
  plVar8 = *local_6b8;
  plVar10 = local_6b8[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *local_6b0 = (longlong)plVar8;
  local_6b0[1] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  return plVar11;
}



// FUNCTION 1421229f0 FUN_1421229f0 body=886 status=ok
// SIG undefined FUN_1421229f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421229f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  longlong *local_298;
  longlong local_290;
  code *local_288;
  undefined1 *puStack_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  longlong *local_258;
  longlong *local_250;
  undefined1 local_238 [496];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_290 = param_1;
  plVar9 = (longlong *)operator_new(800);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144044b78;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar5 = plVar9 + 2;
  local_258 = plVar5;
  local_250 = plVar9;
  FUN_14044f790(&local_258,plVar5);
  local_2f8 = 0x310;
  SWidget::SetDebugInfo
            (plVar5,&DAT_144f987d8,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\NamedSlot.cpp",0x1e)
  ;
  lVar10 = FUN_14068f180(local_238);
  local_2b8 = lVar10 + 0xf8;
  local_2c0 = *(undefined1 *)(lVar10 + 0xf1);
  local_2d0 = lVar10 + 0xe8;
  local_2e8 = *(undefined4 *)(lVar10 + 0x90);
  local_2d8 = lVar10 + 200;
  local_2e0 = lVar10 + 0x98;
  local_2c8 = *(undefined1 *)(lVar10 + 0xf0);
  local_2f0 = lVar10 + 0x78;
  local_2f8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141972160(plVar5,lVar10);
  if (((char)plVar9[5] < '\0') || (cVar7 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar7 != '\0')) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  lVar10 = local_290;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar8;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(local_290 + 0x118);
  local_2a0 = plVar5;
  local_298 = plVar9;
  if (pplVar3 != &local_2a0) {
    *pplVar3 = plVar5;
    local_2a0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_290 + 0x120,&local_298);
  }
  plVar5 = local_298;
  lVar11 = lVar10;
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_298 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar11 = local_290;
      if (iVar4 == 1) {
        (**(code **)(*local_298 + 8))(local_298,1);
        lVar11 = local_290;
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar5 = plVar9 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_140690ea0(local_238);
  uStack_260 = (undefined1 *)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
  if ((0 < *(int *)(lVar11 + 0x108)) &&
     (lVar11 = *(longlong *)(**(longlong **)(lVar11 + 0x100) + 0x30),
     uStack_260 = (undefined1 *)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260), lVar11 != 0)) {
    puStack_280 = local_2a8;
    local_2a8[0] = 0;
    local_288 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_268 = 0x420e6680;
    uStack_264 = 1;
    uStack_260 = puStack_280;
    FUN_14213eb80(lVar11,local_278,&local_268);
    SBox::SetContent(*pplVar3,local_278);
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_270 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar2 = (int *)((longlong)local_270 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
  }
  plVar9 = *(longlong **)(lVar10 + 0x120);
  plVar5 = *pplVar3;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142122d70 FUN_142122d70 body=845 status=ok
// SIG undefined FUN_142122d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142122d70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined1 local_288;
  undefined1 local_280;
  longlong local_278;
  longlong local_268;
  longlong *local_260;
  longlong *local_250;
  undefined4 local_248;
  longlong local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  undefined1 local_218 [496];
  ulonglong local_28;
  
  local_238 = DAT_1469eb220;
  local_240 = DAT_1469eb218;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  lVar10 = *(longlong *)(param_1 + 0x100);
  local_248 = 0;
  if (lVar10 == 0) {
    local_268 = DAT_1469eb218;
    local_260 = DAT_1469eb220;
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
    bVar5 = false;
    bVar4 = true;
  }
  else {
    local_238 = *(longlong **)(param_1 + 0x108);
    if (local_238 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_238 + 1) = (int)local_238[1] + 1;
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = false;
    local_240 = lVar10;
    local_250 = local_238;
  }
  if (local_238 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_238 + 1) = (int)local_238[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)operator_new(800);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144044b78;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar1 = plVar8 + 2;
  local_230 = plVar1;
  local_228 = plVar8;
  FUN_14044f790(&local_230,plVar1);
  local_2b8 = 0x310;
  SWidget::SetDebugInfo
            (plVar1,&DAT_144f989e8,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\NativeWidgetHost.cpp"
             ,0x2e);
  uVar9 = FUN_14068f180(local_218);
  lVar10 = FUN_140692660(uVar9,&local_240);
  local_278 = lVar10 + 0xf8;
  local_280 = *(undefined1 *)(lVar10 + 0xf1);
  local_290 = lVar10 + 0xe8;
  local_2a8 = *(undefined4 *)(lVar10 + 0x90);
  local_298 = lVar10 + 200;
  local_2a0 = lVar10 + 0x98;
  local_288 = *(undefined1 *)(lVar10 + 0xf0);
  local_2b0 = lVar10 + 0x78;
  local_2b8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141972160(plVar1,lVar10);
  if (-1 < (char)plVar8[5]) {
    cVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar6 == '\0') {
      bVar7 = 0;
      goto LAB_142122f6c;
    }
  }
  bVar7 = 1;
LAB_142122f6c:
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
    LOCK();
    plVar1 = plVar8 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  FUN_140690ea0(local_218);
  plVar8 = local_260;
  if (bVar4) {
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_260 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_260 + 8))(local_260,1);
        }
      }
    }
  }
  plVar8 = local_250;
  if ((bVar5) && (local_250 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_250 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_250 + 8))(local_250,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1421230c0 FUN_1421230c0 body=918 status=ok
// SIG undefined FUN_1421230c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421230c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar8 = (longlong *)operator_new(0x240);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar10 = plVar8 + 2;
  local_188 = plVar10;
  local_180 = plVar8;
  FUN_14044f790(&local_188,plVar10);
  local_208 = 0x230;
  SWidget::SetDebugInfo
            (plVar10,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Overlay.cpp",0x3d);
  lVar9 = SOverlay::FArguments::FArguments(local_168);
  local_1c8 = lVar9 + 0xf8;
  local_1d0 = *(undefined1 *)(lVar9 + 0xf1);
  local_1e0 = lVar9 + 0xe8;
  local_1f8 = *(undefined4 *)(lVar9 + 0x90);
  local_1e8 = lVar9 + 200;
  local_1f0 = lVar9 + 0x98;
  local_1d8 = *(undefined1 *)(lVar9 + 0xf0);
  local_200 = lVar9 + 0x78;
  local_208 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar10,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SOverlay::Construct(plVar10,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar2 = (longlong **)(param_1 + 0x118);
  local_1b8 = plVar10;
  local_1b0 = plVar8;
  if (pplVar2 != &local_1b8) {
    *pplVar2 = plVar10;
    local_1b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x120,&local_1b0);
  }
  plVar10 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1b0 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar10 = plVar8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  plVar10 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar10 + *(int *)(param_1 + 0x108);
  for (; plVar10 != plVar8; plVar10 = plVar10 + 1) {
    plVar4 = (longlong *)*plVar10;
    if (plVar4 != (longlong *)0x0) {
      lVar9 = UOverlaySlot::GetPrivateStaticClass();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar4[5] = param_1;
        local_198 = *pplVar2;
        local_190 = *(longlong *)(param_1 + 0x120);
        if (local_190 != 0) {
          LOCK();
          *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 0x288))(plVar4,&local_198);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x120);
  local_1a8 = *pplVar2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1a8;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1a0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142123460 FUN_142123460 body=807 status=ok
// SIG undefined FUN_142123460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142123460(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong local_270;
  undefined4 local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined1 local_248;
  undefined1 local_240;
  longlong local_238;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  undefined1 local_1f8 [284];
  undefined1 local_dc;
  undefined1 local_d0 [48];
  longlong *local_a0;
  undefined1 local_90 [32];
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  plVar7 = (longlong *)FUN_1420cb8d0();
  plVar4 = plVar7 + 2;
  local_218 = plVar4;
  local_210 = plVar7;
  FUN_14044f790(&local_218,plVar4);
  local_278 = 0x2d0;
  SWidget::SetDebugInfo
            (plVar4,"SProgressBar",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ProgressBar.cpp",
             0x22);
  lVar8 = SProgressBar::FArguments::FArguments(local_1f8);
  local_238 = lVar8 + 0xf8;
  local_240 = *(undefined1 *)(lVar8 + 0xf1);
  local_250 = lVar8 + 0xe8;
  local_268 = *(undefined4 *)(lVar8 + 0x90);
  local_258 = lVar8 + 200;
  local_260 = lVar8 + 0x98;
  local_248 = *(undefined1 *)(lVar8 + 0xf0);
  local_270 = lVar8 + 0x78;
  local_278 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141975eb0(plVar4,lVar8);
  if (((char)plVar7[5] < '\0') || (cVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar5 != '\0')) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  pplVar9 = (longlong **)(param_1 + 0x300);
  local_228 = plVar4;
  local_220 = plVar7;
  if (pplVar9 != &local_228) {
    *pplVar9 = plVar4;
    local_228 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x308,&local_220);
  }
  plVar4 = local_220;
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_220 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_220 + 8))(local_220,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar4 = plVar7 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_90);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_d0);
  local_dc = 0;
  FUN_140456c70(local_1f8);
  plVar4 = *(longlong **)(param_1 + 0x308);
  plVar7 = *pplVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return param_2;
}



// FUNCTION 142123790 FUN_142123790 body=1138 status=ok
// SIG undefined FUN_142123790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142123790(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  undefined1 uVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_178 [272];
  longlong *local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar5 = *(undefined1 *)(param_1 + 0x118);
  local_1c0 = 0;
  lVar11 = FUN_1420cded0(local_178);
  *(undefined1 *)(lVar11 + 0x119) = uVar5;
  *(undefined1 *)(lVar11 + 0x118) = *(undefined1 *)(param_1 + 0x119);
  *(undefined4 *)(lVar11 + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(lVar11 + 0x120) = *(undefined4 *)(param_1 + 0x120);
  plVar12 = (longlong *)operator_new(0x4f8);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144fb2458;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      FUN_1420cf490();
    }
  }
  plVar6 = plVar12 + 2;
  local_198 = plVar6;
  local_190 = plVar12;
  FUN_14044f790(&local_198,plVar6);
  local_248 = 0x4e8;
  SWidget::SetDebugInfo
            (plVar6,"SRetainerWidget",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RetainerBox.cpp",
             0x54);
  local_238 = *(undefined4 *)(lVar11 + 0x90);
  local_208 = lVar11 + 0xf8;
  local_220 = lVar11 + 0xe8;
  local_210 = *(undefined1 *)(lVar11 + 0xf1);
  local_228 = lVar11 + 200;
  local_230 = lVar11 + 0x98;
  local_218 = *(undefined1 *)(lVar11 + 0xf0);
  local_240 = lVar11 + 0x78;
  local_248 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_1420ec540(plVar6,lVar11);
  if (((char)plVar12[5] < '\0') || (cVar9 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar9 != '\0'))
  {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar10;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x138);
  local_1f0 = plVar6;
  local_1e8 = plVar12;
  if (pplVar3 != &local_1f0) {
    *pplVar3 = plVar6;
    local_1f0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x140,&local_1e8);
  }
  plVar6 = local_1e8;
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1e8 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar12 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar6 = plVar12 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_68 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  FUN_140456c70(local_178);
  *(undefined1 *)(*pplVar3 + 0x7f) = 1;
  if (0 < *(int *)(param_1 + 0x108)) {
    lVar11 = *(longlong *)(**(longlong **)(param_1 + 0x100) + 0x30);
    if (lVar11 == 0) {
      local_1e0 = DAT_1469eb218;
      local_1d8 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar13 = &local_1e0;
      bVar8 = false;
      bVar7 = true;
    }
    else {
      puStack_1b0 = local_1f8;
      local_1f8[0] = 0;
      local_1b8 = UE4Function_Private::
                  TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                  ::Call;
      local_1a8 = 0x420e6680;
      uStack_1a4 = 1;
      uStack_1a0 = puStack_1b0;
      FUN_14213eb80(lVar11,&local_1d0,&local_1a8);
      puVar13 = &local_1d0;
      bVar8 = true;
      bVar7 = false;
    }
    plVar12 = local_1d8;
    FUN_142130770(*pplVar3,puVar13);
    plVar6 = local_1d8;
    if ((bVar7) && (plVar12 != (longlong *)0x0)) {
      LOCK();
      plVar12 = plVar12 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    plVar12 = local_1c8;
    if ((bVar8) && (local_1c8 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_1c8 + 1;
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x140);
  plVar6 = *pplVar3;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar6;
  param_2[1] = (longlong)plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar12 + 1;
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142123c10 FUN_142123c10 body=1193 status=ok
// SIG undefined FUN_142123c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142123c10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong **pplVar14;
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
  undefined8 local_378;
  longlong *plStack_370;
  longlong *local_368;
  longlong *local_360;
  undefined8 *local_358;
  ulonglong local_350;
  undefined8 *local_348;
  int local_340;
  undefined4 local_33c;
  undefined8 local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_320;
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined8 local_2f0;
  longlong *plStack_2e8;
  undefined1 local_2d8 [656];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  (**(code **)(*param_1 + 0x2d0))();
  local_358 = (undefined8 *)0x0;
  local_350 = 0;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_358);
  puVar11 = local_358;
  iVar13 = (int)local_350;
  lVar8 = param_1[0x66];
  local_348 = (undefined8 *)0x0;
  local_340 = (int)local_350;
  if ((int)local_350 == 0) {
    local_33c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_348,local_350 & 0xffffffff,0);
    puVar10 = local_348;
    do {
      *puVar10 = *puVar11;
      lVar3 = puVar11[1];
      puVar10[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      puVar10 = puVar10 + 2;
      puVar11 = puVar11 + 2;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  uVar6 = (**(code **)(*param_1 + 0x2e8))(param_1,local_310);
  uVar7 = (**(code **)(*param_1 + 0x2e0))(param_1,local_300);
  local_3c8 = lVar8;
  FUN_1418f4140(&local_338,uVar7,uVar6,&local_348);
  plVar9 = local_330;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_330 + 1) = (int)local_330[1] + 1;
    UNLOCK();
  }
  lVar8 = SRichTextBlock::FArguments::FArguments(local_2d8);
  local_378 = local_338;
  *(longlong **)(lVar8 + 0x1d8) = param_1 + 0x2a;
  puVar11 = (undefined8 *)(lVar8 + 0x1b0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar12 = plVar9;
  if (&local_378 != puVar11) {
    local_378 = *puVar11;
    plVar12 = *(longlong **)(lVar8 + 0x1b8);
    local_2f0 = local_338;
    plStack_2e8 = plVar9;
    *puVar11 = local_338;
    *(longlong **)(lVar8 + 0x1b8) = plVar9;
  }
  plStack_370 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_370 + 8))(plStack_370,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar3 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)operator_new(0x518);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144fb2468;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a8e90();
    }
  }
  plVar12 = plVar9 + 2;
  local_328 = plVar12;
  local_320 = plVar9;
  FUN_14044f790(&local_328,plVar12);
  local_3c8 = 0x508;
  SWidget::SetDebugInfo
            (plVar12,"SRichTextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\RichTextBlock.cpp",
             0x2b);
  local_3b8 = *(undefined4 *)(lVar8 + 0x90);
  local_388 = lVar8 + 0xf8;
  local_3a0 = lVar8 + 0xe8;
  local_390 = *(undefined1 *)(lVar8 + 0xf1);
  local_3a8 = lVar8 + 200;
  local_3b0 = lVar8 + 0x98;
  local_398 = *(undefined1 *)(lVar8 + 0xf0);
  local_3c0 = lVar8 + 0x78;
  local_3c8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_1419ad500(plVar12,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar4 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar5;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  pplVar14 = (longlong **)(param_1 + 0x6a);
  local_368 = plVar12;
  local_360 = plVar9;
  if (pplVar14 != &local_368) {
    *pplVar14 = plVar12;
    local_368 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6b,&local_360);
  }
  plVar12 = local_360;
  if (local_360 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_360 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_360 + 8))(local_360,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar12 = plVar9 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_1420d7d60(local_2d8);
  plVar9 = (longlong *)param_1[0x6b];
  plVar12 = *pplVar14;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar12;
  param_2[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_330 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar2 = (int *)((longlong)local_330 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_358);
  return param_2;
}



// FUNCTION 1421240c0 FUN_1421240c0 body=1649 status=ok
// SIG undefined FUN_1421240c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421240c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong **pplVar22;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_300;
  longlong local_2f8;
  undefined1 local_2e8;
  undefined1 local_2e7 [3];
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong *plStack_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  undefined8 *local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  longlong *local_290;
  code *local_288;
  undefined1 *puStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong *local_1e8;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c0;
  longlong *plStack_1b8;
  undefined1 local_1a8 [296];
  undefined1 local_80 [24];
  longlong *local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_2e4 = 0;
  if ((*(int *)(param_1 + 0x108) < 1) || (lVar17 = **(longlong **)(param_1 + 0x100), lVar17 == 0)) {
LAB_14212414c:
    lVar17 = 0;
  }
  else {
    lVar15 = USafeZoneSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_14212414c;
  }
  if (((*(int *)(param_1 + 0x108) < 1) || (lVar15 = **(longlong **)(param_1 + 0x100), lVar15 == 0))
     || (*(longlong *)(lVar15 + 0x30) == 0)) {
    local_2a8 = DAT_1469eb218;
    local_2e4 = 2;
    local_2a0 = DAT_1469eb220;
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
    puVar21 = &local_2a8;
  }
  else {
    local_2e4 = 1;
    if ((*(int *)(param_1 + 0x108) < 1) || (lVar16 = *(longlong *)(lVar15 + 0x30), lVar15 == 0)) {
      lVar16 = 0;
    }
    puStack_280 = local_2e7;
    local_2e7[0] = 0;
    local_288 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_248 = 0x420e6680;
    uStack_244 = 1;
    uStack_240 = puStack_280;
    FUN_14213eb80(lVar16,&local_298,&local_248);
    puVar21 = &local_298;
  }
  if (lVar17 == 0) {
    puVar19 = &local_228;
    local_228 = 0;
    uStack_220 = 0;
  }
  else {
    puVar19 = &local_238;
    local_238 = *(undefined8 *)(lVar17 + 0x50);
    uStack_230 = *(undefined8 *)(lVar17 + 0x58);
  }
  local_268 = 1;
  local_260 = 0;
  local_258 = 0;
  local_278 = *puVar19;
  uStack_270 = puVar19[1];
  if (lVar17 == 0) {
    local_2b0 = (undefined8 *)&local_208;
    local_208 = 0x3f800000;
    uStack_204 = 0x3f800000;
    uStack_200 = 0x3f800000;
    uStack_1fc = 0x3f800000;
    local_2dc = 0;
    local_2e0 = 0;
    local_2e8 = 0;
  }
  else {
    local_2b0 = (undefined8 *)&local_218;
    local_2dc = (uint)*(byte *)(lVar17 + 0x4d);
    local_2e0 = (uint)*(byte *)(lVar17 + 0x4c);
    local_2e8 = *(undefined1 *)(lVar17 + 0x38);
    local_218 = *(undefined4 *)(lVar17 + 0x3c);
    uStack_214 = *(undefined4 *)(lVar17 + 0x40);
    uStack_210 = *(undefined4 *)(lVar17 + 0x44);
    uStack_20c = *(undefined4 *)(lVar17 + 0x48);
  }
  uVar4 = *puVar21;
  plVar5 = (longlong *)puVar21[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1f8 = uVar4;
  lVar17 = FUN_14068fde0(local_1a8);
  *(undefined1 *)(lVar17 + 0x148) = local_2e8;
  uVar10 = *local_2b0;
  uVar11 = local_2b0[1];
  *(uint *)(lVar17 + 0x108) = local_2e0;
  *(undefined8 *)(lVar17 + 0x14c) = uVar10;
  *(undefined8 *)(lVar17 + 0x154) = uVar11;
  *(uint *)(lVar17 + 0x10c) = local_2dc;
  uVar6 = *(undefined4 *)puVar19;
  uVar7 = *(undefined4 *)((longlong)puVar19 + 4);
  uVar8 = *(undefined4 *)(puVar19 + 1);
  uVar9 = *(undefined4 *)((longlong)puVar19 + 0xc);
  *(undefined1 *)(lVar17 + 0x120) = 1;
  *(undefined4 *)(lVar17 + 0x110) = uVar6;
  *(undefined4 *)(lVar17 + 0x114) = uVar7;
  *(undefined4 *)(lVar17 + 0x118) = uVar8;
  *(undefined4 *)(lVar17 + 0x11c) = uVar9;
  local_2d8 = lVar17;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar17 + 0x128,&local_260);
  *(undefined1 *)(lVar17 + 0x15c) = *(undefined1 *)(param_1 + 0x118);
  *(undefined1 *)(lVar17 + 0x15d) = *(undefined1 *)(param_1 + 0x119);
  *(undefined1 *)(lVar17 + 0x15e) = *(undefined1 *)(param_1 + 0x11a);
  *(undefined1 *)(lVar17 + 0x15f) = *(undefined1 *)(param_1 + 0x11b);
  puVar21 = (undefined8 *)(lVar17 + 0x138);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_2d0 = uVar4;
  plStack_2c8 = plVar5;
  if (&local_2d0 != puVar21) {
    local_2d0 = *puVar21;
    plStack_2c8 = *(longlong **)(lVar17 + 0x140);
    *puVar21 = uVar4;
    *(longlong **)(lVar17 + 0x140) = plVar5;
    local_1c0 = uVar4;
    plStack_1b8 = plVar5;
  }
  plVar18 = plStack_2c8;
  if (plStack_2c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_2c8 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_2c8)(plStack_2c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar17 = local_2d8;
      if (iVar3 == 1) {
        (**(code **)(*plStack_2c8 + 8))(plStack_2c8,1);
        lVar17 = local_2d8;
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar5 + 1;
    lVar15 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
  plVar18 = (longlong *)FUN_14068e7a0();
  plVar5 = plVar18 + 2;
  local_1d8 = plVar5;
  local_1d0 = plVar18;
  FUN_14044f790(&local_1d8,plVar5);
  local_338 = 0x368;
  SWidget::SetDebugInfo
            (plVar5,"SSafeZone",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\SafeZone.cpp",0x66);
  local_2f8 = lVar17 + 0xf8;
  local_310 = lVar17 + 0xe8;
  local_318 = lVar17 + 200;
  local_320 = lVar17 + 0x98;
  local_330 = lVar17 + 0x78;
  local_338 = local_2d8 + 0x60;
  local_328 = *(undefined4 *)(local_2d8 + 0x90);
  local_300 = *(undefined1 *)(local_2d8 + 0xf1);
  local_308 = *(undefined1 *)(local_2d8 + 0xf0);
  SWidget::SWidgetConstruct(plVar5,local_2d8,local_2d8 + 0x30,local_2d8 + 0x40);
  FUN_1419761c0(plVar5,local_2d8);
  if (-1 < (char)plVar18[5]) {
    cVar13 = (**(code **)(*plVar5 + 0x1e8))(plVar5);
    if (cVar13 == '\0') {
      bVar14 = 0;
      goto LAB_1421244d1;
    }
  }
  bVar14 = 1;
LAB_1421244d1:
  *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) | bVar14;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  pplVar22 = (longlong **)(param_1 + 0x120);
  local_2c0 = plVar5;
  local_2b8 = plVar18;
  if (pplVar22 != &local_2c0) {
    *pplVar22 = plVar5;
    local_2c0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&local_2b8);
  }
  plVar5 = local_2b8;
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2b8 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2b8)(local_2b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2b8 + 8))(local_2b8,1);
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar18 + 1;
    lVar17 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
    LOCK();
    plVar5 = plVar18 + 1;
    lVar17 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_68 + 1;
    lVar17 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  FUN_140456c70(local_1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_260);
  plVar5 = local_2a0;
  uVar20 = local_2e4;
  if (((local_2e4 & 2) != 0) && (uVar20 = local_2e4 & 0xfffffffd, local_2a0 != (longlong *)0x0)) {
    LOCK();
    plVar18 = local_2a0 + 1;
    lVar17 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  plVar5 = local_290;
  if (((uVar20 & 1) != 0) && (local_290 != (longlong *)0x0)) {
    LOCK();
    plVar18 = local_290 + 1;
    lVar17 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x128);
  local_1e8 = *pplVar22;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1e8;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar18 = plVar5 + 1;
    lVar17 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  return param_2;
}



// FUNCTION 142124740 FUN_142124740 body=902 status=ok
// SIG undefined FUN_142124740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142124740(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  undefined1 uVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  undefined4 local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined1 local_238;
  undefined1 local_230;
  longlong local_228;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined1 local_1d8 [272];
  longlong *local_c8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  uVar4 = *(undefined1 *)(param_1 + 0x121);
  lVar8 = FUN_1420ce2b0(local_1d8);
  *(undefined1 *)(lVar8 + 0x180) = uVar4;
  plVar9 = (longlong *)FUN_1420cba60();
  plVar5 = plVar9 + 2;
  local_1f8 = plVar5;
  local_1f0 = plVar9;
  FUN_14044f790(&local_1f8,plVar5);
  local_268 = 0x398;
  SWidget::SetDebugInfo
            (plVar5,"SScaleBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ScaleBox.cpp",0x21);
  local_258 = *(undefined4 *)(lVar8 + 0x90);
  local_228 = lVar8 + 0xf8;
  local_240 = lVar8 + 0xe8;
  local_230 = *(undefined1 *)(lVar8 + 0xf1);
  local_248 = lVar8 + 200;
  local_250 = lVar8 + 0x98;
  local_238 = *(undefined1 *)(lVar8 + 0xf0);
  local_260 = lVar8 + 0x78;
  local_268 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141976420(plVar5,lVar8);
  if (((char)plVar9[5] < '\0') || (cVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar6 != '\0')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x128);
  local_218 = plVar5;
  local_210 = plVar9;
  if (pplVar3 != &local_218) {
    *pplVar3 = plVar5;
    local_218 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x130,&local_210);
  }
  plVar5 = local_210;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_210 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar5 = plVar9 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_b0);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_c8 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  FUN_140456c70(local_1d8);
  iVar10 = *(int *)(param_1 + 0x108);
  if (0 < iVar10) {
    local_208 = *pplVar3;
    local_200 = *(longlong *)(param_1 + 0x130);
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
      iVar10 = *(int *)(param_1 + 0x108);
    }
    if (iVar10 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined8 **)(param_1 + 0x100);
    }
    FUN_1420e4490(uVar11,&local_208);
  }
  plVar5 = *(longlong **)(param_1 + 0x130);
  plVar9 = *pplVar3;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar9;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar5 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142124ad0 FUN_142124ad0 body=944 status=ok
// SIG undefined FUN_142124ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142124ad0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1a8 [272];
  undefined1 local_98 [48];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar3 = *(undefined4 *)(param_1 + 0x5dc);
  uVar4 = *(undefined4 *)(param_1 + 0x5e0);
  bVar8 = *(byte *)(param_1 + 0x5d9);
  local_1e0 = 1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1e8 = uVar3;
  local_1e4 = uVar4;
  lVar9 = SScrollBar::FArguments::FArguments(local_1a8);
  *(longlong *)(lVar9 + 0x108) = param_1 + 0x100;
  *(undefined1 *)(lVar9 + 0x120) = *(undefined1 *)(param_1 + 0x5d8);
  *(uint *)(lVar9 + 0x124) = (uint)bVar8;
  *(undefined4 *)(lVar9 + 0x130) = uVar3;
  *(undefined4 *)(lVar9 + 0x134) = uVar4;
  *(undefined1 *)(lVar9 + 0x138) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x140,&local_1d8);
  plVar10 = (longlong *)operator_new(0x448);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144d6e640;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      SScrollBar::SScrollBar();
    }
  }
  plVar6 = plVar10 + 2;
  local_1c8 = plVar6;
  local_1c0 = plVar10;
  FUN_14044f790(&local_1c8,plVar6);
  local_248 = 0x438;
  SWidget::SetDebugInfo
            (plVar6,"SScrollBar",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ScrollBar.cpp",0x20)
  ;
  local_238 = *(undefined4 *)(lVar9 + 0x90);
  local_208 = lVar9 + 0xf8;
  local_220 = lVar9 + 0xe8;
  local_210 = *(undefined1 *)(lVar9 + 0xf1);
  local_228 = lVar9 + 200;
  local_230 = lVar9 + 0x98;
  local_218 = *(undefined1 *)(lVar9 + 0xf0);
  local_240 = lVar9 + 0x78;
  local_248 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141976670(plVar6,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar8;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  pplVar11 = (longlong **)(param_1 + 0x5e8);
  local_1f8 = plVar6;
  local_1f0 = plVar10;
  if (pplVar11 != &local_1f8) {
    *pplVar11 = plVar6;
    local_1f8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5f0,&local_1f0);
  }
  plVar6 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar10 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar6 = plVar10 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_98);
  FUN_140456c70(local_1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d8);
  plVar10 = *(longlong **)(param_1 + 0x5f0);
  plVar6 = *pplVar11;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar6;
  param_2[1] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar10 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142124e80 FUN_142124e80 body=1320 status=ok
// SIG undefined FUN_142124e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142124e80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  undefined4 local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined1 local_238;
  undefined1 local_230;
  longlong local_228;
  longlong *local_218 [2];
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined1 local_1b8 [264];
  longlong local_b0;
  longlong *local_88;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_1e8 = param_2;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_218[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_1441f18f8;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)UScrollBox::SlateHandleUserScrolled;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_1441f1940;
  }
  bVar7 = *(byte *)(param_1 + 0x820);
  lVar9 = SScrollBox::FArguments::FArguments(local_1b8);
  *(longlong *)(lVar9 + 0x118) = param_1 + 0x118;
  *(longlong *)(lVar9 + 0x120) = param_1 + 0x340;
  *(uint *)(lVar9 + 0x138) = (uint)bVar7;
  pplVar2 = (longlong **)(lVar9 + 0x150);
  *(undefined1 *)(lVar9 + 0x160) = *(undefined1 *)(param_1 + 0x822);
  *(undefined1 *)(lVar9 + 0x149) = *(undefined1 *)(param_1 + 0x82e);
  *(undefined4 *)(lVar9 + 0x14c) = *(undefined4 *)(param_1 + 0x830);
  if (local_218 != pplVar2) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(lVar9 + 0x158) != 0) && (plVar10 = *pplVar2, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar10;
        }
        *(undefined4 *)(lVar9 + 0x158) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar2);
    }
  }
  plVar10 = (longlong *)operator_new(0x450);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144d6a780;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      FUN_141962190();
    }
  }
  plVar5 = plVar10 + 2;
  local_1d0 = plVar5;
  local_1c8 = plVar10;
  FUN_14044f790(&local_1d0,plVar5);
  local_268 = 0x440;
  SWidget::SetDebugInfo
            (plVar5,"SScrollBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ScrollBox.cpp",0x46)
  ;
  local_258 = *(undefined4 *)(lVar9 + 0x90);
  local_228 = lVar9 + 0xf8;
  local_240 = lVar9 + 0xe8;
  local_230 = *(undefined1 *)(lVar9 + 0xf1);
  local_248 = lVar9 + 200;
  local_250 = lVar9 + 0x98;
  local_238 = *(undefined1 *)(lVar9 + 0xf0);
  local_260 = lVar9 + 0x78;
  local_268 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1419781c0(plVar5,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    plVar8 = local_218[0];
  }
  pplVar2 = (longlong **)(param_1 + 0x850);
  local_208 = plVar5;
  local_200 = plVar10;
  if (pplVar2 != &local_208) {
    *pplVar2 = plVar5;
    local_208 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x858,&local_200);
  }
  plVar5 = local_200;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_200 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_218[0];
    if ((int)lVar9 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_218[0];
      if (iVar3 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
        plVar8 = local_218[0];
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    LOCK();
    plVar8 = plVar10 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_218[0];
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_218[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
        plVar8 = local_218[0];
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_218[0];
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = local_218[0];
      if (iVar3 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
        plVar8 = local_218[0];
      }
    }
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1b8);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_218[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_218[0] != (longlong *)0x0) {
      FMemory::Free(local_218[0]);
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar10 + *(int *)(param_1 + 0x108);
  plVar5 = local_1e8;
  for (; local_1e8 = plVar5, plVar10 != plVar8; plVar10 = plVar10 + 1) {
    lVar9 = *plVar10;
    if (lVar9 != 0) {
      lVar11 = UScrollBoxSlot::GetPrivateStaticClass();
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
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_1e0 = *pplVar2;
        local_1d8 = *(longlong *)(param_1 + 0x858);
        if (local_1d8 != 0) {
          LOCK();
          *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e46c0(lVar9,&local_1e0);
      }
    }
    plVar5 = local_1e8;
  }
  plVar8 = *(longlong **)(param_1 + 0x858);
  local_1f8 = *pplVar2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *plVar5 = (longlong)local_1f8;
  plVar5[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1f0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  return plVar5;
}



// FUNCTION 1421253b0 FUN_1421253b0 body=933 status=ok
// SIG undefined FUN_1421253b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421253b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong **pplVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  undefined4 local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong local_260;
  longlong *local_258;
  longlong *local_250;
  undefined1 local_238 [496];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  plVar9 = (longlong *)operator_new(800);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144044b78;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  plVar1 = plVar9 + 2;
  local_258 = plVar1;
  local_250 = plVar9;
  FUN_14044f790(&local_258,plVar1);
  local_2d8 = 0x310;
  SWidget::SetDebugInfo
            (plVar1,&DAT_144f98e64,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\SizeBox.cpp",0x1f);
  lVar10 = FUN_14068f180(local_238);
  local_298 = lVar10 + 0xf8;
  local_2a0 = *(undefined1 *)(lVar10 + 0xf1);
  local_2b0 = lVar10 + 0xe8;
  local_2c8 = *(undefined4 *)(lVar10 + 0x90);
  local_2b8 = lVar10 + 200;
  local_2c0 = lVar10 + 0x98;
  local_2a8 = *(undefined1 *)(lVar10 + 0xf0);
  local_2d0 = lVar10 + 0x78;
  local_2d8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_141972160(plVar1,lVar10);
  if (((char)plVar9[5] < '\0') || (cVar7 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar7 != '\0')) {
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
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  pplVar4 = (longlong **)(param_1 + 0x138);
  local_288 = plVar1;
  local_280 = plVar9;
  if (pplVar4 != &local_288) {
    *pplVar4 = plVar1;
    local_288 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x140,&local_280);
  }
  plVar1 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_280 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_280 + 8))(local_280,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  FUN_140690ea0(local_238);
  iVar5 = *(int *)(param_1 + 0x108);
  if (iVar5 < 1) goto LAB_1421256ad;
  local_268 = *pplVar4;
  local_260 = *(longlong *)(param_1 + 0x140);
  if (local_260 != 0) {
    LOCK();
    *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
    UNLOCK();
    iVar5 = *(int *)(param_1 + 0x108);
  }
  if ((iVar5 < 1) || (lVar10 = **(longlong **)(param_1 + 0x100), lVar10 == 0)) {
LAB_14212569b:
    lVar10 = 0;
  }
  else {
    lVar11 = USizeBoxSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14212569b;
  }
  FUN_1420e4990(lVar10,&local_268);
LAB_1421256ad:
  plVar9 = *(longlong **)(param_1 + 0x140);
  local_278 = *pplVar4;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_278;
  param_2[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      local_270 = plVar9;
      (**(code **)*plVar9)();
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142125760 FUN_142125760 body=1908 status=ok
// SIG undefined FUN_142125760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142125760(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  undefined1 local_348;
  undefined1 local_340;
  longlong local_338;
  longlong *local_328;
  longlong *local_320;
  longlong *local_318;
  longlong *local_310 [2];
  longlong *local_300 [2];
  longlong *local_2f0 [2];
  longlong *local_2e0 [2];
  longlong *local_2d0 [2];
  longlong **local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  local_2c0 = (longlong **)param_1;
  local_2b8 = param_2;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_2d0[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_1441f18f8;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    plVar6[2] = (longlong)USlider::HandleOnValueChanged;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_1441f1940;
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_2e0[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)&LAB_142103170;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar7;
    *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_2f0[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)&LAB_142103160;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar7;
    *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_300[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)&LAB_1421031b0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar7;
    *plVar10 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_310[0] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)UTTLAnimalAnimInstance::AnimNotify_Attack_End;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar7;
    *plVar11 = (longlong)&PTR_FUN_143f4d1b8;
  }
  lVar7 = SSlider::FArguments::FArguments(local_298);
  *(longlong *)(lVar7 + 0x1c0) = param_1 + 0x118;
  pplVar13 = (longlong **)(lVar7 + 0x200);
  *(undefined1 *)(lVar7 + 0x1f8) = *(undefined1 *)(param_1 + 0x374);
  local_328 = (longlong *)lVar7;
  if (local_310 != pplVar13) {
    if (plVar11 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x208) != 0) && (plVar12 = *pplVar13, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar13 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
          *pplVar13 = plVar12;
        }
        *(undefined4 *)(lVar7 + 0x208) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x30))(plVar11,pplVar13);
    }
  }
  pplVar13 = (longlong **)(lVar7 + 0x210);
  if (local_300 != pplVar13) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x218) != 0) && (plVar12 = *pplVar13, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar13 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
          *pplVar13 = plVar12;
        }
        *(undefined4 *)(lVar7 + 0x218) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar13);
    }
  }
  pplVar13 = (longlong **)(lVar7 + 0x220);
  if (local_2f0 != pplVar13) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x228) != 0) && (plVar12 = *pplVar13, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar13 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
          *pplVar13 = plVar12;
        }
        *(undefined4 *)(lVar7 + 0x228) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar13);
    }
  }
  pplVar13 = (longlong **)(lVar7 + 0x230);
  if (local_2e0 != pplVar13) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x238) != 0) && (plVar12 = *pplVar13, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar13 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
          *pplVar13 = plVar12;
        }
        *(undefined4 *)(lVar7 + 0x238) = 0;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar13);
    }
  }
  pplVar13 = (longlong **)(lVar7 + 0x240);
  if (local_2d0 != pplVar13) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x248) != 0) && (plVar12 = *pplVar13, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar13 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
          *pplVar13 = plVar12;
        }
        *(undefined4 *)(lVar7 + 0x248) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,pplVar13);
    }
  }
  lVar7 = operator_new(0x360);
  if (lVar7 == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = (longlong *)FUN_14195cbd0(lVar7);
  }
  plVar1 = plVar12 + 2;
  local_2b0 = plVar1;
  local_2a8 = plVar12;
  FUN_14044f790(&local_2b0,plVar1);
  local_378 = 0x350;
  SWidget::SetDebugInfo
            (plVar1,"SSlider",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Slider.cpp",0x1a);
  local_338 = (longlong)local_328 + 0xf8;
  local_350 = (longlong)local_328 + 0xe8;
  local_358 = (longlong)local_328 + 200;
  local_378 = (longlong)local_328 + 0x60;
  local_360 = (longlong)local_328 + 0x98;
  local_370 = (longlong)local_328 + 0x78;
  local_340 = *(undefined1 *)((longlong)local_328 + 0xf1);
  local_348 = *(undefined1 *)((longlong)local_328 + 0xf0);
  local_368 = *(undefined4 *)((longlong)local_328 + 0x90);
  plVar1 = plVar12 + 2;
  SWidget::SWidgetConstruct(plVar1,local_328,(longlong)local_328 + 0x30,(longlong)local_328 + 0x40);
  FUN_141935830(plVar1,local_328);
  if (((char)plVar12[5] < '\0') || (cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar5;
  local_328 = plVar12 + 1;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)local_328 = (int)*local_328 + 1;
    UNLOCK();
    LOCK();
    *(int *)local_328 = (int)*local_328 + 1;
    UNLOCK();
    plVar6 = local_2d0[0];
    plVar11 = local_310[0];
    plVar10 = local_300[0];
    plVar8 = local_2e0[0];
    plVar9 = local_2f0[0];
  }
  pplVar13 = (longlong **)((longlong)local_2c0 + 0x3c8);
  local_320 = plVar1;
  local_318 = plVar12;
  if (pplVar13 != &local_320) {
    lVar7 = (longlong)local_2c0 + 0x3d0;
    *pplVar13 = plVar1;
    local_320 = (longlong *)0x0;
    local_2c0 = pplVar13;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7,&local_318);
    pplVar13 = local_2c0;
  }
  local_2c0 = pplVar13;
  plVar1 = local_318;
  if (local_318 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_318 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    plVar6 = local_2d0[0];
    plVar11 = local_310[0];
    plVar10 = local_300[0];
    plVar8 = local_2e0[0];
    plVar9 = local_2f0[0];
    if ((int)lVar7 == 1) {
      (**(code **)*local_318)(local_318);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar6 = local_2d0[0];
      plVar11 = local_310[0];
      plVar10 = local_300[0];
      plVar8 = local_2e0[0];
      plVar9 = local_2f0[0];
      if (iVar3 == 1) {
        (**(code **)(*local_318 + 8))(local_318,1);
        plVar6 = local_2d0[0];
        plVar11 = local_310[0];
        plVar10 = local_300[0];
        plVar8 = local_2e0[0];
        plVar9 = local_2f0[0];
      }
    }
  }
  plVar1 = local_328;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    lVar7 = *local_328;
    *(int *)local_328 = (int)*local_328 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar6 = local_2d0[0];
    plVar11 = local_310[0];
    plVar10 = local_300[0];
    plVar8 = local_2e0[0];
    plVar9 = local_2f0[0];
    if ((int)lVar7 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar6 = local_2d0[0];
      plVar11 = local_310[0];
      plVar10 = local_300[0];
      plVar8 = local_2e0[0];
      plVar9 = local_2f0[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
        plVar6 = local_2d0[0];
        plVar11 = local_310[0];
        plVar10 = local_300[0];
        plVar8 = local_2e0[0];
        plVar9 = local_2f0[0];
      }
    }
  }
  FUN_1419c0af0(local_298);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    local_310[0] = (longlong *)FMemory::Realloc(plVar11,0,0);
    if (local_310[0] != (longlong *)0x0) {
      FMemory::Free(local_310[0]);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_300[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_300[0] != (longlong *)0x0) {
      FMemory::Free(local_300[0]);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_2f0[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_2f0[0] != (longlong *)0x0) {
      FMemory::Free(local_2f0[0]);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_2e0[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_2e0[0] != (longlong *)0x0) {
      FMemory::Free(local_2e0[0]);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_2d0[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_2d0[0] != (longlong *)0x0) {
      FMemory::Free(local_2d0[0]);
    }
  }
  plVar9 = local_2b8;
  plVar6 = *local_2c0;
  plVar8 = local_2c0[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *local_2b8 = (longlong)plVar6;
  local_2b8[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  return plVar9;
}



// FUNCTION 142125ee0 FUN_142125ee0 body=714 status=ok
// SIG undefined FUN_142125ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142125ee0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_168 [280];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar7 = (longlong *)FUN_141880f80();
  plVar4 = plVar7 + 2;
  local_188 = plVar4;
  local_180 = plVar7;
  FUN_14044f790(&local_188,plVar4);
  local_1e8 = 0x228;
  SWidget::SetDebugInfo
            (plVar4,"SSpacer",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Spacer.cpp",0x27);
  lVar8 = SSpacer::FArguments::FArguments(local_168);
  local_1a8 = lVar8 + 0xf8;
  local_1b0 = *(undefined1 *)(lVar8 + 0xf1);
  local_1c0 = lVar8 + 0xe8;
  local_1d8 = *(undefined4 *)(lVar8 + 0x90);
  local_1c8 = lVar8 + 200;
  local_1d0 = lVar8 + 0x98;
  local_1b8 = *(undefined1 *)(lVar8 + 0xf0);
  local_1e0 = lVar8 + 0x78;
  local_1e8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  SSpacer::Construct(plVar4,lVar8);
  if (((char)plVar7[5] < '\0') || (cVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar5 != '\0')) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  pplVar9 = (longlong **)(param_1 + 0x108);
  local_198 = plVar4;
  local_190 = plVar7;
  if (pplVar9 != &local_198) {
    *pplVar9 = plVar4;
    local_198 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x110,&local_190);
  }
  plVar4 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar4 = plVar7 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50);
  FUN_140456c70(local_168);
  plVar4 = *(longlong **)(param_1 + 0x110);
  plVar7 = *pplVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return param_2;
}



// FUNCTION 1421261b0 FUN_1421261b0 body=2175 status=ok
// SIG undefined FUN_1421261b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1421261b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
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
  undefined1 local_538;
  undefined1 local_537;
  longlong *local_530;
  longlong *local_528;
  longlong *local_520;
  longlong *local_518 [2];
  longlong *local_508 [2];
  longlong *local_4f8 [2];
  longlong *local_4e8 [2];
  undefined1 local_4d8;
  undefined1 local_4d7;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined1 local_4c0;
  undefined1 local_4bf;
  undefined8 local_4b8;
  undefined4 local_4b0;
  uint local_4a8;
  undefined1 local_4a4;
  undefined8 local_4a0;
  undefined4 local_498;
  longlong **local_490;
  longlong *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  longlong *local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined1 local_434;
  undefined1 local_430;
  undefined8 local_428;
  undefined4 local_420;
  longlong *local_418;
  longlong *local_410;
  undefined1 local_3f8 [944];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  local_4a8 = (uint)*(byte *)(param_1 + 0x460);
  local_4a4 = 1;
  local_537 = *(undefined1 *)(param_1 + 0x469);
  local_480 = *(undefined8 *)(param_1 + 0x410);
  local_470 = *(undefined4 *)(param_1 + 0x420);
  uStack_46c = *(undefined4 *)(param_1 + 0x424);
  uStack_468 = *(undefined4 *)(param_1 + 0x428);
  uStack_464 = *(undefined4 *)(param_1 + 0x42c);
  local_478 = *(undefined8 *)(param_1 + 0x418);
  local_460 = *(undefined4 *)(param_1 + 0x430);
  uStack_45c = *(undefined4 *)(param_1 + 0x434);
  uStack_458 = *(undefined4 *)(param_1 + 0x438);
  uStack_454 = *(undefined4 *)(param_1 + 0x43c);
  local_450 = *(undefined8 *)(param_1 + 0x440);
  local_448 = *(longlong **)(param_1 + 0x448);
  local_538 = *(undefined1 *)(param_1 + 0x468);
  local_4a0 = 0;
  local_498 = 0;
  local_4bf = 1;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4d7 = 1;
  local_4d0 = 0;
  local_4c8 = 0;
  if (local_448 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_448 + 1) = (int)local_448[1] + 1;
    UNLOCK();
  }
  local_440 = *(undefined8 *)(param_1 + 0x450);
  local_438 = *(undefined4 *)(param_1 + 0x458);
  local_434 = *(undefined1 *)(param_1 + 0x45c);
  local_430 = 1;
  local_428 = 0;
  local_420 = 0;
  local_4d8 = local_538;
  local_4c0 = local_537;
  local_488 = param_2;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_4e8[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_1441f18f8;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    plVar7[2] = (longlong)USpinBox::HandleOnEndSliderMovement;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_1441f1940;
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_4f8[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)&LAB_140eb3500;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
  }
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_508[0] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_144fb1dd8;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)USpinBox::HandleOnValueCommitted;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar8;
    *plVar10 = (longlong)&PTR_FUN_144fb1e20;
  }
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_518[0] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_1441f18f8;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)USpinBox::HandleOnValueChanged;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar8;
    *plVar11 = (longlong)&PTR_FUN_1441f1940;
  }
  lVar8 = FUN_141920be0(local_3f8);
  *(longlong *)(lVar8 + 0x108) = param_1 + 0x118;
  local_530 = (longlong *)lVar8;
  FUN_1417f9360(lVar8 + 0x270,&local_480);
  *(undefined1 *)(lVar8 + 0x2c0) = local_430;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x2c8,&local_428);
  *(undefined1 *)(lVar8 + 0x340) = local_538;
  *(undefined1 *)(lVar8 + 0x341) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x348,&local_4d0);
  *(undefined1 *)(lVar8 + 0x358) = local_537;
  *(undefined1 *)(lVar8 + 0x359) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x360,&local_4b8);
  *(uint *)(lVar8 + 0x388) = local_4a8;
  *(undefined1 *)(lVar8 + 0x38c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x390,&local_4a0);
  pplVar3 = (longlong **)(lVar8 + 0x300);
  if (local_518 != pplVar3) {
    if (plVar11 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x308) != 0) && (plVar12 = *pplVar3, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar12;
        }
        *(undefined4 *)(lVar8 + 0x308) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x30))(plVar11,pplVar3);
    }
  }
  pplVar3 = (longlong **)(lVar8 + 0x310);
  if (local_508 != pplVar3) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x318) != 0) && (plVar12 = *pplVar3, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar12;
        }
        *(undefined4 *)(lVar8 + 0x318) = 0;
      }
    }
    else {
      (**(code **)(*plVar10 + 0x30))(plVar10,pplVar3);
    }
  }
  pplVar3 = (longlong **)(lVar8 + 800);
  if (local_4f8 != pplVar3) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x328) != 0) && (plVar12 = *pplVar3, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar12;
        }
        *(undefined4 *)(lVar8 + 0x328) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar3);
    }
  }
  pplVar3 = (longlong **)(lVar8 + 0x330);
  if (local_4e8 != pplVar3) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x338) != 0) && (plVar12 = *pplVar3, plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar12 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar12;
        }
        *(undefined4 *)(lVar8 + 0x338) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar3);
    }
  }
  plVar12 = (longlong *)operator_new(0x548);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144d6e708;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      FUN_141920a00();
    }
  }
  plVar1 = plVar12 + 2;
  local_418 = plVar1;
  local_410 = plVar12;
  FUN_14044f790(&local_418,plVar1);
  local_588 = 0x538;
  SWidget::SetDebugInfo
            (plVar1,"SSpinBox<float>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\SpinBox.cpp",0x30);
  local_548 = (longlong)local_530 + 0xf8;
  local_560 = (longlong)local_530 + 0xe8;
  local_568 = (longlong)local_530 + 200;
  local_588 = (longlong)local_530 + 0x60;
  local_570 = (longlong)local_530 + 0x98;
  local_580 = (longlong)local_530 + 0x78;
  local_550 = *(undefined1 *)((longlong)local_530 + 0xf1);
  local_558 = *(undefined1 *)((longlong)local_530 + 0xf0);
  local_578 = *(undefined4 *)((longlong)local_530 + 0x90);
  plVar1 = plVar12 + 2;
  SWidget::SWidgetConstruct(plVar1,local_530,(longlong)local_530 + 0x30,(longlong)local_530 + 0x40);
  FUN_14192c0a0(plVar1,local_530);
  if (((char)plVar12[5] < '\0') || (cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar6;
  local_530 = plVar12 + 1;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)local_530 = (int)*local_530 + 1;
    UNLOCK();
    LOCK();
    *(int *)local_530 = (int)*local_530 + 1;
    UNLOCK();
    plVar9 = local_4f8[0];
    plVar11 = local_518[0];
    plVar10 = local_508[0];
    plVar7 = local_4e8[0];
  }
  local_490 = (longlong **)(param_1 + 0x4f0);
  local_528 = plVar1;
  local_520 = plVar12;
  if (local_490 != &local_528) {
    *local_490 = plVar1;
    local_528 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4f8,&local_520);
  }
  plVar1 = local_520;
  if (local_520 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_520 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar9 = local_4f8[0];
    plVar11 = local_518[0];
    plVar10 = local_508[0];
    plVar7 = local_4e8[0];
    if ((int)lVar8 == 1) {
      (**(code **)*local_520)(local_520);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar9 = local_4f8[0];
      plVar11 = local_518[0];
      plVar10 = local_508[0];
      plVar7 = local_4e8[0];
      if (iVar4 == 1) {
        (**(code **)(*local_520 + 8))(local_520,1);
        plVar9 = local_4f8[0];
        plVar11 = local_518[0];
        plVar10 = local_508[0];
        plVar7 = local_4e8[0];
      }
    }
  }
  plVar1 = local_530;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    lVar8 = *local_530;
    *(int *)local_530 = (int)*local_530 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar9 = local_4f8[0];
    plVar11 = local_518[0];
    plVar10 = local_508[0];
    plVar7 = local_4e8[0];
    if ((int)lVar8 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar9 = local_4f8[0];
      plVar11 = local_518[0];
      plVar10 = local_508[0];
      plVar7 = local_4e8[0];
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
        plVar9 = local_4f8[0];
        plVar11 = local_518[0];
        plVar10 = local_508[0];
        plVar7 = local_4e8[0];
      }
    }
  }
  FUN_141923da0(local_3f8);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    local_518[0] = (longlong *)FMemory::Realloc(plVar11,0,0);
    if (local_518[0] != (longlong *)0x0) {
      FMemory::Free(local_518[0]);
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_508[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_508[0] != (longlong *)0x0) {
      FMemory::Free(local_508[0]);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_4f8[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_4f8[0] != (longlong *)0x0) {
      FMemory::Free(local_4f8[0]);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_4e8[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_4e8[0] != (longlong *)0x0) {
      FMemory::Free(local_4e8[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_428);
  plVar7 = local_448;
  if (local_448 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_448 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_448)(local_448);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_448 + 8))(local_448,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4a0);
  plVar10 = local_488;
  plVar7 = *local_490;
  plVar9 = local_490[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  *local_488 = (longlong)plVar7;
  local_488[1] = (longlong)plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return plVar10;
}



// FUNCTION 142126a30 FUN_142126a30 body=1792 status=ok
// SIG undefined FUN_142126a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142126a30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong **pplVar14;
  undefined1 auStack_988 [32];
  longlong local_968;
  longlong local_960;
  undefined4 local_958;
  longlong local_950;
  longlong local_948;
  longlong local_940;
  undefined1 local_938;
  undefined1 local_930;
  longlong local_928;
  undefined1 local_918 [8];
  undefined8 local_910;
  longlong *plStack_908;
  longlong *local_900;
  longlong *local_8f8;
  longlong *local_8f0;
  longlong *local_8e8;
  undefined1 *local_8e0;
  undefined1 local_8d8 [8];
  longlong *local_8d0;
  longlong *local_8c8;
  longlong *local_8c0;
  longlong *local_8b0;
  longlong *local_8a8;
  undefined8 local_898;
  longlong *plStack_890;
  undefined1 local_888 [272];
  longlong *local_778;
  undefined1 local_768 [912];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_988;
  if (*(char *)(param_1 + 0x1fc) == '\0') {
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
    plVar5 = plVar13 + 2;
    local_8b0 = plVar5;
    local_8a8 = plVar13;
    FUN_14044f790(&local_8b0,plVar5);
    local_968 = 0x650;
    SWidget::SetDebugInfo
              (plVar5,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TextBlock.cpp",
               0xa8);
    lVar12 = STextBlock::FArguments::FArguments(local_3d8);
    local_958 = *(undefined4 *)(lVar12 + 0x90);
    local_928 = lVar12 + 0xf8;
    local_940 = lVar12 + 0xe8;
    local_930 = *(undefined1 *)(lVar12 + 0xf1);
    local_948 = lVar12 + 200;
    local_950 = lVar12 + 0x98;
    local_938 = *(undefined1 *)(lVar12 + 0xf0);
    local_960 = lVar12 + 0x78;
    local_968 = lVar12 + 0x60;
    SWidget::SWidgetConstruct(plVar5,lVar12,lVar12 + 0x30,lVar12 + 0x40);
    FUN_1419b0120(plVar5,lVar12);
    if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar7 != '\0')
       ) {
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
    pplVar14 = (longlong **)(param_1 + 0x200);
    local_900 = plVar5;
    local_8f8 = plVar13;
    if (pplVar14 != &local_900) {
      *pplVar14 = plVar5;
      local_900 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x208,&local_8f8);
    }
    plVar5 = local_8f8;
    if (local_8f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_8f8 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_8f8)(local_8f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_8f8 + 8))(local_8f8,1);
        }
      }
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar13 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      LOCK();
      plVar5 = plVar13 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    plVar13 = *(longlong **)(param_1 + 0x208);
    plVar5 = *pplVar14;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *param_2 = (longlong)plVar5;
    param_2[1] = (longlong)plVar13;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar13 + 1;
        lVar12 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
    }
  }
  else {
    local_8e8 = (longlong *)operator_new(0x660);
    if (local_8e8 == (longlong *)0x0) {
      local_8e8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(local_8e8 + 1) = 1;
      *(undefined4 *)((longlong)local_8e8 + 0xc) = 1;
      *local_8e8 = (longlong)&PTR_FUN_144043520;
      if (local_8e8 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    local_8f0 = local_8e8 + 2;
    FUN_14044f790(&local_8f0);
    local_8e0 = local_918;
    local_968 = 0x650;
    SWidget::SetDebugInfo
              (local_8f0,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TextBlock.cpp",
               0xa2);
    uVar9 = STextBlock::FArguments::FArguments(local_768);
    uVar10 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
             Expose<SListView<TSharedPtr<FString,1>_>_>(&local_8f0,param_1 + 0x200);
    puVar11 = (undefined8 *)FUN_140693250(uVar10,local_8d8,uVar9);
    plVar13 = (longlong *)puVar11[1];
    uVar9 = *puVar11;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    lVar12 = FUN_1420cdd90(local_888);
    puVar11 = (undefined8 *)(lVar12 + 0x108);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_910 = uVar9;
    plStack_908 = plVar13;
    if (&local_910 != puVar11) {
      local_910 = *puVar11;
      plStack_908 = *(longlong **)(lVar12 + 0x110);
      *puVar11 = uVar9;
      *(longlong **)(lVar12 + 0x110) = plVar13;
      local_898 = uVar9;
      plStack_890 = plVar13;
    }
    plVar5 = plStack_908;
    if (plStack_908 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_908 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_908)(plStack_908);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_908 + 8))(plStack_908,1);
        }
      }
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar13 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = (longlong *)operator_new(0x480);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar13 + 1) = 1;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      *plVar13 = (longlong)&PTR_FUN_144fb2438;
      if (plVar13 != (longlong *)0xfffffffffffffff0) {
        FUN_141961be0();
      }
    }
    plVar5 = plVar13 + 2;
    local_8c8 = plVar5;
    local_8c0 = plVar13;
    FUN_14044f790(&local_8c8,plVar5);
    local_968 = 0x470;
    SWidget::SetDebugInfo
              (plVar5,"SInvalidationPanel",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\TextBlock.cpp",
               0xa0);
    local_958 = *(undefined4 *)(lVar12 + 0x90);
    local_928 = lVar12 + 0xf8;
    local_940 = lVar12 + 0xe8;
    local_930 = *(undefined1 *)(lVar12 + 0xf1);
    local_948 = lVar12 + 200;
    local_950 = lVar12 + 0x98;
    local_938 = *(undefined1 *)(lVar12 + 0xf0);
    local_960 = lVar12 + 0x78;
    local_968 = lVar12 + 0x60;
    SWidget::SWidgetConstruct(plVar5,lVar12,lVar12 + 0x30,lVar12 + 0x40);
    FUN_141974040(plVar5,lVar12);
    if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar7 != '\0')
       ) {
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
      LOCK();
      plVar1 = plVar13 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      LOCK();
      plVar1 = plVar13 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    if (local_778 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_778 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_778)(local_778);
        LOCK();
        piVar2 = (int *)((longlong)local_778 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_778 + 8))(local_778,1);
        }
      }
    }
    FUN_140456c70(local_888);
    if (local_8d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_8d0 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_8d0)(local_8d0);
        LOCK();
        piVar2 = (int *)((longlong)local_8d0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_8d0 + 8))(local_8d0,1);
        }
      }
    }
    plVar1 = local_8e8;
    if (local_8e8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_8e8 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_8e8)(local_8e8);
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
    FUN_140691150(local_768);
    *param_2 = (longlong)plVar5;
    param_2[1] = (longlong)plVar13;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar13 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142127130 FUN_142127130 body=826 status=ok
// SIG undefined FUN_142127130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142127130(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong **pplVar12;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined1 local_278 [288];
  undefined1 local_158 [288];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  SThrobber::FArguments::FArguments(local_158);
  cVar7 = *(char *)(param_1 + 0x106);
  cVar3 = *(char *)(param_1 + 0x104);
  cVar4 = *(char *)(param_1 + 0x105);
  iVar5 = *(int *)(param_1 + 0x100);
  if (iVar5 < 1) {
    iVar11 = 1;
  }
  else {
    iVar11 = 0x19;
    if (iVar5 < 0x19) {
      iVar11 = iVar5;
    }
  }
  lVar9 = SThrobber::FArguments::FArguments(local_278);
  *(longlong *)(lVar9 + 0x108) = param_1 + 0x110;
  *(int *)(lVar9 + 0x110) = iVar11;
  *(uint *)(lVar9 + 0x114) =
       -(uint)(cVar7 != '\0') & 4 | -(uint)(cVar3 != '\0') & 2 | (uint)(cVar4 != '\0');
  plVar10 = (longlong *)FUN_140c61d80();
  plVar6 = plVar10 + 2;
  local_298 = plVar6;
  local_290 = plVar10;
  FUN_14044f790(&local_298,plVar6);
  local_2f8 = 0x3a8;
  SWidget::SetDebugInfo
            (plVar6,"SThrobber",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Throbber.cpp",0x24);
  local_2e8 = *(undefined4 *)(lVar9 + 0x90);
  local_2b8 = lVar9 + 0xf8;
  local_2d0 = lVar9 + 0xe8;
  local_2c0 = *(undefined1 *)(lVar9 + 0xf1);
  local_2d8 = lVar9 + 200;
  local_2e0 = lVar9 + 0x98;
  local_2c8 = *(undefined1 *)(lVar9 + 0xf0);
  local_2f0 = lVar9 + 0x78;
  local_2f8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar6,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141935a10(plVar6,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar8;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  pplVar12 = (longlong **)(param_1 + 0x198);
  local_2a8 = plVar6;
  local_2a0 = plVar10;
  if (pplVar12 != &local_2a8) {
    *pplVar12 = plVar6;
    local_2a8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a0,&local_2a0);
  }
  plVar6 = local_2a0;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2a0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar10 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar6 = plVar10 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_140456c70(local_278);
  plVar6 = *(longlong **)(param_1 + 0x1a0);
  plVar10 = *pplVar12;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar10;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar6 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
  }
  FUN_140456c70(local_158);
  return param_2;
}



// FUNCTION 142127470 FUN_142127470 body=949 status=ok
// SIG undefined FUN_142127470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142127470(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined1 local_1b8 [264];
  longlong local_b0;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar8 = (longlong *)operator_new(0x2a0);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144d81e08;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      SUniformGridPanel::SUniformGridPanel();
    }
  }
  plVar11 = plVar8 + 2;
  local_1d8 = plVar11;
  local_1d0 = plVar8;
  FUN_14044f790(&local_1d8,plVar11);
  local_258 = 0x290;
  SWidget::SetDebugInfo
            (plVar11,"SUniformGridPanel",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\UniformGridPanel.cpp"
             ,0x3a);
  lVar9 = SUniformGridPanel::FArguments::FArguments(local_1b8);
  local_218 = lVar9 + 0xf8;
  local_220 = *(undefined1 *)(lVar9 + 0xf1);
  local_230 = lVar9 + 0xe8;
  local_248 = *(undefined4 *)(lVar9 + 0x90);
  local_238 = lVar9 + 200;
  local_240 = lVar9 + 0x98;
  local_228 = *(undefined1 *)(lVar9 + 0xf0);
  local_250 = lVar9 + 0x78;
  local_258 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141978b20(plVar11,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x130);
  local_208 = plVar11;
  local_200 = plVar8;
  if (pplVar3 != &local_208) {
    *pplVar3 = plVar11;
    local_208 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_200);
  }
  plVar11 = local_200;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_200 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_88);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1b8);
  plVar11 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar11 + *(int *)(param_1 + 0x108);
  for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar10 = UUniformGridSlot::GetPrivateStaticClass();
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
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_1e8 = *pplVar3;
        local_1e0 = *(longlong *)(param_1 + 0x138);
        if (local_1e0 != 0) {
          LOCK();
          *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e4b90(lVar9,&local_1e8);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x138);
  local_1f8 = *pplVar3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1f8;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1f0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142127830 FUN_142127830 body=955 status=ok
// SIG undefined FUN_142127830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142127830(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  char cVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  longlong *local_1f8 [2];
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  code *local_1a8;
  undefined1 *puStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined1 local_178 [280];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
  if ((*(byte *)((longlong)param_1 + 0x1ac) & 0x20) == 0) {
    (**(code **)(*param_1 + 0x2d0))();
  }
  cVar9 = FUN_14254a410(param_1 + 0x3e);
  if (cVar9 != '\0') {
    lVar12 = param_1[0x34];
    uStack_1b0 = &local_200;
    local_1b8 = UE4Function_Private::
                TFunctionRefCaller<<lambda_109500daa63055641f2213496924cbf3>,void___cdecl(UWidget_*)>
                ::Call;
    plVar13 = *(longlong **)(lVar12 + 0x28);
    local_200 = param_1;
    if (plVar13 != (longlong *)0x0) {
      local_1f8[0] = plVar13;
      UE4Function_Private::
      TFunctionRefCaller<<lambda_109500daa63055641f2213496924cbf3>,void___cdecl(UWidget_*)>::Call
                (&local_200,local_1f8);
      local_198 = (undefined4)local_1b8;
      uStack_194 = local_1b8._4_4_;
      uStack_190 = (undefined4)uStack_1b0;
      uStack_18c = uStack_1b0._4_4_;
      FUN_1420f6990(*(undefined8 *)(lVar12 + 0x28),&local_198,0);
    }
  }
  if (*(longlong *)(param_1[0x34] + 0x28) == 0) {
    plVar11 = (longlong *)FUN_141880f80();
    plVar13 = plVar11 + 2;
    local_1d0 = plVar13;
    local_1c8 = plVar11;
    FUN_14044f790(&local_1d0,plVar13);
    local_258 = 0x228;
    SWidget::SetDebugInfo
              (plVar13,"SSpacer",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp",0x365);
    lVar12 = SSpacer::FArguments::FArguments(local_178);
    local_248 = *(undefined4 *)(lVar12 + 0x90);
    local_218 = lVar12 + 0xf8;
    local_230 = lVar12 + 0xe8;
    local_220 = *(undefined1 *)(lVar12 + 0xf1);
    local_238 = lVar12 + 200;
    local_240 = lVar12 + 0x98;
    local_228 = *(undefined1 *)(lVar12 + 0xf0);
    local_250 = lVar12 + 0x78;
    local_258 = lVar12 + 0x60;
    SWidget::SWidgetConstruct(plVar13,lVar12,lVar12 + 0x30,lVar12 + 0x40);
    SSpacer::Construct(plVar13,lVar12);
    if (((char)plVar11[5] < '\0') ||
       (cVar9 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar9 != '\0')) {
      bVar10 = 1;
    }
    else {
      bVar10 = 0;
    }
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar10;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar7 = false;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    plVar14 = plVar11;
    local_1e8 = plVar11;
  }
  else {
    puStack_1a0 = local_208;
    local_208[0] = 0;
    local_1a8 = UE4Function_Private::
                TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                ::Call;
    local_188 = 0x420e6680;
    uStack_184 = 1;
    uStack_180 = puStack_1a0;
    FUN_14213eb80(*(longlong *)(param_1[0x34] + 0x28),&local_1e0,&local_188);
    bVar7 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    plVar11 = local_1d8;
    plVar13 = local_1e0;
    plVar14 = local_1f8[0];
  }
  plVar8 = local_1e8;
  *param_2 = (longlong)plVar13;
  param_2[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (local_1e8 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_1e8 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if ((bVar4) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar13 = plVar14 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar14)(plVar14);
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
  plVar13 = local_1c8;
  if ((bVar5) && (local_1c8 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_1c8 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_1c8)(local_1c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1c8 + 8))(local_1c8,1);
      }
    }
  }
  if (bVar6) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_60);
    FUN_140456c70(local_178);
  }
  plVar13 = local_1d8;
  if ((bVar7) && (local_1d8 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_1d8 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142127bf0 FUN_142127bf0 body=914 status=ok
// SIG undefined FUN_142127bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142127bf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar8 = (longlong *)operator_new(0x248);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar11 = plVar8 + 2;
  local_188 = plVar11;
  local_180 = plVar8;
  FUN_14044f790(&local_188,plVar11);
  local_208 = 0x238;
  SWidget::SetDebugInfo
            (plVar11,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\VerticalBox.cpp",
             0x3d);
  lVar9 = SCanvas::FArguments::FArguments(local_168);
  local_1c8 = lVar9 + 0xf8;
  local_1d0 = *(undefined1 *)(lVar9 + 0xf1);
  local_1e0 = lVar9 + 0xe8;
  local_1f8 = *(undefined4 *)(lVar9 + 0x90);
  local_1e8 = lVar9 + 200;
  local_1f0 = lVar9 + 0x98;
  local_1d8 = *(undefined1 *)(lVar9 + 0xf0);
  local_200 = lVar9 + 0x78;
  local_208 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SHorizontalBox::Construct(plVar11,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x118);
  local_1b8 = plVar11;
  local_1b0 = plVar8;
  if (pplVar3 != &local_1b8) {
    *pplVar3 = plVar11;
    local_1b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x120,&local_1b0);
  }
  plVar11 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  plVar11 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar11 + *(int *)(param_1 + 0x108);
  for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar10 = UVerticalBoxSlot::GetPrivateStaticClass();
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
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_198 = *pplVar3;
        local_190 = *(longlong *)(param_1 + 0x120);
        if (local_190 != 0) {
          LOCK();
          *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e4e10(lVar9,&local_198);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x120);
  local_1a8 = *pplVar3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1a8;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1a0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142127f90 FUN_142127f90 body=997 status=ok
// SIG undefined FUN_142127f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142127f90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  code *local_1a8;
  undefined1 *puStack_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1b8 = 0;
  local_1e0 = param_1;
  plVar11 = (longlong *)
            SharedPointerInternals::NewIntrusiveReferenceController<SAutoRefreshViewport>();
  plVar5 = plVar11 + 2;
  local_178 = plVar5;
  local_170 = plVar11;
  FUN_14044f790(&local_178,plVar5);
  local_248 = 0x3c8;
  SWidget::SetDebugInfo
            (plVar5,"SAutoRefreshViewport",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Viewport.cpp",0x193)
  ;
  lVar12 = STSDRichInlineImage::FArguments::FArguments(local_158);
  local_208 = lVar12 + 0xf8;
  local_210 = *(undefined1 *)(lVar12 + 0xf1);
  local_220 = lVar12 + 0xe8;
  local_238 = *(undefined4 *)(lVar12 + 0x90);
  local_228 = lVar12 + 200;
  local_230 = lVar12 + 0x98;
  local_218 = *(undefined1 *)(lVar12 + 0xf0);
  local_240 = lVar12 + 0x78;
  local_248 = lVar12 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar12,lVar12 + 0x30,lVar12 + 0x40);
  FUN_1420ebf20(plVar5,lVar12);
  if (((char)plVar11[5] < '\0') || (cVar9 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar9 != '\0'))
  {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  lVar12 = local_1e0;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar10;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(local_1e0 + 0x128);
  local_1f0 = plVar5;
  local_1e8 = plVar11;
  if (pplVar3 != &local_1f0) {
    *pplVar3 = plVar5;
    local_1f0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_1e0 + 0x130,&local_1e8);
  }
  plVar5 = local_1e8;
  lVar14 = lVar12;
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1e8 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar14 = local_1e0;
      if (iVar4 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
        lVar14 = local_1e0;
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar11 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar5 = plVar11 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  FUN_140456c70(local_158);
  if (0 < *(int *)(lVar14 + 0x108)) {
    lVar14 = *(longlong *)(**(longlong **)(lVar14 + 0x100) + 0x30);
    if (lVar14 == 0) {
      local_1d8 = DAT_1469eb218;
      local_1d0 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar13 = &local_1d8;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      puStack_1a0 = local_1f8;
      local_1f8[0] = 0;
      local_1a8 = UE4Function_Private::
                  TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                  ::Call;
      local_188 = 0x420e6680;
      uStack_184 = 1;
      uStack_180 = puStack_1a0;
      FUN_14213eb80(lVar14,&local_1c8,&local_188);
      puVar13 = &local_1c8;
      bVar7 = true;
      bVar6 = false;
    }
    local_198 = *puVar13;
    local_190 = puVar13[1];
    if (local_190 != 0) {
      LOCK();
      *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
      UNLOCK();
    }
    FUN_1419a0d60(*pplVar3,&local_198);
    plVar5 = local_1d0;
    if ((bVar6) && (local_1d0 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_1d0 + 1;
      lVar14 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    plVar5 = local_1c0;
    if ((bVar7) && (local_1c0 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_1c0 + 1;
      lVar14 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
  }
  plVar5 = *(longlong **)(lVar12 + 0x130);
  plVar11 = *pplVar3;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar11;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar5 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
  return param_2;
}



// FUNCTION 142128380 FUN_142128380 body=486 status=ok
// SIG undefined FUN_142128380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142128380(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  longlong local_188;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_158 [280];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  plVar6 = (longlong *)FUN_141880f80();
  plVar1 = plVar6 + 2;
  local_178 = plVar1;
  local_170 = plVar6;
  FUN_14044f790(&local_178,plVar1);
  local_1c8 = 0x228;
  SWidget::SetDebugInfo
            (plVar1,"SSpacer",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp",0x403);
  lVar7 = SSpacer::FArguments::FArguments(local_158);
  local_188 = lVar7 + 0xf8;
  local_190 = *(undefined1 *)(lVar7 + 0xf1);
  local_1a0 = lVar7 + 0xe8;
  local_1b8 = *(undefined4 *)(lVar7 + 0x90);
  local_1a8 = lVar7 + 200;
  local_1b0 = lVar7 + 0x98;
  local_198 = *(undefined1 *)(lVar7 + 0xf0);
  local_1c0 = lVar7 + 0x78;
  local_1c8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SSpacer::Construct(plVar1,lVar7);
  if (-1 < (char)plVar6[5]) {
    cVar4 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar4 == '\0') {
      bVar5 = 0;
      goto LAB_1421284a3;
    }
  }
  bVar5 = 1;
LAB_1421284a3:
  *(byte *)((longlong)plVar6 + 0x29) = *(byte *)((longlong)plVar6 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar6 + 0x29) = *(byte *)((longlong)plVar6 + 0x29) | bVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_40);
  FUN_140456c70(local_158);
  return param_2;
}



// FUNCTION 142128570 FUN_142128570 body=930 status=ok
// SIG undefined FUN_142128570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142128570(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_178 [264];
  longlong local_70;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar8 = (longlong *)operator_new(0x278);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144d6e660;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_141962460();
    }
  }
  plVar11 = plVar8 + 2;
  local_198 = plVar11;
  local_190 = plVar8;
  FUN_14044f790(&local_198,plVar11);
  local_218 = 0x268;
  SWidget::SetDebugInfo
            (plVar11,"SWidgetSwitcher",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetSwitcher.cpp",
             0x72);
  lVar9 = SWidgetSwitcher::FArguments::FArguments(local_178);
  local_1d8 = lVar9 + 0xf8;
  local_1e0 = *(undefined1 *)(lVar9 + 0xf1);
  local_1f0 = lVar9 + 0xe8;
  local_208 = *(undefined4 *)(lVar9 + 0x90);
  local_1f8 = lVar9 + 200;
  local_200 = lVar9 + 0x98;
  local_1e8 = *(undefined1 *)(lVar9 + 0xf0);
  local_210 = lVar9 + 0x78;
  local_218 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar11,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SWidgetSwitcher::Construct(plVar11,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x120);
  local_1c8 = plVar11;
  local_1c0 = plVar8;
  if (pplVar3 != &local_1c8) {
    *pplVar3 = plVar11;
    local_1c8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&local_1c0);
  }
  plVar11 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
  if (local_70 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_178);
  plVar11 = *(longlong **)(param_1 + 0x100);
  plVar8 = plVar11 + *(int *)(param_1 + 0x108);
  for (; plVar11 != plVar8; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar10 = UWidgetSwitcherSlot::GetPrivateStaticClass();
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
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_1a8 = *pplVar3;
        local_1a0 = *(longlong *)(param_1 + 0x128);
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e50c0(lVar9,&local_1a8);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x128);
  local_1b8 = *pplVar3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1b8;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1b0 = plVar8;
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142128920 FUN_142128920 body=1830 status=ok
// SIG undefined FUN_142128920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142128920(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  undefined4 local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  uint local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong *local_268;
  int local_260;
  longlong *local_258;
  longlong *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  longlong *local_220;
  longlong *local_218;
  undefined1 local_210;
  undefined1 local_20f;
  undefined8 local_208;
  undefined4 local_200;
  longlong *local_1f8;
  longlong local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [296];
  undefined1 local_80 [24];
  longlong *local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_288 = 0;
  local_218 = param_2;
  plVar7 = (longlong *)operator_new(0x2e0);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_144fb24b8;
    if (plVar7 != (longlong *)0xfffffffffffffff0) {
      FUN_1419624e0();
    }
  }
  plVar12 = plVar7 + 2;
  local_1d0 = plVar12;
  local_1c8 = plVar7;
  FUN_14044f790(&local_1d0,plVar12);
  local_2d8 = 0x2d0;
  SWidget::SetDebugInfo
            (plVar12,"SWindowTitleBarArea",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WindowTitleBarArea.cpp"
             ,0x2c);
  lVar8 = FUN_1420ce430(local_1a8);
  local_298 = lVar8 + 0xf8;
  local_2a0 = *(undefined1 *)(lVar8 + 0xf1);
  local_2b0 = lVar8 + 0xe8;
  local_2c8 = *(undefined4 *)(lVar8 + 0x90);
  local_2b8 = lVar8 + 200;
  local_2c0 = lVar8 + 0x98;
  local_2a8 = *(undefined1 *)(lVar8 + 0xf0);
  local_2d0 = lVar8 + 0x78;
  local_2d8 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141979820(plVar12,lVar8);
  if (((char)plVar7[5] < '\0') || (cVar4 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | bVar5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x120);
  local_258 = plVar12;
  local_250 = plVar7;
  if (pplVar3 != &local_258) {
    *pplVar3 = plVar12;
    local_258 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&local_250);
  }
  plVar12 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_250 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_250 + 8))(local_250,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar12 = plVar7 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_60);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  FUN_140456c70(local_1a8);
  if (*(char *)(param_1 + 0x119) == '\0') {
    if (*(longlong *)(param_1 + 0x130) != 0) {
      FSlateApplication::UnregisterOnWindowActionNotification
                (DAT_1469f4590,*(undefined8 *)(param_1 + 0x130));
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
  }
  else {
    local_268 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_260 = 3;
    local_268 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_144fb1eb8;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      plVar7[2] = (longlong)FUN_142103c70;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
    }
    puVar9 = (undefined8 *)
             FSlateApplication::RegisterOnWindowActionNotification
                       (DAT_1469f4590,local_1e8,&local_268);
    *(undefined8 *)(param_1 + 0x130) = *puVar9;
    if (local_260 != 0) {
      if (local_268 == (longlong *)0x0) goto LAB_142128cc0;
      (**(code **)(*local_268 + 0x28))(local_268,0);
      if (local_268 != (longlong *)0x0) {
        local_268 = (longlong *)FMemory::Realloc(local_268,0,0);
      }
      local_260 = 0;
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
  }
LAB_142128cc0:
  local_238 = 0;
  local_230 = 0;
  puVar9 = (undefined8 *)operator_new(0x28,&local_238);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(puVar9 + 1,param_1);
    puVar9[2] = FUN_14212cda0;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[4] = uVar10;
    *puVar9 = &PTR_FUN_143f4d1b8;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(*pplVar3 + 0x4f,&local_238);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_238);
  iVar6 = *(int *)(param_1 + 0x108);
  if (iVar6 < 1) goto LAB_142128db3;
  local_1f8 = *pplVar3;
  local_1f0 = *(longlong *)(param_1 + 0x128);
  if (local_1f0 != 0) {
    LOCK();
    *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
    UNLOCK();
    iVar6 = *(int *)(param_1 + 0x108);
  }
  if ((iVar6 < 1) || (lVar8 = **(longlong **)(param_1 + 0x100), lVar8 == 0)) {
LAB_142128da4:
    lVar8 = 0;
  }
  else {
    lVar11 = UWindowTitleBarAreaSlot::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (!bVar14) goto LAB_142128da4;
  }
  FUN_1420e53b0(lVar8,&local_1f8);
LAB_142128db3:
  uVar13 = local_288;
  if ((DAT_146b17150 != 0) && (lVar8 = *(longlong *)(DAT_146b17150 + 0x7b0), lVar8 != 0)) {
    local_220 = *(longlong **)(lVar8 + 200);
    uVar13 = 1;
    if (local_220 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)local_220[1];
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(local_220 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar6 == (int)local_220[1];
        if (bVar14) {
          *(int *)(local_220 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar14) {
          if (*(longlong *)(lVar8 + 0xc0) == 0) goto LAB_142128e1f;
          bVar14 = true;
          goto LAB_142128e22;
        }
        LOCK();
        iVar6 = (int)local_220[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(local_220 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      local_220 = (longlong *)0x0;
    }
  }
LAB_142128e1f:
  bVar14 = false;
LAB_142128e22:
  plVar7 = local_220;
  if (((uVar13 & 1) != 0) && (local_220 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_220 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_220 + 8))(local_220,1);
      }
    }
  }
  if (bVar14) {
    local_278 = 0;
    lVar8 = *(longlong *)(DAT_146b17150 + 0x7b0);
    uStack_270 = *(longlong **)(lVar8 + 200);
    if (uStack_270 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)uStack_270[1];
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(uStack_270 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar6 == (int)uStack_270[1];
        if (bVar14) {
          *(int *)(uStack_270 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar14) {
          local_278 = *(undefined8 *)(lVar8 + 0xc0);
          goto LAB_142128ebf;
        }
        LOCK();
        iVar6 = (int)uStack_270[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(uStack_270 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      uStack_270 = (longlong *)0x0;
    }
LAB_142128ebf:
    plVar7 = *pplVar3;
    plVar12 = plVar7 + 0x4d;
    local_248 = (undefined4)local_278;
    uStack_244 = local_278._4_4_;
    uStack_240 = (undefined4)uStack_270;
    uStack_23c = uStack_270._4_4_;
    if (uStack_270 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_270 + 1) = (int)uStack_270[1] + 1;
      UNLOCK();
    }
    if ((longlong *)&local_248 != plVar12) {
      local_248 = (undefined4)*plVar12;
      uStack_244 = *(undefined4 *)((longlong)plVar7 + 0x26c);
      uStack_240 = (undefined4)plVar7[0x4e];
      uStack_23c = *(undefined4 *)((longlong)plVar7 + 0x274);
      local_1b8 = (undefined4)local_278;
      uStack_1b4 = local_278._4_4_;
      uStack_1b0 = (undefined4)uStack_270;
      uStack_1ac = uStack_270._4_4_;
      *(undefined4 *)plVar12 = (undefined4)local_278;
      *(undefined4 *)((longlong)plVar7 + 0x26c) = local_278._4_4_;
      *(undefined4 *)(plVar7 + 0x4e) = (undefined4)uStack_270;
      *(undefined4 *)((longlong)plVar7 + 0x274) = uStack_270._4_4_;
    }
    if (CONCAT44(uStack_23c,uStack_240) != 0) {
      LOCK();
      piVar2 = (int *)(CONCAT44(uStack_23c,uStack_240) + 8);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        puVar9 = (undefined8 *)CONCAT44(uStack_23c,uStack_240);
        (**(code **)*puVar9)(puVar9);
        LOCK();
        piVar2 = (int *)((longlong)puVar9 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_23c,uStack_240) + 8))
                    ((longlong *)CONCAT44(uStack_23c,uStack_240),1);
        }
      }
    }
    plVar7 = uStack_270;
    if (uStack_270 != (longlong *)0x0) {
      LOCK();
      plVar12 = uStack_270 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*uStack_270)(uStack_270);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*uStack_270 + 8))(uStack_270,1);
        }
      }
    }
  }
  local_210 = DAT_1464b9ee8;
  if (*(char *)(param_1 + 0x118) == '\0') {
    local_210 = DAT_1464b9ee9;
  }
  local_20f = 1;
  local_208 = 0;
  local_200 = 0;
  SLeafWidget::SetVisibility((*pplVar3)[0x58],&local_210);
  plVar12 = local_218;
  plVar7 = *(longlong **)(param_1 + 0x128);
  local_1e0 = *pplVar3;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *local_218 = (longlong)local_1e0;
  local_218[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return plVar12;
}



// FUNCTION 142129050 FUN_142129050 body=1026 status=ok
// SIG undefined FUN_142129050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142129050(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  undefined1 local_198 [264];
  longlong local_90;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar4 = *(undefined4 *)(param_1 + 0x120);
  cVar7 = *(char *)(param_1 + 0x124);
  local_1d4 = 1;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1d8 = uVar4;
  lVar9 = SWrapBox::FArguments::FArguments(local_198);
  *(bool *)(lVar9 + 0x138) = cVar7 == '\0';
  *(undefined4 *)(lVar9 + 0x118) = uVar4;
  *(undefined1 *)(lVar9 + 0x11c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x120,&local_1d0);
  plVar10 = (longlong *)operator_new(0x268);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144fb2418;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      SWrapBox::SWrapBox();
    }
  }
  plVar12 = plVar10 + 2;
  local_1b0 = plVar12;
  local_1a8 = plVar10;
  FUN_14044f790(&local_1b0,plVar12);
  local_248 = 600;
  SWidget::SetDebugInfo
            (plVar12,"SWrapBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WrapBox.cpp",0x40);
  local_238 = *(undefined4 *)(lVar9 + 0x90);
  local_208 = lVar9 + 0xf8;
  local_220 = lVar9 + 0xe8;
  local_210 = *(undefined1 *)(lVar9 + 0xf1);
  local_228 = lVar9 + 200;
  local_230 = lVar9 + 0x98;
  local_218 = *(undefined1 *)(lVar9 + 0xf0);
  local_240 = lVar9 + 0x78;
  local_248 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SWrapBox::Construct(plVar12,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar7 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar8;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  pplVar3 = (longlong **)(param_1 + 0x128);
  local_1f8 = plVar12;
  local_1f0 = plVar10;
  if (pplVar3 != &local_1f8) {
    *pplVar3 = plVar12;
    local_1f8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x130,&local_1f0);
  }
  plVar12 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar12 = plVar10 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78);
  if (local_90 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_198);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d0);
  plVar12 = *(longlong **)(param_1 + 0x100);
  plVar10 = plVar12 + *(int *)(param_1 + 0x108);
  for (; plVar12 != plVar10; plVar12 = plVar12 + 1) {
    lVar9 = *plVar12;
    if (lVar9 != 0) {
      lVar11 = UWrapBoxSlot::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        *(longlong *)(lVar9 + 0x28) = param_1;
        local_1c0 = *pplVar3;
        local_1b8 = *(longlong *)(param_1 + 0x130);
        if (local_1b8 != 0) {
          LOCK();
          *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e55e0(lVar9,&local_1c0);
      }
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x130);
  local_1e8 = *pplVar3;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)local_1e8;
  param_2[1] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar10 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      local_1e0 = plVar10;
      (**(code **)*plVar10)();
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142129490 FUN_142129490 body=190 status=ok
// SIG undefined FUN_142129490(void)

void FUN_142129490(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x148);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x158);
    if (*(int *)(param_1 + 0x15c) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x150));
      iVar2 = *(int *)(param_1 + 0x158);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar2 * 8),
               *(void **)(param_1 + 0x140),(longlong)iVar1 << 3);
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + iVar1;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x140,0);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1b8,0);
  }
  if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x210))();
  }
  return;
}



// FUNCTION 142129550 FUN_142129550 body=833 status=ok
// SIG undefined FUN_142129550(void)

void FUN_142129550(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *plStack_30;
  
  if (*param_2 != 0) {
    FUN_1419843c0(*param_2,&local_58);
    if (local_58 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)operator_new(0xc0);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        if (*(longlong *)(param_1 + 0x120) == 0) {
          FUN_1423407b0(param_1);
        }
        *puVar4 = &PTR__scalar_deleting_destructor__144fafb28;
        puVar4[1] = 0;
        puVar4[2] = 0;
        FWeakObjectPtr::operator=(puVar4 + 3);
        puVar4[4] = 0xffffffffffffffff;
        *(undefined4 *)((longlong)puVar4 + 0x94) = 0xffffffff;
        *(undefined4 *)(puVar4 + 0x13) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x9c) = 0xffffffff;
        *(undefined4 *)(puVar4 + 0x14) = 0;
        *(undefined4 *)((longlong)puVar4 + 0xa4) = 0xffffffff;
        *(undefined4 *)(puVar4 + 0x15) = 0;
        puVar4[0x16] = 0;
        puVar4[0x17] = 0;
        _guard_xfg_dispatch_icall_nop(puVar4 + 6,0,0x90);
        *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
      }
      plVar6 = (longlong *)0x0;
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        plVar5[2] = (longlong)puVar4;
        plVar6 = plVar5;
      }
      local_40 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,puVar4,puVar4);
      local_48 = 0;
      local_58 = puVar4;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_50,&local_40);
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_40)(local_40);
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
      local_38 = local_58;
      plStack_30 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      FUN_1419a1a40(*param_2,&local_38);
    }
    plVar6 = plStack_50;
    puVar4 = local_58;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    lVar7 = FWeakObjectPtr::Get(local_58 + 3);
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    if (lVar7 == lVar8) {
      FWeakObjectPtr::operator=(&local_res10,param_1);
      lVar8 = puVar4[1];
      iVar2 = *(int *)(puVar4 + 2);
      for (lVar7 = lVar8; lVar7 != lVar8 + (longlong)iVar2 * 8; lVar7 = lVar7 + 8) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res10);
        if (cVar3 != '\0') {
          if ((int)(lVar7 - lVar8 >> 3) != -1) goto LAB_1421297d2;
          break;
        }
      }
      iVar2 = *(int *)(puVar4 + 2);
      *(int *)(puVar4 + 2) = iVar2 + 1;
      if (*(int *)((longlong)puVar4 + 0x14) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar4 + 1,iVar2);
      }
      lVar8 = puVar4[1];
      *(undefined4 *)(lVar8 + (longlong)iVar2 * 8) = local_res10;
      *(undefined4 *)(lVar8 + 4 + (longlong)iVar2 * 8) = local_res14;
    }
LAB_1421297d2:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar6)(plVar6);
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
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_50 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plStack_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return;
}



// FUNCTION 1421298a0 FUN_1421298a0 body=59 status=ok
// SIG undefined FUN_1421298a0(void)

void FUN_1421298a0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x36] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x2a0))();
    if (lVar1 != 0) {
      FUN_142713b70(lVar1,param_1[0x36]);
      return;
    }
  }
  return;
}



// FUNCTION 1421298e0 Rehash body=636 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_142129a1f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar8 < iStack_44) {
LAB_142129a1f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        lVar4 = *param_1 + (longlong)iStack_1c * 0x48;
        iVar8 = (int)(*(ulonglong *)(*param_1 + (longlong)iStack_1c * 0x48) >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x44) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x40) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142129b60 Release body=247 status=ok
// SIG undefined Release(void)

void FUserWidgetPool::Release(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar5 = plVar1;
  while( true ) {
    if (plVar5 == plVar1 + *(int *)(param_1 + 0x20)) {
      return;
    }
    if (*plVar5 == param_2) break;
    plVar5 = plVar5 + 1;
  }
  iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
  if (iVar4 == -1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar3 + 1;
  if (*(int *)(param_1 + 0x34) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8) = param_2;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar2 = (iVar3 - iVar4) + -1;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 8),
               (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar4 + 1) * 8),
               (longlong)iVar2 << 3);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar3 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x18);
  if (param_3 == '\0') {
    return;
  }
  TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x38,param_2);
  return;
}



// FUNCTION 142129c60 ReleaseAll body=159 status=ok
// SIG undefined ReleaseAll(void)

void FUserWidgetPool::ReleaseAll(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x34) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x30);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8),
               *(void **)(param_1 + 0x18),(longlong)iVar1 << 3);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  if (param_2 != '\0') {
    TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
    ::Reset(param_1 + 0x38);
  }
  return;
}



// FUNCTION 142129d00 FUN_142129d00 body=528 status=ok
// SIG undefined FUN_142129d00(void)

ulonglong FUN_142129d00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  ulonglong in_RAX;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *local_res18;
  undefined4 *local_res20;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined **local_58 [5];
  longlong *local_30;
  
  if ((DAT_1469f4590 != 0) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    local_88 = *param_2;
    local_80 = param_2[1];
    local_78 = param_2[2];
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uVar9 = FUN_1417ad0d0();
    FInputKeyManager::GetCodesFromKey(uVar9,&local_88,&local_res18,&local_res20);
    if (local_res18 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *local_res18;
    }
    if (local_res20 == (undefined4 *)0x0) {
      lVar6 = *param_2;
      if (lVar6 == DAT_1469e98f8) {
        uVar10 = 9;
      }
      else if (lVar6 == DAT_1469e98e0) {
        uVar10 = 8;
      }
      else {
        uVar10 = 0;
        if (lVar6 == DAT_1469e9910) {
          uVar10 = 10;
        }
      }
    }
    else {
      uVar10 = *local_res20;
    }
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8);
    local_70 = *param_2;
    local_68 = param_2[1];
    local_60 = param_2[2];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FKeyEvent::FKeyEvent(local_58,&local_70,param_1 + 0x338,uVar4,0,uVar11,uVar10);
    bVar7 = FUN_1418b3850(DAT_1469f4590,local_58);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar5 = (longlong *)param_2[2];
    local_58[0] = &PTR_FUN_144d56560;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    return (ulonglong)bVar7;
  }
  plVar5 = (longlong *)param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    uVar8 = (int)lVar6 - 1;
    in_RAX = (ulonglong)uVar8;
    if (uVar8 == 0) {
      in_RAX = (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        in_RAX = (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142129f10 ReleaseMouseCapture body=60 status=ok
// SIG undefined ReleaseMouseCapture(void)

undefined8 UWidgetBlueprintLibrary::ReleaseMouseCapture(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406a1ac0(param_2);
  FUN_140459130(param_2,uVar1);
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 142129f50 FUN_142129f50 body=855 status=ok
// SIG undefined FUN_142129f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142129f50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_338 [32];
  undefined1 *local_318;
  longlong *local_310;
  longlong *local_308;
  undefined4 local_300;
  longlong local_2f8;
  undefined1 local_2e8 [8];
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined1 local_2c8 [112];
  undefined1 local_258 [8];
  undefined1 local_250 [320];
  longlong *local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  if ((DAT_1469f4590 == 0) || (*(longlong *)(param_1 + 0x2e0) == 0)) {
    plVar2 = (longlong *)param_2[2];
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar2 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 != 1) {
      return;
    }
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar9 = (int *)((longlong)plVar2 + 0xc);
    iVar4 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    (**(code **)(*plVar2 + 8))(plVar2,1);
    return;
  }
  plVar2 = (longlong *)(param_1 + 0x340);
  if (*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x374)) {
    lVar10 = *param_2;
    iVar4 = (int)((ulonglong)lVar10 >> 0x20);
    lVar6 = *(longlong *)(param_1 + 0x380);
    if (*(longlong *)(param_1 + 0x380) == 0) {
      lVar6 = param_1 + 0x378;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)(iVar4 + (int)lVar10) &
                             (longlong)*(int *)(param_1 + 0x388) - 1U) * 4);
    if (iVar5 != -1) {
      lVar6 = *plVar2;
      do {
        if (*(longlong *)((longlong)iVar5 * 0x20 + lVar6) == lVar10) {
          if (iVar5 != -1) {
            uVar8 = (longlong)*(int *)(param_1 + 0x388) - 1;
            lVar11 = *(longlong *)(param_1 + 0x380);
            if (*(longlong *)(param_1 + 0x380) == 0) {
              lVar11 = param_1 + 0x378;
            }
            iVar4 = *(int *)(lVar11 + ((longlong)(iVar4 + (int)lVar10) & uVar8) * 4);
            goto joined_r0x00014212a044;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar6);
      } while (iVar5 != -1);
    }
  }
  goto LAB_14212a241;
joined_r0x00014212a044:
  if (iVar4 == -1) goto LAB_14212a113;
  lVar7 = (longlong)iVar4 * 0x20;
  if (*(longlong *)(lVar7 + lVar6) == lVar10) {
    lVar10 = (longlong)iVar4 * 0x20;
    uVar8 = (longlong)*(int *)(lVar6 + 0x1c + lVar10) & uVar8;
    piVar9 = (int *)(lVar11 + uVar8 * 4);
    iVar5 = *(int *)(lVar11 + uVar8 * 4);
    goto joined_r0x00014212a094;
  }
  iVar4 = *(int *)(lVar7 + 0x18 + lVar6);
  goto joined_r0x00014212a044;
joined_r0x00014212a094:
  if (iVar5 == -1) goto LAB_14212a0c0;
  if (iVar5 == iVar4) {
    *piVar9 = *(int *)(lVar6 + 0x18 + lVar10);
    goto LAB_14212a0c0;
  }
  piVar9 = (int *)(lVar6 + 0x18 + (longlong)iVar5 * 0x20);
  iVar5 = *piVar9;
  goto joined_r0x00014212a094;
LAB_14212a0c0:
  plVar3 = *(longlong **)(lVar10 + 0x10 + *plVar2);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar9 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(plVar2,iVar4,1);
LAB_14212a113:
  local_2e8[0] = DAT_1464b9ee8;
  local_318 = local_2e8;
  FWeakWidgetPath::ToWidgetPath(param_1 + 0x318,local_258,0,0);
  local_2e0 = *param_2;
  local_2d8 = param_2[1];
  local_2d0 = param_2[2];
  if (local_2d0 != 0) {
    LOCK();
    *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
    UNLOCK();
  }
  local_318 = (undefined1 *)(param_1 + 0x428);
  local_2f8 = param_1 + 0x338;
  local_308 = &local_2e0;
  local_300 = 0;
  local_310 = plVar2;
  FUN_1418892a0(local_2c8,*(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8),
                (longlong)*(float *)(param_1 + 0x2f4),param_1 + 0x420);
  FUN_1418c00f0(DAT_1469f4590,local_f8,local_258,local_2c8);
  FUN_140438c20(local_f8);
  FPointerEvent::~FPointerEvent(local_2c8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_108);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_110 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar9 = (int *)((longlong)local_110 + 0xc);
      iVar4 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  FUN_140456b10(local_250);
LAB_14212a241:
  FKey::~FKey(param_2);
  return;
}



// FUNCTION 14212a2b0 FUN_14212a2b0 body=76 status=ok
// SIG undefined FUN_14212a2b0(void)

void FUN_14212a2b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_14212cbc0();
    *(undefined8 *)(param_1 + 0x798) = 0;
  }
  if (*(longlong *)(param_1 + 0x840) != 0) {
    BeginCleanup();
    *(undefined8 *)(param_1 + 0x840) = 0;
  }
  FUN_142142440(param_1);
  return;
}



// FUNCTION 14212a300 FUN_14212a300 body=139 status=ok
// SIG undefined FUN_14212a300(void)

void FUN_14212a300(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1c0) != &local_18) {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c8,&local_10);
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
  return;
}



// FUNCTION 14212a390 FUN_14212a390 body=149 status=ok
// SIG undefined FUN_14212a390(void)

void FUN_14212a390(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x278))();
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x50) != &local_18) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,&local_10);
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
  return;
}



// FUNCTION 14212a430 FUN_14212a430 body=139 status=ok
// SIG undefined FUN_14212a430(void)

void FUN_14212a430(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x250) != &local_18) {
    *(undefined8 *)(param_1 + 0x250) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 600,&local_10);
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
  return;
}



// FUNCTION 14212a4c0 FUN_14212a4c0 body=139 status=ok
// SIG undefined FUN_14212a4c0(void)

void FUN_14212a4c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x410) != &local_18) {
    *(undefined8 *)(param_1 + 0x410) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x418,&local_10);
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
  return;
}



// FUNCTION 14212a550 FUN_14212a550 body=139 status=ok
// SIG undefined FUN_14212a550(void)

void FUN_14212a550(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x118) != &local_18) {
    *(undefined8 *)(param_1 + 0x118) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x120,&local_10);
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
  return;
}



// FUNCTION 14212a5e0 FUN_14212a5e0 body=41 status=ok
// SIG undefined FUN_14212a5e0(void)

void FUN_14212a5e0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x278))();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 14212a610 FUN_14212a610 body=139 status=ok
// SIG undefined FUN_14212a610(void)

void FUN_14212a610(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x758) != &local_18) {
    *(undefined8 *)(param_1 + 0x758) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x760,&local_10);
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
  return;
}



// FUNCTION 14212a6a0 FUN_14212a6a0 body=138 status=ok
// SIG undefined FUN_14212a6a0(void)

void FUN_14212a6a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1a8) != &local_18) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b0,&local_10);
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
  return;
}



// FUNCTION 14212a730 ReleaseSlateResources body=138 status=ok
// SIG undefined ReleaseSlateResources(void)

void USpacer::ReleaseSlateResources(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x128) != &local_18) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x130,&local_10);
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
  return;
}


