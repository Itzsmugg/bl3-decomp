// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c79c90 get body=159 status=ok
// SIG undefined get(void)

ulonglong hb_user_data_array_t::get(LPCRITICAL_SECTION param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  EnterCriticalSection(param_1);
  uVar1 = uVar3;
  uVar2 = uVar3;
  if (*(uint *)&param_1[1].DebugInfo != 0) {
    uVar5 = uVar3;
    do {
      if (*(longlong *)(*(longlong *)&param_1[1].LockCount + uVar5 * 0x18) == param_2) {
        uVar1 = *(longlong *)&param_1[1].LockCount + uVar5 * 0x18;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = *(ulonglong *)(uVar1 + 8);
        }
        break;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)&param_1[1].DebugInfo);
  }
  LeaveCriticalSection(param_1);
  if (uVar1 != 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}



// FUNCTION 143c79d30 push body=230 status=ok
// SIG undefined push(void)

void * hb_prealloced_array_t<hb_user_data_array_t::hb_user_data_item_t,2>::push(uint *param_1)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    param_1[1] = 2;
    *(uint **)(param_1 + 2) = param_1 + 4;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar2 < uVar1) {
    *param_1 = uVar2 + 1;
    return (void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 0x18);
  }
  uVar2 = uVar1 + 8 + (uVar1 >> 1);
  if (*(uint **)(param_1 + 2) == param_1 + 4) {
    _Dst = (void *)HarfBuzzCalloc((ulonglong)uVar2,0x18);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),(ulonglong)*param_1 * 0x18);
  }
  else {
    if (uVar2 < uVar1) {
      return (void *)0x0;
    }
    if (0xaaaaaa9 < uVar2) {
      return (void *)0x0;
    }
    _Dst = (void *)HarfBuzzRealloc(*(uint **)(param_1 + 2),(ulonglong)uVar2 * 0x18);
  }
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  uVar1 = *param_1;
  *(void **)(param_1 + 2) = _Dst;
  param_1[1] = uVar2;
  *param_1 = uVar1 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar1 * 0x18);
}



// FUNCTION 143c79e20 set body=127 status=ok
// SIG undefined set(void)

bool hb_user_data_array_t::set
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  if (param_2 == 0) {
    return false;
  }
  if (((param_5 != 0) && (param_3 == 0)) && (param_4 == 0)) {
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::
    remove<hb_user_data_key_t_*___ptr64>(param_1 + 0x28);
    return true;
  }
  local_48 = (undefined4)param_2;
  uStack_44 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_40 = (undefined4)param_3;
  uStack_3c = (undefined4)((ulonglong)param_3 >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = param_4;
  lVar1 = hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::
          replace_or_insert<hb_user_data_array_t::hb_user_data_item_t>
                    (param_1 + 0x28,&local_28,param_1,param_5 != 0);
  return lVar1 != 0;
}



// FUNCTION 143c79ea0 FUN_143c79ea0 body=129 status=ok
// SIG undefined FUN_143c79ea0(void)

uint FUN_143c79ea0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = param_1 & 0xdfffffff | 0x202020;
  if (uVar2 < 0x5161616a) {
    if (uVar2 == 0x51616169) {
      return 0x5a696e68;
    }
    if (uVar2 == 0x43797273) {
      return 0x4379726c;
    }
    if ((uVar2 == 0x4c617466) || (uVar2 == 0x4c617467)) {
      return 0x4c61746e;
    }
    if (uVar2 == 0x51616163) {
      return 0x436f7074;
    }
  }
  else if (((uVar2 == 0x53797265) || (uVar2 == 0x5379726a)) || (uVar2 == 0x5379726e)) {
    return 0x53797263;
  }
  uVar1 = 0x5a7a7a7a;
  if ((param_1 & 0xc0e0e0e0 | 0x202020) == 0x40606060) {
    uVar1 = uVar2;
  }
  return uVar1;
}



// FUNCTION 143c79f30 hb_script_from_string body=20 status=ok
// SIG undefined hb_script_from_string(void)

void hb_script_from_string(void)

{
  undefined4 uVar1;
  
  uVar1 = hb_tag_from_string();
  FUN_143c79ea0(uVar1);
  return;
}



// FUNCTION 143c79f50 hb_script_get_horizontal_direction body=263 status=ok
// SIG undefined hb_script_get_horizontal_direction(void)

undefined8 hb_script_get_horizontal_direction(uint param_1)

{
  bool bVar1;
  
  if (param_1 < 0x4e617263) {
    if (param_1 == 0x4e617262) {
      return 5;
    }
    if (param_1 < 0x4b686173) {
      if (param_1 == 0x4b686172) {
        return 5;
      }
      if (param_1 == 0x43707274) {
        return 5;
      }
      if (param_1 == 0x41726162) {
        return 5;
      }
      if (param_1 == 0x41726d69) {
        return 5;
      }
      if (param_1 == 0x41767374) {
        return 5;
      }
      if (param_1 == 0x48656272) {
        return 5;
      }
      bVar1 = param_1 == 0x48756e67;
    }
    else if (param_1 < 0x4d656e65) {
      if (param_1 == 0x4d656e64) {
        return 5;
      }
      if (param_1 == 0x4c796469) {
        return 5;
      }
      if (param_1 == 0x4d616e64) {
        return 5;
      }
      bVar1 = param_1 == 0x4d616e69;
    }
    else {
      if (param_1 == 0x4d657263) {
        return 5;
      }
      bVar1 = param_1 == 0x4d65726f;
    }
  }
  else if (param_1 < 0x50686e79) {
    if (param_1 == 0x50686e78) {
      return 5;
    }
    if (param_1 < 0x50616c6e) {
      if (param_1 == 0x50616c6d) {
        return 5;
      }
      if (param_1 == 0x4e626174) {
        return 5;
      }
      if (param_1 == 0x4e6b6f6f) {
        return 5;
      }
      bVar1 = param_1 == 0x4f726b68;
    }
    else {
      if (param_1 == 0x50686c69) {
        return 5;
      }
      bVar1 = param_1 == 0x50686c70;
    }
  }
  else {
    if (param_1 == 0x50727469) {
      return 5;
    }
    if (param_1 == 0x53616d72) {
      return 5;
    }
    if (param_1 == 0x53617262) {
      return 5;
    }
    if (param_1 == 0x53797263) {
      return 5;
    }
    bVar1 = param_1 == 0x54686161;
  }
  if (bVar1) {
    return 5;
  }
  return 4;
}



// FUNCTION 143c7a060 hb_tag_from_string body=143 status=ok
// SIG undefined hb_tag_from_string(void)

undefined4 hb_tag_from_string(char *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  char local_res8 [8];
  
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (*param_1 == '\0')) {
    return 0;
  }
  if (4 < param_2) {
    param_2 = 4;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    lVar1 = -(longlong)param_1;
    do {
      if (*param_1 == '\0') break;
      param_1[(longlong)(local_res8 + lVar1)] = *param_1;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
    if (3 < (uint)uVar3) goto LAB_143c7a0be;
  }
  pcVar5 = local_res8 + uVar3;
  for (uVar4 = (ulonglong)(4 - (int)uVar3); uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = ' ';
    pcVar5 = pcVar5 + 1;
  }
LAB_143c7a0be:
  return CONCAT31(CONCAT21(CONCAT11(local_res8[0],local_res8[1]),local_res8[2]),local_res8[3]);
}



// FUNCTION 143c7a0f0 hb_icu_unicode_combining_class body=19 status=ok
// SIG undefined hb_icu_unicode_combining_class(void)

undefined1 hb_icu_unicode_combining_class(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143b20830(param_2);
  return uVar1;
}



// FUNCTION 143c7a110 hb_icu_unicode_compose body=46 status=ok
// SIG undefined hb_icu_unicode_compose(void)

undefined8 hb_icu_unicode_compose(void)

{
  int iVar1;
  int *in_R9;
  
  iVar1 = FUN_143b20880(DAT_146bc8698);
  if (iVar1 < 0) {
    return 0;
  }
  *in_R9 = iVar1;
  return 1;
}



// FUNCTION 143c7a140 hb_icu_unicode_decompose body=340 status=ok
// SIG undefined hb_icu_unicode_decompose(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool hb_icu_unicode_decompose(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_38;
  ushort local_32;
  ushort local_30 [4];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = &local_38;
  local_38 = 0;
  iVar2 = FUN_143b208d0(DAT_146bc8698,param_2,local_30,4);
  if ((local_38 < 1) && (-1 < iVar2)) {
    iVar2 = FUN_143ab3a60(local_30,iVar2);
    if (iVar2 == 1) {
      uVar3 = (uint)local_30[0];
      *param_3 = (uint)local_30[0];
      if ((uVar3 & 0xfffff800) == 0xd800) {
        if ((local_30[0] >> 10 & 1) == 0) {
          *param_3 = local_30[1] + 0xfca02400 + uVar3 * 0x400;
          *param_4 = 0;
          return *param_3 != (uint)param_2;
        }
        *param_3 = uVar3 + 0xfca02400 + (uint)local_32 * 0x400;
      }
      *param_4 = 0;
      bVar4 = *param_3 != (uint)param_2;
    }
    else {
      if (iVar2 == 2) {
        iVar2 = 1;
        *param_3 = (uint)local_30[0];
        if ((local_30[0] & 0xfffffc00) == 0xd800) {
          iVar2 = 2;
          *param_3 = (uint)local_30[0] * 0x400 + local_30[1] + 0xfca02400;
        }
        uVar1 = local_30[iVar2];
        *param_4 = (uint)uVar1;
        if ((uVar1 & 0xfffffc00) == 0xd800) {
          *param_4 = local_30[(longlong)iVar2 + 1] + 0xfca02400 + (uint)uVar1 * 0x400;
        }
      }
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 143c7a2a0 hb_icu_unicode_decompose_compatibility body=264 status=ok
// SIG undefined hb_icu_unicode_decompose_compatibility(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
hb_icu_unicode_decompose_compatibility(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  int *local_90;
  int *local_88;
  int local_78;
  ushort local_74;
  ushort local_72;
  undefined4 local_70 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_2 < 0x10000) {
    uVar2 = 1;
    local_74 = (ushort)param_2;
  }
  else {
    if (0x10ffff < param_2) {
      return 0;
    }
    local_74 = (short)(param_2 >> 10) + 0xd7c0;
    local_72 = (ushort)param_2 & 0x3ff | 0xdc00;
    uVar2 = 2;
  }
  local_88 = &local_78;
  local_90 = (int *)CONCAT44(local_90._4_4_,0x27);
  local_98 = local_68;
  local_78 = 0;
  uVar1 = FUN_143e27300(&local_74,uVar2,3,0);
  if (local_78 == 0) {
    local_90 = &local_78;
    local_78 = 0;
    local_98 = (undefined1 *)CONCAT44(local_98._4_4_,uVar1);
    FUN_143ab7110(param_3,0x13,local_70,local_68);
    if (local_78 != 0) {
      local_70[0] = 0;
    }
  }
  else {
    local_70[0] = 0;
  }
  return local_70[0];
}



// FUNCTION 143c7a3b0 hb_icu_unicode_eastasian_width body=60 status=ok
// SIG undefined hb_icu_unicode_eastasian_width(void)

undefined8 hb_icu_unicode_eastasian_width(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143b10c90(param_2,0x1004);
  if (((-1 < iVar1) && (2 < iVar1)) && ((iVar1 == 3 || ((iVar1 != 4 && (iVar1 == 5)))))) {
    return 2;
  }
  return 1;
}



// FUNCTION 143c7a3f0 FUN_143c7a3f0 body=343 status=ok
// SIG undefined FUN_143c7a3f0(void)

undefined8 FUN_143c7a3f0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b10c90(param_2,0x1005);
  switch(uVar1) {
  default:
    return 2;
  case 1:
    return 9;
  case 2:
    return 5;
  case 3:
    return 8;
  case 4:
    return 6;
  case 5:
    return 7;
  case 6:
    return 0xc;
  case 7:
    return 0xb;
  case 8:
    return 10;
  case 9:
    return 0xd;
  case 10:
    return 0xe;
  case 0xb:
    return 0xf;
  case 0xc:
    return 0x1d;
  case 0xd:
    return 0x1b;
  case 0xe:
    return 0x1c;
  case 0xf:
    return 0;
  case 0x10:
    return 1;
  case 0x11:
    return 3;
  case 0x12:
    return 4;
  case 0x13:
    return 0x11;
  case 0x14:
    return 0x16;
  case 0x15:
    return 0x12;
  case 0x16:
    return 0x10;
  case 0x17:
    return 0x15;
  case 0x18:
    return 0x19;
  case 0x19:
    return 0x17;
  case 0x1a:
    return 0x18;
  case 0x1b:
    return 0x1a;
  case 0x1c:
    return 0x14;
  case 0x1d:
    return 0x13;
  }
}



// FUNCTION 143c7a5d0 hb_icu_unicode_script body=53 status=ok
// SIG undefined hb_icu_unicode_script(void)

undefined8 hb_icu_unicode_script(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int local_res20 [2];
  
  local_res20[0] = 0;
  uVar1 = FUN_143a9f1a0(param_2,local_res20);
  if (0 < local_res20[0]) {
    return 0x5a7a7a7a;
  }
  uVar2 = hb_icu_script_to_script(uVar1);
  return uVar2;
}



// FUNCTION 143c7a610 hb_icu_get_unicode_funcs body=63 status=ok
// SIG undefined hb_icu_get_unicode_funcs(void)

undefined * hb_icu_get_unicode_funcs(void)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  LOCK();
  UNLOCK();
  if (DAT_146bc8698 == 0) {
    local_res8[0] = 0;
    lVar1 = FUN_143b208b0(local_res8);
    LOCK();
    if (DAT_146bc8698 != 0) {
      lVar1 = DAT_146bc8698;
    }
    DAT_146bc8698 = lVar1;
    UNLOCK();
  }
  return &DAT_145d39cd0;
}



// FUNCTION 143c7a650 hb_icu_script_to_script body=36 status=ok
// SIG undefined hb_icu_script_to_script(void)

undefined8 hb_icu_script_to_script(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == -1) {
    return 0;
  }
  uVar1 = FUN_143b11760();
  uVar1 = hb_script_from_string(uVar1,0xffffffff);
  return uVar1;
}



// FUNCTION 143c7a680 _hb_face_for_data_closure_create body=61 status=ok
// SIG undefined _hb_face_for_data_closure_create(void)

void _hb_face_for_data_closure_create(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)HarfBuzzCalloc(1);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *(undefined4 *)(puVar1 + 1) = param_2;
  *puVar1 = param_1;
  return;
}



// FUNCTION 143c7a6c0 _hb_face_for_data_closure_destroy body=30 status=ok
// SIG undefined _hb_face_for_data_closure_destroy(void)

void _hb_face_for_data_closure_destroy(undefined8 *param_1)

{
  hb_blob_destroy(*param_1);
  FMemory::operator_delete(param_1);
  return;
}



// FUNCTION 143c7a6e0 _hb_face_for_data_reference_table body=256 status=ok
// SIG undefined _hb_face_for_data_reference_table(void)

void _hb_face_for_data_reference_table(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint local_res10 [2];
  
  if (param_2 == 0) {
    hb_font_funcs_reference(*param_3);
    return;
  }
  uVar1 = *param_3;
  hb_blob_make_immutable(uVar1);
  puVar2 = (undefined1 *)hb_blob_get_data(uVar1,0);
  puVar5 = &DAT_146bc86a0;
  puVar4 = &DAT_146bc86a0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  lVar3 = OT::OpenTypeFontFile::get_face(puVar4,*(undefined4 *)(param_3 + 1));
  OT::OffsetTable::find_table_index(lVar3,param_2,local_res10);
  if (local_res10[0] < (ushort)((ushort)*(byte *)(lVar3 + 4) * 0x100 + (ushort)*(byte *)(lVar3 + 5))
     ) {
    puVar5 = (undefined1 *)((ulonglong)local_res10[0] * 0x10 + 0xc + lVar3);
  }
  hb_blob_create_sub_blob
            (*param_3,(uint)(byte)puVar5[9] * 0x10000 + (uint)(byte)puVar5[10] * 0x100 +
                      (uint)(byte)puVar5[8] * 0x1000000 + (uint)(byte)puVar5[0xb],
             (uint)(byte)puVar5[0xd] * 0x10000 + (uint)(byte)puVar5[0xe] * 0x100 +
             (uint)(byte)puVar5[0xc] * 0x1000000 + (uint)(byte)puVar5[0xf]);
  return;
}



// FUNCTION 143c7a7e0 check_array body=262 status=ok
// SIG undefined check_array(void)

undefined1
OT::hb_sanitize_context_t::check_array
          (undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((param_3 == 0) || (param_4 < (uint)(0xffffffff / (ulonglong)param_3))) {
    cVar1 = check_range(param_1,param_2,param_3 * param_4);
    uVar2 = cVar1 != '\0';
  }
  else {
    uVar2 = false;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  return uVar2;
}



// FUNCTION 143c7a8f0 check_range body=170 status=ok
// SIG undefined check_range(void)

undefined1 OT::hb_sanitize_context_t::check_range(longlong param_1,ulonglong param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (((param_2 < *(ulonglong *)(param_1 + 8)) || (*(ulonglong *)(param_1 + 0x10) < param_2)) ||
     ((uint)(*(int *)(param_1 + 0x10) - (int)param_2) < param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  return uVar1;
}



// FUNCTION 143c7a9a0 find_table_index body=206 status=ok
// SIG undefined find_table_index(void)

ulonglong OT::OffsetTable::find_table_index(longlong param_1,uint param_2,uint *param_3)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = 0;
  pbVar1 = (byte *)0x0;
  uVar2 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
  if (uVar2 != 0) {
    pbVar1 = (byte *)(param_1 + 0xe);
    do {
      if ((param_2 & 0xff) +
          (param_2 >> 0x10 & 0xff) * 0x10000 + (param_2 & 0xff000000) +
          (param_2 >> 8 & 0xff) * 0x100 ==
          (uint)pbVar1[-2] * 0x1000000 + (uint)pbVar1[-1] * 0x10000 + (uint)*pbVar1 * 0x100 +
          (uint)pbVar1[1]) {
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar3;
        }
        return CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
      }
      uVar3 = uVar3 + 1;
      pbVar1 = pbVar1 + 0x10;
    } while (uVar3 < uVar2);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffff;
  }
  return (ulonglong)pbVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c7aa70 get_face body=248 status=ok
// SIG undefined get_face(void)

byte * OT::OpenTypeFontFile::get_face(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (((iVar3 == 0x10000) || (iVar3 == 0x4f54544f)) || (iVar3 == 0x74727565)) {
    return param_1;
  }
  if (iVar3 == 0x74746366) {
    if ((ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) - 1 < 2) {
      if (param_2 < (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 +
                    (uint)param_1[8] * 0x1000000 + (uint)param_1[0xb]) {
        pbVar1 = param_1 + ((ulonglong)param_2 + 3) * 4;
      }
      else {
        pbVar1 = &DAT_146bc86a0;
      }
      uVar2 = (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
              (uint)pbVar1[3];
      if (uVar2 != 0) {
        return param_1 + uVar2;
      }
      return &DAT_146bc86a0;
    }
  }
  else if (iVar3 == 0x74797031) {
    return param_1;
  }
  return &DAT_146bc86a0;
}



// FUNCTION 143c7ab70 load_upem body=153 status=ok
// SIG undefined load_upem(void)

void hb_face_t::load_upem(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    lVar1 = (**(code **)(param_1 + 0x78))(param_1,0x68656164,*(undefined8 *)(param_1 + 0x80));
    if (lVar1 != 0) goto LAB_143c7ab9e;
  }
  lVar1 = hb_blob_get_empty();
LAB_143c7ab9e:
  uVar2 = OT::Sanitizer<OT::head>::sanitize(lVar1);
  hb_blob_make_immutable(uVar2);
  puVar3 = (undefined1 *)hb_blob_get_data(uVar2,0);
  puVar6 = &DAT_146bc86a0;
  if (puVar3 != (undefined1 *)0x0) {
    puVar6 = puVar3;
  }
  uVar4 = (ushort)(byte)puVar6[0x12] * 0x100 + (ushort)(byte)puVar6[0x13];
  uVar5 = 1000;
  if (uVar4 - 0x10 < 0x3ff1) {
    uVar5 = (uint)uVar4;
  }
  *(uint *)(param_1 + 0x94) = uVar5;
  hb_blob_destroy(uVar2);
  return;
}



// FUNCTION 143c7ac10 may_edit body=171 status=ok
// SIG undefined may_edit(void)

ulonglong OT::hb_sanitize_context_t::may_edit(longlong param_1)

{
  ulonglong in_RAX;
  
  if (0x1f < *(uint *)(param_1 + 0x1c)) {
    return in_RAX & 0xffffffffffffff00;
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) + 1;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  return (ulonglong)*(byte *)(param_1 + 0x18);
}



// FUNCTION 143c7acc0 sanitize body=326 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::OffsetTo<OT::OffsetTable,OT::IntType<unsigned_int,4>_>,OT::IntType<unsigned_int,4>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,4);
  if ((cVar1 != '\0') &&
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 4,4,
                         (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
                         (uint)param_1[1] * 0x10000 + (uint)param_1[3]), cVar1 != '\0')) {
    uVar3 = 0;
    uVar4 = (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
            (uint)param_1[3];
    if (uVar4 != 0) {
      param_1 = param_1 + 6;
      do {
        cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + -2,4);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = (uint)param_1[-2] * 0x1000000 + (uint)param_1[-1] * 0x10000 + (uint)*param_1 * 0x100
                + (uint)param_1[1];
        if ((uVar2 != 0) &&
           (cVar1 = OffsetTable::sanitize((ulonglong)uVar2 + param_3,param_2), cVar1 == '\0')) {
          cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + -2,4);
          if (cVar1 == '\0') {
            return 0;
          }
          param_1[-2] = 0;
          param_1[-1] = 0;
          param_1[0] = 0;
          param_1[1] = 0;
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 4;
      } while (uVar3 < uVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143c7ae10 sanitize body=2132 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Sanitizer<OT::OpenTypeFontFile>::sanitize(undefined8 param_1)

{
  char extraout_AL;
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  byte *pbVar8;
  byte *pbVar9;
  char cVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  ulonglong uVar17;
  char *pcVar18;
  byte *pbVar19;
  undefined4 uVar20;
  int local_58 [2];
  byte *local_50;
  byte *local_48;
  char local_40;
  int local_3c;
  undefined8 local_38;
  
  uVar3 = hb_font_funcs_reference();
  local_40 = '\0';
  local_38 = uVar3;
  pbVar4 = (byte *)hb_blob_get_data(uVar3,0);
  local_50 = pbVar4;
  uVar2 = FSlateUpdatableInstanceBuffer::GetNumInstances(uVar3);
  pbVar9 = pbVar4 + uVar2;
  local_3c = 0;
  uVar2 = (int)pbVar9 - (int)pbVar4;
  local_58[0] = 0;
  local_48 = pbVar9;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  do {
    if (pbVar4 == (byte *)0x0) {
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      hb_blob_destroy(uVar3);
      return param_1;
    }
    iVar13 = (int)pbVar9;
    if ((pbVar9 < pbVar4) || (uVar2 < 4)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    pbVar11 = pbVar4 + 4;
    uVar3 = 1;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    uVar14 = (uint)uVar3;
    if (cVar1 == '\0') {
      cVar1 = '\0';
      goto LAB_143c7b600;
    }
    iVar6 = (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
            (uint)pbVar4[3];
    cVar1 = (char)uVar3;
    pbVar8 = pbVar4;
    if (((iVar6 != 0x10000) && (iVar6 != 0x4f54544f)) && (iVar6 != 0x74727565)) {
      if (iVar6 == 0x74746366) {
        if (((pbVar11 < pbVar4) || (pbVar9 < pbVar11)) || ((uint)(iVar13 - (int)pbVar11) < 4)) {
          cVar1 = '\0';
        }
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if (cVar1 == '\0') {
          cVar1 = '\0';
        }
        else if (uVar14 < (ushort)((ushort)*pbVar11 * 0x100 + (ushort)pbVar11[1]) - 1) {
          cVar1 = (char)uVar14;
        }
        else {
          cVar1 = ArrayOf<OT::OffsetTo<OT::OffsetTable,OT::IntType<unsigned_int,4>_>,OT::IntType<unsigned_int,4>_>
                  ::sanitize(pbVar4 + 8,local_58,pbVar4);
          iVar13 = (int)local_48;
          pbVar8 = local_50;
          pbVar9 = local_48;
        }
        goto LAB_143c7b23a;
      }
      if (iVar6 == 0x74797031) goto LAB_143c7afa2;
LAB_143c7b469:
      cVar1 = (char)uVar3;
LAB_143c7b600:
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      hb_blob_destroy(local_38);
      if (cVar1 != '\0') {
        return param_1;
      }
      hb_blob_destroy(param_1);
      uVar3 = hb_blob_get_empty();
      return uVar3;
    }
LAB_143c7afa2:
    if ((pbVar9 < pbVar4) || (uVar2 < 0xc)) {
      cVar1 = '\0';
    }
    pbVar12 = pbVar4 + 0xc;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    if (cVar1 != '\0') {
      uVar7 = (ushort)*pbVar11 * 0x100 + (ushort)pbVar11[1];
      if (uVar7 < 0xfffffff) {
        if (((pbVar12 < pbVar4) || (pbVar9 < pbVar12)) ||
           ((uint)(iVar13 - (int)pbVar12) < (uint)uVar7 * 0x10)) {
          cVar1 = '\0';
        }
        else {
          cVar1 = (char)uVar14;
        }
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        bVar16 = cVar1 != '\0';
      }
      else {
        bVar16 = false;
      }
      cVar1 = '\x01';
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (bVar16) goto LAB_143c7b23a;
    }
    cVar1 = '\0';
LAB_143c7b23a:
    pcVar15 = "OUT-OF-RANGE";
    if (cVar1 != '\0') {
      if (local_3c == 0) goto LAB_143c7b600;
      cVar1 = '\0';
      local_3c = 0;
      if (((pbVar4 < pbVar8) || (pbVar9 < pbVar4)) || ((uint)(iVar13 - (int)pbVar4) < 4)) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\x01';
      }
      uVar14 = local_58[0] + 1;
      pbVar11 = pbVar4 + 4;
      uVar3 = 1;
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      uVar2 = (uint)uVar3;
      if (cVar10 == '\0') goto LAB_143c7b600;
      iVar6 = (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
              (uint)pbVar4[3];
      cVar1 = (char)uVar3;
      if (((iVar6 != 0x10000) && (iVar6 != 0x4f54544f)) && (iVar6 != 0x74727565)) {
        if (iVar6 == 0x74746366) {
          if (((pbVar11 < pbVar8) || (pbVar9 < pbVar11)) || ((uint)(iVar13 - (int)pbVar11) < 4)) {
            cVar1 = '\0';
          }
          AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
          if (cVar1 == '\0') {
            cVar1 = '\0';
          }
          else if (uVar2 < (ushort)((ushort)*pbVar11 * 0x100 + (ushort)pbVar11[1]) - 1) {
            cVar1 = (char)uVar2;
          }
          else {
            cVar1 = ArrayOf<OT::OffsetTo<OT::OffsetTable,OT::IntType<unsigned_int,4>_>,OT::IntType<unsigned_int,4>_>
                    ::sanitize(pbVar4 + 8,local_58,pbVar4);
          }
          if (local_3c != 0) {
            cVar1 = '\0';
          }
          goto LAB_143c7b600;
        }
        if (iVar6 != 0x74797031) goto LAB_143c7b469;
      }
      if (((pbVar4 < pbVar8) || (pbVar9 < pbVar4)) || ((uint)(iVar13 - (int)pbVar4) < 0xc)) {
        cVar1 = '\0';
      }
      pbVar12 = pbVar4 + 0xc;
      if (cVar1 != '\0') {
        pcVar15 = "OK";
      }
      uVar20 = 0xc;
      pcVar18 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
      uVar3 = 0;
      uVar17 = (ulonglong)uVar14;
      pbVar19 = pbVar12;
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if ((extraout_AL == '\0') ||
         (cVar1 = hb_sanitize_context_t::check_array
                            (local_58,pbVar12,0x10,(ushort)pbVar11[1] + (ushort)*pbVar11 * 0x100,
                             uVar17,uVar3,pcVar18,pbVar4,pbVar19,uVar20,pbVar8,pbVar9,pcVar15),
         cVar1 == '\0')) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      goto LAB_143c7b600;
    }
    if ((local_3c == 0) || (local_40 != '\0')) goto LAB_143c7b600;
    lVar5 = hb_blob_get_data_writable(param_1,0);
    FSlateUpdatableInstanceBuffer::GetNumInstances(param_1);
    uVar3 = local_38;
    if (lVar5 == 0) goto LAB_143c7b600;
    local_40 = '\x01';
    pbVar4 = (byte *)hb_blob_get_data(local_38,0);
    local_50 = pbVar4;
    uVar2 = FSlateUpdatableInstanceBuffer::GetNumInstances(uVar3);
    pbVar9 = pbVar4 + uVar2;
    local_3c = 0;
    uVar2 = (int)pbVar9 - (int)pbVar4;
    local_58[0] = 0;
    local_48 = pbVar9;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  } while( true );
}



// FUNCTION 143c7b670 sanitize body=515 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Sanitizer<OT::head>::sanitize(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char cVar4;
  short sVar5;
  byte *pbVar6;
  
  uVar2 = hb_font_funcs_reference();
  pbVar3 = (byte *)hb_blob_get_data(uVar2,0);
  uVar1 = FSlateUpdatableInstanceBuffer::GetNumInstances(uVar2);
  pbVar6 = pbVar3 + uVar1;
  uVar1 = (int)pbVar6 - (int)pbVar3;
  sVar5 = 1;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  if (pbVar3 == (byte *)0x0) {
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    hb_blob_destroy(uVar2);
  }
  else {
    if ((pbVar6 < pbVar3) || (uVar1 < 0x36)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (char)sVar5;
    }
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    if (((cVar4 == '\0') || ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != sVar5)) ||
       ((uint)pbVar3[0xd] * 0x10000 + (uint)pbVar3[0xe] * 0x100 + (uint)pbVar3[0xc] * 0x1000000 +
        (uint)pbVar3[0xf] != 0x5f0f3cf5)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (char)sVar5;
    }
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    hb_blob_destroy(uVar2);
    if (cVar4 == '\0') {
      hb_blob_destroy(param_1);
      param_1 = hb_blob_get_empty();
    }
  }
  return param_1;
}



// FUNCTION 143c7b880 sanitize body=113 status=ok
// SIG undefined sanitize(void)

undefined8 OT::OffsetTable::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 0xc,0x10,
                       (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c7b900 hb_face_create body=116 status=ok
// SIG undefined hb_face_create(void)

undefined8 hb_face_create(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    param_1 = hb_blob_get_empty();
  }
  uVar1 = hb_font_funcs_reference(param_1);
  uVar1 = OT::Sanitizer<OT::OpenTypeFontFile>::sanitize(uVar1);
  lVar2 = _hb_face_for_data_closure_create(uVar1,param_2);
  if (lVar2 == 0) {
    uVar1 = hb_face_get_empty();
    return uVar1;
  }
  uVar1 = hb_face_create_for_tables
                    (_hb_face_for_data_reference_table,lVar2,_hb_face_for_data_closure_destroy);
  hb_face_set_index(uVar1,param_2);
  return uVar1;
}



// FUNCTION 143c7b980 hb_face_create_for_tables body=194 status=ok
// SIG undefined hb_face_create_for_tables(void)

undefined4 * hb_face_create_for_tables(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = (undefined4 *)HarfBuzzCalloc(1,0xb0), puVar1 != (undefined4 *)0x0)
     ) {
    *puVar1 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    puVar1[0x25] = 0;
    *(longlong *)(puVar1 + 0x1e) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(code **)(puVar1 + 0x22) = param_3;
    puVar1[0x26] = 0xffffffff;
    return puVar1;
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2);
  }
  puVar1 = (undefined4 *)hb_face_get_empty();
  return puVar1;
}



// FUNCTION 143c7ba50 hb_face_destroy body=191 status=ok
// SIG undefined hb_face_destroy(void)

void hb_face_destroy(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
                (param_1 + 0xc,param_1 + 2);
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      puVar3 = *(undefined8 **)(param_1 + 0x2a);
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar3[1];
        hb_shape_plan_destroy(*puVar3);
        FMemory::operator_delete(puVar3);
        puVar3 = puVar2;
      }
      if (*(longlong *)(param_1 + 0x28) - 2U < 0xfffffffffffffffd) {
        _hb_ot_shaper_face_data_destroy();
      }
      if (*(code **)(param_1 + 0x22) != (code *)0x0) {
        (**(code **)(param_1 + 0x22))(*(undefined8 *)(param_1 + 0x20));
      }
      FMemory::operator_delete(param_1);
    }
  }
  return;
}



// FUNCTION 143c7bb10 hb_face_get_empty body=8 status=ok
// SIG undefined hb_face_get_empty(void)

undefined * hb_face_get_empty(void)

{
  return &DAT_146832bb0;
}



// FUNCTION 143c7bb20 hb_face_get_upem body=47 status=ok
// SIG undefined hb_face_get_upem(void)

undefined4 hb_face_get_upem(longlong param_1)

{
  if (*(int *)(param_1 + 0x94) == 0) {
    hb_face_t::load_upem();
    return *(undefined4 *)(param_1 + 0x94);
  }
  return *(undefined4 *)(param_1 + 0x94);
}



// FUNCTION 143c7bb50 hb_face_set_index body=13 status=ok
// SIG undefined hb_face_set_index(void)

void hb_face_set_index(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x90) = param_2;
  }
  return;
}



// FUNCTION 143c7bb60 hb_face_set_upem body=13 status=ok
// SIG undefined hb_face_set_upem(void)

void hb_face_set_upem(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x94) = param_2;
  }
  return;
}



// FUNCTION 143c7bb70 _hb_glyph_info_set_unicode_props body=209 status=ok
// SIG undefined _hb_glyph_info_set_unicode_props(void)

void _hb_glyph_info_set_unicode_props(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ushort uVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x70);
  uVar1 = *param_1;
  uVar3 = (**(code **)(lVar2 + 0x90))(lVar2,uVar1,*(undefined8 *)(lVar2 + 0xd0));
  if (uVar1 < 0x80) {
LAB_143c7bc22:
    *(ushort *)(param_1 + 4) = uVar3;
  }
  else {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 1;
    iVar5 = hb_unicode_funcs_t::is_default_ignorable(uVar1);
    if (iVar5 == 0) {
      uVar6 = uVar3;
      if ((1 << ((byte)uVar3 & 0x1f) & 0x1001400U) != 0) {
        sVar4 = hb_unicode_funcs_t::modified_combining_class(lVar2,*param_1);
        uVar3 = sVar4 << 8 | uVar3;
        if (uVar1 - 0x1f3fb < 5) {
          uVar3 = 0xb;
        }
        goto LAB_143c7bc22;
      }
    }
    else {
      *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 2;
      if (uVar1 == 0x200c) {
        *(ushort *)(param_1 + 4) = uVar3 | 0xc0;
        return;
      }
      uVar6 = uVar3 | 0x80;
      if (uVar1 == 0x200d) {
        uVar6 = uVar3 | 0xa0;
      }
    }
    *(ushort *)(param_1 + 4) = uVar6;
  }
  return;
}



// FUNCTION 143c7bc70 compile body=514 status=ok
// SIG undefined compile(void)

void hb_ot_shape_planner_t::compile(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 local_res8 [2];
  
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x14);
  *param_2 = *(uint *)(param_1 + 8);
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar1;
  uVar5 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x24);
  param_2[4] = *(uint *)(param_1 + 0x18);
  param_2[5] = uVar5;
  param_2[6] = uVar2;
  param_2[7] = uVar1;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x28);
  hb_ot_map_builder_t::compile(param_1 + 0x30,param_2 + 10);
  local_res8[0] = 0x72746c6d;
  pvVar4 = bsearch(local_res8,*(void **)(param_2 + 0x10),(ulonglong)param_2[0xe],0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  uVar5 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)pvVar4 + 0x1c);
  }
  param_2[0x10c] = uVar2;
  local_res8[0] = 0x66726163;
  pvVar4 = bsearch(local_res8,*(void **)(param_2 + 0x10),(ulonglong)param_2[0xe],0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)pvVar4 + 0x1c);
  }
  param_2[0x10d] = uVar2;
  local_res8[0] = 0x6e756d72;
  pvVar4 = bsearch(local_res8,*(void **)(param_2 + 0x10),(ulonglong)param_2[0xe],0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)pvVar4 + 0x1c);
  }
  param_2[0x10e] = uVar2;
  local_res8[0] = 0x646e6f6d;
  pvVar4 = bsearch(local_res8,*(void **)(param_2 + 0x10),(ulonglong)param_2[0xe],0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)pvVar4 + 0x1c);
  }
  param_2[0x10f] = uVar2;
  local_res8[0] = 0x766b726e;
  if ((*param_2 & 0xfffffffe) == 4) {
    local_res8[0] = 0x6b65726e;
  }
  pvVar4 = bsearch(local_res8,*(void **)(param_2 + 0x10),(ulonglong)param_2[0xe],0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)pvVar4 + 0x18);
  }
  param_2[0x110] = uVar2;
  if ((param_2[0x10d] != 0) || ((param_2[0x10e] != 0 && (param_2[0x10f] != 0)))) {
    uVar5 = 1;
  }
  param_2[0x111] = param_2[0x111] & 0xfffffffc;
  local_res8[0] = 0x6d61726b;
  param_2[0x111] = param_2[0x111] | (uint)(uVar2 != 0) * 2 | uVar5;
  pvVar4 = bsearch(local_res8,*(void **)(param_2 + 0x10),(ulonglong)param_2[0xe],0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((longlong)pvVar4 + 0x1c);
  }
  param_2[0x111] = param_2[0x111] & 0xfffffffb;
  param_2[0x111] = param_2[0x111] | (uint)(iVar3 != 0) << 2;
  return;
}



// FUNCTION 143c7be80 finish body=117 status=ok
// SIG undefined finish(void)

