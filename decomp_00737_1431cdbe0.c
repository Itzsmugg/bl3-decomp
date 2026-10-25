// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431cdbe0 FUN_1431cdbe0 body=82 status=ok
// SIG undefined FUN_1431cdbe0(void)

void FUN_1431cdbe0(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1431cdc40();
  if ((param_2 == '\0') || (cVar1 != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1431cdc40(param_1,uVar2,param_3,param_1 + 0x78);
  return;
}



// FUNCTION 1431cdc40 FUN_1431cdc40 body=304 status=ok
// SIG undefined FUN_1431cdc40(void)

undefined8 FUN_1431cdc40(longlong param_1,char param_2,char param_3,longlong param_4)

{
  long lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  plVar6 = *(longlong **)(param_4 + 8);
  plVar3 = (longlong *)0x0;
  plVar8 = plVar3;
  if (plVar6 != (longlong *)0x0) {
    do {
      plVar4 = plVar6;
      if ((char)plVar6[0xf] == '\0') {
        if ((param_2 != '\0') &&
           (((plVar8 == (longlong *)0x0 ||
             (*(char *)((longlong)plVar6 + 0x74) < *(char *)((longlong)plVar8 + 0x74))) &&
            (*(char *)((longlong)plVar6 + 0x74) < param_3)))) {
          EnterCriticalSection((LPCRITICAL_SECTION)(plVar6 + 6));
          cVar2 = *(char *)((longlong)plVar6 + 0x7c);
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar6 + 6));
          if (cVar2 != '\0') {
            plVar8 = plVar6;
          }
        }
        plVar7 = (longlong *)plVar6[3];
      }
      else {
        cVar2 = (**(code **)(*plVar6 + 8))(plVar6);
        plVar7 = (longlong *)plVar6[3];
        if (cVar2 != '\0') {
          if (plVar6 == *(longlong **)(param_4 + 8)) {
            *(longlong **)(param_4 + 8) = plVar7;
          }
          else {
            plVar3[3] = (longlong)plVar7;
          }
          lVar1 = DAT_1467be440;
          plVar4 = plVar3;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)*plVar6)(plVar6,0);
            AK::MemoryMgr::Free(lVar1,plVar6);
          }
        }
      }
      plVar3 = plVar4;
      plVar6 = plVar7;
    } while (plVar7 != (longlong *)0x0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      uVar5 = 1;
      goto LAB_1431cdd56;
    }
  }
  uVar5 = 0;
LAB_1431cdd56:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar5;
}



// FUNCTION 1431cdd80 GetBuffer body=378 status=ok
// SIG undefined GetBuffer(void)

undefined8
AK::StreamMgr::CAkAutoStmBase::GetBuffer
          (longlong param_1,longlong *param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  lVar2 = GetReadBuffer(param_1 + -0x80,param_3);
  *param_2 = lVar2;
  if ((lVar2 != 0) || (*(char *)(param_1 + 0x53) != '\0')) goto LAB_1431cde80;
  if (*(char *)(param_1 + -7) == '\0') {
LAB_1431cde25:
    lVar2 = 0;
    if (param_4 == '\0') goto LAB_1431cde80;
  }
  else {
    lVar2 = GetReadBuffer(param_1 + -0x80,param_3);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + -0x20) + 0x50))
                        (*(longlong **)(param_1 + -0x20),param_1 + -0x80);
      if (cVar1 != '\0') {
        lVar2 = GetReadBuffer(param_1 + -0x80,param_3);
        *param_2 = lVar2;
      }
      if (*param_2 != 0) goto LAB_1431cde80;
      goto LAB_1431cde25;
    }
  }
  while (((lVar2 == 0 && (*(char *)(param_1 + 0x53) == '\0')) &&
         ((*(char *)(param_1 + -6) != '\0' || (*(int *)(param_1 + 0x28) != 0))))) {
    CAkClientThreadAware::SetBlockedStatus(param_1 + -0x80);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    CAkIOThread::WaitForIOCompletion(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    lVar2 = GetReadBuffer(param_1 + -0x80,param_3);
    *param_2 = lVar2;
  }
LAB_1431cde80:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if (*(char *)(param_1 + 0x53) == '\0') {
    if (*param_2 == 0) {
      if ((*(char *)(param_1 + -9) == '\0') ||
         (*(ulonglong *)(param_1 + 8) < **(ulonglong **)(param_1 + -0x58))) {
        uVar3 = 0x2e;
      }
      else {
        uVar3 = 0x11;
      }
    }
    else if ((*(char *)(param_1 + -9) == '\0') ||
            (uVar3 = 0x11, *(ulonglong *)(param_1 + 8) < **(ulonglong **)(param_1 + -0x58))) {
      uVar3 = 0x2d;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 1431cdfb0 GetPosition body=115 status=ok
// SIG undefined GetPosition(void)

ulonglong AK::StreamMgr::CAkAutoStmBase::GetPosition(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    uVar2 = *(ulonglong *)(param_1 + 8);
  }
  else {
    uVar2 = (ulonglong)*(uint *)(lVar1 + 0x10) + **(longlong **)(lVar1 + 8);
  }
  if (param_2 != 0) {
    *(bool *)param_2 = **(ulonglong **)(param_1 + -0x58) <= uVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar2;
}



// FUNCTION 1431ce040 GetReadBuffer body=288 status=ok
// SIG undefined GetReadBuffer(void)

longlong AK::StreamMgr::CAkAutoStmBase::GetReadBuffer(longlong *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  
  bVar1 = *(byte *)(param_1 + 0x1a);
  if (*(uint *)(param_1 + 0x17) <= (uint)bVar1) {
    *param_2 = 0;
    return 0;
  }
  puVar8 = (undefined8 *)param_1[0x19];
  if (bVar1 != 0) {
    uVar6 = (ulonglong)bVar1;
    do {
      puVar8 = (undefined8 *)*puVar8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((ulonglong)*(uint *)(puVar8 + 2) + *(longlong *)puVar8[1] != param_1[0x11]) {
    (**(code **)(*param_1 + 0x88))(param_1,0);
    FUN_1431cda40(param_1);
    *param_2 = 0;
    return 0;
  }
  *(byte *)(param_1 + 0x1a) = bVar1 + 1;
  param_1[0x11] = (ulonglong)*(uint *)((longlong *)puVar8[1] + 3) + *(longlong *)puVar8[1];
  *param_2 = *(int *)(puVar8[1] + 0x18) - *(int *)(puVar8 + 2);
  plVar4 = (longlong *)puVar8[1];
  uVar2 = *(uint *)(puVar8 + 2);
  uVar3 = *(uint *)(param_1 + 0x14);
  lVar5 = *plVar4;
  if ((lVar5 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
     ((ulonglong)uVar3 < (ulonglong)*(uint *)(plVar4 + 3) + lVar5)) {
    iVar7 = (uVar3 - uVar2) - (int)lVar5;
  }
  else {
    iVar7 = (int)plVar4[3] - uVar2;
  }
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] - iVar7;
  UpdateSchedulingStatus(param_1);
  return (ulonglong)*(uint *)(puVar8 + 2) + *(longlong *)(puVar8[1] + 8);
}



// FUNCTION 1431ce160 Init body=307 status=ok
// SIG undefined Init(void)

undefined8
AK::StreamMgr::CAkAutoStmBase::Init
          (longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,float *param_5,
          undefined8 param_6,uint param_7)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  
  *(longlong *)(param_1 + 0x60) = param_2;
  if (*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 0x90) = param_4;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x428) + 0x10))();
  if (((uVar1 == 0) || (param_7 < uVar1)) || (param_7 % uVar1 != 0)) {
    uVar2 = 2;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  else {
    *(uint *)(param_1 + 0x70) = uVar1;
    *(uint *)(param_1 + 0xb0) = uVar1;
    fVar4 = *param_5;
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 0x94) = fVar4;
    *(uint *)(param_1 + 0x9c) = (int)param_5[1] - (uint)param_5[1] % uVar1;
    fVar4 = (float)*param_3;
    if ((longlong)(ulonglong)(uint)param_5[2] <= *param_3) {
      fVar4 = param_5[2];
    }
    *(float *)(param_1 + 0xa0) = fVar4;
    cVar3 = '\x01';
    if (*(char *)(param_5 + 3) != '\0') {
      cVar3 = *(char *)(param_5 + 3);
    }
    *(char *)(param_1 + 0xd1) = cVar3;
    *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)((longlong)param_5 + 0xd);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*param_3 == 0) {
      *(undefined1 *)(param_1 + 0x77) = 1;
      *(undefined1 *)(param_1 + 0x7c) = 0;
    }
    uVar2 = SetBufferingSettings(param_1,param_6,param_7);
    if ((int)uVar2 != 1) {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x78) = 1;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1431ce2a0 Init body=171 status=ok
// SIG undefined Init(void)

undefined8 AK::StreamMgr::CAkDeviceBase::Init(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_2 + 0x14) != 0) &&
      ((*(int *)(param_2 + 8) == 0 ||
       (0.0 < *(float *)(param_2 + 0x28) || *(float *)(param_2 + 0x28) == 0.0)))) &&
     (((*(byte *)(param_2 + 0x18) & 2) == 0 || (*(int *)(param_2 + 0x2c) - 1U < 0x400)))) {
    *(int *)(param_1 + 0x430) = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_2 + 0x28);
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x438) = param_3;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x34);
    iVar2 = FUN_1431d40d0(param_1 + 0xc0,param_2,param_1);
    if (iVar2 != 1) {
      return 2;
    }
    uVar3 = CAkIOThread::Init(param_1,param_2 + 0x1c);
    return uVar3;
  }
  return 0x1f;
}



// FUNCTION 1431ce350 Init body=131 status=ok
// SIG undefined Init(void)

undefined4 AK::StreamMgr::CAkStdStmBase::Init(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  
  *(longlong *)(param_1 + 0x60) = param_2;
  if (*param_3 < 0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    return 0x1f;
  }
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x428) + 0x10))();
  if (((uVar1 != 0) && (uVar1 <= *(uint *)(param_2 + 0x430))) &&
     (*(uint *)(param_2 + 0x430) % uVar1 == 0)) {
    *(uint *)(param_1 + 0x70) = uVar1;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return 2;
}



// FUNCTION 1431ce3e0 Kill body=90 status=ok
// SIG undefined Kill(void)

void AK::StreamMgr::CAkAutoStmBase::Kill(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0xd3) = 1;
  (**(code **)(*(longlong *)(param_1 + 0x80) + 0x68))();
  UpdateSchedulingStatus(param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    CAkIOThread::SignalIOCompleted(*(undefined8 *)(param_1 + 0x60),param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ce433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1431ce440 Kill body=147 status=ok
// SIG undefined Kill(void)

void AK::StreamMgr::CAkStdStmBase::Kill(longlong *param_1)

{
  char cVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  *(undefined4 *)(param_1 + 0x17) = 4;
  if ((char)param_1[0xf] != '\0') {
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
        CAkIOThread::StdSemIncr(param_1[0xc]);
      }
      goto LAB_1431ce4a0;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
    CAkIOThread::StdSemDecr(param_1[0xc]);
  }
LAB_1431ce4a0:
  if (((char)param_1[2] != '\0') && ((*(uint *)(param_1 + 0x17) & 0xfffffffd) != 0)) {
    CAkIOThread::SignalIOCompleted(param_1[0xc],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ce4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return;
}



// FUNCTION 1431ce4e0 OnFileDeferredOpen body=95 status=ok
// SIG undefined OnFileDeferredOpen(void)

void AK::StreamMgr::CAkAutoStmBase::OnFileDeferredOpen(longlong param_1)

{
  undefined1 local_18 [8];
  undefined4 local_10;
  
  *(undefined1 *)(param_1 + 0x79) = 1;
  if (**(longlong **)(param_1 + 0x28) < (longlong)(ulonglong)*(uint *)(param_1 + 0xa0)) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x20))(param_1 + 0x80,local_18);
    local_10 = **(undefined4 **)(param_1 + 0x28);
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x28))(param_1 + 0x80,local_18);
  }
  return;
}



// FUNCTION 1431ce550 QueryBufferingStatus body=258 status=ok
// SIG undefined QueryBufferingStatus(void)

undefined4 AK::StreamMgr::CAkAutoStmBase::QueryBufferingStatus(longlong param_1,uint *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x53) != '\0') {
    return 2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  uVar4 = 0x2e;
  if (*(char *)(param_1 + -7) != '\0') {
    do {
      *param_2 = 0;
      uVar4 = 0x2e;
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      if (*(byte *)(param_1 + 0x50) != 0) {
        uVar3 = (ulonglong)*(byte *)(param_1 + 0x50);
        do {
          puVar2 = (undefined8 *)*puVar2;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (puVar2 != (undefined8 *)0x0) {
        uVar4 = 0x2d;
        do {
          *param_2 = *param_2 + (*(int *)(puVar2[1] + 0x18) - *(int *)(puVar2 + 2));
          puVar2 = (undefined8 *)*puVar2;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if ((*(char *)(param_1 + -6) == '\0') && (*(uint *)(param_1 + 0x28) <= *param_2))
      goto LAB_1431ce61d;
      cVar1 = (**(code **)(**(longlong **)(param_1 + -0x20) + 0x50))
                        (*(longlong **)(param_1 + -0x20),param_1 + -0x80);
    } while (cVar1 != '\0');
    if (*(char *)(*(longlong *)(param_1 + -0x20) + 0x68) != '\0') {
LAB_1431ce61d:
      uVar4 = 0x11;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar4;
}



// FUNCTION 1431ce660 Read body=65 status=ok
// SIG undefined Read(void)

void AK::StreamMgr::CAkStdStmBase::Read
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
               undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  ExecuteOp(param_1 + -0x80,0,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1431ce6b0 FUN_1431ce6b0 body=207 status=ok
// SIG undefined FUN_1431ce6b0(void)

undefined8 FUN_1431ce6b0(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar5 = 2;
  }
  else {
    lVar1 = *(longlong *)(param_1 + -0x20);
    pvVar2 = *(void **)(param_1 + 0x48);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      lVar4 = **(longlong **)(param_1 + 0x48);
      if (lVar4 == 0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        lVar4 = 0;
      }
      *(longlong *)(param_1 + 0x48) = lVar4;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    }
    lVar4 = *(longlong *)((longlong)pvVar2 + 8);
    lVar3 = *(longlong *)(param_1 + -0x20);
    *(undefined8 *)((longlong)pvVar2 + 8) = 0;
    if (lVar4 != 0) {
      FUN_1431d4410(lVar3 + 0xc0);
    }
    AK::MemoryMgr::Free(DAT_1467be440,pvVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    *(char *)(param_1 + 0x50) = *(char *)(param_1 + 0x50) + -1;
    AK::StreamMgr::CAkAutoStmBase::UpdateSchedulingStatus(param_1 + -0x80);
    uVar5 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar5;
}



// FUNCTION 1431ce780 FUN_1431ce780 body=345 status=ok
// SIG undefined FUN_1431ce780(void)

longlong * FUN_1431ce780(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar13 = (longlong *)0x0;
  plVar12 = plVar13;
  if ((param_2 != 0) && (plVar12 = (longlong *)0x0, *(int *)(param_1 + 0xb8) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x18));
    plVar4 = *(longlong **)(param_1 + 0xc0);
    plVar12 = plVar13;
    while ((plVar4 != (longlong *)0x0 && ((uint)plVar12 < param_2))) {
      plVar5 = *(longlong **)(param_1 + 200);
      plVar12 = (longlong *)
                (ulonglong)((uint)plVar12 + (*(int *)(plVar4[1] + 0x18) - (int)plVar4[2]));
      plVar8 = plVar5;
      plVar9 = plVar5;
      plVar11 = plVar13;
      if (plVar5 == (longlong *)0x0) {
LAB_1431ce812:
        if (plVar9 != (longlong *)0x0) {
          if (plVar9 == plVar5) {
            *(longlong *)(param_1 + 200) = *plVar9;
          }
          else {
            *plVar11 = *plVar9;
          }
          if (plVar9 == *(longlong **)(param_1 + 0xc0)) {
            *(longlong **)(param_1 + 0xc0) = plVar11;
          }
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
        }
      }
      else {
        do {
          plVar9 = plVar8;
          if (plVar9 == plVar4) goto LAB_1431ce812;
          plVar8 = (longlong *)*plVar9;
          plVar11 = plVar9;
        } while ((longlong *)*plVar9 != (longlong *)0x0);
      }
      plVar5 = (longlong *)plVar4[1];
      uVar1 = *(uint *)(plVar4 + 2);
      uVar2 = *(uint *)(param_1 + 0xa0);
      lVar6 = *plVar5;
      if ((lVar6 + (ulonglong)uVar1 < (ulonglong)uVar2) &&
         ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar5 + 3) + lVar6)) {
        iVar10 = (uVar2 - uVar1) - (int)lVar6;
      }
      else {
        iVar10 = (int)plVar5[3] - uVar1;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar10;
      lVar6 = plVar4[1];
      lVar7 = *(longlong *)(param_1 + 0x60);
      plVar4[1] = 0;
      if (lVar6 != 0) {
        FUN_1431d4410(lVar7 + 0xc0);
      }
      AK::MemoryMgr::Free(DAT_1467be440,plVar4);
      plVar4 = *(longlong **)(param_1 + 0xc0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x18));
  }
  return plVar12;
}



// FUNCTION 1431ce8e0 FUN_1431ce8e0 body=573 status=ok
// SIG undefined FUN_1431ce8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1431ce8e0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  long lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  plVar5 = (longlong *)0x0;
  do {
    while( true ) {
      plVar2 = plVar5;
      plVar7 = plVar1;
      if (plVar7 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      plVar5 = plVar7;
      if ((char)plVar7[0xf] == '\0') break;
      cVar6 = (**(code **)(*plVar7 + 8))(plVar7);
      plVar1 = (longlong *)plVar7[3];
      if (cVar6 != '\0') {
        if (plVar7 == *(longlong **)(param_1 + 0x80)) {
          *(longlong **)(param_1 + 0x80) = plVar1;
        }
        else {
          plVar2[3] = (longlong)plVar1;
        }
        lVar4 = DAT_1467be440;
        plVar5 = plVar2;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)*plVar7)(plVar7,0);
          AK::MemoryMgr::Free(lVar4,plVar7);
        }
      }
    }
    if (*(char *)((longlong)plVar7 + 0x75) == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 6));
      cVar6 = *(char *)((longlong)plVar7 + 0x7c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 6));
      if (cVar6 != '\0') {
        fVar8 = (float)(**(code **)(*plVar7 + 0x30))(plVar7);
        plVar1 = (longlong *)plVar7[3];
        break;
      }
    }
    plVar1 = (longlong *)plVar7[3];
  } while( true );
joined_r0x0001431ce9d8:
  while( true ) {
    plVar3 = plVar5;
    plVar2 = plVar1;
    if (plVar2 == (longlong *)0x0) {
      *param_2 = fVar8;
      return plVar7;
    }
    plVar5 = plVar2;
    if ((char)plVar2[0xf] == '\0') break;
    cVar6 = (**(code **)(*plVar2 + 8))(plVar2);
    plVar1 = (longlong *)plVar2[3];
    if (cVar6 != '\0') {
      if (plVar2 == *(longlong **)(param_1 + 0x80)) {
        *(longlong **)(param_1 + 0x80) = plVar1;
      }
      else {
        plVar3[3] = (longlong)plVar1;
      }
      lVar4 = DAT_1467be440;
      plVar5 = plVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,0);
        AK::MemoryMgr::Free(lVar4,plVar2);
      }
    }
  }
  if (*(char *)((longlong)plVar2 + 0x75) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
    cVar6 = *(char *)((longlong)plVar2 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
    if (cVar6 != '\0') {
      fVar9 = (float)(**(code **)(*plVar2 + 0x30))(plVar2);
      if (fVar9 == 0.0) {
        if (((*(char *)((longlong)plVar7 + 0x74) < *(char *)((longlong)plVar2 + 0x74)) ||
            (0.0 < fVar8)) ||
           ((*(char *)((longlong)plVar2 + 0x74) == *(char *)((longlong)plVar7 + 0x74) &&
            ((float)(*(longlong *)(param_1 + 0x70) - plVar7[0xb]) * (1.0 / _DAT_146b51f08) <
             (float)(*(longlong *)(param_1 + 0x70) - plVar2[0xb]) * (1.0 / _DAT_146b51f08))))) {
LAB_1431ceae4:
          plVar7 = plVar2;
          fVar8 = fVar9;
        }
      }
      else if (fVar9 < fVar8) goto LAB_1431ceae4;
    }
  }
  plVar1 = (longlong *)plVar2[3];
  goto joined_r0x0001431ce9d8;
}



// FUNCTION 1431ceb20 FUN_1431ceb20 body=499 status=ok
// SIG undefined FUN_1431ceb20(void)

longlong * FUN_1431ceb20(longlong param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  
  plVar11 = (longlong *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  plVar9 = *(longlong **)(param_1 + 0x90);
  iVar10 = 0;
  bVar1 = false;
  plVar7 = (longlong *)0x0;
  if (plVar9 != (longlong *)0x0) {
    do {
      if (((char)plVar9[0xf] == '\0') || (cVar3 = (**(code **)(*plVar9 + 8))(plVar9), cVar3 == '\0')
         ) {
        iVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
        plVar8 = (longlong *)plVar9[3];
        iVar10 = iVar10 + iVar4;
        plVar7 = plVar9;
      }
      else {
        plVar8 = (longlong *)plVar9[3];
        if (plVar9 == *(longlong **)(param_1 + 0x90)) {
          *(longlong **)(param_1 + 0x90) = plVar8;
        }
        else {
          plVar7[3] = (longlong)plVar8;
        }
        lVar2 = DAT_1467be440;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)*plVar9)(plVar9,0);
          AK::MemoryMgr::Free(lVar2,plVar9);
        }
        bVar1 = true;
      }
      plVar9 = plVar8;
    } while (plVar8 != (longlong *)0x0);
    plVar9 = *(longlong **)(param_1 + 0x90);
    if (plVar9 != (longlong *)0x0) {
      do {
        if (bVar1) {
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        if ((*(char *)((longlong)plVar9 + 0x7a) != '\0') &&
           ((plVar11 == (longlong *)0x0 ||
            (*(char *)((longlong)plVar11 + 0x74) < *(char *)((longlong)plVar9 + 0x74))))) {
          plVar11 = plVar9;
        }
        plVar9 = (longlong *)plVar9[3];
      } while (plVar9 != (longlong *)0x0);
      if (plVar11 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar11 + 0x48))(plVar11);
        iVar5 = (**(code **)(*plVar11 + 0x40))(plVar11);
        iVar5 = iVar5 - iVar4;
        if (*(uint *)(param_1 + 0x43c) < (uint)(iVar5 + iVar10)) {
          do {
            plVar9 = *(longlong **)(param_1 + 0x90);
            plVar7 = (longlong *)0x0;
            if (plVar9 == (longlong *)0x0) {
LAB_1431cecc2:
              uVar6 = *(uint *)(param_1 + 0x43c);
            }
            else {
              do {
                iVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
                if (((iVar4 != 0) &&
                    (*(char *)((longlong)plVar9 + 0x74) < *(char *)((longlong)plVar11 + 0x74))) &&
                   ((plVar7 == (longlong *)0x0 ||
                    (*(char *)((longlong)plVar9 + 0x74) < *(char *)((longlong)plVar7 + 0x74))))) {
                  plVar7 = plVar9;
                }
                plVar9 = (longlong *)plVar9[3];
              } while (plVar9 != (longlong *)0x0);
              if (plVar7 == (longlong *)0x0) goto LAB_1431cecc2;
              iVar4 = (**(code **)(*plVar7 + 0x58))(plVar7,iVar5);
              uVar6 = *(uint *)(param_1 + 0x43c);
              iVar10 = iVar10 - iVar4;
              if ((uint)(iVar5 + iVar10) <= uVar6) break;
            }
          } while (plVar7 != (longlong *)0x0);
          if (uVar6 < (uint)(iVar5 + iVar10)) {
            (**(code **)(*plVar11 + 0x58))(plVar11,0);
            plVar11 = (longlong *)0x0;
          }
        }
      }
    }
  }
  *(int *)(param_1 + 0x440) = iVar10;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return plVar11;
}



// FUNCTION 1431ced20 FUN_1431ced20 body=708 status=ok
// SIG undefined FUN_1431ced20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1431ced20(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  long lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x70));
  if (*(char *)(param_1 + 0x68) != '\0') {
    plVar8 = (longlong *)FUN_1431ce8e0(param_1,param_2);
    goto LAB_1431cefc8;
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  plVar5 = (longlong *)0x0;
  while (plVar2 = plVar5, plVar8 = plVar1, plVar8 != (longlong *)0x0) {
    plVar5 = plVar8;
    if ((char)plVar8[0xf] == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar8 + 6));
      cVar6 = *(char *)((longlong)plVar8 + 0x7c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar8 + 6));
      if (cVar6 != '\0') {
        fVar9 = (float)(**(code **)(*plVar8 + 0x30))(plVar8);
        cVar6 = *(char *)((longlong)plVar8 + 0x7a);
        plVar1 = (longlong *)plVar8[3];
        goto joined_r0x0001431cee47;
      }
      plVar1 = (longlong *)plVar8[3];
    }
    else {
      cVar6 = (**(code **)(*plVar8 + 8))(plVar8);
      plVar1 = (longlong *)plVar8[3];
      if (cVar6 != '\0') {
        if (plVar8 == *(longlong **)(param_1 + 0x80)) {
          *(longlong **)(param_1 + 0x80) = plVar1;
        }
        else {
          plVar2[3] = (longlong)plVar1;
        }
        lVar4 = DAT_1467be440;
        plVar5 = plVar2;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)*plVar8)(plVar8,0);
          AK::MemoryMgr::Free(lVar4,plVar8);
        }
      }
    }
  }
  goto LAB_1431cefad;
joined_r0x0001431cee47:
  plVar3 = plVar5;
  plVar2 = plVar1;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
    if ((char)plVar2[0xf] == '\0') {
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
      cVar7 = *(char *)((longlong)plVar2 + 0x7c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 6));
      if (cVar7 != '\0') {
        fVar10 = (float)(**(code **)(*plVar2 + 0x30))(plVar2);
        cVar7 = *(char *)((longlong)plVar2 + 0x7a);
        if (cVar6 == '\0') {
          if (cVar7 == '\0') {
LAB_1431cef0f:
            if (fVar10 == 0.0) {
              if (((*(char *)((longlong)plVar8 + 0x74) < *(char *)((longlong)plVar2 + 0x74)) ||
                  (0.0 < fVar9)) ||
                 ((*(char *)((longlong)plVar2 + 0x74) == *(char *)((longlong)plVar8 + 0x74) &&
                  ((float)(*(longlong *)(param_1 + 0x70) - plVar8[0xb]) * (1.0 / _DAT_146b51f08) <
                   (float)(*(longlong *)(param_1 + 0x70) - plVar2[0xb]) * (1.0 / _DAT_146b51f08)))))
              goto LAB_1431cef6e;
            }
            else if (fVar10 < fVar9) goto LAB_1431cef6e;
          }
          else {
            cVar7 = '\x01';
LAB_1431cef6e:
            cVar6 = cVar7;
            plVar8 = plVar2;
            fVar9 = fVar10;
          }
        }
        else if (cVar7 != '\0') goto LAB_1431cef0f;
      }
      plVar1 = (longlong *)plVar2[3];
    }
    else {
      cVar7 = (**(code **)(*plVar2 + 8))(plVar2);
      plVar1 = (longlong *)plVar2[3];
      if (cVar7 != '\0') {
        if (plVar2 == *(longlong **)(param_1 + 0x80)) {
          *(longlong **)(param_1 + 0x80) = plVar1;
        }
        else {
          plVar3[3] = (longlong)plVar1;
        }
        lVar4 = DAT_1467be440;
        plVar5 = plVar3;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,0);
          AK::MemoryMgr::Free(lVar4,plVar2);
        }
      }
    }
    goto joined_r0x0001431cee47;
  }
  *param_2 = fVar9;
  if (cVar6 != '\0') goto LAB_1431cefc8;
LAB_1431cefad:
  plVar8 = (longlong *)FUN_1431ceb20(param_1);
LAB_1431cefc8:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return plVar8;
}



// FUNCTION 1431ceff0 SetBufferingSettings body=373 status=ok
// SIG undefined SetBufferingSettings(void)

undefined8
AK::StreamMgr::CAkAutoStmBase::SetBufferingSettings(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_2 == (uint *)0x0) {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0xa4) = param_3 - param_3 % *(uint *)(param_1 + 0x70);
    return 1;
  }
  uVar3 = param_2[2];
  if (uVar3 == 0) {
    uVar6 = *(uint *)(param_1 + 0xb0);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x70);
    uVar1 = uVar6;
    if (uVar3 <= uVar6) {
      uVar1 = uVar3;
    }
    uVar8 = (ulonglong)uVar1;
    uVar7 = uVar3;
    if (uVar3 <= uVar6) {
      uVar7 = uVar6;
    }
    uVar5 = (ulonglong)uVar7 % uVar8;
    if ((uint)uVar5 != 0) {
      bVar2 = 0;
      uVar1 = uVar1 | (uint)uVar5;
      while ((uVar1 & 1) == 0) {
        uVar8 = uVar8 >> 1;
        bVar2 = bVar2 + 1;
        uVar5 = uVar5 >> 1;
        uVar1 = (uint)uVar8 | (uint)uVar5;
      }
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1) {
      }
      uVar1 = (uint)uVar8;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1) {
      }
      if (uVar1 != (uint)uVar5) {
        do {
          uVar4 = (uint)uVar5;
          uVar7 = (uint)uVar8;
          uVar1 = uVar4;
          if (uVar4 <= uVar7) {
            uVar1 = uVar7;
            uVar7 = uVar4;
          }
          uVar1 = uVar1 - uVar7 >> 1;
          uVar8 = (ulonglong)uVar1;
          if ((uVar1 & 1) == 0) {
            do {
              uVar8 = uVar8 >> 1;
            } while ((uVar8 & 1) == 0);
          }
          uVar5 = (ulonglong)uVar7;
          uVar1 = (uint)uVar8;
        } while (uVar1 != uVar7);
      }
      uVar8 = (ulonglong)(uVar1 << (bVar2 & 0x1f));
    }
    uVar6 = (int)(uVar3 / uVar8) * uVar6;
    *(uint *)(param_1 + 0xb0) = uVar6;
  }
  *(uint *)(param_1 + 0xac) = uVar6;
  uVar1 = param_3 - param_3 % uVar6;
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar3 = *param_2;
  if (uVar3 == 0) {
    uVar3 = param_2[1];
    if (uVar3 == 0) {
      return 1;
    }
    if (uVar3 <= uVar6) {
      return 1;
    }
    uVar3 = (uVar3 - 1) + uVar6;
    uVar3 = uVar3 - uVar3 % uVar6;
    *(uint *)(param_1 + 0xac) = uVar3;
    if (uVar3 <= uVar1) {
      return 1;
    }
  }
  else if ((uVar3 <= param_3) && (uVar3 % uVar6 == 0)) {
    *(uint *)(param_1 + 0xa4) = uVar3;
    *(uint *)(param_1 + 0xac) = *param_2;
    return 1;
  }
  return 2;
}



// FUNCTION 1431cf1a0 SetDeferredFileOpen body=53 status=ok
// SIG undefined SetDeferredFileOpen(void)

int AK::StreamMgr::CAkStmTask::SetDeferredFileOpen
              (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x79) = 0;
  lVar1 = AkDeferredOpenData::Create(param_3,param_4,param_5);
  *(longlong *)(param_1 + 0x20) = lVar1;
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 1431cf1e0 SetDeferredFileOpen body=54 status=ok
// SIG undefined SetDeferredFileOpen(void)

int AK::StreamMgr::CAkStmTask::SetDeferredFileOpen
              (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x79) = 0;
  lVar1 = AkDeferredOpenData::Create(param_3,param_4,param_5);
  *(longlong *)(param_1 + 0x20) = lVar1;
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 1431cf220 FUN_1431cf220 body=729 status=ok
// SIG undefined FUN_1431cf220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1431cf220(longlong param_1,float *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  char cVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  float fVar19;
  
  if (100 < *(byte *)((longlong)param_2 + 0xd)) {
    return 0x1f;
  }
  *(byte *)(param_1 + -0xc) = *(byte *)((longlong)param_2 + 0xd);
  fVar19 = *param_2;
  uVar12 = **(ulonglong **)(param_1 + -0x58);
  if (fVar19 <= 1.0) {
    fVar19 = 1.0;
  }
  if (((longlong)(ulonglong)(uint)param_2[2] <= (longlong)uVar12) ||
     (*(char *)(param_1 + -7) == '\0')) {
    uVar12 = (ulonglong)(uint)param_2[2];
  }
  iVar8 = (int)uVar12;
  if ((*(int *)(param_1 + 0x20) == iVar8) && (*(float *)(param_1 + 0x1c) == param_2[1])) {
    cVar13 = '\x01';
    if (*(char *)(param_2 + 3) != '\0') {
      cVar13 = *(char *)(param_2 + 3);
    }
    if ((fVar19 != *(float *)(param_1 + 0x14)) || (*(char *)(param_1 + 0x51) != cVar13)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
      *(float *)(param_1 + 0x14) = fVar19;
      *(char *)(param_1 + 0x51) = cVar13;
      AK::StreamMgr::CAkAutoStmBase::UpdateSchedulingStatus(param_1 + -0x80);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    *(float *)(param_1 + 0x14) = fVar19;
    plVar1 = (longlong *)(param_1 + -0x80);
    cVar13 = '\x01';
    if (*(char *)(param_2 + 3) != '\0') {
      cVar13 = *(char *)(param_2 + 3);
    }
    *(char *)(param_1 + 0x51) = cVar13;
    uVar18 = (int)param_2[1] - (uint)param_2[1] % *(uint *)(param_1 + -0x10);
    *(uint *)(param_1 + 0x1c) = uVar18;
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar12 & 0xffffffff);
    puVar17 = (undefined8 *)0x0;
    uVar14 = *(ulonglong *)(param_1 + 8);
    puVar9 = *(undefined8 **)(param_1 + 0x48);
    puVar11 = puVar17;
    if (*(byte *)(param_1 + 0x50) != 0) {
      uVar15 = (ulonglong)*(byte *)(param_1 + 0x50);
      do {
        puVar11 = puVar9;
        puVar9 = (undefined8 *)*puVar11;
        uVar14 = (ulonglong)*(uint *)((longlong *)puVar11[1] + 3) + *(longlong *)puVar11[1];
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if ((iVar8 != 0) && ((uVar12 & 0xffffffff) <= uVar14)) {
      uVar14 = (ulonglong)uVar18;
    }
    puVar16 = puVar17;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        lVar3 = *(longlong *)puVar9[1];
        if ((ulonglong)*(uint *)(puVar9 + 2) + lVar3 == uVar14) {
          uVar14 = (ulonglong)*(uint *)((longlong *)puVar9[1] + 3) + lVar3;
          if ((iVar8 != 0) && ((uVar12 & 0xffffffff) <= uVar14)) {
            uVar14 = (ulonglong)uVar18;
          }
          puVar10 = (undefined8 *)*puVar9;
          puVar11 = puVar9;
        }
        else {
          puVar10 = (undefined8 *)*puVar9;
          if (puVar9 == *(undefined8 **)(param_1 + 0x48)) {
            *(undefined8 **)(param_1 + 0x48) = puVar10;
          }
          else {
            *puVar11 = puVar10;
          }
          if (puVar9 == *(undefined8 **)(param_1 + 0x40)) {
            *(undefined8 **)(param_1 + 0x40) = puVar11;
          }
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          puVar7 = puVar17;
          if (puVar16 != (undefined8 *)0x0) {
            puVar7 = puVar16;
          }
          *puVar9 = puVar7;
          puVar16 = puVar9;
        }
        puVar9 = puVar10;
      } while (puVar10 != (undefined8 *)0x0);
      if (puVar16 != (undefined8 *)0x0) {
        lVar3 = *(longlong *)(param_1 + -0x20);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x18));
        puVar9 = puVar16;
        do {
          puVar11 = (undefined8 *)*puVar9;
          puVar17 = puVar11;
          if (puVar9 == puVar16) {
            puVar16 = puVar11;
            puVar17 = _DAT_00000000;
          }
          _DAT_00000000 = puVar17;
          plVar4 = (longlong *)puVar9[1];
          uVar18 = *(uint *)(puVar9 + 2);
          uVar2 = *(uint *)(param_1 + 0x20);
          lVar5 = *plVar4;
          if ((lVar5 + (ulonglong)uVar18 < (ulonglong)uVar2) &&
             ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar4 + 3) + lVar5)) {
            iVar8 = (uVar2 - uVar18) - (int)lVar5;
          }
          else {
            iVar8 = (int)plVar4[3] - uVar18;
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar8;
          lVar5 = puVar9[1];
          lVar6 = *(longlong *)(param_1 + -0x20);
          puVar9[1] = 0;
          if (lVar5 != 0) {
            FUN_1431d4410(lVar6 + 0xc0);
          }
          AK::MemoryMgr::Free(DAT_1467be440,puVar9);
          puVar9 = puVar11;
        } while (puVar11 != (undefined8 *)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x18));
      }
    }
    (**(code **)(*plVar1 + 0x78))(plVar1,uVar14);
    AK::StreamMgr::CAkAutoStmBase::UpdateSchedulingStatus(plVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  }
  return 1;
}



