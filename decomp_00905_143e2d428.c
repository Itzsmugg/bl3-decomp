// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e2d428 Unwind@143e2d428 body=12 status=ok
// SIG undefined Unwind@143e2d428(void)

void Unwind_143e2d428(undefined8 param_1,longlong param_2)

{
  Imf::FrameBuffer::~FrameBuffer(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 143e2d440 Unwind@143e2d440 body=12 status=ok
// SIG undefined Unwind@143e2d440(void)

void Unwind_143e2d440(undefined8 param_1,longlong param_2)

{
  FUN_143938770(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2d44c Unwind@143e2d44c body=16 status=ok
// SIG undefined Unwind@143e2d44c(void)

void Unwind_143e2d44c(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(*(longlong *)(param_2 + 0x40) + 8);
  return;
}



// FUNCTION 143e2d45c Unwind@143e2d45c body=16 status=ok
// SIG undefined Unwind@143e2d45c(void)

void Unwind_143e2d45c(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}



// FUNCTION 143e2d470 Unwind@143e2d470 body=12 status=ok
// SIG undefined Unwind@143e2d470(void)

void Unwind_143e2d470(undefined8 param_1,longlong param_2)

{
  FUN_143938770(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2d480 Unwind@143e2d480 body=46 status=ok
// SIG undefined Unwind@143e2d480(void)

void Unwind_143e2d480(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xd8));
  }
  return;
}



// FUNCTION 143e2d4ae Unwind@143e2d4ae body=18 status=ok
// SIG undefined Unwind@143e2d4ae(void)

void Unwind_143e2d4ae(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2d4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_2 + 0x60));
  return;
}



// FUNCTION 143e2d4c0 Unwind@143e2d4c0 body=14 status=ok
// SIG undefined Unwind@143e2d4c0(void)

void Unwind_143e2d4c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2d4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x1a0));
  return;
}



// FUNCTION 143e2d4ce Unwind@143e2d4ce body=12 status=ok
// SIG undefined Unwind@143e2d4ce(void)

void Unwind_143e2d4ce(undefined8 param_1,longlong param_2)

{
  FUN_1439259d0(param_2 + 0x40);
  return;
}



// FUNCTION 143e2d4e0 Unwind@143e2d4e0 body=12 status=ok
// SIG undefined Unwind@143e2d4e0(void)

void Unwind_143e2d4e0(undefined8 param_1,longlong param_2)

{
  Scaleform::Render::FilterState::GetFilter(param_2 + 0x28);
  return;
}



// FUNCTION 143e2d4f0 Catch_All@143e2d4f0 body=62 status=ok
// SIG undefined Catch_All@143e2d4f0(void)

void Catch_All_143e2d4f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  for (lVar2 = *(longlong *)(param_2 + 0x50); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_1439294c0();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d530 catch$49 body=39 status=ok
// SIG undefined catch$49(void)

void `std::
     vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
     ::_Reallocate'::`1'::catch_49(undefined8 param_1,longlong param_2)

{
  std::allocator<CefRect>::deallocate
            (*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x70),
             *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d560 Unwind@143e2d560 body=28 status=ok
// SIG undefined Unwind@143e2d560(void)

void Unwind_143e2d560(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e2d57c Unwind@143e2d57c body=28 status=ok
// SIG undefined Unwind@143e2d57c(void)

void Unwind_143e2d57c(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e2d5a0 Unwind@143e2d5a0 body=12 status=ok
// SIG undefined Unwind@143e2d5a0(void)

void Unwind_143e2d5a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x30);
  return;
}



// FUNCTION 143e2d5b0 Catch_All@143e2d5b0 body=22 status=ok
// SIG undefined Catch_All@143e2d5b0(void)

void Catch_All_143e2d5b0(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d5d0 Unwind@143e2d5d0 body=12 status=ok
// SIG undefined Unwind@143e2d5d0(void)

void Unwind_143e2d5d0(undefined8 param_1,longlong param_2)

{
  FUN_14394c300(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 143e2d5dc Unwind@143e2d5dc body=16 status=ok
// SIG undefined Unwind@143e2d5dc(void)

void Unwind_143e2d5dc(undefined8 param_1,longlong param_2)

{
  FUN_143929ce0(*(longlong *)(param_2 + 0x80) + 0x30);
  return;
}



// FUNCTION 143e2d5ec Unwind@143e2d5ec body=16 status=ok
// SIG undefined Unwind@143e2d5ec(void)

void Unwind_143e2d5ec(undefined8 param_1,longlong param_2)

{
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::
  ~_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
            (*(longlong *)(param_2 + 0x80) + 0x48);
  return;
}



// FUNCTION 143e2d5fc Unwind@143e2d5fc body=16 status=ok
// SIG undefined Unwind@143e2d5fc(void)

void Unwind_143e2d5fc(undefined8 param_1,longlong param_2)

{
  FUN_143931630(*(longlong *)(param_2 + 0x80) + 0x70);
  return;
}



// FUNCTION 143e2d60c Unwind@143e2d60c body=19 status=ok
// SIG undefined Unwind@143e2d60c(void)

void Unwind_143e2d60c(undefined8 param_1,longlong param_2)

{
  FUN_143931630(*(longlong *)(param_2 + 0x80) + 0x90);
  return;
}



// FUNCTION 143e2d61f Unwind@143e2d61f body=19 status=ok
// SIG undefined Unwind@143e2d61f(void)

void Unwind_143e2d61f(undefined8 param_1,longlong param_2)

{
  FUN_143931630(*(longlong *)(param_2 + 0x80) + 0xa8);
  return;
}



// FUNCTION 143e2d632 Unwind@143e2d632 body=19 status=ok
// SIG undefined Unwind@143e2d632(void)

void Unwind_143e2d632(undefined8 param_1,longlong param_2)

{
  FUN_14393ead0(*(longlong *)(param_2 + 0x80) + 0xc0);
  return;
}



// FUNCTION 143e2d645 Unwind@143e2d645 body=19 status=ok
// SIG undefined Unwind@143e2d645(void)

void Unwind_143e2d645(undefined8 param_1,longlong param_2)

{
  FUN_143931630(*(longlong *)(param_2 + 0x80) + 0xe0);
  return;
}



// FUNCTION 143e2d660 Unwind@143e2d660 body=12 status=ok
// SIG undefined Unwind@143e2d660(void)

void Unwind_143e2d660(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 143e2d66c Unwind@143e2d66c body=12 status=ok
// SIG undefined Unwind@143e2d66c(void)

void Unwind_143e2d66c(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 143e2d678 Unwind@143e2d678 body=16 status=ok
// SIG undefined Unwind@143e2d678(void)

void Unwind_143e2d678(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (*(longlong *)(param_2 + 0x28) + 0x38);
  return;
}



// FUNCTION 143e2d688 Catch_All@143e2d688 body=45 status=ok
// SIG undefined Catch_All@143e2d688(void)

void Catch_All_143e2d688(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d6c0 Catch_All@143e2d6c0 body=103 status=ok
// SIG undefined Catch_All@143e2d6c0(void)

void Catch_All_143e2d6c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::allocator<SDoorInfo>::deallocate(plVar1,lVar2,(plVar1[2] - lVar2) / 0x38);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d730 catch$49 body=39 status=ok
// SIG undefined catch$49(void)

void `std::
     vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
     ::_Reallocate'::`1'::catch_49(undefined8 param_1,longlong param_2)

{
  std::allocator<SDoorInfo>::deallocate
            (*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x70),
             *(undefined8 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d760 Catch@143e2d760 body=104 status=ok
// SIG undefined Catch@143e2d760(void)

undefined8 Catch_143e2d760(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x90);
  if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x30) == '\0') {
    pcVar2 = (char *)(**(code **)(**(longlong **)(param_2 + 0x58) + 8))();
    if (*pcVar2 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (pcVar2[lVar3] != '\0');
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (*(longlong *)(lVar1 + 0x18) + 0x38,pcVar2,lVar3);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x30) = 1;
  }
  return 0x14393f7e0;
}



// FUNCTION 143e2d7c9 Catch_All@143e2d7c9 body=75 status=ok
// SIG undefined Catch_All@143e2d7c9(void)

undefined8 Catch_All_143e2d7c9(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x90);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x30) == '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (lVar2 + 0x38,"unrecognized exception",0x16);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x30) = 1;
  }
  return 0x14393f7e0;
}



// FUNCTION 143e2d820 Catch@143e2d820 body=99 status=ok
// SIG undefined Catch@143e2d820(void)

void Catch_143e2d820(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  if (*(char *)(lVar1 + 0x30) == '\0') {
    pcVar2 = (char *)(**(code **)(**(longlong **)(param_2 + 0x28) + 8))();
    if (*pcVar2 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (pcVar2[lVar3] != '\0');
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (lVar1 + 0x38,pcVar2,lVar3);
    *(undefined1 *)(lVar1 + 0x30) = 1;
  }
  *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
  FUN_14394c610();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d884 Catch_All@143e2d884 body=69 status=ok
// SIG undefined Catch_All@143e2d884(void)

void Catch_All_143e2d884(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (lVar1 + 0x38,"unrecognized exception",0x16);
  *(undefined1 *)(lVar1 + 0x30) = 1;
  *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
  FUN_14394c610();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d8e0 Unwind@143e2d8e0 body=12 status=ok
// SIG undefined Unwind@143e2d8e0(void)

void Unwind_143e2d8e0(undefined8 param_1,longlong param_2)

{
  FUN_143925920(param_2 + 0x48);
  return;
}



// FUNCTION 143e2d8ec Unwind@143e2d8ec body=12 status=ok
// SIG undefined Unwind@143e2d8ec(void)

void Unwind_143e2d8ec(undefined8 param_1,longlong param_2)

{
  FUN_14394b9b0(param_2 + 0x30);
  return;
}



// FUNCTION 143e2d8f8 Catch@143e2d8f8 body=162 status=ok
// SIG undefined Catch@143e2d8f8(void)

void Catch_143e2d8f8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1439299f0(param_2 + 0x70,3,1);
  lVar1 = *(longlong *)(param_2 + 0x58);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + 0x18;
  }
  uVar2 = FUN_143927860(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 8) + 0xd8));
  uVar3 = std::operator<<<std::char_traits<char>_>
                    (param_2 + 0x80,"Error reading pixel data from image file \"");
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar3,uVar2);
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145c64628);
  FUN_143930d70(uVar2,lVar4);
  FUN_143e17ce0(lVar1);
  FUN_1439259d0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2d9b0 Catch_All@143e2d9b0 body=26 status=ok
// SIG undefined Catch_All@143e2d9b0(void)

undefined * Catch_All_143e2d9b0(void)

{
  return &DAT_14394006d;
}



// FUNCTION 143e2d9d0 Unwind@143e2d9d0 body=12 status=ok
// SIG undefined Unwind@143e2d9d0(void)

void Unwind_143e2d9d0(undefined8 param_1,longlong param_2)

{
  FUN_143925920(param_2 + 0x70);
  return;
}



// FUNCTION 143e2d9dc Unwind@143e2d9dc body=49 status=ok
// SIG undefined Unwind@143e2d9dc(void)

void Unwind_143e2d9dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x128));
  }
  return;
}



