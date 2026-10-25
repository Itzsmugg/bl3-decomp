// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14092cd00 operator= body=109 status=ok
// SIG undefined operator=(void)

undefined1 * S24::operator=(undefined1 *param_1,undefined4 *param_2)

{
  *param_1 = (char)*param_2;
  param_1[1] = (char)((uint)*param_2 >> 8);
  param_1[2] = (char)((uint)*param_2 >> 0x10);
  return param_1;
}



// FUNCTION 14092cd70 operator[] body=104 status=ok
// SIG undefined operator[](void)

longlong std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                   (undefined8 *param_1,longlong param_2)

{
  undefined8 *local_18;
  
  local_18 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    local_18 = (undefined8 *)*param_1;
  }
  return (longlong)local_18 + param_2;
}



// FUNCTION 14092cdd8 FUN_14092cdd8 body=12 status=ok
// SIG undefined FUN_14092cdd8(void)

void FUN_14092cdd8(longlong param_1)

{
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
  _scalar_deleting_destructor_(param_1 - *(int *)(param_1 + -4));
  return;
}



// FUNCTION 14092cdf0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>,IModuleInterface_*___cdecl(void)>
::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14092ce30 `scalar_deleting_destructor' body=119 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

basic_ios<char,std::char_traits<char>_> *
std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_(basic_ios<char,std::char_traits<char>_> *param_1,uint param_2)

{
  ~basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -0x88,0xe8);
  }
  return param_1 + -0x88;
}



// FUNCTION 14092ceb0 `scalar_deleting_destructor' body=85 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

basic_streambuf<char,std::char_traits<char>_> *
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_(basic_streambuf<char,std::char_traits<char>_> *param_1,uint param_2)

{
  *(undefined ***)param_1 = vftable;
  _Tidy(param_1);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14092cf10 FUN_14092cf10 body=64 status=ok
// SIG undefined FUN_14092cf10(void)

undefined8 * FUN_14092cf10(undefined8 *param_1,uint param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14092cf50 `scalar_deleting_destructor' body=59 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 Audio::FAudioCaptureSynth::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~FAudioCaptureSynth(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14092cf90 FUN_14092cf90 body=64 status=ok
// SIG undefined FUN_14092cf90(void)

undefined8 * FUN_14092cf90(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__purecall_144162328;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14092cfd0 `scalar_deleting_destructor' body=59 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 RtApi::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~RtApi(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 14092d010 `scalar_deleting_destructor' body=59 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 RtApiDs::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~RtApiDs(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a8);
  }
  return param_1;
}



// FUNCTION 14092d050 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * RtAudioError::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441622f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14092d090 FUN_14092d090 body=97 status=ok
// SIG undefined FUN_14092d090(void)

longlong FUN_14092d090(longlong param_1,uint param_2)

{
  FUN_140591050(param_1 + 0x6c8);
  Audio::FAudioCaptureSynth::~FAudioCaptureSynth(param_1 + 0x658);
  FUN_1404c01f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x700);
  }
  return param_1;
}



// FUNCTION 14092d100 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * stdext::exception::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1441622f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14092d140 AbortCapturing body=48 status=ok
// SIG undefined AbortCapturing(void)

void Audio::FAudioCaptureSynth::AbortCapturing(longlong param_1)

{
  FAudioCapture::AbortStream(param_1 + 0x28);
  FAudioCapture::CloseStream(param_1 + 0x28);
  return;
}



// FUNCTION 14092d170 AbortStream body=79 status=ok
// SIG undefined AbortStream(void)

undefined8 Audio::FAudioCapture::AbortStream(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FAudioCaptureImpl::AbortStream(*param_1);
  }
  return uVar1;
}



// FUNCTION 14092d1c0 AbortStream body=97 status=ok
// SIG undefined AbortStream(void)

undefined8 Audio::FAudioCaptureImpl::AbortStream(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 300) != -0x32) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(undefined8 *)(param_1 + 0x10));
  }
  return 1;
}



// FUNCTION 14092d230 Allocate body=227 status=ok
// SIG undefined Allocate(void)

longlong FDelegateBase::Allocate(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *local_20;
  
  if ((int)param_1[1] == 0) {
    local_20 = (longlong *)0x0;
  }
  else {
    local_20 = (longlong *)*param_1;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x28))(local_20,0);
  }
  iVar1 = (int)(param_2 + 0xf + (param_2 + 0xf >> 0x1f & 0xfU)) >> 4;
  if ((int)param_1[1] != iVar1) {
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1 * 0x10,0);
      *param_1 = lVar2;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return *param_1;
}



// FUNCTION 14092d320 FUN_14092d320 body=78 status=ok
// SIG undefined FUN_14092d320(void)

/* WARNING: Removing unreachable block (ram,0x00014092d346) */

void FUN_14092d320(longlong param_1)

{
  FUN_1423850d0(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  UNLOCK();
  FUN_142a95090(param_1);
  return;
}



// FUNCTION 14092d370 CloseStream body=79 status=ok
// SIG undefined CloseStream(void)

undefined8 Audio::FAudioCapture::CloseStream(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FAudioCaptureImpl::CloseStream(*param_1);
  }
  return uVar1;
}



// FUNCTION 14092d3c0 CloseStream body=97 status=ok
// SIG undefined CloseStream(void)

undefined8 Audio::FAudioCaptureImpl::CloseStream(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 300) != -0x32) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))(*(undefined8 *)(param_1 + 0x10));
  }
  return 1;
}



// FUNCTION 14092d430 CreateCopy body=182 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>,IModuleInterface_*___cdecl(void)>
     ::CreateCopy(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FDelegateBase::Allocate(param_2,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = IDelegateInstance::vftable;
    *puVar1 = IBaseDelegateInstanceCommon<class_IModuleInterface*___ptr64___cdecl(void)>::vftable;
    *puVar1 = IBaseDelegateInstance<class_IModuleInterface*___ptr64___cdecl(void)>::vftable;
    *puVar1 = &PTR_LAB_144162a40;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 14092d4f0 CreateImpl body=86 status=ok
// SIG undefined CreateImpl(void)

undefined8 * Audio::FAudioCapture::CreateImpl(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_10;
  
  lVar1 = operator_new(0x18);
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FAudioCaptureImpl::FAudioCaptureImpl(lVar1);
  }
  *param_2 = local_10;
  return param_2;
}



// FUNCTION 14092d550 FUN_14092d550 body=71 status=ok
// SIG undefined FUN_14092d550(void)

void FUN_14092d550(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14092d5a0 FUN_14092d5a0 body=146 status=ok
// SIG undefined FUN_14092d5a0(void)

/* WARNING: Removing unreachable block (ram,0x00014092d5fe) */

void FUN_14092d5a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = Audio::FAudioCaptureSynth::IsStreamOpen(param_1 + 0x658);
  if (cVar1 != '\0') {
    Audio::FAudioCaptureSynth::AbortCapturing(param_1 + 0x658);
  }
  FUN_141755460(param_1);
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  *(undefined1 *)(param_1 + 0x6dd) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x6de) = 0;
  return;
}



// FUNCTION 14092d640 GetAudioData body=372 status=ok
// SIG undefined GetAudioData(void)

undefined1 Audio::FAudioCaptureSynth::GetAudioData(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 < 1) {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  else {
    lVar3 = param_2[1];
    iVar5 = (int)param_2[1] + iVar2;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,(int)lVar3);
    }
    puVar7 = *(undefined1 **)(param_1 + 0x58);
    puVar8 = (undefined1 *)(*param_2 + (longlong)(int)lVar3 * 4);
    for (lVar6 = (longlong)iVar2 << 2; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    TArray<float,FDefaultAllocator>::Reset(param_1 + 0x58,0);
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14092d7c0 GetBoundObject body=153 status=ok
// SIG undefined GetBoundObject(void)

ulonglong UE4Function_Private::FFunctionStorage::GetBoundObject(ulonglong param_1)

{
  uint local_48;
  ulonglong local_30;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    local_30 = 0;
  }
  else {
    local_48 = (uint)(*(ulonglong *)(param_1 + 0x20) == 0);
    local_30 = *(ulonglong *)(param_1 + 0x20) | (longlong)(int)-local_48 & param_1;
  }
  return local_30;
}



// FUNCTION 14092d860 GetDefaultCaptureDeviceInfo body=89 status=ok
// SIG undefined GetDefaultCaptureDeviceInfo(void)

undefined8 Audio::FAudioCapture::GetDefaultCaptureDeviceInfo(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FAudioCaptureImpl::GetDefaultCaptureDeviceInfo(*param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 14092d8c0 GetDefaultCaptureDeviceInfo body=683 status=ok
// SIG undefined GetDefaultCaptureDeviceInfo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 Audio::FAudioCaptureImpl::GetDefaultCaptureDeviceInfo(longlong param_1,longlong param_2)

{
  undefined1 auStack_248 [32];
  undefined1 local_228;
  int local_224;
  int local_220;
  int local_21c;
  undefined8 *local_218;
  longlong local_210;
  short *local_208;
  undefined4 local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  short *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198 [8];
  undefined1 local_190 [36];
  undefined4 local_16c;
  undefined1 local_160 [24];
  undefined4 local_148;
  undefined1 local_138 [256];
  longlong local_38;
  short *local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1f0 = (undefined8 *)(param_1 + 0x10);
  local_1c8 = *(longlong *)*local_1f0;
  local_200 = (**(code **)(local_1c8 + 0x20))(*local_1f0);
  local_1e8 = (undefined8 *)(param_1 + 0x10);
  (**(code **)(*(longlong *)*local_1e8 + 0x18))(*local_1e8,local_198,local_200);
  local_1c0 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_190)
  ;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_138,local_1c0);
  local_208 = local_30;
  local_1f8 = &local_1d8;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1b8 = local_1f8;
  if ((local_30 != (short *)0x0) && (*local_30 != 0)) {
    local_1b0 = local_30;
    local_210 = -1;
    do {
      local_210 = local_210 + 1;
    } while (local_30[local_210] != 0);
    local_224 = (int)local_210 + 1;
    local_218 = &local_1d8;
    local_220 = local_224;
    local_21c = local_224;
    local_1d0 = local_224;
    if (0 < local_224) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218,0);
    }
    local_1a8 = local_1d8;
    if (local_224 <= local_21c) {
      FGenericPlatformString::Memcpy(local_1d8,local_208,(longlong)local_224 << 1);
    }
  }
  local_1a0 = param_2;
  TArray<wchar_t,FDefaultAllocator>::operator=(param_2,&local_1d8);
  TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_1d8);
  local_1e0 = &local_38;
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  *(undefined4 *)(param_2 + 0x10) = local_16c;
  *(undefined4 *)(param_2 + 0x14) = local_148;
  local_228 = 1;
  std::vector<int,std::allocator<int>_>::_Tidy(local_160);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_190);
  return local_228;
}



// FUNCTION 14092db70 GetDefaultCaptureDeviceInfo body=41 status=ok
// SIG undefined GetDefaultCaptureDeviceInfo(void)

void Audio::FAudioCaptureSynth::GetDefaultCaptureDeviceInfo(longlong param_1,undefined8 param_2)

{
  FAudioCapture::GetDefaultCaptureDeviceInfo(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 14092dba0 FUN_14092dba0 body=33 status=ok
// SIG undefined FUN_14092dba0(void)

undefined8 * FUN_14092dba0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  return param_2;
}



// FUNCTION 14092dbd0 GetNumSamplesEnqueued body=110 status=ok
// SIG undefined GetNumSamplesEnqueued(void)

undefined4 Audio::FAudioCaptureSynth::GetNumSamplesEnqueued(longlong param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 14092dc50 FUN_14092dc50 body=55 status=ok
// SIG undefined FUN_14092dc50(void)

bool FUN_14092dc50(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 8) == param_2;
}



// FUNCTION 14092dc90 FUN_14092dc90 body=314 status=ok
// SIG undefined FUN_14092dc90(void)

/* WARNING: Removing unreachable block (ram,0x00014092dd78) */

undefined1 FUN_14092dc90(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  cVar1 = Audio::FAudioCaptureSynth::GetDefaultCaptureDeviceInfo(param_1 + 0x658,&local_28);
  if (cVar1 != '\0') {
    *param_2 = local_14;
    *(undefined4 *)(param_1 + 0x610) = local_18;
    if ((*(int *)(param_1 + 0x610) == 1) || (*(int *)(param_1 + 0x610) == 2)) {
      uVar2 = Audio::FAudioCaptureSynth::OpenDefaultStream(param_1 + 0x658);
      *(undefined1 *)(param_1 + 0x6de) = uVar2;
      TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_28);
      return 1;
    }
  }
  TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_28);
  return 0;
}



// FUNCTION 14092ddd0 InitializeModule body=109 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>::InitializeModule(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)operator_new(8);
  if (local_10 == (undefined8 *)0x0) {
    local_10 = (undefined8 *)0x0;
  }
  else {
    puVar2 = local_10;
    for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined8 *)((longlong)puVar2 + 1);
    }
    *local_10 = IModuleInterface::vftable;
    *local_10 = &PTR_FUN_144162348;
  }
  return local_10;
}



// FUNCTION 14092de40 IsCapturing body=15 status=ok
// SIG undefined IsCapturing(void)

undefined1 Audio::FAudioCaptureSynth::IsCapturing(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



// FUNCTION 14092de50 FUN_14092de50 body=72 status=ok
// SIG undefined FUN_14092de50(void)

bool FUN_14092de50(longlong param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 0x6f0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x6f0) = 0;
    iVar1 = 0;
  }
  UNLOCK();
  return iVar1 != 0;
}



// FUNCTION 14092dea0 FUN_14092dea0 body=8 status=ok
// SIG undefined FUN_14092dea0(void)

undefined1 FUN_14092dea0(void)

{
  return 1;
}



// FUNCTION 14092deb0 IsStreamOpen body=79 status=ok
// SIG undefined IsStreamOpen(void)

undefined8 Audio::FAudioCapture::IsStreamOpen(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FAudioCaptureImpl::IsStreamOpen(*param_1);
  }
  return uVar1;
}



// FUNCTION 14092df00 IsStreamOpen body=52 status=ok
// SIG undefined IsStreamOpen(void)

bool Audio::FAudioCaptureImpl::IsStreamOpen(longlong param_1)

{
  return *(int *)(*(longlong *)(param_1 + 0x10) + 300) != -0x32;
}



// FUNCTION 14092df40 IsStreamOpen body=31 status=ok
// SIG undefined IsStreamOpen(void)

void Audio::FAudioCaptureSynth::IsStreamOpen(longlong param_1)

{
  FAudioCapture::IsStreamOpen(param_1 + 0x28);
  return;
}



// FUNCTION 14092df60 OnAudioCapture body=101 status=ok
// SIG undefined OnAudioCapture(void)

void Audio::FAudioCaptureImpl::OnAudioCapture
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5)

{
  (*(code *)**(undefined8 **)*param_1)
            (*param_1,param_2,param_3,*(undefined4 *)(param_1 + 1),param_4,param_5);
  return;
}



// FUNCTION 14092dfd0 OnAudioCapture body=316 status=ok
// SIG undefined OnAudioCapture(void)

void Audio::FAudioCaptureSynth::OnAudioCapture
               (longlong param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  undefined1 *puVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(char *)(param_1 + 0x69) != '\0') {
    iVar1 = *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + param_4 * param_3;
    *(int *)(param_1 + 0x60) = iVar3;
    if (*(int *)(param_1 + 100) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
    }
    puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 4);
    for (lVar4 = (longlong)(param_4 * param_3) << 2; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14092e110 OnAudioCaptureCallback body=96 status=ok
// SIG undefined OnAudioCaptureCallback(void)

undefined8
Audio::OnAudioCaptureCallback
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5,
          undefined8 param_6)

{
  FAudioCaptureImpl::OnAudioCapture(param_6,param_2,param_3,param_4,param_5 == 1);
  return 0;
}



// FUNCTION 14092e170 FUN_14092e170 body=139 status=ok
// SIG undefined FUN_14092e170(void)

/* WARNING: Removing unreachable block (ram,0x00014092e1b5) */

void FUN_14092e170(longlong param_1)

{
  if (*(char *)(param_1 + 0x6de) == '\0') {
    Audio::FAudioCaptureSynth::OpenDefaultStream(param_1 + 0x658);
  }
  Audio::FAudioCaptureSynth::StartCapturing(param_1 + 0x658);
  LOCK();
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  UNLOCK();
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  return;
}



// FUNCTION 14092e200 FUN_14092e200 body=93 status=ok
// SIG undefined FUN_14092e200(void)

/* WARNING: Removing unreachable block (ram,0x00014092e23f) */

void FUN_14092e200(longlong param_1)

{
  if (*(char *)(param_1 + 0x6de) != '\0') {
    Audio::FAudioCaptureSynth::StopCapturing(param_1 + 0x658);
    LOCK();
    *(undefined4 *)(param_1 + 0x6f0) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14092e260 FUN_14092e260 body=836 status=ok
// SIG undefined FUN_14092e260(void)

int FUN_14092e260(longlong param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_98;
  int local_80;
  int local_68;
  
  if ((((*(char *)(param_1 + 0x6de) != '\0') &&
       (cVar1 = Audio::FAudioCaptureSynth::IsStreamOpen(param_1 + 0x658), cVar1 != '\0')) &&
      (cVar1 = Audio::FAudioCaptureSynth::IsCapturing(param_1 + 0x658), cVar1 != '\0')) &&
     ((local_98 = 0, 0 < *(int *)(param_1 + 0x6d8) ||
      (iVar2 = Audio::FAudioCaptureSynth::GetNumSamplesEnqueued(param_1 + 0x658), 0x400 < iVar2))))
  {
    if (*(int *)(param_1 + 0x6d0) < *(int *)(param_1 + 0x6e8) + param_3) {
      local_80 = *(int *)(param_1 + 0x6d0) - *(int *)(param_1 + 0x6e8);
      if (local_80 < 1) {
        local_80 = 0;
      }
      if (0 < local_80) {
        puVar4 = (undefined1 *)
                 (*(longlong *)(param_1 + 0x6c8) + (longlong)*(int *)(param_1 + 0x6e8) * 4);
        puVar5 = param_2;
        for (lVar3 = (longlong)local_80 << 2; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = local_80;
      }
      TArray<float,FDefaultAllocator>::Reset(param_1 + 0x6c8,0);
      Audio::FAudioCaptureSynth::GetAudioData(param_1 + 0x658,param_1 + 0x6c8);
      *(undefined4 *)(param_1 + 0x6e8) = 0;
    }
    if (0 < *(int *)(param_1 + 0x6d0)) {
      local_68 = *(int *)(param_1 + 0x6d0) - *(int *)(param_1 + 0x6e8);
      if (param_3 - local_98 <= local_68) {
        local_68 = param_3 - local_98;
      }
      puVar4 = (undefined1 *)
               (*(longlong *)(param_1 + 0x6c8) + (longlong)*(int *)(param_1 + 0x6e8) * 4);
      puVar5 = param_2 + (longlong)local_98 * 4;
      for (lVar3 = (longlong)local_68 << 2; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(param_1 + 0x6e8) = *(int *)(param_1 + 0x6e8) + local_68;
      local_98 = local_98 + local_68;
    }
    *(int *)(param_1 + 0x6d8) = *(int *)(param_1 + 0x6d8) + local_98;
    param_3 = local_98;
  }
  return param_3;
}



// FUNCTION 14092e5b0 FUN_14092e5b0 body=65 status=ok
// SIG undefined FUN_14092e5b0(void)

void FUN_14092e5b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  TArray<float,FDefaultAllocator>::Reset(param_1 + 0x6c8,0);
  return;
}



// FUNCTION 14092e600 FUN_14092e600 body=6 status=ok
// SIG undefined FUN_14092e600(void)

void FUN_14092e600(void)

{
  return;
}



// FUNCTION 14092e610 OpenDefaultCaptureStream body=89 status=ok
// SIG undefined OpenDefaultCaptureStream(void)

undefined8 Audio::FAudioCapture::OpenDefaultCaptureStream(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FAudioCaptureImpl::OpenDefaultCaptureStream(*param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 14092e670 OpenDefaultCaptureStream body=786 status=ok
// SIG undefined OpenDefaultCaptureStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014092e6a7) */

undefined1 Audio::FAudioCaptureImpl::OpenDefaultCaptureStream(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 *local_100;
  code *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined1 local_78 [8];
  undefined1 local_70 [36];
  int local_4c;
  undefined1 local_40 [24];
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (*param_2 == 0) {
    local_d8 = 0;
  }
  else {
    local_a8 = param_1 + 2;
    local_88 = *(longlong *)*local_a8;
    local_d4 = (**(code **)(local_88 + 0x20))(*local_a8);
    local_a0 = param_1 + 2;
    (**(code **)(*(longlong *)*local_a0 + 0x18))(*local_a0,local_78,local_d4);
    local_c0 = local_d4;
    local_b8 = 0;
    if (local_4c < 3) {
      local_d0 = local_4c;
    }
    else {
      local_d0 = 2;
    }
    local_bc = local_d0;
    bVar2 = *(int *)(param_1[2] + 300) != -0x32;
    local_cc = (uint)bVar2;
    if (bVar2) {
      local_98 = param_1 + 2;
      (**(code **)(*(longlong *)*local_98 + 0x40))(*local_98);
      local_90 = param_1 + 2;
      (**(code **)(*(longlong *)*local_90 + 0x30))(*local_90);
    }
    local_b0[0] = (undefined4)param_2[1];
    *(int *)(param_1 + 1) = local_bc;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_28;
    *param_1 = *param_2;
    local_e0 = 0;
    local_e8 = 0;
    local_f8 = OnAudioCaptureCallback;
    local_100 = local_b0;
    local_108 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_f0 = param_1;
    RtAudio::openStream(param_1 + 2,0,&local_c0,0x10);
    bVar2 = *(int *)(param_1[2] + 300) != -0x32;
    local_c8 = (uint)bVar2;
    if (bVar2) {
      uVar1 = RtApi::getStreamSampleRate(param_1[2]);
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    }
    local_d8 = 1;
    std::vector<int,std::allocator<int>_>::_Tidy(local_40);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_70)
    ;
  }
  return local_d8;
}



// FUNCTION 14092e990 OpenDefaultStream body=127 status=ok
// SIG undefined OpenDefaultStream(void)

bool Audio::FAudioCaptureSynth::OpenDefaultStream(longlong param_1)

{
  char cVar1;
  longlong local_20;
  undefined4 local_18;
  
  local_18 = 0x400;
  local_20 = param_1;
  if (*(int *)(param_1 + 100) < 0x2ee00) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x58,0x2ee00);
  }
  cVar1 = FAudioCapture::OpenDefaultCaptureStream(param_1 + 0x28,&local_20);
  if (cVar1 != '\0') {
    FAudioCapture::StartStream(param_1 + 0x28);
  }
  return cVar1 != '\0';
}



// FUNCTION 14092ea10 Reset body=112 status=ok
// SIG undefined Reset(void)

void TArray<float,FDefaultAllocator>::Reset(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) < param_2) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != param_2) {
      ResizeTo(param_1,param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14092ea80 StartCapturing body=132 status=ok
// SIG undefined StartCapturing(void)

undefined1 Audio::FAudioCaptureSynth::StartCapturing(longlong param_1)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TArray<float,FDefaultAllocator>::Reset(param_1 + 0x58,0);
  *(undefined1 *)(param_1 + 0x69) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}



// FUNCTION 14092eb10 StartStream body=79 status=ok
// SIG undefined StartStream(void)

undefined8 Audio::FAudioCapture::StartStream(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FAudioCaptureImpl::StartStream(*param_1);
  }
  return uVar1;
}



// FUNCTION 14092eb60 StartStream body=52 status=ok
// SIG undefined StartStream(void)

undefined8 Audio::FAudioCaptureImpl::StartStream(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))(*(undefined8 *)(param_1 + 0x10));
  return 1;
}



// FUNCTION 14092eba0 StopCapturing body=103 status=ok
// SIG undefined StopCapturing(void)

void Audio::FAudioCaptureSynth::StopCapturing(longlong param_1)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  *(undefined1 *)(param_1 + 0x69) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14092ec10 _Adjust_manually_vector_aligned body=148 status=ok
// SIG undefined _Adjust_manually_vector_aligned(void)

void std::_Adjust_manually_vector_aligned(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  *param_2 = *param_2 + 0x27;
  uVar1 = *param_1 - *(longlong *)(*param_1 + -8);
  if ((7 < uVar1) && (uVar1 < 0x28)) {
    *param_1 = *(longlong *)(*param_1 + -8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 14092ecb0 _Calculate_growth body=217 status=ok
// SIG undefined _Calculate_growth(void)

ulonglong std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Calculate_growth
                    (longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong *local_28;
  
  uVar2 = max_size(param_1);
  if (((param_2 | 0xf) <= uVar2) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x18), uVar1 <= uVar2 - uVar1 / 2)) {
    if ((param_2 | 0xf) < uVar1 + uVar1 / 2) {
      local_28 = &local_30;
    }
    else {
      local_28 = &local_38;
    }
    uVar2 = *local_28;
  }
  return uVar2;
}



// FUNCTION 14092ed90 _Calculate_growth body=225 status=ok
// SIG undefined _Calculate_growth(void)

/* WARNING: Removing unreachable block (ram,0x00014092edf0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc0 : 0x00014092ee09 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong std::vector<int,std::allocator<int>_>::_Calculate_growth
                    (longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong local_40;
  
  uVar1 = param_1[2] - *param_1 >> 2;
  uVar2 = param_2;
  if ((uVar1 <= local_40 - uVar1 / 2) && (uVar2 = uVar1 + uVar1 / 2, uVar2 < param_2)) {
    uVar2 = param_2;
  }
  return uVar2;
}



// FUNCTION 14092ee80 _Calculate_growth body=231 status=ok
// SIG undefined _Calculate_growth(void)

/* WARNING: Removing unreachable block (ram,0x00014092eee6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc0 : 0x00014092eeff */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong std::vector<DsDevice,std::allocator<DsDevice>_>::_Calculate_growth
                    (longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong local_40;
  
  uVar1 = (param_1[2] - *param_1) / 0x38;
  uVar2 = param_2;
  if ((uVar1 <= local_40 - uVar1 / 2) && (uVar2 = uVar1 + uVar1 / 2, uVar2 < param_2)) {
    uVar2 = param_2;
  }
  return uVar2;
}



// FUNCTION 14092ef70 _Change_array body=262 status=ok
// SIG undefined _Change_array(void)

void std::vector<int,std::allocator<int>_>::_Change_array
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_48 [8];
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if (*param_1 != 0) {
    local_20 = param_1[1];
    local_18 = *param_1;
    puVar2 = local_48;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_30 = param_1[2] - *param_1 >> 2;
    local_38 = *param_1;
    local_40 = local_30 << 2;
    local_28 = local_38;
    if (0xfff < local_40) {
      _Adjust_manually_vector_aligned(&local_38,&local_40);
    }
    FMemory::operator_delete(local_38,local_40);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



// FUNCTION 14092f080 _Change_array body=269 status=ok
// SIG undefined _Change_array(void)

void std::vector<DsDevice,std::allocator<DsDevice>_>::_Change_array
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  if (*param_1 != 0) {
    local_28 = param_1[1];
    local_20 = *param_1;
    _Destroy_range<std::allocator<DsDevice>_>(local_20,local_28,param_1);
    local_18 = (param_1[2] - *param_1) / 0x38;
    local_30 = *param_1;
    local_38 = local_18 * 0x38;
    local_10 = local_30;
    if (0xfff < local_38) {
      _Adjust_manually_vector_aligned(&local_30,&local_38);
    }
    FMemory::operator_delete(local_30,local_38);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x38;
  param_1[2] = param_2 + param_4 * 0x38;
  return;
}



// FUNCTION 14092f190 _Construct_lv_contents body=504 status=ok
// SIG undefined _Construct_lv_contents(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct_lv_contents
               (undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  undefined8 *local_50;
  ulonglong local_48;
  ulonglong *local_40;
  undefined8 *local_28;
  
  uVar1 = param_2[2];
  local_78 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_78 = (undefined8 *)*param_2;
  }
  local_50 = local_78;
  if (uVar1 < 0x10) {
    puVar4 = param_1;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)local_78;
      local_78 = (undefined8 *)((longlong)local_78 + 1);
      puVar4 = (undefined8 *)((longlong)puVar4 + 1);
    }
    param_1[2] = uVar1;
    param_1[3] = 0xf;
  }
  else {
    local_28 = param_1;
    local_70 = max_size(param_1);
    local_68 = uVar1 | 0xf;
    if (local_70 < local_68) {
      local_60 = &local_70;
    }
    else {
      local_60 = &local_68;
    }
    local_40 = local_60;
    local_48 = *local_60;
    uVar2 = local_48 + 1;
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        local_80 = (undefined1 *)0x0;
      }
      else {
        local_80 = (undefined1 *)operator_new(uVar2);
      }
    }
    else {
      local_80 = (undefined1 *)
                 _Allocate_manually_vector_aligned<std::_Default_allocate_traits>(uVar2);
    }
    *param_1 = local_80;
    for (lVar3 = uVar1 + 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *local_80 = *(undefined1 *)local_50;
      local_50 = (undefined8 *)((longlong)local_50 + 1);
      local_80 = local_80 + 1;
    }
    param_1[2] = uVar1;
    param_1[3] = local_48;
  }
  return;
}



// FUNCTION 14092f390 FUN_14092f390 body=34 status=ok
// SIG undefined FUN_14092f390(void)

void FUN_14092f390(void)

{
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



// FUNCTION 14092f3c0 _Equal body=250 status=ok
// SIG undefined _Equal(void)

undefined1
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Equal
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 local_40;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_20 = (undefined8 *)*param_2;
  }
  local_18 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    local_18 = (undefined8 *)*param_1;
  }
  if ((param_1[2] == param_2[2]) &&
     (iVar1 = ::_guard_xfg_dispatch_icall_nop(local_18,local_20,param_1[2]), iVar1 == 0)) {
    local_40 = 1;
  }
  else {
    local_40 = 0;
  }
  return local_40;
}



// FUNCTION 14092f4c0 _Getstate body=103 status=ok
// SIG undefined _Getstate(void)

uint std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Getstate
               (uint param_1)

{
  undefined4 local_18;
  
  local_18 = 0;
  if ((param_1 & 1) == 0) {
    local_18 = 4;
  }
  if ((param_1 & 2) == 0) {
    local_18 = local_18 | 2;
  }
  if ((param_1 & 8) != 0) {
    local_18 = local_18 | 8;
  }
  if ((param_1 & 4) != 0) {
    local_18 = local_18 | 0x10;
  }
  return local_18;
}



// FUNCTION 14092f530 _Init body=383 status=ok
// SIG undefined _Init(void)

void std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Init
               (basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,
               ulonglong param_3,uint param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  uint local_res20;
  char *local_30;
  char *local_28;
  
  if (param_3 < 0x80000000) {
    if ((param_3 == 0) || ((param_4 & 6) == 6)) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      local_res20 = param_4;
    }
    else {
      uVar1 = param_3;
      if (param_3 < 0x1000) {
        if (param_3 == 0) {
          local_30 = (char *)0x0;
          pcVar2 = local_30;
        }
        else {
          local_30 = (char *)operator_new(param_3);
          pcVar2 = local_30;
        }
      }
      else {
        local_30 = (char *)_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(param_3)
        ;
        pcVar2 = local_30;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pcVar2 = *param_2;
        param_2 = param_2 + 1;
        pcVar2 = pcVar2 + 1;
      }
      *(char **)(param_1 + 0x68) = local_30 + param_3;
      if ((param_4 & 4) == 0) {
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  (param_1,local_30,local_30,*(char **)(param_1 + 0x68));
      }
      if ((param_4 & 2) == 0) {
        if ((param_4 & 0x18) == 0) {
          local_28 = local_30;
        }
        else {
          local_28 = *(char **)(param_1 + 0x68);
        }
        std::basic_streambuf<char,std::char_traits<char>_>::setp
                  (param_1,local_30,local_28,*(char **)(param_1 + 0x68));
        if ((param_4 & 4) != 0) {
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (param_1,local_30,(char *)0x0,local_30);
        }
      }
      local_res20 = param_4 | 1;
    }
    *(uint *)(param_1 + 0x70) = local_res20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop();
}



// FUNCTION 14092f6b0 _Move_from body=106 status=ok
// SIG undefined _Move_from(void)

void std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Move_from
               (undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 14092f720 _Tidy body=254 status=ok
// SIG undefined _Tidy(void)

void std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
               (basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  ulonglong local_38;
  char *local_30;
  char *local_28;
  ulonglong local_20;
  char *local_18;
  
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1);
    if (pcVar1 == (char *)0x0) {
      local_30 = std::basic_streambuf<char,std::char_traits<char>_>::egptr(param_1);
    }
    else {
      local_30 = std::basic_streambuf<char,std::char_traits<char>_>::epptr(param_1);
    }
    local_18 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
    local_38 = (longlong)local_30 - (longlong)pcVar1;
    local_28 = local_18;
    local_20 = local_38;
    if (0xfff < local_38) {
      _Adjust_manually_vector_aligned(&local_28,&local_38);
    }
    FMemory::operator_delete(local_28);
  }
  std::basic_streambuf<char,std::char_traits<char>_>::setg
            (param_1,(char *)0x0,(char *)0x0,(char *)0x0);
  std::basic_streambuf<char,std::char_traits<char>_>::setp(param_1,(char *)0x0,(char *)0x0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  return;
}



// FUNCTION 14092f820 _Tidy body=220 status=ok
// SIG undefined _Tidy(void)

void std::vector<int,std::allocator<int>_>::_Tidy(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_48 [8];
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if (*param_1 != 0) {
    local_20 = param_1[1];
    local_18 = *param_1;
    puVar2 = local_48;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_30 = param_1[2] - *param_1 >> 2;
    local_38 = *param_1;
    local_40 = local_30 << 2;
    local_28 = local_38;
    if (0xfff < local_40) {
      _Adjust_manually_vector_aligned(&local_38,&local_40);
    }
    FMemory::operator_delete(local_38,local_40);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14092f900 _Tidy body=227 status=ok
// SIG undefined _Tidy(void)

void std::vector<DsDevice,std::allocator<DsDevice>_>::_Tidy(longlong *param_1)

{
  ulonglong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  if (*param_1 != 0) {
    local_28 = param_1[1];
    local_20 = *param_1;
    _Destroy_range<std::allocator<DsDevice>_>(local_20,local_28,param_1);
    local_18 = (param_1[2] - *param_1) / 0x38;
    local_30 = *param_1;
    local_38 = local_18 * 0x38;
    local_10 = local_30;
    if (0xfff < local_38) {
      _Adjust_manually_vector_aligned(&local_30,&local_38);
    }
    FMemory::operator_delete(local_30,local_38);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14092f9f0 _Tidy_deallocate body=217 status=ok
// SIG undefined _Tidy_deallocate(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
               (undefined8 *param_1)

{
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  if (0xf < (ulonglong)param_1[3]) {
    local_30 = *param_1;
    local_38 = param_1[3] + 1;
    local_28 = local_38;
    local_20 = local_30;
    local_18 = param_1;
    if (0xfff < local_38) {
      _Adjust_manually_vector_aligned(&local_30,&local_38);
    }
    FMemory::operator_delete(local_30,local_38);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 14092fad0 _Tidy_init body=75 status=ok
// SIG undefined _Tidy_init(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_init
               (undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  return;
}



// FUNCTION 14092fb20 _Umove_if_noexcept body=85 status=ok
// SIG undefined _Umove_if_noexcept(void)

void std::vector<int,std::allocator<int>_>::_Umove_if_noexcept
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [8];
  undefined1 local_10;
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = local_18[0];
  _Uninitialized_move<int_*,int_*,std::allocator<int>_>(param_2,param_3,param_4,param_1);
  return;
}



// FUNCTION 14092fb80 _Xlength body=16 status=ok
// SIG undefined _Xlength(void)

void std::vector<int,std::allocator<int>_>::_Xlength(void)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop("vector<T> too long");
}



// FUNCTION 14092fba0 abortStream body=179 status=ok
// SIG undefined abortStream(void)

void RtApiDs::abortStream(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_28;
  
  RtApi::verifyStream(param_1);
  if (*(int *)((longlong)param_1 + 300) == 0) {
    local_28 = -1;
    do {
      lVar1 = local_28 + 1;
      lVar2 = local_28 + 1;
      local_28 = lVar1;
    } while ("RtApiDs::abortStream(): the stream is already stopped!"[lVar2] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0x1e,"RtApiDs::abortStream(): the stream is already stopped!",lVar1);
    RtApi::error(param_1,0);
  }
  else {
    *(undefined4 *)param_1[0x24] = 2;
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  return;
}



// FUNCTION 14092fc60 allocate body=141 status=ok
// SIG undefined allocate(void)

undefined8 std::allocator<int>::allocate(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_2 << 2;
  if (0x3fffffffffffffff < param_2) {
    local_28 = 0xffffffffffffffff;
  }
  if (local_28 < 0x1000) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = operator_new(local_28);
    }
  }
  else {
    local_20 = _Allocate_manually_vector_aligned<std::_Default_allocate_traits>(local_28);
  }
  return local_20;
}



// FUNCTION 14092fcf0 allocate body=138 status=ok
// SIG undefined allocate(void)

undefined8 std::allocator<DsDevice>::allocate(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_2 * 0x38;
  if (0x492492492492492 < param_2) {
    local_28 = 0xffffffffffffffff;
  }
  if (local_28 < 0x1000) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = operator_new(local_28);
    }
  }
  else {
    local_20 = _Allocate_manually_vector_aligned<std::_Default_allocate_traits>(local_28);
  }
  return local_20;
}



// FUNCTION 14092fd80 asInt body=107 status=ok
// SIG undefined asInt(void)

uint S24::asInt(uint3 *param_1)

{
  undefined4 local_18;
  
  local_18 = (uint)*param_1;
  if ((*param_1 & 0x800000) != 0) {
    local_18 = local_18 | 0xff000000;
  }
  return local_18;
}



// FUNCTION 14092fdf0 assign body=240 status=ok
// SIG undefined assign(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (undefined8 *param_1,ulonglong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 local_27 [7];
  undefined8 *local_20;
  undefined8 *local_18;
  
  if ((ulonglong)param_1[3] < param_2) {
    puVar4 = local_27;
    local_20 = param_1;
    for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    param_1 = (undefined8 *)
              _Reallocate_for<<lambda_138c3d7c38c85abb84c7fc7bfe5747b7>,char>
                        (param_1,param_2,local_27[0],param_3);
  }
  else {
    local_18 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      local_18 = (undefined8 *)*param_1;
    }
    param_1[2] = param_2;
    puVar3 = local_18;
    for (uVar1 = param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = param_3;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
    *(undefined1 *)((longlong)local_18 + param_2) = 0;
  }
  return param_1;
}



// FUNCTION 14092fee0 begin body=48 status=ok
// SIG undefined begin(void)

undefined8 *
std::vector<unsigned_int,std::allocator<unsigned_int>_>::begin
          (undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14092ff10 c_str body=88 status=ok
// SIG undefined c_str(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(undefined8 *param_1)

{
  undefined8 *local_18;
  
  local_18 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    local_18 = (undefined8 *)*param_1;
  }
  return local_18;
}



// FUNCTION 14092ff70 callbackEvent body=7650 status=ok
// SIG undefined callbackEvent(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RtApiDs::callbackEvent(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_378 [32];
  uint *local_358;
  undefined1 **local_350;
  uint *local_348;
  undefined4 local_340;
  int local_338;
  int local_334;
  uint *local_330;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  uint local_300;
  uint local_2f8 [2];
  undefined1 *local_2f0;
  uint local_2e8;
  int local_2e4;
  uint local_2e0;
  uint local_2dc;
  int local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2c8;
  undefined1 *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  undefined1 *local_2a8;
  int local_2a0;
  double local_298;
  double local_290;
  int local_288;
  int local_284;
  int local_280;
  longlong local_278;
  longlong *local_270;
  longlong *local_268;
  undefined1 local_260 [4];
  uint local_25c;
  uint local_258 [2];
  longlong *local_250;
  longlong *local_248;
  char *local_240;
  longlong local_238;
  undefined8 local_230;
  code *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  if ((*(int *)((longlong)param_1 + 300) == 0) || (*(int *)((longlong)param_1 + 300) == 1)) {
    Sleep(0x32);
    return;
  }
  if (*(int *)((longlong)param_1 + 300) == -0x32) {
    local_240 = "RtApiDs::callbackEvent(): the stream is closed ... this shouldn\'t happen!";
    local_278 = -1;
    do {
      local_238 = local_278 + 1;
      lVar3 = local_278 + 1;
      local_278 = local_238;
    } while ("RtApiDs::callbackEvent(): the stream is closed ... this shouldn\'t happen!"[lVar3] !=
             '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0x1e,
               "RtApiDs::callbackEvent(): the stream is closed ... this shouldn\'t happen!",
               local_238);
    RtApi::error(param_1,0);
    return;
  }
  local_250 = param_1 + 0x36;
  local_330 = (uint *)param_1[0x24];
  if ((int)param_1[0x2b] + 2U < *local_330) {
    *(undefined4 *)((longlong)param_1 + 300) = 1;
    if ((char)local_330[1] == '\0') {
      SetEvent(*(HANDLE *)(local_330 + 0x12));
      return;
    }
    (**(code **)(*param_1 + 0x40))(param_1);
    return;
  }
  if (*local_330 == 0) {
    local_228 = (code *)param_1[0x38];
    local_230 = (**(code **)(*param_1 + 0x50))(param_1);
    local_2e8 = 0;
    if (((int)param_1[0x25] != 1) && ((char)local_330[10] == '\x01')) {
      local_2e8 = 2;
      *(undefined1 *)(local_330 + 10) = 0;
    }
    if (((int)param_1[0x25] != 0) && (*(char *)((longlong)local_330 + 0x29) == '\x01')) {
      local_2e8 = local_2e8 | 1;
      *(undefined1 *)((longlong)local_330 + 0x29) = 0;
    }
    local_350 = (undefined1 **)local_250[3];
    local_358 = (uint *)CONCAT44(local_358._4_4_,local_2e8);
    local_288 = (*local_228)(param_1[0x26],param_1[0x27],*(undefined4 *)((longlong)param_1 + 0x154),
                             local_230);
    if (local_288 == 2) {
      *(undefined4 *)((longlong)param_1 + 300) = 1;
      *local_330 = 2;
      (**(code **)(*param_1 + 0x48))(param_1);
      return;
    }
    if (local_288 == 1) {
      *local_330 = 1;
      *(undefined1 *)(local_330 + 1) = 1;
    }
  }
  local_2a8 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_318 = 0;
  local_314 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  if (*(int *)((longlong)param_1 + 300) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
    return;
  }
  if (*(char *)((longlong)param_1 + 0x289) == '\0') {
    if ((int)param_1[0x25] == 2) {
      local_270 = *(longlong **)(local_330 + 6);
      local_268 = *(longlong **)(local_330 + 8);
      local_338 = (**(code **)(*local_270 + 0x20))(local_270,0,&local_25c);
      if (local_338 < 0) {
        local_220 = FUN_140937560(local_338);
        uVar2 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::callbackEvent: error (");
        uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_220);
        std::operator<<<std::char_traits<char>_>(uVar2,") getting current write position!");
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_1a8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_1a8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_1a8);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
        RtApi::error(param_1,9);
        return;
      }
      local_338 = (**(code **)(*local_268 + 0x20))(local_268,0,local_258);
      if (local_338 < 0) {
        local_218 = FUN_140937560(local_338);
        uVar2 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::callbackEvent: error (");
        uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_218);
        std::operator<<<std::char_traits<char>_>(uVar2,") getting current read position!");
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_188);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_188);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_188);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
        RtApi::error(param_1,9);
        return;
      }
      while( true ) {
        local_338 = (**(code **)(*local_270 + 0x20))(local_270,0,&local_310);
        if (local_338 < 0) {
          local_210 = FUN_140937560(local_338);
          uVar2 = std::operator<<<std::char_traits<char>_>
                            (param_1 + 1,"RtApiDs::callbackEvent: error (");
          uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_210);
          std::operator<<<std::char_traits<char>_>(uVar2,") getting current write position!");
          std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                    (param_1 + 2,local_168);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (param_1 + 0x1e,local_168);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_168);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
          RtApi::error(param_1,9);
          return;
        }
        local_338 = (**(code **)(*local_268 + 0x20))(local_268,0,&local_328);
        if (local_338 < 0) {
          local_208 = FUN_140937560(local_338);
          uVar2 = std::operator<<<std::char_traits<char>_>
                            (param_1 + 1,"RtApiDs::callbackEvent: error (");
          uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_208);
          std::operator<<<std::char_traits<char>_>(uVar2,") getting current read position!");
          std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                    (param_1 + 2,local_148);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (param_1 + 0x1e,local_148);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_148);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
          RtApi::error(param_1,9);
          return;
        }
        if ((local_310 != local_25c) && (local_328 != local_258[0])) break;
        Sleep(1);
      }
      local_330[0xb] = local_310 + local_330[0xf];
      if (local_330[0xd] <= local_330[0xb]) {
        local_330[0xb] = local_330[0xb] - local_330[0xd];
      }
      local_330[0xc] = local_328;
    }
    else if ((int)param_1[0x25] == 0) {
      local_248 = *(longlong **)(local_330 + 6);
      local_338 = (**(code **)(*local_248 + 0x20))(local_248,local_2f8,&local_310);
      if (local_338 < 0) {
        local_200 = FUN_140937560(local_338);
        uVar2 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::callbackEvent: error (");
        uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_200);
        std::operator<<<std::char_traits<char>_>(uVar2,") getting current write position!");
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_128);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_128);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_128);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
        RtApi::error(param_1,9);
        return;
      }
      local_330[0xb] = local_310 + local_330[0xf];
      if (local_330[0xd] <= local_330[0xb]) {
        local_330[0xb] = local_330[0xb] - local_330[0xd];
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x289) = 1;
  }
  if (((int)param_1[0x25] != 0) && ((int)param_1[0x25] != 2)) goto LAB_140931345;
  local_2b0 = *(longlong **)(local_330 + 6);
  if (1 < *local_330) {
    local_334 = *(int *)((longlong)param_1 + 0x154) * *(int *)((longlong)param_1 + 0x15c);
    iVar1 = RtApi::formatBytes(param_1,*(undefined4 *)((longlong)param_1 + 0x17c));
    local_334 = local_334 * iVar1;
    local_1f8 = (longlong)local_334;
    puVar5 = (undefined1 *)param_1[0x26];
    for (lVar3 = local_1f8; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  if ((char)param_1[0x29] == '\0') {
    local_2f0 = (undefined1 *)param_1[0x26];
    local_334 = *(int *)((longlong)param_1 + 0x154) * *(int *)((longlong)param_1 + 0x15c);
    iVar1 = RtApi::formatBytes(param_1,*(undefined4 *)((longlong)param_1 + 0x17c));
    local_334 = local_334 * iVar1;
  }
  else {
    local_2f0 = (undefined1 *)param_1[0x28];
    RtApi::convertBuffer(param_1,local_2f0,param_1[0x26],param_1 + 0x3d);
    local_334 = *(int *)((longlong)param_1 + 0x154) * *(int *)((longlong)param_1 + 0x164);
    iVar1 = RtApi::formatBytes(param_1,(int)param_1[0x30]);
    local_334 = local_334 * iVar1;
  }
  if ((int)param_1[0x30] == 1) {
    for (local_2e4 = 0; local_2e4 < local_334; local_2e4 = local_2e4 + 1) {
      local_2f0[local_2e4] = local_2f0[local_2e4] + -0x80;
    }
  }
  local_320 = local_330[0xd];
  local_31c = local_330[0xb];
  while( true ) {
    local_338 = (**(code **)(*local_2b0 + 0x20))(local_2b0,local_2f8,&local_310);
    if (local_338 < 0) {
      local_1f0 = FUN_140937560(local_338);
      uVar2 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 1,"RtApiDs::callbackEvent: error (");
      uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_1f0);
      std::operator<<<std::char_traits<char>_>(uVar2,") getting current write position!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 2,local_108);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0x1e,local_108);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_108);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
      RtApi::error(param_1,9);
      return;
    }
    local_30c = local_310 + local_330[0xf];
    if (local_320 < local_30c) {
      local_30c = local_30c - local_320;
    }
    if (local_30c < local_31c) {
      local_30c = local_30c + local_320;
    }
    local_2d4 = local_31c + local_334;
    if (local_2d4 <= local_30c) break;
    local_298 = (double)(local_2d4 - local_30c) * 1000.0;
    iVar1 = RtApi::formatBytes(param_1,(int)param_1[0x30]);
    local_298 = local_298 /
                (double)(uint)(iVar1 * *(int *)((longlong)param_1 + 0x164) * (int)param_1[0x2a]);
    if (local_298 < 1.0) {
      local_298 = 1.0;
    }
    Sleep((DWORD)(longlong)local_298);
  }
  local_2d0 = local_310;
  local_308 = local_31c;
  if (local_320 < local_31c) {
    local_308 = local_31c - local_320;
  }
  if (local_310 < local_2f8[0]) {
    local_2d0 = local_310 + local_320;
  }
  if (local_308 < local_2f8[0]) {
    local_308 = local_308 + local_320;
  }
  if ((local_308 < local_2f8[0]) || (local_2d0 <= local_308)) {
    local_284 = 0;
  }
  else {
    local_284 = 1;
  }
  if (local_284 == 0) {
    local_2c8 = local_310;
    local_300 = local_2d4;
    if (local_320 < local_2d4) {
      local_300 = local_2d4 - local_320;
    }
    if (local_310 < local_2f8[0]) {
      local_2c8 = local_310 + local_320;
    }
    if (local_300 < local_2f8[0]) {
      local_300 = local_300 + local_320;
    }
    if ((local_300 < local_2f8[0]) || (local_2c8 <= local_300)) {
      local_280 = 0;
    }
    else {
      local_280 = 1;
    }
    if (local_280 != 0) goto LAB_140931033;
  }
  else {
LAB_140931033:
    *(undefined1 *)(local_330 + 10) = 1;
    local_31c = (local_310 + local_330[0xf]) - local_334;
    if (local_320 <= local_31c) {
      local_31c = local_31c - local_320;
    }
    local_330[0xb] = local_31c;
    local_2d4 = local_31c + local_334;
  }
  local_340 = 0;
  local_348 = &local_314;
  local_350 = &local_2c0;
  local_358 = &local_318;
  local_338 = (**(code **)(*local_2b0 + 0x58))(local_2b0,local_31c,local_334,&local_2a8);
  if (local_338 < 0) {
    local_1e8 = FUN_140937560(local_338);
    uVar2 = std::operator<<<std::char_traits<char>_>(param_1 + 1,"RtApiDs::callbackEvent: error (");
    uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_1e8);
    std::operator<<<std::char_traits<char>_>(uVar2,") locking buffer during playback!");
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
              (param_1 + 2,local_e8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_1 + 0x1e,local_e8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_e8)
    ;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
    RtApi::error(param_1,9);
    return;
  }
  puVar5 = local_2f0;
  puVar6 = local_2a8;
  for (uVar4 = (ulonglong)local_318; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (local_2c0 != (undefined1 *)0x0) {
    puVar5 = local_2f0 + local_318;
    puVar6 = local_2c0;
    for (uVar4 = (ulonglong)local_314; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  local_358 = (uint *)CONCAT44(local_358._4_4_,local_314);
  (**(code **)(*local_2b0 + 0x98))(local_2b0,local_2a8,local_318,local_2c0);
  if (local_338 < 0) {
    local_1e0 = FUN_140937560(local_338);
    uVar2 = std::operator<<<std::char_traits<char>_>(param_1 + 1,"RtApiDs::callbackEvent: error (");
    uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_1e0);
    std::operator<<<std::char_traits<char>_>(uVar2,") unlocking buffer during playback!");
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
              (param_1 + 2,local_c8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_1 + 0x1e,local_c8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_c8)
    ;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
    RtApi::error(param_1,9);
    return;
  }
  local_31c = (local_31c + local_318 + local_314) % local_320;
  local_330[0xb] = local_31c;
LAB_140931345:
  if (*local_330 == 0) {
    if (((int)param_1[0x25] == 1) || ((int)param_1[0x25] == 2)) {
      if (*(char *)((longlong)param_1 + 0x149) == '\0') {
        local_2f0 = (undefined1 *)param_1[0x27];
        local_334 = *(int *)((longlong)param_1 + 0x154) * (int)param_1[0x2c];
        iVar1 = RtApi::formatBytes(param_1,*(undefined4 *)((longlong)param_1 + 0x17c));
        local_334 = local_334 * iVar1;
      }
      else {
        local_2f0 = (undefined1 *)param_1[0x28];
        local_334 = *(int *)((longlong)param_1 + 0x154) * (int)param_1[0x2d];
        iVar1 = RtApi::formatBytes(param_1,*(undefined4 *)((longlong)param_1 + 0x184));
        local_334 = local_334 * iVar1;
      }
      local_2b8 = *(longlong **)(local_330 + 8);
      local_324 = local_330[0xc];
      local_2dc = local_330[0xe];
      local_338 = (**(code **)(*local_2b8 + 0x20))(local_2b8,local_260,&local_328);
      if (local_338 < 0) {
        local_1d8 = FUN_140937560(local_338);
        uVar2 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::callbackEvent: error (");
        uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_1d8);
        std::operator<<<std::char_traits<char>_>(uVar2,") getting current read position!");
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_a8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_a8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_a8);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
        RtApi::error(param_1,9);
        return;
      }
      if (local_328 < local_324) {
        local_328 = local_328 + local_2dc;
      }
      local_2e0 = local_324 + local_334;
      if ((int)param_1[0x25] == 2) {
        if (local_328 < local_2e0) {
          if (*(int *)((longlong)param_1 + 0x28c) < 1) {
            local_2a0 = local_2e0 - local_328;
            *(undefined1 *)((longlong)local_330 + 0x29) = 1;
            if (local_2a0 < local_334 * 2) {
              local_324 = (local_328 - local_334) - local_2a0;
            }
            else {
              local_324 = local_328 + local_334 * -2;
            }
            if ((int)local_324 < 0) {
              local_324 = local_324 + local_2dc;
            }
          }
          else {
            for (local_324 = local_328 - local_334; (int)local_324 < 0;
                local_324 = local_324 + local_2dc) {
            }
          }
          local_2e0 = local_324 + local_334;
        }
      }
      else {
        while ((local_328 < local_2e0 && ((char)param_1[0x3c] != '\0'))) {
          local_290 = (double)(local_2e0 - local_328) * 1000.0;
          iVar1 = RtApi::formatBytes(param_1,*(undefined4 *)((longlong)param_1 + 0x184));
          local_290 = local_290 / (double)(uint)(iVar1 * (int)param_1[0x2d] * (int)param_1[0x2a]);
          if (local_290 < 1.0) {
            local_290 = 1.0;
          }
          Sleep((DWORD)(longlong)local_290);
          local_338 = (**(code **)(*local_2b8 + 0x20))(local_2b8,local_260,&local_328);
          if (local_338 < 0) {
            local_1d0 = FUN_140937560(local_338);
            uVar2 = std::operator<<<std::char_traits<char>_>
                              (param_1 + 1,"RtApiDs::callbackEvent: error (");
            uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_1d0);
            std::operator<<<std::char_traits<char>_>(uVar2,") getting current read position!");
            std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                      (param_1 + 2,local_88);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                      (param_1 + 0x1e,local_88);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (local_88);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
            RtApi::error(param_1,9);
            return;
          }
          if (local_328 < local_324) {
            local_328 = local_328 + local_2dc;
          }
        }
      }
      local_340 = 0;
      local_348 = &local_314;
      local_350 = &local_2c0;
      local_358 = &local_318;
      local_338 = (**(code **)(*local_2b8 + 0x40))(local_2b8,local_324,local_334,&local_2a8);
      if (local_338 < 0) {
        local_1c8 = FUN_140937560(local_338);
        uVar2 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::callbackEvent: error (");
        uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_1c8);
        std::operator<<<std::char_traits<char>_>(uVar2,") locking capture buffer!");
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_68);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_68);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_68);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
        RtApi::error(param_1,9);
        return;
      }
      if (*(int *)((longlong)param_1 + 0x28c) < 1) {
        puVar5 = local_2a8;
        puVar6 = local_2f0;
        for (uVar4 = (ulonglong)local_318; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        if (local_2c0 != (undefined1 *)0x0) {
          puVar5 = local_2c0;
          puVar6 = local_2f0 + local_318;
          for (uVar4 = (ulonglong)local_314; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
      else {
        local_1c0 = (ulonglong)local_318;
        puVar5 = local_2f0;
        for (uVar4 = local_1c0; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        if (local_2c0 != (undefined1 *)0x0) {
          local_1b8 = (ulonglong)local_314;
          puVar5 = local_2f0 + local_318;
          for (uVar4 = local_1b8; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
        }
        *(uint *)((longlong)param_1 + 0x28c) =
             *(int *)((longlong)param_1 + 0x28c) - (local_318 + local_314);
      }
      local_324 = (local_324 + local_318 + local_314) % local_2dc;
      local_358 = (uint *)CONCAT44(local_358._4_4_,local_314);
      (**(code **)(*local_2b8 + 0x58))(local_2b8,local_2a8,local_318,local_2c0);
      if (local_338 < 0) {
        local_1b0 = FUN_140937560(local_338);
        uVar2 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::callbackEvent: error (");
        uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_1b0);
        std::operator<<<std::char_traits<char>_>(uVar2,") unlocking capture buffer!");
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_48);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_48);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_48);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
        RtApi::error(param_1,9);
        return;
      }
      local_330[0xc] = local_324;
      if (*(int *)((longlong)param_1 + 0x184) == 1) {
        for (local_2d8 = 0; local_2d8 < local_334; local_2d8 = local_2d8 + 1) {
          local_2f0[local_2d8] = local_2f0[local_2d8] + -0x80;
        }
      }
      if (*(char *)((longlong)param_1 + 0x149) != '\0') {
        RtApi::convertBuffer(param_1,param_1[0x27],param_1[0x28],param_1 + 0x46);
      }
    }
  }
  else {
    *local_330 = *local_330 + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  RtApi::tickStreamTime(param_1);
  return;
}



// FUNCTION 140931d60 callbackHandler body=86 status=ok
// SIG undefined callbackHandler(void)

undefined8 callbackHandler(longlong param_1)

{
  while (*(char *)(param_1 + 0x30) == '\x01') {
    RtApiDs::callbackEvent();
  }
  _endthreadex(0);
  return 0;
}



// FUNCTION 140931dc0 clear body=76 status=ok
// SIG undefined clear(void)

void std::vector<int,std::allocator<int>_>::clear(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [32];
  
  puVar2 = local_28;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = *param_1;
  return;
}



// FUNCTION 140931e10 clearStreamInfo body=647 status=ok
// SIG undefined clearStreamInfo(void)

void RtApi::clearStreamInfo(longlong param_1)

{
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x128) = 0xffffffb5;
  *(undefined4 *)(param_1 + 300) = 0xffffffce;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x14a) = 1;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    *(undefined4 *)(param_1 + 0x118 + (longlong)local_18 * 4) = 0x2b67;
    *(undefined1 *)(param_1 + 0x148 + (longlong)local_18) = 0;
    *(undefined1 *)(param_1 + 0x14b + (longlong)local_18) = 1;
    *(undefined1 *)(param_1 + 0x14d + (longlong)local_18) = 0;
    *(undefined4 *)(param_1 + 0x15c + (longlong)local_18 * 4) = 0;
    *(undefined4 *)(param_1 + 0x164 + (longlong)local_18 * 4) = 0;
    *(undefined4 *)(param_1 + 0x16c + (longlong)local_18 * 4) = 0;
    *(undefined4 *)(param_1 + 0x180 + (longlong)local_18 * 4) = 0;
    *(undefined4 *)(param_1 + 0x174 + (longlong)local_18 * 4) = 0;
    *(undefined8 *)(param_1 + 0x130 + (longlong)local_18 * 8) = 0;
    *(undefined4 *)(param_1 + 0x1e8 + (longlong)local_18 * 0x48) = 0;
    *(undefined4 *)(param_1 + 0x1ec + (longlong)local_18 * 0x48) = 0;
    *(undefined4 *)(param_1 + 0x1f0 + (longlong)local_18 * 0x48) = 0;
    *(undefined4 *)(param_1 + 500 + (longlong)local_18 * 0x48) = 0;
    *(undefined4 *)(param_1 + 0x1f8 + (longlong)local_18 * 0x48) = 0;
    std::vector<int,std::allocator<int>_>::clear(param_1 + 0x200 + (longlong)local_18 * 0x48);
    std::vector<int,std::allocator<int>_>::clear(param_1 + 0x218 + (longlong)local_18 * 0x48);
  }
  return;
}



// FUNCTION 1409320a0 closeStream body=744 status=ok
// SIG undefined closeStream(void)

void RtApiDs::closeStream(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_58;
  longlong local_38;
  
  if (*(int *)(param_1 + 300) == -0x32) {
    local_38 = -1;
    do {
      lVar1 = local_38 + 1;
      lVar4 = local_38 + 1;
      local_38 = lVar1;
    } while ("RtApiDs::closeStream(): no open stream to close!"[lVar4] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0xf0,"RtApiDs::closeStream(): no open stream to close!",lVar1);
    RtApi::error(param_1,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x1b8),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 0x1b8));
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        plVar2 = *(longlong **)(lVar1 + 8);
        plVar3 = *(longlong **)(lVar1 + 0x18);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x90))(plVar3);
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        plVar2 = *(longlong **)(lVar1 + 0x10);
        plVar3 = *(longlong **)(lVar1 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x50))(plVar3);
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      CloseHandle(*(HANDLE *)(lVar1 + 0x48));
      FMemory::operator_delete(lVar1,0x50);
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    for (local_58 = 0; local_58 < 2; local_58 = local_58 + 1) {
      if (*(longlong *)(param_1 + 0x130 + (longlong)local_58 * 8) != 0) {
        free(*(void **)(param_1 + 0x130 + (longlong)local_58 * 8));
        *(undefined8 *)(param_1 + 0x130 + (longlong)local_58 * 8) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      free(*(void **)(param_1 + 0x140));
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    *(undefined4 *)(param_1 + 0x128) = 0xffffffb5;
    *(undefined4 *)(param_1 + 300) = 0xffffffce;
  }
  return;
}



// FUNCTION 140932390 convertBuffer body=12511 status=ok
// SIG undefined convertBuffer(void)

void RtApi::convertBuffer(longlong param_1,undefined1 *param_2,longlong param_3,int *param_4)

{
  int iVar1;
  undefined2 extraout_var;
  undefined1 extraout_var_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int local_3f8;
  undefined1 *local_3f0;
  undefined1 *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  undefined1 *local_3d0;
  undefined1 *local_3c8;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_328;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310 [2];
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  double *local_1c8;
  double *local_1c0;
  float *local_188;
  float *local_180;
  int *local_158;
  ulonglong local_148;
  int *local_130;
  int *local_128;
  int *local_f8;
  int *local_f0;
  int *local_c0;
  int *local_b8;
  int *local_78;
  int *local_70;
  int *local_50;
  int *local_40;
  int *local_38;
  
  if (((param_2 == *(undefined1 **)(param_1 + 0x140)) && (*(int *)(param_1 + 0x128) == 2)) &&
     (*(uint *)(param_1 + 0x164) < *(uint *)(param_1 + 0x168))) {
    iVar3 = *(int *)(param_1 + 0x154);
    iVar1 = param_4[2];
    iVar2 = formatBytes(param_1,param_4[4]);
    local_148 = (ulonglong)(uint)(iVar3 * iVar1 * iVar2);
    puVar7 = param_2;
    for (uVar5 = local_148; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if (param_4[4] == 0x20) {
    local_3f0 = param_2;
    if (param_4[3] == 1) {
      local_308 = param_3;
      for (local_354 = 0; local_354 < *(uint *)(param_1 + 0x154); local_354 = local_354 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               (double)(int)*(char *)(local_308 +
                                     *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4))
          ;
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               *(double *)
                (local_3f0 +
                (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) +
               0.5;
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               *(double *)
                (local_3f0 +
                (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) *
               0.00784313725490196;
        }
        local_308 = local_308 + param_4[1];
        local_3f0 = local_3f0 + (longlong)param_4[2] * 8;
      }
    }
    else if (param_4[3] == 2) {
      local_300 = param_3;
      for (local_344 = 0; local_344 < *(uint *)(param_1 + 0x154); local_344 = local_344 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               (double)(int)*(short *)(local_300 +
                                      (longlong)
                                      *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4)
                                      * 2);
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               *(double *)
                (local_3f0 +
                (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) +
               0.5;
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               *(double *)
                (local_3f0 +
                (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) *
               3.0518043793392844e-05;
        }
        local_300 = local_300 + (longlong)param_4[1] * 2;
        local_3f0 = local_3f0 + (longlong)param_4[2] * 8;
      }
    }
    else if (param_4[3] == 4) {
      local_2f8 = param_3;
      for (local_33c = 0; local_33c < *(uint *)(param_1 + 0x154); local_33c = local_33c + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_130 = (int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4);
          local_128 = (int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4);
          iVar3 = S24::asInt(local_2f8 + (longlong)*local_130 * 3);
          *(double *)(local_3f0 + (longlong)*local_128 * 8) = (double)iVar3;
          local_1c8 = (double *)
                      (local_3f0 +
                      (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8
                      );
          *local_1c8 = *local_1c8 + 0.5;
          local_1c0 = (double *)
                      (local_3f0 +
                      (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8
                      );
          *local_1c0 = *local_1c0 * 1.1920929665620903e-07;
        }
        local_2f8 = local_2f8 + (longlong)param_4[1] * 3;
        local_3f0 = local_3f0 + (longlong)param_4[2] * 8;
      }
    }
    else if (param_4[3] == 8) {
      local_2f0 = param_3;
      for (local_384 = 0; local_384 < *(uint *)(param_1 + 0x154); local_384 = local_384 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               (double)*(int *)(local_2f0 +
                               (longlong)
                               *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4);
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               *(double *)
                (local_3f0 +
                (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) +
               0.5;
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               *(double *)
                (local_3f0 +
                (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) *
               4.656612874161595e-10;
        }
        local_2f0 = local_2f0 + (longlong)param_4[1] * 4;
        local_3f0 = local_3f0 + (longlong)param_4[2] * 8;
      }
    }
    else if (param_4[3] == 0x10) {
      local_2e8 = param_3;
      for (local_338 = 0; local_338 < *(uint *)(param_1 + 0x154); local_338 = local_338 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(double *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               (double)*(float *)(local_2e8 +
                                 (longlong)
                                 *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4)
          ;
        }
        local_2e8 = local_2e8 + (longlong)param_4[1] * 4;
        local_3f0 = local_3f0 + (longlong)param_4[2] * 8;
      }
    }
    else if (param_4[3] == 0x20) {
      local_2e0 = param_3;
      for (local_334 = 0; local_334 < *(uint *)(param_1 + 0x154); local_334 = local_334 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(undefined8 *)
           (local_3f0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 8) =
               *(undefined8 *)
                (local_2e0 +
                (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 8);
        }
        local_2e0 = local_2e0 + (longlong)param_4[1] * 8;
        local_3f0 = local_3f0 + (longlong)param_4[2] * 8;
      }
    }
  }
  else if (param_4[4] == 0x10) {
    local_3e8 = param_2;
    if (param_4[3] == 1) {
      local_2d8 = param_3;
      for (local_3bc = 0; local_3bc < *(uint *)(param_1 + 0x154); local_3bc = local_3bc + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = (float)(int)*(char *)(local_2d8 +
                                      *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4)
                                      );
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = *(float *)(local_3e8 +
                           (longlong)
                           *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) +
                 0.5;
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = *(float *)(local_3e8 +
                           (longlong)
                           *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) *
                 0.007843138;
        }
        local_2d8 = local_2d8 + param_4[1];
        local_3e8 = local_3e8 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 2) {
      local_2d0 = param_3;
      for (local_3b8 = 0; local_3b8 < *(uint *)(param_1 + 0x154); local_3b8 = local_3b8 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = (float)(int)*(short *)(local_2d0 +
                                       (longlong)
                                       *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4
                                               ) * 2);
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = *(float *)(local_3e8 +
                           (longlong)
                           *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) +
                 0.5;
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = *(float *)(local_3e8 +
                           (longlong)
                           *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) *
                 3.0518044e-05;
        }
        local_2d0 = local_2d0 + (longlong)param_4[1] * 2;
        local_3e8 = local_3e8 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 4) {
      local_2c8 = param_3;
      for (local_3b4 = 0; local_3b4 < *(uint *)(param_1 + 0x154); local_3b4 = local_3b4 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_f8 = (int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4);
          local_f0 = (int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4);
          iVar3 = S24::asInt(local_2c8 + (longlong)*local_f8 * 3);
          *(float *)(local_3e8 + (longlong)*local_f0 * 4) = (float)iVar3;
          local_188 = (float *)(local_3e8 +
                               (longlong)
                               *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
          ;
          *local_188 = *local_188 + 0.5;
          local_180 = (float *)(local_3e8 +
                               (longlong)
                               *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
          ;
          *local_180 = *local_180 * 1.192093e-07;
        }
        local_2c8 = local_2c8 + (longlong)param_4[1] * 3;
        local_3e8 = local_3e8 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 8) {
      local_2c0 = param_3;
      for (local_3b0 = 0; local_3b0 < *(uint *)(param_1 + 0x154); local_3b0 = local_3b0 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = (float)*(int *)(local_2c0 +
                                (longlong)
                                *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4);
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = *(float *)(local_3e8 +
                           (longlong)
                           *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) +
                 0.5;
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = *(float *)(local_3e8 +
                           (longlong)
                           *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) *
                 4.656613e-10;
        }
        local_2c0 = local_2c0 + (longlong)param_4[1] * 4;
        local_3e8 = local_3e8 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 0x10) {
      local_2b8 = param_3;
      for (local_3ac = 0; local_3ac < *(uint *)(param_1 + 0x154); local_3ac = local_3ac + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(undefined4 *)
           (local_3e8 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               *(undefined4 *)
                (local_2b8 +
                (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4);
        }
        local_2b8 = local_2b8 + (longlong)param_4[1] * 4;
        local_3e8 = local_3e8 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 0x20) {
      local_2b0 = param_3;
      for (local_3a8 = 0; local_3a8 < *(uint *)(param_1 + 0x154); local_3a8 = local_3a8 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(float *)(local_3e8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4)
               = (float)*(double *)
                         (local_2b0 +
                         (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) *
                         8);
        }
        local_2b0 = local_2b0 + (longlong)param_4[1] * 8;
        local_3e8 = local_3e8 + (longlong)param_4[2] * 4;
      }
    }
  }
  else if (param_4[4] == 8) {
    local_3e0 = param_2;
    if (param_4[3] == 1) {
      local_2a8 = param_3;
      for (local_3a4 = 0; local_3a4 < *(uint *)(param_1 + 0x154); local_3a4 = local_3a4 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(int *)(local_3e0 +
                  (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               (int)*(char *)(local_2a8 +
                             *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4));
          *(int *)(local_3e0 +
                  (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               *(int *)(local_3e0 +
                       (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) *
                       4) << 0x18;
        }
        local_2a8 = local_2a8 + param_4[1];
        local_3e0 = local_3e0 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 2) {
      local_2a0 = param_3;
      for (local_3a0 = 0; local_3a0 < *(uint *)(param_1 + 0x154); local_3a0 = local_3a0 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(int *)(local_3e0 +
                  (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               (int)*(short *)(local_2a0 +
                              (longlong)
                              *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 2);
          *(int *)(local_3e0 +
                  (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               *(int *)(local_3e0 +
                       (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) *
                       4) << 0x10;
        }
        local_2a0 = local_2a0 + (longlong)param_4[1] * 2;
        local_3e0 = local_3e0 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 4) {
      local_298 = param_3;
      for (local_39c = 0; local_39c < *(uint *)(param_1 + 0x154); local_39c = local_39c + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_c0 = (int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4);
          local_b8 = (int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4);
          uVar4 = S24::asInt(local_298 + (longlong)*local_c0 * 3);
          *(undefined4 *)(local_3e0 + (longlong)*local_b8 * 4) = uVar4;
          local_158 = (int *)(local_3e0 +
                             (longlong)
                             *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4);
          *local_158 = *local_158 << 8;
        }
        local_298 = local_298 + (longlong)param_4[1] * 3;
        local_3e0 = local_3e0 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 8) {
      local_290 = param_3;
      for (local_398 = 0; local_398 < *(uint *)(param_1 + 0x154); local_398 = local_398 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(undefined4 *)
           (local_3e0 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               *(undefined4 *)
                (local_290 +
                (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4);
        }
        local_290 = local_290 + (longlong)param_4[1] * 4;
        local_3e0 = local_3e0 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 0x10) {
      local_288 = param_3;
      for (local_394 = 0; local_394 < *(uint *)(param_1 + 0x154); local_394 = local_394 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(int *)(local_3e0 +
                  (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               (int)(*(float *)(local_288 +
                               (longlong)
                               *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4) *
                     2.1474836e+09 - 0.5);
        }
        local_288 = local_288 + (longlong)param_4[1] * 4;
        local_3e0 = local_3e0 + (longlong)param_4[2] * 4;
      }
    }
    else if (param_4[3] == 0x20) {
      local_280 = param_3;
      for (local_390 = 0; local_390 < *(uint *)(param_1 + 0x154); local_390 = local_390 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(int *)(local_3e0 +
                  (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 4) =
               (int)(*(double *)
                      (local_280 +
                      (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 8)
                     * 2147483647.5 - 0.5);
        }
        local_280 = local_280 + (longlong)param_4[1] * 8;
        local_3e0 = local_3e0 + (longlong)param_4[2] * 4;
      }
    }
  }
  else if (param_4[4] == 4) {
    local_3d0 = param_2;
    if (param_4[3] == 1) {
      local_278 = param_3;
      for (local_38c = 0; local_38c < *(uint *)(param_1 + 0x154); local_38c = local_38c + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_320 = (int)*(char *)(local_278 +
                                    *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4))
                      << 0x10;
          S24::operator=(local_3d0 +
                         (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)
                         * 3,&local_320);
        }
        local_278 = local_278 + param_4[1];
        local_3d0 = local_3d0 + (longlong)param_4[2] * 3;
      }
    }
    else if (param_4[3] == 2) {
      local_270 = param_3;
      for (local_388 = 0; local_388 < *(uint *)(param_1 + 0x154); local_388 = local_388 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_31c = (int)*(short *)(local_270 +
                                     (longlong)
                                     *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4)
                                     * 2) << 8;
          S24::operator=(local_3d0 +
                         (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)
                         * 3,&local_31c);
        }
        local_270 = local_270 + (longlong)param_4[1] * 2;
        local_3d0 = local_3d0 + (longlong)param_4[2] * 3;
      }
    }
    else if (param_4[3] == 4) {
      local_268 = param_3;
      for (local_340 = 0; local_340 < *(uint *)(param_1 + 0x154); local_340 = local_340 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          puVar7 = (undefined1 *)
                   (local_268 +
                   (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 3);
          puVar8 = local_3d0 +
                   (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 3;
          for (lVar6 = 3; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        local_268 = local_268 + (longlong)param_4[1] * 3;
        local_3d0 = local_3d0 + (longlong)param_4[2] * 3;
      }
    }
    else if (param_4[3] == 8) {
      local_260 = param_3;
      for (local_380 = 0; local_380 < *(uint *)(param_1 + 0x154); local_380 = local_380 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_318 = *(int *)(local_260 +
                              (longlong)
                              *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4) >>
                      8;
          S24::operator=(local_3d0 +
                         (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)
                         * 3,&local_318);
        }
        local_260 = local_260 + (longlong)param_4[1] * 4;
        local_3d0 = local_3d0 + (longlong)param_4[2] * 3;
      }
    }
    else if (param_4[3] == 0x10) {
      local_258 = param_3;
      for (local_37c = 0; local_37c < *(uint *)(param_1 + 0x154); local_37c = local_37c + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_314 = (int)(*(float *)(local_258 +
                                      (longlong)
                                      *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4)
                                      * 4) * 8388607.5 - 0.5);
          S24::operator=(local_3d0 +
                         (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)
                         * 3,&local_314);
        }
        local_258 = local_258 + (longlong)param_4[1] * 4;
        local_3d0 = local_3d0 + (longlong)param_4[2] * 3;
      }
    }
    else if (param_4[3] == 0x20) {
      local_250 = param_3;
      for (local_378 = 0; local_378 < *(uint *)(param_1 + 0x154); local_378 = local_378 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_310[0] = (int)(*(double *)
                                (local_250 +
                                (longlong)
                                *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 8)
                               * 8388607.5 - 0.5);
          S24::operator=(local_3d0 +
                         (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)
                         * 3,local_310);
        }
        local_250 = local_250 + (longlong)param_4[1] * 8;
        local_3d0 = local_3d0 + (longlong)param_4[2] * 3;
      }
    }
  }
  else if (param_4[4] == 2) {
    local_3d8 = param_2;
    if (param_4[3] == 1) {
      local_248 = param_3;
      for (local_374 = 0; local_374 < *(uint *)(param_1 + 0x154); local_374 = local_374 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(short *)(local_3d8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 2)
               = (short)*(char *)(local_248 +
                                 *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4));
          *(short *)(local_3d8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 2)
               = *(short *)(local_3d8 +
                           (longlong)
                           *(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 2) <<
                 8;
        }
        local_248 = local_248 + param_4[1];
        local_3d8 = local_3d8 + (longlong)param_4[2] * 2;
      }
    }
    else if (param_4[3] == 2) {
      local_240 = param_3;
      for (local_370 = 0; local_370 < *(uint *)(param_1 + 0x154); local_370 = local_370 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(undefined2 *)
           (local_3d8 +
           (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 2) =
               *(undefined2 *)
                (local_240 +
                (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 2);
        }
        local_240 = local_240 + (longlong)param_4[1] * 2;
        local_3d8 = local_3d8 + (longlong)param_4[2] * 2;
      }
    }
    else if (param_4[3] == 4) {
      local_238 = param_3;
      for (local_36c = 0; local_36c < *(uint *)(param_1 + 0x154); local_36c = local_36c + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_78 = (int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4);
          local_70 = (int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4);
          S24::asInt(local_238 + (longlong)*local_78 * 3);
          *(undefined2 *)(local_3d8 + (longlong)*local_70 * 2) = extraout_var;
        }
        local_238 = local_238 + (longlong)param_4[1] * 3;
        local_3d8 = local_3d8 + (longlong)param_4[2] * 2;
      }
    }
    else if (param_4[3] == 8) {
      local_230 = param_3;
      for (local_368 = 0; local_368 < *(uint *)(param_1 + 0x154); local_368 = local_368 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(short *)(local_3d8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 2)
               = (short)((uint)*(undefined4 *)
                                (local_230 +
                                (longlong)
                                *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4)
                        >> 0x10);
        }
        local_230 = local_230 + (longlong)param_4[1] * 4;
        local_3d8 = local_3d8 + (longlong)param_4[2] * 2;
      }
    }
    else if (param_4[3] == 0x10) {
      local_228 = param_3;
      for (local_364 = 0; local_364 < *(uint *)(param_1 + 0x154); local_364 = local_364 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(short *)(local_3d8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 2)
               = (short)(int)(*(float *)(local_228 +
                                        (longlong)
                                        *(int *)(*(longlong *)(param_4 + 6) +
                                                (longlong)local_3f8 * 4) * 4) * 32767.5 - 0.5);
        }
        local_228 = local_228 + (longlong)param_4[1] * 4;
        local_3d8 = local_3d8 + (longlong)param_4[2] * 2;
      }
    }
    else if (param_4[3] == 0x20) {
      local_220 = param_3;
      for (local_360 = 0; local_360 < *(uint *)(param_1 + 0x154); local_360 = local_360 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          *(short *)(local_3d8 +
                    (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4) * 2)
               = (short)(int)(*(double *)
                               (local_220 +
                               (longlong)
                               *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 8) *
                              32767.5 - 0.5);
        }
        local_220 = local_220 + (longlong)param_4[1] * 8;
        local_3d8 = local_3d8 + (longlong)param_4[2] * 2;
      }
    }
  }
  else if (param_4[4] == 1) {
    local_3c8 = param_2;
    if (param_4[3] == 1) {
      local_218 = param_3;
      for (local_35c = 0; local_35c < *(uint *)(param_1 + 0x154); local_35c = local_35c + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_50 = (int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4);
          local_3c8[*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)] =
               *(undefined1 *)(local_218 + *local_50);
        }
        local_218 = local_218 + param_4[1];
        local_3c8 = local_3c8 + param_4[2];
      }
    }
    if (param_4[3] == 2) {
      local_210 = param_3;
      for (local_358 = 0; local_358 < *(uint *)(param_1 + 0x154); local_358 = local_358 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_3c8[*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)] =
               (char)((ushort)*(undefined2 *)
                               (local_210 +
                               (longlong)
                               *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 2)
                     >> 8);
        }
        local_210 = local_210 + (longlong)param_4[1] * 2;
        local_3c8 = local_3c8 + param_4[2];
      }
    }
    else if (param_4[3] == 4) {
      local_208 = param_3;
      for (local_328 = 0; local_328 < *(uint *)(param_1 + 0x154); local_328 = local_328 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_40 = (int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4);
          local_38 = (int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4);
          S24::asInt(local_208 + (longlong)*local_40 * 3);
          local_3c8[*local_38] = extraout_var_00;
        }
        local_208 = local_208 + (longlong)param_4[1] * 3;
        local_3c8 = local_3c8 + param_4[2];
      }
    }
    else if (param_4[3] == 8) {
      local_200 = param_3;
      for (local_350 = 0; local_350 < *(uint *)(param_1 + 0x154); local_350 = local_350 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_3c8[*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)] =
               (char)((uint)*(undefined4 *)
                             (local_200 +
                             (longlong)
                             *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4) * 4) >>
                     0x18);
        }
        local_200 = local_200 + (longlong)param_4[1] * 4;
        local_3c8 = local_3c8 + param_4[2];
      }
    }
    else if (param_4[3] == 0x10) {
      local_1f8 = param_3;
      for (local_34c = 0; local_34c < *(uint *)(param_1 + 0x154); local_34c = local_34c + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_3c8[*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)] =
               (char)(int)(*(float *)(local_1f8 +
                                     (longlong)
                                     *(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4)
                                     * 4) * 127.5 - 0.5);
        }
        local_1f8 = local_1f8 + (longlong)param_4[1] * 4;
        local_3c8 = local_3c8 + param_4[2];
      }
    }
    else if (param_4[3] == 0x20) {
      local_1f0 = param_3;
      for (local_348 = 0; local_348 < *(uint *)(param_1 + 0x154); local_348 = local_348 + 1) {
        for (local_3f8 = 0; local_3f8 < *param_4; local_3f8 = local_3f8 + 1) {
          local_3c8[*(int *)(*(longlong *)(param_4 + 0xc) + (longlong)local_3f8 * 4)] =
               (char)(int)(*(double *)
                            (local_1f0 +
                            (longlong)*(int *)(*(longlong *)(param_4 + 6) + (longlong)local_3f8 * 4)
                            * 8) * 127.5 - 0.5);
        }
        local_1f0 = local_1f0 + (longlong)param_4[1] * 8;
        local_3c8 = local_3c8 + param_4[2];
      }
    }
  }
  return;
}



// FUNCTION 140935470 convertCharPointerToStdString body=305 status=ok
// SIG undefined convertCharPointerToStdString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 convertCharPointerToStdString(undefined8 param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  undefined1 auStackY_88 [32];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStackY_88;
  cbMultiByte = WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_20 = 0;
  local_18 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_init(local_30);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_30,(longlong)(cbMultiByte + -1),0);
  lpMultiByteStr =
       (LPSTR)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                        (local_30,0);
  WideCharToMultiByte(0xfde9,0,param_2,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,local_30);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_30);
  return param_1;
}



// FUNCTION 1409355b0 deviceQueryCallback body=1047 status=ok
// SIG undefined deviceQueryCallback(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 deviceQueryCallback(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_168 [32];
  char local_148;
  uint local_144;
  int local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  char *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  char *local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined4 local_e8 [2];
  int local_e0;
  int local_dc;
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  undefined1 uStack_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a0 [40];
  undefined4 local_78;
  uint local_74;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = *(longlong **)(param_4 + 8);
  local_148 = '\0';
  local_118 = param_4;
  if (*param_4 == '\x01') {
    local_140 = _guard_xfg_dispatch_icall_nop(param_1,&local_130,0);
    if (local_140 != 0) {
      return 1;
    }
    local_e8[0] = 0x10;
    local_140 = (**(code **)(*local_130 + 0x20))(local_130,local_e8);
    if (((local_140 == 0) && (local_dc != 0)) && (local_e0 != 0)) {
      local_148 = '\x01';
    }
    (**(code **)(*local_130 + 0x10))(local_130);
  }
  else {
    local_140 = _guard_xfg_dispatch_icall_nop(param_1,&local_128,0);
    if (local_140 != 0) {
      return 1;
    }
    local_78 = 0x60;
    local_140 = (**(code **)(*local_128 + 0x20))(local_128,&local_78);
    if ((local_140 == 0) && (((local_74 & 1) != 0 || ((local_74 & 2) != 0)))) {
      local_148 = '\x01';
    }
    (**(code **)(*local_128 + 0x10))(local_128);
  }
  convertCharPointerToStdString(local_d8,param_2);
  if (param_1 == 0) {
    local_108 = "Default Device";
    local_120 = -1;
    do {
      local_100 = local_120 + 1;
      lVar1 = local_120 + 1;
      local_120 = local_100;
    } while ("Default Device"[lVar1] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_d8,"Default Device",local_100);
  }
  if (local_148 != '\0') {
    local_144 = 0;
    while( true ) {
      local_f8 = (ulonglong)local_144;
      if ((ulonglong)((local_138[1] - *local_138) / 0x38) <= local_f8) break;
      local_f0 = (ulonglong)local_144 * 0x38 + *local_138;
      cVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Equal
                        (local_f0 + 0x18,local_d8);
      if (cVar2 != '\0') {
        *(undefined1 *)(*local_138 + 0x12 + (ulonglong)local_144 * 0x38) = 1;
        if (*local_118 == '\0') {
          *(longlong *)((ulonglong)local_144 * 0x38 + *local_138) = param_1;
          *(undefined1 *)((ulonglong)local_144 * 0x38 + *local_138 + 0x10) = 1;
        }
        else {
          *(longlong *)((ulonglong)local_144 * 0x38 + *local_138 + 8) = param_1;
          *(undefined1 *)((ulonglong)local_144 * 0x38 + *local_138 + 0x11) = 1;
        }
        local_110 = 1;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_d8);
        return local_110;
      }
      local_144 = local_144 + 1;
    }
    DsDevice::DsDevice(&local_b8,(local_138[1] - *local_138) % 0x38);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (local_a0,local_d8);
    local_a6 = 1;
    if (*local_118 == '\0') {
      uStack_a8 = 1;
      local_b8 = param_1;
    }
    else {
      local_a7 = 1;
      lStack_b0 = param_1;
    }
    std::vector<DsDevice,std::allocator<DsDevice>_>::emplace_back<DsDevice_const_&>
              (local_138,&local_b8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_a0)
    ;
  }
  local_10c = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_d8);
  return local_10c;
}



// FUNCTION 1409359d0 end body=49 status=ok
// SIG undefined end(void)

undefined8 *
std::vector<unsigned_int,std::allocator<unsigned_int>_>::end(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  return param_2;
}



// FUNCTION 140935a10 erase body=289 status=ok
// SIG undefined erase(void)

/* WARNING: Removing unreachable block (ram,0x000140935ae5) */

longlong *
std::vector<DsDevice,std::allocator<DsDevice>_>::erase
          (longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_10 = *(longlong *)(param_1 + 8);
  local_18 = param_3 + 0x38;
  puVar2 = local_48;
  local_20 = param_3;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_48[1] = local_48[0];
  local_38 = local_20;
  for (local_40 = local_18; local_40 != local_10; local_40 = local_40 + 0x38) {
    DsDevice::operator=(local_38,local_40);
    local_38 = local_38 + 0x38;
  }
  local_30 = *(longlong *)(param_1 + 8) + -0x38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (*(longlong *)(param_1 + 8) + -0x20);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x38;
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 140935b40 error body=593 status=ok
// SIG undefined error(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RtApi::error(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  code *local_98;
  longlong *local_90;
  undefined **local_88;
  undefined8 local_80;
  int local_78;
  undefined1 *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30,&DAT_144160d0b);
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str(param_1 + 2,local_30)
  ;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_30);
  local_98 = (code *)param_1[0x3a];
  if (local_98 == (code *)0x0) {
    if ((param_2 == 0) && ((char)param_1[0x22] == '\x01')) {
      local_90 = param_1 + 0x1e;
      local_60 = std::operator<<<std::char_traits<char>_>(cerr_exref,10);
      local_68 = local_90[2];
      uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_90);
      uVar1 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_60,uVar1,local_68);
      std::operator<<<std::char_traits<char>_>(uVar1,&DAT_144161414);
    }
    else if (param_2 != 0) {
      local_80 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                           (param_1 + 0x1e);
      local_88 = &PTR__scalar_deleting_destructor__144162388;
      local_78 = param_2;
      local_58 = local_80;
      throw_wrapper(&local_88);
    }
  }
  else if ((char)param_1[0x50] == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    local_70 = local_50;
    std::_String_val<std::_Simple_types<char>_>::_String_val<std::_Simple_types<char>_>(local_70);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct_lv_contents
              (local_50,param_1 + 0x1e);
    if ((param_2 != 0) && (*(int *)((longlong)param_1 + 300) != 0)) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    (*local_98)(param_2,local_50);
    *(undefined1 *)(param_1 + 0x50) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_50)
    ;
  }
  return;
}



// FUNCTION 140935da0 formatBytes body=201 status=ok
// SIG undefined formatBytes(void)

undefined8 RtApi::formatBytes(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_28;
  
  if (param_2 == 2) {
    uVar3 = 2;
  }
  else if ((param_2 == 8) || (param_2 == 0x10)) {
    uVar3 = 4;
  }
  else if (param_2 == 0x20) {
    uVar3 = 8;
  }
  else if (param_2 == 4) {
    uVar3 = 3;
  }
  else if (param_2 == 1) {
    uVar3 = 1;
  }
  else {
    local_28 = -1;
    do {
      lVar1 = local_28 + 1;
      lVar2 = local_28 + 1;
      local_28 = lVar1;
    } while ("RtApi::formatBytes: undefined format."[lVar2] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0xf0,"RtApi::formatBytes: undefined format.",lVar1);
    error(param_1,0);
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 140935e80 getCompiledApi body=47 status=ok
// SIG undefined getCompiledApi(void)

void RtAudio::getCompiledApi(undefined8 param_1)

{
  undefined4 local_18 [6];
  
  std::vector<int,std::allocator<int>_>::clear(param_1);
  local_18[0] = 8;
  std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>(param_1,local_18);
  return;
}



// FUNCTION 140935ec0 getDeviceCount body=931 status=ok
// SIG undefined getDeviceCount(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong RtApiDs::getDeviceCount(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  int local_e8;
  uint local_e4;
  uint local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e0 = 0;
  while( true ) {
    local_d0 = (longlong *)(param_1 + 0x290);
    local_a0 = (ulonglong)local_e0;
    if ((ulonglong)((*(longlong *)(param_1 + 0x298) - *local_d0) / 0x38) <= local_a0) break;
    *(undefined1 *)(*(longlong *)(param_1 + 0x290) + 0x12 + (ulonglong)local_e0 * 0x38) = 0;
    local_e0 = local_e0 + 1;
  }
  local_b0[0] = 0;
  local_a8 = param_1 + 0x290;
  local_e8 = ::_guard_xfg_dispatch_icall_nop(deviceQueryCallback,local_b0);
  if (local_e8 < 0) {
    local_98 = FUN_140937560(local_e8);
    uVar1 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::getDeviceCount: error (")
    ;
    uVar1 = std::operator<<<std::char_traits<char>_>(uVar1,local_98);
    std::operator<<<std::char_traits<char>_>(uVar1,") enumerating output devices!");
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
              (param_1 + 0x10,local_58);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_1 + 0xf0,local_58);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_58)
    ;
    RtApi::error(param_1,0);
  }
  local_b0[0] = 1;
  local_e8 = ::_guard_xfg_dispatch_icall_nop(deviceQueryCallback,local_b0);
  if (local_e8 < 0) {
    local_90 = FUN_140937560(local_e8);
    uVar1 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::getDeviceCount: error (")
    ;
    uVar1 = std::operator<<<std::char_traits<char>_>(uVar1,local_90);
    std::operator<<<std::char_traits<char>_>(uVar1,") enumerating input devices!");
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
              (param_1 + 0x10,local_38);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_1 + 0xf0,local_38);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_38)
    ;
    RtApi::error(param_1,0);
  }
  local_e4 = 0;
  while( true ) {
    local_c8 = (longlong *)(param_1 + 0x290);
    local_88 = (ulonglong)local_e4;
    if ((ulonglong)((*(longlong *)(param_1 + 0x298) - *local_c8) / 0x38) <= local_88) break;
    if (*(char *)(*(longlong *)(param_1 + 0x290) + 0x12 + (ulonglong)local_e4 * 0x38) == '\0') {
      local_c0 = (undefined8 *)(param_1 + 0x290);
      local_80 = *local_c0;
      std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DsDevice>_>_>::
      _Vector_const_iterator<std::_Vector_val<std::_Simple_types<DsDevice>_>_>
                (&local_78,local_80,local_c0);
      local_d8 = (ulonglong)local_e4 * 0x38 + local_78;
      local_70 = local_d8;
      local_68 = local_d8;
      std::vector<DsDevice,std::allocator<DsDevice>_>::erase(param_1 + 0x290,local_60,local_d8);
    }
    else {
      local_e4 = local_e4 + 1;
    }
  }
  return (*(longlong *)(param_1 + 0x298) - *(longlong *)(param_1 + 0x290)) / 0x38;
}



// FUNCTION 140936270 getDeviceInfo body=4834 status=ok
// SIG undefined getDeviceInfo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 RtApiDs::getDeviceInfo(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_338 [32];
  char local_318;
  int local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  undefined1 local_304;
  longlong local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  uint local_2d8;
  uint local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288 [2];
  longlong *local_280;
  undefined4 local_278 [2];
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  ulonglong local_238;
  char *local_230;
  longlong local_228;
  undefined8 *local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  int *local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  char *local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined4 local_168 [2];
  uint local_160;
  uint local_15c;
  undefined1 local_158 [8];
  undefined1 local_150 [32];
  uint local_130;
  uint local_12c;
  uint local_128;
  undefined1 local_124;
  undefined1 local_123;
  longlong local_120;
  longlong local_118;
  uint local_108;
  uint local_104;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  RtAudio::DeviceInfo::DeviceInfo(local_158);
  local_158[0] = 0;
  local_270 = param_1 + 0x52;
  if ((param_1[0x53] - *local_270) / 0x38 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,(param_1[0x53] - *local_270) % 0x38);
    local_268 = param_1 + 0x52;
    if ((param_1[0x53] - *local_268) / 0x38 == 0) {
      local_180 = "RtApiDs::getDeviceInfo: no devices found!";
      local_2d0 = -1;
      do {
        local_240 = local_2d0 + 1;
        lVar1 = local_2d0 + 1;
        local_2d0 = local_240;
      } while ("RtApiDs::getDeviceInfo: no devices found!"[lVar1] != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_1 + 0x1e,"RtApiDs::getDeviceInfo: no devices found!",local_240);
      RtApi::error(param_1,7);
      RtAudio::DeviceInfo::DeviceInfo(param_2,local_158);
      std::vector<int,std::allocator<int>_>::_Tidy(&local_120);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_150);
      return param_2;
    }
  }
  local_260 = param_1 + 0x52;
  local_238 = (ulonglong)param_3;
  if (local_238 < (ulonglong)((param_1[0x53] - *local_260) / 0x38)) {
    if (*(char *)(param_1[0x52] + (ulonglong)param_3 * 0x38 + 0x10) != '\0') {
      local_220 = (undefined8 *)((ulonglong)param_3 * 0x38 + param_1[0x52]);
      local_314 = ::_guard_xfg_dispatch_icall_nop(*local_220,&local_2e8,0);
      if (local_314 < 0) {
        local_218 = (ulonglong)param_3 * 0x38 + param_1[0x52];
        local_258 = local_218 + 0x18;
        local_210 = FUN_140937560(local_314);
        uVar3 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::getDeviceInfo: error (");
        uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,local_210);
        local_200 = std::operator<<<std::char_traits<char>_>(uVar3,") opening output device (");
        local_208 = *(undefined8 *)(local_258 + 0x10);
        uVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                          (local_258);
        uVar3 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (local_200,uVar3,local_208);
        std::operator<<<std::char_traits<char>_>(uVar3,&DAT_144160d0c);
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_f8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_f8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_f8);
        RtApi::error(param_1,0);
      }
      else {
        local_78 = 0x60;
        local_314 = (**(code **)(*local_2e8 + 0x20))(local_2e8,&local_78);
        if (local_314 < 0) {
          (**(code **)(*local_2e8 + 0x10))(local_2e8);
          local_1f8 = FUN_140937560(local_314);
          uVar3 = std::operator<<<std::char_traits<char>_>
                            (param_1 + 1,"RtApiDs::getDeviceInfo: error (");
          uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,local_1f8);
          std::operator<<<std::char_traits<char>_>(uVar3,") getting capabilities!");
          std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                    (param_1 + 2,local_d8);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (param_1 + 0x1e,local_d8);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_d8);
          RtApi::error(param_1,0);
        }
        else {
          if ((local_74 & 2) == 0) {
            local_2d8 = 1;
          }
          else {
            local_2d8 = 2;
          }
          local_130 = local_2d8;
          std::vector<int,std::allocator<int>_>::clear(&local_120);
          for (local_310 = 0; local_310 < 0xe; local_310 = local_310 + 1) {
            if (((local_70 <= *(uint *)(&DAT_144161ec8 + (ulonglong)local_310 * 4)) &&
                (*(uint *)(&DAT_144161ec8 + (ulonglong)local_310 * 4) <= local_6c)) &&
               ((std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                           (&local_120,&DAT_144161ec8 + (ulonglong)local_310 * 4), local_108 == 0 ||
                ((*(uint *)(&DAT_144161ec8 + (ulonglong)local_310 * 4) < 0xbb81 &&
                 (local_108 < *(uint *)(&DAT_144161ec8 + (ulonglong)local_310 * 4))))))) {
              local_108 = *(uint *)(&DAT_144161ec8 + (ulonglong)local_310 * 4);
            }
          }
          if ((local_74 & 8) != 0) {
            local_104 = local_104 | 2;
          }
          if ((local_74 & 4) != 0) {
            local_104 = local_104 | 1;
          }
          (**(code **)(*local_2e8 + 0x10))(local_2e8);
          uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
          if (uVar2 == param_3) {
            local_124 = 1;
          }
          if (*(char *)(param_1[0x52] + (ulonglong)param_3 * 0x38 + 0x11) == '\0') {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                      (local_150,param_1[0x52] + 0x18 + (ulonglong)param_3 * 0x38);
            local_158[0] = 1;
            RtAudio::DeviceInfo::DeviceInfo(param_2,local_158);
            std::vector<int,std::allocator<int>_>::_Tidy(&local_120);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (local_150);
            return param_2;
          }
        }
      }
    }
    local_1f0 = (ulonglong)param_3 * 0x38 + param_1[0x52];
    local_314 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(local_1f0 + 8),&local_2e0,0);
    if (local_314 < 0) {
      local_1e8 = (ulonglong)param_3 * 0x38 + param_1[0x52];
      local_250 = local_1e8 + 0x18;
      local_1e0 = FUN_140937560(local_314);
      uVar3 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 1,"RtApiDs::getDeviceInfo: error (");
      uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,local_1e0);
      local_1d0 = std::operator<<<std::char_traits<char>_>(uVar3,") opening input device (");
      local_1d8 = *(undefined8 *)(local_250 + 0x10);
      uVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_250)
      ;
      uVar3 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_1d0,uVar3,local_1d8);
      std::operator<<<std::char_traits<char>_>(uVar3,&DAT_144160eec);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 2,local_b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0x1e,local_b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_b8);
      RtApi::error(param_1,0);
      RtAudio::DeviceInfo::DeviceInfo(param_2,local_158);
      std::vector<int,std::allocator<int>_>::_Tidy(&local_120);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_150);
    }
    else {
      local_168[0] = 0x10;
      local_314 = (**(code **)(*local_2e0 + 0x20))(local_2e0,local_168);
      if (local_314 < 0) {
        (**(code **)(*local_2e0 + 0x10))(local_2e0);
        local_1c8 = (ulonglong)param_3 * 0x38 + param_1[0x52];
        local_248 = local_1c8 + 0x18;
        local_1c0 = FUN_140937560(local_314);
        uVar3 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 1,"RtApiDs::getDeviceInfo: error (");
        uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,local_1c0);
        local_1b0 = std::operator<<<std::char_traits<char>_>
                              (uVar3,") getting object capabilities (");
        local_1b8 = *(undefined8 *)(local_248 + 0x10);
        uVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                          (local_248);
        uVar3 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (local_1b0,uVar3,local_1b8);
        std::operator<<<std::char_traits<char>_>(uVar3,&DAT_144160f6c);
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 2,local_98);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0x1e,local_98);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_98);
        RtApi::error(param_1,0);
        RtAudio::DeviceInfo::DeviceInfo(param_2,local_158);
        std::vector<int,std::allocator<int>_>::_Tidy(&local_120);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_150);
      }
      else {
        local_12c = local_15c;
        local_280 = &local_300;
        local_300 = 0;
        local_2f8 = 0;
        local_2f0 = 0;
        local_1a8 = local_280;
        if (local_15c < 2) {
          if (local_15c == 1) {
            if ((local_160 & 4) != 0) {
              local_104 = local_104 | 2;
            }
            if ((local_160 & 0x40) != 0) {
              local_104 = local_104 | 2;
            }
            if ((local_160 & 0x400) != 0) {
              local_104 = local_104 | 2;
            }
            if ((local_160 & 0x40000) != 0) {
              local_104 = local_104 | 2;
            }
            if ((local_160 & 1) != 0) {
              local_104 = local_104 | 1;
            }
            if ((local_160 & 0x10) != 0) {
              local_104 = local_104 | 1;
            }
            if ((local_160 & 0x100) != 0) {
              local_104 = local_104 | 1;
            }
            if ((local_160 & 0x10000) != 0) {
              local_104 = local_104 | 1;
            }
            if ((local_104 & 2) == 0) {
              if ((local_104 & 1) != 0) {
                if ((local_160 & 1) != 0) {
                  local_294 = 0x2b11;
                  std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                            (&local_300,&local_294);
                }
                if ((local_160 & 0x10) != 0) {
                  local_290 = 0x5622;
                  std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                            (&local_300,&local_290);
                }
                if ((local_160 & 0x100) != 0) {
                  local_28c = 0xac44;
                  std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                            (&local_300,&local_28c);
                }
                if ((local_160 & 0x10000) != 0) {
                  local_288[0] = 96000;
                  std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                            (&local_300,local_288);
                }
              }
            }
            else {
              if ((local_160 & 4) != 0) {
                local_2a0 = 0x2b11;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,&local_2a0);
              }
              if ((local_160 & 0x40) != 0) {
                local_29c = 0x5622;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,&local_29c);
              }
              if ((local_160 & 0x400) != 0) {
                local_278[0] = 0xac44;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,local_278);
              }
              if ((local_160 & 0x40000) != 0) {
                local_298 = 96000;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,&local_298);
              }
            }
          }
          else {
            local_12c = 0;
          }
        }
        else {
          if ((local_160 & 8) != 0) {
            local_104 = local_104 | 2;
          }
          if ((local_160 & 0x80) != 0) {
            local_104 = local_104 | 2;
          }
          if ((local_160 & 0x800) != 0) {
            local_104 = local_104 | 2;
          }
          if ((local_160 & 0x80000) != 0) {
            local_104 = local_104 | 2;
          }
          if ((local_160 & 2) != 0) {
            local_104 = local_104 | 1;
          }
          if ((local_160 & 0x20) != 0) {
            local_104 = local_104 | 1;
          }
          if ((local_160 & 0x200) != 0) {
            local_104 = local_104 | 1;
          }
          if ((local_160 & 0x20000) != 0) {
            local_104 = local_104 | 1;
          }
          if ((local_104 & 2) == 0) {
            if ((local_104 & 1) != 0) {
              if ((local_160 & 2) != 0) {
                local_2b0 = 0x2b11;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,&local_2b0);
              }
              if ((local_160 & 0x20) != 0) {
                local_2ac = 0x5622;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,&local_2ac);
              }
              if ((local_160 & 0x200) != 0) {
                local_2a8 = 0xac44;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,&local_2a8);
              }
              if ((local_160 & 0x20000) != 0) {
                local_2a4 = 96000;
                std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                          (&local_300,&local_2a4);
              }
            }
          }
          else {
            if ((local_160 & 8) != 0) {
              local_2c0 = 0x2b11;
              std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                        (&local_300,&local_2c0);
            }
            if ((local_160 & 0x80) != 0) {
              local_2bc = 0x5622;
              std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                        (&local_300,&local_2bc);
            }
            if ((local_160 & 0x800) != 0) {
              local_2b8 = 0xac44;
              std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                        (&local_300,&local_2b8);
            }
            if ((local_160 & 0x80000) != 0) {
              local_2b4 = 96000;
              std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                        (&local_300,&local_2b4);
            }
          }
        }
        (**(code **)(*local_2e0 + 0x10))(local_2e0);
        if (local_12c == 0) {
          RtAudio::DeviceInfo::DeviceInfo(param_2,local_158);
          std::vector<int,std::allocator<int>_>::_Tidy(&local_300);
          std::vector<int,std::allocator<int>_>::_Tidy(&local_120);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_150);
        }
        else {
          for (local_30c = 0; (ulonglong)local_30c < (ulonglong)(local_2f8 - local_300 >> 2);
              local_30c = local_30c + 1) {
            local_318 = '\0';
            for (local_308 = 0; (ulonglong)local_308 < (ulonglong)(local_118 - local_120 >> 2);
                local_308 = local_308 + 1) {
              local_1a0 = (int *)(local_300 + (ulonglong)local_30c * 4);
              if (*local_1a0 == *(int *)(local_120 + (ulonglong)local_308 * 4)) {
                local_318 = '\x01';
                break;
              }
            }
            if (local_318 == '\0') {
              local_198 = local_300 + (ulonglong)local_30c * 4;
              std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>(&local_120,local_198)
              ;
            }
          }
          puVar4 = (undefined8 *)
                   std::vector<unsigned_int,std::allocator<unsigned_int>_>::end
                             (&local_120,local_170);
          local_190 = *puVar4;
          puVar4 = (undefined8 *)
                   std::vector<unsigned_int,std::allocator<unsigned_int>_>::begin
                             (&local_120,local_178);
          local_188 = *puVar4;
          std::
          sort<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,std::less<void>_>
                    (local_188,local_190,local_304);
          if ((local_130 != 0) && (local_12c != 0)) {
            if (local_12c < local_130) {
              local_2d4 = local_12c;
            }
            else {
              local_2d4 = local_130;
            }
            local_128 = local_2d4;
          }
          if (param_3 == 0) {
            local_123 = 1;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (local_150,param_1[0x52] + 0x18 + (ulonglong)param_3 * 0x38);
          local_158[0] = 1;
          RtAudio::DeviceInfo::DeviceInfo(param_2,local_158);
          std::vector<int,std::allocator<int>_>::_Tidy(&local_300);
          std::vector<int,std::allocator<int>_>::_Tidy(&local_120);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_150);
        }
      }
    }
  }
  else {
    local_230 = "RtApiDs::getDeviceInfo: device ID is invalid!";
    local_2c8 = -1;
    do {
      local_228 = local_2c8 + 1;
      lVar1 = local_2c8 + 1;
      local_2c8 = local_228;
    } while ("RtApiDs::getDeviceInfo: device ID is invalid!"[lVar1] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0x1e,"RtApiDs::getDeviceInfo: device ID is invalid!",local_228);
    RtApi::error(param_1,7);
    RtAudio::DeviceInfo::DeviceInfo(param_2,local_158);
    std::vector<int,std::allocator<int>_>::_Tidy(&local_120);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_150);
  }
  return param_2;
}



// FUNCTION 140937560 FUN_140937560 body=300 status=ok
// SIG undefined FUN_140937560(void)

char * FUN_140937560(int param_1)

{
  char *pcVar1;
  
  if (param_1 < -0x7787fff5) {
    if (param_1 == -0x7787fff6) {
      return "Already allocated";
    }
    if (param_1 == -0x7fffbfff) {
      return "Not supported";
    }
    if (param_1 == -0x7fffbffb) {
      return "Generic error";
    }
    if (param_1 == -0x7ffbfef0) {
      return "No aggregation";
    }
    if (param_1 == -0x7ff8fff2) {
      return "Out of memory";
    }
    if (param_1 == -0x7ff8ffa9) {
      return "Invalid parameter";
    }
switchD_1409375f4_caseD_8878001f:
    pcVar1 = "DirectSound unknown error";
  }
  else {
    switch(param_1) {
    case -0x7787ffe2:
      pcVar1 = "Control unavailable";
      break;
    default:
      goto switchD_1409375f4_caseD_8878001f;
    case -0x7787ffce:
      pcVar1 = "Invalid call";
      break;
    case -0x7787ffba:
      pcVar1 = "Priority level needed";
      break;
    case -0x7787ff9c:
      pcVar1 = "The sample rate or the channel format is not supported";
      break;
    case -0x7787ff88:
      pcVar1 = "No driver";
      break;
    case -0x7787ff7e:
      pcVar1 = "Already initialized";
      break;
    case -0x7787ff6a:
      pcVar1 = "Buffer lost";
      break;
    case -0x7787ff60:
      pcVar1 = "Another application already has priority";
      break;
    case -0x7787ff56:
      pcVar1 = "Uninitialized";
    }
  }
  return pcVar1;
}



// FUNCTION 140937750 getMessage body=53 status=ok
// SIG undefined getMessage(void)

undefined8 RtAudioError::getMessage(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_2,uVar1);
  return param_2;
}



// FUNCTION 140937790 getStreamSampleRate body=35 status=ok
// SIG undefined getStreamSampleRate(void)

undefined4 RtApi::getStreamSampleRate(longlong param_1)

{
  verifyStream(param_1);
  return *(undefined4 *)(param_1 + 0x150);
}



// FUNCTION 1409377c0 getStreamTime body=37 status=ok
// SIG undefined getStreamTime(void)

undefined8 RtApi::getStreamTime(longlong param_1)

{
  verifyStream(param_1);
  return *(undefined8 *)(param_1 + 0x278);
}



// FUNCTION 1409377f0 FUN_1409377f0 body=15 status=ok
// SIG undefined FUN_1409377f0(void)

longlong FUN_1409377f0(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 140937800 max_size body=166 status=ok
// SIG undefined max_size(void)

/* WARNING: Removing unreachable block (ram,0x000140937825) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb0 : 0x000140937849 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(void)

{
  longlong local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  
  if (local_50 - 1U < 0x7fffffffffffffff) {
    local_30 = &local_40;
  }
  else {
    local_30 = &local_38;
  }
  return *local_30;
}



// FUNCTION 1409378b0 openRtApi body=177 status=ok
// SIG undefined openRtApi(void)

void RtAudio::openRtApi(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong local_28;
  
  if ((*param_1 != 0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = 0;
  if (param_2 == 8) {
    lVar2 = operator_new(0x2a8);
    if (lVar2 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = RtApiDs::RtApiDs(lVar2);
    }
    *param_1 = local_28;
  }
  return;
}



// FUNCTION 140937970 openStream body=1654 status=ok
// SIG undefined openStream(void)

void RtApi::openStream(longlong *param_1,uint *param_2,uint *param_3,undefined4 param_4,
                      undefined4 param_5,undefined8 param_6,longlong param_7,longlong param_8,
                      longlong param_9,longlong param_10)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint local_c4;
  uint local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  
  if (*(int *)((longlong)param_1 + 300) == -0x32) {
    clearStreamInfo(param_1);
    if ((param_2 == (uint *)0x0) || (param_2[1] != 0)) {
      if ((param_3 == (uint *)0x0) || (param_3[1] != 0)) {
        if ((param_2 == (uint *)0x0) && (param_3 == (uint *)0x0)) {
          local_a0 = -1;
          do {
            lVar1 = local_a0 + 1;
            lVar2 = local_a0 + 1;
            local_a0 = lVar1;
          } while ("RtApi::openStream: input and output StreamParameters structures are both NULL!"
                   [lVar2] != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (param_1 + 0x1e,
                     "RtApi::openStream: input and output StreamParameters structures are both NULL!"
                     ,lVar1);
          error(param_1,7);
        }
        else {
          iVar4 = formatBytes(param_1,param_4);
          if (iVar4 == 0) {
            local_98 = -1;
            do {
              lVar1 = local_98 + 1;
              lVar2 = local_98 + 1;
              local_98 = lVar1;
            } while ("RtApi::openStream: \'format\' parameter value is undefined."[lVar2] != '\0');
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (param_1 + 0x1e,"RtApi::openStream: \'format\' parameter value is undefined.",
                       lVar1);
            error(param_1,7);
          }
          else {
            uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
            local_c4 = 0;
            if ((param_2 == (uint *)0x0) || (local_c4 = param_2[1], *param_2 < uVar5)) {
              local_c0 = 0;
              if ((param_3 == (uint *)0x0) || (local_c0 = param_3[1], *param_3 < uVar5)) {
                if ((local_c4 != 0) &&
                   (cVar3 = (**(code **)(*param_1 + 0x60))
                                      (param_1,*param_2,0,local_c4,param_2[2],param_5,param_4,
                                       param_6,param_9), cVar3 == '\0')) {
                  error(param_1,9);
                  return;
                }
                if ((local_c0 != 0) &&
                   (cVar3 = (**(code **)(*param_1 + 0x60))
                                      (param_1,*param_3,1,local_c0,param_3[2],param_5,param_4,
                                       param_6,param_9), cVar3 == '\0')) {
                  if (local_c4 != 0) {
                    (**(code **)(*param_1 + 0x30))(param_1);
                  }
                  error(param_1,9);
                  return;
                }
                param_1[0x38] = param_7;
                param_1[0x39] = param_8;
                param_1[0x3a] = param_10;
                if (param_9 != 0) {
                  *(int *)(param_9 + 4) = (int)param_1[0x2b];
                }
                *(undefined4 *)((longlong)param_1 + 300) = 0;
              }
              else {
                local_88 = -1;
                do {
                  lVar1 = local_88 + 1;
                  lVar2 = local_88 + 1;
                  local_88 = lVar1;
                } while ("RtApi::openStream: input device parameter value is invalid."[lVar2] !=
                         '\0');
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                          (param_1 + 0x1e,
                           "RtApi::openStream: input device parameter value is invalid.",lVar1);
                error(param_1,7);
              }
            }
            else {
              local_90 = -1;
              do {
                lVar1 = local_90 + 1;
                lVar2 = local_90 + 1;
                local_90 = lVar1;
              } while ("RtApi::openStream: output device parameter value is invalid."[lVar2] != '\0'
                      );
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                        (param_1 + 0x1e,
                         "RtApi::openStream: output device parameter value is invalid.",lVar1);
              error(param_1,7);
            }
          }
        }
      }
      else {
        local_a8 = -1;
        do {
          lVar1 = local_a8 + 1;
          lVar2 = local_a8 + 1;
          local_a8 = lVar1;
        } while ("RtApi::openStream: a non-NULL input StreamParameters structure cannot have an nChannels value less than one."
                 [lVar2] != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_1 + 0x1e,
                   "RtApi::openStream: a non-NULL input StreamParameters structure cannot have an nChannels value less than one."
                   ,lVar1);
        error(param_1,7);
      }
    }
    else {
      local_b0 = -1;
      do {
        lVar1 = local_b0 + 1;
        lVar2 = local_b0 + 1;
        local_b0 = lVar1;
      } while ("RtApi::openStream: a non-NULL output StreamParameters structure cannot have an nChannels value less than one."
               [lVar2] != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_1 + 0x1e,
                 "RtApi::openStream: a non-NULL output StreamParameters structure cannot have an nChannels value less than one."
                 ,lVar1);
      error(param_1,7);
    }
  }
  else {
    local_b8 = -1;
    do {
      lVar1 = local_b8 + 1;
      lVar2 = local_b8 + 1;
      local_b8 = lVar1;
    } while ("RtApi::openStream: a stream is already open!"[lVar2] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0x1e,"RtApi::openStream: a stream is already open!",lVar1);
    error(param_1,7);
  }
  return;
}



// FUNCTION 140937ff0 openStream body=133 status=ok
// SIG undefined openStream(void)

void RtAudio::openStream(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined4 param_4,undefined4 param_5,undefined8 param_6,undefined8 param_7,
                        undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  RtApi::openStream(*param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10);
  return;
}



// FUNCTION 140938080 overflow body=872 status=ok
// SIG undefined overflow(void)

/* WARNING: Removing unreachable block (ram,0x0001409380fc) */
/* WARNING: Removing unreachable block (ram,0x0001409380e8) */

int std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::overflow
              (basic_streambuf<char,std::char_traits<char>_> *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  char local_res10;
  ulonglong local_78;
  ulonglong local_70;
  int local_60;
  char *local_40;
  ulonglong local_38;
  char *local_30;
  char *local_28;
  char *local_20 [2];
  
  if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
    if (param_2 == -1) {
      local_60 = 0;
    }
    else {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1);
      local_30 = std::basic_streambuf<char,std::char_traits<char>_>::epptr(param_1);
      local_res10 = (char)param_2;
      local_60 = param_2;
      if ((pcVar1 == (char *)0x0) || (local_30 <= pcVar1)) {
        local_78 = 0;
        pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
        if (pcVar1 != (char *)0x0) {
          local_78 = (longlong)local_30 - (longlong)pcVar2;
        }
        if (local_78 < 0x20) {
          local_70 = 0x20;
        }
        else if (local_78 < 0x3fffffff) {
          local_70 = local_78 << 1;
        }
        else {
          if (0x7ffffffe < local_78) {
            return -1;
          }
          local_70 = 0x7fffffff;
        }
        uVar3 = local_78;
        pcVar1 = pcVar2;
        if (local_70 < 0x1000) {
          if (local_70 == 0) {
            local_40 = (char *)0x0;
            pcVar4 = local_40;
          }
          else {
            local_40 = (char *)operator_new(local_70);
            pcVar4 = local_40;
          }
        }
        else {
          local_40 = (char *)_Allocate_manually_vector_aligned<std::_Default_allocate_traits>
                                       (local_70);
          pcVar4 = local_40;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar4 = *pcVar1;
          pcVar1 = pcVar1 + 1;
          pcVar4 = pcVar4 + 1;
        }
        local_28 = local_40 + local_78;
        *(char **)(param_1 + 0x68) = local_28 + 1;
        std::basic_streambuf<char,std::char_traits<char>_>::setp
                  (param_1,local_40,local_28,local_40 + local_70);
        if ((*(uint *)(param_1 + 0x70) & 4) == 0) {
          pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (param_1,local_40,local_40 + ((longlong)pcVar1 - (longlong)pcVar2),
                     *(char **)(param_1 + 0x68));
        }
        else {
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (param_1,local_40,(char *)0x0,local_40);
        }
        if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
          local_38 = local_78;
          local_20[0] = pcVar2;
          if (0xfff < local_78) {
            _Adjust_manually_vector_aligned(local_20,&local_38);
          }
          FMemory::operator_delete(local_20[0],local_38);
        }
        *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
        pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc(param_1);
        *pcVar1 = local_res10;
      }
      else {
        pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc(param_1);
        *pcVar2 = local_res10;
        *(char **)(param_1 + 0x68) = pcVar1 + 1;
      }
    }
  }
  else {
    local_60 = -1;
  }
  return local_60;
}



// FUNCTION 1409383f0 pbackfail body=339 status=ok
// SIG undefined pbackfail(void)

/* WARNING: Removing unreachable block (ram,0x000140938520) */

int std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::pbackfail
              (basic_streambuf<char,std::char_traits<char>_> *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char local_res10;
  int local_24;
  
  pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
  if (((pcVar1 == (char *)0x0) ||
      (pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1), pcVar1 <= pcVar2
      )) || ((local_res10 = (char)param_2, param_2 != -1 &&
             ((local_res10 != pcVar1[-1] && ((*(uint *)(param_1 + 0x70) & 2) != 0)))))) {
    param_2 = -1;
  }
  else {
    std::basic_streambuf<char,std::char_traits<char>_>::gbump(param_1,-1);
    if (param_2 == -1) {
      local_24 = 0;
      param_2 = local_24;
    }
    else {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
      *pcVar1 = local_res10;
    }
  }
  return param_2;
}



// FUNCTION 140938550 printMessage body=80 status=ok
// SIG undefined printMessage(void)

void RtAudioError::printMessage(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = std::operator<<<std::char_traits<char>_>(cerr_exref,10);
  uVar1 = std::operator<<<std::char_traits<char>_>(uVar2,uVar1);
  std::operator<<<std::char_traits<char>_>(uVar1,&DAT_1441623b8);
  return;
}



// FUNCTION 1409385c0 probeDeviceOpen body=10861 status=ok
// SIG undefined probeDeviceOpen(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong RtApiDs::probeDeviceOpen
                    (ulonglong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                    int param_7,uint *param_8,uint *param_9)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  ulonglong uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 uVar7;
  void *pvVar8;
  HANDLE pvVar9;
  uintptr_t uVar10;
  undefined4 extraout_var;
  longlong lVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 auStackY_7c8 [32];
  uint local_784;
  longlong *local_780;
  char local_778;
  longlong *local_770;
  longlong local_768;
  uint local_760;
  longlong *local_758;
  int local_750;
  int local_74c;
  longlong *local_748;
  int local_740;
  undefined4 local_73c;
  uint local_738;
  uint local_734;
  longlong local_730;
  longlong local_728;
  longlong local_720;
  longlong local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  int local_6ec;
  longlong *local_6e8;
  longlong *local_6e0;
  longlong *local_6d8;
  longlong *local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  ulonglong local_6b8;
  longlong local_6b0;
  longlong local_6a8;
  longlong local_6a0;
  longlong local_698;
  longlong local_690;
  longlong local_688;
  longlong local_680;
  longlong local_678;
  longlong local_670;
  undefined1 *local_668;
  longlong local_660;
  longlong local_658;
  longlong local_650;
  longlong local_648;
  longlong local_640;
  longlong local_638;
  undefined1 *local_630;
  longlong local_628;
  longlong local_620;
  longlong local_618;
  longlong *local_610;
  uint local_608 [2];
  char *local_600;
  longlong local_5f8;
  char *local_5f0;
  longlong local_5e8;
  char *local_5e0;
  longlong local_5d8;
  undefined8 *local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  longlong local_588;
  undefined8 local_580;
  undefined8 local_578;
  HWND local_570;
  longlong local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  longlong local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  longlong local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  longlong local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  ulonglong local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  longlong local_480;
  longlong local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  char *local_438;
  longlong local_430;
  longlong local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  ulonglong local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  char *local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  char *local_380;
  longlong local_378;
  char *local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358;
  undefined4 local_354;
  uint local_350;
  undefined4 local_34c;
  undefined2 *local_348;
  undefined4 local_330;
  undefined4 local_32c;
  uint local_328;
  undefined2 *local_320;
  undefined2 local_308;
  ushort local_306;
  int local_304;
  int local_300;
  undefined2 local_2fc;
  ushort local_2fa;
  undefined4 local_2f0 [2];
  uint local_2e8;
  uint local_2e4;
  undefined4 local_2e0 [2];
  uint local_2d8;
  undefined4 local_2d0 [2];
  uint local_2c8;
  undefined1 local_2b8 [32];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined4 local_78;
  uint local_74;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_7c8;
  if (2 < (uint)(param_4 + param_5)) {
    local_600 = 
    "RtApiDs::probeDeviceOpen: DirectSound does not support more than 2 channels per device.";
    local_708 = -1;
    do {
      local_5f8 = local_708 + 1;
      lVar11 = local_708 + 1;
      local_708 = local_5f8;
    } while ("RtApiDs::probeDeviceOpen: DirectSound does not support more than 2 channels per device."
             [lVar11] != '\0');
    uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (param_1 + 0xf0,
                       "RtApiDs::probeDeviceOpen: DirectSound does not support more than 2 channels per device."
                       ,local_5f8);
    return uVar4 & 0xffffffffffffff00;
  }
  local_6c0 = (longlong *)(param_1 + 0x290);
  local_6b8 = (*(longlong *)(param_1 + 0x298) - *local_6c0) / 0x38;
  if (local_6b8 == 0) {
    local_5f0 = "RtApiDs::probeDeviceOpen: no devices found!";
    local_700 = -1;
    do {
      local_5e8 = local_700 + 1;
      lVar11 = local_700 + 1;
      local_700 = local_5e8;
    } while ("RtApiDs::probeDeviceOpen: no devices found!"[lVar11] != '\0');
    uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (param_1 + 0xf0,"RtApiDs::probeDeviceOpen: no devices found!",local_5e8);
    return uVar4 & 0xffffffffffffff00;
  }
  if (local_6b8 <= param_2) {
    local_5e0 = "RtApiDs::probeDeviceOpen: device ID is invalid!";
    local_730 = -1;
    do {
      local_5d8 = local_730 + 1;
      lVar11 = local_730 + 1;
      local_730 = local_5d8;
    } while ("RtApiDs::probeDeviceOpen: device ID is invalid!"[lVar11] != '\0');
    uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (param_1 + 0xf0,"RtApiDs::probeDeviceOpen: device ID is invalid!",local_5d8);
    return uVar4 & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x290) + (ulonglong)param_2 * 0x38 + 0x10) == '\0') {
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               std::operator<<<std::char_traits<char>_>
                         (param_1 + 8,"RtApiDs::probeDeviceOpen: device (");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_2);
      std::operator<<<std::char_traits<char>_>(pbVar6,") does not support output!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_2b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_2b8);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_2b8);
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else if (*(char *)(*(longlong *)(param_1 + 0x290) + (ulonglong)param_2 * 0x38 + 0x11) == '\0') {
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>
                       (param_1 + 8,"RtApiDs::probeDeviceOpen: device (");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_2);
    std::operator<<<std::char_traits<char>_>(pbVar6,") does not support input!");
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
              (param_1 + 0x10,local_298);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_1 + 0xf0,local_298);
    uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (local_298);
    return uVar4 & 0xffffffffffffff00;
  }
  local_570 = GetDesktopWindow();
  local_760 = 0;
  if ((param_9 != (uint *)0x0) && (local_760 = param_9[1], (*param_9 & 2) != 0)) {
    local_760 = 2;
  }
  if ((int)local_760 < 2) {
    local_760 = 3;
  }
  if (*param_8 < 0x20) {
    *param_8 = 0x20;
  }
  puVar12 = &local_308;
  for (lVar11 = 0x12; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined2 *)((longlong)puVar12 + 1);
  }
  local_308 = 1;
  local_306 = (short)param_4 + (short)param_5;
  local_304 = param_6;
  local_784 = 0x8000;
  local_740 = 0;
  local_6e0 = (longlong *)0x0;
  local_6d8 = (longlong *)0x0;
  if (param_3 == 0) {
    local_5d0 = (undefined8 *)((ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290));
    iVar1 = ::_guard_xfg_dispatch_icall_nop(*local_5d0,&local_780,0);
    if (iVar1 < 0) {
      local_5c8 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_6b0 = local_5c8 + 0x18;
      local_5c0 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_5c0);
      local_5b0 = std::operator<<<std::char_traits<char>_>(uVar7,") opening output device (");
      local_5b8 = *(undefined8 *)(local_6b0 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_6b0)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_5b0,uVar7,local_5b8);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144160fb4);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_278);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_278);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_278);
      return uVar4 & 0xffffffffffffff00;
    }
    local_78 = 0x60;
    iVar1 = (**(code **)(*local_780 + 0x20))(local_780,&local_78);
    if (iVar1 < 0) {
      (**(code **)(*local_780 + 0x10))(local_780);
      local_5a8 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_6a8 = local_5a8 + 0x18;
      local_5a0 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_5a0);
      local_590 = std::operator<<<std::char_traits<char>_>(uVar7,") getting capabilities (");
      local_598 = *(undefined8 *)(local_6a8 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_6a8)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_590,uVar7,local_598);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144160ffc);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_258);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_258);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_258);
      return uVar4 & 0xffffffffffffff00;
    }
    if ((param_4 + param_5 == 2) && ((local_74 & 2) == 0)) {
      local_588 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_6a0 = local_588 + 0x18;
      local_578 = std::operator<<<std::char_traits<char>_>
                            (param_1 + 8,"RtApiDs::getDeviceInfo: the output device (");
      local_580 = *(undefined8 *)(local_6a0 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_6a0)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_578,uVar7,local_580);
      std::operator<<<std::char_traits<char>_>(uVar7,") does not support stereo playback.");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_238);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_238);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_238);
      return uVar4 & 0xffffffffffffff00;
    }
    if (((local_74 & 8) == 0) || ((param_7 == 1 && ((local_74 & 4) != 0)))) {
      local_2fa = 8;
      *(undefined4 *)(param_1 + 0x180) = 1;
    }
    else {
      local_2fa = 0x10;
      *(undefined4 *)(param_1 + 0x180) = 2;
    }
    *(int *)(param_1 + 0x17c) = param_7;
    uVar2 = (int)((uint)local_306 * (uint)local_2fa) >> 3;
    local_2fc = (undefined2)uVar2;
    local_300 = local_304 * (uVar2 & 0xffff);
    local_6f8 = local_760 * *param_8;
    local_740 = local_6f8 * ((int)(uint)local_2fa >> 3) * param_4;
    for (; local_784 < (uint)(local_740 * 2); local_784 = local_784 << 1) {
    }
    iVar1 = (**(code **)(*local_780 + 0x30))(local_780,local_570,2);
    if (iVar1 < 0) {
      (**(code **)(*local_780 + 0x10))(local_780);
      local_568 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_698 = local_568 + 0x18;
      local_560 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_560);
      local_550 = std::operator<<<std::char_traits<char>_>(uVar7,") setting cooperative level (");
      local_558 = *(undefined8 *)(local_698 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_698)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_550,uVar7,local_558);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_14416102c);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_218);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_218);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_218);
      return uVar4 & 0xffffffffffffff00;
    }
    puVar13 = &local_330;
    for (lVar11 = 0x28; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((longlong)puVar13 + 1);
    }
    local_330 = 0x28;
    local_32c = 1;
    iVar1 = (**(code **)(*local_780 + 0x18))(local_780,&local_330,&local_770,0);
    if (iVar1 < 0) {
      (**(code **)(*local_780 + 0x10))(local_780);
      local_548 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_690 = local_548 + 0x18;
      local_540 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_540);
      local_530 = std::operator<<<std::char_traits<char>_>(uVar7,") accessing primary buffer (");
      local_538 = *(undefined8 *)(local_690 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_690)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_530,uVar7,local_538);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_14416107c);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_1f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_1f8);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_1f8);
      return uVar4 & 0xffffffffffffff00;
    }
    iVar1 = (**(code **)(*local_770 + 0x70))(local_770,&local_308);
    if (iVar1 < 0) {
      (**(code **)(*local_780 + 0x10))(local_780);
      local_528 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_688 = local_528 + 0x18;
      local_520 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_520);
      local_510 = std::operator<<<std::char_traits<char>_>
                            (uVar7,") setting primary buffer format (");
      local_518 = *(undefined8 *)(local_688 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_688)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_510,uVar7,local_518);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_1441610f4);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_1d8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_1d8);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_1d8);
      return uVar4 & 0xffffffffffffff00;
    }
    puVar13 = &local_330;
    for (lVar11 = 0x28; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((longlong)puVar13 + 1);
    }
    local_330 = 0x28;
    local_32c = 0x1c004;
    local_328 = local_784;
    local_320 = &local_308;
    iVar1 = (**(code **)(*local_780 + 0x18))(local_780,&local_330,&local_770,0);
    if (iVar1 < 0) {
      local_32c = 0x1c008;
      iVar1 = (**(code **)(*local_780 + 0x18))(local_780,&local_330,&local_770,0);
      if (iVar1 < 0) {
        (**(code **)(*local_780 + 0x10))(local_780);
        local_508 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
        local_680 = local_508 + 0x18;
        local_500 = FUN_140937560(iVar1);
        uVar7 = std::operator<<<std::char_traits<char>_>
                          (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
        uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_500);
        local_4f0 = std::operator<<<std::char_traits<char>_>(uVar7,") creating secondary buffer (");
        local_4f8 = *(undefined8 *)(local_680 + 0x10);
        uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                          (local_680);
        uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                          (local_4f0,uVar7,local_4f8);
        std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144161204);
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 0x10,local_1b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0xf0,local_1b8);
        uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Tidy_deallocate(local_1b8);
        return uVar4 & 0xffffffffffffff00;
      }
    }
    local_2d0[0] = 0x14;
    iVar1 = (**(code **)(*local_770 + 0x18))(local_770,local_2d0);
    if (iVar1 < 0) {
      (**(code **)(*local_780 + 0x10))(local_780);
      (**(code **)(*local_770 + 0x10))(local_770);
      local_4e8 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_678 = local_4e8 + 0x18;
      local_4e0 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_4e0);
      local_4d0 = std::operator<<<std::char_traits<char>_>(uVar7,") getting buffer settings (");
      local_4d8 = *(undefined8 *)(local_678 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_678)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_4d0,uVar7,local_4d8);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144161254);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_198);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_198);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_198);
      return uVar4 & 0xffffffffffffff00;
    }
    local_784 = local_2c8;
    iVar1 = (**(code **)(*local_770 + 0x58))(local_770,0,local_2c8);
    if (iVar1 < 0) {
      (**(code **)(*local_780 + 0x10))(local_780);
      (**(code **)(*local_770 + 0x10))(local_770);
      local_4c8 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_670 = local_4c8 + 0x18;
      local_4c0 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_4c0);
      local_4b0 = std::operator<<<std::char_traits<char>_>(uVar7,") locking buffer (");
      local_4b8 = *(undefined8 *)(local_670 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_670)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_4b0,uVar7,local_4b8);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144161274);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_178);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_178);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_178);
      return uVar4 & 0xffffffffffffff00;
    }
    local_4a8 = (ulonglong)local_738;
    puVar14 = local_668;
    for (uVar4 = local_4a8; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    iVar1 = (**(code **)(*local_770 + 0x98))(local_770,local_668);
    if (iVar1 < 0) {
      (**(code **)(*local_780 + 0x10))(local_780);
      (**(code **)(*local_770 + 0x10))(local_770);
      local_4a0 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_660 = local_4a0 + 0x18;
      local_498 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_498);
      local_488 = std::operator<<<std::char_traits<char>_>(uVar7,") unlocking buffer (");
      local_490 = *(undefined8 *)(local_660 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_660)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_488,uVar7,local_490);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_14416129c);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_158);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_158);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_158);
      return uVar4 & 0xffffffffffffff00;
    }
    local_6e0 = local_780;
    local_6d8 = local_770;
  }
  if (param_3 == 1) {
    local_480 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
    iVar1 = ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(local_480 + 8),&local_758,0);
    if (iVar1 < 0) {
      local_478 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_658 = local_478 + 0x18;
      local_470 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_470);
      local_460 = std::operator<<<std::char_traits<char>_>(uVar7,") opening input device (");
      local_468 = *(undefined8 *)(local_658 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_658)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_460,uVar7,local_468);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_1441612bc);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_138);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_138);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_138);
      return uVar4 & 0xffffffffffffff00;
    }
    local_2f0[0] = 0x10;
    iVar1 = (**(code **)(*local_758 + 0x20))(local_758,local_2f0);
    if (iVar1 < 0) {
      (**(code **)(*local_758 + 0x10))(local_758);
      local_458 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_650 = local_458 + 0x18;
      local_450 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_450);
      local_440 = std::operator<<<std::char_traits<char>_>(uVar7,") getting input capabilities (");
      local_448 = *(undefined8 *)(local_650 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_650)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_440,uVar7,local_448);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_1441612e4);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_118);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_118);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_118);
      return uVar4 & 0xffffffffffffff00;
    }
    if (local_2e4 < (uint)(param_4 + param_5)) {
      local_438 = 
      "RtApiDs::getDeviceInfo: the input device does not support requested input channels.";
      local_728 = -1;
      do {
        local_430 = local_728 + 1;
        lVar11 = local_728 + 1;
        local_728 = local_430;
      } while ("RtApiDs::getDeviceInfo: the input device does not support requested input channels."
               [lVar11] != '\0');
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                        (param_1 + 0xf0,
                         "RtApiDs::getDeviceInfo: the input device does not support requested input channels."
                         ,local_430);
      return uVar4 & 0xffffffffffffff00;
    }
    if (param_4 + param_5 == 2) {
      local_73c = 0x20222;
      if ((param_7 == 1) && ((local_2e8 & 0x20222) != 0)) {
        local_2fa = 8;
        *(undefined4 *)(param_1 + 0x184) = 1;
      }
      else {
        local_2fa = 0x10;
        *(undefined4 *)(param_1 + 0x184) = 2;
      }
    }
    else {
      local_73c = 0x10111;
      if ((param_7 == 1) && ((local_2e8 & 0x10111) != 0)) {
        local_2fa = 8;
        *(undefined4 *)(param_1 + 0x184) = 1;
      }
      else {
        local_2fa = 0x10;
        *(undefined4 *)(param_1 + 0x184) = 2;
      }
    }
    *(int *)(param_1 + 0x17c) = param_7;
    uVar2 = (int)((uint)local_306 * (uint)local_2fa) >> 3;
    local_2fc = (undefined2)uVar2;
    local_300 = local_304 * (uVar2 & 0xffff);
    local_6f4 = local_760 * *param_8;
    local_740 = local_6f4 * ((int)(uint)local_2fa >> 3) * param_4;
    for (; local_784 < (uint)(local_740 * 2); local_784 = local_784 << 1) {
    }
    puVar13 = &local_358;
    for (lVar11 = 0x28; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((longlong)puVar13 + 1);
    }
    local_358 = 0x28;
    local_354 = 0;
    local_34c = 0;
    local_350 = local_784;
    local_348 = &local_308;
    iVar1 = (**(code **)(*local_758 + 0x18))(local_758,&local_358,&local_748,0);
    if (iVar1 < 0) {
      (**(code **)(*local_758 + 0x10))(local_758);
      local_428 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_648 = local_428 + 0x18;
      local_420 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_420);
      local_410 = std::operator<<<std::char_traits<char>_>(uVar7,") creating input buffer (");
      local_418 = *(undefined8 *)(local_648 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_648)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_410,uVar7,local_418);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144161304);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_f8);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_f8);
      return uVar4 & 0xffffffffffffff00;
    }
    local_2e0[0] = 0x10;
    iVar1 = (**(code **)(*local_748 + 0x18))(local_748,local_2e0);
    if (iVar1 < 0) {
      (**(code **)(*local_758 + 0x10))(local_758);
      (**(code **)(*local_748 + 0x10))(local_748);
      local_408 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_640 = local_408 + 0x18;
      local_400 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_400);
      local_3f0 = std::operator<<<std::char_traits<char>_>(uVar7,") getting buffer settings (");
      local_3f8 = *(undefined8 *)(local_640 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_640)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_3f0,uVar7,local_3f8);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_14416132c);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_d8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_d8);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_d8);
      return uVar4 & 0xffffffffffffff00;
    }
    local_784 = local_2d8;
    iVar1 = (**(code **)(*local_748 + 0x40))(local_748,0,local_2d8);
    if (iVar1 < 0) {
      (**(code **)(*local_758 + 0x10))(local_758);
      (**(code **)(*local_748 + 0x10))(local_748);
      local_3e8 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_638 = local_3e8 + 0x18;
      local_3e0 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_3e0);
      local_3d0 = std::operator<<<std::char_traits<char>_>(uVar7,") locking input buffer (");
      local_3d8 = *(undefined8 *)(local_638 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_638)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_3d0,uVar7,local_3d8);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144161354);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_b8);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_b8);
      return uVar4 & 0xffffffffffffff00;
    }
    local_3c8 = (ulonglong)local_734;
    puVar14 = local_630;
    for (uVar4 = local_3c8; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    iVar1 = (**(code **)(*local_748 + 0x58))(local_748,local_630);
    if (iVar1 < 0) {
      (**(code **)(*local_758 + 0x10))(local_758);
      (**(code **)(*local_748 + 0x10))(local_748);
      local_3c0 = (ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x290);
      local_628 = local_3c0 + 0x18;
      local_3b8 = FUN_140937560(iVar1);
      uVar7 = std::operator<<<std::char_traits<char>_>
                        (param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar7 = std::operator<<<std::char_traits<char>_>(uVar7,local_3b8);
      local_3a8 = std::operator<<<std::char_traits<char>_>(uVar7,") unlocking input buffer (");
      local_3b0 = *(undefined8 *)(local_628 + 0x10);
      uVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(local_628)
      ;
      uVar7 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        (local_3a8,uVar7,local_3b0);
      std::operator<<<std::char_traits<char>_>(uVar7,&DAT_144161384);
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_98);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_98);
      uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        (local_98);
      return uVar4 & 0xffffffffffffff00;
    }
    local_6e0 = local_758;
    local_6d8 = local_748;
  }
  local_768 = 0;
  *(int *)(param_1 + 0x164 + (longlong)param_3 * 4) = param_4 + param_5;
  *(int *)(param_1 + 0x15c + (longlong)param_3 * 4) = param_4;
  *(uint *)(param_1 + 0x154) = *param_8;
  *(int *)(param_1 + 0x16c + (longlong)param_3 * 4) = param_5;
  *(undefined1 *)(param_1 + 0x14b + (longlong)param_3) = 1;
  if ((param_9 == (uint *)0x0) || ((*param_9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x14a) = 0;
  }
  *(undefined1 *)(param_1 + 0x148 + (longlong)param_3) = 0;
  if (*(int *)(param_1 + 0x15c + (longlong)param_3 * 4) !=
      *(int *)(param_1 + 0x164 + (longlong)param_3 * 4)) {
    *(undefined1 *)(param_1 + 0x148 + (longlong)param_3) = 1;
  }
  if (*(int *)(param_1 + 0x17c) != *(int *)(param_1 + 0x180 + (longlong)param_3 * 4)) {
    *(undefined1 *)(param_1 + 0x148 + (longlong)param_3) = 1;
  }
  if ((*(char *)(param_1 + 0x14a) != *(char *)(param_1 + 0x14b + (longlong)param_3)) &&
     (1 < *(uint *)(param_1 + 0x15c + (longlong)param_3 * 4))) {
    *(undefined1 *)(param_1 + 0x148 + (longlong)param_3) = 1;
  }
  local_6f0 = *(int *)(param_1 + 0x15c + (longlong)param_3 * 4) * *param_8;
  local_750 = RtApi::formatBytes(param_1,*(undefined4 *)(param_1 + 0x17c));
  local_750 = local_6f0 * local_750;
  pvVar8 = calloc((longlong)local_750,1);
  *(void **)(param_1 + 0x130 + (longlong)param_3 * 8) = pvVar8;
  if (*(longlong *)(param_1 + 0x130 + (longlong)param_3 * 8) == 0) {
    local_3a0 = "RtApiDs::probeDeviceOpen: error allocating user buffer memory.";
    local_720 = -1;
    do {
      local_398 = local_720 + 1;
      lVar11 = local_720 + 1;
      local_720 = local_398;
    } while ("RtApiDs::probeDeviceOpen: error allocating user buffer memory."[lVar11] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0xf0,"RtApiDs::probeDeviceOpen: error allocating user buffer memory.",
               local_398);
LAB_14093ae0a:
    if (local_768 != 0) {
      if (*(longlong *)(local_768 + 0x18) != 0) {
        local_610 = *(longlong **)(local_768 + 8);
        local_6d0 = *(longlong **)(local_768 + 0x18);
        if (local_6d0 != (longlong *)0x0) {
          (**(code **)(*local_6d0 + 0x10))(local_6d0);
        }
        (**(code **)(*local_610 + 0x10))(local_610);
      }
      if (*(longlong *)(local_768 + 0x20) != 0) {
        local_6c8 = *(longlong **)(local_768 + 0x10);
        local_6e8 = *(longlong **)(local_768 + 0x20);
        if (local_6e8 != (longlong *)0x0) {
          (**(code **)(*local_6e8 + 0x10))(local_6e8);
        }
        (**(code **)(*local_6c8 + 0x10))(local_6c8);
      }
      CloseHandle(*(HANDLE *)(local_768 + 0x48));
      local_360 = local_768;
      FMemory::operator_delete(local_768,0x50);
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    for (local_74c = 0; local_74c < 2; local_74c = local_74c + 1) {
      if (*(longlong *)(param_1 + 0x130 + (longlong)local_74c * 8) != 0) {
        free(*(void **)(param_1 + 0x130 + (longlong)local_74c * 8));
        *(undefined8 *)(param_1 + 0x130 + (longlong)local_74c * 8) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      free(*(void **)(param_1 + 0x140));
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    *(undefined4 *)(param_1 + 300) = 0xffffffce;
    param_1 = param_1 & 0xffffffffffffff00;
  }
  else {
    if (*(char *)(param_1 + 0x148 + (longlong)param_3) != '\0') {
      local_778 = '\x01';
      local_390 = (longlong)param_3;
      local_750 = RtApi::formatBytes(param_1,*(undefined4 *)
                                              (param_1 + 0x180 + (longlong)param_3 * 4));
      local_750 = *(int *)(param_1 + 0x164 + local_390 * 4) * local_750;
      if (((param_3 == 1) && (*(int *)(param_1 + 0x128) == 0)) &&
         (*(longlong *)(param_1 + 0x140) != 0)) {
        local_388 = 0;
        local_6ec = RtApi::formatBytes(param_1,*(undefined4 *)(param_1 + 0x180));
        local_6ec = *(int *)(param_1 + 0x164 + local_388) * local_6ec;
        if (local_750 <= local_6ec) {
          local_778 = '\0';
        }
      }
      if (local_778 != '\0') {
        local_750 = local_750 * *param_8;
        if (*(longlong *)(param_1 + 0x140) != 0) {
          free(*(void **)(param_1 + 0x140));
        }
        pvVar8 = calloc((longlong)local_750,1);
        *(void **)(param_1 + 0x140) = pvVar8;
        if (*(longlong *)(param_1 + 0x140) == 0) {
          local_380 = "RtApiDs::probeDeviceOpen: error allocating device buffer memory.";
          local_718 = -1;
          do {
            local_378 = local_718 + 1;
            lVar11 = local_718 + 1;
            local_718 = local_378;
          } while ("RtApiDs::probeDeviceOpen: error allocating device buffer memory."[lVar11] !=
                   '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (param_1 + 0xf0,
                     "RtApiDs::probeDeviceOpen: error allocating device buffer memory.",local_378);
          goto LAB_14093ae0a;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x120) == 0) {
      local_620 = operator_new();
      if (local_620 == 0) {
        local_618 = 0;
      }
      else {
        local_618 = DsHandle::DsHandle();
      }
      local_768 = local_618;
      pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      *(HANDLE *)(local_768 + 0x48) = pvVar9;
      *(longlong *)(param_1 + 0x120) = local_768;
    }
    else {
      local_768 = *(longlong *)(param_1 + 0x120);
    }
    *(longlong **)(local_768 + 8 + (longlong)param_3 * 8) = local_6e0;
    *(longlong **)(local_768 + 0x18 + (longlong)param_3 * 8) = local_6d8;
    *(uint *)(local_768 + 0x34 + (longlong)param_3 * 4) = local_784;
    *(int *)(local_768 + 0x3c + (longlong)param_3 * 4) = local_740;
    *(uint *)(param_1 + 0x118 + (longlong)param_3 * 4) = param_2;
    *(undefined4 *)(param_1 + 300) = 0;
    if ((*(int *)(param_1 + 0x128) == 0) && (param_3 == 1)) {
      *(undefined4 *)(param_1 + 0x128) = 2;
    }
    else {
      *(int *)(param_1 + 0x128) = param_3;
    }
    *(uint *)(param_1 + 0x158) = local_760;
    *(int *)(param_1 + 0x150) = param_6;
    if (*(char *)(param_1 + 0x148 + (longlong)param_3) != '\0') {
      RtApi::setConvertInfo(param_1,param_3,param_5);
    }
    uVar7 = 0;
    if (*(char *)(param_1 + 0x1e0) == '\0') {
      *(undefined1 *)(param_1 + 0x1e0) = 1;
      *(ulonglong *)(param_1 + 0x1b0) = param_1;
      uVar10 = _beginthreadex((void *)0x0,0,callbackHandler,(void *)(param_1 + 0x1b0),0,local_608);
      *(uintptr_t *)(param_1 + 0x1b8) = uVar10;
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        local_370 = "RtApiDs::probeDeviceOpen: error creating callback thread!";
        local_710 = -1;
        do {
          local_368 = local_710 + 1;
          lVar11 = local_710 + 1;
          local_710 = local_368;
        } while ("RtApiDs::probeDeviceOpen: error creating callback thread!"[lVar11] != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_1 + 0xf0,"RtApiDs::probeDeviceOpen: error creating callback thread!",
                   local_368);
        goto LAB_14093ae0a;
      }
      BVar3 = SetThreadPriority(*(HANDLE *)(param_1 + 0x1b8),2);
      uVar7 = CONCAT44(extraout_var,BVar3);
    }
    param_1 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  return param_1;
}



// FUNCTION 14093b030 seekoff body=800 status=ok
// SIG undefined seekoff(void)

longlong *
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::seekoff
          (basic_streambuf<char,std::char_traits<char>_> *param_1,longlong *param_2,longlong param_3
          ,int param_4,uint param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong local_30;
  
  pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
  pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1);
  if ((pcVar2 != (char *)0x0) && (*(char **)(param_1 + 0x68) < pcVar2)) {
    *(char **)(param_1 + 0x68) = pcVar2;
  }
  pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
  if (param_4 == 0) {
    local_30 = 0;
LAB_14093b1b2:
    if ((ulonglong)(*(longlong *)(param_1 + 0x68) - (longlong)pcVar3) < param_3 + local_30) {
      *param_2 = -1;
      param_2[1] = 0;
      plVar5 = param_2 + 2;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)plVar5 = 0;
        plVar5 = (longlong *)((longlong)plVar5 + 1);
      }
    }
    else {
      param_3 = param_3 + local_30;
      if ((param_3 == 0) ||
         ((((param_5 & 1) == 0 || (pcVar1 != (char *)0x0)) &&
          (((param_5 & 2) == 0 || (pcVar2 != (char *)0x0)))))) {
        if (((param_5 & 1) != 0) && (pcVar1 != (char *)0x0)) {
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (param_1,pcVar3,pcVar3 + param_3,*(char **)(param_1 + 0x68));
        }
        if (((param_5 & 2) != 0) && (pcVar2 != (char *)0x0)) {
          pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::epptr(param_1);
          std::basic_streambuf<char,std::char_traits<char>_>::setp
                    (param_1,pcVar3,pcVar3 + param_3,pcVar1);
        }
        *param_2 = param_3;
        param_2[1] = 0;
        plVar5 = param_2 + 2;
        for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)plVar5 = 0;
          plVar5 = (longlong *)((longlong)plVar5 + 1);
        }
      }
      else {
        *param_2 = -1;
        param_2[1] = 0;
        plVar5 = param_2 + 2;
        for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)plVar5 = 0;
          plVar5 = (longlong *)((longlong)plVar5 + 1);
        }
      }
    }
  }
  else {
    if (param_4 == 1) {
      if ((param_5 & 3) != 3) {
        if ((param_5 & 1) == 0) {
          if (((param_5 & 2) != 0) && ((pcVar2 != (char *)0x0 || (pcVar3 == (char *)0x0)))) {
            local_30 = (longlong)pcVar2 - (longlong)pcVar3;
            goto LAB_14093b1b2;
          }
        }
        else if ((pcVar1 != (char *)0x0) || (pcVar3 == (char *)0x0)) {
          local_30 = (longlong)pcVar1 - (longlong)pcVar3;
          goto LAB_14093b1b2;
        }
      }
    }
    else {
      local_30 = *(longlong *)(param_1 + 0x68) - (longlong)pcVar3;
      if (param_4 == 2) goto LAB_14093b1b2;
    }
    *param_2 = -1;
    param_2[1] = 0;
    plVar5 = param_2 + 2;
    for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)plVar5 = 0;
      plVar5 = (longlong *)((longlong)plVar5 + 1);
    }
  }
  return param_2;
}



// FUNCTION 14093b350 seekpos body=507 status=ok
// SIG undefined seekpos(void)

ulonglong *
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::seekpos
          (basic_streambuf<char,std::char_traits<char>_> *param_1,ulonglong *param_2,
          longlong *param_3,uint param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  uVar1 = *param_3 + param_3[1];
  pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
  pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1);
  if ((pcVar3 != (char *)0x0) && (*(char **)(param_1 + 0x68) < pcVar3)) {
    *(char **)(param_1 + 0x68) = pcVar3;
  }
  pcVar4 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - (longlong)pcVar4) < uVar1) {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    puVar6 = param_2 + 2;
    for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (ulonglong *)((longlong)puVar6 + 1);
    }
  }
  else if ((uVar1 == 0) ||
          ((((param_4 & 1) == 0 || (pcVar2 != (char *)0x0)) &&
           (((param_4 & 2) == 0 || (pcVar3 != (char *)0x0)))))) {
    if (((param_4 & 1) != 0) && (pcVar2 != (char *)0x0)) {
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (param_1,pcVar4,pcVar4 + uVar1,*(char **)(param_1 + 0x68));
    }
    if (((param_4 & 2) != 0) && (pcVar3 != (char *)0x0)) {
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::epptr(param_1);
      std::basic_streambuf<char,std::char_traits<char>_>::setp(param_1,pcVar4,pcVar4 + uVar1,pcVar2)
      ;
    }
    *param_2 = uVar1;
    param_2[1] = 0;
    puVar6 = param_2 + 2;
    for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (ulonglong *)((longlong)puVar6 + 1);
    }
  }
  else {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    puVar6 = param_2 + 2;
    for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (ulonglong *)((longlong)puVar6 + 1);
    }
  }
  return param_2;
}



// FUNCTION 14093b550 setConvertInfo body=2146 status=ok
// SIG undefined setConvertInfo(void)

void RtApi::setConvertInfo(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [11];
  
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x168);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x17c);
  }
  else {
    *(undefined4 *)(param_1 + 0x1ec + (longlong)param_2 * 0x48) = *(undefined4 *)(param_1 + 0x15c);
    *(undefined4 *)(param_1 + 0x1f0 + (longlong)param_2 * 0x48) = *(undefined4 *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 500 + (longlong)param_2 * 0x48) = *(undefined4 *)(param_1 + 0x17c);
    *(undefined4 *)(param_1 + 0x1f8 + (longlong)param_2 * 0x48) = *(undefined4 *)(param_1 + 0x180);
  }
  if (*(int *)(param_1 + 0x1ec + (longlong)param_2 * 0x48) <
      *(int *)(param_1 + 0x1f0 + (longlong)param_2 * 0x48)) {
    *(undefined4 *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48) =
         *(undefined4 *)(param_1 + 0x1ec + (longlong)param_2 * 0x48);
  }
  else {
    *(undefined4 *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48) =
         *(undefined4 *)(param_1 + 0x1f0 + (longlong)param_2 * 0x48);
  }
  if (*(char *)(param_1 + 0x14b + (longlong)param_2) == *(char *)(param_1 + 0x14a)) {
    if (*(char *)(param_1 + 0x14a) == '\0') {
      for (local_4c = 0; local_4c < *(int *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48);
          local_4c = local_4c + 1) {
        local_30 = local_4c * *(int *)(param_1 + 0x154);
        std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                  (param_1 + 0x200 + (longlong)param_2 * 0x48,&local_30);
        local_2c[0] = local_4c * *(int *)(param_1 + 0x154);
        std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                  (param_1 + 0x218 + (longlong)param_2 * 0x48,local_2c);
        *(undefined4 *)(param_1 + 0x1ec + (longlong)param_2 * 0x48) = 1;
        *(undefined4 *)(param_1 + 0x1f0 + (longlong)param_2 * 0x48) = 1;
      }
    }
    else {
      for (local_50 = 0; local_50 < *(int *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48);
          local_50 = local_50 + 1) {
        std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                  (param_1 + 0x200 + (longlong)param_2 * 0x48,&local_50);
        std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                  (param_1 + 0x218 + (longlong)param_2 * 0x48,&local_50);
      }
    }
  }
  else if (((param_2 == 0) && (*(char *)(param_1 + 0x14b) != '\0')) ||
          ((param_2 == 1 && (*(char *)(param_1 + 0x14a) != '\0')))) {
    for (local_58 = 0; local_58 < *(int *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48);
        local_58 = local_58 + 1) {
      local_38 = local_58 * *(int *)(param_1 + 0x154);
      std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                (param_1 + 0x200 + (longlong)param_2 * 0x48,&local_38);
      std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                (param_1 + 0x218 + (longlong)param_2 * 0x48,&local_58);
      *(undefined4 *)(param_1 + 0x1ec + (longlong)param_2 * 0x48) = 1;
    }
  }
  else {
    for (local_54 = 0; local_54 < *(int *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48);
        local_54 = local_54 + 1) {
      std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                (param_1 + 0x200 + (longlong)param_2 * 0x48,&local_54);
      local_34 = local_54 * *(int *)(param_1 + 0x154);
      std::vector<int,std::allocator<int>_>::emplace_back<int_const_&>
                (param_1 + 0x218 + (longlong)param_2 * 0x48,&local_34);
      *(undefined4 *)(param_1 + 0x1f0 + (longlong)param_2 * 0x48) = 1;
    }
  }
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x14b + (longlong)param_2) == '\0') {
      if (param_2 == 0) {
        for (local_40 = 0; local_40 < *(int *)(param_1 + 0x1e8); local_40 = local_40 + 1) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x218) + (longlong)local_40 * 4);
          *piVar1 = param_3 * *(int *)(param_1 + 0x154) + *piVar1;
        }
      }
      else {
        for (local_3c = 0; local_3c < *(int *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48);
            local_3c = local_3c + 1) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x200 + (longlong)param_2 * 0x48) +
                          (longlong)local_3c * 4);
          *piVar1 = param_3 * *(int *)(param_1 + 0x154) + *piVar1;
        }
      }
    }
    else if (param_2 == 0) {
      for (local_48 = 0; local_48 < *(int *)(param_1 + 0x1e8); local_48 = local_48 + 1) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x218) + (longlong)local_48 * 4);
        *piVar1 = *piVar1 + param_3;
      }
    }
    else {
      for (local_44 = 0; local_44 < *(int *)(param_1 + 0x1e8 + (longlong)param_2 * 0x48);
          local_44 = local_44 + 1) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x200 + (longlong)param_2 * 0x48) +
                        (longlong)local_44 * 4);
        *piVar1 = *piVar1 + param_3;
      }
    }
  }
  return;
}



// FUNCTION 14093bdc0 setStreamTime body=65 status=ok
// SIG undefined setStreamTime(void)

void RtApi::setStreamTime(longlong param_1,double param_2)

{
  verifyStream(param_1);
  if (0.0 <= param_2) {
    *(double *)(param_1 + 0x278) = param_2;
  }
  return;
}



// FUNCTION 14093be10 startStream body=989 status=ok
// SIG undefined startStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RtApiDs::startStream(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  char *local_80;
  longlong local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  RtApi::verifyStream(param_1);
  if (*(int *)(param_1 + 300) == 2) {
    local_80 = "RtApiDs::startStream(): the stream is already running!";
    local_98 = -1;
    do {
      local_78 = local_98 + 1;
      lVar1 = local_98 + 1;
      local_98 = local_78;
    } while ("RtApiDs::startStream(): the stream is already running!"[lVar1] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0xf0,"RtApiDs::startStream(): the stream is already running!",local_78);
    RtApi::error(param_1,0);
    return;
  }
  local_a0 = *(undefined4 **)(param_1 + 0x120);
  timeBeginPeriod(1);
  *(undefined1 *)(param_1 + 0x289) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  if (*(int *)(param_1 + 0x128) == 2) {
    local_70 = (double)*(uint *)(param_1 + 0x150) * 0.5;
    uVar2 = RtApi::formatBytes(param_1,*(undefined4 *)(param_1 + 0x184));
    *(int *)(param_1 + 0x28c) = (int)(local_70 * (double)uVar2 * (double)*(uint *)(param_1 + 0x168))
    ;
  }
  local_a8 = 0;
  if ((*(int *)(param_1 + 0x128) == 0) || (*(int *)(param_1 + 0x128) == 2)) {
    local_90 = *(longlong **)(local_a0 + 6);
    local_a8 = (**(code **)(*local_90 + 0x60))(local_90,0,0,1);
    if (local_a8 < 0) {
      local_68 = FUN_140937560(local_a8);
      uVar3 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::startStream: error (");
      uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,local_68);
      std::operator<<<std::char_traits<char>_>(uVar3,") starting output buffer!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_58);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_58);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_58);
      goto LAB_14093c1bc;
    }
  }
  if ((*(int *)(param_1 + 0x128) == 1) || (*(int *)(param_1 + 0x128) == 2)) {
    local_88 = *(longlong **)(local_a0 + 8);
    local_a8 = (**(code **)(*local_88 + 0x48))(local_88,1);
    if (local_a8 < 0) {
      local_60 = FUN_140937560(local_a8);
      uVar3 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::startStream: error (");
      uVar3 = std::operator<<<std::char_traits<char>_>(uVar3,local_60);
      std::operator<<<std::char_traits<char>_>(uVar3,") starting input buffer!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_38);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_38);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_38);
      goto LAB_14093c1bc;
    }
  }
  *local_a0 = 0;
  *(undefined1 *)(local_a0 + 1) = 0;
  ResetEvent(*(HANDLE *)(local_a0 + 0x12));
  *(undefined4 *)(param_1 + 300) = 2;
LAB_14093c1bc:
  if (local_a8 < 0) {
    RtApi::error(param_1,9);
  }
  return;
}



// FUNCTION 14093c1f0 stopStream body=1955 status=ok
// SIG undefined stopStream(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RtApiDs::stopStream(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  int local_168;
  uint local_164;
  int *local_160;
  longlong *local_158;
  undefined1 *local_150;
  longlong *local_148;
  longlong local_140;
  char *local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  RtApi::verifyStream(param_1);
  if (*(int *)(param_1 + 300) == 0) {
    local_138 = "RtApiDs::stopStream(): the stream is already stopped!";
    local_140 = -1;
    do {
      local_130 = local_140 + 1;
      lVar1 = local_140 + 1;
      local_140 = local_130;
    } while ("RtApiDs::stopStream(): the stream is already stopped!"[lVar1] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0xf0,"RtApiDs::stopStream(): the stream is already stopped!",local_130);
    RtApi::error(param_1,0);
    return;
  }
  local_168 = 0;
  local_160 = *(int **)(param_1 + 0x120);
  if ((*(int *)(param_1 + 0x128) == 0) || (*(int *)(param_1 + 0x128) == 2)) {
    if (*local_160 == 0) {
      *local_160 = 2;
      WaitForSingleObject(*(HANDLE *)(local_160 + 0x12),0xffffffff);
    }
    *(undefined4 *)(param_1 + 300) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x188));
    local_158 = *(longlong **)(local_160 + 6);
    local_168 = (**(code **)(*local_158 + 0x90))(local_158);
    if (local_168 < 0) {
      local_128 = FUN_140937560(local_168);
      uVar2 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::stopStream: error (");
      uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_128);
      std::operator<<<std::char_traits<char>_>(uVar2,") stopping output buffer!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_d8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_d8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_d8);
      goto LAB_14093c93f;
    }
    local_120 = *local_158;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = &local_164;
    local_168 = (**(code **)(local_120 + 0x58))(local_158,0,local_160[0xd],&local_150);
    if (local_168 < 0) {
      local_118 = FUN_140937560(local_168);
      uVar2 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::stopStream: error (");
      uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_118);
      std::operator<<<std::char_traits<char>_>(uVar2,") locking output buffer!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_b8);
      goto LAB_14093c93f;
    }
    local_110 = (ulonglong)local_164;
    puVar4 = local_150;
    for (uVar3 = local_110; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_188 = (uint *)((ulonglong)local_188 & 0xffffffff00000000);
    local_168 = (**(code **)(*local_158 + 0x98))(local_158,local_150,local_164,0);
    if (local_168 < 0) {
      local_108 = FUN_140937560(local_168);
      uVar2 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::stopStream: error (");
      uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_108);
      std::operator<<<std::char_traits<char>_>(uVar2,") unlocking output buffer!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_98);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_98);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_98);
      goto LAB_14093c93f;
    }
    local_160[0xb] = 0;
  }
  if ((*(int *)(param_1 + 0x128) == 1) || (*(int *)(param_1 + 0x128) == 2)) {
    local_148 = *(longlong **)(local_160 + 8);
    local_150 = (undefined1 *)0x0;
    local_164 = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    if (*(int *)(param_1 + 0x128) != 2) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x188));
    }
    local_168 = (**(code **)(*local_148 + 0x50))(local_148);
    if (local_168 < 0) {
      local_100 = FUN_140937560(local_168);
      uVar2 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::stopStream: error (");
      uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_100);
      std::operator<<<std::char_traits<char>_>(uVar2,") stopping input buffer!");
      std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                (param_1 + 0x10,local_78);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (param_1 + 0xf0,local_78);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_78);
    }
    else {
      local_f8 = *local_148;
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_188 = &local_164;
      local_168 = (**(code **)(local_f8 + 0x40))(local_148,0,local_160[0xe],&local_150);
      if (local_168 < 0) {
        local_f0 = FUN_140937560(local_168);
        uVar2 = std::operator<<<std::char_traits<char>_>(param_1 + 8,"RtApiDs::stopStream: error (")
        ;
        uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_f0);
        std::operator<<<std::char_traits<char>_>(uVar2,") locking input buffer!");
        std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                  (param_1 + 0x10,local_58);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_1 + 0xf0,local_58);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_58);
      }
      else {
        local_e8 = (ulonglong)local_164;
        puVar4 = local_150;
        for (uVar3 = local_e8; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_188 = (uint *)((ulonglong)local_188 & 0xffffffff00000000);
        local_168 = (**(code **)(*local_148 + 0x58))(local_148,local_150,local_164,0);
        if (local_168 < 0) {
          local_e0 = FUN_140937560(local_168);
          uVar2 = std::operator<<<std::char_traits<char>_>
                            (param_1 + 8,"RtApiDs::stopStream: error (");
          uVar2 = std::operator<<<std::char_traits<char>_>(uVar2,local_e0);
          std::operator<<<std::char_traits<char>_>(uVar2,") unlocking input buffer!");
          std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
                    (param_1 + 0x10,local_38);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                    (param_1 + 0xf0,local_38);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_38);
        }
        else {
          local_160[0xc] = 0;
        }
      }
    }
  }
LAB_14093c93f:
  timeEndPeriod(1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x188));
  if (local_168 < 0) {
    RtApi::error(param_1,9);
  }
  return;
}



// FUNCTION 14093c9a0 str body=80 status=ok
// SIG undefined str(void)

void std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
               (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _Tidy(param_1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(param_2);
  _Init(param_1,uVar2,uVar1,*(undefined4 *)(param_1 + 0x70));
  return;
}



// FUNCTION 14093c9f0 str body=398 status=ok
// SIG undefined str(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::str
          (basic_streambuf<char,std::char_traits<char>_> *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 auStack_88 [32];
  basic_streambuf<char,std::char_traits<char>_> *local_68;
  char *local_60;
  basic_streambuf<char,std::char_traits<char>_> *local_58;
  char *local_50;
  char *local_48;
  undefined1 *local_40;
  basic_streambuf<char,std::char_traits<char>_> *local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_40 = local_30;
  _String_val<std::_Simple_types<char>_>::_String_val<std::_Simple_types<char>_>(local_40);
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_init(local_30);
  if (((*(uint *)(param_1 + 0x70) & 2) == 0) &&
     (pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1),
     pcVar1 != (char *)0x0)) {
    local_50 = std::basic_streambuf<char,std::char_traits<char>_>::pbase(param_1);
    local_60 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1);
    local_68 = param_1 + 0x68;
    local_58 = local_68;
    if (*(char **)local_68 <= local_60) {
      local_58 = (basic_streambuf<char,std::char_traits<char>_> *)&local_60;
    }
    local_38 = local_58;
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_30,local_50,*(ulonglong *)local_58 - (longlong)local_50);
  }
  else if (((*(uint *)(param_1 + 0x70) & 4) == 0) &&
          (pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1),
          pcVar1 != (char *)0x0)) {
    local_48 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::egptr(param_1);
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_30,local_48,(longlong)pcVar1 - (longlong)local_48);
  }
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_2,local_30);
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(local_30);
  return param_2;
}



// FUNCTION 14093cb80 throw_wrapper body=30 status=ok
// SIG undefined throw_wrapper(void)

void throw_wrapper(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 14093cba0 tickStreamTime body=83 status=ok
// SIG undefined tickStreamTime(void)

void RtApi::tickStreamTime(longlong param_1)

{
  *(double *)(param_1 + 0x278) =
       *(double *)(param_1 + 0x278) +
       ((double)*(uint *)(param_1 + 0x154) * 1.0) / (double)*(uint *)(param_1 + 0x150);
  return;
}



// FUNCTION 14093cc00 underflow body=313 status=ok
// SIG undefined underflow(void)

ulonglong std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::underflow
                    (basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte *pbVar3;
  char *pcVar4;
  char *local_40;
  byte *local_38;
  basic_streambuf<char,std::char_traits<char>_> *local_30;
  basic_streambuf<char,std::char_traits<char>_> *local_28;
  basic_streambuf<char,std::char_traits<char>_> *local_20;
  char *local_18;
  
  pbVar1 = (byte *)std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
  if (pbVar1 == (byte *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pbVar3 = (byte *)std::basic_streambuf<char,std::char_traits<char>_>::egptr(param_1);
    if (pbVar1 < pbVar3) {
      uVar2 = (ulonglong)*pbVar1;
    }
    else {
      local_40 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1);
      if ((local_40 == (char *)0x0) || ((*(uint *)(param_1 + 0x70) & 4) != 0)) {
        uVar2 = 0xffffffff;
      }
      else {
        local_30 = param_1 + 0x68;
        local_28 = local_30;
        if (*(char **)local_30 < local_40) {
          local_28 = (basic_streambuf<char,std::char_traits<char>_> *)&local_40;
        }
        local_20 = local_28;
        local_38 = *(byte **)local_28;
        if (pbVar1 < local_38) {
          *(byte **)(param_1 + 0x68) = local_38;
          local_18 = std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
          pcVar4 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (param_1,pcVar4,local_18,(char *)local_38);
          pbVar1 = (byte *)std::basic_streambuf<char,std::char_traits<char>_>::gptr(param_1);
          uVar2 = (ulonglong)*pbVar1;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 14093cd40 verifyStream body=126 status=ok
// SIG undefined verifyStream(void)

void RtApi::verifyStream(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_28;
  
  if (*(int *)(param_1 + 300) == -0x32) {
    local_28 = -1;
    do {
      lVar1 = local_28 + 1;
      lVar2 = local_28 + 1;
      local_28 = lVar1;
    } while ("RtApi:: a stream is not open!"[lVar2] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1 + 0xf0,"RtApi:: a stream is not open!",lVar1);
    error(param_1,7);
  }
  return;
}



// FUNCTION 14093cdc0 what body=56 status=ok
// SIG undefined what(void)

char * stdext::exception::what(longlong param_1)

{
  char *local_18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_18 = "unknown exception";
  }
  else {
    local_18 = *(char **)(param_1 + 8);
  }
  return local_18;
}



// FUNCTION 14093ce00 Z_Construct_UPackage__Script_AudioCapture body=45 status=ok
// SIG undefined Z_Construct_UPackage__Script_AudioCapture(void)

longlong Z_Construct_UPackage__Script_AudioCapture(void)

{
  if (DAT_146863630 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146863630,&PTR_s__Script_AudioCapture_144162acf_1_144162c30);
  }
  return DAT_146863630;
}



// FUNCTION 14093ce30 FUN_14093ce30 body=14 status=ok
// SIG undefined FUN_14093ce30(void)

void FUN_14093ce30(void)

{
  FUN_14093d170();
  return;
}



// FUNCTION 14093ce40 Emplace<FName,FName> body=118 status=ok
// SIG undefined Emplace<FName,FName>(void)

longlong TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
         Emplace<FName,FName>(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_38 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>(param_1,local_38,&local_18,0);
  return *param_1 + 8 + (longlong)local_38[0] * 0x18;
}



// FUNCTION 14093cec0 InternalConstructor<UAudioCaptureComponent> body=76 status=ok
// SIG undefined InternalConstructor<UAudioCaptureComponent>(void)

void InternalConstructor<UAudioCaptureComponent>(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_14092c050(*param_1,param_1);
  }
  return;
}



// FUNCTION 14093cf10 FUN_14093cf10 body=8 status=ok
// SIG undefined FUN_14093cf10(void)

undefined8 FUN_14093cf10(void)

{
  return 0;
}



// FUNCTION 14093cf20 FUN_14093cf20 body=13 status=ok
// SIG undefined FUN_14093cf20(void)

wchar_t * FUN_14093cf20(void)

{
  return L"/Script/AudioCapture";
}



// FUNCTION 14093cf30 FindId body=563 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      FindId(longlong *param_1,int *param_2,longlong param_3)

{
  int local_a8;
  uint local_a4;
  int local_78;
  int iStack_74;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_78 = (int)param_3;
    iStack_74 = (int)((ulonglong)param_3 >> 0x20);
    local_a4 = (uint)(param_1[8] == 0);
    for (local_a8 = *(int *)((param_1[8] | (longlong)(int)-local_a4 & (ulonglong)(param_1 + 7)) +
                            (longlong)(int)(local_78 + iStack_74 & (int)param_1[9] - 1U) * 4);
        local_a8 != -1; local_a8 = *(int *)(*param_1 + 0x10 + (longlong)local_a8 * 0x18)) {
      if (*(longlong *)(*param_1 + (longlong)local_a8 * 0x18) == param_3) {
        *param_2 = local_a8;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14093d170 FUN_14093d170 body=172 status=ok
// SIG undefined FUN_14093d170(void)

longlong FUN_14093d170(void)

{
  if (DAT_146863640 == 0) {
    FUN_14171ccd0(L"/Script/AudioCapture",L"AudioCaptureComponent",&DAT_146863640,FUN_140447710,
                  0x700,0x10000000,0,L"Engine",InternalConstructor<UAudioCaptureComponent>,
                  FUN_14093cf10,AK::MemoryMgr::StartProfileThreadUsage,&LAB_1404e7f60,&LAB_140447700
                  ,0);
  }
  return DAT_146863640;
}



// FUNCTION 14093d220 FUN_14093d220 body=19 status=ok
// SIG undefined FUN_14093d220(void)

void FUN_14093d220(void)

{
  FUN_14093d170();
  return;
}



// FUNCTION 14093d240 Z_Construct_UPackage__Script_AudioCapture body=45 status=ok
// SIG undefined Z_Construct_UPackage__Script_AudioCapture(void)

longlong Z_Construct_UPackage__Script_AudioCapture(void)

{
  if (DAT_146863638 == 0) {
    FUN_141786440(&DAT_146863638,&PTR_FUN_144162b00);
  }
  return DAT_146863638;
}



// FUNCTION 14093d270 FUN_14093d270 body=503 status=ok
// SIG undefined FUN_14093d270(void)

undefined8 FUN_14093d270(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar3 = operator_new(0xb30);
  if (lVar3 == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)operator_new(0x218);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_142a7ac80(puVar4);
    lVar7 = 0;
    puVar4[0x33] = &PTR_StartProfileThreadUsage_143fcf640;
    puVar4[0x34] = &PTR__scalar_deleting_destructor__143f73ca8;
    *(undefined1 *)(puVar4 + 0x35) = 0;
    if (DAT_1468c217e == '\0') {
      if (DAT_1469e6880 == 0) {
        uVar5 = GetTransientPackage();
        FUN_1417846f0(uVar5,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar6 = UGCObjectReferencer::GetPrivateStaticClass();
        DAT_1469e6880 = FUN_1417985e0(uVar6,uVar5,0,0,0,0,0,0,0);
        iVar1 = *(int *)(DAT_1469e6880 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar8 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar8;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar8) * 0x18;
        }
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
      }
      UGCObjectReferencer::AddObject(DAT_1469e6880,puVar4 + 0x34);
      *(undefined1 *)(puVar4 + 0x35) = 1;
    }
    *(undefined1 *)(puVar4 + 0x36) = 0;
    *puVar4 = &PTR_IsPromotedBuild_144163818;
    puVar4[1] = &PTR_LAB_144163930;
    puVar4[2] = &PTR_StartProfileThreadUsage_144163940;
    puVar4[0x33] = &PTR_LAB_144163980;
    puVar4[0x34] = &PTR_LAB_144163998;
    FUN_14058f8d0(puVar4 + 0x38,0);
    FUN_140590080(puVar4 + 0x39);
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar4 + 0x3c));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar4 + 0x3c),4000);
    puVar4[0x41] = 0;
    puVar4[0x42] = 0;
  }
  uVar5 = FUN_142a79860(lVar3,puVar4);
  return uVar5;
}



// FUNCTION 14093d480 FUN_14093d480 body=243 status=ok
// SIG undefined FUN_14093d480(void)

undefined8 * FUN_14093d480(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_144163818;
  param_1[1] = &PTR_LAB_144163930;
  param_1[2] = &PTR_StartProfileThreadUsage_144163940;
  param_1[0x33] = &PTR_LAB_144163980;
  param_1[0x34] = &PTR_LAB_144163998;
  if (param_1[0x41] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  FUN_140591060(param_1 + 0x39);
  if (param_1[0x38] != 0) {
    FUN_1405a53f0();
    param_1[0x38] = 0;
  }
  param_1[0x34] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0x35) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1 + 0x34);
  }
  Audio::IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 14093d580 FUN_14093d580 body=23 status=ok
// SIG undefined FUN_14093d580(void)

void FUN_14093d580(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014093d593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x18,0,0);
  return;
}



// FUNCTION 14093d5a0 FUN_14093d5a0 body=92 status=ok
// SIG undefined FUN_14093d5a0(void)

undefined1 FUN_14093d5a0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x1b0) != '\0') && (*(int *)(param_1 + 0x68) != 0)) {
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FUN_1405ac930();
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        FUN_1405a53f0();
        *(undefined8 *)(param_1 + 0x1c0) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 14093d600 FUN_14093d600 body=191 status=ok
// SIG undefined FUN_14093d600(void)

undefined8 FUN_14093d600(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146863690) {
    _Init_thread_header(&DAT_146863690);
    if (DAT_146863690 == -1) {
      FName::FName(&DAT_146863688,&DAT_144163378,1);
      _Init_thread_footer(&DAT_146863690);
    }
  }
  lVar3 = *param_2;
  uVar2 = USoundWave::GetRunningPlatform();
  cVar1 = (**(code **)(lVar3 + 800))(param_2,DAT_146863688,uVar2);
  if (cVar1 != '\0') {
    lVar3 = operator_new(0x60);
    if (lVar3 != 0) {
      uVar2 = FVorbisAudioInfo::FVorbisAudioInfo(lVar3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14093d6c0 GetReferencerName body=75 status=ok
// SIG undefined GetReferencerName(void)

undefined8 * FGCObject::GetReferencerName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_2,0x12,"Wwise Passthrough",0x12,0x3f);
  return param_2;
}



// FUNCTION 14093d740 FUN_14093d740 body=588 status=ok
// SIG undefined FUN_14093d740(void)

ulonglong FUN_14093d740(longlong param_1,undefined8 param_2,undefined2 **param_3)

{
  undefined2 **ppuVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 **ppuVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 in_stack_ffffffffffffffc8;
  undefined2 uVar9;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar9 = (undefined2)((uint)in_stack_ffffffffffffffc8 >> 0x10);
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    local_18 = (undefined2 *)0x0;
    local_10 = 0x30;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
    puVar4 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"Wwise Audio mixer platform was not initialized.",0x60)
    ;
    local_28 = (undefined2 *)0x0;
    local_20 = 0x5e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x5e,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
               ,0x5e,CONCAT22(uVar9,0x3f));
    puVar8 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar8 = puVar3;
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar7 = puVar4;
    }
    FString::PrintfImpl(&local_18,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar7,
                        puVar8,0x44);
    ppuVar5 = &local_18;
    ppuVar1 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar1 == ppuVar5) {
      if (local_18 != (undefined2 *)0x0) {
        ppuVar5 = (undefined2 **)FMemory::Free();
      }
    }
    else {
      if (*ppuVar1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar1 = local_18;
      *(int *)(param_1 + 0x140) = (int)local_10;
      ppuVar5 = (undefined2 **)(ulonglong)local_10._4_4_;
      *(uint *)(param_1 + 0x144) = local_10._4_4_;
    }
    if (puVar3 != (undefined2 *)0x0) {
      ppuVar5 = (undefined2 **)FMemory::Free(puVar3);
    }
    if (puVar4 != (undefined2 *)0x0) {
      ppuVar5 = (undefined2 **)FMemory::Free(puVar4);
    }
    uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  }
  else {
    local_28 = (undefined2 *)0x0;
    local_20 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    puVar3 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x12,"Wwise Passthrough",0x12,CONCAT22(uVar9,0x3f));
    if (param_3 == &local_28) {
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
    }
    else {
      if (*param_3 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_3 = puVar3;
      *(int *)(param_3 + 1) = (int)local_20;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    }
    ppuVar5 = param_3 + 2;
    if (ppuVar5 != &local_18) {
      if (*ppuVar5 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar5 = (undefined2 *)0x0;
      param_3[3] = (undefined2 *)0x0;
    }
    *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) | 1;
    *(undefined4 *)((longlong)param_3 + 0x24) = 48000;
    *(undefined4 *)(param_3 + 4) = 2;
    *(undefined4 *)(param_3 + 5) = 2;
    ppuVar5 = param_3 + 6;
    *(undefined4 *)(param_3 + 7) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_3 + 0x3c)) {
      TArray<float,FDefaultAllocator>::ResizeTo(ppuVar5,0);
    }
    iVar2 = *(int *)(param_3 + 7);
    *(int *)(param_3 + 7) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0x3c) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(ppuVar5,iVar2);
    }
    *(undefined4 *)(*ppuVar5 + (longlong)iVar2 * 2) = 0;
    iVar2 = *(int *)(param_3 + 7);
    *(int *)(param_3 + 7) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0x3c) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(ppuVar5,iVar2);
    }
    puVar3 = *ppuVar5;
    *(undefined4 *)(puVar3 + (longlong)iVar2 * 2) = 1;
    uVar6 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  return uVar6;
}



// FUNCTION 14093d990 FUN_14093d990 body=6 status=ok
// SIG undefined FUN_14093d990(void)

undefined8 FUN_14093d990(void)

{
  return 7;
}



// FUNCTION 14093d9a0 GetPlatformDeviceInfo body=176 status=ok
// SIG undefined GetPlatformDeviceInfo(void)

longlong Audio::FMixerPlatformNonRealtime::GetPlatformDeviceInfo(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FString::FString(param_2,param_1 + 0x20);
  FString::FString(param_2 + 0x10,param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 0x30) = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  _Src = *(void **)(param_1 + 0x50);
  *(int *)(param_2 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_2 + 0x30,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 0x30),_Src,(longlong)iVar1 << 2);
  }
  *(byte *)(param_2 + 0x40) =
       *(byte *)(param_2 + 0x40) ^ (*(byte *)(param_1 + 0x60) ^ *(byte *)(param_2 + 0x40)) & 1;
  return param_2;
}



// FUNCTION 14093da50 GetPlatformSettings body=33 status=ok
// SIG undefined GetPlatformSettings(void)

undefined8 Audio::FMixerPlatformXAudio2::GetPlatformSettings(undefined8 param_1,undefined8 param_2)

{
  FAudioPlatformSettings::GetPlatformSettings
            (param_2,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return param_2;
}



// FUNCTION 14093da80 FUN_14093da80 body=123 status=ok
// SIG undefined FUN_14093da80(void)

undefined8 * FUN_14093da80(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146863680) {
    _Init_thread_header(&DAT_146863680);
    if (DAT_146863680 == -1) {
      FName::FName(&DAT_146863678,&DAT_1441630e8,1);
      _Init_thread_footer(&DAT_146863680);
    }
  }
  *param_2 = DAT_146863678;
  return param_2;
}



// FUNCTION 14093db00 FUN_14093db00 body=481 status=ok
// SIG undefined FUN_14093db00(void)

undefined8 FUN_14093db00(longlong param_1)

{
  int iVar1;
  undefined2 **ppuVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 in_stack_ffffffffffffffc8;
  undefined2 uVar8;
  undefined4 uVar7;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffffc8 >> 0x10);
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    if (DAT_1468536c5 != '\0') {
      *(undefined1 *)(param_1 + 0x1b0) = 1;
      return 1;
    }
    local_20 = 0x4d;
    local_28 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar4 = local_28;
    FGenericPlatformString::Memcpy
              (local_28,
               L"Wwise Audio mixer platform open an audio stream before Wwise is initialized.",0x9a)
    ;
    local_18 = (undefined2 *)0x0;
    local_10 = 0x5e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar3 = local_18;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_18,0x5e,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
               ,0x5e,CONCAT22(uVar8,0x3f));
    uVar7 = 0x25;
    puVar6 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar6 = puVar3;
    }
    iVar1 = (int)local_20;
  }
  else {
    local_10 = 0x30;
    local_18 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar4 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"Wwise Audio mixer platform already initialized.",0x60)
    ;
    local_28 = (undefined2 *)0x0;
    local_20 = 0x5e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x5e,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
               ,0x5e,CONCAT22(uVar8,0x3f));
    uVar7 = 0x1f;
    puVar6 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar6 = puVar3;
    }
    iVar1 = (int)local_10;
  }
  puVar5 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar5 = puVar4;
  }
  FString::PrintfImpl(&local_18,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar5,puVar6,
                      uVar7);
  ppuVar2 = (undefined2 **)(param_1 + 0x138);
  if (ppuVar2 == &local_18) {
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppuVar2 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *ppuVar2 = local_18;
    *(int *)(param_1 + 0x140) = (int)local_10;
    *(undefined4 *)(param_1 + 0x144) = local_10._4_4_;
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  return 0;
}



// FUNCTION 14093dcf0 FUN_14093dcf0 body=39 status=ok
// SIG undefined FUN_14093dcf0(void)

void FUN_14093dcf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144163748;
    return;
  }
  return;
}



// FUNCTION 14093dd20 FUN_14093dd20 body=271 status=ok
// SIG undefined FUN_14093dd20(void)

void FUN_14093dd20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  if (((*(char *)(param_1 + 0x1b0) != '\0') &&
      (cVar1 = FUN_14059ee90(param_1 + 0x1c8), cVar1 == '\0')) &&
     (*(longlong *)(param_1 + 0x1c0) != 0)) {
    cVar1 = FUN_14059f160();
    if (cVar1 != '\0') {
      FUN_1405adfe0(*(undefined4 *)(param_1 + 0x1d8),param_1 + 0x198);
    }
    local_38[0] = 0;
    local_38[1] = 0;
    lVar2 = FUN_1405a2d20(*(undefined8 *)(param_1 + 0x1c0),local_28,*(undefined8 *)(param_1 + 0x1b8)
                          ,0,0,local_38);
    FUN_1405913a0(param_1 + 0x1c8,lVar2);
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(lVar2 + 0x10);
    FUN_140591060(local_28);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    cVar1 = FUN_14059f160(param_1 + 0x1c8);
    if (cVar1 != '\0') {
      FUN_1405a3f20(*(undefined4 *)(param_1 + 0x1d8),param_1 + 0x198);
    }
  }
  return;
}



// FUNCTION 14093de30 FUN_14093de30 body=1235 status=ok
// SIG undefined FUN_14093de30(void)

undefined8 FUN_14093de30(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 **ppuVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong local_res8;
  longlong local_res18 [2];
  undefined4 in_stack_ffffffffffffffa8;
  undefined2 uVar14;
  undefined4 uVar13;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  uVar14 = (undefined2)((uint)in_stack_ffffffffffffffa8 >> 0x10);
  if ((char)param_1[0x36] == '\0') {
    local_30 = 0x30;
    local_38 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar9 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"Wwise Audio Mixer platform was not initialized.",0x60)
    ;
    local_48 = (undefined2 *)0x0;
    local_40 = 0x5e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar10 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_48,0x5e,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
               ,0x5e,CONCAT22(uVar14,0x3f));
    uVar13 = 0x65;
    puVar12 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar12 = puVar10;
    }
    iVar1 = (int)local_30;
    goto LAB_14093e1ed;
  }
  if (param_1[0x38] == 0) {
    if ((int)param_1[0xd] == 0) {
      plVar4 = (longlong *)UOculusHMDRuntimeSettings::GetPrivateStaticClass();
      lVar5 = plVar4[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar5 = plVar4[0x1f];
      }
      lVar5 = FSoftObjectPath::TryLoad(lVar5 + 0x28);
      if (lVar5 == 0) {
LAB_14093e05e:
        lVar5 = 0;
      }
      else {
        lVar6 = UPawnAction_Sequence::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14093e05e;
      }
      param_1[0x37] = lVar5;
      if (lVar5 == 0) {
        local_48 = (undefined2 *)0x0;
        local_40 = 0x40;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        puVar9 = local_48;
        FGenericPlatformString::Memcpy
                  (local_48,L"Wwise Audio Mixer platform could not find playback Wwise Event.",0x80)
        ;
        local_38 = (undefined2 *)0x0;
        local_30 = 0x5e;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        puVar10 = local_38;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_38,0x5e,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
                   ,0x5e,CONCAT22(uVar14,0x3f));
        uVar13 = 0x7b;
      }
      else {
        uVar7 = FUN_14059ce50(DAT_1468536c8 + 8,local_res18,0,0);
        FUN_14058f8f0(&local_38,uVar7);
        uVar7 = FUN_14058f8a0(&local_res8,&local_38);
        FUN_140591350(param_1 + 0x38,uVar7);
        if (local_res8 != 0) {
          FUN_1405a53f0();
          local_res8 = 0;
        }
        FUN_140591060(&local_38);
        if (local_res18[0] != 0) {
          FUN_1405a53f0();
        }
        if (param_1[0x38] != 0) {
          *(undefined1 *)(param_1[0x38] + 0x61) = 1;
          *(undefined1 *)(param_1[0x38] + 0x62) = 0;
          lVar5 = param_2[1];
          param_1[0x10] = *param_2;
          param_1[0x11] = lVar5;
          uVar13 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar5 = param_2[3];
          uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(int *)(param_1 + 0x12) = (int)param_2[2];
          *(undefined4 *)((longlong)param_1 + 0x94) = uVar13;
          *(int *)(param_1 + 0x13) = (int)lVar5;
          *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
          param_1[0x14] = param_2[4];
          *(undefined4 *)(param_1 + 3) = 0;
          Audio::FAudioPlatformDeviceInfo::Reset(param_1 + 4);
          *(undefined4 *)(param_1 + 0xd) = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 2;
          *(int *)(param_1 + 3) = (int)param_1[0x10];
          *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_1 + 0x84);
          *(int *)(param_1 + 0xf) = (int)param_1[0x11];
          param_1[0xe] = param_1[0x12];
          (**(code **)(*param_1 + 0x68))(param_1,0,param_1 + 4);
          *(undefined4 *)(param_1 + 0xd) = 1;
          return 1;
        }
        local_48 = (undefined2 *)0x0;
        local_40 = 0x35;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        puVar9 = local_48;
        FGenericPlatformString::Memcpy
                  (local_48,L"Wwise Audio Mixer platform failed to get an emitter.",0x6a);
        local_38 = (undefined2 *)0x0;
        local_30 = 0x5e;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        puVar10 = local_38;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_38,0x5e,
                   "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
                   ,0x5e,CONCAT22(uVar14,0x3f));
        uVar13 = 0x83;
      }
    }
    else {
      local_40 = 0x4f;
      local_48 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar9 = local_48;
      FGenericPlatformString::Memcpy
                (local_48,
                 L"Wwise Audio Mixer platform audio stream already opened (state was not Closed).",
                 0x9e);
      local_38 = (undefined2 *)0x0;
      local_30 = 0x5e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      puVar10 = local_38;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_38,0x5e,
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
                 ,0x5e,CONCAT22(uVar14,0x3f));
      uVar13 = 0x71;
    }
  }
  else {
    local_40 = 0x51;
    local_48 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar9 = local_48;
    FGenericPlatformString::Memcpy
              (local_48,
               L"Wwise Audio Mixer platform audio stream already opened (emitter already exists).",
               0xa2);
    local_38 = (undefined2 *)0x0;
    local_30 = 0x5e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar10 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_38,0x5e,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
               ,0x5e,CONCAT22(uVar14,0x3f));
    uVar13 = 0x6b;
  }
  puVar12 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar12 = puVar10;
  }
  iVar1 = (int)local_40;
LAB_14093e1ed:
  puVar11 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar11 = puVar9;
  }
  FString::PrintfImpl(&local_38,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar11,
                      puVar12,uVar13);
  ppuVar8 = (undefined2 **)(param_1 + 0x27);
  if (ppuVar8 == &local_38) {
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppuVar8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *ppuVar8 = local_38;
    *(int *)(param_1 + 0x28) = (int)local_30;
    *(undefined4 *)((longlong)param_1 + 0x144) = local_30._4_4_;
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return 0;
}



// FUNCTION 14093e310 Reset body=211 status=ok
// SIG undefined Reset(void)

void Audio::FAudioPlatformDeviceInfo::Reset(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((wchar_t *)*param_1 != L"Unknown") {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar1 = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,8);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + 8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    builtin_wcsncpy((wchar_t *)*param_1,L"Unknown",8);
  }
  if ((wchar_t *)param_1[2] != L"Unknown") {
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2,8);
      iVar2 = (int)param_1[3];
    }
    *(int *)(param_1 + 3) = iVar2 + 8;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2);
    }
    builtin_wcsncpy((wchar_t *)param_1[2],L"Unknown",8);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x3c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
  return;
}



// FUNCTION 14093e3f0 FUN_14093e3f0 body=198 status=ok
// SIG undefined FUN_14093e3f0(void)

undefined8 FUN_14093e3f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  Audio::IAudioMixerPlatformInterface::BeginGeneratingAudio();
  local_38[0] = 0;
  local_38[1] = 0;
  lVar2 = FUN_1405a2d20(*(undefined8 *)(param_1 + 0x1c0),local_28,*(undefined8 *)(param_1 + 0x1b8),0
                        ,0,local_38);
  FUN_1405913a0(param_1 + 0x1c8,lVar2);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(lVar2 + 0x10);
  FUN_140591060(local_28);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  cVar1 = FUN_14059f160(param_1 + 0x1c8);
  if (cVar1 != '\0') {
    FUN_1405a3f20(*(undefined4 *)(param_1 + 0x1d8),param_1 + 0x198);
    return 1;
  }
  return 0;
}



// FUNCTION 14093e4c0 FUN_14093e4c0 body=127 status=ok
// SIG undefined FUN_14093e4c0(void)

undefined8 FUN_14093e4c0(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_1405adfe0(*(int *)(param_1 + 0x1d8),param_1 + 0x198);
  }
  cVar1 = FUN_14059ee90(param_1 + 0x1c8);
  if (cVar1 != '\0') {
    FUN_1405ac8f0(param_1 + 0x1c8,0,4);
  }
  FUN_1405913a0(param_1 + 0x1c8,&DAT_1461fcfe0);
  *(undefined4 *)(param_1 + 0x1d8) = DAT_1461fcff0;
  if (*(int *)(param_1 + 0x68) == 4) {
    FUN_142a95100(param_1);
  }
  return 1;
}



// FUNCTION 14093e540 FUN_14093e540 body=230 status=ok
// SIG undefined FUN_14093e540(void)

void FUN_14093e540(longlong param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  }
  if ((ulonglong)(uint)(*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x84) * 4) * 2 <
      (ulonglong)(longlong)*(int *)(param_1 + 0x210)) {
    *(undefined4 *)(param_1 + 0x210) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x214)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x208,0);
    }
  }
  iVar1 = *(int *)(param_1 + 0x210);
  iVar2 = *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x84) * 2;
  iVar4 = iVar1 + iVar2;
  *(int *)(param_1 + 0x210) = iVar4;
  if (*(int *)(param_1 + 0x214) < iVar4) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x208,iVar1);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x208)),param_2,(longlong)iVar2);
                    /* WARNING: Could not recover jumptable at 0x00014093e61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  return;
}



// FUNCTION 14093e630 FUN_14093e630 body=330 status=ok
// SIG undefined FUN_14093e630(void)

undefined8 FUN_14093e630(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 **ppuVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 in_stack_ffffffffffffffc8;
  undefined2 uVar6;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffffffffffc8 >> 0x10);
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    local_18 = (undefined2 *)0x0;
    local_10 = 0x32;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    FGenericPlatformString::Memcpy
              (local_18,L"Wwise Audio mixer platform was already tore down.",100);
    local_28 = (undefined2 *)0x0;
    local_20 = 0x5e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_28,0x5e,
               "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\AudioMixerWwise\\Source\\Private\\AudioMixerPlatformWwise.cpp"
               ,0x5e,CONCAT22(uVar6,0x3f));
    puVar5 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar5 = puVar1;
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar4 = puVar2;
    }
    FString::PrintfImpl(&local_18,L"Audio Platform Device Error: %s (File %s, Line %d)",puVar4,
                        puVar5,0x32);
    ppuVar3 = (undefined2 **)(param_1 + 0x138);
    if (ppuVar3 == &local_18) {
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppuVar3 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *ppuVar3 = local_18;
      *(int *)(param_1 + 0x140) = (int)local_10;
      *(undefined4 *)(param_1 + 0x144) = local_10._4_4_;
    }
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  return 1;
}



// FUNCTION 14093e780 FUN_14093e780 body=208 status=ok
// SIG undefined FUN_14093e780(void)

void FUN_14093e780(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  uVar3 = (uint)((ulonglong)*(ushort *)(param_3 + 2) << 2);
  uVar4 = *(uint *)(param_1 + 0x78);
  if (uVar3 <= *(uint *)(param_1 + 0x78)) {
    uVar4 = uVar3;
  }
  if (uVar4 == 0) {
    *(undefined4 *)((longlong)param_3 + 0xc) = 0x2e;
  }
  else {
    _guard_xfg_dispatch_icall_nop
              ((void *)*param_3,*(void **)(param_1 + 0x70),(ulonglong)*(ushort *)(param_3 + 2) << 2)
    ;
    *(undefined2 *)((longlong)param_3 + 0x12) = *(undefined2 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_3 + 0xc) = 0x2d;
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 - uVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x70),
                 (void *)((longlong)(int)uVar4 + (longlong)*(void **)(param_1 + 0x70)),
                 (longlong)(int)(iVar2 - uVar4));
      iVar2 = *(int *)(param_1 + 0x78);
    }
    *(uint *)(param_1 + 0x78) = iVar2 - uVar4;
  }
  if (*(uint *)(param_1 + 0x78) < uVar3) {
    Audio::IAudioMixerPlatformInterface::ReadNextBuffer(param_1 + -0x198);
  }
                    /* WARNING: Could not recover jumptable at 0x00014093e849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14093e880 FUN_14093e880 body=47 status=ok
// SIG undefined FUN_14093e880(void)

longlong FUN_14093e880(void)

{
  if (DAT_146863698 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146863698,&PTR_s__Script_AudioMixerWwise_144163b50);
  }
  return DAT_146863698;
}



// FUNCTION 14093e8b0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UOculusHMDRuntimeSettings::GetPrivateStaticClass(void)

{
  if (DAT_1468636a8 == 0) {
    FUN_14171ccd0(L"/Script/AudioMixerWwise",L"AudioMixerWwiseSettings",&DAT_1468636a8,FUN_140447710
                  ,0x40,0x10000006,0,L"Engine",FUN_14093e970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468636a8;
}



// FUNCTION 14093e970 FUN_14093e970 body=55 status=ok
// SIG undefined FUN_14093e970(void)

void FUN_14093e970(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144163b78;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 14093e9b0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UHudSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14093ea00 FUN_14093ea00 body=47 status=ok
// SIG undefined FUN_14093ea00(void)

longlong FUN_14093ea00(void)

{
  if (DAT_1468636a0 == 0) {
    FUN_141786440(&DAT_1468636a0,&PTR_GetPrivateStaticClass_1441639f0);
  }
  return DAT_1468636a0;
}



// FUNCTION 14093ea30 FUN_14093ea30 body=291 status=ok
// SIG undefined FUN_14093ea30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14093ea30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_158 [32];
  longlong local_138 [2];
  undefined1 local_128 [256];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar7 = 0;
  local_28 = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,local_128);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != local_138) {
    puVar4 = (undefined8 *)*plVar1;
    *plVar1 = local_138[0];
    local_138[0] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 14093eb60 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144163f98;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14093ebb0 FUN_14093ebb0 body=49 status=ok
// SIG undefined FUN_14093ebb0(void)

float FUN_14093ebb0(float *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = 0;
  fVar2 = 0.0;
  if (param_1 <= param_1 + 10) {
    do {
      fVar2 = fVar2 + *param_1;
      param_1 = param_1 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 10);
  }
  return fVar2;
}



// FUNCTION 14093ebf0 FUN_14093ebf0 body=126 status=ok
// SIG undefined FUN_14093ebf0(void)

undefined8 * FUN_14093ebf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CableComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_140943740();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  param_1[0x2d] = lVar4;
  *(undefined1 *)(lVar4 + 0x75e) = 0;
  return param_1;
}



// FUNCTION 14093ec70 FUN_14093ec70 body=381 status=ok
// SIG undefined FUN_14093ec70(void)

undefined8 * FUN_14093ec70(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  FUN_14235ed30();
  *param_1 = &PTR_FUN_144164030;
  puVar3 = (undefined4 *)((longlong)param_1 + 0x7b4);
  param_1[5] = &PTR_LAB_144164958;
  lVar2 = 10;
  param_1[0x5a] = &PTR_LAB_144164988;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0xffffffff;
  lVar1 = 10;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0x104] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  param_1[0xe8] = 0x42c80000;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(undefined2 *)(param_1 + 0xe3) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0x41200000;
  if ((undefined4 *)((longlong)param_1 + 0x7dc) < puVar3) {
    lVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0xea) = 10;
  *(undefined4 *)(param_1 + 0xef) = 4;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0xeb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x77c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xec) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0xee) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xf5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x75e) = 1;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  if (puVar3 <= (undefined4 *)((longlong)param_1 + 0x7dc)) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  puVar3 = (undefined4 *)((longlong)param_1 + 0x7dc);
  if (puVar3 <= (undefined4 *)((longlong)param_1 + 0x804)) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_142717130(param_1,DAT_146aefc68);
  return param_1;
}



// FUNCTION 14093edf0 FUN_14093edf0 body=127 status=ok
// SIG undefined FUN_14093edf0(void)

undefined8 * FUN_14093edf0(undefined8 *param_1)

{
  FUN_14235ee30();
  *(undefined1 *)(param_1 + 0x38) = 0;
  *param_1 = &PTR_FUN_144164cd0;
  param_1[5] = &PTR_LAB_1441651e8;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x42c80000;
  param_1[0x3b] = 0;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e2) = 1;
  return param_1;
}



// FUNCTION 14093ee70 FUN_14093ee70 body=737 status=ok
// SIG undefined FUN_14093ee70(void)

void FUN_14093ee70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong uVar7;
  
  FUN_140940170(*param_1,&local_78,&local_68);
  bVar11 = *(char *)(*param_1 + 0x718) == '\0';
  lVar1 = *(longlong *)(*param_1 + 0x798);
  if (!bVar11) {
    *(undefined8 *)(lVar1 + 0x10) = local_78;
    *(undefined8 *)(lVar1 + 4) = local_78;
    *(undefined4 *)(lVar1 + 0x18) = local_70;
    *(undefined4 *)(lVar1 + 0xc) = local_70;
  }
  *(bool *)lVar1 = bVar11;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x798);
  lVar4 = (longlong)*(int *)(lVar1 + 0x750) * 0x1c;
  bVar11 = *(char *)(lVar1 + 0x719) == '\0';
  if (!bVar11) {
    *(undefined8 *)(lVar4 + 0x10 + lVar2) = local_68;
    *(undefined8 *)(lVar4 + 4 + lVar2) = local_68;
    *(undefined4 *)(lVar4 + 0x18 + lVar2) = local_60;
    *(undefined4 *)(lVar4 + 0xc + lVar2) = local_60;
  }
  *(bool *)(lVar4 + lVar2) = bVar11;
  fVar14 = 0.0;
  lVar1 = *param_1;
  fVar15 = *(float *)(lVar1 + 0x754);
  if (fVar15 <= 0.005) {
    fVar15 = 0.005;
  }
  *(float *)(lVar1 + 0x790) = *(float *)(param_1 + 1) + *(float *)(lVar1 + 0x790);
  lVar1 = *param_1;
  fVar12 = *(float *)(lVar1 + 0x790);
  while (fVar15 < fVar12) {
    fVar12 = (float)FUN_140943100(lVar1);
    iVar3 = *(int *)(lVar1 + 0x750);
    uVar10 = 0;
    fVar13 = *(float *)(lVar1 + 0x74c) / (float)iVar3;
    if (0 < *(int *)(lVar1 + 0x758)) {
      do {
        uVar8 = 0;
        if (0 < iVar3) {
          do {
            uVar5 = (int)uVar8 + 1;
            uVar7 = (ulonglong)uVar5;
            SolveDistanceConstraint
                      ((longlong)(int)uVar8 * 0x1c + *(longlong *)(lVar1 + 0x798),
                       (longlong)(int)uVar5 * 0x1c + *(longlong *)(lVar1 + 0x798),fVar13);
            iVar3 = *(int *)(lVar1 + 0x750);
            uVar8 = uVar7 & 0xffffffff;
          } while ((int)uVar7 < iVar3);
        }
        iVar9 = (int)uVar10;
        if ((*(char *)(lVar1 + 0x75c) != '\0') && (iVar6 = 0, 0 < iVar3 + -1)) {
          do {
            SolveDistanceConstraint
                      ((longlong)iVar6 * 0x1c + *(longlong *)(lVar1 + 0x798),
                       (longlong)(iVar6 + 2) * 0x1c + *(longlong *)(lVar1 + 0x798),fVar13 + fVar13);
            iVar9 = (int)uVar10;
            iVar3 = *(int *)(lVar1 + 0x750);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3 + -1);
        }
        uVar10 = (ulonglong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < *(int *)(lVar1 + 0x758));
    }
    if (*(char *)(lVar1 + 0x75d) != '\0') {
      FUN_1409414e0(lVar1);
    }
    fVar14 = fVar14 + fVar12;
    *(float *)(*param_1 + 0x790) = *(float *)(*param_1 + 0x790) - fVar15;
    lVar1 = *param_1;
    fVar12 = *(float *)(lVar1 + 0x790);
  }
  *(float *)(lVar1 + 0x7b4 + (ulonglong)*(uint *)(lVar1 + 0x7ac) * 4) = fVar14;
  lVar1 = *param_1;
  uVar5 = *(uint *)(lVar1 + 0x7ac);
  if (uVar5 == 0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = ABS(fVar14 - *(float *)(lVar1 + 0x7b4 + (ulonglong)(uVar5 - 1) * 4));
  }
  *(float *)(lVar1 + 0x7dc + (ulonglong)uVar5 * 4) = fVar15;
  *(uint *)(*param_1 + 0x7ac) = (*(int *)(*param_1 + 0x7ac) + 1U) % 10;
  *(int *)(*param_1 + 0x7b0) = *(int *)(*param_1 + 0x7b0) + 1;
  return;
}



// FUNCTION 14093f180 FUN_14093f180 body=97 status=ok
// SIG undefined FUN_14093f180(void)

undefined8 * FUN_14093f180(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144164cc0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14093f1f0 FUN_14093f1f0 body=260 status=ok
// SIG undefined FUN_14093f1f0(void)

undefined8 * FUN_14093f1f0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = param_1 + 0x75;
  *param_1 = &PTR_FUN_144164b38;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  plVar2 = param_1 + 0x7e;
  (**(code **)(*plVar2 + 0x30))(plVar2);
  plVar3 = (longlong *)param_1[0x14d];
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar3,0x10);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x14c);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x14b);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x148);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x147);
  FUN_141edd2d0(plVar2);
  *plVar1 = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x7c);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x7b);
  FUN_141edd2d0(plVar1);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa90);
  }
  return param_1;
}



// FUNCTION 14093f300 FUN_14093f300 body=103 status=ok
// SIG undefined FUN_14093f300(void)

longlong FUN_14093f300(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x670);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x668);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x678);
  }
  return param_1;
}



// FUNCTION 14093f370 FUN_14093f370 body=43 status=ok
// SIG undefined FUN_14093f370(void)

undefined8 * FUN_14093f370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14093f3a0 FUN_14093f3a0 body=43 status=ok
// SIG undefined FUN_14093f3a0(void)

undefined8 * FUN_14093f3a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14093f3d0 FUN_14093f3d0 body=122 status=ok
// SIG undefined FUN_14093f3d0(void)

longlong FUN_14093f3d0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x820) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x820) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  FUN_14080d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x830);
  }
  return param_1;
}



// FUNCTION 14093f450 FUN_14093f450 body=52 status=ok
// SIG undefined FUN_14093f450(void)

undefined8 FUN_14093f450(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 14093f490 FUN_14093f490 body=161 status=ok
// SIG undefined FUN_14093f490(void)

void FUN_14093f490(longlong param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142381c70();
  lVar2 = *(longlong *)(param_1 + 0x798);
  lVar3 = (longlong)*(int *)(param_1 + 0x7a0) * 0x1c + lVar2;
  if (lVar2 != lVar3) {
    pfVar1 = (float *)(lVar2 + 0xc);
    do {
      lVar2 = lVar2 + 0x1c;
      pfVar1[-2] = *param_2 + pfVar1[-2];
      pfVar1[-1] = pfVar1[-1] + param_2[1];
      *pfVar1 = *pfVar1 + param_2[2];
      pfVar1[1] = pfVar1[1] + *param_2;
      pfVar1[2] = pfVar1[2] + param_2[1];
      pfVar1[3] = param_2[2] + pfVar1[3];
      pfVar1 = pfVar1 + 7;
    } while (lVar2 != lVar3);
  }
  return;
}



// FUNCTION 14093f540 FUN_14093f540 body=185 status=ok
// SIG undefined FUN_14093f540(void)

void FUN_14093f540(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_18;
  int local_10;
  
  FUN_142330a70();
  lVar3 = param_1[0x3a];
  if ((lVar3 != 0) || (lVar3 = param_1[0x23], lVar3 != 0)) {
    uVar1 = FUN_140943740();
    AActor::GetComponentsByClass(lVar3,&local_18,uVar1);
    if (local_18 != local_18 + local_10) {
      plVar2 = local_18;
      do {
        if (*(longlong *)(*plVar2 + 0x18) == param_1[0x3b]) {
          if (plVar2 != (longlong *)0x0) {
            param_1[0x3e] = *plVar2;
          }
          break;
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != local_18 + local_10);
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  if (((char)param_1[0x3c] != '\0') && (param_1[0x3e] != 0)) {
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  return;
}



// FUNCTION 14093f600 FUN_14093f600 body=133 status=ok
// SIG undefined FUN_14093f600(void)

void FUN_14093f600(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"NumSides",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"NumSegments",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"CableWidth",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"TileMaterial",0);
  FShaderResourceParameter::Bind(param_1 + 0x20,param_2,L"CablePoints",0);
  return;
}



// FUNCTION 14093f690 FUN_14093f690 body=723 status=ok
// SIG undefined FUN_14093f690(void)

/* WARNING: Removing unreachable block (ram,0x00014093f7f8) */

undefined8 * FUN_14093f690(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  longlong lVar2;
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
  
  lVar2 = (longlong)*(int *)(param_1 + 0x7a0);
  fVar10 = *(float *)(param_1 + 0x1d8) + *(float *)(param_1 + 0x1e4);
  fVar11 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1e4);
  fVar12 = *(float *)(param_1 + 0x1d4) + *(float *)(param_1 + 0x1e0);
  fVar13 = *(float *)(param_1 + 0x1d4) - *(float *)(param_1 + 0x1e0);
  fVar14 = *(float *)(param_1 + 0x1d0) + *(float *)(param_1 + 0x1dc);
  fVar15 = *(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 0x1dc);
  if (0 < lVar2) {
    pfVar1 = (float *)(*(longlong *)(param_1 + 0x798) + 0xc);
    fVar9 = *(float *)(param_1 + 0x774) * 0.5;
    do {
      fVar6 = fVar9 + pfVar1[-2];
      fVar7 = fVar9 + pfVar1[-1];
      fVar3 = pfVar1[-2] - fVar9;
      fVar8 = fVar9 + *pfVar1;
      fVar4 = pfVar1[-1] - fVar9;
      fVar5 = *pfVar1 - fVar9;
      if (fVar3 < fVar15) {
        fVar15 = fVar3;
      }
      if (fVar4 < fVar13) {
        fVar13 = fVar4;
      }
      if (fVar5 < fVar11) {
        fVar11 = fVar5;
      }
      if (fVar14 < fVar6) {
        fVar14 = fVar6;
      }
      if (fVar12 < fVar7) {
        fVar12 = fVar7;
      }
      if (fVar10 < fVar8) {
        fVar10 = fVar8;
      }
      pfVar1 = pfVar1 + 7;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44((fVar12 - fVar13) * 0.5,(fVar14 - fVar15) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (fVar10 - fVar11) * 0.5;
  *param_2 = CONCAT44(fVar13 + *(float *)(param_2 + 2),fVar15 + *(float *)((longlong)param_2 + 0xc))
  ;
  *(float *)(param_2 + 1) = fVar11 + *(float *)((longlong)param_2 + 0x14);
  fVar10 = *(float *)((longlong)param_2 + 0xc);
  if (fVar10 <= 100.0) {
    fVar10 = 100.0;
  }
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  fVar11 = *(float *)(param_2 + 2);
  if (fVar11 <= 100.0) {
    fVar11 = 100.0;
  }
  *(float *)((longlong)param_2 + 0xc) = fVar10;
  fVar10 = *(float *)((longlong)param_2 + 0x14);
  if (fVar10 <= 100.0) {
    fVar10 = 100.0;
  }
  *(float *)(param_2 + 2) = fVar11;
  *(float *)((longlong)param_2 + 0x14) = fVar10;
  return param_2;
}



// FUNCTION 14093f980 FUN_14093f980 body=87 status=ok
// SIG undefined FUN_14093f980(void)

undefined8 * FUN_14093f980(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x28);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *puVar1 = &PTR_FUN_144164a20;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1a) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x22) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14093f9e0 FUN_14093f9e0 body=32 status=ok
// SIG undefined FUN_14093f9e0(void)

void FUN_14093f9e0(longlong *param_1)

{
  FUN_142387f70();
                    /* WARNING: Could not recover jumptable at 0x00014093f9f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1);
  return;
}



// FUNCTION 14093fa00 FUN_14093fa00 body=500 status=ok
// SIG undefined FUN_14093fa00(void)

undefined8 * FUN_14093fa00(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0xa90);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_14271d7c0(puVar6,param_1,0);
  puVar6[0x74] = 0;
  *puVar6 = &PTR_FUN_144164b38;
  *(undefined4 *)(puVar6 + 0x76) = 4;
  puVar6[0x77] = 0;
  puVar6[0x78] = 0;
  *(undefined1 *)(puVar6 + 0x7a) = 0;
  puVar6[0x7b] = 0;
  puVar6[0x7c] = 0;
  puVar6[0x75] = &PTR_FUN_1441649e0;
  *(undefined4 *)(puVar6 + 0x7f) = *(undefined4 *)(puVar6[0x26] + 8);
  puVar6[0x80] = 0;
  puVar6[0x81] = 0;
  *(undefined1 *)(puVar6 + 0x83) = 0;
  puVar6[0xe4] = 0;
  *(undefined2 *)(puVar6 + 0xe5) = 1;
  *(undefined1 *)((longlong)puVar6 + 0x72a) = 0;
  puVar6[0x146] = 0;
  puVar6[0x147] = 0;
  puVar6[0x148] = 0;
  puVar6[0x7e] = &PTR_FUN_144164ac8;
  puVar6[0x149] = 0;
  puVar6[0x14a] = 0;
  puVar6[0x14b] = 0;
  puVar6[0x14c] = 0;
  puVar6[0x14d] = 0;
  FUN_14236ce60(param_1,puVar6 + 0x14e,*(undefined4 *)(puVar6[0x26] + 8));
  lVar4 = param_1[0xea];
  *(int *)(puVar6 + 0x14f) = (int)lVar4;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x774);
  *(undefined4 *)((longlong)puVar6 + 0xa7c) = uVar1;
  iVar3 = (int)param_1[0xef];
  *(int *)(puVar6 + 0x150) = iVar3;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x77c);
  *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) | 0x40000000;
  *(uint *)((longlong)puVar6 + 0x1c) = *(uint *)((longlong)puVar6 + 0x1c) | 0x10000000;
  *(int *)(puVar6 + 0x7d) = iVar3 * 2 + 2;
  *(undefined4 *)((longlong)puVar6 + 0xa84) = uVar2;
  *(undefined4 *)(puVar6 + 0x14a) = uVar1;
  *(undefined4 *)((longlong)puVar6 + 0xa54) = uVar2;
  *(int *)(puVar6 + 0x149) = iVar3;
  *(int *)((longlong)puVar6 + 0xa4c) = (int)lVar4;
  FUN_141edf270(puVar6 + 0x7e);
  FUN_141edf270(puVar6 + 0x75);
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x560))(param_1,0);
  puVar6[0x74] = plVar7;
  if ((plVar7 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar7 + 0x2f0))(plVar7,0xf), cVar5 != '\0')) {
    return puVar6;
  }
  uVar8 = UMaterial::GetDefaultMaterial(0);
  puVar6[0x74] = uVar8;
  return puVar6;
}



// FUNCTION 14093fc20 FUN_14093fc20 body=90 status=ok
// SIG undefined FUN_14093fc20(void)

void FUN_14093fc20(longlong *param_1,char param_2,char param_3)

{
  char cVar1;
  
  if ((param_1[0x2f] != 0) && (param_1[0x3e] != 0)) {
    if (param_3 != '\0') {
      *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)((longlong)param_1 + 0x1c4);
    }
    cVar1 = UActorComponent::IsComponentTickEnabled();
    if (param_2 != cVar1) {
      (**(code **)(*param_1 + 0x358))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 14093fc90 FUN_14093fc90 body=259 status=ok
// SIG undefined FUN_14093fc90(void)

void FUN_14093fc90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_140941e90(param_1[2],param_1[3]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144164cc0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14093fda0 FUN_14093fda0 body=8 status=ok
// SIG undefined FUN_14093fda0(void)

undefined8 FUN_14093fda0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x720);
}



// FUNCTION 14093fdb0 FUN_14093fdb0 body=19 status=ok
// SIG undefined FUN_14093fdb0(void)

void FUN_14093fdb0(longlong param_1)

{
  FUN_142430eb0(param_1 + 0x720,*(undefined8 *)(param_1 + 0x118));
  return;
}



// FUNCTION 14093fdd0 FUN_14093fdd0 body=188 status=ok
// SIG undefined FUN_14093fdd0(void)

void FUN_14093fdd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  lVar5 = *(longlong *)(param_1 + 0x798);
  lVar6 = (longlong)*(int *)(param_1 + 0x7a0) * 0x1c + lVar5;
  if (lVar5 != lVar6) {
    puVar4 = (undefined8 *)(lVar5 + 4);
    do {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar5 = lVar5 + 0x1c;
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x1c);
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0xc + 8) = *(undefined4 *)puVar1;
    } while (lVar5 != lVar6);
  }
  return;
}



// FUNCTION 14093fe90 FUN_14093fe90 body=721 status=ok
// SIG undefined FUN_14093fe90(void)

void FUN_14093fe90(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  longlong local_48;
  undefined4 local_40;
  int iStack_3c;
  undefined8 local_38;
  
  if (*(longlong *)(param_1 + 0xa60) != 0) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x2a8))
                      (*(longlong **)(param_1 + 0x3a0),(*(uint *)(param_1 + 0x18) & 0x300) != 0,0);
    uVar11 = 0;
    local_38 = uVar8;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        if ((param_4 >> (uVar11 & 0x1f) & 1) != 0) {
          iVar5 = FUN_1408bed80(param_5,1);
          lVar12 = (ulonglong)(uint)(iVar5 % 0x59) * 0xb8 +
                   *(longlong *)(*param_5 + (longlong)(iVar5 / 0x59) * 8);
          lVar10 = *(longlong *)(lVar12 + 0x78);
          if (*(longlong *)(lVar12 + 0x78) == 0) {
            lVar10 = lVar12;
          }
          *(longlong *)(lVar10 + 0x10) = param_1 + 0x3a8;
          *(uint *)(lVar12 + 0x8c) = *(uint *)(lVar12 + 0x8c) & 0xfffffeff;
          *(longlong *)(lVar12 + 0xa0) = param_1 + 0x3f0;
          *(undefined8 *)(lVar12 + 0xa8) = uVar8;
          local_48 = *(longlong *)(param_1 + 0x1c0);
          if (local_48 != 0) {
            LOCK();
            *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
            UNLOCK();
          }
          plVar1 = (longlong *)(lVar10 + 8);
          if (plVar1 != &local_48) {
            puVar3 = (undefined8 *)*plVar1;
            *plVar1 = local_48;
            local_48 = 0;
            if (puVar3 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(puVar3 + 1);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                if ((*(char *)(puVar3 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
                  LOCK();
                  bVar13 = *(int *)((longlong)puVar3 + 0xc) == 0;
                  if (bVar13) {
                    *(int *)((longlong)puVar3 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar13) {
                    uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar6 == 0) {
                      lVar9 = 0;
                    }
                    else {
                      lVar9 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                    }
                    *(undefined8 **)(lVar9 + 8) = puVar3;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
                  (**(code **)*puVar3)(puVar3);
                }
              }
            }
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
          iVar5 = *(int *)(lVar10 + 0x38);
          iStack_3c = *(int *)(param_1 + 0xa80) * 2;
          local_40 = 0;
          iVar7 = iVar5 + 1;
          *(int *)(lVar10 + 0x38) = iVar7;
          if (*(int *)(lVar10 + 0x3c) < iVar7) {
            TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
            ::ResizeGrow(lVar10 + 0x28);
          }
          lVar9 = *(longlong *)(lVar10 + 0x30);
          if (*(longlong *)(lVar10 + 0x30) == 0) {
            lVar9 = lVar10 + 0x28;
          }
          *(ulonglong *)(lVar9 + (longlong)iVar5 * 8) = CONCAT44(iStack_3c,local_40);
          *(undefined4 *)(lVar10 + 0x48) = 0;
          *(int *)(lVar10 + 0x4c) = *(int *)(param_1 + 0xa80) * 2 + 2;
          *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(param_1 + 0xa78);
          uVar6 = (*(byte *)(param_1 + 0x18) & 1 | 0x200) << 3 |
                  *(uint *)(lVar12 + 0x8c) & 0xffc01ff7;
          *(uint *)(lVar12 + 0x8c) = uVar6;
          *(uint *)(lVar12 + 0x8c) = (*(uint *)(param_1 + 0x1c) >> 0x11 ^ uVar6) & 0x200 ^ uVar6;
          FUN_142747330(param_5,uVar11,lVar12);
          uVar8 = local_38;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(param_2 + 8));
    }
  }
  return;
}



// FUNCTION 140940170 FUN_140940170 body=512 status=ok
// SIG undefined FUN_140940170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140940170(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x224);
  local_60 = (float)param_1[0x45];
  *param_2 = (int)param_1[0x44];
  param_2[1] = uVar1;
  param_2[2] = local_60;
  plVar5 = (longlong *)FUN_142430eb0(param_1 + 0xe4,param_1[0x23]);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1;
  }
  local_68 = 0;
  if (param_1[0xe7] == 0) {
    fVar2 = *(float *)(plVar5 + 0x42);
    fVar3 = *(float *)((longlong)plVar5 + 0x214);
    fVar10 = *(float *)(plVar5 + 0x43);
    fVar4 = *(float *)((longlong)plVar5 + 0x21c);
    fVar11 = *(float *)(param_1 + 0xe8) * *(float *)(plVar5 + 0x46);
    fVar12 = *(float *)((longlong)param_1 + 0x744) * *(float *)((longlong)plVar5 + 0x234);
    fVar13 = *(float *)(param_1 + 0xe9) * *(float *)(plVar5 + 0x47);
    fVar7 = fVar13 * fVar3 - fVar12 * fVar10;
    fVar8 = fVar11 * fVar10 - fVar13 * fVar2;
    fVar9 = fVar12 * fVar2 - fVar11 * fVar3;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar11 = (fVar9 * fVar3 - fVar8 * fVar10) + fVar4 * fVar7 + fVar11 + *(float *)(plVar5 + 0x44);
    fVar10 = (fVar7 * fVar10 - fVar9 * fVar2) + fVar4 * fVar8 + fVar12 +
             *(float *)((longlong)plVar5 + 0x224);
    local_60 = (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar9 + fVar13 + *(float *)(plVar5 + 0x45);
  }
  else {
    pfVar6 = (float *)(**(code **)(*plVar5 + 0x420))(plVar5,local_58,param_1[0xe7],0);
    fVar2 = *pfVar6;
    fVar3 = pfVar6[1];
    fVar10 = pfVar6[2];
    fVar4 = pfVar6[3];
    fVar11 = *(float *)(param_1 + 0xe8) * pfVar6[8];
    fVar12 = *(float *)((longlong)param_1 + 0x744) * pfVar6[9];
    fVar13 = *(float *)(param_1 + 0xe9) * pfVar6[10];
    fVar7 = fVar13 * fVar3 - fVar12 * fVar10;
    fVar8 = fVar11 * fVar10 - fVar13 * fVar2;
    fVar9 = fVar12 * fVar2 - fVar11 * fVar3;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar11 = (fVar9 * fVar3 - fVar8 * fVar10) + fVar4 * fVar7 + fVar11 + pfVar6[4];
    fVar10 = (fVar7 * fVar10 - fVar9 * fVar2) + fVar4 * fVar8 + fVar12 + pfVar6[5];
    local_60 = (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar9 + fVar13 + pfVar6[6];
  }
  *param_3 = CONCAT44(fVar10,fVar11);
  *(float *)(param_3 + 1) = local_60;
  return;
}



// FUNCTION 140940380 FUN_140940380 body=275 status=ok
// SIG undefined FUN_140940380(void)

float FUN_140940380(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  
  FUN_140940170(param_1,&local_38,&local_28);
  lVar5 = *(longlong *)(param_1 + 0x798);
  fVar8 = 0.0;
  lVar6 = (longlong)*(int *)(param_1 + 0x7a0) * 0x1c + lVar5;
  if (lVar5 != lVar6) {
    pfVar4 = (float *)(lVar5 + 4);
    do {
      fVar2 = *pfVar4;
      lVar5 = lVar5 + 0x1c;
      pfVar1 = pfVar4 + 1;
      uVar3 = *(undefined8 *)pfVar4;
      fVar7 = pfVar4[2] - local_30;
      local_30 = pfVar4[2];
      pfVar4 = pfVar4 + 7;
      fStack_44 = (float)((ulonglong)uVar3 >> 0x20);
      fVar8 = fVar8 + SQRT((*pfVar1 - local_34) * (*pfVar1 - local_34) +
                           (fVar2 - local_38) * (fVar2 - local_38) + fVar7 * fVar7);
      local_48 = (float)uVar3;
      local_34 = fStack_44;
      local_38 = local_48;
    } while (lVar5 != lVar6);
  }
  return SQRT((local_24 - local_34) * (local_24 - local_34) +
              (local_28 - local_38) * (local_28 - local_38) +
              (local_20 - local_30) * (local_20 - local_30)) + fVar8;
}



// FUNCTION 1409404a0 FUN_1409404a0 body=1057 status=ok
// SIG undefined FUN_1409404a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1409404a0(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
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
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar3 = *(int *)(param_1 + 0x7a0);
  if (((param_3 != DAT_1468636c0) && (param_3 != DAT_1468636c8)) || (iVar3 < 2)) goto LAB_140940893;
  lVar4 = *(longlong *)(param_1 + 0x798);
  if (param_3 == DAT_1468636c0) {
    lVar5 = (longlong)iVar3 * 0x1c;
    uVar1 = *(undefined8 *)(lVar5 + -0x18 + lVar4);
    fVar12 = (float)uVar1;
    fVar13 = *(float *)(lVar5 + -0x10 + lVar4);
    lVar5 = (longlong)iVar3 * 0x1c;
    uVar2 = *(undefined8 *)(lVar5 + -0x34 + lVar4);
    fVar10 = fVar12 - (float)uVar2;
    local_128._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_130 = fVar13 - *(float *)(lVar5 + -0x2c + lVar4);
    fVar11 = local_128._4_4_ - (float)((ulonglong)uVar2 >> 0x20);
    fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + local_130 * local_130;
    if (fVar7 != 1.0) {
      if (fVar7 < 1e-08) {
LAB_1409406ce:
        local_130 = DAT_1468b5d98;
        local_138 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar7 = local_128._4_4_;
        goto LAB_140940771;
      }
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar10 = fVar10 * fVar8;
      fVar11 = fVar11 * fVar8;
      local_130 = local_130 * fVar8;
    }
    local_138 = CONCAT44(fVar11,fVar10);
    fVar7 = local_128._4_4_;
  }
  else {
    fVar12 = (float)*(undefined8 *)(lVar4 + 4);
    fVar13 = *(float *)(lVar4 + 0xc);
    fVar11 = (float)*(undefined8 *)(lVar4 + 0x20) - fVar12;
    local_128._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar4 + 4) >> 0x20);
    fVar10 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x20) >> 0x20) - local_128._4_4_;
    local_130 = *(float *)(lVar4 + 0x28) - fVar13;
    fVar7 = fVar10 * fVar10 + fVar11 * fVar11 + local_130 * local_130;
    if (fVar7 != 1.0) {
      if (fVar7 < 1e-08) goto LAB_1409406ce;
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar11 = fVar11 * fVar8;
      fVar10 = fVar10 * fVar8;
      local_130 = local_130 * fVar8;
    }
    local_138 = CONCAT44(fVar10,fVar11);
    fVar7 = local_128._4_4_;
  }
LAB_140940771:
  local_128 = local_138;
  local_120 = local_130;
  local_138 = 0x3f800000;
  local_130 = 0.0;
  FQuat::FindBetweenVectors(&local_108,&local_138,&local_128);
  local_e8._4_4_ = fVar7;
  local_e8._0_4_ = fVar12;
  local_e8._8_4_ = fVar13;
  local_e8._12_4_ = 0;
  local_f8 = local_108;
  uStack_f0 = uStack_100;
  local_d8 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  uStack_d0 = 0x3f800000;
  uStack_cc = 0;
  if (param_4 == 0) {
    *param_2 = local_108;
    param_2[1] = uStack_100;
    auVar9._4_4_ = fVar7;
    auVar9._0_4_ = fVar12;
    auVar9._8_4_ = fVar13;
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 2) = auVar9;
    *(undefined4 *)(param_2 + 4) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_2 + 5) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    return param_2;
  }
  if (param_4 == 1) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar4 == 0) {
        puVar6 = (undefined8 *)&DAT_1468b5b70;
      }
      else {
        puVar6 = (undefined8 *)(lVar4 + 0x210);
      }
      local_c8 = *puVar6;
      uStack_c0 = puVar6[1];
      local_b8 = *(undefined4 *)(puVar6 + 2);
      uStack_b4 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_b0 = *(undefined4 *)(puVar6 + 3);
      uStack_ac = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_a8 = *(undefined4 *)(puVar6 + 4);
      uStack_a4 = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_a0 = *(undefined4 *)(puVar6 + 5);
      uStack_9c = *(undefined4 *)((longlong)puVar6 + 0x2c);
      FUN_14162bcf0(&local_f8,param_2,&local_c8);
      return param_2;
    }
  }
  else if (param_4 == 2) {
    FUN_14162bcf0(&local_f8,param_2,param_1 + 0x210);
    return param_2;
  }
LAB_140940893:
  FUN_14238d570(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1409408d0 FUN_1409408d0 body=1036 status=ok
// SIG undefined FUN_1409408d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1409408d0(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  float local_190;
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  fVar25 = 0.0;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  FUN_140940170(param_1,&local_188,&local_178);
  local_198 = CONCAT44(fStack_184,local_188);
  local_190 = local_180;
  lVar8 = (longlong)(*(int *)(param_1 + 0x7a0) + -1);
  fVar26 = local_180;
  fVar15 = fStack_184;
  fVar27 = local_188;
  if (1 < lVar8) {
    lVar7 = 1;
    lVar6 = 0x1c;
    do {
      lVar1 = *(longlong *)(param_1 + 0x798);
      local_160 = *(float *)(lVar6 + 0xc + lVar1);
      local_188 = (float)*(undefined8 *)(lVar6 + 4 + lVar1) - fVar27;
      fStack_184 = (float)((ulonglong)*(undefined8 *)(lVar6 + 4 + lVar1) >> 0x20) - fVar15;
      local_180 = local_160 - fVar26;
      fVar13 = SQRT(fStack_184 * fStack_184 + local_188 * local_188 + local_180 * local_180);
      if (1e-08 < fVar13) {
        if (param_3 <= fVar13 + fVar25) {
          fVar13 = (param_3 - fVar25) / fVar13;
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
          fVar23 = fVar13 * local_188;
          fVar24 = fVar13 * fStack_184;
          fVar13 = fVar13 * local_180;
          FRotationMatrix::MakeFromXZ(&local_128,&local_188,param_4);
          local_f8 = fVar23 + fVar27;
          local_f4 = fVar24 + fVar15;
          local_f0 = fVar13 + fVar26;
          FUN_140487e30(&local_158,&local_128);
          bVar3 = true;
          uVar9 = local_138;
          uVar10 = uStack_134;
          uVar11 = uStack_130;
          uVar12 = uStack_12c;
          uVar14 = local_148;
          uVar16 = uStack_144;
          uVar17 = uStack_140;
          uVar18 = uStack_13c;
          uVar19 = local_158;
          uVar20 = uStack_154;
          uVar21 = uStack_150;
          uVar22 = uStack_14c;
        }
        else {
          local_198 = *(undefined8 *)(lVar6 + 4 + lVar1);
          fVar15 = (float)((ulonglong)local_198 >> 0x20);
          bVar3 = false;
          uVar9 = local_108;
          uVar10 = uStack_104;
          uVar11 = uStack_100;
          uVar12 = uStack_fc;
          uVar14 = local_118;
          uVar16 = uStack_114;
          uVar17 = uStack_110;
          uVar18 = uStack_10c;
          uVar19 = local_128;
          uVar20 = uStack_124;
          uVar21 = uStack_120;
          uVar22 = uStack_11c;
          fVar25 = fVar13 + fVar25;
          fVar26 = local_160;
          fVar27 = (float)local_198;
          local_190 = local_160;
        }
        if (bVar3) {
          *param_5 = 0;
          *(undefined4 *)param_2 = uVar19;
          *(undefined4 *)((longlong)param_2 + 4) = uVar20;
          *(undefined4 *)(param_2 + 1) = uVar21;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar22;
          *(undefined4 *)(param_2 + 2) = uVar14;
          *(undefined4 *)((longlong)param_2 + 0x14) = uVar16;
          *(undefined4 *)(param_2 + 3) = uVar17;
          *(undefined4 *)((longlong)param_2 + 0x1c) = uVar18;
          goto LAB_140940c55;
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x1c;
    } while (lVar7 < lVar8);
  }
  local_188 = local_178 - fVar27;
  fStack_184 = local_174 - fVar15;
  local_180 = local_170 - fVar26;
  fVar13 = SQRT(fStack_184 * fStack_184 + local_188 * local_188 + local_180 * local_180);
  if (1e-08 < fVar13) {
    fVar13 = (param_3 - fVar25) / fVar13;
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    fVar25 = local_188 * fVar13;
    fVar24 = fStack_184 * fVar13;
    fVar13 = local_180 * fVar13;
    FRotationMatrix::MakeFromXZ(&local_128,&local_188,param_4);
    local_f8 = fVar25 + fVar27;
    local_f4 = fVar24 + fVar15;
    local_f0 = fVar13 + fVar26;
    FUN_140487e30(&local_158,&local_128);
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  *param_5 = 1;
  local_f8 = (float)CONCAT31(local_f8._1_3_,cVar5);
  puVar4 = (undefined8 *)&local_128;
  if (cVar5 == '\0') {
    puVar4 = (undefined8 *)&DAT_1468b5b70;
  }
  uVar2 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar2;
  uVar2 = puVar4[3];
  param_2[2] = puVar4[2];
  param_2[3] = uVar2;
  uVar9 = *(undefined4 *)(puVar4 + 4);
  uVar10 = *(undefined4 *)((longlong)puVar4 + 0x24);
  uVar11 = *(undefined4 *)(puVar4 + 5);
  uVar12 = *(undefined4 *)((longlong)puVar4 + 0x2c);
LAB_140940c55:
  *(undefined4 *)(param_2 + 4) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar10;
  *(undefined4 *)(param_2 + 5) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar12;
  return param_2;
}



// FUNCTION 140940ce0 FUN_140940ce0 body=135 status=ok
// SIG undefined FUN_140940ce0(void)

undefined8 FUN_140940ce0(undefined8 param_1,undefined8 param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  fVar1 = (float)FUN_140940380();
  fVar2 = 0.0;
  if ((0.0 <= param_3) && (fVar2 = param_3, 1.0 <= param_3)) {
    fVar2 = 1.0;
  }
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_res18[0] = 0;
  FUN_1409408d0(param_1,param_2,fVar2 * fVar1,&local_28,local_res18);
  return param_2;
}



// FUNCTION 140940d90 FUN_140940d90 body=147 status=ok
// SIG undefined FUN_140940d90(void)

undefined8 * FUN_140940d90(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar1 = FUN_142730ad0(param_1,param_3);
  if ((cVar1 == '\0') || ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x100) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x400;
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar3;
  bVar2 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar2 << 0xb | 0x200;
  FUN_1425a2630(param_1 + 0xa70,param_2);
  return param_2;
}



// FUNCTION 140940e40 FUN_140940e40 body=606 status=ok
// SIG undefined FUN_140940e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140940e40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  void *_Dst;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  int *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_44 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = &local_68;
  local_a0 = 2;
  uVar9 = 0;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_58 = 1;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_a8 = *(int *)(param_1 + 0x40) << 2;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_78,&DAT_146ab6e78,4);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != local_78) {
    puVar3 = (undefined8 *)*plVar1;
    *plVar1 = local_78[0];
    local_78[0] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar12 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar12) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar12) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            uVar6 = uVar9;
            if (uVar5 != 0) {
              uVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(uVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  iVar11 = *(int *)(param_1 + 0x40);
  local_88 = (int *)0x0;
  local_80 = 0;
  uVar6 = uVar9;
  iVar7 = 0;
  if (0 < iVar11) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_88,iVar11);
    iVar11 = *(int *)(param_1 + 0x40);
    uVar6 = local_80 & 0xffffffff;
    iVar7 = local_80._4_4_;
  }
  iVar11 = iVar11 + (int)uVar6;
  local_80 = CONCAT44(local_80._4_4_,iVar11);
  if (iVar7 < iVar11) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88);
    iVar11 = (int)local_80;
  }
  piVar2 = local_88;
  uVar6 = (ulonglong)((longlong)(local_88 + iVar11) + (3 - (longlong)local_88)) >> 2;
  if (local_88 + iVar11 < local_88) {
    uVar6 = uVar9;
  }
  piVar8 = local_88;
  uVar10 = uVar9;
  if (uVar6 != 0) {
    do {
      *piVar8 = (int)uVar10;
      piVar8 = piVar8 + 1;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar6);
  }
  local_a8 = iVar11 * 4;
  local_a0 = 1;
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4f8))(DAT_146ab6358,&DAT_146ab6e78,*plVar1,0);
  _guard_xfg_dispatch_icall_nop(_Dst,piVar2,(longlong)iVar11 * 4);
  (**(code **)(*DAT_146ab6358 + 0x500))(DAT_146ab6358,&DAT_146ab6e78,*plVar1);
  if (piVar2 != (int *)0x0) {
    FMemory::Free(piVar2);
  }
  return;
}



// FUNCTION 1409410c0 FUN_1409410c0 body=1044 status=ok
// SIG undefined FUN_1409410c0(void)

void FUN_1409410c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  FUN_1423937b0();
  plVar1 = (longlong *)(param_1 + 0x798);
  uVar10 = 0;
  iVar9 = *(int *)(param_1 + 0x750) + 1;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x7a4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  iVar5 = *(int *)(param_1 + 0x7a0) + iVar9;
  *(int *)(param_1 + 0x7a0) = iVar5;
  if (*(int *)(param_1 + 0x7a4) < iVar5) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (plVar1);
  }
  FUN_140940170(param_1,&local_78,&local_88);
  local_88 = local_88 - local_78;
  local_84 = local_84 - local_74;
  local_80 = local_80 - local_70;
  if (((*(char *)(param_1 + 0x75e) == '\0') && (iVar5 = *(int *)(param_1 + 0x788), 0 < iVar5)) &&
     (iVar9 == iVar5)) {
    puVar7 = *(undefined8 **)(param_1 + 0x780);
    puVar11 = (undefined8 *)*plVar1;
    puVar2 = (undefined8 *)((longlong)puVar7 + (longlong)iVar5 * 0xc);
    if (puVar7 != puVar2) {
      do {
        uVar15 = *puVar7;
        uVar3 = *(undefined4 *)(puVar7 + 1);
        uStack_64 = (undefined4)uVar15;
        uStack_60 = (undefined4)((ulonglong)uVar15 >> 0x20);
        puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
        local_68 = CONCAT31(local_68._1_3_,1);
        *puVar11 = CONCAT44(uStack_64,local_68);
        puVar11[1] = CONCAT44(uVar3,uStack_60);
        puVar11[2] = uVar15;
        *(undefined4 *)(puVar11 + 3) = uVar3;
        puVar11 = (undefined8 *)((longlong)puVar11 + 0x1c);
      } while (puVar7 != puVar2);
      puVar11 = (undefined8 *)*plVar1;
    }
    *(undefined8 *)(param_1 + 0x804) = *(undefined8 *)((longlong)puVar11 + 4);
    *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)((longlong)puVar11 + 0xc);
    lVar6 = (longlong)*(int *)(param_1 + 0x750) * 0x1c;
    *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(lVar6 + 4 + (longlong)puVar11);
    *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(lVar6 + 0xc + (longlong)puVar11);
    *(undefined2 *)(param_1 + 0x7a8) = 0;
  }
  else {
    lVar6 = (longlong)iVar9;
    uVar12 = uVar10;
    if (3 < lVar6) {
      iVar9 = 2;
      lVar8 = (lVar6 - 4U >> 2) + 1;
      uVar12 = lVar8 * 4;
      uVar13 = uVar10;
      do {
        lVar4 = *plVar1;
        fVar16 = (float)(int)uVar10 / (float)*(int *)(param_1 + 0x750);
        fVar14 = local_80 * fVar16 + local_70;
        uVar15 = CONCAT44(local_84 * fVar16 + local_74,local_88 * fVar16 + local_78);
        *(undefined8 *)(uVar13 + 4 + lVar4) = uVar15;
        *(float *)(uVar13 + 0xc + lVar4) = fVar14;
        *(undefined8 *)(uVar13 + 0x10 + lVar4) = uVar15;
        *(float *)(uVar13 + 0x18 + lVar4) = fVar14;
        *(undefined1 *)(uVar13 + lVar4) = 1;
        lVar4 = *plVar1;
        fVar14 = (float)(iVar9 + -1) / (float)*(int *)(param_1 + 0x750);
        fVar16 = local_80 * fVar14 + local_70;
        uVar15 = CONCAT44(local_84 * fVar14 + local_74,local_88 * fVar14 + local_78);
        *(undefined8 *)(uVar13 + 0x20 + lVar4) = uVar15;
        *(float *)(uVar13 + 0x28 + lVar4) = fVar16;
        *(undefined8 *)(uVar13 + 0x2c + lVar4) = uVar15;
        *(float *)(uVar13 + 0x34 + lVar4) = fVar16;
        *(undefined1 *)(uVar13 + 0x1c + lVar4) = 1;
        lVar4 = *plVar1;
        fVar16 = (float)iVar9 / (float)*(int *)(param_1 + 0x750);
        fVar14 = local_80 * fVar16 + local_70;
        uVar15 = CONCAT44(local_84 * fVar16 + local_74,local_88 * fVar16 + local_78);
        *(undefined8 *)(uVar13 + 0x3c + lVar4) = uVar15;
        *(float *)(uVar13 + 0x44 + lVar4) = fVar14;
        *(undefined8 *)(uVar13 + 0x48 + lVar4) = uVar15;
        *(float *)(uVar13 + 0x50 + lVar4) = fVar14;
        *(undefined1 *)(uVar13 + 0x38 + lVar4) = 1;
        lVar4 = *plVar1;
        fVar16 = (float)(iVar9 + 1) / (float)*(int *)(param_1 + 0x750);
        uVar10 = (ulonglong)((int)uVar10 + 4);
        iVar9 = iVar9 + 4;
        fVar14 = local_80 * fVar16 + local_70;
        uVar15 = CONCAT44(local_84 * fVar16 + local_74,local_88 * fVar16 + local_78);
        *(undefined8 *)(uVar13 + 0x58 + lVar4) = uVar15;
        *(float *)(uVar13 + 0x60 + lVar4) = fVar14;
        *(undefined8 *)(uVar13 + 100 + lVar4) = uVar15;
        *(float *)(uVar13 + 0x6c + lVar4) = fVar14;
        *(undefined1 *)(uVar13 + 0x54 + lVar4) = 1;
        uVar13 = uVar13 + 0x70;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((longlong)uVar12 < lVar6) {
      lVar8 = uVar12 * 0x1c;
      lVar6 = lVar6 - uVar12;
      do {
        iVar9 = *(int *)(param_1 + 0x750);
        lVar4 = *plVar1;
        *(undefined1 *)(lVar8 + lVar4) = 1;
        iVar5 = (int)uVar10;
        uVar10 = (ulonglong)(iVar5 + 1);
        fVar16 = (float)iVar5 / (float)iVar9;
        fVar14 = local_80 * fVar16 + local_70;
        uVar15 = CONCAT44(local_84 * fVar16 + local_74,local_88 * fVar16 + local_78);
        *(undefined8 *)(lVar8 + 4 + lVar4) = uVar15;
        *(undefined8 *)(lVar8 + 0x10 + lVar4) = uVar15;
        *(float *)(lVar8 + 0xc + lVar4) = fVar14;
        *(float *)(lVar8 + 0x18 + lVar4) = fVar14;
        lVar8 = lVar8 + 0x1c;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    *(undefined1 *)(param_1 + 0x7a9) = 0;
  }
  return;
}



// FUNCTION 1409414e0 FUN_1409414e0 body=1094 status=ok
// SIG undefined FUN_1409414e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409414e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_238 [32];
  undefined4 *local_218;
  undefined4 local_210;
  undefined4 *local_208;
  undefined1 *local_200;
  undefined4 *local_1f8;
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  float local_1e0;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  byte local_1a8 [12];
  undefined4 local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  float local_17c;
  float local_178;
  float local_174;
  float local_14c;
  undefined1 local_118 [72];
  longlong local_d0;
  longlong local_b0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  lVar8 = param_1[0x24];
  if (((lVar8 != 0) || (lVar8 = FUN_1423407b0(), lVar8 != 0)) &&
     (iVar6 = (**(code **)(*param_1 + 0x4e8))(param_1), iVar6 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468639a0) &&
       (_Init_thread_header(&DAT_1468639a0), DAT_1468639a0 == -1)) {
      FName::FName(&DAT_146863998,"CableCollision",1);
      _Init_thread_footer(&DAT_1468639a0);
    }
    uVar10 = 0;
    local_218 = (undefined4 *)0x0;
    FUN_1422ffb20(local_118,DAT_146863998,local_1e8,0);
    uVar7 = (**(code **)(*param_1 + 0x4f8))(param_1);
    puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x4d0))(param_1);
    FUN_1426d3dd0(&local_1d0);
    local_1d0 = *puVar9;
    uStack_1cc = puVar9[1];
    uStack_1c8 = puVar9[2];
    uStack_1c4 = puVar9[3];
    local_1c0 = *(undefined8 *)(puVar9 + 4);
    uStack_1b8 = *(undefined8 *)(puVar9 + 6);
    uVar12 = uVar10;
    if (0 < (int)param_1[0xf4]) {
      do {
        lVar4 = param_1[0xf3];
        if (*(char *)(uVar10 + lVar4) != '\0') {
          _guard_xfg_dispatch_icall_nop(local_1a8,0,0x90);
          local_1f8 = &local_1d0;
          lVar1 = uVar10 + lVar4;
          local_200 = local_118;
          local_1e0 = *(float *)((longlong)param_1 + 0x774) * 0.5;
          lVar2 = uVar10 + lVar4;
          local_208 = &local_1e4;
          local_19c = 0x3f800000;
          local_218 = &DAT_1464aa810;
          local_1e4 = 2;
          local_210 = uVar7;
          cVar5 = UWorld::SweepSingleByChannel(lVar8,local_1a8,lVar2 + 0x10,lVar1 + 4);
          if (cVar5 != '\0') {
            if ((local_1a8[0] & 2) == 0) {
              *(undefined8 *)(lVar1 + 4) = local_194;
              *(undefined4 *)(lVar1 + 0xc) = local_18c;
              fVar16 = *(float *)(uVar10 + 8 + lVar4);
              fVar17 = *(float *)(uVar10 + 0xc + lVar4);
            }
            else {
              fVar16 = local_178 * local_14c + *(float *)(lVar1 + 8);
              fVar17 = local_174 * local_14c + *(float *)(lVar1 + 0xc);
              *(float *)(lVar1 + 4) = local_17c * local_14c + *(float *)(lVar1 + 4);
              *(float *)(lVar1 + 8) = fVar16;
              *(float *)(lVar1 + 0xc) = fVar17;
            }
            fVar18 = *(float *)(lVar1 + 4) - *(float *)(lVar2 + 0x10);
            fVar16 = fVar16 - *(float *)(lVar2 + 0x14);
            fVar17 = fVar17 - *(float *)(lVar2 + 0x18);
            fVar14 = fVar18 * local_17c + fVar16 * local_178 + fVar17 * local_174;
            fVar13 = local_174 * fVar14 + *(float *)(lVar2 + 0x18);
            fVar15 = local_17c * fVar14 + *(float *)(lVar2 + 0x10);
            *(float *)(lVar2 + 0x14) = local_178 * fVar14 + *(float *)(lVar2 + 0x14);
            *(float *)(lVar2 + 0x18) = fVar13;
            *(float *)(lVar2 + 0x10) = fVar15;
            fVar3 = *(float *)(param_1 + 0xec);
            if (0.0001 < fVar3) {
              *(float *)(lVar2 + 0x10) = (fVar18 - local_17c * fVar14) * fVar3 + fVar15;
              *(float *)(lVar2 + 0x14) =
                   (fVar16 - local_178 * fVar14) * fVar3 + *(float *)(lVar2 + 0x14);
              *(float *)(lVar2 + 0x18) = (fVar17 - local_174 * fVar14) * fVar3 + fVar13;
            }
          }
        }
        uVar11 = (int)uVar12 + 1;
        uVar10 = uVar10 + 0x1c;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)param_1[0xf4]);
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140941930 QuerySupportedSockets body=132 status=ok
// SIG undefined QuerySupportedSockets(void)

void UCableComponent::QuerySupportedSockets(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = DAT_1468636c0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar3 = uVar2;
  *(undefined1 *)(puVar3 + 1) = 2;
  uVar2 = DAT_1468636c8;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar3 = uVar2;
  *(undefined1 *)(puVar3 + 1) = 2;
  return;
}



// FUNCTION 1409419c0 FUN_1409419c0 body=1100 status=ok
// SIG undefined FUN_1409419c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409419c0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  int iVar23;
  DWORD DVar24;
  longlong *plVar25;
  DWORD *pDVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  longlong *plVar32;
  longlong *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 in_XMM5 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if (*(longlong *)(param_1 + 0x640) != 0) {
    plVar25 = (longlong *)operator_new(0x10);
    plVar27 = (longlong *)0x0;
    plVar32 = plVar27;
    if (plVar25 != (longlong *)0x0) {
      *plVar25 = 0;
      plVar25[1] = 0;
      plVar32 = plVar25;
    }
    iVar31 = *(int *)(param_1 + 0x750) + 1;
    iVar23 = (int)plVar32[1] + iVar31;
    *(int *)(plVar32 + 1) = iVar23;
    if (*(int *)((longlong)plVar32 + 0xc) < iVar23) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar32);
    }
    uVar21 = uRam0000000146863948;
    uVar20 = uRam0000000146863944;
    uVar19 = _DAT_146863940;
    fVar18 = fRam000000014686393c;
    fVar17 = fRam0000000146863938;
    fVar16 = fRam0000000146863934;
    fVar15 = _DAT_146863930;
    uVar14 = uRam0000000146863928;
    uVar13 = uRam0000000146863924;
    uVar12 = _DAT_146863920;
    fVar11 = fRam0000000146863918;
    fVar10 = fRam0000000146863914;
    fVar9 = _DAT_146863910;
    lVar29 = (longlong)iVar31;
    plVar25 = plVar27;
    plVar33 = plVar27;
    if (0 < iVar31) {
      do {
        lVar30 = *(longlong *)(param_1 + 0x798);
        auVar4 = *(undefined1 (*) [16])(param_1 + 0x230);
        fVar6 = auVar4._0_4_;
        fVar7 = auVar4._4_4_;
        fVar8 = auVar4._8_4_;
        fVar42 = *(float *)(param_1 + 0x210) * fVar15;
        fVar43 = *(float *)(param_1 + 0x214) * fVar16;
        fVar44 = *(float *)(param_1 + 0x218) * fVar17;
        fVar45 = *(float *)(param_1 + 0x21c) * fVar18;
        auVar38 = rcpps(in_XMM5,auVar4);
        fVar46 = (float)((uint)(*(float *)(lVar30 + 4 + (longlong)plVar25) -
                               *(float *)(param_1 + 0x220)) & uVar19);
        fVar47 = (float)((uint)(*(float *)(lVar30 + 8 + (longlong)plVar25) -
                               *(float *)(param_1 + 0x224)) & uVar20);
        fVar48 = (float)((uint)(*(float *)(lVar30 + 0xc + (longlong)plVar25) -
                               *(float *)(param_1 + 0x228)) & uVar21);
        fVar34 = fVar48 * fVar43 - fVar47 * fVar44;
        fVar35 = fVar46 * fVar44 - fVar48 * fVar42;
        fVar36 = fVar47 * fVar42 - fVar46 * fVar43;
        fVar37 = auVar38._0_4_;
        fVar39 = auVar38._4_4_;
        fVar40 = auVar38._8_4_;
        fVar41 = auVar38._12_4_;
        fVar34 = fVar34 + fVar34;
        fVar35 = fVar35 + fVar35;
        fVar36 = fVar36 + fVar36;
        fVar37 = (fVar37 + fVar37) - fVar37 * fVar37 * fVar6;
        fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar7;
        fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fVar8;
        fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * auVar4._12_4_;
        in_XMM5._0_4_ = (fVar37 + fVar37) - fVar37 * fVar37 * fVar6;
        in_XMM5._4_4_ = (fVar39 + fVar39) - fVar39 * fVar39 * fVar7;
        in_XMM5._8_4_ = (fVar40 + fVar40) - fVar40 * fVar40 * fVar8;
        in_XMM5._12_4_ = (fVar41 + fVar41) - fVar41 * fVar41 * auVar4._12_4_;
        pfVar3 = (float *)((longlong)plVar33 + *plVar32);
        *pfVar3 = ((fVar36 * fVar43 - fVar35 * fVar44) + fVar45 * fVar34 + fVar46) *
                  (float)(-(uint)((float)((uint)fVar6 & uVar12) <= fVar9) & (uint)in_XMM5._0_4_ ^
                         (uint)in_XMM5._0_4_);
        pfVar3[1] = ((fVar34 * fVar44 - fVar36 * fVar42) + fVar45 * fVar35 + fVar47) *
                    (float)(-(uint)((float)((uint)fVar7 & uVar13) <= fVar10) & (uint)in_XMM5._4_4_ ^
                           (uint)in_XMM5._4_4_);
        pfVar3[2] = ((fVar35 * fVar42 - fVar34 * fVar43) + fVar45 * fVar36 + fVar48) *
                    (float)(-(uint)((float)((uint)fVar8 & uVar14) <= fVar11) & (uint)in_XMM5._8_4_ ^
                           (uint)in_XMM5._8_4_);
        pfVar3[3] = 1.0;
        lVar29 = lVar29 + -1;
        plVar25 = (longlong *)((longlong)plVar25 + 0x1c);
        plVar33 = plVar33 + 2;
      } while (lVar29 != 0);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar22 = FUN_1415ad720(&DAT_1468e2448), cVar22 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar24 = GetCurrentThreadId(), DVar24 == DAT_1468c21c0)))) {
      uVar5 = *(undefined8 *)(param_1 + 0x640);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      FUN_140941e90(uVar5,plVar32);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      lVar29 = *(longlong *)(param_1 + 0x640);
      pDVar26 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar25 = TlsGetValue(*pDVar26);
      if (plVar25 == (longlong *)0x0) {
        plVar25 = (longlong *)operator_new(0x18);
        if (plVar25 != (longlong *)0x0) {
          *plVar25 = 0;
          plVar25[1] = 0;
          *(undefined4 *)(plVar25 + 2) = 0;
          plVar27 = plVar25;
        }
        TlsSetValue(*pDVar26,plVar27);
        plVar25 = plVar27;
      }
      plVar27 = (longlong *)plVar25[1];
      if (plVar27 == (longlong *)0x0) {
        plVar27 = (longlong *)*plVar25;
        if (plVar27 == (longlong *)0x0) {
          plVar27 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar26 + 2);
          plVar25[1] = (longlong)plVar27;
          if (plVar27 == (longlong *)0x0) {
            puVar28 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar25[1] = (longlong)puVar28;
            lVar30 = 0x1f;
            do {
              puVar2 = puVar28 + 0x20;
              *puVar28 = puVar2;
              lVar30 = lVar30 + -1;
              puVar28 = puVar2;
            } while (lVar30 != 0);
            *puVar2 = 0;
            plVar27 = (longlong *)plVar25[1];
          }
          iVar23 = 0x20;
          *(undefined4 *)(plVar25 + 2) = 0x20;
        }
        else {
          iVar23 = 0x20;
          plVar25[1] = (longlong)plVar27;
          *(undefined4 *)(plVar25 + 2) = 0x20;
          *plVar25 = 0;
        }
      }
      else {
        iVar23 = (int)plVar25[2];
      }
      plVar25[1] = *plVar27;
      *(int *)(plVar25 + 2) = iVar23 + -1;
      *plVar27 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar27 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar27 + 0xc) = 1;
      *plVar27 = (longlong)&PTR_FUN_144164cc0;
      *(undefined1 *)(plVar27 + 4) = 0;
      plVar27[5] = 0;
      plVar27[2] = lVar29;
      plVar27[3] = (longlong)plVar32;
      lVar29 = plVar27[5];
      piVar1 = (int *)(lVar29 + 0x48);
      if (lVar29 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar29;
      FUN_1409421c0(plVar27,0,0xff,1,0);
      if (lVar29 != 0) {
        LOCK();
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 140941e10 Serialize body=86 status=ok
// SIG undefined Serialize(void)

void FLandscapeVertexFactoryMobileVertexShaderParameters::Serialize
               (longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0xe);
  FUN_1419e0a40(param_2,param_1 + 0x14);
  FUN_1419e0a40(param_2,param_1 + 0x1a);
  FUN_1419e0b60(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 140941e70 FUN_140941e70 body=22 status=ok
// SIG undefined FUN_140941e70(void)

void FUN_140941e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x720) = param_2;
  *(undefined8 *)(param_1 + 0x728) = param_3;
  *(undefined8 *)(param_1 + 0x738) = param_4;
  return;
}



// FUNCTION 140941e90 FUN_140941e90 body=492 status=ok
// SIG undefined FUN_140941e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140941e90(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong local_98;
  undefined1 local_90 [16];
  undefined **local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar3 = *(longlong **)(param_1 + 0xa68);
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar3,0x10);
  }
  *(undefined8 **)(param_1 + 0xa68) = param_2;
  local_a8 = &local_68;
  lVar7 = 0;
  local_80 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
  local_78 = *param_2;
  local_b8 = *(int *)(param_2 + 1) << 4;
  local_60 = &local_80;
  local_68 = 0;
  local_58 = 1;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_b0 = 0x202;
  local_70 = local_b8;
  (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,&local_98,&DAT_146ab6e78,0x10);
  plVar3 = (longlong *)(param_1 + 0xa58);
  if (plVar3 != &local_98) {
    puVar4 = (undefined8 *)*plVar3;
    *plVar3 = local_98;
    local_98 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_90,&DAT_146ab6e78,*plVar3);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa60,local_90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90);
  return;
}



// FUNCTION 140942080 FUN_140942080 body=306 status=ok
// SIG undefined FUN_140942080(void)

void FUN_140942080(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  FUN_1404986d0(param_2,uVar3,param_1 + 8,param_4 + 0x658,0);
  FUN_1404986d0(param_2,uVar3,param_1 + 0xe,param_4 + 0x65c,0);
  FUN_1404986d0(param_2,uVar3,param_1 + 0x14,param_4 + 0x660,0);
  FUN_1404986d0(param_2,uVar3,param_1 + 0x1a,param_4 + 0x664,0);
  uVar4 = *(undefined8 *)(param_4 + 0x670);
  if (*(short *)(param_1 + 0x22) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x20);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 1409421c0 FUN_1409421c0 body=611 status=ok
// SIG undefined FUN_1409421c0(void)

void FUN_1409421c0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_140942377;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_140942377:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 140942430 FUN_140942430 body=92 status=ok
// SIG undefined FUN_140942430(void)

undefined8 FUN_140942430(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  
  switch(param_1) {
  default:
    cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
    if ((cVar1 != '\0') || (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 != '\0')) {
      return 1;
    }
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1d:
    break;
  }
  return 0;
}



// FUNCTION 1409424c0 SolveDistanceConstraint body=379 status=ok
// SIG undefined SolveDistanceConstraint(void)

void SolveDistanceConstraint(char *param_1,char *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc);
  fVar1 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar1 = (fVar1 - param_3) / fVar1;
  if (*param_1 == '\0') {
    if (*param_2 == '\0') {
      return;
    }
    fVar5 = fVar1 * fVar5;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) - fVar1 * fVar3;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) - fVar1 * fVar4;
  }
  else {
    if (*param_2 == '\0') {
      *(float *)(param_1 + 4) = fVar1 * fVar3 + *(float *)(param_1 + 4);
      *(float *)(param_1 + 8) = fVar1 * fVar4 + *(float *)(param_1 + 8);
      *(float *)(param_1 + 0xc) = fVar1 * fVar5 + *(float *)(param_1 + 0xc);
      return;
    }
    fVar2 = fVar1 * fVar3 * 0.5;
    fVar3 = fVar1 * fVar4 * 0.5;
    fVar5 = fVar1 * fVar5 * 0.5;
    *(float *)(param_1 + 4) = fVar2 + *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = fVar3 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = fVar5 + *(float *)(param_1 + 0xc);
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) - fVar2;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) - fVar3;
  }
  *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) - fVar5;
  return;
}



// FUNCTION 140942670 FUN_140942670 body=1527 status=ok
// SIG undefined FUN_140942670(void)

void FUN_140942670(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  longlong local_res8 [2];
  undefined4 local_158;
  undefined4 uStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  float local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float local_118;
  float fStack_114;
  float local_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [24];
  float local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  
  FUN_142357eb0();
  lVar7 = param_1[0x24];
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
  }
  local_130 = (float)FUN_1428cc5b0(lVar7);
  local_130 = local_130 * *(float *)(param_1 + 0xee);
  uStack_ec = 0;
  uStack_e8 = 0;
  local_f8 = param_1;
  uStack_f0 = param_2;
  fStack_e4 = local_130;
  if ((*(char *)((longlong)param_1 + 0x75d) == '\0') &&
     (*(char *)((longlong)param_1 + 0x75e) == '\0')) {
    if (((((char)param_1[0xf5] != '\0') && (9 < *(uint *)(param_1 + 0xf6))) &&
        (fVar12 = (float)FUN_14093ebb0((longlong)param_1 + 0x7b4), fVar12 * 0.1 < *DAT_1468638d0))
       && (fVar12 = (float)FUN_14093ebb0((longlong)param_1 + 0x7dc), fVar12 * 0.1 < *DAT_1468638e8))
    {
      *(undefined1 *)(param_1 + 0xf5) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xf5) = 1;
  }
  FUN_140940170(param_1,&local_128,&local_118);
  if ((((local_128 == *(float *)((longlong)param_1 + 0x804)) &&
       (fStack_124 == *(float *)(param_1 + 0x101))) &&
      ((local_120 == *(float *)((longlong)param_1 + 0x80c) &&
       ((local_118 == *(float *)(param_1 + 0x102) &&
        (fStack_114 == *(float *)((longlong)param_1 + 0x814))))))) &&
     (local_110 == *(float *)(param_1 + 0x103))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  *(ulonglong *)((longlong)param_1 + 0x804) = CONCAT44(fStack_124,local_128);
  *(float *)((longlong)param_1 + 0x80c) = local_120;
  param_1[0x102] = CONCAT44(fStack_114,local_118);
  *(float *)(param_1 + 0x103) = local_110;
  if (bVar4) {
    local_158 = (undefined4)param_1[0x44];
    uStack_154 = *(undefined4 *)((longlong)param_1 + 0x224);
    fStack_150 = *(float *)(param_1 + 0x45);
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x22c);
    local_100 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    local_140 = 0;
    *(undefined4 *)(param_1 + 0x3a) = local_158;
    *(undefined4 *)((longlong)param_1 + 0x1d4) = uStack_154;
    *(float *)(param_1 + 0x3b) = fStack_150;
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
    *(undefined1 *)(param_1 + 0xf5) = 1;
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0;
    cVar6 = '\x01';
    local_138 = local_158;
    uStack_134 = uStack_154;
    local_130 = fStack_150;
    local_68 = local_158;
    uStack_64 = uStack_154;
    fStack_60 = fStack_150;
  }
  else {
    cVar6 = (char)param_1[0xf5];
  }
  if (*(float *)((longlong)param_1 + 0x74c) == 0.0) {
    *(undefined1 *)(param_1 + 0xf5) = 0;
    cVar6 = '\0';
  }
  if (cVar6 == '\0') {
    if (*(char *)((longlong)param_1 + 0x7a9) == '\0') {
      fStack_150 = (float)param_1[0x45];
      local_130 = 0.0;
      uStack_14c = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      local_140 = 0;
      *(int *)(param_1 + 0x3a) = (int)param_1[0x44];
      *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)((longlong)param_1 + 0x224);
      *(float *)(param_1 + 0x3b) = fStack_150;
      *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
      param_1[0x3c] = 0;
      *(undefined4 *)(param_1 + 0x3d) = 0;
      uStack_f0 = fStack_150;
      FUN_140942fb0(param_1,0,0);
      FUN_1423424c0(param_1);
      *(undefined1 *)((longlong)param_1 + 0x7a9) = 1;
      return;
    }
    lVar7 = param_1[0x24];
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    cVar6 = UWorld::IsGameWorld(lVar7);
    if (cVar6 == '\0') {
      return;
    }
    (**(code **)(*param_1 + 0x358))(param_1,0);
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x7a9) = 1;
  (**(code **)(*param_1 + 0x4a8))(param_1,local_88,param_1 + 0x42);
  if (*(float *)(param_1 + 0x3d) <= local_70 && local_70 != *(float *)(param_1 + 0x3d)) {
    FUN_140942fb0(param_1,0,0);
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = (undefined4)local_f8;
    *(undefined4 *)((longlong)puVar8 + 0xc) = local_f8._4_4_;
    *(undefined4 *)(puVar8 + 2) = uStack_f0;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_ec;
    *puVar8 = &PTR_FUN_143f4d0b0;
    puVar8[3] = CONCAT44(fStack_e4,uStack_e8);
  }
  local_d8 = (code *)&LAB_14093f970;
  plVar9 = (longlong *)FUN_140596960(&local_158,0,0xff);
  lVar7 = *plVar9;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined4 *)(lVar7 + 0x50) = 0;
  if (local_a8 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop((longlong *)(lVar7 + 0x20),local_c8,0x20);
  }
  if (*(longlong *)(lVar7 + 0x40) != 0) {
    FMemory::Free();
  }
  *(longlong **)(lVar7 + 0x40) = local_a8;
  local_a8 = (longlong *)0x0;
  *(int *)(lVar7 + 0x50) = local_98;
  local_98 = 0;
  if (*(int *)(lVar7 + 0x50) == 0) {
LAB_1409429e5:
    local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar10 = *(longlong **)(lVar7 + 0x40);
    if (*(longlong **)(lVar7 + 0x40) == (longlong *)0x0) {
      plVar10 = (longlong *)(lVar7 + 0x20);
    }
    if (plVar10 == (longlong *)0x0) goto LAB_1409429e5;
    (**(code **)(*plVar10 + 8))();
  }
  *(code **)(lVar7 + 0x10) = local_d8;
  local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(lVar7 + 0x60) = 0xff;
  lVar7 = *plVar9;
  lVar5 = plVar9[2];
  lVar3 = plVar9[1];
  lVar11 = *(longlong *)(lVar7 + 0x78);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + 1;
    UNLOCK();
  }
  local_res8[0] = lVar11;
  FUN_1405ab110(lVar7,lVar3,(int)lVar5,1);
  if (local_98 != 0) {
    plVar9 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar9 = local_a8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar9 = param_1 + 0x104;
  if (plVar9 == local_res8) {
    if (lVar11 == 0) goto LAB_140942aae;
    LOCK();
    piVar1 = (int *)(lVar11 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar7 = local_res8[0];
  }
  else {
    lVar7 = *plVar9;
    *plVar9 = lVar11;
    if (lVar7 == 0) goto LAB_140942aae;
    LOCK();
    piVar1 = (int *)(lVar7 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar2 == 1) {
    FGraphEvent::Recycle(lVar7);
  }
LAB_140942aae:
  lVar7 = *plVar9;
  if (((lVar7 != 0) && (param_4 != 0)) && (*(longlong *)(param_4 + 0x18) != 0)) {
    LOCK();
    *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
    UNLOCK();
    plVar9 = (longlong *)FTickFunction::GetCompletionHandle(param_4,&local_108);
    lVar3 = *plVar9;
    iVar2 = *(int *)(lVar3 + 0x40);
    *(int *)(lVar3 + 0x40) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x44) < iVar2 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (lVar3 + 0x18,iVar2);
    }
    lVar11 = *(longlong *)(lVar3 + 0x38);
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      lVar11 = lVar3 + 0x18;
    }
    plVar9 = (longlong *)(lVar11 + (longlong)iVar2 * 8);
    if ((plVar9 != (longlong *)0x0) && (*plVar9 = lVar7, lVar7 != 0)) {
      LOCK();
      *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
      UNLOCK();
    }
    LOCK();
    piVar1 = (int *)(lVar7 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
    if (local_108 != 0) {
      LOCK();
      piVar1 = (int *)(local_108 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  FUN_1423424c0(param_1);
  return;
}



// FUNCTION 140942c70 FUN_140942c70 body=830 status=ok
// SIG undefined FUN_140942c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140942c70(longlong *param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined1 local_d0;
  char local_c8 [16];
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar11 = (**(code **)(*param_1 + 0x438))();
  if (cVar11 == '\0') {
    FUN_14237ac80(param_1,param_2,param_3,param_4);
    lVar3 = param_1[0x2f];
    if (lVar3 != 0) {
      iVar2 = *(int *)(lVar3 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar16 = iVar2 >> 0x1f & 0xffff;
        uVar12 = iVar2 + uVar16;
        lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
                 (longlong)(int)((uVar12 & 0xffff) - uVar16) * 0x18;
      }
      else {
        lVar13 = 0;
      }
      if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) {
        if (param_1[0x3e] != 0) {
          fVar17 = *(float *)(param_1 + 0x39);
          if ((char)param_1[0x3f] != '\0') {
            fVar17 = -fVar17;
          }
          fVar17 = param_2 * fVar17 + *(float *)((longlong)param_1 + 0x1fc);
          FUN_14238db80(param_1[0x3e],&local_a8);
          local_b0 = (float)local_a0;
          local_d8 = local_c8;
          local_c8[0] = '\0';
          local_b8 = local_a8;
          FUN_1409408d0(param_1[0x3e],&local_88,fVar17,&local_b8);
          if (fVar17 <= 0.0 || local_c8[0] != '\0') {
            cVar11 = (char)param_1[0x38];
            if (cVar11 == '\0') {
              if (((param_1[0x2f] != 0) && (param_1[0x3e] != 0)) &&
                 (cVar11 = UActorComponent::IsComponentTickEnabled(param_1), cVar11 != '\0')) {
                (**(code **)(*param_1 + 0x358))(param_1,0);
              }
            }
            else if (cVar11 == '\x01') {
              if (*(float *)(param_1 + 0x39) <= 0.0 && *(float *)(param_1 + 0x39) != 0.0) {
                fVar17 = (float)FUN_140940380(param_1[0x3e]);
              }
              else {
                fVar17 = 0.0;
              }
            }
            else if (cVar11 == '\x02') {
              *(bool *)(param_1 + 0x3f) = (char)param_1[0x3f] == '\0';
            }
          }
          lVar3 = param_1[0x2f];
          local_98 = *(float *)(lVar3 + 0x210);
          fStack_94 = *(float *)(lVar3 + 0x214);
          fStack_90 = *(float *)(lVar3 + 0x218);
          fStack_8c = *(float *)(lVar3 + 0x21c);
          fVar4 = *(float *)(lVar3 + 0x220);
          fVar5 = *(float *)(lVar3 + 0x224);
          fVar6 = *(float *)(lVar3 + 0x228);
          if (*(char *)((longlong)param_1 + 0x1e2) != '\0') {
            pfVar14 = (float *)FRotator::Quaternion((longlong)param_1 + 0x1e4,&local_b8);
            fVar7 = *pfVar14;
            fVar8 = pfVar14[1];
            fVar9 = pfVar14[2];
            fVar10 = pfVar14[3];
            local_98 = fVar10 * local_88 * _DAT_146863980 + fStack_7c * fVar7 +
                       fVar9 * fStack_84 * _DAT_146863970 + fVar8 * fStack_80 * _DAT_146863960;
            fStack_94 = fVar9 * local_88 * fRam0000000146863984 + fStack_7c * fVar8 +
                        fVar10 * fStack_84 * fRam0000000146863974 +
                        fVar7 * fStack_80 * fRam0000000146863964;
            fStack_90 = fVar8 * local_88 * fRam0000000146863988 + fStack_7c * fVar9 +
                        fVar7 * fStack_84 * fRam0000000146863978 +
                        fVar10 * fStack_80 * fRam0000000146863968;
            fStack_8c = fVar7 * local_88 * fRam000000014686398c + fStack_7c * fVar10 +
                        fVar8 * fStack_84 * fRam000000014686397c +
                        fVar9 * fStack_80 * fRam000000014686396c;
          }
          uVar1 = *(undefined1 *)((longlong)param_1 + 0x1e1);
          local_b0 = fStack_70 - fVar6;
          local_b8 = CONCAT44(fStack_74 - fVar5,local_78 - fVar4);
          uVar15 = FUN_14247f500();
          FUN_14247ea90(uVar15);
          local_d0 = 0;
          local_d8 = (char *)0x0;
          cVar11 = (**(code **)(*param_1 + 0x488))(param_1,&local_b8,&local_98,uVar1);
          if (cVar11 != '\0') {
            *(float *)((longlong)param_1 + 0x1fc) = fVar17;
          }
        }
      }
      else if (((lVar3 != 0) && (param_1[0x3e] != 0)) &&
              (cVar11 = UActorComponent::IsComponentTickEnabled(param_1), cVar11 != '\0')) {
        (**(code **)(*param_1 + 0x358))(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 140942fb0 FUN_140942fb0 body=333 status=ok
// SIG undefined FUN_140942fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140942fb0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  pfVar6 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar6) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_28 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar7._12_4_ = 0;
    auVar7._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar1 = (float)DAT_146863900;
    fVar2 = DAT_146863900._4_4_;
    fVar3 = DAT_146863900._8_4_;
    auVar7 = divps(auVar7,_DAT_146863900);
    fVar9 = (float)local_28 - (float)(int)auVar7._0_4_ * fVar1;
    fVar10 = (float)((ulonglong)local_28 >> 0x20) - (float)(int)auVar7._4_4_ * fVar2;
    fVar11 = *(float *)(param_1 + 0x200) - (float)(int)auVar7._8_4_ * fVar3;
    fVar9 = (float)(((uint)(fVar1 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar1 + fVar9));
    fVar10 = (float)(((uint)(fVar2 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar2 + fVar10));
    fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar3 + fVar11));
    uVar8 = ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(fRam00000001468638f8 < fVar11) ^
            (uint)fVar11;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar8);
    *(ulonglong *)pfVar6 =
         CONCAT44(((uint)(fVar10 - fVar2) ^ (uint)fVar10) & -(uint)(fRam00000001468638f4 < fVar10) ^
                  (uint)fVar10,
                  ((uint)(fVar9 - fVar1) ^ (uint)fVar9) & -(uint)(_DAT_1468638f0 < fVar9) ^
                  (uint)fVar9);
    *(uint *)(param_1 + 0x288) = uVar8;
    puVar5 = (undefined8 *)FRotator::Quaternion(pfVar6,local_18);
    uVar4 = puVar5[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar5;
    *(undefined8 *)(param_1 + 0x278) = uVar4;
  }
  local_28 = *(undefined8 *)(param_1 + 0x270);
  uStack_20 = *(undefined8 *)(param_1 + 0x278);
  FUN_14239b520(param_1,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),param_2,
                &local_28,param_3);
  return;
}



// FUNCTION 140943100 FUN_140943100 body=1344 status=ok
// SIG undefined FUN_140943100(void)

float FUN_140943100(longlong param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar9 = 0;
  lVar13 = (longlong)(*(int *)(param_1 + 0x750) + 1);
  fVar18 = 0.0;
  param_2 = param_2 * param_2;
  lVar11 = lVar9;
  if (3 < lVar13) {
    lVar12 = (lVar13 - 4U >> 2) + 1;
    lVar11 = lVar12 * 4;
    do {
      lVar10 = *(longlong *)(param_1 + 0x798);
      fVar14 = fVar18;
      if (*(char *)(lVar10 + lVar9) != '\0') {
        fVar1 = *(float *)(lVar10 + 4 + lVar9);
        fVar2 = *(float *)(lVar10 + 8 + lVar9);
        fVar15 = fVar1 - *(float *)(lVar10 + 0x10 + lVar9);
        fVar3 = *(float *)(lVar10 + 0xc + lVar9);
        fVar16 = fVar2 - *(float *)(lVar10 + 0x14 + lVar9);
        fVar17 = fVar3 - *(float *)(lVar10 + 0x18 + lVar9);
        fVar4 = *(float *)(param_1 + 0x76c);
        fVar5 = param_3[2];
        fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
        fVar6 = *(float *)(param_1 + 0x768);
        fVar7 = param_3[1];
        if (fVar14 <= fVar18) {
          fVar14 = fVar18;
        }
        fVar18 = *(float *)(param_1 + 0x764);
        fVar8 = *param_3;
        *(undefined8 *)(lVar10 + 0x10 + lVar9) = *(undefined8 *)(lVar10 + 4 + lVar9);
        *(undefined4 *)(lVar10 + 0x18 + lVar9) = *(undefined4 *)(lVar10 + 0xc + lVar9);
        *(ulonglong *)(lVar10 + 4 + lVar9) =
             CONCAT44((fVar6 + fVar7) * param_2 + fVar2 + fVar16,
                      (fVar18 + fVar8) * param_2 + fVar1 + fVar15);
        *(float *)(lVar10 + 0xc + lVar9) = (fVar4 + fVar5) * param_2 + fVar3 + fVar17;
        lVar10 = *(longlong *)(param_1 + 0x798);
      }
      fVar18 = fVar14;
      if (*(char *)(lVar9 + 0x1c + lVar10) != '\0') {
        fVar1 = *(float *)(lVar9 + 0x20 + lVar10);
        fVar2 = *(float *)(lVar9 + 0x24 + lVar10);
        fVar15 = fVar1 - *(float *)(lVar9 + 0x2c + lVar10);
        fVar3 = *(float *)(lVar9 + 0x28 + lVar10);
        fVar16 = fVar2 - *(float *)(lVar9 + 0x30 + lVar10);
        fVar17 = fVar3 - *(float *)(lVar9 + 0x34 + lVar10);
        fVar4 = *(float *)(param_1 + 0x76c);
        fVar5 = param_3[2];
        fVar18 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
        fVar6 = *(float *)(param_1 + 0x768);
        fVar7 = param_3[1];
        if (fVar18 <= fVar14) {
          fVar18 = fVar14;
        }
        fVar14 = *(float *)(param_1 + 0x764);
        fVar8 = *param_3;
        *(undefined8 *)(lVar9 + 0x2c + lVar10) = *(undefined8 *)(lVar9 + 0x20 + lVar10);
        *(undefined4 *)(lVar9 + 0x34 + lVar10) = *(undefined4 *)(lVar9 + 0x28 + lVar10);
        *(ulonglong *)(lVar9 + 0x20 + lVar10) =
             CONCAT44((fVar6 + fVar7) * param_2 + fVar2 + fVar16,
                      (fVar14 + fVar8) * param_2 + fVar1 + fVar15);
        *(float *)(lVar9 + 0x28 + lVar10) = (fVar4 + fVar5) * param_2 + fVar3 + fVar17;
        lVar10 = *(longlong *)(param_1 + 0x798);
      }
      fVar14 = fVar18;
      if (*(char *)(lVar9 + 0x38 + lVar10) != '\0') {
        fVar1 = *(float *)(lVar9 + 0x3c + lVar10);
        fVar2 = *(float *)(lVar9 + 0x40 + lVar10);
        fVar15 = fVar1 - *(float *)(lVar9 + 0x48 + lVar10);
        fVar3 = *(float *)(lVar9 + 0x44 + lVar10);
        fVar16 = fVar2 - *(float *)(lVar9 + 0x4c + lVar10);
        fVar17 = fVar3 - *(float *)(lVar9 + 0x50 + lVar10);
        fVar4 = *(float *)(param_1 + 0x76c);
        fVar5 = param_3[2];
        fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
        fVar6 = *(float *)(param_1 + 0x768);
        fVar7 = param_3[1];
        if (fVar14 <= fVar18) {
          fVar14 = fVar18;
        }
        fVar18 = *(float *)(param_1 + 0x764);
        fVar8 = *param_3;
        *(undefined8 *)(lVar9 + 0x48 + lVar10) = *(undefined8 *)(lVar9 + 0x3c + lVar10);
        *(undefined4 *)(lVar9 + 0x50 + lVar10) = *(undefined4 *)(lVar9 + 0x44 + lVar10);
        *(ulonglong *)(lVar9 + 0x3c + lVar10) =
             CONCAT44((fVar6 + fVar7) * param_2 + fVar2 + fVar16,
                      (fVar18 + fVar8) * param_2 + fVar1 + fVar15);
        *(float *)(lVar9 + 0x44 + lVar10) = (fVar4 + fVar5) * param_2 + fVar3 + fVar17;
        lVar10 = *(longlong *)(param_1 + 0x798);
      }
      fVar18 = fVar14;
      if (*(char *)(lVar9 + 0x54 + lVar10) != '\0') {
        fVar1 = *(float *)(lVar9 + 0x58 + lVar10);
        fVar2 = *(float *)(lVar9 + 0x5c + lVar10);
        fVar15 = fVar1 - *(float *)(lVar9 + 100 + lVar10);
        fVar3 = *(float *)(lVar9 + 0x60 + lVar10);
        fVar16 = fVar2 - *(float *)(lVar9 + 0x68 + lVar10);
        fVar17 = fVar3 - *(float *)(lVar9 + 0x6c + lVar10);
        fVar4 = *(float *)(param_1 + 0x76c);
        fVar5 = param_3[2];
        fVar18 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
        fVar6 = *(float *)(param_1 + 0x768);
        fVar7 = param_3[1];
        if (fVar18 <= fVar14) {
          fVar18 = fVar14;
        }
        fVar14 = *(float *)(param_1 + 0x764);
        fVar8 = *param_3;
        *(undefined8 *)(lVar9 + 100 + lVar10) = *(undefined8 *)(lVar9 + 0x58 + lVar10);
        *(undefined4 *)(lVar9 + 0x6c + lVar10) = *(undefined4 *)(lVar9 + 0x60 + lVar10);
        *(ulonglong *)(lVar9 + 0x58 + lVar10) =
             CONCAT44((fVar6 + fVar7) * param_2 + fVar2 + fVar16,
                      (fVar14 + fVar8) * param_2 + fVar1 + fVar15);
        *(float *)(lVar9 + 0x60 + lVar10) = (fVar4 + fVar5) * param_2 + fVar3 + fVar17;
      }
      lVar9 = lVar9 + 0x70;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (lVar11 < lVar13) {
    lVar9 = lVar11 * 0x1c;
    lVar13 = lVar13 - lVar11;
    fVar14 = fVar18;
    do {
      lVar11 = *(longlong *)(param_1 + 0x798);
      fVar18 = fVar14;
      if (*(char *)(lVar9 + lVar11) != '\0') {
        fVar1 = *(float *)(lVar9 + 4 + lVar11);
        fVar2 = *(float *)(lVar9 + 8 + lVar11);
        fVar15 = fVar1 - *(float *)(lVar9 + 0x10 + lVar11);
        fVar3 = *(float *)(lVar9 + 0xc + lVar11);
        fVar16 = fVar2 - *(float *)(lVar9 + 0x14 + lVar11);
        fVar17 = fVar3 - *(float *)(lVar9 + 0x18 + lVar11);
        fVar4 = *(float *)(param_1 + 0x76c);
        fVar5 = param_3[2];
        fVar18 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
        fVar6 = *(float *)(param_1 + 0x764);
        fVar7 = *param_3;
        if (fVar18 <= fVar14) {
          fVar18 = fVar14;
        }
        fVar14 = *(float *)(param_1 + 0x768);
        fVar8 = param_3[1];
        *(undefined8 *)(lVar9 + 0x10 + lVar11) = *(undefined8 *)(lVar9 + 4 + lVar11);
        *(undefined4 *)(lVar9 + 0x18 + lVar11) = *(undefined4 *)(lVar9 + 0xc + lVar11);
        *(ulonglong *)(lVar9 + 4 + lVar11) =
             CONCAT44((fVar14 + fVar8) * param_2 + fVar2 + fVar16,
                      (fVar6 + fVar7) * param_2 + fVar1 + fVar15);
        *(float *)(lVar9 + 0xc + lVar11) = (fVar4 + fVar5) * param_2 + fVar3 + fVar17;
      }
      lVar9 = lVar9 + 0x1c;
      lVar13 = lVar13 + -1;
      fVar14 = fVar18;
    } while (lVar13 != 0);
  }
  return fVar18;
}



// FUNCTION 140943640 FUN_140943640 body=162 status=ok
// SIG undefined FUN_140943640(void)

longlong FUN_140943640(void)

{
  if (DAT_1468639f8 == 0) {
    FUN_14171ccd0(L"/Script/CableComponent",L"CableActor",&DAT_1468639f8,FUN_140447710,0x460,
                  0x10000000,0,L"Engine",&LAB_140943aa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468639f8;
}



// FUNCTION 1409436f0 FUN_1409436f0 body=47 status=ok
// SIG undefined FUN_1409436f0(void)

longlong FUN_1409436f0(void)

{
  if (DAT_146863a48 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146863a48,&PTR_s__Script_CableComponent_144165f30);
  }
  return DAT_146863a48;
}



// FUNCTION 140943740 FUN_140943740 body=162 status=ok
// SIG undefined FUN_140943740(void)

longlong FUN_140943740(void)

{
  if (DAT_146863a40 == 0) {
    FUN_14171ccd0(L"/Script/CableComponent",L"CableComponent",&DAT_146863a40,FUN_140943bb0,0x830,
                  0x10000000,0,L"Engine",&LAB_140943ac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429bed90,&LAB_140447700,0);
  }
  return DAT_146863a40;
}



// FUNCTION 1409437f0 FUN_1409437f0 body=47 status=ok
// SIG undefined FUN_1409437f0(void)

longlong FUN_1409437f0(void)

{
  if (DAT_146863a38 == 0) {
    FUN_141786440(&DAT_146863a38,&PTR_FUN_1441656f0);
  }
  return DAT_146863a38;
}



// FUNCTION 140943820 FUN_140943820 body=47 status=ok
// SIG undefined FUN_140943820(void)

longlong FUN_140943820(void)

{
  if (DAT_146863a00 == 0) {
    FUN_141786a30(&DAT_146863a00,&PTR_FUN_1462884f0);
  }
  return DAT_146863a00;
}



// FUNCTION 140943850 FUN_140943850 body=47 status=ok
// SIG undefined FUN_140943850(void)

longlong FUN_140943850(void)

{
  if (DAT_146863a08 == 0) {
    FUN_141786a30(&DAT_146863a08,&PTR_FUN_146288570);
  }
  return DAT_146863a08;
}



// FUNCTION 140943880 FUN_140943880 body=47 status=ok
// SIG undefined FUN_140943880(void)

longlong FUN_140943880(void)

{
  if (DAT_146863a10 == 0) {
    FUN_141786a30(&DAT_146863a10,&PTR_FUN_1462885f0);
  }
  return DAT_146863a10;
}



// FUNCTION 1409438b0 FUN_1409438b0 body=47 status=ok
// SIG undefined FUN_1409438b0(void)

longlong FUN_1409438b0(void)

{
  if (DAT_146863a18 == 0) {
    FUN_141786a30(&DAT_146863a18,&PTR_FUN_1462886a0);
  }
  return DAT_146863a18;
}



// FUNCTION 1409438e0 FUN_1409438e0 body=47 status=ok
// SIG undefined FUN_1409438e0(void)

longlong FUN_1409438e0(void)

{
  if (DAT_146863a20 == 0) {
    FUN_141786a30(&DAT_146863a20,&PTR_FUN_1462887e0);
  }
  return DAT_146863a20;
}



// FUNCTION 140943910 FUN_140943910 body=47 status=ok
// SIG undefined FUN_140943910(void)

longlong FUN_140943910(void)

{
  if (DAT_146863a28 == 0) {
    FUN_141786a30(&DAT_146863a28,&PTR_FUN_1462888a0);
  }
  return DAT_146863a28;
}



// FUNCTION 140943940 FUN_140943940 body=47 status=ok
// SIG undefined FUN_140943940(void)

longlong FUN_140943940(void)

{
  if (DAT_146863a30 == 0) {
    FUN_141786a30(&DAT_146863a30,&PTR_FUN_146288990);
  }
  return DAT_146863a30;
}



// FUNCTION 140943980 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_146863a68 == 0) {
    FUN_14171ccd0(L"/Script/CableComponent",L"FollowCableMovementComponent",&DAT_146863a68,
                  StaticRegisterNativesUAnimMontage,0x200,0x10000000,0,L"Engine",&LAB_140943ae0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEnvQueryTest::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146863a68;
}



// FUNCTION 140943a30 FUN_140943a30 body=47 status=ok
// SIG undefined FUN_140943a30(void)

longlong FUN_140943a30(void)

{
  if (DAT_146863a60 == 0) {
    FUN_141786440(&DAT_146863a60,&PTR_GetPrivateStaticClass_144165c40);
  }
  return DAT_146863a60;
}



// FUNCTION 140943a60 FUN_140943a60 body=47 status=ok
// SIG undefined FUN_140943a60(void)

longlong FUN_140943a60(void)

{
  if (DAT_146863a58 == 0) {
    FUN_141786a30(&DAT_146863a58,&PTR_FUN_146289000);
  }
  return DAT_146863a58;
}



// FUNCTION 140943b00 FUN_140943b00 body=85 status=ok
// SIG undefined FUN_140943b00(void)

void FUN_140943b00(void)

{
  if (DAT_1468639a8 == 0) {
    if (DAT_146863a48 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146863a48,&PTR_s__Script_CableComponent_144165f30);
    }
    DAT_1468639a8 = GetStaticEnum(FUN_140943c40,DAT_146863a48,L"EFollowCableMovementMode");
  }
  return;
}



// FUNCTION 140943ba0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UEnvQueryTest::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 140943bb0 FUN_140943bb0 body=34 status=ok
// SIG undefined FUN_140943bb0(void)

void FUN_140943bb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140943740();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAttachedActor_144165ec0,7);
  return;
}



// FUNCTION 140943be0 StaticRegisterNativesUAnimMontage body=34 status=ok
// SIG undefined StaticRegisterNativesUAnimMontage(void)

void UAnimMontage::StaticRegisterNativesUAnimMontage(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnableMovement_144165f88,1);
  return;
}



// FUNCTION 140943c10 FUN_140943c10 body=47 status=ok
// SIG undefined FUN_140943c10(void)

longlong FUN_140943c10(void)

{
  if (DAT_1468639f0 == 0) {
    FUN_141786440(&DAT_1468639f0,&PTR_FUN_144165250);
  }
  return DAT_1468639f0;
}



// FUNCTION 140943c40 FUN_140943c40 body=47 status=ok
// SIG undefined FUN_140943c40(void)

longlong FUN_140943c40(void)

{
  if (DAT_146863a50 == 0) {
    FUN_1417866a0(&DAT_146863a50,&PTR_FUN_146289290);
  }
  return DAT_146863a50;
}



// FUNCTION 140943c70 execLockAIResources body=194 status=ok
// SIG undefined execLockAIResources(void)

void UAnimInstance::execLockAIResources(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14093fc20(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 140943d40 FUN_140943d40 body=44 status=ok
// SIG undefined FUN_140943d40(void)

void FUN_140943d40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14093fda0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140943d70 FUN_140943d70 body=44 status=ok
// SIG undefined FUN_140943d70(void)

void FUN_140943d70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14093fdb0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140943da0 FUN_140943da0 body=163 status=ok
// SIG undefined FUN_140943da0(void)

void FUN_140943da0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14093fdd0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140943e50 FUN_140943e50 body=45 status=ok
// SIG undefined FUN_140943e50(void)

void FUN_140943e50(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140940380();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140943e80 FUN_140943e80 body=363 status=ok
// SIG undefined FUN_140943e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140943e80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_84);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_88[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_68 = local_80;
  local_98 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_98 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_60 = local_78;
  puVar2 = (undefined8 *)FUN_1409408d0(param_1,local_58,local_84,&local_68);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 140943ff0 FUN_140943ff0 body=267 status=ok
// SIG undefined FUN_140943ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140943ff0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_68 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_60 = local_78;
  puVar2 = (undefined8 *)FUN_140940ce0(param_1,local_58,local_88[0],&local_68);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 140944100 FUN_140944100 body=254 status=ok
// SIG undefined FUN_140944100(void)

void FUN_140944100(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140941e70(param_1,local_18[0],local_res20,local_res10);
  return;
}



// FUNCTION 140944200 FUN_140944200 body=3308 status=ok
// SIG undefined FUN_140944200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140944200(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [16];
  unkuint10 Var16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [14];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [14];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  longlong *plVar35;
  int iVar36;
  undefined8 uVar37;
  longlong lVar38;
  int iVar39;
  undefined8 *puVar40;
  longlong lVar41;
  int iVar42;
  undefined8 *puVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ushort uVar113;
  ushort uVar114;
  ushort uVar115;
  undefined1 auVar65 [16];
  undefined1 auVar76 [16];
  undefined1 auVar87 [16];
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  float fVar112;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  longlong local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong *local_190;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  ulonglong local_e8;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar66 [16];
  undefined1 auVar77 [16];
  undefined1 auVar88 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar64 [16];
  undefined1 auVar75 [16];
  undefined1 auVar86 [16];
  undefined1 auVar56 [16];
  undefined1 auVar67 [16];
  undefined1 auVar78 [16];
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar41 = 0;
  local_1c8 = 0;
  local_190 = param_2;
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_144166a10;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(param_1 + 0x75);
  FUN_1426f5920(param_1 + 0x92);
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  puVar40 = param_1 + 0x1ac;
  *(undefined2 *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb7) = 4;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xb6] = &PTR_FUN_1441669d0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc1) = *(undefined4 *)(param_1[0x26] + 8);
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0x126] = 0;
  *(undefined1 *)(param_1 + 0x127) = 1;
  *(undefined1 *)((longlong)param_1 + 0x93a) = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0xc0] = &PTR_FUN_144165fb0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1a9) = 0;
  param_1[0x1ab] = 0;
  param_1[0x1aa] = param_1 + 0x18b;
  local_1a8 = 2;
  *(undefined1 *)((longlong)param_1 + 0x939) = 1;
  lVar38 = 2;
  if (puVar40 <= param_1 + 0x1ad) {
    for (; lVar38 != 0; lVar38 = lVar38 + -1) {
      *(undefined4 *)puVar40 = 0xffffffff;
      puVar40 = (undefined8 *)((longlong)puVar40 + 4);
    }
  }
  FUN_14236ce60(param_2,param_1 + 0x1ae,*(undefined4 *)(param_1[0x26] + 8));
  iVar47 = (int)param_2[0xe4];
  local_1cc = 0xffffffff;
  iVar46 = iVar47 * 3;
  local_1c0 = 0;
  local_1b4 = 0;
  local_1b8 = iVar46;
  if (0 < iVar46) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(&local_1c0,0);
  }
  iVar45 = *(int *)(param_1 + 0xbf);
  *(int *)(param_1 + 0xbf) = iVar45 + iVar46;
  if (*(int *)((longlong)param_1 + 0x5fc) < iVar45 + iVar46) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xbe);
  }
  plVar35 = local_190;
  local_198 = (longlong)iVar47;
  if (0 < iVar47) {
    local_1a0 = 0;
    local_1d8 = 0x7f000000;
    local_1d4 = 0x7f000000;
    local_1d0 = 0x7f000000;
    lVar38 = lVar41;
    do {
      lVar4 = plVar35[0xe3];
      fVar98 = *(float *)(lVar41 + 0xc + lVar4) - *(float *)(lVar41 + lVar4);
      fVar100 = *(float *)(lVar41 + 0x10 + lVar4) - *(float *)(lVar41 + 4 + lVar4);
      fVar102 = *(float *)(lVar41 + 0x14 + lVar4) - *(float *)(lVar41 + 8 + lVar4);
      local_1b0 = *(float *)(lVar41 + 0x1c + lVar4) - *(float *)(lVar41 + 4 + lVar4);
      fVar95 = *(float *)(lVar41 + 0x18 + lVar4) - *(float *)(lVar41 + lVar4);
      fVar94 = *(float *)(lVar41 + 0x20 + lVar4) - *(float *)(lVar41 + 8 + lVar4);
      fVar89 = fVar100 * fVar100 + fVar98 * fVar98 + fVar102 * fVar102;
      if (fVar89 == 1.0) {
        uVar104 = SUB41(fVar100,0);
        uVar105 = (undefined1)((uint)fVar100 >> 8);
        uVar106 = (undefined1)((uint)fVar100 >> 0x10);
        uVar107 = (undefined1)((uint)fVar100 >> 0x18);
        uVar108 = 0;
        uVar109 = 0;
        uVar110 = 0;
        uVar111 = 0;
        fVar89 = fVar98;
        fVar112 = fVar102;
      }
      else if (1e-08 <= fVar89) {
        auVar90._8_8_ = 0;
        auVar90._0_8_ = CONCAT44(0,fVar89);
        auVar93._8_8_ = 0;
        auVar93._0_8_ = CONCAT44(0,fVar89);
        auVar93 = rsqrtss(auVar90,auVar93);
        fVar96 = auVar93._0_4_;
        fVar96 = fVar96 + fVar96 * (0.5 - fVar89 * 0.5 * fVar96 * fVar96);
        fVar96 = fVar96 + fVar96 * (0.5 - fVar89 * 0.5 * fVar96 * fVar96);
        fVar112 = fVar102 * fVar96;
        uVar108 = auVar93[4];
        uVar109 = auVar93[5];
        uVar110 = auVar93[6];
        uVar111 = auVar93[7];
        fVar89 = fVar96 * fVar98;
        fVar96 = fVar96 * fVar100;
        uVar104 = SUB41(fVar96,0);
        uVar105 = (undefined1)((uint)fVar96 >> 8);
        uVar106 = (undefined1)((uint)fVar96 >> 0x10);
        uVar107 = (undefined1)((uint)fVar96 >> 0x18);
      }
      else {
        uVar104 = SUB41(DAT_1468b5d94,0);
        uVar105 = (undefined1)((uint)DAT_1468b5d94 >> 8);
        uVar106 = (undefined1)((uint)DAT_1468b5d94 >> 0x10);
        uVar107 = (undefined1)((uint)DAT_1468b5d94 >> 0x18);
        uVar108 = 0;
        uVar109 = 0;
        uVar110 = 0;
        uVar111 = 0;
        fVar89 = DAT_1468b5d90;
        fVar112 = DAT_1468b5d98;
      }
      fVar97 = local_1b0 * fVar102 - fVar94 * fVar100;
      fVar96 = fVar95 * fVar100 - local_1b0 * fVar98;
      fVar102 = fVar94 * fVar98 - fVar95 * fVar102;
      fVar100 = fVar102 * fVar102 + fVar97 * fVar97 + fVar96 * fVar96;
      fVar94 = fVar102;
      fVar95 = fVar96;
      fVar98 = fVar97;
      if ((fVar100 != 1.0) &&
         (fVar94 = DAT_1468b5d94, fVar95 = DAT_1468b5d98, fVar98 = DAT_1468b5d90, 1e-08 <= fVar100))
      {
        auVar91._8_8_ = 0;
        auVar91._0_8_ = CONCAT44(0,fVar100);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = CONCAT44(0,fVar100);
        auVar93 = rsqrtss(auVar91,auVar6);
        fVar98 = auVar93._0_4_;
        fVar98 = fVar98 + fVar98 * (0.5 - fVar100 * 0.5 * fVar98 * fVar98);
        fVar98 = fVar98 + fVar98 * (0.5 - fVar100 * 0.5 * fVar98 * fVar98);
        fVar94 = fVar102 * fVar98;
        fVar95 = fVar96 * fVar98;
        fVar98 = fVar97 * fVar98;
      }
      fVar99 = (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar104))) * fVar95 -
               fVar112 * fVar94;
      fVar101 = fVar112 * fVar98 - fVar89 * fVar95;
      fVar103 = fVar89 * fVar94 -
                (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar104))) * fVar98;
      fVar97 = fVar101 * fVar101 + fVar99 * fVar99 + fVar103 * fVar103;
      fVar100 = fVar99;
      fVar102 = fVar101;
      fVar96 = fVar103;
      if ((fVar97 != 1.0) &&
         (fVar100 = DAT_1468b5d90, fVar102 = DAT_1468b5d94, fVar96 = DAT_1468b5d98, 1e-08 <= fVar97)
         ) {
        auVar92._8_8_ = 0;
        auVar92._0_8_ = CONCAT44(0,fVar97);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = CONCAT44(0,fVar97);
        auVar93 = rsqrtss(auVar92,auVar5);
        fVar96 = auVar93._0_4_;
        fVar96 = fVar96 + fVar96 * (0.5 - fVar97 * 0.5 * fVar96 * fVar96);
        fVar96 = fVar96 + fVar96 * (0.5 - fVar97 * 0.5 * fVar96 * fVar96);
        fVar100 = fVar96 * fVar99;
        fVar102 = fVar96 * fVar101;
        fVar96 = fVar96 * fVar103;
      }
      uStack_f4 = local_1cc;
      iVar47 = (int)ROUND(fVar89 * 127.0 + fVar89 * 127.0 + 0.5) >> 1;
      if (iVar47 < -0x80) {
        iVar46 = -0x80;
      }
      else {
        iVar46 = 0x7f;
        if (iVar47 < 0x7f) {
          iVar46 = iVar47;
        }
      }
      fVar89 = (float)CONCAT13(uVar107,CONCAT12(uVar106,CONCAT11(uVar105,uVar104))) * 127.0;
      uStack_fc = (undefined1)iVar46;
      iVar46 = (int)ROUND(fVar89 + fVar89 + 0.5) >> 1;
      if (iVar46 < -0x80) {
        iVar45 = -0x80;
      }
      else {
        iVar45 = 0x7f;
        if (iVar46 < 0x7f) {
          iVar45 = iVar46;
        }
      }
      uStack_fb = (undefined1)iVar45;
      iVar45 = (int)ROUND(fVar112 * 127.0 + fVar112 * 127.0 + 0.5) >> 1;
      if (iVar45 < -0x80) {
        iVar44 = -0x80;
      }
      else {
        iVar44 = 0x7f;
        if (iVar45 < 0x7f) {
          iVar44 = iVar45;
        }
      }
      uStack_fa = (undefined1)iVar44;
      uStack_f9 = 0x7f;
      iVar44 = (int)ROUND(fVar98 * 127.0 + fVar98 * 127.0 + 0.5) >> 1;
      if (iVar44 < -0x80) {
        iVar42 = -0x80;
      }
      else {
        iVar42 = 0x7f;
        if (iVar44 < 0x7f) {
          iVar42 = iVar44;
        }
      }
      local_f8 = (undefined1)iVar42;
      iVar42 = (int)ROUND(fVar94 * 127.0 + fVar94 * 127.0 + 0.5) >> 1;
      if (iVar42 < -0x80) {
        iVar39 = -0x80;
      }
      else {
        iVar39 = 0x7f;
        if (iVar42 < 0x7f) {
          iVar39 = iVar42;
        }
      }
      uStack_f7 = (undefined1)iVar39;
      iVar39 = (int)ROUND(fVar95 * 127.0 + fVar95 * 127.0 + 0.5) >> 1;
      if (iVar39 < -0x80) {
        iVar36 = -0x80;
      }
      else {
        iVar36 = 0x7f;
        if (iVar39 < 0x7f) {
          iVar36 = iVar39;
        }
      }
      uStack_f6 = (undefined1)iVar36;
      if (iVar44 < -0x80) {
        local_1d8 = CONCAT31(local_1d8._1_3_,0x80);
      }
      else {
        uVar104 = 0x7f;
        if (iVar44 < 0x7f) {
          uVar104 = (char)iVar44;
        }
        local_1d8 = CONCAT31(local_1d8._1_3_,uVar104);
      }
      uVar3 = local_1d8;
      if (iVar42 < -0x80) {
        local_1d8._0_2_ = CONCAT11(0x80,(undefined1)local_1d8);
      }
      else {
        uVar104 = 0x7f;
        if (iVar42 < 0x7f) {
          uVar104 = (char)iVar42;
        }
        local_1d8._0_2_ = CONCAT11(uVar104,(undefined1)local_1d8);
      }
      local_1d8._3_1_ = SUB41(uVar3,3);
      if (iVar39 < -0x80) {
        local_1d8._0_3_ = CONCAT12(0x80,(undefined2)local_1d8);
      }
      else {
        uVar104 = 0x7f;
        if (iVar39 < 0x7f) {
          uVar104 = (char)iVar39;
        }
        local_1d8._0_3_ = CONCAT12(uVar104,(undefined2)local_1d8);
      }
      iVar44 = (int)ROUND(fVar100 * 127.0 + fVar100 * 127.0 + 0.5) >> 1;
      if (iVar44 < -0x80) {
        local_1d4 = CONCAT31(local_1d4._1_3_,0x80);
      }
      else {
        uVar104 = 0x7f;
        if (iVar44 < 0x7f) {
          uVar104 = (char)iVar44;
        }
        local_1d4 = CONCAT31(local_1d4._1_3_,uVar104);
      }
      uVar3 = local_1d4;
      iVar44 = (int)ROUND(fVar102 * 127.0 + fVar102 * 127.0 + 0.5) >> 1;
      if (iVar44 < -0x80) {
        local_1d4._0_2_ = CONCAT11(0x80,(undefined1)local_1d4);
      }
      else {
        uVar104 = 0x7f;
        if (iVar44 < 0x7f) {
          uVar104 = (char)iVar44;
        }
        local_1d4._0_2_ = CONCAT11(uVar104,(undefined1)local_1d4);
      }
      iVar44 = (int)ROUND(fVar96 * 127.0 + fVar96 * 127.0 + 0.5) >> 1;
      local_1d4._3_1_ = SUB41(uVar3,3);
      if (iVar44 < -0x80) {
        local_1d4._0_3_ = CONCAT12(0x80,(undefined2)local_1d4);
      }
      else {
        uVar104 = 0x7f;
        if (iVar44 < 0x7f) {
          uVar104 = (char)iVar44;
        }
        local_1d4._0_3_ = CONCAT12(uVar104,(undefined2)local_1d4);
      }
      if (iVar47 < -0x80) {
        local_1d0 = CONCAT31(local_1d0._1_3_,0x80);
      }
      else {
        uVar104 = 0x7f;
        if (iVar47 < 0x7f) {
          uVar104 = (char)iVar47;
        }
        local_1d0 = CONCAT31(local_1d0._1_3_,uVar104);
      }
      uVar3 = local_1d0;
      if (iVar46 < -0x80) {
        local_1d0._0_2_ = CONCAT11(0x80,(undefined1)local_1d0);
      }
      else {
        uVar104 = 0x7f;
        if (iVar46 < 0x7f) {
          uVar104 = (char)iVar46;
        }
        local_1d0._0_2_ = CONCAT11(uVar104,(undefined1)local_1d0);
      }
      local_1d0._3_1_ = SUB41(uVar3,3);
      if (iVar45 < -0x80) {
        local_1d0._0_3_ = CONCAT12(0x80,(undefined2)local_1d0);
      }
      else {
        uVar104 = 0x7f;
        if (iVar45 < 0x7f) {
          uVar104 = (char)iVar45;
        }
        local_1d0._0_3_ = CONCAT12(uVar104,(undefined2)local_1d0);
      }
      uVar9 = CONCAT13(uVar111,CONCAT12(uVar110,CONCAT11(uVar109,uVar108))) ^
              CONCAT13(uVar111,CONCAT12(uVar110,CONCAT11(uVar109,uVar108)));
      uVar104 = (undefined1)uVar9;
      uVar105 = (undefined1)(uVar9 >> 8);
      uVar106 = (undefined1)(uVar9 >> 0x10);
      uVar107 = (undefined1)(uVar9 >> 0x18);
      auVar64._0_15_ = ZEXT415(local_1d8);
      auVar64[0xf] = uVar107;
      auVar63._14_2_ = auVar64._14_2_;
      auVar63._0_13_ = ZEXT413(local_1d8);
      auVar63[0xd] = uVar106;
      auVar62._13_3_ = auVar63._13_3_;
      auVar62._0_13_ = ZEXT413(local_1d8);
      auVar61._12_4_ = auVar62._12_4_;
      auVar61._4_7_ = 0;
      auVar61._0_4_ = local_1d8;
      auVar61[0xb] = uVar105;
      auVar60._11_5_ = auVar61._11_5_;
      auVar60._4_7_ = 0;
      auVar60._0_4_ = local_1d8;
      auVar59._10_6_ = auVar60._10_6_;
      auVar59._4_5_ = 0;
      auVar59._0_4_ = local_1d8;
      auVar59[9] = uVar104;
      auVar58._9_7_ = auVar59._9_7_;
      auVar58._4_5_ = 0;
      auVar58._0_4_ = local_1d8;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = auVar58._8_8_;
      Var16 = CONCAT91(SUB169(auVar28 << 0x40,7),local_1d8._3_1_);
      auVar27._10_6_ = 0;
      auVar27._0_10_ = Var16;
      auVar57._5_11_ = SUB1611(auVar27 << 0x30,5);
      auVar57[4] = (char)((uint3)(undefined3)local_1d8 >> 0x10);
      auVar57._0_4_ = local_1d8;
      auVar15._12_4_ = 0;
      auVar15._0_12_ = auVar57._4_12_;
      auVar14._1_13_ = SUB1613(auVar15 << 0x20,3);
      auVar14[0] = (char)((uint3)(undefined3)local_1d8 >> 8);
      uVar113 = CONCAT11(0,(byte)(undefined3)local_1d8);
      auVar56._2_14_ = auVar14;
      uVar8 = (undefined2)(uVar9 >> 0x10);
      auVar66._0_12_ = auVar56._0_12_;
      auVar66._12_2_ = (short)Var16;
      auVar66._14_2_ = uVar8;
      auVar65._12_4_ = auVar66._12_4_;
      auVar65._0_10_ = auVar56._0_10_;
      uVar7 = (undefined2)uVar9;
      auVar65._10_2_ = uVar7;
      uVar29 = CONCAT62(auVar65._10_6_,auVar57._4_2_);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar29;
      auVar17._2_10_ = SUB1610(auVar18 << 0x40,6);
      auVar17._0_2_ = auVar14._0_2_;
      auVar49._0_4_ = CONCAT22(0,uVar113);
      auVar49._4_12_ = auVar17;
      local_17c = 0;
      auVar48._0_4_ = -(uint)(0x7f < auVar49._0_4_);
      auVar48._4_4_ = -(uint)(0x7f < auVar17._0_4_);
      auVar48._8_4_ = -(uint)(0x7f < (int)uVar29);
      auVar48._12_4_ = -(uint)(0x7f < auVar65._12_4_);
      local_16c = 0;
      local_15c = 0;
      auVar49 = auVar48 & _DAT_144101760 | auVar49;
      auVar75._0_15_ = ZEXT415(local_1d4);
      auVar75[0xf] = uVar107;
      auVar74._14_2_ = auVar75._14_2_;
      auVar74._0_13_ = ZEXT413(local_1d4);
      auVar74[0xd] = uVar106;
      auVar73._13_3_ = auVar74._13_3_;
      auVar73._0_13_ = ZEXT413(local_1d4);
      auVar72._12_4_ = auVar73._12_4_;
      auVar72._4_7_ = 0;
      auVar72._0_4_ = local_1d4;
      auVar72[0xb] = uVar105;
      auVar71._11_5_ = auVar72._11_5_;
      auVar71._4_7_ = 0;
      auVar71._0_4_ = local_1d4;
      auVar70._10_6_ = auVar71._10_6_;
      auVar70._4_5_ = 0;
      auVar70._0_4_ = local_1d4;
      auVar70[9] = uVar104;
      auVar69._9_7_ = auVar70._9_7_;
      auVar69._4_5_ = 0;
      auVar69._0_4_ = local_1d4;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = auVar69._8_8_;
      Var16 = CONCAT91(SUB169(auVar31 << 0x40,7),local_1d4._3_1_);
      auVar30._10_6_ = 0;
      auVar30._0_10_ = Var16;
      auVar68._5_11_ = SUB1611(auVar30 << 0x30,5);
      auVar68[4] = (char)((uint3)(undefined3)local_1d4 >> 0x10);
      auVar68._0_4_ = local_1d4;
      auVar20._12_4_ = 0;
      auVar20._0_12_ = auVar68._4_12_;
      auVar19._1_13_ = SUB1613(auVar20 << 0x20,3);
      auVar19[0] = (char)((uint3)(undefined3)local_1d4 >> 8);
      uVar114 = CONCAT11(0,(byte)(undefined3)local_1d4);
      auVar67._2_14_ = auVar19;
      auVar77._0_12_ = auVar67._0_12_;
      auVar77._12_2_ = (short)Var16;
      auVar77._14_2_ = uVar8;
      auVar76._12_4_ = auVar77._12_4_;
      auVar76._0_10_ = auVar67._0_10_;
      auVar76._10_2_ = uVar7;
      uVar29 = CONCAT62(auVar76._10_6_,auVar68._4_2_);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar29;
      auVar21._2_10_ = SUB1610(auVar22 << 0x40,6);
      auVar21._0_2_ = auVar19._0_2_;
      auVar51._0_4_ = CONCAT22(0,uVar114);
      auVar51._4_12_ = auVar21;
      local_168 = (float)auVar49._0_4_ * 0.007874016;
      local_164 = (float)auVar49._4_4_ * 0.007874016;
      local_160 = (float)auVar49._8_4_ * 0.007874016;
      auVar50._0_4_ = -(uint)(0x7f < auVar51._0_4_);
      auVar50._4_4_ = -(uint)(0x7f < auVar21._0_4_);
      auVar50._8_4_ = -(uint)(0x7f < (int)uVar29);
      auVar50._12_4_ = -(uint)(0x7f < auVar76._12_4_);
      auVar51 = auVar50 & _DAT_144101760 | auVar51;
      auVar86._0_15_ = ZEXT415(local_1d0);
      auVar86[0xf] = uVar107;
      auVar85._14_2_ = auVar86._14_2_;
      auVar85._0_13_ = ZEXT413(local_1d0);
      auVar85[0xd] = uVar106;
      auVar84._13_3_ = auVar85._13_3_;
      auVar84._0_13_ = ZEXT413(local_1d0);
      auVar83._12_4_ = auVar84._12_4_;
      auVar83._4_7_ = 0;
      auVar83._0_4_ = local_1d0;
      auVar83[0xb] = uVar105;
      auVar82._11_5_ = auVar83._11_5_;
      auVar82._4_7_ = 0;
      auVar82._0_4_ = local_1d0;
      auVar81._10_6_ = auVar82._10_6_;
      auVar81._4_5_ = 0;
      auVar81._0_4_ = local_1d0;
      auVar81[9] = uVar104;
      auVar80._9_7_ = auVar81._9_7_;
      auVar80._4_5_ = 0;
      auVar80._0_4_ = local_1d0;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = auVar80._8_8_;
      Var16 = CONCAT91(SUB169(auVar33 << 0x40,7),local_1d0._3_1_);
      auVar32._10_6_ = 0;
      auVar32._0_10_ = Var16;
      auVar79._5_11_ = SUB1611(auVar32 << 0x30,5);
      auVar79[4] = (char)((uint3)(undefined3)local_1d0 >> 0x10);
      auVar79._0_4_ = local_1d0;
      auVar24._12_4_ = 0;
      auVar24._0_12_ = auVar79._4_12_;
      auVar23._1_13_ = SUB1613(auVar24 << 0x20,3);
      auVar23[0] = (char)((uint3)(undefined3)local_1d0 >> 8);
      uVar115 = CONCAT11(0,(byte)(undefined3)local_1d0);
      auVar78._2_14_ = auVar23;
      local_178 = (float)auVar51._0_4_ * 0.007874016;
      local_174 = (float)auVar51._4_4_ * 0.007874016;
      local_170 = (float)auVar51._8_4_ * 0.007874016;
      auVar88._0_12_ = auVar78._0_12_;
      auVar88._12_2_ = (short)Var16;
      auVar88._14_2_ = uVar8;
      auVar87._12_4_ = auVar88._12_4_;
      auVar87._0_10_ = auVar78._0_10_;
      auVar87._10_2_ = uVar7;
      uVar29 = CONCAT62(auVar87._10_6_,auVar79._4_2_);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar29;
      auVar25._2_10_ = SUB1610(auVar26 << 0x40,6);
      auVar25._0_2_ = auVar23._0_2_;
      auVar53._0_4_ = CONCAT22(0,uVar115);
      auVar53._4_12_ = auVar25;
      auVar52._0_4_ = -(uint)(0x7f < auVar53._0_4_);
      auVar52._4_4_ = -(uint)(0x7f < auVar25._0_4_);
      auVar52._8_4_ = -(uint)(0x7f < (int)uVar29);
      auVar52._12_4_ = -(uint)(0x7f < auVar87._12_4_);
      auVar53 = auVar52 & _DAT_144101760 | auVar53;
      local_188 = (float)auVar53._0_4_ * 0.007874016;
      local_184 = (float)auVar53._4_4_ * 0.007874016;
      local_180 = (float)auVar53._8_4_ * 0.007874016;
      local_158 = 0;
      uStack_150 = 0x3f80000000000000;
      fVar89 = (float)FMatrix::Determinant(&local_188);
      if (0.0 <= fVar89) {
        fVar89 = 1.0;
      }
      else {
        fVar89 = -1.0;
      }
      uVar37 = *(undefined8 *)(lVar41 + lVar4);
      iVar47 = (int)local_1a8;
      uVar12 = CONCAT17(uStack_f9,
                        CONCAT16(uStack_fa,CONCAT15(uStack_fb,CONCAT14(uStack_fc,uStack_100))));
      uStack_f5 = 0x7f;
      if (fVar89 < 0.0) {
        uStack_f5 = 0x81;
      }
      uVar13 = CONCAT44(uStack_f4,
                        CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))));
      uVar34 = CONCAT44(uStack_140._4_4_,*(undefined4 *)(lVar41 + 8 + lVar4));
      *(undefined8 *)(lVar38 + local_1c0) = uVar37;
      ((undefined8 *)(lVar38 + local_1c0))[1] = uVar34;
      puVar40 = (undefined8 *)(lVar38 + 0x10 + local_1c0);
      *puVar40 = local_138;
      puVar40[1] = uStack_130;
      puVar40 = (undefined8 *)(lVar38 + 0x20 + local_1c0);
      *puVar40 = local_128;
      puVar40[1] = uStack_120;
      puVar40 = (undefined8 *)(lVar38 + 0x30 + local_1c0);
      *puVar40 = local_118;
      puVar40[1] = uStack_110;
      puVar40 = (undefined8 *)(lVar38 + 0x40 + local_1c0);
      *puVar40 = local_108;
      puVar40[1] = uVar12;
      *(undefined8 *)(lVar38 + 0x50 + local_1c0) = uVar13;
      *(undefined4 *)(lVar38 + 0x58 + local_1c0) = local_1cc;
      *(int *)(local_1a0 + param_1[0xbe]) = iVar47 + -2;
      uVar2 = *(undefined8 *)(lVar41 + 0xc + lVar4);
      local_148._4_4_ = (undefined4)((ulonglong)uVar37 >> 0x20);
      auVar10._4_8_ = uVar34;
      auVar10._0_4_ = local_148._4_4_;
      auVar54._0_8_ = auVar10._0_8_ << 0x20;
      auVar54._8_4_ = *(undefined4 *)(lVar41 + 0x14 + lVar4);
      auVar54._12_4_ = uStack_140._4_4_;
      puVar40 = (undefined8 *)(lVar38 + 0x5c + local_1c0);
      *puVar40 = uVar2;
      puVar40[1] = auVar54._8_8_;
      puVar40 = (undefined8 *)(lVar38 + 0x6c + local_1c0);
      *puVar40 = local_138;
      puVar40[1] = uStack_130;
      puVar40 = (undefined8 *)(lVar38 + 0x7c + local_1c0);
      *puVar40 = local_128;
      puVar40[1] = uStack_120;
      puVar40 = (undefined8 *)(lVar38 + 0x8c + local_1c0);
      *puVar40 = local_118;
      puVar40[1] = uStack_110;
      puVar40 = (undefined8 *)(lVar38 + 0x9c + local_1c0);
      *puVar40 = local_108;
      puVar40[1] = uVar12;
      *(undefined8 *)(lVar38 + 0xac + local_1c0) = uVar13;
      *(undefined4 *)(lVar38 + 0xb4 + local_1c0) = local_1cc;
      *(int *)(local_1a0 + 4 + param_1[0xbe]) = iVar47 + -1;
      uVar3 = *(undefined4 *)(lVar41 + 0x20 + lVar4);
      lVar1 = lVar41 + 0x18;
      lVar41 = lVar41 + 0x24;
      uStack_140 = CONCAT44(uStack_140._4_4_,uVar3);
      local_148._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      auVar11._4_8_ = auVar54._8_8_;
      auVar11._0_4_ = local_148._4_4_;
      auVar55._0_8_ = auVar11._0_8_ << 0x20;
      auVar55._8_4_ = uVar3;
      auVar55._12_4_ = uStack_140._4_4_;
      puVar40 = (undefined8 *)(lVar38 + 0xb8 + local_1c0);
      *puVar40 = *(undefined8 *)(lVar1 + lVar4);
      puVar40[1] = auVar55._8_8_;
      puVar40 = (undefined8 *)(lVar38 + 200 + local_1c0);
      *puVar40 = local_138;
      puVar40[1] = uStack_130;
      puVar40 = (undefined8 *)(lVar38 + 0xd8 + local_1c0);
      *puVar40 = local_128;
      puVar40[1] = uStack_120;
      puVar40 = (undefined8 *)(lVar38 + 0xe8 + local_1c0);
      *puVar40 = local_118;
      puVar40[1] = uStack_110;
      puVar40 = (undefined8 *)(lVar38 + 0xf8 + local_1c0);
      *puVar40 = local_108;
      puVar40[1] = uVar12;
      *(undefined8 *)(lVar38 + 0x108 + local_1c0) = uVar13;
      *(undefined4 *)(lVar38 + 0x110 + local_1c0) = local_1cc;
      lVar38 = lVar38 + 0x114;
      *(int *)(local_1a0 + 8 + param_1[0xbe]) = iVar47;
      local_1a8 = (ulonglong)(iVar47 + 3);
      local_1a0 = local_1a0 + 0xc;
      local_198 = local_198 + -1;
      local_148 = uVar2;
    } while (local_198 != 0);
    local_198 = 0;
    param_2 = local_190;
  }
  local_1e8 = 0;
  FUN_1428208f0(param_1 + 0x75,param_1 + 0xc0,&local_1c0,1);
  FUN_141edf270(param_1 + 0x92);
  FUN_141edf270(param_1 + 0x75);
  puVar40 = (undefined8 *)param_1[0xb3];
  if ((undefined8 *)param_1[0xb3] == (undefined8 *)0x0) {
    puVar40 = param_1 + 0x9d;
  }
  puVar43 = puVar40 + (longlong)*(int *)(param_1 + 0xb4) * 0xb;
  for (; puVar40 != puVar43; puVar40 = puVar40 + 0xb) {
                    /* WARNING: Read-only address (ram,0x000144101760) is written */
    FUN_141edf270(puVar40);
  }
                    /* WARNING: Read-only address (ram,0x000144101760) is written */
  FUN_141edf270(param_1 + 0xb6);
  FUN_141edf270(param_1 + 0xc0);
  lVar38 = (**(code **)(*param_2 + 0x560))(param_2,0);
  param_1[0x74] = lVar38;
  if (lVar38 == 0) {
    uVar37 = UMaterial::GetDefaultMaterial(0);
    param_1[0x74] = uVar37;
  }
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140944ef0 FUN_140944ef0 body=93 status=ok
// SIG undefined FUN_140944ef0(void)

undefined8 * FUN_140944ef0(undefined8 *param_1)

{
  FUN_14235ed30();
  *param_1 = &PTR__scalar_deleting_destructor__144166020;
  param_1[5] = &PTR_LAB_144166948;
  param_1[0x5a] = &PTR_LAB_144166978;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  FUN_142717130(param_1,DAT_146aefc70);
  return param_1;
}



// FUNCTION 140944f50 FUN_140944f50 body=98 status=ok
// SIG undefined FUN_140944f50(void)

void FUN_140944f50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  iVar3 = *(int *)(param_1 + 0xb8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      FColorVertexBuffer::~FColorVertexBuffer(lVar2);
      lVar2 = lVar2 + 0x58;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0xb0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140944fd0 FUN_140944fd0 body=370 status=ok
// SIG undefined FUN_140944fd0(void)

undefined8 * FUN_140944fd0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_144166a10;
  (**(code **)(param_1[0x92] + 0x30))();
  (**(code **)(param_1[0x75] + 0x30))(param_1 + 0x75);
  plVar1 = (longlong *)param_1[0xb3];
  if ((longlong *)param_1[0xb3] == (longlong *)0x0) {
    plVar1 = param_1 + 0x9d;
  }
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0xb4) * 0xb;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 0xb) {
    (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  plVar1 = param_1 + 0xb6;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  plVar2 = param_1 + 0xc0;
  (**(code **)(*plVar2 + 0x30))(plVar2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1ab);
  if (param_1[0x1a0] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x18a);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x189);
  FUN_141edd2d0(plVar2);
  if (param_1[0xbe] != 0) {
    FMemory::Free();
  }
  *plVar1 = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xbd);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xbc);
  FUN_141edd2d0(plVar1);
  FUN_140944f50(param_1 + 0x9d);
  FPositionVertexBuffer::~FPositionVertexBuffer(param_1 + 0x92);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(param_1 + 0x75);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd80);
  }
  return param_1;
}



// FUNCTION 140945150 FUN_140945150 body=98 status=ok
// SIG undefined FUN_140945150(void)

undefined8 * FUN_140945150(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1409451c0 FUN_1409451c0 body=109 status=ok
// SIG undefined FUN_1409451c0(void)

longlong FUN_1409451c0(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x758);
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x770);
  }
  return param_1;
}



// FUNCTION 140945230 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCableComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  FUN_14080d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 140945280 FUN_140945280 body=139 status=ok
// SIG undefined FUN_140945280(void)

void FUN_140945280(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[0xe4];
    if (*(int *)((longlong)param_1 + 0x724) < iVar2 + iVar1) {
      TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(param_1 + 0xe3);
      iVar2 = (int)param_1[0xe4];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[0xe3] + (longlong)iVar2 * 0x24),(void *)*param_2,
               (longlong)iVar1 * 0x24);
    *(int *)(param_1 + 0xe4) = (int)param_1[0xe4] + iVar1;
  }
  FUN_1423424e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140945304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return;
}



// FUNCTION 140945310 FUN_140945310 body=1018 status=ok
// SIG undefined FUN_140945310(void)

undefined8 * FUN_140945310(longlong param_1,undefined8 *param_2,float *param_3)

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
  bool bVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
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
  float fVar26;
  
  lVar13 = (longlong)*(int *)(param_1 + 0x720);
  bVar11 = false;
  fVar23 = DAT_1468b5d98;
  fVar16 = DAT_1468b5d94;
  fVar18 = DAT_1468b5d90;
  fVar24 = DAT_1468b5d90;
  fVar25 = DAT_1468b5d94;
  fVar26 = DAT_1468b5d98;
  if (0 < lVar13) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    pfVar12 = (float *)(*(longlong *)(param_1 + 0x718) + 0x14);
    fVar5 = param_3[8];
    fVar6 = param_3[9];
    fVar7 = param_3[10];
    fVar8 = param_3[4];
    fVar9 = param_3[5];
    fVar10 = param_3[6];
    do {
      fVar20 = pfVar12[-5] * fVar5;
      fVar21 = pfVar12[-4] * fVar6;
      fVar22 = pfVar12[-3] * fVar7;
      fVar15 = fVar22 * fVar2 - fVar21 * fVar3;
      fVar17 = fVar20 * fVar3 - fVar22 * fVar1;
      fVar19 = fVar21 * fVar1 - fVar20 * fVar2;
      fVar15 = fVar15 + fVar15;
      fVar17 = fVar17 + fVar17;
      fVar19 = fVar19 + fVar19;
      fVar14 = (fVar19 * fVar2 - fVar17 * fVar3) + fVar4 * fVar15 + fVar20 + fVar8;
      fVar20 = (fVar15 * fVar3 - fVar19 * fVar1) + fVar4 * fVar17 + fVar21 + fVar9;
      fVar15 = (fVar17 * fVar1 - fVar15 * fVar2) + fVar4 * fVar19 + fVar22 + fVar10;
      if (bVar11) {
        if (fVar14 < fVar24) {
          fVar24 = fVar14;
        }
        if (fVar20 < fVar25) {
          fVar25 = fVar20;
        }
        if (fVar15 < fVar26) {
          fVar26 = fVar15;
        }
        if (fVar18 < fVar14) {
          fVar18 = fVar14;
        }
        if (fVar16 < fVar20) {
          fVar16 = fVar20;
        }
        fVar20 = fVar16;
        fVar14 = fVar18;
        if (fVar23 < fVar15) {
          fVar23 = fVar15;
        }
      }
      else {
        bVar11 = true;
        fVar23 = fVar15;
        fVar24 = fVar14;
        fVar25 = fVar20;
        fVar26 = fVar15;
      }
      fVar15 = pfVar12[-2] * fVar5;
      fVar21 = pfVar12[-1] * fVar6;
      fVar22 = *pfVar12 * fVar7;
      fVar16 = fVar22 * fVar2 - fVar21 * fVar3;
      fVar18 = fVar15 * fVar3 - fVar22 * fVar1;
      fVar19 = fVar21 * fVar1 - fVar15 * fVar2;
      fVar16 = fVar16 + fVar16;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      fVar17 = (fVar19 * fVar2 - fVar18 * fVar3) + fVar16 * fVar4 + fVar15 + fVar8;
      fVar15 = (fVar16 * fVar3 - fVar19 * fVar1) + fVar18 * fVar4 + fVar21 + fVar9;
      fVar16 = (fVar18 * fVar1 - fVar16 * fVar2) + fVar19 * fVar4 + fVar22 + fVar10;
      if (bVar11) {
        if (fVar17 < fVar24) {
          fVar24 = fVar17;
        }
        if (fVar15 < fVar25) {
          fVar25 = fVar15;
        }
        if (fVar16 < fVar26) {
          fVar26 = fVar16;
        }
        if (fVar14 < fVar17) {
          fVar14 = fVar17;
        }
        if (fVar20 < fVar15) {
          fVar20 = fVar15;
        }
        fVar15 = fVar20;
        fVar17 = fVar14;
        if (fVar23 < fVar16) {
          fVar23 = fVar16;
        }
      }
      else {
        bVar11 = true;
        fVar23 = fVar16;
        fVar24 = fVar17;
        fVar25 = fVar15;
        fVar26 = fVar16;
      }
      fVar16 = pfVar12[1] * fVar5;
      fVar21 = pfVar12[2] * fVar6;
      fVar22 = pfVar12[3] * fVar7;
      fVar20 = fVar22 * fVar2 - fVar21 * fVar3;
      fVar14 = fVar16 * fVar3 - fVar22 * fVar1;
      fVar19 = fVar21 * fVar1 - fVar16 * fVar2;
      fVar20 = fVar20 + fVar20;
      fVar14 = fVar14 + fVar14;
      fVar19 = fVar19 + fVar19;
      fVar18 = (fVar19 * fVar2 - fVar14 * fVar3) + fVar20 * fVar4 + fVar16 + fVar8;
      fVar16 = (fVar20 * fVar3 - fVar19 * fVar1) + fVar14 * fVar4 + fVar21 + fVar9;
      fVar20 = (fVar14 * fVar1 - fVar20 * fVar2) + fVar19 * fVar4 + fVar22 + fVar10;
      if (bVar11) {
        if (fVar18 < fVar24) {
          fVar24 = fVar18;
        }
        if (fVar16 < fVar25) {
          fVar25 = fVar16;
        }
        if (fVar20 < fVar26) {
          fVar26 = fVar20;
        }
        if (fVar17 < fVar18) {
          fVar17 = fVar18;
        }
        if (fVar15 < fVar16) {
          fVar15 = fVar16;
        }
        fVar16 = fVar15;
        fVar18 = fVar17;
        if (fVar23 < fVar20) {
          fVar23 = fVar20;
        }
      }
      else {
        bVar11 = true;
        fVar23 = fVar20;
        fVar24 = fVar18;
        fVar25 = fVar16;
        fVar26 = fVar20;
      }
      pfVar12 = pfVar12 + 9;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44((fVar16 - fVar25) * 0.5,(fVar18 - fVar24) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (fVar23 - fVar26) * 0.5;
  *param_2 = CONCAT44((fVar16 + fVar25) * 0.5,(fVar18 + fVar24) * 0.5);
  *(float *)(param_2 + 1) = (fVar23 + fVar26) * 0.5;
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 140945720 FUN_140945720 body=62 status=ok
// SIG undefined FUN_140945720(void)

void FUN_140945720(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x724)) {
    TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(param_1 + 0xe3,0);
  }
  FUN_1423424e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140945757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return;
}



// FUNCTION 140945760 FUN_140945760 body=57 status=ok
// SIG undefined FUN_140945760(void)

undefined8 FUN_140945760(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (0 < *(int *)(param_1 + 0x720)) {
    lVar1 = operator_new(0xd80);
    if (lVar1 != 0) {
      uVar2 = FUN_140944200(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1409457a0 FUN_1409457a0 body=1674 status=ok
// SIG undefined FUN_1409457a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409457a0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined4 uVar27;
  double dVar28;
  undefined8 *local_2b8;
  undefined8 local_2b0;
  undefined8 *local_2a8;
  undefined4 local_2a0;
  int iStack_29c;
  undefined8 local_298;
  longlong local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  uint local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [464];
  
  puVar16 = (undefined8 *)operator_new(0x158);
  puVar23 = (undefined8 *)0x0;
  puVar17 = puVar23;
  if (puVar16 != (undefined8 *)0x0) {
    plVar7 = *(longlong **)(DAT_146b17150 + 0x3a8);
    if (plVar7 != (longlong *)0x0) {
      puVar17 = (undefined8 *)
                (**(code **)(*plVar7 + 0x2a8))(plVar7,(*(uint *)(param_1 + 3) & 0x300) != 0,0);
    }
    local_2b0 = 0x3e;
    FUN_14257dfd0(puVar16);
    puVar16[0x27] = puVar17;
    *puVar16 = &PTR__scalar_deleting_destructor__1440fad20;
    puVar16[0x2a] = local_2b0;
    puVar16[0x28] = 0x3f00000000000000;
    puVar16[0x29] = 0x3f8000003f800000;
    puVar17 = puVar16;
  }
  iVar14 = (int)param_5[0x18];
  *(int *)(param_5 + 0x18) = iVar14 + 1;
  if (*(int *)((longlong)param_5 + 0xc4) < iVar14 + 1) {
    FUN_140822430(param_5 + 0x17,iVar14);
  }
  *(undefined8 **)(param_5[0x17] + (longlong)iVar14 * 8) = puVar17;
  uVar18 = (**(code **)(*(longlong *)param_1[0x74] + 0x2a8))
                     ((longlong *)param_1[0x74],(*(uint *)(param_1 + 3) & 0x300) != 0,0);
  puVar17 = puVar23;
  local_298 = uVar18;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      if ((param_4 >> ((uint)puVar17 & 0x1f) & 1) != 0) {
        iVar14 = FUN_1408bed80(param_5,1);
        lVar24 = (ulonglong)(uint)(iVar14 % 0x59) * 0xb8 +
                 *(longlong *)(*param_5 + (longlong)(iVar14 / 0x59) * 8);
        lVar25 = *(longlong *)(lVar24 + 0x78);
        if (*(longlong *)(lVar24 + 0x78) == 0) {
          lVar25 = lVar24;
        }
        *(longlong **)(lVar25 + 0x10) = param_1 + 0xb6;
        *(uint *)(lVar24 + 0x8c) = *(uint *)(lVar24 + 0x8c) & 0xfffffeff;
        *(longlong **)(lVar24 + 0xa0) = param_1 + 0xc0;
        *(undefined8 *)(lVar24 + 0xa8) = uVar18;
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x37c);
        lVar22 = param_1[0x6f];
        uVar15 = (**(code **)(*param_1 + 0x18))(param_1);
        dVar4 = (double)param_1[0x71];
        local_278 = _DAT_1464aa7d0;
        uStack_270 = _DAT_1464aa7d8;
        dVar28 = 0.0;
        local_268 = _DAT_1464aa7e0;
        uStack_260 = _DAT_1464aa7e8;
        local_258 = _DAT_1464aa7f0;
        uStack_250 = _DAT_1464aa7f8;
        local_228 = (uint)((char)uVar15 != '\0');
        lVar20 = (longlong)dVar4;
        local_21c = 0;
        local_248 = _DAT_1464aa800;
        uStack_240 = uRam00000001464aa808;
        dVar5 = (double)param_1[0x72];
        local_238 = 0x3f80000000000000;
        uStack_230 = 0x3f8000003f800000;
        dVar10 = dVar4;
        if ((lVar20 != -0x8000000000000000) && (dVar28 = (double)lVar20, dVar28 != dVar4)) {
          auVar8._8_4_ = SUB84(dVar4,0);
          auVar8._0_8_ = dVar4;
          auVar8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          uVar15 = movmskpd(uVar15,auVar8);
          uVar15 = uVar15 & 1;
          dVar10 = (double)(longlong)(lVar20 - (ulonglong)uVar15);
        }
        puVar16 = (undefined8 *)(longlong)dVar10;
        dVar4 = (dVar4 - (double)(longlong)puVar16) * 2147483647.0;
        lVar20 = (longlong)dVar4;
        if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar4)) {
          auVar12._8_4_ = SUB84(dVar4,0);
          auVar12._0_8_ = dVar4;
          auVar12._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          uVar15 = movmskpd(uVar15,auVar12);
          dVar4 = (double)(longlong)(lVar20 - (ulonglong)(uVar15 & 1));
        }
        puVar21 = (undefined8 *)(longlong)dVar4;
        puVar19 = puVar23;
        if ((-1 < (longlong)puVar16) &&
           (puVar19 = (undefined8 *)0x7fffffff, (longlong)puVar16 < 0x7fffffff)) {
          puVar19 = puVar16;
        }
        local_218 = SUB84(puVar19,0);
        puVar16 = puVar23;
        if ((-1 < (longlong)puVar21) &&
           (puVar16 = (undefined8 *)0x7fffffff, (longlong)puVar21 < 0x7fffffff)) {
          puVar16 = puVar21;
        }
        lVar20 = (longlong)dVar5;
        local_214 = (uint)puVar16;
        uVar27 = 0;
        uVar15 = local_214;
        dVar4 = dVar5;
        if ((lVar20 != -0x8000000000000000) &&
           (uVar27 = SUB84((double)lVar20,0), (double)lVar20 != dVar5)) {
          auVar9._8_4_ = SUB84(dVar5,0);
          auVar9._0_8_ = dVar5;
          auVar9._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          uVar15 = movmskpd(local_214,auVar9);
          uVar15 = uVar15 & 1;
          dVar4 = (double)(longlong)(lVar20 - (ulonglong)uVar15);
        }
        puVar16 = (undefined8 *)(longlong)dVar4;
        dVar4 = (dVar5 - (double)(longlong)puVar16) * 2147483647.0;
        lVar20 = (longlong)dVar4;
        if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar4)) {
          auVar11._8_4_ = SUB84(dVar4,0);
          auVar11._0_8_ = dVar4;
          auVar11._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          uVar15 = movmskpd(uVar15,auVar11);
          dVar4 = (double)(longlong)(lVar20 - (ulonglong)(uVar15 & 1));
        }
        puVar21 = (undefined8 *)(longlong)dVar4;
        puVar19 = puVar23;
        if ((-1 < (longlong)puVar16) &&
           (puVar19 = (undefined8 *)0x7fffffff, (longlong)puVar16 < 0x7fffffff)) {
          puVar19 = puVar16;
        }
        local_210 = SUB84(puVar19,0);
        puVar16 = puVar23;
        if ((-1 < (longlong)puVar21) &&
           (puVar16 = (undefined8 *)0x7fffffff, (longlong)puVar21 < 0x7fffffff)) {
          puVar16 = puVar21;
        }
        local_288 = param_1[0x18];
        local_20c = SUB84(puVar16,0);
        local_280 = (undefined4)param_1[0x19];
        local_224 = (int)lVar22;
        local_220 = uVar3;
        uVar18 = FUN_1408c7250(local_208,param_1 + 0x10,uVar27,dVar28,(longlong)param_1 + 0xdc,1,0,0
                               ,0,0,0,(byte)(*(uint *)((longlong)param_1 + 0x1c) >> 0x14) & 1,1,
                               0x3f800000,&local_278);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_2a8,uVar18,&DAT_146b09668,2);
        puVar16 = local_2a8;
        local_2b8 = local_2a8;
        if (local_2a8 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_2a8 + 1) = *(int *)(local_2a8 + 1) + 1;
          UNLOCK();
          if (local_2a8 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_2a8 + 1);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              if ((*(char *)(local_2a8 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar13 = FOutputDevice::CanBeUsedOnAnyThread(), cVar13 == '\0')))) {
                LOCK();
                bVar26 = *(int *)((longlong)puVar16 + 0xc) == 0;
                if (bVar26) {
                  *(int *)((longlong)puVar16 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar26) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar16);
                }
              }
              else {
                (**(code **)*puVar16)(puVar16,1);
              }
            }
          }
        }
        puVar16 = local_2b8;
        ppuVar2 = (undefined8 **)(lVar25 + 8);
        if (ppuVar2 == &local_2b8) {
          if (local_2b8 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_2b8 + 1);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              if ((*(char *)(local_2b8 + 2) != '\0') ||
                 ((DAT_146ab62f5 == '\0' &&
                  (cVar13 = FOutputDevice::CanBeUsedOnAnyThread(), cVar13 != '\0'))))
              goto LAB_140945d19;
              LOCK();
              bVar26 = *(int *)((longlong)puVar16 + 0xc) == 0;
              if (bVar26) {
                *(int *)((longlong)puVar16 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar26) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_2b8);
              }
            }
          }
        }
        else {
          puVar16 = *ppuVar2;
          *ppuVar2 = local_2b8;
          if (puVar16 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar16 + 1);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              if ((*(char *)(puVar16 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar13 = FOutputDevice::CanBeUsedOnAnyThread(), cVar13 == '\0')))) {
                LOCK();
                bVar26 = *(int *)((longlong)puVar16 + 0xc) == 0;
                if (bVar26) {
                  *(int *)((longlong)puVar16 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar26) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar16);
                }
              }
              else {
LAB_140945d19:
                (**(code **)*puVar16)(puVar16,1);
              }
            }
          }
        }
        iVar14 = *(int *)(lVar25 + 0x38);
        local_2a0 = 0;
        iVar6 = (int)param_1[0xbf];
        iStack_29c = iVar6 / 3 + (iVar6 >> 0x1f) +
                     (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f);
        *(int *)(lVar25 + 0x38) = iVar14 + 1;
        if (*(int *)(lVar25 + 0x3c) < iVar14 + 1) {
          TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
          ::ResizeGrow(lVar25 + 0x28,iVar14);
        }
        lVar22 = *(longlong *)(lVar25 + 0x30);
        if (*(longlong *)(lVar25 + 0x30) == 0) {
          lVar22 = lVar25 + 0x28;
        }
        *(ulonglong *)(lVar22 + (longlong)iVar14 * 8) = CONCAT44(iStack_29c,local_2a0);
        *(undefined4 *)(lVar25 + 0x48) = 0;
        *(int *)(lVar25 + 0x4c) = *(int *)((longlong)param_1 + 0x4e4) + -1;
        uVar15 = (*(byte *)(param_1 + 3) & 1) << 3 | *(uint *)(lVar24 + 0x8c) & 0xffc00ff7;
        *(uint *)(lVar24 + 0x8c) = uVar15;
        *(uint *)(lVar24 + 0x8c) =
             (*(uint *)((longlong)param_1 + 0x1c) >> 0x11 ^ uVar15) & 0x200 ^ uVar15;
        FUN_142747330(param_5,puVar17,lVar24);
        uVar18 = local_298;
      }
      uVar15 = (uint)puVar17 + 1;
      puVar17 = (undefined8 *)(ulonglong)uVar15;
    } while ((int)uVar15 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 140945e50 FUN_140945e50 body=207 status=ok
// SIG undefined FUN_140945e50(void)

undefined8 * FUN_140945e50(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10;
  bVar1 = FUN_142730880(param_1,param_3);
  uVar2 = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar1 << 0xb | 0x200;
  *(uint *)((longlong)param_2 + 4) = uVar2;
  uVar2 = ((*(uint *)(param_1 + 0x18) >> 0x15 & 0xff) << 0xd ^ uVar2) & 0x2000 ^ uVar2;
  *(uint *)((longlong)param_2 + 4) = uVar2;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    uVar3 = 0x100000;
  }
  uVar3 = uVar3 | uVar2 & 0xffefffff;
  *(uint *)((longlong)param_2 + 4) = uVar3;
  *(uint *)((longlong)param_2 + 4) =
       ((*(uint *)(param_1 + 0x20) >> 1 & 0xff) << 0xc ^ uVar3) & 0x1000 ^ uVar3;
  FUN_1425a2630(param_1 + 0xd70,param_2);
  return param_2;
}