// FUNCTION 1431cf510 SetMinimalBufferSize body=203 status=ok
// SIG undefined SetMinimalBufferSize(void)

int AK::StreamMgr::CAkAutoStmBase::SetMinimalBufferSize(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x2c);
  local_28 = 0;
  local_20 = 0;
  local_24 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  iVar2 = SetBufferingSettings(param_1 + -0x10,&local_28,*(undefined4 *)(param_1[-4] + 0x430));
  if (iVar2 == 1) {
    if (uVar1 < *(uint *)((longlong)param_1 + 0x2c)) {
      (**(code **)(param_1[-0x10] + 0x80))(param_1 + -0x10,param_2);
      UpdateSchedulingStatus(param_1 + -0x10);
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x53) = 1;
    (**(code **)(*param_1 + 0x68))(param_1);
    UpdateSchedulingStatus(param_1 + -0x10);
    if ((char)param_1[-0xe] != '\0') {
      CAkIOThread::SignalIOCompleted(param_1[-4],param_1 + -0x10);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  return iVar2;
}



// FUNCTION 1431cf5e0 SetPosition body=331 status=ok
// SIG undefined SetPosition(void)

undefined8
AK::StreamMgr::CAkAutoStmBase::SetPosition
          (longlong *param_1,longlong param_2,int param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar2 = (**(code **)(*param_1 + 0x70))(param_1,0);
      param_2 = param_2 + lVar2;
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      param_2 = param_2 + *(longlong *)param_1[-0xb];
    }
  }
  if (param_2 < 0) {
    return 0x1f;
  }
  lVar2 = param_2 - param_2 % (longlong)(ulonglong)*(uint *)(param_1 + -2);
  if (param_2 % (longlong)(ulonglong)*(uint *)(param_1 + -2) == 0) {
    lVar2 = param_2;
  }
  if (param_4 != (longlong *)0x0) {
    if (param_3 == 0) {
      *param_4 = lVar2;
    }
    else if (param_3 == 1) {
      lVar3 = (**(code **)(*param_1 + 0x70))(param_1,0);
      *param_4 = lVar2 - lVar3;
    }
    else if (param_3 == 2) {
      *param_4 = lVar2 - *(longlong *)param_1[-0xb];
    }
  }
  plVar6 = param_1 + -0x10;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  bVar1 = *(byte *)(param_1 + 10);
  uVar5 = (ulonglong)bVar1;
  param_1[1] = lVar2;
  if ((uint)bVar1 < *(uint *)(param_1 + 7)) {
    plVar4 = (longlong *)param_1[9];
    if (bVar1 != 0) {
      do {
        plVar4 = (longlong *)*plVar4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if ((ulonglong)*(uint *)(plVar4 + 2) + *(longlong *)plVar4[1] != lVar2) {
      FUN_1431cda40();
      goto LAB_1431cf6fa;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x78))(plVar6,lVar2);
  }
  UpdateSchedulingStatus(plVar6);
LAB_1431cf6fa:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -10));
  return 1;
}



// FUNCTION 1431cf730 FUN_1431cf730 body=227 status=ok
// SIG undefined FUN_1431cf730(void)

undefined8 FUN_1431cf730(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(param_1 + 0x38) == 2) {
    return 2;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      param_2 = param_2 + *(longlong *)(param_1 + 8);
    }
    else {
      if (param_3 != 2) {
        return 0x1f;
      }
      param_2 = param_2 + **(longlong **)(param_1 + -0x58);
    }
  }
  if (-1 < param_2) {
    lVar1 = param_2 % (longlong)(ulonglong)*(uint *)(param_1 + -0x10);
    lVar2 = param_2 - lVar1;
    if (lVar1 == 0) {
      lVar2 = param_2;
    }
    if (param_4 != (longlong *)0x0) {
      if (param_3 != 0) {
        if (param_3 == 1) {
          *param_4 = lVar2 - *(longlong *)(param_1 + 8);
          *(longlong *)(param_1 + 8) = lVar2;
          return 1;
        }
        if (param_3 != 2) {
          return 2;
        }
        *param_4 = lVar2 - **(longlong **)(param_1 + -0x58);
        *(longlong *)(param_1 + 8) = lVar2;
        return 1;
      }
      *param_4 = lVar2;
    }
    *(longlong *)(param_1 + 8) = lVar2;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1431cf820 SetStatus body=115 status=ok
// SIG undefined SetStatus(void)

void AK::StreamMgr::CAkStdStmBase::SetStatus(longlong *param_1,int param_2)

{
  char cVar1;
  
  *(int *)(param_1 + 0x17) = param_2;
  if (((char)param_1[0xf] == '\0') || (cVar1 = (**(code **)(*param_1 + 8))(), cVar1 == '\0')) {
    cVar1 = *(char *)((longlong)param_1 + 0x7a);
    if (param_2 != 2) {
      *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
      if (cVar1 == '\0') {
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
      CAkIOThread::StdSemDecr(param_1[0xc]);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  }
  else {
    cVar1 = *(char *)((longlong)param_1 + 0x7a);
  }
  if (cVar1 != '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
  CAkIOThread::StdSemIncr(param_1[0xc]);
  return;
}



// FUNCTION 1431cf8a0 FUN_1431cf8a0 body=146 status=ok
// SIG undefined FUN_1431cf8a0(void)

undefined8 FUN_1431cf8a0(longlong param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(void **)(param_1 + -0x18) != (void *)0x0) {
    AK::MemoryMgr::Free(DAT_1467be440,*(void **)(param_1 + -0x18));
  }
  if (param_2 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_2 + lVar2 * 2) != 0);
    lVar3 = lVar3 + 2;
    pvVar1 = AK::MemoryMgr::Malloc(DAT_1467be440,lVar3 * 2);
    *(void **)(param_1 + -0x18) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    AKPLATFORM::SafeStrCpy(pvVar1,param_2,lVar3);
  }
  return 1;
}



// FUNCTION 1431cf940 Start body=144 status=ok
// SIG undefined Start(void)

char AK::StreamMgr::CAkAutoStmBase::Start(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x52) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    *(undefined1 *)(param_1 + 0x52) = 1;
    if ((*(char *)(param_1 + -9) == '\0') && (*(char *)(param_1 + -8) == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + -4) = uVar2;
    UpdateSchedulingStatus(param_1 + -0x80);
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(*(longlong *)(param_1 + -0x20) + 0x70);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    lVar1 = *(longlong *)(param_1 + -0x20);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    CAkIOThread::NotifyMemChange(*(undefined8 *)(param_1 + -0x20));
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  }
  return (*(char *)(param_1 + 0x53) != '\0') + '\x01';
}



// FUNCTION 1431cf9f0 Stop body=66 status=ok
// SIG undefined Stop(void)

undefined8 AK::StreamMgr::CAkAutoStmBase::Stop(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
  FUN_1431cda40(param_1 + -0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return 1;
}



// FUNCTION 1431cfa40 StopCaching body=90 status=ok
// SIG undefined StopCaching(void)

undefined4 AK::StreamMgr::CAkAutoStmBase::StopCaching(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  UpdateSchedulingStatus(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return uVar1;
}



// FUNCTION 1431cfaa0 UpdateCachingPriority body=102 status=ok
// SIG undefined UpdateCachingPriority(void)

void AK::StreamMgr::CAkDeviceBase::UpdateCachingPriority
               (longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  
  if (*(byte *)(param_2 + 0x74) != param_3) {
    if (param_3 < 0x65) {
      *(byte *)(param_2 + 0x74) = param_3;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
    for (plVar1 = *(longlong **)(param_1 + 0x90); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[3]) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 1431cfb10 UpdateSchedulingStatus body=223 status=ok
// SIG undefined UpdateSchedulingStatus(void)

void AK::StreamMgr::CAkAutoStmBase::UpdateSchedulingStatus(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((int)param_1[0x14] == 0) {
    uVar2 = *(ulonglong *)param_1[5];
    uVar6 = (**(code **)(*param_1 + 0x68))();
    if ((uVar6 < uVar2) || (*(char *)((longlong)param_1 + 0x79) == '\0')) goto LAB_1431cfbb5;
    *(undefined1 *)((longlong)param_1 + 0x77) = 1;
LAB_1431cfb4b:
    uVar3 = 0;
  }
  else {
LAB_1431cfbb5:
    *(undefined1 *)((longlong)param_1 + 0x77) = 0;
    if ((*(char *)((longlong)param_1 + 0xd2) == '\0') || ((char)param_1[0xf] != '\0'))
    goto LAB_1431cfb4b;
    uVar3 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = uVar3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  cVar4 = *(char *)((longlong)param_1 + 0x7c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (cVar4 == '\0') {
LAB_1431cfb80:
    if ((char)param_1[0xf] != '\0') {
      cVar4 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar4 != '\0') goto LAB_1431cfb93;
    }
    if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
      CAkIOThread::AutoSemDecr(param_1[0xc]);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x15);
    uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
    if (uVar5 <= uVar1) goto LAB_1431cfb80;
LAB_1431cfb93:
    if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
      CAkIOThread::AutoSemIncr(param_1[0xc]);
      return;
    }
  }
  return;
}



// FUNCTION 1431cfbf0 UpdateTaskStatus body=68 status=ok
// SIG undefined UpdateTaskStatus(void)

void AK::StreamMgr::CAkAutoStmBase::UpdateTaskStatus(longlong param_1,int param_2)

{
  if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0xd3) = 1;
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x68))();
  }
  UpdateSchedulingStatus(param_1);
  if (*(char *)(param_1 + 0x10) != '\0') {
    CAkIOThread::SignalIOCompleted(*(undefined8 *)(param_1 + 0x60),param_1);
    return;
  }
  return;
}



// FUNCTION 1431cfc40 UpdateTaskStatus body=159 status=ok
// SIG undefined UpdateTaskStatus(void)

void AK::StreamMgr::CAkStdStmBase::UpdateTaskStatus(longlong *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x17) = 4;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xbc) == '\0') goto LAB_1431cfcb6;
    param_1[0x11] = param_1[0x11] + (ulonglong)*(uint *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x17) = 1;
  }
  if ((char)param_1[0xf] != '\0') {
    cVar1 = (**(code **)(*param_1 + 8))();
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
        CAkIOThread::StdSemIncr(param_1[0xc]);
      }
      goto LAB_1431cfcb6;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
    CAkIOThread::StdSemDecr(param_1[0xc]);
  }
LAB_1431cfcb6:
  if (((char)param_1[2] != '\0') && ((*(uint *)(param_1 + 0x17) & 0xfffffffd) != 0)) {
    CAkIOThread::SignalIOCompleted(param_1[0xc],param_1);
    return;
  }
  return;
}



// FUNCTION 1431cfce0 Write body=65 status=ok
// SIG undefined Write(void)

void AK::StreamMgr::CAkStdStmBase::Write
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
               undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  ExecuteOp(param_1 + -0x80,1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1431cfd30 CAkDeviceBlocking body=33 status=ok
// SIG undefined CAkDeviceBlocking(void)

undefined8 * AK::StreamMgr::CAkDeviceBlocking::CAkDeviceBlocking(undefined8 *param_1)

{
  CAkDeviceBase::CAkDeviceBase();
  *param_1 = &PTR__scalar_deleting_destructor__145acfb10;
  return param_1;
}



// FUNCTION 1431cfd70 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkAutoStmBlocking::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acfc38;
  param_1[0x10] = &PTR_LAB_145acfcc8;
  CAkAutoStmBase::~CAkAutoStmBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1431cfdc0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkDeviceBlocking::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acfb10;
  CAkDeviceBase::~CAkDeviceBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 1431cfe00 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkStdStmBlocking::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acfb68;
  param_1[0x10] = &PTR_LAB_145acfbd0;
  CAkStdStmBase::~CAkStdStmBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1431cfe50 CanBeDestroyed body=77 status=ok
// SIG undefined CanBeDestroyed(void)

undefined8 AK::StreamMgr::CAkAutoStmBlocking::CanBeDestroyed(longlong param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((*(longlong *)(param_1 + 0xd8) == 0) && (*(char *)(param_1 + 0xe0) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar1;
}



// FUNCTION 1431cfea0 CanBeDestroyed body=77 status=ok
// SIG undefined CanBeDestroyed(void)

undefined8 AK::StreamMgr::CAkStdStmBlocking::CanBeDestroyed(longlong param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((*(longlong *)(param_1 + 0xc0) == 0) && (*(char *)(param_1 + 200) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar1;
}



// FUNCTION 1431cfef0 Cancel body=125 status=ok
// SIG undefined Cancel(void)

void AK::StreamMgr::CAkStdStmBlocking::Cancel(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  CAkStdStmBase::SetStatus(param_1 + -0x80,3);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    CAkClientThreadAware::SetBlockedStatus(param_1 + -0x80);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    CAkIOThread::WaitForIOCompletion(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001431cff66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return;
}



// FUNCTION 1431cff80 CancelCurrentTransfer body=115 status=ok
// SIG undefined CancelCurrentTransfer(void)

void AK::StreamMgr::CAkAutoStmBlocking::CancelCurrentTransfer(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0xd8);
  puVar1 = (uint *)(lVar4 + 0x14);
  *puVar1 = *puVar1 & 0xfffffffa;
  puVar1 = (uint *)(lVar4 + 0x14);
  *puVar1 = *puVar1 | 2;
  lVar4 = *(longlong *)(param_1 + 0xd8);
  uVar2 = *(uint *)(param_1 + 0xa0);
  plVar5 = *(longlong **)(lVar4 + 8);
  uVar3 = *(uint *)(lVar4 + 0x10);
  lVar6 = *plVar5;
  if ((lVar6 + (ulonglong)uVar3 < (ulonglong)uVar2) &&
     ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar5 + 3) + lVar6)) {
    iVar7 = (uVar2 - uVar3) - (int)lVar6;
  }
  else {
    iVar7 = (int)plVar5[3] - uVar3;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar7;
  *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x18);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  return;
}



// FUNCTION 1431d0030 Destroy body=133 status=ok
// SIG undefined Destroy(void)

void AK::StreamMgr::CAkStdStmBlocking::Destroy(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  *(undefined1 *)(param_1 + -8) = 1;
  *(undefined1 *)(param_1 + -4) = 0;
  CAkStdStmBase::SetStatus(param_1 + -0x80,3);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    CAkClientThreadAware::SetBlockedStatus(param_1 + -0x80);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    CAkIOThread::WaitForIOCompletion(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
    *(undefined1 *)(param_1 + 0x48) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d00ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return;
}



// FUNCTION 1431d00c0 DestroyMemView body=69 status=ok
// SIG undefined DestroyMemView(void)

undefined4 AK::StreamMgr::CAkDeviceBase::DestroyMemView(longlong param_1,void *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1431d4410(param_1 + 0xc0);
  }
  MemoryMgr::Free(DAT_1467be440,param_2);
  return uVar2;
}



// FUNCTION 1431d0110 FUN_1431d0110 body=409 status=ok
// SIG undefined FUN_1431d0110(void)

void FUN_1431d0110(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  bVar1 = *(byte *)(param_1 + 0xd0);
  uVar10 = (ulonglong)bVar1;
  bVar8 = false;
  if ((uint)bVar1 < *(uint *)(param_1 + 0xb8)) {
    puVar12 = *(undefined8 **)(param_1 + 200);
    puVar13 = (undefined8 *)0x0;
    if (bVar1 != 0) {
      do {
        puVar13 = puVar12;
        puVar12 = (undefined8 *)*puVar13;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    while (puVar9 = puVar12, puVar9 != (undefined8 *)0x0) {
      if ((bVar8) || ((uint)(*(int *)(puVar9[1] + 0x18) - *(int *)(puVar9 + 2)) < param_2)) {
        bVar8 = true;
        puVar12 = (undefined8 *)*puVar9;
        if (puVar9 == *(undefined8 **)(param_1 + 200)) {
          *(undefined8 **)(param_1 + 200) = puVar12;
        }
        else {
          *puVar13 = puVar12;
        }
        if (puVar9 == *(undefined8 **)(param_1 + 0xc0)) {
          *(undefined8 **)(param_1 + 0xc0) = puVar13;
        }
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
        plVar5 = (longlong *)puVar9[1];
        uVar2 = *(uint *)(puVar9 + 2);
        uVar3 = *(uint *)(param_1 + 0xa0);
        lVar6 = *plVar5;
        if ((lVar6 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
           ((ulonglong)uVar3 < (ulonglong)*(uint *)(plVar5 + 3) + lVar6)) {
          iVar11 = (uVar3 - uVar2) - (int)lVar6;
        }
        else {
          iVar11 = (int)plVar5[3] - uVar2;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar11;
        lVar6 = puVar9[1];
        lVar7 = *(longlong *)(param_1 + 0x60);
        puVar9[1] = 0;
        if (lVar6 != 0) {
          FUN_1431d4410(lVar7 + 0xc0);
        }
        AK::MemoryMgr::Free(DAT_1467be440,puVar9);
      }
      else {
        bVar8 = false;
        puVar12 = (undefined8 *)*puVar9;
        puVar13 = puVar9;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
  }
  lVar4 = *(longlong *)(param_1 + 0xd8);
  if ((lVar4 != 0) &&
     ((bVar8 || ((uint)(*(int *)(*(longlong *)(lVar4 + 8) + 0x18) - *(int *)(lVar4 + 0x10)) <
                 param_2)))) {
    AK::StreamMgr::CAkAutoStmBlocking::CancelCurrentTransfer(param_1);
  }
  return;
}



// FUNCTION 1431d0300 MemViewFactory body=58 status=ok
// SIG undefined MemViewFactory(void)

undefined8 * AK::StreamMgr::CAkDeviceBlocking::MemViewFactory(void)

{
  undefined8 *puVar1;
  
  puVar1 = MemoryMgr::Malloc(DAT_1467be440,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(uint *)((longlong)puVar1 + 0x14) = *(uint *)((longlong)puVar1 + 0x14) & 0xfffffffb;
    *(uint *)((longlong)puVar1 + 0x14) = *(uint *)((longlong)puVar1 + 0x14) | 0xb;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431d0340 PerformIO body=353 status=ok
// SIG undefined PerformIO(void)

void AK::StreamMgr::CAkDeviceBlocking::PerformIO(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined1 local_res24;
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 local_48;
  longlong local_40 [3];
  
  plVar3 = (longlong *)FUN_1431ced20(param_1,local_res18);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = CAkStmTask::EnsureFileIsOpen(plVar3);
    if (iVar2 != 1) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0,2);
      return;
    }
    lVar4 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,&local_48,local_40,local_res10,
                       in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
    if (lVar4 == 0) {
      bVar5 = false;
      iVar2 = 0x35;
      lVar4 = 0;
    }
    else {
      bVar5 = local_40[0] == 0;
      iVar2 = 1;
      if (!bVar5) {
        local_res24 = *(undefined1 *)((longlong)plVar3 + 0x74);
        local_res20 = local_res18[0];
        lVar1 = **(longlong **)(param_1 + 0x428);
        if (*(char *)((longlong)plVar3 + 0x76) == '\0') {
          iVar2 = (**(code **)(lVar1 + 0x28))();
        }
        else {
          iVar2 = (**(code **)(lVar1 + 0x30))
                            (*(longlong **)(param_1 + 0x428),local_48,&local_res20,
                             *(undefined8 *)(local_40[0] + 0x10),local_40[0]);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        lVar1 = *(longlong *)(lVar4 + 8);
        *(undefined8 *)(lVar1 + 0x10) = 0;
        if ((iVar2 != 1) && (*(int *)(lVar1 + 0x20) != -1)) {
          CAkIOMemMgr::UntagBlock(param_1 + 0xc0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
        bVar5 = local_40[0] == 0;
      }
      bVar5 = !bVar5;
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,lVar4,iVar2,bVar5);
  }
  return;
}



// FUNCTION 1431d04b0 PrepareTransfer body=838 status=ok
// SIG undefined PrepareTransfer(void)

longlong AK::StreamMgr::CAkAutoStmBlocking::PrepareTransfer
                   (longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4,
                   char param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 local_res8;
  uint local_res10 [2];
  longlong *local_res18;
  undefined4 local_res20;
  longlong local_50 [2];
  
  *param_2 = param_1[5];
  *param_3 = 0;
  *param_4 = 0;
  local_res18 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar2 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if ((cVar2 != '\0') && (param_1[0x1b] == 0)) {
      uVar10 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((*(uint *)(param_1 + 0x14) != 0) && (*(uint *)(param_1 + 0x14) <= uVar10)) {
        uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0x9c);
      }
      uVar13 = (ulonglong)*(uint *)((longlong)param_1 + 0xa4);
      uVar6 = *(ulonglong *)param_1[5];
      iVar15 = (int)uVar10;
      if (uVar6 < uVar10 + uVar13) {
        uVar13 = 0;
        local_res8._0_1_ = 1;
        if (uVar10 < uVar6) {
          uVar13 = (ulonglong)(uint)((int)uVar6 - iVar15);
        }
      }
      else {
        local_res8._0_1_ = 0;
      }
      uVar12 = (uint)uVar13;
      if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
         (uVar9 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar9 < uVar13 + uVar10)) {
        uVar12 = uVar9 - iVar15;
      }
      local_res10[0] = uVar12;
      if (uVar12 != 0) {
        plVar7 = (longlong *)param_1[0xc];
        local_res20 = (undefined4)param_1[0x16];
        iVar3 = (int)param_1[0x12];
        uVar9 = *(uint *)((longlong)param_1 + 0xac);
        *param_3 = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 3));
        uVar4 = local_res20;
        local_50[0] = 0;
        if (((char)plVar7[0x83] == '\0') || (iVar3 == -1)) {
          local_res8 = 0;
        }
        else {
          if (uVar12 <= uVar9) {
            uVar9 = uVar12;
          }
          local_res8 = CAkIOMemMgr::GetCachedBlock
                                 (plVar7 + 0x18,iVar3,uVar10,uVar9,local_res20,
                                  (undefined1)local_res8,local_res10,local_50);
        }
        plVar14 = plVar7 + 0x18;
        if (param_5 == '\0') {
LAB_1431d06a8:
          lVar11 = (**(code **)(*plVar7 + 0x48))(plVar7);
          if (lVar11 == 0) {
            if (local_50[0] != 0) {
              FUN_1431d4410(plVar14);
              local_50[0] = 0;
            }
          }
          else {
            if (local_50[0] == 0) {
              FUN_1431d3e80(plVar14,local_res10[0],uVar4,local_50);
              if (local_50[0] == 0) {
                CAkDeviceBase::DestroyMemView(plVar7,lVar11);
                goto LAB_1431d067e;
              }
              plVar1 = plVar7 + 0x89;
              lVar8 = param_1[0xe];
              uVar4 = *(undefined4 *)(local_50[0] + 0x1c);
              iVar5 = *(int *)(param_1[5] + 8);
              plVar7[0x8b] = *(longlong *)(local_50[0] + 8);
              *(undefined4 *)(plVar7 + 0x8a) = uVar4;
              *plVar1 = (uint)((int)lVar8 * iVar5) + uVar10;
              *(uint *)((longlong)plVar7 + 0x454) = local_res10[0];
              *local_res18 = (longlong)plVar1;
              FUN_1431d4620(plVar14,local_50[0],plVar1,iVar3,uVar10,local_res10[0]);
            }
            *(uint *)(lVar11 + 0x14) = *(uint *)(lVar11 + 0x14) & 0xfffffff8;
            *(longlong *)(lVar11 + 8) = local_50[0];
            *(undefined4 *)(lVar11 + 0x10) = local_res8;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 3));
          if (lVar11 != 0) {
            uVar12 = *(uint *)(param_1 + 0x14);
            param_1[0x1b] = lVar11;
            if ((uVar10 < uVar12) && ((ulonglong)uVar12 < uVar10 + local_res10[0])) {
              local_res10[0] = uVar12 - iVar15;
            }
            *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + local_res10[0];
            CAkAutoStmBase::UpdateSchedulingStatus(param_1);
            param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
            goto LAB_1431d068a;
          }
        }
        else {
          if (local_50[0] != 0) {
            if (*(longlong *)(local_50[0] + 0x10) == 0) goto LAB_1431d06a8;
            FUN_1431d4410(plVar14);
          }
LAB_1431d067e:
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 3));
        }
      }
    }
  }
  lVar11 = 0;
LAB_1431d068a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return lVar11;
}



// FUNCTION 1431d0800 PrepareTransfer body=439 status=ok
// SIG undefined PrepareTransfer(void)

longlong AK::StreamMgr::CAkStdStmBlocking::PrepareTransfer
                   (longlong *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  lVar9 = 0;
  *param_3 = 0;
  *param_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar2 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if (cVar2 != '\0') {
      *param_2 = param_1[5];
      uVar8 = *(uint *)(param_1 + 0x16);
      uVar12 = (ulonglong)uVar8 + param_1[0x11];
      uVar7 = (int)param_1[0x14] - uVar8;
      plVar11 = (longlong *)param_1[0xc];
      uVar5 = *(uint *)(plVar11 + 0x86);
      if (uVar7 <= *(uint *)(plVar11 + 0x86)) {
        uVar5 = uVar7;
      }
      uVar10 = (ulonglong)uVar5;
      uVar7 = uVar5;
      if (*(char *)((longlong)param_1 + 0x76) == '\0') {
        uVar4 = *(ulonglong *)param_1[5];
        if (uVar4 < uVar10 + uVar12) {
          uVar10 = 0;
          if (uVar12 < uVar4) {
            uVar10 = (ulonglong)(uint)((int)uVar4 - (int)uVar12);
          }
        }
        uVar7 = (uint)uVar10;
        if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
           (uVar8 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar8 < uVar10 + uVar12)) {
          uVar7 = uVar8 - (int)uVar12;
        }
        uVar8 = *(uint *)(param_1 + 0x16);
        plVar11 = (longlong *)param_1[0xc];
      }
      local_res8 = (ulonglong)uVar8;
      *param_3 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar11 + 3));
      lVar9 = (**(code **)(*plVar11 + 0x48))(plVar11);
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar11 + 3));
      if (lVar9 != 0) {
        plVar1 = plVar11 + 0x89;
        iVar3 = *(int *)(param_1[5] + 8);
        lVar6 = param_1[0xe];
        plVar11[0x8b] = local_res8 + param_1[0x12];
        *(uint *)(plVar11 + 0x8a) = uVar5;
        *plVar1 = (uint)(iVar3 * (int)lVar6) + uVar12;
        *(uint *)((longlong)plVar11 + 0x454) = uVar7;
        *param_3 = (longlong)plVar1;
        param_1[0x13] = (longlong)plVar1;
        *(uint *)(lVar9 + 0x14) = *(uint *)(lVar9 + 0x14) & 0xfffffff8;
        *(longlong **)(lVar9 + 8) = param_1 + 0x11;
        *(uint *)(lVar9 + 0x10) = uVar8;
        *(uint *)(param_1 + 0x16) = (int)param_1[0x16] + uVar7;
        param_1[0x18] = lVar9;
        param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return lVar9;
}



// FUNCTION 1431d09c0 ReleaseCachingBuffers body=86 status=ok
// SIG undefined ReleaseCachingBuffers(void)

int AK::StreamMgr::CAkAutoStmBlocking::ReleaseCachingBuffers(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0xd8), iVar3 = 0, lVar1 != 0)) {
    iVar3 = *(int *)(*(longlong *)(lVar1 + 8) + 0x18) - *(int *)(lVar1 + 0x10);
    CancelCurrentTransfer(param_1);
  }
  iVar2 = FUN_1431ce780(param_1,param_2 - iVar3);
  return iVar2 + iVar3;
}



// FUNCTION 1431d0a20 SetLoopEnd body=223 status=ok
// SIG undefined SetLoopEnd(void)

void AK::StreamMgr::CAkAutoStmBlocking::SetLoopEnd(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 200);
  uVar5 = (uint)*(byte *)(param_1 + 0xd0);
  uVar7 = (ulonglong)param_2;
  *(uint *)(param_1 + 0xa0) = param_2;
  for (; iVar6 = 0, puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    iVar6 = 0;
    if (uVar5 == 0) goto joined_r0x0001431d0a5b;
    uVar5 = uVar5 - 1;
  }
LAB_1431d0ab0:
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 8);
    uVar5 = *(uint *)(lVar2 + 0x10);
    lVar2 = *plVar3;
    if ((lVar2 + (ulonglong)uVar5 < uVar7) && (uVar7 < (ulonglong)*(uint *)(plVar3 + 3) + lVar2)) {
      *(uint *)(param_1 + 0xa8) = iVar6 + ((param_2 - uVar5) - (int)lVar2);
      return;
    }
    iVar6 = iVar6 + ((int)plVar3[3] - uVar5);
  }
  *(int *)(param_1 + 0xa8) = iVar6;
  return;
joined_r0x0001431d0a5b:
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    plVar3 = (longlong *)puVar1[1];
    uVar5 = *(uint *)(puVar1 + 2);
    lVar2 = *plVar3;
    if ((lVar2 + (ulonglong)uVar5 < uVar7) && (uVar7 < (ulonglong)*(uint *)(plVar3 + 3) + lVar2)) {
      iVar4 = (param_2 - uVar5) - (int)lVar2;
    }
    else {
      iVar4 = (int)plVar3[3] - uVar5;
    }
    iVar6 = iVar6 + iVar4;
  }
  goto LAB_1431d0ab0;
}



// FUNCTION 1431d0b00 Update body=189 status=ok
// SIG undefined Update(void)