// FUNCTION 143e2da0d Unwind@143e2da0d body=18 status=ok
// SIG undefined Unwind@143e2da0d(void)

void Unwind_143e2da0d(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2da18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_2 + 0xb0));
  return;
}



// FUNCTION 143e2da1f Unwind@143e2da1f body=14 status=ok
// SIG undefined Unwind@143e2da1f(void)

void Unwind_143e2da1f(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2da26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x1f0));
  return;
}



// FUNCTION 143e2da2d Unwind@143e2da2d body=12 status=ok
// SIG undefined Unwind@143e2da2d(void)

void Unwind_143e2da2d(undefined8 param_1,longlong param_2)

{
  FUN_1439259d0(param_2 + 0x90);
  return;
}



// FUNCTION 143e2da39 Unwind@143e2da39 body=12 status=ok
// SIG undefined Unwind@143e2da39(void)

void Unwind_143e2da39(undefined8 param_1,longlong param_2)

{
  FUN_14393ead0(param_2 + 0x38);
  return;
}



// FUNCTION 143e2da50 Unwind@143e2da50 body=12 status=ok
// SIG undefined Unwind@143e2da50(void)

void Unwind_143e2da50(undefined8 param_1,longlong param_2)

{
  FUN_14394c300(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 143e2da5c Unwind@143e2da5c body=16 status=ok
// SIG undefined Unwind@143e2da5c(void)

void Unwind_143e2da5c(undefined8 param_1,longlong param_2)

{
  FUN_143929ce0(*(longlong *)(param_2 + 0x80) + 0x30);
  return;
}



// FUNCTION 143e2da6c Unwind@143e2da6c body=16 status=ok
// SIG undefined Unwind@143e2da6c(void)

void Unwind_143e2da6c(undefined8 param_1,longlong param_2)

{
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::
  ~_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
            (*(longlong *)(param_2 + 0x80) + 0x58);
  return;
}



// FUNCTION 143e2da7c Unwind@143e2da7c body=19 status=ok
// SIG undefined Unwind@143e2da7c(void)

void Unwind_143e2da7c(undefined8 param_1,longlong param_2)

{
  FUN_1439413e0(*(longlong *)(param_2 + 0x80) + 0x98);
  return;
}



// FUNCTION 143e2da8f Unwind@143e2da8f body=19 status=ok
// SIG undefined Unwind@143e2da8f(void)

void Unwind_143e2da8f(undefined8 param_1,longlong param_2)

{
  FUN_14393ead0(*(longlong *)(param_2 + 0x80) + 0xd0);
  return;
}



// FUNCTION 143e2daa2 Unwind@143e2daa2 body=19 status=ok
// SIG undefined Unwind@143e2daa2(void)

void Unwind_143e2daa2(undefined8 param_1,longlong param_2)

{
  FUN_143931630(*(longlong *)(param_2 + 0x80) + 0x108);
  return;
}



// FUNCTION 143e2dac0 Catch@143e2dac0 body=162 status=ok
// SIG undefined Catch@143e2dac0(void)

void Catch_143e2dac0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1439299f0(param_2 + 0x50,3,1);
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + 0x18;
  }
  uVar2 = FUN_143927860(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x160) + 8) + 0xe8));
  uVar3 = std::operator<<<std::char_traits<char>_>
                    (param_2 + 0x60,"Error calling dataWindowForLevel() on image file \"");
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar3,uVar2);
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145c64628);
  FUN_143930d70(uVar2,lVar4);
  FUN_143e17ce0(lVar1);
  FUN_1439259d0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2db70 Catch@143e2db70 body=162 status=ok
// SIG undefined Catch@143e2db70(void)

void Catch_143e2db70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1439299f0(param_2 + 0x70,3,1);
  lVar1 = *(longlong *)(param_2 + 0x58);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + 0x18;
  }
  uVar2 = FUN_143927860(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 8) + 0xe8));
  uVar3 = std::operator<<<std::char_traits<char>_>
                    (param_2 + 0x80,"Error calling dataWindowForTile() on image file \"");
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar3,uVar2);
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145c64628);
  FUN_143930d70(uVar2,lVar4);
  FUN_143e17ce0(lVar1);
  FUN_1439259d0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2dc20 Catch@143e2dc20 body=104 status=ok
// SIG undefined Catch@143e2dc20(void)

undefined8 Catch_143e2dc20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xa0);
  if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x34) == '\0') {
    pcVar2 = (char *)(**(code **)(**(longlong **)(param_2 + 0x58) + 8))();
    if (*pcVar2 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (pcVar2[lVar3] != '\0');
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (*(longlong *)(lVar1 + 0x18) + 0x38,pcVar2,lVar3);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x34) = 1;
  }
  return 0x1439419be;
}



// FUNCTION 143e2dc89 Catch_All@143e2dc89 body=75 status=ok
// SIG undefined Catch_All@143e2dc89(void)

undefined8 Catch_All_143e2dc89(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xa0);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (*(char *)(lVar2 + 0x34) == '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (lVar2 + 0x38,"unrecognized exception",0x16);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x34) = 1;
  }
  return 0x1439419be;
}



// FUNCTION 143e2dce0 Unwind@143e2dce0 body=12 status=ok
// SIG undefined Unwind@143e2dce0(void)

void Unwind_143e2dce0(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 143e2dcec Unwind@143e2dcec body=16 status=ok
// SIG undefined Unwind@143e2dcec(void)

void Unwind_143e2dcec(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (*(longlong *)(param_2 + 0x80) + 0x38);
  return;
}



// FUNCTION 143e2dd00 Catch@143e2dd00 body=162 status=ok
// SIG undefined Catch@143e2dd00(void)

void Catch_143e2dd00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1439299f0(param_2 + 0x30,3,1);
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + 0x18;
  }
  uVar2 = FUN_143927860(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x140) + 8) + 0xe8));
  uVar3 = std::operator<<<std::char_traits<char>_>
                    (param_2 + 0x40,"Error calling levelWidth() on image file \"");
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar3,uVar2);
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145c64628);
  FUN_143930d70(uVar2,lVar4);
  FUN_143e17ce0(lVar1);
  FUN_1439259d0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ddb0 Catch_All@143e2ddb0 body=35 status=ok