void hb_ot_map_builder_t::finish(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x58) != param_1 + 0x60) {
    FMemory::operator_delete();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar1 = (undefined8 *)(param_1 + 1000);
  lVar2 = 2;
  do {
    if ((undefined8 *)*puVar1 != puVar1 + 1) {
      FMemory::operator_delete();
    }
    *puVar1 = 0;
    puVar1[-1] = 0;
    puVar1 = puVar1 + 0x12;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143c7bf00 finish body=154 status=ok
// SIG undefined finish(void)

void hb_ot_map_t::finish(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x18) != param_1 + 0x20) {
    FMemory::operator_delete();
  }
  puVar1 = (undefined8 *)(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x148);
  lVar2 = 2;
  do {
    if ((undefined8 *)*puVar3 != puVar3 + 1) {
      FMemory::operator_delete();
    }
    *puVar3 = 0;
    puVar3[-1] = 0;
    if ((undefined8 *)*puVar1 != puVar1 + 1) {
      FMemory::operator_delete();
    }
    *puVar1 = 0;
    puVar3 = puVar3 + 0x22;
    puVar1[-1] = 0;
    puVar1 = puVar1 + 10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143c7bfa0 hb_ensure_native_direction body=271 status=ok
// SIG undefined hb_ensure_native_direction(void)

void hb_ensure_native_direction(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (((uVar1 & 0xfffffffe) != 4) ||
     (uVar2 = hb_script_get_horizontal_direction(*(undefined4 *)(param_1 + 0x94)), uVar1 == uVar2))
  {
    if ((uVar1 & 0xfffffffe) != 6) {
      return;
    }
    if (uVar1 == 6) {
      return;
    }
  }
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (1 < uVar1) {
    puVar4 = (undefined2 *)(*(longlong *)(param_1 + 200) + 0x24);
    do {
      if ((1 << ((byte)*puVar4 & 0x1f) & 0x1c00U) == 0) {
        if ((*(int *)(param_1 + 0x7c) == 1) && (1 < uVar3 - uVar2)) {
          hb_buffer_t::merge_clusters_impl(param_1,uVar2,uVar3);
        }
        hb_buffer_t::reverse_range(param_1,uVar2,uVar3);
        uVar2 = uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 10;
    } while (uVar3 < uVar1);
  }
  if ((*(int *)(param_1 + 0x7c) == 1) && (1 < uVar1 - uVar2)) {
    hb_buffer_t::merge_clusters_impl(param_1,uVar2,uVar1);
  }
  hb_buffer_t::reverse_range(param_1,uVar2,uVar1);
  hb_buffer_t::reverse(param_1);
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) ^ 1;
  return;
}



// FUNCTION 143c7c0b0 hb_form_clusters body=187 status=ok
// SIG undefined hb_form_clusters(void)

void hb_form_clusters(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  
  if (((*(byte *)(param_1 + 0x84) & 1) != 0) && (*(int *)(param_1 + 0x7c) == 0)) {
    uVar3 = 0;
    uVar4 = 1;
    uVar1 = *(uint *)(param_1 + 0xb8);
    if (1 < uVar1) {
      puVar5 = (ushort *)(*(longlong *)(param_1 + 200) + 0x24);
      do {
        uVar2 = uVar3;
        if ((((1 << ((byte)*puVar5 & 0x1f) & 0x1c00U) == 0) && ((*puVar5 & 0x60) == 0)) &&
           (uVar2 = uVar4, 1 < uVar4 - uVar3)) {
          hb_buffer_t::merge_clusters_impl(param_1,uVar3,uVar4);
        }
        uVar3 = uVar2;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 10;
      } while (uVar4 < uVar1);
    }
    if (1 < uVar1 - uVar3) {
      hb_buffer_t::merge_clusters_impl(param_1,uVar3,uVar1);
    }
  }
  return;
}



// FUNCTION 143c7c170 hb_insert_dotted_circle body=314 status=ok
// SIG undefined hb_insert_dotted_circle(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void hb_insert_dotted_circle(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if ((((*(byte *)(param_1 + 0x78) & 1) != 0) && (*(int *)(param_1 + 0x10c) == 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 200) + 0x10) & 0x1f) == 0xc)) {
    local_48[0] = 0;
    local_58 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88);
    iVar1 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                      (param_2,*(undefined8 *)(param_2 + 0xa0),0x25cc,local_48);
    if (iVar1 != 0) {
      local_40 = 0x25cc;
      uStack_3c = 0;
      uStack_34 = 0;
      _hb_glyph_info_set_unicode_props(&local_40,param_1);
      hb_buffer_t::clear_output(param_1);
      *(undefined4 *)(param_1 + 0xb4) = 0;
      local_18 = uStack_34._4_4_;
      local_28 = local_40;
      uStack_1c = (undefined4)uStack_34;
      uStack_20 = *(undefined4 *)(*(longlong *)(param_1 + 200) + 8);
      uStack_24 = *(undefined4 *)(*(longlong *)(param_1 + 200) + 4);
      hb_buffer_t::output_info(param_1,&local_28);
      if (*(uint *)(param_1 + 0xb4) < *(uint *)(param_1 + 0xb8)) {
        do {
          if (*(char *)(param_1 + 0xb0) != '\0') break;
          hb_buffer_t::next_glyph(param_1);
        } while (*(uint *)(param_1 + 0xb4) < *(uint *)(param_1 + 0xb8));
      }
      hb_buffer_t::swap_buffers(param_1);
    }
  }
  return;
}



// FUNCTION 143c7c2b0 hb_ot_hide_default_ignorables body=531 status=ok
// SIG undefined hb_ot_hide_default_ignorables(void)

void hb_ot_hide_default_ignorables(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 local_res8 [2];
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (((*(byte *)(lVar6 + 0x84) & 2) != 0) && ((*(byte *)(lVar6 + 0x78) & 4) == 0)) {
    uVar19 = 0;
    uVar4 = *(uint *)(lVar6 + 0xb8);
    lVar7 = *(longlong *)(lVar6 + 0xd8);
    lVar8 = *(longlong *)(lVar6 + 200);
    if (uVar4 != 0) {
      pbVar16 = (byte *)(lVar8 + 0xc);
      do {
        if (((pbVar16[4] & 0x80) != 0) && ((*pbVar16 >> 5 & 1) == 0)) break;
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        pbVar16 = pbVar16 + 0x14;
      } while (uVar18 < uVar4);
    }
    uVar18 = (uint)uVar19;
    if (uVar18 != uVar4) {
      lVar9 = *(longlong *)(param_1 + 8);
      local_res8[0] = 0;
      iVar14 = (**(code **)(*(longlong *)(lVar9 + 0x98) + 0x168))
                         (lVar9,*(undefined8 *)(lVar9 + 0xa0),0x20,local_res8,
                          *(undefined8 *)(*(longlong *)(lVar9 + 0x98) + 0x88));
      if (iVar14 == 0) {
        if (uVar18 < uVar4) {
          pbVar16 = (byte *)(lVar8 + (uVar19 * 5 + 3) * 4);
          do {
            uVar20 = uVar18 + 1;
            uVar15 = (uint)uVar19;
            if (((pbVar16[4] & 0x80) == 0) || ((*pbVar16 >> 5 & 1) != 0)) {
              if (uVar15 != uVar18) {
                uVar13 = *(undefined8 *)(pbVar16 + -4);
                puVar1 = (undefined8 *)(lVar8 + uVar19 * 0x14);
                *puVar1 = *(undefined8 *)(pbVar16 + -0xc);
                puVar1[1] = uVar13;
                *(undefined4 *)(lVar8 + 0x10 + uVar19 * 0x14) = *(undefined4 *)(pbVar16 + 4);
                pbVar2 = pbVar16 + (lVar7 - lVar8) + -0xc;
                uVar10 = *(undefined4 *)(pbVar2 + 4);
                uVar11 = *(undefined4 *)(pbVar2 + 8);
                uVar12 = *(undefined4 *)(pbVar2 + 0xc);
                puVar3 = (undefined4 *)(lVar7 + uVar19 * 0x14);
                *puVar3 = *(undefined4 *)pbVar2;
                puVar3[1] = uVar10;
                puVar3[2] = uVar11;
                puVar3[3] = uVar12;
                *(undefined4 *)(lVar7 + 0x10 + uVar19 * 0x14) =
                     *(undefined4 *)(pbVar16 + (lVar7 - lVar8) + 4);
              }
              uVar19 = (ulonglong)(uVar15 + 1);
            }
            else {
              uVar5 = *(uint *)(pbVar16 + -4);
              if ((uVar4 <= uVar20) || (uVar5 != *(uint *)(lVar8 + 8 + (ulonglong)uVar20 * 0x14))) {
                if (uVar15 == 0) {
                  if (uVar20 < uVar4) {
                    hb_buffer_t::merge_clusters_impl(lVar6,uVar18,uVar18 + 2);
                  }
                }
                else {
                  uVar18 = *(uint *)(lVar8 + 8 + (ulonglong)(uVar15 - 1) * 0x14);
                  uVar17 = uVar19;
                  if (uVar5 < uVar18) {
                    do {
                      uVar15 = (int)uVar17 - 1;
                      uVar17 = (ulonglong)uVar15;
                      if (*(uint *)(lVar8 + 8 + uVar17 * 0x14) != uVar18) break;
                      *(uint *)(lVar8 + 8 + uVar17 * 0x14) = uVar5;
                    } while (uVar15 != 0);
                  }
                }
              }
            }
            pbVar16 = pbVar16 + 0x14;
            uVar18 = uVar20;
          } while (uVar20 < uVar4);
        }
        *(int *)(lVar6 + 0xb8) = (int)uVar19;
      }
      else if (uVar18 < uVar4) {
        uVar17 = (ulonglong)(uVar4 - uVar18);
        pbVar16 = (byte *)(lVar8 + uVar19 * 0x14 + 0xc);
        do {
          if (((pbVar16[4] & 0x80) != 0) && ((*pbVar16 >> 5 & 1) == 0)) {
            *(undefined4 *)(pbVar16 + -0xc) = local_res8[0];
          }
          pbVar16 = pbVar16 + 0x14;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143c7c4d0 hb_ot_mirror_chars body=231 status=ok
// SIG undefined hb_ot_mirror_chars(void)

void hb_ot_mirror_chars(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  
  if ((*(uint *)((longlong)param_1 + 0x2c) & 0xfffffffd) != 4) {
    lVar2 = param_1[3];
    uVar1 = *(uint *)(*param_1 + 0x430);
    lVar3 = *(longlong *)(lVar2 + 0x70);
    piVar6 = *(int **)(lVar2 + 200);
    if (*(uint *)(lVar2 + 0xb8) != 0) {
      uVar7 = (ulonglong)*(uint *)(lVar2 + 0xb8);
      do {
        iVar4 = (**(code **)(lVar3 + 0x98))(lVar3,*piVar6,*(undefined8 *)(lVar3 + 0xd8));
        if (iVar4 == *piVar6) {
LAB_143c7c584:
          piVar6[1] = piVar6[1] | uVar1;
        }
        else {
          lVar2 = param_1[1];
          local_res8[0] = 0;
          iVar5 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x168))
                            (lVar2,*(undefined8 *)(lVar2 + 0xa0),iVar4,local_res8,
                             *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x88));
          if (iVar5 == 0) goto LAB_143c7c584;
          *piVar6 = iVar4;
        }
        piVar6 = piVar6 + 5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}



// FUNCTION 143c7c5c0 hb_ot_position body=130 status=ok
// SIG undefined hb_ot_position(void)

void hb_ot_position(longlong *param_1)

{
  char cVar1;
  
  hb_buffer_t::clear_positions(param_1[3]);
  hb_ot_position_default(param_1);
  cVar1 = hb_ot_position_complex(param_1);
  if ((cVar1 == '\0') && (*(char *)(*(longlong *)(*param_1 + 0x20) + 0x5c) != '\0')) {
    _hb_ot_shape_fallback_position(*param_1,param_1[1],param_1[3]);
  }
  if ((*(uint *)(param_1[3] + 0x90) & 0xfffffffd) == 5) {
    hb_buffer_t::hb_buffer_reverse();
  }
  if (cVar1 == '\0') {
    _hb_ot_shape_fallback_kern(*param_1,param_1[1],param_1[3]);
  }
  return;
}



// FUNCTION 143c7c650 hb_ot_position_complex body=657 status=ok
// SIG undefined hb_ot_position_complex(void)

undefined8 hb_ot_position_complex(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int local_res8 [2];
  int local_res10 [2];
  
  hb_ot_layout_position_start(param_1[1],param_1[3]);
  uVar11 = 0;
  uVar1 = *(uint *)(param_1[3] + 0xb8);
  uVar9 = (ulonglong)uVar1;
  iVar5 = hb_ot_layout_has_positioning(param_1[2]);
  if (((iVar5 != 0) || (*(char *)(*(longlong *)(*param_1 + 0x20) + 0x5c) != '\0')) ||
     ((*(uint *)(param_1[3] + 0x90) & 0xfffffffd) == 5)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  if (*(int *)(*(longlong *)(*param_1 + 0x20) + 0x58) == 1) {
    zero_mark_widths_by_gdef(param_1[3],cVar8);
  }
  if (iVar5 != 0) {
    lVar7 = *(longlong *)(param_1[3] + 200);
    lVar2 = *(longlong *)(param_1[3] + 0xd8);
    cVar4 = hb_font_t::has_func(param_1[1],6);
    if ((cVar4 != '\0') && (uVar1 != 0)) {
      piVar6 = (int *)(lVar2 + 8);
      uVar10 = uVar9;
      do {
        lVar3 = param_1[1];
        local_res10[0] = 0;
        local_res8[0] = 0;
        (**(code **)(*(longlong *)(lVar3 + 0x98) + 0x188))
                  (lVar3,*(undefined8 *)(lVar3 + 0xa0),
                   *(undefined4 *)((longlong)piVar6 + (lVar7 - lVar2) + -8),local_res8,local_res10,
                   *(undefined8 *)(*(longlong *)(lVar3 + 0x98) + 0xa8));
        *piVar6 = *piVar6 + local_res8[0];
        piVar6[1] = piVar6[1] + local_res10[0];
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 5;
      } while (uVar10 != 0);
    }
    hb_ot_map_t::position(*param_1 + 0x28,*param_1,param_1[1],param_1[3]);
    cVar4 = hb_font_t::has_func(param_1[1],6);
    if ((cVar4 != '\0') && (uVar1 != 0)) {
      piVar6 = (int *)(lVar2 + 8);
      do {
        lVar3 = param_1[1];
        local_res8[0] = 0;
        local_res10[0] = local_res8[0];
        (**(code **)(*(longlong *)(lVar3 + 0x98) + 0x188))
                  (lVar3,*(undefined8 *)(lVar3 + 0xa0),
                   *(undefined4 *)((longlong)piVar6 + (lVar7 - lVar2) + -8),local_res8,local_res10,
                   *(undefined8 *)(*(longlong *)(lVar3 + 0x98) + 0xa8));
        *piVar6 = *piVar6 - local_res8[0];
        piVar6[1] = piVar6[1] - local_res10[0];
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 5;
      } while (uVar9 != 0);
    }
    uVar11 = 1;
  }
  lVar7 = 0;
  if (*(int *)(*(longlong *)(*param_1 + 0x20) + 0x58) == 2) {
    lVar2 = param_1[3];
    lVar3 = *(longlong *)(lVar2 + 200);
    if (*(uint *)(lVar2 + 0xb8) != 0) {
      uVar9 = (ulonglong)*(uint *)(lVar2 + 0xb8);
      do {
        if ((*(byte *)(lVar3 + 0xc + lVar7) >> 3 & 1) != 0) {
          if (cVar8 != '\0') {
            piVar6 = (int *)(*(longlong *)(lVar2 + 0xd8) + lVar7);
            piVar6[2] = piVar6[2] - *piVar6;
            piVar6[3] = piVar6[3] - piVar6[1];
          }
          *(undefined8 *)(lVar7 + *(longlong *)(lVar2 + 0xd8)) = 0;
        }
        lVar7 = lVar7 + 0x14;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1[1]);
  hb_ot_zero_width_default_ignorables(param_1);
  hb_ot_layout_position_finish_offsets(param_1[1],param_1[3]);
  return uVar11;
}



// FUNCTION 143c7c8f0 hb_ot_position_default body=504 status=ok
// SIG undefined hb_ot_position_default(void)

void hb_ot_position_default(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res8 [2];
  int local_res10 [2];
  
  lVar2 = param_1[3];
  uVar1 = *(uint *)(lVar2 + 0xb8);
  uVar10 = (ulonglong)uVar1;
  lVar3 = *(longlong *)(lVar2 + 200);
  puVar4 = *(undefined4 **)(lVar2 + 0xd8);
  if ((*(uint *)(lVar2 + 0x90) & 0xfffffffe) == 4) {
    if (uVar1 != 0) {
      uVar11 = (ulonglong)uVar1;
      puVar8 = puVar4;
      do {
        lVar2 = param_1[1];
        uVar6 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x178))
                          (lVar2,*(undefined8 *)(lVar2 + 0xa0),
                           *(undefined4 *)((lVar3 - (longlong)puVar4) + (longlong)puVar8),
                           *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x98));
        *puVar8 = uVar6;
        puVar8 = puVar8 + 5;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    cVar5 = hb_font_t::has_func(param_1[1],6);
    if ((cVar5 != '\0') && (uVar1 != 0)) {
      piVar9 = puVar4 + 2;
      do {
        lVar2 = param_1[1];
        local_res10[0] = 0;
        local_res8[0] = 0;
        (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x188))
                  (lVar2,*(undefined8 *)(lVar2 + 0xa0),
                   *(undefined4 *)((lVar3 - (longlong)puVar4) + -8 + (longlong)piVar9),local_res8,
                   local_res10,*(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0xa8));
        *piVar9 = *piVar9 - local_res8[0];
        piVar9[1] = piVar9[1] - local_res10[0];
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 5;
      } while (uVar10 != 0);
    }
  }
  else if (uVar1 != 0) {
    lVar2 = (lVar3 - (longlong)puVar4) + -0xc;
    piVar9 = puVar4 + 3;
    do {
      lVar3 = param_1[1];
      iVar7 = (**(code **)(*(longlong *)(lVar3 + 0x98) + 0x180))
                        (lVar3,*(undefined8 *)(lVar3 + 0xa0),
                         *(undefined4 *)(lVar2 + (longlong)piVar9),
                         *(undefined8 *)(*(longlong *)(lVar3 + 0x98) + 0xa0));
      local_res10[0] = 0;
      piVar9[-2] = iVar7;
      lVar3 = param_1[1];
      local_res8[0] = 0;
      (**(code **)(*(longlong *)(lVar3 + 0x98) + 400))
                (lVar3,*(undefined8 *)(lVar3 + 0xa0),*(undefined4 *)(lVar2 + (longlong)piVar9),
                 local_res8,local_res10,*(undefined8 *)(*(longlong *)(lVar3 + 0x98) + 0xb0));
      piVar9[-1] = piVar9[-1] - local_res8[0];
      *piVar9 = *piVar9 - local_res10[0];
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 5;
    } while (uVar10 != 0);
  }
  if ((*(byte *)(param_1[3] + 0x84) & 4) == 0) {
    return;
  }
  FUN_143c92b00(*param_1,param_1[1]);
  return;
}



// FUNCTION 143c7caf0 hb_ot_shape_collect_features body=483 status=ok
// SIG undefined hb_ot_shape_collect_features(void)

void hb_ot_shape_collect_features(longlong param_1,uint *param_2,longlong param_3,uint param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar6 = (ulonglong)param_4;
  if (*param_2 == 4) {
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x6c747261,1);
    uVar2 = 0x6c74726d;
  }
  else {
    if (*param_2 != 5) goto LAB_143c7cb79;
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x72746c61,1,1);
    uVar2 = 0x72746c6d;
  }
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,uVar2,1);
LAB_143c7cb79:
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x66726163,1);
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x6e756d72,1);
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x646e6f6d,1);
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x28) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  pcVar3 = s_pmcclcolkramkmkmgilr_146832c60;
  lVar5 = 5;
  do {
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,*(undefined4 *)pcVar3,1);
    pcVar3 = pcVar3 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((*param_2 & 0xfffffffe) == 4) {
    pcVar3 = s_tlacgilcsrucnrekagiltlcr_146832c78;
    lVar5 = 6;
    do {
      uVar7 = 0;
      if (*(int *)pcVar3 == 0x6b65726e) {
        uVar7 = 2;
      }
      hb_ot_map_builder_t::add_feature(param_1 + 0x30,*(int *)pcVar3,1,uVar7 | 1);
      pcVar3 = (char *)((longlong)pcVar3 + 4);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x76657274,1);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 0xc);
    do {
      if ((piVar4[-1] == 0) && (*piVar4 == -1)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      hb_ot_map_builder_t::add_feature(param_1 + 0x30,piVar4[-3],piVar4[-2],uVar2);
      piVar4 = piVar4 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 143c7cce0 hb_ot_shape_complex_categorize body=960 status=ok
// SIG undefined hb_ot_shape_complex_categorize(void)

char * hb_ot_shape_complex_categorize(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar1 < 0x4d616e65) {
    if (uVar1 == 0x4d616e64) goto LAB_143c7cfeb;
    if (uVar1 < 0x48616e68) {
      if (uVar1 == 0x48616e67) {
        return "hangul";
      }
      if (uVar1 < 0x43616b6e) {
        if (uVar1 == 0x43616b6d) goto LAB_143c7d07f;
        if (uVar1 < 0x42656e68) {
          if (uVar1 == 0x42656e67) goto LAB_143c7cda9;
          if (uVar1 == 0x41726162) goto LAB_143c7cfeb;
          if (uVar1 == 0x42616c69) goto LAB_143c7d07f;
          bVar3 = uVar1 == 0x4261746b;
        }
        else {
          if ((uVar1 == 0x42726168) || (uVar1 == 0x42756769)) goto LAB_143c7d07f;
          bVar3 = uVar1 == 0x42756864;
        }
      }
      else {
        if (0x45677970 < uVar1) {
          if (uVar1 != 0x4772616e) {
            if ((uVar1 != 0x47756a72) && (uVar1 != 0x47757275)) {
              return "default";
            }
            goto LAB_143c7cda9;
          }
          goto LAB_143c7d07f;
        }
        if ((uVar1 == 0x45677970) || (uVar1 == 0x4368616d)) goto LAB_143c7d07f;
        if (uVar1 == 0x44657661) goto LAB_143c7cda9;
        bVar3 = uVar1 == 0x4475706c;
      }
    }
    else if (uVar1 < 0x4b686f6b) {
      if (uVar1 == 0x4b686f6a) goto LAB_143c7d07f;
      if (0x4a617661 < uVar1) {
        if ((uVar1 != 0x4b616c69) && (uVar1 != 0x4b686172)) {
          if (uVar1 != 0x4b686d72) {
            return "default";
          }
          if (*(char *)(param_1 + 0xc) == '\0') {
            return "default";
          }
          iVar2 = hb_ot_layout_language_find_feature
                            (*param_1,0x47535542,*(undefined4 *)((longlong)param_1 + 100),
                             *(undefined4 *)((longlong)param_1 + 0x6c),0x70726566,0);
          if (iVar2 != 0) {
            return "indic";
          }
          return "default";
        }
        goto LAB_143c7d07f;
      }
      if (uVar1 == 0x4a617661) goto LAB_143c7cda9;
      if (uVar1 == 0x48616e6f) goto LAB_143c7d07f;
      if (uVar1 == 0x48656272) {
        return "hebrew";
      }
      bVar3 = uVar1 == 0x486d6e67;
    }
    else if (uVar1 < 0x4c616f70) {
      if (uVar1 == 0x4c616f6f) {
        return "thai";
      }
      if (uVar1 == 0x4b6e6461) goto LAB_143c7cda9;
      if (uVar1 == 0x4b746869) goto LAB_143c7d07f;
      bVar3 = uVar1 == 0x4c616e61;
    }
    else {
      if ((uVar1 == 0x4c657063) || (uVar1 == 0x4c696d62)) goto LAB_143c7d07f;
      bVar3 = uVar1 == 0x4d61686a;
    }
  }
  else if (uVar1 < 0x53696e69) {
    if (uVar1 == 0x53696e68) {
LAB_143c7cda9:
      if (*(int *)(param_1 + 0xb) != 0x44464c54) {
        return "indic";
      }
      return "default";
    }
    if (uVar1 < 0x4f727962) {
      if (uVar1 == 0x4f727961) goto LAB_143c7cda9;
      if (0x4d6f6e67 < uVar1) {
        if (uVar1 == 0x4d746569) goto LAB_143c7d07f;
        if (uVar1 == 0x4d796d72) {
          if (*(int *)(param_1 + 0xb) == 0x6d796d32) {
            return "myanmar";
          }
          if (*(int *)(param_1 + 0xb) != 0x6d796d72) {
            return "default";
          }
          return "default";
        }
        if (uVar1 != 0x4e6b6f6f) {
          return "default";
        }
LAB_143c7cfeb:
        if ((*(int *)(param_1 + 0xb) == 0x44464c54) && (uVar1 != 0x41726162)) {
          return "default";
        }
        if ((*(uint *)(param_1 + 1) & 0xfffffffe) != 4) {
          return "default";
        }
        return "arabic";
      }
      if ((uVar1 == 0x4d6f6e67) || (uVar1 == 0x4d616e69)) goto LAB_143c7cfeb;
      if (uVar1 == 0x4d6c796d) goto LAB_143c7cda9;
      bVar3 = uVar1 == 0x4d6f6469;
    }
    else if (uVar1 < 0x53617573) {
      if (uVar1 == 0x53617572) goto LAB_143c7d07f;
      if ((uVar1 == 0x50686167) || (uVar1 == 0x50686c70)) goto LAB_143c7cfeb;
      bVar3 = uVar1 == 0x526a6e67;
    }
    else {
      if ((uVar1 == 0x53687264) || (uVar1 == 0x53696464)) goto LAB_143c7d07f;
      bVar3 = uVar1 == 0x53696e64;
    }
  }
  else {
    if (uVar1 < 0x54617675) {
      if (uVar1 != 0x54617674) {
        if (uVar1 < 0x54616763) {
          if (((uVar1 != 0x54616762) && (uVar1 != 0x53756e64)) && (uVar1 != 0x53796c6f)) {
            if (uVar1 != 0x53797263) {
              return "default";
            }
            goto LAB_143c7cfeb;
          }
        }
        else if ((uVar1 != 0x54616b72) && (uVar1 != 0x54616c65)) {
          if (uVar1 != 0x54616d6c) {
            return "default";
          }
          goto LAB_143c7cda9;
        }
      }
      goto LAB_143c7d07f;
    }
    if (uVar1 < 0x5468616a) {
      if (uVar1 == 0x54686169) {
        return "thai";
      }
      if (uVar1 == 0x54656c75) goto LAB_143c7cda9;
      if (uVar1 == 0x54666e67) goto LAB_143c7d07f;
      bVar3 = uVar1 == 0x54676c67;
    }
    else {
      if (uVar1 == 0x54696274) {
        return "default";
      }
      bVar3 = uVar1 == 0x54697268;
    }
  }
  if (!bVar3) {
    return "default";
  }
LAB_143c7d07f:
  if (*(int *)(param_1 + 0xb) == 0x44464c54) {
    return "default";
  }
  return "use";
}



// FUNCTION 143c7d0a0 hb_ot_shape_internal body=273 status=ok
// SIG undefined hb_ot_shape_internal(void)

void hb_ot_shape_internal(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1[3] + 0x84) = 0;
  uVar4 = *(uint *)(param_1[3] + 0xb8);
  if (uVar4 < 0x7ffffff) {
    uVar4 = uVar4 << 5;
    uVar3 = 0x2000;
    if (0x2000 < uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)(param_1[3] + 0x88) = uVar3;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1[3] + 0x90);
  hb_buffer_t::clear_output();
  hb_set_unicode_props(param_1[3]);
  hb_insert_dotted_circle(param_1[3],param_1[1]);
  hb_form_clusters(param_1[3]);
  hb_ensure_native_direction(param_1[3]);
  pcVar1 = *(code **)(*(longlong *)(*param_1 + 0x20) + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*param_1,param_1[3],param_1[1]);
  }
  hb_ot_substitute_default(param_1);
  lVar2 = param_1[3];
  OT::GSUB::hb_ot_layout_substitute_start(param_1[1],lVar2);
  hb_ot_map_t::substitute(*param_1 + 0x28,*param_1,param_1[1],lVar2);
  hb_ot_position(param_1);
  hb_ot_hide_default_ignorables(param_1);
  pcVar1 = *(code **)(*(longlong *)(*param_1 + 0x20) + 0x30);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*param_1,param_1[3],param_1[1]);
  }
  *(undefined4 *)(param_1[3] + 0x90) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(undefined4 *)(param_1[3] + 0x88) = 0x3fffffff;
  return;
}



// FUNCTION 143c7d1c0 hb_ot_shape_setup_masks body=235 status=ok
// SIG undefined hb_ot_shape_setup_masks(void)

void hb_ot_shape_setup_masks(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  void *pvVar4;
  byte bVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_res8 [2];
  
  lVar1 = *param_1;
  lVar2 = param_1[3];
  hb_ot_shape_setup_masks_fraction();
  pcVar3 = *(code **)(*(longlong *)(*param_1 + 0x20) + 0x50);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*param_1,lVar2,param_1[1]);
  }
  uVar7 = 0;
  if ((int)param_1[5] != 0) {
    do {
      puVar6 = (undefined4 *)((ulonglong)uVar7 * 0x10 + param_1[4]);
      if ((puVar6[2] != 0) || (puVar6[3] != -1)) {
        local_res8[0] = *puVar6;
        pvVar4 = bsearch(local_res8,*(void **)(lVar1 + 0x40),(ulonglong)*(uint *)(lVar1 + 0x38),0x24
                         ,(_PtFuncCompare *)&LAB_143c7bc50);
        if (pvVar4 == (void *)0x0) {
          bVar5 = 0;
          uVar8 = 0;
        }
        else {
          bVar5 = (byte)*(undefined4 *)((longlong)pvVar4 + 0x14);
          uVar8 = *(undefined4 *)((longlong)pvVar4 + 0x18);
        }
        hb_buffer_t::set_masks(lVar2,puVar6[1] << (bVar5 & 0x1f),uVar8,puVar6[2],puVar6[3]);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 5));
  }
  return;
}



// FUNCTION 143c7d2b0 hb_ot_shape_setup_masks_fraction body=388 status=ok
// SIG undefined hb_ot_shape_setup_masks_fraction(void)

void hb_ot_shape_setup_masks_fraction(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  lVar3 = param_1[3];
  if (((*(byte *)(lVar3 + 0x84) & 1) != 0) && ((*(byte *)(*param_1 + 0x444) & 1) != 0)) {
    uVar9 = 0;
    uVar2 = *(uint *)(lVar3 + 0xb8);
    lVar3 = *(longlong *)(lVar3 + 200);
    if (uVar2 != 0) {
      do {
        lVar1 = uVar9 * 0x14;
        if (*(int *)(lVar3 + uVar9 * 0x14) == 0x2044) {
          uVar10 = (uint)uVar9;
          uVar7 = uVar10 + 1;
          uVar5 = uVar10;
          while (uVar8 = 0, uVar5 != 0) {
            uVar8 = (uint)uVar9;
            uVar5 = uVar8 - 1;
            if ((*(byte *)(lVar3 + 0x10 + (ulonglong)uVar5 * 0x14) & 0x1f) != 0xd) break;
            uVar9 = (ulonglong)uVar5;
          }
          uVar5 = uVar7;
          if (uVar7 < uVar2) {
            pbVar6 = (byte *)(lVar3 + (ulonglong)uVar7 * 0x14 + 0x10);
            do {
              if ((*pbVar6 & 0x1f) != 0xd) break;
              uVar5 = uVar5 + 1;
              pbVar6 = pbVar6 + 0x14;
            } while (uVar5 < uVar2);
          }
          if (uVar8 < uVar10) {
            uVar9 = (ulonglong)(uVar10 - uVar8);
            puVar4 = (uint *)(lVar3 + (ulonglong)uVar8 * 0x14 + 4);
            do {
              *puVar4 = *puVar4 | *(uint *)(*param_1 + 0x438) | *(uint *)(*param_1 + 0x434);
              uVar9 = uVar9 - 1;
              puVar4 = puVar4 + 5;
            } while (uVar9 != 0);
          }
          puVar4 = (uint *)(lVar3 + lVar1 + 4);
          *puVar4 = *puVar4 | *(uint *)(*param_1 + 0x434);
          if (uVar7 < uVar5) {
            uVar9 = (ulonglong)(uVar5 - uVar7);
            puVar4 = (uint *)(lVar3 + (ulonglong)uVar7 * 0x14 + 4);
            do {
              *puVar4 = *puVar4 | *(uint *)(*param_1 + 0x43c) | *(uint *)(*param_1 + 0x434);
              uVar9 = uVar9 - 1;
              puVar4 = puVar4 + 5;
            } while (uVar9 != 0);
          }
          uVar9 = (ulonglong)(uVar5 - 1);
        }
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
      } while (uVar10 < uVar2);
    }
  }
  return;
}



// FUNCTION 143c7d440 hb_ot_substitute_default body=180 status=ok
// SIG undefined hb_ot_substitute_default(void)

