// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a4cf50 _Destroy body=49 status=ok
// SIG undefined _Destroy(void)

void std::vector<Aws::S3Control::Model::S3Grant,std::allocator<Aws::S3Control::Model::S3Grant>_>::
     _Destroy(undefined8 param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x68) {
    FUN_143a29800(param_2);
  }
  return;
}



// FUNCTION 143a4cf90 FUN_143a4cf90 body=41 status=ok
// SIG undefined FUN_143a4cf90(void)

void FUN_143a4cf90(longlong param_1,longlong *param_2)

{
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_2,0x28);
  return;
}



// FUNCTION 143a4cfc0 FUN_143a4cfc0 body=41 status=ok
// SIG undefined FUN_143a4cfc0(void)

void FUN_143a4cfc0(longlong param_1,longlong *param_2)

{
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_2,0x30);
  return;
}



// FUNCTION 143a4cff0 _Destroy_if_node body=34 status=ok
// SIG undefined _Destroy_if_node(void)

void std::
     _Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,unsigned_int,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>,0>_>
     ::_Destroy_if_node(longlong param_1,longlong *param_2)

{
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  _List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>_>
  ::_Freenode();
  return;
}



// FUNCTION 143a4d020 FUN_143a4d020 body=41 status=ok
// SIG undefined FUN_143a4d020(void)

void FUN_143a4d020(longlong param_1,longlong *param_2)

{
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_2,0x18);
  return;
}



// FUNCTION 143a4d080 _Destroy_if_node body=36 status=ok
// SIG undefined _Destroy_if_node(void)

void std::
     _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*>_>,0>_>
     ::_Destroy_if_node(undefined8 param_1,longlong param_2)

{
  pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
  ~pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>(param_2 + 0x20);
  FMemory::operator_delete(param_2,0x48);
  return;
}



// FUNCTION 143a4d0b0 _Destroy_if_node body=108 status=ok
// SIG undefined _Destroy_if_node(void)

void std::
     _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>
     ::_Destroy_if_node(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x38);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xf;
  *(undefined1 *)(param_2 + 0x20) = 0;
  FMemory::operator_delete(param_2,0x48);
  return;
}



// FUNCTION 143a4d120 FUN_143a4d120 body=105 status=ok
// SIG undefined FUN_143a4d120(void)

void FUN_143a4d120(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_2 + 0x30) - lVar1 & 0xfffffffffffffffc;
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
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  FMemory::operator_delete(param_2,0x40);
  return;
}



// FUNCTION 143a4d190 FUN_143a4d190 body=36 status=ok
// SIG undefined FUN_143a4d190(void)

void FUN_143a4d190(undefined8 param_1,longlong param_2)

{
  FUN_143a29280(param_2 + 0x20);
  FMemory::operator_delete(param_2,0x50);
  return;
}



// FUNCTION 143a4d1c0 _Erase body=94 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*>_>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
    ~pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>(param_2 + 4);
    FMemory::operator_delete(param_2,0x48);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a4d220 _Erase body=85 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tset_traits<gte::Delaunay2<double,gte::BSNumber<gte::UIntegerFP32<263>_>_>::ProcessedVertex,std::less<gte::Delaunay2<double,gte::BSNumber<gte::UIntegerFP32<263>_>_>::ProcessedVertex>,std::allocator<gte::Delaunay2<double,gte::BSNumber<gte::UIntegerFP32<263>_>_>::ProcessedVertex>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2,0x38);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a4d280 _Erase body=183 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    _Erase(param_1,param_2[2]);
    uVar2 = param_2[7];
    plVar3 = (longlong *)*param_2;
    if (0xf < uVar2) {
      lVar4 = param_2[4];
      uVar6 = uVar2 + 1;
      lVar5 = lVar4;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar4 + -8);
        uVar6 = uVar2 + 0x28;
        if (0x1f < (lVar4 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar5,uVar6);
    }
    param_2[6] = 0;
    param_2[7] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
    FMemory::operator_delete(param_2,0x48);
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
    param_2 = plVar3;
  } while( true );
}



// FUNCTION 143a4d340 FUN_143a4d340 body=182 status=ok
// SIG undefined FUN_143a4d340(void)

void FUN_143a4d340(undefined8 param_1,longlong *param_2)

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
    FUN_143a4d340(param_1,param_2[2]);
    lVar2 = param_2[4];
    plVar3 = (longlong *)*param_2;
    if (lVar2 != 0) {
      uVar5 = param_2[6] - lVar2 & 0xfffffffffffffffc;
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
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
    }
    FMemory::operator_delete(param_2,0x40);
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
    param_2 = plVar3;
  } while( true );
}



// FUNCTION 143a4d400 _Erase body=94 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,picojson::value,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,picojson::value>_>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_143a29280(param_2 + 4);
    FMemory::operator_delete(param_2,0x50);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a4d460 FUN_143a4d460 body=85 status=ok
// SIG undefined FUN_143a4d460(void)

void FUN_143a4d460(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_143a4d460(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2,0x28);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a4d4c0 _Freenode0 body=13 status=ok
// SIG undefined _Freenode0(void)

void std::
     _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*>_>,0>_>
     ::_Freenode0(undefined8 param_1,undefined8 param_2)

{
  FMemory::operator_delete(param_2,0x48);
  return;
}



// FUNCTION 143a4d4d0 FUN_143a4d4d0 body=13 status=ok
// SIG undefined FUN_143a4d4d0(void)

void FUN_143a4d4d0(undefined8 param_1,undefined8 param_2)

{
  FMemory::operator_delete(param_2,0x38);
  return;
}



// FUNCTION 143a4d4e0 _Freenode0 body=13 status=ok
// SIG undefined _Freenode0(void)

void std::
     _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
     ::_Freenode0(undefined8 param_1,undefined8 param_2)

{
  FMemory::operator_delete(param_2,0x40);
  return;
}



// FUNCTION 143a4d4f0 _Freenode0 body=13 status=ok
// SIG undefined _Freenode0(void)

void std::
     _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,nlohmann::basic_json<std::map,std::vector,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,__int64,unsigned___int64,double,std::allocator,nlohmann::adl_serializer>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,nlohmann::basic_json<std::map,std::vector,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,__int64,unsigned___int64,double,std::allocator,nlohmann::adl_serializer>_>_>,0>_>
     ::_Freenode0(undefined8 param_1,undefined8 param_2)

{
  FMemory::operator_delete(param_2,0x50);
  return;
}



// FUNCTION 143a4d500 _Destroy_if_node body=13 status=ok
// SIG undefined _Destroy_if_node(void)

void std::
     _Tree<std::_Tmap_traits<enum_EGfeSDKHighlightSignificance,enum_GfeSDK::NVGSDK_HighlightSignificance,std::less<enum_EGfeSDKHighlightSignificance>,std::allocator<std::pair<enum_EGfeSDKHighlightSignificance_const_,enum_GfeSDK::NVGSDK_HighlightSignificance>_>,0>_>
     ::_Destroy_if_node(undefined8 param_1,undefined8 param_2)

{
  FMemory::operator_delete(param_2,0x28);
  return;
}



// FUNCTION 143a4d510 _Freenode body=108 status=ok
// SIG undefined _Freenode(void)

void std::
     _List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>_>
     ::_Freenode(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x28);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0xf;
  *(undefined1 *)(param_2 + 0x10) = 0;
  FMemory::operator_delete(param_2,0x38);
  return;
}



// FUNCTION 143a4d580 FUN_143a4d580 body=108 status=ok
// SIG undefined FUN_143a4d580(void)

void FUN_143a4d580(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x28);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0xf;
  *(undefined1 *)(param_2 + 0x10) = 0;
  FMemory::operator_delete(param_2,0x30);
  return;
}



// FUNCTION 143a4d5f0 _Init body=375 status=ok
// SIG undefined _Init(void)

void std::
     _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
     ::_Init(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  uVar6 = param_2 * 2;
  if ((ulonglong)(lVar7 - *(longlong *)(param_1 + 0x18) >> 3) < uVar6) {
    if (0x1fffffffffffffff < uVar6) goto LAB_143a4d762;
    vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>,std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>_>
    ::_Reallocate_exactly(param_1 + 0x18,uVar6);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar8 = lVar7 - lVar1 >> 3;
  uVar4 = *(longlong *)(param_1 + 0x20) - lVar1 >> 3;
  local_res8 = uVar2;
  if (uVar8 < uVar6) {
    if (0x1fffffffffffffff < uVar6) {
LAB_143a4d762:
                    /* WARNING: Subroutine does not return */
      vector<int,std::allocator<int>_>::_Xlength();
    }
    uVar4 = uVar6;
    if ((uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) &&
       (uVar4 = (uVar8 >> 1) + uVar8, uVar4 < uVar6)) {
      uVar4 = uVar6;
    }
    if (lVar1 != 0) {
      allocator<double>::deallocate(param_1 + 0x18,lVar1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (uVar4 != 0) {
      if (0x1fffffffffffffff < uVar4) goto LAB_143a4d762;
      uVar3 = allocator<userCommands::BaseCommand_*>::allocate(param_1 + 0x18,uVar4);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x18) + uVar4 * 8;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
  }
  else if (uVar4 < uVar6) {
    _Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>
              (lVar1,*(longlong *)(param_1 + 0x20),&local_res8);
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    for (lVar7 = uVar6 - uVar4; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar1 + param_2 * 0x10);
    _Fill_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>
              (lVar1,puVar5,&local_res8);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  *(longlong *)(param_1 + 0x30) = param_2 + -1;
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 143a4d770 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a23080(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d7c0 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a23210(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d810 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a229f0(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d860 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a22b40(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d8b0 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a22cd0(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d900 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a22e60(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d950 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a233a0(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d9a0 _Reinsert body=80 status=ok
// SIG undefined _Reinsert(void)

void std::
     _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
     ::_Reinsert(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((longlong *)*plVar1 != plVar1) {
    lVar2 = plVar1[1];
    do {
      lVar3 = **(longlong **)(param_1 + 8);
      FUN_143a24090(param_1,local_18,lVar3 + 0x10,lVar3);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143a4d9f0 FUN_143a4d9f0 body=16 status=ok
// SIG undefined FUN_143a4d9f0(void)

void FUN_143a4d9f0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop("vector<T> too long");
}



// FUNCTION 143a4da10 _Xran body=16 status=ok
// SIG undefined _Xran(void)

void std::_String_val<std::_Simple_types<char>_>::_Xran(void)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop("invalid string position");
}



// FUNCTION 143a4da30 FUN_143a4da30 body=140 status=ok
// SIG undefined FUN_143a4da30(void)

void FUN_143a4da30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_143a4d460(param_1,plVar4[2],param_3,param_4,uVar5);
      plVar2 = (longlong *)*plVar4;
      FMemory::operator_delete(plVar4,0x28);
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



// FUNCTION 143a4dac0 FUN_143a4dac0 body=172 status=ok
// SIG undefined FUN_143a4dac0(void)

void FUN_143a4dac0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)*param_1;
  plVar6 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar6 != (longlong *)*param_1) {
    do {
      uVar2 = plVar6[5];
      plVar1 = (longlong *)*plVar6;
      if (0xf < uVar2) {
        lVar3 = plVar6[2];
        uVar5 = uVar2 + 1;
        lVar4 = lVar3;
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(lVar3 + -8);
          uVar5 = uVar2 + 0x28;
          if (0x1f < (lVar3 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar4,uVar5);
      }
      plVar6[4] = 0;
      plVar6[5] = 0xf;
      *(undefined1 *)(plVar6 + 2) = 0;
      FMemory::operator_delete(plVar6,0x30);
      plVar6 = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  return;
}



// FUNCTION 143a4db70 deallocate body=66 status=ok
// SIG undefined deallocate(void)

void std::allocator<unsigned_int>::deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dbc0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

void std::allocator<std::_List_node<hx::Object_*_*,void_*>_>::deallocate
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dc10 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x28;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dc60 deallocate body=66 status=ok
// SIG undefined deallocate(void)

void std::
     allocator<std::_Tree_node<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>,void_*>_>
     ::deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x30;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dcb0 deallocate body=62 status=ok
// SIG undefined deallocate(void)

void std::
     allocator<std::_List_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>,void_*>_>
     ::deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x38;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dcf0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

void std::
     allocator<std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_>
     ::deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x48;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dd40 deallocate body=65 status=ok
// SIG undefined deallocate(void)

void std::allocator<std::_Tree_node<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>,void_*>_>
     ::deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x40;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dd90 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x50;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4dde0 FUN_143a4dde0 body=62 status=ok
// SIG undefined FUN_143a4dde0(void)

void FUN_143a4dde0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x68;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 143a4de20 FUN_143a4de20 body=177 status=ok
// SIG undefined FUN_143a4de20(void)

undefined8 FUN_143a4de20(longlong param_1)

{
  once_flag *poVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 *local_20;
  longlong *local_18;
  undefined1 *local_10;
  
  poVar1 = *(once_flag **)(param_1 + 0x30);
  if (poVar1 != (once_flag *)0x0) {
    local_res8[0] = param_1;
    _guard_xfg_dispatch_icall_nop(local_40);
    local_20 = local_40;
    local_18 = local_res8;
    local_10 = &LAB_143a48e80;
    iVar3 = std::_guard_xfg_dispatch_icall_nop(poVar1,FUN_143a012f0,&local_20);
    if (iVar3 == 0) {
      bVar2 = _guard_xfg_dispatch_icall_nop(local_40);
      if (bVar2) {
        uVar4 = std::exception_ptr::exception_ptr(local_30,local_40);
                    /* WARNING: Subroutine does not return */
        FUN_143a00820(uVar4);
      }
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    _guard_xfg_dispatch_icall_nop(local_40);
  }
  return *(undefined8 *)(param_1 + 0x90);
}



// FUNCTION 143a4dee0 FUN_143a4dee0 body=190 status=ok
// SIG undefined FUN_143a4dee0(void)

undefined8 FUN_143a4dee0(longlong param_1,int param_2)

{
  once_flag *poVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 *local_20;
  longlong *local_18;
  undefined1 *local_10;
  
  poVar1 = *(once_flag **)(param_1 + 0x18);
  if (poVar1 != (once_flag *)0x0) {
    local_res8 = param_1;
    _guard_xfg_dispatch_icall_nop(local_40);
    local_20 = local_40;
    local_18 = &local_res8;
    local_10 = &LAB_143a3ce90;
    iVar3 = std::_guard_xfg_dispatch_icall_nop(poVar1,FUN_143a012f0,&local_20);
    if (iVar3 == 0) {
      bVar2 = _guard_xfg_dispatch_icall_nop(local_40);
      if (bVar2) {
        uVar4 = std::exception_ptr::exception_ptr(local_30,local_40);
                    /* WARNING: Subroutine does not return */
        FUN_143a00820(uVar4);
      }
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    _guard_xfg_dispatch_icall_nop(local_40);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 8);
}



// FUNCTION 143a4dfa0 FUN_143a4dfa0 body=174 status=ok
// SIG undefined FUN_143a4dfa0(void)

undefined8 FUN_143a4dfa0(longlong param_1)

{
  once_flag *poVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 *local_20;
  longlong *local_18;
  undefined1 *local_10;
  
  poVar1 = *(once_flag **)(param_1 + 0x30);
  if (poVar1 != (once_flag *)0x0) {
    local_res8[0] = param_1;
    _guard_xfg_dispatch_icall_nop(local_40);
    local_20 = local_40;
    local_18 = local_res8;
    local_10 = &LAB_143a48e80;
    iVar3 = std::_guard_xfg_dispatch_icall_nop(poVar1,FUN_143a012f0,&local_20);
    if (iVar3 == 0) {
      bVar2 = _guard_xfg_dispatch_icall_nop(local_40);
      if (bVar2) {
        uVar4 = std::exception_ptr::exception_ptr(local_30,local_40);
                    /* WARNING: Subroutine does not return */
        FUN_143a00820(uVar4);
      }
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    _guard_xfg_dispatch_icall_nop(local_40);
  }
  return *(undefined8 *)(param_1 + 0x70);
}



// FUNCTION 143a4e050 FUN_143a4e050 body=366 status=ok
// SIG undefined FUN_143a4e050(void)

longlong * FUN_143a4e050(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  uVar2 = param_3[3];
  _Size = param_3[2];
  puVar12 = param_3;
  if (0xf < uVar2) {
    puVar12 = (undefined8 *)*param_3;
  }
  uVar10 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)(uVar10 + (longlong)puVar12);
      uVar10 = uVar10 + 1;
      uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
    } while (uVar10 < _Size);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar4 = *(undefined8 **)(param_1 + 8);
  uVar11 = *(ulonglong *)(param_1 + 0x30) & uVar11;
  puVar5 = *(undefined8 **)(lVar3 + uVar11 * 0x10);
  puVar9 = *(undefined8 **)(lVar3 + uVar11 * 0x10);
  puVar12 = (undefined8 *)(lVar3 + (uVar11 * 2 + 1) * 8);
  while( true ) {
    puVar7 = puVar4;
    if (puVar5 != puVar4) {
      puVar7 = *(undefined8 **)*puVar12;
    }
    if (puVar9 == puVar7) goto LAB_143a4e19d;
    puVar7 = param_3;
    if (0xf < uVar2) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar8 = puVar9 + 2;
    if (0xf < (ulonglong)puVar9[5]) {
      puVar8 = (undefined8 *)puVar9[2];
    }
    if ((puVar9[4] == _Size) &&
       (iVar6 = _guard_xfg_dispatch_icall_nop(puVar8,puVar7,puVar9[4]), puVar7 = puVar9, iVar6 == 0)
       ) break;
    puVar9 = (undefined8 *)*puVar9;
  }
  while( true ) {
    puVar8 = puVar4;
    if (puVar5 != puVar4) {
      puVar8 = *(undefined8 **)*puVar12;
    }
    if (puVar7 == puVar8) break;
    puVar8 = puVar7 + 2;
    if (0xf < (ulonglong)puVar7[5]) {
      puVar8 = (undefined8 *)puVar7[2];
    }
    _Buf1 = param_3;
    if (0xf < uVar2) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size != puVar7[4]) ||
       (iVar6 = _guard_xfg_dispatch_icall_nop(_Buf1,puVar8,_Size), iVar6 != 0)) break;
    puVar7 = (undefined8 *)*puVar7;
  }
  if (puVar9 == puVar7) {
LAB_143a4e19d:
    *param_2 = (longlong)puVar4;
    param_2[1] = (longlong)puVar4;
  }
  else {
    *param_2 = (longlong)puVar9;
    param_2[1] = (longlong)puVar7;
  }
  return param_2;
}



// FUNCTION 143a4e1c0 FUN_143a4e1c0 body=611 status=ok
// SIG undefined FUN_143a4e1c0(void)

longlong FUN_143a4e1c0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  
  uVar15 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_2;
  uVar8 = 0;
  cVar4 = *pcVar2;
  pcVar6 = pcVar2;
  while (cVar4 != '\0') {
    uVar8 = uVar8 * 5 + (longlong)cVar4;
    pcVar6 = pcVar6 + 1;
    cVar4 = *pcVar6;
  }
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x30);
  lVar13 = *(longlong *)(param_1 + 0x18);
  plVar10 = *(longlong **)(lVar13 + uVar8 * 0x10);
  lVar11 = uVar8 * 0x10 + 8;
  plVar3 = *(longlong **)(lVar13 + uVar8 * 0x10);
  plVar7 = *(longlong **)(param_1 + 8);
  do {
    plVar5 = plVar7;
    if (plVar3 != plVar7) {
      plVar5 = (longlong *)**(undefined8 **)(lVar13 + lVar11);
    }
    if (plVar10 == plVar5) goto LAB_143a4e2d4;
    pcVar6 = (char *)plVar10[2];
    lVar12 = (longlong)pcVar2 - (longlong)pcVar6;
    do {
      cVar4 = *pcVar6;
      cVar1 = pcVar6[lVar12];
      if (cVar4 != cVar1) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    plVar5 = plVar10;
    if (cVar4 == cVar1) break;
    plVar10 = (longlong *)*plVar10;
  } while( true );
LAB_143a4e282:
  plVar14 = plVar7;
  if (plVar3 != plVar7) {
    plVar7 = (longlong *)**(undefined8 **)(lVar13 + lVar11);
    plVar14 = *(longlong **)(param_1 + 8);
  }
  if (plVar5 == plVar7) {
LAB_143a4e2cf:
    plVar7 = plVar14;
    if (plVar10 == plVar5) {
LAB_143a4e2d4:
      plVar5 = plVar7;
      plVar10 = plVar5;
    }
    lVar11 = 0;
    for (plVar3 = plVar10; plVar3 != plVar5; plVar3 = (longlong *)*plVar3) {
      lVar11 = lVar11 + 1;
    }
    plVar3 = *(longlong **)(param_1 + 8);
    plVar7 = (longlong *)*plVar3;
    if ((plVar10 == plVar7) && (plVar5 == plVar3)) {
      *plVar3 = (longlong)plVar3;
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (plVar7 != *(longlong **)(param_1 + 8)) {
        do {
          plVar10 = (longlong *)*plVar7;
          FMemory::operator_delete(plVar7,0x20);
          plVar7 = plVar10;
        } while (plVar10 != *(longlong **)(param_1 + 8));
      }
      std::
      _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
      ::_Init(param_1,8);
    }
    else {
      while (plVar10 != plVar5) {
        plVar3 = (longlong *)*plVar10;
        pcVar6 = (char *)plVar10[2];
        uVar8 = 0;
        cVar4 = *pcVar6;
        plVar7 = plVar3;
        if (cVar4 != '\0') {
          do {
            uVar8 = uVar8 * 5 + (longlong)cVar4;
            pcVar6 = pcVar6 + 1;
            cVar4 = *pcVar6;
          } while (cVar4 != '\0');
          plVar7 = (longlong *)*plVar10;
        }
        lVar13 = (uVar8 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar13);
        if ((longlong *)puVar9[1] == plVar10) {
          if ((longlong *)*puVar9 == plVar10) {
            *puVar9 = *(undefined8 *)(param_1 + 8);
            *(undefined8 *)(lVar13 + 8 + *(longlong *)(param_1 + 0x18)) =
                 *(undefined8 *)(param_1 + 8);
          }
          else {
            puVar9[1] = plVar10[1];
          }
        }
        else if ((longlong *)*puVar9 == plVar10) {
          *puVar9 = plVar7;
        }
        *(longlong *)plVar10[1] = *plVar10;
        *(longlong *)(*plVar10 + 8) = plVar10[1];
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        FMemory::operator_delete(plVar10,0x20,lVar13,plVar7,uVar15);
        plVar10 = plVar3;
      }
    }
    return lVar11;
  }
  pcVar6 = pcVar2;
  do {
    cVar4 = *pcVar6;
    cVar1 = pcVar6[plVar5[2] - (longlong)pcVar2];
    if (cVar4 != cVar1) break;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (cVar4 != cVar1) goto LAB_143a4e2cf;
  plVar5 = (longlong *)*plVar5;
  plVar7 = plVar14;
  goto LAB_143a4e282;
}



// FUNCTION 143a4e430 FUN_143a4e430 body=185 status=ok
// SIG undefined FUN_143a4e430(void)

longlong * FUN_143a4e430(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  pcVar2 = (char *)param_3[2];
  uVar5 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    uVar5 = uVar5 * 5 + (longlong)cVar1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  lVar4 = (*(ulonglong *)(param_1 + 0x30) & uVar5) * 0x10;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar4);
  if ((longlong *)plVar3[1] == param_3) {
    if ((longlong *)*plVar3 == param_3) {
      *plVar3 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar4) = *(undefined8 *)(param_1 + 8);
    }
    else {
      plVar3[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar3 == param_3) {
    *plVar3 = *param_3;
  }
  lVar4 = *param_3;
  *(longlong *)param_3[1] = lVar4;
  *(longlong *)(*param_3 + 8) = param_3[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_3,0x28);
  *param_2 = lVar4;
  return param_2;
}



// FUNCTION 143a4e4f0 FUN_143a4e4f0 body=611 status=ok
// SIG undefined FUN_143a4e4f0(void)

longlong FUN_143a4e4f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  
  uVar15 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_2;
  uVar8 = 0;
  cVar4 = *pcVar2;
  pcVar6 = pcVar2;
  while (cVar4 != '\0') {
    uVar8 = uVar8 * 5 + (longlong)cVar4;
    pcVar6 = pcVar6 + 1;
    cVar4 = *pcVar6;
  }
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x30);
  lVar13 = *(longlong *)(param_1 + 0x18);
  plVar10 = *(longlong **)(lVar13 + uVar8 * 0x10);
  lVar11 = uVar8 * 0x10 + 8;
  plVar3 = *(longlong **)(lVar13 + uVar8 * 0x10);
  plVar7 = *(longlong **)(param_1 + 8);
  do {
    plVar5 = plVar7;
    if (plVar3 != plVar7) {
      plVar5 = (longlong *)**(undefined8 **)(lVar13 + lVar11);
    }
    if (plVar10 == plVar5) goto LAB_143a4e604;
    pcVar6 = (char *)plVar10[2];
    lVar12 = (longlong)pcVar2 - (longlong)pcVar6;
    do {
      cVar4 = *pcVar6;
      cVar1 = pcVar6[lVar12];
      if (cVar4 != cVar1) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    plVar5 = plVar10;
    if (cVar4 == cVar1) break;
    plVar10 = (longlong *)*plVar10;
  } while( true );
LAB_143a4e5b2:
  plVar14 = plVar7;
  if (plVar3 != plVar7) {
    plVar7 = (longlong *)**(undefined8 **)(lVar13 + lVar11);
    plVar14 = *(longlong **)(param_1 + 8);
  }
  if (plVar5 == plVar7) {
LAB_143a4e5ff:
    plVar7 = plVar14;
    if (plVar10 == plVar5) {
LAB_143a4e604:
      plVar5 = plVar7;
      plVar10 = plVar5;
    }
    lVar11 = 0;
    for (plVar3 = plVar10; plVar3 != plVar5; plVar3 = (longlong *)*plVar3) {
      lVar11 = lVar11 + 1;
    }
    plVar3 = *(longlong **)(param_1 + 8);
    plVar7 = (longlong *)*plVar3;
    if ((plVar10 == plVar7) && (plVar5 == plVar3)) {
      *plVar3 = (longlong)plVar3;
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (plVar7 != *(longlong **)(param_1 + 8)) {
        do {
          plVar10 = (longlong *)*plVar7;
          FMemory::operator_delete(plVar7,0x28);
          plVar7 = plVar10;
        } while (plVar10 != *(longlong **)(param_1 + 8));
      }
      std::
      _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
      ::_Init(param_1,8);
    }
    else {
      while (plVar10 != plVar5) {
        plVar3 = (longlong *)*plVar10;
        pcVar6 = (char *)plVar10[2];
        uVar8 = 0;
        cVar4 = *pcVar6;
        plVar7 = plVar3;
        if (cVar4 != '\0') {
          do {
            uVar8 = uVar8 * 5 + (longlong)cVar4;
            pcVar6 = pcVar6 + 1;
            cVar4 = *pcVar6;
          } while (cVar4 != '\0');
          plVar7 = (longlong *)*plVar10;
        }
        lVar13 = (uVar8 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar13);
        if ((longlong *)puVar9[1] == plVar10) {
          if ((longlong *)*puVar9 == plVar10) {
            *puVar9 = *(undefined8 *)(param_1 + 8);
            *(undefined8 *)(lVar13 + 8 + *(longlong *)(param_1 + 0x18)) =
                 *(undefined8 *)(param_1 + 8);
          }
          else {
            puVar9[1] = plVar10[1];
          }
        }
        else if ((longlong *)*puVar9 == plVar10) {
          *puVar9 = plVar7;
        }
        *(longlong *)plVar10[1] = *plVar10;
        *(longlong *)(*plVar10 + 8) = plVar10[1];
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        FMemory::operator_delete(plVar10,0x28,lVar13,plVar7,uVar15);
        plVar10 = plVar3;
      }
    }
    return lVar11;
  }
  pcVar6 = pcVar2;
  do {
    cVar4 = *pcVar6;
    cVar1 = pcVar6[plVar5[2] - (longlong)pcVar2];
    if (cVar4 != cVar1) break;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (cVar4 != cVar1) goto LAB_143a4e5ff;
  plVar5 = (longlong *)*plVar5;
  plVar7 = plVar14;
  goto LAB_143a4e5b2;
}



// FUNCTION 143a4e760 FUN_143a4e760 body=262 status=ok
// SIG undefined FUN_143a4e760(void)

longlong * FUN_143a4e760(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (*(ulonglong *)(param_1 + 0x30) &
          (((((((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_3 + 0x14)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x15)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x16)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x17)) * 0x100000001b3) * 0x10;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar2);
  if ((longlong *)plVar1[1] == param_3) {
    if ((longlong *)*plVar1 == param_3) {
      *plVar1 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) = *(undefined8 *)(param_1 + 8);
    }
    else {
      plVar1[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar1 == param_3) {
    *plVar1 = *param_3;
  }
  lVar2 = *param_3;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(*param_3 + 8) = param_3[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FMemory::operator_delete(param_3,0x18);
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 143a4e870 erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>_>_>,void> body=234 status=ok
// SIG undefined erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>_>_>,void>(void)

longlong *
std::
_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,unsigned_int,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>,0>_>
::
erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>_>_>,void>
          (longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar2 = param_3 + 2;
  if (0xf < (ulonglong)param_3[5]) {
    plVar2 = (longlong *)*plVar2;
  }
  uVar4 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)(uVar4 + (longlong)plVar2);
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_3[4]);
  }
  lVar3 = (*(ulonglong *)(param_1 + 0x30) & uVar5) * 0x10;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar3);
  if ((longlong *)plVar2[1] == param_3) {
    if ((longlong *)*plVar2 == param_3) {
      *plVar2 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar3 + 8 + *(longlong *)(param_1 + 0x18)) = *(undefined8 *)(param_1 + 8);
    }
    else {
      plVar2[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar2 == param_3) {
    *plVar2 = *param_3;
  }
  lVar3 = *param_3;
  *(longlong *)param_3[1] = lVar3;
  *(longlong *)(*param_3 + 8) = param_3[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  FUN_143a4d580(param_1 + 8,param_3);
  *param_2 = lVar3;
  return param_2;
}



// FUNCTION 143a4e960 FUN_143a4e960 body=407 status=ok
// SIG undefined FUN_143a4e960(void)

undefined8 *
FUN_143a4e960(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    plVar4 = plVar2;
    plVar6 = (longlong *)plVar2[1];
    if (*(char *)(plVar2[1] + 0x19) == '\0') {
      do {
        std::
        _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*>_>,0>_>
        ::_Erase(param_1,plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        std::pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
        ~pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  (plVar6 + 4);
        FMemory::operator_delete(plVar6,0x48);
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      plVar4 = (longlong *)*param_1;
    }
    plVar4[1] = (longlong)plVar2;
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
        plVar4 = plVar2;
        plVar6 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar4 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar6 = param_3;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar6 = plVar4;
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
        while ((plVar6 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          param_3 = plVar6;
        }
      }
      lVar5 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Extract(param_1);
      std::pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
      ~pair<bool,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                (lVar5 + 0x20);
      FMemory::operator_delete(lVar5,0x48);
      param_3 = plVar4;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a4eb00 FUN_143a4eb00 body=395 status=ok
// SIG undefined FUN_143a4eb00(void)

undefined8 *
FUN_143a4eb00(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    plVar4 = plVar2;
    plVar6 = (longlong *)plVar2[1];
    if (*(char *)(plVar2[1] + 0x19) == '\0') {
      do {
        std::
        _Tree<std::_Tset_traits<gte::Delaunay2<double,gte::BSNumber<gte::UIntegerFP32<263>_>_>::ProcessedVertex,std::less<gte::Delaunay2<double,gte::BSNumber<gte::UIntegerFP32<263>_>_>::ProcessedVertex>,std::allocator<gte::Delaunay2<double,gte::BSNumber<gte::UIntegerFP32<263>_>_>::ProcessedVertex>,0>_>
        ::_Erase(param_1,plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        FMemory::operator_delete(plVar6,0x38);
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      plVar4 = (longlong *)*param_1;
    }
    plVar4[1] = (longlong)plVar2;
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
        plVar4 = plVar2;
        plVar6 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar4 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar6 = param_3;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar6 = plVar4;
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
        while ((plVar6 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          param_3 = plVar6;
        }
      }
      uVar5 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Extract(param_1);
      FMemory::operator_delete(uVar5,0x38);
      param_3 = plVar4;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a4ec90 FUN_143a4ec90 body=425 status=ok
// SIG undefined FUN_143a4ec90(void)

undefined8 *
FUN_143a4ec90(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  plVar2 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    std::
    _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>
    ::_Erase(param_1,plVar2[1],param_3,param_4,0xfffffffffffffffe);
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
        plVar10 = plVar2;
        plVar5 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar10 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar6 = (longlong *)param_3[1];
        plVar5 = param_3;
        while ((plVar10 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar10[2]))) {
          cVar1 = *(char *)(plVar10[1] + 0x19);
          plVar6 = (longlong *)plVar10[1];
          plVar5 = plVar10;
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
        while ((plVar5 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar2 = (longlong *)plVar5[1];
          param_3 = plVar5;
        }
      }
      lVar7 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Extract(param_1);
      uVar3 = *(ulonglong *)(lVar7 + 0x38);
      if (0xf < uVar3) {
        uVar9 = uVar3 + 1;
        lVar4 = *(longlong *)(lVar7 + 0x20);
        lVar8 = lVar4;
        if (0xfff < uVar9) {
          uVar9 = uVar3 + 0x28;
          lVar8 = *(longlong *)(lVar4 + -8);
          if (0x1f < (lVar4 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar8,uVar9);
      }
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0xf;
      *(undefined1 *)(lVar7 + 0x20) = 0;
      FMemory::operator_delete(lVar7,0x48);
      param_3 = plVar10;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a4ee40 FUN_143a4ee40 body=424 status=ok
// SIG undefined FUN_143a4ee40(void)

undefined8 *
FUN_143a4ee40(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

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
    FUN_143a4d340(param_1,plVar2[1],param_3,param_4,0xfffffffffffffffe);
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
      lVar3 = *(longlong *)(lVar6 + 0x20);
      if (lVar3 != 0) {
        uVar8 = *(longlong *)(lVar6 + 0x30) - lVar3 & 0xfffffffffffffffc;
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
        *(undefined8 *)(lVar6 + 0x20) = 0;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        *(undefined8 *)(lVar6 + 0x30) = 0;
      }
      FMemory::operator_delete(lVar6,0x40);
      param_3 = plVar9;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a4eff0 erase body=407 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,picojson::value,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,picojson::value>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    plVar4 = plVar2;
    plVar6 = (longlong *)plVar2[1];
    if (*(char *)(plVar2[1] + 0x19) == '\0') {
      do {
        _Erase(param_1,plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        FUN_143a29280(plVar6 + 4);
        FMemory::operator_delete(plVar6,0x50);
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      plVar4 = (longlong *)*param_1;
    }
    plVar4[1] = (longlong)plVar2;
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
        plVar4 = plVar2;
        plVar6 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar4 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar6 = param_3;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar6 = plVar4;
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
        while ((plVar6 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          param_3 = plVar6;
        }
      }
      lVar5 = _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Extract(param_1);
      FUN_143a29280(lVar5 + 0x20);
      FMemory::operator_delete(lVar5,0x50);
      param_3 = plVar4;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a4f190 FUN_143a4f190 body=294 status=ok
// SIG undefined FUN_143a4f190(void)

undefined8 *
FUN_143a4f190(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    FUN_143a4da30();
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    while (param_3 != param_4) {
      plVar2 = (longlong *)param_3[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar6 = plVar2;
        plVar3 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar4 = (longlong *)param_3[1];
        plVar3 = param_3;
        while ((plVar6 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
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
        while ((plVar3 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar3[2]))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          param_3 = plVar3;
        }
      }
      uVar5 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Extract(param_1);
      FMemory::operator_delete(uVar5,0x28);
      param_3 = plVar6;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a4f2c0 FUN_143a4f2c0 body=194 status=ok
// SIG undefined FUN_143a4f2c0(void)

undefined8 FUN_143a4f2c0(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)puVar5[1];
  puVar6 = puVar5;
  if (*(char *)((longlong)puVar1 + 0x19) == '\0') {
    puVar4 = puVar5;
    puVar2 = puVar1;
    do {
      puVar5 = puVar2;
      if ((ulonglong)puVar5[4] < *param_2) {
        puVar2 = (undefined8 *)puVar5[2];
        puVar5 = puVar4;
      }
      else {
        if ((*(char *)((longlong)puVar6 + 0x19) != '\0') && (*param_2 < (ulonglong)puVar5[4])) {
          puVar6 = puVar5;
        }
        puVar2 = (undefined8 *)*puVar5;
      }
      puVar4 = puVar5;
    } while (*(char *)((longlong)puVar2 + 0x19) == '\0');
  }
  if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
    puVar1 = (undefined8 *)*puVar6;
  }
  if (*(char *)((longlong)puVar1 + 0x19) == '\0') {
    do {
      if (*param_2 < (ulonglong)puVar1[4]) {
        puVar2 = (undefined8 *)*puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar2 = (undefined8 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x19) == '\0');
  }
  uVar3 = FUN_143a27790(puVar5,puVar6);
  FUN_143a4f190(param_1,local_res8,puVar5,puVar6);
  return uVar3;
}



// FUNCTION 143a4f390 FUN_143a4f390 body=393 status=ok
// SIG undefined FUN_143a4f390(void)

undefined8 *
FUN_143a4f390(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    FUN_143928570();
    *param_2 = *(undefined8 *)*param_1;
    return param_2;
  }
  do {
    if (param_3 == param_4) {
      *param_2 = param_3;
      return param_2;
    }
    plVar2 = (longlong *)param_3[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar10 = plVar2;
      plVar5 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar10 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar1 = *(char *)(param_3[1] + 0x19);
      plVar6 = (longlong *)param_3[1];
      plVar5 = param_3;
      while ((plVar10 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar10[2]))) {
        cVar1 = *(char *)(plVar10[1] + 0x19);
        plVar6 = (longlong *)plVar10[1];
        plVar5 = plVar10;
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
      while ((plVar5 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar2 = (longlong *)plVar5[1];
        param_3 = plVar5;
      }
    }
    lVar7 = std::
            _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
            ::_Extract(param_1);
    uVar3 = *(ulonglong *)(lVar7 + 0x38);
    if (0xf < uVar3) {
      lVar4 = *(longlong *)(lVar7 + 0x20);
      uVar9 = uVar3 + 1;
      lVar8 = lVar4;
      if (0xfff < uVar9) {
        lVar8 = *(longlong *)(lVar4 + -8);
        uVar9 = uVar3 + 0x28;
        if (0x1f < (lVar4 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar8,uVar9);
    }
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0xf;
    *(undefined1 *)(lVar7 + 0x20) = 0;
    FMemory::operator_delete(lVar7,0x40);
    param_3 = plVar10;
  } while( true );
}



// FUNCTION 143a4f520 find body=329 status=ok
// SIG undefined find(void)

longlong *
std::
_Hash<std::_Umap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,unsigned_int,std::_Uhash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::hash<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::equal_to<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>,0>_>
::find(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  longlong lVar3;
  size_t _Size_00;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  uVar2 = param_3[3];
  _Size = param_3[2];
  puVar10 = param_3;
  if (0xf < uVar2) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar8 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)(uVar8 + (longlong)puVar10);
      uVar8 = uVar8 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < _Size);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar10 = *(undefined8 **)(param_1 + 8);
  uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
  puVar6 = *(undefined8 **)(lVar3 + uVar9 * 0x10);
  puVar7 = *(undefined8 **)(lVar3 + uVar9 * 0x10);
  while( true ) {
    puVar5 = puVar10;
    if (puVar6 != puVar10) {
      puVar5 = (undefined8 *)**(undefined8 **)(lVar3 + (uVar9 * 2 + 1) * 8);
    }
    if (puVar7 == puVar5) {
      *param_2 = (longlong)puVar10;
      return param_2;
    }
    puVar5 = param_3;
    if (0xf < uVar2) {
      puVar5 = (undefined8 *)*param_3;
    }
    uVar8 = puVar7[5];
    _Buf1 = puVar7 + 2;
    if (0xf < uVar8) {
      _Buf1 = (undefined8 *)puVar7[2];
    }
    _Size_00 = puVar7[4];
    if ((_Size_00 == _Size) &&
       (iVar4 = ::_guard_xfg_dispatch_icall_nop(_Buf1,puVar5,_Size_00), iVar4 == 0)) break;
    puVar7 = (undefined8 *)*puVar7;
  }
  puVar6 = puVar7 + 2;
  if (0xf < uVar8) {
    puVar6 = (undefined8 *)*puVar6;
  }
  if (0xf < uVar2) {
    param_3 = (undefined8 *)*param_3;
  }
  if ((_Size != _Size_00) ||
     (iVar4 = ::_guard_xfg_dispatch_icall_nop(param_3,puVar6,_Size), iVar4 != 0)) {
    puVar7 = puVar10;
  }
  *param_2 = (longlong)puVar7;
  return param_2;
}



// FUNCTION 143a4f670 FUN_143a4f670 body=330 status=ok
// SIG undefined FUN_143a4f670(void)

longlong *
FUN_143a4f670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ba3150) {
    _Init_thread_header(&DAT_146ba3150);
    if (DAT_146ba3150 == -1) {
      plVar2 = (longlong *)operator_new(0x40);
      if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        lVar3 = FUN_143a402e0();
        lVar4 = operator_new(0x50);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          _guard_xfg_dispatch_icall_nop(lVar4,2,param_3,param_4,uVar5);
        }
        *plVar2 = lVar4;
        plVar2[1] = lVar3;
        plVar2[2] = 0;
        plVar2[3] = 0;
        lVar4 = operator_new(0x240);
        lVar3 = 0;
        if (lVar4 != 0) {
          lVar3 = FUN_143a28730(lVar4);
        }
        plVar2[4] = lVar3;
        *(undefined4 *)(plVar2 + 5) = 1;
        *(undefined1 *)((longlong)plVar2 + 0x2c) = 0;
        plVar1 = plVar2 + 6;
        *plVar1 = 0;
        plVar2[7] = 0;
        lVar3 = std::
                _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
                ::_Buyheadnode(plVar1);
        *plVar1 = lVar3;
      }
      *(undefined2 *)(plVar2 + 5) = 0x100;
      FUN_1439ef0c0(&LAB_143a1e9c0,plVar2);
      DAT_146ba3148 = plVar2;
      _Init_thread_footer(&DAT_146ba3150);
    }
  }
  return DAT_146ba3148;
}



// FUNCTION 143a4f7c0 insert body=256 status=ok
// SIG undefined insert(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert
          (undefined8 *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 *puVar2;
  size_t _Size;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<char>_>::_Xran();
  }
  if (param_1[3] - uVar1 < param_4) {
    puVar2 = (undefined8 *)
             _Reallocate_grow_by<<lambda_f3a66ab6a0570788f31503db83886f49>,unsigned___int64,char_const_*,unsigned___int64>
                       (param_1,param_4,0,param_2,param_3,param_4);
    return puVar2;
  }
  param_1[2] = uVar1 + param_4;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  _Src = (void *)((longlong)puVar2 + param_2);
  _Size = param_4;
  if ((_Src < (void *)((longlong)param_3 + param_4)) &&
     (param_3 <= (void *)((longlong)puVar2 + uVar1))) {
    if (param_3 < _Src) {
      _Size = (longlong)_Src - (longlong)param_3;
    }
    else {
      _Size = 0;
    }
  }
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + param_4),_Src,(uVar1 - param_2) + 1);
  ::_guard_xfg_dispatch_icall_nop(_Src,param_3,_Size);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(_Size + (longlong)_Src),(void *)((longlong)param_3 + param_4 + _Size),
             param_4 - _Size);
  return param_1;
}



// FUNCTION 143a4f8d0 FUN_143a4f8d0 body=13 status=ok
// SIG undefined FUN_143a4f8d0(void)

undefined1 FUN_143a4f8d0(longlong param_1)

{
  return *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x20) + 0x4b);
}



// FUNCTION 143a4f8e0 FUN_143a4f8e0 body=83 status=ok
// SIG undefined FUN_143a4f8e0(void)

ulonglong FUN_143a4f8e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  
  if (*(int *)(param_1 + 0x3c) == 3) {
    iVar2 = FUN_143a009a0();
    in_RAX = (ulonglong)(iVar2 - 9U);
    if (iVar2 - 9U < 4) goto LAB_143a4f90f;
    in_RAX = *(ulonglong *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (*(int *)(in_RAX + 0x3c) == 2) {
      if (lVar1 == 0) goto LAB_143a4f90f;
    }
    else if ((lVar1 == 0) ||
            (uVar3 = *(uint *)(lVar1 + 0x28) >> 1, in_RAX = (ulonglong)uVar3, (uVar3 & 1) == 0))
    goto LAB_143a4f92b;
    if (*(char *)(lVar1 + 0x4c) != '\0') {
LAB_143a4f92b:
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_143a4f90f:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143a4f940 FUN_143a4f940 body=152 status=ok
// SIG undefined FUN_143a4f940(void)

longlong * FUN_143a4f940(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)puVar3[1] + 0x19) != '\0') {
    *param_2 = (longlong)puVar3;
    return param_2;
  }
  puVar5 = (undefined8 *)puVar3[1];
  do {
    puVar4 = puVar5;
    piVar2 = (int *)*param_3;
    for (piVar1 = (int *)puVar4[4]; piVar1 != (int *)puVar4[5]; piVar1 = piVar1 + 1) {
      if (piVar2 == (int *)param_3[1]) {
        if (piVar1 != (int *)puVar4[5]) goto LAB_143a4f9ac;
        break;
      }
      if (*piVar1 < *piVar2) goto LAB_143a4f9a6;
      if (*piVar2 < *piVar1) goto LAB_143a4f9ac;
      piVar2 = piVar2 + 1;
    }
    if (piVar2 == (int *)param_3[1]) {
LAB_143a4f9ac:
      puVar5 = (undefined8 *)*puVar4;
    }
    else {
LAB_143a4f9a6:
      puVar5 = (undefined8 *)puVar4[2];
      puVar4 = puVar3;
    }
    puVar3 = puVar4;
    if (*(char *)((longlong)puVar5 + 0x19) != '\0') {
      *param_2 = (longlong)puVar4;
      return param_2;
    }
  } while( true );
}



// FUNCTION 143a4f9e0 FUN_143a4f9e0 body=174 status=ok
// SIG undefined FUN_143a4f9e0(void)

undefined8 FUN_143a4f9e0(longlong param_1)

{
  once_flag *poVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 *local_20;
  longlong *local_18;
  undefined1 *local_10;
  
  poVar1 = *(once_flag **)(param_1 + 0x30);
  if (poVar1 != (once_flag *)0x0) {
    local_res8[0] = param_1;
    _guard_xfg_dispatch_icall_nop(local_40);
    local_20 = local_40;
    local_18 = local_res8;
    local_10 = &LAB_143a48e80;
    iVar3 = std::_guard_xfg_dispatch_icall_nop(poVar1,FUN_143a012f0,&local_20);
    if (iVar3 == 0) {
      bVar2 = _guard_xfg_dispatch_icall_nop(local_40);
      if (bVar2) {
        uVar4 = std::exception_ptr::exception_ptr(local_30,local_40);
                    /* WARNING: Subroutine does not return */
        FUN_143a00820(uVar4);
      }
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    _guard_xfg_dispatch_icall_nop(local_40);
  }
  return *(undefined8 *)(param_1 + 0x68);
}



// FUNCTION 143a4fa90 FUN_143a4fa90 body=176 status=ok
// SIG undefined FUN_143a4fa90(void)

void FUN_143a4fa90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    uVar2 = param_2[5];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar2;
    uVar2 = param_2[7];
    puVar1[6] = param_2[6];
    puVar1[7] = uVar2;
    param_2[6] = 0;
    param_2[7] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[10] = param_2[10];
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    puVar1[0xb] = param_2[0xb];
    puVar1[0xc] = param_2[0xc];
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x68;
    return;
  }
  FUN_143a22720();
  return;
}



// FUNCTION 143a4fb40 replace body=414 status=ok
// SIG undefined replace(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3,void *param_4,size_t param_5)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  void *_Src;
  size_t _Size;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    _String_val<std::_Simple_types<char>_>::_Xran();
  }
  uVar6 = uVar2 - param_2;
  uVar3 = param_1[3];
  if (uVar6 < param_3) {
    param_3 = uVar6;
  }
  if (param_3 == param_5) {
    puVar4 = param_1;
    if (0xf < uVar3) {
      puVar4 = (undefined8 *)*param_1;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)((longlong)puVar4 + param_2),param_4,param_5);
  }
  else if (param_5 < param_3) {
    param_1[2] = (uVar2 - param_3) + param_5;
    puVar4 = param_1;
    if (0xf < uVar3) {
      puVar4 = (undefined8 *)*param_1;
    }
    pvVar1 = (void *)((longlong)puVar4 + param_2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,param_4,param_5);
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar1 + param_5),(void *)((longlong)pvVar1 + param_3),
               (uVar6 - param_3) + 1);
  }
  else {
    uVar5 = param_5 - param_3;
    if (uVar3 - uVar2 < uVar5) {
      param_1 = (undefined8 *)
                _Reallocate_grow_by<<lambda_16d2cb92461ac9818af78a76c749bd7f>,unsigned___int64,unsigned___int64,char_const_*,unsigned___int64>
                          (param_1,uVar5,0,param_2,param_3,param_4,param_5);
    }
    else {
      param_1[2] = uVar5 + uVar2;
      puVar4 = param_1;
      if (0xf < uVar3) {
        puVar4 = (undefined8 *)*param_1;
      }
      pvVar1 = (void *)((longlong)puVar4 + param_2);
      _Src = (void *)(param_3 + (longlong)pvVar1);
      _Size = param_5;
      if ((pvVar1 < (void *)((longlong)param_4 + param_5)) &&
         (param_4 <= (void *)((longlong)puVar4 + uVar2))) {
        if (param_4 < _Src) {
          _Size = (longlong)_Src - (longlong)param_4;
        }
        else {
          _Size = 0;
        }
      }
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + uVar5),_Src,(uVar6 - param_3) + 1);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_4,_Size);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(_Size + (longlong)pvVar1),(void *)(_Size + uVar5 + (longlong)param_4),
                 param_5 - _Size);
    }
  }
  return param_1;
}



// FUNCTION 143a4fce0 FUN_143a4fce0 body=271 status=ok
// SIG undefined FUN_143a4fce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a4fce0(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  local_20 = 0;
  uStack_18 = 0xf;
  local_30 = 0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_2 + lVar5) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_30);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  else {
    uVar4 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
  }
  puVar1 = *(undefined **)(param_1 + 0xc0);
  if (puVar1 == &DAT_146ba2f50) {
    FUN_141505a20(param_1 + 0xc0,uVar4,&local_30);
  }
  else if (puVar1 != &local_30) {
    puVar3 = &local_30;
    if (0xf < uStack_18) {
      puVar3 = (undefined1 *)CONCAT71(uStack_2f,local_30);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar1,puVar3,local_20);
  }
  if (0xf < uStack_18) {
    uVar4 = uStack_18 + 1;
    lVar2 = CONCAT71(uStack_2f,local_30);
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      uVar4 = uStack_18 + 0x28;
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar5,uVar4);
  }
  return;
}



// FUNCTION 143a4fdf0 FUN_143a4fdf0 body=265 status=ok
// SIG undefined FUN_143a4fdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a4fdf0(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  local_20 = 0;
  uStack_18 = 0xf;
  local_30 = 0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_2 + lVar5) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_30);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  else {
    uVar4 = *(ulonglong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 0x18);
  }
  puVar1 = *(undefined **)(param_1 + 0x28);
  if (puVar1 == &DAT_146ba2f50) {
    FUN_141505a20(param_1 + 0x28,uVar4,&local_30);
  }
  else if (puVar1 != &local_30) {
    puVar3 = &local_30;
    if (0xf < uStack_18) {
      puVar3 = (undefined1 *)CONCAT71(uStack_2f,local_30);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar1,puVar3,local_20);
  }
  if (0xf < uStack_18) {
    uVar4 = uStack_18 + 1;
    lVar2 = CONCAT71(uStack_2f,local_30);
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      uVar4 = uStack_18 + 0x28;
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar5,uVar4);
  }
  return;
}



