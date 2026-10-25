// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143115831 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG LONG _guard_xfg_dispatch_icall_nop(HIMC param_1, DWORD param_2, LPVOID lpBuf, DWORD dwBufLen)

LONG __stdcall _guard_xfg_dispatch_icall_nop(HIMC param_1,DWORD param_2,LPVOID lpBuf,DWORD dwBufLen)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ImmGetCompositionStringW(param_1,param_2,lpBuf,dwBufLen);
  return LVar1;
}



// FUNCTION 143115837 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG BOOL _guard_xfg_dispatch_icall_nop(HIMC param_1, DWORD dwAction, DWORD dwIndex, DWORD dwValue)

BOOL __stdcall
_guard_xfg_dispatch_icall_nop(HIMC param_1,DWORD dwAction,DWORD dwIndex,DWORD dwValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmNotifyIME(param_1,dwAction,dwIndex,dwValue);
  return BVar1;
}



// FUNCTION 14311583d _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG BOOL _guard_xfg_dispatch_icall_nop(HIMC param_1, LPCOMPOSITIONFORM lpCompForm)

BOOL __stdcall _guard_xfg_dispatch_icall_nop(HIMC param_1,LPCOMPOSITIONFORM lpCompForm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014311583d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmSetCompositionWindow(param_1,lpCompForm);
  return BVar1;
}



// FUNCTION 143115843 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG BOOL _guard_xfg_dispatch_icall_nop(HIMC param_1, LPCANDIDATEFORM lpCandidate)

BOOL __stdcall _guard_xfg_dispatch_icall_nop(HIMC param_1,LPCANDIDATEFORM lpCandidate)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmSetCandidateWindow(param_1,lpCandidate);
  return BVar1;
}



// FUNCTION 143115849 DelayLoad_?free@bifrost@@YAXPEAX@Z body=12 status=ok
// SIG undefined DelayLoad_?free@bifrost@@YAXPEAX@Z(void)

void DelayLoad__free_bifrost__YAXPEAX_Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115855 free body=6 status=ok
// SIG void free(void * param_1)

void __cdecl bifrost::free(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143115855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}



// FUNCTION 14311585b FUN_14311585b body=121 status=ok
// SIG undefined FUN_14311585b(void)