void hb_ot_substitute_default(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar2 = param_1[3];
  uVar1 = *(undefined4 *)(*param_1 + 0x34);
  uVar6 = 0;
  if (*(int *)(lVar2 + 0xb8) != 0) {
    do {
      uVar5 = (int)uVar6 + 1;
      *(undefined4 *)(*(longlong *)(lVar2 + 200) + 4 + uVar6 * 0x14) = uVar1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(lVar2 + 0xb8));
  }
  hb_ot_mirror_chars(param_1);
  _hb_ot_shape_normalize(*param_1,lVar2,param_1[1]);
  hb_ot_shape_setup_masks(param_1);
  iVar3 = hb_ot_layout_has_positioning(param_1[2]);
  if (iVar3 == 0) {
    _hb_ot_shape_fallback_position_recategorize_marks(*param_1,param_1[1],lVar2);
  }
  puVar4 = *(undefined4 **)(lVar2 + 200);
  if (*(uint *)(lVar2 + 0xb8) != 0) {
    uVar6 = (ulonglong)*(uint *)(lVar2 + 0xb8);
    do {
      *puVar4 = puVar4[3];
      puVar4 = puVar4 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(undefined4 *)(lVar2 + 0x8c) = 2;
  return;
}



// FUNCTION 143c7d500 hb_ot_zero_width_default_ignorables body=93 status=ok
// SIG undefined hb_ot_zero_width_default_ignorables(void)

void hb_ot_zero_width_default_ignorables(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (((*(byte *)(lVar2 + 0x84) & 2) != 0) && ((*(byte *)(lVar2 + 0x78) & 4) == 0)) {
    if (*(uint *)(lVar2 + 0xb8) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0xd8) - *(longlong *)(lVar2 + 200);
      pbVar3 = (byte *)(*(longlong *)(lVar2 + 200) + 0xc);
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0xb8);
      do {
        if (((pbVar3[4] & 0x80) != 0) && ((*pbVar3 >> 5 & 1) == 0)) {
          pbVar1 = pbVar3 + lVar5 + -4;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1 = pbVar3 + lVar5 + -0xc;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
        pbVar3 = pbVar3 + 0x14;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143c7d560 hb_set_unicode_props body=333 status=ok
// SIG undefined hb_set_unicode_props(void)

void hb_set_unicode_props(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  puVar7 = *(uint **)(param_1 + 200);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0xb8);
    do {
      lVar2 = *(longlong *)(param_1 + 0x70);
      uVar1 = *puVar7;
      uVar3 = (**(code **)(lVar2 + 0x90))(lVar2,uVar1,*(undefined8 *)(lVar2 + 0xd0));
      uVar6 = uVar3;
      if (0x7f < uVar1) {
        *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 1;
        iVar4 = hb_unicode_funcs_t::is_default_ignorable(uVar1);
        if (iVar4 == 0) {
          if ((1 << ((byte)uVar3 & 0x1f) & 0x1001400U) != 0) {
            uVar5 = *puVar7;
            if (uVar5 == 0x1037) {
              uVar5 = 0x103a;
LAB_143c7d62d:
              iVar4 = (**(code **)(lVar2 + 0x80))(lVar2,uVar5,*(undefined8 *)(lVar2 + 0xc0));
              uVar6 = (ushort)(byte)(&DAT_145d393a0)[iVar4];
            }
            else if (uVar5 == 0x1a60) {
              uVar6 = 0xfe;
            }
            else {
              if (uVar5 != 0xfc6) goto LAB_143c7d62d;
              uVar6 = 0xfe;
            }
            uVar6 = uVar3 | uVar6 << 8;
            if (uVar1 - 0x1f3fb < 5) {
              uVar6 = 0xb;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 2;
          if (uVar1 == 0x200c) {
            uVar6 = uVar3 | 0xc0;
          }
          else {
            uVar6 = uVar3 | 0x80;
            if (uVar1 == 0x200d) {
              uVar6 = uVar3 | 0xa0;
            }
          }
        }
      }
      *(ushort *)(puVar7 + 4) = uVar6;
      puVar7 = puVar7 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 143c7d6b0 is_default_ignorable body=295 status=ok
// SIG undefined is_default_ignorable(void)

bool hb_unicode_funcs_t::is_default_ignorable(uint param_1)

{
  uint uVar1;
  
  if (param_1 >> 0x10 == 0) {
    uVar1 = param_1 >> 8;
    if (uVar1 < 0x19) {
      if (uVar1 == 0x18) {
        return param_1 - 0x180b < 4;
      }
      if (param_1 >> 8 == 0) {
        return param_1 == 0xad;
      }
      if (uVar1 == 3) {
        return param_1 == 0x34f;
      }
      if (uVar1 == 6) {
        return param_1 == 0x61c;
      }
      if (uVar1 == 0x17) {
        return param_1 - 0x17b4 < 2;
      }
    }
    else {
      if (uVar1 == 0x20) {
        if (param_1 - 0x200b < 5) {
          return true;
        }
        if (param_1 - 0x202a < 5) {
          return true;
        }
        if (param_1 - 0x2060 < 0x10) {
          return true;
        }
        return false;
      }
      if (uVar1 == 0xfe) {
        if ((0xf < param_1 - 0xfe00) && (param_1 != 0xfeff)) {
          return false;
        }
        return true;
      }
      if (uVar1 == 0xff) {
        return param_1 - 0xfff0 < 9;
      }
    }
  }
  else {
    if (param_1 >> 0x10 == 1) {
      if ((3 < param_1 - 0x1bca0) && (7 < param_1 - 0x1d173)) {
        return false;
      }
      return true;
    }
    if (param_1 >> 0x10 == 0xe) {
      return param_1 - 0xe0000 < 0x1000;
    }
  }
  return false;
}



// FUNCTION 143c7d7e0 modified_combining_class body=77 status=ok
// SIG undefined modified_combining_class(void)

undefined1 hb_unicode_funcs_t::modified_combining_class(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 == 0x1037) {
    param_2 = 0x103a;
  }
  else if ((iVar1 == 0x1a60) || (iVar1 == 0xfc6)) {
    return 0xfe;
  }
  iVar1 = (**(code **)(param_1 + 0x80))(param_1,param_2,*(undefined8 *)(param_1 + 0xc0));
  return (&DAT_145d393a0)[iVar1];
}



// FUNCTION 143c7d830 next_glyph body=139 status=ok
// SIG undefined next_glyph(void)

void hb_buffer_t::next_glyph(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
  if (*(char *)(param_1 + 0xb1) != '\0') {
    if ((*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_1 + 200)) ||
       (*(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xb4))) {
      cVar8 = make_room_for(param_1,1,1);
      if (cVar8 == '\0') {
        return;
      }
      uVar3 = *(uint *)(param_1 + 0xb4);
      lVar5 = *(longlong *)(param_1 + 200);
      uVar4 = *(uint *)(param_1 + 0xbc);
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar3 * 0x14);
      uVar7 = puVar1[1];
      lVar6 = *(longlong *)(param_1 + 0xd0);
      puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar4 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      *(undefined4 *)(lVar6 + (ulonglong)uVar4 * 0x14 + 0x10) =
           *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar3 * 0x14);
    }
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  return;
}



// FUNCTION 143c7d8c0 zero_mark_widths_by_gdef body=118 status=ok
// SIG undefined zero_mark_widths_by_gdef(void)

void zero_mark_widths_by_gdef(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xb8);
    lVar2 = 0;
    do {
      if ((*(byte *)(lVar1 + 0xc + lVar2) >> 3 & 1) != 0) {
        if (param_2 != '\0') {
          piVar3 = (int *)(*(longlong *)(param_1 + 0xd8) + lVar2);
          piVar3[2] = piVar3[2] - *piVar3;
          piVar3[3] = piVar3[3] - piVar3[1];
        }
        *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0xd8)) = 0;
      }
      lVar2 = lVar2 + 0x14;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143c7d940 _hb_ot_shape body=80 status=ok
// SIG undefined _hb_ot_shape(void)

undefined8
_hb_ot_shape(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = *(undefined8 *)(param_2 + 0x80);
  local_10 = param_5;
  local_c = 0;
  local_30 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  hb_ot_shape_internal(&local_38);
  return 1;
}



// FUNCTION 143c7d990 _hb_ot_shaper_face_data_create body=5 status=ok
// SIG undefined _hb_ot_shaper_face_data_create(void)

undefined8 * _hb_ot_shaper_face_data_create(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort uVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  longlong lStack_18;
  undefined4 uStack_10;
  
  puVar5 = (undefined8 *)HarfBuzzCalloc(1);
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((*(code **)(param_1 + 0x78) == (code *)0x0) ||
     (lVar6 = (**(code **)(param_1 + 0x78))(param_1,0x47444546,*(undefined8 *)(param_1 + 0x80)),
     lVar6 == 0)) {
    lVar6 = hb_blob_get_empty();
  }
  uVar7 = OT::Sanitizer<OT::GDEF>::sanitize(lVar6);
  *puVar5 = uVar7;
  hb_blob_make_immutable(uVar7);
  puVar8 = (undefined1 *)hb_blob_get_data(uVar7,0);
  puVar9 = &DAT_146bc87b0;
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar8;
  }
  puVar5[3] = puVar9;
  if ((*(code **)(param_1 + 0x78) == (code *)0x0) ||
     (lVar6 = (**(code **)(param_1 + 0x78))(param_1,0x47535542,*(undefined8 *)(param_1 + 0x80)),
     lVar6 == 0)) {
    lVar6 = hb_blob_get_empty();
  }
  uVar7 = OT::Sanitizer<OT::GSUB>::sanitize(lVar6);
  puVar5[1] = uVar7;
  hb_blob_make_immutable(uVar7);
  puVar8 = (undefined1 *)hb_blob_get_data(uVar7,0);
  puVar9 = &DAT_146bc87b0;
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar8;
  }
  puVar5[4] = puVar9;
  if ((*(code **)(param_1 + 0x78) == (code *)0x0) ||
     (lVar6 = (**(code **)(param_1 + 0x78))(param_1,0x47504f53,*(undefined8 *)(param_1 + 0x80)),
     lVar6 == 0)) {
    lVar6 = hb_blob_get_empty();
  }
  uVar7 = OT::Sanitizer<OT::GPOS>::sanitize(lVar6);
  puVar5[2] = uVar7;
  hb_blob_make_immutable(uVar7);
  puVar8 = (undefined1 *)hb_blob_get_data(uVar7,0);
  puVar9 = &DAT_146bc87b0;
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar8;
  }
  puVar5[5] = puVar9;
  iVar2 = FSlateUpdatableInstanceBuffer::GetNumInstances(*puVar5);
  iVar3 = FSlateUpdatableInstanceBuffer::GetNumInstances(puVar5[1]);
  iVar4 = FSlateUpdatableInstanceBuffer::GetNumInstances(puVar5[2]);
  if (iVar2 == 0x1ba) {
    bVar16 = iVar4 == 0xa436;
LAB_143c825dc:
    if ((!bVar16) || (iVar3 != 0xb3a)) goto LAB_143c82664;
  }
  else {
    if (iVar2 == 0x1ae) {
      bVar16 = iVar4 == 0x9ed6;
      goto LAB_143c825dc;
    }
    if (iVar2 == 0x1ea) {
      if (iVar4 != 0xa2a6) goto LAB_143c82664;
    }
    else if ((iVar2 != 0x1de) || (iVar4 != 0xa3ae)) goto LAB_143c82664;
    if (iVar3 != 0xbe6) goto LAB_143c82664;
  }
  lVar6 = puVar5[3];
  puVar9 = &DAT_146bc87b0;
  uVar13 = (ushort)*(byte *)(lVar6 + 4) * 0x100 + (ushort)*(byte *)(lVar6 + 5);
  if (uVar13 != 0) {
    puVar9 = (undefined1 *)(lVar6 + (ulonglong)uVar13);
  }
  iVar2 = OT::ClassDef::get_class(puVar9,5);
  if (iVar2 == 3) {
    puVar5[3] = &DAT_146bc87b0;
  }
LAB_143c82664:
  lVar6 = puVar5[4];
  uVar13 = (ushort)*(byte *)(lVar6 + 9) + (ushort)*(byte *)(lVar6 + 8) * 0x100;
  pbVar14 = &DAT_146bc87b0;
  if (uVar13 != 0) {
    pbVar14 = (byte *)(lVar6 + (ulonglong)uVar13);
  }
  pbVar15 = &DAT_146bc87b0;
  lVar1 = puVar5[5];
  *(uint *)(puVar5 + 6) = (uint)(ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]);
  uVar13 = (ushort)*(byte *)(lVar1 + 8) * 0x100 + (ushort)*(byte *)(lVar1 + 9);
  if (uVar13 != 0) {
    pbVar15 = (byte *)(lVar1 + (ulonglong)uVar13);
  }
  pbVar14 = &DAT_146bc87b0;
  *(uint *)((longlong)puVar5 + 0x34) = (uint)(ushort)((ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1])
  ;
  uVar13 = (ushort)*(byte *)(lVar6 + 8) * 0x100 + (ushort)*(byte *)(lVar6 + 9);
  if (uVar13 != 0) {
    pbVar14 = (byte *)(lVar6 + (ulonglong)uVar13);
  }
  uVar7 = HarfBuzzCalloc((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1],0xc);
  lVar6 = puVar5[5];
  puVar5[7] = uVar7;
  uVar13 = (ushort)*(byte *)(lVar6 + 8) * 0x100 + (ushort)*(byte *)(lVar6 + 9);
  if (uVar13 == 0) {
    pbVar14 = &DAT_146bc87b0;
  }
  else {
    pbVar14 = (byte *)((ulonglong)uVar13 + lVar6);
  }
  lVar6 = HarfBuzzCalloc((ushort)pbVar14[1] + (ushort)*pbVar14 * 0x100,0xc);
  puVar5[8] = lVar6;
  if (((*(int *)(puVar5 + 6) == 0) || (puVar5[7] != 0)) &&
     ((*(int *)((longlong)puVar5 + 0x34) == 0 || (lVar6 != 0)))) {
    uVar12 = 0;
    uVar11 = uVar12;
    if (*(int *)(puVar5 + 6) != 0) {
      do {
        uVar7 = OT::GSUBGPOS::get_lookup(puVar5[4],uVar11);
        uStack_10 = 0;
        lStack_18 = puVar5[7];
        *(undefined8 *)(lStack_18 + uVar11 * 0xc) = 0;
        *(undefined4 *)(lStack_18 + 8 + uVar11 * 0xc) = 0;
        lStack_18 = lStack_18 + uVar11 * 0xc;
        OT::Lookup::
        dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
                  (uVar7,&lStack_18);
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(puVar5 + 6));
    }
    if (*(int *)((longlong)puVar5 + 0x34) != 0) {
      do {
        lVar6 = puVar5[5];
        pbVar14 = &DAT_146bc87b0;
        uVar13 = (ushort)*(byte *)(lVar6 + 8) * 0x100 + (ushort)*(byte *)(lVar6 + 9);
        if (uVar13 != 0) {
          pbVar14 = (byte *)(lVar6 + (ulonglong)uVar13);
        }
        pbVar15 = &DAT_146bc87b0;
        if (((uint)uVar12 < (uint)(ushort)((ushort)pbVar14[1] + (ushort)*pbVar14 * 0x100)) &&
           (uVar13 = (ushort)pbVar14[uVar12 * 2 + 3] + (ushort)pbVar14[uVar12 * 2 + 2] * 0x100,
           uVar13 != 0)) {
          pbVar15 = pbVar14 + uVar13;
        }
        uStack_10 = 0;
        lStack_18 = puVar5[8];
        *(undefined8 *)(lStack_18 + uVar12 * 0xc) = 0;
        *(undefined4 *)(lStack_18 + 8 + uVar12 * 0xc) = 0;
        lStack_18 = lStack_18 + uVar12 * 0xc;
        OT::Lookup::
        dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
                  (pbVar15,&lStack_18);
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)puVar5 + 0x34));
    }
  }
  else {
    _hb_ot_layout_destroy(puVar5);
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 143c7d9a0 _hb_ot_shaper_face_data_destroy body=5 status=ok
// SIG undefined _hb_ot_shaper_face_data_destroy(void)

void _hb_ot_shaper_face_data_destroy(undefined8 *param_1)

{
  FMemory::operator_delete(param_1[7]);
  FMemory::operator_delete(param_1[8]);
  hb_blob_destroy(*param_1);
  hb_blob_destroy(param_1[1]);
  hb_blob_destroy(param_1[2]);
  FMemory::operator_delete(param_1);
  return;
}



// FUNCTION 143c7d9b0 _hb_ot_shaper_shape_plan_data_create body=274 status=ok
// SIG undefined _hb_ot_shaper_shape_plan_data_create(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong _hb_ot_shaper_shape_plan_data_create
                   (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined8 local_530;
  undefined1 local_528 [1280];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  lVar2 = HarfBuzzCalloc(1,0x448);
  if (lVar2 == 0) {
    return 0;
  }
  local_550 = *(undefined4 *)(param_1 + 0x80);
  uStack_54c = *(undefined4 *)(param_1 + 0x84);
  uStack_548 = *(undefined4 *)(param_1 + 0x88);
  uStack_544 = *(undefined4 *)(param_1 + 0x8c);
  local_558 = *(undefined8 *)(param_1 + 0x78);
  local_540 = *(undefined4 *)(param_1 + 0x90);
  uStack_53c = *(undefined4 *)(param_1 + 0x94);
  uStack_538 = *(undefined4 *)(param_1 + 0x98);
  uStack_534 = *(undefined4 *)(param_1 + 0x9c);
  local_530 = 0;
  hb_ot_map_builder_t::hb_ot_map_builder_t(local_528,local_558,&local_550);
  local_530 = hb_ot_shape_complex_categorize(&local_558);
  hb_ot_shape_collect_features(&local_558,param_1 + 0x80,param_2,param_3);
  hb_ot_shape_planner_t::compile(&local_558,lVar2);
  pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x20) + 0x18);
  if (pcVar1 != (code *)0x0) {
    lVar3 = (*pcVar1)(lVar2);
    *(longlong *)(lVar2 + 0x428) = lVar3;
    lVar4 = 0;
    if (lVar3 == 0) goto LAB_143c7da89;
  }
  lVar4 = lVar2;
LAB_143c7da89:
  hb_ot_map_builder_t::finish(local_528);
  return lVar4;
}



// FUNCTION 143c7dad0 _hb_ot_shaper_shape_plan_data_destroy body=53 status=ok
// SIG undefined _hb_ot_shaper_shape_plan_data_destroy(void)

void _hb_ot_shaper_shape_plan_data_destroy(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x20);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x428));
  }
  hb_ot_map_t::finish(param_1 + 0x28);
  FMemory::operator_delete(param_1);
  return;
}



// FUNCTION 143c7db10 hb_non_global_user_features_present body=37 status=ok
// SIG undefined hb_non_global_user_features_present(void)

undefined8 hb_non_global_user_features_present(longlong param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_1 + 0xc);
    do {
      if ((piVar1[-1] != 0) || (*piVar1 != -1)) {
        return 1;
      }
      piVar1 = piVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}



// FUNCTION 143c7db40 hb_ot_shaper_face_data_ensure body=136 status=ok
// SIG undefined hb_ot_shaper_face_data_ensure(void)

undefined8 hb_ot_shaper_face_data_ensure(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  LOCK();
  UNLOCK();
  lVar1 = *(longlong *)(param_1 + 0xa0);
  do {
    if (lVar1 != 0) {
LAB_143c7dba8:
      if (lVar1 == -1) {
        return 0;
      }
      return 1;
    }
    lVar1 = _hb_ot_shaper_face_data_create(param_1);
    if (lVar1 == 0) {
      lVar1 = -1;
    }
    LOCK();
    bVar2 = *(longlong *)(param_1 + 0xa0) == 0;
    if (bVar2) {
      *(longlong *)(param_1 + 0xa0) = lVar1;
    }
    UNLOCK();
    if (bVar2) {
      if (lVar1 == 0) {
        return 0;
      }
      goto LAB_143c7dba8;
    }
    if (lVar1 - 2U < 0xfffffffffffffffd) {
      _hb_ot_shaper_face_data_destroy();
    }
    LOCK();
    UNLOCK();
    lVar1 = *(longlong *)(param_1 + 0xa0);
  } while( true );
}



// FUNCTION 143c7dbd0 hb_ot_shaper_font_data_ensure body=136 status=ok
// SIG undefined hb_ot_shaper_font_data_ensure(void)

undefined8 hb_ot_shaper_font_data_ensure(longlong param_1,undefined1 param_2)

{
  AKRESULT AVar1;
  undefined4 extraout_var;
  longlong lVar2;
  bool bVar3;
  
  LOCK();
  UNLOCK();
  lVar2 = *(longlong *)(param_1 + 0xb0);
  do {
    if (lVar2 != 0) {
LAB_143c7dc38:
      if (lVar2 == -1) {
        return 0;
      }
      return 1;
    }
    AVar1 = AK::MemoryMgr::SetMonitoring((long)param_1,(bool)param_2);
    lVar2 = CONCAT44(extraout_var,AVar1);
    if (lVar2 == 0) {
      lVar2 = -1;
    }
    LOCK();
    bVar3 = *(longlong *)(param_1 + 0xb0) == 0;
    if (bVar3) {
      *(longlong *)(param_1 + 0xb0) = lVar2;
    }
    UNLOCK();
    if (bVar3) {
      if (lVar2 == 0) {
        return 0;
      }
      goto LAB_143c7dc38;
    }
    if (lVar2 - 2U < 0xfffffffffffffffd) {
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar2);
    }
    LOCK();
    UNLOCK();
    lVar2 = *(longlong *)(param_1 + 0xb0);
  } while( true );
}



// FUNCTION 143c7dc60 hb_shape_plan_matches body=173 status=ok
// SIG undefined hb_shape_plan_matches(void)

undefined8 hb_shape_plan_matches(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar4 = hb_segment_properties_equal(param_1 + 0x80);
  if ((iVar4 != 0) && (uVar3 = *(uint *)(param_2 + 0x30), uVar3 == *(uint *)(param_1 + 0xb8))) {
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + uVar6 * 0x10);
        piVar2 = (int *)(*(longlong *)(param_2 + 0x28) + uVar6 * 0x10);
        if (*piVar2 != *piVar1) {
          return 0;
        }
        if (piVar2[1] != piVar1[1]) {
          return 0;
        }
        if (piVar2[2] != piVar1[2]) {
          return 0;
        }
        if (piVar2[3] != piVar1[3]) {
          return 0;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar3);
    }
    if (((*(int *)(param_1 + 0x70) != 0) && (*(longlong *)(param_2 + 0x20) == 0)) ||
       (*(longlong *)(param_1 + 0xa0) == *(longlong *)(param_2 + 0x38))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c7dd10 hb_shape_plan_plan body=316 status=ok
// SIG undefined hb_shape_plan_plan(void)

void hb_shape_plan_plan(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39fe8);
  lVar4 = _hb_shapers_get();
  if (param_4 == (undefined8 *)0x0) {
    if ((*(code **)(lVar4 + 0x10) == _hb_ot_shape) &&
       (cVar3 = hb_ot_shaper_face_data_ensure(*(undefined8 *)(param_1 + 0x78)), cVar3 != '\0')) {
      uVar5 = _hb_ot_shaper_shape_plan_data_create(param_1,param_2,param_3);
LAB_143c7de14:
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
      *(undefined1 **)(param_1 + 0xa8) = &DAT_145d39f44;
      *(code **)(param_1 + 0xa0) = _hb_ot_shape;
    }
  }
  else {
    pcVar2 = (char *)*param_4;
    while (pcVar2 != (char *)0x0) {
      if ((((*pcVar2 == 'o') && (pcVar2[1] == 't')) && (pcVar2[2] == '\0')) &&
         (cVar3 = hb_ot_shaper_face_data_ensure(*(undefined8 *)(param_1 + 0x78)), cVar3 != '\0')) {
        uVar5 = _hb_ot_shaper_shape_plan_data_create(param_1,param_2,param_3);
        goto LAB_143c7de14;
      }
      puVar1 = param_4 + 1;
      param_4 = param_4 + 1;
      pcVar2 = (char *)*puVar1;
    }
  }
  return;
}



// FUNCTION 143c7de50 hb_shape_plan_create body=413 status=ok
// SIG undefined hb_shape_plan_create(void)

undefined4 *
hb_shape_plan_create
          (longlong param_1,undefined4 *param_2,void *param_3,uint param_4,longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  void *_Dst;
  
  _Dst = (void *)0x0;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39fe8);
  if (param_1 == 0) {
    param_1 = hb_face_get_empty();
  }
  if ((param_2 == (undefined4 *)0x0) ||
     ((param_4 != 0 && (_Dst = (void *)HarfBuzzCalloc((ulonglong)param_4,0x10), _Dst == (void *)0x0)
      ))) {
    puVar6 = (undefined4 *)hb_shape_plan_get_empty();
  }
  else {
    puVar6 = (undefined4 *)HarfBuzzCalloc(1,200);
    if (puVar6 == (undefined4 *)0x0) {
      FMemory::operator_delete(_Dst);
      puVar6 = (undefined4 *)hb_shape_plan_get_empty();
    }
    else {
      *puVar6 = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar6 + 2));
      *(undefined8 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)(puVar6 + 0xe) = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x12) = 0;
      *(undefined8 *)(puVar6 + 0x14) = 0;
      *(undefined8 *)(puVar6 + 0x16) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 0x1a) = 0;
      hb_font_funcs_make_immutable(param_1);
      *(longlong *)(puVar6 + 0x1e) = param_1;
      puVar6[0x1c] = (uint)(param_5 == 0);
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      puVar6[0x20] = *param_2;
      puVar6[0x21] = uVar1;
      puVar6[0x22] = uVar2;
      puVar6[0x23] = uVar3;
      uVar4 = *(undefined8 *)(param_2 + 4);
      uVar5 = *(undefined8 *)(param_2 + 6);
      puVar6[0x2e] = param_4;
      *(void **)(puVar6 + 0x2c) = _Dst;
      *(undefined8 *)(puVar6 + 0x24) = uVar4;
      *(undefined8 *)(puVar6 + 0x26) = uVar5;
      if (param_4 != 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,(ulonglong)param_4 << 4);
      }
      hb_shape_plan_plan(puVar6,param_3,param_4,param_5);
    }
  }
  return puVar6;
}



// FUNCTION 143c7dff0 hb_shape_plan_create_cached body=523 status=ok
// SIG undefined hb_shape_plan_create_cached(void)

undefined8
hb_shape_plan_create_cached
          (int *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,longlong *param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 uVar14;
  longlong *plVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  code *local_30;
  
  pcVar9 = (code *)0x0;
  pcVar12 = "face=%p num_features=%d shaper_list=%p";
  uVar11 = 0;
  lVar7 = 0;
  piVar13 = param_1;
  uVar14 = param_4;
  plVar15 = param_5;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39fe8);
  local_48 = param_5;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(undefined8 *)(param_2 + 4);
  uStack_50 = *(undefined8 *)(param_2 + 6);
  local_40 = param_3;
  local_38 = param_4;
  local_30 = pcVar9;
  if (param_5 == (longlong *)0x0) {
LAB_143c7e120:
    while( true ) {
      LOCK();
      UNLOCK();
      puVar2 = *(undefined8 **)(param_1 + 0x2a);
      for (puVar6 = puVar2; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)puVar6[1]) {
        iVar4 = hb_shape_plan_matches(*puVar6,&local_68);
        if (iVar4 != 0) {
          uVar5 = *puVar6;
          goto LAB_143c7e1c8;
        }
      }
      uVar5 = hb_shape_plan_create
                        (param_1,param_2,param_3,param_4,param_5,uVar11,pcVar12,piVar13,uVar14,
                         plVar15);
      if (*param_1 == -1) {
        return uVar5;
      }
      iVar4 = hb_non_global_user_features_present(param_3,param_4);
      if (iVar4 != 0) {
        return uVar5;
      }
      puVar6 = (undefined8 *)HarfBuzzCalloc(1,0x10);
      if (puVar6 == (undefined8 *)0x0) {
        return uVar5;
      }
      *puVar6 = uVar5;
      puVar6[1] = puVar2;
      LOCK();
      bVar10 = puVar2 == *(undefined8 **)(param_1 + 0x2a);
      if (bVar10) {
        *(undefined8 **)(param_1 + 0x2a) = puVar6;
      }
      UNLOCK();
      if (bVar10) break;
      hb_shape_plan_destroy();
      FMemory::operator_delete(puVar6);
    }
LAB_143c7e1c8:
    uVar11 = hb_font_funcs_reference(uVar5);
  }
  else {
    plVar8 = param_5;
    if (*param_5 != lVar7) {
      do {
        pcVar1 = (char *)*plVar8;
        if ((((*pcVar1 == 'o') && (pcVar1[1] == 't')) && (pcVar1[2] == '\0')) &&
           (cVar3 = hb_ot_shaper_face_data_ensure(param_1), cVar3 != '\0')) {
          local_30 = _hb_ot_shape;
          break;
        }
        plVar8 = plVar8 + 1;
      } while (*plVar8 != 0);
      if (local_30 != (code *)0x0) goto LAB_143c7e120;
    }
    uVar11 = hb_shape_plan_get_empty();
  }
  return uVar11;
}



// FUNCTION 143c7e200 hb_shape_plan_destroy body=117 status=ok
// SIG undefined hb_shape_plan_destroy(void)

void hb_shape_plan_destroy(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
                (param_1 + 0xc,param_1 + 2);
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (*(longlong *)(param_1 + 0x30) - 2U < 0xfffffffffffffffd) {
        _hb_ot_shaper_shape_plan_data_destroy();
      }
      FMemory::operator_delete(*(undefined8 *)(param_1 + 0x2c));
      FMemory::operator_delete(param_1);
    }
  }
  return;
}



// FUNCTION 143c7e280 hb_shape_plan_execute body=225 status=ok
// SIG undefined hb_shape_plan_execute(void)

undefined8
hb_shape_plan_execute
          (int *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  pcVar6 = "num_features=%d shaper_func=%p";
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = param_5;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39fe8);
  if (*(int *)(param_3 + 0xb8) == 0) {
    uVar3 = 1;
  }
  else if ((*param_1 == -1) || (*(code **)(param_1 + 0x28) != _hb_ot_shape)) {
    uVar3 = 0;
  }
  else if (((*(longlong *)(param_1 + 0x30) != 0) &&
           (cVar1 = hb_ot_shaper_font_data_ensure(param_2), cVar1 != '\0')) &&
          (iVar2 = _hb_ot_shape(param_1,param_2,param_3,param_4,CONCAT44(uVar4,param_5),uVar5,pcVar6
                                ,uVar7,uVar8), iVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143c7e370 hb_shape_plan_get_empty body=8 status=ok
// SIG undefined hb_shape_plan_get_empty(void)

undefined * hb_shape_plan_get_empty(void)

{
  return &DAT_145d3a0d0;
}



// FUNCTION 143c7e380 _hb_shapers_get body=526 status=ok
// SIG undefined _hb_shapers_get(void)

undefined4 * _hb_shapers_get(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *_Str;
  undefined4 *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  LOCK();
  UNLOCK();
  while( true ) {
    if (DAT_146bc87a8 != (undefined4 *)0x0) {
      return DAT_146bc87a8;
    }
    _Str = getenv("HB_SHAPER_LIST");
    if (((_Str == (char *)0x0) || (*_Str == '\0')) ||
       (puVar5 = (undefined4 *)HarfBuzzCalloc(1), puVar5 == (undefined4 *)0x0)) break;
    uVar7 = 0;
    uVar9 = 0;
    *puVar5 = 0x746f;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(code **)(puVar5 + 4) = _hb_ot_shape;
    while( true ) {
      pcVar6 = strchr(_Str,0x2c);
      if (pcVar6 == (char *)0x0) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (_Str[lVar10] != '\0');
        pcVar6 = _Str + lVar10;
      }
      if ((int)uVar7 == 0) {
        puVar12 = (undefined8 *)(puVar5 + uVar7 * 6);
        do {
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (*(char *)((longlong)(puVar5 + uVar7 * 6) + lVar10) != '\0');
          if (((longlong)pcVar6 - (longlong)_Str == (longlong)(int)lVar10) &&
             (iVar4 = strncmp((char *)(puVar5 + uVar7 * 6),_Str,(longlong)pcVar6 - (longlong)_Str),
             iVar4 == 0)) {
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar1 = puVar12[2];
            puVar11 = puVar5 + (ulonglong)uVar9 * 6;
            memmove(puVar5 + (ulonglong)(uVar9 + 1) * 6,puVar11,
                    (ulonglong)((int)uVar7 - uVar9) * 0x18);
            local_48 = (undefined4)uVar2;
            uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_40 = (undefined4)uVar3;
            uStack_3c = (undefined4)((ulonglong)uVar3 >> 0x20);
            *puVar11 = local_48;
            puVar11[1] = uStack_44;
            puVar11[2] = uStack_40;
            puVar11[3] = uStack_3c;
            *(undefined8 *)(puVar11 + 4) = uVar1;
            uVar9 = uVar9 + 1;
          }
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
          puVar12 = puVar12 + 3;
        } while (uVar8 == 0);
        uVar7 = (ulonglong)uVar9;
      }
      if (*pcVar6 == '\0') break;
      _Str = pcVar6 + 1;
    }
    LOCK();
    bVar13 = DAT_146bc87a8 == (undefined4 *)0x0;
    puVar11 = puVar5;
    if (!bVar13) {
      puVar11 = DAT_146bc87a8;
    }
    DAT_146bc87a8 = puVar11;
    UNLOCK();
    if (bVar13) {
      return puVar5;
    }
    FMemory::operator_delete(puVar5);
    LOCK();
    UNLOCK();
  }
  LOCK();
  if (DAT_146bc87a8 == (undefined4 *)0x0) {
    DAT_146bc87a8 = (undefined4 *)&DAT_145d3a308;
  }
  UNLOCK();
  return (undefined4 *)&DAT_145d3a308;
}



// FUNCTION 143c7e590 _hb_blob_destroy_user_data body=52 status=ok
// SIG undefined _hb_blob_destroy_user_data(void)

void _hb_blob_destroy_user_data(longlong param_1)

{
  if (*(code **)(param_1 + 0x90) != (code *)0x0) {
    (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 143c7e5d0 _try_writable body=304 status=ok
// SIG undefined _try_writable(void)

undefined8 _try_writable(longlong param_1)

{
  char cVar1;
  void *_Dst;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x84) != 2) {
    lVar2 = param_1;
    if ((*(int *)(param_1 + 0x84) == 3) && (cVar1 = _try_writable_inplace(), cVar1 != '\0')) {
      return 1;
    }
    if (*(int *)(lVar2 + 0x84) != 2) {
      AK::MemoryMgr::StartProfileThreadUsage(0x45d3a3c8);
      _Dst = (void *)operator_new(*(undefined4 *)(param_1 + 0x80));
      if (_Dst != (void *)0x0) {
        AK::MemoryMgr::StartProfileThreadUsage(0x45d3a3c8);
        _guard_xfg_dispatch_icall_nop
                  (_Dst,*(void **)(param_1 + 0x78),(ulonglong)*(uint *)(param_1 + 0x80));
        _hb_blob_destroy_user_data(param_1);
        *(code **)(param_1 + 0x90) = FMemory::operator_delete;
        *(void **)(param_1 + 0x78) = _Dst;
        *(void **)(param_1 + 0x88) = _Dst;
        *(undefined4 *)(param_1 + 0x84) = 2;
        return 0x14058b201;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143c7e700 _try_writable_inplace body=37 status=ok
// SIG undefined _try_writable_inplace(void)

undefined8 _try_writable_inplace(undefined8 param_1)

{
  wchar_t *pwVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar2 = (long)param_1;
  pwVar1 = AK::MemoryMgr::GetPoolName(lVar2);
  if ((int)pwVar1 != 0) {
    return 1;
  }
  *(undefined4 *)(CONCAT44(uVar3,lVar2) + 0x84) = 1;
  return 0;
}



// FUNCTION 143c7e730 hb_blob_create body=249 status=ok
// SIG undefined hb_blob_create(void)

undefined4 *
hb_blob_create(undefined8 param_1,int param_2,int param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  
  if ((param_2 - 1U < 0x7fffffff) &&
     (puVar2 = (undefined4 *)HarfBuzzCalloc(1,0x98), puVar2 != (undefined4 *)0x0)) {
    *puVar2 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 2));
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(code **)(puVar2 + 0x24) = param_5;
    *(undefined8 *)(puVar2 + 0x1e) = param_1;
    puVar2[0x20] = param_2;
    puVar2[0x21] = param_3;
    *(undefined8 *)(puVar2 + 0x22) = param_4;
    if (param_3 != 0) {
      return puVar2;
    }
    puVar2[0x21] = 1;
    cVar1 = _try_writable(puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    hb_blob_destroy(puVar2);
  }
  else if (param_5 != (code *)0x0) {
    (*param_5)(param_4);
  }
  puVar2 = (undefined4 *)hb_blob_get_empty();
  return puVar2;
}



// FUNCTION 143c7e830 hb_blob_create_sub_blob body=142 status=ok
// SIG undefined hb_blob_create_sub_blob(void)

void hb_blob_create_sub_blob(longlong param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_3 != 0) && (param_2 < *(uint *)(param_1 + 0x80))) {
    hb_blob_make_immutable();
    uVar2 = *(int *)(param_1 + 0x80) - param_2;
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    uVar1 = hb_font_funcs_reference(param_1);
    hb_blob_create((ulonglong)param_2 + *(longlong *)(param_1 + 0x78),uVar2,1,uVar1,hb_blob_destroy)
    ;
    return;
  }
  hb_blob_get_empty();
  return;
}



// FUNCTION 143c7e8c0 hb_blob_destroy body=91 status=ok
// SIG undefined hb_blob_destroy(void)

void hb_blob_destroy(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *param_1 = -0xdead;
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::finish
                (param_1 + 0xc,param_1 + 2);
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      _hb_blob_destroy_user_data(param_1);
      FMemory::operator_delete(param_1);
    }
  }
  return;
}



// FUNCTION 143c7e920 hb_blob_get_data body=18 status=ok
// SIG undefined hb_blob_get_data(void)

undefined8 hb_blob_get_data(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x80);
  }
  return *(undefined8 *)(param_1 + 0x78);
}



// FUNCTION 143c7e940 hb_blob_get_data_writable body=77 status=ok
// SIG undefined hb_blob_get_data_writable(void)

undefined8 hb_blob_get_data_writable(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = _try_writable();
  if (cVar1 == '\0') {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x80);
  }
  return *(undefined8 *)(param_1 + 0x78);
}



// FUNCTION 143c7e990 hb_blob_get_empty body=8 status=ok
// SIG undefined hb_blob_get_empty(void)

undefined * hb_blob_get_empty(void)

{
  return &DAT_145d3a330;
}



// FUNCTION 143c7e9a0 hb_blob_make_immutable body=10 status=ok
// SIG undefined hb_blob_make_immutable(void)

void hb_blob_make_immutable(int *param_1)

{
  if (*param_1 != -1) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}



// FUNCTION 143c7e9b0 add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_> body=212 status=ok
// SIG undefined add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>(void)

void OT::CoverageFormat1::
     add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>
               (longlong param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar2 != 0) {
    do {
      if (uVar4 < (ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)))
      {
        pbVar3 = (byte *)(param_1 + ((ulonglong)uVar4 + 2) * 2);
      }
      else {
        pbVar3 = &DAT_146bc87b0;
      }
      uVar4 = uVar4 + 1;
      uVar1 = (ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1];
      *param_2 = *param_2 | 1 << (uVar1 >> 4 & 0x1f);
      param_2[1] = param_2[1] | 1 << (uVar1 & 0x1f);
      param_2[2] = param_2[2] | 1 << (uVar1 >> 9 & 0x1f);
    } while (uVar4 < uVar2);
  }
  return;
}



// FUNCTION 143c7ea90 add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_> body=151 status=ok
// SIG undefined add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>(void)

void OT::RangeRecord::
     add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>
               (byte *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  uVar1 = (ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) >> 4;
  if (0x1e < (uint)uVar1 - (uint)(uVar2 >> 4)) {
    *param_2 = 0xffffffff;
    hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>
    ::add_range(param_2 + 1,uVar2);
    return;
  }
  uVar4 = 1 << ((byte)(uVar2 >> 4) & 0x1f);
  uVar3 = 1 << ((byte)uVar1 & 0x1f);
  *param_2 = *param_2 | (uVar3 * 2 - (uint)(uVar3 < uVar4)) - uVar4;
  hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>
  ::add_range(param_2 + 1,uVar2);
  return;
}



// FUNCTION 143c7eb30 apply<GPOSProxy> body=510 status=ok
// SIG undefined apply<GPOSProxy>(void)

void hb_ot_map_t::apply<GPOSProxy>
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  byte *pbVar5;
  ushort uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint local_res8;
  undefined1 local_118 [36];
  undefined4 local_f4;
  byte local_f0;
  code *local_e8;
  uint local_48;
  
  uVar9 = 0;
  OT::hb_apply_context_t::hb_apply_context_t(local_118,1,param_4,param_5);
  local_e8 = OT::PosLookup::apply_recurse_func;
  local_res8 = 0;
  uVar11 = uVar9;
  if (*(int *)(param_1 + 0x3b0) != 0) {
    do {
      puVar10 = (uint *)(uVar11 * 0x10 + *(longlong *)(param_1 + 0x3b8));
      uVar12 = (uint)uVar11;
      if ((uint)uVar9 < *puVar10) {
        do {
          lVar1 = uVar9 * 8;
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 600) + lVar1);
          uVar11 = (ulonglong)uVar2;
          cVar4 = hb_buffer_t::message(param_5,param_4,"start lookup %d",(uint)uVar2);
          if (cVar4 != '\0') {
            lVar3 = *param_2;
            local_f4 = *(undefined4 *)(*(longlong *)(param_1 + 600) + 4 + lVar1);
            local_f0 = *(byte *)(*(longlong *)(param_1 + 600) + 2 + lVar1) & 1;
            uVar6 = (ushort)*(byte *)(lVar3 + 8) * 0x100 + (ushort)*(byte *)(lVar3 + 9);
            if (uVar6 == 0) {
              pbVar5 = &DAT_146bc87b0;
            }
            else {
              pbVar5 = (byte *)((ulonglong)uVar6 + lVar3);
            }
            pbVar7 = &DAT_146bc87b0;
            if ((uVar2 < (ushort)((ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1])) &&
               (uVar6 = (ushort)pbVar5[uVar11 * 2 + 3] + (ushort)pbVar5[uVar11 * 2 + 2] * 0x100,
               uVar6 != 0)) {
              pbVar7 = pbVar5 + uVar6;
            }
            local_48 = (uint)uVar2;
            apply_string<GPOSProxy>(local_118,pbVar7,param_2[1] + uVar11 * 0xc);
            hb_buffer_t::message(param_5,param_4,"end lookup %d",uVar2);
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar12 = local_res8;
        } while (uVar8 < *puVar10);
      }
      if (*(longlong *)(puVar10 + 2) != 0) {
        hb_buffer_t::clear_output(param_5);
        (**(code **)(puVar10 + 2))(param_3,param_4,param_5);
      }
      local_res8 = uVar12 + 1;
      uVar11 = (ulonglong)local_res8;
    } while (local_res8 < *(uint *)(param_1 + 0x3b0));
  }
  return;
}



// FUNCTION 143c7ed30 apply<GSUBProxy> body=510 status=ok
// SIG undefined apply<GSUBProxy>(void)