undefined8
AK::StreamMgr::CAkAutoStmBlocking::Update
          (longlong param_1,longlong param_2,int param_3,char param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (param_2 != 0) {
    if (((param_3 == 1) && (*(longlong *)(param_1 + 0xd8) != 0)) &&
       (((byte)*(undefined4 *)(param_2 + 0x14) & 7) != 2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((param_4 == '\0') && (bVar1)) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfffffffb;
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 3;
    }
    CAkAutoStmBase::AddMemView(param_1,param_2);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  CAkAutoStmBase::UpdateTaskStatus(param_1,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar2;
}



// FUNCTION 1431d0bc0 Update body=152 status=ok
// SIG undefined Update(void)

undefined8
AK::StreamMgr::CAkStdStmBlocking::Update(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (param_2 != 0) {
    if (((int)param_3 == 1) && (((byte)*(undefined4 *)(param_2 + 0x14) & 7) != 2)) {
      uVar1 = param_3 & 0xff;
    }
    else {
      uVar1 = uVar1 & 0xffffffffffffff00;
    }
    CAkStdStmBase::AddMemView(param_1,param_2,uVar1);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    uVar2 = 1;
  }
  CAkStdStmBase::UpdateTaskStatus(param_1,param_3 & 0xffffffff);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar2;
}



// FUNCTION 1431d0c60 FUN_1431d0c60 body=298 status=ok
// SIG undefined FUN_1431d0c60(void)

undefined8 *
FUN_1431d0c60(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5,longlong *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_6 = 0;
  puVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0xe8);
  if (puVar3 == (undefined8 *)0x0) {
    AK::StreamMgr::CAkStreamMgr::ForceCleanup(param_1,*(undefined1 *)(param_4 + 0xd));
    puVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0xe8);
    if (puVar3 == (undefined8 *)0x0) goto LAB_1431d0d66;
  }
  AK::StreamMgr::CAkAutoStmBase::CAkAutoStmBase(puVar3);
  *puVar3 = &PTR__scalar_deleting_destructor__145acfc38;
  *(undefined1 *)(puVar3 + 0x1c) = 0;
  puVar3[0x1b] = 0;
  puVar3[0x10] = &PTR_LAB_145acfcc8;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = AK::StreamMgr::CAkAutoStmBase::Init
                      (puVar3,param_1,param_2,param_3,param_4,param_5,
                       *(undefined4 *)(param_1 + 0x430));
    lVar1 = DAT_1467be440;
    if (iVar2 == 1) {
      *param_6 = (longlong)(puVar3 + 0x10);
      return puVar3;
    }
    (**(code **)*puVar3)(puVar3,0);
    AK::MemoryMgr::Free(lVar1,puVar3);
  }
LAB_1431d0d66:
  *param_6 = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 1431d0d90 _CreateStd body=250 status=ok
// SIG undefined _CreateStd(void)

undefined8 *
AK::StreamMgr::CAkDeviceBlocking::_CreateStd
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_4 = 0;
  puVar3 = MemoryMgr::Malloc(DAT_1467be440,0xd0);
  if (puVar3 == (undefined8 *)0x0) {
    CAkStreamMgr::ForceCleanup(param_1,100);
    puVar3 = MemoryMgr::Malloc(DAT_1467be440,0xd0);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  CAkStdStmBase::CAkStdStmBase(puVar3);
  *puVar3 = &PTR__scalar_deleting_destructor__145acfb68;
  *(undefined1 *)(puVar3 + 0x19) = 0;
  puVar3[0x18] = 0;
  puVar3[0x10] = &PTR_LAB_145acfbd0;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = CAkStdStmBase::Init(puVar3,param_1,param_2,param_3);
    lVar1 = DAT_1467be440;
    if (iVar2 == 1) {
      *param_4 = (longlong)(puVar3 + 0x10);
      return puVar3;
    }
    (**(code **)*puVar3)(puVar3,0);
    MemoryMgr::Free(lVar1,puVar3);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431d0e90 CAkDeviceDeferredLinedUp body=62 status=ok
// SIG undefined CAkDeviceDeferredLinedUp(void)

undefined8 * AK::StreamMgr::CAkDeviceDeferredLinedUp::CAkDeviceDeferredLinedUp(undefined8 *param_1)

{
  CAkDeviceBase::CAkDeviceBase();
  *param_1 = &PTR__scalar_deleting_destructor__145acfdb0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  return param_1;
}



// FUNCTION 1431d0ef0 `scalar_deleting_destructor' body=99 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acffa8;
  param_1[0x10] = &PTR_LAB_145ad0038;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  CAkAutoStmBase::~CAkAutoStmBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1431d0f60 `scalar_deleting_destructor' body=99 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acfe08;
  param_1[0x10] = &PTR_LAB_145acfe70;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  CAkStdStmBase::~CAkStdStmBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1431d0fd0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkDeviceDeferredLinedUp::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acfd58;
  CAkDeviceBase::~CAkDeviceBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 1431d1010 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkDeviceDeferredLinedUpBase::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acfd58;
  CAkDeviceBase::~CAkDeviceBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 1431d1050 CanBeDestroyed body=62 status=ok
// SIG undefined CanBeDestroyed(void)

bool AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::CanBeDestroyed
               (longlong param_1)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  lVar1 = *(longlong *)(param_1 + 0xf0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return lVar1 == 0;
}



// FUNCTION 1431d1090 CanBeDestroyed body=62 status=ok
// SIG undefined CanBeDestroyed(void)

bool AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::CanBeDestroyed
               (longlong param_1)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  lVar1 = *(longlong *)(param_1 + 0xd8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return lVar1 == 0;
}



// FUNCTION 1431d10d0 Cancel body=147 status=ok
// SIG undefined Cancel(void)

void AK::StreamMgr::CAkStdStmDeferredLinedUp::Cancel(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if ((*(longlong *)(param_1 + 0x48) == 0) && (*(longlong *)(param_1 + 0x58) == 0)) {
    CAkStdStmBase::SetStatus(param_1 + -0x80,3);
                    /* WARNING: Could not recover jumptable at 0x0001431d1111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    return;
  }
  CAkStdStmBase::SetStatus(param_1 + -0x80,3);
  CAkClientThreadAware::SetBlockedStatus(param_1 + -0x80);
  _CancelAllPendingTransfers(param_1 + -0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  CAkIOThread::WaitForIOCompletion(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
  return;
}



// FUNCTION 1431d1190 CancelInconsistentPendingTransfers body=284 status=ok
// SIG undefined CancelInconsistentPendingTransfers(void)

void AK::StreamMgr::CAkAutoStmDeferredLinedUp::CancelInconsistentPendingTransfers
               (longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint7 uVar5;
  undefined8 *local_18;
  undefined8 *puStack_10;
  
  puVar4 = (undefined8 *)0x0;
  local_18 = (undefined8 *)0x0;
  puStack_10 = (undefined8 *)0x0;
  if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
    param_3 = (undefined8 *)0x0;
    puVar2 = *(undefined8 **)(param_1 + 0xe0);
    do {
      lVar1 = *(longlong *)puVar2[1];
      if ((ulonglong)*(uint *)(puVar2 + 2) + lVar1 == param_2) {
        param_2 = (ulonglong)*(uint *)((longlong *)puVar2[1] + 3) + lVar1;
        if ((*(uint *)(param_1 + 0xa0) != 0) && (*(uint *)(param_1 + 0xa0) <= param_2)) {
          param_2 = (ulonglong)*(uint *)(param_1 + 0x9c);
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)*puVar2;
        if (puVar2 == *(undefined8 **)(param_1 + 0xe0)) {
          *(undefined8 **)(param_1 + 0xe0) = puVar3;
        }
        else {
          *puVar4 = puVar3;
        }
        if (puVar2 == *(undefined8 **)(param_1 + 0xd8)) {
          *(undefined8 **)(param_1 + 0xd8) = puVar4;
        }
        puStack_10 = puVar2;
        if (param_3 == (undefined8 *)0x0) {
          *puVar2 = 0;
          param_3 = puVar2;
          local_18 = puVar2;
        }
        else {
          *puVar2 = param_3;
          param_3 = puVar2;
        }
      }
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  uVar5 = (uint7)((ulonglong)param_3 >> 8);
  if ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x418) == '\0') &&
     (*(longlong *)(param_1 + 0xe0) == 0)) {
    CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::CancelTransfers
              (param_1,&local_18,CONCAT71(uVar5,1));
    return;
  }
  CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::CancelTransfers
            (param_1,&local_18,(ulonglong)uVar5 << 8);
  return;
}



// FUNCTION 1431d12b0 CancelTransfers body=320 status=ok
// SIG undefined CancelTransfers(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::CancelTransfers
               (longlong param_1,undefined8 *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  char local_res18 [16];
  
  local_res18[0] = param_3;
  plVar8 = (longlong *)param_2[1];
  while (plVar8 != (longlong *)0x0) {
    plVar3 = (longlong *)*plVar8;
    plVar4 = plVar3;
    if (plVar8 == (longlong *)param_2[1]) {
      param_2[1] = plVar3;
      plVar4 = _DAT_00000000;
    }
    _DAT_00000000 = plVar4;
    if (plVar8 == (longlong *)*param_2) {
      *param_2 = 0;
    }
    if ((*(uint *)((longlong)plVar8 + 0x14) & 7) == 0) {
      plVar4 = (longlong *)plVar8[1];
      uVar1 = *(uint *)(plVar8 + 2);
      *(uint *)((longlong)plVar8 + 0x14) = *(uint *)((longlong)plVar8 + 0x14) & 0xfffffffa | 2;
      uVar2 = *(uint *)(param_1 + 0xa0);
      lVar5 = *plVar4;
      if ((lVar5 + (ulonglong)uVar1 < (ulonglong)uVar2) &&
         ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar4 + 3) + lVar5)) {
        iVar9 = (uVar2 - uVar1) - (int)lVar5;
      }
      else {
        iVar9 = (int)plVar4[3] - uVar1;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar9;
      *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(plVar8[1] + 0x18);
      if (*(longlong *)(param_1 + 0xf0) == 0) {
        *(longlong **)(param_1 + 0xf0) = plVar8;
        *plVar8 = 0;
        plVar8 = plVar3;
      }
      else {
        *plVar8 = *(longlong *)(param_1 + 0xf0);
        *(longlong **)(param_1 + 0xf0) = plVar8;
        plVar8 = plVar3;
      }
    }
    else {
      CAkAutoStmBase::AddMemView(param_1,plVar8,0);
      CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
      plVar8 = plVar3;
    }
  }
  UpdateCompletedTransfers(param_1);
  bVar10 = true;
  puVar7 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar7 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar7;
    FUN_1431d4b40(puVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar10,local_res18);
    bVar10 = local_res18[0] == '\0';
    puVar7 = puVar6;
  }
  return;
}



// FUNCTION 1431d13f0 CreateLowLevelTransfer body=118 status=ok
// SIG undefined CreateLowLevelTransfer(void)

longlong *
AK::StreamMgr::CAkDeviceDeferredLinedUp::CreateLowLevelTransfer
          (longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined4 param_5,
          undefined4 param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x458);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      *(undefined8 *)(param_1 + 0x450) = 0;
    }
    *(longlong *)(param_1 + 0x458) = lVar4;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + -1;
  }
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x28) + 8);
  iVar2 = *(int *)(param_2 + 0x70);
  *(uint *)(plVar3 + 10) = *(uint *)(plVar3 + 10) & 0xfffffffc;
  *(undefined4 *)(plVar3 + 2) = param_5;
  plVar3[4] = (longlong)FUN_1431d4c80;
  plVar3[3] = param_3;
  plVar3[1] = (ulonglong)(uint)(iVar1 * iVar2) + param_4;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_6;
  plVar3[5] = (longlong)plVar3;
  plVar3[6] = 0;
  plVar3[9] = param_2;
  return plVar3;
}



// FUNCTION 1431d1470 CreateMemViewAuto body=630 status=ok
// SIG undefined CreateMemViewAuto(void)

undefined8 *
AK::StreamMgr::CAkDeviceDeferredLinedUp::CreateMemViewAuto
          (longlong *param_1,longlong param_2,int param_3,undefined8 param_4,undefined4 param_5,
          undefined4 param_6,undefined1 param_7,char param_8,undefined4 *param_9,longlong *param_10,
          undefined1 *param_11)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = param_11;
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  *param_10 = 0;
  *param_11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar2 = 0;
  param_11 = (undefined1 *)0x0;
  if (((char)param_1[0x83] != '\0') && (param_3 != -1)) {
    uVar6 = CONCAT44(uVar7,param_6);
    uVar2 = CAkIOMemMgr::GetCachedBlock
                      (param_1 + 0x18,param_3,param_4,param_5,uVar6,param_7,param_9,&param_11);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  plVar5 = param_1 + 0x18;
  if (param_8 != '\0') {
    puVar3 = (undefined8 *)0x0;
    if (param_11 == (undefined1 *)0x0) goto LAB_1431d16bd;
    if (*(longlong *)((longlong)param_11 + 0x10) != 0) {
      FUN_1431d4410(plVar5);
      goto LAB_1431d16bd;
    }
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1);
  if (puVar3 != (undefined8 *)0x0) {
    if (param_11 == (undefined1 *)0x0) {
      FUN_1431d3e80(plVar5,*param_9,param_6,&param_11);
      if (param_11 == (undefined1 *)0x0) {
        CAkDeviceBase::DestroyMemView(param_1,puVar3);
        puVar3 = (undefined8 *)0x0;
        goto LAB_1431d16bd;
      }
      lVar4 = CreateLowLevelTransfer
                        (param_1,param_2,*(undefined8 *)((longlong)param_11 + 8),param_4,
                         CONCAT44(uVar7,*(undefined4 *)((longlong)param_11 + 0x1c)),*param_9);
      *param_10 = lVar4;
      FUN_1431d4620(plVar5,param_11,lVar4,param_3,param_4,*param_9);
      *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffff8;
      puVar3[1] = param_11;
      *(undefined4 *)(puVar3 + 2) = 0;
      lVar4 = *param_10;
      if (*(longlong *)(lVar4 + 0x40) == 0) {
        *(undefined8 **)(lVar4 + 0x40) = puVar3;
        puVar3[3] = 0;
      }
      else {
        puVar3[3] = *(longlong *)(lVar4 + 0x40);
        *(undefined8 **)(lVar4 + 0x40) = puVar3;
      }
    }
    else {
      *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffff8;
      puVar3[1] = param_11;
      *(undefined4 *)(puVar3 + 2) = uVar2;
      lVar4 = *(longlong *)((longlong)param_11 + 0x10);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x40) == 0) {
          *(undefined8 **)(lVar4 + 0x40) = puVar3;
          puVar3[3] = 0;
        }
        else {
          puVar3[3] = *(longlong *)(lVar4 + 0x40);
          *(undefined8 **)(lVar4 + 0x40) = puVar3;
        }
        *puVar1 = 1;
      }
    }
    *puVar3 = 0;
    if (*(longlong *)(param_2 + 0xe0) == 0) {
      *(undefined8 **)(param_2 + 0xe0) = puVar3;
    }
    else {
      **(undefined8 **)(param_2 + 0xd8) = puVar3;
    }
    *(undefined8 **)(param_2 + 0xd8) = puVar3;
    puVar3[4] = param_2;
  }
LAB_1431d16bd:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return puVar3;
}



// FUNCTION 1431d16f0 Destroy body=105 status=ok
// SIG undefined Destroy(void)

void AK::StreamMgr::CAkDeviceDeferredLinedUp::Destroy(longlong param_1)

{
  CAkIOThread::Term();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x450) = 0;
    *(undefined4 *)(param_1 + 0x448) = 0;
    MemoryMgr::Free(DAT_1467be440,*(void **)(param_1 + 0x460));
  }
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  CAkDeviceBase::Destroy(param_1);
  return;
}



// FUNCTION 1431d1760 Destroy body=146 status=ok
// SIG undefined Destroy(void)

void AK::StreamMgr::CAkStdStmDeferredLinedUp::Destroy(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  *(undefined1 *)(param_1 + -8) = 1;
  *(undefined1 *)(param_1 + -4) = 0;
  CAkStdStmBase::SetStatus(param_1 + -0x80,3);
  if ((*(longlong *)(param_1 + 0x48) == 0) && (*(longlong *)(param_1 + 0x58) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001431d17b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
    return;
  }
  CAkClientThreadAware::SetBlockedStatus(param_1 + -0x80);
  _CancelAllPendingTransfers(param_1 + -0x80);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  CAkIOThread::WaitForIOCompletion(*(undefined8 *)(param_1 + -0x20),param_1 + -0x80);
  return;
}



// FUNCTION 1431d1800 FUN_1431d1800 body=736 status=ok
// SIG undefined FUN_1431d1800(void)

void FUN_1431d1800(longlong param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  char local_res8 [8];
  
  bVar1 = *(byte *)(param_1 + 0xd0);
  uVar10 = (ulonglong)bVar1;
  plVar14 = (longlong *)0x0;
  bVar15 = false;
  if ((uint)bVar1 < *(uint *)(param_1 + 0xb8)) {
    plVar12 = *(longlong **)(param_1 + 200);
    plVar13 = plVar14;
    if (bVar1 != 0) {
      do {
        plVar13 = plVar12;
        plVar12 = (longlong *)*plVar13;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x60) + 0x18);
    EnterCriticalSection(lpCriticalSection);
    while (plVar6 = plVar12, plVar6 != (longlong *)0x0) {
      if ((bVar15) || ((uint)(*(int *)(plVar6[1] + 0x18) - (int)plVar6[2]) < param_2)) {
        bVar15 = true;
        plVar12 = (longlong *)*plVar6;
        if (plVar6 == *(longlong **)(param_1 + 200)) {
          *(longlong **)(param_1 + 200) = plVar12;
        }
        else {
          *plVar13 = (longlong)plVar12;
        }
        if (plVar6 == *(longlong **)(param_1 + 0xc0)) {
          *(longlong **)(param_1 + 0xc0) = plVar13;
        }
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
        plVar4 = (longlong *)plVar6[1];
        uVar2 = *(uint *)(plVar6 + 2);
        uVar3 = *(uint *)(param_1 + 0xa0);
        lVar7 = *plVar4;
        if ((lVar7 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
           ((ulonglong)uVar3 < (ulonglong)*(uint *)(plVar4 + 3) + lVar7)) {
          iVar11 = (uVar3 - uVar2) - (int)lVar7;
        }
        else {
          iVar11 = (int)plVar4[3] - uVar2;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar11;
        lVar7 = plVar6[1];
        lVar5 = *(longlong *)(param_1 + 0x60);
        plVar6[1] = 0;
        if (lVar7 != 0) {
          FUN_1431d4410(lVar5 + 0xc0);
        }
        AK::MemoryMgr::Free(DAT_1467be440,plVar6);
      }
      else {
        bVar15 = false;
        plVar12 = (longlong *)*plVar6;
        plVar13 = plVar6;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if ((bVar15) && (*(char *)(*(longlong *)(param_1 + 0x60) + 0x418) == '\0')) {
      local_res8[0] = '\x01';
      goto LAB_1431d196b;
    }
  }
  local_res8[0] = '\0';
LAB_1431d196b:
  plVar13 = *(longlong **)(param_1 + 0xe0);
  plVar12 = *(longlong **)(param_1 + 0xe0);
  if (bVar15) {
joined_r0x0001431d19b2:
    while (plVar12 != (longlong *)0x0) {
      plVar13 = (longlong *)*plVar12;
      if (plVar12 == *(longlong **)(param_1 + 0xe0)) {
        *(longlong **)(param_1 + 0xe0) = plVar13;
      }
      else {
        *plVar14 = (longlong)plVar13;
      }
      if (plVar12 == *(longlong **)(param_1 + 0xd8)) {
        *(longlong **)(param_1 + 0xd8) = plVar14;
      }
      if ((*(uint *)((longlong)plVar12 + 0x14) & 7) == 0) {
        plVar6 = (longlong *)plVar12[1];
        uVar2 = *(uint *)(plVar12 + 2);
        *(uint *)((longlong)plVar12 + 0x14) = *(uint *)((longlong)plVar12 + 0x14) & 0xfffffffa | 2;
        uVar3 = *(uint *)(param_1 + 0xa0);
        lVar7 = *plVar6;
        if ((lVar7 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
           ((ulonglong)uVar3 < (ulonglong)*(uint *)(plVar6 + 3) + lVar7)) {
          iVar11 = (uVar3 - uVar2) - (int)lVar7;
        }
        else {
          iVar11 = (int)plVar6[3] - uVar2;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar11;
        *(undefined4 *)(plVar12 + 2) = *(undefined4 *)(plVar12[1] + 0x18);
        if (*(longlong *)(param_1 + 0xf0) == 0) {
          *(longlong **)(param_1 + 0xf0) = plVar12;
          *plVar12 = 0;
          plVar12 = plVar13;
        }
        else {
          *plVar12 = *(longlong *)(param_1 + 0xf0);
          *(longlong **)(param_1 + 0xf0) = plVar12;
          plVar12 = plVar13;
        }
      }
      else {
        AK::StreamMgr::CAkAutoStmBase::AddMemView(param_1,plVar12,0);
        AK::StreamMgr::CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
        plVar12 = plVar13;
      }
    }
  }
  else {
    while (plVar12 = plVar13, plVar12 != (longlong *)0x0) {
      if ((uint)(*(int *)(plVar12[1] + 0x18) - (int)plVar12[2]) < param_2)
      goto joined_r0x0001431d19b2;
      plVar14 = plVar12;
      plVar13 = (longlong *)*plVar12;
    }
  }
  bVar15 = true;
  puVar9 = *(undefined8 **)(param_1 + 0xf0);
  while (puVar9 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar9;
    FUN_1431d4b40(puVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar15,local_res8);
    bVar15 = local_res8[0] == '\0';
    puVar9 = puVar8;
  }
  return;
}



// FUNCTION 1431d1ae0 GetOldestCompletedTransfer body=21 status=ok
// SIG undefined GetOldestCompletedTransfer(void)

longlong AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::
         GetOldestCompletedTransfer(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x14) & 7) == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1431d1b00 GetOldestCompletedTransfer body=21 status=ok
// SIG undefined GetOldestCompletedTransfer(void)

longlong AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::
         GetOldestCompletedTransfer(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x14) & 7) == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1431d1b20 GetStatus body=65 status=ok
// SIG undefined GetStatus(void)

undefined4 AK::StreamMgr::CAkStdStmDeferredLinedUp::GetStatus(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    uVar1 = 2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return uVar1;
}



// FUNCTION 1431d1b70 Init body=214 status=ok
// SIG undefined Init(void)

int AK::StreamMgr::CAkDeviceDeferredLinedUp::Init(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(int *)(param_2 + 0x2c) == 0) {
    return 0x1f;
  }
  iVar1 = CAkDeviceBase::Init();
  if (iVar1 == 1) {
    plVar2 = MemoryMgr::Malloc(DAT_1467be440,(ulonglong)*(uint *)(param_2 + 0x2c) * 0x58);
    *(longlong **)(param_1 + 0x460) = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return 2;
    }
    plVar3 = plVar2 + (ulonglong)*(uint *)(param_2 + 0x2c) * 0xb;
    do {
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = 0;
        plVar2[8] = 0;
      }
      if (*(longlong *)(param_1 + 0x458) == 0) {
        *(longlong **)(param_1 + 0x458) = plVar2;
        *(longlong **)(param_1 + 0x450) = plVar2;
        *plVar2 = 0;
      }
      else {
        *plVar2 = *(longlong *)(param_1 + 0x458);
        *(longlong **)(param_1 + 0x458) = plVar2;
      }
      *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
      plVar2 = plVar2 + 0xb;
    } while (plVar2 < plVar3);
  }
  return iVar1;
}



// FUNCTION 1431d1c50 MemViewFactory body=66 status=ok
// SIG undefined MemViewFactory(void)

undefined8 * AK::StreamMgr::CAkDeviceDeferredLinedUp::MemViewFactory(void)

{
  undefined8 *puVar1;
  
  puVar1 = MemoryMgr::Malloc(DAT_1467be440,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(uint *)((longlong)puVar1 + 0x14) = *(uint *)((longlong)puVar1 + 0x14) & 0xfffffffb;
    *(uint *)((longlong)puVar1 + 0x14) = *(uint *)((longlong)puVar1 + 0x14) | 0xb;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431d1ca0 FUN_1431d1ca0 body=288 status=ok
// SIG undefined FUN_1431d1ca0(void)

void FUN_1431d1ca0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined1 local_res24;
  longlong local_38;
  undefined8 local_30 [3];
  
  plVar2 = (longlong *)FUN_1431ced20(param_1,local_res18);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = AK::StreamMgr::CAkStmTask::EnsureFileIsOpen(plVar2);
    if (iVar1 != 1) {
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,local_30,&local_38,local_res10,0);
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0,0x35,0);
      return;
    }
    if (local_38 == 0) {
      if (local_res10[0] == '\0') {
        (**(code **)(*plVar2 + 0x28))(plVar2,lVar3,1);
      }
    }
    else {
      local_res24 = *(undefined1 *)((longlong)plVar2 + 0x74);
      local_res20 = local_res18[0];
      iVar1 = AK::StreamMgr::CAkLowLevelTransferDeferred::Execute
                        (local_38,*(undefined8 *)(param_1 + 0x428),local_30[0],&local_res20,
                         *(undefined1 *)((longlong)plVar2 + 0x76));
      if (iVar1 != 1) {
        FUN_1431d4c80(local_38 + 8,iVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1431d1dc0 PopTransferRequest body=205 status=ok
// SIG undefined PopTransferRequest(void)

void AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::PopTransferRequest
               (longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 7) == 2) {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    plVar4 = plVar1;
    plVar5 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar3 = plVar4, plVar4 = (longlong *)*plVar3, plVar3 != param_2) {
        plVar5 = plVar3;
        if (plVar4 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar3 == plVar1) {
        *(longlong **)(param_1 + 0xf0) = plVar4;
        return;
      }
      *plVar5 = (longlong)plVar4;
    }
  }
  else if ((param_3 == '\0') && (plVar1 = *(longlong **)(param_1 + 0xe0), plVar1 != param_2)) {
    plVar4 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar5 = plVar1, plVar5 != param_2) {
        plVar1 = (longlong *)*plVar5;
        plVar4 = plVar5;
        if ((longlong *)*plVar5 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar5 == *(longlong **)(param_1 + 0xe0)) {
        *(longlong *)(param_1 + 0xe0) = *plVar5;
      }
      else {
        *plVar4 = *plVar5;
      }
      if (plVar5 == *(longlong **)(param_1 + 0xd8)) {
        *(longlong **)(param_1 + 0xd8) = plVar4;
        return;
      }
    }
  }
  else if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0xe0);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      return;
    }
    *(longlong *)(param_1 + 0xe0) = lVar2;
    return;
  }
  return;
}



// FUNCTION 1431d1e90 PopTransferRequest body=205 status=ok
// SIG undefined PopTransferRequest(void)

void AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::PopTransferRequest
               (longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 7) == 2) {
    plVar1 = *(longlong **)(param_1 + 0xd8);
    plVar4 = plVar1;
    plVar5 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar3 = plVar4, plVar4 = (longlong *)*plVar3, plVar3 != param_2) {
        plVar5 = plVar3;
        if (plVar4 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar3 == plVar1) {
        *(longlong **)(param_1 + 0xd8) = plVar4;
        return;
      }
      *plVar5 = (longlong)plVar4;
    }
  }
  else if ((param_3 == '\0') && (plVar1 = *(longlong **)(param_1 + 200), plVar1 != param_2)) {
    plVar4 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      while (plVar5 = plVar1, plVar5 != param_2) {
        plVar1 = (longlong *)*plVar5;
        plVar4 = plVar5;
        if ((longlong *)*plVar5 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar5 == *(longlong **)(param_1 + 200)) {
        *(longlong *)(param_1 + 200) = *plVar5;
      }
      else {
        *plVar4 = *plVar5;
      }
      if (plVar5 == *(longlong **)(param_1 + 0xc0)) {
        *(longlong **)(param_1 + 0xc0) = plVar4;
        return;
      }
    }
  }
  else if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 200);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      return;
    }
    *(longlong *)(param_1 + 200) = lVar2;
    return;
  }
  return;
}



// FUNCTION 1431d1f60 PrepareTransfer body=461 status=ok
// SIG undefined PrepareTransfer(void)

longlong AK::StreamMgr::CAkAutoStmDeferredLinedUp::PrepareTransfer
                   (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined1 *param_4,
                   undefined1 param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 uVar9;
  uint local_res8 [2];
  undefined8 local_res10;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_2 = param_1[5];
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  CAkIOThread::IncrementIOCount(param_1[0xc]);
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((*(uint *)(param_1 + 0x14) != 0) && (*(uint *)(param_1 + 0x14) <= uVar4)) {
        uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x9c);
      }
      uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0xa4);
      uVar2 = *(ulonglong *)param_1[5];
      iVar8 = (int)uVar4;
      if (uVar2 < uVar4 + uVar7) {
        uVar7 = 0;
        uVar9 = 1;
        if (uVar4 < uVar2) {
          uVar7 = (ulonglong)(uint)((int)uVar2 - iVar8);
        }
      }
      else {
        uVar9 = 0;
      }
      uVar6 = (uint)uVar7;
      if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
         (uVar3 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar3 < uVar7 + uVar4)) {
        uVar6 = uVar3 - iVar8;
      }
      local_res8[0] = uVar6;
      if (uVar6 != 0) {
        uVar3 = *(uint *)((longlong)param_1 + 0xac);
        if (uVar6 <= *(uint *)((longlong)param_1 + 0xac)) {
          uVar3 = uVar6;
        }
        lVar5 = CAkDeviceDeferredLinedUp::CreateMemViewAuto
                          (param_1[0xc],param_1,(int)param_1[0x12],uVar4,uVar3,(int)param_1[0x16],
                           uVar9,param_5,local_res8,&local_res10,param_4);
        if (lVar5 != 0) {
          *param_3 = local_res10;
          uVar6 = *(uint *)(param_1 + 0x14);
          if ((uVar4 < uVar6) && ((ulonglong)uVar6 < uVar4 + local_res8[0])) {
            local_res8[0] = uVar6 - iVar8;
          }
          *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + local_res8[0];
          CAkAutoStmBase::UpdateSchedulingStatus(param_1);
          param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
          goto LAB_1431d2107;
        }
      }
    }
  }
  lVar5 = 0;
LAB_1431d2107:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return lVar5;
}



// FUNCTION 1431d2130 PrepareTransfer body=695 status=ok
// SIG undefined PrepareTransfer(void)

undefined8 *
AK::StreamMgr::CAkStdStmDeferredLinedUp::PrepareTransfer
          (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *local_res20;
  ulonglong local_48;
  
  *param_3 = 0;
  *param_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  CAkIOThread::IncrementIOCount(param_1[0xc]);
  if ((char)param_1[0xf] == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    cVar1 = *(char *)((longlong)param_1 + 0x7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if (cVar1 != '\0') {
      plVar5 = param_1 + 0x11;
      *param_2 = param_1[5];
      uVar7 = *(uint *)(param_1 + 0x16);
      plVar12 = (longlong *)param_1[0xc];
      uVar13 = (ulonglong)uVar7 + *plVar5;
      uVar6 = (int)param_1[0x14] - uVar7;
      bVar4 = false;
      uVar3 = *(uint *)(plVar12 + 0x86);
      if (uVar6 <= *(uint *)(plVar12 + 0x86)) {
        uVar3 = uVar6;
      }
      uVar11 = (ulonglong)uVar3;
      uVar6 = uVar3;
      if (*(char *)((longlong)param_1 + 0x76) == '\0') {
        uVar2 = *(ulonglong *)param_1[5];
        if (uVar2 < uVar3 + uVar13) {
          bVar4 = true;
          uVar11 = 0;
          if (uVar13 < uVar2) {
            uVar11 = (ulonglong)(uint)((int)uVar2 - (int)uVar13);
          }
        }
        else {
          bVar4 = false;
        }
        uVar6 = (uint)uVar11;
        if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
           (uVar7 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar7 < uVar11 + uVar13)) {
          uVar6 = uVar7 - (int)uVar13;
        }
        uVar7 = *(uint *)(param_1 + 0x16);
        plVar12 = (longlong *)param_1[0xc];
      }
      local_48 = (ulonglong)uVar7;
      local_res20 = (longlong *)0x0;
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar12 + 3));
      puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x48))(plVar12);
      plVar9 = local_res20;
      if (puVar8 != (undefined8 *)0x0) {
        if ((param_1[0x13] != 0) &&
           (CAkIOMemMgr::CloneTempBlock(plVar12 + 0x18,plVar5,&local_res20), plVar5 = local_res20,
           local_res20 == (longlong *)0x0)) {
          CAkDeviceBase::DestroyMemView(plVar12,puVar8);
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar12 + 3));
          goto LAB_1431d22b7;
        }
        local_res20 = plVar5;
        plVar9 = (longlong *)
                 CAkDeviceDeferredLinedUp::CreateLowLevelTransfer
                           (plVar12,param_1,local_48 + local_res20[1],uVar13,uVar3,uVar6);
        local_res20[2] = (longlong)plVar9;
        *(uint *)((longlong)puVar8 + 0x14) = *(uint *)((longlong)puVar8 + 0x14) & 0xfffffff8;
        puVar8[1] = local_res20;
        *(uint *)(puVar8 + 2) = uVar7;
        if (plVar9[8] == 0) {
          plVar9[8] = (longlong)puVar8;
          puVar8[3] = 0;
        }
        else {
          puVar8[3] = plVar9[8];
          plVar9[8] = (longlong)puVar8;
        }
        *puVar8 = 0;
        if (param_1[0x19] == 0) {
          param_1[0x19] = (longlong)puVar8;
          param_1[0x18] = (longlong)puVar8;
          puVar8[4] = param_1;
        }
        else {
          *(undefined8 **)param_1[0x18] = puVar8;
          param_1[0x18] = (longlong)puVar8;
          puVar8[4] = param_1;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar12 + 3));
      if (puVar8 != (undefined8 *)0x0) {
        *param_3 = plVar9;
        iVar10 = (int)param_1[0x16] + uVar6;
        *(int *)(param_1 + 0x16) = iVar10;
        if ((bVar4) || (iVar10 == (int)param_1[0x14])) {
          CAkStdStmBase::SetStatus(param_1,0);
        }
        param_1[0xb] = *(longlong *)(param_1[0xc] + 0x70);
        goto LAB_1431d22b9;
      }
    }
  }
LAB_1431d22b7:
  puVar8 = (undefined8 *)0x0;
LAB_1431d22b9:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return puVar8;
}



// FUNCTION 1431d23f0 ReleaseCachingBuffers body=416 status=ok
// SIG undefined ReleaseCachingBuffers(void)

int AK::StreamMgr::CAkAutoStmDeferredLinedUp::ReleaseCachingBuffers(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar15;
  char local_res10 [8];
  longlong *plVar14;
  
  plVar12 = (longlong *)0x0;
  plVar3 = *(longlong **)(param_1 + 0xd8);
  uVar13 = 0;
  plVar14 = plVar12;
  do {
    if ((plVar3 == (longlong *)0x0) || (uVar13 = (uint)plVar14, param_2 <= uVar13)) {
      CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::UpdateCompletedTransfers(param_1);
      iVar10 = FUN_1431ce780(param_1,param_2 - uVar13);
      local_res10[0] = *(longlong *)(param_1 + 0xe0) == 0;
      bVar15 = true;
      puVar7 = *(undefined8 **)(param_1 + 0xf0);
      while (puVar7 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar7;
        FUN_1431d4b40(puVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar15,
                      local_res10);
        bVar15 = local_res10[0] == '\0';
        puVar7 = puVar6;
      }
      return uVar13 + iVar10;
    }
    plVar4 = *(longlong **)(param_1 + 0xe0);
    uVar13 = uVar13 + (*(int *)(plVar3[1] + 0x18) - (int)plVar3[2]);
    plVar14 = (longlong *)(ulonglong)uVar13;
    plVar8 = plVar4;
    plVar9 = plVar4;
    plVar11 = plVar12;
    if (plVar4 == (longlong *)0x0) {
LAB_1431d2458:
      if (plVar9 != (longlong *)0x0) {
        if (plVar9 == plVar4) {
          *(longlong *)(param_1 + 0xe0) = *plVar9;
        }
        else {
          *plVar11 = *plVar9;
        }
        if (plVar9 == *(longlong **)(param_1 + 0xd8)) {
          *(longlong **)(param_1 + 0xd8) = plVar11;
        }
      }
    }
    else {
      do {
        plVar9 = plVar8;
        if (plVar9 == plVar3) goto LAB_1431d2458;
        plVar8 = (longlong *)*plVar9;
        plVar11 = plVar9;
      } while ((longlong *)*plVar9 != (longlong *)0x0);
    }
    if ((*(uint *)((longlong)plVar3 + 0x14) & 7) == 0) {
      plVar4 = (longlong *)plVar3[1];
      uVar1 = *(uint *)(plVar3 + 2);
      *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) & 0xfffffffa | 2;
      uVar2 = *(uint *)(param_1 + 0xa0);
      lVar5 = *plVar4;
      if ((lVar5 + (ulonglong)uVar1 < (ulonglong)uVar2) &&
         ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar4 + 3) + lVar5)) {
        iVar10 = (uVar2 - uVar1) - (int)lVar5;
      }
      else {
        iVar10 = (int)plVar4[3] - uVar1;
      }
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar10;
      *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(plVar3[1] + 0x18);
      if (*(longlong *)(param_1 + 0xf0) == 0) {
        *(longlong **)(param_1 + 0xf0) = plVar3;
        *plVar3 = 0;
      }
      else {
        *plVar3 = *(longlong *)(param_1 + 0xf0);
        *(longlong **)(param_1 + 0xf0) = plVar3;
      }
    }
    else {
      CAkAutoStmBase::AddMemView(param_1,plVar3,0);
      CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
    }
    plVar3 = *(longlong **)(param_1 + 0xd8);
  } while( true );
}



// FUNCTION 1431d2590 SetLoopEnd body=236 status=ok
// SIG undefined SetLoopEnd(void)

void AK::StreamMgr::CAkAutoStmDeferredLinedUp::SetLoopEnd(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 200);
  uVar7 = (uint)*(byte *)(param_1 + 0xd0);
  uVar5 = (ulonglong)param_2;
  *(uint *)(param_1 + 0xa0) = param_2;
  for (; iVar6 = 0, puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    iVar6 = 0;
    if (uVar7 == 0) goto joined_r0x0001431d25d5;
    uVar7 = uVar7 - 1;
  }
LAB_1431d261a:
  for (puVar1 = *(undefined8 **)(param_1 + 0xe0); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    plVar2 = (longlong *)puVar1[1];
    uVar7 = *(uint *)(puVar1 + 2);
    lVar3 = *plVar2;
    if ((lVar3 + (ulonglong)uVar7 < uVar5) && (uVar5 < (ulonglong)*(uint *)(plVar2 + 3) + lVar3)) {
      iVar4 = (param_2 - uVar7) - (int)lVar3;
    }
    else {
      iVar4 = (int)plVar2[3] - uVar7;
    }
    iVar6 = iVar6 + iVar4;
  }
  *(int *)(param_1 + 0xa8) = iVar6;
  return;
joined_r0x0001431d25d5:
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    plVar2 = (longlong *)puVar1[1];
    uVar7 = *(uint *)(puVar1 + 2);
    lVar3 = *plVar2;
    if ((lVar3 + (ulonglong)uVar7 < uVar5) && (uVar5 < (ulonglong)*(uint *)(plVar2 + 3) + lVar3)) {
      iVar4 = (param_2 - uVar7) - (int)lVar3;
    }
    else {
      iVar4 = (int)plVar2[3] - uVar7;
    }
    iVar6 = iVar6 + iVar4;
  }
  goto LAB_1431d261a;
}



// FUNCTION 1431d2680 Update body=255 status=ok
// SIG undefined Update(void)

undefined8
AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::Update
          (longlong param_1,longlong param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (((param_2 == 0) || (param_3 != 1)) ||
     (uVar1 = *(uint *)(param_2 + 0x14), ((byte)uVar1 & 7) == 2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (*(longlong *)(param_1 + 0xe0) != param_2) {
      uVar2 = uVar1 & 0xfffffffb | 3;
      if (param_4 != '\0') {
        uVar2 = uVar1 & 0xfffffff9 | 1;
      }
      *(uint *)(param_2 + 0x14) = uVar2;
      goto LAB_1431d2752;
    }
  }
  if (param_2 != 0) {
    PopTransferRequest(param_1,param_2,uVar4);
    if ((param_4 == '\0') && (((byte)*(uint *)(param_2 + 0x14) & 7) != 2)) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfffffffb | 3;
    }
    CAkAutoStmBase::AddMemView(param_1,param_2,uVar4);
    UpdateCompletedTransfers(param_1);
    uVar3 = 1;
  }
  CAkAutoStmBase::UpdateTaskStatus(param_1,param_3);
  CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
LAB_1431d2752:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar3;
}



// FUNCTION 1431d2780 Update body=255 status=ok
// SIG undefined Update(void)

undefined8
AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::Update
          (longlong param_1,longlong param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (((param_2 == 0) || (param_3 != 1)) ||
     (uVar1 = *(uint *)(param_2 + 0x14), ((byte)uVar1 & 7) == 2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (*(longlong *)(param_1 + 200) != param_2) {
      uVar2 = uVar1 & 0xfffffffb | 3;
      if (param_4 != '\0') {
        uVar2 = uVar1 & 0xfffffff9 | 1;
      }
      *(uint *)(param_2 + 0x14) = uVar2;
      goto LAB_1431d2852;
    }
  }
  if (param_2 != 0) {
    PopTransferRequest(param_1,param_2,uVar4);
    if ((param_4 == '\0') && (((byte)*(uint *)(param_2 + 0x14) & 7) != 2)) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xfffffffb | 3;
    }
    CAkStdStmBase::AddMemView(param_1,param_2,uVar4);
    UpdateCompletedTransfers(param_1);
    uVar3 = 1;
  }
  CAkStdStmBase::UpdateTaskStatus(param_1,param_3);
  CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
LAB_1431d2852:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar3;
}



// FUNCTION 1431d2880 UpdateCompletedTransfers body=209 status=ok
// SIG undefined UpdateCompletedTransfers(void)

void AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkAutoStmBase>::
     UpdateCompletedTransfers(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0xe0);
  if ((puVar5 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar5 + 0x14) & 7) != 0)) {
    do {
      if (((byte)*(undefined4 *)((longlong)puVar5 + 0x14) & 7) == 2) {
        puVar2 = *(undefined8 **)(param_1 + 0xf0);
        puVar4 = (undefined8 *)0x0;
        do {
          puVar3 = puVar4;
          puVar4 = puVar2;
          if (puVar4 == (undefined8 *)0x0) goto LAB_1431d291e;
          puVar2 = (undefined8 *)*puVar4;
        } while (puVar4 != puVar5);
        if (puVar4 == *(undefined8 **)(param_1 + 0xf0)) {
          *(undefined8 **)(param_1 + 0xf0) = puVar2;
        }
        else {
          *puVar3 = puVar2;
        }
      }
      else if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0xe0);
        if (lVar1 == 0) {
          *(undefined8 *)(param_1 + 0xe0) = 0;
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
        else {
          *(longlong *)(param_1 + 0xe0) = lVar1;
        }
      }
LAB_1431d291e:
      CAkAutoStmBase::AddMemView(param_1,puVar5,1);
      CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
      puVar5 = (undefined8 *)GetOldestCompletedTransfer(param_1);
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 1431d2960 UpdateCompletedTransfers body=209 status=ok
// SIG undefined UpdateCompletedTransfers(void)

void AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::
     UpdateCompletedTransfers(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 200);
  if ((puVar5 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar5 + 0x14) & 7) != 0)) {
    do {
      if (((byte)*(undefined4 *)((longlong)puVar5 + 0x14) & 7) == 2) {
        puVar2 = *(undefined8 **)(param_1 + 0xd8);
        puVar4 = (undefined8 *)0x0;
        do {
          puVar3 = puVar4;
          puVar4 = puVar2;
          if (puVar4 == (undefined8 *)0x0) goto LAB_1431d29fe;
          puVar2 = (undefined8 *)*puVar4;
        } while (puVar4 != puVar5);
        if (puVar4 == *(undefined8 **)(param_1 + 0xd8)) {
          *(undefined8 **)(param_1 + 0xd8) = puVar2;
        }
        else {
          *puVar3 = puVar2;
        }
      }
      else if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 200);
        if (lVar1 == 0) {
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
        else {
          *(longlong *)(param_1 + 200) = lVar1;
        }
      }
LAB_1431d29fe:
      CAkStdStmBase::AddMemView(param_1,puVar5,1);
      CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
      puVar5 = (undefined8 *)GetOldestCompletedTransfer(param_1);
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 1431d2a40 _CancelAllPendingTransfers body=260 status=ok
// SIG undefined _CancelAllPendingTransfers(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AK::StreamMgr::CAkStdStmDeferredLinedUp::_CancelAllPendingTransfers(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char local_res8 [8];
  
  local_res8[0] = '\x01';
  plVar4 = *(longlong **)(param_1 + 200);
  while (plVar4 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar4;
    plVar5 = plVar1;
    if (plVar4 == *(longlong **)(param_1 + 200)) {
      *(longlong **)(param_1 + 200) = plVar1;
      plVar5 = _DAT_00000000;
    }
    _DAT_00000000 = plVar5;
    if (plVar4 == *(longlong **)(param_1 + 0xc0)) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    if ((*(uint *)((longlong)plVar4 + 0x14) & 7) == 0) {
      *(uint *)((longlong)plVar4 + 0x14) = *(uint *)((longlong)plVar4 + 0x14) & 0xfffffffa | 2;
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        *(longlong **)(param_1 + 0xd8) = plVar4;
        *plVar4 = 0;
        plVar4 = plVar1;
      }
      else {
        *plVar4 = *(longlong *)(param_1 + 0xd8);
        *(longlong **)(param_1 + 0xd8) = plVar4;
        plVar4 = plVar1;
      }
    }
    else {
      CAkStdStmBase::AddMemView(param_1,plVar4,0);
      CAkIOThread::DecrementIOCount(*(undefined8 *)(param_1 + 0x60));
      plVar4 = plVar1;
    }
  }
  CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::UpdateCompletedTransfers(param_1);
  bVar6 = true;
  puVar3 = *(undefined8 **)(param_1 + 0xd8);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    FUN_1431d4b40(puVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x428),bVar6,local_res8);
    bVar6 = local_res8[0] == '\0';
    puVar3 = puVar2;
  }
  return;
}



// FUNCTION 1431d2b50 FUN_1431d2b50 body=305 status=ok
// SIG undefined FUN_1431d2b50(void)

undefined8 *
FUN_1431d2b50(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5,longlong *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_6 = 0;
  puVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0xf8);
  if (puVar3 == (undefined8 *)0x0) {
    AK::StreamMgr::CAkStreamMgr::ForceCleanup(param_1,*(undefined1 *)(param_4 + 0xd));
    puVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0xf8);
    if (puVar3 == (undefined8 *)0x0) goto LAB_1431d2c5d;
  }
  AK::StreamMgr::CAkAutoStmBase::CAkAutoStmBase(puVar3);
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1e] = 0;
  *puVar3 = &PTR__scalar_deleting_destructor__145ad00c8;
  puVar3[0x10] = &PTR_LAB_145ad0038;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = AK::StreamMgr::CAkAutoStmBase::Init
                      (puVar3,param_1,param_2,param_3,param_4,param_5,
                       *(undefined4 *)(param_1 + 0x430));
    lVar1 = DAT_1467be440;
    if (iVar2 == 1) {
      *param_6 = (longlong)(puVar3 + 0x10);
      return puVar3;
    }
    (**(code **)*puVar3)(puVar3,0);
    AK::MemoryMgr::Free(lVar1,puVar3);
  }
LAB_1431d2c5d:
  *param_6 = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 1431d2c90 _CreateStd body=248 status=ok
// SIG undefined _CreateStd(void)

undefined8 *
AK::StreamMgr::CAkDeviceDeferredLinedUp::_CreateStd
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_4 = 0;
  puVar3 = MemoryMgr::Malloc(DAT_1467be440,0xe0);
  if (puVar3 == (undefined8 *)0x0) {
    CAkStreamMgr::ForceCleanup(param_1,100);
    puVar3 = MemoryMgr::Malloc(DAT_1467be440,0xe0);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  CAkStdStmBase::CAkStdStmBase(puVar3);
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1b] = 0;
  *puVar3 = &PTR__scalar_deleting_destructor__145acfed8;
  puVar3[0x10] = &PTR_LAB_145acff40;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = CAkStdStmBase::Init(puVar3,param_1,param_2,param_3);
    lVar1 = DAT_1467be440;
    if (iVar2 == 1) {
      *param_4 = (longlong)(puVar3 + 0x10);
      return puVar3;
    }
    (**(code **)*puVar3)(puVar3,0);
    MemoryMgr::Free(lVar1,puVar3);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431d2d90 CAkClientThreadAware body=26 status=ok
// SIG undefined CAkClientThreadAware(void)

undefined8 * AK::StreamMgr::CAkClientThreadAware::CAkClientThreadAware(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145ad0158;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1431d2db0 CAkIOThread body=80 status=ok
// SIG undefined CAkIOThread(void)

undefined8 * AK::StreamMgr::CAkIOThread::CAkIOThread(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0160;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 1431d2e00 ~CAkClientThreadAware body=48 status=ok
// SIG undefined ~CAkClientThreadAware(void)

void AK::StreamMgr::CAkClientThreadAware::~CAkClientThreadAware(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0158;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1431d2e30 ~CAkIOThread body=21 status=ok
// SIG undefined ~CAkIOThread(void)

void AK::StreamMgr::CAkIOThread::~CAkIOThread(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0160;
                    /* WARNING: Could not recover jumptable at 0x0001431d2e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1431d2e50 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkClientThreadAware::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0158;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431d2eb0 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkIOThread::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0160;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1431d2f00 AutoSemDecr body=60 status=ok
// SIG undefined AutoSemDecr(void)

void AK::StreamMgr::CAkIOThread::AutoSemDecr(longlong param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  piVar1 = (int *)(param_1 + 100);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d2f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1431d2f40 AutoSemIncr body=69 status=ok
// SIG undefined AutoSemIncr(void)

void AK::StreamMgr::CAkIOThread::AutoSemIncr(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(int *)(param_1 + 100) == 1) && (*(char *)(param_1 + 0x68) == '\0')) {
    SetEvent(*(HANDLE *)(param_1 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d2f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1431d2f90 DecrementIOCount body=67 status=ok
// SIG undefined DecrementIOCount(void)

void AK::StreamMgr::CAkIOThread::DecrementIOCount(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 8) + -1) {
    SetEvent(*(HANDLE *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d2fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1431d2fe0 IOSchedThread body=283 status=ok
// SIG undefined IOSchedThread(void)

undefined8 AK::StreamMgr::CAkIOThread::IOSchedThread(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  DWORD DVar4;
  HANDLE local_38;
  longlong local_30;
  HANDLE local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = param_1[10];
  local_38 = (HANDLE)param_1[8];
  local_18 = param_1[0xb];
  local_30 = param_1[9];
  local_28 = local_38;
  (**(code **)(*param_1 + 0x18))();
LAB_1431d3030:
  while ((DVar4 = WaitForMultipleObjectsEx(2,&local_38,0,0xffffffff,1), DVar4 == 0 ||
         (DVar4 = WaitForMultipleObjectsEx(3,&local_28,0,0xffffffff,1), DVar4 == 0))) {
    cVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar3 != '\0') {
      return 0;
    }
    SleepEx(100,1);
  }
  if (2 < DVar4) goto code_r0x0001431d307d;
  goto LAB_1431d308b;
code_r0x0001431d307d:
  if (DVar4 != 0xc0) {
    if (DVar4 != 0x102) {
      return 1;
    }
LAB_1431d308b:
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    uVar1 = *(uint *)((longlong)param_1 + 0x6c);
    uVar2 = *(uint *)(param_1 + 1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (uVar1 < uVar2) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  goto LAB_1431d3030;
}



// FUNCTION 1431d3100 IncrementIOCount body=65 status=ok
// SIG undefined IncrementIOCount(void)

void AK::StreamMgr::CAkIOThread::IncrementIOCount(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0x6c)) {
    ResetEvent(*(HANDLE *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d313a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1431d3150 Init body=291 status=ok
// SIG undefined Init(void)

undefined8 AK::StreamMgr::CAkIOThread::Init(LPVOID param_1,int *param_2)

{
  BOOL BVar1;
  HANDLE pvVar2;
  DWORD_PTR DVar3;
  undefined8 uVar4;
  DWORD local_res8 [2];
  
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x50) = pvVar2;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x58) = pvVar2;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x40) = pvVar2;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x48) = pvVar2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)(uint)param_2[2],IOSchedThread,param_1
                        ,0,local_res8);
  *(HANDLE *)((longlong)param_1 + 0x10) = pvVar2;
  if (pvVar2 != (HANDLE)0x0) {
    AKPLATFORM::AkSetThreadName(local_res8[0],"AK::IOThread");
    BVar1 = SetThreadPriority(*(HANDLE *)((longlong)param_1 + 0x10),*param_2);
    if ((BVar1 != 0) || (*param_2 == 0x10000)) {
      if (param_2[1] == 0) goto LAB_1431d3241;
      DVar3 = SetThreadAffinityMask
                        (*(HANDLE *)((longlong)param_1 + 0x10),(ulonglong)(uint)param_2[1]);
      if (DVar3 != 0) goto LAB_1431d3241;
    }
    CloseHandle(*(HANDLE *)((longlong)param_1 + 0x10));
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
LAB_1431d3241:
  if ((((*(longlong *)((longlong)param_1 + 0x10) == 0) ||
       (*(longlong *)((longlong)param_1 + 0x40) == 0)) ||
      (*(longlong *)((longlong)param_1 + 0x50) == 0)) ||
     (uVar4 = 1, *(longlong *)((longlong)param_1 + 0x58) == 0)) {
    uVar4 = 2;
  }
  return uVar4;
}



// FUNCTION 1431d3280 NotifyMemChange body=28 status=ok
// SIG undefined NotifyMemChange(void)

void AK::StreamMgr::CAkIOThread::NotifyMemChange(longlong param_1)

{
  if ((*(char *)(param_1 + 0x68) != '\0') &&
     (*(undefined1 *)(param_1 + 0x68) = 0, 0 < *(int *)(param_1 + 100))) {
                    /* WARNING: Could not recover jumptable at 0x0001431d3294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetEvent(*(HANDLE *)(param_1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 1431d32a0 NotifyMemIdle body=22 status=ok
// SIG undefined NotifyMemIdle(void)

void AK::StreamMgr::CAkIOThread::NotifyMemIdle(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (0 < *(int *)(param_1 + 100)) {
                    /* WARNING: Could not recover jumptable at 0x0001431d32ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(*(HANDLE *)(param_1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 1431d32c0 SetBlockedStatus body=66 status=ok
// SIG undefined SetBlockedStatus(void)

void AK::StreamMgr::CAkClientThreadAware::SetBlockedStatus(longlong param_1)

{
  HANDLE pvVar1;
  
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 1431d3310 SignalIOCompleted body=15 status=ok
// SIG undefined SignalIOCompleted(void)

void AK::StreamMgr::CAkIOThread::SignalIOCompleted(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431d3318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(*(HANDLE *)(param_2 + 8));
  return;
}



// FUNCTION 1431d3320 StdSemDecr body=60 status=ok
// SIG undefined StdSemDecr(void)

void AK::StreamMgr::CAkIOThread::StdSemDecr(longlong param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  piVar1 = (int *)(param_1 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d3355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1431d3360 StdSemIncr body=63 status=ok
// SIG undefined StdSemIncr(void)

void AK::StreamMgr::CAkIOThread::StdSemIncr(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (*(int *)(param_1 + 0x60) == 1) {
    SetEvent(*(HANDLE *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d3398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1431d33a0 Term body=171 status=ok
// SIG undefined Term(void)

void AK::StreamMgr::CAkIOThread::Term(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 0x40) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x40));
    if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
      CloseHandle(*(HANDLE *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x50) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(HANDLE *)(param_1 + 0x58) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(HANDLE *)(param_1 + 0x48) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1431d3450 WaitForIOCompletion body=16 status=ok
// SIG undefined WaitForIOCompletion(void)

void AK::StreamMgr::CAkIOThread::WaitForIOCompletion(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001431d3459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject(*(HANDLE *)(param_2 + 8),0xffffffff);
  return;
}



// FUNCTION 1431d3460 AkBuddyBlockPool body=634 status=ok
// SIG undefined AkBuddyBlockPool(void)

undefined4 * AkBuddyBlockPool::AkBuddyBlockPool(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  param_1[0x66] = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  param_1[0x72] = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  param_1[0x84] = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  param_1[0x96] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  param_1[0xa2] = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  param_1[0xae] = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  param_1[0xba] = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  param_1[0xc3] = 0xffffffff;
  return param_1;
}



// FUNCTION 1431d36e0 CAkIOMemMgr body=69 status=ok
// SIG undefined CAkIOMemMgr(void)

undefined8 * AK::StreamMgr::CAkIOMemMgr::CAkIOMemMgr(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0190;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  AkBuddyBlockPool::AkBuddyBlockPool(param_1 + 7);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  return param_1;
}



// FUNCTION 1431d3730 ~CAkIOMemMgr body=11 status=ok
// SIG undefined ~CAkIOMemMgr(void)

void AK::StreamMgr::CAkIOMemMgr::~CAkIOMemMgr(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0190;
  return;
}



// FUNCTION 1431d3740 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SWorldWidgetScreenLayer>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0190;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 1431d3770 CloneTempBlock body=101 status=ok
// SIG undefined CloneTempBlock(void)

void AK::StreamMgr::CAkIOMemMgr::CloneTempBlock
               (undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = MemoryMgr::Malloc(DAT_1467be440,0x28);
  *param_3 = (longlong)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *puVar2 = 0;
    puVar2[1] = uVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 4) = 0xffffffff;
    *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)*param_3 = *param_2;
  }
  return;
}



// FUNCTION 1431d37e0 CoalesceBlock body=405 status=ok
// SIG undefined CoalesceBlock(void)

void AkBuddyBlockPool::CoalesceBlock(longlong param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)0x0;
  piVar1 = (int *)(param_1 + (ulonglong)param_2 * 0x18);
  puVar2 = *(undefined8 **)(param_1 + 0x10 + (ulonglong)param_2 * 0x18);
  puVar5 = puVar2;
  puVar4 = puVar7;
  while ((puVar6 = puVar5, puVar6 != (undefined8 *)0x0 && (puVar6 <= param_3))) {
    puVar4 = puVar6;
    puVar5 = (undefined8 *)*puVar6;
  }
  if (param_2 < *(int *)(param_1 + 0x31c) - 1U) {
    bVar3 = (char)*(undefined4 *)(param_1 + 0x318) + (char)param_2;
    iVar8 = 1 << (bVar3 + 1 & 0x1f);
    if (((puVar4 != (undefined8 *)0x0) &&
        ((iVar8 - 1U & (int)puVar4 - *(int *)(param_1 + 0x300)) == 0)) &&
       ((longlong)param_3 - (longlong)puVar4 == (ulonglong)(uint)(1 << (bVar3 & 0x1f)))) {
      puVar5 = puVar2;
      puVar6 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        while (puVar6 = puVar5, puVar6 != puVar4) {
          puVar5 = (undefined8 *)*puVar6;
          puVar7 = puVar6;
          if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
            CoalesceBlock(param_1,param_2 + 1);
            return;
          }
        }
      }
      if (puVar6 != (undefined8 *)0x0) {
        if (puVar6 == puVar2) {
          *(undefined8 *)(piVar1 + 4) = *puVar6;
        }
        else {
          *puVar7 = *puVar6;
        }
        if (puVar6 == *(undefined8 **)(piVar1 + 2)) {
          *(undefined8 **)(piVar1 + 2) = puVar7;
        }
        *piVar1 = *piVar1 + -1;
      }
      CoalesceBlock(param_1,param_2 + 1);
      return;
    }
    if (((puVar6 != (undefined8 *)0x0) &&
        ((iVar8 - 1U & (int)param_3 - *(int *)(param_1 + 0x300)) == 0)) &&
       ((longlong)puVar6 - (longlong)param_3 == (ulonglong)(uint)(1 << (bVar3 & 0x1f)))) {
      if (puVar6 == puVar2) {
        *(undefined8 *)(piVar1 + 4) = *puVar6;
      }
      else {
        *puVar4 = *puVar6;
      }
      if (puVar6 == *(undefined8 **)(piVar1 + 2)) {
        *(undefined8 **)(piVar1 + 2) = puVar4;
      }
      *piVar1 = *piVar1 + -1;
      CoalesceBlock(param_1,param_2 + 1,param_3);
      return;
    }
  }
  *param_3 = puVar6;
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 **)(piVar1 + 4) = param_3;
  }
  else {
    *puVar4 = param_3;
  }
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 **)(piVar1 + 2) = param_3;
  }
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1431d3980 CoalesceMem body=425 status=ok
// SIG undefined CoalesceMem(void)

void AkBuddyBlockPool::CoalesceMem(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  puVar9 = (undefined8 *)0x0;
  iVar7 = 0;
  iVar2 = *(int *)(param_1 + 0x318) + 1;
  bVar1 = (byte)iVar2;
  while ((param_3 & (1 << (bVar1 & 0x1f)) - 1U) == 0) {
    iVar2 = iVar2 + 1;
    bVar1 = (byte)iVar2;
    iVar7 = iVar7 + 1;
  }
  bVar1 = (char)*(int *)(param_1 + 0x318) + (char)iVar7;
  uVar3 = 1 << (bVar1 & 0x1f);
  puVar8 = puVar9;
  if (((param_3 & uVar3) != 0) && ((param_3 & uVar3 - 1) != 0)) {
    puVar8 = (undefined8 *)
             ((ulonglong)((-1 << (bVar1 + 1 & 0x1f) & param_3) + uVar3 + param_2) +
             *(longlong *)(param_1 + 0x300));
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      *puVar8 = 0;
    }
  }
  puVar8 = (undefined8 *)JoinAllocdBlock(param_1,iVar7,puVar8,param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x31c);
  uVar3 = iVar7 + 1;
  if (uVar3 < iVar2 - 1U) {
    do {
      bVar1 = (char)*(undefined4 *)(param_1 + 0x318) + (char)uVar3;
      uVar4 = 1 << (bVar1 & 0x1f);
      if (param_3 <= uVar4) break;
      if ((param_3 & uVar4) == 0) {
        if ((puVar8 != (undefined8 *)0x0) && ((uVar4 & *(int *)(param_1 + 0x310) - param_3) != 0)) {
          puVar8 = (undefined8 *)JoinFreeBlock(param_1,uVar3);
        }
      }
      else {
        puVar5 = (undefined8 *)
                 ((ulonglong)((-1 << (bVar1 + 1 & 0x1f) & param_3) + param_2) +
                 *(longlong *)(param_1 + 0x300));
        puVar6 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          iVar2 = *(int *)(param_1 + 0x31c);
          puVar6 = puVar5;
        }
        bVar10 = puVar8 == (undefined8 *)0x0;
        puVar8 = puVar6;
        if (bVar10) {
          if ((uVar3 < iVar2 - 1U) &&
             ((uint)(1 << ((char)*(undefined4 *)(param_1 + 0x318) + '\x01' + (char)uVar3 & 0x1fU)) <
              param_3)) {
            puVar8 = (undefined8 *)JoinFreeBlock(param_1,uVar3,puVar6);
          }
          else {
            CoalesceBlock(param_1,uVar3,puVar6);
            puVar8 = puVar9;
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0x31c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar2 - 1U);
  }
  if (puVar8 != (undefined8 *)0x0) {
    CoalesceBlock(param_1,uVar3);
  }
  return;
}



// FUNCTION 1431d3b30 DestroyTempBlock body=20 status=ok
// SIG undefined DestroyTempBlock(void)

void AK::StreamMgr::CAkIOMemMgr::DestroyTempBlock(undefined8 param_1,void *param_2,void *param_3)

{
  if (param_3 != param_2) {
    MemoryMgr::Free(DAT_1467be440,param_3);
    return;
  }
  return;
}



// FUNCTION 1431d3b50 Erase body=91 status=ok
// SIG undefined Erase(void)

void AkArray<AK::StreamMgr::AkMemBlock_*,AK::StreamMgr::AkMemBlock_*,AkArrayAllocatorNoAlign<7>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<AK::StreamMgr::AkMemBlock_*>_>
     ::Erase(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) - 1) * 8);
  puVar2 = (undefined8 *)(*param_1 + (ulonglong)param_2 * 8);
  if (puVar2 < puVar3) {
    lVar1 = ((ulonglong)((longlong)puVar3 + (-1 - (longlong)puVar2)) >> 3) + 1;
    puVar3 = puVar2;
    for (; puVar2 = puVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return;
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) - 1;
  return;
}



// FUNCTION 1431d3bb0 FlushCache body=183 status=ok
// SIG undefined FlushCache(void)

void AK::StreamMgr::CAkIOMemMgr::FlushCache(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 != plVar2 + *(uint *)(param_1 + 0x30)) {
      do {
        *(undefined4 *)(*plVar2 + 0x20) = 0xffffffff;
        pvVar1 = (void *)*plVar2;
        if (*(short *)((longlong)pvVar1 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)pvVar1 + 0x1c);
          AkBuddyBlockPool::CoalesceMem
                    (param_1 + 0x38,*(int *)((longlong)pvVar1 + 8) - *(int *)(param_1 + 0x338),
                     *(undefined4 *)((longlong)pvVar1 + 0x1c));
          MemoryMgr::Free(DAT_1467be440,pvVar1);
          CAkIOThread::NotifyMemChange(*(undefined8 *)(param_1 + 0x360));
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (longlong *)
                         (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1431d3c70 GetCachedBlock body=515 status=ok
// SIG undefined GetCachedBlock(void)

uint AK::StreamMgr::CAkIOMemMgr::GetCachedBlock
               (longlong param_1,uint param_2,ulonglong param_3,uint param_4,uint param_5,
               char param_6,uint *param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  short sVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  *param_8 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    iVar1 = iVar2 + -1;
    iVar11 = 0;
    do {
      uVar13 = iVar11 + (iVar1 - iVar11) / 2;
      puVar12 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar13 * 8);
      uVar14 = (uint)puVar12[4];
      iVar15 = (int)param_3;
      if (param_2 < uVar14) {
        iVar8 = -1;
      }
      else {
        if (param_2 <= uVar14) {
          uVar10 = *puVar12;
          if (uVar10 < param_3) {
            iVar8 = -1;
            goto LAB_1431d3cfe;
          }
          if (uVar10 <= param_3) {
            if ((puVar12 != (ulonglong *)0x0) &&
               (param_3 <= ((ulonglong)*param_7 - (ulonglong)param_4) + uVar10)) goto LAB_1431d3d7e;
            break;
          }
        }
        iVar8 = 1;
      }
LAB_1431d3cfe:
      iVar5 = uVar13 - 1;
      if (-1 < iVar8) {
        iVar11 = uVar13 + 1;
        iVar5 = iVar1;
      }
      iVar1 = iVar5;
    } while (iVar11 <= iVar1);
    if ((((param_2 == uVar14) && (uVar10 = *puVar12, uVar10 <= param_3)) &&
        (iVar15 <= (int)(((int)puVar12[3] - param_4) + (int)uVar10))) ||
       ((((int)(uVar13 + 1) < iVar2 &&
         (puVar12 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar13 + 1) * 8),
         param_2 == (uint)puVar12[4])) &&
        ((uVar10 = *puVar12, uVar10 <= param_3 &&
         (iVar15 <= (int)(((int)puVar12[3] - param_4) + (int)uVar10))))))) {
LAB_1431d3d7e:
      uVar13 = iVar15 - (int)uVar10;
      uVar14 = (int)puVar12[3] - uVar13;
      if (((uVar14 <= *param_7) &&
          (((uVar14 % param_5 == 0 || ((param_6 != '\0' && (uVar14 == *param_7)))) &&
           ((puVar12[1] + (ulonglong)uVar13) % (ulonglong)param_5 == 0)))) && (param_4 <= uVar14)) {
        *param_7 = uVar14;
        sVar6 = *(short *)((longlong)puVar12 + 0x24);
        if (sVar6 == 0) {
          puVar3 = *(ulonglong **)(param_1 + 0x18);
          puVar9 = (ulonglong *)0x0;
          puVar4 = puVar3;
          puVar7 = puVar3;
          if (puVar3 == (ulonglong *)0x0) {
LAB_1431d3e04:
            if (puVar7 != (ulonglong *)0x0) {
              if (puVar7 == puVar3) {
                *(ulonglong *)(param_1 + 0x18) = puVar7[2];
              }
              else {
                puVar9[2] = puVar7[2];
              }
              if (puVar7 == *(ulonglong **)(param_1 + 0x10)) {
                *(ulonglong **)(param_1 + 0x10) = puVar9;
              }
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
            }
          }
          else {
            do {
              puVar7 = puVar4;
              if (puVar7 == puVar12) goto LAB_1431d3e04;
              puVar4 = (ulonglong *)puVar7[2];
              puVar9 = puVar7;
            } while ((ulonglong *)puVar7[2] != (ulonglong *)0x0);
          }
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)puVar12[3];
          sVar6 = *(short *)((longlong)puVar12 + 0x24);
          puVar12[2] = 0;
        }
        *(short *)((longlong)puVar12 + 0x24) = sVar6 + 1;
        *param_8 = puVar12;
        return uVar13;
      }
    }
  }
  return 0;
}



// FUNCTION 1431d3e80 FUN_1431d3e80 body=588 status=ok
// SIG undefined FUN_1431d3e80(void)

void FUN_1431d3e80(longlong param_1,int param_2,uint param_3,longlong *param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  param_3 = ((param_2 - 1U) - (param_2 - 1U) % param_3) + param_3;
  do {
    while( true ) {
      puVar8 = (ulonglong *)0x0;
      puVar5 = puVar8;
      if (((param_3 <= *(uint *)(param_1 + 0x348)) && (param_3 != 0)) &&
         (uVar4 = AkBuddyBlockPool::SubdivideMem(param_1 + 0x38,param_3), uVar4 != 0)) {
        puVar5 = AK::MemoryMgr::Malloc(DAT_1467be440,0x28);
        if (puVar5 == (ulonglong *)0x0) {
          AkBuddyBlockPool::CoalesceMem
                    (param_1 + 0x38,(int)uVar4 - *(int *)(param_1 + 0x338),param_3);
          puVar5 = puVar8;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = uVar4;
          puVar5[2] = 0;
          *(undefined4 *)(puVar5 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)puVar5 + 0x24) = 0;
          *(uint *)((longlong)puVar5 + 0x1c) = param_3;
          *(int *)(puVar5 + 3) = param_2;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
        }
      }
      *param_4 = (longlong)puVar5;
      if (puVar5 != (ulonglong *)0x0) goto LAB_1431d409d;
      lVar7 = *(longlong *)(param_1 + 0x18);
      *param_4 = lVar7;
      if (lVar7 == 0) {
        AK::StreamMgr::CAkIOThread::NotifyMemIdle(*(undefined8 *)(param_1 + 0x360));
        return;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(lVar7 + 0x18);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        puVar5 = *(ulonglong **)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (puVar5 == (ulonglong *)0x0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          puVar5 = puVar8;
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        *(ulonglong **)(param_1 + 0x18) = puVar5;
      }
      *(undefined8 *)(*param_4 + 0x10) = 0;
      puVar5 = (ulonglong *)*param_4;
      if (*(uint *)((longlong)puVar5 + 0x1c) == param_3) break;
      uVar1 = (uint)puVar5[4];
      if (uVar1 != 0xffffffff) {
        uVar13 = *(uint *)(param_1 + 0x30);
        lVar7 = *(longlong *)(param_1 + 0x28);
        iVar12 = uVar13 - 1;
        while( true ) {
          uVar11 = (int)puVar8 + (iVar12 - (int)puVar8) / 2;
          puVar2 = *(ulonglong **)(lVar7 + (ulonglong)uVar11 * 8);
          puVar9 = (undefined8 *)(lVar7 + (ulonglong)uVar11 * 8);
          if ((uint)puVar2[4] <= uVar1) break;
          iVar6 = -1;
LAB_1431d3ffe:
          iVar3 = uVar11 - 1;
          if (-1 < iVar6) {
            puVar8 = (ulonglong *)(ulonglong)(uVar11 + 1);
            iVar3 = iVar12;
          }
          iVar12 = iVar3;
          if (iVar12 < (int)puVar8) goto LAB_1431d4045;
        }
        if ((uint)puVar2[4] < uVar1) {
LAB_1431d3ff9:
          iVar6 = 1;
          goto LAB_1431d3ffe;
        }
        if (*puVar2 < *puVar5) {
          iVar6 = -1;
          goto LAB_1431d3ffe;
        }
        if (*puVar5 < *puVar2) goto LAB_1431d3ff9;
        if (puVar5[1] < puVar2[1]) {
          iVar6 = -1;
          goto LAB_1431d3ffe;
        }
        if (puVar2[1] < puVar5[1]) goto LAB_1431d3ff9;
        puVar10 = (undefined8 *)(lVar7 + ((ulonglong)uVar13 - 1) * 8);
        if (puVar9 < puVar10) {
          lVar7 = ((ulonglong)((longlong)puVar10 + (-1 - (longlong)puVar9)) >> 3) + 1;
          puVar10 = puVar9;
          for (; puVar9 = puVar9 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = *puVar9;
            puVar10 = puVar10 + 1;
          }
          uVar13 = *(uint *)(param_1 + 0x30);
        }
        *(uint *)(param_1 + 0x30) = uVar13 - 1;
LAB_1431d4045:
        *(undefined4 *)(puVar5 + 4) = 0xffffffff;
        puVar5 = (ulonglong *)*param_4;
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)puVar5 + 0x1c);
      AkBuddyBlockPool::CoalesceMem
                (param_1 + 0x38,(int)puVar5[1] - *(int *)(param_1 + 0x338),
                 *(undefined4 *)((longlong)puVar5 + 0x1c));
      AK::MemoryMgr::Free(DAT_1467be440,puVar5);
      AK::StreamMgr::CAkIOThread::NotifyMemChange(*(undefined8 *)(param_1 + 0x360));
      *param_4 = 0;
    }
  } while (puVar5 == (ulonglong *)0x0);
LAB_1431d409d:
  *(short *)((longlong)puVar5 + 0x24) = *(short *)((longlong)puVar5 + 0x24) + 1;
  return;
}



// FUNCTION 1431d40d0 FUN_1431d40d0 body=486 status=ok
// SIG undefined FUN_1431d40d0(void)

undefined8 FUN_1431d40d0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  
  *(undefined8 *)(param_1 + 0x360) = param_3;
  uVar16 = *(uint *)((longlong)param_2 + 0x14);
  plVar17 = (longlong *)0x0;
  uVar4 = (ulonglong)*(uint *)(param_2 + 1) / (ulonglong)uVar16;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar5 = (int)uVar4;
  uVar14 = uVar16 * iVar5;
  uVar16 = 0;
  if (uVar14 != 0) {
    uVar13 = 0x200;
    if (0x200 < *(uint *)((longlong)param_2 + 0xc)) {
      do {
        uVar13 = uVar13 * 2;
      } while (uVar13 < *(uint *)((longlong)param_2 + 0xc));
    }
    for (uVar11 = uVar13; uVar11 < *(uint *)((longlong)param_2 + 0x14); uVar11 = uVar11 * 2) {
    }
    pvVar8 = (void *)*param_2;
    uVar2 = *(uint *)(param_2 + 2);
    if ((((uVar11 != 0) && ((uVar11 & uVar11 - 1) == 0)) && (uVar13 != 0)) &&
       (uVar6 = uVar13 - 1, (uVar13 & uVar6) == 0)) {
      *(uint *)(param_1 + 0x348) = uVar11;
      *(uint *)(param_1 + 0x34c) = uVar13;
      plVar10 = plVar17;
      do {
        uVar11 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar11;
        uVar6 = uVar6 >> 1;
      } while (uVar6 != 0);
      *(uint *)(param_1 + 0x350) = uVar11;
      plVar10 = plVar17;
      for (uVar6 = *(int *)(param_1 + 0x348) - 1; uVar6 != 0; uVar6 = uVar6 >> 1) {
        uVar16 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar16;
      }
      uVar16 = (uVar16 - uVar11) + 1;
      *(uint *)(param_1 + 0x354) = uVar16;
      if (uVar16 < 0x21) {
        lVar7 = AK::MemoryMgr::CreatePool(pvVar8,uVar14,uVar14,uVar2 | 8,uVar13);
        *(long *)(param_1 + 0x344) = lVar7;
        if (lVar7 != -1) {
          AK::MemoryMgr::SetMonitoring(lVar7,false);
          pvVar8 = AK::MemoryMgr::GetBlock(*(long *)(param_1 + 0x344));
          *(void **)(param_1 + 0x338) = pvVar8;
          iVar15 = uVar14 - uVar14 % *(uint *)(param_1 + 0x348);
          *(int *)(param_1 + 0x340) = iVar15;
          if (iVar15 != 0) {
            uVar16 = iVar15 - *(uint *)(param_1 + 0x348);
            while( true ) {
              plVar9 = (longlong *)((ulonglong)uVar16 + *(longlong *)(param_1 + 0x338));
              plVar10 = plVar17;
              if (plVar9 != (longlong *)0x0) {
                *plVar9 = 0;
                plVar10 = plVar9;
              }
              uVar12 = (ulonglong)(*(int *)(param_1 + 0x354) - 1);
              lVar3 = *(longlong *)(param_1 + 0x48 + uVar12 * 0x18);
              if (lVar3 == 0) {
                *(longlong **)(param_1 + 0x48 + uVar12 * 0x18) = plVar10;
                *(longlong **)(param_1 + 0x40 + uVar12 * 0x18) = plVar10;
                *plVar10 = 0;
              }
              else {
                *plVar10 = lVar3;
                *(longlong **)(param_1 + 0x48 + uVar12 * 0x18) = plVar10;
              }
              piVar1 = (int *)(param_1 + 0x38 + uVar12 * 0x18);
              *piVar1 = *piVar1 + 1;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - *(int *)(param_1 + 0x348);
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x344) == -1) {
    if (*(int *)(param_2 + 1) != 0) {
      return 2;
    }
  }
  else {
    if (iVar5 != 0) {
      pvVar8 = AK::MemoryMgr::Malloc(DAT_1467be440,uVar4 << 3);
      *(void **)(param_1 + 0x28) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        return 2;
      }
      *(int *)(param_1 + 0x34) = iVar5;
    }
    *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 6);
  }
  return 1;
}



// FUNCTION 1431d42c0 JoinAllocdBlock body=138 status=ok
// SIG undefined JoinAllocdBlock(void)

undefined8 *
AkBuddyBlockPool::JoinAllocdBlock
          (longlong param_1,uint param_2,longlong param_3,int param_4,uint param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           ((ulonglong)
            (param_4 +
            (-1 << ((char)*(undefined4 *)(param_1 + 0x318) + '\x01' + (char)param_2 & 0x1fU) &
            param_5)) + *(longlong *)(param_1 + 0x300));
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
  }
  if (param_3 == 0) {
    if ((param_2 < *(int *)(param_1 + 0x31c) - 1U) &&
       ((uint)(1 << ((char)*(undefined4 *)(param_1 + 0x318) + '\x01' + (char)param_2 & 0x1fU)) <
        param_5)) {
      puVar1 = (undefined8 *)JoinFreeBlock(param_1,param_2,puVar1);
      return puVar1;
    }
    CoalesceBlock(param_1,param_2,puVar1);
    return (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1431d4350 JoinFreeBlock body=178 status=ok
// SIG undefined JoinFreeBlock(void)

undefined8 * AkBuddyBlockPool::JoinFreeBlock(longlong param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  puVar4 = *(undefined8 **)(param_1 + 0x10 + uVar5 * 0x18);
  puVar3 = (undefined8 *)0x0;
  while ((puVar2 = puVar4, puVar2 != (undefined8 *)0x0 && (puVar2 <= param_3))) {
    puVar3 = puVar2;
    puVar4 = (undefined8 *)*puVar2;
  }
  if (((param_2 < *(int *)(param_1 + 0x31c) - 1U) && (puVar2 != (undefined8 *)0x0)) &&
     ((longlong)puVar2 - (longlong)param_3 ==
      (ulonglong)(uint)(1 << ((char)*(undefined4 *)(param_1 + 0x318) + (char)param_2 & 0x1fU)))) {
    if (puVar2 == *(undefined8 **)(param_1 + 0x10 + uVar5 * 0x18)) {
      *(undefined8 *)(param_1 + 0x10 + uVar5 * 0x18) = *puVar2;
    }
    else {
      *puVar3 = *puVar2;
    }
    if (puVar2 == *(undefined8 **)(param_1 + 8 + uVar5 * 0x18)) {
      *(undefined8 **)(param_1 + 8 + uVar5 * 0x18) = puVar3;
    }
    piVar1 = (int *)(param_1 + uVar5 * 0x18);
    *piVar1 = *piVar1 + -1;
    return param_3;
  }
  *param_3 = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x10 + uVar5 * 0x18) = param_3;
  }
  else {
    *puVar3 = param_3;
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8 + uVar5 * 0x18) = param_3;
  }
  piVar1 = (int *)(param_1 + uVar5 * 0x18);
  *piVar1 = *piVar1 + 1;
  return (undefined8 *)0x0;
}



// FUNCTION 1431d4410 FUN_1431d4410 body=166 status=ok
// SIG undefined FUN_1431d4410(void)

short FUN_1431d4410(longlong param_1,void *param_2)

{
  short sVar1;
  
  sVar1 = *(short *)((longlong)param_2 + 0x24) + -1;
  *(short *)((longlong)param_2 + 0x24) = sVar1;
  if (sVar1 == 0) {
    if (*(int *)((longlong)param_2 + 0x20) == -1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)param_2 + 0x1c);
      AkBuddyBlockPool::CoalesceMem
                (param_1 + 0x38,*(int *)((longlong)param_2 + 8) - *(int *)(param_1 + 0x338),
                 *(undefined4 *)((longlong)param_2 + 0x1c));
      AK::MemoryMgr::Free(DAT_1467be440,param_2);
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_2 + 0x10) = 0;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(void **)(param_1 + 0x18) = param_2;
        *(void **)(param_1 + 0x10) = param_2;
      }
      else {
        *(void **)(*(longlong *)(param_1 + 0x10) + 0x10) = param_2;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(void **)(param_1 + 0x10) = param_2;
      }
    }
    AK::StreamMgr::CAkIOThread::NotifyMemChange(*(undefined8 *)(param_1 + 0x360));
  }
  return sVar1;
}



// FUNCTION 1431d44c0 SubdivideMem body=340 status=ok
// SIG undefined SubdivideMem(void)

undefined8 * AkBuddyBlockPool::SubdivideMem(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  
  puVar9 = (undefined8 *)0x0;
  if (0 < *(int *)(param_1 + 0x31c)) {
    iVar6 = *(int *)(param_1 + 0x318);
    plVar11 = (longlong *)(param_1 + 0x10);
    puVar12 = puVar9;
    puVar5 = puVar9;
    do {
      iVar13 = (int)puVar5;
      if ((param_2 <= (uint)(1 << ((byte)iVar6 & 0x1f))) && (*plVar11 != 0)) {
        lVar4 = (longlong)iVar13;
        puVar12 = *(undefined8 **)(param_1 + 0x10 + lVar4 * 0x18);
        if (puVar12 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar5 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 8 + lVar4 * 0x18) = 0;
          puVar5 = puVar9;
        }
        *(undefined8 **)(param_1 + 0x10 + lVar4 * 0x18) = puVar5;
        piVar8 = (int *)(param_1 + lVar4 * 0x18);
        *piVar8 = *piVar8 + -1;
        if (puVar12 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        iVar6 = *(int *)(param_1 + 0x300);
        iVar13 = iVar13 + -1;
        lVar4 = (longlong)iVar13;
        if (-1 < iVar13) {
          piVar8 = (int *)(param_1 + lVar4 * 0x18);
          do {
            uVar3 = 1 << ((char)*(undefined4 *)(param_1 + 0x318) + (char)iVar13 & 0x1fU);
            uVar10 = *(int *)(param_1 + 0x310) - param_2;
            if ((uVar3 & uVar10) != 0) {
              puVar7 = (undefined8 *)
                       ((ulonglong)
                        ((*(int *)(param_1 + 0x310) - (-uVar3 & uVar10)) + ((int)puVar12 - iVar6)) +
                       *(longlong *)(param_1 + 0x300));
              puVar5 = puVar9;
              if (puVar7 != (undefined8 *)0x0) {
                *puVar7 = 0;
                puVar5 = puVar7;
              }
              puVar2 = *(undefined8 **)(piVar8 + 4);
              puVar7 = puVar9;
              while ((puVar1 = puVar2, puVar1 != (undefined8 *)0x0 && (puVar1 < puVar5))) {
                puVar7 = puVar1;
                puVar2 = (undefined8 *)*puVar1;
              }
              *puVar5 = puVar1;
              if (puVar7 == (undefined8 *)0x0) {
                *(undefined8 **)(piVar8 + 4) = puVar5;
              }
              else {
                *puVar7 = puVar5;
              }
              if (puVar1 == (undefined8 *)0x0) {
                *(undefined8 **)(piVar8 + 2) = puVar5;
              }
              *piVar8 = *piVar8 + 1;
            }
            iVar13 = iVar13 + -1;
            piVar8 = piVar8 + -6;
            lVar4 = lVar4 + -1;
          } while (-1 < lVar4);
        }
        return puVar12;
      }
      puVar5 = (undefined8 *)(ulonglong)(iVar13 + 1);
      iVar6 = iVar6 + 1;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      plVar11 = plVar11 + 3;
    } while ((longlong)puVar12 < (longlong)*(int *)(param_1 + 0x31c));
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431d4620 FUN_1431d4620 body=800 status=ok
// SIG undefined FUN_1431d4620(void)

undefined8
FUN_1431d4620(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4,ulonglong param_5,
             undefined4 param_6)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    *param_2 = param_5;
    *(undefined4 *)(param_2 + 3) = param_6;
    param_2[2] = param_3;
    return 1;
  }
  uVar10 = 0;
  bVar17 = false;
  uVar12 = *(uint *)(param_1 + 0x30);
  uVar11 = (ulonglong)uVar12;
  if (uVar12 != 0) {
    iVar16 = uVar12 - 1;
    uVar8 = uVar10;
    do {
      uVar12 = (int)uVar8 + (iVar16 - (int)uVar8) / 2;
      puVar2 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar12 * 8);
      if ((uint)param_2[4] < (uint)puVar2[4]) {
        iVar6 = -1;
      }
      else {
        if ((uint)param_2[4] <= (uint)puVar2[4]) {
          if (*puVar2 < *param_2) {
            iVar6 = -1;
            goto LAB_1431d46eb;
          }
          if (*puVar2 <= *param_2) {
            if (param_2[1] < puVar2[1]) {
              iVar6 = -1;
              goto LAB_1431d46eb;
            }
            if (param_2[1] <= puVar2[1]) {
              bVar17 = true;
              uVar11 = (ulonglong)uVar12;
              break;
            }
          }
        }
        iVar6 = 1;
      }
LAB_1431d46eb:
      iVar3 = uVar12 - 1;
      if (-1 < iVar6) {
        uVar8 = (ulonglong)(uVar12 + 1);
        iVar3 = iVar16;
      }
      iVar16 = iVar3;
    } while ((int)uVar8 <= iVar16);
  }
  uVar12 = (uint)uVar11;
  if (param_4 == 0xffffffff) {
    if (bVar17) {
      AkArray<AK::StreamMgr::AkMemBlock_*,AK::StreamMgr::AkMemBlock_*,AkArrayAllocatorNoAlign<7>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<AK::StreamMgr::AkMemBlock_*>_>
      ::Erase(param_1 + 0x28,uVar11);
    }
    uVar4 = 2;
    goto LAB_1431d48f2;
  }
  if (bVar17) {
LAB_1431d47ec:
    uVar15 = *(int *)(param_1 + 0x30) - 1;
    do {
      uVar13 = (int)uVar10 + (int)(uVar15 - (int)uVar10) / 2;
      uVar8 = (ulonglong)uVar13;
      puVar2 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
      if (param_4 < (uint)puVar2[4]) {
        iVar16 = -1;
      }
      else {
        if (param_4 <= (uint)puVar2[4]) {
          if (*puVar2 < param_5) {
            iVar16 = -1;
            goto LAB_1431d4850;
          }
          if (*puVar2 <= param_5) {
            if (param_2[1] < puVar2[1]) {
              iVar16 = -1;
              goto LAB_1431d4850;
            }
            if (param_2[1] <= puVar2[1]) {
              bVar19 = SBORROW4(uVar13,uVar13);
              bVar18 = false;
              bVar17 = true;
              break;
            }
          }
        }
        iVar16 = 1;
      }
LAB_1431d4850:
      uVar8 = uVar10;
      uVar9 = uVar13 - 1;
      if (-1 < iVar16) {
        uVar8 = (ulonglong)(uVar13 + 1);
        uVar9 = uVar15;
      }
      uVar15 = uVar9;
      uVar9 = (uint)uVar8;
      bVar19 = SBORROW4(uVar15,uVar9);
      bVar18 = (int)(uVar15 - uVar9) < 0;
      bVar17 = uVar15 == uVar9;
      uVar10 = uVar8;
      uVar13 = uVar15;
    } while ((int)uVar9 <= (int)uVar15);
    if (!bVar17 && bVar19 == bVar18) {
      uVar8 = (ulonglong)uVar13;
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar11 * 8);
    lVar14 = uVar11 * 8;
    uVar15 = (uint)uVar8;
    if (uVar12 < uVar15) {
      uVar8 = (ulonglong)(uVar15 - 1);
      while (uVar13 = uVar12 + 1, uVar13 <= uVar15 - 1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar12 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar13 * 8);
        uVar12 = uVar13;
      }
    }
    else if (uVar15 < uVar12) {
      do {
        lVar14 = lVar14 + -8;
        uVar12 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar12;
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + lVar14) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar11 * 8);
      } while (uVar15 < uVar12);
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8) = uVar4;
      uVar4 = 1;
      goto LAB_1431d48f2;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8) = uVar4;
    uVar4 = 1;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x30);
    if (uVar15 < *(uint *)(param_1 + 0x34)) {
LAB_1431d47cf:
      uVar15 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = uVar15 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar15 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = param_2;
        goto LAB_1431d47ec;
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x34) + 1;
      pvVar5 = AK::MemoryMgr::Malloc(DAT_1467be440,(ulonglong)uVar13 << 3);
      if (pvVar5 != (void *)0x0) {
        pvVar7 = *(void **)(param_1 + 0x28);
        if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar5)) {
          uVar9 = *(uint *)(param_1 + 0x30);
          uVar8 = uVar10;
          if ((ulonglong)uVar9 != 0) {
            do {
              *(undefined8 *)((longlong)pvVar5 + uVar8 * 8) =
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
            pvVar7 = *(void **)(param_1 + 0x28);
          }
          AK::MemoryMgr::Free(DAT_1467be440,pvVar7);
        }
        *(uint *)(param_1 + 0x34) = uVar13;
        *(void **)(param_1 + 0x28) = pvVar5;
        if (uVar15 < uVar13) goto LAB_1431d47cf;
      }
    }
    uVar4 = 2;
  }
LAB_1431d48f2:
  *(uint *)(param_2 + 4) = param_4;
  *param_2 = param_5;
  *(undefined4 *)(param_2 + 3) = param_6;
  param_2[2] = param_3;
  return uVar4;
}



// FUNCTION 1431d4940 Term body=271 status=ok
// SIG undefined Term(void)

void AK::StreamMgr::CAkIOMemMgr::Term(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 != plVar2 + *(uint *)(param_1 + 0x30)) {
      do {
        *(undefined4 *)(*plVar2 + 0x20) = 0xffffffff;
        pvVar1 = (void *)*plVar2;
        if (*(short *)((longlong)pvVar1 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)pvVar1 + 0x1c);
          AkBuddyBlockPool::CoalesceMem
                    (param_1 + 0x38,*(int *)((longlong)pvVar1 + 8) - *(int *)(param_1 + 0x338),
                     *(undefined4 *)((longlong)pvVar1 + 0x1c));
          MemoryMgr::Free(DAT_1467be440,pvVar1);
          CAkIOThread::NotifyMemChange(*(undefined8 *)(param_1 + 0x360));
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (longlong *)
                         (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    MemoryMgr::Free(DAT_1467be440,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x344) != -1) {
    MemoryMgr::ReleaseBlock(*(int *)(param_1 + 0x344),*(void **)(param_1 + 0x338));
    *(undefined8 *)(param_1 + 0x338) = 0;
    MemoryMgr::DestroyPool(*(long *)(param_1 + 0x344));
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}



// FUNCTION 1431d4a50 UntagBlock body=226 status=ok
// SIG undefined UntagBlock(void)

void AK::StreamMgr::CAkIOMemMgr::UntagBlock(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  
  uVar6 = *(uint *)(param_1 + 0x30);
  lVar5 = *(longlong *)(param_1 + 0x28);
  iVar7 = 0;
  iVar10 = uVar6 - 1;
  do {
    uVar1 = iVar7 + (iVar10 - iVar7) / 2;
    puVar2 = *(ulonglong **)(lVar5 + (ulonglong)uVar1 * 8);
    puVar8 = (undefined8 *)(lVar5 + (ulonglong)uVar1 * 8);
    if ((uint)param_2[4] < (uint)puVar2[4]) {
      iVar4 = -1;
    }
    else {
      if ((uint)param_2[4] <= (uint)puVar2[4]) {
        if (*puVar2 < *param_2) {
          iVar4 = -1;
          goto LAB_1431d4ace;
        }
        if (*puVar2 <= *param_2) {
          if (param_2[1] < puVar2[1]) {
            iVar4 = -1;
            goto LAB_1431d4ace;
          }
          if (param_2[1] <= puVar2[1]) {
            puVar9 = (undefined8 *)(lVar5 + ((ulonglong)uVar6 - 1) * 8);
            if (puVar8 < puVar9) {
              lVar5 = ((ulonglong)((longlong)puVar9 + (-1 - (longlong)puVar8)) >> 3) + 1;
              puVar9 = puVar8;
              for (; puVar8 = puVar8 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar9 = *puVar8;
                puVar9 = puVar9 + 1;
              }
              uVar6 = *(uint *)(param_1 + 0x30);
            }
            *(uint *)(param_1 + 0x30) = uVar6 - 1;
LAB_1431d4b13:
            *(undefined4 *)(param_2 + 4) = 0xffffffff;
            return;
          }
        }
      }
      iVar4 = 1;
    }
LAB_1431d4ace:
    iVar3 = uVar1 - 1;
    if (-1 < iVar4) {
      iVar7 = uVar1 + 1;
      iVar3 = iVar10;
    }
    iVar10 = iVar3;
    if (iVar10 < iVar7) goto LAB_1431d4b13;
  } while( true );
}



// FUNCTION 1431d4b40 FUN_1431d4b40 body=204 status=ok
// SIG undefined FUN_1431d4b40(void)

void FUN_1431d4b40(longlong param_1,longlong *param_2,char param_3,char *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (((lVar3 != 0) && (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x18) == 0)) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x20) == *(longlong *)(lVar3 + 0x48))) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x20) != -1) {
      AK::StreamMgr::CAkIOMemMgr::UntagBlock(lVar2 + 0xc0);
    }
    cVar1 = *param_4;
    if (param_3 != '\0') {
      if ((*(byte *)(lVar3 + 0x50) & 1) == 0) {
        (**(code **)(*param_2 + 0x38))
                  (param_2,*(undefined8 *)(*(longlong *)(lVar3 + 0x48) + 0x28),lVar3 + 8,param_4);
      }
      else {
        *param_4 = '\0';
      }
    }
    *(uint *)(lVar3 + 0x50) = *(uint *)(lVar3 + 0x50) | 1;
    if ((*param_4 != '\0') && (cVar1 == '\0')) {
      *param_4 = '\0';
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d4c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1431d4c10 Execute body=105 status=ok
// SIG undefined Execute(void)

undefined8
AK::StreamMgr::CAkLowLevelTransferDeferred::Execute
          (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
    return 1;
  }
  if (param_5 == '\0') {
    uVar1 = (**(code **)(*param_2 + 0x28))();
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 2;
    return uVar1;
  }
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4,param_1 + 8);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 2;
  return uVar1;
}



// FUNCTION 1431d4c80 FUN_1431d4c80 body=255 status=ok
// SIG undefined FUN_1431d4c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d4c80(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x20);
  iVar4 = 2;
  if (param_2 == 1) {
    iVar4 = 1;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x48) + 0x60);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  lVar5 = *(longlong *)(lVar6 + 0x40);
  *(undefined8 *)(lVar6 + 0x40) = 0;
  lVar6 = *(longlong *)(lVar5 + 8);
  puVar2 = *(undefined8 **)(lVar6 + 0x10);
  puVar2[9] = 0;
  *puVar2 = 0;
  if (*(longlong *)(lVar1 + 0x458) == 0) {
    *(undefined8 **)(lVar1 + 0x458) = puVar2;
  }
  else {
    **(undefined8 **)(lVar1 + 0x450) = puVar2;
  }
  *(int *)(lVar1 + 0x448) = *(int *)(lVar1 + 0x448) + 1;
  *(undefined8 **)(lVar1 + 0x450) = puVar2;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  if ((iVar4 != 1) && (*(int *)(lVar6 + 0x20) != -1)) {
    AK::StreamMgr::CAkIOMemMgr::UntagBlock(lVar1 + 0xc0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  uVar7 = 1;
  lVar6 = lVar5;
  do {
    lVar1 = *(longlong *)(lVar6 + 0x18);
    lVar3 = lVar1;
    if (lVar6 == lVar5) {
      lVar5 = lVar1;
      lVar3 = _DAT_00000018;
    }
    _DAT_00000018 = lVar3;
    (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x28))
              (*(longlong **)(lVar6 + 0x20),lVar6,iVar4,uVar7);
    uVar7 = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1431d4d80 AddChild body=413 status=ok
// SIG undefined AddChild(void)

undefined4
CAkMusicRenderer::AddChild
          (undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
          undefined1 param_5)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  uint local_18 [4];
  
  pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x98);
  if (pvVar5 == (void *)0x0) {
    return 2;
  }
  pvVar5 = (void *)CAkMatrixSequencer::CAkMatrixSequencer(pvVar5,param_2,param_3,param_4,param_5);
  if (pvVar5 != (void *)0x0) {
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
    if (plVar6 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar6 + 0x128))(plVar6,1);
      if (cVar2 != '\0') {
        FUN_143173d90();
        if (DAT_146b520e0 == (longlong *)0x0) {
          DAT_146b520d8 = param_2;
          DAT_146b520e0 = param_2;
          param_2[0xf] = 0;
        }
        else {
          param_2[0xf] = (longlong)DAT_146b520e0;
          DAT_146b520e0 = param_2;
        }
        AkMixConnection::SetUserData(param_2,pvVar5);
        if (*(int *)(param_3 + 0x14) == 0) {
          return 2;
        }
        local_18[0] = 0;
        uVar3 = CAkPlayingMgr::SetPBI(DAT_146b50b00,*(int *)(param_3 + 0x14),param_2 + 3,local_18);
        CAkMatrixAwareCtx::SetRegisteredNotif(param_2,local_18[0]);
        if (((local_18[0] & 0x200000) != 0) &&
           (iVar4 = FUN_1431da3f0(&DAT_146b520e8,*(undefined4 *)(param_3 + 0x14)), iVar4 != 1)) {
          CAkMatrixAwareCtx::SetRegisteredNotif(param_2,local_18[0] & 0xffdfffff);
        }
        CAkPlayingMgr::NotifyMusicPlayStarted(DAT_146b50b00,*(undefined4 *)(param_3 + 0x14));
        return uVar3;
      }
      (**(code **)(*plVar6 + 0x130))(plVar6,1);
      FUN_143177a90(plVar6);
    }
    lVar1 = g_DefaultPoolId;
    CAkMatrixSequencer::~CAkMatrixSequencer(pvVar5);
    AK::MemoryMgr::Free(lVar1,pvVar5);
  }
  return 2;
}



// FUNCTION 1431d4f20 CleanPendingStateChanges body=201 status=ok
// SIG undefined CleanPendingStateChanges(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkMusicRenderer::CleanPendingStateChanges(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  puVar1 = DAT_146b52120;
  puVar4 = DAT_146b52120;
  while (puVar3 = puVar1, puVar2 = puVar5, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    puVar5 = puVar3;
    if ((*(byte *)(puVar3 + 2) & 2) == 0) {
      puVar5 = puVar1;
      if (puVar3 != puVar4) {
        *puVar2 = puVar1;
        puVar5 = DAT_146b52120;
      }
      DAT_146b52120 = puVar5;
      if (puVar3 == DAT_146b52128) {
        DAT_146b52128 = puVar2;
      }
      puVar5 = puVar2;
      if ((puVar3 < DAT_146b52138) || (DAT_146b52138 + (ulonglong)DAT_146b52140 * 3 <= puVar3)) {
        AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
        _DAT_146b52144 = _DAT_146b52144 + -1;
        puVar4 = DAT_146b52120;
      }
      else {
        *puVar3 = DAT_146b52130;
        _DAT_146b52144 = _DAT_146b52144 + -1;
        puVar4 = DAT_146b52120;
        DAT_146b52130 = puVar3;
      }
    }
  }
  return;
}



// FUNCTION 1431d4ff0 Destroy body=393 status=ok
// SIG undefined Destroy(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkMusicRenderer::Destroy(void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  lVar2 = DAT_146b520e0;
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x78);
    local_18 = 0;
    local_14 = 4;
    local_10 = 0;
    FUN_1431d6a20(lVar2,&local_18,0);
    lVar2 = lVar1;
  }
  CAkMusicTransAware::TermPanicTransitionRule();
  DAT_146b520e0 = 0;
  DAT_146b520d8 = 0;
  CAkPlayingMgr::Term(&DAT_146b520e8);
  while (puVar5 = DAT_146b52120, DAT_146b52120 != (undefined8 *)0x0) {
    if (DAT_146b52120 == DAT_146b52128) {
      DAT_146b52128 = (undefined8 *)0x0;
    }
    if ((DAT_146b52120 < DAT_146b52138) ||
       (DAT_146b52138 + (ulonglong)DAT_146b52140 * 3 <= DAT_146b52120)) {
      DAT_146b52120 = (undefined8 *)*DAT_146b52120;
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
      _DAT_146b52144 = _DAT_146b52144 + -1;
    }
    else {
      puVar4 = (undefined8 *)*DAT_146b52120;
      *DAT_146b52120 = DAT_146b52130;
      DAT_146b52120 = puVar4;
      _DAT_146b52144 = _DAT_146b52144 + -1;
      DAT_146b52130 = puVar5;
    }
  }
  DAT_146b52120 = (undefined8 *)0x0;
  puVar5 = DAT_146b52130;
  puVar4 = DAT_146b52138;
  while (puVar3 = puVar5, puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar3;
    if ((puVar3 < puVar4) || (puVar4 + (ulonglong)DAT_146b52140 * 3 <= puVar3)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
      puVar4 = DAT_146b52138;
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    DAT_146b52138 = (undefined8 *)0x0;
  }
  DAT_146b52140 = 0;
  DAT_146b52130 = (undefined8 *)0x0;
  DAT_146b52120 = (undefined8 *)0x0;
  DAT_146b52128 = (undefined8 *)0x0;
  if (param_1 != (void *)0x0) {
    DAT_146b520c8 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,param_1);
  }
  return;
}



// FUNCTION 1431d51a0 GetDefaultInitSettings body=7 status=ok
// SIG void GetDefaultInitSettings(AkMusicSettings * param_1)

/* void __cdecl AK::MusicEngine::GetDefaultInitSettings(struct AkMusicSettings & __ptr64) */

void __cdecl AK::MusicEngine::GetDefaultInitSettings(AkMusicSettings *param_1)

{
                    /* 0x31d51a0  145
                       ?GetDefaultInitSettings@MusicEngine@AK@@YAXAEAUAkMusicSettings@@@Z */
  *(undefined4 *)param_1 = 0x3f800000;
  return;
}



// FUNCTION 1431d51b0 GetPlayingSegmentInfo body=21 status=ok
// SIG AKRESULT GetPlayingSegmentInfo(ulong param_1, AkSegmentInfo * param_2, bool param_3)

/* enum AKRESULT __cdecl AK::MusicEngine::GetPlayingSegmentInfo(unsigned long,struct AkSegmentInfo &
   __ptr64,bool) */

AKRESULT __cdecl
AK::MusicEngine::GetPlayingSegmentInfo(ulong param_1,AkSegmentInfo *param_2,bool param_3)

{
  AKRESULT AVar1;
  
                    /* 0x31d51b0  190
                       ?GetPlayingSegmentInfo@MusicEngine@AK@@YA?AW4AKRESULT@@KAEAUAkSegmentInfo@@_N@Z
                        */
  AVar1 = CAkSegmentInfoRepository::GetSegmentInfo(&DAT_146b520e8,param_1,param_2,param_3);
  return AVar1;
}



// FUNCTION 1431d51d0 Init body=241 status=ok
// SIG AKRESULT Init(AkMusicSettings * param_1)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum AKRESULT __cdecl AK::MusicEngine::Init(struct AkMusicSettings * __ptr64) */

AKRESULT __cdecl AK::MusicEngine::Init(AkMusicSettings *param_1)

{
                    /* 0x31d51d0  225  ?Init@MusicEngine@AK@@YA?AW4AKRESULT@@PEAUAkMusicSettings@@@Z
                        */
  if (DAT_146b520c8 == (void *)0x0) {
    DAT_146b520c8 = MemoryMgr::Malloc(g_DefaultPoolId,1);
    if (DAT_146b520c8 != (void *)0x0) {
      if (param_1 == (AkMusicSettings *)0x0) {
        _DAT_146b520d0 = 0x3f800000;
      }
      else {
        _DAT_146b520d0 = *(undefined4 *)param_1;
      }
      MemoryMgr::StartProfileThreadUsage(0x46b520e8);
      DAT_146b520d4 = 0;
      DAT_146b520d5 = 0;
      if (DAT_146b520c8 != (void *)0x0) goto LAB_1431d5251;
    }
    return 2;
  }
LAB_1431d5251:
  SoundEngine::RegisterGlobalCallback(CAkMusicRenderer::ProcessNextFrame,0x10,(void *)0x0,8,0,0x321)
  ;
  SoundEngine::RegisterGlobalCallback
            ((_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)
             &LAB_1431d5180,0x80,(void *)0x0,0,0,0);
  FUN_1431179a0(CAkMusicRenderer::SetState);
  FUN_143117990(FUN_1431d9220);
  FUN_1431179b0(&LAB_1431d95b0);
  return 1;
}



// FUNCTION 1431d52d0 FUN_1431d52d0 body=14 status=ok
// SIG undefined FUN_1431d52d0(void)

void FUN_1431d52d0(undefined1 param_1)

{
  DAT_146b520d4 = 1;
  DAT_146b520d5 = param_1;
  return;
}



// FUNCTION 1431d52e0 Pause body=139 status=ok
// SIG undefined Pause(void)

void CAkMusicRenderer::Pause
               (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (plVar1 = DAT_146b520e0; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0xf]) {
    lVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
    if (((lVar2 == param_2) && ((param_3 == 0 || (param_3 == *(longlong *)(plVar1[0xd] + 0x30)))))
       && ((param_5 == 0 || (param_5 == *(int *)(plVar1[0xd] + 0x2c))))) {
      CAkMusicCtx::_Pause(plVar1,param_4);
    }
  }
  return;
}



// FUNCTION 1431d5370 PerformDelayedStateChange body=116 status=ok
// SIG undefined PerformDelayedStateChange(void)

void CAkMusicRenderer::PerformDelayedStateChange(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  for (puVar2 = DAT_146b52120; (puVar2 != (undefined8 *)0x0 && (puVar2 + 1 != param_2));
      puVar2 = (undefined8 *)*puVar2) {
  }
  *(uint *)(puVar2 + 2) = *(uint *)(puVar2 + 2) & 0xfffffffd;
  if ((*(uint *)(puVar2 + 2) & 1) == 0) {
    *(uint *)(puVar2 + 2) = *(uint *)(puVar2 + 2) | 1;
    iVar1 = *(int *)(puVar2 + 1);
    AK::SoundEngine::SetState(iVar1,*(undefined4 *)((longlong)puVar2 + 0xc),0,1);
    for (puVar2 = (undefined8 *)*puVar2; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2
        ) {
      if (*(int *)(puVar2 + 1) == iVar1) {
        *(uint *)(puVar2 + 2) = *(uint *)(puVar2 + 2) | 1;
      }
    }
  }
  CleanPendingStateChanges();
  return;
}



// FUNCTION 1431d53f0 FUN_1431d53f0 body=889 status=ok
// SIG undefined FUN_1431d53f0(void)

int FUN_1431d53f0(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 *param_6,char param_7,undefined8 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,longlong *param_12)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_278;
  undefined4 local_274;
  undefined4 local_270;
  int local_26c;
  int local_268;
  ulonglong local_258;
  undefined2 uStack_250;
  undefined8 local_248;
  longlong lStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  longlong lStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_208 [2];
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined1 local_1e8 [8];
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1c8 [16];
  ulonglong local_1b8;
  int *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  ulonglong local_190;
  undefined8 local_180;
  longlong lStack_178;
  longlong lStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_144;
  undefined1 local_120 [224];
  byte local_40;
  
  plVar2 = param_12;
  local_278 = 0;
  *param_12 = 0;
  bVar8 = false;
  uVar3 = FUN_1431606d0(param_2,0,&local_26c);
  FUN_143161b30(local_208,param_2,param_4,&local_270);
  local_268 = FUN_143161860(local_208[0],&local_274);
  if (local_268 == 2) {
    iVar7 = 3;
  }
  else {
    local_258 = local_258 & 0xffffffff00000000;
    FUN_14313bbf0(local_1c8);
    local_194 = *(undefined4 *)((longlong)param_6 + 0x14);
    piVar1 = (int *)*param_6;
    local_1a0 = param_6[1];
    local_198 = *(undefined4 *)(param_6 + 2);
    local_1b8 = param_4;
    if (local_1a8 != (int *)0x0) {
      AkExternalSourceArray::Release();
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
    local_150 = local_218;
    local_40 = local_40 & 0xfb | param_7 << 2;
    local_190 = local_258;
    local_180 = local_248;
    lStack_178 = lStack_240;
    local_14c = 0;
    lStack_168 = lStack_230;
    local_144 = param_10;
    local_160 = local_228;
    uStack_158 = uStack_220;
    local_1a8 = piVar1;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x318);
    lVar6 = 0;
    if (pvVar5 != (void *)0x0) {
      local_1d8 = local_1f8;
      uStack_1e0 = uStack_200;
      lVar6 = FUN_1431d6b60(pvVar5,local_1c8,param_1,param_2,param_3,param_8,local_1e8,param_9,
                            param_11);
    }
    *plVar2 = lVar6;
    param_12._0_1_ = '\0';
    if (lVar6 == 0) {
      iVar7 = 2;
    }
    else {
      iVar7 = FUN_14317c550(lVar6 + 0x18,local_270,0,uVar3,&local_274,local_120,&param_12);
      if (iVar7 == 1) {
        if (((char)param_12 == '\0') || (local_26c == 0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        iVar7 = FUN_143160920(param_2,param_4,local_208[0],local_268,uVar3,&local_274,*plVar2,uVar4)
        ;
        bVar8 = iVar7 == 1;
        local_278 = 1;
        if (bVar8) {
          lStack_230 = *plVar2;
          local_248 = 0;
          uStack_250 = 0xff00;
          lStack_240 = (ulonglong)*(uint *)(lStack_230 + 0x200) << 0x20;
          uStack_234 = 0;
          local_238 = param_10;
          local_258 = param_4;
          (**(code **)(*param_2 + 0x148))(param_2,&local_258,lStack_230 + 0x70,1);
          lVar6 = *plVar2;
          CAkURenderer::EnqueueContext(lVar6);
          FUN_14317fbd0(lVar6);
          FUN_14317fe10(lVar6,param_5,0,1);
        }
      }
    }
    AkInitialSoundParams::DoTerm(local_120);
    if (local_1a8 != (int *)0x0) {
      AkExternalSourceArray::Release();
    }
    if (iVar7 == 1) {
      return 1;
    }
    if (bVar8) goto LAB_1431d5703;
  }
  if (*(int *)((longlong)param_6 + 0x14) != 0) {
    CAkPlayingMgr::SetPBI(DAT_146b50b00,*(int *)((longlong)param_6 + 0x14),*plVar2,&param_12);
  }
LAB_1431d5703:
  FUN_14315fba0(param_2,*plVar2,local_278,param_4);
  if (iVar7 != 3) {
    local_274 = 0x1e;
  }
  local_214 = 0;
  local_258 = local_258 & 0xffffffff00000000;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_2);
  return iVar7;
}



// FUNCTION 1431d5770 ProcessNextFrame body=186 status=ok
// SIG undefined ProcessNextFrame(void)

void CAkMusicRenderer::ProcessNextFrame(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_38 [48];
  
  bVar6 = DAT_146b520d4 != '\0';
  DAT_146b520d4 = 0;
  plVar3 = DAT_146b520e0;
  uVar4 = DAT_146b520d5;
  if (bVar6) {
    for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[0xf]) {
      lVar1 = plVar3[0xd];
      DAT_146b520d5 = uVar4;
      *(undefined1 *)(lVar1 + 0x58) = 0;
      *(undefined1 *)(lVar1 + 0x59) = uVar4;
      uVar4 = DAT_146b520d5;
    }
    DAT_146b520d4 = 0;
    DAT_146b520d5 = 0;
    plVar3 = DAT_146b520e0;
  }
  while (plVar3 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar3[0xf];
    lVar1 = plVar3[0xd];
    if (((*(uint *)(plVar3 + 4) & 0x200000) != 0) &&
       (iVar5 = (**(code **)(*plVar3 + 200))(plVar3,local_38), iVar5 == 1)) {
      CAkSegmentInfoRepository::UpdateSegmentInfo
                (&DAT_146b520e8,*(undefined4 *)(lVar1 + 0x2c),local_38);
    }
    FUN_1431d7830(lVar1,DAT_1467bdcb8);
    plVar3 = plVar2;
  }
  return;
}



// FUNCTION 1431d5830 FUN_1431d5830 body=261 status=ok
// SIG undefined FUN_1431d5830(void)

void FUN_1431d5830(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  long lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  plVar2 = DAT_146b520e0;
  do {
    if (plVar2 == (longlong *)0x0) {
LAB_1431d5893:
      pvVar1 = (void *)param_2[0xd];
      if (pvVar1 != (void *)0x0) {
        iVar8 = *(int *)((longlong)pvVar1 + 0x2c);
        if (iVar8 != 0) {
          if ((*(uint *)(param_2 + 4) & 0x200000) != 0) {
            CAkSegmentInfoRepository::RemoveEntry(&DAT_146b520e8);
            iVar8 = *(int *)((longlong)pvVar1 + 0x2c);
          }
          CAkPlayingMgr::Remove(DAT_146b50b00,iVar8,param_2 + 3);
          lVar5 = (**(code **)(*param_2 + 0x98))(param_2);
          if (lVar5 != 0) {
            plVar6 = (longlong *)(**(code **)(*param_2 + 0x98))(param_2);
            (**(code **)(*plVar6 + 0x130))(plVar6,1);
            uVar7 = (**(code **)(*param_2 + 0x98))(param_2);
            FUN_143177a90(uVar7);
          }
        }
        lVar3 = g_DefaultPoolId;
        CAkMatrixSequencer::~CAkMatrixSequencer(pvVar1);
        AK::MemoryMgr::Free(lVar3,pvVar1);
      }
      return;
    }
    if (plVar2 == param_2) {
      if (plVar2 != (longlong *)0x0) {
        plVar4 = (longlong *)plVar2[0xf];
        if (plVar2 != DAT_146b520e0) {
          plVar6[0xf] = plVar2[0xf];
          plVar4 = DAT_146b520e0;
        }
        DAT_146b520e0 = plVar4;
        if (plVar2 == DAT_146b520d8) {
          DAT_146b520d8 = plVar6;
        }
      }
      goto LAB_1431d5893;
    }
    plVar6 = plVar2;
    plVar2 = (longlong *)plVar2[0xf];
  } while( true );
}



// FUNCTION 1431d5940 RescheduleDelayedStateChange body=426 status=ok
// SIG undefined RescheduleDelayedStateChange(void)

void CAkMusicRenderer::RescheduleDelayedStateChange(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint local_res18;
  undefined4 uStackX_1c;
  uint local_res20 [2];
  undefined8 local_48 [2];
  
  for (puVar6 = DAT_146b52120; (puVar6 != (undefined8 *)0x0 && (puVar6 + 1 != param_2));
      puVar6 = (undefined8 *)*puVar6) {
  }
  if ((*(uint *)(puVar6 + 2) & 1) == 0) {
    uVar5 = 0;
    iVar1 = *(int *)(puVar6 + 1);
    uVar8 = CONCAT44(uStackX_1c,local_res18);
    uVar9 = uVar5;
    uVar7 = local_res18;
    for (uVar2 = DAT_146b520e0; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x78)) {
      if (((*(byte *)(uVar2 + 0x62) & 1) != 0) && ((*(byte *)(uVar2 + 0x62) & 0x10) == 0)) {
        local_res18 = local_res18 & 0xffffff00;
        uVar4 = FUN_1431d8bb0(*(undefined8 *)(uVar2 + 0x68),iVar1,&local_res18,local_res20,local_48)
        ;
        if (((char)local_res18 != '\0') && ((uVar9 == 0 || ((longlong)uVar4 < (longlong)uVar5)))) {
          uVar5 = uVar4;
          uVar8 = local_48[0];
          uVar9 = uVar2;
          uVar7 = local_res20[0];
        }
      }
    }
    if (uVar5 == DAT_1467bdcb8 || (longlong)(uVar5 - DAT_1467bdcb8) < 0) {
      AK::SoundEngine::SetState(iVar1,*(undefined4 *)((longlong)puVar6 + 0xc),0,1);
      *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) & 0xfffffffd | 1;
      do {
        if (*(int *)(puVar6 + 1) == iVar1) {
          *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) | 1;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
    }
    else {
      iVar3 = CAkMatrixSequencer::ProcessDelayedStateChange
                        (*(undefined8 *)(uVar9 + 0x68),param_2,uVar7,uVar8);
      if (iVar3 == 1) {
        return;
      }
      AK::SoundEngine::SetState(iVar1,*(undefined4 *)((longlong)puVar6 + 0xc),0,1);
      *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) & 0xfffffffd | 1;
      do {
        if (*(int *)(puVar6 + 1) == iVar1) {
          *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) | 1;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
    }
    CleanPendingStateChanges();
    return;
  }
  *(uint *)(puVar6 + 2) = *(uint *)(puVar6 + 2) & 0xfffffffd;
  CleanPendingStateChanges();
  return;
}



// FUNCTION 1431d5af0 Resume body=154 status=ok
// SIG undefined Resume(void)

void CAkMusicRenderer::Resume
               (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined1 param_5,int param_6)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (plVar1 = DAT_146b520e0; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0xf]) {
    lVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
    if (((lVar2 == param_2) && ((param_3 == 0 || (param_3 == *(longlong *)(plVar1[0xd] + 0x30)))))
       && ((param_6 == 0 || (param_6 == *(int *)(plVar1[0xd] + 0x2c))))) {
      FUN_1431d68f0(plVar1,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 1431d5b90 SeekPercent body=190 status=ok
// SIG undefined SeekPercent(void)

void CAkMusicRenderer::SeekPercent
               (undefined8 param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5,
               undefined1 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar3 = param_6;
  plVar1 = DAT_146b520e0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[0xf];
    lVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if ((((lVar5 == param_2) && ((param_3 == 0 || (*(longlong *)(plVar2[0xd] + 0x30) == param_3))))
        && ((param_4 == 0 || (*(int *)(plVar2[0xd] + 0x2c) == param_4)))) &&
       (iVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2,&param_5,uVar3), iVar4 == 1)) {
      CAkPlayingMgr::NotifyMusicPlayStarted(DAT_146b50b00,*(undefined4 *)(plVar2[0xd] + 0x2c));
    }
  }
  return;
}



// FUNCTION 1431d5c50 SeekTimeAbsolute body=190 status=ok
// SIG undefined SeekTimeAbsolute(void)

void CAkMusicRenderer::SeekTimeAbsolute
               (undefined8 param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5,
               undefined1 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar3 = param_6;
  plVar1 = DAT_146b520e0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[0xf];
    lVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if ((((lVar5 == param_2) && ((param_3 == 0 || (*(longlong *)(plVar2[0xd] + 0x30) == param_3))))
        && ((param_4 == 0 || (*(int *)(plVar2[0xd] + 0x2c) == param_4)))) &&
       (iVar4 = (**(code **)(*plVar2 + 0xb8))(plVar2,&param_5,uVar3), iVar4 == 1)) {
      CAkPlayingMgr::NotifyMusicPlayStarted(DAT_146b50b00,*(undefined4 *)(plVar2[0xd] + 0x2c));
    }
  }
  return;
}



// FUNCTION 1431d5d10 SetState body=532 status=ok
// SIG undefined SetState(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkMusicRenderer::SetState(int param_1,undefined4 param_2)

{
  int *piVar1;
  AKRESULT AVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 extraout_var;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_res18;
  undefined4 uStackX_1c;
  uint local_res20 [2];
  undefined8 local_48 [2];
  undefined8 *puVar6;
  
  puVar7 = (undefined8 *)0x0;
  uVar9 = CONCAT44(uStackX_1c,local_res18);
  puVar4 = puVar7;
  puVar6 = puVar7;
  uVar8 = local_res18;
  puVar3 = DAT_146b52130;
  for (puVar5 = DAT_146b520e0; DAT_146b52130 = puVar3, puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)puVar5[0xf]) {
    if (((*(byte *)((longlong)puVar5 + 0x62) & 1) != 0) &&
       ((*(byte *)((longlong)puVar5 + 0x62) & 0x10) == 0)) {
      local_res18 = local_res18 & 0xffffff00;
      puVar3 = (undefined8 *)FUN_1431d8bb0(puVar5[0xd],param_1,&local_res18,local_res20,local_48);
      if (((char)local_res18 != '\0') &&
         ((puVar4 == (undefined8 *)0x0 || ((longlong)puVar3 < (longlong)puVar6)))) {
        puVar4 = puVar5;
        puVar6 = puVar3;
        uVar9 = local_48[0];
        uVar8 = local_res20[0];
      }
    }
    puVar3 = DAT_146b52130;
  }
  puVar5 = (undefined8 *)(ulonglong)DAT_1467bdcb8;
  if (puVar6 == puVar5 || (longlong)puVar6 - (longlong)puVar5 < 0) goto LAB_1431d5f12;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = DAT_146b52130;
      goto LAB_1431d5e06;
    }
  }
  else {
LAB_1431d5e06:
    piVar1 = (int *)(puVar3 + 1);
    if (DAT_146b52120 == (undefined8 *)0x0) {
      DAT_146b52128 = puVar3;
    }
    DAT_146b52130 = (undefined8 *)*puVar3;
    *puVar3 = DAT_146b52120;
    _DAT_146b52144 = _DAT_146b52144 + 1;
    DAT_146b52120 = puVar3;
    if (piVar1 != (int *)0x0) {
      puVar5 = (undefined8 *)
               CAkMatrixSequencer::ProcessDelayedStateChange(puVar4[0xd],piVar1,uVar8,uVar9);
      puVar6 = DAT_146b52130;
      puVar4 = DAT_146b52120;
      if ((int)puVar5 == 1) {
        *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) & 0xfffffffe;
        *(uint *)(puVar3 + 2) = *(uint *)(puVar3 + 2) | 2;
        *piVar1 = param_1;
        *(undefined4 *)((longlong)puVar3 + 0xc) = param_2;
        return puVar5;
      }
      if (DAT_146b52120 != (undefined8 *)0x0) {
        if (DAT_146b52120 == DAT_146b52128) {
          DAT_146b52128 = puVar7;
        }
        if ((DAT_146b52120 < DAT_146b52138) ||
           (DAT_146b52138 + (ulonglong)DAT_146b52140 * 3 <= DAT_146b52120)) {
          DAT_146b52120 = (undefined8 *)*DAT_146b52120;
          AVar2 = AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
          puVar6 = (undefined8 *)CONCAT44(extraout_var,AVar2);
        }
        else {
          puVar5 = (undefined8 *)*DAT_146b52120;
          *DAT_146b52120 = DAT_146b52130;
          DAT_146b52120 = puVar5;
          DAT_146b52130 = puVar4;
        }
        _DAT_146b52144 = _DAT_146b52144 + -1;
        puVar5 = puVar6;
      }
      goto LAB_1431d5f12;
    }
  }
  puVar5 = (undefined8 *)0x0;
  puVar4 = DAT_146b52120;
  if (DAT_146b52120 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar4 + 1) == param_1) {
        *(uint *)(puVar4 + 2) = *(uint *)(puVar4 + 2) | 1;
      }
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)0x0);
    puVar5 = (undefined8 *)0x0;
  }
LAB_1431d5f12:
  return (undefined8 *)((ulonglong)puVar5 & 0xffffffffffffff00);
}



// FUNCTION 1431d5f30 FUN_1431d5f30 body=144 status=ok
// SIG undefined FUN_1431d5f30(void)

void FUN_1431d5f30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = DAT_146b520e0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[0xf];
    lVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if (((lVar3 == param_2) && ((param_3 == 0 || (param_3 == *(longlong *)(plVar2[0xd] + 0x30)))))
       && ((param_5 == 0 || (param_5 == *(int *)(plVar2[0xd] + 0x2c))))) {
      FUN_1431d6a20(plVar2,param_4,0xffffffff);
    }
  }
  return;
}



// FUNCTION 1431d5fc0 StopNoteIfUsingData body=84 status=ok
// SIG undefined StopNoteIfUsingData(void)

void CAkMusicRenderer::StopNoteIfUsingData(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  for (lVar1 = DAT_146b520e0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x78)) {
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      CAkMidiClipMgr::StopNoteIfUsingData(*(longlong *)(lVar1 + 0x68) + 0x60,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1431d6020 CAkMusicCtx body=98 status=ok
// SIG undefined CAkMusicCtx(void)

undefined8 * CAkMusicCtx::CAkMusicCtx(undefined8 *param_1)

{
  CAkChildCtx::CAkChildCtx();
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_StartProfileThreadUsage_145ad0198;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0200;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) & 0xe0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1431d6090 ~CAkMusicCtx body=132 status=ok
// SIG undefined ~CAkMusicCtx(void)

void CAkMusicCtx::~CAkMusicCtx(undefined8 *param_1)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad0198;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0200;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  if (param_1[8] != 0) {
    FUN_1431501b0(DAT_146b50af0,param_1[8],param_1 + 5);
  }
  if (param_1[9] != 0) {
    FUN_1431501b0(DAT_146b50af0,param_1[9],param_1 + 5);
  }
  param_1[7] = 0;
  param_1[3] = &PTR__purecall_143f3edb0;
  CAkChildCtx::~CAkChildCtx(param_1);
  return;
}



// FUNCTION 1431d6120 `scalar_deleting_destructor' body=167 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMusicCtx::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad0198;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0200;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  if (param_1[8] != 0) {
    FUN_1431501b0(DAT_146b50af0,param_1[8],param_1 + 5);
  }
  if (param_1[9] != 0) {
    FUN_1431501b0(DAT_146b50af0,param_1[9],param_1 + 5);
  }
  param_1[7] = 0;
  param_1[3] = &PTR__purecall_143f3edb0;
  CAkChildCtx::~CAkChildCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1431d61d0 FUN_1431d61d0 body=33 status=ok
// SIG undefined FUN_1431d61d0(void)

void FUN_1431d61d0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    return;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x38) = param_2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 1431d6200 HasStopTrans body=36 status=ok
// SIG undefined HasStopTrans(void)

