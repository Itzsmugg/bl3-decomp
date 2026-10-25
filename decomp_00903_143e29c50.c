// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e29c50 _guard_dispatch_icall body=2 status=ok
// SIG undefined _guard_dispatch_icall(void)

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000143e29c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 143e29c60 filt$0 body=22 status=ok
// SIG undefined filt$0(void)

undefined8 `GuardedMainWrapper'::`1'::filt_0(void)

{
  FUN_1416a6ea0();
  return 0;
}



// FUNCTION 143e29c80 FUN_143e29c80 body=37 status=ok
// SIG undefined FUN_143e29c80(void)

undefined8 FUN_143e29c80(void)

{
  undefined8 uVar1;
  
  if (DAT_1461f6018 == '\0') {
    uVar1 = FUN_1416a6ea0();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143e29cb0 dtor$0 body=29 status=ok
// SIG undefined dtor$0(void)

void `FRgbaInputFile::FRgbaInputFile'::`1'::dtor_0(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x30),0x38);
  return;
}



// FUNCTION 143e29cd0 dtor$1 body=38 status=ok
// SIG undefined dtor$1(void)

void `FRgbaInputFile::FRgbaInputFile'::`1'::dtor_1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(param_2 + 0x40);
  }
  return;
}



// FUNCTION 143e29d00 dtor$1 body=38 status=ok
// SIG undefined dtor$1(void)

void ``dynamic_initializer_for_'ModuleRegistrantOpenExrWrapper'''::`1'::dtor_1
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x28);
  }
  return;
}



// FUNCTION 143e29d30 Unwind@143e29d30 body=12 status=ok
// SIG undefined Unwind@143e29d30(void)

void Unwind_143e29d30(undefined8 param_1,longlong param_2)

{
  FUN_1408f7530(*(undefined8 *)(param_2 + 0x78));
  return;
}



// FUNCTION 143e29d40 filt$0 body=47 status=ok
// SIG undefined filt$0(void)

void `NewReportEnsure'::`1'::filt_0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = IsInteractiveEnsureMode();
  ReportEnsureUsingCrashReportClient(param_1,*(undefined8 *)(param_2 + 0x30),cVar1 == '\0');
  return;
}



// FUNCTION 143e29d70 FUN_143e29d70 body=21 status=ok
// SIG undefined FUN_143e29d70(void)

void FUN_143e29d70(void)

{
  FUN_1416a6ea0();
  return;
}



// FUNCTION 143e29d90 Unwind@143e29d90 body=12 status=ok
// SIG undefined Unwind@143e29d90(void)

void Unwind_143e29d90(undefined8 param_1,longlong param_2)

{
  FUN_143929ce0(param_2 + 0x68);
  return;
}



// FUNCTION 143e29da0 Unwind@143e29da0 body=12 status=ok
// SIG undefined Unwind@143e29da0(void)

void Unwind_143e29da0(undefined8 param_1,longlong param_2)

{
  FMemFileOut::~FMemFileOut(param_2 + 0x90);
  return;
}



// FUNCTION 143e29db0 Unwind@143e29db0 body=12 status=ok
// SIG undefined Unwind@143e29db0(void)

void Unwind_143e29db0(undefined8 param_1,longlong param_2)

{
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::
  ~_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
            (param_2 + 0x48);
  return;
}



// FUNCTION 143e29dc0 dtor$3 body=45 status=ok
// SIG undefined dtor$3(void)

void `FExrImageWrapper::CompressRaw<1,unsigned_char>'::`1'::dtor_3
               (undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_(param_2 + 0xd0,0x10,4,FUN_140591050);
  return;
}



// FUNCTION 143e29df0 Unwind@143e29df0 body=12 status=ok
// SIG undefined Unwind@143e29df0(void)

void Unwind_143e29df0(undefined8 param_1,longlong param_2)

{
  FUN_143931b60(param_2 + 0x58);
  return;
}



// FUNCTION 143e29e00 Unwind@143e29e00 body=12 status=ok
// SIG undefined Unwind@143e29e00(void)

void Unwind_143e29e00(undefined8 param_1,longlong param_2)

{
  FUN_143929ce0(param_2 + 0x78);
  return;
}



// FUNCTION 143e29e10 Unwind@143e29e10 body=12 status=ok
// SIG undefined Unwind@143e29e10(void)

void Unwind_143e29e10(undefined8 param_1,longlong param_2)

{
  FMemFileOut::~FMemFileOut(param_2 + 0xe0);
  return;
}



// FUNCTION 143e29e20 Unwind@143e29e20 body=12 status=ok
// SIG undefined Unwind@143e29e20(void)

void Unwind_143e29e20(undefined8 param_1,longlong param_2)

{
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::
  ~_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
            (param_2 + 0x58);
  return;
}



// FUNCTION 143e29e30 Unwind@143e29e30 body=45 status=ok
// SIG undefined Unwind@143e29e30(void)

void Unwind_143e29e30(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_(param_2 + 0x120,0x10,4,FUN_140591050);
  return;
}



// FUNCTION 143e29e60 Unwind@143e29e60 body=12 status=ok
// SIG undefined Unwind@143e29e60(void)

void Unwind_143e29e60(undefined8 param_1,longlong param_2)

{
  FUN_143931b60(param_2 + 0x68);
  return;
}



// FUNCTION 143e29e70 Unwind@143e29e70 body=12 status=ok
// SIG undefined Unwind@143e29e70(void)

void Unwind_143e29e70(undefined8 param_1,longlong param_2)