void hb_ot_map_t::apply<GSUBProxy>
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  byte *pbVar5;
  ushort uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint local_res8;
  undefined1 local_118 [36];
  undefined4 local_f4;
  byte local_f0;
  code *local_e8;
  uint local_48;
  
  uVar9 = 0;
  OT::hb_apply_context_t::hb_apply_context_t(local_118,0,param_4,param_5);
  local_e8 = OT::SubstLookup::apply_recurse_func;
  local_res8 = 0;
  uVar11 = uVar9;
  if (*(int *)(param_1 + 0x360) != 0) {
    do {
      puVar10 = (uint *)(uVar11 * 0x10 + *(longlong *)(param_1 + 0x368));
      uVar12 = (uint)uVar11;
      if ((uint)uVar9 < *puVar10) {
        do {
          lVar1 = uVar9 * 8;
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x148) + lVar1);
          uVar11 = (ulonglong)uVar2;
          cVar4 = hb_buffer_t::message(param_5,param_4,"start lookup %d",(uint)uVar2);
          if (cVar4 != '\0') {
            lVar3 = *param_2;
            local_f4 = *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 4 + lVar1);
            local_f0 = *(byte *)(*(longlong *)(param_1 + 0x148) + 2 + lVar1) & 1;
            uVar6 = (ushort)*(byte *)(lVar3 + 8) * 0x100 + (ushort)*(byte *)(lVar3 + 9);
            if (uVar6 == 0) {
              pbVar5 = &DAT_146bc87b0;
            }
            else {
              pbVar5 = (byte *)((ulonglong)uVar6 + lVar3);
            }
            pbVar7 = &DAT_146bc87b0;
            if ((uVar2 < (ushort)((ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1])) &&
               (uVar6 = (ushort)pbVar5[uVar11 * 2 + 3] + (ushort)pbVar5[uVar11 * 2 + 2] * 0x100,
               uVar6 != 0)) {
              pbVar7 = pbVar5 + uVar6;
            }
            local_48 = (uint)uVar2;
            apply_string<GSUBProxy>(local_118,pbVar7,param_2[1] + uVar11 * 0xc);
            hb_buffer_t::message(param_5,param_4,"end lookup %d",uVar2);
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar12 = local_res8;
        } while (uVar8 < *puVar10);
      }
      if (*(longlong *)(puVar10 + 2) != 0) {
        hb_buffer_t::clear_output(param_5);
        (**(code **)(puVar10 + 2))(param_3,param_4,param_5);
      }
      local_res8 = uVar12 + 1;
      uVar11 = (ulonglong)local_res8;
    } while (local_res8 < *(uint *)(param_1 + 0x360));
  }
  return;
}



// FUNCTION 143c7ef30 apply_string<GPOSProxy> body=224 status=ok
// SIG undefined apply_string<GPOSProxy>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void apply_string<GPOSProxy>(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_138 [8];
  undefined1 *local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_148 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0xb8) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    OT::Lookup::get_props(param_2);
    OT::hb_apply_context_t::set_lookup_props(param_1);
    _guard_xfg_dispatch_icall_nop(local_138,0,0x110);
    local_158 = local_138;
    local_150 = 0;
    OT::Lookup::dispatch<OT::PosLookupSubTable,hb_get_subtables_context_t>(param_2,&local_158);
    *(undefined4 *)(lVar1 + 0xb4) = 0;
    apply_forward(param_1,param_3,local_138);
    if (local_130 != local_128) {
      FMemory::operator_delete();
    }
  }
  return;
}



// FUNCTION 143c7f010 apply_string<GSUBProxy> body=301 status=ok
// SIG undefined apply_string<GSUBProxy>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void apply_string<GSUBProxy>(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_138 [8];
  undefined1 *local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_148 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0xb8) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    OT::Lookup::get_props(param_2);
    OT::hb_apply_context_t::set_lookup_props(param_1);
    _guard_xfg_dispatch_icall_nop(local_138,0,0x110);
    local_158 = local_138;
    local_150 = 0;
    OT::Lookup::dispatch<OT::SubstLookupSubTable,hb_get_subtables_context_t>(param_2,&local_158);
    cVar2 = OT::SubstLookup::is_reverse(param_2);
    if (cVar2 == '\0') {
      hb_buffer_t::clear_output();
      *(undefined4 *)(lVar1 + 0xb4) = 0;
      cVar2 = apply_forward(param_1,param_3,local_138);
      if (cVar2 != '\0') {
        hb_buffer_t::swap_buffers(lVar1);
      }
    }
    else {
      hb_buffer_t::remove_output(lVar1);
      *(int *)(lVar1 + 0xb4) = *(int *)(lVar1 + 0xb8) + -1;
      apply_backward(param_1,param_3,local_138);
    }
    if (local_130 != local_128) {
      FMemory::operator_delete();
    }
  }
  return;
}



// FUNCTION 143c7f280 bsearch<unsigned_int> body=182 status=ok
// SIG undefined bsearch<unsigned_int>(void)

int OT::SortedArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
              (byte *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) - 1;
  if (-1 < iVar4) {
    do {
      iVar1 = (iVar4 + iVar5) / 2;
      lVar3 = (longlong)iVar1;
      uVar2 = (uint)param_1[lVar3 * 6 + 3] * 0x10000 + (uint)param_1[lVar3 * 6 + 4] * 0x100 +
              (uint)param_1[lVar3 * 6 + 2] * 0x1000000 + (uint)param_1[lVar3 * 6 + 5];
      if (*param_2 < uVar2) {
        iVar4 = iVar1 + -1;
      }
      else {
        if (*param_2 == uVar2) {
          return iVar1;
        }
        iVar5 = iVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return -1;
}



// FUNCTION 143c7f340 bsearch<unsigned_int> body=150 status=ok
// SIG undefined bsearch<unsigned_int>(void)

int OT::SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
              (byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) - 1;
  if (-1 < iVar3) {
    do {
      iVar1 = (iVar3 + iVar4) / 2;
      iVar2 = *param_2 -
              (uint)(ushort)((ushort)param_1[(longlong)iVar1 * 2 + 2] * 0x100 +
                            (ushort)param_1[(longlong)iVar1 * 2 + 3]);
      if (iVar2 < 0) {
        iVar3 = iVar1 + -1;
      }
      else {
        if (iVar2 < 1) {
          return iVar1;
        }
        iVar4 = iVar1 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return -1;
}



// FUNCTION 143c7f3e0 bsearch<unsigned_int> body=190 status=ok
// SIG undefined bsearch<unsigned_int>(void)

int OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
              (byte *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) - 1;
  if (-1 < iVar3) {
    do {
      iVar1 = (iVar3 + iVar4) / 2;
      lVar2 = (longlong)iVar1;
      if (*param_2 <
          (uint)(ushort)((ushort)param_1[lVar2 * 6 + 2] * 0x100 + (ushort)param_1[lVar2 * 6 + 3])) {
        iVar3 = iVar1 + -1;
      }
      else {
        if (CONCAT31(1,(uint)(ushort)((ushort)param_1[lVar2 * 6 + 4] * 0x100 +
                                     (ushort)param_1[lVar2 * 6 + 5]) < *param_2) == 0x100) {
          return iVar1;
        }
        iVar4 = iVar1 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return -1;
}



// FUNCTION 143c7f5c0 FUN_143c7f5c0 body=572 status=ok
// SIG undefined FUN_143c7f5c0(void)

byte * FUN_143c7f5c0(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  
code_r0x000143c7f5c0:
  switch(param_3) {
  case 1:
    sVar7 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (((sVar7 == 1) || (sVar7 == 2)) &&
       (uVar6 = (ushort)param_1[2] * 0x100 + (ushort)param_1[3], uVar3 = (ulonglong)uVar6,
       uVar6 != 0)) {
LAB_143c7f62a:
      return param_1 + uVar3;
    }
  default:
switchD_143c7f5e2_default:
    return &DAT_146bc87b0;
  case 2:
    sVar7 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (sVar7 == 1) goto LAB_143c7f68e;
    if (sVar7 != 2) goto switchD_143c7f5e2_default;
LAB_143c7f654:
    uVar3 = (ulonglong)(ushort)((ushort)param_1[3] + (ushort)param_1[2] * 0x100);
    break;
  case 3:
  case 4:
  case 5:
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) goto LAB_143c7f68e;
    goto switchD_143c7f5e2_default;
  case 6:
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1)
    goto switchD_143c7f5e2_default;
    uVar3 = (ulonglong)(ushort)((ushort)param_1[3] + (ushort)param_1[2] * 0x100);
    break;
  case 7:
    sVar7 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (sVar7 == 1) goto LAB_143c7f654;
    if (sVar7 == 2) goto LAB_143c7f68e;
    if (sVar7 == 3) {
      bVar1 = param_1[6];
      bVar2 = param_1[7];
      goto LAB_143c7f69f;
    }
    goto switchD_143c7f5e2_default;
  case 8:
    sVar7 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (sVar7 != 1) {
      if (sVar7 == 2) goto LAB_143c7f654;
      if (sVar7 == 3) {
        pbVar4 = (byte *)FUN_143c86f30(param_1);
        return pbVar4;
      }
      goto switchD_143c7f5e2_default;
    }
LAB_143c7f68e:
    bVar1 = param_1[2];
    bVar2 = param_1[3];
LAB_143c7f69f:
    uVar3 = (ulonglong)(ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2);
    break;
  case 9:
    goto LAB_143c7f4a0;
  }
  if ((int)uVar3 == 0) goto switchD_143c7f5e2_default;
  goto LAB_143c7f62a;
LAB_143c7f4a0:
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return &DAT_146bc87b0;
  }
  param_3 = (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
  uVar5 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
          (uint)param_1[7];
  if (uVar5 == 0) {
    param_1 = &DAT_146bc87b0;
  }
  else {
    param_1 = param_1 + uVar5;
  }
  goto code_r0x000143c7f5c0;
}



// FUNCTION 143c7f7a0 FUN_143c7f7a0 body=499 status=ok
// SIG undefined FUN_143c7f7a0(void)

byte * FUN_143c7f7a0(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  
code_r0x000143c7f7a0:
  switch(param_3) {
  case 1:
    sVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if ((sVar6 == 1) || (sVar6 == 2)) {
      uVar5 = (ushort)param_1[2] * 0x100 + (ushort)param_1[3];
joined_r0x000143c7f842:
      if (uVar5 != 0) {
        return param_1 + uVar5;
      }
    }
  default:
switchD_143c7f7c2_default:
    return &DAT_146bc87b0;
  case 2:
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1)
    goto switchD_143c7f7c2_default;
    break;
  case 3:
  case 4:
  case 8:
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
      return &DAT_146bc87b0;
    }
    break;
  case 5:
    sVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (sVar6 != 1) {
      if (sVar6 == 2) break;
      if (sVar6 == 3) {
        bVar1 = param_1[6];
        bVar2 = param_1[7];
        goto LAB_143c7f83a;
      }
      goto switchD_143c7f7c2_default;
    }
LAB_143c7f8ec:
    uVar5 = (ushort)param_1[3] + (ushort)param_1[2] * 0x100;
    goto joined_r0x000143c7f842;
  case 6:
    sVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (sVar6 != 1) {
      if (sVar6 == 2) goto LAB_143c7f8ec;
      if (sVar6 == 3) {
        pbVar3 = (byte *)FUN_143c86f30(param_1);
        return pbVar3;
      }
      goto switchD_143c7f7c2_default;
    }
    break;
  case 7:
    goto LAB_143c7f530;
  }
  bVar1 = param_1[2];
  bVar2 = param_1[3];
LAB_143c7f83a:
  uVar5 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
  goto joined_r0x000143c7f842;
LAB_143c7f530:
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return &DAT_146bc87b0;
  }
  param_3 = (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
  uVar4 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
          (uint)param_1[7];
  if (uVar4 == 0) {
    param_1 = &DAT_146bc87b0;
  }
  else {
    param_1 = param_1 + uVar4;
  }
  goto code_r0x000143c7f7a0;
}



// FUNCTION 143c7f940 dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_> body=427 status=ok
// SIG undefined dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>(void)

undefined1 *
OT::Lookup::
dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
          (byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  short sVar9;
  byte *pbVar10;
  ulonglong uVar11;
  
  bVar1 = *param_1;
  uVar11 = 0;
  bVar2 = param_1[1];
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar5 == 0) {
    return &DAT_146bc87b0;
  }
  do {
    if ((uint)uVar11 < (uint)(ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
      pbVar10 = param_1 + uVar11 * 2 + 6;
    }
    else {
      pbVar10 = &DAT_146bc87b0;
    }
    pbVar4 = &DAT_146bc87b0;
    uVar6 = (ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1];
    if (uVar6 != 0) {
      pbVar4 = param_1 + uVar6;
    }
    pbVar10 = (byte *)FUN_143c7f5c0(pbVar4,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
    uVar3 = *param_2;
    sVar9 = (ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1];
    if (sVar9 == 1) {
      CoverageFormat1::
      add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>
                (pbVar10,uVar3);
    }
    else if (sVar9 == 2) {
      uVar8 = 0;
      uVar6 = (ushort)pbVar10[2] * 0x100 + (ushort)pbVar10[3];
      if (uVar6 != 0) {
        do {
          if ((uint)uVar8 < (uint)(ushort)((ushort)pbVar10[2] * 0x100 + (ushort)pbVar10[3])) {
            pbVar4 = pbVar10 + uVar8 * 6 + 4;
          }
          else {
            pbVar4 = &DAT_145d3a43c;
          }
          RangeRecord::
          add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>
                    (pbVar4,uVar3);
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < uVar6);
      }
    }
    uVar7 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar7;
  } while (uVar7 < uVar5);
  return &DAT_146bc87b0;
}



// FUNCTION 143c7faf0 dispatch<OT::PosLookupSubTable,OT::hb_apply_context_t> body=240 status=ok
// SIG undefined dispatch<OT::PosLookupSubTable,OT::hb_apply_context_t>(void)

ulonglong OT::Lookup::dispatch<OT::PosLookupSubTable,OT::hb_apply_context_t>
                    (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  
  bVar1 = *param_1;
  uVar7 = 0;
  bVar2 = param_1[1];
  uVar3 = 0;
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar5 != 0) {
    do {
      if (uVar7 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        pbVar8 = param_1 + ((ulonglong)uVar7 + 3) * 2;
      }
      else {
        pbVar8 = &DAT_146bc87b0;
      }
      pbVar4 = &DAT_146bc87b0;
      uVar6 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
      if (uVar6 != 0) {
        pbVar4 = param_1 + uVar6;
      }
      uVar3 = FUN_143c804a0(pbVar4,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c7fbe0 dispatch<OT::PosLookupSubTable,hb_get_subtables_context_t> body=220 status=ok
// SIG undefined dispatch<OT::PosLookupSubTable,hb_get_subtables_context_t>(void)

undefined8
OT::Lookup::dispatch<OT::PosLookupSubTable,hb_get_subtables_context_t>
          (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  
  bVar1 = *param_1;
  uVar6 = 0;
  bVar2 = param_1[1];
  uVar4 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar4 != 0) {
    do {
      if (uVar6 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        pbVar7 = param_1 + ((ulonglong)uVar6 + 3) * 2;
      }
      else {
        pbVar7 = &DAT_146bc87b0;
      }
      pbVar3 = &DAT_146bc87b0;
      uVar5 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
      if (uVar5 != 0) {
        pbVar3 = param_1 + uVar5;
      }
      FUN_143c80b60(pbVar3,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  return 0;
}



// FUNCTION 143c7fcc0 dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t> body=244 status=ok
// SIG undefined dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t>(void)

undefined8
OT::Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t>
          (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  
  bVar1 = *param_1;
  uVar7 = 0;
  bVar2 = param_1[1];
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar5 != 0) {
    do {
      if (uVar7 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        pbVar8 = param_1 + ((ulonglong)uVar7 + 3) * 2;
      }
      else {
        pbVar8 = &DAT_146bc87b0;
      }
      pbVar4 = &DAT_146bc87b0;
      uVar6 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
      if (uVar6 != 0) {
        pbVar4 = param_1 + uVar6;
      }
      cVar3 = FUN_143c815f0(pbVar4,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return 1;
}



// FUNCTION 143c7fdc0 dispatch<OT::SinglePosFormat1> body=99 status=ok
// SIG undefined dispatch<OT::SinglePosFormat1>(void)

undefined1
OT::hb_sanitize_context_t::dispatch<OT::SinglePosFormat1>(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = check_range(param_1,param_2,6);
  if (cVar1 != '\0') {
    cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_2 + 2,param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = ValueFormat::sanitize_value(param_2 + 4,param_1,param_2,param_2 + 6);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c7fe30 dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_> body=427 status=ok
// SIG undefined dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>(void)

undefined1 *
OT::Lookup::
dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
          (byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  short sVar9;
  byte *pbVar10;
  ulonglong uVar11;
  
  bVar1 = *param_1;
  uVar11 = 0;
  bVar2 = param_1[1];
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar5 == 0) {
    return &DAT_146bc87b0;
  }
  do {
    if ((uint)uVar11 < (uint)(ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
      pbVar10 = param_1 + uVar11 * 2 + 6;
    }
    else {
      pbVar10 = &DAT_146bc87b0;
    }
    pbVar4 = &DAT_146bc87b0;
    uVar6 = (ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1];
    if (uVar6 != 0) {
      pbVar4 = param_1 + uVar6;
    }
    pbVar10 = (byte *)FUN_143c7f7a0(pbVar4,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
    uVar3 = *param_2;
    sVar9 = (ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1];
    if (sVar9 == 1) {
      CoverageFormat1::
      add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>
                (pbVar10,uVar3);
    }
    else if (sVar9 == 2) {
      uVar8 = 0;
      uVar6 = (ushort)pbVar10[2] * 0x100 + (ushort)pbVar10[3];
      if (uVar6 != 0) {
        do {
          if ((uint)uVar8 < (uint)(ushort)((ushort)pbVar10[2] * 0x100 + (ushort)pbVar10[3])) {
            pbVar4 = pbVar10 + uVar8 * 6 + 4;
          }
          else {
            pbVar4 = &DAT_145d3a43c;
          }
          RangeRecord::
          add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>
                    (pbVar4,uVar3);
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < uVar6);
      }
    }
    uVar7 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar7;
  } while (uVar7 < uVar5);
  return &DAT_146bc87b0;
}



// FUNCTION 143c7ffe0 dispatch<OT::SubstLookupSubTable,OT::hb_apply_context_t> body=240 status=ok
// SIG undefined dispatch<OT::SubstLookupSubTable,OT::hb_apply_context_t>(void)

ulonglong OT::Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_apply_context_t>
                    (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  
  bVar1 = *param_1;
  uVar7 = 0;
  bVar2 = param_1[1];
  uVar3 = 0;
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar5 != 0) {
    do {
      if (uVar7 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        pbVar8 = param_1 + ((ulonglong)uVar7 + 3) * 2;
      }
      else {
        pbVar8 = &DAT_146bc87b0;
      }
      pbVar4 = &DAT_146bc87b0;
      uVar6 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
      if (uVar6 != 0) {
        pbVar4 = param_1 + uVar6;
      }
      uVar3 = FUN_143c806b0(pbVar4,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c800d0 dispatch<OT::SubstLookupSubTable,hb_get_subtables_context_t> body=220 status=ok
// SIG undefined dispatch<OT::SubstLookupSubTable,hb_get_subtables_context_t>(void)

undefined8
OT::Lookup::dispatch<OT::SubstLookupSubTable,hb_get_subtables_context_t>
          (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  
  bVar1 = *param_1;
  uVar6 = 0;
  bVar2 = param_1[1];
  uVar4 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar4 != 0) {
    do {
      if (uVar6 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        pbVar7 = param_1 + ((ulonglong)uVar6 + 3) * 2;
      }
      else {
        pbVar7 = &DAT_146bc87b0;
      }
      pbVar3 = &DAT_146bc87b0;
      uVar5 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
      if (uVar5 != 0) {
        pbVar3 = param_1 + uVar5;
      }
      FUN_143c80df0(pbVar3,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  return 0;
}



// FUNCTION 143c801b0 dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t> body=244 status=ok
// SIG undefined dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t>(void)

undefined8
OT::Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t>
          (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  
  bVar1 = *param_1;
  uVar7 = 0;
  bVar2 = param_1[1];
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar5 != 0) {
    do {
      if (uVar7 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        pbVar8 = param_1 + ((ulonglong)uVar7 + 3) * 2;
      }
      else {
        pbVar8 = &DAT_146bc87b0;
      }
      pbVar4 = &DAT_146bc87b0;
      uVar6 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
      if (uVar6 != 0) {
        pbVar4 = param_1 + uVar6;
      }
      cVar3 = FUN_143c81900(pbVar4,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return 1;
}



// FUNCTION 143c802b0 dispatch<OT::SubstLookupSubTable,OT::hb_would_apply_context_t> body=240 status=ok
// SIG undefined dispatch<OT::SubstLookupSubTable,OT::hb_would_apply_context_t>(void)

ulonglong OT::Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_would_apply_context_t>
                    (byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  
  bVar1 = *param_1;
  uVar7 = 0;
  bVar2 = param_1[1];
  uVar3 = 0;
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (uVar5 != 0) {
    do {
      if (uVar7 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        pbVar8 = param_1 + ((ulonglong)uVar7 + 3) * 2;
      }
      else {
        pbVar8 = &DAT_146bc87b0;
      }
      pbVar4 = &DAT_146bc87b0;
      uVar6 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
      if (uVar6 != 0) {
        pbVar4 = param_1 + uVar6;
      }
      uVar3 = FUN_143c81b70(pbVar4,param_2,(ushort)bVar1 * 0x100 + (ushort)bVar2);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c804a0 FUN_143c804a0 body=602 status=ok
// SIG undefined FUN_143c804a0(void)

ulonglong FUN_143c804a0(byte *param_1,undefined8 param_2,uint param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  
  do {
    switch(param_3) {
    case 1:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::SinglePosFormat1::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::SinglePosFormat2::apply(param_1,param_2);
        return uVar1;
      }
    default:
switchD_143c804c8_default:
      return in_RAX & 0xffffffffffffff00;
    case 2:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::PairPosFormat1::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::PairPosFormat2::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c804c8_default;
    case 3:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::CursivePosFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c804c8_default;
    case 4:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::MarkBasePosFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c804c8_default;
    case 5:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::MarkLigPosFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c804c8_default;
    case 6:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::MarkMarkPosFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c804c8_default;
    case 7:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::ContextFormat1::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::ContextFormat2::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 3) {
        uVar1 = OT::ContextFormat3::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c804c8_default;
    case 8:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::ChainContextFormat1::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::ChainContextFormat2::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 3) {
        uVar1 = OT::ChainContextFormat3::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c804c8_default;
    case 9:
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
        return 0;
      }
      param_3 = (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
      in_RAX = 0;
      uVar2 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar2 == 0) {
        param_1 = &DAT_146bc87b0;
      }
      else {
        param_1 = param_1 + uVar2;
      }
    }
  } while( true );
}



// FUNCTION 143c806b0 FUN_143c806b0 body=543 status=ok
// SIG undefined FUN_143c806b0(void)

ulonglong FUN_143c806b0(byte *param_1,undefined8 param_2,uint param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  
  do {
    switch(param_3) {
    case 1:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::SingleSubstFormat1::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::SingleSubstFormat2::apply(param_1,param_2);
        return uVar1;
      }
    default:
switchD_143c806d8_default:
      return in_RAX & 0xffffffffffffff00;
    case 2:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::MultipleSubstFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c806d8_default;
    case 3:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::AlternateSubstFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c806d8_default;
    case 4:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::LigatureSubstFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c806d8_default;
    case 5:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::ContextFormat1::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::ContextFormat2::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 3) {
        uVar1 = OT::ContextFormat3::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c806d8_default;
    case 6:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::ChainContextFormat1::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::ChainContextFormat2::apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 3) {
        uVar1 = OT::ChainContextFormat3::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c806d8_default;
    case 7:
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
        return 0;
      }
      param_3 = (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
      in_RAX = 0;
      uVar2 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar2 == 0) {
        param_1 = &DAT_146bc87b0;
      }
      else {
        param_1 = param_1 + uVar2;
      }
      break;
    case 8:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::ReverseChainSingleSubstFormat1::apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c806d8_default;
    }
  } while( true );
}



// FUNCTION 143c80980 FUN_143c80980 body=161 status=ok
// SIG undefined FUN_143c80980(void)

undefined8 FUN_143c80980(byte *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f150;
    }
  }
  else if (sVar2 == 2) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f160;
      return 0;
    }
  }
  else if (sVar2 == 3) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f170;
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143c80a30 FUN_143c80a30 body=161 status=ok
// SIG undefined FUN_143c80a30(void)

undefined8 FUN_143c80a30(byte *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f180;
    }
  }
  else if (sVar2 == 2) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f190;
      return 0;
    }
  }
  else if (sVar2 == 3) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f1a0;
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143c80ae0 FUN_143c80ae0 body=120 status=ok
// SIG undefined FUN_143c80ae0(void)

undefined8 FUN_143c80ae0(byte *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f210;
    }
  }
  else if (sVar2 == 2) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f220;
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143c80b60 FUN_143c80b60 body=475 status=ok
// SIG undefined FUN_143c80b60(void)

undefined8 FUN_143c80b60(byte *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
code_r0x000143c80b60:
  switch(param_3) {
  case 1:
    uVar2 = FUN_143c80cf0(param_1);
    return uVar2;
  case 2:
    uVar2 = FUN_143c80ae0(param_1);
    return uVar2;
  case 3:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar1 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar1 != (undefined8 *)0x0)) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f1b0;
    }
    break;
  case 4:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar1 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar1 != (undefined8 *)0x0)) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f1d0;
      return 0;
    }
    break;
  case 5:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar1 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar1 != (undefined8 *)0x0)) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f1e0;
      return 0;
    }
    break;
  case 6:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar1 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar1 != (undefined8 *)0x0)) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f1f0;
      return 0;
    }
    break;
  case 7:
    uVar2 = FUN_143c80a30(param_1);
    return uVar2;
  case 8:
    uVar2 = FUN_143c80980(param_1);
    return uVar2;
  case 9:
    goto LAB_143c80880;
  }
  return 0;
LAB_143c80880:
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 0;
  }
  param_3 = (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
  uVar3 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
          (uint)param_1[7];
  if (uVar3 == 0) {
    param_1 = &DAT_146bc87b0;
  }
  else {
    param_1 = param_1 + uVar3;
  }
  goto code_r0x000143c80b60;
}



// FUNCTION 143c80cf0 FUN_143c80cf0 body=120 status=ok
// SIG undefined FUN_143c80cf0(void)

undefined8 FUN_143c80cf0(byte *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f240;
    }
  }
  else if (sVar2 == 2) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f250;
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143c80d70 FUN_143c80d70 body=120 status=ok
// SIG undefined FUN_143c80d70(void)

undefined8 FUN_143c80d70(byte *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f260;
    }
  }
  else if (sVar2 == 2) {
    puVar1 = (undefined8 *)
             hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(*param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = &LAB_143c7f270;
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143c80df0 FUN_143c80df0 body=474 status=ok
// SIG undefined FUN_143c80df0(void)

undefined8 FUN_143c80df0(byte *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
code_r0x000143c80df0:
  switch(param_3) {
  case 1:
    uVar1 = FUN_143c80d70(param_1);
    return uVar1;
  case 2:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar2 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar2 != (undefined8 *)0x0)) {
      puVar2[1] = &LAB_143c7f200;
      *puVar2 = param_1;
      return 0;
    }
    break;
  case 3:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar2 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar2 != (undefined8 *)0x0)) {
      puVar2[1] = &LAB_143c7f140;
      *puVar2 = param_1;
      return 0;
    }
    break;
  case 4:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar2 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar2 != (undefined8 *)0x0)) {
      puVar2[1] = &LAB_143c7f1c0;
      *puVar2 = param_1;
      return 0;
    }
    break;
  case 5:
    uVar1 = FUN_143c80a30(param_1);
    return uVar1;
  case 6:
    uVar1 = FUN_143c80980(param_1);
    return uVar1;
  case 7:
    goto LAB_143c80900;
  case 8:
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) &&
       (puVar2 = (undefined8 *)
                 hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push
                           (*param_2), puVar2 != (undefined8 *)0x0)) {
      puVar2[1] = &LAB_143c7f230;
      *puVar2 = param_1;
    }
  }
  return 0;
LAB_143c80900:
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 0;
  }
  param_3 = (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
  uVar3 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
          (uint)param_1[7];
  if (uVar3 == 0) {
    param_1 = &DAT_146bc87b0;
  }
  else {
    param_1 = param_1 + uVar3;
  }
  goto code_r0x000143c80df0;
}



// FUNCTION 143c80f70 FUN_143c80f70 body=106 status=ok
// SIG undefined FUN_143c80f70(void)

undefined8 FUN_143c80f70(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = OT::hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = FUN_143c81050(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c80fe0 FUN_143c80fe0 body=106 status=ok
// SIG undefined FUN_143c80fe0(void)

undefined8 FUN_143c80fe0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = OT::hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = FUN_143c81120(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c81050 FUN_143c81050 body=194 status=ok
// SIG undefined FUN_143c81050(void)

ulonglong FUN_143c81050(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  
  uVar1 = OT::hb_sanitize_context_t::check_range(param_2,param_1,8);
  if (((char)uVar1 != '\0') &&
     (uVar1 = 0,
     (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
     (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) != 0)) {
    sVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    uVar2 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar2 == 0) {
      uVar1 = FUN_143c815f0(&DAT_146bc87b0,param_2,sVar3);
      return uVar1;
    }
    uVar1 = FUN_143c815f0((ulonglong)uVar2 + param_1,param_2,sVar3);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c81120 FUN_143c81120 body=194 status=ok
// SIG undefined FUN_143c81120(void)

ulonglong FUN_143c81120(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  
  uVar1 = OT::hb_sanitize_context_t::check_range(param_2,param_1,8);
  if (((char)uVar1 != '\0') &&
     (uVar1 = 0,
     (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
     (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) != 0)) {
    sVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    uVar2 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar2 == 0) {
      uVar1 = FUN_143c81900(&DAT_146bc87b0,param_2,sVar3);
      return uVar1;
    }
    uVar1 = FUN_143c81900((ulonglong)uVar2 + param_1,param_2,sVar3);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c811f0 dispatch<OT::hb_sanitize_context_t> body=106 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::AlternateSubst::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = AlternateSubstFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c81260 dispatch<OT::hb_sanitize_context_t> body=160 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::ChainContext::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    uVar1 = ChainContextFormat1::sanitize(param_1,param_2);
    return uVar1;
  }
  if (sVar2 == 2) {
    uVar1 = ChainContextFormat2::sanitize(param_1,param_2);
    return uVar1;
  }
  if (sVar2 != 3) {
    return 1;
  }
  uVar1 = ChainContextFormat3::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c81300 dispatch<OT::hb_sanitize_context_t> body=160 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::Context::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    uVar1 = ContextFormat1::sanitize(param_1,param_2);
    return uVar1;
  }
  if (sVar2 == 2) {
    uVar1 = ContextFormat2::sanitize(param_1,param_2);
    return uVar1;
  }
  if (sVar2 != 3) {
    return 1;
  }
  uVar1 = ContextFormat3::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c813a0 dispatch<OT::hb_sanitize_context_t> body=106 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::CursivePos::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = CursivePosFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c81410 dispatch<OT::hb_sanitize_context_t> body=106 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::LigatureSubst::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = LigatureSubstFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c81480 dispatch<OT::hb_sanitize_context_t> body=106 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::MarkBasePos::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = MarkBasePosFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c814f0 dispatch<OT::hb_sanitize_context_t> body=106 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::MarkLigPos::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = MarkLigPosFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c81560 dispatch<OT::hb_sanitize_context_t> body=134 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::PairPos::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 != 1) {
    if (sVar2 != 2) {
      return 1;
    }
    uVar1 = PairPosFormat2::sanitize(param_1,param_2);
    return uVar1;
  }
  uVar1 = PairPosFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c815f0 FUN_143c815f0 body=344 status=ok
// SIG undefined FUN_143c815f0(void)

undefined8 FUN_143c815f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = OT::hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 != '\0') {
    switch(param_3 + -1) {
    case 0:
      uVar1 = OT::SinglePos::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 1:
      uVar1 = OT::PairPos::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 2:
      uVar1 = OT::CursivePos::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 3:
      uVar1 = OT::MarkBasePos::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 4:
      uVar1 = OT::MarkLigPos::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 5:
      uVar1 = OT::MarkBasePos::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 6:
      uVar1 = OT::Context::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 7:
      uVar1 = OT::ChainContext::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 8:
      uVar1 = FUN_143c80f70(param_1,param_2);
      return uVar1;
    default:
      return CONCAT71((uint7)(uint3)((uint)(param_3 + -1) >> 8),1);
    }
  }
  return uVar1;
}



// FUNCTION 143c81770 dispatch<OT::hb_sanitize_context_t> body=106 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8
OT::ReverseChainSingleSubst::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = ReverseChainSingleSubstFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c817e0 dispatch<OT::hb_sanitize_context_t> body=134 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::SinglePos::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 != 1) {
    if (sVar2 != 2) {
      return 1;
    }
    uVar1 = SinglePosFormat2::sanitize(param_1,param_2);
    return uVar1;
  }
  uVar1 = hb_sanitize_context_t::dispatch<OT::SinglePosFormat1>(param_2,param_1);
  return uVar1;
}



// FUNCTION 143c81870 dispatch<OT::hb_sanitize_context_t> body=134 status=ok
// SIG undefined dispatch<OT::hb_sanitize_context_t>(void)

undefined8 OT::SingleSubst::dispatch<OT::hb_sanitize_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 != 1) {
    if (sVar2 != 2) {
      return 1;
    }
    uVar1 = SingleSubstFormat2::sanitize(param_1,param_2);
    return uVar1;
  }
  uVar1 = SingleSubstFormat1::sanitize(param_1,param_2);
  return uVar1;
}



// FUNCTION 143c81900 FUN_143c81900 body=318 status=ok
// SIG undefined FUN_143c81900(void)

undefined8 FUN_143c81900(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = OT::hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 != '\0') {
    switch(param_3 + -1) {
    case 0:
      uVar1 = OT::SingleSubst::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 1:
      uVar1 = OT::AlternateSubst::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 2:
      uVar1 = OT::AlternateSubst::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 3:
      uVar1 = OT::LigatureSubst::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 4:
      uVar1 = OT::Context::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 5:
      uVar1 = OT::ChainContext::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    case 6:
      uVar1 = FUN_143c80fe0(param_1,param_2);
      return uVar1;
    case 7:
      uVar1 = OT::ReverseChainSingleSubst::dispatch<OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar1;
    default:
      return CONCAT71((uint7)(uint3)((uint)(param_3 + -1) >> 8),1);
    }
  }
  return uVar1;
}



// FUNCTION 143c81ae0 dispatch<OT::hb_would_apply_context_t> body=136 status=ok
// SIG undefined dispatch<OT::hb_would_apply_context_t>(void)

undefined8 OT::Context::dispatch<OT::hb_would_apply_context_t>(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short sVar2;
  
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    uVar1 = ContextFormat1::would_apply(param_1);
    return uVar1;
  }
  if (sVar2 != 2) {
    if (sVar2 != 3) {
      return 0;
    }
    uVar1 = would_match_input(param_2,(ushort)param_1[2] * 0x100 + (ushort)param_1[3],param_1 + 8,
                              match_coverage,param_1);
    return uVar1;
  }
  uVar1 = ContextFormat2::would_apply(param_1);
  return uVar1;
}



// FUNCTION 143c81b70 FUN_143c81b70 body=476 status=ok
// SIG undefined FUN_143c81b70(void)

ulonglong FUN_143c81b70(byte *param_1,undefined8 param_2,uint param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  
  do {
    switch(param_3) {
    case 1:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::AlternateSubstFormat1::would_apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::AlternateSubstFormat1::would_apply(param_1,param_2);
        return uVar1;
      }
    default:
switchD_143c81b98_default:
      return in_RAX & 0xffffffffffffff00;
    case 2:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::AlternateSubstFormat1::would_apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c81b98_default;
    case 3:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::AlternateSubstFormat1::would_apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c81b98_default;
    case 4:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::LigatureSubstFormat1::would_apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c81b98_default;
    case 5:
      uVar1 = OT::Context::dispatch<OT::hb_would_apply_context_t>(param_1);
      return uVar1;
    case 6:
      in_RAX = 0;
      sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (sVar3 == 1) {
        uVar1 = OT::ChainContextFormat1::would_apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 2) {
        uVar1 = OT::ChainContextFormat2::would_apply(param_1,param_2);
        return uVar1;
      }
      if (sVar3 == 3) {
        uVar1 = OT::ChainContextFormat3::would_apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c81b98_default;
    case 7:
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
        return 0;
      }
      param_3 = (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
      in_RAX = 0;
      uVar2 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar2 == 0) {
        param_1 = &DAT_146bc87b0;
      }
      else {
        param_1 = param_1 + uVar2;
      }
      break;
    case 8:
      in_RAX = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
        uVar1 = OT::AlternateSubstFormat1::would_apply(param_1,param_2);
        return uVar1;
      }
      goto switchD_143c81b98_default;
    }
  } while( true );
}



// FUNCTION 143c81cf0 sanitize<unsigned_int> body=288 status=ok
// SIG undefined sanitize<unsigned_int>(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize<unsigned_int>(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = AnchorMatrix::sanitize(param_3 + (ulonglong)uVar3,param_2,param_4),
             cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c81e10 sanitize<unsigned_int> body=153 status=ok
// SIG undefined sanitize<unsigned_int>(void)