undefined1 CAkMusicCtx::HasStopTrans(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar1 = CAkTransition::IsFadingOut();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1431d6230 Init body=12 status=ok
// SIG undefined Init(void)

void CAkMusicCtx::Init(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1431d61d0(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1431d6240 OnFrameEnd body=83 status=ok
// SIG undefined OnFrameEnd(void)

void CAkMusicCtx::OnFrameEnd(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  plVar2 = (longlong *)param_1[7];
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 8))();
    plVar2 = plVar1;
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) {
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431d62a0 OnLastFrame body=181 status=ok
// SIG undefined OnLastFrame(void)

void CAkMusicCtx::OnLastFrame(longlong *param_1,uint param_2)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  plVar4 = (longlong *)param_1[7];
  if (plVar4 != (longlong *)0x0) {
    do {
      (**(code **)(*plVar4 + 0x40))(plVar4);
      (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
      plVar4 = (longlong *)plVar4[1];
    } while (plVar4 != (longlong *)0x0);
    plVar4 = (longlong *)param_1[7];
    while (plVar4 != (longlong *)0x0) {
      plVar2 = (longlong *)plVar4[1];
      (**(code **)(*plVar4 + 0x48))();
      plVar4 = plVar2;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x5c);
  if ((param_2 < uVar3) && (param_2 != 0xffffffff)) {
    *(uint *)((longlong)param_1 + 0x5c) = param_2;
    uVar3 = param_2;
  }
  if (uVar3 != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x62);
    if (((bVar1 & 0xf) != 0) && ((bVar1 & 0x10) == 0)) {
      if ((bVar1 & 0xf) < 3) {
        *(byte *)((longlong)param_1 + 0x62) = bVar1 & 0xf2 | 2;
      }
      goto LAB_1431d633e;
    }
  }
  (**(code **)(*param_1 + 0x60))(param_1);
LAB_1431d633e:
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431d6360 OnPaused body=76 status=ok
// SIG undefined OnPaused(void)

void CAkMusicCtx::OnPaused(longlong param_1)

{
  longlong *plVar1;
  
  for (plVar1 = *(longlong **)(param_1 + 0x38); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 0x10;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    CAkTransitionManager::Pause(DAT_146b50af0);
  }
  return;
}



// FUNCTION 1431d63b0 OnPlayed body=9 status=ok
// SIG undefined OnPlayed(void)

void CAkMusicCtx::OnPlayed(longlong param_1)

{
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf1;
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 1;
  return;
}



// FUNCTION 1431d63c0 OnPropertyChange body=71 status=ok
// SIG undefined OnPropertyChange(void)

void CAkMusicCtx::OnPropertyChange(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
    plVar2 = plVar1;
  }
  return;
}



// FUNCTION 1431d6410 OnResumed body=76 status=ok
// SIG undefined OnResumed(void)

void CAkMusicCtx::OnResumed(longlong param_1)

{
  longlong *plVar1;
  
  for (plVar1 = *(longlong **)(param_1 + 0x38); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xef;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    CAkTransitionManager::Resume(DAT_146b50af0);
  }
  return;
}



// FUNCTION 1431d6460 OnStopped body=9 status=ok
// SIG undefined OnStopped(void)

void CAkMusicCtx::OnStopped(longlong param_1)

{
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf4;
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 4;
  return;
}



// FUNCTION 1431d6470 OnTriggerModulators body=40 status=ok
// SIG undefined OnTriggerModulators(void)

void CAkMusicCtx::OnTriggerModulators(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    (**(code **)(*plVar2 + 0x38))();
    plVar2 = plVar1;
  }
  return;
}



// FUNCTION 1431d64a0 FUN_1431d64a0 body=156 status=ok
// SIG undefined FUN_1431d64a0(void)

void FUN_1431d64a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  long lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar2 = param_1 + 10;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    lVar1 = param_1[2];
    if (lVar1 == 0) {
      FUN_1431d5830(DAT_146b520c8,param_1);
    }
    else {
      plVar2 = *(longlong **)(lVar1 + 0x38);
      plVar6 = (longlong *)0x0;
      plVar4 = plVar2;
      plVar5 = plVar2;
      if (plVar2 == (longlong *)0x0) {
LAB_1431d64e3:
        if (plVar5 != (longlong *)0x0) {
          if (plVar5 == plVar2) {
            *(longlong *)(lVar1 + 0x38) = plVar5[1];
            FUN_1431d64a0();
          }
          else {
            plVar6[1] = plVar5[1];
            FUN_1431d64a0();
          }
        }
      }
      else {
        do {
          plVar5 = plVar4;
          if (plVar5 == param_1) goto LAB_1431d64e3;
          plVar4 = (longlong *)plVar5[1];
          plVar6 = plVar5;
        } while ((longlong *)plVar5[1] != (longlong *)0x0);
      }
    }
    lVar3 = g_DefaultPoolId;
    (**(code **)(*param_1 + 0x50))(param_1,0);
    AK::MemoryMgr::Free(lVar3,param_1);
  }
  return;
}



