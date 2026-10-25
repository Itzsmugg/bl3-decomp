// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14375cc60 FUN_14375cc60 body=244 status=ok
// SIG undefined FUN_14375cc60(void)

undefined8 * FUN_14375cc60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong local_28;
  
  puVar6 = (undefined8 *)0x0;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  puVar7 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    lVar1 = param_1[1];
    local_28 = puVar6[2];
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    hkReflect::Detail::Impl::Impl(puVar5);
    *puVar5 = _anon_6595C8EB::ChildImpl<hkReflect::StringType,_anon_6595C8EB::ArrayParentRef>::
              vftable;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar5[4] = local_28;
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar5[5] = lVar1;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar6 = puVar5;
    puVar7 = (undefined8 *)0x1;
  }
  if ((puVar7 != (undefined8 *)0x0) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return puVar6;
}



// FUNCTION 14375cd60 FUN_14375cd60 body=267 status=ok
// SIG undefined FUN_14375cd60(void)

undefined8 * FUN_14375cd60(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  local_res18 = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437140a0(&local_res18,param_2);
    uVar1 = *param_1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(&local_10,CONCAT44(uStackX_1c,local_res18));
    hkReflect::Detail::Impl::Impl(puVar3);
    *puVar3 = _anon_6595C8EB::ChildImpl<hkReflect::ArrayType,_anon_6595C8EB::RecordParentRef>::
              vftable;
    puVar3[2] = uVar1 | 1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(puVar3 + 3,local_10);
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = _anon_6595C8EB::ChildArrayImpl<_anon_6595C8EB::RecordParentRef>::vftable;
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 14375ce70 FUN_14375ce70 body=253 status=ok
// SIG undefined FUN_14375ce70(void)

undefined8 * FUN_14375ce70(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  local_res18 = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437140a0(&local_res18,param_2);
    uVar1 = *param_1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(&local_10,CONCAT44(uStackX_1c,local_res18));
    hkReflect::Detail::Impl::Impl(puVar3);
    *puVar3 = _anon_6595C8EB::ChildImpl<hkReflect::BoolType,_anon_6595C8EB::RecordParentRef>::
              vftable;
    puVar3[2] = uVar1 | 1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(puVar3 + 3,local_10);
    *(undefined4 *)(puVar3 + 1) = 0;
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 14375cf70 FUN_14375cf70 body=253 status=ok
// SIG undefined FUN_14375cf70(void)

undefined8 * FUN_14375cf70(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  local_res18 = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437140a0(&local_res18,param_2);
    uVar1 = *param_1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(&local_10,CONCAT44(uStackX_1c,local_res18));
    hkReflect::Detail::Impl::Impl(puVar3);
    *puVar3 = _anon_6595C8EB::ChildImpl<hkReflect::FloatType,_anon_6595C8EB::RecordParentRef>::
              vftable;
    puVar3[2] = uVar1 | 1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(puVar3 + 3,local_10);
    *(undefined4 *)(puVar3 + 1) = 0;
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 14375d070 FUN_14375d070 body=253 status=ok
// SIG undefined FUN_14375d070(void)

undefined8 * FUN_14375d070(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  local_res18 = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437140a0(&local_res18,param_2);
    uVar1 = *param_1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(&local_10,CONCAT44(uStackX_1c,local_res18));
    hkReflect::Detail::Impl::Impl(puVar3);
    *puVar3 = _anon_6595C8EB::ChildImpl<hkReflect::IntType,_anon_6595C8EB::RecordParentRef>::vftable
    ;
    puVar3[2] = uVar1 | 1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(puVar3 + 3,local_10);
    *(undefined4 *)(puVar3 + 1) = 0;
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 14375d170 FUN_14375d170 body=253 status=ok
// SIG undefined FUN_14375d170(void)

undefined8 * FUN_14375d170(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  local_res18 = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437140a0(&local_res18,param_2);
    uVar1 = *param_1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(&local_10,CONCAT44(uStackX_1c,local_res18));
    hkReflect::Detail::Impl::Impl(puVar3);
    *puVar3 = _anon_6595C8EB::ChildImpl<hkReflect::PointerType,_anon_6595C8EB::RecordParentRef>::
              vftable;
    puVar3[2] = uVar1 | 1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(puVar3 + 3,local_10);
    *(undefined4 *)(puVar3 + 1) = 0;
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 14375d270 FUN_14375d270 body=267 status=ok
// SIG undefined FUN_14375d270(void)

undefined8 * FUN_14375d270(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  local_res18 = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437140a0(&local_res18,param_2);
    uVar1 = *param_1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(&local_10,CONCAT44(uStackX_1c,local_res18));
    hkReflect::Detail::Impl::Impl(puVar3);
    *puVar3 = _anon_6595C8EB::ChildImpl<hkReflect::RecordType,_anon_6595C8EB::RecordParentRef>::
              vftable;
    puVar3[2] = uVar1 | 1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(puVar3 + 3,local_10);
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = _anon_6595C8EB::ChildRecordImpl<_anon_6595C8EB::RecordParentRef>::vftable;
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 14375d380 FUN_14375d380 body=253 status=ok
// SIG undefined FUN_14375d380(void)

undefined8 * FUN_14375d380(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  local_res18 = 0;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x20);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437140a0(&local_res18,param_2);
    uVar1 = *param_1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(&local_10,CONCAT44(uStackX_1c,local_res18));
    hkReflect::Detail::Impl::Impl(puVar3);
    *puVar3 = _anon_6595C8EB::ChildImpl<hkReflect::StringType,_anon_6595C8EB::RecordParentRef>::
              vftable;
    puVar3[2] = uVar1 | 1;
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    FUN_143714060(puVar3 + 3,local_10);
    *(undefined4 *)(puVar3 + 1) = 0;
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 14375d480 FUN_14375d480 body=334 status=ok
// SIG undefined FUN_14375d480(void)

undefined4 *
FUN_14375d480(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  if (*param_5 == *param_3) {
    *param_2 = 0;
    return param_2;
  }
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
  plVar3 = (longlong *)FUN_143714420(param_4,2);
  if (plVar3 == (longlong *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = *plVar3;
  }
  local_38 = *param_3;
  *param_3 = 0;
  if (local_30 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_1437151a0();
  }
  if ((local_28 & 1) != 0) {
    FUN_1437329e0(local_28 & 0xfffffffffffffffe);
  }
  FUN_1437428e0(&local_38,3,1);
  *param_3 = *param_5;
  *param_2 = 0;
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14375d5d0 FUN_14375d5d0 body=322 status=ok
// SIG undefined FUN_14375d5d0(void)

undefined4 *
FUN_14375d5d0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [8];
  undefined1 local_28 [16];
  
  puVar5 = (undefined8 *)0x0;
  if (*param_3 != 0) {
    FUN_14375d940(local_res18,*(undefined8 *)(DAT_146b83698 + 0x38));
    puVar4 = *(undefined8 **)(*param_3 + 0x18);
    puVar6 = puVar5;
    if ((puVar4 != (undefined8 *)0x0) &&
       (cVar3 = FUN_14370c090(puVar4), puVar6 = (undefined8 *)0x0, cVar3 != '\0')) {
      puVar6 = puVar4;
    }
    FSlateTextBlockLayout::SetDebugSourceInfo(local_res18);
    if (puVar6 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(**(code **)*puVar6)(puVar6,local_28);
      uVar1 = *puVar4;
      lVar2 = puVar4[1];
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)FUN_1437151a0(lVar2);
      }
      if (((ulonglong)puVar5 & 1) != 0) {
        FUN_1437329e0((ulonglong)puVar5 & 0xfffffffffffffffe);
      }
      param_5[1] = lVar2;
      *param_5 = uVar1;
      if ((*(byte *)(param_5 + 2) & 1) != 0) {
        FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
      }
      param_5[2] = puVar5;
      *param_2 = 0;
      FUN_14370c150(puVar6);
      return param_2;
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = 0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14375d720 FUN_14375d720 body=388 status=ok
// SIG undefined FUN_14375d720(void)

undefined4 *
FUN_14375d720(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  plVar3 = (longlong *)FUN_143714420(param_4,2);
  plVar7 = param_5;
  lVar6 = 0;
  if (plVar3 != (longlong *)0x0) {
    lVar6 = *plVar3;
  }
  lVar1 = param_5[1];
  puVar4 = (undefined8 *)FUN_143714490(lVar6,1);
  uVar8 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar8 = (uint)*puVar4;
  }
  lVar5 = 0;
  if ((uVar8 & 0xf) == 0) {
    lVar5 = lVar6;
  }
  if ((((lVar5 == 0) && (lVar1 != 0)) && (cVar2 = FUN_143714910(lVar1,lVar6), cVar2 == '\0')) &&
     (*plVar7 != 0)) {
    *param_2 = 0x80040200;
  }
  else {
    local_30 = *plVar7;
    local_28 = plVar7[1];
    if ((local_30 == 0) || (lVar6 = FUN_14371aab0(), lVar6 == 0)) {
      if (*param_3 != 0) {
        FUN_14370c150();
      }
      *param_3 = 0;
    }
    else {
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      bVar9 = *(short *)(lVar6 + 0x12) == 0;
      if (bVar9) {
        FUN_14370c030(lVar6);
      }
      FUN_14370c030(lVar6);
      param_5 = (longlong *)lVar6;
      FUN_14370c030(lVar6);
      plVar7 = (longlong *)FUN_14375dc20(DAT_146b83698,&local_38,&param_5);
      lVar1 = *plVar7;
      *plVar7 = 0;
      if (*param_3 != 0) {
        FUN_14370c150();
      }
      *param_3 = lVar1;
      if (local_38 != 0) {
        FUN_14370c150();
      }
      FUN_14370c150(lVar6);
      FUN_14370c150(lVar6);
      if (bVar9) {
        *(undefined2 *)(lVar6 + 0x12) = 0;
      }
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14375d8c0 FUN_14375d8c0 body=120 status=ok
// SIG undefined FUN_14375d8c0(void)

undefined8 FUN_14375d8c0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14375d960(lVar2);
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



// FUNCTION 14375d940 FUN_14375d940 body=29 status=ok
// SIG undefined FUN_14375d940(void)

undefined8 * FUN_14375d940(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_14377a7a0(param_2);
  return param_1;
}



// FUNCTION 14375d960 FUN_14375d960 body=144 status=ok
// SIG undefined FUN_14375d960(void)

undefined8 * FUN_14375d960(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkWeakPtrDetail::StatusRegistry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_143734b10(param_1 + 5);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x68);
  if (lVar2 != 0) {
    uVar3 = FUN_14377a720(lVar2);
    param_1[7] = uVar3;
    return param_1;
  }
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14375d9f0 FUN_14375d9f0 body=158 status=ok
// SIG undefined FUN_14375d9f0(void)

void FUN_14375d9f0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(*param_1 + 8 + lVar3 * 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x10,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14375da90 SetDebugSourceInfo body=8 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FSlateTextBlockLayout::SetDebugSourceInfo(undefined8 *param_1)

{
  FUN_14377a830(*param_1);
  return;
}



// FUNCTION 14375daa0 FUN_14375daa0 body=128 status=ok
// SIG undefined FUN_14375daa0(void)

void FUN_14375daa0(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  *param_1 = hkWeakPtrDetail::StatusRegistry::vftable;
  FUN_14375dbb0(param_1 + 3);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    hkReadersWriterLock::~hkReadersWriterLock(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x68);
  }
  FUN_14375d9f0(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14375db20 FUN_14375db20 body=139 status=ok
// SIG undefined FUN_14375db20(void)

longlong FUN_14375db20(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14375daa0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x40;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
    }
  }
  return param_1;
}



// FUNCTION 14375dbb0 FUN_14375dbb0 body=106 status=ok
// SIG undefined FUN_14375dbb0(void)

void FUN_14375dbb0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (0 < (int)param_1[1]) {
    iVar1 = (int)param_1[1] + -1;
    lVar2 = (longlong)iVar1;
    if (-1 < iVar1) {
      plVar3 = (longlong *)(*param_1 + 8 + lVar2 * 0x10);
      do {
        if (*plVar3 != 0) {
          FUN_14370c150();
        }
        plVar3 = plVar3 + -2;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1437347e0(param_1 + 2);
  }
  return;
}



// FUNCTION 14375dc20 FUN_14375dc20 body=323 status=ok
// SIG undefined FUN_14375dc20(void)

longlong * FUN_14375dc20(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined8 *local_res18;
  
  FUN_143732400(0x1ac5f180,"Types\\hkWeakPtr.cpp",0x4f,"WeakPtrs not available",&DAT_145b909f0,0);
  uVar2 = *param_3;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_res8 = uVar2;
  FUN_14377a7a0(uVar3);
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar4 = FUN_1436e53e0(plVar1,&local_res8);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 4) < 0)) {
    FUN_14377a830(uVar3);
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
    FUN_14377a7d0(lpCriticalSection);
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar5 + 0x58),0x20);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0x1ffff;
      *puVar6 = hkWeakPtrDetail::Status::vftable;
      puVar6[3] = uVar2;
    }
    local_res18 = puVar6;
    FUN_14375dd70(plVar1,&local_res8,&local_res18);
    *param_2 = (longlong)puVar6;
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    lVar4 = *(longlong *)(*plVar1 + 8 + (longlong)*(int *)(lVar4 + 4) * 0x10);
    *param_2 = lVar4;
    if (lVar4 != 0) {
      FUN_14370c030();
    }
    FUN_14377a830(uVar3);
  }
  return param_2;
}



// FUNCTION 14375dd70 FUN_14375dd70 body=391 status=ok
// SIG undefined FUN_14375dd70(void)

ulonglong FUN_14375dd70(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  lVar5 = *param_2;
  uVar9 = (int)lVar5 * -0x61c8864f;
  iVar2 = (int)((ulonglong)lVar5 >> 0x20);
  uVar7 = iVar2 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | (int)lVar5 * -0x4f000000
  ;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar9 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar7;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  puVar3 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      if (*(longlong *)(*param_1 + (longlong)(int)puVar3[1] * 0x10) == lVar5) {
        lVar5 = (longlong)(int)puVar3[1] * 0x10 + *param_1;
        if (*param_3 != 0) {
          FUN_14370c030();
        }
        if (*(longlong *)(lVar5 + 8) != 0) {
          FUN_14370c150();
        }
        uVar6 = *param_3;
        *(ulonglong *)(lVar5 + 8) = uVar6;
        return uVar6 & 0xffffffffffffff00;
      }
      lVar1 = param_1[2];
      uVar6 = ((longlong)puVar3 - lVar1 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar3 = (uint *)(lVar1 + uVar6 * 8);
    } while (-1 < *(int *)(lVar1 + 4 + uVar6 * 8));
  }
  uVar9 = *(uint *)(param_1 + 1);
  *puVar3 = uVar7;
  puVar3[1] = uVar9;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x10);
  }
  lVar5 = (longlong)(int)param_1[1] * 0x10 + *param_1;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  plVar8 = (longlong *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *plVar8 = *param_2;
  if (*param_3 != 0) {
    FUN_14370c030();
  }
  if (plVar8[1] != 0) {
    FUN_14370c150();
  }
  uVar6 = *param_3;
  plVar8[1] = uVar6;
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 14375df00 FUN_14375df00 body=179 status=ok
// SIG undefined FUN_14375df00(void)

void FUN_14375df00(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd);
  lVar3 = 0;
  *param_1 = hkSimpleLocalFrame::vftable;
  if (0 < (longlong)iVar1) {
    do {
      FUN_14370c150(*(undefined8 *)(param_1[0xc] + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  if (param_1[0xf] != 0) {
    FUN_14370c150();
  }
  FUN_143716650(param_1 + 0x10);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar2,param_1[0xc],8,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14375dfc0 FUN_14375dfc0 body=12 status=ok
// SIG undefined FUN_14375dfc0(void)

undefined8 FUN_14375dfc0(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
}



// FUNCTION 14375dfd0 FUN_14375dfd0 body=184 status=ok
// SIG undefined FUN_14375dfd0(void)

void FUN_14375dfd0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    if (0 < iVar1) {
      do {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x58))(param_1,iVar3);
        if (plVar2 != (longlong *)0x0) {
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(param_3,param_2,8);
          }
          *(longlong **)(*param_2 + (longlong)(int)param_2[1] * 8) = plVar2;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          (**(code **)(*plVar2 + 0x70))(plVar2,param_2,param_3);
        }
        iVar3 = iVar3 + 1;
        iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
      } while (iVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 14375e090 FUN_14375e090 body=8 status=ok
// SIG undefined FUN_14375e090(void)

void FUN_14375e090(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *param_2 = *(undefined8 *)(param_1 + 0x50);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 14375e0a0 FUN_14375e0a0 body=32 status=ok
// SIG undefined FUN_14375e0a0(void)

void FUN_14375e0a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  param_2[2] = *(undefined8 *)(param_1 + 0x30);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  param_2[4] = *(undefined8 *)(param_1 + 0x40);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  param_2[6] = *(undefined8 *)(param_1 + 0x50);
  param_2[7] = uVar1;
  return;
}



// FUNCTION 14375e0c0 FUN_14375e0c0 body=239 status=ok
// SIG undefined FUN_14375e0c0(void)

void FUN_14375e0c0(longlong param_1,float *param_2,float param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 local_28 [32];
  
  fVar4 = *param_2 - *(float *)(param_1 + 0x50);
  fVar5 = param_2[1] - *(float *)(param_1 + 0x54);
  fVar6 = param_2[2] - *(float *)(param_1 + 0x58);
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar8 = fVar5 + fVar4 + fVar6;
  auVar7._4_4_ = fVar5 + fVar4 + fVar6;
  auVar7._0_4_ = fVar8;
  auVar7._8_4_ = fVar5 + fVar4 + fVar6;
  auVar7._12_4_ = fVar5 + fVar4 + fVar6;
  auVar7 = rsqrtps(in_XMM3,auVar7);
  fVar4 = auVar7._0_4_;
  if ((float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar8 * fVar4 * fVar4) * fVar4 * 0.5 * fVar8))
      <= param_3) {
    (**(code **)(*param_4 + 0x18))(param_4,param_1);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    FUN_143713730(local_28,param_1 + 0x20,param_2);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x60));
        (**(code **)(*plVar1 + 0x30))(plVar1,local_28,param_3,param_4);
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x68));
    }
  }
  return;
}



// FUNCTION 14375e1b0 setGroup body=58 status=ok
// SIG undefined setGroup(void)

void hkSimpleLocalFrame::setGroup(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x78) = param_2;
  return;
}



// FUNCTION 14375e1f0 FUN_14375e1f0 body=32 status=ok
// SIG undefined FUN_14375e1f0(void)

void FUN_14375e1f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x40) = param_2[4];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x50) = param_2[6];
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



// FUNCTION 14375e210 FUN_14375e210 body=40 status=ok
// SIG undefined FUN_14375e210(void)

undefined4 *
FUN_14375e210(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double param_5)

{
  float fVar1;
  
  fVar1 = (float)param_5;
  *param_2 = 0;
  *param_3 = fVar1;
  param_3[1] = fVar1;
  param_3[2] = fVar1;
  param_3[3] = fVar1;
  return param_2;
}



// FUNCTION 14375e240 FUN_14375e240 body=125 status=ok
// SIG undefined FUN_14375e240(void)

undefined8 * FUN_14375e240(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkScalarF_FloatImpl::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14375e2c0 FUN_14375e2c0 body=461 status=ok
// SIG undefined FUN_14375e2c0(void)

void FUN_14375e2c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  longlong *local_e8;
  longlong *local_e0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  undefined1 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [128];
  
  FUN_143745710(param_2,&DAT_145b9c190,0xffffffff);
  local_a8 = local_98;
  bVar2 = false;
  local_9c = 0x80000080;
  local_a0 = 1;
  local_98[0] = 0;
  hkReflect::DeclIterAll::DeclIterAll(&local_e8,*(undefined8 *)(param_1 + 8),0);
  while( true ) {
    do {
      plVar3 = local_e8 + 1;
      if ((local_e0 <= local_e8 + 1) &&
         (cVar4 = FUN_1437144f0(&local_e8), plVar3 = local_e8, cVar4 == '\0')) goto LAB_14375e41a;
      local_e8 = plVar3;
      pbVar5 = (byte *)FUN_143714f30(local_e8,local_res8);
    } while ((*pbVar5 & 0x20) == 0);
    lVar1 = *local_e8;
    puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
    if (puVar6 == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)*puVar6;
    }
    lVar7 = 0;
    if ((uVar9 & 0xf) == 0) {
      lVar7 = lVar1;
    }
    if (lVar7 != 0) break;
    if (bVar2) {
      FUN_143745710(param_2,&DAT_145b036e8,0xffffffff);
    }
    bVar2 = true;
    uVar8 = FUN_143741f50(param_1,local_c8,*local_e8);
    FUN_143742cc0(uVar8,&local_a8);
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    FUN_143745710(param_2,local_a8,0xffffffff);
  }
LAB_14375e41a:
  FUN_143745710(param_2,&DAT_145b12c80,0xffffffff);
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14375e490 FUN_14375e490 body=66 status=ok
// SIG undefined FUN_14375e490(void)

float * FUN_14375e490(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar2;
  float fVar3;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = *(uint *)(param_1 + 0xc);
  local_18 = uStack_c & 0x7fffffff;
  uStack_14 = uStack_c & 0x7fffffff;
  uStack_10 = uStack_c & 0x7fffffff;
  uStack_c = uStack_c & 0x7fffffff;
  uVar1 = FUN_143715de0(&local_18);
  fVar2 = 1.5707964 - (float)uVar1;
  fVar3 = 1.5707964 - (float)((ulonglong)uVar1 >> 0x20);
  *param_2 = fVar2 + fVar2;
  param_2[1] = fVar3 + fVar3;
  param_2[2] = (1.5707964 - extraout_XMM0_Dc) + (1.5707964 - extraout_XMM0_Dc);
  param_2[3] = (1.5707964 - extraout_XMM0_Dd) + (1.5707964 - extraout_XMM0_Dd);
  return param_2;
}



// FUNCTION 14375e4e0 FUN_14375e4e0 body=106 status=ok
// SIG undefined FUN_14375e4e0(void)

undefined8 FUN_14375e4e0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  auVar5._0_4_ = -(uint)(((uint)fVar1 & 0x7f800000) == 0x7f800000);
  auVar5._4_4_ = -(uint)(((uint)fVar2 & 0x7f800000) == 0x7f800000);
  auVar5._8_4_ = -(uint)(((uint)fVar3 & 0x7f800000) == 0x7f800000);
  auVar5._12_4_ = -(uint)(((uint)fVar4 & 0x7f800000) == 0x7f800000);
  if (((((SUB161(auVar5 >> 7,0) & 1) == 0 && (SUB161(auVar5 >> 0x27,0) & 1) == 0) &&
       (SUB161(auVar5 >> 0x47,0) & 1) == 0) && (auVar5._12_4_ >> 7 & 1) == 0) &&
     (ABS((fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) - DAT_1467f06f0) < param_2
     )) {
    return 1;
  }
  return 0;
}



// FUNCTION 14375e550 FUN_14375e550 body=27 status=ok
// SIG undefined FUN_14375e550(void)

bool FUN_14375e550(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_14375e4e0(param_1,0x3a83126f);
  return iVar1 != 0;
}



// FUNCTION 14375e570 FUN_14375e570 body=395 status=ok
// SIG undefined FUN_14375e570(void)

