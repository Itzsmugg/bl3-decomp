// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143928370 FUN_143928370 body=215 status=ok
// SIG undefined FUN_143928370(void)

/* WARNING: Removing unreachable block (ram,0x000143928445) */

void FUN_143928370(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_143928370(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (0xf < (ulonglong)param_2[7]) {
      uVar3 = param_2[4];
      uVar4 = uVar3;
      if (0xfff < param_2[7] + 1U) {
        if ((uVar3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar4 = *(ulonglong *)(uVar3 - 8);
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (uVar3 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (0x27 < uVar3 - uVar4) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar4);
    }
    param_2[7] = 0xf;
    param_2[6] = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    FMemory::operator_delete(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}



// FUNCTION 143928450 FUN_143928450 body=256 status=ok
// SIG undefined FUN_143928450(void)

longlong * FUN_143928450(longlong *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (-param_1[2] - 1U <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_2 != 0) {
    uVar1 = param_1[2] + param_2;
    if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < uVar1) {
      FUN_143263050(param_1,uVar1);
      if (uVar1 == 0) {
        return param_1;
      }
    }
    else if (uVar1 == 0) {
      param_1[2] = 0;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    lVar2 = param_1[2];
    if (param_2 == 1) {
      if ((ulonglong)param_1[3] < 0x10) {
        *(char *)((longlong)param_1 + lVar2) = param_3;
      }
      else {
        *(char *)(*param_1 + lVar2) = param_3;
      }
    }
    else {
      plVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar3 = (longlong *)*param_1;
      }
      _guard_xfg_dispatch_icall_nop((undefined1 *)(lVar2 + (longlong)plVar3),(int)param_3,param_2);
    }
    param_1[2] = uVar1;
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    *(undefined1 *)((longlong)plVar3 + uVar1) = 0;
  }
  return param_1;
}



// FUNCTION 143928560 begin body=13 status=ok
// SIG undefined begin(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
::begin(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_1;
  return param_2;
}



// FUNCTION 143928570 FUN_143928570 body=65 status=ok
// SIG undefined FUN_143928570(void)

void FUN_143928570(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143928370(param_1,*(undefined8 *)(*param_1 + 8),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)(*param_1 + 8) = *param_1;
  *(longlong *)*param_1 = *param_1;
  *(longlong *)(*param_1 + 0x10) = *param_1;
  param_1[1] = 0;
  return;
}



// FUNCTION 1439285c0 FUN_1439285c0 body=246 status=ok
// SIG undefined FUN_1439285c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1439285c0(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_138 [32];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  strncpy((char *)local_118,param_3,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar5 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)((longlong)puVar9 + 0x1c);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar5 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar5 != puVar3) {
    pbVar6 = local_118;
    lVar4 = 0x1c - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar5 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) {
      *param_2 = (longlong)puVar5;
      return param_2;
    }
  }
  *param_2 = (longlong)puVar3;
  return param_2;
}



// FUNCTION 1439286c0 FUN_1439286c0 body=15 status=ok
// SIG undefined FUN_1439286c0(void)

void FUN_1439286c0(undefined8 param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1439286d0(param_1,param_2);
  return;
}



// FUNCTION 1439286d0 FUN_1439286d0 body=227 status=ok
// SIG undefined FUN_1439286d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439286d0(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_138 [32];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  strncpy((char *)local_118,param_2,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar9 = puVar3;
  puVar8 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar4 = (byte *)((longlong)puVar8 + 0x1c);
    lVar5 = -(longlong)pbVar4;
    do {
      bVar2 = *pbVar4;
      uVar6 = (uint)pbVar4[(longlong)(local_118 + lVar5)];
      if (bVar2 != uVar6) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar2 - uVar6) < 0) {
      puVar7 = (undefined8 *)puVar8[2];
      puVar8 = puVar9;
    }
    else {
      puVar7 = (undefined8 *)*puVar8;
    }
    puVar9 = puVar8;
    puVar8 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
  }
  if (puVar9 != puVar3) {
    pbVar4 = local_118;
    lVar5 = 0x1c - (longlong)pbVar4;
    do {
      bVar2 = *pbVar4;
      uVar6 = (uint)pbVar4[(longlong)puVar9 + lVar5];
      if (bVar2 != uVar6) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    if (-1 < (int)(bVar2 - uVar6)) goto LAB_14392878a;
  }
  puVar9 = puVar3;
LAB_14392878a:
  if (puVar9 == puVar3) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)puVar9 + 0x11c;
  }
  return lVar5;
}



// FUNCTION 1439287c0 FUN_1439287c0 body=368 status=ok
// SIG undefined FUN_1439287c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439287c0(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined *local_278 [3];
  undefined **local_260 [13];
  undefined8 local_1f8;
  undefined4 local_1f0;
  code *local_1e0;
  undefined **local_178 [12];
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_10;
  
  local_280 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_298 = 0;
  if (*param_2 == '\0') {
    local_278[0] = &DAT_145af0c78;
    local_278[2] = &DAT_145af0c80;
    local_1e0 = _vftable__exref;
    local_298 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_278,
               (basic_streambuf<char,std::char_traits<char>_> *)local_260);
    *(undefined ***)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4) + -4) =
         *(int *)(local_278[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_260);
    local_260[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_1f8 = 0;
    local_1f0 = 0;
    std::operator<<<std::char_traits<char>_>
              (local_278 + 2,"Image channel name cannot be an empty string.");
    FUN_143e175c0(local_178,local_278);
    local_178[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_178,(ThrowInfo *)&DAT_1461db4d8);
  }
  strncpy(local_118,param_2,0xff);
  local_19 = 0;
  local_290 = *param_3;
  uStack_28c = param_3[1];
  uStack_288 = param_3[2];
  uStack_284 = param_3[3];
  puVar1 = (undefined8 *)FUN_143928220(param_1,local_118);
  *puVar1 = CONCAT44(uStack_28c,local_290);
  puVar1[1] = CONCAT44(uStack_284,uStack_288);
  return;
}



// FUNCTION 143928940 FUN_143928940 body=159 status=ok
// SIG undefined FUN_143928940(void)

void FUN_143928940(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = FUN_14392aba0();
  *(undefined2 *)(lVar2 + 0x18) = 0;
  if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
    param_3 = (undefined8 *)*param_3;
    lVar4 = 2;
    puVar3 = (undefined8 *)(lVar2 + 0x20);
    do {
      uVar1 = param_3[1];
      *puVar3 = *param_3;
      puVar3[1] = uVar1;
      uVar1 = param_3[3];
      puVar3[2] = param_3[2];
      puVar3[3] = uVar1;
      uVar1 = param_3[5];
      puVar3[4] = param_3[4];
      puVar3[5] = uVar1;
      uVar1 = param_3[7];
      puVar3[6] = param_3[6];
      puVar3[7] = uVar1;
      uVar1 = param_3[9];
      puVar3[8] = param_3[8];
      puVar3[9] = uVar1;
      uVar1 = param_3[0xb];
      puVar3[10] = param_3[10];
      puVar3[0xb] = uVar1;
      uVar1 = param_3[0xd];
      puVar3[0xc] = param_3[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = param_3[0xf];
      puVar3[0xe] = param_3[0xe];
      puVar3[0xf] = uVar1;
      param_3 = param_3 + 0x10;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 0x10;
    } while (lVar4 != 0);
    *(undefined8 *)(lVar2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1439289e0 FUN_1439289e0 body=87 status=ok
// SIG undefined FUN_1439289e0(void)

longlong FUN_1439289e0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    if (param_3 != param_1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_3,param_1,0,0xffffffffffffffff);
    }
    param_3 = param_3 + 0x20;
  }
  return param_3;
}



// FUNCTION 143928a40 FUN_143928a40 body=169 status=ok
// SIG undefined FUN_143928a40(void)

/* WARNING: Removing unreachable block (ram,0x000143928ae7) */

void FUN_143928a40(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (0xf < param_1[3]) {
      uVar1 = *param_1;
      uVar2 = uVar1;
      if (0xfff < param_1[3] + 1) {
        if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar2 = *(ulonglong *)(uVar1 - 8);
        if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (uVar1 - uVar2 < 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (0x27 < uVar1 - uVar2) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar2);
    }
    param_1[3] = 0xf;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 4;
  } while( true );
}



// FUNCTION 143928af0 FUN_143928af0 body=678 status=ok
// SIG undefined FUN_143928af0(void)

undefined8 *
FUN_143928af0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0xdd67c8a60dd67a < (ulonglong)param_1[1]) {
    FMemory::operator_delete(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_143928b74;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_143928b74;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_143928b74:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_143928d6e:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_143928d6e;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 143928da0 FUN_143928da0 body=821 status=ok
// SIG undefined FUN_143928da0(void)

undefined8 *
FUN_143928da0(longlong *param_1,undefined8 *param_2,longlong *param_3,byte *param_4,
             undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_20 [24];
  
  if (param_1[1] == 0) {
    FUN_143928af0(param_1,param_2,1,*param_1,param_4,param_5,0xfffffffffffffffe);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    pbVar7 = param_4;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[(longlong)param_3 + (0x20 - (longlong)param_4)];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      FUN_143928af0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    pbVar7 = (byte *)(plVar3[2] + 0x20);
    lVar10 = (longlong)param_4 - (longlong)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[lVar10];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      FUN_143928af0(param_1,param_2,0,plVar3[2],param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
  else {
    pbVar7 = (byte *)(param_3 + 4);
    pbVar8 = param_4;
    do {
      bVar1 = *pbVar8;
      uVar6 = (uint)pbVar8[(longlong)pbVar7 - (longlong)param_4];
      if (bVar1 != uVar6) break;
      pbVar8 = pbVar8 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar11 = (longlong *)*param_3;
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(plVar11[2] + 0x19);
          plVar4 = (longlong *)plVar11[2];
          while (cVar2 == '\0') {
            cVar2 = *(char *)(plVar4[2] + 0x19);
            plVar11 = plVar4;
            plVar4 = (longlong *)plVar4[2];
          }
        }
        else {
          cVar2 = *(char *)(param_3[1] + 0x19);
          plVar4 = (longlong *)param_3[1];
          plVar11 = param_3;
          while ((plVar5 = plVar4, cVar2 == '\0' && (plVar11 == (longlong *)*plVar5))) {
            cVar2 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar11 = plVar5;
          }
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            plVar11 = plVar5;
          }
        }
      }
      else {
        plVar11 = (longlong *)param_3[2];
      }
      pbVar8 = (byte *)(plVar11 + 4);
      lVar10 = (longlong)param_4 - (longlong)pbVar8;
      do {
        bVar1 = *pbVar8;
        uVar6 = (uint)pbVar8[lVar10];
        if (bVar1 != uVar6) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 0) {
        if (*(char *)(plVar11[2] + 0x19) != '\0') {
          FUN_143928af0(param_1,param_2,0,plVar11,param_4,param_5,0xfffffffffffffffe);
          return param_2;
        }
        FUN_143928af0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    lVar10 = (longlong)param_4 - (longlong)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[lVar10];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      plVar11 = param_3;
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar11 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar4 = (longlong *)*plVar11;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar4 + 0x19);
            plVar11 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar2 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar11 = plVar5, cVar2 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
            cVar2 = *(char *)(plVar11[1] + 0x19);
            plVar5 = (longlong *)plVar11[1];
            plVar4 = plVar11;
          }
        }
      }
      if (plVar11 != plVar3) {
        pbVar7 = param_4;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[(longlong)plVar11 + (0x20 - (longlong)param_4)];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        if (-1 < (int)(bVar1 - uVar6)) goto LAB_143929096;
      }
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_143928af0(param_1,param_2,0,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
      FUN_143928af0(param_1,param_2,1,plVar11,param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
LAB_143929096:
  puVar9 = (undefined8 *)FUN_1439290e0(param_1,local_20,0,param_4,param_5);
  *param_2 = *puVar9;
  return param_2;
}



// FUNCTION 1439290e0 FUN_1439290e0 body=471 status=ok
// SIG undefined FUN_1439290e0(void)

undefined8 *
FUN_1439290e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,byte *param_4,
             undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)*param_1;
  uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  cVar1 = *(char *)((longlong)puVar5[1] + 0x19);
  puVar3 = puVar5;
  puVar7 = (undefined8 *)puVar5[1];
  while (cVar1 == '\0') {
    if ((char)param_3 == '\0') {
      lVar9 = (longlong)puVar7 + (0x20 - (longlong)param_4);
      pbVar4 = param_4;
      do {
        bVar2 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar9];
        if (bVar2 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),(int)(bVar2 - uVar6) < 0);
    }
    else {
      pbVar4 = (byte *)(puVar7 + 4);
      lVar9 = (longlong)param_4 - (longlong)pbVar4;
      do {
        bVar2 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar9];
        if (bVar2 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),-1 < (int)(bVar2 - uVar6));
    }
    if ((char)uVar8 == '\0') {
      puVar10 = (undefined8 *)puVar7[2];
    }
    else {
      puVar10 = (undefined8 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar10;
    cVar1 = *(char *)((longlong)puVar10 + 0x19);
  }
  puVar7 = puVar3;
  if ((char)uVar8 != '\0') {
    if (puVar3 == (undefined8 *)*puVar5) {
      puVar5 = (undefined8 *)
               FUN_143928af0(param_1,local_res8,CONCAT71((int7)((ulonglong)uVar8 >> 8),1),puVar3,
                             param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
      puVar7 = (undefined8 *)*puVar3;
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar7[2] + 0x19);
        puVar5 = (undefined8 *)puVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar5[2] + 0x19);
          puVar7 = puVar5;
          puVar5 = (undefined8 *)puVar5[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar5 = (undefined8 *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar10 = puVar5, cVar1 == '\0' && (puVar7 == (undefined8 *)*puVar10))) {
          cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
          puVar5 = (undefined8 *)puVar10[1];
          puVar7 = puVar10;
        }
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          puVar7 = puVar10;
        }
      }
    }
    else {
      puVar7 = (undefined8 *)puVar3[2];
    }
  }
  pbVar4 = (byte *)(puVar7 + 4);
  lVar9 = (longlong)param_4 - (longlong)pbVar4;
  do {
    bVar2 = *pbVar4;
    uVar6 = (uint)pbVar4[lVar9];
    if (bVar2 != uVar6) break;
    pbVar4 = pbVar4 + 1;
  } while (uVar6 != 0);
  if ((int)(bVar2 - uVar6) < 0) {
    puVar5 = (undefined8 *)
             FUN_143928af0(param_1,local_res8,uVar8,puVar3,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FMemory::operator_delete(param_5);
    *param_2 = puVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 1439292c0 _Uninit_copy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*___ptr64,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> body=125 status=ok
// SIG undefined _Uninit_copy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*___ptr64,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(void)

undefined1 *
std::
_Uninit_copy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*___ptr64,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    if (param_3 != (undefined1 *)0x0) {
      *(undefined8 *)(param_3 + 0x18) = 0xf;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *param_3 = 0;
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_3,param_1,0,0xffffffffffffffff,uVar1);
    }
    param_3 = param_3 + 0x20;
  }
  return param_3;
}



// FUNCTION 143929340 FUN_143929340 body=378 status=ok
// SIG undefined FUN_143929340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143929340(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  uint uVar3;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined8 local_180;
  undefined *local_178 [3];
  undefined **local_160 [13];
  undefined8 local_f8;
  undefined4 local_f0;
  code *local_e0;
  undefined **local_78 [13];
  ulonglong local_10;
  
  local_180 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar3 = 0;
  do {
    if (*param_1 == '\0') {
      return;
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 1;
  } while (uVar3 < 0x100);
  local_178[0] = &DAT_145af0c78;
  local_178[2] = &DAT_145af0c80;
  local_e0 = _vftable__exref;
  local_188 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_178,
             (basic_streambuf<char,std::char_traits<char>_> *)local_160);
  *(undefined ***)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4) + -4) =
       *(int *)(local_178[0] + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_160);
  local_160[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_f8 = 0;
  local_f0 = 0;
  uVar1 = std::operator<<<std::char_traits<char>_>(local_178 + 2,"Invalid ");
  uVar1 = std::operator<<<std::char_traits<char>_>(uVar1,param_2);
  this = (basic_ostream<char,std::char_traits<char>_> *)
         std::operator<<<std::char_traits<char>_>(uVar1,": it is more than ");
  pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,0xff);
  std::operator<<<std::char_traits<char>_>(pbVar2," characters long.");
  FUN_143e175c0(local_78,local_178);
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 1439294c0 FUN_1439294c0 body=58 status=ok
// SIG undefined FUN_1439294c0(void)