// FUNCTION 1431d6540 FUN_1431d6540 body=75 status=ok
// SIG undefined FUN_1431d6540(void)

void FUN_1431d6540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar4 = 0;
  lVar2 = lVar1;
  lVar3 = lVar1;
  if (lVar1 != 0) {
    while (lVar3 = lVar2, lVar3 != param_2) {
      lVar2 = *(longlong *)(lVar3 + 8);
      lVar4 = lVar3;
      if (*(longlong *)(lVar3 + 8) == 0) {
        return;
      }
    }
  }
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 == lVar1) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar3 + 8);
    FUN_1431d64a0(param_1);
    return;
  }
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431d6590 SetPBIFade body=72 status=ok
// SIG undefined SetPBIFade(void)

void CAkMusicCtx::SetPBIFade(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  for (plVar1 = *(longlong **)(param_1 + 0x38); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[1]) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 1431d65e0 TransUpdateValue body=204 status=ok
// SIG undefined TransUpdateValue(void)

void CAkMusicCtx::TransUpdateValue(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 != 0x1000000) {
    if (param_2 != 0x2000000) {
      if ((param_2 + 0xfc000000U & 0xfbffffff) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = param_3;
      (**(code **)(*(longlong *)(param_1 + -0x28) + 0x28))(param_1 + -0x28);
      if (param_4 == '\0') {
        return;
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (param_2 != 0x4000000) {
        return;
      }
      (**(code **)(*(longlong *)(param_1 + -0x28) + 0x18))(param_1 + -0x28);
      return;
    }
    bVar1 = true;
  }
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x28))(param_1 + -0x28);
  if ((param_4 != '\0') && (*(undefined8 *)(param_1 + 0x18) = 0, bVar1)) {
    (**(code **)(*(longlong *)(param_1 + -0x28) + 0x10))(param_1 + -0x28,0xffffffff);
  }
  return;
}