// SIG undefined Catch_All@143e2ddb0(void)

void Catch_All_143e2ddb0(void)

{
  FUN_14394c610();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2dde0 Unwind@143e2dde0 body=46 status=ok
// SIG undefined Unwind@143e2dde0(void)

void Unwind_143e2dde0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xe8));
  }
  return;
}



// FUNCTION 143e2de0e Unwind@143e2de0e body=18 status=ok
// SIG undefined Unwind@143e2de0e(void)

void Unwind_143e2de0e(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2de19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_2 + 0x70));
  return;
}



// FUNCTION 143e2de20 Unwind@143e2de20 body=14 status=ok
// SIG undefined Unwind@143e2de20(void)

void Unwind_143e2de20(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2de27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x1b0));
  return;
}



// FUNCTION 143e2de2e Unwind@143e2de2e body=12 status=ok
// SIG undefined Unwind@143e2de2e(void)

void Unwind_143e2de2e(undefined8 param_1,longlong param_2)

{
  FUN_1439259d0(param_2 + 0x50);
  return;
}



// FUNCTION 143e2de40 Unwind@143e2de40 body=12 status=ok
// SIG undefined Unwind@143e2de40(void)

void Unwind_143e2de40(undefined8 param_1,longlong param_2)

{
  FUN_143925920(param_2 + 0x68);
  return;
}



// FUNCTION 143e2de4c Unwind@143e2de4c body=12 status=ok
// SIG undefined Unwind@143e2de4c(void)

void Unwind_143e2de4c(undefined8 param_1,longlong param_2)

{
  FUN_14394b9b0(param_2 + 0x50);
  return;
}



// FUNCTION 143e2de58 Unwind@143e2de58 body=49 status=ok
// SIG undefined Unwind@143e2de58(void)

void Unwind_143e2de58(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x128));
  }
  return;
}



// FUNCTION 143e2de89 Unwind@143e2de89 body=18 status=ok
// SIG undefined Unwind@143e2de89(void)

void Unwind_143e2de89(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2de94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_2 + 0xb0));
  return;
}



// FUNCTION 143e2de9b Unwind@143e2de9b body=14 status=ok
// SIG undefined Unwind@143e2de9b(void)

void Unwind_143e2de9b(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2dea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x3b0));
  return;
}



// FUNCTION 143e2dea9 Unwind@143e2dea9 body=12 status=ok
// SIG undefined Unwind@143e2dea9(void)

void Unwind_143e2dea9(undefined8 param_1,longlong param_2)

{
  FUN_1439259d0(param_2 + 0x90);
  return;
}



// FUNCTION 143e2deb5 Catch@143e2deb5 body=174 status=ok
// SIG undefined Catch@143e2deb5(void)

void Catch_143e2deb5(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1439299f0(param_2 + 400,3,1);
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1 + 0x18;
  }
  uVar2 = FUN_143927860(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 0xe8));
  uVar3 = std::operator<<<std::char_traits<char>_>
                    (param_2 + 0x1a0,"Error reading pixel data from image file \"");
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar3,uVar2);
  uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145c64628);
  FUN_143930d70(uVar2,lVar4);
  FUN_143e17ce0(lVar1);
  FUN_1439259d0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2df70 Unwind@143e2df70 body=12 status=ok
// SIG undefined Unwind@143e2df70(void)

void Unwind_143e2df70(undefined8 param_1,longlong param_2)

{
  FUN_143925920(param_2 + 0x70);
  return;
}



// FUNCTION 143e2df7c Unwind@143e2df7c body=49 status=ok
// SIG undefined Unwind@143e2df7c(void)

void Unwind_143e2df7c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x128));
  }
  return;
}



// FUNCTION 143e2dfad Unwind@143e2dfad body=18 status=ok
// SIG undefined Unwind@143e2dfad(void)

void Unwind_143e2dfad(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2dfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_2 + 0xb0));
  return;
}



// FUNCTION 143e2dfbf Unwind@143e2dfbf body=14 status=ok
// SIG undefined Unwind@143e2dfbf(void)

void Unwind_143e2dfbf(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2dfc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x1f0));
  return;
}



// FUNCTION 143e2dfcd Unwind@143e2dfcd body=12 status=ok
// SIG undefined Unwind@143e2dfcd(void)

void Unwind_143e2dfcd(undefined8 param_1,longlong param_2)

{
  FUN_1439259d0(param_2 + 0x90);
  return;
}



// FUNCTION 143e2dfd9 Unwind@143e2dfd9 body=12 status=ok
// SIG undefined Unwind@143e2dfd9(void)

void Unwind_143e2dfd9(undefined8 param_1,longlong param_2)

{
  FUN_14393ead0(param_2 + 0x30);
  return;
}



// FUNCTION 143e2dff0 Unwind@143e2dff0 body=12 status=ok
// SIG undefined Unwind@143e2dff0(void)

void Unwind_143e2dff0(undefined8 param_1,longlong param_2)

{
  FUN_143937ec0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2e000 Unwind@143e2e000 body=12 status=ok
// SIG undefined Unwind@143e2e000(void)

void Unwind_143e2e000(undefined8 param_1,longlong param_2)

{
  FUN_143937ec0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143e2e010 Unwind@143e2e010 body=12 status=ok
// SIG undefined Unwind@143e2e010(void)

void Unwind_143e2e010(undefined8 param_1,longlong param_2)

{
  FUN_143937ec0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 143e2e020 Unwind@143e2e020 body=12 status=ok
// SIG undefined Unwind@143e2e020(void)

void Unwind_143e2e020(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x48);
  return;
}



// FUNCTION 143e2e02c Unwind@143e2e02c body=12 status=ok
// SIG undefined Unwind@143e2e02c(void)

void Unwind_143e2e02c(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x30);
  return;
}



// FUNCTION 143e2e040 Unwind@143e2e040 body=12 status=ok
// SIG undefined Unwind@143e2e040(void)

void Unwind_143e2e040(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x50);
  return;
}



// FUNCTION 143e2e04c Unwind@143e2e04c body=12 status=ok
// SIG undefined Unwind@143e2e04c(void)

void Unwind_143e2e04c(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x58);
  return;
}



// FUNCTION 143e2e060 Catch_All@143e2e060 body=62 status=ok
// SIG undefined Catch_All@143e2e060(void)