undefined8
OT::OffsetTo<OT::OffsetListOf<OT::AnchorMatrix>,OT::IntType<unsigned_short,2>_>::
sanitize<unsigned_int>(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
LAB_143c81ea5:
    uVar2 = 0;
  }
  else {
    uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar3 != 0) {
      param_3 = (ulonglong)uVar3 + param_3;
      cVar1 = ArrayOf<OT::OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
              ::sanitize<unsigned_int>(param_3,param_2,param_3,param_4);
      if (cVar1 == '\0') {
        cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
        if (cVar1 == '\0') goto LAB_143c81ea5;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c81eb0 sanitize<unsigned_int> body=150 status=ok
// SIG undefined sanitize<unsigned_int>(void)

undefined8
OT::OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned_short,2>_>::sanitize<unsigned_int>
          (byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
LAB_143c81f42:
    uVar2 = 0;
  }
  else {
    uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar3 != 0) {
      cVar1 = AnchorMatrix::sanitize((ulonglong)uVar3 + param_3,param_2,param_4);
      if (cVar1 == '\0') {
        cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
        if (cVar1 == '\0') goto LAB_143c81f42;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c81f50 sanitize<unsigned_int> body=150 status=ok
// SIG undefined sanitize<unsigned_int>(void)

undefined8
OT::OffsetTo<OT::FeatureParams,OT::IntType<unsigned_short,2>_>::sanitize<unsigned_int>
          (byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
LAB_143c81fe2:
    uVar2 = 0;
  }
  else {
    uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar3 != 0) {
      cVar1 = FeatureParams::sanitize((ulonglong)uVar3 + param_3,param_2,param_4);
      if (cVar1 == '\0') {
        cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
        if (cVar1 == '\0') goto LAB_143c81fe2;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c81ff0 sanitize<OT::PairSet::sanitize_closure_t_*___ptr64> body=288 status=ok
// SIG undefined sanitize<OT::PairSet::sanitize_closure_t_*___ptr64>(void)

undefined8
OT::ArrayOf<OT::OffsetTo<OT::PairSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize<OT::PairSet::sanitize_closure_t_*___ptr64>
          (byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = PairSet::sanitize(param_3 + (ulonglong)uVar3,param_2,param_4), cVar1 == '\0'))
          {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c82110 sanitize<OT::Record<OT::LangSys>::sanitize_closure_t_const_*___ptr64> body=203 status=ok
// SIG undefined sanitize<OT::Record<OT::LangSys>::sanitize_closure_t_const_*___ptr64>(void)

undefined1
OT::OffsetTo<OT::LangSys,OT::IntType<unsigned_short,2>_>::
sanitize<OT::Record<OT::LangSys>::sanitize_closure_t_const_*___ptr64>
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar2 != 0) {
    param_3 = (ulonglong)uVar2 + param_3;
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_3,6);
    if ((cVar1 == '\0') ||
       (cVar1 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_3 + 4,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 143c821e0 sanitize<OT::Record<OT::Script>::sanitize_closure_t_const_*___ptr64> body=203 status=ok
// SIG undefined sanitize<OT::Record<OT::Script>::sanitize_closure_t_const_*___ptr64>(void)

undefined1
OT::OffsetTo<OT::Script,OT::IntType<unsigned_short,2>_>::
sanitize<OT::Record<OT::Script>::sanitize_closure_t_const_*___ptr64>
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar2 != 0) {
    param_3 = (ulonglong)uVar2 + param_3;
    cVar1 = OffsetTo<OT::LangSys,OT::IntType<unsigned_short,2>_>::
            sanitize<OT::Record<OT::LangSys>::sanitize_closure_t_const_*___ptr64>
                      (param_3,param_2,param_3);
    if ((cVar1 == '\0') ||
       (cVar1 = ArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_3 + 2,param_2,param_3), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 143c822b0 hb_apply_context_t body=275 status=ok
// SIG undefined hb_apply_context_t(void)

undefined4 *
OT::hb_apply_context_t::hb_apply_context_t
          (undefined4 *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  *(longlong *)(param_1 + 2) = param_3;
  lVar1 = *(longlong *)(param_3 + 0x80);
  *(longlong *)(param_1 + 4) = lVar1;
  *(longlong *)(param_1 + 6) = param_4;
  param_1[8] = *(undefined4 *)(param_4 + 0x90);
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[9] = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_1 + 0xe) = 6;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xa0) + 0x18);
  *(longlong *)(param_1 + 0x10) = lVar1;
  *(bool *)(param_1 + 0x12) =
       (ushort)((ushort)*(byte *)(lVar1 + 4) * 0x100 + (ushort)*(byte *)(lVar1 + 5)) != 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 143c823d0 ~hb_auto_array_t<hb_get_subtables_context_t::hb_applicable_t> body=42 status=ok
// SIG undefined ~hb_auto_array_t<hb_get_subtables_context_t::hb_applicable_t>(void)

void hb_auto_array_t<hb_get_subtables_context_t::hb_applicable_t>::
     ~hb_auto_array_t<hb_get_subtables_context_t::hb_applicable_t>(undefined8 *param_1)

{
  if ((undefined8 *)param_1[1] != param_1 + 2) {
    FMemory::operator_delete();
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 143c82400 operator[] body=79 status=ok
// SIG undefined operator[](void)

byte * OT::OffsetListOf<OT::AnchorMatrix>::operator[](byte *param_1,uint param_2)

{
  ushort uVar1;
  
  if ((param_2 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) &&
     (uVar1 = (ushort)param_1[(ulonglong)param_2 * 2 + 2] * 0x100 +
              (ushort)param_1[(ulonglong)param_2 * 2 + 3], uVar1 != 0)) {
    return param_1 + uVar1;
  }
  return &DAT_146bc87b0;
}



// FUNCTION 143c82450 _hb_allocate_lig_id body=28 status=ok
// SIG undefined _hb_allocate_lig_id(void)

byte _hb_allocate_lig_id(longlong param_1)

{
  uint uVar1;
  
  do {
    uVar1 = *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0xe0) = uVar1 + 1;
  } while ((uVar1 & 7) == 0);
  return (byte)uVar1 & 7;
}



// FUNCTION 143c82470 _hb_ot_layout_create body=1099 status=ok
// SIG undefined _hb_ot_layout_create(void)

undefined8 * _hb_ot_layout_create(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort uVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  longlong local_18;
  undefined4 local_10;
  
  puVar5 = (undefined8 *)HarfBuzzCalloc(1);
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((*(code **)(param_1 + 0x78) == (code *)0x0) ||
     (lVar6 = (**(code **)(param_1 + 0x78))(param_1,0x47444546,*(undefined8 *)(param_1 + 0x80)),
     lVar6 == 0)) {
    lVar6 = hb_blob_get_empty();
  }
  uVar7 = OT::Sanitizer<OT::GDEF>::sanitize(lVar6);
  *puVar5 = uVar7;
  hb_blob_make_immutable(uVar7);
  puVar8 = (undefined1 *)hb_blob_get_data(uVar7,0);
  puVar9 = &DAT_146bc87b0;
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar8;
  }
  puVar5[3] = puVar9;
  if ((*(code **)(param_1 + 0x78) == (code *)0x0) ||
     (lVar6 = (**(code **)(param_1 + 0x78))(param_1,0x47535542,*(undefined8 *)(param_1 + 0x80)),
     lVar6 == 0)) {
    lVar6 = hb_blob_get_empty();
  }
  uVar7 = OT::Sanitizer<OT::GSUB>::sanitize(lVar6);
  puVar5[1] = uVar7;
  hb_blob_make_immutable(uVar7);
  puVar8 = (undefined1 *)hb_blob_get_data(uVar7,0);
  puVar9 = &DAT_146bc87b0;
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar8;
  }
  puVar5[4] = puVar9;
  if ((*(code **)(param_1 + 0x78) == (code *)0x0) ||
     (lVar6 = (**(code **)(param_1 + 0x78))(param_1,0x47504f53,*(undefined8 *)(param_1 + 0x80)),
     lVar6 == 0)) {
    lVar6 = hb_blob_get_empty();
  }
  uVar7 = OT::Sanitizer<OT::GPOS>::sanitize(lVar6);
  puVar5[2] = uVar7;
  hb_blob_make_immutable(uVar7);
  puVar8 = (undefined1 *)hb_blob_get_data(uVar7,0);
  puVar9 = &DAT_146bc87b0;
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = puVar8;
  }
  puVar5[5] = puVar9;
  iVar2 = FSlateUpdatableInstanceBuffer::GetNumInstances(*puVar5);
  iVar3 = FSlateUpdatableInstanceBuffer::GetNumInstances(puVar5[1]);
  iVar4 = FSlateUpdatableInstanceBuffer::GetNumInstances(puVar5[2]);
  if (iVar2 == 0x1ba) {
    bVar16 = iVar4 == 0xa436;
LAB_143c825dc:
    if ((!bVar16) || (iVar3 != 0xb3a)) goto LAB_143c82664;
  }
  else {
    if (iVar2 == 0x1ae) {
      bVar16 = iVar4 == 0x9ed6;
      goto LAB_143c825dc;
    }
    if (iVar2 == 0x1ea) {
      if (iVar4 != 0xa2a6) goto LAB_143c82664;
    }
    else if ((iVar2 != 0x1de) || (iVar4 != 0xa3ae)) goto LAB_143c82664;
    if (iVar3 != 0xbe6) goto LAB_143c82664;
  }
  lVar6 = puVar5[3];
  puVar9 = &DAT_146bc87b0;
  uVar13 = (ushort)*(byte *)(lVar6 + 4) * 0x100 + (ushort)*(byte *)(lVar6 + 5);
  if (uVar13 != 0) {
    puVar9 = (undefined1 *)(lVar6 + (ulonglong)uVar13);
  }
  iVar2 = OT::ClassDef::get_class(puVar9,5);
  if (iVar2 == 3) {
    puVar5[3] = &DAT_146bc87b0;
  }
LAB_143c82664:
  lVar6 = puVar5[4];
  uVar13 = (ushort)*(byte *)(lVar6 + 9) + (ushort)*(byte *)(lVar6 + 8) * 0x100;
  pbVar14 = &DAT_146bc87b0;
  if (uVar13 != 0) {
    pbVar14 = (byte *)(lVar6 + (ulonglong)uVar13);
  }
  pbVar15 = &DAT_146bc87b0;
  lVar1 = puVar5[5];
  *(uint *)(puVar5 + 6) = (uint)(ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]);
  uVar13 = (ushort)*(byte *)(lVar1 + 8) * 0x100 + (ushort)*(byte *)(lVar1 + 9);
  if (uVar13 != 0) {
    pbVar15 = (byte *)(lVar1 + (ulonglong)uVar13);
  }
  pbVar14 = &DAT_146bc87b0;
  *(uint *)((longlong)puVar5 + 0x34) = (uint)(ushort)((ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1])
  ;
  uVar13 = (ushort)*(byte *)(lVar6 + 8) * 0x100 + (ushort)*(byte *)(lVar6 + 9);
  if (uVar13 != 0) {
    pbVar14 = (byte *)(lVar6 + (ulonglong)uVar13);
  }
  uVar7 = HarfBuzzCalloc((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1],0xc);
  lVar6 = puVar5[5];
  puVar5[7] = uVar7;
  uVar13 = (ushort)*(byte *)(lVar6 + 8) * 0x100 + (ushort)*(byte *)(lVar6 + 9);
  if (uVar13 == 0) {
    pbVar14 = &DAT_146bc87b0;
  }
  else {
    pbVar14 = (byte *)((ulonglong)uVar13 + lVar6);
  }
  lVar6 = HarfBuzzCalloc((ushort)pbVar14[1] + (ushort)*pbVar14 * 0x100,0xc);
  puVar5[8] = lVar6;
  if (((*(int *)(puVar5 + 6) == 0) || (puVar5[7] != 0)) &&
     ((*(int *)((longlong)puVar5 + 0x34) == 0 || (lVar6 != 0)))) {
    uVar12 = 0;
    uVar11 = uVar12;
    if (*(int *)(puVar5 + 6) != 0) {
      do {
        uVar7 = OT::GSUBGPOS::get_lookup(puVar5[4],uVar11);
        local_10 = 0;
        local_18 = puVar5[7];
        *(undefined8 *)(local_18 + uVar11 * 0xc) = 0;
        *(undefined4 *)(local_18 + 8 + uVar11 * 0xc) = 0;
        local_18 = local_18 + uVar11 * 0xc;
        OT::Lookup::
        dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
                  (uVar7,&local_18);
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(puVar5 + 6));
    }
    if (*(int *)((longlong)puVar5 + 0x34) != 0) {
      do {
        lVar6 = puVar5[5];
        pbVar14 = &DAT_146bc87b0;
        uVar13 = (ushort)*(byte *)(lVar6 + 8) * 0x100 + (ushort)*(byte *)(lVar6 + 9);
        if (uVar13 != 0) {
          pbVar14 = (byte *)(lVar6 + (ulonglong)uVar13);
        }
        pbVar15 = &DAT_146bc87b0;
        if (((uint)uVar12 < (uint)(ushort)((ushort)pbVar14[1] + (ushort)*pbVar14 * 0x100)) &&
           (uVar13 = (ushort)pbVar14[uVar12 * 2 + 3] + (ushort)pbVar14[uVar12 * 2 + 2] * 0x100,
           uVar13 != 0)) {
          pbVar15 = pbVar14 + uVar13;
        }
        local_10 = 0;
        local_18 = puVar5[8];
        *(undefined8 *)(local_18 + uVar12 * 0xc) = 0;
        *(undefined4 *)(local_18 + 8 + uVar12 * 0xc) = 0;
        local_18 = local_18 + uVar12 * 0xc;
        OT::Lookup::
        dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
                  (pbVar15,&local_18);
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)puVar5 + 0x34));
    }
  }
  else {
    _hb_ot_layout_destroy(puVar5);
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 143c828c0 _hb_ot_layout_destroy body=66 status=ok
// SIG undefined _hb_ot_layout_destroy(void)

void _hb_ot_layout_destroy(undefined8 *param_1)

{
  FMemory::operator_delete(param_1[7]);
  FMemory::operator_delete(param_1[8]);
  hb_blob_destroy(*param_1);
  hb_blob_destroy(param_1[1]);
  hb_blob_destroy(param_1[2]);
  FMemory::operator_delete(param_1);
  return;
}



// FUNCTION 143c82910 add_range body=172 status=ok
// SIG undefined add_range(void)

void hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>
     ::add_range(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 - param_2 < 0x1f) {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    uVar1 = 1 << ((byte)param_3 & 0x1f);
    *param_1 = *param_1 | (uVar1 * 2 - (uint)(uVar1 < uVar2)) - uVar2;
  }
  else {
    *param_1 = 0xffffffff;
  }
  if (0x1e < (param_3 >> 9) - (param_2 >> 9)) {
    param_1[1] = 0xffffffff;
    return;
  }
  uVar1 = 1 << ((byte)(param_2 >> 9) & 0x1f);
  uVar2 = 1 << ((byte)(param_3 >> 9) & 0x1f);
  param_1[1] = param_1[1] | (uVar2 * 2 - (uint)(uVar2 < uVar1)) - uVar1;
  return;
}



// FUNCTION 143c829c0 apply body=408 status=ok
// SIG undefined apply(void)

undefined8 OT::AlternateSubstFormat1::apply(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort uVar9;
  short sVar10;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  pbVar7 = &DAT_146bc87b0;
  uVar9 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar9 == 0) {
    pbVar5 = &DAT_146bc87b0;
  }
  else {
    pbVar5 = (byte *)(param_1 + (ulonglong)uVar9);
  }
  sVar10 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (sVar10 == 1) {
    local_res8[0] =
         *(undefined4 *)(*(longlong *)(lVar1 + 200) + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14);
    uVar3 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar5 + 2,local_res8);
  }
  else {
    if (sVar10 != 2) {
      return 0;
    }
    uVar3 = CoverageFormat2::get_coverage();
  }
  if (uVar3 != 0xffffffff) {
    if (uVar3 < (ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
      pbVar5 = (byte *)(param_1 + ((ulonglong)uVar3 + 3) * 2);
    }
    else {
      pbVar5 = &DAT_146bc87b0;
    }
    pbVar8 = &DAT_146bc87b0;
    uVar9 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
    if (uVar9 != 0) {
      pbVar8 = (byte *)(param_1 + (ulonglong)uVar9);
    }
    uVar9 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
    if (uVar9 != 0) {
      uVar3 = *(uint *)(param_2 + 0x24);
      bVar4 = 0;
      uVar6 = uVar3;
      bVar2 = 0;
      if (uVar3 != 0) {
        for (; bVar4 = bVar2, (uVar6 & 1) == 0; uVar6 = uVar6 >> 1) {
          bVar2 = bVar4 + 1;
        }
      }
      uVar3 = uVar3 & *(uint *)(*(longlong *)(lVar1 + 200) + 4 +
                               (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14);
      uVar6 = uVar3 >> (bVar4 & 0x1f);
      if ((uVar6 <= uVar9) && (uVar3 >> (bVar4 & 0x1f) != 0)) {
        uVar6 = uVar6 - 1;
        if (uVar6 < uVar9) {
          pbVar7 = pbVar8 + ((ulonglong)uVar6 + 1) * 2;
        }
        hb_apply_context_t::replace_glyph(param_2,(ushort)pbVar7[1] + (ushort)*pbVar7 * 0x100);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c82b60 apply body=308 status=ok
// SIG undefined apply(void)

ulonglong OT::ChainContextFormat1::apply(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  undefined4 local_res8 [2];
  undefined1 *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar2 = &DAT_146bc87b0;
  pbVar5 = &DAT_146bc87b0;
  uVar3 = (ushort)*(byte *)(param_1 + 3) + (ushort)*(byte *)(param_1 + 2) * 0x100;
  if (uVar3 != 0) {
    pbVar5 = (byte *)(param_1 + (ulonglong)uVar3);
  }
  uVar1 = 0;
  sVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (sVar4 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar5 + 2,local_res8);
  }
  else {
    if (sVar4 != 2) goto LAB_143c82c0a;
    uVar1 = CoverageFormat2::get_coverage(pbVar5);
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 <
        (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
      pbVar5 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar5 = &DAT_146bc87b0;
    }
    uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
    if (uVar3 != 0) {
      puVar2 = (undefined1 *)(param_1 + (ulonglong)uVar3);
    }
    local_10 = 0;
    local_28 = &LAB_143c882b0;
    local_20 = 0;
    uStack_18 = 0;
    uVar1 = ChainRuleSet::apply(puVar2,param_2,&local_28);
    return uVar1;
  }
LAB_143c82c0a:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c82ca0 apply body=477 status=ok
// SIG undefined apply(void)

ulonglong OT::ChainContextFormat2::apply(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ushort uVar7;
  short sVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined4 local_res8 [2];
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puVar6 = &DAT_146bc87b0;
  lVar1 = *(longlong *)(param_2 + 0x18);
  pbVar9 = &DAT_146bc87b0;
  uVar7 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar7 != 0) {
    pbVar9 = (byte *)(param_1 + (ulonglong)uVar7);
  }
  uVar3 = 0;
  sVar8 = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
  if (sVar8 == 1) {
    local_res8[0] =
         *(undefined4 *)(*(longlong *)(lVar1 + 200) + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14);
    uVar3 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar9 + 2,local_res8);
  }
  else {
    if (sVar8 != 2) goto LAB_143c82d41;
    uVar3 = CoverageFormat2::get_coverage(pbVar9);
  }
  if ((int)uVar3 != -1) {
    puVar4 = &DAT_146bc87b0;
    uVar7 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
    if (uVar7 != 0) {
      puVar4 = (undefined1 *)(param_1 + (ulonglong)uVar7);
    }
    puVar5 = &DAT_146bc87b0;
    uVar7 = (ushort)*(byte *)(param_1 + 7) + (ushort)*(byte *)(param_1 + 6) * 0x100;
    if (uVar7 != 0) {
      puVar5 = (undefined1 *)(param_1 + (ulonglong)uVar7);
    }
    puVar10 = &DAT_146bc87b0;
    uVar7 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
    if (uVar7 != 0) {
      puVar10 = (undefined1 *)(param_1 + (ulonglong)uVar7);
    }
    uVar2 = ClassDef::get_class(puVar5,*(undefined4 *)
                                        (*(longlong *)(lVar1 + 200) +
                                        (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14));
    if (uVar2 < (ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb))
       ) {
      pbVar9 = (byte *)(param_1 + ((ulonglong)uVar2 + 6) * 2);
    }
    else {
      pbVar9 = &DAT_146bc87b0;
    }
    uVar7 = (ushort)pbVar9[1] + (ushort)*pbVar9 * 0x100;
    if (uVar7 != 0) {
      puVar6 = (undefined1 *)(param_1 + (ulonglong)uVar7);
    }
    local_48 = match_class;
    local_40 = puVar4;
    local_38 = puVar5;
    local_30 = puVar10;
    uVar3 = ChainRuleSet::apply(puVar6,param_2,&local_48);
    return uVar3;
  }
LAB_143c82d41:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c82e80 apply body=459 status=ok
// SIG undefined apply(void)

ulonglong OT::ChainContextFormat3::apply(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  byte *pbVar3;
  ushort uVar4;
  byte *pbVar5;
  short sVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  code *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  pbVar7 = &DAT_146bc87b0;
  pbVar5 = &DAT_146bc87b0;
  pbVar3 = (byte *)(param_1 + 2) +
           ((uint)(ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3))
            * 2 + 2);
  uVar4 = (ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1];
  if (uVar4 != 0) {
    pbVar5 = pbVar3 + 2;
  }
  uVar2 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (uVar2 != 0) {
    pbVar7 = (byte *)((ulonglong)uVar2 + param_1);
  }
  uVar1 = 0;
  sVar6 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
  if (sVar6 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar7 + 2,local_res8);
  }
  else {
    if (sVar6 != 2) goto LAB_143c82f72;
    uVar1 = CoverageFormat2::get_coverage(pbVar7);
  }
  if ((int)uVar1 != -1) {
    pbVar5 = pbVar3 + ((uint)uVar4 * 2 + 2);
    uVar2 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
    local_38 = match_coverage;
    uVar1 = (ulonglong)((uint)uVar2 * 2 + 2);
    local_30 = param_1;
    local_28 = param_1;
    local_20 = param_1;
    uVar1 = chain_context_apply_lookup
                      (param_2,(ushort)*(byte *)(param_1 + 2) * 0x100 +
                               (ushort)*(byte *)(param_1 + 3),param_1 + 4,uVar4,pbVar3 + 4,uVar2,
                       pbVar5 + 2,(ushort)pbVar5[uVar1] * 0x100 + (ushort)pbVar5[uVar1 + 1],
                       pbVar5 + uVar1 + 2,&local_38);
    return uVar1;
  }
LAB_143c82f72:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c83050 apply body=263 status=ok
// SIG undefined apply(void)

void OT::ChainRule::apply(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  
  uVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  pbVar4 = param_1 + ((uint)uVar6 * 2 + 2);
  uVar5 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
  if (uVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = uVar5 - 1;
  }
  pbVar7 = pbVar4 + (iVar1 * 2 + 2);
  uVar3 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
  uVar2 = (uint)uVar3 * 2 + 2;
  chain_context_apply_lookup
            (param_2,uVar6,param_1 + 2,uVar5,pbVar4 + 2,uVar3,pbVar7 + 2,
             (ushort)pbVar7[uVar2] * 0x100 + (ushort)pbVar7[(ulonglong)uVar2 + 1],
             pbVar7 + (ulonglong)uVar2 + 2,param_3);
  return;
}



// FUNCTION 143c83160 apply body=210 status=ok
// SIG undefined apply(void)

undefined8 OT::ChainRuleSet::apply(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort uVar6;
  
  uVar4 = 0;
  uVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar6 != 0) {
    do {
      if (uVar4 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
        pbVar5 = param_1 + ((ulonglong)uVar4 + 1) * 2;
      }
      else {
        pbVar5 = &DAT_146bc87b0;
      }
      pbVar2 = &DAT_146bc87b0;
      uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
      if (uVar3 != 0) {
        pbVar2 = param_1 + uVar3;
      }
      cVar1 = ChainRule::apply(pbVar2,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  return 0;
}



// FUNCTION 143c83240 apply body=298 status=ok
// SIG undefined apply(void)

ulonglong OT::ContextFormat1::apply(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  undefined4 local_res8 [2];
  undefined1 *local_18;
  undefined8 local_10;
  
  puVar2 = &DAT_146bc87b0;
  pbVar5 = &DAT_146bc87b0;
  uVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar3 != 0) {
    pbVar5 = (byte *)(param_1 + (ulonglong)uVar3);
  }
  uVar1 = 0;
  sVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (sVar4 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar5 + 2,local_res8);
  }
  else {
    if (sVar4 != 2) goto LAB_143c832e9;
    uVar1 = CoverageFormat2::get_coverage(pbVar5);
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 <
        (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
      pbVar5 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar5 = &DAT_146bc87b0;
    }
    uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
    if (uVar3 != 0) {
      puVar2 = (undefined1 *)(param_1 + (ulonglong)uVar3);
    }
    local_10 = 0;
    local_18 = &LAB_143c882b0;
    uVar1 = RuleSet::apply(puVar2,param_2,&local_18);
    return uVar1;
  }
LAB_143c832e9:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c83370 apply body=371 status=ok
// SIG undefined apply(void)

ulonglong OT::ContextFormat2::apply(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  short sVar7;
  byte *pbVar8;
  undefined4 local_res8 [2];
  code *local_28;
  undefined1 *local_20;
  
  puVar4 = &DAT_146bc87b0;
  lVar1 = *(longlong *)(param_2 + 0x18);
  pbVar8 = &DAT_146bc87b0;
  uVar6 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar6 != 0) {
    pbVar8 = (byte *)(param_1 + (ulonglong)uVar6);
  }
  uVar3 = 0;
  sVar7 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
  if (sVar7 == 1) {
    local_res8[0] =
         *(undefined4 *)(*(longlong *)(lVar1 + 200) + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14);
    uVar3 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar8 + 2,local_res8);
  }
  else {
    if (sVar7 != 2) goto LAB_143c83416;
    uVar3 = CoverageFormat2::get_coverage(pbVar8);
  }
  if ((int)uVar3 != -1) {
    puVar5 = &DAT_146bc87b0;
    uVar6 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
    if (uVar6 != 0) {
      puVar5 = (undefined1 *)(param_1 + (ulonglong)uVar6);
    }
    uVar2 = ClassDef::get_class(puVar5,*(undefined4 *)
                                        (*(longlong *)(lVar1 + 200) +
                                        (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14));
    if (uVar2 < (ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7))) {
      pbVar8 = (byte *)(param_1 + ((ulonglong)uVar2 + 4) * 2);
    }
    else {
      pbVar8 = &DAT_146bc87b0;
    }
    uVar6 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
    if (uVar6 != 0) {
      puVar4 = (undefined1 *)(param_1 + (ulonglong)uVar6);
    }
    local_28 = match_class;
    local_20 = puVar5;
    uVar3 = RuleSet::apply(puVar4,param_2,&local_28);
    return uVar3;
  }
LAB_143c83416:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c834f0 apply body=312 status=ok
// SIG undefined apply(void)

ulonglong OT::ContextFormat3::apply(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  short sVar3;
  byte *pbVar4;
  undefined4 local_res8 [2];
  code *local_18;
  longlong local_10;
  
  pbVar4 = &DAT_146bc87b0;
  uVar2 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
  if (uVar2 != 0) {
    pbVar4 = (byte *)(param_1 + (ulonglong)uVar2);
  }
  uVar1 = 0;
  sVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
  if (sVar3 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar4 + 2,local_res8);
  }
  else {
    if (sVar3 != 2) goto LAB_143c8358e;
    uVar1 = CoverageFormat2::get_coverage(pbVar4);
  }
  if ((int)uVar1 != -1) {
    local_18 = match_coverage;
    local_10 = param_1;
    uVar1 = context_apply_lookup
                      (param_2,(ushort)*(byte *)(param_1 + 3) +
                               (ushort)*(byte *)(param_1 + 2) * 0x100,param_1 + 8,
                       (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5),
                       param_1 + 6 +
                       (ulonglong)
                       ((uint)(ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 +
                                      (ushort)*(byte *)(param_1 + 3)) * 2),&local_18);
    return uVar1;
  }
LAB_143c8358e:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c83630 apply body=1251 status=ok
// SIG undefined apply(void)

ulonglong OT::CursivePosFormat1::apply(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  short sVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  ushort uVar19;
  byte *pbVar20;
  int iVar21;
  longlong lVar22;
  undefined1 *puVar23;
  int iVar24;
  int local_res8 [2];
  ulonglong local_res10;
  uint local_res18;
  longlong local_res20;
  
  pbVar17 = &DAT_146bc87b0;
  lVar5 = *(longlong *)(param_2 + 0x18);
  uVar19 = (ushort)*(byte *)(param_1 + 3) + (ushort)*(byte *)(param_1 + 2) * 0x100;
  pbVar18 = &DAT_146bc87b0;
  if (uVar19 != 0) {
    pbVar18 = (byte *)(param_1 + (ulonglong)uVar19);
  }
  uVar2 = *(uint *)(lVar5 + 0xb4);
  uVar10 = 0xffffffff;
  iVar16 = *(int *)(*(longlong *)(lVar5 + 200) + (ulonglong)uVar2 * 0x14);
  sVar15 = (ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1];
  local_res10 = param_2;
  if (sVar15 == 1) {
    local_res8[0] = iVar16;
    uVar9 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar18 + 2,local_res8);
  }
  else if (sVar15 == 2) {
    uVar9 = CoverageFormat2::get_coverage(pbVar18,iVar16);
  }
  else {
    uVar9 = 0xffffffff;
  }
  if (uVar9 < (ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
    puVar23 = (undefined1 *)(param_1 + 6 + (ulonglong)uVar9 * 4);
  }
  else {
    puVar23 = &DAT_146bc87b0;
  }
  uVar12 = 0;
  if ((ushort)((ushort)(byte)puVar23[2] * 0x100 + (ushort)(byte)puVar23[3]) == 0)
  goto LAB_143c8372e;
  uVar14 = 0;
  *(uint *)(param_2 + 0x50) = uVar2;
  *(undefined4 *)(param_2 + 0x88) = 1;
  *(undefined4 *)(param_2 + 0x8c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18) + 0xb8);
  lVar22 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18);
  iVar16 = 0;
  if (uVar2 == *(uint *)(lVar22 + 0xb4)) {
    uVar14 = *(undefined1 *)
              (*(longlong *)(lVar22 + 200) + 0xf + (ulonglong)*(uint *)(lVar22 + 0xb4) * 0x14);
  }
  *(undefined1 *)(param_2 + 0x6c) = uVar14;
  uVar12 = hb_apply_context_t::skipping_iterator_t::next(param_2 + 0x50);
  if ((char)uVar12 == '\0') goto LAB_143c8372e;
  pbVar18 = &DAT_146bc87b0;
  uVar19 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar19 != 0) {
    pbVar18 = (byte *)(param_1 + (ulonglong)uVar19);
  }
  uVar2 = *(uint *)(param_2 + 0x50);
  uVar13 = (ulonglong)uVar2;
  lVar22 = *(longlong *)(lVar5 + 200);
  sVar15 = (ushort)pbVar18[1] + (ushort)*pbVar18 * 0x100;
  iVar24 = *(int *)(lVar22 + uVar13 * 0x14);
  if (sVar15 == 1) {
    local_res8[0] = iVar24;
    uVar10 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                       (pbVar18 + 2,local_res8);
LAB_143c8380a:
    lVar22 = *(longlong *)(lVar5 + 200);
  }
  else if (sVar15 == 2) {
    uVar10 = CoverageFormat2::get_coverage(pbVar18,iVar24);
    goto LAB_143c8380a;
  }
  uVar8 = local_res10;
  if (uVar10 < (ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
    pbVar18 = (byte *)(param_1 + 6 + (ulonglong)uVar10 * 4);
  }
  else {
    pbVar18 = &DAT_146bc87b0;
  }
  uVar12 = 0;
  if ((ushort)((ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1]) == 0) {
LAB_143c8372e:
    return uVar12 & 0xffffffffffffff00;
  }
  local_res18 = *(uint *)(lVar5 + 0xb4);
  pbVar20 = &DAT_146bc87b0;
  uVar19 = (ushort)(byte)puVar23[3] + (ushort)(byte)puVar23[2] * 0x100;
  if (uVar19 != 0) {
    pbVar20 = (byte *)(param_1 + (ulonglong)uVar19);
  }
  uVar3 = *(undefined4 *)(lVar22 + (ulonglong)local_res18 * 0x14);
  local_res20 = (ulonglong)local_res18 * 0x14;
  uVar6 = *(undefined8 *)(local_res10 + 8);
  local_res10 = local_res10 & 0xffffffff00000000;
  sVar15 = (ushort)*pbVar20 * 0x100 + (ushort)pbVar20[1];
  local_res8[0] = 0;
  if (sVar15 == 1) {
    AnchorFormat1::get_anchor(pbVar20,uVar6,uVar3,local_res8,&local_res10);
LAB_143c83928:
    iVar24 = (int)local_res10;
    iVar21 = local_res8[0];
  }
  else {
    if (sVar15 == 2) {
      AnchorFormat2::get_anchor(pbVar20,uVar6,uVar3,local_res8,&local_res10);
      goto LAB_143c83928;
    }
    iVar24 = iVar16;
    iVar21 = iVar16;
    if (sVar15 == 3) {
      AnchorFormat3::get_anchor(pbVar20,uVar6,uVar3,local_res8,&local_res10);
      goto LAB_143c83928;
    }
  }
  uVar19 = (ushort)*pbVar18 * 0x100 + (ushort)pbVar18[1];
  if (uVar19 != 0) {
    pbVar17 = (byte *)(param_1 + (ulonglong)uVar19);
  }
  uVar6 = *(undefined8 *)(uVar8 + 8);
  local_res10 = local_res10 & 0xffffffff00000000;
  local_res8[0] = 0;
  lVar22 = uVar13 * 0x14;
  uVar3 = *(undefined4 *)(lVar22 + *(longlong *)(lVar5 + 200));
  sVar15 = (ushort)*pbVar17 * 0x100 + (ushort)pbVar17[1];
  if (sVar15 == 1) {
    AnchorFormat1::get_anchor(pbVar17,uVar6,uVar3,local_res8,&local_res10);
  }
  else if (sVar15 == 2) {
    AnchorFormat2::get_anchor(pbVar17,uVar6,uVar3,local_res8,&local_res10);
  }
  else {
    if (sVar15 != 3) goto LAB_143c839f2;
    AnchorFormat3::get_anchor(pbVar17,uVar6,uVar3,local_res8,&local_res10);
  }
  iVar16 = (int)local_res10;
LAB_143c839f2:
  iVar4 = *(int *)(uVar8 + 0x20);
  lVar7 = *(longlong *)(lVar5 + 0xd8);
  if (iVar4 == 4) {
    *(int *)(local_res20 + lVar7) = *(int *)(local_res20 + 8 + lVar7) + iVar21;
    iVar4 = *(int *)(lVar22 + 8 + lVar7);
    iVar11 = iVar4 + local_res8[0];
    *(int *)(lVar22 + lVar7) = *(int *)(lVar22 + lVar7) - iVar11;
    *(int *)(lVar22 + 8 + lVar7) = iVar4 - iVar11;
  }
  else if (iVar4 == 5) {
    iVar4 = *(int *)(local_res20 + 8 + lVar7);
    iVar11 = iVar4 + iVar21;
    *(int *)(local_res20 + lVar7) = *(int *)(local_res20 + lVar7) - iVar11;
    *(int *)(local_res20 + 8 + lVar7) = iVar4 - iVar11;
    *(int *)(lVar22 + lVar7) = *(int *)(lVar22 + 8 + lVar7) + local_res8[0];
  }
  else if (iVar4 == 6) {
    *(int *)(local_res20 + 4 + lVar7) = *(int *)(local_res20 + 0xc + lVar7) + iVar24;
    iVar4 = *(int *)(lVar22 + 0xc + lVar7);
    iVar11 = iVar4 + iVar16;
    piVar1 = (int *)(lVar22 + 4 + lVar7);
    *piVar1 = *piVar1 - iVar11;
    *(int *)(lVar22 + 0xc + lVar7) = iVar4 - iVar11;
  }
  else if (iVar4 == 7) {
    iVar4 = *(int *)(local_res20 + 0xc + lVar7);
    iVar11 = iVar4 + iVar24;
    piVar1 = (int *)(local_res20 + 4 + lVar7);
    *piVar1 = *piVar1 - iVar11;
    *(int *)(local_res20 + 0xc + lVar7) = iVar4 - iVar11;
    *(int *)(lVar22 + 4 + lVar7) = iVar16;
  }
  iVar21 = local_res8[0] - iVar21;
  iVar16 = iVar16 - iVar24;
  uVar10 = local_res18;
  if ((*(byte *)(uVar8 + 0x3c) & 1) == 0) {
    iVar21 = -iVar21;
    iVar16 = -iVar16;
    uVar13 = (ulonglong)local_res18;
    uVar10 = uVar2;
  }
  sVar15 = (short)uVar13;
  reverse_cursive_minor_offset(lVar7,uVar10,*(undefined4 *)(uVar8 + 0x20));
  lVar7 = lVar7 + (ulonglong)uVar10 * 0x14;
  *(undefined1 *)(lVar7 + 0x12) = 2;
  *(short *)(lVar7 + 0x10) = sVar15 - (short)uVar10;
  *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 8;
  if ((*(uint *)(uVar8 + 0x20) & 0xfffffffe) == 4) {
    *(int *)(lVar7 + 0xc) = iVar16;
  }
  else {
    *(int *)(lVar7 + 8) = iVar21;
  }
  *(uint *)(lVar5 + 0xb4) = uVar2;
  return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
}



// FUNCTION 143c83b20 apply body=345 status=ok
// SIG undefined apply(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 OT::Ligature::apply(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  byte *pbVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 *local_148;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_130 [2];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  sVar3 = (ushort)param_1[2] * 0x100 + (ushort)param_1[3];
  if (sVar3 == 0) {
LAB_143c83b66:
    uVar2 = 0;
  }
  else {
    if (sVar3 == 1) {
      hb_apply_context_t::replace_glyph(param_2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    }
    else {
      pbVar4 = param_1 + 4;
      local_138[0] = 0;
      local_134 = 0;
      local_130[0] = 0;
      if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) < 2) {
        pbVar4 = &DAT_146bc87b0;
      }
      local_148 = &local_134;
      local_150 = local_138;
      local_158 = local_128;
      local_160 = local_130;
      local_168 = 0;
      cVar1 = match_input(param_2,sVar3,pbVar4,&LAB_143c882b0);
      if (cVar1 == '\0') goto LAB_143c83b66;
      local_158 = (undefined1 *)CONCAT44(local_158._4_4_,local_134);
      local_160 = (undefined4 *)CONCAT71(local_160._1_7_,local_138[0]);
      local_168 = CONCAT44(local_168._4_4_,
                           (uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]));
      ligate_input(param_2,sVar3,local_128,local_130[0]);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c83c80 apply body=201 status=ok
// SIG undefined apply(void)

undefined8 OT::LigatureSet::apply(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort uVar6;
  
  uVar4 = 0;
  uVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar6 != 0) {
    do {
      if (uVar4 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
        pbVar5 = param_1 + ((ulonglong)uVar4 + 1) * 2;
      }
      else {
        pbVar5 = &DAT_146bc87b0;
      }
      pbVar2 = &DAT_146bc87b0;
      uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
      if (uVar3 != 0) {
        pbVar2 = param_1 + uVar3;
      }
      cVar1 = Ligature::apply(pbVar2,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  return 0;
}



// FUNCTION 143c83d50 apply body=273 status=ok
// SIG undefined apply(void)

ulonglong OT::LigatureSubstFormat1::apply(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ushort uVar4;
  short sVar5;
  undefined4 local_res8 [2];
  
  puVar3 = &DAT_146bc87b0;
  uVar4 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar4 == 0) {
    pbVar2 = &DAT_146bc87b0;
  }
  else {
    pbVar2 = (byte *)(param_1 + (ulonglong)uVar4);
  }
  uVar1 = 0;
  sVar5 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
  if (sVar5 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar2 + 2,local_res8);
  }
  else {
    if (sVar5 != 2) goto LAB_143c83dfa;
    uVar1 = CoverageFormat2::get_coverage();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 <
        (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
      pbVar2 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar2 = &DAT_146bc87b0;
    }
    uVar4 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
    if (uVar4 != 0) {
      puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar4);
    }
    uVar1 = LigatureSet::apply(puVar3,param_2);
    return uVar1;
  }
LAB_143c83dfa:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c83e70 apply body=704 status=ok
// SIG undefined apply(void)

ulonglong OT::MarkArray::apply
                    (byte *param_1,longlong param_2,uint param_3,uint param_4,byte *param_5,
                    uint param_6,uint param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ushort uVar6;
  short sVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  pbVar8 = &DAT_146bc87b0;
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (param_3 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
    pbVar10 = param_1 + (ulonglong)param_3 * 4 + 2;
  }
  else {
    pbVar10 = &DAT_146bc87b0;
  }
  pbVar12 = &DAT_146bc87b0;
  uVar6 = (ushort)pbVar10[2] * 0x100 + (ushort)pbVar10[3];
  if (uVar6 != 0) {
    pbVar12 = param_1 + uVar6;
  }
  uVar6 = (ushort)*param_5 * 0x100 + (ushort)param_5[1];
  uVar5 = (ulonglong)uVar6;
  if (param_4 < uVar6) {
    uVar5 = (ulonglong)param_6;
    uVar9 = (uint)(ushort)((ushort)*pbVar10 * 0x100 + (ushort)pbVar10[1]);
    if (uVar9 < param_6) {
      uVar11 = (ulonglong)(param_4 * param_6 + uVar9);
      pbVar10 = param_5 + uVar11 * 2;
      uVar6 = (ushort)pbVar10[3] + (ushort)pbVar10[2] * 0x100;
      uVar5 = (ulonglong)uVar6;
      if (uVar6 != 0) {
        pbVar8 = param_5 + uVar5;
      }
      if ((ushort)((ushort)pbVar10[2] * 0x100 + (ushort)(param_5 + 3)[uVar11 * 2]) != 0) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        local_res8[0] = 0;
        local_res20[0] = 0;
        uVar2 = *(undefined4 *)
                 (*(longlong *)(lVar3 + 200) + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14);
        sVar7 = (ushort)*pbVar12 * 0x100 + (ushort)pbVar12[1];
        if (sVar7 == 1) {
          AnchorFormat1::get_anchor(pbVar12,uVar4,uVar2,local_res20,local_res8);
        }
        else if (sVar7 == 2) {
          AnchorFormat2::get_anchor(pbVar12,uVar4,uVar2,local_res20,local_res8);
        }
        else if (sVar7 == 3) {
          AnchorFormat3::get_anchor(pbVar12,uVar4,uVar2,local_res20,local_res8);
        }
        uVar9 = param_7;
        uVar4 = *(undefined8 *)(param_2 + 8);
        param_5._0_4_ = 0;
        local_res18[0] = 0;
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 200) + (ulonglong)param_7 * 0x14);
        sVar7 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
        if (sVar7 == 1) {
          AnchorFormat1::get_anchor(pbVar8,uVar4,uVar2,local_res18,&param_5);
        }
        else if (sVar7 == 2) {
          AnchorFormat2::get_anchor(pbVar8,uVar4,uVar2,local_res18,&param_5);
        }
        else if (sVar7 == 3) {
          AnchorFormat3::get_anchor(pbVar8,uVar4,uVar2,local_res18,&param_5);
        }
        lVar1 = *(longlong *)(lVar3 + 0xd8) + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14;
        *(int *)(lVar1 + 8) = local_res18[0] - local_res20[0];
        *(int *)(lVar1 + 0xc) = (int)param_5 - local_res8[0];
        *(undefined1 *)(lVar1 + 0x12) = 1;
        *(short *)(lVar1 + 0x10) = (short)uVar9 - *(short *)(lVar3 + 0xb4);
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 8;
        *(int *)(lVar3 + 0xb4) = *(int *)(lVar3 + 0xb4) + 1;
        return CONCAT71((uint7)(uint3)((uint)((int)param_5 - local_res8[0]) >> 8),1);
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 143c84130 apply body=628 status=ok
// SIG undefined apply(void)

ulonglong OT::MarkBasePosFormat1::apply(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ushort uVar12;
  short sVar13;
  byte *pbVar14;
  undefined4 local_res8 [2];
  
  puVar10 = &DAT_146bc87b0;
  lVar3 = *(longlong *)(param_2 + 0x18);
  pbVar14 = &DAT_146bc87b0;
  uVar12 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar12 != 0) {
    pbVar14 = (byte *)(param_1 + (ulonglong)uVar12);
  }
  uVar2 = *(uint *)(lVar3 + 0xb4);
  uVar7 = 0;
  sVar13 = (ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1];
  if (sVar13 == 1) {
    local_res8[0] = *(undefined4 *)(*(longlong *)(lVar3 + 200) + (ulonglong)uVar2 * 0x14);
    uVar7 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar14 + 2,local_res8);
  }
  else {
    if (sVar13 != 2) goto LAB_143c841e0;
    uVar7 = CoverageFormat2::get_coverage(pbVar14);
  }
  if ((int)uVar7 != -1) {
    *(uint *)(param_2 + 0x50) = uVar2;
    *(undefined4 *)(param_2 + 0x88) = 1;
    *(undefined4 *)(param_2 + 0x8c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18) + 0xb8);
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18);
    if (uVar2 == *(uint *)(lVar4 + 0xb4)) {
      uVar9 = *(undefined1 *)
               (*(longlong *)(lVar4 + 200) + 0xf + (ulonglong)*(uint *)(lVar4 + 0xb4) * 0x14);
    }
    else {
      uVar9 = 0;
    }
    *(undefined1 *)(param_2 + 0x6c) = uVar9;
    *(undefined4 *)(param_2 + 0x60) = 8;
    uVar8 = hb_apply_context_t::skipping_iterator_t::prev(param_2 + 0x50);
    cVar6 = (char)uVar8;
    uVar5 = local_res8[0];
    do {
      if (cVar6 == '\0') {
LAB_143c8428e:
        return uVar8 & 0xffffffffffffff00;
      }
      bVar1 = *(byte *)(*(longlong *)(lVar3 + 200) + 0xe +
                       (ulonglong)*(uint *)(param_2 + 0x50) * 0x14);
      if (((bVar1 & 0x10) != 0) || ((bVar1 & 0xf) == 0)) {
        pbVar14 = &DAT_146bc87b0;
        uVar12 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
        if (uVar12 != 0) {
          pbVar14 = (byte *)(param_1 + (ulonglong)uVar12);
        }
        uVar2 = *(uint *)(param_2 + 0x50);
        local_res8[0] = *(undefined4 *)(*(longlong *)(lVar3 + 200) + (ulonglong)uVar2 * 0x14);
        uVar8 = 0;
        sVar13 = (ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1];
        if (sVar13 == 1) {
          uVar8 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                            (pbVar14 + 2,local_res8);
        }
        else {
          if (sVar13 != 2) goto LAB_143c8428e;
          local_res8[0] = uVar5;
          uVar8 = CoverageFormat2::get_coverage(pbVar14);
        }
        if ((int)uVar8 != -1) {
          puVar11 = &DAT_146bc87b0;
          uVar12 = (ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb);
          if (uVar12 != 0) {
            puVar11 = (undefined1 *)(param_1 + (ulonglong)uVar12);
          }
          uVar12 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
          if (uVar12 != 0) {
            puVar10 = (undefined1 *)(param_1 + (ulonglong)uVar12);
          }
          uVar7 = MarkArray::apply(puVar10,param_2,uVar7 & 0xffffffff,uVar8 & 0xffffffff,puVar11,
                                   (ushort)*(byte *)(param_1 + 7) +
                                   (ushort)*(byte *)(param_1 + 6) * 0x100,uVar2);
          return uVar7;
        }
        goto LAB_143c8428e;
      }
      *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + 1;
      *(longlong *)(param_2 + 0x80) = *(longlong *)(param_2 + 0x80) + -2;
      local_res8[0] = uVar5;
      uVar8 = hb_apply_context_t::skipping_iterator_t::prev(param_2 + 0x50);
      cVar6 = (char)uVar8;
      uVar5 = local_res8[0];
    } while( true );
  }