// FUNCTION 143a4ff00 FUN_143a4ff00 body=278 status=ok
// SIG undefined FUN_143a4ff00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_143a4ff00(int *param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_58 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_1 = param_2;
  piVar1 = param_1 + 2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)piVar1 = 0;
  if (param_2 != 0) {
    local_48._0_1_ = 0;
    local_50 = param_1;
    if (*param_3 == 0) {
      local_38 = 0;
      uStack_30 = 0xf;
    }
    else {
      local_38 = 0;
      uStack_30 = 0xf;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_48,*param_3,param_3[1]);
    }
    uVar5 = uStack_30;
    uVar3 = local_38;
    if (piVar1 == (int *)&local_48) {
      if (0xf < uStack_30) {
        uVar5 = uStack_30 + 1;
        lVar2 = CONCAT71(local_48._1_7_,(undefined1)local_48);
        lVar4 = lVar2;
        if (0xfff < uVar5) {
          uVar5 = uStack_30 + 0x28;
          lVar4 = *(longlong *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar4,uVar5);
      }
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(piVar1)
      ;
      *(ulonglong *)piVar1 = CONCAT71(local_48._1_7_,(undefined1)local_48);
      *(undefined8 *)(param_1 + 4) = uStack_40;
      *(undefined8 *)(param_1 + 6) = uVar3;
      *(ulonglong *)(param_1 + 8) = uVar5;
    }
  }
  return param_1;
}



// FUNCTION 143a50020 FUN_143a50020 body=115 status=ok
// SIG undefined FUN_143a50020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a50020(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1439eeb00(local_48,3,
                        "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream.cc");
  uVar1 = FUN_1439eef00(uVar1,
                        "This ZeroCopyOutputStream doesn\'t support aliasing. Reaching here usually means a ZeroCopyOutputStream implementation bug."
                       );
  FUN_1439eec50(local_58,uVar1);
  uVar2 = DsDevice::~DsDevice(local_48);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143a500a0 FUN_143a500a0 body=39 status=ok
// SIG undefined FUN_143a500a0(void)

undefined8 * FUN_143a500a0(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  *(int *)(param_1 + 2) = param_3;
  *param_1 = google::protobuf::io::ArrayInputStream::vftable;
  param_1[1] = param_2;
  if (0 < param_4) {
    param_3 = param_4;
  }
  param_1[3] = 0;
  *(int *)((longlong)param_1 + 0x14) = param_3;
  return param_1;
}



// FUNCTION 143a500d0 FUN_143a500d0 body=39 status=ok
// SIG undefined FUN_143a500d0(void)

undefined8 * FUN_143a500d0(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  *(int *)(param_1 + 2) = param_3;
  *param_1 = google::protobuf::io::ArrayOutputStream::vftable;
  param_1[1] = param_2;
  if (0 < param_4) {
    param_3 = param_4;
  }
  param_1[3] = 0;
  *(int *)((longlong)param_1 + 0x14) = param_3;
  return param_1;
}



// FUNCTION 143a50100 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = google::protobuf::io::StringOutputStream::vftable;
  return param_1;
}



// FUNCTION 143a50120 FUN_143a50120 body=43 status=ok
// SIG undefined FUN_143a50120(void)

undefined8 * FUN_143a50120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::io::ZeroCopyInputStream::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143a50150 FUN_143a50150 body=43 status=ok
// SIG undefined FUN_143a50150(void)

undefined8 * FUN_143a50150(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::io::ZeroCopyOutputStream::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143a50180 FUN_143a50180 body=43 status=ok
// SIG undefined FUN_143a50180(void)

undefined8 * FUN_143a50180(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::io::ZeroCopyOutputStream::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143a501b0 FUN_143a501b0 body=361 status=ok
// SIG undefined FUN_143a501b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a501b0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  uint local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 1) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x52);
    local_54 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (last_returned_size_) > (0): ");
    uVar2 = FUN_1439eef00(uVar2,"BackUp() can only be called after a successful Next().");
    FUN_1439eec50(local_58,uVar2);
  }
  uVar3 = (uint)(iVar1 < 1);
  if (iVar1 < 1) {
    uVar3 = 0;
    DsDevice::~DsDevice(local_48);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                         );
    uVar3 = uVar3 | 2;
    local_54 = uVar3;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (count) <= (last_returned_size_): ");
    FUN_1439eec50(local_58,uVar2);
  }
  if ((uVar3 & 2) != 0) {
    uVar3 = uVar3 & 0xfffffffd;
    DsDevice::~DsDevice(local_48);
  }
  if (param_2 < 0) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                         );
    uVar3 = uVar3 | 4;
    local_54 = uVar3;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (count) >= (0): ");
    FUN_1439eec50(local_58,uVar2);
  }
  if ((uVar3 & 4) != 0) {
    DsDevice::~DsDevice(local_48);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 143a50320 FUN_143a50320 body=365 status=ok
// SIG undefined FUN_143a50320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a50320(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  uint local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 1) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x84);
    local_54 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (last_returned_size_) > (0): ");
    uVar2 = FUN_1439eef00(uVar2,"BackUp() can only be called after a successful Next().");
    FUN_1439eec50(local_58,uVar2);
  }
  uVar3 = (uint)(iVar1 < 1);
  if (iVar1 < 1) {
    uVar3 = 0;
    DsDevice::~DsDevice(local_48);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x86);
    uVar3 = uVar3 | 2;
    local_54 = uVar3;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (count) <= (last_returned_size_): ");
    FUN_1439eec50(local_58,uVar2);
  }
  if ((uVar3 & 2) != 0) {
    uVar3 = uVar3 & 0xfffffffd;
    DsDevice::~DsDevice(local_48);
  }
  if (param_2 < 0) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x87);
    uVar3 = uVar3 | 4;
    local_54 = uVar3;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (count) >= (0): ");
    FUN_1439eec50(local_58,uVar2);
  }
  if ((uVar3 & 4) != 0) {
    DsDevice::~DsDevice(local_48);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 143a50490 FUN_143a50490 body=469 status=ok
// SIG undefined FUN_143a50490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a50490(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong _Size;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [4];
  uint local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_54 = 0;
  bVar6 = param_2 < 0;
  if (bVar6) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0xb6);
    local_54 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (count) >= (0): ");
    FUN_1439eec50(local_58,uVar2);
  }
  uVar5 = (uint)bVar6;
  if (bVar6) {
    uVar5 = 0;
    DsDevice::~DsDevice(local_48);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0xb7);
    uVar5 = uVar5 | 2;
    local_54 = uVar5;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: target_ != NULL: ");
    FUN_1439eec50(local_58,uVar2);
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    DsDevice::~DsDevice(local_48);
  }
  if (*(ulonglong *)(*(longlong *)(param_1 + 8) + 0x10) < (ulonglong)(longlong)param_2) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0xb8);
    uVar5 = uVar5 | 4;
    local_54 = uVar5;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (count) <= (target_->size()): ");
    FUN_1439eec50(local_58,uVar2);
  }
  if ((uVar5 & 4) != 0) {
    DsDevice::~DsDevice(local_48);
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar1 = puVar3[2];
  uVar4 = uVar1 - (longlong)param_2;
  if (uVar1 < uVar4) {
    _Size = uVar4 - uVar1;
    if (puVar3[3] - uVar1 < _Size) {
      local_68 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char>
                (puVar3,_Size,0,_Size);
    }
    else {
      puVar3[2] = uVar4;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + uVar1),0,_Size);
      *(undefined1 *)((longlong)((longlong)puVar3 + uVar1) + _Size) = 0;
    }
  }
  else {
    puVar3[2] = uVar4;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    *(undefined1 *)((longlong)puVar3 + uVar4) = 0;
  }
  return;
}



// FUNCTION 143a50670 FUN_143a50670 body=5 status=ok
// SIG undefined FUN_143a50670(void)

longlong FUN_143a50670(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0x18);
}



// FUNCTION 143a50680 FUN_143a50680 body=169 status=ok
// SIG undefined FUN_143a50680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a50680(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0xbd);
    local_54 = 1;
    uVar1 = FUN_1439eef00(uVar1,"CHECK failed: target_ != NULL: ");
    FUN_1439eec50(local_58,uVar1);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
}



// FUNCTION 143a50730 FUN_143a50730 body=64 status=ok
// SIG undefined FUN_143a50730(void)

ulonglong FUN_143a50730(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong in_RAX;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10) - iVar1;
    if (*(int *)(param_1 + 0x14) <= iVar2) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
    *param_2 = (longlong)iVar1 + *(longlong *)(param_1 + 8);
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x1c) >> 8),1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143a50770 FUN_143a50770 body=335 status=ok
// SIG undefined FUN_143a50770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a50770(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar3 = FUN_1439eeb00(local_68,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x97);
    local_74 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: target_ != NULL: ");
    FUN_1439eec50(local_78,uVar3);
    DsDevice::~DsDevice(local_68);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = *(ulonglong *)(lVar1 + 0x18);
  iVar6 = (int)*(undefined8 *)(lVar1 + 0x10);
  if (uVar4 <= (ulonglong)(longlong)iVar6) {
    if (0x3fffffff < iVar6) {
      uVar3 = FUN_1439eeb00(local_68,2,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                            ,0xa4);
      uVar3 = FUN_1439eef00(uVar3,"Cannot allocate buffer larger than kint32max for ");
      uVar3 = FUN_1439eef00(uVar3,"StringOutputStream.");
      FUN_1439eec50(local_78,uVar3);
      uVar4 = DsDevice::~DsDevice(local_68);
      return uVar4 & 0xffffffffffffff00;
    }
    iVar2 = iVar6 * 2;
    if (iVar2 < 0x10) {
      iVar2 = 0x10;
    }
    uVar4 = (ulonglong)iVar2;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(lVar1,uVar4,0);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (0xf < (ulonglong)puVar5[3]) {
    puVar5 = (undefined8 *)*puVar5;
  }
  *param_2 = (longlong)puVar5 + (longlong)iVar6;
  lVar1 = *(longlong *)(param_1 + 8);
  *param_3 = *(int *)(lVar1 + 0x10) - iVar6;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 143a508c0 FUN_143a508c0 body=199 status=ok
// SIG undefined FUN_143a508c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a508c0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  if (param_2 < 0) {
    uVar2 = FUN_1439eeb00(local_48,3,
                          "c:\\dev\\protobuf\\src\\google\\protobuf\\io\\zero_copy_stream_impl_lite.cc"
                          ,0x5b);
    local_54 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: (count) >= (0): ");
    FUN_1439eec50(local_58,uVar2);
    DsDevice::~DsDevice(local_48);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x10);
    lVar3 = (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
  }
  else {
    param_2 = *(int *)(param_1 + 0x18) + param_2;
    *(int *)(param_1 + 0x18) = param_2;
    lVar3 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
  }
  return lVar3;
}



// FUNCTION 143a50990 FUN_143a50990 body=366 status=ok
// SIG undefined FUN_143a50990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a50990(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  uint local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  bVar1 = 0x7ffffffffffffff < param_2;
  if (bVar1) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\arena.h",0x156);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,
                          "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): "
                         );
    uVar2 = FUN_1439eef00(uVar2,"Requested size is too large to fit into size_t.");
    FUN_1439eec50(local_68,uVar2);
  }
  uVar3 = (uint)bVar1;
  if (bVar1) {
    uVar3 = 0;
    DsDevice::~DsDevice(local_58);
  }
  if (param_1 == 0) {
    operator_new(param_2 << 5);
  }
  else {
    if (0x7ffffffffffffff < param_2) {
      uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\arena.h",0x248);
      uVar3 = uVar3 | 2;
      local_64 = uVar3;
      uVar2 = FUN_1439eef00(uVar2,
                            "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): "
                           );
      uVar2 = FUN_1439eef00(uVar2,"Requested size is too large to fit into size_t.");
      FUN_1439eec50(local_68,uVar2);
    }
    if ((uVar3 & 2) != 0) {
      DsDevice::~DsDevice(local_58);
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,&google::protobuf::internal::ExtensionSet::KeyValue::
                             RTTI_Type_Descriptor,param_2 * 0x20);
    }
    FUN_1439efd10(param_1,param_2 * 0x20);
  }
  return;
}



// FUNCTION 143a50b00 FUN_143a50b00 body=117 status=ok
// SIG undefined FUN_143a50b00(void)

void FUN_143a50b00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      FUN_1439f1850(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::RepeatedField<int>::RTTI_Type_Descriptor,0x10,param_4,
                  0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x10,&LAB_143a515f0);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(uVar2,param_1);
  return;
}



// FUNCTION 143a50b80 FUN_143a50b80 body=117 status=ok
// SIG undefined FUN_143a50b80(void)

void FUN_143a50b80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      FUN_1439f1850(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::RepeatedField<unsigned_int>::RTTI_Type_Descriptor,0x10,
                  param_4,0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x10,&LAB_143a515f0);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(uVar2,param_1);
  return;
}



// FUNCTION 143a50c00 FUN_143a50c00 body=117 status=ok
// SIG undefined FUN_143a50c00(void)

void FUN_143a50c00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      FUN_1439f1850(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::RepeatedField<float>::RTTI_Type_Descriptor,0x10,param_4
                  ,0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x10,&LAB_143a515f0);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(uVar2,param_1);
  return;
}



// FUNCTION 143a50c80 FUN_143a50c80 body=117 status=ok
// SIG undefined FUN_143a50c80(void)

void FUN_143a50c80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      FUN_1439f1850(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::RepeatedField<double>::RTTI_Type_Descriptor,0x10,
                  param_4,0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x10,&LAB_143a51600);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(uVar2,param_1);
  return;
}



// FUNCTION 143a50d00 FUN_143a50d00 body=117 status=ok
// SIG undefined FUN_143a50d00(void)

void FUN_143a50d00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      FUN_1439f1850(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::RepeatedField<__int64>::RTTI_Type_Descriptor,0x10,
                  param_4,0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x10,&LAB_143a51600);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(uVar2,param_1);
  return;
}



// FUNCTION 143a50d80 FUN_143a50d80 body=117 status=ok
// SIG undefined FUN_143a50d80(void)

void FUN_143a50d80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      FUN_1439f1850(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::RepeatedField<unsigned___int64>::RTTI_Type_Descriptor,
                  0x10,param_4,0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x10,&LAB_143a51600);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(uVar2,param_1);
  return;
}



// FUNCTION 143a50e00 FUN_143a50e00 body=117 status=ok
// SIG undefined FUN_143a50e00(void)

void FUN_143a50e00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      FUN_1439f1850(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::RepeatedField<bool>::RTTI_Type_Descriptor,0x10,param_4,
                  0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x10,&LAB_143a51610);
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>::
  FRichCurveEditInfoTemplate<FRichCurve_const_*___ptr64>(uVar2,param_1);
  return;
}



// FUNCTION 143a50e80 FUN_143a50e80 body=117 status=ok
// SIG undefined FUN_143a50e80(void)

void FUN_143a50e80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    lVar1 = operator_new(0x18);
    if (lVar1 != 0) {
      FTextSnapshot::FTextSnapshot(lVar1);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1439f01b0(param_1,&google::protobuf::
                           RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           ::RTTI_Type_Descriptor,0x18,param_4,0xfffffffffffffffe);
  }
  uVar2 = FUN_1439efdc0(param_1,0x18,&LAB_143a51620);
  FUN_1439f18b0(uVar2,param_1);
  return;
}



// FUNCTION 143a50f00 FUN_143a50f00 body=124 status=ok
// SIG undefined FUN_143a50f00(void)

longlong * FUN_143a50f00(longlong param_1)

{
  longlong *plVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1439f01b0(param_1,&google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::
                             RTTI_Type_Descriptor,0x18);
    }
    plVar1 = (longlong *)FUN_1439efdc0(param_1,0x18,&LAB_143a51630);
    *plVar1 = param_1;
    plVar1[2] = 0;
    plVar1[1] = 0;
    return plVar1;
  }
  plVar1 = (longlong *)operator_new();
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    return plVar1;
  }
  return (longlong *)0x0;
}



// FUNCTION 143a50f80 FUN_143a50f80 body=59 status=ok
// SIG undefined FUN_143a50f80(void)

void FUN_143a50f80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = std::
          _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
          ::_Buynode0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(lVar2 + 0x30) = param_2[2];
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  return;
}



// FUNCTION 143a50fc0 FUN_143a50fc0 body=655 status=ok
// SIG undefined FUN_143a50fc0(void)