void FUN_1439294c0(undefined8 param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_2[3]) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(param_2,*param_2,param_2[3] + 1);
  }
  param_2[3] = 0xf;
  param_2[2] = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



// FUNCTION 143929500 findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_> body=256 status=ok
// SIG undefined findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
Imf::Header::findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>
          (longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  strncpy((char *)local_118,param_2,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar10 != puVar3) {
    pbVar5 = local_118;
    lVar4 = 0x20 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) goto LAB_1439295ba;
  }
  puVar10 = puVar3;
LAB_1439295ba:
  if (puVar10 == puVar3) {
    uVar6 = 0;
  }
  else {
    local_128 = 0;
    uVar6 = ::_guard_xfg_dispatch_icall_nop
                      (puVar10[0x24],0,&Attribute::RTTI_Type_Descriptor,
                       &TypedAttribute<Imf::PreviewImage>::RTTI_Type_Descriptor);
  }
  return uVar6;
}



// FUNCTION 143929600 findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_> body=256 status=ok
// SIG undefined findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
Imf::Header::findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>
          (longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  strncpy((char *)local_118,param_2,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar10 != puVar3) {
    pbVar5 = local_118;
    lVar4 = 0x20 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) goto LAB_1439296ba;
  }
  puVar10 = puVar3;
LAB_1439296ba:
  if (puVar10 == puVar3) {
    uVar6 = 0;
  }
  else {
    local_128 = 0;
    uVar6 = ::_guard_xfg_dispatch_icall_nop
                      (puVar10[0x24],0,&Attribute::RTTI_Type_Descriptor,
                       &TypedAttribute<Imf::TileDescription>::RTTI_Type_Descriptor);
  }
  return uVar6;
}



// FUNCTION 143929700 FUN_143929700 body=152 status=ok
// SIG undefined FUN_143929700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143929700(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x10))(param_1,&local_18,8);
  *param_2 = local_18;
  return;
}



// FUNCTION 1439297a0 FUN_1439297a0 body=149 status=ok
// SIG undefined FUN_1439297a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439297a0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [7];
  undefined1 uStack_11;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = (undefined1)((ulonglong)param_2 >> 0x38);
  local_18 = (undefined1  [7])((uint7)(ushort)((ulonglong)param_2 >> 0x20) << 0x20);
  _local_18 = CONCAT17(uVar1,local_18);
  local_18._0_4_ = (undefined4)param_2;
  local_18 = (undefined1  [7])CONCAT16((char)((ulonglong)param_2 >> 0x30),local_18._0_6_);
  _local_18 = CONCAT17(uVar1,local_18);
  (**(code **)(*param_1 + 8))(param_1,local_18,8);
  return;
}



// FUNCTION 143929840 FUN_143929840 body=194 status=ok
// SIG undefined FUN_143929840(void)

undefined8 * FUN_143929840(undefined8 *param_1)

{
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143938760();
  *param_1 = Imf::TypedAttribute<Imf::Chromaticities>::vftable;
  local_res10 = 0x3ea01a37;
  local_res14 = 0x3ea872b0;
  local_res18 = 0x3e19999a;
  local_res1c = 0x3d75c28f;
  local_res20 = 0x3e99999a;
  local_res24 = 0x3f19999a;
  local_18 = 0x3f23d70a;
  local_14 = 0x3ea8f5c3;
  FUN_143934b40(param_1 + 1,&local_18,&local_res20,&local_res18,&local_res10);
  return param_1;
}



// FUNCTION 143929910 FUN_143929910 body=95 status=ok
// SIG undefined FUN_143929910(void)

undefined8 * FUN_143929910(undefined8 *param_1)

{
  FUN_143938760();
  *param_1 = Imf::TypedAttribute<Imath::Matrix44<float>_>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  return param_1;
}



// FUNCTION 143929970 FUN_143929970 body=115 status=ok
// SIG undefined FUN_143929970(void)

basic_streambuf<char,std::char_traits<char>_> *
FUN_143929970(basic_streambuf<char,std::char_traits<char>_> *param_1,uint param_2)

{
  uint uVar1;
  
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  *(undefined ***)param_1 =
       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_2 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x70) = uVar1;
  return param_1;
}



// FUNCTION 1439299f0 FUN_1439299f0 body=186 status=ok
// SIG undefined FUN_1439299f0(void)

basic_iostream<char,std::char_traits<char>_> *
FUN_1439299f0(basic_iostream<char,std::char_traits<char>_> *param_1,undefined4 param_2,int param_3,
             undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_3 != 0) {
    *(undefined **)param_1 = &DAT_145af0c78;
    *(undefined **)(param_1 + 0x10) = &DAT_145af0c80;
    *(code **)(param_1 + 0x98) = _vftable__exref;
    *(code **)(param_1 + 0x98) = _vftable__exref;
  }
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (param_1,(basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x18));
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)param_1 + 4) + -0x98;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) = iVar1;
  FUN_143929970(param_1 + 0x18,param_2,iVar1,param_4,uVar2);
  return param_1;
}



// FUNCTION 143929ab0 FUN_143929ab0 body=190 status=ok
// SIG undefined FUN_143929ab0(void)

undefined8 *
FUN_143929ab0(undefined8 *param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  int local_28;
  int local_24;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_14392ab50();
  *param_1 = uVar1;
  FUN_14392f330();
  local_28 = param_2 + -1;
  local_24 = param_3 + -1;
  local_30 = 0;
  FUN_14392ceb0(param_1,&local_30,&local_30,param_4,param_5,param_6,param_7,param_8,uVar2);
  return param_1;
}



// FUNCTION 143929b70 FUN_143929b70 body=33 status=ok
// SIG undefined FUN_143929b70(void)

undefined8 * FUN_143929b70(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::TypeExc::vftable;
  return param_1;
}



// FUNCTION 143929ba0 FUN_143929ba0 body=15 status=ok
// SIG undefined FUN_143929ba0(void)

void FUN_143929ba0(undefined8 *param_1)

{
  *param_1 = Imf::TypedAttribute<float>::vftable;
  FUN_143938770();
  return;
}



// FUNCTION 143929bb0 FUN_143929bb0 body=15 status=ok
// SIG undefined FUN_143929bb0(void)

void FUN_143929bb0(undefined8 *param_1)

{
  *param_1 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
  FUN_143938770();
  return;
}



// FUNCTION 143929bc0 FUN_143929bc0 body=15 status=ok
// SIG undefined FUN_143929bc0(void)

void FUN_143929bc0(undefined8 *param_1)

{
  *param_1 = Imf::TypedAttribute<Imath::Vec2<float>_>::vftable;
  FUN_143938770();
  return;
}



// FUNCTION 143929bd0 FUN_143929bd0 body=107 status=ok
// SIG undefined FUN_143929bd0(void)

void FUN_143929bd0(undefined8 *param_1)

{
  undefined1 local_res8;
  
  *param_1 = Imf::
             TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
             ::vftable;
  if (param_1[1] != 0) {
    FUN_143928a40(param_1[1],param_1[2],param_1 + 1,local_res8);
    std::allocator<CefRect>::deallocate
              (param_1 + 1,param_1[1],(longlong)(param_1[3] - param_1[1]) >> 5);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  FUN_143938770(param_1);
  return;
}



// FUNCTION 143929c40 FUN_143929c40 body=74 status=ok
// SIG undefined FUN_143929c40(void)

void FUN_143929c40(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  
  *param_1 = Imf::TypedAttribute<Imf::ChannelList>::vftable;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1 + 1,local_res8,*(undefined8 *)param_1[1],(undefined8 *)param_1[1]);
  FMemory::operator_delete(param_1[1]);
  FUN_143938770(param_1);
  return;
}



// FUNCTION 143929c90 FUN_143929c90 body=15 status=ok
// SIG undefined FUN_143929c90(void)

void FUN_143929c90(undefined8 *param_1)

{
  *param_1 = Imf::TypedAttribute<Imf::Compression>::vftable;
  FUN_143938770();
  return;
}



// FUNCTION 143929ca0 FUN_143929ca0 body=15 status=ok
// SIG undefined FUN_143929ca0(void)

void FUN_143929ca0(undefined8 *param_1)

{
  *param_1 = Imf::TypedAttribute<Imf::LineOrder>::vftable;
  FUN_143938770();
  return;
}



// FUNCTION 143929cb0 ~FrameBuffer body=41 status=ok
// SIG undefined ~FrameBuffer(void)

void Imf::FrameBuffer::~FrameBuffer(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1);
  FMemory::operator_delete(*param_1);
  return;
}



// FUNCTION 143929ce0 FUN_143929ce0 body=188 status=ok
// SIG undefined FUN_143929ce0(void)

void FUN_143929ce0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  plVar5 = *(longlong **)*param_1;
  if (plVar5 != (longlong *)*param_1) {
    do {
      puVar2 = (undefined8 *)plVar5[0x24];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        plVar3 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            plVar5 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
          }
        }
      }
    } while (plVar5 != (longlong *)*param_1);
  }
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1,uVar6);
  FMemory::operator_delete(*param_1);
  return;
}



// FUNCTION 143929da0 FUN_143929da0 body=96 status=ok
// SIG undefined FUN_143929da0(void)

void FUN_143929da0(longlong param_1)

{
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0xb0);
  *(code **)(param_1 + 0xb0) = _vftable__exref;
  *(code **)(param_1 + 0xb0) = _vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0xb0));
  FUN_143927730(param_1);
  return;
}



// FUNCTION 143929e00 FUN_143929e00 body=358 status=ok
// SIG undefined FUN_143929e00(void)

longlong * FUN_143929e00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res8;
  
  if (param_1 != param_2) {
    lVar4 = *param_2;
    lVar6 = param_2[1];
    local_res8 = SUB81(param_1,0);
    if (lVar4 == lVar6) {
      FUN_143928a40(*param_1,param_1[1],param_1,(ulonglong)param_1 & 0xff);
      lVar4 = *param_1;
    }
    else {
      uVar7 = lVar6 - lVar4 >> 5;
      lVar1 = *param_1;
      uVar5 = param_1[1] - lVar1 >> 5;
      if (uVar5 < uVar7) {
        if ((ulonglong)(param_1[2] - lVar1 >> 5) < uVar7) {
          if (lVar1 != 0) {
            FUN_143928a40(lVar1,param_1[1],param_1,(ulonglong)param_1 & 0xff);
            std::allocator<CefRect>::deallocate(param_1,*param_1,param_1[2] - *param_1 >> 5);
          }
          cVar2 = std::vector<CefRect,std::allocator<CefRect>_>::_Buy
                            (param_1,param_2[1] - *param_2 >> 5);
          if (cVar2 == '\0') {
            return param_1;
          }
          lVar4 = std::
                  _Uninit_copy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*___ptr64,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                            (*param_2,param_2[1],*param_1,param_1,local_res8);
          param_1[1] = lVar4;
          return param_1;
        }
        lVar6 = uVar5 * 0x20 + lVar4;
        FUN_1439289e0(lVar4,lVar6,lVar1);
        lVar4 = std::
                _Uninit_copy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_*___ptr64,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*___ptr64,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                          (lVar6,param_2[1],param_1[1],param_1,local_res8);
      }
      else {
        uVar3 = FUN_1439289e0(lVar4,lVar6,lVar1);
        FUN_143928a40(uVar3,param_1[1],param_1,(ulonglong)param_1 & 0xff);
        lVar4 = (param_2[1] - *param_2 & 0xffffffffffffffe0U) + *param_1;
      }
    }
    param_1[1] = lVar4;
  }
  return param_1;
}



// FUNCTION 143929f70 FUN_143929f70 body=324 status=ok
// SIG undefined FUN_143929f70(void)

longlong * FUN_143929f70(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  if (param_1 != param_2) {
    plVar5 = *(longlong **)*param_1;
    if (plVar5 != (longlong *)*param_1) {
      do {
        puVar2 = (undefined8 *)plVar5[0x24];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar3 = (longlong *)plVar5[2];
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            plVar5 = plVar3;
            plVar3 = (longlong *)*plVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar3 + 0x19);
              plVar5 = plVar3;
              plVar3 = (longlong *)*plVar3;
            }
          }
          else {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
              cVar1 = *(char *)(plVar5[1] + 0x19);
              plVar4 = (longlong *)plVar5[1];
              plVar3 = plVar5;
            }
          }
        }
      } while (plVar5 != (longlong *)*param_1);
    }
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::erase(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1);
    plVar5 = *(longlong **)*param_2;
    if (plVar5 != (longlong *)*param_2) {
      do {
        FUN_14392d140(param_1,plVar5 + 4,plVar5[0x24]);
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar3 = (longlong *)plVar5[2];
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            plVar5 = plVar3;
            plVar3 = (longlong *)*plVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar3 + 0x19);
              plVar5 = plVar3;
              plVar3 = (longlong *)*plVar3;
            }
          }
          else {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
              cVar1 = *(char *)(plVar5[1] + 0x19);
              plVar4 = (longlong *)plVar5[1];
              plVar3 = plVar5;
            }
          }
        }
      } while (plVar5 != (longlong *)*param_2);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 14392a0c0 FUN_14392a0c0 body=230 status=ok
// SIG undefined FUN_14392a0c0(void)

undefined8 * FUN_14392a0c0(longlong *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_res8;
  byte *local_res18 [2];
  
  puVar3 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar4 = puVar3;
  puVar7 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)(puVar7 + 4);
    lVar9 = (longlong)param_2 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar6 = (uint)pbVar5[lVar9];
      if (bVar2 != uVar6) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar2 - uVar6) < 0) {
      puVar8 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar8 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar4 != puVar3) {
    pbVar5 = param_2;
    do {
      bVar2 = *pbVar5;
      uVar6 = (uint)pbVar5[(longlong)puVar4 + (0x20 - (longlong)param_2)];
      if (bVar2 != uVar6) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    if (-1 < (int)(bVar2 - uVar6)) {
      return puVar4 + 0x24;
    }
  }
  local_res18[0] = param_2;
  lVar9 = FUN_143928940(param_1,&DAT_145c62826,local_res18,&local_res8);
  FUN_143928da0(param_1,&local_res8,puVar4,lVar9 + 0x20,lVar9);
  return (undefined8 *)(local_res8 + 0x120);
}



// FUNCTION 14392a1b0 FUN_14392a1b0 body=499 status=ok
// SIG undefined FUN_14392a1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14392a1b0(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined8 local_280;
  undefined *local_278 [3];
  undefined **local_260 [13];
  undefined8 local_1f8;
  undefined4 local_1f0;
  code *local_1e0;
  undefined **local_178 [12];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_10;
  
  local_280 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_288 = 0;
  strncpy((char *)local_118,param_2,0xff);
  local_19 = 0;
  puVar3 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar10 != puVar3) {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) goto LAB_14392a28d;
  }
  puVar10 = puVar3;
