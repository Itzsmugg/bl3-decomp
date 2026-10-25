// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141f37190 Optimize<FMovieSceneByteChannel> body=655 status=ok
// SIG undefined Optimize<FMovieSceneByteChannel>(void)

void MovieScene::Optimize<FMovieSceneByteChannel>(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *_Src;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar16 = (ulonglong)(int)uVar10;
  plVar1 = (longlong *)(param_1 + 8);
  local_50 = param_1 + 0x38;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (1 < (int)uVar10) {
    uVar13 = 0;
    if (*(char *)(param_2 + 8) == '\x02') {
      uVar13 = 0;
    }
    else if (uVar10 != 0) {
      uVar9 = uVar16;
      do {
        uVar12 = uVar9 >> 1;
        if (*(int *)(*plVar1 + (uVar12 + uVar13) * 4) < *(int *)(param_2 + 0xc)) {
          uVar13 = (ulonglong)((uint)uVar9 & 1) + uVar12 + uVar13;
        }
        uVar9 = uVar12;
      } while (uVar12 != 0);
    }
    uVar9 = 0;
    if (*(char *)(param_2 + 0x10) == '\x02') {
      uVar9 = (ulonglong)uVar10;
    }
    else if (uVar16 != 0) {
      do {
        uVar12 = uVar16 >> 1;
        if (*(int *)(*plVar1 + (uVar12 + uVar9) * 4) <= *(int *)(param_2 + 0x14)) {
          uVar9 = (ulonglong)((uint)uVar16 & 1) + uVar12 + uVar9;
        }
        uVar16 = uVar12;
      } while (uVar12 != 0);
    }
    local_58 = plVar1;
    local_48 = plVar2;
    iVar5 = (int)uVar13;
    for (lVar14 = (longlong)(int)uVar13; lVar14 < (int)uVar9; lVar14 = lVar14 + 1) {
      iVar17 = iVar5 + 1;
      iVar8 = *(int *)(param_1 + 0x10);
      iVar15 = (int)uVar13;
      if (iVar8 <= iVar15) {
        return;
      }
      lVar6 = *plVar1;
      cVar3 = *(char *)(lVar14 + *plVar2);
      iVar4 = *(int *)(lVar6 + lVar14 * 4);
      iVar7 = (iVar8 - iVar15) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar6 + (longlong)iVar15 * 4),(void *)(lVar6 + (longlong)iVar17 * 4),
                   (longlong)iVar7 << 2);
        iVar8 = *(int *)(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x10) = iVar8 + -1;
      iVar8 = *(int *)(param_1 + 0x28);
      iVar7 = (iVar8 - iVar15) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar15 + *plVar2),(void *)((longlong)iVar17 + *plVar2),
                   (longlong)iVar7);
        iVar8 = *(int *)(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x28) = iVar8 + -1;
      if (param_1 + 0x38 != 0) {
        FKeyHandleLookupTable::DeallocateHandle(param_1 + 0x38,uVar13 & 0xffffffff);
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (*(char *)(param_1 + 0x19) != '\0') {
          cVar11 = *(char *)(param_1 + 0x18);
          goto LAB_141f3737d;
        }
LAB_141f37390:
        iVar8 = FMovieSceneChannelData::AddKeyInternal(&local_58,iVar4);
        iVar5 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar5 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar5 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar5);
        }
        _Src = (void *)(*plVar2 + (longlong)iVar8);
        ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 1),_Src,(longlong)(iVar5 - iVar8))
        ;
        *(char *)((longlong)iVar8 + *plVar2) = cVar3;
      }
      else {
        uVar16 = (longlong)*(int *)(param_1 + 0x10);
        lVar6 = 0;
        while (uVar16 != 0) {
          uVar13 = uVar16 >> 1;
          uVar10 = (uint)uVar16;
          uVar16 = uVar13;
          if (*(int *)(*plVar1 + (uVar13 + lVar6) * 4) <= iVar4) {
            lVar6 = (ulonglong)(uVar10 & 1) + uVar13 + lVar6;
          }
        }
        iVar8 = (int)lVar6 + -1;
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        cVar11 = *(char *)((longlong)iVar8 + *plVar2);
LAB_141f3737d:
        if (cVar11 != cVar3) goto LAB_141f37390;
        iVar15 = iVar15 + -1;
        lVar14 = lVar14 + -1;
        iVar17 = iVar5;
      }
      uVar13 = (ulonglong)(iVar15 + 1);
      iVar5 = iVar17;
    }
  }
  return;
}



// FUNCTION 141f37420 Optimize<FMovieSceneIntegerChannel> body=661 status=ok
// SIG undefined Optimize<FMovieSceneIntegerChannel>(void)

void MovieScene::Optimize<FMovieSceneIntegerChannel>(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar15 = (ulonglong)(int)uVar10;
  plVar1 = (longlong *)(param_1 + 8);
  local_50 = param_1 + 0x30;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (1 < (int)uVar10) {
    uVar12 = 0;
    if (*(char *)(param_2 + 8) == '\x02') {
      uVar12 = 0;
    }
    else if (uVar10 != 0) {
      uVar9 = uVar15;
      do {
        uVar11 = uVar9 >> 1;
        if (*(int *)(*plVar1 + (uVar11 + uVar12) * 4) < *(int *)(param_2 + 0xc)) {
          uVar12 = (ulonglong)((uint)uVar9 & 1) + uVar11 + uVar12;
        }
        uVar9 = uVar11;
      } while (uVar11 != 0);
    }
    uVar9 = 0;
    if (*(char *)(param_2 + 0x10) == '\x02') {
      uVar9 = (ulonglong)uVar10;
    }
    else if (uVar15 != 0) {
      do {
        uVar11 = uVar15 >> 1;
        if (*(int *)(*plVar1 + (uVar11 + uVar9) * 4) <= *(int *)(param_2 + 0x14)) {
          uVar9 = (ulonglong)((uint)uVar15 & 1) + uVar11 + uVar9;
        }
        uVar15 = uVar11;
      } while (uVar11 != 0);
    }
    local_58 = plVar1;
    local_48 = plVar2;
    iVar5 = (int)uVar12;
    for (lVar13 = (longlong)(int)uVar12; lVar13 < (int)uVar9; lVar13 = lVar13 + 1) {
      iVar16 = iVar5 + 1;
      iVar8 = *(int *)(param_1 + 0x10);
      iVar14 = (int)uVar12;
      if (iVar8 <= iVar14) {
        return;
      }
      lVar6 = *plVar1;
      iVar3 = *(int *)(*plVar2 + lVar13 * 4);
      iVar4 = *(int *)(lVar6 + lVar13 * 4);
      iVar7 = (iVar8 - iVar14) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar6 + (longlong)iVar14 * 4),(void *)(lVar6 + (longlong)iVar16 * 4),
                   (longlong)iVar7 << 2);
        iVar8 = *(int *)(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x10) = iVar8 + -1;
      iVar8 = *(int *)(param_1 + 0x28);
      iVar7 = (iVar8 - iVar14) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar2 + (longlong)iVar14 * 4),(void *)(*plVar2 + (longlong)iVar16 * 4)
                   ,(longlong)iVar7 << 2);
        iVar8 = *(int *)(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x28) = iVar8 + -1;
      if (param_1 + 0x30 != 0) {
        FKeyHandleLookupTable::DeallocateHandle(param_1 + 0x30,uVar12 & 0xffffffff);
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        if (*(char *)(param_1 + 0x1c) != '\0') {
          iVar8 = *(int *)(param_1 + 0x18);
          goto LAB_141f3760f;
        }
LAB_141f37622:
        iVar8 = FMovieSceneChannelData::AddKeyInternal(&local_58,iVar4);
        iVar5 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar5 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar5 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar5);
        }
        _Src = (void *)(*plVar2 + (longlong)iVar8 * 4);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar5 - iVar8) << 2);
        *(int *)(*plVar2 + (longlong)iVar8 * 4) = iVar3;
      }
      else {
        uVar15 = (longlong)*(int *)(param_1 + 0x10);
        lVar6 = 0;
        while (uVar15 != 0) {
          uVar12 = uVar15 >> 1;
          uVar10 = (uint)uVar15;
          uVar15 = uVar12;
          if (*(int *)(*plVar1 + (uVar12 + lVar6) * 4) <= iVar4) {
            lVar6 = (ulonglong)(uVar10 & 1) + uVar12 + lVar6;
          }
        }
        iVar8 = (int)lVar6 + -1;
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        iVar8 = *(int *)(*plVar2 + (longlong)iVar8 * 4);
LAB_141f3760f:
        if (iVar8 != iVar3) goto LAB_141f37622;
        iVar14 = iVar14 + -1;
        lVar13 = lVar13 + -1;
        iVar16 = iVar5;
      }
      uVar12 = (ulonglong)(iVar14 + 1);
      iVar5 = iVar16;
    }
  }
  return;
}



// FUNCTION 141f376c0 FUN_141f376c0 body=393 status=ok
// SIG undefined FUN_141f376c0(void)

int FUN_141f376c0(longlong *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  piVar3 = (int *)*param_1;
  uVar4 = 0;
  uVar12 = uVar4;
  if ((((param_2[5] == piVar3[5] && param_2[4] == piVar3[4]) && param_2[3] == piVar3[3]) &&
       param_2[2] == piVar3[2]) && (*param_2 == *piVar3)) {
    bVar5 = 0;
    uVar8 = uVar4;
  }
  else {
    bVar5 = 1;
    uVar8 = uVar4;
  }
  do {
    iVar7 = (int)uVar8;
    uVar4 = uVar4 + 1;
    uVar8 = (ulonglong)(iVar7 + 1);
    if ((longlong)uVar4 < lVar10) {
      piVar9 = (int *)(*param_1 + uVar4 * 0x24);
      piVar3 = piVar9 + 4;
      do {
        if ((((piVar3[-2] == param_2[2] && piVar3[-1] == param_2[3]) && piVar3[1] == param_2[5]) &&
             param_2[4] == *piVar3) && (*param_2 == *piVar9)) {
          bVar2 = 0;
        }
        else {
          bVar2 = 1;
        }
        if (bVar5 != bVar2) break;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar4 = uVar4 + 1;
        piVar9 = piVar9 + 9;
        piVar3 = piVar3 + 9;
      } while ((longlong)uVar4 < lVar10);
    }
    iVar6 = (int)uVar8 - iVar7;
    if (bVar5 != 0) {
      iVar11 = (int)uVar12;
      if (iVar11 != iVar7) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar11 * 0x24),
                   (void *)(*param_1 + (longlong)iVar7 * 0x24),(longlong)iVar6 * 0x24);
      }
      uVar12 = (ulonglong)(uint)(iVar11 + iVar6);
    }
    bVar5 = bVar5 ^ 1;
    if (lVar10 <= (longlong)uVar4) {
      *(int *)(param_1 + 1) = (int)uVar12;
      return iVar1 - (int)uVar12;
    }
  } while( true );
}



// FUNCTION 141f37850 Resolve<int> body=572 status=ok
// SIG undefined Resolve<int>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int MovieScene::TMaskedBlendable<double,1>::Resolve<int>(double *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  double *pdVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  bVar2 = false;
  iVar4 = 0;
  lVar10 = 1;
  if ((*(uint *)(param_1 + 1) & 1) == 0) {
    if (((ulonglong)param_1[4] & 1) != 0) goto LAB_141f378b0;
  }
  else if (*(float *)(param_1 + 2) == 0.0) {
LAB_141f378b0:
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined4 *)(param_1 + 6) = 0;
      iVar11 = -1;
      *(undefined1 *)(param_1 + 7) = 1;
      local_58 = 0xffffffff;
      if (param_2[2] != 0) {
        FWeakObjectPtr::operator=(&local_50);
        local_58 = local_50;
        uVar3 = local_58;
        local_58._4_4_ = (int)((ulonglong)local_50 >> 0x20);
        iVar11 = (int)local_50;
        iVar4 = local_58._4_4_;
        local_58 = uVar3;
      }
      uVar3 = local_58;
      plVar1 = (longlong *)*param_2;
      piVar8 = (int *)plVar1[3];
      piVar7 = piVar8 + (longlong)(int)plVar1[4] * 3;
      for (; piVar8 != piVar7; piVar8 = piVar8 + 3) {
        if ((*piVar8 == iVar11) && (piVar8[1] == iVar4)) {
          iVar4 = piVar8[2];
          goto LAB_141f379ab;
        }
      }
      iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2[2],param_2[3]);
      if (param_2[3] != 0) {
        lVar9 = *param_2;
        iVar11 = *(int *)(lVar9 + 0x20);
        *(int *)(lVar9 + 0x20) = iVar11 + 1;
        if (*(int *)(lVar9 + 0x24) < iVar11 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar9 + 0x18,iVar11);
        }
        lVar9 = *(longlong *)(lVar9 + 0x18);
        *(undefined8 *)(lVar9 + (longlong)iVar11 * 0xc) = uVar3;
        *(int *)(lVar9 + 8 + (longlong)iVar11 * 0xc) = iVar4;
      }
LAB_141f379ab:
      local_58 = CONCAT44(local_58._4_4_,iVar4);
      piVar7 = (int *)&local_58;
      lVar9 = 1;
      uStack_40 = 1;
      pdVar6 = &local_48;
      do {
        iVar4 = *piVar7;
        piVar7 = piVar7 + 1;
        *pdVar6 = (double)iVar4;
        lVar9 = lVar9 + -1;
        pdVar6 = pdVar6 + 1;
      } while (lVar9 != 0);
      param_1[5] = local_48;
      param_1[6] = (double)CONCAT44(uStack_3c,uStack_40);
    }
    bVar2 = true;
    dVar12 = param_1[5];
    goto LAB_141f37a08;
  }
  dVar12 = local_48;
  if ((*(uint *)(param_1 + 1) & 1) != 0) {
    bVar2 = true;
    dVar12 = *param_1 / (double)*(float *)(param_1 + 2);
  }
LAB_141f37a08:
  dVar13 = dVar12;
  if (((ulonglong)param_1[4] & 1) != 0) {
    dVar13 = param_1[3];
    if (bVar2) {
      dVar13 = dVar12 + dVar13;
    }
    bVar2 = true;
  }
  if (!bVar2) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,param_2[2],param_2[3]);
    local_58 = CONCAT44(local_58._4_4_,uVar5);
    piVar7 = (int *)&local_58;
    pdVar6 = &local_48;
    do {
      iVar4 = *piVar7;
      piVar7 = piVar7 + 1;
      *pdVar6 = (double)iVar4;
      lVar10 = lVar10 + -1;
      pdVar6 = pdVar6 + 1;
      dVar13 = local_48;
    } while (lVar10 != 0);
  }
  return (int)dVar13;
}



// FUNCTION 141f37a90 SerializeInlineValue<FMovieSceneEvalTemplate,48> body=375 status=ok
// SIG undefined SerializeInlineValue<FMovieSceneEvalTemplate,48>(void)

undefined8 SerializeInlineValue<FMovieSceneEvalTemplate,48>(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 local_res10 [8];
  undefined2 *local_18;
  undefined8 local_10;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464d3e38);
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      local_18 = (undefined2 *)0x0;
      local_10 = 0;
      FUN_14158ce90(param_2,&local_18);
    }
    else {
      if ((*(byte *)(param_1 + 6) & 2) == 0) {
        param_1 = (longlong *)*param_1;
      }
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      UObjectBaseUtility::GetPathName(uVar1,&local_18,0);
      FUN_14158ce90(param_2,&local_18);
      FUN_141725e50(uVar1,param_2,param_1,0);
    }
  }
  else {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90(param_2,&local_18);
    if (1 < (int)local_10) {
      puVar4 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar4 = local_18;
      }
      uVar1 = FUN_14171c950();
      lVar2 = FUN_141799410(uVar1,0,puVar4,0);
      if (lVar2 == 0) {
        lVar2 = FMovieSceneEmptyStruct::StaticStruct();
        puVar3 = local_res10;
      }
      else {
        puVar3 = (undefined1 *)
                 TInlineValue<FMovieSceneEvalTemplate,48,8>::Reserve
                           (param_1,*(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 8),
                            *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0xc));
        (**(code **)(**(longlong **)(lVar2 + 0x90) + 0x18))(*(longlong **)(lVar2 + 0x90),puVar3);
      }
      FUN_141725e50(lVar2,param_2,puVar3,0);
    }
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 141f37c10 SerializeInlineValue<FMovieSceneSequenceInstanceData,16> body=375 status=ok
// SIG undefined SerializeInlineValue<FMovieSceneSequenceInstanceData,16>(void)

undefined8
SerializeInlineValue<FMovieSceneSequenceInstanceData,16>(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 local_res10 [8];
  undefined2 *local_18;
  undefined8 local_10;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464d3e38);
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      local_18 = (undefined2 *)0x0;
      local_10 = 0;
      FUN_14158ce90(param_2,&local_18);
    }
    else {
      if ((*(byte *)(param_1 + 2) & 2) == 0) {
        param_1 = (longlong *)*param_1;
      }
      uVar1 = (**(code **)(*param_1 + 8))(param_1);
      UObjectBaseUtility::GetPathName(uVar1,&local_18,0);
      FUN_14158ce90(param_2,&local_18);
      FUN_141725e50(uVar1,param_2,param_1,0);
    }
  }
  else {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90(param_2,&local_18);
    if (1 < (int)local_10) {
      puVar4 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar4 = local_18;
      }
      uVar1 = FUN_14171c950();
      lVar2 = FUN_141799410(uVar1,0,puVar4,0);
      if (lVar2 == 0) {
        lVar2 = FMovieSceneEmptyStruct::StaticStruct();
        puVar3 = local_res10;
      }
      else {
        puVar3 = (undefined1 *)
                 TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
                           (param_1,*(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 8),
                            *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0xc));
        (**(code **)(**(longlong **)(lVar2 + 0x90) + 0x18))(*(longlong **)(lVar2 + 0x90),puVar3);
      }
      FUN_141725e50(lVar2,param_2,puVar3,0);
    }
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 141f37d90 FUN_141f37d90 body=562 status=ok
// SIG undefined FUN_141f37d90(void)

void FUN_141f37d90(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong **local_58;
  undefined1 local_50 [32];
  
  plVar4 = (longlong *)operator_new(0x20);
  plVar8 = (longlong *)0x0;
  plVar9 = plVar8;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144f1bc30;
    plVar4[1] = 0;
    plVar4[2] = 0;
    if (DAT_146aca2c0 == 0) {
      DAT_146aca2c0 = FMovieSceneAnimTypeID::GenerateHash(&DAT_146aca2c0,0);
    }
    plVar4[3] = DAT_146aca2c0;
    plVar9 = plVar4;
  }
  local_60 = param_2 + 0x24;
  local_58 = &local_res10;
  local_res10 = plVar9;
  FUN_14058dc00(*(undefined8 *)(param_2 + 8),local_res8,&local_60,0);
  if (local_res10 != (longlong *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  local_res18 = param_1[4];
  local_res20 = param_1[3];
  plVar5 = (longlong *)FString::FString(local_50,param_1 + 1);
  uVar3 = *param_1;
  lVar6 = operator_new(0x78);
  plVar4 = plVar8;
  if (lVar6 != 0) {
    plVar4 = (longlong *)FUN_141f39ea0(lVar6,uVar3,plVar5,&local_res20,&local_res18);
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_144f1c8f0;
    plVar7[2] = (longlong)plVar4;
    plVar8 = plVar7;
  }
  local_70 = plVar4;
  local_68 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_70,plVar4,plVar4);
  if ((longlong **)(plVar9 + 1) != &local_70) {
    plVar9[1] = (longlong)plVar4;
    local_70 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar9 + 2,&local_68);
    plVar8 = local_68;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  plVar8 = (longlong *)
           TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID(&DAT_146ac9b00,local_78,plVar5);
  plVar9[3] = *plVar8;
  if (*plVar5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f37fd0 Swap<FMovieSceneEvaluationMetaData> body=158 status=ok
// SIG undefined Swap<FMovieSceneEvaluationMetaData>(void)

void Swap<FMovieSceneEvaluationMetaData>(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    uVar6 = param_1[4];
    uVar7 = param_1[5];
    uVar8 = param_1[6];
    uVar9 = param_1[7];
    uVar10 = param_1[8];
    uVar11 = param_1[9];
    uVar12 = param_1[10];
    uVar13 = param_1[0xb];
    uVar14 = param_1[0xc];
    uVar15 = param_1[0xd];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
    uVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    uVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    param_2[7] = uVar9;
    param_2[8] = uVar10;
    param_2[9] = uVar11;
    param_2[10] = uVar12;
    param_2[0xb] = uVar13;
    param_2[0xc] = uVar14;
    param_2[0xd] = uVar15;
  }
  return;
}



// FUNCTION 141f38070 TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> body=274 status=ok
// SIG undefined TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>(void)

longlong *
TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>
          (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = param_2;
  iVar4 = (int)((ulonglong)param_3 >> 0x20);
  if ((int)param_3 == -1) {
    lVar1 = 0;
    if (iVar4 == 0) {
      lVar1 = param_2;
    }
  }
  else {
    lVar1 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) +
            (longlong)iVar4) * 0x20 + *(longlong *)(param_2 + 0x30);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  while( true ) {
    if (lVar1 == 0) {
      return param_1;
    }
    if (*(int *)(lVar1 + 0x1c) == -1) {
      local_18 = 0;
      puVar3 = &local_18;
      local_10 = 0;
    }
    else {
      uStack_20 = *(undefined4 *)
                   (*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(lVar1 + 0x1c) * 0xc + 4);
      puVar3 = &local_28;
    }
    if (0 < *(int *)(puVar3 + 1)) break;
    if ((*(int *)(lVar1 + 0x10) != -1) || (lVar2 = 0, *(int *)(lVar1 + 0x14) == 0)) {
      iVar4 = (int)*(undefined8 *)(lVar1 + 0x10);
      lVar2 = param_2;
      if (iVar4 != -1) {
        lVar2 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar4 * 0xc) +
                (longlong)(int)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20)) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    lVar1 = lVar2;
  }
  return param_1;
}



// FUNCTION 141f38190 TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID> body=269 status=ok
// SIG undefined TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>(void)

longlong *
TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>::
TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>
          (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = param_2;
  iVar4 = (int)((ulonglong)param_3 >> 0x20);
  if ((int)param_3 == -1) {
    lVar1 = 0;
    if (iVar4 == 0) {
      lVar1 = param_2;
    }
  }
  else {
    lVar1 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) +
            (longlong)iVar4) * 0x20 + *(longlong *)(param_2 + 0x30);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  while( true ) {
    if (lVar1 == 0) {
      return param_1;
    }
    if (*(int *)(lVar1 + 0x1c) == -1) {
      local_18 = 0;
      puVar3 = &local_18;
      local_10 = 0;
    }
    else {
      uStack_20 = *(undefined4 *)
                   (*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(lVar1 + 0x1c) * 0xc + 4);
      puVar3 = &local_28;
    }
    if (0 < *(int *)(puVar3 + 1)) break;
    if ((*(int *)(lVar1 + 0x10) != -1) || (lVar2 = 0, *(int *)(lVar1 + 0x14) == 0)) {
      iVar4 = (int)*(undefined8 *)(lVar1 + 0x10);
      lVar2 = param_2;
      if (iVar4 != -1) {
        lVar2 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar4 * 0xc) +
                (longlong)(int)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20)) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    lVar1 = lVar2;
  }
  return param_1;
}



// FUNCTION 141f382a0 TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData> body=270 status=ok
// SIG undefined TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData>(void)

longlong *
TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData>::
TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData>
          (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = param_2;
  iVar4 = (int)((ulonglong)param_3 >> 0x20);
  if ((int)param_3 == -1) {
    lVar1 = 0;
    if (iVar4 == 0) {
      lVar1 = param_2;
    }
  }
  else {
    lVar1 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) +
            (longlong)iVar4) * 0x20 + *(longlong *)(param_2 + 0x30);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  while( true ) {
    if (lVar1 == 0) {
      return param_1;
    }
    if (*(int *)(lVar1 + 0x1c) == -1) {
      local_18 = 0;
      puVar3 = &local_18;
      local_10 = 0;
    }
    else {
      uStack_20 = *(undefined4 *)
                   (*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(lVar1 + 0x1c) * 0xc + 4);
      puVar3 = &local_28;
    }
    if (0 < *(int *)(puVar3 + 1)) break;
    if ((*(int *)(lVar1 + 0x10) != -1) || (lVar2 = 0, *(int *)(lVar1 + 0x14) == 0)) {
      iVar4 = (int)*(undefined8 *)(lVar1 + 0x10);
      lVar2 = param_2;
      if (iVar4 != -1) {
        lVar2 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar4 * 0xc) +
                (longlong)(int)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20)) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    lVar1 = lVar2;
  }
  return param_1;
}



// FUNCTION 141f383b0 TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData> body=274 status=ok
// SIG undefined TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>(void)

longlong *
TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>
          (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = param_2;
  iVar4 = (int)((ulonglong)param_3 >> 0x20);
  if ((int)param_3 == -1) {
    lVar1 = 0;
    if (iVar4 == 0) {
      lVar1 = param_2;
    }
  }
  else {
    lVar1 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) +
            (longlong)iVar4) * 0x20 + *(longlong *)(param_2 + 0x30);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  while( true ) {
    if (lVar1 == 0) {
      return param_1;
    }
    if (*(int *)(lVar1 + 0x1c) == -1) {
      local_18 = 0;
      puVar3 = &local_18;
      local_10 = 0;
    }
    else {
      uStack_20 = *(undefined4 *)
                   (*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(lVar1 + 0x1c) * 0xc + 4);
      puVar3 = &local_28;
    }
    if (0 < *(int *)(puVar3 + 1)) break;
    if ((*(int *)(lVar1 + 0x10) != -1) || (lVar2 = 0, *(int *)(lVar1 + 0x14) == 0)) {
      iVar4 = (int)*(undefined8 *)(lVar1 + 0x10);
      lVar2 = param_2;
      if (iVar4 != -1) {
        lVar2 = ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar4 * 0xc) +
                (longlong)(int)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20)) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    lVar1 = lVar2;
  }
  return param_1;
}



// FUNCTION 141f384d0 FUN_141f384d0 body=89 status=ok
// SIG undefined FUN_141f384d0(void)

undefined8 *
FUN_141f384d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 141f38530 FMovieSceneContext body=182 status=ok
// SIG undefined FMovieSceneContext(void)

undefined1 * FMovieSceneContext::FMovieSceneContext(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[0xc] = param_2[0xc];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x40] = param_1[0x40] ^ (param_1[0x40] ^ param_2[0x40]) & 1;
  bVar1 = (param_1[0x40] ^ param_2[0x40]) & 2 ^ param_1[0x40];
  param_1[0x40] = bVar1;
  bVar1 = (bVar1 ^ param_2[0x40]) & 4 ^ bVar1;
  param_1[0x40] = bVar1;
  bVar1 = (bVar1 ^ param_2[0x40]) & 8 ^ bVar1;
  param_1[0x40] = bVar1;
  bVar1 = (bVar1 ^ param_2[0x40]) & 0x10 ^ bVar1;
  param_1[0x40] = bVar1;
  param_1[0x40] = (bVar1 ^ param_2[0x40]) & 0x20 ^ bVar1;
  return param_1;
}



// FUNCTION 141f385f0 FMovieSceneEvaluationMetaData body=229 status=ok
// SIG undefined FMovieSceneEvaluationMetaData(void)

undefined8 *
FMovieSceneEvaluationMetaData::FMovieSceneEvaluationMetaData
          (undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 4,param_2 + 4);
  if (param_2[0xc] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0xb,param_2 + 0xb,4);
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_2 + 0xd) = 0;
  return param_1;
}



// FUNCTION 141f386e0 FMovieSceneEvaluationRange body=278 status=ok
// SIG undefined FMovieSceneEvaluationRange(void)

undefined1 *
FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fStackX_c;
  float fStackX_14;
  
  uVar4 = 0;
  iVar3 = (int)param_3;
  iVar2 = (int)param_2;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  fStackX_14 = (float)((ulonglong)param_3 >> 0x20);
  if ((iVar2 == iVar3) && (fStackX_c == fStackX_14)) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 4) = param_2;
    param_1[0xc] = 1;
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  else if ((iVar2 < iVar3) || ((iVar2 == iVar3 && (fStackX_c < fStackX_14)))) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 4) = param_2;
    param_1[0xc] = param_5;
    *(undefined8 *)(param_1 + 0x10) = param_3;
  }
  else {
    *param_1 = param_5;
    *(undefined8 *)(param_1 + 4) = param_3;
    param_1[0xc] = 1;
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  fStackX_c = fStackX_c - fStackX_14;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  iVar1 = (int)ROUND((fStackX_c + fStackX_c) - 0.5) >> 1;
  iVar2 = (iVar2 - iVar3) + iVar1;
  fStackX_c = fStackX_c - (float)iVar1;
  if (0.0 <= fStackX_c) {
    if (0.99999994 <= fStackX_c) {
      fStackX_c = 0.99999994;
    }
  }
  else {
    fStackX_c = 0.0;
  }
  if ((iVar2 < 1) && ((iVar2 != 0 || (fStackX_c < 0.0)))) {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 141f38800 FMovieSceneEvaluationRange body=35 status=ok
// SIG undefined FMovieSceneEvaluationRange(void)

undefined1 *
FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[0xc] = 1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 141f38830 FMovieSceneEvaluationTemplate body=686 status=ok
// SIG undefined FMovieSceneEvaluationTemplate(void)

undefined8 * FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 local_28 [2];
  longlong local_20;
  undefined8 local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  local_28[0] = DAT_1464d3e28;
  local_38 = &DAT_146ac9ac0;
  local_30 = local_28;
  local_20 = 0;
  local_18 = 0;
  TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneSequenceHierarchyNode_&&>_>
            (param_1 + 0x24,local_res8,&local_38,0);
  if (local_20 != 0) {
    FMemory::Free();
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 2;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x47) = 2;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x48] = 0xffffffffffffffff;
  param_1[0x49] = 0xffffffffffffffff;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 2;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined1 *)(param_1 + 0x53) = 2;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x54] = 0xffffffffffffffff;
  param_1[0x55] = 0xffffffffffffffff;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  return param_1;
}



// FUNCTION 141f38ae0 FMovieSceneEvaluationTrack body=586 status=ok
// SIG undefined FMovieSceneEvaluationTrack(void)

undefined8 *
FMovieSceneEvaluationTrack::FMovieSceneEvaluationTrack(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_2[0x15] = 0;
  bVar1 = *(byte *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x1c) = bVar1 & 0xfe | 2;
  if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
    *(byte *)(param_1 + 0x1c) = bVar1 & 0xfe | 3;
    *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) & 0xfe;
    bVar1 = *(byte *)(param_2 + 0x1c);
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd;
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | bVar1 & 2;
    uVar2 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar2;
    uVar2 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar2;
    uVar2 = param_2[0x1b];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar2;
  }
  param_1[0x1d] = param_2[0x1d];
  *(uint *)(param_1 + 0x1e) =
       *(uint *)(param_1 + 0x1e) ^ (*(uint *)(param_1 + 0x1e) ^ *(uint *)(param_2 + 0x1e)) & 1;
  *(uint *)(param_1 + 0x1e) =
       (*(uint *)(param_1 + 0x1e) ^ *(uint *)(param_2 + 0x1e)) & 2 ^ *(uint *)(param_1 + 0x1e);
  return param_1;
}



// FUNCTION 141f38de0 FMovieSceneEvaluationTreeRangeIterator body=269 status=ok
// SIG undefined FMovieSceneEvaluationTreeRangeIterator(void)

undefined1 *
FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
          (undefined1 *param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  *param_1 = 2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(longlong *)(param_1 + 0x18) = param_2;
  lVar7 = param_2;
  while( true ) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    lVar4 = (longlong)(int)uVar1;
    if (uVar1 == 0xffffffff) {
      local_28 = 0;
      plVar5 = &local_28;
      local_20 = 0;
    }
    else {
      local_38 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar4 * 0xc) * 0x20 +
                 *(longlong *)(param_2 + 0x30);
      uStack_30 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + lVar4 * 0xc + 4);
      plVar5 = &local_38;
    }
    pcVar2 = (char *)*plVar5;
    local_18 = *(undefined4 *)plVar5;
    uStack_14 = *(undefined4 *)((longlong)plVar5 + 4);
    iStack_10 = *(int *)(plVar5 + 1);
    if (*(int *)(plVar5 + 1) == 0) break;
    if (*pcVar2 != '\x02') {
      cVar6 = *pcVar2;
      uVar3 = *(undefined4 *)(pcVar2 + 4);
      if (cVar6 == '\0') {
        cVar6 = '\x01';
      }
      else if (cVar6 == '\x01') {
        cVar6 = '\0';
      }
LAB_141f38ed4:
      *param_1 = 2;
      *(undefined4 *)(param_1 + 4) = 0;
      param_1[8] = cVar6;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      return param_1;
    }
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)uVar1;
    lVar7 = param_2;
    if (uVar1 != 0xffffffff) {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar4 * 0xc) * 0x20 +
              *(longlong *)(param_2 + 0x30);
    }
  }
  uVar3 = *(undefined4 *)(lVar7 + 0xc);
  cVar6 = *(char *)(lVar7 + 8);
  goto LAB_141f38ed4;
}



// FUNCTION 141f38ef0 FMovieSceneEvaluationTreeRangeIterator body=802 status=ok
// SIG undefined FMovieSceneEvaluationTreeRangeIterator(void)

char * FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
                 (char *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  char *pcVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  char local_res8;
  int local_res1c;
  char local_res20;
  int local_res24;
  
  *param_1 = '\x02';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\x02';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = -1;
  param_1[0x11] = -1;
  param_1[0x12] = -1;
  param_1[0x13] = -1;
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *(undefined8 *)(param_1 + 0x18) = param_2;
  cVar12 = *param_3;
  iVar2 = *(int *)(param_3 + 4);
LAB_141f38f50:
  do {
    pcVar13 = *(char **)(param_1 + 0x18);
    iVar17 = (int)*(undefined8 *)(param_1 + 0x10);
    if (iVar17 != -1) {
      pcVar13 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar13 + 0x20) + (longlong)iVar17 * 0xc)
                         + (longlong)(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)) *
                         0x20 + *(longlong *)(pcVar13 + 0x30));
    }
    *param_1 = *pcVar13;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pcVar13 + 4);
    param_1[8] = pcVar13[8];
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pcVar13 + 0xc);
    iVar17 = *(int *)(pcVar13 + 0x18);
    if (iVar17 == -1) {
      return param_1;
    }
    lVar10 = 0;
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    iVar3 = *(int *)(lVar20 + 4 + (longlong)iVar17 * 0xc);
    lVar20 = (longlong)*(int *)(lVar20 + (longlong)iVar17 * 0xc) * 0x20 +
             *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if (iVar3 != 0) {
      local_res20 = *param_3;
      local_res24 = *(int *)(param_3 + 4);
      uVar15 = (longlong)iVar3;
      do {
        uVar16 = uVar15 >> 1;
        pcVar13 = (char *)((uVar16 + lVar10) * 0x20 + lVar20);
        cVar1 = *pcVar13;
        local_res1c = *(int *)(pcVar13 + 4);
        cVar11 = cVar1;
        if (cVar1 == '\x02') {
          piVar14 = &local_res1c;
        }
        else if (local_res20 == '\x02') {
LAB_141f3904e:
          piVar14 = &local_res24;
          cVar11 = local_res20;
        }
        else if (local_res1c < local_res24) {
          piVar14 = &local_res1c;
        }
        else {
          if ((local_res24 < local_res1c) || (cVar1 != '\x01')) goto LAB_141f3904e;
          piVar14 = &local_res1c;
        }
        if (((cVar11 == cVar1) && ((cVar11 == '\x02' || (*piVar14 == local_res1c)))) &&
           ((cVar1 != local_res20 || ((cVar1 != '\x02' && (local_res1c != local_res24)))))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          lVar10 = (ulonglong)((uint)uVar15 & 1) + uVar16 + lVar10;
        }
        uVar15 = uVar16;
      } while (uVar16 != 0);
    }
    iVar18 = (int)lVar10;
    if ((-1 < iVar18) && (iVar18 < iVar3)) {
      cVar1 = *(char *)((longlong)iVar18 * 0x20 + lVar20);
      if ((cVar1 == *param_3) &&
         ((cVar1 == '\x02' ||
          (*(int *)((longlong)iVar18 * 0x20 + 4 + lVar20) == *(int *)(param_3 + 4))))) {
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(iVar18,iVar17);
        goto LAB_141f38f50;
      }
    }
    iVar19 = iVar18 + -1;
    if ((iVar18 < 1) || (iVar3 <= iVar19)) {
LAB_141f39176:
      if ((iVar18 < 0) || (iVar3 <= iVar18)) {
        local_res8 = param_1[8];
        uVar8 = *(undefined4 *)(param_1 + 0xc);
      }
      else {
        cVar12 = *(char *)((longlong)iVar18 * 0x20 + lVar20);
        uVar8 = *(undefined4 *)((longlong)iVar18 * 0x20 + 4 + lVar20);
        if (cVar12 == '\0') {
          local_res8 = '\x01';
        }
        else {
          local_res8 = '\0';
          if (cVar12 != '\x01') {
            local_res8 = cVar12;
          }
        }
      }
      if ((iVar18 < 1) || (iVar3 <= iVar19)) {
        uVar9 = *(undefined4 *)(param_1 + 4);
        cVar12 = *param_1;
      }
      else {
        cVar12 = *(char *)((longlong)iVar18 * 0x20 + -0x18 + lVar20);
        uVar9 = *(undefined4 *)((longlong)iVar18 * 0x20 + -0x14 + lVar20);
        if (cVar12 == '\0') {
          cVar12 = '\x01';
        }
        else if (cVar12 == '\x01') {
          cVar12 = '\0';
        }
      }
      *param_1 = cVar12;
      *(undefined4 *)(param_1 + 4) = uVar9;
      param_1[8] = local_res8;
      *(undefined4 *)(param_1 + 0xc) = uVar8;
      return param_1;
    }
    lVar10 = (longlong)iVar18 * 0x20;
    cVar1 = *(char *)(lVar10 + -0x20 + lVar20);
    if (((cVar1 != '\x02') && (cVar11 = *(char *)(lVar10 + -0x18 + lVar20), cVar11 != '\x02')) &&
       ((iVar4 = *(int *)(lVar10 + -0x1c + lVar20), iVar5 = *(int *)(lVar10 + -0x14 + lVar20),
        iVar5 < iVar4 || ((iVar4 == iVar5 && ((cVar1 == '\0' || (cVar11 == '\0'))))))))
    goto LAB_141f39176;
    cVar1 = *(char *)(lVar10 + -0x18 + lVar20);
    if ((cVar1 != '\x02') && (cVar12 != '\x02')) {
      iVar4 = *(int *)(lVar10 + -0x14 + lVar20);
      if ((cVar1 == '\x01') && (cVar12 == '\x01')) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      bVar6 = iVar2 < iVar4;
      if (bVar7) {
        bVar6 = iVar2 <= iVar4;
      }
      if (!bVar6) goto LAB_141f39176;
    }
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iVar19,iVar17);
  } while( true );
}



// FUNCTION 141f39220 FMovieSceneExecutionTokens body=348 status=ok
// SIG undefined FMovieSceneExecutionTokens(void)

undefined8 * FMovieSceneExecutionTokens::FMovieSceneExecutionTokens(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = DAT_1464d3e28;
  param_1[0x25] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x80000000;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x10000ea60;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x80000000;
  *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) & 0xc0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 141f39380 FMovieScenePreAnimatedState body=167 status=ok
// SIG undefined FMovieScenePreAnimatedState(void)

undefined8 * FMovieScenePreAnimatedState::FMovieScenePreAnimatedState(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3b) = DAT_1464d3e28;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1e5) = 0;
  return param_1;
}



// FUNCTION 141f39430 FMovieScenePropertySectionTemplate body=147 status=ok
// SIG undefined FMovieScenePropertySectionTemplate(void)

undefined8 *
FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f1bc38;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = (longlong *)FString::FString(local_18,param_3);
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[5] = *plVar1;
  *plVar1 = 0;
  *(int *)(param_1 + 6) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141f394d0 FUN_141f394d0 body=92 status=ok
// SIG undefined FUN_141f394d0(void)

undefined8 * FUN_141f394d0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f1b018;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 141f39530 FUN_141f39530 body=92 status=ok
// SIG undefined FUN_141f39530(void)

undefined8 * FUN_141f39530(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f1b000;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 141f39590 FUN_141f39590 body=463 status=ok
// SIG undefined FUN_141f39590(void)

longlong FUN_141f39590(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FWeakObjectPtr::operator=(param_1,0);
  plVar5 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x10) = DAT_1464d3e28;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_FUN_144f1c880;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)&PTR_FUN_144f1b058;
    plVar5 = plVar4;
  }
  local_18 = plVar5 + 2;
  local_10 = plVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  *(longlong **)(param_1 + 0x160) = local_18;
  *(longlong **)(param_1 + 0x168) = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
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
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  FMovieSceneExecutionTokens::FMovieSceneExecutionTokens(param_1 + 0x1a0);
  return param_1;
}



// FUNCTION 141f39760 FMovieSceneSegment body=158 status=ok
// SIG undefined FMovieSceneSegment(void)

undefined1 * FMovieSceneSegment::FMovieSceneSegment(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0x14] = param_2[0x14];
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x48) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0x18,param_2 + 0x18,0x30);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_2 + 0x50) = 0;
  return param_1;
}



// FUNCTION 141f39800 FMovieSceneSequenceInstanceDataPtr body=153 status=ok
// SIG undefined FMovieSceneSequenceInstanceDataPtr(void)

longlong FMovieSceneSequenceInstanceDataPtr::FMovieSceneSequenceInstanceDataPtr
                   (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    plVar3 = param_2;
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      plVar3 = (longlong *)*param_2;
    }
    lVar1 = (**(code **)(*plVar3 + 8))();
    plVar3 = *(longlong **)(lVar1 + 0x90);
    uVar2 = TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
                      (param_1,(int)plVar3[1],*(undefined4 *)((longlong)plVar3 + 0xc));
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      param_2 = (longlong *)*param_2;
    }
    (**(code **)(*plVar3 + 0x98))(plVar3,uVar2,param_2,1);
  }
  return param_1;
}



// FUNCTION 141f398a0 FUN_141f398a0 body=368 status=ok
// SIG undefined FUN_141f398a0(void)

undefined8 * FUN_141f398a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  FString::FString(param_1 + 1,param_2 + 1);
  plVar4 = param_2 + 0xd;
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 2;
  if ((*(byte *)(param_2 + 0xf) & 1) != 0) {
    plVar3 = plVar4;
    if ((*(byte *)(param_2 + 0xf) & 2) == 0) {
      plVar3 = (longlong *)*plVar4;
    }
    lVar1 = (**(code **)(*plVar3 + 8))();
    plVar3 = *(longlong **)(lVar1 + 0x90);
    uVar2 = TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
                      (param_1 + 0xd,(int)plVar3[1],*(undefined4 *)((longlong)plVar3 + 0xc));
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
    if ((*(byte *)(param_2 + 0xf) & 2) == 0) {
      plVar4 = (longlong *)*plVar4;
    }
    (**(code **)(*plVar3 + 0x98))(plVar3,uVar2,plVar4,1);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar2 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar2;
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 141f39a10 FUN_141f39a10 body=908 status=ok
// SIG undefined FUN_141f39a10(void)

longlong FUN_141f39a10(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  char cVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  ulonglong local_res10;
  char local_res18 [8];
  char local_res20 [8];
  uint local_78 [2];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [32];
  
  local_res10 = param_2;
  uVar7 = FUN_141f53550();
  lVar12 = 0;
  uVar16 = 0;
  lVar9 = lVar12;
  if (uVar7 != param_2) {
    lVar9 = *(longlong *)(param_2 + 0x108);
  }
  FSoftObjectPath::FSoftObjectPath(param_1,lVar9);
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 60000;
  *(undefined4 *)(param_1 + 0x28) = 1;
  UMovieSceneSubSection::GetSequenceID(param_2,param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0xe8);
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfe;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 2;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar14 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x8c) = uVar14;
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  plVar8 = (longlong *)FMovieSceneSubSequenceData::GetSequence(param_1);
  lVar9 = lVar12;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x298))(plVar8);
  }
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(lVar9 + 0xb8);
  cVar15 = *(char *)(param_2 + 0x90);
  local_res18[0] = *(char *)(param_2 + 0x98);
  uVar1 = *(uint *)(param_2 + 0x94);
  uVar2 = *(uint *)(param_2 + 0x9c);
  local_res20[0] = cVar15;
  puVar10 = (undefined8 *)FUN_141f5a3a0(param_2,local_60);
  *(undefined8 *)(param_1 + 0x18) = *puVar10;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar10 + 1);
  *(undefined8 *)(param_1 + 0x98) = *puVar10;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(puVar10 + 1);
  if (cVar15 == '\x02') {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
    uVar14 = uVar16;
  }
  else {
    local_res8[1] = 0;
    if (cVar15 == '\x01') {
      local_res8[0] = uVar1;
      puVar11 = (undefined4 *)operator*(local_70,uVar1,param_1 + 0x18);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
    }
    else {
      local_res8[0] = uVar1;
      puVar11 = (undefined4 *)operator*(local_68,uVar1,param_1 + 0x18);
      local_res8[0] = local_res8[0] & 0xffffff00;
    }
    uVar14 = *puVar11;
  }
  uVar6 = 0;
  if (local_res18[0] == '\x02') {
    uVar13 = 2;
    uVar5 = uVar6;
  }
  else {
    local_78[1] = 0;
    bVar17 = local_res18[0] != '\x01';
    local_78[0] = uVar2;
    if (bVar17) {
      puVar11 = (undefined4 *)operator*(local_60,uVar2,param_1 + 0x18);
    }
    else {
      puVar11 = (undefined4 *)operator*(local_78,uVar2,param_1 + 0x18);
    }
    uVar13 = !bVar17;
    uVar5 = *puVar11;
  }
  *(undefined1 *)(param_1 + 0x30) = (undefined1)local_res8[0];
  *(undefined4 *)(param_1 + 0x34) = uVar14;
  *(undefined1 *)(param_1 + 0x38) = uVar13;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  if (0 < *(int *)(param_2 + 0xa0)) {
    if (local_res20[0] == '\0') {
      cVar15 = '\x01';
    }
    else {
      cVar15 = local_res20[0];
      if (local_res20[0] == '\x01') {
        cVar15 = '\0';
      }
    }
    local_res8[1] = 0;
    lVar9 = lVar12;
    if (cVar15 == '\x01') {
      lVar9 = 4;
    }
    local_res8[0] = (*(int *)((longlong)&DAT_144f1bca0 + lVar9) - *(int *)(param_2 + 0xa0)) + uVar1;
    puVar11 = (undefined4 *)operator*(local_res20,local_res8[0],param_1 + 0x18);
    uVar14 = *puVar11;
    if (cVar15 != '\x02') {
      local_res8[1] = 0;
      if (cVar15 == '\x01') {
        local_res8[0] = uVar1;
        puVar11 = (undefined4 *)operator*(local_res8,uVar1,param_1 + 0x18);
      }
      else {
        local_res8[0] = uVar1;
        puVar11 = (undefined4 *)operator*(local_60,uVar1,param_1 + 0x18);
        cVar15 = '\0';
      }
      uVar6 = *puVar11;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x44) = uVar14;
    *(char *)(param_1 + 0x48) = cVar15;
    *(undefined4 *)(param_1 + 0x4c) = uVar6;
    param_2 = local_res10;
  }
  iVar3 = *(int *)(param_2 + 0xa4);
  if (0 < iVar3) {
    if (local_res18[0] == '\0') {
      cVar15 = '\x01';
    }
    else {
      cVar15 = local_res18[0];
      if (local_res18[0] == '\x01') {
        cVar15 = '\0';
      }
    }
    if (cVar15 == '\0') {
      lVar12 = 4;
    }
    iVar4 = *(int *)((longlong)&DAT_144f1bc98 + lVar12);
    if (cVar15 == '\x02') {
      uVar13 = 2;
    }
    else {
      local_res10 = (ulonglong)uVar2;
      if (cVar15 != '\x01') {
        puVar11 = (undefined4 *)operator*(local_res18,local_res10,param_1 + 0x18);
      }
      else {
        puVar11 = (undefined4 *)operator*(local_res8,local_res10,param_1 + 0x18);
      }
      uVar13 = cVar15 == '\x01';
      uVar16 = *puVar11;
    }
    local_res10 = (ulonglong)(iVar4 + iVar3 + uVar2);
    puVar11 = (undefined4 *)operator*(&local_res10,local_res10,param_1 + 0x18);
    uVar14 = *puVar11;
    *(undefined1 *)(param_1 + 0x50) = uVar13;
    *(undefined4 *)(param_1 + 0x54) = uVar16;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = uVar14;
  }
  return param_1;
}



// FUNCTION 141f39da0 FMovieSceneSubSequenceData body=151 status=ok
// SIG undefined FMovieSceneSubSequenceData(void)

longlong FMovieSceneSubSequenceData::FMovieSceneSubSequenceData(longlong param_1)

{
  FSoftObjectPath::FSoftObjectPath(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 60000;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfe;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 2;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return param_1;
}



// FUNCTION 141f39e40 FSectionData body=88 status=ok
// SIG undefined FSectionData(void)

undefined8 * PropertyTemplate::FSectionData::FSectionData(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144f1bc30;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_146aca2c0 != 0) {
    param_1[3] = DAT_146aca2c0;
    return param_1;
  }
  DAT_146aca2c0 = FMovieSceneAnimTypeID::GenerateHash(&DAT_146aca2c0,0);
  param_1[3] = DAT_146aca2c0;
  return param_1;
}



// FUNCTION 141f39ea0 FUN_141f39ea0 body=638 status=ok
// SIG undefined FUN_141f39ea0(void)

undefined8 *
FUN_141f39ea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *local_48;
  uint local_40;
  int local_3c;
  longlong local_38 [2];
  
  puVar8 = (undefined2 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FString::FString(param_1 + 10,param_3);
  puVar3 = param_5;
  param_1[0xc] = 0;
  param_5 = (undefined8 *)0x0;
  param_1[0xd] = *puVar3;
  param_1[0xe] = param_2;
  if (*param_4 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aca2c8) &&
       (_Init_thread_header(&DAT_146aca2c8), DAT_146aca2c8 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464d3f00,0);
      FGenericPlatformString::Memcpy(DAT_1464d3f00,&DAT_144f18f08,8);
      atexit((_func_5014 *)&LAB_143ea2b40);
      _Init_thread_footer(&DAT_146aca2c8);
    }
    puVar3 = (undefined8 *)FName::ToString(param_1 + 0xe,local_38);
    pvVar1 = DAT_1464d3f00;
    uVar5 = (uint)DAT_1464d3f08;
    if ((int)uVar5 < 2) {
      puVar8 = (undefined2 *)*puVar3;
      *puVar3 = 0;
      uVar5 = *(uint *)(puVar3 + 1);
      puVar3[1] = 0;
    }
    else {
      iVar9 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        iVar9 = 0;
      }
      if ((uVar5 != 0) || (iVar2 = 1, iVar9 == 0)) {
        iVar2 = 0;
      }
      local_48 = (undefined2 *)0x0;
      local_40 = uVar5;
      if ((uVar5 == 0) && (iVar9 + iVar2 == 0)) {
        local_3c = 0;
        uVar7 = DAT_1464d3f08;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar9 + iVar2 + uVar5,0);
        puVar8 = local_48;
        _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)(int)uVar5 * 2);
        uVar7 = (ulonglong)local_40;
      }
      uVar6 = (uint)uVar7;
      pvVar1 = (void *)*puVar3;
      uVar5 = uVar6;
      if (iVar9 != 0) {
        local_40 = (uVar6 == 0) + uVar6 + iVar9;
        if (local_3c < (int)local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar7 & 0xffffffff);
          puVar8 = local_48;
        }
        uVar5 = local_40;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)(int)uVar6 - (ulonglong)(uVar6 != 0)),pvVar1,
                   (longlong)iVar9 * 2);
        (puVar8 + ((longlong)(int)uVar6 - (ulonglong)(uVar6 != 0)))[iVar9] = 0;
      }
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    puVar4 = &DAT_143f3eda8;
    if (uVar5 != 0) {
      puVar4 = puVar8;
    }
    puVar3 = (undefined8 *)FName::FName(&param_5,puVar4,1);
    param_1[0xc] = *puVar3;
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    return param_1;
  }
  param_1[0xc] = *param_4;
  return param_1;
}



// FUNCTION 141f3a120 FUN_141f3a120 body=281 status=ok
// SIG undefined FUN_141f3a120(void)

undefined8 * FUN_141f3a120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144f1af50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FMovieScenePreAnimatedState::FMovieScenePreAnimatedState(param_1 + 0x1f);
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x5c] = &PTR_FUN_144f1af30;
  *(undefined2 *)(param_1 + 0x69) = 0;
  return param_1;
}



// FUNCTION 141f3a240 UMovieScene body=254 status=ok
// SIG undefined UMovieScene(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UMovieScene::UMovieScene(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  *param_1 = &PTR__scalar_deleting_destructor__144f1a980;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 60000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x18) = 60000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 1;
  *(undefined2 *)(param_1 + 0x19) = 1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    local_18 = _DAT_1464b00f8;
    uStack_14 = uRam00000001464b00fc;
    uStack_10 = uRam00000001464b0100;
    uStack_c = uRam00000001464b0104;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
    if (iVar1 < 7) {
      puVar2 = (undefined8 *)FUN_141f52860(local_res8);
      param_1[0x17] = *puVar2;
    }
  }
  return param_1;
}



// FUNCTION 141f3a340 UMovieSceneBindingOverrides body=97 status=ok
// SIG undefined UMovieSceneBindingOverrides(void)

undefined8 * UMovieSceneBindingOverrides::UMovieSceneBindingOverrides(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144f1c1b0;
  param_1[5] = &PTR_LAB_144f1c428;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 141f3a3b0 UMovieSceneBuiltInEasingFunction body=48 status=ok
// SIG undefined UMovieSceneBuiltInEasingFunction(void)

undefined8 * UMovieSceneBuiltInEasingFunction::UMovieSceneBuiltInEasingFunction(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f1bca8;
  param_1[5] = &PTR_LAB_144f1bf20;
  return param_1;
}



// FUNCTION 141f3a3e0 UMovieSceneFolder body=71 status=ok
// SIG undefined UMovieSceneFolder(void)

undefined8 * UMovieSceneFolder::UMovieSceneFolder(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144f1bf38;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 141f3a430 UMovieSceneSection body=465 status=ok
// SIG undefined UMovieSceneSection(void)

undefined8 * UMovieSceneSection::UMovieSceneSection(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  *param_1 = &PTR__scalar_deleting_destructor__144f1ac10;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffffd | 1;
  *(undefined2 *)(param_1 + 0x19) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xca) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"EaseInFunction",1);
  uVar4 = *puVar1;
  uVar2 = UMovieSceneBuiltInEasingFunction::GetPrivateStaticClass();
  lVar3 = FUN_141789050(param_2,param_1,uVar4,uVar2,uVar2,1,0,0);
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 1;
  *(undefined1 *)(lVar3 + 0x30) = 9;
  param_1[0xc] = lVar3;
  uVar4 = UMovieSceneEasingFunction::GetPrivateStaticClass();
  uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
  param_1[0xd] = uVar4;
  puVar1 = (undefined8 *)FName::FName(local_res8,"EaseOutFunction",1);
  uVar4 = *puVar1;
  uVar2 = UMovieSceneBuiltInEasingFunction::GetPrivateStaticClass();
  lVar3 = FUN_141789050(param_2,param_1,uVar4,uVar2,uVar2,1,0,0);
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 1;
  *(undefined1 *)(lVar3 + 0x30) = 9;
  param_1[0xf] = lVar3;
  uVar4 = UMovieSceneEasingFunction::GetPrivateStaticClass();
  uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
  param_1[0x10] = uVar4;
  return param_1;
}



// FUNCTION 141f3a610 UMovieSceneSequence body=75 status=ok
// SIG undefined UMovieSceneSequence(void)

undefined8 * UMovieSceneSequence::UMovieSceneSequence(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  *param_1 = &PTR__scalar_deleting_destructor__144f1b088;
  FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(param_1 + 10);
  *(undefined1 *)((longlong)param_1 + 0x341) = 0;
  return param_1;
}



// FUNCTION 141f3a660 FUN_141f3a660 body=400 status=ok
// SIG undefined FUN_141f3a660(void)

undefined8 * FUN_141f3a660(undefined8 *param_1)

{
  FUN_141781840();
  FUN_141f3a120(param_1 + 5);
  *param_1 = &PTR__scalar_deleting_destructor__144f1c448;
  param_1[5] = &PTR_LAB_144f1c6f0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(uint *)((longlong)param_1 + 0x3cc) = *(uint *)((longlong)param_1 + 0x3cc) & 0xfffffffe;
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 0xfe;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x414) = 0;
  *(undefined1 *)((longlong)param_1 + 0x416) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  FUN_141f39590(param_1 + 0x89);
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined1 *)(param_1 + 0xee) = 1;
  *(undefined1 *)((longlong)param_1 + 0x784) = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 2;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  if (*(char *)((longlong)param_1 + 0x784) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x784) = 0;
  }
  return param_1;
}



// FUNCTION 141f3a7f0 FUN_141f3a7f0 body=59 status=ok
// SIG undefined FUN_141f3a7f0(void)

undefined8 * FUN_141f3a7f0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144f1a658;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  return param_1;
}



// FUNCTION 141f3a830 UMovieSceneSubSection body=187 status=ok
// SIG undefined UMovieSceneSubSection(void)

undefined8 * UMovieSceneSubSection::UMovieSceneSubSection(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UMovieSceneSection::UMovieSceneSection(param_1,uVar1);
  *param_1 = &PTR_FUN_144f1b5d0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  param_1[0x1d] = 100;
  *(undefined4 *)(param_1 + 0x1f) = DAT_1464d3e2c;
  *(undefined4 *)((longlong)param_1 + 0xfc) = DAT_1464d3e2c;
  *(undefined4 *)(param_1 + 0x20) = DAT_1464d3e2c;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 141f3a8f0 UMovieSceneSubTrack body=84 status=ok
// SIG undefined UMovieSceneSubTrack(void)

undefined8 * UMovieSceneSubTrack::UMovieSceneSubTrack(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  *param_1 = &PTR__scalar_deleting_destructor__143fcd838;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xffffffe0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f1b8c0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 141f3a950 UMovieSceneTrack body=67 status=ok
// SIG undefined UMovieSceneTrack(void)

undefined8 * UMovieSceneTrack::UMovieSceneTrack(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  *param_1 = &PTR__scalar_deleting_destructor__143fcd838;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xffffffe0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 141f3a9a0 ~FUObjectAnnotationSparse<FIsSpawnable,1> body=210 status=ok
// SIG undefined ~FUObjectAnnotationSparse<FIsSpawnable,1>(void)

void FUObjectAnnotationSparse<FIsSpawnable,1>::~FUObjectAnnotationSparse<FIsSpawnable,1>
               (undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f1a528;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 1,0);
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 141f3aa80 ~TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator> body=129 status=ok
// SIG undefined ~TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>(void)

void TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::
     ~TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar3 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x68);
    do {
      bVar1 = *(byte *)(puVar4 + 8);
      if ((bVar1 & 1) != 0) {
        puVar2 = puVar4;
        if ((bVar1 & 2) == 0) {
          puVar2 = (undefined8 *)*puVar4;
        }
        *(byte *)(puVar4 + 8) = bVar1 & 0xfe;
        (**(code **)*puVar2)(puVar2,0);
        if ((*(byte *)(puVar4 + 8) & 2) == 0) {
          FMemory::Free(*puVar4);
        }
      }
      puVar4 = puVar4 + 0x16;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f3ab10 ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_> body=100 status=ok
// SIG undefined ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(void)

void TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
     ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x20);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 8);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3ab80 ~TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator> body=160 status=ok
// SIG undefined ~TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>(void)

void TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::
     ~TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = plVar3 + 0xc;
    do {
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar1 + -8);
      if (plVar1[-10] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xe;
      plVar1 = plVar1 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
    return;
  }
  return;
}



// FUNCTION 141f3ac20 ~TArray<FMovieScenePossessable,FDefaultAllocator> body=100 status=ok
// SIG undefined ~TArray<FMovieScenePossessable,FDefaultAllocator>(void)

void TArray<FMovieScenePossessable,FDefaultAllocator>::
     ~TArray<FMovieScenePossessable,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141f3ac90 ~TArray<FMovieSceneSegment,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FMovieSceneSegment,FDefaultAllocator>(void)

void TArray<FMovieSceneSegment,FDefaultAllocator>::~TArray<FMovieSceneSegment,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
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



// FUNCTION 141f3acf0 ~TArray<FMovieSceneSpawnable,FDefaultAllocator> body=126 status=ok
// SIG undefined ~TArray<FMovieSceneSpawnable,FDefaultAllocator>(void)

void TArray<FMovieSceneSpawnable,FDefaultAllocator>::~TArray<FMovieSceneSpawnable,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x50);
    do {
      if (plVar2[3] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x12;
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



// FUNCTION 141f3ad70 ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_> body=117 status=ok
// SIG undefined ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>(void)

void TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
     ::
     ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
               (undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  if (iVar4 != 0) {
    do {
      bVar1 = *(byte *)(puVar3 + 8);
      if ((bVar1 & 1) != 0) {
        puVar2 = puVar3;
        if ((bVar1 & 2) == 0) {
          puVar2 = (undefined8 *)*puVar3;
        }
        *(byte *)(puVar3 + 8) = bVar1 & 0xfe;
        (**(code **)*puVar2)(puVar2,0);
        if ((*(byte *)(puVar3 + 8) & 2) == 0) {
          FMemory::Free(*puVar3);
        }
      }
      puVar3 = puVar3 + 9;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 141f3adf0 ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackRowSegmentBlender> body=114 status=ok
// SIG undefined ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackRowSegmentBlender>(void)

void TLegacyTrackRowSegmentBlender<FMovieSceneTrackRowSegmentBlender>::
     ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackRowSegmentBlender>(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f1c7a0;
  bVar1 = *(byte *)(param_1 + 9);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)param_1[1];
    }
    else {
      puVar2 = param_1 + 1;
    }
    *(byte *)(param_1 + 9) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 9) & 2) == 0) {
      FMemory::Free(param_1[1]);
    }
    *param_1 = &PTR_FUN_1440780a8;
    return;
  }
  *param_1 = &PTR_FUN_1440780a8;
  return;
}



// FUNCTION 141f3ae70 ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackSegmentBlender> body=114 status=ok
// SIG undefined ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackSegmentBlender>(void)

void TLegacyTrackRowSegmentBlender<FMovieSceneTrackSegmentBlender>::
     ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackSegmentBlender>(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f1c7b0;
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)param_1[2];
    }
    else {
      puVar2 = param_1 + 2;
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 10) & 2) == 0) {
      FMemory::Free(param_1[2]);
    }
    *param_1 = &PTR_FUN_144f1aef8;
    return;
  }
  *param_1 = &PTR_FUN_144f1aef8;
  return;
}



// FUNCTION 141f3aef0 ~TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_> body=120 status=ok
// SIG undefined ~TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>(void)

void TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
     ~TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 0x50);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 2) == 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x30);
    }
    else {
      puVar2 = (undefined8 *)(param_1 + 0x30);
    }
    *(byte *)(param_1 + 0x50) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
      FMemory::Free(*(undefined8 *)(param_1 + 0x30));
    }
  }
  bVar1 = *(byte *)(param_1 + 0x28);
  if ((bVar1 & 1) != 0) {
    puVar2 = (undefined8 *)(param_1 + 8);
    if ((bVar1 & 2) == 0) {
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    *(byte *)(param_1 + 0x28) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
      FMemory::Free(*(undefined8 *)(param_1 + 8));
    }
  }
  return;
}



// FUNCTION 141f3af70 ~TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=205 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x60 + *local_38 + 0x48) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b040 ~TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=201 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x38 + *local_38 + 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b110 ~TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=201 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x68 + *local_38 + 0x50) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b1e0 ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=202 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_38 + 0x30 + (longlong)local_1c * 0x48) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b2b0 ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=206 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  undefined8 *puVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      puVar1 = *(undefined8 **)((longlong)local_1c * 0x20 + *local_38 + 0x10);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b380 ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=396 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_141f3b441;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_141f3b441:
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
      TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
      ::
      ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
                ((longlong)iStack_1c * 0x30 + 0x18 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b510 ~TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=248 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = (longlong)local_1c * 0x38 + *local_38;
      bVar1 = *(byte *)(lVar3 + 0x28);
      if ((bVar1 & 1) != 0) {
        puVar2 = (undefined8 *)(lVar3 + 8);
        if ((bVar1 & 2) == 0) {
          puVar2 = *(undefined8 **)(lVar3 + 8);
        }
        *(byte *)(lVar3 + 0x28) = bVar1 & 0xfe;
        (**(code **)*puVar2)(puVar2,0);
        if ((*(byte *)(lVar3 + 0x28) & 2) == 0) {
          FMemory::Free(*(undefined8 *)(lVar3 + 8));
        }
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141f3b610 ~TSparseArray<TSetElement<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=236 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = (longlong)local_1c * 0x148 + *local_38;
      TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>::
      ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>
                (lVar1 + 0x128);
      if (*(longlong *)(lVar1 + 0x118) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 200) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<328,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b700 ~TSparseArray<TSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=207 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  undefined8 *puVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      puVar1 = *(undefined8 **)(*local_38 + 0x18 + (longlong)local_1c * 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b7d0 ~TTokenEntry<int> body=104 status=ok
// SIG undefined ~TTokenEntry<int>(void)

void FMovieSceneAccumulatedBlendState::TTokenEntry<int>::~TTokenEntry<int>(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)param_1[3];
    }
    else {
      puVar2 = param_1 + 3;
    }
    *(byte *)(param_1 + 4) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      FMemory::Free(param_1[3]);
    }
    *param_1 = &PTR_FUN_144f1b048;
    return;
  }
  *param_1 = &PTR_FUN_144f1b048;
  return;
}



// FUNCTION 141f3b840 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData> body=96 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
     ::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
               (longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 0x80);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 2) == 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x70);
    }
    else {
      puVar2 = (undefined8 *)(param_1 + 0x70);
    }
    *(byte *)(param_1 + 0x80) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 0x80) & 2) == 0) {
      FMemory::Free(*(undefined8 *)(param_1 + 0x70));
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b8a0 ~FCompiledGroupResult body=116 status=ok
// SIG undefined ~FCompiledGroupResult(void)

void FCompiledGroupResult::~FCompiledGroupResult(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b920 ~FMovieSceneBlendingAccumulator body=130 status=ok
// SIG undefined ~FMovieSceneBlendingAccumulator(void)

void FMovieSceneBlendingAccumulator::~FMovieSceneBlendingAccumulator(longlong *param_1)

{
  TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
  ::
  ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
            (param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 10);
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f3b9b0 ~FMovieSceneEvaluationState body=163 status=ok
// SIG undefined ~FMovieSceneEvaluationState(void)

void FMovieSceneEvaluationState::~FMovieSceneEvaluationState(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneObjectCache>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa0,0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 141f3ba60 ~FMovieSceneGatheredCompilerData body=144 status=ok
// SIG undefined ~FMovieSceneGatheredCompilerData(void)

void FMovieSceneGatheredCompilerData::~FMovieSceneGatheredCompilerData(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f3baf0 ~FMovieScenePreAnimatedState body=137 status=ok
// SIG undefined ~FMovieScenePreAnimatedState(void)

void FMovieScenePreAnimatedState::~FMovieScenePreAnimatedState(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x188);
  TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>::
  ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>
            (param_1 + 0x170);
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 141f3bb80 FUN_141f3bb80 body=343 status=ok
// SIG undefined FUN_141f3bb80(void)

void FUN_141f3bb80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FMovieSceneBlendingAccumulator::~FMovieSceneBlendingAccumulator(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1b0);
  TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::
  ~TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x168);
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
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  return;
}



// FUNCTION 141f3bce0 FUN_141f3bce0 body=104 status=ok
// SIG undefined FUN_141f3bce0(void)

void FUN_141f3bce0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144f1af10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  FUN_14106ecc0(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 141f3bd50 FUN_141f3bd50 body=436 status=ok
// SIG undefined FUN_141f3bd50(void)

void FUN_141f3bd50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f1c448;
  param_1[5] = &PTR_LAB_144f1c6f0;
  if (DAT_146b17150 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_141f3bdb1;
    (**(code **)(*DAT_146b17150 + 0x2c8))(DAT_146b17150,(float)(double)param_1[0xfc]);
  }
  if (*(char *)(param_1 + 0xfd) != '\0') {
    *(undefined1 *)(param_1 + 0xfd) = 0;
  }
LAB_141f3bdb1:
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf9);
  plVar4 = (longlong *)param_1[0xf8];
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
  if (*(char *)(param_1 + 0xf6) != '\0') {
    *(undefined1 *)(param_1 + 0xf6) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x784) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x784) = 0;
  }
  FUN_141f3bb80(param_1 + 0x89);
  plVar4 = (longlong *)param_1[0x87];
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
  if (param_1[0x7e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x77] != 0) {
    FMemory::Free();
  }
  if (param_1[0x75] != 0) {
    FMemory::Free();
  }
  if (param_1[0x73] != 0) {
    FMemory::Free();
  }
  if (param_1[0x71] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6f] != 0) {
    FMemory::Free();
  }
  param_1[5] = &PTR_FUN_144f1af50;
  FUN_141f3bce0(param_1 + 0x61);
  FMovieScenePreAnimatedState::~FMovieScenePreAnimatedState(param_1 + 0x24);
  FMovieSceneEvaluationState::~FMovieSceneEvaluationState(param_1 + 6);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141f3bf10 operator= body=123 status=ok
// SIG undefined operator=(void)

longlong TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
         ::operator=(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=();
    if (*(longlong *)(param_2 + 0x40) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x38),(void *)(param_2 + 0x38),4);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 141f3bf90 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FMovieSceneSequenceID,unsigned_int>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,unsigned_int,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141f3c0eb;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_141f3c0eb:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        Emplace<TTuple<FMovieSceneSequenceID,unsigned_int>_const_&>
                  (param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f3c190 operator= body=675 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_141f3c26d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3c26d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141f3c323;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3c323:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)((longlong)(int)uStack_3c * 0x38 + 0x20 + *param_1) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141f3c440 operator= body=675 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_141f3c51d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3c51d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141f3c5d3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3c5d3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)((longlong)(int)uStack_3c * 0x68 + 0x50 + *param_1) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141f3c6f0 operator= body=704 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar2 != 0) {
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = _Dst;
      }
      uVar3 = *puVar9;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar3 == 0) {
        lVar7 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar8 = local_78 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar8;
        if (bVar4) goto LAB_141f3c7ca;
        uVar3 = puVar9[lVar7 + 1];
      }
      uStack_74 = -uVar3 & uVar3;
      iVar8 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_64 = (iStack_60 - iVar8) + 0x1f;
      if ((int)uVar2 < (int)uStack_64) {
LAB_141f3c7ca:
        uStack_64 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar10 = uVar3 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar3;
    if (uVar3 != uVar2) {
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = _Dst;
      }
      uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar8 = (int)uVar3 >> 5;
      while (uVar6 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_141f3c881;
        uVar6 = puVar9[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar8 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_64 = (uVar10 - iVar8) + 0x1f;
      if ((int)uVar2 < (int)uStack_64) {
LAB_141f3c881:
        uStack_64 = uVar2;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      lVar7 = (longlong)(int)uStack_3c * 0x38 + *param_1;
      bVar1 = *(byte *)(lVar7 + 0x28);
      if ((bVar1 & 1) != 0) {
        puVar5 = (undefined8 *)(lVar7 + 8);
        if ((bVar1 & 2) == 0) {
          puVar5 = *(undefined8 **)(lVar7 + 8);
        }
        *(byte *)(lVar7 + 0x28) = bVar1 & 0xfe;
        (**(code **)*puVar5)(puVar5,0);
        if ((*(byte *)(lVar7 + 0x28) & 2) == 0) {
          FMemory::Free(*(undefined8 *)(lVar7 + 8));
        }
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141f3c9b0 operator= body=673 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_141f3ca8d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3ca8d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141f3cb43;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3cb43:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
      ::
      ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,TSizedDefaultAllocator<32>_>
                ((longlong)(int)uStack_3c * 0x30 + 0x18 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141f3cc60 operator= body=675 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_141f3cd3d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3cd3d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141f3cdf3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3cdf3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)(int)uStack_3c * 0x28) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141f3cf10 operator= body=668 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_141f3cfed;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3cfed:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141f3d0a3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3d0a3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
                ((longlong)(int)uStack_3c * 0xb8 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141f3d1b0 operator= body=672 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_141f3d28d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3d28d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141f3d343;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141f3d343:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack
                ((longlong)(int)uStack_3c * 0x108 + 8 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141f3d450 operator= body=356 status=ok
// SIG undefined operator=(void)

longlong FMovieSceneBlendingAccumulator::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (param_1 != param_2) {
    TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=();
    if (*(longlong *)(param_2 + 0x40) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x38),(void *)(param_2 + 0x38),4);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  if (param_1 + 0x50 != param_2 + 0x50) {
    TSparseArray<TSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 0x50,param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x90) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x88),(void *)(param_2 + 0x88),4);
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0x98) = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0xa0);
  puVar2 = (undefined8 *)(param_1 + 0xa0);
  if (puVar2 != puVar1) {
    iVar6 = *(int *)(param_1 + 0xa8);
    puVar5 = (undefined8 *)*puVar2;
    if (iVar6 != 0) {
      do {
        bVar3 = *(byte *)(puVar5 + 8);
        if ((bVar3 & 1) != 0) {
          puVar4 = puVar5;
          if ((bVar3 & 2) == 0) {
            puVar4 = (undefined8 *)*puVar5;
          }
          *(byte *)(puVar5 + 8) = bVar3 & 0xfe;
          (**(code **)*puVar4)(puVar4,0);
          if ((*(byte *)(puVar5 + 8) & 2) == 0) {
            FMemory::Free(*puVar5);
          }
        }
        puVar5 = puVar5 + 9;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar5 = (undefined8 *)*puVar2;
    }
    if (puVar5 != (undefined8 *)0x0) {
      FMemory::Free(puVar5);
    }
    *puVar2 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    *(undefined8 *)(param_2 + 0xa8) = 0;
  }
  return param_1;
}



// FUNCTION 141f3d5c0 operator= body=370 status=ok
// SIG undefined operator=(void)

longlong * FMovieSceneEvaluationField::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar1 = param_2 + 2;
  plVar2 = param_1 + 2;
  if (plVar2 != plVar1) {
    iVar5 = (int)param_1[3];
    plVar3 = (longlong *)*plVar2;
    if (iVar5 != 0) {
      do {
        if (plVar3[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      plVar3 = (longlong *)*plVar2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  plVar1 = param_2 + 4;
  plVar2 = param_1 + 4;
  if (plVar2 != plVar1) {
    iVar5 = (int)param_1[5];
    plVar3 = (longlong *)*plVar2;
    if (iVar5 != 0) {
      plVar4 = plVar3 + 0xc;
      do {
        *(undefined4 *)(plVar4 + 1) = 0;
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar4 + -8);
        if (plVar4[-10] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0xe;
        plVar4 = plVar4 + 0xe;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      plVar3 = (longlong *)*plVar2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  return param_1;
}



// FUNCTION 141f3d740 operator= body=745 status=ok
// SIG undefined operator=(void)

longlong FMovieSceneEvaluationTemplate::operator=(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
  ::operator=();
  TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
  ::operator=(param_1 + 0x50,param_2 + 0x50);
  FMovieSceneEvaluationField::operator=(param_1 + 0xa0,param_2 + 0xa0);
  if (param_1 + 0xd0 != param_2 + 0xd0) {
    TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 0xd0,param_2 + 0xd0);
    if (*(longlong *)(param_2 + 0x110) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x108),(void *)(param_2 + 0x108),4);
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)(param_2 + 0x118) = 0;
  }
  if (param_1 + 0x120 != param_2 + 0x120) {
    TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 0x120,param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x160) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x158),(void *)(param_2 + 0x158),4);
    }
    if (*(longlong *)(param_1 + 0x160) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_2 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    *(undefined4 *)(param_2 + 0x168) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x174);
  uVar2 = *(undefined4 *)(param_2 + 0x178);
  uVar3 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = uVar3;
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  if (param_1 + 400 != param_2 + 400) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 400,param_2 + 400);
    if (*(longlong *)(param_2 + 0x1d0) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1c8),(void *)(param_2 + 0x1c8),4);
    }
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
    *(undefined8 *)(param_2 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
    *(undefined4 *)(param_2 + 0x1d8) = 0;
  }
  if (param_1 + 0x1e0 != param_2 + 0x1e0) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 0x1e0,param_2 + 0x1e0);
    if (*(longlong *)(param_2 + 0x220) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x218),(void *)(param_2 + 0x218),4);
    }
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
    *(undefined4 *)(param_2 + 0x228) = 0;
  }
  FMovieSceneEvaluationTree::operator=(param_1 + 0x230,param_2 + 0x230);
  plVar4 = (longlong *)(param_2 + 0x270);
  plVar5 = (longlong *)(param_1 + 0x270);
  if (plVar5 != plVar4) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = *plVar4;
    *plVar4 = 0;
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
    *(undefined8 *)(param_2 + 0x278) = 0;
  }
  plVar4 = (longlong *)(param_2 + 0x280);
  plVar5 = (longlong *)(param_1 + 0x280);
  if (plVar5 != plVar4) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = *plVar4;
    *plVar4 = 0;
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
    *(undefined8 *)(param_2 + 0x288) = 0;
  }
  FMovieSceneEvaluationTree::operator=(param_1 + 0x290,param_2 + 0x290);
  plVar4 = (longlong *)(param_2 + 0x2d0);
  plVar5 = (longlong *)(param_1 + 0x2d0);
  if (plVar5 != plVar4) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = *plVar4;
    *plVar4 = 0;
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
    *(undefined8 *)(param_2 + 0x2d8) = 0;
  }
  plVar4 = (longlong *)(param_2 + 0x2e0);
  plVar5 = (longlong *)(param_1 + 0x2e0);
  if (plVar5 != plVar4) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = *plVar4;
    *plVar4 = 0;
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
    *(undefined8 *)(param_2 + 0x2e8) = 0;
  }
  return param_1;
}



// FUNCTION 141f3da30 operator= body=195 status=ok
// SIG undefined operator=(void)

undefined1 * FMovieSceneEvaluationTree::operator=(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 0x20);
  *param_1 = *param_2;
  plVar2 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x30);
  plVar2 = (longlong *)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return param_1;
}



// FUNCTION 141f3db00 operator= body=341 status=ok
// SIG undefined operator=(void)

longlong * FMovieSceneExecutionTokens::operator=(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (param_1 != param_2) {
    iVar7 = (int)param_1[1];
    lVar5 = *param_1;
    if (iVar7 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x68);
      do {
        bVar1 = *(byte *)(puVar6 + 8);
        if ((bVar1 & 1) != 0) {
          puVar4 = puVar6;
          if ((bVar1 & 2) == 0) {
            puVar4 = (undefined8 *)*puVar6;
          }
          *(byte *)(puVar6 + 8) = bVar1 & 0xfe;
          (**(code **)*puVar4)(puVar4,0);
          if ((*(byte *)(puVar6 + 8) & 2) == 0) {
            FMemory::Free(*puVar6);
          }
        }
        puVar6 = puVar6 + 0x16;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (param_1 + 2 != param_2 + 2) {
    TSparseArray<TSetElement<TTuple<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 2,param_2 + 2);
    if (param_2[10] == 0) {
      ::_guard_xfg_dispatch_icall_nop(param_1 + 9,param_2 + 9,4);
    }
    if (param_1[10] != 0) {
      FMemory::Free();
    }
    param_1[10] = param_2[10];
    param_2[10] = 0;
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
    *(undefined4 *)(param_2 + 0xb) = 0;
  }
  FMovieSceneBlendingAccumulator::operator=(param_1 + 0xc,param_2 + 0xc);
  lVar5 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = lVar5;
  *(int *)(param_1 + 0x24) = (int)param_2[0x24];
  lVar5 = param_2[0x25];
  uVar2 = *(undefined4 *)((longlong)param_2 + 300);
  lVar3 = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  *(int *)(param_1 + 0x25) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 300) = uVar2;
  *(int *)(param_1 + 0x26) = (int)lVar3;
  FMovieSceneContext::FMovieSceneContext((longlong)param_1 + 0x134,(longlong)param_2 + 0x134);
  return param_1;
}



// FUNCTION 141f3dc60 operator= body=145 status=ok
// SIG undefined operator=(void)

undefined8 FMovieSceneSequenceInstanceDataPtr::operator=(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    plVar3 = param_2;
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      plVar3 = (longlong *)*param_2;
    }
    lVar1 = (**(code **)(*plVar3 + 8))();
    plVar3 = *(longlong **)(lVar1 + 0x90);
    uVar2 = TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
                      (param_1,(int)plVar3[1],*(undefined4 *)((longlong)plVar3 + 0xc));
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
    if ((*(byte *)(param_2 + 2) & 2) == 0) {
      param_2 = (longlong *)*param_2;
    }
    (**(code **)(*plVar3 + 0x98))(plVar3,uVar2,param_2,1);
  }
  return param_1;
}



// FUNCTION 141f3dd00 FUN_141f3dd00 body=150 status=ok
// SIG undefined FUN_141f3dd00(void)

void FUN_141f3dd00(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  plVar2 = (longlong *)FUN_140871cc0(param_1,param_2 + 4);
  puVar1 = *(undefined1 **)plVar2[1];
  if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2 + 8,1);
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  FUN_140871cc0(plVar2,param_2 + 0xc);
  return;
}



// FUNCTION 141f3dda0 operator* body=448 status=ok
// SIG undefined operator*(void)

int * operator*(int *param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  float fStackX_1c;
  float fStackX_24;
  
  fStackX_24 = (float)((ulonglong)param_2 >> 0x20);
  if (*param_3 != 1.0) {
    dVar12 = ((double)(int)param_2 + (double)fStackX_24) * (double)*param_3;
    lVar4 = (longlong)dVar12;
    dVar5 = dVar12;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar12)) {
      auVar7._8_8_ = dVar12;
      auVar7._0_8_ = dVar12;
      uVar2 = movmskpd(0,auVar7);
      dVar5 = (double)(longlong)(lVar4 - (ulonglong)(uVar2 & 1));
    }
    dVar12 = dVar12 - dVar5;
    dVar6 = 0.0;
    if ((0.0 <= dVar12) && (dVar6 = 0.9999999403953552, dVar12 <= 0.9999999403953552)) {
      dVar6 = dVar12;
    }
    fVar8 = (float)dVar6;
    if (0.0 <= fVar8) {
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
    }
    else {
      fVar8 = 0.0;
    }
    fStackX_24 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
    fVar8 = fVar8 + fStackX_24;
    iVar1 = ((int)ROUND((fVar8 + fVar8) - 0.5) >> 1) + (int)*(undefined8 *)(param_3 + 1) +
            (int)dVar5;
    iVar3 = (int)fVar8;
    *param_1 = iVar1;
    fVar9 = fVar8;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar8)) {
      auVar11._4_4_ = fVar8;
      auVar11._0_4_ = fVar8;
      auVar11._8_8_ = 0;
      uVar2 = movmskps(iVar1,auVar11);
      fVar9 = (float)(int)(iVar3 - (uVar2 & 1));
    }
    fVar8 = fVar8 - fVar9;
    fVar9 = 0.0;
    if ((0.0 <= fVar8) && (fVar9 = fVar8, 0.99999994 <= fVar8)) {
      fVar9 = 0.99999994;
    }
    param_1[1] = (int)fVar9;
    return param_1;
  }
  fStackX_1c = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fStackX_1c = fStackX_1c + fStackX_24;
  iVar1 = ((int)ROUND((fStackX_1c + fStackX_1c) - 0.5) >> 1) + (int)*(undefined8 *)(param_3 + 1) +
          (int)param_2;
  *param_1 = iVar1;
  iVar3 = (int)fStackX_1c;
  fVar8 = fStackX_1c;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fStackX_1c)) {
    auVar10._4_4_ = fStackX_1c;
    auVar10._0_4_ = fStackX_1c;
    auVar10._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar10);
    fVar8 = (float)(int)(iVar3 - (uVar2 & 1));
  }
  fStackX_1c = fStackX_1c - fVar8;
  fVar8 = 0.0;
  if ((0.0 <= fStackX_1c) && (fVar8 = 0.99999994, fStackX_1c <= 0.99999994)) {
    fVar8 = fStackX_1c;
  }
  param_1[1] = (int)fVar8;
  return param_1;
}



// FUNCTION 141f3df60 operator* body=348 status=ok
// SIG undefined operator*(void)

float * operator*(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined8 local_res8;
  float fStackX_14;
  
  fVar1 = *param_2;
  uVar5 = *(ulonglong *)(param_3 + 1);
  if (fVar1 != 1.0) {
    local_res8._4_4_ = (float)(uVar5 >> 0x20);
    dVar13 = ((double)(int)uVar5 + (double)local_res8._4_4_) * (double)fVar1;
    lVar7 = (longlong)dVar13;
    dVar8 = dVar13;
    if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar13)) {
      auVar10._8_8_ = dVar13;
      auVar10._0_8_ = dVar13;
      uVar3 = movmskpd(0,auVar10);
      dVar8 = (double)(longlong)(lVar7 - (ulonglong)(uVar3 & 1));
    }
    dVar13 = dVar13 - dVar8;
    dVar9 = 0.0;
    if ((0.0 <= dVar13) && (dVar9 = 0.9999999403953552, dVar13 <= 0.9999999403953552)) {
      dVar9 = dVar13;
    }
    fVar11 = (float)dVar9;
    if (0.0 <= fVar11) {
      fVar2 = 0.99999994;
      if (fVar11 <= 0.99999994) {
        fVar2 = fVar11;
      }
      local_res8 = CONCAT44(fVar2,(int)dVar8);
      uVar5 = local_res8;
    }
    else {
      local_res8 = (ulonglong)(uint)(int)dVar8;
      uVar5 = local_res8;
    }
  }
  local_res8._4_4_ = (float)(uVar5 >> 0x20);
  fStackX_14 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  local_res8._4_4_ = local_res8._4_4_ + fStackX_14;
  uVar3 = ((int)ROUND((local_res8._4_4_ + local_res8._4_4_) - 0.5) >> 1) +
          (int)*(undefined8 *)(param_2 + 1) + (int)uVar5;
  iVar6 = (int)local_res8._4_4_;
  fVar11 = local_res8._4_4_;
  if ((iVar6 != -0x80000000) && ((float)iVar6 != local_res8._4_4_)) {
    auVar12._4_4_ = local_res8._4_4_;
    auVar12._0_4_ = local_res8._4_4_;
    auVar12._8_8_ = 0;
    uVar4 = movmskps((int)uVar5,auVar12);
    fVar11 = (float)(int)(iVar6 - (uVar4 & 1));
  }
  local_res8._4_4_ = local_res8._4_4_ - fVar11;
  if (0.0 <= local_res8._4_4_) {
    if (0.99999994 <= local_res8._4_4_) {
      local_res8._4_4_ = 0.99999994;
    }
    local_res8 = CONCAT44(local_res8._4_4_,uVar3);
  }
  else {
    local_res8 = (ulonglong)uVar3;
  }
  fVar11 = *param_3;
  *(ulonglong *)(param_1 + 1) = local_res8;
  *param_1 = fVar1 * fVar11;
  return param_1;
}



// FUNCTION 141f3e0c0 operator* body=195 status=ok
// SIG undefined operator*(void)

undefined1 * operator*(undefined1 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  
  local_res8 = *(undefined4 *)(param_2 + 4);
  cVar1 = *param_2;
  uVar4 = 0;
  if (cVar1 == '\x02') {
    uVar6 = 0;
    uVar5 = 2;
  }
  else {
    uStackX_c = 0;
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)operator*(local_res10,local_res8);
    }
    else {
      puVar3 = (undefined4 *)operator*(&local_res8,local_res8);
    }
    uVar5 = cVar1 == '\x01';
    uVar6 = *puVar3;
  }
  local_res8 = *(undefined4 *)(param_2 + 0xc);
  if (param_2[8] == '\x02') {
    uVar2 = 2;
  }
  else {
    uStackX_c = 0;
    if (param_2[8] == '\x01') {
      puVar3 = (undefined4 *)operator*(&local_res8,local_res8,param_3);
      uVar4 = *puVar3;
      uVar2 = 1;
    }
    else {
      puVar3 = (undefined4 *)operator*(local_res10,local_res8,param_3);
      uVar4 = *puVar3;
      uVar2 = 0;
    }
  }
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  param_1[8] = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  return param_1;
}



// FUNCTION 141f3e190 operator++ body=585 status=ok
// SIG undefined operator++(void)

char * FMovieSceneEvaluationTreeRangeIterator::operator++(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  char local_res8 [4];
  int local_resc;
  undefined8 local_res10;
  
  if ((*(int *)(param_1 + 0x10) == -1) && (*(int *)(param_1 + 0x14) != 0)) {
    return param_1;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  iVar7 = (int)*(undefined8 *)(param_1 + 0x10);
  if (iVar7 != -1) {
    lVar5 = ((longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar7 * 0xc) +
            (longlong)(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)) * 0x20 +
            *(longlong *)(lVar5 + 0x30);
  }
  cVar6 = param_1[8];
  iVar7 = *(int *)(param_1 + 0xc);
  if ((*(char *)(lVar5 + 8) == cVar6) &&
     ((*(char *)(lVar5 + 8) == '\x02' || (*(int *)(lVar5 + 0xc) == iVar7)))) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
    Iter(param_1,1);
    return param_1;
  }
  if ((*param_1 == '\x02') || (cVar6 == '\x02')) {
LAB_141f3e24f:
    if (cVar6 == '\0') {
      cVar6 = '\x01';
    }
    else {
LAB_141f3e259:
      if (cVar6 == '\x01') {
        cVar6 = '\0';
      }
    }
  }
  else {
    if (*(int *)(param_1 + 4) <= iVar7) {
      if (*(int *)(param_1 + 4) != iVar7) goto LAB_141f3e24f;
      if ((*param_1 == '\0') || (cVar6 == '\0')) goto LAB_141f3e248;
      goto LAB_141f3e259;
    }
LAB_141f3e248:
    cVar6 = '\x02';
    iVar7 = 0;
  }
  local_res8[0] = cVar6;
  local_resc = iVar7;
  FindNextChild(param_1,&local_res10,*(undefined8 *)(param_1 + 0x10),local_res8,1);
  while( true ) {
    iVar2 = (int)local_res10;
    iVar3 = (int)((ulonglong)local_res10 >> 0x20);
    if ((iVar2 == -1) && (iVar3 != 0)) break;
    pcVar8 = *(char **)(param_1 + 0x18);
    pcVar9 = pcVar8;
    if (iVar2 != -1) {
      pcVar9 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar8 + 0x20) + (longlong)iVar2 * 0xc) +
                        (longlong)iVar3) * 0x20 + *(longlong *)(pcVar8 + 0x30));
    }
    if ((*pcVar9 != cVar6) || ((*pcVar9 != '\x02' && (*(int *)(pcVar9 + 4) != iVar7))))
    goto LAB_141f3e319;
    *(undefined8 *)(param_1 + 0x10) = local_res10;
    local_res8[0] = cVar6;
    local_resc = iVar7;
    puVar4 = (undefined8 *)FindNextChild(param_1,&local_res10,local_res10,local_res8,1);
    local_res10 = *puVar4;
  }
  pcVar8 = *(char **)(param_1 + 0x18);
LAB_141f3e319:
  iVar11 = (int)*(undefined8 *)(param_1 + 0x10);
  pcVar9 = pcVar8;
  if (iVar11 != -1) {
    pcVar9 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar8 + 0x20) + (longlong)iVar11 * 0xc) +
                      (longlong)(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)) * 0x20 +
                     *(longlong *)(pcVar8 + 0x30));
  }
  iVar11 = *(int *)(pcVar9 + 0xc);
  cVar10 = pcVar9[8];
  if (iVar2 == -1) {
    if (iVar3 != 0) goto LAB_141f3e3b4;
  }
  else {
    pcVar8 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar8 + 0x20) + (longlong)iVar2 * 0xc) +
                      (longlong)iVar3) * 0x20 + *(longlong *)(pcVar8 + 0x30));
  }
  cVar1 = *pcVar8;
  iVar2 = *(int *)(pcVar8 + 4);
  if ((cVar1 != cVar6) || ((cVar1 != '\x02' && (iVar2 != iVar7)))) {
    iVar11 = iVar2;
    if (cVar1 == '\0') {
      cVar10 = '\x01';
    }
    else {
      cVar10 = cVar1;
      if (cVar1 == '\x01') {
        cVar10 = '\0';
      }
    }
  }
LAB_141f3e3b4:
  *param_1 = cVar6;
  *(int *)(param_1 + 4) = iVar7;
  param_1[8] = cVar10;
  *(int *)(param_1 + 0xc) = iVar11;
  return param_1;
}



// FUNCTION 141f3e3e0 operator-- body=586 status=ok
// SIG undefined operator--(void)

char * FMovieSceneEvaluationTreeRangeIterator::operator--(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  char local_res8 [4];
  int local_resc;
  undefined8 local_res10;
  
  if ((*(int *)(param_1 + 0x10) == -1) && (*(int *)(param_1 + 0x14) != 0)) {
    return param_1;
  }
  pcVar5 = *(char **)(param_1 + 0x18);
  iVar7 = (int)*(undefined8 *)(param_1 + 0x10);
  if (iVar7 != -1) {
    pcVar5 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar5 + 0x20) + (longlong)iVar7 * 0xc) +
                      (longlong)(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)) * 0x20 +
                     *(longlong *)(pcVar5 + 0x30));
  }
  cVar6 = *param_1;
  iVar7 = *(int *)(param_1 + 4);
  if ((*pcVar5 == cVar6) && ((*pcVar5 == '\x02' || (*(int *)(pcVar5 + 4) == iVar7)))) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pcVar5 + 0x10);
    Iter(param_1,0);
    return param_1;
  }
  if (((cVar6 == '\x02') || (param_1[8] == '\x02')) ||
     ((iVar7 <= *(int *)(param_1 + 0xc) &&
      ((iVar7 != *(int *)(param_1 + 0xc) || ((cVar6 != '\0' && (param_1[8] != '\0')))))))) {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
    }
    else if (cVar6 == '\x01') {
      cVar6 = '\0';
    }
  }
  else {
    cVar6 = '\x02';
    iVar7 = 0;
  }
  local_res8[0] = cVar6;
  local_resc = iVar7;
  FindNextChild(param_1,&local_res10,*(undefined8 *)(param_1 + 0x10),local_res8,0);
  while( true ) {
    iVar2 = (int)local_res10;
    iVar3 = (int)((ulonglong)local_res10 >> 0x20);
    if ((iVar2 == -1) && (iVar3 != 0)) break;
    pcVar5 = *(char **)(param_1 + 0x18);
    pcVar8 = pcVar5;
    if (iVar2 != -1) {
      pcVar8 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar5 + 0x20) + (longlong)iVar2 * 0xc) +
                        (longlong)iVar3) * 0x20 + *(longlong *)(pcVar5 + 0x30));
    }
    if ((pcVar8[8] != cVar6) || ((pcVar8[8] != '\x02' && (*(int *)(pcVar8 + 0xc) != iVar7))))
    goto LAB_141f3e56a;
    *(undefined8 *)(param_1 + 0x10) = local_res10;
    local_res8[0] = cVar6;
    local_resc = iVar7;
    puVar4 = (undefined8 *)FindNextChild(param_1,&local_res10,local_res10,local_res8,0);
    local_res10 = *puVar4;
  }
  pcVar5 = *(char **)(param_1 + 0x18);
LAB_141f3e56a:
  iVar10 = (int)*(undefined8 *)(param_1 + 0x10);
  pcVar8 = pcVar5;
  if (iVar10 != -1) {
    pcVar8 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar5 + 0x20) + (longlong)iVar10 * 0xc) +
                      (longlong)(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)) * 0x20 +
                     *(longlong *)(pcVar5 + 0x30));
  }
  iVar10 = *(int *)(pcVar8 + 4);
  cVar9 = *pcVar8;
  if (iVar2 == -1) {
    if (iVar3 != 0) goto LAB_141f3e605;
  }
  else {
    pcVar5 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar5 + 0x20) + (longlong)iVar2 * 0xc) +
                      (longlong)iVar3) * 0x20 + *(longlong *)(pcVar5 + 0x30));
  }
  cVar1 = pcVar5[8];
  iVar2 = *(int *)(pcVar5 + 0xc);
  if ((cVar1 != cVar6) || ((cVar1 != '\x02' && (iVar2 != iVar7)))) {
    iVar10 = iVar2;
    if (cVar1 == '\0') {
      cVar9 = '\x01';
    }
    else {
      cVar9 = cVar1;
      if (cVar1 == '\x01') {
        cVar9 = '\0';
      }
    }
  }
LAB_141f3e605:
  *param_1 = cVar9;
  *(int *)(param_1 + 4) = iVar10;
  param_1[8] = cVar6;
  *(int *)(param_1 + 0xc) = iVar7;
  return param_1;
}



// FUNCTION 141f3e630 operator() body=127 status=ok
// SIG undefined operator()(void)

longlong <lambda_61750566fbb28c98eaf6df15c9240c34>::operator()
                   (undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  uint7 uVar2;
  int *piVar3;
  int local_res14;
  char local_res18;
  int local_res1c [3];
  
  cVar1 = *(char *)(param_2 + 0x90);
  local_res14 = *(int *)(param_2 + 0x94);
  local_res18 = *(char *)(param_3 + 0x90);
  local_res1c[0] = *(int *)(param_3 + 0x94);
  if (cVar1 == '\x02') {
    piVar3 = &local_res14;
    local_res18 = cVar1;
    goto LAB_141f3e679;
  }
  if (local_res18 != '\x02') {
    if (local_res14 < local_res1c[0]) {
      piVar3 = &local_res14;
      local_res18 = cVar1;
      goto LAB_141f3e679;
    }
    if ((local_res14 <= local_res1c[0]) && (cVar1 == '\x01')) {
      piVar3 = &local_res14;
      local_res18 = cVar1;
      goto LAB_141f3e679;
    }
  }
  piVar3 = local_res1c;
LAB_141f3e679:
  uVar2 = (uint7)(uint3)((uint)local_res14 >> 8);
  if ((local_res18 == cVar1) && ((local_res18 == '\x02' || (*piVar3 == local_res14)))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 141f3e6b0 operator() body=308 status=ok
// SIG undefined operator()(void)

void TMovieSceneEvaluationTree<FCompileOnTheFlyData>::FAddOperator::operator()
               (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar5 = *(longlong *)(param_1 + 8);
    uVar2 = *(uint *)(lVar5 + 0x58);
    iVar3 = *(int *)(lVar5 + 0x48);
    *(int *)(lVar5 + 0x48) = iVar3 + 1;
    if (*(int *)(lVar5 + 0x4c) < iVar3 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar5 + 0x40,iVar3);
    }
    lVar6 = *(longlong *)(lVar5 + 0x40);
    plVar1 = (longlong *)(lVar5 + 0x50);
    *(ulonglong *)(lVar6 + (longlong)iVar3 * 0xc) = (ulonglong)uVar2;
    *(undefined4 *)(lVar6 + 8 + (longlong)iVar3 * 0xc) = 1;
    iVar4 = *(int *)(lVar5 + 0x58);
    iVar7 = *(int *)(lVar5 + 0x58) + 1;
    if (iVar4 < iVar7) {
      *(int *)(lVar5 + 0x58) = iVar7;
      iVar9 = iVar7 - iVar4;
      if (*(int *)(lVar5 + 0x5c) < iVar7) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      if (iVar9 != 0) {
        puVar8 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x28 + 0x20);
        do {
          *(undefined8 *)(puVar8 + -2) = 0xffffffffffffffff;
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 10;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else if ((iVar7 < iVar4) && (iVar7 != iVar4)) {
      *(int *)(lVar5 + 0x58) = iVar7;
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    *(int *)(param_2 + 0x1c) = iVar3;
  }
  local_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  local_28 = *(undefined8 *)(param_1 + 0x30);
  TEvaluationTreeEntryContainer<FCompileOnTheFlyData>::Add
            (*(longlong *)(param_1 + 8) + 0x40,*(undefined4 *)(param_2 + 0x1c),&local_48);
  return;
}



// FUNCTION 141f3e7f0 operator() body=437 status=ok
// SIG undefined operator()(void)

void TMovieSceneEvaluationTree<FMovieSceneSequenceID>::FAddOperator::operator()
               (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  
  iVar11 = *(int *)(param_2 + 0x1c);
  if (iVar11 == -1) {
    lVar5 = *(longlong *)(param_1 + 8);
    uVar3 = *(uint *)(lVar5 + 0x58);
    iVar11 = *(int *)(lVar5 + 0x48);
    *(int *)(lVar5 + 0x48) = iVar11 + 1;
    if (*(int *)(lVar5 + 0x4c) < iVar11 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar5 + 0x40,iVar11);
    }
    lVar6 = *(longlong *)(lVar5 + 0x40);
    plVar1 = (longlong *)(lVar5 + 0x50);
    *(ulonglong *)(lVar6 + (longlong)iVar11 * 0xc) = (ulonglong)uVar3;
    *(undefined4 *)(lVar6 + 8 + (longlong)iVar11 * 0xc) = 1;
    iVar8 = *(int *)(lVar5 + 0x58);
    iVar7 = *(int *)(lVar5 + 0x58) + 1;
    if (iVar8 < iVar7) {
      *(int *)(lVar5 + 0x58) = iVar7;
      if (*(int *)(lVar5 + 0x5c) < iVar7) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
      }
      if (iVar7 - iVar8 != 0) {
        puVar12 = (undefined4 *)(*plVar1 + (longlong)iVar8 * 4);
        for (uVar10 = (ulonglong)(uint)(iVar7 - iVar8); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        }
      }
    }
    else if ((iVar7 < iVar8) && (iVar7 != iVar8)) {
      *(int *)(lVar5 + 0x58) = iVar7;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    *(int *)(param_2 + 0x1c) = iVar11;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 8);
  lVar9 = (longlong)iVar11;
  lVar6 = *(longlong *)(lVar5 + 0x40);
  iVar11 = *(int *)(lVar6 + 8 + lVar9 * 0xc);
  piVar2 = (int *)(lVar6 + lVar9 * 0xc);
  iVar8 = *(int *)(lVar6 + 4 + lVar9 * 0xc);
  if (iVar11 < iVar8 + 1) {
    iVar11 = iVar11 * 2;
    iVar8 = 2;
    if (1 < iVar11) {
      iVar8 = iVar11;
    }
    piVar2[2] = iVar8;
    iVar11 = *(int *)(lVar5 + 0x58);
    iVar7 = *(int *)(lVar5 + 0x58);
    iVar8 = iVar11 + iVar8;
    if (iVar7 < iVar8) {
      *(int *)(lVar5 + 0x58) = iVar8;
      if (*(int *)(lVar5 + 0x5c) < iVar8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar5 + 0x50,iVar7);
      }
      if (iVar8 - iVar7 != 0) {
        puVar12 = (undefined4 *)(*(longlong *)(lVar5 + 0x50) + (longlong)iVar7 * 4);
        for (uVar10 = (ulonglong)(uint)(iVar8 - iVar7); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        }
      }
    }
    else if ((iVar8 < iVar7) && (iVar8 != iVar7)) {
      *(int *)(lVar5 + 0x58) = iVar8;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar5 + 0x50);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar5 + 0x50) + (longlong)iVar11 * 4),
               (void *)(*(longlong *)(lVar5 + 0x50) + (longlong)*piVar2 * 4),
               (longlong)piVar2[1] << 2);
    *piVar2 = iVar11;
    iVar8 = piVar2[1];
  }
  else {
    iVar11 = *piVar2;
  }
  *(undefined4 *)(*(longlong *)(lVar5 + 0x50) + (longlong)(iVar11 + iVar8) * 4) = uVar4;
  piVar2[1] = piVar2[1] + 1;
  return;
}



// FUNCTION 141f3e9b0 operator() body=324 status=ok
// SIG undefined operator()(void)

void TMovieSceneEvaluationTree<FMovieSceneSubSectionData>::FAddOperator::operator()
               (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar5 = *(longlong *)(param_1 + 8);
    uVar2 = *(uint *)(lVar5 + 0x58);
    iVar3 = *(int *)(lVar5 + 0x48);
    *(int *)(lVar5 + 0x48) = iVar3 + 1;
    if (*(int *)(lVar5 + 0x4c) < iVar3 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar5 + 0x40,iVar3);
    }
    lVar6 = *(longlong *)(lVar5 + 0x40);
    plVar1 = (longlong *)(lVar5 + 0x50);
    *(ulonglong *)(lVar6 + (longlong)iVar3 * 0xc) = (ulonglong)uVar2;
    *(undefined4 *)(lVar6 + 8 + (longlong)iVar3 * 0xc) = 1;
    iVar4 = *(int *)(lVar5 + 0x58);
    iVar7 = *(int *)(lVar5 + 0x58) + 1;
    if (iVar4 < iVar7) {
      *(int *)(lVar5 + 0x58) = iVar7;
      iVar10 = iVar7 - iVar4;
      if (*(int *)(lVar5 + 0x5c) < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar4);
      }
      puVar9 = (undefined4 *)((longlong)iVar4 * 0x1c + *plVar1);
      if (iVar10 != 0) {
        puVar8 = puVar9 + 4;
        do {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 7;
          *(undefined8 *)(puVar8 + -3) = 0;
          *(undefined8 *)(puVar8 + -1) = 0;
          puVar8[1] = 0;
          *(undefined1 *)(puVar8 + 2) = 0;
          puVar8 = puVar8 + 7;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else if ((iVar7 < iVar4) && (iVar7 != iVar4)) {
      *(int *)(lVar5 + 0x58) = iVar7;
      TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    *(int *)(param_2 + 0x1c) = iVar3;
  }
  local_48 = *(undefined4 *)(param_1 + 0x10);
  local_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  uStack_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  local_44 = *(undefined4 *)(param_1 + 0x14);
  local_30 = *(undefined1 *)(param_1 + 0x28);
  TEvaluationTreeEntryContainer<FMovieSceneSubSectionData>::Add
            (*(longlong *)(param_1 + 8) + 0x40,*(undefined4 *)(param_2 + 0x1c),&local_48);
  return;
}



// FUNCTION 141f3eb00 operator() body=103 status=ok
// SIG undefined operator()(void)

void TMovieSceneEvaluationTree<FSectionEvaluationData>::FAddOperator::operator()
               (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    puVar1 = (undefined4 *)
             TEvaluationTreeEntryContainer<FSectionEvaluationData>::AllocateEntry
                       (*(longlong *)(param_1 + 8) + 0x40,local_res8,1);
    *(undefined4 *)(param_2 + 0x1c) = *puVar1;
  }
  local_18 = *(undefined8 *)(param_1 + 0x10);
  local_10 = *(undefined4 *)(param_1 + 0x18);
  TEvaluationTreeEntryContainer<FSectionEvaluationData>::Add
            (*(longlong *)(param_1 + 8) + 0x40,*(undefined4 *)(param_2 + 0x1c),&local_18);
  return;
}



// FUNCTION 141f3eb90 FUN_141f3eb90 body=72 status=ok
// SIG undefined FUN_141f3eb90(void)

undefined8 * FUN_141f3eb90(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcf628;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141f3ebe0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TLegacyTrackRowSegmentBlender<FMovieSceneTrackRowSegmentBlender>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackRowSegmentBlender>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141f3ec20 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TLegacyTrackRowSegmentBlender<FMovieSceneTrackSegmentBlender>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TLegacyTrackRowSegmentBlender<FMovieSceneTrackSegmentBlender>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141f3ec60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieSceneAccumulatedBlendState::TTokenEntry<int>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTokenEntry<int>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141f3eca0 FUN_141f3eca0 body=43 status=ok
// SIG undefined FUN_141f3eca0(void)

undefined8 * FUN_141f3eca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141f3ecd0 FUN_141f3ecd0 body=43 status=ok
// SIG undefined FUN_141f3ecd0(void)

undefined8 * FUN_141f3ecd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141f3ed00 FUN_141f3ed00 body=43 status=ok
// SIG undefined FUN_141f3ed00(void)

undefined8 * FUN_141f3ed00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141f3ed30 FUN_141f3ed30 body=43 status=ok
// SIG undefined FUN_141f3ed30(void)

undefined8 * FUN_141f3ed30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1aef8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141f3ed60 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FIntegralCurve::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f1a640;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141f3ede0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEvaluationTemplateGenerator::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141f3ee50 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieScenePropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141f3eea0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_de925132ffa90750e4d23da6f8948dfe>,0>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f3ef10 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_de925132ffa90750e4d23da6f8948dfe>,0>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_143fcdb70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f3ef80 FUN_141f3ef80 body=52 status=ok
// SIG undefined FUN_141f3ef80(void)

undefined8 FUN_141f3ef80(undefined8 param_1,ulonglong param_2)

{
  FUN_141f3bce0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141f3efc0 `scalar_deleting_destructor' body=53 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneTimeController::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f1a8d0;
  if (*(char *)(param_1 + 3) != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141f3f000 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneTimeController_AudioClock::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 6) != '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  *param_1 = &PTR__scalar_deleting_destructor__144f1a8d0;
  if (*(char *)(param_1 + 3) != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141f3f050 `scalar_deleting_destructor' body=53 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneTimeController_Tick::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f1a8d0;
  if (*(char *)(param_1 + 3) != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141f3f090 FUN_141f3f090 body=134 status=ok
// SIG undefined FUN_141f3f090(void)

undefined8 * FUN_141f3f090(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141f3f120 FUN_141f3f120 body=43 status=ok
// SIG undefined FUN_141f3f120(void)

undefined8 * FUN_141f3f120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1aef8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f3f150 FUN_141f3f150 body=43 status=ok
// SIG undefined FUN_141f3f150(void)

undefined8 * FUN_141f3f150(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141f3f180 FUN_141f3f180 body=43 status=ok
// SIG undefined FUN_141f3f180(void)

undefined8 * FUN_141f3f180(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1b048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f3f1b0 FUN_141f3f1b0 body=98 status=ok
// SIG undefined FUN_141f3f1b0(void)

undefined8 * FUN_141f3f1b0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144f1b030;
  plVar3 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f3f220 FUN_141f3f220 body=43 status=ok
// SIG undefined FUN_141f3f220(void)

undefined8 * FUN_141f3f220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1abf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141f3f250 FUN_141f3f250 body=90 status=ok
// SIG undefined FUN_141f3f250(void)

undefined8 * FUN_141f3f250(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1af50;
  FUN_141f3bce0(param_1 + 0x5c);
  FMovieScenePreAnimatedState::~FMovieScenePreAnimatedState(param_1 + 0x1f);
  FMovieSceneEvaluationState::~FMovieSceneEvaluationState(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 141f3f2b0 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieScene::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
            (param_1 + 0x70);
  TArray<FMovieScenePossessable,FDefaultAllocator>::
  ~TArray<FMovieScenePossessable,FDefaultAllocator>(param_1 + 0x60);
  TArray<FMovieSceneSpawnable,FDefaultAllocator>::~TArray<FMovieSceneSpawnable,FDefaultAllocator>
            (param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141f3f320 `scalar_deleting_destructor' body=127 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneBindingOverrides::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1440f0a38;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141f3f3a0 `scalar_deleting_destructor' body=63 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneBuiltInEasingFunction::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144f1abf8;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141f3f3e0 `scalar_deleting_destructor' body=168 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneFolder::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x50);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141f3f490 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140591180();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141f3f4d0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneSequence::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x348);
  }
  return param_1;
}



// FUNCTION 141f3f520 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFMODStudioModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141f3bd50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 141f3f560 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneSignedObject::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141f3f5a0 FUN_141f3f5a0 body=90 status=ok
// SIG undefined FUN_141f3f5a0(void)

longlong FUN_141f3f5a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141f3f610 Add body=332 status=ok
// SIG undefined Add(void)

void TEvaluationTreeEntryContainer<FCompileOnTheFlyData>::Add
               (longlong *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  lVar7 = (longlong)param_2;
  lVar4 = *param_1;
  iVar10 = *(int *)(lVar4 + 8 + lVar7 * 0xc);
  piVar1 = (int *)(lVar4 + lVar7 * 0xc);
  iVar6 = *(int *)(lVar4 + 4 + lVar7 * 0xc);
  if (iVar10 < iVar6 + 1) {
    iVar10 = iVar10 * 2;
    iVar6 = 2;
    if (1 < iVar10) {
      iVar6 = iVar10;
    }
    piVar1[2] = iVar6;
    iVar10 = (int)param_1[3];
    iVar3 = (int)param_1[3];
    iVar6 = iVar10 + iVar6;
    if (iVar3 < iVar6) {
      *(int *)(param_1 + 3) = iVar6;
      iVar9 = iVar6 - iVar3;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar6) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar3);
      }
      if (iVar9 != 0) {
        puVar8 = (undefined4 *)(param_1[2] + (longlong)iVar3 * 0x28 + 0x20);
        do {
          *(undefined8 *)(puVar8 + -2) = 0xffffffffffffffff;
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 10;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else if ((iVar6 < iVar3) && (iVar6 != iVar3)) {
      *(int *)(param_1 + 3) = iVar6;
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1[2] + (longlong)iVar10 * 0x28),
               (void *)(param_1[2] + (longlong)*piVar1 * 0x28),(longlong)piVar1[1] * 0x28);
    *piVar1 = iVar10;
    iVar6 = piVar1[1];
  }
  else {
    iVar10 = *piVar1;
  }
  uVar5 = param_3[1];
  lVar7 = (longlong)(iVar10 + iVar6);
  lVar4 = param_1[2];
  puVar2 = (undefined8 *)(lVar4 + lVar7 * 0x28);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  uVar5 = param_3[3];
  puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar7 * 0x28);
  *puVar2 = param_3[2];
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar4 + 0x20 + lVar7 * 0x28) = param_3[4];
  piVar1[1] = piVar1[1] + 1;
  return;
}



// FUNCTION 141f3f760 Add body=333 status=ok
// SIG undefined Add(void)

void TEvaluationTreeEntryContainer<FMovieSceneSubSectionData>::Add
               (longlong *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = (longlong)param_2;
  lVar3 = *param_1;
  iVar10 = *(int *)(lVar3 + 8 + lVar6 * 0xc);
  piVar1 = (int *)(lVar3 + lVar6 * 0xc);
  iVar5 = *(int *)(lVar3 + 4 + lVar6 * 0xc);
  if (iVar10 < iVar5 + 1) {
    iVar10 = iVar10 * 2;
    iVar5 = 2;
    if (1 < iVar10) {
      iVar5 = iVar10;
    }
    piVar1[2] = iVar5;
    iVar10 = (int)param_1[3];
    iVar2 = (int)param_1[3];
    iVar5 = iVar10 + iVar5;
    if (iVar2 < iVar5) {
      *(int *)(param_1 + 3) = iVar5;
      iVar9 = iVar5 - iVar2;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 2);
      }
      puVar8 = (undefined4 *)((longlong)iVar2 * 0x1c + param_1[2]);
      if (iVar9 != 0) {
        puVar7 = puVar8 + 4;
        do {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 7;
          *(undefined8 *)(puVar7 + -3) = 0;
          *(undefined8 *)(puVar7 + -1) = 0;
          puVar7[1] = 0;
          *(undefined1 *)(puVar7 + 2) = 0;
          puVar7 = puVar7 + 7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else if ((iVar5 < iVar2) && (iVar5 != iVar2)) {
      *(int *)(param_1 + 3) = iVar5;
      TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink(param_1 + 2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar10 * 0x1c + param_1[2]),
               (void *)((longlong)*piVar1 * 0x1c + param_1[2]),(longlong)piVar1[1] * 0x1c);
    *piVar1 = iVar10;
    iVar5 = piVar1[1];
  }
  else {
    iVar10 = *piVar1;
  }
  puVar8 = (undefined4 *)((longlong)(iVar10 + iVar5) * 0x1c + param_1[2]);
  *puVar8 = *param_3;
  puVar8[1] = param_3[1];
  uVar4 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(puVar8 + 4) = uVar4;
  *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(param_3 + 6);
  piVar1[1] = piVar1[1] + 1;
  return;
}



// FUNCTION 141f3f8b0 Add body=307 status=ok
// SIG undefined Add(void)

void TEvaluationTreeEntryContainer<FSectionEvaluationData>::Add
               (longlong *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar7 = (longlong)param_2;
  lVar5 = *param_1;
  iVar9 = *(int *)(lVar5 + 8 + lVar7 * 0xc);
  piVar1 = (int *)(lVar5 + lVar7 * 0xc);
  iVar6 = *(int *)(lVar5 + 4 + lVar7 * 0xc);
  if (iVar9 < iVar6 + 1) {
    iVar9 = iVar9 * 2;
    iVar6 = 2;
    if (1 < iVar9) {
      iVar6 = iVar9;
    }
    piVar1[2] = iVar6;
    iVar9 = (int)param_1[3];
    iVar4 = (int)param_1[3];
    iVar6 = iVar9 + iVar6;
    if (iVar4 < iVar6) {
      *(int *)(param_1 + 3) = iVar6;
      iVar8 = iVar6 - iVar4;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar6) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar4);
      }
      puVar2 = (undefined4 *)(param_1[2] + (longlong)iVar4 * 0xc);
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar2 = 0xffffffff;
        puVar2[1] = 0x80000000;
        *(undefined1 *)(puVar2 + 2) = 0;
        puVar2 = puVar2 + 3;
      }
    }
    else if ((iVar6 < iVar4) && (iVar6 != iVar4)) {
      *(int *)(param_1 + 3) = iVar6;
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1 + 2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1[2] + (longlong)iVar9 * 0xc),
               (void *)(param_1[2] + (longlong)*piVar1 * 0xc),(longlong)piVar1[1] * 0xc);
    *piVar1 = iVar9;
    iVar6 = piVar1[1];
  }
  else {
    iVar9 = *piVar1;
  }
  puVar3 = (undefined8 *)(param_1[2] + (longlong)(iVar9 + iVar6) * 0xc);
  *puVar3 = *param_3;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_3 + 1);
  piVar1[1] = piVar1[1] + 1;
  return;
}



// FUNCTION 141f3f9f0 Add body=3 status=ok
// SIG undefined Add(void)

void FMovieSceneBlendTypeField::Add(byte *param_1,byte param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



// FUNCTION 141f3fa00 Add body=644 status=ok
// SIG undefined Add(void)

int * FMovieSceneEvaluationTrackSegments::Add(longlong *param_1,int *param_2,char *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  int *piVar7;
  char cVar8;
  char *pcVar9;
  void *_Src;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int local_res1c;
  char local_res20;
  int local_res24;
  
  cVar6 = *param_3;
  iVar13 = 0;
  if (cVar6 == '\x02') {
LAB_141f3faf5:
    iVar11 = (int)param_1[3];
    if ((iVar13 < iVar11) &&
       (cVar6 = TRange<FFrameNumber>::Overlaps((longlong)iVar13 * 0x58 + param_1[2],param_3),
       cVar6 != '\0')) goto LAB_141f3fb34;
  }
  else {
    iVar13 = *(int *)(param_3 + 4);
    uVar5 = (longlong)(int)param_1[3];
    lVar3 = 0;
    while (uVar5 != 0) {
      local_res20 = cVar6;
      uVar12 = uVar5 >> 1;
      uVar10 = (uint)uVar5;
      local_res24 = iVar13;
      pcVar9 = (char *)((uVar12 + lVar3) * 0x58 + param_1[2]);
      cVar2 = *pcVar9;
      local_res1c = *(int *)(pcVar9 + 4);
      if (cVar2 == '\x02') {
LAB_141f3faa8:
        piVar14 = &local_res1c;
        cVar8 = cVar2;
      }
      else {
        cVar8 = cVar6;
        if (iVar13 < local_res1c) {
          piVar14 = &local_res24;
        }
        else {
          if ((local_res1c < iVar13) || (cVar6 != '\x01')) goto LAB_141f3faa8;
          piVar14 = &local_res24;
        }
      }
      if (((cVar8 == cVar6) && ((cVar8 == '\x02' || (*piVar14 == iVar13)))) &&
         ((cVar6 != cVar2 || (iVar13 != local_res1c)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      uVar5 = uVar12;
      if (!bVar4) {
        lVar3 = (ulonglong)(uVar10 & 1) + uVar12 + lVar3;
      }
    }
    iVar15 = (int)lVar3;
    iVar13 = 0;
    if (iVar15 < 0) goto LAB_141f3faf5;
    iVar11 = (int)param_1[3];
    iVar13 = iVar11;
    if (iVar15 < iVar11) {
      iVar13 = iVar15;
    }
    if (-1 < iVar13) goto LAB_141f3faf5;
  }
  iVar15 = iVar13 + 1;
  if ((iVar15 < 0) ||
     ((iVar11 <= iVar15 ||
      (cVar6 = TRange<FFrameNumber>::Overlaps((longlong)iVar15 * 0x58 + param_1[2],param_3),
      cVar6 == '\0')))) {
    iVar15 = iVar13 + -1;
    if ((-1 < iVar15) &&
       ((iVar15 < iVar11 &&
        (cVar6 = FUN_141f44070((longlong)iVar15 * 0x58 + param_1[2],param_3), cVar6 != '\0')))) {
      iVar13 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar13 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
      }
      lVar3 = *param_1;
      *param_2 = iVar13;
      *(int *)(lVar3 + (longlong)iVar13 * 4) = iVar15;
      return param_2;
    }
    if ((-1 < iVar13) &&
       ((iVar13 < (int)param_1[3] &&
        (cVar6 = FUN_141f44070((longlong)iVar13 * 0x58 + param_1[2],param_3), cVar6 != '\0')))) {
      iVar15 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar15 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar15);
      }
      lVar3 = *param_1;
      *param_2 = iVar15;
      *(int *)(lVar3 + (longlong)iVar15 * 4) = iVar13;
      return param_2;
    }
    piVar7 = (int *)*param_1;
    iVar15 = (int)param_1[1];
    piVar14 = piVar7 + iVar15;
    if (piVar7 != piVar14) {
      do {
        if (iVar13 <= *piVar7) {
          *piVar7 = *piVar7 + 1;
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar14);
      iVar15 = (int)param_1[1];
    }
    *(int *)(param_3 + 0x10) = iVar15;
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    *(int *)(*param_1 + (longlong)iVar11 * 4) = iVar13;
    plVar1 = param_1 + 2;
    iVar11 = (int)param_1[3];
    *(int *)(param_1 + 3) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar11 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
    }
    _Src = (void *)(*plVar1 + (longlong)iVar13 * 0x58);
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 0x58),_Src,(longlong)(iVar11 - iVar13) * 0x58);
    FMovieSceneSegment::FMovieSceneSegment(*plVar1 + (longlong)iVar13 * 0x58,param_3);
    *param_2 = iVar15;
    return param_2;
  }
LAB_141f3fb34:
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f3fc90 Add body=194 status=ok
// SIG undefined Add(void)

void FMovieSceneKeyStructHelper::Add(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar5 = param_2;
    if ((*(byte *)(param_2 + 8) & 2) == 0) {
      puVar5 = (undefined8 *)*param_2;
    }
    if (*(char *)(puVar5 + 2) != '\0') {
      puVar5 = param_2;
      if ((*(byte *)(param_2 + 8) & 2) == 0) {
        puVar5 = (undefined8 *)*param_2;
      }
      if ((undefined4 *)((longlong)puVar5 + 0xc) != param_1) {
        *param_1 = *(undefined4 *)((longlong)puVar5 + 0xc);
        *(undefined1 *)(param_1 + 1) = 1;
      }
    }
  }
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1;
  if ((int)param_1[5] < iVar1 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 2);
  puVar5 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0x48);
  bVar4 = *(byte *)(lVar2 + 0x40 + (longlong)iVar1 * 0x48) & 0xfe;
  *(byte *)(puVar5 + 8) = bVar4 | 2;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    *(byte *)(puVar5 + 8) = bVar4 | 3;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe;
    bVar4 = *(byte *)(param_2 + 8);
    *(byte *)(puVar5 + 8) = *(byte *)(puVar5 + 8) & 0xfd;
    *(byte *)(puVar5 + 8) = *(byte *)(puVar5 + 8) | bVar4 & 2;
    uVar3 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar3;
    uVar3 = param_2[3];
    puVar5[2] = param_2[2];
    puVar5[3] = uVar3;
    uVar3 = param_2[5];
    puVar5[4] = param_2[4];
    puVar5[5] = uVar3;
    uVar3 = param_2[7];
    puVar5[6] = param_2[6];
    puVar5[7] = uVar3;
  }
  return;
}



// FUNCTION 141f3fd60 Add body=570 status=ok
// SIG undefined Add(void)

void FMovieSceneSequenceHierarchy::Add(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  int *local_48;
  int *local_40;
  int local_38 [2];
  longlong local_30;
  undefined8 local_28;
  
  local_48 = param_3;
  local_40 = param_2;
  FUN_141f33b10(param_1,local_res8,&local_48,0);
  piVar6 = (int *)0x0;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar2 = param_1 + 0x88;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)*param_3) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x28);
        if (*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x28) == *param_3) {
          if (iVar1 != -1) goto LAB_141f3fe03;
          break;
        }
        iVar1 = piVar4[8];
      } while (iVar1 != -1);
    }
  }
  piVar4 = piVar6;
LAB_141f3fe03:
  piVar7 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar7 = piVar6;
  }
  if ((piVar7 == (int *)0x0) || (*piVar7 != *param_4)) {
    if (piVar7 == (int *)0x0) {
      local_38[0] = *param_4;
      local_40 = local_38;
      local_30 = 0;
      local_28 = 0;
      local_48 = param_3;
      TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneSequenceHierarchyNode_const_&>_>
                (param_1 + 0x50,local_res8,&local_48,0);
      if (local_30 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
        lVar2 = *(longlong *)(param_1 + 0x90);
        if (*(longlong *)(param_1 + 0x90) == 0) {
          lVar2 = param_1 + 0x88;
        }
        iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)*piVar7) * 4);
        if (iVar1 != -1) {
          do {
            piVar4 = (int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x28);
            if (*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x28) == *piVar7) {
              if (iVar1 != -1) goto LAB_141f3fed4;
              break;
            }
            iVar1 = piVar4[8];
          } while (iVar1 != -1);
        }
      }
      piVar4 = piVar6;
LAB_141f3fed4:
      piVar3 = piVar4 + 4;
      if (piVar4 == (int *)0x0) {
        piVar3 = (int *)&DAT_00000008;
      }
      TArray<unsigned_int,FDefaultAllocator>::Remove(piVar3,param_3);
      *piVar7 = *param_4;
    }
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar2 = param_1 + 0x88;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)*param_4) * 4);
      if (iVar1 != -1) {
        do {
          piVar4 = (int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x28);
          if (*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 0x28) == *param_4) {
            if (iVar1 != -1) goto LAB_141f3ff53;
            break;
          }
          iVar1 = piVar4[8];
        } while (iVar1 != -1);
      }
    }
    piVar4 = piVar6;
LAB_141f3ff53:
    plVar5 = (longlong *)(piVar4 + 4);
    if (piVar4 == (int *)0x0) {
      plVar5 = (longlong *)&DAT_00000008;
    }
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(int *)(*plVar5 + (longlong)iVar1 * 4) = *param_3;
  }
  return;
}



// FUNCTION 141f3ffa0 AddBinding body=232 status=ok
// SIG undefined AddBinding(void)

void UMovieSceneBindingOverrides::AddBinding
               (longlong param_1,undefined4 *param_2,longlong param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_res18 [4];
  undefined4 uStack_44;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  
  if (param_3 != 0) {
    local_res18[0] = *(undefined4 *)(param_1 + 0x38);
    TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
    Emplace<FGuid_const_&,int_const_&>(param_1 + 0x48,param_2 + 2,local_res18);
    uVar2 = *param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 4);
    uStack_44 = CONCAT31(uStack_44._1_3_,*(undefined1 *)(param_2 + 1));
    local_30 = 0xffffffff;
    local_2c = 0;
    local_28 = 1;
    FWeakObjectPtr::operator=(&local_30,param_3);
    iVar3 = *(int *)(param_1 + 0x38);
    local_28 = param_4 ^ 1;
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x30,iVar3);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 0x24);
    *puVar1 = CONCAT44(uStack_44,uVar2);
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *(undefined4 *)(puVar1 + 3) = local_30;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_2c;
    *(byte *)(puVar1 + 4) = local_28;
  }
  return;
}



// FUNCTION 141f40090 AddKeyInternal body=190 status=ok
// SIG undefined AddKeyInternal(void)

ulonglong FMovieSceneChannelData::AddKeyInternal(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)*param_1;
  uVar4 = 0;
  iVar2 = (int)plVar3[1];
  uVar5 = (longlong)iVar2;
  if (iVar2 != 0) {
    do {
      uVar6 = uVar5 >> 1;
      if (*(int *)(*plVar3 + (uVar6 + uVar4) * 4) <= param_2) {
        uVar4 = (ulonglong)((uint)uVar5 & 1) + uVar6 + uVar4;
      }
      uVar5 = uVar6;
    } while (uVar6 != 0);
  }
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  lVar1 = (longlong)(int)uVar4 * 4;
  _Src = (void *)(*plVar3 + lVar1);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar2 - (int)uVar4) << 2);
  *(int *)(lVar1 + *plVar3) = param_2;
  if (param_1[1] != 0) {
    FKeyHandleLookupTable::AllocateHandle(param_1[1],local_res10,uVar4 & 0xffffffff);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 141f40150 AddOwnedTrack body=202 status=ok
// SIG undefined AddOwnedTrack(void)

void FMovieSceneEvaluationTemplateGenerator::AddOwnedTrack
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 *local_28;
  undefined4 *local_20;
  
  puVar1 = (undefined4 *)(param_3 + 0x28);
  FUN_14161cb00(param_1 + 0x18,local_res8,puVar1,0);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(int *)(lVar2 + 0x188) = *(int *)(lVar2 + 0x188) + 1;
  local_res8[0] = *(undefined4 *)(lVar2 + 0x188);
  FMovieSceneEvaluationTrack::SetupOverrides(param_2);
  local_28 = local_res8;
  local_20 = (undefined4 *)param_2;
  FUN_141f33f80(lVar2,local_res10,&local_28,0);
  local_res10[0] = local_res8[0];
  TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 400,local_res18,puVar1);
  local_20 = local_res10;
  local_28 = puVar1;
  FUN_141f328d0(lVar2 + 400,local_res18,&local_28,0);
  FUN_141f47e50(lVar2,local_res8[0],1);
  return;
}



// FUNCTION 141f40220 AddPtrsToGroup body=336 status=ok
// SIG undefined AddPtrsToGroup(void)

void FMovieSceneCompiler::AddPtrsToGroup(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 1);
  if ((iVar1 != 0) || (*(int *)(param_3 + 1) != 0)) {
    lVar4 = param_1[3];
    iVar5 = (int)param_1[1];
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    lVar3 = *param_1;
    *(ulonglong *)(lVar3 + (longlong)iVar5 * 0xc) = CONCAT44(iVar1,(int)lVar4);
    *(undefined4 *)(lVar3 + 8 + (longlong)iVar5 * 0xc) = uVar2;
    iVar1 = *(int *)(param_2 + 1);
    if (iVar1 != 0) {
      iVar5 = (int)param_1[3];
      if (*(int *)((longlong)param_1 + 0x1c) < iVar5 + iVar1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 2);
        iVar5 = (int)param_1[3];
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(param_1[2] + (longlong)iVar5 * 0xc),(void *)*param_2,(longlong)iVar1 * 0xc
                );
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar1;
    }
    iVar1 = *(int *)(param_3 + 1);
    if (iVar1 != 0) {
      iVar5 = (int)param_1[3];
      if (*(int *)((longlong)param_1 + 0x1c) < iVar5 + iVar1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 2);
        iVar5 = (int)param_1[3];
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(param_1[2] + (longlong)iVar5 * 0xc),(void *)*param_3,(longlong)iVar1 * 0xc
                );
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_2,0);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if ((*(int *)((longlong)param_3 + 0xc) < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_3,0);
    }
  }
  return;
}



// FUNCTION 141f40370 AddSection body=126 status=ok
// SIG undefined AddSection(void)

void UMovieSceneSubTrack::AddSection(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = UMovieSceneSubSection::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar1 + 1;
    if (*(int *)(param_1 + 100) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 141f403f0 AddSequence body=26 status=ok
// SIG undefined AddSequence(void)

void UMovieSceneSubTrack::AddSequence(longlong *param_1)

{
  (**(code **)(*param_1 + 0x318))();
  return;
}



// FUNCTION 141f40410 FUN_141f40410 body=384 status=ok
// SIG undefined FUN_141f40410(void)

longlong * FUN_141f40410(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  (**(code **)(*param_1 + 0x70))(param_1,1);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2e8))(param_1);
  plVar3[0x21] = param_2;
  if ((*(uint *)(plVar3 + 1) >> 9 & 1) == 0) {
    if ((*(uint *)(plVar3 + 0x16) >> 1 & 1) != 0) goto LAB_141f40492;
    (**(code **)(*plVar3 + 0x70))(plVar3,1);
  }
  *(undefined1 *)(plVar3 + 0x12) = 1;
  *(int *)((longlong)plVar3 + 0x94) = param_3;
  *(undefined1 *)(plVar3 + 0x13) = 0;
  *(int *)((longlong)plVar3 + 0x9c) = param_3 + param_4;
LAB_141f40492:
  uVar6 = 0;
  if (param_5 == -1) {
    param_5 = 0;
    *(undefined4 *)(plVar3 + 0x15) = 0;
    lVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1 + 0xb,0,0);
    while (lVar4 != 0) {
      param_5 = param_5 + 1;
      *(int *)(plVar3 + 0x15) = param_5;
      lVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1 + 0xb,0,0);
    }
  }
  *(int *)(plVar3 + 0x15) = param_5;
  lVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1 + 0xb,0,0);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)param_1[0xb];
    uVar7 = (longlong)(int)param_1[0xc] & 0x1fffffffffffffff;
    if (puVar5 + (int)param_1[0xc] < puVar5) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        plVar2 = (longlong *)*puVar5;
        if ((plVar2 != plVar3) && (param_5 <= (int)plVar2[0x15])) {
          *(int *)(plVar2 + 0x15) = (int)plVar2[0x15] + 1;
        }
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
  }
  iVar1 = (int)param_1[0xc];
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar1);
  }
  *(longlong **)(param_1[0xb] + (longlong)iVar1 * 8) = plVar3;
  return plVar3;
}



// FUNCTION 141f40590 FUN_141f40590 body=321 status=ok
// SIG undefined FUN_141f40590(void)

longlong * FUN_141f40590(longlong *param_1)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  (**(code **)(*param_1 + 0x70))(param_1,1);
  lVar6 = param_1[4];
  puVar1 = (ulonglong *)(param_1 + 0xb);
  plVar7 = (longlong *)*puVar1;
  uVar9 = 0;
  iVar8 = -1;
  uVar2 = *(undefined1 *)(lVar6 + 0xa8);
  uVar4 = *(undefined4 *)(lVar6 + 0xac);
  uVar3 = *(undefined1 *)(lVar6 + 0xb0);
  uVar5 = *(undefined4 *)(lVar6 + 0xb4);
  uVar10 = (longlong)(int)param_1[0xc] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_1[0xc] < plVar7) {
    uVar10 = uVar9;
  }
  if (uVar10 != 0) {
    do {
      lVar6 = *plVar7;
      plVar7 = plVar7 + 1;
      if (iVar8 <= *(int *)(lVar6 + 0xa8)) {
        iVar8 = *(int *)(lVar6 + 0xa8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2e8))(param_1);
  *(int *)(plVar7 + 0x15) = iVar8 + 1;
  FWeakObjectPtr::operator=(&DAT_1464d3e30,plVar7);
  if ((*(uint *)(plVar7 + 1) >> 9 & 1) == 0) {
    if ((*(uint *)(plVar7 + 0x16) >> 1 & 1) != 0) goto LAB_141f4068f;
    (**(code **)(*plVar7 + 0x70))(plVar7,1);
  }
  *(undefined1 *)(plVar7 + 0x12) = uVar2;
  *(undefined4 *)((longlong)plVar7 + 0x94) = uVar4;
  *(undefined1 *)(plVar7 + 0x13) = uVar3;
  *(undefined4 *)((longlong)plVar7 + 0x9c) = uVar5;
LAB_141f4068f:
  iVar8 = (int)param_1[0xc];
  *(int *)(param_1 + 0xc) = iVar8 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar8 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar8);
  }
  *(longlong **)(*puVar1 + (longlong)iVar8 * 8) = plVar7;
  return plVar7;
}



// FUNCTION 141f406e0 AddSubSectionRange body=443 status=ok
// SIG undefined AddSubSectionRange(void)

void FMovieSceneEvaluationTemplate::AddSubSectionRange
               (longlong param_1,longlong param_2,undefined8 *param_3,char *param_4,
               undefined1 param_5)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined1 local_98 [8];
  char local_90 [4];
  int local_8c;
  char local_88;
  int local_84;
  undefined8 local_78;
  char *pcStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined **local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  if ((*param_4 != '\x02') && (param_4[8] != '\x02')) {
    FWeakObjectPtr::operator=(&local_78);
    local_40 = *(undefined4 *)param_3;
    uStack_3c = *(undefined4 *)((longlong)param_3 + 4);
    pcStack_70 = (char *)*param_3;
    uStack_68 = *(undefined4 *)(param_3 + 1);
    uStack_64 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_58 = &PTR_FUN_144f1c860;
    local_50 = param_1 + 0x290;
    local_48 = (undefined4)local_78;
    local_44 = local_78._4_4_;
    local_90[0] = *param_4;
    local_8c = *(int *)(param_4 + 4);
    local_88 = param_4[8];
    local_84 = *(int *)(param_4 + 0xc);
    local_60 = param_5;
    local_30 = param_5;
    local_res20 = 0xffffffff;
    uStackX_24 = 0;
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    FMovieSceneEvaluationTree::AddTimeRange(local_50,local_90,&local_58,0xffffffff);
    piVar3 = (int *)TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x1e0,&local_res20,param_2 + 0x28);
    if (*piVar3 == -1) {
      pcStack_70 = local_90;
      iVar5 = *(int *)(param_2 + 0x94) - *(int *)(param_2 + 0xa0);
      iVar4 = *(int *)(param_2 + 0x9c) + *(int *)(param_2 + 0xa4);
      cVar1 = *(char *)(param_2 + 0x90);
      uVar2 = *(undefined1 *)(param_2 + 0x98);
      local_90[0] = cVar1;
      local_8c = iVar5;
      local_88 = uVar2;
      local_84 = iVar4;
      local_78 = (undefined4 *)(param_2 + 0x28);
      FUN_141f32680(param_1 + 0x1e0,local_98,&local_78,0);
      local_90[0] = cVar1;
      local_8c = iVar5;
      local_88 = uVar2;
      local_84 = iVar4;
      FMovieSceneEvaluationField::Invalidate(param_1 + 0xa0,local_90);
      UMovieSceneSubSection::GetSequenceID(param_2,&local_res20);
      local_78 = &local_res20;
      pcStack_70 = (char *)CONCAT44(pcStack_70._4_4_,1);
      FMovieSceneSequenceHierarchy::Remove(param_1 + 0xd0,&local_78);
    }
  }
  return;
}



// FUNCTION 141f408a0 AddTimeRange body=1626 status=ok
// SIG undefined AddTimeRange(void)

void FMovieSceneEvaluationTree::AddTimeRange
               (char *param_1,char *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  char cVar14;
  int iVar15;
  int local_a8;
  char local_90 [4];
  int local_8c;
  char local_88 [4];
  int local_84;
  char local_80 [4];
  int local_7c;
  char local_78;
  int local_74;
  char local_70 [4];
  int local_6c;
  char local_68;
  int local_64;
  char local_60 [4];
  int local_5c;
  char local_58 [4];
  int local_54;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  
  iVar15 = (int)param_4;
  iVar10 = (int)((ulonglong)param_4 >> 0x20);
  pcVar12 = param_1;
  if (iVar15 != -1) {
    pcVar12 = (char *)(((longlong)*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar15 * 0xc) +
                       (longlong)iVar10) * 0x20 + *(longlong *)(param_1 + 0x30));
  }
  local_60[0] = *pcVar12;
  local_5c = *(int *)(pcVar12 + 4);
  local_58[0] = pcVar12[8];
  local_54 = *(int *)(pcVar12 + 0xc);
  local_50 = *(undefined8 *)(pcVar12 + 0x10);
  local_48 = *(int *)(pcVar12 + 0x18);
  local_44 = *(undefined4 *)(pcVar12 + 0x1c);
  cVar8 = TRange<FFrameNumber>::Overlaps(local_60,param_2);
  if (cVar8 == '\0') {
    return;
  }
  cVar8 = TRange<FFrameNumber>::Contains();
  if (cVar8 != '\0') {
    if (iVar15 != -1) {
      param_1 = (char *)(((longlong)*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar15 * 0xc)
                         + (longlong)iVar10) * 0x20 + *(longlong *)(param_1 + 0x30));
    }
                    /* WARNING: Could not recover jumptable at 0x000141f40988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3,param_1);
    return;
  }
  if (local_48 != -1) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar1 = (longlong)local_48 * 0xc;
    local_a8 = 0;
    cVar8 = local_60[0];
    cVar14 = local_60[0];
    iVar10 = local_5c;
    iVar15 = local_5c;
    if (0 < *(int *)(lVar9 + 4 + lVar1)) {
      do {
        pcVar12 = (char *)(((longlong)*(int *)(lVar1 + lVar9) + (longlong)local_a8) * 0x20 +
                          *(longlong *)(param_1 + 0x30));
        cVar2 = *pcVar12;
        iVar10 = *(int *)(pcVar12 + 0xc);
        iVar3 = *(int *)(pcVar12 + 4);
        cVar8 = pcVar12[8];
        if (cVar2 == '\x02') {
LAB_141f40c77:
          cVar14 = *param_2;
          if (((cVar14 == '\x02') || (param_2[8] == '\x02')) ||
             ((*(int *)(param_2 + 4) <= *(int *)(param_2 + 0xc) &&
              ((*(int *)(param_2 + 4) != *(int *)(param_2 + 0xc) ||
               ((cVar14 != '\0' && (param_2[8] != '\0')))))))) {
            if ((cVar8 == '\x02') || (cVar14 == '\x02')) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if ((cVar2 == '\x02') || (param_2[8] == '\x02')) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            bVar5 = true;
            if (!bVar6) {
              if ((cVar8 == '\x01') && (cVar14 == '\x01')) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              bVar5 = *(int *)(param_2 + 4) < iVar10;
              if (bVar6) {
                bVar5 = *(int *)(param_2 + 4) <= iVar10;
              }
            }
            bVar6 = true;
            if (!bVar7) {
              if ((cVar2 == '\x01') && (param_2[8] == '\x01')) {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              bVar6 = iVar3 < *(int *)(param_2 + 0xc);
              if (bVar7) {
                bVar6 = iVar3 <= *(int *)(param_2 + 0xc);
              }
            }
            if ((bVar5) && (bVar6)) {
              local_6c = *(int *)(param_2 + 4);
              local_68 = param_2[8];
              local_64 = *(int *)(param_2 + 0xc);
              local_70[0] = cVar14;
              AddTimeRange(param_1,local_70,param_3);
            }
          }
LAB_141f40d78:
          if (cVar8 == '\0') goto LAB_141f40d7d;
          if (cVar8 == '\x01') {
            cVar8 = '\0';
          }
        }
        else {
          if (cVar2 == '\0') {
            local_88[0] = '\x01';
          }
          else {
            local_88[0] = cVar2;
            if (cVar2 == '\x01') {
              local_88[0] = '\0';
            }
          }
          local_84 = iVar3;
          local_8c = iVar15;
          local_90[0] = cVar14;
          if ((((cVar14 == '\x02') || (local_88[0] == '\x02')) ||
              ((iVar15 <= iVar3 &&
               ((iVar15 != iVar3 || ((cVar14 != '\0' && (local_88[0] != '\0')))))))) &&
             (((cVar11 = *param_2, cVar11 == '\x02' || (param_2[8] == '\x02')) ||
              ((*(int *)(param_2 + 4) <= *(int *)(param_2 + 0xc) &&
               ((*(int *)(param_2 + 4) != *(int *)(param_2 + 0xc) ||
                ((cVar11 != '\0' && (param_2[8] != '\0')))))))))) {
            pcVar12 = param_2 + 8;
            pcVar13 = pcVar12;
            if (local_88[0] != '\x02') {
              if (*pcVar12 == '\x02') {
                pcVar13 = local_88;
              }
              else if (iVar3 < *(int *)(param_2 + 0xc)) {
                pcVar13 = local_88;
              }
              else if ((iVar3 <= *(int *)(param_2 + 0xc)) &&
                      (pcVar13 = local_88, local_88[0] != '\0')) {
                pcVar13 = pcVar12;
              }
            }
            pcVar12 = param_2;
            if (cVar14 != '\x02') {
              if (cVar11 == '\x02') {
                pcVar12 = local_90;
                cVar11 = cVar14;
              }
              else if (*(int *)(param_2 + 4) < iVar15) {
                pcVar12 = local_90;
                cVar11 = cVar14;
              }
              else if ((*(int *)(param_2 + 4) <= iVar15) && (cVar14 == '\0')) {
                cVar11 = '\0';
                pcVar12 = local_90;
              }
            }
            iVar15 = *(int *)(pcVar12 + 4);
            cVar14 = *pcVar13;
            iVar4 = *(int *)(pcVar13 + 4);
            if (((cVar11 == '\x02') || (cVar14 == '\x02')) ||
               ((iVar15 <= iVar4 && ((iVar15 != iVar4 || ((cVar11 != '\0' && (cVar14 != '\0'))))))))
            {
              local_80[0] = cVar11;
              local_7c = iVar15;
              local_78 = cVar14;
              local_74 = iVar4;
              InsertNewChild(param_1,local_80,param_3,local_a8,param_4);
              local_a8 = local_a8 + 1;
            }
          }
          if ((cVar2 == '\x02') || (cVar8 == '\x02')) goto LAB_141f40c77;
          if (iVar10 < iVar3) goto LAB_141f40d78;
          if (iVar3 != iVar10) goto LAB_141f40c77;
          if (cVar2 == '\0') goto LAB_141f40d78;
          if (cVar8 != '\0') goto LAB_141f40c77;
LAB_141f40d7d:
          cVar8 = '\x01';
        }
        local_a8 = local_a8 + 1;
        lVar9 = *(longlong *)(param_1 + 0x20);
        cVar14 = cVar8;
        iVar15 = iVar10;
      } while (local_a8 < *(int *)(lVar9 + 4 + lVar1));
    }
    if (cVar8 == '\x02') {
      return;
    }
    local_8c = iVar10;
    local_88[0] = local_58[0];
    local_84 = local_54;
    if (local_58[0] != '\x02') {
      if (local_54 < iVar10) {
        return;
      }
      if (iVar10 == local_54) {
        if (cVar8 == '\0') {
          return;
        }
        if (local_58[0] == '\0') {
          return;
        }
      }
    }
    local_70[0] = *param_2;
    if ((local_70[0] != '\x02') && (param_2[8] != '\x02')) {
      if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 4)) {
        return;
      }
      if (*(int *)(param_2 + 4) == *(int *)(param_2 + 0xc)) {
        if (local_70[0] == '\0') {
          return;
        }
        if (param_2[8] == '\0') {
          return;
        }
      }
    }
    pcVar12 = param_2 + 8;
    pcVar13 = pcVar12;
    if (local_58[0] != '\x02') {
      if (*pcVar12 == '\x02') {
        pcVar13 = local_88;
      }
      else if (local_54 < *(int *)(param_2 + 0xc)) {
        pcVar13 = local_88;
      }
      else if ((local_54 <= *(int *)(param_2 + 0xc)) && (pcVar13 = local_88, local_58[0] != '\0')) {
        pcVar13 = pcVar12;
      }
    }
    if (local_70[0] == '\x02') {
      param_2 = local_90;
      local_70[0] = cVar8;
    }
    else if (*(int *)(param_2 + 4) < iVar10) {
      param_2 = local_90;
      local_70[0] = cVar8;
    }
    else if ((*(int *)(param_2 + 4) <= iVar10) && (cVar8 == '\0')) {
      param_2 = local_90;
      local_70[0] = cVar8;
    }
    local_6c = *(int *)(param_2 + 4);
    local_68 = *pcVar13;
    local_64 = *(int *)(pcVar13 + 4);
    if ((local_70[0] != '\x02') && (local_68 != '\x02')) {
      if (local_64 < local_6c) {
        return;
      }
      if (local_6c == local_64) {
        if (local_70[0] == '\0') {
          return;
        }
        if (local_68 == '\0') {
          return;
        }
      }
    }
    local_90[0] = cVar8;
    InsertNewChild(param_1,local_70,param_3,
                   *(undefined4 *)(lVar1 + 4 + *(longlong *)(param_1 + 0x20)),param_4);
    return;
  }
  if ((((local_60[0] != '\x02') && (local_58[0] != '\x02')) &&
      ((local_54 < local_5c ||
       ((local_5c == local_54 && ((local_60[0] == '\0' || (local_58[0] == '\0')))))))) ||
     (((local_90[0] = *param_2, local_90[0] != '\x02' && (param_2[8] != '\x02')) &&
      ((*(int *)(param_2 + 0xc) < *(int *)(param_2 + 4) ||
       ((*(int *)(param_2 + 4) == *(int *)(param_2 + 0xc) &&
        ((local_90[0] == '\0' || (param_2[8] == '\0')))))))))) {
    local_84 = 0;
    local_90[0] = '\0';
    local_8c = 0;
    local_88[0] = '\0';
    goto LAB_141f40a58;
  }
  pcVar12 = param_2 + 8;
  pcVar13 = pcVar12;
  if (local_58[0] != '\x02') {
    if (*pcVar12 == '\x02') {
      pcVar13 = local_58;
    }
    else if (local_54 < *(int *)(param_2 + 0xc)) {
      pcVar13 = local_58;
    }
    else if ((local_54 <= *(int *)(param_2 + 0xc)) && (pcVar13 = local_58, local_58[0] != '\0')) {
      pcVar13 = pcVar12;
    }
  }
  if (local_60[0] != '\x02') {
    cVar8 = local_60[0];
    if ((local_90[0] != '\x02') && (local_5c <= *(int *)(param_2 + 4))) {
      if ((local_5c < *(int *)(param_2 + 4)) || (local_60[0] != '\0')) goto LAB_141f40a4e;
      cVar8 = '\0';
    }
    param_2 = local_60;
    local_90[0] = cVar8;
  }
LAB_141f40a4e:
  local_88[0] = *pcVar13;
  local_84 = *(int *)(pcVar13 + 4);
  local_8c = *(int *)(param_2 + 4);
LAB_141f40a58:
  InsertNewChild(param_1,local_90,param_3,0,param_4);
  return;
}



// FUNCTION 141f40f00 AddTo body=260 status=ok
// SIG undefined AddTo(void)

void TBlendableToken<int>::TData<int>::AddTo
               (longlong param_1,double *param_2,float param_3,char param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_4 == '\x01') {
    dVar3 = (double)iVar1 * (double)param_3;
    if (((ulonglong)param_2[1] & 1) != 0) {
      dVar3 = dVar3 + *param_2;
    }
    *param_2 = dVar3;
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 1;
  }
  else {
    if (param_4 != '\x04') {
      if (param_4 != '\x02') {
        return;
      }
      dVar3 = (double)iVar1 * (double)param_3;
      if (((ulonglong)param_2[4] & 1) != 0) {
        dVar3 = dVar3 + param_2[3];
      }
      param_2[3] = dVar3;
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
      return;
    }
    if (*(char *)(param_2 + 7) == '\0') {
      *(undefined4 *)(param_2 + 6) = 0;
      *(undefined1 *)(param_2 + 7) = 1;
      uVar2 = TMovieSceneInitialValueStore<int>::GetInitialValue(param_5);
      MovieScene::MultiChannelFromData(uVar2,param_2 + 5);
    }
    dVar3 = ((double)iVar1 + param_2[5]) * (double)param_3;
    if (((ulonglong)param_2[1] & 1) != 0) {
      dVar3 = dVar3 + *param_2;
    }
    *param_2 = dVar3;
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 1;
  }
  *(float *)(param_2 + 2) = param_3 + *(float *)(param_2 + 2);
  return;
}



// FUNCTION 141f41010 AddUninitialized body=210 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x1c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x1c + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 141f410f0 All body=51 status=ok
// SIG undefined All(void)

byte * FMovieSceneBlendTypeField::All(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  byte local_res8 [32];
  
  *param_1 = 0;
  pbVar2 = local_res8;
  local_res8[0] = 1;
  local_res8[1] = 2;
  lVar3 = 3;
  local_res8[2] = 4;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *param_1 = *param_1 | bVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 141f41130 FKeyHandle body=20 status=ok
// SIG undefined FKeyHandle(void)

int * FKeyHandle::FKeyHandle(int *param_1)

{
  DAT_146aca2b4 = DAT_146aca2b4 + 1;
  *param_1 = DAT_146aca2b4;
  return param_1;
}



// FUNCTION 141f41150 AllocateEntry body=216 status=ok
// SIG undefined AllocateEntry(void)

int * TEvaluationTreeEntryContainer<FSectionEvaluationData>::AllocateEntry
                (longlong *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = (int)param_1[1];
  uVar3 = *(uint *)(param_1 + 3);
  *param_2 = iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  *(ulonglong *)(lVar4 + (longlong)iVar2 * 0xc) = (ulonglong)uVar3;
  *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = param_3;
  param_3 = (int)param_1[3] + param_3;
  iVar2 = (int)param_1[3];
  if (iVar2 < param_3) {
    *(int *)(param_1 + 3) = param_3;
    iVar5 = param_3 - iVar2;
    if (*(int *)((longlong)param_1 + 0x1c) < param_3) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
    }
    puVar1 = (undefined4 *)(param_1[2] + (longlong)iVar2 * 0xc);
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar1 = 0xffffffff;
      puVar1[1] = 0x80000000;
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 3;
    }
  }
  else if ((param_3 < iVar2) && (param_3 != iVar2)) {
    *(int *)(param_1 + 3) = param_3;
    TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1 + 2);
  }
  return param_2;
}



// FUNCTION 141f41230 Apply body=2282 status=ok
// SIG undefined Apply(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneBlendingAccumulator::Apply
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_178;
  uint *puStack_170;
  uint local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined8 uStack_150;
  uint *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [4];
  uint *local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  iVar6 = 0;
  local_e0 = param_1 + 0xa0;
  local_178 = 0;
  puStack_170 = (uint *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_168 = 0;
  local_100 = param_1;
  local_f8 = param_3;
  local_f0 = param_2;
  FMovieSceneAccumulatedBlendState::Consolidate(local_e0,&local_a8,&local_178);
  plVar1 = (longlong *)(param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x78);
  puVar15 = (uint *)(param_1 + 0x60);
  local_178._0_4_ = 0;
  local_178._4_4_ = 1;
  uStack_164 = 0;
  iStack_160 = 0;
  if (uVar5 != 0) {
    puVar16 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar16 = puVar15;
    }
    uVar7 = *puVar16;
    iStack_160 = iVar6;
    local_178._0_4_ = iVar6;
    while (uVar7 == 0) {
      lVar13 = (longlong)(int)local_178;
      iStack_160 = iStack_160 + 0x20;
      iVar8 = (int)local_178 + 1;
      bVar4 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_178;
      local_178._0_4_ = iVar8;
      if (bVar4) goto LAB_141f41382;
      uVar7 = puVar16[lVar13 + 1];
    }
    local_178._4_4_ = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (local_178._4_4_ != 0) {
      for (; local_178._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_178._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_164 = (iStack_160 - iVar8) + 0x1f;
    if ((int)uVar5 < (int)uStack_164) {
LAB_141f41382:
      uStack_164 = uVar5;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x78);
  uStack_140._0_4_ = 0xffffffff;
  uStack_140._4_4_ = uStack_164;
  local_138 = CONCAT44(uStack_15c,iStack_160);
  uStack_128._0_4_ = (int)local_178;
  uStack_128._4_4_ = local_178._4_4_;
  uVar14 = uVar7 & 0xffffffe0;
  uStack_150._0_4_ = (int)local_178;
  uStack_150._4_4_ = local_178._4_4_;
  uStack_164 = uVar7;
  local_158 = plVar1;
  local_148 = puVar15;
  local_130 = plVar1;
  puStack_120 = puVar15;
  uStack_110 = local_138;
  local_108 = plVar1;
  uStack_118._0_4_ = (uint)uStack_140;
  uStack_118._4_4_ = uStack_140._4_4_;
  if (uVar7 != uVar5) {
    puVar16 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar16 = puVar15;
    }
    uVar12 = puVar16[(int)uVar7 >> 5] & -1 << ((byte)uVar7 & 0x1f);
    iVar8 = (int)uVar7 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141f41455;
      uVar12 = puVar16[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar8 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_164 = (uVar14 - iVar8) + 0x1f;
    uVar7 = uStack_164;
    if ((int)uVar5 < (int)uStack_164) {
LAB_141f41455:
      uStack_164 = uVar5;
      uVar7 = uVar5;
    }
  }
  while (((uStack_140._4_4_ != uVar7 || (local_148 != puVar15)) || (local_158 != plVar1))) {
    puVar9 = (undefined8 *)((longlong)(int)uStack_140._4_4_ * 0x30 + *local_158);
    local_178 = *puVar9;
    puStack_170 = (uint *)puVar9[1];
    local_168 = *(uint *)(puVar9 + 2);
    FMovieSceneAccumulatedBlendState::Consolidate(puVar9 + 3,&local_a8,&local_178);
    uStack_140._0_4_ = (uint)uStack_140 & ~uStack_150._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
  }
  puStack_170 = local_98;
  local_178 = 0x100000000;
  uStack_164 = 0;
  iStack_160 = 0;
  if ((uint)local_80 != 0) {
    puVar15 = local_98;
    if (local_88 != (uint *)0x0) {
      puVar15 = local_88;
    }
    uVar5 = *puVar15;
    iStack_160 = iVar6;
    while (uVar5 == 0) {
      iStack_160 = iStack_160 + 0x20;
      local_178._4_4_ = (uint)((ulonglong)local_178 >> 0x20);
      local_178 = CONCAT44(local_178._4_4_,iVar6 + 1);
      if ((int)(((uint)local_80 - 1) + ((int)((uint)local_80 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) {
        uStack_164 = (uint)local_80;
        goto LAB_141f4157b;
      }
      uVar5 = puVar15[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_178 = CONCAT44(uVar5,(int)local_178);
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_164 = (iStack_160 - iVar6) + 0x1f;
    if ((int)(uint)local_80 < (int)uStack_164) {
      uStack_164 = (uint)local_80;
    }
  }
LAB_141f4157b:
  uStack_140 = CONCAT44(uStack_164,0xffffffff);
  local_138 = CONCAT44(uStack_15c,iStack_160);
  uStack_164 = (uint)local_80;
  local_168 = -1 << ((byte)local_80 & 0x1f);
  local_158 = &local_a8;
  uStack_150 = local_178;
  local_e8 = local_80 & 0xffffffff;
  uStack_128 = local_178;
  local_148 = puStack_170;
  local_130 = local_158;
  puStack_120 = puStack_170;
  uStack_118 = uStack_140;
  uStack_110 = local_138;
  while( true ) {
    if (((uStack_118._4_4_ == (int)local_e8) && (puStack_120 == local_98)) &&
       (local_130 == &local_a8)) break;
    puVar9 = (undefined8 *)((longlong)(int)uStack_118._4_4_ * 0x60 + *local_130);
    uVar3 = *puVar9;
    plVar1 = puVar9 + 1;
    uVar5 = *(uint *)(puVar9 + 6);
    puVar15 = (uint *)(puVar9 + 3);
    local_178 = 0x100000000;
    uStack_164 = 0;
    iStack_160 = 0;
    if (uVar5 != 0) {
      puVar16 = (uint *)puVar9[5];
      if ((uint *)puVar9[5] == (uint *)0x0) {
        puVar16 = puVar15;
      }
      uVar7 = *puVar16;
      iStack_160 = 0;
      iVar6 = 0;
      while (uVar7 == 0) {
        iStack_160 = iStack_160 + 0x20;
        local_178._4_4_ = (uint)((ulonglong)local_178 >> 0x20);
        local_178 = CONCAT44(local_178._4_4_,iVar6 + 1);
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_141f416c1;
        uVar7 = puVar16[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar6 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_178 = CONCAT44(uVar7,(int)local_178);
      if (uVar7 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_164 = (iStack_160 - iVar6) + 0x1f;
      if ((int)uVar5 < (int)uStack_164) {
LAB_141f416c1:
        uStack_164 = uVar5;
      }
    }
    uVar7 = *(uint *)(puVar9 + 6);
    uStack_140 = CONCAT44(uStack_164,0xffffffff);
    local_138 = CONCAT44(uStack_15c,iStack_160);
    local_168 = -1 << ((byte)uVar7 & 0x1f);
    uStack_d0 = local_178;
    uVar14 = uVar7 & 0xffffffe0;
    uStack_150 = local_178;
    puStack_170 = puVar15;
    uStack_164 = uVar7;
    local_158 = plVar1;
    local_148 = puVar15;
    local_d8 = plVar1;
    puStack_c8 = puVar15;
    uStack_c0 = uStack_140;
    uStack_b8 = local_138;
    if (uVar7 != uVar5) {
      puVar16 = (uint *)puVar9[5];
      if ((uint *)puVar9[5] == (uint *)0x0) {
        puVar16 = puVar15;
      }
      uVar12 = puVar16[(int)uVar7 >> 5] & local_168;
      iVar6 = (int)uVar7 >> 5;
      while (uVar12 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_141f41795;
        uVar12 = puVar16[(longlong)iVar6 + 1];
        local_168 = 0xffffffff;
        iVar6 = iVar6 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar6 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_164 = (uVar14 - iVar6) + 0x1f;
      uVar7 = uStack_164;
      if ((int)uVar5 < (int)uStack_164) {
LAB_141f41795:
        uStack_164 = uVar5;
        uVar7 = uVar5;
      }
    }
    while( true ) {
      if (((uStack_140._4_4_ == uVar7) && (local_148 == puVar15)) && (local_158 == plVar1)) break;
      lVar13 = (longlong)(int)uStack_140._4_4_ * 0x38 + *local_158;
      plVar10 = (longlong *)(lVar13 + 8);
      if ((*(byte *)(lVar13 + 0x28) & 2) == 0) {
        plVar10 = (longlong *)*plVar10;
      }
      local_190 = local_f8;
      local_198 = local_f0;
      local_188 = param_4;
      (**(code **)(*plVar10 + 8))(plVar10,uVar3);
      uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_150._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
    }
    uStack_118 = CONCAT44(uStack_118._4_4_,(uint)uStack_118 & ~uStack_128._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_128);
  }
  FMovieSceneAccumulatedBlendState::Reset();
  plVar1 = local_108;
  uVar5 = *(uint *)(local_108 + 5);
  puVar15 = (uint *)(local_108 + 2);
  local_178._0_4_ = 0;
  local_178._4_4_ = 1;
  uStack_164 = 0;
  iStack_160 = 0;
  if (uVar5 != 0) {
    puVar16 = (uint *)local_108[4];
    if ((uint *)local_108[4] == (uint *)0x0) {
      puVar16 = puVar15;
    }
    uVar7 = *puVar16;
    iStack_160 = 0;
    local_178._0_4_ = 0;
    while (uVar7 == 0) {
      lVar13 = (longlong)(int)local_178;
      iStack_160 = iStack_160 + 0x20;
      iVar6 = (int)local_178 + 1;
      bVar4 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_178;
      local_178._0_4_ = iVar6;
      if (bVar4) goto LAB_141f418f3;
      uVar7 = puVar16[lVar13 + 1];
    }
    local_178._4_4_ = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (local_178._4_4_ != 0) {
      for (; local_178._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_178._4_4_ == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_164 = (iStack_160 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_164) {
LAB_141f418f3:
      uStack_164 = uVar5;
    }
  }
  uVar7 = *(uint *)(local_108 + 5);
  uStack_118._0_4_ = 0xffffffff;
  uStack_118._4_4_ = uStack_164;
  uStack_110 = CONCAT44(uStack_15c,iStack_160);
  local_d8 = local_108;
  local_168 = -1 << ((byte)uVar7 & 0x1f);
  uStack_d0._0_4_ = (int)local_178;
  uStack_d0._4_4_ = local_178._4_4_;
  uVar14 = uVar7 & 0xffffffe0;
  local_130 = local_108;
  uStack_128 = CONCAT44(local_178._4_4_,(int)local_178);
  puStack_170 = puVar15;
  uStack_164 = uVar7;
  puStack_120 = puVar15;
  puStack_c8 = puVar15;
  uStack_b8 = uStack_110;
  uStack_c0._0_4_ = (uint)uStack_118;
  uStack_c0._4_4_ = uStack_118._4_4_;
  if (uVar7 != uVar5) {
    puVar16 = (uint *)local_108[4];
    if ((uint *)local_108[4] == (uint *)0x0) {
      puVar16 = puVar15;
    }
    uVar12 = puVar16[(int)uVar7 >> 5] & local_168;
    iVar6 = (int)uVar7 >> 5;
    while (uVar12 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141f419c4;
      uVar12 = puVar16[(longlong)iVar6 + 1];
      local_168 = 0xffffffff;
      iVar6 = iVar6 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar6 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_164 = (uVar14 - iVar6) + 0x1f;
    uVar7 = uStack_164;
    if ((int)uVar5 < (int)uStack_164) {
LAB_141f419c4:
      uStack_164 = uVar5;
      uVar7 = uVar5;
    }
  }
  while (((uStack_118._4_4_ != uVar7 || (puStack_120 != puVar15)) || (local_130 != plVar1))) {
    lVar13 = (longlong)(int)uStack_118._4_4_ * 0x30 + *local_130;
    iVar6 = *(int *)(lVar13 + 0x24);
    puVar9 = *(undefined8 **)(lVar13 + 0x18);
    iVar8 = *(int *)(lVar13 + 0x20);
    if (iVar6 < 0) {
      if (iVar8 != 0) {
        do {
          bVar2 = *(byte *)(puVar9 + 8);
          if ((bVar2 & 1) != 0) {
            puVar11 = puVar9;
            if ((bVar2 & 2) == 0) {
              puVar11 = (undefined8 *)*puVar9;
            }
            *(byte *)(puVar9 + 8) = bVar2 & 0xfe;
            (**(code **)*puVar11)(puVar11,0);
            if ((*(byte *)(puVar9 + 8) & 2) == 0) {
              FMemory::Free(*puVar9);
            }
          }
          puVar9 = puVar9 + 9;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar6 = *(int *)(lVar13 + 0x24);
      }
      *(undefined4 *)(lVar13 + 0x20) = 0;
      if (iVar6 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
                  (lVar13 + 0x18,0);
      }
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        bVar2 = *(byte *)(puVar9 + 8);
        if ((bVar2 & 1) != 0) {
          puVar11 = puVar9;
          if ((bVar2 & 2) == 0) {
            puVar11 = (undefined8 *)*puVar9;
          }
          *(byte *)(puVar9 + 8) = bVar2 & 0xfe;
          (**(code **)*puVar11)(puVar11,0);
          if ((*(byte *)(puVar9 + 8) & 2) == 0) {
            FMemory::Free(*puVar9);
          }
        }
        puVar9 = puVar9 + 9;
      }
      *(undefined4 *)(lVar13 + 0x20) = 0;
    }
    uStack_118._0_4_ = (uint)uStack_118 & ~uStack_128._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_128);
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UObject_*,TMap<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_a8,0);
  if (local_88 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f41b20 Apply body=1606 status=ok
// SIG undefined Apply(void)

void FMovieSceneExecutionTokens::Apply(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint *puVar25;
  longlong *local_f8;
  undefined8 local_f0;
  int local_e8;
  uint uStack_e4;
  uint *puStack_e0;
  uint local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  local_c0 = param_3 + 8;
  uVar23 = 0;
  local_b8 = param_3 + 0x58;
  local_b0 = DAT_1464d3e28;
  local_a4 = DAT_1464d3e28;
  uStack_ac = 0xffffffff;
  uStack_a8 = 0xffffffff;
  uStack_a0 = 0xffffffff;
  uStack_9c = 0xffffffff;
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_c8 = param_3;
  if (0 < (int)param_1[3] - *(int *)((longlong)param_1 + 0x44)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
    uVar23 = local_f0 & 0xffffffff;
  }
  uStack_e4 = 1;
  plVar14 = param_1 + 2;
  local_e8 = 0;
  uVar22 = *(uint *)(param_1 + 7);
  puVar1 = (uint *)(param_1 + 4);
  uStack_d4 = 0;
  iStack_d0 = 0;
  if (uVar22 != 0) {
    puVar25 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar25 = puVar1;
    }
    uVar19 = *puVar25;
    iStack_d0 = 0;
    local_e8 = 0;
    while (uVar19 == 0) {
      lVar17 = (longlong)local_e8;
      iStack_d0 = iStack_d0 + 0x20;
      iVar11 = local_e8 + 1;
      bVar5 = (int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e8;
      local_e8 = iVar11;
      if (bVar5) goto LAB_141f41c4e;
      uVar19 = puVar25[lVar17 + 1];
    }
    uStack_e4 = -uVar19 & uVar19;
    iVar11 = 0x1f;
    if (uStack_e4 != 0) {
      for (; uStack_e4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_e4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_d4 = (iStack_d0 - iVar11) + 0x1f;
    if ((int)uVar22 < (int)uStack_d4) {
LAB_141f41c4e:
      uStack_d4 = uVar22;
    }
  }
  uVar19 = *(uint *)(param_1 + 7);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_d4;
  local_78 = CONCAT44(uStack_cc,iStack_d0);
  uStack_68 = CONCAT44(uStack_e4,local_e8);
  local_d8 = -1 << ((byte)uVar19 & 0x1f);
  uVar24 = uVar19 & 0xffffffe0;
  iStack_90 = local_e8;
  uStack_8c = uStack_e4;
  plVar12 = local_f8;
  puStack_e0 = puVar1;
  uStack_d4 = uVar19;
  local_88 = puVar1;
  local_70 = plVar14;
  puStack_60 = puVar1;
  uStack_50 = local_78;
  local_98 = plVar14;
  uStack_58 = uStack_80;
  uStack_54 = uStack_7c;
  if (uVar19 != uVar22) {
    puVar25 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar25 = puVar1;
    }
    uVar16 = puVar25[(int)uVar19 >> 5] & local_d8;
    iVar11 = (int)uVar19 >> 5;
    while (uVar16 == 0) {
      uVar24 = uVar24 + 0x20;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_141f41d21;
      uVar16 = puVar25[(longlong)iVar11 + 1];
      local_d8 = 0xffffffff;
      iVar11 = iVar11 + 1;
    }
    uVar16 = -uVar16 & uVar16;
    iVar11 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar16 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_d4 = (uVar24 - iVar11) + 0x1f;
    uVar19 = uStack_d4;
    if ((int)uVar22 < (int)uStack_d4) {
LAB_141f41d21:
      uStack_d4 = uVar22;
      uVar19 = uVar22;
    }
  }
  while( true ) {
    uVar22 = (uint)uVar23;
    if (((uStack_7c == uVar19) && (local_88 == puVar1)) && (local_98 == plVar14)) break;
    lVar20 = (longlong)(int)uVar22;
    lVar17 = (longlong)(int)uStack_7c * 0x38 + *local_98;
    uVar22 = uVar22 + 1;
    local_f0 = CONCAT44(local_f0._4_4_,uVar22);
    if (local_f0._4_4_ < (int)uVar22) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_f8,uVar23);
      plVar12 = local_f8;
      uVar22 = (uint)local_f0;
    }
    uVar23 = (ulonglong)uVar22;
    bVar3 = *(byte *)(plVar12 + lVar20 * 5 + 4);
    *(byte *)(plVar12 + lVar20 * 5 + 4) = bVar3 & 0xfe | 2;
    if ((*(byte *)(lVar17 + 0x28) & 1) != 0) {
      *(byte *)(plVar12 + lVar20 * 5 + 4) = bVar3 & 0xfe | 3;
      *(byte *)(lVar17 + 0x28) = *(byte *)(lVar17 + 0x28) & 0xfe;
      bVar3 = *(byte *)(lVar17 + 0x28);
      *(byte *)(plVar12 + lVar20 * 5 + 4) = *(byte *)(plVar12 + lVar20 * 5 + 4) & 0xfd;
      *(byte *)(plVar12 + lVar20 * 5 + 4) = *(byte *)(plVar12 + lVar20 * 5 + 4) | bVar3 & 2;
      uVar6 = *(undefined4 *)(lVar17 + 0xc);
      uVar7 = *(undefined4 *)(lVar17 + 0x10);
      uVar8 = *(undefined4 *)(lVar17 + 0x14);
      plVar15 = plVar12 + lVar20 * 5;
      *(undefined4 *)plVar15 = *(undefined4 *)(lVar17 + 8);
      *(undefined4 *)((longlong)plVar15 + 4) = uVar6;
      *(undefined4 *)(plVar15 + 1) = uVar7;
      *(undefined4 *)((longlong)plVar15 + 0xc) = uVar8;
      lVar9 = *(longlong *)(lVar17 + 0x20);
      plVar12[lVar20 * 5 + 2] = *(longlong *)(lVar17 + 0x18);
      (plVar12 + lVar20 * 5 + 2)[1] = lVar9;
    }
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  }
  AlgoImpl::
  IntroSortInternal<TInlineValue<IMovieSceneSharedExecutionToken,32,8>,FIdentityFunctor,bool_(__cdecl*)(TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_const_&)>
            (plVar12,(longlong)(int)uVar22,(ulonglong)param_1 & 0xff,&LAB_141f66a30);
  iVar11 = 0;
  local_a4 = DAT_1464d3e28;
  uStack_a0 = 0xffffffff;
  local_b0 = DAT_1464d3e28;
  uStack_ac = 0xffffffff;
  *(ulonglong *)(param_3 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464d3e28);
  *(undefined4 *)(param_3 + 0x2d8) = 0xffffffff;
  uStack_9c = 0xffffffff;
  uStack_a8 = 0xffffffff;
  *(undefined1 *)(param_3 + 0x2dc) = *(undefined1 *)(param_3 + 0x2dd);
  plVar14 = local_f8;
  if (0 < (int)uVar22) {
    do {
      plVar12 = plVar14;
      if ((*(byte *)(plVar14 + 4) & 2) == 0) {
        plVar12 = (longlong *)*plVar14;
      }
      if (0 < (int)plVar12[1]) break;
      (**(code **)(*plVar12 + 8))(plVar12,&local_c8,param_3);
      iVar11 = iVar11 + 1;
      plVar14 = plVar14 + 5;
    } while (iVar11 < (int)uVar22);
  }
  lVar17 = *param_1;
  uVar21 = (ulonglong)(int)param_1[1];
  lVar20 = uVar21 * 0xb0 + lVar17;
  if (lVar17 != lVar20) {
    puVar18 = (undefined8 *)(lVar17 + 0x14);
    do {
      local_b0 = (undefined4)*puVar18;
      uStack_ac = (undefined4)((ulonglong)*puVar18 >> 0x20);
      uStack_a8 = 0xffffffff;
      local_a4 = (undefined4)*puVar18;
      uStack_a0 = (undefined4)((ulonglong)*puVar18 >> 0x20);
      uStack_9c = *(undefined4 *)(puVar18 + 1);
      cVar4 = *(char *)((longlong)puVar18 + 0xc);
      uVar2 = *puVar18;
      *(undefined8 *)(param_3 + 0x2d0) = uVar2;
      *(undefined4 *)(param_3 + 0x2d8) = *(undefined4 *)(puVar18 + 1);
      if (cVar4 == '\0') {
        *(undefined1 *)(param_3 + 0x2dc) = *(undefined1 *)(param_3 + 0x2dd);
      }
      else if (cVar4 == '\x01') {
        *(undefined1 *)(param_3 + 0x2dc) = 2;
      }
      plVar14 = (longlong *)((longlong)puVar18 + 0x54);
      if ((*(byte *)((longlong)puVar18 + 0x94) & 2) == 0) {
        plVar14 = (longlong *)*plVar14;
      }
      (**(code **)(*plVar14 + 8))((int)uVar2,puVar18 + 2,lVar17,&local_c8,param_3);
      lVar17 = lVar17 + 0xb0;
      puVar18 = puVar18 + 0x16;
    } while (lVar17 != lVar20);
    lVar17 = *param_1;
    uVar21 = (ulonglong)*(uint *)(param_1 + 1);
  }
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  if (iVar10 < 0) {
    if ((int)uVar21 != 0) {
      puVar18 = (undefined8 *)(lVar17 + 0x68);
      do {
        bVar3 = *(byte *)(puVar18 + 8);
        if ((bVar3 & 1) != 0) {
          puVar13 = puVar18;
          if ((bVar3 & 2) == 0) {
            puVar13 = (undefined8 *)*puVar18;
          }
          *(byte *)(puVar18 + 8) = bVar3 & 0xfe;
          (**(code **)*puVar13)(puVar13,0);
          if ((*(byte *)(puVar18 + 8) & 2) == 0) {
            FMemory::Free(*puVar18);
          }
        }
        puVar18 = puVar18 + 0x16;
        uVar19 = (int)uVar21 - 1;
        uVar21 = (ulonglong)uVar19;
      } while (uVar19 != 0);
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar10 != 0) {
      TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,0);
    }
  }
  else {
    if ((int)uVar21 != 0) {
      puVar18 = (undefined8 *)(lVar17 + 0x68);
      do {
        bVar3 = *(byte *)(puVar18 + 8);
        if ((bVar3 & 1) != 0) {
          puVar13 = puVar18;
          if ((bVar3 & 2) == 0) {
            puVar13 = (undefined8 *)*puVar18;
          }
          *(byte *)(puVar18 + 8) = bVar3 & 0xfe;
          (**(code **)*puVar13)(puVar13,0);
          if ((*(byte *)(puVar18 + 8) & 2) == 0) {
            FMemory::Free(*puVar18);
          }
        }
        puVar18 = puVar18 + 0x16;
        uVar19 = (int)uVar21 - 1;
        uVar21 = (ulonglong)uVar19;
      } while (uVar19 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  local_a4 = DAT_1464d3e28;
  uStack_a0 = 0xffffffff;
  local_b0 = DAT_1464d3e28;
  uStack_ac = 0xffffffff;
  *(ulonglong *)(param_3 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464d3e28);
  *(undefined4 *)(param_3 + 0x2d8) = 0xffffffff;
  uStack_9c = 0xffffffff;
  uStack_a8 = 0xffffffff;
  *(undefined1 *)(param_3 + 0x2dc) = *(undefined1 *)(param_3 + 0x2dd);
  if (iVar11 < (int)uVar22) {
    uVar21 = (ulonglong)(uVar22 - iVar11);
    plVar14 = local_f8 + (longlong)iVar11 * 5;
    do {
      plVar12 = plVar14 + 5;
      if ((*(byte *)(plVar14 + 4) & 2) == 0) {
        plVar14 = (longlong *)*plVar14;
      }
      (**(code **)(*plVar14 + 8))(plVar14,&local_c8,param_3);
      uVar21 = uVar21 - 1;
      plVar14 = plVar12;
    } while (uVar21 != 0);
  }
  TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 2);
  FMovieSceneBlendingAccumulator::Apply(param_1 + 0xc,param_2,&local_c8,param_3);
  plVar12 = local_f8;
  plVar14 = local_f8;
  while (uVar22 != 0) {
    bVar3 = *(byte *)(plVar14 + 4);
    if ((bVar3 & 1) != 0) {
      plVar15 = plVar14;
      if ((bVar3 & 2) == 0) {
        plVar15 = (longlong *)*plVar14;
      }
      *(byte *)(plVar14 + 4) = bVar3 & 0xfe;
      (**(code **)*plVar15)(plVar15,0);
      if ((*(byte *)(plVar14 + 4) & 2) == 0) {
        FMemory::Free(*plVar14);
      }
    }
    plVar14 = plVar14 + 5;
    uVar22 = (int)uVar23 - 1;
    uVar23 = (ulonglong)uVar22;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return;
}



// FUNCTION 141f42170 Apply body=83 status=ok
// SIG undefined Apply(void)

void FMovieSceneKeyStructHelper::Apply(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x10) * 9;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 9) {
    plVar2 = plVar3;
    if ((*(byte *)(plVar3 + 8) & 2) == 0) {
      plVar2 = (longlong *)*plVar3;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  }
  return;
}



// FUNCTION 141f421d0 FUN_141f421d0 body=241 status=ok
// SIG undefined FUN_141f421d0(void)

void FUN_141f421d0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = (undefined8 *)0x0;
  ppuVar4 = (undefined8 **)(param_1 + 0x3f0);
  uStack_c = 0;
  iStack_10 = 0;
  if (&local_18 != ppuVar4) {
    local_18 = *ppuVar4;
    iStack_10 = *(int *)(param_1 + 0x3f8);
    uStack_c = *(undefined4 *)(param_1 + 0x3fc);
    *ppuVar4 = (undefined8 *)0x0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  puVar3 = local_18;
  puVar6 = local_18 + (longlong)iStack_10 * 2;
  if (local_18 != puVar6) {
    puVar5 = local_18 + 1;
    do {
      if (*(char *)(puVar5 + -1) == '\0') {
        FUN_141f66f00(param_1);
      }
      else if (*(char *)(puVar5 + -1) == '\x01') {
        FUN_141f5aa50(param_1);
      }
      else {
        iVar2 = *(int *)((longlong)puVar5 + -4);
        if (iVar2 == 0) {
          FUN_141f5b0b0(param_1,*puVar5);
        }
        else if (iVar2 == 1) {
          FUN_141f58740(param_1,*puVar5);
        }
        else if (iVar2 == 2) {
          FUN_141f634a0(param_1,*puVar5);
        }
      }
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 2;
    } while (puVar1 != puVar6);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar3);
  return;
}



// FUNCTION 141f422d0 FUN_141f422d0 body=497 status=ok
// SIG undefined FUN_141f422d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f422d0(longlong param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_138 [32];
  int local_118 [2];
  int *local_110;
  undefined4 *local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar1 = (longlong *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar4 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar4 = param_1 + 0xd8;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)*param_2) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0xc0 + *plVar1);
        if (*piVar5 == *param_2) {
          if (iVar3 != -1) goto LAB_141f42368;
          break;
        }
        iVar3 = piVar5[0x2e];
      } while (iVar3 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_141f42368:
  piVar6 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 == (int *)0x0) {
    local_f8 = 0xffffffff;
    local_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_60 = 0;
    local_50 = 0;
    local_108 = &local_f8;
    local_f4 = 0;
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_110 = param_2;
    FUN_141f33060(plVar1,local_118,&local_110,0);
    local_50 = local_50 & 0xffffffff00000000;
    piVar6 = (int *)(*plVar1 + (longlong)local_118[0] * 0xc0 + 8);
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    local_a0 = local_a0 & 0xffffffff00000000;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
  }
  cVar2 = FUN_1405dc8f0(piVar6,param_3);
  if (cVar2 != '\0') {
    TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
    ::Reset(piVar6 + 4);
    TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
    ::Reset(piVar6 + 0x18);
    (**(code **)(*param_4 + 0x68))(param_4);
  }
  FWeakObjectPtr::operator=(piVar6,param_3);
  piVar6[2] = *param_2;
  return;
}



// FUNCTION 141f424d0 AutoSetTangents body=308 status=ok
// SIG undefined AutoSetTangents(void)

void FMovieSceneFloatChannel::AutoSetTangents(longlong param_1,float param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  
  if (1 < *(int *)(param_1 + 0x28)) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if ((*(char *)(lVar5 + 4) == '\x02') && (*(char *)(lVar5 + 5) == '\0')) {
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 0;
    }
    lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x1c;
    lVar5 = *(longlong *)(param_1 + 0x20);
    if ((*(char *)(lVar4 + -0x18 + lVar5) == '\x02') && (*(char *)(lVar4 + -0x17 + lVar5) == '\0'))
    {
      *(undefined8 *)(lVar4 + -0x14 + lVar5) = 0;
      *(undefined1 *)(lVar4 + -0xc + lVar5) = 0;
    }
    iVar6 = 1;
    if (1 < *(int *)(param_1 + 0x28) + -1) {
      lVar5 = 0x1c;
      lVar4 = 4;
      do {
        lVar3 = *(longlong *)(param_1 + 0x20);
        cVar1 = *(char *)(lVar5 + 4 + lVar3);
        cVar2 = *(char *)(lVar5 + -0x18 + lVar3);
        if ((cVar1 == '\x02') && (*(char *)(lVar5 + 5 + lVar3) == '\0')) {
          fVar7 = (float)(*(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar4) -
                         *(int *)(*(longlong *)(param_1 + 0x10) + -4 + lVar4));
          if (fVar7 <= 0.0001) {
            fVar7 = 0.0001;
          }
          fVar7 = (((*(float *)(lVar5 + 0x1c + lVar3) - *(float *)(lVar5 + lVar3)) +
                   (*(float *)(lVar5 + lVar3) - *(float *)(lVar5 + -0x1c + lVar3))) *
                  (1.0 - param_2)) / fVar7;
          *(float *)(lVar5 + 8 + lVar3) = fVar7;
          *(float *)(lVar5 + 0xc + lVar3) = fVar7;
          *(undefined1 *)(lVar5 + 0x10 + lVar3) = 0;
        }
        else if ((cVar2 == '\x01') || (cVar1 == '\x01')) {
          if (cVar2 != '\x02') {
            *(undefined4 *)(lVar5 + 8 + lVar3) = 0;
          }
          *(undefined4 *)(lVar5 + 0xc + lVar3) = 0;
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x1c;
        lVar4 = lVar4 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x28) + -1);
    }
  }
  return;
}



// FUNCTION 141f42610 FUN_141f42610 body=69 status=ok
// SIG undefined FUN_141f42610(void)

void FUN_141f42610(longlong param_1)

{
  FUN_141f66f00();
  if ((DAT_146b17150 != (longlong *)0x0) && (*(char *)(param_1 + 0x7e8) != '\0')) {
    (**(code **)(*DAT_146b17150 + 0x2c8))(DAT_146b17150,(float)*(double *)(param_1 + 0x7e0));
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 141f42660 BezierInterp body=197 status=ok
// SIG undefined BezierInterp(void)

float BezierInterp(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_3 - param_2) * param_5 + param_2;
  fVar1 = (fVar2 - ((param_2 - param_1) * param_5 + param_1)) + (param_2 - param_1);
  return (((((((param_4 - param_3) * param_5 + param_3) - fVar2) + (param_3 - param_2)) * param_5 +
           param_2) - (fVar1 * param_5 + param_1)) + fVar1) * param_5 + param_1;
}



// FUNCTION 141f42730 BindPossessableObject body=83 status=ok
// SIG undefined BindPossessableObject(void)

void UMovieSceneSequence::BindPossessableObject(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x29
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::BindPossessableObject");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x29
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::BindPossessableObject");
  return;
}



// FUNCTION 141f427e0 Blend body=62 status=ok
// SIG undefined Blend(void)

void `UTestMovieSceneTrack::GetTrackSegmentBlender'::`2'::FSegmentBlender::Blend
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_res8;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    MovieSceneSegmentCompiler::ChooseLowestRowIndex(param_2);
  }
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar1 = param_2;
  }
  AlgoImpl::
  IntroSortInternal<FMovieSceneSectionData,<lambda_6bf7993edb1d7c757f5d78654c7018d0>,TLess<void>_>
            (lVar1,(longlong)*(int *)(param_2 + 0x48),0,local_res8);
  return;
}



// FUNCTION 141f42820 FUN_141f42820 body=114 status=ok
// SIG undefined FUN_141f42820(void)

undefined8 * FUN_141f42820(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
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
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR__scalar_deleting_destructor__144f1bc20;
  param_2[1] = uVar4;
  param_2[2] = plVar3;
  return param_2;
}



// FUNCTION 141f428a0 FUN_141f428a0 body=114 status=ok
// SIG undefined FUN_141f428a0(void)

undefined8 * FUN_141f428a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
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
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR__scalar_deleting_destructor__144f1bc10;
  param_2[1] = uVar4;
  param_2[2] = plVar3;
  return param_2;
}



// FUNCTION 141f42940 FUN_141f42940 body=2638 status=ok
// SIG undefined FUN_141f42940(void)

void FUN_141f42940(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong **pplVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint *puVar9;
  uint uVar10;
  longlong *plVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  int *piVar27;
  ulonglong *puVar28;
  undefined8 *puVar29;
  ulonglong *puVar30;
  longlong **local_res8;
  longlong *local_res10;
  undefined8 local_b8;
  undefined8 local_b0;
  uint *local_a8;
  uint local_a0;
  uint local_9c;
  undefined1 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  uint local_6c;
  int iStack_68;
  uint uStack_64;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong *local_50;
  undefined8 local_48;
  
  local_88 = param_2 + 1;
  local_80 = param_2 + 0xb;
  iStack_74 = -1;
  uStack_70 = 0xffffffff;
  local_78 = DAT_1464d3e28;
  local_6c = DAT_1464d3e28;
  iStack_68 = -1;
  uStack_64 = 0xffffffff;
  local_50 = (ulonglong *)0x0;
  local_48 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  local_res10 = param_2;
  local_90 = param_2;
  FMovieSceneEvaluationMetaData::DiffEntities(param_1 + 0xf0,param_1 + 0x80,&local_60,&local_50);
  puVar30 = local_50 + (longlong)(int)local_48 * 2;
  uVar3 = local_78;
  puVar16 = local_60;
  for (puVar28 = local_50; local_60 = puVar16, puVar28 != puVar30; puVar28 = puVar28 + 2) {
    uVar24 = *puVar28;
    iVar15 = *(int *)(param_1 + 0x198);
    uVar4 = (uint)puVar28[1];
    uVar22 = uVar24 & 0xffffffff;
    local_78 = (uint)uVar24;
    uVar7 = (ulonglong)local_b0 >> 0x20;
    local_b0 = (longlong ***)CONCAT44((int)uVar7,uVar4);
    if (iVar15 != 0) {
      puVar12 = *(uint **)(param_1 + 400);
      if (*(uint **)(param_1 + 400) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x170);
      }
      uVar25 = 0;
      uVar7 = (longlong)iVar15 & 0x3fffffffffffffff;
      if (puVar12 + iVar15 < puVar12) {
        uVar7 = uVar25;
      }
      if (uVar7 != 0) {
        do {
          local_78 = *puVar12;
          if ((int)uVar22 != 0) {
            uVar10 = (int)uVar22 - local_78 ^ local_78 >> 0xd;
            uVar18 = (-0x61c88647 - uVar10) - local_78 ^ uVar10 << 8;
            uVar21 = (local_78 - uVar18) - uVar10 ^ uVar18 >> 0xd;
            uVar10 = (uVar10 - uVar18) - uVar21 ^ uVar21 >> 0xc;
            uVar18 = (uVar18 - uVar10) - uVar21 ^ uVar10 << 0x10;
            uVar21 = (uVar21 - uVar18) - uVar10 ^ uVar18 >> 5;
            uVar10 = (uVar10 - uVar18) - uVar21 ^ uVar21 >> 3;
            uVar18 = (uVar18 - uVar10) - uVar21 ^ uVar10 << 10;
            local_78 = (uVar21 - uVar18) - uVar10 ^ uVar18 >> 0xf;
          }
          uVar22 = (ulonglong)local_78;
          puVar12 = puVar12 + 1;
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar7);
      }
    }
    plVar8 = (longlong *)0x0;
    local_b8._4_4_ = (int)(uVar24 >> 0x20);
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,local_78);
    if (local_78 == *(uint *)(param_1 + 0x10)) {
      plVar6 = (longlong *)(param_1 + 0x18);
    }
    else {
      if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
        lVar5 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar5 = param_1 + 0x68;
        }
        iVar15 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)local_78
                                  ) * 4);
        if (iVar15 != -1) {
          do {
            lVar5 = *(longlong *)(param_1 + 0x30) + (longlong)iVar15 * 0x28;
            if (*(uint *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar15 * 0x28) == local_78) {
              if ((iVar15 != -1) && (plVar6 = (longlong *)(lVar5 + 8), lVar5 != 0))
              goto LAB_141f42b7c;
              break;
            }
            iVar15 = *(int *)(lVar5 + 0x20);
          } while (iVar15 != -1);
        }
      }
      plVar6 = plVar8;
    }
LAB_141f42b7c:
    if (((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) &&
       (plVar6 = (longlong *)plVar6[1], plVar6 != (longlong *)0x0)) {
      uVar7 = (ulonglong)local_b8._4_4_;
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        plVar11 = (longlong *)plVar6[8];
        if ((longlong *)plVar6[8] == (longlong *)0x0) {
          plVar11 = plVar6 + 7;
        }
        iVar15 = *(int *)((longlong)plVar11 + ((longlong)(int)plVar6[9] - 1U & uVar7) * 4);
        if (iVar15 != -1) {
          do {
            plVar11 = (longlong *)((longlong)iVar15 * 0x108 + *plVar6);
            if ((int)*plVar11 == local_b8._4_4_) {
              if (iVar15 != -1) goto LAB_141f42c06;
              break;
            }
            iVar15 = (int)plVar11[0x20];
          } while (iVar15 != -1);
        }
      }
      plVar11 = plVar8;
LAB_141f42c06:
      plVar26 = plVar11 + 1;
      if (plVar11 == (longlong *)0x0) {
        plVar26 = plVar8;
      }
      if (plVar26 == (longlong *)0x0) {
        if ((int)plVar6[0xb] != *(int *)((longlong)plVar6 + 0x84)) {
          plVar11 = (longlong *)plVar6[0x12];
          if ((longlong *)plVar6[0x12] == (longlong *)0x0) {
            plVar11 = plVar6 + 0x11;
          }
          iVar15 = *(int *)((longlong)plVar11 + ((longlong)(int)plVar6[0x13] - 1U & uVar7) * 4);
          if (iVar15 != -1) {
            do {
              plVar11 = (longlong *)((longlong)iVar15 * 0x108 + plVar6[10]);
              if ((int)*plVar11 == local_b8._4_4_) {
                if (iVar15 != -1) goto LAB_141f42c86;
                break;
              }
              iVar15 = (int)plVar11[0x20];
            } while (iVar15 != -1);
          }
        }
        plVar11 = plVar8;
LAB_141f42c86:
        plVar26 = plVar11 + 1;
        if (plVar11 == (longlong *)0x0) {
          plVar26 = plVar8;
        }
      }
      if ((int)plVar6[0xb] != *(int *)((longlong)plVar6 + 0x84)) {
        plVar8 = (longlong *)plVar6[0x12];
        if ((longlong *)plVar6[0x12] == (longlong *)0x0) {
          plVar8 = plVar6 + 0x11;
        }
        iVar15 = *(int *)((longlong)plVar8 + ((longlong)(int)plVar6[0x13] - 1U & uVar7) * 4);
        if (iVar15 != -1) {
          do {
            if (*(int *)((longlong)iVar15 * 0x108 + plVar6[10]) == local_b8._4_4_)
            goto LAB_141f42cf2;
            iVar15 = *(int *)((longlong)iVar15 * 0x108 + 0x100 + plVar6[10]);
          } while (iVar15 != -1);
        }
      }
      iVar15 = -1;
LAB_141f42cf2:
      iStack_74 = local_b8._4_4_;
      uStack_70 = 0xffffffff;
      local_a0 = uVar4;
      if (uVar4 == 0xffffffff) {
        if ((plVar26 != (longlong *)0x0) && ((*(byte *)(plVar26 + 0x1c) & 1) != 0)) {
          plVar8 = plVar26 + 0x16;
          if ((*(byte *)(plVar26 + 0x1c) & 2) == 0) {
            plVar8 = (longlong *)*plVar8;
          }
          if ((*(byte *)(plVar8 + 1) & 2) != 0) {
            (**(code **)(*plVar8 + 0x18))(uVar24,&local_90);
          }
        }
        puVar12 = &local_78;
      }
      else {
        iStack_68 = local_b8._4_4_;
        local_6c = local_78;
        uStack_64 = uVar4;
        if (((plVar26 != (longlong *)0x0) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)plVar26[0x15])
           ) {
          plVar8 = (longlong *)((longlong)(int)uVar4 * 0x38 + plVar26[0x14]);
          if ((*(byte *)(plVar8 + 6) & 1) != 0) {
            if ((*(byte *)(plVar8 + 6) & 2) == 0) {
              plVar8 = (longlong *)*plVar8;
            }
            if ((*(byte *)(plVar8 + 1) & 2) != 0) {
              (**(code **)(*plVar8 + 0x18))(uVar24,&local_90);
            }
          }
        }
        puVar12 = &local_6c;
      }
      TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
      ::Remove(local_88,puVar12);
      if ((iVar15 == -1) || (param_3 == 0)) {
        local_98 = 0;
        FUN_141f62fc0(param_2 + 0x1f,param_2,&local_b8,&local_a8);
        uVar3 = local_78;
      }
      else {
        iVar15 = *(int *)(param_3 + 0x10);
        *(int *)(param_3 + 0x10) = iVar15 + 1;
        if (*(int *)(param_3 + 0x14) < iVar15 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3 + 8,iVar15);
        }
        lVar5 = *(longlong *)(param_3 + 8);
        *(undefined1 **)(lVar5 + (longlong)iVar15 * 0xc) = local_b8;
        *(uint *)(lVar5 + 8 + (longlong)iVar15 * 0xc) = uVar4;
        param_2 = local_res10;
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    uVar3 = local_78;
    puVar16 = local_60;
  }
  puVar29 = puVar16 + (longlong)(int)local_58 * 2;
  local_78 = uVar3;
  if (puVar16 != puVar29) {
    do {
      uVar1 = *puVar16;
      iVar15 = *(int *)(param_1 + 0x198);
      uVar3 = *(uint *)(puVar16 + 1);
      local_b8._0_4_ = (uint)uVar1;
      if (iVar15 != 0) {
        uVar24 = 0;
        puVar12 = *(uint **)(param_1 + 400);
        if (*(uint **)(param_1 + 400) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x170);
        }
        uVar7 = (longlong)iVar15 & 0x3fffffffffffffff;
        if (puVar12 + iVar15 < puVar12) {
          uVar7 = uVar24;
        }
        if (uVar7 != 0) {
          do {
            uVar4 = *puVar12;
            if ((uint)local_b8 != 0) {
              uVar10 = (uint)local_b8 - uVar4 ^ uVar4 >> 0xd;
              uVar18 = (-0x61c88647 - uVar10) - uVar4 ^ uVar10 << 8;
              uVar4 = (uVar4 - uVar18) - uVar10 ^ uVar18 >> 0xd;
              uVar10 = (uVar10 - uVar18) - uVar4 ^ uVar4 >> 0xc;
              uVar18 = (uVar18 - uVar10) - uVar4 ^ uVar10 << 0x10;
              uVar4 = (uVar4 - uVar18) - uVar10 ^ uVar18 >> 5;
              uVar10 = (uVar10 - uVar18) - uVar4 ^ uVar4 >> 3;
              uVar18 = (uVar18 - uVar10) - uVar4 ^ uVar10 << 10;
              uVar4 = (uVar4 - uVar18) - uVar10 ^ uVar18 >> 0xf;
            }
            local_b8._0_4_ = uVar4;
            puVar12 = puVar12 + 1;
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar7);
        }
      }
      piVar27 = (int *)0x0;
      local_b8._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
      if ((uint)local_b8 == *(uint *)(param_1 + 0x10)) {
        piVar13 = (int *)(param_1 + 0x10);
      }
      else {
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar15 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                    (longlong)(int)(uint)local_b8) * 4);
          if (iVar15 != -1) {
            do {
              piVar13 = (int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar15 * 0x28);
              if (*(uint *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar15 * 0x28) ==
                  (uint)local_b8) {
                if (iVar15 != -1) goto LAB_141f42fa3;
                break;
              }
              iVar15 = piVar13[8];
            } while (iVar15 != -1);
          }
        }
        piVar13 = piVar27;
      }
LAB_141f42fa3:
      plVar8 = *(longlong **)(piVar13 + 4);
      if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
        plVar6 = (longlong *)plVar8[8];
        if ((longlong *)plVar8[8] == (longlong *)0x0) {
          plVar6 = plVar8 + 7;
        }
        iVar15 = *(int *)((longlong)plVar6 +
                         ((longlong)(int)plVar8[9] - 1U & (longlong)local_b8._4_4_) * 4);
        if (iVar15 != -1) {
          do {
            piVar13 = (int *)((longlong)iVar15 * 0x108 + *plVar8);
            if (*piVar13 == local_b8._4_4_) {
              if (iVar15 != -1) goto LAB_141f43006;
              break;
            }
            iVar15 = piVar13[0x40];
          } while (iVar15 != -1);
        }
      }
      piVar13 = piVar27;
LAB_141f43006:
      piVar19 = piVar13 + 2;
      if (piVar13 == (int *)0x0) {
        piVar19 = piVar27;
      }
      if (piVar19 == (int *)0x0) {
        if ((int)plVar8[0xb] != *(int *)((longlong)plVar8 + 0x84)) {
          plVar6 = (longlong *)plVar8[0x12];
          if ((longlong *)plVar8[0x12] == (longlong *)0x0) {
            plVar6 = plVar8 + 0x11;
          }
          iVar15 = *(int *)((longlong)plVar6 +
                           ((longlong)(int)plVar8[0x13] - 1U & (longlong)local_b8._4_4_) * 4);
          if (iVar15 != -1) {
            do {
              piVar13 = (int *)((longlong)iVar15 * 0x108 + plVar8[10]);
              if (*piVar13 == local_b8._4_4_) {
                if (iVar15 != -1) goto LAB_141f43086;
                break;
              }
              iVar15 = piVar13[0x40];
            } while (iVar15 != -1);
          }
        }
        piVar13 = piVar27;
LAB_141f43086:
        piVar19 = piVar13 + 2;
        if (piVar13 == (int *)0x0) {
          piVar19 = piVar27;
        }
        if (piVar19 != (int *)0x0) goto LAB_141f43096;
      }
      else {
LAB_141f43096:
        iStack_74 = local_b8._4_4_;
        uStack_70 = 0xffffffff;
        local_a0 = uVar3;
        local_78 = (uint)local_b8;
        if (uVar3 == 0xffffffff) {
          if ((*(byte *)(piVar19 + 0x38) & 1) != 0) {
            plVar8 = (longlong *)(piVar19 + 0x2c);
LAB_141f430f0:
            if ((*(byte *)(plVar8 + 6) & 2) == 0) {
              plVar8 = (longlong *)*plVar8;
            }
            if ((*(byte *)(plVar8 + 1) & 1) != 0) {
              (**(code **)(*plVar8 + 0x10))(uVar1,&local_90);
            }
          }
        }
        else if (((-1 < (int)uVar3) && ((int)uVar3 < piVar19[0x2a])) &&
                ((*(byte *)(*(longlong *)(piVar19 + 0x28) + 0x30 + (longlong)(int)uVar3 * 0x38) & 1)
                 != 0)) {
          iStack_68 = local_b8._4_4_;
          plVar8 = (longlong *)((longlong)(int)uVar3 * 0x38 + *(longlong *)(piVar19 + 0x28));
          local_6c = (uint)local_b8;
          uStack_64 = uVar3;
          goto LAB_141f430f0;
        }
      }
      puVar16 = puVar16 + 2;
    } while (puVar16 != puVar29);
  }
  local_res8 = (longlong **)(**(code **)(*local_res10 + 0x50))();
  puVar9 = (uint *)0x0;
  local_a8 = (uint *)0x0;
  local_9c = 0;
  puVar12 = puVar9;
  puVar20 = puVar9;
  puVar23 = puVar9;
  puVar14 = puVar9;
  while( true ) {
    pplVar2 = local_res8;
    iVar15 = (int)puVar9;
    if (((iVar15 < 0) || (*(int *)(param_1 + 0xf8) <= iVar15)) ||
       ((iVar17 = (int)puVar12, iVar17 < 0 || (*(int *)(param_1 + 0x88) <= iVar17)))) break;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar15 * 4);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar17 * 4);
    if (uVar3 == uVar4) {
      puVar9 = (uint *)(ulonglong)(iVar15 + 1);
      puVar12 = (uint *)(ulonglong)(iVar17 + 1);
    }
    else if (uVar4 < uVar3) {
      iVar15 = (int)puVar20;
      local_a0 = iVar15 + 1;
      if ((int)puVar23 < (int)local_a0) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,puVar20);
        puVar23 = (uint *)(ulonglong)local_9c;
        puVar14 = local_a8;
      }
      puVar20 = (uint *)(ulonglong)local_a0;
      puVar14[iVar15] = uVar4;
      puVar12 = (uint *)(ulonglong)(iVar17 + 1);
    }
    else {
      puVar9 = (uint *)(ulonglong)(iVar15 + 1);
    }
  }
  while( true ) {
    plVar8 = local_res10;
    iVar15 = (int)puVar12;
    iVar17 = (int)puVar20;
    if ((iVar15 < 0) || (*(int *)(param_1 + 0x88) <= iVar15)) break;
    lVar5 = *(longlong *)(param_1 + 0x80);
    local_a0 = iVar17 + 1;
    if ((int)puVar23 < (int)local_a0) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,puVar20);
      puVar23 = (uint *)(ulonglong)local_9c;
      puVar14 = local_a8;
    }
    puVar20 = (uint *)(ulonglong)local_a0;
    puVar12 = (uint *)(ulonglong)(iVar15 + 1);
    puVar14[iVar17] = *(uint *)(lVar5 + (longlong)iVar15 * 4);
  }
  puVar12 = puVar14 + iVar17;
  puVar20 = puVar14;
  if (puVar14 != puVar12) {
    do {
      iVar15 = *(int *)(param_1 + 0x198);
      uVar3 = *puVar14;
      if (iVar15 != 0) {
        puVar20 = *(uint **)(param_1 + 400);
        if (*(uint **)(param_1 + 400) == (uint *)0x0) {
          puVar20 = (uint *)(param_1 + 0x170);
        }
        uVar24 = (longlong)iVar15 & 0x3fffffffffffffff;
        if (puVar20 + iVar15 < puVar20) {
          uVar24 = 0;
        }
        uVar7 = 0;
        if (uVar24 != 0) {
          do {
            uVar4 = *puVar20;
            if (uVar3 != 0) {
              uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
              uVar18 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
              uVar4 = (uVar4 - uVar18) - uVar3 ^ uVar18 >> 0xd;
              uVar10 = (uVar3 - uVar18) - uVar4 ^ uVar4 >> 0xc;
              uVar18 = (uVar18 - uVar10) - uVar4 ^ uVar10 << 0x10;
              uVar3 = (uVar4 - uVar18) - uVar10 ^ uVar18 >> 5;
              uVar4 = (uVar10 - uVar18) - uVar3 ^ uVar3 >> 3;
              uVar10 = (uVar18 - uVar4) - uVar3 ^ uVar4 << 10;
              uVar4 = (uVar3 - uVar10) - uVar4 ^ uVar10 >> 0xf;
            }
            uVar3 = uVar4;
            puVar20 = puVar20 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar24);
        }
      }
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar3);
      local_res8 = &local_res10;
      local_b0 = &local_res8;
      local_b8 = &LAB_141f42920;
      FMovieSceneSpawnRegister::DestroyObjectsByPredicate(pplVar2,plVar8,&local_b8);
      puVar14 = puVar14 + 1;
      puVar20 = local_a8;
    } while (puVar14 != puVar12);
  }
  if (puVar20 != (uint *)0x0) {
    FMemory::Free(puVar20);
  }
  if (local_60 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_50 != (ulonglong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f43390 FUN_141f43390 body=256 status=ok
// SIG undefined FUN_141f43390(void)

longlong FUN_141f43390(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_141e106d0(param_1,&local_18,0);
  plVar3 = local_18;
  plVar1 = local_18 + (int)local_10;
  plVar5 = local_18;
  if (local_18 != plVar1) {
    do {
      lVar4 = *plVar5;
      if ((*(byte *)(lVar4 + 0xba) & 4) != 0) goto LAB_141f43463;
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    if (local_18 != plVar1) {
      lVar4 = *local_18;
      goto LAB_141f43463;
    }
  }
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_14222e300(param_1,&local_28);
  puVar2 = local_28 + (int)local_20;
  puVar6 = local_28;
  while ((lVar4 = 0, puVar6 != puVar2 && (lVar4 = FUN_141f43390(*puVar6), lVar4 == 0))) {
    puVar6 = puVar6 + 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
LAB_141f43463:
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return lVar4;
}



// FUNCTION 141f43490 CameraComponentFromRuntimeObject body=156 status=ok
// SIG undefined CameraComponentFromRuntimeObject(void)

longlong MovieSceneHelpers::CameraComponentFromRuntimeObject(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_14290f3e0();
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
      return param_1;
    }
    lVar2 = FUN_1428dfc70();
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
      lVar2 = FUN_141f43390(param_1);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 141f43530 CanPossessObject body=85 status=ok
// SIG undefined CanPossessObject(void)

undefined1 UMovieSceneSequence::CanPossessObject(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x32
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::CanPossessObject");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x32
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::CanPossessObject");
  return 0;
}



// FUNCTION 141f43590 ChangeFrameResolution body=46 status=ok
// SIG undefined ChangeFrameResolution(void)

void FMovieSceneBoolChannel::ChangeFrameResolution(longlong param_1)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = param_1 + 8;
  local_20 = param_1 + 0x30;
  local_18 = param_1 + 0x20;
  FMovieSceneChannelData::ChangeFrameResolution(&local_28);
  return;
}



// FUNCTION 141f435c0 ChangeFrameResolution body=46 status=ok
// SIG undefined ChangeFrameResolution(void)

void FMovieSceneByteChannel::ChangeFrameResolution(longlong param_1)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = param_1 + 8;
  local_20 = param_1 + 0x38;
  local_18 = param_1 + 0x20;
  FMovieSceneChannelData::ChangeFrameResolution(&local_28);
  return;
}



// FUNCTION 141f435f0 ChangeFrameResolution body=512 status=ok
// SIG undefined ChangeFrameResolution(void)

void FMovieSceneChannelData::ChangeFrameResolution
               (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  float fStackX_24;
  
  iVar8 = (int)((ulonglong)param_3 >> 0x20);
  plVar3 = (longlong *)*param_1;
  iVar7 = 0;
  if (0 < (int)plVar3[1]) {
    lVar10 = 0;
    do {
      iVar6 = *(int *)(*plVar3 + lVar10);
      iVar11 = (int)((ulonglong)param_2 >> 0x20);
      if (((int)param_2 == (int)param_3) && (iVar11 == iVar8)) {
        fStackX_24 = 0.0;
LAB_141f4379a:
        if (0.5 <= fStackX_24) {
          iVar6 = iVar6 + 1;
        }
      }
      else {
        lVar9 = (longlong)(iVar11 * (int)param_3);
        lVar5 = (longlong)(iVar8 * (int)param_2);
        lVar4 = (iVar6 * lVar9) / lVar5;
        dVar13 = 1.0 / (double)lVar5;
        dVar12 = (double)lVar9;
        dVar13 = ((double)iVar6 * dVar12 * dVar13 - (double)lVar4) + dVar12 * 0.0 * dVar13;
        lVar5 = (longlong)dVar13;
        iVar6 = (int)lVar4;
        dVar12 = dVar13;
        if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar13)) {
          auVar1._8_4_ = SUB84(dVar13,0);
          auVar1._0_8_ = dVar13;
          auVar1._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          uVar2 = movmskpd(iVar6,auVar1);
          dVar12 = (double)(longlong)(lVar5 - (ulonglong)(uVar2 & 1));
        }
        dVar13 = dVar13 - dVar12;
        iVar6 = iVar6 + (int)(longlong)dVar12;
        if ((0.0 < dVar13) && (0.99999994 < dVar13)) {
          dVar13 = 0.99999994;
        }
        fStackX_24 = (float)dVar13;
        if (0.0 <= fStackX_24) {
          if (0.99999994 <= fStackX_24) {
            fStackX_24 = 0.99999994;
          }
          goto LAB_141f4379a;
        }
      }
      *(int *)(*plVar3 + lVar10) = iVar6;
      iVar7 = iVar7 + 1;
      plVar3 = (longlong *)*param_1;
      lVar10 = lVar10 + 4;
    } while (iVar7 < (int)plVar3[1]);
  }
  return;
}



// FUNCTION 141f437f0 ChangeFrameResolution body=634 status=ok
// SIG undefined ChangeFrameResolution(void)

void FMovieSceneFloatChannel::ChangeFrameResolution
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  float fStackX_14;
  
  iVar10 = (int)((ulonglong)param_3 >> 0x20);
  iVar9 = (int)param_3;
  iVar8 = 0;
  iVar11 = (int)param_2;
  iVar1 = (int)((ulonglong)param_2 >> 0x20);
  fVar2 = (((float)iVar10 / (float)iVar9) * (float)iVar11) / (float)iVar1;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar7 = 0;
    lVar12 = 0;
    do {
      iVar6 = *(int *)(lVar7 + *(longlong *)(param_1 + 0x10));
      if ((iVar11 == iVar9) && (iVar1 == iVar10)) {
        fStackX_14 = 0.0;
LAB_141f439e3:
        if (0.5 <= fStackX_14) {
          iVar6 = iVar6 + 1;
        }
      }
      else {
        lVar4 = ((longlong)iVar6 * (longlong)(iVar1 * iVar9)) / (longlong)(iVar10 * iVar11);
        dVar15 = 1.0 / (double)(longlong)(iVar10 * iVar11);
        dVar14 = (double)(longlong)(iVar1 * iVar9);
        dVar15 = ((double)iVar6 * dVar14 * dVar15 - (double)lVar4) + dVar14 * 0.0 * dVar15;
        lVar5 = (longlong)dVar15;
        iVar6 = (int)lVar4;
        dVar14 = dVar15;
        if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar15)) {
          auVar13._8_8_ = dVar15;
          auVar13._0_8_ = dVar15;
          uVar3 = movmskpd(iVar6,auVar13);
          dVar14 = (double)(longlong)(lVar5 - (ulonglong)(uVar3 & 1));
        }
        dVar15 = dVar15 - dVar14;
        iVar6 = iVar6 + (int)(longlong)dVar14;
        if ((0.0 < dVar15) && (0.99999994 < dVar15)) {
          dVar15 = 0.99999994;
        }
        fStackX_14 = (float)dVar15;
        if (0.0 <= fStackX_14) {
          if (0.99999994 <= fStackX_14) {
            fStackX_14 = 0.99999994;
          }
          goto LAB_141f439e3;
        }
      }
      *(int *)(lVar7 + *(longlong *)(param_1 + 0x10)) = iVar6;
      lVar4 = *(longlong *)(param_1 + 0x20);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 4;
      *(float *)(lVar12 + 8 + lVar4) = fVar2 * *(float *)(lVar12 + 8 + lVar4);
      *(float *)(lVar12 + 0xc + lVar4) = fVar2 * *(float *)(lVar12 + 0xc + lVar4);
      lVar12 = lVar12 + 0x1c;
    } while (iVar8 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 141f43a70 ChangePlaybackDirection body=28 status=ok
// SIG undefined ChangePlaybackDirection(void)

void UMovieSceneSequencePlayer::ChangePlaybackDirection(longlong param_1)

{
  *(uint *)(param_1 + 0x3cc) = *(uint *)(param_1 + 0x3cc) ^ 1;
  FUN_141f5ac00();
  return;
}



// FUNCTION 141f43a90 ChooseLowestRowIndex body=294 status=ok
// SIG undefined ChooseLowestRowIndex(void)

void MovieSceneSegmentCompiler::ChooseLowestRowIndex(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar4 = (int)param_1[9];
  if (iVar4 != 0) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1;
    }
    plVar7 = plVar3 + (longlong)iVar4 * 2;
    iVar1 = 0x7fffffff;
    for (; plVar3 != plVar7; plVar3 = plVar3 + 2) {
      iVar5 = iVar1;
      if ((((char)((ushort)*(undefined2 *)(*plVar3 + 0xc9) >> 8) == '\0') &&
          ((*(byte *)((longlong)plVar3 + 0xc) & 3) == 0)) &&
         (iVar5 = *(int *)(*plVar3 + 0xa8), iVar1 <= iVar5)) {
        iVar5 = iVar1;
      }
      iVar1 = iVar5;
    }
    iVar5 = iVar4 + -1;
    if (-1 < iVar5) {
      lVar6 = (longlong)iVar5 << 4;
      lVar8 = (longlong)iVar4 << 4;
      lVar9 = lVar6;
      do {
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = param_1;
        }
        if (((iVar1 < *(int *)(*(longlong *)(lVar6 + (longlong)plVar3) + 0xa8)) &&
            ((char)((ushort)*(undefined2 *)(*(longlong *)(lVar6 + (longlong)plVar3) + 0xc9) >> 8) ==
             '\0')) && ((*(byte *)(lVar6 + 0xc + (longlong)plVar3) & 3) == 0)) {
          iVar4 = (int)param_1[9];
          iVar2 = (iVar4 - iVar5) + -1;
          if (iVar2 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)plVar3 + lVar9),(void *)(lVar8 + (longlong)plVar3),
                       (longlong)iVar2 << 4);
            iVar4 = (int)param_1[9];
          }
          *(int *)(param_1 + 9) = iVar4 + -1;
        }
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -0x10;
        lVar6 = lVar6 + -0x10;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return;
}



// FUNCTION 141f43bc0 ClampRoot body=259 status=ok
// SIG undefined ClampRoot(void)

char * FGatherParameters::ClampRoot(longlong param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  
  cVar3 = *(char *)(param_1 + 0x28);
  pcVar1 = (char *)(param_1 + 0x28);
  if (((cVar3 != '\x02') && (*(char *)(param_1 + 0x30) != '\x02')) &&
     ((*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x2c) ||
      ((*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x34) &&
       ((cVar3 == '\0' || (*(char *)(param_1 + 0x30) == '\0')))))))) {
    *param_2 = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    return param_2;
  }
  cVar4 = *param_3;
  if (((cVar4 != '\x02') && (param_3[8] != '\x02')) &&
     ((*(int *)(param_3 + 0xc) < *(int *)(param_3 + 4) ||
      ((*(int *)(param_3 + 4) == *(int *)(param_3 + 0xc) &&
       ((cVar4 == '\0' || (param_3[8] == '\0')))))))) {
    *param_2 = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    return param_2;
  }
  pcVar7 = (char *)(param_1 + 0x30);
  pcVar2 = param_3 + 8;
  pcVar6 = pcVar2;
  if ((*(char *)(param_1 + 0x30) != '\x02') && (pcVar6 = pcVar7, *pcVar2 != '\x02')) {
    if ((*(int *)(param_3 + 0xc) <= *(int *)(param_1 + 0x34)) &&
       ((pcVar6 = pcVar2, *(int *)(param_1 + 0x34) <= *(int *)(param_3 + 0xc) && (*pcVar7 == '\0')))
       ) {
      pcVar6 = pcVar7;
    }
  }
  pcVar7 = param_3;
  cVar5 = cVar4;
  if ((cVar3 != '\x02') && (pcVar7 = pcVar1, cVar5 = cVar3, cVar4 != '\x02')) {
    if ((*(int *)(param_1 + 0x2c) <= *(int *)(param_3 + 4)) &&
       ((pcVar7 = param_3, cVar5 = cVar4, *(int *)(param_3 + 4) <= *(int *)(param_1 + 0x2c) &&
        (cVar3 == '\0')))) {
      pcVar7 = pcVar1;
      cVar5 = '\0';
    }
  }
  *param_2 = cVar5;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pcVar7 + 4);
  param_2[8] = *pcVar6;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar6 + 4);
  return param_2;
}



// FUNCTION 141f43d00 FUN_141f43d00 body=557 status=ok
// SIG undefined FUN_141f43d00(void)

void FUN_141f43d00(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  plVar2 = (longlong *)(param_1 + 0xa0);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 200);
  puVar1 = (uint *)(param_1 + 0xb0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_141f43ddc;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141f43ddc:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 200);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141f43ea2;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141f43ea2:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar8 = (longlong)(int)uStack_4c * 0xc0 + *plVar2;
    TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
    ::Reset(lVar8 + 0x18);
    TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
    ::Reset(lVar8 + 0x68);
    (**(code **)(*param_2 + 0x68))(param_2);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141f43f30 Combine body=316 status=ok
// SIG undefined Combine(void)

ulonglong * FMovieSceneAnimTypeID::Combine(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = (int)param_3;
  uVar5 = (uint)(param_3 >> 0x20);
  uVar3 = (int)((ulonglong)param_2 >> 0x20) - uVar5 ^ uVar5 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar5 ^ uVar3 << 8;
  uVar5 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar5 ^ uVar5 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar6 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar4 = (uVar3 - uVar1) - uVar6 ^ uVar6 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar3 = (int)param_2 - iVar2 ^ (uint)(param_3 >> 0xd) & 0x7ffff;
  uVar7 = (-0x61c88647 - uVar3) - iVar2 ^ uVar3 << 8;
  uVar5 = (iVar2 - uVar7) - uVar3 ^ uVar7 >> 0xd;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar3) - uVar5 ^ uVar3 << 10;
  *param_1 = ((ulonglong)((uVar6 - uVar1) - uVar4) << 0xf ^ (ulonglong)uVar1 & 0xffffffffffff8000)
             << 0x11 | (ulonglong)((uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xf);
  return param_1;
}



// FUNCTION 141f44070 FUN_141f44070 body=615 status=ok
// SIG undefined FUN_141f44070(void)

ulonglong FUN_141f44070(char *param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  ulonglong *puVar6;
  char cVar7;
  char cVar8;
  ulonglong in_RAX;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int local_38;
  char local_30;
  int local_28;
  char local_20;
  
  cVar12 = *param_1;
  if (cVar12 != '\x02') {
    in_RAX = 0;
    if ((param_1[8] != '\x02') &&
       ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 4) ||
        ((*(int *)(param_1 + 4) == *(int *)(param_1 + 0xc) &&
         ((cVar12 == '\0' || (param_1[8] == '\0')))))))) goto LAB_141f440f6;
  }
  cVar4 = *param_2;
  if (cVar4 != '\x02') {
    in_RAX = 0;
    if ((param_2[8] != '\x02') &&
       ((*(int *)(param_2 + 0xc) < *(int *)(param_2 + 4) ||
        ((*(int *)(param_2 + 4) == *(int *)(param_2 + 0xc) &&
         ((cVar4 == '\0' || (param_2[8] == '\0')))))))) goto LAB_141f440f6;
  }
  cVar5 = param_1[8];
  if (((cVar5 == '\x02') ||
      ((cVar4 == '\x02' ||
       (in_RAX = (ulonglong)*(uint *)(param_2 + 4), cVar7 = cVar4, cVar8 = cVar5,
       *(uint *)(param_1 + 0xc) != *(uint *)(param_2 + 4))))) &&
     ((param_2[8] == '\x02' ||
      ((cVar12 == '\x02' ||
       (in_RAX = (ulonglong)*(uint *)(param_1 + 4), cVar7 = cVar12, cVar8 = param_2[8],
       *(uint *)(param_2 + 0xc) != *(uint *)(param_1 + 4))))))) {
LAB_141f440f6:
    return in_RAX & 0xffffffffffffff00;
  }
  if (cVar8 == '\x01') {
    if (cVar7 != '\0') goto LAB_141f440f6;
  }
  else if ((cVar8 != '\0') || (cVar7 != '\x01')) goto LAB_141f440f6;
  iVar11 = *(int *)(param_1 + 0x50);
  if (iVar11 != *(int *)(param_2 + 0x50)) goto LAB_141f440f6;
  puVar14 = *(ulonglong **)(param_2 + 0x48);
  if (*(ulonglong **)(param_2 + 0x48) == (ulonglong *)0x0) {
    puVar14 = (ulonglong *)(param_2 + 0x18);
  }
  puVar6 = *(ulonglong **)(param_1 + 0x48);
  if (*(ulonglong **)(param_1 + 0x48) == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)(param_1 + 0x18);
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    uVar2 = *puVar14;
    uVar3 = *puVar6;
    local_38 = (int)uVar2;
    in_RAX = uVar2 & 0xffffffff;
    local_28 = (int)uVar3;
    if ((local_28 != local_38) ||
       (in_RAX = uVar3 >> 0x20, (int)(uVar3 >> 0x20) != (int)(uVar2 >> 0x20))) goto LAB_141f440f6;
    local_30 = (char)(int)puVar14[1];
    in_RAX = 0;
    local_20 = (char)(int)puVar6[1];
    if (local_20 != local_30) goto LAB_141f440f6;
    puVar14 = (ulonglong *)((longlong)puVar14 + 0xc);
    puVar6 = (ulonglong *)((longlong)puVar6 + 0xc);
  }
  in_RAX = 0;
  if (param_1[0x14] != param_2[0x14]) goto LAB_141f440f6;
  if (((cVar4 != '\x02') && (param_2[8] != '\x02')) &&
     ((*(int *)(param_2 + 0xc) < *(int *)(param_2 + 4) ||
      ((*(int *)(param_2 + 4) == *(int *)(param_2 + 0xc) &&
       ((cVar4 == '\0' || (param_2[8] == '\0')))))))) {
    uVar10 = *(undefined4 *)(param_1 + 4);
    pcVar9 = param_1 + 8;
    uVar13 = *(undefined4 *)(param_1 + 0xc);
    goto LAB_141f442a8;
  }
  if (((cVar12 == '\x02') || (cVar5 == '\x02')) ||
     ((*(int *)(param_1 + 4) <= *(int *)(param_1 + 0xc) &&
      ((*(int *)(param_1 + 4) != *(int *)(param_1 + 0xc) || ((cVar12 != '\0' && (cVar5 != '\0'))))))
     )) {
    pcVar1 = param_2 + 8;
    pcVar9 = pcVar1;
    if (param_2[8] != '\x02') {
      if (param_1[8] == '\x02') {
        pcVar9 = param_1 + 8;
      }
      else if (*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0xc)) {
        if (*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0xc)) {
          pcVar9 = param_1 + 8;
        }
        else {
          pcVar9 = param_1 + 8;
          if (param_2[8] == '\x01') {
            pcVar9 = pcVar1;
          }
        }
      }
    }
    if (cVar4 != '\x02') {
      if (cVar12 != '\x02') {
        if ((*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) ||
           ((*(int *)(param_2 + 4) <= *(int *)(param_1 + 4) && (cVar4 == '\x01'))))
        goto LAB_141f442a1;
      }
      param_2 = param_1;
      cVar4 = cVar12;
    }
  }
  else {
    pcVar9 = param_2 + 8;
  }
LAB_141f442a1:
  cVar12 = cVar4;
  uVar13 = *(undefined4 *)(pcVar9 + 4);
  uVar10 = *(undefined4 *)(param_2 + 4);
LAB_141f442a8:
  cVar4 = *pcVar9;
  *param_1 = cVar12;
  *(undefined4 *)(param_1 + 4) = uVar10;
  param_1[8] = cVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar13;
  return 1;
}



// FUNCTION 141f442e0 FUN_141f442e0 body=2157 status=ok
// SIG undefined FUN_141f442e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f442e0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStack_368 [32];
  undefined4 *local_348;
  undefined1 local_338;
  undefined8 local_334;
  ulonglong local_328;
  int local_320;
  uint uStack_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [4];
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined4 local_2dc;
  undefined1 local_2d8;
  undefined4 local_2d4;
  undefined1 local_2c8 [4];
  undefined4 local_2c4;
  undefined1 local_2c0;
  undefined4 local_2bc;
  undefined1 local_2b8 [4];
  undefined4 local_2b4;
  undefined1 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined1 local_258 [4];
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 uStack_1a8;
  longlong local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined4 uStack_188;
  longlong local_180;
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  int local_160;
  undefined4 uStack_15c;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_1f8 = param_2;
  lVar12 = (**(code **)(*param_2 + 8))(param_2,param_1);
  uVar17 = 0;
  local_2a8 = 0xffffffffffffffff;
  local_58 = 0;
  local_50 = 0;
  local_1f0 = lVar12 + 0xd0;
  local_2c4 = 0;
  local_2bc = 0;
  local_2b4 = 0;
  local_2ac = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_254 = 0;
  local_24c = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_c0._0_4_ = (uint)local_c0 & 0xffffff00;
  local_334 = 0xffffffffffffffff;
  local_248 = 0xffffffffffffffff;
  local_118 = local_78;
  local_c0 = CONCAT44(0x3f800000,(uint)local_c0);
  local_b4 = 0;
  local_2c8[0] = 2;
  local_2c0 = 2;
  local_2b8[0] = 2;
  local_2b0 = 2;
  local_2a0 = 0xffffffffffffffff;
  local_258[0] = 2;
  local_250 = 2;
  local_240 = 0xffffffffffffffff;
  local_100 = CONCAT71(local_100._1_7_,2);
  local_100 = local_100 & 0xffffffff;
  local_f8 = CONCAT71(local_f8._1_7_,2);
  local_f8 = local_f8 & 0xffffffff;
  local_f0 = CONCAT71(local_f0._1_7_,2);
  local_f0 = local_f0 & 0xffffffff;
  local_e8 = CONCAT71(local_e8._1_7_,2);
  local_e8 = local_e8 & 0xffffffff;
  local_e0 = CONCAT71(local_e0._1_7_,2);
  local_e0 = local_e0 & 0xffffffff;
  local_d8 = CONCAT71(local_d8._1_7_,2);
  local_d8 = local_d8 & 0xffffffff;
  local_d0 = CONCAT71(local_d0._1_7_,2);
  local_d0 = local_d0 & 0xffffffff;
  local_c8 = CONCAT71(local_c8._1_7_,2);
  local_c8 = local_c8 & 0xffffffff;
  local_b8 = 0;
  local_b0 = 0;
  local_110 = local_1f0;
  local_108 = param_2;
  FUN_141f503d0(param_1,&local_118,local_2c8);
  local_1e8 = (longlong *)(lVar12 + 0xa0);
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  FMovieSceneEvaluationField::operator=(local_1e8,&local_318);
  TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::
  ~TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>(&local_2f8);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (&local_308);
  if (local_318 != 0) {
    FMemory::Free();
  }
  local_328 = 0;
  local_320 = 0;
  uStack_31c = 0;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&local_318,local_2b8);
  uVar21 = uVar17;
  do {
    if (((int)local_308 == -1) && (local_308._4_4_ != 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      if (uVar21 != 0) {
        FMemory::Free(uVar21);
      }
      if (local_208 != 0) {
        FMemory::Free();
      }
      if (local_218 != 0) {
        FMemory::Free();
      }
      if (local_228 != 0) {
        FMemory::Free();
      }
      if (local_238 != 0) {
        FMemory::Free();
      }
      if (local_268 != 0) {
        FMemory::Free();
      }
      if (local_278 != 0) {
        FMemory::Free();
      }
      if (local_288 != 0) {
        FMemory::Free();
      }
      if (local_298 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      return;
    }
    local_320 = 0;
    if (((int)uVar17 < 0) && ((int)uVar17 != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (&local_328,0);
      uVar21 = local_328;
    }
    TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
    TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>(&local_1e0,local_2b8,local_308);
    local_1c8 = CONCAT44(uStack_1dc,local_1e0);
    lStack_1c0 = CONCAT44(uStack_1d4,iStack_1d8);
    local_334 = 0xffffffffffffffff;
    local_1b8 = local_1d0;
    TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
    TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>
              (&local_170,local_1c8,0xffffffffffffffff);
    lVar12 = local_1c8;
    lVar19 = lStack_1c0;
    iVar11 = (int)local_1b8;
    uVar20 = uStack_31c;
LAB_141f445e0:
    iVar3 = local_320;
    if (((lVar12 != local_170) || (lVar19 != local_168)) || (iVar11 != local_160)) {
      iVar2 = *(int *)(lVar19 + 0x1c);
      if (iVar2 == -1) {
        local_1a0 = 0;
        plVar14 = &local_1a0;
        local_198 = 0;
      }
      else {
        uStack_1a8 = *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 4 + (longlong)iVar2 * 0xc);
        plVar14 = &local_1b0;
        local_1b0 = *(longlong *)(lVar12 + 0x50) +
                    (longlong)*(int *)(*(longlong *)(lVar12 + 0x40) + (longlong)iVar2 * 0xc) * 0x28;
      }
      lVar18 = *plVar14;
      lVar22 = (longlong)local_320;
      lVar13 = (longlong)iVar11;
      local_320 = local_320 + 1;
      if ((int)uVar20 < local_320) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_328,iVar3);
        uVar20 = uStack_31c;
      }
      puVar1 = (undefined8 *)(lVar18 + lVar13 * 0x28);
      uVar4 = puVar1[1];
      puVar16 = (undefined8 *)(local_328 + lVar22 * 0x28);
      *puVar16 = *puVar1;
      puVar16[1] = uVar4;
      puVar16 = (undefined8 *)(lVar18 + 0x10 + lVar13 * 0x28);
      uVar4 = puVar16[1];
      puVar1 = (undefined8 *)(local_328 + 0x10 + lVar22 * 0x28);
      *puVar1 = *puVar16;
      puVar1[1] = uVar4;
      *(undefined8 *)(local_328 + 0x20 + lVar22 * 0x28) =
           *(undefined8 *)(lVar18 + 0x20 + lVar13 * 0x28);
      lVar18 = lVar19;
      iVar11 = iVar11 + 1;
      do {
        iVar3 = *(int *)(lVar18 + 0x1c);
        if (iVar3 == -1) {
          local_180 = 0;
          plVar14 = &local_180;
          local_178 = 0;
        }
        else {
          uStack_188 = *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 4 + (longlong)iVar3 * 0xc);
          plVar14 = &local_190;
          local_190 = *(longlong *)(lVar12 + 0x50) +
                      (longlong)*(int *)(*(longlong *)(lVar12 + 0x40) + (longlong)iVar3 * 0xc) *
                      0x28;
        }
        local_1e0 = (undefined4)*plVar14;
        uStack_1dc = *(undefined4 *)((longlong)plVar14 + 4);
        iStack_1d8 = (int)plVar14[1];
        uStack_1d4 = *(undefined4 *)((longlong)plVar14 + 0xc);
        uVar21 = local_328;
        if ((-1 < iVar11) && (lVar19 = lVar18, iVar11 < iStack_1d8)) break;
        if ((*(int *)(lVar18 + 0x10) != -1) || (lVar19 = 0, *(int *)(lVar18 + 0x14) == 0)) {
          iVar11 = (int)*(undefined8 *)(lVar18 + 0x10);
          lVar19 = lVar12;
          if (iVar11 != -1) {
            lVar19 = ((longlong)*(int *)(*(longlong *)(lVar12 + 0x20) + (longlong)iVar11 * 0xc) +
                     (longlong)(int)((ulonglong)*(undefined8 *)(lVar18 + 0x10) >> 0x20)) * 0x20 +
                     *(longlong *)(lVar12 + 0x30);
          }
        }
        lVar18 = lVar19;
        iVar11 = 0;
      } while (lVar19 != 0);
      goto LAB_141f445e0;
    }
    AlgoImpl::
    IntroSortInternal<FCompileOnTheFlyData,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_>
              (uVar21,(longlong)local_320,local_338,&LAB_141f66a00);
    local_118 = (undefined1 *)CONCAT71(local_118._1_7_,(undefined1)local_318);
    local_118 = (undefined1 *)CONCAT44(local_318._4_4_,(undefined4)local_118);
    local_110 = CONCAT71(local_110._1_7_,(undefined1)local_310);
    local_110 = CONCAT44(local_310._4_4_,(undefined4)local_110);
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    FMovieSceneCompiler::PopulateEvaluationGroup(&local_118,&local_328);
    local_2e8[0] = (undefined1)local_318;
    local_2e4 = local_318._4_4_;
    FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
              (&local_170,local_258,local_2e8);
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>
              (&local_150,local_258,CONCAT44(uStack_15c,local_160));
    local_348 = &local_138;
    local_138 = local_150;
    uStack_134 = uStack_14c;
    uStack_130 = uStack_148;
    uStack_12c = uStack_144;
    local_128 = local_140;
    FMovieSceneCompiler::PopulateMetaData(&local_118,local_1f0,local_1f8,&local_328);
    plVar14 = local_1e8;
    uVar6 = (undefined1)local_118;
    uVar8 = (undefined1)local_110;
    uVar7 = local_118._4_4_;
    iVar11 = (int)local_1e8[1];
    uVar9 = local_110._4_4_;
    local_2e0 = (undefined1)local_118;
    local_2dc = local_118._4_4_;
    local_2d8 = (undefined1)local_110;
    local_2d4 = local_110._4_4_;
    if ((iVar11 == 0) ||
       (cVar10 = TRange<FFrameNumber>::Overlaps((longlong)(iVar11 + -1) * 0x10 + *local_1e8),
       cVar10 == '\0')) {
      *(int *)(plVar14 + 1) = iVar11 + 1;
      if (*(int *)((longlong)plVar14 + 0xc) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar11);
      }
      puVar15 = (undefined1 *)((longlong)iVar11 * 0x10 + *plVar14);
      *puVar15 = uVar6;
      *(undefined4 *)(puVar15 + 4) = uVar7;
      puVar15[8] = uVar8;
      *(undefined4 *)(puVar15 + 0xc) = uVar9;
      iVar11 = (int)plVar14[5];
      *(int *)(plVar14 + 5) = iVar11 + 1;
      if (*(int *)((longlong)plVar14 + 0x2c) < iVar11 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar14 + 4,iVar11);
      }
      FMovieSceneEvaluationMetaData::FMovieSceneEvaluationMetaData
                ((longlong)iVar11 * 0x70 + plVar14[4]);
      lVar12 = plVar14[3];
      iVar11 = (int)lVar12 + 1;
      *(int *)(plVar14 + 3) = iVar11;
      if (*(int *)((longlong)plVar14 + 0x1c) < iVar11) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar14 + 2);
      }
      puVar16 = (undefined8 *)((longlong)(int)lVar12 * 0x20 + plVar14[2]);
      *puVar16 = 0;
      *puVar16 = local_108;
      local_108 = (longlong *)0x0;
      *(undefined4 *)(puVar16 + 1) = (undefined4)local_100;
      *(undefined4 *)((longlong)puVar16 + 0xc) = local_100._4_4_;
      local_100 = 0;
      puVar16[2] = 0;
      puVar16[2] = local_f8;
      local_f8 = 0;
      *(undefined4 *)(puVar16 + 3) = (undefined4)local_f0;
      *(undefined4 *)((longlong)puVar16 + 0x1c) = local_f0._4_4_;
      local_f0 = 0;
    }
    local_80 = 0;
    if (local_88 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_c8);
    if (local_d8 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
    FMovieSceneEvaluationTreeRangeIterator::operator++(&local_318);
    uVar17 = (ulonglong)uStack_31c;
    uVar21 = local_328;
  } while( true );
}



// FUNCTION 141f44b50 FUN_141f44b50 body=1041 status=ok
// SIG undefined FUN_141f44b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

char FUN_141f44b50(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 ******ppppppuVar8;
  char cVar9;
  ulonglong *puVar10;
  undefined8 *******pppppppuVar11;
  ulonglong uVar12;
  char cVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  longlong *local_130;
  ulonglong local_128;
  longlong local_120;
  undefined **local_118;
  longlong local_110;
  undefined8 local_108;
  uint local_100;
  int local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  int local_ec;
  undefined4 uStack_e8;
  uint local_e4;
  int local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  longlong *local_b8;
  longlong local_b0;
  char local_a8 [4];
  int local_a4;
  char local_a0;
  int local_9c;
  undefined1 local_98 [4];
  int local_94;
  undefined1 local_90;
  int local_8c;
  undefined1 local_88 [4];
  int local_84;
  undefined1 local_80;
  int local_7c;
  undefined8 *******local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar4 = *(uint *)(param_1 + 10);
  *(uint *)(param_2 + 0xf0) = *(uint *)(param_2 + 0xf0) & 0xfffffffc;
  *(uint *)(param_2 + 0xf0) = *(uint *)(param_2 + 0xf0) | (uVar4 >> 3 & 1) * 2 | uVar4 >> 2 & 1;
  local_120 = param_2;
  local_b8 = param_1;
  local_b0 = param_3;
  cVar9 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (cVar9 == '\x02') {
    puVar10 = (ulonglong *)(**(code **)(*param_1 + 0x2f0))();
    local_128 = 0;
    plVar14 = (longlong *)*puVar10;
    uVar12 = (longlong)(int)puVar10[1] & 0x1fffffffffffffff;
    if (plVar14 + (int)puVar10[1] < plVar14) {
      uVar12 = 0;
    }
    local_138 = uVar12;
    local_130 = plVar14;
    if (uVar12 != 0) {
      do {
        uVar15 = local_128;
        ppppppuVar8 = (undefined8 ******)*plVar14;
        cVar9 = *(char *)(ppppppuVar8 + 0x12);
        iVar5 = *(int *)((longlong)ppppppuVar8 + 0x94);
        cVar2 = *(char *)(ppppppuVar8 + 0x13);
        iVar6 = *(int *)((longlong)ppppppuVar8 + 0x9c);
        if ((((ulonglong)ppppppuVar8[0x16] & 1) != 0) &&
           ((((cVar9 == '\x02' || (cVar2 == '\x02')) ||
             ((iVar5 <= iVar6 && ((iVar5 != iVar6 || ((cVar9 != '\0' && (cVar2 != '\0')))))))) &&
            (local_130 = plVar14, (**(code **)(*local_b8 + 0x2b0))(local_b8,&local_78,ppppppuVar8),
            uVar12 = local_138, (local_48 & 1) != 0)))) {
          cVar13 = *(char *)((longlong)ppppppuVar8 + 0x51);
          if (cVar13 == '\x02') {
            cVar13 = *(char *)(local_b0 + 0x10);
          }
          pppppppuVar11 = &local_78;
          if ((local_48 & 2) == 0) {
            pppppppuVar11 = local_78;
          }
          plVar14 = (longlong *)(local_120 + 0xa0);
          *(char *)(pppppppuVar11 + 2) = cVar13;
          pppppppuVar11 = &local_78;
          if ((local_48 & 2) == 0) {
            pppppppuVar11 = local_78;
          }
          pppppppuVar11[3] = ppppppuVar8;
          iVar7 = *(int *)(local_120 + 0xa8);
          *(int *)(local_120 + 0xa8) = iVar7 + 1;
          if (*(int *)(local_120 + 0xac) < iVar7 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar14,iVar7);
          }
          plVar14 = (longlong *)((longlong)iVar7 * 0x38 + *plVar14);
          bVar3 = *(byte *)(plVar14 + 6);
          *(byte *)(plVar14 + 6) = bVar3 & 0xfe | 2;
          if ((local_48 & 1) != 0) {
            *(byte *)(plVar14 + 6) = bVar3 & 0xfe | 3;
            *(byte *)(plVar14 + 6) = *(byte *)(plVar14 + 6) & 0xfd;
            *(byte *)(plVar14 + 6) = *(byte *)(plVar14 + 6) | local_48 & 2;
            *plVar14 = (longlong)local_78;
            plVar14[1] = lStack_70;
            plVar14[2] = local_68;
            plVar14[3] = lStack_60;
            plVar14[4] = local_58;
            plVar14[5] = lStack_50;
            local_48 = local_48 & 0xfe;
          }
          lVar1 = local_120 + 0x40;
          uStack_f4 = 0x80000000;
          local_108 = CONCAT44(0x80000000,iVar7);
          local_118 = &PTR_FUN_144f1c870;
          local_f0 = local_f0 & 0xffffff00;
          local_d4 = 0xffffffff;
          uStack_d0 = 0;
          local_100 = local_f0;
          local_110 = lVar1;
          local_f8 = iVar7;
          local_a8[0] = cVar9;
          local_a4 = iVar5;
          local_a0 = cVar2;
          local_9c = iVar6;
          FMovieSceneEvaluationTree::AddTimeRange(lVar1,local_a8,&local_118,0xffffffff);
          if ((cVar9 != '\x02') && (0 < *(int *)(ppppppuVar8 + 0x14))) {
            local_e4 = CONCAT31(local_e4._1_3_,1);
            local_118 = &PTR_FUN_144f1c870;
            local_100 = local_e4;
            local_94 = iVar5 - *(int *)(ppppppuVar8 + 0x14);
            uStack_e8 = 0x80000000;
            local_108 = CONCAT44(0x80000000,iVar7);
            local_cc = 0xffffffff;
            uStack_c8 = 0;
            local_98[0] = 1;
            local_90 = 0;
            local_110 = lVar1;
            local_ec = iVar7;
            local_8c = iVar5;
            FMovieSceneEvaluationTree::AddTimeRange(lVar1,local_98,&local_118,0xffffffff);
          }
          if ((cVar2 != '\x02') && (0 < *(int *)((longlong)ppppppuVar8 + 0xa4))) {
            local_d8 = CONCAT31(local_d8._1_3_,2);
            local_118 = &PTR_FUN_144f1c870;
            local_100 = local_d8;
            local_7c = *(int *)((longlong)ppppppuVar8 + 0xa4) + 1 + iVar6;
            uStack_dc = 0x80000000;
            local_108 = CONCAT44(0x80000000,iVar7);
            local_c4 = 0xffffffff;
            uStack_c0 = 0;
            local_88[0] = 0;
            local_80 = 0;
            local_110 = lVar1;
            local_e0 = iVar7;
            local_84 = iVar6;
            FMovieSceneEvaluationTree::AddTimeRange(lVar1,local_88,&local_118,0xffffffff);
          }
          uVar15 = local_128;
          plVar14 = local_130;
          uVar12 = local_138;
          if ((local_48 & 1) != 0) {
            pppppppuVar11 = &local_78;
            if ((local_48 & 2) == 0) {
              pppppppuVar11 = local_78;
            }
            local_48 = local_48 & 0xfe;
            (*(code *)**pppppppuVar11)(pppppppuVar11,0);
            uVar12 = local_138;
            if ((local_48 & 2) == 0) {
              FMemory::Free(local_78);
              uVar12 = local_138;
            }
          }
        }
        plVar14 = plVar14 + 1;
        local_128 = uVar15 + 1;
        param_1 = local_b8;
        param_3 = local_b0;
        param_2 = local_120;
        local_130 = plVar14;
      } while (local_128 != uVar12);
    }
  }
  else if (cVar9 != '\0') {
    return cVar9;
  }
  *(longlong **)(param_2 + 0x38) = param_1;
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3);
  return '\0';
}



// FUNCTION 141f44f70 FUN_141f44f70 body=3777 status=ok
// SIG undefined FUN_141f44f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_141f44f70(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *****ppppplVar9;
  longlong ****pppplVar10;
  longlong *****ppppplVar11;
  longlong *****ppppplVar12;
  undefined8 *****pppppuVar13;
  int *piVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong ****pppplVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  undefined1 *puVar21;
  longlong *****ppppplVar22;
  undefined1 *puVar23;
  longlong *****ppppplVar24;
  int iVar25;
  undefined1 *puVar26;
  longlong *plVar27;
  byte bVar28;
  undefined4 uVar29;
  longlong ****pppplVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined1 local_288;
  undefined1 local_287;
  undefined1 local_286;
  int local_280;
  uint uStack_27c;
  undefined8 uStack_278;
  int local_270;
  int iStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  int iStack_258;
  uint uStack_254;
  uint local_250 [2];
  longlong local_248;
  uint local_240 [2];
  longlong ***local_238;
  longlong ***ppplStack_230;
  longlong *local_228;
  undefined1 *local_220;
  longlong ****local_218;
  undefined8 uStack_210;
  longlong ****local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 *local_1f0;
  undefined8 ***local_1e8;
  undefined4 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  byte local_1c8;
  longlong ****local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  longlong ****local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  byte local_188;
  undefined8 ****local_180;
  undefined4 uStack_178;
  byte local_170;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined1 local_160;
  undefined4 local_15c;
  undefined1 local_150 [40];
  undefined1 *local_128;
  undefined8 local_120;
  int local_118;
  char local_110;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  char local_f4;
  undefined1 local_f0 [48];
  undefined1 *local_c0;
  undefined8 local_b8;
  longlong ***local_a8;
  undefined8 local_a0;
  longlong ***local_98 [2];
  longlong ***local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  undefined8 ****local_58 [2];
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffff00000000);
  local_108[0] = *param_3;
  local_104 = *(undefined4 *)(param_3 + 4);
  local_1c8 = local_1c8 & 0xfe | 2;
  local_100 = param_3[8];
  plVar18 = *(longlong **)(param_1 + 0x38);
  local_fc = *(undefined4 *)(param_3 + 0xc);
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = 0;
  local_248 = param_1;
  local_220 = param_3;
  local_1f0 = param_2;
  if (plVar18 != (longlong *)0x0) {
    puVar8 = (undefined4 *)(**(code **)(*plVar18 + 0x280))(plVar18,local_58);
    if ((local_1c8 & 1) != 0) {
      puVar15 = (undefined8 *)&local_1d8;
      if ((local_1c8 & 2) == 0) {
        puVar15 = (undefined8 *)CONCAT44(uStack_1d4,local_1d8);
      }
      local_1c8 = local_1c8 & 0xfe;
      (**(code **)*puVar15)(puVar15,0);
      if ((local_1c8 & 2) == 0) {
        FMemory::Free(CONCAT44(uStack_1d4,local_1d8));
      }
    }
    if ((*(byte *)(puVar8 + 4) & 1) != 0) {
      *(byte *)(puVar8 + 4) = *(byte *)(puVar8 + 4) & 0xfe;
      local_1c8 = (local_1c8 | 1) ^ (*(byte *)(puVar8 + 4) ^ (local_1c8 | 1)) & 2;
      local_1d8 = *puVar8;
      uStack_1d4 = puVar8[1];
      uStack_1d0 = puVar8[2];
      uStack_1cc = puVar8[3];
    }
    if ((local_48 & 1) != 0) {
      pppppuVar13 = local_58;
      if ((local_48 & 2) == 0) {
        pppppuVar13 = (undefined8 *****)local_58[0];
      }
      local_48 = local_48 & 0xfe;
      (*(code *)**pppppuVar13)(pppppuVar13,0);
      if ((local_48 & 2) == 0) {
        FMemory::Free(local_58[0]);
      }
    }
  }
  bVar19 = local_1c8;
  plVar18 = (longlong *)0x0;
  if ((local_1c8 & 1) != 0) {
    plVar18 = (longlong *)&local_1d8;
    if ((local_1c8 & 2) == 0) {
      plVar18 = (longlong *)CONCAT44(uStack_1d4,local_1d8);
    }
  }
  local_228 = plVar18;
  TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
  TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>
            (&local_218,param_1 + 0x40,*(undefined8 *)(param_3 + 0x10));
  pppplVar30 = local_218;
  if (uStack_210 != 0) {
    iVar20 = *(int *)(uStack_210 + 0x1c);
    if (iVar20 == -1) {
      local_260 = (longlong *****)0x0;
      iStack_258 = 0;
    }
    else {
      local_260 = (longlong *****)
                  ((longlong)local_218[10] +
                  (longlong)*(int *)((longlong)local_218[8] + (longlong)iVar20 * 0xc) * 0xc);
      iStack_258 = *(int *)((longlong)local_218[8] + (longlong)iVar20 * 0xc + 4);
    }
    local_1c0 = (longlong ****)local_260;
    iStack_1b8 = iStack_258;
    uStack_1b4 = uStack_254;
    if ((-1 < (int)local_208) && ((int)local_208 < iStack_258)) {
      plVar18 = *(longlong **)(param_1 + 0x38);
      local_128 = (undefined1 *)0x0;
      local_120 = (undefined1 *)0x0;
      bVar32 = plVar18 == (longlong *)0x0;
      if (bVar32) {
        ppppplVar9 = &local_1c0;
        bVar19 = (byte)local_1b0 & 0xfe | 2;
        local_1b0 = (longlong ****)((ulonglong)local_1b0 & 0xfffffffffffffffe | 2);
      }
      else {
        ppppplVar9 = (longlong *****)(**(code **)(*plVar18 + 0x278))(plVar18,&local_180);
        bVar19 = (byte)local_1b0;
      }
      bVar28 = local_188 & 0xfe;
      local_188 = bVar28 | 2;
      if (((ulonglong)ppppplVar9[2] & 1) != 0) {
        local_188 = bVar28 | 3;
        *(byte *)(ppppplVar9 + 2) = *(byte *)(ppppplVar9 + 2) & 0xfe;
        local_188 = local_188 ^ (*(byte *)(ppppplVar9 + 2) ^ local_188) & 2;
        local_198 = *(undefined4 *)ppppplVar9;
        uStack_194 = *(undefined4 *)((longlong)ppppplVar9 + 4);
        uStack_190 = *(undefined4 *)(ppppplVar9 + 1);
        uStack_18c = *(undefined4 *)((longlong)ppppplVar9 + 0xc);
        bVar19 = (byte)local_1b0;
      }
      if ((bVar32) && ((bVar19 & 1) != 0)) {
        ppppplVar9 = &local_1c0;
        if ((bVar19 & 2) == 0) {
          ppppplVar9 = (longlong *****)local_1c0;
        }
        local_1b0 = (longlong ****)(CONCAT71(local_1b0._1_7_,bVar19) & 0xfffffffffffffffe);
        (*(code *)**ppppplVar9)(ppppplVar9,0);
        if (((ulonglong)local_1b0 & 2) == 0) {
          FMemory::Free(local_1c0);
        }
      }
      if ((!bVar32) && ((local_170 & 1) != 0)) {
        pppppuVar13 = &local_180;
        if ((local_170 & 2) == 0) {
          pppppuVar13 = (undefined8 *****)local_180;
        }
        local_170 = local_170 & 0xfe;
        (*(code *)**pppppuVar13)(pppppuVar13,0);
        if ((local_170 & 2) == 0) {
          FMemory::Free(local_180);
        }
      }
      local_238 = (longlong ***)&DAT_ffffffffffffffff;
      local_1c0 = local_218;
      iStack_1b8 = (int)uStack_210;
      uStack_1b4 = uStack_210._4_4_;
      local_1b0 = local_208;
      if ((local_188 & 1) == 0) {
        TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
        TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>
                  (&local_280,pppplVar30,0xffffffffffffffff);
        pppplVar30 = local_1c0;
        iVar20 = local_270;
        ppppplVar22 = uStack_278;
        ppppplVar9 = (longlong *****)CONCAT44(uStack_27c,local_280);
        ppppplVar24 = (longlong *****)CONCAT44(uStack_1b4,iStack_1b8);
        iVar6 = (int)local_1b0;
LAB_141f459b0:
        puVar23 = local_120;
        ppppplVar12 = (longlong *****)0x0;
        if ((((longlong *****)pppplVar30 != ppppplVar9) || (ppppplVar24 != ppppplVar22)) ||
           (iVar6 != iVar20)) {
          iVar7 = *(int *)((longlong)ppppplVar24 + 0x1c);
          if (iVar7 == -1) {
            local_218 = (longlong ****)0x0;
            ppppplVar11 = &local_218;
            uStack_210 = uStack_210 & 0xffffffff00000000;
          }
          else {
            iStack_1b8 = *(int *)((longlong)pppplVar30[8] + (longlong)iVar7 * 0xc + 4);
            ppppplVar11 = &local_1c0;
            local_1c0 = (longlong ****)
                        ((longlong)pppplVar30[10] +
                        (longlong)*(int *)((longlong)pppplVar30[8] + (longlong)iVar7 * 0xc) * 0xc);
          }
          iStack_258 = *(int *)((longlong)*ppppplVar11 + (longlong)iVar6 * 0xc);
          if ((-1 < iStack_258) && (iStack_258 < *(int *)(param_1 + 0xa8))) {
            puVar15 = (undefined8 *)((longlong)iStack_258 * 0x38 + *(longlong *)(param_1 + 0xa0));
            if ((*(byte *)(puVar15 + 6) & 2) == 0) {
              puVar15 = (undefined8 *)*puVar15;
            }
            ppppplVar12 = (longlong *****)puVar15[3];
          }
          lVar16 = (longlong)(int)local_120;
          uStack_254 = CONCAT31(uStack_254._1_3_,
                                *(undefined1 *)((longlong)*ppppplVar11 + (longlong)iVar6 * 0xc + 8))
          ;
          iVar7 = (int)local_120 + 1;
          local_120 = (undefined1 *)CONCAT44(local_120._4_4_,iVar7);
          local_260 = ppppplVar12;
          if (local_120._4_4_ < iVar7) {
            TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_168,(ulonglong)puVar23 & 0xffffffff);
          }
          puVar23 = local_168;
          if (local_128 != (undefined1 *)0x0) {
            puVar23 = local_128;
          }
          *(longlong ******)(puVar23 + lVar16 * 0x10) = local_260;
          *(longlong *)((longlong)(puVar23 + lVar16 * 0x10) + 8) = CONCAT44(uStack_254,iStack_258);
          ppppplVar12 = ppppplVar24;
          iVar6 = iVar6 + 1;
          do {
            iVar7 = *(int *)((longlong)ppppplVar12 + 0x1c);
            if (iVar7 == -1) {
              local_1e8 = (undefined8 ****)0x0;
              pppppuVar13 = (undefined8 *****)&local_1e8;
              uStack_1e0 = 0;
            }
            else {
              uStack_178 = *(undefined4 *)((longlong)pppplVar30[8] + (longlong)iVar7 * 0xc + 4);
              pppppuVar13 = &local_180;
              local_180 = (undefined8 *****)
                          ((longlong)pppplVar30[10] +
                          (longlong)*(int *)((longlong)pppplVar30[8] + (longlong)iVar7 * 0xc) * 0xc)
              ;
            }
            local_238 = (longlong ***)*pppppuVar13;
            ppplStack_230 = (longlong ***)pppppuVar13[1];
            param_1 = local_248;
            if ((-1 < iVar6) && (ppppplVar24 = ppppplVar12, iVar6 < *(int *)(pppppuVar13 + 1)))
            break;
            if ((*(int *)(ppppplVar12 + 2) != -1) ||
               (ppppplVar24 = (longlong *****)0x0, *(int *)((longlong)ppppplVar12 + 0x14) == 0)) {
              iVar6 = (int)ppppplVar12[2];
              ppppplVar24 = (longlong *****)pppplVar30;
              if (iVar6 != -1) {
                ppppplVar24 = (longlong *****)
                              (pppplVar30[6] +
                              ((longlong)*(int *)((longlong)pppplVar30[4] + (longlong)iVar6 * 0xc) +
                              (longlong)(int)((ulonglong)ppppplVar12[2] >> 0x20)) * 4);
              }
            }
            ppppplVar12 = ppppplVar24;
            iVar6 = 0;
          } while (ppppplVar24 != (longlong *****)0x0);
          goto LAB_141f459b0;
        }
      }
      else {
        local_a8 = (longlong ***)0x0;
        local_a0 = 0;
        local_88 = (longlong ***)0x0;
        local_80 = 0;
        local_78 = 0xffffffff;
        local_74 = 0;
        local_68 = (undefined1 *)0x0;
        local_60 = 0;
        TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
        TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>
                  (&local_280,pppplVar30,0xffffffffffffffff);
        pppplVar30 = local_1c0;
        ppppplVar9 = (longlong *****)CONCAT44(uStack_1b4,iStack_1b8);
        iVar20 = (int)local_1b0;
LAB_141f452f0:
        if ((((longlong *****)pppplVar30 != (longlong *****)CONCAT44(uStack_27c,local_280)) ||
            (ppppplVar9 != uStack_278)) || (iVar20 != local_270)) {
          iVar6 = *(int *)((longlong)ppppplVar9 + 0x1c);
          if (iVar6 == -1) {
            local_180 = (undefined8 *****)0x0;
            pppppuVar13 = &local_180;
            uStack_178 = 0;
          }
          else {
            uStack_1e0 = *(undefined4 *)((longlong)pppplVar30[8] + (longlong)iVar6 * 0xc + 4);
            pppppuVar13 = (undefined8 *****)&local_1e8;
            local_1e8 = (undefined8 ****)
                        ((longlong)pppplVar30[10] +
                        (longlong)*(int *)((longlong)pppplVar30[8] + (longlong)iVar6 * 0xc) * 0xc);
          }
          iVar6 = *(int *)((longlong)*pppppuVar13 + (longlong)iVar20 * 0xc);
          puVar15 = (undefined8 *)((longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0xa0));
          if ((*(byte *)(puVar15 + 6) & 2) == 0) {
            puVar15 = (undefined8 *)*puVar15;
          }
          ppppplVar22 = (longlong *****)puVar15[3];
          if (ppppplVar22 != (longlong *****)0x0) {
            local_240[0] = *(uint *)(ppppplVar22 + 0x15);
            uStack_254 = CONCAT31(uStack_254._1_3_,
                                  *(undefined1 *)
                                   ((longlong)*pppppuVar13 + (longlong)iVar20 * 0xc + 8));
            local_260 = ppppplVar22;
            iStack_258 = iVar6;
            if ((int)local_a0 != local_74) {
              puVar23 = local_70;
              if (local_68 != (undefined1 *)0x0) {
                puVar23 = local_68;
              }
              iVar6 = *(int *)(puVar23 + (longlong)(int)(local_60 - 1U & local_240[0]) * 4);
              while (iVar6 != -1) {
                lVar16 = (longlong)iVar6;
                if (*(uint *)(local_a8 + lVar16 * 0xc) == local_240[0]) {
                  if ((iVar6 != -1) &&
                     (pppplVar10 = (longlong ****)(local_a8 + lVar16 * 0xc),
                     pppplVar10 != (longlong ****)0x0)) goto LAB_141f45442;
                  break;
                }
                iVar6 = *(int *)(local_a8 + lVar16 * 0xc + 0xb);
              }
            }
            local_238 = (longlong ***)local_240;
            FUN_141f31090(&local_a8,local_250,&local_238,0);
            pppplVar10 = (longlong ****)(local_a8 + (longlong)(int)local_250[0] * 0xc);
LAB_141f45442:
            iVar6 = *(int *)(pppplVar10 + 10);
            *(int *)(pppplVar10 + 10) = iVar6 + 1;
            if (*(int *)((longlong)pppplVar10 + 0x54) < iVar6 + 1) {
              TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (pppplVar10 + 1,iVar6);
            }
            pppplVar17 = (longlong ****)pppplVar10[9];
            if ((longlong ****)pppplVar10[9] == (longlong ****)0x0) {
              pppplVar17 = pppplVar10 + 1;
            }
            pppplVar17[(longlong)iVar6 * 2] = (longlong ***)local_260;
            (pppplVar17 + (longlong)iVar6 * 2)[1] = (longlong ***)CONCAT44(uStack_254,iStack_258);
            param_1 = local_248;
          }
          ppppplVar22 = ppppplVar9;
          iVar20 = iVar20 + 1;
          do {
            iVar6 = *(int *)((longlong)ppppplVar22 + 0x1c);
            if (iVar6 == -1) {
              local_1c0 = (longlong ****)0x0;
              ppppplVar9 = &local_1c0;
              iStack_1b8 = 0;
            }
            else {
              uStack_210 = CONCAT44(uStack_210._4_4_,
                                    *(undefined4 *)
                                     ((longlong)pppplVar30[8] + (longlong)iVar6 * 0xc + 4));
              ppppplVar9 = &local_218;
              local_218 = (longlong ****)
                          ((longlong)pppplVar30[10] +
                          (longlong)*(int *)((longlong)pppplVar30[8] + (longlong)iVar6 * 0xc) * 0xc)
              ;
            }
            local_238 = (longlong ***)*ppppplVar9;
            ppplStack_230 = (longlong ***)ppppplVar9[1];
            if ((-1 < iVar20) && (ppppplVar9 = ppppplVar22, iVar20 < (int)ppplStack_230)) break;
            if ((*(int *)(ppppplVar22 + 2) != -1) ||
               (ppppplVar9 = (longlong *****)0x0, *(int *)((longlong)ppppplVar22 + 0x14) == 0)) {
              iVar20 = (int)ppppplVar22[2];
              ppppplVar9 = (longlong *****)pppplVar30;
              if (iVar20 != -1) {
                ppppplVar9 = (longlong *****)
                             (pppplVar30[6] +
                             ((longlong)*(int *)((longlong)pppplVar30[4] + (longlong)iVar20 * 0xc) +
                             (longlong)(int)((ulonglong)ppppplVar22[2] >> 0x20)) * 4);
              }
            }
            ppppplVar22 = ppppplVar9;
            iVar20 = 0;
          } while (ppppplVar9 != (longlong *****)0x0);
          goto LAB_141f452f0;
        }
        iVar20 = (int)local_80;
        uStack_278 = (longlong *****)local_98;
        local_280 = 0;
        uStack_27c = 1;
        iStack_26c = 0;
        iStack_268 = 0;
        if ((int)local_80 != 0) {
          pppplVar30 = local_98;
          if ((longlong ****)local_88 != (longlong ****)0x0) {
            pppplVar30 = (longlong ****)local_88;
          }
          uVar2 = *(uint *)pppplVar30;
          while (uVar2 == 0) {
            iStack_268 = iStack_268 + 0x20;
            if ((int)(((int)local_80 + -1 >> 0x1f & 0x1fU) + (int)local_80 + -1) >> 5 <= local_280)
            {
              iStack_26c = (int)local_80;
              local_280 = local_280 + 1;
              goto LAB_141f4560b;
            }
            uVar2 = *(uint *)((longlong)pppplVar30 + ((longlong)local_280 + 1) * 4);
            local_280 = local_280 + 1;
          }
          uStack_27c = -uVar2 & uVar2;
          iVar6 = 0x1f;
          if (uStack_27c != 0) {
            for (; uStack_27c >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          if (uStack_27c == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - iVar6;
          }
          iStack_26c = (iStack_268 - iVar6) + 0x1f;
          if ((int)local_80 < iStack_26c) {
            iStack_26c = (int)local_80;
          }
        }
LAB_141f4560b:
        uStack_200 = CONCAT44(iStack_26c,0xffffffff);
        local_218 = &local_a8;
        uStack_1f8 = CONCAT44(uStack_264,iStack_268);
        iStack_26c = (int)local_80;
        uStack_210 = CONCAT44(uStack_27c,local_280);
        local_208 = (longlong ****)uStack_278;
        local_270 = -1 << ((byte)local_80 & 0x1f);
        local_1c0 = &local_a8;
        iStack_1b8 = local_280;
        uStack_1b4 = uStack_27c;
        local_1b0 = (longlong ****)uStack_278;
        uStack_1a8 = uStack_200;
        local_1a0 = CONCAT44(uStack_264,iStack_268);
        while( true ) {
          iVar6 = uStack_1a8._4_4_;
          if (((uStack_1a8._4_4_ == iVar20) && (local_1b0 == local_98)) && (local_1c0 == &local_a8))
          break;
          pppplVar30 = (longlong ****)*local_1c0;
          plVar18 = (longlong *)&local_198;
          if ((local_188 & 2) == 0) {
            plVar18 = (longlong *)CONCAT44(uStack_194,local_198);
          }
          lVar16 = (longlong)uStack_1a8._4_4_;
          (**(code **)(*plVar18 + 8))(plVar18,pppplVar30 + lVar16 * 0xc + 1);
          iVar7 = *(int *)(pppplVar30 + (longlong)iVar6 * 0xc + 10);
          if (iVar7 != 0) {
            if (local_120._4_4_ < iVar7 + (int)local_120) {
              FUN_141f620a0(local_168);
            }
            pppplVar10 = (longlong ****)pppplVar30[(longlong)iVar6 * 0xc + 9];
            if ((longlong ****)pppplVar30[(longlong)iVar6 * 0xc + 9] == (longlong ****)0x0) {
              pppplVar10 = pppplVar30 + lVar16 * 0xc + 1;
            }
            puVar23 = local_168;
            if (local_128 != (undefined1 *)0x0) {
              puVar23 = local_128;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar23 + (longlong)(int)local_120 * 0x10,pppplVar10,(longlong)iVar7 << 4);
            local_120 = (undefined1 *)CONCAT44(local_120._4_4_,(int)local_120 + iVar7);
          }
          uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(uint)uStack_1a8 & ~uStack_1b4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1b8);
        }
        local_60 = 0;
        if (local_68 != (undefined1 *)0x0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_a8);
      }
      plVar18 = local_228;
      if (local_228 != (longlong *)0x0) {
        (**(code **)(*local_228 + 0x10))(local_228,local_168);
      }
      puVar23 = local_168;
      if (local_128 != (undefined1 *)0x0) {
        puVar23 = local_128;
      }
      puVar26 = puVar23 + (longlong)(int)local_120 * 0x10;
      uVar5 = local_b8;
      for (; puVar23 != puVar26; puVar23 = puVar23 + 0x10) {
        local_b8._0_4_ = (int)uVar5;
        lVar16 = (longlong)(int)local_b8;
        uVar2 = (uint)iStack_258 >> 8;
        iStack_258 = CONCAT31((int3)uVar2,puVar23[0xc]);
        local_b8._0_4_ = (int)local_b8 + 1;
        local_260 = (longlong *****)CONCAT44(0x80000000,*(undefined4 *)(puVar23 + 8));
        local_b8._4_4_ = (int)(uVar5 >> 0x20);
        if (local_b8._4_4_ < (int)local_b8) {
          TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_f0,uVar5 & 0xffffffff);
        }
        puVar21 = local_f0;
        if (local_c0 != (undefined1 *)0x0) {
          puVar21 = local_c0;
        }
        *(longlong ******)(puVar21 + lVar16 * 0xc) = local_260;
        *(int *)(puVar21 + lVar16 * 0xc + 8) = iStack_258;
        uVar5 = local_b8;
      }
      local_b8 = uVar5;
      if ((local_188 & 1) != 0) {
        puVar15 = (undefined8 *)&local_198;
        if ((local_188 & 2) == 0) {
          puVar15 = (undefined8 *)CONCAT44(uStack_194,local_198);
        }
        local_188 = local_188 & 0xfe;
        (**(code **)*puVar15)(puVar15,0);
        if ((local_188 & 2) == 0) {
          FMemory::Free(CONCAT44(uStack_194,local_198));
        }
      }
      param_3 = local_220;
      bVar19 = local_1c8;
      if (local_128 != (undefined1 *)0x0) {
        FMemory::Free();
        param_3 = local_220;
        bVar19 = local_1c8;
      }
    }
  }
  plVar27 = local_228;
  lVar16 = local_248;
  if ((int)local_b8 == 0) {
    if (plVar18 != (longlong *)0x0) {
      if (*(char *)((longlong)plVar18 + 9) != '\0') {
        uStack_27c = *(uint *)(param_3 + 4);
        uStack_278 = (longlong *****)CONCAT71(uStack_278._1_7_,param_3[8]);
        uStack_278 = (longlong *****)CONCAT44(*(undefined4 *)(param_3 + 0xc),(undefined4)uStack_278)
        ;
        local_270 = (int)*(undefined8 *)(param_3 + 0x10);
        iStack_26c = (int)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
        iStack_268 = (int)*(undefined8 *)(param_3 + 0x18);
        uStack_264 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
        local_280._0_1_ = *param_3;
        puVar23 = (undefined1 *)FMovieSceneEvaluationTreeRangeIterator::operator--(&local_280);
        local_288 = *puVar23;
        uVar3 = *(undefined8 *)(puVar23 + 0x10);
        local_250[0] = *(uint *)(puVar23 + 4);
        local_287 = puVar23[8];
        local_240[0] = *(uint *)(puVar23 + 0xc);
        local_220 = *(undefined1 **)(puVar23 + 0x18);
        local_280 = CONCAT31(local_280._1_3_,*param_3);
        uStack_27c = *(uint *)(param_3 + 4);
        uStack_278 = (longlong *****)CONCAT71(uStack_278._1_7_,param_3[8]);
        uStack_278 = (longlong *****)CONCAT44(*(undefined4 *)(param_3 + 0xc),(undefined4)uStack_278)
        ;
        local_270 = (int)*(undefined8 *)(param_3 + 0x10);
        iStack_26c = (int)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
        iStack_268 = (int)*(undefined8 *)(param_3 + 0x18);
        uStack_264 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
        puVar23 = (undefined1 *)FMovieSceneEvaluationTreeRangeIterator::operator++(&local_280);
        lVar16 = local_248;
        uVar4 = *(undefined8 *)(puVar23 + 0x10);
        local_286 = puVar23[8];
        uVar1 = *puVar23;
        uVar2 = *(uint *)(puVar23 + 4);
        local_260 = *(longlong ******)(puVar23 + 0x18);
        iVar20 = (int)((ulonglong)uVar4 >> 0x20);
        local_238 = (longlong ***)CONCAT44(local_238._4_4_,*(undefined4 *)(puVar23 + 0xc));
        iVar6 = (int)uVar3;
        iVar7 = (int)((ulonglong)uVar3 >> 0x20);
        if ((iVar6 == -1) && (iVar7 != 0)) {
          iVar6 = -1;
          uVar29 = *(undefined4 *)(puVar23 + 0xc);
        }
        else {
          local_280 = CONCAT31(local_280._1_3_,local_288);
          uStack_27c = local_250[0];
          uStack_278 = (longlong *****)CONCAT71(uStack_278._1_7_,local_287);
          uStack_278 = (longlong *****)CONCAT44(local_240[0],(undefined4)uStack_278);
          iStack_268 = (int)local_220;
          uStack_264 = (undefined4)((ulonglong)local_220 >> 0x20);
          local_270 = iVar6;
          iStack_26c = iVar7;
          piVar14 = (int *)FMovieSceneEvaluationTrack::GetSegmentFromIterator
                                     (local_248,local_250,&local_280);
          iVar6 = *piVar14;
          uVar29 = local_238._0_4_;
        }
        iVar7 = -1;
        iVar25 = (int)uVar4;
        if ((iVar25 != -1) || (iVar20 == 0)) {
          uStack_278 = (longlong *****)CONCAT71(uStack_278._1_7_,local_286);
          local_280 = CONCAT31(local_280._1_3_,uVar1);
          uStack_278 = (longlong *****)CONCAT44(uVar29,(undefined4)uStack_278);
          iStack_268 = (int)local_260;
          uStack_264 = (undefined4)((ulonglong)local_260 >> 0x20);
          uStack_27c = uVar2;
          local_270 = iVar25;
          iStack_26c = iVar20;
          piVar14 = (int *)FMovieSceneEvaluationTrack::GetSegmentFromIterator
                                     (lVar16,&local_238,&local_280);
          iVar7 = *piVar14;
        }
        plVar27 = local_228;
        if (iVar6 == -1) {
          lVar31 = 0;
        }
        else {
          lVar31 = (longlong)*(int *)(*(longlong *)(lVar16 + 0x18) + (longlong)iVar6 * 4) * 0x58 +
                   *(longlong *)(lVar16 + 0x28);
        }
        local_298 = 0;
        if (iVar7 != -1) {
          local_298 = (longlong)*(int *)(*(longlong *)(lVar16 + 0x18) + (longlong)iVar7 * 4) * 0x58
                      + *(longlong *)(lVar16 + 0x28);
        }
        (**(code **)(*local_228 + 8))(local_228,local_168,local_108,lVar31);
        puVar23 = local_120;
        bVar19 = local_1c8;
        if (local_110 != '\0') {
          local_108[0] = local_168[0];
          local_104 = local_164;
          local_100 = local_160;
          local_fc = local_15c;
          local_b8 = CONCAT44(local_b8._4_4_,local_118);
          if ((local_118 == 0) && (local_b8._4_4_ == 0)) {
            local_b8 = 0;
          }
          else {
            TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
                      (local_f0,local_118);
            puVar26 = local_150;
            if (puVar23 != (undefined1 *)0x0) {
              puVar26 = puVar23;
            }
            puVar23 = local_f0;
            if (local_c0 != (undefined1 *)0x0) {
              puVar23 = local_c0;
            }
            _guard_xfg_dispatch_icall_nop(puVar23,puVar26,(longlong)local_118 * 0xc);
          }
          bVar19 = local_1c8;
          if ((local_110 != '\0') && (local_110 = '\0', local_120 != (undefined1 *)0x0)) {
            FMemory::Free(local_120);
            bVar19 = local_1c8;
          }
        }
      }
      goto LAB_141f45d24;
    }
  }
  else {
LAB_141f45d24:
    if (plVar27 != (longlong *)0x0) {
      local_f4 = (char)plVar27[1];
      goto LAB_141f45d36;
    }
  }
  local_f4 = '\0';
LAB_141f45d36:
  puVar8 = local_1f0;
  if ((local_f4 == '\0') && ((int)local_b8 == 0)) {
    *local_1f0 = 0xffffffff;
    if ((bVar19 & 1) != 0) {
      puVar15 = (undefined8 *)&local_1d8;
      if ((bVar19 & 2) == 0) {
        puVar15 = (undefined8 *)CONCAT44(uStack_1d4,local_1d8);
      }
      local_1c8 = bVar19 & 0xfe;
      (**(code **)*puVar15)(puVar15,0);
      if ((local_1c8 & 2) == 0) {
        FMemory::Free(CONCAT44(uStack_1d4,local_1d8));
      }
    }
    if (local_c0 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FMovieSceneEvaluationTrackSegments::Add(lVar16 + 0x18,local_1f0,local_108);
    if ((local_1c8 & 1) != 0) {
      puVar15 = (undefined8 *)&local_1d8;
      if ((local_1c8 & 2) == 0) {
        puVar15 = (undefined8 *)CONCAT44(uStack_1d4,local_1d8);
      }
      local_1c8 = local_1c8 & 0xfe;
      (**(code **)*puVar15)(puVar15,0);
      if ((local_1c8 & 2) == 0) {
        FMemory::Free(CONCAT44(uStack_1d4,local_1d8));
      }
    }
    if (local_c0 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return puVar8;
}



// FUNCTION 141f45e40 FUN_141f45e40 body=2419 status=ok
// SIG undefined FUN_141f45e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_141f45e40(undefined1 *param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  char *pcVar11;
  longlong lVar12;
  longlong *plVar13;
  char cVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  char cVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  char local_2c8;
  char local_2c7;
  undefined8 local_2c0;
  char local_2b8 [4];
  uint local_2b4;
  uint local_2b0;
  undefined8 local_2a8;
  uint local_2a0;
  uint uStack_29c;
  undefined8 local_298;
  uint local_290 [2];
  undefined4 local_288;
  uint uStack_284;
  undefined4 uStack_280;
  uint uStack_27c;
  int iStack_278;
  int iStack_274;
  undefined8 local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  uint local_258;
  longlong local_248;
  longlong lStack_240;
  int local_238;
  char local_228 [4];
  uint local_224;
  char local_220 [4];
  uint local_21c;
  undefined1 local_218 [4];
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_140;
  undefined4 uStack_138;
  longlong local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_258 = param_2;
  local_158 = param_4;
  local_150 = (**(code **)(*param_4 + 8))(param_4);
  local_208 = 0xffffffffffffffff;
  local_2c0 = 0xffffffffffffffff;
  local_1a8 = 0xffffffffffffffff;
  local_118 = local_78;
  local_150 = local_150 + 0xd0;
  local_c0 = CONCAT44(0x3f800000,(undefined4)local_c0);
  local_268 = CONCAT71(local_268._1_7_,1);
  local_268 = CONCAT44(param_2,(undefined4)local_268);
  uStack_260 = CONCAT31(uStack_260._1_3_,1);
  local_58 = 0;
  local_50 = 0;
  local_228[0] = '\x02';
  local_224 = 0;
  local_220[0] = '\x02';
  local_21c = 0;
  local_218[0] = 2;
  local_214 = 0;
  local_210 = 2;
  local_20c = 0;
  local_200 = 0xffffffffffffffff;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8[0] = 2;
  local_1b4 = 0;
  local_1b0 = 2;
  local_1ac = 0;
  local_1a0 = 0xffffffffffffffff;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_100 = CONCAT71(local_100._1_7_,1);
  local_100 = CONCAT44(param_2,(undefined4)local_100);
  local_f8 = CONCAT71(local_f8._1_7_,1);
  local_f8 = CONCAT44(param_2,(undefined4)local_f8);
  local_f0 = CONCAT71(local_f0._1_7_,2);
  local_f0 = local_f0 & 0xffffffff;
  local_e8 = CONCAT71(local_e8._1_7_,2);
  local_e8 = local_e8 & 0xffffffff;
  local_e0 = CONCAT71(local_e0._1_7_,1);
  local_e0 = CONCAT44(param_2,(undefined4)local_e0);
  local_d8 = CONCAT71(local_d8._1_7_,1);
  local_d8 = CONCAT44(param_2,(undefined4)local_d8);
  local_d0 = CONCAT71(local_d0._1_7_,2);
  local_d0 = local_d0 & 0xffffffff;
  local_c8 = CONCAT71(local_c8._1_7_,2);
  local_c8 = local_c8 & 0xffffffff;
  local_c0 = local_c0 & 0xffffffffffffff00;
  local_b8 = 0;
  local_b0 = 0;
  local_b4 = 0;
  uStack_25c = param_2;
  local_110 = local_150;
  local_108 = param_4;
  FUN_141f503d0(param_3,&local_118,local_228);
  local_2c0 = CONCAT71(local_2c0._1_7_,1);
  local_2c0 = CONCAT44(param_2,(undefined4)local_2c0);
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&local_288,local_218,&local_2c0);
  uVar8 = uStack_27c;
  uVar20 = uStack_284;
  uVar6 = CONCAT44(iStack_274,iStack_278);
  if ((iStack_278 == -1) && (iStack_274 != 0)) {
    param_1[0xa0] = 0;
    FMovieSceneGatheredCompilerData::~FMovieSceneGatheredCompilerData(local_228);
    if (local_58 == 0) {
      return param_1;
    }
    FMemory::Free();
    return param_1;
  }
  cVar7 = (char)local_288;
  local_298 = CONCAT44(uStack_284,(undefined4)local_298);
  local_298 = CONCAT71(local_298._1_7_,(char)local_288);
  cVar21 = (char)uStack_280;
  local_290[0] = CONCAT31(local_290[0]._1_3_,cVar21);
  local_2c0 = CONCAT71(local_2c0._1_7_,1);
  local_2c0 = CONCAT44(param_2,(undefined4)local_2c0);
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (&local_288,local_1b8,&local_2c0);
  local_2c0._4_4_ = uStack_284;
  local_2b8[0] = (char)uStack_280;
  local_2b4 = uStack_27c;
  if ((((local_228[0] == '\x02') || (local_220[0] == '\x02')) ||
      (((int)local_224 <= (int)local_21c &&
       ((local_224 != local_21c || ((local_228[0] != '\0' && (local_220[0] != '\0')))))))) &&
     ((((char)local_288 == '\x02' || (local_2b8[0] == '\x02')) ||
      (((int)uStack_284 <= (int)uStack_27c &&
       ((uStack_284 != uStack_27c || (((char)local_288 != '\0' && (local_2b8[0] != '\0')))))))))) {
    if (local_220[0] == '\x02') {
      pcVar11 = local_2b8;
    }
    else if (local_2b8[0] == '\x02') {
      pcVar11 = local_220;
    }
    else if ((int)local_21c < (int)uStack_27c) {
      pcVar11 = local_220;
    }
    else if ((int)uStack_27c < (int)local_21c) {
      pcVar11 = local_2b8;
    }
    else {
      pcVar11 = local_220;
      if (local_220[0] != '\0') {
        pcVar11 = local_2b8;
      }
    }
    cVar14 = (char)local_288;
    uVar10 = uStack_284;
    if ((((local_228[0] != '\x02') &&
         (cVar14 = local_228[0], uVar10 = local_224, (char)local_288 != '\x02')) &&
        ((int)local_224 <= (int)uStack_284)) &&
       ((cVar14 = (char)local_288, uVar10 = uStack_284, (int)uStack_284 <= (int)local_224 &&
        (local_228[0] == '\0')))) {
      cVar14 = '\0';
      uVar10 = local_224;
    }
    cVar3 = *pcVar11;
    uVar4 = *(uint *)(pcVar11 + 4);
    _local_2a0 = CONCAT71(stack0xfffffffffffffd61,cVar3);
    local_2a8 = CONCAT71(local_2a8._1_7_,cVar14);
    local_2a8 = CONCAT44(uVar10,(undefined4)local_2a8);
    _local_2a0 = CONCAT44(uVar4,local_2a0);
    if ((((cVar14 == '\x02') || (cVar3 == '\x02')) ||
        (((int)uVar10 <= (int)uVar4 && ((uVar10 != uVar4 || ((cVar14 != '\0' && (cVar3 != '\0'))))))
        )) && (((cVar7 == '\x02' || (cVar21 == '\x02')) ||
               (((int)uVar20 <= (int)uVar8 &&
                ((uVar20 != uVar8 || ((cVar7 != '\0' && (cVar21 != '\0')))))))))) {
      if (cVar3 == '\x02') {
        puVar16 = local_290;
      }
      else if (cVar21 == '\x02') {
        puVar16 = &local_2a0;
      }
      else if ((int)uVar4 < (int)uVar8) {
        puVar16 = &local_2a0;
      }
      else if ((int)uVar8 < (int)uVar4) {
        puVar16 = local_290;
      }
      else {
        puVar16 = &local_2a0;
        if (cVar3 != '\0') {
          puVar16 = local_290;
        }
      }
      if (cVar14 == '\x02') {
        pcVar11 = (char *)&local_298;
      }
      else if (cVar7 == '\x02') {
        pcVar11 = (char *)&local_2a8;
      }
      else if ((int)uVar20 < (int)uVar10) {
        pcVar11 = (char *)&local_2a8;
      }
      else if ((int)uVar10 < (int)uVar20) {
        pcVar11 = (char *)&local_298;
      }
      else {
        pcVar11 = (char *)&local_2a8;
        if (cVar14 != '\0') {
          pcVar11 = (char *)&local_298;
        }
      }
      local_2c8 = *pcVar11;
      local_2c0._4_4_ = *(uint *)(pcVar11 + 4);
      local_2b8[0] = (char)*puVar16;
      local_2b4 = puVar16[1];
      local_2b0 = local_2c0._4_4_;
      if (local_2c8 == '\x02') {
LAB_141f46308:
        if (local_2b8[0] == '\x02') goto LAB_141f4630d;
        if ((int)param_2 < (int)local_2b4) {
          pcVar11 = local_2b8;
        }
        else if ((int)local_2b4 < (int)param_2) {
          pcVar11 = (char *)&uStack_260;
        }
        else {
          pcVar11 = local_2b8;
          if (local_2b8[0] != '\x01') {
            pcVar11 = (char *)&uStack_260;
          }
        }
      }
      else {
        if (local_2b8[0] != '\x02') {
          if (((int)local_2b4 < (int)local_2c0._4_4_) ||
             ((local_2c0._4_4_ == local_2b4 && ((local_2c8 == '\0' || (local_2b8[0] == '\0'))))))
          goto LAB_141f462f4;
          goto LAB_141f46308;
        }
LAB_141f4630d:
        pcVar11 = local_2b8;
      }
      if (local_2c8 != '\x02') {
        if ((int)local_2c0._4_4_ < (int)param_2) {
        }
        else {
          if (((int)param_2 < (int)local_2c0._4_4_) || (local_2c8 != '\x01')) {
            local_2b0 = param_2;
          }
          local_2c8 = '\x01';
        }
      }
      local_2c7 = *pcVar11;
      local_2c0 = CONCAT44(local_2c0._4_4_,*(undefined4 *)(pcVar11 + 4));
      goto LAB_141f46378;
    }
  }
LAB_141f462f4:
  local_2c8 = '\x01';
  local_2c7 = '\x01';
  local_2c0 = CONCAT44(local_2c0._4_4_,param_2);
  local_2b0 = param_2;
LAB_141f46378:
  uVar19 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  uStack_29c = 0;
  TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
  TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>(&local_288,local_218,uVar6);
  local_248 = CONCAT44(uStack_284,local_288);
  lStack_240 = CONCAT44(uStack_27c,uStack_280);
  local_298 = -1;
  local_238 = iStack_278;
  TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
  TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>
            (&local_288,local_248,0xffffffffffffffff);
  lVar9 = local_248;
  lVar18 = lStack_240;
  uVar22 = uVar19;
  uVar20 = uStack_29c;
  do {
    iVar15 = (int)uVar19;
    if (((lVar9 == CONCAT44(uStack_284,local_288)) && (lVar18 == CONCAT44(uStack_27c,uStack_280)))
       && (local_238 == iStack_278)) {
      AlgoImpl::
      IntroSortInternal<FCompileOnTheFlyData,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_>
                (uVar22,(longlong)iVar15,local_2c7,&LAB_141f66a00);
      local_118 = (undefined1 *)CONCAT71(local_118._1_7_,local_2c8);
      local_118 = (undefined1 *)CONCAT44(local_2b0,(undefined4)local_118);
      local_110 = CONCAT71(local_110._1_7_,local_2c7);
      local_110 = CONCAT44((undefined4)local_2c0,(undefined4)local_110);
      local_108 = (longlong *)0x0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      FMovieSceneCompiler::PopulateEvaluationGroup(&local_118,&local_2a8);
      local_298 = CONCAT71(local_298._1_7_,1);
      local_298 = CONCAT44(local_258,(undefined4)local_298);
      FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
                (&local_288,local_1b8,&local_298);
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>::
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>
                (&local_288,local_1b8,CONCAT44(iStack_274,iStack_278));
      local_2d8 = &local_248;
      FMovieSceneCompiler::PopulateMetaData(&local_118,local_150,local_158,&local_2a8);
      *param_1 = (undefined1)local_118;
      *(undefined4 *)(param_1 + 4) = local_118._4_4_;
      param_1[8] = (undefined1)local_110;
      *(undefined4 *)(param_1 + 0xc) = local_110._4_4_;
      *(longlong **)(param_1 + 0x10) = local_108;
      *(undefined4 *)(param_1 + 0x18) = (undefined4)local_100;
      *(undefined4 *)(param_1 + 0x1c) = local_100._4_4_;
      *(undefined8 *)(param_1 + 0x20) = local_f8;
      *(undefined4 *)(param_1 + 0x28) = (undefined4)local_f0;
      *(undefined4 *)(param_1 + 0x2c) = local_f0._4_4_;
      local_f0 = 0;
      local_108 = (longlong *)0x0;
      local_100 = 0;
      local_f8 = 0;
      FMovieSceneEvaluationMetaData::FMovieSceneEvaluationMetaData(param_1 + 0x30,&local_e8);
      param_1[0xa0] = 1;
      FCompiledGroupResult::~FCompiledGroupResult(&local_118);
      if (local_2a8 != 0) {
        FMemory::Free();
      }
      FMovieSceneGatheredCompilerData::~FMovieSceneGatheredCompilerData(local_228);
      if (local_58 != 0) {
        FMemory::Free();
      }
      return param_1;
    }
    iVar5 = *(int *)(lVar18 + 0x1c);
    if (iVar5 == -1) {
      local_298 = 0;
      plVar13 = &local_298;
      local_290[0] = 0;
    }
    else {
      uStack_260 = *(undefined4 *)(*(longlong *)(lVar9 + 0x40) + 4 + (longlong)iVar5 * 0xc);
      plVar13 = &local_268;
      local_268 = *(longlong *)(lVar9 + 0x50) +
                  (longlong)*(int *)(*(longlong *)(lVar9 + 0x40) + (longlong)iVar5 * 0xc) * 0x28;
    }
    lVar17 = *plVar13;
    lVar23 = (longlong)iVar15;
    lVar12 = (longlong)local_238;
    local_2a0 = iVar15 + 1U;
    if ((int)uVar20 < (int)(iVar15 + 1U)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_2a8,uVar19);
      uVar20 = uStack_29c;
    }
    uVar19 = (ulonglong)local_2a0;
    puVar2 = (undefined8 *)(lVar17 + lVar12 * 0x28);
    uVar6 = puVar2[1];
    puVar1 = (undefined8 *)(local_2a8 + lVar23 * 0x28);
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar12 * 0x28);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(local_2a8 + 0x10 + lVar23 * 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    *(undefined8 *)(local_2a8 + 0x20 + lVar23 * 0x28) =
         *(undefined8 *)(lVar17 + 0x20 + lVar12 * 0x28);
    lVar17 = lVar18;
    local_238 = local_238 + 1;
    do {
      iVar15 = *(int *)(lVar17 + 0x1c);
      if (iVar15 == -1) {
        local_130 = 0;
        plVar13 = &local_130;
        local_128 = 0;
      }
      else {
        uStack_138 = *(undefined4 *)(*(longlong *)(lVar9 + 0x40) + 4 + (longlong)iVar15 * 0xc);
        plVar13 = &local_140;
        local_140 = *(longlong *)(lVar9 + 0x50) +
                    (longlong)*(int *)(*(longlong *)(lVar9 + 0x40) + (longlong)iVar15 * 0xc) * 0x28;
      }
      local_248 = *plVar13;
      lStack_240 = plVar13[1];
      uVar22 = local_2a8;
      if ((-1 < local_238) && (lVar18 = lVar17, local_238 < (int)plVar13[1])) break;
      if ((*(int *)(lVar17 + 0x10) != -1) || (lVar18 = 0, *(int *)(lVar17 + 0x14) == 0)) {
        iVar15 = (int)*(undefined8 *)(lVar17 + 0x10);
        lVar18 = lVar9;
        if (iVar15 != -1) {
          lVar18 = ((longlong)*(int *)(*(longlong *)(lVar9 + 0x20) + (longlong)iVar15 * 0xc) +
                   (longlong)(int)((ulonglong)*(undefined8 *)(lVar17 + 0x10) >> 0x20)) * 0x20 +
                   *(longlong *)(lVar9 + 0x30);
        }
      }
      lVar17 = lVar18;
      local_238 = 0;
    } while (lVar18 != 0);
  } while( true );
}



// FUNCTION 141f467c0 FUN_141f467c0 body=1532 status=ok
// SIG undefined FUN_141f467c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f467c0(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined ***param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  char cVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_1b8 [32];
  undefined ***local_198;
  undefined8 *local_190;
  longlong local_188;
  char local_178;
  undefined ***local_170;
  undefined8 *local_168;
  ulonglong local_160 [2];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined **local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined **local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_170 = param_5;
  local_168 = param_6;
  local_160[0] = param_1;
  plVar7 = (longlong *)FUN_141f34500(param_3,param_4);
  if (plVar7 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    local_78 = 0;
    uVar16 = 0;
    local_b0 = param_7;
    local_80 = 0;
    local_68 = 0;
    local_50 = 0;
    uVar15 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar15 = uVar16;
    }
    uVar13 = uVar16;
    local_c8 = plVar7;
    local_c0 = param_1;
    local_b8 = param_2;
    if (uVar15 != 0) {
      do {
        puVar4 = (ulonglong *)*puVar12;
        local_198 = (undefined ***)&local_c8;
        puVar8 = puVar12;
        if ((puVar4[1] & 2) == 0) {
          puVar8 = puVar4;
        }
        (**(code **)(*(longlong *)*puVar8 + 8))
                  ((longlong *)*puVar8,local_88,*(undefined4 *)((longlong)puVar4 + 0x24),
                   (char)puVar4[5]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar15);
    }
    uVar6 = MovieScene::TMaskedBlendable<double,1>::Resolve<int>(local_88,&local_c8);
    uVar13 = local_160[0];
    local_188 = param_7;
    local_190 = local_168;
    local_198 = local_170;
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2,uVar6,local_160[0]);
    local_170 = (undefined ***)0xffffffff;
    iVar14 = -1;
    uVar15 = uVar16;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(local_160,param_2);
      local_170 = (undefined ***)local_160[0];
      iVar14 = (int)local_160[0];
      uVar15 = local_160[0] >> 0x20;
    }
    piVar11 = (int *)plVar7[3];
    piVar1 = piVar11 + (longlong)(int)plVar7[4] * 3;
    for (; piVar11 != piVar1; piVar11 = piVar11 + 3) {
      if ((*piVar11 == iVar14) && (piVar11[1] == (int)uVar15)) {
        lVar5 = plVar7[5];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146aca240) &&
           (_Init_thread_header(&DAT_146aca240), DAT_146aca240 == -1)) {
          DAT_146aca1d8 = DAT_146aca1d8 + 1;
          DAT_146aca238 =
               FMovieSceneAnimTypeID::GenerateHash(&DAT_146aca1d8,DAT_146aca1d8 & 0xffffffff);
          _Init_thread_footer(&DAT_146aca240);
        }
        FMovieSceneAnimTypeID::Combine(&local_168,lVar5,DAT_146aca238);
        if (param_2 == 0) {
          puVar9 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar7 + 1,local_98);
          local_110 = (longlong *)puVar9[1];
          local_118 = *puVar9;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
            UNLOCK();
          }
          local_120 = &PTR__scalar_deleting_destructor__144f1b018;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_110 + 0xc) = *(int *)((longlong)local_110 + 0xc) + 1;
            UNLOCK();
            if (local_110 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_110 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*local_110 + 8))(local_110,1);
              }
            }
          }
          puVar9 = local_168;
          plVar7 = *(longlong **)(uVar13 + 0x10);
          uVar15 = (longlong)*(int *)(uVar13 + 0x18) & 0x1fffffffffffffff;
          if (plVar7 + *(int *)(uVar13 + 0x18) < plVar7) {
            uVar15 = uVar16;
          }
          cVar10 = '\0';
          if (uVar15 != 0) {
            local_178 = '\x01';
            do {
              lVar5 = *plVar7;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x10);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar5 + 0x18);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_e0 = *(undefined4 *)(param_7 + 0x2d8);
              local_e8 = *(undefined8 *)(param_7 + 0x2d0);
              local_198 = &local_120;
              local_190 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,puVar9,&local_e8);
              uVar16 = uVar16 + 1;
              plVar7 = plVar7 + 1;
              cVar10 = local_178;
            } while (uVar16 != uVar15);
          }
          cVar3 = *(char *)(param_7 + 0x2dd);
          local_144 = DAT_1464d3e28;
          uStack_140 = 0xffffffff;
          uStack_13c = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464d3e28);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar3;
          if ((cVar10 == '\0') && (cVar3 != '\0')) {
            local_d0 = *(undefined4 *)(param_7 + 0x2d8);
            local_d8 = *(undefined8 *)(param_7 + 0x2d0);
            local_198 = &local_120;
            local_190 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar3,puVar9,&local_d8);
          }
          if (local_110 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_110 != (longlong *)0x0)) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
          local_120 = &PTR_FUN_143fcdb70;
          plVar7 = local_90;
        }
        else {
          puVar9 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar7 + 1,local_a8);
          local_128 = (longlong *)puVar9[1];
          local_130 = *puVar9;
          if (local_128 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_128 + 0xc) = *(int *)((longlong)local_128 + 0xc) + 1;
            UNLOCK();
          }
          local_138 = &PTR__scalar_deleting_destructor__144f1b000;
          if (local_128 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_128 + 0xc) = *(int *)((longlong)local_128 + 0xc) + 1;
            UNLOCK();
            if (local_128 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_128 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*local_128 + 8))(local_128,1);
              }
            }
          }
          puVar9 = local_168;
          plVar7 = *(longlong **)(uVar13 + 0x10);
          uVar15 = (longlong)*(int *)(uVar13 + 0x18) & 0x1fffffffffffffff;
          if (plVar7 + *(int *)(uVar13 + 0x18) < plVar7) {
            uVar15 = uVar16;
          }
          cVar10 = '\0';
          if (uVar15 != 0) {
            local_178 = '\x01';
            do {
              lVar5 = *plVar7;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x10);
              local_100 = *(undefined4 *)(lVar5 + 0x18);
              *(undefined4 *)(param_7 + 0x2d8) = local_100;
              local_190 = &local_108;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_108 = *(undefined8 *)(param_7 + 0x2d0);
              local_198 = (undefined ***)CONCAT71(local_198._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,puVar9,&local_138,param_2);
              uVar16 = uVar16 + 1;
              plVar7 = plVar7 + 1;
              cVar10 = local_178;
            } while (uVar16 != uVar15);
          }
          local_150 = DAT_1464d3e28;
          uStack_14c = 0xffffffff;
          uStack_148 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464d3e28);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar10 == '\0') {
            local_f0 = *(undefined4 *)(param_7 + 0x2d8);
            local_f8 = *(undefined8 *)(param_7 + 0x2d0);
            local_190 = &local_f8;
            local_198 = (undefined ***)CONCAT71(local_198._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,puVar9,&local_138,param_2);
          }
          if (local_128 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_128 != (longlong *)0x0)) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
          local_138 = &PTR_FUN_143fcdb70;
          plVar7 = local_a0;
        }
        if (plVar7 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar2 = plVar7 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141f46dc0 ComputeEffectiveRange body=95 status=ok
// SIG undefined ComputeEffectiveRange(void)

longlong FMovieSceneBoolChannel::ComputeEffectiveRange(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool local_10;
  undefined4 local_c;
  
  bVar2 = *(int *)(param_1 + 0x10) == 0;
  if (bVar2) {
    uVar1 = 0;
    local_c = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 8);
    local_c = (*(undefined4 **)(param_1 + 8))[(longlong)*(int *)(param_1 + 0x10) + -1];
  }
  local_10 = !bVar2;
  *(bool *)param_2 = !bVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(bool *)(param_2 + 8) = local_10;
  *(undefined4 *)(param_2 + 0xc) = local_c;
  return param_2;
}



// FUNCTION 141f46e20 ComputeEffectiveRange body=95 status=ok
// SIG undefined ComputeEffectiveRange(void)

longlong FMovieSceneFloatChannel::ComputeEffectiveRange(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool local_10;
  undefined4 local_c;
  
  bVar2 = *(int *)(param_1 + 0x18) == 0;
  if (bVar2) {
    uVar1 = 0;
    local_c = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x10);
    local_c = (*(undefined4 **)(param_1 + 0x10))[(longlong)*(int *)(param_1 + 0x18) + -1];
  }
  local_10 = !bVar2;
  *(bool *)param_2 = !bVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(bool *)(param_2 + 8) = local_10;
  *(undefined4 *)(param_2 + 0xc) = local_c;
  return param_2;
}



// FUNCTION 141f46e80 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
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



// FUNCTION 141f46f30 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
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



// FUNCTION 141f46fe0 FUN_141f46fe0 body=712 status=ok
// SIG undefined FUN_141f46fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f46fe0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(param_1 + 8);
  plVar8 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar4;
    plVar5 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar5 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar5 == lVar1) {
          if (iVar3 != -1) goto LAB_141f47072;
          break;
        }
        iVar3 = (int)plVar5[6];
      } while (iVar3 != -1);
    }
  }
  plVar5 = plVar8;
LAB_141f47072:
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aca250) &&
       (_Init_thread_header(&DAT_146aca250), DAT_146aca250 == -1)) {
      DAT_146aca1d8 = DAT_146aca1d8 + 1;
      DAT_146aca248 =
           (undefined8 ***)
           FMovieSceneAnimTypeID::GenerateHash(&DAT_146aca1d8,DAT_146aca1d8 & 0xffffffff);
      _Init_thread_footer(&DAT_146aca250);
    }
    pppuVar2 = DAT_146aca248;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar6 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar6 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar6 = (undefined8 ***)&PTR_FUN_144f1c900;
    local_58 = local_50;
    ppppuVar6[1] = pppuVar2;
    ppppuVar6[2] = (undefined8 ***)0x0;
    ppppuVar6[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar6 + 4) = 0x80000000;
    local_60 = plVar4;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar6 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar6 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar4;
      plVar4 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar4 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar7 == lVar1) {
            if (iVar3 != -1) goto LAB_141f471c1;
            break;
          }
          iVar3 = (int)plVar7[6];
        } while (iVar3 != -1);
      }
    }
    plVar7 = plVar8;
LAB_141f471c1:
    plVar7 = plVar7 + 1;
  }
  plVar4 = plVar7;
  if ((*(byte *)(plVar7 + 4) & 2) == 0) {
    plVar4 = (longlong *)*plVar7;
  }
  if (plVar4[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar7 + 4) & 2) == 0) {
      plVar7 = (longlong *)*plVar7;
    }
    bVar9 = *(int *)(param_1 + 0x38) == (int)plVar7[4];
    if ((int)plVar7[4] < *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(plVar7 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar7 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x38);
      *(int *)(plVar7 + 4) = iVar3;
      bVar9 = *(int *)(param_1 + 0x38) == iVar3;
    }
    if (bVar9) {
      iVar3 = (int)plVar7[3];
      *(int *)(plVar7 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 2,iVar3);
      }
      *(longlong *)(plVar7[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141f472b0 Consolidate body=499 status=ok
// SIG undefined Consolidate(void)

void FMovieSceneAccumulatedBlendState::Consolidate
               (longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  int local_res18 [4];
  int local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 ***local_48;
  undefined8 ***local_40;
  int local_38;
  
  if (((param_3[3] == 0 && param_3[2] == 0) && param_3[1] == 0) && *param_3 == 0) {
    local_40 = (undefined8 ***)0x0;
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_2,local_res18,0);
    if ((local_res18[0] == -1) || (lVar3 = (longlong)local_res18[0] * 0x60 + *param_2, lVar3 == 0))
    {
      local_48 = &local_40;
      TSet<TTuple<UObject_*,TMap<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,0>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMap<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,0>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<UObject_*_&&>_>(param_2,local_res18,&local_48,0);
      lVar3 = (longlong)local_res18[0] * 0x60 + *param_2;
    }
    plVar5 = (longlong *)*param_1;
    plVar2 = plVar5 + (longlong)(int)param_1[1] * 9;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 9) {
      plVar4 = plVar5;
      if ((*(byte *)(plVar5 + 8) & 2) == 0) {
        plVar4 = (longlong *)*plVar5;
      }
      (**(code **)(*plVar4 + 8))(plVar4,lVar3 + 8);
    }
  }
  else {
    IMovieScenePlayer::FindBoundObjects(param_4,&local_40,param_3,param_3 + 4);
    ppppuVar1 = (undefined8 ****)(local_40 + local_38);
    for (ppppuVar6 = (undefined8 ****)local_40; ppppuVar6 != ppppuVar1; ppppuVar6 = ppppuVar6 + 1) {
      local_50 = *(undefined4 *)ppppuVar6;
      local_4c = *(undefined4 *)((longlong)ppppuVar6 + 4);
      local_48 = (undefined8 ***)FWeakObjectPtr::Get(&local_50);
      if ((undefined8 ****)local_48 != (undefined8 ****)0x0) {
        TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
        ::FindId(param_2,local_res18,local_48);
        if ((local_res18[0] == -1) ||
           (lVar3 = (longlong)local_res18[0] * 0x60 + *param_2, lVar3 == 0)) {
          local_40 = &local_48;
          TSet<TTuple<UObject_*,TMap<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,0>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMap<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,0>_>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<UObject_*_&&>_>(param_2,local_58,&local_40,0);
          lVar3 = (longlong)local_58[0] * 0x60 + *param_2;
        }
        plVar5 = (longlong *)*param_1;
        plVar2 = plVar5 + (longlong)(int)param_1[1] * 9;
        for (; plVar5 != plVar2; plVar5 = plVar5 + 9) {
          plVar4 = plVar5;
          if ((*(byte *)(plVar5 + 8) & 2) == 0) {
            plVar4 = (longlong *)*plVar5;
          }
          (**(code **)(*plVar4 + 8))(plVar4,lVar3 + 8);
        }
      }
    }
  }
  return;
}



// FUNCTION 141f474b0 Contains body=152 status=ok
// SIG undefined Contains(void)

ulonglong TRange<FFrameNumber>::Contains(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte local_res8 [4];
  int local_resc;
  
  local_resc = *param_2;
  bVar1 = *param_1;
  pbVar4 = param_1;
  if (bVar1 == 2) {
    uVar3 = 2;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < local_resc) {
      uVar3 = (ulonglong)bVar1;
    }
    else {
      if ((local_resc < iVar2) || (bVar1 != 1)) {
        pbVar4 = local_res8;
      }
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
  }
  if (((byte)uVar3 == bVar1) &&
     (((byte)uVar3 == 2 ||
      (uVar3 = (ulonglong)*(uint *)(param_1 + 4), *(uint *)(pbVar4 + 4) == *(uint *)(param_1 + 4))))
     ) {
    bVar1 = param_1[8];
    pbVar4 = param_1 + 8;
    if (bVar1 == 2) {
      uVar3 = 2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      if (local_resc < iVar2) {
        uVar3 = (ulonglong)bVar1;
      }
      else {
        if ((iVar2 < local_resc) || (bVar1 != 1)) {
          pbVar4 = local_res8;
        }
        uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
    }
    if (((byte)uVar3 == bVar1) &&
       (((byte)uVar3 == 2 ||
        (uVar3 = (ulonglong)*(uint *)(param_1 + 0xc),
        *(uint *)(pbVar4 + 4) == *(uint *)(param_1 + 0xc))))) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141f47550 Contains body=174 status=ok
// SIG undefined Contains(void)

ulonglong TRange<FFrameNumber>::Contains(byte *param_1,byte *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  bVar1 = *param_1;
  if (bVar1 == 2) {
    uVar2 = 2;
    pbVar3 = param_1;
  }
  else {
    uVar2 = (ulonglong)*param_2;
    pbVar3 = param_2;
    if (*param_2 != 2) {
      if (*(int *)(param_1 + 4) < *(int *)(param_2 + 4)) {
        uVar2 = (ulonglong)bVar1;
        pbVar3 = param_1;
      }
      else if ((*(int *)(param_1 + 4) <= *(int *)(param_2 + 4)) && (bVar1 == 1)) {
        uVar2 = 1;
        pbVar3 = param_1;
      }
    }
  }
  if (((byte)uVar2 == bVar1) &&
     (((byte)uVar2 == 2 ||
      (uVar2 = (ulonglong)*(uint *)(param_1 + 4), *(uint *)(pbVar3 + 4) == *(uint *)(param_1 + 4))))
     ) {
    bVar1 = param_1[8];
    pbVar3 = param_1 + 8;
    pbVar4 = param_2 + 8;
    if (bVar1 == 2) {
      uVar2 = 2;
      pbVar4 = pbVar3;
    }
    else {
      uVar2 = (ulonglong)*pbVar4;
      if (*pbVar4 != 2) {
        if (*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0xc)) {
          uVar2 = (ulonglong)bVar1;
          pbVar4 = pbVar3;
        }
        else if ((*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0xc)) && (bVar1 == 1)) {
          uVar2 = 1;
          pbVar4 = pbVar3;
        }
      }
    }
    if (((byte)uVar2 == bVar1) &&
       (((byte)uVar2 == 2 ||
        (uVar2 = (ulonglong)*(uint *)(param_1 + 0xc),
        *(uint *)(pbVar4 + 4) == *(uint *)(param_1 + 0xc))))) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141f47600 ConvertFrameTime body=310 status=ok
// SIG undefined ConvertFrameTime(void)

int * ConvertFrameTime(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fStackX_14;
  
  iVar6 = (int)((ulonglong)param_4 >> 0x20);
  iVar5 = (int)((ulonglong)param_3 >> 0x20);
  if (((int)param_3 == (int)param_4) && (iVar5 == iVar6)) {
    *(undefined8 *)param_1 = param_2;
    return param_1;
  }
  fStackX_14 = (float)((ulonglong)param_2 >> 0x20);
  lVar7 = (longlong)(iVar5 * (int)param_4);
  lVar4 = (longlong)(iVar6 * (int)param_3);
  lVar3 = ((int)param_2 * lVar7) / lVar4;
  dVar11 = 1.0 / (double)lVar4;
  dVar10 = (double)lVar7;
  dVar11 = ((double)(int)param_2 * dVar10 * dVar11 - (double)lVar3) +
           (double)fStackX_14 * dVar10 * dVar11;
  lVar4 = (longlong)dVar11;
  dVar10 = dVar11;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar11)) {
    auVar1._8_4_ = SUB84(dVar11,0);
    auVar1._0_8_ = dVar11;
    auVar1._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    uVar2 = movmskpd(0,auVar1);
    dVar10 = (double)(longlong)(lVar4 - (ulonglong)(uVar2 & 1));
  }
  dVar11 = dVar11 - dVar10;
  if ((0.0 < dVar11) && (0.99999994 < dVar11)) {
    dVar11 = 0.99999994;
  }
  fVar8 = (float)dVar11;
  *param_1 = (int)lVar3 + (int)(longlong)dVar10;
  fVar9 = 0.0;
  if ((0.0 <= fVar8) && (fVar9 = fVar8, 0.99999994 <= fVar8)) {
    fVar9 = 0.99999994;
  }
  param_1[1] = (int)fVar9;
  return param_1;
}



// FUNCTION 141f47740 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneSubTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneSubSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141f477f0 CreateTemplateForSection body=30 status=ok
// SIG undefined CreateTemplateForSection(void)

undefined8
UMovieSceneTrack::CreateTemplateForSection(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  (**(code **)(*param_3 + 0x298))(param_3);
  return param_2;
}



// FUNCTION 141f47810 CycleTime body=1118 status=ok
// SIG undefined CycleTime(void)

ulonglong * CycleTime(ulonglong *param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 local_res8;
  
  fVar13 = (float)(param_4 >> 0x20);
  iVar4 = (int)param_4;
  *param_1 = param_4;
  param_1[1] = 0;
  iVar7 = param_3 - param_2;
  if (iVar7 == 0) {
    *(int *)((longlong)param_1 + 4) = 0;
    *(int *)param_1 = param_3;
    return param_1;
  }
  if ((iVar4 < param_2) || ((iVar4 == param_2 && (fVar13 < 0.0)))) {
    local_res8._4_4_ = 0.0 - fVar13;
    iVar3 = (int)ROUND((local_res8._4_4_ + local_res8._4_4_) - 0.5) >> 1;
    iVar6 = (param_3 - iVar4) + iVar3;
    local_res8._4_4_ = local_res8._4_4_ - (float)iVar3;
    if (0.0 <= local_res8._4_4_) {
      if (0.99999994 <= local_res8._4_4_) {
        local_res8._4_4_ = 0.99999994;
      }
    }
    else {
      local_res8._4_4_ = 0.0;
    }
    auVar15._0_8_ = ((double)local_res8._4_4_ + (double)iVar6) / (double)iVar7;
    lVar5 = (longlong)auVar15._0_8_;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar15._0_8_)) {
      auVar15._8_8_ = auVar15._0_8_;
      uVar1 = movmskpd(iVar6,auVar15);
      auVar15._0_8_ = (double)(longlong)(lVar5 - (ulonglong)(uVar1 & 1));
    }
    iVar6 = (int)auVar15._0_8_;
    auVar14._0_8_ = ((double)iVar7 + 0.0) * (double)iVar6;
    lVar5 = (longlong)auVar14._0_8_;
    auVar15._0_8_ = auVar14._0_8_;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar14._0_8_)) {
      auVar10._8_8_ = auVar14._0_8_;
      auVar10._0_8_ = auVar14._0_8_;
      uVar1 = movmskpd(iVar7,auVar10);
      auVar15._0_8_ = (double)(longlong)(lVar5 - (ulonglong)(uVar1 & 1));
    }
    auVar14._0_8_ = auVar14._0_8_ - auVar15._0_8_;
    dVar11 = 0.0;
    if ((0.0 <= auVar14._0_8_) && (dVar11 = 0.9999999403953552, auVar14._0_8_ <= 0.9999999403953552)
       ) {
      dVar11 = auVar14._0_8_;
    }
    fVar8 = (float)dVar11;
    if (0.0 <= fVar8) {
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
    }
    else {
      fVar8 = 0.0;
    }
    fVar8 = fVar8 + fVar13;
    uVar1 = ((int)ROUND((fVar8 + fVar8) - 0.5) >> 1) + (int)auVar15._0_8_ + iVar4;
    iVar4 = (int)fVar8;
    fVar13 = fVar8;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar8)) {
      auVar12._4_4_ = fVar8;
      auVar12._0_4_ = fVar8;
      auVar12._8_8_ = 0;
      uVar2 = movmskps(uVar1,auVar12);
      fVar13 = (float)(int)(iVar4 - (uVar2 & 1));
    }
    fVar13 = fVar8 - fVar13;
  }
  else {
    if (iVar4 <= param_3) {
      if (iVar4 != param_3) {
        return param_1;
      }
      if (fVar13 <= 0.0) {
        return param_1;
      }
    }
    local_res8._4_4_ = fVar13 - 0.0;
    iVar3 = (int)ROUND((local_res8._4_4_ + local_res8._4_4_) - 0.5) >> 1;
    iVar6 = (iVar3 - param_2) + iVar4;
    local_res8._4_4_ = local_res8._4_4_ - (float)iVar3;
    if (0.0 <= local_res8._4_4_) {
      if (0.99999994 <= local_res8._4_4_) {
        local_res8._4_4_ = 0.99999994;
      }
    }
    else {
      local_res8._4_4_ = 0.0;
    }
    auVar14._0_8_ = ((double)iVar6 + (double)local_res8._4_4_) / (double)iVar7;
    lVar5 = (longlong)auVar14._0_8_;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar14._0_8_)) {
      auVar14._8_8_ = auVar14._0_8_;
      uVar1 = movmskpd(iVar6,auVar14);
      auVar14._0_8_ = (double)(longlong)(lVar5 - (ulonglong)(uVar1 & 1));
    }
    iVar6 = (int)auVar14._0_8_;
    auVar14._0_8_ = ((double)iVar7 + 0.0) * (double)iVar6;
    lVar5 = (longlong)auVar14._0_8_;
    auVar15._0_8_ = auVar14._0_8_;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar14._0_8_)) {
      auVar9._8_8_ = auVar14._0_8_;
      auVar9._0_8_ = auVar14._0_8_;
      uVar1 = movmskpd(iVar7,auVar9);
      auVar15._0_8_ = (double)(longlong)(lVar5 - (ulonglong)(uVar1 & 1));
    }
    auVar14._0_8_ = auVar14._0_8_ - auVar15._0_8_;
    dVar11 = 0.0;
    if ((0.0 <= auVar14._0_8_) && (dVar11 = 0.9999999403953552, auVar14._0_8_ <= 0.9999999403953552)
       ) {
      dVar11 = auVar14._0_8_;
    }
    fVar8 = (float)dVar11;
    if (0.0 <= fVar8) {
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
    }
    else {
      fVar8 = 0.0;
    }
    fVar13 = fVar13 - fVar8;
    iVar7 = (int)ROUND((fVar13 + fVar13) - 0.5) >> 1;
    uVar1 = (iVar7 - (int)auVar15._0_8_) + iVar4;
    fVar13 = fVar13 - (float)iVar7;
  }
  if (0.0 <= fVar13) {
    if (0.99999994 <= fVar13) {
      fVar13 = 0.99999994;
    }
    local_res8 = CONCAT44(fVar13,uVar1);
  }
  else {
    local_res8 = (ulonglong)uVar1;
  }
  *param_1 = local_res8;
  *(int *)(param_1 + 1) = iVar6;
  return param_1;
}



// FUNCTION 141f47c70 DefaultEvaluate body=474 status=ok
// SIG undefined DefaultEvaluate(void)

void FMovieSceneEvaluationTrack::DefaultEvaluate
               (longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5,
               longlong param_6)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  int *piVar11;
  undefined1 local_8c [16];
  undefined1 local_78 [80];
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    lVar7 = FMovieSceneContext::FMovieSceneContext(local_78,param_4);
    if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x20))) &&
       (iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 4), iVar3 != -1)) {
      lVar9 = (longlong)iVar3 * 0x58 + *(longlong *)(param_1 + 0x28);
      piVar11 = *(int **)(lVar9 + 0x48);
      if (*(int **)(lVar9 + 0x48) == (int *)0x0) {
        piVar11 = (int *)(lVar9 + 0x18);
      }
      piVar1 = piVar11 + (longlong)*(int *)(lVar9 + 0x50) * 3;
      auVar4 = local_8c;
      for (; piVar11 != piVar1; piVar11 = piVar11 + 3) {
        plVar10 = (longlong *)((longlong)*piVar11 * 0x38 + *(longlong *)(param_1 + 0xa0));
        if ((*(byte *)(plVar10 + 6) & 2) == 0) {
          plVar10 = (longlong *)*plVar10;
        }
        *(int *)(lVar7 + 0x24) = piVar11[1];
        bVar6 = *(byte *)(piVar11 + 2) & 1;
        bVar8 = *(byte *)(piVar11 + 2) >> 1 & 1;
        if (*(int *)(lVar7 + 0x20) == 0) {
          bVar6 = bVar6 << 2 | *(byte *)(lVar7 + 0x40) & 0xf3 | bVar8 << 3;
        }
        else {
          bVar6 = bVar8 << 2 | *(byte *)(lVar7 + 0x40) & 0xf3 | bVar6 << 3;
        }
        *(byte *)(lVar7 + 0x40) = bVar6;
        local_8c._8_4_ = *piVar11;
        uVar2 = *(undefined8 *)(param_5 + 0x18);
        *(undefined8 *)(param_5 + 0x24) = uVar2;
        local_8c._0_8_ = auVar4._0_8_;
        *(undefined4 *)(param_5 + 0x2c) = local_8c._8_4_;
        local_8c._13_3_ = auVar4._13_3_;
        local_8c[0xc] = (char)plVar10[2];
        auVar4._8_4_ = local_8c._8_4_;
        auVar4._0_8_ = uVar2;
        auVar4._12_4_ = local_8c._12_4_;
        auVar5._8_4_ = local_8c._8_4_;
        auVar5._0_8_ = uVar2;
        auVar5._12_4_ = local_8c._12_4_;
        *(undefined1 (*) [16])(param_6 + 0x124) = auVar5;
        FMovieSceneContext::FMovieSceneContext(param_6 + 0x134,lVar7);
        (**(code **)(*plVar10 + 0x30))(plVar10,param_3,lVar7,param_5,param_6);
      }
    }
  }
  else if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_141f4c6b0(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 141f47e50 FUN_141f47e50 body=589 status=ok
// SIG undefined FUN_141f47e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f47e50(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *****pppppuVar5;
  undefined **ppuVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  int local_c8;
  int iStack_c4;
  undefined **local_b8;
  longlong local_b0;
  int local_a8;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined4 uStack_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 ****local_50 [2];
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar4 = FMovieSceneEvaluationTemplate::FindTrack();
  if (lVar4 == 0) {
    return;
  }
  (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x280))(*(longlong **)(lVar4 + 0x38),local_50);
  if ((local_40 & 1) != 0) {
    pppppuVar5 = local_50;
    if ((local_40 & 2) == 0) {
      pppppuVar5 = (undefined8 *****)local_50[0];
    }
    if (*(char *)((longlong)pppppuVar5 + 9) != '\0') {
      bVar3 = true;
      if (param_3 != '\0') {
        local_e8 = CONCAT31(local_e8._1_3_,2);
        uStack_e4 = 0;
        local_e0 = 2;
        local_dc = 0;
        FMovieSceneEvaluationField::Invalidate(param_1 + 0xa0,&local_e8);
        param_3 = '\0';
      }
      goto LAB_141f47f05;
    }
  }
  bVar3 = false;
LAB_141f47f05:
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (local_d8,lVar4 + 0x40);
  do {
    if ((local_c8 == -1) && (iStack_c4 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      if ((local_40 & 1) != 0) {
        pppppuVar5 = local_50;
        if ((local_40 & 2) == 0) {
          pppppuVar5 = (undefined8 *****)local_50[0];
        }
        local_40 = local_40 & 0xfe;
        (*(code *)**pppppuVar5)(pppppuVar5,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_50[0]);
        }
      }
      return;
    }
    if (bVar3) {
LAB_141f47fb5:
      local_b0 = param_1 + 0x230;
      local_a0[0] = local_d8[0];
      local_9c = local_d4;
      local_98 = local_d0;
      local_e8 = 0xffffffff;
      uStack_e4 = 0;
      local_94 = local_cc;
      local_b8 = &PTR_FUN_144f1c840;
      local_a8 = param_2;
      FMovieSceneEvaluationTree::AddTimeRange(local_b0,local_a0,&local_b8,0xffffffff);
      if (param_3 != '\0') {
        local_90 = local_d8[0];
        local_8c = local_d4;
        local_88 = local_d0;
        local_84 = local_cc;
        FMovieSceneEvaluationField::Invalidate(param_1 + 0xa0);
      }
    }
    else {
      TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
      TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>(&local_b8);
      if (local_b0 != 0) {
        iVar1 = *(int *)(local_b0 + 0x1c);
        if (iVar1 == -1) {
          local_70 = (undefined *)0x0;
          ppuVar6 = &local_70;
          local_68 = 0;
        }
        else {
          uStack_78 = *(undefined4 *)(local_b8[8] + (longlong)iVar1 * 0xc + 4);
          ppuVar6 = &local_80;
          local_80 = local_b8[10] + (longlong)*(int *)(local_b8[8] + (longlong)iVar1 * 0xc) * 0xc;
        }
        local_60 = *(undefined4 *)ppuVar6;
        uStack_5c = *(undefined4 *)((longlong)ppuVar6 + 4);
        iStack_58 = *(int *)(ppuVar6 + 1);
        uStack_54 = *(undefined4 *)((longlong)ppuVar6 + 0xc);
        if ((-1 < local_a8) && (local_a8 < iStack_58)) goto LAB_141f47fb5;
      }
    }
    FMovieSceneEvaluationTreeRangeIterator::operator++(local_d8);
  } while( true );
}



// FUNCTION 141f480a0 DeleteKeys body=236 status=ok
// SIG undefined DeleteKeys(void)

void FMovieSceneBoolChannel::DeleteKeys(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)*param_2;
  lVar1 = param_1 + 0x30;
  if (0 < (int)param_2[1]) {
    uVar6 = param_2[1] & 0xffffffff;
    do {
      if (lVar1 != 0) {
        iVar2 = FKeyHandleLookupTable::GetIndex(lVar1,*puVar5);
        if (iVar2 != -1) {
          iVar4 = *(int *)(param_1 + 0x10);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 4),
                       (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 + 1) * 4),
                       (longlong)iVar3 << 2);
            iVar4 = *(int *)(param_1 + 0x10);
          }
          *(int *)(param_1 + 0x10) = iVar4 + -1;
          iVar4 = *(int *)(param_1 + 0x28);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20)),
                       (void *)((longlong)(iVar2 + 1) + *(longlong *)(param_1 + 0x20)),
                       (longlong)iVar3);
            iVar4 = *(int *)(param_1 + 0x28);
          }
          *(int *)(param_1 + 0x28) = iVar4 + -1;
          FKeyHandleLookupTable::DeallocateHandle(lVar1,iVar2);
        }
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141f48190 DeleteKeys body=236 status=ok
// SIG undefined DeleteKeys(void)

void FMovieSceneByteChannel::DeleteKeys(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)*param_2;
  lVar1 = param_1 + 0x38;
  if (0 < (int)param_2[1]) {
    uVar6 = param_2[1] & 0xffffffff;
    do {
      if (lVar1 != 0) {
        iVar2 = FKeyHandleLookupTable::GetIndex(lVar1,*puVar5);
        if (iVar2 != -1) {
          iVar4 = *(int *)(param_1 + 0x10);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 4),
                       (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 + 1) * 4),
                       (longlong)iVar3 << 2);
            iVar4 = *(int *)(param_1 + 0x10);
          }
          *(int *)(param_1 + 0x10) = iVar4 + -1;
          iVar4 = *(int *)(param_1 + 0x28);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20)),
                       (void *)((longlong)(iVar2 + 1) + *(longlong *)(param_1 + 0x20)),
                       (longlong)iVar3);
            iVar4 = *(int *)(param_1 + 0x28);
          }
          *(int *)(param_1 + 0x28) = iVar4 + -1;
          FKeyHandleLookupTable::DeallocateHandle(lVar1,iVar2);
        }
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141f48280 FUN_141f48280 body=249 status=ok
// SIG undefined FUN_141f48280(void)

void FUN_141f48280(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)*param_2;
  lVar1 = param_1 + 0x38;
  if (0 < (int)param_2[1]) {
    uVar6 = param_2[1] & 0xffffffff;
    do {
      if (lVar1 != 0) {
        iVar2 = FKeyHandleLookupTable::GetIndex(lVar1,*puVar5);
        if (iVar2 != -1) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4),
                       (void *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar2 + 1) * 4),
                       (longlong)iVar3 << 2);
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 + -1;
          iVar4 = *(int *)(param_1 + 0x28);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x20)),
                       (void *)((longlong)(iVar2 + 1) * 0x1c + *(longlong *)(param_1 + 0x20)),
                       (longlong)iVar3 * 0x1c);
            iVar4 = *(int *)(param_1 + 0x28);
          }
          *(int *)(param_1 + 0x28) = iVar4 + -1;
          FKeyHandleLookupTable::DeallocateHandle(lVar1,iVar2);
        }
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141f48380 DeleteKeys body=242 status=ok
// SIG undefined DeleteKeys(void)

void FMovieSceneIntegerChannel::DeleteKeys(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)*param_2;
  lVar1 = param_1 + 0x30;
  if (0 < (int)param_2[1]) {
    uVar6 = param_2[1] & 0xffffffff;
    do {
      if (lVar1 != 0) {
        iVar2 = FKeyHandleLookupTable::GetIndex(lVar1,*puVar5);
        if (iVar2 != -1) {
          iVar4 = *(int *)(param_1 + 0x10);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 4),
                       (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 + 1) * 4),
                       (longlong)iVar3 << 2);
            iVar4 = *(int *)(param_1 + 0x10);
          }
          *(int *)(param_1 + 0x10) = iVar4 + -1;
          iVar4 = *(int *)(param_1 + 0x28);
          iVar3 = (iVar4 - iVar2) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 4),
                       (void *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar2 + 1) * 4),
                       (longlong)iVar3 << 2);
            iVar4 = *(int *)(param_1 + 0x28);
          }
          *(int *)(param_1 + 0x28) = iVar4 + -1;
          FKeyHandleLookupTable::DeallocateHandle(lVar1,iVar2);
        }
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141f48490 FUN_141f48490 body=70 status=ok
// SIG undefined FUN_141f48490(void)

void FUN_141f48490(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
  ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141f484cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 141f484e0 FUN_141f484e0 body=12 status=ok
// SIG undefined FUN_141f484e0(void)

void FUN_141f484e0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 141f48520 FUN_141f48520 body=22 status=ok
// SIG undefined FUN_141f48520(void)

void FUN_141f48520(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144f1a8d0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 141f48540 DestroyObject body=82 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FTrackInstancePropertyBindings,SharedPointerInternals::DefaultDeleter<FTrackInstancePropertyBindings>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1);
    FMemory::operator_delete(lVar1,0x78);
    return;
  }
  return;
}



// FUNCTION 141f485a0 DestroyObjectsByPredicate body=543 status=ok
// SIG undefined DestroyObjectsByPredicate(void)

void FMovieSceneSpawnRegister::DestroyObjectsByPredicate
               (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  char local_60;
  char cStack_5f;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar1 = param_1 + 3;
  local_98 = 0;
  uStack_94 = 1;
  iVar2 = (int)param_1[8];
  puStack_48 = (uint *)(param_1 + 5);
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar9 = (uint *)param_1[7];
    if ((uint *)param_1[7] == (uint *)0x0) {
      puVar9 = puStack_48;
    }
    uVar3 = *puVar9;
    uStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar4) goto LAB_141f48661;
      uVar3 = puVar9[lVar6 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_88._4_4_ = (uStack_80 - iVar8) + 0x1f;
    if (iVar2 < local_88._4_4_) {
LAB_141f48661:
      local_88._4_4_ = iVar2;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  iStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = '\0';
  cStack_5f = '\0';
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar4 = local_88._4_4_ < (int)param_1[8];
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar4) {
    do {
      iVar2 = iStack_7c;
      lVar7 = (longlong)iStack_7c * 0x38;
      lVar6 = *plVar1 + lVar7;
      local_res8[0] = *(undefined1 *)(lVar6 + 0x2c);
      cVar5 = (*(code *)*param_3)(param_3[1],lVar6 + 0x14,local_res8,lVar6 + 0x10);
      if (cVar5 != '\0') {
        lVar6 = FWeakObjectPtr::Get(*plVar1 + 0x24 + lVar7);
        if (lVar6 != 0) {
          (**(code **)(*param_1 + 0x18))(param_1,lVar6,*plVar1 + lVar7,*plVar1 + lVar7 + 0x10);
          (**(code **)(*param_1 + 0x10))(param_1,lVar6);
        }
        TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
        ::Remove(local_78._8_8_,iVar2);
        local_60 = '\x01';
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141f487c0 DestroySpawnedObject body=497 status=ok
// SIG undefined DestroySpawnedObject(void)

bool FMovieSceneSpawnRegister::DestroySpawnedObject
               (longlong *param_1,int *param_2,uint *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint local_38;
  
  local_48 = *param_2;
  iStack_44 = param_2[1];
  iStack_40 = param_2[2];
  iStack_3c = param_2[3];
  piVar3 = (int *)0x0;
  uVar6 = *param_3;
  local_38 = uVar6;
  if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(&local_48,0x10,0);
    uVar8 = iVar1 - uVar6 ^ uVar6 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar6 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 0x10;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar6 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 10;
    plVar2 = (longlong *)param_1[0xb];
    if ((longlong *)param_1[0xb] == (longlong *)0x0) {
      plVar2 = param_1 + 10;
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    (((longlong)(int)((uVar6 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[0xc] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar1 * 0x38 + param_1[3]);
        if ((((piVar5[1] == iStack_44 && piVar5[2] == iStack_40) && piVar5[3] == iStack_3c) &&
             *piVar5 == local_48) && (piVar5[4] == local_38)) {
          if (iVar1 != -1) goto LAB_141f48927;
          break;
        }
        iVar1 = piVar5[0xc];
      } while (iVar1 != -1);
    }
  }
  piVar5 = piVar3;
LAB_141f48927:
  piVar4 = piVar5 + 5;
  if (piVar5 == (int *)0x0) {
    piVar4 = piVar3;
  }
  if ((piVar4 != (int *)0x0) &&
     (piVar3 = (int *)FWeakObjectPtr::Get(piVar4 + 4), piVar3 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x18))(param_1,piVar3,param_2,param_3);
    (**(code **)(*param_1 + 0x10))(param_1,piVar3);
  }
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 3,&local_48);
  FMovieSceneEvaluationState::Invalidate(param_4 + 8,param_2,param_3);
  return piVar3 != (int *)0x0;
}



// FUNCTION 141f489c0 DiffEntities body=561 status=ok
// SIG undefined DiffEntities(void)

void FMovieSceneEvaluationMetaData::DiffEntities
               (longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 local_res8;
  
  iVar15 = 0;
  iVar17 = 0;
  while ((((-1 < iVar15 && (iVar15 < *(int *)(param_1 + 0x18))) && (-1 < iVar17)) &&
         (iVar17 < *(int *)(param_2 + 0x18)))) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar15 * 0x10);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    auVar3 = *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x10) + (longlong)iVar17 * 0x10);
    uVar5 = auVar3._0_4_;
    uVar6 = auVar3._4_4_;
    uVar7 = auVar3._8_4_;
    uVar18 = auVar3._0_8_ >> 0x20;
    if (((uVar9 == uVar6) && (uVar5 == uVar8)) && (uVar10 == uVar7)) {
      iVar15 = iVar15 + 1;
      iVar17 = iVar17 + 1;
    }
    else if ((uVar5 < uVar8) ||
            ((uVar5 == uVar8 && ((uVar6 < uVar9 || ((uVar6 == uVar9 && (uVar7 < uVar10)))))))) {
      if (param_4 != (longlong *)0x0) {
        iVar4 = (int)param_4[1];
        *(int *)(param_4 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar4,uVar18,uVar10,uVar8);
        }
        puVar1 = (uint *)(*param_4 + (longlong)iVar4 * 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = auVar3._12_4_;
      }
      iVar17 = iVar17 + 1;
    }
    else {
      if (param_3 != (longlong *)0x0) {
        iVar4 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar4,uVar18,uVar10,uVar8);
        }
        puVar1 = (uint *)(*param_3 + (longlong)iVar4 * 0x10);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
      }
      iVar15 = iVar15 + 1;
    }
  }
  if (param_4 != (longlong *)0x0) {
    for (; (-1 < iVar17 && (iVar17 < *(int *)(param_2 + 0x18))); iVar17 = iVar17 + 1) {
      iVar4 = (int)param_4[1];
      puVar16 = (undefined4 *)((longlong)iVar17 * 0x10 + *(longlong *)(param_2 + 0x10));
      *(int *)(param_4 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar4);
      }
      uVar12 = puVar16[1];
      uVar13 = puVar16[2];
      uVar14 = puVar16[3];
      puVar2 = (undefined4 *)(*param_4 + (longlong)iVar4 * 0x10);
      *puVar2 = *puVar16;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
    }
    AlgoImpl::
    IntroSortInternal<FMovieSceneOrderedEvaluationKey,<lambda_6525fd6ccbb4953eb6bcfa2674f149b3>,TLess<void>_>
              (*param_4,(longlong)(int)param_4[1],0,local_res8);
  }
  if (param_3 != (longlong *)0x0) {
    for (; (-1 < iVar15 && (iVar15 < *(int *)(param_1 + 0x18))); iVar15 = iVar15 + 1) {
      iVar17 = (int)param_3[1];
      puVar16 = (undefined4 *)((longlong)iVar15 * 0x10 + *(longlong *)(param_1 + 0x10));
      *(int *)(param_3 + 1) = iVar17 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar17 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar17);
      }
      uVar12 = puVar16[1];
      uVar13 = puVar16[2];
      uVar14 = puVar16[3];
      puVar2 = (undefined4 *)(*param_3 + (longlong)iVar17 * 0x10);
      *puVar2 = *puVar16;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
    }
    AlgoImpl::
    IntroSortInternal<FMovieSceneOrderedEvaluationKey,unsigned_int_FMovieSceneOrderedEvaluationKey::*,TLess<void>_>
              (*param_3,(longlong)(int)param_3[1],0xc,local_res8);
  }
  return;
}



// FUNCTION 141f48c00 DuplicateKeys body=341 status=ok
// SIG undefined DuplicateKeys(void)

void FMovieSceneBoolChannel::DuplicateKeys(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *_Src;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_res20;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  
  plVar7 = (longlong *)(param_1 + 8);
  puVar8 = (undefined4 *)*param_3;
  lVar1 = param_1 + 0x30;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar9 = *param_2 - (longlong)puVar8;
    uVar10 = (ulonglong)*(uint *)(param_2 + 1);
    local_res20 = plVar7;
    local_68 = plVar7;
    local_60 = lVar1;
    local_58 = plVar2;
    do {
      if ((lVar1 == 0) ||
         (iVar4 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)(lVar9 + (longlong)puVar8)),
         iVar4 == -1)) {
        puVar6 = (undefined4 *)
                 FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(local_res18);
      }
      else {
        uVar3 = *(undefined1 *)((longlong)iVar4 + *plVar2);
        iVar5 = FMovieSceneChannelData::AddKeyInternal
                          (&local_68,*(undefined4 *)(*plVar7 + (longlong)iVar4 * 4));
        iVar4 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
        }
        _Src = (void *)(*plVar2 + (longlong)iVar5);
        ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 1),_Src,(longlong)(iVar4 - iVar5))
        ;
        *(undefined1 *)((longlong)iVar5 + *plVar2) = uVar3;
        puVar6 = (undefined4 *)FKeyHandleLookupTable::FindOrAddKeyHandle(lVar1,local_res10,iVar5);
        plVar7 = local_res20;
      }
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141f48d60 DuplicateKeys body=341 status=ok
// SIG undefined DuplicateKeys(void)

void FMovieSceneByteChannel::DuplicateKeys(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *_Src;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_res20;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  
  plVar7 = (longlong *)(param_1 + 8);
  puVar8 = (undefined4 *)*param_3;
  lVar1 = param_1 + 0x38;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar9 = *param_2 - (longlong)puVar8;
    uVar10 = (ulonglong)*(uint *)(param_2 + 1);
    local_res20 = plVar7;
    local_68 = plVar7;
    local_60 = lVar1;
    local_58 = plVar2;
    do {
      if ((lVar1 == 0) ||
         (iVar4 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)(lVar9 + (longlong)puVar8)),
         iVar4 == -1)) {
        puVar6 = (undefined4 *)
                 FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(local_res18);
      }
      else {
        uVar3 = *(undefined1 *)((longlong)iVar4 + *plVar2);
        iVar5 = FMovieSceneChannelData::AddKeyInternal
                          (&local_68,*(undefined4 *)(*plVar7 + (longlong)iVar4 * 4));
        iVar4 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
        }
        _Src = (void *)(*plVar2 + (longlong)iVar5);
        ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 1),_Src,(longlong)(iVar4 - iVar5))
        ;
        *(undefined1 *)((longlong)iVar5 + *plVar2) = uVar3;
        puVar6 = (undefined4 *)FKeyHandleLookupTable::FindOrAddKeyHandle(lVar1,local_res10,iVar5);
        plVar7 = local_res20;
      }
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141f48ec0 DuplicateKeys body=346 status=ok
// SIG undefined DuplicateKeys(void)

void FMovieSceneFloatChannel::DuplicateKeys
               (longlong param_1,undefined5 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  
  local_68 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_60 = *(uint *)(param_2 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar9 = *(undefined4 *)param_3;
  puVar7 = (undefined4 *)*param_3;
  uVar10 = *(undefined4 *)(param_3 + 1);
  lVar1 = param_1 + 0x38;
  uStack_64 = (undefined1)uVar4;
  uStack_63 = (undefined1)((uint)uVar4 >> 8);
  uStack_62 = (undefined2)((uint)uVar4 >> 0x10);
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)uStack_60) {
    lVar8 = CONCAT26(uStack_62,CONCAT15(uStack_63,*param_2)) - (longlong)puVar7;
    uVar6 = (ulonglong)uStack_60;
    local_48 = (longlong *)(param_1 + 0x10);
    local_40 = lVar1;
    local_38 = plVar2;
    do {
      if ((lVar1 == 0) ||
         (iVar3 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)(lVar8 + (longlong)puVar7)),
         iVar3 == -1)) {
        puVar5 = (undefined4 *)
                 FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(local_res10);
      }
      else {
        puVar5 = (undefined4 *)((longlong)iVar3 * 0x1c + *plVar2);
        uStack_64 = *(undefined1 *)(puVar5 + 1);
        local_68 = *puVar5;
        uStack_5c = puVar5[3];
        uStack_63 = *(undefined1 *)((longlong)puVar5 + 5);
        local_58 = *(undefined1 *)(puVar5 + 4);
        uStack_60 = puVar5[2];
        local_54 = puVar5[5];
        local_50 = puVar5[6];
        uVar4 = FMovieSceneChannelData::AddKeyInternal
                          (&local_48,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 4));
        TArray<FMovieSceneFloatValue,FDefaultAllocator>::Insert
                  (plVar2,&local_68,uVar4,param_4,uVar9,uVar10);
        puVar5 = (undefined4 *)FKeyHandleLookupTable::FindOrAddKeyHandle(lVar1,local_res8,uVar4);
      }
      *puVar7 = *puVar5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141f49020 DuplicateKeys body=361 status=ok
// SIG undefined DuplicateKeys(void)

void FMovieSceneIntegerChannel::DuplicateKeys
               (longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *_Src;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_res20;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  
  plVar7 = (longlong *)(param_1 + 8);
  puVar8 = (undefined4 *)*param_3;
  lVar1 = param_1 + 0x30;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar9 = *param_2 - (longlong)puVar8;
    uVar10 = (ulonglong)*(uint *)(param_2 + 1);
    local_res20 = plVar7;
    local_68 = plVar7;
    local_60 = lVar1;
    local_58 = plVar2;
    do {
      if ((lVar1 == 0) ||
         (iVar4 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)(lVar9 + (longlong)puVar8)),
         iVar4 == -1)) {
        puVar6 = (undefined4 *)
                 FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(local_res18);
      }
      else {
        uVar3 = *(undefined4 *)((longlong)iVar4 * 4 + *plVar2);
        iVar5 = FMovieSceneChannelData::AddKeyInternal
                          (&local_68,*(undefined4 *)((longlong)iVar4 * 4 + *plVar7));
        iVar4 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
        }
        _Src = (void *)(*plVar2 + (longlong)iVar5 * 4);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar4 - iVar5) << 2);
        *(undefined4 *)((longlong)iVar5 * 4 + *plVar2) = uVar3;
        puVar6 = (undefined4 *)FKeyHandleLookupTable::FindOrAddKeyHandle(lVar1,local_res10,iVar5);
        plVar7 = local_res20;
      }
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141f49190 Empty body=481 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<UObject_*,TMap<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_141f49261;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141f49261:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(lVar5 + 8,0);
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
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
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141f49380 Empty body=494 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
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
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar4) goto LAB_141f49451;
      uVar5 = puVar9[lVar6 + 1];
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
LAB_141f49451:
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
      lVar6 = (longlong)iStack_2c * 0x38 + *param_1;
      bVar2 = *(byte *)(lVar6 + 0x28);
      if ((bVar2 & 1) != 0) {
        puVar7 = (undefined8 *)(lVar6 + 8);
        if ((bVar2 & 2) == 0) {
          puVar7 = *(undefined8 **)(lVar6 + 8);
        }
        *(byte *)(lVar6 + 0x28) = bVar2 & 0xfe;
        (**(code **)*puVar7)(puVar7,0);
        if ((*(byte *)(lVar6 + 0x28) & 2) == 0) {
          FMemory::Free(*(undefined8 *)(lVar6 + 8));
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
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141f49570 Empty body=496 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneObjectCache>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_141f49641;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141f49641:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0xc0 + *param_1;
      *(undefined4 *)(lVar5 + 0xb0) = 0;
      if (*(longlong *)(lVar5 + 0xa8) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x68);
      *(undefined4 *)(lVar5 + 0x60) = 0;
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x18);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141f49760 EntityHasAnimated body=324 status=ok
// SIG undefined EntityHasAnimated(void)

void MovieSceneImpl::EntityHasAnimated(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong *plVar4;
  uint *puVar5;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 *local_38 [2];
  undefined8 local_28;
  uint local_20;
  
  if (param_3 != 0) {
    local_28 = *param_1;
    local_20 = *(uint *)(param_1 + 1);
    FWeakObjectPtr::operator=(&local_res20,param_3);
    plVar4 = (longlong *)(param_2 + 0x188);
    if (*(int *)(param_2 + 400) != *(int *)(param_2 + 0x1bc)) {
      lVar2 = *(longlong *)(param_2 + 0x1c8);
      if (*(longlong *)(param_2 + 0x1c8) == 0) {
        lVar2 = param_2 + 0x1c0;
      }
      uVar1 = *(uint *)(lVar2 + ((longlong)(int)(~local_28._4_4_ ^ local_20 ^ (uint)local_28) &
                                (longlong)*(int *)(param_2 + 0x1d0) - 1U) * 4);
      if (uVar1 != 0xffffffff) {
        do {
          puVar3 = (uint *)(*plVar4 + (longlong)(int)uVar1 * 0x48);
          if (((*(uint *)(*plVar4 + 4 + (longlong)(int)uVar1 * 0x48) == local_28._4_4_) &&
              (*puVar3 == (uint)local_28)) && (puVar3[2] == local_20)) {
            if ((uVar1 != 0xffffffff) && (puVar3 != (uint *)0x0)) goto LAB_141f49860;
            break;
          }
          uVar1 = puVar3[0x10];
        } while (uVar1 != 0xffffffff);
      }
    }
    local_38[0] = &local_28;
    FUN_141f31b60(plVar4,local_res18,local_38,0);
    puVar3 = (uint *)(*plVar4 + (longlong)local_res18[0] * 0x48);
LAB_141f49860:
    uVar1 = puVar3[0xe];
    puVar3[0xe] = uVar1 + 1;
    if ((int)puVar3[0xf] < (int)(uVar1 + 1)) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (puVar3 + 4,uVar1);
    }
    puVar5 = *(uint **)(puVar3 + 0xc);
    if (*(uint **)(puVar3 + 0xc) == (uint *)0x0) {
      puVar5 = puVar3 + 4;
    }
    *(undefined8 *)(puVar5 + (longlong)(int)uVar1 * 2) = local_res20;
  }
  return;
}



// FUNCTION 141f498b0 EntityHasAnimated body=284 status=ok
// SIG undefined EntityHasAnimated(void)

void MovieSceneImpl::EntityHasAnimated(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 *local_res20;
  undefined8 local_28;
  uint local_20;
  
  local_28 = *param_1;
  plVar1 = (longlong *)(param_2 + 0x188);
  local_20 = *(uint *)(param_1 + 1);
  local_res10 = 0xffffffff;
  uStackX_14 = 0;
  if (*(int *)(param_2 + 400) != *(int *)(param_2 + 0x1bc)) {
    uVar2 = (uint)((ulonglong)local_28 >> 0x20);
    lVar4 = *(longlong *)(param_2 + 0x1c8);
    if (*(longlong *)(param_2 + 0x1c8) == 0) {
      lVar4 = param_2 + 0x1c0;
    }
    uVar3 = *(uint *)(lVar4 + ((longlong)(int)(~uVar2 ^ local_20 ^ (uint)local_28) &
                              (longlong)*(int *)(param_2 + 0x1d0) - 1U) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)(*plVar1 + (longlong)(int)uVar3 * 0x48);
        if (((*(uint *)(*plVar1 + 4 + (longlong)(int)uVar3 * 0x48) == uVar2) &&
            (*puVar5 == (uint)local_28)) && (puVar5[2] == local_20)) {
          if ((uVar3 != 0xffffffff) && (puVar5 != (uint *)0x0)) goto LAB_141f49990;
          break;
        }
        uVar3 = puVar5[0x10];
      } while (uVar3 != 0xffffffff);
    }
  }
  local_res20 = &local_28;
  FUN_141f31b60(plVar1,local_res8,&local_res20,0);
  puVar5 = (uint *)(*plVar1 + (longlong)local_res8[0] * 0x48);
LAB_141f49990:
  uVar2 = puVar5[0xe];
  puVar5[0xe] = uVar2 + 1;
  if ((int)puVar5[0xf] < (int)(uVar2 + 1)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (puVar5 + 4,uVar2);
  }
  puVar6 = *(uint **)(puVar5 + 0xc);
  if (*(uint **)(puVar5 + 0xc) == (uint *)0x0) {
    puVar6 = puVar5 + 4;
  }
  *(ulonglong *)(puVar6 + (longlong)(int)uVar2 * 2) = CONCAT44(uStackX_14,local_res10);
  return;
}



// FUNCTION 141f499d0 Evaluate body=142 status=ok
// SIG undefined Evaluate(void)

ulonglong FMovieSceneBoolChannel::Evaluate(longlong param_1,int param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong in_RAX;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = (longlong)*(int *)(param_1 + 0x10);
    lVar1 = 0;
    while (uVar2 != 0) {
      uVar5 = uVar2 >> 1;
      uVar4 = (uint)uVar2;
      uVar2 = uVar5;
      if (*(int *)(*(longlong *)(param_1 + 8) + (uVar5 + lVar1) * 4) <= param_2) {
        lVar1 = (ulonglong)(uVar4 & 1) + uVar5 + lVar1;
      }
    }
    iVar3 = (int)lVar1 + -1;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    *param_3 = *(undefined1 *)(iVar3 + lVar1);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  *param_3 = *(undefined1 *)(param_1 + 0x18);
  return 1;
}



// FUNCTION 141f49a60 Evaluate body=2706 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FMovieSceneFloatChannel::Evaluate(longlong param_1,undefined8 param_2,float *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float extraout_XMM0_Da;
  float fVar22;
  float extraout_XMM0_Da_00;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_158 [32];
  float local_138;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float local_110;
  float local_10c;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  uint local_e0;
  float local_dc;
  double local_d0 [21];
  
  local_d0[0] = (double)(DAT_1468387a8 ^ (ulonglong)auStack_158);
  iVar12 = *(int *)(param_1 + 0x18);
  if (iVar12 == 0) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      return 0;
    }
    *param_3 = *(float *)(param_1 + 0x30);
    return 1;
  }
  if (iVar12 == 1) {
    *param_3 = **(float **)(param_1 + 0x20);
    return 1;
  }
  cVar6 = EvaluateExtrapolation();
  if (cVar6 != '\0') {
    return 1;
  }
  uVar2 = **(uint **)(param_1 + 0x10);
  uVar3 = (*(uint **)(param_1 + 0x10))[(longlong)*(int *)(param_1 + 0x18) + -1];
  CycleTime(&local_e8,uVar2,uVar3,param_2);
  local_128 = (double)(ulonglong)uVar2;
  uVar7 = (uint)param_2;
  fVar29 = local_dc;
  if (((int)uVar7 < (int)uVar2) ||
     ((local_120._4_4_ = (float)((ulonglong)param_2 >> 0x20), uVar7 == uVar2 &&
      (local_120._4_4_ < 0.0)))) {
    iVar11 = *(byte *)(param_1 + 8) - 1;
    if (iVar11 == 0) {
      fVar29 = **(float **)(param_1 + 0x20) -
               (*(float **)(param_1 + 0x20))[(longlong)iVar12 * 7 + -7];
LAB_141f49d39:
      fVar29 = fVar29 * (float)(int)local_e0;
      goto LAB_141f49d46;
    }
  }
  else {
    local_128 = (double)(ulonglong)uVar3;
    if (((int)uVar7 <= (int)uVar3) && ((uVar7 != uVar3 || (local_120._4_4_ <= 0.0))))
    goto LAB_141f49d46;
    iVar11 = *(byte *)(param_1 + 9) - 1;
    if (iVar11 == 0) {
      fVar29 = (*(float **)(param_1 + 0x20))[(longlong)iVar12 * 7 + -7] -
               **(float **)(param_1 + 0x20);
      goto LAB_141f49d39;
    }
  }
  if (iVar11 == 1) {
    local_e0 = local_e0 & 0x80000001;
    if ((int)local_e0 < 0) {
      local_e0 = (local_e0 - 1 | 0xfffffffe) + 1;
    }
    if (local_e0 == 1) {
      fStack_114 = (float)((ulonglong)local_e8 >> 0x20);
      fStack_114 = 0.0 - fStack_114;
      iVar12 = (int)ROUND((fStack_114 + fStack_114) - 0.5) >> 1;
      local_128._4_4_ = fStack_114 - (float)iVar12;
      if (0.0 <= local_128._4_4_) {
        if (0.99999994 <= local_128._4_4_) {
          local_128._4_4_ = 0.99999994;
        }
      }
      else {
        local_128._4_4_ = 0.0;
      }
      fStack_114 = 0.0;
      fVar32 = fStack_114;
      fStack_114 = 0.0;
      local_128._4_4_ = local_128._4_4_ + 0.0;
      uVar7 = ((int)ROUND((local_128._4_4_ + local_128._4_4_) - 0.5) >> 1) + uVar2 +
              (iVar12 - local_e8._0_4_) + uVar3;
      iVar12 = (int)local_128._4_4_;
      fVar23 = local_128._4_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != local_128._4_4_)) {
        auVar26._4_4_ = local_128._4_4_;
        auVar26._0_4_ = local_128._4_4_;
        auVar26._8_8_ = 0;
        uVar8 = movmskps(uVar7,auVar26);
        fVar23 = (float)(int)(iVar12 - (uVar8 & 1));
      }
      local_128._4_4_ = local_128._4_4_ - fVar23;
      if (0.0 <= local_128._4_4_) {
        if (0.99999994 <= local_128._4_4_) {
          local_128 = (double)CONCAT44(0x3f7fffff,uVar7);
          local_e8 = local_128;
          fStack_114 = fVar32;
        }
        else {
          local_128 = (double)CONCAT44(local_128._4_4_,uVar7);
          local_e8 = local_128;
        }
      }
      else {
        local_128 = (double)(ulonglong)uVar7;
        local_e8 = local_128;
      }
    }
  }
LAB_141f49d46:
  if (((int)uVar2 <= local_e8._0_4_) && (local_e8._0_4_ <= (int)uVar3)) {
    iVar12 = *(int *)(param_1 + 0x18);
    lVar17 = 0;
    lVar14 = 0;
    lVar15 = *(longlong *)(param_1 + 0x10);
    local_120 = local_e8;
    dVar27 = local_120;
    uVar19 = (longlong)iVar12;
    if (iVar12 != 0) {
      do {
        uVar20 = uVar19 >> 1;
        if (*(int *)(lVar15 + (uVar20 + lVar14) * 4) <= local_e8._0_4_) {
          lVar14 = (ulonglong)((uint)uVar19 & 1) + uVar20 + lVar14;
        }
        uVar19 = uVar20;
      } while (uVar20 != 0);
    }
    iVar11 = (int)lVar14;
    iVar13 = iVar11 + -1;
    iVar4 = -1;
    if (-1 < iVar13) {
      iVar4 = iVar13;
    }
    iVar18 = -1;
    if (iVar11 < iVar12) {
      iVar18 = iVar11;
    }
    if ((iVar13 < 0) || (iVar12 <= iVar11)) {
      fVar32 = 0.0;
    }
    else {
      lVar14 = (longlong)iVar11;
      local_120._4_4_ = (float)((ulonglong)local_e8 >> 0x20);
      fVar32 = ((float)(local_e8._0_4_ - *(int *)(lVar15 + -4 + lVar14 * 4)) + local_120._4_4_) /
               (float)(*(int *)(lVar15 + lVar14 * 4) - *(int *)(lVar15 + -4 + lVar14 * 4));
    }
    lVar15 = *(longlong *)(param_1 + 0x20);
    if (iVar4 == -1) {
      fVar29 = fVar29 + *(float *)((longlong)iVar18 * 0x1c + lVar15);
    }
    else {
      lVar14 = (longlong)iVar4;
      pfVar9 = (float *)(lVar14 * 0x1c + lVar15);
      if (iVar18 == -1) {
        fVar29 = fVar29 + *pfVar9;
      }
      else {
        local_10c = pfVar9[6];
        bVar1 = *(byte *)(pfVar9 + 4);
        fVar23 = *pfVar9;
        lVar21 = (longlong)iVar18;
        fVar31 = pfVar9[3];
        pfVar16 = (float *)(lVar21 * 0x1c + lVar15);
        fVar5 = pfVar16[4];
        _local_118 = CONCAT44(fStack_114,pfVar16[5]);
        if (*(char *)(pfVar9 + 1) == '\0') {
          fVar29 = (*pfVar16 - fVar23) * fVar32 + fVar23 + fVar29;
        }
        else if (*(char *)(pfVar9 + 1) == '\x02') {
          if ((bVar1 < 2) && (((uint)fVar5 & 0xfd) == 0)) {
            iVar12 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar21 * 4) -
                     *(int *)(*(longlong *)(param_1 + 0x10) + lVar14 * 4);
            local_138 = fVar32;
            local_120 = dVar27;
            BezierInterp(iVar12,lVar15,*pfVar16 - pfVar16[2] * (float)iVar12 * 0.33333334);
            fVar29 = extraout_XMM0_Da + fVar29;
          }
          else {
            iVar12 = *(int *)(param_1 + 0x9c);
            uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + lVar21 * 4);
            local_e8 = 1.0 / (double)*(int *)(param_1 + 0x98);
            local_128 = (double)(ulonglong)uVar2;
            fVar30 = 1.0 / (float)((double)iVar12 * local_e8);
            local_120 = ((double)((longlong)*(int *)(*(longlong *)(param_1 + 0x10) + lVar14 * 4) *
                                 (longlong)iVar12) + (double)((float)iVar12 * 0.0)) * local_e8;
            local_e8 = ((double)((longlong)(int)uVar2 * (longlong)iVar12) +
                       (double)((float)iVar12 * 0.0)) * local_e8;
            local_110 = (float)(local_e8 - local_120);
            fVar22 = ::_guard_xfg_dispatch_icall_nop(fVar31 * fVar30);
            if (fVar22 < 0.0) {
              fVar24 = fVar22 * 0.15915494 - 0.5;
            }
            else {
              fVar24 = fVar22 * 0.15915494 + 0.5;
            }
            fVar22 = fVar22 - (float)(int)fVar24 * 6.2831855;
            if (fVar22 <= 1.5707964) {
              if (-1.5707964 <= fVar22) {
                fVar24 = 1.0;
              }
              else {
                fVar24 = -1.0;
                fVar22 = -3.1415927 - fVar22;
              }
            }
            else {
              fVar24 = -1.0;
              fVar22 = 3.1415927 - fVar22;
            }
            fVar25 = fVar22 * fVar22;
            if (bVar1 < 2) {
              fVar31 = fVar30 * fVar31 * local_110;
              local_10c = SQRT(fVar31 * fVar31 + local_110 * local_110) * 0.33333334;
            }
            fVar31 = pfVar16[2];
            fVar24 = local_10c *
                     (((((2.4760495e-05 - fVar25 * 2.6051615e-07) * fVar25 - 0.0013888378) * fVar25
                       + 0.041666638) * fVar25 - 0.5) * fVar25 + 1.0) * fVar24;
            local_10c = local_10c *
                        (((((2.7525562e-06 - fVar25 * 2.3889859e-08) * fVar25 - 0.00019840874) *
                           fVar25 + 0.008333331) * fVar25 - 0.16666667) * fVar25 + 1.0) * fVar22 +
                        fVar23;
            local_128 = (double)CONCAT44(local_128._4_4_,(float)((double)fVar24 + local_120));
            fVar23 = ::_guard_xfg_dispatch_icall_nop(fVar30 * fVar31);
            if (fVar23 < 0.0) {
              fVar22 = fVar23 * 0.15915494 - 0.5;
            }
            else {
              fVar22 = fVar23 * 0.15915494 + 0.5;
            }
            fVar23 = fVar23 - (float)(int)fVar22 * 6.2831855;
            if (fVar23 <= 1.5707964) {
              if (-1.5707964 <= fVar23) {
                fVar22 = 1.0;
              }
              else {
                fVar22 = -1.0;
                fVar23 = -3.1415927 - fVar23;
              }
            }
            else {
              fVar22 = -1.0;
              fVar23 = 3.1415927 - fVar23;
            }
            fVar23 = fVar23 * fVar23;
            if (((uint)fVar5 & 0xfd) == 0) {
              fVar31 = fVar30 * fVar31 * local_110;
              fVar31 = SQRT(fVar31 * fVar31 + local_110 * local_110) * 0.33333334;
            }
            else {
              fVar31 = local_118;
            }
            dVar28 = (double)((float)((double)(float)(local_e8 -
                                                     (double)(fVar31 * (((((2.4760495e-05 -
                                                                           fVar23 * 2.6051615e-07) *
                                                                           fVar23 - 0.0013888378) *
                                                                          fVar23 + 0.041666638) *
                                                                         fVar23 - 0.5) * fVar23 +
                                                                       1.0) * fVar22)) - local_120)
                             * (1.0 / local_110));
            local_100 = (double)((float)((double)(float)local_128 - local_120) * (1.0 / local_110));
            dVar27 = dVar28 - local_100;
            local_f8 = dVar27 - local_100;
            local_100 = local_100 * 3.0;
            local_f0 = ((1.0 - dVar28) - dVar27) - local_f8;
            local_f8 = local_f8 * 3.0;
            local_108 = (double)-fVar32;
            iVar12 = SolveCubic(&local_108,&local_e8);
            if (iVar12 == 1) {
              local_138 = (float)local_e8;
            }
            else {
              local_138 = -3.4028235e+38;
              pdVar10 = &local_e8;
              lVar15 = 3;
              if (local_d0 < &local_e8) {
                lVar15 = lVar17;
              }
              do {
                dVar27 = *pdVar10;
                if (((0.0 <= dVar27) && (dVar27 <= 1.0)) &&
                   ((local_138 < 0.0 || ((double)local_138 < dVar27)))) {
                  local_138 = (float)dVar27;
                }
                pdVar10 = pdVar10 + 1;
                lVar17 = lVar17 + 1;
              } while (lVar17 != lVar15);
            }
            BezierInterp();
            fVar29 = extraout_XMM0_Da_00 + fVar29;
          }
        }
        else {
          fVar29 = fVar23 + fVar29;
        }
      }
    }
    *param_3 = fVar29;
    return 1;
  }
  return 0;
}



// FUNCTION 141f4a500 Evaluate body=140 status=ok
// SIG undefined Evaluate(void)

ulonglong FMovieSceneIntegerChannel::Evaluate(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong in_RAX;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = (longlong)*(int *)(param_1 + 0x10);
    lVar2 = 0;
    while (uVar3 != 0) {
      uVar6 = uVar3 >> 1;
      uVar5 = (uint)uVar3;
      uVar3 = uVar6;
      if (*(int *)(*(longlong *)(param_1 + 8) + (uVar6 + lVar2) * 4) <= param_2) {
        lVar2 = (ulonglong)(uVar5 & 1) + uVar6 + lVar2;
      }
    }
    iVar4 = (int)lVar2 + -1;
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    *param_3 = *(undefined4 *)(lVar2 + (longlong)iVar4 * 4);
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *param_3 = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 141f4a590 FUN_141f4a590 body=520 status=ok
// SIG undefined FUN_141f4a590(void)

void FUN_141f4a590(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70;
  undefined1 local_68 [80];
  
  Swap<FMovieSceneEvaluationMetaData>(param_1 + 0xf0,param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xfc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x100,0);
  }
  if (*(int *)(param_1 + 0x10) != param_4) {
    FUN_141f42940(param_1,param_3,0);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if ((*(int *)(param_1 + 0x8c) < 0) && (*(int *)(param_1 + 0x8c) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((*(int *)(param_1 + 0x9c) < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x90,0);
    }
  }
  FMovieSceneRootOverridePath::Set(param_1 + 0x170,param_4,*(longlong *)(param_1 + 8) + 0xd0);
  uVar3 = FMovieSceneContext::FMovieSceneContext(local_68,param_2);
  lVar4 = FUN_141f66120(param_1,param_3,param_4,uVar3);
  if (lVar4 == 0) {
    FUN_141f42940(param_1,param_3,0);
  }
  else {
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    local_a8 = param_3;
    FUN_141f42940(param_1,param_3,&local_a8);
    FMovieSceneEvaluationState::InvalidateExpiredObjects(param_3 + 8);
    FUN_141f4b220(param_1,lVar4,param_2,param_3);
    FMovieSceneExecutionTokens::Apply(param_1 + 0x1a0,param_2,param_3);
    puVar6 = local_a0;
    lVar2 = local_a8;
    puVar1 = (undefined8 *)((longlong)local_a0 + (longlong)(int)local_98 * 0xc);
    lVar4 = local_98;
    for (puVar5 = local_a0; puVar5 != puVar1; puVar5 = (undefined8 *)((longlong)puVar5 + 0xc)) {
      local_90 = *puVar5;
      local_88 = *(undefined4 *)(puVar5 + 1);
      local_70 = 0;
      local_98 = lVar4;
      FUN_141f62fc0(lVar2 + 0xf8,lVar2,&local_90,local_80);
      lVar4 = local_98;
    }
    local_98._4_4_ = (uint)((ulonglong)lVar4 >> 0x20);
    bVar7 = local_98._4_4_ != 0;
    if ((lVar4 < 0) && (local_98 = (ulonglong)local_98._4_4_ << 0x20, lVar4 = local_98, bVar7)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (&local_a0,0);
      puVar6 = local_a0;
      lVar4 = local_98;
    }
    local_98 = lVar4;
    if (puVar6 != (undefined8 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  return;
}



// FUNCTION 141f4a7a0 FUN_141f4a7a0 body=1265 status=ok
// SIG undefined FUN_141f4a7a0(void)

float FUN_141f4a7a0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2 + param_2;
  fVar2 = ((param_2 - 0.5) + param_2) - 0.5;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 1:
    fVar1 = _guard_xfg_dispatch_icall_nop((1.0 - param_2) * 1.5707964);
    return 1.0 - fVar1;
  case 2:
    fVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 1.5707964);
    return fVar1;
  case 3:
    if (fVar1 < 1.0) {
      fVar1 = _guard_xfg_dispatch_icall_nop((1.0 - fVar1) * 1.5707964);
      return (1.0 - fVar1) * 0.5;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar2 * 1.5707964);
    return (fVar1 + 1.0) * 0.5;
  case 5:
    return 1.0 - (1.0 - param_2) * (1.0 - param_2);
  case 6:
    if (fVar1 < 1.0) {
      return fVar1 * fVar1 * 0.5;
    }
    return ((1.0 - (1.0 - fVar2) * (1.0 - fVar2)) + 1.0) * 0.5;
  case 7:
    return param_2 * param_2 * param_2;
  case 8:
    param_2 = 1.0 - param_2;
    return 1.0 - param_2 * param_2 * param_2;
  case 9:
    if (fVar1 < 1.0) {
      return fVar1 * fVar1 * fVar1 * 0.5;
    }
    fVar1 = (1.0 - fVar2) * (1.0 - fVar2);
    break;
  case 10:
    param_2 = param_2 * param_2;
  case 4:
    return param_2 * param_2;
  case 0xb:
    fVar1 = (1.0 - param_2) * (1.0 - param_2);
    return 1.0 - fVar1 * fVar1;
  case 0xc:
    if (fVar1 < 1.0) {
      return fVar1 * fVar1 * fVar1 * fVar1 * 0.5;
    }
    fVar1 = (1.0 - fVar2) * (1.0 - fVar2);
    return ((1.0 - fVar1 * fVar1) + 1.0) * 0.5;
  case 0xd:
    return param_2 * param_2 * param_2 * param_2 * param_2;
  case 0xe:
    param_2 = 1.0 - param_2;
    return 1.0 - param_2 * param_2 * param_2 * param_2 * param_2;
  case 0xf:
    if (fVar1 < 1.0) {
      return fVar1 * fVar1 * fVar1 * fVar1 * fVar1 * 0.5;
    }
    fVar1 = (1.0 - fVar2) * (1.0 - fVar2);
    fVar1 = fVar1 * fVar1;
    break;
  case 0x10:
    fVar1 = _guard_xfg_dispatch_icall_nop(2.0,(param_2 - 1.0) * 10.0);
    return fVar1;
  case 0x11:
    fVar1 = _guard_xfg_dispatch_icall_nop(2.0,param_2 * -10.0);
    return 1.0 - fVar1;
  case 0x12:
    if (fVar1 < 1.0) {
      fVar1 = _guard_xfg_dispatch_icall_nop(2.0,(fVar1 - 1.0) * 10.0);
      return fVar1 * 0.5;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(2.0,fVar2 * -10.0);
    return ((1.0 - fVar1) + 1.0) * 0.5;
  case 0x13:
    return 1.0 - SQRT(1.0 - param_2 * param_2);
  case 0x14:
    return SQRT(1.0 - (1.0 - param_2) * (1.0 - param_2));
  case 0x15:
    if (fVar1 < 1.0) {
      return (1.0 - SQRT(1.0 - fVar1 * fVar1)) * 0.5;
    }
    return (SQRT(1.0 - (1.0 - fVar2) * (1.0 - fVar2)) + 1.0) * 0.5;
  default:
    return param_2;
  }
  return ((1.0 - fVar1 * (1.0 - fVar2)) + 1.0) * 0.5;
}



// FUNCTION 141f4ad10 EvaluateEasing body=22 status=ok
// SIG undefined EvaluateEasing(void)

void FMovieSceneEvalTemplate::EvaluateEasing(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fStackX_14;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    fStackX_14 = (float)((ulonglong)param_2 >> 0x20);
    if (*(char *)(lVar2 + 0x90) != '\x02') {
      if (*(char *)(lVar2 + 0x70) == '\0') {
        iVar4 = *(int *)(lVar2 + 0x58);
      }
      else {
        iVar4 = *(int *)(lVar2 + 0x74);
      }
      if ((0 < iVar4) && (*(longlong *)(lVar2 + 0x60) != 0)) {
        iVar4 = *(int *)(lVar2 + 0x94);
        if (*(char *)(lVar2 + 0x90) != '\x01') {
          iVar4 = iVar4 + 1;
        }
        if (*(char *)(lVar2 + 0x70) == '\0') {
          iVar5 = *(int *)(lVar2 + 0x58);
        }
        else {
          iVar5 = *(int *)(lVar2 + 0x74);
        }
        fVar3 = (fStackX_14 + (float)((int)param_2 - iVar4)) / (float)iVar5;
        if ((0.0 < fVar3) && (fVar3 < 1.0)) {
          if (*(longlong **)(lVar2 + 0x68) == (longlong *)0x0) {
            FUN_141f70090(*(longlong *)(lVar2 + 0x60));
          }
          else {
            (**(code **)(**(longlong **)(lVar2 + 0x68) + 0x10))();
          }
        }
      }
    }
    if (*(char *)(lVar2 + 0x98) != '\x02') {
      cVar1 = *(char *)(lVar2 + 0x88);
      if (cVar1 == '\0') {
        iVar4 = *(int *)(lVar2 + 0x5c);
      }
      else {
        iVar4 = *(int *)(lVar2 + 0x8c);
      }
      if ((0 < iVar4) && (*(longlong *)(lVar2 + 0x78) != 0)) {
        if (cVar1 == '\0') {
          iVar4 = *(int *)(lVar2 + 0x5c);
        }
        else {
          iVar4 = *(int *)(lVar2 + 0x8c);
        }
        iVar5 = *(int *)(lVar2 + 0x9c);
        if (*(char *)(lVar2 + 0x98) == '\x01') {
          iVar5 = iVar5 + 1;
        }
        if (cVar1 == '\0') {
          iVar6 = *(int *)(lVar2 + 0x5c);
        }
        else {
          iVar6 = *(int *)(lVar2 + 0x8c);
        }
        fVar3 = (fStackX_14 + (float)((iVar4 - iVar5) + (int)param_2)) / (float)iVar6;
        if ((0.0 < fVar3) && (fVar3 < 1.0)) {
          if (*(longlong **)(lVar2 + 0x80) == (longlong *)0x0) {
            FUN_141f70090(*(longlong *)(lVar2 + 0x78));
          }
          else {
            (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x10))();
          }
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 141f4ad30 EvaluateEasing body=456 status=ok
// SIG undefined EvaluateEasing(void)

void UMovieSceneSection::EvaluateEasing(longlong param_1,undefined8 param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fStackX_14;
  
  fStackX_14 = (float)((ulonglong)param_2 >> 0x20);
  if (*(char *)(param_1 + 0x90) != '\x02') {
    if (*(char *)(param_1 + 0x70) == '\0') {
      iVar3 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x74);
    }
    if ((0 < iVar3) && (*(longlong *)(param_1 + 0x60) != 0)) {
      iVar3 = *(int *)(param_1 + 0x94);
      if (*(char *)(param_1 + 0x90) != '\x01') {
        iVar3 = iVar3 + 1;
      }
      if (*(char *)(param_1 + 0x70) == '\0') {
        iVar4 = *(int *)(param_1 + 0x58);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x74);
      }
      fVar2 = (fStackX_14 + (float)((int)param_2 - iVar3)) / (float)iVar4;
      if ((0.0 < fVar2) && (fVar2 < 1.0)) {
        if (*(longlong **)(param_1 + 0x68) == (longlong *)0x0) {
          FUN_141f70090(*(longlong *)(param_1 + 0x60));
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x98) != '\x02') {
    cVar1 = *(char *)(param_1 + 0x88);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x8c);
    }
    if ((0 < iVar3) && (*(longlong *)(param_1 + 0x78) != 0)) {
      if (cVar1 == '\0') {
        iVar3 = *(int *)(param_1 + 0x5c);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x8c);
      }
      iVar4 = *(int *)(param_1 + 0x9c);
      if (*(char *)(param_1 + 0x98) == '\x01') {
        iVar4 = iVar4 + 1;
      }
      if (cVar1 == '\0') {
        iVar5 = *(int *)(param_1 + 0x5c);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x8c);
      }
      fVar2 = (fStackX_14 + (float)((iVar3 - iVar4) + (int)param_2)) / (float)iVar5;
      if ((0.0 < fVar2) && (fVar2 < 1.0)) {
        if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
          FUN_141f70090(*(longlong *)(param_1 + 0x78));
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
        }
      }
    }
  }
  return;
}



// FUNCTION 141f4af00 EvaluateExtrapolation body=789 status=ok
// SIG undefined EvaluateExtrapolation(void)

ulonglong FMovieSceneFloatChannel::EvaluateExtrapolation
                    (longlong param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  uint *puVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  ulonglong local_res8;
  float fStackX_14;
  
  puVar2 = *(uint **)(param_1 + 0x10);
  uVar8 = *puVar2;
  uVar11 = (uint)param_2;
  fStackX_14 = (float)((ulonglong)param_2 >> 0x20);
  if (((int)uVar11 < (int)uVar8) || ((uVar11 == uVar8 && (fStackX_14 < 0.0)))) {
    cVar1 = *(char *)(param_1 + 8);
    local_res8 = 0;
    if (cVar1 == '\x05') goto LAB_141f4b20b;
    if (cVar1 == '\x04') {
      pfVar4 = *(float **)(param_1 + 0x20);
      *param_3 = *pfVar4;
      return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
    }
    if (cVar1 != '\x03') goto LAB_141f4b20b;
    pfVar4 = *(float **)(param_1 + 0x20);
    cVar1 = *(char *)(pfVar4 + 1);
    uVar9 = 0;
    fVar14 = *pfVar4;
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        fStackX_14 = 0.0 - fStackX_14;
        iVar6 = (int)ROUND((fStackX_14 + fStackX_14) - 0.5);
        iVar7 = iVar6 >> 1;
        fStackX_14 = fStackX_14 - (float)iVar7;
        fVar13 = 0.0;
        if ((0.0 <= fStackX_14) && (fVar13 = fStackX_14, 0.99999994 <= fStackX_14)) {
          fVar13 = 0.99999994;
        }
        *param_3 = fVar14 - (fVar13 + (float)(int)((uVar8 - uVar11) + iVar7)) * pfVar4[2];
        return CONCAT71((uint7)(uint3)(iVar6 >> 9),1);
      }
      if (cVar1 != '\0') goto LAB_141f4b201;
      uVar8 = puVar2[1] - uVar8;
      uVar9 = (ulonglong)uVar8;
      if (uVar8 != 0) {
        fVar13 = pfVar4[7];
        fVar5 = ((float)(int)puVar2[1] - ((float)(int)uVar11 + fStackX_14)) / (float)(int)uVar8;
LAB_141f4b1d7:
        *param_3 = fVar5 * (fVar14 - fVar13) + fVar13;
        return CONCAT71((int7)(uVar9 >> 8),1);
      }
    }
  }
  else {
    lVar12 = (longlong)*(int *)(param_1 + 0x18);
    uVar8 = puVar2[lVar12 + -1];
    local_res8 = (ulonglong)uVar8;
    if (((int)uVar11 <= (int)uVar8) && ((uVar11 != uVar8 || (fStackX_14 <= 0.0)))) {
LAB_141f4b20b:
      return local_res8 & 0xffffffffffffff00;
    }
    cVar1 = *(char *)(param_1 + 9);
    local_res8 = 0;
    if (cVar1 == '\x05') goto LAB_141f4b20b;
    if (cVar1 == '\x04') {
      lVar12 = *(longlong *)(param_1 + 0x20);
      *param_3 = *(float *)((longlong)*(int *)(param_1 + 0x28) * 0x1c + -0x1c + lVar12);
      return CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
    }
    if (cVar1 != '\x03') goto LAB_141f4b20b;
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar10 = (longlong)*(int *)(param_1 + 0x28) * 0x1c;
    cVar1 = *(char *)(lVar10 + -0x18 + lVar3);
    uVar9 = 0;
    fVar14 = *(float *)(lVar10 + -0x1c + lVar3);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        fStackX_14 = fStackX_14 - 0.0;
        iVar6 = (int)ROUND((fStackX_14 + fStackX_14) - 0.5);
        iVar7 = iVar6 >> 1;
        fStackX_14 = fStackX_14 - (float)iVar7;
        fVar13 = 0.0;
        if ((0.0 <= fStackX_14) && (fVar13 = fStackX_14, 0.99999994 <= fStackX_14)) {
          fVar13 = 0.99999994;
        }
        *param_3 = ((float)(int)((uVar11 - uVar8) + iVar7) + fVar13) *
                   *(float *)(lVar10 + -0x10 + lVar3) + fVar14;
        return CONCAT71((uint7)(uint3)(iVar6 >> 9),1);
      }
      if (cVar1 != '\0') goto LAB_141f4b201;
      uVar9 = lVar12 - 2;
      iVar6 = uVar8 - puVar2[lVar12 + -2];
      if (iVar6 != 0) {
        uVar9 = uVar9 * 0x1c;
        fVar13 = *(float *)(uVar9 + lVar3);
        fVar5 = (((float)(int)uVar11 + fStackX_14) - (float)(int)puVar2[lVar12 + -2]) / (float)iVar6
        ;
        goto LAB_141f4b1d7;
      }
    }
  }
  *param_3 = fVar14;
LAB_141f4b201:
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 141f4b220 FUN_141f4b220 body=4470 status=ok
// SIG undefined FUN_141f4b220(void)

void FUN_141f4b220(longlong param_1,undefined8 *param_2,char *param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  byte bVar28;
  ulonglong uVar29;
  uint *puVar30;
  uint uVar31;
  bool bVar32;
  undefined8 uVar33;
  uint local_res18 [2];
  longlong local_res20;
  bool local_318;
  int local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  char local_2f8 [4];
  longlong local_2f4;
  char local_2ec;
  longlong local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  uint local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  undefined4 local_2bc;
  byte local_2b8;
  int local_2a8;
  longlong local_2a0;
  longlong local_298;
  char local_288 [4];
  longlong local_284;
  char local_27c;
  longlong local_278;
  undefined8 local_270;
  int local_268;
  uint local_264;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  uint local_250;
  undefined4 local_24c;
  byte local_248;
  ulonglong local_238;
  uint *local_230;
  longlong local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  uint local_210;
  undefined1 local_208;
  uint local_204;
  longlong local_200;
  int *local_1f8;
  uint *local_1f0;
  uint *local_1e8;
  char local_1e0;
  longlong local_1dc;
  char local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  int local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  undefined4 local_1a4;
  byte local_1a0;
  char local_198 [4];
  uint local_194;
  undefined1 local_190;
  undefined4 local_18c;
  undefined1 local_188 [4];
  undefined4 local_184;
  char local_180;
  uint local_17c;
  char local_178;
  uint local_174;
  char local_170;
  uint local_16c;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  uint local_150;
  uint uStack_14c;
  undefined4 uStack_148;
  uint local_144;
  undefined8 local_140;
  undefined8 local_134;
  undefined8 local_128;
  uint local_118;
  uint uStack_114;
  undefined8 local_104;
  undefined8 local_f8;
  uint local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  int *local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined8 local_c8;
  undefined8 local_b4;
  undefined1 local_ac [8];
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  undefined1 local_6c [12];
  undefined1 local_60 [32];
  
  local_2f4 = *(longlong *)(param_3 + 4);
  local_160 = param_4 + 8;
  local_2f8[0] = *param_3;
  local_2ec = param_3[0xc];
  local_158 = param_4 + 0x58;
  local_2d8 = *(int *)(param_3 + 0x20);
  local_2d4 = *(uint *)(param_3 + 0x24);
  local_2c4 = *(undefined4 *)(param_3 + 0x34);
  local_2bc = *(undefined4 *)(param_3 + 0x3c);
  local_2d0 = *(undefined8 *)(param_3 + 0x28);
  local_2c0 = *(uint *)(param_3 + 0x38);
  local_150 = DAT_1464d3e28;
  local_144 = DAT_1464d3e28;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  local_258 = *(undefined4 *)(param_3 + 0x30);
  local_248 = local_248 ^ (param_3[0x40] ^ local_248) & 0x3f;
  local_2c8 = *(undefined4 *)(param_3 + 0x30);
  local_2b8 = local_2b8 ^ (local_2b8 ^ local_248) & 0x3f;
  local_1f8 = (int *)*param_2;
  local_2e8 = *(longlong *)(param_3 + 0x10);
  local_2e0 = *(undefined8 *)(param_3 + 0x18);
  local_e0 = local_1f8 + (longlong)*(int *)(param_2 + 1) * 3;
  uStack_14c = 0xffffffff;
  uStack_148 = 0xffffffff;
  local_140 = 0xffffffffffffffff;
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,local_2ec);
  if (local_1f8 == local_e0) {
    return;
  }
  local_200 = param_1 + 0x1a0;
  local_res20 = param_4;
  local_288[0] = local_2f8[0];
  local_284 = local_2f4;
  local_27c = local_2ec;
  local_278 = local_2e8;
  local_270 = local_2e0;
  local_268 = local_2d8;
  local_264 = local_2d4;
  local_260 = local_2d0;
  local_254 = local_2c4;
  local_250 = local_2c0;
  local_24c = local_2bc;
  local_168 = param_4;
  do {
    uVar29 = (ulonglong)local_264;
    iVar19 = *local_1f8;
    lVar25 = (longlong)iVar19;
    iVar16 = local_1f8[1];
    uVar23 = local_270;
    uVar33 = local_260;
    uVar31 = local_250;
    local_2a8 = iVar19;
    local_318 = (bool)local_288[0];
    local_314 = local_268;
    local_310 = local_24c;
    local_30c = local_254;
    local_308 = local_258;
    local_2a0 = local_284;
    local_298 = local_278;
    local_238 = uVar29;
    if (iVar19 < iVar16 + iVar19) {
      local_1f0 = (uint *)(param_1 + 0x170);
      puVar18 = (uint *)(param_1 + 0x10);
      cVar8 = local_27c;
      local_1e8 = puVar18;
      do {
        lVar17 = local_2a0;
        uVar1 = *(undefined8 *)(param_2[2] + lVar25 * 0xc);
        uVar4 = *(undefined4 *)(param_2[2] + 8 + lVar25 * 0xc);
        iVar19 = *(int *)(param_1 + 0x198);
        local_c8._0_4_ = (uint)uVar1;
        if (iVar19 != 0) {
          uVar27 = 0;
          puVar11 = *(uint **)(param_1 + 400);
          if (*(uint **)(param_1 + 400) == (uint *)0x0) {
            puVar11 = local_1f0;
          }
          uVar22 = (longlong)iVar19 & 0x3fffffffffffffff;
          if (puVar11 + iVar19 < puVar11) {
            uVar22 = uVar27;
          }
          if (uVar22 != 0) {
            do {
              uVar10 = *puVar11;
              if ((uint)local_c8 != 0) {
                uVar24 = (uint)local_c8 - uVar10 ^ uVar10 >> 0xd;
                uVar9 = (-0x61c88647 - uVar24) - uVar10 ^ uVar24 << 8;
                uVar26 = (uVar10 - uVar9) - uVar24 ^ uVar9 >> 0xd;
                uVar10 = (uVar24 - uVar9) - uVar26 ^ uVar26 >> 0xc;
                uVar9 = (uVar9 - uVar10) - uVar26 ^ uVar10 << 0x10;
                uVar24 = (uVar26 - uVar9) - uVar10 ^ uVar9 >> 5;
                uVar10 = (uVar10 - uVar9) - uVar24 ^ uVar24 >> 3;
                uVar9 = (uVar9 - uVar10) - uVar24 ^ uVar10 << 10;
                uVar10 = (uVar24 - uVar9) - uVar10 ^ uVar9 >> 0xf;
              }
              local_c8._0_4_ = uVar10;
              puVar11 = puVar11 + 1;
              uVar27 = uVar27 + 1;
            } while (uVar27 != uVar22);
          }
          cVar8 = (char)local_res18[0];
        }
        puVar11 = puVar18;
        if ((uint)local_c8 != *puVar18) {
          if (puVar18[10] != puVar18[0x15]) {
            puVar11 = *(uint **)(puVar18 + 0x18);
            if (*(uint **)(puVar18 + 0x18) == (uint *)0x0) {
              puVar11 = puVar18 + 0x16;
            }
            uVar10 = puVar11[(longlong)(int)puVar18[0x1a] - 1U & (longlong)(int)(uint)local_c8];
            if (uVar10 != 0xffffffff) {
              do {
                puVar11 = (uint *)(*(longlong *)(puVar18 + 8) + (longlong)(int)uVar10 * 0x28);
                if (*(uint *)(*(longlong *)(puVar18 + 8) + (longlong)(int)uVar10 * 0x28) ==
                    (uint)local_c8) {
                  if (uVar10 != 0xffffffff) goto LAB_141f4b586;
                  break;
                }
                uVar10 = puVar11[8];
              } while (uVar10 != 0xffffffff);
            }
          }
          puVar11 = (uint *)0x0;
        }
LAB_141f4b586:
        plVar14 = *(longlong **)(puVar11 + 4);
        local_c8._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
        if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
          plVar12 = (longlong *)plVar14[8];
          if ((longlong *)plVar14[8] == (longlong *)0x0) {
            plVar12 = plVar14 + 7;
          }
          uVar10 = *(uint *)((longlong)plVar12 +
                            ((longlong)(int)plVar14[9] - 1U & (longlong)(int)local_c8._4_4_) * 4);
          if (uVar10 != 0xffffffff) {
            do {
              puVar20 = (uint *)((longlong)(int)uVar10 * 0x108 + *plVar14);
              if (*puVar20 == local_c8._4_4_) {
                if (uVar10 != 0xffffffff) goto LAB_141f4b5f7;
                break;
              }
              uVar10 = puVar20[0x40];
            } while (uVar10 != 0xffffffff);
          }
        }
        puVar20 = (uint *)0x0;
LAB_141f4b5f7:
        local_230 = puVar20 + 2;
        if (puVar20 == (uint *)0x0) {
          local_230 = (uint *)0x0;
        }
        local_228 = lVar25;
        if (local_230 == (uint *)0x0) {
          if ((int)plVar14[0xb] != *(int *)((longlong)plVar14 + 0x84)) {
            plVar12 = (longlong *)plVar14[0x12];
            if ((longlong *)plVar14[0x12] == (longlong *)0x0) {
              plVar12 = plVar14 + 0x11;
            }
            uVar10 = *(uint *)((longlong)plVar12 +
                              ((longlong)(int)plVar14[0x13] - 1U & (longlong)(int)local_c8._4_4_) *
                              4);
            if (uVar10 != 0xffffffff) {
              do {
                puVar20 = (uint *)((longlong)(int)uVar10 * 0x108 + plVar14[10]);
                if (*puVar20 == local_c8._4_4_) {
                  if (uVar10 != 0xffffffff) goto LAB_141f4b678;
                  break;
                }
                uVar10 = puVar20[0x40];
              } while (uVar10 != 0xffffffff);
            }
          }
          puVar20 = (uint *)0x0;
LAB_141f4b678:
          local_230 = puVar20 + 2;
          if (puVar20 == (uint *)0x0) {
            local_230 = (uint *)0x0;
          }
          if (local_230 != (uint *)0x0) goto LAB_141f4b696;
        }
        else {
LAB_141f4b696:
          local_220 = *(undefined8 *)local_230;
          uStack_218 = *(undefined8 *)(local_230 + 2);
          uStack_d4 = local_c8._4_4_;
          *(undefined1 *)(local_res20 + 0x2dc) = *(undefined1 *)(local_res20 + 0x2dd);
          local_2e8 = local_298;
          *(ulonglong *)(local_res20 + 0x2d0) = CONCAT44(local_c8._4_4_,(uint)local_c8);
          local_2bc = local_310;
          *(undefined4 *)(local_res20 + 0x2d8) = 0xffffffff;
          local_2b8 = local_2b8 & 0xc0 | local_248 & 0x3f;
          uStack_14c = local_c8._4_4_;
          uStack_148 = 0xffffffff;
          local_2f8[0] = local_318;
          local_2f4 = local_2a0;
          local_2d8 = local_314;
          local_2d4 = (uint)uVar29;
          local_2c8 = local_308;
          local_2c4 = local_30c;
          lVar25 = *(longlong *)(puVar11 + 6);
          local_2ec = cVar8;
          local_2e0 = uVar23;
          local_2d0 = uVar33;
          local_2c0 = uVar31;
          local_210 = (uint)local_c8;
          local_150 = (uint)local_c8;
          local_d8 = (uint)local_c8;
          if (lVar25 != 0) {
            uVar5 = *(undefined8 *)(lVar25 + 0x24);
            local_2a0 = lVar25 + 0x18;
            bVar28 = local_1a0 & 0xc0 | local_248 & 0x3f;
            local_1c0 = local_314;
            local_1b0 = local_308;
            local_1ac = local_30c;
            local_1a4 = local_310;
            local_1c8 = uVar23;
            local_1bc = local_2d4;
            local_1b8 = uVar33;
            local_1a8 = uVar31;
            local_1a0 = bVar28;
            local_c8 = uVar1;
            if (local_318 == true) {
              lVar25 = 0;
              local_b4 = 0;
              local_res18[0] = CONCAT31(local_res18[0]._1_3_,2);
              lVar17 = local_298;
            }
            else {
              if (local_318 == true) {
                plVar14 = (longlong *)operator*(local_9c,lVar17,local_2a0);
                local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
              }
              else {
                plVar14 = (longlong *)operator*(local_a4,lVar17,local_2a0);
                local_res18[0] = local_res18[0] & 0xffffff00;
              }
              lVar25 = *plVar14;
              lVar17 = local_278;
              cVar8 = local_27c;
            }
            if (cVar8 == '\x02') {
              local_134 = 0;
              lVar17 = 0;
              cVar8 = '\x02';
            }
            else if (cVar8 == '\x01') {
              plVar14 = (longlong *)operator*(local_ac,lVar17,local_2a0);
              lVar17 = *plVar14;
              cVar8 = '\x01';
            }
            else {
              plVar14 = (longlong *)operator*(local_74,lVar17,local_2a0);
              lVar17 = *plVar14;
              cVar8 = '\0';
            }
            local_1e0 = (char)local_res18[0];
            local_1dc = lVar25;
            local_1d4 = cVar8;
            local_1d0 = lVar17;
            puVar13 = (undefined8 *)operator*(local_60,&local_1b8,local_2a0);
            local_2c8 = *(undefined4 *)(puVar13 + 1);
            bVar28 = local_2b8 ^ (bVar28 ^ local_2b8) & 0x3f;
            local_2d0 = *puVar13;
            local_2f8[0] = (char)local_res18[0];
            local_2d4 = (uint)local_238;
            lVar21 = *(longlong *)(puVar11 + 6);
            uVar31 = *(uint *)(lVar21 + 0x5c);
            cVar2 = *(char *)(lVar21 + 0x58);
            local_170 = *(char *)(lVar21 + 0x48);
            local_174 = *(uint *)(lVar21 + 0x44);
            local_16c = *(uint *)(lVar21 + 0x4c);
            cVar3 = *(char *)(lVar21 + 0x50);
            local_2c0 = *(uint *)(lVar21 + 0x54);
            local_178 = *(char *)(lVar21 + 0x40);
            local_res18[0] = CONCAT31(local_res18[0]._1_3_,cVar2);
            local_204 = local_2d4;
            if (local_2d4 == 0x80000000) {
              lVar21 = lVar25;
              if (local_314 == 0) {
                lVar21 = lVar17;
              }
              local_204 = (uint)lVar21;
            }
            local_208 = 1;
            if (local_178 == '\x02') {
              puVar18 = &local_174;
              cVar7 = '\x02';
            }
            else if ((int)local_174 < (int)local_204) {
              puVar18 = &local_174;
              cVar7 = local_178;
            }
            else {
              if (((int)local_204 < (int)local_174) || (puVar18 = &local_174, local_178 != '\x01'))
              {
                puVar18 = &local_204;
              }
              cVar7 = '\x01';
            }
            if ((((cVar7 == local_178) &&
                 (((cVar7 == '\x02' || (*puVar18 == local_174)) && (local_170 != '\x02')))) &&
                (((int)local_204 < (int)local_16c ||
                 ((((int)local_204 <= (int)local_16c && (local_170 == '\x01')) ||
                  ((local_170 == '\x01' && (local_204 == local_16c)))))))) && (local_170 != '\x02'))
            {
              bVar15 = 0;
              if (local_314 == 0) {
                bVar15 = 0x10;
              }
              bVar15 = bVar15 | bVar28 & 0xef;
              local_2b8 = (~(bVar15 >> 4) << 5 ^ bVar15) & 0x20 ^ bVar15;
              local_2c0 = local_16c;
            }
            else if ((((cVar3 == '\x02') || ((int)local_2c0 < (int)local_204)) ||
                     ((((int)local_2c0 <= (int)local_204 && (cVar3 == '\x01')) ||
                      ((cVar3 == '\x01' && (local_204 == local_2c0)))))) &&
                    ((((cVar2 == '\x02' ||
                       (((int)local_204 < (int)uVar31 ||
                        (((int)local_204 <= (int)uVar31 && (cVar2 == '\x01')))))) ||
                      ((cVar2 == '\x01' && (local_204 == uVar31)))) && (cVar3 != '\x02')))) {
              bVar15 = 0;
              if (local_314 == 1) {
                bVar15 = 0x10;
              }
              bVar15 = bVar15 | bVar28 & 0xef;
              local_2b8 = (~(bVar15 >> 4) << 5 ^ bVar15) & 0x20 ^ bVar15;
            }
            else {
              local_2b8 = bVar28 & 0xcf;
              local_2c0 = 0x80000000;
            }
            local_2bc = *(undefined4 *)(*(longlong *)(puVar11 + 6) + 0x60);
            puVar18 = local_1e8;
            local_2f4 = lVar25;
            local_2ec = cVar8;
            local_2e8 = lVar17;
            local_2e0 = uVar5;
            uVar1 = local_c8;
          }
          local_c8 = uVar1;
          local_2c4 = local_30c;
          local_2d8 = local_314;
          FMovieSceneEvaluationTrack::Initialize
                    (local_230,uVar4,&local_220,local_2f8,&local_168,local_res20);
          uVar29 = (ulonglong)local_264;
          local_298 = local_278;
          local_318 = (bool)local_288[0];
          local_310 = local_24c;
          local_30c = local_254;
          local_308 = local_258;
          local_314 = local_268;
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,local_27c);
          local_2a0 = local_284;
          uVar23 = local_270;
          uVar33 = local_260;
          cVar8 = local_27c;
          uVar31 = local_250;
          local_238 = uVar29;
          uVar1 = local_c8;
        }
        local_c8 = uVar1;
        local_2a8 = local_2a8 + 1;
        lVar25 = local_228 + 1;
        iVar16 = local_1f8[1];
        iVar19 = *local_1f8;
        local_228 = lVar25;
      } while (local_2a8 < iVar16 + iVar19);
    }
    if (local_2a8 < iVar16 + iVar19 + local_1f8[2]) {
      local_1f0 = (uint *)(param_1 + 0x170);
      puVar18 = (uint *)(param_1 + 0x10);
      local_230 = (uint *)((longlong)local_2a8 * 0xc);
      local_1e8 = puVar18;
      do {
        iVar19 = *(int *)(param_1 + 0x198);
        uVar1 = *(undefined8 *)((longlong)local_230 + param_2[2]);
        uVar4 = *(undefined4 *)((longlong)local_230 + param_2[2] + 8);
        local_128._0_4_ = (uint)uVar1;
        if (iVar19 != 0) {
          uVar27 = 0;
          puVar11 = *(uint **)(param_1 + 400);
          if (*(uint **)(param_1 + 400) == (uint *)0x0) {
            puVar11 = local_1f0;
          }
          uVar22 = (longlong)iVar19 & 0x3fffffffffffffff;
          if (puVar11 + iVar19 < puVar11) {
            uVar22 = uVar27;
          }
          if (uVar22 != 0) {
            do {
              uVar10 = *puVar11;
              if ((uint)local_128 != 0) {
                uVar9 = (uint)local_128 - uVar10 ^ uVar10 >> 0xd;
                uVar24 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
                uVar10 = (uVar10 - uVar24) - uVar9 ^ uVar24 >> 0xd;
                uVar9 = (uVar9 - uVar24) - uVar10 ^ uVar10 >> 0xc;
                uVar24 = (uVar24 - uVar9) - uVar10 ^ uVar9 << 0x10;
                uVar10 = (uVar10 - uVar24) - uVar9 ^ uVar24 >> 5;
                uVar9 = (uVar9 - uVar24) - uVar10 ^ uVar10 >> 3;
                uVar24 = (uVar24 - uVar9) - uVar10 ^ uVar9 << 10;
                uVar10 = (uVar10 - uVar24) - uVar9 ^ uVar24 >> 0xf;
              }
              local_128._0_4_ = uVar10;
              puVar11 = puVar11 + 1;
              uVar27 = uVar27 + 1;
            } while (uVar27 != uVar22);
          }
        }
        puVar11 = puVar18;
        if ((uint)local_128 != *puVar18) {
          if (puVar18[10] != puVar18[0x15]) {
            puVar11 = *(uint **)(puVar18 + 0x18);
            if (*(uint **)(puVar18 + 0x18) == (uint *)0x0) {
              puVar11 = puVar18 + 0x16;
            }
            uVar10 = puVar11[(longlong)(int)puVar18[0x1a] - 1U & (longlong)(int)(uint)local_128];
            if (uVar10 != 0xffffffff) {
              do {
                puVar11 = (uint *)(*(longlong *)(puVar18 + 8) + (longlong)(int)uVar10 * 0x28);
                if (*(uint *)(*(longlong *)(puVar18 + 8) + (longlong)(int)uVar10 * 0x28) ==
                    (uint)local_128) {
                  if (uVar10 != 0xffffffff) goto LAB_141f4bcf4;
                  break;
                }
                uVar10 = puVar11[8];
              } while (uVar10 != 0xffffffff);
            }
          }
          puVar11 = (uint *)0x0;
        }
LAB_141f4bcf4:
        plVar14 = *(longlong **)(puVar11 + 4);
        local_128._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
        if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
          plVar12 = (longlong *)plVar14[8];
          if ((longlong *)plVar14[8] == (longlong *)0x0) {
            plVar12 = plVar14 + 7;
          }
          uVar10 = *(uint *)((longlong)plVar12 +
                            ((longlong)(int)plVar14[9] - 1U & (longlong)(int)local_128._4_4_) * 4);
          if (uVar10 != 0xffffffff) {
            do {
              puVar20 = (uint *)((longlong)(int)uVar10 * 0x108 + *plVar14);
              if (*puVar20 == local_128._4_4_) {
                if (uVar10 != 0xffffffff) goto LAB_141f4bd68;
                break;
              }
              uVar10 = puVar20[0x40];
            } while (uVar10 != 0xffffffff);
          }
        }
        puVar20 = (uint *)0x0;
LAB_141f4bd68:
        puVar30 = puVar20 + 2;
        if (puVar20 == (uint *)0x0) {
          puVar30 = (uint *)0x0;
        }
        if (puVar30 == (uint *)0x0) {
          if ((int)plVar14[0xb] != *(int *)((longlong)plVar14 + 0x84)) {
            plVar12 = (longlong *)plVar14[0x12];
            if ((longlong *)plVar14[0x12] == (longlong *)0x0) {
              plVar12 = plVar14 + 0x11;
            }
            uVar10 = *(uint *)((longlong)plVar12 +
                              ((longlong)(int)plVar14[0x13] - 1U & (longlong)(int)local_128._4_4_) *
                              4);
            if (uVar10 != 0xffffffff) {
              do {
                puVar20 = (uint *)((longlong)(int)uVar10 * 0x108 + plVar14[10]);
                if (*puVar20 == local_128._4_4_) {
                  if (uVar10 != 0xffffffff) goto LAB_141f4bde7;
                  break;
                }
                uVar10 = puVar20[0x40];
              } while (uVar10 != 0xffffffff);
            }
          }
          puVar20 = (uint *)0x0;
LAB_141f4bde7:
          puVar30 = puVar20 + 2;
          if (puVar20 == (uint *)0x0) {
            puVar30 = (uint *)0x0;
          }
          if (puVar30 != (uint *)0x0) goto LAB_141f4bdfb;
        }
        else {
LAB_141f4bdfb:
          local_220 = *(undefined8 *)puVar30;
          uStack_218 = *(undefined8 *)(puVar30 + 2);
          *(undefined8 *)(param_1 + 0x2b0) = local_220;
          *(undefined8 *)(param_1 + 0x2b8) = uStack_218;
          *(uint *)(param_1 + 0x2c0) = (uint)local_128;
          local_2ec = (char)local_res18[0];
          local_2e8 = local_298;
          local_2bc = local_310;
          uStack_114 = local_128._4_4_;
          uStack_14c = local_128._4_4_;
          local_2b8 = local_2b8 & 0xc0 | local_248 & 0x3f;
          uStack_e4 = uStack_e4 & 0xffffff00;
          uStack_148 = 0xffffffff;
          local_2f8[0] = local_318;
          local_2f4 = local_2a0;
          *(uint *)(param_1 + 0x2c4) = (uint)local_128;
          *(uint *)(param_1 + 0x2c8) = local_128._4_4_;
          *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
          *(uint *)(param_1 + 0x2d0) = uStack_e4;
          local_2d8 = local_314;
          local_2d4 = (uint)uVar29;
          local_2c8 = local_308;
          local_2c4 = local_30c;
          lVar25 = *(longlong *)(puVar11 + 6);
          uStack_ec = local_128._4_4_;
          uStack_e8 = 0xffffffff;
          local_2e0 = uVar23;
          local_2d0 = uVar33;
          local_2c0 = uVar31;
          local_210 = (uint)local_128;
          local_150 = (uint)local_128;
          local_118 = (uint)local_128;
          local_f0 = (uint)local_128;
          if (lVar25 != 0) {
            uVar5 = *(undefined8 *)(lVar25 + 0x24);
            local_228 = lVar25 + 0x18;
            local_1c0 = local_314;
            bVar28 = local_1a0 & 0xc0 | local_248 & 0x3f;
            local_1b0 = local_308;
            local_1ac = local_30c;
            local_1a4 = local_310;
            local_1c8 = uVar23;
            local_1bc = local_2d4;
            local_1b8 = uVar33;
            local_1a8 = uVar31;
            local_1a0 = bVar28;
            if (local_318 == true) {
              lVar25 = 0;
              local_104 = 0;
              lVar17 = local_298;
              cVar8 = (char)local_res18[0];
            }
            else {
              local_128 = uVar1;
              local_f0 = local_118;
              if (local_318 != true) {
                plVar14 = (longlong *)operator*(local_94,local_2a0,local_228);
              }
              else {
                plVar14 = (longlong *)operator*(local_8c,local_2a0,local_228);
              }
              local_318 = local_318 == true;
              lVar25 = *plVar14;
              lVar17 = local_278;
              cVar8 = local_27c;
              uVar1 = local_128;
            }
            local_128 = uVar1;
            if (cVar8 == '\x02') {
              local_f8 = 0;
              lVar17 = 0;
              local_1d4 = '\x02';
            }
            else if (cVar8 == '\x01') {
              plVar14 = (longlong *)operator*(local_84,lVar17,local_228);
              lVar17 = *plVar14;
              local_1d4 = '\x01';
            }
            else {
              plVar14 = (longlong *)operator*(local_7c,lVar17,local_228);
              lVar17 = *plVar14;
              local_1d4 = '\0';
            }
            local_1e0 = local_318;
            local_res18[0] = CONCAT31(local_res18[0]._1_3_,local_1d4);
            local_1dc = lVar25;
            local_1d0 = lVar17;
            puVar13 = (undefined8 *)operator*(local_6c,&local_1b8,local_228);
            local_2d4 = (uint)local_238;
            local_2c8 = *(undefined4 *)(puVar13 + 1);
            local_2d0 = *puVar13;
            local_2f8[0] = local_318;
            local_2ec = (char)local_res18[0];
            local_2c4 = local_30c;
            local_2bc = local_310;
            local_2b8 = local_2b8 ^ (local_2b8 ^ bVar28) & 0x3f;
            local_2d8 = local_314;
            lVar21 = *(longlong *)(puVar11 + 6);
            local_198[0] = *(char *)(lVar21 + 0x50);
            local_194 = *(uint *)(lVar21 + 0x54);
            local_190 = *(undefined1 *)(lVar21 + 0x58);
            local_18c = *(undefined4 *)(lVar21 + 0x5c);
            local_188[0] = *(undefined1 *)(lVar21 + 0x40);
            local_184 = *(undefined4 *)(lVar21 + 0x44);
            local_180 = *(char *)(lVar21 + 0x48);
            local_17c = *(uint *)(lVar21 + 0x4c);
            local_res18[0] = local_2d4;
            if (local_2d4 == 0x80000000) {
              lVar21 = lVar25;
              if (local_314 == 0) {
                lVar21 = lVar17;
              }
              local_res18[0] = (uint)lVar21;
            }
            local_2f4 = lVar25;
            local_2e8 = lVar17;
            local_2e0 = uVar5;
            local_2c0 = uVar31;
            cVar8 = TRange<FFrameNumber>::Contains(local_188,local_res18);
            if ((cVar8 == '\0') || (local_180 == '\x02')) {
              cVar8 = TRange<FFrameNumber>::Contains(local_198,local_res18);
              if ((cVar8 != '\0') && (local_198[0] != '\x02')) {
                local_2c0 = local_194;
                bVar32 = local_2d8 == 1;
                goto LAB_141f4c162;
              }
              local_2b8 = local_2b8 & 0xcf;
              local_2c0 = 0x80000000;
            }
            else {
              local_2c0 = local_17c;
              bVar32 = local_2d8 == 0;
LAB_141f4c162:
              bVar28 = 0;
              if (bVar32) {
                bVar28 = 0x10;
              }
              bVar28 = bVar28 | local_2b8 & 0xef;
              local_2b8 = (~(bVar28 >> 4) << 5 ^ bVar28) & 0x20 ^ bVar28;
            }
            local_2bc = *(undefined4 *)(*(longlong *)(puVar11 + 6) + 0x60);
            puVar18 = local_1e8;
            uVar1 = local_128;
          }
          local_128 = uVar1;
          if ((puVar30[0x38] & 1) == 0) {
LAB_141f4c242:
            FMovieSceneEvaluationTrack::DefaultEvaluate
                      (puVar30,uVar4,&local_220,local_2f8,&local_168,local_200);
            local_res18[0] = CONCAT31(local_res18[0]._1_3_,local_27c);
          }
          else {
            puVar11 = puVar30 + 0x2c;
            bVar28 = (byte)puVar30[0x38] & 2;
            puVar20 = puVar11;
            if (bVar28 == 0) {
              puVar20 = *(uint **)puVar11;
            }
            if ((puVar20[2] & 8) == 0) goto LAB_141f4c242;
            if (bVar28 == 0) {
              puVar11 = *(uint **)puVar11;
            }
            (**(code **)(*(longlong *)puVar11 + 0x30))
                      (puVar11,puVar30,uVar4,&local_220,local_2f8,&local_168,local_200);
            local_res18[0] = CONCAT31(local_res18[0]._1_3_,local_27c);
          }
          uVar29 = (ulonglong)local_264;
          local_298 = local_278;
          uVar23 = local_270;
          uVar33 = local_260;
          uVar31 = local_250;
          local_318 = (bool)local_288[0];
          local_314 = local_268;
          local_310 = local_24c;
          local_30c = local_254;
          local_308 = local_258;
          local_2a0 = local_284;
          local_238 = uVar29;
          uVar1 = local_128;
        }
        local_128 = uVar1;
        local_2a8 = local_2a8 + 1;
        local_230 = local_230 + 3;
      } while (local_2a8 < local_1f8[1] + *local_1f8 + local_1f8[2]);
    }
    piVar6 = local_1f8;
    FMovieSceneExecutionTokens::Apply(local_200,local_288,local_res20);
    local_1f8 = piVar6 + 3;
    if (local_1f8 == local_e0) {
      return;
    }
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,local_27c);
  } while( true );
}



// FUNCTION 141f4c3a0 EvaluateNearestSegment body=779 status=ok
// SIG undefined EvaluateNearestSegment(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
MovieSceneSegmentCompiler::EvaluateNearestSegment
          (undefined1 *param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined8 local_a8;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_80 [48];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    if (param_4 == 0) {
      param_1[0x58] = 0;
    }
    else {
      local_98 = *param_2;
      local_94 = *(undefined4 *)(param_2 + 4);
      local_90 = param_2[8];
      local_8c = *(undefined4 *)(param_2 + 0xc);
      uVar2 = *(undefined4 *)(param_4 + 4);
      puVar5 = *(undefined8 **)(param_4 + 0x48);
      if (*(undefined8 **)(param_4 + 0x48) == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)(param_4 + 0x18);
      }
      local_88 = 0xffffffff;
      local_84 = 0;
      puVar1 = (undefined8 *)((longlong)puVar5 + (longlong)*(int *)(param_4 + 0x50) * 0xc);
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      puVar4 = local_50;
      uVar3 = local_48;
      for (; local_50 = puVar4, puVar5 != puVar1; puVar5 = (undefined8 *)((longlong)puVar5 + 0xc)) {
        local_a8 = *puVar5;
        local_48._0_4_ = (int)uVar3;
        lVar6 = (longlong)(int)local_48;
        local_b8 = (undefined4)local_a8;
        local_48._0_4_ = (int)local_48 + 1;
        local_b0 = local_b0 & 0xffffff00;
        local_48._4_4_ = (int)(uVar3 >> 0x20);
        uStack_b4 = uVar2;
        if (local_48._4_4_ < (int)local_48) {
          TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_80,uVar3 & 0xffffffff);
        }
        puVar4 = local_80;
        if (local_50 != (undefined1 *)0x0) {
          puVar4 = local_50;
        }
        *(ulonglong *)(puVar4 + lVar6 * 0xc) = CONCAT44(uStack_b4,local_b8);
        *(uint *)(puVar4 + lVar6 * 0xc + 8) = local_b0;
        puVar4 = local_50;
        uVar3 = local_48;
      }
      *param_1 = local_98;
      *(undefined4 *)(param_1 + 4) = local_94;
      param_1[8] = local_90;
      *(undefined4 *)(param_1 + 0xc) = local_8c;
      *(undefined4 *)(param_1 + 0x10) = local_88;
      param_1[0x14] = local_84;
      *(undefined8 *)(param_1 + 0x48) = 0;
      local_48 = uVar3;
      if (puVar4 == (undefined1 *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(param_1 + 0x18,local_80,0x30);
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FMemory::Free();
        puVar4 = local_50;
      }
      *(undefined1 **)(param_1 + 0x48) = puVar4;
      *(int *)(param_1 + 0x50) = (int)local_48;
      *(int *)(param_1 + 0x54) = local_48._4_4_;
      param_1[0x58] = 1;
    }
  }
  else {
    local_98 = *param_2;
    local_94 = *(undefined4 *)(param_2 + 4);
    local_90 = param_2[8];
    local_8c = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_3 + 0xc);
    puVar5 = *(undefined8 **)(param_3 + 0x48);
    if (*(undefined8 **)(param_3 + 0x48) == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(param_3 + 0x18);
    }
    local_88 = 0xffffffff;
    local_84 = 0;
    puVar1 = (undefined8 *)((longlong)puVar5 + (longlong)*(int *)(param_3 + 0x50) * 0xc);
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
    puVar4 = local_50;
    uVar3 = local_48;
    for (; local_50 = puVar4, puVar5 != puVar1; puVar5 = (undefined8 *)((longlong)puVar5 + 0xc)) {
      local_a8 = *puVar5;
      local_48._0_4_ = (int)uVar3;
      lVar6 = (longlong)(int)local_48;
      local_b8 = (undefined4)local_a8;
      local_48._0_4_ = (int)local_48 + 1;
      local_b0 = local_b0 & 0xffffff00;
      local_48._4_4_ = (int)(uVar3 >> 0x20);
      uStack_b4 = uVar2;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_80,uVar3 & 0xffffffff);
      }
      puVar4 = local_80;
      if (local_50 != (undefined1 *)0x0) {
        puVar4 = local_50;
      }
      *(ulonglong *)(puVar4 + lVar6 * 0xc) = CONCAT44(uStack_b4,local_b8);
      *(uint *)(puVar4 + lVar6 * 0xc + 8) = local_b0;
      puVar4 = local_50;
      uVar3 = local_48;
    }
    *param_1 = local_98;
    *(undefined4 *)(param_1 + 4) = local_94;
    param_1[8] = local_90;
    *(undefined4 *)(param_1 + 0xc) = local_8c;
    *(undefined4 *)(param_1 + 0x10) = local_88;
    param_1[0x14] = local_84;
    *(undefined8 *)(param_1 + 0x48) = 0;
    local_48 = uVar3;
    if (puVar4 == (undefined1 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(param_1 + 0x18,local_80,0x30);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FMemory::Free();
      puVar4 = local_50;
    }
    *(undefined1 **)(param_1 + 0x48) = puVar4;
    *(int *)(param_1 + 0x50) = (int)local_48;
    *(int *)(param_1 + 0x54) = local_48._4_4_;
    param_1[0x58] = 1;
  }
  return param_1;
}



// FUNCTION 141f4c6b0 FUN_141f4c6b0 body=1677 status=ok
// SIG undefined FUN_141f4c6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f4c6b0(longlong param_1,int param_2,undefined8 param_3,char *param_4,longlong param_5,
                  longlong param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  undefined1 uVar19;
  uint uVar20;
  longlong *plVar21;
  undefined1 uVar22;
  ulonglong uVar23;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  char local_1d8;
  char local_1d7;
  char local_1d6;
  ulonglong local_1d0;
  int local_1c8;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  uint local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined1 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_178;
  int iStack_170;
  undefined4 uStack_16c;
  char *local_168;
  undefined8 local_160;
  float fStack_158;
  uint uStack_154;
  uint *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  byte local_120;
  uint local_118;
  undefined4 uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  int iStack_b8;
  uint uStack_b4;
  uint *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_d8 = param_5;
  local_e0 = param_6;
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_168 = param_4;
  local_d0 = param_1;
  local_c8 = param_3;
  puVar16 = (uint *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
  local_160 = (longlong *)CONCAT44(local_160._4_4_,(int)local_160);
  local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
  if (((-1 < param_2) &&
      (puVar16 = (uint *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
      local_160 = (longlong *)CONCAT44(local_160._4_4_,(int)local_160),
      local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0),
      param_2 < *(int *)(param_1 + 0x20))) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 4),
     puVar16 = (uint *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0),
     local_160 = (longlong *)CONCAT44(local_160._4_4_,(int)local_160),
     local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0), iVar1 != -1)) {
    local_178 = *(undefined8 *)(param_1 + 0x28);
    iStack_170 = *(int *)(param_1 + 0x30);
    local_198 = CONCAT71(local_198._1_7_,2);
    local_198 = local_198 & 0xffffffff;
    local_190 = 2;
    local_18c = 0;
    if (*param_4 != '\x02') {
      uVar23 = *(ulonglong *)(param_4 + 4);
      local_188._4_4_ = (float)(uVar23 >> 0x20);
      if ((local_188._4_4_ != 0.0) || (uVar15 = uVar23, *param_4 == '\0')) {
        uVar15 = (ulonglong)((int)uVar23 + 1);
      }
      local_198 = CONCAT71(local_198._1_7_,1);
      local_198 = CONCAT44((int)uVar15,(undefined4)local_198);
      local_188 = uVar23;
    }
    if (param_4[0xc] != '\x02') {
      local_190 = param_4[0xc] != '\0';
      local_18c = (undefined4)*(undefined8 *)(param_4 + 0x10);
    }
    `anonymous_namespace'::GatherSweptSegments(&local_198,iVar1,&local_178,local_98);
    puStack_150 = local_88;
    uStack_1c0._0_4_ = SUB84(puStack_150,0);
    uStack_1c0._4_4_ = (undefined4)((ulonglong)puStack_150 >> 0x20);
    local_1c8 = 0;
    local_1b8 = 0xffffffff;
    uStack_1c4 = 1;
    iStack_1b4 = 0;
    iStack_1b0 = 0;
    if ((int)local_70 != 0) {
      puVar16 = local_88;
      if (local_78 != (uint *)0x0) {
        puVar16 = local_78;
      }
      uVar2 = *puVar16;
      iVar1 = local_1c8;
      while (uVar2 == 0) {
        iStack_1b0 = iStack_1b0 + 0x20;
        local_1c8 = iVar1 + 1;
        if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar1) {
          iStack_1b4 = (int)local_70;
          goto LAB_141f4c8ba;
        }
        uVar2 = puVar16[(longlong)iVar1 + 1];
        local_1b8 = 0xffffffff;
        iVar1 = local_1c8;
      }
      uStack_1c4 = -uVar2 & uVar2;
      iVar14 = 0x1f;
      if (uStack_1c4 != 0) {
        for (; uStack_1c4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (uStack_1c4 == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      iStack_1b4 = (iStack_1b0 - iVar14) + 0x1f;
      local_1c8 = iVar1;
      if ((int)local_70 < iStack_1b4) {
        iStack_1b4 = (int)local_70;
      }
    }
LAB_141f4c8ba:
    uStack_148 = CONCAT44(iStack_1b4,0xffffffff);
    uStack_140 = CONCAT44(uStack_1ac,iStack_1b0);
    local_1b8 = -1 << ((byte)local_70 & 0x1f);
    local_160 = local_98;
    fStack_158 = (float)local_1c8;
    uStack_154 = uStack_1c4;
    iStack_1b4 = (int)local_70;
    local_198 = local_70 & 0xffffffff;
    iStack_b8 = local_1c8;
    uStack_b4 = uStack_1c4;
    local_b0 = puStack_150;
    uStack_a8 = uStack_148;
    local_a0 = uStack_140;
    puVar16 = puStack_150;
    local_c0 = local_160;
    while( true ) {
      uStack_1c0._4_4_ = (undefined4)((ulonglong)puVar16 >> 0x20);
      if (((uStack_a8._4_4_ == (int)local_198) && (local_b0 == local_88)) && (local_c0 == local_98))
      break;
      uStack_1c4 = 0;
      local_1d6 = '\x02';
      piVar17 = (int *)((longlong)uStack_a8._4_4_ * 0x1c + *local_c0);
      local_1d7 = '\x02';
      local_1b8 = 0;
      cVar13 = (char)piVar17[1];
      iStack_170 = *piVar17;
      if (cVar13 == '\x02') {
        uVar23 = 0;
      }
      else {
        uStack_1c4 = piVar17[2];
        if (cVar13 == '\0') {
          uStack_114 = 0;
          local_118 = uStack_1c4;
        }
        else {
          uStack_10c = 0;
          local_110 = uStack_1c4;
        }
        uVar23 = (ulonglong)uStack_1c4;
        local_1d6 = cVar13 != '\0';
      }
      uVar2 = uStack_1c4;
      cVar7 = local_1d6;
      uStack_1c0._0_4_ = 0;
      cVar13 = (char)piVar17[3];
      if (cVar13 == '\x02') {
        uVar15 = 0;
      }
      else {
        local_1b8 = piVar17[4];
        if (cVar13 == '\0') {
          uStack_104 = 0;
          local_108 = local_1b8;
        }
        else {
          uStack_fc = 0;
          local_100 = local_1b8;
        }
        uVar15 = (ulonglong)local_1b8;
        local_1d7 = cVar13 != '\0';
      }
      uVar8 = local_1b8;
      cVar13 = local_1d7;
      iStack_1b4 = 0;
      plVar21 = (longlong *)((longlong)iStack_170 * 0x38 + *(longlong *)(local_d0 + 0xa0));
      if ((*(byte *)(plVar21 + 6) & 2) == 0) {
        plVar21 = (longlong *)*plVar21;
      }
      uVar5 = *(undefined4 *)(local_d8 + 0x18);
      uVar6 = *(undefined4 *)(local_d8 + 0x1c);
      local_178 = *(undefined8 *)(local_d8 + 0x18);
      *(undefined4 *)(local_d8 + 0x24) = uVar5;
      *(undefined4 *)(local_d8 + 0x28) = uVar6;
      *(int *)(local_d8 + 0x2c) = iStack_170;
      uStack_16c = CONCAT31(uStack_16c._1_3_,(char)plVar21[2]);
      *(undefined4 *)(local_e0 + 0x124) = uVar5;
      *(undefined4 *)(local_e0 + 0x128) = uVar6;
      *(int *)(local_e0 + 300) = iStack_170;
      *(undefined4 *)(local_e0 + 0x130) = uStack_16c;
      FMovieSceneContext::FMovieSceneContext(local_e0 + 0x134);
      local_1c8 = CONCAT31(local_1c8._1_3_,cVar7);
      uStack_1c0._4_4_ = CONCAT31(uStack_1c0._5_3_,cVar13);
      uStack_1c4 = (uint)uVar23;
      uStack_1c0._0_4_ = 0;
      uVar3 = *(ulonglong *)(local_168 + 4);
      uVar4 = *(ulonglong *)(local_168 + 0x10);
      local_138 = *(undefined8 *)(local_168 + 0x28);
      local_1d8 = local_168[0xc];
      uStack_148 = *(undefined8 *)(local_168 + 0x18);
      uStack_140 = *(undefined8 *)(local_168 + 0x20);
      local_130 = *(undefined4 *)(local_168 + 0x30);
      local_12c = *(undefined4 *)(local_168 + 0x34);
      local_128 = *(undefined4 *)(local_168 + 0x38);
      local_124 = *(undefined4 *)(local_168 + 0x3c);
      local_1b8 = (uint)uVar15;
      iStack_1b4 = 0;
      local_160._4_4_ = (uint)uVar3;
      uVar10 = local_160._4_4_;
      fStack_158 = (float)(uVar3 >> 0x20);
      fVar11 = fStack_158;
      local_120 = local_120 ^ (local_168[0x40] ^ local_120) & 0x3f;
      puStack_150 = (uint *)uVar4;
      local_160._0_1_ = *local_168;
      uStack_154._0_1_ = local_1d8;
      cVar13 = TRange<FFrameTime>::IsEmpty(&local_1c8);
      uVar12 = local_1a8;
      if (cVar13 == '\0') {
        cVar13 = *local_168;
        local_1a8._4_4_ = (float)(uVar4 >> 0x20);
        fVar9 = local_1a8._4_4_;
        if ((cVar13 != '\x02') && (local_1d8 != '\x02')) {
          uVar20 = (uint)uVar4;
          local_1d0 = uVar3;
          uVar12 = uVar4;
          if ((((int)uVar20 < (int)uVar10) || ((uVar10 == uVar20 && (local_1a8._4_4_ < fVar11)))) ||
             ((local_1a8 = uVar3, local_1d0 = uVar4, uVar12 = local_1a8, uVar10 == uVar20 &&
              ((fVar11 == fVar9 && ((cVar13 == '\0' || (local_1d8 == '\0')))))))) {
            local_1a8 = uVar12;
            uVar19 = 0;
            local_188 = 0;
            puVar16 = (uint *)0x0;
            local_e8 = 0;
            uVar22 = 0;
            puStack_150 = (uint *)0x0;
            goto LAB_141f4cc81;
          }
        }
        local_1a8 = uVar12;
        if (local_1d7 == '\x02') {
LAB_141f4cba5:
          puVar18 = &uStack_154;
        }
        else {
          if (local_1d8 != '\x02') {
            local_1a8 = uVar15;
            local_1d0 = uVar4;
            if (((int)(uint)puStack_150 <= (int)uVar8) &&
               ((uVar8 != (uint)puStack_150 || (fVar9 <= 0.0)))) {
              local_1a8 = uVar4;
              local_1d0 = uVar15;
              if (((int)(uint)puStack_150 < (int)uVar8) ||
                 (((uint)puStack_150 == uVar8 && (fVar9 < 0.0)))) goto LAB_141f4cba5;
              puVar18 = (uint *)((longlong)&uStack_1c0 + 4);
              if (local_1d7 != '\0') {
                puVar18 = &uStack_154;
              }
              goto LAB_141f4cc04;
            }
          }
          puVar18 = (uint *)((longlong)&uStack_1c0 + 4);
        }
LAB_141f4cc04:
        if (local_1d6 == '\x02') {
LAB_141f4cc0e:
          piVar17 = (int *)&local_160;
        }
        else {
          if (cVar13 != '\x02') {
            local_1a8 = uVar23;
            local_1d0 = uVar3;
            if (((int)uVar2 <= (int)local_160._4_4_) &&
               ((uVar2 != local_160._4_4_ || (0.0 <= fVar11)))) {
              local_1a8 = uVar3;
              local_1d0 = uVar23;
              if (((int)uVar2 < (int)local_160._4_4_) ||
                 ((local_160._4_4_ == uVar2 && (0.0 < fVar11)))) goto LAB_141f4cc0e;
              piVar17 = &local_1c8;
              if (local_1d6 != '\0') {
                piVar17 = (int *)&local_160;
              }
              goto LAB_141f4cc6f;
            }
          }
          piVar17 = &local_1c8;
        }
LAB_141f4cc6f:
        uVar19 = (undefined1)*piVar17;
        uVar22 = (undefined1)*puVar18;
        puVar16 = *(uint **)(piVar17 + 1);
        puStack_150 = *(uint **)(puVar18 + 1);
      }
      else {
        puVar16 = (uint *)0x0;
        uVar19 = 0;
        local_f0 = 0;
        local_f8 = 0;
        uVar22 = 0;
        puStack_150 = puVar16;
      }
LAB_141f4cc81:
      local_160._4_4_ = (uint)puVar16;
      fStack_158 = (float)((ulonglong)puVar16 >> 0x20);
      local_160._0_4_ = CONCAT31(local_160._1_3_,uVar19);
      uStack_154 = CONCAT31(uStack_154._1_3_,uVar22);
      local_1e8 = local_e0;
      (**(code **)(*plVar21 + 0x38))(plVar21,local_c8,&local_160,local_d8);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)uStack_a8 & ~uStack_b4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b8);
      puVar16 = (uint *)CONCAT44(uStack_1c0._4_4_,(undefined4)uStack_1c0);
    }
  }
  local_50 = 0;
  uStack_1c0 = puVar16;
  if (local_58 != 0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_98);
  return;
}



// FUNCTION 141f4cd40 ExportTextItem body=2316 status=ok
// SIG undefined ExportTextItem(void)

undefined8
FMovieSceneFrameRange::ExportTextItem
          (char *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  void *pvVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  void *local_58;
  uint local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  
  if ((param_5 & 0x10000000) != 0) {
    return 0;
  }
  cVar2 = *param_1;
  pvVar8 = (void *)0x0;
  iVar7 = 0;
  uVar9 = 0;
  pvVar10 = (void *)0x0;
  local_58 = (void *)0x0;
  local_4c = 0;
  pvVar11 = pvVar8;
  if (cVar2 == '\x02') {
    local_48 = (void *)0x0;
    local_40 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pvVar1 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,5,&DAT_144f19074,5,0x3f);
    iVar7 = 0;
    if (((int)local_40 != 0) &&
       (iVar5 = (int)local_40 + -1, pvVar11 = pvVar10, iVar7 = 0, iVar5 != 0)) {
      local_50 = (int)local_40;
      pvVar11 = pvVar8;
      iVar7 = 0;
      if (0 < (int)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        pvVar11 = local_58;
        iVar7 = local_4c;
      }
      uVar9 = local_50;
      sVar3 = (longlong)iVar5 * 2;
      ::_guard_xfg_dispatch_icall_nop(pvVar11,pvVar1,sVar3);
      *(undefined2 *)(sVar3 + (longlong)pvVar11) = 0;
    }
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    iVar5 = uVar9 + -1;
    if ((int)uVar9 < 1) {
      iVar5 = 0;
    }
    local_50 = ((int)uVar9 < 1) + 1 + uVar9;
    if (iVar7 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
      pvVar11 = local_58;
      iVar7 = local_4c;
    }
    *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x3a;
    iVar5 = local_50 + -1;
    if ((int)local_50 < 1) {
      iVar5 = 0;
    }
    local_50 = ((int)local_50 < 1) + 1 + local_50;
    if (iVar7 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      pvVar11 = local_58;
      iVar7 = local_4c;
    }
    pvVar8 = (void *)(ulonglong)local_50;
    *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x30;
LAB_141f4d172:
    iVar5 = (int)pvVar8 + -1;
    if ((int)pvVar8 < 1) goto LAB_141f4d17b;
  }
  else {
    if (cVar2 == '\x01') {
      local_48 = (void *)0x0;
      local_40 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pvVar1 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,10,"Inclusive",10,0x3f);
      iVar7 = 0;
      if (((int)local_40 != 0) &&
         (iVar5 = (int)local_40 + -1, pvVar11 = pvVar10, iVar7 = 0, iVar5 != 0)) {
        local_50 = (int)local_40;
        pvVar11 = pvVar8;
        iVar7 = 0;
        if (0 < (int)local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          pvVar11 = local_58;
          iVar7 = local_4c;
        }
        uVar9 = local_50;
        sVar3 = (longlong)iVar5 * 2;
        ::_guard_xfg_dispatch_icall_nop(pvVar11,pvVar1,sVar3);
        *(undefined2 *)(sVar3 + (longlong)pvVar11) = 0;
      }
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar4 = 0;
      iVar5 = uVar9 + -1;
      if ((int)uVar9 < 1) {
        iVar5 = 0;
      }
      local_50 = ((int)uVar9 < 1) + 1 + uVar9;
      if (iVar7 < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        pvVar11 = local_58;
        iVar7 = local_4c;
      }
      uVar9 = local_50;
      pvVar8 = (void *)(ulonglong)local_50;
      local_48 = (void *)0x0;
      local_40 = 0;
      *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x3a;
      FString::AppendInt(&local_48,*(undefined4 *)(param_1 + 4));
      if ((int)local_40 != 0) {
        iVar4 = (int)local_40 + -1;
      }
      if (iVar4 != 0) {
        local_50 = uVar9 + (uVar9 == 0) + iVar4;
LAB_141f4d111:
        pvVar10 = local_48;
        if (iVar7 < (int)local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
          pvVar11 = local_58;
          iVar7 = local_4c;
        }
        pvVar8 = (void *)(ulonglong)local_50;
        pvVar1 = (void *)((longlong)pvVar11 + ((longlong)(int)uVar9 - (ulonglong)(uVar9 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar10,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
      }
LAB_141f4d165:
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      goto LAB_141f4d172;
    }
    if (cVar2 == '\0') {
      local_48 = (void *)0x0;
      local_40 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pvVar1 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,10,"Exclusive",10,0x3f);
      iVar7 = 0;
      if (((int)local_40 != 0) &&
         (iVar5 = (int)local_40 + -1, pvVar11 = pvVar10, iVar7 = 0, iVar5 != 0)) {
        local_50 = (int)local_40;
        pvVar11 = pvVar8;
        iVar7 = 0;
        if (0 < (int)local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          pvVar11 = local_58;
          iVar7 = local_4c;
        }
        uVar9 = local_50;
        sVar3 = (longlong)iVar5 * 2;
        ::_guard_xfg_dispatch_icall_nop(pvVar11,pvVar1,sVar3);
        *(undefined2 *)(sVar3 + (longlong)pvVar11) = 0;
      }
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      iVar4 = 0;
      iVar5 = uVar9 + -1;
      if ((int)uVar9 < 1) {
        iVar5 = 0;
      }
      local_50 = ((int)uVar9 < 1) + 1 + uVar9;
      if (iVar7 < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        pvVar11 = local_58;
        iVar7 = local_4c;
      }
      uVar9 = local_50;
      pvVar8 = (void *)(ulonglong)local_50;
      local_48 = (void *)0x0;
      local_40 = 0;
      *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x3a;
      FString::AppendInt(&local_48,*(undefined4 *)(param_1 + 4));
      if ((int)local_40 != 0) {
        iVar4 = (int)local_40 + -1;
      }
      if (iVar4 != 0) {
        local_50 = iVar4 + (uint)(uVar9 == 0) + uVar9;
        goto LAB_141f4d111;
      }
      goto LAB_141f4d165;
    }
LAB_141f4d17b:
    iVar5 = 0;
  }
  local_50 = ((int)pvVar8 < 1) + 1 + (int)pvVar8;
  if (iVar7 < (int)local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,pvVar8);
    pvVar11 = local_58;
    iVar7 = local_4c;
  }
  uVar9 = local_50;
  *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x3a;
  cVar2 = param_1[8];
  if (cVar2 == '\x02') {
    local_48 = (void *)0x0;
    local_40 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pvVar8 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,5,&DAT_144f19478,5,0x3f);
    uVar6 = uVar9;
    if (((int)local_40 != 0) && (iVar5 = (int)local_40 + -1, iVar5 != 0)) {
      local_50 = (uint)(uVar9 == 0) + iVar5 + uVar9;
      if (iVar7 < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
        pvVar11 = local_58;
        iVar7 = local_4c;
      }
      uVar6 = local_50;
      pvVar10 = (void *)((longlong)pvVar11 + ((longlong)(int)uVar9 - (ulonglong)(uVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar10,pvVar8,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar10) = 0;
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    iVar5 = uVar6 + -1;
    if ((int)uVar6 < 1) {
      iVar5 = 0;
    }
    local_50 = ((int)uVar6 < 1) + 1 + uVar6;
    if (iVar7 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar6);
      pvVar11 = local_58;
      iVar7 = local_4c;
    }
    *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x3a;
    iVar5 = local_50 + -1;
    if ((int)local_50 < 1) {
      iVar5 = 0;
    }
    local_50 = ((int)local_50 < 1) + 1 + local_50;
    if (iVar7 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      pvVar11 = local_58;
    }
    *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x30;
    uVar9 = local_50;
    goto LAB_141f4d5b3;
  }
  if (cVar2 == '\x01') {
    local_48 = (void *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pvVar8 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,10,"Inclusive",10,0x3f);
    uVar6 = uVar9;
    if (((int)local_40 != 0) && (iVar5 = (int)local_40 + -1, iVar5 != 0)) {
      local_50 = (uint)(uVar9 == 0) + iVar5 + uVar9;
      if (iVar7 < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
        pvVar11 = local_58;
        iVar7 = local_4c;
      }
      uVar6 = local_50;
      pvVar10 = (void *)((longlong)pvVar11 + ((longlong)(int)uVar9 - (ulonglong)(uVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar10,pvVar8,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar10) = 0;
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    iVar5 = uVar6 + -1;
    if ((int)uVar6 < 1) {
      iVar5 = 0;
    }
    local_50 = ((int)uVar6 < 1) + 1 + uVar6;
    if (iVar7 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      pvVar11 = local_58;
      iVar7 = local_4c;
    }
    uVar6 = local_50;
    local_48 = (void *)0x0;
    local_40 = 0;
    *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x3a;
    FString::AppendInt(&local_48,*(undefined4 *)(param_1 + 0xc));
    if ((int)local_40 == 0) {
LAB_141f4d53f:
      iVar5 = 0;
    }
    else {
      iVar5 = (int)local_40 + -1;
    }
  }
  else {
    if (cVar2 != '\0') goto LAB_141f4d5b3;
    local_48 = (void *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pvVar8 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,10,"Exclusive",10,0x3f);
    uVar6 = uVar9;
    if (((int)local_40 != 0) && (iVar5 = (int)local_40 + -1, iVar5 != 0)) {
      local_50 = (uint)(uVar9 == 0) + iVar5 + uVar9;
      if (iVar7 < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
        pvVar11 = local_58;
        iVar7 = local_4c;
      }
      uVar6 = local_50;
      pvVar10 = (void *)((longlong)pvVar11 + ((longlong)(int)uVar9 - (ulonglong)(uVar9 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar10,pvVar8,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar10) = 0;
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    iVar5 = uVar6 + -1;
    if ((int)uVar6 < 1) {
      iVar5 = 0;
    }
    local_50 = ((int)uVar6 < 1) + 1 + uVar6;
    if (iVar7 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      pvVar11 = local_58;
      iVar7 = local_4c;
    }
    uVar6 = local_50;
    local_48 = (void *)0x0;
    local_40 = 0;
    *(undefined4 *)((longlong)pvVar11 + (longlong)iVar5 * 2) = 0x3a;
    FString::AppendInt(&local_48,*(undefined4 *)(param_1 + 0xc));
    if ((int)local_40 == 0) goto LAB_141f4d53f;
    iVar5 = (int)local_40 + -1;
  }
  pvVar8 = local_48;
  uVar9 = uVar6;
  if (iVar5 != 0) {
    local_50 = iVar5 + (uint)(uVar6 == 0) + uVar6;
    if (iVar7 < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar6);
      pvVar11 = local_58;
    }
    uVar9 = local_50;
    pvVar10 = (void *)((longlong)pvVar11 + ((longlong)(int)uVar6 - (ulonglong)(uVar6 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar10,pvVar8,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar10) = 0;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
LAB_141f4d5b3:
  if ((uVar9 != 0) && (iVar7 = uVar9 + -1, iVar7 != 0)) {
    iVar5 = (int)param_2[1];
    iVar4 = (uint)(iVar5 == 0) + iVar7 + iVar5;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    pvVar8 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar8,pvVar11,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar8) = 0;
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return 1;
}



// FUNCTION 141f4d650 FilterOutUnderlappingSections body=294 status=ok
// SIG undefined FilterOutUnderlappingSections(void)

void MovieSceneSegmentCompiler::FilterOutUnderlappingSections(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar4 = (int)param_1[9];
  if (iVar4 != 0) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1;
    }
    plVar7 = plVar3 + (longlong)iVar4 * 2;
    iVar1 = -0x80000000;
    for (; plVar3 != plVar7; plVar3 = plVar3 + 2) {
      iVar5 = iVar1;
      if ((((char)((ushort)*(undefined2 *)(*plVar3 + 0xc9) >> 8) == '\0') &&
          ((*(byte *)((longlong)plVar3 + 0xc) & 3) == 0)) &&
         (iVar5 = *(int *)(*plVar3 + 0xac), iVar5 <= iVar1)) {
        iVar5 = iVar1;
      }
      iVar1 = iVar5;
    }
    iVar5 = iVar4 + -1;
    if (-1 < iVar5) {
      lVar6 = (longlong)iVar5 << 4;
      lVar8 = (longlong)iVar4 << 4;
      lVar9 = lVar6;
      do {
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = param_1;
        }
        if (((*(int *)(*(longlong *)(lVar6 + (longlong)plVar3) + 0xac) != iVar1) &&
            ((char)((ushort)*(undefined2 *)(*(longlong *)(lVar6 + (longlong)plVar3) + 0xc9) >> 8) ==
             '\0')) && ((*(byte *)(lVar6 + 0xc + (longlong)plVar3) & 3) == 0)) {
          iVar4 = (int)param_1[9];
          iVar2 = (iVar4 - iVar5) + -1;
          if (iVar2 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)plVar3 + lVar9),(void *)(lVar8 + (longlong)plVar3),
                       (longlong)iVar2 << 4);
            iVar4 = (int)param_1[9];
          }
          *(int *)(param_1 + 9) = iVar4 + -1;
        }
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -0x10;
        lVar6 = lVar6 + -0x10;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return;
}



// FUNCTION 141f4d780 Find body=136 status=ok
// SIG undefined Find(void)

longlong TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::Find(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    piVar2 = param_1;
  }
  if (piVar2 != piVar2 + (longlong)param_1[0x12] * 4) {
    piVar1 = piVar2;
    do {
      if (((piVar1[1] == param_2[1] && piVar1[2] == param_2[2]) && piVar1[3] == param_2[3]) &&
          *piVar1 == *param_2) {
        return (longlong)piVar1 - (longlong)piVar2 >> 4;
      }
      piVar1 = piVar1 + 4;
    } while (piVar1 != piVar2 + (longlong)param_1[0x12] * 4);
  }
  return 0xffffffff;
}



// FUNCTION 141f4d810 FindBoundObjects body=225 status=ok
// SIG undefined FindBoundObjects(void)

longlong *
FMovieSceneObjectCache::FindBoundObjects
          (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int local_res8 [2];
  
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_res8);
  pcVar3 = (char *)0x0;
  pcVar1 = pcVar3;
  if (local_res8[0] != -1) {
    pcVar1 = (char *)((longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x10));
  }
  pcVar2 = pcVar1 + 0x10;
  if (pcVar1 == (char *)0x0) {
    pcVar2 = pcVar3;
  }
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    FUN_141f67660(param_1,param_3,param_4);
    TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x10,local_res8,param_3);
    pcVar1 = pcVar3;
    if (local_res8[0] != -1) {
      pcVar1 = (char *)((longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x10));
    }
    pcVar2 = pcVar1 + 0x10;
    if (pcVar1 == (char *)0x0) {
      pcVar2 = pcVar3;
    }
    if (pcVar2 == (char *)0x0) {
      *(undefined4 *)(param_2 + 1) = 0;
      goto LAB_141f4d8d2;
    }
  }
  pcVar3 = *(char **)(pcVar2 + 0x10);
  if (*(char **)(pcVar2 + 0x10) == (char *)0x0) {
    pcVar3 = pcVar2 + 8;
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pcVar2 + 0x18);
LAB_141f4d8d2:
  *param_2 = (longlong)pcVar3;
  return param_2;
}



// FUNCTION 141f4d900 FindBoundObjects body=220 status=ok
// SIG undefined FindBoundObjects(void)

undefined8 *
IMovieScenePlayer::FindBoundObjects
          (longlong param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar2 = param_1 + 0xe0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)*param_4) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0xa8));
        if (*piVar4 == *param_4) {
          if (iVar1 != -1) goto LAB_141f4d997;
          break;
        }
        iVar1 = piVar4[0x2e];
      } while (iVar1 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_141f4d997:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    FMovieSceneObjectCache::FindBoundObjects(piVar3,param_2,param_3,param_1);
  }
  return param_2;
}



// FUNCTION 141f4d9e0 FindEntry body=221 status=ok
// SIG undefined FindEntry(void)

longlong FMovieSceneChannelProxy::FindEntry(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 local_res10;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x30);
  lVar1 = param_1 + 0x10;
  lVar4 = 0;
  iVar2 = 0;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar5 = lVar1;
    }
    do {
      uVar7 = uVar3 >> 1;
      iVar2 = FName::Compare(lVar5 + (uVar7 + lVar4) * 0x18,&local_res10);
      if (iVar2 < 0) {
        lVar4 = (ulonglong)((uint)uVar3 & 1) + uVar7 + lVar4;
      }
      uVar3 = uVar7;
    } while (uVar7 != 0);
    iVar2 = *(int *)(param_1 + 0x30);
  }
  iVar6 = (int)lVar4;
  if ((ulonglong)(longlong)iVar6 < (ulonglong)(longlong)iVar2) {
    lVar5 = (longlong)iVar6 * 0x18;
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar4 = lVar1;
    }
    iVar2 = FName::Compare(&local_res10,lVar4 + lVar5);
    if ((-1 < iVar2) && (iVar6 != -1)) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar4 = lVar1;
      }
      return lVar5 + lVar4;
    }
  }
  return 0;
}



// FUNCTION 141f4dac0 FindFirstSegment body=373 status=ok
// SIG undefined FindFirstSegment(void)

undefined4 *
FMovieSceneEvaluationTrack::FindFirstSegment(longlong param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  ulonglong uVar13;
  int local_resc;
  int local_res1c [3];
  
  iVar2 = *(int *)(param_1 + 0x30);
  uVar13 = (ulonglong)iVar2;
  lVar9 = 0;
  lVar4 = *(longlong *)(param_1 + 0x28);
  cVar6 = *param_3;
  iVar3 = *(int *)(param_3 + 4);
  if (iVar2 != 0) {
    do {
      uVar10 = uVar13 >> 1;
      local_res1c[0] = iVar3;
      pcVar8 = (char *)((uVar10 + lVar9) * 0x58 + lVar4);
      cVar1 = *pcVar8;
      local_resc = *(int *)(pcVar8 + 4);
      cVar7 = cVar1;
      if (cVar1 == '\x02') {
        piVar11 = &local_resc;
      }
      else if (cVar6 == '\x02') {
LAB_141f4db69:
        piVar11 = local_res1c;
        cVar7 = cVar6;
      }
      else if (local_resc < iVar3) {
        piVar11 = &local_resc;
      }
      else {
        if ((iVar3 < local_resc) || (cVar1 != '\x01')) goto LAB_141f4db69;
        piVar11 = &local_resc;
      }
      if (((cVar7 == cVar1) && ((cVar7 == '\x02' || (*piVar11 == local_resc)))) &&
         ((cVar1 != cVar6 || ((cVar1 != '\x02' && (local_resc != iVar3)))))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = (ulonglong)((uint)uVar13 & 1) + uVar10 + lVar9;
      }
      uVar13 = uVar10;
    } while (uVar10 != 0);
  }
  iVar12 = (int)lVar9;
  if ((-1 < iVar12) && (iVar12 < iVar2)) {
    lVar9 = (longlong)iVar12 * 0x58;
    if ((*(char *)(lVar9 + lVar4) == cVar6) &&
       ((*(char *)(lVar9 + lVar4) == '\x02' || (*(int *)(lVar9 + 4 + lVar4) == iVar3)))) {
      *param_2 = *(undefined4 *)(lVar9 + 0x10 + lVar4);
      return param_2;
    }
  }
  if ((0 < iVar12) && (iVar12 + -1 < iVar2)) {
    cVar6 = TRange<FFrameNumber>::Overlaps(lVar4 + -0x58 + (longlong)iVar12 * 0x58,param_3);
    if (cVar6 != '\0') {
      *param_2 = *(undefined4 *)((longlong)iVar12 * 0x58 + -0x48 + lVar4);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 141f4dc40 FindId body=192 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

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
                    ((longlong)(int)(*param_3 ^ param_3[1] ^ param_3[2] ^ param_3[3]) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x38;
        if (((*(uint *)(lVar4 + 4 + lVar1) == param_3[1] &&
             *(uint *)(lVar4 + 8 + lVar1) == param_3[2]) &&
            *(uint *)(lVar4 + 0xc + lVar1) == param_3[3]) && *param_3 == *(uint *)(lVar4 + lVar1)) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x30 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f4dd00 FindId body=192 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

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
                    ((longlong)(int)(*param_3 ^ param_3[1] ^ param_3[2] ^ param_3[3]) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x68;
        if (((*(uint *)(lVar4 + 4 + lVar1) == param_3[1] &&
             *(uint *)(lVar4 + 8 + lVar1) == param_3[2]) &&
            *(uint *)(lVar4 + 0xc + lVar1) == param_3[3]) && *param_3 == *(uint *)(lVar4 + lVar1)) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x60 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f4ddc0 FindId body=181 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

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
                    ((longlong)(int)(~param_3[1] ^ *param_3 ^ param_3[2]) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if (((*(uint *)(lVar1 + 4 + lVar4 * 0x48) == param_3[1]) &&
            (*(uint *)(lVar1 + lVar4 * 0x48) == *param_3)) &&
           (*(uint *)(lVar1 + 8 + lVar4 * 0x48) == param_3[2])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x40 + lVar4 * 0x48);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f4de80 FindId body=214 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x38;
        if ((((*(int *)(lVar4 + 4 + lVar1) == param_3[1] &&
              *(int *)(lVar4 + 8 + lVar1) == param_3[2]) &&
             *(int *)(lVar4 + 0xc + lVar1) == param_3[3]) && *param_3 == *(int *)(lVar4 + lVar1)) &&
           (*(int *)(lVar4 + 0x10 + lVar1) == param_3[4])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x30 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f4df60 FindId body=305 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_3[1];
    uVar8 = *param_3 - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        if ((*(int *)(lVar2 + lVar6 * 0x30) == *param_3) &&
           (*(uint *)(lVar2 + 4 + lVar6 * 0x30) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar2 + 0x28 + lVar6 * 0x30);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f4e0a0 FindKey body=138 status=ok
// SIG undefined FindKey(void)

longlong FMovieSceneChannelData::FindKey(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int local_res8 [2];
  undefined1 local_res20 [8];
  longlong local_28;
  int iStack_20;
  
  local_res8[0] = 0;
  lVar1 = *(longlong *)*param_1;
  iVar2 = (int)((longlong *)*param_1)[1];
  local_28 = lVar1;
  iStack_20 = iVar2;
  MovieScene::FindRange(&local_28,param_2,param_3,1,local_res8,local_res20);
  if ((-1 < local_res8[0]) && (local_res8[0] < iVar2)) {
    iVar2 = *(int *)(lVar1 + (longlong)local_res8[0] * 4) - (int)param_2;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 <= param_3) {
      return (longlong)local_res8[0];
    }
  }
  return 0xffffffff;
}



// FUNCTION 141f4e130 FindMasterTrack body=168 status=ok
// SIG undefined FindMasterTrack(void)

longlong UMovieScene::FindMasterTrack(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x80);
  plVar1 = plVar7 + *(int *)(param_1 + 0x88);
  if (plVar7 == plVar1) {
    return 0;
  }
  do {
    lVar2 = *plVar7;
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (param_2 != 0) {
      lVar4 = UMovieSceneTrack::GetPrivateStaticClass();
      lVar5 = param_2;
      do {
        lVar6 = param_2;
        if (lVar5 == lVar4) goto LAB_141f4e190;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar6 = 0;
LAB_141f4e190:
    if (lVar3 == lVar6) {
      return lVar2;
    }
    plVar7 = plVar7 + 1;
    if (plVar7 == plVar1) {
      return 0;
    }
  } while( true );
}



// FUNCTION 141f4e1e0 FindNextChild body=630 status=ok
// SIG undefined FindNextChild(void)

int * FMovieSceneEvaluationTreeRangeIterator::FindNextChild
                (longlong param_1,int *param_2,undefined8 param_3,char *param_4,char param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int local_resc;
  int local_res1c;
  longlong local_38;
  int iStack_30;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar13 = lVar5;
  if ((int)param_3 != -1) {
    lVar13 = ((longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + (longlong)(int)param_3 * 0xc) +
             (longlong)(int)((ulonglong)param_3 >> 0x20)) * 0x20 + *(longlong *)(lVar5 + 0x30);
  }
  iVar3 = *(int *)(lVar13 + 0x18);
  uVar12 = 0;
  if (iVar3 == -1) {
    local_38 = 0;
    iStack_30 = 0;
  }
  else {
    local_38 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar3 * 0xc) * 0x20 +
               *(longlong *)(lVar5 + 0x30);
    iStack_30 = *(int *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar3 * 0xc + 4);
  }
  if (iStack_30 != 0) {
    if (param_5 == '\0') {
      if (iStack_30 != 0) {
        cVar1 = *param_4;
        local_resc = *(int *)(param_4 + 4);
        uVar10 = (longlong)iStack_30;
        do {
          uVar9 = uVar10 >> 1;
          lVar5 = (uVar9 + uVar12) * 0x20;
          cVar2 = *(char *)(lVar5 + 8 + local_38);
          local_res1c = *(int *)(lVar5 + 0xc + local_38);
          if (cVar1 == '\x02') {
LAB_141f4e3d2:
            piVar8 = &local_res1c;
            cVar6 = cVar2;
          }
          else {
            cVar6 = cVar1;
            if (cVar2 == '\x02') {
              piVar8 = &local_resc;
            }
            else if (local_resc < local_res1c) {
              piVar8 = &local_resc;
            }
            else {
              if ((local_res1c < local_resc) || (cVar1 != '\0')) goto LAB_141f4e3d2;
              piVar8 = &local_resc;
              cVar6 = '\0';
            }
          }
          if (((cVar6 == cVar1) && ((cVar6 == '\x02' || (*piVar8 == local_resc)))) &&
             ((cVar1 != cVar2 || ((cVar1 != '\x02' && (local_resc != local_res1c)))))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (!bVar4) {
            uVar12 = uVar9 + uVar12 + (ulonglong)((uint)uVar10 & 1);
          }
          uVar10 = uVar9;
        } while (uVar9 != 0);
      }
      uVar12 = (ulonglong)((int)uVar12 - 1);
    }
    else if (iStack_30 != 0) {
      cVar1 = *param_4;
      local_res1c = *(int *)(param_4 + 4);
      uVar10 = (longlong)iStack_30;
      do {
        uVar9 = uVar10 >> 1;
        pcVar7 = (char *)((uVar9 + uVar12) * 0x20 + local_38);
        cVar2 = *pcVar7;
        local_resc = *(int *)(pcVar7 + 4);
        cVar6 = cVar2;
        if (cVar2 == '\x02') {
          piVar8 = &local_resc;
        }
        else if (cVar1 == '\x02') {
LAB_141f4e317:
          piVar8 = &local_res1c;
          cVar6 = cVar1;
        }
        else if (local_resc < local_res1c) {
          piVar8 = &local_resc;
        }
        else {
          if ((local_res1c < local_resc) || (cVar2 != '\x01')) goto LAB_141f4e317;
          piVar8 = &local_resc;
        }
        if (((cVar6 == cVar2) && ((cVar6 == '\x02' || (*piVar8 == local_resc)))) &&
           ((cVar2 != cVar1 || ((cVar2 != '\x02' && (local_resc != local_res1c)))))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          uVar12 = (ulonglong)((uint)uVar10 & 1) + uVar9 + uVar12;
        }
        uVar10 = uVar9;
      } while (uVar9 != 0);
    }
    iVar11 = (int)uVar12;
    if ((-1 < iVar11) && (iVar11 < iStack_30)) {
      *param_2 = iVar3;
      param_2[1] = iVar11;
      return param_2;
    }
  }
  param_2[0] = -1;
  param_2[1] = -1;
  return param_2;
}



// FUNCTION 141f4e460 FindOrAdd body=542 status=ok
// SIG undefined FindOrAdd(void)

undefined4 *
FTrackInstancePropertyBindings::FindOrAdd(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  local_res18 = 0xffffffff;
  if (param_3 != 0) {
    FWeakObjectPtr::operator=(local_res8,param_3);
    local_res18 = local_res8[0];
  }
  TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_res18);
  puVar3 = (undefined4 *)0x0;
  if ((int)local_res8[0] != -1) {
    puVar3 = (undefined4 *)((longlong)(int)local_res8[0] * 0x30 + *param_1);
  }
  puVar5 = puVar3 + 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     ((cVar1 = FWeakObjectPtr::IsValid(puVar5 + 4), cVar1 == '\0' &&
      (cVar1 = FWeakObjectPtr::IsValid(puVar5), cVar1 == '\0')))) {
    FWeakObjectPtr::operator=(&local_60,0);
    local_58 = 0;
    FWeakObjectPtr::operator=(local_50,0);
    FWeakObjectPtr::operator=(local_48,0);
    uVar2 = UObject::FindFunction(param_3,param_1[0xc]);
    FWeakObjectPtr::operator=(local_50,uVar2);
    puVar3 = (undefined4 *)FindProperty(&local_70,param_3,param_1 + 10);
    local_res8[0] = 0;
    local_60 = *puVar3;
    local_5c = puVar3[1];
    local_58 = *(undefined8 *)(puVar3 + 2);
    if (param_1[0xd] != 0) {
      uVar2 = UObject::FindFunction(param_3,param_1[0xd]);
      FWeakObjectPtr::operator=(local_48,uVar2);
    }
    local_res20 = 0xffffffff;
    if (param_3 != 0) {
      FWeakObjectPtr::operator=(&local_78,param_3);
      local_res20 = local_78;
    }
    local_70 = &local_res20;
    local_68 = &local_60;
    FUN_141f31e20(param_1,local_res8,&local_70,0);
    TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res18);
    if (((int)local_res8[0] == -1) ||
       (lVar4 = (longlong)(int)local_res8[0] * 0x30 + *param_1, lVar4 == 0)) {
      FWeakObjectPtr::operator=(param_2,0);
      *(undefined8 *)(param_2 + 2) = 0;
      FWeakObjectPtr::operator=(param_2 + 4,0);
      FWeakObjectPtr::operator=(param_2 + 6,0);
    }
    else {
      *param_2 = *(undefined4 *)(lVar4 + 8);
      param_2[1] = *(undefined4 *)(lVar4 + 0xc);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar4 + 0x10);
      param_2[4] = *(undefined4 *)(lVar4 + 0x18);
      param_2[5] = *(undefined4 *)(lVar4 + 0x1c);
      param_2[6] = *(undefined4 *)(lVar4 + 0x20);
      param_2[7] = *(undefined4 *)(lVar4 + 0x24);
    }
  }
  else {
    *param_2 = *puVar5;
    param_2[1] = puVar5[1];
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar5 + 2);
    param_2[4] = puVar5[4];
    param_2[5] = puVar5[5];
    param_2[6] = puVar5[6];
    param_2[7] = puVar5[7];
  }
  return param_2;
}



// FUNCTION 141f4e680 FindPossessable body=107 status=ok
// SIG undefined FindPossessable(void)

longlong UMovieScene::FindPossessable(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x68) * 0x48;
  if (lVar2 != lVar1) {
    piVar3 = (int *)(lVar2 + 0x18);
    do {
      if (((piVar3[-2] == *param_2 && piVar3[-1] == param_2[1]) && piVar3[1] == param_2[3]) &&
          *piVar3 == param_2[2]) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x48;
      piVar3 = piVar3 + 0x12;
    } while (lVar2 != lVar1);
  }
  return 0;
}