undefined8 *
FUN_143a50fc0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x3fffffffffffffd < (ulonglong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  plVar5 = (longlong *)FUN_143a50f80(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar10 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar7 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar10[1];
    plVar8 = plVar10 + 1;
    plVar9 = plVar2 + 1;
    lVar7 = *(longlong *)plVar2[1];
    if (plVar2 == (longlong *)lVar7) {
      lVar7 = ((longlong *)plVar2[1])[2];
      if (*(char *)(lVar7 + 0x18) != '\0') {
        plVar3 = (longlong *)plVar2[2];
        plVar6 = plVar2;
        if (plVar10 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(longlong **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar9;
          plVar6 = plVar3;
          plVar8 = plVar9;
          if (plVar2 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar3;
            *plVar3 = (longlong)plVar2;
            *plVar9 = (longlong)plVar3;
            plVar10 = plVar2;
          }
          else {
            plVar10 = (longlong *)*plVar9;
            if (plVar2 == (longlong *)*plVar10) {
              *plVar10 = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar9 = (longlong)plVar3;
              plVar10 = plVar2;
            }
            else {
              plVar10[2] = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar9 = (longlong)plVar3;
              plVar10 = plVar2;
            }
          }
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar9 = (longlong *)*plVar8;
        *plVar8 = plVar9[2];
        if (*(char *)(plVar9[2] + 0x19) == '\0') {
          *(longlong **)(plVar9[2] + 8) = plVar8;
        }
        plVar9[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar9;
          plVar9[2] = (longlong)plVar8;
        }
        else {
          plVar2 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
          else {
            *plVar2 = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
        }
        goto LAB_143a51205;
      }
LAB_143a51176:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_143a51176;
      if (plVar10 == (longlong *)*plVar2) {
        std::
        _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
        ::_Rrotate(param_1,plVar2);
        plVar10 = plVar2;
      }
      *(undefined1 *)(plVar10[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar10[1] + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(plVar10[1] + 8);
      plVar9 = (longlong *)plVar8[2];
      plVar8[2] = *plVar9;
      if (*(char *)(*plVar9 + 0x19) == '\0') {
        *(longlong **)(*plVar9 + 8) = plVar8;
      }
      plVar9[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar9;
      }
      else {
        puVar4 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar9;
        }
        else {
          puVar4[2] = plVar9;
        }
      }
      *plVar9 = (longlong)plVar8;
LAB_143a51205:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}



// FUNCTION 143a51250 FUN_143a51250 body=563 status=ok
// SIG undefined FUN_143a51250(void)

undefined8 *
FUN_143a51250(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4,
             undefined1 param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 uVar7;
  undefined1 local_30 [24];
  
  uVar7 = 0xfffffffffffffffe;
  local_res8 = (longlong *)0x0;
  if (param_1[1] == 0) {
    FUN_143a50fc0(param_1,param_2,1,*param_1,param_4,param_5,0xfffffffffffffffe);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < (int)param_3[4]) {
        FUN_143a50fc0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(int *)(plVar3[2] + 0x20) < *param_4) {
        FUN_143a50fc0(param_1,param_2,0,plVar3[2],param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    else {
      iVar2 = *param_4;
      if ((iVar2 < (int)param_3[4]) &&
         (local_res8 = param_3,
         plVar5 = (longlong *)
                  std::
                  _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>
                  ::operator--(&local_res8), *(int *)(*plVar5 + 0x20) < iVar2)) {
        if (*(char *)(local_res8[2] + 0x19) != '\0') {
          FUN_143a50fc0(param_1,param_2,0,local_res8,param_4,param_5);
          return param_2;
        }
        FUN_143a50fc0(param_1,param_2,1,param_3,param_4,param_5);
        return param_2;
      }
      if ((int)param_3[4] < iVar2) {
        local_res8 = (longlong *)param_3[2];
        if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
          cVar1 = *(char *)(*local_res8 + 0x19);
          plVar5 = (longlong *)*local_res8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            local_res8 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar4 = (longlong *)param_3[1];
          plVar5 = param_3;
          while ((local_res8 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)local_res8[2]))) {
            cVar1 = *(char *)(local_res8[1] + 0x19);
            plVar4 = (longlong *)local_res8[1];
            plVar5 = local_res8;
          }
        }
        if ((local_res8 == plVar3) || (iVar2 < (int)local_res8[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_143a50fc0(param_1,param_2,0,param_3,param_4,param_5,uVar7);
            return param_2;
          }
          FUN_143a50fc0(param_1,param_2,1,local_res8,param_4,param_5,uVar7);
          return param_2;
        }
      }
    }
    puVar6 = (undefined8 *)FUN_143a51490(param_1,local_30,0,param_4,param_5);
    *param_2 = *puVar6;
  }
  return param_2;
}



// FUNCTION 143a51490 FUN_143a51490 body=344 status=ok
// SIG undefined FUN_143a51490(void)

undefined8 *
FUN_143a51490(longlong *param_1,undefined8 *param_2,char param_3,int *param_4,undefined1 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar3 = (undefined8 *)*param_1;
  bVar5 = true;
  puVar6 = puVar3;
  if (*(char *)((longlong)puVar3[1] + 0x19) == '\0') {
    puVar4 = (undefined8 *)puVar3[1];
    do {
      puVar6 = puVar4;
      if (param_3 == '\0') {
        bVar5 = *param_4 < *(int *)(puVar6 + 4);
      }
      else {
        bVar5 = *param_4 <= *(int *)(puVar6 + 4);
      }
      if (bVar5 == false) {
        puVar4 = (undefined8 *)puVar6[2];
      }
      else {
        puVar4 = (undefined8 *)*puVar6;
      }
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
  }
  puVar4 = puVar6;
  if (bVar5 != false) {
    if (puVar6 == (undefined8 *)*puVar3) {
      puVar3 = (undefined8 *)
               FUN_143a50fc0(param_1,local_res8,1,puVar6,param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      puVar4 = (undefined8 *)*puVar6;
      if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar4[2] + 0x19);
        puVar3 = (undefined8 *)puVar4[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar3[2] + 0x19);
          puVar4 = puVar3;
          puVar3 = (undefined8 *)puVar3[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar3 = (undefined8 *)puVar6[1];
        puVar4 = puVar6;
        while ((puVar2 = puVar3, cVar1 == '\0' && (puVar4 == (undefined8 *)*puVar2))) {
          cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
          puVar3 = (undefined8 *)puVar2[1];
          puVar4 = puVar2;
        }
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          puVar4 = puVar2;
        }
      }
    }
    else {
      puVar4 = (undefined8 *)puVar6[2];
    }
  }
  if (*(int *)(puVar4 + 4) < *param_4) {
    puVar3 = (undefined8 *)
             FUN_143a50fc0(param_1,local_res8,bVar5,puVar6,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a51640 FUN_143a51640 body=54 status=ok
// SIG undefined FUN_143a51640(void)

void FUN_143a51640(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143a58100(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1,0xfffffffffffffffe
               );
  FMemory::operator_delete(*param_1,0x40);
  return;
}



// FUNCTION 143a51680 FUN_143a51680 body=16 status=ok
// SIG undefined FUN_143a51680(void)

undefined8 * FUN_143a51680(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143a51690 FAudioVirtualLoop body=16 status=ok
// SIG undefined FAudioVirtualLoop(void)

undefined8 * FAudioVirtualLoop::FAudioVirtualLoop(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143a516a0 ~FImplicitObject body=11 status=ok
// SIG undefined ~FImplicitObject(void)

void Chaos::FImplicitObject::~FImplicitObject(undefined8 *param_1)

{
  *param_1 = google::protobuf::internal::ExtensionFinder::vftable;
  return;
}



// FUNCTION 143a516b0 FUN_143a516b0 body=333 status=ok
// SIG undefined FUN_143a516b0(void)

void FUN_143a516b0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    if (*(ushort *)(param_1 + 1) < 0x101) {
      lVar6 = param_1[2];
      lVar7 = (ulonglong)*(ushort *)((longlong)param_1 + 10) * 0x20 + lVar6;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x20) {
        FUN_143a532c0(lVar6 + 8);
      }
    }
    else {
      puVar2 = *(undefined8 **)param_1[2];
      puVar3 = (undefined8 *)*puVar2;
      while (puVar3 != puVar2) {
        FUN_143a532c0(puVar3 + 5);
        puVar4 = (undefined8 *)puVar3[2];
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x19);
          puVar3 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar4 + 0x19);
            puVar3 = puVar4;
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
          puVar5 = (undefined8 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar3[2]))) {
            cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
            puVar5 = (undefined8 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
    if (*(ushort *)(param_1 + 1) < 0x101) {
      FMemory::operator_delete(param_1[2],(ulonglong)*(ushort *)(param_1 + 1) << 5);
    }
    else {
      puVar2 = (undefined8 *)param_1[2];
      if (puVar2 != (undefined8 *)0x0) {
        FUN_143a58100(puVar2,local_res8,*(undefined8 *)*puVar2,(undefined8 *)*puVar2,uVar8);
        FMemory::operator_delete(*puVar2,0x40);
        FMemory::operator_delete(puVar2,0x10);
      }
    }
  }
  return;
}



// FUNCTION 143a51800 FUN_143a51800 body=43 status=ok
// SIG undefined FUN_143a51800(void)

undefined8 * FUN_143a51800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::internal::ExtensionFinder::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143a51830 FUN_143a51830 body=43 status=ok
// SIG undefined FUN_143a51830(void)

undefined8 * FUN_143a51830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::internal::FieldSkipper::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143a51860 FUN_143a51860 body=43 status=ok
// SIG undefined FUN_143a51860(void)

undefined8 * FUN_143a51860(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::internal::ExtensionFinder::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143a51890 FUN_143a51890 body=193 status=ok
// SIG undefined FUN_143a51890(void)

void FUN_143a51890(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
LAB_143a51923:
    FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  }
  else {
    iVar1 = *piVar3;
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    iVar5 = (int)param_1[1];
    lVar6 = (longlong)iVar5;
    if (iVar1 < iVar2) {
      if (iVar5 < iVar1) {
        *(undefined8 *)(piVar3 + (longlong)iVar1 * 2 + 2) = *(undefined8 *)(piVar3 + lVar6 * 2 + 2);
        iVar5 = (int)param_1[1];
      }
      *(undefined8 *)(piVar3 + (longlong)iVar5 * 2 + 2) = param_2;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
      return;
    }
    if (iVar5 == iVar2) goto LAB_143a51923;
    if (iVar1 == iVar2) {
      if ((*param_1 == 0) &&
         (puVar4 = *(undefined8 **)(piVar3 + lVar6 * 2 + 2), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)(puVar4,1);
      }
      goto LAB_143a51936;
    }
    if (iVar1 <= iVar5) {
      *piVar3 = iVar1 + 1;
      goto LAB_143a51936;
    }
    *(undefined8 *)(piVar3 + (longlong)iVar1 * 2 + 2) = *(undefined8 *)(piVar3 + lVar6 * 2 + 2);
  }
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
LAB_143a51936:
  *(undefined8 *)(param_1[2] + 8 + (longlong)(int)param_1[1] * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



// FUNCTION 143a51960 FUN_143a51960 body=153 status=ok
// SIG undefined FUN_143a51960(void)

void FUN_143a51960(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_6;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    uVar4 = FUN_143a50e00(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f1a40(*puVar1,&param_5);
  return;
}



// FUNCTION 143a51a00 FUN_143a51a00 body=153 status=ok
// SIG undefined FUN_143a51a00(void)

void FUN_143a51a00(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_6;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    uVar4 = FUN_143a50c80(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f1a00(*puVar1,&param_5);
  return;
}



// FUNCTION 143a51aa0 FUN_143a51aa0 body=153 status=ok
// SIG undefined FUN_143a51aa0(void)

void FUN_143a51aa0(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_6;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    uVar4 = FUN_143a50b00(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f19c0(*puVar1,&param_5);
  return;
}



// FUNCTION 143a51b40 FUN_143a51b40 body=153 status=ok
// SIG undefined FUN_143a51b40(void)

void FUN_143a51b40(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_6;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    uVar4 = FUN_143a50c00(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f19c0(*puVar1,&param_5);
  return;
}



// FUNCTION 143a51be0 FUN_143a51be0 body=153 status=ok
// SIG undefined FUN_143a51be0(void)

void FUN_143a51be0(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_6;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    uVar4 = FUN_143a50d00(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f1a00(*puVar1,&param_5);
  return;
}



// FUNCTION 143a51c80 FUN_143a51c80 body=190 status=ok
// SIG undefined FUN_143a51c80(void)

longlong FUN_143a51c80(undefined8 *param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
                      longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_28 [16];
  
  plVar5 = (longlong *)FUN_143a540a0(param_1,local_28,param_2,param_4,0);
  plVar2 = (longlong *)*plVar5;
  lVar6 = plVar5[1];
  plVar2[2] = param_5;
  if ((char)lVar6 != '\0') {
    *(undefined1 *)(plVar2 + 1) = param_3;
    *(undefined1 *)((longlong)plVar2 + 9) = 1;
    lVar6 = FUN_143a50f00(*param_1);
    *plVar2 = lVar6;
  }
  lVar6 = *plVar2;
  piVar3 = *(int **)(lVar6 + 0x10);
  if (piVar3 != (int *)0x0) {
    iVar1 = *(int *)(lVar6 + 8);
    if (iVar1 < *piVar3) {
      lVar4 = *(longlong *)(piVar3 + (longlong)iVar1 * 2 + 2);
      *(int *)(lVar6 + 8) = iVar1 + 1;
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  lVar6 = (**(code **)(*param_4 + 0x10))(param_4,*param_1);
  FUN_143a51890(*plVar2,lVar6);
  return lVar6;
}



// FUNCTION 143a51d40 FUN_143a51d40 body=142 status=ok
// SIG undefined FUN_143a51d40(void)

void FUN_143a51d40(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_4;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = 0;
    uVar4 = FUN_143a50e80(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f1a80(*puVar1);
  return;
}



// FUNCTION 143a51dd0 FUN_143a51dd0 body=153 status=ok
// SIG undefined FUN_143a51dd0(void)

void FUN_143a51dd0(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_6;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    uVar4 = FUN_143a50b80(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f19c0(*puVar1,&param_5);
  return;
}



// FUNCTION 143a51e70 FUN_143a51e70 body=153 status=ok
// SIG undefined FUN_143a51e70(void)

void FUN_143a51e70(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_6;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    uVar4 = FUN_143a50d80(*param_1);
    *puVar1 = uVar4;
  }
  FUN_1439f1a00(*puVar1,&param_5);
  return;
}



// FUNCTION 143a51f10 FUN_143a51f10 body=2493 status=ok
// SIG undefined FUN_143a51f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a51f10(ulonglong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  int *piVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar12 = 0;
  uVar11 = 0;
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    if (*(char *)((longlong)param_1 + 0xb) == '\0') {
      uVar3 = param_2 * 8 | 1;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar10 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
      uVar11 = uVar10 * 2;
      if ((char)param_1[1] != '\n') {
        uVar11 = uVar10;
      }
      switch((char)param_1[1]) {
      case '\x01':
        uVar3 = FUN_1439f2ae0(*param_1);
        return (ulonglong)uVar3 * (uVar11 + 8);
      case '\x02':
        uVar3 = FUN_1439f2ae0(*param_1);
        return (ulonglong)uVar3 * (uVar11 + 4);
      case '\x03':
        goto switchD_143a522f1_caseD_3;
      case '\x04':
        uVar3 = FUN_1439f2ae0(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = FUN_1439f2ae0(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          puVar4 = (ulonglong *)FUN_1439f1d10(*param_1,uVar12);
          lVar9 = 0x3f;
          if ((*puVar4 | 1) != 0) {
            for (; (*puVar4 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar11 = uVar11 + ((int)lVar9 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      case '\x05':
        uVar3 = FUN_1439f2ae0(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = FUN_1439f2ae0(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar12);
          if ((int)*puVar7 < 0) {
            uVar10 = 10;
          }
          else {
            uVar3 = *puVar7 | 1;
            iVar2 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            uVar10 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
          }
          uVar11 = uVar11 + uVar10;
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      case '\x06':
        uVar3 = FUN_1439f2ae0(*param_1);
        return (ulonglong)uVar3 * (uVar11 + 8);
      case '\a':
        uVar3 = FUN_1439f2ae0(*param_1);
        return (ulonglong)uVar3 * (uVar11 + 4);
      case '\b':
        uVar3 = FUN_1439f2ae0(*param_1);
        return (ulonglong)uVar3 * (uVar11 + 1);
      case '\t':
        uVar3 = IStreamingManager::GetNumWantingResources(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          lVar9 = FUN_1439f1d30(*param_1,uVar12);
          uVar3 = (uint)*(longlong *)(lVar9 + 0x10) | 1;
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar11 = uVar11 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + *(longlong *)(lVar9 + 0x10);
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      case '\n':
        uVar11 = *(uint *)(*param_1 + 8) * uVar11;
        uVar10 = uVar12;
        if ((int)*(uint *)(*param_1 + 8) < 1) {
          return uVar11;
        }
        do {
          lVar9 = (**(code **)(**(longlong **)(*(longlong *)(*param_1 + 0x10) + 8 + uVar12) + 0x58))
                            ();
          uVar11 = uVar11 + lVar9;
          uVar3 = (int)uVar10 + 1;
          uVar12 = uVar12 + 8;
          uVar10 = (ulonglong)uVar3;
        } while ((int)uVar3 < *(int *)(*param_1 + 8));
        return uVar11;
      case '\v':
        uVar11 = *(uint *)(*param_1 + 8) * uVar11;
        uVar10 = uVar12;
        if ((int)*(uint *)(*param_1 + 8) < 1) {
          return uVar11;
        }
        do {
          lVar9 = FUN_143a15260(*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 8 + uVar12));
          uVar11 = uVar11 + lVar9;
          uVar3 = (int)uVar10 + 1;
          uVar12 = uVar12 + 8;
          uVar10 = (ulonglong)uVar3;
        } while ((int)uVar3 < *(int *)(*param_1 + 8));
        return uVar11;
      case '\f':
        uVar3 = IStreamingManager::GetNumWantingResources(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          lVar9 = FUN_1439f1d30(*param_1,uVar12);
          uVar3 = (uint)*(longlong *)(lVar9 + 0x10) | 1;
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar11 = uVar11 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + *(longlong *)(lVar9 + 0x10);
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      case '\r':
        uVar3 = FUN_1439f2ae0(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = FUN_1439f2ae0(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar12);
          iVar2 = 0x1f;
          if ((*puVar7 | 1) != 0) {
            for (; (*puVar7 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar11 = uVar11 + (iVar2 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      case '\x0e':
        uVar3 = FUN_1439f2ae0(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = FUN_1439f2ae0(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar12);
          if ((int)*puVar7 < 0) {
            uVar10 = 10;
          }
          else {
            uVar3 = *puVar7 | 1;
            iVar2 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            uVar10 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
          }
          uVar11 = uVar11 + uVar10;
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      case '\x0f':
        uVar3 = FUN_1439f2ae0(*param_1);
        return (ulonglong)uVar3 * (uVar11 + 4);
      case '\x10':
        uVar3 = FUN_1439f2ae0(*param_1);
        return (ulonglong)uVar3 * (uVar11 + 8);
      case '\x11':
        uVar3 = FUN_1439f2ae0(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = FUN_1439f2ae0(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          piVar5 = (int *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar12);
          uVar3 = *piVar5 >> 0x1f ^ *piVar5 * 2 | 1;
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar11 = uVar11 + (iVar2 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      case '\x12':
        uVar3 = FUN_1439f2ae0(*param_1);
        uVar11 = uVar3 * uVar11;
        iVar2 = FUN_1439f2ae0(*param_1);
        if (iVar2 < 1) {
          return uVar11;
        }
        do {
          plVar6 = (longlong *)FUN_1439f1d10(*param_1,uVar12);
          uVar10 = *plVar6 >> 0x3f ^ *plVar6 * 2 | 1;
          lVar9 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar11 = uVar11 + ((int)lVar9 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while ((int)uVar3 < iVar2);
        return uVar11;
      default:
        return 0;
      }
    }
    uVar10 = uVar12;
    switch((char)param_1[1]) {
    case '\x01':
      uVar3 = FUN_1439f2ae0(*param_1);
      uVar10 = (ulonglong)uVar3 << 3;
      break;
    case '\x02':
      uVar3 = FUN_1439f2ae0(*param_1);
      uVar10 = (ulonglong)uVar3 << 2;
      break;
    case '\x03':
      iVar2 = FUN_1439f2ae0(*param_1);
      uVar10 = uVar11;
      uVar11 = uVar12;
      if (0 < iVar2) {
        do {
          puVar4 = (ulonglong *)FUN_1439f1d10(*param_1,uVar11);
          lVar9 = 0x3f;
          if ((*puVar4 | 1) != 0) {
            for (; (*puVar4 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar10 = uVar12 + ((int)lVar9 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar11 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
          uVar12 = uVar10;
          uVar11 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar2);
      }
      break;
    case '\x04':
      iVar2 = FUN_1439f2ae0(*param_1);
      uVar10 = uVar11;
      uVar11 = uVar12;
      if (0 < iVar2) {
        do {
          puVar4 = (ulonglong *)FUN_1439f1d10(*param_1,uVar12);
          lVar9 = 0x3f;
          if ((*puVar4 | 1) != 0) {
            for (; (*puVar4 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar10 = uVar11 + ((int)lVar9 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
          uVar11 = uVar10;
        } while ((int)uVar3 < iVar2);
      }
      break;
    case '\x05':
      iVar2 = FUN_1439f2ae0(*param_1);
      uVar10 = uVar11;
      uVar11 = uVar12;
      if (0 < iVar2) {
        do {
          puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar11);
          if ((int)*puVar7 < 0) {
            uVar10 = 10;
          }
          else {
            uVar3 = *puVar7 | 1;
            iVar2 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            uVar10 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
          }
          uVar10 = uVar12 + uVar10;
          uVar3 = (int)uVar11 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
          uVar12 = uVar10;
          uVar11 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar2);
      }
      break;
    case '\x06':
      uVar3 = FUN_1439f2ae0(*param_1);
      uVar10 = (ulonglong)uVar3 << 3;
      break;
    case '\a':
      uVar3 = FUN_1439f2ae0(*param_1);
      uVar10 = (ulonglong)uVar3 << 2;
      break;
    case '\b':
      uVar3 = FUN_1439f2ae0(*param_1);
      uVar10 = (ulonglong)uVar3;
      break;
    case '\t':
    case '\n':
    case '\v':
    case '\f':
      uVar8 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                            0x6a5);
      uVar8 = FUN_1439eef00(uVar8,"Non-primitive types can\'t be packed.");
      FUN_1439eec50(local_68,uVar8);
      DsDevice::~DsDevice(local_58);
      uVar10 = uVar11;
      break;
    case '\r':
      iVar2 = FUN_1439f2ae0(*param_1);
      uVar10 = uVar11;
      uVar11 = uVar12;
      if (0 < iVar2) {
        do {
          puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar11);
          iVar2 = 0x1f;
          if ((*puVar7 | 1) != 0) {
            for (; (*puVar7 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar10 = uVar12 + (iVar2 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar11 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
          uVar12 = uVar10;
          uVar11 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar2);
      }
      break;
    case '\x0e':
      iVar2 = FUN_1439f2ae0(*param_1);
      uVar10 = uVar11;
      uVar11 = uVar12;
      if (0 < iVar2) {
        do {
          puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar11);
          if ((int)*puVar7 < 0) {
            uVar10 = 10;
          }
          else {
            uVar3 = *puVar7 | 1;
            iVar2 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            uVar10 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
          }
          uVar12 = uVar12 + uVar10;
          uVar3 = (int)uVar11 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
          uVar10 = uVar12;
          uVar11 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar2);
      }
      break;
    case '\x0f':
      uVar3 = FUN_1439f2ae0(*param_1);
      uVar10 = (ulonglong)uVar3 << 2;
      break;
    case '\x10':
      uVar3 = FUN_1439f2ae0(*param_1);
      uVar10 = (ulonglong)uVar3 << 3;
      break;
    case '\x11':
      iVar2 = FUN_1439f2ae0(*param_1);
      uVar10 = uVar11;
      uVar11 = uVar12;
      if (0 < iVar2) {
        do {
          piVar5 = (int *)mu::FPhysicsBody::GetBodyBoneId(*param_1,uVar11);
          uVar3 = *piVar5 >> 0x1f ^ *piVar5 * 2 | 1;
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar12 = uVar12 + (iVar2 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
          uVar10 = uVar12;
        } while ((int)uVar3 < iVar2);
      }
      break;
    case '\x12':
      iVar2 = FUN_1439f2ae0(*param_1);
      uVar10 = uVar11;
      uVar11 = uVar12;
      if (0 < iVar2) {
        do {
          plVar6 = (longlong *)FUN_1439f1d10(*param_1,uVar11);
          uVar10 = *plVar6 >> 0x3f ^ *plVar6 * 2 | 1;
          lVar9 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar12 = uVar12 + ((int)lVar9 * 9 + 0x49U >> 6);
          uVar3 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar3;
          iVar2 = FUN_1439f2ae0(*param_1);
          uVar10 = uVar12;
        } while ((int)uVar3 < iVar2);
      }
    }
    *(uint *)((longlong)param_1 + 0xc) = (uint)uVar10;
    if (uVar10 == 0) {
      return 0;
    }
    uVar3 = (uint)uVar10 | 1;
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar3 = param_2 * 8 | 3;
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return uVar10 + (iVar2 * 9 + 0x49U >> 6) + (ulonglong)(iVar1 * 9 + 0x49U >> 6);
  }
  if ((*(byte *)((longlong)param_1 + 10) & 0xf) != 0) {
    return 0;
  }
  uVar3 = param_2 * 8 | 1;
  iVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  uVar11 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
  uVar12 = uVar11 * 2;
  if ((char)param_1[1] != '\n') {
    uVar12 = uVar11;
  }
  switch((char)param_1[1]) {
  case '\x01':
  case '\x06':
  case '\x10':
    uVar12 = uVar12 + 8;
    break;
  case '\x02':
  case '\a':
  case '\x0f':
    uVar12 = uVar12 + 4;
    break;
  case '\x03':
  case '\x04':
    lVar9 = 0x3f;
    if ((*param_1 | 1) != 0) {
      for (; (*param_1 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = uVar12 + ((int)lVar9 * 9 + 0x49U >> 6);
    break;
  case '\x05':
  case '\x0e':
    if ((int)(uint)*param_1 < 0) {
      uVar12 = uVar12 + 10;
    }
    else {
      uVar3 = (uint)*param_1 | 1;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar12 = uVar12 + (iVar2 * 9 + 0x49U >> 6);
    }
    break;
  case '\b':
    uVar12 = uVar12 + 1;
    break;
  case '\t':
  case '\f':
    lVar9 = *(longlong *)(*param_1 + 0x10);
    goto LAB_143a52854;
  case '\n':
    lVar9 = (**(code **)(*(longlong *)*param_1 + 0x58))();
    uVar12 = uVar12 + lVar9;
    break;
  case '\v':
    if ((*(byte *)((longlong)param_1 + 10) & 0xf0) == 0) {
      lVar9 = FUN_143a15260();
      return uVar12 + lVar9;
    }
    iVar2 = (**(code **)(*(longlong *)*param_1 + 0x48))();
    lVar9 = (longlong)iVar2;
LAB_143a52854:
    uVar3 = (uint)lVar9 | 1;
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar12 = uVar12 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar9;
    break;
  case '\r':
    uVar3 = (uint)*param_1 | 1;
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar12 = uVar12 + (iVar2 * 9 + 0x49U >> 6);
    break;
  case '\x11':
    uVar3 = (int)(uint)*param_1 >> 0x1f ^ (uint)*param_1 * 2 | 1;
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    goto LAB_143a52821;
  case '\x12':
    uVar11 = (longlong)*param_1 >> 0x3f ^ *param_1 * 2 | 1;
    lVar9 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar2 = (int)lVar9;
LAB_143a52821:
    uVar12 = uVar12 + (iVar2 * 9 + 0x49U >> 6);
  }
  return uVar12;
switchD_143a522f1_caseD_3:
  uVar3 = FUN_1439f2ae0(*param_1);
  uVar11 = uVar3 * uVar11;
  iVar2 = FUN_1439f2ae0(*param_1);
  if (iVar2 < 1) {
    return uVar11;
  }
  do {
    puVar4 = (ulonglong *)FUN_1439f1d10(*param_1,uVar12);
    lVar9 = 0x3f;
    if ((*puVar4 | 1) != 0) {
      for (; (*puVar4 | 1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = uVar11 + ((int)lVar9 * 9 + 0x49U >> 6);
    uVar3 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar3;
    iVar2 = FUN_1439f2ae0(*param_1);
  } while ((int)uVar3 < iVar2);
  return uVar11;
}



// FUNCTION 143a529b0 FUN_143a529b0 body=284 status=ok
// SIG undefined FUN_143a529b0(void)

longlong FUN_143a529b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong local_res8;
  
  local_res8 = 0;
  if (*(ushort *)(param_1 + 8) < 0x101) {
    puVar7 = *(undefined4 **)(param_1 + 0x10);
    puVar8 = puVar7 + (ulonglong)*(ushort *)(param_1 + 10) * 8;
    if (puVar7 != puVar8) {
      do {
        lVar5 = FUN_143a51f10(puVar7 + 2,*puVar7);
        puVar7 = puVar7 + 8;
        local_res8 = local_res8 + lVar5;
      } while (puVar7 != puVar8);
      return local_res8;
    }
  }
  else {
    plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
    plVar6 = (longlong *)*plVar2;
    if (plVar6 != plVar2) {
      do {
        lVar5 = FUN_143a51f10(plVar6 + 5,(int)plVar6[4]);
        local_res8 = local_res8 + lVar5;
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar6 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
            cVar1 = *(char *)(plVar6[1] + 0x19);
            plVar4 = (longlong *)plVar6[1];
            plVar3 = plVar6;
          }
        }
      } while (plVar6 != plVar2);
      return local_res8;
    }
  }
  return 0;
}



// FUNCTION 143a52ad0 FUN_143a52ad0 body=379 status=ok
// SIG undefined FUN_143a52ad0(void)

void FUN_143a52ad0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    if ((*(byte *)((longlong)param_1 + 10) & 0xf) == 0) {
      if (*(int *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(param_1 + 1) * 4) == 9) {
        puVar4 = (undefined8 *)*param_1;
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      else if (*(int *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(param_1 + 1) * 4) == 10) {
        if ((*(byte *)((longlong)param_1 + 10) & 0xf0) == 0) {
          (**(code **)(*(longlong *)*param_1 + 0x30))();
          *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) & 0xf1;
          *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 1;
          return;
        }
        (**(code **)(*(longlong *)*param_1 + 0x68))();
        *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) & 0xf1;
        *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 1;
        return;
      }
      *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) & 0xf1;
      *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 1;
      return;
    }
  }
  else {
    switch(*(undefined4 *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(param_1 + 1) * 4)) {
    case 1:
    case 8:
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(*param_1);
      return;
    case 2:
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(*param_1);
      return;
    case 3:
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(*param_1);
      return;
    case 4:
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(*param_1);
      return;
    case 5:
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(*param_1);
      return;
    case 6:
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(*param_1);
      return;
    case 7:
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(*param_1);
      return;
    case 9:
      FUN_1439f1c30(*param_1);
      return;
    case 10:
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 8);
      if (0 < iVar1) {
        lVar5 = 0;
        lVar3 = *(longlong *)(lVar2 + 0x10);
        do {
          (**(code **)(**(longlong **)(lVar3 + 8 + lVar5 * 8) + 0x30))();
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar1);
        *(undefined4 *)(lVar2 + 8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 143a52c80 FUN_143a52c80 body=208 status=ok
// SIG undefined FUN_143a52c80(void)

void FUN_143a52c80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 10) * 0x20 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x20) {
      FUN_143a52ad0(lVar6 + 8);
    }
  }
  else {
    plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
    plVar5 = (longlong *)*plVar2;
    if (plVar5 != plVar2) {
      do {
        FUN_143a52ad0(plVar5 + 5);
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
      } while (plVar5 != plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143a52d50 FUN_143a52d50 body=31 status=ok
// SIG undefined FUN_143a52d50(void)

void FUN_143a52d50(void)

{
  longlong lVar1;
  
  lVar1 = FUN_143a53200();
  if (lVar1 != 0) {
    FUN_143a52ad0(lVar1);
    return;
  }
  return;
}



// FUNCTION 143a52d70 FUN_143a52d70 body=268 status=ok
// SIG undefined FUN_143a52d70(void)

void FUN_143a52d70(longlong param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *_Dst;
  undefined1 local_res8 [32];
  
  _Dst = *(longlong **)(param_1 + 0x10);
  if (0x100 < *(ushort *)(param_1 + 8)) {
    puVar9 = (undefined8 *)*_Dst;
    puVar4 = (undefined8 *)puVar9[1];
    cVar1 = *(char *)((longlong)puVar4 + 0x19);
    puVar3 = puVar9;
    puVar5 = puVar4;
    while (cVar1 == '\0') {
      if (*(int *)(puVar5 + 4) < param_2) {
        puVar6 = (undefined8 *)puVar5[2];
        puVar5 = puVar3;
      }
      else {
        if ((*(char *)((longlong)puVar9 + 0x19) != '\0') && (param_2 < *(int *)(puVar5 + 4))) {
          puVar9 = puVar5;
        }
        puVar6 = (undefined8 *)*puVar5;
      }
      puVar3 = puVar5;
      puVar5 = puVar6;
      cVar1 = *(char *)((longlong)puVar6 + 0x19);
    }
    if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
      puVar4 = (undefined8 *)*puVar9;
    }
    cVar1 = *(char *)((longlong)puVar4 + 0x19);
    while (cVar1 == '\0') {
      if (param_2 < *(int *)(puVar4 + 4)) {
        puVar5 = (undefined8 *)*puVar4;
        puVar9 = puVar4;
      }
      else {
        puVar5 = (undefined8 *)puVar4[2];
      }
      puVar4 = puVar5;
      cVar1 = *(char *)((longlong)puVar5 + 0x19);
    }
    FUN_143a58100(_Dst,local_res8,puVar3,puVar9);
    return;
  }
  uVar2 = *(ushort *)(param_1 + 10);
  plVar10 = _Dst + (ulonglong)uVar2 * 4;
  uVar7 = (ulonglong)uVar2;
  if ((ulonglong)uVar2 != 0) {
    do {
      uVar8 = (longlong)uVar7 >> 1;
      if ((int)_Dst[uVar8 * 4] < param_2) {
        _Dst = _Dst + uVar8 * 4 + 4;
        uVar8 = uVar7 + (-1 - uVar8);
      }
      uVar7 = uVar8;
    } while (0 < (longlong)uVar8);
  }
  if ((_Dst != plVar10) && ((int)*_Dst == param_2)) {
    _guard_xfg_dispatch_icall_nop(_Dst,_Dst + 4,(longlong)plVar10 - (longlong)(_Dst + 4));
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  }
  return;
}



// FUNCTION 143a52e80 FUN_143a52e80 body=410 status=ok
// SIG undefined FUN_143a52e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a52e80(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)FUN_143a53200();
  if (plVar1 != (longlong *)0x0) {
    switch(*(undefined4 *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(plVar1 + 1) * 4)) {
    case 1:
    case 8:
      uVar2 = FUN_1439f2ae0(*plVar1);
      return uVar2;
    case 2:
      uVar2 = FUN_1439f2ae0(*plVar1);
      return uVar2;
    case 3:
      uVar2 = FUN_1439f2ae0(*plVar1);
      return uVar2;
    case 4:
      uVar2 = FUN_1439f2ae0(*plVar1);
      return uVar2;
    case 5:
      uVar2 = FUN_1439f2ae0(*plVar1);
      return uVar2;
    case 6:
      uVar2 = FUN_1439f2ae0(*plVar1);
      return uVar2;
    case 7:
      uVar2 = FUN_1439f2ae0(*plVar1);
      return uVar2;
    case 9:
      uVar2 = IStreamingManager::GetNumWantingResources(*plVar1);
      return uVar2;
    case 10:
      return (ulonglong)*(uint *)(*plVar1 + 8);
    default:
      uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                            0x71f);
      uVar3 = FUN_1439eef00(uVar3,"Can\'t get here.");
      FUN_1439eec50(local_58,uVar3);
      DsDevice::~DsDevice(local_48);
    }
  }
  return 0;
}



// FUNCTION 143a53050 FUN_143a53050 body=417 status=ok
// SIG undefined FUN_143a53050(void)

/* WARNING: Removing unreachable block (ram,0x000143a531aa) */

undefined8 FUN_143a53050(longlong param_1,uint param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  byte bStackX_11;
  byte bStackX_12;
  byte bStackX_13;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (DAT_146ba31e0 != 0) {
    puVar2 = *(undefined8 **)(DAT_146ba31e0 + 8);
    bStackX_11 = (byte)(param_2 >> 8);
    bStackX_12 = (byte)(param_2 >> 0x10);
    bStackX_13 = (byte)(param_2 >> 0x18);
    lVar3 = *(longlong *)(DAT_146ba31e0 + 0x18);
    uVar6 = ((((((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)bStackX_11) * 0x100000001b3 ^ (ulonglong)bStackX_12) * 0x100000001b3 ^
             (ulonglong)bStackX_13) * 0x100000001b3 ^
            ((((((((uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar1 >> 8 & 0xff) *
                  0x100000001b3 ^ uVar1 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar1 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar1 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x38) * 0x100000001b3
            ) & *(ulonglong *)(DAT_146ba31e0 + 0x30);
    puVar5 = *(undefined8 **)(lVar3 + uVar6 * 0x10);
    while( true ) {
      puVar7 = puVar2;
      if (*(undefined8 **)(lVar3 + uVar6 * 0x10) != puVar2) {
        puVar7 = (undefined8 *)**(undefined8 **)(lVar3 + uVar6 * 0x10 + 8);
      }
      if (puVar5 == puVar7) goto LAB_143a531b9;
      if ((puVar5[2] == uVar1) && (*(uint *)(puVar5 + 3) == param_2)) break;
      puVar5 = (undefined8 *)*puVar5;
    }
    if (puVar5 != puVar2) {
      puVar5 = puVar5 + 4;
      goto LAB_143a531bb;
    }
  }
LAB_143a531b9:
  puVar5 = (undefined8 *)0x0;
LAB_143a531bb:
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  uVar4 = puVar5[1];
  *param_3 = *puVar5;
  param_3[1] = uVar4;
  uVar4 = puVar5[3];
  param_3[2] = puVar5[2];
  param_3[3] = uVar4;
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
}



// FUNCTION 143a53200 FUN_143a53200 body=179 status=ok
// SIG undefined FUN_143a53200(void)

int * FUN_143a53200(longlong param_1,int param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    uVar1 = *(ushort *)(param_1 + 10);
    piVar5 = *(int **)(param_1 + 0x10);
    piVar9 = piVar5 + (ulonglong)uVar1 * 8;
    uVar7 = (ulonglong)uVar1;
    if ((ulonglong)uVar1 != 0) {
      do {
        uVar8 = (longlong)uVar7 >> 1;
        if (piVar5[uVar8 * 8] < param_2) {
          piVar5 = piVar5 + uVar8 * 8 + 8;
          uVar8 = uVar7 + (-1 - uVar8);
        }
        uVar7 = uVar8;
      } while (0 < (longlong)uVar8);
    }
    if ((piVar5 != piVar9) && (*piVar5 == param_2)) {
      return piVar5 + 2;
    }
    return (int *)0x0;
  }
  puVar2 = (undefined8 *)**(longlong **)(param_1 + 0x10);
  puVar3 = (undefined8 *)puVar2[1];
  puVar6 = puVar2;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    do {
      if (*(int *)(puVar3 + 4) < param_2) {
        puVar4 = (undefined8 *)puVar3[2];
      }
      else {
        puVar4 = (undefined8 *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
    if ((puVar6 != puVar2) && (*(int *)(puVar6 + 4) <= param_2)) goto LAB_143a5324b;
  }
  puVar6 = puVar2;
LAB_143a5324b:
  piVar5 = (int *)(puVar6 + 5);
  if (puVar6 == (undefined8 *)**(longlong **)(param_1 + 0x10)) {
    piVar5 = (int *)0x0;
  }
  return piVar5;
}



// FUNCTION 143a532c0 FUN_143a532c0 body=363 status=ok
// SIG undefined FUN_143a532c0(void)

void FUN_143a532c0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    if (iVar1 == 9) {
      if (*param_1 != 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _scalar_deleting_destructor_(*param_1,1);
        return;
      }
    }
    else if ((iVar1 == 10) && (puVar2 = (undefined8 *)*param_1, puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143a5340e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  else {
    switch(iVar1) {
    case 1:
    case 8:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        FUN_1439f18f0(lVar3);
LAB_143a53310:
        FMemory::operator_delete(lVar3,0x10);
        return;
      }
      break;
    case 2:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        FUN_1439f1930(lVar3);
        goto LAB_143a53310;
      }
      break;
    case 3:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        FUN_1439f18f0(lVar3);
        goto LAB_143a53310;
      }
      break;
    case 4:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        FUN_1439f1930(lVar3);
        goto LAB_143a53310;
      }
      break;
    case 5:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        FUN_1439f1930(lVar3);
        goto LAB_143a53310;
      }
      break;
    case 6:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        FUN_1439f18f0(lVar3);
        goto LAB_143a53310;
      }
      break;
    case 7:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        FUN_1439f1970(lVar3);
        goto LAB_143a53310;
      }
      break;
    case 9:
      lVar3 = *param_1;
      if (lVar3 != 0) {
        thunk_FUN_1439f1360(lVar3);
        FMemory::operator_delete(lVar3,0x18);
        return;
      }
      break;
    case 10:
      if (*param_1 != 0) {
        FUN_143a0f160(*param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a53460 FUN_143a53460 body=44 status=ok
// SIG undefined FUN_143a53460(void)

undefined1 FUN_143a53460(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_143a53200();
  if ((puVar1 != (undefined1 *)0x0) && ((puVar1[10] & 0xf) == 0)) {
    return *puVar1;
  }
  return param_3;
}



// FUNCTION 143a53490 FUN_143a53490 body=55 status=ok
// SIG undefined FUN_143a53490(void)

undefined8 FUN_143a53490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143a53200();
  if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar1 + 10) & 0xf) == 0)) {
    return *puVar1;
  }
  return param_3;
}



// FUNCTION 143a534d0 FUN_143a534d0 body=41 status=ok
// SIG undefined FUN_143a534d0(void)

undefined4 FUN_143a534d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_143a53200();
  if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)((longlong)puVar1 + 10) & 0xf) == 0)) {
    return *puVar1;
  }
  return param_3;
}



// FUNCTION 143a53500 FUN_143a53500 body=55 status=ok
// SIG undefined FUN_143a53500(void)

ulonglong FUN_143a53500(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_143a53200();
  if ((puVar1 != (uint *)0x0) && ((*(byte *)((longlong)puVar1 + 10) & 0xf) == 0)) {
    return (ulonglong)*puVar1;
  }
  return param_3;
}



// FUNCTION 143a53540 FUN_143a53540 body=43 status=ok
// SIG undefined FUN_143a53540(void)

undefined8 FUN_143a53540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143a53200();
  if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar1 + 10) & 0xf) == 0)) {
    return *puVar1;
  }
  return param_3;
}



// FUNCTION 143a53570 FUN_143a53570 body=183 status=ok
// SIG undefined FUN_143a53570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143a53570(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16f);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar3 = (undefined1 *)FUN_1439f1d20(*puVar1,param_3);
  return *puVar3;
}



// FUNCTION 143a53630 FUN_143a53630 body=184 status=ok
// SIG undefined FUN_143a53630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a53630(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16e);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar1 = (undefined8 *)FUN_1439f1d10(*puVar1,param_3);
  return *puVar1;
}



// FUNCTION 143a536f0 FUN_143a536f0 body=182 status=ok
// SIG undefined FUN_143a536f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a536f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x1e5);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar3 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*puVar1,param_3);
  return *puVar3;
}



// FUNCTION 143a537b0 FUN_143a537b0 body=184 status=ok
// SIG undefined FUN_143a537b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a537b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16d);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar3 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*puVar1,param_3);
  return *puVar3;
}



// FUNCTION 143a53870 FUN_143a53870 body=182 status=ok
// SIG undefined FUN_143a53870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a53870(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x169);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar3 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*puVar1,param_3);
  return *puVar3;
}



// FUNCTION 143a53930 FUN_143a53930 body=183 status=ok
// SIG undefined FUN_143a53930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a53930(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16a);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar1 = (undefined8 *)FUN_1439f1d10(*puVar1,param_3);
  return *puVar1;
}



// FUNCTION 143a539f0 FUN_143a539f0 body=199 status=ok
// SIG undefined FUN_143a539f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a539f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  plVar1 = (longlong *)FUN_143a53200();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x2f6);
    local_54 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_58,uVar2);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined8 *)(*(longlong *)(*plVar1 + 0x10) + 8 + (longlong)param_3 * 8);
}



// FUNCTION 143a53ac0 FUN_143a53ac0 body=180 status=ok
// SIG undefined FUN_143a53ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a53ac0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x223);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  FUN_1439f1d30(*puVar1,param_3);
  return;
}



// FUNCTION 143a53b80 FUN_143a53b80 body=182 status=ok
// SIG undefined FUN_143a53b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a53b80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16b);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar3 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*puVar1,param_3);
  return *puVar3;
}



// FUNCTION 143a53c40 FUN_143a53c40 body=183 status=ok
// SIG undefined FUN_143a53c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a53c40(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16c);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  puVar1 = (undefined8 *)FUN_1439f1d10(*puVar1,param_3);
  return *puVar1;
}



// FUNCTION 143a53d00 FUN_143a53d00 body=393 status=ok
// SIG undefined FUN_143a53d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a53d00(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  switch(*(undefined4 *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(param_1 + 1) * 4)) {
  case 1:
  case 8:
    uVar1 = FUN_1439f2ae0(*param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_1439f2ae0(*param_1);
    return uVar1;
  case 3:
    uVar1 = FUN_1439f2ae0(*param_1);
    return uVar1;
  case 4:
    uVar1 = FUN_1439f2ae0(*param_1);
    return uVar1;
  case 5:
    uVar1 = FUN_1439f2ae0(*param_1);
    return uVar1;
  case 6:
    uVar1 = FUN_1439f2ae0(*param_1);
    return uVar1;
  case 7:
    uVar1 = FUN_1439f2ae0(*param_1);
    return uVar1;
  case 9:
    uVar1 = IStreamingManager::GetNumWantingResources(*param_1);
    return uVar1;
  case 10:
    return (ulonglong)*(uint *)(*param_1 + 8);
  default:
    uVar2 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x71f);
    uVar2 = FUN_1439eef00(uVar2,"Can\'t get here.");
    FUN_1439eec50(local_58,uVar2);
    DsDevice::~DsDevice(local_48);
    return 0;
  }
}



// FUNCTION 143a53ec0 FUN_143a53ec0 body=437 status=ok
// SIG undefined FUN_143a53ec0(void)

void FUN_143a53ec0(longlong *param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *_Src;
  longlong lVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *_Dst;
  undefined4 *puVar9;
  undefined8 *local_res8;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if ((uVar1 < 0x101) && (uVar1 < param_2)) {
    uVar5 = (ulonglong)uVar1;
    do {
      if ((short)uVar5 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = (ulonglong)(ushort)((short)uVar5 << 2);
      }
    } while (uVar5 < param_2);
    *(ushort *)(param_1 + 1) = (ushort)uVar5;
    _Src = (undefined4 *)param_1[2];
    uVar2 = *(ushort *)((longlong)param_1 + 10);
    if ((ushort)uVar5 < 0x101) {
      _Dst = (void *)FUN_143a50990(*param_1);
      param_1[2] = (longlong)_Dst;
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar2 * 0x20);
    }
    else {
      lVar3 = *param_1;
      if (lVar3 == 0) {
        puVar6 = (undefined8 *)operator_new(0x10);
        puVar8 = (undefined8 *)0x0;
        local_res8 = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          uVar7 = std::
                  _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
                  ::_Buyheadnode(puVar6);
          *puVar6 = uVar7;
          puVar8 = puVar6;
        }
      }
      else {
        if (*(longlong *)(lVar3 + 0x70) != 0) {
          FUN_1439f01b0(lVar3,&std::
                               map<int,google::protobuf::internal::ExtensionSet::Extension,std::less<int>,std::allocator<std::pair<int_const_,google::protobuf::internal::ExtensionSet::Extension>_>_>
                               ::RTTI_Type_Descriptor,0x10);
        }
        puVar8 = (undefined8 *)FUN_1439efdc0(lVar3,0x10,FUN_143a51640);
        *puVar8 = 0;
        puVar8[1] = 0;
        uVar7 = std::
                _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
                ::_Buyheadnode(puVar8);
        *puVar8 = uVar7;
      }
      param_1[2] = (longlong)puVar8;
      if (_Src != _Src + (ulonglong)uVar2 * 8) {
        uVar4 = local_res8._0_1_;
        puVar9 = _Src;
        puVar8 = *(undefined8 **)*puVar8;
        do {
          local_50[0] = *puVar9;
          local_48 = puVar9[2];
          uStack_44 = puVar9[3];
          uStack_40 = puVar9[4];
          uStack_3c = puVar9[5];
          local_38 = *(undefined8 *)(puVar9 + 6);
          FUN_143a51250(param_1[2],&local_res8,puVar8,local_50,uVar4);
          puVar9 = puVar9 + 8;
          puVar8 = local_res8;
        } while (puVar9 != _Src + (ulonglong)uVar2 * 8);
      }
      *(undefined2 *)((longlong)param_1 + 10) = 0;
    }
    if (*param_1 == 0) {
      FMemory::operator_delete(_Src,(ulonglong)uVar1 << 5);
    }
  }
  return;
}



// FUNCTION 143a54080 FUN_143a54080 body=31 status=ok
// SIG undefined FUN_143a54080(void)

bool FUN_143a54080(void)

{
  longlong lVar1;
  
  lVar1 = FUN_143a53200();
  if (lVar1 == 0) {
    return false;
  }
  return (*(byte *)(lVar1 + 10) & 0xf) == 0;
}



// FUNCTION 143a540a0 FUN_143a540a0 body=373 status=ok
// SIG undefined FUN_143a540a0(void)

longlong * FUN_143a540a0(longlong param_1,longlong *param_2,int param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *_Src;
  int *piVar4;
  ulonglong uVar5;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _Src = *(int **)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 8) < 0x101) {
    uVar1 = *(ushort *)(param_1 + 10);
    uVar5 = (ulonglong)uVar1;
    uVar2 = (ulonglong)uVar1;
    piVar4 = _Src + uVar5 * 8;
    if (uVar5 != 0) {
      do {
        uVar3 = (longlong)uVar2 >> 1;
        if (_Src[uVar3 * 8] < param_3) {
          _Src = _Src + uVar3 * 8 + 8;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    if ((_Src == piVar4) || (*_Src != param_3)) {
      if (uVar1 < *(ushort *)(param_1 + 8)) {
        _guard_xfg_dispatch_icall_nop(_Src + 8,_Src,(longlong)piVar4 - (longlong)_Src);
        *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
        *_Src = param_3;
        piVar4 = _Src + 2;
        piVar4[0] = 0;
        piVar4[1] = 0;
        _Src[4] = 0;
        _Src[5] = 0;
        _Src[6] = 0;
        _Src[7] = 0;
        *param_2 = (longlong)piVar4;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        FUN_143a53ec0(param_1,uVar5 + 1);
        FUN_143a540a0(param_1,param_2,param_3);
      }
    }
    else {
      *(undefined1 *)(param_2 + 1) = 0;
      *param_2 = (longlong)(_Src + 2);
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 0;
    local_30[0] = param_3;
    FUN_143a51490(_Src,&local_48,0,local_30);
    *param_2 = local_48 + 0x28;
    *(undefined1 *)(param_2 + 1) = (undefined1)uStack_40;
  }
  return param_2;
}



// FUNCTION 143a54220 FUN_143a54220 body=1312 status=ok
// SIG undefined FUN_143a54220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a54220(undefined8 *param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  char local_68;
  longlong *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(char *)((longlong)param_3 + 9) == '\0') {
    if ((*(byte *)((longlong)param_3 + 10) & 0xf) == 0) {
      uVar9 = (ulonglong)*(byte *)(param_3 + 1);
      switch(*(undefined4 *)(&DAT_145cbacf0 + uVar9 * 4)) {
      case 1:
        local_78 = param_3[2];
        FUN_143a573b0(param_1,param_2,uVar9,(int)*param_3);
        break;
      case 2:
        local_78 = param_3[2];
        FUN_143a574a0(param_1,param_2,uVar9,*param_3);
        break;
      case 3:
        local_78 = param_3[2];
        FUN_143a573b0(param_1,param_2,uVar9,(int)*param_3);
        break;
      case 4:
        local_78 = param_3[2];
        FUN_143a574a0(param_1,param_2,uVar9,*param_3);
        break;
      case 5:
        local_78 = param_3[2];
        FUN_143a57330(param_1,param_2,uVar9,*param_3);
        break;
      case 6:
        local_78 = param_3[2];
        FUN_143a57420(param_1,param_2,uVar9,(int)*param_3);
        break;
      case 7:
        local_78 = param_3[2];
        FUN_143a572b0(param_1,param_2,uVar9,(char)*param_3);
        break;
      case 8:
        local_78 = param_3[2];
        FUN_143a573b0(param_1,param_2,uVar9,(int)*param_3);
        break;
      case 9:
        plVar4 = (longlong *)*param_3;
        lVar5 = FUN_143a54fc0(param_1,param_2,uVar9,param_3[2]);
        if ((longlong *)lVar5 != plVar4) {
          plVar6 = plVar4;
          if (0xf < (ulonglong)plVar4[3]) {
            plVar6 = (longlong *)*plVar4;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (lVar5,plVar6,plVar4[2]);
        }
        break;
      case 10:
        lVar5 = param_3[2];
        local_68 = 0;
        plVar4 = (longlong *)FUN_143a540a0(param_1,local_58,param_2 & 0xffffffff);
        local_60 = (longlong *)*plVar4;
        local_68 = (char)plVar4[1];
        local_60[2] = lVar5;
        if (local_68 == '\0') {
          if ((*(byte *)((longlong)param_3 + 10) & 0xf0) != 0) {
            if ((*(byte *)((longlong)local_60 + 10) & 0xf0) != 0) {
              (**(code **)(*(longlong *)*local_60 + 0x60))((longlong *)*local_60,*param_3);
              *(byte *)((longlong)local_60 + 10) = *(byte *)((longlong)local_60 + 10) & 0xf0;
              return;
            }
            lVar5 = *(longlong *)*local_60;
            uVar7 = (**(code **)(*(longlong *)*param_3 + 0x10))();
            (**(code **)(lVar5 + 0x48))(*local_60,uVar7);
            *(byte *)((longlong)local_60 + 10) = *(byte *)((longlong)local_60 + 10) & 0xf0;
            return;
          }
          plVar4 = (longlong *)*local_60;
          if ((*(byte *)((longlong)local_60 + 10) & 0xf0) != 0) {
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,*param_3);
            (**(code **)(*plVar4 + 0x48))(plVar4,*param_3);
            *(byte *)((longlong)local_60 + 10) = *(byte *)((longlong)local_60 + 10) & 0xf0;
            return;
          }
        }
        else {
          *(char *)(local_60 + 1) = (char)param_3[1];
          *(undefined1 *)((longlong)local_60 + 0xb) = *(undefined1 *)((longlong)param_3 + 0xb);
          *(undefined1 *)((longlong)local_60 + 9) = 0;
          if ((*(byte *)((longlong)param_3 + 10) & 0xf0) != 0) {
            *(byte *)((longlong)local_60 + 10) = *(byte *)((longlong)local_60 + 10) & 0xf | 0x10;
            plVar4 = (longlong *)
                     (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,*param_1);
            *local_60 = (longlong)plVar4;
            (**(code **)(*plVar4 + 0x60))(plVar4,*param_3);
            *(byte *)((longlong)local_60 + 10) = *(byte *)((longlong)local_60 + 10) & 0xf0;
            return;
          }
          *(byte *)((longlong)local_60 + 10) = *(byte *)((longlong)local_60 + 10) & 0xf;
          plVar4 = (longlong *)
                   (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,*param_1);
          *local_60 = (longlong)plVar4;
        }
        (**(code **)(*plVar4 + 0x48))(plVar4,*param_3);
        *(byte *)((longlong)local_60 + 10) = *(byte *)((longlong)local_60 + 10) & 0xf0;
      }
    }
  }
  else {
    lVar5 = param_3[2];
    local_68 = 0;
    plVar4 = (longlong *)FUN_143a540a0(param_1,local_58,param_2 & 0xffffffff);
    local_60 = (longlong *)*plVar4;
    local_68 = (char)plVar4[1];
    local_60[2] = lVar5;
    if (local_68 != '\0') {
      *(char *)(local_60 + 1) = (char)param_3[1];
      *(undefined1 *)((longlong)local_60 + 0xb) = *(undefined1 *)((longlong)param_3 + 0xb);
      *(undefined1 *)((longlong)local_60 + 9) = 1;
    }
    switch(*(undefined4 *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(param_3 + 1) * 4)) {
    case 1:
    case 8:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50b00(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f1f20(*local_60,*param_3);
      break;
    case 2:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50d00(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f1f80(*local_60,*param_3);
      break;
    case 3:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50b80(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f1f20(*local_60,*param_3);
      break;
    case 4:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50d80(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f1f80(*local_60,*param_3);
      break;
    case 5:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50c80(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f1f80(*local_60,*param_3);
      break;
    case 6:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50c00(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f1f20(*local_60,*param_3);
      break;
    case 7:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50e00(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f1fe0(*local_60,*param_3);
      break;
    case 9:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50e80(*param_1);
        *local_60 = lVar5;
      }
      FUN_1439f2030(*local_60,*param_3);
      break;
    case 10:
      if (local_68 != '\0') {
        lVar5 = FUN_143a50f00(*param_1);
        *local_60 = lVar5;
      }
      lVar5 = *param_3;
      iVar8 = 0;
      if (0 < *(int *)(lVar5 + 8)) {
        lVar10 = 0;
        do {
          plVar4 = *(longlong **)(lVar10 + 8 + *(longlong *)(lVar5 + 0x10));
          lVar2 = *local_60;
          piVar3 = *(int **)(lVar2 + 0x10);
          if (piVar3 == (int *)0x0) {
LAB_143a54471:
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,*param_1);
            FUN_143a51890(*local_60,plVar6);
          }
          else {
            iVar1 = *(int *)(lVar2 + 8);
            if (*piVar3 <= iVar1) goto LAB_143a54471;
            plVar6 = *(longlong **)(piVar3 + (longlong)iVar1 * 2 + 2);
            *(int *)(lVar2 + 8) = iVar1 + 1;
            if (plVar6 == (longlong *)0x0) goto LAB_143a54471;
          }
          (**(code **)(*plVar6 + 0x48))(plVar6,plVar4);
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar8 < *(int *)(lVar5 + 8));
      }
    }
  }
  return;
}



// FUNCTION 143a54790 FUN_143a54790 body=178 status=ok
// SIG undefined FUN_143a54790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a54790(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if (*(int *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(param_1 + 1) * 4) == 10) {
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      if ((*(byte *)((longlong)param_1 + 10) & 0xf) == 0) {
        if ((*(byte *)((longlong)param_1 + 10) & 0xf0) == 0) {
          cVar1 = (**(code **)(*(longlong *)*param_1 + 0x38))();
        }
        else {
          cVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))();
        }
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
    else {
      lVar2 = *param_1;
      iVar3 = 0;
      if (0 < *(int *)(lVar2 + 8)) {
        lVar4 = 0;
        do {
          cVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x10) + 8 + lVar4) + 0x38))();
          if (cVar1 == '\0') {
            return 0;
          }
          lVar2 = *param_1;
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar3 < *(int *)(lVar2 + 8));
      }
    }
  }
  return 1;
}



// FUNCTION 143a54850 FUN_143a54850 body=237 status=ok
// SIG undefined FUN_143a54850(void)

ulonglong FUN_143a54850(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar5 = (longlong *)0x100;
  if (*(ushort *)(param_1 + 8) < 0x101) {
    plVar5 = plVar7 + (ulonglong)*(ushort *)(param_1 + 10) * 4;
    if (plVar7 != plVar5) {
      while (uVar6 = FUN_143a54790(plVar7 + 1), (char)uVar6 != '\0') {
        plVar7 = plVar7 + 4;
        plVar5 = (longlong *)
                 ((ulonglong)*(ushort *)(param_1 + 10) * 0x20 + *(longlong *)(param_1 + 0x10));
        if (plVar7 == plVar5) {
          return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
        }
      }
LAB_143a54930:
      return uVar6 & 0xffffffffffffff00;
    }
  }
  else {
    plVar7 = (longlong *)*plVar7;
    plVar2 = (longlong *)*plVar7;
    while (plVar2 != plVar7) {
      uVar6 = FUN_143a54790(plVar2 + 5);
      if ((char)uVar6 == '\0') goto LAB_143a54930;
      plVar5 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar2 = plVar5;
        plVar3 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          plVar5 = (longlong *)*plVar3;
          plVar2 = plVar3;
          plVar3 = plVar5;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar4 = (longlong *)plVar2[1];
        plVar3 = plVar2;
        while ((plVar5 = plVar4, plVar2 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2])
               )) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    }
  }
  return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
}



// FUNCTION 143a54940 FUN_143a54940 body=71 status=ok
// SIG undefined FUN_143a54940(void)

undefined1 FUN_143a54940(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_143a540a0(param_1,local_18,param_2);
  *param_4 = *plVar2;
  lVar1 = plVar2[1];
  *(undefined8 *)(*param_4 + 0x10) = param_3;
  return (char)lVar1;
}



// FUNCTION 143a54990 FUN_143a54990 body=661 status=ok
// SIG undefined FUN_143a54990(void)

void FUN_143a54990(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    lVar15 = 0;
    if (*(ushort *)(param_2 + 8) < 0x101) {
      piVar10 = *(int **)(param_1 + 0x10);
      piVar12 = *(int **)(param_2 + 0x10);
      piVar17 = piVar12 + (ulonglong)*(ushort *)(param_2 + 10) * 8;
      piVar18 = piVar10 + (ulonglong)*(ushort *)(param_1 + 10) * 8;
      while ((piVar10 != piVar18 && (piVar12 != piVar17))) {
        lVar15 = lVar15 + 1;
        iVar2 = *piVar12;
        if ((*piVar10 < iVar2) || (piVar12 = piVar12 + 8, *piVar10 == iVar2)) {
          piVar10 = piVar10 + 8;
        }
      }
      FUN_143a53ec0(param_1,lVar15 + ((longlong)piVar18 - (longlong)piVar10 >> 5) +
                            ((longlong)piVar17 - (longlong)piVar12 >> 5));
    }
    else {
      piVar10 = *(int **)(param_1 + 0x10);
      puVar3 = (undefined8 *)**(longlong **)(param_2 + 0x10);
      piVar12 = piVar10 + (ulonglong)*(ushort *)(param_1 + 10) * 8;
      puVar4 = (undefined8 *)*puVar3;
      while ((piVar10 != piVar12 && (puVar4 != puVar3))) {
        lVar15 = lVar15 + 1;
        if (*piVar10 < *(int *)(puVar4 + 4)) {
          piVar10 = piVar10 + 8;
        }
        else {
          puVar5 = (undefined8 *)puVar4[2];
          if (*piVar10 == *(int *)(puVar4 + 4)) {
            piVar10 = piVar10 + 8;
            if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
              cVar1 = *(char *)((longlong)*puVar5 + 0x19);
              puVar4 = puVar5;
              puVar5 = (undefined8 *)*puVar5;
              while (cVar1 == '\0') {
                cVar1 = *(char *)((longlong)*puVar5 + 0x19);
                puVar4 = puVar5;
                puVar5 = (undefined8 *)*puVar5;
              }
            }
            else {
              cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
              puVar8 = (undefined8 *)puVar4[1];
              puVar5 = puVar4;
              while ((puVar4 = puVar8, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar4[2]))) {
                cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
                puVar8 = (undefined8 *)puVar4[1];
                puVar5 = puVar4;
              }
            }
          }
          else if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
            cVar1 = *(char *)((longlong)*puVar5 + 0x19);
            puVar4 = puVar5;
            puVar5 = (undefined8 *)*puVar5;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((longlong)*puVar5 + 0x19);
              puVar4 = puVar5;
              puVar5 = (undefined8 *)*puVar5;
            }
          }
          else {
            cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
            puVar8 = (undefined8 *)puVar4[1];
            puVar5 = puVar4;
            while ((puVar4 = puVar8, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar4[2]))) {
              cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
              puVar8 = (undefined8 *)puVar4[1];
              puVar5 = puVar4;
            }
          }
        }
      }
      lVar11 = FUN_143a27790(puVar4,puVar3);
      FUN_143a53ec0(param_1,lVar15 + ((longlong)piVar12 - (longlong)piVar10 >> 5) + lVar11);
    }
  }
  if (*(ushort *)(param_2 + 8) < 0x101) {
    puVar14 = *(undefined4 **)(param_2 + 0x10);
    puVar16 = puVar14 + (ulonglong)*(ushort *)(param_2 + 10) * 8;
    for (; puVar14 != puVar16; puVar14 = puVar14 + 8) {
      FUN_143a54220(param_1,*puVar14,puVar14 + 2);
    }
  }
  else {
    plVar6 = (longlong *)**(longlong **)(param_2 + 0x10);
    plVar13 = (longlong *)*plVar6;
    if (plVar13 != plVar6) {
      do {
        FUN_143a54220(param_1,(int)plVar13[4],plVar13 + 5);
        plVar7 = (longlong *)plVar13[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar13 = plVar7;
          plVar7 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            plVar13 = plVar7;
            plVar7 = (longlong *)*plVar7;
          }
        }
        else {
          cVar1 = *(char *)(plVar13[1] + 0x19);
          plVar9 = (longlong *)plVar13[1];
          plVar7 = plVar13;
          while ((plVar13 = plVar9, cVar1 == '\0' && (plVar7 == (longlong *)plVar13[2]))) {
            cVar1 = *(char *)(plVar13[1] + 0x19);
            plVar9 = (longlong *)plVar13[1];
            plVar7 = plVar13;
          }
        }
      } while (plVar13 != plVar6);
      return;
    }
  }
  return;
}



// FUNCTION 143a54c30 FUN_143a54c30 body=178 status=ok
// SIG undefined FUN_143a54c30(void)

undefined8
FUN_143a54c30(undefined8 *param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_28 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_28,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_5;
  if ((char)lVar2 == '\0') {
    *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf0;
    if ((*(byte *)((longlong)puVar1 + 10) & 0xf0) != 0) {
      uVar4 = (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,param_4);
      return uVar4;
    }
  }
  else {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 0;
    *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf;
    uVar4 = (**(code **)(*param_4 + 0x10))(param_4,*param_1);
    *puVar1 = uVar4;
    *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf0;
  }
  return *puVar1;
}



// FUNCTION 143a54cf0 FUN_143a54cf0 body=266 status=ok
// SIG undefined FUN_143a54cf0(void)

undefined8
FUN_143a54cf0(undefined8 *param_1,undefined4 param_2,byte param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_5;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)((longlong)puVar1 + 9) = 1;
    *(byte *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 0xb) = param_4;
    switch(*(undefined4 *)(&DAT_145cbacf0 + (ulonglong)param_3 * 4)) {
    case 1:
    case 8:
      uVar4 = FUN_143a50b00(*param_1);
      break;
    case 2:
      uVar4 = FUN_143a50d00(*param_1);
      break;
    case 3:
      uVar4 = FUN_143a50b80(*param_1);
      break;
    case 4:
      uVar4 = FUN_143a50d80(*param_1);
      break;
    case 5:
      uVar4 = FUN_143a50c80(*param_1);
      break;
    case 6:
      uVar4 = FUN_143a50c00(*param_1);
      break;
    case 7:
      uVar4 = FUN_143a50e00(*param_1);
      break;
    case 9:
      uVar4 = FUN_143a50e80(*param_1);
      break;
    case 10:
      uVar4 = FUN_143a50f00(*param_1);
      break;
    default:
      goto switchD_143a54d80_default;
    }
    *puVar1 = uVar4;
  }
switchD_143a54d80_default:
  return *puVar1;
}



// FUNCTION 143a54e30 FUN_143a54e30 body=199 status=ok
// SIG undefined FUN_143a54e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a54e30(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  plVar1 = (longlong *)FUN_143a53200();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x2fd);
    local_54 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_58,uVar2);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined8 *)(*(longlong *)(*plVar1 + 0x10) + 8 + (longlong)param_3 * 8);
}



// FUNCTION 143a54f00 FUN_143a54f00 body=180 status=ok
// SIG undefined FUN_143a54f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a54f00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_58,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x22a);
    local_64 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_58);
  }
  FUN_1439f1d30(*puVar1,param_3);
  return;
}