void FUN_14375e570(undefined8 *param_1,float *param_2)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_18 [4];
  
  fVar1 = param_2[10];
  fVar5 = *param_2 + param_2[5] + fVar1;
  if (0.0 < fVar5) {
    fVar7 = SQRT(fVar5 + 1.0);
    fVar6 = 0.5 / fVar7;
    fVar1 = param_2[1];
    fVar5 = param_2[4];
    *param_1 = CONCAT44((param_2[8] - param_2[2]) * fVar6,(param_2[6] - param_2[9]) * fVar6);
    param_1[1] = CONCAT44(fVar7 * 0.5,(fVar1 - fVar5) * fVar6);
    return;
  }
  local_18[0] = 1.4013e-45;
  local_18[1] = 2.8026e-45;
  local_18[2] = 0.0;
  uVar2 = (ulonglong)(*param_2 < param_2[5]);
  if (param_2[uVar2 * 5] <= fVar1 && fVar1 != param_2[uVar2 * 5]) {
    uVar2 = 2;
  }
  lVar3 = (longlong)(int)local_18[uVar2];
  lVar4 = (longlong)(int)local_18[lVar3];
  fVar7 = SQRT((param_2[uVar2 * 5] - (param_2[lVar4 * 5] + param_2[lVar3 * 5])) + 1.0);
  fVar6 = 0.5 / fVar7;
  fVar1 = param_2[lVar4 + lVar3 * 4];
  fVar5 = param_2[lVar3 + lVar4 * 4];
  local_18[uVar2] = fVar7 * 0.5;
  local_18[3] = (fVar1 - fVar5) * fVar6;
  local_18[lVar3] = (param_2[lVar3 + uVar2 * 4] + param_2[uVar2 + lVar3 * 4]) * fVar6;
  local_18[lVar4] = (param_2[uVar2 + lVar4 * 4] + param_2[lVar4 + uVar2 * 4]) * fVar6;
  *param_1 = CONCAT44(local_18[1],local_18[0]);
  param_1[1] = CONCAT44(local_18[3],local_18[2]);
  return;
}



// FUNCTION 14375e700 FUN_14375e700 body=451 status=ok
// SIG undefined FUN_14375e700(void)

void FUN_14375e700(float *param_1,float *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_18 [4];
  
  fVar7 = param_2[10];
  fVar4 = *param_2 + param_2[5] + fVar7;
  if (fVar4 <= 0.0) {
    local_18[0] = 1.4013e-45;
    local_18[1] = 2.8026e-45;
    local_18[2] = 0.0;
    uVar1 = (ulonglong)(*param_2 < param_2[5]);
    if (param_2[uVar1 * 5] <= fVar7 && fVar7 != param_2[uVar1 * 5]) {
      uVar1 = 2;
    }
    lVar2 = (longlong)(int)local_18[uVar1];
    lVar3 = (longlong)(int)local_18[lVar2];
    fVar6 = SQRT((param_2[uVar1 * 5] - (param_2[lVar3 * 5] + param_2[lVar2 * 5])) + 1.0);
    fVar5 = 0.5 / fVar6;
    fVar7 = param_2[lVar3 + lVar2 * 4];
    fVar4 = param_2[lVar2 + lVar3 * 4];
    local_18[uVar1] = fVar6 * 0.5;
    local_18[3] = (fVar7 - fVar4) * fVar5;
    local_18[lVar2] = (param_2[lVar2 + uVar1 * 4] + param_2[uVar1 + lVar2 * 4]) * fVar5;
    local_18[lVar3] = (param_2[uVar1 + lVar3 * 4] + param_2[lVar3 + uVar1 * 4]) * fVar5;
  }
  else {
    local_18[3] = SQRT(fVar4 + 1.0);
    local_18[2] = 0.5 / local_18[3];
    local_18[3] = local_18[3] * 0.5;
    local_18[0] = (param_2[6] - param_2[9]) * local_18[2];
    local_18[1] = (param_2[8] - param_2[2]) * local_18[2];
    local_18[2] = (param_2[1] - param_2[4]) * local_18[2];
  }
  *param_1 = local_18[0];
  param_1[1] = local_18[1];
  param_1[2] = local_18[2];
  param_1[3] = local_18[3];
  auVar8._0_4_ = local_18[2] * local_18[2] + local_18[0] * local_18[0];
  auVar8._4_4_ = local_18[3] * local_18[3] + local_18[1] * local_18[1];
  auVar8._8_4_ = local_18[0] * local_18[0] + local_18[2] * local_18[2];
  auVar8._12_4_ = local_18[1] * local_18[1] + local_18[3] * local_18[3];
  auVar9._4_4_ = auVar8._0_4_ + auVar8._4_4_;
  auVar9._0_4_ = auVar8._4_4_ + auVar8._0_4_;
  auVar9._8_4_ = auVar8._12_4_ + auVar8._8_4_;
  auVar9._12_4_ = auVar8._8_4_ + auVar8._12_4_;
  auVar9 = rsqrtps(auVar8,auVar9);
  fVar7 = auVar9._0_4_;
  fVar4 = auVar9._4_4_;
  fVar5 = auVar9._8_4_;
  fVar6 = auVar9._12_4_;
  *param_1 = (3.0 - fVar7 * (auVar8._4_4_ + auVar8._0_4_) * fVar7) * fVar7 * 0.5 * local_18[0];
  param_1[1] = (3.0 - fVar4 * (auVar8._0_4_ + auVar8._4_4_) * fVar4) * fVar4 * 0.5 * local_18[1];
  param_1[2] = (3.0 - fVar5 * (auVar8._12_4_ + auVar8._8_4_) * fVar5) * fVar5 * 0.5 * local_18[2];
  param_1[3] = (3.0 - fVar6 * (auVar8._8_4_ + auVar8._12_4_) * fVar6) * fVar6 * 0.5 * local_18[3];
  return;
}



// FUNCTION 14375e8d0 FUN_14375e8d0 body=86 status=ok
// SIG undefined FUN_14375e8d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375e8d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined1 local_18 [12];
  float fStack_c;
  
  local_38 = *param_3 * _DAT_1467f07e0;
  fStack_34 = param_3[1] * fRam00000001467f07e4;
  fStack_30 = param_3[2] * fRam00000001467f07e8;
  fStack_2c = param_3[3] * fRam00000001467f07ec;
  FUN_143716280(&local_38,&local_28,local_18);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *param_2 * local_28;
  param_1[1] = fVar1 * fStack_24;
  param_1[2] = fVar2 * fStack_20;
  param_1[3] = fStack_c;
  return;
}



// FUNCTION 14375e930 FUN_14375e930 body=43 status=ok
// SIG undefined FUN_14375e930(void)

void FUN_14375e930(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = param_3;
  uStack_14 = param_3;
  uStack_10 = param_3;
  uStack_c = param_3;
  FUN_14375e8d0(param_3,param_3,&local_18);
  return;
}



// FUNCTION 14375e960 FUN_14375e960 body=209 status=ok
// SIG undefined FUN_14375e960(void)

/* WARNING: Removing unreachable block (ram,0x00014375e97b) */

void FUN_14375e960(float *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  auVar4 = *param_2;
  fVar11 = auVar4._0_4_;
  fVar8 = fVar11 * fVar11;
  fVar5 = auVar4._4_4_;
  fVar10 = fVar5 * fVar5;
  fVar6 = auVar4._8_4_;
  fVar2 = fVar11 * fVar11 + fVar6 * fVar6;
  uVar1 = -(uint)(fVar10 + fVar8 < fVar2 + 0.0);
  fVar12 = (float)((uint)fVar11 & -(uint)(fVar10 + fVar8 < fVar6 * fVar6 + fVar11 * fVar11 + 0.0));
  fVar11 = (float)(~-(uint)(fVar10 + fVar8 < fVar2 + 0.0) & (uint)fVar11);
  fVar9 = (float)(~uVar1 & (uint)-fVar5 | (uint)-fVar6 & uVar1);
  fVar2 = fVar9 * fVar9;
  fVar8 = fVar11 * fVar11;
  auVar3._8_4_ = fVar12 * fVar12;
  auVar3._4_4_ = auVar3._8_4_;
  auVar3._0_4_ = auVar3._8_4_;
  auVar3._12_4_ = auVar3._8_4_;
  fVar5 = fVar8 + fVar2 + auVar3._8_4_;
  fVar6 = fVar8 + fVar2 + auVar3._8_4_;
  fVar7 = fVar8 + fVar2 + auVar3._8_4_;
  auVar4._4_4_ = fVar6;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar8 + fVar2 + auVar3._8_4_;
  auVar4 = rsqrtps(auVar3,auVar4);
  fVar2 = auVar4._0_4_;
  fVar8 = auVar4._4_4_;
  fVar10 = auVar4._8_4_;
  *param_1 = (float)(~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar5 * fVar2 * fVar2) * fVar2 * 0.5)) *
             fVar9;
  param_1[1] = (float)(~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar6 * fVar8 * fVar8) * fVar8 * 0.5))
               * fVar11;
  param_1[2] = (float)(~-(uint)(fVar7 <= 0.0) &
                      (uint)((3.0 - fVar7 * fVar10 * fVar10) * fVar10 * 0.5)) * fVar12;
  param_1[3] = 0.0;
  return;
}



// FUNCTION 14375ea40 FUN_14375ea40 body=212 status=ok
// SIG undefined FUN_14375ea40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375ea40(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58 [2];
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_68 = *param_3 * _DAT_1467f07e0;
  fStack_64 = *param_3 * fRam00000001467f07e4;
  fStack_60 = *param_2 * fRam00000001467f07e8;
  fStack_5c = *param_2 * fRam00000001467f07ec;
  FUN_143716280(&local_68,local_58,&local_48);
  local_48 = *param_4 * _DAT_1467f07e0;
  fStack_40 = param_4[2] * fRam00000001467f07e8;
  fVar1 = fStack_3c * fStack_44;
  fVar2 = fStack_3c * local_58[0];
  fVar3 = fStack_50 * fStack_44;
  fStack_44 = param_4[1] * fRam00000001467f07e4;
  fStack_3c = param_4[3] * fRam00000001467f07ec;
  FUN_143716280(&local_48,&local_28,&local_38);
  *param_1 = local_28 * fVar1 + fStack_2c * fStack_50 * local_58[0];
  param_1[1] = fStack_24 * fVar2 + fStack_30 * fVar3;
  param_1[2] = -(fStack_20 * fVar3) + fStack_34 * fVar2;
  param_1[3] = -(fStack_1c * fStack_50 * local_58[0]) + local_38 * fVar1;
  return;
}



// FUNCTION 14375eb20 FUN_14375eb20 body=92 status=ok
// SIG undefined FUN_14375eb20(void)

void FUN_14375eb20(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = param_4;
  uStack_34 = param_4;
  uStack_30 = param_4;
  uStack_2c = param_4;
  local_28 = param_3;
  uStack_24 = param_3;
  uStack_20 = param_3;
  uStack_1c = param_3;
  local_18 = param_2;
  uStack_14 = param_2;
  uStack_10 = param_2;
  uStack_c = param_2;
  FUN_14375ea40(param_2,&local_18,&local_28,&local_38);
  return;
}



// FUNCTION 14375eb80 FUN_14375eb80 body=12 status=ok
// SIG undefined FUN_14375eb80(void)

void FUN_14375eb80(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e1600);
  return;
}



// FUNCTION 14375eb90 FUN_14375eb90 body=12 status=ok
// SIG undefined FUN_14375eb90(void)

undefined4 * FUN_14375eb90(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 14375eba0 FUN_14375eba0 body=13 status=ok
// SIG undefined FUN_14375eba0(void)

void FUN_14375eba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



// FUNCTION 14375ebb0 FUN_14375ebb0 body=155 status=ok
// SIG undefined FUN_14375ebb0(void)

void FUN_14375ebb0(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint local_res8 [6];
  uint local_res20 [2];
  uint local_18;
  uint local_14 [3];
  
  puVar1 = (uint *)FUN_14375eb80(*param_1,param_1[1]);
  local_14[0] = *puVar1;
  local_res8[0] = local_14[0] >> 0x18;
  local_res20[0] = local_14[0] >> 0x10 & 0xff;
  local_18 = local_14[0] >> 8 & 0xff;
  local_14[0] = local_14[0] & 0xff;
  FUN_143746010(param_2,"{}.{}.{}.{}:{}",&DAT_145b9c198,local_14,&local_18,local_res20,local_res8,
                puVar1 + 1,0);
  return;
}



// FUNCTION 14375ec50 FUN_14375ec50 body=12 status=ok
// SIG undefined FUN_14375ec50(void)

void FUN_14375ec50(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e1e30);
  return;
}



// FUNCTION 14375ec60 FUN_14375ec60 body=40 status=ok
// SIG undefined FUN_14375ec60(void)

undefined8 * FUN_14375ec60(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  FUN_14375eca0();
  return param_1;
}



// FUNCTION 14375ec90 thunk_FUN_14375ed90 body=5 status=ok
// SIG undefined thunk_FUN_14375ed90(void)

void thunk_FUN_14375ed90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  LPVOID pvVar4;
  
  if (*param_1 != 0) {
    if ((int)param_1[1] != 0) {
      FUN_143749de0(*param_1,param_1[2]);
    }
    if ((*param_1 != 0) && (-1 < *(int *)((longlong)param_1 + 0xc))) {
      iVar3 = FUN_1437152f0(param_1[2]);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      lVar2 = *param_1;
      pvVar4 = TlsGetValue(DAT_146b7bf70);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = DAT_146b7bf68;
      }
      FUN_143702c60(*(undefined8 *)((longlong)pvVar4 + 0x58),lVar2,1,iVar1 * iVar3);
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14375eca0 FUN_14375eca0 body=226 status=ok
// SIG undefined FUN_14375eca0(void)

undefined8 * FUN_14375eca0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  if (param_1 != param_2) {
    local_28 = *param_2;
    lVar1 = param_2[2];
    local_18 = *(undefined4 *)(param_2 + 1);
    local_14 = 0;
    local_10 = 0;
    local_20 = lVar1;
    uVar2 = local_10;
    if (lVar1 != 0) {
      local_14 = FUN_1437152f0(lVar1);
      uVar2 = FUN_1437151a0(lVar1);
      if ((uVar2 & 1) != 0) {
        FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
      }
      if ((local_10 & 1) != 0) {
        FUN_143733a60(local_10 & 0xfffffffffffffffe);
      }
    }
    local_10 = uVar2;
    (**(code **)(DAT_146b82b50 + 0x78))
              (&DAT_146b82b50,local_res8,param_1,&DAT_1467e1e30,0,*(undefined4 *)(param_1 + 1),
               &local_28);
    if ((local_10 & 1) != 0) {
      FUN_143733a60(local_10 & 0xfffffffffffffffe);
    }
  }
  return param_1;
}



// FUNCTION 14375ed90 FUN_14375ed90 body=144 status=ok
// SIG undefined FUN_14375ed90(void)

void FUN_14375ed90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  LPVOID pvVar4;
  
  if (*param_1 != 0) {
    if ((int)param_1[1] != 0) {
      FUN_143749de0(*param_1,param_1[2]);
    }
    if ((*param_1 != 0) && (-1 < *(int *)((longlong)param_1 + 0xc))) {
      iVar3 = FUN_1437152f0(param_1[2]);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      lVar2 = *param_1;
      pvVar4 = TlsGetValue(DAT_146b7bf70);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = DAT_146b7bf68;
      }
      FUN_143702c60(*(undefined8 *)((longlong)pvVar4 + 0x58),lVar2,1,iVar1 * iVar3);
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14375ee20 FUN_14375ee20 body=139 status=ok
// SIG undefined FUN_14375ee20(void)

void FUN_14375ee20(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14375ec50(*param_1,param_1[1]);
  }
  if (*(int *)(puVar2 + 1) != 0) {
    iVar1 = *(int *)(puVar2 + 1);
    local_10 = FUN_1437152f0(puVar2[2]);
    local_10 = local_10 * iVar1;
    if (local_10 != 0) {
      local_28 = "buffer_hkVariantArray";
      local_18 = puVar2[2];
      local_20 = *puVar2;
      local_c = iVar1;
      FUN_14376f920(param_2,&local_28,1);
    }
  }
  return;
}



// FUNCTION 14375eec0 FUN_14375eec0 body=120 status=ok
// SIG undefined FUN_14375eec0(void)

undefined8 FUN_14375eec0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x50);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14375efd0(lVar2);
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



// FUNCTION 14375ef40 FGuid body=21 status=ok
// SIG undefined FGuid(void)

