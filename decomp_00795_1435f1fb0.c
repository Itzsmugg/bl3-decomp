// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435f1fb0 FUN_1435f1fb0 body=94 status=ok
// SIG undefined FUN_1435f1fb0(void)

undefined8
FUN_1435f1fb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  (**(code **)(*param_1 + 0x20))();
  FUN_14351d190(param_2,param_1[0x11],param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1435f2020 FUN_1435f2020 body=222 status=ok
// SIG undefined FUN_1435f2020(void)

void FUN_1435f2020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  puVar5 = (undefined8 *)0x0;
  if (*plVar1 == 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x18,0);
    puVar3 = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar3 = puVar2;
    }
    Scaleform::
    AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer_*___ptr64,2,Scaleform::ArrayDefaultPolicy>_>
    ::operator=(plVar1,puVar3);
  }
  plVar1 = (longlong *)*plVar1;
  if ((plVar1 != (longlong *)0x0) && ((undefined8 *)plVar1[1] != (undefined8 *)0x0)) {
    plVar4 = (longlong *)*plVar1;
    do {
      if (*plVar4 == param_2) {
        if (puVar5 != (undefined8 *)&DAT_ffffffffffffffff) {
          return;
        }
        break;
      }
      puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      plVar4 = plVar4 + 1;
    } while (puVar5 < (undefined8 *)plVar1[1]);
  }
  uVar6 = plVar1[1] + 1;
  if (uVar6 < (ulonglong)plVar1[1]) {
    uVar7 = uVar6;
    if ((ulonglong)plVar1[2] >> 1 <= uVar6) goto LAB_1435f20d7;
  }
  else {
    if (uVar6 <= (ulonglong)plVar1[2]) goto LAB_1435f20d7;
    uVar7 = (uVar6 >> 2) + uVar6;
  }
  FUN_1432cfd30(plVar1,plVar1,uVar7);
LAB_1435f20d7:
  plVar1[1] = uVar6;
  plVar1 = (longlong *)(*plVar1 + -8 + uVar6 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
  }
  return;
}



// FUNCTION 1435f2150 FUN_1435f2150 body=65 status=ok
// SIG undefined FUN_1435f2150(void)

void FUN_1435f2150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = 0;
    if (plVar1[1] != 0) {
      plVar3 = (longlong *)*plVar1;
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if ((ulonglong)plVar1[1] <= uVar2) {
          return;
        }
      }
      if (uVar2 != 0xffffffffffffffff) {
        ((longlong *)*plVar1)[uVar2] = 0;
      }
    }
  }
  return;
}



// FUNCTION 1435f21a0 FUN_1435f21a0 body=222 status=ok
// SIG undefined FUN_1435f21a0(void)

void FUN_1435f21a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  puVar5 = (undefined8 *)0x0;
  if (*plVar1 == 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x18,0);
    puVar3 = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar3 = puVar2;
    }
    Scaleform::
    AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer_*___ptr64,2,Scaleform::ArrayDefaultPolicy>_>
    ::operator=(plVar1,puVar3);
  }
  plVar1 = (longlong *)*plVar1;
  if ((plVar1 != (longlong *)0x0) && ((undefined8 *)plVar1[1] != (undefined8 *)0x0)) {
    plVar4 = (longlong *)*plVar1;
    do {
      if (*plVar4 == param_2) {
        if (puVar5 != (undefined8 *)&DAT_ffffffffffffffff) {
          return;
        }
        break;
      }
      puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      plVar4 = plVar4 + 1;
    } while (puVar5 < (undefined8 *)plVar1[1]);
  }
  uVar6 = plVar1[1] + 1;
  if (uVar6 < (ulonglong)plVar1[1]) {
    uVar7 = uVar6;
    if ((ulonglong)plVar1[2] >> 1 <= uVar6) goto LAB_1435f2257;
  }
  else {
    if (uVar6 <= (ulonglong)plVar1[2]) goto LAB_1435f2257;
    uVar7 = (uVar6 >> 2) + uVar6;
  }
  FUN_1432cfd30(plVar1,plVar1,uVar7);
LAB_1435f2257:
  plVar1[1] = uVar6;
  plVar1 = (longlong *)(*plVar1 + -8 + uVar6 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
  }
  return;
}



// FUNCTION 1435f22d0 FUN_1435f22d0 body=65 status=ok
// SIG undefined FUN_1435f22d0(void)

void FUN_1435f22d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = 0;
    if (plVar1[1] != 0) {
      plVar3 = (longlong *)*plVar1;
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if ((ulonglong)plVar1[1] <= uVar2) {
          return;
        }
      }
      if (uVar2 != 0xffffffffffffffff) {
        ((longlong *)*plVar1)[uVar2] = 0;
      }
    }
  }
  return;
}



// FUNCTION 1435f2320 FUN_1435f2320 body=222 status=ok
// SIG undefined FUN_1435f2320(void)

void FUN_1435f2320(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)0x0;
  if (*plVar1 == 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x18,0);
    puVar3 = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar3 = puVar2;
    }
    Scaleform::
    AutoPtr<Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl_sensors::Accelerometer_*___ptr64,2,Scaleform::ArrayDefaultPolicy>_>
    ::operator=(plVar1,puVar3);
  }
  plVar1 = (longlong *)*plVar1;
  if ((plVar1 != (longlong *)0x0) && ((undefined8 *)plVar1[1] != (undefined8 *)0x0)) {
    plVar4 = (longlong *)*plVar1;
    do {
      if (*plVar4 == param_2) {
        if (puVar5 != (undefined8 *)&DAT_ffffffffffffffff) {
          return;
        }
        break;
      }
      puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      plVar4 = plVar4 + 1;
    } while (puVar5 < (undefined8 *)plVar1[1]);
  }
  uVar6 = plVar1[1] + 1;
  if (uVar6 < (ulonglong)plVar1[1]) {
    uVar7 = uVar6;
    if ((ulonglong)plVar1[2] >> 1 <= uVar6) goto LAB_1435f23d7;
  }
  else {
    if (uVar6 <= (ulonglong)plVar1[2]) goto LAB_1435f23d7;
    uVar7 = (uVar6 >> 2) + uVar6;
  }
  FUN_1432cfd30(plVar1,plVar1,uVar7);
LAB_1435f23d7:
  plVar1[1] = uVar6;
  plVar1 = (longlong *)(*plVar1 + -8 + uVar6 * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
  }
  return;
}



// FUNCTION 1435f2450 FUN_1435f2450 body=224 status=ok
// SIG undefined FUN_1435f2450(void)

longlong FUN_1435f2450(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *_Dst;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
LAB_1435f250c:
    lVar3 = -1;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8);
    do {
      while( true ) {
        lVar3 = lVar3 + -1;
        if (lVar3 < 0) goto LAB_1435f250c;
        plVar1 = *(longlong **)(param_1 + 0x70);
        lVar2 = *(longlong *)(*plVar1 + lVar3 * 8);
        if (lVar2 != 0) break;
        if (plVar1[1] == 1) {
          Scaleform::
          ArrayBase<Scaleform::ArrayData<unsigned_long,Scaleform::AllocatorGH<unsigned_long,2>,Scaleform::ArrayDefaultPolicy>_>
          ::Clear(plVar1);
        }
        else {
          _Dst = (void *)(*plVar1 + lVar3 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(plVar1[1] - lVar3) * 8 - 8);
          plVar1[1] = plVar1[1] + -1;
        }
      }
    } while ((*param_2 != *(longlong *)(lVar2 + 0x80)) ||
            ((*param_3 != *(longlong *)(lVar2 + 0x88) &&
             ((*(int *)(*param_3 + 0x20) != 0 ||
              (*(longlong *)(lVar2 + 0x88) != *(longlong *)(*(longlong *)(lVar2 + 0x88) + 8) + 0x80)
              )))));
  }
  return lVar3;
}



// FUNCTION 1435f2540 FUN_1435f2540 body=65 status=ok
// SIG undefined FUN_1435f2540(void)

void FUN_1435f2540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = 0;
    if (plVar1[1] != 0) {
      plVar3 = (longlong *)*plVar1;
      while (*plVar3 != param_2) {
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if ((ulonglong)plVar1[1] <= uVar2) {
          return;
        }
      }
      if (uVar2 != 0xffffffffffffffff) {
        ((longlong *)*plVar1)[uVar2] = 0;
      }
    }
  }
  return;
}



// FUNCTION 1435f2590 FUN_1435f2590 body=104 status=ok
// SIG undefined FUN_1435f2590(void)

void FUN_1435f2590(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
    }
    *(undefined8 **)(param_1 + 0xc0) = puVar1;
  }
  FUN_143613c80(*(undefined8 *)(param_1 + 0xc0),param_2,param_3);
  return;
}



// FUNCTION 1435f2600 FUN_1435f2600 body=255 status=ok
// SIG undefined FUN_1435f2600(void)

longlong FUN_1435f2600(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return 0;
  }
  uVar3 = FUN_143360a60(*(undefined8 *)(param_1 + 0x3b8));
  lVar6 = 0;
  iVar1 = *(int *)(uVar3 + 0x18);
  *(int *)(uVar3 + 0x18) = iVar1 + 1;
  lVar5 = **(longlong **)(param_1 + 0xc0);
  lVar4 = lVar6;
  if (lVar5 != 0) {
    uVar2 = *(ulonglong *)(lVar5 + 8);
    uVar9 = *(uint *)(uVar3 + 0x1c) & uVar2;
    puVar8 = (ulonglong *)(lVar5 + 0x10 + uVar9 * 0x30);
    if ((*puVar8 != 0xfffffffffffffffe) &&
       (uVar7 = uVar9, (*(uint *)(puVar8[1] + 0x1c) & uVar2) == uVar9)) {
      while (((*(uint *)(puVar8[1] + 0x1c) & uVar2) != uVar9 || (puVar8[1] != uVar3))) {
        uVar7 = *puVar8;
        if (uVar7 == 0xffffffffffffffff) goto LAB_1435f26c7;
        puVar8 = (ulonglong *)(lVar5 + 0x10 + uVar7 * 0x30);
      }
      if (-1 < (longlong)uVar7) {
        lVar4 = lVar5 + 0x18 + uVar7 * 0x30;
      }
    }
  }
LAB_1435f26c7:
  lVar5 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar5 = lVar6;
  }
  *(int *)(uVar3 + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_14335f920(uVar3);
  }
  return lVar5;
}



// FUNCTION 1435f2710 FUN_1435f2710 body=104 status=ok
// SIG undefined FUN_1435f2710(void)

void FUN_1435f2710(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2[7] == 0) {
    Scaleform::GFx::InteractiveObject::AddToPlayList(param_2);
    if (((*(uint *)(param_2 + 0x17) >> 0x15 & 1) == 0) ||
       ((*(uint *)(param_2 + 0x17) >> 0x16 & 1) != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    iVar1 = (**(code **)(*param_2 + 0x340))(param_2,uVar2);
    if (iVar1 == -1) {
      *(uint *)(param_2 + 0x17) = *(uint *)(param_2 + 0x17) | 0x400000;
    }
    else if (iVar1 == 1) {
      FUN_14336e960(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1435f2780 FUN_1435f2780 body=1699 status=ok
// SIG undefined FUN_1435f2780(void)

void FUN_1435f2780(longlong param_1,longlong param_2,char param_3,char param_4)

{
  int *piVar1;
  void *_Dst;
  RefCountNTSImpl *pRVar2;
  longlong lVar3;
  char cVar4;
  RefCountNTSImpl *pRVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  RefCountNTSImpl *pRVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong local_res10;
  longlong local_58;
  undefined **local_50;
  longlong lStack_48;
  
  uVar12 = *(ulonglong *)(param_2 + 0xa0);
  pRVar5 = (RefCountNTSImpl *)0x0;
  if (uVar12 != 0) {
    *(uint *)(uVar12 + 8) = *(int *)(uVar12 + 8) + 1U & 0x8fffffff;
  }
  pRVar10 = pRVar5;
  if ((*(longlong *)(uVar12 + 0x88) != 0) &&
     (pRVar2 = *(RefCountNTSImpl **)(*(longlong *)(uVar12 + 0x88) + 0x88),
     pRVar10 = (RefCountNTSImpl *)0x0, pRVar2 != (RefCountNTSImpl *)0x0)) {
    *(int *)(pRVar2 + 8) = *(int *)(pRVar2 + 8) + 1;
    pRVar10 = pRVar2;
  }
  local_58 = FUN_143360950(*(undefined8 *)(param_1 + 0x3b8),"unload",6);
  *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
  Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
            (uVar12,&local_res10,&local_58,0,0);
  piVar1 = (int *)(local_58 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (*(longlong *)(uVar12 + 0x88) != 0) {
    pRVar5 = *(RefCountNTSImpl **)(*(longlong *)(uVar12 + 0x88) + 0x88);
  }
  FUN_14351a300(uVar12,local_res10,pRVar5);
  FUN_1434ff9e0(uVar12);
  if (local_res10 != 0) {
    if ((local_res10 & 1) == 0) {
      if ((*(uint *)(local_res10 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_res10 + 8) = *(uint *)(local_res10 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_res10 = local_res10 - 1;
    }
  }
  if (((uVar12 & 1) == 0) && ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
    FUN_1434ef880(uVar12);
  }
  FUN_1434fd640(param_2);
  for (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5300); lVar7 != 0;
      lVar7 = *(longlong *)(lVar7 + 8)) {
    if (*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x28) == param_2) {
      *(undefined1 *)(*(longlong *)(lVar7 + 0x20) + 0x25) = 1;
    }
  }
  for (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28); lVar7 != 0;
      lVar7 = *(longlong *)(lVar7 + 8)) {
    if (*(longlong *)(lVar7 + 0x28) == param_2) {
      *(undefined1 *)(lVar7 + 0x25) = 1;
    }
  }
  lVar7 = *(longlong *)(param_2 + 0x88);
  pRVar5 = pRVar10;
  local_58 = lVar7;
  if (pRVar10 == (RefCountNTSImpl *)0x0) {
    if (((lVar7 == 0) || (*(int *)(lVar7 + 0xe0) == 0)) ||
       (pRVar5 = (RefCountNTSImpl *)Scaleform::GFx::DisplayObjContainer::GetChildAt(lVar7,0),
       pRVar5 == (RefCountNTSImpl *)0x0)) goto LAB_1435f2dcc;
    *(int *)(pRVar5 + 8) = *(int *)(pRVar5 + 8) + 1;
  }
  (**(code **)(*(longlong *)pRVar5 + 0x260))(pRVar5);
  (**(code **)(*(longlong *)pRVar5 + 0x1e0))(pRVar5);
  lVar6 = (**(code **)(*(longlong *)pRVar5 + 0x218))(pRVar5);
  if (lVar6 != 0) {
    Scaleform::GFx::Resource::AddRef(lVar6);
    cVar4 = FUN_1435f2fc0(param_1,lVar6);
    if ((param_3 != '\0') && (cVar4 != '\0')) {
      plVar13 = (longlong *)(param_1 + 400);
      lVar7 = *plVar13;
      if (lVar7 == 0) {
        local_50 = (undefined **)0x0;
        lStack_48 = 0;
        uVar12 = 0;
        plVar13 = (longlong *)0x0;
      }
      else {
        uVar12 = 0;
        plVar9 = (longlong *)(lVar7 + 0x10);
        do {
          if (*plVar9 != -2) break;
          uVar12 = uVar12 + 1;
          plVar9 = plVar9 + 4;
        } while (uVar12 <= *(ulonglong *)(lVar7 + 8));
      }
      do {
        if (((plVar13 == (longlong *)0x0) || (lVar7 = *plVar13, lVar7 == 0)) ||
           (*(longlong *)(lVar7 + 8) < (longlong)uVar12)) goto LAB_1435f2b3b;
        plVar9 = *(longlong **)((uVar12 + 1) * 0x20 + lVar7);
        if ((plVar9 != (longlong *)0x0) && (uVar11 = 0, plVar9[1] != 0)) {
          do {
            lVar7 = *plVar9;
            piVar1 = *(int **)(lVar7 + uVar11 * 8);
            pRVar10 = (RefCountNTSImpl *)0x0;
            if (piVar1 == (int *)0x0) {
LAB_1435f2ad8:
              uVar11 = uVar11 + 1;
              if (pRVar10 != (RefCountNTSImpl *)0x0) goto LAB_1435f2ae0;
            }
            else {
              pRVar10 = *(RefCountNTSImpl **)(piVar1 + 2);
              if (pRVar10 == (RefCountNTSImpl *)0x0) {
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
                *(undefined8 *)(lVar7 + uVar11 * 8) = 0;
                pRVar10 = (RefCountNTSImpl *)0x0;
                goto LAB_1435f2ad8;
              }
              if (*(int *)(pRVar10 + 8) == 0) {
                pRVar10 = (RefCountNTSImpl *)0x0;
                goto LAB_1435f2ad8;
              }
              *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
              *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
              Scaleform::RefCountNTSImpl::Release(pRVar10);
              lVar7 = (**(code **)(*(longlong *)pRVar10 + 0x218))(pRVar10);
              if (lVar7 != lVar6) goto LAB_1435f2ad8;
              FUN_143612500(plVar9,uVar11);
              uVar8 = *(ulonglong *)(pRVar10 + (ulonglong)(byte)pRVar10[0x6d] * 4 + 0x10);
              if (uVar8 == 0) {
                uVar8 = *(ulonglong *)(pRVar10 + (ulonglong)(byte)pRVar10[0x6d] * 4 + 8);
              }
              if ((uVar8 & 1) != 0) {
                uVar8 = uVar8 - 1;
              }
              if (uVar8 != 0) {
                Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::
                RemoveListenersForMovieDef(uVar8,lVar6);
              }
LAB_1435f2ae0:
              Scaleform::RefCountNTSImpl::Release(pRVar10);
            }
          } while (uVar11 < (ulonglong)plVar9[1]);
        }
        uVar11 = *(ulonglong *)(*plVar13 + 8);
        if (((longlong)uVar12 <= (longlong)uVar11) && (uVar12 = uVar12 + 1, uVar12 <= uVar11)) {
          plVar9 = (longlong *)(*plVar13 + 0x10 + uVar12 * 0x20);
          do {
            if (*plVar9 != -2) break;
            uVar12 = uVar12 + 1;
            plVar9 = plVar9 + 4;
          } while (uVar12 <= uVar11);
        }
      } while( true );
    }
  }
  goto LAB_1435f2d4d;
LAB_1435f2b3b:
  lVar7 = *(longlong *)(param_1 + 0x198);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 0x28))();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar7 + -0x48;
    }
  }
  uVar12 = *(ulonglong *)(lVar7 + 0x10);
  if (uVar12 == 0) {
    uVar12 = *(ulonglong *)(lVar7 + 8);
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 - 1;
  }
  if (uVar12 != 0) {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::RemoveListenersForMovieDef
              (uVar12,lVar6);
  }
  FUN_1432e7150(*(undefined8 *)(param_1 + 0x10),lVar6);
  FUN_1432eddb0(*(undefined8 *)(param_1 + 0x10),lVar6);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28);
  if (lVar7 != 0) {
    local_50 = &PTR_FUN_145b4dfd8;
    lStack_48 = lVar6;
    FUN_1433dfdc0(lVar7,&local_50);
  }
  plVar13 = (longlong *)(param_1 + 1000);
  lVar14 = 6;
  do {
    uVar12 = 0;
    if (plVar13[-2] != 0) {
      do {
        lVar7 = plVar13[-3];
        lVar3 = *(longlong *)(lVar7 + uVar12 * 8);
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 8);
          *piVar1 = *piVar1 + 1;
        }
        pRVar10 = *(RefCountNTSImpl **)(lVar7 + uVar12 * 8);
        if (pRVar10 == (RefCountNTSImpl *)0x0) {
LAB_1435f2cb3:
          uVar12 = uVar12 + 1;
        }
        else {
          uVar11 = *(ulonglong *)(pRVar10 + (ulonglong)(byte)pRVar10[0x6d] * 4 + 0x10);
          if (uVar11 == 0) {
            uVar11 = *(ulonglong *)(pRVar10 + (ulonglong)(byte)pRVar10[0x6d] * 4 + 8);
          }
          if ((uVar11 & 1) != 0) {
            uVar11 = uVar11 - 1;
          }
          if (((uVar11 == 0) ||
              (lVar7 = (**(code **)(**(longlong **)(uVar11 + 0x28) + 0x38))(), lVar7 == 0)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x178) != lVar6)) goto LAB_1435f2cb3;
          if (plVar13[-2] == 1) {
            FUN_143613430(plVar13 + -3,plVar13 + -3,0);
          }
          else {
            pRVar2 = *(RefCountNTSImpl **)(plVar13[-3] + uVar12 * 8);
            if (pRVar2 != (RefCountNTSImpl *)0x0) {
              Scaleform::RefCountNTSImpl::Release(pRVar2);
            }
            _Dst = (void *)(plVar13[-3] + uVar12 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + 8),(plVar13[-2] - uVar12) * 8 - 8);
            plVar13[-2] = plVar13[-2] + -1;
          }
        }
        if (pRVar10 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar10);
        }
      } while (uVar12 < (ulonglong)plVar13[-2]);
    }
    lVar7 = *plVar13;
    if (lVar7 != 0) {
      uVar12 = *(ulonglong *)(lVar7 + 0x10 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4);
      if (uVar12 == 0) {
        uVar12 = *(ulonglong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4 + 8);
      }
      if ((uVar12 & 1) != 0) {
        uVar12 = uVar12 - 1;
      }
      if (((uVar12 != 0) &&
          (lVar7 = (**(code **)(**(longlong **)(uVar12 + 0x28) + 0x38))(), lVar7 != 0)) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x178) == lVar6)) {
        if ((RefCountNTSImpl *)*plVar13 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar13);
        }
        *plVar13 = 0;
      }
    }
    plVar13 = plVar13 + 0x1c;
    lVar14 = lVar14 + -1;
    lVar7 = local_58;
  } while (lVar14 != 0);
LAB_1435f2d4d:
  uVar11 = (ulonglong)(byte)pRVar5[0x6d];
  uVar12 = *(ulonglong *)(pRVar5 + uVar11 * 4 + 0x10);
  if (uVar12 == 0) {
    uVar12 = *(ulonglong *)(pRVar5 + uVar11 * 4 + 8);
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 - 1;
  }
  *(ulonglong *)(pRVar5 + uVar11 * 4 + 0x10) = uVar12;
  uVar12 = *(ulonglong *)(pRVar5 + uVar11 * 4 + 8);
  if (uVar12 != 0) {
    if ((uVar12 & 1) == 0) {
      if ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(pRVar5 + uVar11 * 4 + 8) = uVar12 - 1;
    }
    *(undefined8 *)(pRVar5 + uVar11 * 4 + 8) = 0;
  }
  if (lVar7 != 0) {
    FUN_1433d4de0(lVar7 + 0xd8,lVar7);
    FSettingsModule::ShutdownModule(lVar7);
  }
  pRVar10 = pRVar5;
  if (lVar6 != 0) {
    FUN_1432de450(lVar6);
  }
LAB_1435f2dcc:
  if (param_4 != '\0') {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x30) + 0xe0) = 10;
  }
  if ((pRVar10 != (RefCountNTSImpl *)0x0) && (((ulonglong)pRVar10 & 1) == 0)) {
    Scaleform::RefCountNTSImpl::Release(pRVar10);
  }
  return;
}



// FUNCTION 1435f2ea0 FUN_1435f2ea0 body=273 status=ok
// SIG undefined FUN_1435f2ea0(void)

void FUN_1435f2ea0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong *puVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  ulonglong *local_18;
  undefined4 *local_10;
  
  plVar1 = (longlong *)(param_1 + 0x918);
  piVar9 = (int *)0x0;
  piVar7 = (int *)(param_1 + 0x48);
  if (param_1 == 0) {
    piVar7 = piVar9;
  }
  local_res10 = param_2;
  FUN_1433124b0(param_2,piVar7);
  lVar3 = *plVar1;
  piVar7 = piVar9;
  if (lVar3 != 0) {
    uVar4 = *(ulonglong *)(lVar3 + 8);
    uVar10 = uVar4 & local_res10;
    lVar2 = uVar10 * 3 + 2;
    puVar8 = (ulonglong *)(lVar3 + lVar2 * 8);
    if ((*(longlong *)(lVar3 + lVar2 * 8) != -2) && (uVar6 = uVar10, (puVar8[1] & uVar4) == uVar10))
    {
      while (((puVar8[1] & uVar4) != uVar10 || (puVar8[1] != local_res10))) {
        uVar6 = *puVar8;
        if (uVar6 == 0xffffffffffffffff) goto LAB_1435f2f50;
        puVar8 = (ulonglong *)(lVar3 + uVar6 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar6) {
        piVar7 = (int *)(lVar3 + (uVar6 + 1) * 0x18);
      }
    }
  }
LAB_1435f2f50:
  piVar5 = piVar7 + 2;
  if (piVar7 == (int *)0x0) {
    piVar5 = piVar9;
  }
  if (piVar5 == (int *)0x0) {
    local_18 = &local_res10;
    local_res8[0] = 1;
    local_10 = local_res8;
    FUN_143608040(plVar1,plVar1,&local_18,local_res10);
    return;
  }
  *piVar5 = *piVar5 + 1;
  return;
}



// FUNCTION 1435f2fc0 FUN_1435f2fc0 body=245 status=ok
// SIG undefined FUN_1435f2fc0(void)

undefined8 FUN_1435f2fc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  int *piVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong local_res10;
  
  lVar2 = *(longlong *)(param_1 + 0x918);
  piVar9 = (int *)0x0;
  piVar7 = piVar9;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 8);
    uVar10 = uVar3 & param_2;
    lVar1 = uVar10 * 3 + 2;
    puVar6 = (ulonglong *)(lVar2 + lVar1 * 8);
    if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) && (uVar8 = uVar10, (puVar6[1] & uVar3) == uVar10))
    {
      while (((puVar6[1] & uVar3) != uVar10 || (puVar6[1] != param_2))) {
        uVar8 = *puVar6;
        if (uVar8 == 0xffffffffffffffff) goto LAB_1435f3061;
        puVar6 = (ulonglong *)(lVar2 + uVar8 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar8) {
        piVar7 = (int *)(lVar2 + (uVar8 + 1) * 0x18);
      }
    }
  }
LAB_1435f3061:
  piVar4 = piVar7 + 2;
  if (piVar7 == (int *)0x0) {
    piVar4 = piVar9;
  }
  if ((piVar4 == (int *)0x0) || (*piVar4 = *piVar4 + -1, *piVar4 != 0)) {
    uVar5 = 0;
  }
  else {
    local_res10 = param_2;
    FUN_1436043a0(param_1 + 0x918,&local_res10);
    piVar7 = (int *)(param_1 + 0x48);
    if (param_1 == 0) {
      piVar7 = piVar9;
    }
    Scaleform::GFx::MovieDefImpl::RemoveReleaseNotifier(param_2,piVar7);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1435f30c0 FUN_1435f30c0 body=146 status=ok
// SIG undefined FUN_1435f30c0(void)

undefined8 FUN_1435f30c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80);
  while( true ) {
    lVar2 = *(longlong *)(param_1 + 0x10) + 0x70;
    if (*(longlong *)(param_1 + 0x10) == -0x78) {
      lVar2 = 0;
    }
    if (lVar3 == lVar2) break;
    cVar1 = FUN_1434f2330(param_2,param_3,*(undefined8 *)(lVar3 + 0x20),0);
    if (cVar1 != '\0') {
      return 1;
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
  }
  return 0;
}



// FUNCTION 1435f3160 FUN_1435f3160 body=278 status=ok
// SIG undefined FUN_1435f3160(void)

void FUN_1435f3160(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar5 = 0;
  lVar1 = *(longlong *)*param_2;
  lVar3 = lVar5;
  do {
    lVar4 = lVar3 + 1;
    lVar2 = lVar5;
    if (*(char *)(lVar1 + lVar3) != "arrow"[lVar3]) goto LAB_1435f31c0;
    lVar3 = lVar4;
  } while (lVar4 != 6);
  iVar6 = 0;
  goto LAB_1435f3240;
  while (lVar2 = lVar4 + 1, lVar4 + 1 != 7) {
LAB_1435f31c0:
    lVar4 = lVar2;
    lVar3 = lVar5;
    if (*(char *)(lVar1 + lVar4) != "button"[lVar4]) goto LAB_1435f31f0;
  }
  iVar6 = (int)lVar4 + -3;
  goto LAB_1435f3240;
  while (lVar3 = lVar2 + 1, lVar2 + 1 != 5) {
LAB_1435f31f0:
    lVar2 = lVar3;
    lVar3 = lVar5;
    if (*(char *)(lVar1 + lVar2) != (&DAT_145b42040)[lVar2]) goto LAB_1435f3220;
  }
  iVar6 = (int)lVar2 + -3;
  goto LAB_1435f3240;
  while (lVar3 = lVar2 + 1, lVar2 + 1 != 6) {
LAB_1435f3220:
    lVar2 = lVar3;
    bVar7 = *(char *)(lVar1 + lVar2) == (&DAT_145b42048)[lVar2];
    if (!bVar7) goto LAB_1435f3238;
  }
  bVar7 = *(char *)(lVar1 + lVar2) == (&DAT_145b42048)[lVar2];
LAB_1435f3238:
  iVar6 = -1;
  if (bVar7) {
    iVar6 = 2;
  }
LAB_1435f3240:
  if (param_3 < 6) {
    lVar5 = ((ulonglong)param_3 + 0x6d) * 0x50 + param_1[2];
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_3,iVar6);
  *(int *)(lVar5 + 0x40) = iVar6;
  *(int *)(lVar5 + 0x44) = iVar6;
  return;
}



// FUNCTION 1435f32c0 FUN_1435f32c0 body=196 status=ok
// SIG undefined FUN_1435f32c0(void)

void FUN_1435f32c0(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  lVar3 = *param_1;
  if (param_3 == 0) {
    uVar2 = (**(code **)(lVar3 + 0x1e0))();
    pcVar4 = "arrow";
  }
  else {
    if (param_3 == 1) {
      uVar2 = (**(code **)(lVar3 + 0x1e0))();
      uVar5 = 4;
      pcVar4 = "hand";
      goto LAB_1435f3348;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        uVar2 = (**(code **)(lVar3 + 0x1e0))();
        uVar5 = 6;
        pcVar4 = "button";
      }
      else {
        uVar2 = (**(code **)(lVar3 + 0x1e0))();
        uVar5 = 4;
        pcVar4 = "auto";
      }
      goto LAB_1435f3348;
    }
    uVar2 = (**(code **)(lVar3 + 0x1e0))();
    pcVar4 = "ibeam";
  }
  uVar5 = 5;
LAB_1435f3348:
  lVar3 = FUN_143360950(uVar2,pcVar4,uVar5,0);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 1435f3390 FUN_1435f3390 body=179 status=ok
// SIG undefined FUN_1435f3390(void)

void FUN_1435f3390(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  int param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((*(int *)(*param_3 + 0x20) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48),
     puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x40), puVar4 != (undefined8 *)0x0)
     ) {
    *puVar4 = &PTR_FUN_145b0ab20;
    lVar3 = *param_3;
    puVar4[1] = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_145b4c4a0;
    *(bool *)(puVar4 + 3) = param_5 == 2;
    FUN_14360ab50(puVar4 + 4,param_4);
    FUN_1432e77e0(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
  }
  return;
}



// FUNCTION 1435f3450 FUN_1435f3450 body=262 status=ok
// SIG undefined FUN_1435f3450(void)

undefined8 FUN_1435f3450(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != '\0');
  do {
    if (lVar2 == 0) {
      pcVar3 = (char *)0x0;
      if (*param_2 == '.') {
        pcVar3 = param_2;
      }
LAB_1435f3499:
      if (pcVar3 != (char *)0x0) {
        lVar4 = (longlong)((int)pcVar3 - (int)param_2);
        lVar2 = FUN_143360a60(*(undefined8 *)(param_1 + 0x3b8),param_2 + lVar4 + 1);
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
        piVar1 = (int *)(*param_4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_4 = lVar2;
        piVar1 = (int *)(lVar2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar2);
        }
        lVar2 = FUN_143360a90(*(undefined8 *)(param_1 + 0x3b8),param_2,lVar4);
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
        piVar1 = (int *)(*param_3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_3 = lVar2;
        piVar1 = (int *)(lVar2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar2);
        }
        return 1;
      }
      return 0;
    }
    if (param_2[lVar2] == '.') {
      pcVar3 = param_2 + lVar2;
      goto LAB_1435f3499;
    }
    lVar2 = lVar2 + -1;
  } while( true );
}



// FUNCTION 1435f3560 FUN_1435f3560 body=2675 status=ok
// SIG undefined FUN_1435f3560(void)

ulonglong FUN_1435f3560(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong in_RAX;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong *local_res18;
  longlong local_res20;
  uint local_188;
  uint uStack_184;
  int *piStack_180;
  longlong *local_178;
  longlong *plStack_170;
  longlong *local_168;
  longlong *plStack_160;
  int local_158;
  undefined4 uStack_154;
  int *piStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  ulonglong local_128;
  int *piStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  int *piStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  uint local_88 [2];
  undefined8 local_80;
  undefined1 local_68 [48];
  
  if (param_3 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res18 = param_3;
  (**(code **)(*param_1 + 0x20))();
  FUN_1435168c0(param_2);
  local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
  piStack_e0 = (int *)0x0;
  lVar11 = *(longlong *)(param_1[2] + 0x58);
  if (lVar11 == 0) {
LAB_1435f35fa:
    lVar11 = 0;
  }
  else {
    lVar8 = (**(code **)(*(longlong *)(lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4) + 0x28))();
    lVar11 = lVar8 + -0x48;
    if (lVar8 == 0) goto LAB_1435f35fa;
  }
  plVar14 = *(longlong **)(lVar11 + 0x10);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar11 + 8);
  }
  if (((ulonglong)plVar14 & 1) != 0) {
    plVar14 = (longlong *)((longlong)plVar14 + -1);
  }
  local_158 = 0xc;
  piStack_150 = (int *)0x0;
  if (plVar14 != (longlong *)0x0) {
    *(uint *)(plVar14 + 1) = (int)plVar14[1] + 1U & 0x8fffffff;
    *(uint *)(plVar14 + 1) = (int)plVar14[1] + 1U & 0x8fffffff;
  }
  local_148 = plVar14;
  FUN_143603d30(&local_e8);
  local_e8 = CONCAT44(uStack_154,local_158);
  piStack_e0 = piStack_150;
  local_d8 = local_148;
  uStack_d0 = uStack_140;
  if (((((ulonglong)plVar14 & 1) == 0) && (plVar14 != (longlong *)0x0)) &&
     ((*(uint *)(plVar14 + 1) & 0x3fffff) != 0)) {
    *(uint *)(plVar14 + 1) = *(uint *)(plVar14 + 1) - 1;
    FUN_1434ef880(plVar14);
  }
  plVar14 = (longlong *)&DAT_ffffffffffffffff;
  plStack_160 = (longlong *)&DAT_ffffffffffffffff;
  do {
    plStack_160 = (longlong *)((longlong)plStack_160 + 1);
  } while (*(char *)((longlong)param_3 + (longlong)plStack_160) != '\0');
  local_168 = param_3;
  FUN_1435ae830(local_68,param_1[0x11],&local_168);
  local_88[0] = 0;
  local_80 = 0;
  lVar8 = param_1[0x11];
  local_98 = 0;
  uStack_90 = 0;
  lVar1 = *(longlong *)(lVar11 + 0x28);
  cVar4 = Scaleform::GFx::AS3::Multiname::IsAnyType(local_68);
  if (cVar4 == '\0') {
    lVar8 = *(longlong *)(lVar1 + 0x28);
    if (((lVar8 == 0) ||
        (puVar12 = (undefined8 *)FUN_1435be300(lVar8,local_68), puVar12 == (undefined8 *)0x0)) &&
       (puVar12 = (undefined8 *)FUN_143610150(lVar1 + 0x30,local_68), puVar12 == (undefined8 *)0x0))
    {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar12;
    }
  }
  else {
    uVar9 = *(undefined8 *)(lVar8 + 0x200);
  }
  uVar15 = 0;
  FUN_1435b21f0(&local_98,param_1[0x11],param_1[0x11] + 0xe8,local_68,uVar9);
  if ((((local_88[0] & 0x1f) == 0) || (local_98 == 1)) ||
     ((((byte)local_98 >> 1 & 1) != 0 && ((local_98 & 0xfffffffffffffffd) == 0)))) {
    cVar4 = (char)*param_3;
    bVar3 = true;
    if (cVar4 == '_') {
      iVar6 = strncmp((char *)((longlong)param_3 + 1),"root",4);
      if (iVar6 == 0) {
        uVar15 = 5;
      }
      else {
        iVar6 = strncmp((char *)((longlong)param_3 + 1),"level0",6);
        if (iVar6 == 0) {
          uVar15 = 7;
        }
      }
    }
    else if (cVar4 == 'r') {
      iVar6 = strncmp((char *)((longlong)param_3 + 1),"oot",3);
      uVar15 = 0;
      if (iVar6 == 0) {
        uVar15 = 4;
      }
    }
    else if ((cVar4 == 's') &&
            (iVar6 = strncmp((char *)((longlong)param_3 + 1),"tage",4), iVar6 == 0)) {
      bVar3 = false;
      uVar15 = 5;
    }
    plVar18 = (longlong *)0x0;
    if (*(char *)(uVar15 + (longlong)param_3) == '\0') {
LAB_1435f3a32:
      param_3 = (longlong *)(uVar15 + (longlong)param_3);
      if (bVar3) {
        local_res20 = FUN_143360950(param_1[0x77],"root1",5);
        *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
        lVar11 = FUN_1433d5ce0(*(longlong *)(lVar11 + 0x18) + 0xd8,&local_res20,1);
        piVar2 = (int *)(local_res20 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
        if ((lVar11 == 0) || ((*(ushort *)(lVar11 + 0x6a) >> 9 & 1) == 0)) {
LAB_1435f3fcc:
          uVar15 = 0;
          goto LAB_1435f3e8e;
        }
        lVar11 = FUN_143516900(lVar11);
        plVar16 = *(longlong **)(lVar11 + 0x10);
        if (plVar16 == (longlong *)0x0) {
          plVar16 = *(longlong **)(lVar11 + 8);
        }
        if (((ulonglong)plVar16 & 1) != 0) {
          plVar16 = (longlong *)((longlong)plVar16 + -1);
        }
        local_158 = 0xc;
        piStack_150 = (int *)0x0;
        if (plVar16 != (longlong *)0x0) {
          *(uint *)(plVar16 + 1) = (int)plVar16[1] + 1U & 0x8fffffff;
          *(uint *)(plVar16 + 1) = (int)plVar16[1] + 1U & 0x8fffffff;
        }
        local_148 = plVar16;
        FUN_143603d30(&local_e8);
        local_e8 = CONCAT44(uStack_154,local_158);
        piStack_e0 = piStack_150;
        local_d8 = local_148;
        uStack_d0 = uStack_140;
        if (((((ulonglong)plVar16 & 1) == 0) && (plVar16 != (longlong *)0x0)) &&
           ((*(uint *)(plVar16 + 1) & 0x3fffff) != 0)) {
          *(uint *)(plVar16 + 1) = *(uint *)(plVar16 + 1) - 1;
          FUN_1434ef880(plVar16);
        }
      }
    }
    else if (*(char *)(uVar15 + (longlong)param_3) == '.') {
      uVar15 = (ulonglong)((int)uVar15 + 1);
      goto LAB_1435f3a32;
    }
    local_100 = plVar18;
    if (param_3 != (longlong *)0x0) {
      do {
        plVar14 = (longlong *)((longlong)plVar14 + 1);
        local_100 = plVar14;
      } while (*(char *)((longlong)param_3 + (longlong)plVar14) != '\0');
    }
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    local_108 = param_3;
    while (local_100 != (longlong *)0x0) {
      puVar12 = (undefined8 *)FUN_1432c6320(&local_108,&local_188,0x2e);
      local_f8 = *puVar12;
      plStack_f0 = (longlong *)puVar12[1];
      plVar14 = plStack_f0;
      if (local_100 < plStack_f0) {
        plVar14 = local_100;
      }
      local_108 = (longlong *)((longlong)local_108 + (longlong)plVar14);
      local_100 = (longlong *)((longlong)local_100 - (longlong)plVar14);
      if ((char)*local_108 == '.') {
        local_108 = (longlong *)((longlong)local_108 + (ulonglong)(local_100 != (longlong *)0x0));
        local_100 = (longlong *)((longlong)local_100 - (ulonglong)(local_100 != (longlong *)0x0));
      }
      local_168 = (longlong *)FUN_143360a90(param_1[0x77],local_f8);
      local_158 = 10;
      piStack_150 = (int *)0x0;
      *(int *)(local_168 + 3) = (int)local_168[3] + 1;
      *(int *)(local_168 + 3) = (int)local_168[3] + 1;
      local_c0 = *(longlong *)(param_1[0x11] + 0x1d8);
      local_c8[0] = 0;
      if (local_c0 != 0) {
        *(uint *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1U & 0x8fffffff;
      }
      local_b8 = CONCAT44(uStack_154,10);
      uStack_b0 = 0;
      uStack_a0 = uStack_140;
      local_148 = local_168;
      local_a8 = local_168;
      FUN_14360dee0(&local_b8);
      FUN_1435aef90(local_c8,0);
      FUN_1435920c0(&local_158);
      plVar14 = local_d8;
      local_128 = local_128 & 0xffffffff00000000;
      piStack_120 = (int *)0x0;
      if (local_d8 == (longlong *)0x0) {
        FUN_1435168c0(param_2);
        goto LAB_1435f3f95;
      }
      pcVar10 = (char *)(**(code **)(*local_d8 + 0x28))(local_d8,&local_res20,local_c8,&local_128);
      if (((*pcVar10 == '\0') && (lVar11 = plVar14[5], *(int *)(lVar11 + 0x90) - 0x1fU < 5)) &&
         ((~(*(byte *)(lVar11 + 0x88) >> 5) & 1) != 0)) {
        plVar14 = (longlong *)plVar14[0x11];
        plVar16 = plVar18;
        if ((*(ushort *)((longlong)plVar14 + 0x6a) >> 9 & 1) != 0) {
          plVar16 = plVar14;
        }
        if (plVar16 == (longlong *)0x0) {
LAB_1435f3cf6:
          plVar14 = plVar18;
        }
        else {
          lVar11 = (**(code **)(*(longlong *)
                                 ((longlong)plVar16 +
                                 (ulonglong)*(byte *)((longlong)plVar16 + 0x6d) * 4) + 0x28))
                             ((char *)((longlong)plVar16 +
                                      (ulonglong)*(byte *)((longlong)plVar16 + 0x6d) * 4));
          plVar14 = (longlong *)(lVar11 + -0x48);
          if (lVar11 == 0) goto LAB_1435f3cf6;
        }
        lVar11 = FUN_1433d5ce0(plVar14[3] + 0xd8,&local_168,1);
        plVar14 = plVar18;
        if (lVar11 == 0) {
LAB_1435f3d7c:
          if (plVar14 != (longlong *)0x0) {
            local_158 = 0xc;
            piStack_150 = (int *)0x0;
            *(uint *)(plVar14 + 1) = (int)plVar14[1] + 1U & 0x8fffffff;
            local_148 = plVar14;
            FUN_14360dee0(&local_158);
            FUN_143603d30(&local_128);
            local_128 = CONCAT44(uStack_154,local_158);
            piStack_120 = piStack_150;
            local_118 = local_148;
            uStack_110 = uStack_140;
            FUN_1434e64f0(&local_158);
            goto LAB_1435f3dd6;
          }
        }
        else {
          lVar8 = lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4;
          (**(code **)(*(longlong *)(lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4) + 0x70))
                    (lVar8,1);
          plVar14 = *(longlong **)(lVar8 + 0x10);
          if (plVar14 == (longlong *)0x0) {
            plVar14 = *(longlong **)(lVar8 + 8);
          }
          if (((ulonglong)plVar14 & 1) != 0) {
            plVar14 = (longlong *)((longlong)plVar14 + -1);
          }
          if (plVar14 != (longlong *)0x0) {
            uVar5 = (int)plVar14[1] + 1;
            uVar7 = uVar5 & 0x8fffffff;
            *(uint *)(plVar14 + 1) = uVar7;
            if (plVar14 != (longlong *)0x0) {
              if ((((ulonglong)plVar14 & 1) == 0) && ((uVar5 & 0x3fffff) != 0)) {
                *(uint *)(plVar14 + 1) = uVar7 - 1;
                FUN_1434ef880(plVar14);
              }
              goto LAB_1435f3d7c;
            }
          }
        }
LAB_1435f3f95:
        if (*(char *)(param_1[0x11] + 0xb8) != '\0') {
          FUN_1435cc020();
        }
        FUN_1434e64f0(&local_128);
        FUN_1434e6250(local_c8);
        plVar14 = local_168 + 3;
        *(int *)plVar14 = (int)*plVar14 + -1;
        if ((int)*plVar14 == 0) {
          FUN_14335f920();
        }
        goto LAB_1435f3fcc;
      }
LAB_1435f3dd6:
      FUN_14360dee0(&local_128);
      FUN_143603d30(&local_e8);
      local_e8 = local_128;
      piStack_e0 = piStack_120;
      local_d8 = local_118;
      uStack_d0 = uStack_110;
      if ((local_100 != (longlong *)0x0) && (((byte)local_128 & 0x1f) != 0xc)) {
        lVar11 = FUN_1435160d0(param_1);
        if (lVar11 != 0) {
          FUN_1432c5960(&local_158,DAT_146b62f28);
          piStack_180 = &local_158;
          local_188 = 1;
          FUN_143603d90(&local_188,
                        "Token \'{0}\' in path \'{1}\' was not resolved to a valid Object! This may be caused by a property that is not of Object type, or by using reserved words/properties for MovieClip names in the display tree."
                        ,&local_f8,&local_res18);
          puVar17 = &DAT_145af3922;
          if ((undefined1 *)CONCAT44(uStack_154,local_158) != (undefined1 *)0x0) {
            puVar17 = (undefined1 *)CONCAT44(uStack_154,local_158);
          }
          FUN_1432bbf90(lVar11,&DAT_145afa01c,puVar17);
          Scaleform::StringBuffer::~StringBuffer(&local_158);
        }
        FUN_1434f0650(&local_e8);
        FUN_1434e64f0(&local_128);
        FUN_1434e6250(local_c8);
        plVar14 = local_168 + 3;
        *(int *)plVar14 = (int)*plVar14 + -1;
        if ((int)*plVar14 == 0) {
          FUN_14335f920();
        }
        break;
      }
      if (9 < ((byte)local_128 & 0x1f)) {
        if (((uint)local_128 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_128);
        }
        else {
          *piStack_120 = *piStack_120 + -1;
          if (*piStack_120 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_128 = local_128 & 0xfffffffffffffde0;
          piStack_120 = (int *)0x0;
          local_118 = (longlong *)0x0;
          uStack_110 = 0;
        }
      }
      FUN_1434e6250(local_c8);
      plVar14 = local_168 + 3;
      *(int *)plVar14 = (int)*plVar14 + -1;
      if ((int)*plVar14 == 0) {
        FUN_14335f920();
      }
    }
    FUN_143590140(param_2,&local_e8);
    uVar15 = 1;
    goto LAB_1435f3e8e;
  }
  local_188 = 0;
  piStack_180 = (int *)0x0;
  uVar5 = (uint)local_98 & 3;
  if ((local_98 & 3) == 0) {
    pcVar10 = (char *)FUN_1435ac440(local_98,&local_res18,param_1[0x11],&local_188,local_88,0,0);
    if (*pcVar10 != '\0') goto LAB_1435f388a;
    uVar15 = 0;
  }
  else {
    if (uVar5 == 1) {
      puVar13 = (uint *)(local_98 & 0xfffffffffffffffe);
      if (puVar13 != &local_188) {
        local_188 = *puVar13;
        uStack_184 = puVar13[1];
        piStack_180 = *(int **)(puVar13 + 2);
        local_178 = *(longlong **)(puVar13 + 4);
        plStack_170 = *(longlong **)(puVar13 + 6);
        uVar5 = local_188 & 0x1f;
        if (9 < uVar5) {
          if ((local_188 >> 9 & 1) == 0) {
            if (uVar5 == 10) {
              *(int *)(local_178 + 3) = (int)local_178[3] + 1;
            }
            else if ((10 < uVar5) &&
                    (((plVar14 = local_178, uVar5 < 0xd || (plVar14 = plStack_170, uVar5 < 0xf)) &&
                     (plVar14 != (longlong *)0x0)))) {
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              *(uint *)(plVar14 + 1) = *(uint *)(plVar14 + 1) & 0x8fffffff;
            }
          }
          else {
            *piStack_180 = *piStack_180 + 1;
          }
        }
      }
    }
    else if (uVar5 == 2) {
      local_178 = (longlong *)(local_98 & 0xfffffffffffffffd);
      if (local_178 != (longlong *)0x0) {
        *(uint *)(local_178 + 1) = (int)local_178[1] + 1U & 0x8fffffff;
      }
      local_188 = 0xc;
      plStack_170 = plStack_160;
      local_168 = local_178;
    }
LAB_1435f388a:
    uVar15 = 1;
    plVar14 = *(longlong **)(param_2 + 4);
    plVar18 = *(longlong **)(param_2 + 6);
    piVar2 = *(int **)(param_2 + 2);
    uVar5 = *param_2;
    *(longlong **)(param_2 + 4) = local_178;
    *(longlong **)(param_2 + 6) = plStack_170;
    *param_2 = local_188;
    *(int **)(param_2 + 2) = piStack_180;
    local_188 = uVar5;
    piStack_180 = piVar2;
    local_178 = plVar14;
    plStack_170 = plVar18;
  }
  uVar5 = local_188 & 0x1f;
  if (9 < uVar5) {
    if ((local_188 >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        plVar14 = local_178 + 3;
        *(int *)plVar14 = (int)*plVar14 + -1;
        if ((int)*plVar14 == 0) {
          FUN_14335f920();
        }
      }
      else {
        plVar14 = local_178;
        if (((((uVar5 == 0xb) || (uVar5 == 0xc)) || (plVar14 = plStack_170, uVar5 - 0xd < 2)) &&
            ((((ulonglong)plVar14 & 1) == 0 && (plVar14 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar14 + 1) & 0x3fffff) != 0)) {
          *(uint *)(plVar14 + 1) = *(uint *)(plVar14 + 1) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *piStack_180 = *piStack_180 + -1;
      if (*piStack_180 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piStack_180);
      }
    }
  }
LAB_1435f3e8e:
  FUN_14360bce0(&local_98);
  FUN_1434e6250(local_68);
  FUN_1434e64f0(&local_e8);
  return uVar15;
}



// FUNCTION 1435f3fe0 FUN_1435f3fe0 body=2550 status=ok
// SIG undefined FUN_1435f3fe0(void)

/* WARNING: Removing unreachable block (ram,0x0001435f4365) */
/* WARNING: Removing unreachable block (ram,0x0001435f436f) */
/* WARNING: Removing unreachable block (ram,0x0001435f4376) */
/* WARNING: Removing unreachable block (ram,0x0001435f437f) */
/* WARNING: Removing unreachable block (ram,0x0001435f4385) */
/* WARNING: Removing unreachable block (ram,0x0001435f438e) */
/* WARNING: Removing unreachable block (ram,0x0001435f4397) */
/* WARNING: Removing unreachable block (ram,0x0001435f44fc) */
/* WARNING: Removing unreachable block (ram,0x0001435f4505) */
/* WARNING: Removing unreachable block (ram,0x0001435f41d5) */
/* WARNING: Removing unreachable block (ram,0x0001435f41ea) */
/* WARNING: Removing unreachable block (ram,0x0001435f4222) */
/* WARNING: Removing unreachable block (ram,0x0001435f41ef) */
/* WARNING: Removing unreachable block (ram,0x0001435f41f1) */
/* WARNING: Removing unreachable block (ram,0x0001435f421b) */
/* WARNING: Removing unreachable block (ram,0x0001435f41f6) */
/* WARNING: Removing unreachable block (ram,0x0001435f41fb) */
/* WARNING: Removing unreachable block (ram,0x0001435f41df) */
/* WARNING: Removing unreachable block (ram,0x0001435f450e) */
/* WARNING: Removing unreachable block (ram,0x0001435f463f) */
/* WARNING: Removing unreachable block (ram,0x0001435f4654) */
/* WARNING: Removing unreachable block (ram,0x0001435f4659) */
/* WARNING: Removing unreachable block (ram,0x0001435f465f) */
/* WARNING: Removing unreachable block (ram,0x0001435f4676) */
/* WARNING: Removing unreachable block (ram,0x0001435f4664) */
/* WARNING: Removing unreachable block (ram,0x0001435f466d) */
/* WARNING: Removing unreachable block (ram,0x0001435f4200) */
/* WARNING: Removing unreachable block (ram,0x0001435f4205) */
/* WARNING: Removing unreachable block (ram,0x0001435f467f) */
/* WARNING: Removing unreachable block (ram,0x0001435f4649) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435f3fe0(longlong param_1,longlong *param_2,undefined8 param_3,byte *param_4,uint *param_5
                  )

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  char *pcVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  ulonglong uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  RefCountImpl *local_res10;
  undefined8 local_res18;
  byte *local_res20;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0 [2];
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  
  local_res18 = param_3;
  local_res20 = param_4;
  plVar9 = (longlong *)
           Scaleform::GFx::StateBag::GetLogState(*(longlong *)(param_1 + 0x10) + 0x10,&local_res10);
  lVar3 = *plVar9;
  if (local_res10 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res10);
  }
  FUN_143613a60(param_2,param_2,0);
  if (local_res20 != (byte *)0x0) {
    bVar8 = *local_res20;
    piVar20 = (int *)0x0;
    uVar21 = 0;
    local_b0[0] = 0;
    local_a8 = (int *)0x0;
    if (bVar8 != 0) {
      uVar19 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0);
      pbVar18 = local_res20;
      pbVar24 = local_res20;
      uVar5 = uStack_98;
      uVar6 = uStack_a0;
      do {
        pbVar23 = pbVar24 + 1;
        if (bVar8 == 0x25) {
          bVar8 = *pbVar23;
          pbVar23 = pbVar24 + 2;
          if (bVar8 == 100) {
            uVar11 = *param_5;
            param_5 = param_5 + 2;
            uVar10 = uVar21 & 0x1f;
            if (9 < uVar10) {
              if ((uVar21 >> 9 & 1) == 0) {
                if (uVar10 == 10) {
                  piVar1 = (int *)(uVar19 + 0x18);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_14335f920(uVar19);
                  }
                }
                else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
                  if (((uStack_a0 & 1) == 0) &&
                     ((uVar19 != 0 && ((*(uint *)(uVar19 + 8) & 0x3fffff) != 0)))) {
                    *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) - 1;
                    FUN_1434ef880(uVar19);
                  }
                }
                else if ((((uVar10 - 0xd < 2) && ((uStack_98 & 1) == 0)) && (uStack_98 != 0)) &&
                        ((*(uint *)(uStack_98 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uStack_98 + 8) = *(uint *)(uStack_98 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *piVar20 = *piVar20 + -1;
                if (*piVar20 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar20);
                }
                piVar20 = (int *)0x0;
                local_a8 = (int *)0x0;
                uVar21 = uVar21 & 0xfffffde0;
              }
            }
            uVar22 = uVar21 & 0xffffffe2 | 2;
            uStack_a0._4_4_ = uStack_dc;
            uStack_98._0_4_ = uStack_d8;
            uStack_98._4_4_ = uStack_d4;
            local_b0[0] = uVar22;
            uStack_a0._0_4_ = uVar11;
            FUN_143613a60(param_2,param_2);
            puVar15 = (uint *)(*param_2 + -0x20 + param_2[1] * 0x20);
            uVar10 = uStack_dc;
            uVar19 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0);
            uVar7 = CONCAT44(uStack_98._4_4_,(uint)uStack_98);
            uVar5 = CONCAT44(uStack_d4,uStack_d8);
            if (puVar15 != (uint *)0x0) {
              *puVar15 = uVar22;
              *(int **)(puVar15 + 2) = piVar20;
              puVar15[4] = uVar11;
              puVar15[5] = uStack_dc;
              puVar15[6] = uStack_d8;
              puVar15[7] = uStack_d4;
            }
          }
          else {
            if (bVar8 == 0x75) {
              uVar11 = uVar21 & 0x1f;
              if (9 < uVar11) {
                if ((uVar21 >> 9 & 1) == 0) {
                  if (uVar11 == 10) {
                    piVar1 = (int *)(uVar19 + 0x18);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_14335f920(uVar19);
                    }
                  }
                  else if ((uVar11 == 0xb) || (uVar11 == 0xc)) {
                    if ((uStack_a0 & 1) == 0) {
                      if ((uVar19 != 0) && ((*(uint *)(uVar19 + 8) & 0x3fffff) != 0)) {
                        *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) - 1;
                        FUN_1434ef880(uVar19);
                      }
                    }
                    else {
                      uVar19 = uVar19 - 1;
                      uStack_a0 = uVar19;
                      uVar5 = uStack_98;
                      uVar6 = uVar19;
                    }
                  }
                  else if (uVar11 - 0xd < 2) {
                    if ((uStack_98 & 1) == 0) {
                      if ((uStack_98 != 0) && ((*(uint *)(uStack_98 + 8) & 0x3fffff) != 0)) {
                        *(uint *)(uStack_98 + 8) = *(uint *)(uStack_98 + 8) - 1;
                        FUN_1434ef880();
                      }
                    }
                    else {
                      uStack_98 = uStack_98 - 1;
                      uVar5 = uStack_98;
                      uVar6 = uStack_a0;
                    }
                  }
                }
                else {
                  *piVar20 = *piVar20 + -1;
                  if (*piVar20 == 0) {
                    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar20);
                  }
                  uStack_98 = 0;
                  local_a8 = (int *)0x0;
                  uVar19 = 0;
                  uVar21 = uVar21 & 0xfffffde0;
                  piVar20 = (int *)0x0;
                  uStack_a0 = 0;
                  uVar5 = 0;
                  uVar6 = 0;
                }
              }
              uVar21 = uVar21 & 0xffffffe0;
              local_b0[0] = uVar21;
              FUN_143613a60(param_2,param_2);
              puVar15 = (uint *)(*param_2 + -0x20 + param_2[1] * 0x20);
              pbVar18 = local_res20;
              if (puVar15 != (uint *)0x0) {
                *puVar15 = uVar21;
                *(int **)(puVar15 + 2) = piVar20;
                *(ulonglong *)(puVar15 + 4) = uVar6;
                *(ulonglong *)(puVar15 + 6) = uVar5;
              }
              goto LAB_1435f4927;
            }
            if (bVar8 == 0x6e) {
              uVar11 = uVar21 & 0x1f;
              if (9 < uVar11) {
                if ((uVar21 >> 9 & 1) == 0) {
                  if (uVar11 == 10) {
                    piVar1 = (int *)(uVar19 + 0x18);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_14335f920(uVar19);
                    }
                  }
                  else if ((uVar11 == 0xb) || (uVar11 == 0xc)) {
                    if (((uStack_a0 & 1) == 0) &&
                       ((uVar19 != 0 && ((*(uint *)(uVar19 + 8) & 0x3fffff) != 0)))) {
                      *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) - 1;
                      FUN_1434ef880(uVar19);
                    }
                  }
                  else if ((((uVar11 - 0xd < 2) && ((uStack_98 & 1) == 0)) && (uStack_98 != 0)) &&
                          ((*(uint *)(uStack_98 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(uStack_98 + 8) = *(uint *)(uStack_98 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  *piVar20 = *piVar20 + -1;
                  if (*piVar20 == 0) {
                    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar20);
                  }
                  piVar20 = (int *)0x0;
                  local_a8 = (int *)0x0;
                  uVar21 = uVar21 & 0xfffffde0;
                }
              }
              uVar22 = uVar21 & 0xffffffec | 0xc;
              uVar11 = 0;
              uVar10 = 0;
              uStack_a0._0_4_ = 0;
              uStack_a0._4_4_ = 0;
              uStack_98._0_4_ = uStack_b8;
              uStack_98._4_4_ = uStack_b4;
              local_b0[0] = uVar22;
              FUN_143613a60(param_2,param_2);
              puVar15 = (uint *)(*param_2 + -0x20 + param_2[1] * 0x20);
              uVar19 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0);
              uVar7 = CONCAT44(uStack_98._4_4_,(uint)uStack_98);
              uVar5 = CONCAT44(uStack_b4,uStack_b8);
              if (puVar15 != (uint *)0x0) {
                *puVar15 = uVar22;
                *(int **)(puVar15 + 2) = piVar20;
                puVar15[4] = 0;
                puVar15[5] = 0;
                puVar15[6] = uStack_b8;
                puVar15[7] = uStack_b4;
                uVar5 = CONCAT44(uStack_b4,uStack_b8);
                if ((uVar21 & 0x200) != 0) {
                  *piVar20 = *piVar20 + 1;
                  pbVar18 = local_res20;
                  uVar19 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0);
                  uVar21 = uVar22;
                  uVar5 = CONCAT44(uStack_b4,uStack_b8);
                  uVar6 = 0;
                  goto LAB_1435f4927;
                }
              }
            }
            else if (bVar8 == 0x62) {
              uVar11 = *param_5;
              param_5 = param_5 + 2;
              uVar10 = uVar21 & 0x1f;
              if (9 < uVar10) {
                if ((uVar21 >> 9 & 1) == 0) {
                  if (uVar10 == 10) {
                    piVar1 = (int *)(uVar19 + 0x18);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_14335f920(uVar19);
                    }
                  }
                  else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
                    if (((uStack_a0 & 1) == 0) &&
                       ((uVar19 != 0 && ((*(uint *)(uVar19 + 8) & 0x3fffff) != 0)))) {
                      *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) - 1;
                      FUN_1434ef880(uVar19);
                    }
                  }
                  else if ((((uVar10 - 0xd < 2) && ((uStack_98 & 1) == 0)) && (uStack_98 != 0)) &&
                          ((*(uint *)(uStack_98 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(uStack_98 + 8) = *(uint *)(uStack_98 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  *piVar20 = *piVar20 + -1;
                  if (*piVar20 == 0) {
                    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar20);
                  }
                  piVar20 = (int *)0x0;
                  local_a8 = (int *)0x0;
                  uVar21 = uVar21 & 0xfffffde0;
                }
              }
              uVar22 = uVar21 & 0xffffffe1 | 1;
              local_d0 = CONCAT31(local_d0._1_3_,uVar11 != 0);
              uStack_a0._0_4_ = local_d0;
              uStack_a0._4_4_ = uStack_cc;
              uStack_98._0_4_ = uStack_c8;
              uStack_98._4_4_ = uStack_c4;
              local_b0[0] = uVar22;
              FUN_143613a60(param_2,param_2);
              puVar15 = (uint *)(*param_2 + -0x20 + param_2[1] * 0x20);
              uVar11 = local_d0;
              uVar10 = uStack_cc;
              uVar19 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0);
              uVar7 = CONCAT44(uStack_98._4_4_,(uint)uStack_98);
              uVar5 = CONCAT44(uStack_c4,uStack_c8);
              if (puVar15 != (uint *)0x0) {
                *puVar15 = uVar22;
                *(int **)(puVar15 + 2) = piVar20;
                puVar15[4] = local_d0;
                puVar15[5] = uStack_cc;
                puVar15[6] = uStack_c8;
                puVar15[7] = uStack_c4;
                uVar5 = CONCAT44(uStack_c4,uStack_c8);
              }
            }
            else {
              if (bVar8 != 0x66) {
                if (bVar8 != 0x68) {
                  if (bVar8 == 0x73) {
                    lVar13 = FUN_143360a60(*(undefined8 *)(param_1 + 0x3b8),*(undefined8 *)param_5);
                    local_90[0] = 10;
                    local_88 = 0;
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 2;
                    local_80 = lVar13;
                    FUN_143613a60(param_2,param_2);
                    puVar17 = (undefined4 *)(*param_2 + -0x20 + param_2[1] * 0x20);
                    if (puVar17 != (undefined4 *)0x0) {
                      *puVar17 = 10;
                      *(undefined8 *)(puVar17 + 2) = 0;
                      *(longlong *)(puVar17 + 4) = local_80;
                      *(undefined8 *)(puVar17 + 6) = uStack_78;
                      *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1;
                    }
LAB_1435f4830:
                    param_5 = param_5 + 2;
                    FUN_1434e64f0(local_90);
                    piVar1 = (int *)(lVar13 + 0x18);
                    *piVar1 = *piVar1 + -1;
                    pbVar18 = local_res20;
                    if (*piVar1 == 0) {
                      FUN_14335f920(lVar13);
                      pbVar18 = local_res20;
                    }
                  }
                  else if (bVar8 == 0x6c) {
                    bVar8 = *pbVar23;
                    pbVar23 = pbVar24 + 3;
                    if (bVar8 == 0x73) {
                      lVar13 = FUN_143360fd0(*(undefined8 *)(param_1 + 0x3b8),*(undefined8 *)param_5
                                             ,0xffffffffffffffff);
                      local_90[0] = 10;
                      local_88 = 0;
                      *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 2;
                      local_80 = lVar13;
                      FUN_143613a60(param_2,param_2);
                      lVar14 = param_2[1] * 0x20 + -0x20 + *param_2;
                      if (lVar14 != 0) {
                        FUN_14360ab50(lVar14,local_90);
                      }
                      goto LAB_1435f4830;
                    }
                    if (lVar3 != 0) {
                      pcVar16 = "ParseArguments(\'%s\',\'%s\') - invalid format \'%%l%c\'";
                      goto LAB_1435f4905;
                    }
                  }
                  else if (lVar3 != 0) {
                    pcVar16 = "ParseArguments(\'%s\',\'%s\') - invalid format \'%%%c\'";
LAB_1435f4905:
                    FUN_1432f1560(lVar3 + 0x18,pcVar16,local_res18,pbVar18,(int)(char)bVar8);
                    pbVar18 = local_res20;
                  }
                  goto LAB_1435f4927;
                }
                bVar8 = *pbVar23;
                pbVar23 = pbVar24 + 3;
                if (bVar8 != 0x66) {
                  if (lVar3 != 0) {
                    pcVar16 = "ParseArguments(\'%s\',\'%s\') - invalid format \'%%h%c\'";
                    goto LAB_1435f4905;
                  }
                  goto LAB_1435f4927;
                }
              }
              uVar2 = *(undefined8 *)param_5;
              param_5 = param_5 + 2;
              FUN_1434f06a0(local_b0,uVar2);
              FUN_143613a60(param_2,param_2);
              auVar4._8_4_ = (uint)uStack_98;
              auVar4._0_8_ = uStack_a0;
              auVar4._12_4_ = uStack_98._4_4_;
              puVar15 = (uint *)(*param_2 + -0x20 + param_2[1] * 0x20);
              piVar20 = local_a8;
              uVar11 = (uint)uStack_a0;
              uVar10 = uStack_a0._4_4_;
              uVar22 = local_b0[0];
              uVar19 = uStack_a0;
              uVar7 = uStack_98;
              uVar5 = uStack_98;
              if (puVar15 != (uint *)0x0) {
                *puVar15 = local_b0[0];
                uVar12 = local_b0[0] & 0x1f;
                *(int **)(puVar15 + 2) = local_a8;
                *(undefined1 (*) [16])(puVar15 + 4) = auVar4;
                if (9 < uVar12) {
                  pbVar18 = local_res20;
                  uVar21 = local_b0[0];
                  uVar6 = uStack_a0;
                  if ((local_b0[0] >> 9 & 1) == 0) {
                    if (uVar12 == 10) {
                      *(int *)(uStack_a0 + 0x18) = *(int *)(uStack_a0 + 0x18) + 1;
                    }
                    else {
                      if (uVar12 < 0xb) goto LAB_1435f41e1;
                      if (uVar12 < 0xd) {
                        if (uStack_a0 != 0) {
                          *(uint *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1U & 0x8fffffff;
                        }
                      }
                      else {
                        if (0xe < uVar12) goto LAB_1435f41e1;
                        lVar13 = auVar4._8_8_;
                        if (lVar13 != 0) {
                          *(uint *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1U & 0x8fffffff;
                        }
                      }
                    }
                  }
                  else {
                    *local_a8 = *local_a8 + 1;
                  }
                  goto LAB_1435f4927;
                }
              }
            }
          }
LAB_1435f41e1:
          uStack_98 = uVar7;
          uStack_a0 = uVar19;
          pbVar18 = local_res20;
          uVar19 = uStack_a0;
          uVar21 = uVar22;
          uVar6 = CONCAT44(uVar10,uVar11);
        }
        else if (lVar3 != 0) {
          pcVar16 = "ParseArguments(\'%s\',\'%s\') - invalid char \'%c\'";
          goto LAB_1435f4905;
        }
LAB_1435f4927:
        bVar8 = *pbVar23;
        pbVar24 = pbVar23;
        while (((bVar8 != 0 && (bVar8 < 0x2d)) &&
               ((0x100100000200U >> ((longlong)(char)bVar8 & 0x3fU) & 1) != 0))) {
          bVar8 = pbVar24[1];
          pbVar24 = pbVar24 + 1;
        }
        bVar8 = *pbVar24;
      } while (bVar8 != 0);
    }
    if (9 < ((byte)uVar21 & 0x1f)) {
      if ((uVar21 >> 9 & 1) == 0) {
        FUN_1435920c0(local_b0);
      }
      else {
        *piVar20 = *piVar20 + -1;
        if (*piVar20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar20);
        }
      }
    }
  }
  return;
}



// FUNCTION 1435f49e0 FUN_1435f49e0 body=31 status=ok
// SIG undefined FUN_1435f49e0(void)

void FUN_1435f49e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1436043a0(param_1 + 0x8d0,local_res10);
  return;
}



// FUNCTION 1435f4a10 FUN_1435f4a10 body=260 status=ok
// SIG undefined FUN_1435f4a10(void)

ulonglong FUN_1435f4a10(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong local_res10 [3];
  
  lVar1 = *(longlong *)(param_2 + 0xa0);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x98) == 0)) {
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = param_3 + (ulonglong)*(byte *)(param_3 + 0x6d) * 4;
    }
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (lVar2 != 0) {
      if (*(longlong *)(param_3 + 0x28) != 0) {
        FUN_1435be210(*(longlong *)(param_3 + 0x28),local_res10,lVar2);
        if ((lVar1 != 0) && (puVar4 = (ulonglong *)(lVar1 + 0x98), local_res10 != puVar4)) {
          if (local_res10[0] != 0) {
            *(uint *)(local_res10[0] + 8) = *(int *)(local_res10[0] + 8) + 1U & 0x8fffffff;
          }
          uVar3 = *puVar4;
          if (uVar3 != 0) {
            if ((uVar3 & 1) == 0) {
              if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *puVar4 = uVar3 - 1;
            }
          }
          *puVar4 = local_res10[0];
        }
        if (((local_res10[0] != 0) && ((local_res10[0] & 1) == 0)) &&
           ((*(uint *)(local_res10[0] + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_res10[0] + 8) = *(uint *)(local_res10[0] + 8) - 1;
          FUN_1434ef880(local_res10[0]);
        }
        return local_res10[0];
      }
      return *(ulonglong *)(lVar2 + 0x1c8);
    }
  }
  return *(ulonglong *)(lVar1 + 0x98);
}



// FUNCTION 1435f4b70 FUN_1435f4b70 body=78 status=ok
// SIG undefined FUN_1435f4b70(void)

void FUN_1435f4b70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1435f4dc0();
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_14360bb50(puVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar2);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 1435f4bd0 FUN_1435f4bd0 body=140 status=ok
// SIG undefined FUN_1435f4bd0(void)

undefined8 * FUN_1435f4bd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = *puVar1;
    *puVar1 = 0;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
    return puVar1;
  }
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x50))
                     (*(longlong **)(param_1 + 0xc0),0x68);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0xff00;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    puVar1[0xc] = 0;
    *puVar1 = 0;
    FUN_14360ebd0(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435f4c70 FUN_1435f4c70 body=101 status=ok
// SIG undefined FUN_1435f4c70(void)

longlong * FUN_1435f4c70(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  plVar2 = (longlong *)FUN_1435f4bd0();
  plVar1 = *(longlong **)(param_1 + 8 + lVar3 * 0x18);
  if (plVar1 == (longlong *)0x0) {
    *plVar2 = *(longlong *)(param_1 + lVar3 * 0x18);
    *(longlong **)(param_1 + lVar3 * 0x18) = plVar2;
  }
  else {
    *plVar2 = *plVar1;
    **(undefined8 **)(param_1 + 8 + lVar3 * 0x18) = plVar2;
  }
  *(longlong **)(param_1 + 8 + lVar3 * 0x18) = plVar2;
  if (*plVar2 == 0) {
    *(longlong **)(param_1 + 0x10 + lVar3 * 0x18) = plVar2;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return plVar2;
}



// FUNCTION 1435f4ce0 FUN_1435f4ce0 body=77 status=ok
// SIG undefined FUN_1435f4ce0(void)

void FUN_1435f4ce0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  plVar1 = (longlong *)FUN_1435f4bd0();
  *plVar1 = *(longlong *)(param_1 + lVar2 * 0x18);
  *(longlong **)(param_1 + lVar2 * 0x18) = plVar1;
  if (*(longlong *)(param_1 + 8 + lVar2 * 0x18) == 0) {
    *(longlong **)(param_1 + 8 + lVar2 * 0x18) = plVar1;
  }
  if (*plVar1 == 0) {
    *(longlong **)(param_1 + 0x10 + lVar2 * 0x18) = plVar1;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return;
}



// FUNCTION 1435f4d40 FUN_1435f4d40 body=107 status=ok
// SIG undefined FUN_1435f4d40(void)

void FUN_1435f4d40(longlong param_1,undefined8 *param_2)

{
  FUN_14360ebd0(param_2);
  if (*(uint *)(param_1 + 0xb8) < 0x32) {
    *param_2 = *(undefined8 *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    *(undefined8 **)(param_1 + 0xb0) = param_2;
    return;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_14360bb50(param_2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_2);
  }
  return;
}



// FUNCTION 1435f4dc0 FUN_1435f4dc0 body=208 status=ok
// SIG undefined FUN_1435f4dc0(void)

void FUN_1435f4dc0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  uint local_10;
  
  uVar3 = 0;
  do {
    local_38[0] = 0;
    local_18 = (undefined8 *)0x0;
    local_28 = *(undefined8 *)(param_1 + (longlong)(int)uVar3 * 0x18);
    local_20 = 0;
    local_30 = param_1;
    local_10 = uVar3;
    do {
      lVar2 = FUN_1435f4f00(local_38);
      puVar1 = local_18;
    } while (lVar2 != 0);
    if (local_18 != (undefined8 *)0x0) {
      FUN_14360ebd0(local_18);
      if (*(uint *)(local_30 + 0xb8) < 0x32) {
        *puVar1 = *(undefined8 *)(local_30 + 0xb0);
        *(int *)(local_30 + 0xb8) = *(int *)(local_30 + 0xb8) + 1;
        *(undefined8 **)(local_30 + 0xb0) = puVar1;
      }
      else {
        FUN_14360bb50(puVar1);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}



// FUNCTION 1435f4f00 FUN_1435f4f00 body=266 status=ok
// SIG undefined FUN_1435f4f00(void)

longlong * FUN_1435f4f00(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 2);
  if (*(int *)(lVar2 + 0xa8) != *param_1) {
    *param_1 = *(int *)(lVar2 + 0xa8);
    if (*(undefined8 **)(param_1 + 6) == (undefined8 *)0x0) {
      uVar6 = *(undefined8 *)(lVar2 + (longlong)param_1[10] * 0x18);
    }
    else {
      uVar6 = **(undefined8 **)(param_1 + 6);
    }
    *(undefined8 *)(param_1 + 4) = uVar6;
  }
  plVar3 = *(longlong **)(param_1 + 4);
  if (plVar3 != (longlong *)0x0) {
    if (plVar3 == *(longlong **)(lVar2 + 8 + (longlong)param_1[10] * 0x18)) {
      lVar5 = *plVar3;
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_1 + 6);
      }
      *(longlong *)(lVar2 + 8 + (longlong)param_1[10] * 0x18) = lVar5;
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 2) + (longlong)param_1[10] * 0x18);
    plVar4 = *(longlong **)(param_1 + 4);
    if (plVar4 == (longlong *)*plVar1) {
      *plVar1 = *plVar4;
    }
    else if (*(longlong **)(param_1 + 6) != (longlong *)0x0) {
      **(longlong **)(param_1 + 6) = *plVar4;
    }
    *(undefined8 *)(param_1 + 4) = **(undefined8 **)(param_1 + 4);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)param_1[10] * 0x18) == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + (longlong)param_1[10] * 0x18) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x10 + (longlong)param_1[10] * 0x18) = 0;
  }
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 8) = 0;
    FUN_1435f4d40(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 8));
    *(int *)(*(longlong *)(param_1 + 2) + 0xa8) = *(int *)(*(longlong *)(param_1 + 2) + 0xa8) + 1;
    *param_1 = *(int *)(*(longlong *)(param_1 + 2) + 0xa8);
  }
  *(longlong **)(param_1 + 8) = plVar3;
  return plVar3;
}



// FUNCTION 1435f5050 FUN_1435f5050 body=74 status=ok
// SIG undefined FUN_1435f5050(void)

undefined8 * FUN_1435f5050(undefined8 *param_1,longlong param_2)

{
  FUN_1435e3920();
  *param_1 = &PTR_FUN_145b4c728;
  param_1[7] = &PTR_LAB_145b4c7f8;
  param_1[9] = &PTR_LAB_145b4c8a8;
  *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x60;
  return param_1;
}



// FUNCTION 1435f50c0 FUN_1435f50c0 body=1357 status=ok
// SIG undefined FUN_1435f50c0(void)

void FUN_1435f50c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  RefCountNTSImpl *this;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  RefCountNTSImpl *pRVar12;
  undefined8 *puVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  RefCountImpl *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_78 [24];
  longlong local_60 [4];
  
  plVar5 = *(longlong **)(param_1 + -0x30);
  lVar16 = plVar5[0x1b];
  local_f0 = lVar16;
  iVar7 = FUN_143de5170((int)plVar5[0x2d]);
  local_108 = *(longlong *)(lVar16 + 0x28);
  local_f8 = (longlong)iVar7;
  if (local_108 != 0) {
    local_110 = 0;
    do {
      bVar15 = 1;
      puVar3 = (undefined8 *)(*(longlong *)(lVar16 + 0x20) + local_110);
      bVar4 = *(byte *)(*(longlong *)(lVar16 + 0x20) + 0x54 + local_110);
      do {
        if ((bVar4 & bVar15) != 0) {
          lVar16 = 0;
          if ((bVar15 & 8) == 0) {
            if ((bVar15 & 2) == 0) {
              if ((bVar15 & 4) == 0) {
                lVar16 = 0;
                if ((bVar15 & 1) != 0) {
                  lVar16 = 3;
                }
              }
              else {
                lVar16 = 1;
              }
            }
            else {
              lVar16 = 2;
            }
          }
          plVar11 = plVar5 + lVar16 * 4 + 0x1d;
          lVar14 = plVar5[(lVar16 + 7) * 4];
          if ((lVar14 == 0) ||
             (*(longlong *)(lVar14 + 0x18) = *(longlong *)(lVar14 + 0x18) + 1, lVar14 == 0)) {
            plVar8 = (longlong *)FUN_143de4d90(plVar5,&local_100,lVar16);
            if (*plVar8 != 0) {
              plVar1 = (longlong *)(*plVar8 + 0x18);
              *plVar1 = *plVar1 + 1;
            }
            lVar14 = *plVar8;
            if (local_100 != 0) {
              plVar8 = (longlong *)(local_100 + 0x18);
              *plVar8 = *plVar8 + -1;
              if (*plVar8 == 0) {
                FUN_1432ccf00();
              }
            }
          }
          if (plVar11[1] == 0) {
            local_res18[0] = 0x10001;
            FUN_143310f20(*(undefined8 *)(*(longlong *)(param_1 + -0x30) + 0xb0),local_78,
                          local_res18);
            plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x18);
            local_res20[0] = *(undefined4 *)(puVar3 + 9);
            this = (RefCountNTSImpl *)
                   (**(code **)(*plVar8 + 0x20))
                             (plVar8,*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x10),
                              local_78,0,local_res20,0);
            pRVar12 = (RefCountNTSImpl *)0x0;
            if (this != (RefCountNTSImpl *)0x0) {
              pRVar12 = this + (ulonglong)(byte)this[0x6d] * 4;
            }
            *(undefined8 *)(pRVar12 + 0x28) = *(undefined8 *)(param_1 + -0x20);
            pRVar12 = (RefCountNTSImpl *)0x0;
            if ((*(ushort *)(this + 0x6a) >> 10 & 1) != 0) {
              pRVar12 = this;
            }
            if ((pRVar12 != (RefCountNTSImpl *)0x0) &&
               (*(int *)(pRVar12 + 8) = *(int *)(pRVar12 + 8) + 1, pRVar12 != (RefCountNTSImpl *)0x0
               )) {
              *(int *)(pRVar12 + 8) = *(int *)(pRVar12 + 8) + 1;
            }
            FUN_1433a65a0(plVar11,plVar11,plVar11[1] + 1);
            puVar13 = (undefined8 *)(*plVar11 + -0x10 + plVar11[1] * 0x10);
            if (puVar13 != (undefined8 *)0x0) {
              if (pRVar12 != (RefCountNTSImpl *)0x0) {
                *(int *)(pRVar12 + 8) = *(int *)(pRVar12 + 8) + 1;
              }
              *puVar13 = pRVar12;
              puVar13[1] = puVar3;
            }
            if (pRVar12 != (RefCountNTSImpl *)0x0) {
              Scaleform::RefCountNTSImpl::Release(pRVar12);
            }
            if (*(longlong *)(pRVar12 + 0x38) == 0) {
              Scaleform::GFx::InteractiveObject::AddToPlayList(pRVar12);
              if (((*(uint *)(pRVar12 + 0xb8) >> 0x15 & 1) == 0) ||
                 ((*(uint *)(pRVar12 + 0xb8) >> 0x16 & 1) != 0)) {
                uVar9 = 0;
              }
              else {
                uVar9 = 1;
              }
              iVar7 = (**(code **)(*(longlong *)pRVar12 + 0x340))(pRVar12,uVar9);
              if (iVar7 == -1) {
                *(uint *)(pRVar12 + 0xb8) = *(uint *)(pRVar12 + 0xb8) | 0x400000;
              }
              else if (iVar7 == 1) {
                FUN_14336e960(pRVar12);
              }
            }
            uVar9 = FUN_14336b350(this);
            lVar10 = FUN_1432cd1e0(lVar14);
            uVar6 = *(ulonglong *)(lVar10 + 0x90);
            if (uVar6 == 0) {
              lVar10 = 0;
            }
            else if ((uVar6 & 1) == 0) {
              lVar10 = (ulonglong)(*(longlong *)(lVar10 + 0x98) != 0) + 1;
            }
            else {
              lVar10 = *(longlong *)((uVar6 & 0xfffffffffffffffe) + 8);
            }
            FUN_143364100(lVar14,lVar10,uVar9);
            Scaleform::RefCountNTSImpl::Release(this);
          }
          else {
            pRVar12 = (RefCountNTSImpl *)0x0;
            if ((*(ushort *)(*(RefCountNTSImpl **)*plVar11 + 0x6a) >> 10 & 1) != 0) {
              pRVar12 = *(RefCountNTSImpl **)*plVar11;
            }
            if (pRVar12 != (RefCountNTSImpl *)0x0) {
              *(int *)(pRVar12 + 8) = *(int *)(pRVar12 + 8) + 1;
            }
          }
          local_res18[0] = *(undefined4 *)(puVar3 + 9);
          FUN_143310f20(*(undefined8 *)(*(longlong *)(param_1 + -0x30) + 0xb0),local_60,local_res18)
          ;
          if (local_60[0] != 0) {
            FUN_1432bfaf0();
            local_98 = *(undefined4 *)(puVar3 + 9);
            local_e8 = puVar3[4];
            uStack_e0 = puVar3[5];
            local_d8 = *(undefined4 *)(puVar3 + 6);
            uStack_d4 = *(undefined4 *)((longlong)puVar3 + 0x34);
            uStack_d0 = *(undefined4 *)(puVar3 + 7);
            uStack_cc = *(undefined4 *)((longlong)puVar3 + 0x3c);
            local_84 = *(undefined1 *)(puVar3 + 10);
            local_9c = (uint)*(ushort *)((longlong)puVar3 + 0x4c);
            local_c8 = *puVar3;
            uStack_c0 = puVar3[1];
            local_b8 = *(undefined4 *)(puVar3 + 2);
            uStack_b4 = *(undefined4 *)((longlong)puVar3 + 0x14);
            uStack_b0 = *(undefined4 *)(puVar3 + 3);
            uStack_ac = *(undefined4 *)((longlong)puVar3 + 0x1c);
            local_a8 = (RefCountImpl *)0x0;
            local_a0 = 0;
            local_90 = 0;
            local_88 = 0x8f0000;
            local_83 = 1;
            lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x3b8);
            local_118 = lVar10 + 0x48;
            piVar2 = (int *)(lVar10 + 0x60);
            *piVar2 = *piVar2 + 1;
            plVar11 = (longlong *)
                      (**(code **)(*(longlong *)pRVar12 + 0x3b8))
                                (pRVar12,&local_e8,&local_118,0,0,0,4,0,0);
            piVar2 = (int *)(local_118 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
            if ((plVar11 != (longlong *)0x0) && (puVar3[8] != 0)) {
              (**(code **)(*plVar11 + 0x1c0))(plVar11);
            }
            if ((*(byte *)((longlong)plVar5 + 0x6a) & 1) != 0) {
              *(ushort *)(pRVar12 + 0x6a) = *(ushort *)(pRVar12 + 0x6a) | 1;
              (**(code **)(*(longlong *)pRVar12 + 0xa0))(pRVar12);
            }
            if (local_a8 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(local_a8);
            }
          }
          if ((int)lVar16 == 3) {
            *(longlong **)(pRVar12 + 0x38) = plVar5;
          }
          if ((local_f8 == lVar16) && (*(longlong *)(lVar14 + 0x30) == 0)) {
            uVar9 = (**(code **)(*plVar5 + 0x230))(plVar5);
            lVar16 = FUN_1432cd1e0();
            uVar6 = *(ulonglong *)(lVar16 + 0x90);
            if (uVar6 == 0) {
              lVar16 = 0;
            }
            else if ((uVar6 & 1) == 0) {
              lVar16 = (ulonglong)(*(longlong *)(lVar16 + 0x98) != 0) + 1;
            }
            else {
              lVar16 = *(longlong *)((uVar6 & 0xfffffffffffffffe) + 8);
            }
            FUN_143364100(uVar9,lVar16,lVar14);
          }
          if (pRVar12 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(pRVar12);
          }
          if (lVar14 != 0) {
            plVar11 = (longlong *)(lVar14 + 0x18);
            *plVar11 = *plVar11 + -1;
            if (*plVar11 == 0) {
              FUN_1432ccf00(lVar14);
            }
          }
        }
        bVar15 = bVar15 * '\x02';
      } while ((bVar15 & 0xf) != 0);
      local_110 = local_110 + 0x60;
      local_108 = local_108 + -1;
      lVar16 = local_f0;
    } while (local_108 != 0);
  }
  return;
}



// FUNCTION 1435f5620 OnMouseEvent body=110 status=ok
// SIG undefined OnMouseEvent(void)

undefined8 Scaleform::GFx::AS3::AvmButton::OnMouseEvent(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  if (*param_2 == 0x400) {
    if ((*(longlong *)(param_1 + -0x38) != 0) || (*(longlong *)(param_1 + -0x40) != 0)) {
      iStack_24 = param_2[1];
      iStack_20 = param_2[2];
      iStack_1c = param_2[3];
      uVar2 = *(ulonglong *)(param_1 + -0x38);
      local_18 = param_2[4];
      local_28 = 0x100000c;
      if (uVar2 == 0) {
        uVar2 = *(ulonglong *)(param_1 + -0x40);
      }
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 - 1;
      }
      FUN_1435198d0(uVar2,&local_28,*(undefined8 *)(param_1 + -0x30));
    }
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435f568a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x48) + 0x40))(param_1 + -0x48);
  return uVar1;
}



// FUNCTION 1435f56b0 FUN_1435f56b0 body=76 status=ok
// SIG undefined FUN_1435f56b0(void)

void FUN_1435f56b0(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(*(longlong *)(param_1 + -0x30) + 0x6a);
  if (((((byte)uVar1 >> 4 & 1) == 0) && ((uVar1 & 0x1000) == 0)) &&
     (-2 < *(int *)(*(longlong *)(param_1 + -0x30) + 0x2c))) {
    uVar2 = FUN_143de5170(param_2);
    FUN_1435f5c70(param_1 + -0x48,uVar2);
    return;
  }
  return;
}



// FUNCTION 1435f5740 SetUpStateObject body=10 status=ok
// SIG undefined SetUpStateObject(void)

void Scaleform::GFx::AS3::AvmButton::SetUpStateObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1435f5a10(param_1,0,param_2);
  return;
}



// FUNCTION 1435f5780 SetOverStateObject body=13 status=ok
// SIG undefined SetOverStateObject(void)

void Scaleform::GFx::AS3::AvmButton::SetOverStateObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1435f5a10(param_1,1,param_2);
  return;
}



// FUNCTION 1435f57d0 SetDownStateObject body=13 status=ok
// SIG undefined SetDownStateObject(void)

void Scaleform::GFx::AS3::AvmButton::SetDownStateObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1435f5a10(param_1,2,param_2);
  return;
}



// FUNCTION 1435f5820 SetHitStateObject body=13 status=ok
// SIG undefined SetHitStateObject(void)

void Scaleform::GFx::AS3::AvmButton::SetHitStateObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1435f5a10(param_1,3,param_2);
  return;
}



// FUNCTION 1435f5840 FUN_1435f5840 body=413 status=ok
// SIG undefined FUN_1435f5840(void)

undefined8 FUN_1435f5840(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint local_res8;
  
  uVar10 = 0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  local_res8 = 0;
  do {
    lVar3 = *(longlong *)(((longlong)(int)local_res8 + 7) * 0x20 + lVar2);
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
    }
    lVar9 = (longlong)(int)local_res8 * 0x20;
    lVar13 = *(longlong *)(lVar9 + 0xf0 + lVar2);
    if (lVar13 != 0) {
      lVar14 = 0;
      do {
        if (*(longlong *)(lVar14 + *(longlong *)(lVar2 + 0xe8 + lVar9)) == param_2) {
          *(undefined8 *)(param_2 + 0x38) = 0;
          lVar5 = FUN_14336b350(param_2);
          if (lVar5 != 0) {
            lVar5 = FUN_14336b350(param_2);
            lVar5 = *(longlong *)(lVar5 + 0x30);
            if (lVar5 != 0) {
              uVar12 = 0;
              lVar6 = FUN_1432cd1e0(lVar5);
              uVar11 = *(ulonglong *)(lVar6 + 0x90);
              if (uVar11 != 0) {
                if ((uVar11 & 1) == 0) {
                  uVar11 = (ulonglong)(*(longlong *)(lVar6 + 0x98) != 0) + 1;
                }
                else {
                  uVar11 = *(ulonglong *)((uVar11 & 0xfffffffffffffffe) + 8);
                }
                if (uVar11 != 0) {
                  do {
                    lVar6 = FUN_1432cd1e0(lVar5);
                    puVar7 = (ulonglong *)(lVar6 + 0x90);
                    if ((*(byte *)puVar7 & 1) != 0) {
                      puVar7 = (ulonglong *)((*puVar7 & 0xfffffffffffffffe) + 0x10);
                    }
                    uVar4 = puVar7[uVar12];
                    uVar8 = FUN_14336b350(param_2);
                    if (uVar4 == uVar8) {
                      FUN_143364170(lVar5,uVar12,1);
                      break;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < uVar11);
                }
              }
            }
          }
          uVar10 = 1;
        }
        lVar14 = lVar14 + 0x10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (lVar3 != 0) {
      plVar1 = (longlong *)(lVar3 + 0x18);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        FUN_1432ccf00(lVar3);
      }
    }
    local_res8 = local_res8 + 1;
    if (2 < local_res8) {
      return uVar10;
    }
  } while( true );
}



// FUNCTION 1435f5a10 FUN_1435f5a10 body=590 status=ok
// SIG undefined FUN_1435f5a10(void)

void FUN_1435f5a10(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  RefCountNTSImpl *this;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong local_res8;
  
  plVar10 = (longlong *)0x0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (param_2 != 3) {
    lVar11 = *(longlong *)(((longlong)param_2 + 7) * 0x20 + lVar2);
    if ((lVar11 == 0) ||
       (*(longlong *)(lVar11 + 0x18) = *(longlong *)(lVar11 + 0x18) + 1, lVar11 == 0)) {
      plVar6 = (longlong *)FUN_143de4d90(lVar2,&local_res8,param_2);
      if (*plVar6 != 0) {
        plVar1 = (longlong *)(*plVar6 + 0x18);
        *plVar1 = *plVar1 + 1;
      }
      lVar11 = *plVar6;
      if (local_res8 != 0) {
        plVar6 = (longlong *)(local_res8 + 0x18);
        *plVar6 = *plVar6 + -1;
        if (*plVar6 == 0) {
          FUN_1432ccf00();
        }
      }
    }
    else {
      lVar7 = FUN_1432cd1e0(lVar11);
      plVar6 = plVar10;
      if (*(ulonglong *)(lVar7 + 0x90) != 0) {
        if ((*(byte *)(lVar7 + 0x90) & 1) == 0) {
          plVar6 = (longlong *)((ulonglong)(*(longlong *)(lVar7 + 0x98) != 0) + 1);
        }
        else {
          plVar6 = *(longlong **)((*(ulonglong *)(lVar7 + 0x90) & 0xfffffffffffffffe) + 8);
        }
      }
      FUN_143364170(lVar11,0,plVar6);
    }
    if ((*(longlong *)(param_3 + 0x38) != 0) &&
       ((*(longlong *)(param_3 + 0x38) != lVar2 ||
        (lVar7 = FUN_14336b350(param_3), *(longlong *)(lVar7 + 0x30) != lVar11)))) {
      lVar7 = *(longlong *)(param_3 + 0x38);
      plVar6 = plVar10;
      if (lVar7 != 0) {
        plVar6 = (longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4);
      }
      cVar4 = (**(code **)(*plVar6 + 0xa8))(plVar6,param_3);
      if (cVar4 != '\0') {
        *(longlong *)(param_3 + 0x38) = lVar2;
      }
    }
    lVar7 = FUN_14336b350(param_3);
    if (*(longlong *)(lVar7 + 0x30) == 0) {
      uVar8 = FUN_14336b350(param_3);
      lVar7 = FUN_1432cd1e0(lVar11);
      uVar3 = *(ulonglong *)(lVar7 + 0x90);
      if (uVar3 != 0) {
        if ((uVar3 & 1) == 0) {
          plVar10 = (longlong *)((ulonglong)(*(longlong *)(lVar7 + 0x98) != 0) + 1);
        }
        else {
          plVar10 = *(longlong **)((uVar3 & 0xfffffffffffffffe) + 8);
        }
      }
      FUN_143364100(lVar11,plVar10,uVar8);
    }
    if (lVar11 != 0) {
      plVar10 = (longlong *)(lVar11 + 0x18);
      *plVar10 = *plVar10 + -1;
      if (*plVar10 == 0) {
        FUN_1432ccf00(lVar11);
      }
    }
  }
  puVar12 = (undefined8 *)(lVar2 + 0xe8 + (longlong)param_2 * 0x20);
  if (param_3 == 0) {
    FUN_1433a65a0(puVar12,puVar12,0);
  }
  else {
    lVar11 = puVar12[1];
    FUN_1433a65a0(puVar12,puVar12,1);
    if (lVar11 == 0) {
      puVar9 = (undefined8 *)*puVar12;
      lVar11 = 1;
      do {
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = 0;
        }
        puVar9 = puVar9 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    plVar10 = (longlong *)*puVar12;
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    this = (RefCountNTSImpl *)*plVar10;
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    *plVar10 = param_3;
  }
  iVar5 = FUN_143de5170(*(undefined4 *)(lVar2 + 0x168));
  if (iVar5 == param_2) {
    FUN_1435f5c70(param_1,param_2);
  }
  return;
}



// FUNCTION 1435f5c70 FUN_1435f5c70 body=854 status=ok
// SIG undefined FUN_1435f5c70(void)

void FUN_1435f5c70(longlong param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar8 = (longlong)param_2;
  if (((((byte)*(ushort *)((longlong)plVar1 + 0x6a) >> 4 & 1) == 0) &&
      ((*(ushort *)((longlong)plVar1 + 0x6a) & 0x1000) == 0)) &&
     (-2 < *(int *)((longlong)plVar1 + 0x2c))) {
    uVar4 = (**(code **)(*plVar1 + 0x230))(plVar1);
    lVar5 = FUN_1432cd1e0(uVar4);
    plVar7 = (longlong *)0x0;
    uVar2 = *(ulonglong *)(lVar5 + 0x90);
    plVar10 = plVar7;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        lVar5 = (ulonglong)(*(longlong *)(lVar5 + 0x98) != 0) + 1;
      }
      else {
        lVar5 = *(longlong *)((uVar2 & 0xfffffffffffffffe) + 8);
      }
      if (lVar5 != 0) {
        uVar4 = (**(code **)(*plVar1 + 0x230))(plVar1);
        FUN_143364170(uVar4,0,1);
      }
    }
    do {
      iVar11 = (int)plVar10;
      if (plVar1[(longlong)iVar11 * 4 + 0x1e] != 0) {
        plVar10 = plVar7;
        if ((*(byte *)((longlong)*(longlong **)plVar1[(longlong)iVar11 * 4 + 0x1d] + 0x6b) & 1) != 0
           ) {
          plVar10 = *(longlong **)plVar1[(longlong)iVar11 * 4 + 0x1d];
        }
        plVar9 = plVar7;
        if ((*(ushort *)((longlong)plVar10 + 0x6a) >> 9 & 1) != 0) {
          plVar9 = plVar10;
        }
        if ((iVar11 != param_2) && (lVar5 = plVar10[7], lVar5 != 0)) {
          plVar6 = (longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4);
          (**(code **)(*plVar6 + 0xa8))(plVar6,plVar10);
          plVar10[7] = 0;
          if (plVar9 != (longlong *)0x0) {
            lVar5 = (**(code **)(*(longlong *)
                                  ((longlong)plVar9 +
                                  (ulonglong)*(byte *)((longlong)plVar9 + 0x6d) * 4) + 8))
                              ((longlong)plVar9 + (ulonglong)*(byte *)((longlong)plVar9 + 0x6d) * 4)
            ;
            plVar10 = (longlong *)(lVar5 + -0x38);
            if (lVar5 == 0) {
              plVar10 = plVar7;
            }
            FUN_1435e4020(plVar10);
          }
        }
      }
      plVar10 = (longlong *)(ulonglong)(iVar11 + 1U);
    } while (iVar11 + 1U < 3);
    if (plVar1[lVar8 * 4 + 0x1e] != 0) {
      plVar10 = plVar7;
      if ((*(byte *)((longlong)*(longlong **)plVar1[lVar8 * 4 + 0x1d] + 0x6b) & 1) != 0) {
        plVar10 = *(longlong **)plVar1[lVar8 * 4 + 0x1d];
      }
      plVar9 = plVar7;
      if ((*(ushort *)((longlong)plVar10 + 0x6a) >> 9 & 1) != 0) {
        plVar9 = plVar10;
      }
      lVar8 = plVar1[(lVar8 + 7) * 4];
      if (lVar8 != 0) {
        *(longlong *)(lVar8 + 0x18) = *(longlong *)(lVar8 + 0x18) + 1;
      }
      if (((longlong *)plVar10[7] != (longlong *)0x0) &&
         (((longlong *)plVar10[7] != plVar1 ||
          (lVar5 = FUN_14336b350(plVar10), *(longlong *)(lVar5 + 0x30) != lVar8)))) {
        lVar5 = plVar10[7];
        plVar6 = plVar7;
        if (lVar5 != 0) {
          plVar6 = (longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4);
        }
        (**(code **)(*plVar6 + 0xa8))(plVar6,plVar10);
      }
      lVar5 = FUN_14336b350(plVar10);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        uVar4 = FUN_14336b350(plVar10);
        lVar5 = FUN_1432cd1e0(lVar8);
        uVar2 = *(ulonglong *)(lVar5 + 0x90);
        plVar6 = plVar7;
        if (uVar2 != 0) {
          if ((uVar2 & 1) == 0) {
            plVar6 = (longlong *)((ulonglong)(*(longlong *)(lVar5 + 0x98) != 0) + 1);
          }
          else {
            plVar6 = *(longlong **)((uVar2 & 0xfffffffffffffffe) + 8);
          }
        }
        FUN_143364100(lVar8,plVar6,uVar4);
      }
      if ((plVar10[7] == 0) && (plVar10[7] = (longlong)plVar1, plVar9 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*(longlong *)
                              ((ulonglong)*(byte *)((longlong)plVar9 + 0x6d) * 4 + (longlong)plVar9)
                            + 8))();
        plVar10 = (longlong *)(lVar5 + -0x38);
        if (lVar5 == 0) {
          plVar10 = plVar7;
        }
        FUN_1435e4020(plVar10);
        plVar10 = plVar7;
        plVar6 = plVar7;
        if (plVar9[0x1c] != 0) {
          do {
            plVar3 = *(longlong **)((longlong)plVar6 + plVar9[0x1b]);
            if ((*(ushort *)((longlong)plVar3 + 0x6a) >> 10 & 1) != 0) {
              (**(code **)(*plVar3 + 0x378))(plVar3,0);
              (**(code **)(*plVar3 + 0x398))(plVar3);
            }
            plVar10 = (longlong *)((longlong)plVar10 + 1);
            plVar6 = plVar6 + 2;
          } while (plVar10 < (longlong *)plVar9[0x1c]);
        }
      }
      uVar4 = (**(code **)(*plVar1 + 0x230))(plVar1);
      lVar5 = FUN_1432cd1e0(uVar4);
      uVar2 = *(ulonglong *)(lVar5 + 0x90);
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          plVar7 = (longlong *)((ulonglong)(*(longlong *)(lVar5 + 0x98) != 0) + 1);
        }
        else {
          plVar7 = *(longlong **)((uVar2 & 0xfffffffffffffffe) + 8);
        }
      }
      FUN_143364100(uVar4,plVar7,lVar8);
      if (lVar8 != 0) {
        plVar1 = (longlong *)(lVar8 + 0x18);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          FUN_1432ccf00(lVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1435f5fd0 FUN_1435f5fd0 body=170 status=ok
// SIG undefined FUN_1435f5fd0(void)

undefined8 *
FUN_1435f5fd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  param_5._0_4_ = *param_5;
  FUN_14336f060(param_1,param_3,param_2,param_4,&param_5);
  FUN_1435e3920(param_1 + 0x22,param_1);
  param_1[0x29] = &PTR_LAB_145b4b8d8;
  param_1[0x2b] = &PTR_LAB_145b4b988;
  *param_1 = &PTR_FUN_145b4c998;
  param_1[3] = &PTR_LAB_145b4cd80;
  param_1[0x22] = &PTR_LAB_145b4cd90;
  param_1[0x29] = &PTR_LAB_145b4ce80;
  param_1[0x2b] = &PTR_LAB_145b4cf30;
  return param_1;
}



// FUNCTION 1435f6080 FUN_1435f6080 body=112 status=ok
// SIG undefined FUN_1435f6080(void)

void FUN_1435f6080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b4c998;
  param_1[3] = &PTR_LAB_145b4cd80;
  *(undefined1 *)((longlong)param_1 + 0x6d) = 0;
  param_1[0x29] = &PTR_LAB_145b4ce80;
  param_1[0x2b] = &PTR_LAB_145b4cf30;
  param_1[0x22] = &PTR_FUN_145b4b758;
  param_1[0x2b] = &PTR_FUN_145b0aa60;
  param_1[0x29] = &PTR_FUN_145b0aa60;
  FUN_1435e0070();
  FUN_14336f0d0(param_1);
  return;
}



// FUNCTION 1435f6100 FUN_1435f6100 body=141 status=ok
// SIG undefined FUN_1435f6100(void)

void FUN_1435f6100(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18);
    if (*(int *)(lVar1 + 0x3c8) != 0) {
      uVar2 = FUN_1435c8f90(*(undefined8 *)(lVar1 + 0x88));
      *(undefined4 *)(lVar1 + 0x3c8) = uVar2;
      if (*(char *)(*(longlong *)(lVar1 + 0x88) + 0xb8) != '\0') {
        FUN_1435cc020();
      }
    }
    FUN_1435ea830(lVar1,0);
    FUN_1435ea830(lVar1,1);
    FUN_1435f61a0(param_1);
    FUN_1435eaac0(lVar1,6,3);
  }
  return;
}



// FUNCTION 1435f61a0 FUN_1435f61a0 body=288 status=ok
// SIG undefined FUN_1435f61a0(void)

void FUN_1435f61a0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18);
  FUN_1435e95f0(lVar3 + 400,0x1000015);
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x52f0) >> 0x13 & 1) == 0) {
    for (lVar4 = *(longlong *)(param_1 + 0xa8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0xa8)) {
      pbVar2 = (byte *)(lVar4 + 0x30 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
      *pbVar2 = *pbVar2 | 2;
      if (((*(ushort *)(lVar4 + 0x6a) >> 10 & 1) != 0) &&
         (lVar1 = lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4,
         (*(byte *)(lVar4 + 0x68 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) & 2) != 0)) {
        uVar5 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x360))();
        FUN_1435e6840(lVar1,uVar5);
        *(byte *)(lVar1 + 0x68) = *(byte *)(lVar1 + 0x68) & 0xfd;
      }
    }
  }
  else {
    for (lVar4 = *(longlong *)(param_1 + 0x90); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x90)) {
      pbVar2 = (byte *)(lVar4 + 0x30 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
      *pbVar2 = *pbVar2 | 2;
      if (((*(ushort *)(lVar4 + 0x6a) >> 10 & 1) != 0) &&
         (lVar1 = lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4,
         (*(byte *)(lVar4 + 0x68 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) & 2) != 0)) {
        uVar5 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x360))();
        FUN_1435e6840(lVar1,uVar5);
        *(byte *)(lVar1 + 0x68) = *(byte *)(lVar1 + 0x68) & 0xfd;
      }
    }
  }
  FUN_1435e95f0(lVar3 + 400,0x1000016);
  return;
}



// FUNCTION 1435f62d0 FUN_1435f62d0 body=87 status=ok
// SIG undefined FUN_1435f62d0(void)

undefined8 * FUN_1435f62d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_145b4afb0;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_2,param_1);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145b4d410;
  return param_1;
}



// FUNCTION 1435f6350 FUN_1435f6350 body=80 status=ok
// SIG undefined FUN_1435f6350(void)

undefined8 * FUN_1435f6350(undefined8 *param_1,undefined8 param_2)

{
  FUN_1435e3920();
  *param_1 = &PTR_FUN_145b4d4d8;
  param_1[7] = &PTR_LAB_145b4d5a8;
  param_1[9] = &PTR_LAB_145b4d658;
  FUN_143deb930(param_2,0,0);
  return param_1;
}



// FUNCTION 1435f63b0 FUN_1435f63b0 body=212 status=ok
// SIG undefined FUN_1435f63b0(void)

void FUN_1435f63b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar1 + 0x38);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 8))();
    if (lVar3 != 0) {
      plVar4 = (longlong *)(lVar3 + -0x38);
      goto LAB_1435f63e5;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1435f63e5:
  lVar3 = (**(code **)(*plVar4 + 200))(plVar4,lVar1);
  if (lVar3 == 0) {
    Scaleform::GFx::InteractiveObject::AddToPlayList(lVar1);
  }
  else {
    Scaleform::GFx::InteractiveObject::InsertToPlayListAfter(lVar1,lVar3);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (((*(uint *)(plVar4 + 0x17) >> 0x15 & 1) == 0) || ((*(uint *)(plVar4 + 0x17) >> 0x16 & 1) != 0)
     ) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  iVar2 = (**(code **)(*plVar4 + 0x340))(plVar4,uVar5);
  if (iVar2 == -1) {
    *(uint *)(plVar4 + 0x17) = *(uint *)(plVar4 + 0x17) | 0x400000;
  }
  else if (iVar2 == 1) {
    FUN_14336e960(plVar4);
  }
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  if (uVar6 == 0) {
    uVar6 = *(ulonglong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 - 1;
  }
  FUN_1434f0700(param_1 + 8,uVar6);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1435f6490 IsTabable body=93 status=ok
// SIG undefined IsTabable(void)

bool Scaleform::GFx::AS3::AvmTextField::IsTabable(longlong param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + -0x20) + 0x1d8))();
  if (cVar1 == '\0') {
    return false;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + -0x20) + 0xb8) & 0x60;
  if (uVar2 != 0) {
    return uVar2 == 0x60;
  }
  if (0 < *(short *)(*(longlong *)(param_1 + -0x20) + 0xbc)) {
    return true;
  }
  cVar1 = TextField::IsReadOnly();
  return cVar1 == '\0';
}



// FUNCTION 1435f6500 HasStyleSheet body=39 status=ok
// SIG undefined HasStyleSheet(void)

undefined1 Scaleform::GFx::AS3::AvmTextField::HasStyleSheet(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = USceneComponent::GetAttachParent(*(undefined8 *)(param_1 + -0x30));
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1435f6530 FUN_1435f6530 body=208 status=ok
// SIG undefined FUN_1435f6530(void)

void FUN_1435f6530(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_res8;
  
  uVar2 = *(ulonglong *)(param_1 + -0x38);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x3a8;
  if (uVar2 == 0) {
    uVar2 = *(ulonglong *)(param_1 + -0x40);
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 - 1;
  }
  if (uVar2 != 0) {
    cVar1 = FUN_14351a650(uVar2,lVar3,0);
    if ((cVar1 == '\0') && (cVar1 = FUN_14351a650(uVar2,lVar3,1), cVar1 == '\0')) {
      return;
    }
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (uVar2,&local_res8,lVar3,1,0);
    FUN_1434f0700(local_res8 + 0x50,uVar2);
    FUN_14351a300(uVar2,local_res8,*(undefined8 *)(param_1 + -0x30));
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 1435f6610 FUN_1435f6610 body=845 status=ok
// SIG undefined FUN_1435f6610(void)

void FUN_1435f6610(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong local_res8;
  longlong local_98;
  ulonglong local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_48 [2];
  ulonglong local_40;
  undefined1 local_38 [8];
  ulonglong uStack_30;
  
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x20))();
  if ((((*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x88) +
                  0x3f8) != '\0') &&
       (cVar4 = FUN_1433e6590(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + -0x30) + 0xe0) + 0x10),
                              &local_98,0,param_3), cVar4 != '\0')) &&
      ((*(ushort *)(local_98 + 0x4c) & 0x100) != 0)) &&
     (lVar6 = FUN_1432c3580(local_98 + 0x20), lVar6 != 0)) {
    uVar7 = *(ulonglong *)(local_98 + 0x20);
    if (param_2 == 2) {
      pcVar8 = "linkMouseOver";
    }
    else {
      if (param_2 != 3) {
        return;
      }
      pcVar8 = "linkMouseOut";
    }
    local_res8 = FUN_143360a60(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x3b8),
                               pcVar8);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    uVar9 = *(ulonglong *)(param_1 + -0x38);
    if (uVar9 == 0) {
      uVar9 = *(ulonglong *)(param_1 + -0x40);
    }
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar9 - 1;
    }
    if ((uVar9 != 0) &&
       ((cVar4 = FUN_14351a650(uVar9,&local_res8,0), cVar4 != '\0' ||
        (cVar4 = FUN_14351a650(uVar9,&local_res8,1), cVar4 != '\0')))) {
      local_78 = local_res8;
      local_88[0] = 10;
      lVar11 = 3;
      local_80 = 0;
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      local_68 = 1;
      local_60 = 0;
      local_58 = 1;
      local_48[0] = 1;
      local_40 = 0;
      local_38[0] = 1;
      local_90 = 0;
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x88);
      FUN_1435e8720(lVar6,&local_90,*(undefined8 *)(lVar6 + 0x380),3,local_88);
      uVar3 = local_90;
      FUN_1434f0700(local_90 + 0x50,uVar9);
      lVar6 = FUN_143360a60(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x3b8),
                            (uVar7 & 0xfffffffffffffffc) + 0xc);
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
      piVar1 = (int *)(*(longlong *)(uVar3 + 0x60) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(uVar3 + 0x60) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar6);
      }
      *(undefined4 *)(uVar3 + 0x68) = param_4;
      FUN_14351a300(uVar9,uVar3,*(undefined8 *)(param_1 + -0x30));
      puVar10 = (ulonglong *)&stack0xffffffffffffffe8;
      do {
        puVar2 = puVar10 + -4;
        lVar11 = lVar11 + -1;
        uVar5 = (uint)puVar10[-6] & 0x1f;
        if (9 < uVar5) {
          if (((uint)puVar10[-6] >> 9 & 1) == 0) {
            if (uVar5 == 10) {
              piVar1 = (int *)(*puVar2 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
              uVar7 = *puVar2;
              if ((uVar7 & 1) == 0) {
LAB_1435f68d5:
                if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *puVar2 = uVar7 - 1;
              }
            }
            else if (uVar5 - 0xd < 2) {
              uVar7 = puVar10[-3];
              if ((uVar7 & 1) == 0) goto LAB_1435f68d5;
              puVar10[-3] = uVar7 - 1;
            }
          }
          else {
            piVar1 = (int *)puVar10[-5];
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *(uint *)(puVar10 + -6) = (uint)puVar10[-6] & 0xfffffde0;
            puVar10[-5] = 0;
            *puVar2 = 0;
            puVar10[-3] = 0;
          }
        }
        puVar10 = puVar2;
      } while (lVar11 != 0);
      if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880(uVar3);
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1435f6970 FUN_1435f6970 body=1047 status=ok
// SIG undefined FUN_1435f6970(void)

undefined8 FUN_1435f6970(longlong param_1,int *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  RefCountImpl *this;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  ulonglong local_res20;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  ulonglong local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_68 [2];
  ulonglong local_60;
  undefined1 local_58 [8];
  ulonglong auStack_50 [2];
  
  FUN_1435e3ac0(param_1 + -0x48);
  if (*param_2 != 0x100000c) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + -0x30);
  lVar8 = Scaleform::GFx::TextField::GetBeginIndex(lVar3);
  lVar9 = Scaleform::GFx::TextField::GetEndIndex(lVar3);
  if (lVar8 != lVar9) {
    return 0;
  }
  if ((((((*(uint *)(lVar3 + 0xfc) >> 1 & 1) != 0) &&
        ((*(byte *)(*(longlong *)(*(longlong *)(lVar3 + 0xe0) + 0x10) + 0x40) & 1) != 0)) &&
       (cVar5 = FUN_143dea940(lVar3,(int)*(char *)((longlong)param_2 + 0x11),&local_res18,0),
       cVar5 != '\0')) &&
      ((lVar8 = FUN_1433fe9a0(*(undefined8 *)(lVar3 + 0xe0),local_res18,local_res1c), lVar8 != -1 &&
       (cVar5 = FUN_1433e6590(*(undefined8 *)(*(longlong *)(lVar3 + 0xe0) + 0x10),&local_res10,0,
                              lVar8), cVar5 != '\0')))) &&
     (cVar5 = Scaleform::Render::Text::TextFormat::IsUrlSet(local_res10), cVar5 != '\0')) {
    uVar12 = *(ulonglong *)(local_res10 + 0x20) & 0xfffffffffffffffc;
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x10);
    if ((lVar3 == 0) || (iVar6 = FUN_1432c42c0(uVar12 + 0xc,"event:",6), iVar6 != 0)) {
      this = (RefCountImpl *)(**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))(lVar3 + 0x10,0x26);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
        (**(code **)(*(longlong *)this + 8))(this,local_res10 + 0x20);
      }
    }
    else {
      local_res8 = FUN_143360a60(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x3b8),
                                 &DAT_145b2e1c8);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      uVar10 = *(ulonglong *)(param_1 + -0x38);
      if (uVar10 == 0) {
        uVar10 = *(ulonglong *)(param_1 + -0x40);
      }
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar10 - 1;
      }
      if (uVar10 != 0) {
        cVar5 = FUN_14351a650(uVar10,&local_res8,0);
        if ((cVar5 != '\0') || (cVar5 = FUN_14351a650(uVar10,&local_res8,1), cVar5 != '\0')) {
          local_98 = local_res8;
          local_a0 = 0;
          local_a8[0] = 10;
          lVar9 = 3;
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          local_80 = 0;
          local_60 = 0;
          local_88 = 1;
          local_78 = 1;
          local_68[0] = 1;
          local_58[0] = 1;
          local_res20 = 0;
          lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x88);
          lVar8 = 0x378;
          if (*(char *)(lVar3 + 0x3f8) != '\0') {
            lVar8 = 0x380;
          }
          FUN_1435e8720(lVar3,&local_res20,*(undefined8 *)(lVar8 + lVar3),3,local_a8);
          uVar4 = local_res20;
          FUN_1434f0700(local_res20 + 0x50,uVar10);
          lVar8 = FUN_143360a60(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x3b8),
                                uVar12 + 0x12);
          *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 2;
          piVar1 = (int *)(*(longlong *)(uVar4 + 0x60) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          *(longlong *)(uVar4 + 0x60) = lVar8;
          piVar1 = (int *)(lVar8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar8);
          }
          if (*(char *)(lVar3 + 0x3f8) != '\0') {
            *(int *)(uVar4 + 0x68) = (int)*(char *)((longlong)param_2 + 0x11);
            *(uint *)(uVar4 + 0x6c) = (uint)*(byte *)(param_2 + 3);
          }
          FUN_14351a300(uVar10,uVar4,*(undefined8 *)(param_1 + -0x30));
          puVar11 = (ulonglong *)&stack0xffffffffffffffc8;
          do {
            puVar2 = puVar11 + -4;
            lVar9 = lVar9 + -1;
            uVar7 = (uint)puVar11[-6] & 0x1f;
            if (9 < uVar7) {
              if (((uint)puVar11[-6] >> 9 & 1) == 0) {
                if (uVar7 == 10) {
                  piVar1 = (int *)(*puVar2 + 0x18);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_14335f920();
                  }
                }
                else if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
                  uVar12 = *puVar2;
                  if ((uVar12 & 1) == 0) {
LAB_1435f6cb7:
                    if (uVar12 != 0) {
                      if ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0) {
                        *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
                        FUN_1434ef880();
                      }
                    }
                  }
                  else {
                    *puVar2 = uVar12 - 1;
                  }
                }
                else if (uVar7 - 0xd < 2) {
                  uVar12 = puVar11[-3];
                  if ((uVar12 & 1) == 0) goto LAB_1435f6cb7;
                  puVar11[-3] = uVar12 - 1;
                }
              }
              else {
                piVar1 = (int *)puVar11[-5];
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
                *(uint *)(puVar11 + -6) = (uint)puVar11[-6] & 0xfffffde0;
                puVar11[-5] = 0;
                *puVar2 = 0;
                puVar11[-3] = 0;
              }
            }
            puVar11 = puVar2;
          } while (lVar9 != 0);
          if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
            if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
              FUN_1434ef880(uVar4);
            }
          }
        }
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  return 1;
}



// FUNCTION 1435f6d90 FUN_1435f6d90 body=81 status=ok
// SIG undefined FUN_1435f6d90(void)

void FUN_1435f6d90(longlong *param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 local_res10 [4];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_143de9c70(param_1[-6]);
  (**(code **)(lVar1 + 0xe8))(param_1,uVar2,1,local_res10,param_3);
  return;
}



// FUNCTION 1435f6df0 FUN_1435f6df0 body=187 status=ok
// SIG undefined FUN_1435f6df0(void)

void FUN_1435f6df0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  
  uVar3 = *(ulonglong *)(param_1 + -0x38);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20);
  if (uVar3 == 0) {
    uVar3 = *(ulonglong *)(param_1 + -0x40);
  }
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 - 1;
  }
  if (uVar3 != 0) {
    cVar2 = FUN_14351a530(uVar3,lVar1 + 0x3b0,0);
    if (cVar2 != '\0') {
      Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
                (uVar3,&local_res8,lVar1 + 0x3b0,1,0);
      FUN_1434f0700(local_res8 + 0x50,uVar3);
      FUN_14351a300(uVar3,local_res8,*(undefined8 *)(param_1 + -0x30));
      if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
         ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  return;
}



// FUNCTION 1435f6ec0 FUN_1435f6ec0 body=627 status=ok
// SIG undefined FUN_1435f6ec0(void)

undefined1
FUN_1435f6ec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong local_res8;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_48 [2];
  ulonglong local_40;
  undefined1 local_38 [8];
  ulonglong uStack_30;
  
  uVar8 = *(ulonglong *)(param_1 + -0x38);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20);
  if (uVar8 == 0) {
    uVar8 = *(ulonglong *)(param_1 + -0x40);
  }
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 - 1;
  }
  if (uVar8 == 0) {
    return 1;
  }
  cVar5 = FUN_14351a650(uVar8,lVar2 + 0x3a0,0);
  if ((cVar5 == '\0') && (cVar5 = FUN_14351a650(uVar8,lVar2 + 0x3a0,1), cVar5 == '\0')) {
    return 1;
  }
  local_78 = *(longlong *)(lVar2 + 0x3a0);
  local_88[0] = 10;
  lVar10 = 3;
  local_80 = 0;
  *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
  local_68 = 1;
  local_60 = 0;
  local_58 = 1;
  local_48[0] = 1;
  local_40 = 0;
  local_38[0] = 1;
  local_res8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x30) + 0x20) + 0x88);
  lVar11 = 0x378;
  if (*(char *)(lVar2 + 0x3f8) != '\0') {
    lVar11 = 0x380;
  }
  FUN_1435e8720(lVar2,&local_res8,*(undefined8 *)(lVar11 + lVar2),3,local_88);
  uVar4 = local_res8;
  FUN_1434f0700(local_res8 + 0x50,uVar8);
  FUN_14351e260(uVar4,param_4);
  if (*(char *)(lVar2 + 0x3f8) != '\0') {
    *(undefined4 *)(uVar4 + 0x68) = param_5;
  }
  uVar6 = FUN_14351a300(uVar8,uVar4,*(undefined8 *)(param_1 + -0x30));
  puVar9 = (ulonglong *)&stack0xffffffffffffffe8;
  do {
    puVar1 = puVar9 + -4;
    lVar10 = lVar10 + -1;
    uVar7 = (uint)puVar9[-6] & 0x1f;
    if (9 < uVar7) {
      if (((uint)puVar9[-6] >> 9 & 1) == 0) {
        if (uVar7 == 10) {
          piVar3 = (int *)(*puVar1 + 0x18);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
          uVar8 = *puVar1;
          if ((uVar8 & 1) == 0) {
LAB_1435f70b5:
            if ((uVar8 != 0) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar8 - 1;
          }
        }
        else if (uVar7 - 0xd < 2) {
          uVar8 = puVar9[-3];
          if ((uVar8 & 1) == 0) goto LAB_1435f70b5;
          puVar9[-3] = uVar8 - 1;
        }
      }
      else {
        piVar3 = (int *)puVar9[-5];
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(uint *)(puVar9 + -6) = (uint)puVar9[-6] & 0xfffffde0;
        puVar9[-5] = 0;
        *puVar1 = 0;
        puVar9[-3] = 0;
      }
    }
    puVar9 = puVar1;
    if (lVar10 == 0) {
      if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
        FUN_1434ef880(uVar4);
      }
      return uVar6;
    }
  } while( true );
}



// FUNCTION 1435f7150 FUN_1435f7150 body=73 status=ok
// SIG undefined FUN_1435f7150(void)

longlong FUN_1435f7150(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = USceneComponent::GetAttachParent(param_1[-6]);
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (cVar1 != '\0') {
    return *(longlong *)(lVar2 + 0x50) + 0x80;
  }
  return 0;
}



// FUNCTION 1435f71c0 FUN_1435f71c0 body=142 status=ok
// SIG undefined FUN_1435f71c0(void)

void FUN_1435f71c0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  bVar4 = *(byte *)(lVar2 + 0xfc) & 1;
  if ((bVar4 == 0) || ((*(byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158) & 8) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    Scaleform::Render::Text::DocView::SetAutoSizeX(*(undefined8 *)(lVar2 + 0xe0));
  }
  else {
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (bVar4 == 0) {
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xe0) + 0x158);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    Scaleform::Render::Text::DocView::SetAutoSizeY(*(undefined8 *)(lVar2 + 0xe0));
  }
  *(uint *)(lVar2 + 0xfc) = *(uint *)(lVar2 + 0xfc) | 0x2000;
  FUN_143de5880(lVar2);
  return;
}



// FUNCTION 1435f7260 FUN_1435f7260 body=3331 status=ok
// SIG undefined FUN_1435f7260(void)

void FUN_1435f7260(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  RefCountNTSImpl *pRVar8;
  longlong lVar9;
  char *pcVar10;
  RefCountImpl *pRVar11;
  RefCountNTSImpl *pRVar12;
  RefCountNTSImpl *pRVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  uint local_2d8 [2];
  int *local_2d0;
  undefined8 *local_2c8;
  RefCountNTSImpl *local_2b8;
  undefined1 local_2b0 [40];
  RefCountNTSImpl *local_288;
  undefined1 local_280;
  longlong local_270;
  undefined4 local_268 [2];
  longlong local_260;
  undefined4 local_258 [2];
  undefined8 local_250;
  undefined4 local_238 [2];
  longlong local_230;
  undefined4 local_228 [2];
  undefined8 local_220;
  undefined4 local_208 [2];
  longlong local_200;
  undefined4 local_1f8 [2];
  undefined8 local_1f0;
  undefined4 local_1d8 [2];
  longlong local_1d0;
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined4 local_1a8 [2];
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178 [2];
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148 [2];
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  RefCountNTSImpl *local_e0 [21];
  
  if (((byte)*param_4 & 0x1f) != 0xc) {
    return;
  }
  pRVar13 = (RefCountNTSImpl *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_2d8[0] = 0;
  local_2d0 = (int *)0x0;
  lVar9 = *(longlong *)(lVar3 + 0xe0);
  plVar4 = *(longlong **)(param_4 + 4);
  if (*(longlong *)(lVar9 + 0x30) == 0) {
    pRVar8 = (RefCountNTSImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18,0);
    pRVar12 = pRVar13;
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      *(longlong *)pRVar8 = 0;
      *(longlong *)(pRVar8 + 8) = 0;
      *(longlong *)(pRVar8 + 0x10) = 0;
      pRVar12 = pRVar8;
    }
    *(RefCountNTSImpl **)(lVar9 + 0x30) = pRVar12;
  }
  local_270 = *(longlong *)(lVar9 + 0x30);
  if (local_270 == 0) goto LAB_1435f7ecd;
  local_288 = (RefCountNTSImpl *)0x0;
  lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"subString",9);
  local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,10);
  uStack_2f0 = 0;
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
  local_140 = *(longlong *)(param_2 + 0x1d8);
  local_148[0] = 0;
  if (local_140 != 0) {
    *(uint *)(local_140 + 8) = *(int *)(local_140 + 8) + 1U & 0x8fffffff;
  }
  local_2e8._0_4_ = (undefined4)lVar9;
  local_2e8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  local_138 = 10;
  uStack_134 = local_2f8._4_4_;
  uStack_130 = 0;
  uStack_12c = 0;
  local_128 = (undefined4)local_2e8;
  uStack_124 = local_2e8._4_4_;
  uStack_120 = uStack_2e0;
  uStack_11c = uStack_2dc;
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
  local_2e8 = lVar9;
  FUN_1435aef90(local_148,0);
  piVar1 = (int *)(lVar9 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9);
  }
  piVar1 = (int *)(lVar9 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9);
  }
  pcVar10 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_148,local_2d8);
  if (*pcVar10 == '\0') {
    Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x18),&local_res20);
    FUN_1434a1590(lVar3 + 0x18,
                  "%s.setImageSubstitutions() failed for #%d element - subString should be specified"
                  ,*(undefined8 *)CONCAT44(uStackX_24,local_res20),param_3);
    puVar14 = (undefined8 *)CONCAT44(uStackX_24,local_res20);
LAB_1435f7ea3:
    piVar1 = (int *)(puVar14 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_143591c60(local_2d8,&local_res20,*(undefined8 *)(param_2 + 0x10));
    local_2f8 = local_2c8;
    *(int *)(local_2c8 + 3) = *(int *)(local_2c8 + 3) + 1;
    uVar6 = FUN_14335fa60(&local_2f8);
    if (0xf < uVar6) {
      Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x18),&local_res20);
      FUN_1434a1590(lVar3 + 0x18,
                    "%s.setImageSubstitutions() failed for #%d element - length of subString should not exceed 15 characters"
                    ,*(undefined8 *)CONCAT44(uStackX_24,local_res20),param_3);
      piVar1 = (int *)(CONCAT44(uStackX_24,local_res20) + 0x18);
      *piVar1 = *piVar1 + -1;
      puVar14 = local_2f8;
      if (*piVar1 == 0) {
        FUN_14335f920();
        puVar14 = local_2f8;
      }
      goto LAB_1435f7ea3;
    }
    FUN_143306bc0(local_2b0,0x14,*local_2f8,*(int *)(local_2f8 + 4) + 1);
    local_280 = (undefined1)uVar6;
    piVar1 = (int *)(local_2f8 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    fVar16 = 0.0;
    local_2b8 = (RefCountNTSImpl *)0x0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar20 = 0.0;
    fVar19 = 0.0;
    lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"image",5);
    local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,10);
    uStack_2f0 = 0;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
    local_170 = *(longlong *)(param_2 + 0x1d8);
    local_178[0] = 0;
    if (local_170 != 0) {
      *(uint *)(local_170 + 8) = *(int *)(local_170 + 8) + 1U & 0x8fffffff;
    }
    local_2e8._0_4_ = (undefined4)lVar9;
    local_2e8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
    local_168 = 10;
    uStack_164 = local_2f8._4_4_;
    uStack_160 = 0;
    uStack_15c = 0;
    local_158 = (undefined4)local_2e8;
    uStack_154 = local_2e8._4_4_;
    uStack_150 = uStack_2e0;
    uStack_14c = uStack_2dc;
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
    local_2e8 = lVar9;
    FUN_1435aef90(local_178,0);
    FUN_1434e64f0(&local_2f8);
    piVar1 = (int *)(lVar9 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar9);
    }
    pcVar10 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_178,local_2d8);
    if ((*pcVar10 == '\0') ||
       (cVar5 = FUN_1435c8b00(param_2,local_2d8,"flash.display.BitmapData",
                              *(undefined8 *)(param_2 + 0x1c8)), cVar5 == '\0')) {
LAB_1435f7e0b:
      Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x18),&local_res20);
      pcVar10 = 
      "%s.setImageSubstitutions() failed for #%d element - \'image\' is not specified or not a BitmapData"
      ;
LAB_1435f7e29:
      pRVar12 = (RefCountNTSImpl *)0x0;
      FUN_1434a1590(lVar3 + 0x18,pcVar10,*(undefined8 *)CONCAT44(uStackX_24,local_res20),param_3);
      piVar1 = (int *)(CONCAT44(uStackX_24,local_res20) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      local_2f8 = (undefined8 *)FUN_1434f5cb0(local_2c8);
      if (local_2f8 == (undefined8 *)0x0) {
        Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x18),&local_res20);
        pcVar10 = "%s.setImageSubstitutions() failed for #%d element - failed to get ImageResource";
        goto LAB_1435f7e29;
      }
      lVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x218))();
      if (lVar9 != 0) {
        Scaleform::GFx::Resource::AddRef(lVar9);
      }
      iVar7 = (**(code **)(*(longlong *)local_2f8[3] + 0x18))();
      if (iVar7 == 0) {
        pRVar11 = (RefCountImpl *)
                  (**(code **)(*(longlong *)(lVar9 + 0x18) + 0x18))(lVar9 + 0x18,0xe);
        local_res20 = CONCAT31(local_res20._1_3_,pRVar11 == (RefCountImpl *)0x0);
        cVar5 = pRVar11 == (RefCountImpl *)0x0;
        if (pRVar11 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(pRVar11);
          cVar5 = (char)local_res20;
        }
        if (cVar5 == '\0') {
          local_110 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
          local_118[0] = 3;
          local_108 = 1;
          local_104 = 1;
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          pRVar11 = (RefCountImpl *)
                    (**(code **)(*(longlong *)(lVar9 + 0x18) + 0x18))
                              ((longlong *)(lVar9 + 0x18),0xe);
          pRVar12 = (RefCountNTSImpl *)
                    (**(code **)(*(longlong *)pRVar11 + 0x20))(pRVar11,local_118,local_2f8[3]);
          local_2b8 = pRVar12;
          Scaleform::RefCountImpl::Release(pRVar11);
          pRVar8 = local_2b8;
          goto LAB_1435f7ac8;
        }
        local_res20 = 0x21000;
        FUN_1433db230(&local_res20,"ImageCreator is null in ProceedImageSubstitution");
        pRVar12 = pRVar13;
LAB_1435f76b2:
        if (lVar9 != 0) {
          FUN_1432de450(lVar9);
        }
        if (pRVar12 != (RefCountNTSImpl *)0x0) {
          lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"width",5);
          local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,10);
          uStack_2f0 = 0;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
          local_1a0 = *(longlong *)(param_2 + 0x1d8);
          local_1a8[0] = 0;
          if (local_1a0 != 0) {
            *(uint *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1U & 0x8fffffff;
          }
          local_2e8._0_4_ = (undefined4)lVar9;
          local_2e8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
          local_198 = 10;
          uStack_194 = local_2f8._4_4_;
          uStack_190 = 0;
          uStack_18c = 0;
          local_188 = (undefined4)local_2e8;
          uStack_184 = local_2e8._4_4_;
          uStack_180 = uStack_2e0;
          uStack_17c = uStack_2dc;
          local_2e8 = lVar9;
          FUN_14360dee0(&local_198);
          FUN_1435aef90(local_1a8,0);
          FUN_1434e64f0(&local_2f8);
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
          pcVar10 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_1a8,local_2d8);
          if (*pcVar10 != '\0') {
            FUN_14360f380(local_2d8,&local_res20,&local_2f8);
            fVar17 = (float)((double)local_2f8 * 20.0);
          }
          lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"height",6);
          local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,10);
          uStack_2f0 = 0;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
          local_1d0 = *(longlong *)(param_2 + 0x1d8);
          local_1d8[0] = 0;
          if (local_1d0 != 0) {
            *(uint *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1U & 0x8fffffff;
          }
          local_1c8[0] = 0;
          local_1c0 = 0;
          local_2e8 = lVar9;
          FUN_1435901e0(local_1c8,&local_2f8);
          FUN_1435aef90(local_1d8,0);
          FUN_1434e64f0(&local_2f8);
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
          pcVar10 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_1d8,local_2d8);
          if (*pcVar10 != '\0') {
            FUN_14360f380(local_2d8,&local_res20,&local_2f8);
            fVar18 = (float)((double)local_2f8 * 20.0);
          }
          lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"baseLineX",9
                               );
          local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,10);
          uStack_2f0 = 0;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
          local_200 = *(longlong *)(param_2 + 0x1d8);
          local_208[0] = 0;
          if (local_200 != 0) {
            *(uint *)(local_200 + 8) = *(int *)(local_200 + 8) + 1U & 0x8fffffff;
          }
          local_1f8[0] = 0;
          local_1f0 = 0;
          local_2e8 = lVar9;
          FUN_1435901e0(local_1f8,&local_2f8);
          FUN_1435aef90(local_208,0);
          FUN_1434e64f0(&local_2f8);
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
          pcVar10 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_208,local_2d8);
          if (*pcVar10 != '\0') {
            FUN_14360f380(local_2d8,&local_res20,&local_2f8);
            fVar16 = (float)((double)local_2f8 * 20.0);
          }
          lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"baseLineY",9
                               );
          local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,10);
          uStack_2f0 = 0;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
          local_230 = *(longlong *)(param_2 + 0x1d8);
          local_238[0] = 0;
          if (local_230 != 0) {
            *(uint *)(local_230 + 8) = *(int *)(local_230 + 8) + 1U & 0x8fffffff;
          }
          local_228[0] = 0;
          local_220 = 0;
          local_2e8 = lVar9;
          FUN_1435901e0(local_228,&local_2f8);
          FUN_1435aef90(local_238,0);
          FUN_1434e64f0(&local_2f8);
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
          pcVar10 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_238,local_2d8);
          if (*pcVar10 == '\0') {
            fVar15 = fVar19 - 20.0;
          }
          else {
            FUN_14360f380(local_2d8,&local_res20,&local_2f8);
            fVar15 = (float)((double)local_2f8 * 20.0);
          }
          lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),
                                &DAT_145af4d5c,2);
          local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,10);
          uStack_2f0 = 0;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
          local_260 = *(longlong *)(param_2 + 0x1d8);
          local_268[0] = 0;
          if (local_260 != 0) {
            *(uint *)(local_260 + 8) = *(int *)(local_260 + 8) + 1U & 0x8fffffff;
          }
          local_258[0] = 0;
          local_250 = 0;
          local_2e8 = lVar9;
          FUN_1435901e0(local_258,&local_2f8);
          FUN_1435aef90(local_268,0);
          FUN_1434e64f0(&local_2f8);
          piVar1 = (int *)(lVar9 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(lVar9);
          }
          FUN_1432c5960(local_e0,DAT_146b62f28);
          pcVar10 = (char *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_res20,local_268,local_2d8);
          pRVar8 = pRVar13;
          if (*pcVar10 != '\0') {
            FUN_143591800(local_2d8,&local_res20,local_e0);
            pRVar8 = (RefCountNTSImpl *)&DAT_145af3922;
            if (local_e0[0] != (RefCountNTSImpl *)0x0) {
              pRVar8 = local_e0[0];
            }
          }
          lVar9 = FUN_14360c060(0x50,lVar3);
          if (lVar9 != 0) {
            pRVar13 = (RefCountNTSImpl *)FUN_14360a240(lVar9);
          }
          if (local_288 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(local_288);
          }
          local_288 = pRVar13;
          FUN_14360c4e0(pRVar13 + 0x10,&local_2b8);
          *(float *)(local_288 + 0x18) = fVar16 * 0.05;
          *(float *)(local_288 + 0x1c) = fVar15 * 0.05;
          *(float *)(local_288 + 0x20) = fVar17;
          *(float *)(local_288 + 0x24) = fVar18;
          if (pRVar8 != (RefCountNTSImpl *)0x0) {
            FUN_143de9050(lVar3,pRVar8,local_288);
          }
          *(float *)(local_288 + 0x4c) =
               -*(float *)(local_288 + 0x1c) + *(float *)(local_288 + 0x4c);
          *(float *)(local_288 + 0x3c) =
               -*(float *)(local_288 + 0x18) + *(float *)(local_288 + 0x3c);
          FUN_14360e070(local_288 + 0x30,*(float *)(local_288 + 0x20) / fVar20,
                        *(float *)(local_288 + 0x24) / fVar19);
          FUN_1433faf80(local_270,local_2b0);
          pbVar2 = (byte *)(*(longlong *)(lVar3 + 0xe0) + 0x15b);
          *pbVar2 = *pbVar2 | 2;
          FUN_143de5880(*(undefined8 *)(param_1 + 0x18));
          Scaleform::StringBuffer::~StringBuffer(local_e0);
          FUN_1434e6250(local_268);
          FUN_1434e6250(local_238);
          FUN_1434e6250(local_208);
          FUN_1434e6250(local_1d8);
          FUN_1434e6250(local_1a8);
          FUN_1434e6250(local_178);
          (**(code **)(*(longlong *)pRVar12 + 0x10))(pRVar12);
          FUN_1434e6250(local_148);
          if (local_288 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(local_288);
          }
          FUN_1434e64f0(local_2d8);
          return;
        }
        goto LAB_1435f7e0b;
      }
      pRVar12 = (RefCountNTSImpl *)local_2f8[3];
      pRVar8 = pRVar12;
      if (pRVar12 != (RefCountNTSImpl *)0x0) {
        (**(code **)(*(longlong *)pRVar12 + 8))(pRVar12);
      }
LAB_1435f7ac8:
      local_2b8 = pRVar8;
      if (pRVar12 == (RefCountNTSImpl *)0x0) goto LAB_1435f76b2;
      (**(code **)(*(longlong *)pRVar12 + 0x30))(pRVar12,&local_2f8);
      fVar20 = (float)(uint)((int)uStack_2f0 - (int)local_2f8);
      fVar19 = (float)(uint)(uStack_2f0._4_4_ - local_2f8._4_4_);
      fVar18 = fVar19 * 20.0;
      fVar17 = fVar20 * 20.0;
      if ((fVar20 != 0.0) && (fVar19 != 0.0)) goto LAB_1435f76b2;
      Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x18),&local_res20);
      FUN_1434a1590(lVar3 + 0x18,
                    "%s.setImageSubstitutions() failed for #%d element - image has one zero dimension"
                    ,*(undefined8 *)CONCAT44(uStackX_24,local_res20),param_3);
      piVar1 = (int *)(CONCAT44(uStackX_24,local_res20) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (lVar9 != 0) {
        FUN_1432de450(lVar9);
      }
    }
    FUN_1434e6250(local_178);
    if (pRVar12 != (RefCountNTSImpl *)0x0) {
      (**(code **)(*(longlong *)pRVar12 + 0x10))(pRVar12);
    }
  }
  FUN_1434e6250(local_148);
  if (local_288 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_288);
  }
LAB_1435f7ecd:
  if (9 < ((byte)local_2d8[0] & 0x1f)) {
    if ((local_2d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_2d8);
    }
    else {
      *local_2d0 = *local_2d0 + -1;
      if (*local_2d0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435f7f70 FUN_1435f7f70 body=195 status=ok
// SIG undefined FUN_1435f7f70(void)

void FUN_1435f7f70(undefined8 *param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3 - 1;
  if (0xf < uVar1) {
    return;
  }
  do {
    switch(IMAGE_DOS_HEADER_140000000.e_magic +
           (&switchD_1435f7fae::switchdataD_1435f8034)[(int)uVar1]) {
    case (char *)0x1435f7fb0:
      (**(code **)(**(longlong **)(param_2 + 0x38) + 8))
                (*(longlong **)(param_2 + 0x38),2,"Reading chained multiname into itself.");
      uVar1 = *param_3 - 1;
      if (0xf < uVar1) {
        return;
      }
      break;
    case (char *)0x1435f7fd1:
      FUN_1435aedf0(param_3,*param_1);
    case (char *)0x1435f7fdc:
      FUN_14360e8c0(param_2,*(undefined8 *)*param_1);
      if (*(char *)(param_2 + 0xb8) != '\0') {
        return;
      }
      FUN_1434f0700(param_3 + 2,*(undefined8 *)(*(longlong *)*param_1 + 0x10));
      *param_3 = *param_3 & 0xfffffffc;
      FUN_143611f90(*param_1);
      return;
    case (char *)0x1435f8013:
      FUN_1435aedf0(param_3,*param_1);
      return;
    case (char *)0x1435f801e:
      return;
    }
  } while( true );
}



// FUNCTION 1435f8080 FUN_1435f8080 body=166 status=ok
// SIG undefined FUN_1435f8080(void)

longlong * FUN_1435f8080(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = param_1 + 0x22;
  *(uint *)(param_1 + 1) = param_3;
  *param_1 = param_2 + 0x58;
  lVar1 = *(longlong *)(param_2 + 0x48);
  *plVar3 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = lVar1;
  if (param_3 != 0) {
    plVar2 = (longlong *)*param_1;
    if (param_3 < 9) {
      plVar3 = param_1 + 2;
    }
    else {
      FUN_1436130d0(plVar3,param_3);
      plVar3 = (longlong *)*plVar3;
    }
    _guard_xfg_dispatch_icall_nop
              (plVar3,(void *)(*plVar2 + (ulonglong)(ushort)((short)param_3 - 1) * -0x20),
               (ulonglong)param_3 * 0x20);
    *plVar2 = *plVar2 + (ulonglong)param_3 * -0x20;
  }
  return param_1;
}



// FUNCTION 1435f8130 FUN_1435f8130 body=784 status=ok
// SIG undefined FUN_1435f8130(void)

void FUN_1435f8130(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong *local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  
  uVar4 = 0;
  local_100 = 0xffffffffffffffff;
  uStack_f8 = 0xffffffffffffffff;
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  local_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffffffffffff;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uVar1 = *(undefined8 *)(lVar5 + 0x300);
  FUN_1435ee8b0(uVar1,param_2,&local_100);
  FUN_1434a3e20(&local_118,&local_118,1);
  lVar7 = local_110;
  lVar6 = local_118;
  puVar2 = (undefined8 *)(local_118 + -0x30 + local_110 * 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = 0;
    *(uint *)(puVar2 + 3) = local_e8;
    puVar2[4] = local_e0;
    puVar2[5] = local_d8;
    if ((local_e8 >> 6 & 1) != 0) {
      puVar2[2] = local_f0;
      (**(code **)(*local_f0 + 8))(local_f0,puVar2,puVar2[4]);
    }
  }
  if (*param_4 != 0) {
    do {
      local_c0 = (longlong *)0x0;
      local_d0 = 0xffffffffffffffff;
      uStack_c8 = 0xffffffffffffffff;
      local_b8 = 0;
      FUN_1435ee8b0(uVar1,uVar4 * 0x20 + param_5,&local_d0);
      FUN_1434a3e20(&local_118,&local_118,lVar7 + 1);
      lVar7 = local_110;
      lVar6 = local_118;
      puVar2 = (undefined8 *)(local_118 + -0x30 + local_110 * 0x30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0xffffffffffffffff;
        puVar2[1] = 0xffffffffffffffff;
        puVar2[2] = 0;
        *(uint *)(puVar2 + 3) = local_b8;
        puVar2[4] = local_b0;
        puVar2[5] = local_a8;
        if ((local_b8 >> 6 & 1) != 0) {
          puVar2[2] = local_c0;
          (**(code **)(*local_c0 + 8))(local_c0,puVar2,puVar2[4]);
        }
      }
      if ((local_b8 >> 6 & 1) != 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0,&local_d0,local_b0);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *param_4);
  }
  local_68 = *(undefined8 *)(*(longlong *)(lVar5 + 0x300) + 0x10);
  local_70 = &local_a0;
  local_60 = &local_100;
  if (*param_4 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = lVar6 + 0x30;
  }
  local_48 = (int)lVar7 + -1;
  local_40 = *(undefined8 *)(param_1 + 0x50);
  local_58 = lVar6;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 8))(*(longlong **)(param_1 + 0x48),&local_70);
  FUN_1435ee5b0(uVar1,&local_a0,param_3);
  if ((local_88 >> 6 & 1) != 0) {
    (**(code **)(*local_90 + 0x10))(local_90,&local_a0,local_80);
    local_90 = (longlong *)0x0;
  }
  local_88 = 0;
  if ((local_e8 >> 6 & 1) != 0) {
    (**(code **)(*local_f0 + 0x10))(local_f0,&local_100,local_e0);
    local_f0 = (longlong *)0x0;
  }
  local_e8 = 0;
  lVar5 = lVar6 + -0x30 + lVar7 * 0x30;
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    if ((*(uint *)(lVar5 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x10))
                (*(longlong **)(lVar5 + 0x10),lVar5,*(undefined8 *)(lVar5 + 0x20));
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    *(undefined4 *)(lVar5 + 0x18) = 0;
    lVar5 = lVar5 + -0x30;
  }
  if (lVar6 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar6);
  }
  return;
}



// FUNCTION 1435f8450 FUN_1435f8450 body=118 status=ok
// SIG undefined FUN_1435f8450(void)

void FUN_1435f8450(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 3) & 0x8f;
  if (uVar2 == 6) {
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
  }
  else if (uVar2 == 7) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)(param_3 - 0x18));
  }
  else if (7 < uVar2) {
    if (10 < uVar2) {
      if (uVar2 != 0xb) goto LAB_1435f84a2;
      param_3 = param_3 & 0xfffffffffffffffd;
    }
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
LAB_1435f84a2:
  plVar1 = (longlong *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = plVar1;
  *(undefined8 **)(*plVar1 + 8) = param_2;
  *plVar1 = (longlong)param_2;
  return;
}



// FUNCTION 1435f84d0 FUN_1435f84d0 body=138 status=ok
// SIG undefined FUN_1435f84d0(void)

void FUN_1435f84d0(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 3) & 0x8f;
  if (uVar2 == 6) {
    piVar1 = (int *)(param_3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(param_3);
    }
  }
  else if (uVar2 == 7) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)(param_3 - 0x18));
  }
  else if (7 < uVar2) {
    if (10 < uVar2) {
      if (uVar2 != 0xb) goto LAB_1435f8530;
      param_3 = param_3 & 0xfffffffffffffffd;
    }
    if ((*(uint *)(param_3 + 8) & 0x3fffff) != 0) {
      *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) - 1;
      FUN_1434ef880(param_3);
    }
  }
LAB_1435f8530:
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  *param_2 = -1;
  param_2[1] = -1;
  return;
}



// FUNCTION 1435f8560 FUN_1435f8560 body=801 status=ok
// SIG undefined FUN_1435f8560(void)

undefined8 FUN_1435f8560(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong local_res8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [2];
  ulonglong local_80;
  uint local_78 [2];
  int *piStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_58 [2];
  uint local_48 [2];
  int *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar2 = *(longlong *)(lVar7 + 0x88);
  lVar5 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x3b8),param_3);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
  local_80 = *(ulonglong *)(*(longlong *)(lVar7 + 0x88) + 0x1d8);
  local_88[0] = 0;
  if (local_80 != 0) {
    *(uint *)(local_80 + 8) = *(int *)(local_80 + 8) + 1U & 0x8fffffff;
  }
  local_78[0] = 10;
  piStack_70 = (int *)0x0;
  uStack_60 = CONCAT44(uStack_8c,uStack_90);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  local_68 = lVar5;
  FUN_1435aef90(local_88,0);
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar5);
  }
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar5);
  }
  local_48[0] = 0;
  local_40 = (int *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_1435b1b30(param_2,local_58,local_88,0);
  if (((((local_48[0] & 0x1f) != 0) && (local_58[0] != 1)) &&
      ((((byte)local_58[0] >> 1 & 1) == 0 || ((local_58[0] & 0xfffffffffffffffd) != 0)))) ||
     ((4 < *(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x1fU ||
      ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) == 0)))) {
    if (((local_48[0] & 0x1f) == 0) ||
       ((local_58[0] == 1 ||
        (((local_58[0] >> 1 & 1) != 0 && ((local_58[0] & 0xfffffffffffffffd) == 0)))))) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    goto LAB_1435f87b2;
  }
  lVar5 = 0;
  if ((*(ushort *)(*(longlong *)(param_2 + 0x88) + 0x6a) >> 9 & 1) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x88);
  }
  if (lVar5 == 0) {
LAB_1435f86d9:
    lVar5 = 0;
  }
  else {
    lVar6 = (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 0x28))
                      (lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4);
    lVar5 = lVar6 + -0x48;
    if (lVar6 == 0) goto LAB_1435f86d9;
  }
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x3b8),param_3);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  lVar7 = FUN_1433d5ce0(*(longlong *)(lVar5 + 0x18) + 0xd8,&local_res8,1);
  if (lVar7 == 0) {
LAB_1435f8768:
    if (*(char *)(lVar2 + 0xb8) != '\0') {
      FUN_1435cc020(lVar2);
    }
    uVar9 = 0;
  }
  else {
    lVar5 = lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4;
    (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 0x70))(lVar5,1);
    uVar8 = *(ulonglong *)(lVar5 + 0x10);
    if (uVar8 == 0) {
      uVar8 = *(ulonglong *)(lVar5 + 8);
    }
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar8 - 1;
    }
    if (uVar8 == 0) goto LAB_1435f8768;
    uVar3 = *(int *)(uVar8 + 8) + 1;
    uVar4 = uVar3 & 0x8fffffff;
    *(uint *)(uVar8 + 8) = uVar4;
    if (uVar8 == 0) goto LAB_1435f8768;
    if (((uVar8 & 1) == 0) && ((uVar3 & 0x3fffff) != 0)) {
      *(uint *)(uVar8 + 8) = uVar4 - 1;
      FUN_1434ef880();
    }
    uVar9 = 1;
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1435f87b2:
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_48[0] = local_48[0] & 0xfffffde0;
      local_40 = (int *)0x0;
      uStack_38 = 0;
      local_30 = 0;
    }
  }
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      *piStack_70 = *piStack_70 + -1;
      if (*piStack_70 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_78[0] = local_78[0] & 0xfffffde0;
      piStack_70 = (int *)0x0;
      local_68 = 0;
      uStack_60 = 0;
    }
  }
  if (((local_80 != 0) && ((local_80 & 1) == 0)) && ((*(uint *)(local_80 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_80 + 8) = *(uint *)(local_80 + 8) - 1;
    FUN_1434ef880();
  }
  return uVar9;
}



// FUNCTION 1435f8890 FUN_1435f8890 body=948 status=ok
// SIG undefined FUN_1435f8890(void)

undefined8 FUN_1435f8890(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong local_res8;
  uint local_98;
  undefined4 uStack_94;
  int *piStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  int *piStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x88);
  uVar6 = FUN_143360a60(*(undefined8 *)(lVar2 + 0x3b8),param_3);
  local_78 = 10;
  piStack_70 = (int *)0x0;
  *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 2;
  local_50 = *(longlong *)(lVar3 + 0x1d8);
  local_58[0] = 0;
  if (local_50 != 0) {
    *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
  }
  local_68._0_4_ = (undefined4)uVar6;
  local_68._4_4_ = (undefined4)(uVar6 >> 0x20);
  local_48 = 10;
  uStack_44 = uStack_74;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
  local_68 = uVar6;
  FUN_1435aef90(local_58,0);
  piVar1 = (int *)(uVar6 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar6);
  }
  piVar1 = (int *)(uVar6 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar6);
  }
  local_98 = 0;
  piStack_90 = (int *)0x0;
  pcVar7 = (char *)(**(code **)(*param_2 + 0x28))(param_2,&local_res8,local_58,&local_98);
  if (*pcVar7 == '\0') {
    if ((*(int *)(param_2[5] + 0x90) - 0x1fU < 5) &&
       ((~(*(byte *)(param_2[5] + 0x88) >> 5) & 1) != 0)) {
      lVar9 = 0;
      if ((*(ushort *)(param_2[0x11] + 0x6a) >> 9 & 1) != 0) {
        lVar9 = param_2[0x11];
      }
      if (lVar9 == 0) {
LAB_1435f89d8:
        lVar9 = 0;
      }
      else {
        lVar8 = (**(code **)(*(longlong *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4) + 0x28))
                          (lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4);
        lVar9 = lVar8 + -0x48;
        if (lVar8 == 0) goto LAB_1435f89d8;
      }
      local_res8 = FUN_143360a60(*(undefined8 *)(lVar2 + 0x3b8),param_3);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      lVar9 = FUN_1433d5ce0(*(longlong *)(lVar9 + 0x18) + 0xd8,&local_res8,1);
      if (lVar9 == 0) {
LAB_1435f8ae4:
        if (*(char *)(lVar3 + 0xb8) != '\0') {
          FUN_1435cc020(lVar3);
        }
        FUN_142055bf0(param_4);
        uVar10 = 0;
      }
      else {
        lVar8 = lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4;
        (**(code **)(*(longlong *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 0x6d) * 4) + 0x70))(lVar8,1)
        ;
        uVar6 = *(ulonglong *)(lVar8 + 0x10);
        if (uVar6 == 0) {
          uVar6 = *(ulonglong *)(lVar8 + 8);
        }
        if ((uVar6 & 1) != 0) {
          uVar6 = uVar6 - 1;
        }
        if (uVar6 == 0) goto LAB_1435f8ae4;
        uVar4 = *(int *)(uVar6 + 8) + 1;
        uVar5 = uVar4 & 0x8fffffff;
        *(uint *)(uVar6 + 8) = uVar5;
        if (uVar6 == 0) goto LAB_1435f8ae4;
        if (((uVar6 & 1) == 0) && ((uVar4 & 0x3fffff) != 0)) {
          *(uint *)(uVar6 + 8) = uVar5 - 1;
          FUN_1434ef880(uVar6);
        }
        local_78 = 0xc;
        piStack_70 = (int *)0x0;
        *(uint *)(uVar6 + 8) = (*(int *)(uVar6 + 8) + 1U & 0x8fffffff) + 1 & 0x8fffffff;
        local_68 = uVar6;
        FUN_143603d30(&local_98);
        local_98 = local_78;
        uStack_94 = uStack_74;
        piStack_90 = piStack_70;
        local_88 = local_68;
        uStack_80 = CONCAT44(uStack_5c,uStack_60);
        if (((uVar6 & 1) == 0) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880(uVar6);
        }
        FUN_1435ee8b0(lVar2,&local_98,param_4);
        uVar10 = 1;
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      if (*(char *)(lVar3 + 0xb8) != '\0') {
        FUN_1435cc020(lVar3);
      }
      if ((*(uint *)(param_4 + 0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(param_4 + 0x10) + 0x10))
                  (*(longlong **)(param_4 + 0x10),param_4,*(undefined8 *)(param_4 + 0x20));
        *(undefined8 *)(param_4 + 0x10) = 0;
      }
      *(undefined4 *)(param_4 + 0x18) = 0;
      uVar10 = 0;
    }
  }
  else {
    FUN_1435ee8b0(lVar2,&local_98,param_4);
    if (*(char *)(lVar3 + 0xb8) == '\0') {
      uVar10 = 1;
    }
    else {
      FUN_1435cc020(lVar3);
      uVar10 = 0;
    }
  }
  uVar4 = local_98 & 0x1f;
  if (9 < uVar4) {
    if ((local_98 >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(local_88 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
          uVar6 = local_88;
          if ((local_88 & 1) != 0) {
            local_88 = local_88 - 1;
            goto LAB_1435f8c17;
          }
        }
        else {
          if (1 < uVar4 - 0xd) goto LAB_1435f8c17;
          uVar6 = uStack_80;
          if ((uStack_80 & 1) != 0) {
            uStack_80 = uStack_80 - 1;
            goto LAB_1435f8c17;
          }
        }
        if ((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *piStack_90 = *piStack_90 + -1;
      if (*piStack_90 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_98 = local_98 & 0xfffffde0;
      piStack_90 = (int *)0x0;
      local_88 = 0;
      uStack_80 = 0;
    }
  }
LAB_1435f8c17:
  FUN_1434e6250(local_58);
  return uVar10;
}



// FUNCTION 1435f8c50 FUN_1435f8c50 body=1069 status=ok
// SIG undefined FUN_1435f8c50(void)

undefined8 FUN_1435f8c50(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong local_res8;
  longlong local_res10;
  undefined8 local_res18;
  uint local_4a8 [2];
  int *local_4a0;
  ulonglong uStack_498;
  ulonglong local_490;
  undefined4 local_488 [2];
  ulonglong local_480;
  uint local_478;
  undefined4 uStack_474;
  int *piStack_470;
  longlong local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  ulonglong *puStack_450;
  longlong local_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined1 local_438 [1024];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x88);
  local_res18 = param_3;
  lVar7 = FUN_143360a60(*(undefined8 *)(lVar2 + 0x3b8),param_3);
  local_458 = 10;
  puStack_450 = (ulonglong *)0x0;
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 2;
  local_480 = *(ulonglong *)(lVar3 + 0x1d8);
  local_488[0] = 0;
  if (local_480 != 0) {
    *(uint *)(local_480 + 8) = *(int *)(local_480 + 8) + 1U & 0x8fffffff;
  }
  local_478 = 10;
  uStack_474 = uStack_454;
  piStack_470 = (int *)0x0;
  uStack_460 = CONCAT44(uStack_43c,uStack_440);
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  local_468 = lVar7;
  local_448 = lVar7;
  FUN_1435aef90(local_488,0);
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  if ((*(int *)(param_2[5] + 0x90) - 0x1fU < 5) && ((~(*(byte *)(param_2[5] + 0x88) >> 5) & 1) != 0)
     ) {
    lVar7 = 0;
    if ((*(ushort *)(param_2[0x11] + 0x6a) >> 9 & 1) != 0) {
      lVar7 = param_2[0x11];
    }
    if (lVar7 == 0) {
LAB_1435f8d7b:
      lVar7 = 0;
    }
    else {
      lVar8 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 0x28))
                        (lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4);
      lVar7 = lVar8 + -0x48;
      if (lVar8 == 0) goto LAB_1435f8d7b;
    }
    local_res10 = FUN_143360a60(*(undefined8 *)(lVar2 + 0x3b8),param_3);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    lVar7 = FUN_1433d5ce0(*(longlong *)(lVar7 + 0x18) + 0xd8,&local_res10,1);
    if (lVar7 != 0) {
      lVar8 = lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4;
      (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 0x70))(lVar8,1);
      uVar10 = *(ulonglong *)(lVar8 + 0x10);
      if (uVar10 == 0) {
        uVar10 = *(ulonglong *)(lVar8 + 8);
      }
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar10 - 1;
      }
      if (uVar10 != 0) {
        uVar4 = *(int *)(uVar10 + 8) + 1;
        uVar5 = uVar4 & 0x8fffffff;
        *(uint *)(uVar10 + 8) = uVar5;
        if (uVar10 != 0) {
          if (((uVar10 & 1) == 0) && ((uVar4 & 0x3fffff) != 0)) {
            *(uint *)(uVar10 + 8) = uVar5 - 1;
            FUN_1434ef880();
          }
          FUN_1432c2f70(&local_res8);
          puStack_450 = &local_res8;
          local_458 = 0;
          FUN_1433561d0(local_438,&local_458);
          FUN_1433563e0(local_438,
                        "Property \'{0}\' already exists as a DisplayObject. SetMember aborted.");
          FUN_143386e30(local_438,&local_res18);
          Scaleform::MsgFormat::FinishFormatD(local_438);
          FUN_1433562f0(local_438);
          (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))
                    ((longlong *)(lVar2 + 0x28),1,(local_res8 & 0xfffffffffffffffc) + 0xc);
          iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                            ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
          if (iVar6 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
          }
          piVar1 = (int *)(local_res10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          uVar11 = 0;
          goto LAB_1435f8fed;
        }
      }
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  local_4a8[0] = 0;
  local_4a0 = (int *)0x0;
  FUN_1435ee5b0(lVar2,param_4,local_4a8);
  pcVar9 = (char *)(**(code **)(*param_2 + 0x20))(param_2,&local_res18,local_488,local_4a8);
  if (*pcVar9 == '\0') {
    if (*(char *)(lVar3 + 0xb8) != '\0') {
      FUN_1435cc020(lVar3);
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  uVar4 = local_4a8[0] & 0x1f;
  if (9 < uVar4) {
    if ((local_4a8[0] >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(uStack_498 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
          uVar10 = uStack_498;
          if ((uStack_498 & 1) != 0) {
            uStack_498 = uStack_498 - 1;
            goto LAB_1435f8fed;
          }
        }
        else {
          if (1 < uVar4 - 0xd) goto LAB_1435f8fed;
          uVar10 = local_490;
          if ((local_490 & 1) != 0) {
            local_490 = local_490 - 1;
            goto LAB_1435f8fed;
          }
        }
        if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_4a0 = *local_4a0 + -1;
      if (*local_4a0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_4a8[0] = local_4a8[0] & 0xfffffde0;
      local_4a0 = (int *)0x0;
      uStack_498 = 0;
      local_490 = 0;
    }
  }
LAB_1435f8fed:
  if (9 < ((byte)local_478 & 0x1f)) {
    if ((local_478 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_478);
    }
    else {
      *piStack_470 = *piStack_470 + -1;
      if (*piStack_470 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_478 = local_478 & 0xfffffde0;
      piStack_470 = (int *)0x0;
      local_468 = 0;
      uStack_460 = 0;
    }
  }
  if (((local_480 != 0) && ((local_480 & 1) == 0)) && ((*(uint *)(local_480 + 8) & 0x3fffff) != 0))
  {
    *(uint *)(local_480 + 8) = *(uint *)(local_480 + 8) - 1;
    FUN_1434ef880();
  }
  return uVar11;
}



// FUNCTION 1435f9090 FUN_1435f9090 body=1432 status=ok
// SIG undefined FUN_1435f9090(void)

undefined8
FUN_1435f9090(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
             longlong param_5,ulonglong param_6)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  uint in_stack_fffffffffffffed8;
  uint local_118;
  undefined4 uStack_114;
  int *piStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  uint uStack_f4;
  int *piStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  uint local_d8 [2];
  int *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  undefined8 uStack_98;
  uint local_90 [2];
  undefined8 local_88;
  undefined4 local_70 [2];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar2 = *(longlong *)(lVar10 + 0x88);
  local_res10 = lVar10;
  local_res18 = param_3;
  uVar6 = FUN_143360a60(*(undefined8 *)(lVar10 + 0x3b8),param_4);
  local_118 = 10;
  piStack_110 = (int *)0x0;
  *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 2;
  local_68 = *(longlong *)(lVar2 + 0x1d8);
  local_70[0] = 0;
  if (local_68 != 0) {
    *(uint *)(local_68 + 8) = *(int *)(local_68 + 8) + 1U & 0x8fffffff;
  }
  local_108._0_4_ = (undefined4)uVar6;
  local_108._4_4_ = (undefined4)(uVar6 >> 0x20);
  local_60 = 10;
  uStack_5c = uStack_114;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = (undefined4)local_108;
  uStack_4c = local_108._4_4_;
  uStack_48 = uStack_100;
  uStack_44 = uStack_fc;
  *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
  local_108 = uVar6;
  FUN_1435aef90(local_70,0);
  piVar1 = (int *)(uVar6 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar6);
  }
  piVar1 = (int *)(uVar6 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(uVar6);
  }
  local_90[0] = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_1435b1b30(param_2,&local_a0,local_70,0);
  if ((((local_90[0] & 0x1f) == 0) || (local_a0 == 1)) ||
     ((((byte)local_a0 >> 1 & 1) != 0 && ((local_a0 & 0xfffffffffffffffd) == 0)))) {
    uVar9 = 0;
    goto LAB_1435f9601;
  }
  piStack_f0 = (int *)0x0;
  local_d8[0] = 0;
  local_f8 = 0;
  local_d0 = (int *)0x0;
  uVar5 = (uint)local_a0 & 3;
  if ((local_a0 & 3) == 0) {
    in_stack_fffffffffffffed8 = 0;
    pcVar7 = (char *)FUN_1435ac440(local_a0,local_res8,lVar2,&local_f8,local_90,0,0);
    if (*pcVar7 != '\0') goto LAB_1435f92b3;
LAB_1435f9452:
    FUN_1435cc020(lVar2);
    uVar9 = 0;
  }
  else {
    if (uVar5 == 1) {
      puVar8 = (uint *)(local_a0 & 0xfffffffffffffffe);
      if (puVar8 != &local_f8) {
        local_f8 = *puVar8;
        uStack_f4 = puVar8[1];
        piStack_f0 = *(int **)(puVar8 + 2);
        uStack_e8 = *(ulonglong *)(puVar8 + 4);
        uStack_e0 = *(ulonglong *)(puVar8 + 6);
        uVar5 = local_f8 & 0x1f;
        if (9 < uVar5) {
          if ((local_f8 >> 9 & 1) == 0) {
            if (uVar5 == 10) {
              *(int *)(uStack_e8 + 0x18) = *(int *)(uStack_e8 + 0x18) + 1;
            }
            else if ((10 < uVar5) &&
                    (((uVar6 = uStack_e8, uVar5 < 0xd || (uVar6 = uStack_e0, uVar5 < 0xf)) &&
                     (uVar6 != 0)))) {
              *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
              *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) & 0x8fffffff;
            }
          }
          else {
            *piStack_f0 = *piStack_f0 + 1;
          }
        }
      }
    }
    else if (uVar5 == 2) {
      uVar6 = local_a0 & 0xfffffffffffffffd;
      if (uVar6 != 0) {
        *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
      }
      local_b8._4_4_ = (undefined4)(uVar6 >> 0x20);
      local_f8 = 0xc;
      uStack_e8 = CONCAT44(local_b8._4_4_,(uint)local_a0) & 0xfffffffffffffffd;
      uStack_e0 = CONCAT44(uStack_ac,uStack_b0);
      local_b8 = uVar6;
    }
LAB_1435f92b3:
    if (param_6 == 0) {
      local_118 = 0xc;
      piStack_110 = (int *)0x0;
      if (param_2 != 0) {
        *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
      }
      local_res8[0] = 0;
      local_108 = param_2;
      FUN_1435ce880(lVar2,&local_f8,&local_118,local_d8,local_res8,0,
                    in_stack_fffffffffffffed8 & 0xffffff00,1);
      uVar5 = local_118 & 0x1f;
      if (9 < uVar5) {
        if ((local_118 >> 9 & 1) == 0) {
          if (uVar5 == 10) {
            piVar1 = (int *)(local_108 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            uVar6 = local_108;
            if ((uVar5 != 0xb) && (uVar5 != 0xc)) {
              if (1 < uVar5 - 0xd) goto LAB_1435f941e;
              uVar6 = CONCAT44(uStack_fc,uStack_100);
            }
            if ((((uVar6 & 1) == 0) && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *piStack_110 = *piStack_110 + -1;
          if (*piStack_110 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
    else {
      uVar11 = (undefined4)param_6;
      FUN_143609c80(&local_b8,param_6 & 0xffffffff);
      lVar4 = local_res10;
      uVar6 = local_b8;
      uVar3 = local_b8;
      for (; local_b8 = uVar3, param_6 != 0; param_6 = param_6 - 1) {
        FUN_1435ee5b0(lVar4,param_5,uVar6);
        uVar6 = uVar6 + 0x20;
        param_5 = param_5 + 0x30;
        lVar10 = local_res10;
        param_3 = local_res18;
        uVar3 = local_b8;
      }
      local_118 = 0xc;
      piStack_110 = (int *)0x0;
      if (param_2 != 0) {
        *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
      }
      local_res8[0] = uVar11;
      local_108 = param_2;
      FUN_1435ce880(lVar2,&local_f8,&local_118,local_d8,local_res8,uVar3,
                    in_stack_fffffffffffffed8 & 0xffffff00,1);
      uVar5 = local_118 & 0x1f;
      if (9 < uVar5) {
        if ((local_118 >> 9 & 1) == 0) {
          if (uVar5 == 10) {
            piVar1 = (int *)(local_108 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            uVar6 = local_108;
            if ((uVar5 != 0xb) && (uVar5 != 0xc)) {
              if (1 < uVar5 - 0xd) goto LAB_1435f93fa;
              uVar6 = CONCAT44(uStack_fc,uStack_100);
            }
            if ((((uVar6 & 1) == 0) && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *piStack_110 = *piStack_110 + -1;
          if (*piStack_110 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
LAB_1435f93fa:
      FUN_14360f5f0(uVar3,CONCAT44(uStack_ac,uStack_b0));
      if (uVar3 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
      }
    }
LAB_1435f941e:
    if (*(char *)(lVar2 + 0xb8) != '\0') goto LAB_1435f9452;
    if (param_3 != 0) {
      FUN_1435ee8b0(lVar10,local_d8,param_3);
    }
    if (*(char *)(lVar2 + 0xb8) != '\0') goto LAB_1435f9452;
    uVar9 = 1;
  }
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      *local_d0 = *local_d0 + -1;
      if (*local_d0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_d8[0] = local_d8[0] & 0xfffffde0;
      local_d0 = (int *)0x0;
      uStack_c8 = 0;
      local_c0 = 0;
    }
  }
  if (9 < ((byte)local_f8 & 0x1f)) {
    if ((local_f8 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_f8);
    }
    else {
      *piStack_f0 = *piStack_f0 + -1;
      if (*piStack_f0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_f8 = local_f8 & 0xfffffde0;
      piStack_f0 = (int *)0x0;
      uStack_e8 = 0;
      uStack_e0 = 0;
    }
  }
LAB_1435f9601:
  FUN_1434e64f0(local_90);
  FUN_1434e6250(local_70);
  return uVar9;
}



// FUNCTION 1435f9630 FUN_1435f9630 body=1236 status=ok
// SIG undefined FUN_1435f9630(void)

undefined8
FUN_1435f9630(longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_b8;
  undefined8 local_b0;
  uint local_a0 [2];
  int *local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  uint local_80;
  undefined4 uStack_7c;
  int *piStack_78;
  uint local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar7 = param_2 & 0xfffffffffffffffd;
  local_80 = 0;
  piStack_78 = (int *)0x0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  piStack_58 = (int *)0x0;
  lVar2 = *(longlong *)(lVar6 + 0x88);
  local_a0[0] = 0;
  local_98 = (int *)0x0;
  if (((byte)param_2 >> 1 & 1) == 0) {
    local_60 = 0xd;
    local_50 = param_3;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    local_50 = CONCAT44(local_50._4_4_,(int)param_3);
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
    local_60 = 0xe;
  }
  if (uVar7 != 0) {
    *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
  }
  uStack_48 = uVar7;
  FUN_143603d30(&local_80);
  local_70 = (uint)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (uint)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_80 = local_60;
  uStack_7c = uStack_5c;
  piStack_78 = piStack_58;
  if ((((param_2 & 1) == 0) && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
    FUN_1434ef880(uVar7);
  }
  uVar4 = (undefined4)param_6;
  lVar10 = CONCAT44(param_6._4_4_,(undefined4)param_6);
  if (lVar10 == 0) {
    local_60 = 0xc;
    piStack_58 = (int *)0x0;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
    param_6._0_4_ = 0;
    local_50 = uVar7;
    FUN_1435ce880(lVar2,&local_80,&local_60,local_a0,&param_6,0,0,1);
    uVar5 = local_60 & 0x1f;
    if (9 < uVar5) {
      if ((local_60 >> 9 & 1) == 0) {
        if (uVar5 == 10) {
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uVar7 = local_50;
          if ((((uVar5 == 0xb) || (uVar5 == 0xc)) || (uVar7 = uStack_48, uVar5 - 0xd < 2)) &&
             ((((uVar7 & 1) == 0 && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *piStack_58 = *piStack_58 + -1;
        if (*piStack_58 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  else {
    FUN_143609c80(&local_b8,(undefined4)param_6);
    lVar9 = local_b8;
    lVar3 = local_b8;
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      local_b8 = lVar3;
      FUN_1435ee5b0(lVar6,param_5,lVar9);
      lVar9 = lVar9 + 0x20;
      param_5 = param_5 + 0x30;
      lVar3 = local_b8;
    }
    piStack_58 = (int *)0x0;
    local_60 = 0xc;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
    param_6._0_4_ = uVar4;
    local_50 = uVar7;
    FUN_1435ce880(lVar2,&local_80,&local_60,local_a0,&param_6,lVar3,0,1);
    uVar5 = local_60 & 0x1f;
    if (9 < uVar5) {
      if ((local_60 >> 9 & 1) == 0) {
        if (uVar5 == 10) {
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uVar7 = local_50;
          if (((((uVar5 == 0xb) || (uVar5 == 0xc)) || (uVar7 = uStack_48, uVar5 - 0xd < 2)) &&
              (((uVar7 & 1) == 0 && (uVar7 != 0)))) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *piStack_58 = *piStack_58 + -1;
        if (*piStack_58 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    FUN_14360f5f0(lVar3,local_b0);
    if (lVar3 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
    }
  }
  if (*(char *)(lVar2 + 0xb8) == '\0') {
    if (param_4 != 0) {
      FUN_1435ee8b0(lVar6,local_a0,param_4);
    }
    uVar8 = 1;
  }
  else {
    FUN_1435cc020(lVar2);
    uVar8 = 0;
  }
  uVar5 = local_a0[0] & 0x1f;
  if (9 < uVar5) {
    if ((local_a0[0] >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar1 = (int *)(uStack_90 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
          uVar7 = uStack_90;
          if ((uStack_90 & 1) != 0) {
            uStack_90 = uStack_90 - 1;
            goto LAB_1435f9a51;
          }
        }
        else {
          if (1 < uVar5 - 0xd) goto LAB_1435f9a51;
          uVar7 = local_88;
          if ((local_88 & 1) != 0) {
            local_88 = local_88 - 1;
            goto LAB_1435f9a51;
          }
        }
        if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_98 = *local_98 + -1;
      if (*local_98 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_a0[0] = local_a0[0] & 0xfffffde0;
      local_98 = (int *)0x0;
      uStack_90 = 0;
      local_88 = 0;
    }
  }
LAB_1435f9a51:
  uVar5 = local_80 & 0x1f;
  if (9 < uVar5) {
    if ((local_80 >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_6c,local_70) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
          if ((local_70 & 1) != 0) {
            return uVar8;
          }
          lVar6 = CONCAT44(uStack_6c,local_70);
        }
        else {
          if (1 < uVar5 - 0xd) {
            return uVar8;
          }
          if ((uStack_68 & 1) != 0) {
            return uVar8;
          }
          lVar6 = CONCAT44(uStack_64,uStack_68);
        }
        if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) - 1;
          FUN_1434ef880();
          return uVar8;
        }
      }
    }
    else {
      *piStack_78 = *piStack_78 + -1;
      if (*piStack_78 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar8;
      }
    }
  }
  return uVar8;
}



// FUNCTION 1435f9b10 FUN_1435f9b10 body=336 status=ok
// SIG undefined FUN_1435f9b10(void)

undefined1 FUN_1435f9b10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38 [2];
  ulonglong local_30;
  uint local_28 [2];
  int *piStack_20;
  longlong local_18;
  undefined8 uStack_10;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar3 = *(longlong *)(lVar4 + 0x88);
  lVar4 = FUN_143360a60(*(undefined8 *)(lVar4 + 0x3b8),param_3);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
  local_30 = *(ulonglong *)(lVar3 + 0x1d8);
  local_38[0] = 0;
  if (local_30 != 0) {
    *(uint *)(local_30 + 8) = *(int *)(local_30 + 8) + 1U & 0x8fffffff;
  }
  local_28[0] = 10;
  piStack_20 = (int *)0x0;
  uStack_10 = CONCAT44(uStack_3c,uStack_40);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  local_18 = lVar4;
  FUN_1435aef90(local_38,0);
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  puVar5 = (undefined1 *)(**(code **)(*param_2 + 0x48))(param_2,local_res8,local_38);
  uVar2 = *puVar5;
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      *piStack_20 = *piStack_20 + -1;
      if (*piStack_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_28[0] = local_28[0] & 0xfffffde0;
      piStack_20 = (int *)0x0;
      local_18 = 0;
      uStack_10 = 0;
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return uVar2;
}



// FUNCTION 1435f9c70 FUN_1435f9c70 body=1500 status=ok
// SIG undefined FUN_1435f9c70(void)

void FUN_1435f9c70(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  bool bVar18;
  longlong *local_res18;
  uint local_88 [2];
  int *local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  
  lVar11 = *(longlong *)(param_2 + 0x30);
  uVar15 = 0;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
  uVar17 = (*(longlong *)(lVar11 + 0x10) - lVar11) + -0x40 >> 3;
  uVar14 = *(ulonglong *)(lVar11 + 0x40);
  while (local_res18 = param_3, uVar14 == 0) {
    uVar15 = uVar15 + 1;
    if (uVar17 <= uVar15) goto LAB_1435f9dc5;
    uVar14 = *(ulonglong *)(lVar11 + 0x40 + uVar15 * 8);
  }
  uVar9 = FUN_143561b20(uVar14);
  plVar5 = local_res18;
  if (uVar15 < uVar17) {
    do {
      local_58 = (longlong *)0x0;
      local_50 = 0;
      lVar13 = uVar15 * 0x40 + uVar9;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      lVar4 = *(longlong *)(lVar11 + 0x20);
      FUN_1435ee8b0(uVar3,lVar13 * 0x20 + *(longlong *)(lVar11 + 0x28),&local_68);
      (**(code **)(*plVar5 + 0x10))(plVar5,**(undefined8 **)(lVar13 * 0x10 + lVar4 + 8),&local_68);
      if ((local_50 >> 6 & 1) != 0) {
        (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
      }
      bVar18 = false;
      if (uVar15 < uVar17) {
        if (uVar9 < 0x3f) {
          uVar14 = uVar14 & ~(1L << (uVar9 & 0x3f));
        }
        else {
          uVar15 = uVar15 + 1;
          bVar18 = uVar15 < uVar17;
          if (!bVar18) goto LAB_1435f9db2;
          uVar14 = *(ulonglong *)(lVar11 + 0x40 + uVar15 * 8);
        }
        while (uVar14 == 0) {
          uVar15 = uVar15 + 1;
          bVar18 = uVar15 < uVar17;
          if (!bVar18) goto LAB_1435f9db2;
          uVar14 = *(ulonglong *)(lVar11 + 0x40 + uVar15 * 8);
        }
        uVar9 = FUN_143561b20(uVar14);
        bVar18 = uVar15 < uVar17;
      }
LAB_1435f9db2:
    } while (bVar18);
  }
LAB_1435f9dc5:
  plVar5 = local_res18;
  cVar6 = (**(code **)(*local_res18 + 8))(local_res18);
  uVar14 = 0;
  if ((cVar6 != '\0') &&
     (lVar11 = *(longlong *)(param_2 + 0x28), uVar15 = uVar14,
     *(longlong *)(lVar11 + 0x28) + *(longlong *)(lVar11 + 0x40) != 0)) {
    do {
      local_58 = (longlong *)0x0;
      local_50 = 0;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      if (((longlong)uVar15 < 0) || (uVar15 < *(ulonglong *)(lVar11 + 0x28))) {
        puVar10 = (undefined8 *)
                  Scaleform::GFx::AS3::Slots::GetSlotNameNode(*(undefined8 *)(lVar11 + 0x30),uVar15)
        ;
      }
      else {
        puVar10 = *(undefined8 **)
                   (((uVar15 & 0xffffffff) - *(ulonglong *)(lVar11 + 0x28)) * 0x40 +
                   *(longlong *)(lVar11 + 0x38));
      }
      iVar2 = *(int *)(puVar10 + 3);
      *(int *)(puVar10 + 3) = iVar2 + 1;
      if (((longlong)uVar15 < 0) || (uVar15 < *(ulonglong *)(lVar11 + 0x28))) {
        piVar16 = (int *)FUN_1434ef150(*(undefined8 *)(lVar11 + 0x30),uVar15);
      }
      else {
        piVar16 = (int *)(*(longlong *)(lVar11 + 0x38) + 0x10 +
                         ((uVar15 & 0xffffffff) - *(ulonglong *)(lVar11 + 0x28)) * 0x40);
      }
      iVar12 = (*piVar16 << 0x15) >> 0x1b;
      if (((iVar12 == 0xb) || (0xc < iVar12)) ||
         ((int)((*(longlong *)(*(longlong *)(piVar16 + 2) + 0x28) << 0x3c) >> 0x3c) != 0)) {
        bVar18 = iVar2 == 0;
        *(int *)(puVar10 + 3) = iVar2;
      }
      else {
        local_88[0] = 0;
        local_80 = (int *)0x0;
        FUN_1435abe90(piVar16,&local_res18,local_88,param_2);
        FUN_1435ee8b0(uVar3,local_88,&local_68);
        (**(code **)(*plVar5 + 0x10))(plVar5,*puVar10,&local_68);
        uVar7 = local_88[0] & 0x1f;
        if (uVar7 < 10) {
LAB_1435f9f9e:
          piVar16 = (int *)(puVar10 + 3);
          *piVar16 = *piVar16 + -1;
          bVar18 = *piVar16 == 0;
        }
        else if ((local_88[0] >> 9 & 1) == 0) {
          if (uVar7 == 10) {
            piVar16 = (int *)(uStack_78 + 0x18);
            *piVar16 = *piVar16 + -1;
            if (*piVar16 == 0) {
              FUN_14335f920();
            }
            goto LAB_1435f9f9e;
          }
          if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
            uVar17 = uStack_78;
            if ((uStack_78 & 1) == 0) {
LAB_1435f9f70:
              if ((uVar17 == 0) || ((*(uint *)(uVar17 + 8) & 0x3fffff) == 0)) goto LAB_1435f9f9e;
              *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
              FUN_1434ef880();
              piVar16 = (int *)(puVar10 + 3);
              *piVar16 = *piVar16 + -1;
              bVar18 = *piVar16 == 0;
            }
            else {
              uStack_78 = uStack_78 - 1;
              piVar16 = (int *)(puVar10 + 3);
              *piVar16 = *piVar16 + -1;
              bVar18 = *piVar16 == 0;
            }
          }
          else {
            if (1 < uVar7 - 0xd) goto LAB_1435f9f9e;
            uVar17 = local_70;
            if ((local_70 & 1) == 0) goto LAB_1435f9f70;
            local_70 = local_70 - 1;
            piVar16 = (int *)(puVar10 + 3);
            *piVar16 = *piVar16 + -1;
            bVar18 = *piVar16 == 0;
          }
        }
        else {
          *local_80 = *local_80 + -1;
          if (*local_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_88[0] = local_88[0] & 0xfffffde0;
          local_80 = (int *)0x0;
          uStack_78 = 0;
          local_70 = 0;
          piVar16 = (int *)(puVar10 + 3);
          *piVar16 = *piVar16 + -1;
          bVar18 = *piVar16 == 0;
        }
      }
      if (bVar18) {
        FUN_14335f920(puVar10);
      }
      if ((local_50 >> 6 & 1) != 0) {
        (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
      }
      if (((longlong)uVar15 < 0) ||
         (uVar15 < (ulonglong)(*(longlong *)(lVar11 + 0x28) + *(longlong *)(lVar11 + 0x40)))) {
        uVar15 = uVar15 + 1;
      }
    } while ((uVar15 & 0xffffffff) <
             (ulonglong)(*(longlong *)(lVar11 + 0x28) + *(longlong *)(lVar11 + 0x40)));
  }
  if (4 < *(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x1fU) {
    return;
  }
  if ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) == 0) {
    return;
  }
  uVar15 = uVar14;
  if ((*(ushort *)(*(ulonglong *)(param_2 + 0x88) + 0x6a) >> 9 & 1) != 0) {
    uVar15 = *(ulonglong *)(param_2 + 0x88);
  }
  if (uVar15 != 0) {
    lVar11 = (**(code **)(*(longlong *)(uVar15 + (ulonglong)*(byte *)(uVar15 + 0x6d) * 4) + 0x28))
                       (uVar15 + (ulonglong)*(byte *)(uVar15 + 0x6d) * 4);
    uVar15 = lVar11 - 0x48;
    if (lVar11 != 0) goto LAB_1435fa05f;
  }
  uVar15 = uVar14;
LAB_1435fa05f:
  lVar11 = *(longlong *)(uVar15 + 0x18);
  uVar17 = uVar14;
  if (*(int *)(lVar11 + 0xe0) != 0) {
    do {
      lVar11 = Scaleform::GFx::DisplayObjContainer::GetChildAt(lVar11,uVar17);
      uVar9 = uVar14;
      if (lVar11 != 0) {
        lVar4 = lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4;
        (**(code **)(*(longlong *)(lVar11 + (ulonglong)*(byte *)(lVar11 + 0x6d) * 4) + 0x70))
                  (lVar4,1);
        uVar9 = *(ulonglong *)(lVar4 + 0x10);
        if (uVar9 == 0) {
          uVar9 = *(ulonglong *)(lVar4 + 8);
        }
        if ((uVar9 & 1) != 0) {
          uVar9 = uVar9 - 1;
        }
        if (uVar9 != 0) {
          uVar7 = *(int *)(uVar9 + 8) + 1;
          uVar8 = uVar7 & 0x8fffffff;
          *(uint *)(uVar9 + 8) = uVar8;
          if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((uVar7 & 0x3fffff) != 0)) {
            *(uint *)(uVar9 + 8) = uVar8 - 1;
            FUN_1434ef880(uVar9);
          }
        }
      }
      Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(uVar9 + 0x88),&local_res18);
      local_88[0] = 0xc;
      *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
      local_80 = (int *)0x0;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      local_58 = (longlong *)0x0;
      local_50 = 0;
      uStack_78 = uVar9;
      FUN_1435ee8b0(uVar3,local_88,&local_68);
      (**(code **)(*plVar5 + 0x10))(plVar5,*local_res18,&local_68);
      if ((local_50 >> 6 & 1) != 0) {
        (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
        local_58 = (longlong *)0x0;
      }
      uVar7 = local_88[0] & 0x1f;
      local_50 = 0;
      if (9 < uVar7) {
        if ((local_88[0] >> 9 & 1) == 0) {
          if (uVar7 == 10) {
            piVar16 = (int *)(uStack_78 + 0x18);
            *piVar16 = *piVar16 + -1;
            if (*piVar16 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
            uVar9 = uStack_78;
            if ((uStack_78 & 1) == 0) {
LAB_1435fa1e9:
              if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              uStack_78 = uStack_78 - 1;
            }
          }
          else if (uVar7 - 0xd < 2) {
            uVar9 = local_70;
            if ((local_70 & 1) == 0) goto LAB_1435fa1e9;
            local_70 = local_70 - 1;
          }
        }
        else {
          *local_80 = *local_80 + -1;
          if (*local_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_88[0] = local_88[0] & 0xfffffde0;
          local_80 = (int *)0x0;
          uStack_78 = 0;
          local_70 = 0;
        }
      }
      plVar1 = local_res18 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        FUN_14335f920();
      }
      lVar11 = *(longlong *)(uVar15 + 0x18);
      uVar7 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(lVar11 + 0xe0));
  }
  return;
}



// FUNCTION 1435fa270 SetArraySize body=26 status=ok
// SIG undefined SetArraySize(void)

undefined1
Scaleform::GFx::AS3ValueObjectInterface::SetArraySize
          (undefined8 param_1,longlong param_2,undefined4 param_3)

{
  FUN_1434b4900(param_2 + 0x40,param_3);
  return 1;
}



// FUNCTION 1435fa290 FUN_1435fa290 body=140 status=ok
// SIG undefined FUN_1435fa290(void)

bool FUN_1435fa290(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((*(uint *)(param_4 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_4 + 0x10) + 0x10))
              (*(longlong **)(param_4 + 0x10),param_4,*(undefined8 *)(param_4 + 0x20));
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  *(undefined4 *)(param_4 + 0x18) = 0;
  bVar3 = param_3 < *(uint *)(param_2 + 0x40);
  if (bVar3) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
    uVar2 = FUN_1434b4f50((uint *)(param_2 + 0x40),param_3);
    FUN_1435ee8b0(uVar1,uVar2,param_4);
  }
  return bVar3;
}



// FUNCTION 1435fa330 FUN_1435fa330 body=236 status=ok
// SIG undefined FUN_1435fa330(void)

undefined8 FUN_1435fa330(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  FUN_1435ee5b0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),param_4,local_28);
  FUN_1434b4fe0(param_2 + 0x40,param_3,local_28);
  uVar2 = local_28[0] & 0x1f;
  if (9 < uVar2) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((((uVar2 == 0xb) || (uVar2 == 0xc)) || (local_18 = local_10, uVar2 - 0xd < 2)) &&
              (((local_18 & 1) == 0 && (local_18 != 0)))) {
        if ((*(uint *)(local_18 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
          FUN_1434ef880();
          return 1;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 1435fa430 FUN_1435fa430 body=228 status=ok
// SIG undefined FUN_1435fa430(void)

void FUN_1435fa430(longlong param_1,longlong param_2,longlong *param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint local_30;
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_2 + 0x40);
  uVar6 = (ulonglong)param_4;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
  if (param_4 < uVar1) {
    if (param_5 < 0) {
      param_5 = uVar1 - param_4;
    }
    local_38 = (longlong *)0x0;
    uVar3 = param_4 + param_5;
    if (uVar1 < param_4 + param_5) {
      uVar3 = uVar1;
    }
    local_30 = 0;
    local_48 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    uVar5 = uVar6;
    while (param_4 < uVar3) {
      uVar4 = FUN_1434b4f50(param_2 + 0x40,uVar6);
      FUN_1435ee8b0(uVar2,uVar4,&local_48);
      (**(code **)(*param_3 + 8))(param_3,uVar5,&local_48);
      param_4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)param_4;
      uVar6 = uVar6 + 1;
    }
    if ((local_30 >> 6 & 1) != 0) {
      (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
    }
  }
  return;
}



// FUNCTION 1435fa520 FUN_1435fa520 body=215 status=ok
// SIG undefined FUN_1435fa520(void)

undefined8 FUN_1435fa520(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  uint local_28 [2];
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  FUN_1435ee5b0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),param_3,local_28);
  FUN_1434b49b0(param_2 + 0x40,local_28);
  uVar2 = local_28[0] & 0x1f;
  if (9 < uVar2) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((((uVar2 == 0xb) || (uVar2 == 0xc)) || (local_18 = local_10, uVar2 - 0xd < 2)) &&
              (((local_18 & 1) == 0 && (local_18 != 0)))) {
        if ((*(uint *)(local_18 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
          FUN_1434ef880();
          return 1;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 1435fa600 FUN_1435fa600 body=157 status=ok
// SIG undefined FUN_1435fa600(void)

undefined8 FUN_1435fa600(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)(param_2 + 0x40);
  iVar2 = *piVar1;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
  if (iVar2 < 1) {
    if (param_3 != 0) {
      if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(param_3 + 0x10) + 0x10))
                  (*(longlong **)(param_3 + 0x10),param_3,*(undefined8 *)(param_3 + 0x20));
        *(undefined8 *)(param_3 + 0x10) = 0;
      }
      *(undefined4 *)(param_3 + 0x18) = 0;
    }
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar4 = FUN_1434b4f50(piVar1,(longlong)(iVar2 + -1));
      FUN_1435ee8b0(uVar3,uVar4,param_3);
    }
    FUN_1434b4900(piVar1,(longlong)(iVar2 + -1));
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1435fa6b0 RemoveElements body=68 status=ok
// SIG undefined RemoveElements(void)

undefined8
Scaleform::GFx::AS3ValueObjectInterface::RemoveElements
          (undefined8 param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x40);
  if (uVar1 <= param_3) {
    return 0;
  }
  if ((int)param_4 < 0) {
    param_4 = uVar1 - param_3;
  }
  if (uVar1 - param_3 < param_4) {
    param_4 = uVar1 - param_3;
  }
  FUN_1434b4e20(param_2 + 0x40,param_3,param_4,0);
  return 1;
}



// FUNCTION 1435fa700 FUN_1435fa700 body=361 status=ok
// SIG undefined FUN_1435fa700(void)

undefined8 FUN_1435fa700(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [2];
  int *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x88);
  lVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(plVar1[0x13] + 0x1c8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
  }
  if (param_3 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = -1;
    do {
      local_40 = local_40 + 1;
    } while (*(char *)(param_3 + local_40) != '\0');
  }
  local_48 = param_3;
  FUN_1435ae830(local_38,uVar4,&local_48);
  lVar3 = FUN_1435c82a0(uVar4,local_38,uVar5);
  if (lVar3 != 0) {
    if (plVar1[0x15] == 0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    cVar2 = FUN_1435b5020(lVar3,*(undefined8 *)(plVar1[0x15] + 0x28));
    if (cVar2 != '\0') {
      uVar4 = 1;
      goto LAB_1435fa7d3;
    }
  }
  uVar4 = 0;
LAB_1435fa7d3:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_28[0] = local_28[0] & 0xfffffde0;
      local_10 = 0;
      local_20 = (int *)0x0;
      uStack_18 = 0;
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return uVar4;
}



// FUNCTION 1435fa870 FUN_1435fa870 body=90 status=ok
// SIG undefined FUN_1435fa870(void)

bool FUN_1435fa870(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x88) + 0x2e8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  cVar3 = FUN_1435b5020(uVar2,*(undefined8 *)(plVar1[0x15] + 0x28));
  return cVar3 != '\0';
}



// FUNCTION 1435fa8d0 FUN_1435fa8d0 body=123 status=ok
// SIG undefined FUN_1435fa8d0(void)

undefined4 FUN_1435fa8d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x88) + 0x2e8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  cVar3 = FUN_1435b5020(uVar2,*(undefined8 *)(plVar1[0x15] + 0x28));
  if (cVar3 == '\0') {
    return 0;
  }
  return *(undefined4 *)(param_2 + 0x48);
}



// FUNCTION 1435fa960 FUN_1435fa960 body=125 status=ok
// SIG undefined FUN_1435fa960(void)

void FUN_1435fa960(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x88) + 0x2e8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  cVar3 = FUN_1435b5020(uVar2,*(undefined8 *)(plVar1[0x15] + 0x28));
  if (cVar3 != '\0') {
    FUN_14361a070(param_2,param_3);
  }
  return;
}



// FUNCTION 1435fa9f0 FUN_1435fa9f0 body=136 status=ok
// SIG undefined FUN_1435fa9f0(void)

ulonglong FUN_1435fa9f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x88) + 0x2e8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  uVar3 = FUN_1435b5020(uVar2,*(undefined8 *)(plVar1[0x15] + 0x28));
  if ((char)uVar3 != '\0') {
    pbVar4 = (byte *)FUN_1435797e0(param_2,local_res8,param_3,param_4);
    uVar3 = (ulonglong)*pbVar4;
  }
  return uVar3;
}



// FUNCTION 1435faa80 FUN_1435faa80 body=146 status=ok
// SIG undefined FUN_1435faa80(void)

bool FUN_1435faa80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x88) + 0x2e8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  cVar3 = FUN_1435b5020(uVar2,*(undefined8 *)(plVar1[0x15] + 0x28));
  if (cVar3 != '\0') {
    FUN_143579840(param_2,param_3,param_4);
  }
  return cVar3 != '\0';
}



// FUNCTION 1435fab20 FUN_1435fab20 body=124 status=ok
// SIG undefined FUN_1435fab20(void)

undefined8 FUN_1435fab20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x88) + 0x2e8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  cVar3 = FUN_1435b5020(uVar2,*(undefined8 *)(plVar1[0x15] + 0x28));
  if (cVar3 == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_2 + 0x50);
}



// FUNCTION 1435fabf0 FUN_1435fabf0 body=154 status=ok
// SIG undefined FUN_1435fabf0(void)

undefined8 FUN_1435fabf0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
      ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) &&
     (*(longlong *)(param_2 + 0x88) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x38);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
      uVar4 = *(ulonglong *)(lVar1 + 0x10 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      if (uVar4 == 0) {
        uVar4 = *(ulonglong *)(lVar1 + 8 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
      }
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar4 - 1;
      }
      uVar3 = FUN_1435eece0(lVar2,param_3,*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x40),uVar4,
                            1);
      return uVar3;
    }
    FUN_142052b90(param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 1435fac90 FUN_1435fac90 body=846 status=ok
// SIG undefined FUN_1435fac90(void)

uint FUN_1435fac90(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  double dVar13;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  double local_a0;
  double dStack_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  uVar9 = *(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18;
  if ((uVar9 < 0xc) &&
     (uVar9 = 0, (~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    if (plVar3 == (longlong *)0x0) {
      uVar9 = 0;
    }
    else {
      local_a0 = 100.0;
      dStack_98 = 100.0;
      dStack_90 = 0.0;
      local_88 = 0x3f800000;
      uStack_80 = 0;
      local_78 = 0x3f80000000000000;
      uStack_70 = 0;
      local_68 = 0.0;
      dStack_60 = 100.0;
      local_58 = 0.0;
      dStack_50 = 0.0;
      local_a8 = 0;
      FUN_14336b690(plVar3,&local_a8);
      iVar10 = (**(code **)(*plVar3 + 0x290))(plVar3);
      dVar6 = dStack_90;
      dVar5 = dStack_98;
      dVar13 = local_a0;
      if (iVar10 == 4) {
        FUN_143dea570(plVar3,param_3);
      }
      else {
        iVar10 = (int)local_a8;
        iVar4 = local_a8._4_4_;
        lVar12 = FUN_1433679a0(plVar3);
        fVar1 = *(float *)(lVar12 + 0xc);
        uVar7 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
        *(undefined1 *)((longlong)param_3 + 0xd6) = uVar7;
        *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x7ff;
        param_3[2] = dVar6;
        param_3[5] = (double)(fVar1 * 100.0);
        param_3[3] = dVar13;
        param_3[4] = dVar5;
        *param_3 = (double)iVar10 * 0.05;
        param_3[1] = (double)iVar4 * 0.05;
        param_3[6] = local_68 * 0.05;
        param_3[7] = local_58;
        param_3[8] = dStack_50;
        param_3[9] = dStack_60;
      }
      dVar13 = (double)(**(code **)(*plVar3 + 0x140))(plVar3);
      param_3[10] = dVar13;
      *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x800;
      local_e8 = 5.26354424712089e-315;
      local_d8 = 0.0078125;
      dStack_c0 = 5.26354424712089e-315;
      dStack_b0 = 0.0078125;
      dStack_e0 = 0.0;
      dStack_d0 = 0.0;
      local_c8 = 0.0;
      local_b8 = 0.0;
      cVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_e8,0);
      if (cVar8 != '\0') {
        *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x1000;
        param_3[0x12] = local_e8;
        param_3[0x13] = dStack_e0;
        param_3[0x14] = local_d8;
        param_3[0x15] = dStack_d0;
        param_3[0x16] = local_c8;
        param_3[0x17] = dStack_c0;
        param_3[0x18] = local_b8;
        param_3[0x19] = dStack_b0;
      }
      local_118 = 5.26354424712089e-315;
      local_108 = 0.0078125;
      dStack_f0 = 5.26354424712089e-315;
      dStack_110 = 0.0;
      dStack_100 = 0.0;
      local_f8 = 0.0;
      cVar8 = (**(code **)(*plVar3 + 0x48))(plVar3,&local_118,0);
      if (cVar8 != '\0') {
        *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x2000;
        param_3[0xc] = local_118;
        param_3[0xd] = dStack_110;
        param_3[0xe] = local_108;
        param_3[0xf] = dStack_100;
        param_3[0x10] = local_f8;
        param_3[0x11] = dStack_f0;
      }
      uVar11 = FUN_14336b350(plVar3);
      lVar12 = FUN_1432cd1e0(uVar11);
      uVar2 = *(ushort *)(lVar12 + 10);
      *(ushort *)((longlong)param_3 + 0xd4) = *(ushort *)((longlong)param_3 + 0xd4) | 0x4000;
      uVar9 = 0x4001;
      *(uint *)(param_3 + 0x1a) = uVar2 & 0xc;
    }
    return uVar9;
  }
  return uVar9 & 0xffffff00;
}



// FUNCTION 1435faff0 FUN_1435faff0 body=2520 status=ok
// SIG undefined FUN_1435faff0(void)

undefined8 FUN_1435faff0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  ushort uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  float *pfVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 local_res10;
  double local_res20;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  if ((0xb < *(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U) ||
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) == 0)) {
    return 0;
  }
  plVar6 = *(longlong **)(param_2 + 0x88);
  bVar13 = false;
  iVar15 = (**(code **)(*plVar6 + 0x290))(plVar6);
  bVar19 = iVar15 != 4;
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xe & 1) != 0) {
    uVar24 = *(undefined4 *)(param_3 + 0x1a);
    uVar16 = FUN_14336b350(plVar6);
    FUN_143362aa0(uVar16,uVar24);
  }
  fVar21 = fStack_dc;
  if (((*(byte *)((longlong)param_3 + 0xd4) >> 5 & 1) != 0) &&
     ((local_res10 = (double)param_3[5],
      ((ulonglong)local_res10 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
      (((ulonglong)local_res10 & 0xfffffffffffff) == 0)))) {
    pfVar17 = (float *)FUN_1433679a0(plVar6);
    local_e8 = *pfVar17;
    fStack_e4 = pfVar17[1];
    fStack_e0 = pfVar17[2];
    local_d8 = *(undefined8 *)(pfVar17 + 4);
    uStack_d0 = *(undefined8 *)(pfVar17 + 6);
    fStack_dc = (float)((double)param_3[5] / 100.0);
    fVar21 = pfVar17[3];
    if (pfVar17[3] != fStack_dc) {
      FUN_1433679d0(plVar6,&local_e8);
      (**(code **)(*plVar6 + 0x1a8))(plVar6,0);
      fVar21 = fStack_dc;
    }
  }
  fStack_dc = fVar21;
  if ((*(byte *)((longlong)param_3 + 0xd4) >> 6 & 1) != 0) {
    (**(code **)(*plVar6 + 0x1d0))(plVar6,*(undefined1 *)((longlong)param_3 + 0xd6));
  }
  if (*(char *)((longlong)param_3 + 0xd4) < '\0') {
    local_res10 = (double)param_3[6] * 20.0;
    if ((((((ulonglong)local_res10 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
         (((ulonglong)local_res10 & 0xfffffffffffff) != 0)) || (local_res10 == -INFINITY)) ||
       (dVar4 = local_res10, local_res10 == INFINITY)) {
      dVar4 = 0.0;
    }
    FUN_14336b4f0(plVar6);
    bVar13 = dVar4 != *(double *)(plVar6[10] + 0x40);
    if (bVar13) {
      *(double *)(plVar6[10] + 0x40) = dVar4;
    }
  }
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 10 & 1) != 0) {
    local_res10 = (double)param_3[9];
    if (((((ulonglong)local_res10 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
        (((ulonglong)local_res10 & 0xfffffffffffff) != 0)) ||
       ((local_res10 == -INFINITY ||
        (uVar24 = SUB84(local_res10,0), uVar25 = (int)((ulonglong)local_res10 >> 0x20),
        local_res10 == INFINITY)))) {
      uVar24 = 0;
      uVar25 = 0x40590000;
    }
    FUN_14336b4f0(plVar6);
    if (*(double *)(plVar6[10] + 0x48) != (double)CONCAT44(uVar25,uVar24)) {
      *(ulonglong *)(plVar6[10] + 0x48) = CONCAT44(uVar25,uVar24);
      bVar13 = true;
    }
  }
  if ((*(byte *)((longlong)param_3 + 0xd5) & 1) != 0) {
    dVar4 = (double)param_3[7];
    FUN_14336b4f0(plVar6);
    lVar7 = plVar6[10];
    dVar4 = _guard_xfg_dispatch_icall_nop(dVar4,360.0);
    if (dVar4 <= 180.0) {
      if (dVar4 < -180.0) {
        dVar4 = dVar4 + 360.0;
      }
    }
    else {
      dVar4 = dVar4 + -360.0;
    }
    if (dVar4 != *(double *)(lVar7 + 0x50)) {
      *(double *)(lVar7 + 0x50) = dVar4;
      bVar13 = true;
    }
  }
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 9 & 1) == 0) {
LAB_1435fb329:
    if (bVar13) goto LAB_1435fb32e;
  }
  else {
    dVar4 = (double)param_3[8];
    FUN_14336b4f0(plVar6);
    lVar7 = plVar6[10];
    dVar4 = _guard_xfg_dispatch_icall_nop(dVar4,360.0);
    if (dVar4 <= 180.0) {
      if (dVar4 < -180.0) {
        dVar4 = dVar4 + 360.0;
      }
    }
    else {
      dVar4 = dVar4 + -360.0;
    }
    if (dVar4 == *(double *)(lVar7 + 0x58)) goto LAB_1435fb329;
    *(double *)(lVar7 + 0x58) = dVar4;
LAB_1435fb32e:
    (**(code **)(*plVar6 + 0x68))(plVar6);
  }
  if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xb & 1) == 0) {
    if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xc & 1) != 0) {
      (**(code **)(*plVar6 + 0x38))(plVar6,param_3 + 0x12);
    }
    if ((*(ushort *)((longlong)param_3 + 0xd4) >> 0xd & 1) != 0) {
      (**(code **)(*plVar6 + 0x50))(plVar6,param_3 + 0xc);
    }
  }
  else {
    dVar4 = _guard_xfg_dispatch_icall_nop((double)param_3[10],180.0);
    (**(code **)(*plVar6 + 0x140))(plVar6);
    if (dVar4 != (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da)) {
      (**(code **)(*plVar6 + 0x138))(plVar6);
    }
  }
  if ((*(byte *)((longlong)param_3 + 0xd4) & 0x1f) == 0) {
    return 1;
  }
  if (!bVar19) {
    *(uint *)((longlong)plVar6 + 0xfc) = *(uint *)((longlong)plVar6 + 0xfc) | 0x2000;
    FUN_143de5880(plVar6);
  }
  (**(code **)(*plVar6 + 0x1a8))(plVar6,0);
  piVar8 = (int *)plVar6[10];
  bVar13 = false;
  puVar18 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
  local_108 = *puVar18;
  fStack_100 = *(float *)(puVar18 + 1);
  fStack_fc = *(float *)((longlong)puVar18 + 0xc);
  local_f8 = *(undefined4 *)(puVar18 + 2);
  uStack_f4 = *(undefined4 *)((longlong)puVar18 + 0x14);
  uStack_f0 = *(undefined4 *)(puVar18 + 3);
  fStack_ec = *(float *)((longlong)puVar18 + 0x1c);
  if ((bVar19) || ((*(byte *)((longlong)param_3 + 0xd4) & 3) == 0)) {
    if ((*(byte *)((longlong)param_3 + 0xd4) & 1) == 0) {
      uVar24 = 0;
      uVar25 = 0;
    }
    else {
      uVar24 = (undefined4)*param_3;
      uVar25 = (undefined4)((ulonglong)*param_3 >> 0x20);
    }
    dVar4 = (double)CONCAT44(uVar25,uVar24);
    if ((*(byte *)((longlong)param_3 + 0xd4) >> 1 & 1) == 0) {
      dVar12 = 0.0;
    }
    else {
      dVar12 = (double)param_3[1];
      dVar4 = (double)CONCAT44(uVar25,uVar24);
    }
  }
  else {
    FUN_143dec900(plVar6,&local_res10,param_3);
    dVar12 = (double)local_res10._4_4_;
    dVar4 = (double)(float)local_res10;
  }
  uVar5 = *(ushort *)((longlong)param_3 + 0xd4);
  if ((uVar5 & 0x1c) != 0) {
    fStack_e0 = (float)piVar8[10];
    fVar21 = (float)piVar8[8];
    fVar1 = (float)piVar8[0xc];
    fVar2 = (float)piVar8[0xd];
    local_d8 = *(undefined8 *)(piVar8 + 0xc);
    uStack_d0 = CONCAT44(fStack_ec,piVar8[0xe]);
    fVar3 = (float)piVar8[9];
    local_e8 = fVar21;
    fStack_e4 = fVar3;
    fStack_dc = fStack_fc;
    dVar9 = _guard_xfg_dispatch_icall_nop((double)fVar1,(double)fVar21);
    dVar22 = (double)fVar1;
    local_res10 = _guard_xfg_dispatch_icall_nop((double)fVar21 * (double)fVar21 + dVar22 * dVar22);
    dVar22 = (double)fVar3;
    local_res20 = _guard_xfg_dispatch_icall_nop(dVar22 * dVar22 + (double)fVar2 * (double)fVar2);
    dVar22 = *(double *)(piVar8 + 6);
    dVar11 = *(double *)(piVar8 + 2) / 100.0;
    dVar10 = *(double *)(piVar8 + 4) / 100.0;
    if (((byte)uVar5 >> 2 & 1) == 0) {
      dVar20 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      dVar20 = (double)param_3[2];
    }
    if ((((uint)((ulonglong)dVar20 >> 0x20) & 0x7ff00000) != 0x7ff00000) ||
       (((ulonglong)dVar20 & 0xfffffffffffff) == 0)) {
      dVar22 = _guard_xfg_dispatch_icall_nop(dVar20,360.0);
      if (dVar22 <= 180.0) {
        if (dVar22 < -180.0) {
          dVar22 = dVar22 + 360.0;
        }
      }
      else {
        dVar22 = dVar22 + -360.0;
      }
      bVar13 = *(double *)(piVar8 + 6) != dVar22;
      if (bVar13) {
        *(double *)(piVar8 + 6) = dVar22;
      }
    }
    if ((*(byte *)((longlong)param_3 + 0xd4) >> 3 & 1) == 0) {
      dVar20 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      dVar20 = (double)param_3[3] / 100.0;
    }
    uVar24 = SUB84(local_res10,0);
    uVar25 = (undefined4)((ulonglong)local_res10 >> 0x20);
    if ((dVar20 != dVar11) && (((ulonglong)dVar20 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
      *(undefined8 *)(piVar8 + 2) = param_3[3];
      if ((local_res10 == 0.0) || (dVar11 = dVar20, 1e+16 < dVar20)) {
        dVar11 = 0.0;
        uVar24 = 0;
        uVar25 = 0x3ff00000;
      }
      bVar13 = true;
    }
    if ((*(byte *)((longlong)param_3 + 0xd4) >> 4 & 1) == 0) {
      dVar20 = (double)Scaleform::GFx::NumberUtil::NaN();
    }
    else {
      dVar20 = (double)param_3[4] / 100.0;
    }
    dVar23 = local_res20;
    if ((dVar20 != dVar10) &&
       (local_res10 = dVar20, ((ulonglong)dVar20 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
      *(undefined8 *)(piVar8 + 4) = param_3[4];
      if ((local_res20 == 0.0) || (dVar10 = dVar20, 1e+16 < dVar20)) {
        dVar10 = 0.0;
        dVar23 = 1.0;
      }
      bVar13 = true;
    }
    FUN_14336d9c0(&local_e8,(float)(dVar11 / (double)CONCAT44(uVar25,uVar24)),
                  (float)(dVar10 / dVar23),(float)((dVar22 * 3.141592653589793) / 180.0 - dVar9));
    local_108 = CONCAT44(fStack_e4,local_e8);
    fStack_100 = fStack_e0;
    fStack_fc = fStack_dc;
    local_f8 = (undefined4)local_d8;
    uStack_f4 = local_d8._4_4_;
    uStack_f0 = (undefined4)uStack_d0;
    fStack_ec = uStack_d0._4_4_;
  }
  dVar22 = dVar4;
  if ((*(byte *)((longlong)param_3 + 0xd4) & 1) == 0) {
    dVar22 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  local_res10 = dVar22;
  if ((((ulonglong)dVar22 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar22 & 0xfffffffffffff) == 0)) {
    if ((dVar22 == -INFINITY) || (dVar22 == INFINITY)) {
      dVar22 = 0.0;
    }
    dVar22 = _guard_xfg_dispatch_icall_nop(dVar22 * 20.0);
    *piVar8 = (int)dVar22;
    fVar21 = (float)(int)dVar22;
    if (fStack_fc != fVar21) {
      bVar13 = true;
      fStack_fc = fVar21;
    }
  }
  dVar22 = dVar12;
  if ((*(byte *)((longlong)param_3 + 0xd4) >> 1 & 1) == 0) {
    dVar22 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  local_res10 = dVar22;
  if ((((ulonglong)dVar22 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar22 & 0xfffffffffffff) != 0)) {
LAB_1435fb89e:
    fVar21 = fStack_ec;
    if (!bVar13) goto LAB_1435fb8d8;
  }
  else {
    if ((dVar22 == -INFINITY) || (dVar22 == INFINITY)) {
      dVar22 = 0.0;
    }
    dVar22 = _guard_xfg_dispatch_icall_nop(dVar22 * 20.0);
    piVar8[1] = (int)dVar22;
    fVar21 = (float)(int)dVar22;
    if (fStack_ec == fVar21) goto LAB_1435fb89e;
  }
  fStack_ec = fVar21;
  bVar13 = Scaleform::Render::Matrix2x4<float>::IsValid((Matrix2x4<float> *)&local_108);
  if (bVar13) {
    cVar14 = FUN_143370e20(plVar6);
    if (cVar14 == '\0') {
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_108);
    }
    else {
      (**(code **)(*plVar6 + 0x68))();
    }
  }
LAB_1435fb8d8:
  if (!bVar19) {
    if ((*(byte *)((longlong)param_3 + 0xd4) & 1) != 0) {
      dVar4 = dVar4 * 20.0;
      if (dVar4 <= 0.0) {
        dVar4 = dVar4 - 0.5;
      }
      else {
        dVar4 = dVar4 + 0.5;
      }
      *piVar8 = (int)dVar4;
    }
    if ((*(byte *)((longlong)param_3 + 0xd4) >> 1 & 1) != 0) {
      dVar12 = dVar12 * 20.0;
      if (dVar12 <= 0.0) {
        dVar12 = dVar12 - 0.5;
      }
      else {
        dVar12 = dVar12 + 0.5;
      }
      piVar8[1] = (int)dVar12;
    }
  }
  return 1;
}



// FUNCTION 1435fb9d0 FUN_1435fb9d0 body=215 status=ok
// SIG undefined FUN_1435fb9d0(void)

undefined8 FUN_1435fb9d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    local_28 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0;
    fStack_1c = 0.0;
    local_18 = 0;
    uStack_14 = 0x3f800000;
    uStack_10 = 0;
    fStack_c = 0.0;
    (**(code **)(**(longlong **)(param_2 + 0x88) + 0x1e8))(*(longlong **)(param_2 + 0x88),&local_28)
    ;
    *param_3 = local_28;
    param_3[1] = uStack_24;
    param_3[2] = uStack_20;
    param_3[3] = fStack_1c * 0.05;
    param_3[4] = local_18;
    param_3[5] = uStack_14;
    param_3[6] = uStack_10;
    param_3[7] = fStack_c * 0.05;
    return 1;
  }
  return 0;
}



// FUNCTION 1435fbab0 FUN_1435fbab0 body=209 status=ok
// SIG undefined FUN_1435fbab0(void)

undefined8 FUN_1435fbab0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    puVar8 = (undefined4 *)(**(code **)(**(longlong **)(param_2 + 0x88) + 0x10))();
    fVar1 = (float)puVar8[7];
    fVar2 = (float)puVar8[3];
    uVar3 = puVar8[5];
    uVar4 = puVar8[6];
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[4];
    *param_3 = *puVar8;
    param_3[1] = uVar5;
    param_3[2] = uVar6;
    param_3[3] = fVar2 * 0.05;
    param_3[4] = uVar7;
    param_3[5] = uVar3;
    param_3[6] = uVar4;
    param_3[7] = fVar1 * 0.05;
    return 1;
  }
  return 0;
}



// FUNCTION 1435fbb90 FUN_1435fbb90 body=505 status=ok
// SIG undefined FUN_1435fbb90(void)

bool FUN_1435fbb90(undefined8 param_1,longlong param_2,Matrix2x4<float> *param_3)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined8 local_78;
  double local_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    bVar3 = Scaleform::Render::Matrix2x4<float>::IsValid(param_3);
    if (bVar3) {
      local_94 = *(undefined4 *)(param_3 + 4);
      local_98 = *(undefined4 *)param_3;
      local_8c = *(float *)(param_3 + 0xc) * 20.0;
      local_84 = *(undefined4 *)(param_3 + 0x14);
      local_90 = *(undefined4 *)(param_3 + 8);
      local_7c = *(float *)(param_3 + 0x1c) * 20.0;
      local_88 = *(undefined4 *)(param_3 + 0x10);
      local_80 = *(undefined4 *)(param_3 + 0x18);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_98);
      local_68 = 100.0;
      dStack_60 = 0.0;
      local_48 = 0x3f80000000000000;
      uStack_40 = 0;
      local_58 = 0x3f800000;
      uStack_50 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_70 = 100.0;
      local_78 = 0;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0x40590000;
      FUN_14336b690(plVar1,&local_78);
      local_78 = CONCAT44((int)*(float *)(param_3 + 0x1c),(int)*(float *)(param_3 + 0xc));
      local_70 = _guard_xfg_dispatch_icall_nop
                           ((double)*(float *)param_3 * (double)*(float *)param_3 +
                            (double)*(float *)(param_3 + 0x10) * (double)*(float *)(param_3 + 0x10))
      ;
      local_70 = local_70 * 100.0;
      local_68 = _guard_xfg_dispatch_icall_nop
                           ((double)*(float *)(param_3 + 4) * (double)*(float *)(param_3 + 4) +
                            (double)*(float *)(param_3 + 0x14) * (double)*(float *)(param_3 + 0x14))
      ;
      local_68 = local_68 * 100.0;
      dVar2 = _guard_xfg_dispatch_icall_nop
                        ((double)*(float *)(param_3 + 0x10),(double)*(float *)param_3);
      dStack_60 = (dVar2 * 180.0) / 3.141592653589793;
      FUN_14336b830(plVar1,&local_78);
    }
    return bVar3;
  }
  return false;
}



// FUNCTION 1435fbd90 FUN_1435fbd90 body=178 status=ok
// SIG undefined FUN_1435fbd90(void)

undefined8 FUN_1435fbd90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    puVar9 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x88) + 0x20))();
    uVar1 = *(undefined4 *)(puVar9 + 1);
    fVar2 = *(float *)((longlong)puVar9 + 0xc);
    uVar8 = puVar9[2];
    uVar3 = *(undefined4 *)(puVar9 + 3);
    fVar4 = *(float *)((longlong)puVar9 + 0x1c);
    uVar7 = puVar9[4];
    uVar5 = *(undefined4 *)(puVar9 + 5);
    fVar6 = *(float *)((longlong)puVar9 + 0x2c);
    *param_3 = *puVar9;
    param_3[1] = CONCAT44(fVar2 * 0.05,uVar1);
    param_3[2] = uVar8;
    param_3[3] = CONCAT44(fVar4 * 0.05,uVar3);
    param_3[4] = uVar7;
    param_3[5] = CONCAT44(fVar6 * 0.05,uVar5);
    return 1;
  }
  return 0;
}



// FUNCTION 1435fbe50 FUN_1435fbe50 body=480 status=ok
// SIG undefined FUN_1435fbe50(void)

bool FUN_1435fbe50(undefined8 param_1,longlong param_2,Matrix3x4<float> *param_3)

{
  longlong *plVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [2];
  float local_res20 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    bVar2 = Scaleform::Render::Matrix3x4<float>::IsValid(param_3);
    if (bVar2) {
      local_a8 = *(undefined4 *)param_3;
      uStack_a4 = *(undefined4 *)(param_3 + 4);
      uStack_a0 = *(undefined4 *)(param_3 + 8);
      local_98 = *(undefined4 *)(param_3 + 0x10);
      uStack_94 = *(undefined4 *)(param_3 + 0x14);
      uStack_90 = *(undefined4 *)(param_3 + 0x18);
      local_88 = *(undefined4 *)(param_3 + 0x20);
      uStack_84 = *(undefined4 *)(param_3 + 0x24);
      uStack_80 = *(undefined4 *)(param_3 + 0x28);
      fStack_9c = *(float *)(param_3 + 0xc) * 20.0;
      fStack_8c = *(float *)(param_3 + 0x1c) * 20.0;
      fStack_7c = *(float *)(param_3 + 0x2c) * 20.0;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
      local_68 = 0x4059000000000000;
      uStack_60 = 0;
      local_48 = 0x3f80000000000000;
      uStack_40 = 0;
      local_58 = 0x3f800000;
      uStack_50 = 0;
      local_28 = 0.0;
      dStack_20 = 0.0;
      local_70 = 0x4059000000000000;
      local_78 = 0;
      local_38 = 0.0;
      dStack_30 = 100.0;
      FUN_14336b690(plVar1,&local_78);
      local_38 = (double)*(float *)(param_3 + 0x2c);
      fVar3 = _guard_xfg_dispatch_icall_nop
                        (*(float *)(param_3 + 8) * *(float *)(param_3 + 8) +
                         *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x18) +
                         *(float *)(param_3 + 0x28) * *(float *)(param_3 + 0x28));
      dStack_30 = (double)fVar3 * 100.0;
      FUN_1434a00d0(param_3,local_res10,local_res20,0);
      local_28 = ((double)local_res10[0] * 180.0) / 3.141592653589793;
      dStack_20 = ((double)local_res20[0] * 180.0) / 3.141592653589793;
      FUN_14336b830(plVar1,&local_78);
    }
    return bVar2;
  }
  return false;
}



// FUNCTION 1435fc040 FUN_1435fc040 body=85 status=ok
// SIG undefined FUN_1435fc040(void)

undefined8 FUN_1435fc040(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_1433679a0(*(undefined8 *)(param_2 + 0x88));
    uVar1 = puVar2[1];
    *param_3 = *puVar2;
    param_3[1] = uVar1;
    uVar1 = puVar2[3];
    param_3[2] = puVar2[2];
    param_3[3] = uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1435fc0a0 FUN_1435fc0a0 body=94 status=ok
// SIG undefined FUN_1435fc0a0(void)

undefined8 FUN_1435fc0a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    FUN_1433679d0(plVar1,param_3);
    (**(code **)(*plVar1 + 0x1a8))(plVar1,0);
    return 1;
  }
  return 0;
}



// FUNCTION 1435fc110 FUN_1435fc110 body=496 status=ok
// SIG undefined FUN_1435fc110(void)

undefined8 FUN_1435fc110(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  uint local_48 [2];
  int *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_res8 = 0;
  uVar6 = *(undefined8 *)(param_1[1] + 0x18);
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    iVar4 = (**(code **)(*plVar2 + 0x290))(plVar2);
    if (iVar4 == 4) {
      bVar10 = param_4 == '\0';
      if (bVar10) {
        puVar7 = (ulonglong *)FUN_143de9da0(plVar2,&local_res8,0);
      }
      else {
        puVar7 = (ulonglong *)FUN_143de9ed0(plVar2,&local_res10);
      }
      uVar3 = *puVar7;
      *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
      if (bVar10) {
        piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if (!bVar10) {
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      local_48[0] = 10;
      local_40 = (int *)0x0;
      *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
      local_38 = uVar3;
      FUN_1435ee8b0(uVar6,local_48,param_3);
      uVar5 = local_48[0] & 0x1f;
      if (9 < uVar5) {
        if ((local_48[0] >> 9 & 1) == 0) {
          if (uVar5 == 10) {
            piVar1 = (int *)(local_38 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            uVar8 = local_38;
            if ((((uVar5 == 0xb) || (uVar5 == 0xc)) || (uVar8 = local_30, uVar5 - 0xd < 2)) &&
               (((uVar8 & 1) == 0 && (uVar8 != 0)))) {
              if ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
        }
        else {
          *local_40 = *local_40 + -1;
          if (*local_40 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      piVar1 = (int *)(uVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar3);
      }
      uVar6 = 1;
    }
    else {
      pcVar9 = "text";
      if (param_4 != '\0') {
        pcVar9 = "htmlText";
      }
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2,pcVar9,param_3,1);
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 1435fc310 FUN_1435fc310 body=322 status=ok
// SIG undefined FUN_1435fc310(void)

undefined1 FUN_1435fc310(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  if ((0xb < *(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U) ||
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) == 0)) {
    return 0;
  }
  plVar1 = *(longlong **)(param_2 + 0x88);
  iVar3 = (**(code **)(*plVar1 + 0x290))(plVar1);
  if (iVar3 != 4) {
    pcVar5 = "text";
    local_28 = (longlong *)0x0;
    local_20 = 6;
    if (param_4 != '\0') {
      pcVar5 = "htmlText";
    }
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_18 = param_3;
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,pcVar5,&local_38,1);
    if ((local_20 >> 6 & 1) == 0) {
      return uVar2;
    }
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
    return uVar2;
  }
  uVar4 = *(uint *)((longlong)plVar1 + 0xfc);
  if (param_4 == '\0') {
    if ((uVar4 >> 1 & 1) == 0) goto LAB_1435fc438;
    uVar4 = uVar4 & 0xfffffffd;
  }
  else {
    if ((uVar4 >> 1 & 1) != 0) goto LAB_1435fc438;
    uVar4 = uVar4 | 2;
  }
  *(uint *)((longlong)plVar1 + 0xfc) = uVar4;
LAB_1435fc438:
  FUN_143dec020(plVar1,param_3,param_4,1);
  return 1;
}



// FUNCTION 1435fc460 FUN_1435fc460 body=279 status=ok
// SIG undefined FUN_1435fc460(void)

undefined1 FUN_1435fc460(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    iVar3 = (**(code **)(*plVar1 + 0x290))(plVar1);
    if (iVar3 == 4) {
      FUN_143debe50(plVar1,param_3,param_4);
      uVar2 = 1;
    }
    else {
      pcVar4 = "text";
      local_28 = (longlong *)0x0;
      local_20 = 7;
      if (param_4 != '\0') {
        pcVar4 = "htmlText";
      }
      local_38 = 0xffffffffffffffff;
      uStack_30 = 0xffffffffffffffff;
      local_18 = param_3;
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,pcVar4,&local_38,1);
      if ((local_20 >> 6 & 1) != 0) {
        (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1435fc580 FUN_1435fc580 body=262 status=ok
// SIG undefined FUN_1435fc580(void)

undefined8 FUN_1435fc580(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    if ((*(ushort *)((longlong)plVar2 + 0x6a) >> 10 & 1) != 0) {
      cVar3 = (**(code **)(*plVar2 + 0x368))(plVar2,param_3,local_res8,1);
      if (cVar3 != '\0') {
        (**(code **)(*plVar2 + 0x378))(plVar2,local_res8[0]);
        (**(code **)(*plVar2 + 0x398))(plVar2,param_4 != '\0');
        FUN_1435f61a0(*(undefined8 *)(*(longlong *)(lVar1 + 0x198) + 0x118));
        FUN_1435ea830(lVar1,0);
        FUN_1435ea830(lVar1,1);
        FUN_1435ea830(lVar1,3);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1435fc690 FUN_1435fc690 body=228 status=ok
// SIG undefined FUN_1435fc690(void)

undefined8 FUN_1435fc690(longlong param_1,longlong param_2,int param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x18U < 0xc) &&
     ((~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    if ((*(ushort *)((longlong)plVar2 + 0x6a) >> 10 & 1) == 0) {
      return 0;
    }
    (**(code **)(*plVar2 + 0x378))(plVar2,param_3 + -1);
    (**(code **)(*plVar2 + 0x398))(plVar2,param_4 != '\0');
    FUN_1435f61a0(*(undefined8 *)(*(longlong *)(lVar1 + 0x198) + 0x118));
    FUN_1435ea830(lVar1,0);
    FUN_1435ea830(lVar1,1);
    FUN_1435ea830(lVar1,3);
    return 1;
  }
  return 0;
}



// FUNCTION 1435fc780 FUN_1435fc780 body=780 status=ok
// SIG undefined FUN_1435fc780(void)

uint FUN_1435fc780(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  uint local_68 [2];
  int *local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  uint local_48 [2];
  int *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  uVar4 = *(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x1f;
  if ((4 < uVar4) || (uVar4 = 0, (~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) == 0)
     ) {
    return uVar4 & 0xffffff00;
  }
  lVar7 = *(longlong *)(param_2 + 0x88);
  local_48[0] = 0;
  local_40 = (int *)0x0;
  lVar6 = *(longlong *)(lVar2 + 0x88);
  local_res8 = local_res8 & 0xffffffff00000000;
  cVar3 = FUN_1435ccb40(lVar6,"flash.display.Sprite",*(undefined8 *)(lVar6 + 0x1c8),local_48,
                        &local_res8,0);
  if (*(char *)(lVar6 + 0xb8) == '\0') {
    if (cVar3 != '\0') {
      FUN_1435c8f90(lVar6,1);
    }
    uVar8 = local_38;
    if (*(char *)(lVar6 + 0xb8) == '\0') {
      if ((*(int *)(*(longlong *)(local_38 + 0x28) + 0x90) - 0x18U < 0xc) &&
         ((~(*(byte *)(*(longlong *)(local_38 + 0x28) + 0x88) >> 5) & 1) != 0)) {
        local_68[0] = 0;
        local_60 = (int *)0x0;
        local_res8 = FUN_143360a60(*(undefined8 *)(lVar2 + 0x3b8),param_4);
        *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
        FUN_1434f2f70(uVar8,local_68,&local_res8);
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (lVar7 == 0) {
LAB_1435fc8cf:
          lVar7 = 0;
        }
        else {
          lVar6 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 0x28)
                  )(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4);
          lVar7 = lVar6 + -0x48;
          if (lVar6 == 0) goto LAB_1435fc8cf;
        }
        if (param_5 < 0) {
          param_5 = *(int *)(*(longlong *)(lVar7 + 0x18) + 0xe0);
        }
        FUN_1435e48b0(lVar7,*(undefined8 *)(uVar8 + 0x88),param_5);
        FUN_1435ee8b0(lVar2,local_48,param_3);
        uVar4 = 1;
        uVar5 = local_68[0] & 0x1f;
        if (9 < uVar5) {
          if ((local_68[0] >> 9 & 1) == 0) {
            if (uVar5 == 10) {
              piVar1 = (int *)(uStack_58 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else {
              if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
                uVar8 = uStack_58;
                if ((uStack_58 & 1) != 0) {
                  uStack_58 = uStack_58 - 1;
                  goto LAB_1435fc9b2;
                }
              }
              else {
                if (1 < uVar5 - 0xd) goto LAB_1435fc9b2;
                uVar8 = local_50;
                if ((local_50 & 1) != 0) {
                  local_50 = local_50 - 1;
                  goto LAB_1435fc9b2;
                }
              }
              if ((uVar8 != 0) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *local_60 = *local_60 + -1;
            if (*local_60 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_68[0] = local_68[0] & 0xfffffde0;
            local_60 = (int *)0x0;
            uStack_58 = 0;
            local_50 = 0;
          }
        }
        goto LAB_1435fc9b2;
      }
    }
  }
  uVar4 = 0;
LAB_1435fc9b2:
  uVar5 = local_48[0] & 0x1f;
  if (9 < uVar5) {
    if ((local_48[0] >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar1 = (int *)(local_38 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(local_38);
        }
      }
      else if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
        if (((local_38 & 1) == 0) &&
           ((local_38 != 0 && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
          FUN_1434ef880(local_38);
        }
      }
      else if ((((uVar5 - 0xd < 2) && ((local_30 & 1) == 0)) && (local_30 != 0)) &&
              ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return uVar4;
}



// FUNCTION 1435fcaa0 FUN_1435fcaa0 body=1526 status=ok
// SIG undefined FUN_1435fcaa0(void)

uint FUN_1435fcaa0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,longlong *param_7)

{
  RefCountImpl *pRVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_f8 [2];
  int *local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  uint local_d8 [2];
  int *local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  uint local_b8 [2];
  int *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [2];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  uVar5 = *(int *)(*(longlong *)(param_2 + 0x28) + 0x90) - 0x1f;
  if ((4 < uVar5) || (uVar5 = 0, (~(*(byte *)(*(longlong *)(param_2 + 0x28) + 0x88) >> 5) & 1) == 0)
     ) {
    return uVar5 & 0xffffff00;
  }
  lVar7 = *(longlong *)(param_2 + 0x88);
  local_b8[0] = 0;
  local_b0 = (int *)0x0;
  lVar14 = *(longlong *)(lVar3 + 0x88);
  local_res10 = lVar7;
  local_res18 = param_3;
  local_res20 = param_4;
  if (lVar7 == 0) {
LAB_1435fcb3c:
    lVar16 = 0;
  }
  else {
    lVar6 = (**(code **)(*(longlong *)((ulonglong)*(byte *)(lVar7 + 0x6d) * 4 + lVar7) + 0x28))();
    lVar16 = lVar6 + -0x48;
    if (lVar6 == 0) goto LAB_1435fcb3c;
  }
  local_res8 = (RefCountImpl *)((ulonglong)local_res8._4_4_ << 0x20);
  cVar4 = FUN_1435ccb40(lVar14,param_4,*(undefined8 *)(lVar16 + 0x28),local_b8,&local_res8,0);
  if (*(char *)(lVar14 + 0xb8) == '\0') {
    if (cVar4 != '\0') {
      FUN_1435c8f90(lVar14,1);
    }
    plVar9 = local_a8;
    if (*(char *)(lVar14 + 0xb8) != '\0') goto LAB_1435fcf71;
    if ((*(int *)(local_a8[5] + 0x90) - 0x18U < 0xc) &&
       ((~(*(byte *)(local_a8[5] + 0x88) >> 5) & 1) != 0)) {
      uVar11 = 0;
      local_d8[0] = 0;
      local_d0 = (int *)0x0;
      local_res8 = (RefCountImpl *)FUN_143360a60(*(undefined8 *)(lVar3 + 0x3b8),param_5);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      FUN_1434f2f70(plVar9,local_d8,&local_res8);
      pRVar1 = local_res8 + 0x18;
      *(int *)pRVar1 = *(int *)pRVar1 + -1;
      if (*(int *)pRVar1 == 0) {
        FUN_14335f920();
      }
      if ((param_7 != (longlong *)0x0) && (param_7[1] != 0)) {
        do {
          puVar15 = (ulonglong *)(uVar11 * 0x38 + *param_7);
          puVar12 = (ulonglong *)(*puVar15 & 0xfffffffffffffffc);
          lVar7 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x3b8),(longlong)puVar12 + 0xc,
                                *puVar12 & 0x7fffffffffffffff);
          local_98 = 10;
          uStack_90 = 0;
          *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 2;
          local_70 = *(longlong *)(*(longlong *)(lVar3 + 0x88) + 0x1d8);
          local_78[0] = 0;
          if (local_70 != 0) {
            *(uint *)(local_70 + 8) = *(int *)(local_70 + 8) + 1U & 0x8fffffff;
          }
          local_88._0_4_ = (undefined4)lVar7;
          local_88._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
          local_68 = 10;
          uStack_64 = uStack_94;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = (undefined4)local_88;
          uStack_54 = local_88._4_4_;
          uStack_50 = uStack_80;
          uStack_4c = uStack_7c;
          *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
          local_88 = lVar7;
          FUN_1435aef90(local_78);
          piVar2 = (int *)(lVar7 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920(lVar7);
          }
          piVar2 = (int *)(lVar7 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920(lVar7);
          }
          local_f8[0] = 0;
          local_f0 = (int *)0x0;
          FUN_1435ee5b0(lVar3,puVar15 + 1,local_f8);
          (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8,local_78,local_f8);
          uVar5 = local_f8[0] & 0x1f;
          if (9 < uVar5) {
            if ((local_f8[0] >> 9 & 1) == 0) {
              if (uVar5 == 10) {
                piVar2 = (int *)(uStack_e8 + 0x18);
                *piVar2 = *piVar2 + -1;
                if (*piVar2 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
                uVar10 = uStack_e8;
                if ((uStack_e8 & 1) == 0) {
LAB_1435fcd9a:
                  if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  uStack_e8 = uStack_e8 - 1;
                }
              }
              else if (uVar5 - 0xd < 2) {
                uVar10 = local_e0;
                if ((local_e0 & 1) == 0) goto LAB_1435fcd9a;
                local_e0 = local_e0 - 1;
              }
            }
            else {
              *local_f0 = *local_f0 + -1;
              if (*local_f0 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
              local_f8[0] = local_f8[0] & 0xfffffde0;
              local_f0 = (int *)0x0;
              uStack_e8 = 0;
              local_e0 = 0;
            }
          }
          FUN_1434e6250(local_78);
          uVar11 = (ulonglong)((int)uVar11 + 1);
          lVar7 = local_res10;
        } while (uVar11 < (ulonglong)param_7[1]);
      }
      lVar14 = 0;
      if ((lVar7 != 0) &&
         (lVar7 = (**(code **)(*(longlong *)((ulonglong)*(byte *)(lVar7 + 0x6d) * 4 + lVar7) + 0x28)
                  )(), lVar7 != 0)) {
        lVar14 = lVar7 + -0x48;
      }
      if (*(int *)(*(longlong *)(lVar14 + 0x18) + 0xe0) < param_6) {
        plVar8 = (longlong *)
                 Scaleform::GFx::StateBag::GetLogState
                           (*(longlong *)(lVar3 + 0x10) + 0x10,&local_res8);
        lVar7 = *plVar8;
        if (local_res8 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(local_res8);
        }
        if (lVar7 != 0) {
          FUN_1434a1650(lVar7 + 0x18,
                        "DAPI AttachMovie() depth requested (%d) for symbol \"%s\" is too large. Using next highest index (%d) instead."
                        ,param_6,local_res20,*(undefined4 *)(*(longlong *)(lVar14 + 0x18) + 0xe0));
        }
      }
      if ((param_6 < 0) || (*(int *)(*(longlong *)(lVar14 + 0x18) + 0xe0) < param_6)) {
        param_6 = *(int *)(*(longlong *)(lVar14 + 0x18) + 0xe0);
      }
      FUN_1435e48b0(lVar14,plVar9[0x11],param_6);
      FUN_1435ee8b0(lVar3,local_b8,local_res18);
      uVar13 = 1;
      uVar5 = local_d8[0] & 0x1f;
      if (9 < uVar5) {
        if ((local_d8[0] >> 9 & 1) == 0) {
          if (uVar5 == 10) {
            piVar2 = (int *)(uStack_c8 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
              uVar11 = uStack_c8;
              if ((uStack_c8 & 1) != 0) {
                uStack_c8 = uStack_c8 - 1;
                goto LAB_1435fcfb5;
              }
            }
            else {
              if (1 < uVar5 - 0xd) goto LAB_1435fcfb5;
              uVar11 = local_c0;
              if ((local_c0 & 1) != 0) {
                local_c0 = local_c0 - 1;
                goto LAB_1435fcfb5;
              }
            }
            if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_d0 = *local_d0 + -1;
          if (*local_d0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_d8[0] = local_d8[0] & 0xfffffde0;
          local_d0 = (int *)0x0;
          uStack_c8 = 0;
          local_c0 = 0;
        }
      }
      goto LAB_1435fcfb5;
    }
  }
  else {
LAB_1435fcf71:
    plVar9 = (longlong *)
             Scaleform::GFx::StateBag::GetLogState(*(longlong *)(lVar3 + 0x10) + 0x10,&local_res8);
    lVar3 = *plVar9;
    if (local_res8 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_res8);
    }
    if (lVar3 != 0) {
      FUN_1434a1650(lVar3 + 0x18,"attachMovie() failed - export name \"%s\" is not found.",param_4);
    }
    FUN_1435cc020(lVar14);
  }
  uVar13 = 0;
LAB_1435fcfb5:
  uVar5 = local_b8[0] & 0x1f;
  if (9 < uVar5) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        plVar9 = local_a8 + 3;
        *(int *)plVar9 = (int)*plVar9 + -1;
        if ((int)*plVar9 == 0) {
          FUN_14335f920(local_a8);
        }
      }
      else if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
        if ((((ulonglong)local_a8 & 1) == 0) &&
           ((local_a8 != (longlong *)0x0 && ((*(uint *)(local_a8 + 1) & 0x3fffff) != 0)))) {
          *(uint *)(local_a8 + 1) = *(uint *)(local_a8 + 1) - 1;
          FUN_1434ef880(local_a8);
        }
      }
      else if ((((uVar5 - 0xd < 2) && ((local_a0 & 1) == 0)) && (local_a0 != 0)) &&
              ((*(uint *)(local_a0 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_a0 + 8) = *(uint *)(local_a0 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_b0 = *local_b0 + -1;
      if (*local_b0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return uVar13;
}



// FUNCTION 1435fd0a0 FUN_1435fd0a0 body=298 status=ok
// SIG undefined FUN_1435fd0a0(void)

void FUN_1435fd0a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 *local_res20;
  uint local_28 [2];
  int *local_20;
  byte local_18;
  undefined7 uStack_17;
  byte local_10;
  undefined7 uStack_f;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  local_28[0] = 0;
  local_20 = (int *)0x0;
  FUN_1435ee5b0(lVar3,param_3,local_28);
  lVar3 = *(longlong *)(lVar3 + 0x3b8);
  local_res20 = (undefined8 *)(lVar3 + 0x48);
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_1435911f0(local_28,local_res8,&local_res20);
  FUN_1432c3b60(param_2,*local_res20,*(undefined4 *)(local_res20 + 4));
  piVar1 = (int *)(local_res20 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = local_28[0] & 0x1f;
  if (9 < uVar2) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        piVar1 = (int *)(CONCAT71(uStack_17,local_18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
          if ((local_18 & 1) != 0) {
            return;
          }
          lVar3 = CONCAT71(uStack_17,local_18);
        }
        else {
          if (1 < uVar2 - 0xd) {
            return;
          }
          if ((local_10 & 1) != 0) {
            return;
          }
          lVar3 = CONCAT71(uStack_f,local_10);
        }
        if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) - 1;
          FUN_1434ef880();
          return;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435fd210 FUN_1435fd210 body=33 status=ok
// SIG undefined FUN_1435fd210(void)

void FUN_1435fd210(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_1435eece0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),param_2,param_1,param_3,param_4);
  return;
}



// FUNCTION 1435fd2c0 FUN_1435fd2c0 body=155 status=ok
// SIG undefined FUN_1435fd2c0(void)

undefined8 * FUN_1435fd2c0(undefined8 *param_1,undefined8 param_2,uint param_3,undefined1 param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b4daf8;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_14360ab50(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((longlong)param_1 + 0x85) = param_4;
  param_1[0xe] = (ulonglong)param_3 * 1000;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  return param_1;
}



// FUNCTION 1435fd370 FUN_1435fd370 body=143 status=ok
// SIG undefined FUN_1435fd370(void)

undefined8 *
FUN_1435fd370(undefined8 *param_1,longlong param_2,uint param_3,undefined4 param_4,
             undefined4 param_5)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b4daf8;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_5;
  *(undefined4 *)(param_1 + 0xd) = param_4;
  param_1[0xf] = 0;
  param_1[0xe] = (ulonglong)param_3 * 1000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 1;
  return param_1;
}



// FUNCTION 1435fd430 FUN_1435fd430 body=855 status=ok
// SIG undefined FUN_1435fd430(void)

undefined8 FUN_1435fd430(longlong param_1,longlong param_2,float param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 local_res8 [2];
  uint local_78 [2];
  int *local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  uint local_58 [2];
  int *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    return 0;
  }
  uVar2 = *(ulonglong *)(param_2 + 0x268);
  lVar5 = *(longlong *)(param_2 + 0x18);
  if (uVar2 < *(ulonglong *)(param_1 + 0x78)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if ((*(uint *)(param_1 + 0x6c) == 0) || (*(uint *)(param_1 + 0x68) < *(uint *)(param_1 + 0x6c)))
    {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      FUN_14357ef50();
    }
    goto LAB_1435fd6ae;
  }
  lVar8 = 0;
  lVar3 = *(longlong *)(param_1 + 0x40);
  local_58[0] = 0;
  local_50 = (int *)0x0;
  local_78[0] = 0;
  local_70 = (int *)0x0;
  for (lVar7 = lVar3; lVar7 != 0; lVar7 = lVar7 + -1) {
    FUN_143590140(*(longlong *)(param_1 + 0x50) + lVar8,*(longlong *)(param_1 + 0x38) + lVar8);
    lVar8 = lVar8 + 0x20;
  }
  if ((((byte)*(undefined4 *)(param_1 + 0x10) & 0x1f) == 0xc) &&
     (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x88))();
  }
  lVar5 = *(longlong *)(lVar5 + 0x88);
  local_res8[0] = (undefined4)lVar3;
  FUN_1435ce880(lVar5,param_1 + 0x10,local_58,local_78,local_res8,*(undefined8 *)(param_1 + 0x50),0,
                1);
  if (*(char *)(lVar5 + 0xb8) != '\0') {
    FUN_1435cc020(lVar5);
  }
  uVar4 = local_78[0] & 0x1f;
  if (9 < uVar4) {
    if ((local_78[0] >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(uStack_68 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
        uVar6 = uStack_68;
        if ((uStack_68 & 1) == 0) {
LAB_1435fd5fc:
          if ((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          uStack_68 = uStack_68 - 1;
        }
      }
      else if (uVar4 - 0xd < 2) {
        uVar6 = local_60;
        if ((local_60 & 1) == 0) goto LAB_1435fd5fc;
        local_60 = local_60 - 1;
      }
    }
    else {
      *local_70 = *local_70 + -1;
      if (*local_70 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_78[0] = local_78[0] & 0xfffffde0;
      local_70 = (int *)0x0;
      uStack_68 = 0;
      local_60 = 0;
    }
  }
  uVar4 = local_58[0] & 0x1f;
  if (9 < uVar4) {
    if ((local_58[0] >> 9 & 1) == 0) {
      if (uVar4 == 10) {
        piVar1 = (int *)(local_48 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if (((((uVar4 == 0xb) || (uVar4 == 0xc)) || (local_48 = local_40, uVar4 - 0xd < 2)) &&
               (((local_48 & 1) == 0 && (local_48 != 0)))) &&
              ((*(uint *)(local_48 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_48 + 8) = *(uint *)(local_48 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_50 = *local_50 + -1;
      if (*local_50 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
LAB_1435fd6ae:
  if ((*(char *)(param_1 + 0x85) == '\0') &&
     ((uVar4 = *(uint *)(param_1 + 0x6c), uVar4 == 0 || (*(uint *)(param_1 + 0x68) < uVar4)))) {
    param_3 = param_3 * 1e+06;
    lVar5 = 0;
    if ((9.223372e+18 <= param_3) && (param_3 = param_3 - 9.223372e+18, param_3 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    if ((uVar4 == 0) || (*(uint *)(param_1 + 0x68) < uVar4)) {
      uVar6 = *(ulonglong *)(param_1 + 0x70);
      if (uVar6 * 10 < (ulonglong)((longlong)param_3 + lVar5)) {
        uVar6 = (ulonglong)((longlong)param_3 + lVar5) / 10;
      }
      if (uVar6 != 0) {
        uVar9 = (uVar6 - *(longlong *)(param_1 + 0x78)) + uVar2;
        lVar5 = uVar9 - uVar9 % uVar6;
        if (lVar5 != 0) {
          *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + lVar5;
          return 1;
        }
      }
    }
    *(ulonglong *)(param_1 + 0x78) = uVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  return 1;
}



// FUNCTION 1435fd790 FUN_1435fd790 body=86 status=ok
// SIG undefined FUN_1435fd790(void)

void FUN_1435fd790(longlong param_1)

{
  ulonglong uVar1;
  
  *(undefined1 *)(param_1 + 0x84) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x30) = uVar1 - 1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1435fd7f0 FUN_1435fd7f0 body=189 status=ok
// SIG undefined FUN_1435fd7f0(void)

undefined8 FUN_1435fd7f0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((*(uint *)(param_1 + 2) & 0x1f) == 0xc) {
    bVar3 = param_1[4] == 0;
LAB_1435fd82d:
    if (!bVar3) goto LAB_1435fd834;
  }
  else {
    if ((*(uint *)(param_1 + 2) & 0x1f) == 10) {
      bVar3 = param_1[4] == *(longlong *)(param_1[4] + 8) + 0x80;
      goto LAB_1435fd82d;
    }
LAB_1435fd834:
    plVar1 = (longlong *)FUN_1435caba0(*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x88));
    lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
    if ((lVar2 != 0) && (*(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x178) == param_3))
    goto LAB_1435fd862;
  }
  if (param_1[6] != 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1[6] + 0x28) + 0x38))();
    if ((lVar2 != 0) && (*(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x178) == param_3)) {
LAB_1435fd862:
      (**(code **)(*param_1 + 0x20))(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1435fd8c0 FUN_1435fd8c0 body=304 status=ok
// SIG undefined FUN_1435fd8c0(void)

void FUN_1435fd8c0(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)param_2;
  if (param_2 != 0) {
    plVar5 = (longlong *)(param_3 + 0x10);
    uVar8 = (ulonglong)param_2;
    do {
      FUN_1434f03e0(param_1 + 0x38,param_1 + 0x38,*(longlong *)(param_1 + 0x40) + 1);
      puVar4 = (undefined4 *)
               (*(longlong *)(param_1 + 0x38) + -0x20 + *(longlong *)(param_1 + 0x40) * 0x20);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = (int)plVar5[-2];
        *(longlong *)(puVar4 + 2) = plVar5[-1];
        uVar1 = *(undefined4 *)((longlong)plVar5 + 4);
        lVar6 = plVar5[1];
        uVar2 = *(undefined4 *)((longlong)plVar5 + 0xc);
        puVar4[4] = (int)*plVar5;
        puVar4[5] = uVar1;
        puVar4[6] = (int)lVar6;
        puVar4[7] = uVar2;
        uVar3 = *(uint *)(plVar5 + -2) & 0x1f;
        if (9 < uVar3) {
          if ((*(uint *)(plVar5 + -2) >> 9 & 1) == 0) {
            if (uVar3 == 10) {
              *(int *)(*plVar5 + 0x18) = *(int *)(*plVar5 + 0x18) + 1;
            }
            else if (10 < uVar3) {
              if (uVar3 < 0xd) {
                lVar6 = *plVar5;
              }
              else {
                if (0xe < uVar3) goto LAB_1435fd97e;
                lVar6 = plVar5[1];
              }
              if (lVar6 != 0) {
                *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
              }
            }
          }
          else {
            *(int *)plVar5[-1] = *(int *)plVar5[-1] + 1;
          }
        }
      }
LAB_1435fd97e:
      plVar5 = plVar5 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = *(ulonglong *)(param_1 + 0x58);
  FUN_1434f03e0(param_1 + 0x50,param_1 + 0x50,uVar7);
  if (uVar8 < uVar7) {
    puVar4 = (undefined4 *)(uVar8 * 0x20 + *(longlong *)(param_1 + 0x50));
    for (lVar6 = uVar7 - uVar8; lVar6 != 0; lVar6 = lVar6 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
      }
      puVar4 = puVar4 + 8;
    }
  }
  return;
}



// FUNCTION 1435fda00 FUN_1435fda00 body=276 status=ok
// SIG undefined FUN_1435fda00(void)

undefined8 *
FUN_1435fda00(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = param_4;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b4db48;
  param_1[3] = 0;
  FUN_1432bdc50(param_1 + 4,0);
  param_1[10] = 0;
  FUN_1432bdc50(param_1 + 0xb,0);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_1432c5250(param_1 + 0x13);
  FUN_1432bdc50(param_1 + 0x14,0);
  FUN_143df7cd0(param_1 + 0x1a,param_2,param_3);
  FUN_1432bdc50(param_1 + 0x1e,0);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 20000;
  FUN_1432bdc50(param_1 + 0x25,0);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FNULLSceneInterface::SetFXSystem(param_1 + 0x1a,param_1 + 0x14);
  return param_1;
}



// FUNCTION 1435fdb20 FUN_1435fdb20 body=285 status=ok
// SIG undefined FUN_1435fdb20(void)

void FUN_1435fdb20(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_145b4db48;
  FUN_1435fdee0();
  lVar4 = *(longlong *)(param_1 + 0x160);
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x158) + (lVar4 + -1) * 8);
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if ((RefCountImpl *)*puVar3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar3);
    }
    puVar3 = puVar3 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x158));
  Scaleform::Lock::~Lock(param_1 + 0x128);
  Scaleform::Lock::~Lock(param_1 + 0xf0);
  Scaleform::GFx::Socket::~Socket(param_1 + 0xd0);
  Scaleform::Lock::~Lock(param_1 + 0xa0);
  uVar1 = *(ulonglong *)(param_1 + 0x98);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x88) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x88));
  }
  Scaleform::Lock::~Lock(param_1 + 0x58);
  if (*(RefCountImpl **)(param_1 + 0x50) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x50));
  }
  Scaleform::Lock::~Lock(param_1 + 0x20);
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1435fdc50 FUN_1435fdc50 body=650 status=ok
// SIG undefined FUN_1435fdc50(void)

undefined8 FUN_1435fdc50(void *param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  Thread *this;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  plVar4 = (longlong *)0x0;
  if ((*(Thread **)((longlong)param_1 + 0x18) != (Thread *)0x0) &&
     (bVar1 = Scaleform::Thread::IsFinished(*(Thread **)((longlong)param_1 + 0x18)), !bVar1)) {
    Scaleform::Lock::DoLock((longlong)param_1 + 0xf0);
    *(undefined1 *)((longlong)param_1 + 0x120) = 1;
    Scaleform::Lock::DoLock((longlong)param_1 + 0xf0);
    if (*(Waitable **)((longlong)param_1 + 0x18) != (Waitable *)0x0) {
      Scaleform::Waitable::Wait(*(Waitable **)((longlong)param_1 + 0x18),0xffffffff);
      if (*(RefCountImpl **)((longlong)param_1 + 0x18) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)((longlong)param_1 + 0x18));
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    }
    if (*(RefCountImpl **)((longlong)param_1 + 0x50) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)((longlong)param_1 + 0x50));
    }
    *(undefined8 *)((longlong)param_1 + 0x50) = 0;
    if (*(RefCountImpl **)((longlong)param_1 + 0x88) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)((longlong)param_1 + 0x88));
    }
    *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = param_3;
  Scaleform::String::operator=((longlong)param_1 + 0x98,param_2);
  local_res18[0] = 2;
  plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x30,local_res18);
  plVar5 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *plVar3 = (longlong)&PTR_FUN_144f70a50;
    *(undefined4 *)(plVar3 + 1) = 1;
    *plVar3 = (longlong)&PTR_FUN_145b4dfe8;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar5 = plVar3;
  }
  if (*(RefCountImpl **)((longlong)param_1 + 0x50) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)((longlong)param_1 + 0x50));
  }
  *(longlong **)((longlong)param_1 + 0x50) = plVar5;
  if ((plVar5[3] != 0) && ((plVar5[4] & 0xfffffffffffffffeU) != 0)) {
    FUN_143612650(plVar5 + 2,plVar5 + 2,0);
  }
  plVar5[3] = 0;
  (**(code **)(*plVar5 + 0x80))(plVar5);
  local_res8[0] = 2;
  plVar3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x30,local_res8);
  plVar5 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *plVar3 = (longlong)&PTR_FUN_144f70a50;
    *(undefined4 *)(plVar3 + 1) = 1;
    *plVar3 = (longlong)&PTR_FUN_145b4dfe8;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar5 = plVar3;
  }
  if (*(RefCountImpl **)((longlong)param_1 + 0x88) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)((longlong)param_1 + 0x88));
  }
  *(longlong **)((longlong)param_1 + 0x88) = plVar5;
  local_res20[0] = 2;
  this = (Thread *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x58,local_res20);
  if (this != (Thread *)0x0) {
    plVar4 = (longlong *)Scaleform::Thread::Thread(this,FUN_1435fe8e0,param_1,0x20000,-1,0);
  }
  if (*(RefCountImpl **)((longlong)param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)((longlong)param_1 + 0x18));
  }
  *(longlong **)((longlong)param_1 + 0x18) = plVar4;
  if ((plVar4 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,1), cVar2 != '\0')) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x38))
              (*(longlong **)((longlong)param_1 + 0x18),"Scaleform AS3 Socket");
    return 1;
  }
  return 0;
}



// FUNCTION 1435fdee0 FUN_1435fdee0 body=134 status=ok
// SIG undefined FUN_1435fdee0(void)

void FUN_1435fdee0(longlong param_1)

{
  Scaleform::Lock::DoLock(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x120) = 1;
  Scaleform::Lock::DoLock(param_1 + 0xf0);
  if (*(Waitable **)(param_1 + 0x18) != (Waitable *)0x0) {
    Scaleform::Waitable::Wait(*(Waitable **)(param_1 + 0x18),0xffffffff);
    if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(RefCountImpl **)(param_1 + 0x50) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x50));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(RefCountImpl **)(param_1 + 0x88) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x88));
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 1435fdf70 OnImport body=8 status=ok
// SIG undefined OnImport(void)

longlong FSettingsSection::OnImport(longlong param_1)

{
  return param_1 + 0x98;
}



// FUNCTION 1435fdf80 GetNumKeyframes body=7 status=ok
// SIG undefined GetNumKeyframes(void)

undefined4 UInterpTrackSound::GetNumKeyframes(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



// FUNCTION 1435fdf90 GetBytesPending body=56 status=ok
// SIG undefined GetBytesPending(void)

undefined4 Scaleform::GFx::AS3::SocketThreadMgr::GetBytesPending(longlong param_1)

{
  undefined4 uVar1;
  
  Lock::DoLock(param_1 + 0x58);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x18);
  Lock::DoLock(param_1 + 0x58);
  return uVar1;
}



// FUNCTION 1435fdfd0 GetBytesAvailable body=53 status=ok
// SIG undefined GetBytesAvailable(void)

undefined4 Scaleform::GFx::AS3::SocketThreadMgr::GetBytesAvailable(longlong param_1)

{
  undefined4 uVar1;
  
  Lock::DoLock(param_1 + 0x20);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x18);
  Lock::DoLock(param_1 + 0x20);
  return uVar1;
}



// FUNCTION 1435fe010 IsRunning body=36 status=ok
// SIG undefined IsRunning(void)

undefined1 Scaleform::GFx::AS3::SocketThreadMgr::IsRunning(longlong param_1)

{
  bool bVar1;
  
  if (*(Thread **)(param_1 + 0x18) != (Thread *)0x0) {
    bVar1 = Thread::IsFinished(*(Thread **)(param_1 + 0x18));
    if (!bVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1435fe050 FUN_1435fe050 body=7 status=ok
// SIG undefined FUN_1435fe050(void)

undefined4 FUN_1435fe050(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x124);
}



// FUNCTION 1435fe060 FUN_1435fe060 body=119 status=ok
// SIG undefined FUN_1435fe060(void)

bool FUN_1435fe060(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char local_res8 [8];
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  if (iVar1 != 0) {
    local_res8[0] = '\0';
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
              (*(longlong **)(param_1 + 0x50),local_res8,1);
    *(bool *)param_2 = local_res8[0] != '\0';
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return iVar1 != 0;
}



// FUNCTION 1435fe0e0 FUN_1435fe0e0 body=116 status=ok
// SIG undefined FUN_1435fe0e0(void)

bool FUN_1435fe0e0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  if (iVar1 != 0) {
    local_res8[0] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
              (*(longlong **)(param_1 + 0x50),local_res8,1);
    *param_2 = local_res8[0];
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return iVar1 != 0;
}



// FUNCTION 1435fe160 FUN_1435fe160 body=290 status=ok
// SIG undefined FUN_1435fe160(void)

undefined8 FUN_1435fe160(longlong param_1,longlong *param_2,int param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_res18 [16];
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  if (param_3 == 0) {
    param_3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  }
  iVar6 = 0;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x28);
  if (0 < param_3) {
    do {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
      plVar3 = *(longlong **)(param_1 + 0x50);
      if (iVar4 == 0) {
        (**(code **)(*plVar3 + 0x70))(plVar3,uVar2,0);
        if ((param_2[1] != 0) && ((param_2[2] & 0xfffffffffffffffeU) != 0)) {
          FUN_1432bbfd0(param_2,param_2,0);
        }
        param_2[1] = 0;
        break;
      }
      local_res18[0] = 0;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res18);
      uVar1 = param_2[1] + 1;
      if (uVar1 < (ulonglong)param_2[1]) {
        if (uVar1 < (ulonglong)param_2[2] >> 1) {
LAB_1435fe206:
          FUN_1432bbfd0(param_2,param_2);
        }
      }
      else if ((ulonglong)param_2[2] < uVar1) goto LAB_1435fe206;
      param_2[1] = uVar1;
      puVar5 = (undefined1 *)(*param_2 + -1 + uVar1);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = local_res18[0];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3);
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return 1;
}



// FUNCTION 1435fe290 FUN_1435fe290 body=149 status=ok
// SIG undefined FUN_1435fe290(void)

int FUN_1435fe290(longlong param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_res18 [8];
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
      if (iVar1 == 0) break;
      local_res18[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
                (*(longlong **)(param_1 + 0x50),local_res18,1);
      iVar2 = iVar2 + 1;
      *param_2 = local_res18[0];
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
    } while (iVar3 < param_3);
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return iVar2;
}



// FUNCTION 1435fe330 FUN_1435fe330 body=123 status=ok
// SIG undefined FUN_1435fe330(void)

bool FUN_1435fe330(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_res8;
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  if (iVar1 != 0) {
    local_res8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
              (*(longlong **)(param_1 + 0x50),&local_res8,8);
    *param_2 = local_res8;
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return iVar1 != 0;
}



// FUNCTION 1435fe3c0 FUN_1435fe3c0 body=123 status=ok
// SIG undefined FUN_1435fe3c0(void)

bool FUN_1435fe3c0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_res8 [2];
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  if (iVar1 != 0) {
    local_res8[0] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
              (*(longlong **)(param_1 + 0x50),local_res8,4);
    *param_2 = local_res8[0];
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return iVar1 != 0;
}



// FUNCTION 1435fe450 FUN_1435fe450 body=118 status=ok
// SIG undefined FUN_1435fe450(void)

bool FUN_1435fe450(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_res8 [2];
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  if (iVar1 != 0) {
    local_res8[0] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
              (*(longlong **)(param_1 + 0x50),local_res8,4);
    *param_2 = local_res8[0];
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return iVar1 != 0;
}



// FUNCTION 1435fe4d0 FUN_1435fe4d0 body=119 status=ok
// SIG undefined FUN_1435fe4d0(void)

bool FUN_1435fe4d0(longlong param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 local_res8 [4];
  
  Scaleform::Lock::DoLock(param_1 + 0x20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  if (iVar1 != 0) {
    local_res8[0] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
              (*(longlong **)(param_1 + 0x50),local_res8,2);
    *param_2 = local_res8[0];
  }
  Scaleform::Lock::DoLock(param_1 + 0x20);
  return iVar1 != 0;
}



// FUNCTION 1435fe550 FUN_1435fe550 body=89 status=ok
// SIG undefined FUN_1435fe550(void)

void FUN_1435fe550(longlong param_1,undefined8 param_2,int param_3)

{
  Scaleform::Lock::DoLock(param_1 + 0x58);
  FUN_14360dfc0(*(longlong *)(param_1 + 0x88) + 0x10,param_2,(longlong)param_3);
  Scaleform::Lock::DoLock(param_1 + 0x58);
  return;
}



// FUNCTION 1435fe5b0 FUN_1435fe5b0 body=84 status=ok
// SIG undefined FUN_1435fe5b0(void)

void FUN_1435fe5b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  Scaleform::Lock::DoLock(param_1 + 0x58);
  local_res8 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
            (*(longlong **)(param_1 + 0x88),&local_res8,8);
  Scaleform::Lock::DoLock(param_1 + 0x58);
  return;
}



// FUNCTION 1435fe610 FUN_1435fe610 body=84 status=ok
// SIG undefined FUN_1435fe610(void)

void FUN_1435fe610(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  Scaleform::Lock::DoLock(param_1 + 0x58);
  local_res10[0] = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
            (*(longlong **)(param_1 + 0x88),local_res10,4);
  Scaleform::Lock::DoLock(param_1 + 0x58);
  return;
}



// FUNCTION 1435fe670 FUN_1435fe670 body=81 status=ok
// SIG undefined FUN_1435fe670(void)

void FUN_1435fe670(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [2];
  
  Scaleform::Lock::DoLock(param_1 + 0x58);
  local_res10[0] = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
            (*(longlong **)(param_1 + 0x88),local_res10,4);
  Scaleform::Lock::DoLock(param_1 + 0x58);
  return;
}



// FUNCTION 1435fe6d0 FUN_1435fe6d0 body=83 status=ok
// SIG undefined FUN_1435fe6d0(void)

void FUN_1435fe6d0(longlong param_1,undefined2 param_2)

{
  undefined2 local_res10 [4];
  
  Scaleform::Lock::DoLock(param_1 + 0x58);
  local_res10[0] = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
            (*(longlong **)(param_1 + 0x88),local_res10,2);
  Scaleform::Lock::DoLock(param_1 + 0x58);
  return;
}



// FUNCTION 1435fe730 FUN_1435fe730 body=404 status=ok
// SIG undefined FUN_1435fe730(void)

void FUN_1435fe730(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  RefCountImpl *this;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  uVar5 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  Scaleform::Lock::DoLock(param_1 + 0x128);
  uVar6 = uVar5;
  uVar7 = uVar5;
  uVar8 = uVar5;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    do {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x158) + uVar7 * 8);
      FUN_1432d1b00(&local_48,&local_48,uVar6 + 1);
      uVar6 = local_40;
      uVar8 = local_48;
      puVar1 = (undefined8 *)(local_48 + (local_40 - 1) * 8);
      if (puVar1 != (undefined8 *)0x0) {
        this = (RefCountImpl *)*puVar4;
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        *puVar1 = *puVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_1 + 0x160));
  }
  FUN_1432f29e0(param_1 + 0x158,param_1 + 0x158,0);
  Scaleform::Lock::DoLock(param_1 + 0x128);
  if (uVar6 != 0) {
    do {
      lVar3 = *(longlong *)(uVar8 + uVar5 * 8);
      iVar2 = *(int *)(lVar3 + 0x10);
      if (iVar2 == 0) {
        FUN_14355a650(*(undefined8 *)(param_1 + 0x10));
      }
      else if (iVar2 == 1) {
        FUN_14355a720(*(undefined8 *)(param_1 + 0x10));
      }
      else if (iVar2 == 3) {
        FUN_14355a7f0(*(undefined8 *)(param_1 + 0x10),**(undefined4 **)(lVar3 + 0x18),0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  puVar4 = (undefined8 *)(uVar8 + (uVar6 - 1) * 8);
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if ((RefCountImpl *)*puVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar4);
    }
    puVar4 = puVar4 + -1;
  }
  if (uVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435fe8b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
    return;
  }
  return;
}



// FUNCTION 1435fe8d0 GetActorParentClass body=9 status=ok
// SIG undefined GetActorParentClass(void)

undefined8 USupraFunctionLibrary::GetActorParentClass(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
}



// FUNCTION 1435fe8e0 FUN_1435fe8e0 body=65 status=ok
// SIG undefined FUN_1435fe8e0(void)

undefined4 FUN_1435fe8e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_1435fe9b0(param_2);
    while (cVar1 != '\0') {
      _Sleep_Thread_Scaleform__SA_NI_Z(1);
      cVar1 = FUN_1435fe9b0(param_2);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1435fe930 FUN_1435fe930 body=58 status=ok
// SIG undefined FUN_1435fe930(void)

undefined1 FUN_1435fe930(longlong param_1)

{
  undefined1 uVar1;
  
  Scaleform::Lock::DoLock(param_1 + 0xf0);
  uVar1 = *(undefined1 *)(param_1 + 0x120);
  Scaleform::Lock::DoLock(param_1 + 0xf0);
  return uVar1;
}



// FUNCTION 1435fe970 FUN_1435fe970 body=54 status=ok
// SIG undefined FUN_1435fe970(void)

void FUN_1435fe970(longlong param_1)

{
  Scaleform::Lock::DoLock(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x120) = 1;
  Scaleform::Lock::DoLock(param_1 + 0xf0);
  return;
}



// FUNCTION 1435fe9b0 FUN_1435fe9b0 body=1018 status=ok
// SIG undefined FUN_1435fe9b0(void)

bool FUN_1435fe9b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  int local_res10 [2];
  ulonglong local_res18;
  undefined1 local_238 [512];
  
  FUN_1432c2f70(&local_res18);
  uVar4 = Scaleform::Timer::GetTicksMs();
  lVar1 = param_1 + 0xf0;
  Scaleform::Lock::DoLock(lVar1);
  cVar3 = *(char *)(param_1 + 0x120);
  Scaleform::Lock::DoLock(lVar1);
  while ((cVar3 == '\0' &&
         (cVar3 = FUN_143df7d90(param_1 + 0xd0,
                                (*(ulonglong *)(param_1 + 0x98) & 0xfffffffffffffffc) + 0xc,
                                *(undefined4 *)(param_1 + 0x90),&local_res18), cVar3 == '\0'))) {
    uVar5 = Scaleform::Timer::GetTicksMs();
    if ((ulonglong)*(uint *)(param_1 + 0x124) < (ulonglong)uVar5 - (ulonglong)uVar4) {
      bVar15 = false;
      goto LAB_1435fed56;
    }
    Scaleform::Thread::MSleep(10);
    Scaleform::Lock::DoLock(lVar1);
    cVar3 = *(char *)(param_1 + 0x120);
    Scaleform::Lock::DoLock(lVar1);
  }
  Scaleform::Lock::DoLock(lVar1);
  cVar3 = *(char *)(param_1 + 0x120);
  Scaleform::Lock::DoLock(lVar1);
  if (cVar3 == '\0') {
    FUN_1435fedb0(param_1,1,0);
  }
  FUN_143df8250(param_1 + 0xd0,0);
  Scaleform::Lock::DoLock(lVar1);
  cVar3 = *(char *)(param_1 + 0x120);
  Scaleform::Lock::DoLock(lVar1);
  while (cVar3 == '\0') {
    lVar13 = param_1 + 0xd0;
    cVar3 = FUN_143df82a0(lVar13);
    if (cVar3 != '\0') break;
    bVar15 = false;
    Scaleform::Lock::DoLock(param_1 + 0x58);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10);
    for (uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x88) + 0x18); uVar9 != 0;
        uVar9 = uVar9 - (longlong)iVar6) {
      uVar11 = 0x200;
      if (uVar9 < 0x201) {
        uVar11 = uVar9;
      }
      iVar6 = Scaleform::GFx::Socket::Send(lVar13,lVar10,uVar11);
      if (iVar6 < 1) break;
      lVar10 = lVar10 + iVar6;
      bVar15 = true;
    }
    plVar14 = *(longlong **)(param_1 + 0x88);
    if ((plVar14[3] != 0) && ((plVar14[4] & 0xfffffffffffffffeU) != 0)) {
      FUN_143612650(plVar14 + 2,plVar14 + 2,0);
    }
    plVar14[3] = 0;
    (**(code **)(*plVar14 + 0x80))(plVar14);
    Scaleform::Lock::DoLock(param_1 + 0x58);
    iVar6 = 0;
    uVar4 = Scaleform::GFx::Socket::Receive(lVar13,local_238);
    if (uVar4 != 0) {
      bVar15 = true;
      do {
        uVar9 = (ulonglong)uVar4;
        iVar6 = iVar6 + uVar4;
        Scaleform::Lock::DoLock(param_1 + 0x20);
        lVar13 = *(longlong *)(param_1 + 0x50);
        plVar14 = (longlong *)(lVar13 + 0x10);
        if (uVar9 != 0) {
          uVar2 = *(ulonglong *)(lVar13 + 0x18);
          uVar11 = uVar2 + uVar9;
          if (uVar11 < uVar2) {
            uVar12 = uVar11;
            if (uVar11 < *(ulonglong *)(lVar13 + 0x20) >> 1) {
LAB_1435fec13:
              FUN_143612650(plVar14,plVar14,uVar12);
            }
          }
          else if (*(ulonglong *)(lVar13 + 0x20) < uVar11) {
            uVar12 = (uVar11 >> 2) + uVar11;
            goto LAB_1435fec13;
          }
          puVar8 = local_238;
          puVar7 = (undefined1 *)(*plVar14 + uVar2);
          *(ulonglong *)(lVar13 + 0x18) = uVar11;
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            if (puVar7 != (undefined1 *)0x0) {
              *puVar7 = *puVar8;
            }
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        Scaleform::Lock::DoLock(param_1 + 0x20);
        uVar4 = Scaleform::GFx::Socket::Receive(param_1 + 0xd0,local_238);
      } while (uVar4 != 0);
      local_res10[0] = iVar6;
      if (iVar6 != 0) {
        FUN_1435fedb0(param_1,3,local_res10,1);
      }
    }
    Scaleform::Lock::DoLock(param_1 + 0x20);
    FUN_1435ff510(*(undefined8 *)(param_1 + 0x50));
    Scaleform::Lock::DoLock(param_1 + 0x20);
    cVar3 = FUN_143df8220(param_1 + 0xd0);
    if (cVar3 == '\0') {
      Scaleform::Lock::DoLock(lVar1);
      *(undefined1 *)(param_1 + 0x120) = 1;
      Scaleform::Lock::DoLock(lVar1);
      FUN_1435fedb0(param_1,0,0,0);
    }
    if (!bVar15) {
      Scaleform::Thread::MSleep(10);
    }
    Scaleform::Lock::DoLock(lVar1);
    cVar3 = *(char *)(param_1 + 0x120);
    Scaleform::Lock::DoLock(lVar1);
  }
  Scaleform::Lock::DoLock(lVar1);
  cVar3 = *(char *)(param_1 + 0x120);
  Scaleform::Lock::DoLock(lVar1);
  bVar15 = cVar3 == '\0';
LAB_1435fed56:
  iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar6 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  return bVar15;
}



// FUNCTION 1435fedb0 FUN_1435fedb0 body=375 status=ok
// SIG undefined FUN_1435fedb0(void)

void FUN_1435fedb0(longlong param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  RefCountImpl *this;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0x147;
  uVar5 = (ulonglong)param_4;
  this = (RefCountImpl *)
         (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x30,local_res10);
  if (this != (RefCountImpl *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR_FUN_144f70a50;
    *(undefined ***)this = &PTR_FUN_145b4db40;
    *(undefined4 *)(this + 8) = 1;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(undefined4 *)(this + 0x10) = param_2;
  if (param_4 != 0) {
    do {
      lVar3 = *(longlong *)(this + 0x20);
      uVar4 = lVar3 + 1;
      if (uVar4 < *(ulonglong *)(this + 0x20)) {
        uVar6 = uVar4;
        if (uVar4 < *(ulonglong *)(this + 0x28) >> 1) {
LAB_1435fee7e:
          FUN_143300ed0(this + 0x18,this + 0x18,uVar6);
        }
      }
      else if (*(ulonglong *)(this + 0x28) < uVar4) {
        uVar6 = (uVar4 >> 2) + uVar4;
        goto LAB_1435fee7e;
      }
      *(ulonglong *)(this + 0x20) = uVar4;
      puVar1 = (undefined4 *)(*(longlong *)(this + 0x18) + lVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
      }
      param_3 = param_3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  Scaleform::Lock::DoLock(param_1 + 0x128);
  FUN_1432f29e0(param_1 + 0x158,param_1 + 0x158,*(longlong *)(param_1 + 0x160) + 1);
  puVar2 = (undefined8 *)
           (*(longlong *)(param_1 + 0x158) + (*(longlong *)(param_1 + 0x160) + -1) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
    *puVar2 = this;
  }
  Scaleform::Lock::DoLock(param_1 + 0x128);
  Scaleform::RefCountImpl::Release(this);
  return;
}



// FUNCTION 1435fef30 FUN_1435fef30 body=78 status=ok
// SIG undefined FUN_1435fef30(void)

void FUN_1435fef30(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  lVar1 = param_2[3];
  if (lVar1 != 0) {
    *(longlong *)(*param_2 + 8) = param_2[1];
    plVar2 = (longlong *)param_2[1];
    *plVar2 = *param_2;
    *param_2 = -1;
    param_2[1] = -1;
    param_2[3] = 0;
    FUN_143594aa0(local_res10,param_1,lVar1,CONCAT71((int7)((ulonglong)plVar2 >> 8),1));
  }
  return;
}



// FUNCTION 1435fef90 FUN_1435fef90 body=441 status=ok
// SIG undefined FUN_1435fef90(void)

undefined1 * FUN_1435fef90(undefined1 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res18 [8];
  
  if ((longlong *)param_3[3] == param_3 + 2) {
    lVar2 = *param_3;
    lVar1 = lVar2 + 0x50;
    lVar5 = *(longlong *)(lVar2 + 200);
    if (lVar5 == lVar1) {
      *param_1 = 1;
    }
    else {
      plVar3 = *(longlong **)(lVar2 + 0xf0);
      if ((param_3 < plVar3) || (plVar3 + (ulonglong)*(uint *)(lVar2 + 0xe0) * 4 <= param_3)) {
        if ((*(uint *)(*(longlong *)(lVar2 + 0x38) + 0x14) >> 2 & 1) == 0) {
          plVar3 = *(longlong **)(lVar2 + 0xf8);
          if ((param_3 < plVar3) || (plVar3 + (ulonglong)*(uint *)(lVar2 + 0xe4) * 4 <= param_3)) {
            plVar3 = *(longlong **)(lVar2 + 0x100);
            if ((plVar3 != (longlong *)0x0) &&
               ((plVar3 <= param_3 && (param_3 < plVar3 + (ulonglong)*(uint *)(lVar2 + 0xe8) * 4))))
            {
              do {
                FUN_1435fef30(param_2,*(longlong *)(lVar5 + 0x48) +
                                      ((longlong)param_3 - (longlong)plVar3 >> 5 & 0xffffffffU) *
                                      0x20);
                lVar5 = *(longlong *)(lVar5 + 0x78);
              } while (lVar5 != lVar1);
            }
            *param_1 = 1;
          }
          else {
            do {
              FUN_1435fef30(param_2,*(longlong *)(lVar5 + 0x40) +
                                    ((longlong)param_3 - (longlong)plVar3 >> 5 & 0xffffffffU) * 0x20
                           );
              lVar5 = *(longlong *)(lVar5 + 0x78);
            } while (lVar5 != lVar1);
            *param_1 = 1;
          }
        }
        else {
          *param_1 = 0;
        }
      }
      else {
        do {
          plVar4 = (longlong *)
                   (*(longlong *)(lVar5 + 0x38) +
                   ((longlong)param_3 - (longlong)plVar3 >> 5 & 0xffffffffU) * 0x20);
          lVar2 = plVar4[3];
          if (lVar2 != 0) {
            *(longlong *)(*plVar4 + 8) = plVar4[1];
            *(longlong *)plVar4[1] = *plVar4;
            *plVar4 = -1;
            plVar4[1] = -1;
            plVar4[3] = 0;
            FUN_143594aa0(local_res18,param_2,lVar2,1);
          }
          lVar5 = *(longlong *)(lVar5 + 0x78);
        } while (lVar5 != lVar1);
        *param_1 = 1;
      }
    }
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1435ff150 FUN_1435ff150 body=216 status=ok
// SIG undefined FUN_1435ff150(void)

ulonglong FUN_1435ff150(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 local_res10;
  
  if (((byte)param_2[3] & 3) < 2) {
    iVar1 = *param_2;
    if ((longlong)iVar1 == 0) {
      return CONCAT71((int7)(int3)((uint)iVar1 >> 8),(*(uint *)(param_1 + 0xa0) & 0xfffffffb) == 0);
    }
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                    (*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 0x18) & 0xfffffffb)
                    == 0);
  }
  local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 8);
  puVar4 = (uint *)FUN_14358f8b0(&local_res10);
  uVar5 = 0;
  uVar2 = (uint)puVar4;
  if (uVar2 != 0) {
    do {
      uVar3 = FUN_14358f8b0(&local_res10);
      if (uVar3 == 0) {
        puVar4 = (uint *)(param_1 + 0xa0);
      }
      else {
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar3 * 0x18);
      }
      if ((*puVar4 & 0xfffffffb) == 0) {
        return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}



// FUNCTION 1435ff230 FUN_1435ff230 body=103 status=ok
// SIG undefined FUN_1435ff230(void)

int FUN_1435ff230(longlong param_1,void *param_2,int param_3)

{
  size_t _Size;
  
  _Size = (size_t)param_3;
  FUN_143612f40(param_1 + 0x10,*(longlong *)(param_1 + 0x18) + _Size);
  _guard_xfg_dispatch_icall_nop
            ((void *)((*(longlong *)(param_1 + 0x10) - _Size) + *(longlong *)(param_1 + 0x18)),
             param_2,_Size);
  return param_3;
}



// FUNCTION 1435ff2a0 FUN_1435ff2a0 body=54 status=ok
// SIG undefined FUN_1435ff2a0(void)

int FUN_1435ff2a0(longlong param_1,void *param_2,int param_3)

{
  _guard_xfg_dispatch_icall_nop
            (param_2,(void *)((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)),
             (longlong)param_3);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
  return param_3;
}



// FUNCTION 1435ff310 FUN_1435ff310 body=12 status=ok
// SIG undefined FUN_1435ff310(void)

void FUN_1435ff310(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435ff318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,0,0);
  return;
}



// FUNCTION 1435ff330 LSeek body=17 status=ok
// SIG undefined LSeek(void)

longlong FGFxFile::LSeek(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  return (longlong)iVar1;
}



// FUNCTION 1435ff370 FUN_1435ff370 body=160 status=ok
// SIG undefined FUN_1435ff370(void)

void FUN_1435ff370(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint local_res8 [2];
  
  lVar2 = 0;
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
  uVar1 = (ulonglong)local_res8[0];
  FUN_143612f40(param_1 + 2,uVar1);
  if (local_res8[0] != 0) {
    do {
      local_res8[0] = local_res8[0] & 0xffffff00;
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
      *(undefined1 *)(lVar2 + param_1[2]) = (undefined1)local_res8[0];
      uVar1 = uVar1 - 1;
      lVar2 = lVar2 + 1;
    } while (uVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ff409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}



// FUNCTION 1435ff420 FUN_1435ff420 body=85 status=ok
// SIG undefined FUN_1435ff420(void)

void FUN_1435ff420(longlong param_1,longlong *param_2)

{
  int iVar1;
  int local_res8 [2];
  
  iVar1 = *(int *)(param_1 + 0x18);
  local_res8[0] = iVar1;
  (**(code **)(*param_2 + 0x48))(param_2,local_res8,4);
  if (iVar1 != 0) {
    (**(code **)(*param_2 + 0x48))
              (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1435ff4b0 FUN_1435ff4b0 body=77 status=ok
// SIG undefined FUN_1435ff4b0(void)

void FUN_1435ff4b0(longlong *param_1)

{
  if ((param_1[3] != 0) && ((param_1[4] & 0xfffffffffffffffeU) != 0)) {
    FUN_143612650(param_1 + 2,param_1 + 2,0);
  }
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001435ff4f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}



// FUNCTION 1435ff510 FUN_1435ff510 body=170 status=ok
// SIG undefined FUN_1435ff510(void)

void FUN_1435ff510(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 1) {
    return;
  }
  if (uVar1 < *(ulonglong *)(param_1 + 0x18)) {
    do {
      *(undefined1 *)((*(longlong *)(param_1 + 0x10) - (longlong)*(int *)(param_1 + 0x28)) + uVar1)
           = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_1 + 0x18));
  }
  uVar1 = *(longlong *)(param_1 + 0x18) - (longlong)*(int *)(param_1 + 0x28);
  if (uVar1 < *(ulonglong *)(param_1 + 0x18)) {
    uVar2 = uVar1;
    if (*(ulonglong *)(param_1 + 0x20) >> 1 <= uVar1) goto LAB_1435ff59f;
  }
  else {
    if (uVar1 <= *(ulonglong *)(param_1 + 0x20)) goto LAB_1435ff59f;
    uVar2 = (uVar1 >> 2) + uVar1;
  }
  FUN_143612650(param_1 + 0x10,param_1 + 0x10,uVar2);
LAB_1435ff59f:
  *(ulonglong *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1435ff5d0 FUN_1435ff5d0 body=190 status=ok
// SIG undefined FUN_1435ff5d0(void)

void FUN_1435ff5d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_48 [2];
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint local_28 [2];
  uint *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = 0;
  uStack_30 = param_2;
  if (DAT_146b7a8d0 == 0x3fffffff) {
    local_48[0] = 0;
    local_40 = local_48;
    if ((*(uint *)(param_1 + 0x10) & 0xfffffffc) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 3;
      FUN_143614e80(&local_40,param_1);
    }
  }
  local_20 = local_28;
  local_28[0] = DAT_146b7a8d0 + 1;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = (undefined4)uStack_30;
  uStack_c = uStack_30._4_4_;
  DAT_146b7a8d0 = local_28[0];
  if (*(uint *)(param_1 + 0x10) >> 2 != local_28[0]) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 3 | local_28[0] * 4;
    FUN_143614de0(&local_20,param_1);
    lVar1 = CONCAT44(uStack_c,uStack_10);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    *(longlong *)(param_1 + 0x60) = lVar1;
    *(longlong *)(*(longlong *)(lVar1 + 0x68) + 0x60) = param_1;
    *(longlong *)(lVar1 + 0x68) = param_1;
  }
  return;
}



// FUNCTION 1435ff6a0 FUN_1435ff6a0 body=213 status=ok
// SIG undefined FUN_1435ff6a0(void)

void FUN_1435ff6a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_48 [2];
  undefined4 *local_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint local_28 [2];
  uint *local_20;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = 0;
  uStack_30 = param_2;
  if (DAT_146b7a930 == 0x7ffffff) {
    local_48[0] = 0;
    local_40 = local_48;
    if ((*(uint *)(param_1 + 0x10) & 0xffffffe0) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x1f;
      FUN_143616bf0(&local_40,param_1);
    }
  }
  local_20 = local_28;
  local_28[0] = DAT_146b7a930 + 1;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = (undefined4)uStack_30;
  uStack_c = uStack_30._4_4_;
  DAT_146b7a930 = local_28[0];
  if (*(uint *)(param_1 + 0x10) >> 5 != local_28[0]) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x1f | local_28[0] * 0x20;
    FUN_143615a80(&local_20,param_1);
    lVar1 = CONCAT44(uStack_c,uStack_10);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0xd8);
    *(longlong *)(param_1 + 0xd0) = lVar1;
    *(longlong *)(*(longlong *)(lVar1 + 0xd8) + 0xd0) = param_1;
    *(longlong *)(lVar1 + 0xd8) = param_1;
    *(int *)(param_1 + 0x1c) = local_18 + 1;
  }
  return;
}



// FUNCTION 1435ff7c0 FUN_1435ff7c0 body=237 status=ok
// SIG undefined FUN_1435ff7c0(void)

void FUN_1435ff7c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  for (lVar8 = *(longlong *)(param_1 + 0xd8); lVar8 != param_1; lVar8 = *(longlong *)(lVar8 + 0xd8))
  {
    *(undefined8 *)(lVar8 + 0x20) = 0;
  }
  *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x20) = *(longlong *)(param_1 + 0xd8);
  do {
    bVar3 = false;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0xd8);
    if (lVar8 == param_1) {
      return;
    }
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar8 + 200) + 0x28);
      for (lVar2 = *(longlong *)(*(longlong *)(lVar8 + 200) + 0x78); lVar2 != lVar8 + 0x50;
          lVar2 = *(longlong *)(lVar2 + 0x78)) {
        lVar4 = *(longlong *)(lVar2 + 0x28);
        lVar6 = lVar5;
        if (*(longlong *)(lVar4 + 0x20) != 0) {
          uVar7 = *(uint *)(lVar5 + 0x1c);
          bVar9 = *(uint *)(lVar4 + 0x1c) < uVar7;
          lVar6 = lVar4;
          if (*(uint *)(lVar4 + 0x1c) != uVar7) {
            do {
              if (bVar9) {
                do {
                  lVar4 = *(longlong *)(lVar4 + 0x20);
                } while (*(uint *)(lVar4 + 0x1c) < uVar7);
              }
              uVar1 = *(uint *)(lVar4 + 0x1c);
              while (uVar7 < uVar1) {
                lVar5 = *(longlong *)(lVar5 + 0x20);
                uVar7 = *(uint *)(lVar5 + 0x1c);
              }
              uVar7 = *(uint *)(lVar5 + 0x1c);
              bVar9 = uVar1 < uVar7;
              lVar6 = lVar4;
            } while (uVar1 != uVar7);
          }
        }
        lVar5 = lVar6;
      }
      if (*(longlong *)(lVar8 + 0x20) != lVar5) {
        *(longlong *)(lVar8 + 0x20) = lVar5;
        bVar3 = true;
      }
      lVar8 = *(longlong *)(lVar8 + 0xd8);
    } while (lVar8 != param_1);
  } while (bVar3);
  return;
}



// FUNCTION 1435ff8c0 FUN_1435ff8c0 body=68 status=ok
// SIG undefined FUN_1435ff8c0(void)

void FUN_1435ff8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1435c8090();
  if ((plVar2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_4,param_3), cVar1 != '\0')) {
    return;
  }
  FUN_143590140(param_3,param_4);
  return;
}



// FUNCTION 1435ff910 FUN_1435ff910 body=210 status=ok
// SIG undefined FUN_1435ff910(void)

undefined1 *
FUN_1435ff910(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  plVar3 = (longlong *)FUN_1435c8090(param_2,param_5);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = FUN_1435c8e40(local_18,0x3f6,param_2);
    FUN_1435ccf60(param_2,uVar4,&DAT_145b14e70);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    cVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_4,param_3);
    if (cVar2 != '\0') {
      *param_1 = 1;
      return param_1;
    }
    uVar4 = FUN_1435c8e40(local_18,0x40a,param_2);
    FUN_1435ccf60(param_2,uVar4,&DAT_145b155b0);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      *param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1435ff9f0 FUN_1435ff9f0 body=886 status=ok
// SIG undefined FUN_1435ff9f0(void)

longlong FUN_1435ff9f0(char *param_1,int param_2,double param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  bool bVar16;
  undefined6 local_res18;
  undefined2 uStackX_1e;
  char local_38 [48];
  
  if (param_3 == (double)(int)param_3) {
    _itoa_s((int)param_3,param_1,(longlong)param_2,10);
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_1[lVar4] != '\0');
    return lVar4;
  }
  if ((((uint)((ulonglong)param_3 >> 0x20) & 0x7ff00000) == 0x7ff00000) &&
     (((ulonglong)param_3 & 0xfffffffffffff) != 0)) {
    builtin_strncpy(param_1,"NaN",4);
    return 3;
  }
  if (param_3 == INFINITY) {
    builtin_strncpy(param_1,"Infinity",9);
    return 8;
  }
  if (param_3 == -INFINITY) {
    builtin_strncpy(param_1,"-Infinity",10);
    return 9;
  }
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_38[0x18] = '\0';
  local_38[0x19] = '\0';
  local_38[0x1a] = '\0';
  local_38[0x1b] = '\0';
  local_38[0x1c] = '\0';
  local_38[0x1d] = '\0';
  local_38[0x1e] = '\0';
  local_38[0x1f] = '\0';
  local_38[0x20] = '\0';
  local_38[0x21] = '\0';
  local_38[0x22] = '\0';
  local_38[0x23] = '\0';
  local_38[0x24] = '\0';
  local_38[0x25] = '\0';
  local_38[0x26] = '\0';
  local_38[0x27] = '\0';
  _local_res18 = CONCAT26((short)((ulonglong)param_3 >> 0x30),0x6736312e25);
  if ((1e+16 <= ABS(param_3)) && (ABS(param_3) <= 1e+21 && ABS(param_3) != 1e+21)) {
    _local_res18 = CONCAT44(stack0x0000001c,0x37312e25);
    if ((1e+17 <= ABS(param_3)) &&
       (((_local_res18 = CONCAT44(stack0x0000001c,0x38312e25), 1e+18 <= ABS(param_3) &&
         (_local_res18 = CONCAT44(stack0x0000001c,0x39312e25), 1e+19 <= ABS(param_3))) &&
        (_local_res18 = CONCAT44(stack0x0000001c,0x30322e25), 1e+20 <= ABS(param_3))))) {
      _local_res18 = CONCAT44(stack0x0000001c,0x31322e25);
    }
  }
  iVar3 = FUN_1432f2bf0(local_38,0x28,&local_res18,param_3);
  uVar9 = 0;
  uVar15 = 0;
  uVar6 = uVar9;
  if (0 < iVar3) {
    do {
      if (local_38[uVar6] == 'e') goto LAB_1435ffc29;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar3);
  }
  cVar14 = (char)local_38._0_8_;
  if (cVar14 != '\0') {
    pcVar7 = local_38;
    uVar6 = uVar9;
    do {
      uVar10 = (uint)uVar6;
      if ((*pcVar7 - 0x2cU & 0xfd) == 0) {
        if (local_38[iVar3 + -1] != '0') {
          uVar8 = (ulonglong)(iVar3 + -2);
          uVar6 = uVar8;
          if ((longlong)(int)uVar10 < (longlong)uVar8) goto LAB_1435ffc04;
        }
        break;
      }
      pcVar7 = pcVar7 + 1;
      uVar6 = (ulonglong)(uVar10 + 1);
    } while (*pcVar7 != '\0');
  }
  goto LAB_1435ffc2d;
  while( true ) {
    uVar5 = uVar5 - 1;
    uVar6 = (ulonglong)uVar5;
    uVar8 = uVar8 - 1;
    if ((longlong)uVar8 <= (longlong)(int)uVar10) break;
LAB_1435ffc04:
    uVar5 = (uint)uVar6;
    if (local_38[uVar8] != '0') break;
  }
  if (((int)uVar5 < iVar3 + -2) && (uVar5 != uVar10)) {
    local_38[(int)(uVar5 + 1)] = '\0';
LAB_1435ffc29:
    cVar14 = (char)local_38._0_8_;
  }
LAB_1435ffc2d:
  pcVar7 = local_38;
  pcVar12 = param_1;
  cVar1 = cVar14;
  do {
    if (cVar1 == '\0') goto LAB_1435ffd4c;
    if (cVar1 == ',') {
      *pcVar12 = '.';
    }
    else {
      if (cVar1 == 'e') {
        pcVar11 = pcVar7 + 1;
        *pcVar12 = *pcVar7;
        pcVar13 = pcVar12 + 1;
        cVar1 = *pcVar11;
        bVar16 = (cVar1 - 0x2bU & 0xfd) == 0;
        if (bVar16) {
          *pcVar13 = cVar1;
          pcVar11 = pcVar7 + 2;
          pcVar13 = pcVar12 + 2;
        }
        cVar2 = *pcVar11;
        while (cVar2 == '0') {
          pcVar11 = pcVar11 + 1;
          cVar2 = *pcVar11;
        }
        cVar2 = *pcVar11;
        pcVar12 = pcVar13;
        while (('/' < cVar2 && (uVar15 = (uint)uVar9, cVar2 < ':'))) {
          pcVar11 = pcVar11 + 1;
          *pcVar12 = cVar2;
          pcVar12 = pcVar12 + 1;
          uVar15 = (int)cVar2 + (uVar15 * 5 + -0x18) * 2;
          uVar9 = (ulonglong)uVar15;
          cVar2 = *pcVar11;
        }
        if ((bVar16 && cVar1 == '-') && (uVar15 - 1 < 6)) {
          pcVar7 = local_38;
          pcVar12 = param_1;
          if (cVar14 == '-') {
            pcVar7 = local_38 + 1;
            pcVar12 = param_1 + 1;
          }
          cVar14 = *pcVar7;
          if (((byte)(cVar14 - 0x31U) < 9) && (pcVar12[1] == '.')) {
            pcVar12[0] = '0';
            pcVar12[1] = '.';
            pcVar12 = pcVar12 + 2;
            if (1 < (int)uVar15) {
              pcVar11 = pcVar12;
              for (uVar9 = (ulonglong)(uVar15 - 1); uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar11 = '0';
                pcVar11 = pcVar11 + 1;
              }
              pcVar12 = pcVar12 + (uVar15 - 1);
            }
            while (cVar14 != 'e') {
              if ((byte)(cVar14 - 0x30U) < 10) {
                *pcVar12 = cVar14;
                pcVar12 = pcVar12 + 1;
              }
              pcVar11 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              cVar14 = *pcVar11;
            }
          }
        }
LAB_1435ffd4c:
        *pcVar12 = '\0';
        return (longlong)pcVar12 - (longlong)param_1;
      }
      *pcVar12 = cVar1;
    }
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
    pcVar12 = pcVar12 + 1;
  } while( true );
}



// FUNCTION 1435ffd70 FUN_1435ffd70 body=247 status=ok
// SIG undefined FUN_1435ffd70(void)

undefined8 * FUN_1435ffd70(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_LAB_145b4e178;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = param_2;
  plVar5 = (longlong *)FUN_1434ce5b0(local_res18);
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  lVar3 = *plVar5;
  plVar5 = *(longlong **)(lVar3 + 0xd8);
  lVar4 = plVar5[0x1b];
  uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_res10);
  local_res8 = lVar3;
  FUN_1434e7e70(lVar2 + 0x30,uVar6,lVar4,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[7] = lVar3;
  plVar5 = (longlong *)FUN_1434dcd90(local_res18,param_2);
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  lVar3 = *plVar5;
  plVar5 = *(longlong **)(lVar3 + 0xd8);
  lVar4 = plVar5[0x1b];
  uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_res10);
  local_res8 = lVar3;
  FUN_1434e7e70(lVar2 + 0x30,uVar6,lVar4,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[8] = lVar3;
  return param_1;
}



// FUNCTION 1435ffe70 FUN_1435ffe70 body=130 status=ok
// SIG undefined FUN_1435ffe70(void)

void FUN_1435ffe70(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_LAB_145b4e178;
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[8] = uVar1 - 1;
    }
  }
  uVar1 = param_1[7];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[7] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_LAB_145b4acf0;
  FUN_1435ab0c0(param_1);
  return;
}



// FUNCTION 1435fff10 FUN_1435fff10 body=354 status=ok
// SIG undefined FUN_1435fff10(void)

undefined1 *
FUN_1435fff10(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *_Str1;
  char *_Str2;
  char *local_78;
  size_t local_70;
  char *local_48;
  size_t local_40;
  
  iVar3 = (**(code **)(*param_4 + 0xf0))(param_4);
  iVar4 = (**(code **)(*param_5 + 0xf0))(param_5);
  if ((iVar3 != 2) && (iVar3 != 5)) {
LAB_1435fff76:
    if ((iVar4 == 2) || (iVar4 == 5)) {
      cVar1 = (**(code **)(*param_4 + 0x100))(param_4);
      if (cVar1 != '\0') goto LAB_1435fffad;
    }
    iVar3 = (**(code **)(*param_4 + 0xf8))(param_4,param_5);
    *param_3 = iVar3 == 1;
    goto LAB_14360004f;
  }
  cVar1 = (**(code **)(*param_5 + 0x100))(param_5);
  if (cVar1 == '\0') goto LAB_1435fff76;
LAB_1435fffad:
  FUN_1432c5960(&local_48,DAT_146b62f28);
  FUN_1432c5960(&local_78,DAT_146b62f28);
  (**(code **)(*param_4 + 0xe0))(param_4,&local_48,0);
  (**(code **)(*param_5 + 0xe0))(param_5,&local_78,0);
  if (local_40 == local_70) {
    _Str2 = "";
    if (local_78 != (char *)0x0) {
      _Str2 = local_78;
    }
    _Str1 = "";
    if (local_48 != (char *)0x0) {
      _Str1 = local_48;
    }
    iVar3 = strncmp(_Str1,_Str2,local_40);
    if (iVar3 != 0) goto LAB_143600036;
    uVar2 = 1;
  }
  else {
LAB_143600036:
    uVar2 = 0;
  }
  *param_3 = uVar2;
  Scaleform::StringBuffer::~StringBuffer(&local_78);
  Scaleform::StringBuffer::~StringBuffer(&local_48);
LAB_14360004f:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143600080 FUN_143600080 body=298 status=ok
// SIG undefined FUN_143600080(void)

undefined1 *
FUN_143600080(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  char *_Str1;
  char *local_68;
  size_t local_60;
  char *local_38;
  size_t local_30;
  
  plVar1 = param_5;
  *param_3 = 0;
  cVar2 = (**(code **)(*param_5 + 0x100))(param_5);
  if (cVar2 == '\0') goto LAB_14360018a;
  FUN_1432c5960(&local_38,DAT_146b62f28);
  FUN_1432c5960(&local_68,DAT_146b62f28);
  (**(code **)(*plVar1 + 0xe0))(plVar1,&local_38,0);
  pcVar5 = (char *)FUN_143591800(param_6,&param_5,&local_68);
  if (*pcVar5 == '\0') {
    *param_2 = 0;
    Scaleform::StringBuffer::~StringBuffer(&local_68);
    Scaleform::StringBuffer::~StringBuffer(&local_38);
    return param_2;
  }
  if (local_30 == local_60) {
    pcVar5 = "";
    if (local_68 != (char *)0x0) {
      pcVar5 = local_68;
    }
    _Str1 = "";
    if (local_38 != (char *)0x0) {
      _Str1 = local_38;
    }
    iVar4 = strncmp(_Str1,pcVar5,local_60);
    if (iVar4 != 0) goto LAB_14360016e;
    uVar3 = 1;
  }
  else {
LAB_14360016e:
    uVar3 = 0;
  }
  *param_4 = uVar3;
  *param_3 = 1;
  Scaleform::StringBuffer::~StringBuffer(&local_68);
  Scaleform::StringBuffer::~StringBuffer(&local_38);
LAB_14360018a:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1436001b0 FUN_1436001b0 body=31 status=ok
// SIG undefined FUN_1436001b0(void)

undefined8
FUN_1436001b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1434d72c0(param_4,param_2,param_3,param_5);
  return param_2;
}



// FUNCTION 143600240 FUN_143600240 body=434 status=ok
// SIG undefined FUN_143600240(void)

undefined8 FUN_143600240(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 local_res18 [2];
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x28) + 0x90);
  iVar2 = *(int *)(*(longlong *)(param_4 + 0x28) + 0x90);
  if ((((iVar1 - 0x12U < 2) && ((~(*(byte *)(*(longlong *)(param_3 + 0x28) + 0x88) >> 5) & 1) != 0))
      && (iVar2 - 0x12U < 2)) &&
     ((~(*(byte *)(*(longlong *)(param_4 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    lVar4 = (**(code **)(*param_1 + 0x70))();
    lVar5 = *(longlong *)(lVar4 + 0xa0);
    if (lVar5 == 0) {
      local_res18[0] = 0x152;
      plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x98) + 0x48);
      lVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(lVar4 + 0x80),local_res18);
    }
    else {
      *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar5 + 0x28);
    }
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = UKWIllustDemoOrderDataAsset::UKWIllustDemoOrderDataAsset(lVar5,lVar4);
    }
    if (iVar1 == 0x12) {
      FUN_1434e8360(uVar6,param_3);
    }
    else if (iVar1 == 0x13) {
      FUN_1434d74b0(uVar6,param_3);
    }
    if (iVar2 == 0x12) {
      FUN_1434e8360(uVar6,param_4);
    }
    else if (iVar2 == 0x13) {
      FUN_1434d74b0(uVar6,param_4);
    }
    uStack_30 = 0;
    local_38 = 0xc;
    if (&local_38 != param_2) {
      if (uVar6 != 0) {
        *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
      }
      FUN_143603d30(param_2);
      *param_2 = local_38;
      param_2[1] = uStack_34;
      param_2[2] = (undefined4)uStack_30;
      param_2[3] = uStack_30._4_4_;
      *(ulonglong *)(param_2 + 4) = uVar6;
      *(undefined8 *)(param_2 + 6) = uStack_40;
    }
    if (((uVar6 & 1) == 0) && (uVar6 != 0)) {
      if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
        FUN_1434ef880(uVar6);
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143600400 FUN_143600400 body=876 status=ok
// SIG undefined FUN_143600400(void)

undefined1 * FUN_143600400(undefined8 param_1,undefined1 *param_2,longlong param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  ulonglong local_res20;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  undefined8 local_40;
  
  local_res20 = local_res20 & 0xffffffff00000000;
  uVar9 = *param_4 & 0x1f;
  if (uVar9 == 0) goto LAB_143600705;
  if (uVar9 == 0xc) {
    bVar10 = *(longlong *)(param_4 + 4) == 0;
LAB_143600453:
    if (bVar10) {
LAB_143600705:
      if (uVar9 == 0xc) {
        bVar10 = *(longlong *)(param_4 + 4) == 0;
      }
      else if (uVar9 == 10) {
        bVar10 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      }
      else {
        bVar10 = false;
      }
      uVar7 = FUN_1435c8e40(&local_58,0x3f2 - (uint)bVar10);
      FUN_1435ccf60(param_3,uVar7,&DAT_145b155b0);
      piVar3 = (int *)(CONCAT44(uStack_4c,uStack_50) + 0x18);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      return param_2;
    }
  }
  else if (uVar9 == 10) {
    bVar10 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    goto LAB_143600453;
  }
  lVar6 = *(longlong *)(param_3 + 0x10);
  if (uVar9 == 0) {
LAB_14360047f:
    if (uVar9 != 0xc) {
LAB_1436005e9:
      pcVar5 = (char *)FUN_143614860(param_4,&local_res20,*(undefined8 *)(lVar6 + 0x218));
      if ((*pcVar5 == '\0') || ((4 < (*param_4 & 0x1f) && ((*param_4 & 0x1f) != 10)))) {
        *param_2 = 0;
        return param_2;
      }
      FUN_143591c60(param_4,&local_res20,lVar6);
      goto LAB_143600627;
    }
    plVar1 = *(longlong **)(param_4 + 4);
    if (((plVar1 == (longlong *)0x0) || (*(int *)(plVar1[5] + 0x90) != 0x12)) ||
       ((~(*(byte *)(plVar1[5] + 0x88) >> 5) & 1) == 0)) {
      lVar2 = *(longlong *)(param_4 + 4);
      if (((lVar2 != 0) && (*(int *)(*(longlong *)(lVar2 + 0x28) + 0x90) == 0x13)) &&
         ((~(*(byte *)(*(longlong *)(lVar2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x98) + 0x10) + 0x218);
        local_res20 = lVar6 + 0x48;
        piVar3 = (int *)(lVar6 + 0x60);
        *piVar3 = *piVar3 + 1;
        FUN_1434dba30(lVar2,&local_res20);
        *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
        if (9 < ((byte)*param_4 & 0x1f)) {
          if ((*param_4 >> 9 & 1) == 0) {
            FUN_1435920c0(param_4);
          }
          else {
            piVar3 = *(int **)(param_4 + 2);
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *param_4 = *param_4 & 0xfffffde0;
            param_4[2] = 0;
            param_4[3] = 0;
            param_4[4] = 0;
            param_4[5] = 0;
            param_4[6] = 0;
            param_4[7] = 0;
          }
        }
        *param_4 = *param_4 & 0xffffffea;
        *param_4 = *param_4 | 10;
        local_58 = local_res20;
        uVar4 = local_58;
        local_58._0_4_ = (uint)local_res20;
        local_58._4_4_ = (uint)(local_res20 >> 0x20);
        param_4[4] = (uint)local_58;
        param_4[5] = local_58._4_4_;
        param_4[6] = uStack_50;
        param_4[7] = uStack_4c;
        piVar3 = (int *)(local_res20 + 0x18);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          local_58 = uVar4;
          FUN_14335f920();
          *param_2 = 1;
          return param_2;
        }
        goto LAB_1436006f5;
      }
      goto LAB_1436005e9;
    }
    FUN_1432c5960(&local_48,DAT_146b62f28);
    (**(code **)(*plVar1 + 0xe8))(plVar1,&local_48,0,0,0);
  }
  else {
    if (uVar9 < 5) {
      FUN_143591c60(param_4,param_2,lVar6);
      return param_2;
    }
    if (uVar9 != 10) goto LAB_14360047f;
LAB_143600627:
    FUN_1432c5960(&local_48,DAT_146b62f28);
    local_res20 = *(ulonglong *)(param_4 + 4);
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    FUN_1434ca780(&local_48,&local_res20);
    piVar3 = (int *)(local_res20 + 0x18);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_14335f920();
    }
  }
  puVar8 = &DAT_145af3922;
  if (local_48 != (undefined1 *)0x0) {
    puVar8 = local_48;
  }
  lVar6 = FUN_143360a90(*(undefined8 *)(lVar6 + 0x218),puVar8,local_40);
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
  if (9 < ((byte)*param_4 & 0x1f)) {
    if ((*param_4 >> 9 & 1) == 0) {
      FUN_1435920c0(param_4);
    }
    else {
      piVar3 = *(int **)(param_4 + 2);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *param_4 = *param_4 & 0xfffffde0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
    }
  }
  *param_4 = *param_4 & 0xffffffea;
  *param_4 = *param_4 | 10;
  local_58._0_4_ = (uint)lVar6;
  local_58._4_4_ = (uint)((ulonglong)lVar6 >> 0x20);
  param_4[4] = (uint)local_58;
  param_4[5] = local_58._4_4_;
  param_4[6] = uStack_50;
  param_4[7] = uStack_4c;
  piVar3 = (int *)(lVar6 + 0x18);
  *piVar3 = *piVar3 + -1;
  local_58 = lVar6;
  if (*piVar3 == 0) {
    FUN_14335f920(lVar6);
  }
  Scaleform::StringBuffer::~StringBuffer(&local_48);
LAB_1436006f5:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143600780 FUN_143600780 body=1356 status=ok
// SIG undefined FUN_143600780(void)

void FUN_143600780(longlong *param_1,longlong param_2,ulonglong *param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *local_res8;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  
  local_res18 = local_res18 & 0xffffffff00000000;
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x1d8);
  local_res8 = param_1;
  local_res10 = param_2;
  plVar7 = (longlong *)FUN_1435caba0(param_2,param_4);
  local_60 = *(longlong *)(lVar2 + 0x20);
  *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + 1;
  local_68 = *(longlong *)(lVar2 + 0x28);
  *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1;
  local_58 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
  if ((*(byte *)(plVar7 + 0x11) >> 5 & 1) == 0) {
    plVar10 = (longlong *)plVar7[0x16];
  }
  else {
    plVar10 = *(longlong **)(param_2 + 0x200);
  }
  uVar8 = (**(code **)(*local_res8 + 0x60))();
  FUN_1434ce180(uVar8,&local_res20,uVar8,uVar3,&local_58,0);
  uVar6 = local_res20;
  uVar4 = *param_3;
  if (local_res20 != uVar4) {
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_3 = uVar4 - 1;
      }
    }
    *param_3 = uVar6;
  }
  uVar9 = *param_4 & 0x1f;
  if (uVar9 != 0) {
    if (uVar9 == 0xc) {
      bVar11 = *(longlong *)(param_4 + 4) == 0;
LAB_1436008c9:
      if (bVar11) goto LAB_143600acd;
    }
    else if (uVar9 == 10) {
      bVar11 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1436008c9;
    }
    local_res18 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145af95b0,4);
    uVar4 = local_res20;
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    uVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,local_50,0);
    FUN_1434d0050(uVar4,uVar3,&local_res18,uVar8);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_50[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (plVar10 != (longlong *)0x0) {
      local_res18 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145b014b4,4);
      uVar4 = local_res20;
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      uVar8 = (**(code **)(*plVar10 + 0x28))(plVar10,local_50,0);
      FUN_1434d0050(uVar4,uVar3,&local_res18,uVar8);
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      piVar1 = (int *)(local_50[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    plVar10 = &local_60;
    if ((*(byte *)(plVar7 + 0x11) >> 1 & 1) == 0) {
      plVar10 = &local_68;
    }
    local_res18 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"isDynamic",9);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    FUN_1434d0050(local_res20,uVar3,&local_res18,plVar10);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar10 = &local_60;
    if ((*(byte *)(plVar7 + 0x11) >> 6 & 1) == 0) {
      plVar10 = &local_68;
    }
    local_res18 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"isFinal",7);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    FUN_1434d0050(local_res20,uVar3,&local_res18,plVar10);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar10 = &local_60;
    if ((*(byte *)(plVar7 + 0x11) >> 5 & 1) == 0) {
      plVar10 = &local_68;
    }
    local_res18 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"isStatic",8);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    FUN_1434d0050(local_res20,uVar3,&local_res18,plVar10);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_143601430(local_res8,local_res10,local_res20,plVar7);
    goto LAB_143600c72;
  }
LAB_143600acd:
  if (uVar9 == 0xc) {
    bVar11 = *(longlong *)(param_4 + 4) == 0;
LAB_143600aed:
    if (!bVar11) goto LAB_143600b20;
    local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145af9634,4);
    plVar7 = &local_res10;
    bVar5 = true;
    bVar11 = false;
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  }
  else {
    if (uVar9 == 10) {
      bVar11 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_143600aed;
    }
LAB_143600b20:
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x28))(plVar7,&local_res18,0);
    bVar5 = false;
    bVar11 = true;
  }
  local_res8 = (longlong *)FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145af95b0,4);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  FUN_1434d0050(local_res20,uVar3,&local_res8,plVar7);
  plVar7 = local_res8 + 3;
  *(int *)plVar7 = (int)*plVar7 + -1;
  if ((int)*plVar7 == 0) {
    FUN_14335f920();
  }
  if (bVar11) {
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (bVar5) {
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  local_res8 = (longlong *)FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"isDynamic",9);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  FUN_1434d0050(local_res20,uVar3,&local_res8,&local_68);
  plVar7 = local_res8 + 3;
  *(int *)plVar7 = (int)*plVar7 + -1;
  if ((int)*plVar7 == 0) {
    FUN_14335f920();
  }
  local_res8 = (longlong *)FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"isFinal",7);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  FUN_1434d0050(local_res20,uVar3,&local_res8,&local_60);
  plVar7 = local_res8 + 3;
  *(int *)plVar7 = (int)*plVar7 + -1;
  if ((int)*plVar7 == 0) {
    FUN_14335f920();
  }
  local_res8 = (longlong *)FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"isStatic",8);
  *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
  FUN_1434d0050(local_res20,uVar3,&local_res8,&local_68);
  plVar7 = local_res8 + 3;
  *(int *)plVar7 = (int)*plVar7 + -1;
  if ((int)*plVar7 == 0) {
    FUN_14335f920();
  }
LAB_143600c72:
  piVar1 = (int *)(local_58 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_68 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_60 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143600d40 FUN_143600d40 body=35 status=ok
// SIG undefined FUN_143600d40(void)

undefined8 FUN_143600d40(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  FUN_1434ef4b0(param_2,uVar1);
  return param_2;
}



// FUNCTION 143600d70 FUN_143600d70 body=35 status=ok
// SIG undefined FUN_143600d70(void)

undefined8 FUN_143600d70(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))();
  FUN_1434ef540(param_2,uVar1);
  return param_2;
}



// FUNCTION 143600da0 FUN_143600da0 body=128 status=ok
// SIG undefined FUN_143600da0(void)

longlong * FUN_143600da0(longlong *param_1,longlong param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong local_res10 [3];
  
  if (*(int *)(*(longlong *)(param_2 + 0x38) + 0x20) == 0) {
    lVar2 = *param_3;
    *param_1 = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    return param_1;
  }
  puVar4 = &DAT_145af796c;
  if (param_4 == 0) {
    puVar4 = &DAT_145b1a93c;
  }
  uVar3 = FUN_143360200(param_2 + 0x38,local_res10,puVar4);
  Scaleform::GFx::ASString::operator+(uVar3,param_1,param_3);
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_1;
}



// FUNCTION 143600e30 FUN_143600e30 body=1346 status=ok
// SIG undefined FUN_143600e30(void)

void FUN_143600e30(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  byte *param_5)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 local_148 [8];
  uint local_140 [2];
  int *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pbVar5 = param_5;
  if ((*param_5 & 0x40) != 0) {
    uVar9 = *(uint *)(param_5 + 0x18);
    if (uVar9 != 0) {
      uVar11 = (**(code **)(*param_1 + 0x60))();
      lVar3 = *(longlong *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x1d8);
      local_b0 = uVar11;
      local_c0 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),&DAT_145af95b0,4);
      *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + 1;
      local_c8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"metadata",8);
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      local_d0 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),&DAT_145b4e1fc,3);
      *(int *)(local_d0 + 0x18) = *(int *)(local_d0 + 0x18) + 1;
      local_d8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),&DAT_145b4e200,3);
      *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + 1;
      local_e0 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"value",5);
      local_f0 = 0;
      *(int *)(local_e0 + 0x18) = *(int *)(local_e0 + 0x18) + 1;
      local_b8 = *(undefined8 *)(pbVar5 + 0x20);
      local_e8 = *(longlong *)(param_4 + 0xa0) + 0xc0;
      local_a8 = (ulonglong)uVar9;
      if (uVar9 != 0) {
        do {
          lVar7 = local_e8;
          uVar9 = FUN_14358f8b0(&local_b8);
          uVar14 = 0;
          local_118 = *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_4 + 0xa0) + 0x48) + (ulonglong)uVar9 * 8);
          local_a0 = 0;
          uStack_98 = 0;
          FUN_14361cd90(&local_118,lVar7,&local_a0);
          uVar9 = local_90;
          uVar15 = (ulonglong)local_90;
          local_88 = (undefined4)local_a0;
          uStack_84 = local_a0._4_4_;
          uStack_80 = (undefined4)uStack_98;
          uStack_7c = uStack_98._4_4_;
          FUN_1434ce180(uVar11,&local_120,uVar11,uVar4,&local_c8,0);
          local_58 = local_120;
          plVar6 = local_58;
          local_58._0_4_ = SUB84(local_120,0);
          local_58._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          local_138 = (int *)0x0;
          local_140[0] = 0xc;
          local_130 = (undefined4)local_58;
          uStack_12c = local_58._4_4_;
          uStack_128 = uStack_50;
          uStack_124 = uStack_4c;
          local_58 = plVar6;
          pcVar12 = (char *)(**(code **)(*param_3 + 0xd0))(param_3,&param_5,local_140);
          cVar2 = *pcVar12;
          uVar10 = local_140[0] & 0x1f;
          if (9 < uVar10) {
            if ((local_140[0] >> 9 & 1) == 0) {
              if (uVar10 == 10) {
                piVar1 = (int *)(CONCAT44(uStack_12c,local_130) + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              else {
                if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
                  uVar13 = CONCAT44(uStack_12c,local_130);
                }
                else {
                  if (1 < uVar10 - 0xd) goto LAB_143601099;
                  uVar13 = CONCAT44(uStack_124,uStack_128);
                }
                if ((((uVar13 & 1) == 0) && (uVar13 != 0)) &&
                   ((*(uint *)(uVar13 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
                  FUN_1434ef880();
                }
              }
            }
            else {
              *local_138 = *local_138 + -1;
              if (*local_138 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
LAB_143601099:
          if (cVar2 == '\0') break;
          local_110 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),CONCAT44(uStack_84,local_88),
                                    CONCAT44(uStack_7c,uStack_80));
          *(int *)(local_110 + 0x18) = *(int *)(local_110 + 0x18) + 1;
          FUN_1434d0050(local_120,uVar4,&local_c0,&local_110);
          piVar1 = (int *)(local_110 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (uVar9 != 0) {
            do {
              FUN_1434ce180(uVar11,&local_108,uVar11,uVar4,&local_d0,0);
              local_48 = local_108;
              uVar8 = local_48;
              local_48._0_4_ = (undefined4)local_108;
              local_48._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
              local_138 = (int *)0x0;
              local_140[0] = 0xc;
              local_130 = (undefined4)local_48;
              uStack_12c = local_48._4_4_;
              uStack_128 = uStack_40;
              uStack_124 = uStack_3c;
              local_48 = uVar8;
              pcVar12 = (char *)(**(code **)(*local_120 + 0xd0))(local_120,local_148,local_140);
              cVar2 = *pcVar12;
              uVar10 = local_140[0] & 0x1f;
              if (9 < uVar10) {
                if ((local_140[0] >> 9 & 1) == 0) {
                  if (uVar10 == 10) {
                    piVar1 = (int *)(CONCAT44(uStack_12c,local_130) + 0x18);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_14335f920();
                    }
                  }
                  else {
                    if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
                      uVar13 = CONCAT44(uStack_12c,local_130);
                    }
                    else {
                      if (1 < uVar10 - 0xd) goto LAB_1436011d0;
                      uVar13 = CONCAT44(uStack_124,uStack_128);
                    }
                    if ((((uVar13 & 1) == 0) && (uVar13 != 0)) &&
                       ((*(uint *)(uVar13 + 8) & 0x3fffff) != 0)) {
                      *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
                      FUN_1434ef880();
                    }
                  }
                }
                else {
                  *local_138 = *local_138 + -1;
                  if (*local_138 == 0) {
                    (**(code **)(*DAT_146b62f28 + 0x60))();
                  }
                }
              }
LAB_1436011d0:
              if (cVar2 == '\0') goto LAB_1436012f4;
              uVar10 = FUN_14358f8b0(&local_118);
              if (0 < (int)uVar10) {
                FUN_14361cb40(*(longlong *)(lVar7 + 0x40) + (ulonglong)uVar10 * 8,&local_78);
                local_100 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),local_78,local_70);
                *(int *)(local_100 + 0x18) = *(int *)(local_100 + 0x18) + 1;
                FUN_1434d0050(local_108,uVar4,&local_d8,&local_100);
                piVar1 = (int *)(local_100 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar9);
          }
          lVar7 = local_e8;
          plVar6 = local_120;
          lVar16 = 0;
          if (uVar9 != 0) {
            do {
              uVar11 = *(undefined8 *)(lVar16 + plVar6[0x11]);
              uVar9 = FUN_14358f8b0(&local_118);
              FUN_14361cb40(*(longlong *)(lVar7 + 0x40) + (ulonglong)uVar9 * 8,&local_68);
              local_f8 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),local_68,local_60);
              *(int *)(local_f8 + 0x18) = *(int *)(local_f8 + 0x18) + 1;
              FUN_1434d0050(uVar11,uVar4,&local_e0,&local_f8);
              piVar1 = (int *)(local_f8 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
              lVar16 = lVar16 + 8;
              uVar15 = uVar15 - 1;
              uVar11 = local_b0;
            } while (uVar15 != 0);
          }
          local_f0 = local_f0 + 1;
        } while (local_f0 < local_a8);
      }
LAB_1436012f4:
      piVar1 = (int *)(local_e0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      piVar1 = (int *)(local_d8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      piVar1 = (int *)(local_d0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      piVar1 = (int *)(local_c8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  return;
}



// FUNCTION 143601380 FUN_143601380 body=161 status=ok
// SIG undefined FUN_143601380(void)

void FUN_143601380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  
  param_5 = *(longlong *)(param_5 + 0x20);
  if (param_5 != 0) {
    local_38[0] = 0;
    local_34 = 0xffffffffffffffff;
    local_2c = 0xffffffff;
    local_28 = 0;
    local_24 = 0xffffffff;
    local_20 = 0;
    local_18 = 0;
    FUN_14361ced0(&param_5,local_38);
    FUN_143600e30(param_1,param_2,param_3,param_4,local_38);
  }
  return;
}



// FUNCTION 143601430 FUN_143601430 body=9397 status=ok
// SIG undefined FUN_143601430(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143601430(longlong *param_1,ulonglong param_2,longlong *param_3,longlong *****param_4)

{
  int *piVar1;
  uint *****pppppuVar2;
  longlong ***ppplVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint ****ppppuVar9;
  uint ****ppppuVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint ***pppuVar18;
  uint *****pppppuVar19;
  uint ******ppppppuVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  longlong ****pppplVar24;
  ulonglong *puVar25;
  longlong *plVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint ****ppppuVar31;
  longlong *****ppppplVar32;
  longlong *****ppppplVar33;
  longlong ****pppplVar34;
  uint ***pppuVar35;
  longlong lVar36;
  ulonglong local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  byte bStack_3c1;
  uint *****local_3c0;
  uint local_3b8 [2];
  int *local_3b0;
  uint local_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  longlong *****local_398;
  uint *****local_390;
  ulonglong local_388;
  uint *****local_380;
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376 [6];
  uint *****local_370;
  longlong ***local_368;
  uint *****local_360;
  uint *****local_358;
  longlong ****local_350;
  longlong local_348;
  undefined8 local_340;
  uint *****local_338;
  uint *****local_330;
  longlong *****local_328;
  uint local_320;
  uint *****local_318;
  uint ****local_310;
  uint ***local_308;
  uint local_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  uint uStack_2f4;
  uint local_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  uint *****local_2d8;
  ulonglong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c7;
  undefined1 local_2c6 [6];
  uint ****local_2c0;
  longlong local_2b8;
  longlong ***local_2b0;
  ulonglong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  uint *****pppppuStack_288;
  longlong ****local_280;
  longlong *****local_278;
  uint ****local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  uint ****local_240;
  longlong local_238;
  longlong *local_230;
  longlong ***local_228;
  longlong *****local_220;
  undefined8 local_218;
  longlong ***local_210;
  undefined8 local_208;
  ulonglong uStack_200;
  undefined4 local_1f8;
  longlong local_1f0;
  uint local_1e8 [2];
  uint local_1e0;
  uint uStack_1dc;
  uint local_1d8 [2];
  undefined **local_1d0;
  ulonglong uStack_1c8;
  ulonglong local_1c0;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  longlong local_160;
  longlong ***local_158;
  longlong ***local_150;
  longlong local_148;
  longlong local_140;
  uint **local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_e8 [24];
  undefined **local_d0;
  longlong *local_c0;
  undefined1 local_88 [24];
  undefined **local_70;
  longlong ***local_60;
  
  lVar16 = *(longlong *)(param_2 + 0x10);
  uVar17 = *(ulonglong *)(param_2 + 0x1d8);
  bVar6 = false;
  bVar5 = false;
  local_248 = *(longlong *)(lVar16 + 0x20);
  *(int *)(local_248 + 0x18) = *(int *)(local_248 + 0x18) + 1;
  local_250 = *(longlong *)(lVar16 + 0x28);
  *(int *)(local_250 + 0x18) = *(int *)(local_250 + 0x18) + 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_388 = uVar17;
  local_348 = lVar16;
  local_328 = param_4;
  local_350 = (longlong ****)FUN_143360950(*(undefined8 *)(lVar16 + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_350 + 3) = *(int *)(local_350 + 3) + 1;
  local_258 = FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"optional",8);
  *(int *)(local_258 + 0x18) = *(int *)(local_258 + 0x18) + 1;
  local_260 = FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"parameter",9);
  *(int *)(local_260 + 0x18) = *(int *)(local_260 + 0x18) + 1;
  local_268 = FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"index",5);
  *(int *)(local_268 + 0x18) = *(int *)(local_268 + 0x18) + 1;
  if ((*(byte *)(local_328 + 0x11) >> 5 & 1) == 0) {
    pppplVar34 = local_328[0x16];
  }
  else {
    pppplVar34 = *(longlong *****)(param_2 + 0x200);
  }
  local_340 = (**(code **)(*param_1 + 0x60))();
  if (pppplVar34 != (longlong ****)0x0) {
    local_390 = (uint *****)FUN_143360950(*(undefined8 *)(local_348 + 0x218),"extendsClass",0xc);
    *(uint *)(local_390 + 3) = *(uint *)(local_390 + 3) + 1;
    do {
      FUN_1434ce180(local_340,&local_380,local_340,uVar17,&local_390,0);
      local_290 = local_380;
      pppppuVar19 = local_290;
      local_290._0_4_ = (uint)local_380;
      local_290._4_4_ = (undefined4)((ulonglong)local_380 >> 0x20);
      local_3b0 = (int *)0x0;
      local_3b8[0] = 0xc;
      local_3a8 = (uint)local_290;
      uStack_3a4 = local_290._4_4_;
      uStack_3a0 = pppppuStack_288;
      local_290 = pppppuVar19;
      pcVar14 = (char *)(**(code **)(*local_res18 + 0xd0))(local_res18,&local_res20,local_3b8);
      cVar11 = *pcVar14;
      uVar12 = local_3b8[0] & 0x1f;
      if (9 < uVar12) {
        if ((local_3b8[0] >> 9 & 1) == 0) {
          if (uVar12 == 10) {
            piVar1 = (int *)(CONCAT44(uStack_3a4,local_3a8) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar12 == 0xb) || (uVar12 == 0xc)) {
              pppppuVar19 = (uint *****)CONCAT44(uStack_3a4,local_3a8);
            }
            else {
              pppppuVar19 = uStack_3a0;
              if (1 < uVar12 - 0xd) goto LAB_143601668;
            }
            if (((((ulonglong)pppppuVar19 & 1) == 0) && (pppppuVar19 != (uint *****)0x0)) &&
               ((*(uint *)(pppppuVar19 + 1) & 0x3fffff) != 0)) {
              *(uint *)(pppppuVar19 + 1) = *(uint *)(pppppuVar19 + 1) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_3b0 = *local_3b0 + -1;
          if (*local_3b0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
LAB_143601668:
      pppppuVar19 = local_380;
      if (cVar11 == '\0') {
        pppppuVar19 = local_390 + 3;
        *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
        if (*(uint *)pppppuVar19 == 0) {
          FUN_14335f920();
        }
        goto LAB_143603870;
      }
      uVar15 = (*(code *)(*pppplVar34)[5])(pppplVar34,&local_330,0);
      FUN_1434d0050(pppppuVar19,uVar17,&local_350,uVar15);
      pppppuVar19 = local_330 + 3;
      *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
      if (*(int *)pppppuVar19 == 0) {
        FUN_14335f920();
      }
      pppplVar34 = (longlong ****)pppplVar34[0x16];
    } while (pppplVar34 != (longlong ****)0x0);
    pppppuVar19 = local_390 + 3;
    *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
    param_2 = local_res10;
    if (*(uint *)pppppuVar19 == 0) {
      FUN_14335f920();
      param_2 = local_res10;
    }
  }
  lVar16 = local_348;
  if ((~(*(byte *)(local_328 + 0x11) >> 5) & 1) != 0) {
    local_370 = (uint *****)
                FUN_143360950(*(undefined8 *)(local_348 + 0x218),"implementsInterface",0x13);
    lVar36 = 0;
    local_2a0 = 0;
    *(int *)(local_370 + 3) = *(int *)(local_370 + 3) + 1;
    local_298 = *(undefined8 *)(param_2 + 0x48);
    local_3c0 = (uint *****)(*(longlong *)(lVar16 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(lVar16 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    ppppplVar32 = local_328;
    do {
      ppppplVar33 = ppppplVar32;
      if (*(int *)(ppppplVar32 + 0x12) != 0x10) {
        local_398 = ppppplVar32;
        if ((*(byte *)(ppppplVar32 + 0x11) >> 4 & 1) == 0) {
          local_330 = (uint *****)ppppplVar32[0x1e];
          local_318 = (uint *****)0x0;
          if (local_330 != (uint *****)0x0) {
            lVar16 = 0;
            do {
              pcVar14 = (char *)FUN_1435911f0((longlong)ppppplVar32[0x1d] + lVar16 + 0x10,&local_377
                                              ,&local_3c0);
              if (*pcVar14 != '\0') {
                if (lVar36 != 0) {
                  lVar29 = 8;
                  uVar17 = 0x1505;
                  do {
                    pbVar4 = &bStack_3c1 + lVar29;
                    lVar29 = lVar29 + -1;
                    uVar17 = (ulonglong)*pbVar4 + uVar17 * 0x1003f;
                  } while (lVar29 != 0);
                  uVar17 = *(ulonglong *)(lVar36 + 8) & uVar17;
                  lVar29 = uVar17 * 3 + 2;
                  puVar25 = (ulonglong *)(lVar36 + lVar29 * 8);
                  if ((*(longlong *)(lVar36 + lVar29 * 8) != -2) &&
                     (uVar28 = uVar17, puVar25[1] == uVar17)) {
                    while ((puVar25[1] != uVar17 || ((uint *****)puVar25[2] != local_3c0))) {
                      uVar28 = *puVar25;
                      if (uVar28 == 0xffffffffffffffff) goto LAB_143601dc2;
                      puVar25 = (ulonglong *)(lVar36 + uVar28 * 0x18 + 0x10);
                    }
                    if ((-1 < (longlong)uVar28) && (lVar36 + (uVar28 * 3 + 4) * 8 != 0))
                    goto LAB_143601f78;
                  }
                }
LAB_143601dc2:
                lVar36 = 8;
                lVar29 = 0x1505;
                do {
                  pbVar4 = &bStack_3c1 + lVar36;
                  lVar36 = lVar36 + -1;
                  lVar29 = lVar29 * 0x1003f + (ulonglong)*pbVar4;
                } while (lVar36 != 0);
                FUN_1434e5630(&local_2a0,local_298,&local_3c0,lVar29);
                uVar17 = local_388;
                FUN_1434ce180(local_340,&local_360,local_340,local_388,&local_370,0);
                local_130 = local_360;
                pppppuVar19 = local_130;
                local_130._0_4_ = (uint)local_360;
                local_130._4_4_ = (undefined4)((ulonglong)local_360 >> 0x20);
                local_3b0 = (int *)0x0;
                local_3b8[0] = 0xc;
                local_3a8 = (uint)local_130;
                uStack_3a4 = local_130._4_4_;
                uStack_3a0 = (uint *****)CONCAT44(uStack_124,uStack_128);
                local_130 = pppppuVar19;
                pcVar14 = (char *)(**(code **)(*local_res18 + 0xd0))
                                            (local_res18,local_376,local_3b8);
                cVar11 = *pcVar14;
                uVar12 = local_3b8[0] & 0x1f;
                if (9 < uVar12) {
                  if ((local_3b8[0] >> 9 & 1) == 0) {
                    if (uVar12 == 10) {
                      piVar1 = (int *)(CONCAT44(uStack_3a4,local_3a8) + 0x18);
                      *piVar1 = *piVar1 + -1;
                      if (*piVar1 == 0) {
                        FUN_14335f920();
                      }
                    }
                    else {
                      if ((uVar12 == 0xb) || (uVar12 == 0xc)) {
                        pppppuVar19 = (uint *****)CONCAT44(uStack_3a4,local_3a8);
                      }
                      else {
                        pppppuVar19 = uStack_3a0;
                        if (1 < uVar12 - 0xd) goto LAB_143601ee6;
                      }
                      if (((((ulonglong)pppppuVar19 & 1) == 0) && (pppppuVar19 != (uint *****)0x0))
                         && ((*(uint *)(pppppuVar19 + 1) & 0x3fffff) != 0)) {
                        *(uint *)(pppppuVar19 + 1) = *(uint *)(pppppuVar19 + 1) - 1;
                        FUN_1434ef880();
                      }
                    }
                  }
                  else {
                    *local_3b0 = *local_3b0 + -1;
                    if (*local_3b0 == 0) {
                      (**(code **)(*DAT_146b62f28 + 0x60))();
                    }
                  }
                }
LAB_143601ee6:
                if (cVar11 == '\0') goto LAB_1436021a9;
                lVar36 = *(longlong *)(lVar16 + 8 + (longlong)local_398[0x1d]);
                if (*(int *)(*(longlong *)(lVar36 + 0x38) + 0x20) == 0) {
                  local_358 = local_3c0;
                  *(uint *)(local_3c0 + 3) = *(uint *)(local_3c0 + 3) + 1;
                }
                else {
                  uVar15 = FUN_143360200(lVar36 + 0x38,&local_2a8,&DAT_145b1a93c);
                  Scaleform::GFx::ASString::operator+(uVar15,&local_358,&local_3c0);
                  piVar1 = (int *)(local_2a8 + 0x18);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_14335f920();
                  }
                }
                FUN_1434d0050(local_360,uVar17,&local_350,&local_358);
                pppppuVar19 = local_358 + 3;
                *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
                ppppplVar32 = local_398;
                lVar36 = local_2a0;
                if (*(uint *)pppppuVar19 == 0) {
                  FUN_14335f920();
                  ppppplVar32 = local_398;
                  lVar36 = local_2a0;
                }
              }
LAB_143601f78:
              lVar16 = lVar16 + 0x30;
              local_318 = (uint *****)((longlong)local_318 + 1);
              ppppplVar33 = local_398;
            } while (local_318 < local_330);
          }
        }
        else {
          lVar16 = FUN_1434e0eb0(ppppplVar32);
          local_330 = *(uint ******)(lVar16 + 0xa0);
          local_280 = ppppplVar32[0x20];
          local_320 = FUN_14358f8b0(&local_280);
          local_368 = (longlong ***)((ulonglong)local_368 & 0xffffffff00000000);
          if (local_320 != 0) {
            do {
              uVar12 = FUN_14358f8b0(&local_280);
              ppppuVar31 = local_330[0x29];
              uVar15 = FUN_1434e0eb0(ppppplVar32);
              FUN_1435ae740(local_1e8,uVar15,ppppuVar31 + (ulonglong)uVar12 * 2);
              pcVar14 = (char *)FUN_1435911f0(local_1d8,&local_res20,&local_3c0);
              if (*pcVar14 == '\0') {
LAB_143601c02:
                uVar17 = CONCAT44(uStack_1dc,local_1e0);
              }
              else {
                if (lVar36 != 0) {
                  lVar16 = 8;
                  uVar17 = 0x1505;
                  do {
                    pbVar4 = &bStack_3c1 + lVar16;
                    lVar16 = lVar16 + -1;
                    uVar17 = (ulonglong)*pbVar4 + uVar17 * 0x1003f;
                  } while (lVar16 != 0);
                  uVar17 = *(ulonglong *)(lVar36 + 8) & uVar17;
                  lVar16 = uVar17 * 3 + 2;
                  puVar25 = (ulonglong *)(lVar36 + lVar16 * 8);
                  if ((*(longlong *)(lVar36 + lVar16 * 8) != -2) &&
                     (uVar28 = uVar17, puVar25[1] == uVar17)) {
                    while ((puVar25[1] != uVar17 || ((uint *****)puVar25[2] != local_3c0))) {
                      uVar28 = *puVar25;
                      if (uVar28 == 0xffffffffffffffff) goto LAB_1436018ab;
                      puVar25 = (ulonglong *)(lVar36 + uVar28 * 0x18 + 0x10);
                    }
                    if ((-1 < (longlong)uVar28) && (lVar36 + (uVar28 * 3 + 4) * 8 != 0))
                    goto LAB_143601c02;
                  }
                }
LAB_1436018ab:
                lVar16 = 8;
                lVar36 = 0x1505;
                do {
                  pbVar4 = &bStack_3c1 + lVar16;
                  lVar16 = lVar16 + -1;
                  lVar36 = lVar36 * 0x1003f + (ulonglong)*pbVar4;
                } while (lVar16 != 0);
                FUN_1434e5630(&local_2a0,local_298,&local_3c0,lVar36);
                uVar28 = local_388;
                FUN_1434ce180(local_340,&local_380,local_340,local_388,&local_370,0);
                local_290 = local_380;
                pppppuVar19 = local_290;
                local_290._0_4_ = (uint)local_380;
                local_290._4_4_ = (undefined4)((ulonglong)local_380 >> 0x20);
                local_3b0 = (int *)0x0;
                local_3b8[0] = 0xc;
                local_3a8 = (uint)local_290;
                uStack_3a4 = local_290._4_4_;
                uStack_3a0 = pppppuStack_288;
                local_290 = pppppuVar19;
                pcVar14 = (char *)(**(code **)(*local_res18 + 0xd0))
                                            (local_res18,&local_378,local_3b8);
                cVar11 = *pcVar14;
                uVar12 = local_3b8[0] & 0x1f;
                if (9 < uVar12) {
                  if ((local_3b8[0] >> 9 & 1) == 0) {
                    if (uVar12 == 10) {
                      piVar1 = (int *)(CONCAT44(uStack_3a4,local_3a8) + 0x18);
                      *piVar1 = *piVar1 + -1;
                      if (*piVar1 == 0) {
                        FUN_14335f920();
                      }
                    }
                    else {
                      if ((uVar12 == 0xb) || (uVar12 == 0xc)) {
                        pppppuVar19 = (uint *****)CONCAT44(uStack_3a4,local_3a8);
                      }
                      else {
                        pppppuVar19 = uStack_3a0;
                        if (1 < uVar12 - 0xd) goto LAB_1436019d2;
                      }
                      if (((((ulonglong)pppppuVar19 & 1) == 0) && (pppppuVar19 != (uint *****)0x0))
                         && ((*(uint *)(pppppuVar19 + 1) & 0x3fffff) != 0)) {
                        *(uint *)(pppppuVar19 + 1) = *(uint *)(pppppuVar19 + 1) - 1;
                        FUN_1434ef880();
                      }
                    }
                  }
                  else {
                    *local_3b0 = *local_3b0 + -1;
                    if (*local_3b0 == 0) {
                      (**(code **)(*DAT_146b62f28 + 0x60))();
                    }
                  }
                }
LAB_1436019d2:
                if (cVar11 == '\0') {
                  if (9 < ((byte)local_1d8[0] & 0x1f)) {
                    if ((local_1d8[0] >> 9 & 1) == 0) {
                      FUN_1435920c0(local_1d8);
                    }
                    else {
                      *(int *)local_1d0 = *(int *)local_1d0 + -1;
                      if (*(int *)local_1d0 == 0) {
                        (**(code **)(*DAT_146b62f28 + 0x60))();
                      }
                    }
                  }
                  lVar16 = CONCAT44(uStack_1dc,local_1e0);
                  if (((lVar16 != 0) && ((local_1e0 & 1) == 0)) &&
                     ((*(uint *)(lVar16 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(lVar16 + 8) = *(uint *)(lVar16 + 8) - 1;
                    FUN_1434ef880();
                  }
LAB_1436021a9:
                  pppppuVar19 = local_3c0 + 3;
                  *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
                  if (*(uint *)pppppuVar19 == 0) {
                    FUN_14335f920();
                  }
                  lVar16 = local_2a0;
                  if (local_2a0 != 0) {
                    plVar26 = (longlong *)(local_2a0 + 0x10);
                    lVar36 = *(longlong *)(local_2a0 + 8) + 1;
                    do {
                      if (*plVar26 != -2) {
                        piVar1 = (int *)(plVar26[2] + 0x18);
                        *piVar1 = *piVar1 + -1;
                        if (*piVar1 == 0) {
                          FUN_14335f920();
                        }
                        *plVar26 = -2;
                      }
                      plVar26 = plVar26 + 3;
                      lVar36 = lVar36 + -1;
                    } while (lVar36 != 0);
                    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar16);
                  }
                  pppppuVar19 = local_370 + 3;
                  *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
                  if (*(int *)pppppuVar19 == 0) {
                    FUN_14335f920();
                  }
                  goto LAB_143603870;
                }
                if (((byte)local_1e8[0] & 3) < 2) {
                  uVar30 = CONCAT44(uStack_1dc,local_1e0);
                  uVar17 = uVar30;
LAB_143601b72:
                  if (uVar30 == 0) goto LAB_143601b85;
                }
                else {
                  lVar16 = CONCAT44(uStack_1dc,local_1e0);
                  pppuVar35 = (uint ***)0x0;
                  local_308 = *(uint ****)(lVar16 + 0x30);
                  if (local_308 != (uint ***)0x0) {
                    do {
                      uVar30 = *(ulonglong *)
                                (*(longlong *)(lVar16 + 0x28) + (longlong)pppuVar35 * 8);
                      lVar16 = FUN_1434e0eb0(ppppplVar32);
                      lVar16 = *(longlong *)(lVar16 + 0x30);
                      lVar36 = *(longlong *)(lVar16 + 0x28);
                      if ((((lVar36 != 0) &&
                           (plVar26 = (longlong *)FUN_1435be2b0(lVar36,&local_3c0,uVar30),
                           plVar26 != (longlong *)0x0)) ||
                          (plVar26 = (longlong *)FUN_143610010(lVar16 + 0x30,&local_3c0,uVar30),
                          plVar26 != (longlong *)0x0)) && (*plVar26 != 0)) {
LAB_143601b66:
                        uVar17 = CONCAT44(uStack_1dc,local_1e0);
                        uVar28 = local_388;
                        goto LAB_143601b72;
                      }
                      uVar17 = local_res10;
                      pppuVar18 = (uint ***)
                                  FUN_1434decf0(*(undefined8 *)(local_res10 + 0x2c0),&local_3c0,
                                                uVar30);
                      if (pppuVar18 != (uint ***)0x0) {
                        lVar16 = *(longlong *)(uVar17 + 0x1c8);
                        local_2d8 = local_3c0;
                        *(uint *)(local_3c0 + 3) = *(uint *)(local_3c0 + 3) + 1;
                        if (uVar30 != 0) {
                          *(uint *)(uVar30 + 8) = *(int *)(uVar30 + 8) + 1U & 0x8fffffff;
                        }
                        local_278 = (longlong *****)&local_2d8;
                        local_270 = &local_308;
                        local_308 = pppuVar18;
                        local_2d0 = uVar30;
                        FUN_1434e5270(lVar16 + 0x30,*(undefined8 *)(lVar16 + 0x38),&local_278,
                                      (uint)((*(longlong *)(uVar30 + 0x28) << 0x3c) >> 0x3c) ^
                                      (*(uint *)(*(longlong *)(uVar30 + 0x38) + 0x1c) & 0xffffff) <<
                                      2 ^ *(uint *)((longlong)local_3c0 + 0x1c) & 0xffffff);
                        if (local_2d0 != 0) {
                          if ((local_2d0 & 1) == 0) {
                            if ((*(uint *)(local_2d0 + 8) & 0x3fffff) != 0) {
                              *(uint *)(local_2d0 + 8) = *(uint *)(local_2d0 + 8) - 1;
                              FUN_1434ef880();
                            }
                          }
                          else {
                            local_2d0 = local_2d0 - 1;
                          }
                        }
                        pppppuVar19 = local_2d8 + 3;
                        *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
                        if (*(uint *)pppppuVar19 == 0) {
                          FUN_14335f920();
                        }
                        goto LAB_143601b66;
                      }
                      pppuVar35 = (uint ***)((longlong)pppuVar35 + 1);
                      if (local_308 <= pppuVar35) break;
                      lVar16 = CONCAT44(uStack_1dc,local_1e0);
                      ppppplVar32 = local_398;
                    } while( true );
                  }
                  uVar17 = CONCAT44(uStack_1dc,local_1e0);
                  uVar28 = local_388;
LAB_143601b85:
                  uVar30 = uVar28;
                  uVar28 = uVar30;
                }
                if (*(int *)(*(longlong *)(uVar30 + 0x38) + 0x20) == 0) {
                  local_390 = local_3c0;
                  *(uint *)(local_3c0 + 3) = *(uint *)(local_3c0 + 3) + 1;
                }
                else {
                  uVar15 = FUN_143360200(uVar30 + 0x38,&local_310,&DAT_145b1a93c);
                  Scaleform::GFx::ASString::operator+(uVar15,&local_390,&local_3c0);
                  ppppuVar31 = local_310 + 3;
                  *(int *)ppppuVar31 = *(int *)ppppuVar31 + -1;
                  if (*(int *)ppppuVar31 == 0) {
                    FUN_14335f920();
                  }
                }
                FUN_1434d0050(local_380,uVar28,&local_350,&local_390);
                pppppuVar19 = local_390 + 3;
                *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
                lVar36 = local_2a0;
                if (*(uint *)pppppuVar19 == 0) {
                  FUN_14335f920();
                  lVar36 = local_2a0;
                }
              }
              uVar12 = local_1d8[0] & 0x1f;
              if (9 < uVar12) {
                if ((local_1d8[0] >> 9 & 1) == 0) {
                  if (uVar12 == 10) {
                    piVar1 = (int *)(uStack_1c8 + 0x18);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_14335f920();
                    }
                  }
                  else {
                    uVar28 = uStack_1c8;
                    if (((((uVar12 == 0xb) || (uVar12 == 0xc)) ||
                         (uVar28 = local_1c0, uVar12 - 0xd < 2)) &&
                        (((uVar28 & 1) == 0 && (uVar28 != 0)))) &&
                       ((*(uint *)(uVar28 + 8) & 0x3fffff) != 0)) {
                      *(uint *)(uVar28 + 8) = *(uint *)(uVar28 + 8) - 1;
                      FUN_1434ef880();
                    }
                  }
                }
                else {
                  *(int *)local_1d0 = *(int *)local_1d0 + -1;
                  if (*(int *)local_1d0 == 0) {
                    (**(code **)(*DAT_146b62f28 + 0x60))();
                  }
                }
              }
              if (((uVar17 != 0) && ((uVar17 & 1) == 0)) &&
                 ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
                FUN_1434ef880(uVar17);
              }
              uVar12 = (int)local_368 + 1;
              local_368 = (longlong ***)CONCAT44(local_368._4_4_,uVar12);
              ppppplVar32 = local_398;
              ppppplVar33 = local_398;
            } while (uVar12 < local_320);
          }
        }
      }
      ppppplVar32 = (longlong *****)ppppplVar33[0x16];
    } while (ppppplVar32 != (longlong *****)0x0);
    pppppuVar19 = local_3c0 + 3;
    *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
    local_398 = ppppplVar32;
    if (*(uint *)pppppuVar19 == 0) {
      FUN_14335f920();
    }
    FUN_1434e8900(&local_2a0);
    pppppuVar19 = local_370 + 3;
    *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
    uVar17 = local_388;
    if (*(int *)pppppuVar19 == 0) {
      FUN_14335f920();
      uVar17 = local_388;
    }
  }
  if ((((byte)local_328[0x11] >> 4 & 1) != 0) && ((~((byte)local_328[0x11] >> 5) & 1) != 0)) {
    pppppuVar19 = (uint *****)FUN_1434e0eb0(local_328);
    local_280 = local_328[0x20];
    local_360 = pppppuVar19;
    FUN_14361d130(&local_280);
    uVar12 = FUN_14358f8b0(&local_280);
    local_330 = (uint *****)pppppuVar19[0x14][6][uVar12];
    uStack_2f4 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    FUN_14361cce0(&local_330,&local_300);
    ppppuVar31 = (uint ****)(ulonglong)local_300;
    local_308 = (uint ***)CONCAT44(uStack_2ec,local_2f0);
    local_240 = ppppuVar31;
    if (ppppuVar31 != (uint ****)0x0) {
      local_338 = (uint *****)((longlong)ppppuVar31 - (ulonglong)uStack_2f4);
      local_358 = (uint *****)FUN_143360950(*(undefined8 *)(local_348 + 0x218),"constructor",0xb,0);
      *(uint *)(local_358 + 3) = *(uint *)(local_358 + 3) + 1;
      FUN_1434ce180(local_340,&local_318,local_340,uVar17,&local_358,0);
      local_290 = local_318;
      pppppuVar19 = local_290;
      local_290._0_4_ = (uint)local_318;
      local_290._4_4_ = (undefined4)((ulonglong)local_318 >> 0x20);
      local_3b0 = (int *)0x0;
      local_3b8[0] = 0xc;
      local_3a8 = (uint)local_290;
      uStack_3a4 = local_290._4_4_;
      uStack_3a0 = pppppuStack_288;
      local_290 = pppppuVar19;
      pcVar14 = (char *)(**(code **)(*local_res18 + 0xd0))(local_res18,&local_res20,local_3b8);
      cVar11 = *pcVar14;
      if (9 < ((byte)local_3b8[0] & 0x1f)) {
        if ((local_3b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_3b8);
        }
        else {
          *local_3b0 = *local_3b0 + -1;
          if (*local_3b0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      if (cVar11 == '\0') {
LAB_1436026b9:
        pppppuVar19 = local_358 + 3;
        *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
        if (*(uint *)pppppuVar19 == 0) {
          FUN_14335f920();
        }
        goto LAB_143603870;
      }
      local_2c0 = (uint ****)0x0;
      pppppuVar19 = local_380;
      if (ppppuVar31 != (uint ****)0x0) {
        do {
          ppppuVar10 = local_2c0;
          local_310 = local_360[5];
          ppppuVar31 = local_360[0x14];
          uVar12 = FUN_14358f8b0(&local_308);
          ppppuVar9 = local_310;
          pppuVar35 = ppppuVar31[0x29] + (ulonglong)uVar12 * 2;
          if (((*(int *)((longlong)pppuVar35 + 0xc) != 0) || (*(int *)(pppuVar35 + 1) != 0)) ||
             (*(int *)pppuVar35 != 0)) {
            plVar26 = (longlong *)FUN_1435c84e0(local_310,local_360);
            if (plVar26 != (longlong *)0x0) {
              bVar6 = true;
              ppppppuVar20 = (uint ******)(**(code **)(*plVar26 + 0x28))(plVar26,&local_2a8,0);
              goto LAB_1436022fe;
            }
            uVar15 = FUN_1435c8e40(&local_290,0x3f6,ppppuVar9);
            FUN_1435ccf60(ppppuVar9,uVar15,&DAT_145b14e70);
            pppppuVar19 = pppppuStack_288;
LAB_1436026ae:
            pppppuVar19 = pppppuVar19 + 3;
            *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
            if (*(uint *)pppppuVar19 == 0) {
              FUN_14335f920();
            }
            goto LAB_1436026b9;
          }
          bVar5 = true;
          pppppuVar19 = (uint *****)
                        FUN_143360950(*(undefined8 *)(local_348 + 0x218),&DAT_145af6c98,1);
          local_380 = pppppuVar19;
          *(int *)(pppppuVar19 + 3) = *(int *)(pppppuVar19 + 3) + 1;
          ppppppuVar20 = &local_380;
LAB_1436022fe:
          local_390 = *ppppppuVar20;
          *(uint *)(local_390 + 3) = *(uint *)(local_390 + 3) + 1;
          if (bVar5) {
            bVar5 = false;
            pppppuVar2 = pppppuVar19 + 3;
            *(int *)pppppuVar2 = *(int *)pppppuVar2 + -1;
            if (*(int *)pppppuVar2 == 0) {
              FUN_14335f920(pppppuVar19);
            }
          }
          if (bVar6) {
            bVar6 = false;
            piVar1 = (int *)(local_2a8 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          local_310 = (uint ****)((longlong)ppppuVar10 + 1);
          FUN_143354c50(local_1e8,local_310);
          FUN_1434ce180(local_340,&local_370,local_340,local_388,&local_260,0);
          local_290 = local_370;
          pppppuVar2 = local_290;
          local_290._0_4_ = (uint)local_370;
          local_290._4_4_ = (undefined4)((ulonglong)local_370 >> 0x20);
          local_3b0 = (int *)0x0;
          local_3b8[0] = 0xc;
          local_3a8 = (uint)local_290;
          uStack_3a4 = local_290._4_4_;
          uStack_3a0 = pppppuStack_288;
          local_290 = pppppuVar2;
          pcVar14 = (char *)(*(code *)(*local_318)[0x1a])(local_318,&local_res20,local_3b8);
          cVar11 = *pcVar14;
          if (9 < ((byte)local_3b8[0] & 0x1f)) {
            if ((local_3b8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_3b8);
            }
            else {
              *local_3b0 = *local_3b0 + -1;
              if (*local_3b0 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
          if (cVar11 == '\0') {
            local_1d0 = &PTR_FUN_145af1858;
            FUN_143353a80(local_1e8);
            pppppuVar19 = local_390;
            goto LAB_1436026ae;
          }
          FUN_143355390();
          uVar17 = local_1c0;
          lVar16 = *(longlong *)(local_res10 + 0x10);
          uVar15 = Scaleform::LongFormatter::GetSize(local_1e8);
          local_2b8 = FUN_143360a90(*(undefined8 *)(lVar16 + 0x218),uVar17,uVar15);
          uVar17 = local_388;
          *(int *)(local_2b8 + 0x18) = *(int *)(local_2b8 + 0x18) + 1;
          FUN_1434d0050(local_370,local_388,&local_268,&local_2b8);
          piVar1 = (int *)(local_2b8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          FUN_1434d0050(local_370,uVar17,&local_350,&local_390);
          FUN_1434d0050(local_370,uVar17,&local_258);
          local_1d0 = &PTR_FUN_145af1858;
          FUN_143353a80(local_1e8);
          pppppuVar2 = local_390 + 3;
          *(uint *)pppppuVar2 = *(uint *)pppppuVar2 - 1;
          if (*(uint *)pppppuVar2 == 0) {
            FUN_14335f920();
          }
          local_2c0 = local_310;
        } while (local_310 < local_240);
      }
      pppppuVar19 = local_358 + 3;
      *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
      if (*(uint *)pppppuVar19 == 0) {
        FUN_14335f920();
      }
    }
  }
  lVar16 = local_348;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_380 = (uint *****)FUN_143360950(*(undefined8 *)(local_348 + 0x218),"access",6);
  *(int *)(local_380 + 3) = *(int *)(local_380 + 3) + 1;
  local_360 = (uint *****)FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"accessor",8);
  *(int *)(local_360 + 3) = *(int *)(local_360 + 3) + 1;
  local_318 = (uint *****)FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"method",6);
  *(int *)(local_318 + 3) = *(int *)(local_318 + 3) + 1;
  local_2b8 = FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"declaredBy",10);
  *(int *)(local_2b8 + 0x18) = *(int *)(local_2b8 + 0x18) + 1;
  local_2c0 = (uint ****)FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"constant",8);
  *(int *)(local_2c0 + 3) = *(int *)(local_2c0 + 3) + 1;
  local_210 = (longlong ***)FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"variable",8);
  *(int *)(local_210 + 3) = *(int *)(local_210 + 3) + 1;
  local_390 = (uint *****)FUN_143360950(*(undefined8 *)(lVar16 + 0x218),"returnType",10);
  *(uint *)(local_390 + 3) = *(uint *)(local_390 + 3) + 1;
  local_358 = (uint *****)FUN_143360950(*(undefined8 *)(lVar16 + 0x218),&DAT_145b16cf0,3);
  *(uint *)(local_358 + 3) = *(uint *)(local_358 + 3) + 1;
  local_238 = FUN_143360950(*(undefined8 *)(lVar16 + 0x218),&DAT_145af95b0,4);
  local_220 = local_328 + 5;
  local_2d8 = (uint *****)0x0;
  *(int *)(local_238 + 0x18) = *(int *)(local_238 + 0x18) + 1;
  pppplVar34 = (longlong ****)(((longlong)*local_220 - 1U) + (longlong)local_328[8]);
  local_2d0 = *(ulonglong *)(local_res10 + 0x48);
  while (-1 < (longlong)pppplVar34) {
    if (((longlong)pppplVar34 < 0) || (pppplVar34 < *local_220)) {
      pppppuVar19 = (uint *****)FUN_1434ef150(local_220[1],pppplVar34);
    }
    else {
      pppppuVar19 = (uint *****)
                    (local_220[2] +
                    (((ulonglong)pppplVar34 & 0xffffffff) - (longlong)*local_220) * 8 + 2);
    }
    local_3c0 = pppppuVar19;
    if ((pppppuVar19[1][7] == *(uint ****)(uVar17 + 0x38)) &&
       (((*(byte *)(pppppuVar19[1] + 5) ^ *(byte *)(uVar17 + 0x28)) & 0xf) == 0)) {
      if (((longlong)pppplVar34 < 0) || (pppplVar34 < *local_220)) {
        local_398 = (longlong *****)
                    Scaleform::GFx::AS3::Slots::GetSlotNameNode(local_220[1],pppplVar34);
      }
      else {
        local_398 = (longlong *****)
                    local_220[2][(((ulonglong)pppplVar34 & 0xffffffff) - (longlong)*local_220) * 8];
      }
      *(int *)(local_398 + 3) = *(int *)(local_398 + 3) + 1;
      lVar16 = FUN_143610010(&local_2d8,&local_398,pppppuVar19[1]);
      if (lVar16 == 0) {
        local_270 = pppppuVar19[1];
        local_res20._0_4_ = CONCAT31(local_res20._1_3_,1);
        local_278 = local_398;
        *(int *)(local_398 + 3) = *(int *)(local_398 + 3) + 1;
        if (local_270 != (uint ****)0x0) {
          *(uint *)(local_270 + 1) = *(int *)(local_270 + 1) + 1U & 0x8fffffff;
        }
        local_290 = (uint *****)&local_278;
        pppppuStack_288 = (uint *****)&local_res20;
        FUN_143608520(&local_2d8,local_2d0,&local_290,
                      (uint)(((longlong)local_270[5] << 0x3c) >> 0x3c) ^
                      (*(uint *)((longlong)local_270[7] + 0x1c) & 0xffffff) << 2 ^
                      *(uint *)((longlong)local_398 + 0x1c) & 0xffffff);
        if (local_270 != (uint ****)0x0) {
          if (((ulonglong)local_270 & 1) == 0) {
            if ((*(uint *)(local_270 + 1) & 0x3fffff) != 0) {
              *(uint *)(local_270 + 1) = *(uint *)(local_270 + 1) - 1;
              FUN_1434ef880();
            }
          }
          else {
            local_270 = (uint ****)((longlong)local_270 + -1);
          }
        }
        ppppplVar32 = local_278 + 3;
        *(int *)ppppplVar32 = *(int *)ppppplVar32 + -1;
        if (*(int *)ppppplVar32 == 0) {
          FUN_14335f920();
        }
        iVar27 = (int)(*(uint *)pppppuVar19 << 0x15) >> 0x1b;
        local_368 = (longlong ***)CONCAT44(local_368._4_4_,iVar27);
        if (iVar27 < 0xb) {
          cVar11 = Scaleform::GFx::AS3::SlotInfo::IsConst(pppppuVar19);
          pppplVar24 = (longlong ****)&local_2c0;
          if (cVar11 == '\0') {
            pppplVar24 = &local_210;
          }
          plVar26 = (longlong *)FUN_1434ce180(local_340,&local_2a0,local_340,uVar17,pppplVar24,0);
          local_2f8 = 0;
          uStack_2f4 = 0;
          local_300 = 0xc;
          pppppuVar19 = (uint *****)*plVar26;
          local_208._0_4_ = (uint)pppppuVar19;
          local_208._4_4_ = (undefined4)((ulonglong)pppppuVar19 >> 0x20);
          local_2f0 = (uint)local_208;
          uStack_2ec = local_208._4_4_;
          uStack_2e8 = uStack_200;
          local_208 = pppppuVar19;
          puVar22 = (undefined1 *)
                    (**(code **)(*local_res18 + 0xd0))(local_res18,local_2c6,&local_300);
          local_res20._0_4_ = CONCAT31(local_res20._1_3_,*puVar22);
          if (9 < ((byte)local_300 & 0x1f)) {
            if ((local_300 >> 9 & 1) == 0) {
              FUN_1435920c0(&local_300);
            }
            else {
              piVar1 = (int *)CONCAT44(uStack_2f4,local_2f8);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
          if ((char)local_res20 == '\0') goto LAB_143603490;
          FUN_1434d0050(pppppuVar19,uVar17,&local_238,&local_398);
          plVar26 = (longlong *)FUN_1435adda0(local_3c0,local_res10);
          if (plVar26 != (longlong *)0x0) {
            uVar15 = (**(code **)(*plVar26 + 0x28))(plVar26,&local_148,0);
            FUN_1434d0050(pppppuVar19,uVar17,&local_350,uVar15);
            piVar1 = (int *)(local_148 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          if (*(int *)(local_3c0[1][7] + 4) != 0) {
            FUN_1434d0050(pppppuVar19,uVar17,&local_358,local_3c0[1] + 7);
          }
          FUN_143601380(param_1,local_res10,pppppuVar19,local_3c0[3],local_3c0);
        }
        else {
          ppppppuVar20 = &local_318;
          if (iVar27 != 0xb) {
            ppppppuVar20 = &local_360;
          }
          puVar21 = (undefined8 *)
                    FUN_1434ce180(local_340,&local_130,local_340,uVar17,ppppppuVar20,0);
          local_3b0 = (int *)0x0;
          local_3b8[0] = 0xc;
          plVar26 = (longlong *)*puVar21;
          local_120._0_4_ = (uint)plVar26;
          local_120._4_4_ = (undefined4)((ulonglong)plVar26 >> 0x20);
          local_3a8 = (uint)local_120;
          uStack_3a4 = local_120._4_4_;
          uStack_3a0 = (uint *****)CONCAT44(uStack_114,uStack_118);
          local_120 = plVar26;
          puVar22 = (undefined1 *)
                    (**(code **)(*local_res18 + 0xd0))(local_res18,local_376,local_3b8);
          local_res20._0_4_ = CONCAT31(local_res20._1_3_,*puVar22);
          if (9 < ((byte)local_3b8[0] & 0x1f)) {
            if ((local_3b8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_3b8);
            }
            else {
              *local_3b0 = *local_3b0 + -1;
              if (*local_3b0 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
          if ((char)local_res20 == '\0') {
LAB_143603490:
            ppppplVar32 = local_398 + 3;
            *(int *)ppppplVar32 = *(int *)ppppplVar32 + -1;
            if (*(int *)ppppplVar32 == 0) {
              FUN_14335f920();
            }
            FUN_1434e8840(&local_2d8);
            FUN_1434e8840(&local_2d8);
            piVar1 = (int *)(local_238 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            pppppuVar19 = local_358 + 3;
            *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
            if (*(uint *)pppppuVar19 == 0) {
              FUN_14335f920();
            }
            pppppuVar19 = local_390 + 3;
            *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
            if (*(uint *)pppppuVar19 == 0) {
              FUN_14335f920();
            }
            ppplVar3 = local_210 + 3;
            *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
            if (*(int *)ppplVar3 == 0) {
              FUN_14335f920();
            }
            ppppuVar31 = local_2c0 + 3;
            *(int *)ppppuVar31 = *(int *)ppppuVar31 + -1;
            if (*(int *)ppppuVar31 == 0) {
              FUN_14335f920();
            }
            piVar1 = (int *)(local_2b8 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            pppppuVar19 = local_318 + 3;
            *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
            if (*(int *)pppppuVar19 == 0) {
              FUN_14335f920();
            }
            pppppuVar19 = local_360 + 3;
            *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
            if (*(int *)pppppuVar19 == 0) {
              FUN_14335f920();
            }
            pppppuVar19 = local_380 + 3;
            *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
            if (*(int *)pppppuVar19 == 0) {
              FUN_14335f920();
            }
            goto LAB_143603870;
          }
          FUN_1434d0050(plVar26,uVar17,&local_238,&local_398);
          if (((ulonglong)*local_3c0 & 0x7c0) != 0x2c0) {
            pcVar14 = "";
            if ((int)local_368 == 0xc) {
              pcVar14 = "readonly";
            }
            else if ((int)local_368 == 0xd) {
              pcVar14 = "writeonly";
            }
            else if ((int)local_368 == 0xe) {
              pcVar14 = "readwrite";
            }
            lVar16 = -1;
            do {
              lVar16 = lVar16 + 1;
            } while (pcVar14[lVar16] != '\0');
            local_1f0 = FUN_143360950(*(undefined8 *)(local_348 + 0x218),pcVar14,lVar16,0);
            *(int *)(local_1f0 + 0x18) = *(int *)(local_1f0 + 0x18) + 1;
            FUN_1434d0050(plVar26,uVar17,&local_380,&local_1f0);
            piVar1 = (int *)(local_1f0 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          if (*(int *)(local_3c0[1][7] + 4) != 0) {
            FUN_1434d0050(plVar26,uVar17,&local_358,local_3c0[1] + 7);
          }
          uVar12 = *(uint *)((longlong)local_3c0 + 4) + (uint)((int)local_368 == 0xd);
          plVar23 = (longlong *)FUN_1434ef190(local_328);
          if (((byte)*(undefined4 *)((ulonglong)uVar12 * 0x20 + plVar23[1]) & 0x1f) == 6) {
            uStack_3a0 = (uint *****)*plVar23;
            local_3b8[0] = 7;
            local_3b0 = (int *)0x0;
            local_3a8 = uVar12;
          }
          else {
            FUN_14360ab50(local_3b8);
          }
          uVar12 = local_3a8;
          local_320 = local_3b8[0] & 0x1f;
          local_res20._0_4_ = local_3b8[0];
          local_338 = uStack_3a0;
          plVar23 = (longlong *)FUN_1435cb7c0(local_res10,local_3b8);
          if (plVar23 == (longlong *)0x0) {
            bVar5 = true;
            local_240 = (uint ****)
                        FUN_143360950(*(undefined8 *)(local_348 + 0x218),&DAT_145af6c98,1);
            pppplVar24 = (longlong ****)&local_240;
            *(int *)(local_240 + 3) = *(int *)(local_240 + 3) + 1;
          }
          else {
            bVar6 = true;
            pppplVar24 = (longlong ****)(**(code **)(*plVar23 + 0x28))(plVar23,&local_140,0);
          }
          local_2b0 = *pppplVar24;
          *(int *)(local_2b0 + 3) = *(int *)(local_2b0 + 3) + 1;
          if (bVar5) {
            bVar5 = false;
            ppppuVar31 = local_240 + 3;
            *(int *)ppppuVar31 = *(int *)ppppuVar31 + -1;
            if (*(int *)ppppuVar31 == 0) {
              FUN_14335f920(local_240);
            }
          }
          if (bVar6) {
            bVar6 = false;
            piVar1 = (int *)(local_140 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          uVar17 = local_388;
          if (local_320 == 7) {
            lVar16 = FUN_1434ef190(local_338);
            lVar16 = (ulonglong)uVar12 * 0x20 + *(longlong *)(lVar16 + 8);
            uVar12 = *(uint *)(lVar16 + 0x10);
            local_230 = *(longlong **)(lVar16 + 0x18);
            local_338 = (uint *****)(**(code **)(*local_230 + 0x38))();
            local_138 = local_338[0x14][6][uVar12];
            uStack_1dc = 0;
            local_1d0 = (undefined **)0x0;
            uStack_1c8 = 0;
            FUN_14361cce0(&local_138,local_1e8);
            if ((int)local_368 == 0xd) {
              pcVar14 = (char *)FUN_1435bcc10(&local_377,local_338,uVar12,&local_188);
              if (*pcVar14 == '\0') {
LAB_143603447:
                ppplVar3 = local_2b0 + 3;
                *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
                if (*(int *)ppplVar3 == 0) {
                  FUN_14335f920();
                }
                if (9 < ((byte)(uint)local_res20 & 0x1f)) {
                  if (((uint)local_res20 >> 9 & 1) == 0) {
                    FUN_1435920c0(local_3b8);
                  }
                  else {
                    *local_3b0 = *local_3b0 + -1;
                    if (*local_3b0 == 0) {
                      (**(code **)(*DAT_146b62f28 + 0x60))();
                    }
                  }
                }
                goto LAB_143603490;
              }
              if (local_188 == (longlong *)0x0) {
                bVar7 = true;
                local_2a8 = FUN_143360950(*(undefined8 *)(local_348 + 0x218),&DAT_145af6c98,1);
                *(int *)(local_2a8 + 0x18) = *(int *)(local_2a8 + 0x18) + 1;
                puVar25 = &local_2a8;
              }
              else {
                bVar8 = true;
                puVar25 = (ulonglong *)(**(code **)(*local_188 + 0x28))(local_188,&local_180,0);
              }
              uVar17 = local_2a8;
              local_368 = (longlong ***)*puVar25;
              *(int *)(local_368 + 3) = *(int *)(local_368 + 3) + 1;
              ppplVar3 = local_2b0 + 3;
              *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
              if (*(int *)ppplVar3 == 0) {
                FUN_14335f920();
              }
              local_2b0 = local_368;
              if (bVar7) {
                bVar7 = false;
                piVar1 = (int *)(uVar17 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920(uVar17);
                }
              }
              if (bVar8) {
                bVar8 = false;
                piVar1 = (int *)(local_180 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
            }
            uVar17 = local_388;
            ppppplVar32 = (longlong *****)&local_390;
            if (((ulonglong)*local_3c0 & 0x7c0) != 0x2c0) {
              ppppplVar32 = &local_350;
            }
            FUN_1434d0050(plVar26,local_388,ppppplVar32,&local_2b0);
            uVar15 = (**(code **)(*local_230 + 0x28))(local_230,&local_178,0);
            FUN_1434d0050(plVar26,uVar17,&local_2b8,uVar15);
            piVar1 = (int *)(local_178 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (((ulonglong)*local_3c0 & 0x7c0) == 0x2c0) {
              local_228 = (longlong ***)(ulonglong)local_1e8[0];
              local_158 = (longlong ***)((ulonglong)local_1e8[0] - (ulonglong)uStack_1dc);
              local_368 = (longlong ***)0x0;
              if (local_228 != (longlong ***)0x0) {
                do {
                  local_150 = (longlong ***)((longlong)local_368 + 1);
                  FUN_143354c50(local_e8,local_150);
                  FUN_1434ce180(local_340,&local_370,local_340,uVar17,&local_260,0);
                  local_110 = local_370;
                  pppppuVar19 = local_110;
                  local_110._0_4_ = (uint)local_370;
                  local_110._4_4_ = (undefined4)((ulonglong)local_370 >> 0x20);
                  local_2f8 = 0;
                  uStack_2f4 = 0;
                  local_2f0 = (uint)local_110;
                  uStack_2ec = local_110._4_4_;
                  uStack_2e8 = CONCAT44(uStack_104,uStack_108);
                  local_300 = 0xc;
                  local_110 = pppppuVar19;
                  pcVar14 = (char *)(**(code **)(*plVar26 + 0xd0))(plVar26,&local_378,&local_300);
                  cVar11 = *pcVar14;
                  if (9 < ((byte)local_300 & 0x1f)) {
                    if ((local_300 >> 9 & 1) == 0) {
                      FUN_1435920c0(&local_300);
                    }
                    else {
                      piVar1 = (int *)CONCAT44(uStack_2f4,local_2f8);
                      *piVar1 = *piVar1 + -1;
                      if (*piVar1 == 0) {
                        (**(code **)(*DAT_146b62f28 + 0x60))();
                      }
                    }
                  }
                  if (cVar11 == '\0') {
LAB_14360341d:
                    local_d0 = &PTR_FUN_145af1858;
                    puVar22 = local_e8;
LAB_143603442:
                    FUN_143353a80(puVar22);
                    goto LAB_143603447;
                  }
                  FUN_143355390(local_e8);
                  local_230 = local_c0;
                  lVar16 = *(longlong *)(local_res10 + 0x10);
                  uVar15 = Scaleform::LongFormatter::GetSize(local_e8);
                  local_310 = (uint ****)
                              FUN_143360a90(*(undefined8 *)(lVar16 + 0x218),local_230,uVar15);
                  uVar17 = local_388;
                  *(int *)(local_310 + 3) = *(int *)(local_310 + 3) + 1;
                  FUN_1434d0050(local_370,local_388,&local_268,&local_310);
                  ppppuVar31 = local_310 + 3;
                  *(int *)ppppuVar31 = *(int *)ppppuVar31 + -1;
                  if (*(int *)ppppuVar31 == 0) {
                    FUN_14335f920();
                  }
                  pcVar14 = (char *)FUN_1435bcb30(&local_2c8,local_338,local_170,&local_168);
                  pppppuVar19 = local_370;
                  if (*pcVar14 == '\0') goto LAB_14360341d;
                  if (local_168 == (longlong *)0x0) {
                    local_308 = (uint ***)
                                FUN_143360950(*(undefined8 *)(local_348 + 0x218),&DAT_145af6c98,1);
                    *(int *)(local_308 + 3) = *(int *)(local_308 + 3) + 1;
                    FUN_1434d0050(local_370,uVar17,&local_350,&local_308);
                    pppuVar35 = local_308 + 3;
                    *(int *)pppuVar35 = *(int *)pppuVar35 + -1;
                    if (*(int *)pppuVar35 == 0) {
                      FUN_14335f920();
                    }
                  }
                  else {
                    uVar15 = (**(code **)(*local_168 + 0x28))(local_168,&local_160,0);
                    FUN_1434d0050(pppppuVar19,local_388,&local_350,uVar15);
                    piVar1 = (int *)(local_160 + 0x18);
                    *piVar1 = *piVar1 + -1;
                    uVar17 = local_388;
                    if (*piVar1 == 0) {
                      FUN_14335f920();
                      uVar17 = local_388;
                    }
                  }
                  plVar23 = &local_248;
                  if (local_368 < local_158) {
                    plVar23 = &local_250;
                  }
                  FUN_1434d0050(local_370,uVar17,&local_258,plVar23);
                  local_d0 = &PTR_FUN_145af1858;
                  FUN_143353a80(local_e8);
                  local_368 = local_150;
                } while (local_150 < local_228);
              }
            }
            if (local_3c0[3] != (uint ****)0x0) {
              FUN_143601380(param_1,local_res10,plVar26,local_3c0[3],local_3c0);
            }
          }
          else {
            ppppplVar32 = (longlong *****)&local_390;
            if (((ulonglong)*local_3c0 & 0x7c0) != 0x2c0) {
              ppppplVar32 = &local_350;
            }
            FUN_1434d0050(plVar26,local_388,ppppplVar32);
            if (((ulonglong)*local_3c0 & 0x7c0) == 0x2c0) {
              uVar28 = *(ulonglong *)(CONCAT44(uStack_3a4,local_3a8) + 0x20);
              if (((uVar28 & 0x1c0) != 0) || (((uint)uVar28 & 0x1ffe00) != 0x1ffe00)) {
                if (((uint)uVar28 & 0x1ffe00) == 0x1ffe00) {
                  uVar12 = (uint)(uVar28 >> 6) & 7;
                }
                else {
                  uVar12 = (uint)(uVar28 >> 9) & 0xfff;
                }
                local_338 = (uint *****)(ulonglong)uVar12;
                local_368 = (longlong ***)((ulonglong)local_368 & 0xffffffff00000000);
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    local_3c0 = (uint *****)CONCAT44(local_3c0._4_4_,uVar13 + 1);
                    FUN_143354a50(local_88,uVar13 + 1);
                    FUN_1434ce180(local_340,&local_218,local_340,uVar17,&local_260,0);
                    local_100 = local_218;
                    uVar15 = local_100;
                    local_100._0_4_ = (uint)local_218;
                    local_100._4_4_ = (undefined4)((ulonglong)local_218 >> 0x20);
                    local_2f8 = 0;
                    uStack_2f4 = 0;
                    local_2f0 = (uint)local_100;
                    uStack_2ec = local_100._4_4_;
                    uStack_2e8 = CONCAT44(uStack_f4,uStack_f8);
                    local_300 = 0xc;
                    local_100 = uVar15;
                    pcVar14 = (char *)(**(code **)(*plVar26 + 0xd0))(plVar26,&local_2c7,&local_300);
                    cVar11 = *pcVar14;
                    if (9 < ((byte)local_300 & 0x1f)) {
                      if ((local_300 >> 9 & 1) == 0) {
                        FUN_1435920c0(&local_300);
                      }
                      else {
                        piVar1 = (int *)CONCAT44(uStack_2f4,local_2f8);
                        *piVar1 = *piVar1 + -1;
                        if (*piVar1 == 0) {
                          (**(code **)(*DAT_146b62f28 + 0x60))();
                        }
                      }
                    }
                    puVar22 = local_88;
                    if (cVar11 == '\0') {
                      local_70 = &PTR_FUN_145af1858;
                      goto LAB_143603442;
                    }
                    FUN_143355390(puVar22);
                    local_228 = local_60;
                    lVar16 = *(longlong *)(local_res10 + 0x10);
                    uVar15 = Scaleform::LongFormatter::GetSize(local_88);
                    local_330 = (uint *****)
                                FUN_143360a90(*(undefined8 *)(lVar16 + 0x218),local_228,uVar15);
                    uVar17 = local_388;
                    *(int *)(local_330 + 3) = *(int *)(local_330 + 3) + 1;
                    FUN_1434d0050(local_218,local_388,&local_268,&local_330);
                    pppppuVar19 = local_330 + 3;
                    *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
                    if (*(int *)pppppuVar19 == 0) {
                      FUN_14335f920();
                    }
                    FUN_1434d0050(local_218,uVar17,&local_258);
                    local_70 = &PTR_FUN_145af1858;
                    FUN_143353a80(local_88);
                    local_368 = (longlong ***)CONCAT44(local_368._4_4_,(uint)local_3c0);
                    uVar13 = (uint)local_3c0;
                  } while ((uint)local_3c0 < (uint)local_338);
                }
              }
            }
          }
          ppplVar3 = local_2b0 + 3;
          *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
          if (*(int *)ppplVar3 == 0) {
            FUN_14335f920();
          }
          if (9 < local_320) {
            if (((uint)local_res20 >> 9 & 1) == 0) {
              FUN_1435920c0(local_3b8);
            }
            else {
              *local_3b0 = *local_3b0 + -1;
              if (*local_3b0 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
        }
      }
      ppppplVar32 = local_398 + 3;
      *(int *)ppppplVar32 = *(int *)ppppplVar32 + -1;
      if (*(int *)ppppplVar32 == 0) {
        FUN_14335f920();
      }
    }
    if (-1 < (longlong)pppplVar34) {
      pppplVar34 = (longlong ****)((longlong)pppplVar34 + -1);
    }
  }
  FUN_1434e8840(&local_2d8);
  FUN_1434e8840(&local_2d8);
  piVar1 = (int *)(local_238 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  pppppuVar19 = local_358 + 3;
  *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
  if (*(uint *)pppppuVar19 == 0) {
    FUN_14335f920();
  }
  pppppuVar19 = local_390 + 3;
  *(uint *)pppppuVar19 = *(uint *)pppppuVar19 - 1;
  if (*(uint *)pppppuVar19 == 0) {
    FUN_14335f920();
  }
  ppplVar3 = local_210 + 3;
  *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
  if (*(int *)ppplVar3 == 0) {
    FUN_14335f920();
  }
  ppppuVar31 = local_2c0 + 3;
  *(int *)ppppuVar31 = *(int *)ppppuVar31 + -1;
  if (*(int *)ppppuVar31 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_2b8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  pppppuVar19 = local_318 + 3;
  *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
  if (*(int *)pppppuVar19 == 0) {
    FUN_14335f920();
  }
  pppppuVar19 = local_360 + 3;
  *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
  if (*(int *)pppppuVar19 == 0) {
    FUN_14335f920();
  }
  pppppuVar19 = local_380 + 3;
  *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
  if (*(int *)pppppuVar19 == 0) {
    FUN_14335f920();
  }
  ppppplVar32 = local_328;
  uVar28 = local_res10;
  if ((*(byte *)(local_328 + 0x11) >> 5 & 1) != 0) {
    local_360 = (uint *****)FUN_143360950(*(undefined8 *)(local_348 + 0x218),"factory",7);
    plVar26 = local_res18;
    *(int *)(local_360 + 3) = *(int *)(local_360 + 3) + 1;
    FUN_1434ce180(local_340,&local_380,local_340,uVar17,&local_360,local_res18);
    local_208 = local_380;
    pppppuVar19 = local_208;
    local_208._0_4_ = (uint)local_380;
    local_208._4_4_ = (undefined4)((ulonglong)local_380 >> 0x20);
    local_2f8 = 0;
    uStack_2f4 = 0;
    local_2f0 = (uint)local_208;
    uStack_2ec = local_208._4_4_;
    uStack_2e8 = uStack_200;
    local_300 = 0xc;
    local_208 = pppppuVar19;
    pcVar14 = (char *)(**(code **)(*plVar26 + 0xd0))(plVar26,&local_res20,&local_300);
    cVar11 = *pcVar14;
    if (9 < ((byte)local_300 & 0x1f)) {
      if ((local_300 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_300);
      }
      else {
        piVar1 = (int *)CONCAT44(uStack_2f4,local_2f8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    pppppuVar19 = local_380;
    if (cVar11 == '\0') {
      pppppuVar19 = local_360 + 3;
      *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
      if (*(int *)pppppuVar19 == 0) {
        FUN_14335f920();
      }
      goto LAB_143603870;
    }
    uVar15 = (*(code *)(*local_328)[5])(local_328,&local_res20,0);
    FUN_1434d0050(pppppuVar19,uVar17,&local_350,uVar15);
    piVar1 = (int *)(CONCAT44(local_res20._4_4_,(uint)local_res20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    ppppplVar32 = local_328;
    uVar28 = local_res10;
    FUN_143601430(param_1,local_res10,local_380,local_328[0x1b]);
    pppppuVar19 = local_360 + 3;
    *(int *)pppppuVar19 = *(int *)pppppuVar19 + -1;
    if (*(int *)pppppuVar19 == 0) {
      FUN_14335f920();
    }
  }
  if (((byte)ppppplVar32[0x11] >> 4 & 1) != 0) {
    if (((byte)ppppplVar32[0x11] >> 5 & 1) == 0) {
      if (ppppplVar32[0x15] == (longlong ****)0x0) {
        (*(code *)(*ppppplVar32)[10])(ppppplVar32);
      }
      ppppplVar32 = (longlong *****)ppppplVar32[0x15][5];
    }
    pppplVar34 = ppppplVar32[0x1d];
    local_res10 = (ulonglong)pppplVar34[0x14][0xc][*(uint *)(ppppplVar32 + 0x1c)];
    local_1f8 = 0xffffffff;
    local_208 = (uint *****)((ulonglong)local_208 & 0xffffffff00000000);
    uStack_200 = 0;
    FUN_14361d0e0(&local_res10,&local_208);
    local_res10 = uStack_200;
    for (uVar12 = 0; (local_res10 != 0 && (uVar12 < (uint)local_208)); uVar12 = uVar12 + 1) {
      uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
      uStack_2e0 = 0;
      local_300 = local_300 & 0xffffff00;
      uStack_2fc = 0xffffffff;
      local_2f8 = 0xffffffff;
      uStack_2f4 = 0xffffffff;
      local_2f0 = local_2f0 & 0xffffff00;
      uStack_2ec = 0xffffffff;
      FUN_14361ced0(&local_res10,&local_300);
      FUN_143600e30(param_1,uVar28,local_res18,pppplVar34,&local_300);
    }
  }
LAB_143603870:
  piVar1 = (int *)(local_268 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_260 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_258 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  pppplVar34 = local_350 + 3;
  *(int *)pppplVar34 = *(int *)pppplVar34 + -1;
  if (*(int *)pppplVar34 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_250 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_248 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1436038f0 FUN_1436038f0 body=795 status=ok
// SIG undefined FUN_1436038f0(void)

void FUN_1436038f0(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  switch(uVar1 & 0x1f) {
  case 0:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5;
      return;
    }
    break;
  case 1:
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = param_2;
    FUN_143604c30(param_1);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  case 2:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 2;
      FUN_1435d4730(param_1);
      return;
    }
    break;
  case 3:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 3;
      FUN_1435d4c60(param_1);
      return;
    }
    break;
  case 4:
    FUN_1435d64d0(param_1);
    return;
  case 5:
    FUN_1435d65e0(param_1);
    return;
  case 6:
    FUN_1435d6880(param_1);
    return;
  case 7:
    FUN_1435d69f0(param_1);
    return;
  case 8:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 8;
      FUN_1435d6080(param_1);
      return;
    }
    break;
  case 9:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 9;
      FUN_1435d6240(param_1);
      return;
    }
    break;
  case 10:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 10;
      FUN_1435d63a0(param_1);
      return;
    }
    break;
  case 0xb:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0xb;
      return;
    }
    break;
  case 0xc:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0xc;
      FUN_1435d4dc0(param_1);
      return;
    }
    break;
  case 0xd:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0xd;
      FUN_1435d4f10(param_1);
      return;
    }
    break;
  case 0xe:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0xe;
      FUN_1435d5040(param_1);
      return;
    }
    break;
  case 0xf:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0xf;
      FUN_1435d5170(param_1);
      return;
    }
    break;
  case 0x10:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0x10;
      FUN_1435d5330(param_1);
      return;
    }
    break;
  case 0x11:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0x11;
      FUN_1435d5590(param_1);
      return;
    }
    break;
  case 0x12:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0x12;
      FUN_1435d58b0(param_1);
      return;
    }
    break;
  case 0x13:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0x13;
      FUN_1435d5b90(param_1);
      return;
    }
    break;
  case 0x14:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0x14;
      FUN_1435d5d90(param_1);
      return;
    }
    break;
  case 0x15:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0x15;
      FUN_1435d5e30(param_1);
      return;
    }
    break;
  case 0x16:
    if (uVar1 >> 5 != *param_1) {
      *(uint *)(param_2 + 0x10) = *param_1 << 5 | 0x16;
      FUN_1435d5f70(param_1);
      return;
    }
    break;
  case 0x17:
    FUN_1435d6770(param_1);
    return;
  }
  return;
}



// FUNCTION 143603c70 FUN_143603c70 body=135 status=ok
// SIG undefined FUN_143603c70(void)

void FUN_143603c70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  switch(*(uint *)*param_3 >> 3 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    lVar2 = 0x1505;
    lVar3 = 0x10;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    lVar2 = 0x1505;
    lVar3 = 0x18;
    break;
  case 10:
    lVar3 = 0x10;
  default:
    lVar2 = 0x1505;
    if (lVar3 == 0) goto LAB_143603ce8;
  }
  do {
    lVar1 = lVar3 + -1;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)*param_3);
  } while (lVar3 != 0);
LAB_143603ce8:
  FUN_143605ee0(param_1,param_2,param_3,lVar2);
  return;
}



// FUNCTION 143603d30 FUN_143603d30 body=95 status=ok
// SIG undefined FUN_143603d30(void)

void FUN_143603d30(uint *param_1)

{
  int *piVar1;
  
  if (((byte)*param_1 & 0x1f) < 10) {
    return;
  }
  if ((*param_1 >> 9 & 1) != 0) {
    piVar1 = *(int **)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = *param_1 & 0xfffffde0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  FUN_1435920c0(param_1);
  return;
}



// FUNCTION 143603d90 FUN_143603d90 body=128 status=ok
// SIG undefined FUN_143603d90(void)

undefined8
FUN_143603d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_408 [16];
  undefined8 local_3f8;
  
  FUN_1433561d0(local_408,param_1);
  FUN_1433563e0(local_408,param_2);
  FUN_14348fad0(local_408,param_3);
  FUN_143386e30(local_408,param_4);
  Scaleform::MsgFormat::FinishFormatD(local_408);
  FUN_1433562f0(local_408);
  return local_3f8;
}



// FUNCTION 143603e10 FUN_143603e10 body=232 status=ok
// SIG undefined FUN_143603e10(void)

void FUN_143603e10(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x60) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x60,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x5fU & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_143354dd0(lVar2,param_1,*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 143603f00 FUN_143603f00 body=240 status=ok
// SIG undefined FUN_143603f00(void)

void FUN_143603f00(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_143356fb0();
  if (cVar1 != '\0') {
    do {
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x1a8) {
        plVar5 = *(longlong **)(param_1 + 0x1e0);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_146b62f28;
        }
        lVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,0x1a8,8);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 1000);
        lVar3 = (lVar2 + 0x1a7U & 0xfffffffffffffff8) + 8;
        *(longlong *)(param_1 + 1000) = lVar3;
        uVar4 = (lVar3 - (longlong)(param_1 + 0x1e0)) - 8;
        lVar3 = 0x200 - uVar4;
        if (0x1ff < uVar4) {
          lVar3 = 0;
        }
        *(longlong *)(param_1 + 0x3f0) = lVar3;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_1433557b0(lVar2,param_1,*param_2);
      }
      FUN_143357040(param_1,lVar3,1);
      cVar1 = FUN_143356fb0(param_1);
    } while (cVar1 != '\0');
  }
  *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
  return;
}



// FUNCTION 143603ff0 FUN_143603ff0 body=42 status=ok
// SIG undefined FUN_143603ff0(void)

longlong FUN_143603ff0(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar2 >> 2 == *param_1) {
    return (ulonglong)(uint3)(uVar2 >> 10) << 8;
  }
  uVar1 = *param_1 * 4;
  *(uint *)(param_2 + 0x10) = uVar1 | uVar2 & 3;
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 143604020 FUN_143604020 body=113 status=ok
// SIG undefined FUN_143604020(void)

undefined8 FUN_143604020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  
  cVar2 = FUN_143610f30();
  if (cVar2 != '\0') {
    local_res18[0] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_2 + 0xc0);
    if (*(int *)(param_2 + 0x30) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0xf0);
    }
    lVar3 = FUN_1435d80d0(local_res18,*(undefined4 *)(param_2 + 0x18),lVar1,uVar4);
    if (lVar1 != lVar3) {
      *(longlong *)(param_2 + 0xc0) = lVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1436040a0 FUN_1436040a0 body=124 status=ok
// SIG undefined FUN_1436040a0(void)

undefined8 FUN_1436040a0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  
  cVar2 = FUN_143610f30();
  if ((cVar2 != '\0') && (pbVar1 = *(byte **)(param_2 + 0x58), *(int *)(param_2 + 0x18) == 5)) {
    pbVar3 = *(byte **)(*(longlong *)((ulonglong)*(uint *)(param_2 + 0x1c) * 0x20 + 0x88 + param_2)
                       + 8);
    if ((*pbVar3 & 1) != 0) {
      pbVar3 = (byte *)FUN_1435d0f90(*(undefined8 *)(param_1 + 0x10),pbVar3,0);
    }
    if (pbVar1 != pbVar3) {
      *(byte **)(param_2 + 0x58) = pbVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143604120 FUN_143604120 body=324 status=ok
// SIG undefined FUN_143604120(void)

ulonglong FUN_143604120(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar8 = 8;
  uVar5 = 0x1505;
  do {
    lVar2 = lVar8 + -1;
    lVar8 = lVar8 + -1;
    uVar5 = uVar5 * 0x1003f + (ulonglong)*(byte *)(lVar2 + (longlong)param_2);
  } while (lVar8 != 0);
  uVar5 = *(ulonglong *)(lVar3 + 8) & uVar5;
  uVar6 = uVar5 * 0x20;
  puVar10 = (ulonglong *)(lVar3 + 0x10 + uVar6);
  if ((*puVar10 != 0xfffffffffffffffe) && (puVar10[1] == uVar5)) {
    uVar4 = uVar5;
    uVar9 = 0xffffffffffffffff;
    while( true ) {
      uVar7 = uVar4;
      if ((puVar10[1] == uVar5) && (uVar6 = *param_2, puVar10[2] == uVar6)) {
        uVar6 = *puVar10;
        if (uVar5 == uVar7) {
          if (uVar6 != 0xffffffffffffffff) {
            piVar1 = (int *)(puVar10[3] + 0x18);
            *piVar1 = *piVar1 + -1;
            lVar3 = uVar6 * 0x20 + lVar3;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            *puVar10 = 0xfffffffffffffffe;
            *puVar10 = *(ulonglong *)(lVar3 + 0x10);
            puVar10[1] = *(ulonglong *)(lVar3 + 0x18);
            puVar10[2] = *(ulonglong *)(lVar3 + 0x20);
            uVar5 = *(ulonglong *)(lVar3 + 0x28);
            puVar10[3] = uVar5;
            puVar10 = (ulonglong *)(lVar3 + 0x10);
            piVar1 = (int *)(uVar5 + 0x18);
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          *(ulonglong *)(uVar9 * 0x20 + 0x10 + lVar3) = uVar6;
        }
        piVar1 = (int *)(puVar10[3] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *puVar10 = 0xfffffffffffffffe;
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar4 = *puVar10;
      if (uVar4 == 0xffffffffffffffff) break;
      uVar6 = uVar4 * 0x20;
      puVar10 = (ulonglong *)(lVar3 + 0x10 + uVar6);
      uVar9 = uVar7;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 143604270 FUN_143604270 body=299 status=ok
// SIG undefined FUN_143604270(void)

ulonglong FUN_143604270(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar5 = 8;
    uVar4 = 0x1505;
    do {
      lVar1 = lVar5 + -1;
      lVar5 = lVar5 + -1;
      uVar4 = (ulonglong)*(byte *)(lVar1 + (longlong)param_2) + uVar4 * 0x1003f;
    } while (lVar5 != 0);
    uVar4 = *(ulonglong *)(lVar2 + 8) & uVar4;
    in_RAX = (ulonglong *)(uVar4 * 0x20 + 0x10 + lVar2);
    if ((*in_RAX != 0xfffffffffffffffe) && (in_RAX[1] == uVar4)) {
      uVar3 = uVar4;
      uVar7 = 0xffffffffffffffff;
      while( true ) {
        uVar6 = uVar3;
        if ((in_RAX[1] == uVar4) && (in_RAX[2] == *param_2)) {
          uVar3 = *in_RAX;
          if (uVar4 == uVar6) {
            if (uVar3 != 0xffffffffffffffff) {
              *in_RAX = 0xfffffffffffffffe;
              lVar5 = uVar3 * 0x20 + lVar2;
              *in_RAX = *(ulonglong *)(uVar3 * 0x20 + 0x10 + lVar2);
              in_RAX[1] = *(ulonglong *)(lVar5 + 0x18);
              in_RAX[2] = *(ulonglong *)(lVar5 + 0x20);
              in_RAX[3] = *(ulonglong *)(lVar5 + 0x28);
              *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
              param_1 = (longlong *)*param_1;
              *param_1 = *param_1 + -1;
              return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            }
          }
          else {
            *(ulonglong *)(uVar7 * 0x20 + 0x10 + lVar2) = uVar3;
          }
          *in_RAX = 0xfffffffffffffffe;
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        uVar3 = *in_RAX;
        if (uVar3 == 0xffffffffffffffff) break;
        in_RAX = (ulonglong *)(uVar3 * 0x20 + 0x10 + lVar2);
        uVar7 = uVar6;
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1436043a0 FUN_1436043a0 body=258 status=ok
// SIG undefined FUN_1436043a0(void)

ulonglong FUN_1436043a0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar3 = *(ulonglong *)(lVar2 + 8);
  uVar6 = *param_2 & uVar3;
  uVar4 = uVar6 * 3;
  puVar8 = (ulonglong *)(lVar2 + 0x10 + uVar6 * 0x18);
  if ((*(longlong *)(lVar2 + 0x10 + uVar6 * 0x18) != -2) &&
     (uVar4 = puVar8[1] & uVar3, uVar4 == uVar6)) {
    uVar4 = uVar6;
    uVar9 = 0xffffffffffffffff;
    while( true ) {
      uVar7 = uVar4;
      uVar5 = puVar8[1] & uVar3;
      if ((uVar5 == uVar6) && (puVar8[1] == *param_2)) break;
      uVar4 = *puVar8;
      if (uVar4 == 0xffffffffffffffff) {
        return uVar5 & 0xffffffffffffff00;
      }
      puVar8 = (ulonglong *)(lVar2 + uVar4 * 0x18 + 0x10);
      uVar9 = uVar7;
    }
    uVar3 = *puVar8;
    if (uVar6 == uVar7) {
      if (uVar3 != 0xffffffffffffffff) {
        *puVar8 = 0xfffffffffffffffe;
        lVar1 = lVar2 + uVar3 * 0x18;
        *puVar8 = *(ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
        puVar8[1] = *(ulonglong *)(lVar1 + 0x18);
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar1 + 0x20);
        puVar8 = (ulonglong *)(lVar1 + 0x10);
      }
    }
    else {
      *(ulonglong *)(lVar2 + 0x10 + uVar9 * 0x18) = uVar3;
    }
    *puVar8 = 0xfffffffffffffffe;
    param_1 = (longlong *)*param_1;
    *param_1 = *param_1 + -1;
    return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1436044b0 FUN_1436044b0 body=300 status=ok
// SIG undefined FUN_1436044b0(void)

ulonglong FUN_1436044b0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = param_2[1];
  uVar5 = (ulonglong)
          ((uint)((*(longlong *)(uVar2 + 0x28) << 0x3c) >> 0x3c) ^
           (*(uint *)(*(longlong *)(uVar2 + 0x38) + 0x1c) & 0xffffff) << 2 ^
          *(uint *)(*param_2 + 0x1c) & 0xffffff) & *(ulonglong *)(lVar1 + 8);
  uVar4 = uVar5 * 5;
  puVar7 = (ulonglong *)(lVar1 + 0x10 + uVar5 * 0x28);
  if ((*(longlong *)(lVar1 + 0x10 + uVar5 * 0x28) != -2) && (puVar7[1] == uVar5)) {
    uVar3 = uVar5;
    uVar8 = 0xffffffffffffffff;
    while( true ) {
      uVar6 = uVar3;
      if ((puVar7[1] == uVar5) && (puVar7[2] == *param_2)) {
        uVar4 = *(ulonglong *)(uVar2 + 0x38);
        if ((*(ulonglong *)(puVar7[3] + 0x38) == uVar4) &&
           (uVar4 = 0, ((*(byte *)(uVar2 + 0x28) ^ *(byte *)(puVar7[3] + 0x28)) & 0xf) == 0)) {
          uVar2 = *puVar7;
          if (uVar5 == uVar6) {
            if (uVar2 != 0xffffffffffffffff) {
              lVar1 = lVar1 + uVar2 * 0x28;
              FUN_14360eb70(puVar7);
              FUN_143609d00(puVar7,lVar1 + 0x10);
              puVar7 = (ulonglong *)(lVar1 + 0x10);
            }
          }
          else {
            *(ulonglong *)(lVar1 + 0x10 + uVar8 * 0x28) = uVar2;
          }
          FUN_14360eb70(puVar7);
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
      }
      uVar3 = *puVar7;
      if (uVar3 == 0xffffffffffffffff) break;
      uVar4 = uVar3 * 5;
      puVar7 = (ulonglong *)(lVar1 + 0x10 + uVar3 * 0x28);
      uVar8 = uVar6;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1436045e0 FUN_1436045e0 body=287 status=ok
// SIG undefined FUN_1436045e0(void)

ulonglong FUN_1436045e0(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar3 = *(ulonglong *)(lVar2 + 8);
  uVar5 = *(uint *)(*param_2 + 0x1c) & uVar3;
  puVar7 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar2);
  if ((*puVar7 != 0xfffffffffffffffe) &&
     (in_RAX = puVar7[1], (*(uint *)(in_RAX + 0x1c) & uVar3) == uVar5)) {
    uVar4 = uVar5;
    uVar9 = 0xffffffffffffffff;
    while( true ) {
      uVar6 = uVar4;
      uVar4 = puVar7[1];
      in_RAX = *(uint *)(uVar4 + 0x1c) & uVar3;
      if ((in_RAX == uVar5) && (uVar4 == *param_2)) {
        if (uVar5 == uVar6) {
          if (*puVar7 != 0xffffffffffffffff) {
            puVar8 = (ulonglong *)((*puVar7 + 1) * 0x10 + lVar2);
            piVar1 = (int *)(uVar4 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            *puVar7 = 0xfffffffffffffffe;
            *puVar7 = *puVar8;
            uVar3 = puVar8[1];
            puVar7[1] = uVar3;
            piVar1 = (int *)(uVar3 + 0x18);
            *piVar1 = *piVar1 + 1;
            puVar7 = puVar8;
          }
        }
        else {
          *(ulonglong *)(lVar2 + (uVar9 + 1) * 0x10) = *puVar7;
        }
        piVar1 = (int *)(puVar7[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *puVar7 = 0xfffffffffffffffe;
        param_1 = (longlong *)*param_1;
        *param_1 = *param_1 + -1;
        return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      uVar4 = *puVar7;
      if (uVar4 == 0xffffffffffffffff) break;
      puVar7 = (ulonglong *)((uVar4 + 1) * 0x10 + lVar2);
      uVar9 = uVar6;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143604700 FUN_143604700 body=186 status=ok
// SIG undefined FUN_143604700(void)

longlong FUN_143604700(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_3;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  }
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(uint *)(lVar5 + 0x1c);
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = *param_1;
  if ((lVar5 != 0) &&
     (lVar4 = FUN_143609b60(param_1,param_3,*(ulonglong *)(lVar5 + 8) & (ulonglong)uVar2),
     -1 < lVar4)) {
    lVar3 = *param_3;
    lVar5 = lVar5 + (lVar4 + 1) * 0x10;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    }
    if (*(longlong *)(lVar5 + 8) != 0) {
      piVar1 = (int *)(*(longlong *)(lVar5 + 8) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    *(longlong *)(lVar5 + 8) = lVar3;
    return lVar5 + 8;
  }
  lVar5 = FUN_1436057a0(param_1,param_2,param_3,(ulonglong)uVar2);
  return lVar5;
}



// FUNCTION 1436047c0 FUN_1436047c0 body=284 status=ok
// SIG undefined FUN_1436047c0(void)

longlong FUN_1436047c0(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte local_res8 [8];
  
  uVar7 = *param_3;
  if (uVar7 != 0) {
    *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
  }
  uVar5 = 0x1505;
  lVar6 = 8;
  do {
    pbVar2 = &stack0x00000007 + lVar6;
    lVar6 = lVar6 + -1;
    uVar5 = uVar5 * 0x1003f + (ulonglong)*pbVar2;
  } while (lVar6 != 0);
  if (((uVar7 != 0) && ((uVar7 & 1) == 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
    FUN_1434ef880();
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar7 = *(ulonglong *)(lVar6 + 8) & uVar5;
    lVar1 = uVar7 * 3 + 2;
    puVar3 = (ulonglong *)(lVar6 + lVar1 * 8);
    if ((*(longlong *)(lVar6 + lVar1 * 8) != -2) && (uVar4 = uVar7, puVar3[1] == uVar7)) {
      while ((puVar3[1] != uVar7 || (puVar3[2] != *param_3))) {
        uVar4 = *puVar3;
        if (uVar4 == 0xffffffffffffffff) goto LAB_1436048b6;
        puVar3 = (ulonglong *)(lVar6 + uVar4 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar4) {
        lVar6 = lVar6 + uVar4 * 0x18;
        FUN_1434f0700(lVar6 + 0x20,*param_3);
        return lVar6 + 0x20;
      }
    }
  }
LAB_1436048b6:
  lVar6 = FUN_143605ac0(param_1,param_2,param_3,uVar5);
  return lVar6;
}



// FUNCTION 1436048e0 FUN_1436048e0 body=284 status=ok
// SIG undefined FUN_1436048e0(void)

longlong FUN_1436048e0(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte local_res8 [8];
  
  uVar7 = *param_3;
  if (uVar7 != 0) {
    *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
  }
  uVar5 = 0x1505;
  lVar6 = 8;
  do {
    pbVar2 = &stack0x00000007 + lVar6;
    lVar6 = lVar6 + -1;
    uVar5 = uVar5 * 0x1003f + (ulonglong)*pbVar2;
  } while (lVar6 != 0);
  if (((uVar7 != 0) && ((uVar7 & 1) == 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
    FUN_1434ef880();
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar7 = *(ulonglong *)(lVar6 + 8) & uVar5;
    lVar1 = uVar7 * 3 + 2;
    puVar3 = (ulonglong *)(lVar6 + lVar1 * 8);
    if ((*(longlong *)(lVar6 + lVar1 * 8) != -2) && (uVar4 = uVar7, puVar3[1] == uVar7)) {
      while ((puVar3[1] != uVar7 || (puVar3[2] != *param_3))) {
        uVar4 = *puVar3;
        if (uVar4 == 0xffffffffffffffff) goto LAB_1436049d6;
        puVar3 = (ulonglong *)(lVar6 + uVar4 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar4) {
        lVar6 = lVar6 + uVar4 * 0x18;
        FUN_1434f0700(lVar6 + 0x20,*param_3);
        return lVar6 + 0x20;
      }
    }
  }
LAB_1436049d6:
  lVar6 = FUN_143605cd0(param_1,param_2,param_3,uVar5);
  return lVar6;
}



// FUNCTION 143604a00 FUN_143604a00 body=251 status=ok
// SIG undefined FUN_143604a00(void)

ulonglong * FUN_143604a00(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = 8;
  uVar8 = 0x1505;
  do {
    lVar3 = lVar7 + -1;
    lVar7 = lVar7 + -1;
    uVar8 = uVar8 * 0x1003f + (ulonglong)*(byte *)(*param_3 + lVar3);
  } while (lVar7 != 0);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    uVar6 = *(ulonglong *)(lVar7 + 8) & uVar8;
    puVar4 = (ulonglong *)(lVar7 + 0x10 + uVar6 * 0x20);
    if ((*puVar4 != 0xfffffffffffffffe) && (uVar5 = uVar6, puVar4[1] == uVar6)) {
      while ((puVar4[1] != uVar6 || (uVar2 = *(ulonglong *)*param_3, puVar4[2] != uVar2))) {
        uVar5 = *puVar4;
        if (uVar5 == 0xffffffffffffffff) goto LAB_143604ad5;
        puVar4 = (ulonglong *)(lVar7 + 0x10 + uVar5 * 0x20);
      }
      if (-1 < (longlong)uVar5) {
        puVar4 = (ulonglong *)((uVar5 + 1) * 0x20 + lVar7);
        *puVar4 = uVar2;
        uVar8 = *(ulonglong *)param_3[1];
        piVar1 = (int *)(uVar8 + 0x18);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(puVar4[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        puVar4[1] = uVar8;
        return puVar4;
      }
    }
  }
LAB_143604ad5:
  puVar4 = (ulonglong *)FUN_143607ce0(param_1,param_2,param_3,uVar8);
  return puVar4;
}



// FUNCTION 143604b00 FUN_143604b00 body=201 status=ok
// SIG undefined FUN_143604b00(void)

longlong FUN_143604b00(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = 8;
  uVar6 = 0x1505;
  do {
    lVar1 = lVar5 + -1;
    lVar5 = lVar5 + -1;
    uVar6 = uVar6 * 0x1003f + (ulonglong)*(byte *)(lVar1 + (longlong)param_3);
  } while (lVar5 != 0);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar4 = *(ulonglong *)(lVar5 + 8) & uVar6;
    lVar1 = uVar4 * 3 + 2;
    puVar2 = (ulonglong *)(lVar5 + lVar1 * 8);
    if ((*(longlong *)(lVar5 + lVar1 * 8) != -2) && (uVar3 = uVar4, puVar2[1] == uVar4)) {
      while ((puVar2[1] != uVar4 || (puVar2[2] != *param_3))) {
        uVar3 = *puVar2;
        if (uVar3 == 0xffffffffffffffff) goto LAB_143604bb1;
        puVar2 = (ulonglong *)(lVar5 + uVar3 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar3) {
        lVar5 = lVar5 + uVar3 * 0x18;
        FUN_1434e6830(lVar5 + 0x20,param_3);
        return lVar5 + 0x20;
      }
    }
  }
LAB_143604bb1:
  lVar5 = FUN_143609690(param_1,param_2,param_3,uVar6);
  return lVar5;
}



// FUNCTION 143604bd0 FUN_143604bd0 body=96 status=ok
// SIG undefined FUN_143604bd0(void)

void FUN_143604bd0(uint *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(uint *)(param_2 + 0x10) >> 2 != *param_1) {
    *(uint *)(param_2 + 0x10) = *param_1 * 4 | *(uint *)(param_2 + 0x10) & 3;
    FUN_143614de0(param_1 + 2,param_2);
    lVar1 = *(longlong *)(param_1 + 6);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    *(longlong *)(param_2 + 0x60) = lVar1;
    *(longlong *)(*(longlong *)(lVar1 + 0x68) + 0x60) = param_2;
    *(longlong *)(lVar1 + 0x68) = param_2;
  }
  return;
}



// FUNCTION 143604c30 FUN_143604c30 body=196 status=ok
// SIG undefined FUN_143604c30(void)

void FUN_143604c30(uint *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(param_2 + 0x10) >> 5 != *param_1) &&
     (*(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f,
     *(longlong *)(*(longlong *)(param_1 + 2) + 0x280) != param_2)) {
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 6) + 0x40);
    if (*(int *)(param_2 + 0x34) == 0) {
      for (lVar1 = *(longlong *)(param_2 + 200); lVar1 != param_2 + 0x50;
          lVar1 = *(longlong *)(lVar1 + 0x78)) {
        *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(lVar1 + 0x1c);
      }
    }
    for (lVar1 = *(longlong *)(param_2 + 0x48); lVar1 != param_2 + 0x40;
        lVar1 = *(longlong *)(lVar1 + 8)) {
      FUN_1436038f0(param_1,lVar1);
    }
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 6) + 0x40);
  }
  return;
}



// FUNCTION 143604d00 FUN_143604d00 body=121 status=ok
// SIG undefined FUN_143604d00(void)

void FUN_143604d00(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(uint *)(param_2 + 0x10) >> 5 != *param_1) {
    *(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f;
    FUN_143615a80(param_1 + 2,param_2);
    lVar2 = *(longlong *)(param_1 + 6);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(lVar2 + 0xd8);
    *(longlong *)(param_2 + 0xd0) = lVar2;
    *(longlong *)(*(longlong *)(lVar2 + 0xd8) + 0xd0) = param_2;
    *(longlong *)(lVar2 + 0xd8) = param_2;
    uVar1 = param_1[4];
    param_1[4] = uVar1 + 1;
    *(uint *)(param_2 + 0x1c) = uVar1 + 1;
  }
  return;
}



// FUNCTION 143604d80 FUN_143604d80 body=85 status=ok
// SIG undefined FUN_143604d80(void)

undefined8 FUN_143604d80(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  char local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((*(byte *)(*(longlong *)(param_2 + 0x38) + 0x10) & 1) != 0) {
    cVar1 = FUN_143610f30();
    if (cVar1 != '\0') {
      local_res10[0] = '\0';
      pcVar2 = (char *)FUN_1435a1bd0(*(undefined8 *)(param_2 + 0x38),local_res20,local_res10,
                                     local_res18);
      if ((*pcVar2 != '\0') && (local_res10[0] != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143604de0 FUN_143604de0 body=67 status=ok
// SIG undefined FUN_143604de0(void)

undefined1 FUN_143604de0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143610f30();
  if (cVar1 != '\0') {
    cVar1 = FUN_143596420(param_2,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143604e30 FUN_143604e30 body=67 status=ok
// SIG undefined FUN_143604e30(void)

undefined1 FUN_143604e30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143610f30();
  if (cVar1 != '\0') {
    cVar1 = FUN_143597060(param_2,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143604e80 FUN_143604e80 body=67 status=ok
// SIG undefined FUN_143604e80(void)

undefined1 FUN_143604e80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143610f30();
  if (cVar1 != '\0') {
    cVar1 = FUN_143596c40(param_2,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143604ed0 FUN_143604ed0 body=67 status=ok
// SIG undefined FUN_143604ed0(void)

undefined1 FUN_143604ed0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143610f30();
  if (cVar1 != '\0') {
    cVar1 = FUN_1435966d0(param_2,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143604f20 FUN_143604f20 body=76 status=ok
// SIG undefined FUN_143604f20(void)

ulonglong FUN_143604f20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_143610f30();
  if ((char)uVar3 != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8);
    uVar3 = *(ulonglong *)(param_2 + 0x60);
    lVar2 = *(longlong *)(uVar3 + 8);
    if ((lVar1 != *(longlong *)(param_2 + 0x70)) || (lVar2 != *(longlong *)(param_2 + 0x90))) {
      *(longlong *)(param_2 + 0x70) = lVar1;
      *(longlong *)(param_2 + 0x90) = lVar2;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143604f70 FUN_143604f70 body=70 status=ok
// SIG undefined FUN_143604f70(void)

undefined1 FUN_143604f70(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_143610f30();
  if (cVar1 != '\0') {
    FUN_14360df40(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x30));
    FUN_14360df40(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x30));
  }
  return 0;
}



// FUNCTION 143604fc0 FUN_143604fc0 body=50 status=ok
// SIG undefined FUN_143604fc0(void)

undefined1 FUN_143604fc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_143610f30();
  if (cVar1 != '\0') {
    FUN_14360df40(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  return 0;
}



// FUNCTION 143605000 FUN_143605000 body=76 status=ok
// SIG undefined FUN_143605000(void)

ulonglong FUN_143605000(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_143610f30();
  if ((char)uVar3 != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 8);
    uVar3 = *(ulonglong *)(param_2 + 0x30);
    lVar2 = *(longlong *)(uVar3 + 8);
    if ((lVar1 != *(longlong *)(param_2 + 0x60)) || (lVar2 != *(longlong *)(param_2 + 0x80))) {
      *(longlong *)(param_2 + 0x60) = lVar1;
      *(longlong *)(param_2 + 0x80) = lVar2;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143605050 FUN_143605050 body=39 status=ok
// SIG undefined FUN_143605050(void)

longlong FUN_143605050(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint7 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar2 = (uint7)(uint3)(uVar1 >> 0xd);
  if (uVar1 >> 5 == *param_1) {
    return (ulonglong)uVar2 << 8;
  }
  *(uint *)(param_2 + 0x10) = *param_1 << 5 | uVar1 & 0x1f;
  return CONCAT71(uVar2,1);
}



// FUNCTION 143605080 FUN_143605080 body=276 status=ok
// SIG undefined FUN_143605080(void)

undefined8 FUN_143605080(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_res8;
  
  lVar1 = param_1[0x13];
  uVar6 = 0;
  uVar2 = param_1[0x1e];
  if (uVar2 != 0) {
    local_res8 = 0;
    do {
      lVar4 = (**(code **)(*param_1 + 0x38))(param_1);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1[0x13] + 0x1c8);
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x30);
      }
      lVar7 = local_res8 + param_1[0x1d];
      cVar3 = Scaleform::GFx::AS3::Multiname::IsAnyType(lVar7);
      if (cVar3 == '\0') {
        if (((*(longlong *)(lVar4 + 0x28) != 0) &&
            (plVar5 = (longlong *)FUN_1435be300(*(longlong *)(lVar4 + 0x28),lVar7),
            plVar5 != (longlong *)0x0)) ||
           (plVar5 = (longlong *)FUN_143610150(lVar4 + 0x30,lVar7), plVar5 != (longlong *)0x0)) {
          lVar4 = *plVar5;
          goto LAB_14360512d;
        }
      }
      else {
        lVar4 = *(longlong *)(lVar1 + 0x200);
LAB_14360512d:
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0xd8);
          if (*(char *)(lVar4 + 0x88) < '\0') {
            *param_2 = lVar4;
            return 1;
          }
          cVar3 = FUN_143605080(lVar4,param_2);
          if (cVar3 != '\0') {
            return 1;
          }
        }
      }
      uVar6 = uVar6 + 1;
      local_res8 = local_res8 + 0x30;
    } while (uVar6 < uVar2);
  }
  return 0;
}



// FUNCTION 1436051a0 FUN_1436051a0 body=93 status=ok
// SIG undefined FUN_1436051a0(void)

bool FUN_1436051a0(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x88) >> 4 & 1) == 0) {
    if ((*(int *)(param_1 + 0x90) - 0x10U & 0xfffffffb) != 0) {
      cVar1 = FUN_143605080();
      return cVar1 != '\0';
    }
  }
  else {
    cVar1 = FUN_143605200();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}



// FUNCTION 143605200 FUN_143605200 body=202 status=ok
// SIG undefined FUN_143605200(void)

undefined8 FUN_143605200(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)(param_1 + 0x100);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar6 = FUN_1434e0eb0();
  uVar8 = 0;
  lVar2 = *(longlong *)(lVar6 + 0xa0);
  uVar4 = FUN_14358f8b0(&local_res8);
  if (uVar4 != 0) {
    do {
      uVar5 = FUN_14358f8b0(&local_res8);
      lVar7 = FUN_1435c7f00(uVar1,lVar6,(ulonglong)uVar5 * 0x10 + *(longlong *)(lVar2 + 0x148));
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0xd8);
        if (*(char *)(lVar7 + 0x88) < '\0') {
          *param_2 = lVar7;
          return 1;
        }
        cVar3 = FUN_1436051a0(lVar7,param_2);
        if (cVar3 != '\0') {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return 0;
}



// FUNCTION 1436052d0 FUN_1436052d0 body=276 status=ok
// SIG undefined FUN_1436052d0(void)

undefined8 FUN_1436052d0(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_res8;
  
  lVar1 = param_1[0x13];
  uVar7 = 0;
  uVar2 = param_1[0x1e];
  if (uVar2 != 0) {
    local_res8 = 0;
    do {
      lVar4 = (**(code **)(*param_1 + 0x38))(param_1);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1[0x13] + 0x1c8);
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x30);
      }
      lVar6 = local_res8 + param_1[0x1d];
      cVar3 = Scaleform::GFx::AS3::Multiname::IsAnyType(lVar6);
      if (cVar3 == '\0') {
        if (*(longlong *)(lVar4 + 0x28) != 0) {
          plVar5 = (longlong *)FUN_1435be300(*(longlong *)(lVar4 + 0x28),lVar6);
          if (plVar5 == (longlong *)0x0) goto LAB_143605369;
LAB_14360537a:
          lVar4 = *plVar5;
          goto LAB_14360537d;
        }
LAB_143605369:
        plVar5 = (longlong *)FUN_143610150(lVar4 + 0x30,lVar6);
        if (plVar5 != (longlong *)0x0) goto LAB_14360537a;
      }
      else {
        lVar4 = *(longlong *)(lVar1 + 0x200);
LAB_14360537d:
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0xd8);
          *(ulonglong *)(lVar4 + 0x88) =
               *(ulonglong *)(lVar4 + 0x88) ^
               (ulonglong)((-(uint)*param_2 ^ *(uint *)(lVar4 + 0x88)) & 0x80);
          cVar3 = FUN_1436052d0(lVar4,param_2);
          if (cVar3 != '\0') {
            return 1;
          }
        }
      }
      uVar7 = uVar7 + 1;
      local_res8 = local_res8 + 0x30;
    } while (uVar7 < uVar2);
  }
  return 0;
}



// FUNCTION 1436053f0 FUN_1436053f0 body=93 status=ok
// SIG undefined FUN_1436053f0(void)

bool FUN_1436053f0(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x88) >> 4 & 1) == 0) {
    if ((*(int *)(param_1 + 0x90) - 0x10U & 0xfffffffb) != 0) {
      cVar1 = FUN_1436052d0();
      return cVar1 != '\0';
    }
  }
  else {
    cVar1 = FUN_143605450();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}



// FUNCTION 143605450 FUN_143605450 body=202 status=ok
// SIG undefined FUN_143605450(void)

undefined8 FUN_143605450(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)(param_1 + 0x100);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar6 = FUN_1434e0eb0();
  uVar8 = 0;
  lVar2 = *(longlong *)(lVar6 + 0xa0);
  uVar4 = FUN_14358f8b0(&local_res8);
  if (uVar4 != 0) {
    do {
      uVar5 = FUN_14358f8b0(&local_res8);
      lVar7 = FUN_1435c7f00(uVar1,lVar6,(ulonglong)uVar5 * 0x10 + *(longlong *)(lVar2 + 0x148));
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0xd8);
        *(ulonglong *)(lVar7 + 0x88) =
             *(ulonglong *)(lVar7 + 0x88) ^
             (ulonglong)((-(uint)*param_2 ^ *(uint *)(lVar7 + 0x88)) & 0x80);
        cVar3 = FUN_1436053f0(lVar7,param_2);
        if (cVar3 != '\0') {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return 0;
}



// FUNCTION 143605520 FUN_143605520 body=168 status=ok
// SIG undefined FUN_143605520(void)

undefined8 FUN_143605520(longlong param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == 0) {
      return 0;
    }
    uVar3 = (ulonglong)((-(uint)*param_2 ^ *(uint *)(param_1 + 0x88)) & 0x80) ^
            *(ulonglong *)(param_1 + 0x88);
    bVar2 = (byte)uVar3;
    *(ulonglong *)(param_1 + 0x88) = uVar3;
    if ((~(bVar2 >> 5) & 1) != 0) {
      if ((bVar2 >> 4 & 1) == 0) {
        if ((*(int *)(param_1 + 0x90) - 0x10U & 0xfffffffb) == 0) goto LAB_1436055a2;
        cVar1 = FUN_1436052d0(param_1,param_2);
      }
      else {
        cVar1 = FUN_143605450(param_1,param_2);
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
LAB_1436055a2:
    param_1 = *(longlong *)(param_1 + 0xb0);
  } while( true );
}



// FUNCTION 1436055d0 FUN_1436055d0 body=456 status=ok
// SIG undefined FUN_1436055d0(void)

ulonglong * FUN_1436055d0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_14360562a;
    lVar8 = plVar2[1] * 2 + 2;
  }
  FUN_14361b9f0(param_1,param_2,lVar8);
LAB_14360562a:
  plVar2 = (longlong *)*param_1;
  uVar9 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar8 = *param_1;
  param_4 = uVar9 & param_4;
  puVar7 = (ulonglong *)((param_4 + 1) * 0x10 + lVar8);
  uVar3 = *puVar7;
  uVar6 = param_4;
  if (uVar3 == 0xfffffffffffffffe) {
    uVar9 = *param_3;
    if (uVar9 != 0) {
      *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
    }
    *puVar7 = 0xffffffffffffffff;
    if (uVar9 != 0) {
      *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
    }
    puVar7[1] = uVar9;
    if (uVar9 != 0) {
      piVar1 = (int *)(uVar9 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return puVar7 + 1;
      }
    }
  }
  else {
    do {
      uVar6 = uVar6 + 1 & uVar9;
      puVar5 = (ulonglong *)((uVar6 + 1) * 0x10 + lVar8);
    } while (*puVar5 != 0xfffffffffffffffe);
    uVar9 = *(uint *)(puVar7[1] + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      *puVar5 = uVar3;
      if (puVar7[1] != 0) {
        piVar1 = (int *)(puVar7[1] + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      puVar5[1] = puVar7[1];
      uVar9 = *param_3;
      if (uVar9 != 0) {
        *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
      }
      if (puVar7[1] != 0) {
        piVar1 = (int *)(puVar7[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar7[1] = uVar9;
      *puVar7 = uVar6;
      return puVar7 + 1;
    }
    puVar4 = (ulonglong *)((uVar9 + 1) * 0x10 + lVar8);
    uVar9 = *puVar4;
    while (uVar9 != param_4) {
      puVar4 = (ulonglong *)((*puVar4 + 1) * 0x10 + lVar8);
      uVar9 = *puVar4;
    }
    *puVar5 = uVar3;
    if (puVar7[1] != 0) {
      piVar1 = (int *)(puVar7[1] + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    puVar5[1] = puVar7[1];
    *puVar4 = uVar6;
    uVar9 = *param_3;
    if (uVar9 != 0) {
      *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
    }
    if (puVar7[1] != 0) {
      piVar1 = (int *)(puVar7[1] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar7[1] = uVar9;
    *puVar7 = 0xffffffffffffffff;
  }
  return puVar7 + 1;
}



// FUNCTION 1436057a0 FUN_1436057a0 body=456 status=ok
// SIG undefined FUN_1436057a0(void)

ulonglong * FUN_1436057a0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_1436057fa;
    lVar8 = plVar2[1] * 2 + 2;
  }
  FUN_14361bb40(param_1,param_2,lVar8);
LAB_1436057fa:
  plVar2 = (longlong *)*param_1;
  uVar9 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar8 = *param_1;
  param_4 = uVar9 & param_4;
  puVar7 = (ulonglong *)((param_4 + 1) * 0x10 + lVar8);
  uVar3 = *puVar7;
  uVar6 = param_4;
  if (uVar3 == 0xfffffffffffffffe) {
    uVar9 = *param_3;
    if (uVar9 != 0) {
      *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
    }
    *puVar7 = 0xffffffffffffffff;
    if (uVar9 != 0) {
      *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
    }
    puVar7[1] = uVar9;
    if (uVar9 != 0) {
      piVar1 = (int *)(uVar9 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return puVar7 + 1;
      }
    }
  }
  else {
    do {
      uVar6 = uVar6 + 1 & uVar9;
      puVar5 = (ulonglong *)((uVar6 + 1) * 0x10 + lVar8);
    } while (*puVar5 != 0xfffffffffffffffe);
    uVar9 = *(uint *)(puVar7[1] + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      *puVar5 = uVar3;
      if (puVar7[1] != 0) {
        piVar1 = (int *)(puVar7[1] + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      puVar5[1] = puVar7[1];
      uVar9 = *param_3;
      if (uVar9 != 0) {
        *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
      }
      if (puVar7[1] != 0) {
        piVar1 = (int *)(puVar7[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar7[1] = uVar9;
      *puVar7 = uVar6;
      return puVar7 + 1;
    }
    puVar4 = (ulonglong *)((uVar9 + 1) * 0x10 + lVar8);
    uVar9 = *puVar4;
    while (uVar9 != param_4) {
      puVar4 = (ulonglong *)((*puVar4 + 1) * 0x10 + lVar8);
      uVar9 = *puVar4;
    }
    *puVar5 = uVar3;
    if (puVar7[1] != 0) {
      piVar1 = (int *)(puVar7[1] + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    puVar5[1] = puVar7[1];
    *puVar4 = uVar6;
    uVar9 = *param_3;
    if (uVar9 != 0) {
      *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 1;
    }
    if (puVar7[1] != 0) {
      piVar1 = (int *)(puVar7[1] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    puVar7[1] = uVar9;
    *puVar7 = 0xffffffffffffffff;
  }
  return puVar7 + 1;
}



// FUNCTION 143605970 FUN_143605970 body=322 status=ok
// SIG undefined FUN_143605970(void)

void FUN_143605970(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1436059c4;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_14361a100(param_1,param_2,lVar10);
LAB_1436059c4:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined8 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 143605ac0 FUN_143605ac0 body=526 status=ok
// SIG undefined FUN_143605ac0(void)

longlong FUN_143605ac0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar12 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143605b1e;
    lVar12 = plVar4[1] * 2 + 2;
  }
  FUN_14361bca0(param_1,param_2,lVar12);
LAB_143605b1e:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar12 = lVar5 + param_4 * 0x18;
  uVar11 = param_4;
  if (lVar6 == -2) {
    uVar11 = *param_3;
    if (uVar11 != 0) {
      *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
    }
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined8 *)(lVar12 + 0x10) = 0xffffffffffffffff;
    *(ulonglong *)(lVar12 + 0x20) = uVar11;
    if (uVar11 != 0) {
      uVar9 = *(int *)(uVar11 + 8) + 1;
      uVar10 = uVar9 & 0x8fffffff;
      *(uint *)(uVar11 + 8) = uVar10;
      if (((uVar11 & 1) == 0) && ((uVar9 & 0x3fffff) != 0)) {
        *(uint *)(uVar11 + 8) = uVar10 - 1;
        FUN_1434ef880();
      }
    }
  }
  else {
    do {
      uVar11 = uVar11 + 1 & plVar4[1];
      lVar3 = lVar5 + uVar11 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar11 * 0x18) != -2);
    if (*(ulonglong *)(lVar12 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      lVar5 = *(longlong *)(lVar12 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434f0700((longlong *)(lVar12 + 0x20),*param_3);
      *(ulonglong *)(lVar12 + 0x10) = uVar11;
    }
    else {
      lVar2 = *(ulonglong *)(lVar12 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar8 = (ulonglong *)(lVar5 + lVar2 * 8), uVar7 != param_4) {
        lVar2 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      puVar1 = (ulonglong *)(lVar12 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      uVar7 = *puVar1;
      *(ulonglong *)(lVar3 + 0x20) = uVar7;
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      *puVar8 = uVar11;
      uVar11 = *param_3;
      if (uVar11 != *puVar1) {
        if (uVar11 != 0) {
          *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
        }
        uVar7 = *puVar1;
        if (uVar7 != 0) {
          if ((uVar7 & 1) == 0) {
            if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar7 - 1;
          }
        }
        *puVar1 = uVar11;
      }
      *(undefined8 *)(lVar12 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar12 + 0x18) = param_4;
  return lVar12 + 0x20;
}



// FUNCTION 143605cd0 FUN_143605cd0 body=526 status=ok
// SIG undefined FUN_143605cd0(void)

longlong FUN_143605cd0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar12 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143605d2e;
    lVar12 = plVar4[1] * 2 + 2;
  }
  FUN_14361be30(param_1,param_2,lVar12);
LAB_143605d2e:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar12 = lVar5 + param_4 * 0x18;
  uVar11 = param_4;
  if (lVar6 == -2) {
    uVar11 = *param_3;
    if (uVar11 != 0) {
      *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
    }
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined8 *)(lVar12 + 0x10) = 0xffffffffffffffff;
    *(ulonglong *)(lVar12 + 0x20) = uVar11;
    if (uVar11 != 0) {
      uVar9 = *(int *)(uVar11 + 8) + 1;
      uVar10 = uVar9 & 0x8fffffff;
      *(uint *)(uVar11 + 8) = uVar10;
      if (((uVar11 & 1) == 0) && ((uVar9 & 0x3fffff) != 0)) {
        *(uint *)(uVar11 + 8) = uVar10 - 1;
        FUN_1434ef880();
      }
    }
  }
  else {
    do {
      uVar11 = uVar11 + 1 & plVar4[1];
      lVar3 = lVar5 + uVar11 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar11 * 0x18) != -2);
    if (*(ulonglong *)(lVar12 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      lVar5 = *(longlong *)(lVar12 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434f0700((longlong *)(lVar12 + 0x20),*param_3);
      *(ulonglong *)(lVar12 + 0x10) = uVar11;
    }
    else {
      lVar2 = *(ulonglong *)(lVar12 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar8 = (ulonglong *)(lVar5 + lVar2 * 8), uVar7 != param_4) {
        lVar2 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      puVar1 = (ulonglong *)(lVar12 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
      uVar7 = *puVar1;
      *(ulonglong *)(lVar3 + 0x20) = uVar7;
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      *puVar8 = uVar11;
      uVar11 = *param_3;
      if (uVar11 != *puVar1) {
        if (uVar11 != 0) {
          *(uint *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1U & 0x8fffffff;
        }
        uVar7 = *puVar1;
        if (uVar7 != 0) {
          if ((uVar7 & 1) == 0) {
            if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar7 - 1;
          }
        }
        *puVar1 = uVar11;
      }
      *(undefined8 *)(lVar12 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar12 + 0x18) = param_4;
  return lVar12 + 0x20;
}



// FUNCTION 143605ee0 FUN_143605ee0 body=337 status=ok
// SIG undefined FUN_143605ee0(void)

void FUN_143605ee0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_143605f34;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_14361b810(param_1,param_2,lVar10);
LAB_143605f34:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    uVar6 = *param_3;
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = uVar6;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar10 + 0x20) = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar8 = (ulonglong *)(lVar4 + lVar1 * 8), uVar7 != param_4) {
        lVar1 = *puVar8 * 3 + 2;
        uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar8 = uVar9;
      *(undefined8 *)(lVar10 + 0x20) = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return;
}



// FUNCTION 143606040 FUN_143606040 body=322 status=ok
// SIG undefined FUN_143606040(void)

void FUN_143606040(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_143606094;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_14361a240(param_1,param_2,lVar10);
LAB_143606094:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined8 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 143606190 FUN_143606190 body=371 status=ok
// SIG undefined FUN_143606190(void)

longlong FUN_143606190(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  FUN_14360e370();
  plVar1 = (longlong *)*param_1;
  uVar4 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar2 = *param_1;
  param_4 = uVar4 & param_4;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar7 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(lVar8 + 0x18) = *param_3;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined1 *)(lVar8 + 0x28) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_3 + 4) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(param_3 + 2);
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar4;
      lVar6 = uVar7 * 0x20 + lVar2;
    } while (*(longlong *)(lVar6 + 0x10) != -2);
    uVar4 = (longlong)*(int *)(lVar8 + 0x18) & uVar4;
    if (uVar4 == param_4) {
      *(longlong *)(lVar6 + 0x10) = lVar3;
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x28) = *(undefined1 *)(lVar8 + 0x28);
      *(undefined1 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined4 *)(lVar8 + 0x18) = *param_3;
      Scaleform::
      AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>_>
      ::operator=(lVar8 + 0x20,param_3 + 2);
      *(ulonglong *)(lVar8 + 0x10) = uVar7;
    }
    else {
      puVar5 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x20);
      uVar4 = *puVar5;
      while (uVar4 != param_4) {
        puVar5 = (ulonglong *)(lVar2 + 0x10 + *puVar5 * 0x20);
        uVar4 = *puVar5;
      }
      *(longlong *)(lVar6 + 0x10) = lVar3;
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x28) = *(undefined1 *)(lVar8 + 0x28);
      *(undefined1 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *puVar5 = uVar7;
      *(undefined4 *)(lVar8 + 0x18) = *param_3;
      Scaleform::
      AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>_>
      ::operator=(lVar8 + 0x20,param_3 + 2);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar8 + 0x18;
}



// FUNCTION 143606310 FUN_143606310 body=342 status=ok
// SIG undefined FUN_143606310(void)

void FUN_143606310(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143606364;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_14361a530(param_1,param_2,lVar5);
LAB_143606364:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar8 = param_4 * 0x20 + lVar5;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar4 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0x20) = *param_3;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(param_3 + 2);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & plVar1[1];
      lVar7 = uVar4 * 0x20 + lVar5;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      uVar9 = *param_3;
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      uVar12 = param_3[3];
      *(ulonglong *)(lVar8 + 0x10) = uVar4;
    }
    else {
      puVar6 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar6;
      while (uVar3 != param_4) {
        puVar6 = (ulonglong *)(lVar5 + 0x10 + *puVar6 * 0x20);
        uVar3 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar6 = uVar4;
      uVar9 = *param_3;
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      uVar12 = param_3[3];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(lVar8 + 0x20) = uVar9;
    *(undefined4 *)(lVar8 + 0x24) = uVar10;
    *(undefined4 *)(lVar8 + 0x28) = uVar11;
    *(undefined4 *)(lVar8 + 0x2c) = uVar12;
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 143606470 FUN_143606470 body=394 status=ok
// SIG undefined FUN_143606470(void)

longlong FUN_143606470(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  FUN_14360e3c0();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar7 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0x20) = *param_3;
    lVar2 = *(longlong *)(param_3 + 2);
    *(longlong *)(lVar8 + 0x28) = lVar2;
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar7 = uVar7 + 1 & plVar1[1];
      lVar5 = uVar7 * 0x20 + lVar2;
    } while (*(longlong *)(lVar5 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar5 + 0x10) = lVar3;
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      lVar2 = *(longlong *)(lVar8 + 0x28);
      *(longlong *)(lVar5 + 0x28) = lVar2;
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      }
      FUN_14360c1f0(lVar8 + 0x20,param_3);
      *(ulonglong *)(lVar8 + 0x10) = uVar7;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar5 + 0x10) = lVar3;
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      lVar2 = *(longlong *)(lVar8 + 0x28);
      *(longlong *)(lVar5 + 0x28) = lVar2;
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      }
      *puVar6 = uVar7;
      FUN_14360c1f0(lVar8 + 0x20,param_3);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return lVar8 + 0x20;
}



// FUNCTION 143606600 FUN_143606600 body=393 status=ok
// SIG undefined FUN_143606600(void)

undefined8 *
FUN_143606600(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_14360e410();
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar3 = *param_1;
  lVar8 = param_4 * 0x20 + lVar3;
  lVar4 = *(longlong *)(lVar8 + 0x10);
  uVar7 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    lVar3 = param_3[1];
    *(longlong *)(lVar8 + 0x28) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(ulonglong *)(lVar8 + 0x18) = param_4;
    return (undefined8 *)(lVar8 + 0x20);
  }
  do {
    uVar7 = uVar7 + 1 & plVar2[1];
    lVar9 = uVar7 * 0x20 + lVar3;
  } while (*(longlong *)(lVar9 + 0x10) != -2);
  if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
    *(longlong *)(lVar9 + 0x10) = lVar4;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
    lVar3 = *(longlong *)(lVar8 + 0x28);
    *(longlong *)(lVar9 + 0x28) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    lVar3 = param_3[1];
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x28) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar8 + 0x28) = lVar3;
    *(ulonglong *)(lVar8 + 0x10) = uVar7;
  }
  else {
    puVar6 = (ulonglong *)(lVar3 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
    uVar5 = *puVar6;
    while (uVar5 != param_4) {
      puVar6 = (ulonglong *)(lVar3 + 0x10 + *puVar6 * 0x20);
      uVar5 = *puVar6;
    }
    *(longlong *)(lVar9 + 0x10) = lVar4;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
    lVar3 = *(longlong *)(lVar8 + 0x28);
    *(longlong *)(lVar9 + 0x28) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    *puVar6 = uVar7;
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    lVar3 = param_3[1];
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x28) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar8 + 0x28) = lVar3;
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return (undefined8 *)(lVar8 + 0x20);
}



// FUNCTION 143606790 FUN_143606790 body=295 status=ok
// SIG undefined FUN_143606790(void)

void FUN_143606790(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_14360e460();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    *(undefined8 *)(lVar8 + 0x28) = param_3[1];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar2;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar6 = uVar5;
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(lVar8 + 0x20) = uVar9;
    *(undefined4 *)(lVar8 + 0x24) = uVar10;
    *(undefined4 *)(lVar8 + 0x28) = uVar11;
    *(undefined4 *)(lVar8 + 0x2c) = uVar12;
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 1436068c0 FUN_1436068c0 body=270 status=ok
// SIG undefined FUN_1436068c0(void)

undefined8 *
FUN_1436068c0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_14360e4b0();
  plVar4 = (longlong *)*param_1;
  uVar8 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar8 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar2 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = *param_3;
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_3 + 1);
    return (undefined8 *)(lVar2 + 0x18);
  }
  do {
    uVar9 = uVar9 + 1 & uVar8;
    lVar3 = lVar5 + uVar9 * 0x18;
  } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
  uVar8 = *(ulonglong *)(lVar2 + 0x18) & uVar8;
  if (uVar8 == param_4) {
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
    uVar10 = *(undefined4 *)param_3;
    uVar11 = *(undefined4 *)((longlong)param_3 + 4);
    uVar12 = *(undefined4 *)(param_3 + 1);
    uVar13 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(ulonglong *)(lVar2 + 0x10) = uVar9;
  }
  else {
    lVar1 = uVar8 * 3 + 2;
    uVar8 = *(ulonglong *)(lVar5 + lVar1 * 8);
    while (puVar7 = (ulonglong *)(lVar5 + lVar1 * 8), uVar8 != param_4) {
      lVar1 = *puVar7 * 3 + 2;
      uVar8 = *(ulonglong *)(lVar5 + lVar1 * 8);
    }
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
    *puVar7 = uVar9;
    uVar10 = *(undefined4 *)param_3;
    uVar11 = *(undefined4 *)((longlong)param_3 + 4);
    uVar12 = *(undefined4 *)(param_3 + 1);
    uVar13 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  }
  *(undefined4 *)(lVar2 + 0x18) = uVar10;
  *(undefined4 *)(lVar2 + 0x1c) = uVar11;
  *(undefined4 *)(lVar2 + 0x20) = uVar12;
  *(undefined4 *)(lVar2 + 0x24) = uVar13;
  return (undefined8 *)(lVar2 + 0x18);
}



// FUNCTION 1436069d0 FUN_1436069d0 body=295 status=ok
// SIG undefined FUN_1436069d0(void)

void FUN_1436069d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_14360e500();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    *(undefined8 *)(lVar8 + 0x28) = param_3[1];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar2;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar6 = uVar5;
      uVar9 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((longlong)param_3 + 4);
      uVar11 = *(undefined4 *)(param_3 + 1);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(lVar8 + 0x20) = uVar9;
    *(undefined4 *)(lVar8 + 0x24) = uVar10;
    *(undefined4 *)(lVar8 + 0x28) = uVar11;
    *(undefined4 *)(lVar8 + 0x2c) = uVar12;
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 143606b00 FUN_143606b00 body=411 status=ok
// SIG undefined FUN_143606b00(void)

longlong FUN_143606b00(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  
  FUN_14360e550();
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x28);
  lVar1 = lVar5 + param_4 * 0x28;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[1];
    lVar5 = param_3[2];
    *(longlong *)(lVar1 + 0x30) = lVar5;
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar4[1];
      lVar2 = lVar5 + uVar9 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x28) != -2);
    if (*(ulonglong *)(lVar1 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      lVar5 = *(longlong *)(lVar1 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      FUN_14360c2f0(lVar1 + 0x20,param_3);
      *(ulonglong *)(lVar1 + 0x10) = uVar9;
    }
    else {
      lVar3 = *(ulonglong *)(lVar1 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      while (puVar8 = (ulonglong *)(lVar5 + lVar3 * 8), uVar7 != param_4) {
        lVar3 = *puVar8 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      lVar5 = *(longlong *)(lVar1 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      *puVar8 = uVar9;
      FUN_14360c2f0(lVar1 + 0x20,param_3);
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar1 + 0x18) = param_4;
  return lVar1 + 0x20;
}



// FUNCTION 143606ca0 FUN_143606ca0 body=435 status=ok
// SIG undefined FUN_143606ca0(void)

longlong FUN_143606ca0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  FUN_14360e5a0();
  plVar5 = (longlong *)*param_1;
  *plVar5 = *plVar5 + 1;
  param_4 = param_4 & plVar5[1];
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x28);
  lVar2 = lVar6 + param_4 * 0x28;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    lVar6 = *param_3;
    *(longlong *)(lVar2 + 0x20) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar6 = param_3[1];
    *(longlong *)(lVar2 + 0x28) = lVar6;
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
    }
    *(char *)(lVar2 + 0x30) = (char)param_3[2];
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar5[1];
      lVar3 = lVar6 + uVar10 * 0x28;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x28) != -2);
    if (*(ulonglong *)(lVar2 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar7;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      lVar6 = *(longlong *)(lVar2 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar6 = *(longlong *)(lVar2 + 0x28);
      *(longlong *)(lVar3 + 0x28) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      *(undefined1 *)(lVar3 + 0x30) = *(undefined1 *)(lVar2 + 0x30);
      FUN_1434e6900(lVar2 + 0x20,param_3);
      *(char *)(lVar2 + 0x30) = (char)param_3[2];
      *(ulonglong *)(lVar2 + 0x10) = uVar10;
    }
    else {
      lVar4 = *(ulonglong *)(lVar2 + 0x18) * 5 + 2;
      uVar8 = *(ulonglong *)(lVar6 + lVar4 * 8);
      while (puVar9 = (ulonglong *)(lVar6 + lVar4 * 8), uVar8 != param_4) {
        lVar4 = *puVar9 * 5 + 2;
        uVar8 = *(ulonglong *)(lVar6 + lVar4 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar7;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      lVar6 = *(longlong *)(lVar2 + 0x20);
      *(longlong *)(lVar3 + 0x20) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar6 = *(longlong *)(lVar2 + 0x28);
      *(longlong *)(lVar3 + 0x28) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      *(undefined1 *)(lVar3 + 0x30) = *(undefined1 *)(lVar2 + 0x30);
      *puVar9 = uVar10;
      FUN_1434e6900(lVar2 + 0x20,param_3);
      *(char *)(lVar2 + 0x30) = (char)param_3[2];
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar2 + 0x18) = param_4;
  return lVar2 + 0x20;
}



// FUNCTION 143606e60 FUN_143606e60 body=454 status=ok
// SIG undefined FUN_143606e60(void)

longlong FUN_143606e60(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143606eba;
    lVar9 = plVar4[1] * 2 + 2;
  }
  FUN_14361b0a0(param_1,param_2,lVar9);
LAB_143606eba:
  plVar4 = (longlong *)*param_1;
  uVar10 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar10 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar9 = lVar5 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    if (*param_3 != 0) {
      piVar1 = (int *)(*param_3 + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    *(longlong *)(lVar9 + 0x18) = *param_3;
    *(int *)(lVar9 + 0x20) = (int)param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar10;
      lVar3 = lVar5 + uVar8 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar8 * 0x18) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
      if (*param_3 != 0) {
        piVar1 = (int *)(*param_3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *(longlong *)(lVar9 + 0x18) = *param_3;
      *(int *)(lVar9 + 0x20) = (int)param_3[1];
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar2 = uVar10 * 3 + 2;
      uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar2 * 8), uVar10 != param_4) {
        lVar2 = *puVar7 * 3 + 2;
        uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      if (*param_3 != 0) {
        piVar1 = (int *)(*param_3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *(longlong *)(lVar9 + 0x18) = *param_3;
      *(int *)(lVar9 + 0x20) = (int)param_3[1];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143607030 FUN_143607030 body=470 status=ok
// SIG undefined FUN_143607030(void)

longlong FUN_143607030(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_14360e5f0();
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar3 = *param_1;
  lVar9 = param_4 * 0x20 + lVar3;
  lVar4 = *(longlong *)(lVar9 + 0x10);
  uVar8 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    uVar8 = *param_3;
    *(ulonglong *)(lVar9 + 0x20) = uVar8;
    if (uVar8 != 0) {
      *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
    }
    *(ulonglong *)(lVar9 + 0x28) = param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & plVar2[1];
      lVar7 = uVar8 * 0x20 + lVar3;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar9 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar4;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      lVar3 = *(longlong *)(lVar9 + 0x20);
      *(longlong *)(lVar7 + 0x20) = lVar3;
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
      FUN_14360c3f0(lVar9 + 0x20,param_3);
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      puVar6 = (ulonglong *)(lVar3 + 0x10 + *(ulonglong *)(lVar9 + 0x18) * 0x20);
      uVar5 = *puVar6;
      while (uVar5 != param_4) {
        puVar6 = (ulonglong *)(lVar3 + 0x10 + *puVar6 * 0x20);
        uVar5 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar4;
      puVar1 = (ulonglong *)(lVar9 + 0x20);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      uVar5 = *puVar1;
      *(ulonglong *)(lVar7 + 0x20) = uVar5;
      if (uVar5 != 0) {
        *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
      *puVar6 = uVar8;
      if (param_3 != puVar1) {
        uVar8 = *param_3;
        if (uVar8 != 0) {
          *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
        }
        uVar8 = *puVar1;
        if (uVar8 != 0) {
          if ((uVar8 & 1) == 0) {
            if ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar8 - 1;
          }
        }
        *puVar1 = *param_3;
      }
      *(ulonglong *)(lVar9 + 0x28) = param_3[1];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar9 + 0x18) = param_4;
  return lVar9 + 0x20;
}



// FUNCTION 143607210 FUN_143607210 body=354 status=ok
// SIG undefined FUN_143607210(void)

longlong FUN_143607210(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  FUN_14360e640();
  plVar5 = (longlong *)*param_1;
  uVar9 = plVar5[1];
  *plVar5 = *plVar5 + 1;
  lVar6 = *param_1;
  param_4 = uVar9 & param_4;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x18);
  lVar3 = lVar6 + param_4 * 0x18;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    lVar6 = *param_3;
    *(longlong *)(lVar3 + 0x18) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(longlong *)(lVar3 + 0x20) = param_3[1];
  }
  else {
    do {
      uVar10 = uVar10 + 1 & uVar9;
      lVar4 = lVar6 + uVar10 * 0x18;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x18) != -2);
    uVar9 = *(uint *)(*(longlong *)(lVar3 + 0x18) + 0x1c) & uVar9;
    if (uVar9 == param_4) {
      *(longlong *)(lVar4 + 0x10) = lVar7;
      lVar6 = *(longlong *)(lVar3 + 0x18);
      *(longlong *)(lVar4 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      lVar6 = *param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar3 + 0x18) = lVar6;
      *(longlong *)(lVar3 + 0x20) = param_3[1];
      *(ulonglong *)(lVar3 + 0x10) = uVar10;
    }
    else {
      lVar2 = uVar9 * 3 + 2;
      uVar9 = *(ulonglong *)(lVar6 + lVar2 * 8);
      while (puVar8 = (ulonglong *)(lVar6 + lVar2 * 8), uVar9 != param_4) {
        lVar2 = *puVar8 * 3 + 2;
        uVar9 = *(ulonglong *)(lVar6 + lVar2 * 8);
      }
      *(longlong *)(lVar4 + 0x10) = lVar7;
      lVar6 = *(longlong *)(lVar3 + 0x18);
      *(longlong *)(lVar4 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      *puVar8 = uVar10;
      lVar6 = *param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar3 + 0x18) = lVar6;
      *(longlong *)(lVar3 + 0x20) = param_3[1];
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar3 + 0x18;
}



// FUNCTION 143607380 FUN_143607380 body=403 status=ok
// SIG undefined FUN_143607380(void)

longlong FUN_143607380(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_14360e690();
  plVar2 = (longlong *)*param_1;
  uVar5 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar5 & param_4;
  lVar9 = param_4 * 0x30 + lVar3;
  lVar4 = *(longlong *)(lVar9 + 0x10);
  uVar6 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar3 = *param_3;
    *(longlong *)(lVar9 + 0x18) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    FUN_14360ab50(lVar9 + 0x20,param_3 + 1);
  }
  else {
    do {
      uVar6 = uVar6 + 1 & uVar5;
      lVar8 = uVar6 * 0x30 + lVar3;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    uVar5 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar5;
    if (uVar5 == param_4) {
      *(longlong *)(lVar8 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar8 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_14360ab50(lVar8 + 0x20,lVar9 + 0x20);
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar3;
      FUN_143590140(lVar9 + 0x20,param_3 + 1);
      *(ulonglong *)(lVar9 + 0x10) = uVar6;
    }
    else {
      puVar7 = (ulonglong *)(lVar3 + 0x10 + uVar5 * 0x30);
      uVar5 = *puVar7;
      while (uVar5 != param_4) {
        puVar7 = (ulonglong *)(lVar3 + 0x10 + *puVar7 * 0x30);
        uVar5 = *puVar7;
      }
      *(longlong *)(lVar8 + 0x10) = lVar4;
      lVar3 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar8 + 0x18) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_14360ab50(lVar8 + 0x20,lVar9 + 0x20);
      *puVar7 = uVar6;
      lVar3 = *param_3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar3;
      FUN_143590140(lVar9 + 0x20,param_3 + 1);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143607520 FUN_143607520 body=393 status=ok
// SIG undefined FUN_143607520(void)

longlong * FUN_143607520(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_14360e6e0();
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar3 = *param_1;
  lVar8 = param_4 * 0x20 + lVar3;
  lVar4 = *(longlong *)(lVar8 + 0x10);
  uVar7 = param_4;
  if (lVar4 == -2) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    lVar3 = *param_3;
    *(longlong *)(lVar8 + 0x20) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(longlong *)(lVar8 + 0x28) = param_3[1];
    *(ulonglong *)(lVar8 + 0x18) = param_4;
    return (longlong *)(lVar8 + 0x20);
  }
  do {
    uVar7 = uVar7 + 1 & plVar2[1];
    lVar9 = uVar7 * 0x20 + lVar3;
  } while (*(longlong *)(lVar9 + 0x10) != -2);
  if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
    *(longlong *)(lVar9 + 0x10) = lVar4;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    lVar3 = *(longlong *)(lVar8 + 0x20);
    *(longlong *)(lVar9 + 0x20) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
    lVar3 = *param_3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar8 + 0x20) = lVar3;
    *(longlong *)(lVar8 + 0x28) = param_3[1];
    *(ulonglong *)(lVar8 + 0x10) = uVar7;
  }
  else {
    puVar6 = (ulonglong *)(lVar3 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
    uVar5 = *puVar6;
    while (uVar5 != param_4) {
      puVar6 = (ulonglong *)(lVar3 + 0x10 + *puVar6 * 0x20);
      uVar5 = *puVar6;
    }
    *(longlong *)(lVar9 + 0x10) = lVar4;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    lVar3 = *(longlong *)(lVar8 + 0x20);
    *(longlong *)(lVar9 + 0x20) = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
    *puVar6 = uVar7;
    lVar3 = *param_3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar8 + 0x20) = lVar3;
    *(longlong *)(lVar8 + 0x28) = param_3[1];
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return (longlong *)(lVar8 + 0x20);
}



// FUNCTION 1436076b0 FUN_1436076b0 body=273 status=ok
// SIG undefined FUN_1436076b0(void)

void FUN_1436076b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  FUN_14360e730();
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar2 = lVar5 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    uVar10 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar4[1];
      lVar3 = lVar5 + uVar9 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar2 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = *param_3;
      *(ulonglong *)(lVar2 + 0x10) = uVar9;
      goto LAB_1436077ad;
    }
    lVar1 = *(ulonglong *)(lVar2 + 0x18) * 3 + 2;
    uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
    while (puVar8 = (ulonglong *)(lVar5 + lVar1 * 8), uVar7 != param_4) {
      lVar1 = *puVar8 * 3 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
    }
    *(longlong *)(lVar3 + 0x10) = lVar6;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    *puVar8 = uVar9;
    uVar10 = *param_3;
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  }
  *(undefined8 *)(lVar2 + 0x20) = uVar10;
LAB_1436077ad:
  *(ulonglong *)(lVar2 + 0x18) = param_4;
  return;
}



// FUNCTION 1436077d0 FUN_1436077d0 body=436 status=ok
// SIG undefined FUN_1436077d0(void)

longlong FUN_1436077d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_14360782a;
    lVar8 = plVar1[1] * 2 + 2;
  }
  FUN_14361a390(param_1,param_2,lVar8);
LAB_14360782a:
  plVar1 = (longlong *)*param_1;
  uVar4 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar8 = *param_1;
  param_4 = uVar4 & param_4;
  lVar7 = param_4 * 0x20 + lVar8;
  lVar2 = *(longlong *)(lVar7 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)*param_3;
    puVar3 = (undefined8 *)param_3[1];
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)(puVar3 + 1) = 0;
    *(undefined8 *)(lVar7 + 0x20) = *puVar3;
  }
  else {
    do {
      uVar6 = uVar6 + 1 & uVar4;
      lVar9 = uVar6 * 0x20 + lVar8;
    } while (*(longlong *)(lVar9 + 0x10) != -2);
    uVar4 = (longlong)*(int *)(lVar7 + 0x18) & uVar4;
    if (uVar4 == param_4) {
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar7 + 0x18);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined1 *)(lVar9 + 0x28) = *(undefined1 *)(lVar7 + 0x28);
      *(undefined1 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
      *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)*param_3;
      Scaleform::
      AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>_>
      ::operator=(lVar7 + 0x20,param_3[1]);
      *(ulonglong *)(lVar7 + 0x10) = uVar6;
    }
    else {
      puVar5 = (ulonglong *)(lVar8 + 0x10 + uVar4 * 0x20);
      uVar4 = *puVar5;
      while (uVar4 != param_4) {
        puVar5 = (ulonglong *)(lVar8 + 0x10 + *puVar5 * 0x20);
        uVar4 = *puVar5;
      }
      *(longlong *)(lVar9 + 0x10) = lVar2;
      *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar7 + 0x18);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined1 *)(lVar9 + 0x28) = *(undefined1 *)(lVar7 + 0x28);
      *(undefined1 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
      *puVar5 = uVar6;
      *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)*param_3;
      Scaleform::
      AutoPtr<Scaleform::ArrayLH<Scaleform::WeakPtr<Scaleform::GFx::DisplayObject>,2,Scaleform::ArrayDefaultPolicy>_>
      ::operator=(lVar7 + 0x20,param_3[1]);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar7 + 0x18;
}



// FUNCTION 143607990 FUN_143607990 body=386 status=ok
// SIG undefined FUN_143607990(void)

void FUN_143607990(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_1436079e4;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_14361a530(param_1,param_2,lVar5);
LAB_1436079e4:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar8 = param_4 * 0x20 + lVar5;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar7 = uVar6 * 0x20 + lVar5;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar8 + 0x10) = uVar6;
    }
    else {
      puVar4 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar5 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar4 = uVar6;
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 143607b20 FUN_143607b20 body=442 status=ok
// SIG undefined FUN_143607b20(void)

longlong FUN_143607b20(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143607b7a;
    lVar8 = plVar1[1] * 2 + 2;
  }
  FUN_14361a680(param_1,param_2,lVar8);
LAB_143607b7a:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar8 = *param_1;
  lVar7 = param_4 * 0x20 + lVar8;
  lVar2 = *(longlong *)(lVar7 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)*param_3;
    lVar8 = *(longlong *)param_3[1];
    *(longlong *)(lVar7 + 0x28) = lVar8;
    if (lVar8 != 0) {
      *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar4 = uVar6 * 0x20 + lVar8;
    } while (*(longlong *)(lVar4 + 0x10) != -2);
    if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
      *(longlong *)(lVar4 + 0x10) = lVar2;
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
      lVar8 = *(longlong *)(lVar7 + 0x28);
      *(longlong *)(lVar4 + 0x28) = lVar8;
      if (lVar8 != 0) {
        *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
      }
      FUN_14360c270(lVar7 + 0x20,param_3);
      *(ulonglong *)(lVar7 + 0x10) = uVar6;
    }
    else {
      puVar5 = (ulonglong *)(lVar8 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
      uVar3 = *puVar5;
      while (uVar3 != param_4) {
        puVar5 = (ulonglong *)(lVar8 + 0x10 + *puVar5 * 0x20);
        uVar3 = *puVar5;
      }
      *(longlong *)(lVar4 + 0x10) = lVar2;
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
      lVar8 = *(longlong *)(lVar7 + 0x28);
      *(longlong *)(lVar4 + 0x28) = lVar8;
      if (lVar8 != 0) {
        *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
      }
      *puVar5 = uVar6;
      FUN_14360c270(lVar7 + 0x20,param_3);
      *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return lVar7 + 0x20;
}



// FUNCTION 143607ce0 FUN_143607ce0 body=463 status=ok
// SIG undefined FUN_143607ce0(void)

undefined8 *
FUN_143607ce0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_143607d32;
    lVar8 = plVar2[1] * 2 + 2;
  }
  FUN_14361a810(param_1,param_2,lVar8);
LAB_143607d32:
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar8 = *param_1;
  lVar7 = param_4 * 0x20 + lVar8;
  lVar3 = *(longlong *)(lVar7 + 0x10);
  uVar6 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)*param_3;
    lVar8 = *(longlong *)param_3[1];
    *(longlong *)(lVar7 + 0x28) = lVar8;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(ulonglong *)(lVar7 + 0x18) = param_4;
    return (undefined8 *)(lVar7 + 0x20);
  }
  do {
    uVar6 = uVar6 + 1 & plVar2[1];
    lVar9 = uVar6 * 0x20 + lVar8;
  } while (*(longlong *)(lVar9 + 0x10) != -2);
  if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
    *(longlong *)(lVar9 + 0x10) = lVar3;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
    lVar8 = *(longlong *)(lVar7 + 0x28);
    *(longlong *)(lVar9 + 0x28) = lVar8;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)*param_3;
    lVar8 = *(longlong *)param_3[1];
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar7 + 0x28) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar7 + 0x28) = lVar8;
    *(ulonglong *)(lVar7 + 0x10) = uVar6;
  }
  else {
    puVar5 = (ulonglong *)(lVar8 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
    uVar4 = *puVar5;
    while (uVar4 != param_4) {
      puVar5 = (ulonglong *)(lVar8 + 0x10 + *puVar5 * 0x20);
      uVar4 = *puVar5;
    }
    *(longlong *)(lVar9 + 0x10) = lVar3;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
    lVar8 = *(longlong *)(lVar7 + 0x28);
    *(longlong *)(lVar9 + 0x28) = lVar8;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    *puVar5 = uVar6;
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)*param_3;
    lVar8 = *(longlong *)param_3[1];
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar7 + 0x28) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar7 + 0x28) = lVar8;
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return (undefined8 *)(lVar7 + 0x20);
}



// FUNCTION 143607eb0 FUN_143607eb0 body=389 status=ok
// SIG undefined FUN_143607eb0(void)

void FUN_143607eb0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143607f04;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_14361a980(param_1,param_2,lVar5);
LAB_143607f04:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar8 = param_4 * 0x20 + lVar5;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar7 = uVar6 * 0x20 + lVar5;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar8 + 0x10) = uVar6;
    }
    else {
      puVar4 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar5 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar4 = uVar6;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 143608040 FUN_143608040 body=362 status=ok
// SIG undefined FUN_143608040(void)

undefined8 *
FUN_143608040(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_143608094;
    lVar8 = plVar3[1] * 2 + 2;
  }
  FUN_14361aad0(param_1,param_2,lVar8);
LAB_143608094:
  plVar3 = (longlong *)*param_1;
  uVar7 = plVar3[1];
  *plVar3 = *plVar3 + 1;
  lVar4 = *param_1;
  param_4 = uVar7 & param_4;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar8 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)*param_3;
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)param_3[1];
    return (undefined8 *)(lVar8 + 0x18);
  }
  do {
    uVar9 = uVar9 + 1 & uVar7;
    lVar2 = lVar4 + uVar9 * 0x18;
  } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
  uVar7 = *(ulonglong *)(lVar8 + 0x18) & uVar7;
  if (uVar7 == param_4) {
    *(longlong *)(lVar2 + 0x10) = lVar5;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)*param_3;
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)param_3[1];
    *(ulonglong *)(lVar8 + 0x10) = uVar9;
  }
  else {
    lVar1 = uVar7 * 3 + 2;
    uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
    while (puVar6 = (ulonglong *)(lVar4 + lVar1 * 8), uVar7 != param_4) {
      lVar1 = *puVar6 * 3 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
    }
    *(longlong *)(lVar2 + 0x10) = lVar5;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
    *puVar6 = uVar9;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)*param_3;
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)param_3[1];
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
  }
  return (undefined8 *)(lVar8 + 0x18);
}



// FUNCTION 1436081b0 FUN_1436081b0 body=389 status=ok
// SIG undefined FUN_1436081b0(void)

void FUN_1436081b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143608204;
    lVar5 = plVar1[1] * 2 + 2;
  }
  FUN_14361ac00(param_1,param_2,lVar5);
LAB_143608204:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar5 = *param_1;
  lVar8 = param_4 * 0x20 + lVar5;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar6 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      lVar7 = uVar6 * 0x20 + lVar5;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar8 + 0x10) = uVar6;
    }
    else {
      puVar4 = (ulonglong *)(lVar5 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar5 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      *puVar4 = uVar6;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)*param_3;
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return;
}



// FUNCTION 143608340 FUN_143608340 body=475 status=ok
// SIG undefined FUN_143608340(void)

longlong FUN_143608340(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_14360839a;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_14361ad50(param_1,param_2,lVar10);
LAB_14360839a:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x28);
  lVar10 = lVar4 + param_4 * 0x28;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    puVar6 = (undefined8 *)*param_3;
    *(undefined8 *)(lVar10 + 0x20) = *puVar6;
    *(undefined8 *)(lVar10 + 0x28) = puVar6[1];
    lVar4 = *(longlong *)param_3[1];
    *(longlong *)(lVar10 + 0x30) = lVar4;
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar1 = lVar4 + uVar9 * 0x28;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x28) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar1 + 0x10) = lVar5;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
      lVar4 = *(longlong *)(lVar10 + 0x30);
      *(longlong *)(lVar1 + 0x30) = lVar4;
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
      }
      FUN_14360c370(lVar10 + 0x20,param_3);
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar2 = *(ulonglong *)(lVar10 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar2 * 8);
      while (puVar8 = (ulonglong *)(lVar4 + lVar2 * 8), uVar7 != param_4) {
        lVar2 = *puVar8 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar4 + lVar2 * 8);
      }
      *(longlong *)(lVar1 + 0x10) = lVar5;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
      lVar4 = *(longlong *)(lVar10 + 0x30);
      *(longlong *)(lVar1 + 0x30) = lVar4;
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
      }
      *puVar8 = uVar9;
      FUN_14360c370(lVar10 + 0x20,param_3);
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 143608520 FUN_143608520 body=503 status=ok
// SIG undefined FUN_143608520(void)

longlong FUN_143608520(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_14360857a;
    lVar10 = plVar4[1] * 2 + 2;
  }
  FUN_14361aef0(param_1,param_2,lVar10);
LAB_14360857a:
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x28);
  lVar10 = lVar5 + param_4 * 0x28;
  uVar9 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    plVar4 = (longlong *)*param_3;
    lVar5 = *plVar4;
    *(longlong *)(lVar10 + 0x20) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    lVar5 = plVar4[1];
    *(longlong *)(lVar10 + 0x28) = lVar5;
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
    }
    *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)param_3[1];
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar4[1];
      lVar2 = lVar5 + uVar9 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar9 * 0x28) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      lVar5 = *(longlong *)(lVar10 + 0x20);
      *(longlong *)(lVar2 + 0x20) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar5 = *(longlong *)(lVar10 + 0x28);
      *(longlong *)(lVar2 + 0x28) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      *(undefined1 *)(lVar2 + 0x30) = *(undefined1 *)(lVar10 + 0x30);
      FUN_1434e6900(lVar10 + 0x20,*param_3);
      *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)param_3[1];
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar3 = *(ulonglong *)(lVar10 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      while (puVar8 = (ulonglong *)(lVar5 + lVar3 * 8), uVar7 != param_4) {
        lVar3 = *puVar8 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      lVar5 = *(longlong *)(lVar10 + 0x20);
      *(longlong *)(lVar2 + 0x20) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      lVar5 = *(longlong *)(lVar10 + 0x28);
      *(longlong *)(lVar2 + 0x28) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
      }
      *(undefined1 *)(lVar2 + 0x30) = *(undefined1 *)(lVar10 + 0x30);
      *puVar8 = uVar9;
      FUN_1434e6900(lVar10 + 0x20,*param_3);
      *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)param_3[1];
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 143608720 FUN_143608720 body=492 status=ok
// SIG undefined FUN_143608720(void)

longlong FUN_143608720(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_14360877a;
    lVar9 = plVar4[1] * 2 + 2;
  }
  FUN_14361b0a0(param_1,param_2,lVar9);
LAB_14360877a:
  plVar4 = (longlong *)*param_1;
  uVar10 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar10 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar9 = lVar5 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    plVar4 = (longlong *)*param_3;
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    *(longlong *)(lVar9 + 0x18) = *plVar4;
    *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar10;
      lVar3 = lVar5 + uVar8 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar8 * 0x18) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
      plVar4 = (longlong *)*param_3;
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *(longlong *)(lVar9 + 0x18) = *plVar4;
      *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)param_3[1];
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar2 = uVar10 * 3 + 2;
      uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar2 * 8), uVar10 != param_4) {
        lVar2 = *puVar7 * 3 + 2;
        uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      plVar4 = (longlong *)*param_3;
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (*(longlong *)(lVar9 + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *(longlong *)(lVar9 + 0x18) = *plVar4;
      *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)param_3[1];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143608910 FUN_143608910 body=444 status=ok
// SIG undefined FUN_143608910(void)

longlong FUN_143608910(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar7 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_14360896a;
    lVar7 = plVar1[1] * 2 + 2;
  }
  FUN_14361b200(param_1,param_2,lVar7);
LAB_14360896a:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar7 = *param_1;
  lVar6 = param_4 * 0x20 + lVar7;
  lVar2 = *(longlong *)(lVar6 + 0x10);
  uVar5 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    lVar7 = *(longlong *)*param_3;
    *(longlong *)(lVar6 + 0x20) = lVar7;
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
    }
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar8 = uVar5 * 0x20 + lVar7;
    } while (*(longlong *)(lVar8 + 0x10) != -2);
    if (*(ulonglong *)(lVar6 + 0x18) == param_4) {
      *(longlong *)(lVar8 + 0x10) = lVar2;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
      lVar7 = *(longlong *)(lVar6 + 0x20);
      *(longlong *)(lVar8 + 0x20) = lVar7;
      if (lVar7 != 0) {
        *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
      FUN_14360c460(lVar6 + 0x20,param_3);
      *(ulonglong *)(lVar6 + 0x10) = uVar5;
    }
    else {
      puVar4 = (ulonglong *)(lVar7 + 0x10 + *(ulonglong *)(lVar6 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar7 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar8 + 0x10) = lVar2;
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
      lVar7 = *(longlong *)(lVar6 + 0x20);
      *(longlong *)(lVar8 + 0x20) = lVar7;
      if (lVar7 != 0) {
        *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
      }
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
      *puVar4 = uVar5;
      FUN_14360c460(lVar6 + 0x20,param_3);
      *(undefined8 *)(lVar6 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar6 + 0x18) = param_4;
  return lVar6 + 0x20;
}



// FUNCTION 143608ad0 FUN_143608ad0 body=440 status=ok
// SIG undefined FUN_143608ad0(void)

longlong FUN_143608ad0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_143608b2a;
    lVar9 = plVar4[1] * 2 + 2;
  }
  FUN_14361b390(param_1,param_2,lVar9);
LAB_143608b2a:
  plVar4 = (longlong *)*param_1;
  uVar10 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar5 = *param_1;
  param_4 = uVar10 & param_4;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x18);
  lVar9 = lVar5 + param_4 * 0x18;
  uVar8 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar5 = *(longlong *)*param_3;
    *(longlong *)(lVar9 + 0x18) = lVar5;
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)param_3[1];
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar10;
      lVar3 = lVar5 + uVar8 * 0x18;
    } while (*(longlong *)(lVar5 + 0x10 + uVar8 * 0x18) != -2);
    uVar10 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar10;
    if (uVar10 == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      lVar5 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)param_3[1];
      *(ulonglong *)(lVar9 + 0x10) = uVar8;
    }
    else {
      lVar2 = uVar10 * 3 + 2;
      uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      while (puVar7 = (ulonglong *)(lVar5 + lVar2 * 8), uVar10 != param_4) {
        lVar2 = *puVar7 * 3 + 2;
        uVar10 = *(ulonglong *)(lVar5 + lVar2 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      lVar5 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
      *puVar7 = uVar8;
      lVar5 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar5;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143608c90 FUN_143608c90 body=454 status=ok
// SIG undefined FUN_143608c90(void)

longlong FUN_143608c90(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_143608cea;
    lVar6 = plVar2[1] * 2 + 2;
  }
  FUN_14361b4e0(param_1,param_2,lVar6);
LAB_143608cea:
  plVar2 = (longlong *)*param_1;
  uVar8 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar6 = *param_1;
  param_4 = uVar8 & param_4;
  lVar9 = param_4 * 0x30 + lVar6;
  lVar3 = *(longlong *)(lVar9 + 0x10);
  uVar4 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    lVar6 = *(longlong *)*param_3;
    *(longlong *)(lVar9 + 0x18) = lVar6;
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    FUN_14360ab50(lVar9 + 0x20,param_3[1]);
  }
  else {
    do {
      uVar4 = uVar4 + 1 & uVar8;
      lVar7 = uVar4 * 0x30 + lVar6;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x18) + 0x1c) & uVar8;
    if (uVar8 == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      lVar6 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_14360ab50(lVar7 + 0x20,lVar9 + 0x20);
      lVar6 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar6;
      FUN_143590140(lVar9 + 0x20,param_3[1]);
      *(ulonglong *)(lVar9 + 0x10) = uVar4;
    }
    else {
      puVar5 = (ulonglong *)(lVar6 + 0x10 + uVar8 * 0x30);
      uVar8 = *puVar5;
      while (uVar8 != param_4) {
        puVar5 = (ulonglong *)(lVar6 + 0x10 + *puVar5 * 0x30);
        uVar8 = *puVar5;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      lVar6 = *(longlong *)(lVar9 + 0x18);
      *(longlong *)(lVar7 + 0x18) = lVar6;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_14360ab50(lVar7 + 0x20,lVar9 + 0x20);
      *puVar5 = uVar4;
      lVar6 = *(longlong *)*param_3;
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(lVar9 + 0x18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(lVar9 + 0x18) = lVar6;
      FUN_143590140(lVar9 + 0x20,param_3[1]);
      *(undefined8 *)(lVar9 + 0x10) = 0xffffffffffffffff;
    }
  }
  return lVar9 + 0x18;
}



// FUNCTION 143608e60 FUN_143608e60 body=463 status=ok
// SIG undefined FUN_143608e60(void)

longlong * FUN_143608e60(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar2 * 5) <= plVar2[1] * 4 + 4U) goto LAB_143608eb2;
    lVar8 = plVar2[1] * 2 + 2;
  }
  FUN_14361b6a0(param_1,param_2,lVar8);
LAB_143608eb2:
  plVar2 = (longlong *)*param_1;
  *plVar2 = *plVar2 + 1;
  param_4 = param_4 & plVar2[1];
  lVar8 = *param_1;
  lVar7 = param_4 * 0x20 + lVar8;
  lVar3 = *(longlong *)(lVar7 + 0x10);
  uVar6 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
    lVar8 = *(longlong *)*param_3;
    *(longlong *)(lVar7 + 0x20) = lVar8;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)param_3[1];
    *(ulonglong *)(lVar7 + 0x18) = param_4;
    return (longlong *)(lVar7 + 0x20);
  }
  do {
    uVar6 = uVar6 + 1 & plVar2[1];
    lVar9 = uVar6 * 0x20 + lVar8;
  } while (*(longlong *)(lVar9 + 0x10) != -2);
  if (*(ulonglong *)(lVar7 + 0x18) == param_4) {
    *(longlong *)(lVar9 + 0x10) = lVar3;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
    lVar8 = *(longlong *)(lVar7 + 0x20);
    *(longlong *)(lVar9 + 0x20) = lVar8;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    lVar8 = *(longlong *)*param_3;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar7 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar7 + 0x20) = lVar8;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)param_3[1];
    *(ulonglong *)(lVar7 + 0x10) = uVar6;
  }
  else {
    puVar5 = (ulonglong *)(lVar8 + 0x10 + *(ulonglong *)(lVar7 + 0x18) * 0x20);
    uVar4 = *puVar5;
    while (uVar4 != param_4) {
      puVar5 = (ulonglong *)(lVar8 + 0x10 + *puVar5 * 0x20);
      uVar4 = *puVar5;
    }
    *(longlong *)(lVar9 + 0x10) = lVar3;
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
    lVar8 = *(longlong *)(lVar7 + 0x20);
    *(longlong *)(lVar9 + 0x20) = lVar8;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *puVar5 = uVar6;
    lVar8 = *(longlong *)*param_3;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar7 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar7 + 0x20) = lVar8;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)param_3[1];
    *(undefined8 *)(lVar7 + 0x10) = 0xffffffffffffffff;
  }
  *(ulonglong *)(lVar7 + 0x18) = param_4;
  return (longlong *)(lVar7 + 0x20);
}



// FUNCTION 143609030 FUN_143609030 body=355 status=ok
// SIG undefined FUN_143609030(void)

ulonglong * FUN_143609030(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  
  FUN_14360e780();
  plVar2 = (longlong *)*param_1;
  uVar5 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar5 & param_4;
  puVar9 = (ulonglong *)((param_4 + 1) * 0x10 + lVar3);
  uVar4 = *puVar9;
  uVar8 = param_4;
  if (uVar4 == 0xfffffffffffffffe) {
    *puVar9 = 0xffffffffffffffff;
    if (*param_3 != 0) {
      piVar1 = (int *)(*param_3 + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    puVar9[1] = *param_3;
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar5;
      puVar7 = (ulonglong *)((uVar8 + 1) * 0x10 + lVar3);
    } while (*puVar7 != 0xfffffffffffffffe);
    uVar5 = *(uint *)(puVar9[1] + 0x1c) & uVar5;
    if (uVar5 == param_4) {
      *puVar7 = uVar4;
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      puVar7[1] = puVar9[1];
      if (*param_3 != 0) {
        piVar1 = (int *)(*param_3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar9[1] = *param_3;
      *puVar9 = uVar8;
    }
    else {
      puVar6 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar3);
      uVar5 = *puVar6;
      while (uVar5 != param_4) {
        puVar6 = (ulonglong *)((*puVar6 + 1) * 0x10 + lVar3);
        uVar5 = *puVar6;
      }
      *puVar7 = uVar4;
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      puVar7[1] = puVar9[1];
      *puVar6 = uVar8;
      if (*param_3 != 0) {
        piVar1 = (int *)(*param_3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar9[1] = *param_3;
      *puVar9 = 0xffffffffffffffff;
    }
  }
  return puVar9 + 1;
}



// FUNCTION 1436091a0 FUN_1436091a0 body=355 status=ok
// SIG undefined FUN_1436091a0(void)

ulonglong * FUN_1436091a0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  
  FUN_14360e7d0();
  plVar2 = (longlong *)*param_1;
  uVar5 = plVar2[1];
  *plVar2 = *plVar2 + 1;
  lVar3 = *param_1;
  param_4 = uVar5 & param_4;
  puVar9 = (ulonglong *)((param_4 + 1) * 0x10 + lVar3);
  uVar4 = *puVar9;
  uVar8 = param_4;
  if (uVar4 == 0xfffffffffffffffe) {
    *puVar9 = 0xffffffffffffffff;
    if (*param_3 != 0) {
      piVar1 = (int *)(*param_3 + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    puVar9[1] = *param_3;
  }
  else {
    do {
      uVar8 = uVar8 + 1 & uVar5;
      puVar7 = (ulonglong *)((uVar8 + 1) * 0x10 + lVar3);
    } while (*puVar7 != 0xfffffffffffffffe);
    uVar5 = *(uint *)(puVar9[1] + 0x1c) & uVar5;
    if (uVar5 == param_4) {
      *puVar7 = uVar4;
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      puVar7[1] = puVar9[1];
      if (*param_3 != 0) {
        piVar1 = (int *)(*param_3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar9[1] = *param_3;
      *puVar9 = uVar8;
    }
    else {
      puVar6 = (ulonglong *)((uVar5 + 1) * 0x10 + lVar3);
      uVar5 = *puVar6;
      while (uVar5 != param_4) {
        puVar6 = (ulonglong *)((*puVar6 + 1) * 0x10 + lVar3);
        uVar5 = *puVar6;
      }
      *puVar7 = uVar4;
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      puVar7[1] = puVar9[1];
      *puVar6 = uVar8;
      if (*param_3 != 0) {
        piVar1 = (int *)(*param_3 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      if (puVar9[1] != 0) {
        piVar1 = (int *)(puVar9[1] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      puVar9[1] = *param_3;
      *puVar9 = 0xffffffffffffffff;
    }
  }
  return puVar9 + 1;
}



// FUNCTION 143609310 FUN_143609310 body=440 status=ok
// SIG undefined FUN_143609310(void)

longlong FUN_143609310(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  FUN_14360e820();
  plVar5 = (longlong *)*param_1;
  *plVar5 = *plVar5 + 1;
  param_4 = param_4 & plVar5[1];
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x18);
  lVar3 = lVar6 + param_4 * 0x18;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    uVar10 = *param_3;
    *(ulonglong *)(lVar3 + 0x20) = uVar10;
    if (uVar10 != 0) {
      *(uint *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar5[1];
      lVar4 = lVar6 + uVar10 * 0x18;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x18) != -2);
    if (*(ulonglong *)(lVar3 + 0x18) == param_4) {
      *(longlong *)(lVar4 + 0x10) = lVar7;
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      lVar6 = *(longlong *)(lVar3 + 0x20);
      *(longlong *)(lVar4 + 0x20) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434e6830(lVar3 + 0x20,param_3);
      *(ulonglong *)(lVar3 + 0x10) = uVar10;
    }
    else {
      lVar2 = *(ulonglong *)(lVar3 + 0x18) * 3 + 2;
      uVar8 = *(ulonglong *)(lVar6 + lVar2 * 8);
      while (puVar9 = (ulonglong *)(lVar6 + lVar2 * 8), uVar8 != param_4) {
        lVar2 = *puVar9 * 3 + 2;
        uVar8 = *(ulonglong *)(lVar6 + lVar2 * 8);
      }
      *(longlong *)(lVar4 + 0x10) = lVar7;
      puVar1 = (ulonglong *)(lVar3 + 0x20);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      uVar8 = *puVar1;
      *(ulonglong *)(lVar4 + 0x20) = uVar8;
      if (uVar8 != 0) {
        *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
      }
      *puVar9 = uVar10;
      if (param_3 != puVar1) {
        uVar10 = *param_3;
        if (uVar10 != 0) {
          *(uint *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1U & 0x8fffffff;
        }
        uVar10 = *puVar1;
        if (uVar10 != 0) {
          if ((uVar10 & 1) == 0) {
            if ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar10 - 1;
          }
        }
        *puVar1 = *param_3;
      }
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar3 + 0x18) = param_4;
  return lVar3 + 0x20;
}



// FUNCTION 1436094d0 FUN_1436094d0 body=440 status=ok
// SIG undefined FUN_1436094d0(void)

longlong FUN_1436094d0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  FUN_14360e870();
  plVar5 = (longlong *)*param_1;
  *plVar5 = *plVar5 + 1;
  param_4 = param_4 & plVar5[1];
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 0x10 + param_4 * 0x18);
  lVar3 = lVar6 + param_4 * 0x18;
  uVar10 = param_4;
  if (lVar7 == -2) {
    *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    uVar10 = *param_3;
    *(ulonglong *)(lVar3 + 0x20) = uVar10;
    if (uVar10 != 0) {
      *(uint *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar5[1];
      lVar4 = lVar6 + uVar10 * 0x18;
    } while (*(longlong *)(lVar6 + 0x10 + uVar10 * 0x18) != -2);
    if (*(ulonglong *)(lVar3 + 0x18) == param_4) {
      *(longlong *)(lVar4 + 0x10) = lVar7;
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      lVar6 = *(longlong *)(lVar3 + 0x20);
      *(longlong *)(lVar4 + 0x20) = lVar6;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434e6830(lVar3 + 0x20,param_3);
      *(ulonglong *)(lVar3 + 0x10) = uVar10;
    }
    else {
      lVar2 = *(ulonglong *)(lVar3 + 0x18) * 3 + 2;
      uVar8 = *(ulonglong *)(lVar6 + lVar2 * 8);
      while (puVar9 = (ulonglong *)(lVar6 + lVar2 * 8), uVar8 != param_4) {
        lVar2 = *puVar9 * 3 + 2;
        uVar8 = *(ulonglong *)(lVar6 + lVar2 * 8);
      }
      *(longlong *)(lVar4 + 0x10) = lVar7;
      puVar1 = (ulonglong *)(lVar3 + 0x20);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      uVar8 = *puVar1;
      *(ulonglong *)(lVar4 + 0x20) = uVar8;
      if (uVar8 != 0) {
        *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
      }
      *puVar9 = uVar10;
      if (param_3 != puVar1) {
        uVar10 = *param_3;
        if (uVar10 != 0) {
          *(uint *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1U & 0x8fffffff;
        }
        uVar10 = *puVar1;
        if (uVar10 != 0) {
          if ((uVar10 & 1) == 0) {
            if ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar1 = uVar10 - 1;
          }
        }
        *puVar1 = *param_3;
      }
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar3 + 0x18) = param_4;
  return lVar3 + 0x20;
}