// FUNCTION 143a54fc0 FUN_143a54fc0 body=137 status=ok
// SIG undefined FUN_143a54fc0(void)

undefined8
FUN_143a54fc0(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_4;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 0;
    uVar4 = FUN_143a00a70(*param_1);
    *puVar1 = uVar4;
  }
  *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf0;
  return *puVar1;
}



// FUNCTION 143a55050 FUN_143a55050 body=309 status=ok
// SIG undefined FUN_143a55050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a55050(undefined8 param_1,uint param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  byte local_a8;
  char local_a7;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_b0 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar2 = (**(code **)(*param_4 + 8))(param_4,param_2 >> 3,&local_a8);
  if (cVar2 == '\0') {
LAB_143a55152:
    (**(code **)(*param_5 + 8))(param_5,param_3,param_2);
  }
  else {
    uVar1 = *(uint *)(&DAT_145cbad40 + (ulonglong)local_a8 * 4);
    uVar4 = 0;
    if ((local_a7 == '\0') || ((param_2 & 7) != 2)) {
LAB_143a5512e:
      if (uVar1 != (param_2 & 7)) goto LAB_143a55152;
    }
    else {
      if ((int)uVar1 < 0) {
LAB_143a550eb:
        uVar3 = FUN_1439eeb00(local_88,3,
                              "c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc");
        uVar3 = FUN_1439eef00(uVar3,"can\'t reach here.");
        FUN_1439eec50(local_b8,uVar3);
        DsDevice::~DsDevice(local_88);
        goto LAB_143a5512e;
      }
      if (1 < (int)uVar1) {
        if ((int)uVar1 < 5) goto LAB_143a5512e;
        if (uVar1 != 5) goto LAB_143a550eb;
      }
      uVar4 = 1;
    }
    local_c0 = param_5;
    local_c8 = param_3;
    FUN_143a55190(param_1,param_2 >> 3,uVar4,&local_a8);
  }
  return;
}



