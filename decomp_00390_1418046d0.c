// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418046d0 FUN_1418046d0 body=143 status=ok
// SIG undefined FUN_1418046d0(void)

undefined8 * FUN_1418046d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  (**(code **)(**(longlong **)(DAT_1469eaf38 + 0x18) + 0x138))();
  *(undefined8 *)(param_1 + 0xa60) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0xa68);
  if (plVar3 != plVar4) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0xa68);
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
    *(longlong **)(param_1 + 0xa68) = plVar3;
  }
  return param_2;
}



// FUNCTION 141804760 FUN_141804760 body=699 status=ok
// SIG undefined FUN_141804760(void)

float * FUN_141804760(longlong param_1,float *param_2,float *param_3,float *param_4,char *param_5,
                     undefined1 *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
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
  
  pcVar2 = param_7;
  pcVar1 = param_5;
  *param_5 = '\0';
  *param_7 = '\x01';
  *param_6 = 0;
  if ((*(byte *)(param_1 + 0x18) & 0x10) == 0) {
    cVar3 = *(char *)(param_1 + 0x1a);
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
        *param_5 = '\x01';
        *param_7 = '\0';
      }
      else if (cVar3 == '\x03') {
        *param_5 = '\x01';
        *param_6 = 1;
      }
      else if (cVar3 == '\x04') {
        SWidget::GetDesiredSize(param_1,&param_5);
        if ((*param_3 <= param_5._0_4_ - 1.0 && param_5._0_4_ - 1.0 != *param_3) ||
           (param_3[1] <= param_5._4_4_ - 1.0 && param_5._4_4_ - 1.0 != param_3[1])) {
          cVar3 = '\x01';
        }
        else {
          cVar3 = '\0';
        }
        *pcVar1 = cVar3;
      }
      goto LAB_141804816;
    }
    *param_5 = '\x01';
  }
  else {
LAB_141804816:
    if (*pcVar1 == '\0') {
      fVar6 = *param_4;
      fVar8 = param_4[2];
      fVar12 = param_4[3];
      fVar4 = param_4[1];
      goto LAB_1418049f8;
    }
  }
  fVar6 = DAT_1468b5d88._4_4_ - *(float *)(param_1 + 0x20);
  fVar4 = (*(float *)(param_1 + 0x28) + param_3[1]) - fVar6;
  fVar12 = (float)DAT_1468b5d88 - *(float *)(param_1 + 0x1c);
  fVar11 = param_3[10] * fVar4;
  fVar4 = fVar4 * param_3[9];
  fVar8 = (*(float *)(param_1 + 0x24) + *param_3) - fVar12;
  fVar7 = fVar12 * param_3[7] + fVar6 * param_3[9] + param_3[0xb];
  fVar13 = fVar12 * param_3[8] + fVar6 * param_3[10] + param_3[0xc];
  fVar6 = fVar4 + fVar7;
  fVar10 = fVar8 * param_3[7] + fVar7;
  fVar5 = fVar11 + fVar13;
  fVar9 = fVar8 * param_3[8] + fVar13;
  fVar4 = fVar4 + fVar10;
  fVar8 = fVar6;
  if (fVar6 <= fVar10) {
    fVar8 = fVar10;
  }
  fVar11 = fVar11 + fVar9;
  fVar12 = fVar5;
  if (fVar5 <= fVar9) {
    fVar12 = fVar9;
  }
  if (fVar9 <= fVar5) {
    fVar5 = fVar9;
  }
  if (fVar10 <= fVar6) {
    fVar6 = fVar10;
  }
  if (fVar8 <= fVar4) {
    fVar8 = fVar4;
  }
  if (fVar12 <= fVar11) {
    fVar12 = fVar11;
  }
  if (fVar11 <= fVar5) {
    fVar5 = fVar11;
  }
  if (fVar4 <= fVar6) {
    fVar6 = fVar4;
  }
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  if (fVar12 <= fVar13) {
    fVar12 = fVar13;
  }
  if (fVar13 <= fVar5) {
    fVar5 = fVar13;
  }
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  fVar4 = fVar5;
  if (*pcVar2 != '\0') {
    fVar4 = param_4[3];
    if (fVar12 <= param_4[3]) {
      fVar4 = fVar12;
    }
    fVar12 = fVar4;
    fVar4 = param_4[2];
    if (fVar8 <= param_4[2]) {
      fVar4 = fVar8;
    }
    fVar8 = fVar4;
    fVar4 = param_4[1];
    if (param_4[1] <= fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = *param_4;
    if (*param_4 <= fVar6) {
      fVar5 = fVar6;
    }
    fVar6 = fVar5;
    if ((fVar12 < fVar4) || (fVar8 < fVar6)) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      return param_2;
    }
  }
LAB_1418049f8:
  *param_2 = fVar6;
  param_2[1] = fVar4;
  param_2[2] = fVar8;
  param_2[3] = fVar12;
  return param_2;
}



// FUNCTION 141804a20 FUN_141804a20 body=101 status=ok
// SIG undefined FUN_141804a20(void)

ulonglong FUN_141804a20(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FShapedGlyphSequence::HasFoundGlyphAtOffset
                    (*param_1,param_1[1],*(undefined4 *)param_1[2],param_2,*param_3,param_1[3],
                     param_1[4]);
  if ((char)uVar2 != '\0') {
    return uVar2 & 0xffffffffffffff00;
  }
  puVar1 = (undefined8 *)param_1[5];
  *puVar1 = param_2;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// FUNCTION 141804a90 FUN_141804a90 body=13 status=ok
// SIG undefined FUN_141804a90(void)

undefined8 FUN_141804a90(undefined8 *param_1,longlong param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x18);
  *(int *)*param_1 = *(int *)*param_1 + (int)sVar1;
  return CONCAT71((uint7)(uint3)(int3)(char)((ushort)sVar1 >> 8),1);
}



// FUNCTION 141804aa0 FUN_141804aa0 body=79 status=ok
// SIG undefined FUN_141804aa0(void)

undefined8 FUN_141804aa0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  FShapedGlyphEntry::FShapedGlyphEntry((longlong)iVar1 * 0x68 + *param_1,param_2);
  return 1;
}



// FUNCTION 141804af0 FUN_141804af0 body=222 status=ok
// SIG undefined FUN_141804af0(void)

ulonglong FUN_141804af0(longlong param_1,short param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 local_res10 [8];
  longlong local_28;
  longlong *local_20;
  int local_18;
  
  if (param_2 == -3) {
    return 0xff01;
  }
  uVar6 = FUN_141837770(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x28),param_1 + 0x60,param_2
                        ,local_res10);
  FUN_141838450(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x30),&local_28,uVar6,param_2,
                param_3);
  plVar5 = local_20;
  if ((local_28 == 0) || (local_18 == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
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
  return (ulonglong)bVar7;
}



// FUNCTION 141804bd0 FUN_141804bd0 body=159 status=ok
// SIG undefined FUN_141804bd0(void)

undefined8 FUN_141804bd0(longlong *param_1,float *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if ((iVar3 < 0) || ((int)param_1[1] <= iVar3)) {
      return 0;
    }
    lVar1 = *(longlong *)(*param_1 + (longlong)iVar3 * 0x10);
    if ((((*param_2 <= *(float *)(lVar1 + 0x378)) &&
         (*(float *)(lVar1 + 0x368) < param_2[2] || *(float *)(lVar1 + 0x368) == param_2[2])) &&
        (param_2[1] <= *(float *)(lVar1 + 0x37c))) &&
       (*(float *)(lVar1 + 0x36c) < param_2[3] || *(float *)(lVar1 + 0x36c) == param_2[3])) break;
    cVar2 = FUN_141804bd0(lVar1 + 0x578,param_2);
    if (cVar2 != '\0') {
      return 1;
    }
    iVar3 = iVar3 + 1;
  }
  return 1;
}



// FUNCTION 141804c70 FUN_141804c70 body=668 status=ok
// SIG undefined FUN_141804c70(void)

void FUN_141804c70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  iVar9 = 0;
  if (0 < (int)param_1[3]) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar8 + param_1[2]);
      plVar10 = *(longlong **)(lVar3 + 0x18);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar12 = iVar6 == 0;
        if (bVar12) {
          *(int *)(plVar10 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar12) {
          LOCK();
          bVar12 = iVar6 == (int)plVar10[1];
          if (bVar12) {
            *(int *)(plVar10 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar12) {
            if (plVar10 != (longlong *)0x0) {
              lVar3 = *(longlong *)(lVar3 + 0x10);
              LOCK();
              plVar11 = plVar10 + 1;
              lVar5 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
              if (lVar3 != 0) goto LAB_141804d43;
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
      TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 2,iVar9,1,1);
      iVar9 = iVar9 + -1;
      lVar8 = lVar8 + -0x10;
LAB_141804d43:
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar9 < (int)param_1[3]);
  }
  plVar10 = (longlong *)*param_1;
  plVar11 = plVar10 + (longlong)(int)param_1[1] * 2;
  do {
    if (plVar10 == plVar11) {
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1,0);
        return;
      }
      iVar9 = (int)param_1[1];
      if (iVar9 != 0) {
        plVar10 = (longlong *)(*param_1 + 8);
        do {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar11 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    plVar4 = (longlong *)plVar10[1];
    lVar8 = *plVar10;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(lVar8 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar9 = (int)plVar7[1];
      bVar12 = iVar9 == 0;
      if (bVar12) {
        *(int *)(plVar7 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
      while (!bVar12) {
        LOCK();
        bVar12 = iVar9 == (int)plVar7[1];
        if (bVar12) {
          *(int *)(plVar7 + 1) = iVar9 + 1;
        }
        UNLOCK();
        if (bVar12) {
          if (plVar7 != (longlong *)0x0) {
            lVar3 = *(longlong *)(lVar8 + 0x10);
            LOCK();
            plVar1 = plVar7 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
            if (lVar3 != 0) {
              iVar9 = (int)param_1[3];
              *(int *)(param_1 + 3) = iVar9 + 1;
              if (*(int *)((longlong)param_1 + 0x1c) < iVar9 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar9);
              }
              plVar7 = (longlong *)((longlong)iVar9 * 0x10 + param_1[2]);
              *plVar7 = lVar8;
              plVar7[1] = (longlong)plVar4;
              if (plVar4 == (longlong *)0x0) goto LAB_141804e6d;
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
          }
          break;
        }
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar12 = iVar9 == 0;
        if (bVar12) {
          *(int *)(plVar7 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
      }
    }
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
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
LAB_141804e6d:
    plVar10 = plVar10 + 2;
  } while( true );
}



// FUNCTION 141804f10 FUN_141804f10 body=61 status=ok
// SIG undefined FUN_141804f10(void)

void FUN_141804f10(longlong param_1)

{
  if (*(char *)(param_1 + 0x228) == '\0') {
    *(undefined1 *)(param_1 + 0x228) = 1;
    FUN_14182b150(param_1 + 0x218,0);
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 141804f50 FUN_141804f50 body=61 status=ok
// SIG undefined FUN_141804f50(void)

void FUN_141804f50(longlong param_1)

{
  if (*(char *)(param_1 + 0x228) == '\0') {
    *(undefined1 *)(param_1 + 0x228) = 1;
    FUN_14182b060(param_1 + 0x218,0);
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_1418475e0(param_1,1);
  return;
}



// FUNCTION 141804f90 FUN_141804f90 body=465 status=ok
// SIG undefined FUN_141804f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141804f90(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *param_2;
  *(float *)(param_1 + 0x24) = param_2[1];
  *(float *)(param_1 + 0x20) = fVar7;
  fVar8 = (param_2[2] - *param_2) / _DAT_1464b9f30;
  fVar7 = (param_2[3] - param_2[1]) / _DAT_1464b9f34;
  *(int *)(param_1 + 0x28) = -((int)ROUND(-0.5 - (fVar8 + fVar8)) >> 1);
  *(int *)(param_1 + 0x2c) = -((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1);
  FUN_1418566e0(param_1,0);
  iVar6 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (iVar6 == *(int *)(param_1 + 0x18)) {
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x18) * 2;
    for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((*(int *)((longlong)plVar3 + 0xc) < 0) && (*(int *)((longlong)plVar3 + 0xc) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar3,0);
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar2 < iVar6) {
      if (iVar5 != 0) {
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar2 = *(int *)(param_1 + 0x1c);
      }
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (iVar2 != iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x10,iVar6);
        iVar5 = *(int *)(param_1 + 0x18);
      }
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (iVar5 < iVar6) {
      *(int *)(param_1 + 0x18) = iVar6;
      iVar2 = iVar6 - iVar5;
      if (*(int *)(param_1 + 0x1c) < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x10,iVar5);
      }
      puVar1 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x10));
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
      }
    }
    else if (iVar6 < iVar5) {
      TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                (param_1 + 0x10,iVar6,iVar5 - iVar6,1);
    }
  }
  FUN_141856f60(param_1 + 0x30);
  return;
}



// FUNCTION 141805170 FUN_141805170 body=207 status=ok
// SIG undefined FUN_141805170(void)

longlong FUN_141805170(longlong param_1,undefined1 param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x48) != &local_18) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_10);
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
  *(undefined1 *)(param_1 + 0xb0) = param_2;
  *(uint *)(param_1 + 0xb4) = (uint)param_3 << 3 | *(uint *)(param_1 + 0xb4) & 0xfffffff5 | 4;
  return param_1;
}



// FUNCTION 141805240 CloseFile body=41 status=ok
// SIG undefined CloseFile(void)

void FFreeTypeFace::FFTStreamHandler::CloseFile(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *plVar1 = 0;
  }
  return;
}



// FUNCTION 141805270 ClosestPointOnSlateRotatedRect body=362 status=ok
// SIG undefined ClosestPointOnSlateRotatedRect(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * ClosestPointOnSlateRotatedRect(undefined8 *param_1,float *param_2,float *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  undefined8 local_60;
  float local_58 [4];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FSlateRotatedRect::IsUnderLocation(param_3);
  if (cVar1 == '\0') {
    local_58[1] = param_3[1];
    local_58[3] = local_58[1] + param_3[3];
    pfVar4 = local_58;
    local_58[0] = *param_3;
    local_58[2] = local_58[0] + param_3[2];
    local_40 = local_58[0] + param_3[4];
    local_3c = local_58[1] + param_3[5];
    uVar3 = 0;
    local_48 = param_3[4] + local_58[2];
    fVar6 = 3.4028235e+38;
    local_44 = param_3[5] + local_58[3];
    do {
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      FMath::ClosestPointOnSegment2D(&local_68,param_2,pfVar4,local_58 + (longlong)(int)uVar2 * 2);
      fVar5 = (fStack_64 - param_2[1]) * (fStack_64 - param_2[1]) +
              (local_68 - *param_2) * (local_68 - *param_2);
      if (fVar5 < fVar6) {
        local_60 = CONCAT44(fStack_64,local_68);
        fVar6 = fVar5;
      }
      pfVar4 = pfVar4 + 2;
    } while ((int)uVar3 < 4);
    *(undefined4 *)param_1 = (undefined4)local_60;
    *(undefined4 *)((longlong)param_1 + 4) = local_60._4_4_;
  }
  else {
    *param_1 = *(undefined8 *)param_2;
  }
  return param_1;
}



// FUNCTION 1418053e0 CommitTransformsIfUsingLegacyConstructor body=97 status=ok
// SIG undefined CommitTransformsIfUsingLegacyConstructor(void)

void FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(undefined8 *param_1)

{
  float fVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x34) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 1);
    *(float *)((longlong)param_1 + 0x1c) = fVar1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    *(float *)(param_1 + 5) = fVar1;
    *(undefined8 *)((longlong)param_1 + 0x2c) = *param_1;
    *(float *)((longlong)param_1 + 0x14) = (1.0 / fVar1) * *(float *)((longlong)param_1 + 0xc);
    *(float *)(param_1 + 3) = (1.0 / fVar1) * *(float *)(param_1 + 2);
  }
  return;
}



// FUNCTION 141805450 ComputeDesiredSize body=79 status=ok
// SIG undefined ComputeDesiredSize(void)

undefined8 * SBoxPanel::ComputeDesiredSize(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  if (*(int *)(param_1 + 0x230) == 0) {
    puVar1 = (undefined8 *)ComputeDesiredSizeForBox<0>(local_res8);
    *param_2 = *puVar1;
    return param_2;
  }
  puVar1 = (undefined8 *)ComputeDesiredSizeForBox<1>(local_res10,param_1 + 0x208);
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 1418054a0 FUN_1418054a0 body=394 status=ok
// SIG undefined FUN_1418054a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1418054a0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  char cVar7;
  float *pfVar8;
  char *pcVar9;
  longlong *plVar10;
  char local_res8 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  plVar10 = (longlong *)0x0;
  lVar6 = *(longlong *)(param_1 + 0x228);
  pcVar9 = (char *)(lVar6 + 0xb0);
  if ((*(int *)(lVar6 + 0xc0) != 0) && (*(longlong **)(lVar6 + 0xb8) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x18))();
    if (cVar7 != '\0') {
      if (*(int *)(lVar6 + 0xc0) == 0) {
        (**(code **)(_DAT_00000000 + 0x38))(0,local_res8);
        *pcVar9 = local_res8[0];
      }
      else {
        (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x38))(*(longlong **)(lVar6 + 0xb8),local_res8)
        ;
        *pcVar9 = local_res8[0];
      }
      goto LAB_141805528;
    }
  }
  local_res8[0] = *pcVar9;
LAB_141805528:
  if (local_res8[0] == DAT_1464b9ee9) {
    *(undefined8 *)param_2 = DAT_1468b5d88;
  }
  else {
    if ((*(int *)(param_1 + 0x260) != 0) && (*(longlong **)(param_1 + 600) != (longlong *)0x0)) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))();
      if (cVar7 != '\0') {
        if (*(int *)(param_1 + 0x260) != 0) {
          plVar10 = *(longlong **)(param_1 + 600);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
        *(undefined4 *)(param_1 + 0x240) = local_58;
        *(undefined4 *)(param_1 + 0x244) = uStack_54;
        *(undefined4 *)(param_1 + 0x248) = uStack_50;
        *(undefined4 *)(param_1 + 0x24c) = uStack_4c;
      }
    }
    fVar1 = *(float *)(param_1 + 0x248);
    fVar2 = *(float *)(param_1 + 0x240);
    fVar3 = *(float *)(param_1 + 0x24c);
    fVar4 = *(float *)(param_1 + 0x244);
    pfVar8 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_res8);
    fVar5 = pfVar8[1];
    *param_2 = fVar1 + fVar2 + *pfVar8;
    param_2[1] = fVar4 + fVar3 + fVar5;
  }
  return param_2;
}



// FUNCTION 141805630 FUN_141805630 body=519 status=ok
// SIG undefined FUN_141805630(void)

float * FUN_141805630(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  char local_res8 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar6 = *(undefined8 **)(param_1 + 0x208);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  iVar13 = 0;
  iVar10 = (*(code *)*puVar6)(param_1 + 0x208);
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      lVar7 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 0x218));
      lVar8 = *(longlong *)(lVar7 + 0x10);
      if (((*(int *)(lVar8 + 0xc0) != 0) && (*(longlong **)(lVar8 + 0xb8) != (longlong *)0x0)) &&
         (cVar9 = (**(code **)(**(longlong **)(lVar8 + 0xb8) + 0x18))(), cVar9 != '\0')) {
        if (*(int *)(lVar8 + 0xc0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar8 + 0xb8);
        }
        (**(code **)(*plVar11 + 0x38))(plVar11,local_res8);
        *(char *)(lVar8 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar8 + 0xb0) != DAT_1464b9ee9) {
        if (((*(int *)(lVar7 + 0x48) != 0) && (*(longlong **)(lVar7 + 0x40) != (longlong *)0x0)) &&
           (cVar9 = (**(code **)(**(longlong **)(lVar7 + 0x40) + 0x18))(), cVar9 != '\0')) {
          if (*(int *)(lVar7 + 0x48) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(lVar7 + 0x40);
          }
          (**(code **)(*plVar11 + 0x38))(plVar11,&local_58);
          *(undefined4 *)(lVar7 + 0x28) = local_58;
          *(undefined4 *)(lVar7 + 0x2c) = uStack_54;
          *(undefined4 *)(lVar7 + 0x30) = uStack_50;
          *(undefined4 *)(lVar7 + 0x34) = uStack_4c;
        }
        fVar1 = *(float *)(lVar7 + 0x30);
        fVar2 = *(float *)(lVar7 + 0x34);
        fVar3 = *(float *)(lVar7 + 0x28);
        fVar4 = *(float *)(lVar7 + 0x2c);
        plVar11 = *(longlong **)(lVar7 + 0x10);
        if (DAT_1469eaf30 == 0) {
          pfVar12 = (float *)&DAT_1468b5d88;
          if (*(char *)((longlong)plVar11 + 0x34) != '\0') {
            pfVar12 = (float *)((longlong)plVar11 + 0x2c);
          }
          fVar15 = *pfVar12;
          fVar16 = pfVar12[1];
        }
        else {
          bVar5 = *(byte *)(plVar11 + 9);
          if ((*(byte *)((longlong)plVar11 + 0x19) & 1) == 0) {
            if (((bVar5 & 2) != 0) && ((bVar5 & 8) == 0)) {
              *(byte *)(plVar11 + 9) = bVar5 | 8;
              (**(code **)(*plVar11 + 0x150))(plVar11,*(undefined4 *)((longlong)plVar11 + 0x44));
              *(byte *)(plVar11 + 9) = *(byte *)(plVar11 + 9) & 0xf7;
            }
            fVar15 = *(float *)((longlong)plVar11 + 0x2c);
            fVar16 = *(float *)(plVar11 + 6);
          }
          else {
            if (((bVar5 & 4) != 0) && ((bVar5 & 8) == 0)) {
              *(byte *)(plVar11 + 9) = bVar5 | 8;
              (**(code **)(*plVar11 + 0x150))(plVar11,*(undefined4 *)((longlong)plVar11 + 0x44));
              *(byte *)(plVar11 + 9) = *(byte *)(plVar11 + 9) & 0xf7;
            }
            fVar15 = *(float *)(plVar11 + 7);
            fVar16 = *(float *)((longlong)plVar11 + 0x3c);
          }
        }
        fVar15 = fVar1 + fVar3 + fVar15;
        fVar16 = fVar2 + fVar4 + fVar16;
        if (fVar15 <= *param_2) {
          fVar15 = *param_2;
        }
        if (fVar16 <= param_2[1]) {
          fVar16 = param_2[1];
        }
        *param_2 = fVar15;
        param_2[1] = fVar16;
      }
      iVar13 = iVar13 + 1;
      lVar14 = lVar14 + 8;
      iVar10 = (*(code *)**(undefined8 **)(param_1 + 0x208))(param_1 + 0x208);
    } while (iVar13 < iVar10);
  }
  return param_2;
}



// FUNCTION 141805860 FUN_141805860 body=409 status=ok
// SIG undefined FUN_141805860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141805860(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  float *pfVar5;
  char *pcVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  char local_res18 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  plVar7 = (longlong *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x228);
  pcVar6 = (char *)(lVar3 + 0xb0);
  if (((*(int *)(lVar3 + 0xc0) == 0) || (*(longlong **)(lVar3 + 0xb8) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x18))(), cVar4 == '\0')) {
    local_res18[0] = *pcVar6;
  }
  else if (*(int *)(lVar3 + 0xc0) == 0) {
    (**(code **)(_DAT_00000000 + 0x38))(0,local_res18);
    *pcVar6 = local_res18[0];
  }
  else {
    (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x38))(*(longlong **)(lVar3 + 0xb8),local_res18);
    *pcVar6 = local_res18[0];
  }
  fVar8 = (float)DAT_1468b5d88;
  fVar9 = DAT_1468b5d88._4_4_;
  if (local_res18[0] != DAT_1464b9ee9) {
    if (((*(int *)(param_1 + 0x260) != 0) && (*(longlong **)(param_1 + 600) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x260) != 0) {
        plVar7 = *(longlong **)(param_1 + 600);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_78);
      *(undefined4 *)(param_1 + 0x240) = local_78;
      *(undefined4 *)(param_1 + 0x244) = uStack_74;
      *(undefined4 *)(param_1 + 0x248) = uStack_70;
      *(undefined4 *)(param_1 + 0x24c) = uStack_6c;
    }
    fVar8 = *(float *)(param_1 + 0x248);
    fVar9 = *(float *)(param_1 + 0x240);
    fVar1 = *(float *)(param_1 + 0x24c);
    fVar2 = *(float *)(param_1 + 0x244);
    pfVar5 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0x228),local_res8);
    fVar8 = fVar8 + fVar9 + *pfVar5;
    fVar9 = fVar1 + fVar2 + pfVar5[1];
  }
  *param_2 = fVar8 * param_3;
  param_2[1] = fVar9 * param_3;
  return param_2;
}



// FUNCTION 141805a00 ComputePopupFitInRect body=449 status=ok
// SIG undefined ComputePopupFitInRect(void)

float * ComputePopupFitInRect
                  (float *param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar7 = param_3[1];
  fVar11 = param_3[3];
  fVar9 = *param_3;
  fVar10 = param_3[2];
  fVar1 = param_5[2];
  fVar2 = param_5[3];
  fVar8 = fVar1;
  if (fVar10 <= fVar1) {
    fVar8 = fVar10;
  }
  fVar3 = param_5[1];
  fVar13 = fVar2;
  if (fVar11 <= fVar2) {
    fVar13 = fVar11;
  }
  fVar12 = fVar7;
  if (fVar7 <= fVar3) {
    fVar12 = fVar3;
  }
  fVar4 = *param_5;
  fVar6 = fVar9;
  if (fVar9 <= fVar4) {
    fVar6 = fVar4;
  }
  if ((fVar13 < fVar12) || (fVar8 < fVar6)) {
    fVar6 = 0.0;
    fVar12 = 0.0;
    fVar8 = 0.0;
    fVar13 = 0.0;
  }
  if ((((fVar6 == fVar9) && (fVar12 == fVar7)) && (fVar8 == fVar10)) && (fVar13 == fVar11)) {
    *param_1 = fVar9;
    param_1[1] = fVar7;
    return param_1;
  }
  fVar10 = fVar10 - fVar9;
  fVar11 = fVar11 - fVar7;
  if (param_4 == 0) {
    fVar8 = param_2[2];
    if ((fVar10 + fVar8 < fVar1) || (*param_2 - fVar10 < fVar4)) {
      fVar7 = param_2[1];
    }
    else {
      fVar7 = param_2[1];
      fVar8 = *param_2 - fVar10;
    }
  }
  else {
    fVar7 = param_2[3];
    fVar9 = param_2[1] - fVar11;
    bVar5 = fVar11 + fVar7 < fVar2;
    if ((bVar5) || (fVar9 < fVar3)) {
      fVar8 = *param_2;
      if (bVar5) goto LAB_141805b39;
    }
    else {
      fVar8 = *param_2;
      fVar7 = fVar9;
    }
    if (fVar9 < fVar3) {
      fVar8 = param_2[2];
    }
  }
LAB_141805b39:
  fVar9 = (float)DAT_1468b5d88;
  if (fVar8 < fVar4) {
    fVar9 = fVar4 - fVar8;
  }
  fVar13 = DAT_1468b5d88._4_4_;
  if (fVar7 < fVar3) {
    fVar13 = fVar3 - fVar7;
  }
  if (fVar1 < fVar10 + fVar8) {
    fVar9 = fVar1 - (fVar10 + fVar8);
  }
  if (fVar2 < fVar11 + fVar7) {
    fVar13 = fVar2 - (fVar11 + fVar7);
  }
  *(ulonglong *)param_1 = CONCAT44(fVar7 + fVar13,fVar8 + fVar9);
  return param_1;
}



// FUNCTION 141805bd0 ComputeWindowSizeForContent body=38 status=ok
// SIG undefined ComputeWindowSizeForContent(void)

undefined4 * SWindow::ComputeWindowSizeForContent(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8;
  float fStackX_c;
  
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  local_res8 = (undefined4)param_2;
  *param_1 = local_res8;
  param_1[1] = fStackX_c + 24.0;
  return param_1;
}



// FUNCTION 141805c00 FUN_141805c00 body=481 status=ok
// SIG undefined FUN_141805c00(void)

bool FUN_141805c00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  BOOL BVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  
  bVar11 = false;
  if (*(char *)(param_1 + 0x120) != '\0') {
    *(undefined1 *)(param_1 + 0x120) = 0;
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
      *(undefined1 *)(param_1 + 0x120) = 1;
      *(undefined4 *)(param_1 + 0x124) = 1;
      *(undefined4 *)(param_1 + 0x128) = 1;
      *(undefined8 *)(param_1 + 0x130) = DAT_1468c21b0;
    }
    else {
      FUN_141831140(param_1);
      FSlateFontCache::ReleaseResources(param_1);
      (**(code **)(**(longlong **)(DAT_1469eaf38 + 0x18) + 0xc0))();
      iVar9 = *(int *)(param_1 + 0xe8);
      if (iVar9 != 0) {
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 8);
        do {
          plVar4 = (longlong *)*plVar10;
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
          plVar10 = plVar10 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(param_1 + 0xe8) = 0;
      if (*(int *)(param_1 + 0xec) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xe0,0);
      }
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xf0,0);
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x100,0)
      ;
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x138);
      BVar8 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar8 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      *(undefined4 *)(param_1 + 0x168) = 0;
      if (*(int *)(param_1 + 0x16c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x160,0);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    bVar11 = *(char *)(param_1 + 0x120) == '\0';
    if (*(char *)(param_1 + 0x120) == '\0') {
      return true;
    }
  }
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    return bVar11;
  }
  FSlateFontCache::FlushFontObjects(param_1);
  return bVar11;
}



// FUNCTION 141805df0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FLRUStringCache::CacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141805ea0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>,TDefaultMapHashableKeyFuncs<FFreeTypeAdvanceCache::FCachedAdvanceKey,long,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141805f50 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>,TDefaultMapHashableKeyFuncs<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141806000 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_>,TDefaultMapHashableKeyFuncs<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1418060b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,0>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,0>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141806160 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141806210 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,0>_>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1418062c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<wchar_t,FCharacterList::FCharacterListEntry>,TDefaultMapHashableKeyFuncs<wchar_t,FCharacterList::FCharacterListEntry,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141806370 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141806420 FUN_141806420 body=229 status=ok
// SIG undefined FUN_141806420(void)

undefined8 FUN_141806420(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_18 [2];
  
  puVar2 = (undefined8 *)(param_1 + 0x180);
  plVar3 = *(longlong **)(param_1 + 0x188);
  plVar6 = plVar3;
  plVar7 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar6 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          plVar7 = (longlong *)*puVar2;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar7 == param_2) {
    if (puVar2 != local_18) {
      *puVar2 = 0;
      plVar3 = *(longlong **)(param_1 + 0x188);
      *(undefined8 *)(param_1 + 0x188) = 0;
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
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_1418475e0(plVar7,1);
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  return uVar8;
}



// FUNCTION 141806510 FUN_141806510 body=11 status=ok
// SIG undefined FUN_141806510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141806510(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [16];
  longlong lStack_278;
  longlong *plStack_270;
  longlong lStack_268;
  longlong *plStack_260;
  longlong *plStack_258;
  longlong *plStack_250;
  undefined1 *puStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong *plStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong *plStack_210;
  undefined1 auStack_208 [8];
  longlong *plStack_200;
  undefined1 auStack_1f8 [464];
  ulonglong uStack_28;
  
  if ((char)param_1[3] != '\0') {
    uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
    (**(code **)(*param_1 + 0x20))(param_1,&lStack_238);
    if (lStack_238 != 0) {
      lVar5 = FUN_1417e8330(auStack_1f8);
      *(undefined4 *)(lVar5 + 0x108) = 4;
      *(undefined2 *)(lVar5 + 0x16b) = 0x101;
      *(undefined1 *)(lVar5 + 0x16a) = 1;
      *(undefined4 *)(lVar5 + 0x160) = 1;
      *(undefined1 *)(lVar5 + 0x16d) = 0;
      *(undefined4 *)(lVar5 + 0x170) = 0;
      plVar6 = (longlong *)operator_new(0x600);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_144d503d8;
        if (plVar6 != (longlong *)0xfffffffffffffff0) {
          FUN_1417f4890();
        }
      }
      plStack_258 = plVar6 + 2;
      plStack_250 = plVar6;
      FUN_14044f790(&plStack_258,plStack_258);
      puStack_248 = auStack_288;
      FName::FName(&lStack_240,"SWindow",1);
      plVar6[0x26] = lStack_240;
      FUN_1417fd440(&plStack_258,&lStack_268,lVar5);
      plVar6 = plStack_250;
      if (plStack_250 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_250 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_250)(plStack_250);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_250 + 8))(plStack_250,1);
          }
        }
      }
      FUN_1417f5da0(auStack_1f8);
      *(undefined4 *)(lStack_268 + 0x344) = 0x3f800000;
      lStack_278 = lStack_268;
      plStack_270 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_260 + 1) = (int)plStack_260[1] + 1;
        UNLOCK();
      }
      plVar6 = param_1 + 4;
      if (plVar6 != &lStack_278) {
        *plVar6 = lStack_268;
        lStack_278 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 5,&plStack_270);
      }
      plVar1 = plStack_270;
      plVar7 = plStack_260;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_270 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_270)(plStack_270);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar7 = plStack_260;
          if (iVar4 == 1) {
            (**(code **)(*plStack_270 + 8))(plStack_270,1);
            plVar7 = plStack_260;
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      lStack_218 = lStack_238;
      plStack_210 = plStack_230;
      if (plStack_230 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_230 + 1) = (int)plStack_230[1] + 1;
        UNLOCK();
      }
      FUN_14185a760(*plVar6,&lStack_218);
      plVar1 = DAT_1469eaf38;
      lStack_228 = *plVar6;
      lStack_220 = param_1[5];
      if (lStack_220 != 0) {
        LOCK();
        *(int *)(lStack_220 + 8) = *(int *)(lStack_220 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,auStack_208,&lStack_228,1);
      if (plStack_200 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_200 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_200)(plStack_200);
          LOCK();
          piVar2 = (int *)((longlong)plStack_200 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_200 + 8))(plStack_200,1);
          }
        }
      }
    }
    if (plStack_230 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_230 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_230)(plStack_230);
        LOCK();
        piVar2 = (int *)((longlong)plStack_230 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_230 + 8))(plStack_230,1);
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 141806520 Construct body=181 status=ok
// SIG undefined Construct(void)

void SHorizontalBox::Construct(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_2 + 0x110);
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x108) + lVar5 * 8);
      if (*(char *)(param_1 + 0x228) == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x210);
        if ((lVar4 != 0) && (*(longlong *)(lVar3 + 8) != lVar4)) {
          *(longlong *)(lVar3 + 8) = lVar4;
          FUN_141802340(lVar3);
        }
        iVar2 = *(int *)(param_1 + 0x220);
        *(int *)(param_1 + 0x220) = iVar2 + 1;
        if (*(int *)(param_1 + 0x224) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x218,iVar2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar2 * 8) = lVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return;
}



// FUNCTION 1418065e0 Construct body=205 status=ok
// SIG undefined Construct(void)

void SOverlay::Construct(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_2 + 0x110);
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x108) + lVar5 * 8);
      if (*(char *)(param_1 + 0x228) == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x210);
        if ((lVar4 != 0) && (*(longlong *)(lVar3 + 8) != lVar4)) {
          *(longlong *)(lVar3 + 8) = lVar4;
          FUN_141802340(lVar3);
        }
        iVar2 = *(int *)(param_1 + 0x220);
        *(int *)(param_1 + 0x220) = iVar2 + 1;
        if (*(int *)(param_1 + 0x224) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x218,iVar2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar2 * 8) = lVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return;
}



// FUNCTION 1418066b0 FUN_1418066b0 body=1307 status=ok
// SIG undefined FUN_1418066b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1418066b0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6,undefined4 param_7,undefined4 *param_8,
                  undefined8 *param_9,undefined8 *param_10,char param_11,undefined1 param_12,
                  longlong *param_13)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar13 = *param_3;
  local_68 = param_13;
  if (lVar13 == 0) {
    if (*(char *)(param_2 + 0x18) == '\0') {
      plVar3 = (longlong *)(param_1 + 0x160);
      if ((((longlong *)*plVar3 != (longlong *)0x0) &&
          (cVar11 = (**(code **)(*(longlong *)*plVar3 + 0x18))(), cVar11 == '\0')) ||
         (local_70 = (longlong *)0x0, plVar3 == &local_78)) goto LAB_1418068f7;
      *plVar3 = 0;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x168,&local_70);
      plVar3 = local_70;
      if (local_70 == (longlong *)0x0) goto LAB_1418068f7;
      LOCK();
      plVar5 = local_70 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 != 1) goto LAB_1418068f7;
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_58 = local_70;
      goto joined_r0x0001418068e6;
    }
    puVar12 = (undefined8 *)(**(code **)(*DAT_1469eaf38 + 0xf8))(DAT_1469eaf38,local_60,param_2);
    local_80 = (longlong *)puVar12[1];
    local_88 = *puVar12;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(param_1 + 0x160) != &local_88) {
      *(undefined8 *)(param_1 + 0x160) = local_88;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x168,&local_80);
    }
    plVar3 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (local_58 == (longlong *)0x0) goto LAB_1418068f7;
    LOCK();
    plVar3 = local_58 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 != 1) goto LAB_1418068f7;
    (**(code **)*local_58)(local_58);
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    iVar15 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar15 != 1) goto LAB_1418068f7;
    lVar13 = *local_58;
  }
  else {
    plVar3 = (longlong *)(param_1 + 0x160);
    uStack_90 = (longlong *)param_3[1];
    if (uStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
      UNLOCK();
    }
    local_98 = lVar13;
    if (&local_98 != plVar3) {
      local_98._0_4_ = (undefined4)lVar13;
      local_98._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
      uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
      lVar13 = *plVar3;
      plVar5 = *(longlong **)(param_1 + 0x168);
      local_50 = (undefined4)local_98;
      uStack_4c = local_98._4_4_;
      uStack_48 = (undefined4)uStack_90;
      uStack_44 = uStack_90._4_4_;
      *(undefined4 *)plVar3 = (undefined4)local_98;
      *(undefined4 *)(param_1 + 0x164) = local_98._4_4_;
      *(undefined4 *)(param_1 + 0x168) = (undefined4)uStack_90;
      *(undefined4 *)(param_1 + 0x16c) = uStack_90._4_4_;
      local_98 = lVar13;
      uStack_90 = plVar5;
    }
    plVar3 = uStack_90;
    if (uStack_90 == (longlong *)0x0) goto LAB_1418068f7;
    LOCK();
    plVar5 = uStack_90 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 != 1) goto LAB_1418068f7;
    (**(code **)*uStack_90)(uStack_90);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar15 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    local_58 = uStack_90;
joined_r0x0001418068e6:
    if (iVar15 != 1) goto LAB_1418068f7;
    lVar13 = *local_58;
  }
  (**(code **)(lVar13 + 8))(local_58,1);
LAB_1418068f7:
  TAttribute<TOptional<enum_EMouseCursor::Type>_>::operator=(param_1 + 0x140,param_4);
  *(undefined1 *)(param_1 + 0x98) = *param_5;
  plVar3 = (longlong *)(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0x99) = param_5[1];
  if ((longlong *)(param_5 + 8) != plVar3) {
    if ((*(int *)(param_5 + 0x10) == 0) ||
       (plVar5 = *(longlong **)(param_5 + 8), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0xa8) != 0) &&
         (plVar5 = (longlong *)*plVar3, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar3 != 0) {
          lVar13 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar13;
        }
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar3);
    }
  }
  *(undefined1 *)(param_1 + 0xb0) = *param_6;
  *(undefined1 *)(param_1 + 0xb1) = param_6[1];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,param_6 + 8);
  *(undefined4 *)(param_1 + 200) = param_7;
  if (param_8 != (undefined4 *)(param_1 + 0xd0)) {
    if (*(char *)(param_1 + 0xe8) != '\0') {
      *(undefined1 *)(param_1 + 0xe8) = 0;
    }
    if (*(char *)(param_8 + 6) != '\0') {
      uVar8 = param_8[1];
      uVar9 = param_8[2];
      uVar10 = param_8[3];
      *(undefined4 *)(param_1 + 0xd0) = *param_8;
      *(undefined4 *)(param_1 + 0xd4) = uVar8;
      *(undefined4 *)(param_1 + 0xd8) = uVar9;
      *(undefined4 *)(param_1 + 0xdc) = uVar10;
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_8 + 4);
      *(undefined1 *)(param_1 + 0xe8) = 1;
    }
  }
  plVar3 = (longlong *)(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_8 + 7);
  if ((longlong *)(param_8 + 8) != plVar3) {
    if ((param_8[10] == 0) || (plVar5 = *(longlong **)(param_8 + 8), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0xf8) != 0) &&
         (plVar5 = (longlong *)*plVar3, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar3 != 0) {
          lVar13 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar13;
        }
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x100) = *param_9;
  plVar3 = (longlong *)(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_9 + 1);
  if (param_9 + 2 != plVar3) {
    if ((*(int *)(param_9 + 3) == 0) || (plVar5 = (longlong *)param_9[2], plVar5 == (longlong *)0x0)
       ) {
      if ((*(int *)(param_1 + 0x118) != 0) &&
         (plVar5 = (longlong *)*plVar3, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar3 != 0) {
          lVar13 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar13;
        }
        *(undefined4 *)(param_1 + 0x118) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar3);
    }
  }
  plVar5 = local_68;
  plVar3 = (longlong *)(param_1 + 0x130);
  uVar6 = *param_10;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0x7f;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | param_11 << 7;
  *(undefined1 *)(param_1 + 0x1a) = param_12;
  *(undefined8 *)(param_1 + 0x128) = uVar6;
  if (plVar3 != local_68) {
    iVar15 = *(int *)(param_1 + 0x138);
    if (iVar15 != 0) {
      plVar16 = (longlong *)(*plVar3 + 8);
      do {
        plVar7 = (longlong *)*plVar16;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
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
        plVar16 = plVar16 + 2;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    iVar15 = (int)plVar5[1];
    puVar12 = (undefined8 *)*plVar5;
    *(int *)(param_1 + 0x138) = iVar15;
    if ((iVar15 == 0) && (*(int *)(param_1 + 0x13c) == 0)) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar3,iVar15);
      puVar14 = (undefined8 *)*plVar3;
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar14 = *puVar12;
        lVar13 = puVar12[1];
        puVar14[1] = lVar13;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        puVar14 = puVar14 + 2;
        puVar12 = puVar12 + 2;
      }
    }
  }
  return;
}



// FUNCTION 141806bd0 FUN_141806bd0 body=3839 status=ok
// SIG undefined FUN_141806bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141806bd0(code *param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  void **ppvVar9;
  float *pfVar10;
  longlong *plVar11;
  code cVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  undefined2 *puVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_328 [32];
  char local_308;
  float local_300;
  float local_2fc;
  uint local_2f8;
  int local_2f4;
  longlong *local_2f0;
  longlong lStack_2e8;
  code *local_2e0;
  float fStack_2d8;
  float fStack_2d4;
  undefined4 local_2d0;
  bool local_2cc;
  undefined4 local_2c8;
  bool local_2c4;
  undefined4 local_2c0;
  bool local_2bc;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  void *local_2a0;
  int local_298;
  int local_294;
  undefined2 *local_290;
  int local_288;
  undefined4 local_284;
  undefined2 local_280;
  undefined8 local_278;
  undefined4 local_270;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined2 *local_258;
  int local_250;
  int local_248;
  int local_244;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  longlong lStack_228;
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8 [2];
  undefined2 *local_1d8;
  int local_1d0;
  undefined2 *local_1c8;
  int local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0;
  longlong lStack_198;
  undefined1 local_190;
  longlong local_188 [2];
  void *local_178 [2];
  longlong local_168 [2];
  undefined2 *local_158;
  int local_150;
  undefined2 *local_148;
  int local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  longlong local_108 [2];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  uVar21 = 0;
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_2 + 0x110);
  *(longlong *)(param_1 + 0x470) = *(longlong *)(param_2 + 0x110) + 0xec0;
  local_2f8 = 0;
  local_2e0 = param_1;
  local_2b0 = param_2;
  FText::operator=(param_1 + 0x310,param_2 + 0x118);
  param_1[0x328] = *(code *)(param_2 + 0x130);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x330,param_2 + 0x138);
  param_1[0x340] = *(code *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x160);
  uVar3 = *(undefined4 *)(param_2 + 0x164);
  param_1[0x18] = (code)((byte)param_1[0x18] | 0x20);
  *(undefined4 *)(param_1 + 0x344) = uVar3;
  cVar12 = (code)((*(char *)(param_2 + 0x168) << 4 ^ (byte)param_1[0x350]) & 0x10 ^
                 (byte)param_1[0x350]);
  param_1[0x350] = cVar12;
  cVar12 = (code)((byte)cVar12 ^ (*(char *)(param_2 + 0x169) << 5 ^ (byte)cVar12) & 0x20);
  param_1[0x350] = cVar12;
  param_1[0x348] = *(code *)(param_2 + 0x16a);
  cVar12 = (code)((byte)cVar12 ^ (*(char *)(param_2 + 0x16b) * '\x02' ^ (byte)cVar12) & 2);
  param_1[0x350] = cVar12;
  cVar12 = (code)((byte)cVar12 ^ (*(char *)(param_2 + 0x16c) << 2 ^ (byte)cVar12) & 4);
  param_1[0x350] = cVar12;
  param_1[0x350] = (code)(*(char *)(param_2 + 0x16d) << 7 | (byte)cVar12 & 0x7f);
  cVar12 = (code)((*(byte *)(param_2 + 0x174) ^ (byte)param_1[0x351]) & 1 ^ (byte)param_1[0x351]);
  param_1[0x351] = cVar12;
  cVar12 = (code)((byte)cVar12 ^ (*(char *)(param_2 + 0x175) << 2 ^ (byte)cVar12) & 4);
  param_1[0x351] = cVar12;
  cVar12 = (code)((byte)cVar12 ^ (*(char *)(param_2 + 0x177) << 3 ^ (byte)cVar12) & 8);
  param_1[0x351] = cVar12;
  cVar12 = (code)((*(char *)(param_2 + 0x176) << 4 ^ (byte)cVar12) & 0x10 ^ (byte)cVar12);
  param_1[0x351] = cVar12;
  if ((*(char *)(param_2 + 0x16b) == '\0') && (*(char *)(param_2 + 0x16a) == '\x02')) {
    bVar6 = 0x20;
  }
  else {
    bVar6 = 0;
  }
  param_1[0x351] = (code)((byte)cVar12 & 0xdf | bVar6);
  param_1[0x352] =
       (code)((byte)param_1[0x352] ^ (*(byte *)(param_2 + 0x178) ^ (byte)param_1[0x352]) & 1);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x170);
  uVar4 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x5c0) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1b0);
  uVar5 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x351] = (code)((byte)cVar12 & 0xdd | bVar6);
  *(undefined8 *)(param_1 + 0x5c8) = uVar4;
  *(undefined8 *)(param_1 + 0x5d0) = uVar5;
  bVar23 = *(char *)(param_2 + 0x198) == '\0';
  if (!bVar23) {
    local_2d0 = *(undefined4 *)(param_2 + 0x194);
  }
  local_2cc = !bVar23;
  bVar24 = *(char *)(param_2 + 400) == '\0';
  if (!bVar24) {
    local_2c8 = *(undefined4 *)(param_2 + 0x18c);
  }
  local_2c4 = !bVar24;
  bVar25 = *(char *)(param_2 + 0x188) == '\0';
  if (!bVar25) {
    local_2c0 = *(undefined4 *)(param_2 + 0x184);
  }
  local_2bc = !bVar25;
  cVar2 = *(char *)(param_2 + 0x180);
  iVar8 = local_2f4;
  if (cVar2 != '\0') {
    iVar8 = *(int *)(param_2 + 0x17c);
  }
  local_d8._0_5_ = 0;
  local_d0._0_5_ = 0;
  local_c8._0_5_ = 0;
  local_c0._0_5_ = 0;
  if (cVar2 == '\0') {
    local_d8._0_4_ = 0;
    iVar8 = (int)local_d8;
  }
  else {
    local_d8._0_5_ = CONCAT14(1,iVar8);
  }
  local_d8 = (ulonglong)(uint5)local_d8;
  if (bVar25) {
    local_d0._0_4_ = 0;
    uVar3 = (undefined4)local_d0;
  }
  else {
    local_d0._0_5_ = CONCAT14(1,local_2c0);
    uVar3 = local_2c0;
  }
  local_d0 = (ulonglong)(uint5)local_d0;
  if (bVar24) {
    local_c8._0_4_ = 0;
    uVar1 = (undefined4)local_c8;
  }
  else {
    local_c8._0_5_ = CONCAT14(1,local_2c8);
    uVar1 = local_2c8;
  }
  local_c8 = (ulonglong)(uint5)local_c8;
  if (bVar23) {
    local_c0._0_4_ = 0;
    uVar27 = (undefined4)local_c0;
  }
  else {
    local_c0._0_5_ = CONCAT14(1,local_2d0);
    uVar27 = local_2d0;
  }
  local_c0 = (ulonglong)(uint5)local_c0;
  if ((code *)&local_d8 != param_1 + 0x478) {
    if (param_1[0x47c] != (code)0x0) {
      param_1[0x47c] = (code)0x0;
    }
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x478) = iVar8;
      param_1[0x47c] = (code)0x1;
    }
  }
  if ((code *)&local_d0 != param_1 + 0x480) {
    if (param_1[0x484] != (code)0x0) {
      param_1[0x484] = (code)0x0;
    }
    if (!bVar25) {
      *(undefined4 *)(param_1 + 0x480) = uVar3;
      param_1[0x484] = (code)0x1;
    }
  }
  if ((code *)&local_c8 != param_1 + 0x488) {
    if (param_1[0x48c] != (code)0x0) {
      param_1[0x48c] = (code)0x0;
    }
    if (!bVar24) {
      *(undefined4 *)(param_1 + 0x488) = uVar1;
      param_1[0x48c] = (code)0x1;
    }
  }
  if ((code *)&local_c0 != param_1 + 0x490) {
    if (param_1[0x494] != (code)0x0) {
      param_1[0x494] = (code)0x0;
    }
    if (!bVar23) {
      *(undefined4 *)(param_1 + 0x490) = uVar27;
      param_1[0x494] = (code)0x1;
    }
  }
  param_1[0x18] = (code)((byte)param_1[0x18] & 0xfd);
  if ((((*(char *)(param_2 + 0x19c) == '\0') || (cVar12 = param_1[0x350], ((byte)cVar12 & 2) != 0))
      || (*(int *)(param_1 + 0x30c) == 4)) || (((byte)param_1[0x351] & 1) != 0)) {
    cVar12 = param_1[0x350];
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  param_1[0x350] = (code)((byte)cVar12 & 0xfe | bVar6);
  fVar34 = *(float *)(param_2 + 0x154);
  fVar26 = *(float *)(param_2 + 0x158);
  if (((((byte)cVar12 & 2) == 0) && ((*(int *)(param_1 + 0x30c) - 2U & 0xfffffffd) != 0)) &&
     (((byte)param_1[0x351] & 1) == 0)) {
    FUN_1418454d0(param_1,&local_268,0);
    fVar26 = local_264 + local_25c + fVar26;
    fVar34 = fVar34 + local_260 + local_268;
    if (((byte)param_1[0x350] & 1) != 0) {
      fVar26 = fVar26 + 24.0;
    }
  }
  local_300 = *(float *)(param_2 + 0x14c);
  local_2fc = *(float *)(param_2 + 0x150);
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  param_1[0x349] = *(code *)(param_2 + 0x149);
  local_240 = 0;
  local_238 = 0;
  FDisplayMetrics::RebuildDisplayMetrics(&local_248);
  if (param_1[0x349] == (code)0x1) {
    (**(code **)(*DAT_1469eb270 + 0x78))(DAT_1469eb270,&local_258);
    local_2f4 = 0;
    bVar23 = (int)local_238 == 0;
    if (0 < (int)local_238) {
      local_2b8 = 0;
      local_2f0 = (longlong *)0x0;
      do {
        lVar15 = local_240 + local_2b8;
        FString::FString(local_1e8,lVar15);
        FString::FString(&local_1d8,lVar15 + 0x10);
        FString::FString(&local_1c8,lVar15 + 0x20);
        local_1b8 = *(undefined4 *)(lVar15 + 0x30);
        local_1b0 = *(undefined8 *)(lVar15 + 0x38);
        uStack_1a8 = *(undefined8 *)(lVar15 + 0x40);
        local_1b4 = *(undefined4 *)(lVar15 + 0x34);
        local_1a0 = *(longlong *)(lVar15 + 0x48);
        lStack_198 = *(longlong *)(lVar15 + 0x50);
        local_190 = *(undefined1 *)(lVar15 + 0x58);
        FString::FString(local_188,lVar15 + 0x60);
        iVar8 = local_1d0;
        iVar20 = 0;
        iVar18 = 0;
        local_308 = '\0';
        lVar15 = 0;
        if ((int)local_238 < 1) {
LAB_141807384:
          lVar15 = (longlong)local_1d0;
          uVar21 = uVar21 | 2;
          local_2a0 = (void *)0x0;
          local_298 = local_1d0;
          local_2f8 = uVar21;
          if (local_1d0 == 0) {
            local_294 = local_1d0;
            puVar19 = local_1d8;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2a0,local_1d0,0);
            puVar19 = local_1d8;
            _guard_xfg_dispatch_icall_nop(local_2a0,local_1d8,lVar15 * 2);
          }
          ppvVar9 = &local_2a0;
        }
        else {
          lVar22 = 0;
          do {
            lVar16 = local_240 + lVar22;
            FString::FString(local_168,lVar16);
            FString::FString(&local_158,lVar16 + 0x10);
            FString::FString(&local_148,lVar16 + 0x20);
            local_138 = *(undefined4 *)(lVar16 + 0x30);
            local_130 = *(undefined8 *)(lVar16 + 0x38);
            uStack_128 = *(undefined8 *)(lVar16 + 0x40);
            local_134 = *(undefined4 *)(lVar16 + 0x34);
            local_120 = *(undefined8 *)(lVar16 + 0x48);
            uStack_118 = *(undefined8 *)(lVar16 + 0x50);
            local_110 = *(undefined1 *)(lVar16 + 0x58);
            FString::FString(local_108,lVar16 + 0x60);
            puVar17 = local_148;
            puVar19 = local_158;
            if ((longlong *)lVar15 != local_2f0) {
              puVar14 = &DAT_143f3eda8;
              if (local_150 != 0) {
                puVar14 = local_158;
              }
              puVar13 = &DAT_143f3eda8;
              if (iVar8 != 0) {
                puVar13 = local_1d8;
              }
              iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
              if (iVar7 == 0) {
                puVar14 = &DAT_143f3eda8;
                if (local_1c0 != 0) {
                  puVar14 = local_1c8;
                }
                puVar13 = &DAT_143f3eda8;
                if (local_140 != 0) {
                  puVar13 = puVar17;
                }
                iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
                if (iVar7 < 0) {
                  iVar20 = iVar20 + 1;
                }
                local_308 = '\x01';
              }
            }
            if (local_108[0] != 0) {
              FMemory::Free();
            }
            if (puVar17 != (undefined2 *)0x0) {
              FMemory::Free(puVar17);
            }
            if (puVar19 != (undefined2 *)0x0) {
              FMemory::Free(puVar19);
            }
            if (local_168[0] != 0) {
              FMemory::Free();
            }
            puVar19 = local_1d8;
            param_1 = local_2e0;
            iVar18 = iVar18 + 1;
            lVar15 = lVar15 + 1;
            lVar22 = lVar22 + 0x70;
          } while (iVar18 < (int)local_238);
          uVar21 = local_2f8;
          if (local_308 == '\0') goto LAB_141807384;
          uVar21 = local_2f8 | 1;
          puVar17 = &DAT_143f3eda8;
          if (local_1d0 != 0) {
            puVar17 = local_1d8;
          }
          local_2f8 = uVar21;
          FString::PrintfImpl(local_178,L"%s (%d)",puVar17,iVar20 + 1);
          ppvVar9 = local_178;
        }
        local_288 = *(int *)(ppvVar9 + 1);
        lVar15 = (longlong)local_288;
        puVar17 = (undefined2 *)0x0;
        _Src = *ppvVar9;
        local_290 = (undefined2 *)0x0;
        if (local_288 == 0) {
          local_284 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_290,local_288,0);
          puVar17 = local_290;
          _guard_xfg_dispatch_icall_nop(local_290,_Src,lVar15 * 2);
        }
        iVar8 = local_288;
        if (((uVar21 & 2) != 0) &&
           (uVar21 = uVar21 & 0xfffffffd, local_2f8 = uVar21, local_2a0 != (void *)0x0)) {
          FMemory::Free(local_2a0);
        }
        if (((uVar21 & 1) != 0) &&
           (uVar21 = uVar21 & 0xfffffffe, local_2f8 = uVar21, local_178[0] != (void *)0x0)) {
          FMemory::Free();
        }
        puVar14 = &DAT_143f3eda8;
        if (local_250 != 0) {
          puVar14 = local_258;
        }
        puVar13 = &DAT_143f3eda8;
        if (iVar8 != 0) {
          puVar13 = puVar17;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
        if (iVar8 == 0) {
          local_2f0 = (longlong *)local_1a0;
          lStack_2e8 = lStack_198;
          if (puVar17 != (undefined2 *)0x0) {
            FMemory::Free(puVar17);
          }
          if (local_188[0] != 0) {
            FMemory::Free();
          }
          if (local_1c8 != (undefined2 *)0x0) {
            FMemory::Free(local_1c8);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          if (local_1e8[0] != 0) {
            FMemory::Free();
          }
          break;
        }
        if (puVar17 != (undefined2 *)0x0) {
          FMemory::Free(puVar17);
        }
        if (local_188[0] != 0) {
          FMemory::Free();
        }
        if (local_1c8 != (undefined2 *)0x0) {
          FMemory::Free(local_1c8);
        }
        if (puVar19 != (undefined2 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_1e8[0] != 0) {
          FMemory::Free();
        }
        local_2f4 = local_2f4 + 1;
        local_2f0 = (longlong *)((longlong)local_2f0 + 1);
        local_2b8 = local_2b8 + 0x70;
      } while (local_2f4 < (int)local_238);
      bVar23 = local_2f4 == (int)local_238;
      param_2 = local_2b0;
    }
    if (bVar23) {
      local_2f0 = (longlong *)local_230;
      lStack_2e8 = lStack_228;
    }
    if (local_258 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    plVar11 = (longlong *)FUN_1416d24d0(&local_248,local_f8,&local_300);
    local_2f0 = (longlong *)*plVar11;
    lStack_2e8 = plVar11[1];
  }
  if (((((int)local_2f0 == 0) && ((int)((ulonglong)local_2f0 >> 0x20) == 0)) &&
      ((int)lStack_2e8 == 0)) && ((int)((ulonglong)lStack_2e8 >> 0x20) == 0)) {
    local_2f0 = (longlong *)CONCAT44(iStack_21c,local_220);
    lStack_2e8 = CONCAT44(iStack_214,iStack_218);
  }
  iVar20 = (int)lStack_2e8;
  iVar7 = (int)local_2f0;
  iVar18 = (int)((ulonglong)lStack_2e8 >> 0x20);
  iVar8 = (int)((ulonglong)local_2f0 >> 0x20);
  if (((byte)param_1[0x350] & 2) != 0) {
    if (param_1[0x48c] == (code)0x0) {
      if (&local_2e0 != (code **)(param_1 + 0x488)) {
        *(float *)(param_1 + 0x488) = (float)(iVar20 - iVar7);
        param_1[0x48c] = (code)0x1;
      }
    }
    if (param_1[0x494] == (code)0x0) {
      if ((code *)&local_2b8 != param_1 + 0x490) {
        *(float *)(param_1 + 0x490) = (float)(iVar18 - iVar8);
        param_1[0x494] = (code)0x1;
      }
    }
  }
  cVar12 = param_1[0x349];
  if (cVar12 == (code)0x0) {
    fVar29 = fVar34;
    if (*(char *)(param_2 + 0x19d) == '\0') goto LAB_14180789d;
    if (((local_300 < (float)local_220) || ((float)iStack_218 <= local_300)) ||
       ((local_2fc < (float)iStack_21c || ((float)iStack_214 <= local_2fc)))) {
      param_1[0x349] = (code)0x2;
      cVar12 = (code)0x2;
    }
    fVar29 = (float)(iStack_218 - local_220) - (float)((local_248 - iVar20) + iVar7);
    if (0.0 <= fVar34) {
      if (fVar29 <= fVar34) {
        fVar34 = fVar29;
      }
    }
    else {
      fVar34 = 0.0;
    }
    fVar29 = (float)(iStack_214 - iStack_21c) - (float)((iVar8 - iVar18) + local_244);
    if (0.0 <= fVar26) {
      if (fVar29 <= fVar26) {
        fVar26 = fVar29;
      }
    }
    else {
      fVar26 = 0.0;
    }
  }
  fVar29 = fVar34;
  if (cVar12 != (code)0x0) {
    if (cVar12 == (code)0x2) {
      pfVar10 = (float *)(**(code **)(*DAT_1469eaf38 + 0xb8))(DAT_1469eaf38,local_e8);
      fVar33 = *pfVar10;
      fVar32 = pfVar10[1];
      local_2e0 = *(code **)pfVar10;
      fVar31 = pfVar10[2];
      fVar30 = pfVar10[3];
      fStack_2d8 = fVar31;
      fStack_2d4 = fVar30;
    }
    else {
      fVar33 = (float)iVar7;
      fVar30 = (float)iVar18;
      fVar32 = (float)iVar8;
      fVar31 = (float)iVar20;
    }
    fVar28 = 1.0;
    if (*(char *)(param_2 + 0x15c) != '\0') {
      fVar28 = (float)FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint();
    }
    if (*(char *)(param_2 + 0x19d) != '\0') {
      fVar29 = fVar31 - fVar33;
      if (fVar34 <= fVar31 - fVar33) {
        fVar29 = fVar34;
      }
      if (fVar30 - fVar32 < fVar26) {
        fVar26 = fVar30 - fVar32;
      }
    }
    local_300 = ((fVar31 - fVar33) - fVar28 * fVar29) * 0.5 + fVar33;
    local_2fc = ((fVar30 - fVar32) - fVar28 * fVar26) * 0.5 + fVar32;
    if (local_300 < fVar33) {
      local_300 = fVar33;
    }
    if (local_2fc < fVar32) {
      local_2fc = fVar32;
    }
  }
LAB_14180789d:
  if (*(char *)(param_2 + 0x15c) == '\0') {
    fVar31 = fVar29 - *(float *)(param_2 + 0x154);
    fVar34 = fVar26 - *(float *)(param_2 + 0x158);
  }
  else {
    fVar34 = (float)FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint();
    if (param_1[0x349] == (code)0x0) {
      local_300 = local_300 * fVar34;
      local_2fc = local_2fc * fVar34;
    }
    fVar29 = fVar29 * fVar34;
    fVar26 = fVar26 * fVar34;
    fVar31 = fVar29 - fVar34 * *(float *)(param_2 + 0x154);
    fVar34 = fVar26 - fVar34 * *(float *)(param_2 + 0x158);
  }
  *(float *)(param_1 + 0x360) = fVar29;
  *(float *)(param_1 + 0x364) = fVar26;
  *(float *)(param_1 + 0x358) = local_300;
  *(float *)(param_1 + 0x35c) = local_2fc;
  FUN_141857b30(param_1,CONCAT44(fVar26 - fVar34,fVar29 - fVar31));
  fStack_2d8 = 0.0;
  local_2e0 = FUN_1418458a0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_2f0 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    plVar11[1] = (longlong)param_1;
    *plVar11 = (longlong)&PTR_GetPoolName_144d50248;
    plVar11[2] = (longlong)local_2e0;
    plVar11[3] = CONCAT44(fStack_2d4,fStack_2d8);
    lVar15 = FDelegateHandle::GenerateNewID();
    plVar11[5] = lVar15;
  }
  local_280 = 0x119;
  local_280._0_1_ = (code)0x19;
  local_278 = 0;
  local_280._1_1_ = (code)0x1;
  local_270 = 0;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_278);
  }
  param_1[0xb0] = local_280._0_1_;
  param_1[0xb1] = local_280._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xb8,&local_278);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_278);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    local_2f0 = (longlong *)FMemory::Realloc(plVar11,0,0);
    if (local_2f0 != (longlong *)0x0) {
      FMemory::Free(local_2f0);
    }
  }
  FUN_141807ad0(param_1);
  local_2b0 = *(longlong *)(param_2 + 0x1c0);
  local_2a8 = *(longlong *)(param_2 + 0x1c8);
  if (local_2a8 != 0) {
    LOCK();
    *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
    UNLOCK();
  }
  FUN_14185a760(param_1,&local_2b0);
  FUN_141189610(&local_240);
  return;
}



// FUNCTION 141807ad0 FUN_141807ad0 body=5651 status=ok
// SIG undefined FUN_141807ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141807ad0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_ca8 [32];
  undefined2 *local_c88;
  code *local_c78;
  undefined4 uStack_c70;
  uint uStack_c6c;
  undefined1 local_c68;
  undefined1 local_c67;
  undefined1 local_c66;
  undefined1 local_c65 [13];
  longlong local_c58;
  longlong *plStack_c50;
  longlong *local_c48;
  int local_c40;
  undefined2 local_c38;
  undefined1 local_c30 [16];
  undefined8 local_c20;
  longlong *local_c18;
  undefined8 local_c10;
  longlong *local_c08;
  undefined8 local_c00;
  longlong *local_bf8;
  undefined4 local_bf0;
  undefined4 local_be8;
  undefined1 local_be4;
  undefined8 local_be0;
  undefined4 local_bd8;
  undefined4 local_bd0;
  undefined4 local_bc8;
  undefined1 local_bc4;
  undefined8 local_bc0;
  undefined4 local_bb8;
  longlong *local_bb0;
  longlong *local_ba8;
  undefined1 *local_ba0;
  longlong *local_b98;
  longlong *local_b90;
  undefined1 *local_b88;
  longlong *local_b80;
  longlong *local_b78;
  undefined8 **local_b70;
  longlong *local_b68;
  longlong *local_b60;
  undefined8 **local_b58;
  longlong *local_b50;
  longlong *local_b48;
  undefined1 *local_b40;
  longlong *local_b38;
  longlong *local_b30;
  undefined1 *local_b28;
  undefined8 local_b20;
  longlong *local_b18;
  undefined8 local_b10;
  longlong *local_b08;
  undefined8 *local_b00;
  longlong local_af8;
  undefined4 local_af0;
  undefined1 local_aec;
  undefined8 local_ae8;
  undefined4 local_ae0;
  undefined4 local_ad8;
  undefined1 local_ad4;
  undefined8 local_ad0;
  undefined4 local_ac8;
  undefined1 local_ac0;
  undefined1 local_abf;
  undefined8 local_ab8;
  undefined4 local_ab0;
  longlong local_aa8;
  longlong local_aa0;
  longlong local_a98;
  undefined8 *local_a90;
  longlong local_a88;
  longlong local_a80;
  undefined1 local_a78;
  undefined1 local_a77;
  undefined8 local_a70;
  undefined4 local_a68;
  undefined8 local_a60;
  longlong *local_a58;
  longlong *local_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined1 local_a38;
  undefined8 local_a30;
  undefined4 local_a28;
  undefined8 local_a20;
  longlong local_a18;
  undefined8 local_a10;
  longlong *plStack_a08;
  undefined8 local_a00;
  longlong *local_9f8;
  undefined8 local_9f0;
  longlong *local_9e8;
  longlong local_9e0;
  undefined1 local_9d8;
  undefined8 local_9d0;
  undefined4 local_9c8;
  undefined8 local_9c0;
  undefined1 local_9b8;
  undefined1 local_9b0 [16];
  undefined8 local_9a0;
  undefined1 local_998;
  undefined1 local_990 [16];
  undefined1 local_980 [32];
  longlong *local_960;
  undefined1 local_958;
  undefined8 local_950;
  undefined4 local_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined1 local_930;
  undefined8 local_928;
  longlong *plStack_920;
  undefined1 local_918;
  undefined8 local_910;
  undefined4 local_908;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined1 local_8e8;
  undefined8 local_8e0;
  longlong *local_8d8;
  undefined1 local_8d0;
  undefined1 local_8c8 [16];
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined1 local_8a8;
  undefined8 local_8a0;
  longlong *local_898;
  undefined1 local_890;
  undefined1 local_888 [16];
  undefined1 local_878 [8];
  longlong *local_870;
  longlong local_868;
  longlong *plStack_860;
  code *local_858;
  longlong lStack_850;
  undefined1 local_848 [8];
  longlong *local_840;
  code *local_838;
  longlong lStack_830;
  undefined1 *local_828;
  longlong lStack_820;
  code *local_818;
  longlong lStack_810;
  undefined1 *local_808;
  longlong lStack_800;
  undefined1 *local_7f8;
  longlong lStack_7f0;
  undefined1 local_7e8 [8];
  longlong *local_7e0;
  undefined1 local_7d8 [8];
  undefined1 local_7d0 [8];
  longlong *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7b0 [8];
  longlong *local_7a8;
  undefined1 local_7a0 [8];
  longlong *local_798;
  undefined1 local_790 [8];
  longlong *local_788;
  longlong local_778;
  longlong *plStack_770;
  undefined1 local_768 [8];
  longlong *local_760;
  undefined1 local_758 [8];
  longlong *local_750;
  undefined1 local_748 [8];
  longlong *local_740;
  undefined1 local_738 [16];
  undefined1 local_728 [32];
  longlong *local_708;
  undefined1 local_6f8 [264];
  longlong local_5f0;
  undefined1 local_5d8 [264];
  longlong local_4d0;
  undefined1 local_4b8 [264];
  longlong local_3b0;
  undefined1 local_398 [264];
  longlong local_290;
  undefined1 local_278 [264];
  longlong local_170;
  undefined1 local_158 [264];
  longlong local_50;
  ulonglong local_38;
  
  plVar9 = DAT_1469eb140;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_ca8;
  lVar8 = *DAT_1469eb140;
  local_a50 = param_1;
  puVar6 = (undefined8 *)FName::FName(local_7d8,"DefaultForeground",1);
  uVar7 = (**(code **)(lVar8 + 0x30))(plVar9,local_728,*puVar6,0);
  FUN_1417ee5f0(local_980,uVar7);
  puVar6 = (undefined8 *)0x0;
  local_958 = 1;
  local_950 = 0;
  local_948 = 0;
  FUN_140692440(param_1 + 0x56,local_980);
  *(undefined1 *)(param_1 + 0x5b) = local_958;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5c,&local_950);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_950);
  if (local_960 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_960 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_960)(local_960);
      LOCK();
      piVar1 = (int *)((longlong)local_960 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_960 + 8))(local_960,1);
      }
    }
  }
  if (local_708 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_708 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_708)(local_708);
      LOCK();
      piVar1 = (int *)((longlong)local_708 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_708 + 8))(local_708,1);
      }
    }
  }
  uVar4 = DAT_1464b9eec;
  local_ac0 = DAT_1464b9eec;
  local_abf = 1;
  local_ab8 = 0;
  local_ab0 = 0;
  lVar8 = SCanvas::FArguments::FArguments(local_6f8);
  *(undefined1 *)(lVar8 + 0x78) = uVar4;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_ab8);
  plVar9 = (longlong *)operator_new(0x248);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  local_b98 = plVar9 + 2;
  local_b90 = plVar9;
  FUN_14044f790(&local_b98,local_b98);
  local_b88 = &local_c68;
  FName::FName(&local_af8,"SVerticalBox",1);
  plVar9[0x26] = local_af8;
  FUN_1417fd340(&local_b98,&local_c58,lVar8);
  plVar9 = local_b90;
  if (local_b90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b90 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b90)(local_b90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b90 + 8))(local_b90,1);
      }
    }
  }
  if (local_5f0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_6f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_ab8);
  if ((*(byte *)(param_1 + 0x6a) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x73) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x73) = 0x41c00000;
    local_a10 = 0;
    plStack_a08 = (longlong *)0x0;
    puVar10 = (undefined8 *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_7e8);
    local_b20 = *puVar10;
    local_b18 = (longlong *)puVar10[1];
    if (local_b18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b18 + 1) = (int)local_b18[1] + 1;
      UNLOCK();
    }
    if (local_7e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7e0 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_7e0)(local_7e0);
        LOCK();
        piVar1 = (int *)((longlong)local_7e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_7e0 + 8))(local_7e0,1);
        }
      }
    }
    lVar11 = SVerticalBox::AddSlot(local_c58);
    local_ad8 = 0;
    local_ad4 = 1;
    local_ad0 = 0;
    local_ac8 = 0;
    local_bf0 = 0;
    local_be8 = 0;
    local_be4 = 1;
    local_be0 = 0;
    local_bd8 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_be0,&local_ad0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_ad0);
    *(undefined4 *)(lVar11 + 0x28) = local_bf0;
    *(undefined1 *)(lVar11 + 0x34) = local_be4;
    *(undefined4 *)(lVar11 + 0x30) = local_be8;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x38,&local_be0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_be0);
    lVar8 = *param_1;
    uVar5 = (**(code **)(lVar8 + 0x218))(param_1);
    local_c88 = (undefined2 *)CONCAT44(local_c88._4_4_,uVar5);
    uVar7 = (**(code **)(lVar8 + 0x210))(param_1,local_738,&local_b20,&local_a10);
    FUN_1417f9c30(lVar11,uVar7);
    plVar9 = local_b18;
    if (local_b18 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b18 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b18)(local_b18);
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
    plVar9 = plStack_a08;
    if (plStack_a08 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_a08 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_a08)(plStack_a08);
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
  }
  local_a20 = DAT_1469eb218;
  local_af0 = 0x3f800000;
  local_aec = 1;
  local_ae8 = 0;
  local_ae0 = 0;
  local_a18 = DAT_1469eb220;
  if (DAT_1469eb220 != 0) {
    LOCK();
    *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
    UNLOCK();
  }
  puVar12 = (undefined8 *)operator_new(0x88);
  puVar10 = puVar6;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar12);
    *puVar12 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar10 = puVar12;
  }
  lVar8 = local_c58;
  TPanelChildren<SOverlay::FOverlaySlot>::Add(local_c58 + 0x208,puVar10);
  FUN_1418475e0(lVar8,1);
  local_bd0 = 1;
  local_bc8 = 0x3f800000;
  local_bc4 = 1;
  local_bc0 = 0;
  local_bb8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_bc0,&local_ae8);
  *(undefined4 *)(puVar10 + 5) = local_bd0;
  *(undefined1 *)((longlong)puVar10 + 0x34) = local_bc4;
  *(undefined4 *)(puVar10 + 6) = local_bc8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar10 + 7,&local_bc0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_bc0);
  param_1[0x88] = (longlong)puVar10;
  FUN_1417f9c30(puVar10,&local_a20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_ae8);
  if ((((*(int *)((longlong)param_1 + 0x30c) - 2U & 0xfffffffd) == 0) ||
      ((*(byte *)(param_1 + 0x6a) & 2) != 0)) || ((*(byte *)((longlong)param_1 + 0x351) & 1) != 0))
  {
    if ((*(byte *)((longlong)param_1 + 0x351) & 3) != 0) {
      puVar6 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_790);
      local_a60 = *puVar6;
      local_a58 = (longlong *)puVar6[1];
      if (local_a58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a58 + 1) = (int)local_a58[1] + 1;
        UNLOCK();
      }
      if (local_788 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_788 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_788)(local_788);
          LOCK();
          piVar1 = (int *)((longlong)local_788 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_788 + 8))(local_788,1);
          }
        }
      }
      local_a90 = &local_a60;
      local_b60 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SPopupLayer>()
      ;
      local_b68 = local_b60 + 2;
      FUN_14044f790(&local_b68);
      plVar9 = local_b68;
      local_b58 = &local_a90;
      FName::FName(&local_a88,"SPopupLayer",1);
      plVar9[0x24] = local_a88;
      uVar7 = SCanvas::FArguments::FArguments(local_158);
      uVar13 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
               Expose<SListView<TSharedPtr<FString,1>_>_>(&local_b68,param_1 + 0xa9);
      puVar6 = (undefined8 *)FUN_1417fd140(uVar13,local_748,uVar7);
      local_c00 = *puVar6;
      local_bf8 = (longlong *)puVar6[1];
      if (local_bf8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_bf8 + 1) = (int)local_bf8[1] + 1;
        UNLOCK();
      }
      local_778 = local_c58;
      plStack_770 = plStack_c50;
      if (plStack_c50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c50 + 1) = (int)plStack_c50[1] + 1;
        UNLOCK();
      }
      uVar7 = FUN_14185c7c0();
      uVar7 = FUN_140801a00(uVar7,&local_778);
      lVar8 = SOverlay::FArguments::FArguments(local_278);
      plVar9 = (longlong *)(lVar8 + 0x108);
      iVar3 = *(int *)(lVar8 + 0x110);
      *(int *)(lVar8 + 0x110) = iVar3 + 1;
      if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(undefined8 *)(*plVar9 + (longlong)iVar3 * 8) = uVar7;
      uVar7 = FUN_14185c7c0();
      uVar7 = FUN_140801a00(uVar7,&local_c00);
      iVar3 = *(int *)(lVar8 + 0x110);
      *(int *)(lVar8 + 0x110) = iVar3 + 1;
      if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
      }
      *(undefined8 *)(*plVar9 + (longlong)iVar3 * 8) = uVar7;
      local_b48 = (longlong *)FUN_1417e5b60();
      local_b50 = local_b48 + 2;
      FUN_14044f790(&local_b50);
      plVar9 = local_b50;
      local_b40 = local_c65;
      FName::FName(&local_a80,"SOverlay",1);
      plVar9[0x24] = local_a80;
      uVar7 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
              Expose<SListView<TSharedPtr<FString,1>_>_>(&local_b50,param_1 + 0xa7);
      puVar6 = (undefined8 *)FUN_1417fcf70(uVar7,local_758,lVar8);
      plVar9 = (longlong *)puVar6[1];
      local_9f0 = *puVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_9e8 = plVar9;
      TSlotBase<FSimpleSlot>::operator[](param_1 + 0x43,&local_9f0);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (local_750 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_750 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_750)(local_750);
          LOCK();
          piVar1 = (int *)((longlong)local_750 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_750 + 8))(local_750,1);
          }
        }
      }
      plVar9 = local_b48;
      if (local_b48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b48 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b48)(local_b48);
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
      if (local_170 != 0) {
        FMemory::Free();
      }
      FUN_140456c70(local_278);
      plVar9 = plStack_c50;
      if (plStack_c50 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_c50 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_c50)(plStack_c50);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_c50 + 8))(plStack_c50,1);
          }
        }
      }
      plVar9 = local_bf8;
      if (local_bf8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_bf8 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_bf8)(local_bf8);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_bf8 + 8))(local_bf8,1);
          }
        }
      }
      if (local_740 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_740 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_740)(local_740);
          LOCK();
          piVar1 = (int *)((longlong)local_740 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_740 + 8))(local_740,1);
          }
        }
      }
      plVar9 = local_b60;
      if (local_b60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b60 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b60)(local_b60);
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
      plVar9 = local_a58;
      if (local_a58 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a58 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_a58)(local_a58);
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
      if (local_50 != 0) {
        FMemory::Free();
      }
      FUN_140456c70(local_158);
    }
    goto LAB_141809079;
  }
  uStack_c70 = 0;
  local_c78 = (code *)&LAB_1418455d0;
  lStack_7f0 = (ulonglong)uStack_c6c << 0x20;
  local_7f8 = &LAB_1418455d0;
  local_c38 = 0x119;
  FUN_1417dd840(local_c30,param_1,&local_7f8);
  uStack_c70 = 0;
  local_c78 = (code *)&LAB_141845490;
  lStack_800 = (ulonglong)uStack_c6c << 0x20;
  local_808 = &LAB_141845490;
  local_9a0 = 0;
  local_998 = 1;
  FUN_1417dd6e0(local_990,param_1,&local_808);
  local_c78 = FUN_1418454a0;
  local_8b8 = 0x3f800000;
  uStack_8b0 = 0x3f8000003f800000;
  uStack_c70 = 0;
  lStack_810 = (ulonglong)uStack_c6c << 0x20;
  local_818 = FUN_1418454a0;
  local_8a8 = 0;
  local_8a0 = 0;
  local_898 = (longlong *)0x0;
  local_890 = 1;
  FUN_1417dd9a0(local_888,param_1,&local_818);
  uStack_c70 = 0;
  local_c78 = (code *)&LAB_1418457b0;
  lStack_820 = (ulonglong)uStack_c6c << 0x20;
  local_828 = &LAB_1418457b0;
  local_9c0 = 0;
  local_9b8 = 1;
  FUN_1417dd6e0(local_9b0,param_1,&local_828);
  local_c78 = FUN_1418457c0;
  local_8f8 = 0x3f800000;
  uStack_8f0 = 0x3f8000003f800000;
  uStack_c70 = 0;
  lStack_830 = (ulonglong)uStack_c6c << 0x20;
  local_838 = FUN_1418457c0;
  local_8e8 = 0;
  local_8e0 = 0;
  local_8d8 = (longlong *)0x0;
  local_8d0 = 1;
  FUN_1417dd9a0(local_8c8,param_1,&local_838);
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_848);
  local_b10 = *puVar10;
  local_b08 = (longlong *)puVar10[1];
  if (local_b08 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b08 + 1) = (int)local_b08[1] + 1;
    UNLOCK();
  }
  if (local_840 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_840 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_840)(local_840);
      LOCK();
      piVar1 = (int *)((longlong)local_840 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_840 + 8))(local_840,1);
      }
    }
  }
  local_b00 = &local_b10;
  local_b78 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SPopupLayer>();
  local_b80 = local_b78 + 2;
  FUN_14044f790(&local_b80);
  plVar9 = local_b80;
  local_b70 = &local_b00;
  FName::FName(&local_aa8,"SPopupLayer",1);
  plVar9[0x24] = local_aa8;
  uVar7 = SCanvas::FArguments::FArguments(local_398);
  uVar13 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_b80,param_1 + 0xa9);
  puVar10 = (undefined8 *)FUN_1417fd140(uVar13,local_7a0,uVar7);
  local_c10 = *puVar10;
  local_c08 = (longlong *)puVar10[1];
  if (local_c08 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c08 + 1) = (int)local_c08[1] + 1;
    UNLOCK();
  }
  local_868 = local_c58;
  plStack_860 = plStack_c50;
  local_c78 = FUN_1418454d0;
  uStack_c70 = 0;
  lStack_850 = (ulonglong)uStack_c6c << 0x20;
  local_858 = FUN_1418454d0;
  if (plStack_c50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_c50 + 1) = (int)plStack_c50[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_1417ddc60(&local_c48,param_1,&local_858,0);
  local_a38 = 1;
  local_a30 = 0;
  local_a28 = 0;
  local_a48 = 0;
  uStack_a40 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_a30,uVar7);
  puVar10 = (undefined8 *)operator_new(0x88);
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar10);
    *puVar10 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar6 = puVar10;
  }
  puVar6[9] = local_a48;
  puVar6[10] = uStack_a40;
  *(undefined1 *)(puVar6 + 0xb) = local_a38;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar6 + 0xc,&local_a30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a30);
  lVar8 = SCanvas::FArguments::FArguments(local_4b8);
  *(undefined1 *)(lVar8 + 0x78) = (undefined1)local_c38;
  *(undefined1 *)(lVar8 + 0x79) = local_c38._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,local_c30);
  uVar7 = FUN_1417f9c30(puVar6,&local_868);
  iVar3 = *(int *)(lVar8 + 0x110);
  *(int *)(lVar8 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar8 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x108,iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar8 + 0x108) + (longlong)iVar3 * 8) = uVar7;
  plVar9 = (longlong *)operator_new(0x248);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  local_bb0 = plVar9 + 2;
  local_ba8 = plVar9;
  FUN_14044f790(&local_bb0,local_bb0);
  local_ba0 = &local_c67;
  FName::FName(&local_aa0,"SVerticalBox",1);
  plVar9[0x26] = local_aa0;
  puVar6 = (undefined8 *)FUN_1417fd340(&local_bb0,local_7b0,lVar8);
  local_c20 = *puVar6;
  local_c18 = (longlong *)puVar6[1];
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c18 + 1) = (int)local_c18[1] + 1;
    UNLOCK();
  }
  plVar9 = DAT_1469eaf38;
  uVar4 = DAT_1464b9eec;
  local_a78 = DAT_1464b9eec;
  local_9e0 = param_1[0x8d] + 0xe38;
  local_930 = 0;
  local_910 = 0;
  local_908 = 0;
  local_9d0 = 0;
  local_9c8 = 0;
  local_a70 = 0;
  local_a68 = 0;
  local_940 = _DAT_1464aa6c0;
  uStack_938 = _DAT_1464aa6c8;
  local_928 = 0;
  plStack_920 = (longlong *)0x0;
  local_918 = 1;
  local_9d8 = 1;
  local_a77 = 1;
  lVar8 = SOverlay::FArguments::FArguments(local_5d8);
  *(undefined1 *)(lVar8 + 0x78) = uVar4;
  *(undefined1 *)(lVar8 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar8 + 0x80,&local_a70);
  local_b30 = (longlong *)FUN_1417e5b60();
  local_b38 = local_b30 + 2;
  FUN_14044f790(&local_b38);
  plVar2 = local_b38;
  local_b28 = &local_c66;
  FName::FName(&local_a98,"SOverlay",1);
  local_c88 = &local_c38;
  plVar2[0x24] = local_a98;
  uVar7 = (**(code **)(*plVar9 + 0xe8))(plVar9,local_7c0,&local_9c0,&local_8f8);
  uVar13 = FUN_14185c7c0();
  uVar7 = FUN_140801a00(uVar13,uVar7);
  uVar13 = FUN_14185c7c0();
  uVar13 = FUN_140801a00(uVar13,&local_c10);
  uVar14 = FUN_14185c7c0();
  uVar14 = FUN_140801a00(uVar14,&local_c20);
  local_c88 = &local_c38;
  uVar15 = (**(code **)(*plVar9 + 0xe8))(plVar9,local_7d0,&local_9e0,&local_940);
  uVar16 = FUN_14185c7c0();
  uVar15 = FUN_140801a00(uVar16,uVar15);
  local_c88 = &local_c38;
  uVar16 = (**(code **)(*plVar9 + 0xe8))(plVar9,local_768,&local_9a0,&local_8b8);
  uVar17 = FUN_14185c7c0();
  uVar16 = FUN_140801a00(uVar17,uVar16);
  uVar16 = SOverlay::FArguments::operator+(lVar8,uVar16);
  uVar15 = SOverlay::FArguments::operator+(uVar16,uVar15);
  uVar14 = SOverlay::FArguments::operator+(uVar15,uVar14);
  uVar13 = SOverlay::FArguments::operator+(uVar14,uVar13);
  uVar7 = SOverlay::FArguments::operator+(uVar13,uVar7);
  plVar2 = local_a50;
  uVar13 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_b38,local_a50 + 0xa7);
  puVar6 = (undefined8 *)FUN_1417fcf70(uVar13,local_878,uVar7);
  plVar9 = (longlong *)puVar6[1];
  local_a00 = *puVar6;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_9f8 = plVar9;
  TSlotBase<FSimpleSlot>::operator[](plVar2 + 0x43,&local_a00);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_870 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_870 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_870)(local_870);
      LOCK();
      piVar1 = (int *)((longlong)local_870 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_870 + 8))(local_870,1);
      }
    }
  }
  plVar9 = local_b30;
  if (local_b30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b30)(local_b30);
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
  if (local_4d0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_5d8);
  if (local_760 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_760 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_760)(local_760);
      LOCK();
      piVar1 = (int *)((longlong)local_760 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_760 + 8))(local_760,1);
      }
    }
  }
  if (local_7c8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_7c8 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_7c8)(local_7c8);
      LOCK();
      piVar1 = (int *)((longlong)local_7c8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_7c8 + 8))(local_7c8,1);
      }
    }
  }
  if (local_7b8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_7b8 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_7b8)(local_7b8);
      LOCK();
      piVar1 = (int *)((longlong)local_7b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_7b8 + 8))(local_7b8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_910);
  plVar9 = plStack_920;
  if (plStack_920 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_920 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_920)(plStack_920);
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
  plVar9 = local_c18;
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c18 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c18)(local_c18);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c18 + 8))(local_c18,1);
      }
    }
  }
  if (local_7a8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_7a8 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_7a8)(local_7a8);
      LOCK();
      piVar1 = (int *)((longlong)local_7a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_7a8 + 8))(local_7a8,1);
      }
    }
  }
  plVar9 = local_ba8;
  if (local_ba8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_ba8 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_ba8)(local_ba8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_ba8 + 8))(local_ba8,1);
      }
    }
  }
  if (local_3b0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_4b8);
  if (local_c40 == 0) {
LAB_141808a4d:
    if (local_c48 != (longlong *)0x0) {
      FMemory::Free(local_c48);
    }
  }
  else if (local_c48 != (longlong *)0x0) {
    (**(code **)(*local_c48 + 0x28))(local_c48,0);
    if (local_c48 != (longlong *)0x0) {
      local_c48 = (longlong *)FMemory::Realloc(local_c48,0,0);
    }
    local_c40 = 0;
    goto LAB_141808a4d;
  }
  plVar9 = local_c08;
  if (local_c08 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c08 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c08)(local_c08);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c08 + 8))(local_c08,1);
      }
    }
  }
  if (local_798 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_798 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_798)(local_798);
      LOCK();
      piVar1 = (int *)((longlong)local_798 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_798 + 8))(local_798,1);
      }
    }
  }
  plVar9 = local_b78;
  if (local_b78 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b78 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b78)(local_b78);
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
  plVar9 = local_b08;
  if (local_b08 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b08 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b08)(local_b08);
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
  if (local_290 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_398);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_8c8);
  plVar9 = local_8d8;
  if (local_8d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_8d8 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_8d8)(local_8d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_888);
  plVar9 = local_898;
  if (local_898 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_898 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_898)(local_898);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_990);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c30);
LAB_141809079:
  plVar9 = plStack_c50;
  if (plStack_c50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_c50 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_c50)(plStack_c50);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_c50 + 8))(plStack_c50,1);
      }
    }
  }
  return;
}



// FUNCTION 1418090f0 FUN_1418090f0 body=237 status=ok
// SIG undefined FUN_1418090f0(void)

undefined8 FUN_1418090f0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = (longlong *)0x0;
  plVar7 = plVar8;
  plVar9 = plVar8;
  if (0 < (int)param_1[1]) {
    do {
      lVar2 = *param_1;
      plVar5 = *(longlong **)((longlong)plVar9 + lVar2 + 8);
      plVar4 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar10 = iVar3 == 0;
        if (bVar10) {
          *(int *)(plVar5 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (plVar4 = plVar8, !bVar10) {
          LOCK();
          bVar10 = iVar3 == (int)plVar5[1];
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar4 = plVar5;
            if (((plVar5 != (longlong *)0x0) &&
                (lVar2 = *(longlong *)((longlong)plVar9 + lVar2), lVar2 != 0)) &&
               (lVar2 == *param_2)) {
              bVar10 = true;
              goto LAB_14180915a;
            }
            break;
          }
          LOCK();
          iVar3 = (int)plVar5[1];
          bVar10 = iVar3 == 0;
          if (bVar10) {
            *(int *)(plVar5 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
      bVar10 = false;
      plVar5 = plVar4;
LAB_14180915a:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
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
      if (bVar10) {
        return 1;
      }
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
      plVar9 = plVar9 + 2;
    } while ((int)uVar6 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 1418091e0 FUN_1418091e0 body=219 status=ok
// SIG undefined FUN_1418091e0(void)

undefined8 FUN_1418091e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0x130)) {
    lVar5 = 0;
    lVar6 = lVar5;
    lVar7 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar7 = param_1 + 8;
    }
    do {
      if (*(longlong *)(lVar5 + 0x38 + lVar7) == *param_2) {
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
        return 1;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < *(int *)(param_1 + 0x130));
  }
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
  return 0;
}



// FUNCTION 1418092c0 FUN_1418092c0 body=227 status=ok
// SIG undefined FUN_1418092c0(void)

undefined8 * FUN_1418092c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_2 = *param_1;
  lVar1 = param_1[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_2[2] = *param_3;
  param_2[3] = param_3[1];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 2);
  *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)((longlong)param_3 + 0x14);
  param_2[5] = param_3[3];
  param_2[6] = param_3[4];
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_3 + 5);
  *(undefined1 *)((longlong)param_2 + 0x3c) = *(undefined1 *)((longlong)param_3 + 0x2c);
  *(undefined1 *)((longlong)param_2 + 0x3d) = *(undefined1 *)((longlong)param_3 + 0x2d);
  param_2[8] = param_3[6];
  lVar1 = param_3[7];
  param_2[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_2[10] = param_3[8];
  uVar2 = param_1[0xc];
  param_2[0xb] = param_1[0xb];
  param_2[0xc] = uVar2;
  uVar2 = param_1[0xe];
  param_2[0xd] = param_1[0xd];
  param_2[0xe] = uVar2;
  uVar2 = param_1[0x10];
  param_2[0xf] = param_1[0xf];
  param_2[0x10] = uVar2;
  param_2[0x11] = param_1[0x11];
  uVar2 = param_1[0x13];
  param_2[0x12] = param_1[0x12];
  param_2[0x13] = uVar2;
  uVar2 = param_1[0x15];
  param_2[0x14] = param_1[0x14];
  param_2[0x15] = uVar2;
  uVar2 = param_1[0x17];
  param_2[0x16] = param_1[0x16];
  param_2[0x17] = uVar2;
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1418093b0 CopyRow body=231 status=ok
// SIG undefined CopyRow(void)

void FSlateTextureAtlas::CopyRow(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Dst;
  void *_Src;
  void *_Dst_00;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)((longlong)param_2 + 0x1c);
  iVar4 = *(int *)((longlong)param_2 + 0x14);
  lVar7 = param_2[4];
  lVar6 = param_2[1];
  _Src = (void *)((ulonglong)(uint)((int)param_2[2] * iVar1 * iVar3) + *param_2);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)(((uint)(iVar2 != 0) + iVar4 * (int)lVar7) * iVar1) + lVar6),_Src,
             (ulonglong)(uint)(iVar1 * iVar3));
  if (iVar2 != 0) {
    uVar5 = *(uint *)(param_1 + 0x30);
    _Dst = (void *)((ulonglong)(uVar5 * iVar4 * (int)lVar7) + lVar6);
    _Dst_00 = (void *)((ulonglong)(((int)param_2[3] + -1) * uVar5) + (longlong)_Dst);
    if (*(int *)(param_1 + 0x34) == 1) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar5);
      ::_guard_xfg_dispatch_icall_nop
                (_Dst_00,(void *)((ulonglong)((iVar3 + -1) * uVar5) + (longlong)_Src),
                 (ulonglong)*(uint *)(param_1 + 0x30));
    }
    else {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar5);
      ::_guard_xfg_dispatch_icall_nop(_Dst_00,0,(ulonglong)*(uint *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 1418094a0 FUN_1418094a0 body=135074 status=FAIL
// SIG undefined FUN_1418094a0(void)
/* DECOMPILE FAILED */

// FUNCTION 14182a450 FUN_14182a450 body=211 status=ok
// SIG undefined FUN_14182a450(void)

undefined8 * FUN_14182a450(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  puVar4 = (undefined8 *)0x0;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR__scalar_deleting_destructor__144d4fbf8;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[0xb] = *param_2;
    lVar1 = param_2[1];
    puVar2[0xc] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar2;
    puVar4 = puVar3;
  }
  *param_1 = puVar2;
  param_1[1] = puVar4;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar2,puVar2);
  return param_1;
}



// FUNCTION 14182a530 FUN_14182a530 body=64 status=ok
// SIG undefined FUN_14182a530(void)

void FUN_14182a530(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144d50248;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 14182a570 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d50130;
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



// FUNCTION 14182a5d0 FUN_14182a5d0 body=93 status=ok
// SIG undefined FUN_14182a5d0(void)

void FUN_14182a5d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d50288;
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
    *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(param_1 + 0x28);
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 14182a630 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d50170;
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



// FUNCTION 14182a690 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d502c8;
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



// FUNCTION 14182a6f0 FUN_14182a6f0 body=842 status=ok
// SIG undefined FUN_14182a6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14182a6f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [16];
  longlong local_278;
  longlong *plStack_270;
  longlong local_268;
  longlong *plStack_260;
  longlong *local_258;
  longlong *local_250;
  undefined1 *local_248;
  longlong local_240;
  longlong local_238;
  longlong *plStack_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong *plStack_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f8 [464];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  (**(code **)(*param_1 + 0x20))(param_1,&local_238);
  if (local_238 != 0) {
    lVar5 = FUN_1417e8330(local_1f8);
    *(undefined4 *)(lVar5 + 0x108) = 4;
    *(undefined2 *)(lVar5 + 0x16b) = 0x101;
    *(undefined1 *)(lVar5 + 0x16a) = 1;
    *(undefined4 *)(lVar5 + 0x160) = 1;
    *(undefined1 *)(lVar5 + 0x16d) = 0;
    *(undefined4 *)(lVar5 + 0x170) = 0;
    plVar6 = (longlong *)operator_new(0x600);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_144d503d8;
      if (plVar6 != (longlong *)0xfffffffffffffff0) {
        FUN_1417f4890();
      }
    }
    local_258 = plVar6 + 2;
    local_250 = plVar6;
    FUN_14044f790(&local_258,local_258);
    local_248 = local_288;
    FName::FName(&local_240,"SWindow",1);
    plVar6[0x26] = local_240;
    FUN_1417fd440(&local_258,&local_268,lVar5);
    plVar6 = local_250;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_250 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
    FUN_1417f5da0(local_1f8);
    *(undefined4 *)(local_268 + 0x344) = 0x3f800000;
    local_278 = local_268;
    plStack_270 = plStack_260;
    if (plStack_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_260 + 1) = (int)plStack_260[1] + 1;
      UNLOCK();
    }
    plVar6 = param_1 + 4;
    if (plVar6 != &local_278) {
      *plVar6 = local_268;
      local_278 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 5,&plStack_270);
    }
    plVar1 = plStack_270;
    plVar7 = plStack_260;
    if (plStack_270 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_270 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_270)(plStack_270);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar7 = plStack_260;
        if (iVar4 == 1) {
          (**(code **)(*plStack_270 + 8))(plStack_270,1);
          plVar7 = plStack_260;
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    local_218 = local_238;
    plStack_210 = plStack_230;
    if (plStack_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_230 + 1) = (int)plStack_230[1] + 1;
      UNLOCK();
    }
    FUN_14185a760(*plVar6,&local_218);
    plVar1 = DAT_1469eaf38;
    local_228 = *plVar6;
    local_220 = param_1[5];
    if (local_220 != 0) {
      LOCK();
      *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,local_208,&local_228,1);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_200 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)local_200 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
  }
  if (plStack_230 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_230 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_230)(plStack_230);
      LOCK();
      piVar2 = (int *)((longlong)plStack_230 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_230 + 8))(plStack_230,1);
      }
    }
  }
  return;
}



// FUNCTION 14182aa40 CreateRenderBatches body=56 status=ok
// SIG undefined CreateRenderBatches(void)

void FSlateBatchData::CreateRenderBatches(longlong *param_1,undefined8 param_2)

{
  undefined4 local_res8 [4];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  local_res8[0] = 0;
  Merge(param_1,param_2,local_res18,local_res8);
  if (*param_1 != 0) {
    *(longlong **)(*param_1 + 0x28) = param_1 + 10;
  }
  return;
}



// FUNCTION 14182aa80 DestroyCursorDecoratorWindow body=142 status=ok
// SIG undefined DestroyCursorDecoratorWindow(void)

void FDragDropOperation::DestroyCursorDecoratorWindow(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_141856430();
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x20) != &local_18) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_10);
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



// FUNCTION 14182ab10 DestroyObject body=78 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FStandaloneCompositeFont>::DestroyObject
               (longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0x18) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,(undefined8 *)(param_1 + 0x10));
  }
  TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
            (param_1 + 0x48);
  TArray<FTypefaceEntry,FDefaultAllocator>::~TArray<FTypefaceEntry,FDefaultAllocator>
            (param_1 + 0x30);
  TArray<FTypefaceEntry,FDefaultAllocator>::~TArray<FTypefaceEntry,FDefaultAllocator>
            (param_1 + 0x20);
  return;
}



// FUNCTION 14182ab60 FUN_14182ab60 body=41 status=ok
// SIG undefined FUN_14182ab60(void)

void FUN_14182ab60(longlong param_1)

{
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(param_1 + 0x58);
  TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  FUN_1417f52b0(param_1 + 0x18);
  return;
}



// FUNCTION 14182ab90 FUN_14182ab90 body=14 status=ok
// SIG undefined FUN_14182ab90(void)

void FUN_14182ab90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 14182aba0 FUN_14182aba0 body=9 status=ok
// SIG undefined FUN_14182aba0(void)

void FUN_14182aba0(longlong param_1)

{
  FFreeTypeFace::~FFreeTypeFace(param_1 + 0x10);
  return;
}



// FUNCTION 14182abb0 DestroyObject body=41 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FShapedGlyphSequence>::DestroyObject
               (longlong param_1)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x70);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x58);
  FUN_1417f50c0(param_1 + 0x10);
  return;
}



// FUNCTION 14182abe0 FUN_14182abe0 body=9 status=ok
// SIG undefined FUN_14182abe0(void)

void FUN_14182abe0(longlong param_1)

{
  FUN_1417f7e40(param_1 + 0x10);
  return;
}



// FUNCTION 14182abf0 FUN_14182abf0 body=92 status=ok
// SIG undefined FUN_14182abf0(void)

void FUN_14182abf0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x248);
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
  FUN_1417f5640(param_1 + 0x228);
  *(undefined ***)(param_1 + 0x218) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1 + 0x10);
  return;
}



// FUNCTION 14182ac50 DestroyObject body=77 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<SScrollPanel>::DestroyObject
               (longlong param_1)

{
  FUN_14182b150(param_1 + 0x228,0);
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x218) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1 + 0x10);
  return;
}



// FUNCTION 14182aca0 FUN_14182aca0 body=9 status=ok
// SIG undefined FUN_14182aca0(void)

void FUN_14182aca0(longlong param_1)

{
  FUN_1417f87d0(param_1 + 0x10);
  return;
}



// FUNCTION 14182acb0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FNetworkObjectInfo,SharedPointerInternals::DefaultDeleter<FNetworkObjectInfo>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1417f6430(lVar1);
    FMemory::operator_delete(lVar1,200);
    return;
  }
  return;
}



// FUNCTION 14182ace0 FUN_14182ace0 body=14 status=ok
// SIG undefined FUN_14182ace0(void)

void FUN_14182ace0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10),0x10);
  return;
}



// FUNCTION 14182acf0 FUN_14182acf0 body=14 status=ok
// SIG undefined FUN_14182acf0(void)

void FUN_14182acf0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10),0xe);
  return;
}



// FUNCTION 14182ad00 DestroyObject body=76 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateFontMeasureCache,SharedPointerInternals::DefaultDeleter<FSlateFontMeasureCache>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FLRUStringCache::Empty(lVar1);
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1);
    FMemory::operator_delete(lVar1,0x68);
    return;
  }
  return;
}



// FUNCTION 14182ad50 FUN_14182ad50 body=47 status=ok
// SIG undefined FUN_14182ad50(void)

void FUN_14182ad50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1417f81e0(lVar1);
    FMemory::operator_delete(lVar1,0x130);
    return;
  }
  return;
}



// FUNCTION 14182ad80 FUN_14182ad80 body=48 status=ok
// SIG undefined FUN_14182ad80(void)

void FUN_14182ad80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 8);
    FMemory::operator_delete(lVar1,0x28);
    return;
  }
  return;
}



// FUNCTION 14182adb0 FUN_14182adb0 body=20 status=ok
// SIG undefined FUN_14182adb0(void)

void FUN_14182adb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1417fd730(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 14182add0 FUN_14182add0 body=20 status=ok
// SIG undefined FUN_14182add0(void)

void FUN_14182add0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FHittestGrid::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 14182adf0 DestroyObject body=65 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FShapedGlyphSequence,SharedPointerInternals::DefaultDeleter<FShapedGlyphSequence>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (lVar1 + 0x60);
    TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
    ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(lVar1 + 0x48);
    FUN_1417f50c0(lVar1);
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 14182ae40 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateDrawLayer,SharedPointerInternals::DefaultDeleter<FSlateDrawLayer>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FSlateDrawLayer::~FSlateDrawLayer(lVar1);
    FMemory::operator_delete(lVar1,0x8f0);
    return;
  }
  return;
}



// FUNCTION 14182ae70 DestroyObject body=79 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateDrawLayerHandle,SharedPointerInternals::DefaultDeleter<FSlateDrawLayerHandle>_>
     ::DestroyObject(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    FMemory::operator_delete(lVar3,0x18);
    return;
  }
  return;
}



// FUNCTION 14182aec0 FUN_14182aec0 body=14 status=ok
// SIG undefined FUN_14182aec0(void)

void FUN_14182aec0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10),8);
  return;
}



// FUNCTION 14182aed0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FWidgetPath,SharedPointerInternals::DefaultDeleter<FWidgetPath>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140458830(lVar1);
    FMemory::operator_delete(lVar1,0x160);
    return;
  }
  return;
}



// FUNCTION 14182af10 DestroyWindowImmediately body=20 status=ok
// SIG undefined DestroyWindowImmediately(void)

void SWindow::DestroyWindowImmediately(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x498) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014182af1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x30))();
    return;
  }
  return;
}



// FUNCTION 14182af30 DetatchParentFromContent body=26 status=ok
// SIG undefined DetatchParentFromContent(void)

void FSlotBase::DetatchParentFromContent(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != DAT_1469eb218) {
    FUN_141806420(*(longlong *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 14182af50 Disconnect body=11 status=ok
// SIG undefined Disconnect(void)

void FSlateRenderDataHandle::Disconnect(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14182af60 FUN_14182af60 body=157 status=ok
// SIG undefined FUN_14182af60(void)

undefined8 FUN_14182af60(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *local_18;
  longlong *local_10;
  
  FUN_141837aa0(param_1,&local_18,param_2);
  if (local_18 != (undefined8 *)0x0) {
    iVar4 = FT_Get_Char_Index(*local_18,param_3);
    if (iVar4 != 0) {
      uVar5 = 1;
      goto LAB_14182af9c;
    }
  }
  uVar5 = 0;
LAB_14182af9c:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 14182b000 FUN_14182b000 body=82 status=ok
// SIG undefined FUN_14182b000(void)

bool FUN_14182b000(void)

{
  char cVar1;
  DWORD DVar2;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      DVar2 = GetCurrentThreadId();
      return DVar2 == DAT_1468c21c8;
    }
  }
  return DAT_1468c21c8 == 0;
}



// FUNCTION 14182b060 FUN_14182b060 body=238 status=ok
// SIG undefined FUN_14182b060(void)

void FUN_14182b060(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)*param_1;
  for (iVar7 = *(int *)(param_1 + 1); iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = (undefined8 *)*plVar8;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 8);
    *puVar4 = &PTR__scalar_deleting_destructor__144d4edf0;
    if (puVar4[2] != DAT_1469eb218) {
      FUN_141806420(puVar4[2],puVar4[1]);
    }
    plVar5 = (longlong *)puVar4[3];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    FMemory::Free(*plVar8);
    plVar8 = plVar8 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14182b150 FUN_14182b150 body=284 status=ok
// SIG undefined FUN_14182b150(void)

void FUN_14182b150(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)*param_1;
  for (iVar7 = *(int *)(param_1 + 1); iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = (undefined8 *)*plVar8;
    *puVar4 = &PTR__scalar_deleting_destructor__144042bf8;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 0xf);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 0xc);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar4 + 7);
    *puVar4 = &PTR__scalar_deleting_destructor__144d4edf0;
    if (puVar4[2] != DAT_1469eb218) {
      FUN_141806420(puVar4[2],puVar4[1]);
    }
    plVar5 = (longlong *)puVar4[3];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    FMemory::Free(*plVar8);
    plVar8 = plVar8 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14182b270 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14182b2f0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>,TDefaultMapHashableKeyFuncs<FFreeTypeAdvanceCache::FCachedAdvanceKey,long,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 14182b3b0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>,TDefaultMapHashableKeyFuncs<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14182b430 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_>,TDefaultMapHashableKeyFuncs<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 14182b4f0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14182b570 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14182b5f0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>,FSlateFontKeyFuncs<TSharedRef<FCharacterList,0>_>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,0>_>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14182b670 Empty body=198 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      puVar2 = (undefined8 *)(*local_38 + (longlong)local_1c * 0x18 + 8);
      TDefaultDelete<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>::operator()
                (puVar2,*puVar2);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 14182b740 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14182b811;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14182b811:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x78 + *param_1 + 0x60) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14182b8e0 Empty body=396 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14182b9b1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14182b9b1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FUN_1417f5b70((longlong)iStack_1c * 0x38 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14182ba70 Empty body=396 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14182bb41;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14182bb41:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FUN_1417f5bf0((longlong)iStack_1c * 0x40 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14182bc00 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14182bcd1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14182bcd1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FUN_1417f5c70((longlong)iStack_1c * 0x90 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14182bd90 FUN_14182bd90 body=481 status=ok
// SIG undefined FUN_14182bd90(void)

void FUN_14182bd90(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_14182be64;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_14182be64:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x38 + *param_1 + 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14182bf80 FUN_14182bf80 body=485 status=ok
// SIG undefined FUN_14182bf80(void)

void FUN_14182bf80(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_14182c054;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_54 = (iStack_50 - iVar9) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_14182c054:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x60 + *param_1 + 0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14182c170 FUN_14182c170 body=410 status=ok
// SIG undefined FUN_14182c170(void)

void FUN_14182c170(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_64 = 1;
  local_68 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar5) goto LAB_14182c234;
      uVar6 = puVar9[lVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
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
LAB_14182c234:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_2c * 0x20 + *param_1 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14182c310 Empty body=536 status=ok
// SIG undefined Empty(void)

void FLRUStringCache::Empty(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  longlong *local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  
  uVar8 = 0;
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar2 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    uVar10 = uVar8;
    uVar7 = uVar8;
    while (uVar3 == 0) {
      iVar5 = (int)uVar10;
      uStack_50 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_50;
      local_68 = iVar5 + 1;
      uVar10 = (ulonglong)local_68;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14182c3df;
      uVar3 = puVar9[(longlong)iVar5 + 1];
    }
    uStack_64 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_58._4_4_ = (uStack_50 - iVar5) + 0x1f;
    if (iVar2 < local_58._4_4_) {
LAB_14182c3df:
      local_58._4_4_ = iVar2;
    }
  }
  uStack_20 = 0xffffffff;
  iStack_1c = local_58._4_4_;
  uStack_18 = uStack_50;
  uStack_30 = local_68;
  uStack_2c = uStack_64;
  uStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar4 = local_58._4_4_ < iVar2;
  local_40 = param_1;
  local_38 = param_1;
  puStack_28 = puVar1;
  local_58 = puVar1;
  if (bVar4) {
    do {
      plVar6 = *(longlong **)(*param_1 + (longlong)iStack_4c * 0x10);
      if (plVar6 != (longlong *)0x0) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar6,0x28);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (0 < (int)*(uint *)(param_1 + 9)) {
    uVar10 = (ulonglong)*(uint *)(param_1 + 9);
    do {
      uVar7 = (longlong)(int)param_1[9] - 1U & uVar8;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)plVar6 + uVar7 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 14182c530 Empty body=342 status=ok
// SIG undefined Empty(void)

void FSlateTextureAtlas::Empty(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28;
  uint local_20;
  uint local_1c;
  
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  puVar4 = (undefined8 *)0x0;
  local_28 = (undefined8 *)0x0;
  local_1c = 0;
  puVar3 = puVar4;
  puVar7 = puVar4;
  puVar8 = puVar4;
  while( true ) {
    uVar1 = (uint)puVar3;
    iVar6 = (int)puVar7;
    if (puVar5 == (undefined8 *)0x0) break;
    local_20 = uVar1 + 1;
    if (iVar6 < (int)local_20) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,puVar3);
      puVar7 = (undefined8 *)(ulonglong)local_1c;
      puVar8 = local_28;
    }
    puVar3 = (undefined8 *)(ulonglong)local_20;
    puVar8[(int)uVar1] = puVar5;
    puVar5 = (undefined8 *)*puVar5;
  }
  for (puVar5 = *(undefined8 **)(param_1 + 0x20); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    iVar2 = (int)puVar3;
    local_20 = iVar2 + 1;
    if ((int)puVar7 < (int)local_20) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,puVar3);
      puVar7 = (undefined8 *)(ulonglong)local_1c;
      puVar8 = local_28;
    }
    puVar3 = (undefined8 *)(ulonglong)local_20;
    iVar6 = (int)puVar7;
    puVar8[iVar2] = puVar5;
    uVar1 = local_20;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar5 = (undefined8 *)
           ((ulonglong)((longlong)(puVar8 + (int)uVar1) + (7 - (longlong)puVar8)) >> 3);
  if (puVar8 + (int)uVar1 < puVar8) {
    puVar5 = puVar4;
  }
  puVar3 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      FMemory::operator_delete(*puVar3,0x28);
      puVar4 = (undefined8 *)((longlong)puVar4 + 1);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar5);
  }
  local_20 = 0;
  if (iVar6 != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_28,0);
    puVar8 = local_28;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
  return;
}



// FUNCTION 14182c690 FUN_14182c690 body=286 status=ok
// SIG undefined FUN_14182c690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14182c690(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)param_1 + 0x14);
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 5);
  *(undefined1 *)((longlong)param_2 + 0x2c) = *(undefined1 *)((longlong)param_1 + 0x2c);
  *(undefined1 *)((longlong)param_2 + 0x2d) = *(undefined1 *)((longlong)param_1 + 0x2d);
  puVar6 = param_2 + 6;
  *puVar6 = param_1[6];
  lVar3 = param_1[7];
  param_2[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_2[8] = param_1[8];
  uStack_30 = (longlong *)param_3[1];
  local_38 = *param_3;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_30 + 0xc) = *(int *)((longlong)uStack_30 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_38 != puVar6) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar4 = *puVar6;
    plVar5 = (longlong *)param_2[7];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar6 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_2 + 0x34) = local_38._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_30._4_4_;
    local_38 = uVar4;
    uStack_30 = plVar5;
  }
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)uStack_30 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*uStack_30 + 8))(uStack_30,1);
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x2c) = param_5;
  *(undefined1 *)((longlong)param_2 + 0x2d) = param_6;
  param_2[8] = param_4;
  return param_2;
}



// FUNCTION 14182c7b0 EnableToolTipForceField body=11 status=ok
// SIG undefined EnableToolTipForceField(void)

void SWidget::EnableToolTipForceField(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xbf;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | param_2 << 6;
  return;
}



// FUNCTION 14182c7c0 FUN_14182c7c0 body=119 status=ok
// SIG undefined FUN_14182c7c0(void)

void FUN_14182c7c0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x498) + 0xa0))();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x580)) {
    lVar2 = 0;
    do {
      FUN_14182c7c0(*(undefined8 *)(*(longlong *)(param_1 + 0x578) + lVar2),param_2);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (iVar1 < *(int *)(param_1 + 0x580));
  }
  return;
}



// FUNCTION 14182c840 EndDeferredGroup body=8 status=ok
// SIG undefined EndDeferredGroup(void)

void FSlateWindowElementList::EndDeferredGroup(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa38) = 1;
  return;
}



// FUNCTION 14182c850 EnsureSlateTickDuringAnimation body=69 status=ok
// SIG undefined EnsureSlateTickDuringAnimation(void)

undefined8 FCurveSequence::EnsureSlateTickDuringAnimation(longlong param_1)

{
  double extraout_XMM0_Qa;
  
  if ((*(byte *)(param_1 + 0x54) & 4) != 0) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x54) & 2) == 0) &&
     ((**(code **)(*DAT_1469eaf38 + 0x40))(),
     (double)*(float *)(param_1 + 0x50) < extraout_XMM0_Qa - *(double *)(param_1 + 0x40))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14182c8a0 EnterResponsiveMode body=12 status=ok
// SIG undefined EnterResponsiveMode(void)

undefined4 * FSlateThrottleManager::EnterResponsiveMode(longlong param_1,undefined4 *param_2)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14182c8b0 EnumerateVisualGlyphsInSourceRange body=492 status=ok
// SIG undefined EnumerateVisualGlyphsInSourceRange(void)

undefined8
FShapedGlyphSequence::EnumerateVisualGlyphsInSourceRange
          (longlong *param_1,int param_2,int param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  int local_res18 [2];
  undefined8 *local_res20;
  
  if (param_2 == param_3) {
    return 2;
  }
  piVar6 = (int *)0x0;
  iVar3 = param_2 - (int)param_1[0xb];
  piVar10 = piVar6;
  if ((-1 < iVar3) && (iVar3 < (int)param_1[0xd])) {
    piVar10 = (int *)(param_1[0xc] + (longlong)iVar3 * 0x18);
  }
  iVar3 = (param_3 - (int)param_1[0xb]) + -1;
  if ((-1 < iVar3) && (iVar3 < (int)param_1[0xd])) {
    piVar6 = (int *)(param_1[0xc] + (longlong)iVar3 * 0x18);
  }
  if (piVar10 != (int *)0x0) {
    iVar3 = *piVar10;
    if (iVar3 != -1) {
      if (((piVar6 == (int *)0x0) || (*piVar6 == -1)) &&
         (lVar5 = (longlong)iVar3 * 0x68 + *param_1,
         (uint)*(byte *)(lVar5 + 0x21) + *(int *)(lVar5 + 0x14) == param_3)) {
        piVar6 = piVar10;
      }
      if ((piVar6 != (int *)0x0) && (iVar8 = *piVar6, iVar8 != -1)) {
        if (iVar8 < iVar3) {
          iVar9 = iVar3;
          if (0 < piVar10[4]) {
            iVar9 = *(int *)(*(longlong *)(piVar10 + 2) + -4 + (longlong)piVar10[4] * 4);
          }
        }
        else {
          iVar9 = iVar8;
          iVar8 = iVar3;
          if (0 < piVar6[4]) {
            iVar9 = *(int *)(*(longlong *)(piVar6 + 2) + -4 + (longlong)piVar6[4] * 4);
          }
        }
        bVar12 = (int)param_1[0xb] == param_2;
        lVar5 = (longlong)iVar8;
        bVar13 = (int)param_1[0xb] + *(int *)((longlong)param_1 + 0x5c) == param_3;
        if (lVar5 <= iVar9) {
          lVar11 = lVar5 * 0x68;
          local_res20 = param_4;
          bVar1 = bVar13;
          do {
            lVar7 = *param_1 + lVar11;
            if ((!bVar12) || (!bVar13)) {
              if ((!bVar12) && (*(int *)(lVar7 + 0x14) == param_2)) {
                bVar12 = true;
              }
              if ((!bVar13) &&
                 (bVar13 = bVar1, (uint)*(byte *)(lVar7 + 0x21) + *(int *)(lVar7 + 0x14) == param_3)
                 ) {
                bVar1 = true;
                bVar13 = true;
              }
            }
            local_res18[0] = iVar8;
            cVar2 = (*(code *)*local_res20)(local_res20[1],lVar7,local_res18);
            if (cVar2 == '\0') {
              return 1;
            }
            iVar8 = iVar8 + 1;
            lVar5 = lVar5 + 1;
            lVar11 = lVar11 + 0x68;
          } while (lVar5 <= iVar9);
        }
        if ((bVar12) && (bVar13)) {
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
        }
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14182caa0 Execute body=62 status=ok
// SIG undefined Execute(void)

undefined1 *
TBaseRawMethodDelegateInstance<1,SWindow,EVisibility___cdecl(void)>::Execute
          (longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined1 *)
           (**(code **)(param_1 + 0x10))
                     ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),
                      local_res8);
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 14182cae0 FUN_14182cae0 body=212 status=ok
// SIG undefined FUN_14182cae0(void)

undefined8 * FUN_14182cae0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_38 [24];
  code *local_20;
  undefined8 uStack_18;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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
          plVar8 = *(longlong **)(param_1 + 8);
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
  local_20 = *(code **)(param_1 + 0x18);
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined8 *)
           (*local_20)((longlong)(int)uStack_18 + (longlong)plVar8,local_38,
                       *(undefined1 *)(param_1 + 0x28));
  uVar3 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar3;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14182cbc0 FUN_14182cbc0 body=263 status=ok
// SIG undefined FUN_14182cbc0(void)

undefined8 FUN_14182cbc0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_30 [32];
  longlong *local_10;
  
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
  uVar5 = (**(code **)(param_1 + 0x18))
                    ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar7,local_30);
  FUN_1417ee5f0(param_2,uVar5);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
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



// FUNCTION 14182ccd0 FUN_14182ccd0 body=196 status=ok
// SIG undefined FUN_14182ccd0(void)

undefined1 FUN_14182ccd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
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
  uVar4 = (**(code **)(param_1 + 0x18))
                    ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar6);
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
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 14182cda0 ExecuteActiveTimers body=341 status=ok
// SIG undefined ExecuteActiveTimers(void)

void SWidget::ExecuteActiveTimers(longlong param_1,double param_2,undefined4 param_3)

{
  float *pfVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar4 = 0;
    do {
      pfVar1 = *(float **)(lVar4 + *(longlong *)(param_1 + 0x88));
      if (*(char *)(pfVar1 + 8) == '\0') {
LAB_14182ceb9:
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 0x10;
      }
      else {
        *(undefined1 *)(pfVar1 + 8) = 0;
        if (((pfVar1[4] != 0.0) && (*(longlong **)(pfVar1 + 2) != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(**(longlong **)(pfVar1 + 2) + 0x18))(), cVar2 != '\0')) {
          if ((0.0 < *pfVar1) && (dVar6 = *(double *)(pfVar1 + 6), dVar6 <= param_2)) {
            do {
              dVar6 = dVar6 + (double)*pfVar1;
            } while (dVar6 <= param_2);
            *(double *)(pfVar1 + 6) = dVar6;
          }
          if (pfVar1[4] == 0.0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            plVar3 = *(longlong **)(pfVar1 + 2);
          }
          cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3);
          if (cVar2 == '\x01') goto LAB_14182ceb9;
        }
        if (-1 < iVar5) {
          if (*(int *)(param_1 + 0x90) <= iVar5) {
            return;
          }
          if (DAT_1469eaf38 != 0) {
            FUN_14185f4f0(DAT_1469eaf38,(longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x88));
          }
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_1 + 0x88,iVar5,1,1);
        }
      }
    } while (iVar5 < *(int *)(param_1 + 0x90));
  }
  return;
}



// FUNCTION 14182cf00 FUN_14182cf00 body=1099 status=ok
// SIG undefined FUN_14182cf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_14182cf00(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,float *param_5
             )

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined4 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  char local_80;
  void *local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  plVar9 = *(longlong **)(param_1 + 0x18);
  plVar8 = plVar9;
  local_178 = param_2;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    iVar12 = (int)plVar9[1];
    bVar13 = iVar12 == 0;
    if (bVar13) {
      *(int *)(plVar9 + 1) = 0;
      iVar12 = 0;
    }
    UNLOCK();
    while (plVar8 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar12 == (int)plVar9[1];
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar12 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar8 = plVar9;
        if ((plVar9 != (longlong *)0x0) && (lVar5 = *(longlong *)(param_1 + 0x10), lVar5 != 0)) {
          if (*(longlong *)(lVar5 + 0x120) != DAT_1469eb0b8) {
            FUN_14185c5d0(lVar5,*(undefined4 *)(param_1 + 0x70));
          }
          local_148 = *(undefined8 *)(param_1 + 0x20);
          local_130 = *(undefined4 *)(param_1 + 0x38);
          local_12c = *(undefined4 *)(param_1 + 0x3c);
          local_140 = *(undefined8 *)(param_1 + 0x28);
          local_138 = *(undefined4 *)(param_1 + 0x30);
          local_134 = *(undefined1 *)(param_1 + 0x34);
          local_11c = *(undefined1 *)(param_1 + 0x4c);
          local_11b = *(undefined1 *)(param_1 + 0x4d);
          local_118 = *(undefined8 *)(param_1 + 0x50);
          local_110 = *(longlong **)(param_1 + 0x58);
          if (local_110 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
            UNLOCK();
          }
          local_108 = *(undefined8 *)(param_1 + 0x60);
          local_128 = param_3;
          local_120 = param_4;
          if (*(char *)(param_1 + 0xf0) != '\0') {
            FSlateClippingState::FSlateClippingState(local_a8,param_1 + 0xb0);
            iVar12 = *(int *)(param_2 + 0x990);
            uVar6 = *(undefined4 *)(param_2 + 0x9a0);
            *(int *)(param_2 + 0x990) = iVar12 + 1;
            if (*(int *)(param_2 + 0x994) < iVar12 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(param_2 + 0x988),iVar12);
            }
            *(undefined4 *)(*(longlong *)(param_2 + 0x988) + (longlong)iVar12 * 4) = uVar6;
            iVar12 = *(int *)(param_2 + 0x9a0);
            *(int *)(param_2 + 0x9a0) = iVar12 + 1;
            if (*(int *)(param_2 + 0x9a4) < iVar12 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(param_2 + 0x998,iVar12);
            }
            puVar7 = (undefined1 *)((longlong)iVar12 * 0x40 + *(longlong *)(param_2 + 0x998));
            *puVar7 = local_a8[0];
            puVar7[0x28] = 0;
            if (local_80 != '\0') {
              *(undefined4 *)(puVar7 + 4) = local_a4;
              *(undefined4 *)(puVar7 + 8) = uStack_a0;
              *(undefined4 *)(puVar7 + 0xc) = uStack_9c;
              *(undefined4 *)(puVar7 + 0x10) = uStack_98;
              *(undefined8 *)(puVar7 + 0x14) = local_94;
              *(undefined8 *)(puVar7 + 0x1c) = uStack_8c;
              *(undefined4 *)(puVar7 + 0x24) = local_84;
              puVar7[0x28] = 1;
            }
            puVar2 = (undefined8 *)(puVar7 + 0x30);
            *puVar2 = 0;
            iVar12 = (int)local_70;
            *(int *)(puVar7 + 0x38) = iVar12;
            if (iVar12 == 0) {
              *(undefined4 *)(puVar7 + 0x3c) = 0;
            }
            else {
              TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy
                        (puVar2,local_70 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar2,local_78,(longlong)iVar12 * 0x24);
            }
            param_2 = local_178;
            if (local_78 != (void *)0x0) {
              FMemory::Free();
              param_2 = local_178;
            }
          }
          fVar3 = *param_5;
          if ((fVar3 == 0.0) && (param_5[1] == 0.0)) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          puVar10 = (undefined4 *)(param_1 + 0x68);
          local_188 = param_1 + 0xfc;
          if (bVar13) {
            local_180 = *(undefined1 *)(param_1 + 300);
            pfVar11 = (float *)(param_1 + 0xa0);
          }
          else {
            local_168 = fVar3 + *(float *)(param_1 + 0xa8);
            uStack_d4 = *(undefined4 *)(param_1 + 0x7c);
            uStack_d0 = *(undefined4 *)(param_1 + 0x80);
            local_158 = *(undefined4 *)(param_1 + 0x84);
            local_e8 = *puVar10;
            uStack_e4 = *(undefined4 *)(param_1 + 0x6c);
            uStack_e0 = *(undefined4 *)(param_1 + 0x70);
            local_170 = fVar3 + *(float *)(param_1 + 0xa0);
            local_16c = param_5[1] + *(float *)(param_1 + 0xa4);
            local_164 = param_5[1] + *(float *)(param_1 + 0xac);
            uVar4 = *(undefined8 *)param_5;
            local_180 = *(undefined1 *)(param_1 + 300);
            local_f4._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
            local_d8 = *(float *)(param_1 + 0x78) + local_f4._4_4_;
            uStack_b4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
            fStack_b8 = (float)*(undefined8 *)(param_1 + 0x98) + local_f4._4_4_;
            uStack_154 = *(undefined4 *)(param_1 + 0x88);
            uStack_150 = *(undefined4 *)(param_1 + 0x8c);
            uStack_14c = *(undefined4 *)(param_1 + 0x90);
            puVar10 = &local_e8;
            fStack_dc = *(float *)(param_1 + 0x74) + (float)uVar4;
            pfVar11 = &local_170;
            fStack_bc = *(float *)(param_1 + 0x94) + (float)uVar4;
            local_f4 = uVar4;
            uStack_cc = local_158;
            local_c8 = uStack_154;
            uStack_c4 = uStack_150;
            uStack_c0 = uStack_14c;
          }
          local_190 = *(undefined4 *)(param_1 + 0xf8);
          local_198 = param_2;
          uVar6 = FUN_14184f6c0(lVar5,&local_148,puVar10,pfVar11);
          if (*(char *)(param_1 + 0xf0) != '\0') {
            *(int *)(param_2 + 0x990) = *(int *)(param_2 + 0x990) + -1;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
          }
          if (local_110 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
          goto LAB_14182cf90;
        }
        break;
      }
      LOCK();
      iVar12 = (int)plVar9[1];
      bVar13 = iVar12 == 0;
      if (bVar13) {
        *(int *)(plVar9 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0xf8);
  plVar9 = plVar8;
LAB_14182cf90:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  }
  return uVar6;
}



// FUNCTION 14182d350 FUN_14182d350 body=597 status=ok
// SIG undefined FUN_14182d350(void)

void FUN_14182d350(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int local_res8;
  
  lVar5 = param_1[10];
  iVar2 = 0;
  iVar8 = 0;
  local_res8 = 0;
  lVar9 = (longlong)(int)param_1[0xb] * 0xf0 + lVar5;
  iVar10 = 0;
  for (; lVar5 != lVar9; lVar5 = lVar5 + 0xf0) {
    if (((*param_1 == *(longlong *)(lVar5 + 0x68)) && (*(int *)(lVar5 + 200) != -1)) &&
       (*(int *)(lVar5 + 0xcc) != -1)) {
      puVar6 = (undefined8 *)((longlong)*(int *)(lVar5 + 200) * 0x10 + param_1[6]);
      plVar4 = (longlong *)((longlong)*(int *)(lVar5 + 0xcc) * 0x10 + param_1[8]);
      if ((*(int *)(puVar6 + 1) != 0) && (lVar3 = plVar4[1], (int)lVar3 != 0)) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(iVar2 + param_2),(void *)*puVar6,
                   (ulonglong)(uint)(*(int *)(puVar6 + 1) * 0x28));
        if ((iVar10 == 0) || (param_4 == '\0')) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(iVar8 + param_3),(void *)*plVar4,(ulonglong)(uint)((int)lVar3 * 4));
          iVar2 = (int)plVar4[1];
        }
        else {
          iVar2 = (int)plVar4[1];
          iVar7 = 0;
          if (0 < iVar2) {
            lVar3 = 0;
            do {
              iVar7 = iVar7 + 1;
              *(int *)(lVar3 + iVar8 + param_3) = *(int *)(lVar3 + *plVar4) + iVar10;
              iVar2 = (int)plVar4[1];
              lVar3 = lVar3 + 4;
            } while (iVar7 < iVar2);
          }
        }
        iVar7 = *(int *)(puVar6 + 1);
        iVar8 = iVar8 + iVar2 * 4;
        iVar10 = iVar10 + iVar7;
        *(undefined4 *)(puVar6 + 1) = 0;
        local_res8 = local_res8 + iVar7 * 0x28;
        if (0x7fffffff < *(uint *)((longlong)puVar6 + 0xc)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::
          ResizeTo(puVar6,0);
        }
        *(undefined4 *)(plVar4 + 1) = 0;
        if ((*(int *)((longlong)plVar4 + 0xc) < 0) && (*(int *)((longlong)plVar4 + 0xc) != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar4,0);
        }
        if ((200 < *(int *)((longlong)puVar6 + 0xc) - *(int *)(puVar6 + 1)) &&
           (*(undefined4 *)(puVar6 + 1) = 0, *(int *)((longlong)puVar6 + 0xc) != 200)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::
          ResizeTo(puVar6,200);
        }
        if ((500 < *(int *)((longlong)plVar4 + 0xc) - (int)plVar4[1]) &&
           (*(undefined4 *)(plVar4 + 1) = 0, *(int *)((longlong)plVar4 + 0xc) != 500)) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar4,500);
        }
      }
      iVar2 = (int)param_1[3];
      uVar1 = *(undefined4 *)(lVar5 + 200);
      *(int *)(param_1 + 3) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
      }
      *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = uVar1;
      iVar2 = (int)param_1[5];
      uVar1 = *(undefined4 *)(lVar5 + 0xcc);
      *(int *)(param_1 + 5) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x2c) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar2);
      }
      *(undefined4 *)(param_1[4] + (longlong)iVar2 * 4) = uVar1;
      iVar2 = local_res8;
    }
  }
  return;
}



// FUNCTION 14182d5b0 FUN_14182d5b0 body=661 status=ok
// SIG undefined FUN_14182d5b0(void)

longlong *
FUN_14182d5b0(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4,float param_5,
             undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  
  plVar8 = (longlong *)0x0;
  uVar9 = 0;
  uVar10 = 0;
  uVar5 = FUN_141836ae0(*(undefined8 *)(param_1 + 0x18),param_4);
  FUN_141838450(*(undefined8 *)(param_1 + 0x20),&local_48,uVar5,0,*(undefined1 *)(param_4 + 0x4c));
  if (local_48 != (longlong *)0x0) {
    FreeTypeUtils::ApplySizeAndScale(*local_48,*(undefined4 *)(param_4 + 0x48),param_5);
    lVar3 = *(longlong *)(*local_48 + 0x80);
    if ((char)local_48[0x20] == '\0') {
      iVar4 = *(int *)(lVar3 + 0x28);
      cVar7 = '\0';
    }
    else {
      iVar4 = FUN_143c22100(*(undefined4 *)(*local_48 + 0x5c),*(undefined4 *)(lVar3 + 0x20));
      cVar7 = (char)local_48[0x20];
    }
    lVar3 = *local_48;
    uVar9 = (uint)((float)((int)ROUND((float)iVar4 * 0.015625 + (float)iVar4 * 0.015625 + 0.5) >> 1)
                  * param_5);
    if (cVar7 == '\0') {
      iVar4 = *(int *)(*(longlong *)(lVar3 + 0x80) + 0x2c);
    }
    else {
      iVar4 = FUN_143c22100(*(int *)(lVar3 + 100) - *(int *)(lVar3 + 0x5c),
                            *(undefined4 *)(*(longlong *)(lVar3 + 0x80) + 0x20));
    }
    uVar10 = (uint)((float)((int)ROUND((float)iVar4 * 0.015625 + (float)iVar4 * 0.015625 + 0.5) >> 1
                           ) * param_5);
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar6 = (longlong *)operator_new(0x80);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_144d50228;
    local_58 = *param_3;
    *param_3 = 0;
    local_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_50 = *(undefined4 *)(param_3 + 1);
    param_3[1] = 0;
    FUN_1417edb00(plVar6 + 2,&local_58,uVar9 & 0xffff,uVar10 & 0xffff,*(undefined8 *)(param_4 + 8),
                  param_4 + 0x10,param_6);
    plVar8 = plVar6;
  }
  local_68 = plVar8 + 2;
  local_60 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
  plVar8 = local_60;
  *param_2 = (longlong)local_68;
  param_2[1] = (longlong)local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
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
  }
  FUN_1417f50c0(param_3);
  return param_2;
}



// FUNCTION 14182d850 FUN_14182d850 body=254 status=ok
// SIG undefined FUN_14182d850(void)

undefined8 * FUN_14182d850(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar11 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    uVar13 = uVar11;
    uVar15 = uVar11;
    lVar14 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar14 = param_1 + 8;
    }
    do {
      if (*(longlong *)(uVar11 + 0x38 + lVar14) == *param_3) {
        lVar12 = (longlong)(int)uVar15;
        puVar3 = (undefined8 *)(lVar14 + lVar12 * 0x48);
        uVar10 = puVar3[1];
        *param_2 = *puVar3;
        param_2[1] = uVar10;
        puVar3 = (undefined8 *)(lVar14 + 0x10 + lVar12 * 0x48);
        uVar10 = puVar3[1];
        param_2[2] = *puVar3;
        param_2[3] = uVar10;
        puVar4 = (undefined4 *)(lVar14 + 0x20 + lVar12 * 0x48);
        uVar7 = puVar4[1];
        uVar8 = puVar4[2];
        uVar9 = puVar4[3];
        *(undefined4 *)(param_2 + 4) = *puVar4;
        *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
        *(undefined4 *)(param_2 + 5) = uVar8;
        *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
        param_2[6] = *(undefined8 *)(lVar14 + 0x30 + lVar12 * 0x48);
        param_2[7] = *(undefined8 *)(lVar14 + 0x38 + lVar12 * 0x48);
        lVar14 = *(longlong *)(lVar14 + 0x40 + lVar12 * 0x48);
        param_2[8] = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        *(undefined1 *)(param_2 + 9) = 1;
        goto LAB_14182d8b1;
      }
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + 0x48;
      uVar15 = (ulonglong)((int)uVar15 + 1);
    } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x130));
  }
  *(undefined1 *)(param_2 + 9) = 0;
LAB_14182d8b1:
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  return param_2;
}



// FUNCTION 14182d950 FUN_14182d950 body=826 status=ok
// SIG undefined FUN_14182d950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14182d950(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108 = 0;
  lVar19 = *(longlong *)(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x128) == 0) {
    lVar19 = param_1 + 8;
  }
  lVar14 = lVar19 + (longlong)*(int *)(param_1 + 0x130) * 0x48;
  if (lVar19 != lVar14) {
    lVar17 = lVar19;
    do {
      if (*(longlong *)(lVar17 + 0x38) == *param_3) {
        iVar16 = (int)((lVar17 - lVar19) / 0x48);
        if (iVar16 != -1) {
          lVar14 = (longlong)iVar16;
          puVar18 = (undefined8 *)(lVar14 * 0x10 + *(longlong *)(param_1 + 0x150));
          puVar15 = (undefined8 *)(lVar19 + lVar14 * 0x48);
          lVar19 = lVar19 + lVar14 * 0x48;
          local_98 = *puVar15;
          uStack_90 = puVar15[1];
          local_60 = *(undefined8 *)(lVar19 + 0x38);
          local_58 = *(longlong **)(lVar19 + 0x40);
          local_88 = *(undefined8 *)(lVar19 + 0x10);
          uStack_80 = *(undefined8 *)(lVar19 + 0x18);
          local_78 = *(undefined8 *)(lVar19 + 0x20);
          uStack_70 = *(undefined8 *)(lVar19 + 0x28);
          local_68 = *(undefined8 *)(lVar19 + 0x30);
          if (local_58 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
          }
          local_50 = *puVar18;
          local_48 = (longlong *)puVar18[1];
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          puVar15 = &local_98;
          bVar13 = true;
          bVar12 = false;
          goto LAB_14182da35;
        }
        break;
      }
      lVar17 = lVar17 + 0x48;
    } while (lVar17 != lVar14);
  }
  local_c0 = DAT_1469eb0a8;
  local_f8 = _DAT_1469eb070;
  uStack_f0 = uRam00000001469eb078;
  local_e8 = _DAT_1469eb080;
  uStack_e0 = uRam00000001469eb088;
  local_d8 = _DAT_1469eb090;
  uStack_d0 = uRam00000001469eb098;
  local_c8 = DAT_1469eb0a0;
  local_b8 = DAT_1469eb0b0;
  if (DAT_1469eb0b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eb0b0 + 1) = (int)DAT_1469eb0b0[1] + 1;
    UNLOCK();
  }
  local_b0 = 0;
  puVar15 = &local_f8;
  local_a8 = (longlong *)0x0;
  bVar13 = false;
  bVar12 = true;
LAB_14182da35:
  uVar3 = puVar15[1];
  uVar4 = puVar15[7];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  *param_2 = *puVar15;
  param_2[1] = uVar3;
  uVar6 = *(undefined4 *)(puVar15 + 4);
  uVar7 = *(undefined4 *)((longlong)puVar15 + 0x24);
  uVar8 = *(undefined4 *)(puVar15 + 5);
  uVar9 = *(undefined4 *)((longlong)puVar15 + 0x2c);
  param_2[2] = uVar10;
  param_2[3] = uVar11;
  uVar3 = puVar15[6];
  *(undefined4 *)(param_2 + 4) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
  *(undefined4 *)(param_2 + 5) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  lVar19 = puVar15[8];
  param_2[8] = lVar19;
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  param_2[9] = puVar15[9];
  param_2[10] = puVar15[10];
  puVar15[10] = 0;
  *(undefined1 *)(param_2 + 0xb) = 1;
  puVar15[9] = 0;
  plVar5 = local_a8;
  if (bVar12) {
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    plVar5 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  plVar5 = local_48;
  if (bVar13) {
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar5 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14182dc90 FUN_14182dc90 body=932 status=ok
// SIG undefined FUN_14182dc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14182dc90(undefined8 *param_1,uint param_2,undefined4 *param_3,longlong param_4,
                      undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                      int param_9,undefined4 param_10)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  uint local_138 [2];
  int local_130 [2];
  uint *local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined1 local_80 [40];
  undefined1 local_58;
  longlong local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar7 = param_1[1];
  if (param_2 < 0x100) {
    lVar6 = *(longlong *)(lVar7 + 0x10);
    if (*(longlong *)(lVar7 + 0x10) == 0) {
      lVar6 = lVar7;
    }
    if ((*(uint *)(lVar6 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (param_2 & 0x1f) & 1) != 0) {
      plVar9 = (longlong *)(lVar7 + ((ulonglong)param_2 + 4) * 8);
      goto LAB_14182dd95;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x828) != *(int *)(lVar7 + 0x854)) {
      lVar6 = *(longlong *)(lVar7 + 0x860);
      if (*(longlong *)(lVar7 + 0x860) == 0) {
        lVar6 = lVar7 + 0x858;
      }
      iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(lVar7 + 0x868) - 1U & (longlong)(int)param_2) * 4
                      );
      if (iVar3 != -1) {
        do {
          plVar5 = (longlong *)(*(longlong *)(lVar7 + 0x820) + (longlong)iVar3 * 0x18);
          if (*(uint *)(*(longlong *)(lVar7 + 0x820) + (longlong)iVar3 * 0x18) == param_2) {
            if (iVar3 != -1) goto LAB_14182dd83;
            break;
          }
          iVar3 = (int)plVar5[2];
        } while (iVar3 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_14182dd83:
    plVar9 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
LAB_14182dd95:
    if (plVar9 != (longlong *)0x0) goto LAB_14182de4c;
  }
  local_138[0] = param_2;
  if (param_2 < 0x100) {
    uVar4 = *(uint *)(lVar7 + 0x870);
    if (param_2 <= *(uint *)(lVar7 + 0x870)) {
      uVar4 = param_2;
    }
    *(uint *)(lVar7 + 0x870) = uVar4;
    uVar4 = *(uint *)(lVar7 + 0x874);
    if (*(uint *)(lVar7 + 0x874) <= param_2) {
      uVar4 = param_2;
    }
    *(uint *)(lVar7 + 0x874) = uVar4;
    lVar6 = *(longlong *)(lVar7 + 0x10);
    if (*(longlong *)(lVar7 + 0x10) == 0) {
      lVar6 = lVar7;
    }
    puVar1 = (uint *)(lVar6 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
    plVar9 = (longlong *)(lVar7 + ((ulonglong)param_2 + 4) * 8);
  }
  else {
    local_128[0] = local_138;
    FUN_1417de2e0(lVar7 + 0x820,local_130,local_128,0);
    plVar9 = (longlong *)(*(longlong *)(lVar7 + 0x820) + ((longlong)local_130[0] * 3 + 1) * 8);
  }
LAB_14182de4c:
  local_b8 = param_8;
  local_b7 = param_6;
  local_b6 = param_5;
  local_118 = 0;
  uStack_110 = 0;
  local_d8 = *param_3;
  uStack_d4 = param_3[1];
  uStack_d0 = param_3[2];
  uStack_cc = param_3[3];
  local_108 = 0;
  uStack_100 = 0;
  local_c8 = param_3[4];
  uStack_c4 = param_3[5];
  uStack_c0 = param_3[6];
  uStack_bc = param_3[7];
  local_b5 = param_7;
  local_a0 = param_10;
  local_f0 = 0;
  local_e8 = 0;
  local_b4 = param_9;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_8c = 0xffffffffffffffff;
  local_40 = '\0';
  local_98 = param_4;
  if (((-1 < param_9) && (param_9 < (int)((longlong *)param_1[2])[1])) &&
     ((undefined1 *)((longlong)param_9 * 0x40 + *(longlong *)param_1[2]) != local_80)) {
    FSlateClippingState::FSlateClippingState(local_80);
    local_40 = '\x01';
  }
  lVar7 = *plVar9;
  lVar6 = *(longlong *)(lVar7 + 0x1c0);
  if (*(longlong *)(lVar7 + 0x1c0) == 0) {
    lVar6 = lVar7;
  }
  lVar8 = (longlong)*(int *)(lVar7 + 0x1d0) * 0xe0 + lVar6;
  if (lVar6 != lVar8) {
    do {
      cVar2 = FSlateElementBatch::FBatchKey::operator==(lVar6,&local_118);
      if ((cVar2 != '\0') && (*(longlong *)(lVar6 + 0x80) == local_98)) goto LAB_14182dfdd;
      lVar6 = lVar6 + 0xe0;
    } while (lVar6 != lVar8);
    lVar7 = *plVar9;
  }
  iVar3 = *(int *)(lVar7 + 0x1d0);
  *(int *)(lVar7 + 0x1d0) = iVar3 + 1;
  if (*(int *)(lVar7 + 0x1d4) < iVar3 + 1) {
    TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(lVar7,iVar3);
  }
  lVar6 = *(longlong *)(lVar7 + 0x1c0);
  if (*(longlong *)(lVar7 + 0x1c0) == 0) {
    lVar6 = lVar7;
  }
  FSlateElementBatch::FSlateElementBatch(lVar6 + (longlong)iVar3 * 0xe0,&local_118);
  lVar6 = *(longlong *)(*plVar9 + 0x1c0);
  if (lVar6 == 0) {
    lVar6 = *plVar9;
  }
  lVar6 = lVar6 + (longlong)iVar3 * 0xe0;
  FSlateBatchData::AssignVertexArrayToBatch(*param_1,lVar6);
  FSlateBatchData::AssignIndexArrayToBatch(*param_1,lVar6);
LAB_14182dfdd:
  *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + 1;
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != 0) {
      FMemory::Free();
    }
    local_58 = 0;
  }
  FSlateElementBatch::FBatchKey::~FBatchKey(&local_118);
  return lVar6;
}



// FUNCTION 14182e040 FindCharacterIndexAtOffset body=66 status=ok
// SIG undefined FindCharacterIndexAtOffset(void)

void FSlateFontMeasure::FindCharacterIndexAtOffset
               (longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
  (**(code **)(*param_1 + 0x20))(param_5,param_2,0,iVar1,param_3,param_4,0,param_5);
  return;
}



// FUNCTION 14182e090 FindCharacterIndexAtOffset body=111 status=ok
// SIG undefined FindCharacterIndexAtOffset(void)

undefined4
FSlateFontMeasure::FindCharacterIndexAtOffset
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined4 local_18;
  undefined1 local_14 [20];
  
  local_18 = 0;
  MeasureStringInternal
            (param_8,local_14,param_2,param_3,param_4,param_5,param_7,param_8,param_6,1,&local_18);
  return local_18;
}



// FUNCTION 14182e100 FindCharacterIndexAtOffset body=79 status=ok
// SIG undefined FindCharacterIndexAtOffset(void)

void FSlateFontMeasure::FindCharacterIndexAtOffset
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FText::ToString(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014182e14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x30))(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 14182e150 FindChildGeometries body=49 status=ok
// SIG undefined FindChildGeometries(void)

undefined4
SWidget::FindChildGeometries
          (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  
  FindChildGeometries_Helper();
  iVar1 = *(int *)(param_4 + 8) - *(int *)(param_4 + 0x34);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)
                 );
}



// FUNCTION 14182e190 FindChildGeometries_Helper body=372 status=ok
// SIG undefined FindChildGeometries_Helper(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SWidget::FindChildGeometries_Helper
               (longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  undefined1 local_1b4 [4];
  undefined1 local_1b0 [8];
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 local_198 [8];
  undefined1 local_190 [288];
  undefined1 *local_70;
  ulonglong local_68;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_198[0] = DAT_1464b9ee8;
  lVar4 = 0;
  local_70 = (undefined1 *)0x0;
  local_68 = 0;
  local_60 = 0;
  (**(code **)(*param_1 + 0x200))(param_1,param_2,local_198);
  local_1b8 = (int)local_68;
  puVar2 = local_70;
  if (0 < (int)local_68) {
    uVar3 = local_68 & 0xffffffff;
    do {
      puVar6 = local_190;
      if (puVar2 != (undefined1 *)0x0) {
        puVar6 = puVar2;
      }
      puVar6 = puVar6 + lVar4;
      piVar1 = (int *)TSet<TSharedRef<SWidget,0>,DefaultKeyFuncs<TSharedRef<SWidget,0>,0>,FDefaultSetAllocator>
                      ::FindId(param_3,local_1b4,puVar6 + 0x38);
      if (*piVar1 != -1) {
        local_1a8 = puVar6 + 0x38;
        local_1a0 = puVar6;
        FUN_1417dff50(param_4,local_1b0,&local_1a8,0);
        puVar2 = local_70;
      }
      lVar4 = lVar4 + 0x48;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar4 = 0;
  if ((*(int *)(param_4 + 8) - *(int *)(param_4 + 0x34) !=
       *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) &&
     (lVar5 = (longlong)local_1b8, 0 < local_1b8)) {
    do {
      puVar6 = local_190;
      if (puVar2 != (undefined1 *)0x0) {
        puVar6 = puVar2;
      }
      FindChildGeometries_Helper
                (*(undefined8 *)(puVar6 + lVar4 + 0x38),puVar6 + lVar4,param_3,param_4);
      lVar4 = lVar4 + 0x48;
      lVar5 = lVar5 + -1;
      puVar2 = local_70;
    } while (lVar5 != 0);
  }
  FUN_140456b10(local_190);
  return;
}



// FUNCTION 14182e310 FUN_14182e310 body=416 status=ok
// SIG undefined FUN_14182e310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14182e310(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined1 local_f4 [12];
  longlong local_e8 [4];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar9 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_1417ddfa0(local_e8,local_f4,param_4,0);
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  SWidget::FindChildGeometries_Helper(param_1,param_3,local_e8,local_98);
  TSet<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,0>,FArrangedWidget,0>,FDefaultSetAllocator>
  ::FindId(local_98,&local_f8,param_4);
  if (local_f8 != -1) {
    lVar9 = (longlong)local_f8 * 0x60 + local_98[0];
  }
  uVar8 = *(undefined8 *)(lVar9 + 0x18);
  *param_2 = *(undefined8 *)(lVar9 + 0x10);
  param_2[1] = uVar8;
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  param_2[2] = *(undefined8 *)(lVar9 + 0x20);
  param_2[3] = uVar8;
  uVar5 = *(undefined4 *)(lVar9 + 0x34);
  uVar6 = *(undefined4 *)(lVar9 + 0x38);
  uVar7 = *(undefined4 *)(lVar9 + 0x3c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar9 + 0x30);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar5;
  *(undefined4 *)(param_2 + 5) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar7;
  param_2[6] = *(undefined8 *)(lVar9 + 0x40);
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_98);
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_e8,0);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_4 + 8);
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
  return param_2;
}



// FUNCTION 14182e4b0 FUN_14182e4b0 body=495 status=ok
// SIG undefined FUN_14182e4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14182e4b0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)param_3[1];
  lVar15 = *param_3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  uVar13 = 0;
  if (0 < *(int *)(lVar7 + 0x130)) {
    uVar16 = uVar13;
    uVar17 = uVar13;
    lVar18 = *(longlong *)(lVar7 + 0x128);
    if (*(longlong *)(lVar7 + 0x128) == 0) {
      lVar18 = lVar7 + 8;
    }
    do {
      if (*(longlong *)(uVar13 + 0x38 + lVar18) == lVar15) {
        lVar15 = (longlong)(int)uVar17;
        puVar14 = (undefined8 *)(lVar18 + lVar15 * 0x48);
        puVar3 = (undefined8 *)(lVar18 + 0x10 + lVar15 * 0x48);
        local_30 = *(undefined8 *)(lVar18 + 0x38 + lVar15 * 0x48);
        local_28 = *(longlong **)(lVar18 + 0x40 + lVar15 * 0x48);
        local_68 = *puVar14;
        uStack_60 = puVar14[1];
        puVar4 = (undefined4 *)(lVar18 + 0x20 + lVar15 * 0x48);
        local_58 = *puVar3;
        uStack_50 = puVar3[1];
        local_38 = *(undefined8 *)(lVar18 + 0x30 + lVar15 * 0x48);
        local_48 = *puVar4;
        uStack_44 = puVar4[1];
        uStack_40 = puVar4[2];
        uStack_3c = puVar4[3];
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        local_20 = 1;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar15 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
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
        puVar14 = &local_68;
        bVar12 = true;
        goto LAB_14182e57e;
      }
      uVar16 = uVar16 + 1;
      uVar13 = uVar13 + 0x48;
      uVar17 = (ulonglong)((int)uVar17 + 1);
    } while ((longlong)uVar16 < (longlong)*(int *)(lVar7 + 0x130));
  }
  local_20 = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar6)();
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
  puVar14 = (undefined8 *)&DAT_1469eb070;
  bVar12 = false;
LAB_14182e57e:
  plVar6 = local_28;
  uVar11 = puVar14[1];
  *param_2 = *puVar14;
  param_2[1] = uVar11;
  uVar11 = puVar14[3];
  param_2[2] = puVar14[2];
  param_2[3] = uVar11;
  uVar8 = *(undefined4 *)((longlong)puVar14 + 0x24);
  uVar9 = *(undefined4 *)(puVar14 + 5);
  uVar10 = *(undefined4 *)((longlong)puVar14 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar14 + 4);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar8;
  *(undefined4 *)(param_2 + 5) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar10;
  param_2[6] = puVar14[6];
  if ((bVar12) && (local_28 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14182e6a0 FindId body=250 status=ok
// SIG undefined FindId(void)

int * TSet<FLRUStringCache::CacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  short *psVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    iVar5 = FCrc::StrCrc32<wchar_t>(puVar8,0);
    plVar6 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)(((ulonglong)plVar6 | param_1[8]) +
                    ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar4 = *(undefined8 **)(*param_1 + (longlong)iVar5 * 0x10);
        if (iVar3 == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_3;
        }
        if (*(int *)(puVar4 + 1) == 0) {
          psVar7 = &DAT_143f3eda8;
        }
        else {
          psVar7 = (short *)*puVar4;
        }
        lVar9 = (longlong)puVar8 - (longlong)psVar7;
        do {
          sVar1 = *psVar7;
          sVar2 = *(short *)((longlong)psVar7 + lVar9);
          if (sVar1 != sVar2) break;
          psVar7 = psVar7 + 1;
        } while (sVar2 != 0);
        if (sVar1 == sVar2) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14182e7a0 FindId body=267 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,0>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar2 * 0x38;
        lVar1 = *(longlong *)(lVar8 + 0x18 + lVar7);
        if (lVar1 == param_3[3]) {
          if (lVar1 != 0) {
LAB_14182e8a6:
            *param_2 = iVar2;
            return param_2;
          }
          if (*(int *)(param_3 + 1) == 0) {
            puVar6 = &DAT_143f3eda8;
          }
          else {
            puVar6 = (undefined2 *)*param_3;
          }
          if (*(int *)(lVar8 + 8 + lVar7) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(lVar8 + lVar7);
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
          if ((((iVar3 == 0) && (*(char *)(lVar8 + 0x10 + lVar7) == *(char *)(param_3 + 2))) &&
              (*(char *)(lVar8 + 0x11 + lVar7) == *(char *)((longlong)param_3 + 0x11))) &&
             (*(int *)(lVar8 + 0x14 + lVar7) == *(int *)((longlong)param_3 + 0x14)))
          goto LAB_14182e8a6;
        }
        lVar7 = *param_1;
        iVar2 = *(int *)(lVar8 + 0x30 + lVar7);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14182e8b0 FUN_14182e8b0 body=484 status=ok
// SIG undefined FUN_14182e8b0(void)

int * FUN_14182e8b0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)param_3 + 0x24))
                    * 4);
    if (iVar6 != -1) {
      lVar7 = *param_1;
      do {
        plVar9 = (longlong *)0x0;
        lVar11 = (longlong)iVar6 * 0x40;
        plVar5 = *(longlong **)(lVar11 + 8 + lVar7);
        plVar8 = plVar5;
        plVar10 = plVar9;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar5[1];
          bVar12 = iVar4 == 0;
          if (bVar12) {
            *(int *)(plVar5 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar8 = plVar9, !bVar12) {
            LOCK();
            bVar12 = iVar4 == (int)plVar5[1];
            if (bVar12) {
              *(int *)(plVar5 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar12) {
              plVar8 = plVar5;
              if (plVar5 != (longlong *)0x0) {
                plVar10 = *(longlong **)(lVar11 + lVar7);
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
        plVar5 = (longlong *)param_3[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar5[1];
          bVar12 = iVar4 == 0;
          if (bVar12) {
            *(int *)(plVar5 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (!bVar12) {
            LOCK();
            bVar12 = iVar4 == (int)plVar5[1];
            if (bVar12) {
              *(int *)(plVar5 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar12) {
              plVar9 = (longlong *)0x0;
              if (plVar5 != (longlong *)0x0) {
                plVar9 = (longlong *)*param_3;
                LOCK();
                plVar1 = plVar5 + 1;
                lVar3 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
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
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar8 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        if ((((plVar10 == plVar9) && (*(int *)(lVar11 + 0x10 + lVar7) == *(int *)(param_3 + 2))) &&
            (*(float *)((longlong)param_3 + 0x14) == *(float *)(lVar11 + 0x14 + lVar7))) &&
           (((*(char *)(lVar11 + 0x18 + lVar7) == *(char *)(param_3 + 3) &&
             (*(float *)((longlong)param_3 + 0x1c) == *(float *)(lVar11 + 0x1c + lVar7))) &&
            (*(int *)(lVar11 + 0x20 + lVar7) == *(int *)(param_3 + 4))))) {
          *param_2 = iVar6;
          return param_2;
        }
        lVar7 = *param_1;
        iVar6 = *(int *)(lVar11 + 0x38 + lVar7);
      } while (iVar6 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14182eaa0 FindId body=259 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>,TDefaultMapHashableKeyFuncs<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)param_3 + 0x74))
                    * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((((*(longlong *)(lVar1 + lVar4 * 0x90) == *param_3) &&
               (*(longlong *)(lVar1 + 8 + lVar4 * 0x90) == param_3[1])) &&
              (*(int *)(lVar1 + 0x10 + lVar4 * 0x90) == (int)param_3[2])) &&
             ((*(char *)(lVar1 + 0x14 + lVar4 * 0x90) == *(char *)((longlong)param_3 + 0x14) &&
              (*(longlong *)(lVar1 + 0x30 + lVar4 * 0x90) == param_3[6])))) &&
            ((*(longlong *)(lVar1 + 0x40 + lVar4 * 0x90) == param_3[8] &&
             ((*(int *)(lVar1 + 0x48 + lVar4 * 0x90) == (int)param_3[9] &&
              (*(int *)(lVar1 + 0x50 + lVar4 * 0x90) == (int)param_3[10])))))) &&
           ((*(char *)(lVar1 + 0x54 + lVar4 * 0x90) == *(char *)((longlong)param_3 + 0x54) &&
            (*(float *)(param_3 + 0xe) == *(float *)(lVar1 + 0x70 + lVar4 * 0x90))))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x88 + lVar4 * 0x90);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14182ebb0 FindId body=273 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TSharedRef<SWidget,0>,FArrangedWidget>,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,0>,FArrangedWidget,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(*param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x60 + *param_1) == *param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14182ecd0 FUN_14182ecd0 body=2138 status=ok
// SIG undefined FUN_14182ecd0(void)

undefined8 *
FUN_14182ecd0(longlong param_1,undefined8 *param_2,float *param_3,char param_4,undefined8 param_5,
             float *param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [8];
  longlong *local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  longlong *local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  longlong *local_110;
  float local_fc;
  float local_f4;
  float local_ec;
  float local_dc;
  float local_d4;
  float local_cc;
  
  fVar12 = param_3[2];
  local_fc = param_3[4];
  local_f4 = fVar12 * param_3[1] + local_fc;
  local_ec = local_fc + fVar12 * param_3[1];
  fVar14 = param_3[3];
  fVar11 = local_f4;
  if (local_fc <= local_f4) {
    fVar11 = local_fc;
  }
  fVar13 = 1.0 / fVar12;
  if (local_ec <= fVar11) {
    fVar11 = local_ec;
  }
  fVar10 = local_f4;
  if (local_f4 <= local_fc) {
    fVar10 = local_fc;
  }
  if (local_fc <= fVar11) {
    fVar11 = local_fc;
  }
  fVar12 = fVar14 + fVar12 * *param_3;
  if (fVar10 <= local_ec) {
    fVar10 = local_ec;
  }
  fVar9 = fVar12;
  if (fVar14 <= fVar12) {
    fVar9 = fVar14;
  }
  if (fVar10 <= local_fc) {
    fVar10 = local_fc;
  }
  if (fVar12 <= fVar14) {
    fVar12 = fVar14;
  }
  local_1d8 = fVar13 * param_3[9] * (fVar10 - fVar11);
  local_1d4 = fVar13 * param_3[10] * (fVar10 - fVar11);
  fVar8 = fVar11 * fVar13 * param_3[9] + fVar9 * fVar13 * param_3[7] +
          -(fVar14 * fVar13) * param_3[7] + -(local_fc * fVar13) * param_3[9] + param_3[0xb];
  local_1e8 = fVar13 * param_3[7] * (fVar12 - fVar9) + fVar8;
  local_1e0 = local_1d8 + fVar8;
  local_dc = param_6[4];
  fVar10 = param_6[2];
  local_1d8 = local_1d8 + local_1e8;
  fVar3 = param_6[3];
  fVar14 = fVar13 * param_3[10] * fVar11 + fVar9 * fVar13 * param_3[8] +
           -(fVar14 * fVar13) * param_3[8] + -(local_fc * fVar13) * param_3[10] + param_3[0xc];
  fStack_210 = local_1e0;
  if (local_1e0 <= local_1e8) {
    fStack_210 = local_1e8;
  }
  local_1dc = local_1d4 + fVar14;
  local_1e4 = fVar13 * param_3[8] * (fVar12 - fVar9) + fVar14;
  local_218 = local_1e0;
  if (local_1e8 <= local_1e0) {
    local_218 = local_1e8;
  }
  local_cc = local_dc + fVar10 * param_6[1];
  fStack_20c = local_1dc;
  if (local_1dc <= local_1e4) {
    fStack_20c = local_1e4;
  }
  local_1d4 = local_1d4 + local_1e4;
  fStack_214 = local_1dc;
  if (local_1e4 <= local_1dc) {
    fStack_214 = local_1e4;
  }
  if (local_1d8 <= local_218) {
    local_218 = local_1d8;
  }
  if (fStack_210 <= local_1d8) {
    fStack_210 = local_1d8;
  }
  local_d4 = fVar10 * param_6[1] + local_dc;
  if (fStack_20c <= local_1d4) {
    fStack_20c = local_1d4;
  }
  if (local_1d4 <= fStack_214) {
    fStack_214 = local_1d4;
  }
  if (fVar8 <= local_218) {
    local_218 = fVar8;
  }
  if (fStack_210 <= fVar8) {
    fStack_210 = fVar8;
  }
  if (fStack_20c <= fVar14) {
    fStack_20c = fVar14;
  }
  if (fVar14 <= fStack_214) {
    fStack_214 = fVar14;
  }
  local_218 = local_218 - *(float *)(param_1 + 0x20);
  fStack_210 = fStack_210 - *(float *)(param_1 + 0x20);
  fVar12 = local_d4;
  if (local_dc <= local_d4) {
    fVar12 = local_dc;
  }
  fStack_20c = fStack_20c - *(float *)(param_1 + 0x24);
  fStack_214 = fStack_214 - *(float *)(param_1 + 0x24);
  fVar14 = fVar10 * *param_6 + fVar3;
  if (local_cc <= fVar12) {
    fVar12 = local_cc;
  }
  fVar10 = 1.0 / fVar10;
  if (local_dc <= fVar12) {
    fVar12 = local_dc;
  }
  fVar11 = fVar14;
  if (fVar3 <= fVar14) {
    fVar11 = fVar3;
  }
  local_200 = param_6[7] * fVar10;
  local_1f8 = param_6[9] * fVar10;
  if (fVar14 <= fVar3) {
    fVar14 = fVar3;
  }
  local_1fc = param_6[8] * fVar10;
  local_1f4 = param_6[10] * fVar10;
  fVar13 = local_dc;
  if (local_dc <= local_d4) {
    fVar13 = local_d4;
  }
  if (fVar13 <= local_cc) {
    fVar13 = local_cc;
  }
  if (fVar13 <= local_dc) {
    fVar13 = local_dc;
  }
  local_1b4 = (fVar13 - fVar12) * local_1f4;
  fVar9 = fVar12 * local_1f8 + fVar11 * local_200 +
          param_6[7] * -(fVar10 * fVar3) + param_6[9] * -(fVar10 * local_dc) + param_6[0xb];
  local_1b8 = (fVar13 - fVar12) * local_1f8;
  fVar12 = fVar12 * local_1f4 + fVar11 * local_1fc +
           param_6[8] * -(fVar10 * fVar3) + param_6[10] * -(fVar10 * local_dc) + param_6[0xc];
  local_1c8 = fVar9 + (fVar14 - fVar11) * local_200;
  local_1c0 = fVar9 + local_1b8;
  local_1c4 = fVar12 + (fVar14 - fVar11) * local_1fc;
  local_1bc = fVar12 + local_1b4;
  fStack_220 = local_1c0;
  if (local_1c0 <= local_1c8) {
    fStack_220 = local_1c8;
  }
  local_228 = local_1c0;
  if (local_1c8 <= local_1c0) {
    local_228 = local_1c8;
  }
  local_1b8 = local_1c8 + local_1b8;
  fStack_224 = local_1bc;
  if (local_1c4 <= local_1bc) {
    fStack_224 = local_1c4;
  }
  local_1b4 = local_1c4 + local_1b4;
  fStack_21c = local_1bc;
  if (local_1bc <= local_1c4) {
    fStack_21c = local_1c4;
  }
  if (fStack_220 <= local_1b8) {
    fStack_220 = local_1b8;
  }
  if (local_1b8 <= local_228) {
    local_228 = local_1b8;
  }
  if (local_1b4 <= fStack_224) {
    fStack_224 = local_1b4;
  }
  if (fStack_21c <= local_1b4) {
    fStack_21c = local_1b4;
  }
  if (fStack_220 <= fVar9) {
    fStack_220 = fVar9;
  }
  if (fVar9 <= local_228) {
    local_228 = fVar9;
  }
  if (fVar12 <= fStack_224) {
    fStack_224 = fVar12;
  }
  if (fStack_21c <= fVar12) {
    fStack_21c = fVar12;
  }
  fStack_220 = fStack_220 - *(float *)(param_1 + 0x20);
  local_228 = local_228 - *(float *)(param_1 + 0x20);
  fStack_224 = fStack_224 - *(float *)(param_1 + 0x24);
  fStack_21c = fStack_21c - *(float *)(param_1 + 0x24);
  *param_2 = 0;
  param_2[1] = 0;
  local_208 = fStack_20c;
  if (param_4 == '\0') {
    fStack_224 = fStack_214 + 0.5;
    fStack_21c = fStack_20c - 0.5;
    local_138 = local_228;
    fStack_134 = fStack_224;
    fStack_130 = fStack_220;
    fStack_12c = fStack_21c;
    local_128 = local_218;
    fStack_124 = fStack_214;
    fStack_120 = fStack_210;
    fStack_11c = fStack_20c;
    puVar7 = (undefined8 *)
             FUN_1417e3770(param_1,local_118,&local_128,&local_138,0,0xffffffff,0,param_5,0,0,0);
    plVar5 = local_110;
    if (param_2 != puVar7) {
      *param_2 = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar7 + 1);
      plVar5 = local_110;
    }
  }
  else if (param_4 == '\x01') {
    fStack_224 = fStack_214 + 0.5;
    fStack_21c = fStack_20c - 0.5;
    local_168 = local_228;
    fStack_164 = fStack_224;
    fStack_160 = fStack_220;
    fStack_15c = fStack_21c;
    local_158 = local_218;
    fStack_154 = fStack_214;
    fStack_150 = fStack_210;
    fStack_14c = fStack_20c;
    puVar7 = (undefined8 *)
             FUN_1417e1620(param_1,local_148,&local_158,&local_168,0,1,1,param_5,0,0,0);
    plVar5 = local_140;
    if (param_2 != puVar7) {
      *param_2 = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar7 + 1);
      plVar5 = local_140;
    }
  }
  else if (param_4 == '\x02') {
    local_228 = local_218 + 0.5;
    fStack_220 = fStack_210 - 0.5;
    local_198 = local_228;
    fStack_194 = fStack_224;
    fStack_190 = fStack_220;
    fStack_18c = fStack_21c;
    local_188 = local_218;
    fStack_184 = fStack_214;
    fStack_180 = fStack_210;
    fStack_17c = fStack_20c;
    puVar7 = (undefined8 *)
             FUN_1417e2130(param_1,local_178,&local_188,&local_198,1,0xffffffff,2,param_5,0,0,0);
    plVar5 = local_170;
    if (param_2 != puVar7) {
      *param_2 = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar7 + 1);
      plVar5 = local_170;
    }
  }
  else {
    if (param_4 != '\x03') {
      return param_2;
    }
    local_228 = local_218 + 0.5;
    fStack_220 = fStack_210 - 0.5;
    puVar7 = (undefined8 *)
             FUN_1417e2c50(param_1,local_1b0,&local_218,&local_228,1,1,3,param_5,0,0,0);
    plVar5 = local_1a8;
    if (param_2 != puVar7) {
      *param_2 = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar7 + 1);
      plVar5 = local_1a8;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_2;
}



// FUNCTION 14182f530 FUN_14182f530 body=543 status=ok
// SIG undefined FUN_14182f530(void)

longlong * FUN_14182f530(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined1 local_res20 [8];
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined1 *local_a8;
  longlong **local_a0;
  undefined1 local_98 [56];
  longlong *local_60;
  
  FUN_1417efe40(local_98,param_2,&DAT_1469eaf80,param_3);
  FUN_141834210(param_2);
  TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>,TDefaultMapHashableKeyFuncs<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,local_res8,local_98);
  if ((local_res8[0] == -1) ||
     (lVar5 = (longlong)local_res8[0] * 0x90 + *(longlong *)(param_1 + 8), lVar5 == 0)) {
    plStack_c0 = (longlong *)0x0;
  }
  else {
    local_c8 = *(longlong **)(lVar5 + 0x78);
    plStack_c0 = *(longlong **)(lVar5 + 0x80);
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    if (local_c8 != (longlong *)0x0) goto LAB_14182f6cd;
  }
  local_c8 = (longlong *)0x0;
  plVar4 = (longlong *)operator_new(0x68);
  local_b0 = (longlong *)0x0;
  plVar6 = local_b0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    plVar4[8] = 0;
    *(undefined4 *)(plVar4 + 9) = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 500;
    plVar6 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_DestroyObject_144d50398;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)plVar6;
    local_b0 = plVar4;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar6,plVar6);
  local_b8 = 0;
  local_c8 = plVar6;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_c0,&local_b0);
  plVar6 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
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
  local_a8 = local_98;
  local_a0 = &local_c8;
  FUN_1417df9d0(param_1 + 8,local_res20,&local_a8,0);
LAB_14182f6cd:
  plVar4 = plStack_c0;
  plVar6 = local_c8;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_c0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
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
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return plVar6;
}



// FUNCTION 14182f750 FindOrCache body=424 status=ok
// SIG undefined FindOrCache(void)

undefined8
FFreeTypeAdvanceCache::FindOrCache
          (longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
          undefined4 param_5,float param_6,undefined4 *param_7)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 local_res8 [8];
  longlong *local_68;
  undefined4 *local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  int local_40;
  
  FCachedAdvanceKey::FCachedAdvanceKey(&local_58,param_2,param_3,param_4,param_5,param_6);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)local_40) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar7 = (longlong)iVar2;
        if ((((*(longlong *)(lVar1 + lVar7 * 0x30) == local_58) &&
             (*(int *)(lVar1 + 8 + lVar7 * 0x30) == local_50)) &&
            (*(int *)(lVar1 + 0xc + lVar7 * 0x30) == local_4c)) &&
           ((*(int *)(lVar1 + 0x10 + lVar7 * 0x30) == local_48 &&
            (local_44 == *(float *)(lVar1 + 0x14 + lVar7 * 0x30))))) {
          puVar8 = (undefined4 *)(lVar1 + lVar7 * 0x30);
          if (iVar2 != -1) goto LAB_14182f845;
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + lVar7 * 0x30);
      } while (iVar2 != -1);
    }
  }
  puVar8 = (undefined4 *)0x0;
LAB_14182f845:
  puVar5 = puVar8 + 8;
  if (puVar8 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  if (puVar5 == (undefined4 *)0x0) {
    FreeTypeUtils::ApplySizeAndScale(param_2,param_5,0x3f800000);
    iVar2 = FUN_143c20630(param_2,param_3 & 0xffffffff,param_4 & 0xffffffff,param_7);
    if (iVar2 == 0) {
      uVar3 = FUN_143c22100(*param_7,(int)(param_6 * 65536.0));
      *param_7 = uVar3;
      local_68 = &local_58;
      local_60 = param_7;
      FUN_1417de720(param_1,local_res8,&local_68,0);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    *param_7 = *puVar5;
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14182f900 FindOrCache body=829 status=ok
// SIG undefined FindOrCache(void)

undefined8
FFreeTypeGlyphCache::FindOrCache
          (longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,undefined4 param_5
          ,undefined4 param_6,undefined2 *param_7)

{
  undefined8 *puVar1;
  short sVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 local_res8 [8];
  longlong *local_b8;
  undefined2 *local_b0;
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  float local_94;
  int local_90;
  undefined2 local_88 [2];
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_48 [4];
  
  FFreeTypeAdvanceCache::FCachedAdvanceKey::FCachedAdvanceKey
            (&local_a8,param_2,param_3,param_4,param_5,param_6);
  puVar13 = (undefined2 *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    iVar7 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)local_90) * 4);
    if (iVar7 != -1) {
      lVar3 = *param_1;
      do {
        lVar11 = (longlong)iVar7 * 0x78;
        if ((((*(longlong *)(lVar11 + lVar3) == local_a8) &&
             (*(int *)(lVar11 + 8 + lVar3) == local_a0)) &&
            (*(int *)(lVar11 + 0xc + lVar3) == local_9c)) &&
           ((*(int *)(lVar11 + 0x10 + lVar3) == local_98 &&
            (local_94 == *(float *)(lVar11 + 0x14 + lVar3))))) {
          puVar9 = (undefined2 *)(lVar11 + lVar3);
          if (iVar7 != -1) goto LAB_14182f9f3;
          break;
        }
        iVar7 = *(int *)(lVar11 + 0x70 + lVar3);
      } while (iVar7 != -1);
    }
  }
  puVar9 = puVar13;
LAB_14182f9f3:
  puVar12 = puVar9 + 0x10;
  if (puVar9 == (undefined2 *)0x0) {
    puVar12 = puVar13;
  }
  if (puVar12 == (undefined2 *)0x0) {
    FreeTypeUtils::ApplySizeAndScale(param_2,param_5,param_6);
    iVar7 = FUN_143c216b0(param_2,param_3 & 0xffffffff,param_4 & 0xffffffff);
    if (iVar7 == 0) {
      ::_guard_xfg_dispatch_icall_nop(local_88,0,0x50);
      *param_7 = local_88[0];
      plVar8 = (longlong *)(param_7 + 0x20);
      *(undefined8 *)(param_7 + 2) = local_84;
      *(undefined8 *)(param_7 + 6) = uStack_7c;
      *(undefined8 *)(param_7 + 10) = local_74;
      *(undefined8 *)(param_7 + 0xe) = uStack_6c;
      *(undefined4 *)(param_7 + 0x12) = local_64;
      *(undefined4 *)(param_7 + 0x14) = uStack_60;
      *(undefined4 *)(param_7 + 0x16) = uStack_5c;
      *(undefined4 *)(param_7 + 0x18) = uStack_58;
      *(undefined8 *)(param_7 + 0x1a) = local_54;
      *(undefined4 *)(param_7 + 0x1e) = local_4c;
      if (plVar8 != local_48) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        *plVar8 = 0;
        *(undefined8 *)(param_7 + 0x24) = 0;
      }
      *param_7 = *(undefined2 *)(param_2 + 0x6e);
      lVar3 = *(longlong *)(param_2 + 0x78);
      uVar10 = *(undefined8 *)(lVar3 + 0x38);
      *(undefined8 *)(param_7 + 2) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(param_7 + 6) = uVar10;
      uVar10 = *(undefined8 *)(lVar3 + 0x48);
      *(undefined8 *)(param_7 + 10) = *(undefined8 *)(lVar3 + 0x40);
      *(undefined8 *)(param_7 + 0xe) = uVar10;
      lVar3 = *(longlong *)(param_2 + 0x80);
      uVar4 = *(undefined4 *)(lVar3 + 0x1c);
      uVar5 = *(undefined4 *)(lVar3 + 0x20);
      uVar6 = *(undefined4 *)(lVar3 + 0x24);
      *(undefined4 *)(param_7 + 0x12) = *(undefined4 *)(lVar3 + 0x18);
      *(undefined4 *)(param_7 + 0x14) = uVar4;
      *(undefined4 *)(param_7 + 0x16) = uVar5;
      *(undefined4 *)(param_7 + 0x18) = uVar6;
      *(undefined8 *)(param_7 + 0x1a) = *(undefined8 *)(lVar3 + 0x28);
      *(undefined4 *)(param_7 + 0x1e) = *(undefined4 *)(lVar3 + 0x30);
      sVar2 = *(short *)(*(longlong *)(param_2 + 0x78) + 0x9a);
      if (0 < sVar2) {
        if (*(int *)(param_7 + 0x26) < (int)sVar2) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,(int)sVar2);
        }
        if (0 < sVar2) {
          do {
            iVar7 = *(int *)(param_7 + 0x24);
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x78) + 0xa0);
            *(int *)(param_7 + 0x24) = iVar7 + 1;
            if (*(int *)(param_7 + 0x26) < iVar7 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar7);
            }
            lVar11 = (longlong)puVar13 * 8;
            puVar13 = (undefined2 *)((longlong)puVar13 + 1);
            *(undefined8 *)(*plVar8 + (longlong)iVar7 * 8) = *(undefined8 *)(lVar3 + lVar11);
          } while ((longlong)puVar13 < (longlong)sVar2);
        }
      }
      local_b8 = &local_a8;
      local_b0 = param_7;
      FUN_1417de9f0(param_1,local_res8,&local_b8,0);
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    *param_7 = *puVar12;
    puVar1 = (undefined8 *)(param_7 + 0x20);
    uVar10 = *(undefined8 *)(puVar12 + 6);
    *(undefined8 *)(param_7 + 2) = *(undefined8 *)(puVar12 + 2);
    *(undefined8 *)(param_7 + 6) = uVar10;
    uVar10 = *(undefined8 *)(puVar12 + 0xe);
    *(undefined8 *)(param_7 + 10) = *(undefined8 *)(puVar12 + 10);
    *(undefined8 *)(param_7 + 0xe) = uVar10;
    uVar4 = *(undefined4 *)(puVar12 + 0x14);
    uVar5 = *(undefined4 *)(puVar12 + 0x16);
    uVar6 = *(undefined4 *)(puVar12 + 0x18);
    *(undefined4 *)(param_7 + 0x12) = *(undefined4 *)(puVar12 + 0x12);
    *(undefined4 *)(param_7 + 0x14) = uVar4;
    *(undefined4 *)(param_7 + 0x16) = uVar5;
    *(undefined4 *)(param_7 + 0x18) = uVar6;
    *(undefined8 *)(param_7 + 0x1a) = *(undefined8 *)(puVar12 + 0x1a);
    *(undefined4 *)(param_7 + 0x1e) = *(undefined4 *)(puVar12 + 0x1e);
    if (puVar1 != (undefined8 *)(puVar12 + 0x20)) {
      iVar7 = *(int *)(puVar12 + 0x24);
      _Src = *(void **)(puVar12 + 0x20);
      *(int *)(param_7 + 0x24) = iVar7;
      if ((iVar7 == 0) && (*(int *)(param_7 + 0x26) == 0)) {
        *(undefined4 *)(param_7 + 0x26) = 0;
        return 1;
      }
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar7);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar7 << 3);
    }
    uVar10 = 1;
  }
  return uVar10;
}



// FUNCTION 14182fc40 FindOrCache body=521 status=ok
// SIG undefined FindOrCache(void)

undefined8
FFreeTypeKerningPairCache::FindOrCache
          (longlong *param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
          undefined4 param_5,float param_6,undefined8 *param_7)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res10 [8];
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  int local_3c;
  
  if ((*(byte *)(param_2 + 8) & 0x40) == 0) {
    *param_7 = 0;
    return 1;
  }
  FCachedKerningPairKey::FCachedKerningPairKey(&local_58,param_2,param_3,param_4,param_5,param_6);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)local_3c) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar7 = (longlong)iVar2;
        if ((((*(longlong *)(lVar1 + lVar7 * 0x30) == local_58) &&
             (*(int *)(lVar1 + 8 + lVar7 * 0x30) == local_50)) &&
            (*(int *)(lVar1 + 0xc + lVar7 * 0x30) == local_4c)) &&
           (((*(int *)(lVar1 + 0x10 + lVar7 * 0x30) == local_48 &&
             (*(int *)(lVar1 + 0x14 + lVar7 * 0x30) == local_44)) &&
            (local_40 == *(float *)(lVar1 + 0x18 + lVar7 * 0x30))))) {
          puVar5 = (undefined8 *)(lVar1 + lVar7 * 0x30);
          if (iVar2 != -1) goto LAB_14182fd6c;
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + lVar7 * 0x30);
      } while (iVar2 != -1);
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_14182fd6c:
  puVar8 = puVar5 + 4;
  if (puVar5 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (puVar8 == (undefined8 *)0x0) {
    FreeTypeUtils::ApplySizeAndScale(param_2,param_5,0x3f800000);
    iVar2 = FUN_143c209b0(param_2,*param_3,param_3[1],param_4 & 0xffffffff,param_7);
    if (iVar2 == 0) {
      if ((int)param_4 != 2) {
        uVar3 = FUN_143c22100(*(undefined4 *)param_7,(int)(param_6 * 65536.0));
        *(undefined4 *)param_7 = uVar3;
        uVar3 = FUN_143c22100(*(undefined4 *)((longlong)param_7 + 4),(int)(param_6 * 65536.0));
        *(undefined4 *)((longlong)param_7 + 4) = uVar3;
      }
      local_68 = &local_58;
      local_60 = param_7;
      FUN_1417deca0(param_1,local_res10,&local_68,0);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    *param_7 = *puVar8;
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14182fe50 FUN_14182fe50 body=2660 status=ok
// SIG undefined FUN_14182fe50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_14182fe50(longlong *param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_5c8 [32];
  longlong *local_5a8;
  undefined8 uStack_5a0;
  undefined1 local_598;
  byte local_597;
  byte local_596;
  byte local_595;
  int local_594;
  longlong *local_590;
  byte *local_588;
  longlong *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  byte *local_568;
  longlong local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  longlong *local_548;
  longlong local_540;
  longlong *local_538;
  longlong local_530;
  longlong *local_528;
  longlong local_520;
  longlong local_518;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  longlong local_4d0;
  longlong *local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 local_488;
  undefined1 local_468 [56];
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  byte local_420 [8];
  undefined1 local_418 [288];
  undefined1 *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  byte local_2e0 [8];
  undefined1 local_2d8 [288];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [8];
  undefined1 local_198 [288];
  undefined1 *local_78;
  int local_70;
  longlong *local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_5c8;
  bVar18 = false;
  local_594 = 0;
  local_590 = param_2;
  local_588 = param_4;
  local_568 = param_3;
  local_548 = param_1;
  if (DAT_1469eaf34 == 0) {
    local_594 = 0;
    cVar8 = '\0';
    local_560 = 0;
    do {
      pbVar11 = local_588;
      if ((int)local_548[1] <= local_594) break;
      plVar15 = *(longlong **)(local_560 + 8 + *local_548);
      lVar17 = *(longlong *)(local_560 + *local_548);
      plVar10 = plVar15 + 1;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar10 = (int)*plVar10 + 1;
        UNLOCK();
      }
      local_2e0[0] = *local_588;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar10 = (int)*plVar10 + 1;
        UNLOCK();
      }
      puVar9 = (undefined8 *)SWindow::GetWindowGeometryInScreen(lVar17,local_468);
      local_508 = *puVar9;
      uStack_500 = puVar9[1];
      local_4f8 = puVar9[2];
      uStack_4f0 = puVar9[3];
      local_4d8 = puVar9[6];
      local_4e8 = *(undefined4 *)(puVar9 + 4);
      uStack_4e4 = *(undefined4 *)((longlong)puVar9 + 0x24);
      uStack_4e0 = *(undefined4 *)(puVar9 + 5);
      uStack_4dc = *(undefined4 *)((longlong)puVar9 + 0x2c);
      local_4d0 = lVar17;
      local_4c8 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar10 = (int)*plVar10 + 1;
        UNLOCK();
        LOCK();
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FUN_141801ed0(local_2e0,&local_508);
      plVar4 = local_4c8;
      if (local_4c8 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_4c8 + 1;
        lVar7 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_4c8)(local_4c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          pbVar11 = local_588;
          if (iVar13 == 1) {
            (**(code **)(*local_4c8 + 8))(local_4c8,1);
            pbVar11 = local_588;
          }
        }
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar10 = (int)*plVar10 + 1;
        UNLOCK();
      }
      local_530 = lVar17;
      local_528 = plVar15;
      FUN_1417f3b10(local_1a0,&local_530,local_2e0);
      lVar7 = *local_590;
      if (lVar17 == lVar7) {
LAB_1418306d8:
        bVar6 = true;
      }
      else {
        local_597 = *pbVar11;
        bVar18 = true;
        plVar10 = (longlong *)local_590[1];
        local_540 = lVar7;
        local_538 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar10 + 1;
          lVar7 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        iVar13 = 0;
        local_420[0] = local_597;
        local_596 = local_597;
        local_2f8 = (undefined1 *)0x0;
        local_2f0 = 0;
        puVar12 = local_198;
        if (local_78 != (undefined1 *)0x0) {
          puVar12 = local_78;
        }
        local_2e8 = 0;
        FUN_1417e62a0(&local_540,puVar12 + (longlong)(local_70 + -1) * 0x48,local_420,&local_596);
        FArrangedChildren::Reverse(local_420);
        iVar16 = (int)local_2f0;
        if (0 < (int)local_2f0) {
          do {
            puVar12 = local_418;
            if (local_2f8 != (undefined1 *)0x0) {
              puVar12 = local_2f8;
            }
            FUN_141801ed0(local_1a0,puVar12 + (longlong)iVar13 * 0x48);
            iVar13 = iVar13 + 1;
            iVar16 = (int)local_2f0;
          } while (iVar13 < (int)local_2f0);
        }
        FUN_140456b10(local_418);
        if (0 < iVar16) goto LAB_1418306d8;
        bVar6 = false;
      }
      plVar10 = local_538;
      if ((bVar18) && (bVar18 = false, local_538 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_538 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_538)(local_538);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      param_2 = local_590;
      if (bVar6) {
        FUN_1417f9710(local_568,local_1a0);
        cVar8 = '\x01';
        param_2 = local_590;
      }
      else if (cVar8 == '\0') {
        local_595 = *local_588;
        local_520 = *local_590;
        local_518 = local_590[1];
        if (local_518 != 0) {
          LOCK();
          *(int *)(local_518 + 8) = *(int *)(local_518 + 8) + 1;
          UNLOCK();
        }
        cVar8 = FUN_14182fe50(lVar17 + 0x578,&local_520,local_568,&local_595);
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_50);
      plVar10 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_58 + 1;
        lVar17 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      FUN_140456b10(local_198);
      FUN_140456b10(local_2d8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar15 + 1;
        lVar17 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      local_594 = local_594 + 1;
      local_560 = local_560 + 0x10;
    } while (cVar8 == '\0');
    plVar10 = (longlong *)param_2[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar10 + 1;
      lVar17 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  else {
    plVar10 = (longlong *)*param_2;
    plVar15 = (longlong *)param_2[1];
    local_5a8 = plVar10;
    uStack_5a0 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar15 + 1;
      lVar17 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    *param_3 = *local_588;
    while (plVar15 = uStack_5a0, plVar4 = local_5a8, plVar10 != (longlong *)0x0) {
      if ((((int)local_5a8[0x18] != 0) && ((longlong *)local_5a8[0x17] != (longlong *)0x0)) &&
         (cVar8 = (**(code **)(*(longlong *)local_5a8[0x17] + 0x18))(), cVar8 != '\0')) {
        if ((int)plVar4[0x18] == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)plVar4[0x17];
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,&local_598);
        *(undefined1 *)(plVar4 + 0x16) = local_598;
      }
      bVar3 = *(byte *)(plVar4 + 0x16);
      if ((*param_3 & bVar3) == 0) {
        FUN_1418569d0(param_3 + 8,0);
        break;
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        plVar15 = uStack_5a0;
      }
      local_4b8 = *(undefined8 *)((longlong)local_5a8 + 0x4c);
      uStack_4b0 = *(undefined8 *)((longlong)local_5a8 + 0x54);
      local_4a8 = *(undefined8 *)((longlong)local_5a8 + 0x5c);
      uStack_4a0 = *(undefined8 *)((longlong)local_5a8 + 100);
      local_488 = *(undefined8 *)((longlong)local_5a8 + 0x7c);
      local_498 = *(undefined4 *)((longlong)local_5a8 + 0x6c);
      uStack_494 = (undefined4)local_5a8[0xe];
      uStack_490 = *(undefined4 *)((longlong)local_5a8 + 0x74);
      uStack_48c = (undefined4)local_5a8[0xf];
      plVar10 = (longlong *)0x0;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar15 + 1;
        lVar17 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar10 = uStack_5a0;
        if ((int)lVar17 == 1) {
          (**(code **)*uStack_5a0)();
          plVar10 = uStack_5a0;
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*uStack_5a0 + 8))(uStack_5a0,1);
          }
        }
      }
      if ((*param_3 & bVar3) != 0) {
        iVar13 = *(int *)(param_3 + 0x130);
        lVar17 = (longlong)iVar13;
        *(int *)(param_3 + 0x130) = iVar13 + 1;
        if (*(int *)(param_3 + 0x134) < iVar13 + 1) {
          TArray<FArrangedWidget,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (param_3 + 8,iVar13);
        }
        pbVar11 = *(byte **)(param_3 + 0x128);
        if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
          pbVar11 = param_3 + 8;
        }
        *(undefined8 *)(pbVar11 + lVar17 * 0x48) = local_4b8;
        *(undefined8 *)(pbVar11 + lVar17 * 0x48 + 8) = uStack_4b0;
        *(undefined8 *)(pbVar11 + lVar17 * 0x48 + 0x10) = local_4a8;
        *(undefined8 *)(pbVar11 + lVar17 * 0x48 + 0x10 + 8) = uStack_4a0;
        pbVar2 = pbVar11 + lVar17 * 0x48 + 0x20;
        *(undefined4 *)pbVar2 = local_498;
        *(undefined4 *)(pbVar2 + 4) = uStack_494;
        *(undefined4 *)(pbVar2 + 8) = uStack_490;
        *(undefined4 *)(pbVar2 + 0xc) = uStack_48c;
        *(undefined8 *)(pbVar11 + lVar17 * 0x48 + 0x30) = local_488;
        *(longlong **)(pbVar11 + lVar17 * 0x48 + 0x38) = local_5a8;
        *(longlong **)(pbVar11 + lVar17 * 0x48 + 0x40) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          plVar10 = uStack_5a0;
        }
      }
      plVar4 = (longlong *)local_5a8[0x31];
      plVar14 = plVar4;
      if (plVar4 == (longlong *)0x0) {
LAB_1418300f0:
        if ((*(byte *)(local_5a8 + 3) & 0x20) != 0) {
          local_578 = local_5a8;
          uStack_570 = (undefined4)uStack_5a0;
          uStack_56c = uStack_5a0._4_4_;
          plVar15 = (longlong *)0x0;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            plVar15 = uStack_5a0;
          }
          if ((longlong **)(param_3 + 0x140) != &local_578) {
            *(longlong **)(param_3 + 0x140) = local_5a8;
            local_578 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 0x148,&uStack_570);
          }
          if (CONCAT44(uStack_56c,uStack_570) != 0) {
            LOCK();
            piVar1 = (int *)(CONCAT44(uStack_56c,uStack_570) + 8);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar15 = uStack_5a0;
            if (iVar13 == 1) {
              puVar9 = (undefined8 *)CONCAT44(uStack_56c,uStack_570);
              (**(code **)*puVar9)(puVar9);
              LOCK();
              piVar1 = (int *)((longlong)puVar9 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar15 = uStack_5a0;
              if (iVar13 == 1) {
                (**(code **)(*(longlong *)CONCAT44(uStack_56c,uStack_570) + 8))
                          ((longlong *)CONCAT44(uStack_56c,uStack_570),1);
                plVar15 = uStack_5a0;
              }
            }
          }
          FArrangedChildren::Reverse(param_3);
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar14 + 1;
            lVar17 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            plVar15 = uStack_5a0;
            if ((int)lVar17 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar15 = uStack_5a0;
              if (iVar13 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
                plVar15 = uStack_5a0;
              }
            }
          }
          plVar10 = uStack_5a0;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar15 + 1;
            lVar17 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*uStack_5a0)(uStack_5a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*uStack_5a0 + 8))(uStack_5a0,1);
              }
            }
            plVar10 = uStack_5a0;
            LOCK();
            plVar15 = plVar15 + 1;
            lVar17 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*uStack_5a0)(uStack_5a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*uStack_5a0 + 8))(uStack_5a0,1);
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
          return '\x01';
        }
        FUN_1418569d0(param_3 + 8,0);
        plVar15 = plVar10;
        if (plVar14 != (longlong *)0x0) {
LAB_141830365:
          LOCK();
          plVar10 = plVar14 + 1;
          lVar17 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          plVar15 = uStack_5a0;
          if ((int)lVar17 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar15 = uStack_5a0;
            if (iVar13 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
              plVar15 = uStack_5a0;
            }
          }
        }
        plVar10 = uStack_5a0;
        if (plVar15 == (longlong *)0x0) goto LAB_14183042f;
        LOCK();
        plVar4 = plVar15 + 1;
        lVar17 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*uStack_5a0)(uStack_5a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*uStack_5a0 + 8))(uStack_5a0,1);
          }
        }
        goto LAB_1418303ff;
      }
      LOCK();
      iVar13 = (int)plVar4[1];
      bVar18 = iVar13 == 0;
      if (bVar18) {
        *(int *)(plVar4 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while( true ) {
        plVar14 = (longlong *)0x0;
        plVar10 = uStack_5a0;
        if (bVar18) goto LAB_1418300f0;
        LOCK();
        bVar18 = iVar13 == (int)plVar4[1];
        if (bVar18) {
          *(int *)(plVar4 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar18) break;
        LOCK();
        iVar13 = (int)plVar4[1];
        bVar18 = iVar13 == 0;
        if (bVar18) {
          *(int *)(plVar4 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
      plVar14 = plVar4;
      if ((plVar4 == (longlong *)0x0) ||
         (plVar5 = (longlong *)local_5a8[0x30], plVar5 == (longlong *)0x0)) goto LAB_1418300f0;
      cVar8 = (**(code **)(*plVar5 + 0x148))(plVar5);
      plVar10 = uStack_5a0;
      if (cVar8 == '\0') {
        FUN_1418569d0(param_3 + 8,0);
        goto LAB_141830365;
      }
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_558._0_4_ = SUB84(plVar5,0);
      local_430 = (undefined4)local_558;
      local_558._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
      uStack_42c = local_558._4_4_;
      uStack_550._0_4_ = SUB84(plVar4,0);
      uStack_428 = (undefined4)uStack_550;
      uStack_550._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      uStack_424 = uStack_550._4_4_;
      local_558 = local_5a8;
      uStack_550 = uStack_5a0;
      local_5a8 = plVar5;
      if (uStack_5a0 != (longlong *)0x0) {
        LOCK();
        plVar5 = uStack_5a0 + 1;
        lVar17 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          puVar9 = (undefined8 *)*uStack_5a0;
          uStack_5a0 = plVar4;
          (*(code *)*puVar9)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = uStack_5a0;
          if (iVar13 == 1) {
            (**(code **)(*uStack_550 + 8))();
            plVar14 = uStack_5a0;
          }
        }
      }
      uStack_5a0 = plVar14;
      LOCK();
      plVar10 = plVar4 + 1;
      lVar17 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      plVar10 = local_5a8;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar15 + 1;
        lVar17 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar10 = local_5a8;
          if (iVar13 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15);
            plVar10 = local_5a8;
          }
        }
      }
    }
    if (plVar15 != (longlong *)0x0) {
LAB_1418303ff:
      plVar10 = uStack_5a0;
      LOCK();
      plVar15 = plVar15 + 1;
      lVar17 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*uStack_5a0)(uStack_5a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*uStack_5a0 + 8))(uStack_5a0,1);
        }
      }
    }
LAB_14183042f:
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    cVar8 = '\0';
  }
  return cVar8;
}



// FUNCTION 1418308c0 FindSlotForTexture body=623 status=ok
// SIG undefined FindSlotForTexture(void)

longlong * FSlateTextureAtlas::FindSlotForTexture(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar1 = *(int *)(param_1 + 0x34);
  plVar10 = *(longlong **)(param_1 + 0x20);
  uVar13 = -(uint)(iVar1 != 0) & 2;
  uVar14 = uVar13 + param_2;
  uVar13 = uVar13 + param_3;
  if (plVar10 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  while ((*(uint *)(plVar10 + 3) < uVar14 || (*(uint *)((longlong)plVar10 + 0x1c) < uVar13))) {
    plVar10 = (longlong *)*plVar10;
    if (plVar10 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  if (plVar10 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  uVar12 = *(uint *)(plVar10 + 3) - uVar14;
  if ((int)uVar12 < 1) {
    uVar12 = 0;
  }
  uVar11 = *(uint *)((longlong)plVar10 + 0x1c) - uVar13;
  if ((int)uVar11 < 1) {
    uVar11 = 0;
  }
  if ((uVar11 < 2) && (uVar12 < 2)) {
    if (*plVar10 != 0) {
      *(longlong *)(*plVar10 + 8) = plVar10[1];
    }
    if ((longlong *)plVar10[1] != (longlong *)0x0) {
      *(longlong *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    goto LAB_141830af0;
  }
  plVar7 = (longlong *)operator_new(0x28);
  if (uVar12 < uVar11) {
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar9 = plVar10[2];
      uVar3 = *(undefined4 *)((longlong)plVar10 + 0x14);
      *(uint *)(plVar7 + 3) = uVar12;
      *plVar7 = 0;
      plVar7[1] = 0;
      *(bool *)(plVar7 + 4) = iVar1 != 0;
      *(uint *)(plVar7 + 2) = (int)lVar9 + uVar14;
      *(undefined4 *)((longlong)plVar7 + 0x14) = uVar3;
      *(uint *)((longlong)plVar7 + 0x1c) = uVar13;
    }
    plVar8 = (longlong *)operator_new(0x28);
    if (plVar8 == (longlong *)0x0) goto LAB_141830aa3;
    iVar2 = *(int *)((longlong)plVar10 + 0x14);
    lVar9 = plVar10[3];
    lVar6 = plVar10[2];
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(plVar8 + 2) = (int)lVar6;
    *(uint *)((longlong)plVar8 + 0x14) = iVar2 + uVar13;
    *(int *)(plVar8 + 3) = (int)lVar9;
    *(uint *)((longlong)plVar8 + 0x1c) = uVar11;
    *(bool *)(plVar8 + 4) = iVar1 != 0;
  }
  else {
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar2 = *(int *)((longlong)plVar10 + 0x14);
      lVar9 = plVar10[2];
      *(uint *)((longlong)plVar7 + 0x1c) = uVar11;
      *plVar7 = 0;
      plVar7[1] = 0;
      *(bool *)(plVar7 + 4) = iVar1 != 0;
      *(int *)(plVar7 + 2) = (int)lVar9;
      *(uint *)((longlong)plVar7 + 0x14) = iVar2 + uVar13;
      *(uint *)(plVar7 + 3) = uVar14;
    }
    plVar8 = (longlong *)operator_new(0x28);
    if (plVar8 == (longlong *)0x0) {
LAB_141830aa3:
      plVar8 = (longlong *)0x0;
    }
    else {
      lVar9 = plVar10[2];
      uVar3 = *(undefined4 *)((longlong)plVar10 + 0x1c);
      uVar4 = *(undefined4 *)((longlong)plVar10 + 0x14);
      *plVar8 = 0;
      plVar8[1] = 0;
      *(uint *)(plVar8 + 2) = (int)lVar9 + uVar14;
      *(undefined4 *)((longlong)plVar8 + 0x14) = uVar4;
      *(uint *)(plVar8 + 3) = uVar12;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar3;
      *(bool *)(plVar8 + 4) = iVar1 != 0;
    }
  }
  puVar5 = (undefined8 *)plVar10[1];
  plVar7[1] = (longlong)puVar5;
  lVar9 = *plVar10;
  *plVar7 = lVar9;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = plVar7;
    lVar9 = *plVar7;
  }
  if (lVar9 != 0) {
    *(longlong **)(lVar9 + 8) = plVar7;
  }
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar8[1] = (longlong)plVar7;
  *plVar8 = *plVar7;
  *plVar7 = (longlong)plVar8;
  if (*plVar8 != 0) {
    *(longlong **)(*plVar8 + 8) = plVar8;
  }
LAB_141830af0:
  plVar7 = (longlong *)(param_1 + 0x18);
  lVar9 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(longlong **)(*(longlong *)(param_1 + 0x18) + 8) = plVar10;
    lVar9 = *plVar7;
  }
  *plVar10 = lVar9;
  plVar10[1] = (longlong)plVar7;
  *plVar7 = (longlong)plVar10;
  *(uint *)(plVar10 + 3) = uVar14;
  *(uint *)((longlong)plVar10 + 0x1c) = uVar13;
  return plVar10;
}



// FUNCTION 141830b30 FUN_141830b30 body=734 status=ok
// SIG undefined FUN_141830b30(void)

longlong * FUN_141830b30(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong local_48;
  longlong *local_40;
  
  iVar11 = 0;
  if (0 < (int)param_2[1]) {
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(*param_2 + 8 + lVar10);
      lVar6 = *(longlong *)(*param_2 + lVar10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar9 = *(longlong **)(lVar6 + 0x4a0);
      lVar7 = *(longlong *)(lVar6 + 0x498);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar9 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
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
      }
      if (lVar7 == *param_3) {
        *param_1 = lVar6;
        param_1[1] = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
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
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        plVar9 = plVar5 + 1;
        if (plVar5 == (longlong *)0x0) {
          return param_1;
        }
        LOCK();
        iVar11 = (int)*plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
LAB_141830de4:
        if (iVar11 != 1) {
          return param_1;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 != 1) {
          return param_1;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return param_1;
      }
      FUN_141830b30(&local_48,lVar6 + 0x578,param_3);
      plVar1 = local_40;
      if (local_48 != 0) {
        *param_1 = local_48;
        param_1[1] = (longlong)local_40;
        local_40 = (longlong *)0x0;
        local_48 = 0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        if (plVar5 == (longlong *)0x0) {
          return param_1;
        }
        LOCK();
        plVar9 = plVar5 + 1;
        iVar11 = (int)*plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        goto LAB_141830de4;
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
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
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar5 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (iVar11 < (int)param_2[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 141830e10 Finish body=762 status=ok
// SIG undefined Finish(void)

void FLineBuilder::Finish(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_44;
  
  uVar16 = DAT_1468b5d88._4_4_;
  uVar11 = (undefined4)DAT_1468b5d88;
  if (*(int *)((longlong)param_1 + 0x34) < 3) {
    AppendPoint(param_1,*param_2);
    return;
  }
  pfVar13 = (float *)param_1[2];
  plVar14 = (longlong *)*param_1;
  iVar9 = (int)plVar14[1];
  lVar17 = (longlong)iVar9;
  fVar21 = *(float *)(param_1 + 6) * *(float *)(param_1 + 5);
  fVar20 = *(float *)(param_1 + 6) * *(float *)((longlong)param_1 + 0x2c);
  fVar18 = fVar21 + *(float *)(param_1 + 3);
  fVar19 = fVar20 + *(float *)((longlong)param_1 + 0x1c);
  fVar3 = pfVar13[1];
  fVar4 = *pfVar13;
  fVar5 = pfVar13[2];
  fVar6 = pfVar13[3];
  fVar7 = pfVar13[4];
  fVar8 = pfVar13[5];
  uVar10 = *param_3;
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  lVar15 = *plVar14;
  puVar1 = (undefined8 *)(lVar15 + lVar17 * 0x28);
  *puVar1 = 0x3f800000;
  puVar1[1] = CONCAT44(uVar16,uVar11);
  puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar17 * 0x28);
  *puVar1 = CONCAT44(uStack_54,local_58);
  puVar1[1] = CONCAT44(fVar19 * fVar6 + fVar18 * fVar3 + fVar8,
                       fVar19 * fVar5 + fVar18 * fVar4 + fVar7);
  *(ulonglong *)(lVar15 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_44,uVar10);
  uVar10 = DAT_1468b5d88._4_4_;
  uVar16 = (undefined4)DAT_1468b5d88;
  pfVar13 = (float *)param_1[2];
  fVar21 = *(float *)(param_1 + 3) - fVar21;
  fVar20 = *(float *)((longlong)param_1 + 0x1c) - fVar20;
  fVar3 = *pfVar13;
  fVar4 = pfVar13[2];
  fVar5 = pfVar13[3];
  fVar6 = pfVar13[1];
  fVar7 = pfVar13[4];
  fVar8 = pfVar13[5];
  uVar11 = *param_3;
  plVar14 = (longlong *)*param_1;
  iVar9 = (int)plVar14[1];
  lVar17 = (longlong)iVar9;
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  lVar15 = *plVar14;
  puVar1 = (undefined8 *)(lVar15 + lVar17 * 0x28);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uVar10,uVar16);
  puVar2 = (undefined4 *)(lVar15 + 0x10 + lVar17 * 0x28);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = fVar20 * fVar4 + fVar21 * fVar3 + fVar7;
  puVar2[3] = fVar20 * fVar5 + fVar21 * fVar6 + fVar8;
  *(ulonglong *)(lVar15 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_44,uVar11);
  plVar14 = (longlong *)param_1[1];
  iVar9 = (int)plVar14[1];
  iVar12 = *(int *)(*param_1 + 8);
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  *(int *)(*plVar14 + (longlong)iVar9 * 4) = iVar12 + -3;
  plVar14 = (longlong *)param_1[1];
  iVar9 = (int)plVar14[1];
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  *(int *)(*plVar14 + (longlong)iVar9 * 4) = iVar12 + -4;
  plVar14 = (longlong *)param_1[1];
  iVar9 = (int)plVar14[1];
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  *(int *)(*plVar14 + (longlong)iVar9 * 4) = iVar12 + -2;
  plVar14 = (longlong *)param_1[1];
  iVar9 = (int)plVar14[1];
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  *(int *)(*plVar14 + (longlong)iVar9 * 4) = iVar12 + -3;
  plVar14 = (longlong *)param_1[1];
  iVar9 = (int)plVar14[1];
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  *(int *)(*plVar14 + (longlong)iVar9 * 4) = iVar12 + -2;
  plVar14 = (longlong *)param_1[1];
  iVar9 = (int)plVar14[1];
  *(int *)(plVar14 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar9 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar9);
  }
  *(int *)(*plVar14 + (longlong)iVar9 * 4) = iVar12 + -1;
  return;
}



// FUNCTION 141831110 FlashWindow body=19 status=ok
// SIG BOOL FlashWindow(HWND hWnd, BOOL bInvert)

BOOL __stdcall SWindow::FlashWindow(HWND hWnd,BOOL bInvert)

{
  BOOL in_EAX;
  BOOL BVar1;
  
  if (*(undefined8 **)(hWnd + 0x16a) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014183111f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    BVar1 = (**(code **)**(undefined8 **)(hWnd + 0x16a))();
    return BVar1;
  }
  return in_EAX;
}



// FUNCTION 141831130 FlushCompositeFont body=13 status=ok
// SIG undefined FlushCompositeFont(void)

void FSlateFontCache::FlushCompositeFont(longlong param_1)

{
  TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
  ::Remove(*(longlong *)(param_1 + 0x28) + 8);
  return;
}



// FUNCTION 141831140 FUN_141831140 body=123 status=ok
// SIG undefined FUN_141831140(void)

void FUN_141831140(longlong param_1)

{
  longlong lVar1;
  
  TBaseMulticastDelegate<void>::Broadcast(DAT_1469eaf38 + 0x30);
  TSet<TTuple<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData>,TDefaultMapHashableKeyFuncs<FFreeTypeGlyphCache::FCachedGlyphKey,FFreeTypeGlyphCache::FCachedGlyphData,0>,FDefaultSetAllocator>
  ::Empty(*(undefined8 *)(param_1 + 0x10),0);
  TSet<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>,TDefaultMapHashableKeyFuncs<FFreeTypeAdvanceCache::FCachedAdvanceKey,long,0>,FDefaultSetAllocator>
  ::Empty(*(undefined8 *)(param_1 + 0x18),0);
  TSet<TTuple<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_>,TDefaultMapHashableKeyFuncs<FFreeTypeKerningPairCache::FCachedKerningPairKey,FT_Vector_,0>,FDefaultSetAllocator>
  ::Empty(*(undefined8 *)(param_1 + 0x20),0);
  lVar1 = *(longlong *)(param_1 + 0x28);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(lVar1 + 8,0);
  TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
  ::Empty(lVar1 + 0x58,0);
  TSet<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>,FSlateFontKeyFuncs<TSharedRef<FCharacterList,0>_>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x40,0);
  TSet<TTuple<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>_>,TDefaultMapHashableKeyFuncs<FShapedGlyphEntryKey,TSharedRef<FShapedGlyphFontAtlasData,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x90,0);
  return;
}



// FUNCTION 1418311c0 FlushFontObjects body=598 status=ok
// SIG undefined FlushFontObjects(void)

void FSlateFontCache::FlushFontObjects(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  bVar5 = false;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  if (0 < *(int *)(param_1 + 0x168)) {
    plVar1 = (longlong *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x68);
    puStack_28 = (uint *)(param_1 + 0x50);
    local_78 = 0x100000000;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar3 != 0) {
      puVar11 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar8 = *puVar11;
      iVar9 = 0;
      uStack_60 = 0;
      while (uVar8 == 0) {
        uStack_60 = uStack_60 + 0x20;
        uVar6 = (ulonglong)local_78 >> 0x20;
        local_78 = CONCAT44((int)uVar6,iVar9 + 1);
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1418312bf;
        uVar8 = puVar11[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar9 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_78 = CONCAT44(uVar8,(undefined4)local_78);
      if (uVar8 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_68._4_4_ = (uStack_60 - iVar9) + 0x1f;
      if (iVar3 < local_68._4_4_) {
LAB_1418312bf:
        local_68._4_4_ = iVar3;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_70 = local_78;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x68);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    bVar5 = false;
    local_68 = puStack_28;
    if (bVar4) {
      do {
        plVar10 = *(longlong **)(param_1 + 0x160);
        plVar2 = plVar10 + *(int *)(param_1 + 0x168);
        if (plVar10 != plVar2) {
          do {
            if (*plVar10 == *(longlong *)(*plVar1 + (longlong)iStack_5c * 0x90)) {
              bVar5 = true;
              TSet<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>,FSlateFontKeyFuncs<TSharedRef<FCharacterList,0>_>,FDefaultSetAllocator>
              ::Remove(local_58._8_8_,iStack_5c);
              local_40 = CONCAT11(local_40._1_1_,1);
              break;
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar2);
        }
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>,FSlateFontKeyFuncs<TSharedPtr<FSlateFontMeasureCache,0>_>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x16c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x160,0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  if (bVar5) {
    FUN_141831140(param_1);
  }
  return;
}



// FUNCTION 141831420 FlushObject body=94 status=ok
// SIG undefined FlushObject(void)

void FSlateFontCache::FlushObject(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x160,local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  return;
}



// FUNCTION 141831480 Get body=168 status=ok
// SIG undefined Get(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * TAttribute<TOptional<FTransform2D>_>::Get(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 5) != 0) && ((longlong *)param_1[4] != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[4] + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 5) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
    if (&local_38 != param_1) {
      if (*(char *)(param_1 + 3) != '\0') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (local_20 != '\0') {
        *param_1 = local_38;
        param_1[1] = uStack_30;
        param_1[2] = local_28;
        *(undefined1 *)(param_1 + 3) = 1;
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 141831530 FUN_141831530 body=192 status=ok
// SIG undefined FUN_141831530(void)

longlong FUN_141831530(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_38 [32];
  longlong *local_18;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x38) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x30);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,local_38);
      FUN_140692440(param_1,local_38);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_18 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1418315f0 FUN_1418315f0 body=584 status=ok
// SIG undefined FUN_1418315f0(void)

longlong * FUN_1418315f0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (DAT_1469eaf70 != (longlong *)0x0) {
    return DAT_1469eaf70;
  }
  lVar3 = operator_new(0x1b0);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FLegacySlateFontInfoCache::FLegacySlateFontInfoCache(lVar3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar8 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar8 = plVar5;
  }
  plVar5 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  uStack_30 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_14183171d;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar7 = (longlong *)plVar5[1];
    if (plVar8 != plVar7) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar5[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar5[1] = (longlong)plVar8;
    }
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
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_14183171d:
  local_38 = (undefined1 *)0x0;
  DAT_1469eaf70 = plVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_1469eaf78,&uStack_30);
  plVar4 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_30 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  plVar4 = DAT_1469eaf70;
  local_38 = &LAB_141845bc0;
  uStack_30 = (longlong *)((ulonglong)uStack_30 & 0xffffffff00000000);
  lVar3 = FInternationalization::Get();
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_20 = (undefined4)uStack_30;
  uStack_1c = uStack_30._4_4_;
  uVar6 = FUN_1417dd530(&local_48,plVar4,&local_28);
  TBaseMulticastDelegate<void>::Add(lVar3 + 8,local_res8,uVar6);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return DAT_1469eaf70;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return DAT_1469eaf70;
}



// FUNCTION 141831840 Get body=165 status=ok
// SIG undefined Get(void)

undefined4 * FSlateThrottleManager::Get(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (DAT_1469eb370 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)operator_new(0x20);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 1;
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      uVar2 = (**(code **)(*DAT_1468b1f88 + 0x28))
                        (DAT_1468b1f88,L"Slate.bAllowThrottling",puVar1,
                         L"Allow Slate to throttle parts of the engine to ensure the UI is responsive"
                         ,0);
      *(undefined8 *)(puVar1 + 4) = uVar2;
      *(undefined ***)(puVar1 + 2) = &PTR_FUN_143f3ecf0;
      puVar1[6] = 0;
      DAT_1469eb370 = puVar1;
      return puVar1;
    }
    DAT_1469eb370 = (undefined4 *)0x0;
  }
  return DAT_1469eb370;
}



// FUNCTION 1418318f0 GetAbsoluteClientRect body=27 status=ok
// SIG undefined GetAbsoluteClientRect(void)

undefined8 FOverlayPopupLayer::GetAbsoluteClientRect(longlong param_1,undefined8 param_2)

{
  SWindow::GetClientRectInScreen(*(undefined8 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 141831910 GetAllResources body=343 status=ok
// SIG undefined GetAllResources(void)

void FSlateStyleRegistry::GetAllResources(undefined8 param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 local_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined8 *local_30;
  int iStack_28;
  uint uStack_24;
  undefined *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  uStack_40 = 0;
  iVar7 = (int)DAT_1464b9f68;
  if (iVar7 != 0) {
    puVar6 = DAT_1464b9f60;
    if (DAT_1464b9f60 == (uint *)0x0) {
      puVar6 = (uint *)&DAT_1464b9f50;
    }
    uVar1 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1418319d1;
      uVar1 = puVar6[lVar4 + 1];
    }
    uStack_54 = -uVar1 & uVar1;
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
    iStack_44 = (uStack_40 - iVar5) + 0x1f;
    if (iVar7 < iStack_44) {
LAB_1418319d1:
      iStack_44 = iVar7;
    }
  }
  iStack_3c = iStack_44;
  local_30 = &DAT_1464b9f40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  puStack_20 = &DAT_1464b9f50;
  uStack_18 = 0xffffffff;
  iStack_14 = iStack_44;
  iStack_10 = uStack_40;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  local_48 = 0x464b9f50;
  iStack_44 = 1;
  uStack_40 = 0xffffffff;
  if (iStack_3c < iVar7) {
    do {
      plVar2 = *(longlong **)(DAT_1464b9f40 + 8 + (longlong)iStack_3c * 0x18);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < *(int *)(CONCAT44(iStack_44,local_48) + 0x18));
  }
  return;
}



// FUNCTION 141831a90 GetAtlasPageSize body=30 status=ok
// SIG undefined GetAtlasPageSize(void)

undefined8 FSlateFontCache::GetAtlasPageSize(longlong param_1,undefined8 param_2)

{
  (**(code **)**(undefined8 **)(param_1 + 0x110))();
  return param_2;
}



// FUNCTION 141831ab0 FUN_141831ab0 body=393 status=ok
// SIG undefined FUN_141831ab0(void)

uint FUN_141831ab0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *local_38;
  longlong *local_30;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0xe6);
  if (*(ushort *)(param_1 + 0xe6) == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x30);
    fVar3 = *(float *)(param_1 + 0xd0);
    uVar8 = FUN_141836ae0(*(undefined8 *)(lVar4 + 0x18),param_1 + 0x60);
    FUN_141838450(lVar4,&local_38,uVar8,0,*(undefined1 *)(param_1 + 0xac));
    plVar5 = local_30;
    if (local_38 == (longlong *)0x0) {
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      uVar9 = 0;
    }
    else {
      FreeTypeUtils::ApplySizeAndScale(*local_38,*(undefined4 *)(param_1 + 0xa8),fVar3);
      lVar4 = *(longlong *)(*local_38 + 0x80);
      if ((char)local_38[0x20] == '\0') {
        iVar6 = *(int *)(lVar4 + 0x28);
      }
      else {
        iVar6 = FUN_143c22100(*(undefined4 *)(*local_38 + 0x5c),*(undefined4 *)(lVar4 + 0x20));
      }
      plVar5 = local_30;
      uVar9 = (uint)((float)((int)ROUND((float)iVar6 * 0.015625 + (float)iVar6 * 0.015625 + 0.5) >>
                            1) * fVar3);
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    uVar7 = uVar9 & 0xffff;
    *(short *)(param_1 + 0xe6) = (short)uVar9;
  }
  return uVar7;
}



// FUNCTION 141831c40 FUN_141831c40 body=348 status=ok
// SIG undefined FUN_141831c40(void)

uint FUN_141831c40(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *local_38;
  longlong *local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar7 = FUN_141836ae0(*(undefined8 *)(lVar4 + 0x18));
  FUN_141838450(lVar4,&local_38,uVar7,0,*(undefined1 *)(param_2 + 0x4c));
  plVar5 = local_30;
  if (local_38 != (longlong *)0x0) {
    FreeTypeUtils::ApplySizeAndScale(*local_38,*(undefined4 *)(param_2 + 0x48),param_3);
    lVar4 = *(longlong *)(*local_38 + 0x80);
    if ((char)local_38[0x20] == '\0') {
      iVar6 = *(int *)(lVar4 + 0x28);
    }
    else {
      iVar6 = FUN_143c22100(*(undefined4 *)(*local_38 + 0x5c),*(undefined4 *)(lVar4 + 0x20));
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
    return (int)((float)((int)ROUND((float)iVar6 * 0.015625 + (float)iVar6 * 0.015625 + 0.5) >> 1) *
                param_3) & 0xffff;
  }
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return 0;
}



// FUNCTION 141831da0 GetBaseline body=32 status=ok
// SIG undefined GetBaseline(void)

void FSlateFontMeasure::GetBaseline(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1418336f0(*(undefined8 *)(param_1 + 0x58),param_2,param_3,&DAT_1469eaf80);
  FUN_141831ab0(uVar1);
  return;
}



// FUNCTION 141831dc0 GetBestMatchFontForAttributes body=718 status=ok
// SIG undefined GetBestMatchFontForAttributes(void)

longlong FCompositeFontCache::GetBestMatchFontForAttributes
                   (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  int local_res10;
  longlong local_res20;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_res20 = 0;
  local_res10 = 0;
  local_98 = *(longlong *)*param_2;
  lVar2 = local_98 + (longlong)(int)((longlong *)*param_2)[1] * 0x28;
  lVar7 = 0;
  if (local_98 != lVar2) {
    lVar14 = local_98 + 8;
    puVar1 = (uint *)(param_3 + 2);
    do {
      plVar6 = (longlong *)FUN_1418374f0(param_1,lVar14);
      uVar3 = *(uint *)(param_3 + 5);
      local_b8 = 0;
      uStack_b4 = 1;
      uStack_a4 = 0;
      iStack_a0 = 0;
      if (uVar3 != 0) {
        puVar13 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar15 = *puVar13;
        iStack_a0 = 0;
        local_b8 = 0;
        while (uVar15 == 0) {
          lVar7 = (longlong)local_b8;
          iStack_a0 = iStack_a0 + 0x20;
          iVar8 = local_b8 + 1;
          bVar4 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_b8;
          local_b8 = iVar8;
          if (bVar4) goto LAB_141831ed0;
          uVar15 = puVar13[lVar7 + 1];
        }
        uStack_b4 = -uVar15 & uVar15;
        iVar8 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_a4 = (iStack_a0 - iVar8) + 0x1f;
        if ((int)uVar3 < (int)uStack_a4) {
LAB_141831ed0:
          uStack_a4 = uVar3;
        }
      }
      uVar15 = *(uint *)(param_3 + 5);
      uStack_58 = CONCAT44(uStack_b4,local_b8);
      uStack_70 = CONCAT44(uStack_a4,0xffffffff);
      local_68 = CONCAT44(uStack_9c,iStack_a0);
      uVar9 = uVar15 & 0xffffffe0;
      iStack_80 = local_b8;
      uStack_7c = uStack_b4;
      iVar8 = 0;
      local_78 = puVar1;
      local_60 = param_3;
      puStack_50 = puVar1;
      uStack_48 = uStack_70;
      uStack_40 = local_68;
      if (uVar15 != uVar3) {
        puVar13 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar11 = puVar13[(int)uVar15 >> 5] & -1 << ((byte)uVar15 & 0x1f);
        iVar5 = (int)uVar15 >> 5;
        while (uVar11 == 0) {
          uVar9 = uVar9 + 0x20;
          if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar5)
          goto LAB_141831f8b;
          uVar11 = puVar13[(longlong)iVar5 + 1];
          iVar5 = iVar5 + 1;
        }
        uVar11 = -uVar11 & uVar11;
        iVar5 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uVar11 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uVar15 = (uVar9 - iVar5) + 0x1f;
        if ((int)uVar3 < (int)uVar15) {
LAB_141831f8b:
          iVar8 = 0;
          uVar15 = uVar3;
        }
      }
      while( true ) {
        iVar5 = iVar8;
        if ((uStack_70._4_4_ == uVar15) && (local_78 == puVar1)) break;
        lVar7 = *(longlong *)(*param_3 + (longlong)(int)uStack_70._4_4_ * 0x10);
        if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
          plVar10 = (longlong *)plVar6[8];
          if ((longlong *)plVar6[8] == (longlong *)0x0) {
            plVar10 = plVar6 + 7;
          }
          iVar12 = *(int *)((longlong)plVar10 +
                           ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                           (longlong)(int)plVar6[9] - 1U) * 4);
          if (iVar12 != -1) {
            do {
              if (*(longlong *)(*plVar6 + (longlong)iVar12 * 0x10) == lVar7) goto LAB_14183200d;
              iVar12 = *(int *)(*plVar6 + 8 + (longlong)iVar12 * 0x10);
            } while (iVar12 != -1);
          }
        }
        iVar12 = -1;
LAB_14183200d:
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
        iVar8 = iVar5 + 1;
        if (iVar12 == -1) {
          iVar8 = iVar5;
        }
      }
      if ((local_res10 < iVar5) || (local_res20 == 0)) {
        local_res10 = iVar5;
        local_res20 = lVar14;
      }
      lVar14 = lVar14 + 0x28;
      local_98 = local_98 + 0x28;
      lVar7 = local_res20;
    } while (local_98 != lVar2);
  }
  return lVar7;
}



// FUNCTION 141832090 GetBoundingBox body=154 status=ok
// SIG undefined GetBoundingBox(void)

float * FSlateClippingZone::GetBoundingBox(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_54;
  
  fVar4 = *(float *)(param_1 + 1);
  fVar2 = fVar4;
  if (*(float *)(param_1 + 2) <= fVar4) {
    fVar2 = *(float *)(param_1 + 2);
  }
  uVar1 = *param_1;
  fVar5 = (float)uVar1;
  if (fVar4 <= *(float *)(param_1 + 2)) {
    fVar4 = *(float *)(param_1 + 2);
  }
  fVar3 = *(float *)((longlong)param_1 + 0xc);
  if (*(float *)(param_1 + 3) <= fVar2) {
    fVar2 = *(float *)(param_1 + 3);
  }
  if (fVar4 <= *(float *)(param_1 + 3)) {
    fVar4 = *(float *)(param_1 + 3);
  }
  if (fVar5 <= fVar2) {
    fVar2 = fVar5;
  }
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  *param_2 = fVar2;
  fVar2 = fVar3;
  if (fVar3 <= *(float *)((longlong)param_1 + 0x14)) {
    fVar2 = *(float *)((longlong)param_1 + 0x14);
  }
  if (*(float *)((longlong)param_1 + 0x14) <= fVar3) {
    fVar3 = *(float *)((longlong)param_1 + 0x14);
  }
  param_2[2] = fVar4;
  if (fVar2 <= *(float *)((longlong)param_1 + 0x1c)) {
    fVar2 = *(float *)((longlong)param_1 + 0x1c);
  }
  if (*(float *)((longlong)param_1 + 0x1c) <= fVar3) {
    fVar3 = *(float *)((longlong)param_1 + 0x1c);
  }
  fStack_54 = (float)((ulonglong)uVar1 >> 0x20);
  if (fVar2 <= fStack_54) {
    fVar2 = fStack_54;
  }
  if (fStack_54 <= fVar3) {
    fVar3 = fStack_54;
  }
  param_2[3] = fVar2;
  param_2[1] = fVar3;
  return param_2;
}



// FUNCTION 141832130 FUN_141832130 body=538 status=ok
// SIG undefined FUN_141832130(void)

longlong * FUN_141832130(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_res20;
  
  ISlateStyle::Join(&local_res20);
  plVar6 = (longlong *)0x0;
  iVar3 = (int)((ulonglong)local_res20 >> 0x20);
  if ((int)param_1[0x44] != *(int *)((longlong)param_1 + 0x24c)) {
    plVar4 = (longlong *)param_1[0x4b];
    if ((longlong *)param_1[0x4b] == (longlong *)0x0) {
      plVar4 = param_1 + 0x4a;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)(iVar3 + (int)local_res20) & (longlong)(int)param_1[0x4c] - 1U) * 4);
    if (iVar2 != -1) {
      lVar7 = param_1[0x43];
      do {
        lVar9 = (longlong)iVar2;
        if (*(longlong *)(lVar7 + lVar9 * 0x18) == local_res20) {
          if (((iVar2 != -1) && (lVar7 = lVar7 + lVar9 * 0x18, lVar7 != 0)) &&
             (plVar4 = *(longlong **)(lVar7 + 8), plVar4 != (longlong *)0x0)) {
            return plVar4;
          }
          break;
        }
        iVar2 = *(int *)(lVar7 + 0x10 + lVar9 * 0x18);
      } while (iVar2 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
  plVar4 = plVar6;
  if ((int)param_1[0x62] != *(int *)((longlong)param_1 + 0x33c)) {
    plVar5 = (longlong *)param_1[0x69];
    if ((longlong *)param_1[0x69] == (longlong *)0x0) {
      plVar5 = param_1 + 0x68;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)(iVar3 + (int)local_res20) & (longlong)(int)param_1[0x6a] - 1U) * 4);
    if (iVar3 != -1) {
      lVar7 = param_1[0x61];
      do {
        lVar9 = (longlong)iVar3 * 0x20;
        if (*(longlong *)(lVar9 + lVar7) == local_res20) {
          if ((iVar3 != -1) && (lVar7 = (longlong)iVar3 * 0x20 + lVar7, lVar7 != 0)) {
            plVar4 = *(longlong **)(lVar7 + 8);
            plVar6 = *(longlong **)(lVar7 + 0x10);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
              UNLOCK();
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar9 + 0x18 + lVar7);
      } while (iVar3 != -1);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar6[1];
    bVar10 = iVar3 == 0;
    if (bVar10) {
      *(int *)(plVar6 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar3 == (int)plVar6[1];
      if (bVar10) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar4 == (longlong *)0x0) {
          plVar4 = plVar8;
        }
        plVar8 = plVar4;
        LOCK();
        plVar4 = plVar6 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
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
  if (plVar8 != (longlong *)0x0) {
    return plVar8;
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x68))(param_1);
  return plVar6;
}



// FUNCTION 141832350 FUN_141832350 body=2074 status=ok
// SIG undefined FUN_141832350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141832350(longlong param_1,longlong *param_2,undefined8 param_3,float param_4,undefined1 param_5
             )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  uint local_1b0;
  uint local_1ac;
  int local_1a8;
  longlong *local_1a0;
  uint local_198;
  int local_194;
  float local_190;
  float local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined1 local_16c;
  undefined1 local_168 [8];
  int local_160;
  float local_158;
  longlong local_150;
  int local_148;
  int local_13c;
  longlong local_138 [16];
  longlong *local_b8;
  uint local_b0;
  uint local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1c0._0_4_ = (float)param_3;
  local_1c0._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar22 = (float)local_1c0 - *(float *)(param_1 + 0x20);
  fVar23 = local_1c0._4_4_ - *(float *)(param_1 + 0x24);
  local_1d8[0] = param_5;
  if ((*(int *)(param_1 + 8) < 1) || (*(int *)(param_1 + 0x18) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar12 = (longlong *)0x0;
    local_194 = *(int *)(param_1 + 0x2c) + -1;
    local_188 = 0;
    local_184 = 0;
    iVar5 = (int)ROUND((fVar23 / _DAT_1464b9f34 + fVar23 / _DAT_1464b9f34) - 0.5) >> 1;
    iVar8 = 0;
    if (-1 < iVar5) {
      iVar8 = iVar5;
    }
    local_198 = *(int *)(param_1 + 0x28) - 1;
    uVar6 = 0;
    uVar9 = (int)ROUND((fVar22 / _DAT_1464b9f30 + fVar22 / _DAT_1464b9f30) - 0.5) >> 1;
    uVar19 = uVar6;
    if (-1 < (int)uVar9) {
      uVar19 = uVar9;
    }
    if ((int)uVar19 <= (int)local_198) {
      local_198 = uVar19;
    }
    if (iVar8 <= local_194) {
      local_194 = iVar8;
    }
    local_1c0 = param_3;
    local_1a0 = param_2;
    local_190 = fVar22;
    local_18c = fVar23;
    FUN_1418449c0(param_1,&local_150,&local_198,param_5);
    local_1c0 = local_150;
    local_1a8 = local_148;
    if (param_4 <= 0.0) {
LAB_141832a55:
      lVar20 = local_1c0;
      *param_2 = 0;
      *(int *)(param_2 + 1) = local_148;
      if (local_148 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_2,local_148,0);
        plVar13 = (longlong *)*param_2;
        plVar12 = (longlong *)(lVar20 + 0x50);
        plVar14 = plVar13 + 10;
        do {
          lVar20 = plVar12[-9];
          *plVar13 = plVar12[-10];
          plVar13[1] = lVar20;
          lVar20 = plVar12[-7];
          plVar13[2] = plVar12[-8];
          plVar13[3] = lVar20;
          uVar2 = *(undefined4 *)((longlong)plVar12 + -0x2c);
          lVar20 = plVar12[-5];
          uVar3 = *(undefined4 *)((longlong)plVar12 + -0x24);
          *(int *)(plVar13 + 4) = (int)plVar12[-6];
          *(undefined4 *)((longlong)plVar13 + 0x24) = uVar2;
          *(int *)(plVar13 + 5) = (int)lVar20;
          *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar3;
          plVar13[6] = plVar12[-4];
          plVar14[-3] = plVar12[-3];
          lVar20 = plVar12[-2];
          plVar14[-2] = lVar20;
          if (lVar20 != 0) {
            LOCK();
            *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
            UNLOCK();
          }
          plVar14[-1] = plVar12[-1];
          lVar20 = *plVar12;
          *plVar14 = lVar20;
          if (lVar20 != 0) {
            LOCK();
            *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
            UNLOCK();
          }
          plVar13 = plVar13 + 0xb;
          plVar14 = plVar14 + 0xb;
          plVar12 = plVar12 + 0xb;
          local_148 = local_148 + -1;
        } while (local_148 != 0);
      }
    }
    else {
      lVar20 = (longlong)(local_148 + -1);
      if (-1 < local_148 + -1) {
        puVar16 = (undefined8 *)(local_150 + 0x38 + lVar20 * 0x58);
        do {
          cVar4 = (**(code **)(*(longlong *)*puVar16 + 400))();
          if (cVar4 != '\0') goto LAB_141832a55;
          puVar16 = puVar16 + -0xb;
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
      }
      uVar19 = *(int *)(param_1 + 0x28) - 1;
      local_1ac = *(int *)(param_1 + 0x2c) - 1;
      local_b0 = 0;
      fVar21 = (fVar23 - param_4) * (1.0 / _DAT_1464b9f34);
      uVar10 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
      uVar9 = uVar6;
      if (-1 < (int)uVar10) {
        uVar9 = uVar10;
      }
      fVar21 = (fVar22 - param_4) * (1.0 / _DAT_1464b9f30);
      uVar11 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
      uVar10 = uVar6;
      if (-1 < (int)uVar11) {
        uVar10 = uVar11;
      }
      local_1b0 = uVar19;
      if ((int)uVar10 <= (int)uVar19) {
        local_1b0 = uVar10;
      }
      fVar21 = (param_4 + fVar23) * (1.0 / _DAT_1464b9f34);
      uVar10 = local_1ac;
      if ((int)uVar9 <= (int)local_1ac) {
        uVar10 = uVar9;
      }
      uVar11 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
      uVar9 = uVar6;
      if (-1 < (int)uVar11) {
        uVar9 = uVar11;
      }
      fVar21 = (param_4 + fVar22) * (1.0 / _DAT_1464b9f30);
      uVar7 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
      uVar11 = uVar6;
      if (-1 < (int)uVar7) {
        uVar11 = uVar7;
      }
      if ((int)uVar11 <= (int)uVar19) {
        uVar19 = uVar11;
      }
      if ((int)uVar9 <= (int)local_1ac) {
        local_1ac = uVar9;
      }
      local_b8 = (longlong *)0x0;
      local_ac = 0;
      plVar14 = plVar12;
      plVar13 = plVar12;
      plVar17 = plVar12;
      uVar9 = local_1b0;
      uVar11 = local_1ac;
      if ((int)uVar10 <= (int)local_1ac) {
        do {
          uVar6 = uVar9;
          if ((int)uVar9 <= (int)uVar19) {
            local_1b8 = (longlong *)((ulonglong)uVar10 << 0x20);
            do {
              local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,uVar9);
              iVar8 = *(int *)(param_1 + 0x28) * uVar10 + uVar9;
              if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x18))) {
                local_b0 = (int)plVar17 + 1;
                if ((int)plVar13 < (int)local_b0) {
                  TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                            (local_138,plVar17);
                  plVar14 = local_b8;
                }
                plVar13 = local_138;
                if (plVar14 != (longlong *)0x0) {
                  plVar13 = plVar14;
                }
                plVar13[(int)plVar17] = (longlong)local_1b8;
                plVar13 = (longlong *)(ulonglong)local_ac;
                plVar17 = (longlong *)(ulonglong)local_b0;
                plVar14 = local_b8;
              }
              uVar9 = uVar9 + 1;
              uVar6 = local_1b0;
              uVar11 = local_1ac;
            } while ((int)uVar9 <= (int)uVar19);
          }
          uVar9 = uVar6;
          uVar6 = (uint)plVar17;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 <= (int)uVar11);
      }
      plVar13 = local_138;
      if (plVar14 != (longlong *)0x0) {
        plVar13 = plVar12;
      }
      puVar15 = (undefined4 *)((ulonglong)plVar13 | (ulonglong)plVar14);
      local_16c = 1;
      local_1d0 = (longlong *)0x0;
      local_1c8 = 0;
      puVar1 = puVar15 + (longlong)(int)uVar6 * 2;
      plVar13 = plVar12;
      iVar8 = local_148;
      local_178 = fVar22;
      local_174 = fVar23;
      local_170 = param_4;
      if (puVar15 != puVar1) {
        local_1c8._4_4_ = 0;
        iVar5 = local_1c8._4_4_;
        do {
          local_180 = *puVar15;
          local_17c = puVar15[1];
          FUN_1418449c0(param_1,local_168,&local_180,local_1d8[0]);
          if ((0.0 <= local_158) && (0 < local_160)) {
            iVar8 = (int)plVar12;
            uVar19 = iVar8 + 1;
            local_1c8 = CONCAT44(local_1c8._4_4_,uVar19);
            if (iVar5 < (int)uVar19) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1d0,plVar12);
              plVar13 = local_1d0;
              iVar5 = local_1c8._4_4_;
              uVar19 = (uint)local_1c8;
            }
            plVar12 = (longlong *)(ulonglong)uVar19;
            FUN_1417f3cd0(plVar13 + (longlong)iVar8 * 3,local_168);
          }
          TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
          ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(local_168);
          iVar8 = local_1a8;
          puVar15 = puVar15 + 2;
        } while (puVar15 != puVar1);
        iVar5 = (int)plVar12;
        plVar14 = local_b8;
        if (0 < iVar5) {
          local_1d8[0] = 0;
          AlgoImpl::
          IntroSortInternal<FHittestGrid::FWidgetPathAndDist,FIdentityFunctor,TDereferenceWrapper<FHittestGrid::FWidgetPathAndDist,<lambda_990cf73e1d5d94f173ae3976780a053d>_>_>
                    (plVar13,(longlong)iVar5,0,local_1d8);
          local_1b8 = plVar13 + (longlong)iVar5 * 3;
          plVar14 = local_b8;
          plVar17 = plVar13;
          if (plVar13 != local_1b8) {
            do {
              iVar5 = (int)plVar17[1] + -1;
              lVar20 = (longlong)iVar5;
              if (-1 < iVar5) {
                lVar18 = lVar20 * 0x58;
LAB_141832790:
                cVar4 = (**(code **)(**(longlong **)(lVar18 + 0x38 + *plVar17) + 400))();
                param_2 = local_1a0;
                if (cVar4 == '\0') goto code_r0x0001418327a5;
                iVar5 = *(int *)((longlong)plVar17 + 0x14);
                *local_1a0 = 0;
                if (iVar5 < local_13c) {
                  *(int *)(local_1a0 + 1) = iVar8;
                  if (iVar8 == 0) {
                    *(undefined4 *)((longlong)local_1a0 + 0xc) = 0;
                  }
                  else {
                    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(local_1a0,iVar8,0);
                    plVar14 = (longlong *)*param_2;
                    plVar13 = (longlong *)(local_1c0 + 0x50);
                    plVar12 = plVar14 + 10;
                    do {
                      lVar20 = plVar13[-9];
                      *plVar14 = plVar13[-10];
                      plVar14[1] = lVar20;
                      lVar20 = plVar13[-7];
                      plVar14[2] = plVar13[-8];
                      plVar14[3] = lVar20;
                      uVar2 = *(undefined4 *)((longlong)plVar13 + -0x2c);
                      lVar20 = plVar13[-5];
                      uVar3 = *(undefined4 *)((longlong)plVar13 + -0x24);
                      *(int *)(plVar14 + 4) = (int)plVar13[-6];
                      *(undefined4 *)((longlong)plVar14 + 0x24) = uVar2;
                      *(int *)(plVar14 + 5) = (int)lVar20;
                      *(undefined4 *)((longlong)plVar14 + 0x2c) = uVar3;
                      plVar14[6] = plVar13[-4];
                      plVar12[-3] = plVar13[-3];
                      lVar20 = plVar13[-2];
                      plVar12[-2] = lVar20;
                      if (lVar20 != 0) {
                        LOCK();
                        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                        UNLOCK();
                      }
                      plVar12[-1] = plVar13[-1];
                      lVar20 = *plVar13;
                      *plVar12 = lVar20;
                      if (lVar20 != 0) {
                        LOCK();
                        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                        UNLOCK();
                      }
                      plVar14 = plVar14 + 0xb;
                      plVar12 = plVar12 + 0xb;
                      plVar13 = plVar13 + 0xb;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    plVar12 = (longlong *)(local_1c8 & 0xffffffff);
                    plVar13 = local_1d0;
                  }
                  uVar19 = (uint)plVar12;
                  plVar17 = plVar13;
                  while (plVar14 = local_b8, uVar19 != 0) {
                    TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
                    ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(plVar17);
                    plVar17 = plVar17 + 3;
                    uVar19 = (int)plVar12 - 1;
                    plVar12 = (longlong *)(ulonglong)uVar19;
                  }
                }
                else {
                  iVar8 = (int)plVar17[1];
                  lVar20 = *plVar17;
                  *(int *)(local_1a0 + 1) = iVar8;
                  if (iVar8 == 0) {
                    *(undefined4 *)((longlong)local_1a0 + 0xc) = 0;
                  }
                  else {
                    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(local_1a0,iVar8,0);
                    plVar13 = (longlong *)*param_2;
                    plVar12 = (longlong *)(lVar20 + 0x50);
                    plVar14 = plVar13 + 10;
                    do {
                      lVar20 = plVar12[-9];
                      *plVar13 = plVar12[-10];
                      plVar13[1] = lVar20;
                      lVar20 = plVar12[-7];
                      plVar13[2] = plVar12[-8];
                      plVar13[3] = lVar20;
                      uVar2 = *(undefined4 *)((longlong)plVar12 + -0x2c);
                      lVar20 = plVar12[-5];
                      uVar3 = *(undefined4 *)((longlong)plVar12 + -0x24);
                      *(int *)(plVar13 + 4) = (int)plVar12[-6];
                      *(undefined4 *)((longlong)plVar13 + 0x24) = uVar2;
                      *(int *)(plVar13 + 5) = (int)lVar20;
                      *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar3;
                      plVar13[6] = plVar12[-4];
                      plVar14[-3] = plVar12[-3];
                      lVar20 = plVar12[-2];
                      plVar14[-2] = lVar20;
                      if (lVar20 != 0) {
                        LOCK();
                        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                        UNLOCK();
                      }
                      plVar14[-1] = plVar12[-1];
                      lVar20 = *plVar12;
                      *plVar14 = lVar20;
                      if (lVar20 != 0) {
                        LOCK();
                        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                        UNLOCK();
                      }
                      plVar13 = plVar13 + 0xb;
                      plVar14 = plVar14 + 0xb;
                      plVar12 = plVar12 + 0xb;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    plVar12 = (longlong *)(local_1c8 & 0xffffffff);
                    plVar13 = local_1d0;
                  }
                  uVar19 = (uint)plVar12;
                  plVar17 = plVar13;
                  while (plVar14 = local_b8, uVar19 != 0) {
                    TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
                    ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(plVar17);
                    plVar17 = plVar17 + 3;
                    uVar19 = (int)plVar12 - 1;
                    plVar12 = (longlong *)(ulonglong)uVar19;
                  }
                }
                goto joined_r0x000141832976;
              }
LAB_1418327af:
              plVar17 = plVar17 + 3;
              plVar14 = local_b8;
            } while (plVar17 != local_1b8);
          }
        }
      }
      param_2 = local_1a0;
      *local_1a0 = 0;
      *(int *)(local_1a0 + 1) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)((longlong)local_1a0 + 0xc) = 0;
      }
      else {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(local_1a0,iVar8,0);
        plVar14 = (longlong *)*param_2;
        plVar13 = (longlong *)(local_1c0 + 0x50);
        plVar12 = plVar14 + 10;
        do {
          lVar20 = plVar13[-9];
          *plVar14 = plVar13[-10];
          plVar14[1] = lVar20;
          lVar20 = plVar13[-7];
          plVar14[2] = plVar13[-8];
          plVar14[3] = lVar20;
          uVar2 = *(undefined4 *)((longlong)plVar13 + -0x2c);
          lVar20 = plVar13[-5];
          uVar3 = *(undefined4 *)((longlong)plVar13 + -0x24);
          *(int *)(plVar14 + 4) = (int)plVar13[-6];
          *(undefined4 *)((longlong)plVar14 + 0x24) = uVar2;
          *(int *)(plVar14 + 5) = (int)lVar20;
          *(undefined4 *)((longlong)plVar14 + 0x2c) = uVar3;
          plVar14[6] = plVar13[-4];
          plVar12[-3] = plVar13[-3];
          lVar20 = plVar13[-2];
          plVar12[-2] = lVar20;
          if (lVar20 != 0) {
            LOCK();
            *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
            UNLOCK();
          }
          plVar12[-1] = plVar13[-1];
          lVar20 = *plVar13;
          *plVar12 = lVar20;
          if (lVar20 != 0) {
            LOCK();
            *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
            UNLOCK();
          }
          plVar14 = plVar14 + 0xb;
          plVar12 = plVar12 + 0xb;
          plVar13 = plVar13 + 0xb;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        plVar12 = (longlong *)(local_1c8 & 0xffffffff);
        plVar14 = local_b8;
        plVar13 = local_1d0;
      }
      uVar19 = (uint)plVar12;
      plVar17 = plVar13;
      while (uVar19 != 0) {
        TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
        ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(plVar17);
        plVar17 = plVar17 + 3;
        uVar19 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar19;
        plVar14 = local_b8;
      }
joined_r0x000141832976:
      if (plVar13 != (longlong *)0x0) {
        FMemory::Free(plVar13);
        plVar14 = local_b8;
      }
      if (plVar14 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::
    ~TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>(&local_150);
  }
  return param_2;
code_r0x0001418327a5:
  lVar18 = lVar18 + -0x58;
  lVar20 = lVar20 + -1;
  if (lVar20 < 0) goto LAB_1418327af;
  goto LAB_141832790;
}



// FUNCTION 141832b70 FUN_141832b70 body=1479 status=ok
// SIG undefined FUN_141832b70(void)

longlong * FUN_141832b70(longlong *param_1,longlong *param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  byte local_res10 [8];
  byte local_res18 [16];
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((-1 < param_3) && (param_3 < (int)param_1[1])) {
    do {
      plVar20 = (longlong *)((longlong)param_3 * 0x88 + *param_1);
      plVar14 = (longlong *)plVar20[1];
      plVar17 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        iVar16 = (int)plVar14[1];
        bVar21 = iVar16 == 0;
        if (bVar21) {
          *(int *)(plVar14 + 1) = 0;
          iVar16 = 0;
        }
        UNLOCK();
        while (plVar17 = (longlong *)0x0, !bVar21) {
          LOCK();
          bVar21 = iVar16 == (int)plVar14[1];
          if (bVar21) {
            *(int *)(plVar14 + 1) = iVar16 + 1;
          }
          UNLOCK();
          if (bVar21) {
            plVar17 = plVar14;
            if ((plVar14 != (longlong *)0x0) && (lVar19 = *plVar20, lVar19 != 0)) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              lVar12 = plVar20[4];
              lVar4 = plVar20[5];
              lVar7 = plVar20[6];
              lVar8 = plVar20[7];
              lVar9 = plVar20[8];
              uVar5 = *(undefined4 *)((longlong)plVar20 + 0x44);
              lVar10 = plVar20[9];
              uVar6 = *(undefined4 *)((longlong)plVar20 + 0x4c);
              lVar18 = plVar20[10];
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              LOCK();
              plVar17 = plVar14 + 1;
              lVar11 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                iVar16 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              iVar16 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar16 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
                TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_2,iVar16);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_2 + 0x58),(void *)*param_2,(longlong)iVar16 * 0x58);
              plVar17 = (longlong *)*param_2;
              *plVar17 = lVar12;
              plVar17[1] = lVar4;
              plVar17[2] = lVar7;
              plVar17[3] = lVar8;
              *(int *)(plVar17 + 4) = (int)lVar9;
              *(undefined4 *)((longlong)plVar17 + 0x24) = uVar5;
              *(int *)(plVar17 + 5) = (int)lVar10;
              *(undefined4 *)((longlong)plVar17 + 0x2c) = uVar6;
              plVar17[6] = lVar18;
              plVar17[7] = lVar19;
              plVar17[8] = (longlong)plVar14;
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              plVar17[9] = 0;
              plVar17[10] = 0;
              LOCK();
              plVar17 = plVar14 + 1;
              lVar19 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                iVar16 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
              LOCK();
              plVar17 = plVar14 + 1;
              lVar19 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                iVar16 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
              goto LAB_141832ebe;
            }
            break;
          }
          LOCK();
          iVar16 = (int)plVar14[1];
          bVar21 = iVar16 == 0;
          if (bVar21) {
            *(int *)(plVar14 + 1) = 0;
            iVar16 = 0;
          }
          UNLOCK();
        }
      }
      iVar16 = *(int *)((longlong)param_2 + 0xc);
      iVar15 = (int)param_2[1];
      plVar14 = plVar17;
      if (iVar16 < 0) {
        if (iVar15 != 0) {
          plVar17 = (longlong *)(*param_2 + 0x40);
          do {
            plVar3 = (longlong *)plVar17[2];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar19 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar16 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar3 = (longlong *)*plVar17;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar19 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar16 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar17 = plVar17 + 0xb;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          iVar16 = *(int *)((longlong)param_2 + 0xc);
        }
        *(undefined4 *)(param_2 + 1) = 0;
        if (iVar16 != 0) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_2,0);
        }
      }
      else {
        if (iVar15 != 0) {
          plVar17 = (longlong *)(*param_2 + 0x40);
          do {
            plVar3 = (longlong *)plVar17[2];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar19 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar16 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3);
                }
              }
            }
            plVar3 = (longlong *)*plVar17;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar19 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar16 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3);
                }
              }
            }
            plVar17 = plVar17 + 0xb;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        *(undefined4 *)(param_2 + 1) = 0;
      }
LAB_141832ebe:
      param_3 = (int)plVar20[0x10];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
    } while (param_3 != -1);
    if (DAT_1469eaf2c != 0) {
      lVar19 = *param_2;
      lVar12 = param_2[1];
      for (lVar18 = lVar19; lVar18 != (longlong)(int)lVar12 * 0x58 + lVar19; lVar18 = lVar18 + 0x58)
      {
        lVar4 = *(longlong *)(lVar18 + 0x38);
        if (((*(int *)(lVar4 + 0xc0) != 0) && (*(longlong **)(lVar4 + 0xb8) != (longlong *)0x0)) &&
           (cVar13 = (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x18))(), cVar13 != '\0')) {
          if (*(int *)(lVar4 + 0xc0) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(lVar4 + 0xb8);
          }
          (**(code **)(*plVar14 + 0x38))(plVar14,local_res18);
          *(byte *)(lVar4 + 0xb0) = local_res18[0];
        }
        if ((*(byte *)(lVar4 + 0xb0) & 0x10) == 0) {
          lVar19 = (lVar18 - lVar19) / 0x58;
          iVar16 = (int)lVar19;
          if (iVar16 != -1) {
            TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_2,lVar19,(int)param_2[1] - iVar16,1);
          }
          break;
        }
      }
      iVar16 = (int)param_2[1] + -1;
      lVar19 = (longlong)iVar16;
      if (-1 < iVar16) {
        lVar18 = lVar19 * 0x58;
        do {
          lVar12 = *(longlong *)(*param_2 + 0x38 + lVar18);
          if (((*(int *)(lVar12 + 0xc0) != 0) && (*(longlong **)(lVar12 + 0xb8) != (longlong *)0x0))
             && (cVar13 = (**(code **)(**(longlong **)(lVar12 + 0xb8) + 0x18))(), cVar13 != '\0')) {
            if (*(int *)(lVar12 + 0xc0) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = *(longlong **)(lVar12 + 0xb8);
            }
            (**(code **)(*plVar14 + 0x38))(plVar14,local_res10);
            *(byte *)(lVar12 + 0xb0) = local_res10[0];
          }
          if ((*(byte *)(lVar12 + 0xb0) & 8) != 0) {
            if (iVar16 != -1) {
              iVar15 = ((int)param_2[1] - iVar16) + -1;
              if (0 < iVar15) {
                TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                          (param_2,iVar16 + 1,iVar15,1);
              }
              goto LAB_141833049;
            }
            break;
          }
          iVar16 = iVar16 + -1;
          lVar18 = lVar18 + -0x58;
          lVar19 = lVar19 + -1;
        } while (-1 < lVar19);
      }
      FUN_141856830(param_2,0);
    }
LAB_141833049:
    if (param_4 == '\0') {
      lVar19 = *param_2;
      lVar12 = param_2[1];
      for (lVar18 = lVar19; lVar18 != (longlong)(int)lVar12 * 0x58 + lVar19; lVar18 = lVar18 + 0x58)
      {
        lVar4 = *(longlong *)(lVar18 + 0x38);
        if (((*(int *)(lVar4 + 0xa8) != 0) && (*(longlong **)(lVar4 + 0xa0) != (longlong *)0x0)) &&
           (cVar13 = (**(code **)(**(longlong **)(lVar4 + 0xa0) + 0x18))(), cVar13 != '\0')) {
          if (*(int *)(lVar4 + 0xa8) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(lVar4 + 0xa0);
          }
          cVar13 = (**(code **)(*plVar14 + 0x38))();
          *(char *)(lVar4 + 0x98) = cVar13;
        }
        if (*(char *)(lVar4 + 0x98) == '\0') {
          lVar19 = (lVar18 - lVar19) / 0x58;
          iVar16 = (int)lVar19;
          if (iVar16 == -1) {
            return param_2;
          }
          TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_2,lVar19,(int)param_2[1] - iVar16,1);
          return param_2;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141833140 FUN_141833140 body=445 status=ok
// SIG undefined FUN_141833140(void)

longlong FUN_141833140(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_res10;
  int local_res18 [2];
  int local_res20 [2];
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong **local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 8);
  local_res10 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res18,param_2);
  plStack_40 = (longlong *)0x0;
  plVar7 = plStack_40;
  if (local_res18[0] != -1) {
    plVar7 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar1);
  }
  plVar6 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plStack_40;
  }
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x68);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144d50208;
      FUN_1417e8ed0(plVar7 + 2,param_2);
      plStack_40 = plVar7;
    }
    local_48 = plStack_40 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
    local_28 = local_48;
    plStack_20 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    local_38 = &local_res10;
    local_30 = &local_28;
    FUN_140dd9ec0(plVar1,local_res20,&local_38,0);
    plVar7 = plStack_20;
    lVar4 = *(longlong *)((longlong)local_res20[0] * 0x20 + 8 + *plVar1);
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
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
    plVar1 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_40 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    return lVar4;
  }
  return *plVar6;
}



// FUNCTION 141833300 GetCharacter body=1003 status=ok
// SIG undefined GetCharacter(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort * FCharacterList::GetCharacter(longlong *param_1,ushort *param_2,ushort param_3,byte param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  longlong *plVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  undefined1 auStack_198 [32];
  ushort local_178 [4];
  undefined8 local_170;
  ushort local_168;
  ushort local_166;
  undefined1 local_164;
  char local_163;
  int local_160 [2];
  longlong local_158 [2];
  undefined4 local_148;
  ushort local_140;
  longlong local_f0;
  byte local_e8;
  undefined1 local_e7;
  char local_e6;
  char local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar2 = param_1[0x1c];
  cVar3 = '\0';
  local_e0 = '\0';
  uVar11 = (uint)param_3;
  local_178[0] = param_3;
  if ((int)uVar11 < (int)lVar2) {
    if ((int)param_1[0xb] <= (int)uVar11) goto LAB_14183349a;
    puVar10 = (ushort *)((ulonglong)param_3 * 0x78 + param_1[10]);
LAB_1418333dd:
    if (puVar10 == (ushort *)local_158) goto LAB_14183349a;
    FShapedGlyphEntry::FShapedGlyphEntry(local_158,puVar10);
    local_f0 = *(longlong *)(puVar10 + 0x34);
    local_e8 = (byte)puVar10[0x38];
    local_e7 = *(undefined1 *)((longlong)puVar10 + 0x71);
    cVar4 = (char)puVar10[0x39];
    local_e0 = '\x01';
    local_e6 = cVar4;
    if (cVar4 == '\0') {
      cVar3 = FUN_141804af0(param_1,local_178[0],param_4);
      if (cVar3 == '\0') {
        local_e0 = cVar3;
        FUN_1417f7000(local_158);
        cVar3 = local_e0;
        if (local_e0 != '\0') goto LAB_141833464;
        goto LAB_1418336a4;
      }
      goto LAB_141833578;
    }
LAB_141833464:
    if ((local_178[0] != 0xfffd) && (param_4 < local_e8)) {
      local_e0 = '\0';
      FUN_1417f7000(local_158);
    }
    cVar3 = local_e0;
    cVar4 = local_e6;
    if (local_e0 == '\0') goto LAB_1418336a4;
LAB_1418335c4:
    uVar5 = local_178[0];
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    *(char *)((longlong)param_2 + 0x27) = cVar4;
    if (cVar4 != '\0') {
      FUN_14183d710(param_1[0x1b],&local_170,local_158,param_1 + 0x16);
      *(char *)((longlong)param_2 + 0x27) = local_163;
      cVar3 = local_e0;
      if (local_163 != '\0') {
        *(undefined4 *)(param_2 + 2) = local_148;
        *(longlong *)(param_2 + 4) = local_f0;
        *param_2 = uVar5;
        uVar1 = *(undefined4 *)(local_158[0] + 0x18);
        param_2[10] = local_170._4_2_;
        param_2[0xb] = local_170._6_2_;
        param_2[0xc] = local_168;
        param_2[0xd] = local_166;
        param_2[0xe] = (ushort)local_170;
        param_2[0xf] = local_170._2_2_;
        *(undefined4 *)(param_2 + 8) = uVar1;
        uVar5 = FUN_141831ab0(param_1);
        param_2[0x10] = uVar5;
        param_2[0x11] = local_140;
        *(undefined1 *)(param_2 + 0x12) = local_164;
        *(undefined1 *)((longlong)param_2 + 0x25) = local_e7;
        *(byte *)(param_2 + 0x13) = local_e8;
        cVar3 = local_e0;
      }
    }
  }
  else {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)param_3) * 4)
      ;
      if (iVar6 != -1) {
        do {
          puVar8 = (ushort *)((longlong)iVar6 * 0x88 + *param_1);
          if (*puVar8 == param_3) {
            if (iVar6 != -1) goto LAB_1418333c9;
            break;
          }
          iVar6 = *(int *)(puVar8 + 0x40);
        } while (iVar6 != -1);
      }
    }
    puVar8 = (ushort *)0x0;
LAB_1418333c9:
    puVar10 = puVar8 + 4;
    if (puVar8 == (ushort *)0x0) {
      puVar10 = (ushort *)0x0;
    }
    if (puVar10 != (ushort *)0x0) goto LAB_1418333dd;
LAB_14183349a:
    cVar4 = FUN_141804af0(param_1,param_3,param_4);
    if (cVar4 != '\0') {
      if ((int)uVar11 < (int)lVar2) {
        lVar2 = param_1[0xb];
        iVar9 = ((uint)local_178[0] - (int)param_1[0xb]) + 1;
        iVar6 = (int)lVar2 + iVar9;
        *(int *)(param_1 + 0xb) = iVar6;
        if (*(int *)((longlong)param_1 + 0x5c) < iVar6) {
          TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                    (param_1 + 10);
        }
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)lVar2 * 0x78 + param_1[10]),0,(longlong)iVar9 * 0x78);
        plVar7 = (longlong *)((ulonglong)local_178[0] * 0x78 + param_1[10]);
      }
      else {
        local_170 = local_178;
        TSet<TTuple<wchar_t,FCharacterList::FCharacterListEntry>,TDefaultMapHashableKeyFuncs<wchar_t,FCharacterList::FCharacterListEntry,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<wchar_t_const_&>_>(param_1,local_160,&local_170,0);
        plVar7 = (longlong *)(*param_1 + (longlong)local_160[0] * 0x88 + 8);
      }
      if (plVar7 != local_158) {
        FShapedGlyphEntry::FShapedGlyphEntry(local_158,plVar7);
        local_f0 = plVar7[0xd];
        local_e8 = *(byte *)(plVar7 + 0xe);
        local_e7 = *(undefined1 *)((longlong)plVar7 + 0x71);
        cVar4 = *(char *)((longlong)plVar7 + 0x72);
        local_e0 = '\x01';
        local_e6 = cVar4;
LAB_141833578:
        plVar7 = (longlong *)FUN_141803eb0(param_1,local_d8,local_178[0]);
        if (plVar7 != local_158) {
          local_e0 = 0;
          FUN_1417f7000(local_158);
          FCharacterListEntry::FCharacterListEntry(local_158,plVar7);
          local_e0 = '\x01';
          cVar4 = local_e6;
        }
        FUN_1417f7000(local_d8);
        cVar3 = '\x01';
        goto LAB_1418335c4;
      }
    }
LAB_1418336a4:
    GetCharacter(param_1,param_2,0xfffd,param_4);
  }
  if (cVar3 != '\0') {
    local_e0 = 0;
    FUN_1417f7000(local_158);
  }
  return param_2;
}



// FUNCTION 1418336f0 FUN_1418336f0 body=611 status=ok
// SIG undefined FUN_1418336f0(void)

longlong FUN_1418336f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int local_res8 [2];
  int local_d8 [2];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong **local_b8;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_1417efe40(&local_a8,param_2,param_4,param_3);
  TSet<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>_>,TDefaultMapHashableKeyFuncs<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_res8,&local_a8);
  plVar5 = (longlong *)0x0;
  plVar4 = plVar5;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x90 + *(longlong *)(param_1 + 0x40));
  }
  plVar6 = plVar4 + 0xf;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  if (plVar6 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0xe8);
    local_d0 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *(undefined4 *)(plVar4 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
      plVar4[8] = 0;
      *(undefined4 *)(plVar4 + 9) = 0;
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      plVar4[0xc] = local_a8;
      plVar4[0xd] = local_a0;
      plVar4[0xe] = local_98;
      plVar4[0xf] = lStack_90;
      plVar4[0x10] = local_88;
      plVar4[0x11] = lStack_80;
      plVar4[0x12] = local_78;
      plVar4[0x13] = (longlong)local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      plVar4[0x14] = local_68;
      *(undefined4 *)(plVar4 + 0x15) = local_60;
      *(undefined1 *)((longlong)plVar4 + 0xac) = local_5c;
      plVar4[0x16] = local_58;
      plVar4[0x17] = lStack_50;
      plVar4[0x18] = local_48;
      plVar4[0x19] = lStack_40;
      *(undefined4 *)(plVar4 + 0x1a) = local_38;
      *(undefined4 *)((longlong)plVar4 + 0xd4) = local_34;
      plVar4[0x1b] = param_1;
      plVar4[0x1c] = 0x100;
      local_d0 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_144d503b8;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)local_d0;
      plVar5 = plVar4;
    }
    local_c8 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_d0,local_d0,local_d0);
    local_c0 = &local_a8;
    local_b8 = &local_d0;
    FUN_1417df7c0(param_1 + 0x40,local_d8,&local_c0,0);
    plVar5 = local_c8;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x78 + (longlong)local_d8[0] * 0x90);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c8 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_c8)(local_c8);
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
  else {
    lVar7 = *plVar6;
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return lVar7;
}



// FUNCTION 141833990 GetChildWindows body=8 status=ok
// SIG undefined GetChildWindows(void)

longlong SWindow::GetChildWindows(longlong param_1)

{
  return param_1 + 0x578;
}



// FUNCTION 1418339a0 FUN_1418339a0 body=8 status=ok
// SIG undefined FUN_1418339a0(void)

longlong FUN_1418339a0(longlong param_1)

{
  return param_1 + 0x208;
}



// FUNCTION 1418339c0 GetClientRectInScreen body=278 status=ok
// SIG undefined GetClientRectInScreen(void)

float * SWindow::GetClientRectInScreen(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined1 local_68 [96];
  
  if ((*(byte *)(param_1 + 0x351) & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x37c);
    fVar2 = *(float *)(param_1 + 0x378);
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = fVar2;
    param_2[3] = fVar1;
    return param_2;
  }
  if ((*(byte *)(param_1 + 0x351) & 1) != 0) {
    GetRectInScreen();
    return param_2;
  }
  fVar1 = *(float *)(param_1 + 0x368);
  fVar2 = *(float *)(param_1 + 0x36c);
  fVar3 = *(float *)(param_1 + 0x37c);
  fVar4 = *(float *)(param_1 + 0x398);
  fVar5 = *(float *)(param_1 + 0x378);
  pfVar9 = (float *)FUN_1418454d0(param_1,local_68,0);
  fVar6 = pfVar9[1];
  fVar7 = pfVar9[3];
  fVar8 = *pfVar9;
  param_2[2] = (fVar1 + fVar5) - pfVar9[2];
  *param_2 = fVar1 + fVar8;
  param_2[1] = fVar2 + fVar6 + fVar4;
  param_2[3] = (fVar2 + fVar3) - fVar7;
  return param_2;
}



// FUNCTION 141833ae0 GetClientSizeInScreen body=56 status=ok
// SIG undefined GetClientSizeInScreen(void)

float * SWindow::GetClientSizeInScreen(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined1 local_18 [16];
  
  pfVar3 = (float *)GetClientRectInScreen(param_1,local_18);
  fVar1 = pfVar3[3];
  fVar2 = pfVar3[1];
  *param_2 = pfVar3[2] - *pfVar3;
  param_2[1] = fVar1 - fVar2;
  return param_2;
}



// FUNCTION 141833b20 GetClippingIndex body=25 status=ok
// SIG undefined GetClippingIndex(void)

undefined4 FSlateClippingManager::GetClippingIndex(longlong *param_1)

{
  if (0 < (int)param_1[1]) {
    return *(undefined4 *)(*param_1 + -4 + (longlong)(int)param_1[1] * 4);
  }
  return 0xffffffff;
}



// FUNCTION 141833b40 GetClippingIndex body=32 status=ok
// SIG undefined GetClippingIndex(void)

undefined4 FSlateWindowElementList::GetClippingIndex(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x990)) {
    return *(undefined4 *)
            (*(longlong *)(param_1 + 0x988) + -4 + (longlong)*(int *)(param_1 + 0x990) * 4);
  }
  return 0xffffffff;
}



// FUNCTION 141833b60 GetClippingRectangleInWindow body=50 status=ok
// SIG undefined GetClippingRectangleInWindow(void)

undefined8 * SWindow::GetClippingRectangleInWindow(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  pfVar3 = (float *)(param_1 + 0x380);
  if (*pfVar3 == 0.0) {
    pfVar3 = (float *)(param_1 + 0x378);
  }
  fVar1 = *pfVar3;
  fVar2 = pfVar3[1];
  *param_2 = 0;
  *(float *)(param_2 + 1) = fVar1;
  *(float *)((longlong)param_2 + 0xc) = fVar2;
  return param_2;
}



// FUNCTION 141833ba0 FUN_141833ba0 body=95 status=ok
// SIG undefined FUN_141833ba0(void)

longlong FUN_141833ba0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x990) < 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x988) + -4 + (longlong)*(int *)(param_1 + 0x990) * 4);
  }
  if (iVar1 != -1) {
    FSlateClippingState::FSlateClippingState
              (param_2,(longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x998));
    *(undefined1 *)(param_2 + 0x40) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 0x40) = 0;
  return param_2;
}



// FUNCTION 141833c00 GetColor body=177 status=ok
// SIG undefined GetColor(void)

longlong * FSlateStyleSet::GetColor(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res8 [4];
  
  ISlateStyle::Join(local_res8);
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar2 = *(longlong *)(param_1 + 0x160);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar2 = param_1 + 0x158;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)
                              ((int)((ulonglong)local_res8[0] >> 0x20) + (int)local_res8[0]) &
                             (longlong)*(int *)(param_1 + 0x168) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x120));
        if (*plVar4 == local_res8[0]) {
          if (iVar1 != -1) goto LAB_141833c92;
          break;
        }
        iVar1 = (int)plVar4[3];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_141833c92:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  plVar4 = (longlong *)&DAT_1464b9ef8;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = plVar3;
  }
  return plVar4;
}



// FUNCTION 141833cc0 FUN_141833cc0 body=1353 status=ok
// SIG undefined FUN_141833cc0(void)

longlong * FUN_141833cc0(longlong param_1,longlong *param_2,int *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 **ppuVar8;
  longlong *plVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 local_res18 [8];
  char local_res20;
  undefined2 *local_118;
  int local_110;
  undefined4 local_10c;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong **local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  if ((*param_3 == 0) && (param_3[1] == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_res20 = param_4;
    FName::ToString(param_3,&local_118);
    cVar4 = FPaths::FileExists(&local_118);
    plVar15 = (longlong *)0x0;
    if (cVar4 == '\0') {
      puVar6 = (undefined8 *)FName::ToString(param_3,local_78);
      puVar7 = (undefined8 *)FPaths::ProjectContentDir(local_88);
      iVar13 = 2;
      iVar5 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar5 = 0;
      }
      if ((*(int *)(puVar7 + 1) != 0) || (iVar10 = iVar13, iVar5 == -1)) {
        iVar10 = 1;
      }
      local_108 = (undefined2 *)*puVar7;
      *puVar7 = 0;
      iVar3 = *(int *)(puVar7 + 1);
      local_100 = puVar7[1];
      puVar7[1] = 0;
      if (*(int *)((longlong)puVar7 + 0xc) < iVar3 + iVar5 + iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108);
      }
      FString::PathAppend(&local_108,*puVar6,iVar5);
      if (local_118 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_118 = local_108;
      local_110 = (int)local_100;
      local_10c = local_100._4_4_;
      local_100 = 0;
      local_108 = (undefined2 *)0x0;
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      cVar4 = FPaths::FileExists(&local_118);
      if (cVar4 == '\0') {
        puVar6 = (undefined8 *)FName::ToString(param_3,local_58);
        puVar7 = (undefined8 *)FPaths::EngineContentDir(local_68);
        iVar5 = *(int *)(puVar6 + 1) + -1;
        if (*(int *)(puVar6 + 1) == 0) {
          iVar5 = 0;
        }
        if ((*(int *)(puVar7 + 1) != 0) || (iVar5 == -1)) {
          iVar13 = 1;
        }
        local_f8 = (undefined2 *)*puVar7;
        *puVar7 = 0;
        iVar10 = *(int *)(puVar7 + 1);
        local_f0 = puVar7[1];
        puVar7[1] = 0;
        if (*(int *)((longlong)puVar7 + 0xc) < iVar10 + iVar5 + iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
        }
        FString::PathAppend(&local_f8,*puVar6,iVar5);
        if (local_118 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_118 = local_f8;
        local_110 = (int)local_f0;
        local_10c = local_f0._4_4_;
        local_f0 = 0;
        local_f8 = (undefined2 *)0x0;
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        cVar4 = FPaths::FileExists(&local_118);
        if (cVar4 == '\0') {
          ppuVar8 = (undefined2 **)FName::ToString(param_3,local_48);
          if (&local_118 != ppuVar8) {
            if (local_118 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            local_118 = *ppuVar8;
            *ppuVar8 = (undefined2 *)0x0;
            local_110 = *(int *)(ppuVar8 + 1);
            local_10c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
            ppuVar8[1] = (undefined2 *)0x0;
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
    puVar11 = &DAT_143f3eda8;
    if (local_110 != 0) {
      puVar11 = local_118;
    }
    FName::FName(&local_c0,puVar11,1);
    local_b8 = local_c0;
    local_b0 = param_4;
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
      lVar14 = *(longlong *)(param_1 + 0x60);
      iVar5 = GetTypeHash(&local_b8);
      if (lVar14 == 0) {
        lVar14 = param_1 + 0x58;
      }
      iVar5 = *(int *)(lVar14 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
      if (iVar5 != -1) {
        do {
          plVar9 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x28);
          if ((*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x28) == local_c0) &&
             ((char)plVar9[1] == param_4)) {
            if (iVar5 != -1) goto LAB_141833ff9;
            break;
          }
          iVar5 = (int)plVar9[4];
        } while (iVar5 != -1);
      }
    }
    plVar9 = plVar15;
LAB_141833ff9:
    plVar12 = plVar9 + 2;
    if (plVar9 == (longlong *)0x0) {
      plVar12 = plVar15;
    }
    if (plVar12 == (longlong *)0x0) {
      plVar9 = (longlong *)operator_new(0x58);
      puVar11 = local_118;
      local_c8 = plVar15;
      if (plVar9 != (longlong *)0x0) {
        *(undefined4 *)(plVar9 + 1) = 1;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_DestroyObject_144d50218;
        lVar14 = (longlong)local_110;
        local_e8 = 0;
        local_e0 = (void *)0x0;
        local_d8 = local_110;
        if (local_110 == 0) {
          local_d4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_110,0);
          _guard_xfg_dispatch_icall_nop(local_e0,puVar11,lVar14 * 2);
        }
        FStandaloneCompositeFont::FStandaloneCompositeFont
                  (plVar9 + 2,&local_e8,&local_e0,local_res20,0);
        local_c8 = plVar9;
      }
      local_d0 = local_c8 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_d0,local_d0,local_d0);
      plVar9 = local_c8;
      if (local_d0 != (longlong *)0x0) {
        plVar15 = local_d0 + 2;
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_c8 + 1;
          lVar14 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_c8)(local_c8);
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
      }
      local_a0 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_98 = &local_b8;
      local_90 = &local_a8;
      local_a8 = plVar15;
      FUN_1417df1c0(param_1 + 0x20,local_res18,&local_98,0);
      plVar12 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a0 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_a0)(local_a0);
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
      *param_2 = (longlong)plVar15;
      param_2[1] = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar9 + 1;
        lVar14 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
    }
    else {
      *param_2 = *plVar12;
      lVar14 = plVar12[1];
      param_2[1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
    }
    if (local_118 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 141834210 FUN_141834210 body=302 status=ok
// SIG undefined FUN_141834210(void)

longlong FUN_141834210(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar4 = UFontProviderInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (lVar6 != 0) {
        return lVar6;
      }
      uVar4 = FUN_1418315f0();
      plVar5 = (longlong *)FUN_1418397b0(uVar4,local_28);
      lVar6 = *plVar5;
      if (local_20 == (longlong *)0x0) {
        return lVar6;
      }
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return lVar6;
      }
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return lVar6;
      }
      (**(code **)(*local_20 + 8))(local_20,1);
      return lVar6;
    }
  }
  lVar6 = param_1[6];
  if (lVar6 == 0) {
    uVar4 = FUN_1418315f0();
    plVar5 = (longlong *)FUN_1418397b0(uVar4,local_18);
    lVar6 = *plVar5;
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
  }
  return lVar6;
}



// FUNCTION 141834360 FUN_141834360 body=92 status=ok
// SIG undefined FUN_141834360(void)

undefined8 * FUN_141834360(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x350) & 2) == 0) && (*(int *)(param_1 + 0x30c) != 4)) {
    lVar1 = *(longlong *)(param_1 + 0x440);
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 0x18);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x208) + 8))((longlong *)(param_1 + 0x208),param_2,0);
  }
  return param_2;
}



// FUNCTION 1418343c0 GetCornerRadius body=45 status=ok
// SIG undefined GetCornerRadius(void)

undefined8 SWindow::GetCornerRadius(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x350) & 2) == 0) &&
     ((*(int *)(param_1 + 0x30c) - 2U & 0xfffffffd) != 0)) {
    return 6;
  }
  return 0;
}



// FUNCTION 1418343f0 FUN_1418343f0 body=1297 status=ok
// SIG undefined FUN_1418343f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1418343f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined8 local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined1 local_230 [8];
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_208 [8];
  undefined1 local_200 [288];
  undefined1 *local_e0;
  int local_d8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_248 = param_2;
  iVar9 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x68))();
  if ((iVar9 == 1) || (iVar9 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x68))(), iVar9 == 0)
     ) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(int *)(param_1 + 0x30c) == 5) && ((*(byte *)(param_1 + 0x351) & 1) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (*(longlong **)(param_1 + 0x498) == (longlong *)0x0) {
    fVar16 = 1.0;
  }
  else {
    fVar16 = (float)(**(code **)(**(longlong **)(param_1 + 0x498) + 0xf0))();
  }
  fVar17 = (float)(**(code **)(*DAT_1469eaf38 + 0x38))();
  fVar17 = fVar17 * fVar16;
  plVar12 = *(longlong **)(DAT_1469eaf48 + 0x10);
  plVar2 = *(longlong **)(DAT_1469eaf48 + 8);
  fVar16 = fVar17 * *(float *)(param_1 + 0x5c8);
  fVar20 = fVar17 * *(float *)(param_1 + 0x5cc);
  fVar18 = fVar17 * *(float *)(param_1 + 0x5d0);
  fVar19 = fVar17 * *(float *)(param_1 + 0x5d4);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  iVar9 = (**(code **)(*plVar2 + 0x18))();
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (((bVar3) && (!bVar4)) || (iVar9 == 0)) {
    iVar9 = 5;
  }
  else {
    fVar6 = (float)local_248;
    if ((((float)local_248 < 0.0) || (*(float *)(param_1 + 0x378) <= (float)local_248)) ||
       ((fVar7 = local_248._4_4_, local_248._4_4_ < 0.0 ||
        (*(float *)(param_1 + 0x37c) <= local_248._4_4_)))) {
      *(undefined4 *)(param_1 + 0x428) = 0;
      iVar9 = 0;
    }
    else {
      lVar14 = 1;
      lVar15 = 1;
      if (((*(char *)(param_1 + 0x348) == '\x02') && (!bVar3)) &&
         (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x70))(), cVar8 == '\0')) {
        lVar5 = 0;
        if ((fVar16 + 5.0 <= fVar6) &&
           (lVar5 = lVar15, *(float *)(param_1 + 0x378) - (fVar18 + 5.0) <= fVar6)) {
          lVar5 = 2;
        }
        lVar15 = lVar5;
        lVar5 = 0;
        if ((fVar20 + 5.0 <= fVar7) &&
           (lVar5 = lVar14, *(float *)(param_1 + 0x37c) - (fVar19 + 5.0) <= fVar7)) {
          lVar5 = 2;
        }
        lVar14 = lVar5;
        if ((((fVar16 <= fVar6) && (fVar6 < *(float *)(param_1 + 0x378) - fVar18)) &&
            (fVar20 <= fVar7)) && (fVar7 < *(float *)(param_1 + 0x37c) - fVar19)) {
          lVar14 = 1;
          lVar15 = 1;
        }
      }
      plVar12 = DAT_1469eaf38;
      iVar9 = (&DAT_144d501b0)[lVar15 + lVar14 * 3];
      if (iVar9 == 5) {
        puVar11 = (undefined8 *)
                  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_228);
        local_240 = *puVar11;
        local_238 = (longlong *)puVar11[1];
        if (local_238 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_238 + 1) = (int)local_238[1] + 1;
          UNLOCK();
        }
        if (local_220 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_220 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_220)(local_220);
            LOCK();
            piVar1 = (int *)((longlong)local_220 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_220 + 8))(local_220,1);
            }
          }
        }
        plVar2 = DAT_1469eaf38;
        puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12,local_230);
        local_258 = 0;
        (**(code **)(*(longlong *)plVar2[5] + 0x168))
                  ((longlong *)plVar2[5],local_208,*puVar11,&local_240);
        plVar12 = local_238;
        if (local_238 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_238 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        iVar9 = 5;
        iVar10 = iVar9;
        if (0 < local_d8) {
          puVar13 = local_200;
          if (local_e0 != (undefined1 *)0x0) {
            puVar13 = local_e0;
          }
          iVar10 = (**(code **)(**(longlong **)(puVar13 + (longlong)local_d8 * 0x48 + -0x10) + 0x138
                               ))();
          if (iVar10 == 0) {
            puVar13 = local_200;
            if (local_e0 != (undefined1 *)0x0) {
              puVar13 = local_e0;
            }
            plVar12 = (longlong *)
                      TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_218);
            lVar14 = *(longlong *)(puVar13 + (longlong)local_d8 * 0x48 + -0x10);
            lVar15 = *plVar12;
            if (local_210 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_210 + 1;
              lVar5 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_210)(local_210);
                LOCK();
                piVar1 = (int *)((longlong)local_210 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_210 + 8))(local_210,1);
                }
              }
            }
            iVar10 = iVar9;
            if ((lVar14 == lVar15) && (fVar7 - fVar20 < fVar17 * *(float *)(param_1 + 0x398))) {
              iVar10 = 10;
            }
          }
        }
        *(int *)(param_1 + 0x428) = iVar10;
        FUN_140458830(local_208);
        iVar9 = *(int *)(param_1 + 0x428);
      }
      else {
        cVar8 = (**(code **)(*DAT_1469eaf38 + 0x90))();
        if (cVar8 != '\0') {
          iVar9 = 5;
        }
        *(int *)(param_1 + 0x428) = iVar9;
      }
    }
  }
  return iVar9;
}



// FUNCTION 141834910 GetCurve body=16 status=ok
// SIG undefined GetCurve(void)

longlong FCurveSequence::GetCurve(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x30) + (longlong)param_2 * 0xc;
}



// FUNCTION 141834930 FUN_141834930 body=123 status=ok
// SIG undefined FUN_141834930(void)

undefined * FUN_141834930(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469eef38) {
    _Init_thread_header(&DAT_1469eef38);
    if (DAT_1469eef38 == -1) {
      FUN_1417e8800(&DAT_1469eecc0);
      atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
      _Init_thread_footer(&DAT_1469eef38);
      return &DAT_1469eecc0;
    }
  }
  return &DAT_1469eecc0;
}



// FUNCTION 1418349b0 FUN_1418349b0 body=123 status=ok
// SIG undefined FUN_1418349b0(void)

undefined * FUN_1418349b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469eeca0) {
    _Init_thread_header(&DAT_1469eeca0);
    if (DAT_1469eeca0 == -1) {
      FCheckBoxStyle::FCheckBoxStyle(&DAT_1469ee720);
      atexit((_func_5014 *)&LAB_143e828d0);
      _Init_thread_footer(&DAT_1469eeca0);
      return &DAT_1469ee720;
    }
  }
  return &DAT_1469ee720;
}



// FUNCTION 141834a30 FUN_141834a30 body=196 status=ok
// SIG undefined FUN_141834a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_141834a30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469ef2e4) {
    _Init_thread_header(&DAT_1469ef2e4);
    if (DAT_1469ef2e4 == -1) {
      FComboButtonStyle::FComboButtonStyle(&DAT_1464ba038);
      _DAT_1464ba3e8 = 0xffffffff;
      _DAT_1464ba3d8 = 0;
      _DAT_1464ba3e0 = 0;
      _DAT_1464ba3ec = 0;
      _DAT_1464ba3f0 = 0;
      _DAT_1464ba3f8 = 0;
      _DAT_1464ba404 = 0;
      _DAT_1464ba3c8 = 0x3f8000003f800000;
      uRam00000001464ba3d0 = 0x3f8000003f800000;
      _DAT_1464ba400 = 0xffffffff;
      atexit(`FComboBoxStyle::GetDefault'::`2'::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&DAT_1469ef2e4);
      return &PTR_PTR_1464ba030;
    }
  }
  return &PTR_PTR_1464ba030;
}



// FUNCTION 141834b00 FUN_141834b00 body=123 status=ok
// SIG undefined FUN_141834b00(void)

undefined * FUN_141834b00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469ef2e0) {
    _Init_thread_header(&DAT_1469ef2e0);
    if (DAT_1469ef2e0 == -1) {
      FComboButtonStyle::FComboButtonStyle(&DAT_1469eef40);
      atexit(`FComboButtonStyle::GetDefault'::`2'::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&DAT_1469ef2e0);
      return &DAT_1469eef40;
    }
  }
  return &DAT_1469eef40;
}



// FUNCTION 141834b80 FUN_141834b80 body=123 status=ok
// SIG undefined FUN_141834b80(void)

undefined * FUN_141834b80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f2940) {
    _Init_thread_header(&DAT_1469f2940);
    if (DAT_1469f2940 == -1) {
      FDockTabStyle::FDockTabStyle(&DAT_1469f2240);
      atexit((_func_5014 *)&LAB_143e829b0);
      _Init_thread_footer(&DAT_1469f2940);
      return &DAT_1469f2240;
    }
  }
  return &DAT_1469f2240;
}



// FUNCTION 141834c00 FUN_141834c00 body=123 status=ok
// SIG undefined FUN_141834c00(void)

undefined * FUN_141834c00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469efd00) {
    _Init_thread_header(&DAT_1469efd00);
    if (DAT_1469efd00 == -1) {
      FEditableTextBoxStyle::FEditableTextBoxStyle(&DAT_1469ef510);
      atexit((_func_5014 *)&LAB_143e829c0);
      _Init_thread_footer(&DAT_1469efd00);
      return &DAT_1469ef510;
    }
  }
  return &DAT_1469ef510;
}



// FUNCTION 141834c80 FUN_141834c80 body=123 status=ok
// SIG undefined FUN_141834c80(void)

undefined * FUN_141834c80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469ef508) {
    _Init_thread_header(&DAT_1469ef508);
    if (DAT_1469ef508 == -1) {
      FEditableTextStyle::FEditableTextStyle(&DAT_1469ef2f0);
      atexit((_func_5014 *)&LAB_143e829d0);
      _Init_thread_footer(&DAT_1469ef508);
      return &DAT_1469ef2f0;
    }
  }
  return &DAT_1469ef2f0;
}



// FUNCTION 141834d00 FUN_141834d00 body=123 status=ok
// SIG undefined FUN_141834d00(void)

undefined * FUN_141834d00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f04c0) {
    _Init_thread_header(&DAT_1469f04c0);
    if (DAT_1469f04c0 == -1) {
      FExpandableAreaStyle::FExpandableAreaStyle(&DAT_1469f03a0);
      atexit(FUN_143e829e0);
      _Init_thread_footer(&DAT_1469f04c0);
      return &DAT_1469f03a0;
    }
  }
  return &DAT_1469f03a0;
}



// FUNCTION 141834d80 FUN_141834d80 body=123 status=ok
// SIG undefined FUN_141834d80(void)

undefined * FUN_141834d80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f2230) {
    _Init_thread_header(&DAT_1469f2230);
    if (DAT_1469f2230 == -1) {
      FHeaderRowStyle::FHeaderRowStyle(&DAT_1469f16c0);
      atexit((_func_5014 *)&LAB_143e82a20);
      _Init_thread_footer(&DAT_1469f2230);
      return &DAT_1469f16c0;
    }
  }
  return &DAT_1469f16c0;
}



// FUNCTION 141834e00 FUN_141834e00 body=142 status=ok
// SIG undefined FUN_141834e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_141834e00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469ef2e8) {
    _Init_thread_header(&DAT_1469ef2e8);
    if (DAT_1469ef2e8 == -1) {
      FUN_1417e8800(&DAT_1464ba418);
      FUN_1417f2e90(&DAT_1464ba690);
      _DAT_1464ba870 = 0;
      uRam00000001464ba878 = 0;
      atexit(`FHyperlinkStyle::GetDefault'::`2'::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&DAT_1469ef2e8);
      return &PTR_PTR_1464ba410;
    }
  }
  return &PTR_PTR_1464ba410;
}



// FUNCTION 141834e90 FUN_141834e90 body=181 status=ok
// SIG undefined FUN_141834e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_141834e90(void)

{
  undefined4 uStackX_c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f0704) {
    _Init_thread_header(&DAT_1469f0704);
    if (DAT_1469f0704 == -1) {
      DAT_1464ba908 = DAT_1464ba908 & 0xfc;
      _DAT_1464ba8a8 = _DAT_1464aa6c0;
      uRam00000001464ba8b0 = _DAT_1464aa6c8;
      uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
      _DAT_1464ba8ec = uStackX_c;
      _DAT_1464ba8e4 = uStackX_c;
      _DAT_1464ba8e0 = (undefined4)DAT_1468b5d88;
      _DAT_1464ba8e8 = _DAT_1464ba8e0;
      atexit(`FInlineTextImageStyle::GetDefault'::`2'::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&DAT_1469f0704);
      return &PTR_PTR_1464ba880;
    }
  }
  return &PTR_PTR_1464ba880;
}



// FUNCTION 141834f50 FUN_141834f50 body=123 status=ok
// SIG undefined FUN_141834f50(void)

undefined * FUN_141834f50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469efeb0) {
    _Init_thread_header(&DAT_1469efeb0);
    if (DAT_1469efeb0 == -1) {
      FProgressBarStyle::FProgressBarStyle(&DAT_1469efd10);
      atexit(`FProgressBarStyle::GetDefault'::`2'::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&DAT_1469efeb0);
      return &DAT_1469efd10;
    }
  }
  return &DAT_1469efd10;
}



// FUNCTION 141834fd0 FUN_141834fd0 body=123 status=ok
// SIG undefined FUN_141834fd0(void)

undefined * FUN_141834fd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f0390) {
    _Init_thread_header(&DAT_1469f0390);
    if (DAT_1469f0390 == -1) {
      FUN_1417ec950(&DAT_1469efec0);
      atexit(FUN_143e82b40);
      _Init_thread_footer(&DAT_1469f0390);
      return &DAT_1469efec0;
    }
  }
  return &DAT_1469efec0;
}



// FUNCTION 141835050 FUN_141835050 body=123 status=ok
// SIG undefined FUN_141835050(void)

undefined * FUN_141835050(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f2b78) {
    _Init_thread_header(&DAT_1469f2b78);
    if (DAT_1469f2b78 == -1) {
      FScrollBoxStyle::FScrollBoxStyle(&DAT_1469f2950);
      atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
      _Init_thread_footer(&DAT_1469f2b78);
      return &DAT_1469f2950;
    }
  }
  return &DAT_1469f2950;
}



// FUNCTION 1418350d0 FUN_1418350d0 body=123 status=ok
// SIG undefined FUN_1418350d0(void)

undefined * FUN_1418350d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f0700) {
    _Init_thread_header(&DAT_1469f0700);
    if (DAT_1469f0700 == -1) {
      FUN_1417f1100(&DAT_1469f04d0);
      atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
      _Init_thread_footer(&DAT_1469f0700);
      return &DAT_1469f04d0;
    }
  }
  return &DAT_1469f04d0;
}



// FUNCTION 141835150 FUN_141835150 body=123 status=ok
// SIG undefined FUN_141835150(void)

undefined * FUN_141835150(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f09f8) {
    _Init_thread_header(&DAT_1469f09f8);
    if (DAT_1469f09f8 == -1) {
      FSpinBoxStyle::FSpinBoxStyle(&DAT_1469f0710);
      atexit((_func_5014 *)&LAB_143e82ca0);
      _Init_thread_footer(&DAT_1469f09f8);
      return &DAT_1469f0710;
    }
  }
  return &DAT_1469f0710;
}



// FUNCTION 1418351d0 FUN_1418351d0 body=123 status=ok
// SIG undefined FUN_1418351d0(void)

undefined * FUN_1418351d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f0b18) {
    _Init_thread_header(&DAT_1469f0b18);
    if (DAT_1469f0b18 == -1) {
      FSplitterStyle::FSplitterStyle(&DAT_1469f0a00);
      atexit(FUN_143e82cb0);
      _Init_thread_footer(&DAT_1469f0b18);
      return &DAT_1469f0a00;
    }
  }
  return &DAT_1469f0a00;
}



// FUNCTION 141835250 FUN_141835250 body=123 status=ok
// SIG undefined FUN_141835250(void)

undefined * FUN_141835250(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f16b0) {
    _Init_thread_header(&DAT_1469f16b0);
    if (DAT_1469f16b0 == -1) {
      FTableColumnHeaderStyle::FTableColumnHeaderStyle(&DAT_1469f11e0);
      atexit(FUN_143e82cf0);
      _Init_thread_footer(&DAT_1469f16b0);
      return &DAT_1469f11e0;
    }
  }
  return &DAT_1469f11e0;
}



// FUNCTION 1418352d0 FUN_1418352d0 body=123 status=ok
// SIG undefined FUN_1418352d0(void)

undefined * FUN_1418352d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f11d8) {
    _Init_thread_header(&DAT_1469f11d8);
    if (DAT_1469f11d8 == -1) {
      FTableRowStyle::FTableRowStyle(&DAT_1469f0b20);
      atexit((_func_5014 *)&LAB_143e82d90);
      _Init_thread_footer(&DAT_1469f11d8);
      return &DAT_1469f0b20;
    }
  }
  return &DAT_1469f0b20;
}



// FUNCTION 141835350 FUN_141835350 body=434 status=ok
// SIG undefined FUN_141835350(void)

longlong FUN_141835350(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [56];
  longlong *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469eecb8) && (_Init_thread_header(&DAT_1469eecb8), DAT_1469eecb8 == -1))
  {
    atexit(FUN_143e82da0);
    _Init_thread_footer(&DAT_1469eecb8);
  }
  if (DAT_1469eeca8 == 0) {
    lVar5 = operator_new(0x1e0);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1417f2e90(lVar5);
    }
    local_60 = (longlong *)operator_new(0x18);
    if (local_60 != (longlong *)0x0) {
      *(undefined4 *)(local_60 + 1) = 1;
      *local_60 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_60 + 0xc) = 1;
      local_60[2] = lVar5;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_68,lVar5,lVar5);
    local_68 = 0;
    DAT_1469eeca8 = lVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_1469eecb0,&local_60);
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
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
    lVar5 = DAT_1469eeca8;
    uVar6 = FUN_141838770(local_58,10);
    FUN_1417f9360(lVar5 + 8,uVar6);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return DAT_1469eeca8;
}



// FUNCTION 141835510 FUN_141835510 body=123 status=ok
// SIG undefined FUN_141835510(void)

undefined * FUN_141835510(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f3b50) {
    _Init_thread_header(&DAT_1469f3b50);
    if (DAT_1469f3b50 == -1) {
      FUN_1417f3e90(&DAT_1469f2b80);
      atexit((_func_5014 *)&LAB_143e82df0);
      _Init_thread_footer(&DAT_1469f3b50);
      return &DAT_1469f2b80;
    }
  }
  return &DAT_1469f2b80;
}



// FUNCTION 141835590 FUN_141835590 body=5452 status=ok
// SIG undefined FUN_141835590(void)

/* WARNING: Removing unreachable block (ram,0x000141835b0b) */
/* WARNING: Removing unreachable block (ram,0x0001418357c1) */
/* WARNING: Removing unreachable block (ram,0x000141835966) */
/* WARNING: Removing unreachable block (ram,0x000141835cb0) */

longlong * FUN_141835590(longlong param_1,longlong *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_538;
  undefined8 local_530;
  longlong local_528;
  undefined8 local_520;
  longlong local_518;
  undefined8 local_510;
  longlong local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  longlong local_498;
  undefined8 local_490;
  longlong local_488;
  undefined8 local_480;
  longlong local_478;
  undefined8 local_470;
  longlong local_468;
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  longlong local_448;
  int local_440;
  int local_43c;
  longlong *local_438;
  longlong *local_430;
  longlong local_428;
  int local_420;
  int local_41c;
  longlong *local_418;
  longlong *local_410;
  longlong local_408;
  int local_400;
  longlong local_3f8;
  int local_3f0;
  longlong local_3e8;
  int local_3e0;
  longlong local_3d8;
  int local_3d0;
  longlong local_3c8;
  int local_3c0;
  longlong local_3b8;
  int local_3b0;
  longlong local_3a8;
  int local_3a0;
  longlong local_398;
  int local_390;
  longlong local_388;
  int local_380;
  longlong local_378;
  int local_370;
  longlong local_368;
  int local_360;
  longlong local_358;
  int local_350;
  longlong local_348;
  int local_340;
  longlong local_338;
  int local_330;
  undefined1 local_328 [8];
  longlong local_320;
  undefined1 local_318 [8];
  undefined8 local_310;
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined2 local_2d0;
  undefined1 local_2c8 [24];
  undefined1 local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  longlong local_220 [2];
  longlong local_210 [2];
  longlong local_200 [2];
  longlong local_1f0 [2];
  longlong local_1e0 [2];
  longlong local_1d0 [2];
  longlong local_1c0 [2];
  longlong local_1b0 [2];
  longlong local_1a0 [2];
  longlong local_190 [2];
  longlong local_180 [2];
  longlong local_170 [2];
  longlong local_160 [2];
  longlong local_150 [2];
  undefined1 local_140 [8];
  undefined1 local_138 [40];
  undefined1 local_110 [8];
  undefined1 local_108 [40];
  undefined1 local_e0 [8];
  undefined1 local_d8 [40];
  undefined1 local_b0 [8];
  undefined1 local_a8 [40];
  undefined1 local_80 [8];
  undefined1 local_78 [56];
  
  pplVar1 = (longlong **)(param_1 + 0x70);
  local_res10 = param_2;
  if (*pplVar1 == (longlong *)0x0) {
    local_430 = (longlong *)
                SharedPointerInternals::NewIntrusiveReferenceController<FStandaloneCompositeFont>();
    local_438 = local_430 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_438,local_438,local_438);
    plVar4 = local_430;
    plVar11 = (longlong *)0x0;
    if (local_438 != (longlong *)0x0) {
      plVar11 = local_438 + 2;
    }
    if (local_430 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_430 + 1) = (int)local_430[1] + 1;
      UNLOCK();
      if (local_430 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_430 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_430)(local_430);
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
    FName::FName(&local_res8,L"Regular",1);
    plVar6 = (longlong *)FPaths::EngineContentDir(local_220);
    lVar7 = plVar6[1];
    local_528 = *plVar6;
    *plVar6 = 0;
    local_520._0_4_ = (int)plVar6[1];
    local_520._4_4_ = *(int *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    if (local_520._4_4_ < (int)((7 - (uint)((int)lVar7 != 0)) + (int)local_520)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_528);
    }
    FString::PathAppend(&local_528,L"Slate",5);
    iVar5 = local_520._4_4_;
    local_4c0._0_4_ = (int)local_520;
    local_4c8 = local_528;
    iVar9 = (int)local_520 + (7 - (uint)((int)local_520 != 0));
    local_528 = 0;
    local_4c0._4_4_ = local_520._4_4_;
    local_520 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4c8);
    }
    FString::PathAppend(&local_4c8,L"Fonts",5);
    iVar5 = local_4c0._4_4_;
    local_4b8 = local_4c8;
    iVar9 = (int)local_4c0 + (0x14 - (uint)((int)local_4c0 != 0));
    local_4c8 = 0;
    local_4b0 = CONCAT44(local_4c0._4_4_,(int)local_4c0);
    local_4c0 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4b8);
    }
    FString::PathAppend(&local_4b8,L"Roboto-Regular.ttf",0x12);
    iVar5 = (int)plVar11[1];
    *(int *)(plVar11 + 1) = iVar5 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar5 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar11,iVar5);
    }
    puVar3 = (undefined8 *)(*plVar11 + (longlong)iVar5 * 0x28);
    *puVar3 = local_res8;
    puVar3[1] = local_4b8;
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_4b0;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_4b0._4_4_;
    *(undefined2 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    puVar3[4] = 0;
    local_4b0 = 0;
    local_4b8 = 0;
    if (local_4c8 != 0) {
      FMemory::Free();
    }
    if (local_528 != 0) {
      FMemory::Free();
    }
    if (local_220[0] != 0) {
      FMemory::Free();
    }
    FName::FName(&local_res18,L"Italic",1);
    plVar6 = (longlong *)FPaths::EngineContentDir(local_210);
    lVar7 = plVar6[1];
    local_518 = *plVar6;
    *plVar6 = 0;
    local_510._0_4_ = (int)plVar6[1];
    local_510._4_4_ = *(int *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    if (local_510._4_4_ < (int)((7 - (uint)((int)lVar7 != 0)) + (int)local_510)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_518);
    }
    FString::PathAppend(&local_518,L"Slate",5);
    iVar5 = local_510._4_4_;
    local_490._0_4_ = (int)local_510;
    local_498 = local_518;
    iVar9 = (int)local_510 + (7 - (uint)((int)local_510 != 0));
    local_518 = 0;
    local_490._4_4_ = local_510._4_4_;
    local_510 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_498);
    }
    FString::PathAppend(&local_498,L"Fonts",5);
    iVar5 = local_490._4_4_;
    local_4a8 = local_498;
    iVar9 = (int)local_490 + (0x13 - (uint)((int)local_490 != 0));
    local_498 = 0;
    local_4a0 = CONCAT44(local_490._4_4_,(int)local_490);
    local_490 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4a8);
    }
    FString::PathAppend(&local_4a8,L"Roboto-Italic.ttf",0x11);
    iVar5 = (int)plVar11[1];
    *(int *)(plVar11 + 1) = iVar5 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar5 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar11,iVar5);
    }
    puVar3 = (undefined8 *)(*plVar11 + (longlong)iVar5 * 0x28);
    *puVar3 = local_res18;
    puVar3[1] = local_4a8;
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_4a0;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_4a0._4_4_;
    *(undefined2 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    puVar3[4] = 0;
    local_4a0 = 0;
    local_4a8 = 0;
    if (local_498 != 0) {
      FMemory::Free();
    }
    if (local_518 != 0) {
      FMemory::Free();
    }
    if (local_210[0] != 0) {
      FMemory::Free();
    }
    FName::FName(&local_res20,L"Bold",1);
    plVar6 = (longlong *)FPaths::EngineContentDir(local_200);
    lVar7 = plVar6[1];
    local_508 = *plVar6;
    *plVar6 = 0;
    local_500._0_4_ = (int)plVar6[1];
    local_500._4_4_ = *(int *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    if (local_500._4_4_ < (int)((7 - (uint)((int)lVar7 != 0)) + (int)local_500)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_508);
    }
    FString::PathAppend(&local_508,L"Slate",5);
    iVar5 = local_500._4_4_;
    local_470._0_4_ = (int)local_500;
    local_478 = local_508;
    iVar9 = (int)local_500 + (7 - (uint)((int)local_500 != 0));
    local_508 = 0;
    local_470._4_4_ = local_500._4_4_;
    local_500 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_478);
    }
    FString::PathAppend(&local_478,L"Fonts",5);
    iVar5 = local_470._4_4_;
    local_488 = local_478;
    iVar9 = (int)local_470 + (0x11 - (uint)((int)local_470 != 0));
    local_478 = 0;
    local_480 = CONCAT44(local_470._4_4_,(int)local_470);
    local_470 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_488);
    }
    FString::PathAppend(&local_488,L"Roboto-Bold.ttf",0xf);
    iVar5 = (int)plVar11[1];
    *(int *)(plVar11 + 1) = iVar5 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar5 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar11,iVar5);
    }
    puVar3 = (undefined8 *)(*plVar11 + (longlong)iVar5 * 0x28);
    *puVar3 = local_res20;
    puVar3[1] = local_488;
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_480;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_480._4_4_;
    *(undefined2 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    puVar3[4] = 0;
    local_480 = 0;
    local_488 = 0;
    if (local_478 != 0) {
      FMemory::Free();
    }
    if (local_508 != 0) {
      FMemory::Free();
    }
    if (local_200[0] != 0) {
      FMemory::Free();
    }
    FName::FName(&local_310,L"BoldItalic",1);
    plVar6 = (longlong *)FPaths::EngineContentDir(local_1f0);
    lVar7 = plVar6[1];
    local_4f8 = *plVar6;
    *plVar6 = 0;
    local_4f0._0_4_ = (int)plVar6[1];
    local_4f0._4_4_ = *(int *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    if (local_4f0._4_4_ < (int)((7 - (uint)((int)lVar7 != 0)) + (int)local_4f0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4f8);
    }
    FString::PathAppend(&local_4f8,L"Slate",5);
    iVar5 = local_4f0._4_4_;
    local_450._0_4_ = (int)local_4f0;
    local_458 = local_4f8;
    iVar9 = (int)local_4f0 + (7 - (uint)((int)local_4f0 != 0));
    local_4f8 = 0;
    local_450._4_4_ = local_4f0._4_4_;
    local_4f0 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_458);
    }
    FString::PathAppend(&local_458,L"Fonts",5);
    iVar5 = local_450._4_4_;
    local_468 = local_458;
    iVar9 = (int)local_450 + (0x17 - (uint)((int)local_450 != 0));
    local_458 = 0;
    local_460 = CONCAT44(local_450._4_4_,(int)local_450);
    local_450 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_468);
    }
    FString::PathAppend(&local_468,L"Roboto-BoldItalic.ttf",0x15);
    iVar5 = (int)plVar11[1];
    *(int *)(plVar11 + 1) = iVar5 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar5 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar11,iVar5);
    }
    puVar3 = (undefined8 *)(*plVar11 + (longlong)iVar5 * 0x28);
    *puVar3 = local_310;
    puVar3[1] = local_468;
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_460;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_460._4_4_;
    *(undefined2 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    puVar3[4] = 0;
    local_460 = 0;
    local_468 = 0;
    if (local_458 != 0) {
      FMemory::Free();
    }
    if (local_4f8 != 0) {
      FMemory::Free();
    }
    if (local_1f0[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_308,L"BoldCondensed",1);
    plVar6 = (longlong *)FPaths::EngineContentDir(local_1e0);
    lVar7 = plVar6[1];
    local_4e8 = *plVar6;
    *plVar6 = 0;
    local_4e0._0_4_ = (int)plVar6[1];
    local_4e0._4_4_ = *(int *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    if (local_4e0._4_4_ < (int)((7 - (uint)((int)lVar7 != 0)) + (int)local_4e0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4e8);
    }
    FString::PathAppend(&local_4e8,L"Slate",5);
    iVar5 = local_4e0._4_4_;
    local_4d0._0_4_ = (int)local_4e0;
    local_4d8 = local_4e8;
    iVar9 = (int)local_4e0 + (7 - (uint)((int)local_4e0 != 0));
    local_4e8 = 0;
    local_4d0._4_4_ = local_4e0._4_4_;
    local_4e0 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_4d8);
    }
    FString::PathAppend(&local_4d8,L"Fonts",5);
    iVar5 = local_4d0._4_4_;
    local_420 = (int)local_4d0;
    local_428 = local_4d8;
    iVar9 = (int)local_4d0 + (0x1a - (uint)((int)local_4d0 != 0));
    local_4d8 = 0;
    local_41c = local_4d0._4_4_;
    local_4d0 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_428);
    }
    FString::PathAppend(&local_428,L"Roboto-BoldCondensed.ttf",0x18);
    FTypeface::AppendFont(plVar11,local_308,&local_428,0,0);
    if (local_4d8 != 0) {
      FMemory::Free();
    }
    if (local_4e8 != 0) {
      FMemory::Free();
    }
    if (local_1e0[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_300,L"BoldCondensedItalic",1);
    plVar6 = (longlong *)FPaths::EngineContentDir(local_1d0);
    lVar7 = plVar6[1];
    local_538 = *plVar6;
    *plVar6 = 0;
    local_530._0_4_ = (int)plVar6[1];
    local_530._4_4_ = *(int *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    if (local_530._4_4_ < (int)((7 - (uint)((int)lVar7 != 0)) + (int)local_530)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_538);
    }
    FString::PathAppend(&local_538,L"Slate",5);
    iVar5 = local_530._4_4_;
    local_440 = (int)local_530;
    local_448 = local_538;
    iVar9 = (int)local_530 + (7 - (uint)((int)local_530 != 0));
    local_538 = 0;
    local_43c = local_530._4_4_;
    local_530 = 0;
    if (iVar5 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_448);
    }
    FString::PathAppend(&local_448,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_2a0,&local_448,0x20 - (uint)(local_440 != 0));
    FString::PathAppend(local_2a0,L"Roboto-BoldCondensedItalic.ttf",0x1e);
    FTypeface::AppendFont(plVar11,local_300,local_2a0,0,0);
    if (local_448 != 0) {
      FMemory::Free();
    }
    if (local_538 != 0) {
      FMemory::Free();
    }
    if (local_1d0[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_2f8,L"Black",1);
    lVar7 = FPaths::EngineContentDir(local_1c0);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_3f8,lVar7,7 - (uint)(*(int *)(lVar7 + 8) != 0));
    FString::PathAppend(&local_3f8,L"Slate",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_408,&local_3f8,7 - (uint)(local_3f0 != 0));
    FString::PathAppend(&local_408,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_290,&local_408,0x12 - (uint)(local_400 != 0));
    FString::PathAppend(local_290,L"Roboto-Black.ttf",0x10);
    FTypeface::AppendFont(plVar11,local_2f8,local_290,0,0);
    if (local_408 != 0) {
      FMemory::Free();
    }
    if (local_3f8 != 0) {
      FMemory::Free();
    }
    if (local_1c0[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_2f0,L"BlackItalic",1);
    lVar7 = FPaths::EngineContentDir(local_1b0);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_3d8,lVar7,7 - (uint)(*(int *)(lVar7 + 8) != 0));
    FString::PathAppend(&local_3d8,L"Slate",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_3e8,&local_3d8,7 - (uint)(local_3d0 != 0));
    FString::PathAppend(&local_3e8,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_280,&local_3e8,0x18 - (uint)(local_3e0 != 0));
    FString::PathAppend(local_280,L"Roboto-BlackItalic.ttf",0x16);
    FTypeface::AppendFont(plVar11,local_2f0,local_280,0,0);
    if (local_3e8 != 0) {
      FMemory::Free();
    }
    if (local_3d8 != 0) {
      FMemory::Free();
    }
    if (local_1b0[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_2e8,L"Light",1);
    lVar7 = FPaths::EngineContentDir(local_1a0);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_3a8,lVar7,7 - (uint)(*(int *)(lVar7 + 8) != 0));
    FString::PathAppend(&local_3a8,L"Slate",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_3b8,&local_3a8,7 - (uint)(local_3a0 != 0));
    FString::PathAppend(&local_3b8,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_270,&local_3b8,0x12 - (uint)(local_3b0 != 0));
    FString::PathAppend(local_270,L"Roboto-Light.ttf",0x10);
    FTypeface::AppendFont(plVar11,local_2e8,local_270,0,0);
    if (local_3b8 != 0) {
      FMemory::Free();
    }
    if (local_3a8 != 0) {
      FMemory::Free();
    }
    if (local_1a0[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_2e0,L"VeryLight",1);
    lVar7 = FPaths::EngineContentDir(local_190);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_398,lVar7,7 - (uint)(*(int *)(lVar7 + 8) != 0));
    FString::PathAppend(&local_398,L"Slate",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_3c8,&local_398,7 - (uint)(local_390 != 0));
    FString::PathAppend(&local_3c8,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_260,&local_3c8,0x12 - (uint)(local_3c0 != 0));
    FString::PathAppend(local_260,L"Roboto-Light.ttf",0x10);
    FTypeface::AppendFont(plVar11,local_2e0,local_260,1,0);
    if (local_3c8 != 0) {
      FMemory::Free();
    }
    if (local_398 != 0) {
      FMemory::Free();
    }
    if (local_190[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_2d8,L"Mono",1);
    lVar7 = FPaths::EngineContentDir(local_180);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_378,lVar7,7 - (uint)(*(int *)(lVar7 + 8) != 0));
    FString::PathAppend(&local_378,L"Slate",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_388,&local_378,7 - (uint)(local_370 != 0));
    FString::PathAppend(&local_388,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_250,&local_388,0x13 - (uint)(local_380 != 0));
    FString::PathAppend(local_250,L"DroidSansMono.ttf",0x11);
    FTypeface::AppendFont(plVar11,local_2d8,local_250,0,0);
    if (local_388 != 0) {
      FMemory::Free();
    }
    if (local_378 != 0) {
      FMemory::Free();
    }
    if (local_180[0] != 0) {
      FMemory::Free();
    }
    FName::FName(local_328,L"Regular",1);
    lVar7 = FPaths::EngineContentDir(local_170);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_358,lVar7,7 - (uint)(*(int *)(lVar7 + 8) != 0));
    FString::PathAppend(&local_358,L"Slate",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_368,&local_358,7 - (uint)(local_350 != 0));
    FString::PathAppend(&local_368,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_240,&local_368,0x17 - (uint)(local_360 != 0));
    FString::PathAppend(local_240,L"DroidSansFallback.ttf",0x15);
    FTypeface::AppendFont(plVar11 + 2,local_328,local_240,0,0);
    if (local_368 != 0) {
      FMemory::Free();
    }
    if (local_358 != 0) {
      FMemory::Free();
    }
    if (local_170[0] != 0) {
      FMemory::Free();
    }
    iVar5 = TArray<FCompositeSubFont,FDefaultAllocator>::AddDefaulted(plVar11 + 5,1);
    lVar7 = (longlong)iVar5 * 0x38 + plVar11[5];
    local_320 = lVar7;
    FUN_14183f440(local_160);
    local_2d0 = *(undefined2 *)(local_160[0] + 0x270);
    FText::FText(local_2c8,local_160[0] + 0x278);
    local_2b0 = *(undefined1 *)(local_160[0] + 0x290);
    local_2ac = *(undefined4 *)(local_160[0] + 0x294);
    local_2a8 = *(undefined1 *)(local_160[0] + 0x298);
    local_2a4 = *(undefined4 *)(local_160[0] + 0x29c);
    plVar6 = (longlong *)(lVar7 + 0x18);
    iVar5 = *(int *)(lVar7 + 0x20);
    *(int *)(lVar7 + 0x20) = iVar5 + 1;
    if (*(int *)(lVar7 + 0x24) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar5);
    }
    puVar10 = (undefined1 *)((longlong)iVar5 * 0x10 + *plVar6);
    *puVar10 = local_2b0;
    *(undefined4 *)(puVar10 + 4) = local_2ac;
    puVar10[8] = local_2a8;
    *(undefined4 *)(puVar10 + 0xc) = local_2a4;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2c8);
    lVar8 = FUnicodeBlockRange::GetUnicodeBlockRange(local_140,0x14);
    iVar5 = *(int *)(lVar7 + 0x20);
    *(int *)(lVar7 + 0x20) = iVar5 + 1;
    if (*(int *)(lVar7 + 0x24) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar5);
    }
    puVar10 = (undefined1 *)((longlong)iVar5 * 0x10 + *plVar6);
    *puVar10 = *(undefined1 *)(lVar8 + 0x20);
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(lVar8 + 0x24);
    puVar10[8] = *(undefined1 *)(lVar8 + 0x28);
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(lVar8 + 0x2c);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_138);
    lVar8 = FUnicodeBlockRange::GetUnicodeBlockRange(local_110,0xfb);
    iVar5 = *(int *)(lVar7 + 0x20);
    *(int *)(lVar7 + 0x20) = iVar5 + 1;
    if (*(int *)(lVar7 + 0x24) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar5);
    }
    puVar10 = (undefined1 *)((longlong)iVar5 * 0x10 + *plVar6);
    *puVar10 = *(undefined1 *)(lVar8 + 0x20);
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(lVar8 + 0x24);
    puVar10[8] = *(undefined1 *)(lVar8 + 0x28);
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(lVar8 + 0x2c);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_108);
    lVar8 = FUnicodeBlockRange::GetUnicodeBlockRange(local_e0,0x99);
    iVar5 = *(int *)(lVar7 + 0x20);
    *(int *)(lVar7 + 0x20) = iVar5 + 1;
    if (*(int *)(lVar7 + 0x24) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar5);
    }
    puVar10 = (undefined1 *)((longlong)iVar5 * 0x10 + *plVar6);
    *puVar10 = *(undefined1 *)(lVar8 + 0x20);
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(lVar8 + 0x24);
    puVar10[8] = *(undefined1 *)(lVar8 + 0x28);
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(lVar8 + 0x2c);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_d8);
    lVar8 = FUnicodeBlockRange::GetUnicodeBlockRange(local_b0,0x9f);
    iVar5 = *(int *)(lVar7 + 0x20);
    *(int *)(lVar7 + 0x20) = iVar5 + 1;
    if (*(int *)(lVar7 + 0x24) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar5);
    }
    puVar10 = (undefined1 *)((longlong)iVar5 * 0x10 + *plVar6);
    *puVar10 = *(undefined1 *)(lVar8 + 0x20);
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(lVar8 + 0x24);
    puVar10[8] = *(undefined1 *)(lVar8 + 0x28);
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(lVar8 + 0x2c);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a8);
    lVar8 = FUnicodeBlockRange::GetUnicodeBlockRange(local_80,0xf);
    iVar5 = *(int *)(lVar7 + 0x20);
    *(int *)(lVar7 + 0x20) = iVar5 + 1;
    if (*(int *)(lVar7 + 0x24) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar5);
    }
    puVar10 = (undefined1 *)((longlong)iVar5 * 0x10 + *plVar6);
    *puVar10 = *(undefined1 *)(lVar8 + 0x20);
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(lVar8 + 0x24);
    puVar10[8] = *(undefined1 *)(lVar8 + 0x28);
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(lVar8 + 0x2c);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_78);
    FName::FName(local_318,L"Regular",1);
    lVar7 = FPaths::EngineContentDir(local_150);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_338,lVar7,7 - (uint)(*(int *)(lVar7 + 8) != 0));
    FString::PathAppend(&local_338,L"Slate",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (&local_348,&local_338,7 - (uint)(local_330 != 0));
    FString::PathAppend(&local_348,L"Fonts",5);
    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
              (local_230,&local_348,0x1f - (uint)(local_340 != 0));
    FString::PathAppend(local_230,L"NotoNaskhArabicUI-Regular.ttf",0x1d);
    FTypeface::AppendFont(local_320,local_318,local_230,0,0);
    if (local_348 != 0) {
      FMemory::Free();
    }
    if (local_338 != 0) {
      FMemory::Free();
    }
    if (local_150[0] != 0) {
      FMemory::Free();
    }
    local_410 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_418 = plVar11;
    if (pplVar1 != &local_418) {
      *pplVar1 = plVar11;
      local_418 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_410);
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_418);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar4 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
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
  *local_res10 = (longlong)*pplVar1;
  lVar7 = *(longlong *)(param_1 + 0x78);
  local_res10[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  return local_res10;
}



// FUNCTION 141836ae0 FUN_141836ae0 body=208 status=ok
// SIG undefined FUN_141836ae0(void)

undefined8 * FUN_141836ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,PVOID param_4)

{
  HDC hdc;
  DWORD DVar1;
  longlong lVar2;
  undefined4 extraout_var;
  undefined8 *puVar3;
  DWORD unaff_EDI;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_1469eb398) &&
     (_Init_thread_header(&DAT_1469eb398), DAT_1469eb398 == -1)) {
    atexit((_func_5014 *)&LAB_143e82e30);
    _Init_thread_footer(&DAT_1469eb398);
  }
  DVar1 = (DWORD)lVar2;
  FUN_141834210(param_2);
  lVar2 = FUN_141833140(param_1);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x28);
    if (*(undefined8 **)(lVar2 + 0x28) == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    hdc = (HDC)*puVar3;
    if (hdc != (HDC)0x0) {
      DVar1 = FCachedTypefaceData::GetFontData(hdc,(int)param_2 + 0x40,DVar1,param_4,unaff_EDI);
      if ((undefined8 *)CONCAT44(extraout_var,DVar1) != (undefined8 *)0x0) {
        return (undefined8 *)CONCAT44(extraout_var,DVar1);
      }
      if ((0 < (int)(*(longlong **)hdc)[1]) &&
         (puVar3 = (undefined8 *)(**(longlong **)hdc + 8), puVar3 != (undefined8 *)0x0)) {
        return puVar3;
      }
    }
  }
  return &DAT_1469eb378;
}



// FUNCTION 141836bb0 FUN_141836bb0 body=195 status=ok
// SIG undefined FUN_141836bb0(void)

undefined8
FUN_141836bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_res10;
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_res10 = param_2;
  uVar6 = FUN_1418315f0();
  FUN_141835590(uVar6,&local_28);
  plVar1 = plStack_20;
  local_18 = local_28;
  plStack_10 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1417efce0(param_1,&local_18,param_3,&local_res10,param_4);
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
  return param_1;
}



// FUNCTION 141836c80 GetDefaultTextShapingMethod body=29 status=ok
// SIG undefined GetDefaultTextShapingMethod(void)

ulonglong GetDefaultTextShapingMethod(void)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*DAT_1469eaf60 + 0x68))();
  if (2 < (uint)uVar1) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}



// FUNCTION 141836ca0 GetDesiredSize body=184 status=ok
// SIG undefined GetDesiredSize(void)

longlong * SWidget::GetDesiredSize(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (DAT_1469eaf30 == 0) {
    plVar2 = &DAT_1468b5d88;
    if (*(char *)((longlong)param_1 + 0x34) != '\0') {
      plVar2 = (longlong *)((longlong)param_1 + 0x2c);
    }
    *param_2 = *plVar2;
    return param_2;
  }
  bVar1 = *(byte *)(param_1 + 9);
  if ((*(byte *)((longlong)param_1 + 0x19) & 1) != 0) {
    if (((bVar1 & 4) != 0) && ((bVar1 & 8) == 0)) {
      *(byte *)(param_1 + 9) = bVar1 | 8;
      (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)((longlong)param_1 + 0x44));
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf7;
    }
    *param_2 = param_1[7];
    return param_2;
  }
  if (((bVar1 & 2) != 0) && ((bVar1 & 8) == 0)) {
    *(byte *)(param_1 + 9) = bVar1 | 8;
    (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)((longlong)param_1 + 0x44));
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf7;
  }
  *param_2 = *(longlong *)((longlong)param_1 + 0x2c);
  return param_2;
}



// FUNCTION 141836d60 GetDesiredSizeDesktopPixels body=23 status=ok
// SIG undefined GetDesiredSizeDesktopPixels(void)

undefined8 SWindow::GetDesiredSizeDesktopPixels(undefined8 param_1,undefined8 param_2)

{
  SWidget::GetDesiredSize();
  return param_2;
}



// FUNCTION 141836d80 GetDynamicImageBrush body=43 status=ok
// SIG undefined GetDynamicImageBrush(void)

undefined8 FSlateStyleSet::GetDynamicImageBrush(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x58))();
  return param_2;
}



// FUNCTION 141836db0 FUN_141836db0 body=1428 status=ok
// SIG undefined FUN_141836db0(void)

longlong *
FUN_141836db0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_e8;
  undefined2 *local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  bVar3 = false;
  bVar2 = false;
  bVar18 = false;
  local_res10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_5 == 0) {
    plVar7 = &local_c0;
    local_c0 = param_3;
    puVar15 = (undefined2 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FName::ToString(&param_5,local_70);
    puVar6 = (undefined8 *)FName::ToString(&local_res18,local_80);
    iVar16 = *(int *)(puVar6 + 1);
    if (iVar16 < 2) {
      puVar15 = (undefined2 *)*puVar5;
      *puVar5 = 0;
      iVar16 = *(int *)(puVar5 + 1);
      puVar5[1] = 0;
    }
    else {
      iVar17 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar17 = 0;
      }
      if ((iVar16 != 0) || (iVar4 = 1, iVar17 == 0)) {
        iVar4 = 0;
      }
      local_e0 = (undefined2 *)*puVar6;
      *puVar6 = 0;
      local_d4 = *(int *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
      local_d8 = iVar16;
      if (local_d4 < iVar17 + iVar4 + iVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e0);
      }
      iVar4 = local_d8;
      _Src = (void *)*puVar5;
      puVar15 = local_e0;
      param_4 = local_res20;
      iVar16 = local_d8;
      if (iVar17 != 0) {
        lVar9 = (longlong)local_d8;
        local_d8 = iVar17 + (uint)(local_d8 == 0) + local_d8;
        if (local_d4 < local_d8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,iVar4);
        }
        iVar16 = local_d8;
        puVar15 = local_e0;
        puVar14 = local_e0 + (lVar9 - (ulonglong)(iVar4 != 0));
        _guard_xfg_dispatch_icall_nop(puVar14,_Src,(longlong)iVar17 * 2);
        puVar14[iVar17] = 0;
        param_4 = local_res20;
      }
    }
    puVar14 = &DAT_143f3eda8;
    if (iVar16 != 0) {
      puVar14 = puVar15;
    }
    plVar7 = (longlong *)FName::FName(local_90,puVar14,1);
    bVar3 = true;
    bVar2 = true;
    bVar18 = true;
  }
  plVar8 = (longlong *)0x0;
  local_e8 = *plVar7;
  if ((bVar18) && (puVar15 != (undefined2 *)0x0)) {
    FMemory::Free(puVar15);
  }
  if ((bVar2) && (local_80[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_70[0] != 0)) {
    FMemory::Free();
  }
  local_b8 = param_1 + 0x61;
  plVar7 = plVar8;
  if ((int)param_1[0x62] != *(int *)((longlong)param_1 + 0x33c)) {
    plVar11 = (longlong *)param_1[0x69];
    if ((longlong *)param_1[0x69] == (longlong *)0x0) {
      plVar11 = param_1 + 0x68;
    }
    iVar16 = *(int *)((longlong)plVar11 +
                     ((longlong)((int)((ulonglong)local_e8 >> 0x20) + (int)local_e8) &
                     (longlong)(int)param_1[0x6a] - 1U) * 4);
    if (iVar16 != -1) {
      lVar9 = *local_b8;
      do {
        lVar12 = (longlong)iVar16 * 0x20;
        if (*(longlong *)(lVar12 + lVar9) == local_e8) {
          if ((iVar16 != -1) && (lVar9 = (longlong)iVar16 * 0x20 + lVar9, lVar9 != 0)) {
            plVar8 = *(longlong **)(lVar9 + 8);
            plVar7 = *(longlong **)(lVar9 + 0x10);
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
              UNLOCK();
            }
          }
          break;
        }
        iVar16 = *(int *)(lVar12 + 0x18 + lVar9);
      } while (iVar16 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = (longlong)plVar7;
  lVar9 = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar16 = (int)plVar7[1];
    bVar18 = iVar16 == 0;
    if (bVar18) {
      *(int *)(plVar7 + 1) = 0;
      iVar16 = 0;
    }
    UNLOCK();
    while (!bVar18) {
      LOCK();
      bVar18 = iVar16 == (int)plVar7[1];
      if (bVar18) {
        *(int *)(plVar7 + 1) = iVar16 + 1;
      }
      UNLOCK();
      if (bVar18) {
        lVar9 = param_2[1];
        goto LAB_14183703b;
      }
      LOCK();
      iVar16 = (int)plVar7[1];
      bVar18 = iVar16 == 0;
      if (bVar18) {
        *(int *)(plVar7 + 1) = 0;
        iVar16 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
    lVar9 = 0;
  }
LAB_14183703b:
  if (lVar9 == 0) {
    plVar8 = (longlong *)*param_2;
  }
  else {
    *param_2 = (longlong)plVar8;
  }
  if (plVar8 != (longlong *)0x0) goto LAB_141837313;
  local_88 = local_res18;
  if ((int)param_1[0x44] != *(int *)((longlong)param_1 + 0x24c)) {
    plVar8 = (longlong *)param_1[0x4b];
    if ((longlong *)param_1[0x4b] == (longlong *)0x0) {
      plVar8 = param_1 + 0x4a;
    }
    iVar16 = *(int *)((longlong)plVar8 +
                     ((longlong)((int)((ulonglong)local_res18 >> 0x20) + (int)local_res18) &
                     (longlong)(int)param_1[0x4c] - 1U) * 4);
    if (iVar16 != -1) {
      lVar9 = param_1[0x43];
      do {
        lVar12 = (longlong)iVar16;
        if (*(longlong *)(lVar9 + lVar12 * 0x18) == local_res18) {
          if (((iVar16 != -1) && (lVar9 = lVar9 + lVar12 * 0x18, lVar9 != 0)) &&
             (lVar9 = *(longlong *)(lVar9 + 8), lVar9 != 0)) goto LAB_141837122;
          break;
        }
        iVar16 = *(int *)(lVar9 + 0x10 + lVar12 * 0x18);
      } while (iVar16 != -1);
    }
  }
  lVar9 = (**(code **)(*param_1 + 0x68))(param_1);
LAB_141837122:
  lVar12 = operator_new(0xa0);
  lVar10 = 0;
  if (lVar12 != 0) {
    local_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    uStack_58 = 0x3f800000;
    uStack_54 = 0x3f800000;
    lVar10 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                       (lVar12,param_4,lVar9 + 8,local_e8,&local_60,0,1);
  }
  plVar11 = (longlong *)operator_new();
  plVar8 = (longlong *)0x0;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_143f3f2e0;
    plVar11[2] = lVar10;
    plVar8 = plVar11;
  }
  plVar11 = (longlong *)(lVar10 + 0x88);
  if (lVar10 == 0) {
    plVar11 = (longlong *)0x0;
  }
  local_d0 = lVar10;
  local_c8 = plVar8;
  if (plVar11 != (longlong *)0x0) {
    if ((*plVar11 != 0) && (plVar11[1] != 0)) {
      piVar1 = (int *)(plVar11[1] + 8);
      LOCK();
      iVar16 = *piVar1;
      if (iVar16 == 0) {
        *piVar1 = 0;
        iVar16 = 0;
      }
      UNLOCK();
      if (0 < iVar16) goto LAB_141837256;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar11 = lVar10;
    plVar13 = (longlong *)plVar11[1];
    if (plVar8 != plVar13) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)plVar11[1];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      plVar11[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)();
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_141837256:
  if (param_2 != &local_d0) {
    local_d0 = 0;
    *param_2 = lVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_c8);
  }
  plVar8 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_c8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  local_b0 = *param_2;
  local_a8 = (longlong *)param_2[1];
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
    UNLOCK();
  }
  local_a0 = &local_e8;
  local_98 = &local_b0;
  FUN_1417e02a0(local_b8,&local_res10,&local_a0,0);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    iVar16 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar16 == 1) && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 8))(local_a8,1);
    }
  }
LAB_141837313:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar16 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar16 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return param_2;
}



// FUNCTION 141837350 GetDynamicImageBrush body=89 status=ok
// SIG undefined GetDynamicImageBrush(void)

undefined8
FSlateStyleSet::GetDynamicImageBrush
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)ISlateStyle::Join(local_res8,param_3,param_4);
  (**(code **)(lVar1 + 0x50))(param_1,param_2,*puVar2,param_5,param_6);
  return param_2;
}



// FUNCTION 1418373b0 GetFloat body=187 status=ok
// SIG undefined GetFloat(void)

undefined4 FSlateStyleSet::GetFloat(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_res8 [32];
  
  plVar3 = (longlong *)ISlateStyle::Join(local_res8);
  lVar1 = *plVar3;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar4 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar4 = param_1 + 0xb8;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 200) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) goto LAB_141837443;
          break;
        }
        iVar2 = puVar6[4];
      } while (iVar2 != -1);
    }
  }
  puVar6 = (undefined4 *)0x0;
LAB_141837443:
  puVar5 = puVar6 + 2;
  if (puVar6 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  if (puVar5 == (undefined4 *)0x0) {
    return DAT_1469eaf24;
  }
  return *puVar5;
}



// FUNCTION 141837470 GetFontAtlasProvider body=120 status=ok
// SIG undefined GetFontAtlasProvider(void)

undefined8 FSlateRenderer::GetFontAtlasProvider(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)(*(undefined8 **)(param_1 + 8))[1];
  uVar5 = **(undefined8 **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 1418374f0 FUN_1418374f0 body=248 status=ok
// SIG undefined FUN_1418374f0(void)

undefined * FUN_1418374f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong local_18;
  longlong *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469eb3c4) {
    _Init_thread_header(&DAT_1469eb3c4);
    if (DAT_1469eb3c4 == -1) {
      atexit(FUN_143e82e00);
      _Init_thread_footer(&DAT_1469eb3c4);
    }
  }
  FUN_141837aa0(param_1,&local_18,param_2);
  if (local_18 == 0) {
    puVar5 = &DAT_1464b9fd0;
  }
  else {
    puVar5 = (undefined *)(local_18 + 0xb0);
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
    return puVar5;
  }
  return puVar5;
}



// FUNCTION 1418375f0 FUN_1418375f0 body=80 status=ok
// SIG undefined FUN_1418375f0(void)

undefined8 * FUN_1418375f0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = IsInActualRenderingThread();
  if (cVar1 == '\0') {
    *param_2 = *param_1;
    lVar2 = param_1[1];
  }
  else {
    IsInRenderingThread();
    *param_2 = param_1[2];
    lVar2 = param_1[3];
  }
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141837640 GetFontData body=294 status=ok
// SIG DWORD GetFontData(HDC hdc, DWORD dwTable, DWORD dwOffset, PVOID pvBuffer, DWORD cjBuffer)

DWORD __stdcall
FCachedTypefaceData::GetFontData(HDC hdc,DWORD dwTable,DWORD dwOffset,PVOID pvBuffer,DWORD cjBuffer)

{
  HDC pHVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 in_register_00000014;
  int *piVar5;
  HDC pHVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  piVar5 = (int *)CONCAT44(in_register_00000014,dwTable);
  uVar2 = (ulonglong)hdc[8].unused;
  pHVar1 = hdc + 2;
  lVar8 = 0;
  iVar4 = 0;
  if (hdc[8].unused != 0) {
    pHVar6 = *(HDC *)(hdc + 6);
    if (*(HDC *)(hdc + 6) == (HDC)0x0) {
      pHVar6 = pHVar1;
    }
    do {
      uVar9 = uVar2 >> 1;
      puVar3 = (undefined8 *)
               FCachedFontData::BinarySearchKey(local_res8,pHVar6 + (uVar9 + lVar8) * 4);
      iVar4 = (int)*puVar3 - *piVar5;
      if (iVar4 == 0) {
        iVar4 = (int)((ulonglong)*puVar3 >> 0x20) - piVar5[1];
      }
      if (iVar4 < 0) {
        lVar8 = (ulonglong)((uint)uVar2 & 1) + uVar9 + lVar8;
      }
      uVar2 = uVar9;
    } while (uVar9 != 0);
    iVar4 = hdc[8].unused;
  }
  iVar7 = (int)lVar8;
  if ((ulonglong)(longlong)iVar7 < (ulonglong)(longlong)iVar4) {
    pHVar6 = *(HDC *)(hdc + 6);
    if (*(HDC *)(hdc + 6) == (HDC)0x0) {
      pHVar6 = pHVar1;
    }
    puVar3 = (undefined8 *)FCachedFontData::BinarySearchKey(local_res8,pHVar6 + (longlong)iVar7 * 4)
    ;
    iVar4 = *piVar5 - (int)*puVar3;
    if (iVar4 == 0) {
      iVar4 = piVar5[1] - (int)((ulonglong)*puVar3 >> 0x20);
    }
    if ((-1 < iVar4) && (iVar7 != -1)) {
      pHVar6 = *(HDC *)(hdc + 6);
      if (*(HDC *)(hdc + 6) == (HDC)0x0) {
        pHVar6 = pHVar1;
      }
      return (DWORD)*(undefined8 *)(pHVar6 + (longlong)iVar7 * 4 + 2);
    }
  }
  return 0;
}



// FUNCTION 141837770 FUN_141837770 body=808 status=ok
// SIG undefined FUN_141837770(void)

undefined8 * FUN_141837770(undefined8 param_1,undefined8 param_2,uint param_3,int *param_4)

{
  char cVar1;
  DWORD DVar2;
  uint dwOffset;
  undefined8 uVar3;
  longlong lVar4;
  HDC hdc;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar5;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  DWORD dwTable;
  HDC hdc_00;
  HDC hdc_01;
  longlong lVar6;
  int *pvBuffer;
  DWORD unaff_R15D;
  uint local_res18 [2];
  
  pvBuffer = param_4;
  dwOffset = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469eb3c0) && (_Init_thread_header(&DAT_1469eb3c0), DAT_1469eb3c0 == -1))
  {
    atexit((_func_5014 *)&LAB_143e82e50);
    _Init_thread_footer(&DAT_1469eb3c0);
  }
  uVar3 = FUN_141834210(param_2);
  lVar4 = FUN_141833140(param_1,uVar3);
  hdc_01 = (HDC)0x0;
  if (lVar4 == 0) {
    hdc = (HDC)0x0;
  }
  else {
    local_res18[0] = param_3 & 0xffff;
    hdc = (HDC)<lambda_62069497a8b8d20febf2b4718cfb279b>::operator()(local_res18,lVar4 + 0x38);
    if ((hdc == (HDC)0x0) &&
       (hdc = (HDC)<lambda_62069497a8b8d20febf2b4718cfb279b>::operator()(local_res18,lVar4 + 0x48),
       hdc == (HDC)0x0)) {
      puVar5 = *(undefined8 **)(lVar4 + 0x28);
      if (*(undefined8 **)(lVar4 + 0x28) == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)(lVar4 + 8);
      }
      hdc = (HDC)*puVar5;
    }
  }
  if (hdc == (HDC)0x0) {
LAB_141837a36:
    *param_4 = 0x3f800000;
    puVar5 = &DAT_1469eb3a0;
  }
  else {
    lVar4 = FUN_141833140(param_1,uVar3);
    hdc_00 = hdc_01;
    if (lVar4 != 0) {
      puVar5 = *(undefined8 **)(lVar4 + 0x28);
      if (*(undefined8 **)(lVar4 + 0x28) == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)(lVar4 + 8);
      }
      hdc_00 = (HDC)*puVar5;
    }
    lVar4 = FUN_141833140(param_1,uVar3);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x28);
      if (*(longlong *)(lVar4 + 0x28) == 0) {
        lVar6 = lVar4 + 8;
      }
      hdc_01 = *(HDC *)(lVar6 + 0x10);
    }
    dwTable = (int)param_2 + 0x40;
    DVar2 = FCachedTypefaceData::GetFontData(hdc,dwTable,dwOffset,pvBuffer,unaff_R15D);
    puVar5 = (undefined8 *)CONCAT44(extraout_var,DVar2);
    if (puVar5 != (undefined8 *)0x0) {
      dwOffset = param_3 & 0xffff;
      cVar1 = FUN_14182af60(param_1,puVar5);
      if (cVar1 != '\0') goto LAB_14183792c;
    }
    if ((hdc_00 != (HDC)0x0) && (hdc != hdc_00)) {
      DVar2 = FCachedTypefaceData::GetFontData(hdc_00,dwTable,dwOffset,pvBuffer,unaff_R15D);
      if (CONCAT44(extraout_var_00,DVar2) != 0) {
        dwOffset = FUN_1418374f0(param_1,CONCAT44(extraout_var_00,DVar2));
        puVar5 = (undefined8 *)FCompositeFontCache::GetBestMatchFontForAttributes(param_1,hdc);
        if (puVar5 != (undefined8 *)0x0) {
          dwOffset = param_3 & 0xffff;
          cVar1 = FUN_14182af60(param_1,puVar5);
          if (cVar1 != '\0') goto LAB_14183792c;
        }
      }
    }
    if ((0 < (int)(*(longlong **)hdc)[1]) &&
       (puVar5 = (undefined8 *)(**(longlong **)hdc + 8), puVar5 != (undefined8 *)0x0)) {
      dwOffset = param_3 & 0xffff;
      cVar1 = FUN_14182af60(param_1,puVar5);
      if (cVar1 != '\0') {
LAB_14183792c:
        *param_4 = hdc[10].unused;
        return puVar5;
      }
    }
    if (hdc != hdc_00) {
      DVar2 = FCachedTypefaceData::GetFontData(hdc_00,dwTable,dwOffset,pvBuffer,unaff_R15D);
      puVar5 = (undefined8 *)CONCAT44(extraout_var_01,DVar2);
      if (puVar5 != (undefined8 *)0x0) {
        dwOffset = param_3 & 0xffff;
        cVar1 = FUN_14182af60(param_1,puVar5);
        if (cVar1 != '\0') goto LAB_14183798b;
      }
      if ((0 < (int)(*(longlong **)hdc_00)[1]) &&
         (puVar5 = (undefined8 *)(**(longlong **)hdc_00 + 8), puVar5 != (undefined8 *)0x0)) {
        dwOffset = param_3 & 0xffff;
        cVar1 = FUN_14182af60(param_1,puVar5);
        if (cVar1 != '\0') {
LAB_14183798b:
          *param_4 = hdc_00[10].unused;
          return puVar5;
        }
      }
    }
    DVar2 = FCachedTypefaceData::GetFontData(hdc_01,dwTable,dwOffset,pvBuffer,unaff_R15D);
    puVar5 = (undefined8 *)CONCAT44(extraout_var_02,DVar2);
    if (puVar5 == (undefined8 *)0x0) {
      if ((hdc_00 != (HDC)0x0) && (hdc_01 != hdc_00)) {
        DVar2 = FCachedTypefaceData::GetFontData(hdc_00,dwTable,dwOffset,pvBuffer,unaff_R15D);
        if (CONCAT44(extraout_var_03,DVar2) != 0) {
          dwOffset = FUN_1418374f0(param_1,CONCAT44(extraout_var_03,DVar2));
          puVar5 = (undefined8 *)FCompositeFontCache::GetBestMatchFontForAttributes(param_1,hdc_01);
          if (puVar5 != (undefined8 *)0x0) goto LAB_141837a2a;
        }
      }
      if (((int)(*(longlong **)hdc_01)[1] < 1) ||
         (puVar5 = (undefined8 *)(**(longlong **)hdc_01 + 8), puVar5 == (undefined8 *)0x0)) {
        DVar2 = FCachedTypefaceData::GetFontData(hdc_00,dwTable,dwOffset,pvBuffer,unaff_R15D);
        puVar5 = (undefined8 *)CONCAT44(extraout_var_04,DVar2);
        if ((puVar5 != (undefined8 *)0x0) ||
           (((int)DVar2 < (int)(*(longlong **)hdc_00)[1] &&
            (puVar5 = (undefined8 *)(**(longlong **)hdc_00 + 8), puVar5 != (undefined8 *)0x0)))) {
          *param_4 = hdc_00[10].unused;
          return puVar5;
        }
        goto LAB_141837a36;
      }
    }
LAB_141837a2a:
    *param_4 = hdc_01[10].unused;
  }
  return puVar5;
}



// FUNCTION 141837aa0 FUN_141837aa0 body=2142 status=ok
// SIG undefined FUN_141837aa0(void)

longlong ** FUN_141837aa0(undefined8 *param_1,longlong **param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined1 local_res10 [8];
  int local_res20 [2];
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  longlong *plStack_160;
  undefined4 local_158 [4];
  longlong *local_148;
  longlong *plStack_140;
  longlong *local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *plStack_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined1 local_a8 [8];
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  longlong *local_90;
  longlong local_88;
  longlong **local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68 [2];
  longlong *local_58;
  longlong *plStack_50;
  
  plVar10 = param_1 + 0xb;
  local_90 = plVar10;
  TSet<TTuple<FFontData,TSharedPtr<FFreeTypeFace,0>_>,TDefaultMapHashableKeyFuncs<FFontData,TSharedPtr<FFreeTypeFace,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar10,local_res20);
  lVar13 = 0;
  if (local_res20[0] != -1) {
    lVar13 = (longlong)local_res20[0] * 0x38 + *plVar10;
  }
  if (lVar13 == 0) {
    *param_2 = (longlong *)0x0;
    param_2[1] = (longlong *)0x0;
  }
  else {
    *param_2 = *(longlong **)(lVar13 + 0x20);
    plVar10 = *(longlong **)(lVar13 + 0x28);
    param_2[1] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  if (*param_2 != (longlong *)0x0) {
    return param_2;
  }
  FFontData::GetFontFaceData(param_3,&local_d0);
  if ((local_d0 == 0) || (*(int *)(local_d0 + 8) < 1)) {
    lVar13 = *(longlong *)(param_3 + 0x18);
    lVar11 = param_3;
    if (lVar13 != 0) {
      uVar9 = UFontFaceInterface::GetPrivateStaticClass();
      plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar9);
      lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    if (1 < *(int *)(lVar11 + 8)) goto LAB_141837b81;
    bVar5 = false;
  }
  else {
LAB_141837b81:
    bVar5 = true;
  }
  plVar10 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if (!bVar5) {
    return param_2;
  }
  local_d8 = 0;
  FFontData::GetFontFaceData(param_3,&local_168);
  plVar10 = plStack_160;
  if ((local_168 == 0) || (*(int *)(local_168 + 8) < 1)) {
LAB_141837db2:
    plVar1 = plStack_160;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar10 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_160 + 8))(plStack_160,1);
        }
      }
    }
  }
  else {
    uVar6 = FFontData::GetLayoutMethod(param_3);
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    plStack_130 = (longlong *)operator_new(0x118);
    if (plStack_130 == (longlong *)0x0) {
      plStack_130 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plStack_130 + 1) = 1;
      *(undefined4 *)((longlong)plStack_130 + 0xc) = 1;
      *plStack_130 = (longlong)&PTR_FUN_144d501f8;
      local_78 = local_168;
      plStack_70 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
        UNLOCK();
      }
      FFreeTypeFace::FFreeTypeFace(plStack_130 + 2,*param_1,&local_78,uVar3,uVar6);
    }
    local_138 = plStack_130 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_138,local_138,local_138);
    local_148 = local_138;
    plStack_140 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
      UNLOCK();
    }
    if (param_2 != &local_148) {
      *param_2 = local_138;
      local_148 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&plStack_140);
    }
    plVar10 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_140 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_140 + 8))(plStack_140,1);
        }
      }
    }
    plVar10 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_130 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar1 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_160 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      plVar10 = plStack_160;
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        plVar10 = plStack_160;
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_160 + 8))(plStack_160,1);
        }
      }
      goto LAB_141837db2;
    }
  }
  plVar10 = *param_2;
  if (plVar10 == (longlong *)0x0) {
    lVar13 = *(longlong *)(param_3 + 0x18);
    if (lVar13 == 0) {
      cVar7 = *(char *)(param_3 + 0x11);
    }
    else {
      uVar9 = UFontFaceInterface::GetPrivateStaticClass();
      plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar9);
      cVar7 = (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (cVar7 == '\0') {
      QueryPerformanceCounter(&local_a0);
      local_178 = 0;
      local_170 = 0;
      dVar4 = (double)local_a0.QuadPart * DAT_1468b02f8;
      puVar12 = (undefined8 *)FFontData::GetFontFilename(param_3);
      puVar15 = &DAT_143f3eda8;
      if (*(int *)(puVar12 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar12;
      }
      cVar7 = FUN_141676460(&local_178,puVar14,0);
      if (cVar7 != '\0') {
        iVar8 = (int)local_170 + 0x3ff;
        puVar12 = (undefined8 *)FFontData::GetFontFilename(param_3);
        if (*(int *)(puVar12 + 1) != 0) {
          puVar15 = (undefined2 *)*puVar12;
        }
        QueryPerformanceCounter(&local_98);
        FString::PrintfImpl(local_68,
                            L"Took %f seconds to synchronously load lazily loaded font \'%s\' (%dK)"
                            ,(double)(float)((double)local_98.QuadPart * DAT_1468b02f8 - dVar4),
                            puVar15,(int)((iVar8 >> 0x1f & 0x3ffU) + iVar8) >> 10);
        local_d8 = local_68[0];
        uVar6 = FFontData::GetLayoutMethod(param_3);
        uVar3 = *(undefined4 *)(param_3 + 0x14);
        plVar10 = (longlong *)operator_new(0x20);
        plStack_b0 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_144cb51c0;
          plVar10[2] = 0;
          plVar10[2] = local_178;
          local_178 = 0;
          *(int *)(plVar10 + 3) = (int)local_170;
          *(undefined4 *)((longlong)plVar10 + 0x1c) = local_170._4_4_;
          local_170 = 0;
          plStack_b0 = plVar10;
        }
        local_b8 = plStack_b0 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
        plStack_f0 = (longlong *)operator_new(0x118);
        if (plStack_f0 == (longlong *)0x0) {
          plStack_f0 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plStack_f0 + 1) = 1;
          *(undefined4 *)((longlong)plStack_f0 + 0xc) = 1;
          *plStack_f0 = (longlong)&PTR_FUN_144d501f8;
          local_58 = local_b8;
          plStack_50 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
            UNLOCK();
          }
          FFreeTypeFace::FFreeTypeFace(plStack_f0 + 2,*param_1,&local_58,uVar3,uVar6);
        }
        local_f8 = plStack_f0 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
        local_108 = local_f8;
        plStack_100 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
        }
        if (param_2 != &local_108) {
          *param_2 = local_f8;
          local_108 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&plStack_100);
        }
        plVar10 = plStack_100;
        if (plStack_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_100 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_100)(plStack_100);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_100 + 8))(plStack_100,1);
            }
          }
        }
        plVar10 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_f0 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        plVar10 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      if (local_178 != 0) {
        FMemory::Free();
      }
    }
    else if (cVar7 == '\x01') {
      local_res10[0] = FFontData::GetLayoutMethod(param_3);
      local_158[0] = *(undefined4 *)(param_3 + 0x14);
      uVar9 = FFontData::GetFontFilename(param_3);
      plStack_110 = (longlong *)
                    SharedPointerInternals::
                    NewIntrusiveReferenceController<FFreeTypeFace,FFreeTypeLibrary_const_*_&,FString_const_&,int,enum_EFontLayoutMethod>
                              (param_1,uVar9,local_158,local_res10);
      local_118 = plStack_110 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_118,local_118,local_118);
      local_128 = local_118;
      plStack_120 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
        UNLOCK();
      }
      if (param_2 != &local_128) {
        *param_2 = local_118;
        local_128 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&plStack_120);
      }
      plVar10 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_120 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_120 + 8))(plStack_120,1);
          }
        }
      }
      plVar10 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    plVar10 = *param_2;
    if (plVar10 != (longlong *)0x0) goto LAB_141838239;
  }
  else {
LAB_141838239:
    if (*plVar10 != 0) {
      local_88 = param_3;
      local_80 = param_2;
      FUN_1417def90(local_90,local_a8,&local_88,0);
      goto LAB_1418382b5;
    }
  }
  local_e0 = (longlong *)0x0;
  if (param_2 != &local_e8) {
    *param_2 = (longlong *)0x0;
    local_e8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_e0);
    plVar10 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
LAB_1418382b5:
  if (local_d8 != 0) {
    FMemory::Free(local_d8);
  }
  return param_2;
}



// FUNCTION 141838300 FUN_141838300 body=135 status=ok
// SIG undefined FUN_141838300(void)

undefined8 FUN_141838300(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *local_18;
  longlong *local_10;
  
  FUN_141837aa0(*(undefined8 *)(param_1 + 0x18),&local_18,param_2);
  uVar5 = 0;
  if (local_18 != (undefined8 *)0x0) {
    uVar5 = *local_18;
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 141838390 GetFontFaceData body=183 status=ok
// SIG undefined GetFontFaceData(void)

undefined8 * FFontData::GetFontFaceData(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar4 = UFontFaceInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,local_18);
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
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 141838450 FUN_141838450 body=735 status=ok
// SIG undefined FUN_141838450(void)

longlong *
FUN_141838450(longlong param_1,longlong *param_2,undefined8 param_3,short param_4,byte param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  plVar5 = (longlong *)FUN_141837aa0(*(undefined8 *)(param_1 + 0x18),local_48);
  if (param_2 != plVar5) {
    *param_2 = *plVar5;
    *plVar5 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar5 + 1);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  lVar7 = 0;
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    uVar3 = FT_Get_Char_Index(*(undefined8 *)*param_2,param_4);
    *(undefined4 *)(param_2 + 2) = uVar3;
    lVar7 = *param_2;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  if (((lVar7 == 0) || ((param_4 != 0 && ((int)param_2[2] == 0)))) &&
     ((param_4 == -3 || (param_5 != 0)))) {
    uVar6 = FUN_1418315f0();
    uVar6 = FUN_14183a0f0(uVar6);
    plVar5 = (longlong *)FUN_141837aa0(*(undefined8 *)(param_1 + 0x18),local_38,uVar6);
    if (param_2 != plVar5) {
      *param_2 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar5 + 1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
      iVar4 = FT_Get_Char_Index(*(undefined8 *)*param_2,param_4);
      *(int *)(param_2 + 2) = iVar4;
      if (iVar4 != 0) {
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x20;
        *(undefined1 *)(param_2 + 3) = 1;
      }
      goto LAB_1418385ce;
    }
  }
  else {
LAB_1418385ce:
    if (*param_2 != 0) {
      if (param_4 == 0) {
        return param_2;
      }
      if ((int)param_2[2] != 0) goto LAB_1418386a3;
    }
  }
  if (((param_4 == -3) || (1 < param_5)) &&
     (lVar7 = FUN_1418315f0(), *(char *)(lVar7 + 0x1a8) != '\0')) {
    uVar6 = FUN_1418315f0();
    uVar6 = FUN_141839a30(uVar6);
    plVar5 = (longlong *)FUN_141837aa0(*(undefined8 *)(param_1 + 0x18),local_28,uVar6);
    if (param_2 != plVar5) {
      *param_2 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar5 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
      iVar4 = FT_Get_Char_Index(*(undefined8 *)*param_2,param_4);
      *(int *)(param_2 + 2) = iVar4;
      if (iVar4 != 0) {
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x20;
        *(undefined1 *)(param_2 + 3) = 2;
      }
    }
  }
LAB_1418386a3:
  if (((param_4 != 0) && ((int)param_2[2] == 0)) &&
     (local_50 = (longlong *)0x0, param_2 != &local_58)) {
    *param_2 = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141838730 GetFontFilename body=55 status=ok
// SIG undefined GetFontFilename(void)

longlong FFontData::GetFontFilename(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar1 = UFontFaceInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00014183875a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    return lVar3;
  }
  return param_1;
}



// FUNCTION 141838770 FUN_141838770 body=302 status=ok
// SIG undefined FUN_141838770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141838770(undefined8 *param_1,ushort param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined4 local_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  FName::FName(&local_res8,L"Regular",1);
  uVar7 = _DAT_1464aa6e8;
  uVar6 = _DAT_1464aa6e0;
  local_38 = 0;
  uStack_34 = uStack_34 & 0xffffff00;
  uStack_30 = 0;
  uVar8 = FUN_1418315f0();
  puVar9 = (undefined8 *)FUN_141835590(uVar8,local_48);
  plVar4 = (longlong *)puVar9[1];
  uVar8 = *puVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = local_38;
  *(uint *)((longlong)param_1 + 0x14) = uStack_34;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  param_1[8] = local_res8;
  *(uint *)(param_1 + 9) = (uint)param_2;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 3;
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_1;
}



// FUNCTION 1418388a0 FUN_1418388a0 body=81 status=ok
// SIG undefined FUN_1418388a0(void)

undefined8 * FUN_1418388a0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = IsInActualRenderingThread();
  if (cVar1 == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else {
    IsInRenderingThread();
    *param_2 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141838900 FUN_141838900 body=557 status=ok
// SIG undefined FUN_141838900(void)

longlong * FUN_141838900(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 local_res8 [2];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58 [56];
  longlong *local_20;
  
  local_res8[0] = 0;
  plVar7 = (longlong *)ISlateStyle::Join(local_res8,param_3,param_4);
  lVar9 = *plVar7;
  if (*(int *)(param_1 + 0x2c0) != *(int *)(param_1 + 0x2ec)) {
    lVar8 = *(longlong *)(param_1 + 0x2f8);
    if (*(longlong *)(param_1 + 0x2f8) == 0) {
      lVar8 = param_1 + 0x2f0;
    }
    iVar6 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                             (longlong)*(int *)(param_1 + 0x300) - 1U) * 4);
    if (iVar6 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar6 * 0x60 + *(longlong *)(param_1 + 0x2b8));
        if (*plVar7 == lVar9) {
          if (iVar6 != -1) goto LAB_1418389b5;
          break;
        }
        iVar6 = (int)plVar7[0xb];
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1418389b5:
  plVar10 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_141838770(local_58,10);
    bVar5 = false;
    bVar4 = true;
    lVar9 = *plVar7;
  }
  else {
    lVar9 = *plVar10;
    local_a0 = plVar10[1];
    local_78 = plVar10[6];
    local_70 = (longlong *)plVar10[7];
    local_98 = plVar10[2];
    lStack_90 = plVar10[3];
    local_88 = plVar10[4];
    lStack_80 = plVar10[5];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = false;
    local_68 = plVar10[8];
    local_60 = (int)plVar10[9];
    plVar7 = &local_a8;
    local_5c = *(undefined1 *)((longlong)plVar10 + 0x4c);
    local_a8 = lVar9;
  }
  *param_2 = lVar9;
  param_2[1] = plVar7[1];
  uVar2 = *(undefined4 *)((longlong)plVar7 + 0x14);
  lVar9 = plVar7[3];
  uVar3 = *(undefined4 *)((longlong)plVar7 + 0x1c);
  *(int *)(param_2 + 2) = (int)plVar7[2];
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(int *)(param_2 + 3) = (int)lVar9;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  uVar2 = *(undefined4 *)((longlong)plVar7 + 0x24);
  lVar9 = plVar7[5];
  uVar3 = *(undefined4 *)((longlong)plVar7 + 0x2c);
  *(int *)(param_2 + 4) = (int)plVar7[4];
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
  *(int *)(param_2 + 5) = (int)lVar9;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  param_2[6] = plVar7[6];
  lVar9 = plVar7[7];
  param_2[7] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  param_2[8] = plVar7[8];
  *(int *)(param_2 + 9) = (int)plVar7[9];
  *(undefined1 *)((longlong)param_2 + 0x4c) = *(undefined1 *)((longlong)plVar7 + 0x4c);
  if ((bVar4) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar7 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141838b30 GetForegroundColor body=41 status=ok
// SIG undefined GetForegroundColor(void)

undefined8 SCompoundWidget::GetForegroundColor(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141831530(param_1 + 0x2b0);
  FUN_1417ee5f0(param_2,uVar1);
  return param_2;
}



// FUNCTION 141838b60 GetGlyphAtOffset body=377 status=ok
// SIG undefined GetGlyphAtOffset(void)

longlong *
FShapedGlyphSequence::GetGlyphAtOffset
          (longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,uint param_5,
          undefined8 param_6,int param_7,char param_8)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong local_res8;
  longlong local_res18 [2];
  code *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_res8 = 0;
  local_res18[0] = 0;
  if ((param_8 != '\0') && (0 < (int)param_4)) {
    iVar4 = param_4 - (int)param_1[0xb];
    iVar2 = iVar4 + -1;
    if ((iVar2 < 0) ||
       ((((int)param_1[0xd] <= iVar2 ||
         (piVar1 = (int *)(param_1[0xc] + ((longlong)iVar4 * 3 + -3) * 8), piVar1 == (int *)0x0)) ||
        (iVar2 = *piVar1, iVar2 == -1)))) {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)((longlong)iVar2 * 0x68 + 0x20 + *param_1);
    }
    param_7 = cVar3 + param_7;
  }
  local_48 = (undefined1 *)&param_6;
  local_40 = &param_7;
  local_38 = &local_res8;
  local_30 = local_res18;
  uStack_60 = &local_58;
  local_68 = FUN_141804a20;
  local_58 = param_1;
  local_50 = param_3;
  cVar3 = EnumerateVisualGlyphsInSourceRange(param_1,param_4,param_5,&local_68);
  if (cVar3 != '\0') {
    if (local_res8 != 0) {
      uStack_60 = (longlong **)CONCAT44(*(undefined4 *)(local_res8 + 0x14),param_7);
      *param_2 = local_res8;
      param_2[1] = (longlong)uStack_60;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
    if ((local_res18[0] == 0) || (*(char *)(local_res18[0] + 0x23) == '\0')) {
      if (((int)param_1[0xb] <= (int)param_5) &&
         ((int)param_5 <= (int)param_1[0xb] + *(int *)((longlong)param_1 + 0x5c))) {
        uStack_60 = (longlong **)((ulonglong)param_5 << 0x20);
        *param_2 = 0;
        param_2[1] = (longlong)uStack_60;
        *(undefined1 *)(param_2 + 2) = 1;
        return param_2;
      }
    }
    else if (((int)param_1[0xb] <= (int)param_4) &&
            ((int)param_4 <= (int)param_1[0xb] + *(int *)((longlong)param_1 + 0x5c))) {
      uStack_60 = (longlong **)((ulonglong)param_4 << 0x20);
      *param_2 = 0;
      param_2[1] = (longlong)uStack_60;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 141838ce0 GetGlyphAtOffset body=525 status=ok
// SIG undefined GetGlyphAtOffset(void)

ulonglong *
FShapedGlyphSequence::GetGlyphAtOffset
          (longlong *param_1,ulonglong *param_2,undefined8 param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar12;
  uint local_res8;
  longlong local_78;
  longlong local_70;
  undefined1 local_58 [2];
  short local_56;
  ulonglong uVar11;
  ulonglong uVar13;
  
  iVar4 = (int)param_1[1];
  uVar6 = 0;
  if (iVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  local_res8 = 0;
  if (0 < (longlong)iVar4) {
    local_78 = 0;
    local_70 = 0;
    uVar9 = uVar6;
    do {
      uVar7 = (uint)uVar9;
      lVar5 = *param_1;
      uVar9 = local_70 + lVar5;
      lVar8 = local_70;
      uVar11 = uVar6;
      uVar13 = uVar6;
      if (*(char *)(uVar9 + 0x21) != '\0') {
        do {
          uVar7 = uVar7 + 1;
          lVar1 = lVar8 + lVar5;
          FUN_14183d710(param_3,local_58,lVar1,&DAT_1469eaf80);
          uVar10 = (int)uVar11 + (int)*(short *)(lVar1 + 0x18);
          uVar11 = (ulonglong)uVar10;
          uVar12 = (int)uVar13 + (int)local_56 + (int)*(short *)(lVar1 + 0x18);
          uVar13 = (ulonglong)uVar12;
          if (((int)uVar7 < 0) || ((int)param_1[1] <= (int)uVar7)) break;
          lVar5 = *param_1;
          lVar2 = lVar8 + 0x7c;
          lVar8 = lVar8 + 0x68;
        } while (*(int *)(lVar1 + 0x14) == *(int *)(lVar2 + lVar5));
        if (*(byte *)(uVar9 + 0x22) < 2) {
          uVar12 = (int)uVar12 / 2;
        }
        if (param_4 < (int)(uVar12 + param_5)) {
          uVar6 = uVar9;
          if (((*(char *)(uVar9 + 0x23) != '\0') && (iVar4 = local_res8 - 1, -1 < iVar4)) &&
             (iVar4 < (int)param_1[1])) {
            uVar6 = (longlong)iVar4 * 0x68 + *param_1;
          }
          break;
        }
        param_5 = param_5 + uVar10;
        uVar7 = local_res8;
      }
      local_res8 = uVar7 + 1;
      uVar9 = (ulonglong)local_res8;
      local_78 = local_78 + 1;
      local_70 = local_70 + 0x68;
    } while (local_78 < iVar4);
  }
  if (uVar6 == 0) {
    cVar3 = *(char *)((longlong)(int)param_1[1] * 0x68 + -0x45 + *param_1);
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (cVar3 == '\0') {
      iVar4 = *(int *)((longlong)param_1 + 0x5c) + (int)param_1[0xb];
    }
    else {
      iVar4 = (int)param_1[0xb];
    }
  }
  else {
    *(int *)(param_2 + 1) = param_5;
    iVar4 = *(int *)(uVar6 + 0x14);
    *param_2 = uVar6;
  }
  *(int *)((longlong)param_2 + 0xc) = iVar4;
  return param_2;
}



// FUNCTION 141838ef0 FUN_141838ef0 body=1361 status=ok
// SIG undefined FUN_141838ef0(void)

int * FUN_141838ef0(longlong *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *plVar11;
  float *pfVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
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
  uint uStackX_c;
  float local_res20;
  float local_res24;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  
  bVar10 = false;
  iVar7 = (int)param_1[5] * param_3[1] + *param_3;
  if ((-1 < iVar7) && (iVar7 < (int)param_1[3])) {
    plVar14 = (longlong *)((longlong)iVar7 * 0x10 + param_1[2]);
    iVar7 = (int)plVar14[1] + -1;
    lVar13 = (longlong)iVar7;
    if (-1 < iVar7) {
      plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
      do {
        plVar8 = (longlong *)0x0;
        iVar7 = *(int *)(*plVar14 + lVar13 * 4);
        plVar11 = (longlong *)((longlong)iVar7 * 0x88 + *param_1);
        if ((char)param_3[5] == '\0') {
LAB_14183903a:
          bVar15 = true;
        }
        else {
          if ((*plVar11 != 0) && (plVar11[1] != 0)) {
            piVar1 = (int *)(plVar11[1] + 8);
            LOCK();
            iVar4 = *piVar1;
            if (iVar4 == 0) {
              *piVar1 = 0;
              iVar4 = 0;
            }
            UNLOCK();
            if (0 < iVar4) {
              plVar2 = (longlong *)plVar11[1];
              bVar10 = true;
              plVar9 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                iVar4 = (int)plVar2[1];
                bVar15 = iVar4 == 0;
                if (bVar15) {
                  *(int *)(plVar2 + 1) = 0;
                  iVar4 = 0;
                }
                UNLOCK();
                while (plVar9 = plVar8, !bVar15) {
                  LOCK();
                  bVar15 = iVar4 == (int)plVar2[1];
                  if (bVar15) {
                    *(int *)(plVar2 + 1) = iVar4 + 1;
                  }
                  UNLOCK();
                  if (bVar15) {
                    plVar9 = plVar2;
                    if (plVar2 != (longlong *)0x0) {
                      plVar8 = (longlong *)*plVar11;
                    }
                    break;
                  }
                  LOCK();
                  iVar4 = (int)plVar2[1];
                  bVar15 = iVar4 == 0;
                  if (bVar15) {
                    *(int *)(plVar2 + 1) = 0;
                    iVar4 = 0;
                  }
                  UNLOCK();
                }
              }
              cVar3 = (**(code **)(*plVar8 + 400))(plVar8);
              if (cVar3 != '\0') goto LAB_14183903a;
            }
          }
          bVar15 = false;
        }
        if ((bVar10) && (bVar10 = false, plVar9 != (longlong *)0x0)) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
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
        if (bVar15) {
          bVar15 = true;
          fVar20 = (float)param_3[2] + *(float *)(param_1 + 4);
          fVar21 = *(float *)((longlong)param_1 + 0x24) + (float)param_3[3];
          local_res20 = fVar20;
          local_res24 = fVar21;
          if ((int)plVar11[0xb] == -1) goto LAB_1418391ba;
          lVar5 = (longlong)(int)plVar11[0xb] * 0x40 + param_1[8];
          if (*(char *)(lVar5 + 0x28) == '\0') {
            pfVar12 = *(float **)(lVar5 + 0x30);
            pfVar6 = pfVar12 + (longlong)*(int *)(lVar5 + 0x38) * 9;
            for (; pfVar12 != pfVar6; pfVar12 = pfVar12 + 9) {
              if (((uint)pfVar12[8] & 1) == 0) {
                cVar3 = IsPointInTriangle(&local_res20,pfVar12,pfVar12 + 2,pfVar12 + 4);
                if ((cVar3 == '\0') &&
                   (cVar3 = IsPointInTriangle(&local_res20,pfVar12 + 4), cVar3 == '\0'))
                goto LAB_1418390f7;
              }
              else if ((fVar20 < *pfVar12) ||
                      (((pfVar12[2] <= fVar20 && fVar20 != pfVar12[2] || (fVar21 < pfVar12[1])) ||
                       (pfVar12[5] <= fVar21 && fVar21 != pfVar12[5])))) goto LAB_1418390f7;
            }
LAB_1418391b8:
            bVar15 = true;
          }
          else {
            pfVar6 = (float *)(lVar5 + 4);
            if ((*(byte *)(lVar5 + 0x24) & 1) == 0) {
              cVar3 = IsPointInTriangle(&local_res20,pfVar6,lVar5 + 0xc,lVar5 + 0x14);
              if ((cVar3 != '\0') ||
                 (cVar3 = IsPointInTriangle(&local_res20,pfVar6 + 4), cVar3 != '\0'))
              goto LAB_1418391b8;
              bVar15 = false;
            }
            else {
              if (((*pfVar6 <= fVar20) &&
                  (fVar20 < *(float *)(lVar5 + 0xc) || fVar20 == *(float *)(lVar5 + 0xc))) &&
                 ((*(float *)(lVar5 + 8) <= fVar21 &&
                  (fVar21 < *(float *)(lVar5 + 0x18) || fVar21 == *(float *)(lVar5 + 0x18)))))
              goto LAB_1418391b8;
LAB_1418390f7:
              bVar15 = false;
            }
          }
LAB_1418391ba:
          if (bVar15) {
            fVar20 = *(float *)(plVar11 + 6);
            fVar21 = *(float *)(plVar11 + 5);
            fVar25 = *(float *)((longlong)plVar11 + 0x2c);
            fVar22 = 1.0 / fVar21;
            fVar16 = fVar21 * *(float *)((longlong)plVar11 + 0x24);
            fVar17 = fVar20 + fVar16;
            fVar16 = fVar20 + fVar16;
            fVar18 = fVar21 * *(float *)(plVar11 + 4) + fVar25;
            fVar23 = *(float *)(plVar11 + 9) * fVar22;
            fVar21 = fVar16;
            if (fVar16 <= fVar20) {
              fVar21 = fVar20;
            }
            if (fVar20 <= fVar16) {
              fVar16 = fVar20;
            }
            fVar24 = fVar25;
            if (fVar18 <= fVar25) {
              fVar24 = fVar18;
            }
            if (fVar25 <= fVar18) {
              fVar25 = fVar18;
            }
            if (fVar21 <= fVar17) {
              fVar21 = fVar17;
            }
            if (fVar17 <= fVar16) {
              fVar16 = fVar17;
            }
            if (fVar21 <= fVar20) {
              fVar21 = fVar20;
            }
            if (fVar20 <= fVar16) {
              fVar16 = fVar20;
            }
            fVar17 = fVar22 * *(float *)((longlong)plVar11 + 0x44);
            fVar18 = -(fVar22 * *(float *)((longlong)plVar11 + 0x2c));
            local_fc = fVar22 * *(float *)(plVar11 + 8) * (fVar25 - fVar24);
            local_f4 = fVar23 * (fVar21 - fVar16);
            fVar19 = fVar22 * *(float *)((longlong)plVar11 + 0x3c);
            fVar20 = (float)param_3[4];
            local_100 = fVar19 * (fVar25 - fVar24);
            local_f8 = fVar17 * (fVar21 - fVar16);
            local_104 = fVar24 * fVar22 * *(float *)(plVar11 + 8) + fVar23 * fVar16 +
                        *(float *)(plVar11 + 9) * -(fVar22 * *(float *)(plVar11 + 6)) +
                        fVar18 * *(float *)(plVar11 + 8) + *(float *)(plVar11 + 10);
            local_108 = fVar24 * fVar19 + fVar17 * fVar16 +
                        fVar18 * *(float *)((longlong)plVar11 + 0x3c) +
                        -(fVar22 * *(float *)(plVar11 + 6)) * *(float *)((longlong)plVar11 + 0x44) +
                        *(float *)((longlong)plVar11 + 0x4c);
            pfVar6 = (float *)ClosestPointOnSlateRotatedRect(local_118,&local_res20);
            if ((local_res24 - pfVar6[1]) * (local_res24 - pfVar6[1]) +
                (local_res20 - *pfVar6) * (local_res20 - *pfVar6) <= fVar20 * fVar20) {
              fVar20 = 0.0;
              if (0.0 < (float)param_3[4]) {
                pfVar6 = (float *)ClosestPointOnSlateRotatedRect(local_110,&local_res20,&local_108);
                fVar20 = (local_res24 - pfVar6[1]) * (local_res24 - pfVar6[1]) +
                         (local_res20 - *pfVar6) * (local_res20 - *pfVar6);
              }
              *param_2 = iVar7;
              param_2[1] = (int)fVar20;
              return param_2;
            }
          }
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141839450 FUN_141839450 body=34 status=ok
// SIG undefined FUN_141839450(void)

undefined8 * FUN_141839450(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x4a8);
  lVar1 = *(longlong *)(param_1 + 0x4b0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418394a0 GetIcon body=89 status=ok
// SIG undefined GetIcon(void)

void FSlateIcon::GetIcon(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)GetStyleSet();
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    uVar3 = FUN_14183ac90();
                    /* WARNING: Could not recover jumptable at 0x0001418394e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x48))(plVar2,*(undefined8 *)(param_1 + 8),0,uVar3);
    return;
  }
  FUN_14183ac90();
  return;
}



// FUNCTION 141839500 GetInitialDesiredSizeInScreen body=16 status=ok
// SIG undefined GetInitialDesiredSizeInScreen(void)

undefined8 * SWindow::GetInitialDesiredSizeInScreen(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x358);
  return param_2;
}



// FUNCTION 141839510 FUN_141839510 body=16 status=ok
// SIG undefined FUN_141839510(void)

undefined8 * FUN_141839510(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x360);
  return param_2;
}



// FUNCTION 141839520 FUN_141839520 body=335 status=ok
// SIG undefined FUN_141839520(void)

ulonglong FUN_141839520(longlong param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  ulonglong in_RAX;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_res10;
  undefined4 local_res14;
  int local_res20 [2];
  
  if ((((*(char *)((longlong)param_2 + 0x27) != '\0') &&
       (*(char *)((longlong)param_3 + 0x27) != '\0')) && (*(longlong *)(param_2 + 4) != 0)) &&
     (*(char *)((longlong)param_2 + 0x25) != '\0')) {
    in_RAX = FFontData::operator==(*(longlong *)(param_2 + 4),*(undefined8 *)(param_3 + 4));
    if ((char)in_RAX != '\0') {
      uVar2 = *param_3;
      uVar8 = 0;
      uVar3 = *param_2;
      uVar4 = *(undefined4 *)(param_1 + 0xa8);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x30);
      uVar1 = *(undefined4 *)(param_2 + 8);
      lVar7 = FUN_141838300(lVar5,*(undefined8 *)(param_2 + 4));
      if ((lVar7 != 0) && ((*(byte *)(lVar7 + 8) & 0x40) != 0)) {
        local_res10 = FT_Get_Char_Index(lVar7,uVar3);
        local_res14 = FT_Get_Char_Index(lVar7,uVar2);
        cVar6 = FFreeTypeKerningPairCache::FindOrCache
                          (*(undefined8 *)(lVar5 + 0x10),lVar7,&local_res10,0,uVar4,uVar1,
                           local_res20);
        if (cVar6 != '\0') {
          uVar8 = (ulonglong)
                  (uint)((int)ROUND((float)local_res20[0] * 0.015625 +
                                    (float)local_res20[0] * 0.015625 + 0.5) >> 1);
        }
      }
      return uVar8 & 0xff;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141839670 GetKerning body=97 status=ok
// SIG undefined GetKerning(void)

void FCharacterList::GetKerning
               (undefined8 param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4)

{
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  GetCharacter(param_1,local_30,param_2);
  GetCharacter(param_1,local_58,param_3,param_4);
  FUN_141839520(param_1,local_30,local_58);
  return;
}



// FUNCTION 1418396e0 GetKerning body=73 status=ok
// SIG undefined GetKerning(void)

undefined1 * FShapedGlyphSequence::GetKerning(longlong *param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  param_3 = param_3 - (int)param_1[0xb];
  if ((((-1 < param_3) && (param_3 < (int)param_1[0xd])) &&
      (piVar1 = (int *)(param_1[0xc] + (longlong)param_3 * 0x18), piVar1 != (int *)0x0)) &&
     (iVar2 = *piVar1, iVar2 != -1)) {
    *param_2 = *(undefined1 *)((longlong)iVar2 * 0x68 + 0x20 + *param_1);
    param_2[1] = 1;
    return param_2;
  }
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141839730 GetKerning body=128 status=ok
// SIG undefined GetKerning(void)

void FSlateFontMeasure::GetKerning
               (longlong param_1,longlong param_2,undefined8 param_3,undefined2 param_4,
               undefined2 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  uVar2 = FUN_1418336f0(*(undefined8 *)(param_1 + 0x58),param_2,param_3,&DAT_1469eaf80);
  uVar1 = *(undefined1 *)(param_2 + 0x4c);
  FCharacterList::GetCharacter(uVar2,local_30,param_4,uVar1);
  FCharacterList::GetCharacter(uVar2,local_58,param_5,uVar1);
  FUN_141839520(uVar2,local_30,local_58);
  return;
}



// FUNCTION 1418397b0 FUN_1418397b0 body=638 status=ok
// SIG undefined FUN_1418397b0(void)

longlong * FUN_1418397b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong **pplVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  BOOL BVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 local_res10;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x148);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pplVar2 = (longlong **)(param_1 + 0x90);
  if ((*pplVar2 == (longlong *)0x0) && (*(char *)(param_1 + 0x1a8) != '\0')) {
    lVar7 = FUN_141839a30(param_1);
    lVar11 = *(longlong *)(lVar7 + 0x18);
    if (lVar11 == 0) {
      uVar4 = *(undefined1 *)(lVar7 + 0x11);
      lVar11 = 0;
    }
    else {
      uVar8 = UFontFaceInterface::GetPrivateStaticClass();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar8);
      uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
      lVar11 = *(longlong *)(lVar7 + 0x18);
    }
    if (lVar11 == 0) {
      uVar5 = *(undefined1 *)(lVar7 + 0x10);
      lVar11 = 0;
    }
    else {
      uVar8 = UFontFaceInterface::GetPrivateStaticClass();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar8);
      uVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
      lVar11 = *(longlong *)(lVar7 + 0x18);
    }
    if (lVar11 != 0) {
      uVar8 = UFontFaceInterface::GetPrivateStaticClass();
      plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar8);
      lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    plVar9 = (longlong *)operator_new(0x58);
    plVar10 = (longlong *)0x0;
    local_50 = plVar10;
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      local_res10 = 0;
      *plVar9 = (longlong)&PTR_DestroyObject_144d50218;
      uVar8 = FString::FString(local_48,lVar7);
      FStandaloneCompositeFont::FStandaloneCompositeFont(plVar9 + 2,&local_res10,uVar8,uVar5,uVar4);
      local_50 = plVar9;
    }
    local_58 = local_50 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
    if (local_58 != (longlong *)0x0) {
      plVar10 = local_58 + 2;
    }
    local_60 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_68 = plVar10;
    if (pplVar2 != &local_68) {
      *pplVar2 = plVar10;
      local_68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x98,&local_60);
    }
    plVar9 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_60 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    plVar9 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_50)(local_50);
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
  }
  *param_2 = (longlong)*pplVar2;
  lVar11 = *(longlong *)(param_1 + 0x98);
  param_2[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 141839a30 FUN_141839a30 body=572 status=ok
// SIG undefined FUN_141839a30(void)

longlong * FUN_141839a30(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong **pplVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  bool bVar6;
  bool bVar7;
  BOOL BVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  void **ppvVar12;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  void *local_48;
  int local_40;
  undefined4 uStack_3c;
  void *local_38;
  undefined8 local_30;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x170);
  plVar10 = (longlong *)0x0;
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pplVar2 = (longlong **)(param_1 + 0xb0);
  if (*pplVar2 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      local_38 = (void *)0x0;
      ppvVar12 = &local_38;
      local_30 = 0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      local_40 = *(int *)(param_1 + 0x1a0);
      lVar11 = (longlong)local_40;
      pvVar5 = *(void **)(param_1 + 0x198);
      local_48 = (void *)0x0;
      if (local_40 == 0) {
        uStack_3c = 0;
        ppvVar12 = &local_48;
        bVar7 = true;
        bVar6 = false;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
        _guard_xfg_dispatch_icall_nop(local_48,pvVar5,lVar11 * 2);
        ppvVar12 = &local_48;
        bVar7 = true;
        bVar6 = false;
      }
    }
    plVar9 = (longlong *)operator_new(0x30);
    if (plVar9 != (longlong *)0x0) {
      pvVar5 = *ppvVar12;
      *plVar9 = (longlong)&PTR_FUN_143f4cf38;
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      plVar9[2] = (longlong)pvVar5;
      *ppvVar12 = (void *)0x0;
      uVar4 = *(undefined4 *)((longlong)ppvVar12 + 0xc);
      *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(ppvVar12 + 1);
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
      *(undefined2 *)(plVar9 + 4) = 0;
      *(undefined4 *)((longlong)plVar9 + 0x24) = 0;
      plVar9[5] = 0;
      ppvVar12[1] = (void *)0x0;
      plVar10 = plVar9;
    }
    local_58 = plVar10 + 2;
    plStack_50 = plVar10;
    SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
    local_68 = local_58;
    plStack_60 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    if (pplVar2 != &local_68) {
      *pplVar2 = local_58;
      local_68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb8,&plStack_60);
    }
    plVar10 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_60 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    plVar10 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_50 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
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
    if ((bVar6) && (local_38 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar7) && (local_48 != (void *)0x0)) {
      FMemory::Free();
    }
  }
  plVar10 = *pplVar2;
  LeaveCriticalSection(lpCriticalSection);
  return plVar10;
}



// FUNCTION 141839c70 GetLayoutMethod body=54 status=ok
// SIG undefined GetLayoutMethod(void)

undefined1 FFontData::GetLayoutMethod(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = UFontFaceInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000141839c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141839cb0 FUN_141839cb0 body=384 status=ok
// SIG undefined FUN_141839cb0(void)

ulonglong FUN_141839cb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar3 = FCurveSequence::GetSequenceTime();
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  lVar2 = (longlong)(int)param_1[1];
  fVar4 = 0.0;
  lVar1 = *(longlong *)(*param_1 + 0x30);
  fVar6 = ((float)uVar3 - *(float *)(lVar1 + 4 + lVar2 * 0xc)) / *(float *)(lVar1 + lVar2 * 0xc);
  if (0.0 <= fVar6) {
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  else {
    fVar6 = 0.0;
    uVar7 = 0;
  }
  uVar5 = 0;
  switch(*(undefined1 *)(lVar1 + 8 + lVar2 * 0xc)) {
  case 0:
    return CONCAT44(uVar7,fVar6);
  case 1:
    return CONCAT44(uVar7,fVar6 * fVar6);
  case 2:
    return (ulonglong)(uint)((2.0 - fVar6) * fVar6);
  case 3:
    break;
  case 4:
    return CONCAT44(uVar7,fVar6 * fVar6 * fVar6);
  case 5:
    fVar6 = fVar6 - 1.0;
    return CONCAT44(uVar7,fVar6 * fVar6 * fVar6 + 1.0);
  case 6:
    fVar6 = fVar6 + fVar6;
    if (fVar6 < 1.0) {
      return CONCAT44(uVar7,fVar6 * 0.5 * fVar6 * fVar6);
    }
    fVar6 = fVar6 + -2.0;
    fVar4 = fVar6 * fVar6 * fVar6 * 0.5 + 1.0;
    uVar5 = uVar7;
  default:
    return CONCAT44(uVar5,fVar4);
  }
  if (0.5 <= fVar6) {
    fVar4 = ((fVar6 - 0.5) + fVar6) - 0.5;
    return CONCAT44(uVar7,((fVar4 - 2.0) * fVar4 - 1.0) * -0.5);
  }
  return CONCAT44(uVar7,(fVar6 + fVar6) * 0.5 * (fVar6 + fVar6));
}



// FUNCTION 141839e50 FUN_141839e50 body=367 status=ok
// SIG undefined FUN_141839e50(void)

ulonglong FUN_141839e50(longlong param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FCurveSequence::GetSequenceTime();
  uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
  pfVar1 = *(float **)(param_1 + 0x30);
  fVar3 = 0.0;
  fVar5 = ((float)uVar2 - pfVar1[1]) / *pfVar1;
  if (0.0 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
    uVar6 = 0;
  }
  uVar4 = 0;
  switch(*(undefined1 *)(pfVar1 + 2)) {
  case 0:
    return CONCAT44(uVar6,fVar5);
  case 1:
    return CONCAT44(uVar6,fVar5 * fVar5);
  case 2:
    return (ulonglong)(uint)((2.0 - fVar5) * fVar5);
  case 3:
    break;
  case 4:
    return CONCAT44(uVar6,fVar5 * fVar5 * fVar5);
  case 5:
    fVar5 = fVar5 - 1.0;
    return CONCAT44(uVar6,fVar5 * fVar5 * fVar5 + 1.0);
  case 6:
    fVar5 = fVar5 + fVar5;
    if (fVar5 < 1.0) {
      return CONCAT44(uVar6,fVar5 * 0.5 * fVar5 * fVar5);
    }
    fVar5 = fVar5 + -2.0;
    fVar3 = fVar5 * fVar5 * fVar5 * 0.5 + 1.0;
    uVar4 = uVar6;
  default:
    return CONCAT44(uVar4,fVar3);
  }
  if (0.5 <= fVar5) {
    fVar3 = ((fVar5 - 0.5) + fVar5) - 0.5;
    return CONCAT44(uVar6,((fVar3 - 2.0) * fVar3 - 1.0) * -0.5);
  }
  return CONCAT44(uVar6,(fVar5 + fVar5) * 0.5 * (fVar5 + fVar5));
}



// FUNCTION 141839fe0 GetLoadingPolicy body=56 status=ok
// SIG undefined GetLoadingPolicy(void)

ulonglong FFontData::GetLoadingPolicy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = UFontFaceInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00014183a00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
    return uVar4;
  }
  return (ulonglong)*(byte *)(param_1 + 0x11);
}



// FUNCTION 14183a020 GetLocalToScreenTransform body=106 status=ok
// SIG undefined GetLocalToScreenTransform(void)

float * SWindow::GetLocalToScreenTransform(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  plVar1 = DAT_1469eaf38;
  fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x498) + 0xf0))();
  fVar3 = (float)(**(code **)(*plVar1 + 0x38))(plVar1);
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x368);
  *param_2 = fVar2 * fVar3;
  return param_2;
}



// FUNCTION 14183a090 GetLocalToWindowTransform body=86 status=ok
// SIG undefined GetLocalToWindowTransform(void)

float * SWindow::GetLocalToWindowTransform(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  
  plVar1 = DAT_1469eaf38;
  fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x498) + 0xf0))();
  fVar3 = (float)(**(code **)(*plVar1 + 0x38))(plVar1);
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *param_2 = fVar2 * fVar3;
  return param_2;
}



// FUNCTION 14183a0f0 FUN_14183a0f0 body=1407 status=ok
// SIG undefined FUN_14183a0f0(void)

longlong * FUN_14183a0f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  short sVar6;
  BOOL BVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  void *pvVar15;
  int iVar16;
  int local_res8 [2];
  undefined1 local_res10 [8];
  void *local_res18;
  longlong *local_res20;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  int local_e0;
  int local_dc;
  longlong *local_d8;
  longlong *plStack_d0;
  void *local_c8;
  int local_c0;
  int local_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  void **local_88;
  longlong **local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  short sVar7;
  
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  }
  lVar9 = FUN_141607f00();
  lVar14 = DAT_1468c21b0;
  pplVar3 = (longlong **)(param_1 + 0xa0);
  local_res20 = *pplVar3;
  if ((local_res20 == (longlong *)0x0) ||
     ((*(short *)(param_1 + 0x112) != *(short *)(lVar9 + 0xd0) &&
      (*(longlong *)(param_1 + 0x118) != DAT_1468c21b0)))) {
    *(short *)(param_1 + 0x112) = *(short *)(lVar9 + 0xd0);
    *(longlong *)(param_1 + 0x118) = lVar14;
    plVar5 = *(longlong **)(param_1 + 0xa8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_68,L"DroidSansFallback",L"Slate",L"LegacyFallbackFont");
    puVar11 = (undefined8 *)FText::ToString(uVar10);
    local_e0 = *(int *)(puVar11 + 1);
    lVar14 = (longlong)local_e0;
    _Src = (void *)*puVar11;
    local_e8 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_e8,(5 - (uint)(local_e0 != 0)) + local_e0,0);
    pvVar15 = local_e8;
    _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar14 * 2);
    iVar4 = local_e0;
    lVar14 = (longlong)local_e0;
    local_e0 = (5 - (uint)(local_e0 != 0)) + local_e0;
    if (local_dc < local_e0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar4);
      pvVar15 = local_e8;
    }
    iVar16 = local_e0;
    lVar14 = lVar14 - (ulonglong)(iVar4 != 0);
    *(undefined8 *)((longlong)pvVar15 + lVar14 * 2) = 0x6600740074002e;
    *(undefined2 *)((longlong)pvVar15 + lVar14 * 2 + 8) = 0;
    puVar11 = (undefined8 *)FPaths::EngineContentDir(local_78);
    iVar4 = *(int *)(puVar11 + 1);
    local_f8 = (void *)*puVar11;
    *puVar11 = 0;
    local_f0._0_4_ = *(int *)(puVar11 + 1);
    local_f0._4_4_ = *(int *)((longlong)puVar11 + 0xc);
    puVar11[1] = 0;
    if (local_f0._4_4_ < (int)((0xe - (uint)(iVar4 != 0)) + (int)local_f0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
    }
    FString::PathAppend(&local_f8,L"Slate/Fonts/",0xc);
    iVar4 = local_f0._4_4_;
    if (iVar16 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = iVar16 + -1;
    }
    if (((int)local_f0 != 0) || (iVar13 = 2, iVar16 == -1)) {
      iVar13 = 1;
    }
    iVar13 = iVar13 + (int)local_f0;
    local_c8 = local_f8;
    local_f8 = (void *)0x0;
    local_c0 = (int)local_f0;
    local_bc = local_f0._4_4_;
    local_f0 = 0;
    if (iVar4 < iVar13 + iVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    FString::PathAppend(&local_c8,pvVar15,iVar16);
    if (local_f8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_60 + 1;
      lVar14 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0xc0),local_res8,&local_c8);
    if ((local_res8[0] == -1) ||
       (lVar14 = *(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x28, lVar14 == 0)) {
      local_d8 = (longlong *)0x0;
      plStack_d0 = (longlong *)0x0;
    }
    else {
      local_d8 = *(longlong **)(lVar14 + 0x10);
      plStack_d0 = *(longlong **)(lVar14 + 0x18);
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
        UNLOCK();
      }
    }
    if (pplVar3 != &local_d8) {
      *pplVar3 = local_d8;
      local_d8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa8);
    }
    plVar12 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_d0 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_d0 + 8))();
        }
      }
    }
    plVar12 = *pplVar3;
    if (plVar12 == (longlong *)0x0) {
      plStack_90 = (longlong *)operator_new(0x30);
      if (plStack_90 != (longlong *)0x0) {
        *(undefined4 *)(plStack_90 + 1) = 1;
        *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
        *plStack_90 = (longlong)&PTR_FUN_143f4cf38;
        lVar14 = (longlong)local_c0;
        local_b8 = (void *)0x0;
        local_res18 = local_c8;
        local_b0 = local_c0;
        if (local_c0 == 0) {
          local_ac = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_c0,0);
          _guard_xfg_dispatch_icall_nop(local_b8,local_res18,lVar14 * 2);
        }
        plStack_90[2] = (longlong)local_b8;
        *(int *)(plStack_90 + 3) = local_b0;
        *(undefined4 *)((longlong)plStack_90 + 0x1c) = local_ac;
        *(undefined2 *)(plStack_90 + 4) = 0;
        *(undefined4 *)((longlong)plStack_90 + 0x24) = 0;
        plStack_90[5] = 0;
      }
      local_98 = plStack_90 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
      local_a8 = local_98;
      plStack_a0 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
      }
      if (pplVar3 != &local_a8) {
        *pplVar3 = local_98;
        local_a8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa8,&plStack_a0);
      }
      plVar12 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_a0 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
          }
        }
      }
      plVar12 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_90 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      local_88 = &local_c8;
      local_80 = pplVar3;
      FUN_140533600(param_1 + 0xc0,local_res10,&local_88,0);
      plVar12 = *pplVar3;
    }
    if (plVar12 != local_res20) {
      sVar7 = *(short *)(param_1 + 0x110);
      do {
        sVar6 = sVar7 + 1;
        sVar7 = 0;
      } while (sVar6 == 0);
      *(short *)(param_1 + 0x110) = sVar6;
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free();
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar5 + 1;
      lVar14 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
  plVar5 = *pplVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return plVar5;
}



// FUNCTION 14183a670 GetLocalizedFallbackFontRevision body=21 status=ok
// SIG undefined GetLocalizedFallbackFontRevision(void)

undefined2 FSlateFontCache::GetLocalizedFallbackFontRevision(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1418315f0();
  return *(undefined2 *)(lVar1 + 0x110);
}



// FUNCTION 14183a690 GetMargin body=177 status=ok
// SIG undefined GetMargin(void)

longlong * FSlateStyleSet::GetMargin(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res8 [4];
  
  ISlateStyle::Join(local_res8);
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1 + 0x1f8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)
                              ((int)((ulonglong)local_res8[0] >> 0x20) + (int)local_res8[0]) &
                             (longlong)*(int *)(param_1 + 0x208) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x1c0));
        if (*plVar4 == local_res8[0]) {
          if (iVar1 != -1) goto LAB_14183a722;
          break;
        }
        iVar1 = (int)plVar4[3];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14183a722:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  plVar4 = (longlong *)&DAT_1464b9f08;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = plVar3;
  }
  return plVar4;
}



// FUNCTION 14183a750 FUN_14183a750 body=385 status=ok
// SIG undefined FUN_14183a750(void)

uint FUN_14183a750(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *local_48;
  longlong *local_40;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar8 = FUN_141836ae0(*(undefined8 *)(lVar5 + 0x18));
  FUN_141838450(lVar5,&local_48,uVar8,0,*(undefined1 *)(param_2 + 0x4c));
  plVar6 = local_40;
  if (local_48 != (longlong *)0x0) {
    FreeTypeUtils::ApplySizeAndScale(*local_48,*(undefined4 *)(param_2 + 0x48),param_3);
    lVar5 = *local_48;
    iVar4 = *(int *)(param_2 + 0x10);
    if ((char)local_48[0x20] == '\0') {
      iVar7 = *(int *)(*(longlong *)(lVar5 + 0x80) + 0x2c);
    }
    else {
      iVar7 = FUN_143c22100(*(int *)(lVar5 + 100) - *(int *)(lVar5 + 0x5c),
                            *(undefined4 *)(*(longlong *)(lVar5 + 0x80) + 0x20));
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    return (int)(((float)((int)ROUND((float)iVar7 * 0.015625 + (float)iVar7 * 0.015625 + 0.5) >> 1)
                 + (float)iVar4) * param_3) & 0xffff;
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
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return 0;
}



// FUNCTION 14183a8e0 FUN_14183a8e0 body=32 status=ok
// SIG undefined FUN_14183a8e0(void)

void FUN_14183a8e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1418336f0(*(undefined8 *)(param_1 + 0x58),param_2,param_3,&DAT_1469eaf80);
  FUN_14183a900(uVar1);
  return;
}



// FUNCTION 14183a900 FUN_14183a900 body=420 status=ok
// SIG undefined FUN_14183a900(void)

uint FUN_14183a900(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *local_48;
  longlong *local_40;
  
  uVar8 = (uint)*(ushort *)(param_1 + 0xe4);
  if (*(ushort *)(param_1 + 0xe4) == 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x30);
    fVar3 = *(float *)(param_1 + 0xd0);
    uVar9 = FUN_141836ae0(*(undefined8 *)(lVar5 + 0x18),param_1 + 0x60);
    FUN_141838450(lVar5,&local_48,uVar9,0,*(undefined1 *)(param_1 + 0xac));
    plVar6 = local_40;
    if (local_48 == (longlong *)0x0) {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      uVar10 = 0;
    }
    else {
      FreeTypeUtils::ApplySizeAndScale(*local_48,*(undefined4 *)(param_1 + 0xa8),fVar3);
      lVar5 = *local_48;
      iVar4 = *(int *)(param_1 + 0x70);
      if ((char)local_48[0x20] == '\0') {
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x80) + 0x2c);
      }
      else {
        iVar7 = FUN_143c22100(*(int *)(lVar5 + 100) - *(int *)(lVar5 + 0x5c),
                              *(undefined4 *)(*(longlong *)(lVar5 + 0x80) + 0x20));
      }
      plVar6 = local_40;
      uVar10 = (uint)(((float)((int)ROUND((float)iVar7 * 0.015625 + (float)iVar7 * 0.015625 + 0.5)
                              >> 1) + (float)iVar4) * fVar3);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    uVar8 = uVar10 & 0xffff;
    *(short *)(param_1 + 0xe4) = (short)uVar10;
  }
  return uVar8;
}



// FUNCTION 14183aab0 FUN_14183aab0 body=410 status=ok
// SIG undefined FUN_14183aab0(void)

int * FUN_14183aab0(longlong *param_1,int *param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  int local_res18 [4];
  int *local_48 [2];
  
  local_res18[0] = 0;
  if ((param_5 != '\0') && (0 < param_3)) {
    iVar4 = param_3 - (int)param_1[0xb];
    iVar5 = iVar4 + -1;
    if ((iVar5 < 0) ||
       ((((int)param_1[0xd] <= iVar5 ||
         (piVar1 = (int *)(param_1[0xc] + ((longlong)iVar4 * 3 + -3) * 8), piVar1 == (int *)0x0)) ||
        (iVar5 = *piVar1, iVar5 == -1)))) {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)((longlong)iVar5 * 0x68 + 0x20 + *param_1);
    }
    local_res18[0] = (int)cVar3;
  }
  local_48[0] = local_res18;
  bVar9 = param_3 == param_4;
  if (!bVar9) {
    while (param_3 < param_4) {
      iVar5 = param_3 - (int)param_1[0xb];
      if (((iVar5 < 0) || ((int)param_1[0xd] <= iVar5)) ||
         (piVar1 = (int *)(param_1[0xc] + (longlong)iVar5 * 0x18), piVar1 == (int *)0x0))
      goto LAB_14183ac1e;
      iVar5 = *piVar1;
      uVar6 = (ulonglong)iVar5;
      if (iVar5 == -1) goto LAB_14183ac1e;
      iVar4 = iVar5;
      if (0 < piVar1[4]) {
        iVar4 = *(int *)(*(longlong *)(piVar1 + 2) + -4 + (longlong)piVar1[4] * 4);
      }
      if (iVar5 <= iVar4) {
        lVar8 = uVar6 * 0x68;
        uVar7 = uVar6;
        do {
          lVar2 = *param_1;
          _param_5 = (int)uVar6;
          cVar3 = FUN_141804a90(local_48,lVar2 + lVar8,&param_5);
          if (cVar3 == '\0') goto LAB_14183ac1e;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          param_3 = param_3 + (uint)*(byte *)(lVar2 + lVar8 + 0x21);
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x68;
        } while ((longlong)uVar7 <= (longlong)iVar4);
      }
      bVar9 = param_3 == param_4;
    }
    if (!bVar9) {
LAB_14183ac1e:
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  *param_2 = local_res18[0];
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 14183ac50 FUN_14183ac50 body=14 status=ok
// SIG undefined FUN_14183ac50(void)

undefined8 * FUN_14183ac50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x3c0);
  *param_2 = *(undefined8 *)(param_1 + 0x3b8);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14183ac60 FUN_14183ac60 body=34 status=ok
// SIG undefined FUN_14183ac60(void)

undefined8 * FUN_14183ac60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x498);
  lVar1 = *(longlong *)(param_1 + 0x4a0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14183ac90 FUN_14183ac90 body=130 status=ok
// SIG undefined FUN_14183ac90(void)

undefined * FUN_14183ac90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469eb368) {
    _Init_thread_header(&DAT_1469eb368);
    if (DAT_1469eb368 == -1) {
      FSlateNoResource::FSlateNoResource(&DAT_1469eb2e0,&DAT_1468b5d88);
      atexit((_func_5014 *)&LAB_143e82ec0);
      _Init_thread_footer(&DAT_1469eb368);
      return &DAT_1469eb2e0;
    }
  }
  return &DAT_1469eb2e0;
}



// FUNCTION 14183ad20 GetNonMaximizedRectInScreen body=267 status=ok
// SIG undefined GetNonMaximizedRectInScreen(void)

float * SWindow::GetNonMaximizedRectInScreen(longlong param_1,float *param_2)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_18 [4];
  
  plVar1 = *(longlong **)(param_1 + 0x498);
  local_res8[0] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_18[0] = 0;
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,local_res8,local_res18,local_res20,local_18);
    if (cVar2 != '\0') {
      *param_2 = (float)local_res8[0];
      param_2[2] = (float)(local_res8[0] + local_res20[0]);
      param_2[1] = (float)local_res18[0];
      param_2[3] = (float)(local_18[0] + local_res18[0]);
      return param_2;
    }
  }
  if ((*(byte *)(param_1 + 0x351) & 2) == 0) {
    fVar6 = *(float *)(param_1 + 0x368);
    fVar3 = *(float *)(param_1 + 0x36c);
    fVar5 = fVar6 + *(float *)(param_1 + 0x378);
    fVar4 = fVar3 + *(float *)(param_1 + 0x37c);
  }
  else {
    fVar4 = *(float *)(param_1 + 0x37c);
    fVar3 = 0.0;
    fVar5 = *(float *)(param_1 + 0x378);
    fVar6 = 0.0;
  }
  param_2[2] = fVar5;
  param_2[3] = fVar4;
  *param_2 = fVar6;
  param_2[1] = fVar3;
  return param_2;
}