void Catch_All_143e2e060(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  for (lVar2 = *(longlong *)(param_2 + 0x48); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_143948300();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e0a0 Catch_All@143e2e0a0 body=62 status=ok
// SIG undefined Catch_All@143e2e0a0(void)

void Catch_All_143e2e0a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  for (lVar2 = *(longlong *)(param_2 + 0x48); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_143948360();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e0e0 Catch_All@143e2e0e0 body=62 status=ok
// SIG undefined Catch_All@143e2e0e0(void)

void Catch_All_143e2e0e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  for (lVar2 = *(longlong *)(param_2 + 0x40); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_143948300();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e120 Catch_All@143e2e120 body=62 status=ok
// SIG undefined Catch_All@143e2e120(void)

void Catch_All_143e2e120(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  for (lVar2 = *(longlong *)(param_2 + 0x40); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_143948360();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e160 Unwind@143e2e160 body=16 status=ok
// SIG undefined Unwind@143e2e160(void)

void Unwind_143e2e160(undefined8 param_1,longlong param_2)

{
  FUN_143948660(*(longlong *)(param_2 + 0x60) + 0x10);
  return;
}



// FUNCTION 143e2e170 catch$0 body=35 status=ok
// SIG undefined catch$0(void)

void `std::
     vector<Forsyth::`anonymous_namespace'::OptimizeVertexData,std::allocator<Forsyth::`anonymous_namespace'::OptimizeVertexData>_>
     ::_Reallocate'::`1'::catch_0(void)

{
  FUN_143940be0();
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e1a0 catch$0 body=35 status=ok
// SIG undefined catch$0(void)

void `std::
     vector<Forsyth::`anonymous_namespace'::OptimizeVertexData,std::allocator<Forsyth::`anonymous_namespace'::OptimizeVertexData>_>
     ::_Reallocate'::`1'::catch_0(void)

{
  FUN_143940be0();
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e1d0 Catch_All@143e2e1d0 body=26 status=ok
// SIG undefined Catch_All@143e2e1d0(void)

undefined * Catch_All_143e2e1d0(void)

{
  return &DAT_143949502;
}



// FUNCTION 143e2e1f0 Catch_All@143e2e1f0 body=31 status=ok
// SIG undefined Catch_All@143e2e1f0(void)

void Catch_All_143e2e1f0(void)

{
  FUN_143948660();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e23c Unwind@143e2e23c body=12 status=ok
// SIG undefined Unwind@143e2e23c(void)

void Unwind_143e2e23c(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x98);
  return;
}



// FUNCTION 143e2e250 Unwind@143e2e250 body=12 status=ok
// SIG undefined Unwind@143e2e250(void)

void Unwind_143e2e250(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x30);
  return;
}



// FUNCTION 143e2e260 Unwind@143e2e260 body=12 status=ok
// SIG undefined Unwind@143e2e260(void)

void Unwind_143e2e260(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x60);
  return;
}



// FUNCTION 143e2e26c Unwind@143e2e26c body=12 status=ok
// SIG undefined Unwind@143e2e26c(void)

void Unwind_143e2e26c(undefined8 param_1,longlong param_2)

{
  FSlateTextBlockLayout::SetDebugSourceInfo(param_2 + 0x50);
  return;
}



// FUNCTION 143e2e278 Catch_All@143e2e278 body=31 status=ok
// SIG undefined Catch_All@143e2e278(void)

void Catch_All_143e2e278(void)

{
  FUN_14394a7e0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e2a0 Catch_All@143e2e2a0 body=31 status=ok
// SIG undefined Catch_All@143e2e2a0(void)

void Catch_All_143e2e2a0(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e2cc Unwind@143e2e2cc body=16 status=ok
// SIG undefined Unwind@143e2e2cc(void)

void Unwind_143e2e2cc(undefined8 param_1,longlong param_2)

{
  FUN_14394c300(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}



// FUNCTION 143e2e2dc Unwind@143e2e2dc body=16 status=ok
// SIG undefined Unwind@143e2e2dc(void)

void Unwind_143e2e2dc(undefined8 param_1,longlong param_2)

{
  FUN_1438f3470(*(longlong *)(param_2 + 0x40) + 0x40);
  return;
}



// FUNCTION 143e2e2ec Unwind@143e2e2ec body=16 status=ok
// SIG undefined Unwind@143e2e2ec(void)

void Unwind_143e2e2ec(undefined8 param_1,longlong param_2)

{
  FUN_14394c500(*(longlong *)(param_2 + 0x40) + 0x58);
  return;
}



// FUNCTION 143e2e2fc Unwind@143e2e2fc body=16 status=ok
// SIG undefined Unwind@143e2e2fc(void)

void Unwind_143e2e2fc(undefined8 param_1,longlong param_2)

{
  FUN_14394c300(*(longlong *)(param_2 + 0x40) + 0x68);
  return;
}



// FUNCTION 143e2e30c Unwind@143e2e30c body=19 status=ok
// SIG undefined Unwind@143e2e30c(void)

void Unwind_143e2e30c(undefined8 param_1,longlong param_2)

{
  FUN_1438f3470(*(longlong *)(param_2 + 0x40) + 0x98);
  return;
}



// FUNCTION 143e2e320 Catch_All@143e2e320 body=31 status=ok
// SIG undefined Catch_All@143e2e320(void)

void Catch_All_143e2e320(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e34c Unwind@143e2e34c body=12 status=ok
// SIG undefined Unwind@143e2e34c(void)

void Unwind_143e2e34c(undefined8 param_1,longlong param_2)

{
  FUN_143925920(param_2 + 0x28);
  return;
}



// FUNCTION 143e2e360 Unwind@143e2e360 body=12 status=ok
// SIG undefined Unwind@143e2e360(void)

void Unwind_143e2e360(undefined8 param_1,longlong param_2)

{
  FUN_143925920(param_2 + 0x38);
  return;
}



// FUNCTION 143e2e370 Unwind@143e2e370 body=12 status=ok
// SIG undefined Unwind@143e2e370(void)

void Unwind_143e2e370(undefined8 param_1,longlong param_2)

{
  FUN_143925920(param_2 + 0x28);
  return;
}



// FUNCTION 143e2e37c Unwind@143e2e37c body=12 status=ok
// SIG undefined Unwind@143e2e37c(void)

void Unwind_143e2e37c(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143e2e388 Unwind@143e2e388 body=12 status=ok
// SIG undefined Unwind@143e2e388(void)

void Unwind_143e2e388(undefined8 param_1,longlong param_2)

{
  FUN_14394c910(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143e2e394 Unwind@143e2e394 body=12 status=ok
// SIG undefined Unwind@143e2e394(void)

void Unwind_143e2e394(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143e2e3a0 Unwind@143e2e3a0 body=12 status=ok
// SIG undefined Unwind@143e2e3a0(void)

void Unwind_143e2e3a0(undefined8 param_1,longlong param_2)

{
  FUN_14394c910(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143e2e3b0 Unwind@143e2e3b0 body=46 status=ok
// SIG undefined Unwind@143e2e3b0(void)

void Unwind_143e2e3b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 200));
  }
  return;
}



// FUNCTION 143e2e3de Unwind@143e2e3de body=18 status=ok
// SIG undefined Unwind@143e2e3de(void)

void Unwind_143e2e3de(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2e3e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_2 + 0x50));
  return;
}



// FUNCTION 143e2e3f0 Unwind@143e2e3f0 body=14 status=ok
// SIG undefined Unwind@143e2e3f0(void)

void Unwind_143e2e3f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143e2e3f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(param_2 + 0x1b0));
  return;
}



// FUNCTION 143e2e3fe Unwind@143e2e3fe body=12 status=ok
// SIG undefined Unwind@143e2e3fe(void)

void Unwind_143e2e3fe(undefined8 param_1,longlong param_2)

{
  FUN_1439259d0(param_2 + 0x30);
  return;
}



// FUNCTION 143e2e40a Unwind@143e2e40a body=12 status=ok
// SIG undefined Unwind@143e2e40a(void)

void Unwind_143e2e40a(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x130);
  return;
}



// FUNCTION 143e2e420 dtor$0 body=38 status=ok
// SIG undefined dtor$0(void)

void `convertCharPointerToStdString'::`1'::dtor_0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



// FUNCTION 143e2e450 Catch_All@143e2e450 body=48 status=ok
// SIG undefined Catch_All@143e2e450(void)

void Catch_All_143e2e450(undefined8 param_1,longlong param_2)

{
  if (DAT_146ba03a0 == (code *)0x0) {
    free(*(void **)(param_2 + 0x40));
  }
  else {
    (*DAT_146ba03a0)();
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e490 Catch_All@143e2e490 body=22 status=ok
// SIG undefined Catch_All@143e2e490(void)

void Catch_All_143e2e490(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e4b0 Catch_All@143e2e4b0 body=53 status=ok
// SIG undefined Catch_All@143e2e4b0(void)

void Catch_All_143e2e4b0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free(*(void **)(param_2 + 0x40));
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e4f0 Catch_All@143e2e4f0 body=53 status=ok
// SIG undefined Catch_All@143e2e4f0(void)

void Catch_All_143e2e4f0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free(*(void **)(param_2 + 0x40));
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e530 Catch_All@143e2e530 body=68 status=ok
// SIG undefined Catch_All@143e2e530(void)

undefined * Catch_All_143e2e530(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  *(longlong *)(param_2 + 0x68) = lVar1;
  if (DAT_146ba03a8 == (code *)0x0) {
    pvVar2 = malloc(lVar1 * 2 + 2);
  }
  else {
    pvVar2 = (void *)(*DAT_146ba03a8)();
  }
  *(void **)(param_2 + 0x78) = pvVar2;
  return &DAT_143984989;
}



// FUNCTION 143e2e575 Catch_All@143e2e575 body=95 status=ok
// SIG undefined Catch_All@143e2e575(void)

void Catch_All_143e2e575(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x60);
  if ((7 < (ulonglong)puVar1[3]) && ((void *)*puVar1 != (void *)0x0)) {
    if (DAT_146ba03a0 == (code *)0x0) {
      free((void *)*puVar1);
    }
    else {
      (*DAT_146ba03a0)();
    }
  }
  puVar1[3] = 7;
  puVar1[2] = 0;
  if (7 < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined2 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e5e0 Unwind@143e2e5e0 body=12 status=ok
// SIG undefined Unwind@143e2e5e0(void)

void Unwind_143e2e5e0(undefined8 param_1,longlong param_2)

{
  FUN_143984740(param_2 + 0x60);
  return;
}



// FUNCTION 143e2e5ec Unwind@143e2e5ec body=12 status=ok
// SIG undefined Unwind@143e2e5ec(void)

void Unwind_143e2e5ec(undefined8 param_1,longlong param_2)

{
  FUN_1439846e0(param_2 + 200);
  return;
}



// FUNCTION 143e2e5f8 Unwind@143e2e5f8 body=12 status=ok
// SIG undefined Unwind@143e2e5f8(void)

void Unwind_143e2e5f8(undefined8 param_1,longlong param_2)

{
  FUN_1439846e0(param_2 + 200);
  return;
}



// FUNCTION 143e2e610 Unwind@143e2e610 body=31 status=ok
// SIG undefined Unwind@143e2e610(void)

void Unwind_143e2e610(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x60),&DAT_146bcbba8);
  return;
}



// FUNCTION 143e2e630 Unwind@143e2e630 body=12 status=ok
// SIG undefined Unwind@143e2e630(void)

void Unwind_143e2e630(undefined8 param_1,longlong param_2)

{
  FUN_1439e56c0(param_2 + 0x28);
  return;
}



// FUNCTION 143e2e640 Unwind@143e2e640 body=12 status=ok
// SIG undefined Unwind@143e2e640(void)

void Unwind_143e2e640(undefined8 param_1,longlong param_2)

{
  FUN_1439e56f0(param_2 + 0x38);
  return;
}



// FUNCTION 143e2e650 Unwind@143e2e650 body=12 status=ok
// SIG undefined Unwind@143e2e650(void)

void Unwind_143e2e650(undefined8 param_1,longlong param_2)

{
  FUN_1439e5700(param_2 + 0x30);
  return;
}



// FUNCTION 143e2e660 Unwind@143e2e660 body=12 status=ok
// SIG undefined Unwind@143e2e660(void)

void Unwind_143e2e660(undefined8 param_1,longlong param_2)

{
  FUN_1439e5ab0(param_2 + 0xb0);
  return;
}



// FUNCTION 143e2e670 catch$0 body=42 status=ok
// SIG undefined catch$0(void)

void `std::vector<enum_RtAudio::Api,std::allocator<enum_RtAudio::Api>_>::
     _Emplace_reallocate<enum_RtAudio::Api>'::`1'::catch_0(undefined8 param_1,longlong param_2)

{
  std::allocator<ClipperLib::IntPoint>::deallocate
            (*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78),
             *(undefined8 *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2e6a0 Unwind@143e2e6a0 body=12 status=ok
// SIG undefined Unwind@143e2e6a0(void)

void Unwind_143e2e6a0(undefined8 param_1,longlong param_2)

{
  FUN_14390cde0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2e6b0 Unwind@143e2e6b0 body=12 status=ok
// SIG undefined Unwind@143e2e6b0(void)

void Unwind_143e2e6b0(undefined8 param_1,longlong param_2)

{
  FUN_1439eec20(param_2 + 0x60);
  return;
}



// FUNCTION 143e2e6c0 Unwind@143e2e6c0 body=12 status=ok
// SIG undefined Unwind@143e2e6c0(void)

void Unwind_143e2e6c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0xe8);
  return;
}



// FUNCTION 143e2e6d0 Unwind@143e2e6d0 body=12 status=ok
// SIG undefined Unwind@143e2e6d0(void)

void Unwind_143e2e6d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0xa8);
  return;
}



// FUNCTION 143e2e6e0 Unwind@143e2e6e0 body=12 status=ok
// SIG undefined Unwind@143e2e6e0(void)

void Unwind_143e2e6e0(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x38);
  return;
}



// FUNCTION 143e2e6f0 Unwind@143e2e6f0 body=12 status=ok
// SIG undefined Unwind@143e2e6f0(void)

void Unwind_143e2e6f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x108);
  return;
}



// FUNCTION 143e2e700 Unwind@143e2e700 body=12 status=ok
// SIG undefined Unwind@143e2e700(void)

void Unwind_143e2e700(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 200);
  return;
}



// FUNCTION 143e2e710 Unwind@143e2e710 body=12 status=ok
// SIG undefined Unwind@143e2e710(void)

void Unwind_143e2e710(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x70);
  return;
}



// FUNCTION 143e2e720 Unwind@143e2e720 body=12 status=ok
// SIG undefined Unwind@143e2e720(void)

void Unwind_143e2e720(void)

{
  _Init_thread_abort(&DAT_146ba2f40);
  return;
}



// FUNCTION 143e2e730 dtor$0 body=38 status=ok
// SIG undefined dtor$0(void)

void `FWmfMediaPlayer::TickFetch'::`1'::dtor_0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0x38);
  }
  return;
}



// FUNCTION 143e2e760 Unwind@143e2e760 body=12 status=ok
// SIG undefined Unwind@143e2e760(void)

void Unwind_143e2e760(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x50);
  return;
}