// FUNCTION 1431d66d0 _Pause body=215 status=ok
// SIG undefined _Pause(void)

void CAkMusicCtx::_Pause(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    CAkTransitionManager::ChangeParameter
              (DAT_146b50af0,*(longlong *)(param_1 + 0x48),0x4000000,0,*param_2,param_2[1],0);
    return;
  }
  local_20 = *param_2;
  local_1c = param_2[1];
  puVar1 = (undefined8 *)(param_1 + 0x28);
  local_28 = 0x3f800000;
  local_24 = 0;
  local_30 = 0x4000000;
  local_18 = 0x100;
  local_16 = 0;
  local_38 = puVar1;
  lVar2 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
  *(longlong *)(param_1 + 0x48) = lVar2;
  if (lVar2 == 0) {
    (**(code **)*puVar1)(puVar1,local_30,local_24,1);
  }
  return;
}



// FUNCTION 1431d67b0 _Play body=308 status=ok
// SIG undefined _Play(void)

void CAkMusicCtx::_Play(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) < 2) {
    if (param_1[8] == 0) {
      if (0 < *param_2) {
        local_1c = param_2[1];
        plVar1 = param_1 + 5;
        local_28 = 0;
        local_24 = 0x3f800000;
        local_30 = 0x1000000;
        local_18 = 0x100;
        local_16 = 0;
        local_38 = plVar1;
        local_20 = *param_2;
        lVar3 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
        param_1[8] = lVar3;
        if (lVar3 == 0) {
          (**(code **)*plVar1)(plVar1,local_30,local_24,1);
        }
        else if (param_2[2] != 0) {
          iVar2 = param_2[2] / (int)(uint)DAT_1467bdcb8;
          if ((iVar2 < 0) && (*(uint *)(lVar3 + 0x18) <= (uint)-iVar2)) {
            *(undefined4 *)(lVar3 + 0x18) = 0;
          }
          else {
            *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + iVar2;
          }
        }
      }
    }
    else {
      CAkTransitionManager::ChangeParameter
                (DAT_146b50af0,param_1[8],0x1000000,0x3f800000,*param_2,param_2[1],0);
    }
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}



// FUNCTION 1431d68f0 FUN_1431d68f0 body=290 status=ok
// SIG undefined FUN_1431d68f0(void)

void FUN_1431d68f0(longlong *param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  if ((param_3 == '\0') && (1 < *(ushort *)(param_1 + 0xc))) {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) - 1;
    return;
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  if (param_1[9] == 0) {
    if (*param_2 < 1) {
      *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
      (**(code **)(*param_1 + 0x28))(param_1,param_1 + 0xb,0x3f800000);
    }
    else {
      local_28 = (undefined4)param_1[0xb];
      plVar1 = param_1 + 5;
      local_1c = param_2[1];
      local_24 = 0x3f800000;
      local_30 = 0x8000000;
      local_18 = 0x100;
      local_16 = 0;
      local_38 = plVar1;
      local_20 = *param_2;
      lVar2 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
      param_1[9] = lVar2;
      if (lVar2 == 0) {
        (**(code **)*plVar1)(plVar1,local_30,local_24,1);
      }
    }
  }
  else {
    CAkTransitionManager::ChangeParameter
              (DAT_146b50af0,param_1[9],0x8000000,0x3f800000,*param_2,param_2[1],0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d6a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 1431d6a20 FUN_1431d6a20 body=316 status=ok
// SIG undefined FUN_1431d6a20(void)

void FUN_1431d6a20(longlong *param_1,int *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  if ((*(byte *)((longlong)param_1 + 0x62) & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d6a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,param_3);
    return;
  }
  lVar2 = param_1[8];
  local_20 = *param_2;
  if (lVar2 == 0) {
    if ((0 < local_20) && ((*(byte *)((longlong)param_1 + 0x62) & 3) != 0)) {
      plVar1 = param_1 + 5;
      local_1c = param_2[1];
      local_28 = 0x3f800000;
      local_24 = 0;
      local_30 = 0x2000000;
      local_18 = 0x100;
      local_16 = 0;
      local_38 = plVar1;
      lVar2 = FUN_14314fa00(DAT_146b50af0,&local_38,1,0);
      param_1[8] = lVar2;
      if (lVar2 != 0) {
        return;
      }
      (**(code **)*plVar1)(plVar1,local_30,local_24,1);
      return;
    }
  }
  else {
    if (local_20 != 0) {
      CAkTransitionManager::ChangeParameter(DAT_146b50af0,lVar2,0x2000000,0,local_20,param_2[1],0);
      return;
    }
    FUN_1431501b0(DAT_146b50af0,lVar2,param_1 + 5);
    param_1[8] = 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}



// FUNCTION 1431d6b60 FUN_1431d6b60 body=192 status=ok
// SIG undefined FUN_1431d6b60(void)

undefined8 *
FUN_1431d6b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9)

{
  FUN_14317cf50(param_1,param_2,param_4,param_5,param_7,param_8);
  CAkChildCtx::CAkChildCtx(param_1 + 0x5e,param_3);
  *(uint *)(param_1 + 0x62) = *(uint *)(param_1 + 0x62) & 0xfffffffe;
  *(byte *)((longlong)param_1 + 0x295) = *(byte *)((longlong)param_1 + 0x295) & 0xdf;
  *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xfffffff9;
  *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) | 1;
  *param_1 = &PTR_LAB_145ad0218;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145ad0280;
  param_1[0x5e] = &PTR_Serialize_145ad02e8;
  param_1[0x61] = param_6;
  *(undefined4 *)((longlong)param_1 + 0x23c) = param_9;
  return param_1;
}



// FUNCTION 1431d6c40 FUN_1431d6c40 body=109 status=ok
// SIG undefined FUN_1431d6c40(void)

undefined8 * FUN_1431d6c40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145ad0218;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145ad0280;
  param_1[0x5e] = &PTR_Serialize_145ad02e8;
  CAkChildCtx::~CAkChildCtx();
  FUN_14317d360(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 1431d6cb0 FixStartTimeForFadeIn body=209 status=ok
// SIG undefined FixStartTimeForFadeIn(void)

void CAkMusicPBI::FixStartTimeForFadeIn(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (((*(byte *)(param_1 + 0x295) & 0x40) != 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x220) + 0xc) >> 1 & 1) == 0)) {
    iVar1 = *(int *)(param_1 + 0x2b8);
    fVar5 = (float)DAT_1467bdcb8 * *(float *)(param_1 + 0x23c);
    if (fVar5 <= 0.0) {
      fVar4 = -0.5;
    }
    else {
      fVar4 = 0.5;
    }
    iVar3 = (int)(fVar4 + fVar5);
    iVar2 = iVar1 % iVar3;
    if ((iVar3 / 2 < iVar2) || (*(int *)(param_1 + 0x28c) < iVar2)) {
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + (iVar3 - iVar2);
      *(int *)(param_1 + 0x2b8) = (iVar3 - iVar2) + iVar1;
    }
    else {
      if (iVar2 < 1) goto LAB_1431d6d79;
      *(int *)(param_1 + 0x2b8) = iVar1 - iVar2;
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) - iVar2;
    }
    *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) & 0xfe;
    *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) & 0x3f | 0x40;
  }
LAB_1431d6d79:
  *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) | 8;
  return;
}



// FUNCTION 1431d6dd0 DestructClearWidget body=34 status=ok
// SIG undefined DestructClearWidget(void)

void UStackSplittingWidget::DestructClearWidget(longlong param_1)

{
  FUN_1431da820(param_1 + 0x2d8);
  FUN_14317de60(param_1);
  return;
}



// FUNCTION 1431d6e00 FUN_1431d6e00 body=101 status=ok
// SIG undefined FUN_1431d6e00(void)

undefined8 FUN_1431d6e00(longlong param_1)

{
  char cVar1;
  undefined4 local_res8 [4];
  undefined4 local_res18 [4];
  
  cVar1 = FUN_1431db0a0(*(undefined8 *)(param_1 + 0x300),param_1,local_res8,local_res18);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0x296) = *(byte *)(param_1 + 0x296) & 0xfe;
    *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) & 0x3f;
    *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) | 0x40;
    *(undefined4 *)(param_1 + 0x2b8) = local_res8[0];
    *(undefined4 *)(param_1 + 0x28c) = local_res18[0];
    return 1;
  }
  return 2;
}



// FUNCTION 1431d6e70 FUN_1431d6e70 body=132 status=ok
// SIG undefined FUN_1431d6e70(void)

void FUN_1431d6e70(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  if (param_2 != 0xffffffff) {
    fVar4 = (float)param_2 / *(float *)(param_1 + -0xb4);
    if (fVar4 <= 0.0) {
      fVar3 = -0.5;
    }
    else {
      fVar3 = 0.5;
    }
    uVar1 = (uint)(fVar3 + fVar4);
    if (uVar1 < *(uint *)(param_1 + -8)) {
      *(uint *)(param_1 + -8) = uVar1;
    }
  }
  local_18 = 0;
  local_14 = 4;
  local_10 = 0;
  if ((*(int *)(param_1 + -8) == -1) || ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  FUN_143180140(param_1 + -0x2f0,&local_18,uVar2);
  return;
}



// FUNCTION 1431d6f30 FUN_1431d6f30 body=51 status=ok
// SIG undefined FUN_1431d6f30(void)

void FUN_1431d6f30(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + -0x2f0) + 0x20))();
  *(undefined4 *)(param_1 + -0xac) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x0001431d6f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x2d8) + 0x50))();
  return;
}



// FUNCTION 1431d6f70 FUN_1431d6f70 body=46 status=ok
// SIG undefined FUN_1431d6f70(void)

void FUN_1431d6f70(longlong param_1)

{
  float fVar1;
  
  FUN_14317e930();
  fVar1 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x224));
  *(float *)(param_1 + 0x70) = fVar1 * 3986.3135;
  return;
}



// FUNCTION 1431d6fa0 FUN_1431d6fa0 body=104 status=ok
// SIG undefined FUN_1431d6fa0(void)

void FUN_1431d6fa0(longlong param_1,int param_2,float param_3)

{
  if (param_2 == 0) {
    param_3 = param_3 + 1.0;
  }
  else {
    if (param_2 == 1) {
      *(float *)(param_1 + 0x110) = param_3;
      *(float *)(param_1 + 0x8c) = param_3 + *(float *)(param_1 + 0x10c);
      return;
    }
    if (param_2 == 2) {
      *(float *)(param_1 + 0x118) = param_3;
      *(float *)(param_1 + 0x90) = param_3 + *(float *)(param_1 + 0x114);
      return;
    }
    if (1 < param_2 - 3U) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431d7004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x2f0) + 0x28))
            ((longlong *)(param_1 + 0x2f0),param_2 + param_1,param_3);
  return;
}



// FUNCTION 1431d7010 FUN_1431d7010 body=45 status=ok
// SIG undefined FUN_1431d7010(void)

void FUN_1431d7010(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  uint local_10;
  
  local_10 = local_10 & 0xfffffffe | 2;
  local_18 = param_2;
  CAkPBI::SetMuteMapEntry(param_1 + -0x2f0,&local_18);
  return;
}



// FUNCTION 1431d7040 FUN_1431d7040 body=98 status=ok
// SIG undefined FUN_1431d7040(void)

void FUN_1431d7040(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    lVar1 = param_1 + 0x2d8;
    if (param_1 == 0x18) {
      lVar1 = 0;
    }
    FUN_1431db420(*(longlong *)(param_1 + 0x2e8),lVar1);
  }
  FUN_1431da830(param_1 + 0x2d8);
  FUN_14317f1e0(param_1,param_2);
  return;
}



// FUNCTION 1431d70d0 CAkMatrixAwareCtx body=65 status=ok
// SIG undefined CAkMatrixAwareCtx(void)

undefined8 * CAkMatrixAwareCtx::CAkMatrixAwareCtx(undefined8 *param_1)

{
  CAkMusicCtx::CAkMusicCtx();
  *param_1 = &PTR_StartProfileThreadUsage_145ad0348;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0418;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1431d7120 ~CAkMatrixAwareCtx body=37 status=ok
// SIG undefined ~CAkMatrixAwareCtx(void)

void CAkMatrixAwareCtx::~CAkMatrixAwareCtx(undefined8 *param_1)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad0348;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0418;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  CAkMusicCtx::~CAkMusicCtx();
  return;
}



// FUNCTION 1431d7160 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMatrixAwareCtx::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145ad0348;
  param_1[3] = &PTR_StartProfileThreadUsage_145ad0418;
  param_1[5] = &PTR_TransUpdateValue_145ad0210;
  CAkMusicCtx::~CAkMusicCtx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1431d71c0 GetAbsoluteTimeOffset body=42 status=ok
// SIG undefined GetAbsoluteTimeOffset(void)

longlong CAkMatrixAwareCtx::GetAbsoluteTimeOffset(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = GetAbsoluteTimeOffset();
    return lVar2 + lVar1;
  }
  return lVar1;
}



// FUNCTION 1431d71f0 GetFirstSegmentNode body=101 status=ok
// SIG undefined GetFirstSegmentNode(void)

undefined8 CAkMatrixAwareCtx::GetFirstSegmentNode(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_138 [264];
  longlong local_30;
  
  FUN_1431dc400(local_138,param_1,1);
  if (local_30 == 0) {
    uVar1 = 0;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    uVar1 = CAkScheduleWindow::GetNode(local_138,param_2);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_138);
  return uVar1;
}



// FUNCTION 1431d7260 GetPlayingSegmentInfo body=244 status=ok
// SIG undefined GetPlayingSegmentInfo(void)

undefined4 CAkMatrixAwareCtx::GetPlayingSegmentInfo(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_148 [264];
  longlong local_40 [7];
  
  FUN_1431dc400(local_148,param_1,0);
  if (local_40[0] == 0) {
    uVar3 = 2;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
    lVar5 = *(longlong *)(param_1 + 0x70);
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x54);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar4 = GetAbsoluteTimeOffset();
      lVar5 = lVar5 + lVar4;
    }
    if (*(longlong *)(local_40[0] + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_148,0);
      uVar2 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                        (local_40,(lVar1 - lVar5) - lVar4);
    }
    uVar3 = CAkScheduledItem::GetInfo(local_40[0],uVar2,param_2,uVar3);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_148);
  return uVar3;
}



// FUNCTION 1431d7360 FUN_1431d7360 body=36 status=ok
// SIG undefined FUN_1431d7360(void)

int FUN_1431d7360(longlong *param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  (**(code **)(*param_1 + 0x90))(param_1,local_res10,local_res8);
  return local_res8[0] - local_res10[0];
}



// FUNCTION 1431d7390 Init body=109 status=ok
// SIG undefined Init(void)

undefined8
CAkMatrixAwareCtx::Init(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  CAkMusicCtx::Init();
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = CAkMusicRenderer::AddChild(DAT_146b520c8,param_1,param_3,param_2,param_4);
  }
  else {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1431d7400 OnStopped body=46 status=ok
// SIG undefined OnStopped(void)

void CAkMatrixAwareCtx::OnStopped(longlong param_1)

{
  CAkMusicCtx::OnStopped();
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    CAkMatrixSequencer::OnStopped();
    return;
  }
  return;
}



// FUNCTION 1431d7430 ProcessEpilogue body=38 status=ok
// SIG undefined ProcessEpilogue(void)

void CAkMatrixAwareCtx::ProcessEpilogue(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1431d8640(*(undefined8 *)(param_1 + 0x68));
  }
  FUN_1431d64a0(param_1);
  return;
}



// FUNCTION 1431d7460 CAkMatrixSequencer body=188 status=ok
// SIG undefined CAkMatrixSequencer(void)

undefined8 *
CAkMatrixSequencer::CAkMatrixSequencer
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
          undefined1 param_5)

{
  int *piVar1;
  
  param_1[2] = param_2;
  *param_1 = &PTR_LAB_145ad0428;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xb) = 0;
  CAkMidiClipMgr::CAkMidiClipMgr(param_1 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0x14);
  param_1[4] = param_3[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 2);
  piVar1 = (int *)*param_3;
  if (param_1[3] != 0) {
    AkExternalSourceArray::Release();
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  param_1[3] = piVar1;
  param_1[6] = param_4;
  *(undefined1 *)(param_1 + 7) = param_5;
  *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
  CAkStateMgr::RegisterTrigger(DAT_146b50ae8,param_1,param_1[6]);
  return param_1;
}



// FUNCTION 1431d7520 CAkScheduledItem body=105 status=ok
// SIG undefined CAkScheduledItem(void)

undefined8 *
CAkScheduledItem::CAkScheduledItem(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (param_3 != 0) {
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
  }
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 4;
  *(undefined1 *)(param_1 + 9) = 0;
  *(ushort *)((longlong)param_1 + 0x4c) = *(ushort *)((longlong)param_1 + 0x4c) & 0xfff8;
  if (param_1[4] != 0) {
    *(undefined8 **)(param_1[4] + 0x88) = param_1;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(*(longlong *)(param_1[4] + 0x80) + 0x10);
    return param_1;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1431d7590 ~CAkMatrixSequencer body=156 status=ok
// SIG undefined ~CAkMatrixSequencer(void)

void CAkMatrixSequencer::~CAkMatrixSequencer(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_LAB_145ad0428;
  RemoveAllPendingStingers();
  CAkStateMgr::UnregisterTrigger(DAT_146b50ae8,param_1);
  puVar2 = (undefined8 *)param_1[6];
  param_1[9] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 10);
    *piVar1 = *piVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar3,puVar2);
    }
    param_1[6] = 0;
  }
  CAkMidiClipMgr::~CAkMidiClipMgr(param_1 + 0xc);
  if (param_1[3] != 0) {
    AkExternalSourceArray::Release();
    return;
  }
  return;
}



// FUNCTION 1431d7630 AttachStopCmd body=107 status=ok
// SIG undefined AttachStopCmd(void)

void CAkScheduledItem::AttachStopCmd(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x40) = param_2;
  if (param_4 < iVar1) {
    dVar3 = ((double)(param_4 - iVar1) * 1000.0) / (double)DAT_1467bdcac;
    if (dVar3 <= 0.0) {
      dVar2 = -0.5;
    }
    else {
      dVar2 = 0.5;
    }
    *(int *)(param_1 + 0x40) = (int)(dVar2 + dVar3) + param_2;
    param_4 = iVar1;
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(int *)(param_1 + 0x3c) = param_4;
  return;
}