{
  FUN_140591050(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e29e80 Unwind@143e29e80 body=12 status=ok
// SIG undefined Unwind@143e29e80(void)

void Unwind_143e29e80(undefined8 param_1,longlong param_2)

{
  FUN_141868e00(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e29e90 Unwind@143e29e90 body=12 status=ok
// SIG undefined Unwind@143e29e90(void)

void Unwind_143e29e90(undefined8 param_1,longlong param_2)

{
  FUN_141868df0(param_2 + 0x90);
  return;
}



// FUNCTION 143e29ea0 Unwind@143e29ea0 body=12 status=ok
// SIG undefined Unwind@143e29ea0(void)

void Unwind_143e29ea0(undefined8 param_1,longlong param_2)

{
  FUN_141868cb0(param_2 + 0x40);
  return;
}



// FUNCTION 143e29eb0 Unwind@143e29eb0 body=12 status=ok
// SIG undefined Unwind@143e29eb0(void)

void Unwind_143e29eb0(undefined8 param_1,longlong param_2)

{
  FUN_141868cb0(param_2 + 0x30);
  return;
}



// FUNCTION 143e29ec0 Unwind@143e29ec0 body=12 status=ok
// SIG undefined Unwind@143e29ec0(void)

void Unwind_143e29ec0(undefined8 param_1,longlong param_2)

{
  FUN_141868cb0(param_2 + 0x50);
  return;
}



// FUNCTION 143e29ed0 Unwind@143e29ed0 body=12 status=ok
// SIG undefined Unwind@143e29ed0(void)

void Unwind_143e29ed0(undefined8 param_1,longlong param_2)

{
  FUN_141868cb0(param_2 + 0x60);
  return;
}



// FUNCTION 143e29ee0 Unwind@143e29ee0 body=12 status=ok
// SIG undefined Unwind@143e29ee0(void)

void Unwind_143e29ee0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1439276e0(param_2 + 0x30);
  return;
}



// FUNCTION 143e29ef0 Unwind@143e29ef0 body=12 status=ok
// SIG undefined Unwind@143e29ef0(void)

void Unwind_143e29ef0(undefined8 param_1,longlong param_2)

{
  FUN_143925950(param_2 + 0x70);
  return;
}



// FUNCTION 143e29f00 Unwind@143e29f00 body=12 status=ok
// SIG undefined Unwind@143e29f00(void)

void Unwind_143e29f00(undefined8 param_1,longlong param_2)

{
  FUN_141868ed0(param_2 + 0x20);
  return;
}



// FUNCTION 143e29f10 Unwind@143e29f10 body=12 status=ok
// SIG undefined Unwind@143e29f10(void)

void Unwind_143e29f10(undefined8 param_1,longlong param_2)

{
  jpgd::jpeg_decoder::~jpeg_decoder(param_2 + 0x40);
  return;
}



// FUNCTION 143e29f20 Unwind@143e29f20 body=12 status=ok
// SIG undefined Unwind@143e29f20(void)

void Unwind_143e29f20(undefined8 param_1,longlong param_2)

{
  FUN_141868df0(param_2 + 0xa8);
  return;
}



// FUNCTION 143e29f30 Unwind@143e29f30 body=12 status=ok
// SIG undefined Unwind@143e29f30(void)

void Unwind_143e29f30(undefined8 param_1,longlong param_2)

{
  FUN_141868ed0(param_2 + 0x38);
  return;
}



// FUNCTION 143e29f40 Unwind@143e29f40 body=12 status=ok
// SIG undefined Unwind@143e29f40(void)

void Unwind_143e29f40(undefined8 param_1,longlong param_2)

{
  FUN_141868c90(param_2 + 0x28);
  return;
}



// FUNCTION 143e29f50 Catch@143e29f50 body=26 status=ok
// SIG undefined Catch@143e29f50(void)

undefined8 Catch_143e29f50(void)

{
  return 0x14186c22e;
}



// FUNCTION 143e29f70 Unwind@143e29f70 body=12 status=ok
// SIG undefined Unwind@143e29f70(void)

void Unwind_143e29f70(undefined8 param_1,longlong param_2)

{
  FUN_141868df0(param_2 + 0x58);
  return;
}



// FUNCTION 143e29f80 Unwind@143e29f80 body=12 status=ok
// SIG undefined Unwind@143e29f80(void)

void Unwind_143e29f80(undefined8 param_1,longlong param_2)

{
  PNGReadGuard::~PNGReadGuard(param_2 + 0x68);
  return;
}



// FUNCTION 143e29f90 Catch_All@143e29f90 body=41 status=ok
// SIG undefined Catch_All@143e29f90(void)

void Catch_All_143e29f90(undefined8 param_1,longlong param_2)

{
  FUN_141872200(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e29fc0 Unwind@143e29fc0 body=12 status=ok
// SIG undefined Unwind@143e29fc0(void)

void Unwind_143e29fc0(undefined8 param_1,longlong param_2)

{
  FUN_141868ed0(param_2 + 0x30);
  return;
}



// FUNCTION 143e29fd0 Unwind@143e29fd0 body=12 status=ok
// SIG undefined Unwind@143e29fd0(void)

void Unwind_143e29fd0(undefined8 param_1,longlong param_2)

{
  jpge::jpeg_encoder::~jpeg_encoder(param_2 + 0x50);
  return;
}



// FUNCTION 143e29fe0 Unwind@143e29fe0 body=12 status=ok
// SIG undefined Unwind@143e29fe0(void)

void Unwind_143e29fe0(undefined8 param_1,longlong param_2)

{
  FUN_140d232d0(param_2 + 0x70);
  return;
}



// FUNCTION 143e29ff0 Unwind@143e29ff0 body=12 status=ok
// SIG undefined Unwind@143e29ff0(void)

void Unwind_143e29ff0(undefined8 param_1,longlong param_2)

{
  FUN_140591050(param_2 + 0x30);
  return;
}



// FUNCTION 143e2a000 Unwind@143e2a000 body=12 status=ok
// SIG undefined Unwind@143e2a000(void)

void Unwind_143e2a000(undefined8 param_1,longlong param_2)

{
  TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(param_2 + 0x30);
  return;
}



// FUNCTION 143e2a010 FUN_143e2a010 body=50 status=ok
// SIG undefined FUN_143e2a010(void)

undefined8 FUN_143e2a010(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  if (DAT_146ab6358 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab6358 + 0xb0))();
  }
  return 1;
}



// FUNCTION 143e2a043 FUN_143e2a043 body=50 status=ok
// SIG undefined FUN_143e2a043(void)

undefined8 FUN_143e2a043(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x48) = param_1;
  if (DAT_146ab6358 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab6358 + 0xb0))();
  }
  return 1;
}



// FUNCTION 143e2a080 filt$0 body=41 status=ok
// SIG undefined filt$0(void)

undefined1 `SafeCreateDXGIFactory'::`1'::filt_0(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x28) = param_1;
  *(bool *)(param_2 + 0x20) = *(int *)*param_1 + 0x3f92ff82U < 2;
  return *(undefined1 *)(param_2 + 0x20);
}



// FUNCTION 143e2a0b0 filt$0 body=41 status=ok
// SIG undefined filt$0(void)

undefined1 `SafeTestD3D11CreateDevice'::`1'::filt_0(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x68) = param_1;
  *(bool *)(param_2 + 0x50) = *(int *)*param_1 + 0x3f92ff82U < 2;
  return *(undefined1 *)(param_2 + 0x50);
}



// FUNCTION 143e2a0e0 filt$0 body=41 status=ok
// SIG undefined filt$0(void)

undefined1 `SafeTestD3D12CreateDevice'::`1'::filt_0(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x48) = param_1;
  *(bool *)(param_2 + 0x20) = *(int *)*param_1 + 0x3f92ff82U < 2;
  return *(undefined1 *)(param_2 + 0x20);
}



// FUNCTION 143e2a110 filt$0 body=25 status=ok
// SIG undefined filt$0(void)

void `FRenderingThread::Run'::`1'::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  FRenderingThread::FlushRHILogsAndReportCrash();
  return;
}



// FUNCTION 143e2a130 filt$0 body=20 status=ok
// SIG undefined filt$0(void)

undefined8 `AKPLATFORM::AkSetThreadName'::`1'::filt_0(void)

{
  return 0xffffffff;
}



// FUNCTION 143e2a150 Unwind@143e2a150 body=28 status=ok
// SIG undefined Unwind@143e2a150(void)