// FUNCTION 143e2e770 dtor$0 body=38 status=ok
// SIG undefined dtor$0(void)

void `FWmfMediaPlayer::TickFetch'::`1'::dtor_0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (param_2 + 0x30);
  }
  return;
}



// FUNCTION 143e2e7a0 Unwind@143e2e7a0 body=38 status=ok
// SIG undefined Unwind@143e2e7a0(void)

void Unwind_143e2e7a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    DsDevice::~DsDevice(param_2 + 0x50);
  }
  return;
}



// FUNCTION 143e2e7d0 Unwind@143e2e7d0 body=38 status=ok
// SIG undefined Unwind@143e2e7d0(void)

void Unwind_143e2e7d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 4) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffb;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (param_2 + 0x30);
  }
  return;
}



// FUNCTION 143e2e800 Unwind@143e2e800 body=38 status=ok
// SIG undefined Unwind@143e2e800(void)

void Unwind_143e2e800(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;
    DsDevice::~DsDevice(param_2 + 0x50);
  }
  return;
}



// FUNCTION 143e2e830 dtor$0 body=38 status=ok
// SIG undefined dtor$0(void)

void `nlohmann::
     basic_json<std::map,std::vector,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,__int64,unsigned___int64,double,std::allocator,nlohmann::adl_serializer>
     ::lexer::get_string'::`1'::dtor_0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



// FUNCTION 143e2e860 Unwind@143e2e860 body=12 status=ok
// SIG undefined Unwind@143e2e860(void)

void Unwind_143e2e860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x48);
  return;
}



// FUNCTION 143e2e870 Unwind@143e2e870 body=12 status=ok
// SIG undefined Unwind@143e2e870(void)

void Unwind_143e2e870(undefined8 param_1,longlong param_2)

{
  FUN_1439f0390(param_2 + 0x60);
  return;
}



// FUNCTION 143e2e880 Unwind@143e2e880 body=12 status=ok
// SIG undefined Unwind@143e2e880(void)

void Unwind_143e2e880(undefined8 param_1,longlong param_2)

{
  FUN_1439f8450(param_2 + 0x40);
  return;
}



// FUNCTION 143e2e890 Unwind@143e2e890 body=41 status=ok
// SIG undefined Unwind@143e2e890(void)

void Unwind_143e2e890(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0x80);
  }
  return;
}



// FUNCTION 143e2e8c0 Unwind@143e2e8c0 body=12 status=ok
// SIG undefined Unwind@143e2e8c0(void)

void Unwind_143e2e8c0(undefined8 param_1,longlong param_2)

{
  FUN_1439f83f0(param_2 + 0x30);
  return;
}



// FUNCTION 143e2e8d0 Unwind@143e2e8d0 body=38 status=ok
// SIG undefined Unwind@143e2e8d0(void)

void Unwind_143e2e8d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 143e2e900 Unwind@143e2e900 body=12 status=ok
// SIG undefined Unwind@143e2e900(void)

void Unwind_143e2e900(undefined8 param_1,longlong param_2)

{
  FUN_1439f8450(param_2 + 0x38);
  return;
}



// FUNCTION 143e2e910 dtor$0 body=38 status=ok
// SIG undefined dtor$0(void)

void `FWmfMediaPlayer::TickFetch'::`1'::dtor_0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0x30);
  }
  return;
}



// FUNCTION 143e2e940 Unwind@143e2e940 body=12 status=ok
// SIG undefined Unwind@143e2e940(void)

void Unwind_143e2e940(undefined8 param_1,longlong param_2)

{
  FUN_1439f18f0(param_2 + 0x20);
  return;
}



// FUNCTION 143e2e950 Unwind@143e2e950 body=12 status=ok
// SIG undefined Unwind@143e2e950(void)

void Unwind_143e2e950(undefined8 param_1,longlong param_2)

{
  FUN_1439f1930(param_2 + 0x20);
  return;
}



// FUNCTION 143e2e960 Unwind@143e2e960 body=12 status=ok
// SIG undefined Unwind@143e2e960(void)

void Unwind_143e2e960(undefined8 param_1,longlong param_2)

{
  FUN_1439f1970(param_2 + 0x20);
  return;
}



// FUNCTION 143e2e970 Unwind@143e2e970 body=12 status=ok
// SIG undefined Unwind@143e2e970(void)

void Unwind_143e2e970(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x30);
  return;
}