undefined4 *
FGuid::FGuid(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 14375ef60 FUN_14375ef60 body=13 status=ok
// SIG undefined FUN_14375ef60(void)

undefined8 * FUN_14375ef60(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14375ef70 FUN_14375ef70 body=37 status=ok
// SIG undefined FUN_14375ef70(void)

undefined8 * FUN_14375ef70(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkUuidObject::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 14375efa0 FUN_14375efa0 body=36 status=ok
// SIG undefined FUN_14375efa0(void)

undefined8 * FUN_14375efa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkUuidObject::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  uVar1 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 14375efd0 FUN_14375efd0 body=136 status=ok
// SIG undefined FUN_14375efd0(void)

undefined8 * FUN_14375efd0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  __time64_t _Var3;
  
  param_1[1] = 0;
  *param_1 = hkUuidPseudoRandomGenerator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  FUN_143782af0(param_1 + 3);
  FUN_14370d870(param_1 + 5,5000);
  _Var3 = _time64((__time64_t *)0x0);
  uVar1 = clock();
  uVar2 = hkSystemClock::getTickCounter();
  FUN_143782c90(param_1 + 3,uVar2 ^ uVar1 ^ (uint)_Var3);
  return param_1;
}



// FUNCTION 14375f060 FUN_14375f060 body=136 status=ok
// SIG undefined FUN_14375f060(void)

longlong FUN_14375f060(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14375f0f0 FUN_14375f0f0 body=160 status=ok
// SIG undefined FUN_14375f0f0(void)

longlong FUN_14375f0f0(longlong param_1,uint param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_143782b00(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 14375f190 FUN_14375f190 body=8 status=ok
// SIG undefined FUN_14375f190(void)

undefined * FUN_14375f190(void)

{
  return &DAT_146b83708;
}



// FUNCTION 14375f1a0 FUN_14375f1a0 body=137 status=ok
// SIG undefined FUN_14375f1a0(void)

void FUN_14375f1a0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  lVar2 = param_1 + 0x18;
  uVar1 = FUN_143782c10(lVar2);
  *param_2 = uVar1;
  uVar1 = FUN_143782c10(lVar2);
  *param_3 = uVar1;
  uVar1 = FUN_143782c10(lVar2);
  *param_4 = uVar1;
  uVar1 = FUN_143782c10(lVar2);
  *param_5 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014375f222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14375f240 FUN_14375f240 body=184 status=ok
// SIG undefined FUN_14375f240(void)

void FUN_14375f240(ulonglong *param_1)

{
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  FUN_14375f1a0(DAT_146b836d8,local_res8,local_res10,local_res18,local_res20);
  *param_1 = CONCAT26((short)local_res10._0_4_,CONCAT24(SUB42(local_res10._0_4_,2),local_res8[0])) &
             0xfffffffffffffff | 0x4000000000000000;
  param_1[1] = CONCAT17((char)local_res20._0_4_,
                        CONCAT16(SUB41(local_res20._0_4_,1),
                                 CONCAT15(SUB41(local_res20._0_4_,2),
                                          CONCAT14(SUB41(local_res20._0_4_,3),
                                                   CONCAT13((char)local_res18._0_4_,
                                                            CONCAT12(SUB41(local_res18._0_4_,1),
                                                                     CONCAT11(SUB41(local_res18.
                                                                                    _0_4_,2),
                                                                              SUB41(local_res18.
                                                                                    _0_4_,3))))))))
               & 0xffffffffffffff3f | 0x80;
  return;
}



// FUNCTION 14375f300 FUN_14375f300 body=268 status=ok
// SIG undefined FUN_14375f300(void)

undefined8 FUN_14375f300(undefined1 (*param_1) [16],char *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = *param_1;
  hkStringBuf::printf(param_2,"%.8x-%.4x-%.4x-%.2x%.2x-%.2x%.2x%.2x%.2x%.2x%.2x",
                      (ulonglong)auVar1._0_4_,(ulonglong)auVar1._4_2_,(uint)auVar1._6_2_,
                      auVar1._8_4_ & 0xff,auVar1._9_4_ & 0xff,auVar1._10_4_ & 0xff,
                      auVar1._11_4_ & 0xff,auVar1._12_4_ & 0xff,auVar1._12_4_ >> 8 & 0xff,
                      (uint)auVar1[0xe],auVar1[0xf]);
  return *(undefined8 *)param_2;
}



// FUNCTION 14375f410 FUN_14375f410 body=12 status=ok
// SIG undefined FUN_14375f410(void)

void FUN_14375f410(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e49e0);
  return;
}



// FUNCTION 14375f420 FUN_14375f420 body=256 status=ok
// SIG undefined FUN_14375f420(void)

void FUN_14375f420(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_14375f410(*param_1,param_1[1]);
  iVar1 = FUN_143750fa0(param_3,&DAT_145b9c284);
  if (iVar1 == 0) {
    hkStringBuf::printf(param_2,"(%i%i) %i%i%i %i%i%i%i",(ulonglong)(uint)(int)*pcVar2,
                        (ulonglong)(uint)(int)pcVar2[1],(int)pcVar2[2],(int)pcVar2[3],(int)pcVar2[4]
                        ,(int)pcVar2[5],(int)pcVar2[6],(int)pcVar2[7],(int)pcVar2[8]);
  }
  else {
    hkStringBuf::printf(param_2,"%i%i-%i%i%i-%i%i%i%i",(ulonglong)(uint)(int)*pcVar2,
                        (ulonglong)(uint)(int)pcVar2[1],(int)pcVar2[2],(int)pcVar2[3],(int)pcVar2[4]
                        ,(int)pcVar2[5],(int)pcVar2[6],(int)pcVar2[7],(int)pcVar2[8]);
  }
  return;
}



// FUNCTION 14375f520 FUN_14375f520 body=37 status=ok
// SIG undefined FUN_14375f520(void)

undefined4 *
FUN_14375f520(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  param_3[1] = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14375f550 FUN_14375f550 body=23 status=ok
// SIG undefined FUN_14375f550(void)

undefined4 *
FUN_14375f550(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 14375f570 FUN_14375f570 body=125 status=ok
// SIG undefined FUN_14375f570(void)

undefined8 * FUN_14375f570(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkSimdDouble64_FloatImpl::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14375f5f0 FUN_14375f5f0 body=95 status=ok
// SIG undefined FUN_14375f5f0(void)

bool FUN_14375f5f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  fVar1 = *param_3;
  auVar3._0_8_ = CONCAT44(param_2[9] - param_1[9],param_2[8] - param_1[8]) & 0x7fffffff7fffffff;
  auVar3._8_4_ = ABS(param_2[10] - param_1[10]);
  auVar3._12_4_ = ABS(param_2[0xb] - param_1[0xb]);
  auVar4._8_4_ = ABS(param_2[0xe] - param_1[0xe]);
  auVar4._0_8_ = CONCAT44(param_2[0xd] - param_1[0xd],param_2[0xc] - param_1[0xc]) &
                 0x7fffffff7fffffff;
  auVar4._12_4_ = ABS(param_2[0xf] - param_1[0xf]);
  auVar4 = maxps(auVar3,auVar4);
  auVar5._0_8_ = CONCAT44(param_2[1] - param_1[1],*param_2 - *param_1) & 0x7fffffff7fffffff;
  auVar5._8_4_ = ABS(param_2[2] - param_1[2]);
  auVar5._12_4_ = ABS(param_2[3] - param_1[3]);
  auVar6._8_4_ = ABS(param_2[6] - param_1[6]);
  auVar6._0_8_ = CONCAT44(param_2[5] - param_1[5],param_2[4] - param_1[4]) & 0x7fffffff7fffffff;
  auVar6._12_4_ = ABS(param_2[7] - param_1[7]);
  auVar6 = maxps(auVar5,auVar6);
  auVar4 = maxps(auVar6,auVar4);
  auVar7._4_4_ = -(uint)(auVar4._4_4_ <= fVar1);
  auVar7._0_4_ = -(uint)(auVar4._0_4_ <= fVar1);
  auVar7._8_4_ = -(uint)(auVar4._8_4_ <= fVar1);
  auVar7._12_4_ = -(uint)(auVar4._12_4_ <= fVar1);
  uVar2 = movmskps(in_EAX,auVar7);
  return ((byte)uVar2 & 7) == 7;
}



// FUNCTION 14375f650 FUN_14375f650 body=112 status=ok
// SIG undefined FUN_14375f650(void)

void FUN_14375f650(float *param_1,float *param_2)

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
  
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[6];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  param_1[4] = fVar6;
  param_1[5] = fVar10;
  param_1[6] = fVar2;
  param_1[7] = fVar4;
  *param_1 = fVar5;
  param_1[1] = fVar9;
  param_1[2] = fVar1;
  param_1[3] = fVar2;
  param_1[8] = fVar7;
  param_1[9] = fVar8;
  param_1[10] = fVar3;
  param_1[0xb] = fVar4;
  fVar11 = -param_2[0xc];
  fVar12 = -param_2[0xd];
  fVar13 = -param_2[0xe];
  param_1[0xc] = fVar12 * fVar6 + fVar11 * fVar5 + fVar13 * fVar7;
  param_1[0xd] = fVar12 * fVar10 + fVar11 * fVar9 + fVar13 * fVar8;
  param_1[0xe] = fVar12 * fVar2 + fVar11 * fVar1 + fVar13 * fVar3;
  param_1[0xf] = fVar12 * fVar4 + fVar11 * fVar2 + fVar13 * fVar4;
  return;
}



// FUNCTION 14375f6c0 FUN_14375f6c0 body=96 status=ok
// SIG undefined FUN_14375f6c0(void)

void FUN_14375f6c0(longlong param_1,float *param_2,longlong param_3)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  longlong lVar18;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  pfVar17 = (float *)(param_3 + 0x30);
  fVar6 = param_2[4];
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  fVar9 = param_2[7];
  fVar10 = param_2[8];
  fVar11 = param_2[9];
  fVar12 = param_2[10];
  fVar13 = param_2[0xb];
  lVar18 = 3;
  do {
    fVar14 = *pfVar17;
    fVar15 = pfVar17[1];
    fVar16 = pfVar17[2];
    pfVar1 = (float *)((param_1 - param_3) + (longlong)pfVar17);
    *pfVar1 = fVar15 * fVar6 + fVar14 * fVar2 + fVar16 * fVar10;
    pfVar1[1] = fVar15 * fVar7 + fVar14 * fVar3 + fVar16 * fVar11;
    pfVar1[2] = fVar15 * fVar8 + fVar14 * fVar4 + fVar16 * fVar12;
    pfVar1[3] = fVar15 * fVar9 + fVar14 * fVar5 + fVar16 * fVar13;
    pfVar17 = pfVar17 + -4;
    lVar18 = lVar18 + -1;
  } while (-1 < lVar18);
  fVar2 = param_2[0xd];
  fVar3 = param_2[0xe];
  fVar4 = param_2[0xf];
  *(float *)(param_1 + 0x30) = param_2[0xc] + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x34) = fVar2 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = fVar3 + *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x3c) = fVar4 + *(float *)(param_1 + 0x3c);
  return;
}



// FUNCTION 14375f720 FUN_14375f720 body=215 status=ok
// SIG undefined FUN_14375f720(void)

void FUN_14375f720(float *param_1,float *param_2,longlong param_3)

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
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar2 = param_2[8];
  fVar3 = param_2[9];
  fVar4 = param_2[10];
  fVar5 = param_2[0xb];
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar14 = param_2[4];
  fVar15 = param_2[5];
  fVar16 = param_2[6];
  lVar13 = 3;
  pfVar12 = param_1;
  do {
    pfVar1 = (float *)((param_3 - (longlong)param_1) + (longlong)pfVar12);
    fVar9 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar11 = pfVar1[2];
    *pfVar12 = fVar10 * fVar7 + fVar9 * fVar6 + fVar11 * fVar8;
    pfVar12[1] = fVar10 * fVar15 + fVar9 * fVar14 + fVar11 * fVar16;
    pfVar12[2] = fVar10 * fVar3 + fVar9 * fVar2 + fVar11 * fVar4;
    pfVar12[3] = fVar10 * fVar5 + fVar9 * fVar3 + fVar11 * fVar5;
    pfVar12 = pfVar12 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  fVar2 = param_2[8];
  fVar3 = param_2[9];
  fVar4 = param_2[10];
  fVar5 = param_2[0xb];
  fVar14 = *(float *)(param_3 + 0x30) - param_2[0xc];
  fVar15 = *(float *)(param_3 + 0x34) - param_2[0xd];
  fVar16 = *(float *)(param_3 + 0x38) - param_2[0xe];
  fVar6 = param_2[4];
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  param_1[0xc] = param_2[1] * fVar15 + fVar14 * *param_2 + fVar16 * param_2[2];
  param_1[0xd] = fVar7 * fVar15 + fVar14 * fVar6 + fVar16 * fVar8;
  param_1[0xe] = fVar3 * fVar15 + fVar14 * fVar2 + fVar16 * fVar4;
  param_1[0xf] = fVar5 * fVar15 + fVar14 * fVar3 + fVar16 * fVar5;
  return;
}



// FUNCTION 14375f800 FUN_14375f800 body=124 status=ok
// SIG undefined FUN_14375f800(void)

void FUN_14375f800(float *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_14376f7d0(&local_38);
  fVar1 = *(float *)(param_3 + 0x30);
  fVar2 = *(float *)(param_3 + 0x34);
  fVar3 = *(float *)(param_3 + 0x38);
  fVar4 = *(float *)(param_2 + 0x30);
  fVar5 = *(float *)(param_2 + 0x34);
  fVar6 = *(float *)(param_2 + 0x38);
  fVar7 = *(float *)(param_2 + 0x3c);
  *param_1 = local_38;
  param_1[1] = fStack_34;
  param_1[2] = fStack_30;
  param_1[3] = fStack_2c;
  param_1[4] = local_28;
  param_1[5] = fStack_24;
  param_1[6] = fStack_20;
  param_1[7] = fStack_1c;
  param_1[8] = local_18;
  param_1[9] = fStack_14;
  param_1[10] = fStack_10;
  param_1[0xb] = fStack_c;
  param_1[0xc] = fVar4 - (fVar2 * local_28 + fVar1 * local_38 + fVar3 * local_18);
  param_1[0xd] = fVar5 - (fVar2 * fStack_24 + fVar1 * fStack_34 + fVar3 * fStack_14);
  param_1[0xe] = fVar6 - (fVar2 * fStack_20 + fVar1 * fStack_30 + fVar3 * fStack_10);
  param_1[0xf] = fVar7 - (fVar2 * fStack_1c + fVar1 * fStack_2c + fVar3 * fStack_c);
  return;
}



// FUNCTION 14375f880 FUN_14375f880 body=25 status=ok
// SIG undefined FUN_14375f880(void)

undefined4 *
FUN_14375f880(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x90);
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 14375f8a0 FUN_14375f8a0 body=161 status=ok
// SIG undefined FUN_14375f8a0(void)

void FUN_14375f8a0(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = param_2 & 0x7fffffff;
  uVar3 = (ushort)(param_2 >> 0x10) & 0x8000;
  if (0x477fe000 < uVar2) {
    uVar1 = 0x7c00;
    if ((param_2 & 0x7fffff) != 0 && (param_2 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x7fff;
    }
    *param_1 = uVar3 | uVar1;
    return;
  }
  if (uVar2 < 0x38800000) {
    uVar2 = (param_2 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar2 >> 0x17) & 0x1f);
  }
  else {
    uVar2 = uVar2 + 0xc8000000;
  }
  *param_1 = uVar3 | (ushort)((uVar2 >> 0xd & 1) + 0xfff + uVar2 >> 0xd) & 0x7fff;
  return;
}



// FUNCTION 14375f950 FUN_14375f950 body=12 status=ok
// SIG undefined FUN_14375f950(void)

void FUN_14375f950(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e7b20);
  return;
}



// FUNCTION 14375f960 FUN_14375f960 body=120 status=ok
// SIG undefined FUN_14375f960(void)

uint FUN_14375f960(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar5 = uVar1 & 0x3ff;
  if ((uVar1 & 0x7c00) == 0x7c00) {
    uVar4 = 0x8f;
  }
  else if ((uVar1 & 0x7c00) == 0) {
    if ((uVar1 & 0x3ff) == 0) {
      uVar4 = 0xffffff90;
    }
    else {
      uVar4 = 1;
      do {
        uVar4 = uVar4 - 1;
        uVar2 = uVar5 * 2;
        uVar3 = uVar5 & 0x7fffffff;
        uVar5 = uVar2;
      } while ((uVar3 >> 9 & 1) == 0);
      uVar5 = uVar2 & 0x3ff;
    }
  }
  else {
    uVar4 = uVar1 >> 10 & 0x1f;
  }
  return (uVar1 & 0x8000) << 0x10 | (uVar4 + 0x70) * 0x800000 | uVar5 << 0xd;
}



// FUNCTION 14375f9e0 FUN_14375f9e0 body=325 status=ok
// SIG undefined FUN_14375f9e0(void)

void FUN_14375f9e0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  int local_res18 [4];
  int *local_68;
  undefined *local_60;
  int **local_58;
  undefined4 ***local_50;
  undefined1 local_48 [64];
  
  FUN_143745f20(param_2);
  local_res18[0] = *param_1;
  piVar1 = &DAT_1467f5230;
  iVar4 = 0;
  do {
    if (*piVar1 == local_res18[0]) {
      FUN_143745710(param_2,(&PTR_s_HK_SUCCESS_1467f5238)[(longlong)iVar4 * 3],0xffffffff);
      return;
    }
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 6;
  } while ((longlong)piVar1 < 0x1467f5338);
  if (1 < DAT_146b83768) {
    FUN_14373a730(local_48,&DAT_146b83760,2);
    lVar2 = FUN_14373bbd0(local_48,
                          "No corresponding string is defined for hkResult with code 0x{:X8}.",
                          &DAT_145b73c70,local_res18,0);
    *(char **)(lVar2 + 0x20) = "Types\\hkBaseTypes.cpp";
    *(undefined8 *)(lVar2 + 0x28) = 0xa8;
    FUN_14373a950(local_48);
  }
  local_res18[0] = *param_1;
  local_68 = local_res18;
  pcVar3 = "HK_E_{:X8}";
  if (-1 < local_res18[0]) {
    pcVar3 = "HK_SUCCESS_{:X8}";
  }
  local_60 = &DAT_1467f01a0;
  local_58 = &local_68;
  local_50 = &local_58;
  FUN_1437457c0(param_2,pcVar3,&local_58);
  return;
}



// FUNCTION 14375fb30 FUN_14375fb30 body=37 status=ok
// SIG undefined FUN_14375fb30(void)

void FUN_14375fb30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14375f950(*param_1,param_1[1]);
  FUN_14375f9e0(uVar1,param_2);
  return;
}



// FUNCTION 14375fb60 FUN_14375fb60 body=198 status=ok
// SIG undefined FUN_14375fb60(void)

float FUN_14375fb60(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 <= 0.04045) {
    return param_1 * 0.07739938;
  }
  param_1 = param_1 + 0.055;
  fVar2 = param_1 * param_1 * param_1 * param_1;
  fVar1 = (float)(int)((float)(uint)(param_1 * 3.6116227e+09) * 0.8);
  fVar1 = fVar2 / (fVar1 * fVar1 * fVar1 * fVar1) + fVar1 * 4.0;
  fVar1 = fVar2 / (fVar1 * fVar1 * fVar1 * fVar1) + fVar1 * 0.00128;
  fVar1 = fVar2 / (fVar1 * fVar1 * fVar1 * fVar1) + fVar1 * 1.2207031e+11;
  return fVar1 * fVar1 * fVar1 * 4.834638e-28;
}



// FUNCTION 14375fc30 getPaletteColor body=42 status=ok
// SIG undefined getPaletteColor(void)

uint hkColor::getPaletteColor(uint param_1,byte param_2)

{
  param_1 = param_1 & 0x8000001f;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xffffffe0) + 1;
  }
  return *(uint *)(&DAT_1467f5340 + (longlong)(int)param_1 * 4) & 0xffffff | (uint)param_2 << 0x18;
}



// FUNCTION 14375fc60 FUN_14375fc60 body=203 status=ok
// SIG undefined FUN_14375fc60(void)

ulonglong FUN_14375fc60(float param_1)

{
  ulonglong in_RAX;
  
  if (param_1 <= 0.0031308) {
    return in_RAX;
  }
  return (ulonglong)((int)param_1 + 0x7f000000) * 0xaaaaaaab & 0xffffffff;
}



// FUNCTION 14375fd30 FUN_14375fd30 body=119 status=ok
// SIG undefined FUN_14375fd30(void)

uint FUN_14375fd30(float param_1,float param_2,float param_3,float param_4)

{
  return (((int)(param_1 * 255.0) & 0xffU | ((int)(param_4 * 255.0) & 0xffU) << 8) << 8 |
         (int)(param_2 * 255.0) & 0xffU) << 8 | (int)(param_3 * 255.0) & 0xffU;
}



// FUNCTION 14375fdb0 FUN_14375fdb0 body=33 status=ok
// SIG undefined FUN_14375fdb0(void)

undefined4 *
FUN_14375fdb0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong param_5)