void Unwind_143e2a150(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2a170 Unwind@143e2a170 body=12 status=ok
// SIG undefined Unwind@143e2a170(void)

void Unwind_143e2a170(undefined8 param_1,longlong param_2)

{
  FUN_14325cbc0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2a180 Unwind@143e2a180 body=46 status=ok
// SIG undefined Unwind@143e2a180(void)

void Unwind_143e2a180(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            (*(longlong *)(param_2 + 0x58) + 0x48,0x18,3,AK::MemoryMgr::StartProfileThreadUsage);
  return;
}



// FUNCTION 143e2a1b0 Unwind@143e2a1b0 body=49 status=ok
// SIG undefined Unwind@143e2a1b0(void)

void Unwind_143e2a1b0(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            (*(longlong *)(param_2 + 0x58) + 0x90,0x18,3,AK::MemoryMgr::StartProfileThreadUsage);
  return;
}



// FUNCTION 143e2a1f0 Unwind@143e2a1f0 body=28 status=ok
// SIG undefined Unwind@143e2a1f0(void)

void Unwind_143e2a1f0(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e2a210 Unwind@143e2a210 body=12 status=ok
// SIG undefined Unwind@143e2a210(void)

void Unwind_143e2a210(undefined8 param_1,longlong param_2)

{
  FUN_14325cbc0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e2a220 Unwind@143e2a220 body=45 status=ok
// SIG undefined Unwind@143e2a220(void)

void Unwind_143e2a220(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            (*(undefined8 *)(param_2 + 0xd0),0x20,8,AK::MemoryMgr::StartProfileThreadUsage);
  return;
}



// FUNCTION 143e2a250 Unwind@143e2a250 body=31 status=ok
// SIG undefined Unwind@143e2a250(void)

void Unwind_143e2a250(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 143e2a270 Unwind@143e2a270 body=16 status=ok
// SIG undefined Unwind@143e2a270(void)

void Unwind_143e2a270(undefined8 param_1,longlong param_2)

{
  _Mtx_destroy_in_situ(*(longlong *)(param_2 + 0x50) + 0x20);
  return;
}



// FUNCTION 143e2a280 Catch_All@143e2a280 body=50 status=ok
// SIG undefined Catch_All@143e2a280(void)

undefined * Catch_All_143e2a280(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  *(longlong *)(param_2 + 0x68) = lVar1;
  uVar2 = FUN_143263200(*(undefined8 *)(param_2 + 0x60),lVar1 + 1);
  *(undefined8 *)(param_2 + 0x78) = uVar2;
  return &DAT_14326311b;
}



// FUNCTION 143e2a2b3 Catch_All@143e2a2b3 body=153 status=ok
// SIG undefined Catch_All@143e2a2b3(void)

/* WARNING: Removing unreachable block (ram,0x000143e2a2db) */

void Catch_All_143e2a2b3(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = *(ulonglong **)(param_2 + 0x60);
  if (0xf < puVar2[3]) {
    uVar1 = *puVar2;
    if (0xfff < puVar2[3] + 1) {
      if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar1 <= *(ulonglong *)(uVar1 - 8)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar1 = uVar1 - *(ulonglong *)(uVar1 - 8);
      if (uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar1) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete();
  }
  puVar2[3] = 0xf;
  puVar2[2] = 0;
  if (0xf < puVar2[3]) {
    puVar2 = (ulonglong *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a360 Unwind@143e2a360 body=12 status=ok
// SIG undefined Unwind@143e2a360(void)

void Unwind_143e2a360(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x40);
  return;
}



// FUNCTION 143e2a370 Unwind@143e2a370 body=12 status=ok
// SIG undefined Unwind@143e2a370(void)

void Unwind_143e2a370(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x50);
  return;
}



// FUNCTION 143e2a380 Unwind@143e2a380 body=12 status=ok
// SIG undefined Unwind@143e2a380(void)

void Unwind_143e2a380(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x78);
  return;
}



// FUNCTION 143e2a38c Unwind@143e2a38c body=45 status=ok
// SIG undefined Unwind@143e2a38c(void)

void Unwind_143e2a38c(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 143e2a3c0 filt$0 body=37 status=ok
// SIG undefined filt$0(void)

undefined4 `OVR::Thread::SetThreadName'::`1'::filt_0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)*param_1 == 0x406d1388) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143e2a3f0 Unwind@143e2a3f0 body=12 status=ok
// SIG undefined Unwind@143e2a3f0(void)

void Unwind_143e2a3f0(undefined8 param_1,longlong param_2)

{
  FUN_1438f1550(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 143e2a400 Unwind@143e2a400 body=29 status=ok
// SIG undefined Unwind@143e2a400(void)

void Unwind_143e2a400(undefined8 param_1,longlong param_2)

{
  FMemory::operator_delete(*(undefined8 *)(param_2 + 0x28),8);
  return;
}



// FUNCTION 143e2a41d Unwind@143e2a41d body=12 status=ok
// SIG undefined Unwind@143e2a41d(void)

void Unwind_143e2a41d(undefined8 param_1,longlong param_2)

{
  FUN_1438f1550(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 143e2a430 Unwind@143e2a430 body=12 status=ok
// SIG undefined Unwind@143e2a430(void)

void Unwind_143e2a430(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(param_2 + 0x30);
  return;
}



// FUNCTION 143e2a440 Catch_All@143e2a440 body=41 status=ok
// SIG undefined Catch_All@143e2a440(void)

void Catch_All_143e2a440(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a470 Catch_All@143e2a470 body=31 status=ok
// SIG undefined Catch_All@143e2a470(void)

void Catch_All_143e2a470(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a4c0 Catch_All@143e2a4c0 body=41 status=ok
// SIG undefined Catch_All@143e2a4c0(void)

void Catch_All_143e2a4c0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a4f0 Catch_All@143e2a4f0 body=66 status=ok
// SIG undefined Catch_All@143e2a4f0(void)

void Catch_All_143e2a4f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  if (plVar1 != *(longlong **)(param_2 + 0x60)) {
    do {
      FUN_1438f78d0();
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != (longlong *)*(longlong *)(param_2 + 0x60));
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a540 Catch_All@143e2a540 body=22 status=ok
// SIG undefined Catch_All@143e2a540(void)

void Catch_All_143e2a540(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a560 Catch_All@143e2a560 body=22 status=ok
// SIG undefined Catch_All@143e2a560(void)

void Catch_All_143e2a560(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a580 Unwind@143e2a580 body=12 status=ok
// SIG undefined Unwind@143e2a580(void)

void Unwind_143e2a580(undefined8 param_1,longlong param_2)

{
  FUN_1438f3400(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 143e2a58c Catch_All@143e2a58c body=31 status=ok
// SIG undefined Catch_All@143e2a58c(void)

void Catch_All_143e2a58c(void)

{
  FUN_1438f79a0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a5b0 Catch_All@143e2a5b0 body=77 status=ok
// SIG undefined Catch_All@143e2a5b0(void)

void Catch_All_143e2a5b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a600 Unwind@143e2a600 body=19 status=ok
// SIG undefined Unwind@143e2a600(void)

void Unwind_143e2a600(undefined8 param_1,longlong param_2)

{
  FUN_1438f3470(*(longlong *)(param_2 + 0x50) + 0x948);
  return;
}



// FUNCTION 143e2a620 Unwind@143e2a620 body=12 status=ok
// SIG undefined Unwind@143e2a620(void)

void Unwind_143e2a620(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2a62c Unwind@143e2a62c body=16 status=ok
// SIG undefined Unwind@143e2a62c(void)

void Unwind_143e2a62c(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(*(longlong *)(param_2 + 0x50) + 0x10);
  return;
}



// FUNCTION 143e2a640 Unwind@143e2a640 body=12 status=ok
// SIG undefined Unwind@143e2a640(void)

void Unwind_143e2a640(undefined8 param_1,longlong param_2)

{
  FUN_1438f34d0(param_2 + 0x80);
  return;
}



// FUNCTION 143e2a64c Unwind@143e2a64c body=12 status=ok
// SIG undefined Unwind@143e2a64c(void)

void Unwind_143e2a64c(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(param_2 + 0xd0);
  return;
}



// FUNCTION 143e2a658 Unwind@143e2a658 body=12 status=ok
// SIG undefined Unwind@143e2a658(void)

void Unwind_143e2a658(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2a664 Unwind@143e2a664 body=12 status=ok
// SIG undefined Unwind@143e2a664(void)

void Unwind_143e2a664(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 143e2a670 Unwind@143e2a670 body=12 status=ok
// SIG undefined Unwind@143e2a670(void)

void Unwind_143e2a670(undefined8 param_1,longlong param_2)

{
  FUN_14390a6c0(param_2 + 0x90);
  return;
}



// FUNCTION 143e2a680 Unwind@143e2a680 body=12 status=ok
// SIG undefined Unwind@143e2a680(void)

void Unwind_143e2a680(undefined8 param_1,longlong param_2)

{
  FUN_14390a6c0(param_2 + 0x38);
  return;
}



// FUNCTION 143e2a690 Unwind@143e2a690 body=12 status=ok
// SIG undefined Unwind@143e2a690(void)

void Unwind_143e2a690(undefined8 param_1,longlong param_2)

{
  FUN_14390a6c0(param_2 + 0x50);
  return;
}



// FUNCTION 143e2a6a0 Unwind@143e2a6a0 body=12 status=ok
// SIG undefined Unwind@143e2a6a0(void)

void Unwind_143e2a6a0(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2a6ac Unwind@143e2a6ac body=12 status=ok
// SIG undefined Unwind@143e2a6ac(void)

void Unwind_143e2a6ac(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2a6b8 Unwind@143e2a6b8 body=12 status=ok
// SIG undefined Unwind@143e2a6b8(void)

void Unwind_143e2a6b8(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2a6c4 Unwind@143e2a6c4 body=12 status=ok
// SIG undefined Unwind@143e2a6c4(void)

void Unwind_143e2a6c4(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2a6d0 Unwind@143e2a6d0 body=12 status=ok
// SIG undefined Unwind@143e2a6d0(void)

void Unwind_143e2a6d0(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 143e2a6e0 Unwind@143e2a6e0 body=12 status=ok
// SIG undefined Unwind@143e2a6e0(void)

void Unwind_143e2a6e0(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x60);
  return;
}



// FUNCTION 143e2a6f0 Unwind@143e2a6f0 body=12 status=ok
// SIG undefined Unwind@143e2a6f0(void)

void Unwind_143e2a6f0(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(param_2 + 200);
  return;
}



// FUNCTION 143e2a6fc Unwind@143e2a6fc body=12 status=ok
// SIG undefined Unwind@143e2a6fc(void)

void Unwind_143e2a6fc(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x68);
  return;
}



// FUNCTION 143e2a708 Unwind@143e2a708 body=12 status=ok
// SIG undefined Unwind@143e2a708(void)

void Unwind_143e2a708(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x40);
  return;
}



// FUNCTION 143e2a714 Unwind@143e2a714 body=12 status=ok
// SIG undefined Unwind@143e2a714(void)

void Unwind_143e2a714(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(param_2 + 0x58);
  return;
}



// FUNCTION 143e2a720 Unwind@143e2a720 body=12 status=ok
// SIG undefined Unwind@143e2a720(void)

void Unwind_143e2a720(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0xa0);
  return;
}



// FUNCTION 143e2a730 Catch_All@143e2a730 body=41 status=ok
// SIG undefined Catch_All@143e2a730(void)

void Catch_All_143e2a730(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a760 Catch_All@143e2a760 body=31 status=ok
// SIG undefined Catch_All@143e2a760(void)

void Catch_All_143e2a760(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a7b0 Unwind@143e2a7b0 body=12 status=ok
// SIG undefined Unwind@143e2a7b0(void)

void Unwind_143e2a7b0(undefined8 param_1,longlong param_2)

{
  FUN_1438f80d0(param_2 + 0x88);
  return;
}



// FUNCTION 143e2a7bc Unwind@143e2a7bc body=12 status=ok
// SIG undefined Unwind@143e2a7bc(void)

void Unwind_143e2a7bc(undefined8 param_1,longlong param_2)

{
  FUN_1438f80d0(param_2 + 0x68);
  return;
}



// FUNCTION 143e2a7c8 Unwind@143e2a7c8 body=12 status=ok
// SIG undefined Unwind@143e2a7c8(void)

void Unwind_143e2a7c8(undefined8 param_1,longlong param_2)

{
  FUN_1438f80d0(param_2 + 0x48);
  return;
}



// FUNCTION 143e2a7d4 Unwind@143e2a7d4 body=12 status=ok
// SIG undefined Unwind@143e2a7d4(void)

void Unwind_143e2a7d4(undefined8 param_1,longlong param_2)

{
  FUN_1438f80d0(param_2 + 0x28);
  return;
}



// FUNCTION 143e2a7e0 Unwind@143e2a7e0 body=12 status=ok
// SIG undefined Unwind@143e2a7e0(void)

void Unwind_143e2a7e0(undefined8 param_1,longlong param_2)

{
  FUN_1438f80d0(param_2 + 200);
  return;
}



// FUNCTION 143e2a7ec Unwind@143e2a7ec body=12 status=ok
// SIG undefined Unwind@143e2a7ec(void)

void Unwind_143e2a7ec(undefined8 param_1,longlong param_2)

{
  FUN_1438f80d0(param_2 + 0xa8);
  return;
}



// FUNCTION 143e2a800 Catch_All@143e2a800 body=53 status=ok
// SIG undefined Catch_All@143e2a800(void)

undefined * Catch_All_143e2a800(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  *(longlong *)(param_2 + 0x78) = lVar1;
  uVar2 = FUN_1438f86a0(*(undefined8 *)(param_2 + 0x70),lVar1 + 1);
  *(undefined8 *)(param_2 + 0x88) = uVar2;
  return &DAT_1438f85ee;
}



// FUNCTION 143e2a836 Catch_All@143e2a836 body=87 status=ok
// SIG undefined Catch_All@143e2a836(void)

void Catch_All_143e2a836(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x70);
  if (7 < (ulonglong)puVar2[3]) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))();
  }
  puVar2[3] = 7;
  puVar2[2] = 0;
  if (7 < (ulonglong)puVar2[3]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined2 *)puVar2 = 0;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a890 Catch_All@143e2a890 body=22 status=ok
// SIG undefined Catch_All@143e2a890(void)

void Catch_All_143e2a890(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a8b0 Unwind@143e2a8b0 body=16 status=ok
// SIG undefined Unwind@143e2a8b0(void)

void Unwind_143e2a8b0(undefined8 param_1,longlong param_2)

{
  FUN_1438f9940(*(longlong *)(param_2 + 0x40) + 8);
  return;
}



// FUNCTION 143e2a8c0 Unwind@143e2a8c0 body=16 status=ok
// SIG undefined Unwind@143e2a8c0(void)

void Unwind_143e2a8c0(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(longlong *)(param_2 + 0x40) + 0x38);
  return;
}



// FUNCTION 143e2a8d0 Unwind@143e2a8d0 body=12 status=ok
// SIG undefined Unwind@143e2a8d0(void)

void Unwind_143e2a8d0(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 143e2a8e0 Unwind@143e2a8e0 body=12 status=ok
// SIG undefined Unwind@143e2a8e0(void)

void Unwind_143e2a8e0(undefined8 param_1,longlong param_2)

{
  FUN_14390a6c0(param_2 + 0x128);
  return;
}



// FUNCTION 143e2a8ec Unwind@143e2a8ec body=12 status=ok
// SIG undefined Unwind@143e2a8ec(void)

void Unwind_143e2a8ec(undefined8 param_1,longlong param_2)

{
  FUN_14390a6c0(param_2 + 0xb0);
  return;
}



// FUNCTION 143e2a900 Unwind@143e2a900 body=12 status=ok
// SIG undefined Unwind@143e2a900(void)

void Unwind_143e2a900(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x50);
  return;
}



// FUNCTION 143e2a910 Unwind@143e2a910 body=12 status=ok
// SIG undefined Unwind@143e2a910(void)

void Unwind_143e2a910(undefined8 param_1,longlong param_2)

{
  FUN_1438f9940(param_2 + 0x28);
  return;
}



// FUNCTION 143e2a920 Catch_All@143e2a920 body=41 status=ok
// SIG undefined Catch_All@143e2a920(void)

void Catch_All_143e2a920(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a950 Catch_All@143e2a950 body=22 status=ok
// SIG undefined Catch_All@143e2a950(void)

void Catch_All_143e2a950(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a970 Catch_All@143e2a970 body=22 status=ok
// SIG undefined Catch_All@143e2a970(void)

void Catch_All_143e2a970(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2a990 Unwind@143e2a990 body=19 status=ok
// SIG undefined Unwind@143e2a990(void)

void Unwind_143e2a990(undefined8 param_1,longlong param_2)

{
  FUN_1438fc330(*(longlong *)(param_2 + 0x40) + 0xa0);
  return;
}



// FUNCTION 143e2a9b0 Catch_All@143e2a9b0 body=77 status=ok
// SIG undefined Catch_All@143e2a9b0(void)

void Catch_All_143e2a9b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2aa00 Catch_All@143e2aa00 body=78 status=ok
// SIG undefined Catch_All@143e2aa00(void)

void Catch_All_143e2aa00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2aa50 Unwind@143e2aa50 body=12 status=ok
// SIG undefined Unwind@143e2aa50(void)

void Unwind_143e2aa50(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 143e2aa60 catch$37 body=31 status=ok
// SIG undefined catch$37(void)

void `std::
     _Tree_comp_alloc<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
     ::
     _Buynode<std::piecewise_construct_t_const_&___ptr64,std::tuple<unsigned___int64_&&___ptr64>,std::tuple<>_>'
     ::`1'::catch_37(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2aab0 Catch_All@143e2aab0 body=31 status=ok
// SIG undefined Catch_All@143e2aab0(void)

void Catch_All_143e2aab0(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2aae0 Unwind@143e2aae0 body=12 status=ok
// SIG undefined Unwind@143e2aae0(void)

void Unwind_143e2aae0(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x38);
  return;
}



// FUNCTION 143e2aaf0 Catch_All@143e2aaf0 body=31 status=ok
// SIG undefined Catch_All@143e2aaf0(void)

void Catch_All_143e2aaf0(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ab50 Catch_All@143e2ab50 body=22 status=ok
// SIG undefined Catch_All@143e2ab50(void)

void Catch_All_143e2ab50(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ab70 Catch_All@143e2ab70 body=22 status=ok
// SIG undefined Catch_All@143e2ab70(void)

void Catch_All_143e2ab70(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ab90 Catch_All@143e2ab90 body=44 status=ok
// SIG undefined Catch_All@143e2ab90(void)

void Catch_All_143e2ab90(undefined8 param_1,longlong param_2)

{
  FUN_1438fe400(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40),
                *(undefined8 *)(param_2 + 0x50),*(undefined1 *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2abc0 Catch_All@143e2abc0 body=22 status=ok
// SIG undefined Catch_All@143e2abc0(void)

void Catch_All_143e2abc0(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2abe0 Unwind@143e2abe0 body=12 status=ok
// SIG undefined Unwind@143e2abe0(void)

void Unwind_143e2abe0(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2abf0 Unwind@143e2abf0 body=16 status=ok
// SIG undefined Unwind@143e2abf0(void)

void Unwind_143e2abf0(undefined8 param_1,longlong param_2)

{
  FUN_1438ff1e0(*(longlong *)(param_2 + 0x40) + 0x38);
  return;
}



// FUNCTION 143e2ac00 Unwind@143e2ac00 body=16 status=ok
// SIG undefined Unwind@143e2ac00(void)

void Unwind_143e2ac00(undefined8 param_1,longlong param_2)

{
  FUN_1438ff240(*(longlong *)(param_2 + 0x40) + 0x28);
  return;
}



// FUNCTION 143e2ac10 Catch_All@143e2ac10 body=77 status=ok
// SIG undefined Catch_All@143e2ac10(void)

void Catch_All_143e2ac10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ac60 Catch_All@143e2ac60 body=77 status=ok
// SIG undefined Catch_All@143e2ac60(void)

void Catch_All_143e2ac60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2acb0 Catch_All@143e2acb0 body=97 status=ok
// SIG undefined Catch_All@143e2acb0(void)

void Catch_All_143e2acb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    FUN_1438fe400(*plVar1,plVar1[1],plVar1,*(undefined1 *)(param_2 + 0x40));
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ad20 Unwind@143e2ad20 body=12 status=ok
// SIG undefined Unwind@143e2ad20(void)

void Unwind_143e2ad20(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 143e2ad2c Unwind@143e2ad2c body=12 status=ok
// SIG undefined Unwind@143e2ad2c(void)

void Unwind_143e2ad2c(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 143e2ad38 Unwind@143e2ad38 body=12 status=ok
// SIG undefined Unwind@143e2ad38(void)

void Unwind_143e2ad38(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 143e2ad44 Unwind@143e2ad44 body=12 status=ok
// SIG undefined Unwind@143e2ad44(void)

void Unwind_143e2ad44(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 143e2ad50 Unwind@143e2ad50 body=12 status=ok
// SIG undefined Unwind@143e2ad50(void)

void Unwind_143e2ad50(undefined8 param_1,longlong param_2)

{
  FUN_1438f9a80(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 143e2ad5c Unwind@143e2ad5c body=12 status=ok
// SIG undefined Unwind@143e2ad5c(void)

void Unwind_143e2ad5c(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 143e2ad70 Unwind@143e2ad70 body=16 status=ok
// SIG undefined Unwind@143e2ad70(void)

void Unwind_143e2ad70(undefined8 param_1,longlong param_2)

{
  FUN_1438ff420(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}



// FUNCTION 143e2ad80 Unwind@143e2ad80 body=16 status=ok
// SIG undefined Unwind@143e2ad80(void)

void Unwind_143e2ad80(undefined8 param_1,longlong param_2)

{
  FUN_1438ff3d0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}



// FUNCTION 143e2ad90 Unwind@143e2ad90 body=16 status=ok
// SIG undefined Unwind@143e2ad90(void)

void Unwind_143e2ad90(undefined8 param_1,longlong param_2)

{
  FUN_1438ff3d0(*(longlong *)(param_2 + 0x40) + 0x28);
  return;
}



// FUNCTION 143e2ada0 Unwind@143e2ada0 body=16 status=ok
// SIG undefined Unwind@143e2ada0(void)

void Unwind_143e2ada0(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(*(longlong *)(param_2 + 0x40) + 0x38);
  return;
}



// FUNCTION 143e2adb0 Unwind@143e2adb0 body=16 status=ok
// SIG undefined Unwind@143e2adb0(void)

void Unwind_143e2adb0(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(longlong *)(param_2 + 0x60) + 0x30);
  return;
}



// FUNCTION 143e2adc0 Unwind@143e2adc0 body=16 status=ok
// SIG undefined Unwind@143e2adc0(void)

void Unwind_143e2adc0(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(longlong *)(param_2 + 0x60) + 0x48);
  return;
}



// FUNCTION 143e2add0 Unwind@143e2add0 body=16 status=ok
// SIG undefined Unwind@143e2add0(void)

void Unwind_143e2add0(undefined8 param_1,longlong param_2)

{
  FUN_1438ff3c0(*(longlong *)(param_2 + 0x80) + 0x10);
  return;
}



// FUNCTION 143e2ade0 Unwind@143e2ade0 body=12 status=ok
// SIG undefined Unwind@143e2ade0(void)

void Unwind_143e2ade0(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2adf0 Catch_All@143e2adf0 body=41 status=ok
// SIG undefined Catch_All@143e2adf0(void)

void Catch_All_143e2adf0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ae20 Catch_All@143e2ae20 body=31 status=ok
// SIG undefined Catch_All@143e2ae20(void)

void Catch_All_143e2ae20(void)

{
  FUN_143903b00();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2ae6c Unwind@143e2ae6c body=12 status=ok
// SIG undefined Unwind@143e2ae6c(void)

void Unwind_143e2ae6c(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 200));
  return;
}



// FUNCTION 143e2ae80 Unwind@143e2ae80 body=12 status=ok
// SIG undefined Unwind@143e2ae80(void)

void Unwind_143e2ae80(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 143e2ae8c Unwind@143e2ae8c body=12 status=ok
// SIG undefined Unwind@143e2ae8c(void)

void Unwind_143e2ae8c(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 143e2ae98 Unwind@143e2ae98 body=16 status=ok
// SIG undefined Unwind@143e2ae98(void)

void Unwind_143e2ae98(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(longlong *)(param_2 + 0x60) + 8);
  return;
}



// FUNCTION 143e2aeb0 Unwind@143e2aeb0 body=12 status=ok
// SIG undefined Unwind@143e2aeb0(void)

void Unwind_143e2aeb0(undefined8 param_1,longlong param_2)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(param_2 + 0x70);
  return;
}



// FUNCTION 143e2aebc Unwind@143e2aebc body=47 status=ok
// SIG undefined Unwind@143e2aebc(void)

void Unwind_143e2aebc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x88) & 1) != 0) {
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) & 0xfffffffe;
    FRgbaInputFile::~FRgbaInputFile(*(undefined8 *)(param_2 + 0x380));
  }
  return;
}



// FUNCTION 143e2aeeb Unwind@143e2aeeb body=12 status=ok
// SIG undefined Unwind@143e2aeeb(void)

void Unwind_143e2aeeb(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x178);
  return;
}



// FUNCTION 143e2aef7 Unwind@143e2aef7 body=12 status=ok
// SIG undefined Unwind@143e2aef7(void)

void Unwind_143e2aef7(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x160);
  return;
}



// FUNCTION 143e2af03 Unwind@143e2af03 body=12 status=ok
// SIG undefined Unwind@143e2af03(void)

void Unwind_143e2af03(undefined8 param_1,longlong param_2)

{
  FUN_143904220(param_2 + 400);
  return;
}



// FUNCTION 143e2af0f Unwind@143e2af0f body=12 status=ok
// SIG undefined Unwind@143e2af0f(void)

void Unwind_143e2af0f(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 0xb8));
  return;
}



// FUNCTION 143e2af20 Unwind@143e2af20 body=12 status=ok
// SIG undefined Unwind@143e2af20(void)

void Unwind_143e2af20(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 0xe0));
  return;
}



// FUNCTION 143e2af2c Unwind@143e2af2c body=12 status=ok
// SIG undefined Unwind@143e2af2c(void)

void Unwind_143e2af2c(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 0xd8));
  return;
}



// FUNCTION 143e2af38 Unwind@143e2af38 body=41 status=ok
// SIG undefined Unwind@143e2af38(void)

void Unwind_143e2af38(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FRgbaInputFile::~FRgbaInputFile(*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}



// FUNCTION 143e2af61 Unwind@143e2af61 body=16 status=ok
// SIG undefined Unwind@143e2af61(void)

void Unwind_143e2af61(undefined8 param_1,longlong param_2)

{
  FUN_143904220(param_2 + 0x68);
  return;
}



// FUNCTION 143e2af71 Unwind@143e2af71 body=12 status=ok
// SIG undefined Unwind@143e2af71(void)

void Unwind_143e2af71(undefined8 param_1,longlong param_2)

{
  FUN_143904260(param_2 + 0x60);
  return;
}



// FUNCTION 143e2af80 catch$48 body=39 status=ok
// SIG undefined catch$48(void)

void `std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Reallocate'::`1'::catch_48
               (undefined8 param_1,longlong param_2)

{
  std::_Wrap_alloc<std::allocator<char>_>::deallocate
            (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x60),
             *(undefined8 *)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  ::_guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2afb0 Catch_All@143e2afb0 body=31 status=ok
// SIG undefined Catch_All@143e2afb0(void)

void Catch_All_143e2afb0(void)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2afdc Unwind@143e2afdc body=12 status=ok
// SIG undefined Unwind@143e2afdc(void)

void Unwind_143e2afdc(undefined8 param_1,longlong param_2)

{
  FUN_14074ea20(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 143e2aff0 Unwind@143e2aff0 body=28 status=ok
// SIG undefined Unwind@143e2aff0(void)

void Unwind_143e2aff0(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 143e2b00c Unwind@143e2b00c body=12 status=ok
// SIG undefined Unwind@143e2b00c(void)

void Unwind_143e2b00c(undefined8 param_1,longlong param_2)

{
  FUN_1439094e0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 143e2b018 Catch_All@143e2b018 body=31 status=ok
// SIG undefined Catch_All@143e2b018(void)

void Catch_All_143e2b018(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b040 Unwind@143e2b040 body=28 status=ok
// SIG undefined Unwind@143e2b040(void)

void Unwind_143e2b040(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 143e2b05c Unwind@143e2b05c body=12 status=ok
// SIG undefined Unwind@143e2b05c(void)

void Unwind_143e2b05c(undefined8 param_1,longlong param_2)

{
  FUN_1439094e0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 143e2b068 Catch_All@143e2b068 body=31 status=ok
// SIG undefined Catch_All@143e2b068(void)

void Catch_All_143e2b068(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b090 Unwind@143e2b090 body=12 status=ok
// SIG undefined Unwind@143e2b090(void)

void Unwind_143e2b090(undefined8 param_1,longlong param_2)

{
  FUN_1438f36a0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 143e2b0a0 Unwind@143e2b0a0 body=16 status=ok
// SIG undefined Unwind@143e2b0a0(void)

void Unwind_143e2b0a0(undefined8 param_1,longlong param_2)

{
  FUN_1439094f0(*(longlong *)(param_2 + 0x90) + 0x28);
  return;
}



// FUNCTION 143e2b0b0 Unwind@143e2b0b0 body=16 status=ok
// SIG undefined Unwind@143e2b0b0(void)

void Unwind_143e2b0b0(undefined8 param_1,longlong param_2)

{
  FUN_143909540(*(longlong *)(param_2 + 0x90) + 0x30);
  return;
}



// FUNCTION 143e2b0c0 Unwind@143e2b0c0 body=16 status=ok
// SIG undefined Unwind@143e2b0c0(void)

void Unwind_143e2b0c0(undefined8 param_1,longlong param_2)

{
  FUN_143909530(*(longlong *)(param_2 + 0x90) + 0x38);
  return;
}



// FUNCTION 143e2b0d0 Unwind@143e2b0d0 body=16 status=ok
// SIG undefined Unwind@143e2b0d0(void)

void Unwind_143e2b0d0(undefined8 param_1,longlong param_2)

{
  FUN_1438ff3d0(*(longlong *)(param_2 + 0x90) + 0x40);
  return;
}



// FUNCTION 143e2b0e0 Unwind@143e2b0e0 body=16 status=ok
// SIG undefined Unwind@143e2b0e0(void)

void Unwind_143e2b0e0(undefined8 param_1,longlong param_2)

{
  _Mtx_destroy_in_situ(*(longlong *)(param_2 + 0x90) + 0x50);
  return;
}



// FUNCTION 143e2b0f0 Unwind@143e2b0f0 body=19 status=ok
// SIG undefined Unwind@143e2b0f0(void)

void Unwind_143e2b0f0(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(*(longlong *)(param_2 + 0x90) + 0xa0);
  return;
}



// FUNCTION 143e2b110 Unwind@143e2b110 body=12 status=ok
// SIG undefined Unwind@143e2b110(void)

void Unwind_143e2b110(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(param_2 + 0x38);
  return;
}



// FUNCTION 143e2b11c Unwind@143e2b11c body=12 status=ok
// SIG undefined Unwind@143e2b11c(void)

void Unwind_143e2b11c(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x70);
  return;
}



// FUNCTION 143e2b130 Unwind@143e2b130 body=12 status=ok
// SIG undefined Unwind@143e2b130(void)

void Unwind_143e2b130(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x48);
  return;
}



// FUNCTION 143e2b13c Unwind@143e2b13c body=12 status=ok
// SIG undefined Unwind@143e2b13c(void)

void Unwind_143e2b13c(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(param_2 + 0x28);
  return;
}



// FUNCTION 143e2b150 Unwind@143e2b150 body=12 status=ok
// SIG undefined Unwind@143e2b150(void)

void Unwind_143e2b150(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(*(undefined8 *)(param_2 + 0x118));
  return;
}



// FUNCTION 143e2b15c Unwind@143e2b15c body=12 status=ok
// SIG undefined Unwind@143e2b15c(void)

void Unwind_143e2b15c(undefined8 param_1,longlong param_2)

{
  FUN_1439094a0(param_2 + 0x40);
  return;
}



// FUNCTION 143e2b168 Unwind@143e2b168 body=12 status=ok
// SIG undefined Unwind@143e2b168(void)

void Unwind_143e2b168(undefined8 param_1,longlong param_2)

{
  FUN_1438ff3d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 143e2b180 Unwind@143e2b180 body=12 status=ok
// SIG undefined Unwind@143e2b180(void)

void Unwind_143e2b180(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 143e2b18c Unwind@143e2b18c body=12 status=ok
// SIG undefined Unwind@143e2b18c(void)

void Unwind_143e2b18c(undefined8 param_1,longlong param_2)

{
  FUN_143909450(param_2 + 0x30);
  return;
}



// FUNCTION 143e2b198 Unwind@143e2b198 body=12 status=ok
// SIG undefined Unwind@143e2b198(void)

void Unwind_143e2b198(undefined8 param_1,longlong param_2)

{
  FUN_1438ff3d0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 143e2b1b0 Unwind@143e2b1b0 body=28 status=ok
// SIG undefined Unwind@143e2b1b0(void)

void Unwind_143e2b1b0(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e2b1cc Unwind@143e2b1cc body=12 status=ok
// SIG undefined Unwind@143e2b1cc(void)

void Unwind_143e2b1cc(undefined8 param_1,longlong param_2)

{
  FUN_1439094e0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143e2b1e0 Unwind@143e2b1e0 body=28 status=ok
// SIG undefined Unwind@143e2b1e0(void)

void Unwind_143e2b1e0(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2b1fc Unwind@143e2b1fc body=12 status=ok
// SIG undefined Unwind@143e2b1fc(void)

void Unwind_143e2b1fc(undefined8 param_1,longlong param_2)

{
  FUN_1439094e0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 143e2b210 Catch_All@143e2b210 body=22 status=ok
// SIG undefined Catch_All@143e2b210(void)

void Catch_All_143e2b210(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b230 Unwind@143e2b230 body=16 status=ok
// SIG undefined Unwind@143e2b230(void)

void Unwind_143e2b230(undefined8 param_1,longlong param_2)

{
  FUN_14390ac60(*(longlong *)(param_2 + 0x40) + 0x58);
  return;
}



// FUNCTION 143e2b240 Catch_All@143e2b240 body=77 status=ok
// SIG undefined Catch_All@143e2b240(void)

void Catch_All_143e2b240(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b290 Unwind@143e2b290 body=12 status=ok
// SIG undefined Unwind@143e2b290(void)

void Unwind_143e2b290(undefined8 param_1,longlong param_2)

{
  _Mtx_destroy_in_situ(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 143e2b2a0 Unwind@143e2b2a0 body=12 status=ok
// SIG undefined Unwind@143e2b2a0(void)

void Unwind_143e2b2a0(undefined8 param_1,longlong param_2)

{
  FUN_14390ad60(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 143e2b2b0 Unwind@143e2b2b0 body=12 status=ok
// SIG undefined Unwind@143e2b2b0(void)

void Unwind_143e2b2b0(undefined8 param_1,longlong param_2)

{
  FUN_143904220(param_2 + 0x38);
  return;
}



// FUNCTION 143e2b2c0 Unwind@143e2b2c0 body=12 status=ok
// SIG undefined Unwind@143e2b2c0(void)

void Unwind_143e2b2c0(undefined8 param_1,longlong param_2)

{
  FUN_14390cda0(param_2 + 0x28);
  return;
}



// FUNCTION 143e2b2cc Unwind@143e2b2cc body=12 status=ok
// SIG undefined Unwind@143e2b2cc(void)

void Unwind_143e2b2cc(undefined8 param_1,longlong param_2)

{
  FUN_14390cdc0(param_2 + 0x38);
  return;
}



// FUNCTION 143e2b2d8 Unwind@143e2b2d8 body=12 status=ok
// SIG undefined Unwind@143e2b2d8(void)

void Unwind_143e2b2d8(undefined8 param_1,longlong param_2)

{
  FUN_14390c970(param_2 + 0x48);
  return;
}



// FUNCTION 143e2b2f0 Catch_All@143e2b2f0 body=22 status=ok
// SIG undefined Catch_All@143e2b2f0(void)

void Catch_All_143e2b2f0(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b310 Unwind@143e2b310 body=28 status=ok
// SIG undefined Unwind@143e2b310(void)

void Unwind_143e2b310(undefined8 param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 143e2b32c Catch_All@143e2b32c body=39 status=ok
// SIG undefined Catch_All@143e2b32c(void)

void Catch_All_143e2b32c(undefined8 param_1,longlong param_2)

{
  FUN_14390bc70(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40),
                *(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b360 Catch_All@143e2b360 body=22 status=ok
// SIG undefined Catch_All@143e2b360(void)

void Catch_All_143e2b360(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b380 Unwind@143e2b380 body=16 status=ok
// SIG undefined Unwind@143e2b380(void)

void Unwind_143e2b380(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(*(longlong *)(param_2 + 0x40) + 8);
  return;
}



// FUNCTION 143e2b390 Unwind@143e2b390 body=16 status=ok
// SIG undefined Unwind@143e2b390(void)

void Unwind_143e2b390(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}



// FUNCTION 143e2b3a0 Catch_All@143e2b3a0 body=77 status=ok
// SIG undefined Catch_All@143e2b3a0(void)

void Catch_All_143e2b3a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b3f0 Catch_All@143e2b3f0 body=92 status=ok
// SIG undefined Catch_All@143e2b3f0(void)

void Catch_All_143e2b3f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (*plVar1 != 0) {
    FUN_14390bc70(*plVar1,plVar1[1],plVar1);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b450 Unwind@143e2b450 body=12 status=ok
// SIG undefined Unwind@143e2b450(void)

void Unwind_143e2b450(undefined8 param_1,longlong param_2)

{
  FUN_14390ca50(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 143e2b45c Unwind@143e2b45c body=16 status=ok
// SIG undefined Unwind@143e2b45c(void)

void Unwind_143e2b45c(undefined8 param_1,longlong param_2)

{
  FUN_143909530(*(longlong *)(param_2 + 0x70) + 0x28);
  return;
}



// FUNCTION 143e2b46c Unwind@143e2b46c body=16 status=ok
// SIG undefined Unwind@143e2b46c(void)

void Unwind_143e2b46c(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(*(longlong *)(param_2 + 0x70) + 0x38);
  return;
}



// FUNCTION 143e2b47c Unwind@143e2b47c body=16 status=ok
// SIG undefined Unwind@143e2b47c(void)

void Unwind_143e2b47c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_14390c900(*(longlong *)(param_2 + 0x70) + 0x48);
  return;
}



// FUNCTION 143e2b48c Unwind@143e2b48c body=19 status=ok
// SIG undefined Unwind@143e2b48c(void)

void Unwind_143e2b48c(undefined8 param_1,longlong param_2)

{
  std::thread::~thread(*(longlong *)(param_2 + 0x70) + 0x90);
  return;
}



// FUNCTION 143e2b49f Unwind@143e2b49f body=19 status=ok
// SIG undefined Unwind@143e2b49f(void)

void Unwind_143e2b49f(undefined8 param_1,longlong param_2)

{
  _Mtx_destroy_in_situ(*(longlong *)(param_2 + 0x70) + 0xa0);
  return;
}



// FUNCTION 143e2b4b2 Unwind@143e2b4b2 body=19 status=ok
// SIG undefined Unwind@143e2b4b2(void)

void Unwind_143e2b4b2(undefined8 param_1,longlong param_2)

{
  FUN_1438ff3d0(*(longlong *)(param_2 + 0x70) + 0xf0);
  return;
}



// FUNCTION 143e2b4d0 Unwind@143e2b4d0 body=16 status=ok
// SIG undefined Unwind@143e2b4d0(void)

void Unwind_143e2b4d0(undefined8 param_1,longlong param_2)

{
  FRgbaInputFile::~FRgbaInputFile(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}



// FUNCTION 143e2b4e0 Unwind@143e2b4e0 body=16 status=ok
// SIG undefined Unwind@143e2b4e0(void)

void Unwind_143e2b4e0(undefined8 param_1,longlong param_2)

{
  FUN_1438ff420(*(longlong *)(param_2 + 0x40) + 0x28);
  return;
}



// FUNCTION 143e2b4f0 Unwind@143e2b4f0 body=12 status=ok
// SIG undefined Unwind@143e2b4f0(void)

void Unwind_143e2b4f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x40);
  return;
}



// FUNCTION 143e2b500 Unwind@143e2b500 body=12 status=ok
// SIG undefined Unwind@143e2b500(void)

void Unwind_143e2b500(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x88);
  return;
}



// FUNCTION 143e2b510 Unwind@143e2b510 body=12 status=ok
// SIG undefined Unwind@143e2b510(void)

void Unwind_143e2b510(undefined8 param_1,longlong param_2)

{
  FUN_1438f3430(*(undefined8 *)(param_2 + 0x88));
  return;
}



// FUNCTION 143e2b51c Unwind@143e2b51c body=12 status=ok
// SIG undefined Unwind@143e2b51c(void)

void Unwind_143e2b51c(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x38);
  return;
}



// FUNCTION 143e2b528 Unwind@143e2b528 body=12 status=ok
// SIG undefined Unwind@143e2b528(void)

void Unwind_143e2b528(undefined8 param_1,longlong param_2)

{
  FRgbaInputFile::~FRgbaInputFile(param_2 + 0x90);
  return;
}



// FUNCTION 143e2b534 Unwind@143e2b534 body=12 status=ok
// SIG undefined Unwind@143e2b534(void)

void Unwind_143e2b534(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x98);
  return;
}



// FUNCTION 143e2b540 Unwind@143e2b540 body=12 status=ok
// SIG undefined Unwind@143e2b540(void)

void Unwind_143e2b540(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x28);
  return;
}



// FUNCTION 143e2b54c Unwind@143e2b54c body=12 status=ok
// SIG undefined Unwind@143e2b54c(void)

void Unwind_143e2b54c(undefined8 param_1,longlong param_2)

{
  FUN_14390ca20(param_2 + 0x68);
  return;
}



// FUNCTION 143e2b560 Unwind@143e2b560 body=12 status=ok
// SIG undefined Unwind@143e2b560(void)

void Unwind_143e2b560(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 143e2b56c Unwind@143e2b56c body=12 status=ok
// SIG undefined Unwind@143e2b56c(void)

void Unwind_143e2b56c(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x28);
  return;
}



// FUNCTION 143e2b580 Catch_All@143e2b580 body=41 status=ok
// SIG undefined Catch_All@143e2b580(void)

void Catch_All_143e2b580(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b5d0 Unwind@143e2b5d0 body=12 status=ok
// SIG undefined Unwind@143e2b5d0(void)

void Unwind_143e2b5d0(undefined8 param_1,longlong param_2)

{
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>(param_2 + 0x28);
  return;
}



// FUNCTION 143e2b5e0 Unwind@143e2b5e0 body=12 status=ok
// SIG undefined Unwind@143e2b5e0(void)

void Unwind_143e2b5e0(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x30);
  return;
}



// FUNCTION 143e2b5ec Unwind@143e2b5ec body=12 status=ok
// SIG undefined Unwind@143e2b5ec(void)

void Unwind_143e2b5ec(undefined8 param_1,longlong param_2)

{
  FUN_1438f3510(param_2 + 0x70);
  return;
}



// FUNCTION 143e2b5f8 Unwind@143e2b5f8 body=12 status=ok
// SIG undefined Unwind@143e2b5f8(void)

void Unwind_143e2b5f8(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0x90);
  return;
}



// FUNCTION 143e2b604 Unwind@143e2b604 body=12 status=ok
// SIG undefined Unwind@143e2b604(void)

void Unwind_143e2b604(undefined8 param_1,longlong param_2)

{
  FRgbaInputFile::~FRgbaInputFile(param_2 + 0x48);
  return;
}



// FUNCTION 143e2b610 Unwind@143e2b610 body=12 status=ok
// SIG undefined Unwind@143e2b610(void)

void Unwind_143e2b610(undefined8 param_1,longlong param_2)

{
  FUN_1432652f0(param_2 + 0xf8);
  return;
}



// FUNCTION 143e2b620 Unwind@143e2b620 body=12 status=ok
// SIG undefined Unwind@143e2b620(void)

void Unwind_143e2b620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 143e2b62c Unwind@143e2b62c body=12 status=ok
// SIG undefined Unwind@143e2b62c(void)

void Unwind_143e2b62c(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (param_2 + 0x38);
  return;
}



// FUNCTION 143e2b640 Catch_All@143e2b640 body=41 status=ok
// SIG undefined Catch_All@143e2b640(void)

void Catch_All_143e2b640(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b670 Catch_All@143e2b670 body=31 status=ok
// SIG undefined Catch_All@143e2b670(void)

void Catch_All_143e2b670(void)

{
  FMemory::operator_delete();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b6c0 Catch_All@143e2b6c0 body=35 status=ok
// SIG undefined Catch_All@143e2b6c0(void)

void Catch_All_143e2b6c0(void)

{
  FUN_1439159e0();
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b6f0 Catch_All@143e2b6f0 body=22 status=ok
// SIG undefined Catch_All@143e2b6f0(void)

void Catch_All_143e2b6f0(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b710 Catch_All@143e2b710 body=22 status=ok
// SIG undefined Catch_All@143e2b710(void)

void Catch_All_143e2b710(void)

{
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 143e2b730 Unwind@143e2b730 body=16 status=ok
// SIG undefined Unwind@143e2b730(void)

void Unwind_143e2b730(undefined8 param_1,longlong param_2)

{
  FUN_143914fb0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}