LAB_14392a28d:
  if (puVar10 != puVar3) {
    return puVar10[0x24];
  }
  local_278[0] = &DAT_145af0c78;
  local_278[2] = &DAT_145af0c80;
  local_1e0 = _vftable__exref;
  local_288 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_278,
             (basic_streambuf<char,std::char_traits<char>_> *)local_260);
  *(undefined ***)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4) + -4) =
       *(int *)(local_278[0] + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_260);
  local_260[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_1f8 = 0;
  local_1f0 = 0;
  uVar5 = std::operator<<<std::char_traits<char>_>(local_278 + 2,"Cannot find image attribute \"");
  uVar5 = std::operator<<<std::char_traits<char>_>(uVar5,param_2);
  std::operator<<<std::char_traits<char>_>(uVar5,&DAT_145c62598);
  FUN_143e175c0(local_178,local_278);
  local_178[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_178,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 14392a3b0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<int>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a3f0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<float>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a430 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<double>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a470 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::Chromaticities>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a4b0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a4f0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<float>_>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a530 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Matrix33<float>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a570 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Matrix33<double>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a5b0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Matrix44<float>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a5f0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Matrix44<double>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a630 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Vec2<int>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a670 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Vec2<float>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a6b0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Vec2<double>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a6f0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Vec3<int>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a730 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Vec3<float>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a770 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imath::Vec3<double>_>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a7b0 FUN_14392a7b0 body=117 status=ok
// SIG undefined FUN_14392a7b0(void)

undefined8 * FUN_14392a7b0(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::
             TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
             vftable;
  if (0xf < (ulonglong)param_1[4]) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(param_1 + 1,param_1[1],param_1[4] + 1);
  }
  param_1[4] = 0xf;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_143938770(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a830 FUN_14392a830 body=47 status=ok
// SIG undefined FUN_14392a830(void)

undefined8 FUN_14392a830(undefined8 param_1,uint param_2)

{
  FUN_143929bd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a860 FUN_14392a860 body=104 status=ok
// SIG undefined FUN_14392a860(void)

undefined8 * FUN_14392a860(undefined8 *param_1,uint param_2)

{
  undefined1 local_res8 [8];
  
  *param_1 = Imf::TypedAttribute<Imf::ChannelList>::vftable;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1 + 1,local_res8,*(undefined8 *)param_1[1],(undefined8 *)param_1[1]);
  FMemory::operator_delete(param_1[1]);
  FUN_143938770(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a8d0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::KeyCode>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a910 FUN_14392a910 body=69 status=ok
// SIG undefined FUN_14392a910(void)

undefined8 * FUN_14392a910(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::PreviewImage>::vftable;
  Scaleform::Render::FilterState::GetFilter(param_1 + 1);
  FUN_143938770(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a960 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::Rational>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a9a0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::TileDescription>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392a9e0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::TimeCode>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392aa20 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::Compression>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392aa60 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::Envmap>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392aaa0 `scalar_deleting_destructor' body=57 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FShooterOnlineSearchSettings::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::TypedAttribute<Imf::LineOrder>::vftable;
  FUN_143938770();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14392aae0 _Buy body=98 status=ok
// SIG undefined _Buy(void)

undefined8 std::vector<CefRect,std::allocator<CefRect>_>::_Buy(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    lVar1 = allocator<CefRect>::allocate();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    uVar2 = 1;
    param_1[2] = param_2 * 0x20 + lVar1;
  }
  return uVar2;
}



// FUNCTION 14392ab50 FUN_14392ab50 body=77 status=ok
// SIG undefined FUN_14392ab50(void)

void FUN_14392ab50(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x128);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *(longlong *)lVar1 = lVar1;
  if ((longlong *)(lVar1 + 8) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 8) = lVar1;
  }
  if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 0x10) = lVar1;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 14392aba0 FUN_14392aba0 body=92 status=ok
// SIG undefined FUN_14392aba0(void)

undefined8 * FUN_14392aba0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}



// FUNCTION 14392ac00 allocate body=120 status=ok
// SIG undefined allocate(void)

ulonglong std::allocator<CefRect>::allocate(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 0x20;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = operator_new();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = operator_new(param_2);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 14392ac80 FUN_14392ac80 body=129 status=ok
// SIG undefined FUN_14392ac80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392ac80(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<int>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392ad10 FUN_14392ad10 body=129 status=ok
// SIG undefined FUN_14392ad10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392ad10(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<float>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392ada0 FUN_14392ada0 body=129 status=ok
// SIG undefined FUN_14392ada0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392ada0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<double>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392ae30 FUN_14392ae30 body=129 status=ok
// SIG undefined FUN_14392ae30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392ae30(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::Chromaticities>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392aec0 FUN_14392aec0 body=129 status=ok
// SIG undefined FUN_14392aec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392aec0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392af50 FUN_14392af50 body=129 status=ok
// SIG undefined FUN_14392af50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392af50(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Box<Imath::Vec2<float>_>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392afe0 FUN_14392afe0 body=129 status=ok
// SIG undefined FUN_14392afe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392afe0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Matrix33<float>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b070 FUN_14392b070 body=129 status=ok
// SIG undefined FUN_14392b070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b070(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Matrix33<double>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b100 FUN_14392b100 body=129 status=ok
// SIG undefined FUN_14392b100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b100(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Matrix44<float>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b190 FUN_14392b190 body=129 status=ok
// SIG undefined FUN_14392b190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b190(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Matrix44<double>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b220 FUN_14392b220 body=129 status=ok
// SIG undefined FUN_14392b220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b220(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Vec2<int>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b2b0 FUN_14392b2b0 body=129 status=ok
// SIG undefined FUN_14392b2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b2b0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Vec2<float>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b340 FUN_14392b340 body=129 status=ok
// SIG undefined FUN_14392b340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b340(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Vec2<double>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b3d0 FUN_14392b3d0 body=129 status=ok
// SIG undefined FUN_14392b3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b3d0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Vec3<int>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b460 FUN_14392b460 body=129 status=ok
// SIG undefined FUN_14392b460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b460(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Vec3<float>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b4f0 FUN_14392b4f0 body=129 status=ok
// SIG undefined FUN_14392b4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b4f0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imath::Vec3<double>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b580 FUN_14392b580 body=129 status=ok
// SIG undefined FUN_14392b580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b580(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::
                      TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                      ::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b610 FUN_14392b610 body=129 status=ok
// SIG undefined FUN_14392b610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b610(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::
                      TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
                      ::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b6a0 FUN_14392b6a0 body=129 status=ok
// SIG undefined FUN_14392b6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b6a0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::ChannelList>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b730 FUN_14392b730 body=129 status=ok
// SIG undefined FUN_14392b730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b730(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::KeyCode>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b7c0 FUN_14392b7c0 body=129 status=ok
// SIG undefined FUN_14392b7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b7c0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::PreviewImage>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b850 FUN_14392b850 body=129 status=ok
// SIG undefined FUN_14392b850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b850(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::Rational>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b8e0 FUN_14392b8e0 body=129 status=ok
// SIG undefined FUN_14392b8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b8e0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::TileDescription>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392b970 FUN_14392b970 body=129 status=ok
// SIG undefined FUN_14392b970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392b970(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::TimeCode>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392ba00 FUN_14392ba00 body=129 status=ok
// SIG undefined FUN_14392ba00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392ba00(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::Compression>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392ba90 FUN_14392ba90 body=129 status=ok
// SIG undefined FUN_14392ba90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392ba90(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::Envmap>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392bb20 FUN_14392bb20 body=129 status=ok
// SIG undefined FUN_14392bb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392bb20(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::LineOrder>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392bbb0 SeamlessTravelHandlerForWorld body=25 status=ok
// SIG undefined SeamlessTravelHandlerForWorld(void)

longlong UEngine::SeamlessTravelHandlerForWorld(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14392a1b0(param_1,"channels");
  return lVar1 + 8;
}



// FUNCTION 14392bbd0 SeamlessTravelHandlerForWorld body=25 status=ok
// SIG undefined SeamlessTravelHandlerForWorld(void)

longlong UEngine::SeamlessTravelHandlerForWorld(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14392a1b0(param_1,"compression");
  return lVar1 + 8;
}



// FUNCTION 14392bbf0 FUN_14392bbf0 body=102 status=ok
// SIG undefined FUN_14392bbf0(void)

longlong *
FUN_14392bbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<int>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392bc60 FUN_14392bc60 body=102 status=ok
// SIG undefined FUN_14392bc60(void)

longlong *
FUN_14392bc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<float>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392bcd0 FUN_14392bcd0 body=103 status=ok
// SIG undefined FUN_14392bcd0(void)

longlong *
FUN_14392bcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<double>::vftable;
    plVar1[1] = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392bd40 FUN_14392bd40 body=84 status=ok
// SIG undefined FUN_14392bd40(void)

longlong *
FUN_14392bd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = operator_new(0x28);
  if (lVar1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_143929840(lVar1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_3,param_4,uVar3);
  return plVar2;
}



// FUNCTION 14392bda0 FUN_14392bda0 body=123 status=ok
// SIG undefined FUN_14392bda0(void)

longlong *
FUN_14392bda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0x7fffffff;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0x7fffffff;
    *(undefined4 *)(plVar1 + 2) = 0x80000000;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0x80000000;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392be20 FUN_14392be20 body=123 status=ok
// SIG undefined FUN_14392be20(void)

longlong *
FUN_14392be20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Box<Imath::Vec2<float>_>_>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0x7f7fffff;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0x7f7fffff;
    *(undefined4 *)(plVar1 + 2) = 0xff7fffff;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0xff7fffff;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392bea0 FUN_14392bea0 body=134 status=ok
// SIG undefined FUN_14392bea0(void)

longlong *
FUN_14392bea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x30);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Matrix33<float>_>::vftable;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    *(undefined4 *)(plVar1 + 1) = 0x3f800000;
    *(undefined4 *)(plVar1 + 3) = 0x3f800000;
    *(undefined4 *)(plVar1 + 5) = 0x3f800000;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392bf30 FUN_14392bf30 body=143 status=ok
// SIG undefined FUN_14392bf30(void)

longlong *
FUN_14392bf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x50);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Matrix33<double>_>::vftable;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    plVar1[1] = 0x3ff0000000000000;
    plVar1[5] = 0x3ff0000000000000;
    plVar1[9] = 0x3ff0000000000000;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392bfc0 FUN_14392bfc0 body=84 status=ok
// SIG undefined FUN_14392bfc0(void)

longlong *
FUN_14392bfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = operator_new(0x48);
  if (lVar1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_143929910(lVar1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_3,param_4,uVar3);
  return plVar2;
}



// FUNCTION 14392c020 FUN_14392c020 body=151 status=ok
// SIG undefined FUN_14392c020(void)

longlong *
FUN_14392c020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x88);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Matrix44<double>_>::vftable;
    _guard_xfg_dispatch_icall_nop(plVar1 + 1,0,0x80);
    plVar1[1] = 0x3ff0000000000000;
    plVar1[6] = 0x3ff0000000000000;
    plVar1[0xb] = 0x3ff0000000000000;
    plVar1[0x10] = 0x3ff0000000000000;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c0c0 FUN_14392c0c0 body=95 status=ok
// SIG undefined FUN_14392c0c0(void)

longlong *
FUN_14392c0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Vec2<int>_>::vftable;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c120 FUN_14392c120 body=95 status=ok
// SIG undefined FUN_14392c120(void)

longlong *
FUN_14392c120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Vec2<float>_>::vftable;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c180 FUN_14392c180 body=95 status=ok
// SIG undefined FUN_14392c180(void)

longlong *
FUN_14392c180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Vec2<double>_>::vftable;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c1e0 FUN_14392c1e0 body=95 status=ok
// SIG undefined FUN_14392c1e0(void)

longlong *
FUN_14392c1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Vec3<int>_>::vftable;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c240 FUN_14392c240 body=95 status=ok
// SIG undefined FUN_14392c240(void)

longlong *
FUN_14392c240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Vec3<float>_>::vftable;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c2a0 FUN_14392c2a0 body=95 status=ok
// SIG undefined FUN_14392c2a0(void)

longlong *
FUN_14392c2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x20);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imath::Vec3<double>_>::vftable;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c300 FUN_14392c300 body=115 status=ok
// SIG undefined FUN_14392c300(void)

longlong *
FUN_14392c300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x28);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)
              Imf::
              TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    plVar1[4] = 0xf;
    plVar1[3] = 0;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c380 FUN_14392c380 body=110 status=ok
// SIG undefined FUN_14392c380(void)

longlong *
FUN_14392c380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x20);
  if (plVar1 != (longlong *)0x0) {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)
              Imf::
              TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
              ::vftable;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c3f0 FUN_14392c3f0 body=129 status=ok
// SIG undefined FUN_14392c3f0(void)

longlong *
FUN_14392c3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::ChannelList>::vftable;
    plVar1[1] = 0;
    plVar1[2] = 0;
    lVar2 = FUN_143925ae0(plVar1 + 1);
    plVar1[1] = lVar2;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar3);
  return plVar1;
}



// FUNCTION 14392c480 FUN_14392c480 body=146 status=ok
// SIG undefined FUN_14392c480(void)

longlong * FUN_14392c480(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x28);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::KeyCode>::vftable;
    FUN_143939bc0(plVar1 + 1,0,0,0,0,0,4,0x40,uVar2);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 14392c520 FUN_14392c520 body=114 status=ok
// SIG undefined FUN_14392c520(void)

longlong * FUN_14392c520(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::PreviewImage>::vftable;
    FUN_14393b9a0(plVar1 + 1,0,0,0,uVar2);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 14392c5a0 FUN_14392c5a0 body=109 status=ok
// SIG undefined FUN_14392c5a0(void)

longlong *
FUN_14392c5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::Rational>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c610 FUN_14392c610 body=117 status=ok
// SIG undefined FUN_14392c610(void)

longlong *
FUN_14392c610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::TileDescription>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0x20;
    *(undefined8 *)((longlong)plVar1 + 0xc) = 0x20;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c690 FUN_14392c690 body=106 status=ok
// SIG undefined FUN_14392c690(void)

longlong *
FUN_14392c690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::TimeCode>::vftable;
    FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping(plVar1 + 1);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c700 FUN_14392c700 body=102 status=ok
// SIG undefined FUN_14392c700(void)

longlong *
FUN_14392c700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::Compression>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c770 FUN_14392c770 body=102 status=ok
// SIG undefined FUN_14392c770(void)

longlong *
FUN_14392c770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::Envmap>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c7e0 FUN_14392c7e0 body=102 status=ok
// SIG undefined FUN_14392c7e0(void)

longlong *
FUN_14392c7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)operator_new(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_143938760(plVar1);
    *plVar1 = (longlong)Imf::TypedAttribute<Imf::LineOrder>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,*plVar1,param_4,uVar2);
  return plVar1;
}



// FUNCTION 14392c850 FUN_14392c850 body=29 status=ok
// SIG undefined FUN_14392c850(void)

void FUN_14392c850(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392ac80(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 14392c870 FUN_14392c870 body=29 status=ok
// SIG undefined FUN_14392c870(void)

void FUN_14392c870(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392ad10(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 14392c890 FUN_14392c890 body=31 status=ok
// SIG undefined FUN_14392c890(void)

void FUN_14392c890(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392ada0(param_2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
  return;
}



// FUNCTION 14392c8b0 FUN_14392c8b0 body=77 status=ok
// SIG undefined FUN_14392c8b0(void)

void FUN_14392c8b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392ae30(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
  return;
}



// FUNCTION 14392c900 FUN_14392c900 body=47 status=ok
// SIG undefined FUN_14392c900(void)

void FUN_14392c900(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392aec0(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
  return;
}



// FUNCTION 14392c930 FUN_14392c930 body=47 status=ok
// SIG undefined FUN_14392c930(void)

void FUN_14392c930(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392af50(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
  return;
}



// FUNCTION 14392c960 FUN_14392c960 body=45 status=ok
// SIG undefined FUN_14392c960(void)

void FUN_14392c960(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14392afe0(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
  return;
}



// FUNCTION 14392c990 FUN_14392c990 body=65 status=ok
// SIG undefined FUN_14392c990(void)

void FUN_14392c990(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14392b070(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
  return;
}



// FUNCTION 14392c9e0 FUN_14392c9e0 body=131 status=ok
// SIG undefined FUN_14392c9e0(void)

void FUN_14392c9e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b100(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar1 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar1 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar1 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar1 + 0x44);
  return;
}



// FUNCTION 14392ca70 FUN_14392ca70 body=160 status=ok
// SIG undefined FUN_14392ca70(void)

void FUN_14392ca70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b190(param_2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x80);
  return;
}



// FUNCTION 14392cb10 FUN_14392cb10 body=35 status=ok
// SIG undefined FUN_14392cb10(void)

void FUN_14392cb10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b220(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  return;
}



// FUNCTION 14392cb40 FUN_14392cb40 body=35 status=ok
// SIG undefined FUN_14392cb40(void)

void FUN_14392cb40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b2b0(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  return;
}



// FUNCTION 14392cb70 FUN_14392cb70 body=39 status=ok
// SIG undefined FUN_14392cb70(void)

void FUN_14392cb70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b340(param_2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  return;
}



// FUNCTION 14392cba0 FUN_14392cba0 body=41 status=ok
// SIG undefined FUN_14392cba0(void)

void FUN_14392cba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b3d0(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  return;
}



// FUNCTION 14392cbd0 FUN_14392cbd0 body=41 status=ok
// SIG undefined FUN_14392cbd0(void)

void FUN_14392cbd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b460(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  return;
}



// FUNCTION 14392cc00 FUN_14392cc00 body=47 status=ok
// SIG undefined FUN_14392cc00(void)

void FUN_14392cc00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b4f0(param_2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
  return;
}



// FUNCTION 14392cc30 FUN_14392cc30 body=56 status=ok
// SIG undefined FUN_14392cc30(void)

void FUN_14392cc30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b580(param_2);
  if (param_1 + 8 != lVar1 + 8) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 8,lVar1 + 8,0,0xffffffffffffffff);
    return;
  }
  return;
}



// FUNCTION 14392cc70 FUN_14392cc70 body=35 status=ok
// SIG undefined FUN_14392cc70(void)

void FUN_14392cc70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b610(param_2);
  FUN_143929e00(param_1 + 8,lVar1 + 8);
  return;
}



// FUNCTION 14392cca0 FUN_14392cca0 body=70 status=ok
// SIG undefined FUN_14392cca0(void)

void FUN_14392cca0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res8;
  
  lVar1 = FUN_14392b6a0(param_2);
  param_1 = param_1 + 8;
  if (param_1 != lVar1 + 8) {
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::clear(param_1);
    FUN_143925360(param_1,lVar1 + 8,local_res8);
  }
  return;
}



// FUNCTION 14392ccf0 FUN_14392ccf0 body=35 status=ok
// SIG undefined FUN_14392ccf0(void)

void FUN_14392ccf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b730(param_2);
  FUN_143939dc0(param_1 + 8,lVar1 + 8);
  return;
}



// FUNCTION 14392cd20 FUN_14392cd20 body=35 status=ok
// SIG undefined FUN_14392cd20(void)

void FUN_14392cd20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b7c0(param_2);
  FUN_14393bad0(param_1 + 8,lVar1 + 8);
  return;
}



// FUNCTION 14392cd50 FUN_14392cd50 body=31 status=ok
// SIG undefined FUN_14392cd50(void)

void FUN_14392cd50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b850(param_2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
  return;
}



// FUNCTION 14392cd70 FUN_14392cd70 body=31 status=ok
// SIG undefined FUN_14392cd70(void)

void FUN_14392cd70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14392b8e0(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// FUNCTION 14392cd90 FUN_14392cd90 body=35 status=ok
// SIG undefined FUN_14392cd90(void)

void FUN_14392cd90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392b970(param_2);
  TWeakObjectPtr<UObject,FWeakObjectPtr>::TWeakObjectPtr<UObject,FWeakObjectPtr>
            (param_1 + 8,lVar1 + 8);
  return;
}



// FUNCTION 14392cdc0 FUN_14392cdc0 body=29 status=ok
// SIG undefined FUN_14392cdc0(void)

void FUN_14392cdc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392ba00(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 14392cde0 FUN_14392cde0 body=29 status=ok
// SIG undefined FUN_14392cde0(void)

void FUN_14392cde0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392ba90(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 14392ce00 FUN_14392ce00 body=29 status=ok
// SIG undefined FUN_14392ce00(void)

void FUN_14392ce00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14392bb20(param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 14392ce20 SeamlessTravelHandlerForWorld body=25 status=ok
// SIG undefined SeamlessTravelHandlerForWorld(void)

longlong UEngine::SeamlessTravelHandlerForWorld(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14392a1b0(param_1,"dataWindow");
  return lVar1 + 8;
}



// FUNCTION 14392ce40 deallocate body=106 status=ok
// SIG undefined deallocate(void)

void std::allocator<CefRect>::deallocate(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 << 5) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 14392ceb0 FUN_14392ceb0 body=655 status=ok
// SIG undefined FUN_14392ceb0(void)

void FUN_14392ceb0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 in_R9;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_143938760(&local_30,param_2,param_3,in_R9,0xfffffffffffffffe);
  local_30 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
  local_28 = (undefined8 *)*param_2;
  local_20 = param_2[1];
  FUN_14392d140(param_1,"displayWindow",&local_30);
  local_30 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
  FUN_143938770(&local_30);
  FUN_143938760(&local_30);
  local_30 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
  local_28._0_4_ = *param_3;
  local_28._4_4_ = param_3[1];
  local_20 = *(undefined8 *)(param_3 + 2);
  FUN_14392d140(param_1,"dataWindow",&local_30);
  local_30 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
  FUN_143938770(&local_30);
  FUN_143938760(&local_30);
  local_30 = Imf::TypedAttribute<float>::vftable;
  local_28 = (undefined8 *)CONCAT44(local_28._4_4_,param_4);
  FUN_14392d140(param_1,"pixelAspectRatio",&local_30);
  local_30 = Imf::TypedAttribute<float>::vftable;
  FUN_143938770(&local_30);
  FUN_143938760(&local_30);
  local_30 = Imf::TypedAttribute<Imath::Vec2<float>_>::vftable;
  local_28._0_4_ = *param_5;
  local_28._4_4_ = param_5[1];
  FUN_14392d140(param_1,"screenWindowCenter",&local_30);
  local_30 = Imf::TypedAttribute<Imath::Vec2<float>_>::vftable;
  FUN_143938770(&local_30);
  FUN_143938760(&local_30);
  local_30 = Imf::TypedAttribute<float>::vftable;
  local_28._0_4_ = param_6;
  FUN_14392d140(param_1,"screenWindowWidth",&local_30);
  local_30 = Imf::TypedAttribute<float>::vftable;
  FUN_143938770(&local_30);
  FUN_143938760(&local_30);
  local_30 = Imf::TypedAttribute<Imf::LineOrder>::vftable;
  local_28._0_4_ = param_7;
  FUN_14392d140(param_1,"lineOrder",&local_30);
  local_30 = Imf::TypedAttribute<Imf::LineOrder>::vftable;
  FUN_143938770(&local_30);
  FUN_143938760(&local_30);
  local_30 = Imf::TypedAttribute<Imf::Compression>::vftable;
  local_28 = (undefined8 *)CONCAT44(local_28._4_4_,param_8);
  FUN_14392d140(param_1,"compression",&local_30);
  local_30 = Imf::TypedAttribute<Imf::Compression>::vftable;
  FUN_143938770(&local_30);
  FUN_143938760(&local_30);
  local_30 = Imf::TypedAttribute<Imf::ChannelList>::vftable;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  local_28 = (undefined8 *)FUN_143925ae0(&local_28);
  FUN_14392d140(param_1,"channels",&local_30);
  local_30 = Imf::TypedAttribute<Imf::ChannelList>::vftable;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(&local_28,&param_5,*local_28,local_28);
  FMemory::operator_delete(local_28);
  FUN_143938770(&local_30);
  return;
}



// FUNCTION 14392d140 FUN_14392d140 body=1009 status=ok
// SIG undefined FUN_14392d140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392d140(longlong *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  undefined8 local_410;
  undefined *local_408 [3];
  undefined **local_3f0 [13];
  undefined8 local_388;
  undefined4 local_380;
  basic_ios<char,std::char_traits<char>_> local_370 [100];
  int iStack_30c;
  undefined *local_308 [3];
  undefined **local_2f0 [13];
  undefined8 local_288;
  undefined4 local_280;
  code *local_270;
  undefined **local_208 [12];
  undefined **local_1a8 [12];
  byte local_148 [255];
  undefined1 local_49;
  ulonglong local_38;
  
  local_410 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  uVar5 = local_418 >> 0x20;
  local_418 = local_418 & 0xffffffff00000000;
  if (*param_2 == '\0') {
    local_308[0] = &DAT_145af0c78;
    local_308[2] = &DAT_145af0c80;
    local_270 = _vftable__exref;
    local_418 = CONCAT44((int)uVar5,1);
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_308,
               (basic_streambuf<char,std::char_traits<char>_> *)local_2f0);
    *(undefined ***)((longlong)local_308 + (longlong)*(int *)(local_308[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_30c + (longlong)*(int *)(local_308[0] + 4)) =
         *(int *)(local_308[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_2f0);
    local_2f0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_288 = 0;
    local_280 = 0;
    std::operator<<<std::char_traits<char>_>
              (local_308 + 2,"Image attribute name cannot be an empty string.");
    FUN_143e175c0(local_1a8,local_308);
    local_1a8[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_1a8,(ThrowInfo *)&DAT_1461db4d8);
  }
  strncpy((char *)local_148,param_2,0xff);
  local_49 = 0;
  puVar7 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar7[1] + 0x19);
  puVar15 = puVar7;
  puVar14 = (undefined8 *)puVar7[1];
  while (cVar1 == '\0') {
    pbVar12 = (byte *)(puVar14 + 4);
    lVar8 = -(longlong)pbVar12;
    do {
      bVar2 = *pbVar12;
      uVar13 = (uint)pbVar12[(longlong)(local_148 + lVar8)];
      if (bVar2 != uVar13) break;
      pbVar12 = pbVar12 + 1;
    } while (uVar13 != 0);
    if ((int)(bVar2 - uVar13) < 0) {
      puVar16 = (undefined8 *)puVar14[2];
      puVar14 = puVar15;
    }
    else {
      puVar16 = (undefined8 *)*puVar14;
    }
    puVar15 = puVar14;
    puVar14 = puVar16;
    cVar1 = *(char *)((longlong)puVar16 + 0x19);
  }
  if (puVar15 != puVar7) {
    pbVar12 = local_148;
    lVar8 = 0x20 - (longlong)pbVar12;
    do {
      bVar2 = *pbVar12;
      uVar13 = (uint)pbVar12[(longlong)puVar15 + lVar8];
      if (bVar2 != uVar13) break;
      pbVar12 = pbVar12 + 1;
    } while (uVar13 != 0);
    if (-1 < (int)(bVar2 - uVar13)) goto LAB_14392d31d;
  }
  puVar15 = puVar7;
LAB_14392d31d:
  if (puVar15 == puVar7) {
    uVar6 = (**(code **)(*param_3 + 0x10))();
    local_418 = uVar6;
    strncpy((char *)local_148,param_2,0xff);
    local_49 = 0;
    puVar7 = (undefined8 *)FUN_14392a0c0(param_1,local_148);
    *puVar7 = uVar6;
  }
  else {
    plVar4 = (longlong *)puVar15[0x24];
    lVar8 = (**(code **)(*param_3 + 8))(param_3);
    pcVar9 = (char *)(**(code **)(*plVar4 + 8))(plVar4);
    lVar8 = lVar8 - (longlong)pcVar9;
    do {
      cVar1 = *pcVar9;
      cVar3 = pcVar9[lVar8];
      if (cVar1 != cVar3) break;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    if (cVar1 != cVar3) {
      local_408[0] = &DAT_145af0c78;
      local_408[2] = &DAT_145af0c80;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_370);
      local_418 = CONCAT44(local_418._4_4_,2);
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_408,
                 (basic_streambuf<char,std::char_traits<char>_> *)local_3f0);
      *(undefined ***)((longlong)local_408 + (longlong)*(int *)(local_408[0] + 4)) =
           std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)local_408 + (longlong)*(int *)(local_408[0] + 4) + -4) =
           *(int *)(local_408[0] + 4) + -0x98;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)local_3f0);
      local_3f0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      local_388 = 0;
      local_380 = 0;
      uVar6 = (**(code **)(*(longlong *)puVar15[0x24] + 8))();
      uVar10 = (**(code **)(*param_3 + 8))(param_3);
      uVar11 = std::operator<<<std::char_traits<char>_>
                         (local_408 + 2,"Cannot assign a value of type \"");
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar11,uVar10);
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,"\" to image attribute \"");
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,param_2);
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,"\" of type \"");
      uVar6 = std::operator<<<std::char_traits<char>_>(uVar10,uVar6);
      std::operator<<<std::char_traits<char>_>(uVar6,&DAT_145c62598);
      FUN_143e175c0(local_208,local_408);
      local_208[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_208,(ThrowInfo *)&DAT_1461db640);
    }
    uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
    puVar7 = (undefined8 *)puVar15[0x24];
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    puVar15[0x24] = uVar6;
  }
  return;
}



// FUNCTION 14392d540 SeamlessTravelHandlerForWorld body=25 status=ok
// SIG undefined SeamlessTravelHandlerForWorld(void)

longlong UEngine::SeamlessTravelHandlerForWorld(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14392a1b0(param_1,"lineOrder");
  return lVar1 + 8;
}



// FUNCTION 14392d560 FUN_14392d560 body=76 status=ok
// SIG undefined FUN_14392d560(void)

undefined8 * FUN_14392d560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<int>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return puVar1;
}



// FUNCTION 14392d5b0 FUN_14392d5b0 body=76 status=ok
// SIG undefined FUN_14392d5b0(void)

undefined8 * FUN_14392d5b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<float>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return puVar1;
}



// FUNCTION 14392d600 FUN_14392d600 body=77 status=ok
// SIG undefined FUN_14392d600(void)

undefined8 * FUN_14392d600(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<double>::vftable;
    puVar1[1] = 0;
  }
  return puVar1;
}



// FUNCTION 14392d650 FUN_14392d650 body=51 status=ok
// SIG undefined FUN_14392d650(void)

undefined8 FUN_14392d650(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = operator_new(0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143929840(lVar1);
  }
  return uVar2;
}



// FUNCTION 14392d690 FUN_14392d690 body=97 status=ok
// SIG undefined FUN_14392d690(void)

undefined8 * FUN_14392d690(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<int>_>_>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x7fffffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x7fffffff;
    *(undefined4 *)(puVar1 + 2) = 0x80000000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
  }
  return puVar1;
}



// FUNCTION 14392d700 FUN_14392d700 body=97 status=ok
// SIG undefined FUN_14392d700(void)

undefined8 * FUN_14392d700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Box<Imath::Vec2<float>_>_>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x7f7fffff;
    *(undefined4 *)(puVar1 + 2) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xff7fffff;
  }
  return puVar1;
}



// FUNCTION 14392d770 FUN_14392d770 body=108 status=ok
// SIG undefined FUN_14392d770(void)

undefined8 * FUN_14392d770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Matrix33<float>_>::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 1) = 0x3f800000;
    *(undefined4 *)(puVar1 + 3) = 0x3f800000;
    *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  }
  return puVar1;
}



// FUNCTION 14392d7e0 FUN_14392d7e0 body=117 status=ok
// SIG undefined FUN_14392d7e0(void)

undefined8 * FUN_14392d7e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Matrix33<double>_>::vftable;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0x3ff0000000000000;
    puVar1[5] = 0x3ff0000000000000;
    puVar1[9] = 0x3ff0000000000000;
  }
  return puVar1;
}



// FUNCTION 14392d860 FUN_14392d860 body=51 status=ok
// SIG undefined FUN_14392d860(void)

undefined8 FUN_14392d860(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = operator_new(0x48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143929910(lVar1);
  }
  return uVar2;
}



// FUNCTION 14392d8a0 FUN_14392d8a0 body=125 status=ok
// SIG undefined FUN_14392d8a0(void)

undefined8 * FUN_14392d8a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Matrix44<double>_>::vftable;
    _guard_xfg_dispatch_icall_nop(puVar1 + 1,0,0x80);
    puVar1[1] = 0x3ff0000000000000;
    puVar1[6] = 0x3ff0000000000000;
    puVar1[0xb] = 0x3ff0000000000000;
    puVar1[0x10] = 0x3ff0000000000000;
  }
  return puVar1;
}



// FUNCTION 14392d920 FUN_14392d920 body=69 status=ok
// SIG undefined FUN_14392d920(void)

undefined8 * FUN_14392d920(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Vec2<int>_>::vftable;
  }
  return puVar1;
}



// FUNCTION 14392d970 FUN_14392d970 body=69 status=ok
// SIG undefined FUN_14392d970(void)

undefined8 * FUN_14392d970(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Vec2<float>_>::vftable;
  }
  return puVar1;
}



// FUNCTION 14392d9c0 FUN_14392d9c0 body=69 status=ok
// SIG undefined FUN_14392d9c0(void)

undefined8 * FUN_14392d9c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Vec2<double>_>::vftable;
  }
  return puVar1;
}



// FUNCTION 14392da10 FUN_14392da10 body=69 status=ok
// SIG undefined FUN_14392da10(void)

undefined8 * FUN_14392da10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Vec3<int>_>::vftable;
  }
  return puVar1;
}



// FUNCTION 14392da60 FUN_14392da60 body=69 status=ok
// SIG undefined FUN_14392da60(void)

undefined8 * FUN_14392da60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Vec3<float>_>::vftable;
  }
  return puVar1;
}



// FUNCTION 14392dab0 FUN_14392dab0 body=69 status=ok
// SIG undefined FUN_14392dab0(void)

undefined8 * FUN_14392dab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imath::Vec3<double>_>::vftable;
  }
  return puVar1;
}



// FUNCTION 14392db00 FUN_14392db00 body=89 status=ok
// SIG undefined FUN_14392db00(void)

undefined8 * FUN_14392db00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::
              TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    puVar1[4] = 0xf;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return puVar1;
}



// FUNCTION 14392db60 FUN_14392db60 body=81 status=ok
// SIG undefined FUN_14392db60(void)

undefined8 * FUN_14392db60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143938760(puVar1);
    *puVar1 = Imf::
              TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
              ::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return puVar1;
}



// FUNCTION 14392dbc0 FUN_14392dbc0 body=103 status=ok
// SIG undefined FUN_14392dbc0(void)

undefined8 * FUN_14392dbc0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::ChannelList>::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar2 = FUN_143925ae0(puVar1 + 1);
    puVar1[1] = uVar2;
  }
  return puVar1;
}



// FUNCTION 14392dc30 FUN_14392dc30 body=120 status=ok
// SIG undefined FUN_14392dc30(void)

undefined8 * FUN_14392dc30(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::KeyCode>::vftable;
    FUN_143939bc0(puVar1 + 1,0,0,0,0,0,4,0x40,uVar2);
  }
  return puVar1;
}



// FUNCTION 14392dcb0 FUN_14392dcb0 body=88 status=ok
// SIG undefined FUN_14392dcb0(void)

undefined8 * FUN_14392dcb0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::PreviewImage>::vftable;
    FUN_14393b9a0(puVar1 + 1,0,0,0,uVar2);
  }
  return puVar1;
}



// FUNCTION 14392dd10 FUN_14392dd10 body=83 status=ok
// SIG undefined FUN_14392dd10(void)

undefined8 * FUN_14392dd10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::Rational>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  }
  return puVar1;
}



// FUNCTION 14392dd70 FUN_14392dd70 body=91 status=ok
// SIG undefined FUN_14392dd70(void)

undefined8 * FUN_14392dd70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::TileDescription>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  }
  return puVar1;
}



// FUNCTION 14392ddd0 FUN_14392ddd0 body=80 status=ok
// SIG undefined FUN_14392ddd0(void)

undefined8 * FUN_14392ddd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::TimeCode>::vftable;
    FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping(puVar1 + 1);
  }
  return puVar1;
}



// FUNCTION 14392de20 FUN_14392de20 body=76 status=ok
// SIG undefined FUN_14392de20(void)

undefined8 * FUN_14392de20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::Compression>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return puVar1;
}



// FUNCTION 14392de70 FUN_14392de70 body=76 status=ok
// SIG undefined FUN_14392de70(void)

undefined8 * FUN_14392de70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::Envmap>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return puVar1;
}



// FUNCTION 14392dec0 FUN_14392dec0 body=76 status=ok
// SIG undefined FUN_14392dec0(void)

undefined8 * FUN_14392dec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_143938760(puVar1);
    *puVar1 = Imf::TypedAttribute<Imf::LineOrder>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
  }
  return puVar1;
}



// FUNCTION 14392df10 FUN_14392df10 body=1570 status=ok
// SIG undefined FUN_14392df10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392df10(longlong *param_1,longlong *param_2,uint *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined1 auStack_808 [32];
  uint local_7e8 [2];
  longlong *local_7e0;
  undefined8 local_7d8;
  int iStack_7cc;
  undefined *local_7c8 [3];
  undefined **local_7b0 [13];
  undefined8 local_748;
  undefined4 local_740;
  basic_ios<char,std::char_traits<char>_> local_730 [100];
  int iStack_6cc;
  undefined *local_6c8 [3];
  undefined **local_6b0 [13];
  undefined8 local_648;
  undefined4 local_640;
  basic_ios<char,std::char_traits<char>_> local_630 [104];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [240];
  undefined **local_4c8 [12];
  undefined **local_468 [12];
  undefined **local_408 [12];
  undefined **local_3a8 [12];
  byte local_348 [255];
  undefined1 local_249;
  char local_248 [256];
  char local_148 [272];
  ulonglong local_38;
  
  local_7d8 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_808;
  local_7e8[0] = 0;
  (**(code **)(*param_2 + 0x10))(param_2,local_7e8,4);
  uVar3 = local_7e8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_7e8,4);
  *param_3 = local_7e8[0];
  if (uVar3 != 0x1312f76) {
    FUN_143e179e0(local_468,"File is not an image file.");
    local_468[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_468,(ThrowInfo *)&DAT_1461db5c8);
  }
  if ((char)local_7e8[0] != '\x02') {
    local_7c8[0] = &DAT_145af0c78;
    local_7c8[2] = &DAT_145af0c80;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_730)
    ;
    local_7e8[0] = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_7c8,
               (basic_streambuf<char,std::char_traits<char>_> *)local_7b0);
    *(undefined ***)((longlong)local_7c8 + (longlong)*(int *)(local_7c8[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_7cc + (longlong)*(int *)(local_7c8[0] + 4)) =
         *(int *)(local_7c8[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_7b0);
    local_7b0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_748 = 0;
    local_740 = 0;
    uVar3 = *param_3;
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(local_7c8 + 2,"Cannot read version ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,(uint)(byte)uVar3);
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>
                       (pbVar6," image files.  Current file format version is ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,2);
    std::operator<<<std::char_traits<char>_>(pbVar6,&DAT_145af796c);
    FUN_143e175c0(local_408,local_7c8);
    local_408[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_408,(ThrowInfo *)&DAT_1461db5c8);
  }
  if ((local_7e8[0] & 0xfffff900) != 0) {
    local_6c8[0] = &DAT_145af0c78;
    local_6c8[2] = &DAT_145af0c80;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_630)
    ;
    local_7e8[0] = 2;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_6c8,
               (basic_streambuf<char,std::char_traits<char>_> *)local_6b0);
    *(undefined ***)((longlong)local_6c8 + (longlong)*(int *)(local_6c8[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_6cc + (longlong)*(int *)(local_6c8[0] + 4)) =
         *(int *)(local_6c8[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_6b0);
    local_6b0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_648 = 0;
    local_640 = 0;
    std::operator<<<std::char_traits<char>_>
              (local_6c8 + 2,
               "The file format version number\'s flag field contains unrecognized flags.");
    FUN_143e175c0(local_3a8,local_6c8);
    local_3a8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_3a8,(ThrowInfo *)&DAT_1461db5c8);
  }
  do {
    pcVar12 = local_148;
    iVar15 = 0xff;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,pcVar12,1);
      if (*pcVar12 == '\0') break;
      pcVar12 = pcVar12 + 1;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    if (local_148[0] == '\0') {
      return;
    }
    FUN_143929340(local_148,"attribute name");
    pcVar12 = local_248;
    iVar15 = 0xff;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,pcVar12,1);
      if (*pcVar12 == '\0') break;
      pcVar12 = pcVar12 + 1;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
    FUN_143929340(local_248,"attribute type name");
    (**(code **)(*param_2 + 0x10))(param_2,local_7e8,4);
    uVar3 = local_7e8[0];
    strncpy((char *)local_348,local_148,0xff);
    local_249 = 0;
    puVar9 = (undefined8 *)*param_1;
    cVar4 = *(char *)((longlong)puVar9[1] + 0x19);
    puVar14 = puVar9;
    puVar13 = (undefined8 *)puVar9[1];
    while (cVar4 == '\0') {
      pbVar10 = (byte *)(puVar13 + 4);
      lVar2 = -(longlong)pbVar10;
      do {
        bVar1 = *pbVar10;
        uVar11 = (uint)pbVar10[(longlong)(local_348 + lVar2)];
        if (bVar1 != uVar11) break;
        pbVar10 = pbVar10 + 1;
      } while (uVar11 != 0);
      if ((int)(bVar1 - uVar11) < 0) {
        puVar16 = (undefined8 *)puVar13[2];
        puVar13 = puVar14;
      }
      else {
        puVar16 = (undefined8 *)*puVar13;
      }
      puVar14 = puVar13;
      puVar13 = puVar16;
      cVar4 = *(char *)((longlong)puVar16 + 0x19);
    }
    if (puVar14 == puVar9) {
LAB_14392e39b:
      puVar14 = puVar9;
    }
    else {
      pbVar10 = local_348;
      lVar2 = 0x20 - (longlong)pbVar10;
      do {
        bVar1 = *pbVar10;
        uVar11 = (uint)pbVar10[(longlong)puVar14 + lVar2];
        if (bVar1 != uVar11) break;
        pbVar10 = pbVar10 + 1;
      } while (uVar11 != 0);
      if ((int)(bVar1 - uVar11) < 0) goto LAB_14392e39b;
    }
    if (puVar14 == puVar9) {
      cVar4 = FUN_143938860(local_248);
      if (cVar4 == '\0') {
        local_7e0 = (longlong *)operator_new(0x20);
        if (local_7e0 == (longlong *)0x0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)FUN_14393b510(local_7e0,local_248);
        }
      }
      else {
        plVar8 = (longlong *)FUN_143938930(local_248);
      }
      local_7e0 = plVar8;
      (**(code **)(*plVar8 + 0x20))(plVar8,param_2,uVar3,*param_3);
      strncpy((char *)local_348,local_148,0xff);
      local_249 = 0;
      puVar9 = (undefined8 *)FUN_14392a0c0(param_1,local_348);
      *puVar9 = plVar8;
    }
    else {
      pcVar12 = (char *)(**(code **)(*(longlong *)puVar14[0x24] + 8))();
      iVar15 = strncmp(pcVar12,local_248,0x100);
      if (iVar15 != 0) {
        FUN_1439299f0(local_5c8,3,1);
        uVar7 = std::operator<<<std::char_traits<char>_>
                          (local_5b8,"Unexpected type for image attribute \"");
        uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_148);
        std::operator<<<std::char_traits<char>_>(uVar7,&DAT_145c62598);
        FUN_143e175c0(local_4c8,local_5c8);
        local_4c8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(local_4c8,(ThrowInfo *)&DAT_1461db5c8);
      }
      (**(code **)(*(longlong *)puVar14[0x24] + 0x20))
                ((longlong *)puVar14[0x24],param_2,uVar3,*param_3);
    }
  } while( true );
}



// FUNCTION 14392e540 readValueFrom body=76 status=ok
// SIG undefined readValueFrom(void)

void Imf_2_3::TypedAttribute<int>::readValueFrom(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [8];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  return;
}



// FUNCTION 14392e590 readValueFrom body=88 status=ok
// SIG undefined readValueFrom(void)

void Imf_2_3::TypedAttribute<float>::readValueFrom(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [8];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  return;
}



// FUNCTION 14392e5f0 FUN_14392e5f0 body=15 status=ok
// SIG undefined FUN_14392e5f0(void)

void FUN_14392e5f0(longlong param_1,undefined8 param_2)

{
  FUN_143929700(param_2,param_1 + 8);
  return;
}



// FUNCTION 14392e600 FUN_14392e600 body=3348 status=ok
// SIG undefined FUN_14392e600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14392e600(undefined8 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  basic_ostream<char,std::char_traits<char>_> *pbVar10;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar11;
  longlong lVar12;
  uint *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined1 auStack_ec8 [32];
  longlong *local_ea8;
  undefined1 local_ea0 [8];
  undefined8 local_e98;
  undefined1 local_e88 [16];
  undefined1 local_e78 [240];
  undefined1 local_d88 [16];
  undefined1 local_d78 [240];
  undefined1 local_c88 [16];
  undefined1 local_c78 [240];
  undefined1 local_b88 [16];
  undefined1 local_b78 [240];
  undefined1 local_a88 [16];
  undefined1 local_a78 [240];
  undefined1 local_988 [16];
  undefined1 local_978 [240];
  undefined1 local_888 [16];
  undefined1 local_878 [240];
  undefined1 local_788 [16];
  undefined1 local_778 [240];
  undefined1 local_688 [16];
  undefined1 local_678 [240];
  undefined1 local_588 [16];
  undefined1 local_578 [240];
  undefined1 local_488 [16];
  undefined1 local_478 [240];
  undefined1 local_388 [16];
  undefined1 local_378 [240];
  undefined1 local_288 [16];
  undefined1 local_278 [240];
  undefined1 local_188 [16];
  undefined1 local_178 [240];
  undefined **local_88 [12];
  ulonglong local_28;
  
  local_e98 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_ec8;
  lVar9 = FUN_14392a1b0(param_1,"displayWindow");
  if (*(int *)(lVar9 + 8) <= *(int *)(lVar9 + 0x10)) {
    if ((((*(int *)(lVar9 + 0xc) <= *(int *)(lVar9 + 0x14)) && (-0x3fffffff < *(int *)(lVar9 + 8)))
        && (-0x3fffffff < *(int *)(lVar9 + 0xc))) &&
       ((*(int *)(lVar9 + 0x10) < 0x3fffffff && (*(int *)(lVar9 + 0x14) < 0x3fffffff)))) {
      lVar9 = FUN_14392a1b0(param_1,"dataWindow");
      iVar1 = *(int *)(lVar9 + 8);
      iVar2 = *(int *)(lVar9 + 0x10);
      if (iVar1 <= iVar2) {
        iVar3 = *(int *)(lVar9 + 0xc);
        iVar4 = *(int *)(lVar9 + 0x14);
        if (((iVar3 <= iVar4) && (-0x3fffffff < iVar1)) &&
           ((-0x3fffffff < iVar3 && ((iVar2 < 0x3fffffff && (iVar4 < 0x3fffffff)))))) {
          if ((0 < DAT_146b95d34) && (DAT_146b95d34 < (iVar2 - iVar1) + 1)) {
            FUN_1439299f0(local_388,3,1);
            pbVar10 = (basic_ostream<char,std::char_traits<char>_> *)
                      std::operator<<<std::char_traits<char>_>
                                (local_378,
                                 "The width of the data window exceeds the maximum width of ");
            pbVar11 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                (pbVar10,DAT_146b95d34);
            std::operator<<<std::char_traits<char>_>(pbVar11,"pixels.");
            FUN_143e175c0(local_88,local_388);
            local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
            _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
          }
          if ((0 < DAT_146b95d38) && (DAT_146b95d38 < (iVar4 - iVar3) + 1)) {
            FUN_1439299f0(local_b88,3,1);
            pbVar10 = (basic_ostream<char,std::char_traits<char>_> *)
                      std::operator<<<std::char_traits<char>_>
                                (local_b78,
                                 "The width of the data window exceeds the maximum width of ");
            pbVar11 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                (pbVar10,DAT_146b95d38);
            std::operator<<<std::char_traits<char>_>(pbVar11,"pixels.");
            FUN_143e175c0(local_88,local_b88);
            local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
            _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
          }
          lVar12 = FUN_14392a1b0(param_1,"pixelAspectRatio");
          if ((*(float *)(lVar12 + 8) < 1e-06) || (1e+06 < *(float *)(lVar12 + 8))) {
            FUN_143e179e0(local_88,"Invalid pixel aspect ratio in image header.");
            local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
            _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
          }
          lVar12 = FUN_14392a1b0(param_1,"screenWindowWidth");
          if (*(float *)(lVar12 + 8) <= 0.0 && *(float *)(lVar12 + 8) != 0.0) {
            FUN_143e179e0(local_88,"Invalid screen window width in image header.");
            local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
            _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
          }
          lVar12 = FUN_14392a1b0(param_1,"lineOrder");
          uVar5 = *(uint *)(lVar12 + 8);
          if (param_2 == '\0') {
            if (1 < uVar5) {
              FUN_143e179e0(local_88,"Invalid line order in image header.");
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
          }
          else {
            lVar12 = Imf::Header::findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>
                               (param_1,"tiles");
            if (lVar12 == 0) {
              FUN_143e179e0(local_88,"Tiled image has no tile description attribute.");
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
            puVar13 = (uint *)FUN_14392f650(param_1);
            if ((*puVar13 == 0) || (puVar13[1] == 0)) {
              FUN_143e179e0(local_88,"Invalid tile size in image header.");
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
            if ((0 < (int)DAT_146b95d3c) && (DAT_146b95d3c < *puVar13)) {
              FUN_1439299f0(local_588,3,1);
              pbVar10 = (basic_ostream<char,std::char_traits<char>_> *)
                        std::operator<<<std::char_traits<char>_>
                                  (local_578,"The width of the tiles exceeds the maximum width of ")
              ;
              pbVar11 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                  (pbVar10,DAT_146b95d3c);
              std::operator<<<std::char_traits<char>_>(pbVar11,"pixels.");
              FUN_143e175c0(local_88,local_588);
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
            if ((0 < (int)DAT_146b95d40) && (DAT_146b95d40 < puVar13[1])) {
              FUN_1439299f0(local_988,3,1);
              pbVar10 = (basic_ostream<char,std::char_traits<char>_> *)
                        std::operator<<<std::char_traits<char>_>
                                  (local_978,"The width of the tiles exceeds the maximum width of ")
              ;
              pbVar11 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                  (pbVar10,DAT_146b95d40);
              std::operator<<<std::char_traits<char>_>(pbVar11,"pixels.");
              FUN_143e175c0(local_88,local_988);
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
            if (2 < puVar13[2]) {
              FUN_143e179e0(local_88,"Invalid level mode in image header.");
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
            if (1 < puVar13[3]) {
              FUN_143e179e0(local_88,"Invalid level rounding mode in image header.");
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
            if (2 < uVar5) {
              FUN_143e179e0(local_88,"Invalid line order in image header.");
              local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
            }
          }
          lVar12 = FUN_14392a1b0(param_1,"compression");
          cVar8 = FUN_143937f10(*(undefined4 *)(lVar12 + 8));
          if (cVar8 == '\0') {
            FUN_143e179e0(local_88,"Unknown compression type in image header.");
            local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
            _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
          }
          lVar12 = FUN_14392a1b0(param_1,"channels");
          lVar12 = lVar12 + 8;
          std::
          _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
          ::begin(lVar12,&local_ea8);
          plVar14 = (longlong *)FKey::GetFName(lVar12,local_ea0);
          if (param_2 == '\0') {
            while (local_ea8 != (longlong *)*plVar14) {
              if ((1 < *(uint *)((longlong)local_ea8 + 0x11c)) &&
                 (*(uint *)((longlong)local_ea8 + 0x11c) != 2)) {
                FUN_1439299f0(local_c88,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>(local_c78,"Pixel type of \"");
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" image channel is invalid.");
                FUN_143e175c0(local_88,local_c88);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              iVar1 = (int)local_ea8[0x24];
              if (iVar1 < 1) {
                FUN_1439299f0(local_188,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_178,"The x subsampling factor for the \"");
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel is invalid.");
                FUN_143e175c0(local_88,local_188);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              iVar2 = *(int *)((longlong)local_ea8 + 0x124);
              if (iVar2 < 1) {
                FUN_1439299f0(local_288,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_278,"The y subsampling factor for the \"");
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel is invalid.");
                FUN_143e175c0(local_88,local_288);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              if (*(int *)(lVar9 + 8) % iVar1 != 0) {
                FUN_1439299f0(local_488,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_478,
                                    "The minimum x coordinate of the image\'s data window is not a multiple of the x subsampling factor of the \""
                                   );
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel.");
                FUN_143e175c0(local_88,local_488);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              if (*(int *)(lVar9 + 0xc) % iVar2 != 0) {
                FUN_1439299f0(local_688,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_678,
                                    "The minimum y coordinate of the image\'s data window is not a multiple of the y subsampling factor of the \""
                                   );
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel.");
                FUN_143e175c0(local_88,local_688);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              if (((*(int *)(lVar9 + 0x10) - *(int *)(lVar9 + 8)) + 1) % iVar1 != 0) {
                FUN_1439299f0(local_888,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_878,
                                    "Number of pixels per row in the image\'s data window is not a multiple of the x subsampling factor of the \""
                                   );
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel.");
                FUN_143e175c0(local_88,local_888);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              lVar6 = (longlong)((*(int *)(lVar9 + 0x14) - *(int *)(lVar9 + 0xc)) + 1) %
                      (longlong)iVar2;
              if ((int)lVar6 != 0) {
                FUN_1439299f0(local_a88,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_a78,
                                    "Number of pixels per column in the image\'s data window is not a multiple of the y subsampling factor of the \""
                                   );
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel.");
                FUN_143e175c0(local_88,local_a88);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              if (*(char *)((longlong)local_ea8 + 0x19) == (char)lVar6) {
                plVar14 = (longlong *)local_ea8[2];
                if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
                  cVar8 = *(char *)(*plVar14 + 0x19);
                  local_ea8 = plVar14;
                  plVar14 = (longlong *)*plVar14;
                  while (cVar8 == '\0') {
                    cVar8 = *(char *)(*plVar14 + 0x19);
                    local_ea8 = plVar14;
                    plVar14 = (longlong *)*plVar14;
                  }
                }
                else {
                  cVar8 = *(char *)(local_ea8[1] + 0x19);
                  plVar7 = (longlong *)local_ea8[1];
                  plVar14 = local_ea8;
                  while ((local_ea8 = plVar7, cVar8 == '\0' && (plVar14 == (longlong *)local_ea8[2])
                         )) {
                    cVar8 = *(char *)(local_ea8[1] + 0x19);
                    plVar7 = (longlong *)local_ea8[1];
                    plVar14 = local_ea8;
                  }
                }
              }
              plVar14 = (longlong *)FKey::GetFName(lVar12,local_ea0);
            }
          }
          else {
            while (local_ea8 != (longlong *)*plVar14) {
              if ((1 < *(uint *)((longlong)local_ea8 + 0x11c)) &&
                 (*(uint *)((longlong)local_ea8 + 0x11c) != 2)) {
                FUN_1439299f0(local_e88,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>(local_e78,"Pixel type of \"");
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" image channel is invalid.");
                FUN_143e175c0(local_88,local_e88);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              if ((int)local_ea8[0x24] != 1) {
                FUN_1439299f0(local_d88,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_d78,"The x subsampling factor for the \"");
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel is not 1.");
                FUN_143e175c0(local_88,local_d88);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              if (*(int *)((longlong)local_ea8 + 0x124) != 1) {
                FUN_1439299f0(local_788,3,1);
                plVar14 = local_ea8;
                uVar15 = std::operator<<<std::char_traits<char>_>
                                   (local_778,"The y subsampling factor for the \"");
                uVar15 = std::operator<<<std::char_traits<char>_>(uVar15,(longlong)plVar14 + 0x1c);
                std::operator<<<std::char_traits<char>_>(uVar15,"\" channel is not 1.");
                FUN_143e175c0(local_88,local_788);
                local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
                _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
              }
              if (*(char *)((longlong)local_ea8 + 0x19) == '\0') {
                plVar14 = (longlong *)local_ea8[2];
                if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
                  cVar8 = *(char *)(*plVar14 + 0x19);
                  local_ea8 = plVar14;
                  plVar14 = (longlong *)*plVar14;
                  while (cVar8 == '\0') {
                    cVar8 = *(char *)(*plVar14 + 0x19);
                    local_ea8 = plVar14;
                    plVar14 = (longlong *)*plVar14;
                  }
                }
                else {
                  cVar8 = *(char *)(local_ea8[1] + 0x19);
                  plVar7 = (longlong *)local_ea8[1];
                  plVar14 = local_ea8;
                  while ((local_ea8 = plVar7, cVar8 == '\0' && (plVar14 == (longlong *)local_ea8[2])
                         )) {
                    cVar8 = *(char *)(local_ea8[1] + 0x19);
                    plVar7 = (longlong *)local_ea8[1];
                    plVar14 = local_ea8;
                  }
                }
              }
              plVar14 = (longlong *)FKey::GetFName(lVar12,local_ea0);
            }
          }
          return;
        }
      }
      FUN_143e179e0(local_88,"Invalid data window in image header.");
      local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
    }
  }
  FUN_143e179e0(local_88,"Invalid display window in image header.");
  local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 14392f330 FUN_14392f330 body=704 status=ok
// SIG undefined FUN_14392f330(void)

void FUN_14392f330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_20;
  undefined1 local_18;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b95d78) {
    _Init_thread_header(&DAT_146b95d78);
    if (DAT_146b95d78 == -1) {
      FUN_14394c2d0(&DAT_146b95d48);
      atexit((_func_5014 *)&LAB_143ec5dc0);
      _Init_thread_footer(&DAT_146b95d78);
    }
  }
  local_20 = &DAT_146b95d48;
  FUN_1437125f0(&DAT_146b95d48);
  local_18 = 1;
  if (DAT_146b95d7c == '\0') {
    uVar1 = FUN_1439390d0();
    FUN_143938b50(uVar1,FUN_14392d700,param_3,param_4,uVar2);
    uVar2 = FUN_1439390c0();
    FUN_143938b50(uVar2,FUN_14392d690);
    uVar2 = FUN_1439394d0();
    FUN_143938b50(uVar2,FUN_14392dbc0);
    uVar2 = FUN_143939b40();
    FUN_143938b50(uVar2,FUN_14392de20);
    uVar2 = FUN_143939900();
    FUN_143938b50(uVar2,FUN_14392d650);
    uVar2 = FUN_143939b80();
    FUN_143938b50(uVar2,FUN_14392d600);
    uVar2 = FUN_143939b90();
    FUN_143938b50(uVar2,FUN_14392de70);
    uVar2 = pqxx::string_traits<float>::name();
    FUN_143938b50(uVar2,FUN_14392d5b0);
    uVar2 = FUN_143939bb0();
    FUN_143938b50(uVar2,FUN_14392d560);
    uVar2 = FUN_14393a2d0();
    FUN_143938b50(uVar2,FUN_14392dc30);
    uVar2 = FUN_14393a480();
    FUN_143938b50(uVar2,FUN_14392dec0);
    uVar2 = FUN_14393aca0();
    FUN_143938b50(uVar2,FUN_14392d7e0);
    uVar2 = FUN_14393ac90();
    FUN_143938b50(uVar2,FUN_14392d770);
    uVar2 = FUN_14393acc0();
    FUN_143938b50(uVar2,FUN_14392d8a0);
    uVar2 = FUN_14393acb0();
    FUN_143938b50(uVar2,FUN_14392d860);
    uVar2 = FUN_14393bcf0();
    FUN_143938b50(uVar2,FUN_14392dcb0);
    uVar2 = FUN_14393bec0();
    FUN_143938b50(uVar2,FUN_14392dd10);
    uVar2 = pqxx::
            string_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
            name();
    FUN_143938b50(uVar2,FUN_14392db00);
    uVar2 = FUN_14393c5a0();
    FUN_143938b50(uVar2,FUN_14392db60);
    uVar2 = FUN_14393c720();
    FUN_143938b50(uVar2,FUN_14392dd70);
    uVar2 = FUN_14393c920();
    FUN_143938b50(uVar2,FUN_14392ddd0);
    uVar2 = FUN_14393cda0();
    FUN_143938b50(uVar2,FUN_14392d9c0);
    uVar2 = FUN_14393cd90();
    FUN_143938b50(uVar2,FUN_14392d970);
    uVar2 = FUN_14393cd80();
    FUN_143938b50(uVar2,FUN_14392d920);
    uVar2 = FUN_14393cdd0();
    FUN_143938b50(uVar2,FUN_14392dab0);
    uVar2 = FUN_14393cdc0();
    FUN_143938b50(uVar2,FUN_14392da60);
    uVar2 = FUN_14393cdb0();
    FUN_143938b50(uVar2,FUN_14392da10);
    DAT_146b95d7c = '\x01';
  }
  FUN_143925920(&local_20);
  return;
}



// FUNCTION 14392f5f0 GetFontCache body=35 status=ok
// SIG undefined GetFontCache(void)

undefined8 FSlateRenderer::GetFontCache(longlong param_1,undefined8 param_2)

{
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str(param_1 + 8);
  return param_2;
}



// FUNCTION 14392f620 FUN_14392f620 body=35 status=ok
// SIG undefined FUN_14392f620(void)

undefined8 FUN_14392f620(longlong param_1,undefined8 param_2)

{
  FSlateRenderer::GetFontCache(param_1 + 0x28);
  return param_2;
}



// FUNCTION 14392f650 FUN_14392f650 body=148 status=ok
// SIG undefined FUN_14392f650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14392f650(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_14392a1b0(param_1,"tiles");
  local_88 = 0;
  lVar2 = _guard_xfg_dispatch_icall_nop
                    (uVar1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::TileDescription>::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    return lVar2 + 8;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14392f6f0 thunk_FUN_143939bb0 body=5 status=ok
// SIG undefined thunk_FUN_143939bb0(void)

undefined1 * thunk_FUN_143939bb0(void)

{
  return &DAT_145af6ba4;
}



// FUNCTION 14392f700 name body=5 status=ok
// SIG undefined name(void)

char * pqxx::string_traits<float>::name(void)

{
  return "float";
}



// FUNCTION 14392f710 thunk_FUN_143939b80 body=5 status=ok
// SIG undefined thunk_FUN_143939b80(void)

char * thunk_FUN_143939b80(void)

{
  return "double";
}



// FUNCTION 14392f720 thunk_FUN_143939900 body=5 status=ok
// SIG undefined thunk_FUN_143939900(void)

char * thunk_FUN_143939900(void)

{
  return "chromaticities";
}



// FUNCTION 14392f730 thunk_FUN_1439390c0 body=5 status=ok
// SIG undefined thunk_FUN_1439390c0(void)

char * thunk_FUN_1439390c0(void)

{
  return "box2i";
}



// FUNCTION 14392f740 thunk_FUN_1439390d0 body=5 status=ok
// SIG undefined thunk_FUN_1439390d0(void)

char * thunk_FUN_1439390d0(void)

{
  return "box2f";
}



// FUNCTION 14392f750 thunk_FUN_14393ac90 body=5 status=ok
// SIG undefined thunk_FUN_14393ac90(void)

undefined * thunk_FUN_14393ac90(void)

{
  return &DAT_145c65318;
}



// FUNCTION 14392f760 thunk_FUN_14393aca0 body=5 status=ok
// SIG undefined thunk_FUN_14393aca0(void)

undefined * thunk_FUN_14393aca0(void)

{
  return &DAT_145c65320;
}



// FUNCTION 14392f770 thunk_FUN_14393acb0 body=5 status=ok
// SIG undefined thunk_FUN_14393acb0(void)

undefined * thunk_FUN_14393acb0(void)

{
  return &DAT_145c65328;
}



// FUNCTION 14392f780 thunk_FUN_14393acc0 body=5 status=ok
// SIG undefined thunk_FUN_14393acc0(void)

undefined * thunk_FUN_14393acc0(void)

{
  return &DAT_145c65330;
}



// FUNCTION 14392f790 thunk_FUN_14393cd80 body=5 status=ok
// SIG undefined thunk_FUN_14393cd80(void)

undefined * thunk_FUN_14393cd80(void)

{
  return &DAT_145c65574;
}



// FUNCTION 14392f7a0 thunk_FUN_14393cd90 body=5 status=ok
// SIG undefined thunk_FUN_14393cd90(void)

undefined * thunk_FUN_14393cd90(void)

{
  return &DAT_145c65578;
}



// FUNCTION 14392f7b0 thunk_FUN_14393cda0 body=5 status=ok
// SIG undefined thunk_FUN_14393cda0(void)

undefined * thunk_FUN_14393cda0(void)

{
  return &DAT_145c6557c;
}



// FUNCTION 14392f7c0 thunk_FUN_14393cdb0 body=5 status=ok
// SIG undefined thunk_FUN_14393cdb0(void)

undefined * thunk_FUN_14393cdb0(void)

{
  return &DAT_145c65580;
}



// FUNCTION 14392f7d0 thunk_FUN_14393cdc0 body=5 status=ok
// SIG undefined thunk_FUN_14393cdc0(void)

undefined * thunk_FUN_14393cdc0(void)

{
  return &DAT_145c65584;
}



// FUNCTION 14392f7e0 thunk_FUN_14393cdd0 body=5 status=ok
// SIG undefined thunk_FUN_14393cdd0(void)

undefined * thunk_FUN_14393cdd0(void)

{
  return &DAT_145c65588;
}



// FUNCTION 14392f7f0 name body=5 status=ok
// SIG undefined name(void)

char * pqxx::string_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
       name(void)

{
  return "string";
}



// FUNCTION 14392f800 thunk_FUN_14393c5a0 body=5 status=ok
// SIG undefined thunk_FUN_14393c5a0(void)

char * thunk_FUN_14393c5a0(void)

{
  return "stringvector";
}



// FUNCTION 14392f810 thunk_FUN_1439394d0 body=5 status=ok
// SIG undefined thunk_FUN_1439394d0(void)

char * thunk_FUN_1439394d0(void)

{
  return "chlist";
}



// FUNCTION 14392f820 thunk_FUN_14393a2d0 body=5 status=ok
// SIG undefined thunk_FUN_14393a2d0(void)

char * thunk_FUN_14393a2d0(void)

{
  return "keycode";
}



// FUNCTION 14392f830 thunk_FUN_14393bcf0 body=5 status=ok
// SIG undefined thunk_FUN_14393bcf0(void)

char * thunk_FUN_14393bcf0(void)

{
  return "preview";
}



// FUNCTION 14392f840 thunk_FUN_14393bec0 body=5 status=ok
// SIG undefined thunk_FUN_14393bec0(void)

char * thunk_FUN_14393bec0(void)

{
  return "rational";
}



// FUNCTION 14392f850 thunk_FUN_14393c720 body=5 status=ok
// SIG undefined thunk_FUN_14393c720(void)

char * thunk_FUN_14393c720(void)

{
  return "tiledesc";
}



// FUNCTION 14392f860 thunk_FUN_14393c920 body=5 status=ok
// SIG undefined thunk_FUN_14393c920(void)

char * thunk_FUN_14393c920(void)

{
  return "timecode";
}



// FUNCTION 14392f870 thunk_FUN_143939b40 body=5 status=ok
// SIG undefined thunk_FUN_143939b40(void)

char * thunk_FUN_143939b40(void)

{
  return "compression";
}



// FUNCTION 14392f880 thunk_FUN_143939b90 body=5 status=ok
// SIG undefined thunk_FUN_143939b90(void)

char * thunk_FUN_143939b90(void)

{
  return "envmap";
}



// FUNCTION 14392f890 thunk_FUN_14393a480 body=5 status=ok
// SIG undefined thunk_FUN_14393a480(void)

char * thunk_FUN_14393a480(void)

{
  return "lineOrder";
}



// FUNCTION 14392f8a0 FUN_14392f8a0 body=405 status=ok
// SIG undefined FUN_14392f8a0(void)

undefined8 FUN_14392f8a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *local_res8;
  undefined1 local_res10 [8];
  
  plVar7 = *(longlong **)*param_1;
  if (plVar7 != (longlong *)*param_1) {
    do {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar5 = uVar9 + 1;
        lVar6 = uVar9 + 0x21;
        uVar9 = uVar5;
      } while (*(char *)((longlong)plVar7 + lVar6) != '\0');
      if (0x1f < uVar5) {
        return 1;
      }
      lVar6 = (**(code **)(*(longlong *)plVar7[0x24] + 8))();
      uVar9 = 0xffffffffffffffff;
      do {
        uVar9 = uVar9 + 1;
      } while (*(char *)(lVar6 + uVar9) != '\0');
      if (0x1f < uVar9) {
        return 1;
      }
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar2 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar7 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar4 = (longlong *)plVar7[1];
          plVar2 = plVar7;
          while ((plVar7 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar4 = (longlong *)plVar7[1];
            plVar2 = plVar7;
          }
        }
      }
    } while (plVar7 != (longlong *)*param_1);
  }
  lVar6 = FUN_14392a1b0(param_1,"channels");
  lVar6 = lVar6 + 8;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(lVar6,&local_res8);
  plVar7 = (longlong *)FKey::GetFName(lVar6,local_res10);
  if (local_res8 != (longlong *)*plVar7) {
    do {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar5 = uVar9 + 1;
        lVar3 = uVar9 + 0x1d;
        uVar9 = uVar5;
      } while (*(char *)((longlong)local_res8 + lVar3) != '\0');
      if (0x1f < uVar5) {
        return 1;
      }
      if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
        plVar7 = (longlong *)local_res8[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          local_res8 = plVar7;
          plVar7 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            local_res8 = plVar7;
            plVar7 = (longlong *)*plVar7;
          }
        }
        else {
          cVar1 = *(char *)(local_res8[1] + 0x19);
          plVar2 = (longlong *)local_res8[1];
          plVar7 = local_res8;
          while ((local_res8 = plVar2, cVar1 == '\0' && (plVar7 == (longlong *)local_res8[2]))) {
            cVar1 = *(char *)(local_res8[1] + 0x19);
            plVar2 = (longlong *)local_res8[1];
            plVar7 = local_res8;
          }
        }
      }
      puVar8 = (undefined8 *)FKey::GetFName(lVar6,local_res10);
    } while (local_res8 != (longlong *)*puVar8);
  }
  return 0;
}



// FUNCTION 14392fa40 FUN_14392fa40 body=820 status=ok
// SIG undefined FUN_14392fa40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014392fd32) */

undefined8 FUN_14392fa40(longlong *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_1a8 [32];
  uint local_188 [2];
  undefined8 local_180;
  byte local_178;
  undefined7 uStack_177;
  ulonglong local_168;
  ulonglong local_160;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_180 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_188[0] = 0x1312f76;
  (**(code **)(*param_2 + 8))(param_2,local_188,4);
  uVar11 = 2;
  if (param_3 != '\0') {
    uVar11 = 0x202;
  }
  cVar3 = FUN_14392f8a0(param_1);
  if (cVar3 != '\0') {
    uVar11 = uVar11 | 0x400;
  }
  local_188[0] = uVar11;
  (**(code **)(*param_2 + 8))(param_2,local_188,4);
  uVar6 = 0;
  lVar4 = Imf::Header::findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>
                    (param_1,"preview");
  plVar9 = *(longlong **)*param_1;
  bVar12 = plVar9 == (longlong *)*param_1;
  do {
    if (bVar12) {
      (**(code **)(*param_2 + 8))(param_2,&DAT_145af3922,1);
      return uVar6;
    }
    plVar10 = plVar9 + 4;
    cVar3 = (char)*plVar10;
    while (cVar3 != '\0') {
      (**(code **)(*param_2 + 8))(param_2,plVar10,1);
      plVar10 = (longlong *)((longlong)plVar10 + 1);
      cVar3 = *(char *)plVar10;
    }
    (**(code **)(*param_2 + 8))(param_2,plVar10,1);
    pcVar5 = (char *)(**(code **)(*(longlong *)plVar9[0x24] + 8))();
    cVar3 = *pcVar5;
    while (cVar3 != '\0') {
      (**(code **)(*param_2 + 8))(param_2,pcVar5,1);
      pcVar5 = pcVar5 + 1;
      cVar3 = *pcVar5;
    }
    (**(code **)(*param_2 + 8))(param_2,pcVar5,1);
    FUN_143936670(local_158);
    (**(code **)(*(longlong *)plVar9[0x24] + 0x18))((longlong *)plVar9[0x24],local_158,uVar11);
    FUN_14392f620(local_158,&local_178);
    local_188[0] = (uint)local_168;
    (**(code **)(*param_2 + 8))(param_2,local_188,4);
    if (plVar9[0x24] == lVar4) {
      uVar6 = (**(code **)(*param_2 + 0x10))(param_2);
    }
    pbVar8 = &local_178;
    if (0xf < local_160) {
      pbVar8 = (byte *)CONCAT71(uStack_177,local_178);
    }
    (**(code **)(*param_2 + 8))(param_2,pbVar8,local_168 & 0xffffffff);
    if (0xf < local_160) {
      uVar1 = CONCAT71(uStack_177,local_178);
      uVar7 = uVar1;
      if (0xfff < local_160 + 1) {
        if ((local_178 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar7 = *(ulonglong *)(uVar1 - 8);
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (uVar1 - uVar7 < 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (0x27 < uVar1 - uVar7) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar7);
    }
    local_160 = 0xf;
    local_168 = 0;
    local_178 = 0;
    FUN_143929da0(local_158);
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      plVar10 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar3 = *(char *)(*plVar10 + 0x19);
        plVar9 = plVar10;
        plVar10 = (longlong *)*plVar10;
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*plVar10 + 0x19);
          plVar9 = plVar10;
          plVar10 = (longlong *)*plVar10;
        }
      }
      else {
        cVar3 = *(char *)(plVar9[1] + 0x19);
        plVar2 = (longlong *)plVar9[1];
        plVar10 = plVar9;
        while ((plVar9 = plVar2, cVar3 == '\0' && (plVar10 == (longlong *)plVar9[2]))) {
          cVar3 = *(char *)(plVar9[1] + 0x19);
          plVar2 = (longlong *)plVar9[1];
          plVar10 = plVar9;
        }
      }
    }
    bVar12 = plVar9 == (longlong *)*param_1;
  } while( true );
}



// FUNCTION 14392fd80 writeValueTo body=70 status=ok
// SIG undefined writeValueTo(void)

void Imf_2_3::TypedAttribute<int>::writeValueTo(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 14392fdd0 writeValueTo body=76 status=ok
// SIG undefined writeValueTo(void)

void Imf_2_3::TypedAttribute<float>::writeValueTo(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 14392fe20 FUN_14392fe20 body=13 status=ok
// SIG undefined FUN_14392fe20(void)

void FUN_14392fe20(longlong param_1,undefined8 param_2)

{
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14392fe30 _Buynode<std::piecewise_construct_t_const_&___ptr64,std::tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64>,std::tuple<>_> body=107 status=ok
// SIG undefined _Buynode<std::piecewise_construct_t_const_&___ptr64,std::tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64>,std::tuple<>_>(void)

longlong std::
         _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
         ::
         _Buynode<std::piecewise_construct_t_const_&___ptr64,std::tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64>,std::tuple<>_>
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_143930a50();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_143930670(param_1,lVar1 + 0x20,param_2,param_3,param_4);
  return lVar1;
}



// FUNCTION 14392fea0 FUN_14392fea0 body=678 status=ok
// SIG undefined FUN_14392fea0(void)

undefined8 *
FUN_14392fea0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0xbe82fa0be82f9e < (ulonglong)param_1[1]) {
    FMemory::operator_delete(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_14392ff24;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_14392ff24;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_14392ff24:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_14393011e:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_14393011e;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 143930150 FUN_143930150 body=821 status=ok
// SIG undefined FUN_143930150(void)

undefined8 *
FUN_143930150(longlong *param_1,undefined8 *param_2,longlong *param_3,byte *param_4,
             undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_20 [24];
  
  if (param_1[1] == 0) {
    FUN_14392fea0(param_1,param_2,1,*param_1,param_4,param_5,0xfffffffffffffffe);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    pbVar7 = param_4;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[(longlong)param_3 + (0x20 - (longlong)param_4)];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      FUN_14392fea0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    pbVar7 = (byte *)(plVar3[2] + 0x20);
    lVar10 = (longlong)param_4 - (longlong)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[lVar10];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      FUN_14392fea0(param_1,param_2,0,plVar3[2],param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
  else {
    pbVar7 = (byte *)(param_3 + 4);
    pbVar8 = param_4;
    do {
      bVar1 = *pbVar8;
      uVar6 = (uint)pbVar8[(longlong)pbVar7 - (longlong)param_4];
      if (bVar1 != uVar6) break;
      pbVar8 = pbVar8 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar11 = (longlong *)*param_3;
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(plVar11[2] + 0x19);
          plVar4 = (longlong *)plVar11[2];
          while (cVar2 == '\0') {
            cVar2 = *(char *)(plVar4[2] + 0x19);
            plVar11 = plVar4;
            plVar4 = (longlong *)plVar4[2];
          }
        }
        else {
          cVar2 = *(char *)(param_3[1] + 0x19);
          plVar4 = (longlong *)param_3[1];
          plVar11 = param_3;
          while ((plVar5 = plVar4, cVar2 == '\0' && (plVar11 == (longlong *)*plVar5))) {
            cVar2 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar11 = plVar5;
          }
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            plVar11 = plVar5;
          }
        }
      }
      else {
        plVar11 = (longlong *)param_3[2];
      }
      pbVar8 = (byte *)(plVar11 + 4);
      lVar10 = (longlong)param_4 - (longlong)pbVar8;
      do {
        bVar1 = *pbVar8;
        uVar6 = (uint)pbVar8[lVar10];
        if (bVar1 != uVar6) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 0) {
        if (*(char *)(plVar11[2] + 0x19) != '\0') {
          FUN_14392fea0(param_1,param_2,0,plVar11,param_4,param_5,0xfffffffffffffffe);
          return param_2;
        }
        FUN_14392fea0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    lVar10 = (longlong)param_4 - (longlong)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[lVar10];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      plVar11 = param_3;
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar11 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar4 = (longlong *)*plVar11;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar4 + 0x19);
            plVar11 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar2 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar11 = plVar5, cVar2 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
            cVar2 = *(char *)(plVar11[1] + 0x19);
            plVar5 = (longlong *)plVar11[1];
            plVar4 = plVar11;
          }
        }
      }
      if (plVar11 != plVar3) {
        pbVar7 = param_4;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[(longlong)plVar11 + (0x20 - (longlong)param_4)];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        if (-1 < (int)(bVar1 - uVar6)) goto LAB_143930446;
      }
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_14392fea0(param_1,param_2,0,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
      FUN_14392fea0(param_1,param_2,1,plVar11,param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
LAB_143930446:
  puVar9 = (undefined8 *)FUN_143930490(param_1,local_20,0,param_4,param_5);
  *param_2 = *puVar9;
  return param_2;
}



// FUNCTION 143930490 FUN_143930490 body=471 status=ok
// SIG undefined FUN_143930490(void)

undefined8 *
FUN_143930490(longlong *param_1,undefined8 *param_2,undefined8 param_3,byte *param_4,
             undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)*param_1;
  uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  cVar1 = *(char *)((longlong)puVar5[1] + 0x19);
  puVar3 = puVar5;
  puVar7 = (undefined8 *)puVar5[1];
  while (cVar1 == '\0') {
    if ((char)param_3 == '\0') {
      lVar9 = (longlong)puVar7 + (0x20 - (longlong)param_4);
      pbVar4 = param_4;
      do {
        bVar2 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar9];
        if (bVar2 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),(int)(bVar2 - uVar6) < 0);
    }
    else {
      pbVar4 = (byte *)(puVar7 + 4);
      lVar9 = (longlong)param_4 - (longlong)pbVar4;
      do {
        bVar2 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar9];
        if (bVar2 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),-1 < (int)(bVar2 - uVar6));
    }
    if ((char)uVar8 == '\0') {
      puVar10 = (undefined8 *)puVar7[2];
    }
    else {
      puVar10 = (undefined8 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar10;
    cVar1 = *(char *)((longlong)puVar10 + 0x19);
  }
  puVar7 = puVar3;
  if ((char)uVar8 != '\0') {
    if (puVar3 == (undefined8 *)*puVar5) {
      puVar5 = (undefined8 *)
               FUN_14392fea0(param_1,local_res8,CONCAT71((int7)((ulonglong)uVar8 >> 8),1),puVar3,
                             param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
      puVar7 = (undefined8 *)*puVar3;
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar7[2] + 0x19);
        puVar5 = (undefined8 *)puVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar5[2] + 0x19);
          puVar7 = puVar5;
          puVar5 = (undefined8 *)puVar5[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar5 = (undefined8 *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar10 = puVar5, cVar1 == '\0' && (puVar7 == (undefined8 *)*puVar10))) {
          cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
          puVar5 = (undefined8 *)puVar10[1];
          puVar7 = puVar10;
        }
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          puVar7 = puVar10;
        }
      }
    }
    else {
      puVar7 = (undefined8 *)puVar3[2];
    }
  }
  pbVar4 = (byte *)(puVar7 + 4);
  lVar9 = (longlong)param_4 - (longlong)pbVar4;
  do {
    bVar2 = *pbVar4;
    uVar6 = (uint)pbVar4[lVar9];
    if (bVar2 != uVar6) break;
    pbVar4 = pbVar4 + 1;
  } while (uVar6 != 0);
  if ((int)(bVar2 - uVar6) < 0) {
    puVar5 = (undefined8 *)
             FUN_14392fea0(param_1,local_res8,uVar8,puVar3,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FMemory::operator_delete(param_5);
    *param_2 = puVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143930670 FUN_143930670 body=172 status=ok
// SIG undefined FUN_143930670(void)

void FUN_143930670(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar4 = 2;
    puVar2 = (undefined8 *)*param_4;
    puVar3 = param_2;
    do {
      uVar1 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar1;
      uVar1 = puVar2[3];
      puVar3[2] = puVar2[2];
      puVar3[3] = uVar1;
      uVar1 = puVar2[5];
      puVar3[4] = puVar2[4];
      puVar3[5] = uVar1;
      uVar1 = puVar2[7];
      puVar3[6] = puVar2[6];
      puVar3[7] = uVar1;
      uVar1 = puVar2[9];
      puVar3[8] = puVar2[8];
      puVar3[9] = uVar1;
      uVar1 = puVar2[0xb];
      puVar3[10] = puVar2[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar2[0xd];
      puVar3[0xc] = puVar2[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar2[0xf];
      puVar3[0xe] = puVar2[0xe];
      puVar3[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar4 != 0);
    *(undefined4 *)(param_2 + 0x20) = 1;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    param_2[0x25] = 0;
    *(undefined2 *)(param_2 + 0x26) = 0;
    *(undefined4 *)(param_2 + 0x24) = 1;
    *(undefined4 *)((longlong)param_2 + 0x124) = 1;
  }
  return;
}



// FUNCTION 143930720 FUN_143930720 body=64 status=ok
// SIG undefined FUN_143930720(void)

undefined4 *
FUN_143930720(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10)

{
  *(undefined8 *)(param_1 + 6) = param_5;
  param_1[8] = param_6;
  param_1[9] = param_7;
  *(undefined1 *)(param_1 + 0xc) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x31) = param_10;
  *(undefined8 *)(param_1 + 10) = param_8;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_4;
  return param_1;
}



// FUNCTION 143930760 FUN_143930760 body=230 status=ok
// SIG undefined FUN_143930760(void)

undefined8 * FUN_143930760(longlong *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_res8;
  byte *local_res18 [2];
  
  puVar3 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar4 = puVar3;
  puVar7 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)(puVar7 + 4);
    lVar9 = (longlong)param_2 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar6 = (uint)pbVar5[lVar9];
      if (bVar2 != uVar6) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar2 - uVar6) < 0) {
      puVar8 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar8 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar4 != puVar3) {
    pbVar5 = param_2;
    do {
      bVar2 = *pbVar5;
      uVar6 = (uint)pbVar5[(longlong)puVar4 + (0x20 - (longlong)param_2)];
      if (bVar2 != uVar6) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    if (-1 < (int)(bVar2 - uVar6)) {
      return puVar4 + 0x24;
    }
  }
  local_res18[0] = param_2;
  lVar9 = std::
          _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
          ::
          _Buynode<std::piecewise_construct_t_const_&___ptr64,std::tuple<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64>,std::tuple<>_>
                    (param_1,&DAT_145c64129,local_res18,&local_res8);
  FUN_143930150(param_1,&local_res8,puVar4,lVar9 + 0x20,lVar9);
  return (undefined8 *)(local_res8 + 0x120);
}



// FUNCTION 143930850 FUN_143930850 body=499 status=ok
// SIG undefined FUN_143930850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143930850(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined8 local_280;
  undefined *local_278 [3];
  undefined **local_260 [13];
  undefined8 local_1f8;
  undefined4 local_1f0;
  code *local_1e0;
  undefined **local_178 [12];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_10;
  
  local_280 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_288 = 0;
  strncpy((char *)local_118,param_2,0xff);
  local_19 = 0;
  puVar3 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar10 != puVar3) {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) goto LAB_14393092d;
  }
  puVar10 = puVar3;
LAB_14393092d:
  if (puVar10 != puVar3) {
    return puVar10 + 0x24;
  }
  local_278[0] = &DAT_145af0c78;
  local_278[2] = &DAT_145af0c80;
  local_1e0 = _vftable__exref;
  local_288 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_278,
             (basic_streambuf<char,std::char_traits<char>_> *)local_260);
  *(undefined ***)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4) + -4) =
       *(int *)(local_278[0] + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_260);
  local_260[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_1f8 = 0;
  local_1f0 = 0;
  uVar5 = std::operator<<<std::char_traits<char>_>
                    (local_278 + 2,"Cannot find frame buffer slice \"");
  uVar5 = std::operator<<<std::char_traits<char>_>(uVar5,param_2);
  std::operator<<<std::char_traits<char>_>(uVar5,&DAT_145c62598);
  FUN_143e175c0(local_178,local_278);
  local_178[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_178,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143930a50 FUN_143930a50 body=92 status=ok
// SIG undefined FUN_143930a50(void)

undefined8 * FUN_143930a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}



// FUNCTION 143930ab0 FUN_143930ab0 body=246 status=ok
// SIG undefined FUN_143930ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143930ab0(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_138 [32];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  strncpy((char *)local_118,param_3,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar5 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar5;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar5 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar5 != puVar3) {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar5 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) {
      *param_2 = (longlong)puVar5;
      return param_2;
    }
  }
  *param_2 = (longlong)puVar3;
  return param_2;
}



// FUNCTION 143930bb0 FUN_143930bb0 body=15 status=ok
// SIG undefined FUN_143930bb0(void)

void FUN_143930bb0(undefined8 param_1,undefined8 *param_2)

{
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_143930bc0(param_1,param_2);
  return;
}



// FUNCTION 143930bc0 FUN_143930bc0 body=426 status=ok
// SIG undefined FUN_143930bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143930bc0(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined *local_278 [3];
  undefined **local_260 [13];
  undefined8 local_1f8;
  undefined4 local_1f0;
  code *local_1e0;
  undefined **local_178 [12];
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_10;
  
  local_280 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  uVar1 = local_2b8 >> 0x20;
  local_2b8 = local_2b8 & 0xffffffff00000000;
  if (*param_2 == '\0') {
    local_278[0] = &DAT_145af0c78;
    local_278[2] = &DAT_145af0c80;
    local_1e0 = _vftable__exref;
    local_2b8 = CONCAT44((int)uVar1,1);
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_278,
               (basic_streambuf<char,std::char_traits<char>_> *)local_260);
    *(undefined ***)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4) + -4) =
         *(int *)(local_278[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_260);
    local_260[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_1f8 = 0;
    local_1f0 = 0;
    std::operator<<<std::char_traits<char>_>
              (local_278 + 2,"Frame buffer slice name cannot be an empty string.");
    FUN_143e175c0(local_178,local_278);
    local_178[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_178,(ThrowInfo *)&DAT_1461db4d8);
  }
  strncpy(local_118,param_2,0xff);
  local_19 = 0;
  local_290 = *param_3;
  uStack_288 = param_3[1];
  local_2b0 = *(undefined4 *)(param_3 + 2);
  uStack_2ac = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_2a8 = *(undefined4 *)(param_3 + 3);
  uStack_2a4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_2a0 = param_3[4];
  uStack_298 = param_3[5];
  local_2b8 = param_3[6];
  puVar2 = (undefined8 *)FUN_143930760(param_1,local_118);
  *puVar2 = local_290;
  puVar2[1] = uStack_288;
  puVar2[2] = CONCAT44(uStack_2ac,local_2b0);
  puVar2[3] = CONCAT44(uStack_2a4,uStack_2a8);
  puVar2[4] = local_2a0;
  puVar2[5] = uStack_298;
  puVar2[6] = local_2b8;
  return;
}



// FUNCTION 143930d70 FUN_143930d70 body=399 status=ok
// SIG undefined FUN_143930d70(void)

basic_ostream<char,std::char_traits<char>_> *
FUN_143930d70(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  ulonglong uVar1;
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  basic_ostream<char,std::char_traits<char>_> *local_30;
  undefined1 local_28;
  
  iVar4 = 0;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar3 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if (((longlong)uVar3 < 1) || (uVar3 <= uVar1)) {
    lVar5 = 0;
  }
  else {
    lVar5 = uVar3 - uVar1;
  }
  local_30 = param_1;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  if (((*(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50),
      this != (basic_ostream<char,std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush(this);
  }
  local_28 = *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0;
  if (!(bool)local_28) {
    iVar4 = 4;
    goto LAB_143930ed1;
  }
  if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) == 0x40) {
LAB_143930e59:
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),param_2,
                       uVar1);
    if (uVar3 == uVar1) goto LAB_143930e87;
LAB_143930eb2:
    iVar4 = 4;
  }
  else {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                         (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
      if (iVar2 == -1) {
        iVar4 = 4;
        break;
      }
    }
    if (iVar4 == 0) goto LAB_143930e59;
LAB_143930e87:
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                         (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
      if (iVar2 == -1) goto LAB_143930eb2;
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
LAB_143930ed1:
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  std::basic_ostream<char,std::char_traits<char>_>::sentry::~sentry(&local_30);
  return param_1;
}



// FUNCTION 143930f10 FUN_143930f10 body=85 status=ok
// SIG undefined FUN_143930f10(void)

longlong FUN_143930f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_143930a50();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_143931230(param_1,lVar1 + 0x20,param_2,param_4,uVar2);
  return lVar1;
}



// FUNCTION 143930f70 FUN_143930f70 body=171 status=ok
// SIG undefined FUN_143930f70(void)

void FUN_143930f70(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar2 = *param_1;
  uVar7 = std::
          _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
          ::
          _Copy_nodes<std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>::_Copy_tag>
                    (param_1,*(undefined8 *)(*param_2 + 8),lVar2,param_3);
  *(undefined8 *)(lVar2 + 8) = uVar7;
  plVar3 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x19);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar2;
  return;
}



// FUNCTION 143931020 FUN_143931020 body=58 status=ok
// SIG undefined FUN_143931020(void)

undefined8 * FUN_143931020(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    param_3 = param_3 + 6;
  }
  return param_3;
}



// FUNCTION 143931060 _Copy_nodes<std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>::_Copy_tag> body=158 status=ok
// SIG undefined _Copy_nodes<std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>::_Copy_tag>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
::
_Copy_nodes<std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>::_Copy_tag>
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_143930f10(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar2 + 0x19) != '\0') {
      puVar2 = puVar1;
    }
    uVar3 = _Copy_nodes<std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>::_Copy_tag>
                      (param_1,*param_2,puVar1,param_4,puVar2,uVar3);
    *puVar1 = uVar3;
    uVar3 = _Copy_nodes<std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>::_Copy_tag>
                      (param_1,param_2[2],puVar1,param_4);
    puVar1[2] = uVar3;
  }
  return puVar2;
}



// FUNCTION 143931100 FUN_143931100 body=106 status=ok
// SIG undefined FUN_143931100(void)

void FUN_143931100(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_1;
  if (0xfff < param_2 * 8) {
    if ((param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_1 - 8);
    if (param_1 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_1 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_1 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 143931170 FUN_143931170 body=106 status=ok
// SIG undefined FUN_143931170(void)

void FUN_143931170(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_1;
  if (0xfff < param_2 * 0x30) {
    if ((param_1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_1 - 8);
    if (param_1 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_1 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_1 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 1439311e0 FUN_1439311e0 body=69 status=ok
// SIG undefined FUN_1439311e0(void)

undefined8 * FUN_1439311e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      uVar1 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar1;
      uVar1 = param_1[5];
      param_3[4] = param_1[4];
      param_3[5] = uVar1;
    }
    param_3 = param_3 + 6;
  }
  return param_3;
}



// FUNCTION 143931230 FUN_143931230 body=141 status=ok
// SIG undefined FUN_143931230(void)

void FUN_143931230(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar2 = 2;
    do {
      puVar4 = param_3;
      puVar3 = param_2;
      uVar1 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar1;
      uVar1 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar1;
      uVar1 = puVar4[5];
      puVar3[4] = puVar4[4];
      puVar3[5] = uVar1;
      uVar1 = puVar4[7];
      puVar3[6] = puVar4[6];
      puVar3[7] = uVar1;
      uVar1 = puVar4[9];
      puVar3[8] = puVar4[8];
      puVar3[9] = uVar1;
      uVar1 = puVar4[0xb];
      puVar3[10] = puVar4[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar4[0xd];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar4[0xf];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = uVar1;
      lVar2 = lVar2 + -1;
      param_2 = puVar3 + 0x10;
      param_3 = puVar4 + 0x10;
    } while (lVar2 != 0);
    uVar1 = puVar4[0x11];
    puVar3[0x10] = puVar4[0x10];
    puVar3[0x11] = uVar1;
    uVar1 = puVar4[0x13];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x13] = uVar1;
    uVar1 = puVar4[0x15];
    puVar3[0x14] = puVar4[0x14];
    puVar3[0x15] = uVar1;
    puVar3[0x16] = puVar4[0x16];
  }
  return;
}



// FUNCTION 1439312c0 FUN_1439312c0 body=331 status=ok
// SIG undefined FUN_1439312c0(void)

undefined8 * FUN_1439312c0(undefined8 *param_1,undefined1 param_2,int param_3)

{
  int *piVar1;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_14394c2d0();
  *param_1 = Imf::OutputFile::Data::vftable;
  local_res20 = 0;
  FUN_143929ab0(param_1 + 6,0x40,0x40,0x3f800000,&local_res20,0x3f800000,0,3,uVar2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = FUN_14186c270(param_1 + 10);
  param_1[10] = uVar2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = param_2;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_res10[0] = param_3 * 2;
  local_res18[0] = 1;
  piVar1 = local_res10;
  if (param_3 * 2 < 2) {
    piVar1 = local_res18;
  }
  FUN_1439328a0(param_1 + 0x21,(longlong)*piVar1);
  return param_1;
}