// FUNCTION 143e2e980 Unwind@143e2e980 body=12 status=ok
// SIG undefined Unwind@143e2e980(void)

void Unwind_143e2e980(void)

{
  _Init_thread_abort(&DAT_146ba2f74);
  return;
}



// FUNCTION 143e2e990 Unwind@143e2e990 body=12 status=ok
// SIG undefined Unwind@143e2e990(void)

void Unwind_143e2e990(undefined8 param_1,longlong param_2)

{
  FUN_1439f0390(param_2 + 0x68);
  return;
}



// FUNCTION 143e2e9a0 Unwind@143e2e9a0 body=12 status=ok
// SIG undefined Unwind@143e2e9a0(void)

void Unwind_143e2e9a0(undefined8 param_1,longlong param_2)

{
  FUN_1439f8450(param_2 + 0x48);
  return;
}



// FUNCTION 143e2e9b0 Unwind@143e2e9b0 body=12 status=ok
// SIG undefined Unwind@143e2e9b0(void)

void Unwind_143e2e9b0(undefined8 param_1,longlong param_2)

{
  FUN_1439f0390(param_2 + 0x48);
  return;
}



// FUNCTION 143e2e9c0 Unwind@143e2e9c0 body=12 status=ok
// SIG undefined Unwind@143e2e9c0(void)

void Unwind_143e2e9c0(undefined8 param_1,longlong param_2)

{
  FUN_1439f8450(param_2 + 0x28);
  return;
}



// FUNCTION 143e2e9d0 Unwind@143e2e9d0 body=38 status=ok
// SIG undefined Unwind@143e2e9d0(void)

void Unwind_143e2e9d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 2) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffd;
    DsDevice::~DsDevice(param_2 + 0x40);
  }
  return;
}



// FUNCTION 143e2ea00 Unwind@143e2ea00 body=12 status=ok
// SIG undefined Unwind@143e2ea00(void)

void Unwind_143e2ea00(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x78);
  return;
}



// FUNCTION 143e2ea10 Unwind@143e2ea10 body=12 status=ok
// SIG undefined Unwind@143e2ea10(void)

void Unwind_143e2ea10(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x40);
  return;
}



// FUNCTION 143e2ea20 Unwind@143e2ea20 body=12 status=ok
// SIG undefined Unwind@143e2ea20(void)

void Unwind_143e2ea20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x50);
  return;
}



// FUNCTION 143e2ea30 catch$0 body=42 status=ok
// SIG undefined catch$0(void)

void `std::vector<ClipperLib::IntPoint,std::allocator<ClipperLib::IntPoint>_>::
     _Emplace_reallocate<ClipperLib::IntPoint_const_&>'::`1'::catch_0
               (undefined8 param_1,longlong param_2)

{
  std::allocator<ClipperLib::IntPoint>::deallocate
            (*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),
             *(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ea60 Catch_All@143e2ea60 body=53 status=ok
// SIG undefined Catch_All@143e2ea60(void)

void Catch_All_143e2ea60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = UWaterWaves::GetWaterWaves(*(undefined8 *)(param_2 + 0x80));
  std::allocator<ClipperLib::IntPoint>::deallocate
            (uVar1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ea96 Catch_All@143e2ea96 body=110 status=ok
// SIG undefined Catch_All@143e2ea96(void)

void Catch_All_143e2ea96(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x28) * 0x20 + *(longlong *)(param_2 + 0x88);
  lVar1 = *(longlong *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x28) * 0x10;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  std::vector<char,std::allocator<char>_>::_Umove(uVar2,lVar1,lVar4);
  puVar3 = (undefined8 *)
           UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
           GetAddress(uVar2);
  FUN_1439fbba0(lVar4,*puVar3,lVar1);
  *puVar3 = *(undefined8 *)(param_2 + 0x90);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2eb32 Catch_All@143e2eb32 body=79 status=ok
// SIG undefined Catch_All@143e2eb32(void)

void Catch_All_143e2eb32(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
           GetAddress(*(undefined8 *)(param_2 + 0x80));
  std::vector<char,std::allocator<char>_>::_Umove
            (*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x98),*puVar1,
             *(undefined8 *)(param_2 + 0x88));
  *puVar1 = *(undefined8 *)(param_2 + 0x90);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ebb0 dtor$20 body=29 status=ok
// SIG undefined dtor$20(void)

void `FWmfMediaStreamSink::ScheduleWaitForNextSample'::`1'::dtor_20
               (undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x50),0x20);
  return;
}



// FUNCTION 143e2ebd0 Unwind@143e2ebd0 body=12 status=ok
// SIG undefined Unwind@143e2ebd0(void)

void Unwind_143e2ebd0(undefined8 param_1,longlong param_2)

{
  FUN_1439fbbd0(param_2 + 0x28);
  return;
}



// FUNCTION 143e2ebe0 Unwind@143e2ebe0 body=12 status=ok
// SIG undefined Unwind@143e2ebe0(void)

void Unwind_143e2ebe0(undefined8 param_1,longlong param_2)

{
  FUN_1439f83f0(param_2 + 0x50);
  return;
}



// FUNCTION 143e2ebf0 Unwind@143e2ebf0 body=12 status=ok
// SIG undefined Unwind@143e2ebf0(void)

void Unwind_143e2ebf0(undefined8 param_1,longlong param_2)

{
  FUN_141500bf0(param_2 + 0x38);
  return;
}



// FUNCTION 143e2ec00 Catch_All@143e2ec00 body=47 status=ok
// SIG undefined Catch_All@143e2ec00(void)

void Catch_All_143e2ec00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = UWaterWaves::GetWaterWaves(*(undefined8 *)(param_2 + 0x50));
  std::allocator<ClipperLib::IntPoint>::deallocate
            (uVar1,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ec40 Catch_All@143e2ec40 body=41 status=ok
// SIG undefined Catch_All@143e2ec40(void)

void Catch_All_143e2ec40(undefined8 param_1,longlong param_2)

{
  std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::deallocate
            (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x58),1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ec70 Catch_All@143e2ec70 body=78 status=ok
// SIG undefined Catch_All@143e2ec70(void)

undefined1 * Catch_All_143e2ec70(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)**(undefined8 **)(param_2 + 0x58);
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x28));
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x28));
  _guard_xfg_dispatch_icall_nop(pvVar1,(void *)(param_2 + 0x28));
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x28));
  return &LAB_1439fce5a;
}



// FUNCTION 143e2ecc0 Catch_All@143e2ecc0 body=35 status=ok
// SIG undefined Catch_All@143e2ecc0(void)

void Catch_All_143e2ecc0(void)

{
  FUN_143a00430();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ece4 Catch_All@143e2ece4 body=56 status=ok
// SIG undefined Catch_All@143e2ece4(void)

void Catch_All_143e2ece4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           UGameInstance::OverrideGameModeClass
                     (*(undefined8 *)(param_2 + 0x50),param_2 + 0x60,*(undefined8 *)(param_2 + 0x68)
                     );
  FUN_1439fd650(*(undefined8 *)(param_2 + 0x50),param_2 + 0x50,*puVar1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ed20 catch$12 body=35 status=ok
// SIG undefined catch$12(void)

void `std::
     _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
     ::
     _Insert<hx::Object_*_*_const_&,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>'
     ::`1'::catch_12(void)

{
  FUN_143a00430();
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ed44 catch$11 body=56 status=ok
// SIG undefined catch$11(void)

void `std::
     _Hash<std::_Uset_traits<hx::Object_*_*,std::_Uhash_compare<hx::Object_*_*,std::hash<hx::Object_*_*>,std::equal_to<hx::Object_*_*>_>,std::allocator<hx::Object_*_*>,0>_>
     ::
     _Insert<hx::Object_*_*_const_&,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<hx::Object_*_*>_>,std::_Iterator_base0>_>'
     ::`1'::catch_11(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           UGameInstance::OverrideGameModeClass
                     (*(undefined8 *)(param_2 + 0x40),param_2 + 0x28,*(undefined8 *)(param_2 + 0x58)
                     );
  FUN_1439fd710(*(undefined8 *)(param_2 + 0x40),param_2 + 0x40,*puVar1);
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ed80 Catch_All@143e2ed80 body=22 status=ok
// SIG undefined Catch_All@143e2ed80(void)

void Catch_All_143e2ed80(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ed97 Catch_All@143e2ed97 body=56 status=ok
// SIG undefined Catch_All@143e2ed97(void)

void Catch_All_143e2ed97(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           UGameInstance::OverrideGameModeClass
                     (*(undefined8 *)(param_2 + 0x60),param_2 + 0x70,*(undefined8 *)(param_2 + 0x70)
                     );
  FUN_1439fd650(*(undefined8 *)(param_2 + 0x60),param_2 + 0x60,*puVar1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ede7 Catch_All@143e2ede7 body=56 status=ok
// SIG undefined Catch_All@143e2ede7(void)

void Catch_All_143e2ede7(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           UGameInstance::OverrideGameModeClass
                     (*(undefined8 *)(param_2 + 0x60),param_2 + 0x20,*(undefined8 *)(param_2 + 0x20)
                     );
  FUN_1439fd710(*(undefined8 *)(param_2 + 0x60),param_2 + 0x60,*puVar1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ee30 Unwind@143e2ee30 body=38 status=ok
// SIG undefined Unwind@143e2ee30(void)

void Unwind_143e2ee30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0x50);
  }
  return;
}



// FUNCTION 143e2ee60 Unwind@143e2ee60 body=12 status=ok
// SIG undefined Unwind@143e2ee60(void)

void Unwind_143e2ee60(undefined8 param_1,longlong param_2)

{
  FUN_1439eec20(param_2 + 0x38);
  return;
}



// FUNCTION 143e2ee70 Unwind@143e2ee70 body=12 status=ok
// SIG undefined Unwind@143e2ee70(void)

void Unwind_143e2ee70(undefined8 param_1,longlong param_2)

{
  std::
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  ::
  ~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (param_2 + 0x38);
  return;
}



// FUNCTION 143e2ee80 Unwind@143e2ee80 body=38 status=ok
// SIG undefined Unwind@143e2ee80(void)

void Unwind_143e2ee80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (*(undefined8 *)(param_2 + 0x58));
  }
  return;
}



// FUNCTION 143e2eeb0 Unwind@143e2eeb0 body=12 status=ok
// SIG undefined Unwind@143e2eeb0(void)

void Unwind_143e2eeb0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1439f1360(param_2 + 0x20);
  return;
}



// FUNCTION 143e2eec0 Unwind@143e2eec0 body=12 status=ok
// SIG undefined Unwind@143e2eec0(void)

void Unwind_143e2eec0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x80);
  return;
}