// FUNCTION 1431d76a0 CanDestroy body=26 status=ok
// SIG undefined CanDestroy(void)

undefined1 CAkScheduledItem::CanDestroy(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x20) == 0) && ((*(byte *)(param_1 + 0x4c) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x18) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1431d76c0 CanPlayStinger body=49 status=ok
// SIG undefined CanPlayStinger(void)

ulonglong CAkMatrixSequencer::CanPlayStinger(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 1;
    }
    if ((*(int *)(puVar1 + 2) == param_2) &&
       (*(longlong *)(param_1 + 8) - *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) <=
        (longlong)((ulonglong)*(uint *)(puVar1 + 4) + puVar1[3]))) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// FUNCTION 1431d7700 CancelPlayback body=213 status=ok
// SIG undefined CancelPlayback(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkScheduledItem::CancelPlayback(longlong param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x62) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x4c) & 4) == 0)) {
    _CancelPlayback(param_1,param_2 - *(int *)(param_1 + 8));
    return;
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xfffc;
  pvVar4 = *(void **)(param_1 + 0x18);
  if (pvVar4 != (void *)0x0) {
    do {
      if (*(int *)((longlong)pvVar4 + 8) == 1) {
        CAkMusicRenderer::PerformDelayedStateChange
                  (DAT_146b520c8,*(undefined8 *)((longlong)pvVar4 + 0x10));
      }
      pvVar1 = *(void **)((longlong)pvVar4 + 0x18);
      pvVar2 = pvVar1;
      if (pvVar4 == *(void **)(param_1 + 0x18)) {
        *(void **)(param_1 + 0x18) = pvVar1;
        pvVar2 = _DAT_00000018;
      }
      _DAT_00000018 = pvVar2;
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
      pvVar4 = pvVar1;
    } while (pvVar1 != (void *)0x0);
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x88) = 0;
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar3 != 0) {
      FUN_1431d64a0();
      return;
    }
  }
  return;
}



// FUNCTION 1431d77e0 Destroy body=75 status=ok
// SIG undefined Destroy(void)

void CAkScheduledItem::Destroy(void *param_1)

{
  long lVar1;
  
  lVar1 = g_DefaultPoolId;
  if (param_1 != (void *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    if (*(longlong *)((longlong)param_1 + 0x20) != 0) {
      FUN_1431d64a0();
      *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    }
    AK::MemoryMgr::Free(lVar1,param_1);
  }
  return;
}



// FUNCTION 1431d7830 FUN_1431d7830 body=514 status=ok
// SIG undefined FUN_1431d7830(void)

void FUN_1431d7830(longlong param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x50);
  *piVar1 = *piVar1 + 1;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x62);
  if (((bVar2 & 3) != 0) && ((bVar2 & 0x10) == 0)) {
    plVar3 = (longlong *)CAkMatrixSequencer::GetActiveNode(param_1);
    fVar9 = 0.5;
    if ((*(char *)(param_1 + 0x58) == '\0') && (plVar3 != (longlong *)0x0)) {
      fVar8 = *(float *)(param_1 + 0x54);
      if (*(char *)(param_1 + 0x59) != '\0') {
        FUN_140511510(*(undefined8 *)(param_1 + 0x10));
      }
      local_68 = *(undefined8 *)(param_1 + 0x30);
      local_60 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
      local_58 = 0;
      local_50 = 0xff;
      local_48 = 0xff;
      local_40 = 0;
      (**(code **)(*plVar3 + 0x268))(plVar3,param_1 + 0x54,&local_68);
      fVar7 = *(float *)(param_1 + 0x54);
      fVar6 = 0.25;
      if ((0.25 <= fVar7) && (fVar6 = fVar7, 4.0 <= fVar7)) {
        fVar6 = 4.0;
      }
      fVar6 = (float)param_2 * fVar6;
      if (fVar6 <= 0.0) {
        fVar7 = -0.5;
      }
      else {
        fVar7 = 0.5;
      }
      fVar7 = (float)(uint)(int)(fVar7 + fVar6) / (float)param_2;
      *(float *)(param_1 + 0x54) = fVar7;
      if (fVar7 - fVar8 != 0.0) {
        FUN_1405216e0(*(undefined8 *)(param_1 + 0x10),0x36);
      }
      *(undefined2 *)(param_1 + 0x58) = 1;
    }
    fVar8 = (float)param_2 * *(float *)(param_1 + 0x54);
    if (fVar8 <= 0.0) {
      fVar9 = -0.5;
    }
    local_78 = 0;
    local_70 = 0;
    iVar5 = (int)(fVar8 + fVar9);
    *(int *)(param_1 + 0x50) = iVar5;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),iVar5,&local_78);
    CAkMidiClipMgr::NextFrame(param_1 + 0x60,iVar5,*(undefined4 *)(param_1 + 0x54));
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x50);
    CAkMusicCtx::OnFrameEnd(*(undefined8 *)(param_1 + 0x10));
    plVar4 = (longlong *)CAkMatrixSequencer::GetActiveNode(param_1);
    if (plVar4 != plVar3) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
  }
  FUN_1431d64a0(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1431d7a40 ForcePostExit body=102 status=ok
// SIG undefined ForcePostExit(void)

void CAkScheduledItem::ForcePostExit(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x40) == 0)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80);
    iVar2 = CAkMusicSegment::ActiveDuration(uVar1);
    if (param_2 == '\0') {
      *(int *)(param_1 + 0x3c) = iVar2;
    }
    else {
      iVar3 = CAkMusicSegment::PostExitDuration(uVar1);
      *(int *)(param_1 + 0x3c) = iVar3 + iVar2;
    }
  }
  return;
}



// FUNCTION 1431d7ab0 GetActiveNode body=96 status=ok
// SIG undefined GetActiveNode(void)

longlong CAkMatrixSequencer::GetActiveNode(longlong param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  undefined1 local_138 [264];
  longlong local_30;
  
  FUN_1431dc400(local_138,*(undefined8 *)(param_1 + 0x10),0);
  if (local_30 == 0) {
    local_res8[0] = 0;
  }
  else {
    lVar1 = CAkScheduleWindow::GetNode(local_138,local_res8);
    if (lVar1 != 0) {
      local_res8[0] = lVar1;
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_138);
  return local_res8[0];
}



// FUNCTION 1431d7b10 GetEarliestStateSyncTime body=302 status=ok
// SIG undefined GetEarliestStateSyncTime(void)

int CAkMatrixSequencer::GetEarliestStateSyncTime
              (longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_res20 [2];
  longlong local_38;
  int *local_30;
  ulonglong local_28;
  
  *param_4 = 0;
  local_30 = (int *)0x0;
  local_28 = 0;
  uVar2 = CAkScheduleWindow::GetNode(param_2,0);
  CAkMusicSegment::GetStateSyncTypes(uVar2,param_3,&local_30);
  if ((int)local_28 == 0) {
    iVar4 = 3;
  }
  else if (*local_30 == 0) {
    iVar4 = 2;
  }
  else {
    iVar4 = 1;
    piVar3 = local_30;
    if (local_30 != local_30 + (local_28 & 0xffffffff)) {
      do {
        local_res20[0] = 0;
        iVar1 = CAkScheduleWindow::FindSyncPoint
                          (param_2,*(longlong *)(param_1 + 8) -
                                   *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70),*piVar3,
                           local_res20,0,0,&local_38);
        if ((iVar1 == 1) && ((iVar4 == 1 || (local_38 < *param_4)))) {
          *param_4 = local_38;
          iVar4 = 0;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != local_30 + (local_28 & 0xffffffff));
    }
  }
  if (local_30 != (int *)0x0) {
    local_28 = local_28 & 0xffffffff00000000;
    AK::MemoryMgr::Free(g_DefaultPoolId,local_30);
  }
  return iVar4;
}



// FUNCTION 1431d7c40 GetInfo body=590 status=ok
// SIG undefined GetInfo(void)

undefined8 CAkScheduledItem::GetInfo(longlong param_1,int param_2,int *param_3,float param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    *param_3 = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80);
    iVar2 = CAkMusicSegment::PreEntryDuration(uVar1);
    dVar4 = ((double)iVar2 * 1000.0) / (double)DAT_1467bdcac;
    if (dVar4 <= 0.0) {
      lVar3 = 0xbfe00000;
    }
    else {
      lVar3 = 0x3fe00000;
    }
    param_3[1] = (int)((double)(lVar3 << 0x20) + dVar4);
    iVar2 = CAkMusicSegment::ActiveDuration(uVar1);
    dVar4 = ((double)iVar2 * 1000.0) / (double)DAT_1467bdcac;
    if (dVar4 <= 0.0) {
      lVar3 = 0xbfe00000;
    }
    else {
      lVar3 = 0x3fe00000;
    }
    param_3[2] = (int)((double)(lVar3 << 0x20) + dVar4);
    iVar2 = CAkMusicSegment::PostExitDuration(uVar1);
    dVar4 = ((double)iVar2 * 1000.0) / (double)DAT_1467bdcac;
    if (dVar4 <= 0.0) {
      lVar3 = 0xbfe00000;
    }
    else {
      lVar3 = 0x3fe00000;
    }
    param_3[3] = (int)((double)(lVar3 << 0x20) + dVar4);
    dVar4 = ((double)param_2 * 1000.0) / (double)DAT_1467bdcac;
    uVar6 = 0x3fe00000;
    if (dVar4 <= 0.0) {
      uVar6 = 0xbfe00000;
    }
    *param_3 = (int)((double)((ulonglong)uVar6 << 0x20) + dVar4);
    if (*(int *)(*(longlong *)(param_1 + 0x20) + 0xa0) - param_2 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = AkTimeConv::SamplesToMilliseconds();
    }
    param_3[4] = iVar2;
    lVar3 = CAkMusicNode::GetMusicGrid(uVar1);
    fVar5 = 1.0 / ((float)DAT_1467bdcac * param_4);
    param_3[6] = (int)((float)*(uint *)(lVar3 + 8) * fVar5);
    param_3[5] = (int)((float)*(uint *)(lVar3 + 4) * fVar5);
    param_3[7] = (int)((float)*(uint *)(lVar3 + 0xc) * fVar5);
    param_3[8] = (int)((float)*(uint *)(lVar3 + 0x10) * fVar5);
  }
  return 1;
}



// FUNCTION 1431d7e90 GetMusicSyncFlags body=13 status=ok
// SIG undefined GetMusicSyncFlags(void)

uint CAkMatrixSequencer::GetMusicSyncFlags(longlong param_1)

{
  return *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20) & 0x7f00;
}



// FUNCTION 1431d7ea0 FUN_1431d7ea0 body=871 status=ok
// SIG undefined FUN_1431d7ea0(void)

void FUN_1431d7ea0(longlong param_1,int param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint local_res8 [2];
  int local_res20 [2];
  undefined1 *in_stack_fffffffffffffe18;
  uint in_stack_fffffffffffffe20;
  undefined1 **in_stack_fffffffffffffe28;
  longlong *local_1c8;
  ulonglong local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  undefined4 local_198;
  ushort local_194;
  undefined1 local_190 [8];
  longlong local_188;
  longlong local_180;
  undefined1 *local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [264];
  longlong local_60;
  char local_40;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (1 < (*(byte *)(lVar8 + 0x62) & 0xf)) {
    return;
  }
  local_180 = *(longlong *)(param_1 + 8) - *(longlong *)(lVar8 + 0x70);
  FUN_1431dc400(local_168,lVar8,0);
  if (local_60 != 0) {
    bVar1 = false;
    if (param_3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                (*(longlong **)(param_1 + 0x10),local_168,0);
      if (local_60 == 0) goto LAB_1431d81f0;
      bVar1 = true;
    }
    iVar3 = 2;
    do {
      plVar7 = (longlong *)0x0;
      lVar5 = CAkScheduleWindow::GetNode(local_168,&local_188);
      local_1c8 = (longlong *)0x0;
      local_1c0 = 0;
      lVar8 = local_188;
      if (lVar5 != 0) {
        lVar8 = lVar5;
      }
      FUN_1431de360(lVar8,&local_1c8);
      for (plVar9 = local_1c8; plVar6 = plVar7, plVar9 != local_1c8 + (local_1c0 & 0xffffffff) * 3;
          plVar9 = plVar9 + 3) {
        if ((int)*plVar9 == param_2) {
          cVar2 = CAkMatrixSequencer::CanPlayStinger(param_1,param_2);
          if (cVar2 != '\0') {
            plVar6 = (longlong *)
                     CAkAudioLibIndex::GetNodePtrAndAddRef
                               (DAT_146b50af8,*(int *)((longlong)plVar9 + 4),0);
            if (plVar6 == (longlong *)0x0) {
              local_res8[0] = 0;
LAB_1431d808d:
              if (*(int *)((longlong)plVar9 + 4) != 0) goto joined_r0x0001431d81bf;
            }
            else {
              in_stack_fffffffffffffe18 =
                   (undefined1 *)((ulonglong)in_stack_fffffffffffffe18 & 0xffffffffffffff00);
              plVar7 = (longlong *)
                       (**(code **)(*plVar6 + 0x260))
                                 (plVar6,*(undefined8 *)(param_1 + 0x10),
                                  *(undefined8 *)(param_1 + 0x30),param_1 + 0x18,
                                  in_stack_fffffffffffffe18);
              if (plVar7 != (longlong *)0x0) {
                in_stack_fffffffffffffe20 = 0;
                local_194 = local_194 & 0xffe8 | 8;
                local_1a0 = 0;
                local_1a8[0] = 0;
                local_198 = 0;
                local_1b8 = 0;
                local_1b4 = 0;
                local_1b0 = 0;
                in_stack_fffffffffffffe18 = local_190;
                iVar3 = (**(code **)(*plVar7 + 0x78))
                                  (plVar7,local_1a8,&local_1b8,local_res8,in_stack_fffffffffffffe18,
                                   0,(ulonglong)in_stack_fffffffffffffe28 & 0xffffffffffffff00);
                if (iVar3 == 0) {
                  CAkMusicCtx::_Cancel(plVar7);
                  plVar7 = (longlong *)0x0;
                }
              }
              (**(code **)(*plVar6 + 0x10))(plVar6);
              if (plVar7 == (longlong *)0x0) goto LAB_1431d808d;
            }
            local_res20[0] = *(int *)((longlong)plVar9 + 0xc);
            in_stack_fffffffffffffe28 = &local_178;
            in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
            in_stack_fffffffffffffe18 =
                 (undefined1 *)((ulonglong)in_stack_fffffffffffffe18 & 0xffffffffffffff00);
            iVar3 = CAkScheduleWindow::FindSyncPoint
                              (local_168,(int)local_res8[0] + local_180,(int)plVar9[1],local_res20,
                               in_stack_fffffffffffffe18,in_stack_fffffffffffffe20,
                               in_stack_fffffffffffffe28);
            plVar6 = plVar9;
            if (iVar3 != 1) {
              if (plVar7 != (longlong *)0x0) {
                CAkMusicCtx::_Cancel(plVar7);
              }
              if (((local_40 != '\0') || (*(int *)((longlong)plVar9 + 0x14) != 1)) || (bVar1)) {
                iVar3 = 1;
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                          (*(longlong **)(param_1 + 0x10),local_168);
                bVar1 = true;
              }
              break;
            }
            in_stack_fffffffffffffe28 =
                 (undefined1 **)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe28 >> 8),!bVar1);
            in_stack_fffffffffffffe18 = local_178;
            in_stack_fffffffffffffe20 = local_res8[0];
            iVar4 = CAkMatrixSequencer::ScheduleStingerForPlayback
                              (param_1,local_168,plVar7,plVar9,local_178,local_res8[0],
                               in_stack_fffffffffffffe28);
            if (iVar4 == 1) {
              if (plVar7 != (longlong *)0x0) {
                CAkMatrixAwareCtx::GetFirstSegmentNode(plVar7,local_170);
              }
              break;
            }
          }
joined_r0x0001431d81bf:
          if (local_1c8 != (longlong *)0x0) {
            local_1c0 = local_1c0 & 0xffffffff00000000;
            AK::MemoryMgr::Free(g_DefaultPoolId,local_1c8);
          }
          goto LAB_1431d81f0;
        }
      }
      if (local_1c8 != (longlong *)0x0) {
        local_1c0 = local_1c0 & 0xffffffff00000000;
        AK::MemoryMgr::Free(g_DefaultPoolId,local_1c8);
        local_1c8 = (longlong *)0x0;
        local_1c0 = local_1c0 & 0xffffffff;
      }
    } while (((iVar3 != 1) && (plVar6 != (longlong *)0x0)) && (local_60 != 0));
  }
LAB_1431d81f0:
  AK::MemoryMgr::StartProfileThreadUsage((long)local_168);
  return;
}



// FUNCTION 1431d8210 NotifyMusicCallbacks body=470 status=ok
// SIG undefined NotifyMusicCallbacks(void)

void CAkScheduledItem::NotifyMusicCallbacks
               (longlong param_1,ulonglong param_2,int param_3,uint param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_res20 [2];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  uint local_58;
  uint local_54;
  undefined1 local_50 [40];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_4 != 0) {
    GetInfo(param_1,param_2,local_50,param_6);
    iVar4 = (int)param_2;
    if ((param_4 >> 0xd & 1) != 0) {
      CAkMusicSegment::NotifyUserCuesInRange
                (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80),param_5,local_50,
                 param_2 & 0xffffffff,CONCAT44(uVar5,param_3));
    }
    if ((((param_4 >> 10 & 1) != 0) && (iVar4 < 1)) && (0 < iVar4 + param_3)) {
      CAkPlayingMgr::NotifyMusic(DAT_146b50b00,param_5,0x400,local_50);
    }
    CAkMusicSegment::GetNumMusicGridInRange
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80),param_2 & 0xffffffff,param_3,
               local_res20,&local_58,&local_54);
    uVar3 = 0;
    if (((param_4 >> 9 & 1) != 0) && (uVar2 = 0, local_res20[0] != 0)) {
      do {
        CAkPlayingMgr::NotifyMusic(DAT_146b50b00,param_5,0x200,local_50);
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_res20[0]);
    }
    if (((param_4 >> 8 & 1) != 0) && (uVar2 = 0, local_58 != 0)) {
      do {
        CAkPlayingMgr::NotifyMusic(DAT_146b50b00,param_5,0x100,local_50);
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_58);
    }
    if (((param_4 >> 0xc & 1) != 0) && (local_54 != 0)) {
      do {
        CAkPlayingMgr::NotifyMusic(DAT_146b50b00,param_5,0x1000,local_50);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_54);
    }
    if ((((param_4 >> 0xb & 1) != 0) &&
        (iVar1 = CAkMusicSegment::ActiveDuration
                           (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80)), iVar4 <= iVar1))
       && (iVar1 < iVar4 + param_3)) {
      CAkPlayingMgr::NotifyMusic(DAT_146b50b00,param_5,0x800,local_50);
    }
  }
  return;
}



// FUNCTION 1431d83f0 OnPaused body=141 status=ok
// SIG undefined OnPaused(void)

void CAkScheduledItem::OnPaused(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  pvVar3 = (void *)0x0;
  while (pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
    if (*(int *)((longlong)pvVar2 + 8) == 1) {
      CAkMusicRenderer::PerformDelayedStateChange
                (DAT_146b520c8,*(undefined8 *)((longlong)pvVar2 + 0x10));
      pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
      if (pvVar2 == *(void **)(param_1 + 0x18)) {
        *(void **)(param_1 + 0x18) = pvVar1;
      }
      else {
        *(void **)((longlong)pvVar3 + 0x18) = pvVar1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    }
    else {
      pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
      pvVar3 = pvVar2;
    }
  }
  return;
}



// FUNCTION 1431d8480 OnStopped body=5 status=ok
// SIG undefined OnStopped(void)

void CAkMatrixSequencer::OnStopped(void)

{
  RemoveAllPendingStingers();
  return;
}



// FUNCTION 1431d8490 OnStopped body=181 status=ok
// SIG undefined OnStopped(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkScheduledItem::OnStopped(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xfffc;
  pvVar3 = *(void **)(param_1 + 0x18);
  while (pvVar3 != (void *)0x0) {
    if (*(int *)((longlong)pvVar3 + 8) == 1) {
      CAkMusicRenderer::PerformDelayedStateChange
                (DAT_146b520c8,*(undefined8 *)((longlong)pvVar3 + 0x10));
    }
    pvVar1 = *(void **)((longlong)pvVar3 + 0x18);
    pvVar4 = pvVar1;
    if (pvVar3 == *(void **)(param_1 + 0x18)) {
      *(void **)(param_1 + 0x18) = pvVar1;
      pvVar4 = _DAT_00000018;
    }
    _DAT_00000018 = pvVar4;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
    pvVar3 = pvVar1;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88) = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar2 != 0) {
      FUN_1431d64a0();
      return;
    }
  }
  return;
}



// FUNCTION 1431d8550 PopAssociatedActionsToRescheduleAfterTransitionSyncPoint body=139 status=ok
// SIG undefined PopAssociatedActionsToRescheduleAfterTransitionSyncPoint(void)

void CAkScheduledItem::PopAssociatedActionsToRescheduleAfterTransitionSyncPoint
               (longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar4 = (longlong *)0x0;
  while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
    if ((param_3 < *plVar3) || (((int)plVar3[1] == 0 && (*plVar3 == param_3)))) {
      plVar1 = plVar3 + 3;
      plVar2 = (longlong *)*plVar1;
      if (plVar3 == *(longlong **)(param_1 + 0x18)) {
        *(longlong **)(param_1 + 0x18) = plVar2;
      }
      else {
        plVar4[3] = (longlong)plVar2;
      }
      if (*(longlong *)(param_2 + 8) == 0) {
        *(longlong **)(param_2 + 8) = plVar3;
        *plVar1 = 0;
      }
      else {
        *plVar1 = *(longlong *)(param_2 + 8);
        *(longlong **)(param_2 + 8) = plVar3;
      }
    }
    else {
      plVar2 = (longlong *)plVar3[3];
      plVar4 = plVar3;
    }
  }
  return;
}



// FUNCTION 1431d85e0 Prepare body=84 status=ok
// SIG undefined Prepare(void)

void CAkScheduledItem::Prepare(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = CAkSegmentCtx::Prepare(*(longlong *)(param_1 + 0x20),param_3);
    iVar1 = iVar1 + (param_2 - param_3);
  }
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 1;
  *(int *)(param_1 + 0x2c) = param_2 - iVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1431d8640 FUN_1431d8640 body=279 status=ok
// SIG undefined FUN_1431d8640(void)

void FUN_1431d8640(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_138 [264];
  longlong local_30 [3];
  longlong local_18;
  char local_10;
  
  FUN_1431d89f0();
  FUN_1431dc400(local_138,*(undefined8 *)(param_1 + 0x10),0);
  if (local_30[0] != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
    while (CAkScheduleWindow::NotifyMusicCallbacks
                     (local_138,param_2,param_3,uVar1 & 0x7f00,*(undefined4 *)(param_1 + 0x2c),
                      *(undefined4 *)(param_1 + 0x54)), local_10 == '\0') {
      lVar2 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_138,0);
      lVar2 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                        (local_30,param_2 - lVar2);
      uVar3 = 0;
      if (lVar2 < local_18) {
        uVar3 = local_18 - lVar2;
      }
      if ((param_3 <= uVar3) ||
         ((**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                    (*(longlong **)(param_1 + 0x10),local_138,0), local_30[0] == 0)) break;
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)local_138);
  return;
}



// FUNCTION 1431d8760 Process body=396 status=ok
// SIG undefined Process(void)

void CAkScheduledItem::Process
               (longlong param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = param_2 - *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar9 = param_3 + uVar8;
  if (lVar2 != 0) {
    uVar6 = *(ushort *)(param_1 + 0x4c);
    iVar7 = (int)uVar8;
    if ((uVar6 & 1) == 0) {
      if (((param_5 != '\0') && ((*(byte *)(lVar2 + 0x62) & 1) != 0)) && ((uVar6 & 4) == 0)) {
        _CancelPlayback(param_1,uVar8 & 0xffffffff);
        uVar6 = *(ushort *)(param_1 + 0x4c);
      }
    }
    else if ((iVar7 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < lVar9)) {
      if (param_5 == '\0') {
        CAkMusicCtx::_Play(lVar2,param_1 + 0x30);
        uVar6 = *(ushort *)(param_1 + 0x4c) & 0xfffe;
        *(ushort *)(param_1 + 0x4c) = uVar6;
      }
      else {
        uVar6 = uVar6 & 0xfffe | 4;
        *(ushort *)(param_1 + 0x4c) = uVar6;
      }
    }
    if ((((uVar6 & 2) != 0) && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 < lVar9)) &&
       (iVar7 <= iVar1)) {
      FUN_1431d6a20(*(undefined8 *)(param_1 + 0x20),param_1 + 0x40,iVar1 - iVar7);
      *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) & 0xfffd;
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x62) & 3) != 0)) &&
       ((*(byte *)(lVar2 + 0x62) & 0x10) == 0)) {
      CAkSegmentCtx::Process(lVar2,uVar8 & 0xffffffff,param_3,param_4);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  plVar5 = (longlong *)0x0;
  while (plVar4 = plVar3, plVar4 != (longlong *)0x0) {
    if (*plVar4 < lVar9) {
      if ((int)plVar4[1] == 1) {
        CAkMusicRenderer::PerformDelayedStateChange(DAT_146b520c8,plVar4[2]);
      }
      plVar3 = (longlong *)plVar4[3];
      if (plVar4 == *(longlong **)(param_1 + 0x18)) {
        *(longlong **)(param_1 + 0x18) = plVar3;
      }
      else {
        plVar5[3] = (longlong)plVar3;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar4);
    }
    else {
      plVar3 = (longlong *)plVar4[3];
      plVar5 = plVar4;
    }
  }
  return;
}



// FUNCTION 1431d88f0 ProcessDelayedStateChange body=255 status=ok
// SIG undefined ProcessDelayedStateChange(void)

undefined8
CAkMatrixSequencer::ProcessDelayedStateChange
          (longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_138 [264];
  longlong local_30 [5];
  
  FUN_1431dc400(local_138,*(undefined8 *)(param_1 + 0x10),0);
  if (local_30[0] != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
                (*(longlong **)(param_1 + 0x10),local_138,0);
    }
    puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    if (puVar1 != (undefined8 *)0x0) {
      uVar4 = 1;
      *(undefined4 *)(puVar1 + 1) = 1;
      lVar2 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(local_138,0);
      uVar3 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                        (local_30,param_4 - lVar2);
      *puVar1 = uVar3;
      puVar1[2] = param_2;
      if (*(longlong *)(local_30[0] + 0x18) == 0) {
        *(undefined8 **)(local_30[0] + 0x18) = puVar1;
        puVar1[3] = 0;
      }
      else {
        puVar1[3] = *(longlong *)(local_30[0] + 0x18);
        *(undefined8 **)(local_30[0] + 0x18) = puVar1;
      }
      goto LAB_1431d89ca;
    }
  }
  uVar4 = 2;
LAB_1431d89ca:
  AK::MemoryMgr::StartProfileThreadUsage((long)local_138);
  return uVar4;
}



// FUNCTION 1431d89f0 FUN_1431d89f0 body=440 status=ok
// SIG undefined FUN_1431d89f0(void)

void FUN_1431d89f0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  longlong local_38;
  undefined1 local_30;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  puVar5 = (undefined8 *)0x0;
  while (puVar3 = puVar5, puVar5 = puVar2, puVar5 != (undefined8 *)0x0) {
    plVar7 = (longlong *)puVar5[1];
    plVar1 = puVar5 + 1;
    if (plVar7 == (longlong *)0x0) {
      puVar2 = (undefined8 *)*puVar5;
      if ((longlong)((ulonglong)*(uint *)(puVar5 + 4) + puVar5[3]) < param_2) {
        if (puVar5 == *(undefined8 **)(param_1 + 0x48)) {
          *(undefined8 **)(param_1 + 0x48) = puVar2;
        }
        else {
          *puVar3 = puVar2;
        }
        lVar4 = g_DefaultPoolId;
        lVar6 = *plVar1;
        *plVar1 = 0;
        if (lVar6 != 0) {
          FUN_1431d64a0();
        }
        if (*plVar1 != 0) {
          FUN_1431d64a0();
          *plVar1 = 0;
        }
        AK::MemoryMgr::Free(lVar4,puVar5);
        puVar5 = puVar3;
      }
    }
    else {
      lVar6 = puVar5[3];
      lVar8 = lVar6 - *(int *)((longlong)puVar5 + 0x24);
      if (lVar8 < (longlong)((ulonglong)param_3 + param_2)) {
        if (param_2 <= lVar8) {
          local_40 = 0;
          local_48[0] = 0;
          CAkMusicCtx::_Play(plVar7,local_48);
          lVar6 = puVar5[3];
          plVar7 = (longlong *)*plVar1;
        }
        lVar6 = *(int *)(puVar5 + 5) + lVar6;
        if ((param_2 <= lVar6) && (lVar6 < (longlong)((ulonglong)param_3 + param_2))) {
          local_58 = 0;
          local_54 = 4;
          local_50 = 0;
          FUN_1431d6a20(plVar7,&local_58,(int)lVar6 - (int)param_2);
          plVar7 = (longlong *)*plVar1;
        }
        if (((*(byte *)((longlong)plVar7 + 0x62) & 3) != 0) &&
           ((*(byte *)((longlong)plVar7 + 0x62) & 0x10) == 0)) {
          local_38 = puVar5[3] + 1;
          local_30 = 1;
          (**(code **)(*plVar7 + 0x70))(plVar7,param_2,param_3,&local_38);
          lVar6 = *plVar1;
          if ((1 < (*(byte *)(lVar6 + 0x62) & 0xf)) && (*plVar1 = 0, lVar6 != 0)) {
            FUN_1431d64a0();
          }
        }
      }
      puVar2 = (undefined8 *)*puVar5;
    }
  }
  return;
}



// FUNCTION 1431d8bb0 FUN_1431d8bb0 body=424 status=ok
// SIG undefined FUN_1431d8bb0(void)

longlong FUN_1431d8bb0(longlong param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
                      longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_158 [264];
  longlong local_50;
  char local_30;
  
  lVar7 = *(longlong *)(param_1 + 8) - *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
  FUN_1431dc400(local_158,*(longlong *)(param_1 + 0x10),0);
  lVar4 = 0;
  lVar6 = 0;
  if (local_50 == 0) {
    *param_3 = 0;
    goto LAB_1431d8d2a;
  }
  iVar2 = 3;
  *param_3 = 1;
  lVar1 = *(longlong *)(local_50 + 0x20);
  *param_4 = 0;
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x62) & 1) != 0)) {
    iVar2 = CAkMatrixSequencer::GetEarliestStateSyncTime(param_1,local_158,param_2,param_5);
    if (iVar2 == 2) goto LAB_1431d8d2a;
    if (iVar2 != 0) goto LAB_1431d8c5b;
LAB_1431d8d19:
    lVar4 = *param_5 - lVar7;
    goto LAB_1431d8d2a;
  }
LAB_1431d8c5b:
  if (local_30 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
              (*(longlong **)(param_1 + 0x10),local_158,0);
    if (*(longlong *)(local_50 + 0x20) == 0) {
      *param_3 = iVar2 != 3;
      if (((iVar2 != 1) || (lVar4 = lVar6, lVar1 == 0)) || ((*(byte *)(lVar1 + 0x62) & 1) == 0))
      goto LAB_1431d8d2a;
    }
    else {
      if ((iVar2 == 3) && ((*(byte *)(*(longlong *)(local_50 + 0x20) + 0x62) & 1) == 0))
      goto LAB_1431d8d21;
      *param_4 = 1;
      iVar3 = CAkMatrixSequencer::GetEarliestStateSyncTime(param_1,local_158,param_2,param_5);
      if ((iVar3 == 3) && (iVar2 == 3)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *param_3 = uVar5;
      if (iVar3 == 0) goto LAB_1431d8d19;
      lVar4 = lVar6;
      if (((iVar3 == 1) || (1 < iVar3 - 2U)) || (iVar2 == 3)) goto LAB_1431d8d2a;
    }
    lVar4 = CAkScheduleWindow::StartTime(local_158);
    *param_5 = lVar4;
    lVar4 = lVar4 - lVar7;
  }
  else {
LAB_1431d8d21:
    *param_3 = iVar2 != 3;
    lVar4 = lVar6;
  }
LAB_1431d8d2a:
  AK::MemoryMgr::StartProfileThreadUsage((long)local_158);
  return lVar4;
}



// FUNCTION 1431d8d60 RemoveAllPendingStingers body=159 status=ok
// SIG undefined RemoveAllPendingStingers(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkMatrixSequencer::RemoveAllPendingStingers(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  puVar4 = puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    puVar6 = puVar2;
    if (puVar4 == puVar1) {
      *(undefined8 **)(param_1 + 0x48) = puVar2;
      puVar6 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar6;
    lVar5 = g_DefaultPoolId;
    lVar3 = puVar4[1];
    puVar4[1] = 0;
    if (lVar3 != 0) {
      FUN_1431d64a0();
    }
    if (puVar4[1] != 0) {
      FUN_1431d64a0();
      puVar4[1] = 0;
    }
    AK::MemoryMgr::Free(lVar5,puVar4);
    puVar4 = puVar2;
    puVar1 = *(undefined8 **)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 1431d8e00 FUN_1431d8e00 body=276 status=ok
// SIG undefined FUN_1431d8e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431d8e00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  
  pvVar7 = *(void **)(param_2 + 8);
  do {
    if (pvVar7 == (void *)0x0) {
      return;
    }
    if (*(int *)((longlong)pvVar7 + 8) == 0) {
      puVar3 = *(undefined8 **)((longlong)pvVar7 + 0x10);
      plVar4 = (longlong *)puVar3[1];
      uVar2 = *(undefined4 *)(puVar3 + 2);
      cVar1 = *(char *)((longlong)puVar3 + 0x2c);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0xa8))
                  (plVar4,*(longlong *)(param_1 + 8) -
                          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70));
      }
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        if (puVar5 == puVar3) {
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar5 + 2) = 0;
          }
          break;
        }
      }
      if (cVar1 != '\0') {
        FUN_1431d7ea0(param_1,uVar2,1);
      }
    }
    else if (*(int *)((longlong)pvVar7 + 8) == 1) {
      CAkMusicRenderer::RescheduleDelayedStateChange
                (DAT_146b520c8,*(undefined8 *)((longlong)pvVar7 + 0x10));
    }
    pvVar6 = *(void **)((longlong)pvVar7 + 0x18);
    pvVar8 = pvVar6;
    if (pvVar7 == *(void **)(param_2 + 8)) {
      *(void **)(param_2 + 8) = pvVar6;
      pvVar8 = _DAT_00000018;
    }
    _DAT_00000018 = pvVar8;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
    pvVar7 = pvVar6;
  } while( true );
}



// FUNCTION 1431d8f20 SamplesToMilliseconds body=77 status=ok
// SIG undefined SamplesToMilliseconds(void)

int AkTimeConv::SamplesToMilliseconds(int param_1)

{
  double dVar1;
  
  dVar1 = ((double)param_1 * 1000.0) / (double)DAT_1467bdcac;
  if (0.0 < dVar1) {
    return (int)(dVar1 + 0.5);
  }
  return (int)(dVar1 + -0.5);
}



// FUNCTION 1431d8f70 ScheduleStingerForPlayback body=494 status=ok
// SIG undefined ScheduleStingerForPlayback(void)