// FUNCTION 143a55190 FUN_143a55190 body=3896 status=ok
// SIG undefined FUN_143a55190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_143a55190(undefined8 param_1,int param_2,char param_3,byte *param_4,longlong *param_5,
             longlong *param_6)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  char local_a8;
  ulonglong local_a0;
  char local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_88 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_3 != '\0') {
    uVar6 = 0;
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (uVar6 = (uint)*pbVar2, *pbVar2 < 0x80)) {
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      lVar7 = FUN_1439f8e20(param_5,uVar6);
      uVar6 = (uint)lVar7;
      if (lVar7 < 0) {
        return 0;
      }
    }
    uVar4 = FUN_1439f89d0(param_5,uVar6);
    local_b0 = CONCAT44(local_b0._4_4_,uVar4);
    switch(*param_4) {
    case 1:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        if ((int)param_5[1] - (int)*param_5 < 8) {
          cVar3 = FUN_1439f8a80(param_5,&local_a0);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        else {
          local_a0 = *(ulonglong *)*param_5;
          *param_5 = (longlong)((ulonglong *)*param_5 + 1);
        }
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        local_c8 = local_a0;
        local_b8 = local_a0;
        FUN_143a51a00(param_1,param_2,1,param_4[2]);
      }
      break;
    case 2:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        if ((int)param_5[1] - (int)*param_5 < 4) {
          cVar3 = FUN_1439f8a20(param_5,&local_b8);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar4 = (undefined4)local_b8;
        }
        else {
          uVar4 = *(undefined4 *)*param_5;
          local_b8 = CONCAT44(local_b8._4_4_,uVar4);
          *param_5 = (longlong)((undefined4 *)*param_5 + 1);
        }
        local_a0 = CONCAT44(local_a0._4_4_,uVar4);
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        local_c8 = CONCAT44(local_c8._4_4_,uVar4);
        FUN_143a51b40(param_1,param_2,2,param_4[2]);
      }
      break;
    case 3:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        pbVar2 = (byte *)*param_5;
        if ((pbVar2 < (byte *)param_5[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
          *param_5 = (longlong)(pbVar2 + 1);
          local_c8 = (ulonglong)bVar12;
        }
        else {
          FUN_1439f8f00(param_5,&local_a0);
          local_c8 = local_a0;
          if (local_98 == '\0') {
            return 0;
          }
        }
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        FUN_143a51be0(param_1,param_2,3,param_4[2]);
      }
      break;
    case 4:
      iVar5 = FUN_1439f8490(param_5);
      if (0 < iVar5) {
        do {
          pbVar2 = (byte *)*param_5;
          if ((pbVar2 < (byte *)param_5[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
            *param_5 = (longlong)(pbVar2 + 1);
            local_c8 = (ulonglong)bVar12;
          }
          else {
            FUN_1439f8f00(param_5,&local_a0);
            local_c8 = local_a0;
            if (local_98 == '\0') {
              return 0;
            }
          }
          local_c0 = *(undefined8 *)(param_4 + 0x18);
          FUN_143a51e70(param_1,param_2,4,param_4[2]);
          iVar5 = FUN_1439f8490(param_5);
        } while (0 < iVar5);
        FUN_1439f8990(param_5,local_b0 & 0xffffffff);
        return 1;
      }
      break;
    case 5:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        bVar12 = 0;
        pbVar2 = (byte *)*param_5;
        if (pbVar2 < (byte *)param_5[1]) {
          bVar12 = *pbVar2;
          uVar6 = (uint)bVar12;
          if (0x7f < bVar12) goto LAB_143a55277;
          *param_5 = (longlong)(pbVar2 + 1);
        }
        else {
LAB_143a55277:
          lVar7 = FUN_1439f8e20(param_5,bVar12);
          uVar6 = (uint)lVar7;
          if (lVar7 < 0) {
            return 0;
          }
        }
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        local_c8 = CONCAT44(local_c8._4_4_,uVar6);
        FUN_143a51aa0(param_1,param_2,5,param_4[2]);
      }
      break;
    case 6:
      iVar5 = FUN_1439f8490(param_5);
      if (0 < iVar5) {
        do {
          if ((int)param_5[1] - (int)*param_5 < 8) {
            cVar3 = FUN_1439f8a80(param_5,&local_a0);
            if (cVar3 == '\0') {
              return 0;
            }
          }
          else {
            local_a0 = *(ulonglong *)*param_5;
            *param_5 = (longlong)((ulonglong *)*param_5 + 1);
          }
          local_c0 = *(undefined8 *)(param_4 + 0x18);
          local_c8 = local_a0;
          FUN_143a51e70(param_1,param_2,6,param_4[2]);
          iVar5 = FUN_1439f8490(param_5);
        } while (0 < iVar5);
        FUN_1439f8990(param_5,local_b0 & 0xffffffff);
        return 1;
      }
      break;
    case 7:
      iVar5 = FUN_1439f8490(param_5);
      if (0 < iVar5) {
        do {
          if ((int)param_5[1] - (int)*param_5 < 4) {
            cVar3 = FUN_1439f8a20(param_5,&local_b8);
            if (cVar3 == '\0') {
              return 0;
            }
            uVar4 = (undefined4)local_b8;
          }
          else {
            uVar4 = *(undefined4 *)*param_5;
            local_b8 = CONCAT44(local_b8._4_4_,uVar4);
            *param_5 = (longlong)((undefined4 *)*param_5 + 1);
          }
          local_c0 = *(undefined8 *)(param_4 + 0x18);
          local_c8 = CONCAT44(local_c8._4_4_,uVar4);
          FUN_143a51dd0(param_1,param_2,7,param_4[2]);
          iVar5 = FUN_1439f8490(param_5);
        } while (0 < iVar5);
        FUN_1439f8990(param_5,local_b0 & 0xffffffff);
        return 1;
      }
      break;
    case 8:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        pbVar2 = (byte *)*param_5;
        if ((pbVar2 < (byte *)param_5[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
          *param_5 = (longlong)(pbVar2 + 1);
          uVar8 = (ulonglong)bVar12;
        }
        else {
          FUN_1439f8f00(param_5,&local_a0);
          uVar8 = local_a0;
          if (local_98 == '\0') {
            return 0;
          }
        }
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        local_c8 = CONCAT71(local_c8._1_7_,uVar8 != 0);
        FUN_143a51960(param_1,param_2,8,param_4[2]);
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      uVar9 = FUN_1439eeb00(local_80,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                            0x506);
      uVar9 = FUN_1439eef00(uVar9,"Non-primitive types can\'t be packed.");
      FUN_1439eec50(local_90,uVar9);
      DsDevice::~DsDevice(local_80);
      break;
    case 0xd:
      iVar5 = FUN_1439f8490(param_5);
      if (0 < iVar5) {
        do {
          bVar12 = 0;
          pbVar2 = (byte *)*param_5;
          if (pbVar2 < (byte *)param_5[1]) {
            bVar12 = *pbVar2;
            uVar6 = (uint)bVar12;
            if (0x7f < bVar12) goto LAB_143a5534f;
            *param_5 = (longlong)(pbVar2 + 1);
          }
          else {
LAB_143a5534f:
            lVar7 = FUN_1439f8e20(param_5,bVar12);
            uVar6 = (uint)lVar7;
            if (lVar7 < 0) {
              return 0;
            }
          }
          local_c0 = *(undefined8 *)(param_4 + 0x18);
          local_c8 = CONCAT44(local_c8._4_4_,uVar6);
          FUN_143a51dd0(param_1,param_2,0xd,param_4[2]);
          iVar5 = FUN_1439f8490(param_5);
          if (iVar5 < 1) {
            FUN_1439f8990(param_5,local_b0 & 0xffffffff);
            return 1;
          }
        } while( true );
      }
      break;
    case 0xe:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        uVar8 = 0;
        pbVar2 = (byte *)*param_5;
        if ((pbVar2 < (byte *)param_5[1]) && (uVar8 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
          *param_5 = (longlong)(pbVar2 + 1);
        }
        else {
          uVar8 = FUN_1439f8e20(param_5,uVar8);
          if ((longlong)uVar8 < 0) {
            return 0;
          }
        }
        cVar3 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar8 & 0xffffffff);
        if (cVar3 == '\0') {
          (**(code **)(*param_6 + 0x18))(param_6,param_2,uVar8 & 0xffffffff);
        }
        else {
          local_c0 = *(undefined8 *)(param_4 + 0x18);
          local_c8 = CONCAT44(local_c8._4_4_,(int)uVar8);
          FUN_143a51aa0(param_1,param_2,0xe,param_4[2]);
        }
      }
      break;
    case 0xf:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        if ((int)param_5[1] - (int)*param_5 < 4) {
          cVar3 = FUN_1439f8a20(param_5,&local_b8);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar4 = (undefined4)local_b8;
        }
        else {
          uVar4 = *(undefined4 *)*param_5;
          local_b8 = CONCAT44(local_b8._4_4_,uVar4);
          *param_5 = (longlong)((undefined4 *)*param_5 + 1);
        }
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        local_c8 = CONCAT44(local_c8._4_4_,uVar4);
        FUN_143a51aa0(param_1,param_2,0xf,param_4[2]);
      }
      break;
    case 0x10:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        if ((int)param_5[1] - (int)*param_5 < 8) {
          cVar3 = FUN_1439f8a80(param_5,&local_a0);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        else {
          local_a0 = *(ulonglong *)*param_5;
          *param_5 = (longlong)((ulonglong *)*param_5 + 1);
        }
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        local_c8 = local_a0;
        FUN_143a51be0(param_1,param_2,0x10,param_4[2]);
      }
      break;
    case 0x11:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        bVar12 = 0;
        pbVar2 = (byte *)*param_5;
        if (pbVar2 < (byte *)param_5[1]) {
          bVar12 = *pbVar2;
          uVar6 = (uint)bVar12;
          if (0x7f < bVar12) goto LAB_143a55451;
          *param_5 = (longlong)(pbVar2 + 1);
        }
        else {
LAB_143a55451:
          lVar7 = FUN_1439f8e20(param_5,bVar12);
          uVar6 = (uint)lVar7;
          if (lVar7 < 0) {
            return 0;
          }
        }
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        local_c8 = CONCAT44(local_c8._4_4_,~(uVar6 & 1) + 1 ^ uVar6 >> 1);
        FUN_143a51aa0(param_1,param_2,0x11,param_4[2]);
      }
      break;
    case 0x12:
      while (iVar5 = FUN_1439f8490(param_5), 0 < iVar5) {
        pbVar2 = (byte *)*param_5;
        if ((pbVar2 < (byte *)param_5[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
          *param_5 = (longlong)(pbVar2 + 1);
          uVar8 = (ulonglong)bVar12;
        }
        else {
          FUN_1439f8f00(param_5,&local_a0);
          uVar8 = local_a0;
          if (local_98 == '\0') {
            return 0;
          }
        }
        local_c8 = ~(ulonglong)((uint)uVar8 & 1) + 1 ^ uVar8 >> 1;
        local_c0 = *(undefined8 *)(param_4 + 0x18);
        FUN_143a51be0(param_1,param_2,0x12,param_4[2]);
      }
    }
    FUN_1439f8990(param_5,local_b0 & 0xffffffff);
    return 1;
  }
  switch(*param_4 - 1) {
  case 0:
    if ((int)param_5[1] - (int)*param_5 < 8) {
      cVar3 = FUN_1439f8a80(param_5,&local_b0);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_b0 = *(ulonglong *)*param_5;
      *param_5 = (longlong)((ulonglong *)*param_5 + 1);
    }
    local_c8 = *(ulonglong *)(param_4 + 0x18);
    if (param_4[1] == 0) {
      FUN_143a57330(param_1,param_2,1,local_b0);
    }
    else {
      local_c0 = local_c8;
      local_c8 = local_b0;
      FUN_143a51a00(param_1,param_2,1,param_4[2]);
    }
    break;
  case 1:
    if ((int)param_5[1] - (int)*param_5 < 4) {
      cVar3 = FUN_1439f8a20(param_5,&local_b0);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_b0._0_4_ = *(undefined4 *)*param_5;
      *param_5 = (longlong)((undefined4 *)*param_5 + 1);
    }
    local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b0);
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    if (param_4[1] == 0) {
      local_c8 = local_c0;
      FUN_143a57420(param_1,param_2,2,(uint)local_b0);
    }
    else {
      local_c8 = CONCAT44(local_c8._4_4_,(uint)local_b0);
      FUN_143a51b40(param_1,param_2,2,param_4[2]);
    }
    break;
  case 2:
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (*pbVar2 < 0x80)) {
      local_b0 = (ulonglong)*pbVar2;
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      FUN_1439f8f00(param_5,&local_b0);
      if (local_a8 == '\0') {
        return 0;
      }
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 3;
    if (param_4[1] != 0) {
      local_c8 = local_b0;
      FUN_143a51be0(param_1,param_2,3,param_4[2]);
      return 1;
    }
    goto LAB_143a55a1d;
  case 3:
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
      *param_5 = (longlong)(pbVar2 + 1);
      local_c8 = (ulonglong)bVar12;
    }
    else {
      FUN_1439f8f00(param_5,&local_b0);
      local_c8 = local_b0;
      if (local_a8 == '\0') {
        return 0;
      }
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 4;
    if (param_4[1] != 0) {
      FUN_143a51e70(param_1,param_2,4,param_4[2]);
      return 1;
    }
    goto LAB_143a55b03;
  case 4:
    uVar8 = 0;
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (uVar8 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      uVar8 = FUN_1439f8e20(param_5,uVar8);
      if ((longlong)uVar8 < 0) {
        return 0;
      }
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 5;
    if (param_4[1] != 0) {
      local_c8 = CONCAT44(local_c8._4_4_,(int)uVar8);
      FUN_143a51aa0(param_1,param_2,5,param_4[2]);
      return 1;
    }
    uVar8 = uVar8 & 0xffffffff;
    local_c8 = local_c0;
    goto LAB_143a5598d;
  case 5:
    if ((int)param_5[1] - (int)*param_5 < 8) {
      cVar3 = FUN_1439f8a80(param_5,&local_b0);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_b0 = *(ulonglong *)*param_5;
      *param_5 = (longlong)((ulonglong *)*param_5 + 1);
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 6;
    if (param_4[1] != 0) {
      local_c8 = local_b0;
      FUN_143a51e70(param_1,param_2,6,param_4[2]);
      return 1;
    }
LAB_143a55b03:
    local_c8 = local_c0;
    FUN_143a574a0(param_1,param_2,uVar9);
    break;
  case 6:
    if ((int)param_5[1] - (int)*param_5 < 4) {
      cVar3 = FUN_1439f8a20(param_5,&local_b8);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar4 = (undefined4)local_b8;
    }
    else {
      uVar4 = *(undefined4 *)*param_5;
      local_b8 = CONCAT44(local_b8._4_4_,uVar4);
      *param_5 = (longlong)((undefined4 *)*param_5 + 1);
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    if (param_4[1] == 0) {
      local_c8 = local_c0;
      FUN_143a573b0(param_1,param_2,7);
    }
    else {
      local_c8 = CONCAT44(local_c8._4_4_,uVar4);
      FUN_143a51dd0(param_1,param_2,7,param_4[2]);
    }
    break;
  case 7:
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (*pbVar2 < 0x80)) {
      local_b0 = (ulonglong)*pbVar2;
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      FUN_1439f8f00(param_5,&local_b0);
      if (local_a8 == '\0') {
        return 0;
      }
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    if (param_4[1] == 0) {
      local_c8 = local_c0;
      FUN_143a572b0(param_1,param_2,8);
    }
    else {
      local_c8 = CONCAT71(local_c8._1_7_,local_b0 != 0);
      FUN_143a51960(param_1,param_2,8,param_4[2]);
    }
    break;
  case 8:
    uVar9 = 9;
    goto LAB_143a55f9d;
  case 9:
    local_c8 = *(ulonglong *)(param_4 + 0x18);
    if (param_4[1] == 0) {
      plVar11 = (longlong *)FUN_143a54c30(param_1,param_2,10,*(undefined8 *)(param_4 + 8));
    }
    else {
      plVar11 = (longlong *)FUN_143a51c80();
    }
    piVar1 = (int *)((longlong)param_5 + 0x34);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return 0;
    }
    cVar3 = (**(code **)(*plVar11 + 0x50))(plVar11,param_5);
    if (cVar3 == '\0') {
      return 0;
    }
    *(int *)((longlong)param_5 + 0x34) = *(int *)((longlong)param_5 + 0x34) + 1;
    if (*(uint *)(param_5 + 4) == (param_2 * 8 | 4U)) {
      return 1;
    }
    return 0;
  case 10:
    local_c8 = *(ulonglong *)(param_4 + 0x18);
    if (param_4[1] == 0) {
      plVar11 = (longlong *)FUN_143a54c30(param_1,param_2,0xb,*(undefined8 *)(param_4 + 8));
    }
    else {
      plVar11 = (longlong *)FUN_143a51c80();
    }
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (uVar6 = (uint)*pbVar2, *pbVar2 < 0x80)) {
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      uVar6 = FUN_1439f98b0(param_5);
      if ((int)uVar6 < 0) {
        return 0;
      }
    }
    FUN_1439f8500(param_5,&local_b0,uVar6);
    if ((longlong)local_b0 < 0) {
      return 0;
    }
    cVar3 = (**(code **)(*plVar11 + 0x50))(plVar11,param_5);
    if (cVar3 == '\0') {
      return 0;
    }
    cVar3 = FUN_1439f84b0(param_5,local_b0 & 0xffffffff);
    if (cVar3 == '\0') {
      return 0;
    }
    break;
  case 0xb:
    uVar9 = 0xc;
LAB_143a55f9d:
    if (param_4[1] == 0) {
      uVar9 = FUN_143a54fc0(param_1,param_2,uVar9,*(undefined8 *)(param_4 + 0x18));
    }
    else {
      uVar9 = FUN_143a51d40();
    }
    cVar3 = thunk_FUN_1439fa490(param_5,uVar9);
    if (cVar3 == '\0') {
      return 0;
    }
    break;
  case 0xc:
    uVar8 = 0;
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (uVar8 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      uVar10 = FUN_1439f8e20(param_5,uVar8);
      uVar8 = uVar10 & 0xffffffff;
      if ((longlong)uVar10 < 0) {
        return 0;
      }
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    if (param_4[1] == 0) {
      local_c8 = local_c0;
      FUN_143a573b0(param_1,param_2,0xd,uVar8);
    }
    else {
      local_c8 = CONCAT44(local_c8._4_4_,(int)uVar8);
      FUN_143a51dd0(param_1,param_2,0xd,param_4[2]);
    }
    break;
  case 0xd:
    uVar8 = 0;
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (uVar8 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      uVar10 = FUN_1439f8e20(param_5,uVar8);
      uVar8 = uVar10 & 0xffffffff;
      if ((longlong)uVar10 < 0) {
        return 0;
      }
    }
    cVar3 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar8);
    if (cVar3 == '\0') {
      (**(code **)(*param_6 + 0x18))(param_6,param_2,uVar8);
    }
    else {
      local_c0 = *(undefined8 *)(param_4 + 0x18);
      if (param_4[1] == 0) {
        local_c8 = local_c0;
        FUN_143a573b0(param_1,param_2,0xe,uVar8);
      }
      else {
        local_c8 = CONCAT44(local_c8._4_4_,(int)uVar8);
        FUN_143a51aa0(param_1,param_2,0xe,param_4[2]);
      }
    }
    break;
  case 0xe:
    if ((int)param_5[1] - (int)*param_5 < 4) {
      cVar3 = FUN_1439f8a20(param_5,&local_b0);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_b0._0_4_ = *(uint *)*param_5;
      *param_5 = (longlong)((uint *)*param_5 + 1);
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 0xf;
    if (param_4[1] != 0) {
      local_c8 = CONCAT44(local_c8._4_4_,(uint)local_b0);
      FUN_143a51aa0(param_1,param_2,0xf,param_4[2]);
      return 1;
    }
    goto LAB_143a55b88;
  case 0xf:
    if ((int)param_5[1] - (int)*param_5 < 8) {
      cVar3 = FUN_1439f8a80(param_5,&local_b0);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_b0 = *(ulonglong *)*param_5;
      *param_5 = (longlong)((ulonglong *)*param_5 + 1);
    }
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 0x10;
    if (param_4[1] != 0) {
      local_c8 = local_b0;
      FUN_143a51be0(param_1,param_2,0x10,param_4[2]);
      return 1;
    }
    goto LAB_143a55a1d;
  case 0x10:
    bVar12 = 0;
    pbVar2 = (byte *)*param_5;
    if (pbVar2 < (byte *)param_5[1]) {
      bVar12 = *pbVar2;
      uVar6 = (uint)bVar12;
      if (0x7f < bVar12) goto LAB_143a55b33;
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
LAB_143a55b33:
      lVar7 = FUN_1439f8e20(param_5,bVar12);
      uVar6 = (uint)lVar7;
      if (lVar7 < 0) {
        return 0;
      }
    }
    local_b0._0_4_ = ~(uVar6 & 1) + 1 ^ uVar6 >> 1;
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 0x11;
    if (param_4[1] != 0) {
      local_c8 = CONCAT44(local_c8._4_4_,(uint)local_b0);
      FUN_143a51aa0(param_1,param_2,0x11,param_4[2]);
      return 1;
    }
LAB_143a55b88:
    uVar8 = (ulonglong)(uint)local_b0;
    local_c8 = local_c0;
LAB_143a5598d:
    FUN_143a573b0(param_1,param_2,uVar9,uVar8);
    break;
  case 0x11:
    pbVar2 = (byte *)*param_5;
    if ((pbVar2 < (byte *)param_5[1]) && (*pbVar2 < 0x80)) {
      local_b0 = (ulonglong)*pbVar2;
      *param_5 = (longlong)(pbVar2 + 1);
    }
    else {
      FUN_1439f8f00(param_5,&local_b0);
      if (local_a8 == '\0') {
        return 0;
      }
    }
    local_c8 = ~(ulonglong)((uint)local_b0 & 1) + 1 ^ local_b0 >> 1;
    local_c0 = *(undefined8 *)(param_4 + 0x18);
    uVar9 = 0x12;
    if (param_4[1] != 0) {
      FUN_143a51be0(param_1,param_2,0x12,param_4[2]);
      return 1;
    }
LAB_143a55a1d:
    local_c8 = local_c0;
    FUN_143a574a0(param_1,param_2,uVar9);
  }
  return 1;
}



// FUNCTION 143a56160 FUN_143a56160 body=228 status=ok
// SIG undefined FUN_143a56160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a56160(void)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  plVar4 = (longlong *)FUN_143a53200();
  if (plVar4 == (longlong *)0x0) {
    uVar5 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x34c);
    local_54 = 1;
    uVar5 = FUN_1439eef00(uVar5,"CHECK failed: extension != NULL: ");
    uVar5 = FUN_1439eef00(uVar5,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_58,uVar5);
    DsDevice::~DsDevice(local_48);
  }
  lVar2 = *plVar4;
  iVar1 = *(int *)(lVar2 + 8);
  *(int *)(lVar2 + 8) = iVar1 + -1;
  piVar3 = *(int **)(lVar2 + 0x10);
  uVar5 = *(undefined8 *)(piVar3 + (longlong)iVar1 * 2);
  *piVar3 = *piVar3 + -1;
  piVar3 = *(int **)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 8) < *piVar3) {
    *(undefined8 *)(piVar3 + (longlong)*(int *)(lVar2 + 8) * 2 + 2) =
         *(undefined8 *)(piVar3 + (longlong)*piVar3 * 2 + 2);
  }
  return uVar5;
}



// FUNCTION 143a56250 FUN_143a56250 body=326 status=ok
// SIG undefined FUN_143a56250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a56250(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = 0;
  plVar3 = (longlong *)FUN_143a53200();
  if (plVar3 == (longlong *)0x0) {
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x325);
    local_54 = 1;
    uVar4 = FUN_1439eef00(uVar4,"CHECK failed: extension != NULL: ");
    uVar4 = FUN_1439eef00(uVar4,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_58,uVar4);
    DsDevice::~DsDevice(local_48);
  }
  switch(*(undefined4 *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(plVar3 + 1) * 4)) {
  case 1:
  case 8:
    FUN_1439f20a0(*plVar3);
    break;
  case 2:
    FUN_1439f20a0(*plVar3);
    break;
  case 3:
    FUN_1439f20a0(*plVar3);
    break;
  case 4:
    FUN_1439f20a0(*plVar3);
    break;
  case 5:
    FUN_1439f20a0(*plVar3);
    break;
  case 6:
    FUN_1439f20a0(*plVar3);
    break;
  case 7:
    FUN_1439f20a0(*plVar3);
    break;
  case 9:
    FUN_1439f20b0(*plVar3);
    break;
  case 10:
    lVar2 = *plVar3;
    iVar1 = *(int *)(lVar2 + 8);
    *(int *)(lVar2 + 8) = iVar1 + -1;
    (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1 * 8) + 0x30))();
  }
  return;
}



// FUNCTION 143a563c0 FUN_143a563c0 body=3246 status=ok
// SIG undefined FUN_143a563c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a563c0(longlong *param_1,int param_2,longlong param_3)

{
  byte *pbVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int *piVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_78 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    if ((*(byte *)((longlong)param_1 + 10) & 0xf) == 0) {
      switch((char)param_1[1]) {
      case '\x01':
        FUN_1439fac10(param_2,*param_1);
        break;
      case '\x02':
        FUN_1439fae60(param_2,(int)*param_1);
        break;
      case '\x03':
        FUN_1439fafd0(param_2,*param_1);
        break;
      case '\x04':
        FUN_1439fafd0(param_2,*param_1);
        break;
      case '\x05':
        FUN_1439fac90(param_2,(int)*param_1);
        break;
      case '\x06':
        FUN_1439fade0(param_2,*param_1);
        break;
      case '\a':
        FUN_1439fad60(param_2,(int)*param_1);
        break;
      case '\b':
        FUN_1439fa860(param_2,(char)*param_1);
        break;
      case '\t':
        FUN_1439fb440(param_2,*param_1);
        break;
      case '\n':
        FUN_1439faee0(param_2,*param_1);
        break;
      case '\v':
        if ((*(byte *)((longlong)param_1 + 10) & 0xf0) == 0) {
          FUN_1439fb0a0(param_2,*param_1);
        }
        else {
          (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,param_2);
        }
        break;
      case '\f':
        FUN_1439fa930(param_2,*param_1);
        break;
      case '\r':
        FUN_1439fb720(param_2,(int)*param_1);
        break;
      case '\x0e':
        FUN_1439fac90(param_2,(int)*param_1);
        break;
      case '\x0f':
        FUN_1439fad60(param_2,(int)*param_1);
        break;
      case '\x10':
        FUN_1439fade0(param_2,*param_1);
        break;
      case '\x11':
        FUN_1439fb290(param_2,(int)*param_1);
        break;
      case '\x12':
        FUN_1439fb360(param_2,*param_1);
      }
    }
  }
  else if (*(char *)((longlong)param_1 + 0xb) == '\0') {
    switch((char)param_1[1]) {
    case '\x01':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439fac10(param_2,*puVar7,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x02':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439fae60(param_2,*puVar6,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x03':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439fafd0(param_2,*puVar7,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x04':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439fafd0(param_2,*puVar7,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x05':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439fac90(param_2,*puVar6,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x06':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439fade0(param_2,*puVar7,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\a':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439fad60(param_2,*puVar6,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\b':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar10 = (undefined1 *)FUN_1439f1d20(*param_1,iVar16);
          FUN_1439fa860(param_2,*puVar10,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\t':
      iVar16 = 0;
      iVar12 = IStreamingManager::GetNumWantingResources(*param_1);
      if (0 < iVar12) {
        do {
          uVar9 = FUN_1439f1d30(*param_1,iVar16);
          FUN_1439fb440(param_2,uVar9,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = IStreamingManager::GetNumWantingResources(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\n':
      iVar12 = 0;
      lVar11 = *param_1;
      if (0 < *(int *)(lVar11 + 8)) {
        lVar17 = 0;
        do {
          FUN_1439faee0(param_2,*(undefined8 *)(*(longlong *)(lVar11 + 0x10) + 8 + lVar17),param_3);
          iVar12 = iVar12 + 1;
          lVar17 = lVar17 + 8;
          lVar11 = *param_1;
        } while (iVar12 < *(int *)(lVar11 + 8));
      }
      break;
    case '\v':
      iVar12 = 0;
      lVar11 = *param_1;
      if (0 < *(int *)(lVar11 + 8)) {
        lVar17 = 0;
        do {
          FUN_1439fb0a0(param_2,*(undefined8 *)(*(longlong *)(lVar11 + 0x10) + 8 + lVar17),param_3);
          iVar12 = iVar12 + 1;
          lVar17 = lVar17 + 8;
          lVar11 = *param_1;
        } while (iVar12 < *(int *)(lVar11 + 8));
      }
      break;
    case '\f':
      iVar16 = 0;
      iVar12 = IStreamingManager::GetNumWantingResources(*param_1);
      if (0 < iVar12) {
        do {
          uVar9 = FUN_1439f1d30(*param_1,iVar16);
          FUN_1439fa930(param_2,uVar9,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = IStreamingManager::GetNumWantingResources(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\r':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439fb720(param_2,*puVar6,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x0e':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439fac90(param_2,*puVar6,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x0f':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439fad60(param_2,*puVar6,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x10':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439fade0(param_2,*puVar7,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x11':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439fb290(param_2,*puVar6,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x12':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439fb360(param_2,*puVar7,param_3);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
    }
  }
  else if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar14 = param_2 * 8 | 2;
    uVar15 = (ulonglong)uVar14;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar1 = *(byte **)(param_3 + 8);
      pbVar13 = pbVar1;
      while (0x7f < uVar14) {
        *pbVar13 = (byte)uVar15 | 0x80;
        uVar15 = uVar15 >> 7;
        pbVar13 = pbVar13 + 1;
        uVar14 = (uint)uVar15;
      }
      *pbVar13 = (byte)uVar15;
      iVar12 = ((int)pbVar13 + 1) - (int)pbVar1;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
    }
    FUN_141514f80(param_3,*(undefined4 *)((longlong)param_1 + 0xc));
    switch((char)param_1[1]) {
    case '\x01':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          local_80 = *puVar7;
          FUN_1439f9cd0(param_3,local_80);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x02':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          local_80 = CONCAT44(local_80._4_4_,*puVar6);
          FUN_1439f9c90(param_3,*puVar6);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x03':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar3 = (ulonglong *)FUN_1439f1d10(*param_1,iVar16);
          uVar15 = *puVar3;
          if (*(int *)(param_3 + 0x10) < 10) {
            FUN_1439f9ec0(param_3);
          }
          else {
            pbVar1 = *(byte **)(param_3 + 8);
            pbVar13 = pbVar1;
            for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *pbVar13 = (byte)uVar15 | 0x80;
              pbVar13 = pbVar13 + 1;
            }
            *pbVar13 = (byte)uVar15;
            iVar12 = ((int)pbVar13 - (int)pbVar1) + 1;
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x04':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar3 = (ulonglong *)FUN_1439f1d10(*param_1,iVar16);
          uVar15 = *puVar3;
          if (*(int *)(param_3 + 0x10) < 10) {
            FUN_1439f9ec0(param_3);
          }
          else {
            pbVar1 = *(byte **)(param_3 + 8);
            pbVar13 = pbVar1;
            for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *pbVar13 = (byte)uVar15 | 0x80;
              pbVar13 = pbVar13 + 1;
            }
            *pbVar13 = (byte)uVar15;
            iVar12 = ((int)pbVar13 - (int)pbVar1) + 1;
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x05':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          piVar4 = (int *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          uVar15 = (ulonglong)*piVar4;
          if (*(int *)(param_3 + 0x10) < 10) {
            FUN_1439f9ec0(param_3);
          }
          else {
            pbVar1 = *(byte **)(param_3 + 8);
            pbVar13 = pbVar1;
            for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *pbVar13 = (byte)uVar15 | 0x80;
              pbVar13 = pbVar13 + 1;
            }
            *pbVar13 = (byte)uVar15;
            iVar12 = ((int)pbVar13 - (int)pbVar1) + 1;
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x06':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439f9cd0(param_3,*puVar7);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\a':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439f9c90(param_3,*puVar6);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\b':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          pcVar8 = (char *)FUN_1439f1d20(*param_1,iVar16);
          if (*(int *)(param_3 + 0x10) < 5) {
            FUN_1439f9e60(param_3);
          }
          else {
            *(bool *)*(undefined8 *)(param_3 + 8) = *pcVar8 != '\0';
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 1;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\t':
    case '\n':
    case '\v':
    case '\f':
      uVar9 = FUN_1439eeb00(local_70,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                            0x635);
      uVar9 = FUN_1439eef00(uVar9,"Non-primitive types can\'t be packed.");
      FUN_1439eec50(local_88,uVar9);
      DsDevice::~DsDevice(local_70);
      break;
    case '\r':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar2 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          uVar14 = *puVar2;
          uVar15 = (ulonglong)uVar14;
          if (*(int *)(param_3 + 0x10) < 5) {
            FUN_1439f9e60(param_3);
          }
          else {
            pbVar1 = *(byte **)(param_3 + 8);
            pbVar13 = pbVar1;
            while (0x7f < uVar14) {
              *pbVar13 = (byte)uVar15 | 0x80;
              uVar15 = uVar15 >> 7;
              pbVar13 = pbVar13 + 1;
              uVar14 = (uint)uVar15;
            }
            *pbVar13 = (byte)uVar15;
            iVar12 = ((int)pbVar13 - (int)pbVar1) + 1;
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x0e':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          piVar4 = (int *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          uVar15 = (ulonglong)*piVar4;
          if (*(int *)(param_3 + 0x10) < 10) {
            FUN_1439f9ec0(param_3);
          }
          else {
            pbVar1 = *(byte **)(param_3 + 8);
            pbVar13 = pbVar1;
            for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *pbVar13 = (byte)uVar15 | 0x80;
              pbVar13 = pbVar13 + 1;
            }
            *pbVar13 = (byte)uVar15;
            iVar12 = ((int)pbVar13 - (int)pbVar1) + 1;
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x0f':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          FUN_1439f9c90(param_3,*puVar6);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x10':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          puVar7 = (undefined8 *)FUN_1439f1d10(*param_1,iVar16);
          FUN_1439f9cd0(param_3,*puVar7);
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x11':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          piVar4 = (int *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar16);
          uVar14 = *piVar4 >> 0x1f ^ *piVar4 * 2;
          uVar15 = (ulonglong)uVar14;
          if (*(int *)(param_3 + 0x10) < 5) {
            FUN_1439f9e60(param_3);
          }
          else {
            pbVar1 = *(byte **)(param_3 + 8);
            pbVar13 = pbVar1;
            while (0x7f < uVar14) {
              *pbVar13 = (byte)uVar15 | 0x80;
              uVar15 = uVar15 >> 7;
              pbVar13 = pbVar13 + 1;
              uVar14 = (uint)uVar15;
            }
            *pbVar13 = (byte)uVar15;
            iVar12 = ((int)pbVar13 - (int)pbVar1) + 1;
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
      break;
    case '\x12':
      iVar16 = 0;
      iVar12 = FUN_1439f2ae0(*param_1);
      if (0 < iVar12) {
        do {
          plVar5 = (longlong *)FUN_1439f1d10(*param_1,iVar16);
          uVar15 = *plVar5 >> 0x3f ^ *plVar5 * 2;
          if (*(int *)(param_3 + 0x10) < 10) {
            FUN_1439f9ec0(param_3);
          }
          else {
            pbVar1 = *(byte **)(param_3 + 8);
            pbVar13 = pbVar1;
            for (; 0x7f < uVar15; uVar15 = uVar15 >> 7) {
              *pbVar13 = (byte)uVar15 | 0x80;
              pbVar13 = pbVar13 + 1;
            }
            *pbVar13 = (byte)uVar15;
            iVar12 = ((int)pbVar13 - (int)pbVar1) + 1;
            *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar12;
            *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar12;
          }
          iVar16 = iVar16 + 1;
          iVar12 = FUN_1439f2ae0(*param_1);
        } while (iVar16 < iVar12);
      }
    }
  }
  return;
}



// FUNCTION 143a57150 FUN_143a57150 body=342 status=ok
// SIG undefined FUN_143a57150(void)

void FUN_143a57150(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    uVar2 = *(ushort *)(param_1 + 10);
    piVar9 = *(int **)(param_1 + 0x10);
    piVar10 = piVar9 + (ulonglong)uVar2 * 8;
    uVar6 = (ulonglong)uVar2;
    if ((ulonglong)uVar2 != 0) {
      do {
        uVar7 = (longlong)uVar6 >> 1;
        if (piVar9[uVar7 * 8] < param_2) {
          piVar9 = piVar9 + uVar7 * 8 + 8;
          uVar7 = uVar6 + (-1 - uVar7);
        }
        uVar6 = uVar7;
      } while (0 < (longlong)uVar7);
    }
    for (; (piVar9 != piVar10 && (*piVar9 < param_3)); piVar9 = piVar9 + 8) {
      FUN_143a563c0(piVar9 + 2,*piVar9,param_4);
    }
  }
  else {
    puVar3 = (undefined8 *)**(longlong **)(param_1 + 0x10);
    cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
    puVar4 = puVar3;
    puVar8 = (undefined8 *)puVar3[1];
    while (cVar1 == '\0') {
      if (*(int *)(puVar8 + 4) < param_2) {
        puVar5 = (undefined8 *)puVar8[2];
        puVar8 = puVar4;
      }
      else {
        puVar5 = (undefined8 *)*puVar8;
      }
      puVar4 = puVar8;
      puVar8 = puVar5;
      cVar1 = *(char *)((longlong)puVar5 + 0x19);
    }
    while ((puVar4 != puVar3 && (*(int *)(puVar4 + 4) < param_3))) {
      FUN_143a563c0(puVar4 + 5,*(int *)(puVar4 + 4),param_4);
      puVar8 = (undefined8 *)puVar4[2];
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar8 + 0x19);
        puVar4 = puVar8;
        puVar8 = (undefined8 *)*puVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar8 + 0x19);
          puVar4 = puVar8;
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
        puVar5 = (undefined8 *)puVar4[1];
        puVar8 = puVar4;
        while ((puVar4 = puVar5, cVar1 == '\0' && (puVar8 == (undefined8 *)puVar4[2]))) {
          cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
          puVar5 = (undefined8 *)puVar4[1];
          puVar8 = puVar4;
        }
      }
    }
  }
  return;
}



// FUNCTION 143a572b0 FUN_143a572b0 body=113 status=ok
// SIG undefined FUN_143a572b0(void)

void FUN_143a572b0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined1 *)*plVar3;
  lVar2 = plVar3[1];
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  if ((char)lVar2 != '\0') {
    puVar1[8] = param_3;
    puVar1[9] = 0;
  }
  puVar1[10] = puVar1[10] & 0xf0;
  *puVar1 = param_4;
  return;
}



// FUNCTION 143a57330 FUN_143a57330 body=117 status=ok
// SIG undefined FUN_143a57330(void)

void FUN_143a57330(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [32];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_28,param_2,(int)param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_5;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 0;
  }
  *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}



// FUNCTION 143a573b0 FUN_143a573b0 body=111 status=ok
// SIG undefined FUN_143a573b0(void)

void FUN_143a573b0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined4 *)*plVar3;
  lVar2 = plVar3[1];
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 2) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 0;
  }
  *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}



// FUNCTION 143a57420 FUN_143a57420 body=117 status=ok
// SIG undefined FUN_143a57420(void)

void FUN_143a57420(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [32];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_28,param_2,param_4,0);
  puVar1 = (undefined4 *)*plVar3;
  lVar2 = plVar3[1];
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 2) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 0;
  }
  *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}



// FUNCTION 143a574a0 FUN_143a574a0 body=112 status=ok
// SIG undefined FUN_143a574a0(void)

void FUN_143a574a0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)FUN_143a540a0(param_1,local_18,param_2,param_4,0);
  puVar1 = (undefined8 *)*plVar3;
  lVar2 = plVar3[1];
  puVar1[2] = param_5;
  if ((char)lVar2 != '\0') {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((longlong)puVar1 + 9) = 0;
  }
  *(byte *)((longlong)puVar1 + 10) = *(byte *)((longlong)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}



// FUNCTION 143a57510 FUN_143a57510 body=196 status=ok
// SIG undefined FUN_143a57510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a57510(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_6c = 0;
  local_78[0] = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16f);
    local_6c = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_70,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f2400(*puVar1,param_3,local_78);
  return;
}



// FUNCTION 143a575e0 FUN_143a575e0 body=197 status=ok
// SIG undefined FUN_143a575e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a575e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70 = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16e);
    local_74 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f23f0(*puVar1,param_3,&local_70);
  return;
}



// FUNCTION 143a576b0 FUN_143a576b0 body=196 status=ok
// SIG undefined FUN_143a576b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a576b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70[0] = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x1ec);
    local_74 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f23e0(*puVar1,param_3,local_70);
  return;
}



// FUNCTION 143a57780 FUN_143a57780 body=197 status=ok
// SIG undefined FUN_143a57780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a57780(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70[0] = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16d);
    local_74 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f23e0(*puVar1,param_3,local_70);
  return;
}



// FUNCTION 143a57850 FUN_143a57850 body=196 status=ok
// SIG undefined FUN_143a57850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a57850(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70[0] = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x169);
    local_74 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f23e0(*puVar1,param_3,local_70);
  return;
}



// FUNCTION 143a57920 FUN_143a57920 body=196 status=ok
// SIG undefined FUN_143a57920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a57920(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70 = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16a);
    local_74 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f23f0(*puVar1,param_3,&local_70);
  return;
}



// FUNCTION 143a579f0 FUN_143a579f0 body=196 status=ok
// SIG undefined FUN_143a579f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a579f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70[0] = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16b);
    local_74 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f23e0(*puVar1,param_3,local_70);
  return;
}



// FUNCTION 143a57ac0 FUN_143a57ac0 body=196 status=ok
// SIG undefined FUN_143a57ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a57ac0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_68 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_70 = param_4;
  puVar1 = (undefined8 *)FUN_143a53200();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_60,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x16c);
    local_74 = 1;
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: extension != NULL: ");
    uVar2 = FUN_1439eef00(uVar2,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar2);
    DsDevice::~DsDevice(local_60);
  }
  FUN_1439f23f0(*puVar1,param_3,&local_70);
  return;
}



// FUNCTION 143a57b90 FUN_143a57b90 body=183 status=ok
// SIG undefined FUN_143a57b90(void)

void FUN_143a57b90(longlong *param_1,longlong *param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  if (*param_1 == *param_2) {
    lVar2 = param_1[1];
    *(short *)(param_1 + 1) = (short)param_2[1];
    *(short *)(param_2 + 1) = (short)lVar2;
    uVar1 = *(undefined2 *)((longlong)param_1 + 10);
    *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)((longlong)param_2 + 10);
    *(undefined2 *)((longlong)param_2 + 10) = uVar1;
    lVar2 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar2;
    return;
  }
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_143a54990(&local_20);
  FUN_143a52c80(param_2);
  FUN_143a54990(param_2,param_1);
  FUN_143a52c80(param_1);
  FUN_143a54990(param_1,&local_20);
  FUN_143a516b0(&local_20);
  return;
}