// FUNCTION 143e2eed0 Catch_All@143e2eed0 body=41 status=ok
// SIG undefined Catch_All@143e2eed0(void)

void Catch_All_143e2eed0(undefined8 param_1,longlong param_2)

{
  std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::deallocate
            (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x58),1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ef00 Catch_All@143e2ef00 body=47 status=ok
// SIG undefined Catch_All@143e2ef00(void)

void Catch_All_143e2ef00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = UWaterWaves::GetWaterWaves(*(undefined8 *)(param_2 + 0x50));
  std::allocator<double>::deallocate
            (uVar1,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ef40 Unwind@143e2ef40 body=12 status=ok
// SIG undefined Unwind@143e2ef40(void)

void Unwind_143e2ef40(void)

{
  _Init_thread_abort(&DAT_146ba2ff8);
  return;
}



// FUNCTION 143e2ef50 Unwind@143e2ef50 body=29 status=ok
// SIG undefined Unwind@143e2ef50(void)

void Unwind_143e2ef50(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x50),0xd8);
  return;
}



// FUNCTION 143e2ef70 Unwind@143e2ef70 body=12 status=ok
// SIG undefined Unwind@143e2ef70(void)

void Unwind_143e2ef70(undefined8 param_1,longlong param_2)

{
  FUN_1439fdcd0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 143e2ef80 Unwind@143e2ef80 body=16 status=ok
// SIG undefined Unwind@143e2ef80(void)

void Unwind_143e2ef80(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1439fda20(*(longlong *)(param_2 + 0x50) + 8);
  return;
}



// FUNCTION 143e2ef90 Unwind@143e2ef90 body=16 status=ok
// SIG undefined Unwind@143e2ef90(void)

void Unwind_143e2ef90(undefined8 param_1,longlong param_2)

{
  _guard_xfg_dispatch_icall_nop(*(longlong *)(param_2 + 0x50) + 0x48);
  return;
}



// FUNCTION 143e2efa0 Unwind@143e2efa0 body=16 status=ok
// SIG undefined Unwind@143e2efa0(void)

void Unwind_143e2efa0(undefined8 param_1,longlong param_2)

{
  FUN_1439fda90(*(longlong *)(param_2 + 0x58) + 8);
  return;
}



// FUNCTION 143e2efb0 Unwind@143e2efb0 body=16 status=ok
// SIG undefined Unwind@143e2efb0(void)

void Unwind_143e2efb0(undefined8 param_1,longlong param_2)

{
  std::vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>::
  ~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
            (*(longlong *)(param_2 + 0x58) + 0x18);
  return;
}



// FUNCTION 143e2efc0 Unwind@143e2efc0 body=12 status=ok
// SIG undefined Unwind@143e2efc0(void)

void Unwind_143e2efc0(undefined8 param_1,longlong param_2)

{
  std::exception_ptr::~exception_ptr(param_2 + 0x28);
  return;
}



// FUNCTION 143e2efd0 catch$1 body=35 status=ok
// SIG undefined catch$1(void)

void `std::
     _Tree_comp_alloc<std::_Tmap_traits<unsigned_short,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>_>,0>_>
     ::
     _Buynode<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>_&>'
     ::`1'::catch_1(void)

{
  FUN_143a0ace0();
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f000 Catch_All@143e2f000 body=78 status=ok
// SIG undefined Catch_All@143e2f000(void)

undefined1 * Catch_All_143e2f000(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)**(undefined8 **)(param_2 + 0x58);
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x28));
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x28));
  _guard_xfg_dispatch_icall_nop(pvVar1,(void *)(param_2 + 0x28));
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x28));
  return &LAB_143a0131a;
}



// FUNCTION 143e2f050 catch$0 body=42 status=ok
// SIG undefined catch$0(void)

void `std::vector<double,std::allocator<double>_>::_Emplace_reallocate<double_const_&>'::`1'::
     catch_0(undefined8 param_1,longlong param_2)

{
  std::allocator<double>::deallocate
            (*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),
             *(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f080 Catch_All@143e2f080 body=22 status=ok
// SIG undefined Catch_All@143e2f080(void)

void Catch_All_143e2f080(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f0a0 Unwind@143e2f0a0 body=12 status=ok
// SIG undefined Unwind@143e2f0a0(void)

void Unwind_143e2f0a0(undefined8 param_1,longlong param_2)

{
  Chaos::FImplicitObject::~FImplicitObject(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2f0b0 Unwind@143e2f0b0 body=12 status=ok
// SIG undefined Unwind@143e2f0b0(void)

void Unwind_143e2f0b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x90);
  return;
}



// FUNCTION 143e2f0c0 Unwind@143e2f0c0 body=41 status=ok
// SIG undefined Unwind@143e2f0c0(void)

void Unwind_143e2f0c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0xb0);
  }
  return;
}



// FUNCTION 143e2f0f0 Unwind@143e2f0f0 body=29 status=ok
// SIG undefined Unwind@143e2f0f0(void)

void Unwind_143e2f0f0(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x70),0x58);
  return;
}



// FUNCTION 143e2f110 Unwind@143e2f110 body=12 status=ok
// SIG undefined Unwind@143e2f110(void)

void Unwind_143e2f110(undefined8 param_1,longlong param_2)

{
  Chaos::FImplicitObject::~FImplicitObject(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 143e2f120 Unwind@143e2f120 body=12 status=ok
// SIG undefined Unwind@143e2f120(void)

void Unwind_143e2f120(void)

{
  _Init_thread_abort(&DAT_146ba30a8);
  return;
}



// FUNCTION 143e2f130 Unwind@143e2f130 body=32 status=ok
// SIG undefined Unwind@143e2f130(void)

void Unwind_143e2f130(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x90),0x58);
  return;
}



// FUNCTION 143e2f150 Unwind@143e2f150 body=12 status=ok
// SIG undefined Unwind@143e2f150(void)

void Unwind_143e2f150(undefined8 param_1,longlong param_2)

{
  Chaos::FImplicitObject::~FImplicitObject(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 143e2f160 Unwind@143e2f160 body=38 status=ok
// SIG undefined Unwind@143e2f160(void)

void Unwind_143e2f160(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0x40);
  }
  return;
}



// FUNCTION 143e2f190 dtor$9 body=38 status=ok
// SIG undefined dtor$9(void)

void `FMoviePipelineBackgroundAccumulateTask::Execute'::`1'::dtor_9
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    DsDevice::~DsDevice(param_2 + 0x40);
  }
  return;
}



// FUNCTION 143e2f1c0 Unwind@143e2f1c0 body=38 status=ok
// SIG undefined Unwind@143e2f1c0(void)