{
  *param_3 = param_5 >> 0x38 | (param_5 & 0xff000000000000) >> 0x28 |
             (param_5 & 0xff0000000000) >> 0x18 | (param_5 & 0xff00000000) >> 8 |
             (param_5 & 0xff000000) << 8 | (param_5 & 0xff0000) << 0x18 | (param_5 & 0xff00) << 0x28
             | param_5 << 0x38;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14375fde0 FUN_14375fde0 body=24 status=ok
// SIG undefined FUN_14375fde0(void)

undefined4 *
FUN_14375fde0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
             (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
             (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  return param_2;
}



// FUNCTION 14375fe00 FUN_14375fe00 body=26 status=ok
// SIG undefined FUN_14375fe00(void)

undefined4 *
FUN_14375fe00(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ushort *param_5)

{
  *param_2 = 0;
  *param_3 = *param_5 >> 8 | *param_5 << 8;
  return param_2;
}



// FUNCTION 14375fe20 FUN_14375fe20 body=33 status=ok
// SIG undefined FUN_14375fe20(void)

undefined4 *
FUN_14375fe20(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)(ushort)(uVar1 >> 8 | uVar1 << 8);
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 14375fe50 FUN_14375fe50 body=125 status=ok
// SIG undefined FUN_14375fe50(void)

undefined8 * FUN_14375fe50(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::EndianFloatImplN<double,hkEndian::EndianType<double,0>_>::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14375fed0 FUN_14375fed0 body=31 status=ok
// SIG undefined FUN_14375fed0(void)

undefined4 *
FUN_14375fed0(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             short *param_5)

{
  short sVar1;
  
  sVar1 = *param_5;
  if ((char)param_5[4] != '\0') {
    sVar1 = -sVar1;
  }
  *param_3 = sVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14375fef0 FUN_14375fef0 body=20 status=ok
// SIG undefined FUN_14375fef0(void)

undefined4 *
FUN_14375fef0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  *param_2 = 0;
  *param_3 = *param_5;
  return param_2;
}



// FUNCTION 14375ff10 FUN_14375ff10 body=35 status=ok
// SIG undefined FUN_14375ff10(void)

undefined4 *
FUN_14375ff10(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ushort *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_5;
  if ((char)param_5[4] != '\0') {
    uVar1 = -uVar1;
  }
  *param_3 = uVar1 >> 8 | uVar1 << 8;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14375ff40 FUN_14375ff40 body=55 status=ok
// SIG undefined FUN_14375ff40(void)

undefined4 *
FUN_14375ff40(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  uVar2 = uVar1 >> 8 | uVar1 << 8;
  if ((short)uVar2 < 0) {
    lVar3 = (longlong)~(int)(short)uVar2 + 1;
  }
  else {
    lVar3 = (longlong)(short)uVar2;
  }
  *param_2 = 0;
  *param_5 = lVar3;
  *(byte *)(param_5 + 1) = (byte)uVar1 >> 7;
  return param_2;
}



// FUNCTION 14375ff80 FUN_14375ff80 body=22 status=ok
// SIG undefined FUN_14375ff80(void)

undefined4 *
FUN_14375ff80(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  
  *param_2 = 0;
  uVar1 = *param_5;
  *param_3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return param_2;
}



// FUNCTION 14375ffa0 FUN_14375ffa0 body=29 status=ok
// SIG undefined FUN_14375ffa0(void)

undefined4 *
FUN_14375ffa0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)
             (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 14375ffc0 FUN_14375ffc0 body=28 status=ok
// SIG undefined FUN_14375ffc0(void)

undefined4 *
FUN_14375ffc0(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((char)param_5[2] != '\0') {
    iVar1 = -iVar1;
  }
  *param_3 = iVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14375ffe0 FUN_14375ffe0 body=47 status=ok
// SIG undefined FUN_14375ffe0(void)

undefined4 *
FUN_14375ffe0(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_3;
  lVar2 = (longlong)iVar1;
  if (iVar1 < 0) {
    lVar2 = (longlong)(-1 - iVar1) + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)((uint)iVar1 >> 0x1f);
  return param_2;
}



// FUNCTION 143760010 FUN_143760010 body=21 status=ok
// SIG undefined FUN_143760010(void)

undefined4 *
FUN_143760010(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_2 = 0;
  *param_3 = *param_5;
  return param_2;
}



// FUNCTION 143760030 FUN_143760030 body=30 status=ok
// SIG undefined FUN_143760030(void)

undefined4 *
FUN_143760030(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = *param_5;
  if ((char)param_5[2] != '\0') {
    uVar1 = -uVar1;
  }
  *param_3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143760050 FUN_143760050 body=49 status=ok
// SIG undefined FUN_143760050(void)

undefined4 *
FUN_143760050(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if ((int)uVar2 < 0) {
    lVar3 = (longlong)(int)(-1 - uVar2) + 1;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
  }
  *param_2 = 0;
  *param_5 = lVar3;
  *(byte *)(param_5 + 1) = (byte)uVar1 >> 7;
  return param_2;
}



// FUNCTION 143760090 FUN_143760090 body=24 status=ok
// SIG undefined FUN_143760090(void)

undefined4 *
FUN_143760090(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  uVar1 = *param_5;
  *param_3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
             (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
             (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  return param_2;
}



// FUNCTION 1437600b0 FUN_1437600b0 body=28 status=ok
// SIG undefined FUN_1437600b0(void)

undefined4 *
FUN_1437600b0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
             (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
             (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 1437600d0 FUN_1437600d0 body=30 status=ok
// SIG undefined FUN_1437600d0(void)

undefined4 *
FUN_1437600d0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  lVar1 = *param_5;
  if ((char)param_5[1] != '\0') {
    lVar1 = -lVar1;
  }
  *param_3 = lVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437600f0 FUN_1437600f0 body=37 status=ok
// SIG undefined FUN_1437600f0(void)

undefined4 *
FUN_1437600f0(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,
             double param_5)

{
  *param_2 = 0;
  *param_3 = (short)((uint)(float)param_5 >> 0x10);
  return param_2;
}



// FUNCTION 143760120 FUN_143760120 body=125 status=ok
// SIG undefined FUN_143760120(void)

undefined8 * FUN_143760120(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::EndianFloatImplN<hkHalf16,hkEndian::EndianType<hkHalf16,1>_>::
             vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1437601a0 FUN_1437601a0 body=33 status=ok
// SIG undefined FUN_1437601a0(void)

undefined4 *
FUN_1437601a0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_5;
  if ((char)param_5[1] != '\0') {
    uVar1 = -uVar1;
  }
  *param_3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
             (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
             (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437601d0 FUN_1437601d0 body=42 status=ok
// SIG undefined FUN_1437601d0(void)

undefined4 *
FUN_1437601d0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_3;
  uVar2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  if ((longlong)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  *param_2 = 0;
  *param_5 = uVar2;
  *(byte *)(param_5 + 1) = (byte)uVar1 >> 7;
  return param_2;
}



// FUNCTION 143760200 FUN_143760200 body=41 status=ok
// SIG undefined FUN_143760200(void)

undefined4 *
FUN_143760200(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             double param_5)

{
  ushort uVar1;
  
  *param_2 = 0;
  uVar1 = (ushort)((uint)(float)param_5 >> 0x10);
  *param_3 = uVar1 >> 8 | uVar1 << 8;
  return param_2;
}



// FUNCTION 143760230 FUN_143760230 body=46 status=ok
// SIG undefined FUN_143760230(void)

undefined4 *
FUN_143760230(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             double *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)(float)((int)(short)(uVar1 >> 8 | uVar1 << 8) << 0x10);
  return param_2;
}



// FUNCTION 143760260 FUN_143760260 body=125 status=ok
// SIG undefined FUN_143760260(void)

undefined8 * FUN_143760260(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::EndianFloatImplN<hkHalf16,hkEndian::EndianType<hkHalf16,0>_>::
             vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1437602e0 FUN_1437602e0 body=21 status=ok
// SIG undefined FUN_1437602e0(void)

undefined4 *
FUN_1437602e0(undefined8 param_1,undefined4 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  *param_2 = 0;
  *param_3 = *param_5;
  return param_2;
}



// FUNCTION 143760300 FUN_143760300 body=35 status=ok
// SIG undefined FUN_143760300(void)

undefined4 *
FUN_143760300(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double *param_5)

{
  float fVar1;
  
  fVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)fVar1;
  return param_2;
}



// FUNCTION 143760330 FUN_143760330 body=125 status=ok
// SIG undefined FUN_143760330(void)

undefined8 * FUN_143760330(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::EndianFloatImplN<float,hkEndian::EndianType<float,1>_>::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1437603b0 FUN_1437603b0 body=29 status=ok
// SIG undefined FUN_1437603b0(void)

undefined4 *
FUN_1437603b0(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,char *param_5)

{
  char cVar1;
  
  cVar1 = *param_5;
  if (param_5[8] != '\0') {
    cVar1 = -cVar1;
  }
  *param_3 = cVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437603d0 FUN_1437603d0 body=35 status=ok
// SIG undefined FUN_1437603d0(void)

undefined4 *
FUN_1437603d0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,double param_5
             )

{
  float fVar1;
  
  fVar1 = (float)param_5;
  *param_2 = 0;
  *param_3 = (uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 | ((uint)fVar1 & 0xff00) << 8 |
             (int)fVar1 << 0x18;
  return param_2;
}



// FUNCTION 143760400 FUN_143760400 body=37 status=ok
// SIG undefined FUN_143760400(void)

undefined4 *
FUN_143760400(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             double *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)(float)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18);
  return param_2;
}



// FUNCTION 143760430 FUN_143760430 body=125 status=ok
// SIG undefined FUN_143760430(void)

undefined8 * FUN_143760430(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::EndianFloatImplN<float,hkEndian::EndianType<float,0>_>::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1437604b0 FUN_1437604b0 body=22 status=ok
// SIG undefined FUN_1437604b0(void)

undefined4 *
FUN_1437604b0(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,
             undefined2 *param_5)

{
  *param_2 = 0;
  *param_3 = *param_5;
  return param_2;
}



// FUNCTION 1437604d0 FUN_1437604d0 body=125 status=ok
// SIG undefined FUN_1437604d0(void)

undefined8 * FUN_1437604d0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::EndianFloatImplN<double,hkEndian::EndianType<double,1>_>::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143760550 FUN_143760550 body=86 status=ok
// SIG undefined FUN_143760550(void)

undefined1 FUN_143760550(undefined8 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  puVar2 = (undefined8 *)FUN_1437149e0(param_1,local_28,&DAT_1467dfe60);
  puVar1 = (undefined1 *)*puVar2;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if (puVar1 != (undefined1 *)0x0) {
    return *puVar1;
  }
  return param_2;
}



// FUNCTION 1437605b0 FUN_1437605b0 body=181 status=ok
// SIG undefined FUN_1437605b0(void)

undefined8 * FUN_1437605b0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong local_res8;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkPropertyRegistry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_143734b10(param_1 + 7);
  param_1[9] = 0;
  FUN_14370d870(param_1 + 10,0);
  plVar2 = (longlong *)FUN_14371d640();
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x38))(plVar2,&local_res8,FUN_143760fe0,param_1);
  uVar1 = *puVar3;
  *puVar3 = 0;
  if (param_1[9] != 0) {
    FUN_14370c150();
  }
  param_1[9] = uVar1;
  if (local_res8 != 0) {
    FUN_14370c150();
  }
  return param_1;
}



// FUNCTION 143760670 FUN_143760670 body=312 status=ok
// SIG undefined FUN_143760670(void)

void FUN_143760670(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  *param_1 = hkPropertyRegistry::vftable;
  uVar6 = uVar4;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      lVar1 = param_1[3];
      if (*(char *)(lVar1 + 8 + uVar6) != '\0') {
        if (*(longlong *)(*(longlong *)(lVar1 + uVar6) + 8) != 0) {
          FUN_14370c8e0();
        }
        lVar1 = *(longlong *)(lVar1 + uVar6);
        if (lVar1 != 0) {
          pvVar2 = TlsGetValue(DAT_146b7bf70);
          if (pvVar2 == (LPVOID)0x0) {
            pvVar2 = DAT_146b7bf68;
          }
          (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                    (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x18);
        }
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar6 = uVar6 + 0x10;
    } while ((int)uVar5 < *(int *)(param_1 + 4));
  }
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_14370c150();
  }
  thunk_FUN_143734820(param_1 + 7);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar3,param_1[5],0x18,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar3,param_1[3],0x10,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437607b0 FUN_1437607b0 body=166 status=ok
// SIG undefined FUN_1437607b0(void)

ulonglong FUN_1437607b0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  lVar2 = *param_2;
  local_20 = 0;
  local_28 = lVar2;
  if (lVar2 != 0) {
    iVar3 = FUN_14370c910(lVar2);
    local_20 = iVar3 + lVar2;
  }
  lVar2 = *param_1;
  local_10 = 0;
  local_18 = lVar2;
  if (lVar2 != 0) {
    iVar3 = FUN_14370c910(lVar2);
    local_10 = iVar3 + lVar2;
  }
  uVar4 = FUN_143750f00(&local_18,&local_28);
  if ((int)uVar4 == 0) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar4 = (ulonglong)uVar1;
    if (*(uint *)(param_1 + 1) == uVar1) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143760860 FUN_143760860 body=139 status=ok
// SIG undefined FUN_143760860(void)

longlong FUN_143760860(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143760670();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x78;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 1437608f0 FUN_1437608f0 body=138 status=ok
// SIG undefined FUN_1437608f0(void)

longlong FUN_1437608f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = FUN_143760e30(param_2);
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  lVar1 = param_1[2] + uVar5 * 8;
  iVar2 = *(int *)(param_1[2] + 4 + uVar5 * 8);
  while( true ) {
    if (iVar2 < 0) {
      return 0;
    }
    cVar3 = FUN_1437607b0(*param_1 + (longlong)iVar2 * 0x18,param_2);
    if (cVar3 != '\0') break;
    uVar5 = (ulonglong)((int)uVar5 + 1U & *(uint *)(param_1 + 3));
    lVar1 = param_1[2] + uVar5 * 8;
    iVar2 = *(int *)(param_1[2] + 4 + uVar5 * 8);
  }
  return lVar1;
}



// FUNCTION 143760980 FUN_143760980 body=136 status=ok
// SIG undefined FUN_143760980(void)

void FUN_143760980(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar5 + *(longlong *)(param_1 + 0x18));
      if ((*(int *)(puVar1 + 2) == -1) && (iVar2 = FUN_1436eed80(param_2,puVar1), iVar2 != -1)) {
        uVar3 = FUN_143760cc0(*puVar1);
        *(undefined4 *)(puVar1 + 2) = uVar3;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x000143760a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 143760a10 FUN_143760a10 body=55 status=ok
// SIG undefined FUN_143760a10(void)

void FUN_143760a10(byte *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*param_1 & 1) != 0) {
    lVar1 = FUN_143760a50();
    *(undefined2 *)(lVar1 + 0x14) = 0x101;
    uVar2 = FUN_143760a50(param_1);
    FUN_1437613f0(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 143760a50 FUN_143760a50 body=113 status=ok
// SIG undefined FUN_143760a50(void)

undefined8 * FUN_143760a50(ulonglong *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if ((*param_1 & 1) != 0) {
    return (undefined8 *)(*param_1 & 0xfffffffffffffffe);
  }
  *param_1 = *param_1 | 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *param_1 = *param_1 & 1;
    *param_1 = *param_1 | (ulonglong)puVar2;
    return puVar2;
  }
  *param_1 = *param_1 & 1;
  *param_1 = *param_1;
  return (undefined8 *)0x0;
}



// FUNCTION 143760ad0 FUN_143760ad0 body=41 status=ok
// SIG undefined FUN_143760ad0(void)

uint FUN_143760ad0(longlong param_1)

{
  ushort *puVar1;
  
  if (param_1 != 0) {
    puVar1 = (ushort *)FUN_14374a2a0();
    return (uint)*puVar1 | (uint)*(undefined8 *)puVar1 & 0xffff0000;
  }
  return 0xffffffff;
}



// FUNCTION 143760b00 FUN_143760b00 body=305 status=ok
// SIG undefined FUN_143760b00(void)

longlong *
FUN_143760b00(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,int param_5)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  local_30 = FUN_143760ad0(param_3);
  if (param_4 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_14370c870(param_4);
  }
  uVar3 = local_38;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (param_5 == -1) {
      param_5 = FUN_143760cc0(param_3);
    }
    *puVar2 = param_3;
    puVar2[1] = uVar3;
    *(int *)(puVar2 + 2) = param_5;
  }
  uStack_20 = CONCAT31(uStack_20._1_3_,1);
  local_res8 = puVar2;
  local_28 = puVar2;
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1 + 0x18,0x10);
  }
  puVar4 = (undefined4 *)((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18))
  ;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = (undefined4)local_28;
    puVar4[1] = local_28._4_4_;
    puVar4[2] = uStack_20;
    puVar4[3] = uStack_1c;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  FUN_143760e80(param_1 + 0x28,&local_38,&local_res8);
  *param_2 = (longlong)puVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return param_2;
}



// FUNCTION 143760c40 FUN_143760c40 body=122 status=ok
// SIG undefined FUN_143760c40(void)

undefined8 FUN_143760c40(longlong *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = FUN_14371d640();
  if (lVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    lVar1 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar2 + 0x58),0x78);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_1437605b0(lVar1);
    }
    if (*param_1 != 0) {
      FUN_14370c150();
    }
    *param_1 = lVar1;
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 143760cc0 FUN_143760cc0 body=157 status=ok
// SIG undefined FUN_143760cc0(void)

uint FUN_143760cc0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  uVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return uVar1;
    }
    pbVar4 = (byte *)FUN_143715390(param_1,local_res8);
    uVar8 = uVar1 | 1;
    if ((~*pbVar4 & 1) != 0) {
      uVar8 = uVar1;
    }
    cVar2 = FUN_143760550(param_1,0);
    if (cVar2 != '\0') {
      uVar8 = uVar8 | 2;
    }
    puVar5 = (undefined8 *)FUN_143714490(param_1,1);
    bVar3 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar5;
    }
    lVar7 = 0;
    if ((bVar3 & 0xf) == 6) {
      lVar7 = param_1;
    }
    if (lVar7 == 0) break;
    plVar6 = (longlong *)FUN_143714420(lVar7,2);
    uVar1 = uVar8;
    if (plVar6 == (longlong *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = *plVar6;
    }
  }
  return uVar8;
}



// FUNCTION 143760d60 FUN_143760d60 body=197 status=ok
// SIG undefined FUN_143760d60(void)

longlong *
FUN_143760d60(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_res8;
  undefined8 local_28;
  undefined4 local_20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  local_28 = param_4;
  local_20 = FUN_143760ad0(param_3);
  local_res8 = 0;
  lVar1 = FUN_1437608f0(param_1 + 0x28,&local_28);
  if (lVar1 == 0) {
    plVar2 = &local_res8;
  }
  else {
    plVar2 = (longlong *)
             (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar1 + 4) * 0x18 + 0x10);
  }
  if (*plVar2 == 0) {
    FUN_143760b00(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    *param_2 = *plVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return param_2;
}



// FUNCTION 143760e30 FUN_143760e30 body=70 status=ok
// SIG undefined FUN_143760e30(void)

uint FUN_143760e30(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_143740180();
    uVar2 = (ulonglong)uVar1;
  }
  uVar1 = (int)param_1[1] * -0x61c8864f;
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
          (int)param_1[1] * -0x4f000000;
  return (int)(uVar2 >> 2) + (int)uVar2 + uVar1 * 0x40 + -0x61c88647 ^ uVar1;
}



// FUNCTION 143760e80 FUN_143760e80 body=290 status=ok
// SIG undefined FUN_143760e80(void)

ulonglong FUN_143760e80(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar7 = FUN_143760e30(param_2);
  iVar3 = *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar7) * 8);
  puVar1 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar7) * 8);
  while( true ) {
    if (iVar3 < 0) {
      uVar4 = *(uint *)(param_1 + 1);
      *puVar1 = uVar7;
      puVar1[1] = uVar4;
      uVar8 = FUN_143703a50();
      if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar8,param_1,0x18);
      }
      puVar2 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      uVar8 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar8;
      uVar9 = *param_3;
      puVar2[2] = uVar9;
      return CONCAT71((int7)(uVar9 >> 8),1);
    }
    cVar6 = FUN_1437607b0(*param_1 + (longlong)(int)puVar1[1] * 0x18,param_2);
    if (cVar6 != '\0') break;
    lVar5 = param_1[2];
    uVar9 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar3 = *(int *)(lVar5 + 4 + uVar9 * 8);
    puVar1 = (uint *)(lVar5 + uVar9 * 8);
  }
  uVar9 = *param_3;
  *(ulonglong *)(*param_1 + 0x10 + (longlong)(int)puVar1[1] * 0x18) = uVar9;
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 143760fb0 FUN_143760fb0 body=44 status=ok
// SIG undefined FUN_143760fb0(void)