void FUN_14311585b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461ddfa8);
                    /* WARNING: Could not recover jumptable at 0x0001431158d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1431158d4 DelayLoad_?malloc@bifrost@@YAPEAX_K@Z body=12 status=ok
// SIG undefined DelayLoad_?malloc@bifrost@@YAPEAX_K@Z(void)

void DelayLoad__malloc_bifrost__YAPEAX_K_Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 1431158e0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void * _guard_xfg_dispatch_icall_nop(__uint64 param_1)

void * __cdecl bifrost::_guard_xfg_dispatch_icall_nop(__uint64 param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431158e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(param_1);
  return pvVar1;
}



// FUNCTION 1431158e6 DelayLoad_?constitute@users@bifrost@@YA?AW4AccountId@2@AEAVUser@2@V?$span@$$CBD@2@1@Z body=12 status=ok
// SIG undefined DelayLoad_?constitute@users@bifrost@@YA?AW4AccountId@2@AEAVUser@2@V?$span@$$CBD@2@1@Z(void)

void DelayLoad__constitute_users_bifrost__YA_AW4AccountId_2_AEAVUser_2_V__span___CBD_2_1_Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 1431158f2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG AccountId _guard_xfg_dispatch_icall_nop(User * param_1, span<char_const_> param_2, span<char_const_> param_3)

AccountId __cdecl bifrost::users::_guard_xfg_dispatch_icall_nop(void)

{
  AccountId AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431158f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = constitute();
  return AVar1;
}



// FUNCTION 1431158f8 DelayLoad_?findSessionIds@users@bifrost@@YAXAEAVUser@2@W4AccountId@2@V?$function@$$A6A_NW4SessionId@bifrost@@@Z@2@V?$function@$$A6AX_N@Z@2@N@Z body=12 status=ok
// SIG undefined DelayLoad_?findSessionIds@users@bifrost@@YAXAEAVUser@2@W4AccountId@2@V?$function@$$A6A_NW4SessionId@bifrost@@@Z@2@V?$function@$$A6AX_N@Z@2@N@Z(void)

void DelayLoad__findSessionIds_users_bifrost__YAXAEAVUser_2_W4AccountId_2_V__function___A6A_NW4SessionId_bifrost___Z_2_V__function___A6AX_N_Z_2_N_Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115904 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, AccountId param_2, function<bool___cdecl(bifrost::SessionId)> param_3, function<void___cdecl(bool)> param_4, double param_5)

void __cdecl bifrost::users::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  findSessionIds();
  return;
}



// FUNCTION 14311590a DelayLoad_?id@session@bifrost@@YA?AW4SessionId@2@AEAVUser@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?id@session@bifrost@@YA?AW4SessionId@2@AEAVUser@2@@Z(void)

void DelayLoad__id_session_bifrost__YA_AW4SessionId_2_AEAVUser_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115916 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG SessionId _guard_xfg_dispatch_icall_nop(User * param_1)

SessionId __cdecl bifrost::session::_guard_xfg_dispatch_icall_nop(User *param_1)

{
  SessionId SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = id(param_1);
  return SVar1;
}



// FUNCTION 14311591c DelayLoad_?toJidString@sessions@bifrost@@YAXW4SessionId@2@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?toJidString@sessions@bifrost@@YAXW4SessionId@2@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z(void)

void DelayLoad__toJidString_sessions_bifrost__YAXW4SessionId_2_V__function_ref___A6AXV__span___CBD_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115928 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(SessionId param_1, function_ref<void___cdecl(bifrost::span<char_const_>)> param_2)

void __cdecl bifrost::sessions::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  toJidString();
  return;
}



// FUNCTION 14311592e DelayLoad_?fromJidString@sessions@bifrost@@YAXAEAVUser@2@V?$span@$$CBD@2@V?$function@$$A6AXW4SessionId@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?fromJidString@sessions@bifrost@@YAXAEAVUser@2@V?$span@$$CBD@2@V?$function@$$A6AXW4SessionId@bifrost@@@Z@2@@Z(void)

void DelayLoad__fromJidString_sessions_bifrost__YAXAEAVUser_2_V__span___CBD_2_V__function___A6AXW4SessionId_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 14311593a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, span<char_const_> param_2, function<void___cdecl(bifrost::SessionId)> param_3)

void __cdecl bifrost::sessions::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311593a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fromJidString();
  return;
}



// FUNCTION 143115940 DelayLoad_?fromCachedJidString@sessions@bifrost@@YAXV?$span@$$CBD@2@V?$function_ref@$$A6AXW4SessionId@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?fromCachedJidString@sessions@bifrost@@YAXV?$span@$$CBD@2@V?$function_ref@$$A6AXW4SessionId@bifrost@@@Z@2@@Z(void)

void DelayLoad__fromCachedJidString_sessions_bifrost__YAXV__span___CBD_2_V__function_ref___A6AXW4SessionId_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 14311594c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(span<char_const_> param_1, function_ref<void___cdecl(bifrost::SessionId)> param_2)

void __cdecl bifrost::sessions::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311594c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fromCachedJidString();
  return;
}



// FUNCTION 143115952 DelayLoad_?create@sockets@bifrost@@YA?AW4ConnectionId@12@AEAVUser@2@W4ConnectionMode@12@W4TURNPolicy@12@@Z body=12 status=ok
// SIG undefined DelayLoad_?create@sockets@bifrost@@YA?AW4ConnectionId@12@AEAVUser@2@W4ConnectionMode@12@W4TURNPolicy@12@@Z(void)

void DelayLoad__create_sockets_bifrost__YA_AW4ConnectionId_12_AEAVUser_2_W4ConnectionMode_12_W4TURNPolicy_12__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 14311595e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG ConnectionId _guard_xfg_dispatch_icall_nop(User * param_1, ConnectionMode param_2, TURNPolicy param_3)

ConnectionId __cdecl
bifrost::sockets::_guard_xfg_dispatch_icall_nop
          (User *param_1,ConnectionMode param_2,TURNPolicy param_3)

{
  ConnectionId CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014311595e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = create(param_1,param_2,param_3);
  return CVar1;
}



// FUNCTION 143115964 DelayLoad_?bind@sockets@bifrost@@YA_NW4ConnectionId@12@G@Z body=12 status=ok
// SIG undefined DelayLoad_?bind@sockets@bifrost@@YA_NW4ConnectionId@12@G@Z(void)

void DelayLoad__bind_sockets_bifrost__YA_NW4ConnectionId_12_G_Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115970 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(ConnectionId param_1, ushort param_2)

bool __cdecl bifrost::sockets::_guard_xfg_dispatch_icall_nop(ConnectionId param_1,ushort param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = bind(param_1,param_2);
  return bVar1;
}



// FUNCTION 143115976 DelayLoad_?connect@sockets@bifrost@@YA_NW4ConnectionId@12@W4SessionId@2@GV?$function@$$A6A_N_N@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?connect@sockets@bifrost@@YA_NW4ConnectionId@12@W4SessionId@2@GV?$function@$$A6A_N_N@Z@2@@Z(void)

void DelayLoad__connect_sockets_bifrost__YA_NW4ConnectionId_12_W4SessionId_2_GV__function___A6A_N_N_Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115982 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(ConnectionId param_1, SessionId param_2, ushort param_3, function<bool___cdecl(bool)> param_4)

bool __cdecl bifrost::sockets::_guard_xfg_dispatch_icall_nop(void)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = connect();
  return bVar1;
}



// FUNCTION 143115988 DelayLoad_?listen@sockets@bifrost@@YA_NW4ConnectionId@12@V?$function@$$A6A?AUAnswer@sockets@bifrost@@AEAVUser@3@W4ConnectionId@23@W4SessionId@3@G@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?listen@sockets@bifrost@@YA_NW4ConnectionId@12@V?$function@$$A6A?AUAnswer@sockets@bifrost@@AEAVUser@3@W4ConnectionId@23@W4SessionId@3@G@Z@2@@Z(void)

void DelayLoad__listen_sockets_bifrost__YA_NW4ConnectionId_12_V__function___A6A_AUAnswer_sockets_bifrost__AEAVUser_3_W4ConnectionId_23_W4SessionId_3_G_Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115994 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(ConnectionId param_1, function<struct_bifrost::sockets::Answer___cdecl(bifrost::User&___ptr64,bifrost::sockets::ConnectionId,bifrost::SessionId,unsigned_short)> param_2)

bool __cdecl bifrost::sockets::_guard_xfg_dispatch_icall_nop(void)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = listen();
  return bVar1;
}



// FUNCTION 14311599a DelayLoad_?stopListening@sockets@bifrost@@YA_NW4ConnectionId@12@@Z body=12 status=ok
// SIG undefined DelayLoad_?stopListening@sockets@bifrost@@YA_NW4ConnectionId@12@@Z(void)

void DelayLoad__stopListening_sockets_bifrost__YA_NW4ConnectionId_12__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 1431159a6 stopListening body=6 status=ok
// SIG bool stopListening(ConnectionId param_1)

bool __cdecl bifrost::sockets::stopListening(ConnectionId param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431159a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = stopListening(param_1);
  return bVar1;
}



// FUNCTION 1431159ac DelayLoad_?disconnect@sockets@bifrost@@YA_NW4ConnectionId@12@W4SessionId@2@G@Z body=12 status=ok
// SIG undefined DelayLoad_?disconnect@sockets@bifrost@@YA_NW4ConnectionId@12@W4SessionId@2@G@Z(void)

void DelayLoad__disconnect_sockets_bifrost__YA_NW4ConnectionId_12_W4SessionId_2_G_Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 1431159b8 disconnect body=6 status=ok
// SIG bool disconnect(ConnectionId param_1, SessionId param_2, ushort param_3)

bool __cdecl bifrost::sockets::disconnect(ConnectionId param_1,SessionId param_2,ushort param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431159b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = disconnect(param_1,param_2,param_3);
  return bVar1;
}



// FUNCTION 1431159be DelayLoad_?sendTo@sockets@bifrost@@YA_NW4ConnectionId@12@PEBXHW4SessionId@2@GV?$function@$$A6A_N_N@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?sendTo@sockets@bifrost@@YA_NW4ConnectionId@12@PEBXHW4SessionId@2@GV?$function@$$A6A_N_N@Z@2@@Z(void)

void DelayLoad__sendTo_sockets_bifrost__YA_NW4ConnectionId_12_PEBXHW4SessionId_2_GV__function___A6A_N_N_Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 1431159ca _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(ConnectionId param_1, void * param_2, int param_3, SessionId param_4, ushort param_5, function<bool___cdecl(bool)> param_6)

bool __cdecl bifrost::sockets::_guard_xfg_dispatch_icall_nop(void)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431159ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = sendTo();
  return bVar1;
}



// FUNCTION 1431159d0 DelayLoad_?recvFrom@sockets@bifrost@@YA?AUPacketInfo@12@W4ConnectionId@12@PEAXIW4SessionId@2@G@Z body=12 status=ok
// SIG undefined DelayLoad_?recvFrom@sockets@bifrost@@YA?AUPacketInfo@12@W4ConnectionId@12@PEAXIW4SessionId@2@G@Z(void)

void DelayLoad__recvFrom_sockets_bifrost__YA_AUPacketInfo_12_W4ConnectionId_12_PEAXIW4SessionId_2_G_Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 1431159dc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG PacketInfo _guard_xfg_dispatch_icall_nop(ConnectionId param_1, void * param_2, uint param_3, SessionId param_4, ushort param_5)

void __cdecl
bifrost::sockets::_guard_xfg_dispatch_icall_nop
          (ConnectionId param_1,void *param_2,uint param_3,SessionId param_4,ushort param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001431159dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  recvFrom(param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1431159e2 DelayLoad_?destroy@sockets@bifrost@@YA_NW4ConnectionId@12@@Z body=12 status=ok
// SIG undefined DelayLoad_?destroy@sockets@bifrost@@YA_NW4ConnectionId@12@@Z(void)

void DelayLoad__destroy_sockets_bifrost__YA_NW4ConnectionId_12__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 1431159ee destroy body=6 status=ok
// SIG bool destroy(ConnectionId param_1)

bool __cdecl bifrost::sockets::destroy(ConnectionId param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431159ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = destroy(param_1);
  return bVar1;
}



// FUNCTION 1431159f4 DelayLoad_?isUsingTURN@sockets@bifrost@@YA_NAEAVUser@2@W4SessionId@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?isUsingTURN@sockets@bifrost@@YA_NAEAVUser@2@W4SessionId@2@@Z(void)

void DelayLoad__isUsingTURN_sockets_bifrost__YA_NAEAVUser_2_W4SessionId_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a00 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(User * param_1, SessionId param_2)

bool __cdecl bifrost::sockets::_guard_xfg_dispatch_icall_nop(User *param_1,SessionId param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = isUsingTURN(param_1,param_2);
  return bVar1;
}



// FUNCTION 143115a06 DelayLoad_?getRoomID@messaging@bifrost@@YA?AW4RoomId@12@V?$span@$$CBD@2@W4RoomType@12@@Z body=12 status=ok
// SIG undefined DelayLoad_?getRoomID@messaging@bifrost@@YA?AW4RoomId@12@V?$span@$$CBD@2@W4RoomType@12@@Z(void)

void DelayLoad__getRoomID_messaging_bifrost__YA_AW4RoomId_12_V__span___CBD_2_W4RoomType_12__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a12 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG RoomId _guard_xfg_dispatch_icall_nop(span<char_const_> param_1, RoomType param_2)

RoomId __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
  RoomId RVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RVar1 = getRoomID();
  return RVar1;
}



// FUNCTION 143115a18 DelayLoad_?sendMessage@messaging@bifrost@@YAXAEAVUser@2@W4SessionId@2@V?$span@$$CBD@2@V?$function@$$A6AXW4MessageResult@messaging@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?sendMessage@messaging@bifrost@@YAXAEAVUser@2@W4SessionId@2@V?$span@$$CBD@2@V?$function@$$A6AXW4MessageResult@messaging@bifrost@@@Z@2@@Z(void)

void DelayLoad__sendMessage_messaging_bifrost__YAXAEAVUser_2_W4SessionId_2_V__span___CBD_2_V__function___A6AXW4MessageResult_messaging_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a24 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, SessionId param_2, span<char_const_> param_3, function<void___cdecl(bifrost::messaging::MessageResult)> param_4)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sendMessage();
  return;
}



// FUNCTION 143115a2a DelayLoad_?getPeersInRoom@messaging@bifrost@@YAXAEAVUser@2@W4RoomId@12@V?$function@$$A6AXW4RoomResult@messaging@bifrost@@V?$span@$$CBW4SessionId@bifrost@@@3@W4SessionId@3@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getPeersInRoom@messaging@bifrost@@YAXAEAVUser@2@W4RoomId@12@V?$function@$$A6AXW4RoomResult@messaging@bifrost@@V?$span@$$CBW4SessionId@bifrost@@@3@W4SessionId@3@@Z@2@@Z(void)

void DelayLoad__getPeersInRoom_messaging_bifrost__YAXAEAVUser_2_W4RoomId_12_V__function___A6AXW4RoomResult_messaging_bifrost__V__span___CBW4SessionId_bifrost___3_W4SessionId_3__Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a36 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, RoomId param_2, function<void___cdecl(bifrost::messaging::RoomResult,bifrost::span<bifrost::SessionId_const_>,bifrost::SessionId)> param_3)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  getPeersInRoom();
  return;
}



// FUNCTION 143115a3c DelayLoad_?genTokenLogin@vivox@voice@social@bifrost@@YAXAEAVUser@4@V?$function@$$A6AXW4ResponseCode@vivox@voice@social@bifrost@@V?$span@$$CBD@5@@Z@4@@Z body=12 status=ok
// SIG undefined DelayLoad_?genTokenLogin@vivox@voice@social@bifrost@@YAXAEAVUser@4@V?$function@$$A6AXW4ResponseCode@vivox@voice@social@bifrost@@V?$span@$$CBD@5@@Z@4@@Z(void)

void DelayLoad__genTokenLogin_vivox_voice_social_bifrost__YAXAEAVUser_4_V__function___A6AXW4ResponseCode_vivox_voice_social_bifrost__V__span___CBD_5__Z_4__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a48 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function<void___cdecl(bifrost::social::voice::vivox::ResponseCode,bifrost::span<char_const_>)> param_2)

void __cdecl bifrost::social::voice::vivox::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  genTokenLogin();
  return;
}



// FUNCTION 143115a4e DelayLoad_?genTokenJoin@vivox@voice@social@bifrost@@YAXAEAVUser@4@V?$span@$$CBD@4@V?$function@$$A6AXW4ResponseCode@vivox@voice@social@bifrost@@V?$span@$$CBD@5@@Z@4@@Z body=12 status=ok
// SIG undefined DelayLoad_?genTokenJoin@vivox@voice@social@bifrost@@YAXAEAVUser@4@V?$span@$$CBD@4@V?$function@$$A6AXW4ResponseCode@vivox@voice@social@bifrost@@V?$span@$$CBD@5@@Z@4@@Z(void)

void DelayLoad__genTokenJoin_vivox_voice_social_bifrost__YAXAEAVUser_4_V__span___CBD_4_V__function___A6AXW4ResponseCode_vivox_voice_social_bifrost__V__span___CBD_5__Z_4__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a5a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, span<char_const_> param_2, function<void___cdecl(bifrost::social::voice::vivox::ResponseCode,bifrost::span<char_const_>)> param_3)

void __cdecl bifrost::social::voice::vivox::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  genTokenJoin();
  return;
}



// FUNCTION 143115a60 DelayLoad_?start@bifrost@@YAXUinit_params@1@@Z body=12 status=ok
// SIG undefined DelayLoad_?start@bifrost@@YAXUinit_params@1@@Z(void)

void DelayLoad__start_bifrost__YAXUinit_params_1__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a6c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(init_params param_1)

void __cdecl bifrost::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  start();
  return;
}



// FUNCTION 143115a72 DelayLoad_?stop@bifrost@@YAXXZ body=12 status=ok
// SIG undefined DelayLoad_?stop@bifrost@@YAXXZ(void)

void DelayLoad__stop_bifrost__YAXXZ(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a7e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void)

void __cdecl bifrost::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  stop();
  return;
}



// FUNCTION 143115a84 DelayLoad_?tick@bifrost@@YAXN@Z body=12 status=ok
// SIG undefined DelayLoad_?tick@bifrost@@YAXN@Z(void)

void DelayLoad__tick_bifrost__YAXN_Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115a90 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(double param_1)

void __cdecl bifrost::_guard_xfg_dispatch_icall_nop(double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143115a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tick(param_1);
  return;
}



// FUNCTION 143115a96 DelayLoad_?loginLegacy2@session@bifrost@@YAPEAVUser@2@Uinfo@12@V?$span@$$CBD@2@11111V?$function@$$A6AXAEAVUser@bifrost@@@Z@2@V?$function@$$A6AXUloginResult2@session@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?loginLegacy2@session@bifrost@@YAPEAVUser@2@Uinfo@12@V?$span@$$CBD@2@11111V?$function@$$A6AXAEAVUser@bifrost@@@Z@2@V?$function@$$A6AXUloginResult2@session@bifrost@@@Z@2@@Z(void)

void DelayLoad__loginLegacy2_session_bifrost__YAPEAVUser_2_Uinfo_12_V__span___CBD_2_11111V__function___A6AXAEAVUser_bifrost___Z_2_V__function___A6AXUloginResult2_session_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115aa2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG User * _guard_xfg_dispatch_icall_nop(info param_1, span<char_const_> param_2, span<char_const_> param_3, span<char_const_> param_4, span<char_const_> param_5, span<char_const_> param_6, span<char_const_> param_7, function<void___cdecl(bifrost::User&___ptr64)> param_8, function<void___cdecl(bifrost::session::loginResult2)> param_9)

User * __cdecl bifrost::session::_guard_xfg_dispatch_icall_nop(void)

{
  User *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = loginLegacy2();
  return pUVar1;
}



// FUNCTION 143115aa8 DelayLoad_?reauthLegacy@session@bifrost@@YAXPEAVUser@2@V?$span@$$CBD@2@11V?$function@$$A6AXUloginResult2@session@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?reauthLegacy@session@bifrost@@YAXPEAVUser@2@V?$span@$$CBD@2@11V?$function@$$A6AXUloginResult2@session@bifrost@@@Z@2@@Z(void)

void DelayLoad__reauthLegacy_session_bifrost__YAXPEAVUser_2_V__span___CBD_2_11V__function___A6AXUloginResult2_session_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115ab4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, span<char_const_> param_2, span<char_const_> param_3, span<char_const_> param_4, function<void___cdecl(bifrost::session::loginResult2)> param_5)

void __cdecl bifrost::session::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  reauthLegacy();
  return;
}



// FUNCTION 143115aba DelayLoad_?logout@session@bifrost@@YAXAEAVUser@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?logout@session@bifrost@@YAXAEAVUser@2@@Z(void)

void DelayLoad__logout_session_bifrost__YAXAEAVUser_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115ac6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1)

void __cdecl bifrost::session::_guard_xfg_dispatch_icall_nop(User *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143115ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  logout(param_1);
  return;
}



// FUNCTION 143115acc DelayLoad_?onAutoLogout@session@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXUAutoLogout@session@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?onAutoLogout@session@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXUAutoLogout@session@bifrost@@@Z@2@@Z(void)

void DelayLoad__onAutoLogout_session_bifrost__YAXAEAVUser_2_V__function___A6AXUAutoLogout_session_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115ad8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function<void___cdecl(bifrost::session::AutoLogout)> param_2)

void __cdecl bifrost::session::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  onAutoLogout();
  return;
}



// FUNCTION 143115ade DelayLoad_?isAuthed@account@bifrost@@YA_NAEAVUser@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?isAuthed@account@bifrost@@YA_NAEAVUser@2@@Z(void)

void DelayLoad__isAuthed_account_bifrost__YA_NAEAVUser_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115aea _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(User * param_1)

bool __cdecl bifrost::account::_guard_xfg_dispatch_icall_nop(User *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = isAuthed(param_1);
  return bVar1;
}



// FUNCTION 143115af0 DelayLoad_?rename@account@bifrost@@YAXAEAVUser@2@V?$span@$$CBD@2@V?$function@$$A6AXW4renameResponse@account@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?rename@account@bifrost@@YAXAEAVUser@2@V?$span@$$CBD@2@V?$function@$$A6AXW4renameResponse@account@bifrost@@@Z@2@@Z(void)

void DelayLoad__rename_account_bifrost__YAXAEAVUser_2_V__span___CBD_2_V__function___A6AXW4renameResponse_account_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115afc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, span<char_const_> param_2, function<void___cdecl(bifrost::account::renameResponse)> param_3)

void __cdecl bifrost::account::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  rename();
  return;
}



// FUNCTION 143115b02 DelayLoad_?get@account@bifrost@@YAXAEAVUser@2@V?$function_ref@$$A6AXAEBUShiftAccount@account@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?get@account@bifrost@@YAXAEAVUser@2@V?$function_ref@$$A6AXAEBUShiftAccount@account@bifrost@@@Z@2@@Z(void)

void DelayLoad__get_account_bifrost__YAXAEAVUser_2_V__function_ref___A6AXAEBUShiftAccount_account_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b0e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function_ref<void___cdecl(bifrost::account::ShiftAccount_const&___ptr64)> param_2)

void __cdecl bifrost::account::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  get();
  return;
}



// FUNCTION 143115b14 DelayLoad_?id@account@bifrost@@YA?AW4AccountId@2@W4SessionId@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?id@account@bifrost@@YA?AW4AccountId@2@W4SessionId@2@@Z(void)

void DelayLoad__id_account_bifrost__YA_AW4AccountId_2_W4SessionId_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b20 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG AccountId _guard_xfg_dispatch_icall_nop(SessionId param_1)

AccountId __cdecl bifrost::account::_guard_xfg_dispatch_icall_nop(SessionId param_1)

{
  AccountId AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = id(param_1);
  return AVar1;
}



// FUNCTION 143115b26 DelayLoad_?findCachedByShiftId@users@bifrost@@YA?AW4AccountId@2@V?$span@$$CBD@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?findCachedByShiftId@users@bifrost@@YA?AW4AccountId@2@V?$span@$$CBD@2@@Z(void)

void DelayLoad__findCachedByShiftId_users_bifrost__YA_AW4AccountId_2_V__span___CBD_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b32 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG AccountId _guard_xfg_dispatch_icall_nop(span<char_const_> param_1)

AccountId __cdecl bifrost::users::_guard_xfg_dispatch_icall_nop(void)

{
  AccountId AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = findCachedByShiftId();
  return AVar1;
}



// FUNCTION 143115b38 DelayLoad_?findCachedSessionIds@users@bifrost@@YAXW4AccountId@2@V?$function_ref@$$A6AXV?$span@$$CBW4SessionId@bifrost@@@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?findCachedSessionIds@users@bifrost@@YAXW4AccountId@2@V?$function_ref@$$A6AXV?$span@$$CBW4SessionId@bifrost@@@bifrost@@@Z@2@@Z(void)

void DelayLoad__findCachedSessionIds_users_bifrost__YAXW4AccountId_2_V__function_ref___A6AXV__span___CBW4SessionId_bifrost___bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b44 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(AccountId param_1, function_ref<void___cdecl(bifrost::span<bifrost::SessionId_const_>)> param_2)

void __cdecl bifrost::users::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  findCachedSessionIds();
  return;
}



// FUNCTION 143115b4a DelayLoad_?shiftId@users@bifrost@@YAXW4AccountId@2@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?shiftId@users@bifrost@@YAXW4AccountId@2@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z(void)

void DelayLoad__shiftId_users_bifrost__YAXW4AccountId_2_V__function_ref___A6AXV__span___CBD_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b56 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(AccountId param_1, function_ref<void___cdecl(bifrost::span<char_const_>)> param_2)

void __cdecl bifrost::users::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  shiftId();
  return;
}



// FUNCTION 143115b5c DelayLoad_?serviceName@sessions@bifrost@@YAXW4SessionId@2@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?serviceName@sessions@bifrost@@YAXW4SessionId@2@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z(void)

void DelayLoad__serviceName_sessions_bifrost__YAXW4SessionId_2_V__function_ref___A6AXV__span___CBD_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b68 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(SessionId param_1, function_ref<void___cdecl(bifrost::span<char_const_>)> param_2)

void __cdecl bifrost::sessions::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  serviceName();
  return;
}



// FUNCTION 143115b6e DelayLoad_?getRoomJID@messaging@bifrost@@YAXW4RoomId@12@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getRoomJID@messaging@bifrost@@YAXW4RoomId@12@V?$function_ref@$$A6AXV?$span@$$CBD@bifrost@@@Z@2@@Z(void)

void DelayLoad__getRoomJID_messaging_bifrost__YAXW4RoomId_12_V__function_ref___A6AXV__span___CBD_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b7a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(RoomId param_1, function_ref<void___cdecl(bifrost::span<char_const_>)> param_2)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  getRoomJID();
  return;
}



// FUNCTION 143115b80 DelayLoad_?isInitialized@messaging@bifrost@@YA_NAEAVUser@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?isInitialized@messaging@bifrost@@YA_NAEAVUser@2@@Z(void)

void DelayLoad__isInitialized_messaging_bifrost__YA_NAEAVUser_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b8c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(User * param_1)

bool __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(User *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = isInitialized(param_1);
  return bVar1;
}



// FUNCTION 143115b92 DelayLoad_?reconnect@messaging@bifrost@@YAXAEAVUser@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?reconnect@messaging@bifrost@@YAXAEAVUser@2@@Z(void)

void DelayLoad__reconnect_messaging_bifrost__YAXAEAVUser_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115b9e reconnect body=6 status=ok
// SIG void reconnect(User * param_1)

void __cdecl bifrost::messaging::reconnect(User *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143115b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  reconnect(param_1);
  return;
}



// FUNCTION 143115ba4 DelayLoad_?setInitDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6AX_N@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?setInitDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6AX_N@Z@2@@Z(void)

void DelayLoad__setInitDelegate_messaging_bifrost__YAXAEAVUser_2_V__function___A6AX_N_Z_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115bb0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function<void___cdecl(bool)> param_2)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setInitDelegate();
  return;
}



// FUNCTION 143115bb6 DelayLoad_?setMessageDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXUMessage@messaging@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?setMessageDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXUMessage@messaging@bifrost@@@Z@2@@Z(void)

void DelayLoad__setMessageDelegate_messaging_bifrost__YAXAEAVUser_2_V__function___A6AXUMessage_messaging_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115bc2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function<void___cdecl(bifrost::messaging::Message)> param_2)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setMessageDelegate();
  return;
}



// FUNCTION 143115bc8 DelayLoad_?setPresenceDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXUPresence@messaging@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?setPresenceDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXUPresence@messaging@bifrost@@@Z@2@@Z(void)

void DelayLoad__setPresenceDelegate_messaging_bifrost__YAXAEAVUser_2_V__function___A6AXUPresence_messaging_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115bd4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function<void___cdecl(bifrost::messaging::Presence)> param_2)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setPresenceDelegate();
  return;
}



// FUNCTION 143115bda DelayLoad_?setPresence@messaging@bifrost@@YAXAEAVUser@2@UPresence@12@V?$function@$$A6AXW4PresenceResult@messaging@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?setPresence@messaging@bifrost@@YAXAEAVUser@2@UPresence@12@V?$function@$$A6AXW4PresenceResult@messaging@bifrost@@@Z@2@@Z(void)

void DelayLoad__setPresence_messaging_bifrost__YAXAEAVUser_2_UPresence_12_V__function___A6AXW4PresenceResult_messaging_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115be6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, Presence param_2, function<void___cdecl(bifrost::messaging::PresenceResult)> param_3)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setPresence();
  return;
}



// FUNCTION 143115bec DelayLoad_?setInviteDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6A?AW4RSVP@messaging@bifrost@@W4RoomId@23@W4SessionId@3@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?setInviteDelegate@messaging@bifrost@@YAXAEAVUser@2@V?$function@$$A6A?AW4RSVP@messaging@bifrost@@W4RoomId@23@W4SessionId@3@@Z@2@@Z(void)

void DelayLoad__setInviteDelegate_messaging_bifrost__YAXAEAVUser_2_V__function___A6A_AW4RSVP_messaging_bifrost__W4RoomId_23_W4SessionId_3__Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115bf8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function<enum_bifrost::messaging::RSVP___cdecl(bifrost::messaging::RoomId,bifrost::SessionId)> param_2)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setInviteDelegate();
  return;
}



// FUNCTION 143115bfe DelayLoad_?joinRoom@messaging@bifrost@@YAXAEAVUser@2@W4RoomId@12@V?$function@$$A6AXW4RoomResult@messaging@bifrost@@W4RoomId@23@@Z@2@_NV?$span@$$CBD@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?joinRoom@messaging@bifrost@@YAXAEAVUser@2@W4RoomId@12@V?$function@$$A6AXW4RoomResult@messaging@bifrost@@W4RoomId@23@@Z@2@_NV?$span@$$CBD@2@@Z(void)

void DelayLoad__joinRoom_messaging_bifrost__YAXAEAVUser_2_W4RoomId_12_V__function___A6AXW4RoomResult_messaging_bifrost__W4RoomId_23__Z_2__NV__span___CBD_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115c0a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, RoomId param_2, function<void___cdecl(bifrost::messaging::RoomResult,bifrost::messaging::RoomId)> param_3, bool param_4, span<char_const_> param_5)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  joinRoom();
  return;
}



// FUNCTION 143115c10 DelayLoad_?leaveRoom@messaging@bifrost@@YAXAEAVUser@2@W4RoomId@12@V?$function@$$A6AXW4RoomResult@messaging@bifrost@@W4RoomId@23@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?leaveRoom@messaging@bifrost@@YAXAEAVUser@2@W4RoomId@12@V?$function@$$A6AXW4RoomResult@messaging@bifrost@@W4RoomId@23@@Z@2@@Z(void)

void DelayLoad__leaveRoom_messaging_bifrost__YAXAEAVUser_2_W4RoomId_12_V__function___A6AXW4RoomResult_messaging_bifrost__W4RoomId_23__Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115c1c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, RoomId param_2, function<void___cdecl(bifrost::messaging::RoomResult,bifrost::messaging::RoomId)> param_3)

void __cdecl bifrost::messaging::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  leaveRoom();
  return;
}



// FUNCTION 143115c22 DelayLoad_?setPortTURNPolicy@sockets@bifrost@@YA_NAEAVUser@2@W4SessionId@2@HHW4TURNPolicy@12@@Z body=12 status=ok
// SIG undefined DelayLoad_?setPortTURNPolicy@sockets@bifrost@@YA_NAEAVUser@2@W4SessionId@2@HHW4TURNPolicy@12@@Z(void)

void DelayLoad__setPortTURNPolicy_sockets_bifrost__YA_NAEAVUser_2_W4SessionId_2_HHW4TURNPolicy_12__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115c2e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(User * param_1, SessionId param_2, int param_3, int param_4, TURNPolicy param_5)

bool __cdecl
bifrost::sockets::_guard_xfg_dispatch_icall_nop
          (User *param_1,SessionId param_2,int param_3,int param_4,TURNPolicy param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = setPortTURNPolicy(param_1,param_2,param_3,param_4,param_5);
  return bVar1;
}



// FUNCTION 143115c34 DelayLoad_?takeSample@telemetry@sockets@bifrost@@YA?AUsample@123@AEAVUser@3@@Z body=12 status=ok
// SIG undefined DelayLoad_?takeSample@telemetry@sockets@bifrost@@YA?AUsample@123@AEAVUser@3@@Z(void)

void DelayLoad__takeSample_telemetry_sockets_bifrost__YA_AUsample_123_AEAVUser_3__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115c40 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG sample _guard_xfg_dispatch_icall_nop(User * param_1)

void __cdecl bifrost::sockets::telemetry::_guard_xfg_dispatch_icall_nop(User *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143115c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  takeSample(param_1);
  return;
}



// FUNCTION 143115c46 DelayLoad_?setRegion@sockets@bifrost@@YAXV?$span@$$CBD@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?setRegion@sockets@bifrost@@YAXV?$span@$$CBD@2@@Z(void)

void DelayLoad__setRegion_sockets_bifrost__YAXV__span___CBD_2__Z(void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115c52 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(span<char_const_> param_1)

void __cdecl bifrost::sockets::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setRegion();
  return;
}



// FUNCTION 143115c58 DelayLoad_?setDetectDelegate@NAT@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXW4Type@NAT@bifrost@@@Z@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?setDetectDelegate@NAT@bifrost@@YAXAEAVUser@2@V?$function@$$A6AXW4Type@NAT@bifrost@@@Z@2@@Z(void)

void DelayLoad__setDetectDelegate_NAT_bifrost__YAXAEAVUser_2_V__function___A6AXW4Type_NAT_bifrost___Z_2__Z
               (void)

{
  FUN_14311585b();
  return;
}



// FUNCTION 143115c64 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(User * param_1, function<void___cdecl(bifrost::NAT::Type)> param_2)

void __cdecl bifrost::NAT::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143115c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setDetectDelegate();
  return;
}



// FUNCTION 143115c6a DelayLoad_??1TypeDescription@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1TypeDescription@cohtml@@QEAA@XZ(void)

void DelayLoad___1TypeDescription_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115c76 FUN_143115c76 body=121 status=ok
// SIG undefined FUN_143115c76(void)

void FUN_143115c76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461ddfc8);
                    /* WARNING: Could not recover jumptable at 0x000143115ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143115cef DelayLoad_??2Property@cohtml@@SAPEAX_K@Z body=12 status=ok
// SIG undefined DelayLoad_??2Property@cohtml@@SAPEAX_K@Z(void)

void DelayLoad___2Property_cohtml__SAPEAX_K_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115cfb DelayLoad_??3Property@cohtml@@SAXPEAX@Z body=12 status=ok
// SIG undefined DelayLoad_??3Property@cohtml@@SAXPEAX@Z(void)

void DelayLoad___3Property_cohtml__SAXPEAX_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d07 DelayLoad_??2IEventHandler@cohtml@@SAPEAX_K@Z body=12 status=ok
// SIG undefined DelayLoad_??2IEventHandler@cohtml@@SAPEAX_K@Z(void)

void DelayLoad___2IEventHandler_cohtml__SAPEAX_K_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d13 DelayLoad_??3IEventHandler@cohtml@@SAXPEAX@Z body=12 status=ok
// SIG undefined DelayLoad_??3IEventHandler@cohtml@@SAXPEAX@Z(void)

void DelayLoad___3IEventHandler_cohtml__SAXPEAX_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d1f DelayLoad_??0IAsyncResourceResponse@cohtml@@IEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0IAsyncResourceResponse@cohtml@@IEAA@XZ(void)

void DelayLoad___0IAsyncResourceResponse_cohtml__IEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d2b DelayLoad_??1IAsyncResourceResponse@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IAsyncResourceResponse@cohtml@@UEAA@XZ(void)

void DelayLoad___1IAsyncResourceResponse_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d37 DelayLoad_??0IAsyncResourceHandler@cohtml@@IEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0IAsyncResourceHandler@cohtml@@IEAA@XZ(void)

void DelayLoad___0IAsyncResourceHandler_cohtml__IEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d43 DelayLoad_??1IAsyncResourceHandler@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IAsyncResourceHandler@cohtml@@UEAA@XZ(void)

void DelayLoad___1IAsyncResourceHandler_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d4f DelayLoad_??0ISyncStreamReader@cohtml@@IEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0ISyncStreamReader@cohtml@@IEAA@XZ(void)

void DelayLoad___0ISyncStreamReader_cohtml__IEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d5b DelayLoad_??1ISyncStreamReader@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1ISyncStreamReader@cohtml@@UEAA@XZ(void)

void DelayLoad___1ISyncStreamReader_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d67 DelayLoad_??0IClientSideSocket@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0IClientSideSocket@cohtml@@QEAA@XZ(void)

void DelayLoad___0IClientSideSocket_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d73 DelayLoad_??1IClientSideSocket@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IClientSideSocket@cohtml@@UEAA@XZ(void)

void DelayLoad___1IClientSideSocket_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d7f DelayLoad_??0IViewListener@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0IViewListener@cohtml@@QEAA@XZ(void)

void DelayLoad___0IViewListener_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d8b DelayLoad_??1IViewListener@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IViewListener@cohtml@@UEAA@XZ(void)

void DelayLoad___1IViewListener_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115d97 DelayLoad_??0ITextInputHandler@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0ITextInputHandler@cohtml@@QEAA@XZ(void)

void DelayLoad___0ITextInputHandler_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115da3 DelayLoad_??1ITextInputHandler@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1ITextInputHandler@cohtml@@UEAA@XZ(void)

void DelayLoad___1ITextInputHandler_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115daf DelayLoad_??0ILocalizationManager@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0ILocalizationManager@cohtml@@QEAA@XZ(void)

void DelayLoad___0ILocalizationManager_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115dbb DelayLoad_??1ILocalizationManager@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1ILocalizationManager@cohtml@@UEAA@XZ(void)

void DelayLoad___1ILocalizationManager_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115dc7 DelayLoad_??0ILogHandler@Logging@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0ILogHandler@Logging@cohtml@@QEAA@XZ(void)

void DelayLoad___0ILogHandler_Logging_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115dd3 DelayLoad_??1ILogHandler@Logging@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1ILogHandler@Logging@cohtml@@UEAA@XZ(void)

void DelayLoad___1ILogHandler_Logging_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115ddf DelayLoad_??0IAllocator@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0IAllocator@cohtml@@QEAA@XZ(void)

void DelayLoad___0IAllocator_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115deb DelayLoad_??1IAllocator@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IAllocator@cohtml@@UEAA@XZ(void)

void DelayLoad___1IAllocator_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115df7 DelayLoad_?InitializeWithRenderingLibrary@Library@cohtml@@SAPEAV12@PEBDAEBULibraryParamsWithExternalRenderingLibrary@2@PEAVIRenderingLibrary@renoir@@@Z body=12 status=ok
// SIG undefined DelayLoad_?InitializeWithRenderingLibrary@Library@cohtml@@SAPEAV12@PEBDAEBULibraryParamsWithExternalRenderingLibrary@2@PEAVIRenderingLibrary@renoir@@@Z(void)

void DelayLoad__InitializeWithRenderingLibrary_Library_cohtml__SAPEAV12_PEBDAEBULibraryParamsWithExternalRenderingLibrary_2_PEAVIRenderingLibrary_renoir___Z
               (void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e03 DelayLoad_?HintThreadUsage@Library@cohtml@@SAXW4WorkType@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?HintThreadUsage@Library@cohtml@@SAXW4WorkType@2@@Z(void)

void DelayLoad__HintThreadUsage_Library_cohtml__SAXW4WorkType_2__Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e0f DelayLoad_?DecodeURLString@Library@cohtml@@SAXPEBDIPEADPEAI@Z body=12 status=ok
// SIG undefined DelayLoad_?DecodeURLString@Library@cohtml@@SAXPEBDIPEADPEAI@Z(void)

void DelayLoad__DecodeURLString_Library_cohtml__SAXPEBDIPEADPEAI_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e1b DelayLoad_??0IInternationalizationManager@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0IInternationalizationManager@cohtml@@QEAA@XZ(void)

void DelayLoad___0IInternationalizationManager_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e27 DelayLoad_??1IInternationalizationManager@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IInternationalizationManager@cohtml@@UEAA@XZ(void)

void DelayLoad___1IInternationalizationManager_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e33 DelayLoad_??0IBreakIterator@i18n@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0IBreakIterator@i18n@cohtml@@QEAA@XZ(void)

void DelayLoad___0IBreakIterator_i18n_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e3f DelayLoad_??1IBreakIterator@i18n@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IBreakIterator@i18n@cohtml@@UEAA@XZ(void)

void DelayLoad___1IBreakIterator_i18n_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e4b DelayLoad_??0ITextTransformationManager@cohtml@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0ITextTransformationManager@cohtml@@QEAA@XZ(void)

void DelayLoad___0ITextTransformationManager_cohtml__QEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e57 DelayLoad_??1ITextTransformationManager@cohtml@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1ITextTransformationManager@cohtml@@UEAA@XZ(void)

void DelayLoad___1ITextTransformationManager_cohtml__UEAA_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e63 DelayLoad_?CaseMapCharacters@ITextTransformationManager@cohtml@@UEBA_NW4CaseOperation@12@PEBDIPEAUTransformationResult@12@@Z body=12 status=ok
// SIG undefined DelayLoad_?CaseMapCharacters@ITextTransformationManager@cohtml@@UEBA_NW4CaseOperation@12@PEBDIPEAUTransformationResult@12@@Z(void)

void DelayLoad__CaseMapCharacters_ITextTransformationManager_cohtml__UEBA_NW4CaseOperation_12_PEBDIPEAUTransformationResult_12__Z
               (void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e75 DelayLoad_?OnResourceRequestIntercepted@IViewListener@cohtml@@UEAA?AW4InterceptRequestStatus@2@PEBD@Z body=12 status=ok
// SIG undefined DelayLoad_?OnResourceRequestIntercepted@IViewListener@cohtml@@UEAA?AW4InterceptRequestStatus@2@PEBD@Z(void)

void DelayLoad__OnResourceRequestIntercepted_IViewListener_cohtml__UEAA_AW4InterceptRequestStatus_2_PEBD_Z
               (void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e87 DelayLoad_?Translate@ILocalizationManager@cohtml@@UEAAXPEBDPEAUTranslationData@12@@Z body=12 status=ok
// SIG undefined DelayLoad_?Translate@ILocalizationManager@cohtml@@UEAAXPEBDPEAUTranslationData@12@@Z(void)

void DelayLoad__Translate_ILocalizationManager_cohtml__UEAAXPEBDPEAUTranslationData_12__Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115e99 DelayLoad_?OnAudioDataReceived@IViewListener@cohtml@@UEAAXHHPEAPEAMH@Z body=12 status=ok
// SIG undefined DelayLoad_?OnAudioDataReceived@IViewListener@cohtml@@UEAAXHHPEAPEAMH@Z(void)

void DelayLoad__OnAudioDataReceived_IViewListener_cohtml__UEAAXHHPEAPEAMH_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115eab DelayLoad_?OnAudioStreamClosed@IViewListener@cohtml@@UEAAXH@Z body=12 status=ok
// SIG undefined DelayLoad_?OnAudioStreamClosed@IViewListener@cohtml@@UEAAXH@Z(void)

void DelayLoad__OnAudioStreamClosed_IViewListener_cohtml__UEAAXH_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115ebd DelayLoad_?OnAudioStreamCreated@IViewListener@cohtml@@UEAAXHHHM@Z body=12 status=ok
// SIG undefined DelayLoad_?OnAudioStreamCreated@IViewListener@cohtml@@UEAAXHHHM@Z(void)

void DelayLoad__OnAudioStreamCreated_IViewListener_cohtml__UEAAXHHHM_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115ecf DelayLoad_?OnAudioStreamEnded@IViewListener@cohtml@@UEAAXH@Z body=12 status=ok
// SIG undefined DelayLoad_?OnAudioStreamEnded@IViewListener@cohtml@@UEAAXH@Z(void)

void DelayLoad__OnAudioStreamEnded_IViewListener_cohtml__UEAAXH_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115ee1 DelayLoad_?OnAudioStreamPause@IViewListener@cohtml@@UEAAXH@Z body=12 status=ok
// SIG undefined DelayLoad_?OnAudioStreamPause@IViewListener@cohtml@@UEAAXH@Z(void)

void DelayLoad__OnAudioStreamPause_IViewListener_cohtml__UEAAXH_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115ef3 DelayLoad_?OnAudioStreamPlay@IViewListener@cohtml@@UEAAXH@Z body=12 status=ok
// SIG undefined DelayLoad_?OnAudioStreamPlay@IViewListener@cohtml@@UEAAXH@Z(void)

void DelayLoad__OnAudioStreamPlay_IViewListener_cohtml__UEAAXH_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f05 DelayLoad_?OnAudioStreamVolumeChanged@IViewListener@cohtml@@UEAAXHM@Z body=12 status=ok
// SIG undefined DelayLoad_?OnAudioStreamVolumeChanged@IViewListener@cohtml@@UEAAXHM@Z(void)

void DelayLoad__OnAudioStreamVolumeChanged_IViewListener_cohtml__UEAAXHM_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f17 DelayLoad_?OnBindingsReleased@IViewListener@cohtml@@UEAAXXZ body=12 status=ok
// SIG undefined DelayLoad_?OnBindingsReleased@IViewListener@cohtml@@UEAAXXZ(void)

void DelayLoad__OnBindingsReleased_IViewListener_cohtml__UEAAXXZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f29 DelayLoad_?OnCaretRectChanged@IViewListener@cohtml@@UEAAXHHII@Z body=12 status=ok
// SIG undefined DelayLoad_?OnCaretRectChanged@IViewListener@cohtml@@UEAAXHHII@Z(void)

void DelayLoad__OnCaretRectChanged_IViewListener_cohtml__UEAAXHHII_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f3b DelayLoad_?OnCreateWebSocket@IViewListener@cohtml@@UEAAPEAVIClientSideSocket@2@PEAVISocketListener@2@PEBDPEAPEBDI@Z body=12 status=ok
// SIG undefined DelayLoad_?OnCreateWebSocket@IViewListener@cohtml@@UEAAPEAVIClientSideSocket@2@PEAVISocketListener@2@PEBDPEAPEBDI@Z(void)

void DelayLoad__OnCreateWebSocket_IViewListener_cohtml__UEAAPEAVIClientSideSocket_2_PEAVISocketListener_2_PEBDPEAPEBDI_Z
               (void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f4d DelayLoad_?OnCursorChanged@IViewListener@cohtml@@UEAAXW4Cursors@CursorTypes@2@PEBDPEBM2@Z body=12 status=ok
// SIG undefined DelayLoad_?OnCursorChanged@IViewListener@cohtml@@UEAAXW4Cursors@CursorTypes@2@PEBDPEBM2@Z(void)

void DelayLoad__OnCursorChanged_IViewListener_cohtml__UEAAXW4Cursors_CursorTypes_2_PEBDPEBM2_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f5f DelayLoad_?OnIMEShouldCancelComposition@IViewListener@cohtml@@UEAAXXZ body=12 status=ok
// SIG undefined DelayLoad_?OnIMEShouldCancelComposition@IViewListener@cohtml@@UEAAXXZ(void)

void DelayLoad__OnIMEShouldCancelComposition_IViewListener_cohtml__UEAAXXZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f71 DelayLoad_?OnLoadFailed@IViewListener@cohtml@@UEAAXPEBD0@Z body=12 status=ok
// SIG undefined DelayLoad_?OnLoadFailed@IViewListener@cohtml@@UEAAXPEBD0@Z(void)

void DelayLoad__OnLoadFailed_IViewListener_cohtml__UEAAXPEBD0_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f83 DelayLoad_?OnNavigateTo@IViewListener@cohtml@@UEAA_NPEBD@Z body=12 status=ok
// SIG undefined DelayLoad_?OnNavigateTo@IViewListener@cohtml@@UEAA_NPEBD@Z(void)

void DelayLoad__OnNavigateTo_IViewListener_cohtml__UEAA_NPEBD_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115f95 DelayLoad_?OnNodeTouched@IViewListener@cohtml@@UEAA?AW4Actions@EventAction@2@PEBVINodeProxy@2@PEBUTouchEventData@2@PEAXW4PhaseType@InputEventPhase@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?OnNodeTouched@IViewListener@cohtml@@UEAA?AW4Actions@EventAction@2@PEBVINodeProxy@2@PEBUTouchEventData@2@PEAXW4PhaseType@InputEventPhase@2@@Z(void)

void DelayLoad__OnNodeTouched_IViewListener_cohtml__UEAA_AW4Actions_EventAction_2_PEBVINodeProxy_2_PEBUTouchEventData_2_PEAXW4PhaseType_InputEventPhase_2__Z
               (void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115fa7 DelayLoad_?OnScreenInfoRequested@IViewListener@cohtml@@UEAA?AUScreenInfo@2@XZ body=12 status=ok
// SIG undefined DelayLoad_?OnScreenInfoRequested@IViewListener@cohtml@@UEAA?AUScreenInfo@2@XZ(void)

void DelayLoad__OnScreenInfoRequested_IViewListener_cohtml__UEAA_AUScreenInfo_2_XZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115fb9 DelayLoad_?OnScriptContextCreated@IViewListener@cohtml@@UEAAXXZ body=12 status=ok
// SIG undefined DelayLoad_?OnScriptContextCreated@IViewListener@cohtml@@UEAAXXZ(void)

void DelayLoad__OnScriptContextCreated_IViewListener_cohtml__UEAAXXZ(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115fcb DelayLoad_?OnTextInputTypeChanged@IViewListener@cohtml@@UEAAXW4ControlType@TextInputControlType@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?OnTextInputTypeChanged@IViewListener@cohtml@@UEAAXW4ControlType@TextInputControlType@2@@Z(void)

void DelayLoad__OnTextInputTypeChanged_IViewListener_cohtml__UEAAXW4ControlType_TextInputControlType_2__Z
               (void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115fdd DelayLoad_?Invoke@?$CoherentToString@_N@cohtml@@SA_N_NPEADPEA_K@Z body=12 status=ok
// SIG undefined DelayLoad_?Invoke@?$CoherentToString@_N@cohtml@@SA_N_NPEADPEA_K@Z(void)

void DelayLoad__Invoke___CoherentToString__N_cohtml__SA_N_NPEADPEA_K_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115fe9 DelayLoad_?Invoke@?$CoherentToString@H@cohtml@@SA_NHPEADPEA_K@Z body=12 status=ok
// SIG undefined DelayLoad_?Invoke@?$CoherentToString@H@cohtml@@SA_NHPEADPEA_K@Z(void)

void DelayLoad__Invoke___CoherentToString_H_cohtml__SA_NHPEADPEA_K_Z(void)

{
  FUN_143115c76();
  return;
}



// FUNCTION 143115ff5 DelayLoad_??1ILogHandler@Logging@renoir@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1ILogHandler@Logging@renoir@@UEAA@XZ(void)

void DelayLoad___1ILogHandler_Logging_renoir__UEAA_XZ(void)

{
  FUN_143116001();
  return;
}



// FUNCTION 143116001 FUN_143116001 body=121 status=ok
// SIG undefined FUN_143116001(void)

void FUN_143116001(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461ddfe8);
                    /* WARNING: Could not recover jumptable at 0x000143116078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14311607a DelayLoad_??1IAllocator@renoir@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IAllocator@renoir@@UEAA@XZ(void)

void DelayLoad___1IAllocator_renoir__UEAA_XZ(void)

{
  FUN_143116001();
  return;
}



// FUNCTION 143116086 DelayLoad_??1IStreamReader@renoir@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IStreamReader@renoir@@UEAA@XZ(void)

void DelayLoad___1IStreamReader_renoir__UEAA_XZ(void)

{
  FUN_143116001();
  return;
}



// FUNCTION 143116092 DelayLoad_??1IFileManipulator@renoir@@UEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??1IFileManipulator@renoir@@UEAA@XZ(void)

void DelayLoad___1IFileManipulator_renoir__UEAA_XZ(void)

{
  FUN_143116001();
  return;
}



// FUNCTION 14311609e DelayLoad_?Initialize@IRenderingLibrary@renoir@@SAPEAV12@AEBURenderingLibraryParams@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?Initialize@IRenderingLibrary@renoir@@SAPEAV12@AEBURenderingLibraryParams@2@@Z(void)

void DelayLoad__Initialize_IRenderingLibrary_renoir__SAPEAV12_AEBURenderingLibraryParams_2__Z(void)

{
  FUN_143116001();
  return;
}



// FUNCTION 1431160aa DelayLoad_SteamAPI_RunCallbacks body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_RunCallbacks(void)

void DelayLoad_SteamAPI_RunCallbacks(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 1431160b6 FUN_1431160b6 body=121 status=ok
// SIG undefined FUN_1431160b6(void)

void FUN_1431160b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de008);
                    /* WARNING: Could not recover jumptable at 0x00014311612d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14311612f DelayLoad_SteamAPI_GetHSteamUser body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_GetHSteamUser(void)

void DelayLoad_SteamAPI_GetHSteamUser(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 14311613b DelayLoad_SteamInternal_ContextInit body=12 status=ok
// SIG undefined DelayLoad_SteamInternal_ContextInit(void)

void DelayLoad_SteamInternal_ContextInit(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 143116147 DelayLoad_SteamInternal_FindOrCreateUserInterface body=12 status=ok
// SIG undefined DelayLoad_SteamInternal_FindOrCreateUserInterface(void)

void DelayLoad_SteamInternal_FindOrCreateUserInterface(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 143116153 DelayLoad_SteamAPI_RegisterCallback body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_RegisterCallback(void)

void DelayLoad_SteamAPI_RegisterCallback(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 14311615f DelayLoad_SteamAPI_UnregisterCallback body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_UnregisterCallback(void)

void DelayLoad_SteamAPI_UnregisterCallback(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 14311616b DelayLoad_SteamAPI_RegisterCallResult body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_RegisterCallResult(void)

void DelayLoad_SteamAPI_RegisterCallResult(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 143116177 DelayLoad_SteamAPI_UnregisterCallResult body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_UnregisterCallResult(void)

void DelayLoad_SteamAPI_UnregisterCallResult(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 143116183 DelayLoad_SteamAPI_Init body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_Init(void)

void DelayLoad_SteamAPI_Init(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 14311618f DelayLoad_SteamAPI_Shutdown body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_Shutdown(void)

void DelayLoad_SteamAPI_Shutdown(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 14311619b DelayLoad_SteamAPI_RestartAppIfNecessary body=12 status=ok
// SIG undefined DelayLoad_SteamAPI_RestartAppIfNecessary(void)

void DelayLoad_SteamAPI_RestartAppIfNecessary(void)

{
  FUN_1431160b6();
  return;
}



// FUNCTION 1431161a7 DelayLoad_vx_strdup body=12 status=ok
// SIG undefined DelayLoad_vx_strdup(void)

void DelayLoad_vx_strdup(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431161b3 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431161b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_strdup();
  return;
}



// FUNCTION 1431161b9 FUN_1431161b9 body=121 status=ok
// SIG undefined FUN_1431161b9(void)

void FUN_1431161b9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de028);
                    /* WARNING: Could not recover jumptable at 0x000143116230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143116232 DelayLoad_vx_free body=12 status=ok
// SIG undefined DelayLoad_vx_free(void)

void DelayLoad_vx_free(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 14311623e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311623e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_free();
  return;
}



// FUNCTION 143116244 DelayLoad_vx_calloc body=12 status=ok
// SIG undefined DelayLoad_vx_calloc(void)

void DelayLoad_vx_calloc(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116250 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_calloc();
  return;
}



// FUNCTION 143116256 DelayLoad_vx_get_message body=12 status=ok
// SIG undefined DelayLoad_vx_get_message(void)

void DelayLoad_vx_get_message(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116262 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_get_message();
  return;
}



// FUNCTION 143116268 DelayLoad_vx_issue_request3 body=12 status=ok
// SIG undefined DelayLoad_vx_issue_request3(void)

void DelayLoad_vx_issue_request3(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116274 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_issue_request3();
  return;
}



// FUNCTION 14311627a DelayLoad_vx_initialize3 body=12 status=ok
// SIG undefined DelayLoad_vx_initialize3(void)

void DelayLoad_vx_initialize3(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116286 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_initialize3();
  return;
}



// FUNCTION 14311628c DelayLoad_vx_get_default_config3 body=12 status=ok
// SIG undefined DelayLoad_vx_get_default_config3(void)

void DelayLoad_vx_get_default_config3(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116298 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_get_default_config3();
  return;
}



// FUNCTION 14311629e DelayLoad_vx_uninitialize body=12 status=ok
// SIG undefined DelayLoad_vx_uninitialize(void)

void DelayLoad_vx_uninitialize(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431162aa _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431162aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_uninitialize();
  return;
}



// FUNCTION 1431162b0 DelayLoad_vx_destroy_message body=12 status=ok
// SIG undefined DelayLoad_vx_destroy_message(void)

void DelayLoad_vx_destroy_message(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431162bc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431162bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_destroy_message();
  return;
}



// FUNCTION 1431162c2 DelayLoad_vx_debug_generate_token body=12 status=ok
// SIG undefined DelayLoad_vx_debug_generate_token(void)

void DelayLoad_vx_debug_generate_token(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431162ce _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431162ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_debug_generate_token();
  return;
}



// FUNCTION 1431162d4 DelayLoad_vx_tts_initialize body=12 status=ok
// SIG undefined DelayLoad_vx_tts_initialize(void)

void DelayLoad_vx_tts_initialize(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431162e0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431162e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_initialize();
  return;
}



// FUNCTION 1431162e6 DelayLoad_vx_tts_get_voices body=12 status=ok
// SIG undefined DelayLoad_vx_tts_get_voices(void)

void DelayLoad_vx_tts_get_voices(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431162f2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431162f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_get_voices();
  return;
}



// FUNCTION 1431162f8 DelayLoad_vx_tts_shutdown body=12 status=ok
// SIG undefined DelayLoad_vx_tts_shutdown(void)

void DelayLoad_vx_tts_shutdown(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116304 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_shutdown();
  return;
}



// FUNCTION 14311630a DelayLoad_vx_tts_speak body=12 status=ok
// SIG undefined DelayLoad_vx_tts_speak(void)

void DelayLoad_vx_tts_speak(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116316 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_speak();
  return;
}



// FUNCTION 14311631c DelayLoad_vx_tts_speak_to_buffer body=12 status=ok
// SIG undefined DelayLoad_vx_tts_speak_to_buffer(void)

void DelayLoad_vx_tts_speak_to_buffer(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116328 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_speak_to_buffer();
  return;
}



// FUNCTION 14311632e DelayLoad_vx_tts_destroy_utterance body=12 status=ok
// SIG undefined DelayLoad_vx_tts_destroy_utterance(void)

void DelayLoad_vx_tts_destroy_utterance(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 14311633a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311633a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_destroy_utterance();
  return;
}



// FUNCTION 143116340 DelayLoad_vx_tts_cancel_utterance body=12 status=ok
// SIG undefined DelayLoad_vx_tts_cancel_utterance(void)

void DelayLoad_vx_tts_cancel_utterance(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 14311634c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_cancel_utterance();
  return;
}



// FUNCTION 143116352 DelayLoad_vx_tts_cancel_all_in_dest body=12 status=ok
// SIG undefined DelayLoad_vx_tts_cancel_all_in_dest(void)

void DelayLoad_vx_tts_cancel_all_in_dest(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 14311635e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311635e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_cancel_all_in_dest();
  return;
}



// FUNCTION 143116364 DelayLoad_vx_tts_cancel_all body=12 status=ok
// SIG undefined DelayLoad_vx_tts_cancel_all(void)

void DelayLoad_vx_tts_cancel_all(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116370 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_tts_cancel_all();
  return;
}



// FUNCTION 143116376 DelayLoad_vx_req_connector_create_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_connector_create_create(void)

void DelayLoad_vx_req_connector_create_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116382 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_connector_create_create();
  return;
}



// FUNCTION 143116388 DelayLoad_vx_req_account_anonymous_login_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_account_anonymous_login_create(void)

void DelayLoad_vx_req_account_anonymous_login_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116394 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_account_anonymous_login_create();
  return;
}



// FUNCTION 14311639a DelayLoad_vx_req_account_logout_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_account_logout_create(void)

void DelayLoad_vx_req_account_logout_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431163a6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431163a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_account_logout_create();
  return;
}



// FUNCTION 1431163ac DelayLoad_vx_req_account_set_login_properties_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_account_set_login_properties_create(void)

void DelayLoad_vx_req_account_set_login_properties_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431163b8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431163b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_account_set_login_properties_create();
  return;
}



// FUNCTION 1431163be DelayLoad_vx_req_sessiongroup_add_session_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_sessiongroup_add_session_create(void)

void DelayLoad_vx_req_sessiongroup_add_session_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431163ca _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431163ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_sessiongroup_add_session_create();
  return;
}



// FUNCTION 1431163d0 DelayLoad_vx_req_sessiongroup_remove_session_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_sessiongroup_remove_session_create(void)

void DelayLoad_vx_req_sessiongroup_remove_session_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431163dc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431163dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_sessiongroup_remove_session_create();
  return;
}



// FUNCTION 1431163e2 DelayLoad_vx_req_sessiongroup_set_tx_session_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_sessiongroup_set_tx_session_create(void)

void DelayLoad_vx_req_sessiongroup_set_tx_session_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 1431163ee _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431163ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_sessiongroup_set_tx_session_create();
  return;
}



// FUNCTION 1431163f4 DelayLoad_vx_req_sessiongroup_set_tx_all_sessions_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_sessiongroup_set_tx_all_sessions_create(void)

void DelayLoad_vx_req_sessiongroup_set_tx_all_sessions_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116400 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_sessiongroup_set_tx_all_sessions_create();
  return;
}



// FUNCTION 143116406 DelayLoad_vx_req_sessiongroup_set_tx_no_session_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_sessiongroup_set_tx_no_session_create(void)

void DelayLoad_vx_req_sessiongroup_set_tx_no_session_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116412 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_sessiongroup_set_tx_no_session_create();
  return;
}



// FUNCTION 143116418 DelayLoad_vx_req_sessiongroup_control_audio_injection_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_sessiongroup_control_audio_injection_create(void)

void DelayLoad_vx_req_sessiongroup_control_audio_injection_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116424 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_sessiongroup_control_audio_injection_create();
  return;
}



// FUNCTION 14311642a DelayLoad_vx_req_session_media_connect_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_session_media_connect_create(void)

void DelayLoad_vx_req_session_media_connect_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116436 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_session_media_connect_create();
  return;
}



// FUNCTION 14311643c DelayLoad_vx_req_session_media_disconnect_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_session_media_disconnect_create(void)

void DelayLoad_vx_req_session_media_disconnect_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 143116448 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143116448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_session_media_disconnect_create();
  return;
}



// FUNCTION 14311644e DelayLoad_vx_req_session_text_connect_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_session_text_connect_create(void)

void DelayLoad_vx_req_session_text_connect_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 14311645a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311645a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_session_text_connect_create();
  return;
}



// FUNCTION 143116460 DelayLoad_vx_req_session_text_disconnect_create body=12 status=ok
// SIG undefined DelayLoad_vx_req_session_text_disconnect_create(void)

void DelayLoad_vx_req_session_text_disconnect_create(void)

{
  FUN_1431161b9();
  return;
}



// FUNCTION 14311646c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014311646c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vx_req_session_text_disconnect_create();
  return;
}