void Unwind_143e2f1c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_143a01fd0(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 143e2f1f0 dtor$11 body=38 status=ok
// SIG undefined dtor$11(void)

void `FMoviePipelineBackgroundAccumulateTask::Execute'::`1'::dtor_11
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    DsDevice::~DsDevice(param_2 + 0x40);
  }
  return;
}



// FUNCTION 143e2f220 Unwind@143e2f220 body=38 status=ok
// SIG undefined Unwind@143e2f220(void)

void Unwind_143e2f220(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0x40);
  }
  return;
}



// FUNCTION 143e2f250 Unwind@143e2f250 body=38 status=ok
// SIG undefined Unwind@143e2f250(void)

void Unwind_143e2f250(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    DsDevice::~DsDevice(param_2 + 0x40);
  }
  return;
}



// FUNCTION 143e2f280 Unwind@143e2f280 body=38 status=ok
// SIG undefined Unwind@143e2f280(void)

void Unwind_143e2f280(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    DsDevice::~DsDevice(param_2 + 0x78);
  }
  return;
}



// FUNCTION 143e2f2b0 Unwind@143e2f2b0 body=38 status=ok
// SIG undefined Unwind@143e2f2b0(void)

void Unwind_143e2f2b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    DsDevice::~DsDevice(param_2 + 0x78);
  }
  return;
}



// FUNCTION 143e2f2e0 Unwind@143e2f2e0 body=12 status=ok
// SIG undefined Unwind@143e2f2e0(void)

void Unwind_143e2f2e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_143a01f10(param_2 + 0x38);
  return;
}



// FUNCTION 143e2f2f0 Unwind@143e2f2f0 body=12 status=ok
// SIG undefined Unwind@143e2f2f0(void)

void Unwind_143e2f2f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x70);
  return;
}



// FUNCTION 143e2f300 Catch_All@143e2f300 body=41 status=ok
// SIG undefined Catch_All@143e2f300(void)

void Catch_All_143e2f300(undefined8 param_1,longlong param_2)

{
  std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::deallocate
            (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f330 Catch_All@143e2f330 body=41 status=ok
// SIG undefined Catch_All@143e2f330(void)

void Catch_All_143e2f330(undefined8 param_1,longlong param_2)

{
  std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::deallocate
            (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f360 Catch_All@143e2f360 body=47 status=ok
// SIG undefined Catch_All@143e2f360(void)

void Catch_All_143e2f360(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = UWaterWaves::GetWaterWaves(*(undefined8 *)(param_2 + 0x50));
  std::allocator<double>::deallocate
            (uVar1,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f390 Catch_All@143e2f390 body=66 status=ok
// SIG undefined Catch_All@143e2f390(void)

void Catch_All_143e2f390(undefined8 param_1,longlong param_2)

{
  std::
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  ::_Destroy(*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x30));
  std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::deallocate
            (*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x98),
             *(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f3e0 Unwind@143e2f3e0 body=12 status=ok
// SIG undefined Unwind@143e2f3e0(void)

void Unwind_143e2f3e0(undefined8 param_1,longlong param_2)

{
  std::vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>::
  ~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
            (param_2 + 0x28);
  return;
}



// FUNCTION 143e2f3f0 Unwind@143e2f3f0 body=12 status=ok
// SIG undefined Unwind@143e2f3f0(void)

void Unwind_143e2f3f0(undefined8 param_1,longlong param_2)

{
  FUN_143a01fd0(param_2 + 0x40);
  return;
}



// FUNCTION 143e2f400 Unwind@143e2f400 body=12 status=ok
// SIG undefined Unwind@143e2f400(void)

void Unwind_143e2f400(undefined8 param_1,longlong param_2)

{
  FUN_143a01fd0(param_2 + 0x78);
  return;
}



// FUNCTION 143e2f410 Unwind@143e2f410 body=12 status=ok
// SIG undefined Unwind@143e2f410(void)

void Unwind_143e2f410(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0xb0);
  return;
}



// FUNCTION 143e2f420 Unwind@143e2f420 body=12 status=ok
// SIG undefined Unwind@143e2f420(void)

void Unwind_143e2f420(undefined8 param_1,longlong param_2)

{
  std::vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>::
  ~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
            (param_2 + 0x60);
  return;
}



// FUNCTION 143e2f430 dtor$0 body=41 status=ok
// SIG undefined dtor$0(void)

void `websocketpp::processor::hybi00<websocketpp::config::asio>::validate_handshake'::`1'::dtor_0
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (param_2 + 0x90);
  }
  return;
}



// FUNCTION 143e2f460 Unwind@143e2f460 body=38 status=ok
// SIG undefined Unwind@143e2f460(void)

void Unwind_143e2f460(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (param_2 + 0x68);
  }
  return;
}



// FUNCTION 143e2f490 Unwind@143e2f490 body=38 status=ok
// SIG undefined Unwind@143e2f490(void)

void Unwind_143e2f490(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (param_2 + 0x30);
  }
  return;
}



// FUNCTION 143e2f4c0 Unwind@143e2f4c0 body=12 status=ok
// SIG undefined Unwind@143e2f4c0(void)

void Unwind_143e2f4c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x88);
  return;
}



// FUNCTION 143e2f4d0 Unwind@143e2f4d0 body=12 status=ok
// SIG undefined Unwind@143e2f4d0(void)

void Unwind_143e2f4d0(undefined8 param_1,longlong param_2)

{
  std::vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>::
  ~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
            (param_2 + 0x58);
  return;
}



// FUNCTION 143e2f4e0 Unwind@143e2f4e0 body=12 status=ok
// SIG undefined Unwind@143e2f4e0(void)

void Unwind_143e2f4e0(undefined8 param_1,longlong param_2)

{
  FUN_143a01fd0(param_2 + 0x28);
  return;
}



// FUNCTION 143e2f4f0 Unwind@143e2f4f0 body=12 status=ok
// SIG undefined Unwind@143e2f4f0(void)

void Unwind_143e2f4f0(undefined8 param_1,longlong param_2)

{
  FUN_143a01fd0(param_2 + 0x70);
  return;
}



// FUNCTION 143e2f500 Unwind@143e2f500 body=16 status=ok
// SIG undefined Unwind@143e2f500(void)

void Unwind_143e2f500(undefined8 param_1,longlong param_2)

{
  FUN_1439fdc40(param_2 + 0x38);
  return;
}



// FUNCTION 143e2f510 Unwind@143e2f510 body=16 status=ok
// SIG undefined Unwind@143e2f510(void)

void Unwind_143e2f510(undefined8 param_1,longlong param_2)

{
  FUN_1439fdc40(param_2 + 0x80);
  return;
}



// FUNCTION 143e2f520 Unwind@143e2f520 body=12 status=ok
// SIG undefined Unwind@143e2f520(void)

void Unwind_143e2f520(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x108);
  return;
}



// FUNCTION 143e2f530 Unwind@143e2f530 body=41 status=ok
// SIG undefined Unwind@143e2f530(void)

void Unwind_143e2f530(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    DsDevice::~DsDevice(param_2 + 0xb0);
  }
  return;
}



// FUNCTION 143e2f560 Unwind@143e2f560 body=12 status=ok
// SIG undefined Unwind@143e2f560(void)

void Unwind_143e2f560(undefined8 param_1,longlong param_2)

{
  std::vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>::
  ~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
            (param_2 + 0x48);
  return;
}



// FUNCTION 143e2f570 Unwind@143e2f570 body=12 status=ok
// SIG undefined Unwind@143e2f570(void)

void Unwind_143e2f570(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x78);
  return;
}



// FUNCTION 143e2f580 Catch_All@143e2f580 body=31 status=ok
// SIG undefined Catch_All@143e2f580(void)

void Catch_All_143e2f580(void)

{
  FUN_143a14820();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f5b0 catch$1 body=35 status=ok
// SIG undefined catch$1(void)

void `std::
     _Tree_comp_alloc<std::_Tmap_traits<unsigned_short,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>_>,0>_>
     ::
     _Buynode<std::pair<unsigned_short_const_,_com_ptr_t<_com_IIID<AuraServiceLib::IAuraRgbLight,&_GUID_9af6260e_4311_417d_b3ef_b85a34cf3244>_>_>_&>'
     ::`1'::catch_1(void)

{
  FUN_143a14800();
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f5e0 Catch_All@143e2f5e0 body=35 status=ok
// SIG undefined Catch_All@143e2f5e0(void)

void Catch_All_143e2f5e0(void)

{
  FUN_143a14440();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2f610 Unwind@143e2f610 body=12 status=ok
// SIG undefined Unwind@143e2f610(void)

void Unwind_143e2f610(undefined8 param_1,longlong param_2)

{
  DsDevice::~DsDevice(param_2 + 0x48);
  return;
}