LAB_143c841e0:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 143c843b0 apply body=763 status=ok
// SIG undefined apply(void)

ulonglong OT::MarkLigPosFormat1::apply(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  short sVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 local_res8 [2];
  uint local_res10;
  
  puVar10 = &DAT_146bc87b0;
  lVar1 = *(longlong *)(param_2 + 0x18);
  pbVar15 = &DAT_146bc87b0;
  uVar13 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar13 != 0) {
    pbVar15 = (byte *)(param_1 + (ulonglong)uVar13);
  }
  uVar11 = *(uint *)(lVar1 + 0xb4);
  uVar5 = 0;
  sVar14 = (ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1];
  if (sVar14 == 1) {
    local_res8[0] = *(undefined4 *)(*(longlong *)(lVar1 + 200) + (ulonglong)uVar11 * 0x14);
    uVar5 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar15 + 2,local_res8);
  }
  else {
    if (sVar14 != 2) goto LAB_143c8445f;
    uVar5 = CoverageFormat2::get_coverage(pbVar15);
  }
  if ((int)uVar5 == -1) {
LAB_143c8445f:
    return uVar5 & 0xffffffffffffff00;
  }
  *(uint *)(param_2 + 0x50) = uVar11;
  *(undefined4 *)(param_2 + 0x88) = 1;
  uVar8 = 0;
  *(undefined4 *)(param_2 + 0x8c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18) + 0xb8);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18);
  if (uVar11 == *(uint *)(lVar2 + 0xb4)) {
    uVar8 = *(undefined1 *)
             (*(longlong *)(lVar2 + 200) + 0xf + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14);
  }
  *(undefined1 *)(param_2 + 0x6c) = uVar8;
  *(undefined4 *)(param_2 + 0x60) = 8;
  pbVar15 = (byte *)hb_apply_context_t::skipping_iterator_t::prev(param_2 + 0x50);
  if ((char)pbVar15 != '\0') {
    pbVar16 = &DAT_146bc87b0;
    local_res10 = *(uint *)(param_2 + 0x50);
    uVar12 = (ulonglong)local_res10;
    uVar13 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
    if (uVar13 != 0) {
      pbVar16 = (byte *)(param_1 + (ulonglong)uVar13);
    }
    lVar2 = *(longlong *)(lVar1 + 200);
    pbVar15 = (byte *)0x0;
    sVar14 = (ushort)*pbVar16 * 0x100 + (ushort)pbVar16[1];
    if (sVar14 == 1) {
      local_res8[0] = *(undefined4 *)(lVar2 + uVar12 * 0x14);
      pbVar15 = (byte *)SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::
                        bsearch<unsigned_int>(pbVar16 + 2,local_res8);
    }
    else {
      if (sVar14 != 2) goto LAB_143c845d3;
      pbVar15 = (byte *)CoverageFormat2::get_coverage(pbVar16);
    }
    if ((int)pbVar15 != -1) {
      puVar7 = &DAT_146bc87b0;
      uVar13 = (ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb);
      if (uVar13 != 0) {
        puVar7 = (undefined1 *)(param_1 + (ulonglong)uVar13);
      }
      pbVar15 = (byte *)OffsetListOf<OT::AnchorMatrix>::operator[]
                                  (puVar7,(ulonglong)pbVar15 & 0xffffffff);
      uVar13 = (ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1];
      uVar11 = (uint)uVar13;
      if (uVar13 != 0) {
        uVar6 = (ulonglong)*(uint *)(lVar1 + 0xb4);
        bVar3 = *(byte *)(lVar2 + uVar12 * 0x14 + 0xe) >> 5;
        bVar4 = *(byte *)(lVar2 + 0xe + uVar6 * 0x14);
        if ((bVar4 & 0x10) == 0) {
          bVar4 = bVar4 & 0xf;
        }
        else {
          bVar4 = 0;
        }
        uVar9 = (uint)uVar13;
        if ((((bVar3 != 0) && (uVar9 = uVar11, bVar3 == *(byte *)(lVar2 + 0xe + uVar6 * 0x14) >> 5))
            && (bVar4 != 0)) &&
           ((bVar4 = *(byte *)(lVar2 + uVar6 * 0x14 + 0xe), uVar11 = 0, (bVar4 & 0x10) != 0 ||
            (uVar11 = bVar4 & 0xf, uVar11 <= uVar13)))) {
          uVar9 = uVar11;
        }
        uVar13 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
        if (uVar13 != 0) {
          puVar10 = (undefined1 *)(param_1 + (ulonglong)uVar13);
        }
        uVar5 = MarkArray::apply(puVar10,param_2,uVar5 & 0xffffffff,uVar9 - 1,pbVar15,
                                 (ushort)*(byte *)(param_1 + 6) * 0x100 +
                                 (ushort)*(byte *)(param_1 + 7),local_res10);
        return uVar5;
      }
    }
  }
LAB_143c845d3:
  return (ulonglong)pbVar15 & 0xffffffffffffff00;
}



// FUNCTION 143c846b0 apply body=644 status=ok
// SIG undefined apply(void)

ulonglong OT::MarkMarkPosFormat1::apply(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort uVar14;
  short sVar15;
  byte *pbVar16;
  undefined4 local_res8 [2];
  
  puVar11 = &DAT_146bc87b0;
  lVar4 = *(longlong *)(param_2 + 0x18);
  pbVar16 = &DAT_146bc87b0;
  uVar14 = (ushort)*(byte *)(param_1 + 3) + (ushort)*(byte *)(param_1 + 2) * 0x100;
  if (uVar14 != 0) {
    pbVar16 = (byte *)(param_1 + (ulonglong)uVar14);
  }
  uVar3 = *(uint *)(lVar4 + 0xb4);
  uVar8 = 0;
  sVar15 = (ushort)*pbVar16 * 0x100 + (ushort)pbVar16[1];
  if (sVar15 == 1) {
    local_res8[0] = *(undefined4 *)(*(longlong *)(lVar4 + 200) + (ulonglong)uVar3 * 0x14);
    uVar8 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar16 + 2,local_res8);
  }
  else {
    if (sVar15 != 2) goto LAB_143c8475d;
    uVar8 = CoverageFormat2::get_coverage(pbVar16);
  }
  if ((int)uVar8 == -1) {
LAB_143c8475d:
    return uVar8 & 0xffffffffffffff00;
  }
  *(uint *)(param_2 + 0x50) = uVar3;
  *(undefined4 *)(param_2 + 0x88) = 1;
  uVar12 = 0;
  *(undefined4 *)(param_2 + 0x8c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18) + 0xb8);
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18);
  uVar9 = 0;
  if (uVar3 == *(uint *)(lVar5 + 0xb4)) {
    uVar9 = (ulonglong)
            *(byte *)(*(longlong *)(lVar5 + 200) + 0xf + (ulonglong)*(uint *)(lVar5 + 0xb4) * 0x14);
  }
  *(char *)(param_2 + 0x6c) = (char)uVar9;
  *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x3c) & 0xfffffff1;
  uVar9 = hb_apply_context_t::skipping_iterator_t::prev(param_2 + 0x50);
  if ((char)uVar9 != '\0') {
    uVar3 = *(uint *)(param_2 + 0x50);
    uVar13 = (ulonglong)uVar3;
    lVar5 = *(longlong *)(lVar4 + 200);
    uVar9 = uVar13 * 5;
    if ((*(byte *)(lVar5 + 0xc + uVar13 * 0x14) >> 3 & 1) != 0) {
      bVar2 = *(byte *)(lVar5 + (ulonglong)*(uint *)(lVar4 + 0xb4) * 0x14 + 0xe);
      puVar1 = (undefined4 *)(lVar5 + uVar13 * 0x14);
      bVar6 = *(byte *)(lVar5 + 0xe + (ulonglong)*(uint *)(lVar4 + 0xb4) * 0x14) >> 5;
      bVar7 = *(byte *)((longlong)puVar1 + 0xe) >> 5;
      uVar9 = 0;
      if ((bVar2 & 0x10) == 0) {
        uVar9 = (ulonglong)(bVar2 & 0xf);
      }
      if ((*(byte *)((longlong)puVar1 + 0xe) & 0x10) == 0) {
        uVar12 = *(byte *)((longlong)puVar1 + 0xe) & 0xf;
      }
      if (bVar6 == bVar7) {
        if ((bVar6 != 0) && ((uint)uVar9 != uVar12)) goto LAB_143c84854;
      }
      else if (((bVar6 == 0) || ((uint)uVar9 != 0)) && ((bVar7 == 0 || (uVar12 != 0))))
      goto LAB_143c84854;
      puVar10 = &DAT_146bc87b0;
      uVar14 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
      if (uVar14 != 0) {
        puVar10 = (undefined1 *)(param_1 + (ulonglong)uVar14);
      }
      uVar9 = Coverage::get_coverage(puVar10,*puVar1);
      if ((int)uVar9 != -1) {
        uVar14 = (ushort)*(byte *)(param_1 + 0xb) + (ushort)*(byte *)(param_1 + 10) * 0x100;
        puVar10 = &DAT_146bc87b0;
        if (uVar14 != 0) {
          puVar10 = (undefined1 *)(param_1 + (ulonglong)uVar14);
        }
        uVar14 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
        if (uVar14 != 0) {
          puVar11 = (undefined1 *)(param_1 + (ulonglong)uVar14);
        }
        uVar8 = MarkArray::apply(puVar11,param_2,uVar8 & 0xffffffff,uVar9 & 0xffffffff,puVar10,
                                 (ushort)*(byte *)(param_1 + 6) * 0x100 +
                                 (ushort)*(byte *)(param_1 + 7),uVar3);
        return uVar8;
      }
    }
  }
LAB_143c84854:
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 143c84940 apply body=272 status=ok
// SIG undefined apply(void)

ulonglong OT::MultipleSubstFormat1::apply(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  undefined4 local_res8 [2];
  
  puVar2 = &DAT_146bc87b0;
  pbVar5 = &DAT_146bc87b0;
  uVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar3 != 0) {
    pbVar5 = (byte *)(param_1 + (ulonglong)uVar3);
  }
  uVar1 = 0;
  sVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (sVar4 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar5 + 2,local_res8);
  }
  else {
    if (sVar4 != 2) goto LAB_143c849e9;
    uVar1 = CoverageFormat2::get_coverage(pbVar5);
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 <
        (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
      pbVar5 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar5 = &DAT_146bc87b0;
    }
    uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
    if (uVar3 != 0) {
      puVar2 = (undefined1 *)(param_1 + (ulonglong)uVar3);
    }
    uVar1 = Sequence::apply(puVar2,param_2);
    return uVar1;
  }
LAB_143c849e9:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c84a50 apply body=399 status=ok
// SIG undefined apply(void)

ulonglong OT::PairPosFormat1::apply(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  ushort uVar7;
  short sVar8;
  byte *pbVar9;
  undefined4 local_res8 [2];
  
  puVar6 = &DAT_146bc87b0;
  pbVar9 = &DAT_146bc87b0;
  uVar7 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar7 != 0) {
    pbVar9 = (byte *)(param_1 + (ulonglong)uVar7);
  }
  uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4);
  uVar3 = 0;
  sVar8 = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
  if (sVar8 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) + (ulonglong)uVar1 * 0x14);
    uVar3 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar9 + 2,local_res8);
  }
  else {
    if (sVar8 != 2) goto LAB_143c84af8;
    uVar3 = CoverageFormat2::get_coverage(pbVar9);
  }
  if ((uint)uVar3 != 0xffffffff) {
    *(uint *)(param_2 + 0x50) = uVar1;
    *(undefined4 *)(param_2 + 0x88) = 1;
    *(undefined4 *)(param_2 + 0x8c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18) + 0xb8);
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18);
    if (uVar1 == *(uint *)(lVar2 + 0xb4)) {
      uVar5 = *(undefined1 *)
               (*(longlong *)(lVar2 + 200) + 0xf + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14);
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)(param_2 + 0x6c) = uVar5;
    uVar4 = hb_apply_context_t::skipping_iterator_t::next(param_2 + 0x50);
    if ((char)uVar4 != '\0') {
      if ((uint)uVar3 <
          (uint)(ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9))) {
        pbVar9 = (byte *)(param_1 + ((uVar3 & 0xffffffff) + 5) * 2);
      }
      else {
        pbVar9 = &DAT_146bc87b0;
      }
      uVar7 = (ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1];
      if (uVar7 != 0) {
        puVar6 = (undefined1 *)(param_1 + (ulonglong)uVar7);
      }
      uVar4 = PairSet::apply(puVar6,param_2,param_1 + 4,*(undefined4 *)(param_2 + 0x50));
    }
    return uVar4;
  }
LAB_143c84af8:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c84be0 apply body=895 status=ok
// SIG undefined apply(void)

ulonglong OT::PairPosFormat2::apply(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  short sVar12;
  byte *pbVar13;
  int local_res8 [2];
  uint local_res10;
  uint local_res18;
  
  puVar10 = &DAT_146bc87b0;
  lVar1 = *(longlong *)(param_2 + 0x18);
  pbVar13 = &DAT_146bc87b0;
  uVar11 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar11 != 0) {
    pbVar13 = (byte *)(param_1 + (ulonglong)uVar11);
  }
  uVar5 = 0;
  sVar12 = (ushort)*pbVar13 * 0x100 + (ushort)pbVar13[1];
  if (sVar12 == 1) {
    local_res8[0] = *(int *)(*(longlong *)(lVar1 + 200) + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14)
    ;
    uVar5 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar13 + 2,local_res8);
  }
  else {
    if (sVar12 != 2) goto LAB_143c84c7f;
    uVar5 = CoverageFormat2::get_coverage(pbVar13);
  }
  if ((int)uVar5 != -1) {
    iVar4 = *(int *)(lVar1 + 0xb4);
    *(int *)(param_2 + 0x50) = iVar4;
    *(undefined4 *)(param_2 + 0x88) = 1;
    *(undefined4 *)(param_2 + 0x8c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18) + 0xb8);
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x18);
    if (iVar4 == *(int *)(lVar2 + 0xb4)) {
      uVar9 = *(undefined1 *)
               (*(longlong *)(lVar2 + 200) + 0xf + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14);
    }
    else {
      uVar9 = 0;
    }
    *(undefined1 *)(param_2 + 0x6c) = uVar9;
    uVar5 = hb_apply_context_t::skipping_iterator_t::next(param_2 + 0x50);
    if ((char)uVar5 != '\0') {
      uVar11 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
      uVar7 = uVar11 >> 1 & 0x5b6db6db;
      uVar7 = ((uint)uVar11 - (uVar7 >> 1 & 0x5b6db6db)) - uVar7;
      local_res10 = ((uVar7 >> 3) + uVar7 & 0xc71c71c7) % 0x3f;
      uVar11 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
      uVar7 = uVar11 >> 1 & 0x5b6db6db;
      uVar7 = ((uint)uVar11 - (uVar7 >> 1 & 0x5b6db6db)) - uVar7;
      local_res18 = ((uVar7 >> 3) + uVar7 & 0xc71c71c7) % 0x3f;
      local_res8[0] = local_res18 + local_res10;
      puVar8 = &DAT_146bc87b0;
      uVar11 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
      if (uVar11 != 0) {
        puVar8 = (undefined1 *)(param_1 + (ulonglong)uVar11);
      }
      uVar7 = *(uint *)(lVar1 + 0xb4);
      lVar2 = *(longlong *)(lVar1 + 200);
      uVar3 = ClassDef::get_class(puVar8,*(undefined4 *)(lVar2 + (ulonglong)uVar7 * 0x14));
      uVar11 = (ushort)*(byte *)(param_1 + 0xb) + (ushort)*(byte *)(param_1 + 10) * 0x100;
      if (uVar11 != 0) {
        puVar10 = (undefined1 *)(param_1 + (ulonglong)uVar11);
      }
      uVar6 = ClassDef::get_class(puVar10,*(undefined4 *)
                                           (lVar2 + (ulonglong)*(uint *)(param_2 + 0x50) * 0x14));
      uVar5 = uVar6;
      if (uVar3 < (ushort)((ushort)*(byte *)(param_1 + 0xc) * 0x100 +
                          (ushort)*(byte *)(param_1 + 0xd))) {
        uVar11 = (ushort)*(byte *)(param_1 + 0xe) * 0x100 + (ushort)*(byte *)(param_1 + 0xf);
        uVar5 = (ulonglong)uVar11;
        if ((uint)uVar6 < (uint)uVar11) {
          lVar2 = param_1 + ((ulonglong)
                             (((ushort)((ushort)*(byte *)(param_1 + 0xe) * 0x100 +
                                       (ushort)*(byte *)(param_1 + 0xf)) * uVar3 + (uint)uVar6) *
                             local_res8[0]) + 8) * 2;
          ValueFormat::apply_value
                    (param_1 + 4,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x20),
                     param_1,lVar2,*(longlong *)(lVar1 + 0xd8) + (ulonglong)uVar7 * 0x14);
          ValueFormat::apply_value
                    (param_1 + 6,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x20),
                     param_1,lVar2 + (ulonglong)local_res10 * 2,
                     *(longlong *)(lVar1 + 0xd8) + (ulonglong)*(uint *)(param_2 + 0x50) * 0x14);
          iVar4 = *(int *)(param_2 + 0x50);
          *(int *)(lVar1 + 0xb4) = iVar4;
          if (local_res18 != 0) {
            iVar4 = iVar4 + 1;
            *(int *)(lVar1 + 0xb4) = iVar4;
          }
          return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
        }
      }
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    return uVar5;
  }
LAB_143c84c7f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 143c84f60 apply body=592 status=ok
// SIG undefined apply(void)

undefined8 OT::PairSet::apply(byte *param_1,longlong param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  
  lVar2 = *(longlong *)(param_2 + 0x18);
  uVar10 = (ushort)*param_3 * 0x100 + (ushort)param_3[1];
  uVar5 = uVar10 >> 1 & 0x5b6db6db;
  uVar5 = ((uint)uVar10 - (uVar5 >> 1 & 0x5b6db6db)) - uVar5;
  uVar10 = (ushort)param_3[3] + (ushort)param_3[2] * 0x100;
  uVar8 = ((uVar5 >> 3) + uVar5 & 0xc71c71c7) % 0x3f;
  uVar5 = uVar10 >> 1 & 0x5b6db6db;
  uVar5 = ((uint)uVar10 - (uVar5 >> 1 & 0x5b6db6db)) - uVar5;
  uVar5 = ((uVar5 >> 3) + uVar5 & 0xc71c71c7) % 0x3f;
  uVar10 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar10 == 0) {
    return 0;
  }
  iVar9 = 0;
  iVar7 = uVar10 - 1;
  uVar1 = *(uint *)((ulonglong)param_4 * 0x14 + *(longlong *)(lVar2 + 200));
  if (-1 < iVar7) {
    do {
      iVar3 = (iVar7 + iVar9) / 2;
      pbVar6 = param_1 + (ulonglong)(iVar3 * ((uVar5 + uVar8) * 2 + 2)) + 2;
      uVar4 = (uint)(ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]);
      if (uVar1 < uVar4) {
        iVar7 = iVar3 + -1;
      }
      else {
        if (uVar1 <= uVar4) {
          ValueFormat::apply_value
                    (param_3,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x20),param_1,
                     pbVar6 + 2,
                     *(longlong *)(lVar2 + 0xd8) + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14);
          ValueFormat::apply_value
                    (param_3 + 2,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x20),
                     param_1,pbVar6 + ((ulonglong)uVar8 + 1) * 2,
                     *(longlong *)(lVar2 + 0xd8) + (ulonglong)param_4 * 0x14);
          if (uVar5 != 0) {
            param_4 = param_4 + 1;
          }
          *(uint *)(lVar2 + 0xb4) = param_4;
          return 1;
        }
        iVar9 = iVar3 + 1;
      }
    } while (iVar9 <= iVar7);
  }
  return 0;
}



// FUNCTION 143c851b0 apply body=479 status=ok
// SIG undefined apply(void)

undefined8 OT::ReverseChainSingleSubstFormat1::apply(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  byte *pbVar4;
  short sVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 local_res10 [2];
  
  if (*(int *)(param_2 + 0x38) != 6) {
    return 0;
  }
  pbVar4 = &DAT_146bc87b0;
  pbVar6 = &DAT_146bc87b0;
  uVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar3 != 0) {
    pbVar6 = (byte *)(param_1 + (ulonglong)uVar3);
  }
  sVar5 = (ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1];
  if (sVar5 == 1) {
    local_res10[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar2 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar6 + 2,local_res10);
  }
  else {
    if (sVar5 != 2) {
      return 0;
    }
    uVar2 = CoverageFormat2::get_coverage(pbVar6);
  }
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  pbVar6 = (byte *)(param_1 + 4);
  pbVar8 = pbVar6 + ((uint)(ushort)((ushort)*pbVar6 * 0x100 + (ushort)*(byte *)(param_1 + 5)) * 2 +
                    2);
  pbVar7 = pbVar8 + ((uint)(ushort)((ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1]) * 2 + 2);
  cVar1 = match_backtrack(param_2,(ushort)*pbVar6 * 0x100 + (ushort)*(byte *)(param_1 + 5),
                          param_1 + 6,match_coverage,param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = match_lookahead(param_2,(ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1],pbVar8 + 2,
                              match_coverage,param_1,1), cVar1 != '\0')) {
    if (uVar2 < (ushort)((ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1])) {
      pbVar4 = pbVar7 + ((ulonglong)uVar2 + 1) * 2;
    }
    hb_apply_context_t::replace_glyph_inplace(param_2,(ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1]);
    return 1;
  }
  return 0;
}



// FUNCTION 143c85390 apply body=314 status=ok
// SIG undefined apply(void)

undefined8 OT::RuleSet::apply(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  ushort uVar6;
  byte *pbVar7;
  
  uVar3 = 0;
  uVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar6 != 0) {
    do {
      if (uVar3 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
        pbVar4 = param_1 + ((ulonglong)uVar3 + 1) * 2;
      }
      else {
        pbVar4 = &DAT_146bc87b0;
      }
      pbVar7 = &DAT_146bc87b0;
      uVar2 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
      if (uVar2 != 0) {
        pbVar7 = param_1 + uVar2;
      }
      uVar2 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
      if (uVar2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = uVar2 - 1;
      }
      cVar1 = context_apply_lookup
                        (param_2,uVar2,pbVar7 + 4,(ushort)pbVar7[2] * 0x100 + (ushort)pbVar7[3],
                         pbVar7 + (ulonglong)(uint)(iVar5 * 2) + 4,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  return 0;
}



// FUNCTION 143c854d0 apply body=295 status=ok
// SIG undefined apply(void)

undefined8 OT::Sequence::apply(byte *param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar5 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar5 == 0) {
    return 0;
  }
  if (uVar5 != 1) {
    uVar4 = 0;
    uVar2 = *(ushort *)
             (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) + 0xc +
             (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    if (uVar5 != 0) {
      do {
        *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) + 0xe +
                 (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14) =
             (byte)uVar4 & 0xf;
        hb_apply_context_t::output_glyph_for_component
                  (param_2,(ushort)param_1[3] + (ushort)param_1[2] * 0x100,(uVar2 >> 2 & 1) * 2);
        uVar4 = uVar4 + 1;
        param_1 = param_1 + 2;
      } while (uVar4 < uVar5);
    }
    lVar3 = *(longlong *)(param_2 + 0x18);
    piVar1 = (int *)(lVar3 + 0xb4);
    *piVar1 = *piVar1 + 1;
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  hb_apply_context_t::replace_glyph(param_2,(ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
  return 1;
}



// FUNCTION 143c85600 apply body=252 status=ok
// SIG undefined apply(void)

undefined8 OT::SinglePosFormat1::apply(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  byte *pbVar6;
  undefined4 local_res8 [2];
  
  pbVar6 = &DAT_146bc87b0;
  lVar2 = *(longlong *)(param_2 + 0x18);
  uVar4 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar4 != 0) {
    pbVar6 = (byte *)(param_1 + (ulonglong)uVar4);
  }
  lVar1 = (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14;
  sVar5 = (ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1];
  if (sVar5 == 1) {
    local_res8[0] = *(undefined4 *)(lVar1 + *(longlong *)(lVar2 + 200));
    iVar3 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar6 + 2,local_res8);
  }
  else {
    if (sVar5 != 2) {
      return 0;
    }
    iVar3 = CoverageFormat2::get_coverage(pbVar6);
  }
  if (iVar3 == -1) {
    return 0;
  }
  ValueFormat::apply_value
            (param_1 + 4,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x20),param_1,
             param_1 + 6,*(longlong *)(lVar2 + 0xd8) + lVar1);
  *(int *)(lVar2 + 0xb4) = *(int *)(lVar2 + 0xb4) + 1;
  return 1;
}



// FUNCTION 143c85700 apply body=390 status=ok
// SIG undefined apply(void)

undefined8 OT::SinglePosFormat2::apply(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  
  pbVar7 = &DAT_146bc87b0;
  lVar2 = *(longlong *)(param_2 + 0x18);
  uVar5 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar5 != 0) {
    pbVar7 = (byte *)(param_1 + (ulonglong)uVar5);
  }
  lVar1 = (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14;
  sVar6 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
  if (sVar6 == 1) {
    local_res8[0] = *(undefined4 *)(lVar1 + *(longlong *)(lVar2 + 200));
    uVar3 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar7 + 2,local_res8);
  }
  else {
    if (sVar6 != 2) {
      return 0;
    }
    uVar3 = CoverageFormat2::get_coverage(pbVar7);
  }
  if ((uVar3 != 0xffffffff) &&
     (uVar3 < (ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)))) {
    uVar5 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
    uVar4 = uVar5 >> 1 & 0x5b6db6db;
    uVar4 = ((uint)uVar5 - (uVar4 >> 1 & 0x5b6db6db)) - uVar4;
    ValueFormat::apply_value
              (param_1 + 4,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x20),param_1,
               param_1 + 8 + (ulonglong)((((uVar4 >> 3) + uVar4 & 0xc71c71c7) % 0x3f) * uVar3) * 2,
               *(longlong *)(lVar2 + 0xd8) + lVar1);
    *(int *)(lVar2 + 0xb4) = *(int *)(lVar2 + 0xb4) + 1;
    return 1;
  }
  return 0;
}



// FUNCTION 143c85890 apply body=219 status=ok
// SIG undefined apply(void)

undefined8 OT::SingleSubstFormat1::apply(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  short sVar5;
  int local_res8 [2];
  
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
  uVar2 = (uint)(ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3));
  if (uVar2 == 0) {
    pbVar4 = &DAT_146bc87b0;
  }
  else {
    pbVar4 = (byte *)(param_1 + (ulonglong)uVar2);
  }
  sVar5 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
  if (sVar5 == 1) {
    local_res8[0] = iVar1;
    iVar3 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar4 + 2,local_res8);
  }
  else {
    if (sVar5 != 2) {
      return 0;
    }
    iVar3 = CoverageFormat2::get_coverage(pbVar4,iVar1);
  }
  if (iVar3 == -1) {
    return 0;
  }
  hb_apply_context_t::replace_glyph
            (param_2,(uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 +
                                   (ushort)*(byte *)(param_1 + 5)) + iVar1 & 0xffff);
  return 1;
}



// FUNCTION 143c85970 apply body=284 status=ok
// SIG undefined apply(void)

undefined8 OT::SingleSubstFormat2::apply(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  short sVar5;
  undefined4 local_res8 [2];
  
  pbVar3 = &DAT_146bc87b0;
  uVar4 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar4 == 0) {
    pbVar2 = &DAT_146bc87b0;
  }
  else {
    pbVar2 = (byte *)(param_1 + (ulonglong)uVar4);
  }
  sVar5 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
  if (sVar5 == 1) {
    local_res8[0] =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) +
          (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x18) + 0xb4) * 0x14);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar2 + 2,local_res8);
  }
  else {
    if (sVar5 != 2) {
      return 0;
    }
    uVar1 = CoverageFormat2::get_coverage();
  }
  if ((uVar1 != 0xffffffff) &&
     (uVar1 < (ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)))) {
    if (uVar1 < (ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
      pbVar3 = (byte *)(param_1 + ((ulonglong)uVar1 + 3) * 2);
    }
    hb_apply_context_t::replace_glyph(param_2,(ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]);
    return 1;
  }
  return 0;
}



// FUNCTION 143c85a90 apply_backward body=300 status=ok
// SIG undefined apply_backward(void)

undefined8 apply_backward(longlong param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar9 = 0;
  do {
    uVar7 = *(uint *)(*(longlong *)(lVar4 + 200) + (ulonglong)*(uint *)(lVar4 + 0xb4) * 0x14);
    puVar2 = (undefined4 *)(*(longlong *)(lVar4 + 200) + (ulonglong)*(uint *)(lVar4 + 0xb4) * 0x14);
    if (((((*param_2 >> (uVar7 >> 4 & 0x1f) & 1) != 0) && ((param_2[1] >> (uVar7 & 0x1f) & 1) != 0))
        && ((param_2[2] >> (uVar7 >> 9 & 0x1f) & 1) != 0)) &&
       ((*(uint *)(param_1 + 0x24) & puVar2[1]) != 0)) {
      uVar3 = *(ushort *)(puVar2 + 3);
      uVar7 = *(uint *)(param_1 + 0x3c);
      if ((uVar3 & uVar7 & 0xe) == 0) {
        if ((uVar3 & 8) != 0) {
          if ((uVar7 & 0x10) == 0) {
            if ((uVar7 & 0xff00) == 0) goto LAB_143c85b5f;
            cVar5 = (uVar7 & 0xff00) == (uVar3 & 0xff00);
          }
          else {
            cVar5 = OT::GDEF::mark_set_covers(*(undefined8 *)(param_1 + 0x40),uVar7 >> 0x10,*puVar2)
            ;
          }
          if (cVar5 == '\0') goto LAB_143c85b92;
        }
LAB_143c85b5f:
        uVar8 = 0;
        if (*param_3 != 0) {
          do {
            puVar6 = (undefined8 *)(uVar8 * 0x10 + *(longlong *)(param_3 + 2));
            cVar5 = (*(code *)puVar6[1])(*puVar6,param_1);
            if (cVar5 != '\0') {
              uVar9 = 1;
              break;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 < *param_3);
        }
      }
    }
LAB_143c85b92:
    piVar1 = (int *)(lVar4 + 0xb4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return uVar9;
    }
  } while( true );
}



// FUNCTION 143c85bc0 apply_forward body=335 status=ok
// SIG undefined apply_forward(void)

undefined8 apply_forward(longlong param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar7 = 0;
  uVar8 = *(uint *)(lVar4 + 0xb4);
  if (uVar8 < *(uint *)(lVar4 + 0xb8)) {
    do {
      if (*(char *)(lVar4 + 0xb0) != '\0') {
        return uVar7;
      }
      uVar3 = *(uint *)(*(longlong *)(lVar4 + 200) + (ulonglong)uVar8 * 0x14);
      puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 200) + (ulonglong)uVar8 * 0x14);
      if (((((*param_2 >> (uVar3 >> 4 & 0x1f) & 1) != 0) &&
           ((param_2[1] >> (uVar3 & 0x1f) & 1) != 0)) &&
          ((param_2[2] >> (uVar3 >> 9 & 0x1f) & 1) != 0)) &&
         ((*(uint *)(param_1 + 0x24) & puVar1[1]) != 0)) {
        uVar2 = *(ushort *)(puVar1 + 3);
        uVar8 = *(uint *)(param_1 + 0x3c);
        if ((uVar2 & uVar8 & 0xe) == 0) {
          if ((uVar2 & 8) != 0) {
            if ((uVar8 & 0x10) == 0) {
              if ((uVar8 & 0xff00) == 0) goto LAB_143c85ca1;
              cVar5 = (uVar8 & 0xff00) == (uVar2 & 0xff00);
            }
            else {
              cVar5 = OT::GDEF::mark_set_covers
                                (*(undefined8 *)(param_1 + 0x40),uVar8 >> 0x10,*puVar1);
            }
            if (cVar5 == '\0') goto LAB_143c85ccd;
          }
LAB_143c85ca1:
          uVar9 = 0;
          if (*param_3 != 0) {
            do {
              puVar6 = (undefined8 *)(uVar9 * 0x10 + *(longlong *)(param_3 + 2));
              cVar5 = (*(code *)puVar6[1])(*puVar6,param_1);
              if (cVar5 != '\0') {
                uVar7 = 1;
                goto LAB_143c85cd5;
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *param_3);
          }
        }
      }
LAB_143c85ccd:
      hb_buffer_t::next_glyph(lVar4);
LAB_143c85cd5:
      uVar8 = *(uint *)(lVar4 + 0xb4);
    } while (uVar8 < *(uint *)(lVar4 + 0xb8));
  }
  return uVar7;
}