// FUNCTION 143a57c50 FUN_143a57c50 body=373 status=ok
// SIG undefined FUN_143a57c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a57c50(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  plVar3 = (longlong *)FUN_143a53200();
  if (plVar3 == (longlong *)0x0) {
    uVar4 = FUN_1439eeb00(local_68,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set.cc",
                          0x354);
    local_74 = 1;
    uVar4 = FUN_1439eef00(uVar4,"CHECK failed: extension != NULL: ");
    uVar4 = FUN_1439eef00(uVar4,"Index out-of-bounds (field is empty).");
    FUN_1439eec50(local_78,uVar4);
    DsDevice::~DsDevice(local_68);
  }
  switch(*(undefined4 *)(&DAT_145cbacf0 + (ulonglong)*(byte *)(plVar3 + 1) * 4)) {
  case 1:
  case 8:
    FUN_1439f2970(*plVar3,param_3,param_4);
    break;
  case 2:
    FUN_1439f29d0(*plVar3,param_3,param_4);
    break;
  case 3:
    FUN_1439f2970(*plVar3,param_3,param_4);
    break;
  case 4:
    FUN_1439f29d0(*plVar3,param_3,param_4);
    break;
  case 5:
    FUN_1439f29b0(*plVar3,param_3,param_4);
    break;
  case 6:
    FUN_1439f2990(*plVar3,param_3,param_4);
    break;
  case 7:
    FUN_1439f29f0(*plVar3,param_3,param_4);
    break;
  case 9:
    FUN_1439f2a10(*plVar3,param_3,param_4);
    break;
  case 10:
    lVar1 = *(longlong *)(*plVar3 + 0x10) + (longlong)param_4 * 8;
    lVar2 = *(longlong *)(*plVar3 + 0x10) + (longlong)param_3 * 8;
    uVar4 = *(undefined8 *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = uVar4;
  }
  return;
}



// FUNCTION 143a57df0 FUN_143a57df0 body=457 status=ok
// SIG undefined FUN_143a57df0(void)

void FUN_143a57df0(longlong *param_1,longlong *param_2,ulonglong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  if (param_1 != param_2) {
    puVar4 = (undefined8 *)
             FUN_143a53200(param_1,param_3 & 0xffffffff,param_3,param_4,0xfffffffffffffffe);
    puVar5 = (undefined8 *)FUN_143a53200(param_2,param_3 & 0xffffffff);
    if (puVar4 == (undefined8 *)0x0) {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if (*param_1 == *param_2) {
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        uVar7 = puVar5[2];
        plVar6 = (longlong *)FUN_143a540a0(param_1,&local_30,param_3 & 0xffffffff);
        puVar4 = (undefined8 *)*plVar6;
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
        puVar4[2] = uVar7;
        param_1 = param_2;
      }
      else {
        FUN_143a54220(param_1,param_3 & 0xffffffff,puVar5);
        param_1 = param_2;
      }
    }
    else {
      if (puVar5 != (undefined8 *)0x0) {
        if (*param_1 == *param_2) {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          uVar7 = puVar4[2];
          uVar3 = puVar5[1];
          *puVar4 = *puVar5;
          puVar4[1] = uVar3;
          puVar4[2] = puVar5[2];
          *puVar5 = uVar1;
          puVar5[1] = uVar2;
          puVar5[2] = uVar7;
          return;
        }
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        FUN_143a54220(&local_30,param_3 & 0xffffffff,puVar5);
        uVar7 = FUN_143a53200(&local_30,param_3 & 0xffffffff);
        FUN_143a52ad0(puVar5);
        FUN_143a54220(param_2,param_3 & 0xffffffff,puVar4);
        FUN_143a52ad0(puVar4);
        FUN_143a54220(param_1,param_3 & 0xffffffff,uVar7);
        FUN_143a516b0(&local_30);
        return;
      }
      if (*param_1 == *param_2) {
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        uVar7 = puVar4[2];
        plVar6 = (longlong *)FUN_143a540a0(param_2,&local_30,param_3 & 0xffffffff);
        puVar4 = (undefined8 *)*plVar6;
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
        puVar4[2] = uVar7;
      }
      else {
        FUN_143a54220(param_2,param_3 & 0xffffffff,puVar4);
      }
    }
    FUN_143a52d70(param_1,param_3 & 0xffffffff);
  }
  return;
}



// FUNCTION 143a57fc0 FUN_143a57fc0 body=218 status=ok
// SIG undefined FUN_143a57fc0(void)

void FUN_143a57fc0(longlong *param_1,undefined4 param_2,undefined1 param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_28 [16];
  
  if (param_5 == 0) {
    lVar3 = FUN_143a53200();
    if (lVar3 == 0) {
      return;
    }
    FUN_143a52ad0(lVar3);
    return;
  }
  plVar4 = (longlong *)FUN_143a540a0(param_1,local_28,param_2,param_4,0);
  plVar1 = (longlong *)*plVar4;
  lVar3 = plVar4[1];
  plVar1[2] = param_4;
  if ((char)lVar3 == '\0') {
    if ((*(byte *)((longlong)plVar1 + 10) & 0xf0) != 0) {
      (**(code **)(*(longlong *)*plVar1 + 0x28))((longlong *)*plVar1,param_5);
      goto LAB_143a58084;
    }
    if ((*param_1 == 0) && (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    *(undefined1 *)(plVar1 + 1) = param_3;
    *(undefined1 *)((longlong)plVar1 + 9) = 0;
    *(byte *)((longlong)plVar1 + 10) = *(byte *)((longlong)plVar1 + 10) & 0xf;
  }
  *plVar1 = param_5;
LAB_143a58084:
  *(byte *)((longlong)plVar1 + 10) = *(byte *)((longlong)plVar1 + 10) & 0xf0;
  return;
}



// FUNCTION 143a580a0 FUN_143a580a0 body=85 status=ok
// SIG undefined FUN_143a580a0(void)

void FUN_143a580a0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_143a580a0(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2,0x40);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a58100 FUN_143a58100 body=395 status=ok
// SIG undefined FUN_143a58100(void)

undefined8 *
FUN_143a58100(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    plVar4 = plVar2;
    plVar6 = (longlong *)plVar2[1];
    if (*(char *)(plVar2[1] + 0x19) == '\0') {
      do {
        FUN_143a580a0(param_1,plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        FMemory::operator_delete(plVar6,0x40);
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      plVar4 = (longlong *)*param_1;
    }
    plVar4[1] = (longlong)plVar2;
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
        plVar4 = plVar2;
        plVar6 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar4 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar6 = param_3;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar6 = plVar4;
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
        while ((plVar6 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          param_3 = plVar6;
        }
      }
      uVar5 = std::
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Extract(param_1);
      FMemory::operator_delete(uVar5,0x40);
      param_3 = plVar4;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a58290 FUN_143a58290 body=69 status=ok
// SIG undefined FUN_143a58290(void)

bool FUN_143a58290(undefined8 param_1,int param_2)

{
  int local_res18 [4];
  
  if (DAT_146ba31e8 == '\0') {
    return true;
  }
  local_res18[0] = 0;
  FUN_143a582e0(&DAT_145cc4e50,param_1,param_2,local_res18);
  return local_res18[0] == param_2;
}



// FUNCTION 143a582e0 FUN_143a582e0 body=730 status=ok
// SIG undefined FUN_143a582e0(void)

byte FUN_143a582e0(uint *param_1,uint *param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  longlong lVar15;
  
  uVar6 = (ulonglong)(int)param_3;
  *param_4 = 0;
  if (param_3 == 0) {
    return 0xf1;
  }
  puVar1 = (uint *)((longlong)param_2 + uVar6);
  puVar14 = param_2;
LAB_143a58351:
  uVar10 = (uint)uVar6;
  if (((ulonglong)puVar14 & 7) == 0) {
joined_r0x000143a58374:
    for (; (puVar14 < (uint *)((longlong)puVar1 - 7U) &&
           (uVar10 = param_3, ((puVar14[1] | *puVar14) & 0x80808080) == 0)); puVar14 = puVar14 + 2)
    {
    }
  }
  else {
    do {
      if ((puVar1 <= puVar14) || (0x7f < (byte)*puVar14)) break;
      puVar14 = (uint *)((longlong)puVar14 + 1);
    } while (((ulonglong)puVar14 & 7) != 0);
    if (((ulonglong)puVar14 & 7) == 0) goto joined_r0x000143a58374;
  }
  for (; (puVar14 < puVar1 && ((byte)*puVar14 < 0x80)); puVar14 = (uint *)((longlong)puVar14 + 1)) {
  }
  iVar8 = (int)puVar14 - (int)param_2;
  iVar5 = 0;
  iVar9 = uVar10 - iVar8;
  if (iVar9 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe);
    pbVar12 = (byte *)((longlong)iVar8 + (longlong)param_2);
    pbVar13 = pbVar12 + iVar9;
    lVar15 = (ulonglong)*param_1 + *(longlong *)(param_1 + 8);
    pbVar7 = pbVar12;
LAB_143a58400:
    bVar11 = 0;
    pbVar4 = pbVar7;
    lVar3 = lVar15;
    if (((ulonglong)pbVar7 & 7) != 0) {
      do {
        if ((pbVar13 <= pbVar7) || (*(char *)((ulonglong)*pbVar7 + lVar2) != '\0')) break;
        pbVar7 = pbVar7 + 1;
      } while (((ulonglong)pbVar7 & 7) != 0);
      pbVar4 = pbVar7;
      if (((ulonglong)pbVar7 & 7) != 0) goto joined_r0x000143a584c0;
    }
    do {
      do {
        pbVar7 = pbVar4;
        if (pbVar13 + -7 <= pbVar7) goto joined_r0x000143a584c0;
        pbVar4 = pbVar7 + 8;
      } while (((*(int *)(pbVar7 + 4) + param_1[7] | *(int *)pbVar7 + param_1[7] |
                 *(int *)(pbVar7 + 4) - param_1[6] | *(int *)pbVar7 - param_1[6]) & 0x80808080) == 0
              );
      if (((*(char *)((ulonglong)pbVar7[1] + lVar2) != '\0' ||
           *(char *)((ulonglong)pbVar7[2] + lVar2) != '\0') ||
          *(char *)((ulonglong)pbVar7[3] + lVar2) != '\0') ||
          *(char *)((ulonglong)*pbVar7 + lVar2) != '\0') goto joined_r0x000143a584c0;
    } while (((*(char *)((ulonglong)pbVar7[5] + lVar2) == '\0' &&
              *(char *)((ulonglong)pbVar7[6] + lVar2) == '\0') &&
             *(char *)((ulonglong)pbVar7[7] + lVar2) == '\0') &&
             *(char *)((ulonglong)pbVar7[4] + lVar2) == '\0');
    pbVar7 = pbVar7 + 4;
joined_r0x000143a584c0:
    do {
      if (pbVar13 <= pbVar7) goto LAB_143a584f4;
      bVar11 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      bVar11 = *(byte *)((ulonglong)bVar11 + lVar3);
      if (0xef < bVar11) goto LAB_143a584f4;
      lVar3 = (int)((uint)bVar11 << ((byte)param_1[4] & 0x1f)) + lVar15;
    } while( true );
  }
  bVar11 = 0xf1;
  goto LAB_143a58561;
LAB_143a584f4:
  uVar10 = ((int)lVar3 - param_1[8]) - *param_1;
  if (bVar11 < 0xf0) {
    if (param_1[1] <= uVar10) {
      bVar11 = 0xf0;
      goto LAB_143a58540;
    }
    bVar11 = 0xf1;
    goto LAB_143a5855a;
  }
  pbVar7 = pbVar7 + -1;
  if (param_1[1] <= uVar10) {
    do {
      pbVar7 = pbVar7 + -1;
      if (pbVar7 <= pbVar12) break;
    } while ((*pbVar7 & 0xc0) == 0x80);
  }
  if (bVar11 != 0xfd) goto LAB_143a5855a;
  goto LAB_143a58400;
  while ((*pbVar7 & 0xc0) == 0x80) {
LAB_143a58540:
    pbVar7 = pbVar7 + -1;
    if (pbVar7 <= pbVar12) break;
  }
LAB_143a5855a:
  iVar5 = (int)pbVar7 - (int)pbVar12;
LAB_143a58561:
  uVar6 = (ulonglong)param_3;
  puVar14 = (uint *)((longlong)puVar14 + (longlong)iVar5);
  if (bVar11 != 0xfd) {
    *param_4 = (int)puVar14 - (int)param_2;
    return bVar11;
  }
  goto LAB_143a58351;
}



// FUNCTION 143a585c0 Curl_pp_sendf body=34 status=ok
// SIG undefined Curl_pp_sendf(void)

void Curl_pp_sendf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_143a585f0(param_1,param_2,&local_res18);
  return;
}



// FUNCTION 143a585f0 FUN_143a585f0 body=373 status=ok
// SIG undefined FUN_143a585f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a585f0(undefined8 *param_1,char *param_2,va_list param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  ulonglong _Size;
  undefined1 auStack_478 [32];
  ulonglong local_458;
  va_list local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  puVar4 = (ulonglong *)__local_stdio_printf_options();
  local_458 = 0;
  local_450 = param_3;
  iVar2 = __stdio_common_vsprintf(*puVar4 | 2,local_448,0x400,param_2);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  if (iVar2 < 0x400) {
    if (-1 < iVar2) {
      lVar1 = param_1[2];
      _Size = (ulonglong)iVar2;
      if (_Size <= (ulonglong)(param_1[3] - lVar1)) {
        param_1[2] = lVar1 + _Size;
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + lVar1),local_448,_Size);
        *(undefined1 *)((longlong)param_1 + lVar1 + _Size) = 0;
        return;
      }
      local_458 = _Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (param_1,_Size,0,local_448);
      return;
    }
    iVar2 = vsnprintf((char *)0x0,0,param_2,param_3);
    if (iVar2 < 0) {
      return;
    }
  }
  iVar2 = iVar2 + 1;
  uVar5 = operator_new((longlong)iVar2);
  local_458 = 0;
  local_450 = param_3;
  iVar3 = __stdio_common_vsprintf(*puVar4 | 2,uVar5,(longlong)iVar2,param_2);
  if (iVar3 < 0) {
    iVar3 = -1;
  }
  if ((-1 < iVar3) && (iVar3 < iVar2)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,uVar5,(longlong)iVar3);
  }
  FMemory::operator_delete(uVar5);
  return;
}



// FUNCTION 143a58770 FUN_143a58770 body=84 status=ok
// SIG undefined FUN_143a58770(void)

undefined1 *
FUN_143a58770(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_143a585f0(param_1,param_2,&local_res18,param_4,1,0xfffffffffffffffe);
  return param_1;
}



// FUNCTION 143a587d0 vsnprintf body=104 status=ok
// SIG int vsnprintf(char * _DstBuf, size_t _MaxCount, char * _Format, va_list _ArgList)

