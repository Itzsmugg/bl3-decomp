// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a5d280 _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*> body=631 status=ok
// SIG undefined _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
::
_Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
          (longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 param_5
          ,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (0x3fffffffffffffd < (ulonglong)param_1[1]) {
    _Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>
    ::
    _Freenode<std::allocator<std::_Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>_>_>
              (param_1,param_6);
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_143a5d2ff;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_143a5d2ff;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_143a5d2ff:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar9 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar9[1];
    plVar7 = plVar9 + 1;
    plVar8 = plVar2 + 1;
    lVar5 = *(longlong *)plVar2[1];
    if (plVar2 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar2[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar3 = (longlong *)plVar2[2];
        plVar6 = plVar2;
        if (plVar9 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(longlong **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar8;
          plVar6 = plVar3;
          plVar7 = plVar8;
          if (plVar2 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar3;
            *plVar3 = (longlong)plVar2;
            *plVar8 = (longlong)plVar3;
            plVar9 = plVar2;
          }
          else {
            plVar9 = (longlong *)*plVar8;
            if (plVar2 == (longlong *)*plVar9) {
              *plVar9 = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar8 = (longlong)plVar3;
              plVar9 = plVar2;
            }
            else {
              plVar9[2] = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar8 = (longlong)plVar3;
              plVar9 = plVar2;
            }
          }
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar2 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
        goto LAB_143a5d4a5;
      }
LAB_143a5d416:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_143a5d416;
      if (plVar9 == (longlong *)*plVar2) {
        _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
        ::_Rrotate(param_1,plVar2);
        plVar9 = plVar2;
      }
      *(undefined1 *)(plVar9[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar9[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar9[1] + 8);
      plVar8 = (longlong *)plVar7[2];
      plVar7[2] = *plVar8;
      if (*(char *)(*plVar8 + 0x19) == '\0') {
        *(longlong **)(*plVar8 + 8) = plVar7;
      }
      plVar8[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar8;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar8;
        }
        else {
          puVar4[2] = plVar8;
        }
      }
      *plVar8 = (longlong)plVar7;
LAB_143a5d4a5:
      plVar7[1] = (longlong)plVar8;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}



// FUNCTION 143a5d500 FUN_143a5d500 body=488 status=ok
// SIG undefined FUN_143a5d500(void)

undefined8 *
FUN_143a5d500(longlong *param_1,undefined8 *param_2,longlong *param_3,ulonglong *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  if (param_1[1] == 0) {
    std::
    _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
    ::
    _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
              (param_1,param_2,1,*param_1,param_4,param_5);
  }
  else {
    plVar1 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar1) {
      if (*param_4 < (ulonglong)param_3[4]) {
        std::
        _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
        ::
        _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                  (param_1,param_2,1,param_3,param_4,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar1) {
      if (*(ulonglong *)(plVar1[2] + 0x20) < *param_4) {
        std::
        _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
        ::
        _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                  (param_1,param_2,0,plVar1[2],param_4,param_5);
        return param_2;
      }
    }
    else {
      uVar2 = *param_4;
      if ((uVar2 < (ulonglong)param_3[4]) &&
         (local_38 = param_3,
         plVar3 = (longlong *)
                  std::
                  _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>
                  ::operator--(&local_38), *(ulonglong *)(*plVar3 + 0x20) < uVar2)) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          std::
          _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
          ::
          _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                    (param_1,param_2,0,local_38,param_4,param_5);
          return param_2;
        }
        std::
        _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
        ::
        _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                  (param_1,param_2,1,param_3,param_4,param_5);
        return param_2;
      }
      if (((ulonglong)param_3[4] < uVar2) &&
         ((local_38 = param_3,
          puVar4 = (undefined8 *)
                   std::
                   _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>
                   ::operator++(&local_38), (longlong *)*puVar4 == plVar1 ||
          (uVar2 < (ulonglong)local_38[4])))) {
        if (*(char *)(param_3[2] + 0x19) != '\0') {
          std::
          _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
          ::
          _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                    (param_1,param_2,0,param_3,param_4,param_5);
          return param_2;
        }
        std::
        _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
        ::
        _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                  (param_1,param_2,1,local_38,param_4,param_5);
        return param_2;
      }
    }
    puVar4 = (undefined8 *)FUN_143a5d6f0(param_1,local_28,0,param_4,param_5);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 143a5d6f0 FUN_143a5d6f0 body=379 status=ok
// SIG undefined FUN_143a5d6f0(void)

undefined8 *
FUN_143a5d6f0(longlong *param_1,undefined8 *param_2,char param_3,ulonglong *param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 local_10 [8];
  
  puVar4 = (undefined8 *)*param_1;
  bVar5 = true;
  puVar6 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
    puVar3 = (undefined8 *)puVar4[1];
    do {
      puVar6 = puVar3;
      if (param_3 == '\0') {
        bVar5 = *param_4 < (ulonglong)puVar6[4];
      }
      else {
        bVar5 = *param_4 <= (ulonglong)puVar6[4];
      }
      if (bVar5 == false) {
        puVar3 = (undefined8 *)puVar6[2];
      }
      else {
        puVar3 = (undefined8 *)*puVar6;
      }
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
  }
  puVar3 = puVar6;
  if (bVar5 != false) {
    if (puVar6 == (undefined8 *)*puVar4) {
      puVar4 = (undefined8 *)
               std::
               _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
               ::
               _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                         (param_1,local_10,1,puVar6,param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      puVar3 = (undefined8 *)*puVar6;
      if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar3[2] + 0x19);
        puVar4 = (undefined8 *)puVar3[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar4[2] + 0x19);
          puVar3 = puVar4;
          puVar4 = (undefined8 *)puVar4[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar4 = (undefined8 *)puVar6[1];
        puVar3 = puVar6;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined8 *)*puVar2))) {
          cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
          puVar4 = (undefined8 *)puVar2[1];
          puVar3 = puVar2;
        }
        if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
          puVar3 = puVar2;
        }
      }
    }
    else {
      puVar3 = (undefined8 *)puVar6[2];
    }
  }
  if ((ulonglong)puVar3[4] < *param_4) {
    puVar4 = (undefined8 *)
             std::
             _Tree<std::_Tmap_traits<FKey,enum_EChromaSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_>,0>_>
             ::
             _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*>
                       (param_1,local_10,bVar5,puVar6,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    std::
    _Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>
    ::
    _Freenode<std::allocator<std::_Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>_>_>
              (param_1,param_5);
    *param_2 = puVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a5d870 FUN_143a5d870 body=429 status=ok
// SIG undefined FUN_143a5d870(void)

longlong * FUN_143a5d870(longlong *param_1,longlong *param_2)

{
  longlong *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  if (param_1 == param_2) {
    return param_2;
  }
  _Dst = param_1 + 1;
  if (_Dst == param_2) {
    return param_2;
  }
  _Size = (longlong)_Dst - (longlong)param_1;
  plVar5 = _Dst;
LAB_143a5d8c0:
  lVar1 = *plVar5;
  lVar2 = *param_1;
  plVar7 = plVar5;
  if (*(char *)(lVar1 + 0x42) == '\0') {
LAB_143a5d8e5:
    if (*(char *)(lVar2 + 0x42) == '\0') {
      lVar4 = lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x28);
      lVar4 = lVar4 / 0x26 + (lVar4 >> 0x3f);
      iVar6 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
      iVar3 = (int)((lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x28)) / 0x98);
      bVar8 = SBORROW4(iVar6,iVar3);
      iVar6 = iVar6 - iVar3;
      goto LAB_143a5d92c;
    }
  }
  else {
    if (*(char *)(lVar2 + 0x42) == '\0') {
      if (*(char *)(lVar1 + 0x42) != '\0') goto LAB_143a5d950;
      goto LAB_143a5d8e5;
    }
    bVar8 = SBORROW4(*(int *)(lVar1 + 0x44),*(int *)(lVar2 + 0x44));
    iVar6 = *(int *)(lVar1 + 0x44) - *(int *)(lVar2 + 0x44);
LAB_143a5d92c:
    if (bVar8 == iVar6 < 0) {
LAB_143a5d950:
      do {
        lVar2 = plVar7[-1];
        if (*(char *)(lVar1 + 0x42) == '\0') {
          if (*(char *)(lVar2 + 0x42) == '\0') {
            lVar4 = lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x28);
            lVar4 = lVar4 / 0x26 + (lVar4 >> 0x3f);
            iVar6 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
            iVar3 = (int)((lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x28)) / 0x98);
            bVar8 = SBORROW4(iVar6,iVar3);
            iVar6 = iVar6 - iVar3;
            goto LAB_143a5d9b6;
          }
        }
        else {
          if (*(char *)(lVar2 + 0x42) == '\0') goto LAB_143a5d9c5;
          bVar8 = SBORROW4(*(int *)(lVar1 + 0x44),*(int *)(lVar2 + 0x44));
          iVar6 = *(int *)(lVar1 + 0x44) - *(int *)(lVar2 + 0x44);
LAB_143a5d9b6:
          if (bVar8 == iVar6 < 0) goto LAB_143a5d9c5;
        }
        *plVar7 = lVar2;
        plVar7 = plVar7 + -1;
      } while( true );
    }
  }
  _guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
  *param_1 = lVar1;
  goto LAB_143a5d9c8;
LAB_143a5d9c5:
  *plVar7 = lVar1;
LAB_143a5d9c8:
  plVar5 = plVar5 + 1;
  _Size = _Size + 8;
  if (plVar5 == param_2) {
    return param_2;
  }
  goto LAB_143a5d8c0;
}



// FUNCTION 143a5da20 FUN_143a5da20 body=979 status=ok
// SIG undefined FUN_143a5da20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143a5da20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined1 *_Buf1;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined8 local_res18 [2];
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  ulonglong local_88;
  ulonglong local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_d0 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (param_1 != param_2) {
    puVar17 = param_1 + 1;
    bVar21 = puVar17 == param_2;
    puVar20 = puVar17;
    local_res18[0] = param_3;
    local_e8 = param_1;
    local_e0 = param_2;
    local_d8 = puVar17;
    while (!bVar21) {
      plVar1 = (longlong *)*puVar17;
      local_f0 = puVar17;
      cVar4 = FUN_143a5fb10(local_res18,plVar1,*param_1);
      uVar3 = local_res18[0];
      if (cVar4 == '\0') {
        while( true ) {
          puVar20 = puVar17 + -1;
          uVar14 = *puVar20;
          lVar11 = (**(code **)(*plVar1 + 0xb8))(plVar1,local_c8);
          plVar2 = *(longlong **)(lVar11 + 8);
          iVar7 = FUN_143a009a0(uVar3);
          switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar7 * 4)) {
          case 1:
            iVar7 = (**(code **)(*plVar2 + 0x80))(plVar2,plVar1,uVar3);
            iVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,uVar14,uVar3);
            bVar21 = iVar7 < iVar8;
            break;
          case 2:
            lVar11 = (**(code **)(*plVar2 + 0x88))(plVar2,plVar1,uVar3);
            lVar12 = (**(code **)(*plVar2 + 0x88))(plVar2,uVar14,uVar3);
            bVar21 = lVar11 < lVar12;
            break;
          case 3:
            uVar9 = (**(code **)(*plVar2 + 0x90))(plVar2,plVar1,uVar3);
            uVar10 = (**(code **)(*plVar2 + 0x90))(plVar2,uVar14,uVar3);
            bVar21 = uVar9 < uVar10;
            break;
          case 4:
            uVar16 = (**(code **)(*plVar2 + 0x98))(plVar2,plVar1,uVar3);
            uVar13 = (**(code **)(*plVar2 + 0x98))(plVar2,uVar14,uVar3);
            bVar21 = uVar16 < uVar13;
            break;
          default:
            uVar14 = FUN_1439eeb00(local_78,2,
                                   "c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",0x7e6)
            ;
            uVar14 = FUN_1439eef00(uVar14,"Invalid key for map field.");
            FUN_1439eec50(local_f8,uVar14);
            DsDevice::~DsDevice(local_78);
            goto LAB_143a5ddae;
          case 7:
            bVar5 = (**(code **)(*plVar2 + 0xb0))(plVar2,plVar1,uVar3);
            bVar6 = (**(code **)(*plVar2 + 0xb0))(plVar2,uVar14,uVar3);
            bVar21 = bVar5 < bVar6;
            break;
          case 9:
            (**(code **)(*plVar2 + 0xb8))(plVar2,&local_b8,plVar1,uVar3);
            (**(code **)(*plVar2 + 0xb8))(plVar2,&local_98,uVar14,uVar3);
            puVar19 = (undefined1 *)CONCAT71(uStack_97,local_98);
            puVar15 = &local_98;
            if (0xf < local_80) {
              puVar15 = puVar19;
            }
            puVar18 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
            _Buf1 = &local_b8;
            if (0xf < local_a0) {
              _Buf1 = puVar18;
            }
            uVar16 = local_a8;
            if (local_88 < local_a8) {
              uVar16 = local_88;
            }
            iVar7 = _guard_xfg_dispatch_icall_nop(_Buf1,puVar15,uVar16);
            if (iVar7 == 0) {
              if (local_a8 < local_88) {
                iVar7 = -1;
              }
              else {
                iVar7 = 0;
              }
            }
            bVar21 = SUB41((uint)iVar7 >> 0x1f,0);
            if (0xf < local_80) {
              uVar16 = local_80 + 1;
              puVar15 = puVar19;
              if (0xfff < uVar16) {
                uVar16 = local_80 + 0x28;
                puVar15 = *(undefined1 **)(puVar19 + -8);
                if ((undefined1 *)0x1f < puVar19 + (-8 - (longlong)puVar15)) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(puVar15,uVar16);
              puVar18 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
            }
            local_88 = 0;
            local_80 = 0xf;
            local_98 = 0;
            if (0xf < local_a0) {
              uVar16 = local_a0 + 1;
              puVar19 = puVar18;
              if (0xfff < uVar16) {
                uVar16 = local_a0 + 0x28;
                puVar19 = *(undefined1 **)(puVar18 + -8);
                if ((undefined1 *)0x1f < puVar18 + (-8 - (longlong)puVar19)) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(puVar19,uVar16);
            }
            local_a8 = 0;
            local_a0 = 0xf;
            local_b8 = 0;
          }
          if (bVar21 == false) break;
LAB_143a5ddae:
          *puVar17 = *puVar20;
          puVar17 = puVar20;
        }
        *puVar17 = plVar1;
        puVar17 = local_f0 + 1;
        bVar21 = puVar17 == local_e0;
        param_2 = local_e0;
        param_1 = local_e8;
        puVar20 = local_d8;
      }
      else {
        _guard_xfg_dispatch_icall_nop(puVar20,param_1,(longlong)puVar17 - (longlong)param_1);
        *param_1 = plVar1;
        puVar17 = puVar17 + 1;
        bVar21 = puVar17 == param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 143a5de20 FUN_143a5de20 body=1063 status=ok
// SIG undefined FUN_143a5de20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a5de20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar15;
  bool bVar16;
  undefined8 local_res20;
  undefined1 auStack_128 [32];
  byte local_108;
  undefined1 *local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0;
  undefined7 uStack_bf;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  undefined8 *puVar14;
  
  local_d8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_res20 = param_4;
  puVar1 = param_2;
  if (param_2 != param_3) {
    while (puVar1 = puVar1 + 1, puVar1 != param_3) {
      plVar15 = (longlong *)*puVar1;
      local_f8 = plVar15;
      local_e0 = param_1;
      cVar3 = FUN_143a5fb10(&local_res20,plVar15,*param_2);
      uVar2 = local_res20;
      puVar13 = puVar1;
      if (cVar3 == '\0') {
        while( true ) {
          puVar14 = puVar13 + -1;
          local_f0 = (undefined1 *)*puVar14;
          lVar8 = (**(code **)(*plVar15 + 0xb8))(plVar15,local_d0);
          plVar15 = *(longlong **)(lVar8 + 8);
          iVar5 = FUN_143a009a0(uVar2);
          switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar5 * 4)) {
          case 1:
            uVar6 = (**(code **)(*plVar15 + 0x80))(plVar15,local_f8,uVar2);
            local_100 = (undefined1 *)CONCAT44(local_100._4_4_,uVar6);
            iVar5 = (**(code **)(*plVar15 + 0x80))(plVar15,local_f0,uVar2);
            bVar16 = (int)(uint)local_100 < iVar5;
            break;
          case 2:
            local_100 = (undefined1 *)(**(code **)(*plVar15 + 0x88))(plVar15,local_f8,uVar2);
            lVar8 = (**(code **)(*plVar15 + 0x88))(plVar15,local_f0,uVar2);
            bVar16 = (longlong)local_100 < lVar8;
            break;
          case 3:
            uVar6 = (**(code **)(*plVar15 + 0x90))(plVar15,local_f8,uVar2);
            local_100 = (undefined1 *)CONCAT44(local_100._4_4_,uVar6);
            uVar7 = (**(code **)(*plVar15 + 0x90))(plVar15,local_f0,uVar2);
            bVar16 = (uint)local_100 < uVar7;
            break;
          case 4:
            local_100 = (undefined1 *)(**(code **)(*plVar15 + 0x98))(plVar15,local_f8,uVar2);
            puVar9 = (undefined1 *)(**(code **)(*plVar15 + 0x98))(plVar15,local_f0,uVar2);
            bVar16 = local_100 < puVar9;
            break;
          default:
            uVar10 = FUN_1439eeb00(local_80,2,
                                   "c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",0x7e6)
            ;
            uVar10 = FUN_1439eef00(uVar10,"Invalid key for map field.");
            FUN_1439eec50(local_e8,uVar10);
            DsDevice::~DsDevice(local_80);
            goto LAB_143a5e228;
          case 7:
            local_108 = (**(code **)(*plVar15 + 0xb0))(plVar15,local_f8,uVar2);
            bVar4 = (**(code **)(*plVar15 + 0xb0))(plVar15,local_f0,uVar2);
            bVar16 = local_108 < bVar4;
            break;
          case 9:
            (**(code **)(*plVar15 + 0xb8))(plVar15,&local_c0,local_f8,uVar2);
            (**(code **)(*plVar15 + 0xb8))(plVar15,&local_a0,local_f0,uVar2);
            local_f0 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
            puVar9 = &local_a0;
            if (0xf < local_88) {
              puVar9 = local_f0;
            }
            local_100 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
            puVar11 = &local_c0;
            if (0xf < local_a8) {
              puVar11 = local_100;
            }
            uVar12 = local_b0;
            if (local_90 < local_b0) {
              uVar12 = local_90;
            }
            iVar5 = _guard_xfg_dispatch_icall_nop(puVar11,puVar9,uVar12);
            if (iVar5 == 0) {
              if (local_b0 < local_90) {
                iVar5 = -1;
              }
              else {
                iVar5 = 0;
              }
            }
            bVar16 = SUB41((uint)iVar5 >> 0x1f,0);
            puVar9 = local_100;
            if (0xf < local_88) {
              uVar12 = local_88 + 1;
              puVar9 = local_f0;
              if (0xfff < uVar12) {
                uVar12 = local_88 + 0x28;
                puVar9 = *(undefined1 **)(local_f0 + -8);
                if ((undefined1 *)0x1f < local_f0 + (-8 - (longlong)puVar9)) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(puVar9,uVar12);
              puVar9 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
            }
            local_90 = 0;
            local_88 = 0xf;
            local_a0 = 0;
            if (0xf < local_a8) {
              uVar12 = local_a8 + 1;
              puVar11 = puVar9;
              if (0xfff < uVar12) {
                uVar12 = local_a8 + 0x28;
                puVar11 = *(undefined1 **)(puVar9 + -8);
                if ((undefined1 *)0x1f < puVar9 + (-8 - (longlong)puVar11)) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(puVar11,uVar12);
            }
            local_b0 = 0;
            local_a8 = 0xf;
            local_c0 = 0;
          }
          if (bVar16 == false) break;
LAB_143a5e228:
          *puVar13 = *puVar14;
          puVar13 = puVar14;
          plVar15 = local_f8;
        }
        *puVar13 = local_f8;
        param_1 = local_e0;
      }
      else {
        while (puVar13 != param_2) {
          *puVar13 = puVar13[-1];
          puVar13 = puVar13 + -1;
        }
        *param_2 = plVar15;
        param_1 = local_e0;
      }
    }
  }
  *param_1 = param_3;
  return;
}



// FUNCTION 143a5e270 FUN_143a5e270 body=456 status=ok
// SIG undefined FUN_143a5e270(void)

void FUN_143a5e270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar10 = param_2 - param_1 >> 3;
  lVar7 = param_2 - param_1 >> 4;
  if (0 < lVar7) {
    lVar6 = (longlong)(uVar10 - 1) >> 1;
    do {
      lVar2 = *(longlong *)(param_1 + -8 + lVar7 * 8);
      lVar7 = lVar7 + -1;
      lVar1 = lVar7;
      while (lVar1 < lVar6) {
        lVar4 = *(longlong *)(param_1 + 0x10 + lVar1 * 0x10);
        lVar8 = lVar1 * 2 + 2;
        lVar5 = *(longlong *)(param_1 + 8 + lVar1 * 0x10);
        if (*(char *)(lVar4 + 0x42) == '\0') {
          if (*(char *)(lVar5 + 0x42) == '\0') {
            lVar4 = lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28);
            lVar4 = lVar4 / 0x26 + (lVar4 >> 0x3f);
            iVar9 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
            iVar3 = (int)((lVar5 - *(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x28)) / 0x98);
            bVar11 = SBORROW4(iVar9,iVar3);
            iVar9 = iVar9 - iVar3;
            goto LAB_143a5e349;
          }
LAB_143a5e350:
          lVar8 = lVar1 * 2 + 1;
        }
        else if (*(char *)(lVar5 + 0x42) != '\0') {
          bVar11 = SBORROW4(*(int *)(lVar4 + 0x44),*(int *)(lVar5 + 0x44));
          iVar9 = *(int *)(lVar4 + 0x44) - *(int *)(lVar5 + 0x44);
LAB_143a5e349:
          if (bVar11 != iVar9 < 0) goto LAB_143a5e350;
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar8 * 8);
        lVar1 = lVar8;
      }
      if ((lVar1 == lVar6) && ((uVar10 & 1) == 0)) {
        *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + -8 + uVar10 * 8);
        lVar1 = uVar10 - 1;
      }
      while (lVar7 < lVar1) {
        lVar4 = lVar1 + -1 >> 1;
        lVar8 = *(longlong *)(param_1 + lVar4 * 8);
        if (*(char *)(lVar8 + 0x42) == '\0') {
          if (*(char *)(lVar2 + 0x42) == '\0') {
            lVar5 = lVar8 - *(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x28);
            lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
            iVar9 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
            iVar3 = (int)((lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x28)) / 0x98);
            bVar11 = SBORROW4(iVar9,iVar3);
            iVar9 = iVar9 - iVar3;
            goto LAB_143a5e3f2;
          }
        }
        else {
          if (*(char *)(lVar2 + 0x42) == '\0') break;
          bVar11 = SBORROW4(*(int *)(lVar8 + 0x44),*(int *)(lVar2 + 0x44));
          iVar9 = *(int *)(lVar8 + 0x44) - *(int *)(lVar2 + 0x44);
LAB_143a5e3f2:
          if (bVar11 == iVar9 < 0) break;
        }
        *(longlong *)(param_1 + lVar1 * 8) = lVar8;
        lVar1 = lVar4;
      }
      *(longlong *)(param_1 + lVar1 * 8) = lVar2;
    } while (0 < lVar7);
  }
  return;
}



// FUNCTION 143a5e440 FUN_143a5e440 body=252 status=ok
// SIG undefined FUN_143a5e440(void)

void FUN_143a5e440(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *param_2;
  lVar1 = *param_1;
  if (*(char *)(lVar4 + 0x42) == '\0') {
    if (*(char *)(lVar1 + 0x42) == '\0') {
      iVar2 = FUN_143a6bc10(lVar4);
      iVar3 = FUN_143a6bc10(lVar1);
      bVar5 = SBORROW4(iVar2,iVar3);
      iVar2 = iVar2 - iVar3;
      goto LAB_143a5e495;
    }
LAB_143a5e49c:
    *param_2 = lVar1;
    *param_1 = lVar4;
    lVar4 = *param_2;
  }
  else if (*(char *)(lVar1 + 0x42) != '\0') {
    bVar5 = SBORROW4(*(int *)(lVar4 + 0x44),*(int *)(lVar1 + 0x44));
    iVar2 = *(int *)(lVar4 + 0x44) - *(int *)(lVar1 + 0x44);
LAB_143a5e495:
    if (bVar5 != iVar2 < 0) goto LAB_143a5e49c;
  }
  lVar1 = *param_3;
  if (*(char *)(lVar1 + 0x42) == '\0') {
    if (*(char *)(lVar4 + 0x42) == '\0') {
      iVar3 = FUN_143a6bc10(lVar4);
      iVar2 = FUN_143a6bc10(lVar1);
      bVar5 = SBORROW4(iVar2,iVar3);
      iVar2 = iVar2 - iVar3;
      goto LAB_143a5e4d7;
    }
  }
  else {
    if (*(char *)(lVar4 + 0x42) == '\0') {
      return;
    }
    bVar5 = SBORROW4(*(int *)(lVar1 + 0x44),*(int *)(lVar4 + 0x44));
    iVar2 = *(int *)(lVar1 + 0x44) - *(int *)(lVar4 + 0x44);
LAB_143a5e4d7:
    if (bVar5 == iVar2 < 0) {
      return;
    }
  }
  *param_3 = lVar4;
  *param_2 = lVar1;
  lVar4 = *param_1;
  if (*(char *)(lVar1 + 0x42) == '\0') {
    if (*(char *)(lVar4 + 0x42) != '\0') goto LAB_143a5e51d;
    iVar2 = FUN_143a6bc10(lVar1);
    iVar3 = FUN_143a6bc10(lVar4);
    bVar5 = SBORROW4(iVar2,iVar3);
    iVar2 = iVar2 - iVar3;
  }
  else {
    if (*(char *)(lVar4 + 0x42) == '\0') {
      return;
    }
    bVar5 = SBORROW4(*(int *)(lVar1 + 0x44),*(int *)(lVar4 + 0x44));
    iVar2 = *(int *)(lVar1 + 0x44) - *(int *)(lVar4 + 0x44);
  }
  if (bVar5 == iVar2 < 0) {
    return;
  }
LAB_143a5e51d:
  *param_2 = lVar4;
  *param_1 = lVar1;
  return;
}



// FUNCTION 143a5e540 FUN_143a5e540 body=1418 status=ok
// SIG undefined FUN_143a5e540(void)

void FUN_143a5e540(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  plVar11 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  lVar4 = (longlong)param_3 + (-8 - (longlong)param_2) >> 3;
  if (lVar4 < 0x29) {
    FUN_143a5e440(param_2,plVar11,param_3 + -1);
  }
  else {
    lVar4 = lVar4 + 1 >> 3;
    FUN_143a5e440(param_2,param_2 + lVar4,param_2 + lVar4 * 2);
    FUN_143a5e440(plVar11 + -lVar4,plVar11,plVar11 + lVar4,param_4);
    FUN_143a5e440(param_3 + lVar4 * -2 + -1,param_3 + (-1 - lVar4),param_3 + -1,param_4);
    FUN_143a5e440(param_2 + lVar4,plVar11,param_3 + (-1 - lVar4),param_4);
  }
  plVar10 = plVar11 + 1;
joined_r0x000143a5e627:
  do {
    plVar12 = plVar11;
    if (plVar12 <= param_2) break;
    lVar4 = plVar12[-1];
    lVar6 = *plVar12;
    cVar1 = *(char *)(lVar4 + 0x42);
    cVar2 = *(char *)(lVar6 + 0x42);
    plVar11 = plVar12 + -1;
    if (cVar1 == '\0') {
      if (cVar2 != '\0') break;
      lVar5 = lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28);
      lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
      iVar9 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
      iVar3 = (int)((lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28)) / 0x98);
      bVar13 = SBORROW4(iVar9,iVar3);
      iVar9 = iVar9 - iVar3;
LAB_143a5e6a4:
      if (bVar13 != iVar9 < 0) break;
      if (cVar2 == '\0') goto LAB_143a5e6be;
      if (cVar1 == '\0') goto joined_r0x000143a5e627;
      bVar13 = SBORROW4(*(int *)(lVar6 + 0x44),*(int *)(lVar4 + 0x44));
      iVar9 = *(int *)(lVar6 + 0x44) - *(int *)(lVar4 + 0x44);
    }
    else {
      if (cVar2 != '\0') {
        bVar13 = SBORROW4(*(int *)(lVar4 + 0x44),*(int *)(lVar6 + 0x44));
        iVar9 = *(int *)(lVar4 + 0x44) - *(int *)(lVar6 + 0x44);
        goto LAB_143a5e6a4;
      }
LAB_143a5e6be:
      if (cVar1 != '\0') break;
      lVar6 = lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28);
      lVar6 = lVar6 / 0x26 + (lVar6 >> 0x3f);
      iVar9 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
      iVar3 = (int)((lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28)) / 0x98);
      bVar13 = SBORROW4(iVar9,iVar3);
      iVar9 = iVar9 - iVar3;
    }
  } while (bVar13 == iVar9 < 0);
  plVar11 = plVar10;
  plVar7 = plVar12;
  if (plVar10 < param_3) {
    lVar4 = *plVar12;
    cVar1 = *(char *)(lVar4 + 0x42);
    do {
      lVar6 = *plVar10;
      cVar2 = *(char *)(lVar6 + 0x42);
      plVar11 = plVar10;
      if (cVar2 == '\0') {
        if (cVar1 != '\0') break;
        lVar5 = lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28);
        lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
        iVar9 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
        iVar3 = (int)((lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28)) / 0x98);
        bVar13 = SBORROW4(iVar9,iVar3);
        iVar9 = iVar9 - iVar3;
LAB_143a5e78b:
        if (bVar13 != iVar9 < 0) break;
        if (cVar1 == '\0') goto LAB_143a5e7a4;
        if (cVar2 != '\0') {
          bVar13 = SBORROW4(*(int *)(lVar4 + 0x44),*(int *)(lVar6 + 0x44));
          iVar9 = *(int *)(lVar4 + 0x44) - *(int *)(lVar6 + 0x44);
          goto LAB_143a5e7e8;
        }
      }
      else {
        if (cVar1 != '\0') {
          bVar13 = SBORROW4(*(int *)(lVar6 + 0x44),*(int *)(lVar4 + 0x44));
          iVar9 = *(int *)(lVar6 + 0x44) - *(int *)(lVar4 + 0x44);
          goto LAB_143a5e78b;
        }
LAB_143a5e7a4:
        if (cVar2 != '\0') break;
        lVar5 = lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28);
        lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
        iVar9 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
        iVar3 = (int)((lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28)) / 0x98);
        bVar13 = SBORROW4(iVar9,iVar3);
        iVar9 = iVar9 - iVar3;
LAB_143a5e7e8:
        if (bVar13 != iVar9 < 0) break;
      }
      plVar10 = plVar10 + 1;
      plVar11 = plVar10;
    } while (plVar10 < param_3);
  }
joined_r0x000143a5e805:
  do {
    plVar8 = plVar7;
    if (param_3 <= plVar10) {
joined_r0x000143a5e908:
      for (; param_2 < plVar7; plVar7 = plVar7 + -1) {
        plVar8 = plVar8 + -1;
        lVar4 = *plVar8;
        lVar6 = *plVar12;
        cVar1 = *(char *)(lVar4 + 0x42);
        cVar2 = *(char *)(lVar6 + 0x42);
        if (cVar1 == '\0') {
          if (cVar2 == '\0') {
            lVar5 = lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28);
            lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
            iVar9 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
            iVar3 = (int)((lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28)) / 0x98);
            bVar13 = SBORROW4(iVar9,iVar3);
            iVar9 = iVar9 - iVar3;
            goto LAB_143a5e98f;
          }
        }
        else {
          if (cVar2 == '\0') {
LAB_143a5e9a9:
            if (cVar1 != '\0') break;
            lVar6 = lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28);
            lVar6 = lVar6 / 0x26 + (lVar6 >> 0x3f);
            iVar9 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
            iVar3 = (int)((lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28)) / 0x98);
            bVar13 = SBORROW4(iVar9,iVar3);
            iVar9 = iVar9 - iVar3;
LAB_143a5e9ef:
            if (bVar13 != iVar9 < 0) break;
          }
          else {
            bVar13 = SBORROW4(*(int *)(lVar4 + 0x44),*(int *)(lVar6 + 0x44));
            iVar9 = *(int *)(lVar4 + 0x44) - *(int *)(lVar6 + 0x44);
LAB_143a5e98f:
            if (bVar13 != iVar9 < 0) goto LAB_143a5ea08;
            if (cVar2 == '\0') goto LAB_143a5e9a9;
            if (cVar1 != '\0') {
              bVar13 = SBORROW4(*(int *)(lVar6 + 0x44),*(int *)(lVar4 + 0x44));
              iVar9 = *(int *)(lVar6 + 0x44) - *(int *)(lVar4 + 0x44);
              goto LAB_143a5e9ef;
            }
          }
          plVar12 = plVar12 + -1;
          if (plVar12 != plVar8) {
            lVar6 = *plVar12;
            *plVar12 = lVar4;
            *plVar8 = lVar6;
          }
        }
LAB_143a5ea08:
      }
      if (plVar7 == param_2) {
        if (plVar10 == param_3) {
          *param_1 = plVar12;
          param_1[1] = plVar11;
          return;
        }
        if (plVar11 != plVar10) {
          lVar4 = *plVar12;
          *plVar12 = *plVar11;
          *plVar11 = lVar4;
        }
        lVar4 = *plVar12;
        *plVar12 = *plVar10;
        plVar12 = plVar12 + 1;
        *plVar10 = lVar4;
        plVar10 = plVar10 + 1;
        plVar11 = plVar11 + 1;
      }
      else {
        plVar7 = plVar7 + -1;
        if (plVar10 == param_3) {
          plVar12 = plVar12 + -1;
          if (plVar7 != plVar12) {
            lVar4 = *plVar7;
            *plVar7 = *plVar12;
            *plVar12 = lVar4;
          }
          lVar4 = *plVar12;
          *plVar12 = plVar11[-1];
          plVar11[-1] = lVar4;
          plVar11 = plVar11 + -1;
        }
        else {
          lVar4 = *plVar10;
          *plVar10 = *plVar7;
          plVar10 = plVar10 + 1;
          *plVar7 = lVar4;
        }
      }
      goto joined_r0x000143a5e805;
    }
    lVar4 = *plVar12;
    lVar6 = *plVar10;
    cVar1 = *(char *)(lVar4 + 0x42);
    cVar2 = *(char *)(lVar6 + 0x42);
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        lVar5 = lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28);
        lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
        iVar9 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
        iVar3 = (int)((lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28)) / 0x98);
        bVar13 = SBORROW4(iVar9,iVar3);
        iVar9 = iVar9 - iVar3;
        goto LAB_143a5e87f;
      }
    }
    else {
      if (cVar2 == '\0') {
LAB_143a5e899:
        if (cVar1 == '\0') {
          lVar5 = lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28);
          lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
          iVar9 = (int)(lVar5 >> 2) - (int)(lVar5 >> 0x3f);
          iVar3 = (int)((lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28)) / 0x98);
          bVar13 = SBORROW4(iVar9,iVar3);
          iVar9 = iVar9 - iVar3;
LAB_143a5e8df:
          if (bVar13 == iVar9 < 0) goto LAB_143a5e8e6;
        }
        goto joined_r0x000143a5e908;
      }
      bVar13 = SBORROW4(*(int *)(lVar4 + 0x44),*(int *)(lVar6 + 0x44));
      iVar9 = *(int *)(lVar4 + 0x44) - *(int *)(lVar6 + 0x44);
LAB_143a5e87f:
      if (bVar13 == iVar9 < 0) {
        if (cVar2 == '\0') goto LAB_143a5e899;
        if (cVar1 != '\0') {
          bVar13 = SBORROW4(*(int *)(lVar6 + 0x44),*(int *)(lVar4 + 0x44));
          iVar9 = *(int *)(lVar6 + 0x44) - *(int *)(lVar4 + 0x44);
          goto LAB_143a5e8df;
        }
LAB_143a5e8e6:
        if (plVar11 != plVar10) {
          lVar4 = *plVar11;
          *plVar11 = lVar6;
          *plVar10 = lVar4;
        }
        plVar11 = plVar11 + 1;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 143a5ead0 FUN_143a5ead0 body=430 status=ok
// SIG undefined FUN_143a5ead0(void)

void FUN_143a5ead0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lVar7 < lVar5) {
    lVar6 = *(longlong *)(param_1 + 0x10 + lVar7 * 0x10);
    lVar4 = lVar7 * 2 + 2;
    lVar3 = *(longlong *)(param_1 + 8 + lVar7 * 0x10);
    if (*(char *)(lVar6 + 0x42) == '\0') {
      if (*(char *)(lVar3 + 0x42) == '\0') {
        lVar6 = lVar6 - *(longlong *)(*(longlong *)(lVar6 + 0x50) + 0x28);
        lVar6 = lVar6 / 0x26 + (lVar6 >> 0x3f);
        iVar2 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
        iVar1 = (int)((lVar3 - *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x28)) / 0x98);
        bVar8 = SBORROW4(iVar2,iVar1);
        iVar2 = iVar2 - iVar1;
        goto LAB_143a5eb8b;
      }
LAB_143a5eb92:
      lVar4 = lVar7 * 2 + 1;
    }
    else if (*(char *)(lVar3 + 0x42) != '\0') {
      bVar8 = SBORROW4(*(int *)(lVar6 + 0x44),*(int *)(lVar3 + 0x44));
      iVar2 = *(int *)(lVar6 + 0x44) - *(int *)(lVar3 + 0x44);
LAB_143a5eb8b:
      if (bVar8 != iVar2 < 0) goto LAB_143a5eb92;
    }
    *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
    lVar7 = lVar4;
  }
  if ((lVar7 == lVar5) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar7 = param_3 - 1;
  }
  if (param_2 < lVar7) {
    do {
      lVar5 = *param_4;
      lVar6 = lVar7 + -1 >> 1;
      lVar4 = *(longlong *)(param_1 + lVar6 * 8);
      if (*(char *)(lVar4 + 0x42) == '\0') {
        if (*(char *)(lVar5 + 0x42) == '\0') {
          lVar3 = lVar4 - *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x28);
          lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
          iVar2 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
          iVar1 = (int)((lVar5 - *(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x28)) / 0x98);
          bVar8 = SBORROW4(iVar2,iVar1);
          iVar2 = iVar2 - iVar1;
          goto LAB_143a5ec3a;
        }
      }
      else {
        if (*(char *)(lVar5 + 0x42) == '\0') {
          *(longlong *)(param_1 + lVar7 * 8) = lVar5;
          return;
        }
        bVar8 = SBORROW4(*(int *)(lVar4 + 0x44),*(int *)(lVar5 + 0x44));
        iVar2 = *(int *)(lVar4 + 0x44) - *(int *)(lVar5 + 0x44);
LAB_143a5ec3a:
        if (bVar8 == iVar2 < 0) goto LAB_143a5ec5c;
      }
      *(longlong *)(param_1 + lVar7 * 8) = lVar4;
      lVar7 = lVar6;
    } while (param_2 < lVar6);
    *(longlong *)(param_1 + lVar6 * 8) = *param_4;
  }
  else {
LAB_143a5ec5c:
    *(longlong *)(param_1 + lVar7 * 8) = *param_4;
  }
  return;
}



// FUNCTION 143a5ec80 FUN_143a5ec80 body=366 status=ok
// SIG undefined FUN_143a5ec80(void)

void FUN_143a5ec80(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  longlong local_28;
  undefined8 *local_20;
  
  lVar1 = param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 >> 3;
    if (lVar1 < 0x21) {
LAB_143a5ed46:
      if (1 < lVar1) {
        FUN_143a5d870(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_143a5e270(param_1,param_2,param_4);
        lVar1 = param_2 - (longlong)param_1 >> 3;
        if (lVar1 < 2) {
          return;
        }
        puVar3 = (undefined8 *)(param_2 + -8);
        if (lVar1 < 2) goto LAB_143a5edd7;
        do {
          local_res8 = *puVar3;
          *puVar3 = *param_1;
          FUN_143a5ead0(param_1,0,(longlong)puVar3 - (longlong)param_1 >> 3,&local_res8,param_4);
LAB_143a5edd7:
          puVar3 = puVar3 + -1;
        } while (1 < (8 - (longlong)param_1) + (longlong)puVar3 >> 3);
        return;
      }
      goto LAB_143a5ed46;
    }
    FUN_143a5e540(&local_28,param_1,param_2,param_4);
    puVar3 = local_20;
    lVar2 = local_28;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)(local_28 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)(param_2 - (longlong)local_20 & 0xfffffffffffffff8U)) {
      FUN_143a5ec80(param_1,local_28,param_3,param_4);
      lVar2 = param_2;
      param_1 = puVar3;
    }
    else {
      FUN_143a5ec80(local_20,param_2,param_3,param_4);
    }
    lVar1 = lVar2 - (longlong)param_1;
    param_2 = lVar2;
  } while( true );
}



// FUNCTION 143a5edf0 _Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_> body=262 status=ok
// SIG undefined _Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>(void)

void std::_Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 < 0x21) {
    FUN_143a5da20(param_1,param_2,param_6);
    return;
  }
  lVar2 = param_3 >> 1;
  param_3 = param_3 - lVar2;
  lVar1 = param_1 + param_3 * 8;
  if (param_5 < param_3) {
    _Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>
              (param_1,lVar1,param_3,param_4,param_5,param_6);
    _Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>
              (lVar1,param_2,lVar2,param_4,param_5,param_6);
  }
  else {
    FUN_143a5cb20();
    FUN_143a5cb20(lVar1,param_2,lVar2,param_4,param_6);
  }
  FUN_143a5c730(param_1,lVar1,param_2,param_3,lVar2,param_4,param_5,param_6);
  return;
}



// FUNCTION 143a5ef00 FUN_143a5ef00 body=926 status=ok
// SIG undefined FUN_143a5ef00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143a5ef00(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 *_Buf1;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_e0 [8];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  ulonglong local_88;
  ulonglong local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_d0 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar17 = param_2 - (longlong)param_1 >> 3;
  local_d8 = param_3;
  do {
    do {
      lVar3 = lVar17;
      if (lVar3 < 1) {
        return param_1;
      }
      lVar17 = lVar3 >> 1;
      local_e8 = (undefined1 *)*local_d8;
      plVar1 = (longlong *)param_1[lVar17];
      lVar10 = (**(code **)(*plVar1 + 0xb8))(plVar1,local_c8);
      plVar2 = *(longlong **)(lVar10 + 8);
      iVar6 = FUN_143a009a0(param_4);
      switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar6 * 4)) {
      case 1:
        iVar6 = (**(code **)(*plVar2 + 0x80))(plVar2,plVar1,param_4);
        iVar7 = (**(code **)(*plVar2 + 0x80))(plVar2,local_e8,param_4);
        bVar18 = iVar6 < iVar7;
        break;
      case 2:
        lVar10 = (**(code **)(*plVar2 + 0x88))(plVar2,plVar1,param_4);
        lVar11 = (**(code **)(*plVar2 + 0x88))(plVar2,local_e8,param_4);
        bVar18 = lVar10 < lVar11;
        break;
      case 3:
        uVar8 = (**(code **)(*plVar2 + 0x90))(plVar2,plVar1,param_4);
        uVar9 = (**(code **)(*plVar2 + 0x90))(plVar2,local_e8,param_4);
        bVar18 = uVar8 < uVar9;
        break;
      case 4:
        uVar15 = (**(code **)(*plVar2 + 0x98))(plVar2,plVar1,param_4);
        uVar12 = (**(code **)(*plVar2 + 0x98))(plVar2,local_e8,param_4);
        bVar18 = uVar15 < uVar12;
        break;
      default:
        uVar13 = FUN_1439eeb00(local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc"
                               ,0x7e6);
        uVar13 = FUN_1439eef00(uVar13,"Invalid key for map field.");
        FUN_1439eec50(local_e0,uVar13);
        DsDevice::~DsDevice(local_78);
        goto LAB_143a5f249;
      case 7:
        bVar4 = (**(code **)(*plVar2 + 0xb0))(plVar2,plVar1,param_4);
        bVar5 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_e8,param_4);
        bVar18 = bVar4 < bVar5;
        break;
      case 9:
        (**(code **)(*plVar2 + 0xb8))(plVar2,&local_b8,plVar1,param_4);
        (**(code **)(*plVar2 + 0xb8))(plVar2,&local_98,local_e8,param_4);
        local_e8 = (undefined1 *)CONCAT71(uStack_97,local_98);
        puVar14 = &local_98;
        if (0xf < local_80) {
          puVar14 = local_e8;
        }
        puVar16 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
        _Buf1 = &local_b8;
        if (0xf < local_a0) {
          _Buf1 = puVar16;
        }
        uVar15 = local_a8;
        if (local_88 < local_a8) {
          uVar15 = local_88;
        }
        iVar6 = _guard_xfg_dispatch_icall_nop(_Buf1,puVar14,uVar15);
        if (iVar6 == 0) {
          if (local_a8 < local_88) {
            iVar6 = -1;
          }
          else {
            iVar6 = 0;
          }
        }
        bVar18 = SUB41((uint)iVar6 >> 0x1f,0);
        if (0xf < local_80) {
          uVar15 = local_80 + 1;
          puVar14 = local_e8;
          if (0xfff < uVar15) {
            uVar15 = local_80 + 0x28;
            puVar14 = *(undefined1 **)(local_e8 + -8);
            if ((undefined1 *)0x1f < local_e8 + (-8 - (longlong)puVar14)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(puVar14,uVar15);
          puVar16 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
        }
        local_88 = 0;
        local_80 = 0xf;
        local_98 = 0;
        if (0xf < local_a0) {
          uVar15 = local_a0 + 1;
          puVar14 = puVar16;
          if (0xfff < uVar15) {
            uVar15 = local_a0 + 0x28;
            puVar14 = *(undefined1 **)(puVar16 + -8);
            if ((undefined1 *)0x1f < puVar16 + (-8 - (longlong)puVar14)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(puVar14,uVar15);
        }
        local_a8 = 0;
        local_a0 = 0xf;
        local_b8 = 0;
      }
    } while (bVar18 == false);
LAB_143a5f249:
    param_1 = param_1 + lVar17 + 1;
    lVar17 = lVar3 + (-1 - lVar17);
  } while( true );
}



// FUNCTION 143a5f2d0 FUN_143a5f2d0 body=922 status=ok
// SIG undefined FUN_143a5f2d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143a5f2d0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 *_Buf1;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0;
  undefined7 uStack_bf;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_d8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar19 = param_2 - (longlong)param_1 >> 3;
  local_e0 = param_3;
  local_f0 = param_1;
joined_r0x000143a5f323:
  do {
    lVar3 = lVar19;
    if (lVar3 < 1) {
      return local_f0;
    }
    lVar19 = lVar3 >> 1;
    puVar16 = local_f0 + lVar19;
    uVar12 = *puVar16;
    plVar1 = (longlong *)*local_e0;
    local_e8 = puVar16;
    lVar10 = (**(code **)(*plVar1 + 0xb8))(plVar1,local_d0);
    plVar2 = *(longlong **)(lVar10 + 8);
    iVar6 = FUN_143a009a0(param_4);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar6 * 4)) {
    case 1:
      iVar6 = (**(code **)(*plVar2 + 0x80))(plVar2,plVar1,param_4);
      iVar7 = (**(code **)(*plVar2 + 0x80))(plVar2,uVar12,param_4);
      bVar20 = iVar6 < iVar7;
      break;
    case 2:
      lVar10 = (**(code **)(*plVar2 + 0x88))(plVar2,plVar1,param_4);
      lVar11 = (**(code **)(*plVar2 + 0x88))(plVar2,uVar12,param_4);
      bVar20 = lVar10 < lVar11;
      break;
    case 3:
      uVar8 = (**(code **)(*plVar2 + 0x90))(plVar2,plVar1,param_4);
      uVar9 = (**(code **)(*plVar2 + 0x90))(plVar2,uVar12,param_4);
      bVar20 = uVar8 < uVar9;
      break;
    case 4:
      uVar14 = (**(code **)(*plVar2 + 0x98))(plVar2,plVar1,param_4);
      uVar15 = (**(code **)(*plVar2 + 0x98))(plVar2,uVar12,param_4);
      bVar20 = uVar14 < uVar15;
      break;
    default:
      goto switchD_143a5f38b_caseD_5;
    case 7:
      bVar4 = (**(code **)(*plVar2 + 0xb0))(plVar2,plVar1,param_4);
      bVar5 = (**(code **)(*plVar2 + 0xb0))(plVar2,uVar12,param_4);
      bVar20 = bVar4 < bVar5;
      break;
    case 9:
      (**(code **)(*plVar2 + 0xb8))(plVar2,&local_c0,plVar1,param_4);
      (**(code **)(*plVar2 + 0xb8))(plVar2,&local_a0,uVar12,param_4);
      uVar14 = local_a8;
      puVar18 = (undefined1 *)CONCAT71(uStack_9f,local_a0);
      puVar13 = &local_a0;
      if (0xf < local_88) {
        puVar13 = puVar18;
      }
      puVar17 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
      _Buf1 = &local_c0;
      if (0xf < local_a8) {
        _Buf1 = puVar17;
      }
      uVar15 = local_b0;
      if (local_90 < local_b0) {
        uVar15 = local_90;
      }
      iVar6 = _guard_xfg_dispatch_icall_nop(_Buf1,puVar13,uVar15);
      if (iVar6 == 0) {
        if (local_b0 < local_90) {
          iVar6 = -1;
        }
        else {
          iVar6 = 0;
        }
      }
      bVar20 = SUB41((uint)iVar6 >> 0x1f,0);
      if (0xf < local_88) {
        uVar14 = local_88 + 1;
        puVar13 = puVar18;
        if (0xfff < uVar14) {
          uVar14 = local_88 + 0x28;
          puVar13 = *(undefined1 **)(puVar18 + -8);
          if ((undefined1 *)0x1f < puVar18 + (-8 - (longlong)puVar13)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar13,uVar14);
        puVar17 = (undefined1 *)CONCAT71(uStack_bf,local_c0);
        uVar14 = local_a8;
      }
      local_90 = 0;
      local_88 = 0xf;
      local_a0 = 0;
      if (0xf < uVar14) {
        uVar15 = uVar14 + 1;
        puVar18 = puVar17;
        if (0xfff < uVar15) {
          uVar15 = uVar14 + 0x28;
          puVar18 = *(undefined1 **)(puVar17 + -8);
          if ((undefined1 *)0x1f < puVar17 + (-8 - (longlong)puVar18)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar18,uVar15);
      }
      local_b0 = 0;
      local_a8 = 0xf;
      local_c0 = 0;
      puVar16 = local_e8;
    }
    if (bVar20 == false) {
      local_f0 = puVar16 + 1;
      lVar19 = lVar3 + (-1 - lVar19);
    }
  } while( true );
switchD_143a5f38b_caseD_5:
  uVar12 = FUN_1439eeb00(local_80,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",0x7e6
                        );
  uVar12 = FUN_1439eef00(uVar12,"Invalid key for map field.");
  FUN_1439eec50(local_f8,uVar12);
  DsDevice::~DsDevice(local_80);
  goto joined_r0x000143a5f323;
}



// FUNCTION 143a5f690 FUN_143a5f690 body=21 status=ok
// SIG undefined FUN_143a5f690(void)

undefined8 * FUN_143a5f690(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143a5f6b0 FUN_143a5f6b0 body=260 status=ok
// SIG undefined FUN_143a5f6b0(void)

undefined8 *
FUN_143a5f6b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
             char param_13,undefined1 param_14)

{
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::vftable;
  param_1[4] = param_1;
  FUN_143a82cc0(param_1 + 5,param_3,param_1 + 3,param_4,0xfffffffffffffffe);
  param_1[0x1d] = param_2;
  *(undefined4 *)(param_1 + 0x1e) = param_7;
  *(undefined1 *)((longlong)param_1 + 0xf4) = param_8;
  *(undefined1 *)((longlong)param_1 + 0xf5) = param_9;
  *(undefined1 *)((longlong)param_1 + 0xf6) = param_10;
  *(undefined1 *)((longlong)param_1 + 0xf7) = param_11;
  *(undefined1 *)(param_1 + 0x1f) = param_12;
  *(undefined1 *)((longlong)param_1 + 0xf9) = param_14;
  *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  if (param_13 != '\0') {
    *(undefined2 *)((longlong)param_1 + 0xe4) = 0x100;
  }
  FUN_143a840e0(param_1 + 5);
  return param_1;
}



// FUNCTION 143a5f7c0 FUN_143a5f7c0 body=183 status=ok
// SIG undefined FUN_143a5f7c0(void)

undefined8 *
FUN_143a5f7c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = (undefined8 *)0x0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = param_1 + 4;
  *puVar2 = 0;
  param_1[5] = 0;
  uVar1 = std::
          _Tree_comp_alloc<std::_Tmap_traits<unsigned_short,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>_>,0>_>
          ::_Buyheadnode(puVar2);
  *puVar2 = uVar1;
  puVar2 = param_1 + 6;
  *puVar2 = 0;
  param_1[7] = 0;
  uVar1 = std::
          _Tree_comp_alloc<std::_Tmap_traits<unsigned_short,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>_>,0>_>
          ::_Buyheadnode(puVar2);
  *puVar2 = uVar1;
  param_1[8] = 0;
  puVar2 = (undefined8 *)operator_new(8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = google::protobuf::TextFormat::FastFieldValuePrinter::vftable;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)param_1[3];
  param_1[3] = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1,param_3,param_4,uVar4);
  }
  return param_1;
}



// FUNCTION 143a5f880 ~map<vxcl::SKeyName,vxcl::SKeyName,std::less<vxcl::SKeyName>,std::allocator<std::pair<vxcl::SKeyName_const_,vxcl::SKeyName>_>_> body=32 status=ok
// SIG undefined ~map<vxcl::SKeyName,vxcl::SKeyName,std::less<vxcl::SKeyName>,std::allocator<std::pair<vxcl::SKeyName_const_,vxcl::SKeyName>_>_>(void)

void std::
     map<vxcl::SKeyName,vxcl::SKeyName,std::less<vxcl::SKeyName>,std::allocator<std::pair<vxcl::SKeyName_const_,vxcl::SKeyName>_>_>
     ::
     ~map<vxcl::SKeyName,vxcl::SKeyName,std::less<vxcl::SKeyName>,std::allocator<std::pair<vxcl::SKeyName_const_,vxcl::SKeyName>_>_>
               (undefined8 *param_1)

{
  FUN_143a6b9d0();
  FMemory::operator_delete(*param_1,0x30);
  return;
}



// FUNCTION 143a5f8a0 FUN_143a5f8a0 body=55 status=ok
// SIG undefined FUN_143a5f8a0(void)

void FUN_143a5f8a0(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143a6ba60(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1,0xfffffffffffffffe
               );
  FMemory::operator_delete(*param_1,0x40);
  return;
}



// FUNCTION 143a5f8e0 ~FPhysXPlatformModule body=11 status=ok
// SIG undefined ~FPhysXPlatformModule(void)

void FPhysXPlatformModule::~FPhysXPlatformModule(undefined8 *param_1)

{
  *param_1 = google::protobuf::TextFormat::Finder::vftable;
  return;
}



// FUNCTION 143a5f8f0 FUN_143a5f8f0 body=15 status=ok
// SIG undefined FUN_143a5f8f0(void)

void FUN_143a5f8f0(undefined8 *param_1)

{
  *param_1 = google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::vftable;
  FExec::~FExec();
  return;
}



// FUNCTION 143a5f900 FUN_143a5f900 body=42 status=ok
// SIG undefined FUN_143a5f900(void)

void FUN_143a5f900(longlong param_1)

{
  FUN_143a82d70(param_1 + 0x28);
  *(undefined ***)(param_1 + 0x18) =
       google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::vftable;
  FExec::~FExec();
  return;
}



// FUNCTION 143a5f930 FUN_143a5f930 body=375 status=ok
// SIG undefined FUN_143a5f930(void)

void FUN_143a5f930(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    plVar6 = *(longlong **)*plVar1;
    if (plVar6 != (longlong *)*plVar1) {
      do {
        puVar3 = (undefined8 *)plVar6[5];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        plVar7 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar7 + 0x19);
          plVar6 = plVar7;
          plVar7 = (longlong *)*plVar7;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar7 + 0x19);
            plVar6 = plVar7;
            plVar7 = (longlong *)*plVar7;
          }
        }
        else {
          cVar2 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar7 = plVar6;
          while ((plVar6 = plVar4, cVar2 == '\0' && (plVar7 == (longlong *)plVar6[2]))) {
            cVar2 = *(char *)(plVar6[1] + 0x19);
            plVar4 = (longlong *)plVar6[1];
            plVar7 = plVar6;
          }
        }
      } while (plVar6 != (longlong *)*plVar1);
    }
    FUN_143a6b9d0(plVar1);
  }
  plVar6 = (longlong *)(param_1 + 0x30);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = *(longlong **)*plVar6;
    if (plVar7 != (longlong *)*plVar6) {
      do {
        puVar3 = (undefined8 *)plVar7[5];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        plVar4 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar4 + 0x19);
          plVar7 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar4 + 0x19);
            plVar7 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar2 = *(char *)(plVar7[1] + 0x19);
          plVar5 = (longlong *)plVar7[1];
          plVar4 = plVar7;
          while ((plVar7 = plVar5, cVar2 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
            cVar2 = *(char *)(plVar7[1] + 0x19);
            plVar5 = (longlong *)plVar7[1];
            plVar4 = plVar7;
          }
        }
      } while (plVar7 != (longlong *)*plVar6);
    }
    FUN_143a6b9d0(plVar6);
  }
  FUN_143a6b9d0(plVar6);
  FMemory::operator_delete(*plVar6,0x30);
  FUN_143a6b9d0(plVar1);
  FMemory::operator_delete(*plVar1,0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143a5fa9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1);
  return;
}



// FUNCTION 143a5fab0 FUN_143a5fab0 body=84 status=ok
// SIG undefined FUN_143a5fab0(void)

void FUN_143a5fab0(undefined8 *param_1)

{
  *param_1 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  if ((*(char *)((longlong)param_1 + 0x1d) == '\0') && (0 < *(int *)(param_1 + 3))) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    *param_1 = google::protobuf::TextFormat::BaseTextGenerator::vftable;
    return;
  }
  *param_1 = google::protobuf::TextFormat::BaseTextGenerator::vftable;
  return;
}



// FUNCTION 143a5fb10 FUN_143a5fb10 body=774 status=ok
// SIG undefined FUN_143a5fb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143a5fb10(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 ****ppppuVar16;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 ***local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_40;
  
  local_b0 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar9 = (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
  plVar1 = *(longlong **)(lVar9 + 8);
  iVar5 = FUN_143a009a0(*param_1);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar5 * 4)) {
  case 1:
    iVar5 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2,*param_1);
    iVar6 = (**(code **)(*plVar1 + 0x80))(plVar1,param_3,*param_1);
    uVar8 = (uint)(iVar5 < iVar6);
    break;
  case 2:
    lVar9 = (**(code **)(*plVar1 + 0x88))(plVar1,param_2,*param_1);
    lVar10 = (**(code **)(*plVar1 + 0x88))(plVar1,param_3,*param_1);
    uVar8 = (uint)(lVar9 < lVar10);
    break;
  case 3:
    uVar8 = (**(code **)(*plVar1 + 0x90))(plVar1,param_2,*param_1);
    uVar7 = (**(code **)(*plVar1 + 0x90))(plVar1,param_3,*param_1);
    uVar8 = (uint)(uVar8 < uVar7);
    break;
  case 4:
    uVar14 = (**(code **)(*plVar1 + 0x98))(plVar1,param_2,*param_1);
    uVar15 = (**(code **)(*plVar1 + 0x98))(plVar1,param_3,*param_1);
    uVar8 = (uint)(uVar14 < uVar15);
    break;
  default:
    uVar11 = FUN_1439eeb00(&local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                           0x7e6);
    uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
    FUN_1439eec50(local_b8,uVar11);
    DsDevice::~DsDevice(&local_78);
    uVar8 = 1;
    break;
  case 7:
    bVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,*param_1);
    bVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_3,*param_1);
    uVar8 = (uint)(bVar3 < bVar4);
    break;
  case 9:
    (**(code **)(*plVar1 + 0xb8))(plVar1,local_98,param_2,*param_1);
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_78,param_3,*param_1);
    uVar14 = local_80;
    ppppuVar16 = (undefined8 ****)local_98[0];
    puVar2 = (undefined1 *)CONCAT71(uStack_77,local_78);
    puVar13 = &local_78;
    if (0xf < uStack_60) {
      puVar13 = puVar2;
    }
    ppppuVar12 = local_98;
    if (0xf < local_80) {
      ppppuVar12 = (undefined8 ****)local_98[0];
    }
    uVar15 = local_88;
    if (local_68 < local_88) {
      uVar15 = local_68;
    }
    uVar8 = _guard_xfg_dispatch_icall_nop(ppppuVar12,puVar13,uVar15);
    if (uVar8 == 0) {
      if (local_88 < local_68) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = 0;
      }
    }
    uVar8 = uVar8 >> 0x1f;
    if (0xf < uStack_60) {
      uVar14 = uStack_60 + 1;
      puVar13 = puVar2;
      if (0xfff < uVar14) {
        uVar14 = uStack_60 + 0x28;
        puVar13 = *(undefined1 **)(puVar2 + -8);
        if ((undefined1 *)0x1f < puVar2 + (-8 - (longlong)puVar13)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(puVar13,uVar14);
      uVar14 = local_80;
      ppppuVar16 = (undefined8 ****)local_98[0];
    }
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = 0;
    if (0xf < uVar14) {
      uVar15 = uVar14 + 1;
      ppppuVar12 = ppppuVar16;
      if (0xfff < uVar15) {
        uVar15 = uVar14 + 0x28;
        ppppuVar12 = (undefined8 ****)ppppuVar16[-1];
        if (0x1f < (ulonglong)((longlong)ppppuVar16 + (-8 - (longlong)ppppuVar12))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(ppppuVar12,uVar15);
    }
  }
  return uVar8;
}



// FUNCTION 143a5fe40 FUN_143a5fe40 body=43 status=ok
// SIG undefined FUN_143a5fe40(void)

undefined8 * FUN_143a5fe40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::TextFormat::BaseTextGenerator::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143a5fe70 FUN_143a5fe70 body=43 status=ok
// SIG undefined FUN_143a5fe70(void)

undefined8 * FUN_143a5fe70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::TextFormat::FastFieldValuePrinter::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143a5fea0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FClothingSimulationCommon::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::vftable;
  FExec::~FExec();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143a5fee0 FUN_143a5fee0 body=103 status=ok
// SIG undefined FUN_143a5fee0(void)

undefined8 * FUN_143a5fee0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  if ((*(char *)((longlong)param_1 + 0x1d) == '\0') && (0 < *(int *)(param_1 + 3))) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  *param_1 = google::protobuf::TextFormat::BaseTextGenerator::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a5ff50 FUN_143a5ff50 body=9 status=ok
// SIG undefined FUN_143a5ff50(void)

void FUN_143a5ff50(longlong param_1)

{
  FUN_143a69d60(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143a5ff60 FUN_143a5ff60 body=9 status=ok
// SIG undefined FUN_143a5ff60(void)

void FUN_143a5ff60(longlong param_1)

{
  FUN_143a69ee0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143a5ff70 FUN_143a5ff70 body=409 status=ok
// SIG undefined FUN_143a5ff70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a5ff70(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_1a8 [32];
  undefined **local_188;
  undefined1 **local_180;
  char **local_178;
  undefined8 local_168;
  undefined1 *local_160;
  longlong local_158;
  undefined1 local_150 [32];
  undefined1 *local_130;
  longlong local_128;
  undefined1 local_120 [32];
  longlong local_100 [3];
  ulonglong local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined *local_b0;
  undefined8 local_a8;
  char *local_80;
  undefined8 local_78;
  char *local_50;
  undefined8 local_48;
  ulonglong local_20;
  
  local_168 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 < 0x80000000) {
    uVar2 = CONCAT71((int7)(local_20 >> 8),1);
  }
  else {
    local_e0 = " bytes.";
    local_d8 = 7;
    local_160 = local_150;
    local_158 = FUN_143a596d0(0x7fffffff,local_150);
    local_158 = local_158 + (-0x10 - (longlong)&local_160);
    local_b0 = &DAT_145cc67a0;
    local_a8 = 3;
    local_80 = " bytes";
    local_78 = 6;
    local_130 = local_120;
    local_128 = FUN_143a59810(lVar3,local_120);
    local_128 = local_128 + (-0x10 - (longlong)&local_130);
    local_50 = "Input size too large: ";
    local_48 = 0x16;
    local_178 = &local_e0;
    local_180 = &local_160;
    local_188 = &local_b0;
    uVar1 = FUN_143a59e80(local_100,&local_50,&local_130,&local_80);
    uVar2 = (**(code **)(*param_2 + 8))(param_2,0xffffffff,0,uVar1);
    if (0xf < local_e8) {
      uVar2 = local_e8 + 1;
      lVar3 = local_100[0];
      if (0xfff < uVar2) {
        uVar2 = local_e8 + 0x28;
        lVar3 = *(longlong *)(local_100[0] + -8);
        if (0x1f < (local_100[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uVar2 = FMemory::operator_delete(lVar3,uVar2);
    }
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}



// FUNCTION 143a60110 FUN_143a60110 body=1111 status=ok
// SIG undefined FUN_143a60110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143a60110(longlong param_1,undefined8 *param_2)

{
  size_t *psVar1;
  size_t sVar2;
  size_t _Size;
  int iVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined8 *******pppppppuVar6;
  longlong *_Buf1;
  undefined8 ******ppppppuVar7;
  undefined8 *_Buf2;
  undefined8 ******ppppppuVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  void *_Dst;
  undefined1 auStack_108 [32];
  size_t local_e8;
  undefined4 local_d8;
  undefined8 local_d0;
  ulonglong local_c8 [2];
  longlong local_b8;
  ulonglong uStack_b0;
  undefined8 *******local_a8;
  longlong lStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 ******local_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******local_78;
  undefined8 ******ppppppuStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_d0 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  plVar5 = (longlong *)(param_1 + 0x30);
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = plVar5;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Buf1 = (longlong *)*plVar5;
  }
  psVar1 = param_2 + 2;
  sVar2 = *psVar1;
  _Size = *(size_t *)(param_1 + 0x40);
  if ((_Size == sVar2) && (iVar3 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,_Size), iVar3 == 0)) {
    FUN_143a840e0(param_1 + 0x28);
    return 1;
  }
  local_b8 = 0;
  uStack_b0 = 0xf;
  local_c8[0]._0_1_ = 0;
  local_d8 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(local_c8,sVar2 + 10)
  ;
  if (uStack_b0 - local_b8 < 10) {
    local_e8 = 10;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (local_c8,10,0,"Expected \"");
  }
  else {
    puVar10 = (undefined1 *)local_c8;
    if (0xf < uStack_b0) {
      puVar10 = (undefined1 *)CONCAT71(local_c8[0]._1_7_,(undefined1)local_c8[0]);
    }
    puVar10 = puVar10 + local_b8;
    local_b8 = local_b8 + 10;
    _guard_xfg_dispatch_icall_nop(puVar10,"Expected \"",10);
    puVar10[10] = 0;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  sVar2 = *psVar1;
  if (uStack_b0 - local_b8 < sVar2) {
    local_e8 = sVar2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (local_c8,sVar2,0,param_2);
  }
  else {
    puVar10 = (undefined1 *)local_c8;
    if (0xf < uStack_b0) {
      puVar10 = (undefined1 *)CONCAT71(local_c8[0]._1_7_,(undefined1)local_c8[0]);
    }
    puVar10 = puVar10 + local_b8;
    local_b8 = local_b8 + sVar2;
    _guard_xfg_dispatch_icall_nop(puVar10,param_2,sVar2);
    puVar10[sVar2] = 0;
  }
  if (uStack_b0 - local_b8 < 10) {
    local_e8 = 10;
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                       (local_c8,10,0,"\", found \"");
  }
  else {
    puVar10 = (undefined1 *)local_c8;
    if (0xf < uStack_b0) {
      puVar10 = (undefined1 *)CONCAT71(local_c8[0]._1_7_,(undefined1)local_c8[0]);
    }
    puVar10 = puVar10 + local_b8;
    local_b8 = local_b8 + 10;
    _guard_xfg_dispatch_icall_nop(puVar10,"\", found \"",10);
    puVar10[10] = 0;
    puVar4 = local_c8;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *puVar4;
  uStack_60 = puVar4[1];
  local_58 = puVar4[2];
  uStack_50 = puVar4[3];
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  *(undefined1 *)puVar4 = 0;
  local_d8 = 3;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    plVar5 = (longlong *)*plVar5;
  }
  plVar5 = (longlong *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                     (&local_68,plVar5,*(size_t *)(param_1 + 0x40));
  local_a8 = (undefined8 *******)*plVar5;
  lStack_a0 = plVar5[1];
  local_98 = plVar5[2];
  uStack_90 = plVar5[3];
  plVar5[2] = 0;
  plVar5[3] = 0xf;
  *(undefined1 *)plVar5 = 0;
  local_d8 = 7;
  if (uStack_90 - local_98 < 2) {
    local_e8 = 2;
    pppppppuVar6 = (undefined8 *******)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                   _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                             (&local_a8,2,0,&DAT_145cc1490);
  }
  else {
    pppppppuVar6 = &local_a8;
    if (0xf < uStack_90) {
      pppppppuVar6 = local_a8;
    }
    _Dst = (void *)((longlong)pppppppuVar6 + local_98);
    local_98 = local_98 + 2;
    _guard_xfg_dispatch_icall_nop(_Dst,&DAT_145cc1490,2);
    *(undefined1 *)((longlong)_Dst + 2) = 0;
    pppppppuVar6 = &local_a8;
  }
  local_78 = (undefined8 ******)0x0;
  ppppppuStack_70 = (undefined8 ******)0x0;
  local_88 = *pppppppuVar6;
  ppppppuStack_80 = pppppppuVar6[1];
  local_78 = pppppppuVar6[2];
  ppppppuStack_70 = pppppppuVar6[3];
  pppppppuVar6[2] = (undefined8 ******)0x0;
  pppppppuVar6[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar6 = 0;
  local_d8 = 0xf;
  FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_88);
  if ((undefined8 ******)0xf < ppppppuStack_70) {
    ppppppuVar8 = (undefined8 ******)((longlong)ppppppuStack_70 + 1);
    ppppppuVar7 = local_88;
    if ((undefined8 ******)0xfff < ppppppuVar8) {
      ppppppuVar8 = ppppppuStack_70 + 5;
      ppppppuVar7 = (undefined8 ******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppppuVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(ppppppuVar7,ppppppuVar8);
  }
  local_78 = (undefined8 ******)0x0;
  ppppppuStack_70 = (undefined8 ******)0xf;
  local_88 = (undefined8 ******)((ulonglong)local_88 & 0xffffffffffffff00);
  if (0xf < uStack_90) {
    uVar9 = uStack_90 + 1;
    if ((0xfff < uVar9) &&
       (uVar9 = uStack_90 + 0x28,
       0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)local_a8[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FMemory::operator_delete(0,uVar9);
  }
  local_98 = 0;
  uStack_90 = 0xf;
  local_a8 = (undefined8 *******)((ulonglong)local_a8 & 0xffffffffffffff00);
  if (0xf < uStack_50) {
    uVar9 = uStack_50 + 1;
    if ((0xfff < uVar9) &&
       (uVar9 = uStack_50 + 0x28, 0x1f < (local_68 - *(longlong *)(local_68 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FMemory::operator_delete(0,uVar9);
  }
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = local_68 & 0xffffffffffffff00;
  if (0xf < uStack_b0) {
    uVar9 = uStack_b0 + 1;
    if ((0xfff < uVar9) &&
       (uVar9 = uStack_b0 + 0x28,
       0x1f < (CONCAT71(local_c8[0]._1_7_,(undefined1)local_c8[0]) -
              *(longlong *)(CONCAT71(local_c8[0]._1_7_,(undefined1)local_c8[0]) + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FMemory::operator_delete(0,uVar9);
  }
  return 0;
}



// FUNCTION 143a60570 FUN_143a60570 body=1430 status=ok
// SIG undefined FUN_143a60570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_143a60570(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  size_t sVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong *_Src;
  undefined8 *puVar13;
  undefined1 auStack_d8 [32];
  size_t local_b8;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  size_t local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  local_a0 = param_3;
  local_98 = param_2;
  cVar4 = FUN_143a64350(param_1,param_3);
  if (cVar4 != '\0') {
    _Src = (longlong *)(param_1 + 0x30);
    while( true ) {
      local_58 = 0;
      uStack_50 = 0xf;
      local_68 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_68,&DAT_143f47cc0,1);
      uVar10 = uStack_50;
      puVar11 = (undefined1 *)CONCAT71(uStack_67,local_68);
      puVar9 = &local_68;
      if (0xf < uStack_50) {
        puVar9 = puVar11;
      }
      plVar6 = _Src;
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        plVar6 = (longlong *)*_Src;
      }
      if ((*(size_t *)(param_1 + 0x40) == local_58) &&
         (iVar5 = _guard_xfg_dispatch_icall_nop(plVar6,puVar9,*(size_t *)(param_1 + 0x40)),
         iVar5 == 0)) {
        FUN_143a840e0(param_1 + 0x28);
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (0xf < uVar10) {
        uVar8 = uVar10 + 1;
        puVar9 = puVar11;
        if (0xfff < uVar8) {
          uVar8 = uVar10 + 0x28;
          puVar9 = *(undefined1 **)(puVar11 + -8);
          if ((undefined1 *)0x1f < puVar11 + (-8 - (longlong)puVar9)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar9,uVar8);
      }
      if (!bVar3) {
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_68,&DAT_145cc6654,1);
        cVar4 = FUN_143a60110(param_1,&local_68);
        if (0xf < uStack_50) {
          uVar10 = uStack_50 + 1;
          lVar2 = CONCAT71(uStack_67,local_68);
          lVar7 = lVar2;
          if (0xfff < uVar10) {
            uVar10 = uStack_50 + 0x28;
            lVar7 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar7,uVar10);
        }
        if (cVar4 == '\0') {
          return false;
        }
        uVar10 = local_a0[2];
        if (local_a0[3] == uVar10) {
          local_b8 = 1;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (local_a0,1,0,&DAT_145cc6654);
        }
        else {
          local_a0[2] = uVar10 + 1;
          puVar13 = local_a0;
          if (0xf < (ulonglong)local_a0[3]) {
            puVar13 = (undefined8 *)*local_a0;
          }
          _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar13 + uVar10),&DAT_145cc6654,1);
          *(undefined1 *)((longlong)((longlong)puVar13 + uVar10) + 1) = 0;
        }
        cVar4 = FUN_143a63f90(param_1,local_98);
        return cVar4 != '\0';
      }
      local_58 = 0;
      uStack_50 = 0xf;
      local_68 = 0;
      if ((*(int *)(param_1 + 0x28) != 2) &&
         ((((*(char *)(param_1 + 0xf8) == '\0' && (*(char *)(param_1 + 0xf5) == '\0')) &&
           (*(char *)(param_1 + 0xf6) == '\0')) || (*(int *)(param_1 + 0x28) != 3)))) break;
      if ((longlong *)&local_68 != _Src) {
        plVar6 = _Src;
        if (0xf < *(ulonglong *)(param_1 + 0x48)) {
          plVar6 = (longlong *)*_Src;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_68,plVar6,*(undefined8 *)(param_1 + 0x40));
      }
      uVar10 = uStack_50;
      sVar1 = local_58;
      FUN_143a840e0(param_1 + 0x28);
      local_78 = 0;
      local_70 = 0xf;
      local_88 = 0;
      local_a8 = 2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (&local_88,sVar1 + 1);
      if (local_70 == local_78) {
        local_b8 = 1;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_88,1,0,&DAT_143f47cc0);
      }
      else {
        puVar11 = &local_88;
        if (0xf < local_70) {
          puVar11 = (undefined1 *)CONCAT71(uStack_87,local_88);
        }
        puVar11 = puVar11 + local_78;
        local_78 = local_78 + 1;
        _guard_xfg_dispatch_icall_nop(puVar11,&DAT_143f47cc0,1);
        puVar11[1] = 0;
      }
      puVar11 = (undefined1 *)CONCAT71(uStack_67,local_68);
      puVar9 = &local_68;
      if (0xf < uVar10) {
        puVar9 = puVar11;
      }
      if (local_70 - local_78 < sVar1) {
        local_b8 = sVar1;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_88,sVar1,0);
        puVar11 = (undefined1 *)CONCAT71(uStack_67,local_68);
        uVar10 = uStack_50;
      }
      else {
        puVar12 = &local_88;
        if (0xf < local_70) {
          puVar12 = (undefined1 *)CONCAT71(uStack_87,local_88);
        }
        puVar12 = puVar12 + local_78;
        local_78 = sVar1 + local_78;
        _guard_xfg_dispatch_icall_nop(puVar12,puVar9,sVar1);
        puVar12[sVar1] = 0;
      }
      puVar9 = &local_88;
      if (0xf < local_70) {
        puVar9 = (undefined1 *)CONCAT71(uStack_87,local_88);
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (local_a0,puVar9,local_78);
      if (0xf < local_70) {
        uVar8 = local_70 + 1;
        lVar2 = CONCAT71(uStack_87,local_88);
        lVar7 = lVar2;
        if (0xfff < uVar8) {
          uVar8 = local_70 + 0x28;
          lVar7 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar8);
      }
      if (0xf < uVar10) {
        uVar8 = uVar10 + 1;
        puVar9 = puVar11;
        if (0xfff < uVar8) {
          uVar8 = uVar10 + 0x28;
          puVar9 = *(undefined1 **)(puVar11 + -8);
          if ((undefined1 *)0x1f < puVar11 + (-8 - (longlong)puVar9)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar9,uVar8);
      }
    }
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
    local_a8 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_88,*(size_t *)(param_1 + 0x40) + 0x1a);
    if (local_70 - local_78 < 0x1a) {
      local_b8 = 0x1a;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_88,0x1a,0,"Expected identifier, got: ");
    }
    else {
      puVar11 = &local_88;
      if (0xf < local_70) {
        puVar11 = (undefined1 *)CONCAT71(uStack_87,local_88);
      }
      puVar11 = puVar11 + local_78;
      local_78 = local_78 + 0x1a;
      _guard_xfg_dispatch_icall_nop(puVar11,"Expected identifier, got: ",0x1a);
      puVar11[0x1a] = 0;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      _Src = (longlong *)*_Src;
    }
    sVar1 = *(size_t *)(param_1 + 0x40);
    if (local_70 - local_78 < sVar1) {
      local_b8 = sVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_88,sVar1,0,_Src);
    }
    else {
      puVar11 = &local_88;
      if (0xf < local_70) {
        puVar11 = (undefined1 *)CONCAT71(uStack_87,local_88);
      }
      puVar11 = puVar11 + local_78;
      local_78 = local_78 + sVar1;
      _guard_xfg_dispatch_icall_nop(puVar11,_Src,sVar1);
      puVar11[sVar1] = 0;
    }
    FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_88)
    ;
    if (0xf < local_70) {
      uVar10 = local_70 + 1;
      lVar2 = CONCAT71(uStack_87,local_88);
      lVar7 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = local_70 + 0x28;
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar10);
    }
  }
  return false;
}



// FUNCTION 143a60b10 FUN_143a60b10 body=984 status=ok
// SIG undefined FUN_143a60b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143a60b10(longlong param_1,longlong param_2,undefined8 param_3)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *_Src;
  char *pcVar10;
  undefined1 auStack_158 [32];
  size_t local_138;
  undefined4 local_128;
  undefined8 local_120;
  longlong *local_118;
  ulonglong local_110 [2];
  longlong local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_120 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_128 = 0;
  FUN_143a883b0(local_a8);
  plVar4 = (longlong *)FUN_143a88d50(local_a8,param_2);
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
    goto LAB_143a60ebb;
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_c0 = 0;
  uStack_b8 = 0xf;
  local_d0 = 0;
  local_118 = plVar4;
  cVar3 = FUN_143a64860(param_1,&local_d0);
  if (cVar3 == '\0') {
LAB_143a60e55:
    uVar5 = 0;
  }
  else {
    uVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_f0,&local_d0);
    cVar3 = FUN_143a64570(param_1,plVar4,uVar5);
    if (cVar3 == '\0') goto LAB_143a60e55;
    if (*(char *)(param_1 + 0xf9) == '\0') {
      cVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
      if (cVar3 == '\0') {
        _Src = *(undefined8 **)(param_2 + 8);
        local_100 = 0;
        uStack_f8 = 0xf;
        local_128 = 1;
        psVar1 = _Src + 2;
        local_110[0]._0_1_ = cVar3;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                  (local_110,*psVar1 + 0xf);
        if (uStack_f8 - local_100 < 0xf) {
          local_138 = 0xf;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (local_110,0xf,0,"Value of type \"");
        }
        else {
          pcVar10 = (char *)local_110;
          if (0xf < uStack_f8) {
            pcVar10 = (char *)CONCAT71(local_110[0]._1_7_,(char)local_110[0]);
          }
          pcVar10 = pcVar10 + local_100;
          local_100 = local_100 + 0xf;
          _guard_xfg_dispatch_icall_nop(pcVar10,"Value of type \"",0xf);
          pcVar10[0xf] = '\0';
        }
        if (0xf < (ulonglong)_Src[3]) {
          _Src = (undefined8 *)*_Src;
        }
        _Size = *psVar1;
        if (uStack_f8 - local_100 < _Size) {
          local_138 = _Size;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (local_110,_Size,0,_Src);
        }
        else {
          pcVar10 = (char *)local_110;
          if (0xf < uStack_f8) {
            pcVar10 = (char *)CONCAT71(local_110[0]._1_7_,(char)local_110[0]);
          }
          pcVar10 = pcVar10 + local_100;
          local_100 = _Size + local_100;
          _guard_xfg_dispatch_icall_nop(pcVar10,_Src,_Size);
          pcVar10[_Size] = '\0';
        }
        if (uStack_f8 - local_100 < 0x3b) {
          local_138 = 0x3b;
          puVar6 = (ulonglong *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                   _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                             (local_110,0x3b,0,
                              "\" stored in google.protobuf.Any has missing required fields");
        }
        else {
          pcVar10 = (char *)local_110;
          if (0xf < uStack_f8) {
            pcVar10 = (char *)CONCAT71(local_110[0]._1_7_,(char)local_110[0]);
          }
          pcVar10 = pcVar10 + local_100;
          local_100 = local_100 + 0x3b;
          _guard_xfg_dispatch_icall_nop
                    (pcVar10,"\" stored in google.protobuf.Any has missing required fields",0x3b);
          pcVar10[0x3b] = '\0';
          puVar6 = local_110;
        }
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = *puVar6;
        uStack_e8 = puVar6[1];
        local_e0 = puVar6[2];
        uStack_d8 = puVar6[3];
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        *(char *)puVar6 = '\0';
        local_128 = 3;
        FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                      &local_f0);
        if (0xf < uStack_d8) {
          uVar8 = uStack_d8 + 1;
          uVar9 = local_f0;
          if (0xfff < uVar8) {
            uVar8 = uStack_d8 + 0x28;
            uVar9 = *(ulonglong *)(local_f0 - 8);
            if (0x1f < (local_f0 - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(uVar9,uVar8);
        }
        local_e0 = 0;
        uStack_d8 = 0xf;
        local_f0 = local_f0 & 0xffffffffffffff00;
        if (0xf < uStack_f8) {
          uVar9 = uStack_f8 + 1;
          if (0xfff < uVar9) {
            uVar9 = uStack_f8 + 0x28;
            if (0x1f < (CONCAT71(local_110[0]._1_7_,(char)local_110[0]) -
                       *(longlong *)(CONCAT71(local_110[0]._1_7_,(char)local_110[0]) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(0,uVar9);
        }
        goto LAB_143a60e55;
      }
      FUN_1439f0540(plVar4,param_3);
      uVar5 = 1;
    }
    else {
      FUN_1439f03d0(plVar4,param_3);
      uVar5 = 1;
    }
  }
  if (0xf < uStack_b8) {
    uVar9 = uStack_b8 + 1;
    lVar2 = CONCAT71(uStack_cf,local_d0);
    lVar7 = lVar2;
    if (0xfff < uVar9) {
      uVar9 = uStack_b8 + 0x28;
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar7,uVar9);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)*plVar4)(plVar4,1);
  }
LAB_143a60ebb:
  FUN_143a88800(local_a8);
  return uVar5;
}



// FUNCTION 143a60ef0 FUN_143a60ef0 body=1532 status=ok
// SIG undefined FUN_143a60ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a60ef0(longlong param_1,double *param_2)

{
  size_t sVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *_Buf1;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *_Src;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  size_t local_a8;
  char local_98;
  undefined4 local_90;
  int iStack_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  longlong local_70;
  ulonglong uStack_68;
  byte local_60;
  undefined7 uStack_5f;
  size_t local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_88 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar13 = 0;
  local_90 = 0;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_60,&DAT_145cc6554,1);
  uVar10 = uStack_48;
  _Src = (undefined8 *)(param_1 + 0x30);
  pbVar6 = (byte *)CONCAT71(uStack_5f,local_60);
  pbVar8 = &local_60;
  if (0xf < uStack_48) {
    pbVar8 = pbVar6;
  }
  _Buf1 = _Src;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Buf1 = (undefined8 *)*_Src;
  }
  if ((*(size_t *)(param_1 + 0x40) == local_50) &&
     (iVar4 = _guard_xfg_dispatch_icall_nop(_Buf1,pbVar8,*(size_t *)(param_1 + 0x40)), iVar4 == 0))
  {
    FUN_143a840e0(param_1 + 0x28);
    local_98 = '\x01';
  }
  else {
    local_98 = '\0';
  }
  if (0xf < uVar10) {
    uVar9 = uVar10 + 1;
    pbVar8 = pbVar6;
    if (0xfff < uVar9) {
      uVar9 = uVar10 + 0x28;
      pbVar8 = *(byte **)(pbVar6 + -8);
      if ((byte *)0x1f < pbVar6 + (-8 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pbVar8,uVar9);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == 3) {
    cVar3 = FUN_143a651b0(param_1,&local_90,0xffffffffffffffff);
    if (cVar3 == '\0') {
      return 0;
    }
    dVar15 = (double)CONCAT44(iStack_8c,local_90);
    if (iStack_8c < 0) {
      dVar15 = dVar15 + 1.8446744073709552e+19;
    }
    *param_2 = dVar15;
    goto LAB_143a611d4;
  }
  if (iVar4 == 4) {
    dVar15 = (double)FUN_143a848a0(_Src);
    *param_2 = dVar15;
    FUN_143a840e0(param_1 + 0x28);
    goto LAB_143a611d4;
  }
  if (iVar4 != 2) {
    local_70 = 0;
    uStack_68 = 0xf;
    local_80 = 0;
    local_90 = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_80,*(size_t *)(param_1 + 0x40) + 0x16);
    if (uStack_68 - local_70 < 0x16) {
      local_a8 = 0x16;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_80,0x16,0,"Expected double, got: ");
    }
    else {
      puVar11 = &local_80;
      if (0xf < uStack_68) {
        puVar11 = (undefined1 *)CONCAT71(uStack_7f,local_80);
      }
      puVar11 = puVar11 + local_70;
      local_70 = local_70 + 0x16;
      _guard_xfg_dispatch_icall_nop(puVar11,"Expected double, got: ",0x16);
      puVar11[0x16] = 0;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      _Src = (undefined8 *)*_Src;
    }
    sVar1 = *(size_t *)(param_1 + 0x40);
    if (uStack_68 - local_70 < sVar1) {
      local_a8 = sVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_80,sVar1,0,_Src);
    }
    else {
      puVar11 = &local_80;
      if (0xf < uStack_68) {
        puVar11 = (undefined1 *)CONCAT71(uStack_7f,local_80);
      }
      puVar11 = puVar11 + local_70;
      local_70 = local_70 + sVar1;
      _guard_xfg_dispatch_icall_nop(puVar11,_Src,sVar1);
      puVar11[sVar1] = 0;
    }
    FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_80)
    ;
    if (uStack_68 < 0x10) {
      return 0;
    }
    uVar10 = uStack_68 + 1;
    pbVar8 = (byte *)CONCAT71(uStack_7f,local_80);
    pbVar6 = pbVar8;
    if (0xfff < uVar10) {
      uVar10 = uStack_68 + 0x28;
      pbVar6 = *(byte **)(pbVar8 + -8);
      if ((byte *)0x1f < pbVar8 + (-8 - (longlong)*(byte **)(pbVar8 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    goto LAB_143a61372;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_60,_Src);
  pbVar8 = (byte *)CONCAT71(uStack_5f,local_60);
  pbVar6 = &local_60;
  if (0xf < uStack_48) {
    pbVar6 = pbVar8;
  }
  pbVar12 = &local_60;
  if (0xf < uStack_48) {
    pbVar12 = pbVar8;
  }
  lVar7 = (longlong)(pbVar6 + local_50) - (longlong)pbVar12;
  if (pbVar6 + local_50 < pbVar12) {
    lVar7 = 0;
  }
  pbVar6 = pbVar12;
  if (lVar7 != 0) {
    do {
      if ((byte)(*pbVar6 + 0xbf) < 0x1a) {
        *pbVar6 = *pbVar6 + 0x20;
      }
      pbVar6 = pbVar6 + 1;
    } while ((longlong)pbVar6 - (longlong)pbVar12 != lVar7);
    pbVar8 = (byte *)CONCAT71(uStack_5f,local_60);
  }
  uVar9 = uStack_48;
  sVar1 = local_50;
  pbVar6 = &local_60;
  if (0xf < uStack_48) {
    pbVar6 = pbVar8;
  }
  if (local_50 == 3) {
    bVar14 = *pbVar6 < 0x69;
    if (((*pbVar6 == 0x69) && (bVar14 = pbVar6[1] < 0x6e, pbVar6[1] == 0x6e)) &&
       (bVar14 = pbVar6[2] < 0x66, pbVar6[2] == 0x66)) {
      uVar5 = 0;
    }
    else {
      uVar5 = -(uint)bVar14 | 1;
    }
    if (uVar5 != 0) goto LAB_143a6110c;
LAB_143a61131:
    dVar15 = INFINITY;
  }
  else {
LAB_143a6110c:
    pbVar6 = &local_60;
    if (0xf < uStack_48) {
      pbVar6 = pbVar8;
    }
    if ((local_50 == 8) && (iVar4 = _guard_xfg_dispatch_icall_nop(pbVar6,"infinity",8), iVar4 == 0))
    goto LAB_143a61131;
    pbVar6 = &local_60;
    if (0xf < uVar9) {
      pbVar6 = pbVar8;
    }
    if (sVar1 != 3) {
LAB_143a611f4:
      local_70 = 0;
      uStack_68 = 0xf;
      local_80 = 0;
      local_90 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (&local_80,sVar1 + 0x16);
      if (uStack_68 - local_70 < 0x16) {
        local_a8 = 0x16;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_80,0x16,0,"Expected double, got: ");
      }
      else {
        puVar11 = &local_80;
        if (0xf < uStack_68) {
          puVar11 = (undefined1 *)CONCAT71(uStack_7f,local_80);
        }
        puVar11 = puVar11 + local_70;
        local_70 = local_70 + 0x16;
        _guard_xfg_dispatch_icall_nop(puVar11,"Expected double, got: ",0x16);
        puVar11[0x16] = 0;
      }
      pbVar6 = &local_60;
      if (0xf < uVar9) {
        pbVar6 = pbVar8;
      }
      if (uStack_68 - local_70 < sVar1) {
        local_a8 = sVar1;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_80,sVar1,0);
        pbVar8 = (byte *)CONCAT71(uStack_5f,local_60);
        uVar9 = uStack_48;
      }
      else {
        puVar11 = &local_80;
        if (0xf < uStack_68) {
          puVar11 = (undefined1 *)CONCAT71(uStack_7f,local_80);
        }
        puVar11 = puVar11 + local_70;
        local_70 = sVar1 + local_70;
        _guard_xfg_dispatch_icall_nop(puVar11,pbVar6,sVar1);
        puVar11[sVar1] = 0;
      }
      FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                    &local_80);
      if (0xf < uStack_68) {
        uVar10 = uStack_68 + 1;
        lVar2 = CONCAT71(uStack_7f,local_80);
        lVar7 = lVar2;
        if (0xfff < uVar10) {
          uVar10 = uStack_68 + 0x28;
          lVar7 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar10);
      }
      if (uVar9 < 0x10) {
        return 0;
      }
      uVar10 = uVar9 + 1;
      pbVar6 = pbVar8;
      if (0xfff < uVar10) {
        uVar10 = uVar9 + 0x28;
        pbVar6 = *(byte **)(pbVar8 + -8);
        if ((byte *)0x1f < pbVar8 + (-8 - (longlong)pbVar6)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_143a61372:
      FMemory::operator_delete(pbVar6,uVar10);
      return 0;
    }
    bVar14 = *pbVar6 < 0x6e;
    if (((*pbVar6 != 0x6e) || (bVar14 = pbVar6[1] < 0x61, pbVar6[1] != 0x61)) ||
       (bVar14 = pbVar6[2] < 0x6e, pbVar6[2] != 0x6e)) {
      uVar13 = -(uint)bVar14 | 1;
    }
    if (uVar13 != 0) goto LAB_143a611f4;
    dVar15 = NAN;
  }
  *param_2 = dVar15;
  FUN_143a840e0(param_1 + 0x28);
  if (0xf < uVar9) {
    uVar10 = uVar9 + 1;
    pbVar6 = pbVar8;
    if (0xfff < uVar10) {
      uVar10 = uVar9 + 0x28;
      pbVar6 = *(byte **)(pbVar8 + -8);
      if ((byte *)0x1f < pbVar8 + (-8 - (longlong)pbVar6)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pbVar6,uVar10);
  }
LAB_143a611d4:
  if (local_98 != '\0') {
    *param_2 = -*param_2;
  }
  return 1;
}



// FUNCTION 143a61500 FUN_143a61500 body=6490 status=ok
// SIG undefined FUN_143a61500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143a61500(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *****pppppuVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 ****ppppuVar20;
  undefined1 *puVar21;
  void *pvVar22;
  ulonglong uVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  uint local_1b8;
  char local_1b4 [4];
  undefined4 local_1b0 [2];
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 ****local_178;
  undefined8 ***pppuStack_170;
  undefined8 ***local_168;
  undefined8 ***pppuStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined8 ****local_138;
  longlong lStack_130;
  size_t local_128;
  ulonglong uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  size_t local_108;
  ulonglong local_100;
  undefined8 ****local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 ****local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [56];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_180 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  bVar24 = false;
  local_1b8 = 0;
  lVar7 = (**(code **)(*param_2 + 0xb8))(param_2,&local_b8);
  plVar11 = *(longlong **)(lVar7 + 8);
  puVar8 = (ulonglong *)(**(code **)(*param_2 + 0xb8))(param_2,&local_d8);
  uVar19 = *puVar8;
  local_108 = 0;
  local_100 = 0xf;
  local_118 = 0;
  local_1a0 = *(undefined4 *)(param_1 + 0x50);
  local_198 = *(undefined4 *)(param_1 + 0x54);
  local_1a8 = uVar19;
  cVar3 = FUN_143a8a120(param_2,&local_190,&local_188);
  pppppuVar10 = (undefined8 *****)local_138;
  uVar23 = uStack_120;
  if (cVar3 == '\0') {
LAB_143a6162f:
    local_1b4[0] = '\0';
  }
  else {
    local_128 = 0;
    uStack_120 = 0xf;
    local_138 = (undefined8 ****)((ulonglong)local_138 & 0xffffffffffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_138,&DAT_145cbda34,1);
    uVar23 = uStack_120;
    pppppuVar10 = (undefined8 *****)local_138;
    bVar24 = true;
    local_1b8 = 1;
    pppppuVar17 = &local_138;
    if (0xf < uStack_120) {
      pppppuVar17 = (undefined8 *****)local_138;
    }
    pvVar22 = (void *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pvVar22 = *(void **)(param_1 + 0x30);
    }
    if ((*(size_t *)(param_1 + 0x40) != local_128) ||
       (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar22,pppppuVar17,*(size_t *)(param_1 + 0x40)),
       iVar5 != 0)) goto LAB_143a6162f;
    FUN_143a840e0(param_1 + 0x28);
    local_1b4[0] = '\x01';
  }
  if ((bVar24) && (0xf < uVar23)) {
    uVar18 = uVar23 + 1;
    pppppuVar17 = pppppuVar10;
    if (0xfff < uVar18) {
      uVar18 = uVar23 + 0x28;
      pppppuVar17 = (undefined8 *****)pppppuVar10[-1];
      if (0x1f < (ulonglong)((longlong)pppppuVar10 + (-8 - (longlong)pppppuVar17))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pppppuVar17,uVar18);
  }
  uVar25 = 0;
  if (local_1b4[0] == '\0') {
    local_168 = (undefined8 ***)0x0;
    pppuStack_160 = (undefined8 ***)0xf;
    local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_178,&DAT_145cbda34,1);
    pppppuVar10 = &local_178;
    if (0xf < pppuStack_160) {
      pppppuVar10 = (undefined8 *****)local_178;
    }
    pvVar22 = (void *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pvVar22 = *(void **)(param_1 + 0x30);
    }
    if (((undefined8 ***)*(size_t *)(param_1 + 0x40) == local_168) &&
       (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar22,pppppuVar10,*(size_t *)(param_1 + 0x40)),
       iVar5 == 0)) {
      FUN_143a840e0(param_1 + 0x28);
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&local_178);
    if (bVar24) {
      cVar3 = FUN_143a63f90();
      if (cVar3 != '\0') {
        local_148 = 0;
        uStack_140 = 0xf;
        local_158 = local_158 & 0xffffffffffffff00;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_158,&DAT_145cbda38,1);
        cVar3 = FUN_143a60110(param_1,&local_158);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_158);
        if (cVar3 != '\0') {
          plVar14 = *(longlong **)(param_1 + 8);
          if (plVar14 == (longlong *)0x0) {
            lVar7 = (**(code **)(*param_2 + 0xb8))(param_2,&local_f8);
            lVar7 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x260))
                              (*(longlong **)(lVar7 + 8),&local_118);
          }
          else {
            lVar7 = (**(code **)(*plVar14 + 8))(plVar14,param_2,&local_118);
          }
          if (lVar7 != 0) goto LAB_143a62139;
          if ((*(char *)(param_1 + 0xf5) != '\0') || (*(char *)(param_1 + 0xf6) != '\0')) {
            local_168 = (undefined8 ***)0x0;
            pppuStack_160 = (undefined8 ***)0xf;
            local_178 = (undefined8 ****)((ulonglong)local_178._1_7_ << 8);
            local_1b8 = 0x8000;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                      (&local_178,local_108 + 0x14);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      (&local_178,"Ignoring extension \"",0x14);
            puVar21 = &local_118;
            if (0xf < local_100) {
              puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      (&local_178,puVar21,local_108);
            plVar11 = (longlong *)
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                                (&local_178,"\" which is not defined or is not an extension of \"",
                                 0x32);
            local_138 = (undefined8 ****)*plVar11;
            lStack_130 = plVar11[1];
            local_128 = plVar11[2];
            uStack_120 = plVar11[3];
            plVar11[2] = 0;
            plVar11[3] = 0xf;
            *(undefined1 *)plVar11 = 0;
            local_1b8 = 0x18000;
            uVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                               (local_98,&local_138,*(undefined8 *)(local_1a8 + 8));
            puVar8 = (ulonglong *)
                     std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                               (uVar12,&DAT_145cc1490,2);
            local_158 = *puVar8;
            uStack_150 = puVar8[1];
            local_148 = puVar8[2];
            uStack_140 = puVar8[3];
            puVar8[2] = 0;
            puVar8[3] = 0xf;
            *(undefined1 *)puVar8 = 0;
            local_1b8 = 0x38000;
            FUN_143a69ee0(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                          &local_158);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_158);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (local_98);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_138);
            uVar25 = 0x30000;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_178);
            bVar24 = false;
            goto LAB_143a62694;
          }
          local_168 = (undefined8 ***)0x0;
          pppuStack_160 = (undefined8 ***)0xf;
          local_178 = (undefined8 ****)((ulonglong)local_178._1_7_ << 8);
          local_1b8 = 0x1000;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                    (&local_178,local_108 + 0xb);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_178,"Extension \"",0xb);
          puVar21 = &local_118;
          if (0xf < local_100) {
            puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_178,puVar21,local_108);
          plVar11 = (longlong *)
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                              (&local_178,"\" is not defined or is not an extension of \"",0x2c);
          local_138 = (undefined8 ****)*plVar11;
          lStack_130 = plVar11[1];
          local_128 = plVar11[2];
          uStack_120 = plVar11[3];
          plVar11[2] = 0;
          plVar11[3] = 0xf;
          *(undefined1 *)plVar11 = 0;
          local_1b8 = 0x3000;
          uVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                             (local_98,&local_138,*(undefined8 *)(local_1a8 + 8));
          puVar8 = (ulonglong *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                             (uVar12,&DAT_145cc1490,2);
          local_158 = *puVar8;
          uStack_150 = puVar8[1];
          local_148 = puVar8[2];
          uStack_140 = puVar8[3];
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          local_1b8 = 0x7000;
          FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                        &local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_98);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_138);
          goto LAB_143a61f21;
        }
      }
    }
    else {
      cVar3 = FUN_143a64350(param_1,&local_118);
      if (cVar3 == '\0') goto LAB_143a61f2b;
      if ((*(char *)(param_1 + 0xf8) == '\0') ||
         (cVar3 = FUN_143a5a7d0(&local_118,local_1b0), cVar3 == '\0')) {
        lVar7 = FUN_143a3f170(uVar19,&local_118);
        if (lVar7 == 0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60,&local_118);
          FUN_143a66ef0(local_60);
          lVar7 = FUN_143a3f170(uVar19,local_60);
          if ((lVar7 != 0) && (iVar5 = FUN_143a009a0(lVar7), iVar5 != 10)) {
            lVar7 = 0;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_60);
          lVar13 = lVar7;
          if (lVar7 != 0) goto LAB_143a622ab;
        }
        else {
LAB_143a622ab:
          lVar13 = 0;
          iVar5 = FUN_143a009a0(lVar7);
          if (iVar5 == 10) {
            puVar9 = (undefined8 *)FUN_143a4f9e0(lVar7);
            cVar3 = std::operator!=<char,std::char_traits<char>,std::allocator<char>_>
                              (*puVar9,&local_118);
            if (cVar3 != '\0') goto LAB_143a622de;
          }
          lVar13 = lVar7;
          if (lVar7 != 0) goto LAB_143a62139;
        }
LAB_143a622de:
        iVar5 = 0;
        if (*(char *)(param_1 + 0xf4) != '\0') {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98,&local_118);
          FUN_143a66ef0(local_98);
          lVar13 = FUN_143a3f050(uVar19,local_98);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_98);
        }
        lVar7 = lVar13;
        if (lVar13 == 0) {
          local_1b8 = *(uint *)(uVar19 + 0x84);
          if (0 < (int)local_1b8) {
            plVar14 = *(longlong **)(uVar19 + 0x60);
            do {
              puVar9 = (undefined8 *)*plVar14;
              puVar15 = puVar9;
              if (0xf < (ulonglong)puVar9[3]) {
                puVar15 = (undefined8 *)*puVar9;
              }
              puVar21 = &local_118;
              if (0xf < local_100) {
                puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
              }
              if ((local_108 == puVar9[2]) &&
                 (iVar6 = _guard_xfg_dispatch_icall_nop(puVar21,puVar15,local_108), iVar6 == 0))
              goto LAB_143a62118;
              iVar5 = iVar5 + 1;
              plVar14 = plVar14 + 1;
              uVar19 = local_1a8;
            } while (iVar5 < (int)local_1b8);
          }
LAB_143a62379:
          plVar14 = *(longlong **)(uVar19 + 8);
          if (*(char *)(param_1 + 0xf5) == '\0') {
            local_168 = (undefined8 ***)0x0;
            pppuStack_160 = (undefined8 ***)0xf;
            local_178 = (undefined8 ****)((ulonglong)local_178._1_7_ << 8);
            local_1b8 = 0x40000;
            plVar11 = plVar14 + 2;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                      (&local_178,*plVar11 + 0xe);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      (&local_178,"Message type \"",0xe);
            if (0xf < (ulonglong)plVar14[3]) {
              plVar14 = (longlong *)*plVar14;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      (&local_178,plVar14,*plVar11);
            puVar8 = (ulonglong *)
                     std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                               (&local_178,"\" has no field named \"",0x16);
            local_f8 = (undefined8 ****)*puVar8;
            uStack_f0 = puVar8[1];
            local_e8 = puVar8[2];
            uStack_e0 = puVar8[3];
            puVar8[2] = 0;
            puVar8[3] = 0xf;
            *(undefined1 *)puVar8 = 0;
            local_1b8 = 0xc0000;
            puVar21 = &local_118;
            if (0xf < local_100) {
              puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
            }
            plVar11 = (longlong *)
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                                (&local_f8,puVar21,local_108);
            local_138 = (undefined8 ****)*plVar11;
            lStack_130 = plVar11[1];
            local_128 = plVar11[2];
            uStack_120 = plVar11[3];
            plVar11[2] = 0;
            plVar11[3] = 0xf;
            *(undefined1 *)plVar11 = 0;
            local_1b8 = 0x1c0000;
            puVar8 = (ulonglong *)
                     std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                               (&local_138,&DAT_145cc1490,2);
            local_158 = *puVar8;
            uStack_150 = puVar8[1];
            local_148 = puVar8[2];
            uStack_140 = puVar8[3];
            puVar8[2] = 0;
            puVar8[3] = 0xf;
            *(undefined1 *)puVar8 = 0;
            local_1b8 = 0x3c0000;
            FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                          &local_158);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_158);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_138);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_f8);
            goto LAB_143a61f21;
          }
          local_168 = (undefined8 ***)0x0;
          pppuStack_160 = (undefined8 ***)0xf;
          local_178 = (undefined8 ****)((ulonglong)local_178._1_7_ << 8);
          local_1b8 = 0x400000;
          local_1a8 = local_1a8 & 0xffffffff00000000 | 0x400000;
          plVar1 = plVar14 + 2;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                    (&local_178,*plVar1 + 0xe);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_178,"Message type \"",0xe);
          if (0xf < (ulonglong)plVar14[3]) {
            plVar14 = (longlong *)*plVar14;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_178,plVar14,*plVar1);
          puVar8 = (ulonglong *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                             (&local_178,"\" has no field named \"",0x16);
          local_f8 = (undefined8 ****)*puVar8;
          uStack_f0 = puVar8[1];
          local_e8 = puVar8[2];
          uStack_e0 = puVar8[3];
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          local_1b8 = 0xc00000;
          puVar21 = &local_118;
          if (0xf < local_100) {
            puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
          }
          plVar14 = (longlong *)
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                              (&local_f8,puVar21,local_108);
          local_138 = (undefined8 ****)*plVar14;
          lStack_130 = plVar14[1];
          local_128 = plVar14[2];
          uStack_120 = plVar14[3];
          plVar14[2] = 0;
          plVar14[3] = 0xf;
          *(undefined1 *)plVar14 = 0;
          uVar25 = (uint)local_1a8;
          local_1b8 = (uint)local_1a8 | 0x1800000;
          puVar8 = (ulonglong *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                             (&local_138,&DAT_145cc1490,2);
          local_158 = *puVar8;
          uStack_150 = puVar8[1];
          local_148 = puVar8[2];
          uStack_140 = puVar8[3];
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          local_1b8 = uVar25 | 0x3800000;
          FUN_143a69ee0(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                        &local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_138);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_f8);
          uVar25 = uVar25 & 0xffbfffff | 0x3800000;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_178);
          bVar24 = false;
          lVar7 = lVar13;
          if (lVar13 == 0) goto LAB_143a62694;
        }
      }
      else {
        lVar7 = FUN_143a3f010(uVar19,local_1b0[0]);
        if (lVar7 == 0) {
          lVar7 = FUN_143a3f610(uVar19,local_1b0[0]);
          if (lVar7 == 0) {
            lVar13 = FUN_143a3f1b0(uVar19,local_1b0[0]);
            goto LAB_143a6212b;
          }
LAB_143a62118:
          bVar24 = true;
LAB_143a62694:
          if (((*(char *)(param_1 + 0xf5) == '\0') && (*(char *)(param_1 + 0xf6) == '\0')) &&
             (!bVar24)) {
            uVar12 = FUN_1439eeb00(local_98,3,
                                   "c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",0x1fe)
            ;
            uVar25 = uVar25 | 2;
            local_1b8 = uVar25;
            uVar12 = FUN_1439eef00(uVar12,
                                   "CHECK failed: allow_unknown_field_ || allow_unknown_extension_ || reserved_field: "
                                  );
            FUN_1439eec50(local_1b4,uVar12);
          }
          if ((uVar25 & 2) != 0) {
            uVar25 = uVar25 & 0xfffffffd;
            DsDevice::~DsDevice(local_98);
          }
          local_128 = 0;
          uStack_120 = 0xf;
          local_138 = (undefined8 ****)((ulonglong)local_138 & 0xffffffffffffff00);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_138,&DAT_145cc3708,1);
          uVar26 = uVar25 | 4;
          local_1b8 = uVar26;
          cVar3 = FUN_143a6b640(param_1,&local_138);
          if (cVar3 == '\0') {
LAB_143a627c7:
            bVar24 = false;
          }
          else {
            local_168 = (undefined8 ***)0x0;
            pppuStack_160 = (undefined8 ***)0xf;
            local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_178,&DAT_145cc62d0,1);
            uVar26 = uVar25 | 0xc;
            local_1b8 = uVar26;
            cVar3 = FUN_143a66ea0(param_1,&local_178);
            if (cVar3 != '\0') goto LAB_143a627c7;
            local_148 = 0;
            uStack_140 = 0xf;
            local_158 = local_158 & 0xffffffffffffff00;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_158,&DAT_145cc62cc,1);
            uVar26 = uVar25 | 0x1c;
            cVar3 = FUN_143a66ea0(param_1,&local_158);
            if (cVar3 != '\0') goto LAB_143a627c7;
            bVar24 = true;
          }
          if ((uVar26 & 0x10) != 0) {
            uVar26 = uVar26 & 0xffffffef;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_158);
          }
          if ((uVar26 & 8) != 0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_178);
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_138);
          if (bVar24) {
            uVar4 = FUN_143a6a9d0();
          }
          else {
            uVar4 = FUN_143a6a770(param_1);
          }
          goto LAB_143a61f2d;
        }
        lVar13 = (**(code **)(*plVar11 + 0x268))(plVar11);
LAB_143a6212b:
        lVar7 = lVar13;
        if (lVar13 == 0) goto LAB_143a62379;
      }
LAB_143a62139:
      if (*(int *)(param_1 + 0xf0) != 1) {
LAB_143a629fb:
        iVar5 = FUN_143a009a0(lVar7);
        local_158 = local_158 & 0xffffffffffffff00;
        local_148 = 0;
        uStack_140 = 0xf;
        if (*(int *)(&DAT_145cbed10 + (longlong)iVar5 * 4) == 10) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_158,&DAT_145cc3708,1);
          cVar3 = FUN_143a6b640(param_1,&local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_158);
          if (((cVar3 == '\0') || (*(char *)(*(longlong *)(lVar7 + 0x78) + 0x4f) == '\0')) ||
             (*(int *)(param_1 + 0x28) != 5)) goto LAB_143a62afc;
          local_168 = (undefined8 ***)0x0;
          pppuStack_160 = (undefined8 ***)0xf;
          local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
          cVar3 = FUN_143a64b70(param_1,&local_178);
          if (cVar3 == '\0') goto LAB_143a61f21;
          uVar12 = (**(code **)(*plVar11 + 0x130))(plVar11,param_2,lVar7,0);
          FUN_1439f0e20(uVar12,&local_178);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_178);
        }
        else {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_158,&DAT_145cc3708,1);
          cVar3 = FUN_143a60110(param_1,&local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_158);
          if (cVar3 == '\0') goto LAB_143a61f2b;
LAB_143a62afc:
          if (*(int *)(lVar7 + 0x3c) == 3) {
            local_148 = 0;
            uStack_140 = 0xf;
            local_158 = local_158 & 0xffffffffffffff00;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_158,&DAT_145cbda34,1);
            uVar25 = uVar25 | 0x20;
            local_1b8 = uVar25;
            cVar3 = FUN_143a6b640(param_1,&local_158);
            if (cVar3 == '\0') goto LAB_143a62b48;
            bVar24 = true;
          }
          else {
LAB_143a62b48:
            bVar24 = false;
          }
          if ((uVar25 & 0x20) != 0) {
            uVar25 = uVar25 & 0xffffffdf;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_158);
          }
          if (bVar24) {
            local_148 = 0;
            uStack_140 = 0xf;
            local_158 = local_158 & 0xffffffffffffff00;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_158,&DAT_145cbda38,1);
            cVar3 = FUN_143a6b640(param_1,&local_158);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&local_158);
            if (cVar3 == '\0') {
              do {
                iVar5 = FUN_143a009a0(lVar7);
                if (*(int *)(&DAT_145cbed10 + (longlong)iVar5 * 4) == 10) {
                  cVar3 = FUN_143a62e70();
                }
                else {
                  cVar3 = FUN_143a62fd0(param_1,param_2,plVar11,lVar7);
                }
                if (cVar3 == '\0') break;
                local_168 = (undefined8 ***)0x0;
                pppuStack_160 = (undefined8 ***)0xf;
                local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                          (&local_178,&DAT_145cbda38,1);
                cVar3 = FUN_143a6b640(param_1,&local_178);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate(&local_178);
                if (cVar3 != '\0') goto LAB_143a62cc5;
                local_168 = (undefined8 ***)0x0;
                pppuStack_160 = (undefined8 ***)0xf;
                local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                          (&local_178,&DAT_145cc0f84,1);
                cVar3 = FUN_143a60110(param_1,&local_178);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate(&local_178);
              } while (cVar3 != '\0');
              goto LAB_143a61f2b;
            }
          }
          else {
            iVar5 = FUN_143a009a0(lVar7);
            if (*(int *)(&DAT_145cbed10 + (longlong)iVar5 * 4) == 10) {
              cVar3 = FUN_143a62e70();
            }
            else {
              cVar3 = FUN_143a62fd0(param_1,param_2,plVar11,lVar7);
            }
            if (cVar3 == '\0') goto LAB_143a61f2b;
          }
        }
LAB_143a62cc5:
        local_168 = (undefined8 ***)0x0;
        pppuStack_160 = (undefined8 ***)0xf;
        local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_178,&DAT_145cc64e0,1);
        uVar26 = uVar25 | 0x40;
        local_1b8 = uVar26;
        cVar3 = FUN_143a6b640(param_1,&local_178);
        if (cVar3 == '\0') {
          local_148 = 0;
          uStack_140 = 0xf;
          local_158 = local_158 & 0xffffffffffffff00;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_158,&DAT_145cc0f84,1);
          uVar26 = uVar25 | 0xc0;
          local_1b8 = uVar26;
          FUN_143a6b640(param_1,&local_158);
        }
        if ((char)uVar26 < '\0') {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_158);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_178);
        if (*(char *)(*(longlong *)(lVar7 + 0x78) + 0x4e) != '\0') {
          local_168 = (undefined8 ***)0x0;
          pppuStack_160 = (undefined8 ***)0xf;
          local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
          local_1b8 = 1;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                    (&local_178,local_108 + 0x27);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_178,"text format contains deprecated field \"",0x27);
          puVar21 = &local_118;
          if (0xf < local_100) {
            puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_178,puVar21,local_108);
          puVar8 = (ulonglong *)
                   std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                             (&local_178,&DAT_145cc1014,1);
          local_158 = *puVar8;
          uStack_150 = puVar8[1];
          local_148 = puVar8[2];
          uStack_140 = puVar8[3];
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          local_1b8 = 3;
          FUN_143a69ed0(param_1,&local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_158);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_178);
        }
        if (*(longlong *)(param_1 + 0x10) != 0) {
          uStack_19c = local_198;
          FUN_143a69ca0(*(longlong *)(param_1 + 0x10),lVar7,CONCAT44(local_198,local_1a0));
        }
        uVar4 = 1;
        goto LAB_143a61f2d;
      }
      if ((*(int *)(lVar7 + 0x3c) == 3) ||
         (cVar3 = (**(code **)(*plVar11 + 0x20))(plVar11,param_2,lVar7), cVar3 == '\0')) {
        puVar9 = *(undefined8 **)(lVar7 + 0x58);
        if ((puVar9 == (undefined8 *)0x0) ||
           (cVar3 = (**(code **)(*plVar11 + 0x38))(plVar11,param_2,puVar9), cVar3 == '\0'))
        goto LAB_143a629fb;
        puVar15 = (undefined8 *)(**(code **)(*plVar11 + 0x48))(plVar11,param_2,puVar9);
        local_168 = (undefined8 ***)0x0;
        pppuStack_160 = (undefined8 ***)0xf;
        local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
        local_1b8 = uVar25 | 0x10000000;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                  (&local_178,local_108 + 7);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (&local_178,"Field \"",7);
        puVar21 = &local_118;
        if (0xf < local_100) {
          puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (&local_178,puVar21,local_108);
        puVar8 = (ulonglong *)
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                           (&local_178,"\" is specified along with field \"",0x21);
        local_f8 = (undefined8 ****)*puVar8;
        uStack_f0 = puVar8[1];
        local_e8 = puVar8[2];
        uStack_e0 = puVar8[3];
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        local_1b8 = uVar25 | 0x30000000;
        uVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                           (local_60,&local_f8,*puVar15);
        plVar11 = (longlong *)
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                            (uVar12,"\", another member of oneof \"",0x1c);
        local_138 = (undefined8 ****)*plVar11;
        lStack_130 = plVar11[1];
        local_128 = plVar11[2];
        uStack_120 = plVar11[3];
        plVar11[2] = 0;
        plVar11[3] = 0xf;
        *(undefined1 *)plVar11 = 0;
        local_1b8 = uVar25 | 0x70000000;
        uVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                           (local_98,&local_138,*puVar9);
        puVar8 = (ulonglong *)
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                           (uVar12,&DAT_145cc1490,2);
        local_158 = *puVar8;
        uStack_150 = puVar8[1];
        local_148 = puVar8[2];
        uStack_140 = puVar8[3];
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        local_1b8 = uVar25 | 0xf0000000;
        FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                      &local_158);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_158);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_98);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_138);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_60);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_f8);
      }
      else {
        local_168 = (undefined8 ***)0x0;
        pppuStack_160 = (undefined8 ***)0xf;
        local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
        local_1b8 = uVar25 | 0x4000000;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                  (&local_178,local_108 + 0x14);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (&local_178,"Non-repeated field \"",0x14);
        puVar21 = &local_118;
        if (0xf < local_100) {
          puVar21 = (undefined1 *)CONCAT71(uStack_117,local_118);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (&local_178,puVar21,local_108);
        puVar8 = (ulonglong *)
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                           (&local_178,"\" is specified multiple times.",0x1e);
        local_158 = *puVar8;
        uStack_150 = puVar8[1];
        local_148 = puVar8[2];
        uStack_140 = puVar8[3];
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
        local_1b8 = uVar25 | 0xc000000;
        FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                      &local_158);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_158);
      }
LAB_143a61f21:
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_178);
    }
LAB_143a61f2b:
    uVar4 = 0;
    goto LAB_143a61f2d;
  }
  local_128 = 0;
  uStack_120 = 0xf;
  local_138 = (undefined8 ****)((ulonglong)local_138 & 0xffffffffffffff00);
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_f8 = (undefined8 ****)((ulonglong)local_f8 & 0xffffffffffffff00);
  cVar3 = FUN_143a60570(param_1,&local_138,&local_f8);
  if (cVar3 == '\0') {
LAB_143a61c63:
    uVar4 = 0;
  }
  else {
    local_168 = (undefined8 ***)0x0;
    pppuStack_160 = (undefined8 ***)0xf;
    local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_178,&DAT_145cbda38,1);
    cVar3 = FUN_143a60110(param_1,&local_178);
    if (0xf < pppuStack_160) {
      uVar19 = (longlong)pppuStack_160 + 1;
      pppppuVar10 = (undefined8 *****)local_178;
      if (0xfff < uVar19) {
        uVar19 = (longlong)pppuStack_160 + 0x28;
        pppppuVar10 = (undefined8 *****)local_178[-1];
        if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)pppppuVar10))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pppppuVar10,uVar19);
    }
    if (cVar3 == '\0') goto LAB_143a61c63;
    local_168 = (undefined8 ***)0x0;
    pppuStack_160 = (undefined8 ***)0xf;
    local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_178,&DAT_145cc3708,1);
    pppuVar2 = pppuStack_160;
    ppppuVar16 = local_178;
    pppppuVar10 = &local_178;
    if (0xf < pppuStack_160) {
      pppppuVar10 = (undefined8 *****)local_178;
    }
    pvVar22 = (void *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pvVar22 = *(void **)(param_1 + 0x30);
    }
    if (((undefined8 ***)*(size_t *)(param_1 + 0x40) == local_168) &&
       (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar22,pppppuVar10,*(size_t *)(param_1 + 0x40)),
       iVar5 == 0)) {
      FUN_143a840e0(param_1 + 0x28);
    }
    if (0xf < pppuVar2) {
      uVar19 = (longlong)pppuVar2 + 1;
      pppppuVar10 = (undefined8 *****)ppppuVar16;
      if (0xfff < uVar19) {
        uVar19 = (longlong)pppuVar2 + 0x28;
        pppppuVar10 = (undefined8 *****)ppppuVar16[-1];
        if (0x1f < (ulonglong)((longlong)ppppuVar16 + (-8 - (longlong)pppppuVar10))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pppppuVar10,uVar19);
    }
    local_148 = 0;
    uStack_140 = 0xf;
    local_158 = local_158 & 0xffffffffffffff00;
    plVar14 = *(longlong **)(param_1 + 8);
    if (plVar14 == (longlong *)0x0) {
      lVar7 = FUN_143a66d70(param_2,&local_f8,&local_138);
    }
    else {
      lVar7 = (**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_f8,&local_138);
    }
    if (lVar7 == 0) {
      local_c8 = 0;
      uStack_c0 = 0xf;
      local_d8 = 0;
      local_1b8 = 0x100;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (&local_d8,local_e8 + 0x15);
      if (uStack_c0 - local_c8 < 0x15) {
        local_1c8 = 0x15;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_d8,0x15,0,"Could not find type \"");
      }
      else {
        puVar21 = &local_d8;
        if (0xf < uStack_c0) {
          puVar21 = (undefined1 *)CONCAT71(uStack_d7,local_d8);
        }
        puVar21 = puVar21 + local_c8;
        local_c8 = local_c8 + 0x15;
        _guard_xfg_dispatch_icall_nop(puVar21,"Could not find type \"",0x15);
        puVar21[0x15] = 0;
      }
      uVar19 = local_e8;
      pppppuVar10 = &local_f8;
      if (0xf < uStack_e0) {
        pppppuVar10 = (undefined8 *****)local_f8;
      }
      if (uStack_c0 - local_c8 < local_e8) {
        local_1c8 = local_e8;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_d8,local_e8,0);
      }
      else {
        puVar21 = &local_d8;
        if (0xf < uStack_c0) {
          puVar21 = (undefined1 *)CONCAT71(uStack_d7,local_d8);
        }
        puVar21 = puVar21 + local_c8;
        local_c8 = local_c8 + local_e8;
        _guard_xfg_dispatch_icall_nop(puVar21,pppppuVar10,local_e8);
        puVar21[uVar19] = 0;
      }
      pppppuVar10 = &local_138;
      if (0xf < uStack_120) {
        pppppuVar10 = (undefined8 *****)local_138;
      }
      puVar9 = (undefined8 *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                         (&local_d8,pppppuVar10,local_128);
      local_b8 = (undefined8 ****)*puVar9;
      uStack_b0 = puVar9[1];
      local_a8 = puVar9[2];
      uStack_a0 = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      local_1b8 = 0x300;
      if (uStack_a0 - local_a8 < 0x20) {
        local_1c8 = 0x20;
        pppppuVar10 = (undefined8 *****)
                      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                                (&local_b8,0x20,0,"\" stored in google.protobuf.Any.");
      }
      else {
        pppppuVar10 = &local_b8;
        if (0xf < uStack_a0) {
          pppppuVar10 = (undefined8 *****)local_b8;
        }
        pvVar22 = (void *)((longlong)pppppuVar10 + local_a8);
        local_a8 = local_a8 + 0x20;
        _guard_xfg_dispatch_icall_nop(pvVar22,"\" stored in google.protobuf.Any.",0x20);
        *(undefined1 *)((longlong)pvVar22 + 0x20) = 0;
        pppppuVar10 = &local_b8;
      }
      local_178 = *pppppuVar10;
      pppuStack_170 = pppppuVar10[1];
      local_168 = pppppuVar10[2];
      pppuStack_160 = pppppuVar10[3];
      pppppuVar10[2] = (undefined8 ****)0x0;
      pppppuVar10[3] = (undefined8 ****)0xf;
      *(undefined1 *)pppppuVar10 = 0;
      local_1b8 = 0x700;
      FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                    &local_178);
      if ((undefined8 ****)0xf < pppuStack_160) {
        ppppuVar20 = (undefined8 ****)((longlong)pppuStack_160 + 1);
        ppppuVar16 = local_178;
        if ((undefined8 ****)0xfff < ppppuVar20) {
          ppppuVar20 = (undefined8 ****)(pppuStack_160 + 5);
          ppppuVar16 = (undefined8 ****)local_178[-1];
          if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)ppppuVar16))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(ppppuVar16,ppppuVar20);
      }
      local_168 = (undefined8 ***)0x0;
      pppuStack_160 = (undefined8 ***)0xf;
      local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
      if (0xf < uStack_a0) {
        uVar19 = uStack_a0 + 1;
        if ((0xfff < uVar19) &&
           (uVar19 = uStack_a0 + 0x28,
           0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)local_b8[-1])))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FMemory::operator_delete(0,uVar19);
      }
      local_a8 = 0;
      uStack_a0 = 0xf;
      local_b8 = (undefined8 ****)((ulonglong)local_b8 & 0xffffffffffffff00);
      if (0xf < uStack_c0) {
        uVar19 = uStack_c0 + 1;
        if ((0xfff < uVar19) &&
           (uVar19 = uStack_c0 + 0x28,
           0x1f < (CONCAT71(uStack_d7,local_d8) - *(longlong *)(CONCAT71(uStack_d7,local_d8) + -8))
                  - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FMemory::operator_delete(0,uVar19);
      }
LAB_143a61b00:
      uVar4 = 0;
    }
    else {
      cVar3 = FUN_143a60b10(param_1,lVar7,&local_158);
      if (cVar3 == '\0') goto LAB_143a61b00;
      if ((*(int *)(param_1 + 0xf0) == 1) &&
         (((*(int *)(local_190 + 0x3c) != 3 &&
           (cVar3 = (**(code **)(*plVar11 + 0x20))(plVar11,param_2), cVar3 != '\0')) ||
          ((*(int *)(local_188 + 0x3c) != 3 &&
           (cVar3 = (**(code **)(*plVar11 + 0x20))(plVar11,param_2), cVar3 != '\0')))))) {
        local_168 = (undefined8 ***)0x0;
        pppuStack_160 = (undefined8 ***)0xf;
        local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_178,"Non-repeated Any specified multiple times.",0x2a);
        FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                      &local_178);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_178);
        goto LAB_143a61b00;
      }
      local_168 = (undefined8 ***)0x0;
      pppuStack_160 = (undefined8 ***)0xf;
      local_178 = (undefined8 ****)((ulonglong)local_178 & 0xffffffffffffff00);
      local_1b8 = 0x800;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (&local_178,local_128 + local_e8);
      pppppuVar10 = &local_f8;
      if (0xf < uStack_e0) {
        pppppuVar10 = (undefined8 *****)local_f8;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (&local_178,pppppuVar10,local_e8);
      pppppuVar10 = &local_138;
      if (0xf < uStack_120) {
        pppppuVar10 = (undefined8 *****)local_138;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (&local_178,pppppuVar10,local_128);
      (**(code **)(*plVar11 + 0x118))(plVar11,param_2,local_190,&local_178);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_178);
      (**(code **)(*plVar11 + 0x118))(plVar11,param_2,local_188,&local_158);
      uVar4 = 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&local_158);
  }
  if (0xf < uStack_e0) {
    std::allocator<char>::deallocate(&local_f8,local_f8,uStack_e0 + 1);
  }
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_f8 = (undefined8 ****)((ulonglong)local_f8 & 0xffffffffffffff00);
  if (0xf < uStack_120) {
    std::allocator<char>::deallocate(&local_138,local_138,uStack_120 + 1);
  }
LAB_143a61f2d:
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&local_118)
  ;
  return uVar4;
}



// FUNCTION 143a62e70 FUN_143a62e70 body=339 status=ok
// SIG undefined FUN_143a62e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a62e70(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != 0) {
    uVar3 = FUN_143a66bc0(lVar5,param_4);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = 0;
  cVar2 = FUN_143a64860(param_1,&local_68);
  if (cVar2 != '\0') {
    local_98 = local_88;
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_88,&local_68);
      uVar4 = (**(code **)(*param_3 + 0x250))(param_3,param_2,param_4,0);
      cVar2 = FUN_143a64570(param_1,uVar4,uVar3);
    }
    else {
      uVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_88,&local_68);
      uVar4 = (**(code **)(*param_3 + 0x130))(param_3,param_2,param_4,0);
      cVar2 = FUN_143a64570(param_1,uVar4,uVar3);
    }
    if (cVar2 != '\0') {
      *(longlong *)(param_1 + 0x10) = lVar5;
      uVar3 = 1;
      goto LAB_143a62f2c;
    }
  }
  uVar3 = 0;
LAB_143a62f2c:
  if (0xf < uStack_50) {
    uVar6 = uStack_50 + 1;
    lVar1 = CONCAT71(uStack_67,local_68);
    lVar5 = lVar1;
    if (0xfff < uVar6) {
      uVar6 = uStack_50 + 0x28;
      lVar5 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar5,uVar6);
  }
  return uVar3;
}



// FUNCTION 143a62fd0 FUN_143a62fd0 body=3978 status=ok
// SIG undefined FUN_143a62fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143a62fd0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  size_t *psVar1;
  size_t _Size;
  byte *******pppppppbVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *******pppppppuVar8;
  byte *******pppppppbVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  byte ******ppppppbVar15;
  longlong *_Buf1;
  ulonglong uVar16;
  byte ******ppppppbVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  void *pvVar20;
  byte *pbVar21;
  undefined1 auStack_168 [32];
  size_t local_148;
  uint local_138;
  undefined4 uStack_134;
  char local_130 [8];
  undefined8 local_128;
  undefined8 local_120;
  byte *******local_118;
  longlong lStack_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 *******local_f8;
  undefined8 ******ppppppuStack_f0;
  size_t local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 *******local_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******local_a8;
  undefined8 ******ppppppuStack_a0;
  byte ******local_80;
  byte ******ppppppbStack_78;
  byte ******local_70;
  byte ******ppppppbStack_68;
  ulonglong local_50;
  
  local_120 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar7 = 0;
  local_138 = 0;
  iVar6 = FUN_143a009a0(param_4);
  switch(*(int *)(&DAT_145cbed10 + (longlong)iVar6 * 4) + -1) {
  case 0:
    cVar5 = FUN_143a64a20(param_1,&local_138,0x7fffffff);
    if (cVar5 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      (**(code **)(*param_3 + 0x200))();
      return 1;
    }
    (**(code **)(*param_3 + 0xe0))(param_3,param_2,param_4,local_138);
    return 1;
  case 1:
    cVar5 = FUN_143a64a20(param_1,&local_138,0x7fffffffffffffff);
    if (cVar5 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      (**(code **)(*param_3 + 0x208))();
    }
    else {
      (**(code **)(*param_3 + 0xe8))(param_3,param_2,param_4,CONCAT44(uStack_134,local_138));
    }
    break;
  case 2:
    cVar5 = FUN_143a657b0(param_1,&local_138,0xffffffff);
    if (cVar5 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      (**(code **)(*param_3 + 0x210))();
    }
    else {
      (**(code **)(*param_3 + 0xf0))(param_3,param_2,param_4,local_138);
    }
    break;
  case 3:
    cVar5 = FUN_143a657b0(param_1,&local_138,0xffffffffffffffff);
    if (cVar5 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      (**(code **)(*param_3 + 0x218))();
    }
    else {
      (**(code **)(*param_3 + 0xf8))(param_3,param_2,param_4,CONCAT44(uStack_134,local_138));
    }
    break;
  case 4:
    cVar5 = FUN_143a60ef0(param_1,&local_138);
    if (cVar5 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      (**(code **)(*param_3 + 0x228))();
    }
    else {
      (**(code **)(*param_3 + 0x108))(param_3,param_2,param_4,CONCAT44(uStack_134,local_138));
    }
    break;
  case 5:
    cVar5 = FUN_143a60ef0(param_1,&local_138);
    if (cVar5 == '\0') {
      return 0;
    }
    lVar10 = *param_3;
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      uVar13 = FUN_143a829f0(CONCAT44(uStack_134,local_138));
      (**(code **)(lVar10 + 0x220))(param_3,param_2,param_4,uVar13);
    }
    else {
      uVar13 = FUN_143a829f0(CONCAT44(uStack_134,local_138));
      (**(code **)(lVar10 + 0x100))(param_3,param_2,param_4,uVar13);
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x28) == 3) {
      cVar5 = FUN_143a657b0(param_1,&local_138,1);
      if (cVar5 == '\0') {
        return 0;
      }
      if (*(int *)((longlong)param_4 + 0x3c) == 3) {
        (**(code **)(*param_3 + 0x230))(param_3,param_2,param_4,CONCAT44(uStack_134,local_138) != 0)
        ;
        return 1;
      }
      (**(code **)(*param_3 + 0x110))(param_3,param_2,param_4,CONCAT44(uStack_134,local_138) != 0);
      return 1;
    }
    local_c8 = 0;
    uStack_c0 = 0xf;
    local_d8 = 0;
    cVar5 = FUN_143a64350(param_1,&local_d8);
    uVar4 = uStack_c0;
    if (cVar5 == '\0') {
LAB_143a6390e:
      if (uStack_c0 < 0x10) {
        return 0;
      }
      uVar16 = uStack_c0 + 1;
      pppppppbVar2 = (byte *******)CONCAT71(uStack_d7,local_d8);
      pppppppbVar9 = pppppppbVar2;
      if (0xfff < uVar16) {
        uVar16 = uStack_c0 + 0x28;
        pppppppbVar9 = (byte *******)pppppppbVar2[-1];
        if ((byte *)0x1f < (byte *)((longlong)pppppppbVar2 + (-8 - (longlong)pppppppbVar9))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_143a632d8:
      FMemory::operator_delete(pppppppbVar9,uVar16);
      return 0;
    }
    pppppppbVar2 = (byte *******)CONCAT71(uStack_d7,local_d8);
    pppppppbVar9 = (byte *******)&local_d8;
    if (0xf < uStack_c0) {
      pppppppbVar9 = pppppppbVar2;
    }
    if (local_c8 == 4) {
      lVar10 = 0;
      do {
        lVar14 = lVar10 + 1;
        if (*(byte *)((longlong)pppppppbVar9 + lVar10) != (&DAT_145cc0dc0)[lVar10]) {
          uVar7 = -(uint)(*(byte *)((longlong)pppppppbVar9 + lVar10) <
                         (byte)(&DAT_145cc0dc0)[lVar10]) | 1;
          goto LAB_143a633ad;
        }
        lVar10 = lVar14;
      } while (lVar14 != 4);
      uVar7 = 0;
LAB_143a633ad:
      if (uVar7 != 0) goto LAB_143a633b1;
LAB_143a6341b:
      uVar13 = 1;
    }
    else {
LAB_143a633b1:
      pppppppbVar9 = (byte *******)&local_d8;
      if (0xf < uStack_c0) {
        pppppppbVar9 = pppppppbVar2;
      }
      if (local_c8 == 4) {
        lVar10 = 0;
        do {
          lVar14 = lVar10 + 1;
          if (*(byte *)((longlong)pppppppbVar9 + lVar10) != (&DAT_145cc6510)[lVar10]) {
            uVar7 = -(uint)(*(byte *)((longlong)pppppppbVar9 + lVar10) <
                           (byte)(&DAT_145cc6510)[lVar10]) | 1;
            goto LAB_143a633ed;
          }
          lVar10 = lVar14;
        } while (lVar14 != 4);
        uVar7 = 0;
LAB_143a633ed:
        if (uVar7 == 0) goto LAB_143a6341b;
      }
      pppppppbVar9 = (byte *******)&local_d8;
      if (0xf < uStack_c0) {
        pppppppbVar9 = pppppppbVar2;
      }
      if (local_c8 == 1) {
        if (*(byte *)pppppppbVar9 == 0x74) {
          uVar7 = 0;
        }
        else {
          uVar7 = -(uint)(*(byte *)pppppppbVar9 < 0x74) | 1;
        }
        if (uVar7 == 0) goto LAB_143a6341b;
      }
      pppppppbVar9 = (byte *******)&local_d8;
      if (0xf < uStack_c0) {
        pppppppbVar9 = pppppppbVar2;
      }
      if (local_c8 != 5) {
LAB_143a63481:
        pppppppbVar9 = (byte *******)&local_d8;
        if (0xf < uStack_c0) {
          pppppppbVar9 = pppppppbVar2;
        }
        if (local_c8 == 5) {
          lVar10 = 0;
          do {
            lVar14 = lVar10 + 1;
            if (*(byte *)((longlong)pppppppbVar9 + lVar10) != "False"[lVar10]) {
              uVar7 = -(uint)(*(byte *)((longlong)pppppppbVar9 + lVar10) < (byte)"False"[lVar10]) |
                      1;
              goto LAB_143a634bd;
            }
            lVar10 = lVar14;
          } while (lVar14 != 5);
          uVar7 = 0;
LAB_143a634bd:
          if (uVar7 == 0) goto LAB_143a634eb;
        }
        pppppppbVar9 = (byte *******)&local_d8;
        if (0xf < uStack_c0) {
          pppppppbVar9 = pppppppbVar2;
        }
        if (local_c8 == 1) {
          if (*(byte *)pppppppbVar9 == 0x66) {
            uVar7 = 0;
          }
          else {
            uVar7 = -(uint)(*(byte *)pppppppbVar9 < 0x66) | 1;
          }
          if (uVar7 == 0) goto LAB_143a634eb;
        }
        puVar12 = (undefined8 *)*param_4;
        local_e8 = 0;
        uStack_e0 = 0xf;
        local_f8 = (undefined8 *******)((ulonglong)local_f8 & 0xffffffffffffff00);
        local_138 = 2;
        psVar1 = puVar12 + 2;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                  (&local_f8,*psVar1 + 0x21);
        if (uStack_e0 - local_e8 < 0x21) {
          local_148 = 0x21;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (&local_f8,0x21,0,"Invalid value for boolean field \"");
        }
        else {
          pppppppuVar8 = &local_f8;
          if (0xf < uStack_e0) {
            pppppppuVar8 = local_f8;
          }
          pvVar20 = (void *)((longlong)pppppppuVar8 + local_e8);
          local_e8 = local_e8 + 0x21;
          _guard_xfg_dispatch_icall_nop(pvVar20,"Invalid value for boolean field \"",0x21);
          *(undefined1 *)((longlong)pvVar20 + 0x21) = 0;
        }
        if (0xf < (ulonglong)puVar12[3]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        _Size = *psVar1;
        if (uStack_e0 - local_e8 < _Size) {
          local_148 = _Size;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (&local_f8,_Size,0,puVar12);
        }
        else {
          pppppppuVar8 = &local_f8;
          if (0xf < uStack_e0) {
            pppppppuVar8 = local_f8;
          }
          pvVar20 = (void *)((longlong)pppppppuVar8 + local_e8);
          local_e8 = local_e8 + _Size;
          _guard_xfg_dispatch_icall_nop(pvVar20,puVar12,_Size);
          *(undefined1 *)(_Size + (longlong)pvVar20) = 0;
        }
        if (uStack_e0 - local_e8 < 0xb) {
          local_148 = 0xb;
          pppppppuVar8 = (undefined8 *******)
                         std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                         _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                                   (&local_f8,0xb,0,"\". Value: \"");
        }
        else {
          pppppppuVar8 = &local_f8;
          if (0xf < uStack_e0) {
            pppppppuVar8 = local_f8;
          }
          pvVar20 = (void *)((longlong)pppppppuVar8 + local_e8);
          local_e8 = local_e8 + 0xb;
          _guard_xfg_dispatch_icall_nop(pvVar20,"\". Value: \"",0xb);
          *(undefined1 *)((longlong)pvVar20 + 0xb) = 0;
          pppppppuVar8 = &local_f8;
        }
        local_a8 = (undefined8 ******)0x0;
        ppppppuStack_a0 = (undefined8 ******)0x0;
        local_b8 = (undefined8 *******)*pppppppuVar8;
        ppppppuStack_b0 = pppppppuVar8[1];
        local_a8 = pppppppuVar8[2];
        ppppppuStack_a0 = pppppppuVar8[3];
        pppppppuVar8[2] = (undefined8 ******)0x0;
        pppppppuVar8[3] = (undefined8 ******)0xf;
        *(undefined1 *)pppppppuVar8 = 0;
        local_138 = 6;
        pppppppbVar9 = (byte *******)&local_d8;
        if (0xf < uVar4) {
          pppppppbVar9 = pppppppbVar2;
        }
        plVar11 = (longlong *)
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                            (&local_b8,pppppppbVar9,local_c8);
        local_118 = (byte *******)*plVar11;
        lStack_110 = plVar11[1];
        local_108 = plVar11[2];
        uStack_100 = plVar11[3];
        plVar11[2] = 0;
        plVar11[3] = 0xf;
        *(undefined1 *)plVar11 = 0;
        local_138 = 0xe;
        if (uStack_100 - local_108 < 2) {
          local_148 = 2;
          pppppppbVar9 = (byte *******)
                         std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                         _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                                   (&local_118,2,0,&DAT_145cc1490);
        }
        else {
          pppppppbVar9 = (byte *******)&local_118;
          if (0xf < uStack_100) {
            pppppppbVar9 = local_118;
          }
          pvVar20 = (void *)((longlong)pppppppbVar9 + local_108);
          local_108 = local_108 + 2;
          _guard_xfg_dispatch_icall_nop(pvVar20,&DAT_145cc1490,2);
          *(undefined1 *)((longlong)pvVar20 + 2) = 0;
          pppppppbVar9 = (byte *******)&local_118;
        }
        local_70 = (byte ******)0x0;
        ppppppbStack_68 = (byte ******)0x0;
        local_80 = *pppppppbVar9;
        ppppppbStack_78 = pppppppbVar9[1];
        local_70 = pppppppbVar9[2];
        ppppppbStack_68 = pppppppbVar9[3];
        pppppppbVar9[2] = (byte ******)0x0;
        pppppppbVar9[3] = (byte ******)0xf;
        *(undefined1 *)pppppppbVar9 = 0;
        local_138 = 0x1e;
        FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                      &local_80);
        if ((byte ******)0xf < ppppppbStack_68) {
          ppppppbVar17 = (byte ******)((longlong)ppppppbStack_68 + 1);
          ppppppbVar15 = local_80;
          if ((byte ******)0xfff < ppppppbVar17) {
            ppppppbVar17 = ppppppbStack_68 + 5;
            ppppppbVar15 = (byte ******)local_80[-1];
            if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)ppppppbVar15))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(ppppppbVar15,ppppppbVar17);
        }
        local_70 = (byte ******)0x0;
        ppppppbStack_68 = (byte ******)0xf;
        local_80 = (byte ******)((ulonglong)local_80 & 0xffffffffffffff00);
        if (0xf < uStack_100) {
          uVar16 = uStack_100 + 1;
          if ((0xfff < uVar16) &&
             (uVar16 = uStack_100 + 0x28,
             0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)local_118[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FMemory::operator_delete(0,uVar16);
        }
        local_108 = 0;
        uStack_100 = 0xf;
        local_118 = (byte *******)((ulonglong)local_118 & 0xffffffffffffff00);
        if ((undefined8 ******)0xf < ppppppuStack_a0) {
          ppppppuVar18 = (undefined8 ******)((longlong)ppppppuStack_a0 + 1);
          if (((undefined8 ******)0xfff < ppppppuVar18) &&
             (ppppppuVar18 = ppppppuStack_a0 + 5,
             0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)local_b8[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FMemory::operator_delete(0,ppppppuVar18);
        }
        local_a8 = (undefined8 ******)0x0;
        ppppppuStack_a0 = (undefined8 ******)0xf;
        local_b8 = (undefined8 *******)((ulonglong)local_b8 & 0xffffffffffffff00);
        if (0xf < uStack_e0) {
          uVar16 = uStack_e0 + 1;
          if ((0xfff < uVar16) &&
             (uVar16 = uStack_e0 + 0x28,
             0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)local_f8[-1])))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FMemory::operator_delete(0,uVar16);
        }
        goto LAB_143a6390e;
      }
      lVar10 = 0;
      do {
        lVar14 = lVar10 + 1;
        if (*(byte *)((longlong)pppppppbVar9 + lVar10) != "false"[lVar10]) {
          uVar7 = -(uint)(*(byte *)((longlong)pppppppbVar9 + lVar10) < (byte)"false"[lVar10]) | 1;
          goto LAB_143a6347d;
        }
        lVar10 = lVar14;
      } while (lVar14 != 5);
      uVar7 = 0;
LAB_143a6347d:
      if (uVar7 != 0) goto LAB_143a63481;
LAB_143a634eb:
      uVar13 = 0;
    }
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      (**(code **)(*param_3 + 0x230))();
    }
    else {
      (**(code **)(*param_3 + 0x110))(param_3,param_2,param_4,uVar13);
    }
    if (uVar4 < 0x10) {
      return 1;
    }
    uVar16 = uVar4 + 1;
    pppppppbVar9 = pppppppbVar2;
    if (0xfff < uVar16) {
      uVar16 = uVar4 + 0x28;
      pppppppbVar9 = (byte *******)pppppppbVar2[-1];
      if ((byte *)0x1f < (byte *)((longlong)pppppppbVar2 + (-8 - (longlong)pppppppbVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    goto LAB_143a63534;
  case 7:
    local_e8 = 0;
    uStack_e0 = 0xf;
    local_f8 = (undefined8 *******)((ulonglong)local_f8 & 0xffffffffffffff00);
    uVar13 = FUN_143a4dfa0(param_4);
    local_128 = uVar13;
    if (*(int *)(param_1 + 0x28) == 2) {
      cVar5 = FUN_143a64350(param_1,&local_f8);
      if (cVar5 != '\0') {
        lVar10 = FUN_143a3fa90(uVar13,&local_f8);
LAB_143a63af1:
        if (lVar10 != 0) {
          if (*(int *)((longlong)param_4 + 0x3c) == 3) {
            (**(code **)(*param_3 + 0x240))();
          }
          else {
            (**(code **)(*param_3 + 0x120))(param_3,param_2,param_4,lVar10);
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_f8);
          return 1;
        }
        if (*(char *)(param_1 + 0xf7) != '\0') {
          local_a8 = (undefined8 ******)0x0;
          ppppppuStack_a0 = (undefined8 ******)0xf;
          local_b8 = (undefined8 *******)((ulonglong)local_b8 & 0xffffffffffffff00);
          local_138 = uVar7 | 0x400;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                    (&local_b8,local_e8 + 0x1e);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_b8,"Unknown enumeration value of \"",0x1e);
          pppppppuVar8 = &local_f8;
          if (0xf < uStack_e0) {
            pppppppuVar8 = local_f8;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                    (&local_b8,pppppppuVar8,local_e8);
          puVar12 = (undefined8 *)
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                              (&local_b8,"\" for field \"",0xd);
          local_118 = (byte *******)*puVar12;
          lStack_110 = puVar12[1];
          local_108 = puVar12[2];
          uStack_100 = puVar12[3];
          puVar12[2] = 0;
          puVar12[3] = 0xf;
          *(undefined1 *)puVar12 = 0;
          local_138 = uVar7 | 0xc00;
          uVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                             (&local_d8,&local_118,*param_4);
          plVar11 = (longlong *)
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                              (uVar13,&DAT_145cc1490,2);
          local_80 = (byte ******)*plVar11;
          ppppppbStack_78 = (byte ******)plVar11[1];
          local_70 = (byte ******)plVar11[2];
          ppppppbStack_68 = (byte ******)plVar11[3];
          plVar11[2] = 0;
          plVar11[3] = 0xf;
          *(undefined1 *)plVar11 = 0;
          local_138 = uVar7 | 0x1c00;
          FUN_143a69ee0(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                        &local_80);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_80);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_d8);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_118);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (&local_b8);
          uVar13 = 1;
          goto LAB_143a63ef0;
        }
        local_108 = 0;
        uStack_100 = 0xf;
        local_118 = (byte *******)((ulonglong)local_118 & 0xffffffffffffff00);
        local_138 = uVar7 | 0x80;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                  (&local_118,local_e8 + 0x1e);
        if (uStack_100 - local_108 < 0x1e) {
          local_148 = 0x1e;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (&local_118,0x1e,0,"Unknown enumeration value of \"");
        }
        else {
          pppppppbVar9 = (byte *******)&local_118;
          if (0xf < uStack_100) {
            pppppppbVar9 = local_118;
          }
          pbVar21 = (byte *)((longlong)pppppppbVar9 + local_108);
          local_108 = local_108 + 0x1e;
          _guard_xfg_dispatch_icall_nop(pbVar21,"Unknown enumeration value of \"",0x1e);
          pbVar21[0x1e] = 0;
        }
        pppppppuVar8 = &local_f8;
        if (0xf < uStack_e0) {
          pppppppuVar8 = local_f8;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (&local_118,pppppppuVar8,local_e8);
        plVar11 = (longlong *)
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                            (&local_118,"\" for field \"",0xd);
        local_80 = (byte ******)*plVar11;
        ppppppbStack_78 = (byte ******)plVar11[1];
        local_70 = (byte ******)plVar11[2];
        ppppppbStack_68 = (byte ******)plVar11[3];
        plVar11[2] = 0;
        plVar11[3] = 0xf;
        *(undefined1 *)plVar11 = 0;
        local_138 = uVar7 | 0x180;
        uVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                           (&local_d8,&local_80,*param_4);
        puVar12 = (undefined8 *)
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                            (uVar13,&DAT_145cc1490,2);
        local_b8 = (undefined8 *******)*puVar12;
        ppppppuStack_b0 = (undefined8 ******)puVar12[1];
        local_a8 = (undefined8 ******)puVar12[2];
        ppppppuStack_a0 = (undefined8 ******)puVar12[3];
        puVar12[2] = 0;
        puVar12[3] = 0xf;
        *(undefined1 *)puVar12 = 0;
        local_138 = uVar7 | 0x380;
        FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                      &local_b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_d8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_80);
LAB_143a63ee4:
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_118);
      }
    }
    else {
      local_a8 = (undefined8 ******)0x0;
      ppppppuStack_a0 = (undefined8 ******)0xf;
      local_b8 = (undefined8 *******)((ulonglong)local_b8 & 0xffffffffffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_b8,&DAT_145cc6554,1);
      ppppppuVar18 = ppppppuStack_a0;
      pppppppuVar8 = local_b8;
      plVar11 = (longlong *)(param_1 + 0x30);
      pppppppuVar19 = &local_b8;
      if (0xf < ppppppuStack_a0) {
        pppppppuVar19 = local_b8;
      }
      _Buf1 = plVar11;
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        _Buf1 = (longlong *)*plVar11;
      }
      if ((((undefined8 ******)*(size_t *)(param_1 + 0x40) == local_a8) &&
          (iVar6 = _guard_xfg_dispatch_icall_nop(_Buf1,pppppppuVar19,*(size_t *)(param_1 + 0x40)),
          iVar6 == 0)) || (local_130[0] = '\0', *(int *)(param_1 + 0x28) == 3)) {
        local_130[0] = '\x01';
      }
      if (0xf < ppppppuVar18) {
        uVar16 = (longlong)ppppppuVar18 + 1;
        pppppppuVar19 = pppppppuVar8;
        if (0xfff < uVar16) {
          uVar16 = (longlong)ppppppuVar18 + 0x28;
          pppppppuVar19 = (undefined8 *******)pppppppuVar8[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuVar8 + (-8 - (longlong)pppppppuVar19))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(pppppppuVar19,uVar16);
      }
      if (local_130[0] == '\0') {
        local_108 = 0;
        uStack_100 = 0xf;
        local_118 = (byte *******)((ulonglong)local_118 & 0xffffffffffffff00);
        local_138 = 0x40;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                  (&local_118,*(longlong *)(param_1 + 0x40) + 0x25);
        if (uStack_100 - local_108 < 0x25) {
          local_148 = 0x25;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (&local_118,0x25,0,"Expected integer or identifier, got: ");
        }
        else {
          pppppppbVar9 = (byte *******)&local_118;
          if (0xf < uStack_100) {
            pppppppbVar9 = local_118;
          }
          pbVar21 = (byte *)((longlong)pppppppbVar9 + local_108);
          local_108 = local_108 + 0x25;
          _guard_xfg_dispatch_icall_nop(pbVar21,"Expected integer or identifier, got: ",0x25);
          pbVar21[0x25] = 0;
        }
        if (0xf < *(ulonglong *)(param_1 + 0x48)) {
          plVar11 = (longlong *)*plVar11;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (&local_118,plVar11,*(longlong *)(param_1 + 0x40));
        FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                      &local_118);
        goto LAB_143a63ee4;
      }
      cVar5 = FUN_143a64a20(param_1,&local_138,0x7fffffff);
      uVar3 = local_138;
      if (cVar5 != '\0') {
        local_80 = (byte ******)&local_70;
        lVar10 = FUN_143a59810(CONCAT44(uStack_134,local_138),&local_70);
        ppppppbStack_78 = (byte ******)(lVar10 + (-0x10 - (longlong)&local_80));
        local_a8 = (undefined8 ******)0x0;
        ppppppuStack_a0 = (undefined8 ******)0xf;
        local_b8 = (undefined8 *******)((ulonglong)local_b8 & 0xffffffffffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_b8,local_80);
        uVar7 = 0x20;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_f8);
        local_f8 = local_b8;
        ppppppuStack_f0 = ppppppuStack_b0;
        local_e8 = (size_t)local_a8;
        uStack_e0 = (ulonglong)ppppppuStack_a0;
        lVar10 = FUN_143a3fad0(local_128,uVar3);
        goto LAB_143a63af1;
      }
    }
    uVar13 = 0;
LAB_143a63ef0:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&local_f8);
    return uVar13;
  case 8:
    local_108 = 0;
    uStack_100 = 0xf;
    local_118 = (byte *******)((ulonglong)local_118 & 0xffffffffffffff00);
    cVar5 = FUN_143a64b70(param_1,&local_118);
    if (cVar5 == '\0') {
      if (uStack_100 < 0x10) {
        return 0;
      }
      uVar16 = uStack_100 + 1;
      pppppppbVar9 = local_118;
      if (0xfff < uVar16) {
        uVar16 = uStack_100 + 0x28;
        pppppppbVar9 = (byte *******)local_118[-1];
        if ((byte *)0x1f < (byte *)((longlong)local_118 + (-8 - (longlong)local_118[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_143a632d8;
    }
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      (**(code **)(*param_3 + 0x238))();
    }
    else {
      (**(code **)(*param_3 + 0x118))(param_3,param_2,param_4,&local_118);
    }
    if (uStack_100 < 0x10) {
      return 1;
    }
    uVar16 = uStack_100 + 1;
    pppppppbVar9 = local_118;
    if (0xfff < uVar16) {
      uVar16 = uStack_100 + 0x28;
      pppppppbVar9 = (byte *******)local_118[-1];
      if ((byte *)0x1f < (byte *)((longlong)local_118 + (-8 - (longlong)local_118[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_143a63534:
    FMemory::operator_delete(pppppppbVar9,uVar16);
    break;
  case 9:
    uVar13 = FUN_1439eeb00(&local_b8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                           0x31a);
    uVar13 = FUN_1439eef00(uVar13,"Reached an unintended state: CPPTYPE_MESSAGE");
    FUN_1439eec50(local_130,uVar13);
    DsDevice::~DsDevice(&local_b8);
  }
  return 1;
}



// FUNCTION 143a63f90 FUN_143a63f90 body=955 status=ok
// SIG undefined FUN_143a63f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a63f90(longlong param_1,undefined8 *param_2)

{
  size_t _Size;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong *_Src;
  undefined1 auStack_c8 [32];
  size_t local_a8;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  size_t local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  cVar3 = FUN_143a64350();
  if (cVar3 == '\0') {
    return 0;
  }
  _Src = (longlong *)(param_1 + 0x30);
  while( true ) {
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_88,&DAT_143f47cc0,1);
    uVar10 = local_70;
    puVar11 = (undefined1 *)CONCAT71(uStack_87,local_88);
    puVar8 = &local_88;
    if (0xf < local_70) {
      puVar8 = puVar11;
    }
    plVar6 = _Src;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      plVar6 = (longlong *)*_Src;
    }
    if ((*(size_t *)(param_1 + 0x40) == local_78) &&
       (iVar4 = _guard_xfg_dispatch_icall_nop(plVar6,puVar8,*(size_t *)(param_1 + 0x40)), iVar4 == 0
       )) {
      FUN_143a840e0(param_1 + 0x28);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (0xf < uVar10) {
      uVar9 = uVar10 + 1;
      puVar8 = puVar11;
      if (0xfff < uVar9) {
        uVar9 = uVar10 + 0x28;
        puVar8 = *(undefined1 **)(puVar11 + -8);
        if ((undefined1 *)0x1f < puVar11 + (-8 - (longlong)puVar8)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(puVar8,uVar9);
    }
    if (!bVar2) break;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = 0;
    if ((*(int *)(param_1 + 0x28) != 2) &&
       ((((*(char *)(param_1 + 0xf8) == '\0' && (*(char *)(param_1 + 0xf5) == '\0')) &&
         (*(char *)(param_1 + 0xf6) == '\0')) || (*(int *)(param_1 + 0x28) != 3)))) {
      local_58 = 0;
      local_50 = 0xf;
      local_68 = 0;
      local_98 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (&local_68,*(size_t *)(param_1 + 0x40) + 0x1a);
      if (local_50 - local_58 < 0x1a) {
        local_a8 = 0x1a;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_68,0x1a,0,"Expected identifier, got: ");
      }
      else {
        puVar11 = &local_68;
        if (0xf < local_50) {
          puVar11 = (undefined1 *)CONCAT71(uStack_67,local_68);
        }
        puVar11 = puVar11 + local_58;
        local_58 = local_58 + 0x1a;
        _guard_xfg_dispatch_icall_nop(puVar11,"Expected identifier, got: ",0x1a);
        puVar11[0x1a] = 0;
      }
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        _Src = (longlong *)*_Src;
      }
      _Size = *(size_t *)(param_1 + 0x40);
      if (local_50 - local_58 < _Size) {
        local_a8 = _Size;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_68,_Size,0,_Src);
      }
      else {
        puVar11 = &local_68;
        if (0xf < local_50) {
          puVar11 = (undefined1 *)CONCAT71(uStack_67,local_68);
        }
        puVar11 = puVar11 + local_58;
        local_58 = _Size + local_58;
        _guard_xfg_dispatch_icall_nop(puVar11,_Src,_Size);
        puVar11[_Size] = 0;
      }
      FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                    &local_68);
      if (local_50 < 0x10) {
        return 0;
      }
      uVar10 = local_50 + 1;
      lVar1 = CONCAT71(uStack_67,local_68);
      lVar7 = lVar1;
      if (0xfff < uVar10) {
        uVar10 = local_50 + 0x28;
        lVar7 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar10);
      return 0;
    }
    if ((longlong *)&local_88 != _Src) {
      plVar6 = _Src;
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        plVar6 = (longlong *)*_Src;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_88,plVar6,*(undefined8 *)(param_1 + 0x40));
    }
    FUN_143a840e0(param_1 + 0x28);
    uVar10 = param_2[2];
    if (param_2[3] == uVar10) {
      local_a8 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (param_2,1,0,&DAT_143f47cc0);
    }
    else {
      param_2[2] = uVar10 + 1;
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar5 + uVar10),&DAT_143f47cc0,1);
      *(undefined1 *)((longlong)((longlong)puVar5 + uVar10) + 1) = 0;
    }
    puVar11 = &local_88;
    if (0xf < local_70) {
      puVar11 = (undefined1 *)CONCAT71(uStack_87,local_88);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_2,puVar11,local_78);
    if (0xf < local_70) {
      uVar10 = local_70 + 1;
      lVar1 = CONCAT71(uStack_87,local_88);
      lVar7 = lVar1;
      if (0xfff < uVar10) {
        uVar10 = local_70 + 0x28;
        lVar7 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar10);
    }
  }
  return 1;
}



// FUNCTION 143a64350 FUN_143a64350 body=529 status=ok
// SIG undefined FUN_143a64350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a64350(longlong param_1,longlong param_2)

{
  size_t _Size;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 *_Src;
  undefined1 auStack_88 [32];
  size_t local_68;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = 0;
  if ((*(int *)(param_1 + 0x28) == 2) ||
     ((((*(char *)(param_1 + 0xf8) != '\0' || (*(char *)(param_1 + 0xf5) != '\0')) ||
       (*(char *)(param_1 + 0xf6) != '\0')) && (*(int *)(param_1 + 0x28) == 3)))) {
    plVar4 = (longlong *)(param_1 + 0x30);
    if ((longlong *)param_2 != plVar4) {
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        plVar4 = (longlong *)*plVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,plVar4,*(undefined8 *)(param_1 + 0x40));
    }
    FUN_143a840e0(param_1 + 0x28);
    uVar2 = 1;
  }
  else {
    _Src = (undefined8 *)(param_1 + 0x30);
    local_38 = 0;
    uStack_30 = 0xf;
    local_48 = 0;
    local_58 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_48,*(size_t *)(param_1 + 0x40) + 0x1a);
    if (uStack_30 - local_38 < 0x1a) {
      local_68 = 0x1a;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_48,0x1a,0,"Expected identifier, got: ");
    }
    else {
      puVar6 = &local_48;
      if (0xf < uStack_30) {
        puVar6 = (undefined1 *)CONCAT71(uStack_47,local_48);
      }
      puVar6 = puVar6 + local_38;
      local_38 = local_38 + 0x1a;
      _guard_xfg_dispatch_icall_nop(puVar6,"Expected identifier, got: ",0x1a);
      puVar6[0x1a] = 0;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      _Src = (undefined8 *)*_Src;
    }
    _Size = *(size_t *)(param_1 + 0x40);
    if (uStack_30 - local_38 < _Size) {
      local_68 = _Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_48,_Size,0,_Src);
    }
    else {
      puVar6 = &local_48;
      if (0xf < uStack_30) {
        puVar6 = (undefined1 *)CONCAT71(uStack_47,local_48);
      }
      puVar6 = puVar6 + local_38;
      local_38 = _Size + local_38;
      _guard_xfg_dispatch_icall_nop(puVar6,_Src,_Size);
      puVar6[_Size] = 0;
    }
    FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_48)
    ;
    if (0xf < uStack_30) {
      uVar5 = uStack_30 + 1;
      lVar1 = CONCAT71(uStack_47,local_48);
      lVar3 = lVar1;
      if (0xfff < uVar5) {
        uVar5 = uStack_30 + 0x28;
        lVar3 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar5);
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143a64570 FUN_143a64570 body=734 status=ok
// SIG undefined FUN_143a64570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a64570(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_c8 [32];
  uint local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  size_t local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  size_t local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_90 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar15 = 0;
  local_a8 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  local_a0 = param_1;
  local_98 = param_2;
  local_88 = param_3;
  while( true ) {
    local_50 = 0;
    local_48 = 0xf;
    local_60 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_60,&DAT_145cc62c8,1);
    uVar2 = local_48;
    uVar15 = uVar15 | 1;
    puVar3 = (undefined1 *)CONCAT71(uStack_5f,local_60);
    puVar11 = &local_60;
    if (0xf < local_48) {
      puVar11 = puVar3;
    }
    puVar8 = puVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar8 = (undefined8 *)*puVar1;
    }
    local_a8 = uVar15;
    if ((*(size_t *)(param_1 + 0x40) == local_50) &&
       (iVar6 = _guard_xfg_dispatch_icall_nop(puVar8,puVar11,*(size_t *)(param_1 + 0x40)),
       iVar6 == 0)) {
      puVar11 = (undefined1 *)CONCAT71(uStack_7f,local_80);
      bVar4 = false;
      uVar14 = local_68;
    }
    else {
      local_70 = 0;
      local_68 = 0xf;
      local_80 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_80,&DAT_145cc107c,1);
      uVar14 = local_68;
      uVar15 = 3;
      puVar11 = (undefined1 *)CONCAT71(uStack_7f,local_80);
      puVar12 = &local_80;
      if (0xf < local_68) {
        puVar12 = puVar11;
      }
      puVar8 = puVar1;
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        puVar8 = (undefined8 *)*puVar1;
      }
      if ((*(size_t *)(param_1 + 0x40) == local_70) &&
         (iVar6 = _guard_xfg_dispatch_icall_nop(puVar8,puVar12,*(size_t *)(param_1 + 0x40)),
         iVar6 == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    if (((uVar15 & 2) != 0) && (uVar15 = 0, 0xf < uVar14)) {
      uVar13 = uVar14 + 1;
      puVar12 = puVar11;
      if (0xfff < uVar13) {
        uVar13 = uVar14 + 0x28;
        puVar12 = *(undefined1 **)(puVar11 + -8);
        if ((undefined1 *)0x1f < puVar11 + (-8 - (longlong)puVar12)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(puVar12,uVar13);
    }
    uVar15 = uVar15 & 0xfffffffe;
    if (0xf < uVar2) {
      uVar14 = uVar2 + 1;
      puVar11 = puVar3;
      if (0xfff < uVar14) {
        uVar14 = uVar2 + 0x28;
        puVar11 = *(undefined1 **)(puVar3 + -8);
        if ((undefined1 *)0x1f < puVar3 + (-8 - (longlong)puVar11)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(puVar11,uVar14);
    }
    if (!bVar4) break;
    cVar5 = FUN_143a61500(local_a0,local_98);
    if (cVar5 == '\0') {
      uVar2 = param_3[3];
      if (0xf < uVar2) {
        uVar14 = uVar2 + 1;
        lVar10 = *param_3;
        if (0xfff < uVar14) {
          lVar9 = lVar10 - *(longlong *)(lVar10 + -8);
          lVar10 = *(longlong *)(lVar10 + -8);
          if (0x1f < lVar9 - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
LAB_143a64804:
          uVar14 = uVar2 + 0x28;
        }
LAB_143a64807:
        FMemory::operator_delete(lVar10,uVar14);
      }
LAB_143a6480c:
      uVar7 = 0;
LAB_143a6480e:
      param_3[2] = 0;
      param_3[3] = 0xf;
      *(undefined1 *)param_3 = 0;
      return uVar7;
    }
  }
  cVar5 = FUN_143a60110(local_a0,param_3);
  uVar2 = param_3[3];
  if (cVar5 == '\0') {
    if (uVar2 < 0x10) goto LAB_143a6480c;
    uVar14 = uVar2 + 1;
    lVar10 = *param_3;
    if (uVar14 < 0x1000) goto LAB_143a64807;
    lVar9 = lVar10 - *(longlong *)(lVar10 + -8);
    lVar10 = *(longlong *)(lVar10 + -8);
    if (0x1f < lVar9 - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    goto LAB_143a64804;
  }
  if (0xf < uVar2) {
    uVar14 = uVar2 + 1;
    lVar10 = *param_3;
    lVar9 = lVar10;
    if (0xfff < uVar14) {
      uVar14 = uVar2 + 0x28;
      lVar9 = *(longlong *)(lVar10 + -8);
      if (0x1f < (lVar10 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar9,uVar14);
  }
  uVar7 = 1;
  goto LAB_143a6480e;
}



// FUNCTION 143a64860 FUN_143a64860 body=438 status=ok
// SIG undefined FUN_143a64860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a64860(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *_Buf1;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  size_t local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_48 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_30 = 0;
  uStack_28 = 0xf;
  local_40 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_40,&DAT_145cc62cc,1);
  uVar10 = uStack_28;
  _Buf1 = (undefined8 *)(param_1 + 0x30);
  puVar1 = (undefined1 *)CONCAT71(uStack_3f,local_40);
  puVar8 = &local_40;
  if (0xf < uStack_28) {
    puVar8 = puVar1;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Buf1 = (undefined8 *)*_Buf1;
  }
  if (*(size_t *)(param_1 + 0x40) == local_30) {
    iVar5 = _guard_xfg_dispatch_icall_nop(_Buf1,puVar8,*(size_t *)(param_1 + 0x40));
    if (iVar5 == 0) {
      FUN_143a840e0(param_1 + 0x28);
      bVar3 = true;
      goto LAB_143a64907;
    }
  }
  bVar3 = false;
LAB_143a64907:
  if (0xf < uVar10) {
    uVar9 = uVar10 + 1;
    puVar8 = puVar1;
    if (0xfff < uVar9) {
      uVar9 = uVar10 + 0x28;
      puVar8 = *(undefined1 **)(puVar1 + -8);
      if ((undefined1 *)0x1f < puVar1 + (-8 - (longlong)puVar8)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar8,uVar9);
  }
  if (bVar3) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,&DAT_145cc62c8,1);
    uVar6 = 1;
  }
  else {
    local_30 = 0;
    uStack_28 = 0xf;
    local_40 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_40,&DAT_145cc62d0,1);
    cVar4 = FUN_143a60110(param_1,&local_40);
    if (0xf < uStack_28) {
      uVar10 = uStack_28 + 1;
      lVar2 = CONCAT71(uStack_3f,local_40);
      lVar7 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = uStack_28 + 0x28;
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar10);
    }
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,&DAT_145cc107c,1);
      uVar6 = 1;
    }
  }
  return uVar6;
}



// FUNCTION 143a64a20 FUN_143a64a20 body=333 status=ok
// SIG undefined FUN_143a64a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a64a20(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  void *_Buf1;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58;
  undefined7 uStack_57;
  size_t local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_68[1] = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_58,&DAT_145cc6554,1);
  uVar3 = uStack_40;
  puVar1 = (undefined1 *)CONCAT71(uStack_57,local_58);
  puVar7 = &local_58;
  if (0xf < uStack_40) {
    puVar7 = puVar1;
  }
  _Buf1 = (void *)(param_1 + 0x30);
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Buf1 = *(void **)(param_1 + 0x30);
  }
  if ((*(size_t *)(param_1 + 0x40) == local_48) &&
     (iVar5 = _guard_xfg_dispatch_icall_nop(_Buf1,puVar7,*(size_t *)(param_1 + 0x40)), iVar5 == 0))
  {
    FUN_143a840e0(param_1 + 0x28);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (0xf < uVar3) {
    uVar8 = uVar3 + 1;
    puVar7 = puVar1;
    if (0xfff < uVar8) {
      uVar8 = uVar3 + 0x28;
      puVar7 = *(undefined1 **)(puVar1 + -8);
      if ((undefined1 *)0x1f < puVar1 + (-8 - (longlong)puVar7)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar7,uVar8);
  }
  lVar9 = param_3 + 1;
  if (!bVar2) {
    lVar9 = param_3;
  }
  cVar4 = FUN_143a657b0(param_1,local_68,lVar9);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    if (bVar2) {
      if (local_68[0] == -0x8000000000000000) {
        *param_2 = -0x8000000000000000;
        return 0x8000000000000001;
      }
      local_68[0] = -local_68[0];
    }
    *param_2 = local_68[0];
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143a64b70 FUN_143a64b70 body=506 status=ok
// SIG undefined FUN_143a64b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a64b70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  size_t _Size;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [32];
  size_t local_68;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = 0;
  if (*(int *)(param_1 + 0x28) == 5) {
    param_2[2] = 0;
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar4 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    while (iVar1 == 5) {
      FUN_143a84b20(param_1 + 0x30,param_2);
      FUN_143a840e0(param_1 + 0x28);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    uVar3 = 1;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    local_38 = 0;
    uStack_30 = 0xf;
    local_48 = 0;
    local_58 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_48,*(size_t *)(param_1 + 0x40) + 0x16);
    if (uStack_30 - local_38 < 0x16) {
      local_68 = 0x16;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_48,0x16,0,"Expected string, got: ");
    }
    else {
      puVar7 = &local_48;
      if (0xf < uStack_30) {
        puVar7 = (undefined1 *)CONCAT71(uStack_47,local_48);
      }
      puVar7 = puVar7 + local_38;
      local_38 = local_38 + 0x16;
      _guard_xfg_dispatch_icall_nop(puVar7,"Expected string, got: ",0x16);
      puVar7[0x16] = 0;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    _Size = *(size_t *)(param_1 + 0x40);
    if (uStack_30 - local_38 < _Size) {
      local_68 = _Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_48,_Size,0,puVar4);
    }
    else {
      puVar7 = &local_48;
      if (0xf < uStack_30) {
        puVar7 = (undefined1 *)CONCAT71(uStack_47,local_48);
      }
      puVar7 = puVar7 + local_38;
      local_38 = _Size + local_38;
      _guard_xfg_dispatch_icall_nop(puVar7,puVar4,_Size);
      puVar7[_Size] = 0;
    }
    FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_48)
    ;
    if (0xf < uStack_30) {
      uVar6 = uStack_30 + 1;
      lVar2 = CONCAT71(uStack_47,local_48);
      lVar5 = lVar2;
      if (0xfff < uVar6) {
        uVar6 = uStack_30 + 0x28;
        lVar5 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar5,uVar6);
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143a64d70 FUN_143a64d70 body=1080 status=ok
// SIG undefined FUN_143a64d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a64d70(longlong param_1)

{
  size_t _Size;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  longlong *_Src;
  undefined1 auStack_d8 [32];
  size_t local_b8;
  uint local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  size_t local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  size_t local_68;
  ulonglong local_60;
  longlong local_58 [2];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_a0 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar11 = 0;
  local_a8 = 0;
  local_48 = 0;
  uStack_40 = 0xf;
  local_58[0]._0_1_ = 0;
  cVar3 = FUN_143a64350(0,local_58);
  if (cVar3 != '\0') {
    _Src = (longlong *)(param_1 + 0x30);
LAB_143a64de0:
    do {
      local_68 = 0;
      local_60 = 0xf;
      local_78 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_78,&DAT_143f47cc0,1);
      uVar11 = uVar11 | 1;
      puVar12 = (undefined1 *)CONCAT71(uStack_77,local_78);
      puVar7 = &local_78;
      if (0xf < local_60) {
        puVar7 = puVar12;
      }
      plVar5 = _Src;
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        plVar5 = (longlong *)*_Src;
      }
      local_a8 = uVar11;
      if (*(size_t *)(param_1 + 0x40) == local_68) {
        iVar4 = _guard_xfg_dispatch_icall_nop(plVar5,puVar7,*(size_t *)(param_1 + 0x40));
        if (iVar4 != 0) goto LAB_143a64e58;
        FUN_143a840e0(param_1 + 0x28);
        puVar7 = (undefined1 *)CONCAT71(uStack_97,local_98);
        bVar2 = true;
        uVar10 = local_80;
      }
      else {
LAB_143a64e58:
        local_88 = 0;
        local_80 = 0xf;
        local_98 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_98,&DAT_145cc6654,1);
        uVar10 = local_80;
        uVar11 = 3;
        local_a8 = 3;
        puVar7 = (undefined1 *)CONCAT71(uStack_97,local_98);
        puVar8 = &local_98;
        if (0xf < local_80) {
          puVar8 = puVar7;
        }
        plVar5 = _Src;
        if (0xf < *(ulonglong *)(param_1 + 0x48)) {
          plVar5 = (longlong *)*_Src;
        }
        if (*(size_t *)(param_1 + 0x40) == local_88) {
          iVar4 = _guard_xfg_dispatch_icall_nop(plVar5,puVar8,*(size_t *)(param_1 + 0x40));
          if (iVar4 == 0) {
            FUN_143a840e0(param_1 + 0x28);
            bVar2 = true;
            goto LAB_143a64ece;
          }
        }
        bVar2 = false;
      }
LAB_143a64ece:
      if (((uVar11 & 2) != 0) && (uVar11 = 0, 0xf < uVar10)) {
        uVar9 = uVar10 + 1;
        puVar8 = puVar7;
        if (0xfff < uVar9) {
          uVar9 = uVar10 + 0x28;
          puVar8 = *(undefined1 **)(puVar7 + -8);
          if ((undefined1 *)0x1f < puVar7 + (-8 - (longlong)puVar8)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar8,uVar9);
      }
      uVar11 = uVar11 & 0xfffffffe;
      if (0xf < local_60) {
        uVar10 = local_60 + 1;
        puVar7 = puVar12;
        if (0xfff < uVar10) {
          uVar10 = local_60 + 0x28;
          puVar7 = *(undefined1 **)(puVar12 + -8);
          if ((undefined1 *)0x1f < puVar12 + (-8 - (longlong)puVar7)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar7,uVar10);
      }
      if (!bVar2) {
        uVar13 = 1;
        goto LAB_143a6513a;
      }
      if (*(int *)(param_1 + 0x28) == 2) {
        if (local_58 != _Src) {
          plVar5 = _Src;
          if (0xf < *(ulonglong *)(param_1 + 0x48)) {
            plVar5 = (longlong *)*_Src;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (local_58,plVar5,*(undefined8 *)(param_1 + 0x40));
        }
        FUN_143a840e0(param_1 + 0x28);
        goto LAB_143a64de0;
      }
      if ((((*(char *)(param_1 + 0xf8) == '\0') && (*(char *)(param_1 + 0xf5) == '\0')) &&
          (*(char *)(param_1 + 0xf6) == '\0')) || (*(int *)(param_1 + 0x28) != 3))
      goto LAB_143a64fed;
      if (local_58 != _Src) {
        plVar5 = _Src;
        if (0xf < *(ulonglong *)(param_1 + 0x48)) {
          plVar5 = (longlong *)*_Src;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_58,plVar5,*(undefined8 *)(param_1 + 0x40));
      }
      FUN_143a840e0(param_1 + 0x28);
    } while( true );
  }
LAB_143a65138:
  uVar13 = 0;
LAB_143a6513a:
  if (0xf < uStack_40) {
    uVar10 = uStack_40 + 1;
    lVar1 = CONCAT71(local_58[0]._1_7_,(undefined1)local_58[0]);
    lVar6 = lVar1;
    if (0xfff < uVar10) {
      uVar10 = uStack_40 + 0x28;
      lVar6 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar6,uVar10);
  }
  return uVar13;
LAB_143a64fed:
  local_88 = 0;
  local_80 = 0xf;
  local_98 = 0;
  local_a8 = uVar11 | 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
            (&local_98,*(size_t *)(param_1 + 0x40) + 0x1a);
  if (local_80 - local_88 < 0x1a) {
    local_b8 = 0x1a;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (&local_98,0x1a,0,"Expected identifier, got: ");
  }
  else {
    puVar12 = &local_98;
    if (0xf < local_80) {
      puVar12 = (undefined1 *)CONCAT71(uStack_97,local_98);
    }
    puVar12 = puVar12 + local_88;
    local_88 = local_88 + 0x1a;
    _guard_xfg_dispatch_icall_nop(puVar12,"Expected identifier, got: ",0x1a);
    puVar12[0x1a] = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Src = (longlong *)*_Src;
  }
  _Size = *(size_t *)(param_1 + 0x40);
  if (local_80 - local_88 < _Size) {
    local_b8 = _Size;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (&local_98,_Size,0,_Src);
  }
  else {
    puVar12 = &local_98;
    if (0xf < local_80) {
      puVar12 = (undefined1 *)CONCAT71(uStack_97,local_98);
    }
    puVar12 = puVar12 + local_88;
    local_88 = _Size + local_88;
    _guard_xfg_dispatch_icall_nop(puVar12,_Src,_Size);
    puVar12[_Size] = 0;
  }
  FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_98);
  if (0xf < local_80) {
    uVar10 = local_80 + 1;
    lVar1 = CONCAT71(uStack_97,local_98);
    lVar6 = lVar1;
    if (0xfff < uVar10) {
      uVar10 = local_80 + 0x28;
      lVar6 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar6,uVar10);
  }
  goto LAB_143a65138;
}



// FUNCTION 143a651b0 FUN_143a651b0 body=1532 status=ok
// SIG undefined FUN_143a651b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143a651b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong *_Src;
  undefined1 auStack_b8 [32];
  size_t local_98;
  undefined4 local_88;
  undefined8 local_80;
  ulonglong local_78 [2];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  _Src = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) != 3) {
    local_68 = 0;
    uStack_60 = 0xf;
    local_78[0]._0_1_ = '\0';
    local_88 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (local_78,*(size_t *)(param_1 + 0x40) + 0x17);
    if (uStack_60 - local_68 < 0x17) {
      local_98 = 0x17;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (local_78,0x17,0,"Expected integer, got: ");
    }
    else {
      pcVar9 = (char *)local_78;
      if (0xf < uStack_60) {
        pcVar9 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      }
      pcVar9 = pcVar9 + local_68;
      local_68 = local_68 + 0x17;
      _guard_xfg_dispatch_icall_nop(pcVar9,"Expected integer, got: ",0x17);
      pcVar9[0x17] = '\0';
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      _Src = (longlong *)*_Src;
    }
    sVar1 = *(size_t *)(param_1 + 0x40);
    if (uStack_60 - local_68 < sVar1) {
      local_98 = sVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (local_78,sVar1,0,_Src);
    }
    else {
      pcVar9 = (char *)local_78;
      if (0xf < uStack_60) {
        pcVar9 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      }
      pcVar9 = pcVar9 + local_68;
      local_68 = local_68 + sVar1;
      _guard_xfg_dispatch_icall_nop(pcVar9,_Src,sVar1);
      pcVar9[sVar1] = '\0';
    }
    FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),local_78);
    if (uStack_60 < 0x10) {
      return 0;
    }
    uVar7 = uStack_60 + 1;
    lVar2 = CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
    lVar4 = lVar2;
    uVar6 = local_48;
    uVar8 = uStack_40;
    if (0xfff < uVar7) {
      uVar7 = uStack_60 + 0x28;
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    goto LAB_143a65345;
  }
  puVar3 = (ulonglong *)(param_1 + 0x40);
  uVar6 = *puVar3;
  if (1 < uVar6) {
    uVar8 = *(ulonglong *)(param_1 + 0x48);
    plVar5 = _Src;
    if (0xf < uVar8) {
      plVar5 = (longlong *)*_Src;
    }
    if (*(char *)plVar5 == '0') {
      plVar5 = _Src;
      if (0xf < uVar8) {
        plVar5 = (longlong *)*_Src;
      }
      if (*(char *)((longlong)plVar5 + 1) != 'x') {
        plVar5 = _Src;
        if (0xf < uVar8) {
          plVar5 = (longlong *)*_Src;
        }
        if (*(char *)((longlong)plVar5 + 1) != 'X') goto LAB_143a6539e;
      }
LAB_143a653f0:
      local_68 = 0;
      uStack_60 = 0xf;
      local_78[0]._0_1_ = '\0';
      local_88 = 2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (local_78,uVar6 + 0x1e);
      if (uStack_60 - local_68 < 0x1e) {
        local_98 = 0x1e;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (local_78,0x1e,0,"Expect a decimal number, got: ");
      }
      else {
        pcVar9 = (char *)local_78;
        if (0xf < uStack_60) {
          pcVar9 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
        }
        pcVar9 = pcVar9 + local_68;
        local_68 = local_68 + 0x1e;
        _guard_xfg_dispatch_icall_nop(pcVar9,"Expect a decimal number, got: ",0x1e);
        pcVar9[0x1e] = '\0';
      }
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        _Src = (longlong *)*_Src;
      }
      sVar1 = *puVar3;
      if (uStack_60 - local_68 < sVar1) {
        local_98 = sVar1;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (local_78,sVar1,0,_Src);
      }
      else {
        pcVar9 = (char *)local_78;
        if (0xf < uStack_60) {
          pcVar9 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
        }
        pcVar9 = pcVar9 + local_68;
        local_68 = sVar1 + local_68;
        _guard_xfg_dispatch_icall_nop(pcVar9,_Src,sVar1);
        pcVar9[sVar1] = '\0';
      }
      FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),local_78
                   );
      if (uStack_60 < 0x10) {
        return 0;
      }
      uVar7 = uStack_60 + 1;
      lVar2 = CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      lVar4 = lVar2;
      uVar6 = local_48;
      uVar8 = uStack_40;
      if (0xfff < uVar7) {
        uVar7 = uStack_60 + 0x28;
        lVar4 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_143a65345;
    }
LAB_143a6539e:
    if (1 < uVar6) {
      uVar8 = *(ulonglong *)(param_1 + 0x48);
      plVar5 = _Src;
      if (0xf < uVar8) {
        plVar5 = (longlong *)*_Src;
      }
      if ((char)*plVar5 == '0') {
        plVar5 = _Src;
        if (0xf < uVar8) {
          plVar5 = (longlong *)*_Src;
        }
        if ('/' < *(char *)((longlong)plVar5 + 1)) {
          plVar5 = _Src;
          if (0xf < uVar8) {
            plVar5 = (longlong *)*_Src;
          }
          if (*(char *)((longlong)plVar5 + 1) < '8') goto LAB_143a653f0;
        }
      }
    }
  }
  local_78[0]._0_1_ = FUN_143a84a30(_Src,param_3,param_2);
  if ((char)local_78[0] != '\0') {
    FUN_143a840e0(param_1 + 0x28);
    return 1;
  }
  local_68 = 0;
  uStack_60 = 0xf;
  local_88 = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
            (local_78,*puVar3 + 0x16);
  if (uStack_60 - local_68 < 0x16) {
    local_98 = 0x16;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (local_78,0x16,0,"Integer out of range (");
  }
  else {
    pcVar9 = (char *)local_78;
    if (0xf < uStack_60) {
      pcVar9 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
    }
    pcVar9 = pcVar9 + local_68;
    local_68 = local_68 + 0x16;
    _guard_xfg_dispatch_icall_nop(pcVar9,"Integer out of range (",0x16);
    pcVar9[0x16] = '\0';
  }
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Src = (longlong *)*_Src;
  }
  sVar1 = *puVar3;
  if (uStack_60 - local_68 < sVar1) {
    local_98 = sVar1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (local_78,sVar1,0,_Src);
  }
  else {
    pcVar9 = (char *)local_78;
    if (0xf < uStack_60) {
      pcVar9 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
    }
    pcVar9 = pcVar9 + local_68;
    local_68 = local_68 + sVar1;
    _guard_xfg_dispatch_icall_nop(pcVar9,_Src,sVar1);
    pcVar9[sVar1] = '\0';
  }
  if (uStack_60 == local_68) {
    local_98 = 1;
    puVar3 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                       (local_78,1,0,&DAT_144025e14);
  }
  else {
    pcVar9 = (char *)local_78;
    if (0xf < uStack_60) {
      pcVar9 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
    }
    pcVar9 = pcVar9 + local_68;
    local_68 = local_68 + 1;
    _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_144025e14,1);
    pcVar9[1] = '\0';
    puVar3 = local_78;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = *puVar3;
  uStack_50 = puVar3[1];
  local_48 = puVar3[2];
  uStack_40 = puVar3[3];
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(char *)puVar3 = '\0';
  local_88 = 0xc;
  FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_58);
  if (0xf < uStack_40) {
    uVar8 = uStack_40 + 1;
    uVar6 = local_58;
    if (0xfff < uVar8) {
      uVar8 = uStack_40 + 0x28;
      uVar6 = *(ulonglong *)(local_58 - 8);
      if (0x1f < (local_58 - uVar6) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar6,uVar8);
  }
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = local_58 & 0xffffffffffffff00;
  if (uStack_60 < 0x10) {
    return 0;
  }
  uVar7 = uStack_60 + 1;
  lVar2 = CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
  lVar4 = lVar2;
  uVar6 = 0;
  uVar8 = 0xf;
  if (0xfff < uVar7) {
    uVar7 = uStack_60 + 0x28;
    lVar4 = *(longlong *)(lVar2 + -8);
    uVar6 = local_48;
    uVar8 = uStack_40;
    if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
LAB_143a65345:
  uStack_40 = uVar8;
  local_48 = uVar6;
  FMemory::operator_delete(lVar4,uVar7);
  return 0;
}



// FUNCTION 143a657b0 FUN_143a657b0 body=1031 status=ok
// SIG undefined FUN_143a657b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143a657b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 *_Src;
  undefined1 auStack_b8 [32];
  size_t local_98;
  undefined4 local_88;
  undefined8 local_80;
  ulonglong local_78 [2];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  _Src = (undefined8 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) == 3) {
    local_78[0]._0_1_ = FUN_143a84a30(_Src,param_3,param_2);
    if ((char)local_78[0] != '\0') {
      FUN_143a840e0(param_1 + 0x28);
      return 1;
    }
    local_68 = 0;
    uStack_60 = 0xf;
    local_88 = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (local_78,*(size_t *)(param_1 + 0x40) + 0x16);
    if (uStack_60 - local_68 < 0x16) {
      local_98 = 0x16;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (local_78,0x16,0,"Integer out of range (");
    }
    else {
      pcVar8 = (char *)local_78;
      if (0xf < uStack_60) {
        pcVar8 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      }
      pcVar8 = pcVar8 + local_68;
      local_68 = local_68 + 0x16;
      _guard_xfg_dispatch_icall_nop(pcVar8,"Integer out of range (",0x16);
      pcVar8[0x16] = '\0';
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      _Src = (undefined8 *)*_Src;
    }
    sVar1 = *(size_t *)(param_1 + 0x40);
    if (uStack_60 - local_68 < sVar1) {
      local_98 = sVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (local_78,sVar1,0,_Src);
    }
    else {
      pcVar8 = (char *)local_78;
      if (0xf < uStack_60) {
        pcVar8 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      }
      pcVar8 = pcVar8 + local_68;
      local_68 = sVar1 + local_68;
      _guard_xfg_dispatch_icall_nop(pcVar8,_Src,sVar1);
      pcVar8[sVar1] = '\0';
    }
    if (uStack_60 == local_68) {
      local_98 = 1;
      puVar3 = (ulonglong *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                         (local_78,1,0,&DAT_144025e14);
    }
    else {
      pcVar8 = (char *)local_78;
      if (0xf < uStack_60) {
        pcVar8 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      }
      pcVar8 = pcVar8 + local_68;
      local_68 = local_68 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar8,&DAT_144025e14,1);
      pcVar8[1] = '\0';
      puVar3 = local_78;
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = *puVar3;
    uStack_50 = puVar3[1];
    local_48 = puVar3[2];
    uStack_40 = puVar3[3];
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    *(char *)puVar3 = '\0';
    local_88 = 6;
    FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),&local_58)
    ;
    if (0xf < uStack_40) {
      uVar7 = uStack_40 + 1;
      uVar5 = local_58;
      if (0xfff < uVar7) {
        uVar7 = uStack_40 + 0x28;
        uVar5 = *(ulonglong *)(local_58 - 8);
        if (0x1f < (local_58 - uVar5) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar5,uVar7);
    }
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffffffffffff00;
    if (uStack_60 < 0x10) {
      return 0;
    }
    uVar6 = uStack_60 + 1;
    lVar2 = CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
    lVar4 = lVar2;
    uVar5 = 0;
    uVar7 = 0xf;
    if (0xfff < uVar6) {
      uVar6 = uStack_60 + 0x28;
      lVar4 = *(longlong *)(lVar2 + -8);
      uVar5 = local_48;
      uVar7 = uStack_40;
      if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    local_68 = 0;
    uStack_60 = 0xf;
    local_78[0]._0_1_ = '\0';
    local_88 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (local_78,*(size_t *)(param_1 + 0x40) + 0x17);
    if (uStack_60 - local_68 < 0x17) {
      local_98 = 0x17;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (local_78,0x17,0,"Expected integer, got: ");
    }
    else {
      pcVar8 = (char *)local_78;
      if (0xf < uStack_60) {
        pcVar8 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      }
      pcVar8 = pcVar8 + local_68;
      local_68 = local_68 + 0x17;
      _guard_xfg_dispatch_icall_nop(pcVar8,"Expected integer, got: ",0x17);
      pcVar8[0x17] = '\0';
    }
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      _Src = (undefined8 *)*_Src;
    }
    sVar1 = *(size_t *)(param_1 + 0x40);
    if (uStack_60 - local_68 < sVar1) {
      local_98 = sVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (local_78,sVar1,0,_Src);
    }
    else {
      pcVar8 = (char *)local_78;
      if (0xf < uStack_60) {
        pcVar8 = (char *)CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
      }
      pcVar8 = pcVar8 + local_68;
      local_68 = local_68 + sVar1;
      _guard_xfg_dispatch_icall_nop(pcVar8,_Src,sVar1);
      pcVar8[sVar1] = '\0';
    }
    FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),local_78);
    if (uStack_60 < 0x10) {
      return 0;
    }
    uVar6 = uStack_60 + 1;
    lVar2 = CONCAT71(local_78[0]._1_7_,(char)local_78[0]);
    lVar4 = lVar2;
    uVar5 = local_48;
    uVar7 = uStack_40;
    if (0xfff < uVar6) {
      uVar6 = uStack_60 + 0x28;
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  uStack_40 = uVar7;
  local_48 = uVar5;
  FMemory::operator_delete(lVar4,uVar6);
  return 0;
}



// FUNCTION 143a65bc0 FUN_143a65bc0 body=1638 status=ok
// SIG undefined FUN_143a65bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a65bc0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_90 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(*param_2 + 0xb8))(param_2,local_88);
  plVar1 = *(longlong **)(lVar4 + 8);
  iVar3 = FUN_143a009a0(param_3);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4)) {
  case 1:
    iVar3 = FUN_141515ef0(param_1);
    if (iVar3 != 1) {
      uVar5 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1b1
                           );
      iVar3 = FUN_141515ef0(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar5 = FUN_1439eef00(uVar5,"Protocol Buffer map usage error:\n");
      uVar5 = FUN_1439eef00(uVar5,"MapKey::GetInt32Value");
      uVar5 = FUN_1439eef00(uVar5," type does not match\n");
      uVar5 = FUN_1439eef00(uVar5,"  Expected : ");
      uVar5 = FUN_1439eef00(uVar5,"int32");
      uVar5 = FUN_1439eef00(uVar5,&DAT_143fc48d8);
      uVar5 = FUN_1439eef00(uVar5,"  Actual   : ");
      uVar5 = FUN_1439eef00(uVar5,puVar2);
      FUN_1439eec50(local_98,uVar5);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xe0))(plVar1,param_2,param_3,*(undefined4 *)param_1);
    break;
  case 2:
    iVar3 = FUN_141515ef0(param_1);
    if (iVar3 != 2) {
      uVar5 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1a7
                           );
      iVar3 = FUN_141515ef0(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar5 = FUN_1439eef00(uVar5,"Protocol Buffer map usage error:\n");
      uVar5 = FUN_1439eef00(uVar5,"MapKey::GetInt64Value");
      uVar5 = FUN_1439eef00(uVar5," type does not match\n");
      uVar5 = FUN_1439eef00(uVar5,"  Expected : ");
      uVar5 = FUN_1439eef00(uVar5,"int64");
      uVar5 = FUN_1439eef00(uVar5,&DAT_143fc48d8);
      uVar5 = FUN_1439eef00(uVar5,"  Actual   : ");
      uVar5 = FUN_1439eef00(uVar5,puVar2);
      FUN_1439eec50(local_98,uVar5);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,param_2,param_3,*param_1);
    break;
  case 3:
    iVar3 = FUN_141515ef0(param_1);
    if (iVar3 != 3) {
      uVar5 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1b6
                           );
      iVar3 = FUN_141515ef0(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar5 = FUN_1439eef00(uVar5,"Protocol Buffer map usage error:\n");
      uVar5 = FUN_1439eef00(uVar5,"MapKey::GetUInt32Value");
      uVar5 = FUN_1439eef00(uVar5," type does not match\n");
      uVar5 = FUN_1439eef00(uVar5,"  Expected : ");
      uVar5 = FUN_1439eef00(uVar5,"uint32");
      uVar5 = FUN_1439eef00(uVar5,&DAT_143fc48d8);
      uVar5 = FUN_1439eef00(uVar5,"  Actual   : ");
      uVar5 = FUN_1439eef00(uVar5,puVar2);
      FUN_1439eec50(local_98,uVar5);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_3,*(undefined4 *)param_1);
    break;
  case 4:
    iVar3 = FUN_141515ef0(param_1);
    if (iVar3 != 4) {
      uVar5 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1ac
                           );
      iVar3 = FUN_141515ef0(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar5 = FUN_1439eef00(uVar5,"Protocol Buffer map usage error:\n");
      uVar5 = FUN_1439eef00(uVar5,"MapKey::GetUInt64Value");
      uVar5 = FUN_1439eef00(uVar5," type does not match\n");
      uVar5 = FUN_1439eef00(uVar5,"  Expected : ");
      uVar5 = FUN_1439eef00(uVar5,"uint64");
      uVar5 = FUN_1439eef00(uVar5,&DAT_143fc48d8);
      uVar5 = FUN_1439eef00(uVar5,"  Actual   : ");
      uVar5 = FUN_1439eef00(uVar5,puVar2);
      FUN_1439eec50(local_98,uVar5);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xf8))(plVar1,param_2,param_3,*param_1);
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    uVar5 = FUN_1439eeb00(local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                          0x82d);
    uVar5 = FUN_1439eef00(uVar5,"Not supported.");
    FUN_1439eec50(local_98,uVar5);
    DsDevice::~DsDevice(local_78);
    break;
  case 7:
    iVar3 = FUN_141515ef0(param_1);
    if (iVar3 != 7) {
      uVar5 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1bb
                           );
      iVar3 = FUN_141515ef0(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar5 = FUN_1439eef00(uVar5,"Protocol Buffer map usage error:\n");
      uVar5 = FUN_1439eef00(uVar5,"MapKey::GetBoolValue");
      uVar5 = FUN_1439eef00(uVar5," type does not match\n");
      uVar5 = FUN_1439eef00(uVar5,"  Expected : ");
      uVar5 = FUN_1439eef00(uVar5,&DAT_145cbec70);
      uVar5 = FUN_1439eef00(uVar5,&DAT_143fc48d8);
      uVar5 = FUN_1439eef00(uVar5,"  Actual   : ");
      uVar5 = FUN_1439eef00(uVar5,puVar2);
      FUN_1439eec50(local_98,uVar5);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0x110))(plVar1,param_2,param_3,*(undefined1 *)param_1);
    break;
  case 9:
    iVar3 = FUN_141515ef0(param_1);
    if (iVar3 != 9) {
      uVar5 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1c0
                           );
      iVar3 = FUN_141515ef0(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar5 = FUN_1439eef00(uVar5,"Protocol Buffer map usage error:\n");
      uVar5 = FUN_1439eef00(uVar5,"MapKey::GetStringValue");
      uVar5 = FUN_1439eef00(uVar5," type does not match\n");
      uVar5 = FUN_1439eef00(uVar5,"  Expected : ");
      uVar5 = FUN_1439eef00(uVar5,"string");
      uVar5 = FUN_1439eef00(uVar5,&DAT_143fc48d8);
      uVar5 = FUN_1439eef00(uVar5,"  Actual   : ");
      uVar5 = FUN_1439eef00(uVar5,puVar2);
      FUN_1439eec50(local_98,uVar5);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0x118))(plVar1,param_2,param_3,*param_1);
  }
  return;
}



// FUNCTION 143a66250 FUN_143a66250 body=2365 status=ok
// SIG undefined FUN_143a66250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a66250(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_90 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(*param_2 + 0xb8))(param_2,local_88);
  plVar1 = *(longlong **)(lVar4 + 8);
  iVar3 = FUN_143a009a0(param_3);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4)) {
  case 1:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 1) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x27b
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetInt32Value");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,"int32");
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xe0))(plVar1,param_2,param_3,*(undefined4 *)*param_1);
    break;
  case 2:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 2) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x271
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetInt64Value");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,"int64");
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,param_2,param_3,*(undefined8 *)*param_1);
    break;
  case 3:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 3) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x280
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetUInt32Value");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,"uint32");
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_3,*(undefined4 *)*param_1);
    break;
  case 4:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 4) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x276
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetUInt64Value");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,"uint64");
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0xf8))(plVar1,param_2,param_3,*(undefined8 *)*param_1);
    break;
  case 5:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 5) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x299
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetDoubleValue");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,"double");
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0x108))(plVar1,param_2,param_3,*(undefined8 *)*param_1);
    break;
  case 6:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 6) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x294
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetFloatValue");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,"float");
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0x100))(plVar1,param_2,param_3,*(undefined4 *)*param_1);
    break;
  case 7:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 7) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x285
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetBoolValue");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,&DAT_145cbec70);
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0x110))(plVar1,param_2,param_3,*(undefined1 *)*param_1);
    break;
  case 8:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 8) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x28a
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetEnumValue");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,&DAT_145cbeca0);
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0x128))(plVar1,param_2,param_3,*(undefined4 *)*param_1);
    break;
  case 9:
    iVar3 = FUN_143a0d230(param_1);
    if (iVar3 != 9) {
      uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x28f
                           );
      iVar3 = FUN_143a0d230(param_1);
      puVar2 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar6 = FUN_1439eef00(uVar6,"Protocol Buffer map usage error:\n");
      uVar6 = FUN_1439eef00(uVar6,"MapValueRef::GetStringValue");
      uVar6 = FUN_1439eef00(uVar6," type does not match\n");
      uVar6 = FUN_1439eef00(uVar6,"  Expected : ");
      uVar6 = FUN_1439eef00(uVar6,"string");
      uVar6 = FUN_1439eef00(uVar6,&DAT_143fc48d8);
      uVar6 = FUN_1439eef00(uVar6,"  Actual   : ");
      uVar6 = FUN_1439eef00(uVar6,puVar2);
      FUN_1439eec50(local_98,uVar6);
      DsDevice::~DsDevice(local_78);
    }
    (**(code **)(*plVar1 + 0x118))(plVar1,param_2,param_3,*param_1);
    break;
  case 10:
    plVar5 = (longlong *)FUN_143a10860(param_1);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *plVar5;
    uVar6 = FUN_143a10860(param_1);
    (**(code **)(lVar4 + 0x88))(plVar5,uVar6);
    (**(code **)(*plVar1 + 0x138))(plVar1,param_2,plVar5,param_3);
  }
  return;
}



// FUNCTION 143a66bc0 FUN_143a66bc0 body=428 status=ok
// SIG undefined FUN_143a66bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143a66bc0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong local_res10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_78 [8];
  ulonglong *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar8 = (undefined8 *)0x0;
  local_70 = (ulonglong *)((ulonglong)local_70 & 0xffffffff00000000);
  local_res10 = param_2;
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    local_68 = puVar2;
    uVar3 = std::
            _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
            ::_Buyheadnode(puVar2);
    *puVar2 = uVar3;
    puVar1 = puVar2 + 2;
    *puVar1 = 0;
    puVar2[3] = 0;
    local_70 = puVar1;
    uVar4 = std::
            _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
            ::_Buyheadnode(puVar1);
    *puVar1 = uVar4;
    puVar8 = puVar2;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  puVar5 = (ulonglong *)puVar1[1];
  puVar7 = puVar1;
  local_68 = puVar8;
  if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
    do {
      if (puVar5[4] < local_res10) {
        puVar6 = (ulonglong *)puVar5[2];
      }
      else {
        puVar6 = (ulonglong *)*puVar5;
        puVar7 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    if ((puVar7 != puVar1) && (puVar7[4] <= local_res10)) goto LAB_143a66cc9;
  }
  local_70 = &local_res10;
  local_88 = FUN_143a5cfe0(param_1 + 0x10,&DAT_145cc5761,&local_70,local_78);
  FUN_143a5d500(param_1 + 0x10,&local_70,puVar7,local_88 + 0x20);
  puVar7 = local_70;
LAB_143a66cc9:
  if (puVar7 + 5 == (ulonglong *)0x0) {
    uVar3 = FUN_1439eeb00(local_58,(int)puVar7 + 0x2b,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",0x97);
    local_70 = (ulonglong *)CONCAT44(local_70._4_4_,1);
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: trees: ");
    FUN_1439eec50(local_78,uVar3);
    DsDevice::~DsDevice(local_58);
  }
  puVar2 = (undefined8 *)puVar7[6];
  if ((undefined8 *)puVar7[7] == puVar2) {
    FUN_143a16470(puVar7 + 5,puVar2,&local_68);
  }
  else {
    *puVar2 = puVar8;
    puVar7[6] = puVar7[6] + 8;
    local_68 = puVar8;
  }
  return local_68;
}



// FUNCTION 143a66d70 FUN_143a66d70 body=208 status=ok
// SIG undefined FUN_143a66d70(void)

undefined8 FUN_143a66d70(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *_Buf1;
  size_t sVar7;
  undefined1 local_18 [16];
  size_t sVar4;
  
  sVar7 = 0xffffffffffffffff;
  sVar4 = 0xffffffffffffffff;
  do {
    sVar3 = sVar4 + 1;
    lVar1 = sVar4 + 1;
    sVar4 = sVar3;
  } while ("type.googleapis.com/"[lVar1] != '\0');
  _Buf1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf1 = (undefined8 *)*param_2;
  }
  sVar4 = param_2[2];
  if ((sVar4 != sVar3) ||
     (iVar2 = _guard_xfg_dispatch_icall_nop(_Buf1,"type.googleapis.com/",sVar4), iVar2 != 0)) {
    do {
      sVar3 = sVar7 + 1;
      lVar1 = sVar7 + 1;
      sVar7 = sVar3;
    } while ("type.googleprod.com/"[lVar1] != '\0');
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if ((sVar4 != sVar3) ||
       (iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"type.googleprod.com/",sVar4), iVar2 != 0)) {
      return 0;
    }
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_18);
  uVar6 = FUN_143a3f490(*(undefined8 *)(*(longlong *)(*plVar5 + 0x10) + 0x10),param_3);
  return uVar6;
}



// FUNCTION 143a66e40 FUN_143a66e40 body=17 status=ok
// SIG undefined FUN_143a66e40(void)

void FUN_143a66e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a66d70(param_2,param_3,param_4);
  return;
}



// FUNCTION 143a66e60 FUN_143a66e60 body=48 status=ok
// SIG undefined FUN_143a66e60(void)

void FUN_143a66e60(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_18 [16];
  
  lVar1 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x260))(*(longlong **)(lVar1 + 8),param_3);
  return;
}



// FUNCTION 143a66e90 FUN_143a66e90 body=4 status=ok
// SIG undefined FUN_143a66e90(void)

void FUN_143a66e90(longlong param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 143a66ea0 FUN_143a66ea0 body=71 status=ok
// SIG undefined FUN_143a66ea0(void)

ulonglong FUN_143a66ea0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 *_Buf2;
  void *_Buf1;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = (void *)(param_1 + 0x30);
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Buf1 = *(void **)(param_1 + 0x30);
  }
  if (*(size_t *)(param_1 + 0x40) == param_2[2]) {
    iVar1 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,*(size_t *)(param_1 + 0x40));
    _Buf1 = (void *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)_Buf1 >> 8),1);
    }
  }
  return (ulonglong)_Buf1 & 0xffffffffffffff00;
}



// FUNCTION 143a66ef0 FUN_143a66ef0 body=95 status=ok
// SIG undefined FUN_143a66ef0(void)

void FUN_143a66ef0(char *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  
  pcVar2 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar2 = *(char **)param_1;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(char **)param_1;
  }
  lVar3 = (longlong)(pcVar2 + *plVar1) - (longlong)param_1;
  if (pcVar2 + *plVar1 < param_1) {
    lVar3 = 0;
  }
  pcVar2 = param_1;
  if (lVar3 != 0) {
    do {
      if ((byte)(*pcVar2 + 0xbfU) < 0x1a) {
        *pcVar2 = *pcVar2 + ' ';
      }
      pcVar2 = pcVar2 + 1;
    } while ((longlong)pcVar2 - (longlong)param_1 != lVar3);
  }
  return;
}



// FUNCTION 143a66f50 FUN_143a66f50 body=974 status=ok
// SIG undefined FUN_143a66f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143a66f50(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *_Src;
  longlong *plVar10;
  undefined1 *puVar11;
  char *_Size;
  size_t _Size_00;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  longlong *plStack_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0 [2];
  longlong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_30;
  
  local_a8 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  _Size = (char *)0x0;
  local_c8 = 0;
  iVar1 = *(int *)(param_4 + 0x28);
  while (iVar1 != 1) {
    cVar5 = FUN_143a61500(param_4,param_3);
    if (cVar5 == '\0') {
      return 0;
    }
    iVar1 = *(int *)(param_4 + 0x28);
  }
  if (*(char *)(param_4 + 0xfa) == '\0') {
    if ((*(char *)(param_1 + 0x18) != '\0') ||
       (cVar5 = (**(code **)(*param_3 + 0x38))(param_3), cVar5 != '\0')) {
      return 1;
    }
    local_c0 = (longlong *)0x0;
    plStack_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_1439fe310(param_3,&local_c0);
    plVar4 = plStack_b8;
    plVar3 = local_c0;
    local_90 = 0;
    uStack_88 = 0xf;
    local_a0[0]._0_1_ = '\0';
    local_c8 = 1;
    for (plVar10 = local_c0; plVar10 != plVar4; plVar10 = plVar10 + 4) {
      if (plVar10 != plVar3) {
        if (uStack_88 - local_90 < 2) {
          local_d8 = (char *)0x2;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (local_a0,2,0,&DAT_145cbbc74);
        }
        else {
          puVar11 = (undefined1 *)local_a0;
          if (0xf < uStack_88) {
            puVar11 = (undefined1 *)CONCAT71(local_a0[0]._1_7_,(char)local_a0[0]);
          }
          puVar11 = puVar11 + local_90;
          local_90 = local_90 + 2;
          _guard_xfg_dispatch_icall_nop(puVar11,&DAT_145cbbc74,2);
          puVar11[2] = 0;
        }
      }
      local_60 = plVar10;
      if (0xf < (ulonglong)plVar10[3]) {
        local_60 = (longlong *)*plVar10;
      }
      local_58 = plVar10[2];
      FBlake3::Update(local_a0,&local_60);
    }
    if (uStack_88 - local_90 < 0x21) {
      local_d0 = 0x21;
      local_d8 = "Message missing required fields: ";
      puVar6 = (ulonglong *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               _Reallocate_grow_by<<lambda_f3a66ab6a0570788f31503db83886f49>,unsigned___int64,char_const_*,unsigned___int64>
                         (local_a0,0x21,0,0);
    }
    else {
      _Src = (char *)local_a0;
      if (0xf < uStack_88) {
        _Src = (char *)CONCAT71(local_a0[0]._1_7_,(char)local_a0[0]);
      }
      if ((" " < _Src) || (_Src + local_90 < "Message missing required fields: ")) {
        _Size = (char *)0x21;
      }
      else if ("Message missing required fields: " < _Src) {
        _Size = _Src + 0xfffffffeba339838;
      }
      _Size_00 = local_90 + 1;
      local_90 = local_90 + 0x21;
      _guard_xfg_dispatch_icall_nop(_Src + 0x21,_Src,_Size_00);
      _guard_xfg_dispatch_icall_nop(_Src,"Message missing required fields: ",(size_t)_Size);
      _guard_xfg_dispatch_icall_nop
                (_Src + (longlong)_Size,_Size + 0x145cc67e9,0x21 - (longlong)_Size);
      puVar6 = local_a0;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_80 = *puVar6;
    uStack_78 = puVar6[1];
    local_70 = puVar6[2];
    uStack_68 = puVar6[3];
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    *(undefined1 *)puVar6 = 0;
    local_c8 = 3;
    FUN_143a69d60(param_4,0xffffffff,0,&local_80);
    if (0xf < uStack_68) {
      uVar8 = uStack_68 + 1;
      uVar9 = local_80;
      if (0xfff < uVar8) {
        uVar8 = uStack_68 + 0x28;
        uVar9 = *(ulonglong *)(local_80 - 8);
        if (0x1f < (local_80 - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar9,uVar8);
    }
    local_70 = 0;
    uStack_68 = 0xf;
    local_80 = local_80 & 0xffffffffffffff00;
    if (0xf < uStack_88) {
      uVar9 = uStack_88 + 1;
      if ((0xfff < uVar9) &&
         (uVar9 = uStack_88 + 0x28,
         0x1f < (CONCAT71(local_a0[0]._1_7_,(char)local_a0[0]) -
                *(longlong *)(CONCAT71(local_a0[0]._1_7_,(char)local_a0[0]) + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FMemory::operator_delete(0,uVar9);
    }
    plVar3 = plStack_b8;
    plVar10 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      for (; plVar10 != plVar3; plVar10 = plVar10 + 4) {
        uVar9 = plVar10[3];
        if (0xf < uVar9) {
          uVar8 = uVar9 + 1;
          lVar2 = *plVar10;
          lVar7 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar9 + 0x28;
            lVar7 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar7,uVar8);
        }
        plVar10[2] = 0;
        plVar10[3] = 0xf;
        *(undefined1 *)plVar10 = 0;
      }
      uVar9 = local_b0 - (longlong)local_c0 & 0xffffffffffffffe0;
      plVar10 = local_c0;
      if (0xfff < uVar9) {
        uVar9 = uVar9 + 0x27;
        plVar10 = (longlong *)local_c0[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_c0 + (-8 - (longlong)plVar10))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(plVar10,uVar9);
    }
  }
  return 0;
}



// FUNCTION 143a67330 FUN_143a67330 body=149 status=ok
// SIG undefined FUN_143a67330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a67330(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x24) <= iVar1)) {
    *(int *)(param_1 + 0x20) = iVar1 + -1;
    return;
  }
  uVar2 = FUN_1439eeb00(local_48,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",0x4c0)
  ;
  uVar2 = FUN_1439eef00(uVar2," Outdent() without matching Indent().");
  FUN_1439eec50(local_58,uVar2);
  DsDevice::~DsDevice(local_48);
  return;
}



// FUNCTION 143a673d0 FUN_143a673d0 body=296 status=ok
// SIG undefined FUN_143a673d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143a673d0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  uint local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined **local_110 [2];
  undefined1 local_100 [216];
  ulonglong local_28;
  
  local_148 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  (**(code **)(*param_3 + 0x30))(param_3);
  cVar1 = *(char *)((longlong)param_1 + 0x1f);
  puVar3 = (undefined8 *)(**(code **)(*param_3 + 0xb8))(param_3,local_140);
  local_150 = *(undefined1 *)(param_1 + 3);
  local_158 = *(undefined1 *)((longlong)param_1 + 0x1e);
  local_160 = *(undefined1 *)((longlong)param_1 + 0x1d);
  local_168 = *(undefined1 *)((longlong)param_1 + 0x1c);
  local_170 = *(undefined1 *)((longlong)param_1 + 0x1b);
  local_178 = *(undefined1 *)((longlong)param_1 + 0x1a);
  local_180 = *(undefined1 *)((longlong)param_1 + 0x19);
  local_188 = (uint)(cVar1 == '\0');
  local_190 = param_1[2];
  local_198 = param_1[1];
  FUN_143a5f6b0(local_128,*puVar3,param_2,*param_1);
  uVar2 = FUN_143a66f50(param_1,param_2,param_3,local_128);
  FUN_143a82d70(local_100);
  local_110[0] = google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::vftable;
  FExec::~FExec(local_110);
  return uVar2;
}



// FUNCTION 143a67500 FUN_143a67500 body=177 status=ok
// SIG undefined FUN_143a67500(void)

ulonglong FUN_143a67500(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                       undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined1 local_28 [32];
  
  local_38 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_38 = (undefined8 *)*param_2;
  }
  uStack_30 = param_2[2];
  uVar2 = FUN_143a5ff70(&local_38,*param_1,param_3,param_4,0xfffffffffffffffe);
  if ((char)uVar2 != '\0') {
    puVar1 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_143a500a0(local_28,param_2,*puVar1 & 0xffffffff,0xffffffff);
    uVar2 = FUN_143a673d0(param_1,local_28,param_3);
    return uVar2;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143a675c0 FUN_143a675c0 body=621 status=ok
// SIG undefined FUN_143a675c0(void)

void FUN_143a675c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  size_t sVar9;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  longlong local_40;
  ulonglong *puStack_38;
  ulonglong *local_30;
  size_t sVar10;
  
  puVar5 = (ulonglong *)(**(code **)(*param_2 + 0xb8))(param_2,local_60);
  uVar13 = *puVar5;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  puVar6 = puVar1;
  puVar12 = (undefined8 *)puVar1[1];
  if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
    do {
      puVar7 = puVar12;
      if ((ulonglong)puVar7[4] < uVar13) {
        puVar12 = (undefined8 *)puVar7[2];
        puVar7 = puVar6;
      }
      else {
        puVar12 = (undefined8 *)*puVar7;
      }
      puVar6 = puVar7;
    } while (*(char *)((longlong)puVar12 + 0x19) == '\0');
    if ((puVar7 != puVar1) && ((ulonglong)puVar7[4] <= uVar13)) goto LAB_143a67637;
  }
  puVar7 = puVar1;
LAB_143a67637:
  if (puVar7 == puVar1) {
    lVar8 = (**(code **)(*param_2 + 0xb8))(param_2,local_50);
    plVar2 = *(longlong **)(lVar8 + 8);
    puVar1 = *(undefined8 **)(uVar13 + 8);
    sVar10 = 0xffffffffffffffff;
    do {
      sVar9 = sVar10 + 1;
      lVar8 = sVar10 + 1;
      sVar10 = sVar9;
    } while ("google.protobuf.Any"[lVar8] != '\0');
    puVar12 = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar12 = (undefined8 *)*puVar1;
    }
    if ((((puVar1[2] != sVar9) ||
         (iVar4 = _guard_xfg_dispatch_icall_nop(puVar12,"google.protobuf.Any",puVar1[2]), iVar4 != 0
         )) || (*(char *)(param_1 + 9) == '\0')) ||
       (cVar3 = FUN_143a67a20(param_1,param_2,param_3), cVar3 == '\0')) {
      local_40 = 0;
      puStack_38 = (ulonglong *)0x0;
      uVar15 = 0;
      local_30 = (ulonglong *)0x0;
      if (*(char *)(*(longlong *)(uVar13 + 0x20) + 0x4b) == '\0') {
        (**(code **)(*plVar2 + 0x78))(plVar2,param_2,&local_40);
      }
      else {
        local_res8 = *(ulonglong *)(uVar13 + 0x28);
        FUN_143a16470(&local_40,0,&local_res8);
        local_res8 = *(longlong *)(uVar13 + 0x28) + 0x98;
        if (local_30 == puStack_38) {
          FUN_143a16470(&local_40,puStack_38,&local_res8);
        }
        else {
          *puStack_38 = local_res8;
          puStack_38 = puStack_38 + 1;
        }
      }
      if (*(char *)(param_1 + 8) != '\0') {
        FUN_143a5ec80(local_40,puStack_38,(longlong)puStack_38 - local_40 >> 3,local_res8 & 0xff);
      }
      uVar13 = uVar15;
      if ((longlong)puStack_38 - local_40 >> 3 != 0) {
        do {
          FUN_143a67fc0(param_1,param_2,plVar2,*(undefined8 *)(local_40 + uVar13),param_3);
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          uVar13 = uVar13 + 8;
        } while ((ulonglong)(longlong)(int)uVar14 <
                 (ulonglong)((longlong)puStack_38 - local_40 >> 3));
      }
      if (*(char *)(param_1 + 7) == '\0') {
        uVar11 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
        FUN_143a695c0(param_1,uVar11,param_3);
      }
      if (local_40 != 0) {
        uVar13 = (longlong)local_30 - local_40 & 0xfffffffffffffff8;
        lVar8 = local_40;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          lVar8 = *(longlong *)(local_40 + -8);
          if (0x1f < (local_40 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar8,uVar13);
      }
    }
  }
  else {
    (**(code **)(*(longlong *)puVar7[5] + 8))
              ((longlong *)puVar7[5],param_2,*(undefined1 *)(param_1 + 4),param_3);
  }
  return;
}



// FUNCTION 143a67830 FUN_143a67830 body=489 status=ok
// SIG undefined FUN_143a67830(void)

void FUN_143a67830(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  size_t _Size;
  void *_Src;
  char cVar7;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  
  local_48 = param_2;
  if (*(int *)(param_1 + 0x20) < 1) {
    FUN_143a6b6a0();
    if ((param_3 != 0) && (*(char *)(param_2 + -1 + param_3) == '\n')) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
    return;
  }
  uVar4 = 0;
  uVar6 = uVar4;
  if (param_3 != 0) {
    do {
      uVar1 = uVar6 + 1;
      if (*(char *)(param_2 + uVar6) == '\n') {
        _Src = (void *)(param_2 + uVar4);
        _Size = (uVar6 - uVar4) + 1;
        if ((*(char *)(param_1 + 0x1d) == '\0') && (_Size != 0)) {
          if (*(char *)(param_1 + 0x1c) != '\0') {
            *(undefined1 *)(param_1 + 0x1c) = 0;
            cVar7 = '\0';
            if (*(int *)(param_1 + 0x20) != 0) {
              iVar3 = *(int *)(param_1 + 0x18);
              iVar5 = *(int *)(param_1 + 0x20) * 2;
              if (iVar3 < iVar5) {
                do {
                  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),0x20,(longlong)iVar3);
                  iVar5 = iVar5 - *(int *)(param_1 + 0x18);
                  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                                    (*(longlong **)(param_1 + 8),&local_50,param_1 + 0x18);
                  cVar7 = cVar2 == '\0';
                  *(char *)(param_1 + 0x1d) = cVar7;
                  if (cVar2 == '\0') goto LAB_143a67932;
                  *(undefined8 *)(param_1 + 0x10) = local_50;
                  iVar3 = *(int *)(param_1 + 0x18);
                } while (iVar3 < iVar5);
              }
              _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),0x20,(longlong)iVar5);
              *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)iVar5;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar5;
              cVar7 = *(char *)(param_1 + 0x1d);
            }
LAB_143a67932:
            if (cVar7 != '\0') goto LAB_143a679aa;
          }
          uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
          if (uVar4 < _Size) {
            do {
              if (0 < (int)uVar4) {
                _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),_Src,(longlong)(int)uVar4);
                _Src = (void *)((longlong)_Src + (longlong)*(int *)(param_1 + 0x18));
                _Size = _Size - (longlong)*(int *)(param_1 + 0x18);
              }
              local_58 = 0;
              cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                                (*(longlong **)(param_1 + 8),&local_58,param_1 + 0x18);
              *(bool *)(param_1 + 0x1d) = cVar7 == '\0';
              if (cVar7 == '\0') goto LAB_143a679aa;
              *(undefined8 *)(param_1 + 0x10) = local_58;
              uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
            } while (uVar4 < _Size);
          }
          _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),_Src,_Size);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + _Size;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (int)_Size;
        }
LAB_143a679aa:
        *(undefined1 *)(param_1 + 0x1c) = 1;
        uVar4 = uVar1;
        param_2 = local_48;
      }
      uVar6 = uVar1;
    } while (uVar1 < param_3);
  }
  FUN_143a6b6a0(param_1,param_2 + uVar4,param_3 - uVar4);
  return;
}



// FUNCTION 143a67a20 FUN_143a67a20 body=1160 status=ok
// SIG undefined FUN_143a67a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a67a20(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *******pppppppuVar13;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [8];
  ulonglong local_190;
  undefined8 local_188;
  undefined8 local_180 [2];
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 ******local_160 [2];
  undefined8 local_150;
  ulonglong local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  ulonglong uStack_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  ulonglong uStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  ulonglong uStack_e8;
  undefined1 local_e0 [56];
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_170 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  uVar5 = FUN_143a8a120(param_2,&local_188,&local_190);
  if ((char)uVar5 == '\0') {
    return uVar5;
  }
  lVar6 = (**(code **)(*param_2 + 0xb8))(param_2,local_180);
  plVar1 = *(longlong **)(lVar6 + 8);
  (**(code **)(*plVar1 + 0xb8))(plVar1,local_160,param_2,local_188);
  local_110 = 0;
  uStack_108 = 0xf;
  local_120 = 0;
  local_130 = 0;
  uStack_128 = 0xf;
  local_140 = 0;
  cVar4 = FUN_143a8a1e0(local_160,&local_120,&local_140);
  if (cVar4 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x40);
    if (plVar7 == (longlong *)0x0) {
      lVar6 = FUN_143a66d70(param_2,&local_120,&local_140);
    }
    else {
      lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2,&local_120,&local_140);
    }
    if (lVar6 != 0) {
      FUN_143a883b0(local_a8);
      plVar7 = (longlong *)FUN_143a88d50(local_a8,lVar6);
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7);
      local_168 = puVar8;
      (**(code **)(*plVar1 + 0xb8))(plVar1,&local_100,param_2,local_190);
      cVar4 = FUN_1439f0e20(puVar8,&local_100);
      if (cVar4 == '\0') {
        uVar5 = FUN_1439eeb00(local_e0,1,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                              0x781);
        uVar5 = FUN_1439eecf0(uVar5,local_160);
        uVar5 = FUN_1439eef00(uVar5,": failed to parse contents");
        FUN_1439eec50(local_198,uVar5);
        DsDevice::~DsDevice(local_e0);
        uVar5 = 0;
      }
      else {
        (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cbda34,1);
        pppppppuVar13 = local_160;
        if (0xf < local_148) {
          pppppppuVar13 = (undefined8 *******)local_160[0];
        }
        (**(code **)(*param_3 + 0x18))(param_3,pppppppuVar13,local_150);
        (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cbda38,1);
        local_180[0] = *(undefined8 *)(param_1 + 0x18);
        puVar2 = *(undefined8 **)(param_1 + 0x20);
        puVar9 = (undefined8 *)puVar2[1];
        puVar11 = puVar2;
        if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
          do {
            if ((ulonglong)puVar9[4] < local_190) {
              puVar10 = (undefined8 *)puVar9[2];
            }
            else {
              puVar10 = (undefined8 *)*puVar9;
              puVar11 = puVar9;
            }
            puVar9 = puVar10;
          } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
          if ((puVar11 == puVar2) || (local_190 < (ulonglong)puVar11[4])) goto LAB_143a67cf3;
        }
        else {
LAB_143a67cf3:
          puVar11 = puVar2;
        }
        puVar9 = local_180;
        if (puVar11 != puVar2) {
          puVar9 = puVar11 + 5;
        }
        plVar1 = (longlong *)*puVar9;
        local_1a8 = *(undefined1 *)(param_1 + 4);
        local_1a0 = param_3;
        (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0xffffffff);
        (**(code **)(*param_3 + 8))(param_3);
        FUN_143a675c0(param_1,puVar8,param_3);
        (**(code **)(*param_3 + 0x10))(param_3);
        local_1a8 = *(undefined1 *)(param_1 + 4);
        local_1a0 = param_3;
        (**(code **)(*plVar1 + 0x70))(plVar1,param_2,0xffffffff);
        uVar5 = 1;
      }
      if (0xf < uStack_e8) {
        uVar12 = uStack_e8 + 1;
        lVar3 = CONCAT71(uStack_ff,local_100);
        lVar6 = lVar3;
        if (0xfff < uVar12) {
          uVar12 = uStack_e8 + 0x28;
          lVar6 = *(longlong *)(lVar3 + -8);
          if (0x1f < (lVar3 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar6,uVar12);
      }
      local_f0 = 0;
      uStack_e8 = 0xf;
      local_100 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      FUN_143a88800(local_a8);
      goto LAB_143a67b76;
    }
    uVar5 = FUN_1439eeb00(local_e0,1,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                          0x779);
    uVar5 = FUN_1439eef00(uVar5,"Proto type ");
    uVar5 = FUN_1439eecf0(uVar5,local_160);
    uVar5 = FUN_1439eef00(uVar5," not found");
    FUN_1439eec50(local_198,uVar5);
    DsDevice::~DsDevice(local_e0);
  }
  uVar5 = 0;
LAB_143a67b76:
  if (0xf < uStack_128) {
    uVar12 = uStack_128 + 1;
    lVar3 = CONCAT71(uStack_13f,local_140);
    lVar6 = lVar3;
    if (0xfff < uVar12) {
      uVar12 = uStack_128 + 0x28;
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar6,uVar12);
  }
  local_130 = 0;
  uStack_128 = 0xf;
  local_140 = 0;
  if (0xf < uStack_108) {
    uVar12 = uStack_108 + 1;
    if ((0xfff < uVar12) &&
       (uVar12 = uStack_108 + 0x28,
       0x1f < (CONCAT71(uStack_11f,local_120) - *(longlong *)(CONCAT71(uStack_11f,local_120) + -8))
              - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FMemory::operator_delete(0,uVar12);
  }
  local_110 = 0;
  uStack_108 = 0xf;
  local_120 = 0;
  if (0xf < local_148) {
    uVar12 = local_148 + 1;
    if ((0xfff < uVar12) &&
       (uVar12 = local_148 + 0x28,
       0x1f < (ulonglong)((longlong)local_160[0] + (-8 - (longlong)local_160[0][-1])))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FMemory::operator_delete(0,uVar12);
  }
  return uVar5;
}



// FUNCTION 143a67eb0 FUN_143a67eb0 body=49 status=ok
// SIG undefined FUN_143a67eb0(void)

void FUN_143a67eb0(undefined8 param_1,char param_2,longlong *param_3)

{
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a67ece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc0dc0,4,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143a67ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x18))(param_3,"false",5,param_3);
  return;
}



// FUNCTION 143a67ef0 FUN_143a67ef0 body=7 status=ok
// SIG undefined FUN_143a67ef0(void)

void FUN_143a67ef0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a67ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 143a67f00 FUN_143a67f00 body=152 status=ok
// SIG undefined FUN_143a67f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a67f00(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_143a59b10(local_30);
  puVar1 = puVar2 + 2;
  if (0xf < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  (**(code **)(*param_3 + 0x18))(param_3,puVar2,*puVar1);
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    lVar3 = local_30[0];
    if (0xfff < uVar4) {
      uVar4 = local_18 + 0x28;
      lVar3 = *(longlong *)(local_30[0] + -8);
      if (0x1f < (local_30[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  return;
}



// FUNCTION 143a67fa0 FUN_143a67fa0 body=30 status=ok
// SIG undefined FUN_143a67fa0(void)

void FUN_143a67fa0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143a67fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x18))(param_4,param_3,*puVar1);
  return;
}



// FUNCTION 143a67fc0 FUN_143a67fc0 body=1194 status=ok
// SIG undefined FUN_143a67fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a67fc0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  longlong **local_138;
  longlong *local_130;
  longlong *local_128;
  char local_118;
  char local_117;
  int local_114;
  int local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_d8 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if ((((*(char *)(param_1 + 6) == '\0') || (*(int *)((longlong)param_4 + 0x3c) != 3)) ||
      (iVar4 = FUN_143a009a0(param_4), *(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 9)) ||
     (iVar4 = FUN_143a009a0(param_4), *(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 10)) {
    iVar4 = 0;
    local_114 = 0;
    if (*(int *)((longlong)param_4 + 0x3c) == 3) {
      local_114 = (**(code **)(*param_3 + 0x28))();
      iVar13 = local_114;
    }
    else {
      cVar3 = (**(code **)(*param_3 + 0x20))(param_3,param_2,param_4);
      if ((cVar3 != '\0') ||
         (iVar13 = iVar4, *(char *)(*(longlong *)(param_4[10] + 0x20) + 0x4b) != '\0')) {
        iVar13 = 1;
        local_114 = 1;
      }
    }
    FUN_143a883b0(local_c8);
    local_f8 = (longlong *)0x0;
    lStack_f0 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_117 = '\0';
    iVar5 = FUN_143a009a0(param_4);
    if ((iVar5 == 0xb) && (cVar3 = FUN_143a4f8d0(param_4), cVar3 != '\0')) {
      local_118 = '\x01';
      local_138 = &local_f8;
      local_117 = FUN_143a6b340(param_2,param_3,param_4,local_c8);
      local_100 = local_e8;
    }
    else {
      local_118 = '\0';
    }
    local_110 = 0;
    if (0 < iVar13) {
      local_108 = local_f8;
      do {
        iVar5 = -1;
        if (*(int *)((longlong)param_4 + 0x3c) == 3) {
          iVar5 = iVar4;
        }
        local_128 = param_5;
        local_138 = (longlong **)param_3;
        local_130 = param_4;
        local_110 = iVar5;
        FUN_143a68590(param_1,param_2,iVar5,iVar13);
        iVar6 = FUN_143a009a0(param_4);
        if (*(int *)(&DAT_145cbed10 + (longlong)iVar6 * 4) == 10) {
          local_e0 = *(undefined8 *)(param_1 + 0x18);
          puVar1 = *(undefined8 **)(param_1 + 0x20);
          puVar7 = (undefined8 *)puVar1[1];
          puVar10 = puVar1;
          if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
            do {
              if ((longlong *)puVar7[4] < param_4) {
                puVar8 = (undefined8 *)puVar7[2];
              }
              else {
                puVar8 = (undefined8 *)*puVar7;
                puVar10 = puVar7;
              }
              puVar7 = puVar8;
            } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
            if ((puVar10 == puVar1) || (param_4 < (longlong *)puVar10[4])) goto LAB_143a68279;
          }
          else {
LAB_143a68279:
            puVar10 = puVar1;
          }
          if (puVar10 == puVar1) {
            puVar10 = &local_e0;
          }
          else {
            puVar10 = puVar10 + 5;
          }
          plVar2 = (longlong *)*puVar10;
          if (*(int *)((longlong)param_4 + 0x3c) == 3) {
            if (local_118 == '\0') {
              lVar9 = (**(code **)(*param_3 + 0x198))(param_3,param_2,param_4,iVar4);
            }
            else {
              lVar9 = *local_108;
            }
          }
          else {
            lVar9 = (**(code **)(*param_3 + 0xd0))(param_3,param_2,param_4,0);
          }
          local_130 = param_5;
          local_138._0_1_ = *(undefined1 *)(param_1 + 4);
          (**(code **)(*plVar2 + 0x68))(plVar2,lVar9,local_110,local_114);
          (**(code **)(*param_5 + 8))(param_5);
          FUN_143a675c0(param_1,lVar9,param_5);
          (**(code **)(*param_5 + 0x10))(param_5);
          local_130 = param_5;
          local_138 = (longlong **)CONCAT71(local_138._1_7_,*(undefined1 *)(param_1 + 4));
          (**(code **)(*plVar2 + 0x70))(plVar2,lVar9,local_110,local_114);
          iVar13 = local_114;
        }
        else {
          (**(code **)(*param_5 + 0x18))(param_5,&DAT_145cc0dc8,2);
          local_130 = param_5;
          local_138 = (longlong **)CONCAT44(local_138._4_4_,iVar5);
          FUN_143a68730(param_1,param_2,param_3,param_4);
          puVar11 = &DAT_145cc13b4;
          if (*(char *)(param_1 + 4) == '\0') {
            puVar11 = &DAT_143fc48d8;
          }
          (**(code **)(*param_5 + 0x18))(param_5,puVar11,1);
        }
        iVar4 = iVar4 + 1;
        local_108 = local_108 + 1;
      } while (iVar4 < iVar13);
    }
    plVar2 = local_f8;
    iVar4 = 0;
    if ((local_117 != '\0') &&
       (uVar14 = lStack_f0 - (longlong)local_f8 >> 3, plVar12 = local_f8, uVar14 != 0)) {
      do {
        puVar10 = (undefined8 *)*plVar12;
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
        }
        iVar4 = iVar4 + 1;
        plVar12 = plVar12 + 1;
      } while ((ulonglong)(longlong)iVar4 < uVar14);
    }
    if (plVar2 != (longlong *)0x0) {
      uVar14 = (local_100 - (longlong)plVar2 >> 3) * 8;
      plVar12 = plVar2;
      if (0xfff < uVar14) {
        uVar14 = uVar14 + 0x27;
        plVar12 = (longlong *)plVar2[-1];
        if (0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar12))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(plVar12,uVar14);
    }
    FUN_143a88800(local_c8);
  }
  else {
    iVar4 = (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4);
    local_128 = param_5;
    local_138 = (longlong **)param_3;
    local_130 = param_4;
    FUN_143a68590(param_1,param_2,0xffffffff,iVar4);
    (**(code **)(*param_5 + 0x18))(param_5,&DAT_145cc6848,3);
    iVar13 = 0;
    if (0 < iVar4) {
      do {
        if (0 < iVar13) {
          (**(code **)(*param_5 + 0x18))(param_5,&DAT_145cbbc74,2);
        }
        local_130 = param_5;
        local_138 = (longlong **)CONCAT44(local_138._4_4_,iVar13);
        FUN_143a68730(param_1,param_2,param_3,param_4);
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar4);
    }
    if (*(char *)(param_1 + 4) == '\0') {
      (**(code **)(*param_5 + 0x18))(param_5,&DAT_145cc6850,2);
    }
    else {
      (**(code **)(*param_5 + 0x18))(param_5,&DAT_145cc684c);
    }
  }
  return;
}



// FUNCTION 143a68470 FUN_143a68470 body=27 status=ok
// SIG undefined FUN_143a68470(void)

void FUN_143a68470(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000143a68487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,param_2,param_5,param_6);
  return;
}



// FUNCTION 143a68490 FUN_143a68490 body=246 status=ok
// SIG undefined FUN_143a68490(void)

void FUN_143a68490(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *in_R9;
  longlong *in_stack_00000028;
  
  if (*(char *)((longlong)in_R9 + 0x42) == '\0') {
    iVar2 = FUN_143a009a0(in_R9);
    if (iVar2 == 10) {
      in_R9 = (undefined8 *)FUN_143a4f9e0(in_R9);
      in_R9 = (undefined8 *)*in_R9;
    }
    else {
      in_R9 = (undefined8 *)*in_R9;
    }
    puVar5 = in_R9 + 2;
    if (0xf < (ulonglong)in_R9[3]) {
      in_R9 = (undefined8 *)*in_R9;
    }
                    /* WARNING: Could not recover jumptable at 0x000143a68582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028,in_R9,*puVar5);
    return;
  }
  (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028,&DAT_145cbda34,1);
  if (*(char *)(*(longlong *)(in_R9[10] + 0x20) + 0x48) != '\0') {
    iVar2 = FUN_143a009a0(in_R9);
    if ((iVar2 == 0xb) && (*(int *)((longlong)in_R9 + 0x3c) == 1)) {
      lVar4 = in_R9[0xc];
      lVar3 = FUN_143a4f9e0(in_R9);
      if (lVar4 == lVar3) {
        lVar4 = FUN_143a4f9e0(in_R9);
        puVar5 = *(undefined8 **)(lVar4 + 8);
        goto LAB_143a68512;
      }
    }
  }
  puVar5 = (undefined8 *)in_R9[1];
LAB_143a68512:
  puVar1 = puVar5 + 2;
  if (0xf < (ulonglong)puVar5[3]) {
    puVar5 = (undefined8 *)*puVar5;
  }
  (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028,puVar5,*puVar1);
                    /* WARNING: Could not recover jumptable at 0x000143a68546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028,&DAT_145cbda38,1);
  return;
}



// FUNCTION 143a68590 FUN_143a68590 body=400 status=ok
// SIG undefined FUN_143a68590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a68590(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,longlong *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined1 *local_58;
  longlong local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_80 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 5) != '\0') {
    local_58 = local_48;
    local_50 = FUN_143a596d0(*(undefined4 *)(param_6 + 0x44),local_48);
    local_50 = (-0x10 - (longlong)&local_58) + local_50;
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_78,local_58)
    ;
    puVar7 = &local_78;
    if (0xf < uStack_60) {
      puVar7 = (undefined1 *)CONCAT71(uStack_77,local_78);
    }
    (**(code **)(*param_7 + 0x18))(param_7,puVar7,local_68);
    if (uStack_60 < 0x10) {
      return;
    }
    uVar8 = uStack_60 + 1;
    lVar2 = CONCAT71(uStack_77,local_78);
    lVar5 = lVar2;
    if (0xfff < uVar8) {
      uVar8 = uStack_60 + 0x28;
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar5,uVar8);
    return;
  }
  local_88 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar3 = puVar1;
  puVar6 = (undefined8 *)puVar1[1];
  if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
    do {
      puVar4 = puVar6;
      if ((ulonglong)puVar4[4] < param_6) {
        puVar6 = (undefined8 *)puVar4[2];
        puVar4 = puVar3;
      }
      else {
        puVar6 = (undefined8 *)*puVar4;
      }
      puVar3 = puVar4;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    if ((puVar4 != puVar1) && ((ulonglong)puVar4[4] <= param_6)) goto LAB_143a686db;
  }
  puVar4 = puVar1;
LAB_143a686db:
  puVar6 = &local_88;
  if (puVar4 != puVar1) {
    puVar6 = puVar4 + 5;
  }
  local_98 = param_7;
  local_a0 = param_6;
  local_a8 = param_5;
  (**(code **)(*(longlong *)*puVar6 + 0x60))((longlong *)*puVar6,param_2,param_3);
  return;
}



// FUNCTION 143a68730 FUN_143a68730 body=1555 status=ok
// SIG undefined FUN_143a68730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143a68a77) */
/* WARNING: Type propagation algorithm not settling */

void FUN_143a68730(longlong param_1,undefined8 param_2,longlong *param_3,ulonglong param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8 [2];
  longlong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  
  local_e0 = 0xfffffffffffffffe;
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e8 = *(undefined8 *)(param_1 + 0x18);
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  puVar8 = (undefined8 *)puVar11[1];
  puVar13 = puVar11;
  if (*(char *)((longlong)puVar11[1] + 0x19) == '\0') {
    do {
      if ((ulonglong)puVar8[4] < param_4) {
        puVar9 = (undefined8 *)puVar8[2];
      }
      else {
        puVar9 = (undefined8 *)*puVar8;
        puVar13 = puVar8;
      }
      puVar8 = puVar9;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
    if ((puVar13 == puVar11) || (param_4 < (ulonglong)puVar13[4])) goto LAB_143a687ba;
  }
  else {
LAB_143a687ba:
    puVar13 = puVar11;
  }
  puVar8 = &local_e8;
  if (puVar13 != puVar11) {
    puVar8 = puVar13 + 5;
  }
  plVar1 = (longlong *)*puVar8;
  iVar6 = FUN_143a009a0(param_4);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar6 * 4)) {
  case 1:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar7 = (**(code **)(*param_3 + 0x148))(param_3,param_2,param_4,param_5);
      (**(code **)(*plVar1 + 0x10))(plVar1,uVar7,param_6);
    }
    else {
      uVar7 = (**(code **)(*param_3 + 0x80))(param_3,param_2,param_4);
      (**(code **)(*plVar1 + 0x10))(plVar1,uVar7,param_6);
    }
    break;
  case 2:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar12 = (**(code **)(*param_3 + 0x150))(param_3,param_2,param_4,param_5);
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar12,param_6);
    }
    else {
      uVar12 = (**(code **)(*param_3 + 0x88))(param_3,param_2,param_4);
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar12,param_6);
    }
    break;
  case 3:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar7 = (**(code **)(*param_3 + 0x158))(param_3,param_2,param_4,param_5);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar7,param_6);
    }
    else {
      uVar7 = (**(code **)(*param_3 + 0x90))(param_3,param_2,param_4);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar7,param_6);
    }
    break;
  case 4:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar12 = (**(code **)(*param_3 + 0x160))(param_3,param_2,param_4,param_5);
      (**(code **)(*plVar1 + 0x28))(plVar1,uVar12,param_6);
    }
    else {
      uVar12 = (**(code **)(*param_3 + 0x98))(param_3,param_2,param_4);
      (**(code **)(*plVar1 + 0x28))(plVar1,uVar12,param_6);
    }
    break;
  case 5:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar7 = (**(code **)(*param_3 + 0x170))(param_3,param_2,param_4,param_5);
      (**(code **)(*plVar1 + 0x38))(plVar1,uVar7,param_6);
    }
    else {
      uVar7 = (**(code **)(*param_3 + 0xa8))(param_3,param_2,param_4);
      (**(code **)(*plVar1 + 0x38))(plVar1,uVar7,param_6);
    }
    break;
  case 6:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar7 = (**(code **)(*param_3 + 0x168))(param_3,param_2,param_4,param_5);
      (**(code **)(*plVar1 + 0x30))(plVar1,uVar7,param_6);
    }
    else {
      uVar7 = (**(code **)(*param_3 + 0xa0))(param_3,param_2,param_4);
      (**(code **)(*plVar1 + 0x30))(plVar1,uVar7,param_6);
    }
    break;
  case 7:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar5 = (**(code **)(*param_3 + 0x178))(param_3,param_2,param_4,param_5);
      (**(code **)(*plVar1 + 8))(plVar1,uVar5,param_6);
    }
    else {
      uVar5 = (**(code **)(*param_3 + 0xb0))(param_3,param_2,param_4);
      (**(code **)(*plVar1 + 8))(plVar1,uVar5,param_6);
    }
    break;
  case 8:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar7 = (**(code **)(*param_3 + 400))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar7 = (**(code **)(*param_3 + 200))(param_3,param_2,param_4);
    }
    uVar12 = FUN_143a4dfa0(param_4);
    puVar11 = (undefined8 *)FUN_143a3fad0(uVar12,uVar7);
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,uVar7,*puVar11,param_6);
      return;
    }
    uVar12 = FUN_143a58770(&local_98,&DAT_144cd4c80,uVar7);
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar7,uVar12,param_6);
    if (uStack_80 < 0x10) {
      return;
    }
    uVar15 = uStack_80 + 1;
    lVar4 = CONCAT71(uStack_97,local_98);
    lVar14 = lVar4;
    if (0xfff < uVar15) {
      uVar15 = uStack_80 + 0x28;
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    goto LAB_143a68c1e;
  case 9:
    local_88 = 0;
    uStack_80 = 0xf;
    local_98 = 0;
    if (*(int *)(param_4 + 0x3c) == 3) {
      local_f8 = &local_98;
      puVar10 = (ulonglong *)(**(code **)(*param_3 + 0x1a0))(param_3,param_2,param_4,param_5);
    }
    else {
      puVar10 = (ulonglong *)(**(code **)(*param_3 + 0xd8))(param_3,param_2,param_4,&local_98);
    }
    local_a8 = 0;
    uStack_a0 = 0xf;
    local_b8 = local_b8 & 0xffffffffffffff00;
    uVar15 = *(ulonglong *)(param_1 + 0x10);
    if ((0 < (longlong)uVar15) && (uVar15 < puVar10[2])) {
      local_c8 = 0;
      uStack_c0 = 0xf;
      local_d8[0]._0_1_ = 0;
      if (0xf < puVar10[3]) {
        puVar10 = (ulonglong *)*puVar10;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_d8,puVar10,uVar15);
      if (uStack_c0 - local_c8 < 0x11) {
        local_f8 = &DAT_00000011;
        puVar10 = (ulonglong *)
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                            (local_d8,0x11,0,"...<truncated>...");
      }
      else {
        puVar17 = (undefined1 *)local_d8;
        if (0xf < uStack_c0) {
          puVar17 = (undefined1 *)CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]);
        }
        puVar17 = puVar17 + local_c8;
        local_c8 = local_c8 + 0x11;
        _guard_xfg_dispatch_icall_nop(puVar17,"...<truncated>...",0x11);
        puVar17[0x11] = 0;
        puVar10 = local_d8;
      }
      uVar15 = *puVar10;
      uVar16 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      puVar10[2] = 0;
      puVar10[3] = 0xf;
      *(undefined1 *)puVar10 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&local_b8);
      local_b8 = uVar15;
      uStack_b0 = uVar16;
      local_a8 = uVar2;
      uStack_a0 = uVar3;
      if (0xf < uStack_c0) {
        uVar15 = uStack_c0 + 1;
        lVar4 = CONCAT71(local_d8[0]._1_7_,(undefined1)local_d8[0]);
        lVar14 = lVar4;
        if (0xfff < uVar15) {
          uVar15 = uStack_c0 + 0x28;
          lVar14 = *(longlong *)(lVar4 + -8);
          if (0x1f < (lVar4 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar14,uVar15);
      }
      puVar10 = &local_b8;
    }
    iVar6 = FUN_143a009a0(param_4);
    if (iVar6 == 9) {
      (**(code **)(*plVar1 + 0x40))();
    }
    else {
      (**(code **)(*plVar1 + 0x48))(plVar1,puVar10,param_6);
    }
    if (0xf < uStack_a0) {
      uVar16 = uStack_a0 + 1;
      uVar15 = local_b8;
      if (0xfff < uVar16) {
        uVar16 = uStack_a0 + 0x28;
        uVar15 = *(ulonglong *)(local_b8 - 8);
        if (0x1f < (local_b8 - uVar15) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar15,uVar16);
    }
    local_a8 = 0;
    uStack_a0 = 0xf;
    local_b8 = local_b8 & 0xffffffffffffff00;
    if (uStack_80 < 0x10) {
      return;
    }
    uVar15 = uStack_80 + 1;
    lVar4 = CONCAT71(uStack_97,local_98);
    lVar14 = lVar4;
    if (0xfff < uVar15) {
      uVar15 = uStack_80 + 0x28;
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - *(longlong *)(lVar4 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_143a68c1e:
    FMemory::operator_delete(lVar14,uVar15);
    break;
  case 10:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar12 = (**(code **)(*param_3 + 0x198))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar12 = (**(code **)(*param_3 + 0xd0))(param_3,param_2,param_4,0);
    }
    FUN_143a675c0(param_1,uVar12,param_6);
  }
  return;
}



// FUNCTION 143a68d70 FUN_143a68d70 body=230 status=ok
// SIG undefined FUN_143a68d70(void)

void FUN_143a68d70(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined **local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38 [16];
  
  local_50 = 0xfffffffffffffffe;
  param_5[2] = 0;
  if (0xf < (ulonglong)param_5[3]) {
    param_5 = (undefined8 *)*param_5;
  }
  *(undefined1 *)param_5 = 0;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_48);
  local_58 = *param_1;
  local_78 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  local_70 = local_48;
  local_68 = 0;
  local_60 = 0;
  local_5c = 1;
  local_54 = local_58;
  lVar1 = (**(code **)(*param_2 + 0xb8))(param_2,local_38);
  FUN_143a68730(param_1,param_2,*(undefined8 *)(lVar1 + 8),param_3,param_4,&local_78);
  local_78 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  if ((local_5c._1_1_ == '\0') && (0 < local_60)) {
    (**(code **)(*local_70 + 0x10))();
  }
  return;
}



// FUNCTION 143a68e60 FUN_143a68e60 body=255 status=ok
// SIG undefined FUN_143a68e60(void)

void FUN_143a68e60(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined **local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  
  local_a0 = 0xfffffffffffffffe;
  puVar1 = (undefined4 *)FUN_143a5f7c0(local_78);
  param_4[2] = 0;
  puVar3 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar3 = (undefined8 *)*param_4;
  }
  *(undefined1 *)puVar3 = 0;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_98,param_4);
  local_a8 = *puVar1;
  local_c8 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  local_c0 = local_98;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 1;
  local_a4 = local_a8;
  lVar2 = (**(code **)(*param_1 + 0xb8))(param_1,local_88);
  FUN_143a68730(puVar1,param_1,*(undefined8 *)(lVar2 + 8),param_2,param_3,&local_c8);
  local_c8 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  if ((local_ac._1_1_ == '\0') && (0 < local_b0)) {
    (**(code **)(*local_c0 + 0x10))();
  }
  FUN_143a5f930(local_78);
  return;
}



// FUNCTION 143a68f60 FUN_143a68f60 body=152 status=ok
// SIG undefined FUN_143a68f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a68f60(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_143a59c80(local_30);
  puVar1 = puVar2 + 2;
  if (0xf < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  (**(code **)(*param_3 + 0x18))(param_3,puVar2,*puVar1);
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    lVar3 = local_30[0];
    if (0xfff < uVar4) {
      uVar4 = local_18 + 0x28;
      lVar3 = *(longlong *)(local_30[0] + -8);
      if (0x1f < (local_30[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  return;
}



// FUNCTION 143a69000 FUN_143a69000 body=235 status=ok
// SIG undefined FUN_143a69000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a69000(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_40 = local_30;
  local_38 = FUN_143a596d0(param_2,local_30);
  local_38 = (-0x10 - (longlong)&local_40) + local_38;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_60,local_40);
  puVar3 = &local_60;
  if (0xf < uStack_48) {
    puVar3 = (undefined1 *)CONCAT71(uStack_5f,local_60);
  }
  (**(code **)(*param_3 + 0x18))(param_3,puVar3,local_50);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    lVar1 = CONCAT71(uStack_5f,local_60);
    lVar2 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_48 + 0x28;
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar4);
  }
  return;
}



// FUNCTION 143a690f0 FUN_143a690f0 body=237 status=ok
// SIG undefined FUN_143a690f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a690f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_40 = local_30;
  local_38 = FUN_143a59810(param_2,local_30);
  local_38 = (-0x10 - (longlong)&local_40) + local_38;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_60,local_40);
  puVar3 = &local_60;
  if (0xf < uStack_48) {
    puVar3 = (undefined1 *)CONCAT71(uStack_5f,local_60);
  }
  (**(code **)(*param_3 + 0x18))(param_3,puVar3,local_50);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    lVar1 = CONCAT71(uStack_5f,local_60);
    lVar2 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_48 + 0x28;
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar4);
  }
  return;
}



// FUNCTION 143a691e0 FUN_143a691e0 body=42 status=ok
// SIG undefined FUN_143a691e0(void)

void FUN_143a691e0(void)

{
  undefined *puVar1;
  char in_stack_00000028;
  longlong *in_stack_00000030;
  
  puVar1 = &DAT_145cc67f0;
  if (in_stack_00000028 == '\0') {
    puVar1 = &DAT_145cc1170;
  }
                    /* WARNING: Could not recover jumptable at 0x000143a69207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_stack_00000030 + 0x18))
            (in_stack_00000030,puVar1,2,*(code **)(*in_stack_00000030 + 0x18));
  return;
}



// FUNCTION 143a69210 FUN_143a69210 body=42 status=ok
// SIG undefined FUN_143a69210(void)

void FUN_143a69210(void)

{
  undefined *puVar1;
  char in_stack_00000028;
  longlong *in_stack_00000030;
  
  puVar1 = &DAT_145cc67ec;
  if (in_stack_00000028 == '\0') {
    puVar1 = &DAT_145cc10f0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143a69237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_stack_00000030 + 0x18))
            (in_stack_00000030,puVar1,3,*(code **)(*in_stack_00000030 + 0x18));
  return;
}



// FUNCTION 143a69240 FUN_143a69240 body=212 status=ok
// SIG undefined FUN_143a69240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a69240(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc1014,1);
  puVar2 = (undefined8 *)FUN_143a59240(local_30,param_2);
  puVar1 = puVar2 + 2;
  if (0xf < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  (**(code **)(*param_3 + 0x18))(param_3,puVar2,*puVar1);
  if (0xf < local_18) {
    uVar4 = local_18 + 1;
    lVar3 = local_30[0];
    if (0xfff < uVar4) {
      uVar4 = local_18 + 0x28;
      lVar3 = *(longlong *)(local_30[0] + -8);
      if (0x1f < (local_30[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc1014,1);
  return;
}



// FUNCTION 143a69320 FUN_143a69320 body=184 status=ok
// SIG undefined FUN_143a69320(void)

bool FUN_143a69320(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined **local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28 [2];
  
  local_30 = 0xfffffffffffffffe;
  param_3[2] = 0;
  puVar1 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar1 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar1 = 0;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_3);
  local_38 = *param_1;
  local_58 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  local_50 = local_28;
  local_48 = 0;
  local_40 = 0;
  local_3c = 1;
  local_34 = local_38;
  FUN_143a675c0(param_1,param_2,&local_58);
  bVar2 = local_3c._1_1_ == '\0';
  local_58 = google::protobuf::TextFormat::Printer::TextGenerator::vftable;
  if ((local_3c._1_1_ == '\0') && (0 < local_40)) {
    (**(code **)(*local_50 + 0x10))();
  }
  return bVar2;
}



// FUNCTION 143a693e0 FUN_143a693e0 body=235 status=ok
// SIG undefined FUN_143a693e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a693e0(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_40 = local_30;
  local_38 = FUN_143a59830(param_2,local_30);
  local_38 = (-0x10 - (longlong)&local_40) + local_38;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_60,local_40);
  puVar3 = &local_60;
  if (0xf < uStack_48) {
    puVar3 = (undefined1 *)CONCAT71(uStack_5f,local_60);
  }
  (**(code **)(*param_3 + 0x18))(param_3,puVar3,local_50);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    lVar1 = CONCAT71(uStack_5f,local_60);
    lVar2 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_48 + 0x28;
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar4);
  }
  return;
}



// FUNCTION 143a694d0 FUN_143a694d0 body=237 status=ok
// SIG undefined FUN_143a694d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a694d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined1 *local_40;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_40 = local_30;
  local_38 = FUN_143a599e0(param_2,local_30);
  local_38 = (-0x10 - (longlong)&local_40) + local_38;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_60,local_40);
  puVar3 = &local_60;
  if (0xf < uStack_48) {
    puVar3 = (undefined1 *)CONCAT71(uStack_5f,local_60);
  }
  (**(code **)(*param_3 + 0x18))(param_3,puVar3,local_50);
  if (0xf < uStack_48) {
    uVar4 = uStack_48 + 1;
    lVar1 = CONCAT71(uStack_5f,local_60);
    lVar2 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_48 + 0x28;
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar4);
  }
  return;
}



// FUNCTION 143a695c0 FUN_143a695c0 body=1741 status=ok
// SIG undefined FUN_143a695c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a695c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  ulonglong local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [4];
  undefined1 *local_a8;
  longlong local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_48;
  
  local_128 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar14 = 0;
  lVar7 = *param_2;
  if (0 < (int)(param_2[1] - lVar7 >> 4)) {
    lVar15 = 0;
    do {
      local_a8 = local_98;
      local_a0 = FUN_143a596d0(*(undefined4 *)(lVar7 + lVar15),local_98);
      local_a0 = local_a0 + (-0x10 - (longlong)&local_a8);
      local_f0 = 0;
      local_e8 = 0xf;
      local_100 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_100,local_a8);
      iVar2 = *(int *)(lVar7 + 4 + lVar15);
      if (iVar2 == 0) {
        puVar9 = &local_100;
        if (0xf < local_e8) {
          puVar9 = (undefined1 *)CONCAT71(uStack_ff,local_100);
        }
        (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_f0);
        (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc0dc8,2);
        local_d8 = local_c8;
        lVar7 = FUN_143a599e0(*(undefined8 *)(lVar7 + 8 + lVar15),local_c8);
        uStack_d0 = (longlong *)((-0x10 - (longlong)&local_d8) + lVar7);
        local_110 = 0;
        local_108 = 0xf;
        local_120 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_120,local_d8);
        puVar9 = &local_120;
        if (0xf < local_108) {
          puVar9 = (undefined1 *)CONCAT71(uStack_11f,local_120);
        }
        (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_110);
        if (0xf < local_108) {
          uVar12 = local_108 + 1;
          lVar4 = CONCAT71(uStack_11f,local_120);
          lVar7 = lVar4;
          if (0xfff < uVar12) {
            uVar12 = local_108 + 0x28;
            lVar7 = *(longlong *)(lVar4 + -8);
            if (0x1f < (lVar4 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar7,uVar12);
        }
        uVar13 = 1;
        puVar9 = &DAT_145cc13b4;
        if (*(char *)(param_1 + 4) == '\0') {
          puVar9 = &DAT_143fc48d8;
        }
LAB_143a69be7:
        lVar7 = *param_3;
LAB_143a69bed:
        (**(code **)(lVar7 + 0x18))(param_3,puVar9,uVar13);
      }
      else {
        if (iVar2 == 1) {
          puVar9 = &local_100;
          if (0xf < local_e8) {
            puVar9 = (undefined1 *)CONCAT71(uStack_ff,local_100);
          }
          (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_f0);
          (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc686c,4);
          uStack_130 = 8;
          uVar3 = *(uint *)(lVar7 + 8 + lVar15);
          local_138 = (ulonglong)uVar3;
          local_d8 = (longlong *)(ulonglong)uVar3;
          uStack_d0 = (longlong *)CONCAT44(uStack_12c,8);
          FUN_143a591d0(&local_78,&local_d8);
          local_110 = 0;
          local_108 = 0xf;
          local_120 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_120,local_78,local_70);
          puVar9 = &local_120;
          if (0xf < local_108) {
            puVar9 = (undefined1 *)CONCAT71(uStack_11f,local_120);
          }
          (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_110);
          if (0xf < local_108) {
            uVar12 = local_108 + 1;
            lVar4 = CONCAT71(uStack_11f,local_120);
            lVar7 = lVar4;
            if (0xfff < uVar12) {
              uVar12 = local_108 + 0x28;
              lVar7 = *(longlong *)(lVar4 + -8);
              if (0x1f < (lVar4 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
LAB_143a699ce:
            FMemory::operator_delete(lVar7,uVar12);
          }
LAB_143a699d3:
          lVar7 = *param_3;
          uVar13 = 1;
          if (*(char *)(param_1 + 4) == '\0') {
            puVar9 = &DAT_143fc48d8;
          }
          else {
            puVar9 = &DAT_145cc13b4;
          }
          goto LAB_143a69bed;
        }
        if (iVar2 == 2) {
          puVar9 = &local_100;
          if (0xf < local_e8) {
            puVar9 = (undefined1 *)CONCAT71(uStack_ff,local_100);
          }
          (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_f0);
          (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc686c,4);
          local_148 = *(longlong **)(lVar7 + 8 + lVar15);
          uStack_140 = 0x10;
          uStack_d0 = (longlong *)CONCAT44(uStack_13c,0x10);
          local_d8 = local_148;
          FUN_143a591d0(&local_78,&local_d8);
          local_110 = 0;
          local_108 = 0xf;
          local_120 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_120,local_78,local_70);
          puVar9 = &local_120;
          if (0xf < local_108) {
            puVar9 = (undefined1 *)CONCAT71(uStack_11f,local_120);
          }
          (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_110);
          if (0xf < local_108) {
            uVar12 = local_108 + 1;
            lVar4 = CONCAT71(uStack_11f,local_120);
            lVar7 = lVar4;
            if (0xfff < uVar12) {
              uVar12 = local_108 + 0x28;
              lVar7 = *(longlong *)(lVar4 + -8);
              if (0x1f < (lVar4 - *(longlong *)(lVar4 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_143a699ce;
          }
          goto LAB_143a699d3;
        }
        if (iVar2 == 3) {
          puVar9 = &local_100;
          if (0xf < local_e8) {
            puVar9 = (undefined1 *)CONCAT71(uStack_ff,local_100);
          }
          (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_f0);
          plVar8 = *(longlong **)(lVar7 + 8 + lVar15);
          local_d8 = (longlong *)0x0;
          uStack_d0 = (longlong *)0x0;
          local_c8[0] = 0;
          if (plVar8[2] == 0) {
LAB_143a697f9:
            (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc6874,3);
            puVar6 = (undefined8 *)FUN_143a59240(&local_120,plVar8);
            puVar1 = puVar6 + 2;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar6 = (undefined8 *)*puVar6;
            }
            (**(code **)(*param_3 + 0x18))(param_3,puVar6,*puVar1);
            if (0xf < local_108) {
              uVar12 = local_108 + 1;
              lVar4 = CONCAT71(uStack_11f,local_120);
              lVar7 = lVar4;
              if (0xfff < uVar12) {
                uVar12 = local_108 + 0x28;
                lVar7 = *(longlong *)(lVar4 + -8);
                if (0x1f < (lVar4 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar7,uVar12);
            }
            puVar11 = &DAT_145cc6878;
            if (*(char *)(param_1 + 4) == '\0') {
              puVar11 = &DAT_145cc687c;
            }
LAB_143a69888:
            lVar7 = *param_3;
          }
          else {
            plVar10 = plVar8;
            if (0xf < (ulonglong)plVar8[3]) {
              plVar10 = (longlong *)*plVar8;
            }
            cVar5 = FUN_1439fc240(&local_d8,plVar10,plVar8[2] & 0xffffffff);
            if (cVar5 == '\0') goto LAB_143a697f9;
            if (*(char *)(param_1 + 4) == '\0') {
              (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc10f0,3);
              (**(code **)(*param_3 + 8))(param_3);
            }
            else {
              (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc67ec);
            }
            FUN_143a695c0(param_1,&local_d8,param_3);
            lVar7 = *param_3;
            if (*(char *)(param_1 + 4) == '\0') {
              (**(code **)(lVar7 + 0x10))(param_3);
              puVar11 = &DAT_145cc1170;
              goto LAB_143a69888;
            }
            puVar11 = &DAT_145cc67f0;
          }
          (**(code **)(lVar7 + 0x18))(param_3,puVar11,2);
          if (local_d8 != uStack_d0) {
            FUN_1439fbee0(&local_d8);
          }
          if (local_d8 != (longlong *)0x0) {
            uVar12 = local_c8[0] - (longlong)local_d8 & 0xfffffffffffffff0;
            plVar8 = local_d8;
            if (0xfff < uVar12) {
              uVar12 = uVar12 + 0x27;
              plVar8 = (longlong *)local_d8[-1];
              if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)plVar8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(plVar8,uVar12);
          }
        }
        else if (iVar2 == 4) {
          puVar9 = &local_100;
          if (0xf < local_e8) {
            puVar9 = (undefined1 *)CONCAT71(uStack_ff,local_100);
          }
          (**(code **)(*param_3 + 0x18))(param_3,puVar9,local_f0);
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc10f0,3);
            (**(code **)(*param_3 + 8))(param_3);
          }
          else {
            (**(code **)(*param_3 + 0x18))(param_3,&DAT_145cc67ec);
          }
          FUN_143a695c0(param_1,*(undefined8 *)(lVar7 + 8 + lVar15),param_3);
          lVar7 = *param_3;
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(lVar7 + 0x10))(param_3);
            uVar13 = 2;
            puVar9 = &DAT_145cc1170;
            goto LAB_143a69be7;
          }
          uVar13 = 2;
          puVar9 = &DAT_145cc67f0;
          goto LAB_143a69bed;
        }
      }
      if (0xf < local_e8) {
        uVar12 = local_e8 + 1;
        lVar4 = CONCAT71(uStack_ff,local_100);
        lVar7 = lVar4;
        if (0xfff < uVar12) {
          uVar12 = local_e8 + 0x28;
          lVar7 = *(longlong *)(lVar4 + -8);
          if (0x1f < (lVar4 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar12);
      }
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 0x10;
      lVar7 = *param_2;
    } while (iVar14 < (int)(param_2[1] - lVar7 >> 4));
  }
  return;
}



// FUNCTION 143a69ca0 FUN_143a69ca0 body=185 status=ok
// SIG undefined FUN_143a69ca0(void)

void FUN_143a69ca0(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  ulonglong local_res10;
  ulonglong *local_res18;
  undefined8 local_res20;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)puVar1[1];
  puVar5 = puVar1;
  local_res10 = param_2;
  local_res20 = param_3;
  if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
    do {
      if ((ulonglong)puVar2[4] < param_2) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
    if ((puVar5 != puVar1) && ((ulonglong)puVar5[4] <= param_2)) goto LAB_143a69d29;
  }
  local_res18 = &local_res10;
  lVar4 = FUN_143a5cfe0(param_1,&DAT_145cc5761,&local_res18,&local_res8);
  FUN_143a5d500(param_1,&local_res8,puVar5,lVar4 + 0x20,lVar4);
  puVar5 = local_res8;
LAB_143a69d29:
  puVar1 = (undefined8 *)puVar5[6];
  if ((undefined8 *)puVar5[7] != puVar1) {
    *puVar1 = param_3;
    puVar5[6] = puVar5[6] + 8;
    return;
  }
  FUN_143a5d030(puVar5 + 5,puVar1,&local_res20);
  return;
}



// FUNCTION 143a69d60 FUN_143a69d60 body=368 status=ok
// SIG undefined FUN_143a69d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a69d60(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *(undefined1 *)((longlong)param_1 + 0xfa) = 1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    if (param_2 < 0) {
      uVar1 = FUN_1439eeb00(local_68,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                            0x13d);
      uVar2 = *(undefined8 *)(param_1[0x1d] + 8);
      uVar1 = FUN_1439eef00(uVar1,"Error parsing text-format ");
      uVar2 = FUN_1439eecf0(uVar1,uVar2);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc0dc8);
      uVar2 = FUN_1439eecf0(uVar2,param_4);
      FUN_1439eec50(local_78,uVar2);
      DsDevice::~DsDevice(local_68);
    }
    else {
      uVar1 = FUN_1439eeb00(local_68,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                            0x138);
      uVar2 = *(undefined8 *)(param_1[0x1d] + 8);
      uVar1 = FUN_1439eef00(uVar1,"Error parsing text-format ");
      uVar2 = FUN_1439eecf0(uVar1,uVar2);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc0dc8);
      uVar2 = FUN_1439eed20(uVar2,param_2 + 1);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc3708);
      uVar2 = FUN_1439eed20(uVar2,param_3 + 1);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc0dc8);
      uVar2 = FUN_1439eecf0(uVar2,param_4);
      FUN_1439eec50(local_78,uVar2);
      DsDevice::~DsDevice(local_68);
    }
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}



// FUNCTION 143a69ed0 FUN_143a69ed0 body=15 status=ok
// SIG undefined FUN_143a69ed0(void)

void FUN_143a69ed0(longlong param_1,undefined8 param_2)

{
  FUN_143a69ee0(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),param_2);
  return;
}



// FUNCTION 143a69ee0 FUN_143a69ee0 body=361 status=ok
// SIG undefined FUN_143a69ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a69ee0(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    if (param_2 < 0) {
      uVar1 = FUN_1439eeb00(local_68,1,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                            0x14e);
      uVar2 = *(undefined8 *)(param_1[0x1d] + 8);
      uVar1 = FUN_1439eef00(uVar1,"Warning parsing text-format ");
      uVar2 = FUN_1439eecf0(uVar1,uVar2);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc0dc8);
      uVar2 = FUN_1439eecf0(uVar2,param_4);
      FUN_1439eec50(local_78,uVar2);
      DsDevice::~DsDevice(local_68);
    }
    else {
      uVar1 = FUN_1439eeb00(local_68,1,"c:\\dev\\protobuf\\src\\google\\protobuf\\text_format.cc",
                            0x149);
      uVar2 = *(undefined8 *)(param_1[0x1d] + 8);
      uVar1 = FUN_1439eef00(uVar1,"Warning parsing text-format ");
      uVar2 = FUN_1439eecf0(uVar1,uVar2);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc0dc8);
      uVar2 = FUN_1439eed20(uVar2,param_2 + 1);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc3708);
      uVar2 = FUN_1439eed20(uVar2,param_3 + 1);
      uVar2 = FUN_1439eef00(uVar2,&DAT_145cc0dc8);
      uVar2 = FUN_1439eecf0(uVar2,param_4);
      FUN_1439eec50(local_78,uVar2);
      DsDevice::~DsDevice(local_68);
    }
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  return;
}



// FUNCTION 143a6a050 FUN_143a6a050 body=281 status=ok
// SIG undefined FUN_143a6a050(void)

undefined8 * FUN_143a6a050(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong _Size;
  undefined1 local_58 [4];
  undefined1 local_54;
  undefined1 local_4f;
  
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_143a5f7c0(local_58);
  local_54 = 1;
  local_4f = 1;
  FUN_143a69320(local_58,param_1,param_2);
  uVar2 = param_2[2];
  if (uVar2 != 0) {
    uVar3 = param_2[3];
    puVar4 = param_2;
    if (0xf < uVar3) {
      puVar4 = (undefined8 *)*param_2;
    }
    if (*(char *)((longlong)puVar4 + (uVar2 - 1)) == ' ') {
      uVar1 = uVar2 - 1;
      if (uVar2 < uVar1) {
        _Size = uVar1 - uVar2;
        if (uVar3 - uVar2 < _Size) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char>
                    (param_2,_Size,0,_Size,0);
        }
        else {
          param_2[2] = uVar1;
          puVar4 = param_2;
          if (0xf < uVar3) {
            puVar4 = (undefined8 *)*param_2;
          }
          _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar4 + uVar2),0,_Size);
          *(undefined1 *)((longlong)((longlong)puVar4 + uVar2) + _Size) = 0;
        }
      }
      else {
        param_2[2] = uVar1;
        puVar4 = param_2;
        if (0xf < uVar3) {
          puVar4 = (undefined8 *)*param_2;
        }
        *(undefined1 *)((longlong)puVar4 + uVar1) = 0;
      }
    }
  }
  FUN_143a5f930(local_58);
  return param_2;
}



// FUNCTION 143a6a170 FUN_143a6a170 body=1515 status=ok
// SIG undefined FUN_143a6a170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a6a170(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_c8 [32];
  char local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  size_t local_88;
  ulonglong uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  size_t local_68;
  ulonglong uStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  size_t local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_a0 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a4 = 0;
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_98,&DAT_145cbda34,1);
  uVar9 = uStack_80;
  puVar1 = (undefined1 *)CONCAT71(uStack_97,local_98);
  puVar11 = &local_98;
  if (0xf < uStack_80) {
    puVar11 = puVar1;
  }
  pvVar6 = (void *)(param_1 + 0x30);
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    pvVar6 = *(void **)(param_1 + 0x30);
  }
  if ((*(size_t *)(param_1 + 0x40) == local_88) &&
     (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar6,puVar11,*(size_t *)(param_1 + 0x40)), iVar5 == 0)
     ) {
    FUN_143a840e0(param_1 + 0x28);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (0xf < uVar9) {
    uVar8 = uVar9 + 1;
    puVar11 = puVar1;
    if (0xfff < uVar8) {
      uVar8 = uVar9 + 0x28;
      puVar11 = *(undefined1 **)(puVar1 + -8);
      if ((undefined1 *)0x1f < puVar1 + (-8 - (longlong)puVar11)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar11,uVar8);
  }
  if (bVar3) {
    cVar4 = FUN_143a64d70(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    local_88 = 0;
    uStack_80 = 0xf;
    local_98 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_98,&DAT_145cbda38,1);
    cVar4 = FUN_143a60110(param_1,&local_98);
    if (0xf < uStack_80) {
      uVar9 = uStack_80 + 1;
      lVar2 = CONCAT71(uStack_97,local_98);
      lVar7 = lVar2;
      if (0xfff < uVar9) {
        uVar9 = uStack_80 + 0x28;
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar9);
    }
    if (cVar4 == '\0') {
      return 0;
    }
  }
  else {
    local_88 = 0;
    uStack_80 = 0xf;
    local_98 = 0;
    cVar4 = FUN_143a64350(param_1,&local_98);
    if (cVar4 == '\0') {
      if (uStack_80 < 0x10) {
        return 0;
      }
      uVar9 = uStack_80 + 1;
      lVar2 = CONCAT71(uStack_97,local_98);
      lVar7 = lVar2;
      if (0xfff < uVar9) {
        uVar9 = uStack_80 + 0x28;
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar9);
      return 0;
    }
    if (0xf < uStack_80) {
      uVar9 = uStack_80 + 1;
      lVar2 = CONCAT71(uStack_97,local_98);
      lVar7 = lVar2;
      if (0xfff < uVar9) {
        uVar9 = uStack_80 + 0x28;
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar7,uVar9);
    }
  }
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_98,&DAT_145cc3708,1);
  uVar14 = 0;
  local_a4 = 1;
  puVar1 = (undefined1 *)CONCAT71(uStack_97,local_98);
  puVar11 = &local_98;
  if (0xf < uStack_80) {
    puVar11 = puVar1;
  }
  pvVar6 = (void *)(param_1 + 0x30);
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    pvVar6 = *(void **)(param_1 + 0x30);
  }
  if ((*(size_t *)(param_1 + 0x40) == local_88) &&
     (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar6,puVar11,*(size_t *)(param_1 + 0x40)), iVar5 == 0)
     ) {
    FUN_143a840e0(param_1 + 0x28);
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_78,&DAT_145cc62d0,1);
    uVar14 = 3;
    local_a4 = 3;
    puVar11 = (undefined1 *)CONCAT71(uStack_77,local_78);
    puVar12 = &local_78;
    if (0xf < uStack_60) {
      puVar12 = puVar11;
    }
    pvVar6 = (void *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pvVar6 = *(void **)(param_1 + 0x30);
    }
    if ((*(size_t *)(param_1 + 0x40) == local_68) &&
       (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar6,puVar12,*(size_t *)(param_1 + 0x40)),
       iVar5 == 0)) goto LAB_143a6a498;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_58,&DAT_145cc62cc,1);
    uVar9 = uStack_40;
    uVar14 = 7;
    puVar12 = (undefined1 *)CONCAT71(uStack_57,local_58);
    puVar10 = &local_58;
    if (0xf < uStack_40) {
      puVar10 = puVar12;
    }
    pvVar6 = (void *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pvVar6 = *(void **)(param_1 + 0x30);
    }
    if ((*(size_t *)(param_1 + 0x40) != local_48) ||
       (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar6,puVar10,*(size_t *)(param_1 + 0x40)),
       iVar5 != 0)) {
      local_a8 = '\x01';
      goto LAB_143a6a4a4;
    }
  }
  else {
    puVar11 = (undefined1 *)CONCAT71(uStack_77,local_78);
LAB_143a6a498:
    puVar12 = (undefined1 *)CONCAT71(uStack_57,local_58);
    uVar9 = uStack_40;
  }
  local_a8 = '\0';
LAB_143a6a4a4:
  if (((uVar14 & 4) != 0) && (uVar14 = uVar14 & 0xfffffffb, 0xf < uVar9)) {
    uVar8 = uVar9 + 1;
    puVar10 = puVar12;
    if (0xfff < uVar8) {
      uVar8 = uVar9 + 0x28;
      puVar10 = *(undefined1 **)(puVar12 + -8);
      if ((undefined1 *)0x1f < puVar12 + (-8 - (longlong)puVar10)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar10,uVar8);
  }
  if (((uVar14 & 2) != 0) && (uVar14 = uVar14 & 0xfffffffd, 0xf < uStack_60)) {
    uVar9 = uStack_60 + 1;
    puVar12 = puVar11;
    if (0xfff < uVar9) {
      uVar9 = uStack_60 + 0x28;
      puVar12 = *(undefined1 **)(puVar11 + -8);
      if ((undefined1 *)0x1f < puVar11 + (-8 - (longlong)puVar12)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar12,uVar9);
  }
  if (0xf < uStack_80) {
    uVar9 = uStack_80 + 1;
    puVar11 = puVar1;
    if (0xfff < uVar9) {
      uVar9 = uStack_80 + 0x28;
      puVar11 = *(undefined1 **)(puVar1 + -8);
      if ((undefined1 *)0x1f < puVar1 + (-8 - (longlong)puVar11)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar11,uVar9);
  }
  if (local_a8 == '\0') {
    cVar4 = FUN_143a6a770(param_1);
  }
  else {
    cVar4 = FUN_143a6a9d0();
  }
  if (cVar4 == '\0') {
    return 0;
  }
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_98,&DAT_145cc64e0,1);
  uVar9 = uStack_80;
  uVar15 = uVar14 & 0xfffffffe | 8;
  puVar1 = (undefined1 *)CONCAT71(uStack_97,local_98);
  puVar11 = &local_98;
  if (0xf < uStack_80) {
    puVar11 = puVar1;
  }
  pvVar6 = (void *)(param_1 + 0x30);
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    pvVar6 = *(void **)(param_1 + 0x30);
  }
  local_a4 = uVar15;
  if ((*(size_t *)(param_1 + 0x40) == local_88) &&
     (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar6,puVar11,*(size_t *)(param_1 + 0x40)), iVar5 == 0)
     ) {
    FUN_143a840e0(param_1 + 0x28);
    puVar11 = (undefined1 *)CONCAT71(uStack_77,local_78);
    uVar8 = uStack_60;
  }
  else {
    local_68 = 0;
    uStack_60 = 0xf;
    local_78 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_78,&DAT_145cc0f84,1);
    uVar8 = uStack_60;
    uVar15 = uVar14 & 0xfffffffe | 0x18;
    puVar11 = (undefined1 *)CONCAT71(uStack_77,local_78);
    puVar12 = &local_78;
    if (0xf < uStack_60) {
      puVar12 = puVar11;
    }
    pvVar6 = (void *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pvVar6 = *(void **)(param_1 + 0x30);
    }
    local_a4 = uVar15;
    if ((*(size_t *)(param_1 + 0x40) == local_68) &&
       (iVar5 = _guard_xfg_dispatch_icall_nop(pvVar6,puVar12,*(size_t *)(param_1 + 0x40)),
       iVar5 == 0)) {
      FUN_143a840e0(param_1 + 0x28);
    }
  }
  if (((uVar15 & 0x10) != 0) && (0xf < uVar8)) {
    uVar13 = uVar8 + 1;
    puVar12 = puVar11;
    if (0xfff < uVar13) {
      uVar13 = uVar8 + 0x28;
      puVar12 = *(undefined1 **)(puVar11 + -8);
      if ((undefined1 *)0x1f < puVar11 + (-8 - (longlong)puVar12)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar12,uVar13);
  }
  if (0xf < uVar9) {
    uVar8 = uVar9 + 1;
    puVar11 = puVar1;
    if (0xfff < uVar8) {
      uVar8 = uVar9 + 0x28;
      puVar11 = *(undefined1 **)(puVar1 + -8);
      if ((undefined1 *)0x1f < puVar1 + (-8 - (longlong)puVar11)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar11,uVar8);
  }
  return 1;
}



// FUNCTION 143a6a770 FUN_143a6a770 body=603 status=ok
// SIG undefined FUN_143a6a770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a6a770(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 auStack_c8 [32];
  uint local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  size_t local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  size_t local_60;
  ulonglong local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_98 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar14 = 0;
  local_a8 = 0;
  local_40 = 0;
  uStack_38 = 0xf;
  local_50 = 0;
  local_a0 = param_1;
  cVar5 = FUN_143a64860(0,&local_50);
  if (cVar5 != '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      local_60 = 0;
      local_58 = 0xf;
      local_70 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_70,&DAT_145cc62c8,1);
      uVar13 = local_58;
      uVar14 = uVar14 | 1;
      puVar2 = (undefined1 *)CONCAT71(uStack_6f,local_70);
      puVar9 = &local_70;
      if (0xf < local_58) {
        puVar9 = puVar2;
      }
      puVar7 = puVar1;
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        puVar7 = (undefined8 *)*puVar1;
      }
      local_a8 = uVar14;
      if ((*(size_t *)(param_1 + 0x40) == local_60) &&
         (iVar6 = _guard_xfg_dispatch_icall_nop(puVar7,puVar9,*(size_t *)(param_1 + 0x40)),
         iVar6 == 0)) {
        puVar9 = (undefined1 *)CONCAT71(uStack_8f,local_90);
        bVar4 = false;
        uVar12 = local_78;
      }
      else {
        local_80 = 0;
        local_78 = 0xf;
        local_90 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_90,&DAT_145cc107c,1);
        uVar12 = local_78;
        uVar14 = 3;
        puVar9 = (undefined1 *)CONCAT71(uStack_8f,local_90);
        puVar10 = &local_90;
        if (0xf < local_78) {
          puVar10 = puVar9;
        }
        puVar7 = puVar1;
        if (0xf < *(ulonglong *)(param_1 + 0x48)) {
          puVar7 = (undefined8 *)*puVar1;
        }
        if ((*(size_t *)(param_1 + 0x40) == local_80) &&
           (iVar6 = _guard_xfg_dispatch_icall_nop(puVar7,puVar10,*(size_t *)(param_1 + 0x40)),
           iVar6 == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      if (((uVar14 & 2) != 0) && (uVar14 = 0, 0xf < uVar12)) {
        uVar11 = uVar12 + 1;
        puVar10 = puVar9;
        if (0xfff < uVar11) {
          uVar11 = uVar12 + 0x28;
          puVar10 = *(undefined1 **)(puVar9 + -8);
          if ((undefined1 *)0x1f < puVar9 + (-8 - (longlong)puVar10)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar10,uVar11);
      }
      uVar14 = uVar14 & 0xfffffffe;
      if (0xf < uVar13) {
        uVar12 = uVar13 + 1;
        puVar9 = puVar2;
        if (0xfff < uVar12) {
          uVar12 = uVar13 + 0x28;
          puVar9 = *(undefined1 **)(puVar2 + -8);
          if ((undefined1 *)0x1f < puVar2 + (-8 - (longlong)puVar9)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(puVar9,uVar12);
      }
      if (!bVar4) {
        cVar5 = FUN_143a60110(local_a0,&local_50);
        if (cVar5 != '\0') {
          uVar15 = 1;
          goto LAB_143a6a960;
        }
        break;
      }
      cVar5 = FUN_143a6a170();
    } while (cVar5 != '\0');
  }
  uVar15 = 0;
LAB_143a6a960:
  if (0xf < uStack_38) {
    uVar13 = uStack_38 + 1;
    lVar3 = CONCAT71(uStack_4f,local_50);
    lVar8 = lVar3;
    if (0xfff < uVar13) {
      uVar13 = uStack_38 + 0x28;
      lVar8 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar8,uVar13);
  }
  return uVar15;
}



// FUNCTION 143a6a9d0 FUN_143a6a9d0 body=2396 status=ok
// SIG undefined FUN_143a6a9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a6a9d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88;
  longlong local_80;
  undefined8 local_78;
  byte local_70;
  undefined7 uStack_6f;
  size_t local_60;
  ulonglong uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  size_t local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_78 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar18 = 0;
  local_88 = 0;
  local_80 = param_1;
  if (*(int *)(param_1 + 0x28) == 5) {
    do {
      FUN_143a840e0(param_1 + 0x28);
    } while (*(int *)(param_1 + 0x28) == 5);
LAB_143a6b181:
    uVar6 = 1;
  }
  else {
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_70,&DAT_145cbda34,1);
    uVar12 = uStack_58;
    puVar1 = (undefined8 *)(param_1 + 0x30);
    pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
    pbVar8 = &local_70;
    if (0xf < uStack_58) {
      pbVar8 = pbVar15;
    }
    puVar7 = puVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar7 = (undefined8 *)*puVar1;
    }
    if ((*(size_t *)(param_1 + 0x40) == local_60) &&
       (iVar5 = _guard_xfg_dispatch_icall_nop(puVar7,pbVar8,*(size_t *)(param_1 + 0x40)), iVar5 == 0
       )) {
      bVar19 = true;
      FUN_143a840e0(param_1 + 0x28);
    }
    else {
      bVar19 = false;
    }
    if (0xf < uVar12) {
      uVar9 = uVar12 + 1;
      pbVar8 = pbVar15;
      if (0xfff < uVar9) {
        uVar9 = uVar12 + 0x28;
        pbVar8 = *(byte **)(pbVar15 + -8);
        if ((byte *)0x1f < pbVar15 + (-8 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pbVar8,uVar9);
    }
    if (bVar19) {
      do {
        local_40 = 0;
        uStack_38 = 0xf;
        local_50 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_50,&DAT_145cc62d0,1);
        uVar12 = uStack_38;
        uVar18 = uVar18 | 1;
        puVar13 = (undefined1 *)CONCAT71(uStack_4f,local_50);
        puVar10 = &local_50;
        if (0xf < uStack_38) {
          puVar10 = puVar13;
        }
        puVar7 = puVar1;
        if (0xf < *(ulonglong *)(param_1 + 0x48)) {
          puVar7 = (undefined8 *)*puVar1;
        }
        local_88 = uVar18;
        if ((*(size_t *)(param_1 + 0x40) == local_40) &&
           (iVar5 = _guard_xfg_dispatch_icall_nop(puVar7,puVar10,*(size_t *)(param_1 + 0x40)),
           iVar5 == 0)) {
          pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
          bVar19 = false;
          uVar9 = uStack_58;
        }
        else {
          local_60 = 0;
          uStack_58 = 0xf;
          local_70 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_70,&DAT_145cc62cc,1);
          uVar9 = uStack_58;
          uVar18 = 3;
          pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
          pbVar8 = &local_70;
          if (0xf < uStack_58) {
            pbVar8 = pbVar15;
          }
          puVar7 = puVar1;
          if (0xf < *(ulonglong *)(param_1 + 0x48)) {
            puVar7 = (undefined8 *)*puVar1;
          }
          if ((*(size_t *)(param_1 + 0x40) == local_60) &&
             (iVar5 = _guard_xfg_dispatch_icall_nop(puVar7,pbVar8,*(size_t *)(param_1 + 0x40)),
             iVar5 == 0)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
        }
        if (((uVar18 & 2) != 0) && (uVar18 = 0, 0xf < uVar9)) {
          uVar11 = uVar9 + 1;
          pbVar8 = pbVar15;
          if (0xfff < uVar11) {
            uVar11 = uVar9 + 0x28;
            pbVar8 = *(byte **)(pbVar15 + -8);
            if ((byte *)0x1f < pbVar15 + (-8 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(pbVar8,uVar11);
        }
        uVar18 = uVar18 & 0xfffffffe;
        if (0xf < uVar12) {
          uVar9 = uVar12 + 1;
          puVar10 = puVar13;
          if (0xfff < uVar9) {
            uVar9 = uVar12 + 0x28;
            puVar10 = *(undefined1 **)(puVar13 + -8);
            if ((undefined1 *)0x1f < puVar13 + (-8 - (longlong)puVar10)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(puVar10,uVar9);
        }
        lVar17 = local_80;
        if (bVar19) {
          cVar4 = FUN_143a6a9d0();
        }
        else {
          cVar4 = FUN_143a6a770(local_80);
        }
        if (cVar4 == '\0') break;
        local_60 = 0;
        uStack_58 = 0xf;
        local_70 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_70,&DAT_145cbda38,1);
        uVar12 = uStack_58;
        pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
        pbVar8 = &local_70;
        if (0xf < uStack_58) {
          pbVar8 = pbVar15;
        }
        puVar7 = puVar1;
        if (0xf < *(ulonglong *)(param_1 + 0x48)) {
          puVar7 = (undefined8 *)*puVar1;
        }
        if (*(size_t *)(param_1 + 0x40) == local_60) {
          iVar5 = _guard_xfg_dispatch_icall_nop(puVar7,pbVar8,*(size_t *)(param_1 + 0x40));
          if (iVar5 != 0) goto LAB_143a6acd1;
          FUN_143a840e0(lVar17 + 0x28);
          bVar14 = 1;
        }
        else {
LAB_143a6acd1:
          bVar14 = 0;
        }
        if (0xf < uVar12) {
          uVar9 = uVar12 + 1;
          pbVar8 = pbVar15;
          if (0xfff < uVar9) {
            uVar9 = uVar12 + 0x28;
            pbVar8 = *(byte **)(pbVar15 + -8);
            if ((byte *)0x1f < pbVar15 + (-8 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(pbVar8,uVar9);
        }
        if (bVar14 != 0) goto LAB_143a6b181;
        local_60 = 0;
        uStack_58 = 0xf;
        local_70 = bVar14;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_70,&DAT_145cc0f84,1);
        cVar4 = FUN_143a60110(lVar17,&local_70);
        if (0xf < uStack_58) {
          uVar12 = uStack_58 + 1;
          lVar2 = CONCAT71(uStack_6f,local_70);
          lVar17 = lVar2;
          if (0xfff < uVar12) {
            uVar12 = uStack_58 + 0x28;
            lVar17 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar17) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar17,uVar12);
        }
      } while (cVar4 != '\0');
    }
    else {
      local_60 = 0;
      uStack_58 = 0xf;
      local_70 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_70,&DAT_145cc6554,1);
      uVar12 = uStack_58;
      pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
      pbVar8 = &local_70;
      if (0xf < uStack_58) {
        pbVar8 = pbVar15;
      }
      puVar7 = puVar1;
      if (0xf < *(ulonglong *)(param_1 + 0x48)) {
        puVar7 = (undefined8 *)*puVar1;
      }
      if ((*(size_t *)(param_1 + 0x40) == local_60) &&
         (iVar5 = _guard_xfg_dispatch_icall_nop(puVar7,pbVar8,*(size_t *)(param_1 + 0x40)),
         iVar5 == 0)) {
        FUN_143a840e0(param_1 + 0x28);
        bVar19 = true;
      }
      else {
        bVar19 = false;
      }
      if (0xf < uVar12) {
        uVar9 = uVar12 + 1;
        pbVar8 = pbVar15;
        if (0xfff < uVar9) {
          uVar9 = uVar12 + 0x28;
          pbVar8 = *(byte **)(pbVar15 + -8);
          if ((byte *)0x1f < pbVar15 + (-8 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(pbVar8,uVar9);
      }
      if (*(int *)(param_1 + 0x28) - 2U < 3) {
        if ((bVar19) && (*(int *)(param_1 + 0x28) == 2)) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_70,puVar1);
          pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
          pbVar8 = &local_70;
          if (0xf < uStack_58) {
            pbVar8 = pbVar15;
          }
          pbVar16 = &local_70;
          if (0xf < uStack_58) {
            pbVar16 = pbVar15;
          }
          lVar17 = (longlong)(pbVar8 + local_60) - (longlong)pbVar16;
          if (pbVar8 + local_60 < pbVar16) {
            lVar17 = 0;
          }
          pbVar8 = pbVar16;
          if (lVar17 != 0) {
            do {
              if ((byte)(*pbVar8 + 0xbf) < 0x1a) {
                *pbVar8 = *pbVar8 + 0x20;
              }
              pbVar8 = pbVar8 + 1;
            } while ((longlong)pbVar8 - (longlong)pbVar16 != lVar17);
            pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
          }
          uVar12 = uStack_58;
          sVar3 = local_60;
          pbVar8 = &local_70;
          if (0xf < uStack_58) {
            pbVar8 = pbVar15;
          }
          if (local_60 == 3) {
            bVar19 = *pbVar8 < 0x69;
            if (((*pbVar8 == 0x69) && (bVar19 = pbVar8[1] < 0x6e, pbVar8[1] == 0x6e)) &&
               (bVar19 = pbVar8[2] < 0x66, pbVar8[2] == 0x66)) {
              uVar18 = 0;
            }
            else {
              uVar18 = -(uint)bVar19 | 1;
            }
            if (uVar18 != 0) goto LAB_143a6b0d1;
          }
          else {
LAB_143a6b0d1:
            pbVar8 = &local_70;
            if (0xf < uStack_58) {
              pbVar8 = pbVar15;
            }
            if ((local_60 != 8) ||
               (iVar5 = _guard_xfg_dispatch_icall_nop(pbVar8,"infinity",8), iVar5 != 0)) {
              uVar18 = 0;
              pbVar8 = &local_70;
              if (0xf < uVar12) {
                pbVar8 = pbVar15;
              }
              if (sVar3 == 3) {
                bVar19 = *pbVar8 < 0x6e;
                if (((*pbVar8 != 0x6e) || (bVar19 = pbVar8[1] < 0x61, pbVar8[1] != 0x61)) ||
                   (bVar19 = pbVar8[2] < 0x6e, pbVar8[2] != 0x6e)) {
                  uVar18 = -(uint)bVar19 | 1;
                }
                if (uVar18 == 0) goto LAB_143a6b13e;
              }
              local_40 = 0;
              uStack_38 = 0xf;
              local_50 = 0;
              local_88 = 8;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                        (&local_50,sVar3 + 0x16);
              if (uStack_38 - local_40 < 0x16) {
                local_98 = 0x16;
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                          (&local_50,0x16,0,"Invalid float number: ");
              }
              else {
                puVar13 = &local_50;
                if (0xf < uStack_38) {
                  puVar13 = (undefined1 *)CONCAT71(uStack_4f,local_50);
                }
                puVar13 = puVar13 + local_40;
                local_40 = local_40 + 0x16;
                _guard_xfg_dispatch_icall_nop(puVar13,"Invalid float number: ",0x16);
                puVar13[0x16] = 0;
              }
              pbVar8 = &local_70;
              if (0xf < uVar12) {
                pbVar8 = pbVar15;
              }
              if (uStack_38 - local_40 < sVar3) {
                local_98 = sVar3;
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                          (&local_50,sVar3,0);
                pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
                uVar12 = uStack_58;
              }
              else {
                puVar13 = &local_50;
                if (0xf < uStack_38) {
                  puVar13 = (undefined1 *)CONCAT71(uStack_4f,local_50);
                }
                puVar13 = puVar13 + local_40;
                local_40 = sVar3 + local_40;
                _guard_xfg_dispatch_icall_nop(puVar13,pbVar8,sVar3);
                puVar13[sVar3] = 0;
              }
              FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                            &local_50);
              if (0xf < uStack_38) {
                uVar9 = uStack_38 + 1;
                lVar2 = CONCAT71(uStack_4f,local_50);
                lVar17 = lVar2;
                if (0xfff < uVar9) {
                  uVar9 = uStack_38 + 0x28;
                  lVar17 = *(longlong *)(lVar2 + -8);
                  if (0x1f < (lVar2 - lVar17) - 8U) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FMemory::operator_delete(lVar17,uVar9);
              }
              if (uVar12 < 0x10) goto LAB_143a6affd;
              uVar9 = uVar12 + 1;
              pbVar8 = pbVar15;
              if (0xfff < uVar9) {
                uVar9 = uVar12 + 0x28;
                pbVar8 = *(byte **)(pbVar15 + -8);
                if ((byte *)0x1f < pbVar15 + (-8 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              goto LAB_143a6aff5;
            }
          }
LAB_143a6b13e:
          if (0xf < uVar12) {
            uVar9 = uVar12 + 1;
            pbVar8 = pbVar15;
            if (0xfff < uVar9) {
              uVar9 = uVar12 + 0x28;
              pbVar8 = *(byte **)(pbVar15 + -8);
              if ((byte *)0x1f < pbVar15 + (-8 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(pbVar8,uVar9);
          }
        }
        FUN_143a840e0(param_1 + 0x28);
        goto LAB_143a6b181;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_70,puVar1);
      sVar3 = local_60;
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = 0;
      local_88 = 4;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                (&local_50,local_60 + 0x2b);
      if (uStack_38 - local_40 < 0x2b) {
        local_98 = 0x2b;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_50,0x2b,0,"Cannot skip field value, unexpected token: ");
      }
      else {
        puVar13 = &local_50;
        if (0xf < uStack_38) {
          puVar13 = (undefined1 *)CONCAT71(uStack_4f,local_50);
        }
        puVar13 = puVar13 + local_40;
        local_40 = local_40 + 0x2b;
        _guard_xfg_dispatch_icall_nop(puVar13,"Cannot skip field value, unexpected token: ",0x2b);
        puVar13[0x2b] = 0;
      }
      uVar12 = uStack_58;
      pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
      pbVar8 = &local_70;
      if (0xf < uStack_58) {
        pbVar8 = pbVar15;
      }
      if (uStack_38 - local_40 < sVar3) {
        local_98 = sVar3;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_50,sVar3,0);
        pbVar15 = (byte *)CONCAT71(uStack_6f,local_70);
        uVar12 = uStack_58;
      }
      else {
        puVar13 = &local_50;
        if (0xf < uStack_38) {
          puVar13 = (undefined1 *)CONCAT71(uStack_4f,local_50);
        }
        puVar13 = puVar13 + local_40;
        local_40 = sVar3 + local_40;
        _guard_xfg_dispatch_icall_nop(puVar13,pbVar8,sVar3);
        puVar13[sVar3] = 0;
      }
      FUN_143a69d60(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                    &local_50);
      if (0xf < uStack_38) {
        uVar9 = uStack_38 + 1;
        lVar2 = CONCAT71(uStack_4f,local_50);
        lVar17 = lVar2;
        if (0xfff < uVar9) {
          uVar9 = uStack_38 + 0x28;
          lVar17 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar17) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar17,uVar9);
      }
      if (uVar12 < 0x10) goto LAB_143a6affd;
      uVar9 = uVar12 + 1;
      pbVar8 = pbVar15;
      if (0xfff < uVar9) {
        uVar9 = uVar12 + 0x28;
        pbVar8 = *(byte **)(pbVar15 + -8);
        if ((byte *)0x1f < pbVar15 + (-8 - (longlong)*(byte **)(pbVar15 + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_143a6aff5:
      FMemory::operator_delete(pbVar8,uVar9);
    }
LAB_143a6affd:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143a6b340 FUN_143a6b340 body=766 status=ok
// SIG undefined FUN_143a6b340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143a6b340(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auStack_1108 [32];
  ulonglong local_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  undefined1 local_10d0 [8];
  longlong *local_10c8;
  undefined1 local_10c0 [16];
  undefined1 local_10b0 [16];
  undefined1 local_10a0 [8];
  longlong *local_1098;
  undefined1 local_1090 [32];
  undefined8 local_1070;
  undefined8 local_1068;
  ulonglong local_1060;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143a6b35f;
  local_1070 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1108;
  uVar11 = 0;
  uVar4 = (**(code **)(*param_2 + 0x2d8))(param_2,param_1);
  cVar3 = FUN_143a11350(uVar4);
  if (cVar3 == '\0') {
    lVar5 = FUN_143a4f9e0(param_3);
    plVar6 = (longlong *)(**(code **)(*param_4 + 8))(param_4,lVar5);
    (**(code **)(*param_2 + 0x2b8))(param_2,local_10d0,param_1,param_3);
    uVar4 = (**(code **)(*param_2 + 0x2c0))(param_2,local_10a0,param_1,param_3);
    cVar3 = (**(code **)(*local_10c8 + 0x20))(local_10c8,local_10d0,uVar4);
    (**(code **)(*local_1098 + 0x78))(local_1098,local_10a0);
    FUN_1439fdc40(local_1090);
    while (cVar3 == '\0') {
      uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      local_10d8 = uVar4;
      FUN_143a65bc0(local_10c0,uVar4,*(undefined8 *)(lVar5 + 0x28));
      FUN_143a66250(local_10b0,uVar4,*(longlong *)(lVar5 + 0x28) + 0x98);
      puVar1 = (undefined8 *)param_5[1];
      if ((undefined8 *)param_5[2] == puVar1) {
        std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
        _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_5,puVar1,&local_10d8);
      }
      else {
        *puVar1 = uVar4;
        param_5[1] = param_5[1] + 8;
      }
      (**(code **)(*local_10c8 + 0x88))(local_10c8,local_10d0);
      uVar4 = (**(code **)(*param_2 + 0x2c0))(param_2,local_10a0,param_1,param_3);
      cVar3 = (**(code **)(*local_10c8 + 0x20))(local_10c8,local_10d0,uVar4);
      (**(code **)(*local_1098 + 0x78))(local_1098,local_10a0);
      FUN_1439fdc40(local_1090);
    }
    (**(code **)(*local_10c8 + 0x78))(local_10c8,local_10d0);
    FUN_1439fdc40(local_10c0);
    uVar11 = 1;
  }
  else {
    uVar8 = 0;
    local_10e0 = 0;
    local_10e8 = CONCAT44(local_10e8._4_4_,0xffffffff);
    lVar5 = (**(code **)(*param_2 + 0x288))(param_2,param_1,param_3,10);
    uVar9 = uVar8;
    if (0 < *(int *)(lVar5 + 8)) {
      do {
        local_10d8 = *(undefined8 *)(uVar9 + 8 + *(longlong *)(lVar5 + 0x10));
        puVar1 = (undefined8 *)param_5[1];
        if ((undefined8 *)param_5[2] == puVar1) {
          std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
          _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_5,puVar1,&local_10d8);
        }
        else {
          *puVar1 = local_10d8;
          param_5[1] = param_5[1] + 8;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar9 = uVar9 + 8;
      } while ((int)uVar7 < *(int *)(lVar5 + 8));
    }
  }
  lVar5 = FUN_143a4f9e0(param_3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  lVar5 = param_5[1];
  lVar2 = *param_5;
  lVar10 = lVar5 - lVar2 >> 3;
  if (lVar10 < 0x21) {
    if (1 < lVar10) {
      FUN_143a5de20(&local_10d8,lVar2,lVar5,uVar4);
    }
  }
  else {
    FUN_143a5c590(&local_1068,lVar10 - (lVar5 - lVar2 >> 4));
    local_10e8 = local_1060;
    local_10e0 = uVar4;
    std::_Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>
              (lVar2,lVar5,lVar10,local_1068);
    if (0x200 < local_1060) {
      FMemory::operator_delete(local_1068);
    }
  }
  return uVar11;
}



// FUNCTION 143a6b640 FUN_143a6b640 body=86 status=ok
// SIG undefined FUN_143a6b640(void)

undefined8 FUN_143a6b640(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  
  _Buf1 = (undefined8 *)(param_1 + 0x30);
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    _Buf1 = (undefined8 *)*_Buf1;
  }
  if (*(size_t *)(param_1 + 0x40) == param_2[2]) {
    iVar1 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,*(size_t *)(param_1 + 0x40));
    if (iVar1 == 0) {
      FUN_143a840e0(param_1 + 0x28);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143a6b6a0 FUN_143a6b6a0 body=347 status=ok
// SIG undefined FUN_143a6b6a0(void)

void FUN_143a6b6a0(longlong param_1,void *param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  undefined8 local_38 [2];
  
  if ((*(char *)(param_1 + 0x1d) == '\0') && (param_3 != 0)) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
      cVar5 = '\0';
      if (*(int *)(param_1 + 0x20) != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar4 = *(int *)(param_1 + 0x20) * 2;
        if (iVar2 < iVar4) {
          do {
            _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),0x20,(longlong)iVar2);
            iVar4 = iVar4 - *(int *)(param_1 + 0x18);
            cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                              (*(longlong **)(param_1 + 8),local_38,param_1 + 0x18);
            cVar5 = cVar1 == '\0';
            *(char *)(param_1 + 0x1d) = cVar5;
            if (cVar1 == '\0') goto LAB_143a6b76a;
            *(undefined8 *)(param_1 + 0x10) = local_38[0];
            iVar2 = *(int *)(param_1 + 0x18);
          } while (iVar2 < iVar4);
        }
        _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),0x20,(longlong)iVar4);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)iVar4;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar4;
        cVar5 = *(char *)(param_1 + 0x1d);
      }
LAB_143a6b76a:
      if (cVar5 != '\0') {
        return;
      }
    }
    uVar3 = (ulonglong)*(int *)(param_1 + 0x18);
    if (uVar3 < param_3) {
      do {
        if (0 < (int)uVar3) {
          _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),param_2,(longlong)(int)uVar3);
          param_2 = (void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x18));
          param_3 = param_3 - (longlong)*(int *)(param_1 + 0x18);
        }
        local_38[0] = 0;
        cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                          (*(longlong **)(param_1 + 8),local_38,param_1 + 0x18);
        *(bool *)(param_1 + 0x1d) = cVar5 == '\0';
        if (cVar5 == '\0') {
          return;
        }
        *(undefined8 *)(param_1 + 0x10) = local_38[0];
        uVar3 = (ulonglong)*(int *)(param_1 + 0x18);
      } while (uVar3 < param_3);
    }
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),param_2,param_3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (int)param_3;
  }
  return;
}



// FUNCTION 143a6b800 _Buyheadnode body=55 status=ok
// SIG undefined _Buyheadnode(void)

void std::
     _Tree_comp_alloc<std::_Tmap_traits<unsigned_short,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>_>,0>_>
     ::_Buyheadnode(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x30);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 143a6b840 _Freenode<std::allocator<std::_Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>_>_> body=105 status=ok
// SIG undefined _Freenode<std::allocator<std::_Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>_>_>(void)

void std::
     _Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>
     ::
     _Freenode<std::allocator<std::_Tree_node<std::pair<UStruct_*_const,std::vector<UFunction_*,std::allocator<UFunction_*>_>_>,void_*>_>_>
               (undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_2 + 0x38) - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  FMemory::operator_delete(param_2,0x40);
  return;
}



// FUNCTION 143a6b8b0 _Erase body=85 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tmap_traits<int,ChromaSDK::AnimationBase_*,std::less<int>,std::allocator<std::pair<int_const_,ChromaSDK::AnimationBase_*>_>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2,0x30);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a6b910 FUN_143a6b910 body=182 status=ok
// SIG undefined FUN_143a6b910(void)

void FUN_143a6b910(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_143a6b910(param_1,param_2[2]);
    lVar2 = param_2[5];
    plVar3 = (longlong *)*param_2;
    if (lVar2 != 0) {
      uVar5 = param_2[7] - lVar2 & 0xfffffffffffffff8;
      lVar4 = lVar2;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar2 + -8);
        uVar5 = uVar5 + 0x27;
        if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar5);
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    FMemory::operator_delete(param_2,0x40);
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
    param_2 = plVar3;
  } while( true );
}



// FUNCTION 143a6b9d0 FUN_143a6b9d0 body=140 status=ok
// SIG undefined FUN_143a6b9d0(void)

void FUN_143a6b9d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  lVar3 = lVar1;
  plVar4 = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      std::
      _Tree<std::_Tmap_traits<int,ChromaSDK::AnimationBase_*,std::less<int>,std::allocator<std::pair<int_const_,ChromaSDK::AnimationBase_*>_>,0>_>
      ::_Erase(param_1,plVar4[2],param_3,param_4,uVar5);
      plVar2 = (longlong *)*plVar4;
      FMemory::operator_delete(plVar4,0x30);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}



// FUNCTION 143a6ba60 FUN_143a6ba60 body=424 status=ok
// SIG undefined FUN_143a6ba60(void)

undefined8 *
FUN_143a6ba60(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar2 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    FUN_143a6b910(param_1,plVar2[1],param_3,param_4,0xfffffffffffffffe);
    *(longlong **)(*param_1 + 8) = plVar2;
    *(longlong **)*param_1 = plVar2;
    *(longlong **)(*param_1 + 0x10) = plVar2;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    while (param_3 != param_4) {
      plVar2 = (longlong *)param_3[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar9 = plVar2;
        plVar4 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar9 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar5 = (longlong *)param_3[1];
        plVar4 = param_3;
        while ((plVar9 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x19);
          plVar5 = (longlong *)plVar9[1];
          plVar4 = plVar9;
        }
      }
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        plVar2 = (longlong *)*plVar2;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        while (cVar1 == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar2 = (longlong *)param_3[1];
        while ((plVar4 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          param_3 = plVar4;
        }
      }
      lVar6 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Extract(param_1);
      lVar3 = *(longlong *)(lVar6 + 0x28);
      if (lVar3 != 0) {
        uVar8 = *(longlong *)(lVar6 + 0x38) - lVar3 & 0xfffffffffffffff8;
        lVar7 = lVar3;
        if (0xfff < uVar8) {
          uVar8 = uVar8 + 0x27;
          lVar7 = *(longlong *)(lVar3 + -8);
          if (0x1f < (lVar3 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar8);
        *(undefined8 *)(lVar6 + 0x28) = 0;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined8 *)(lVar6 + 0x38) = 0;
      }
      FMemory::operator_delete(lVar6,0x40);
      param_3 = plVar9;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a6bc10 FUN_143a6bc10 body=70 status=ok
// SIG undefined FUN_143a6bc10(void)

longlong FUN_143a6bc10(longlong param_1)

{
  if (*(char *)(param_1 + 0x42) == '\0') {
    param_1 = param_1 - *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x28);
  }
  else if (*(longlong *)(param_1 + 0x60) == 0) {
    param_1 = param_1 - *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
  }
  else {
    param_1 = param_1 - *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x50);
  }
  return param_1 / 0x98;
}



// FUNCTION 143a6bc60 FUN_143a6bc60 body=59 status=ok
// SIG undefined FUN_143a6bc60(void)

void FUN_143a6bc60(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6fcb0(&DAT_146ba3590);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3590);
  return;
}



// FUNCTION 143a6bca0 FUN_143a6bca0 body=59 status=ok
// SIG undefined FUN_143a6bca0(void)

void FUN_143a6bca0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6fd80(&DAT_146ba3610);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3610);
  return;
}



// FUNCTION 143a6bce0 FUN_143a6bce0 body=59 status=ok
// SIG undefined FUN_143a6bce0(void)

void FUN_143a6bce0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a70450(&DAT_146ba3b50);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3b50);
  return;
}



// FUNCTION 143a6bd20 FUN_143a6bd20 body=59 status=ok
// SIG undefined FUN_143a6bd20(void)

void FUN_143a6bd20(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a702a0(&DAT_146ba3a70);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3a70);
  return;
}



// FUNCTION 143a6bd60 FUN_143a6bd60 body=140 status=ok
// SIG undefined FUN_143a6bd60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6bd60(void)

{
  undefined8 in_R9;
  
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc",in_R9
                ,0xfffffffffffffffe);
  _DAT_146ba3728 = google::protobuf::UninterpretedOption_NamePart::vftable;
  _DAT_146ba3730 = 0;
  _DAT_146ba3738 = 0;
  if (DAT_146832568 != 0) {
    FUN_1439f44f0(&DAT_146832568);
  }
  _DAT_146ba3740 = &DAT_146ba2f50;
  DAT_146ba3748 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3728);
  return;
}



// FUNCTION 143a6bdf0 FUN_143a6bdf0 body=59 status=ok
// SIG undefined FUN_143a6bdf0(void)

void FUN_143a6bdf0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a705a0(&DAT_146ba3c40);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3c40);
  return;
}



// FUNCTION 143a6be30 FUN_143a6be30 body=59 status=ok
// SIG undefined FUN_143a6be30(void)

void FUN_143a6be30(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a70520(&DAT_146ba3bd0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3bd0);
  return;
}



// FUNCTION 143a6be70 FUN_143a6be70 body=141 status=ok
// SIG undefined FUN_143a6be70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6be70(void)

{
  undefined8 in_R9;
  
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc",in_R9
                ,0xfffffffffffffffe);
  _DAT_146ba3ba0 = google::protobuf::SourceCodeInfo::vftable;
  _DAT_146ba3ba8 = 0;
  _DAT_146ba3bb0 = 0;
  _DAT_146ba3bb8 = 0;
  _DAT_146ba3bc0 = 0;
  _DAT_146ba3bc8 = 0;
  if (DAT_1468326d0 != 0) {
    FUN_1439f44f0(&DAT_1468326d0);
  }
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3ba0);
  return;
}



// FUNCTION 143a6bf00 FUN_143a6bf00 body=59 status=ok
// SIG undefined FUN_143a6bf00(void)

void FUN_143a6bf00(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a70150(&DAT_146ba39a0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba39a0);
  return;
}



// FUNCTION 143a6bf40 FUN_143a6bf40 body=141 status=ok
// SIG undefined FUN_143a6bf40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6bf40(void)

{
  undefined8 in_R9;
  
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc",in_R9
                ,0xfffffffffffffffe);
  _DAT_146ba3968 = google::protobuf::GeneratedCodeInfo::vftable;
  _DAT_146ba3970 = 0;
  _DAT_146ba3978 = 0;
  _DAT_146ba3980 = 0;
  _DAT_146ba3988 = 0;
  _DAT_146ba3990 = 0;
  if (DAT_146832470 != 0) {
    FUN_1439f44f0(&DAT_146832470);
  }
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3968);
  return;
}



// FUNCTION 143a6bfd0 FUN_143a6bfd0 body=607 status=ok
// SIG undefined FUN_143a6bfd0(void)

void FUN_143a6bfd0(void)

{
  if (DAT_146832748 != 0) {
    FUN_1439f44f0(&DAT_146832748);
  }
  if (DAT_1468327a0 != 0) {
    FUN_1439f44f0(&DAT_1468327a0);
  }
  if (DAT_146832580 != 0) {
    FUN_1439f44f0(&DAT_146832580);
  }
  if (DAT_146832488 != 0) {
    FUN_1439f44f0(&DAT_146832488);
  }
  if (DAT_146832760 != 0) {
    FUN_1439f44f0(&DAT_146832760);
  }
  if (DAT_1468325e0 != 0) {
    FUN_1439f44f0(&DAT_1468325e0);
  }
  if (DAT_1468325f8 != 0) {
    FUN_1439f44f0(&DAT_1468325f8);
  }
  if (DAT_146832688 != 0) {
    FUN_1439f44f0(&DAT_146832688);
  }
  if (DAT_146832520 != 0) {
    FUN_1439f44f0(&DAT_146832520);
  }
  if (DAT_146832720 != 0) {
    FUN_1439f44f0(&DAT_146832720);
  }
  if (DAT_1468325b0 != 0) {
    FUN_1439f44f0(&DAT_1468325b0);
  }
  if (DAT_146832700 != 0) {
    FUN_1439f44f0(&DAT_146832700);
  }
  if (DAT_146832658 != 0) {
    FUN_1439f44f0(&DAT_146832658);
  }
  if (DAT_146832628 != 0) {
    FUN_1439f44f0(&DAT_146832628);
  }
  if (DAT_146832640 != 0) {
    FUN_1439f44f0(&DAT_146832640);
  }
  if (DAT_146832610 != 0) {
    FUN_1439f44f0(&DAT_146832610);
  }
  if (DAT_1468326a0 != 0) {
    FUN_1439f44f0(&DAT_1468326a0);
  }
  if (DAT_146832598 != 0) {
    FUN_1439f44f0(&DAT_146832598);
  }
  if (DAT_1468325c8 != 0) {
    FUN_1439f44f0(&DAT_1468325c8);
  }
  if (DAT_1468326b8 != 0) {
    FUN_1439f44f0(&DAT_1468326b8);
  }
  if (DAT_146832670 != 0) {
    FUN_1439f44f0(&DAT_146832670);
  }
  if (DAT_146832568 != 0) {
    FUN_1439f44f0(&DAT_146832568);
  }
  if (DAT_1468326e8 != 0) {
    FUN_1439f44f0(&DAT_1468326e8);
  }
  if (DAT_146832550 != 0) {
    FUN_1439f44f0(&DAT_146832550);
  }
  if (DAT_1468326d0 != 0) {
    FUN_1439f44f0(&DAT_1468326d0);
  }
  if (DAT_146832538 != 0) {
    FUN_1439f44f0(&DAT_146832538);
  }
  if (DAT_146832470 != 0) {
    FUN_1439f44f0(&DAT_146832470);
    return;
  }
  return;
}



// FUNCTION 143a6c250 FUN_143a6c250 body=141 status=ok
// SIG undefined FUN_143a6c250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c250(void)

{
  undefined8 in_R9;
  
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc",in_R9
                ,0xfffffffffffffffe);
  _DAT_146ba3888 = google::protobuf::FileDescriptorSet::vftable;
  _DAT_146ba3890 = 0;
  _DAT_146ba3898 = 0;
  _DAT_146ba38a0 = 0;
  _DAT_146ba38a8 = 0;
  _DAT_146ba38b0 = 0;
  if (DAT_146832748 != 0) {
    FUN_1439f44f0(&DAT_146832748);
  }
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3888);
  return;
}



// FUNCTION 143a6c2e0 FUN_143a6c2e0 body=88 status=ok
// SIG undefined FUN_143a6c2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c2e0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6ff50(&DAT_146ba37b0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba37b0);
  _DAT_146ba3878 = &DAT_146ba38c0;
  _DAT_146ba3880 = &DAT_146ba3ba0;
  return;
}



// FUNCTION 143a6c340 FUN_143a6c340 body=150 status=ok
// SIG undefined FUN_143a6c340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c340(void)

{
  undefined8 in_R9;
  
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc",in_R9
                ,0xfffffffffffffffe);
  _DAT_146ba34b8 = google::protobuf::DescriptorProto_ExtensionRange::vftable;
  _DAT_146ba34c0 = 0;
  _DAT_146ba34c8 = 0;
  if (DAT_146832580 != 0) {
    FUN_1439f44f0(&DAT_146832580);
  }
  _DAT_146ba34d0 = (undefined *)0x0;
  _DAT_146ba34d8 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba34b8);
  _DAT_146ba34d0 = &DAT_146ba3660;
  return;
}



// FUNCTION 143a6c3e0 FUN_143a6c3e0 body=84 status=ok
// SIG undefined FUN_143a6c3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c3e0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  _DAT_146ba34e0 = google::protobuf::DescriptorProto_ReservedRange::vftable;
  _DAT_146ba34e8 = 0;
  _DAT_146ba34f0 = 0;
  _DAT_146ba34f8 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba34e0);
  return;
}



// FUNCTION 143a6c440 FUN_143a6c440 body=74 status=ok
// SIG undefined FUN_143a6c440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c440(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6fad0(&DAT_146ba33d0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba33d0);
  _DAT_146ba34b0 = &DAT_146ba39e0;
  return;
}



// FUNCTION 143a6c490 FUN_143a6c490 body=59 status=ok
// SIG undefined FUN_143a6c490(void)

void FUN_143a6c490(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6fdf0(&DAT_146ba3660);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3660);
  return;
}



// FUNCTION 143a6c4d0 FUN_143a6c4d0 body=74 status=ok
// SIG undefined FUN_143a6c4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c4d0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6fe60(&DAT_146ba36d0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba36d0);
  _DAT_146ba3710 = &DAT_146ba3750;
  return;
}



// FUNCTION 143a6c520 FUN_143a6c520 body=74 status=ok
// SIG undefined FUN_143a6c520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c520(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a70310(&DAT_146ba36a8);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba36a8);
  _DAT_146ba36c8 = &DAT_146ba3ac0;
  return;
}



// FUNCTION 143a6c570 FUN_143a6c570 body=84 status=ok
// SIG undefined FUN_143a6c570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c570(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  _DAT_146ba3570 = google::protobuf::EnumDescriptorProto_EnumReservedRange::vftable;
  _DAT_146ba3578 = 0;
  _DAT_146ba3580 = 0;
  _DAT_146ba3588 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3570);
  return;
}



// FUNCTION 143a6c5d0 FUN_143a6c5d0 body=74 status=ok
// SIG undefined FUN_143a6c5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c5d0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6fc20(&DAT_146ba3500);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3500);
  _DAT_146ba3568 = &DAT_146ba3590;
  return;
}



// FUNCTION 143a6c620 FUN_143a6c620 body=163 status=ok
// SIG undefined FUN_143a6c620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c620(void)

{
  undefined8 in_R9;
  
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc",in_R9
                ,0xfffffffffffffffe);
  _DAT_146ba35e0 = google::protobuf::EnumValueDescriptorProto::vftable;
  _DAT_146ba35e8 = 0;
  _DAT_146ba35f0 = 0;
  if (DAT_1468325b0 != 0) {
    FUN_1439f44f0(&DAT_1468325b0);
  }
  _DAT_146ba35f8 = &DAT_146ba2f50;
  _DAT_146ba3600 = (undefined *)0x0;
  _DAT_146ba3608 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba35e0);
  _DAT_146ba3600 = &DAT_146ba3610;
  return;
}



// FUNCTION 143a6c6d0 FUN_143a6c6d0 body=74 status=ok
// SIG undefined FUN_143a6c6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c6d0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a703e0(&DAT_146ba3b10);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3b10);
  _DAT_146ba3b48 = &DAT_146ba3b50;
  return;
}



// FUNCTION 143a6c720 FUN_143a6c720 body=74 status=ok
// SIG undefined FUN_143a6c720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c720(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a70230(&DAT_146ba3a30);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3a30);
  _DAT_146ba3a60 = &DAT_146ba3a70;
  return;
}



// FUNCTION 143a6c770 FUN_143a6c770 body=140 status=ok
// SIG undefined FUN_143a6c770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a6c770(void)

{
  undefined8 in_R9;
  
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc",in_R9
                ,0xfffffffffffffffe);
  _DAT_146ba38c0 = google::protobuf::FileOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop(&DAT_146ba38c8);
  _DAT_146ba38e0 = 0;
  _DAT_146ba38e8 = 0;
  _DAT_146ba38f0 = 0;
  _DAT_146ba38f8 = 0;
  _DAT_146ba3900 = 0;
  FUN_143a82240(&DAT_146ba38c0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba38c0);
  return;
}



// FUNCTION 143a6c800 FUN_143a6c800 body=59 status=ok
// SIG undefined FUN_143a6c800(void)

void FUN_143a6c800(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a701c0(&DAT_146ba39e0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba39e0);
  return;
}



// FUNCTION 143a6c840 FUN_143a6c840 body=59 status=ok
// SIG undefined FUN_143a6c840(void)

void FUN_143a6c840(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a6fee0(&DAT_146ba3750);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3750);
  return;
}



// FUNCTION 143a6c880 FUN_143a6c880 body=59 status=ok
// SIG undefined FUN_143a6c880(void)

void FUN_143a6c880(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"c:\\dev\\protobuf\\src\\google\\protobuf\\descriptor.pb.cc");
  FUN_143a70370(&DAT_146ba3ac0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_146ba3ac0);
  return;
}



// FUNCTION 143a6c8c0 FUN_143a6c8c0 body=102 status=ok
// SIG undefined FUN_143a6c8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a6c8c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  iVar2 = *(int *)(param_1 + 8) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      cVar1 = FUN_143a78e70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + lVar3 * 8));
      if (cVar1 == '\0') {
        return 0;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return 1;
}



// FUNCTION 143a6c930 FUN_143a6c930 body=245 status=ok
// SIG undefined FUN_143a6c930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a6c930(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar5 = *(int *)(param_1 + 8) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + lVar7 * 8);
      iVar5 = *(int *)(lVar1 + 0x20) + -1;
      lVar6 = (longlong)iVar5;
      if (-1 < iVar5) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 8 + lVar6 * 8);
          if ((*(uint *)(lVar2 + 0x10) >> 1 & 1) != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x20);
            cVar4 = FUN_143a54850(lVar2 + 8);
            if (cVar4 == '\0') {
              return 0;
            }
            cVar4 = FUN_143a6cc80(lVar2 + 0x30);
            if (cVar4 == '\0') {
              return 0;
            }
          }
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      if ((*(uint *)(lVar1 + 0x10) >> 1 & 1) != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x68);
        cVar4 = FUN_143a54850(lVar1 + 8);
        if ((cVar4 == '\0') || (cVar4 = FUN_143a6cc80(lVar1 + 0x30), cVar4 == '\0')) {
          return 0;
        }
      }
      bVar3 = 0 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar3);
  }
  return 1;
}



// FUNCTION 143a6ca30 FUN_143a6ca30 body=149 status=ok
// SIG undefined FUN_143a6ca30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a6ca30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  iVar4 = *(int *)(param_1 + 8) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + lVar5 * 8);
      if ((*(uint *)(lVar1 + 0x10) >> 5 & 1) != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x40);
        cVar3 = FUN_143a54850(lVar1 + 8);
        if ((cVar3 == '\0') || (cVar3 = FUN_143a6cc80(lVar1 + 0x30), cVar3 == '\0')) {
          return 0;
        }
      }
      bVar2 = 0 < lVar5;
      lVar5 = lVar5 + -1;
    } while (bVar2);
  }
  return 1;
}



// FUNCTION 143a6cad0 FUN_143a6cad0 body=425 status=ok
// SIG undefined FUN_143a6cad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a6cad0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  iVar6 = *(int *)(param_1 + 8) + -1;
  lVar9 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + lVar9 * 8);
      iVar6 = *(int *)(lVar1 + 0x38) + -1;
      lVar7 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          cVar5 = FUN_143a78e70(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 8 + lVar7 * 8));
          if (cVar5 == '\0') {
            return 0;
          }
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      cVar5 = FUN_143a6c930(lVar1 + 0x48);
      if (cVar5 == '\0') {
        return 0;
      }
      iVar6 = *(int *)(lVar1 + 0x68) + -1;
      lVar7 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + 8 + lVar7 * 8);
          iVar6 = *(int *)(lVar2 + 0x20) + -1;
          lVar8 = (longlong)iVar6;
          if (-1 < iVar6) {
            do {
              lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 8 + lVar8 * 8);
              if ((*(uint *)(lVar3 + 0x10) >> 3 & 1) != 0) {
                lVar3 = *(longlong *)(lVar3 + 0x30);
                cVar5 = FUN_143a54850(lVar3 + 8);
                if (cVar5 == '\0') {
                  return 0;
                }
                cVar5 = FUN_143a6cc80(lVar3 + 0x30);
                if (cVar5 == '\0') {
                  return 0;
                }
              }
              lVar8 = lVar8 + -1;
            } while (-1 < lVar8);
          }
          if ((*(uint *)(lVar2 + 0x10) >> 1 & 1) != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x38);
            cVar5 = FUN_143a54850(lVar2 + 8);
            if (cVar5 == '\0') {
              return 0;
            }
            cVar5 = FUN_143a6cc80(lVar2 + 0x30);
            if (cVar5 == '\0') {
              return 0;
            }
          }
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      cVar5 = FUN_143a6ca30(lVar1 + 0x78);
      if (cVar5 == '\0') {
        return 0;
      }
      if ((*(uint *)(lVar1 + 0x10) >> 3 & 1) != 0) {
        lVar1 = *(longlong *)(lVar1 + 200);
        cVar5 = FUN_143a54850(lVar1 + 8);
        if (cVar5 == '\0') {
          return 0;
        }
        cVar5 = FUN_143a6cc80(lVar1 + 0x30);
        if (cVar5 == '\0') {
          return 0;
        }
      }
      bVar4 = 0 < lVar9;
      lVar9 = lVar9 + -1;
    } while (bVar4);
  }
  return 1;
}



// FUNCTION 143a6cc80 FUN_143a6cc80 body=154 status=ok
// SIG undefined FUN_143a6cc80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a6cc80(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar2 = *(int *)(param_1 + 8) - 1;
  uVar3 = (ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)(int)uVar2 * 8);
    lVar5 = (longlong)(int)uVar2;
    do {
      uVar2 = *(int *)(*plVar6 + 0x20) - 1;
      uVar3 = (ulonglong)uVar2;
      if (-1 < (int)uVar2) {
        uVar3 = (ulonglong)(int)uVar2;
        plVar4 = (longlong *)(*(longlong *)(*plVar6 + 0x28) + (uVar3 + 1) * 8);
        do {
          if (((byte)*(undefined4 *)(*plVar4 + 0x10) & 3) != 3) {
            return uVar3 & 0xffffffffffffff00;
          }
          plVar4 = plVar4 + -1;
          uVar3 = uVar3 - 1;
        } while (-1 < (longlong)uVar3);
      }
      plVar6 = plVar6 + -1;
      bVar1 = 0 < lVar5;
      lVar5 = lVar5 + -1;
    } while (bVar1);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 143a6cd20 FUN_143a6cd20 body=61 status=ok
// SIG undefined FUN_143a6cd20(void)

void FUN_143a6cd20(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0xe8);
    if (lVar1 != 0) {
      FUN_143a6fad0(lVar1);
    }
    return;
  }
  FUN_143a6e2a0();
  return;
}



// FUNCTION 143a6cd60 FUN_143a6cd60 body=178 status=ok
// SIG undefined FUN_143a6cd60(void)

undefined8 *
FUN_143a6cd60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x28);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a6fbc0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::DescriptorProto_ExtensionRange::RTTI_Type_Descriptor,
                  0x28,param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x28);
  *puVar2 = google::protobuf::DescriptorProto_ExtensionRange::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  if (DAT_146832580 != 0) {
    FUN_1439f44f0(&DAT_146832580);
  }
  puVar2[3] = 0;
  puVar2[4] = 0;
  return puVar2;
}



// FUNCTION 143a6ce20 FUN_143a6ce20 body=136 status=ok
// SIG undefined FUN_143a6ce20(void)

void FUN_143a6ce20(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,&google::protobuf::DescriptorProto_ReservedRange::RTTI_Type_Descriptor,
                    0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efd10(param_1,0x20);
    *puVar1 = google::protobuf::DescriptorProto_ReservedRange::vftable;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return;
  }
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = google::protobuf::DescriptorProto_ReservedRange::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return;
  }
  return;
}



// FUNCTION 143a6ceb0 FUN_143a6ceb0 body=246 status=ok
// SIG undefined FUN_143a6ceb0(void)

undefined8 *
FUN_143a6ceb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x70);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_143a6fc20(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::EnumDescriptorProto::RTTI_Type_Descriptor,0x70,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x70);
  *puVar2 = google::protobuf::EnumDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  FUN_1439f18b0(puVar2 + 9,param_1);
  if (DAT_146832720 != 0) {
    FUN_1439f44f0(&DAT_146832720);
  }
  puVar2[0xc] = &DAT_146ba2f50;
  puVar2[0xd] = 0;
  return puVar2;
}



// FUNCTION 143a6cfb0 FUN_143a6cfb0 body=136 status=ok
// SIG undefined FUN_143a6cfb0(void)

void FUN_143a6cfb0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,&google::protobuf::EnumDescriptorProto_EnumReservedRange::
                             RTTI_Type_Descriptor,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efd10(param_1,0x20);
    *puVar1 = google::protobuf::EnumDescriptorProto_EnumReservedRange::vftable;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return;
  }
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = google::protobuf::EnumDescriptorProto_EnumReservedRange::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return;
  }
  return;
}



// FUNCTION 143a6d040 FUN_143a6d040 body=199 status=ok
// SIG undefined FUN_143a6d040(void)

undefined8 *
FUN_143a6d040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x50);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a6fcb0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::EnumOptions::RTTI_Type_Descriptor,0x50,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x50);
  *puVar2 = google::protobuf::EnumOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_146832598 != 0) {
    FUN_1439f44f0(&DAT_146832598);
  }
  *(undefined2 *)(puVar2 + 9) = 0;
  return puVar2;
}



// FUNCTION 143a6d110 FUN_143a6d110 body=188 status=ok
// SIG undefined FUN_143a6d110(void)

undefined8 *
FUN_143a6d110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x30);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a6fd20(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::EnumValueDescriptorProto::RTTI_Type_Descriptor,0x30,
                  param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x30);
  *puVar2 = google::protobuf::EnumValueDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  if (DAT_1468325b0 != 0) {
    FUN_1439f44f0(&DAT_1468325b0);
  }
  puVar2[3] = &DAT_146ba2f50;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  return puVar2;
}



// FUNCTION 143a6d1d0 FUN_143a6d1d0 body=197 status=ok
// SIG undefined FUN_143a6d1d0(void)

undefined8 *
FUN_143a6d1d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x50);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a6fd80(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::EnumValueOptions::RTTI_Type_Descriptor,0x50,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x50);
  *puVar2 = google::protobuf::EnumValueOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_1468325c8 != 0) {
    FUN_1439f44f0(&DAT_1468325c8);
  }
  *(undefined1 *)(puVar2 + 9) = 0;
  return puVar2;
}



// FUNCTION 143a6d2a0 FUN_143a6d2a0 body=194 status=ok
// SIG undefined FUN_143a6d2a0(void)

undefined8 *
FUN_143a6d2a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x48);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a6fdf0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::ExtensionRangeOptions::RTTI_Type_Descriptor,0x48,
                  param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x48);
  *puVar2 = google::protobuf::ExtensionRangeOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_1468325e0 != 0) {
    FUN_1439f44f0(&DAT_1468325e0);
  }
  return puVar2;
}



// FUNCTION 143a6d370 FUN_143a6d370 body=219 status=ok
// SIG undefined FUN_143a6d370(void)

undefined8 *
FUN_143a6d370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x58);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a6fe60(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::FieldDescriptorProto::RTTI_Type_Descriptor,0x58,param_4
                  ,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x58);
  *puVar2 = google::protobuf::FieldDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  if (DAT_1468325f8 != 0) {
    FUN_1439f44f0(&DAT_1468325f8);
  }
  puVar2[3] = &DAT_146ba2f50;
  puVar2[4] = &DAT_146ba2f50;
  puVar2[5] = &DAT_146ba2f50;
  puVar2[6] = &DAT_146ba2f50;
  puVar2[7] = &DAT_146ba2f50;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x54) = 1;
  return puVar2;
}



// FUNCTION 143a6d450 FUN_143a6d450 body=202 status=ok
// SIG undefined FUN_143a6d450(void)

undefined8 *
FUN_143a6d450(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x58);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a6fee0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::FieldOptions::RTTI_Type_Descriptor,0x58,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x58);
  *puVar2 = google::protobuf::FieldOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_146832610 != 0) {
    FUN_1439f44f0(&DAT_146832610);
  }
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  return puVar2;
}



// FUNCTION 143a6d520 thunk_FUN_143a6e140 body=5 status=ok
// SIG undefined thunk_FUN_143a6e140(void)

undefined8 *
thunk_FUN_143a6e140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0xd8);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_143a6ff50(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::FileDescriptorProto::RTTI_Type_Descriptor,0xd8,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0xd8);
  *puVar2 = google::protobuf::FileDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  FUN_1439f18b0(puVar2 + 3,param_1);
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = param_1;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = param_1;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = param_1;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(puVar2 + 0x12,param_1);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(puVar2 + 0x14,param_1);
  if (DAT_1468327a0 != 0) {
    FUN_1439f44f0(&DAT_1468327a0);
  }
  puVar2[0x16] = &DAT_146ba2f50;
  puVar2[0x17] = &DAT_146ba2f50;
  puVar2[0x18] = &DAT_146ba2f50;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  return puVar2;
}



// FUNCTION 143a6d530 FUN_143a6d530 body=181 status=ok
// SIG undefined FUN_143a6d530(void)

undefined8 *
FUN_143a6d530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x30);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70030(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::FileDescriptorSet::RTTI_Type_Descriptor,0x30,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x30);
  *puVar2 = google::protobuf::FileDescriptorSet::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (DAT_146832748 != 0) {
    FUN_1439f44f0(&DAT_146832748);
  }
  return puVar2;
}



// FUNCTION 143a6d5f0 FUN_143a6d5f0 body=182 status=ok
// SIG undefined FUN_143a6d5f0(void)

undefined8 *
FUN_143a6d5f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0xa8);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70090(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::FileOptions::RTTI_Type_Descriptor,0xa8,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0xa8);
  *puVar2 = google::protobuf::FileOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  FUN_143a82240(puVar2);
  return puVar2;
}



// FUNCTION 143a6d6b0 FUN_143a6d6b0 body=181 status=ok
// SIG undefined FUN_143a6d6b0(void)

undefined8 *
FUN_143a6d6b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x30);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a700f0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::GeneratedCodeInfo::RTTI_Type_Descriptor,0x30,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x30);
  *puVar2 = google::protobuf::GeneratedCodeInfo::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (DAT_146832470 != 0) {
    FUN_1439f44f0(&DAT_146832470);
  }
  return puVar2;
}



// FUNCTION 143a6d770 FUN_143a6d770 body=198 status=ok
// SIG undefined FUN_143a6d770(void)

undefined8 *
FUN_143a6d770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x40);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70150(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::GeneratedCodeInfo_Annotation::RTTI_Type_Descriptor,0x40
                  ,param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x40);
  *puVar2 = google::protobuf::GeneratedCodeInfo_Annotation::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(puVar2 + 3,param_1);
  if (DAT_146832538 != 0) {
    FUN_1439f44f0(&DAT_146832538);
  }
  puVar2[6] = &DAT_146ba2f50;
  puVar2[7] = 0;
  return puVar2;
}



// FUNCTION 143a6d840 FUN_143a6d840 body=198 status=ok
// SIG undefined FUN_143a6d840(void)

undefined8 *
FUN_143a6d840(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x50);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a701c0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::MessageOptions::RTTI_Type_Descriptor,0x50,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x50);
  *puVar2 = google::protobuf::MessageOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_146832640 != 0) {
    FUN_1439f44f0(&DAT_146832640);
  }
  *(undefined4 *)(puVar2 + 9) = 0;
  return puVar2;
}



// FUNCTION 143a6d910 FUN_143a6d910 body=197 status=ok
// SIG undefined FUN_143a6d910(void)

undefined8 *
FUN_143a6d910(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x40);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70230(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::MethodDescriptorProto::RTTI_Type_Descriptor,0x40,
                  param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x40);
  *puVar2 = google::protobuf::MethodDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  if (DAT_146832658 != 0) {
    FUN_1439f44f0(&DAT_146832658);
  }
  puVar2[3] = &DAT_146ba2f50;
  puVar2[4] = &DAT_146ba2f50;
  puVar2[5] = &DAT_146ba2f50;
  puVar2[6] = 0;
  *(undefined2 *)(puVar2 + 7) = 0;
  return puVar2;
}



// FUNCTION 143a6d9e0 FUN_143a6d9e0 body=199 status=ok
// SIG undefined FUN_143a6d9e0(void)

undefined8 *
FUN_143a6d9e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x50);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a702a0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::MethodOptions::RTTI_Type_Descriptor,0x50,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x50);
  *puVar2 = google::protobuf::MethodOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_146832670 != 0) {
    FUN_1439f44f0(&DAT_146832670);
  }
  puVar2[9] = 0;
  return puVar2;
}



// FUNCTION 143a6dab0 FUN_143a6dab0 body=194 status=ok
// SIG undefined FUN_143a6dab0(void)

undefined8 *
FUN_143a6dab0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x28);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_143a70310(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::OneofDescriptorProto::RTTI_Type_Descriptor,0x28,param_4
                  ,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x28);
  *puVar2 = google::protobuf::OneofDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  if (DAT_146832688 != 0) {
    FUN_1439f44f0(&DAT_146832688);
  }
  puVar2[3] = &DAT_146ba2f50;
  puVar2[4] = 0;
  return puVar2;
}



// FUNCTION 143a6db80 FUN_143a6db80 body=194 status=ok
// SIG undefined FUN_143a6db80(void)

undefined8 *
FUN_143a6db80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x48);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70370(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::OneofOptions::RTTI_Type_Descriptor,0x48,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x48);
  *puVar2 = google::protobuf::OneofOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_1468326a0 != 0) {
    FUN_1439f44f0(&DAT_1468326a0);
  }
  return puVar2;
}



// FUNCTION 143a6dc50 FUN_143a6dc50 body=221 status=ok
// SIG undefined FUN_143a6dc50(void)

undefined8 *
FUN_143a6dc50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x40);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_143a703e0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::ServiceDescriptorProto::RTTI_Type_Descriptor,0x40,
                  param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x40);
  *puVar2 = google::protobuf::ServiceDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (DAT_146832700 != 0) {
    FUN_1439f44f0(&DAT_146832700);
  }
  puVar2[6] = &DAT_146ba2f50;
  puVar2[7] = 0;
  return puVar2;
}



// FUNCTION 143a6dd30 FUN_143a6dd30 body=197 status=ok
// SIG undefined FUN_143a6dd30(void)

undefined8 *
FUN_143a6dd30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x50);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70450(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::ServiceOptions::RTTI_Type_Descriptor,0x50,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x50);
  *puVar2 = google::protobuf::ServiceOptions::vftable;
  FUN_143a51680(puVar2 + 1,param_1);
  puVar2[4] = param_1;
  puVar2[5] = 0;
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (DAT_1468326b8 != 0) {
    FUN_1439f44f0(&DAT_1468326b8);
  }
  *(undefined1 *)(puVar2 + 9) = 0;
  return puVar2;
}



// FUNCTION 143a6de00 FUN_143a6de00 body=181 status=ok
// SIG undefined FUN_143a6de00(void)

undefined8 *
FUN_143a6de00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x30);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a704c0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::SourceCodeInfo::RTTI_Type_Descriptor,0x30,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x30);
  *puVar2 = google::protobuf::SourceCodeInfo::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (DAT_1468326d0 != 0) {
    FUN_1439f44f0(&DAT_1468326d0);
  }
  return puVar2;
}



// FUNCTION 143a6dec0 FUN_143a6dec0 body=222 status=ok
// SIG undefined FUN_143a6dec0(void)

undefined8 *
FUN_143a6dec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x70);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70520(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::SourceCodeInfo_Location::RTTI_Type_Descriptor,0x70,
                  param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x70);
  *puVar2 = google::protobuf::SourceCodeInfo_Location::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(puVar2 + 3,param_1);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(puVar2 + 6,param_1);
  FUN_1439f18b0(puVar2 + 9,param_1);
  if (DAT_146832550 != 0) {
    FUN_1439f44f0(&DAT_146832550);
  }
  puVar2[0xc] = &DAT_146ba2f50;
  puVar2[0xd] = &DAT_146ba2f50;
  return puVar2;
}



// FUNCTION 143a6dfa0 FUN_143a6dfa0 body=213 status=ok
// SIG undefined FUN_143a6dfa0(void)

undefined8 *
FUN_143a6dfa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x60);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a705a0(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::UninterpretedOption::RTTI_Type_Descriptor,0x60,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x60);
  *puVar2 = google::protobuf::UninterpretedOption::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  puVar2[3] = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (DAT_1468326e8 != 0) {
    FUN_1439f44f0(&DAT_1468326e8);
  }
  puVar2[6] = &DAT_146ba2f50;
  puVar2[7] = &DAT_146ba2f50;
  puVar2[8] = &DAT_146ba2f50;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  return puVar2;
}



// FUNCTION 143a6e080 FUN_143a6e080 body=183 status=ok
// SIG undefined FUN_143a6e080(void)

undefined8 *
FUN_143a6e080(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x28);
    puVar2 = (undefined8 *)0x0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_143a70620(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::UninterpretedOption_NamePart::RTTI_Type_Descriptor,0x28
                  ,param_4,0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0x28);
  *puVar2 = google::protobuf::UninterpretedOption_NamePart::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  if (DAT_146832568 != 0) {
    FUN_1439f44f0(&DAT_146832568);
  }
  puVar2[3] = &DAT_146ba2f50;
  *(undefined1 *)(puVar2 + 4) = 0;
  return puVar2;
}



// FUNCTION 143a6e140 FUN_143a6e140 body=339 status=ok
// SIG undefined FUN_143a6e140(void)

undefined8 *
FUN_143a6e140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0xd8);
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_143a6ff50(lVar1);
    }
    return puVar2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::FileDescriptorProto::RTTI_Type_Descriptor,0xd8,param_4,
                  0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1439efd10(param_1,0xd8);
  *puVar2 = google::protobuf::FileDescriptorProto::vftable;
  puVar2[1] = param_1;
  puVar2[2] = 0;
  FUN_1439f18b0(puVar2 + 3,param_1);
  puVar2[6] = param_1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = param_1;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = param_1;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = param_1;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(puVar2 + 0x12,param_1);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(puVar2 + 0x14,param_1);
  if (DAT_1468327a0 != 0) {
    FUN_1439f44f0(&DAT_1468327a0);
  }
  puVar2[0x16] = &DAT_146ba2f50;
  puVar2[0x17] = &DAT_146ba2f50;
  puVar2[0x18] = &DAT_146ba2f50;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  return puVar2;
}



// FUNCTION 143a6e2a0 FUN_143a6e2a0 body=282 status=ok
// SIG undefined FUN_143a6e2a0(void)

undefined8 *
FUN_143a6e2a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::DescriptorProto::RTTI_Type_Descriptor,0xe8,param_4,
                  0xfffffffffffffffe);
  }
  puVar1 = (undefined8 *)FUN_1439efd10(param_1,0xe8);
  *puVar1 = google::protobuf::DescriptorProto::vftable;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = param_1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = param_1;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = param_1;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = param_1;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = param_1;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = param_1;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  FUN_1439f18b0(puVar1 + 0x18,param_1);
  if (DAT_146832760 != 0) {
    FUN_1439f44f0(&DAT_146832760);
  }
  puVar1[0x1b] = &DAT_146ba2f50;
  puVar1[0x1c] = 0;
  return puVar1;
}



// FUNCTION 143a6e3c0 FUN_143a6e3c0 body=114 status=ok
// SIG undefined FUN_143a6e3c0(void)

void FUN_143a6e3c0(int param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  for (uVar3 = param_1 * 8 | 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar3;
  uVar3 = *(uint *)(param_2 + 0x14);
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  FUN_143a76690(param_2,param_3 + 2);
  return;
}



// FUNCTION 143a6e440 FUN_143a6e440 body=389 status=ok
// SIG undefined FUN_143a6e440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a6e440(int param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  for (uVar4 = param_1 * 8 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *param_3 = (byte)uVar4 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar4;
  uVar4 = *(uint *)(param_2 + 0x2c);
  while( true ) {
    param_3 = param_3 + 1;
    bVar3 = (byte)uVar4;
    if (uVar4 < 0x80) break;
    uVar4 = uVar4 >> 7;
    *param_3 = bVar3 | 0x80;
  }
  *param_3 = bVar3;
  param_3 = param_3 + 1;
  uVar4 = *(uint *)(param_2 + 0x28);
  if ((uVar4 & 1) != 0) {
    param_3 = (byte *)FUN_141514ca0(2,*(undefined1 *)(param_2 + 0x48),param_3);
  }
  if ((uVar4 & 2) != 0) {
    param_3 = (byte *)FUN_141514ca0(3,*(undefined1 *)(param_2 + 0x49),param_3);
  }
  uVar4 = *(uint *)(param_2 + 0x38);
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_3;
        bVar3 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar3 | 0x80;
        param_3 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar1 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_3 = (byte *)FUN_143a78c00(lVar1,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  uVar2 = FUN_143a5bc10(param_2 + 8,1000,0x20000000);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_2 + 0x20) & 0xfffffffffffffffe,uVar2);
  }
  return;
}



// FUNCTION 143a6e5d0 FUN_143a6e5d0 body=357 status=ok
// SIG undefined FUN_143a6e5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a6e5d0(int param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  for (uVar4 = param_1 * 8 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *param_3 = (byte)uVar4 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar4;
  uVar4 = *(uint *)(param_2 + 0x2c);
  while( true ) {
    param_3 = param_3 + 1;
    bVar3 = (byte)uVar4;
    if (uVar4 < 0x80) break;
    uVar4 = uVar4 >> 7;
    *param_3 = bVar3 | 0x80;
  }
  *param_3 = bVar3;
  param_3 = param_3 + 1;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    param_3 = (byte *)FUN_141514ca0(1,*(undefined1 *)(param_2 + 0x48),param_3);
  }
  uVar4 = *(uint *)(param_2 + 0x38);
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_3;
        bVar3 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar3 | 0x80;
        param_3 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar1 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_3 = (byte *)FUN_143a78c00(lVar1,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  uVar2 = FUN_143a5bc10(param_2 + 8,1000,0x20000000);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_2 + 0x20) & 0xfffffffffffffffe,uVar2);
  }
  return;
}



// FUNCTION 143a6e740 FUN_143a6e740 body=404 status=ok
// SIG undefined FUN_143a6e740(void)

byte * FUN_143a6e740(int param_1,longlong param_2,byte *param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  
  for (uVar6 = param_1 * 8 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
    *param_3 = (byte)uVar6 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar6;
  uVar6 = *(uint *)(param_2 + 0x14);
  while( true ) {
    param_3 = param_3 + 1;
    bVar5 = (byte)uVar6;
    if (uVar6 < 0x80) break;
    uVar6 = uVar6 >> 7;
    *param_3 = bVar5 | 0x80;
  }
  *param_3 = bVar5;
  pbVar7 = param_3 + 1;
  iVar3 = FUN_1439f2ae0(param_2 + 0x18);
  if (0 < iVar3) {
    *pbVar7 = 10;
    param_3 = param_3 + 2;
    for (uVar6 = *(uint *)(param_2 + 0x28); 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *param_3 = (byte)uVar6 | 0x80;
      param_3 = param_3 + 1;
    }
    *param_3 = (byte)uVar6;
    pbVar7 = (byte *)FUN_141542140(param_2 + 0x18,param_3 + 1);
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *pbVar7 = 0x12;
    pbVar7 = (byte *)FUN_1439f9df0(uVar1,pbVar7 + 1);
  }
  if ((uVar6 & 2) != 0) {
    uVar4 = (ulonglong)*(int *)(param_2 + 0x38);
    *pbVar7 = 0x18;
    while( true ) {
      pbVar2 = pbVar7 + 1;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar2 = bVar5 | 0x80;
      pbVar7 = pbVar2;
    }
    *pbVar2 = bVar5;
    pbVar7 = pbVar7 + 2;
  }
  if ((uVar6 & 4) != 0) {
    uVar4 = (ulonglong)*(int *)(param_2 + 0x3c);
    *pbVar7 = 0x20;
    while( true ) {
      pbVar7 = pbVar7 + 1;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar7 = bVar5 | 0x80;
    }
    *pbVar7 = bVar5;
    pbVar7 = pbVar7 + 1;
  }
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    return pbVar7;
  }
  pbVar7 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe,pbVar7);
  return pbVar7;
}



// FUNCTION 143a6e8e0 FUN_143a6e8e0 body=319 status=ok
// SIG undefined FUN_143a6e8e0(void)

void FUN_143a6e8e0(int param_1,longlong param_2,byte *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  for (uVar5 = param_1 * 8 | 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *param_3 = (byte)uVar5 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar5;
  uVar5 = *(uint *)(param_2 + 0x14);
  while( true ) {
    param_3 = param_3 + 1;
    bVar3 = (byte)uVar5;
    if (uVar5 < 0x80) break;
    uVar5 = uVar5 >> 7;
    *param_3 = bVar3 | 0x80;
  }
  *param_3 = bVar3;
  pbVar4 = param_3 + 1;
  uVar5 = *(uint *)(param_2 + 0x10);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *pbVar4 = 10;
    pbVar4 = (byte *)FUN_1439f9df0(uVar1,param_3 + 2);
  }
  if ((uVar5 & 2) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *pbVar4 = 0x12;
    pbVar4 = (byte *)FUN_1439f9df0(uVar1,pbVar4 + 1);
  }
  if ((uVar5 & 4) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *pbVar4 = 0x1a;
    pbVar4 = (byte *)FUN_1439f9df0(uVar1,pbVar4 + 1);
  }
  if ((uVar5 & 8) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x30);
    *pbVar4 = 0x22;
    uVar6 = *(uint *)(lVar2 + 0x2c);
    while( true ) {
      pbVar4 = pbVar4 + 1;
      bVar3 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar4 = bVar3 | 0x80;
    }
    *pbVar4 = bVar3;
    pbVar4 = (byte *)FUN_143a78510(lVar2,pbVar4 + 1);
  }
  if ((uVar5 & 0x10) != 0) {
    pbVar4 = (byte *)FUN_141514ca0(5,*(undefined1 *)(param_2 + 0x38),pbVar4);
  }
  if ((uVar5 & 0x20) != 0) {
    pbVar4 = (byte *)FUN_141514ca0(6,*(undefined1 *)(param_2 + 0x39),pbVar4);
  }
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe,pbVar4);
  }
  return;
}



// FUNCTION 143a6ea20 FUN_143a6ea20 body=357 status=ok
// SIG undefined FUN_143a6ea20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a6ea20(int param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  for (uVar4 = param_1 * 8 | 2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
    *param_3 = (byte)uVar4 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar4;
  uVar4 = *(uint *)(param_2 + 0x2c);
  while( true ) {
    param_3 = param_3 + 1;
    bVar3 = (byte)uVar4;
    if (uVar4 < 0x80) break;
    uVar4 = uVar4 >> 7;
    *param_3 = bVar3 | 0x80;
  }
  *param_3 = bVar3;
  param_3 = param_3 + 1;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    param_3 = (byte *)FUN_141514ca0(0x21,*(undefined1 *)(param_2 + 0x48),param_3);
  }
  uVar4 = *(uint *)(param_2 + 0x38);
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + (longlong)(int)uVar6 * 8);
      uVar5 = 0x1f3a;
      do {
        pbVar7 = param_3;
        bVar3 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        *pbVar7 = bVar3 | 0x80;
        param_3 = pbVar7 + 1;
      } while (0x7f < uVar5);
      pbVar7[1] = (byte)uVar5;
      pbVar7 = pbVar7 + 2;
      for (uVar5 = *(uint *)(lVar1 + 0x14); 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar7 + 1;
      }
      *pbVar7 = (byte)uVar5;
      param_3 = (byte *)FUN_143a78c00(lVar1,pbVar7 + 1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  uVar2 = FUN_143a5bc10(param_2 + 8,1000,0x20000000);
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_143a1dba0(*(ulonglong *)(param_2 + 0x20) & 0xfffffffffffffffe,uVar2);
  }
  return;
}



// FUNCTION 143a6eb90 FUN_143a6eb90 body=196 status=ok
// SIG undefined FUN_143a6eb90(void)

void FUN_143a6eb90(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6cd20(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6ec60 FUN_143a6ec60 body=196 status=ok
// SIG undefined FUN_143a6ec60(void)

void FUN_143a6ec60(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6cd60(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6ed30 FUN_143a6ed30 body=196 status=ok
// SIG undefined FUN_143a6ed30(void)

void FUN_143a6ed30(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6ce20(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6ee00 FUN_143a6ee00 body=196 status=ok
// SIG undefined FUN_143a6ee00(void)

void FUN_143a6ee00(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6ceb0(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6eed0 FUN_143a6eed0 body=196 status=ok
// SIG undefined FUN_143a6eed0(void)

void FUN_143a6eed0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6cfb0(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6efa0 FUN_143a6efa0 body=196 status=ok
// SIG undefined FUN_143a6efa0(void)

void FUN_143a6efa0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6d110(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f070 FUN_143a6f070 body=196 status=ok
// SIG undefined FUN_143a6f070(void)

void FUN_143a6f070(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6d370(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f140 FUN_143a6f140 body=196 status=ok
// SIG undefined FUN_143a6f140(void)

void FUN_143a6f140(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = thunk_FUN_143a6e140(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f210 FUN_143a6f210 body=196 status=ok
// SIG undefined FUN_143a6f210(void)

void FUN_143a6f210(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6d770(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f2e0 FUN_143a6f2e0 body=196 status=ok
// SIG undefined FUN_143a6f2e0(void)

void FUN_143a6f2e0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6d910(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f3b0 FUN_143a6f3b0 body=196 status=ok
// SIG undefined FUN_143a6f3b0(void)

void FUN_143a6f3b0(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6dab0(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f480 FUN_143a6f480 body=196 status=ok
// SIG undefined FUN_143a6f480(void)

void FUN_143a6f480(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6dc50(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f550 FUN_143a6f550 body=196 status=ok
// SIG undefined FUN_143a6f550(void)

void FUN_143a6f550(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6dfa0(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f620 FUN_143a6f620 body=196 status=ok
// SIG undefined FUN_143a6f620(void)

void FUN_143a6f620(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = (longlong)param_5;
  lVar6 = (longlong)param_4;
  if (0 < lVar5) {
    lVar4 = 0;
    puVar7 = param_3;
    do {
      if (lVar6 <= lVar4) break;
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (*puVar7,*(undefined8 *)((param_2 - (longlong)param_3) + (longlong)puVar7));
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 < lVar5);
  }
  uVar1 = *param_1;
  if (lVar5 < lVar6) {
    puVar7 = (undefined8 *)(lVar5 * 8 + param_2);
    lVar6 = lVar6 - lVar5;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_3 - param_2) + (longlong)puVar7);
      uVar3 = FUN_143a6e080(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a6f6f0 FUN_143a6f6f0 body=41 status=ok
// SIG undefined FUN_143a6f6f0(void)

longlong FUN_143a6f6f0(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = FUN_143a71760();
  uVar3 = (uint)lVar2 | 1;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (ulonglong)(iVar1 * 9 + 0x49U >> 6) + lVar2;
}



// FUNCTION 143a6f720 FUN_143a6f720 body=275 status=ok
// SIG undefined FUN_143a6f720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a6f720(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar7 = 0;
  local_28 = 0;
  lVar3 = FUN_143a529b0(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
    lVar3 = lVar3 + lVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar3 = lVar3 + (ulonglong)(uVar1 * 2);
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a73ba0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar7 * 8));
      uVar7 = uVar7 + 1;
      uVar6 = (uint)lVar4 | 1;
      local_24 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> local_24 == 0; local_24 = local_24 + -1) {
        }
      }
      lVar3 = lVar3 + (ulonglong)(local_24 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar7 < uVar1);
  }
  uVar7 = *(uint *)(param_1 + 0x28);
  if ((uVar7 & 3) != 0) {
    lVar4 = lVar3 + 3;
    if ((uVar7 & 1) == 0) {
      lVar4 = lVar3;
    }
    lVar3 = lVar4;
    if ((uVar7 & 2) != 0) {
      if ((int)*(uint *)(param_1 + 0x4c) < 0) {
        uVar5 = 10;
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x4c) | 1;
        iVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar5 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
      }
      lVar3 = lVar3 + 2 + uVar5;
    }
  }
  *(uint *)(param_1 + 0x2c) = (uint)lVar3;
  uVar7 = (uint)lVar3 | 1;
  iVar2 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  return (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar3;
}



// FUNCTION 143a6f840 FUN_143a6f840 body=129 status=ok
// SIG undefined FUN_143a6f840(void)

ulonglong FUN_143a6f840(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  int local_resc;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (uVar3 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
    *param_1 = pbVar1 + 1;
  }
  else {
    uVar2 = FUN_1439f98b0();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) goto LAB_143a6f8b4;
  }
  uVar2 = FUN_1439f8500(param_1,&local_res8,uVar3);
  if (-1 < local_resc) {
    uVar2 = FUN_143a7c1c0(param_2,param_1);
    if ((char)uVar2 != '\0') {
      uVar3 = FUN_1439f84b0(param_1,local_res8);
      return uVar3;
    }
  }
LAB_143a6f8b4:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143a6f8d0 FUN_143a6f8d0 body=129 status=ok
// SIG undefined FUN_143a6f8d0(void)

ulonglong FUN_143a6f8d0(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  int local_resc;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (uVar3 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
    *param_1 = pbVar1 + 1;
  }
  else {
    uVar2 = FUN_1439f98b0();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) goto LAB_143a6f944;
  }
  uVar2 = FUN_1439f8500(param_1,&local_res8,uVar3);
  if (-1 < local_resc) {
    uVar2 = FUN_143a7ca40(param_2,param_1);
    if ((char)uVar2 != '\0') {
      uVar3 = FUN_1439f84b0(param_1,local_res8);
      return uVar3;
    }
  }
LAB_143a6f944:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143a6f960 FUN_143a6f960 body=129 status=ok
// SIG undefined FUN_143a6f960(void)

ulonglong FUN_143a6f960(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  int local_resc;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (uVar3 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
    *param_1 = pbVar1 + 1;
  }
  else {
    uVar2 = FUN_1439f98b0();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) goto LAB_143a6f9d4;
  }
  uVar2 = FUN_1439f8500(param_1,&local_res8,uVar3);
  if (-1 < local_resc) {
    uVar2 = FUN_143a7d540(param_2,param_1);
    if ((char)uVar2 != '\0') {
      uVar3 = FUN_1439f84b0(param_1,local_res8);
      return uVar3;
    }
  }
LAB_143a6f9d4:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143a6f9f0 FUN_143a6f9f0 body=129 status=ok
// SIG undefined FUN_143a6f9f0(void)

ulonglong FUN_143a6f9f0(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  int local_resc;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 < (byte *)param_1[1]) && (uVar3 = (ulonglong)*pbVar1, *pbVar1 < 0x80)) {
    *param_1 = pbVar1 + 1;
  }
  else {
    uVar2 = FUN_1439f98b0();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) goto LAB_143a6fa64;
  }
  uVar2 = FUN_1439f8500(param_1,&local_res8,uVar3);
  if (-1 < local_resc) {
    uVar2 = FUN_143a80040(param_2,param_1);
    if ((char)uVar2 != '\0') {
      uVar3 = FUN_1439f84b0(param_1,local_res8);
      return uVar3;
    }
  }
LAB_143a6fa64:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143a6fa80 FUN_143a6fa80 body=79 status=ok
// SIG undefined FUN_143a6fa80(void)

undefined1 FUN_143a6fa80(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_res8 [4];
  
  if (7 < (int)param_1[1] - (int)*param_1) {
    uVar1 = *(undefined8 *)*param_1;
    *param_1 = (longlong)((undefined8 *)*param_1 + 1);
    *param_2 = uVar1;
    return 1;
  }
  cVar2 = FUN_1439f8a80(param_1,local_res8);
  if (cVar2 == '\0') {
    return 0;
  }
  *param_2 = local_res8[0];
  return 1;
}



// FUNCTION 143a6fad0 FUN_143a6fad0 body=227 status=ok
// SIG undefined FUN_143a6fad0(void)

undefined8 * FUN_143a6fad0(undefined8 *param_1)

{
  *param_1 = google::protobuf::DescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FTextSnapshot::FTextSnapshot(param_1 + 0x18);
  if (DAT_146832760 != 0) {
    FUN_1439f44f0(&DAT_146832760);
  }
  param_1[0x1b] = &DAT_146ba2f50;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 143a6fbc0 FUN_143a6fbc0 body=85 status=ok
// SIG undefined FUN_143a6fbc0(void)

undefined8 * FUN_143a6fbc0(undefined8 *param_1)

{
  *param_1 = google::protobuf::DescriptorProto_ExtensionRange::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_146832580 != 0) {
    FUN_1439f44f0(&DAT_146832580);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 143a6fc20 FUN_143a6fc20 body=134 status=ok
// SIG undefined FUN_143a6fc20(void)

undefined8 * FUN_143a6fc20(undefined8 *param_1)

{
  *param_1 = google::protobuf::EnumDescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FTextSnapshot::FTextSnapshot(param_1 + 9);
  if (DAT_146832720 != 0) {
    FUN_1439f44f0(&DAT_146832720);
  }
  param_1[0xc] = &DAT_146ba2f50;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 143a6fcb0 FUN_143a6fcb0 body=103 status=ok
// SIG undefined FUN_143a6fcb0(void)

undefined8 * FUN_143a6fcb0(undefined8 *param_1)

{
  *param_1 = google::protobuf::EnumOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_146832598 != 0) {
    FUN_1439f44f0(&DAT_146832598);
  }
  *(undefined2 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143a6fd20 FUN_143a6fd20 body=95 status=ok
// SIG undefined FUN_143a6fd20(void)

undefined8 * FUN_143a6fd20(undefined8 *param_1)

{
  *param_1 = google::protobuf::EnumValueDescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_1468325b0 != 0) {
    FUN_1439f44f0(&DAT_1468325b0);
  }
  param_1[3] = &DAT_146ba2f50;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 143a6fd80 FUN_143a6fd80 body=101 status=ok
// SIG undefined FUN_143a6fd80(void)

undefined8 * FUN_143a6fd80(undefined8 *param_1)

{
  *param_1 = google::protobuf::EnumValueOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_1468325c8 != 0) {
    FUN_1439f44f0(&DAT_1468325c8);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143a6fdf0 FUN_143a6fdf0 body=98 status=ok
// SIG undefined FUN_143a6fdf0(void)

undefined8 * FUN_143a6fdf0(undefined8 *param_1)

{
  *param_1 = google::protobuf::ExtensionRangeOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_1468325e0 != 0) {
    FUN_1439f44f0(&DAT_1468325e0);
  }
  return param_1;
}



// FUNCTION 143a6fe60 FUN_143a6fe60 body=126 status=ok
// SIG undefined FUN_143a6fe60(void)

undefined8 * FUN_143a6fe60(undefined8 *param_1)

{
  *param_1 = google::protobuf::FieldDescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_1468325f8 != 0) {
    FUN_1439f44f0(&DAT_1468325f8);
  }
  param_1[3] = &DAT_146ba2f50;
  param_1[4] = &DAT_146ba2f50;
  param_1[5] = &DAT_146ba2f50;
  param_1[6] = &DAT_146ba2f50;
  param_1[7] = &DAT_146ba2f50;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  return param_1;
}



// FUNCTION 143a6fee0 FUN_143a6fee0 body=106 status=ok
// SIG undefined FUN_143a6fee0(void)

undefined8 * FUN_143a6fee0(undefined8 *param_1)

{
  *param_1 = google::protobuf::FieldOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_146832610 != 0) {
    FUN_1439f44f0(&DAT_146832610);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 143a6ff50 FUN_143a6ff50 body=219 status=ok
// SIG undefined FUN_143a6ff50(void)

undefined8 * FUN_143a6ff50(undefined8 *param_1)

{
  *param_1 = google::protobuf::FileDescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FTextSnapshot::FTextSnapshot(param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1439f1850(param_1 + 0x12);
  FUN_1439f1850(param_1 + 0x14);
  if (DAT_1468327a0 != 0) {
    FUN_1439f44f0(&DAT_1468327a0);
  }
  param_1[0x16] = &DAT_146ba2f50;
  param_1[0x17] = &DAT_146ba2f50;
  param_1[0x18] = &DAT_146ba2f50;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 143a70030 FUN_143a70030 body=88 status=ok
// SIG undefined FUN_143a70030(void)

undefined8 * FUN_143a70030(undefined8 *param_1)

{
  *param_1 = google::protobuf::FileDescriptorSet::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_146832748 != 0) {
    FUN_1439f44f0(&DAT_146832748);
  }
  return param_1;
}



// FUNCTION 143a70090 FUN_143a70090 body=84 status=ok
// SIG undefined FUN_143a70090(void)

undefined8 * FUN_143a70090(undefined8 *param_1)

{
  *param_1 = google::protobuf::FileOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_143a82240(param_1);
  return param_1;
}



// FUNCTION 143a700f0 FUN_143a700f0 body=88 status=ok
// SIG undefined FUN_143a700f0(void)

undefined8 * FUN_143a700f0(undefined8 *param_1)

{
  *param_1 = google::protobuf::GeneratedCodeInfo::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_146832470 != 0) {
    FUN_1439f44f0(&DAT_146832470);
  }
  return param_1;
}



// FUNCTION 143a70150 FUN_143a70150 body=102 status=ok
// SIG undefined FUN_143a70150(void)

undefined8 * FUN_143a70150(undefined8 *param_1)

{
  *param_1 = google::protobuf::GeneratedCodeInfo_Annotation::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1439f1850(param_1 + 3);
  if (DAT_146832538 != 0) {
    FUN_1439f44f0(&DAT_146832538);
  }
  param_1[6] = &DAT_146ba2f50;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 143a701c0 FUN_143a701c0 body=102 status=ok
// SIG undefined FUN_143a701c0(void)

undefined8 * FUN_143a701c0(undefined8 *param_1)

{
  *param_1 = google::protobuf::MessageOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_146832640 != 0) {
    FUN_1439f44f0(&DAT_146832640);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143a70230 FUN_143a70230 body=104 status=ok
// SIG undefined FUN_143a70230(void)

undefined8 * FUN_143a70230(undefined8 *param_1)

{
  *param_1 = google::protobuf::MethodDescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_146832658 != 0) {
    FUN_1439f44f0(&DAT_146832658);
  }
  param_1[3] = &DAT_146ba2f50;
  param_1[4] = &DAT_146ba2f50;
  param_1[5] = &DAT_146ba2f50;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 143a702a0 FUN_143a702a0 body=103 status=ok
// SIG undefined FUN_143a702a0(void)

undefined8 * FUN_143a702a0(undefined8 *param_1)

{
  *param_1 = google::protobuf::MethodOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_146832670 != 0) {
    FUN_1439f44f0(&DAT_146832670);
  }
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 143a70310 FUN_143a70310 body=96 status=ok
// SIG undefined FUN_143a70310(void)

undefined8 * FUN_143a70310(undefined8 *param_1)

{
  *param_1 = google::protobuf::OneofDescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_146832688 != 0) {
    FUN_1439f44f0(&DAT_146832688);
  }
  param_1[3] = &DAT_146ba2f50;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 143a70370 FUN_143a70370 body=98 status=ok
// SIG undefined FUN_143a70370(void)

undefined8 * FUN_143a70370(undefined8 *param_1)

{
  *param_1 = google::protobuf::OneofOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_1468326a0 != 0) {
    FUN_1439f44f0(&DAT_1468326a0);
  }
  return param_1;
}



// FUNCTION 143a703e0 FUN_143a703e0 body=112 status=ok
// SIG undefined FUN_143a703e0(void)

undefined8 * FUN_143a703e0(undefined8 *param_1)

{
  *param_1 = google::protobuf::ServiceDescriptorProto::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_146832700 != 0) {
    FUN_1439f44f0(&DAT_146832700);
  }
  param_1[6] = &DAT_146ba2f50;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 143a70450 FUN_143a70450 body=101 status=ok
// SIG undefined FUN_143a70450(void)

undefined8 * FUN_143a70450(undefined8 *param_1)

{
  *param_1 = google::protobuf::ServiceOptions::vftable;
  FAudioVirtualLoop::FAudioVirtualLoop();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (DAT_1468326b8 != 0) {
    FUN_1439f44f0(&DAT_1468326b8);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143a704c0 FUN_143a704c0 body=88 status=ok
// SIG undefined FUN_143a704c0(void)

undefined8 * FUN_143a704c0(undefined8 *param_1)

{
  *param_1 = google::protobuf::SourceCodeInfo::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_1468326d0 != 0) {
    FUN_1439f44f0(&DAT_1468326d0);
  }
  return param_1;
}



// FUNCTION 143a70520 FUN_143a70520 body=120 status=ok
// SIG undefined FUN_143a70520(void)

undefined8 * FUN_143a70520(undefined8 *param_1)

{
  *param_1 = google::protobuf::SourceCodeInfo_Location::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1439f1850(param_1 + 3);
  FUN_1439f1850(param_1 + 6);
  FTextSnapshot::FTextSnapshot(param_1 + 9);
  if (DAT_146832550 != 0) {
    FUN_1439f44f0(&DAT_146832550);
  }
  param_1[0xc] = &DAT_146ba2f50;
  param_1[0xd] = &DAT_146ba2f50;
  return param_1;
}



// FUNCTION 143a705a0 FUN_143a705a0 body=120 status=ok
// SIG undefined FUN_143a705a0(void)

undefined8 * FUN_143a705a0(undefined8 *param_1)

{
  *param_1 = google::protobuf::UninterpretedOption::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_1468326e8 != 0) {
    FUN_1439f44f0(&DAT_1468326e8);
  }
  param_1[6] = &DAT_146ba2f50;
  param_1[7] = &DAT_146ba2f50;
  param_1[8] = &DAT_146ba2f50;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 143a70620 FUN_143a70620 body=90 status=ok
// SIG undefined FUN_143a70620(void)

undefined8 * FUN_143a70620(undefined8 *param_1)

{
  *param_1 = google::protobuf::UninterpretedOption_NamePart::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_146832568 != 0) {
    FUN_1439f44f0(&DAT_146832568);
  }
  param_1[3] = &DAT_146ba2f50;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 143a70680 FUN_143a70680 body=248 status=ok
// SIG undefined FUN_143a70680(void)

void FUN_143a70680(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::FileDescriptorProto::vftable;
  FUN_141505b50(param_1 + 0x16,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_141505b50(param_1 + 0x17,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0x18,&DAT_146ba2f50);
  if (param_1 != (undefined8 *)&DAT_146ba37b0) {
    puVar1 = (undefined8 *)param_1[0x19];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x1a];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  FUN_1439f18f0(param_1 + 0x14);
  FUN_1439f18f0(param_1 + 0x12);
  FUN_143a28b10(param_1 + 0xf);
  FUN_143a28b10(param_1 + 0xc);
  FUN_143a28b10(param_1 + 9);
  FUN_143a28b10(param_1 + 6);
  thunk_FUN_1439f1360(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  return;
}



// FUNCTION 143a70780 thunk_FUN_1415008e0 body=5 status=ok
// SIG undefined thunk_FUN_1415008e0(void)

void thunk_FUN_1415008e0(void)

{
  FUN_1415008e0();
  return;
}



// FUNCTION 143a70790 FUN_143a70790 body=233 status=ok
// SIG undefined FUN_143a70790(void)

undefined8 * FUN_143a70790(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::DescriptorProto::vftable;
  FUN_141505b50(param_1 + 0x1b,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  if ((param_1 != (undefined8 *)&DAT_146ba33d0) &&
     (puVar1 = (undefined8 *)param_1[0x1c], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1439f1360(param_1 + 0x18);
  FUN_143a28b10(param_1 + 0x15);
  FUN_143a28b10(param_1 + 0x12);
  FUN_143a28b10(param_1 + 0xf);
  FUN_143a28b10(param_1 + 0xc);
  FUN_143a28b10(param_1 + 9);
  FUN_143a28b10(param_1 + 6);
  FUN_143a28b10(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 143a70880 FUN_143a70880 body=121 status=ok
// SIG undefined FUN_143a70880(void)

undefined8 * FUN_143a70880(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::DescriptorProto_ExtensionRange::vftable;
  if ((param_1 != (undefined8 *)&DAT_146ba34b8) &&
     (puVar1 = (undefined8 *)param_1[3], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143a70900 FUN_143a70900 body=88 status=ok
// SIG undefined FUN_143a70900(void)

undefined8 *
FUN_143a70900(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::DescriptorProto_ReservedRange::vftable;
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a70960 FUN_143a70960 body=168 status=ok
// SIG undefined FUN_143a70960(void)

undefined8 * FUN_143a70960(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::EnumDescriptorProto::vftable;
  FUN_141505b50(param_1 + 0xc,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  if ((param_1 != (undefined8 *)&DAT_146ba3500) &&
     (puVar1 = (undefined8 *)param_1[0xd], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1439f1360(param_1 + 9);
  FUN_143a28b10(param_1 + 6);
  FUN_143a28b10(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143a70a10 FUN_143a70a10 body=88 status=ok
// SIG undefined FUN_143a70a10(void)

undefined8 *
FUN_143a70a10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::EnumDescriptorProto_EnumReservedRange::vftable;
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a70a70 FUN_143a70a70 body=108 status=ok
// SIG undefined FUN_143a70a70(void)

undefined8 *
FUN_143a70a70(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::EnumOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a70ae0 FUN_143a70ae0 body=138 status=ok
// SIG undefined FUN_143a70ae0(void)

undefined8 * FUN_143a70ae0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::EnumValueDescriptorProto::vftable;
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  if ((param_1 != (undefined8 *)&DAT_146ba35e0) &&
     (puVar1 = (undefined8 *)param_1[4], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143a70b70 FUN_143a70b70 body=108 status=ok
// SIG undefined FUN_143a70b70(void)

undefined8 *
FUN_143a70b70(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::EnumValueOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a70be0 FUN_143a70be0 body=108 status=ok
// SIG undefined FUN_143a70be0(void)

undefined8 *
FUN_143a70be0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::ExtensionRangeOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a70c50 FUN_143a70c50 body=206 status=ok
// SIG undefined FUN_143a70c50(void)

undefined8 * FUN_143a70c50(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::FieldDescriptorProto::vftable;
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_141505b50(param_1 + 4,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 5,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 6,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 7,&DAT_146ba2f50);
  if ((param_1 != (undefined8 *)&DAT_146ba36d0) &&
     (puVar1 = (undefined8 *)param_1[8], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143a70d20 FUN_143a70d20 body=108 status=ok
// SIG undefined FUN_143a70d20(void)

undefined8 *
FUN_143a70d20(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::FieldOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a70d90 FUN_143a70d90 body=283 status=ok
// SIG undefined FUN_143a70d90(void)

undefined8 * FUN_143a70d90(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::FileDescriptorProto::vftable;
  FUN_141505b50(param_1 + 0x16,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_141505b50(param_1 + 0x17,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0x18,&DAT_146ba2f50);
  if (param_1 != (undefined8 *)&DAT_146ba37b0) {
    puVar1 = (undefined8 *)param_1[0x19];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = (undefined8 *)param_1[0x1a];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  FUN_1439f18f0(param_1 + 0x14);
  FUN_1439f18f0(param_1 + 0x12);
  FUN_143a28b10(param_1 + 0xf);
  FUN_143a28b10(param_1 + 0xc);
  FUN_143a28b10(param_1 + 9);
  FUN_143a28b10(param_1 + 6);
  thunk_FUN_1439f1360(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 143a70eb0 FUN_143a70eb0 body=98 status=ok
// SIG undefined FUN_143a70eb0(void)

undefined8 *
FUN_143a70eb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::FileDescriptorSet::vftable;
  FUN_143a28b10(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a70f20 FUN_143a70f20 body=287 status=ok
// SIG undefined FUN_143a70f20(void)

undefined8 * FUN_143a70f20(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = google::protobuf::FileOptions::vftable;
  FUN_141505b50(param_1 + 9,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_141505b50(param_1 + 10,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0xb,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0xc,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0xd,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0xe,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0xf,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0x10,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0x11,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 0x12,&DAT_146ba2f50);
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 143a71040 FUN_143a71040 body=98 status=ok
// SIG undefined FUN_143a71040(void)

undefined8 *
FUN_143a71040(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::GeneratedCodeInfo::vftable;
  FUN_143a28b10(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a710b0 FUN_143a710b0 body=115 status=ok
// SIG undefined FUN_143a710b0(void)

undefined8 * FUN_143a710b0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = google::protobuf::GeneratedCodeInfo_Annotation::vftable;
  FUN_141505b50(param_1 + 6,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_1439f18f0(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143a71130 FUN_143a71130 body=108 status=ok
// SIG undefined FUN_143a71130(void)

undefined8 *
FUN_143a71130(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::MessageOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a711a0 FUN_143a711a0 body=172 status=ok
// SIG undefined FUN_143a711a0(void)

undefined8 * FUN_143a711a0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::MethodDescriptorProto::vftable;
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_141505b50(param_1 + 4,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 5,&DAT_146ba2f50);
  if ((param_1 != (undefined8 *)&DAT_146ba3a30) &&
     (puVar1 = (undefined8 *)param_1[6], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143a71250 FUN_143a71250 body=108 status=ok
// SIG undefined FUN_143a71250(void)

undefined8 *
FUN_143a71250(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::MethodOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a712c0 FUN_143a712c0 body=138 status=ok
// SIG undefined FUN_143a712c0(void)

undefined8 * FUN_143a712c0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::OneofDescriptorProto::vftable;
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  if ((param_1 != (undefined8 *)&DAT_146ba36a8) &&
     (puVar1 = (undefined8 *)param_1[4], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143a71350 FUN_143a71350 body=108 status=ok
// SIG undefined FUN_143a71350(void)

undefined8 *
FUN_143a71350(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::OneofOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a713c0 FUN_143a713c0 body=148 status=ok
// SIG undefined FUN_143a713c0(void)

undefined8 * FUN_143a713c0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = google::protobuf::ServiceDescriptorProto::vftable;
  FUN_141505b50(param_1 + 6,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  if ((param_1 != (undefined8 *)&DAT_146ba3b10) &&
     (puVar1 = (undefined8 *)param_1[7], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a28b10(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143a71460 FUN_143a71460 body=108 status=ok
// SIG undefined FUN_143a71460(void)

undefined8 *
FUN_143a71460(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::ServiceOptions::vftable;
  FUN_143a28b10(param_1 + 6);
  FUN_1415008e0(param_1 + 4);
  FUN_143a516b0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a714d0 FUN_143a714d0 body=98 status=ok
// SIG undefined FUN_143a714d0(void)

undefined8 *
FUN_143a714d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = google::protobuf::SourceCodeInfo::vftable;
  FUN_143a28b10(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 143a71540 FUN_143a71540 body=152 status=ok
// SIG undefined FUN_143a71540(void)

undefined8 * FUN_143a71540(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = google::protobuf::SourceCodeInfo_Location::vftable;
  FUN_141505b50(param_1 + 0xc,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_141505b50(param_1 + 0xd,&DAT_146ba2f50);
  thunk_FUN_1439f1360(param_1 + 9);
  FUN_1439f18f0(param_1 + 6);
  FUN_1439f18f0(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143a715e0 FUN_143a715e0 body=149 status=ok
// SIG undefined FUN_143a715e0(void)

undefined8 * FUN_143a715e0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = google::protobuf::UninterpretedOption::vftable;
  FUN_141505b50(param_1 + 6,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_141505b50(param_1 + 7,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 8,&DAT_146ba2f50);
  FUN_143a28b10(param_1 + 3);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143a71680 FUN_143a71680 body=105 status=ok
// SIG undefined FUN_143a71680(void)

undefined8 * FUN_143a71680(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = google::protobuf::UninterpretedOption_NamePart::vftable;
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50,param_3,param_4,0xfffffffffffffffe);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143a716f0 FUN_143a716f0 body=103 status=ok
// SIG undefined FUN_143a716f0(void)

undefined8 FUN_143a716f0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_143a71735;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_143a71735:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_143a6dfa0(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 143a71760 FUN_143a71760 body=1108 status=ok
// SIG undefined FUN_143a71760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a71760(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar13 = 0;
  local_68 = 0;
  uVar3 = uVar13;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar11 = uVar3 + uVar1;
  uVar3 = uVar13;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a724d0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar3 * 8));
      uVar12 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar12;
      uVar9 = (uint)lVar4 | 1;
      local_64 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_64 == 0; local_64 = local_64 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_64 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar12 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar11 = lVar11 + (ulonglong)uVar1;
  uVar3 = uVar13;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a6f6f0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)(int)uVar3 * 8));
      lVar11 = lVar11 + lVar4;
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
    } while (uVar9 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  lVar11 = lVar11 + (ulonglong)uVar1;
  uVar3 = uVar13;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a71de0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x58) + 8 + (longlong)(int)uVar3 * 8));
      uVar12 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar12;
      uVar9 = (uint)lVar4 | 1;
      local_60 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_60 == 0; local_60 = local_60 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_60 * 9 + 0x49U >> 6) + lVar4;
    } while (uVar12 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  lVar11 = lVar11 + (ulonglong)uVar1;
  uVar3 = uVar13;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a71bc0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x70) + 8 + (longlong)(int)uVar3 * 8));
      uVar12 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar12;
      uVar9 = (uint)lVar4 | 1;
      local_5c = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_5c == 0; local_5c = local_5c + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_5c * 9 + 0x49U >> 6) + lVar4;
    } while (uVar12 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  lVar11 = lVar11 + (ulonglong)uVar1;
  uVar3 = uVar13;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a724d0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x88) + 8 + (longlong)(int)uVar3 * 8));
      uVar12 = (int)uVar3 + 1;
      uVar9 = (uint)lVar4 | 1;
      local_58 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_58 == 0; local_58 = local_58 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_58 * 9 + 0x49U >> 6) + lVar4;
      uVar3 = (ulonglong)uVar12;
    } while (uVar12 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x98);
  lVar11 = lVar11 + (ulonglong)uVar1;
  uVar3 = uVar13;
  if (uVar1 != 0) {
    do {
      lVar4 = FUN_143a734a0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0xa0) + 8 + (longlong)(int)uVar3 * 8));
      uVar12 = (int)uVar3 + 1;
      uVar9 = (uint)lVar4 | 1;
      local_54 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_54 == 0; local_54 = local_54 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_54 * 9 + 0x49U >> 6) + lVar4;
      uVar3 = (ulonglong)uVar12;
    } while (uVar12 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0xb0);
  lVar11 = lVar11 + (ulonglong)uVar1;
  uVar3 = uVar13;
  if (uVar1 != 0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 8 + (longlong)(int)uVar3 * 8);
      uVar5 = uVar13;
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        uVar5 = FUN_143a19d80(*(ulonglong *)(lVar4 + 8) & 0xfffffffffffffffe);
      }
      uVar9 = *(uint *)(lVar4 + 0x10);
      if ((uVar9 & 3) != 0) {
        if ((uVar9 & 1) != 0) {
          if ((int)*(uint *)(lVar4 + 0x18) < 0) {
            uVar6 = 10;
          }
          else {
            uVar12 = *(uint *)(lVar4 + 0x18) | 1;
            local_50 = 0x1f;
            if (uVar12 != 0) {
              for (; uVar12 >> local_50 == 0; local_50 = local_50 + -1) {
              }
            }
            uVar6 = (ulonglong)(local_50 * 9 + 0x49U >> 6);
          }
          uVar5 = uVar5 + 1 + uVar6;
        }
        if ((uVar9 & 2) != 0) {
          if ((int)*(uint *)(lVar4 + 0x1c) < 0) {
            uVar6 = 10;
          }
          else {
            uVar9 = *(uint *)(lVar4 + 0x1c) | 1;
            local_4c = 0x1f;
            if (uVar9 != 0) {
              for (; uVar9 >> local_4c == 0; local_4c = local_4c + -1) {
              }
            }
            uVar6 = (ulonglong)(local_4c * 9 + 0x49U >> 6);
          }
          uVar5 = uVar5 + 1 + uVar6;
        }
      }
      *(uint *)(lVar4 + 0x14) = (uint)uVar5;
      uVar9 = (uint)uVar5 | 1;
      uVar12 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar12;
      local_48 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_48 == 0; local_48 = local_48 + -1) {
        }
      }
      lVar11 = lVar11 + (local_48 * 9 + 0x49U >> 6) + uVar5;
    } while (uVar12 < uVar1);
  }
  uVar1 = IStreamingManager::GetNumWantingResources(param_1 + 0xc0);
  lVar11 = lVar11 + (ulonglong)uVar1;
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0xc0);
  uVar3 = uVar13;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0xc0,uVar3);
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      uVar1 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
      local_44 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
    } while ((int)uVar9 < iVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x10);
      uVar9 = (uint)lVar4 | 1;
      local_40 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> local_40 == 0; local_40 = local_40 + -1) {
        }
      }
      lVar11 = lVar11 + (ulonglong)(local_40 * 9 + 0x49U >> 6) + 1 + lVar4;
    }
    if ((uVar1 & 2) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe0);
      lVar7 = FUN_143a529b0(lVar4 + 8);
      if ((*(byte *)(lVar4 + 0x20) & 1) != 0) {
        lVar8 = FUN_143a19d80(*(ulonglong *)(lVar4 + 0x20) & 0xfffffffffffffffe);
        lVar7 = lVar7 + lVar8;
      }
      uVar1 = *(uint *)(lVar4 + 0x38);
      lVar7 = lVar7 + (ulonglong)(uVar1 * 2);
      if (uVar1 != 0) {
        do {
          lVar8 = FUN_143a73ba0(*(undefined8 *)
                                 (*(longlong *)(lVar4 + 0x40) + 8 + (longlong)(int)uVar13 * 8));
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar9 = (uint)lVar8 | 1;
          local_3c = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> local_3c == 0; local_3c = local_3c + -1) {
            }
          }
          lVar7 = lVar7 + (ulonglong)(local_3c * 9 + 0x49U >> 6) + lVar8;
        } while (uVar12 < uVar1);
      }
      uVar1 = *(uint *)(lVar4 + 0x28);
      if ((uVar1 & 0xf) != 0) {
        lVar8 = lVar7 + 2;
        if ((uVar1 & 1) == 0) {
          lVar8 = lVar7;
        }
        lVar10 = lVar8 + 2;
        if ((uVar1 & 2) == 0) {
          lVar10 = lVar8;
        }
        lVar7 = lVar10 + 2;
        if ((uVar1 & 4) == 0) {
          lVar7 = lVar10;
        }
        if ((uVar1 & 8) != 0) {
          lVar7 = lVar7 + 2;
        }
      }
      *(uint *)(lVar4 + 0x2c) = (uint)lVar7;
      uVar1 = (uint)lVar7 | 1;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      lVar11 = lVar11 + 1 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar7;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar11;
  return lVar11;
}



// FUNCTION 143a71bc0 FUN_143a71bc0 body=384 status=ok
// SIG undefined FUN_143a71bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a71bc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_44;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar10 = 0;
  local_48 = 0;
  uVar5 = uVar10;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar5 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 7) != 0) {
    if ((uVar4 & 1) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      lVar6 = FUN_143a529b0(lVar1 + 8);
      if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
        lVar7 = FUN_143a19d80(*(ulonglong *)(lVar1 + 0x20) & 0xfffffffffffffffe);
        lVar6 = lVar6 + lVar7;
      }
      uVar3 = *(uint *)(lVar1 + 0x38);
      lVar6 = lVar6 + (ulonglong)(uVar3 * 2);
      if (uVar3 != 0) {
        do {
          lVar7 = FUN_143a73ba0(*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0x40) + 8 + (longlong)(int)uVar10 * 8));
          uVar11 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
          uVar9 = (uint)lVar7 | 1;
          local_44 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> local_44 == 0; local_44 = local_44 + -1) {
            }
          }
          lVar6 = lVar6 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + lVar7;
        } while (uVar11 < uVar3);
      }
      uVar3 = (uint)lVar6 | 1;
      *(uint *)(lVar1 + 0x2c) = (uint)lVar6;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar5 = uVar5 + 1 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar6;
    }
    uVar10 = 10;
    if ((uVar4 & 2) != 0) {
      if ((int)*(uint *)(param_1 + 0x20) < 0) {
        uVar8 = 10;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x20) | 1;
        iVar2 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar8 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
      }
      uVar5 = uVar5 + 1 + uVar8;
    }
    if ((uVar4 & 4) != 0) {
      if (-1 < (int)*(uint *)(param_1 + 0x24)) {
        uVar4 = *(uint *)(param_1 + 0x24) | 1;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar10 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
      }
      uVar5 = uVar5 + 1 + uVar10;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar5;
  return uVar5;
}



// FUNCTION 143a71d40 FUN_143a71d40 body=145 status=ok
// SIG undefined FUN_143a71d40(void)

longlong FUN_143a71d40(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar4 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 3) != 0) {
    uVar6 = 10;
    if ((uVar3 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x18) < 0) {
        uVar5 = 10;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x18) | 1;
        iVar1 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar5 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar5;
    }
    if ((uVar3 & 2) != 0) {
      if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
        uVar3 = *(uint *)(param_1 + 0x1c) | 1;
        iVar1 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar6 = (ulonglong)(iVar1 * 9 + 0x49U >> 6);
      }
      lVar4 = lVar4 + 1 + uVar6;
    }
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}