// FUNCTION 143c85d10 apply_lookup body=863 status=ok
// SIG undefined apply_lookup(void)

undefined8
OT::apply_lookup(longlong param_1,uint param_2,longlong param_3,uint param_4,longlong param_5,
                int param_6)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  uint local_res10;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar5 + 0xb1) == '\0') {
    iVar15 = *(int *)(lVar5 + 0xb4);
  }
  else {
    iVar15 = *(int *)(lVar5 + 0xbc);
  }
  uVar14 = 0;
  iVar16 = param_6 + iVar15;
  uVar12 = 0;
  local_res10 = 0;
  iVar15 = iVar15 - *(int *)(lVar5 + 0xb4);
  if (param_2 != 0) {
    if (7 < param_2) {
      do {
        piVar10 = (int *)(param_3 + uVar14 * 4);
        iVar4 = piVar10[1];
        iVar7 = piVar10[2];
        iVar8 = piVar10[3];
        piVar1 = (int *)(param_3 + uVar14 * 4);
        *piVar1 = *piVar10 + iVar15;
        piVar1[1] = iVar4 + iVar15;
        piVar1[2] = iVar7 + iVar15;
        piVar1[3] = iVar8 + iVar15;
        uVar9 = (ulonglong)((int)uVar14 + 4);
        uVar12 = (int)uVar14 + 8;
        uVar14 = (ulonglong)uVar12;
        piVar10 = (int *)(param_3 + uVar9 * 4);
        iVar4 = piVar10[1];
        iVar7 = piVar10[2];
        iVar8 = piVar10[3];
        piVar1 = (int *)(param_3 + uVar9 * 4);
        *piVar1 = *piVar10 + iVar15;
        piVar1[1] = iVar4 + iVar15;
        piVar1[2] = iVar7 + iVar15;
        piVar1[3] = iVar8 + iVar15;
      } while (uVar12 < param_2 - (param_2 & 7));
    }
    if (uVar12 < param_2) {
      piVar10 = (int *)(param_3 + (ulonglong)uVar12 * 4);
      uVar14 = (ulonglong)(param_2 - uVar12);
      do {
        *piVar10 = *piVar10 + iVar15;
        piVar10 = piVar10 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (param_4 != 0) {
    pbVar18 = (byte *)(param_5 + 3);
    param_6 = iVar16;
    do {
      if (*(char *)(lVar5 + 0xb0) != '\0') break;
      uVar11 = (ushort)pbVar18[-3] * 0x100 + (ushort)pbVar18[-2];
      if ((uVar11 < param_2) &&
         ((uVar11 != 0 ||
          ((uint)(ushort)((ushort)pbVar18[-1] * 0x100 + (ushort)*pbVar18) !=
           *(uint *)(param_1 + 0xd0))))) {
        hb_buffer_t::move_to(lVar5,*(undefined4 *)(param_3 + (ulonglong)uVar11 * 4));
        iVar7 = hb_buffer_t::backtrack_len(lVar5);
        bVar2 = pbVar18[-1];
        iVar15 = *(int *)(lVar5 + 0xb8);
        iVar4 = *(int *)(lVar5 + 0xb4);
        bVar3 = *pbVar18;
        iVar16 = param_6;
        if ((*(int *)(param_1 + 0x38) != 0) && (*(code **)(param_1 + 0x30) != (code *)0x0)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          cVar6 = (**(code **)(param_1 + 0x30))(param_1,(ushort)bVar2 * 0x100 + (ushort)bVar3);
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          if (cVar6 != '\0') {
            iVar8 = hb_buffer_t::backtrack_len(lVar5);
            iVar8 = iVar8 + (*(int *)(lVar5 + 0xb8) - *(int *)(lVar5 + 0xb4));
            iVar15 = iVar8 - ((iVar15 - iVar4) + iVar7);
            if (iVar15 != 0) {
              iVar16 = *(int *)(param_3 + (ulonglong)uVar11 * 4) + 1;
              if (iVar16 < iVar8) {
                iVar8 = iVar16;
              }
              iVar16 = param_6 + iVar15;
              if (param_6 + iVar15 < iVar8) {
                iVar16 = iVar8;
              }
              uVar12 = uVar11 + 1;
              uVar14 = (ulonglong)uVar12;
              if (iVar15 < 1) {
                if (iVar15 <= (int)(uVar12 - param_2)) {
                  iVar15 = uVar12 - param_2;
                }
                uVar17 = uVar12 - iVar15;
              }
              else {
                uVar17 = uVar12;
                if (0x40 < iVar15 + param_2) break;
              }
              memmove((void *)(param_3 + ((longlong)iVar15 + (ulonglong)uVar17) * 4),
                      (void *)(param_3 + (ulonglong)uVar17 * 4),(ulonglong)(param_2 - uVar17) << 2);
              uVar17 = uVar17 + iVar15;
              uVar9 = (ulonglong)uVar17;
              param_2 = param_2 + iVar15;
              if (uVar12 < uVar17) {
                piVar10 = (int *)(param_3 + uVar14 * 4);
                do {
                  iVar4 = (int)uVar14;
                  uVar12 = iVar4 + 1;
                  uVar14 = (ulonglong)uVar12;
                  *piVar10 = *(int *)(param_3 + (ulonglong)(iVar4 - 1) * 4) + 1;
                  piVar10 = piVar10 + 1;
                } while (uVar12 < uVar17);
              }
              param_6 = iVar16;
              if (uVar17 < param_2) {
                if (7 < param_2 - uVar17) {
                  uVar12 = uVar17 + 4;
                  do {
                    piVar10 = (int *)(param_3 + uVar9 * 4);
                    iVar4 = piVar10[1];
                    iVar7 = piVar10[2];
                    iVar8 = piVar10[3];
                    piVar1 = (int *)(param_3 + uVar9 * 4);
                    *piVar1 = *piVar10 + iVar15;
                    piVar1[1] = iVar4 + iVar15;
                    piVar1[2] = iVar7 + iVar15;
                    piVar1[3] = iVar8 + iVar15;
                    uVar13 = (int)uVar9 + 8;
                    uVar9 = (ulonglong)uVar13;
                    piVar10 = (int *)(param_3 + (ulonglong)uVar12 * 4);
                    iVar4 = piVar10[1];
                    iVar7 = piVar10[2];
                    iVar8 = piVar10[3];
                    piVar1 = (int *)(param_3 + (ulonglong)uVar12 * 4);
                    *piVar1 = *piVar10 + iVar15;
                    piVar1[1] = iVar4 + iVar15;
                    piVar1[2] = iVar7 + iVar15;
                    piVar1[3] = iVar8 + iVar15;
                    uVar12 = uVar12 + 8;
                  } while (uVar13 < param_2 - (param_2 - uVar17 & 7));
                }
                if ((uint)uVar9 < param_2) {
                  piVar10 = (int *)(param_3 + uVar9 * 4);
                  uVar14 = (ulonglong)(param_2 - (uint)uVar9);
                  do {
                    *piVar10 = *piVar10 + iVar15;
                    piVar10 = piVar10 + 1;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
              }
            }
          }
        }
      }
      local_res10 = local_res10 + 1;
      pbVar18 = pbVar18 + 4;
    } while (local_res10 < param_4);
  }
  hb_buffer_t::move_to(lVar5,iVar16);
  return 1;
}



// FUNCTION 143c86070 apply_recurse_func body=151 status=ok
// SIG undefined apply_recurse_func(void)

undefined1 OT::PosLookup::apply_recurse_func(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = GSUBGPOS::get_lookup
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  uVar4 = Lookup::get_props(uVar5);
  hb_apply_context_t::set_lookup_props(param_1,uVar4);
  uVar3 = Lookup::dispatch<OT::PosLookupSubTable,OT::hb_apply_context_t>(uVar5,param_1);
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  hb_apply_context_t::set_lookup_props(param_1,uVar2);
  return uVar3;
}



// FUNCTION 143c86110 apply_recurse_func body=151 status=ok
// SIG undefined apply_recurse_func(void)

undefined1 OT::SubstLookup::apply_recurse_func(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = GSUBGPOS::get_lookup
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  uVar4 = Lookup::get_props(uVar5);
  hb_apply_context_t::set_lookup_props(param_1,uVar4);
  uVar3 = Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_apply_context_t>(uVar5,param_1);
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  hb_apply_context_t::set_lookup_props(param_1,uVar2);
  return uVar3;
}



// FUNCTION 143c861b0 apply_value body=602 status=ok
// SIG undefined apply_value(void)

void OT::ValueFormat::apply_value
               (byte *param_1,longlong param_2,uint param_3,longlong param_4,byte *param_5,
               int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ushort uVar9;
  bool bVar10;
  
  uVar9 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  bVar10 = (param_3 & 0xfffffffe) == 4;
  if (uVar9 != 0) {
    pbVar6 = param_5;
    if ((uVar9 & 1) != 0) {
      pbVar6 = param_5 + 2;
      iVar2 = hb_font_t::em_scale_x(param_2,(ushort)*param_5 * 0x100 + (ushort)param_5[1]);
      param_6[2] = param_6[2] + iVar2;
    }
    pbVar7 = pbVar6;
    if ((uVar9 & 2) != 0) {
      pbVar7 = pbVar6 + 2;
      iVar2 = hb_font_t::em_scale_y(param_2,(ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]);
      param_6[3] = param_6[3] + iVar2;
    }
    if ((uVar9 & 4) != 0) {
      if (bVar10) {
        iVar2 = hb_font_t::em_scale_x(param_2,(ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1]);
        *param_6 = *param_6 + iVar2;
      }
      pbVar7 = pbVar7 + 2;
    }
    if ((uVar9 & 8) != 0) {
      if (!bVar10) {
        iVar2 = hb_font_t::em_scale_y(param_2,(ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1]);
        param_6[1] = param_6[1] - iVar2;
      }
      pbVar7 = pbVar7 + 2;
    }
    if ((param_1[1] & 0xf0) != 0) {
      iVar2 = *(int *)(param_2 + 0x90);
      iVar1 = *(int *)(param_2 + 0x94);
      if ((iVar2 != 0) || (iVar1 != 0)) {
        puVar8 = &DAT_146bc87b0;
        if ((uVar9 & 0x10) != 0) {
          if (iVar2 != 0) {
            uVar5 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
            if (uVar5 == 0) {
              puVar4 = &DAT_146bc87b0;
            }
            else {
              puVar4 = (undefined1 *)((ulonglong)uVar5 + param_4);
            }
            iVar3 = Device::get_x_delta(puVar4,param_2);
            param_6[2] = param_6[2] + iVar3;
          }
          pbVar7 = pbVar7 + 2;
        }
        if ((uVar9 & 0x20) != 0) {
          if (iVar1 != 0) {
            uVar5 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
            if (uVar5 == 0) {
              puVar4 = &DAT_146bc87b0;
            }
            else {
              puVar4 = (undefined1 *)((ulonglong)uVar5 + param_4);
            }
            iVar3 = Device::get_y_delta(puVar4,param_2);
            param_6[3] = param_6[3] + iVar3;
          }
          pbVar7 = pbVar7 + 2;
        }
        if ((uVar9 & 0x40) != 0) {
          if ((bVar10) && (iVar2 != 0)) {
            uVar5 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
            if (uVar5 == 0) {
              puVar4 = &DAT_146bc87b0;
            }
            else {
              puVar4 = (undefined1 *)((ulonglong)uVar5 + param_4);
            }
            iVar2 = Device::get_x_delta(puVar4,param_2);
            *param_6 = *param_6 + iVar2;
          }
          pbVar7 = pbVar7 + 2;
        }
        if ((((char)uVar9 < '\0') && (!bVar10)) && (iVar1 != 0)) {
          uVar9 = (ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1];
          if (uVar9 != 0) {
            puVar8 = (undefined1 *)((ulonglong)uVar9 + param_4);
          }
          iVar2 = Device::get_y_delta(puVar8,param_2);
          param_6[1] = param_6[1] - iVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 143c86410 backtrack_len body=23 status=ok
// SIG undefined backtrack_len(void)

undefined4 hb_buffer_t::backtrack_len(longlong param_1)

{
  if (*(char *)(param_1 + 0xb1) != '\0') {
    return *(undefined4 *)(param_1 + 0xbc);
  }
  return *(undefined4 *)(param_1 + 0xb4);
}



// FUNCTION 143c86430 chain_context_apply_lookup body=300 status=ok
// SIG undefined chain_context_apply_lookup(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
OT::chain_context_apply_lookup
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
          undefined8 param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 *local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_148 [4];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_168 = local_138;
  local_158 = 0;
  local_160 = 0;
  local_170 = local_148;
  local_178 = param_10[2];
  local_148[0] = 0;
  cVar2 = match_input(param_1,param_4,param_5,*param_10);
  if (cVar2 != '\0') {
    local_178 = param_10[1];
    cVar2 = match_backtrack(param_1,param_2,param_3,*param_10);
    uVar1 = local_148[0];
    if (cVar2 != '\0') {
      local_178 = param_10[3];
      local_170._0_4_ = local_148[0];
      cVar2 = match_lookahead(param_1,param_6,param_7,*param_10);
      if (cVar2 != '\0') {
        local_170 = (undefined4 *)CONCAT44(local_170._4_4_,uVar1);
        local_178 = param_9;
        cVar2 = apply_lookup(param_1,param_4,local_138,param_8);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143c86560 context_apply_lookup body=200 status=ok
// SIG undefined context_apply_lookup(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
OT::context_apply_lookup
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,longlong param_6)

{
  char cVar1;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_138 [4];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_158 = local_128;
  local_148 = 0;
  local_150 = 0;
  local_160 = local_138;
  local_168 = *(undefined8 *)(param_6 + 8);
  local_138[0] = 0;
  cVar1 = match_input();
  if (cVar1 != '\0') {
    local_160 = (undefined4 *)CONCAT44(local_160._4_4_,local_138[0]);
    local_168 = param_5;
    cVar1 = apply_lookup(param_1,param_2,local_128,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c86630 covers body=226 status=ok
// SIG undefined covers(void)

bool OT::MarkGlyphSetsFormat1::covers(longlong param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 local_res10 [6];
  
  pbVar5 = &DAT_146bc87b0;
  if (param_2 < (ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3))) {
    pbVar4 = (byte *)(param_1 + ((ulonglong)param_2 + 1) * 4);
  }
  else {
    pbVar4 = &DAT_146bc87b0;
  }
  uVar2 = (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
          (uint)pbVar4[3];
  if (uVar2 != 0) {
    pbVar5 = (byte *)((ulonglong)uVar2 + param_1);
  }
  sVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (sVar3 != 1) {
    if (sVar3 != 2) {
      return false;
    }
    iVar1 = CoverageFormat2::get_coverage(pbVar5,param_3);
    return iVar1 != -1;
  }
  local_res10[0] = param_3;
  iVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                    (pbVar5 + 2,local_res10);
  return iVar1 != -1;
}



// FUNCTION 143c86720 em_scale_x body=87 status=ok
// SIG undefined em_scale_x(void)

longlong hb_font_t::em_scale_x(longlong param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(lVar2 + 0x94) == 0) {
    hb_face_t::load_upem(lVar2);
  }
  return ((longlong)iVar1 * (longlong)param_2) / (longlong)(ulonglong)*(uint *)(lVar2 + 0x94);
}



// FUNCTION 143c86780 em_scale_y body=87 status=ok
// SIG undefined em_scale_y(void)

longlong hb_font_t::em_scale_y(longlong param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x8c);
  if (*(int *)(lVar2 + 0x94) == 0) {
    hb_face_t::load_upem(lVar2);
  }
  return ((longlong)iVar1 * (longlong)param_2) / (longlong)(ulonglong)*(uint *)(lVar2 + 0x94);
}



// FUNCTION 143c867e0 end_processing body=116 status=ok
// SIG undefined end_processing(void)

void OT::hb_sanitize_context_t::end_processing(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  hb_blob_destroy(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143c86860 find_script_index body=111 status=ok
// SIG undefined find_script_index(void)

undefined8 OT::GSUBGPOS::find_script_index(longlong param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined4 local_res10 [6];
  
  puVar2 = &DAT_146bc87b0;
  uVar3 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
  if (uVar3 != 0) {
    puVar2 = (undefined1 *)(param_1 + (ulonglong)uVar3);
  }
  local_res10[0] = param_2;
  iVar1 = SortedArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned_short,2>_>::
          bsearch<unsigned_int>(puVar2,local_res10);
  if (iVar1 != -1) {
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
    return 1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0xffff;
  }
  return 0;
}



// FUNCTION 143c868d0 get_anchor body=228 status=ok
// SIG undefined get_anchor(void)

void OT::AnchorFormat1::get_anchor
               (longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = *(longlong *)(param_2 + 0x80);
  iVar3 = *(int *)(param_2 + 0x88);
  bVar2 = *(byte *)(param_1 + 3);
  if (*(int *)(lVar5 + 0x94) == 0) {
    hb_face_t::load_upem(lVar5);
  }
  lVar6 = (longlong)iVar3 * (longlong)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2);
  uVar4 = *(uint *)(lVar5 + 0x94);
  *param_4 = (int)(lVar6 / (longlong)(ulonglong)uVar4);
  bVar1 = *(byte *)(param_1 + 4);
  bVar2 = *(byte *)(param_1 + 5);
  lVar5 = *(longlong *)(param_2 + 0x80);
  iVar3 = *(int *)(param_2 + 0x8c);
  if (*(int *)(lVar5 + 0x94) == 0) {
    hb_face_t::load_upem(lVar5,lVar6 % (longlong)(ulonglong)uVar4);
  }
  *param_5 = (int)(((longlong)iVar3 * (longlong)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
                  (longlong)(ulonglong)*(uint *)(lVar5 + 0x94));
  return;
}



// FUNCTION 143c869c0 get_anchor body=636 status=ok
// SIG undefined get_anchor(void)

void OT::AnchorFormat2::get_anchor
               (longlong param_1,longlong param_2,ulonglong param_3,int *param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_res10 [4];
  int local_res20 [2];
  int local_48;
  int local_44 [3];
  
  iVar3 = *(int *)(param_2 + 0x90);
  iVar4 = *(int *)(param_2 + 0x94);
  if ((iVar3 == 0) && (bVar7 = false, iVar4 == 0)) {
LAB_143c86b6c:
    bVar1 = *(byte *)(param_1 + 2);
    lVar5 = *(longlong *)(param_2 + 0x80);
    bVar2 = *(byte *)(param_1 + 3);
    iVar3 = *(int *)(param_2 + 0x88);
    if (*(int *)(lVar5 + 0x94) == 0) {
      hb_face_t::load_upem(lVar5);
    }
    lVar10 = (longlong)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2) * (longlong)iVar3;
    uVar11 = lVar10 % (longlong)(ulonglong)*(uint *)(lVar5 + 0x94);
    *param_4 = (int)(lVar10 / (longlong)(ulonglong)*(uint *)(lVar5 + 0x94));
    if (!bVar7) goto LAB_143c86bcf;
  }
  else {
    local_48 = 0;
    local_44[0] = 0;
    iVar8 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x1b0))
                      (param_2,*(undefined8 *)(param_2 + 0xa0),param_3,
                       (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7),
                       local_44,&local_48,*(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0xd0));
    bVar7 = false;
    if (iVar8 == 0) goto LAB_143c86b6c;
    local_res10[0] = 0;
    local_res20[0] = 0;
    iVar9 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x188))
                      (param_2,*(undefined8 *)(param_2 + 0xa0),param_3 & 0xffffffff,local_res20,
                       local_res10,*(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0xa8));
    iVar8 = local_res20[0];
    uVar6 = local_res10[0];
    if (iVar9 == 0) {
      local_res10[0] = 0;
      local_res20[0] = 0;
      iVar9 = (**(code **)(*(longlong *)(param_2 + 0x98) + 400))
                        (param_2,*(undefined8 *)(param_2 + 0xa0),param_3 & 0xffffffff,local_res20,
                         local_res10,*(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0xb0));
      iVar8 = local_res20[0];
      uVar6 = local_res10[0];
      if (iVar9 != 0) {
        iVar8 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x178))
                          (param_2,*(undefined8 *)(param_2 + 0xa0),param_3 & 0xffffffff,
                           *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x98));
        iVar8 = local_res20[0] - iVar8 / 2;
        uVar6 = local_res10[0] - *(int *)(param_2 + 0x8c);
      }
    }
    uVar11 = (ulonglong)uVar6;
    bVar7 = true;
    local_48 = local_48 - uVar6;
    local_44[0] = local_44[0] - iVar8;
    if (iVar3 == 0) goto LAB_143c86b6c;
    *param_4 = local_44[0];
  }
  if (iVar4 != 0) {
    *param_5 = local_48;
    return;
  }
LAB_143c86bcf:
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = *(int *)(param_2 + 0x8c);
  lVar5 = *(longlong *)(param_2 + 0x80);
  bVar2 = *(byte *)(param_1 + 5);
  if (*(int *)(lVar5 + 0x94) == 0) {
    hb_face_t::load_upem(lVar5,uVar11);
  }
  *param_5 = (int)(((longlong)iVar3 * (longlong)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
                  (longlong)(ulonglong)*(uint *)(lVar5 + 0x94));
  return;
}



// FUNCTION 143c86c40 get_anchor body=416 status=ok
// SIG undefined get_anchor(void)

void OT::AnchorFormat3::get_anchor
               (longlong param_1,longlong param_2,undefined8 param_3,int *param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  ushort uVar10;
  
  bVar1 = *(byte *)(param_1 + 2);
  lVar4 = *(longlong *)(param_2 + 0x80);
  iVar5 = *(int *)(param_2 + 0x88);
  bVar2 = *(byte *)(param_1 + 3);
  if (*(int *)(lVar4 + 0x94) == 0) {
    hb_face_t::load_upem(lVar4);
  }
  lVar6 = (longlong)iVar5 * (longlong)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2);
  uVar3 = *(uint *)(lVar4 + 0x94);
  *param_4 = (int)(lVar6 / (longlong)(ulonglong)uVar3);
  bVar1 = *(byte *)(param_1 + 4);
  lVar4 = *(longlong *)(param_2 + 0x80);
  bVar2 = *(byte *)(param_1 + 5);
  iVar5 = *(int *)(param_2 + 0x8c);
  if (*(int *)(lVar4 + 0x94) == 0) {
    hb_face_t::load_upem(lVar4,lVar6 % (longlong)(ulonglong)uVar3);
  }
  puVar8 = &DAT_146bc87b0;
  iVar9 = 0;
  *param_5 = (int)(((longlong)iVar5 * (longlong)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
                  (longlong)(ulonglong)*(uint *)(lVar4 + 0x94));
  if (*(int *)(param_2 + 0x90) != 0) {
    puVar7 = &DAT_146bc87b0;
    uVar10 = (ushort)*(byte *)(param_1 + 7) + (ushort)*(byte *)(param_1 + 6) * 0x100;
    if (uVar10 != 0) {
      puVar7 = (undefined1 *)(param_1 + (ulonglong)uVar10);
    }
    iVar5 = Device::get_delta_pixels(puVar7,*(undefined4 *)(param_2 + 0x90));
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(((longlong)*(int *)(param_2 + 0x88) * (longlong)iVar5) /
                   (longlong)(ulonglong)*(uint *)(param_2 + 0x90));
    }
    *param_4 = *param_4 + iVar5;
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    uVar10 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
    if (uVar10 != 0) {
      puVar8 = (undefined1 *)(param_1 + (ulonglong)uVar10);
    }
    uVar3 = *(uint *)(param_2 + 0x90);
    if (uVar3 != 0) {
      iVar5 = Device::get_delta_pixels(puVar8,(ulonglong)uVar3);
      if (iVar5 != 0) {
        iVar9 = (int)(((longlong)*(int *)(param_2 + 0x88) * (longlong)iVar5) /
                     (longlong)(ulonglong)uVar3);
      }
    }
    *param_5 = *param_5 + iVar9;
  }
  return;
}



// FUNCTION 143c86de0 get_class body=323 status=ok
// SIG undefined get_class(void)

short OT::ClassDef::get_class(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  short sVar3;
  int local_res8 [2];
  
  sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar3 == 1) {
    uVar1 = param_2 - (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]);
    if (uVar1 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
      if (uVar1 < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5])) {
        param_1 = param_1 + ((ulonglong)uVar1 + 3) * 2;
      }
      else {
        param_1 = &DAT_146bc87b0;
      }
      return (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    }
  }
  else if (sVar3 == 2) {
    pbVar2 = param_1 + 2;
    local_res8[0] = param_2;
    uVar1 = SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar2,local_res8);
    if (uVar1 != 0xffffffff) {
      if (uVar1 < (ushort)((ushort)*pbVar2 * 0x100 + (ushort)param_1[3])) {
        pbVar2 = pbVar2 + (ulonglong)uVar1 * 6 + 2;
      }
      else {
        pbVar2 = &DAT_145d3a43c;
      }
      return (ushort)pbVar2[4] * 0x100 + (ushort)pbVar2[5];
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143c86f30 FUN_143c86f30 body=128 status=ok
// SIG undefined FUN_143c86f30(void)

undefined1 * FUN_143c86f30(longlong param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ushort uVar4;
  
  uVar1 = (uint)(ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) *
          2 + 2;
  if ((ushort)((ushort)*(byte *)((ulonglong)uVar1 + 2 + param_1) * 0x100 +
              (ushort)*(byte *)((ulonglong)uVar1 + 3 + param_1)) == 0) {
    pbVar2 = &DAT_146bc87b0;
  }
  else {
    pbVar2 = (byte *)(param_1 + 4 + (ulonglong)uVar1);
  }
  puVar3 = &DAT_146bc87b0;
  uVar4 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
  if (uVar4 != 0) {
    puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar4);
  }
  return puVar3;
}



// FUNCTION 143c86fb0 get_coverage body=82 status=ok
// SIG undefined get_coverage(void)

undefined8 OT::Coverage::get_coverage(byte *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  short sVar2;
  undefined4 local_res8 [8];
  
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    local_res8[0] = param_2;
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (param_1 + 2,local_res8);
    return uVar1;
  }
  if (sVar2 != 2) {
    return 0xffffffff;
  }
  uVar1 = CoverageFormat2::get_coverage();
  return uVar1;
}



// FUNCTION 143c87010 get_coverage body=176 status=ok
// SIG undefined get_coverage(void)

int OT::CoverageFormat2::get_coverage(longlong param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  int local_res10 [6];
  
  pbVar2 = (byte *)(param_1 + 2);
  local_res10[0] = param_2;
  uVar1 = SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                    (pbVar2,local_res10);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < (ushort)((ushort)*pbVar2 * 0x100 + (ushort)*(byte *)(param_1 + 3))) {
      pbVar2 = pbVar2 + (ulonglong)uVar1 * 6 + 2;
    }
    else {
      pbVar2 = &DAT_145d3a43c;
    }
    return ((uint)(ushort)((ushort)pbVar2[4] * 0x100 + (ushort)pbVar2[5]) -
           (uint)(ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1])) + param_2;
  }
  return -1;
}



// FUNCTION 143c870c0 get_delta_pixels body=287 status=ok
// SIG undefined get_delta_pixels(void)

uint OT::Device::get_delta_pixels(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar5 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if (((uVar5 - 1 < 3) &&
      (uVar2 = (uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]), uVar2 <= param_2)) &&
     (param_2 <= (ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]))) {
    param_2 = param_2 - uVar2;
    bVar1 = (byte)uVar5;
    uVar3 = (ulonglong)(param_2 >> (4 - bVar1 & 0x3f));
    uVar4 = 0xffff >> (0x10U - (char)(1 << (bVar1 & 0x1f)) & 0x1f);
    uVar2 = (ushort)((ushort)param_1[uVar3 * 2 + 6] * 0x100 + (ushort)param_1[uVar3 * 2 + 7]) >>
            (0x10U - (char)(((1 << (4 - bVar1 & 0x1f)) - 1U & (ushort)param_2) + 1 << (bVar1 & 0x1f)
                           ) & 0x1f) & uVar4;
    if (uVar4 + 1 >> 1 <= uVar2) {
      uVar2 = uVar2 + (-1 - uVar4);
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 143c871e0 get_feature body=142 status=ok
// SIG undefined get_feature(void)

byte * OT::GSUBGPOS::get_feature(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  byte *pbVar4;
  
  uVar3 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
  pbVar4 = &DAT_146bc87b0;
  if (uVar3 != 0) {
    pbVar4 = (byte *)(param_1 + (ulonglong)uVar3);
  }
  if (param_2 < (ushort)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1])) {
    pbVar1 = pbVar4 + (ulonglong)param_2 * 6 + 2;
  }
  else {
    pbVar1 = &DAT_146bc87b0;
  }
  pbVar2 = &DAT_146bc87b0;
  uVar3 = (ushort)pbVar1[4] * 0x100 + (ushort)pbVar1[5];
  if (uVar3 != 0) {
    pbVar2 = pbVar4 + uVar3;
  }
  return pbVar2;
}



// FUNCTION 143c87270 get_feature_tag body=138 status=ok
// SIG undefined get_feature_tag(void)

int OT::GSUBGPOS::get_feature_tag(longlong param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (param_2 == 0xffff) {
    return 0;
  }
  pbVar2 = &DAT_146bc87b0;
  uVar1 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
  if (uVar1 != 0) {
    pbVar2 = (byte *)(param_1 + (ulonglong)uVar1);
  }
  if (param_2 < (ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1])) {
    pbVar2 = pbVar2 + (ulonglong)param_2 * 6 + 2;
  }
  else {
    pbVar2 = &DAT_145d3a454;
  }
  return (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
         (uint)pbVar2[3];
}



// FUNCTION 143c87300 get_glyph_props body=176 status=ok
// SIG undefined get_glyph_props(void)

uint OT::GDEF::get_glyph_props(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  ushort uVar4;
  undefined1 *puVar5;
  
  puVar5 = &DAT_146bc87b0;
  uVar2 = (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5));
  if (uVar2 == 0) {
    puVar3 = &DAT_146bc87b0;
  }
  else {
    puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar2);
  }
  iVar1 = ClassDef::get_class(puVar3);
  if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else if (iVar1 == 3) {
    uVar4 = (ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb);
    if (uVar4 != 0) {
      puVar5 = (undefined1 *)(param_1 + (ulonglong)uVar4);
    }
    iVar1 = ClassDef::get_class(puVar5,param_2);
    uVar2 = iVar1 << 8 | 8;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143c873b0 get_gsubgpos_table body=90 status=ok
// SIG undefined get_gsubgpos_table(void)

undefined1 * get_gsubgpos_table(longlong param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0x47504f53) {
    cVar1 = hb_ot_shaper_face_data_ensure();
    if (cVar1 != '\0') {
      return *(undefined1 **)(*(longlong *)(param_1 + 0xa0) + 0x28);
    }
  }
  else if (param_2 == 0x47535542) {
    cVar1 = hb_ot_shaper_face_data_ensure();
    if (cVar1 != '\0') {
      return *(undefined1 **)(*(longlong *)(param_1 + 0xa0) + 0x20);
    }
  }
  return &DAT_146bc87b0;
}



// FUNCTION 143c87410 get_indexes body=167 status=ok
// SIG undefined get_indexes(void)

short OT::IndexArray::get_indexes(byte *param_1,uint param_2,uint *param_3,uint *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_3 != (uint *)0x0) {
    uVar3 = (uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    uVar5 = uVar3 - param_2;
    if (uVar3 < param_2) {
      uVar5 = 0;
    }
    if (*param_3 <= uVar5) {
      uVar5 = *param_3;
    }
    *param_3 = uVar5;
    pbVar4 = param_1 + ((ulonglong)param_2 + 1) * 2;
    if (uVar5 != 0) {
      uVar6 = (ulonglong)uVar5;
      do {
        pbVar1 = pbVar4 + 1;
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 2;
        *param_4 = (uint)(ushort)((ushort)bVar2 * 0x100 + (ushort)*pbVar1);
        uVar6 = uVar6 - 1;
        param_4 = param_4 + 1;
      } while (uVar6 != 0);
    }
  }
  return (ushort)*param_1 * 0x100 + (ushort)param_1[1];
}



// FUNCTION 143c874c0 get_lang_sys body=136 status=ok
// SIG undefined get_lang_sys(void)

byte * OT::Script::get_lang_sys(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (param_2 == 0xffff) {
    uVar1 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar1 != 0) {
      return param_1 + uVar1;
    }
  }
  else {
    if (param_2 < (ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3])) {
      pbVar2 = param_1 + (ulonglong)param_2 * 6 + 4;
    }
    else {
      pbVar2 = &DAT_146bc87b0;
    }
    uVar1 = (ushort)pbVar2[4] * 0x100 + (ushort)pbVar2[5];
    if (uVar1 != 0) {
      return param_1 + uVar1;
    }
  }
  return &DAT_145d3a448;
}



// FUNCTION 143c87550 get_lookup body=125 status=ok
// SIG undefined get_lookup(void)

byte * OT::GSUBGPOS::get_lookup(longlong param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  uVar1 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
  pbVar2 = &DAT_146bc87b0;
  pbVar3 = &DAT_146bc87b0;
  if (uVar1 != 0) {
    pbVar3 = (byte *)(param_1 + (ulonglong)uVar1);
  }
  if ((param_2 < (ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1])) &&
     (uVar1 = (ushort)pbVar3[(ulonglong)param_2 * 2 + 2] * 0x100 +
              (ushort)pbVar3[(ulonglong)param_2 * 2 + 3], uVar1 != 0)) {
    pbVar2 = pbVar3 + uVar1;
  }
  return pbVar2;
}



// FUNCTION 143c875d0 get_props body=109 status=ok
// SIG undefined get_props(void)

uint OT::Lookup::get_props(longlong param_1)

{
  ushort uVar1;
  byte *pbVar2;
  
  uVar1 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if ((uVar1 & 0x10) != 0) {
    pbVar2 = (byte *)(param_1 + 4) +
             ((uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)
                            ) * 2 + 2);
    return (uint)(ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) * 0x10000 + (uint)uVar1;
  }
  return (uint)uVar1;
}



// FUNCTION 143c87640 get_script body=142 status=ok
// SIG undefined get_script(void)

byte * OT::GSUBGPOS::get_script(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  byte *pbVar4;
  
  uVar3 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
  pbVar4 = &DAT_146bc87b0;
  if (uVar3 != 0) {
    pbVar4 = (byte *)(param_1 + (ulonglong)uVar3);
  }
  if (param_2 < (ushort)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1])) {
    pbVar1 = pbVar4 + (ulonglong)param_2 * 6 + 2;
  }
  else {
    pbVar1 = &DAT_146bc87b0;
  }
  pbVar2 = &DAT_146bc87b0;
  uVar3 = (ushort)pbVar1[4] * 0x100 + (ushort)pbVar1[5];
  if (uVar3 != 0) {
    pbVar2 = pbVar4 + uVar3;
  }
  return pbVar2;
}



// FUNCTION 143c876d0 get_size body=157 status=ok
// SIG undefined get_size(void)

int OT::Device::get_size(byte *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  if ((uVar1 - 1 < 3) &&
     (uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1],
     uVar2 <= (ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]))) {
    return ((int)((uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) - (uint)uVar2) >>
           (4U - (char)uVar1 & 0x1f)) * 2 + 8;
  }
  return 6;
}



// FUNCTION 143c87770 get_subtable body=97 status=ok
// SIG undefined get_subtable(void)

undefined1 * OT::SubstLookup::get_subtable(longlong param_1,uint param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ushort uVar3;
  
  if (param_2 < (ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 3) * 2);
  }
  else {
    pbVar1 = &DAT_146bc87b0;
  }
  puVar2 = &DAT_146bc87b0;
  uVar3 = (ushort)*pbVar1 * 0x100 + (ushort)pbVar1[1];
  if (uVar3 != 0) {
    puVar2 = (undefined1 *)(param_1 + (ulonglong)uVar3);
  }
  return puVar2;
}



// FUNCTION 143c877e0 get_x_delta body=72 status=ok
// SIG undefined get_x_delta(void)

longlong OT::Device::get_x_delta(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x90) != 0) {
    iVar1 = get_delta_pixels(param_1,*(undefined4 *)(param_2 + 0x90));
    if (iVar1 != 0) {
      return ((longlong)*(int *)(param_2 + 0x88) * (longlong)iVar1) /
             (longlong)(ulonglong)*(uint *)(param_2 + 0x90);
    }
  }
  return 0;
}



// FUNCTION 143c87830 get_y_delta body=72 status=ok
// SIG undefined get_y_delta(void)

longlong OT::Device::get_y_delta(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x94) != 0) {
    iVar1 = get_delta_pixels(param_1,*(undefined4 *)(param_2 + 0x94));
    if (iVar1 != 0) {
      return ((longlong)*(int *)(param_2 + 0x8c) * (longlong)iVar1) /
             (longlong)(ulonglong)*(uint *)(param_2 + 0x94);
    }
  }
  return 0;
}



// FUNCTION 143c87880 hb_ot_layout_lookup_would_substitute_fast body=201 status=ok
// SIG undefined hb_ot_layout_lookup_would_substitute_fast(void)