undefined4
CAkMatrixSequencer::ScheduleStingerForPlayback
          (longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,longlong param_5,
          undefined4 param_6,char param_7)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  plVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x30);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = 0;
    puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    lVar1 = g_DefaultPoolId;
    if (puVar7 == (undefined8 *)0x0) {
      lVar8 = plVar6[1];
      plVar6[1] = 0;
      if (lVar8 != 0) {
        FUN_1431d64a0();
      }
      if (plVar6[1] != 0) {
        FUN_1431d64a0();
        plVar6[1] = 0;
      }
      AK::MemoryMgr::Free(lVar1,plVar6);
      uVar5 = 2;
    }
    else {
      *(undefined4 *)(plVar6 + 2) = *param_4;
      *(undefined4 *)((longlong)plVar6 + 0x14) = param_4[1];
      plVar6[3] = param_5;
      *(int *)(plVar6 + 4) =
           (int)((longlong)((longlong)(int)param_4[4] * (ulonglong)DAT_1467bdcac) / 1000);
      *(undefined4 *)((longlong)plVar6 + 0x24) = param_6;
      if (param_3 != 0) {
        *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
        *(longlong *)(param_3 + 0x70) = param_5;
        lVar8 = plVar6[1];
        plVar6[1] = param_3;
        if (lVar8 != 0) {
          FUN_1431d64a0();
        }
        lVar8 = CAkMatrixAwareCtx::GetFirstSegmentNode(param_3,0);
        if (lVar8 == 0) {
          *(undefined4 *)(plVar6 + 5) = 0;
        }
        else {
          iVar3 = CAkMusicSegment::ActiveDuration(lVar8);
          iVar4 = CAkMusicSegment::PostExitDuration(lVar8);
          *(int *)(plVar6 + 5) = iVar3 + iVar4;
        }
      }
      if ((param_7 == '\0') || (param_4[5] == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)((longlong)plVar6 + 0x2c) = uVar2;
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(longlong **)(param_1 + 0x48) = plVar6;
        *plVar6 = 0;
      }
      else {
        *plVar6 = *(longlong *)(param_1 + 0x48);
        *(longlong **)(param_1 + 0x48) = plVar6;
      }
      *(undefined4 *)(puVar7 + 1) = 0;
      lVar8 = CAkScheduleWindow::ChainCtxTimeRelativeToLevel(param_2,0);
      uVar9 = AkScheduledChain::SelfContainedIter::CtxTimeToSegmentPosition
                        (param_2 + 0x108,param_5 - lVar8);
      *puVar7 = uVar9;
      puVar7[2] = plVar6;
      lVar8 = *(longlong *)(param_2 + 0x108);
      if (*(longlong *)(lVar8 + 0x18) == 0) {
        *(undefined8 **)(lVar8 + 0x18) = puVar7;
        uVar5 = 1;
        puVar7[3] = 0;
      }
      else {
        puVar7[3] = *(longlong *)(lVar8 + 0x18);
        *(undefined8 **)(lVar8 + 0x18) = puVar7;
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  return 2;
}



// FUNCTION 1431d9160 SetFadeIn body=17 status=ok
// SIG undefined SetFadeIn(void)

void CAkScheduledItem::SetFadeIn
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 1;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  return;
}



// FUNCTION 1431d9190 _CancelPlayback body=139 status=ok
// SIG undefined _CancelPlayback(void)

void CAkScheduledItem::_CancelPlayback(longlong param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int local_18 [2];
  undefined1 local_10;
  
  param_2 = param_2 - *(int *)(*(longlong *)(param_1 + 0x20) + 0xa0);
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  dVar3 = ((double)iVar1 * 1000.0) / (double)DAT_1467bdcac;
  if (dVar3 <= 0.0) {
    dVar2 = -0.5;
  }
  else {
    dVar2 = 0.5;
  }
  local_18[1] = 4;
  local_10 = 0;
  local_18[0] = (int)(dVar2 + dVar3);
  FUN_1431d6a20(*(longlong *)(param_1 + 0x20),local_18,0xffffffff);
  *(ushort *)(param_1 + 0x4c) = *(ushort *)(param_1 + 0x4c) | 4;
  return;
}



// FUNCTION 1431d9220 FUN_1431d9220 body=897 status=ok
// SIG undefined FUN_1431d9220(void)

int FUN_1431d9220(char *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong local_res8;
  
  lVar2 = DAT_146b50b18;
  cVar3 = *param_1;
  if (cVar3 == '\n') {
    uVar4 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,0);
    local_res8 = DAT_146b50b18;
    iVar8 = 1;
    lVar7 = DAT_146b50b18 + 8;
    puVar5 = (undefined4 *)CAkBankReader::GetData(lVar7,*(undefined4 *)(param_1 + 1));
    if (puVar5 == (undefined4 *)0x0) {
      return 2;
    }
    uVar1 = *puVar5;
    plVar6 = (longlong *)CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar4,uVar1);
    if (plVar6 == (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      plVar6 = (longlong *)FUN_1431df180(uVar1);
      if (plVar6 != (longlong *)0x0) {
        iVar8 = CAkMusicSegment::SetInitialValues(plVar6,puVar5,*(undefined4 *)(param_1 + 1));
        goto LAB_1431d9544;
      }
      iVar8 = 2;
      goto LAB_1431d9553;
    }
    goto LAB_1431d9564;
  }
  if (cVar3 == '\v') {
    iVar9 = 1;
    lVar7 = DAT_146b50b18 + 8;
    puVar5 = (undefined4 *)CAkBankReader::GetData(lVar7,*(undefined4 *)(param_1 + 1));
    if (puVar5 == (undefined4 *)0x0) {
      return 2;
    }
    uVar1 = *puVar5;
    plVar6 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar1,0);
    if (plVar6 == (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      plVar6 = (longlong *)CAkMusicTrack::Create(uVar1);
      if (plVar6 == (longlong *)0x0) {
        iVar9 = 2;
      }
      else {
        iVar9 = FUN_1431e2d60(plVar6,puVar5,*(undefined4 *)(param_1 + 1),param_2,0);
        if (iVar9 != 1) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      if (iVar9 != 1) goto LAB_1431d94ab;
    }
    else if (((int)plVar6[0x1a] == 0) ||
            (cVar3 = CAkMusicTrack::HasBankSource(plVar6), cVar3 == '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      iVar8 = FUN_1431e2d60(plVar6,puVar5,*(undefined4 *)(param_1 + 1),param_2,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      iVar9 = 1;
      if (iVar8 != 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        goto LAB_1431d9577;
      }
    }
    CAkBankMgr::AddLoadedItem(lVar2,param_2,plVar6);
LAB_1431d94ab:
    CAkBankReader::ReleaseData(lVar7);
    return iVar9;
  }
  if (cVar3 == '\f') {
    uVar4 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,0);
    local_res8 = DAT_146b50b18;
    iVar8 = 1;
    lVar7 = DAT_146b50b18 + 8;
    puVar5 = (undefined4 *)CAkBankReader::GetData(lVar7,*(undefined4 *)(param_1 + 1));
    if (puVar5 == (undefined4 *)0x0) {
      return 2;
    }
    uVar1 = *puVar5;
    plVar6 = (longlong *)CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar4,uVar1);
    if (plVar6 == (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      plVar6 = (longlong *)CAkMusicSwitchCntr::Create(uVar1);
      if (plVar6 != (longlong *)0x0) {
        iVar8 = CAkMusicSwitchCntr::SetInitialValues(plVar6,puVar5,*(undefined4 *)(param_1 + 1));
        goto LAB_1431d9544;
      }
      iVar8 = 2;
      goto LAB_1431d9553;
    }
  }
  else {
    if (cVar3 != '\r') {
      return 3;
    }
    uVar4 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,0);
    local_res8 = DAT_146b50b18;
    iVar8 = 1;
    lVar7 = DAT_146b50b18 + 8;
    puVar5 = (undefined4 *)CAkBankReader::GetData(lVar7,*(undefined4 *)(param_1 + 1));
    if (puVar5 == (undefined4 *)0x0) {
      return 2;
    }
    uVar1 = *puVar5;
    plVar6 = (longlong *)CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar4,uVar1);
    if (plVar6 == (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      plVar6 = (longlong *)FUN_1431e09d0(uVar1);
      if (plVar6 == (longlong *)0x0) {
        iVar8 = 2;
      }
      else {
        iVar8 = CAkMusicRanSeqCntr::SetInitialValues(plVar6,puVar5,*(undefined4 *)(param_1 + 1));
LAB_1431d9544:
        if (iVar8 != 1) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
LAB_1431d9553:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      if (iVar8 != 1) goto LAB_1431d9577;
    }
  }
LAB_1431d9564:
  CAkBankMgr::AddLoadedItem(local_res8,param_2,plVar6);
LAB_1431d9577:
  CAkBankReader::ReleaseData(lVar7);
  if (iVar8 == 0x5b) {
    return 1;
  }
  return iVar8;
}



// FUNCTION 1431d95d0 CAkMusicTransAware body=71 status=ok
// SIG undefined CAkMusicTransAware(void)

undefined8 * CAkMusicTransAware::CAkMusicTransAware(undefined8 *param_1)

{
  CAkMusicNode::CAkMusicNode();
  *param_1 = &PTR__scalar_deleting_destructor__145ad0430;
  param_1[3] = &PTR_LAB_145ad06b0;
  param_1[6] = &PTR_LAB_145ad0730;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 1431d9620 ~AkMusicTransitionRule body=104 status=ok
// SIG undefined ~AkMusicTransitionRule(void)

void AkMusicTransitionRule::~AkMusicTransitionRule(undefined8 *param_1)

{
  if ((void *)param_1[10] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[10]);
  }
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 1431d9690 ~CAkMusicTransAware body=87 status=ok
// SIG undefined ~CAkMusicTransAware(void)

void CAkMusicTransAware::~CAkMusicTransAware(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0430;
  param_1[3] = &PTR_LAB_145ad06b0;
  param_1[6] = &PTR_LAB_145ad0730;
  FUN_1431da270(param_1 + 0x1f);
  FUN_1431da270(param_1 + 0x1f);
  CAkMusicNode::~CAkMusicNode(param_1);
  return;
}



// FUNCTION 1431d9700 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMusicTransAware::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ad0430;
  param_1[3] = &PTR_LAB_145ad06b0;
  param_1[6] = &PTR_LAB_145ad0730;
  FUN_1431da270(param_1 + 0x1f);
  FUN_1431da270(param_1 + 0x1f);
  CAkMusicNode::~CAkMusicNode(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1431d9780 AscendentMatch body=187 status=ok
// SIG undefined AscendentMatch(void)

longlong CAkMusicTransAware::AscendentMatch
                   (undefined8 param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  do {
    if ((param_4 == 0) || (param_4 == param_2)) {
      return 0;
    }
    uVar5 = *param_3;
    uVar1 = uVar5 + (ulonglong)(uint)param_3[1] * 4;
    uVar3 = uVar1;
    if ((uVar5 != 0) && (uVar6 = uVar1, uVar5 <= uVar1)) {
      do {
        lVar4 = (longlong)(uVar6 - uVar5) >> 2;
        if (lVar4 < 0) {
          lVar4 = lVar4 + 1;
        }
        uVar2 = *(uint *)(uVar5 + (lVar4 >> 1) * 4);
        uVar3 = uVar5 + (lVar4 >> 1) * 4;
        if (*(uint *)(param_4 + 0x10) < uVar2) {
          uVar6 = uVar3 - 4;
        }
        else {
          if (*(uint *)(param_4 + 0x10) <= uVar2) break;
          uVar5 = uVar3 + 4;
        }
        uVar3 = uVar1;
      } while (uVar5 <= uVar6);
    }
    if (uVar3 != uVar1) {
      return param_4;
    }
    param_4 = *(longlong *)(param_4 + 0x80);
  } while( true );
}



// FUNCTION 1431d9840 FUN_1431d9840 body=147 status=ok
// SIG undefined FUN_1431d9840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1431d9840(void)

{
  if (DAT_146b52158 == 0) {
    FUN_143190530(&DAT_146b52150,0xffffffff);
  }
  _DAT_146b52170 = 0;
  DAT_146b52180 = DAT_146b52180 & 0xffffffe7 | 0x27;
  _DAT_146b52178 = 0;
  if (DAT_146b52168 == 0) {
    FUN_143190530(&DAT_146b52160,0xffffffff);
  }
  _DAT_146b52184 = 0;
  _DAT_146b52198 = _DAT_146b52198 & 0xffe0;
  _DAT_146b5218c = 0;
  _DAT_146b52194 = 0;
  DAT_146b521a0 = 0;
  _DAT_146b521a8 = 0;
  return &DAT_146b52150;
}



// FUNCTION 1431d98e0 GetTransitionRule body=310 status=ok
// SIG undefined GetTransitionRule(void)

undefined8 * CAkMusicTransAware::GetTransitionRule(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  
  uVar4 = *(int *)(param_1 + 0x100) - 1;
  if (-1 < (int)uVar4) {
    do {
      puVar7 = (undefined8 *)((ulonglong)uVar4 * 0x60 + *(longlong *)(param_1 + 0xf8));
      piVar5 = (int *)*puVar7;
      if (*piVar5 == -1) {
LAB_1431d998a:
        piVar5 = (int *)puVar7[2];
        if (*piVar5 == -1) {
          return puVar7;
        }
        piVar1 = piVar5 + *(uint *)(puVar7 + 3);
        piVar2 = piVar1;
        if ((piVar5 != (int *)0x0) && (piVar6 = piVar1, piVar5 <= piVar1)) {
          do {
            lVar3 = (longlong)piVar6 - (longlong)piVar5 >> 2;
            if (lVar3 < 0) {
              lVar3 = lVar3 + 1;
            }
            piVar2 = piVar5 + (lVar3 >> 1);
            if (param_3 < (uint)piVar5[lVar3 >> 1]) {
              piVar6 = piVar2 + -1;
            }
            else {
              if (param_3 <= (uint)piVar5[lVar3 >> 1]) break;
              piVar5 = piVar2 + 1;
            }
            piVar2 = piVar1;
          } while (piVar5 <= piVar6);
        }
        if (piVar2 != piVar1) {
          return puVar7;
        }
      }
      else {
        piVar1 = piVar5 + *(uint *)(puVar7 + 1);
        piVar2 = piVar1;
        if ((piVar5 != (int *)0x0) && (piVar6 = piVar1, piVar5 <= piVar1)) {
          do {
            lVar3 = (longlong)piVar6 - (longlong)piVar5 >> 2;
            if (lVar3 < 0) {
              lVar3 = lVar3 + 1;
            }
            piVar2 = piVar5 + (lVar3 >> 1);
            if (param_2 < (uint)piVar5[lVar3 >> 1]) {
              piVar6 = piVar2 + -1;
            }
            else {
              if (param_2 <= (uint)piVar5[lVar3 >> 1]) break;
              piVar5 = piVar2 + 1;
            }
            piVar2 = piVar1;
          } while (piVar5 <= piVar6);
        }
        if (piVar2 != piVar1) goto LAB_1431d998a;
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  return *(undefined8 **)(param_1 + 0xf8);
}



// FUNCTION 1431d9a20 FUN_1431d9a20 body=457 status=ok
// SIG undefined FUN_1431d9a20(void)

undefined8 *
FUN_1431d9a20(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5,
             undefined8 param_6,undefined1 *param_7)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  
  uVar11 = *(int *)(param_1 + 0x100) - 1;
  if (-1 < (int)uVar11) {
    lVar3 = *(longlong *)(param_1 + 0xf8);
    do {
      puVar8 = (undefined8 *)((ulonglong)uVar11 * 0x60 + lVar3);
      if ((*(uint *)(puVar8 + 1) != 0) && (uVar2 = *(uint *)(puVar8 + 3), uVar2 != 0)) {
        piVar9 = (int *)*puVar8;
        if (*piVar9 != -1) {
          piVar1 = piVar9 + *(uint *)(puVar8 + 1);
          piVar6 = piVar1;
          if ((piVar9 != (int *)0x0) && (piVar10 = piVar1, piVar9 <= piVar1)) {
            do {
              lVar7 = (longlong)piVar10 - (longlong)piVar9 >> 2;
              if (lVar7 < 0) {
                lVar7 = lVar7 + 1;
              }
              piVar6 = piVar9 + (lVar7 >> 1);
              if (param_3 < (uint)piVar9[lVar7 >> 1]) {
                piVar10 = piVar6 + -1;
              }
              else {
                if (param_3 <= (uint)piVar9[lVar7 >> 1]) break;
                piVar9 = piVar6 + 1;
              }
              piVar6 = piVar1;
            } while (piVar9 <= piVar10);
          }
          if ((piVar6 == piVar1) &&
             (lVar7 = CAkMusicTransAware::AscendentMatch(param_1,param_2,puVar8,param_4), lVar7 == 0
             )) goto LAB_1431d9b8b;
        }
        piVar9 = (int *)puVar8[2];
        if (*piVar9 == -1) {
LAB_1431d9bd8:
          *param_7 = 0;
          return puVar8;
        }
        piVar1 = piVar9 + uVar2;
        piVar6 = piVar1;
        if ((piVar9 != (int *)0x0) && (piVar10 = piVar1, piVar9 <= piVar1)) {
          do {
            lVar7 = (longlong)piVar10 - (longlong)piVar9 >> 2;
            if (lVar7 < 0) {
              lVar7 = lVar7 + 1;
            }
            piVar6 = piVar9 + (lVar7 >> 1);
            if (param_5 < (uint)piVar9[lVar7 >> 1]) {
              piVar10 = piVar6 + -1;
            }
            else {
              if (param_5 <= (uint)piVar9[lVar7 >> 1]) break;
              piVar9 = piVar6 + 1;
            }
            piVar6 = piVar1;
          } while (piVar9 <= piVar10);
        }
        if (piVar6 != piVar1) goto LAB_1431d9bd8;
        plVar5 = (longlong *)CAkMusicTransAware::AscendentMatch(param_1,param_2,puVar8 + 2,param_6);
        if (plVar5 != (longlong *)0x0) {
          iVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
          if (iVar4 == 8) {
            *param_7 = 1;
            return puVar8;
          }
          goto LAB_1431d9bd8;
        }
      }
LAB_1431d9b8b:
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return *(undefined8 **)(param_1 + 0xf8);
}



// FUNCTION 1431d9c10 FUN_1431d9c10 body=195 status=ok
// SIG undefined FUN_1431d9c10(void)

ulonglong FUN_1431d9c10(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = FUN_1431de6f0();
  if (((int)uVar4 == 1) &&
     (uVar6 = 0, uVar5 = uVar6, uVar2 = uVar4 & 0xffffffff, *(int *)(param_1 + 0x100) != 0)) {
    do {
      uVar4 = uVar2;
      puVar1 = *(undefined4 **)(uVar5 * 0x60 + 0x50 + *(longlong *)(param_1 + 0xf8));
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = FUN_143176fa0(*puVar1,0);
        uVar4 = (ulonglong)uVar3;
        if (uVar3 != 1) {
          if ((int)uVar5 != 0) {
            do {
              puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0xf8) + 0x50 + uVar6);
              if (puVar1 != (undefined4 *)0x0) {
                FUN_143179790(*puVar1,0);
              }
              uVar6 = uVar6 + 0x60;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          FUN_1431defd0(param_1);
          return uVar4;
        }
      }
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      uVar2 = uVar4;
    } while (uVar3 < *(uint *)(param_1 + 0x100));
  }
  return uVar4;
}



// FUNCTION 1431d9ce0 FUN_1431d9ce0 body=1418 status=ok
// SIG undefined FUN_1431d9ce0(void)

undefined8 FUN_1431d9ce0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *pvVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint local_38;
  
  uVar11 = CAkMusicNode::SetMusicNodeParams();
  if ((int)uVar11 == 1) {
    plVar2 = (longlong *)(param_1 + 0xf8);
    FUN_1431da270(plVar2);
    uVar6 = *(uint *)*param_2;
    *param_2 = (uint *)*param_2 + 1;
    if (uVar6 != 0) {
      pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 * 0x60);
      *plVar2 = (longlong)pvVar12;
      if (pvVar12 == (void *)0x0) {
        return 2;
      }
      *(uint *)(param_1 + 0x104) = uVar6;
      local_38 = 0;
      if (uVar6 != 0) {
        do {
          plVar16 = (longlong *)0x0;
          uVar7 = *(uint *)(param_1 + 0x100);
          if (uVar7 < *(uint *)(param_1 + 0x104)) {
            *(uint *)(param_1 + 0x100) = uVar7 + 1;
            plVar16 = (longlong *)((ulonglong)uVar7 * 0x60 + *plVar2);
            if (plVar16 != (longlong *)0x0) {
              *plVar16 = 0;
              plVar16[1] = 0;
              plVar16[2] = 0;
              plVar16[3] = 0;
              plVar16[10] = 0;
            }
          }
          uVar7 = *(uint *)*param_2;
          *param_2 = (uint *)*param_2 + 1;
          uVar17 = (ulonglong)uVar7;
          if (uVar7 != 0) {
            pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar7 * 4);
            *plVar16 = (longlong)pvVar12;
            if (pvVar12 == (void *)0x0) {
              return 2;
            }
            *(uint *)((longlong)plVar16 + 0xc) = uVar7;
            if (uVar7 != 0) {
              do {
                uVar8 = *(undefined4 *)*param_2;
                *param_2 = (undefined4 *)*param_2 + 1;
                uVar7 = *(uint *)(plVar16 + 1);
                if (uVar7 < *(uint *)((longlong)plVar16 + 0xc)) {
LAB_1431d9e7e:
                  uVar7 = *(uint *)(plVar16 + 1);
                  *(uint *)(plVar16 + 1) = uVar7 + 1;
                  puVar14 = (undefined4 *)(*plVar16 + (ulonglong)uVar7 * 4);
                  if (puVar14 != (undefined4 *)0x0) {
                    *puVar14 = uVar8;
                  }
                }
                else {
                  uVar1 = *(uint *)((longlong)plVar16 + 0xc) + 0x10;
                  pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
                  if (pvVar12 != (void *)0x0) {
                    pvVar13 = (void *)*plVar16;
                    if ((pvVar13 != (void *)0x0) && (pvVar13 != pvVar12)) {
                      uVar9 = *(uint *)(plVar16 + 1);
                      uVar15 = 0;
                      if ((ulonglong)uVar9 != 0) {
                        do {
                          *(undefined4 *)((longlong)pvVar12 + uVar15 * 4) =
                               *(undefined4 *)(*plVar16 + uVar15 * 4);
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < uVar9);
                        pvVar13 = (void *)*plVar16;
                      }
                      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar13);
                    }
                    *plVar16 = (longlong)pvVar12;
                    *(uint *)((longlong)plVar16 + 0xc) = uVar1;
                    if (uVar7 < uVar1) goto LAB_1431d9e7e;
                  }
                }
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
          }
          uVar7 = *(uint *)*param_2;
          *param_2 = (uint *)*param_2 + 1;
          uVar17 = (ulonglong)uVar7;
          if (uVar7 != 0) {
            pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar7 * 4);
            plVar16[2] = (longlong)pvVar12;
            if (pvVar12 == (void *)0x0) {
              return 2;
            }
            *(uint *)((longlong)plVar16 + 0x1c) = uVar7;
            if (uVar7 != 0) {
              do {
                uVar8 = *(undefined4 *)*param_2;
                *param_2 = (undefined4 *)*param_2 + 1;
                uVar7 = *(uint *)(plVar16 + 3);
                if (uVar7 < *(uint *)((longlong)plVar16 + 0x1c)) {
LAB_1431d9f71:
                  uVar7 = *(uint *)(plVar16 + 3);
                  *(uint *)(plVar16 + 3) = uVar7 + 1;
                  puVar14 = (undefined4 *)(plVar16[2] + (ulonglong)uVar7 * 4);
                  if (puVar14 != (undefined4 *)0x0) {
                    *puVar14 = uVar8;
                  }
                }
                else {
                  uVar1 = *(uint *)((longlong)plVar16 + 0x1c) + 0x10;
                  pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
                  if (pvVar12 != (void *)0x0) {
                    pvVar13 = (void *)plVar16[2];
                    if ((pvVar13 != (void *)0x0) && (pvVar13 != pvVar12)) {
                      uVar9 = *(uint *)(plVar16 + 3);
                      uVar15 = 0;
                      if ((ulonglong)uVar9 != 0) {
                        do {
                          *(undefined4 *)((longlong)pvVar12 + uVar15 * 4) =
                               *(undefined4 *)(plVar16[2] + uVar15 * 4);
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < uVar9);
                        pvVar13 = (void *)plVar16[2];
                      }
                      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar13);
                    }
                    plVar16[2] = (longlong)pvVar12;
                    *(uint *)((longlong)plVar16 + 0x1c) = uVar1;
                    if (uVar7 < uVar1) goto LAB_1431d9f71;
                  }
                }
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
          }
          uVar8 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)(plVar16 + 4) = uVar8;
          uVar8 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar16 + 0x24) = uVar8;
          iVar10 = *(int *)*param_2;
          *param_2 = (int *)*param_2 + 1;
          *(int *)(plVar16 + 5) =
               (int)((longlong)((longlong)iVar10 * (ulonglong)DAT_1467bdcac) / 1000);
          uVar7 = *(uint *)*param_2;
          *param_2 = (uint *)*param_2 + 1;
          *(uint *)(plVar16 + 6) = *(uint *)(plVar16 + 6) & 0xffffffe0;
          *(uint *)(plVar16 + 6) = *(uint *)(plVar16 + 6) | uVar7 & 0x1f;
          uVar8 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar8;
          bVar3 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(uint *)(plVar16 + 6) = *(uint *)(plVar16 + 6) & 0xffffffdf;
          *(uint *)(plVar16 + 6) = *(uint *)(plVar16 + 6) | (bVar3 & 1) << 5;
          uVar8 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar16 + 0x34) = uVar8;
          uVar8 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)(plVar16 + 7) = uVar8;
          iVar10 = *(int *)*param_2;
          *param_2 = (int *)*param_2 + 1;
          *(int *)((longlong)plVar16 + 0x3c) =
               (int)((longlong)((longlong)iVar10 * (ulonglong)DAT_1467bdcac) / 1000);
          uVar8 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)(plVar16 + 8) = uVar8;
          uVar8 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar16 + 0x44) = uVar8;
          uVar5 = *(ushort *)*param_2;
          *param_2 = (ushort *)*param_2 + 1;
          *(ushort *)(plVar16 + 9) = *(ushort *)(plVar16 + 9) & 0xfff8;
          *(ushort *)(plVar16 + 9) = *(ushort *)(plVar16 + 9) | uVar5 & 7;
          bVar3 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(ushort *)(plVar16 + 9) = *(ushort *)(plVar16 + 9) & 0xfff7;
          *(ushort *)(plVar16 + 9) = *(ushort *)(plVar16 + 9) | (ushort)(bVar3 & 1) << 3;
          bVar3 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(ushort *)(plVar16 + 9) = *(ushort *)(plVar16 + 9) & 0xffef;
          *(ushort *)(plVar16 + 9) = *(ushort *)(plVar16 + 9) | (ushort)(bVar3 & 1) << 4;
          cVar4 = *(char *)*param_2;
          *param_2 = (char *)*param_2 + 1;
          if (cVar4 == '\0') {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
            plVar16[10] = (longlong)puVar14;
          }
          if (puVar14 != (undefined4 *)0x0) {
            uVar8 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            *puVar14 = uVar8;
            uVar8 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar14[1] = uVar8;
            uVar8 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar14[2] = uVar8;
            iVar10 = *(int *)*param_2;
            *param_2 = (int *)*param_2 + 1;
            puVar14[3] = (int)((longlong)((longlong)iVar10 * (ulonglong)DAT_1467bdcac) / 1000);
            uVar8 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar14[4] = uVar8;
            uVar8 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar14[5] = uVar8;
            iVar10 = *(int *)*param_2;
            *param_2 = (int *)*param_2 + 1;
            puVar14[6] = (int)((longlong)((longlong)iVar10 * (ulonglong)DAT_1467bdcac) / 1000);
            bVar3 = *(byte *)*param_2;
            *param_2 = (byte *)*param_2 + 1;
            puVar14[7] = puVar14[7] & 0xfffffffe;
            puVar14[7] = puVar14[7] | bVar3 & 1;
            bVar3 = *(byte *)*param_2;
            *param_2 = (byte *)*param_2 + 1;
            puVar14[7] = puVar14[7] & 0xfffffffd;
            puVar14[7] = puVar14[7] | (bVar3 & 1) * 2;
          }
          *(uint *)(plVar16 + 0xb) = local_38;
          local_38 = local_38 + 1;
        } while (local_38 < uVar6);
      }
    }
    uVar11 = 1;
  }
  return uVar11;
}



// FUNCTION 1431da270 FUN_1431da270 body=109 status=ok
// SIG undefined FUN_1431da270(void)

void FUN_1431da270(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = (void *)((ulonglong)*(uint *)(param_1 + 1) * 0x60 + (longlong)pvVar2);
    if (pvVar2 != pvVar1) {
      do {
        AkMusicTransitionRule::~AkMusicTransitionRule(pvVar2);
        pvVar2 = (void *)((longlong)pvVar2 + 0x60);
      } while (pvVar2 != pvVar1);
      pvVar2 = (void *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1431da2e0 TermPanicTransitionRule body=98 status=ok
// SIG undefined TermPanicTransitionRule(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkMusicTransAware::TermPanicTransitionRule(void)

{
  if (DAT_146b52150 != (void *)0x0) {
    DAT_146b52158 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b52150);
    DAT_146b52150 = (void *)0x0;
    _DAT_146b5215c = 0;
  }
  if (DAT_146b52160 != (void *)0x0) {
    DAT_146b52168 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b52160);
    DAT_146b52160 = (void *)0x0;
    _DAT_146b5216c = 0;
  }
  return;
}



// FUNCTION 1431da350 FUN_1431da350 body=94 status=ok
// SIG undefined FUN_1431da350(void)

void FUN_1431da350(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x100) != 0) {
    do {
      puVar1 = *(undefined4 **)(uVar3 * 0x60 + 0x50 + *(longlong *)(param_1 + 0xf8));
      if (puVar1 != (undefined4 *)0x0) {
        FUN_143179790(*puVar1,0);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x100));
  }
  FUN_1431defd0(param_1);
  return;
}



// FUNCTION 1431da3b0 CAkSegmentInfoRepository body=37 status=ok
// SIG undefined CAkSegmentInfoRepository(void)

undefined8 * CAkSegmentInfoRepository::CAkSegmentInfoRepository(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return param_1;
}



// FUNCTION 1431da3e0 FUN_1431da3e0 body=11 status=ok
// SIG undefined FUN_1431da3e0(void)

void FUN_1431da3e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431da3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1431da3f0 FUN_1431da3f0 body=403 status=ok
// SIG undefined FUN_1431da3f0(void)

undefined8 FUN_1431da3f0(longlong *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  int *piVar10;
  undefined8 uVar11;
  int *piVar12;
  ulonglong uVar13;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar6 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  piVar12 = piVar6 + (ulonglong)uVar4 * 0xe;
  for (; (piVar6 != piVar12 && (*piVar6 != param_2)); piVar6 = piVar6 + 0xe) {
  }
  piVar10 = piVar6 + 2;
  if (piVar6 == piVar12) {
    piVar10 = (int *)0x0;
  }
  if (piVar10 == (int *)0x0) {
    if (uVar4 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_1431da4f1:
      piVar10 = (int *)((ulonglong)*(uint *)(param_1 + 1) * 0x38 + *param_1);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
LAB_1431da511:
      if (piVar10 != (int *)0x0) {
        *piVar10 = param_2;
        piVar10 = piVar10 + 2;
        goto LAB_1431da51d;
      }
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
      pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x38);
      if (pvVar7 != (void *)0x0) {
        pvVar9 = (void *)*param_1;
        if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar7)) {
          uVar13 = (ulonglong)*(uint *)(param_1 + 1);
          if (uVar13 != 0) {
            lVar8 = 0;
            do {
              lVar5 = *param_1;
              uVar11 = ((undefined8 *)(lVar8 + lVar5))[1];
              *(undefined8 *)(lVar8 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + lVar5);
              ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar11;
              puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar5);
              uVar11 = puVar2[1];
              puVar3 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
              *puVar3 = *puVar2;
              puVar3[1] = uVar11;
              puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar5);
              uVar11 = puVar2[1];
              puVar3 = (undefined8 *)(lVar8 + 0x20 + (longlong)pvVar7);
              *puVar3 = *puVar2;
              puVar3[1] = uVar11;
              *(undefined8 *)(lVar8 + 0x30 + (longlong)pvVar7) =
                   *(undefined8 *)(lVar8 + 0x30 + lVar5);
              uVar13 = uVar13 - 1;
              lVar8 = lVar8 + 0x38;
            } while (uVar13 != 0);
            pvVar9 = (void *)*param_1;
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
        }
        *param_1 = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        if (uVar4 < uVar1) goto LAB_1431da4f1;
        piVar10 = (int *)0x0;
        goto LAB_1431da511;
      }
LAB_1431da51d:
      if (piVar10 != (int *)0x0) goto LAB_1431da522;
    }
    uVar11 = 2;
  }
  else {
LAB_1431da522:
    piVar10[0] = 0;
    piVar10[1] = 0;
    piVar10[2] = 0;
    piVar10[3] = 0;
    piVar10[4] = 0;
    piVar10[5] = 0;
    piVar10[6] = 0;
    piVar10[7] = 0;
    piVar10[8] = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)(piVar10 + 10));
    uVar11 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return uVar11;
}



// FUNCTION 1431da590 GetSegmentInfo body=217 status=ok
// SIG undefined GetSegmentInfo(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
CAkSegmentInfoRepository::GetSegmentInfo(undefined8 *param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  LARGE_INTEGER local_res8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar4 = (int *)*param_1;
  piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0xe;
  for (; (piVar4 != piVar5 && (*piVar4 != param_2)); piVar4 = piVar4 + 0xe) {
  }
  piVar7 = piVar4 + 2;
  if (piVar4 == piVar5) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 == (int *)0x0) {
    uVar6 = 2;
  }
  else {
    iVar1 = piVar7[1];
    iVar2 = piVar7[2];
    iVar3 = piVar7[3];
    *param_3 = *piVar7;
    param_3[1] = iVar1;
    param_3[2] = iVar2;
    param_3[3] = iVar3;
    iVar1 = piVar7[5];
    iVar2 = piVar7[6];
    iVar3 = piVar7[7];
    param_3[4] = piVar7[4];
    param_3[5] = iVar1;
    param_3[6] = iVar2;
    param_3[7] = iVar3;
    param_3[8] = piVar7[8];
    if ((param_4 != '\0') && (((0 < param_3[2] || (0 < param_3[1])) || (0 < param_3[3])))) {
      QueryPerformanceCounter(&local_res8);
      *param_3 = *param_3 +
                 (int)((float)(local_res8.QuadPart - *(longlong *)(piVar7 + 10)) / _DAT_146b51f08);
    }
    uVar6 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return uVar6;
}



// FUNCTION 1431da670 RemoveEntry body=175 status=ok
// SIG undefined RemoveEntry(void)

void CAkSegmentInfoRepository::RemoveEntry(undefined8 *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar6 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar5 = piVar6 + (ulonglong)uVar3 * 0xe;
  if (piVar6 != piVar5) {
    do {
      if (*piVar6 == param_2) break;
      piVar6 = piVar6 + 0xe;
    } while (piVar6 != piVar5);
    if (piVar6 != piVar5) {
      if (piVar6 < piVar5 + -0xe) {
        uVar2 = (longlong)(piVar5 + -0xe) + (-1 - (longlong)piVar6);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar2;
        lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
        piVar5 = piVar6 + 0xe;
        for (uVar2 = (((uVar2 - lVar4 >> 1) + lVar4 >> 5) + 1) * 0x38 >> 3; uVar2 != 0;
            uVar2 = uVar2 - 1) {
          *(undefined8 *)piVar6 = *(undefined8 *)piVar5;
          piVar5 = piVar5 + 2;
          piVar6 = piVar6 + 2;
        }
        uVar3 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar3 - 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1431da720 UpdateSegmentInfo body=150 status=ok
// SIG undefined UpdateSegmentInfo(void)

void CAkSegmentInfoRepository::UpdateSegmentInfo(undefined8 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar4 = (int *)*param_1;
  piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0xe;
  for (; (piVar4 != piVar5 && (*piVar4 != param_2)); piVar4 = piVar4 + 0xe) {
  }
  piVar6 = piVar4 + 2;
  if (piVar4 == piVar5) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 != (int *)0x0) {
    iVar1 = param_3[1];
    iVar2 = param_3[2];
    iVar3 = param_3[3];
    *piVar6 = *param_3;
    piVar6[1] = iVar1;
    piVar6[2] = iVar2;
    piVar6[3] = iVar3;
    iVar1 = param_3[5];
    iVar2 = param_3[6];
    iVar3 = param_3[7];
    piVar6[4] = param_3[4];
    piVar6[5] = iVar1;
    piVar6[6] = iVar2;
    piVar6[7] = iVar3;
    piVar6[8] = param_3[8];
    QueryPerformanceCounter((LARGE_INTEGER *)(piVar6 + 10));
  }
                    /* WARNING: Could not recover jumptable at 0x0001431da7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1431da7c0 CAkChildCtx body=18 status=ok
// SIG undefined CAkChildCtx(void)

undefined8 * CAkChildCtx::CAkChildCtx(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = param_2;
  *param_1 = &PTR__purecall_145ad0748;
  return param_1;
}



// FUNCTION 1431da7e0 ~CAkChildCtx body=11 status=ok
// SIG undefined ~CAkChildCtx(void)

void CAkChildCtx::~CAkChildCtx(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_145ad0748;
  return;
}



// FUNCTION 1431da7f0 FUN_1431da7f0 body=43 status=ok
// SIG undefined FUN_1431da7f0(void)

undefined8 * FUN_1431da7f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_145ad0748;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}