int __cdecl vsnprintf(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 143a58840 FUN_143a58840 body=961 status=ok
// SIG undefined FUN_143a58840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a58840(undefined8 *param_1,byte *param_2,int param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_1a8 [32];
  uint local_188;
  int local_184;
  int local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong uStack_150;
  char local_148 [256];
  ulonglong local_48;
  
  local_170 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar6 = 0;
  local_188 = 0;
  local_180 = param_3 + -1;
  uVar5 = uVar6;
  local_184 = param_3;
  local_178 = param_4;
  do {
    lVar7 = -1;
    if ((local_180 <= (int)uVar6) && (local_184 != 0)) {
      local_158 = 0;
      uStack_150 = 0xf;
      local_168 = 0;
      if ((ulonglong)param_1[2] < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::_String_val<std::_Simple_types<char>_>::_Xran();
      }
      lVar3 = param_1[2] - uVar5;
      if (lVar3 != -1) {
        lVar7 = lVar3;
      }
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_168,(longlong)param_1 + uVar5,lVar7);
      lVar7 = *param_4;
      puVar2 = *(undefined8 **)(lVar7 + 8);
      if (*(undefined8 **)(lVar7 + 0x10) == puVar2) {
        FUN_143a0adf0(lVar7,puVar2,&local_168);
        uVar5 = uStack_150;
      }
      else {
        *puVar2 = CONCAT71(uStack_167,local_168);
        puVar2[1] = uStack_160;
        puVar2[2] = local_158;
        puVar2[3] = uStack_150;
        local_168 = 0;
        *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
        uVar5 = 0xf;
      }
      if (uVar5 < 0x10) {
        return;
      }
      uVar6 = uVar5 + 1;
      lVar3 = CONCAT71(uStack_167,local_168);
      lVar7 = lVar3;
      if (0xfff < uVar6) {
        uVar6 = uVar5 + 0x28;
        lVar7 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_143a58bc9:
      FMemory::operator_delete(lVar7,uVar6);
      return;
    }
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
    uVar6 = param_1[3];
    puVar2 = param_1;
    if (0xf < uVar6) {
      puVar2 = (undefined8 *)*param_1;
    }
    uVar1 = param_1[2];
    if ((lVar7 != 0) && (uVar5 < uVar1)) {
      _guard_xfg_dispatch_icall_nop(local_148,0,0x100);
      if (param_2 + lVar7 < param_2) {
        lVar7 = 0;
      }
      pbVar4 = param_2;
      if (lVar7 != 0) {
        do {
          local_148[*pbVar4] = '\x01';
          pbVar4 = pbVar4 + 1;
        } while ((longlong)pbVar4 - (longlong)param_2 != lVar7);
      }
      for (pbVar4 = (byte *)((longlong)puVar2 + uVar5); pbVar4 < (byte *)(uVar1 + (longlong)puVar2);
          pbVar4 = pbVar4 + 1) {
        if (local_148[*pbVar4] != '\0') {
          lVar7 = (longlong)pbVar4 - (longlong)puVar2;
          goto LAB_143a58952;
        }
      }
    }
    lVar7 = -1;
LAB_143a58952:
    local_168 = 0;
    if (lVar7 == -1) {
      local_158 = 0;
      uStack_150 = 0xf;
      if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::_String_val<std::_Simple_types<char>_>::_Xran(0,0,0xffffffffffffffff);
      }
      lVar7 = -1;
      if (uVar1 - uVar5 != -1) {
        lVar7 = uVar1 - uVar5;
      }
      if (0xf < uVar6) {
        param_1 = (undefined8 *)*param_1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_168,(longlong)param_1 + uVar5,lVar7);
      lVar7 = *local_178;
      puVar2 = *(undefined8 **)(lVar7 + 8);
      if (*(undefined8 **)(lVar7 + 0x10) == puVar2) {
        FUN_143a0adf0(lVar7,puVar2,&local_168);
        uVar5 = uStack_150;
      }
      else {
        *puVar2 = CONCAT71(uStack_167,local_168);
        puVar2[1] = uStack_160;
        puVar2[2] = local_158;
        puVar2[3] = uStack_150;
        local_168 = 0;
        *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
        uVar5 = 0xf;
      }
      if (uVar5 < 0x10) {
        return;
      }
      uVar6 = uVar5 + 1;
      lVar3 = CONCAT71(uStack_167,local_168);
      lVar7 = lVar3;
      if (0xfff < uVar6) {
        uVar6 = uVar5 + 0x28;
        lVar7 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - *(longlong *)(lVar3 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_143a58bc9;
    }
    local_158 = 0;
    uStack_150 = 0xf;
    if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::_String_val<std::_Simple_types<char>_>::_Xran();
    }
    uVar8 = lVar7 - uVar5;
    if (uVar1 - uVar5 < lVar7 - uVar5) {
      uVar8 = uVar1 - uVar5;
    }
    puVar2 = param_1;
    if (0xf < uVar6) {
      puVar2 = (undefined8 *)*param_1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_168,(longlong)puVar2 + uVar5,uVar8);
    param_4 = local_178;
    lVar3 = *local_178;
    puVar2 = *(undefined8 **)(lVar3 + 8);
    if (*(undefined8 **)(lVar3 + 0x10) == puVar2) {
      FUN_143a0adf0(lVar3,puVar2,&local_168);
      uVar5 = uStack_150;
    }
    else {
      *puVar2 = CONCAT71(uStack_167,local_168);
      puVar2[1] = uStack_160;
      puVar2[2] = local_158;
      puVar2[3] = uStack_150;
      local_168 = 0;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x20;
      uVar5 = 0xf;
    }
    if (0xf < uVar5) {
      if ((0xfff < uVar5 + 1) &&
         (0x1f < (CONCAT71(uStack_167,local_168) -
                 *(longlong *)(CONCAT71(uStack_167,local_168) + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FMemory::operator_delete();
    }
    uVar5 = lVar7 + 1;
    local_188 = local_188 + 1;
    uVar6 = (ulonglong)local_188;
  } while( true );
}



// FUNCTION 143a58c10 FUN_143a58c10 body=1165 status=ok
// SIG undefined FUN_143a58c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a58c10(byte *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_298 [32];
  longlong *local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined7 uStack_267;
  undefined8 uStack_260;
  undefined8 local_258;
  ulonglong uStack_250;
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  
  local_270 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  bVar1 = *param_2;
  local_278 = param_3;
  if ((bVar1 == 0) || (param_2[1] != 0)) {
    uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find_first_not_of
                      (param_1,param_2,0);
joined_r0x000143a58d68:
    if (uVar4 != 0xffffffffffffffff) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      uVar7 = *(ulonglong *)(param_1 + 0x18);
      pbVar5 = param_1;
      if (0xf < uVar7) {
        pbVar5 = *(byte **)param_1;
      }
      uVar3 = *(ulonglong *)(param_1 + 0x10);
      if ((lVar10 != 0) && (uVar4 < uVar3)) {
        _guard_xfg_dispatch_icall_nop(local_248,0,0x100);
        if (param_2 + lVar10 < param_2) {
          lVar10 = 0;
        }
        pbVar9 = param_2;
        if (lVar10 != 0) {
          do {
            local_248[*pbVar9] = '\x01';
            pbVar9 = pbVar9 + 1;
          } while ((longlong)pbVar9 - (longlong)param_2 != lVar10);
        }
        for (pbVar9 = pbVar5 + uVar4; pbVar9 < pbVar5 + uVar3; pbVar9 = pbVar9 + 1) {
          if (local_248[*pbVar9] != '\0') {
            uVar11 = (longlong)pbVar9 - (longlong)pbVar5;
            goto LAB_143a58e30;
          }
        }
      }
      uVar11 = 0xffffffffffffffff;
LAB_143a58e30:
      local_268 = 0;
      if (uVar11 == 0xffffffffffffffff) {
        local_258 = 0;
        uStack_250 = 0xf;
        if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
          std::_String_val<std::_Simple_types<char>_>::_Xran();
        }
        lVar10 = -1;
        if (uVar3 - uVar4 != -1) {
          lVar10 = uVar3 - uVar4;
        }
        if (0xf < uVar7) {
          param_1 = *(byte **)param_1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (&local_268,param_1 + uVar4,lVar10);
        lVar10 = *local_278;
        puVar2 = *(undefined8 **)(lVar10 + 8);
        if (*(undefined8 **)(lVar10 + 0x10) == puVar2) {
          FUN_143a0adf0(lVar10,puVar2,&local_268);
          uVar4 = uStack_250;
        }
        else {
          *puVar2 = CONCAT71(uStack_267,local_268);
          puVar2[1] = uStack_260;
          puVar2[2] = local_258;
          puVar2[3] = uStack_250;
          local_268 = 0;
          *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + 0x20;
          uVar4 = 0xf;
        }
        if (uVar4 < 0x10) {
          return;
        }
        uVar7 = uVar4 + 1;
        lVar6 = CONCAT71(uStack_267,local_268);
        lVar10 = lVar6;
        if (0xfff < uVar7) {
          uVar7 = uVar4 + 0x28;
          lVar10 = *(longlong *)(lVar6 + -8);
          if (0x1f < (lVar6 - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar10,uVar7);
        return;
      }
      local_258 = 0;
      uStack_250 = 0xf;
      if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::_String_val<std::_Simple_types<char>_>::_Xran();
      }
      uVar12 = uVar11 - uVar4;
      if (uVar3 - uVar4 < uVar11 - uVar4) {
        uVar12 = uVar3 - uVar4;
      }
      pbVar5 = param_1;
      if (0xf < uVar7) {
        pbVar5 = *(byte **)param_1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_268,pbVar5 + uVar4,uVar12);
      lVar10 = *local_278;
      puVar2 = *(undefined8 **)(lVar10 + 8);
      if (*(undefined8 **)(lVar10 + 0x10) == puVar2) {
        FUN_143a0adf0(lVar10,puVar2,&local_268);
        uVar4 = uStack_250;
      }
      else {
        *puVar2 = CONCAT71(uStack_267,local_268);
        puVar2[1] = uStack_260;
        puVar2[2] = local_258;
        puVar2[3] = uStack_250;
        local_268 = 0;
        *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + 0x20;
        uVar4 = 0xf;
      }
      if (0xf < uVar4) {
        if ((0xfff < uVar4 + 1) &&
           (0x1f < (CONCAT71(uStack_267,local_268) -
                   *(longlong *)(CONCAT71(uStack_267,local_268) + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FMemory::operator_delete();
      }
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      pbVar5 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pbVar5 = *(byte **)param_1;
      }
      uVar4 = *(ulonglong *)(param_1 + 0x10);
      if (uVar11 < uVar4) {
        _guard_xfg_dispatch_icall_nop(local_148,0,0x100);
        lVar6 = 0;
        if (param_2 + lVar10 < param_2) {
          lVar10 = lVar6;
        }
        if (lVar10 != 0) {
          do {
            local_148[param_2[lVar6]] = '\x01';
            lVar6 = lVar6 + 1;
          } while (lVar6 != lVar10);
        }
        for (pbVar9 = pbVar5 + uVar11; pbVar9 < pbVar5 + uVar4; pbVar9 = pbVar9 + 1) {
          if (local_148[*pbVar9] == '\0') {
            uVar4 = (longlong)pbVar9 - (longlong)pbVar5;
            goto joined_r0x000143a58d68;
          }
        }
      }
      uVar4 = 0xffffffffffffffff;
      goto joined_r0x000143a58d68;
    }
  }
  else {
    pbVar5 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar5 = *(byte **)param_1;
    }
    pbVar9 = pbVar5 + *(longlong *)(param_1 + 0x10);
    if (pbVar5 != pbVar9) {
      do {
        pbVar8 = pbVar5;
        if (*pbVar5 == bVar1) {
          pbVar8 = pbVar5 + 1;
        }
        else {
          do {
            pbVar8 = pbVar8 + 1;
            if (pbVar8 == pbVar9) break;
          } while (*pbVar8 != bVar1);
          local_258 = 0;
          uStack_250 = 0xf;
          local_268 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (&local_268,pbVar5,(longlong)pbVar8 - (longlong)pbVar5);
          lVar10 = *param_3;
          puVar2 = *(undefined8 **)(lVar10 + 8);
          if (*(undefined8 **)(lVar10 + 0x10) == puVar2) {
            FUN_143a0adf0(lVar10,puVar2,&local_268);
            uVar4 = uStack_250;
          }
          else {
            *puVar2 = CONCAT71(uStack_267,local_268);
            puVar2[1] = uStack_260;
            puVar2[2] = local_258;
            puVar2[3] = uStack_250;
            local_268 = 0;
            *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + 0x20;
            uVar4 = 0xf;
          }
          if (0xf < uVar4) {
            uVar7 = uVar4 + 1;
            lVar6 = CONCAT71(uStack_267,local_268);
            lVar10 = lVar6;
            if (0xfff < uVar7) {
              uVar7 = uVar4 + 0x28;
              lVar10 = *(longlong *)(lVar6 + -8);
              if (0x1f < (lVar6 - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar10,uVar7);
          }
        }
        pbVar5 = pbVar8;
      } while (pbVar8 != pbVar9);
    }
  }
  return;
}



// FUNCTION 143a590b0 FUN_143a590b0 body=279 status=ok
// SIG undefined FUN_143a590b0(void)

undefined8 FUN_143a590b0(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  iVar5 = 0;
  pbVar8 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar8 = *(byte **)param_1;
  }
  pbVar1 = pbVar8 + *(longlong *)(param_1 + 0x10);
  do {
    if (pbVar1 <= pbVar8) {
      *param_2 = iVar5;
      uVar3 = *(ulonglong *)(param_1 + 0x18);
      if (0xf < uVar3) {
        pbVar1 = *(byte **)param_1;
        uVar7 = uVar3 + 1;
        pbVar6 = pbVar1;
        if (0xfff < uVar7) {
          pbVar6 = *(byte **)(pbVar1 + -8);
          uVar7 = uVar3 + 0x28;
          pbVar8 = pbVar6;
          if ((byte *)0x1f < pbVar1 + (-8 - (longlong)pbVar6)) {
LAB_143a591c1:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(pbVar6,uVar7,pbVar8,param_2,param_1);
      }
      uVar4 = 1;
LAB_143a59161:
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0xf;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = 0;
      return uVar4;
    }
    bVar2 = *pbVar8;
    if (9 < bVar2 - 0x30) {
      *param_2 = iVar5;
LAB_143a59182:
      uVar3 = *(ulonglong *)(param_1 + 0x18);
      if (0xf < uVar3) {
        pbVar1 = *(byte **)param_1;
        uVar7 = uVar3 + 1;
        pbVar6 = pbVar1;
        if (0xfff < uVar7) {
          pbVar6 = *(byte **)(pbVar1 + -8);
          uVar7 = uVar3 + 0x28;
          pbVar8 = pbVar6;
          if ((byte *)0x1f < pbVar1 + (-8 - (longlong)pbVar6)) goto LAB_143a591c1;
        }
        FMemory::operator_delete(pbVar6,uVar7,pbVar8,param_2,param_1);
      }
      uVar4 = 0;
      goto LAB_143a59161;
    }
    if (0xccccccc < iVar5) {
LAB_143a5917b:
      *param_2 = 0x7fffffff;
      goto LAB_143a59182;
    }
    if ((int)(-0x7fffffd1 - (uint)bVar2) < iVar5 * 10) goto LAB_143a5917b;
    pbVar8 = pbVar8 + 1;
    iVar5 = iVar5 * 10 + -0x30 + (uint)bVar2;
  } while( true );
}



// FUNCTION 143a591d0 FUN_143a591d0 body=90 status=ok
// SIG undefined FUN_143a591d0(void)

undefined8 * FUN_143a591d0(undefined8 *param_1,ulonglong *param_2)

{
  char *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *param_2;
  uVar3 = uVar4 | 1L << ((longlong)(int)param_2[1] * 4 - 4U & 0x3f);
  pcVar1 = (char *)(param_1 + 6);
  do {
    uVar3 = uVar3 >> 4;
    uVar2 = (uint)uVar4;
    uVar4 = uVar4 >> 4;
    pcVar1 = pcVar1 + -1;
    *pcVar1 = "0123456789abcdef"[uVar2 & 0xf];
  } while (uVar3 != 0);
  *param_1 = pcVar1;
  param_1[1] = (longlong)(param_1 + 6) - (longlong)pcVar1;
  return param_1;
}



// FUNCTION 143a59230 FUN_143a59230 body=13 status=ok
// SIG undefined FUN_143a59230(void)

void FUN_143a59230(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
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



// FUNCTION 143a59240 FUN_143a59240 body=110 status=ok
// SIG undefined FUN_143a59240(void)

undefined1 *
FUN_143a59240(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *local_18;
  undefined8 uStack_10;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  local_18 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_18 = (undefined8 *)*param_2;
  }
  uStack_10 = param_2[2];
  FUN_143a592b0(&local_18,param_1,param_3,param_4,1,0xfffffffffffffffe);
  return param_1;
}



// FUNCTION 143a592b0 FUN_143a592b0 body=519 status=ok
// SIG undefined FUN_143a592b0(void)

void FUN_143a592b0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong _Size;
  
  pbVar6 = (byte *)*param_1;
  iVar8 = 0;
  lVar9 = 0;
  iVar7 = 0;
  if (0 < (longlong)param_1[1]) {
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + (char)(&DAT_146832370)[bVar2];
    } while ((longlong)iVar7 < (longlong)param_1[1]);
  }
  lVar3 = param_1[1];
  if (lVar9 != lVar3) {
    uVar4 = param_2[2];
    uVar1 = lVar9 + uVar4;
    if (uVar4 < uVar1) {
      _Size = uVar1 - uVar4;
      if (param_2[3] - uVar4 < _Size) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char>
                  (param_2,_Size,0,_Size,0);
      }
      else {
        param_2[2] = uVar1;
        puVar5 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar5 = (undefined8 *)*param_2;
        }
        _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar5 + uVar4),0,_Size);
        *(undefined1 *)((longlong)((longlong)puVar5 + uVar4) + _Size) = 0;
      }
    }
    else {
      param_2[2] = uVar1;
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      *(undefined1 *)((longlong)puVar5 + uVar1) = 0;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    pbVar6 = (byte *)((longlong)param_2 + uVar4);
    if (0 < lVar3) {
      pbVar10 = (byte *)*param_1;
      do {
        bVar2 = *pbVar10;
        switch(bVar2) {
        case 9:
          pbVar6[0] = 0x5c;
          pbVar6[1] = 0x74;
          pbVar6 = pbVar6 + 2;
          break;
        case 10:
          pbVar6[0] = 0x5c;
          pbVar6[1] = 0x6e;
          pbVar6 = pbVar6 + 2;
          break;
        default:
          if ((byte)(bVar2 - 0x20) < 0x5f) {
            *pbVar6 = bVar2;
            pbVar6 = pbVar6 + 1;
          }
          else {
            *pbVar6 = 0x5c;
            pbVar6[1] = (bVar2 >> 6) + 0x30;
            pbVar6[2] = (bVar2 >> 3 & 7) + 0x30;
            pbVar6[3] = (bVar2 & 7) + 0x30;
            pbVar6 = pbVar6 + 4;
          }
          break;
        case 0xd:
          pbVar6[0] = 0x5c;
          pbVar6[1] = 0x72;
          pbVar6 = pbVar6 + 2;
          break;
        case 0x22:
          pbVar6[0] = 0x5c;
          pbVar6[1] = 0x22;
          pbVar6 = pbVar6 + 2;
          break;
        case 0x27:
          pbVar6[0] = 0x5c;
          pbVar6[1] = 0x27;
          pbVar6 = pbVar6 + 2;
          break;
        case 0x5c:
          pbVar6[0] = 0x5c;
          pbVar6[1] = 0x5c;
          pbVar6 = pbVar6 + 2;
        }
        iVar8 = iVar8 + 1;
        pbVar10 = pbVar10 + 1;
      } while (iVar8 < lVar3);
    }
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_2,*param_1,lVar3);
  return;
}



// FUNCTION 143a59530 FUN_143a59530 body=182 status=ok
// SIG undefined FUN_143a59530(void)

void FUN_143a59530(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  pcVar3 = _guard_xfg_dispatch_icall_nop(param_1,0x2e);
  if (pcVar3 == (char *)0x0) {
    while( true ) {
      bVar1 = *param_1 - 0x2b;
      if ((0x3a < bVar1) || ((0x400000004007fe5U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
      break;
      param_1 = param_1 + 1;
    }
    if (*param_1 != '\0') {
      *param_1 = '.';
      param_1 = param_1 + 1;
      bVar1 = *param_1 - 0x2b;
      if (((0x3a < bVar1) || ((0x400000004007fe5U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)) &&
         (pcVar3 = param_1, *param_1 != '\0')) {
        do {
          pcVar2 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
          bVar1 = *pcVar2 - 0x2b;
          if ((bVar1 < 0x3b) && ((0x400000004007fe5U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0))
          break;
        } while (*pcVar2 != '\0');
        lVar4 = -1;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
        } while (pcVar3[lVar4] != '\0');
        _guard_xfg_dispatch_icall_nop(param_1,pcVar3,lVar5 + 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a595f0 FUN_143a595f0 body=217 status=ok
// SIG undefined FUN_143a595f0(void)

char * FUN_143a595f0(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *(undefined1 *)(param_2 + 0xb) = 0;
  pcVar4 = (char *)(param_2 + 10);
  if (-1 < param_1) {
    do {
      pcVar3 = pcVar4;
      iVar2 = param_1 / 10;
      *pcVar3 = (char)param_1 + (char)iVar2 * -10 + '0';
      pcVar4 = pcVar3 + -1;
      param_1 = iVar2;
    } while (0 < iVar2);
    return pcVar3;
  }
  pcVar3 = (char *)(param_2 + 9);
  if (-10 < param_1) {
    *pcVar4 = '0' - (char)param_1;
    *pcVar3 = '-';
    return pcVar3;
  }
  iVar2 = (-10 - param_1) / 10;
  *pcVar4 = (char)(-10 - param_1) + (char)iVar2 * -10 + '0';
  iVar2 = iVar2 + 1;
  do {
    iVar1 = iVar2 / 10;
    *pcVar3 = (char)iVar2 + (char)iVar1 * -10 + '0';
    pcVar3 = pcVar3 + -1;
    iVar2 = iVar1;
  } while (0 < iVar1);
  *pcVar3 = '-';
  return pcVar3;
}



// FUNCTION 143a596d0 FUN_143a596d0 body=17 status=ok
// SIG undefined FUN_143a596d0(void)

void FUN_143a596d0(ulonglong param_1,undefined1 *param_2)

{
  if ((int)param_1 < 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    param_1 = (ulonglong)(uint)-(int)param_1;
  }
  FUN_143a59830(param_1,param_2);
  return;
}



// FUNCTION 143a596f0 FUN_143a596f0 body=288 status=ok
// SIG undefined FUN_143a596f0(void)

char * FUN_143a596f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  
  *(undefined1 *)(param_2 + 0x15) = 0;
  pcVar4 = (char *)(param_2 + 0x14);
  if (-1 < param_1) {
    do {
      pcVar3 = pcVar4;
      lVar2 = param_1 / 10;
      *pcVar3 = (char)param_1 + (char)lVar2 * -10 + '0';
      param_1 = lVar2;
      pcVar4 = pcVar3 + -1;
    } while (0 < lVar2);
    return pcVar3;
  }
  pcVar3 = (char *)(param_2 + 0x13);
  if (param_1 < -9) {
    lVar2 = (-10 - param_1) / 10;
    *pcVar4 = (char)(-10 - param_1) + (char)lVar2 * -10 + '0';
    lVar2 = lVar2 + 1;
    do {
      lVar1 = lVar2 / 10;
      *pcVar3 = (char)lVar2 + (char)lVar1 * -10 + '0';
      pcVar3 = pcVar3 + -1;
      lVar2 = lVar1;
    } while (0 < lVar1);
    *pcVar3 = '-';
    return pcVar3;
  }
  *pcVar4 = '0' - (char)param_1;
  *pcVar3 = '-';
  return pcVar3;
}



// FUNCTION 143a59810 FUN_143a59810 body=19 status=ok
// SIG undefined FUN_143a59810(void)

void FUN_143a59810(longlong param_1,undefined1 *param_2)

{
  if (param_1 < 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    param_1 = -param_1;
  }
  FUN_143a599e0(param_1,param_2);
  return;
}



// FUNCTION 143a59830 FUN_143a59830 body=432 status=ok
// SIG undefined FUN_143a59830(void)

char * FUN_143a59830(uint param_1,char *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  if (param_1 < 1000000000) {
    if (param_1 < 100) {
      if (param_1 < 10) {
        *param_2 = (char)param_1 + '0';
        param_2[1] = '\0';
        return param_2 + 1;
      }
      goto LAB_143a599bf;
    }
    if (9999 < param_1) {
      if (999999 < param_1) {
        if (99999999 < param_1) {
          lVar1 = 1;
          iVar2 = (int)((ulonglong)param_1 / 100000000);
          *param_2 = (char)((ulonglong)param_1 / 100000000) + '0';
          goto LAB_143a5992c;
        }
        if (9999999 < param_1) goto LAB_143a59938;
        iVar2 = (int)((ulonglong)param_1 / 1000000);
        *param_2 = (char)((ulonglong)param_1 / 1000000) + '0';
        param_2 = param_2 + 1;
        goto LAB_143a5995d;
      }
      if (99999 < param_1) goto LAB_143a59966;
      iVar2 = (int)((ulonglong)param_1 / 10000);
      *param_2 = (char)((ulonglong)param_1 / 10000) + '0';
      param_2 = param_2 + 1;
      goto LAB_143a5998b;
    }
    if (999 < param_1) goto LAB_143a59994;
    iVar2 = (int)((ulonglong)param_1 / 100);
    *param_2 = (char)((ulonglong)param_1 / 100) + '0';
    param_2 = param_2 + 1;
  }
  else {
    lVar1 = 2;
    uVar3 = uVar3 / 100000000;
    iVar2 = (int)uVar3;
    *param_2 = (&DAT_145cc4fd0)[uVar3 * 2];
    param_2[1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [uVar3 * 2];
LAB_143a5992c:
    uVar3 = (ulonglong)(param_1 + iVar2 * -100000000);
    param_2 = param_2 + lVar1;
LAB_143a59938:
    param_1 = (uint)uVar3;
    uVar3 = uVar3 / 1000000;
    iVar2 = (int)uVar3;
    *param_2 = (&DAT_145cc4fd0)[uVar3 * 2];
    param_2[1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [uVar3 * 2];
    param_2 = param_2 + 2;
LAB_143a5995d:
    uVar3 = (ulonglong)(param_1 + iVar2 * -1000000);
LAB_143a59966:
    param_1 = (uint)uVar3;
    uVar3 = uVar3 / 10000;
    iVar2 = (int)uVar3;
    *param_2 = (&DAT_145cc4fd0)[uVar3 * 2];
    param_2[1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [uVar3 * 2];
    param_2 = param_2 + 2;
LAB_143a5998b:
    uVar3 = (ulonglong)(param_1 + iVar2 * -10000);
LAB_143a59994:
    param_1 = (uint)uVar3;
    uVar3 = uVar3 / 100;
    iVar2 = (int)uVar3;
    *param_2 = (&DAT_145cc4fd0)[uVar3 * 2];
    param_2[1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [uVar3 * 2];
    param_2 = param_2 + 2;
  }
  uVar3 = (ulonglong)(param_1 + iVar2 * -100);
LAB_143a599bf:
  *param_2 = (&DAT_145cc4fd0)[uVar3 * 2];
  param_2[1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
               [uVar3 * 2];
  param_2[2] = '\0';
  return param_2 + 2;
}



// FUNCTION 143a599e0 FUN_143a599e0 body=299 status=ok
// SIG undefined FUN_143a599e0(void)

undefined1 * FUN_143a599e0(ulonglong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if ((param_1 & 0xffffffff) == param_1) {
    puVar2 = (undefined1 *)FUN_143a59830();
    return puVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  lVar3 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar1,8);
  uVar4 = (param_1 - lVar3 >> 1) + lVar3 >> 0x1d;
  puVar2 = (undefined1 *)FUN_143a599e0(uVar4,param_2);
  uVar5 = (int)param_1 + (int)uVar4 * -1000000000;
  uVar4 = (ulonglong)uVar5 / 10000000;
  *puVar2 = (&DAT_145cc4fd0)[uVar4 * 2];
  puVar2[1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              [uVar4 * 2];
  uVar5 = uVar5 + (int)uVar4 * -10000000;
  uVar4 = (ulonglong)(uVar5 / 100000);
  puVar2[2] = (&DAT_145cc4fd0)[uVar4 * 2];
  puVar2[3] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              [uVar4 * 2];
  uVar5 = uVar5 % 100000;
  uVar4 = (ulonglong)uVar5 / 1000;
  puVar2[4] = (&DAT_145cc4fd0)[uVar4 * 2];
  puVar2[5] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              [uVar4 * 2];
  uVar5 = uVar5 + (int)uVar4 * -1000;
  uVar4 = (ulonglong)uVar5 / 10;
  puVar2[6] = (&DAT_145cc4fd0)[uVar4 * 2];
  puVar2[7] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              [uVar4 * 2];
  puVar2[8] = (char)uVar5 + (char)uVar4 * -10 + '0';
  puVar2[9] = 0;
  return puVar2 + 9;
}



// FUNCTION 143a59b10 FUN_143a59b10 body=360 status=ok
// SIG undefined FUN_143a59b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_143a59b10(undefined1 *param_1,double param_2)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  double local_78;
  undefined1 *local_68;
  undefined4 local_60;
  double local_58 [2];
  char local_48 [32];
  ulonglong local_28;
  
  local_58[1] = -NAN;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = 0;
  local_68 = param_1;
  if (param_2 == INFINITY) {
    builtin_strncpy(local_48,"inf",4);
  }
  else if (param_2 == -INFINITY) {
    builtin_strncpy(local_48,"-inf",5);
  }
  else {
    local_58[0] = param_2;
    sVar2 = _dtest(local_58);
    if (sVar2 == 2) {
      builtin_strncpy(local_48,"nan",4);
    }
    else {
      local_78 = param_2;
      _snprintf(local_48,0x20,"%.*g");
      local_68 = (undefined1 *)FUN_143a828c0(local_48,0);
      if ((double)local_68 != param_2) {
        local_78 = param_2;
        _snprintf(local_48,0x20,"%.*g");
      }
      FUN_143a59530(local_48);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  lVar3 = -1;
  do {
    lVar1 = lVar3 + 1;
    lVar3 = lVar3 + 1;
  } while (local_48[lVar1] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_1,local_48);
  return param_1;
}



// FUNCTION 143a59c80 FUN_143a59c80 body=422 status=ok
// SIG undefined FUN_143a59c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_143a59c80(char *param_1,float param_2)

{
  double dVar1;
  longlong lVar2;
  short sVar3;
  int *piVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  double local_88;
  float local_78 [2];
  char *local_70;
  undefined8 local_68;
  char local_60 [24];
  ulonglong local_48;
  
  local_68 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  dVar1 = (double)param_2;
  local_70 = param_1;
  if (dVar1 == INFINITY) {
    builtin_strncpy(local_60,"inf",4);
  }
  else if (dVar1 == -INFINITY) {
    builtin_strncpy(local_60,"-inf",5);
  }
  else {
    local_78[0] = param_2;
    sVar3 = _fdtest(local_78);
    if (sVar3 == 2) {
      builtin_strncpy(local_60,"nan",4);
    }
    else {
      local_88 = dVar1;
      _snprintf(local_60,0x18,"%.*g");
      piVar4 = _errno();
      *piVar4 = 0;
      dVar6 = (double)FUN_143a828c0(local_60,&local_70);
      if ((((local_60[0] == '\0') || (*local_70 != '\0')) || (piVar4 = _errno(), *piVar4 != 0)) ||
         ((float)dVar6 != param_2)) {
        local_88 = dVar1;
        _snprintf(local_60,0x18,"%.*g");
      }
      FUN_143a59530(local_60);
    }
  }
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *param_1 = '\0';
  lVar5 = -1;
  do {
    lVar2 = lVar5 + 1;
    lVar5 = lVar5 + 1;
  } while (local_60[lVar2] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_1,local_60);
  return param_1;
}



// FUNCTION 143a59e30 FUN_143a59e30 body=27 status=ok
// SIG undefined FUN_143a59e30(void)

void FUN_143a59e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_143a58840(param_1,param_2,0,local_res18);
  return;
}



// FUNCTION 143a59e50 FUN_143a59e50 body=24 status=ok
// SIG undefined FUN_143a59e50(void)

void FUN_143a59e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_143a58c10(param_1,param_2,local_res18);
  return;
}



// FUNCTION 143a59e70 Update body=12 status=ok
// SIG undefined Update(void)

void FBlake3::Update(undefined8 param_1,undefined8 *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,*param_2,param_2[1]);
  return;
}



// FUNCTION 143a59e80 FUN_143a59e80 body=276 status=ok
// SIG undefined FUN_143a59e80(void)

undefined8 *
FUN_143a59e80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *_Dst;
  undefined1 *puVar2;
  
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            (param_1,param_6[1] + param_7[1] + param_5[1] + param_4[1] + param_3[1] + param_2[1],0,
             param_4,1,0xfffffffffffffffe,param_1);
  _Dst = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Dst = (undefined8 *)*param_1;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_2,param_2[1]);
  lVar1 = param_2[1];
  _guard_xfg_dispatch_icall_nop((undefined1 *)((longlong)_Dst + lVar1),(void *)*param_3,param_3[1]);
  puVar2 = (undefined1 *)((longlong)_Dst + lVar1) + param_3[1];
  _guard_xfg_dispatch_icall_nop(puVar2,(void *)*param_4,param_4[1]);
  puVar2 = puVar2 + param_4[1];
  _guard_xfg_dispatch_icall_nop(puVar2,(void *)*param_5,param_5[1]);
  lVar1 = param_5[1];
  _guard_xfg_dispatch_icall_nop(puVar2 + lVar1,(void *)*param_6,param_6[1]);
  _guard_xfg_dispatch_icall_nop(puVar2 + lVar1 + param_6[1],(void *)*param_7,param_7[1]);
  return param_1;
}



// FUNCTION 143a59fa0 FUN_143a59fa0 body=297 status=ok
// SIG undefined FUN_143a59fa0(void)

void FUN_143a59fa0(undefined8 *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 2);
  iVar8 = 0;
  if (0 < iVar6) {
    uVar2 = 0;
    do {
      if ((ulonglong)param_1[2] <= uVar2) goto LAB_143a5a0c4;
      puVar4 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      if ((*(char *)(uVar2 + (longlong)puVar4) != ' ') &&
         (4 < (byte)(*(char *)(uVar2 + (longlong)puVar4) - 9U))) break;
      iVar8 = iVar8 + 1;
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)iVar6);
  }
  if (iVar8 == iVar6) {
    param_1[2] = 0;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)param_1 = 0;
  }
  else {
    if (0 < iVar8) {
      uVar2 = param_1[2];
      uVar3 = (longlong)iVar8;
      if (uVar2 < (ulonglong)(longlong)iVar8) {
        uVar3 = uVar2;
      }
      puVar4 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      param_1[2] = uVar2 - uVar3;
      _guard_xfg_dispatch_icall_nop(puVar4,(void *)((longlong)puVar4 + uVar3),(uVar2 - uVar3) + 1);
      iVar6 = iVar6 - iVar8;
    }
    uVar7 = iVar6 - 1;
    uVar2 = (ulonglong)(int)uVar7;
    if (-1 < (int)uVar7) {
      uVar3 = uVar2;
      do {
        uVar5 = (uint)uVar2;
        if ((ulonglong)param_1[2] <= uVar3) {
LAB_143a5a0c4:
                    /* WARNING: Subroutine does not return */
          std::_String_val<std::_Simple_types<char>_>::_Xran();
        }
        puVar4 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        if ((*(char *)((longlong)puVar4 + uVar3) != ' ') &&
           (4 < (byte)(*(char *)((longlong)puVar4 + uVar3) - 9U))) break;
        uVar5 = uVar5 - 1;
        uVar2 = (ulonglong)uVar5;
        bVar1 = 0 < (longlong)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
      if ((uVar5 != uVar7) && (-1 < (int)uVar5)) {
        FUN_143a5a4f0(param_1,(longlong)(int)(uVar5 + 1),0xffffffffffffffff);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a5a0d0 FUN_143a5a0d0 body=709 status=ok
// SIG undefined FUN_143a5a0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143a5a334) */
/* WARNING: Removing unreachable block (ram,0x000143a5a27d) */
/* WARNING: Removing unreachable block (ram,0x000143a5a2d6) */
/* WARNING: Removing unreachable block (ram,0x000143a5a266) */
/* WARNING: Removing unreachable block (ram,0x000143a5a33c) */
/* WARNING: Removing unreachable block (ram,0x000143a5a35d) */
/* WARNING: Removing unreachable block (ram,0x000143a5a2ea) */
/* WARNING: Removing unreachable block (ram,0x000143a5a2f8) */
/* WARNING: Removing unreachable block (ram,0x000143a5a30c) */
/* WARNING: Removing unreachable block (ram,0x000143a5a350) */
/* WARNING: Removing unreachable block (ram,0x000143a5a321) */

int FUN_143a5a0d0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  
  pbVar4 = param_2;
  if (param_1 == param_2) {
    do {
      if (*param_1 == 0) goto LAB_143a5a367;
      if (*param_1 == 0x5c) break;
      param_1 = param_1 + 1;
      pbVar4 = pbVar4 + 1;
    } while (param_1 == pbVar4);
  }
  bVar5 = *param_1;
  while (bVar5 != 0) {
    if (bVar5 == 0x5c) {
      pbVar6 = param_1 + 1;
      bVar5 = *pbVar6;
      switch(bVar5) {
      case 0:
        goto LAB_143a5a367;
      default:
        break;
      case 0x22:
        *pbVar4 = 0x22;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x27:
        *pbVar4 = 0x27;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
        bVar3 = bVar5 - 0x30;
        if ((byte)(param_1[2] - 0x30) < 8) {
          pbVar6 = param_1 + 2;
          bVar3 = (bVar5 - 0x36) * '\b' + param_1[2];
        }
        pbVar1 = pbVar6 + 1;
        if ((byte)(*pbVar1 - 0x30) < 8) {
          pbVar6 = pbVar6 + 1;
          bVar3 = (bVar3 - 6) * '\b' + *pbVar1;
        }
        *pbVar4 = bVar3;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x3f:
        *pbVar4 = 0x3f;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x58:
      case 0x78:
        bVar5 = param_1[2];
        if ((((byte)(bVar5 - 0x30) < 10) || ((byte)(bVar5 + 0x9f) < 6)) ||
           ((byte)(bVar5 + 0xbf) < 6)) {
          bVar5 = 0;
          while( true ) {
            bVar3 = pbVar6[1];
            if (((9 < (byte)(bVar3 - 0x30)) && (5 < (byte)(bVar3 + 0x9f))) &&
               (5 < (byte)(bVar3 + 0xbf))) break;
            bVar2 = bVar3 + 9;
            if (bVar3 < 0x3a) {
              bVar2 = bVar3;
            }
            bVar5 = bVar5 * '\x10' + (bVar2 & 0xf);
            pbVar6 = pbVar6 + 1;
          }
          *pbVar4 = bVar5;
          pbVar4 = pbVar4 + 1;
        }
        break;
      case 0x5c:
        *pbVar4 = 0x5c;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x61:
        *pbVar4 = 7;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x62:
        *pbVar4 = 8;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x66:
        *pbVar4 = 0xc;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x6e:
        *pbVar4 = 10;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x72:
        *pbVar4 = 0xd;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x74:
        *pbVar4 = 9;
        pbVar4 = pbVar4 + 1;
        break;
      case 0x76:
        *pbVar4 = 0xb;
        pbVar4 = pbVar4 + 1;
      }
    }
    else {
      *pbVar4 = bVar5;
      pbVar4 = pbVar4 + 1;
      pbVar6 = param_1;
    }
    param_1 = pbVar6 + 1;
    bVar5 = *param_1;
  }
LAB_143a5a367:
  *pbVar4 = 0;
  return (int)pbVar4 - (int)param_2;
}



// FUNCTION 143a5a450 FUN_143a5a450 body=145 status=ok
// SIG undefined FUN_143a5a450(void)

undefined1 *
FUN_143a5a450(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar2 = operator_new(param_2[2] + 1);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  iVar1 = FUN_143a5a0d0(param_2,lVar2,0,param_4,uVar3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,lVar2,(longlong)iVar1);
  if (lVar2 != 0) {
    FMemory::operator_delete(lVar2);
  }
  return param_1;
}



// FUNCTION 143a5a4f0 FUN_143a5a4f0 body=87 status=ok
// SIG undefined FUN_143a5a4f0(void)

undefined8 * FUN_143a5a4f0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    if (uVar1 - param_2 < param_3) {
      param_3 = uVar1 - param_2;
    }
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    param_1[2] = uVar1 - param_3;
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)puVar2 + param_2),
               (void *)((longlong)((longlong)puVar2 + param_2) + param_3),
               ((uVar1 - param_3) - param_2) + 1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}



// FUNCTION 143a5a550 find_first_not_of body=233 status=ok
// SIG undefined find_first_not_of(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find_first_not_of
                   (undefined8 *param_1,byte *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_2[lVar4] != 0);
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar1 = param_1[2];
  if (param_3 < uVar1) {
    ::_guard_xfg_dispatch_icall_nop(local_128,0,0x100);
    if (param_2 + lVar4 < param_2) {
      lVar4 = 0;
    }
    pbVar2 = param_2;
    if (lVar4 != 0) {
      do {
        pbVar3 = pbVar2 + 1;
        local_128[*pbVar2] = '\x01';
        pbVar2 = pbVar3;
      } while ((longlong)pbVar3 - (longlong)param_2 != lVar4);
    }
    for (pbVar2 = (byte *)((longlong)puVar5 + param_3); pbVar2 < (byte *)(uVar1 + (longlong)puVar5);
        pbVar2 = pbVar2 + 1) {
      if (local_128[*pbVar2] == '\0') {
        return (longlong)pbVar2 - (longlong)puVar5;
      }
    }
  }
  return -1;
}



// FUNCTION 143a5a640 FUN_143a5a640 body=386 status=ok
// SIG undefined FUN_143a5a640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a5a640(char *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_58 [32];
  char local_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  pcVar9 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar9 = *(char **)param_1;
  }
  pcVar7 = pcVar9 + *(longlong *)(param_1 + 0x10);
  while( true ) {
    if (pcVar7 <= pcVar9) {
      return 0;
    }
    cVar1 = *pcVar9;
    if (cVar1 != ' ') break;
    pcVar9 = pcVar9 + 1;
  }
  do {
    pcVar3 = pcVar7;
    if (pcVar3 <= pcVar9) {
      return 0;
    }
    pcVar7 = pcVar3 + -1;
  } while (pcVar3[-1] == ' ');
  if ((pcVar3 <= pcVar9) ||
     (((*(bool *)param_2 = cVar1 == '-', cVar1 == '-' || (*pcVar9 == '+')) &&
      (pcVar9 = pcVar9 + 1, pcVar3 <= pcVar9)))) {
    return 0;
  }
  pcVar7 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar7 = *(char **)param_1;
  }
  uVar4 = (longlong)pcVar9 - (longlong)pcVar7;
  local_38 = '\0';
  local_28 = 0;
  uStack_20 = 0xf;
  if (*(ulonglong *)(param_1 + 0x10) < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::_String_val<std::_Simple_types<char>_>::_Xran();
  }
  uVar8 = *(ulonglong *)(param_1 + 0x10) - uVar4;
  uVar5 = (longlong)pcVar3 - (longlong)pcVar9;
  if (uVar8 < (ulonglong)((longlong)pcVar3 - (longlong)pcVar9)) {
    uVar5 = uVar8;
  }
  pcVar9 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar9 = *(char **)param_1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_38,pcVar9 + uVar4,uVar5);
  if (param_1 == &local_38) {
    if (0xf < uStack_20) {
      lVar2 = CONCAT71(uStack_37,local_38);
      uVar4 = uStack_20 + 1;
      lVar6 = lVar2;
      if (0xfff < uVar4) {
        lVar6 = *(longlong *)(lVar2 + -8);
        uVar4 = uStack_20 + 0x28;
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar4);
    }
    return 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(param_1);
  *(ulonglong *)param_1 = CONCAT71(uStack_37,local_38);
  *(undefined8 *)(param_1 + 8) = uStack_30;
  *(undefined8 *)(param_1 + 0x10) = local_28;
  *(ulonglong *)(param_1 + 0x18) = uStack_20;
  return 1;
}



// FUNCTION 143a5a7d0 FUN_143a5a7d0 body=256 status=ok
// SIG undefined FUN_143a5a7d0(void)

ulonglong FUN_143a5a7d0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char local_res10 [8];
  byte *local_res18;
  undefined1 local_50 [32];
  undefined1 local_30 [40];
  
  pbVar4 = (byte *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                   basic_string<char,std::char_traits<char>,std::allocator<char>_>
                             (local_50,param_1,param_3,param_4,0xfffffffffffffffe);
  iVar9 = 0;
  *param_2 = 0;
  local_res18 = pbVar4;
  cVar2 = FUN_143a5a640(pbVar4,local_res10);
  if (cVar2 == '\0') {
    uVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (pbVar4);
    return uVar5 & 0xffffffffffffff00;
  }
  if (local_res10[0] == '\0') {
    uVar6 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
    bVar3 = FUN_143a590b0(uVar6,param_2);
  }
  else {
    pbVar8 = pbVar4;
    if (0xf < *(ulonglong *)(pbVar4 + 0x18)) {
      pbVar8 = *(byte **)pbVar4;
    }
    pbVar1 = pbVar8 + *(longlong *)(pbVar4 + 0x10);
    for (; pbVar8 < pbVar1; pbVar8 = pbVar8 + 1) {
      uVar7 = *pbVar8 - 0x30;
      if (9 < uVar7) {
        *param_2 = iVar9;
        bVar3 = 0;
        goto LAB_143a5a8a3;
      }
      if ((iVar9 < -0xccccccc) || (iVar9 * 10 < (int)(*pbVar8 + 0x7fffffd0))) {
        *param_2 = -0x80000000;
        bVar3 = 0;
        goto LAB_143a5a8a3;
      }
      iVar9 = iVar9 * 10 - uVar7;
    }
    *param_2 = iVar9;
    bVar3 = 1;
  }
LAB_143a5a8a3:
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar4);
  return (ulonglong)bVar3;
}



// FUNCTION 143a5a8e0 FUN_143a5a8e0 body=598 status=ok
// SIG undefined FUN_143a5a8e0(void)

undefined4 * FUN_143a5a8e0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  bool bVar22;
  undefined8 local_res8;
  
  uVar9 = *(undefined4 *)param_3;
  uVar10 = *(undefined4 *)((longlong)param_3 + 4);
  uVar16 = *param_3;
  uVar14 = *param_3;
  puVar4 = param_3 + 1;
  uVar11 = *(undefined4 *)puVar4;
  uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar15 = *puVar4;
  uVar13 = *puVar4;
  plVar1 = (longlong *)param_3[2];
  if (*(ushort *)(param_1 + 8) < 0x101) {
    puVar21 = *(undefined4 **)(param_1 + 0x10);
    puVar20 = puVar21 + (ulonglong)*(ushort *)(param_1 + 10) * 8;
    if (puVar21 != puVar20) {
      plVar19 = (longlong *)(puVar21 + 6);
      do {
        uVar3 = *puVar21;
        if (*(char *)((longlong)plVar19 + -7) == '\0') {
          bVar22 = (*(byte *)((longlong)plVar19 + -6) & 0xf) == 0;
        }
        else {
          iVar18 = FUN_143a53d00(plVar19 + -2);
          bVar22 = 0 < iVar18;
        }
        if (bVar22) {
          if (*plVar19 == 0) {
            local_res8 = FUN_143a3ee10(uVar15,uVar16,uVar3);
            lVar6 = *plVar1;
            puVar4 = *(undefined8 **)(lVar6 + 8);
            if (*(undefined8 **)(lVar6 + 0x10) == puVar4) {
              FUN_143a16470(lVar6,puVar4,&local_res8);
            }
            else {
              *puVar4 = local_res8;
              *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 8;
            }
          }
          else {
            lVar6 = *plVar1;
            plVar8 = *(longlong **)(lVar6 + 8);
            if (*(longlong **)(lVar6 + 0x10) == plVar8) {
              std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>
              ::_Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6,plVar8,plVar19);
            }
            else {
              *plVar8 = *plVar19;
              *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 8;
            }
          }
        }
        puVar21 = puVar21 + 8;
        plVar19 = plVar19 + 4;
      } while (puVar21 != puVar20);
    }
  }
  else {
    puVar4 = (undefined8 *)**(longlong **)(param_1 + 0x10);
    puVar5 = (undefined8 *)*puVar4;
    while (puVar5 != puVar4) {
      uVar3 = *(undefined4 *)(puVar5 + 4);
      if (*(char *)((longlong)puVar5 + 0x31) == '\0') {
        bVar22 = (*(byte *)((longlong)puVar5 + 0x32) & 0xf) == 0;
      }
      else {
        iVar18 = FUN_143a53d00(puVar5 + 5);
        bVar22 = 0 < iVar18;
      }
      if (bVar22) {
        if (puVar5[7] == 0) {
          local_res8 = FUN_143a3ee10(uVar13,uVar14,uVar3);
          lVar6 = *plVar1;
          puVar7 = *(undefined8 **)(lVar6 + 8);
          if (*(undefined8 **)(lVar6 + 0x10) == puVar7) {
            FUN_143a16470(lVar6,puVar7,&local_res8);
          }
          else {
            *puVar7 = local_res8;
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 8;
          }
        }
        else {
          lVar6 = *plVar1;
          plVar19 = *(longlong **)(lVar6 + 8);
          if (*(longlong **)(lVar6 + 0x10) == plVar19) {
            std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
            _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6,plVar19,puVar5 + 7);
          }
          else {
            *plVar19 = puVar5[7];
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar6 + 8) + 8;
          }
        }
      }
      puVar7 = (undefined8 *)puVar5[2];
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar2 = *(char *)((longlong)*puVar7 + 0x19);
        puVar5 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((longlong)*puVar7 + 0x19);
          puVar5 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      else {
        cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
        puVar17 = (undefined8 *)puVar5[1];
        puVar7 = puVar5;
        while ((puVar5 = puVar17, cVar2 == '\0' && (puVar7 == (undefined8 *)puVar5[2]))) {
          cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
          puVar17 = (undefined8 *)puVar5[1];
          puVar7 = puVar5;
        }
      }
    }
  }
  *param_2 = uVar9;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar12;
  *(longlong **)(param_2 + 4) = plVar1;
  return param_2;
}



// FUNCTION 143a5ab40 FUN_143a5ab40 body=129 status=ok
// SIG undefined FUN_143a5ab40(void)

byte * FUN_143a5ab40(int param_1,longlong *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  for (uVar2 = param_1 * 8 | 3; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_3 = (byte)uVar2 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar2;
  pbVar1 = (byte *)(**(code **)(*param_2 + 0x80))(param_2,param_3 + 1);
  for (uVar2 = param_1 * 8 | 4; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *pbVar1 = (byte)uVar2 | 0x80;
    pbVar1 = pbVar1 + 1;
  }
  *pbVar1 = (byte)uVar2;
  return pbVar1 + 1;
}



// FUNCTION 143a5abd0 FUN_143a5abd0 body=130 status=ok
// SIG undefined FUN_143a5abd0(void)

void FUN_143a5abd0(int param_1,longlong *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  for (uVar3 = param_1 * 8 | 2; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar3;
  uVar4 = (**(code **)(*param_2 + 0x70))(param_2);
  uVar3 = (uint)uVar4;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)uVar4;
    if (uVar3 < 0x80) break;
    uVar4 = uVar4 >> 7 & 0x1ffffff;
    *pbVar1 = bVar2 | 0x80;
    uVar3 = (uint)uVar4;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
                    /* WARNING: Could not recover jumptable at 0x000143a5ac4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))(param_2,param_3 + 2);
  return;
}



// FUNCTION 143a5ac60 FUN_143a5ac60 body=15 status=ok
// SIG undefined FUN_143a5ac60(void)

void FUN_143a5ac60(undefined8 *param_1)

{
  *param_1 = google::protobuf::internal::DescriptorPoolExtensionFinder::vftable;
  Chaos::FImplicitObject::~FImplicitObject();
  return;
}



// FUNCTION 143a5ac70 FUN_143a5ac70 body=11 status=ok
// SIG undefined FUN_143a5ac70(void)

void FUN_143a5ac70(undefined8 *param_1)

{
  *param_1 = google::protobuf::internal::FieldSkipper::vftable;
  return;
}



// FUNCTION 143a5ac80 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Chaos::TSphere<float,3>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::internal::DescriptorPoolExtensionFinder::vftable;
  FImplicitObject::~FImplicitObject();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143a5acc0 FUN_143a5acc0 body=43 status=ok
// SIG undefined FUN_143a5acc0(void)

undefined8 * FUN_143a5acc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::internal::FieldSkipper::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143a5acf0 FUN_143a5acf0 body=30 status=ok
// SIG undefined FUN_143a5acf0(void)

void FUN_143a5acf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143a5bd80();
  FUN_143a51890(*puVar1,param_3);
  return;
}



// FUNCTION 143a5ad10 FUN_143a5ad10 body=297 status=ok
// SIG undefined FUN_143a5ad10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a5ad10(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  plVar4 = (longlong *)FUN_143a5bd80();
  lVar7 = *plVar4;
  piVar2 = *(int **)(lVar7 + 0x10);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(lVar7 + 8);
    if (iVar1 < *piVar2) {
      lVar3 = *(longlong *)(piVar2 + (longlong)iVar1 * 2 + 2);
      *(int *)(lVar7 + 8) = iVar1 + 1;
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  if (*(int *)(*plVar4 + 8) == 0) {
    lVar7 = *param_3;
    uVar5 = FUN_143a4f9e0(param_2);
    plVar6 = (longlong *)(**(code **)(lVar7 + 8))(param_3,uVar5);
    if (plVar6 == (longlong *)0x0) {
      uVar5 = FUN_1439eeb00(local_68,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set_heavy.cc",0x112
                           );
      local_74 = 1;
      uVar5 = FUN_1439eef00(uVar5,"CHECK failed: prototype != NULL: ");
      FUN_1439eec50(local_78,uVar5);
      DsDevice::~DsDevice(local_68);
    }
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(*plVar4 + 0x10) + 8);
  }
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,*param_1);
  FUN_143a51890(*plVar4,lVar7);
  return lVar7;
}



// FUNCTION 143a5ae40 FUN_143a5ae40 body=67 status=ok
// SIG undefined FUN_143a5ae40(void)

void FUN_143a5ae40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 *local_18;
  
  local_38 = &local_res20;
  local_48._0_4_ = (undefined4)param_2;
  local_48._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_40._0_4_ = (undefined4)param_3;
  uStack_40._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  local_res20 = param_4;
  uVar1 = (undefined4)local_48;
  local_48 = param_2;
  uStack_40 = param_3;
  local_18 = local_38;
  FUN_143a5a8e0(uVar1,&local_48,&local_28);
  return;
}



// FUNCTION 143a5ae90 FUN_143a5ae90 body=352 status=ok
// SIG undefined FUN_143a5ae90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a5ae90(longlong param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  lVar3 = FUN_143a3ee10(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_2);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar1 = FUN_143a009a0(lVar3);
    *param_3 = uVar1;
    param_3[1] = *(int *)(lVar3 + 0x3c) == 3;
    param_3[2] = *(undefined1 *)(*(longlong *)(lVar3 + 0x78) + 0x4c);
    *(longlong *)(param_3 + 0x18) = lVar3;
    iVar2 = FUN_143a009a0(lVar3);
    if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) == 10) {
      lVar5 = **(longlong **)(param_1 + 0x10);
      uVar4 = FUN_143a4f9e0();
      lVar5 = (**(code **)(lVar5 + 8))(*(undefined8 *)(param_1 + 0x10),uVar4);
      *(longlong *)(param_3 + 8) = lVar5;
      if (lVar5 == 0) {
        uVar6 = FUN_1439eeb00(local_68,3,
                              "c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set_heavy.cc",
                              0x135);
        local_74 = 1;
        uVar4 = *(undefined8 *)(lVar3 + 8);
        uVar6 = FUN_1439eef00(uVar6,"CHECK failed: output->message_info.prototype != nullptr: ");
        uVar6 = FUN_1439eef00(uVar6,
                              "Extension factory\'s GetPrototype() returned NULL for extension: ");
        uVar4 = FUN_1439eecf0(uVar6,uVar4);
        FUN_1439eec50(local_78,uVar4);
        DsDevice::~DsDevice(local_68);
      }
    }
    else {
      iVar2 = FUN_143a009a0(lVar3);
      if (*(int *)(&DAT_145cbed10 + (longlong)iVar2 * 4) == 8) {
        *(code **)(param_3 + 8) = UKeyLabel::GetDisplayNameVisibility_Implementation;
        uVar4 = FUN_143a4dfa0(lVar3);
        *(undefined8 *)(param_3 + 0x10) = uVar4;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143a5aff0 FUN_143a5aff0 body=112 status=ok
// SIG undefined FUN_143a5aff0(void)

void FUN_143a5aff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_143a53200();
  if ((puVar2 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar2 + 10) & 0xf) == 0)) {
    if ((*(byte *)((longlong)puVar2 + 10) & 0xf0) == 0) {
      return;
    }
    lVar1 = *(longlong *)*puVar2;
    uVar3 = (**(code **)(*param_4 + 8))(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x000143a5b049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(*puVar2,uVar3);
    return;
  }
  (**(code **)(*param_4 + 8))(param_4,param_3);
  return;
}



// FUNCTION 143a5b060 FUN_143a5b060 body=2762 status=ok
// SIG undefined FUN_143a5b060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_143a5b060(longlong *param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    if ((*(byte *)((longlong)param_1 + 10) & 0xf) == 0) {
      switch((char)param_1[1]) {
      case '\x01':
        param_3 = (byte *)FUN_143a5c420(param_2,*param_1);
        break;
      case '\x02':
        param_3 = (byte *)FUN_141514d10(param_2,(int)*param_1);
        break;
      case '\x03':
        param_3 = (byte *)FUN_141514e10(param_2,*param_1);
        break;
      case '\x04':
        param_3 = (byte *)FUN_143a5c530(param_2,*param_1);
        break;
      case '\x05':
        param_3 = (byte *)FUN_141514d80(param_2,(int)*param_1);
        break;
      case '\x06':
        param_3 = (byte *)FUN_143a1e8b0(param_2,*param_1);
        break;
      case '\a':
        param_3 = (byte *)FUN_143a1e870(param_2,(int)*param_1);
        break;
      case '\b':
        param_3 = (byte *)FUN_141514ca0(param_2,(char)*param_1);
        break;
      case '\t':
        param_3 = (byte *)FUN_141514e70(param_2,*param_1);
        break;
      case '\n':
        param_3 = (byte *)FUN_143a5ab40(param_2,*param_1);
        break;
      case '\v':
        if ((*(byte *)((longlong)param_1 + 10) & 0xf0) == 0) {
          param_3 = (byte *)FUN_143a5abd0(param_2,*param_1);
        }
        else {
          param_3 = (byte *)(**(code **)(*(longlong *)*param_1 + 0x80))
                                      ((longlong *)*param_1,param_2);
        }
        break;
      case '\f':
        param_3 = (byte *)FUN_141514e70(param_2,*param_1);
        break;
      case '\r':
        param_3 = (byte *)FUN_141514f20(param_2,(int)*param_1);
        break;
      case '\x0e':
        param_3 = (byte *)FUN_141514d80(param_2,(int)*param_1);
        break;
      case '\x0f':
        param_3 = (byte *)FUN_143a1e870(param_2,(int)*param_1);
        break;
      case '\x10':
        param_3 = (byte *)FUN_143a1e8b0(param_2,*param_1);
        break;
      case '\x11':
        param_3 = (byte *)FUN_143a5c460(param_2,(int)*param_1);
        break;
      case '\x12':
        param_3 = (byte *)FUN_143a5c4c0(param_2,*param_1);
      }
    }
  }
  else if (*(char *)((longlong)param_1 + 0xb) == '\0') {
    switch((char)param_1[1]) {
    case '\x01':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_143a5c420(param_2,*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x02':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_141514d10(param_2,*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x03':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_141514e10(param_2,*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x04':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_143a5c530(param_2,*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x05':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_141514d80(param_2,*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x06':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_143a1e8b0(param_2,*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\a':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_143a1e870(param_2,*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\b':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar9 = (undefined1 *)FUN_1439f1d20(*param_1,iVar13);
          param_3 = (byte *)FUN_141514ca0(param_2,*puVar9,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\t':
      iVar13 = 0;
      iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
      if (0 < iVar2) {
        do {
          uVar8 = FUN_1439f1d30(*param_1,iVar13);
          param_3 = (byte *)FUN_141514e70(param_2,uVar8,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\n':
      iVar2 = 0;
      lVar10 = *param_1;
      if (0 < *(int *)(lVar10 + 8)) {
        lVar14 = 0;
        do {
          param_3 = (byte *)FUN_143a5ab40(param_2,*(undefined8 *)
                                                   (*(longlong *)(lVar10 + 0x10) + 8 + lVar14),
                                          param_3);
          iVar2 = iVar2 + 1;
          lVar14 = lVar14 + 8;
          lVar10 = *param_1;
        } while (iVar2 < *(int *)(lVar10 + 8));
      }
      break;
    case '\v':
      iVar2 = 0;
      lVar10 = *param_1;
      if (0 < *(int *)(lVar10 + 8)) {
        lVar14 = 0;
        do {
          param_3 = (byte *)FUN_143a5abd0(param_2,*(undefined8 *)
                                                   (*(longlong *)(lVar10 + 0x10) + 8 + lVar14),
                                          param_3);
          iVar2 = iVar2 + 1;
          lVar14 = lVar14 + 8;
          lVar10 = *param_1;
        } while (iVar2 < *(int *)(lVar10 + 8));
      }
      break;
    case '\f':
      iVar13 = 0;
      iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
      if (0 < iVar2) {
        do {
          uVar8 = FUN_1439f1d30(*param_1,iVar13);
          param_3 = (byte *)FUN_141514e70(param_2,uVar8,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = IStreamingManager::GetNumWantingResources(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\r':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_141514f20(param_2,*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x0e':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_141514d80(param_2,*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x0f':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_143a1e870(param_2,*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x10':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_143a1e8b0(param_2,*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x11':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_143a5c460(param_2,*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x12':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_143a5c4c0(param_2,*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
    }
  }
  else if (*(int *)((longlong)param_1 + 0xc) != 0) {
    for (uVar12 = param_2 * 8 | 2; 0x7f < uVar12; uVar12 = uVar12 >> 7) {
      *param_3 = (byte)uVar12 | 0x80;
      param_3 = param_3 + 1;
    }
    *param_3 = (byte)uVar12;
    uVar11 = (ulonglong)*(int *)((longlong)param_1 + 0xc);
    while( true ) {
      pbVar1 = param_3 + 1;
      if (uVar11 < 0x80) break;
      *pbVar1 = (byte)uVar11 | 0x80;
      uVar11 = uVar11 >> 7;
      param_3 = pbVar1;
    }
    *pbVar1 = (byte)uVar11;
    param_3 = param_3 + 2;
    switch((char)param_1[1]) {
    case '\x01':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          *(undefined8 *)param_3 = *puVar5;
          param_3 = param_3 + 8;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x02':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          *(undefined4 *)param_3 = *puVar6;
          param_3 = param_3 + 4;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x03':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_141514de0(*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x04':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_1439f8340(*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x05':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_141514d50(*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x06':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          *(undefined8 *)param_3 = *puVar5;
          param_3 = param_3 + 8;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\a':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          *(undefined4 *)param_3 = *puVar6;
          param_3 = param_3 + 4;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\b':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          pcVar7 = (char *)FUN_1439f1d20(*param_1,iVar13);
          *param_3 = *pcVar7 != '\0';
          param_3 = param_3 + 1;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\t':
    case '\n':
    case '\v':
    case '\f':
      uVar8 = FUN_1439eeb00(local_68,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\extension_set_heavy.cc",0x27c
                           );
      uVar8 = FUN_1439eef00(uVar8,"Non-primitive types can\'t be packed.");
      FUN_1439eec50(local_78,uVar8);
      DsDevice::~DsDevice(local_68);
      break;
    case '\r':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar3 = (uint *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          for (uVar12 = *puVar3; 0x7f < uVar12; uVar12 = uVar12 >> 7) {
            *param_3 = (byte)uVar12 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar12;
          param_3 = param_3 + 1;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x0e':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          param_3 = (byte *)FUN_141514d50(*puVar6,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x0f':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar6 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          *(undefined4 *)param_3 = *puVar6;
          param_3 = param_3 + 4;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x10':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          *(undefined8 *)param_3 = *puVar5;
          param_3 = param_3 + 8;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x11':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          piVar4 = (int *)mu::FPhysicsBody::GetBodyBoneId(*param_1,iVar13);
          for (uVar12 = *piVar4 >> 0x1f ^ *piVar4 * 2; 0x7f < uVar12; uVar12 = uVar12 >> 7) {
            *param_3 = (byte)uVar12 | 0x80;
            param_3 = param_3 + 1;
          }
          *param_3 = (byte)uVar12;
          param_3 = param_3 + 1;
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
      break;
    case '\x12':
      iVar13 = 0;
      iVar2 = FUN_1439f2ae0(*param_1);
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)FUN_1439f1d10(*param_1,iVar13);
          param_3 = (byte *)FUN_1439f8300(*puVar5,param_3);
          iVar13 = iVar13 + 1;
          iVar2 = FUN_1439f2ae0(*param_1);
        } while (iVar13 < iVar2);
      }
    }
  }
  return param_3;
}



// FUNCTION 143a5bc10 FUN_143a5bc10 body=359 status=ok
// SIG undefined FUN_143a5bc10(void)

undefined8 FUN_143a5bc10(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    uVar2 = *(ushort *)(param_1 + 10);
    piVar9 = *(int **)(param_1 + 0x10);
    piVar10 = piVar9 + (ulonglong)uVar2 * 8;
    uVar5 = (ulonglong)uVar2;
    if ((ulonglong)uVar2 != 0) {
      do {
        uVar6 = (longlong)uVar5 >> 1;
        if (piVar9[uVar6 * 8] < param_2) {
          piVar9 = piVar9 + uVar6 * 8 + 8;
          uVar6 = uVar5 + (-1 - uVar6);
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
    }
    for (; (piVar9 != piVar10 && (*piVar9 < param_3)); piVar9 = piVar9 + 8) {
      param_4 = FUN_143a5b060(piVar9 + 2,*piVar9,param_4);
    }
  }
  else {
    puVar3 = (undefined8 *)**(longlong **)(param_1 + 0x10);
    cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
    puVar8 = puVar3;
    puVar7 = (undefined8 *)puVar3[1];
    while (cVar1 == '\0') {
      if (*(int *)(puVar7 + 4) < param_2) {
        puVar4 = (undefined8 *)puVar7[2];
        puVar7 = puVar8;
      }
      else {
        puVar4 = (undefined8 *)*puVar7;
      }
      puVar8 = puVar7;
      puVar7 = puVar4;
      cVar1 = *(char *)((longlong)puVar4 + 0x19);
    }
    if (puVar8 != puVar3) {
      while (*(int *)(puVar8 + 4) < param_3) {
        param_4 = FUN_143a5b060(puVar8 + 5,*(int *)(puVar8 + 4),param_4);
        puVar7 = (undefined8 *)puVar8[2];
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar7 + 0x19);
          puVar8 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar7 + 0x19);
            puVar8 = puVar7;
            puVar7 = (undefined8 *)*puVar7;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar8[1] + 0x19);
          puVar4 = (undefined8 *)puVar8[1];
          puVar7 = puVar8;
          while ((puVar8 = puVar4, cVar1 == '\0' && (puVar7 == (undefined8 *)puVar8[2]))) {
            cVar1 = *(char *)((longlong)puVar8[1] + 0x19);
            puVar4 = (undefined8 *)puVar8[1];
            puVar7 = puVar8;
          }
        }
        if (puVar8 == puVar3) {
          return param_4;
        }
      }
    }
  }
  return param_4;
}



// FUNCTION 143a5bd80 FUN_143a5bd80 body=204 status=ok
// SIG undefined FUN_143a5bd80(void)

undefined8 * FUN_143a5bd80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar2 = FUN_143a54940(param_1,*(undefined4 *)(param_2 + 0x44),param_2,&local_28);
  if (cVar2 == '\0') {
    return local_28;
  }
  uVar3 = FUN_143a009a0(param_2);
  *(undefined1 *)(local_28 + 1) = uVar3;
  *(undefined1 *)((longlong)local_28 + 9) = 1;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 == (longlong *)0x0) goto LAB_143a5be34;
    *plVar4 = 0;
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,&google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::
                           RTTI_Type_Descriptor,0x18);
    }
    plVar4 = (longlong *)FUN_1439efdc0(lVar1,0x18,&LAB_143a51630);
    *plVar4 = lVar1;
  }
  plVar4[2] = 0;
  plVar4[1] = 0;
LAB_143a5be34:
  *local_28 = plVar4;
  return local_28;
}



// FUNCTION 143a5be50 FUN_143a5be50 body=231 status=ok
// SIG undefined FUN_143a5be50(void)

undefined8 FUN_143a5be50(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *local_28 [2];
  
  cVar3 = FUN_143a54940(param_1,*(undefined4 *)(param_2 + 0x44),param_2,local_28);
  if (cVar3 == '\0') {
    *(byte *)((longlong)local_28[0] + 10) = *(byte *)((longlong)local_28[0] + 10) & 0xf0;
    if ((*(byte *)((longlong)local_28[0] + 10) & 0xf0) != 0) {
      lVar1 = *param_3;
      lVar2 = *(longlong *)*local_28[0];
      uVar5 = FUN_143a4f9e0(param_2);
      uVar5 = (**(code **)(lVar1 + 8))(param_3,uVar5);
      uVar5 = (**(code **)(lVar2 + 0x18))(*local_28[0],uVar5);
      return uVar5;
    }
  }
  else {
    uVar4 = FUN_143a009a0(param_2);
    *(undefined1 *)(local_28[0] + 1) = uVar4;
    *(undefined1 *)((longlong)local_28[0] + 9) = 0;
    *(undefined1 *)((longlong)local_28[0] + 0xb) = 0;
    lVar1 = *param_3;
    uVar5 = FUN_143a4f9e0(param_2);
    plVar6 = (longlong *)(**(code **)(lVar1 + 8))(param_3,uVar5);
    *(byte *)((longlong)local_28[0] + 10) = *(byte *)((longlong)local_28[0] + 10) & 0xf;
    uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,*param_1);
    *local_28[0] = uVar5;
    *(byte *)((longlong)local_28[0] + 10) = *(byte *)((longlong)local_28[0] + 10) & 0xf0;
  }
  return *local_28[0];
}



// FUNCTION 143a5bf40 FUN_143a5bf40 body=246 status=ok
// SIG undefined FUN_143a5bf40(void)

undefined1
FUN_143a5bf40(undefined8 param_1,undefined4 param_2,longlong param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined **local_50;
  longlong *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_40 = google::protobuf::internal::UnknownFieldSetFieldSkipper::vftable;
  local_38 = param_5;
  if (*(longlong *)(param_3 + 0x40) == 0) {
    local_50 = google::protobuf::internal::GeneratedExtensionFinder::vftable;
    local_48 = param_4;
    uVar1 = FUN_143a55050();
    local_50 = google::protobuf::internal::GeneratedExtensionFinder::vftable;
    pppuVar3 = &local_50;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*param_4 + 0xb8))(param_4,&local_50);
    local_18 = *puVar2;
    local_20 = *(undefined8 *)(param_3 + 0x48);
    local_28 = *(undefined8 *)(param_3 + 0x40);
    local_30 = google::protobuf::internal::DescriptorPoolExtensionFinder::vftable;
    uVar1 = FUN_143a55050(param_1,param_2,param_3,&local_30,&local_40);
    local_30 = google::protobuf::internal::DescriptorPoolExtensionFinder::vftable;
    pppuVar3 = &local_30;
  }
  Chaos::FImplicitObject::~FImplicitObject(pppuVar3);
  return uVar1;
}



// FUNCTION 143a5c040 FUN_143a5c040 body=421 status=ok
// SIG undefined FUN_143a5c040(void)

ulonglong FUN_143a5c040(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar4 = 0;
  iVar1 = *(int *)(&DAT_145cbed10 + (ulonglong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    if (iVar1 == 9) {
      lVar5 = google::protobuf::internal::StringSpaceUsedExcludingSelf(*param_1);
      uVar4 = lVar5 + 0x20;
    }
    else if (iVar1 == 10) {
      if ((*(byte *)((longlong)param_1 + 10) & 0xf0) == 0) {
        uVar4 = (**(code **)(*(longlong *)*param_1 + 0xa0))();
        return uVar4;
      }
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x58))();
      return uVar4;
    }
  }
  else {
    switch(iVar1) {
    case 1:
    case 8:
      lVar5 = FUN_1439f2410(*param_1);
      return lVar5 + 0x10;
    case 2:
      lVar5 = FUN_1439f2430(*param_1);
      return lVar5 + 0x10;
    case 3:
      lVar5 = FUN_1439f2410(*param_1);
      return lVar5 + 0x10;
    case 4:
      lVar5 = FUN_1439f2430(*param_1);
      return lVar5 + 0x10;
    case 5:
      lVar5 = FUN_1439f2430(*param_1);
      return lVar5 + 0x10;
    case 6:
      lVar5 = FUN_1439f2410(*param_1);
      return lVar5 + 0x10;
    case 7:
      lVar5 = FUN_1439f2450(*param_1);
      return lVar5 + 0x10;
    case 9:
      lVar5 = FUN_1439f2460(*param_1);
      return lVar5 + 0x18;
    case 10:
      lVar5 = *param_1;
      piVar2 = *(int **)(lVar5 + 0x10);
      lVar8 = (longlong)*(int *)(lVar5 + 0xc) << 3;
      if (piVar2 != (int *)0x0) {
        uVar7 = uVar4;
        if (0 < *piVar2) {
          do {
            lVar3 = (**(code **)(**(longlong **)(uVar7 + 8 + (longlong)piVar2) + 0xa0))();
            uVar6 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar6;
            lVar8 = lVar8 + lVar3;
            piVar2 = *(int **)(lVar5 + 0x10);
            uVar7 = uVar7 + 8;
          } while ((int)uVar6 < *piVar2);
        }
        lVar8 = lVar8 + 8;
      }
      return lVar8 + 0x18;
    }
  }
  return uVar4;
}



// FUNCTION 143a5c210 FUN_143a5c210 body=307 status=ok
// SIG undefined FUN_143a5c210(void)

longlong FUN_143a5c210(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_res8;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    uVar7 = (ulonglong)*(ushort *)(param_1 + 10);
  }
  else {
    uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8);
  }
  local_res8 = uVar7 << 5;
  if (*(ushort *)(param_1 + 8) < 0x101) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    lVar9 = (ulonglong)*(ushort *)(param_1 + 10) * 0x20 + lVar5;
    if (lVar5 != lVar9) {
      do {
        lVar6 = FUN_143a5c040(lVar5 + 8);
        lVar5 = lVar5 + 0x20;
        local_res8 = local_res8 + lVar6;
      } while (lVar5 != lVar9);
      return local_res8;
    }
  }
  else {
    plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
    plVar8 = (longlong *)*plVar2;
    if (plVar8 != plVar2) {
      do {
        lVar5 = FUN_143a5c040(plVar8 + 5);
        local_res8 = local_res8 + lVar5;
        plVar3 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar8 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            plVar8 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (longlong *)plVar8[1];
          plVar3 = plVar8;
          while ((plVar8 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar4 = (longlong *)plVar8[1];
            plVar3 = plVar8;
          }
        }
      } while (plVar8 != plVar2);
      return local_res8;
    }
  }
  return local_res8;
}



// FUNCTION 143a5c350 FUN_143a5c350 body=163 status=ok
// SIG undefined FUN_143a5c350(void)

longlong * FUN_143a5c350(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar4 = (longlong *)FUN_143a53200(param_1,*(undefined4 *)(param_2 + 0x44));
  if (plVar4 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar6 = (longlong *)*plVar4;
  if ((*(byte *)((longlong)plVar4 + 10) & 0xf0) != 0) {
    lVar1 = *plVar6;
    lVar2 = *param_3;
    uVar5 = FUN_143a4f9e0(param_2);
    uVar5 = (**(code **)(lVar2 + 8))(param_3,uVar5);
    plVar6 = (longlong *)(**(code **)(lVar1 + 0x38))(*plVar4,uVar5);
    if ((*param_1 == 0) && (puVar3 = (undefined8 *)*plVar4, puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_143a52d70(param_1,*(undefined4 *)(param_2 + 0x44));
  return plVar6;
}



// FUNCTION 143a5c400 GetDisplayNameVisibility_Implementation body=20 status=ok
// SIG undefined GetDisplayNameVisibility_Implementation(void)

bool UKeyLabel::GetDisplayNameVisibility_Implementation(void)

{
  longlong lVar1;
  
  lVar1 = FUN_143a3fad0();
  return lVar1 != 0;
}



// FUNCTION 143a5c420 FUN_143a5c420 body=54 status=ok
// SIG undefined FUN_143a5c420(void)

byte * FUN_143a5c420(int param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  *(undefined8 *)(param_3 + 1) = param_2;
  return param_3 + 9;
}



// FUNCTION 143a5c460 FUN_143a5c460 body=94 status=ok
// SIG undefined FUN_143a5c460(void)

byte * FUN_143a5c460(int param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  for (uVar3 = param_1 * 8; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar3;
  uVar3 = param_2 >> 0x1f ^ param_2 * 2;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  return param_3 + 2;
}



// FUNCTION 143a5c4c0 FUN_143a5c4c0 body=110 status=ok
// SIG undefined FUN_143a5c4c0(void)

byte * FUN_143a5c4c0(int param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  
  for (uVar3 = param_1 * 8; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar3;
  uVar2 = param_2 >> 0x3f ^ param_2 * 2;
  while( true ) {
    param_3 = param_3 + 1;
    bVar1 = (byte)uVar2;
    if (uVar2 < 0x80) break;
    uVar2 = uVar2 >> 7;
    *param_3 = bVar1 | 0x80;
  }
  *param_3 = bVar1;
  return param_3 + 1;
}



// FUNCTION 143a5c530 FUN_143a5c530 body=94 status=ok
// SIG undefined FUN_143a5c530(void)

byte * FUN_143a5c530(int param_1,ulonglong param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  
  for (uVar1 = param_1 * 8; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  while( true ) {
    param_3 = param_3 + 1;
    bVar2 = (byte)param_2;
    if (param_2 < 0x80) break;
    param_2 = param_2 >> 7;
    *param_3 = bVar2 | 0x80;
  }
  *param_3 = bVar2;
  return param_3 + 1;
}



// FUNCTION 143a5c590 FUN_143a5c590 body=175 status=ok
// SIG undefined FUN_143a5c590(void)

undefined8 * FUN_143a5c590(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (&DAT_00000200 < param_2) {
    puVar2 = (undefined8 *)0x7fffffffffffffff;
    if ((longlong)param_2 < 0x7fffffffffffffff) {
      puVar2 = param_2;
    }
    if (puVar2 < (undefined8 *)0x2000000000000000) {
      for (; 0 < (longlong)puVar2; puVar2 = (undefined8 *)((longlong)puVar2 / 2)) {
        puVar1 = (undefined8 *)operator_new((longlong)puVar2 * 8,&DAT_146bcbba8);
        param_2 = puVar2;
        if (puVar1 != (undefined8 *)0x0) goto LAB_143a5c610;
      }
    }
    puVar1 = (undefined8 *)0x0;
    param_2 = puVar1;
LAB_143a5c610:
    if (param_2 < (undefined8 *)0x201) {
      FMemory::operator_delete(puVar1);
      puVar1 = param_1 + 2;
      param_2 = (undefined8 *)&DAT_00000200;
    }
  }
  else {
    puVar1 = param_1 + 2;
  }
  *param_1 = puVar1;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 143a5c640 FUN_143a5c640 body=225 status=ok
// SIG undefined FUN_143a5c640(void)

void FUN_143a5c640(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a5ceb0(param_9,param_2,param_10,param_4 - param_11,param_12,param_6,param_7);
  FUN_143a5c730(param_1,param_9,uVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_143a5c730(uVar1,param_10,param_3,param_4 - param_11);
  return;
}



// FUNCTION 143a5c730 FUN_143a5c730 body=315 status=ok
// SIG undefined FUN_143a5c730(void)

void FUN_143a5c730(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while (cVar2 = FUN_143a5fb10(&param_8,*param_2,*param_1), cVar2 == '\0') {
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    do {
      puVar4 = param_3;
      lVar3 = param_5;
      param_3 = puVar4 + -1;
      if (param_2 == param_3) {
        uVar1 = *param_2;
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_3 + (8 - ((longlong)param_2 - (longlong)param_1))),
                   param_1,(longlong)param_2 - (longlong)param_1);
        *param_1 = uVar1;
        return;
      }
      cVar2 = FUN_143a5fb10(&param_8,*param_3,param_2[-1]);
      param_5 = lVar3 + -1;
    } while (cVar2 == '\0');
    if (param_4 == 1) {
      uVar1 = *param_1;
      _guard_xfg_dispatch_icall_nop(param_1,param_2,(longlong)puVar4 - (longlong)param_2);
      *(undefined8 *)(((longlong)puVar4 - (longlong)param_2) + (longlong)param_1) = uVar1;
    }
    else {
      FUN_143a5c870(param_1,param_2,puVar4,param_4,lVar3,param_6,param_7,param_8);
    }
  }
  return;
}



// FUNCTION 143a5c870 FUN_143a5c870 body=677 status=ok
// SIG undefined FUN_143a5c870(void)

void FUN_143a5c870(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  size_t _Size;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = param_8;
  puVar5 = param_6;
  lVar2 = param_5;
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      if (param_5 < param_4) {
        lVar6 = param_5 >> 1;
        puVar4 = param_2 + lVar6;
        puVar5 = (undefined8 *)FUN_143a5f2d0(param_1,param_2,puVar4,param_8);
        lVar8 = (longlong)puVar5 - (longlong)param_1 >> 3;
      }
      else {
        lVar8 = param_4 >> 1;
        puVar5 = param_1 + lVar8;
        puVar4 = (undefined8 *)FUN_143a5ef00(param_2,param_3,puVar5);
        lVar6 = (longlong)puVar4 - (longlong)param_2 >> 3;
      }
      FUN_143a5c640(param_1,param_2,param_3,param_4,lVar2,param_6,param_7,uVar1,puVar5,puVar4,lVar8,
                    lVar6);
    }
    else {
      param_5 = param_8;
      _guard_xfg_dispatch_icall_nop(param_6,param_2,(longlong)param_3 - (longlong)param_2);
      puVar9 = param_2 + -1;
      puVar4 = param_3 + -1;
      puVar7 = (undefined8 *)((longlong)puVar5 + (((longlong)param_3 - (longlong)param_2) - 8U));
      *puVar4 = param_2[-1];
      do {
        puVar9 = puVar9 + -1;
        while( true ) {
          puVar10 = puVar4;
          puVar4 = puVar10 + -1;
          cVar3 = FUN_143a5fb10(&param_5,*puVar7,*puVar9);
          if (cVar3 != '\0') break;
          uVar1 = *puVar7;
          puVar7 = puVar7 + -1;
          *puVar4 = uVar1;
          if (puVar5 == puVar7) {
            puVar10[-2] = *puVar9;
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(puVar10 + -2) - ((longlong)puVar9 - (longlong)param_1)),
                       param_1,(longlong)puVar9 - (longlong)param_1);
            *param_1 = *puVar5;
            return;
          }
        }
        *puVar4 = *puVar9;
      } while (param_1 != puVar9);
      puVar10[-2] = *puVar7;
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(puVar10 + -2) - ((longlong)puVar7 - (longlong)puVar5)),puVar5,
                 (longlong)puVar7 - (longlong)puVar5);
    }
  }
  else {
    _Size = (longlong)param_2 - (longlong)param_1;
    param_5 = param_8;
    _guard_xfg_dispatch_icall_nop(param_6,param_1,_Size);
    puVar9 = (undefined8 *)((longlong)puVar5 + (_Size - 8));
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar5;
    do {
      while( true ) {
        puVar7 = param_1;
        param_1 = puVar7 + 1;
        cVar3 = FUN_143a5fb10(&param_5,*param_2,*puVar4);
        if (cVar3 == '\0') break;
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        if (param_2 == param_3) {
          _guard_xfg_dispatch_icall_nop
                    (puVar7 + 2,puVar4,(longlong)puVar5 + (_Size - (longlong)puVar4));
          return;
        }
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *param_1 = uVar1;
    } while (puVar4 != puVar9);
    _guard_xfg_dispatch_icall_nop(puVar7 + 2,param_2,(longlong)param_3 - (longlong)param_2);
    *(undefined8 *)(((longlong)param_3 - (longlong)param_2) + 8U + (longlong)param_1) = *puVar9;
  }
  return;
}



// FUNCTION 143a5cb20 FUN_143a5cb20 body=906 status=ok
// SIG undefined FUN_143a5cb20(void)

void FUN_143a5cb20(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong local_68;
  longlong local_60;
  longlong local_58 [3];
  
  puVar6 = param_1;
  if (0x20 < param_3) {
    lVar9 = (param_3 - 0x21U >> 5) + 1;
    do {
      puVar6 = (undefined8 *)FUN_143a5da20(puVar6,puVar6 + 0x20,param_5);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_143a5da20(puVar6,param_2,param_5);
  local_68 = 0x20;
  puVar6 = param_1;
  lVar9 = param_3;
  puVar13 = param_4;
  if (param_3 < 0x21) {
    return;
  }
  do {
    lVar10 = lVar9 + -0x20;
    local_60 = param_5;
    puVar2 = puVar6 + 0x20;
    lVar11 = 0x20;
    if (lVar10 < 0x20) {
      lVar11 = lVar10;
    }
    puVar3 = puVar6 + lVar11 + 0x20;
    puVar8 = puVar2;
    do {
      while( true ) {
        puVar1 = puVar13 + 1;
        cVar5 = FUN_143a5fb10(&local_60,*puVar8,*puVar6);
        if (cVar5 == '\0') break;
        uVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar13 = uVar4;
        puVar13 = puVar1;
        if (puVar8 == puVar3) {
          sVar7 = (longlong)puVar2 - (longlong)puVar6;
          _guard_xfg_dispatch_icall_nop(puVar1,puVar6,sVar7);
          goto LAB_143a5cc4a;
        }
      }
      uVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar13 = uVar4;
      puVar13 = puVar1;
    } while (puVar6 != puVar2);
    sVar7 = (longlong)puVar3 - (longlong)puVar8;
    _guard_xfg_dispatch_icall_nop(puVar1,puVar8,sVar7);
LAB_143a5cc4a:
    puVar6 = puVar3;
    lVar9 = lVar10 - lVar11;
    puVar13 = (undefined8 *)((longlong)puVar1 + sVar7);
    if (lVar10 - lVar11 < 0x21) {
      _guard_xfg_dispatch_icall_nop
                ((undefined8 *)((longlong)puVar1 + sVar7),puVar3,param_2 - (longlong)puVar3);
      local_60 = param_3 * 8;
      do {
        lVar9 = local_68 * 2;
        puVar6 = param_4;
        lVar11 = param_3;
        puVar13 = param_1;
        while (lVar9 < lVar11) {
          lVar11 = lVar11 + local_68 * -2;
          local_58[0] = param_5;
          puVar2 = puVar6 + local_68 * 2;
          lVar10 = lVar9;
          if (lVar11 < lVar9) {
            lVar10 = lVar11;
          }
          lVar11 = lVar11 - lVar10;
          puVar3 = puVar6 + lVar10 + lVar9;
          puVar8 = puVar2;
          do {
            while( true ) {
              puVar1 = puVar13 + 1;
              cVar5 = FUN_143a5fb10(local_58,*puVar8,*puVar6);
              if (cVar5 == '\0') break;
              uVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              *puVar13 = uVar4;
              puVar13 = puVar1;
              if (puVar8 == puVar3) {
                sVar7 = (longlong)puVar2 - (longlong)puVar6;
                _guard_xfg_dispatch_icall_nop(puVar1,puVar6,sVar7);
                goto LAB_143a5cd5a;
              }
            }
            uVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar13 = uVar4;
            puVar13 = puVar1;
          } while (puVar6 != puVar2);
          sVar7 = (longlong)puVar3 - (longlong)puVar8;
          _guard_xfg_dispatch_icall_nop(puVar1,puVar8,sVar7);
LAB_143a5cd5a:
          puVar13 = (undefined8 *)(sVar7 + (longlong)puVar1);
          puVar6 = puVar3;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar13,puVar6,(local_60 - (longlong)puVar6) + (longlong)param_4);
        lVar9 = local_68 * 4;
        puVar6 = param_1;
        lVar11 = param_3;
        puVar13 = param_4;
        if (param_3 <= lVar9) {
          return;
        }
        do {
          lVar12 = lVar11 + local_68 * -4;
          local_58[0] = param_5;
          puVar2 = puVar6 + local_68 * 4;
          lVar10 = lVar9;
          if (lVar12 < lVar9) {
            lVar10 = lVar12;
          }
          puVar3 = puVar6 + lVar10 + lVar9;
          puVar8 = puVar2;
          do {
            while( true ) {
              puVar1 = puVar13 + 1;
              cVar5 = FUN_143a5fb10(local_58,*puVar8,*puVar6);
              if (cVar5 == '\0') break;
              uVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              *puVar13 = uVar4;
              puVar13 = puVar1;
              if (puVar8 == puVar3) {
                sVar7 = (longlong)puVar2 - (longlong)puVar6;
                _guard_xfg_dispatch_icall_nop(puVar1,puVar6,sVar7);
                goto LAB_143a5ce5a;
              }
            }
            uVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar13 = uVar4;
            puVar13 = puVar1;
          } while (puVar6 != puVar2);
          sVar7 = (longlong)puVar3 - (longlong)puVar8;
          _guard_xfg_dispatch_icall_nop(puVar1,puVar8,sVar7);
LAB_143a5ce5a:
          puVar6 = puVar3;
          lVar11 = lVar12 - lVar10;
          puVar13 = (undefined8 *)(sVar7 + (longlong)puVar1);
        } while (lVar9 < lVar12 - lVar10);
        _guard_xfg_dispatch_icall_nop
                  ((undefined8 *)(sVar7 + (longlong)puVar1),puVar3,param_2 - (longlong)puVar3);
        local_68 = lVar9;
      } while( true );
    }
  } while( true );
}



// FUNCTION 143a5ceb0 FUN_143a5ceb0 body=304 status=ok
// SIG undefined FUN_143a5ceb0(void)

void * FUN_143a5ceb0(void *param_1,void *param_2,void *param_3,longlong param_4,longlong param_5,
                    void *param_6,longlong param_7)

{
  void *_Dst;
  size_t _Size;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 != 0) {
    if ((param_5 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_5) {
        _Dst = param_3;
        if ((param_1 != param_2) && (_Dst = param_1, param_2 != param_3)) {
          __std_reverse_trivially_swappable_8(param_1);
          __std_reverse_trivially_swappable_8(param_2,param_3);
          __std_reverse_trivially_swappable_8(param_1,param_3);
          _Dst = (void *)((longlong)param_1 + ((longlong)param_3 - (longlong)param_2 >> 3) * 8);
        }
      }
      else {
        _Size = (longlong)param_3 - (longlong)param_2;
        _guard_xfg_dispatch_icall_nop(param_6,param_2,_Size);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
        _guard_xfg_dispatch_icall_nop(param_1,param_6,_Size);
        _Dst = (void *)(_Size + (longlong)param_1);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(param_6,param_1,(longlong)param_2 - (longlong)param_1);
      _guard_xfg_dispatch_icall_nop(param_1,param_2,(longlong)param_3 - (longlong)param_2);
      _Dst = (void *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
      _guard_xfg_dispatch_icall_nop(_Dst,param_6,(longlong)param_2 - (longlong)param_1);
    }
    return _Dst;
  }
  return param_1;
}



// FUNCTION 143a5cfe0 FUN_143a5cfe0 body=73 status=ok
// SIG undefined FUN_143a5cfe0(void)

void FUN_143a5cfe0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = std::
          _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
          ::_Buynode0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



// FUNCTION 143a5d030 FUN_143a5d030 body=576 status=ok
// SIG undefined FUN_143a5d030(void)

longlong FUN_143a5d030(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar9 = *param_1;
  lVar10 = (longlong)((longlong)param_2 - uVar9) >> 3;
  lVar2 = (longlong)(param_1[1] - uVar9) >> 3;
  if (lVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar1 = lVar2 + 1;
  uVar4 = (longlong)(param_1[2] - uVar9) >> 3;
  uVar9 = uVar1;
  if ((uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) && (uVar9 = (uVar4 >> 1) + uVar4, uVar9 < uVar1))
  {
    uVar9 = uVar1;
  }
  uVar4 = uVar9 * 8;
  if ((uVar9 < 0x2000000000000000) && (uVar4 < 0x1000)) {
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = operator_new();
    }
  }
  else {
    lVar2 = operator_new();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar9 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar9 - 8) = lVar2;
  }
  uVar5 = 0;
  *(undefined8 *)(uVar9 + lVar10 * 8) = *param_3;
  puVar3 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
  if (param_2 == puVar3) {
    uVar6 = (ulonglong)((longlong)puVar3 + (7 - (longlong)puVar7)) >> 3;
    if (puVar3 < puVar7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      lVar2 = uVar9 - (longlong)puVar7;
      do {
        *(undefined8 *)((longlong)puVar7 + lVar2) = *puVar7;
        puVar7 = puVar7 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  else {
    uVar6 = (ulonglong)((longlong)param_2 + (7 - (longlong)puVar7)) >> 3;
    if (param_2 < puVar7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      lVar2 = uVar9 - (longlong)puVar7;
      uVar8 = uVar5;
      do {
        *(undefined8 *)((longlong)puVar7 + lVar2) = *puVar7;
        puVar7 = puVar7 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
      puVar3 = (undefined8 *)param_1[1];
    }
    uVar6 = (ulonglong)((longlong)puVar3 + (7 - (longlong)param_2)) >> 3;
    if (puVar3 < param_2) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      lVar2 = (uVar9 + (lVar10 + 1) * 8) - (longlong)param_2;
      do {
        *(undefined8 *)((longlong)param_2 + lVar2) = *param_2;
        param_2 = param_2 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar8 = param_1[2] - uVar5 & 0xfffffffffffffff8;
    uVar6 = uVar5;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      uVar6 = *(ulonglong *)(uVar5 - 8);
      if (0x1f < (uVar5 - uVar6) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar6,uVar8);
  }
  *param_1 = uVar9;
  param_1[1] = uVar9 + uVar1 * 8;
  param_1[2] = uVar9 + uVar4;
  return *param_1 + lVar10 * 8;
}