undefined1
hb_ot_layout_lookup_would_substitute_fast
          (longlong param_1,uint param_2,uint *param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong local_28;
  uint *local_20;
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  if (param_2 < *(uint *)(lVar3 + 0x30)) {
    local_14 = param_5 != 0;
    local_10 = 0;
    local_28 = param_1;
    local_20 = param_3;
    local_18 = param_4;
    uVar5 = OT::GSUBGPOS::get_lookup(*(undefined8 *)(lVar3 + 0x20),(ulonglong)param_2);
    if (param_4 != 0) {
      uVar2 = *param_3;
      puVar1 = (uint *)(*(longlong *)(lVar3 + 0x38) + (ulonglong)param_2 * 0xc);
      if ((((*puVar1 >> (uVar2 >> 4 & 0x1f) & 1) != 0) && ((puVar1[1] >> (uVar2 & 0x1f) & 1) != 0))
         && ((puVar1[2] >> (uVar2 >> 9 & 0x1f) & 1) != 0)) {
        uVar4 = OT::Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_would_apply_context_t>
                          (uVar5,&local_28);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 143c87950 hb_ot_layout_position_finish_offsets body=99 status=ok
// SIG undefined hb_ot_layout_position_finish_offsets(void)

void hb_ot_layout_position_finish_offsets(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res10 [6];
  
  uVar2 = hb_buffer_get_glyph_positions(param_2,local_res10);
  uVar1 = *(undefined4 *)(param_2 + 0x90);
  if (((*(byte *)(param_2 + 0x84) & 8) != 0) && (uVar3 = 0, local_res10[0] != 0)) {
    do {
      OT::propagate_attachment_offsets(uVar2,uVar3,uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_res10[0]);
  }
  return;
}



// FUNCTION 143c879c0 hb_ot_layout_position_start body=68 status=ok
// SIG undefined hb_ot_layout_position_start(void)

void hb_ot_layout_position_start(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_2 + 0xb8) != 0) {
    lVar1 = 0;
    uVar2 = (ulonglong)*(uint *)(param_2 + 0xb8);
    do {
      lVar1 = lVar1 + 0x14;
      *(undefined1 *)(*(longlong *)(param_2 + 0xd8) + -2 + lVar1) = 0;
      *(undefined2 *)(*(longlong *)(param_2 + 0xd8) + -4 + lVar1) = 0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143c87a10 hb_ot_layout_substitute_lookup body=5 status=ok
// SIG undefined hb_ot_layout_substitute_lookup(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void hb_ot_layout_substitute_lookup(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [8];
  undefined1 *puStack_130;
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0xb8) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    OT::Lookup::get_props(param_2);
    OT::hb_apply_context_t::set_lookup_props(param_1);
    _guard_xfg_dispatch_icall_nop(auStack_138,0,0x110);
    puStack_158 = auStack_138;
    uStack_150 = 0;
    OT::Lookup::dispatch<OT::SubstLookupSubTable,hb_get_subtables_context_t>(param_2,&puStack_158);
    cVar2 = OT::SubstLookup::is_reverse(param_2);
    if (cVar2 == '\0') {
      hb_buffer_t::clear_output();
      *(undefined4 *)(lVar1 + 0xb4) = 0;
      cVar2 = apply_forward(param_1,param_3,auStack_138);
      if (cVar2 != '\0') {
        hb_buffer_t::swap_buffers(lVar1);
      }
    }
    else {
      hb_buffer_t::remove_output(lVar1);
      *(int *)(lVar1 + 0xb4) = *(int *)(lVar1 + 0xb8) + -1;
      apply_backward(param_1,param_3,auStack_138);
    }
    if (puStack_130 != auStack_128) {
      FMemory::operator_delete();
    }
  }
  return;
}



// FUNCTION 143c87a20 hb_ot_layout_substitute_start body=5 status=ok
// SIG undefined hb_ot_layout_substitute_start(void)

void OT::GSUB::hb_ot_layout_substitute_start(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xa0) + 0x18);
  lVar2 = *(longlong *)(param_2 + 200);
  if (*(uint *)(param_2 + 0xb8) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0xb8);
    pbVar4 = (byte *)(lVar2 + 0xc);
    do {
      iVar3 = GDEF::get_glyph_props(uVar1,*(undefined4 *)(pbVar4 + -0xc));
      if (iVar3 == 0) {
        if ((((byte)*(undefined2 *)(pbVar4 + 4) & 0x1f) == 0xc) &&
           ((-1 < (char)(byte)*(undefined2 *)(pbVar4 + 4) || ((*pbVar4 >> 5 & 1) != 0)))) {
          iVar3 = 8;
        }
        else {
          iVar3 = 2;
        }
      }
      *(short *)pbVar4 = (short)iVar3;
      pbVar4[2] = 0;
      pbVar4[*(longlong *)(param_2 + 200) + (3 - lVar2)] = 0;
      uVar5 = uVar5 - 1;
      pbVar4 = pbVar4 + 0x14;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143c87a30 hb_ot_layout_table_find_feature body=323 status=ok
// SIG undefined hb_ot_layout_table_find_feature(void)

undefined8
hb_ot_layout_table_find_feature(undefined8 param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = get_gsubgpos_table();
  pbVar5 = &DAT_146bc87b0;
  uVar6 = (uint)(ushort)((ushort)*(byte *)(lVar2 + 6) * 0x100 + (ushort)*(byte *)(lVar2 + 7));
  if (uVar6 != 0) {
    pbVar5 = (byte *)(lVar2 + (ulonglong)uVar6);
  }
  uVar7 = 0;
  uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (uVar3 != 0) {
    do {
      uVar6 = (uint)uVar7;
      if (uVar6 == 0xffff) {
        iVar1 = 0;
      }
      else {
        pbVar5 = &DAT_146bc87b0;
        uVar4 = (ushort)*(byte *)(lVar2 + 6) * 0x100 + (ushort)*(byte *)(lVar2 + 7);
        if (uVar4 != 0) {
          pbVar5 = (byte *)(lVar2 + (ulonglong)uVar4);
        }
        if (uVar6 < (ushort)((ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1])) {
          pbVar5 = pbVar5 + uVar7 * 6 + 2;
        }
        else {
          pbVar5 = &DAT_145d3a454;
        }
        iVar1 = (uint)pbVar5[1] * 0x10000 + (uint)pbVar5[2] * 0x100 + (uint)*pbVar5 * 0x1000000 +
                (uint)pbVar5[3];
      }
      if (param_3 == iVar1) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar6;
        }
        return 1;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
    } while (uVar6 + 1 < (uint)uVar3);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0xffff;
  }
  return 0;
}



// FUNCTION 143c87b80 FUN_143c87b80 body=131 status=ok
// SIG undefined FUN_143c87b80(void)

undefined8 FUN_143c87b80(byte *param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  uint uVar3;
  ushort uVar4;
  
  while ((pbVar2 = param_1, uVar1 = 0, (ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 1 &&
         (uVar4 = (ushort)pbVar2[2] * 0x100 + (ushort)pbVar2[3], uVar1 = (ulonglong)uVar4,
         uVar4 == 7))) {
    uVar3 = (uint)pbVar2[5] * 0x10000 + (uint)pbVar2[6] * 0x100 + (uint)pbVar2[4] * 0x1000000 +
            (uint)pbVar2[7];
    param_1 = &DAT_146bc87b0;
    if (uVar3 != 0) {
      param_1 = pbVar2 + uVar3;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),(int)uVar1 == 8);
}



// FUNCTION 143c87c10 is_reverse body=237 status=ok
// SIG undefined is_reverse(void)

ulonglong OT::SubstLookup::is_reverse(byte *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  sVar4 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar4 != 7) {
    return (ulonglong)CONCAT11((char)((ushort)sVar4 >> 8),sVar4 == 8);
  }
  pbVar7 = &DAT_146bc87b0;
  sVar4 = 0;
  pbVar5 = &DAT_146bc87b0;
  if ((ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) != 0) {
    pbVar5 = param_1 + 6;
  }
  pbVar6 = &DAT_146bc87b0;
  uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (uVar3 != 0) {
    pbVar6 = param_1 + uVar3;
  }
  if ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) == 1) {
    sVar4 = (ushort)pbVar6[2] * 0x100 + (ushort)pbVar6[3];
    if (sVar4 == 7) {
      uVar2 = (uint)pbVar6[5] * 0x10000 + (uint)pbVar6[6] * 0x100 + (uint)pbVar6[4] * 0x1000000 +
              (uint)pbVar6[7];
      if (uVar2 != 0) {
        pbVar7 = pbVar6 + uVar2;
      }
      uVar1 = FUN_143c87b80(pbVar7);
      return uVar1;
    }
  }
  return (ulonglong)(sVar4 == 8);
}



// FUNCTION 143c87d00 ligate_input body=805 status=ok
// SIG undefined ligate_input(void)

undefined8
OT::ligate_input(longlong param_1,uint param_2,uint *param_3,uint param_4,undefined4 param_5,
                char param_6,byte param_7)

{
  ushort *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (1 < param_4) {
    hb_buffer_t::merge_clusters_impl(lVar7);
  }
  bVar13 = 0;
  uVar9 = 0;
  if (param_6 == '\0') {
    uVar17 = *(uint *)(lVar7 + 0xe0);
    *(uint *)(lVar7 + 0xe0) = uVar17 + 1;
    bVar13 = (byte)uVar17 & 7;
    uVar9 = 4;
    if ((uVar17 & 7) == 0) {
      bVar13 = _hb_allocate_lig_id(lVar7);
    }
  }
  bVar5 = *(byte *)(*(longlong *)(lVar7 + 200) + 0xe + (ulonglong)*(uint *)(lVar7 + 0xb4) * 0x14);
  lVar2 = *(longlong *)(lVar7 + 200) + (ulonglong)*(uint *)(lVar7 + 0xb4) * 0x14;
  if (((*(byte *)(lVar2 + 0xc) & 4) == 0) || ((*(byte *)(lVar2 + 0xe) & 0x10) == 0)) {
    bVar16 = 1;
  }
  else {
    bVar16 = *(byte *)(lVar2 + 0xe) & 0xf;
  }
  if (param_6 == '\0') {
    *(byte *)(lVar2 + 0xe) = param_7 & 0xf | bVar13 << 5 | 0x10;
    lVar2 = *(longlong *)(lVar7 + 200) + (ulonglong)*(uint *)(lVar7 + 0xb4) * 0x14;
    if ((*(byte *)(*(longlong *)(lVar7 + 200) + 0x10 + (ulonglong)*(uint *)(lVar7 + 0xb4) * 0x14) &
        0x1f) == 0xc) {
      puVar1 = (ushort *)(lVar2 + 0x10);
      *puVar1 = *puVar1 & 0xe0;
      puVar1 = (ushort *)(lVar2 + 0x10);
      *puVar1 = *puVar1 | 7;
    }
  }
  hb_apply_context_t::replace_glyph_with_ligature(param_1,param_5,uVar9);
  bVar19 = bVar16;
  if (1 < param_2) {
    uVar20 = (ulonglong)(param_2 - 1);
    do {
      param_3 = param_3 + 1;
      if (*(uint *)(lVar7 + 0xb4) < *param_3) {
        do {
          if (*(char *)(lVar7 + 0xb0) != '\0') break;
          if (param_6 == '\0') {
            bVar5 = *(byte *)(*(longlong *)(lVar7 + 200) + 0xe +
                             (ulonglong)*(uint *)(lVar7 + 0xb4) * 0x14);
            if ((((bVar5 & 0x10) != 0) || ((bVar5 & 0xf) == 0)) ||
               (bVar14 = bVar5 & 0xf, bVar16 <= (bVar5 & 0xf))) {
              bVar14 = bVar16;
            }
            *(byte *)(*(longlong *)(lVar7 + 200) + (ulonglong)*(uint *)(lVar7 + 0xb4) * 0x14 + 0xe)
                 = (bVar14 - bVar16) + bVar19 & 0xf | bVar13 << 5;
          }
          if (*(char *)(lVar7 + 0xb1) == '\0') {
LAB_143c87f1c:
            *(int *)(lVar7 + 0xb4) = *(int *)(lVar7 + 0xb4) + 1;
          }
          else {
            if ((*(longlong *)(lVar7 + 0xd0) == *(longlong *)(lVar7 + 200)) &&
               (*(int *)(lVar7 + 0xbc) == *(int *)(lVar7 + 0xb4))) {
LAB_143c87f16:
              *(int *)(lVar7 + 0xbc) = *(int *)(lVar7 + 0xbc) + 1;
              goto LAB_143c87f1c;
            }
            cVar12 = hb_buffer_t::make_room_for(lVar7,1,1);
            if (cVar12 != '\0') {
              uVar17 = *(uint *)(lVar7 + 0xb4);
              lVar2 = *(longlong *)(lVar7 + 200);
              uVar6 = *(uint *)(lVar7 + 0xbc);
              puVar3 = (undefined4 *)(lVar2 + (ulonglong)uVar17 * 0x14);
              uVar9 = puVar3[1];
              uVar10 = puVar3[2];
              uVar11 = puVar3[3];
              lVar8 = *(longlong *)(lVar7 + 0xd0);
              puVar4 = (undefined4 *)(lVar8 + (ulonglong)uVar6 * 0x14);
              *puVar4 = *puVar3;
              puVar4[1] = uVar9;
              puVar4[2] = uVar10;
              puVar4[3] = uVar11;
              *(undefined4 *)(lVar8 + (ulonglong)uVar6 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar2 + 0x10 + (ulonglong)uVar17 * 0x14);
              goto LAB_143c87f16;
            }
          }
        } while (*(uint *)(lVar7 + 0xb4) < *param_3);
      }
      lVar2 = *(longlong *)(lVar7 + 200);
      uVar18 = (ulonglong)*(uint *)(lVar7 + 0xb4);
      bVar5 = *(byte *)(lVar2 + 0xe + uVar18 * 0x14);
      if (((*(byte *)(lVar2 + 0xc + uVar18 * 0x14) & 4) == 0) ||
         (bVar16 = *(byte *)(lVar2 + 0xe + uVar18 * 0x14), (bVar16 & 0x10) == 0)) {
        bVar16 = 1;
      }
      else {
        bVar16 = bVar16 & 0xf;
      }
      bVar19 = bVar19 + bVar16;
      *(uint *)(lVar7 + 0xb4) = *(uint *)(lVar7 + 0xb4) + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (((param_6 == '\0') && (bVar5 >> 5 != 0)) &&
     (uVar17 = *(uint *)(lVar7 + 0xb4), uVar17 < *(uint *)(lVar7 + 0xb8))) {
    do {
      lVar2 = *(longlong *)(lVar7 + 200) + (ulonglong)uVar17 * 0x14;
      if (bVar5 >> 5 != *(byte *)(*(longlong *)(lVar7 + 200) + 0xe + (ulonglong)uVar17 * 0x14) >> 5)
      {
        return 1;
      }
      bVar14 = *(byte *)(lVar2 + 0xe);
      if ((bVar14 & 0x10) != 0) {
        return 1;
      }
      if ((bVar14 & 0xf) == 0) {
        return 1;
      }
      bVar15 = bVar16;
      if ((bVar14 & 0xf) < bVar16) {
        bVar15 = bVar14 & 0xf;
      }
      uVar17 = uVar17 + 1;
      *(byte *)(lVar2 + 0xe) = (bVar15 - bVar16) + bVar19 & 0xf | bVar13 << 5;
    } while (uVar17 < *(uint *)(lVar7 + 0xb8));
  }
  return 1;
}



// FUNCTION 143c88030 mark_set_covers body=197 status=ok
// SIG undefined mark_set_covers(void)

undefined8 OT::GDEF::mark_set_covers(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  
  if (0x10001 < (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) +
                (uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) * 4) {
    pbVar2 = &DAT_146bc87b0;
    uVar3 = (ushort)param_1[0xc] * 0x100 + (ushort)param_1[0xd];
    if (uVar3 != 0) {
      pbVar2 = param_1 + uVar3;
    }
    if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 1) {
      cVar1 = MarkGlyphSetsFormat1::covers(pbVar2,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c88100 match_backtrack body=199 status=ok
// SIG undefined match_backtrack(void)

undefined8
OT::match_backtrack(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0xb1) == '\0') {
    iVar5 = *(int *)(lVar1 + 0xb4);
  }
  else {
    iVar5 = *(int *)(lVar1 + 0xbc);
  }
  *(uint *)(param_1 + 200) = param_2;
  uVar4 = 0;
  *(int *)(param_1 + 0x90) = iVar5;
  *(undefined4 *)(param_1 + 0xcc) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x18) + 0xb8);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x18);
  if (iVar5 == *(int *)(lVar1 + 0xb4)) {
    uVar3 = *(undefined1 *)
             (*(longlong *)(lVar1 + 200) + 0xf + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14);
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xac) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = param_5;
  *(undefined8 *)(param_1 + 0xb0) = param_4;
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  if (param_2 != 0) {
    do {
      cVar2 = hb_apply_context_t::skipping_iterator_t::prev((int *)(param_1 + 0x90));
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return 1;
}



// FUNCTION 143c881d0 match_class body=63 status=ok
// SIG undefined match_class(void)

undefined8 OT::match_class(undefined4 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = ClassDef::get_class(param_3,param_1);
  return CONCAT71(1,uVar1 == (ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]));
}



// FUNCTION 143c88210 match_coverage body=153 status=ok
// SIG undefined match_coverage(void)

bool OT::match_coverage(undefined4 param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  short sVar2;
  byte *pbVar3;
  ushort uVar4;
  undefined4 local_res10 [6];
  
  uVar4 = (ushort)*param_2 * 0x100 + (ushort)param_2[1];
  if (uVar4 == 0) {
    pbVar3 = &DAT_146bc87b0;
  }
  else {
    pbVar3 = (byte *)(param_3 + (ulonglong)uVar4);
  }
  sVar2 = (ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1];
  if (sVar2 != 1) {
    if (sVar2 != 2) {
      return false;
    }
    iVar1 = CoverageFormat2::get_coverage(pbVar3,param_1);
    return iVar1 != -1;
  }
  local_res10[0] = param_1;
  iVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                    (pbVar3 + 2,local_res10);
  return iVar1 != -1;
}



// FUNCTION 143c882d0 match_input body=569 status=ok
// SIG undefined match_input(void)

undefined8
OT::match_input(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,int *param_6,uint *param_7,byte *param_8,uint *param_9)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined1 uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar15;
  bool bVar16;
  
  if (0x40 < param_2) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar3 + 0xb4);
  *(int *)(param_1 + 0x50) = iVar2;
  puVar1 = (uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x88) = param_2 - 1;
  *(undefined4 *)(param_1 + 0x8c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) + 0xb8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18);
  if (iVar2 == *(int *)(lVar4 + 0xb4)) {
    uVar10 = *(undefined1 *)
              (*(longlong *)(lVar4 + 200) + 0xf + (ulonglong)*(uint *)(lVar4 + 0xb4) * 0x14);
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)(param_1 + 0x6c) = uVar10;
  *(undefined8 *)(param_1 + 0x78) = param_5;
  *(undefined8 *)(param_1 + 0x70) = param_4;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  uVar14 = (ulonglong)*(uint *)(lVar3 + 0xb4);
  lVar4 = *(longlong *)(lVar3 + 200);
  bVar11 = *(byte *)(lVar4 + 0xc + uVar14 * 0x14) >> 3 & 1;
  if (((*(byte *)(lVar4 + 0xc + uVar14 * 0x14) & 4) == 0) ||
     (bVar15 = *(byte *)(lVar4 + 0xe + uVar14 * 0x14), (bVar15 & 0x10) == 0)) {
    uVar13 = 1;
  }
  else {
    uVar13 = bVar15 & 0xf;
  }
  bVar15 = *(byte *)(lVar4 + 0xe + uVar14 * 0x14);
  bVar5 = *(byte *)(lVar4 + 0xe + uVar14 * 0x14) >> 5;
  if ((bVar15 & 0x10) == 0) {
    bVar15 = bVar15 & 0xf;
  }
  else {
    bVar15 = 0;
  }
  uVar12 = 1;
  *param_7 = *(uint *)(lVar3 + 0xb4);
  if (1 < param_2) {
    do {
      param_7 = param_7 + 1;
      cVar7 = hb_apply_context_t::skipping_iterator_t::next(puVar1);
      if (cVar7 == '\0') {
        return 0;
      }
      *param_7 = *puVar1;
      lVar4 = *(longlong *)(lVar3 + 200) + (ulonglong)*puVar1 * 0x14;
      bVar6 = *(byte *)(*(longlong *)(lVar3 + 200) + 0xe + (ulonglong)*puVar1 * 0x14) >> 5;
      if ((*(byte *)(lVar4 + 0xe) & 0x10) == 0) {
        bVar8 = *(byte *)(lVar4 + 0xe) & 0xf;
      }
      else {
        bVar8 = 0;
      }
      if ((bVar5 == 0) || (bVar15 == 0)) {
        if ((bVar6 != 0) && (bVar8 != 0)) {
          bVar16 = bVar6 == bVar5;
          goto LAB_143c8845d;
        }
      }
      else {
        if (bVar5 != bVar6) {
          return 0;
        }
        bVar16 = bVar15 == bVar8;
LAB_143c8845d:
        if (!bVar16) {
          return 0;
        }
      }
      if ((bVar11 == 0) || ((*(byte *)(lVar4 + 0xc) >> 3 & 1) == 0)) {
        bVar11 = 0;
      }
      else {
        bVar11 = 1;
      }
      if (((*(byte *)(lVar4 + 0xc) & 4) == 0) || ((*(byte *)(lVar4 + 0xe) & 0x10) == 0)) {
        uVar9 = 1;
      }
      else {
        uVar9 = *(byte *)(lVar4 + 0xe) & 0xf;
      }
      uVar13 = uVar13 + uVar9;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_2);
  }
  *param_6 = (*puVar1 - *(int *)(lVar3 + 0xb4)) + 1;
  if (param_8 != (byte *)0x0) {
    *param_8 = bVar11;
  }
  if (param_9 != (uint *)0x0) {
    *param_9 = uVar13;
  }
  return 1;
}



// FUNCTION 143c88510 match_lookahead body=185 status=ok
// SIG undefined match_lookahead(void)

undefined8
OT::match_lookahead(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,int param_6)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = param_6 + -1 + *(int *)(*(longlong *)(param_1 + 0x18) + 0xb4);
  *(int *)(param_1 + 0x90) = iVar5;
  *(uint *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xcc) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x18) + 0xb8);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x18);
  if (iVar5 == *(int *)(lVar1 + 0xb4)) {
    uVar3 = *(undefined1 *)
             (*(longlong *)(lVar1 + 200) + 0xf + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14);
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xac) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = param_5;
  *(undefined8 *)(param_1 + 0xb0) = param_4;
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  if (param_2 != 0) {
    do {
      cVar2 = hb_apply_context_t::skipping_iterator_t::next((int *)(param_1 + 0x90));
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return 1;
}



// FUNCTION 143c885d0 may_skip body=186 status=ok
// SIG undefined may_skip(void)

undefined8
OT::hb_apply_context_t::matcher_t::may_skip(uint *param_1,longlong param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  
  uVar1 = *(ushort *)(param_3 + 3);
  uVar3 = *param_1;
  if ((uVar1 & uVar3 & 0xe) != 0) {
    return 1;
  }
  if ((uVar1 & 8) != 0) {
    if ((uVar3 & 0x10) == 0) {
      if ((uVar3 & 0xff00) == 0) goto LAB_143c8862a;
      cVar4 = (uVar3 & 0xff00) == (uVar1 & 0xff00);
    }
    else {
      cVar4 = GDEF::mark_set_covers(*(undefined8 *)(param_2 + 0x40),uVar3 >> 0x10,*param_3);
    }
    if (cVar4 == '\0') {
      return 1;
    }
  }
LAB_143c8862a:
  uVar2 = *(ushort *)(param_3 + 4);
  if (((((char)uVar2 < '\0') && (((byte)uVar1 >> 5 & 1) == 0)) &&
      (((char)param_1[1] != '\0' || ((uVar2 & 0x40) == 0)))) &&
     ((*(char *)((longlong)param_1 + 5) != '\0' || ((uVar2 & 0x20) == 0)))) {
    return 2;
  }
  return 0;
}



// FUNCTION 143c88690 message body=46 status=ok
// SIG undefined message(void)

undefined1 hb_buffer_t::message(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return 1;
  }
  uVar1 = message_impl();
  return uVar1;
}



// FUNCTION 143c886c0 next body=213 status=ok
// SIG undefined next(void)

undefined8 OT::hb_apply_context_t::skipping_iterator_t::next(uint *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  if (*param_1 + param_1[0xe] < param_1[0xf]) {
    do {
      *param_1 = *param_1 + 1;
      puVar1 = (undefined4 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x18) + 200) +
               (ulonglong)*param_1 * 0x14);
      iVar3 = matcher_t::may_skip(param_1 + 4,*(longlong *)(param_1 + 2),puVar1);
      if (iVar3 != 1) {
        if (((puVar1[1] & param_1[6]) != 0) &&
           (((char)param_1[7] == '\0' || ((char)param_1[7] == *(char *)((longlong)puVar1 + 0xf)))))
        {
          if (*(code **)(param_1 + 8) == (code *)0x0) {
            if (iVar3 == 0) goto LAB_143c88760;
            goto LAB_143c88770;
          }
          cVar2 = (**(code **)(param_1 + 8))
                            (*puVar1,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 10));
          if (cVar2 != '\0') {
LAB_143c88760:
            param_1[0xe] = param_1[0xe] - 1;
            *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 2;
            return 1;
          }
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_143c88770:
    } while (*param_1 + param_1[0xe] < param_1[0xf]);
  }
  return 0;
}



// FUNCTION 143c887a0 output_glyph_for_component body=163 status=ok
// SIG undefined output_glyph_for_component(void)

void OT::hb_apply_context_t::output_glyph_for_component
               (longlong param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = *(ushort *)(*(longlong *)(lVar1 + 200) + 0xc + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14)
          & 0x60 | 0x50;
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (param_3 != 0) {
      *(ushort *)(*(longlong *)(lVar1 + 200) + 0xc + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14) =
           (ushort)param_3 | uVar3;
    }
  }
  else {
    uVar2 = GDEF::get_glyph_props(*(undefined8 *)(param_1 + 0x40));
    *(ushort *)(*(longlong *)(lVar1 + 200) + 0xc + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14) =
         uVar2 | uVar3;
  }
  hb_buffer_t::output_glyph(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 143c88850 position body=62 status=ok
// SIG undefined position(void)

void hb_ot_map_t::position
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x80) + 0xa0);
  local_18 = *(undefined8 *)(lVar1 + 0x28);
  local_10 = *(undefined8 *)(lVar1 + 0x40);
  apply<GPOSProxy>(param_1,&local_18,param_2,param_3,param_4);
  return;
}



// FUNCTION 143c88890 prev body=210 status=ok
// SIG undefined prev(void)

undefined8 OT::hb_apply_context_t::skipping_iterator_t::prev(uint *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  if (param_1[0xe] <= *param_1) {
    do {
      *param_1 = *param_1 - 1;
      puVar1 = (undefined4 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x18) + 0xd0) +
               (ulonglong)*param_1 * 0x14);
      iVar3 = matcher_t::may_skip(param_1 + 4,*(longlong *)(param_1 + 2),puVar1);
      if (iVar3 != 1) {
        if (((puVar1[1] & param_1[6]) != 0) &&
           (((char)param_1[7] == '\0' || ((char)param_1[7] == *(char *)((longlong)puVar1 + 0xf)))))
        {
          if (*(code **)(param_1 + 8) == (code *)0x0) {
            if (iVar3 == 0) goto LAB_143c88930;
            goto LAB_143c88940;
          }
          cVar2 = (**(code **)(param_1 + 8))
                            (*puVar1,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 10));
          if (cVar2 != '\0') {
LAB_143c88930:
            param_1[0xe] = param_1[0xe] - 1;
            *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 2;
            return 1;
          }
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_143c88940:
    } while (param_1[0xe] <= *param_1);
  }
  return 0;
}



// FUNCTION 143c88970 propagate_attachment_offsets body=311 status=ok
// SIG undefined propagate_attachment_offsets(void)

void OT::propagate_attachment_offsets(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2;
  iVar3 = (int)*(short *)(param_1 + 0x10 + uVar6 * 0x14);
  bVar2 = *(byte *)(param_1 + 0x12 + uVar6 * 0x14);
  if (iVar3 != 0) {
    uVar7 = iVar3 + param_2;
    uVar8 = (ulonglong)uVar7;
    *(undefined2 *)(param_1 + 0x10 + uVar6 * 0x14) = 0;
    propagate_attachment_offsets(param_1,uVar8);
    if ((bVar2 & 2) != 0) {
      if ((param_3 & 0xfffffffe) != 4) {
        piVar5 = (int *)(param_1 + 8 + uVar6 * 0x14);
        *piVar5 = *piVar5 + *(int *)(param_1 + 8 + uVar8 * 0x14);
        return;
      }
      piVar5 = (int *)(param_1 + 0xc + uVar6 * 0x14);
      *piVar5 = *piVar5 + *(int *)(param_1 + 0xc + uVar8 * 0x14);
      return;
    }
    piVar5 = (int *)(param_1 + uVar8 * 0x14);
    piVar1 = (int *)(param_1 + 8 + uVar6 * 0x14);
    *piVar1 = *piVar1 + *(int *)(param_1 + 8 + uVar8 * 0x14);
    piVar1 = (int *)(param_1 + 0xc + uVar6 * 0x14);
    *piVar1 = *piVar1 + piVar5[3];
    iVar3 = *(int *)(param_1 + 0xc + uVar6 * 0x14);
    if ((param_3 & 0xfffffffd) == 4) {
      if (uVar7 < param_2) {
        iVar4 = *(int *)(param_1 + 8 + uVar6 * 0x14);
        uVar8 = (ulonglong)(param_2 - uVar7);
        do {
          iVar4 = iVar4 - *piVar5;
          *(int *)(param_1 + 8 + uVar6 * 0x14) = iVar4;
          iVar3 = iVar3 - piVar5[1];
          *(int *)(param_1 + 0xc + uVar6 * 0x14) = iVar3;
          uVar8 = uVar8 - 1;
          piVar5 = piVar5 + 5;
        } while (uVar8 != 0);
        return;
      }
    }
    else {
      uVar7 = uVar7 + 1;
      if (uVar7 < param_2 + 1) {
        iVar4 = *(int *)(param_1 + 8 + uVar6 * 0x14);
        uVar8 = (ulonglong)((param_2 + 1) - uVar7);
        piVar5 = (int *)(param_1 + (ulonglong)uVar7 * 0x14);
        do {
          iVar4 = iVar4 + *piVar5;
          *(int *)(param_1 + 8 + uVar6 * 0x14) = iVar4;
          iVar3 = iVar3 + piVar5[1];
          *(int *)(param_1 + 0xc + uVar6 * 0x14) = iVar3;
          uVar8 = uVar8 - 1;
          piVar5 = piVar5 + 5;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143c88ab0 push body=224 status=ok
// SIG undefined push(void)

void * hb_prealloced_array_t<hb_get_subtables_context_t::hb_applicable_t,16>::push(uint *param_1)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    param_1[1] = 0x10;
    *(uint **)(param_1 + 2) = param_1 + 4;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar2 < uVar1) {
    *param_1 = uVar2 + 1;
    return (void *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 2));
  }
  uVar2 = uVar1 + 8 + (uVar1 >> 1);
  if (*(uint **)(param_1 + 2) == param_1 + 4) {
    _Dst = (void *)HarfBuzzCalloc(uVar2,0x10);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),(ulonglong)*param_1 << 4);
  }
  else {
    if (uVar2 < uVar1) {
      return (void *)0x0;
    }
    if (0xffffffe < uVar2) {
      return (void *)0x0;
    }
    _Dst = (void *)HarfBuzzRealloc(*(uint **)(param_1 + 2),(ulonglong)uVar2 << 4);
  }
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  uVar1 = *param_1;
  *(void **)(param_1 + 2) = _Dst;
  param_1[1] = uVar2;
  *param_1 = uVar1 + 1;
  return (void *)((ulonglong)uVar1 * 0x10 + (longlong)_Dst);
}



// FUNCTION 143c88b90 replace_glyph body=129 status=ok
// SIG undefined replace_glyph(void)

void OT::hb_apply_context_t::replace_glyph(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(ushort *)(*(longlong *)(lVar2 + 200) + 0xc + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14);
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar3 = GDEF::get_glyph_props(*(undefined8 *)(param_1 + 0x40));
    *(ushort *)(*(longlong *)(lVar2 + 200) + 0xc + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14) =
         uVar3 | uVar1 & 0x60 | 0x10;
  }
  hb_buffer_t::replace_glyph(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 143c88c20 replace_glyph_inplace body=143 status=ok
// SIG undefined replace_glyph_inplace(void)

void OT::hb_apply_context_t::replace_glyph_inplace(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(ushort *)(*(longlong *)(lVar2 + 200) + 0xc + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14);
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar3 = GDEF::get_glyph_props(*(undefined8 *)(param_1 + 0x40));
    *(ushort *)(*(longlong *)(lVar2 + 200) + 0xc + (ulonglong)*(uint *)(lVar2 + 0xb4) * 0x14) =
         uVar3 | uVar1 & 0x60 | 0x10;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x18) + 200) +
   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 0xb4) * 0x14) = param_2;
  return;
}



// FUNCTION 143c88cb0 replace_glyph_with_ligature body=169 status=ok
// SIG undefined replace_glyph_with_ligature(void)

void OT::hb_apply_context_t::replace_glyph_with_ligature
               (longlong param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (param_3 != 0) {
      *(ushort *)(*(longlong *)(lVar1 + 200) + 0xc + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14) =
           (ushort)param_3 | 0x30;
    }
  }
  else {
    uVar2 = GDEF::get_glyph_props(*(undefined8 *)(param_1 + 0x40));
    *(ushort *)(*(longlong *)(lVar1 + 200) + 0xc + (ulonglong)*(uint *)(lVar1 + 0xb4) * 0x14) =
         uVar2 | 0x30;
  }
  hb_buffer_t::replace_glyph(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 143c88d60 reverse_cursive_minor_offset body=153 status=ok
// SIG undefined reverse_cursive_minor_offset(void)

void OT::reverse_cursive_minor_offset(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  
  lVar3 = (ulonglong)param_2 * 0x14 + param_1;
  sVar2 = *(short *)(lVar3 + 0x10);
  bVar1 = *(byte *)(lVar3 + 0x12);
  if ((sVar2 != 0) && ((bVar1 & 2) != 0)) {
    param_2 = (int)sVar2 + param_2;
    *(undefined2 *)(lVar3 + 0x10) = 0;
    if (param_2 != param_4) {
      reverse_cursive_minor_offset(param_1,param_2);
      param_1 = (ulonglong)param_2 * 0x14 + param_1;
      if ((param_3 & 0xfffffffe) == 4) {
        *(int *)(param_1 + 0xc) = -*(int *)(lVar3 + 0xc);
      }
      else {
        *(int *)(param_1 + 8) = -*(int *)(lVar3 + 8);
      }
      *(short *)(param_1 + 0x10) = -sVar2;
      *(byte *)(param_1 + 0x12) = bVar1;
    }
  }
  return;
}



// FUNCTION 143c88e00 sanitize body=112 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 2,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c88e70 sanitize body=114 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::IntType<unsigned_int,3>,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 2,3,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c88ef0 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::
                      sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89010 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::CaretValue,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = CaretValue::sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89130 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::ChainRule,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>::
sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = ChainRule::sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89250 sanitize body=279 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::ChainRuleSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  
  cVar2 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar2 != '\0') {
    pbVar5 = param_1 + 2;
    cVar2 = hb_sanitize_context_t::check_array
                      (param_2,pbVar5,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar2 != '\0') {
      uVar6 = 0;
      uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar2 = hb_sanitize_context_t::check_range(param_2,pbVar5,2);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
          if ((uVar4 != 0) &&
             (lVar1 = param_3 + (ulonglong)uVar4,
             cVar2 = ArrayOf<OT::OffsetTo<OT::ChainRule,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                     ::sanitize(lVar1,param_2,lVar1), cVar2 == '\0')) {
            cVar2 = hb_sanitize_context_t::may_edit(param_2,pbVar5,2);
            if (cVar2 == '\0') {
              return 0;
            }
            pbVar5[0] = 0;
            pbVar5[1] = 0;
          }
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 2;
        } while (uVar6 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89370 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>::
sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = Coverage::sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89490 sanitize body=196 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_int,4>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((cVar1 == '\0') ||
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 2,4,(ushort)*param_1 * 0x100 + (ushort)param_1[1]),
     cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar3 != 0) {
      do {
        cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_int,4>_>::sanitize
                          (param_1 + uVar5 * 4 + 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c89560 sanitize body=279 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::LigGlyph,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>::
sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  
  cVar2 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar2 != '\0') {
    pbVar5 = param_1 + 2;
    cVar2 = hb_sanitize_context_t::check_array
                      (param_2,pbVar5,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar2 != '\0') {
      uVar6 = 0;
      uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar2 = hb_sanitize_context_t::check_range(param_2,pbVar5,2);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
          if ((uVar4 != 0) &&
             (lVar1 = param_3 + (ulonglong)uVar4,
             cVar2 = ArrayOf<OT::OffsetTo<OT::CaretValue,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                     ::sanitize(lVar1,param_2,lVar1), cVar2 == '\0')) {
            cVar2 = hb_sanitize_context_t::may_edit(param_2,pbVar5,2);
            if (cVar2 == '\0') {
              return 0;
            }
            pbVar5[0] = 0;
            pbVar5[1] = 0;
          }
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 2;
        } while (uVar6 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89680 sanitize body=211 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>::
sanitize(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((cVar1 == '\0') ||
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 2,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]),
     cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar3 != 0) {
      do {
        cVar1 = OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + (uVar5 + 1) * 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c89760 sanitize body=279 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::LigatureSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  
  cVar2 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar2 != '\0') {
    pbVar5 = param_1 + 2;
    cVar2 = hb_sanitize_context_t::check_array
                      (param_2,pbVar5,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar2 != '\0') {
      uVar6 = 0;
      uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar2 = hb_sanitize_context_t::check_range(param_2,pbVar5,2);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
          if ((uVar4 != 0) &&
             (lVar1 = param_3 + (ulonglong)uVar4,
             cVar2 = ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                     ::sanitize(lVar1,param_2,lVar1), cVar2 == '\0')) {
            cVar2 = hb_sanitize_context_t::may_edit(param_2,pbVar5,2);
            if (cVar2 == '\0') {
              return 0;
            }
            pbVar5[0] = 0;
            pbVar5[1] = 0;
          }
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 2;
        } while (uVar6 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}