undefined8
FUN_143760fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143760d60(DAT_146b83c30,param_1,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 143760fe0 FUN_143760fe0 body=79 status=ok
// SIG undefined FUN_143760fe0(void)

void FUN_143760fe0(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_143760980(param_2,param_1);
  FUN_143761200(param_2,param_1 + 0x10);
  local_18 = *(undefined4 *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  uStack_10 = *(undefined4 *)(param_1 + 0x28);
  uStack_c = *(undefined4 *)(param_1 + 0x2c);
  FUN_1437612a0(param_2,&local_18);
  FUN_143761030(param_2);
  return;
}



// FUNCTION 143761030 FUN_143761030 body=162 status=ok
// SIG undefined FUN_143761030(void)

void FUN_143761030(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *local_res8;
  longlong local_28;
  undefined4 local_20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1437347e0(param_1 + 0x38);
  }
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      local_res8 = *(longlong **)(uVar3 + *(longlong *)(param_1 + 0x18));
      if (*local_res8 != 0) {
        local_28 = local_res8[1];
        local_20 = FUN_143760ad0();
        FUN_143760e80(param_1 + 0x28,&local_28,&local_res8);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 0x10;
    } while ((int)uVar1 < *(int *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0001437610cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 1437610e0 FUN_1437610e0 body=59 status=ok
// SIG undefined FUN_1437610e0(void)

undefined8 FUN_1437610e0(void)

{
  char cVar1;
  
  if (DAT_146b83c30 != 0) {
    cVar1 = FUN_143744aa0();
    if (cVar1 != '\0') {
      FUN_143761120(DAT_146b83c30,DAT_146b83c00);
      return 0;
    }
  }
  return 0x80040200;
}



// FUNCTION 143761120 FUN_143761120 body=215 status=ok
// SIG undefined FUN_143761120(void)

void FUN_143761120(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  plVar2 = (longlong *)FUN_14371d640();
  for (; param_2 != (undefined8 *)0x0; param_2 = (undefined8 *)param_2[3]) {
    if ((*(int *)(param_2 + 2) == -1) &&
       (lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,*param_2), lVar3 != 0)) {
      uVar1 = FUN_143760cc0(lVar3);
      *(undefined4 *)(param_2 + 2) = uVar1;
    }
    uStack_10 = uStack_10 & 0xffffff00;
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_1 + 0x18,0x10);
    }
    puVar5 = (undefined4 *)
             ((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18));
    if (puVar5 != (undefined4 *)0x0) {
      local_18 = SUB84(param_2,0);
      uStack_14 = (undefined4)((ulonglong)param_2 >> 0x20);
      *puVar5 = local_18;
      puVar5[1] = uStack_14;
      puVar5[2] = uStack_10;
      puVar5[3] = uStack_c;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  FUN_143761030(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001437611f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 143761200 FUN_143761200 body=150 status=ok
// SIG undefined FUN_143761200(void)

void FUN_143761200(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  uVar4 = 0;
  uVar5 = uVar4;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + uVar5);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 8 + uVar5) != '\0') &&
         (iVar2 = FUN_1436eed80(param_2,puVar1), iVar2 != -1)) {
        *puVar1 = 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 0x10;
    } while ((int)uVar3 < *(int *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00014376128f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 1437612a0 FUN_1437612a0 body=150 status=ok
// SIG undefined FUN_1437612a0(void)

void FUN_1437612a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x20) * 2;
  for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
    plVar1 = (longlong *)*puVar4;
    if (*(char *)(puVar4 + 1) != '\0') {
      plVar2 = (longlong *)param_2[1];
      for (plVar3 = (longlong *)*param_2; plVar3 != plVar2; plVar3 = plVar3 + 2) {
        if (*plVar1 == *plVar3) {
          *plVar1 = plVar3[1];
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014376132f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 143761340 FUN_143761340 body=51 status=ok
// SIG undefined FUN_143761340(void)

undefined1 FUN_143761340(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143760a50();
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined1 *)(lVar1 + 0x14) = 1;
  FUN_1437613f0(param_1,lVar1);
  return 1;
}



// FUNCTION 143761380 FUN_143761380 body=53 status=ok
// SIG undefined FUN_143761380(void)

undefined1 FUN_143761380(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143760a50();
  *(undefined8 *)(lVar1 + 8) = param_2;
  *(undefined1 *)(lVar1 + 0x15) = 1;
  FUN_1437613f0(param_1,lVar1);
  return 1;
}



// FUNCTION 1437613c0 FUN_1437613c0 body=48 status=ok
// SIG undefined FUN_1437613c0(void)

undefined1 FUN_1437613c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143760a50();
  *puVar1 = param_2;
  FUN_1437613f0(param_1,puVar1);
  return 1;
}



// FUNCTION 1437613f0 FUN_1437613f0 body=125 status=ok
// SIG undefined FUN_1437613f0(void)

void FUN_1437613f0(ulonglong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  LPVOID pvVar2;
  undefined1 local_res10 [24];
  
  if (((*param_2 != 0) && (*(char *)((longlong)param_2 + 0x15) != '\0')) &&
     (*(char *)((longlong)param_2 + 0x14) != '\0')) {
    *param_1 = *param_1 & 0xfffffffffffffffe;
    puVar1 = (ulonglong *)FUN_143760fb0(local_res10,*param_2,param_2[1],(int)param_2[2]);
    *param_1 = (ulonglong)(((uint)*puVar1 ^ (uint)*param_1) & 1) ^ *puVar1;
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),param_2,0x18);
  }
  return;
}



// FUNCTION 143761470 FUN_143761470 body=35 status=ok
// SIG undefined FUN_143761470(void)

undefined8 FUN_143761470(void)

{
  if (DAT_146b83c30 != 0) {
    FUN_1437614a0(DAT_146b83c30,DAT_146b83c00);
  }
  return 0;
}



// FUNCTION 1437614a0 FUN_1437614a0 body=349 status=ok
// SIG undefined FUN_1437614a0(void)

void FUN_1437614a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  do {
    if (param_2 == 0) {
      FUN_143761030(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001437615f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
      return;
    }
    iVar5 = 0;
    lVar1 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      plVar4 = *(longlong **)(param_1 + 0x18);
      do {
        if ((*plVar4 == param_2) && ((char)plVar4[1] == '\0')) goto LAB_143761506;
        iVar5 = iVar5 + 1;
        lVar1 = lVar1 + 1;
        plVar4 = plVar4 + 2;
      } while (lVar1 < *(int *)(param_1 + 0x20));
    }
    iVar5 = -1;
    lVar1 = -1;
LAB_143761506:
    if (lVar1 == -1) {
      FUN_1437134a0(local_228,local_208,0x200);
      pcVar7 = "empty!";
      if (*(char **)(param_2 + 8) != (char *)0x0) {
        pcVar7 = *(char **)(param_2 + 8);
      }
      uVar2 = Electra::FHTTPResourceRequest::URL
                        (local_228,"Could not find static property to unregister - ");
      uVar2 = Electra::FHTTPResourceRequest::URL(uVar2,pcVar7);
      Electra::FHTTPResourceRequest::URL(uVar2,", ignoring.");
      FUN_143732520(0xabba803d,local_208,"Types\\Properties\\hkPropertyRegistry.cpp",0xde);
      FUN_143713520(local_228);
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      if (*(int *)(param_1 + 0x20) != iVar5) {
        lVar6 = 2;
        puVar3 = (undefined8 *)(lVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
        lVar1 = ((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18)) -
                (longlong)puVar3;
        do {
          *puVar3 = *(undefined8 *)(lVar1 + (longlong)puVar3);
          puVar3 = puVar3 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    param_2 = *(longlong *)(param_2 + 0x18);
  } while( true );
}



// FUNCTION 143761600 FUN_143761600 body=152 status=ok
// SIG undefined FUN_143761600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143761600(double *param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar2 = *param_1;
  dVar5 = param_1[1];
  auVar3._0_8_ = -(ulonglong)(((ulonglong)dVar2 & 0x7ff0000000000000) == 0x7ff0000000000000);
  auVar3._8_8_ = -(ulonglong)(((ulonglong)dVar5 & 0x7ff0000000000000) == 0x7ff0000000000000);
  if (((SUB161(auVar3 >> 7,0) & 1) == 0 && (auVar3._8_8_ >> 7 & 1) == 0) &&
     (auVar4._0_8_ = -(ulonglong)
                      (((ulonglong)param_1[2] & 0x7ff0000000000000) == 0x7ff0000000000000),
     auVar4._8_8_ = -(ulonglong)(((ulonglong)param_1[3] & 0x7ff0000000000000) == 0x7ff0000000000000)
     , (SUB161(auVar4 >> 7,0) & 1) == 0 && (auVar4._8_8_ >> 7 & 1) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  dVar2 = param_1[2] * param_1[2] + dVar2 * dVar2;
  dVar5 = param_1[3] * param_1[3] + dVar5 * dVar5;
  auVar6._8_4_ = SUB84(dVar5,0);
  auVar6._0_8_ = dVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  if ((bVar1) && (ABS((auVar6._8_8_ + dVar2) - _DAT_1467f0b30) < param_2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1437616a0 FUN_1437616a0 body=27 status=ok
// SIG undefined FUN_1437616a0(void)

bool FUN_1437616a0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_143761600(param_1,0x3f50624de0000000);
  return iVar1 != 0;
}



// FUNCTION 1437616c0 getRandInt16 body=29 status=ok
// SIG undefined getRandInt16(void)

ulonglong hkPseudoRandomGenerator::getRandInt16(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 4) = uVar1;
  return (ulonglong)(uVar1 >> 0xb) % (ulonglong)param_2;
}



// FUNCTION 1437616e0 FUN_1437616e0 body=32 status=ok
// SIG undefined FUN_1437616e0(void)

float FUN_1437616e0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 4) = uVar1;
  return (float)uVar1 * 2.3283064e-10;
}



// FUNCTION 143761700 FUN_143761700 body=143 status=ok
// SIG undefined FUN_143761700(void)

void FUN_143761700(undefined8 param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_1437616e0();
  *param_2 = fVar1 * 2.0 - 1.0;
  fVar1 = (float)FUN_1437616e0(param_1);
  param_2[1] = fVar1 * 2.0 - 1.0;
  fVar1 = (float)FUN_1437616e0(param_1);
  param_2[2] = fVar1 * 2.0 - 1.0;
  fVar1 = (float)FUN_1437616e0(param_1);
  param_2[3] = fVar1 * 2.0 - 1.0;
  return;
}



// FUNCTION 143761790 FUN_143761790 body=1701 status=ok
// SIG undefined FUN_143761790(void)

void FUN_143761790(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  int local_2b4;
  longlong local_2a8;
  int local_2a0;
  uint local_29c;
  longlong local_288;
  undefined4 local_280;
  uint local_27c;
  longlong local_270;
  undefined4 local_268;
  uint local_264;
  longlong local_258;
  undefined1 local_248 [520];
  
  local_270 = 0;
  local_268 = 0;
  local_264 = 0x80000000;
  local_288 = 0;
  local_280 = 0;
  local_27c = 0x80000000;
  if ((param_3 == param_1) || (param_3 == param_2)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  plVar17 = &local_270;
  if (!bVar6) {
    plVar17 = param_3;
  }
  if ((param_4 == param_1) || (param_4 == param_2)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  *(undefined4 *)(plVar17 + 1) = 0;
  plVar23 = &local_288;
  if (!bVar5) {
    plVar23 = param_4;
  }
  *(undefined4 *)(plVar23 + 1) = 0;
  iVar7 = (int)param_1[1];
  if (iVar7 < (int)param_2[1]) {
    if (plVar23 != param_1) {
      *(undefined4 *)(plVar23 + 1) = 0;
      iVar7 = (int)param_1[1];
      lVar18 = (longlong)iVar7;
      lVar20 = *param_1;
      uVar9 = FUN_143703a50();
      uVar10 = *(uint *)((longlong)plVar23 + 0xc) & 0x3fffffff;
      iVar16 = (int)plVar23[1] + iVar7;
      if (((int)uVar10 < iVar16) && ((int)uVar10 < iVar16)) {
        iVar15 = iVar16;
        if (iVar16 < (int)(uVar10 * 2)) {
          iVar15 = uVar10 * 2;
        }
        FUN_14370c310(uVar9,plVar23,iVar15,4);
      }
      puVar14 = (undefined4 *)(*plVar23 + (longlong)(int)plVar23[1] * 4);
      if (0 < iVar7) {
        lVar20 = lVar20 - (longlong)puVar14;
        do {
          *puVar14 = *(undefined4 *)(lVar20 + (longlong)puVar14);
          puVar14 = puVar14 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      *(int *)(plVar23 + 1) = iVar16;
    }
  }
  else if ((int)param_2[1] == 0) {
    FUN_1437134a0(&local_2a8,local_248,0x200);
    Electra::FHTTPResourceRequest::URL(&local_2a8,"Division by zero");
    iVar7 = FUN_143732300(0x21b66586,local_248,"Math\\ExtendedMath\\hkMpMath.cpp",0x102);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_143713520(&local_2a8);
  }
  else {
    if (plVar23 != param_1) {
      *(undefined4 *)(plVar23 + 1) = 0;
      iVar16 = (int)param_1[1];
      lVar18 = (longlong)iVar16;
      lVar20 = *param_1;
      uVar9 = FUN_143703a50();
      uVar10 = *(uint *)((longlong)plVar23 + 0xc) & 0x3fffffff;
      iVar15 = (int)plVar23[1] + iVar16;
      if (((int)uVar10 < iVar15) && ((int)uVar10 < iVar15)) {
        iVar3 = iVar15;
        if (iVar15 < (int)(uVar10 * 2)) {
          iVar3 = uVar10 * 2;
        }
        FUN_14370c310(uVar9,plVar23,iVar3);
      }
      puVar14 = (undefined4 *)(*plVar23 + (longlong)(int)plVar23[1] * 4);
      if (0 < iVar16) {
        lVar20 = lVar20 - (longlong)puVar14;
        do {
          *puVar14 = *(undefined4 *)(lVar20 + (longlong)puVar14);
          puVar14 = puVar14 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      *(int *)(plVar23 + 1) = iVar15;
    }
    uVar11 = 0;
    uVar9 = FUN_143703a50();
    if (*(uint *)(plVar23 + 1) == (*(uint *)((longlong)plVar23 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar9,plVar23,4);
    }
    *(undefined4 *)(*plVar23 + (longlong)(int)plVar23[1] * 4) = 0;
    *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
    iVar16 = (int)plVar23[1];
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 0x80000000;
    uVar9 = FUN_143703a50();
    if ((int)(local_29c & 0x3fffffff) < iVar16) {
      iVar3 = (local_29c & 0x3fffffff) * 2;
      iVar15 = iVar16;
      if (iVar16 < iVar3) {
        iVar15 = iVar3;
      }
      FUN_14370c310(uVar9,&local_2a8,iVar15);
    }
    if (0 < iVar16 - local_2a0) {
      puVar14 = (undefined4 *)(local_2a8 + (longlong)local_2a0 * 4);
      for (lVar20 = (longlong)(iVar16 - local_2a0); lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
    }
    iVar15 = (iVar7 - (int)param_2[1]) + 1;
    local_2a0 = iVar16;
    uVar9 = FUN_143703a50();
    uVar10 = *(uint *)((longlong)plVar17 + 0xc) & 0x3fffffff;
    if ((int)uVar10 < iVar15) {
      iVar3 = uVar10 * 2;
      iVar16 = iVar15;
      if (iVar15 < iVar3) {
        iVar16 = iVar3;
      }
      FUN_14370c310(uVar9,plVar17,iVar16);
    }
    *(int *)(plVar17 + 1) = iVar15;
    uVar13 = uVar11;
    if (0 < iVar15) {
      do {
        uVar10 = (int)uVar13 + 1;
        *(undefined4 *)(uVar11 + *plVar17) = 0;
        uVar11 = uVar11 + 4;
        uVar13 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)plVar17[1]);
    }
    local_2b4 = (int)plVar17[1] + -1;
    local_258 = (longlong)iVar7;
    if (-1 < local_2b4) {
      lVar18 = (longlong)local_2b4;
      lVar20 = lVar18 * -4;
      do {
        uVar10 = 0x1f;
        *(undefined4 *)(*plVar17 + lVar18 * 4) = 0;
        do {
          iVar16 = (int)param_2[1];
          iVar15 = 0;
          lVar8 = lVar18;
          if (iVar16 < 0) {
LAB_143761b31:
            *(uint *)(*plVar17 + lVar18 * 4) =
                 *(uint *)(*plVar17 + lVar18 * 4) | 1 << (uVar10 & 0x1f);
            while (lVar18 < lVar8) {
              lVar8 = lVar8 + -1;
              *(undefined4 *)(*plVar23 + lVar8 * 4) = *(undefined4 *)(local_2a8 + lVar8 * 4);
            }
          }
          else {
            lVar22 = 0;
            bVar4 = false;
            do {
              if ((lVar22 == 0) || (uVar10 == 0)) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(uint *)(*param_2 + lVar8 * 4 + -4 + lVar20) >>
                         (0x20 - (byte)uVar10 & 0x1f);
              }
              if (iVar15 == iVar16) {
                uVar21 = 0;
              }
              else {
                uVar21 = *(int *)(*param_2 + lVar8 * 4 + lVar20) << ((byte)uVar10 & 0x1f);
              }
              uVar1 = *(uint *)(*plVar23 + lVar8 * 4);
              uVar19 = uVar1 - (uVar21 | uVar19);
              bVar12 = uVar1 < uVar19;
              if (bVar4) {
                bVar12 = bVar12 || uVar19 == 0;
                uVar19 = uVar19 - 1;
              }
              iVar15 = iVar15 + 1;
              lVar22 = lVar22 + 1;
              *(uint *)(local_2a8 + lVar8 * 4) = uVar19;
              lVar8 = lVar8 + 1;
              iVar16 = (int)param_2[1];
              bVar4 = bVar12;
            } while (iVar15 <= iVar16);
            if (!bVar12) goto LAB_143761b31;
            do {
              if (iVar7 <= lVar8) break;
              iVar16 = *(int *)(*plVar23 + lVar8 * 4);
              bVar12 = iVar16 == 0;
              *(int *)(local_2a8 + lVar8 * 4) = iVar16 + -1;
              lVar8 = lVar8 + 1;
            } while (iVar16 == 0);
            if (!bVar12) goto LAB_143761b31;
          }
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
        lVar18 = lVar18 + -1;
        local_2b4 = local_2b4 + -1;
        lVar20 = lVar20 + 4;
      } while (-1 < local_2b4);
    }
    iVar7 = (int)plVar17[1];
    while ((iVar7 != 0 &&
           (iVar7 = (int)plVar17[1] + -1, *(int *)(*plVar17 + (longlong)iVar7 * 4) == 0))) {
      *(int *)(plVar17 + 1) = iVar7;
    }
    iVar7 = (int)plVar23[1];
    while ((iVar7 != 0 &&
           (iVar7 = (int)plVar23[1] + -1, *(int *)(*plVar23 + (longlong)iVar7 * 4) == 0))) {
      *(int *)(plVar23 + 1) = iVar7;
    }
    uVar9 = FUN_143703a50();
    local_2a0 = 0;
    if (-1 < (int)local_29c) {
      FUN_143702e10(uVar9,local_2a8,4,local_29c & 0x3fffffff);
    }
  }
  if ((bVar6) && (param_3 != plVar17)) {
    *(undefined4 *)(param_3 + 1) = 0;
    iVar7 = (int)plVar17[1];
    lVar18 = (longlong)iVar7;
    lVar20 = *plVar17;
    uVar9 = FUN_143703a50();
    uVar10 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    iVar16 = (int)param_3[1] + iVar7;
    if (((int)uVar10 < iVar16) && ((int)uVar10 < iVar16)) {
      iVar15 = iVar16;
      if (iVar16 < (int)(uVar10 * 2)) {
        iVar15 = uVar10 * 2;
      }
      FUN_14370c310(uVar9,param_3,iVar15,4);
    }
    puVar14 = (undefined4 *)(*param_3 + (longlong)(int)param_3[1] * 4);
    if (0 < iVar7) {
      lVar20 = lVar20 - (longlong)puVar14;
      do {
        *puVar14 = *(undefined4 *)(lVar20 + (longlong)puVar14);
        puVar14 = puVar14 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    *(int *)(param_3 + 1) = iVar16;
  }
  if ((bVar5) && (param_4 != plVar23)) {
    *(undefined4 *)(param_4 + 1) = 0;
    iVar7 = (int)plVar23[1];
    lVar18 = (longlong)iVar7;
    lVar20 = *plVar23;
    uVar9 = FUN_143703a50();
    uVar10 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
    iVar16 = (int)param_4[1] + iVar7;
    if (((int)uVar10 < iVar16) && ((int)uVar10 < iVar16)) {
      iVar15 = iVar16;
      if (iVar16 < (int)(uVar10 * 2)) {
        iVar15 = uVar10 * 2;
      }
      FUN_14370c310(uVar9,param_4,iVar15,4);
    }
    puVar14 = (undefined4 *)(*param_4 + (longlong)(int)param_4[1] * 4);
    if (0 < iVar7) {
      lVar20 = lVar20 - (longlong)puVar14;
      do {
        *puVar14 = *(undefined4 *)(lVar20 + (longlong)puVar14);
        puVar14 = puVar14 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    *(int *)(param_4 + 1) = iVar16;
  }
  uVar9 = FUN_143703a50();
  local_280 = 0;
  if (-1 < (int)local_27c) {
    FUN_143702e10(uVar9,local_288,4,local_27c & 0x3fffffff);
  }
  local_288 = 0;
  local_27c = 0x80000000;
  uVar9 = FUN_143703a50();
  local_268 = 0;
  if (-1 < (int)local_264) {
    FUN_143702e10(uVar9,local_270,4,local_264 & 0x3fffffff);
  }
  return;
}



// FUNCTION 143761e40 FUN_143761e40 body=318 status=ok
// SIG undefined FUN_143761e40(void)

void FUN_143761e40(longlong param_1,ulonglong param_2,char *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [128];
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  local_8c = 0x80000080;
  local_98 = local_88;
  local_90 = 1;
  local_88[0] = 0;
  FUN_143761f80(param_1,param_2,&local_98);
  local_128 = local_118;
  local_11c = 0x80000080;
  local_120 = 1;
  local_118[0] = 0;
  FUN_143761f80(param_1 + 0x10,param_2 & 0xffffffff,&local_128);
  puVar1 = &DAT_145af3922;
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar1 = &DAT_145b69768;
  }
  hkStringBuf::printf(param_3,"%s%s/%s",puVar1,local_98,local_128);
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_128,1,local_11c & 0x3fffffff);
  }
  local_128 = (undefined1 *)0x0;
  local_11c = 0x80000000;
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143761f80 FUN_143761f80 body=919 status=ok
// SIG undefined FUN_143761f80(void)

void FUN_143761f80(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_98;
  int local_90;
  uint local_8c;
  longlong local_80;
  uint local_78;
  uint local_74;
  undefined1 *local_68;
  uint local_60;
  uint local_5c;
  undefined1 local_58 [32];
  uint *local_38;
  int local_30;
  uint local_2c;
  
  uVar10 = 0;
  local_68 = local_58;
  local_60 = 0;
  local_5c = 0x80000020;
  if ((int)param_1[1] == 0) {
    uVar4 = FUN_143703a50();
    if (local_60 == (local_5c & 0x3fffffff)) {
      FUN_14370c460(uVar4,&local_68,1);
    }
    local_68[(int)local_60] = 0x30;
    local_60 = local_60 + 1;
  }
  else {
    local_80 = 0;
    local_78 = 0;
    local_74 = 0x80000000;
    FUN_143703a50();
    local_78 = 0;
    if (param_2 != 0) {
      local_78 = 0;
      uVar4 = FUN_143703a50();
      if (local_78 == (local_74 & 0x3fffffff)) {
        FUN_14370c460(uVar4,&local_80,4);
      }
      *(int *)(local_80 + (longlong)(int)local_78 * 4) = param_2;
      local_78 = local_78 + 1;
    }
    local_98 = 0;
    local_8c = 0x80000000;
    local_90 = 0;
    if (&local_98 != param_1) {
      lVar9 = *param_1;
      lVar3 = param_1[1];
      lVar11 = (longlong)(int)lVar3;
      local_90 = 0;
      uVar4 = FUN_143703a50();
      uVar5 = local_8c & 0x3fffffff;
      iVar7 = local_90 + (int)lVar3;
      if (((int)uVar5 < iVar7) && ((int)uVar5 < iVar7)) {
        iVar2 = iVar7;
        if (iVar7 < (int)(uVar5 * 2)) {
          iVar2 = uVar5 * 2;
        }
        FUN_14370c310(uVar4,&local_98,iVar2,4);
      }
      puVar6 = (undefined4 *)(local_98 + (longlong)local_90 * 4);
      local_90 = iVar7;
      if (0 < lVar11) {
        lVar9 = lVar9 - (longlong)puVar6;
        do {
          *puVar6 = *(undefined4 *)(lVar9 + (longlong)puVar6);
          puVar6 = puVar6 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    local_38 = (uint *)0x0;
    local_30 = 0;
    local_2c = 0x80000000;
    while (local_90 != 0) {
      FUN_143761790(&local_98,&local_80,&local_98,&local_38);
      uVar8 = uVar10;
      if (local_30 != 0) {
        uVar8 = (ulonglong)*local_38;
      }
      uVar4 = FUN_143703a50();
      if (local_60 == (local_5c & 0x3fffffff)) {
        FUN_14370c460(uVar4,&local_68,1);
      }
      local_68[(int)local_60] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8];
      local_60 = local_60 + 1;
    }
    uVar8 = uVar10;
    if ((local_60 & 0xfffffffe) != 0 && -1 < (int)local_60) {
      do {
        iVar7 = (int)uVar10;
        uVar1 = local_68[uVar8];
        local_68[uVar8] = local_68[(int)((local_60 - iVar7) + -1)];
        uVar10 = (ulonglong)(iVar7 + 1U);
        local_68[(int)((local_60 - iVar7) + -1)] = uVar1;
        uVar8 = uVar8 + 1;
      } while ((int)(iVar7 + 1U) < (int)local_60 >> 1);
    }
    uVar4 = FUN_143703a50();
    local_30 = 0;
    if (-1 < (int)local_2c) {
      FUN_143702e10(uVar4,local_38,4,local_2c & 0x3fffffff);
    }
    local_38 = (uint *)0x0;
    local_2c = 0x80000000;
    uVar4 = FUN_143703a50();
    local_90 = 0;
    if (-1 < (int)local_8c) {
      FUN_143702e10(uVar4,local_98,4,local_8c & 0x3fffffff);
    }
    local_98 = 0;
    local_8c = 0x80000000;
    uVar4 = FUN_143703a50();
    local_78 = 0;
    if (-1 < (int)local_74) {
      FUN_143702e10(uVar4,local_80,4,local_74 & 0x3fffffff);
    }
  }
  FUN_143746ca0(param_3,local_68,local_60);
  uVar4 = FUN_143703a50();
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(uVar4,local_68,1,local_5c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143762320 FUN_143762320 body=62 status=ok
// SIG undefined FUN_143762320(void)

longlong FUN_143762320(longlong param_1)

{
  FUN_143716620(param_1,"Unknown Heading");
  *(undefined8 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  return param_1;
}



// FUNCTION 143762360 FUN_143762360 body=46 status=ok
// SIG undefined FUN_143762360(void)

undefined8 *
FUN_143762360(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14373eae0();
  FUN_143762c40(*param_2,param_4);
  return param_2;
}



// FUNCTION 143762390 FUN_143762390 body=46 status=ok
// SIG undefined FUN_143762390(void)

undefined8 * FUN_143762390(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_14373ece0();
  FUN_143762c40(*param_2,param_3);
  return param_2;
}



// FUNCTION 1437623c0 FUN_1437623c0 body=85 status=ok
// SIG undefined FUN_1437623c0(void)

undefined8 FUN_1437623c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  plVar2 = (longlong *)FUN_1437149e0(param_1,local_28,&DAT_1467dd3c0);
  puVar1 = (undefined8 *)*plVar2;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return param_2;
}



// FUNCTION 143762420 FUN_143762420 body=368 status=ok
// SIG undefined FUN_143762420(void)

void FUN_143762420(ulonglong *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(uVar1,1);
    uVar8 = 0;
    if (puVar5 == (undefined8 *)0x0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)*puVar5;
    }
    uVar9 = uVar8;
    if ((bVar2 & 0xf) == 7) {
      uVar9 = uVar1;
    }
    if (uVar9 != 0) {
      puVar5 = (undefined8 *)FUN_143714b80(uVar9,local_res10,"syntheticUtil",0);
      FUN_143714040(&local_res8,*puVar5);
      if (1 < local_res8) {
        iVar4 = FUN_143715270(&local_res8);
        local_48 = (longlong)-iVar4 + (longlong)param_1;
        local_40 = uVar9;
        local_38 = FUN_1437151a0(uVar9);
        if ((local_38 & 1) != 0) {
          FUN_1437329e0(local_38 & 0xfffffffffffffffe);
        }
        iVar4 = FUN_143715240(uVar9);
        if (0 < iVar4) {
          do {
            uVar6 = FUN_143714e90(uVar9,local_res10,uVar8);
            cVar3 = FUN_1437141f0(uVar6,&local_res8);
            if (cVar3 == '\0') {
              puVar5 = (undefined8 *)FUN_143714e90(uVar9,local_res18,uVar8);
              FUN_143741f50(&local_48,local_30,*puVar5);
              FUN_1437428e0(local_30,1);
              if ((local_20 & 1) != 0) {
                FUN_143733a60(local_20 & 0xfffffffffffffffe);
              }
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            iVar4 = FUN_143715240(uVar9);
          } while ((int)uVar7 < iVar4);
        }
        if ((local_38 & 1) != 0) {
          FUN_143733a60(local_38 & 0xfffffffffffffffe);
        }
      }
    }
  }
  return;
}



// FUNCTION 143762590 FUN_143762590 body=980 status=ok
// SIG undefined FUN_143762590(void)

undefined8 FUN_143762590(ulonglong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_298;
  longlong local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined1 local_250 [56];
  undefined1 local_218 [80];
  uint local_1c8;
  ulonglong local_1b8;
  code *local_180;
  undefined8 local_138;
  undefined **local_100;
  ulonglong local_f0;
  ulonglong uVar11;
  
  puVar2 = (undefined8 *)FUN_143714490(param_1,1);
  uVar11 = 0;
  bVar9 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    bVar9 = (byte)*puVar2;
  }
  uVar3 = uVar11;
  if ((bVar9 & 0xf) == 7) {
    uVar3 = param_1;
  }
  if (uVar3 != 0) {
    cVar1 = FUN_143762b90(param_1,&local_res18,&local_res8);
    if (cVar1 == '\0') {
      if (1 < DAT_146b83d68) {
        local_res8 = FUN_1437151f0(param_1);
        FUN_14373a730(&local_288,&DAT_146b83d60,2);
        lVar4 = FUN_14373bbd0(&local_288,
                              "Unable to make a synthetic type for {}, no suitable base found. Add a hk::SyntheticBase attribute to an appropriate base."
                              ,&DAT_145b74470,&local_res8,0);
        *(char **)(lVar4 + 0x20) = "Reflect\\Util\\hkReflectSyntheticUtil.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0x96;
        FUN_14373a950(&local_288);
      }
      uVar8 = 0;
    }
    else {
      FUN_143737060(local_218);
      uVar8 = *(undefined8 *)(local_res8 + 8);
      uVar5 = FUN_1437151f0(param_1);
      uVar5 = FUN_14370c870(uVar5);
      FUN_143737ab0(local_218,uVar5,uVar8);
      puVar2 = (undefined8 *)FUN_14374a2a0(local_res8);
      local_138 = *puVar2;
      local_1b8 = local_1b8 | 0x1408040;
      local_180 = FUN_143762970;
      local_100 = &PTR_vftable_1467f5f40;
      local_1c8 = local_1c8 | 0x420;
      local_f0 = (ulonglong)local_1c8;
      FUN_143714d80(local_res8,&local_298);
      if (0 < (int)(local_290 - local_298 >> 3)) {
        do {
          FUN_143714060(&local_res10,*(undefined8 *)(local_298 + (longlong)(int)uVar11 * 8));
          uVar8 = *(undefined8 *)(local_res10 + 8);
          puVar6 = (undefined4 *)FUN_143714f30(&local_res10,&local_res8);
          uVar5 = FUN_1437151c0(&local_res10);
          FUN_143737600(local_218,uVar5,0,*puVar6,uVar8);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)(local_290 - local_298 >> 3));
      }
      hkReflect::DeclIterAll::DeclIterAll(&local_288,param_1,local_res18);
      while ((puVar2 = local_288 + 1, local_288 + 1 < local_280 ||
             (cVar1 = FUN_1437144f0(&local_288), puVar2 = local_288, cVar1 != '\0'))) {
        local_288 = puVar2;
        pbVar7 = (byte *)FUN_143714f30(local_288,&local_res8);
        if ((*pbVar7 & 0x20) != 0) {
          FUN_143714060(&local_res10,*local_288);
          lVar4 = FUN_14371d670(local_res10);
          if (lVar4 == 0) {
            if (1 < DAT_146b83d68) {
              local_res18 = FUN_1437151f0(local_res10);
              local_res20 = FUN_1437151c0(&local_res10);
              FUN_14373a730(local_250,&DAT_146b83d60,2);
              lVar4 = FUN_14373bbd0(local_250,
                                    "Skipping field {} of type {} because there is no native version of it"
                                    ,&DAT_145b744b0,&local_res20,&local_res18,0);
              *(char **)(lVar4 + 0x20) = "Reflect\\Util\\hkReflectSyntheticUtil.cpp";
              *(undefined8 *)(lVar4 + 0x28) = 0xba;
              FUN_14373a950(local_250);
            }
          }
          else {
            uVar8 = FUN_1437151c0(&local_res10);
            uVar8 = hkReflectUtil::internCopy(uVar8,0xffffffff);
            FUN_143737600(local_218,uVar8,0,0,lVar4);
          }
        }
      }
      FUN_143737560(local_218,FUN_143762b40);
      uVar8 = FUN_143703a50();
      uVar8 = FUN_143737a80(local_218,uVar8);
      FUN_143736450(uVar8);
      FUN_143737160(local_218);
    }
    return uVar8;
  }
  return 0;
}



// FUNCTION 143762970 FUN_143762970 body=463 status=ok
// SIG undefined FUN_143762970(void)

void FUN_143762970(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  byte *pbVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  undefined8 local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  uVar9 = (ulonglong)param_3;
  lVar3 = FUN_1437623c0(param_2,0);
  FUN_14374a900(param_1,lVar3,uVar9);
  iVar2 = FUN_1437152f0(param_2);
  lVar10 = (longlong)iVar2;
  puVar4 = (undefined8 *)FUN_143714b80(param_2,local_res20,"syntheticUtil",1);
  FUN_143714040(&local_50,*puVar4);
  if (1 < local_50) {
    if (0 < (int)param_3) {
      uVar5 = (ulonglong)param_3;
      lVar8 = param_1;
      do {
        *(short *)(lVar8 + 0x10) = (short)iVar2;
        *(undefined2 *)(lVar8 + 0x12) = 1;
        lVar8 = lVar8 + lVar10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    iVar2 = FUN_143715270(&local_50);
    puVar4 = (undefined8 *)(iVar2 + param_1);
    uVar5 = uVar9;
    if (0 < (int)param_3) {
      do {
        *puVar4 = param_2;
        puVar4 = (undefined8 *)((longlong)puVar4 + lVar10);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    hkReflect::DeclIterAll::DeclIterAll(&local_48,param_2,*(undefined8 *)(lVar3 + 8));
    while ((puVar4 = local_48 + 1, local_48 + 1 < local_40 ||
           (cVar1 = FUN_1437144f0(&local_48), puVar4 = local_48, cVar1 != '\0'))) {
      local_48 = puVar4;
      pbVar6 = (byte *)FUN_143714f30(local_48,local_res20);
      if ((*pbVar6 & 0x20) != 0) {
        FUN_143714060(&local_58,*local_48);
        cVar1 = FUN_143714140(&local_58,&local_50);
        if (cVar1 == '\0') {
          iVar2 = FUN_143715270(&local_58);
          lVar3 = iVar2 + param_1;
          pcVar7 = (code *)FUN_14374a260(local_58);
          if ((pcVar7 != (code *)0x0) && (uVar5 = uVar9, 0 < (int)param_3)) {
            do {
              (*pcVar7)(lVar3,local_58,1);
              lVar3 = lVar3 + lVar10;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143762b40 FUN_143762b40 body=66 status=ok
// SIG undefined FUN_143762b40(void)

void FUN_143762b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1437151f0();
  FUN_14370c8e0(uVar1);
  FUN_143737c10(param_1,param_2,param_3);
  return;
}



// FUNCTION 143762b90 FUN_143762b90 body=168 status=ok
// SIG undefined FUN_143762b90(void)

ulonglong FUN_143762b90(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint *in_RAX;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  lVar1 = *(longlong *)(param_1 + 8);
  do {
    if (lVar1 == 0) {
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
    lVar4 = FUN_14371d670(lVar1);
    in_RAX = (uint *)0x0;
    if ((lVar4 != 0) && (in_RAX = (uint *)FUN_143715390(lVar4,local_res8), (*in_RAX >> 5 & 1) == 0))
    {
      in_RAX = (uint *)FUN_14374a4c0(local_28,lVar4,&DAT_1467dd3c0);
      puVar2 = *(undefined8 **)in_RAX;
      if ((local_18 & 1) != 0) {
        in_RAX = (uint *)FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      if (puVar2 != (undefined8 *)0x0) {
        *param_2 = lVar1;
        uVar3 = *puVar2;
        *param_3 = uVar3;
        return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
    }
    lVar1 = *(longlong *)(lVar1 + 8);
  } while( true );
}



// FUNCTION 143762c40 FUN_143762c40 body=44 status=ok
// SIG undefined FUN_143762c40(void)

void FUN_143762c40(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  uVar2 = FUN_1437152f0(param_2);
  if (uVar1 != uVar2) {
    *(short *)(param_1 + 0x10) = (short)uVar2;
  }
  return;
}



// FUNCTION 143762c70 FUN_143762c70 body=245 status=ok
// SIG undefined FUN_143762c70(void)

undefined8 * FUN_143762c70(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkRefCountedProperties::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x20);
  lVar6 = (longlong)iVar1;
  lVar9 = *(longlong *)(param_2 + 0x18);
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0x24) & 0x3fffffff;
  iVar8 = *(int *)(param_1 + 4) + iVar1;
  if (((int)uVar5 < iVar8) && ((int)uVar5 < iVar8)) {
    iVar2 = iVar8;
    if (iVar8 < (int)(uVar5 * 2)) {
      iVar2 = uVar5 * 2;
    }
    FUN_14370c310(uVar3,param_1 + 3,iVar2,0x10);
  }
  lVar4 = (longlong)*(int *)(param_1 + 4) * 0x10 + param_1[3];
  if (0 < iVar1) {
    puVar7 = (undefined2 *)(lVar4 + 8);
    lVar9 = lVar9 - lVar4;
    do {
      if ((longlong *)(puVar7 + -4) != (longlong *)0x0) {
        lVar4 = *(longlong *)(lVar9 + -8 + (longlong)puVar7);
        *(longlong *)(puVar7 + -4) = lVar4;
        if (lVar4 != 0) {
          FUN_14370c030();
        }
        *puVar7 = *(undefined2 *)(lVar9 + (longlong)puVar7);
        puVar7[1] = *(undefined2 *)(lVar9 + 2 + (longlong)puVar7);
      }
      puVar7 = puVar7 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 4) = iVar8;
  return param_1;
}



// FUNCTION 143762d70 FUN_143762d70 body=163 status=ok
// SIG undefined FUN_143762d70(void)

void FUN_143762d70(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = hkRefCountedProperties::vftable;
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1[3]);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x10,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143762e20 FUN_143762e20 body=14 status=ok
// SIG undefined FUN_143762e20(void)

undefined1 * FUN_143762e20(undefined1 *param_1,int param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined1 *)(*pcVar1)();
    return puVar2;
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 143762e30 FUN_143762e30 body=28 status=ok
// SIG undefined FUN_143762e30(void)

undefined4 * FUN_143762e30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0xdfb38d3;
  param_1[2] = 0x149aa440;
  *(undefined8 *)(param_1 + 3) = 0x1b3a0c83;
  return param_1;
}



// FUNCTION 143762e50 FUN_143762e50 body=246 status=ok
// SIG undefined FUN_143762e50(void)

undefined8 *
FUN_143762e50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong local_38;
  longlong local_30;
  char *local_28;
  char *local_20;
  undefined1 local_18 [16];
  
  iVar3 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = param_4;
  local_38 = param_5;
  local_30 = 0;
  if (param_5 != 0) {
    iVar2 = FUN_14370c910(param_5);
    local_30 = iVar2 + param_5;
  }
  local_20 = (char *)0x0;
  local_28 = "UnitTest";
  iVar2 = FUN_14370c910("UnitTest");
  local_20 = "UnitTest" + iVar2;
  plVar4 = (longlong *)FUN_143751080(&local_38,local_18,&local_28);
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    iVar3 = FUN_14370c910(lVar1);
    iVar3 = iVar3 + (int)lVar1;
  }
  if (iVar3 - (int)lVar1 < 10) {
    iVar3 = FUN_143751020(&local_38,&DAT_145b9da54);
    if (iVar3 == -1) {
      param_1[4] = param_5;
    }
    else {
      param_1[4] = (longlong)iVar3 + local_38 + 1;
    }
  }
  else {
    param_1[4] = lVar1 + 9;
  }
  return param_1;
}



// FUNCTION 143762f50 FUN_143762f50 body=42 status=ok
// SIG undefined FUN_143762f50(void)

undefined1 * FUN_143762f50(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined1 *)(*(code *)PTR_FUN_1467f5f48)(local_res10);
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 143762f80 FUN_143762f80 body=80 status=ok
// SIG undefined FUN_143762f80(void)

int FUN_143762f80(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[1] << 5 ^ param_1[1];
  *param_1 = *param_1 + 0x542023ab;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x16 ^ uVar3;
  param_1[1] = uVar3;
  uVar1 = param_1[3] + param_1[4] + param_1[2];
  param_1[2] = param_1[3];
  uVar2 = uVar1 & 0x7fffffff;
  param_1[4] = uVar1 >> 0x1f;
  param_1[3] = uVar2;
  return *param_1 + uVar3 + uVar2;
}



// FUNCTION 143762fd0 FUN_143762fd0 body=46 status=ok
// SIG undefined FUN_143762fd0(void)

float FUN_143762fd0(void)

{
  DAT_1467f5f50 = DAT_1467f5f50 * -0x3e39b193 + 0x3039 & 0x7fffffff;
  return (float)DAT_1467f5f50 * 4.656613e-10;
}



// FUNCTION 143763000 FUN_143763000 body=30 status=ok
// SIG undefined FUN_143763000(void)

void FUN_143763000(undefined4 *param_1)

{
  if ((*(short *)(param_1 + 2) < 0) || (DAT_146b83e10 == 0)) {
    *param_1 = 0xfffffff1;
    *(undefined2 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 143763030 FUN_143763030 body=8 status=ok
// SIG undefined FUN_143763030(void)

undefined * FUN_143763030(void)

{
  return &DAT_146b83e20;
}



// FUNCTION 143763040 FUN_143763040 body=36 status=ok
// SIG undefined FUN_143763040(void)

undefined8 FUN_143763040(char param_1)

{
  MXCSR = MXCSR & 0xffff7fff | -(uint)(param_1 != '\0') & 0x8000;
  return 0;
}



// FUNCTION 143763070 getTickCounter body=10 status=ok
// SIG undefined getTickCounter(void)

ulonglong hkSystemClock::getTickCounter(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
}



// FUNCTION 143763080 FUN_143763080 body=328 status=ok
// SIG undefined FUN_143763080(void)

void FUN_143763080(void)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  
  if (DAT_146b83e48 == 0) {
    lVar4 = 100;
    dVar1 = 0.0;
    do {
      lVar2 = hkSystemClock::getTickCounter();
      QueryPerformanceCounter(local_res18);
      lVar3 = 50000;
      do {
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar3 = hkSystemClock::getTickCounter();
      QueryPerformanceCounter(&local_res10);
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_146b83e48);
      dVar5 = (double)(lVar3 - lVar2);
      if (lVar3 - lVar2 < 0) {
        dVar5 = dVar5 + 1.8446744073709552e+19;
      }
      dVar6 = (double)(local_res10.QuadPart - (longlong)local_res18[0]);
      if (local_res10.QuadPart - (longlong)local_res18[0] < 0) {
        dVar6 = dVar6 + 1.8446744073709552e+19;
      }
      dVar1 = dVar1 + dVar5 / dVar6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    dVar5 = (double)DAT_146b83e48;
    if (DAT_146b83e48 < 0) {
      dVar5 = dVar5 + 1.8446744073709552e+19;
    }
    lVar4 = 0;
    dVar5 = dVar1 * 0.01 * dVar5;
    if ((9.223372036854776e+18 <= dVar5) &&
       (dVar5 = dVar5 - 9.223372036854776e+18, dVar5 < 9.223372036854776e+18)) {
      lVar4 = -0x8000000000000000;
    }
    DAT_146b83e48 = (longlong)dVar5 + lVar4;
  }
  return;
}



// FUNCTION 1437631d0 FUN_1437631d0 body=151 status=ok
// SIG undefined FUN_1437631d0(void)

longlong FUN_1437631d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14370c150();
  }
  FUN_143763600(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x40;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143763270 FUN_143763270 body=702 status=ok
// SIG undefined FUN_143763270(void)

int * FUN_143763270(longlong *param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong local_178;
  uint local_170;
  uint local_16c;
  int local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  int local_130;
  uint local_12c;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  
  FUN_143745310(&local_a8,param_3);
  FUN_1437465f0(&local_a8);
  FUN_143745190(&local_138,&local_a8);
  FUN_143746500(&local_138);
  local_16c = 0x80000000;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffffffffffff;
  local_140 = 0;
  while ((local_130 != 1 &&
         (piVar3 = (int *)(**(code **)(*param_1 + 0x40))(param_1,local_168,local_138,&local_160),
         uVar2 = local_138, *piVar3 < 0))) {
    if (local_170 == (local_16c & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,&local_178,8);
    }
    puVar1 = (undefined8 *)(local_178 + (longlong)(int)local_170 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
    }
    lVar4 = (longlong)(int)local_170;
    local_170 = local_170 + 1;
    FUN_1437166c0(local_178 + lVar4 * 8,uVar2);
    FUN_143746500(&local_138);
  }
  lVar4 = (longlong)(int)(local_170 - 1);
  if (-1 < (int)(local_170 - 1)) {
    do {
      (**(code **)(*param_1 + 0x28))
                (param_1,local_168,*(ulonglong *)(local_178 + lVar4 * 8) & 0xfffffffffffffffe,
                 param_4);
      if (local_168[0] < 0) {
        *param_2 = local_168[0];
        FUN_143716650(&uStack_158);
        iVar5 = local_170 - 1;
        if (-1 < iVar5) {
          lVar4 = local_178 + (longlong)iVar5 * 8;
          do {
            FUN_143716650(lVar4);
            lVar4 = lVar4 + -8;
            iVar5 = iVar5 + -1;
          } while (-1 < iVar5);
        }
        goto LAB_143763434;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_a8,param_4);
  FUN_143716650(&uStack_158);
  iVar5 = local_170 - 1;
  if (-1 < iVar5) {
    lVar4 = local_178 + (longlong)iVar5 * 8;
    do {
      FUN_143716650(lVar4);
      lVar4 = lVar4 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
LAB_143763434:
  local_170 = 0;
  if (-1 < (int)local_16c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_178,8,local_16c & 0x3fffffff);
  }
  local_130 = 0;
  local_16c = 0x80000000;
  local_178 = 0;
  if (-1 < (int)local_12c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_138,1,local_12c & 0x3fffffff);
  }
  local_a0 = 0;
  local_12c = 0x80000000;
  local_138 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143763530 FUN_143763530 body=203 status=ok
// SIG undefined FUN_143763530(void)

undefined8 FUN_143763530(longlong *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0x1ffff;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x34) = 0x80000000;
      *puVar2 = hkWin32FileSystem::vftable;
      puVar2[7] = 0;
    }
    if (puVar2 != (undefined8 *)*param_1) {
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *param_1 = (longlong)puVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143763600 FUN_143763600 body=137 status=ok
// SIG undefined FUN_143763600(void)

void FUN_143763600(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x18,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x18,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143763690 FUN_143763690 body=121 status=ok
// SIG undefined FUN_143763690(void)

longlong FUN_143763690(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1437851d0(lVar2,param_2,0xffffffff);
    }
    FUN_14370c150(param_2);
    return lVar2;
  }
  return param_2;
}



// FUNCTION 143763710 FUN_143763710 body=121 status=ok
// SIG undefined FUN_143763710(void)

longlong FUN_143763710(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14376e850(lVar2,param_2,0xffffffff);
    }
    FUN_14370c150(param_2);
    return lVar2;
  }
  return param_2;
}



// FUNCTION 143763790 FUN_143763790 body=545 status=ok
// SIG undefined FUN_143763790(void)

void FUN_143763790(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_48;
  int local_40;
  uint local_3c;
  int local_38;
  
  uVar10 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_38 = 0;
  uVar11 = uVar10;
  uVar6 = uVar10;
  if (0 < (int)param_1[1]) {
    do {
      iVar12 = (int)uVar6;
      lVar1 = (longlong)iVar12 * 0x18;
      lVar4 = FUN_1437639c0(*param_1 + lVar1);
      if ((local_40 + -1 < local_38 * 2) &&
         (piVar5 = (int *)FUN_143720a20(&local_48,local_res8,(local_40 + -1) * 2 + 2), *piVar5 < 0))
      {
LAB_1437638f1:
        lVar4 = *param_1;
        FUN_143716650(lVar4 + 0x10 + lVar1);
        FUN_143716650(lVar4 + 8 + lVar1);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        lVar1 = *param_1;
        lVar4 = (longlong)((int)param_1[1] - iVar12) * 0x18;
        uVar6 = uVar10;
        uVar9 = uVar10;
        if (0 < lVar4) {
          do {
            uVar8 = (int)uVar9 + 8;
            *(undefined8 *)(uVar6 + lVar1 + uVar11) = *(undefined8 *)(uVar6 + 0x18 + lVar1 + uVar11)
            ;
            uVar6 = uVar6 + 8;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < lVar4);
        }
        iVar12 = iVar12 + -1;
        uVar11 = uVar11 - 0x18;
      }
      else {
        if (local_40 + -1 < local_38 * 2) {
          FUN_143720a20(&local_48,local_res10,local_40 * 2);
        }
        uVar13 = (int)lVar4 * -0x61c8864f;
        iVar3 = (int)((ulonglong)lVar4 >> 0x20);
        uVar8 = iVar3 * -0x61c8864f;
        uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                 (int)lVar4 * -0x4f000000;
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                iVar3 * -0x4f000000;
        uVar8 = (uVar13 + uVar8 * 0x40 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar8) & local_40 - 1U;
        lVar2 = *(longlong *)(local_48 + (longlong)(int)uVar8 * 8);
        while ((iVar3 = 1, lVar2 != -1 && (iVar3 = 0, lVar2 != lVar4))) {
          uVar8 = uVar8 + 1 & local_40 - 1U;
          lVar2 = *(longlong *)(local_48 + (longlong)(int)uVar8 * 8);
        }
        local_38 = local_38 + iVar3;
        *(longlong *)(local_48 + (longlong)(int)uVar8 * 8) = lVar4;
        if (iVar3 == 0) goto LAB_1437638f1;
      }
      uVar11 = uVar11 + 0x18;
      uVar6 = (ulonglong)(iVar12 + 1U);
    } while ((int)(iVar12 + 1U) < (int)param_1[1]);
  }
  uVar7 = FUN_143703a50();
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar7,local_48,8,local_3c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437639c0 FUN_1437639c0 body=36 status=ok
// SIG undefined FUN_1437639c0(void)

uint FUN_1437639c0(byte *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_143740180(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  return *param_1 ^ uVar1;
}



// FUNCTION 1437639f0 FUN_1437639f0 body=48 status=ok
// SIG undefined FUN_1437639f0(void)

undefined8 FUN_1437639f0(char *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    return 0;
  }
  if (*param_1 == '.') {
    if (param_1[1] == '\0') {
      return 0;
    }
    if ((param_1[1] == '.') && (param_1[2] == '\0')) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar1 = FUN_14370c600(param_1,param_2 + 1);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143763a20 FUN_143763a20 body=225 status=ok
// SIG undefined FUN_143763a20(void)

longlong * FUN_143763a20(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 local_28 [16];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1,local_28);
  local_res8 = *plVar2;
  *plVar2 = 0;
  if (local_res8 == 0) {
    *param_2 = 0;
    return param_2;
  }
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    lVar4 = 0;
    do {
      iVar1 = (**(code **)(param_1[3] + (longlong)iVar3 * 0x18))
                        (&local_res8,param_3,param_4,*(undefined8 *)(lVar4 + 0x10 + param_1[3]));
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_143763ab4;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar3 < (int)param_1[4]);
  }
  FUN_14370c030(local_res8);
  *param_2 = local_res8;
LAB_143763ab4:
  if (local_res8 != 0) {
    FUN_14370c150();
  }
  return param_2;
}



// FUNCTION 143763b10 FUN_143763b10 body=225 status=ok
// SIG undefined FUN_143763b10(void)

longlong * FUN_143763b10(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 local_28 [16];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x68))(param_1,local_28);
  local_res8 = *plVar2;
  *plVar2 = 0;
  if (local_res8 == 0) {
    *param_2 = 0;
    return param_2;
  }
  iVar3 = 0;
  if (0 < (int)param_1[6]) {
    lVar4 = 0;
    do {
      iVar1 = (**(code **)(param_1[5] + (longlong)iVar3 * 0x18))
                        (&local_res8,param_3,param_4,*(undefined8 *)(lVar4 + 0x10 + param_1[5]));
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_143763ba4;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar3 < (int)param_1[6]);
  }
  FUN_14370c030(local_res8);
  *param_2 = local_res8;
LAB_143763ba4:
  if (local_res8 != 0) {
    FUN_14370c150();
  }
  return param_2;
}



// FUNCTION 143763c00 FUN_143763c00 body=49 status=ok
// SIG undefined FUN_143763c00(void)

void FUN_143763c00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_143763c40();
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x18) = param_6;
  return;
}



// FUNCTION 143763c40 FUN_143763c40 body=124 status=ok
// SIG undefined FUN_143763c40(void)

void FUN_143763c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  FUN_143745310(&local_98,param_3);
  FUN_1437465f0(&local_98);
  *param_1 = param_2;
  FUN_143716690(param_1 + 1,&local_98);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143763cc0 FUN_143763cc0 body=68 status=ok
// SIG undefined FUN_143763cc0(void)

void FUN_143763cc0(void)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x60);
  if (lVar2 != 0) {
    FUN_1437856d0(lVar2,0xffffffffffffffff);
    return;
  }
  return;
}



// FUNCTION 143763d10 FUN_143763d10 body=135 status=ok
// SIG undefined FUN_143763d10(void)

undefined8 * FUN_143763d10(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *param_1 = hkSocket::vftable;
  *(undefined2 *)((longlong)param_1 + 0x12) = 1;
  param_1[4] = 0;
  param_1[3] = hkSocket::ReaderAdapter::vftable;
  *(undefined4 *)(param_1 + 5) = 0x1ffff;
  param_1[8] = 0;
  param_1[7] = hkSocket::WriterAdapter::vftable;
  *(undefined4 *)(param_1 + 9) = 0x1ffff;
  param_1[6] = param_1;
  param_1[10] = param_1;
  if ((DAT_146b83e80 == '\0') && (PTR_FUN_1467f5f60 != (undefined *)0x0)) {
    (*(code *)PTR_FUN_1467f5f60)();
    DAT_146b83e80 = '\x01';
  }
  return param_1;
}



// FUNCTION 143763da0 FUN_143763da0 body=136 status=ok
// SIG undefined FUN_143763da0(void)

longlong FUN_143763da0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x20;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143763e30 FUN_143763e30 body=157 status=ok
// SIG undefined FUN_143763e30(void)

longlong FUN_143763e30(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000(param_1 + 0x38);
  FUN_14370c000(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x58;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143763ed0 getAddress body=30 status=ok
// SIG undefined getAddress(void)

void hkSocket::getAddress(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  (*(code *)PTR_FUN_1467f5f70)(param_2);
  *param_3 = 0xffffffff;
  return;
}



// FUNCTION 143763ef0 FUN_143763ef0 body=28 status=ok
// SIG undefined FUN_143763ef0(void)

undefined8 FUN_143763ef0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  return param_2;
}



// FUNCTION 143763f10 FUN_143763f10 body=107 status=ok
// SIG undefined FUN_143763f10(void)

int FUN_143763f10(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                        (*(longlong **)(param_1 + 0x18),iVar2 + param_2,param_3 - iVar2);
      iVar2 = iVar2 + iVar1;
      if (iVar1 == 0) {
        return iVar2;
      }
    } while (iVar2 < param_3);
  }
  return param_3;
}



// FUNCTION 143763f80 FUN_143763f80 body=107 status=ok
// SIG undefined FUN_143763f80(void)

int FUN_143763f80(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                        (*(longlong **)(param_1 + 0x18),iVar2 + param_2,param_3 - iVar2);
      iVar2 = iVar2 + iVar1;
      if (iVar1 == 0) {
        return iVar2;
      }
    } while (iVar2 < param_3);
  }
  return param_3;
}



// FUNCTION 143763ff0 getTickCounter body=5 status=ok
// SIG undefined getTickCounter(void)

ulonglong hkSystemClock::getTickCounter(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
}



// FUNCTION 143764010 FUN_143764010 body=120 status=ok
// SIG undefined FUN_143764010(void)

undefined8 FUN_143764010(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143764090(lVar2);
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



// FUNCTION 143764090 FUN_143764090 body=732 status=ok
// SIG undefined FUN_143764090(void)

undefined8 * FUN_143764090(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_268;
  uint local_264;
  uint local_260;
  undefined4 local_25c;
  undefined1 local_248 [32];
  undefined1 local_228 [512];
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkHardwareInfo::vftable;
  *(undefined4 *)(param_1 + 4) = 0x800000;
  uVar1 = FUN_1437643a0((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar1;
  FUN_143764370(0,local_res20,local_res18,local_res8,local_res10);
  local_264 = local_res10[0];
  local_25c = 0;
  local_260 = local_res8[0];
  local_268 = local_res18[0];
  iVar2 = hkString::strCmp(&local_268,"GenuineIntel");
  iVar3 = hkString::strCmp(&local_268,"AuthenticAMD");
  cVar5 = iVar3 == 0;
  if ((iVar2 == 0) || ((bool)cVar5)) {
    FUN_143764370(1,local_res20,local_res18,local_res8,local_res10);
    *(uint *)(param_1 + 4) =
         *(uint *)(param_1 + 4) |
         (((((((((local_res8[0] >> 4 & 0x2000000 | local_res8[0] & 0xc00000) >> 1 |
                 local_res8[0] & 0x10000000 | local_res10[0] & 0x80000) >> 1 |
               local_res8[0] & 0x2000000) >> 2 | local_res10[0] & 0x8000) >> 1 |
              local_res8[0] & 0x2000 | local_res10[0] & 0x800000) >> 1 | local_res10[0] & 0x6000000)
            >> 3 | local_res10[0] & 0x100) >> 5 | local_res8[0] & 0x1000) >> 2 |
         local_res8[0] & 0x180000) >> 1 | ((local_res8[0] & 0x200) << 5 | local_res8[0] & 2) << 3 |
         (local_res8[0] & 1) << 0x10;
    FUN_143764370(0x80000001,local_res20,local_res18,local_res8,local_res10);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | (local_res8[0] & 0x20) << 2;
    if (iVar2 == 0) {
      if (local_res20[0] < 7) {
        return param_1;
      }
      FUN_143764370(7,local_res20,local_res18,local_res8,local_res10);
      *(uint *)(param_1 + 4) =
           *(uint *)(param_1 + 4) |
           (((local_res18[0] & 8) << 4 | local_res18[0] & 0x100) << 6 | local_res18[0] & 0x20) << 8;
      return param_1;
    }
    if (cVar5 != '\0') {
      return param_1;
    }
  }
  FUN_1437134a0(local_248,local_228,0x200);
  uVar4 = Electra::FHTTPResourceRequest::URL(local_248,"CPU vendor information\'s (\'");
  uVar4 = Electra::FHTTPResourceRequest::URL(uVar4,&local_268);
  Electra::FHTTPResourceRequest::URL(uVar4,"\') not recognized.");
  FUN_143732520(0x4fa4b98c,local_228,"System\\Hardware\\hkHardwareInfo.cpp",0x9d);
  FUN_143713520(local_248);
  return param_1;
}



// FUNCTION 143764370 FUN_143764370 body=37 status=ok
// SIG undefined FUN_143764370(void)

void FUN_143764370(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    puVar1 = (undefined4 *)cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    puVar1 = (undefined4 *)cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == -0x7ffffffe) {
    puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == -0x7ffffffd) {
    puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == -0x7ffffffc) {
    puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (undefined4 *)cpuid(param_1);
  }
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  *param_3 = uVar2;
  *param_4 = uVar4;
  *param_5 = uVar3;
  return;
}



// FUNCTION 1437643a0 FUN_1437643a0 body=279 status=ok
// SIG undefined FUN_1437643a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

DWORD FUN_1437643a0(int *param_1)

{
  DWORD DVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  _SYSTEM_INFO local_1048;
  undefined1 local_1018 [8];
  int local_1010 [1020];
  undefined8 uStack_20;
  
  uStack_20 = 0x1437643af;
  iVar4 = 1;
  GetSystemInfo(&local_1048);
  hModule = LoadLibraryA("kernel32.dll");
  DVar5 = local_1048.dwNumberOfProcessors;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"GetLogicalProcessorInformation");
    iVar4 = 1;
    if (pFVar2 != (FARPROC)0x0) {
      local_res8[0] = 0;
      (*pFVar2)(0,local_res8);
      iVar4 = 1;
      if (local_res8[0] < 0x1001) {
        (*pFVar2)(local_1018,local_res8);
        DVar5 = 0;
        if (local_res8[0] != 0) {
          piVar3 = local_1010;
          uVar6 = (ulonglong)((local_res8[0] - 1 >> 5) + 1);
          do {
            iVar4 = *piVar3;
            piVar3 = piVar3 + 8;
            DVar1 = DVar5 + 1;
            if (iVar4 != 0) {
              DVar1 = DVar5;
            }
            DVar5 = DVar1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        iVar4 = (int)local_1048.dwNumberOfProcessors / (int)DVar5;
      }
    }
    FreeLibrary(hModule);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar4;
  }
  return DVar5;
}



// FUNCTION 1437644c0 FUN_1437644c0 body=95 status=ok
// SIG undefined FUN_1437644c0(void)

undefined8 * FUN_1437644c0(undefined8 *param_1)

{
  *param_1 = hkSimpleMemorySystem::vftable;
  FUN_142d2e650(param_1 + 1,0,0x8000);
  FUN_143703810(param_1 + 2);
  FUN_1437868f0(param_1 + 0x11);
  FUN_143731a10(param_1 + 0x9e,0,0,0,0);
  return param_1;
}



// FUNCTION 143764520 FUN_143764520 body=79 status=ok
// SIG undefined FUN_143764520(void)

longlong FUN_143764520(longlong param_1,byte param_2)

{
  FUN_143786950(param_1 + 0x88);
  FUN_143702b50(param_1 + 0x10);
  FUN_14370d8c0(param_1);
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x510);
  }
  return param_1;
}



// FUNCTION 143764570 FUN_143764570 body=238 status=ok
// SIG undefined FUN_143764570(void)

void FUN_143764570(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_2[1] + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 * 0x38 + *param_2;
    do {
      FUN_143716650(lVar4);
      lVar4 = lVar4 + -0x38;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_2,0x38);
  }
  puVar2 = (undefined8 *)((longlong)(int)param_2[1] * 0x38 + *param_2);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = 0xffffffffffffffff;
    puVar2[3] = 0xffffffffffffffff;
    puVar2[4] = 0xffffffffffffffff;
    puVar2[5] = 0xffffffffffffffff;
    puVar2[6] = 0xffffffffffffffff;
  }
  lVar4 = (longlong)(int)param_2[1] * 0x38 + *param_2;
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  FUN_1437166c0(lVar4,&DAT_145b9de6c);
                    /* WARNING: Could not recover jumptable at 0x00014376465a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x40))(*(longlong **)(param_1 + 0x4f8),lVar4 + 8);
  return;
}



// FUNCTION 143764660 FUN_143764660 body=8 status=ok
// SIG undefined FUN_143764660(void)

undefined8 FUN_143764660(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x4f8);
}



// FUNCTION 143764670 FUN_143764670 body=124 status=ok
// SIG undefined FUN_143764670(void)

longlong * FUN_143764670(longlong *param_1,ulonglong *param_2,uint param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = uVar1;
  if ((((param_3 & 2) != 0) && ((int)uVar1 != 0)) && (param_1[0xa1] == 0)) {
    uVar2 = (**(code **)(*(longlong *)param_1[0x9f] + 8))
                      ((longlong *)param_1[0x9f],uVar1 & 0xffffffff);
    FUN_143786e10(param_1 + 0x11,uVar2,uVar1 & 0xffffffff);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_1 + 2,&DAT_145b9ddc0,param_3);
  return param_1 + 2;
}



// FUNCTION 1437646f0 FUN_1437646f0 body=148 status=ok
// SIG undefined FUN_1437646f0(void)

undefined4 * FUN_1437646f0(longlong *param_1,undefined4 *param_2,uint param_3)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_1 + 2);
  if (((param_3 & 2) != 0) && (param_1[0xa1] == 0)) {
    (**(code **)(*(longlong *)param_1[0x9f] + 0x10))
              ((longlong *)param_1[0x9f],param_1[0x12],(int)param_1[0x13] - (int)param_1[0x12]);
    FUN_143786e10(param_1 + 0x11,0,0);
  }
  if ((param_3 & 1) != 0) {
    FUN_1437648b0(param_1,0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143764790 FUN_143764790 body=274 status=ok
// SIG undefined FUN_143764790(void)

void FUN_143764790(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_28 = 0xffffffffffffffff;
  uStack_20 = 0xffffffffffffffff;
  local_18 = 0xffffffffffffffff;
  uStack_10 = 0xffffffffffffffff;
  (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x40))
            (*(longlong **)(param_1 + 0x4f0),0xffffffffffffffff);
  FUN_143715d00(param_2,"TEMP: %i in use, %i available, %i peak",uStack_30,uStack_20,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x40))(*(longlong **)(param_1 + 0x4f8),&local_38);
  FUN_143715d00(param_2,"HEAP: %i in use, %i available, %i peak",uStack_30,uStack_20,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x500) + 0x40))(*(longlong **)(param_1 + 0x500),&local_38);
  FUN_143715d00(param_2,"DEBUG: %i in use, %i available, %i peak",uStack_30,uStack_20,local_28);
  plVar1 = *(longlong **)(param_1 + 0x508);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_38);
    FUN_143715d00(param_2,"SOLVER: %i in use, %i available, %i peak",uStack_30,uStack_20,local_28);
  }
  return;
}



// FUNCTION 1437648b0 FUN_1437648b0 body=33 status=ok
// SIG undefined FUN_1437648b0(void)

void FUN_1437648b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x4f0) = param_2;
  *(undefined8 *)(param_1 + 0x4f8) = param_2;
  *(undefined8 *)(param_1 + 0x500) = param_2;
  *(undefined8 *)(param_1 + 0x508) = 0;
  return;
}



// FUNCTION 1437648e0 FUN_1437648e0 body=133 status=ok
// SIG undefined FUN_1437648e0(void)

void FUN_1437648e0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_4 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x4f8);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x500);
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  if ((param_4 & 2) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x4f8);
    FUN_143713b40(param_2,uVar1,uVar1,uVar1,*(undefined4 *)(param_1 + 0xc));
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x4f0);
    lVar2 = *(longlong *)(param_1 + 0x508);
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x88;
    }
    *(longlong *)(param_2 + 0x68) = lVar2;
  }
  return;
}



// FUNCTION 143764970 FUN_143764970 body=74 status=ok
// SIG undefined FUN_143764970(void)

void FUN_143764970(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  if ((param_3 & 2) != 0) {
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    FUN_143713ee0(param_2,0);
    param_3 = param_3 & 0xffffffff;
  }
  if ((param_3 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1437649c0 FUN_1437649c0 body=14 status=ok
// SIG undefined FUN_1437649c0(void)

undefined8 * FUN_1437649c0(undefined8 *param_1)

{
  *param_1 = hkStackTracer::vftable;
  return param_1;
}



// FUNCTION 1437649d0 FUN_1437649d0 body=11 status=ok
// SIG undefined FUN_1437649d0(void)

void FUN_1437649d0(undefined8 *param_1)

{
  *param_1 = hkStackTracer::vftable;
  return;
}



// FUNCTION 1437649e0 FUN_1437649e0 body=120 status=ok
// SIG undefined FUN_1437649e0(void)

longlong FUN_1437649e0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437649d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
    }
  }
  return param_1;
}



// FUNCTION 143764a60 FUN_143764a60 body=520 status=ok
// SIG undefined FUN_143764a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143764a60(undefined8 param_1,longlong param_2,int param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  HANDLE pvVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  char *local_1068;
  undefined8 local_1060;
  undefined4 local_1058 [20];
  undefined4 local_1008;
  undefined1 local_1004 [2012];
  undefined1 local_828 [2048];
  
  FUN_143764c70(PTR_DAT_1467f5f88);
  if (*(longlong *)(PTR_DAT_1467f5f88 + 0x60) == 0) {
    if (DAT_146b83eb8 == '\0') {
      DAT_146b83eb8 = 1;
      OutputDebugStringA(
                        "**************************************************************\n* Functions required to dump a stack trace are not available.\n* Make sure dbghelp.dll is accessible.\n**************************************************************\n"
                        );
      return;
    }
  }
  else {
    local_1058[0] = 0x58;
    local_1008 = 0x7d1;
    pvVar3 = GetCurrentProcess();
    lVar5 = 0;
    if (0 < param_3) {
      do {
        uVar1 = *(undefined8 *)(param_2 + lVar5 * 8);
        local_1088 = 0;
        iVar2 = (**(code **)(PTR_DAT_1467f5f88 + 0x60))(pvVar3,uVar1,&local_1088,local_1058);
        if (iVar2 == 0) {
          if (DAT_146b83eb8 == '\0') {
            OutputDebugStringA(
                              "**************************************************************\n* Cannot find symbol for an address\n* Either debug information was not found or your version of\n* dbghelp.dll may be too old to understand the debug format.\n* For more information, see comments in hkStackTracerWin32.cxx\n**************************************************************\n"
                              );
            DAT_146b83eb8 = '\x01';
          }
          hkString::strCpy(local_1004,local_1008,
                           "(unknown - see comments in hkStackTracerWin32.cxx)");
        }
        local_1078 = 0;
        local_1070 = 0;
        local_1068 = (char *)0x0;
        local_1060 = 0;
        local_1080 = 0x28;
        (**(code **)(PTR_DAT_1467f5f88 + 0x80))(pvVar3,uVar1,&local_1088,&local_1080);
        pcVar4 = "UnknownFile";
        if (local_1068 != (char *)0x0) {
          pcVar4 = local_1068;
        }
        FDebug::AssertFailed
                  (local_828,0x800,0x7ff,"%s(%i):\'%s\'\n",pcVar4,(undefined4)local_1070,local_1004)
        ;
        (*param_4)(local_828,param_5);
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_3);
    }
  }
  return;
}



// FUNCTION 143764c70 FUN_143764c70 body=388 status=ok
// SIG undefined FUN_143764c70(void)

void FUN_143764c70(LPCRITICAL_SECTION param_1)

{
  char cVar1;
  uint uVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  HANDLE pvVar6;
  
  if (*(char *)((longlong)&param_1[1].DebugInfo + 2) == '\0') {
    EnterCriticalSection(param_1);
    if (*(char *)((longlong)&param_1[1].DebugInfo + 2) == '\0') {
      pHVar3 = LoadLibraryW((LPCWSTR)PTR_u_dbghelp_dll_1467f5f80);
      *(HMODULE *)&param_1[1].LockCount = pHVar3;
      if (pHVar3 == (HMODULE)0x0) {
        OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load dbghelp.dll\r\n");
      }
      if (*(HMODULE *)&param_1[1].LockCount != (HMODULE)0x0) {
        pFVar4 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymInitialize");
        param_1[1].OwningThread = pFVar4;
        pFVar4 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymRefreshModuleList");
        param_1[1].LockSemaphore = pFVar4;
        if (pFVar4 == (FARPROC)0x0) {
          OutputDebugStringA(
                            "Havok StackTracer: Could not load symbol SymRefreshModuleList from dbghelp.dll, version too old, but will continue without it.\r\n"
                            );
        }
        pFVar4 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymLoadModuleEx");
        param_1[1].SpinCount = (ULONG_PTR)pFVar4;
        if (pFVar4 == (FARPROC)0x0) {
          OutputDebugStringA(
                            "Havok StackTracer: Could not load symbol SymLoadModuleEx from dbghelp.dll, version too old, but will continue without it.\r\n"
                            );
        }
        p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)
                 GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymGetOptions");
        pHVar3 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].DebugInfo = p_Var5;
        pFVar4 = GetProcAddress(pHVar3,"SymSetOptions");
        *(FARPROC *)&param_1[2].LockCount = pFVar4;
        pFVar4 = GetProcAddress(*(HMODULE *)&param_1[1].LockCount,"SymFromAddr");
        pHVar3 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].OwningThread = pFVar4;
        pFVar4 = GetProcAddress(pHVar3,"StackWalk64");
        pHVar3 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].LockSemaphore = pFVar4;
        pFVar4 = GetProcAddress(pHVar3,"SymFunctionTableAccess64");
        pHVar3 = *(HMODULE *)&param_1[1].LockCount;
        param_1[2].SpinCount = (ULONG_PTR)pFVar4;
        p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)GetProcAddress(pHVar3,"SymGetModuleBase64");
        pHVar3 = *(HMODULE *)&param_1[1].LockCount;
        param_1[3].DebugInfo = p_Var5;
        pFVar4 = GetProcAddress(pHVar3,"SymGetLineFromAddr64");
        cVar1 = *(char *)((longlong)&param_1[1].DebugInfo + 1);
        *(FARPROC *)&param_1[3].LockCount = pFVar4;
        if (cVar1 != '\0') {
          uVar2 = (*(code *)param_1[2].DebugInfo)();
          (**(code **)&param_1[2].LockCount)(uVar2 | 0x14);
          pvVar6 = GetCurrentProcess();
          (*param_1[1].OwningThread)(pvVar6,0,1);
        }
        *(undefined1 *)((longlong)&param_1[1].DebugInfo + 2) = 1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000143764de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 143764e00 FUN_143764e00 body=479 status=ok
// SIG undefined FUN_143764e00(void)

uint FUN_143764e00(undefined8 param_1,undefined8 *param_2,int param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_608;
  undefined4 local_5fc;
  longlong local_5f8;
  undefined8 local_5e8;
  undefined4 local_5dc;
  undefined8 local_5d8;
  undefined4 local_5cc;
  undefined1 local_4f8 [1232];
  
  if ((*(code **)(PTR_DAT_1467f5f88 + 0x90) != (code *)0x0) && (param_5 == (undefined1 *)0x0)) {
    uVar1 = (**(code **)(PTR_DAT_1467f5f88 + 0x90))(param_4,param_3,param_2,0);
    return (uint)uVar1;
  }
  FUN_143764c70();
  if (((*(longlong *)(PTR_DAT_1467f5f88 + 0x68) != 0) &&
      (*(longlong *)(PTR_DAT_1467f5f88 + 0x70) != 0)) &&
     (*(longlong *)(PTR_DAT_1467f5f88 + 0x78) != 0)) {
    pvVar3 = GetCurrentProcess();
    pvVar4 = GetCurrentThread();
    if (param_5 == (undefined1 *)0x0) {
      (**(code **)(PTR_DAT_1467f5f88 + 0x88))(local_4f8);
      param_5 = local_4f8;
    }
    uVar6 = 1;
    *param_2 = *(undefined8 *)(param_5 + 0xf8);
    local_608 = *(longlong *)(param_5 + 0xf8);
    lVar5 = 1;
    local_5e8 = *(undefined8 *)(param_5 + 0xa0);
    local_5d8 = *(undefined8 *)(param_5 + 0x98);
    local_5fc = 3;
    local_5dc = 3;
    local_5cc = 3;
    if (1 < (longlong)param_3) {
      do {
        iVar2 = (**(code **)(PTR_DAT_1467f5f88 + 0x68))
                          (0x8664,pvVar3,pvVar4,&local_608,param_5,0,
                           *(undefined8 *)(PTR_DAT_1467f5f88 + 0x70),
                           *(undefined8 *)(PTR_DAT_1467f5f88 + 0x78),0);
        if (iVar2 != 1) {
          return uVar6;
        }
        if (local_608 == local_5f8) {
          return uVar6;
        }
        param_2[lVar5] = local_608;
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_3);
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 143764fe0 FUN_143764fe0 body=59 status=ok
// SIG undefined FUN_143764fe0(void)

void FUN_143764fe0(longlong param_1,int param_2,longlong param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (param_2 < *(int *)(param_1 + 0xc0)) {
    lVar2 = (longlong)param_2;
    sVar1 = *(short *)(param_3 + 0x2a + lVar2 * 2);
    if (sVar1 != 0) {
      *(short *)(param_3 + lVar2 * 2 + 0x2a) = sVar1 + -1;
      hkSemaphore::release(*(undefined8 *)(param_1 + 0x98 + lVar2 * 8),1);
      return;
    }
  }
  FUN_1437659f0(param_1,param_3);
  return;
}



// FUNCTION 143765020 FUN_143765020 body=180 status=ok
// SIG undefined FUN_143765020(void)

void FUN_143765020(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  if (iVar4 <= *(int *)((longlong)param_1 + 0x14)) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    FUN_143765b80(param_1,iVar4);
  }
  if ((int)param_1[2] == (int)param_1[1]) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  puVar2 = (undefined8 *)((longlong)(int)param_1[2] * 0x100 + *param_1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = 2;
    do {
      uVar1 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar1;
      uVar1 = param_2[3];
      puVar2[2] = param_2[2];
      puVar2[3] = uVar1;
      uVar1 = param_2[5];
      puVar2[4] = param_2[4];
      puVar2[5] = uVar1;
      uVar1 = param_2[7];
      puVar2[6] = param_2[6];
      puVar2[7] = uVar1;
      uVar1 = param_2[9];
      puVar2[8] = param_2[8];
      puVar2[9] = uVar1;
      uVar1 = param_2[0xb];
      puVar2[10] = param_2[10];
      puVar2[0xb] = uVar1;
      uVar1 = param_2[0xd];
      puVar2[0xc] = param_2[0xc];
      puVar2[0xd] = uVar1;
      uVar1 = param_2[0xf];
      puVar2[0xe] = param_2[0xe];
      puVar2[0xf] = uVar1;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 0x10;
      param_2 = param_2 + 0x10;
    } while (lVar3 != 0);
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  return;
}



// FUNCTION 1437650e0 FUN_1437650e0 body=177 status=ok
// SIG undefined FUN_1437650e0(void)

void FUN_1437650e0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  if (iVar4 <= *(int *)((longlong)param_1 + 0x14)) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    FUN_143765b80(param_1,iVar4);
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
  puVar2 = (undefined8 *)((longlong)*(int *)((longlong)param_1 + 0xc) * 0x100 + *param_1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = 2;
    do {
      uVar1 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar1;
      uVar1 = param_2[3];
      puVar2[2] = param_2[2];
      puVar2[3] = uVar1;
      uVar1 = param_2[5];
      puVar2[4] = param_2[4];
      puVar2[5] = uVar1;
      uVar1 = param_2[7];
      puVar2[6] = param_2[6];
      puVar2[7] = uVar1;
      uVar1 = param_2[9];
      puVar2[8] = param_2[8];
      puVar2[9] = uVar1;
      uVar1 = param_2[0xb];
      puVar2[10] = param_2[10];
      puVar2[0xb] = uVar1;
      uVar1 = param_2[0xd];
      puVar2[0xc] = param_2[0xc];
      puVar2[0xd] = uVar1;
      uVar1 = param_2[0xf];
      puVar2[0xe] = param_2[0xe];
      puVar2[0xf] = uVar1;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 0x10;
      param_2 = param_2 + 0x10;
    } while (lVar3 != 0);
  }
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  return;
}



// FUNCTION 1437651a0 FUN_1437651a0 body=923 status=ok
// SIG undefined FUN_1437651a0(void)

undefined4
FUN_1437651a0(LPCRITICAL_SECTION param_1,int param_2,short *param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 local_118;
  
  pvVar6 = TlsGetValue(DAT_146b83ebc);
  if ((int)pvVar6 == 0) {
    iVar15 = (int)param_1[2].SpinCount;
  }
  else {
    pvVar6 = TlsGetValue(DAT_146b83ebc);
    iVar15 = (int)*(char *)(param_1[7].SpinCount + (longlong)(int)pvVar6);
  }
  pcVar13 = (char *)((longlong)&param_1[4].SpinCount + (longlong)iVar15 * 0x16 + 4);
  cVar1 = *pcVar13;
  if (-1 < cVar1) {
LAB_143765220:
    iVar15 = (int)cVar1;
    lVar7 = (longlong)iVar15;
    pcVar13 = pcVar13 + 1;
    if (*(int *)(param_3 + lVar7 * 0xc + 0x26) == 0) goto code_r0x000143765236;
    iVar12 = *(int *)(param_3 + lVar7 * 0xc + 0x22);
    lVar20 = 2;
    puVar8 = &local_118;
    puVar14 = (undefined8 *)((longlong)iVar12 * 0x100 + *(longlong *)(param_3 + lVar7 * 0xc + 0x1c))
    ;
    do {
      uVar4 = puVar14[1];
      *puVar8 = *puVar14;
      puVar8[1] = uVar4;
      uVar4 = puVar14[3];
      puVar8[2] = puVar14[2];
      puVar8[3] = uVar4;
      uVar4 = puVar14[5];
      puVar8[4] = puVar14[4];
      puVar8[5] = uVar4;
      uVar4 = puVar14[7];
      puVar8[6] = puVar14[6];
      puVar8[7] = uVar4;
      uVar4 = puVar14[9];
      puVar8[8] = puVar14[8];
      puVar8[9] = uVar4;
      uVar4 = puVar14[0xb];
      puVar8[10] = puVar14[10];
      puVar8[0xb] = uVar4;
      uVar5 = *(undefined4 *)((longlong)puVar14 + 100);
      uVar2 = *(undefined4 *)(puVar14 + 0xd);
      uVar3 = *(undefined4 *)((longlong)puVar14 + 0x6c);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar14 + 0xc);
      *(undefined4 *)((longlong)puVar8 + 100) = uVar5;
      *(undefined4 *)(puVar8 + 0xd) = uVar2;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar3;
      uVar5 = *(undefined4 *)((longlong)puVar14 + 0x74);
      uVar2 = *(undefined4 *)(puVar14 + 0xf);
      uVar3 = *(undefined4 *)((longlong)puVar14 + 0x7c);
      *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar14 + 0xe);
      *(undefined4 *)((longlong)puVar8 + 0x74) = uVar5;
      *(undefined4 *)(puVar8 + 0xf) = uVar2;
      *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar3;
      lVar20 = lVar20 + -1;
      puVar8 = puVar8 + 0x10;
      puVar14 = puVar14 + 0x10;
    } while (lVar20 != 0);
    iVar12 = iVar12 + 1;
    if (iVar12 == *(int *)(param_3 + lVar7 * 0xc + 0x20)) {
      iVar12 = 0;
    }
    *(int *)(param_3 + lVar7 * 0xc + 0x26) = *(int *)(param_3 + lVar7 * 0xc + 0x26) + -1;
    *(int *)(param_3 + lVar7 * 0xc + 0x22) = iVar12;
    iVar12 = (**(code **)&param_1[1].LockCount)(param_1,param_3,&local_118,param_5);
    if (iVar12 == 1) {
      FUN_1437650e0(param_3 + lVar7 * 0xc + 0x1c,&local_118);
      FUN_143764fe0(param_1,iVar15,param_3);
    }
    param_3[local_118._1_1_] = param_3[local_118._1_1_] + 1;
    goto LAB_143765240;
  }
LAB_14376523d:
  iVar15 = -1;
LAB_143765240:
  if ((param_2 != -1) && (param_2 != iVar15)) {
    FUN_143764fe0(param_1,param_2,param_3);
  }
  if (-1 < iVar15) {
    LeaveCriticalSection(param_1);
    return 0;
  }
  lVar7 = (longlong)*(int *)&param_1[2].LockSemaphore;
  iVar12 = 0;
  lVar20 = (longlong)*(int *)((longlong)&param_1[2].LockSemaphore + 4);
  iVar16 = 0;
  iVar15 = 0;
  if (lVar7 < lVar20) {
    if (1 < lVar20 - lVar7) {
      piVar11 = (int *)(param_3 + lVar7 * 0xc + 0x32);
      lVar9 = ((lVar20 - lVar7) - 2U >> 1) + 1;
      lVar7 = lVar7 + lVar9 * 2;
      iVar12 = 0;
      iVar16 = 0;
      do {
        iVar12 = iVar12 + piVar11[-6];
        iVar16 = iVar16 + *piVar11;
        piVar11 = piVar11 + 0xc;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar7 < lVar20) {
      iVar15 = *(int *)(param_3 + lVar7 * 0xc + 0x26);
    }
    if (iVar15 + iVar12 + iVar16 == 0) goto LAB_1437653bb;
LAB_14376548e:
    if (param_4 == 1) {
      LeaveCriticalSection(param_1);
      uVar5 = 1;
    }
    else {
      pvVar6 = TlsGetValue(DAT_146b83ebc);
      lVar7 = (longlong)*(char *)(param_1[7].SpinCount + (longlong)(int)pvVar6);
      param_3[lVar7 + 0x15] = param_3[lVar7 + 0x15] + 1;
      LeaveCriticalSection(param_1);
      pvVar6 = TlsGetValue(DAT_146b8198c);
      if (pvVar6 != (LPVOID)0x0) {
        FUN_14370d5c0(pvVar6,"TtNoJobAvailable");
      }
      FWindowsPlatformProcess::WaitForProc((&param_1[3].SpinCount)[lVar7]);
      pvVar6 = TlsGetValue(DAT_146b8198c);
      if (pvVar6 != (LPVOID)0x0) {
        FUN_14370d750(pvVar6,&DAT_145b8eda0);
      }
      uVar5 = 0xffffffff;
    }
  }
  else {
LAB_1437653bb:
    uVar18 = 0;
    uVar19 = 0;
    iVar15 = 0;
    psVar17 = param_3;
    if (0 < *(int *)&param_1[1].LockSemaphore) {
      do {
        if ((0 < *psVar17) ||
           (iVar12 = 0,
           *(int *)(param_3 +
                   (longlong)(*(int *)((longlong)&param_1[1].SpinCount + 4) + iVar15) * 0xc + 0x26)
           != 0)) {
          iVar12 = 1;
        }
        bVar10 = (byte)iVar15;
        iVar15 = iVar15 + 1;
        uVar19 = uVar18 | iVar12 << (bVar10 & 0x1f);
        psVar17 = psVar17 + 1;
        uVar18 = uVar19;
      } while (iVar15 < *(int *)&param_1[1].LockSemaphore);
    }
    if ((*(uint *)(param_3 + 0x10) & uVar19) == 0) {
      pvVar6 = TlsGetValue(DAT_146b83ebc);
      if ((int)pvVar6 != 0) {
        if (param_3[(longlong)*(char *)param_1[7].SpinCount + 0x15] != 0) {
          param_3[(longlong)*(char *)param_1[7].SpinCount + 0x15] =
               param_3[(longlong)*(char *)param_1[7].SpinCount + 0x15] + -1;
          hkSemaphore::release((&param_1[3].SpinCount)[*(char *)param_1[7].SpinCount],1);
        }
        goto LAB_143765483;
      }
      if (uVar19 == 0) goto LAB_143765429;
    }
    else {
LAB_143765483:
      if ((uVar19 != 0) || (*(int *)(param_3 + 0x12) == 1)) goto LAB_14376548e;
LAB_143765429:
      FUN_143765af0(param_1,param_3);
    }
    LeaveCriticalSection(param_1);
    uVar5 = 2;
  }
  return uVar5;
code_r0x000143765236:
  cVar1 = *pcVar13;
  if (cVar1 < '\0') goto LAB_14376523d;
  goto LAB_143765220;
}



// FUNCTION 143765540 FUN_143765540 body=445 status=ok
// SIG undefined FUN_143765540(void)

ulonglong FUN_143765540(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  LPVOID pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int local_358 [4];
  undefined8 local_348 [32];
  undefined1 local_248 [544];
  
  pvVar8 = TlsGetValue(DAT_146b8198c);
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar8,"TtGetNextJob");
  }
  do {
    lVar9 = FUN_143765770(param_1,local_248);
    uVar13 = 0xffffffff;
    if (param_2 != 0) {
      iVar7 = (**(code **)(param_1 + 0x38))(param_1,lVar9,param_2,local_358);
      if (iVar7 == 0) {
        iVar7 = FUN_143765710(param_1,local_348);
        uVar13 = (ulonglong)iVar7;
        plVar1 = (longlong *)(lVar9 + (uVar13 * 3 + 7) * 8);
        if (local_358[0] == 0) {
          iVar7 = (int)plVar1[1];
          if (iVar7 <= *(int *)((longlong)plVar1 + 0x14)) {
            if (iVar7 == 0) {
              iVar7 = 8;
            }
            else {
              iVar7 = iVar7 * 2;
            }
            FUN_143765b80(plVar1,iVar7);
          }
          if (*(int *)((longlong)plVar1 + 0xc) == 0) {
            *(int *)((longlong)plVar1 + 0xc) = (int)plVar1[1];
          }
          *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + -1;
          puVar10 = (undefined8 *)((longlong)*(int *)((longlong)plVar1 + 0xc) * 0x100 + *plVar1);
          if (puVar10 != (undefined8 *)0x0) {
            lVar12 = 2;
            puVar11 = local_348;
            do {
              uVar6 = puVar11[1];
              *puVar10 = *puVar11;
              puVar10[1] = uVar6;
              uVar6 = puVar11[3];
              puVar10[2] = puVar11[2];
              puVar10[3] = uVar6;
              uVar6 = puVar11[5];
              puVar10[4] = puVar11[4];
              puVar10[5] = uVar6;
              uVar6 = puVar11[7];
              puVar10[6] = puVar11[6];
              puVar10[7] = uVar6;
              uVar6 = puVar11[9];
              puVar10[8] = puVar11[8];
              puVar10[9] = uVar6;
              uVar6 = puVar11[0xb];
              puVar10[10] = puVar11[10];
              puVar10[0xb] = uVar6;
              uVar3 = *(undefined4 *)((longlong)puVar11 + 100);
              uVar4 = *(undefined4 *)(puVar11 + 0xd);
              uVar5 = *(undefined4 *)((longlong)puVar11 + 0x6c);
              *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar11 + 0xc);
              *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
              *(undefined4 *)(puVar10 + 0xd) = uVar4;
              *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
              uVar6 = puVar11[0xf];
              puVar10[0xe] = puVar11[0xe];
              puVar10[0xf] = uVar6;
              lVar12 = lVar12 + -1;
              puVar10 = puVar10 + 0x10;
              puVar11 = puVar11 + 0x10;
            } while (lVar12 != 0);
          }
          *(int *)((longlong)plVar1 + 0x14) = *(int *)((longlong)plVar1 + 0x14) + 1;
        }
        else {
          FUN_143765020(plVar1,local_348);
        }
      }
      psVar2 = (short *)(lVar9 + (ulonglong)*(byte *)(param_2 + 1) * 2);
      *psVar2 = *psVar2 + -1;
      param_2 = 0;
    }
    uVar13 = FUN_1437651a0(param_1,uVar13 & 0xffffffff,lVar9,param_4,param_3);
  } while ((int)uVar13 == -1);
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d750(pvVar8,&DAT_145b8eda0);
    uVar13 = uVar13 & 0xffffffff;
  }
  return uVar13;
}



// FUNCTION 143765700 FUN_143765700 body=13 status=ok
// SIG undefined FUN_143765700(void)

void FUN_143765700(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143765540(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 143765710 FUN_143765710 body=88 status=ok
// SIG undefined FUN_143765710(void)

uint FUN_143765710(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    pcVar1 = (char *)(param_1 + 0x58);
    uVar3 = uVar2;
    do {
      if ((param_2[1] == pcVar1[-4]) && (*param_2 == *pcVar1)) {
        return (uint)*(byte *)(param_1 + 0x59 + (longlong)(int)uVar3 * 8);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 8;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 100));
  }
  return (uint)(byte)param_2[1] + *(int *)(param_1 + 0x4c);
}



// FUNCTION 143765770 FUN_143765770 body=25 status=ok
// SIG undefined FUN_143765770(void)

PRTL_CRITICAL_SECTION_DEBUG FUN_143765770(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return param_1[1].DebugInfo;
}



// FUNCTION 143765790 FUN_143765790 body=450 status=ok
// SIG undefined FUN_143765790(void)

ulonglong FUN_143765790(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  char *pcVar7;
  byte local_118;
  byte local_117;
  
  uVar5 = FUN_143765700(param_1,&local_118,0);
  uVar4 = (uint)uVar5;
  bVar3 = local_117;
  while (uVar4 == 0) {
    switch(bVar3) {
    case 0:
    case 1:
    case 0xd:
      pcVar7 = "TtPhysics 2012";
      break;
    case 2:
      pcVar7 = "TtCollision Query";
      break;
    case 3:
      pcVar7 = "TtRayCast Query";
      break;
    case 4:
      pcVar7 = "TtAnimation Sample and Combine";
      break;
    case 5:
      pcVar7 = "TtAnimation Sample and Blend";
      break;
    case 6:
      pcVar7 = "TtAnimation Mapping";
      break;
    case 7:
      pcVar7 = "TtBehavior";
      break;
    case 8:
      pcVar7 = "TtCloth";
      break;
    case 9:
      pcVar7 = "TtDestruction";
      break;
    default:
      pcVar7 = "TtOther";
      break;
    case 0xb:
      pcVar7 = "TtCharacter Proxy";
      break;
    case 0xc:
      pcVar7 = "TtVehicle";
      break;
    case 0xe:
      pcVar7 = "TtUserJob";
    }
    local_117 = bVar3;
    pvVar6 = TlsGetValue(DAT_146b8198c);
    if (((param_2 != '\0') && (pvVar6 != (LPVOID)0x0)) &&
       (puVar1 = *(undefined8 **)((longlong)pvVar6 + 8),
       puVar1 < *(undefined8 **)((longlong)pvVar6 + 0x18))) {
      *puVar1 = pcVar7;
      hkMonitorStream::TimerCommand::setTime(puVar1);
      *(undefined8 **)((longlong)pvVar6 + 8) = puVar1 + 2;
    }
    plVar2 = *(longlong **)(param_1 + 0x340);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,bVar3,local_118);
    }
    uVar4 = (**(code **)(*(longlong *)((ulonglong)bVar3 * 0x20 + 0x150 + param_1) +
                        (ulonglong)local_118 * 8))(param_1,&local_118);
    plVar2 = *(longlong **)(param_1 + 0x340);
    uVar5 = (ulonglong)uVar4;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,bVar3);
    }
    bVar3 = local_117;
    if ((param_2 != '\0') && (pvVar6 != (LPVOID)0x0)) {
      FUN_14370d750(pvVar6,&DAT_145b8eda0);
      bVar3 = local_117;
    }
  }
  return uVar5;
}



// FUNCTION 143765990 FUN_143765990 body=94 status=ok
// SIG undefined FUN_143765990(void)

void FUN_143765990(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 != 0) {
    uVar2 = *param_1;
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),uVar2,iVar1 << 8);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1437659f0 FUN_1437659f0 body=252 status=ok
// SIG undefined FUN_1437659f0(void)

void FUN_1437659f0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = *(uint *)(param_1 + 0x68);
  uVar7 = (ulonglong)(int)uVar6;
  bVar1 = false;
  if ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x6c)) {
    psVar3 = (short *)(param_2 + 0x2a + uVar7 * 2);
    piVar4 = (int *)(param_2 + 0x4c + uVar7 * 0x18);
    uVar8 = uVar7;
    bVar1 = false;
    do {
      iVar5 = (int)uVar7;
      if ((*piVar4 != 0) && (bVar1 = true, *psVar3 != 0)) goto LAB_143765ab8;
      uVar6 = iVar5 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 1;
      psVar3 = psVar3 + 1;
      piVar4 = piVar4 + 6;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x6c));
  }
  lVar2 = (longlong)(int)uVar6;
  if (lVar2 < *(int *)(param_1 + 0x50)) {
    piVar4 = (int *)(param_2 + 0x4c + lVar2 * 0x18);
    do {
      if (*piVar4 != 0) goto LAB_143765a86;
      lVar2 = lVar2 + 1;
      piVar4 = piVar4 + 6;
    } while (lVar2 < *(int *)(param_1 + 0x50));
  }
  if (bVar1) {
LAB_143765a86:
    uVar7 = (ulonglong)*(int *)(param_1 + 0x68);
    if ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0xc0)) {
      psVar3 = (short *)(param_2 + 0x2a + uVar7 * 2);
      uVar8 = uVar7;
      do {
        iVar5 = (int)uVar8;
        if (*psVar3 != 0) {
LAB_143765ab8:
          psVar3 = (short *)(param_2 + 0x2a + (longlong)iVar5 * 2);
          *psVar3 = *psVar3 + -1;
          hkSemaphore::release(*(undefined8 *)(param_1 + 0x98 + (longlong)iVar5 * 8),1);
          return;
        }
        uVar8 = (ulonglong)(iVar5 + 1);
        uVar7 = uVar7 + 1;
        psVar3 = psVar3 + 1;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0xc0));
    }
  }
  return;
}



// FUNCTION 143765af0 FUN_143765af0 body=143 status=ok
// SIG undefined FUN_143765af0(void)

void FUN_143765af0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    puVar4 = (ushort *)(param_2 + 0x2a);
    puVar5 = (undefined8 *)(param_1 + 0x98);
    do {
      uVar1 = *puVar4;
      uVar2 = (uint)uVar1;
      *puVar4 = 0;
      if (uVar1 != 0) {
        do {
          hkSemaphore::release(*puVar5,1);
          uVar2 = uVar2 - 1;
        } while (0 < (int)uVar2);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc0));
  }
  return;
}



// FUNCTION 143765b80 FUN_143765b80 body=258 status=ok
// SIG undefined FUN_143765b80(void)

void FUN_143765b80(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  LPVOID pvVar4;
  longlong lVar5;
  int iVar6;
  
  if ((int)param_1[1] < param_2) {
    iVar1 = (int)param_1[1] * 2;
    if (param_2 <= iVar1) {
      param_2 = iVar1;
    }
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar4 + 0x58),param_2 << 8);
    if ((lVar5 != 0) && (lVar2 = *param_1, lVar2 != 0)) {
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        iVar1 = *(int *)((longlong)param_1 + 0xc);
        lVar3 = param_1[2];
        if (iVar1 < (int)lVar3) {
          FUN_14370c700(lVar5,(longlong)iVar1 * 0x100 + lVar2,
                        *(int *)((longlong)param_1 + 0x14) << 8);
        }
        else {
          iVar6 = (int)param_1[1] - iVar1;
          FUN_14370c700(lVar5,(longlong)iVar1 * 0x100 + lVar2,iVar6 * 0x100);
          FUN_14370c700((longlong)iVar6 * 0x100 + lVar5,*param_1,(int)lVar3 << 8);
        }
      }
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    FUN_143765990(param_1);
    *param_1 = lVar5;
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 143765c90 LeaveCriticalSection body=7 status=ok
// SIG void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000143765c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 143765ca0 thunk_FUN_143765cf0 body=5 status=ok
// SIG undefined thunk_FUN_143765cf0(void)

void thunk_FUN_143765cf0(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)*param_1,0xffffffff);
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143765cb0 FUN_143765cb0 body=58 status=ok
// SIG undefined FUN_143765cb0(void)

void FUN_143765cb0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28[0] = 0x1000;
  local_14 = 0;
  local_20 = param_1;
  local_18 = param_2;
  RaiseException(0x406d1388,0,6,(ULONG_PTR *)local_28);
  return;
}



// FUNCTION 143765cf0 FUN_143765cf0 body=48 status=ok
// SIG undefined FUN_143765cf0(void)

void FUN_143765cf0(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)*param_1,0xffffffff);
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143765d20 FUN_143765d20 body=10 status=ok
// SIG undefined FUN_143765d20(void)

void FUN_143765d20(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143765d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadIdealProcessor(*param_1);
  return;
}



// FUNCTION 143765d30 FUN_143765d30 body=10 status=ok
// SIG undefined FUN_143765d30(void)

void FUN_143765d30(undefined8 *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143765d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadPriority((HANDLE)*param_1,param_2);
  return;
}



// FUNCTION 143765d40 FUN_143765d40 body=12 status=ok
// SIG undefined FUN_143765d40(void)

void FUN_143765d40(undefined8 *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143765d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadAffinityMask((HANDLE)*param_1,(ulonglong)param_2);
  return;
}



// FUNCTION 143765d50 FUN_143765d50 body=279 status=ok
// SIG undefined FUN_143765d50(void)

undefined4 *
FUN_143765d50(undefined8 *param_1,undefined4 *param_2,LPTHREAD_START_ROUTINE param_3,LPVOID param_4,
             undefined8 param_5,uint param_6)

{
  HANDLE pvVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined8 *puVar3;
  INT_PTR IVar4;
  undefined8 local_218;
  undefined4 local_210;
  uint local_20c;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(longlong)(int)param_6,param_3,param_4,4,&param_6
                       );
  *param_1 = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  param_1[1] = (ulonglong)param_6;
  hModule = GetModuleHandleW(L"Kernel32.dll");
  pFVar2 = GetProcAddress(hModule,"SetThreadDescription");
  if (pFVar2 != (FARPROC)0x0) {
    puVar3 = (undefined8 *)FUN_143781a00(&local_218,param_5);
    IVar4 = (*pFVar2)(*param_1,*puVar3);
    local_210 = 0;
    if (-1 < (int)local_20c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_218,2,local_20c & 0x3fffffff);
    }
    if (-1 < (int)IVar4) goto LAB_143765e3c;
  }
  FUN_143765cb0(param_5,param_6);
LAB_143765e3c:
  ResumeThread((HANDLE)*param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143765e70 Semaphore body=32 status=ok
// SIG undefined Semaphore(void)

undefined8 * Semaphore::Semaphore(undefined8 *param_1,LONG param_2,LONG param_3)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,param_2,param_3,(LPCWSTR)0x0);
  *param_1 = pvVar1;
  return param_1;
}



// FUNCTION 143765e90 ~hkSemaphore body=10 status=ok
// SIG undefined ~hkSemaphore(void)

void hkSemaphore::~hkSemaphore(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143765e93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle((HANDLE)*param_1);
  return;
}



// FUNCTION 143765ea0 WaitForProc body=13 status=ok
// SIG undefined WaitForProc(void)

void FWindowsPlatformProcess::WaitForProc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143765ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  return;
}



// FUNCTION 143765eb0 WaitForProc body=5 status=ok
// SIG undefined WaitForProc(void)

void FWindowsPlatformProcess::WaitForProc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143765ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  return;
}



// FUNCTION 143765ec0 release body=13 status=ok
// SIG undefined release(void)

void hkSemaphore::release(undefined8 *param_1,LONG param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143765ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSemaphore((HANDLE)*param_1,param_2,(LPLONG)0x0);
  return;
}



// FUNCTION 143765ed0 release body=5 status=ok
// SIG undefined release(void)

void hkSemaphore::release(undefined8 *param_1,LONG param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143765ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSemaphore((HANDLE)*param_1,param_2,(LPLONG)0x0);
  return;
}



// FUNCTION 143765ee0 FUN_143765ee0 body=110 status=ok
// SIG undefined FUN_143765ee0(void)

undefined8 FUN_143765ee0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  
  FUN_143703810();
  FUN_143763040(1);
  plVar1 = (longlong *)FUN_14370d950();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,"hkWorkerThreadContext",3);
  FUN_14370ce50(param_1);
  TlsSetValue(DAT_146b83ebc,(LPVOID)(longlong)param_2);
  if (DAT_146b83ec0 != (code *)0x0) {
    (*DAT_146b83ec0)();
  }
  return param_1;
}



// FUNCTION 143765f50 FUN_143765f50 body=65 status=ok
// SIG undefined FUN_143765f50(void)

void FUN_143765f50(undefined8 param_1)

{
  longlong *plVar1;
  
  if (DAT_146b83ec8 != (code *)0x0) {
    (*DAT_146b83ec8)();
  }
  FUN_14370d050();
  plVar1 = (longlong *)FUN_14370d950();
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1,3);
  FUN_143702b50(param_1);
  return;
}


