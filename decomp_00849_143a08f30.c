// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a08f30 FUN_143a08f30 body=1132 status=ok
// SIG undefined FUN_143a08f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a08f30(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  byte bVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  uint local_94;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  if (param_2 != param_3) {
    local_80 = 0xfffffffffffffffe;
    local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
    uVar9 = 0;
    local_94 = 0;
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_90);
    bVar17 = *(longlong *)(lVar3 + 8) != param_1;
    if (bVar17) {
      uVar4 = FUN_1439eeb00(local_78,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x24a);
      local_94 = 1;
      uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      plVar5 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_90);
      uVar6 = *(undefined8 *)(*plVar5 + 8);
      uVar4 = FUN_1439eef00(uVar4,"CHECK failed: (message1->GetReflection()) == (this): ");
      uVar4 = FUN_1439eef00(uVar4,"First argument to Swap() (of type \"");
      uVar6 = FUN_1439eecf0(uVar4,uVar6);
      uVar6 = FUN_1439eef00(uVar6,
                            "\") is not compatible with this reflection object (which is for type \""
                           );
      uVar7 = FUN_1439eecf0(uVar6,uVar7);
      uVar7 = FUN_1439eef00(uVar7,
                            "\").  Note that the exact same class is required; not just the same descriptor."
                           );
      FUN_1439eec50(local_98,uVar7);
    }
    uVar16 = (uint)bVar17;
    if (bVar17) {
      uVar16 = 0;
      DsDevice::~DsDevice(local_78);
    }
    lVar3 = (**(code **)(*param_3 + 0xb8))(param_3,local_90);
    if (*(longlong *)(lVar3 + 8) != param_1) {
      uVar4 = FUN_1439eeb00(local_78,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x251);
      uVar16 = uVar16 | 2;
      uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      local_94 = uVar16;
      plVar5 = (longlong *)(**(code **)(*param_3 + 0xb8))(param_3,local_90);
      uVar6 = *(undefined8 *)(*plVar5 + 8);
      uVar4 = FUN_1439eef00(uVar4,"CHECK failed: (message2->GetReflection()) == (this): ");
      uVar4 = FUN_1439eef00(uVar4,"Second argument to Swap() (of type \"");
      uVar6 = FUN_1439eecf0(uVar4,uVar6);
      uVar6 = FUN_1439eef00(uVar6,
                            "\") is not compatible with this reflection object (which is for type \""
                           );
      uVar7 = FUN_1439eecf0(uVar6,uVar7);
      uVar7 = FUN_1439eef00(uVar7,
                            "\").  Note that the exact same class is required; not just the same descriptor."
                           );
      FUN_1439eec50(local_98,uVar7);
    }
    if ((uVar16 & 2) != 0) {
      DsDevice::~DsDevice(local_78);
    }
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x2c);
    bVar15 = *(byte *)((longlong)param_2 + uVar8) & 1;
    uVar10 = *(ulonglong *)((longlong)param_2 + uVar8);
    if (bVar15 == 0) {
      uVar12 = uVar10 & 0xfffffffffffffffe;
    }
    else {
      uVar12 = *(ulonglong *)((uVar10 & 0xfffffffffffffffe) + 0x18);
    }
    if ((*(byte *)((longlong)param_3 + uVar8) & 1) == 0) {
      uVar8 = *(ulonglong *)((longlong)param_3 + uVar8) & 0xfffffffffffffffe;
    }
    else {
      uVar8 = *(ulonglong *)
               ((*(ulonglong *)((longlong)param_3 + uVar8) & 0xfffffffffffffffe) + 0x18);
    }
    if (uVar12 == uVar8) {
      iVar2 = 0;
      if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
        puVar13 = (undefined4 *)((longlong)param_3 + (ulonglong)*(uint *)(param_1 + 0x28));
        lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x68);
        if (0 < lVar3) {
          plVar5 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + 0x58);
          uVar10 = uVar9;
          do {
            if ((*(int *)((longlong)plVar5 + -0x1c) != 3) && (*plVar5 == 0)) {
              uVar10 = (ulonglong)((int)uVar10 + 1);
            }
            iVar2 = (int)uVar10;
            plVar5 = plVar5 + 0x13;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        iVar2 = (int)(iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
        lVar3 = (longlong)iVar2;
        if (0 < iVar2) {
          do {
            uVar1 = *(undefined4 *)((longlong)puVar13 + ((longlong)param_2 - (longlong)param_3));
            *(undefined4 *)((longlong)puVar13 + ((longlong)param_2 - (longlong)param_3)) = *puVar13;
            *puVar13 = uVar1;
            puVar13 = puVar13 + 1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
      }
      uVar10 = uVar9;
      uVar8 = uVar9;
      if (-1 < *(int *)(param_1 + 0x50)) {
        do {
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + uVar10 + 0x58) == 0)
          {
            FUN_143a09650(param_1,param_2,param_3);
          }
          uVar16 = (int)uVar8 + 1;
          uVar10 = uVar10 + 0x98;
          uVar8 = (ulonglong)uVar16;
        } while ((int)uVar16 <= *(int *)(param_1 + 0x50));
      }
      uVar16 = *(uint *)(*(longlong *)(param_1 + 8) + 0x6c);
      if (0 < (int)uVar16) {
        uVar10 = (ulonglong)uVar16;
        do {
          FUN_143a0a290(param_1,param_2,param_3,
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x30) + uVar9);
          uVar9 = uVar9 + 0x30;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar16 = *(uint *)(param_1 + 0x30);
      if (uVar16 != 0xffffffff) {
        FUN_143a57b90((ulonglong)uVar16 + (longlong)param_2,(ulonglong)uVar16 + (longlong)param_3);
      }
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x2c);
      if ((*(ulonglong *)((longlong)param_3 + uVar9) & 1) == 0) {
        puVar11 = (undefined8 *)FUN_141515d60();
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x2c);
      }
      else {
        puVar11 = (undefined8 *)(*(ulonglong *)((longlong)param_3 + uVar9) & 0xfffffffffffffffe);
      }
      if ((*(ulonglong *)(uVar9 + (longlong)param_2) & 1) == 0) {
        puVar14 = (undefined8 *)FUN_141515d60();
      }
      else {
        puVar14 = (undefined8 *)(*(ulonglong *)(uVar9 + (longlong)param_2) & 0xfffffffffffffffe);
      }
      if (puVar14 != puVar11) {
        uVar7 = *puVar14;
        *puVar14 = *puVar11;
        *puVar11 = uVar7;
        uVar7 = puVar14[1];
        puVar14[1] = puVar11[1];
        puVar11[1] = uVar7;
        uVar7 = puVar14[2];
        puVar14[2] = puVar11[2];
        puVar11[2] = uVar7;
      }
    }
    else {
      uVar10 = uVar10 & 0xfffffffffffffffe;
      if (bVar15 != 0) {
        uVar10 = *(ulonglong *)(uVar10 + 0x18);
      }
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar10);
      (**(code **)(*plVar5 + 0x90))(plVar5,param_3);
      (**(code **)(*param_3 + 0x88))(param_3,param_2);
      FUN_143a08f30(param_1,param_2,plVar5);
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x2c);
      if ((*(byte *)(uVar9 + (longlong)param_2) & 1) == 0) {
        uVar9 = *(ulonglong *)(uVar9 + (longlong)param_2) & 0xfffffffffffffffe;
      }
      else {
        uVar9 = *(ulonglong *)
                 ((*(ulonglong *)(uVar9 + (longlong)param_2) & 0xfffffffffffffffe) + 0x18);
      }
      if (uVar9 == 0) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 143a093a0 FUN_143a093a0 body=633 status=ok
// SIG undefined FUN_143a093a0(void)

void FUN_143a093a0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_3 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_3,&DAT_145cbcf54,
                  "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_3,&DAT_145cbcf54,
                  "Field is singular; the method requires a repeated field.");
  }
  if (*(char *)(param_3 + 0x42) == '\0') {
    iVar5 = FUN_143a009a0(param_3);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar5 * 4)) {
    case 1:
    case 8:
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f2970((ulonglong)uVar6 + param_2,param_4,param_5);
      return;
    case 2:
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f29d0((ulonglong)uVar6 + param_2,param_4,param_5);
      return;
    case 3:
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f2970((ulonglong)uVar6 + param_2,param_4,param_5);
      return;
    case 4:
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f29d0((ulonglong)uVar6 + param_2,param_4,param_5);
      return;
    case 5:
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f29b0((ulonglong)uVar6 + param_2,param_4,param_5);
      return;
    case 6:
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f2990((ulonglong)uVar6 + param_2,param_4,param_5);
      return;
    case 7:
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      FUN_1439f29f0((ulonglong)uVar6 + param_2,param_4,param_5);
      return;
    case 9:
    case 10:
      cVar4 = FUN_143a061d0(param_3);
      lVar1 = (longlong)param_4 * 8;
      lVar2 = (longlong)param_5 * 8;
      uVar6 = FUN_143a046b0(param_1 + 0x10,param_3);
      if (cVar4 != '\0') {
        lVar7 = FUN_143a12320((ulonglong)uVar6 + param_2);
        lVar7 = *(longlong *)(lVar7 + 0x10);
        uVar3 = *(undefined8 *)(lVar1 + 8 + lVar7);
        *(undefined8 *)(lVar1 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        *(undefined8 *)(lVar2 + 8 + lVar7) = uVar3;
        return;
      }
      lVar7 = *(longlong *)((ulonglong)uVar6 + param_2 + 0x10);
      uVar3 = *(undefined8 *)(lVar7 + 8 + lVar1);
      *(undefined8 *)(lVar7 + lVar1 + 8) = *(undefined8 *)(lVar7 + lVar2 + 8);
      *(undefined8 *)(lVar7 + lVar2 + 8) = uVar3;
    }
    return;
  }
  FUN_143a57c50((ulonglong)*(uint *)(param_1 + 0x30) + param_2,*(undefined4 *)(param_3 + 0x44),
                param_4,param_5);
  return;
}



// FUNCTION 143a09650 FUN_143a09650 body=1893 status=ok
// SIG undefined FUN_143a09650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a09650(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *******pppppppuVar18;
  ulonglong uVar19;
  undefined8 *******pppppppuVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 ******local_88 [2];
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_50;
  
  local_90 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_4 + 0x3c) != 3) {
    iVar10 = FUN_143a009a0(param_4);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar10 * 4)) {
    case 1:
    case 3:
    case 8:
      uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar2 = *(undefined4 *)((ulonglong)uVar12 + (longlong)param_2);
      *(undefined4 *)((ulonglong)uVar12 + (longlong)param_2) =
           *(undefined4 *)((ulonglong)uVar11 + (longlong)param_3);
      *(undefined4 *)((ulonglong)uVar11 + (longlong)param_3) = uVar2;
      return;
    case 2:
    case 4:
      break;
    case 5:
      uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar13 = *(undefined8 *)((ulonglong)uVar12 + (longlong)param_2);
      *(undefined8 *)((ulonglong)uVar12 + (longlong)param_2) =
           *(undefined8 *)((ulonglong)uVar11 + (longlong)param_3);
      *(undefined8 *)((ulonglong)uVar11 + (longlong)param_3) = uVar13;
      return;
    case 6:
      uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar2 = *(undefined4 *)((ulonglong)uVar12 + (longlong)param_2);
      *(undefined4 *)((ulonglong)uVar12 + (longlong)param_2) =
           *(undefined4 *)((ulonglong)uVar11 + (longlong)param_3);
      *(undefined4 *)((ulonglong)uVar11 + (longlong)param_3) = uVar2;
      return;
    case 7:
      uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
      uVar1 = *(undefined1 *)((ulonglong)uVar12 + (longlong)param_2);
      *(undefined1 *)((ulonglong)uVar12 + (longlong)param_2) =
           *(undefined1 *)((ulonglong)uVar11 + (longlong)param_3);
      *(undefined1 *)((ulonglong)uVar11 + (longlong)param_3) = uVar1;
      return;
    case 9:
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x2c);
      if ((*(byte *)(uVar17 + (longlong)param_2) & 1) == 0) {
        uVar19 = *(ulonglong *)(uVar17 + (longlong)param_2) & 0xfffffffffffffffe;
      }
      else {
        uVar19 = *(ulonglong *)
                  ((*(ulonglong *)(uVar17 + (longlong)param_2) & 0xfffffffffffffffe) + 0x18);
      }
      if ((*(byte *)(uVar17 + (longlong)param_3) & 1) == 0) {
        uVar17 = *(ulonglong *)(uVar17 + (longlong)param_3) & 0xfffffffffffffffe;
      }
      else {
        uVar17 = *(ulonglong *)
                  ((*(ulonglong *)(uVar17 + (longlong)param_3) & 0xfffffffffffffffe) + 0x18);
      }
      cVar9 = FUN_143a060e0(param_1,param_4);
      param_1 = param_1 + 0x10;
      if (cVar9 != '\0') {
        uVar11 = FUN_143a046b0(param_1,param_4);
        puVar22 = (undefined8 *)((ulonglong)uVar11 + (longlong)param_2);
        uVar11 = FUN_143a046b0(param_1,param_4);
        puVar16 = (undefined8 *)((ulonglong)uVar11 + (longlong)param_3);
        uVar13 = *puVar22;
        uVar5 = puVar22[1];
        uVar6 = puVar22[2];
        uVar7 = puVar22[3];
        uVar8 = puVar16[1];
        *puVar22 = *puVar16;
        puVar22[1] = uVar8;
        uVar8 = puVar16[3];
        puVar22[2] = puVar16[2];
        puVar22[3] = uVar8;
        *puVar16 = uVar13;
        puVar16[1] = uVar5;
        puVar16[2] = uVar6;
        puVar16[3] = uVar7;
        return;
      }
      uVar11 = FUN_143a046b0(param_1,param_4);
      param_2 = (longlong *)((ulonglong)uVar11 + (longlong)param_2);
      uVar11 = FUN_143a046b0(param_1,param_4);
      param_3 = (longlong *)((ulonglong)uVar11 + (longlong)param_3);
      plVar14 = (longlong *)FUN_143a04610(param_1,param_4);
      pppppppuVar18 = (undefined8 *******)*plVar14;
      if (uVar19 == uVar17) {
        lVar15 = *param_2;
        *param_2 = *param_3;
        *param_3 = lVar15;
        return;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_88,*param_2);
      pppppppuVar3 = (undefined8 *******)*param_3;
      pppppppuVar4 = (undefined8 *******)*param_2;
      if (pppppppuVar4 == pppppppuVar18) {
        FUN_141505a20(param_2,uVar19);
      }
      else if (pppppppuVar4 != pppppppuVar3) {
        pppppppuVar20 = pppppppuVar3;
        if ((undefined8 ******)0xf < pppppppuVar3[3]) {
          pppppppuVar20 = (undefined8 *******)*pppppppuVar3;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (pppppppuVar4,pppppppuVar20,pppppppuVar3[2]);
      }
      pppppppuVar3 = (undefined8 *******)*param_3;
      if (pppppppuVar3 == pppppppuVar18) {
        FUN_141505a20(param_3,uVar17,local_88);
      }
      else if (pppppppuVar3 != local_88) {
        pppppppuVar18 = local_88;
        if (0xf < local_70) {
          pppppppuVar18 = (undefined8 *******)local_88[0];
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (pppppppuVar3,pppppppuVar18,local_78);
      }
      if (local_70 < 0x10) {
        return;
      }
      uVar17 = local_70 + 1;
      pppppppuVar18 = (undefined8 *******)local_88[0];
      if (0xfff < uVar17) {
        uVar17 = local_70 + 0x28;
        pppppppuVar18 = (undefined8 *******)local_88[0][-1];
        if (0x1f < (ulonglong)((longlong)local_88[0] + (-8 - (longlong)pppppppuVar18))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(pppppppuVar18,uVar17);
      return;
    case 10:
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x2c);
      if ((*(byte *)(uVar17 + (longlong)param_2) & 1) == 0) {
        uVar19 = *(ulonglong *)(uVar17 + (longlong)param_2) & 0xfffffffffffffffe;
      }
      else {
        uVar19 = *(ulonglong *)
                  ((*(ulonglong *)(uVar17 + (longlong)param_2) & 0xfffffffffffffffe) + 0x18);
      }
      if ((*(byte *)(uVar17 + (longlong)param_3) & 1) == 0) {
        uVar17 = *(ulonglong *)(uVar17 + (longlong)param_3) & 0xfffffffffffffffe;
      }
      else {
        uVar17 = *(ulonglong *)
                  ((*(ulonglong *)(uVar17 + (longlong)param_3) & 0xfffffffffffffffe) + 0x18);
      }
      if (uVar19 != uVar17) {
        uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
        plVar23 = (longlong *)((ulonglong)uVar11 + (longlong)param_2);
        uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
        plVar21 = (longlong *)((ulonglong)uVar11 + (longlong)param_3);
        plVar14 = (longlong *)*plVar23;
        if (plVar14 != (longlong *)0x0) {
          if (*plVar21 != 0) {
            lVar15 = (**(code **)(*plVar14 + 0xb8))(plVar14,local_88);
            (**(code **)(**(longlong **)(lVar15 + 8) + 0x60))
                      (*(longlong **)(lVar15 + 8),*plVar23,*plVar21);
            return;
          }
          lVar15 = *plVar14;
          uVar13 = (**(code **)(*param_3 + 0x20))(param_3);
          plVar14 = (longlong *)(**(code **)(lVar15 + 0x10))(*plVar23,uVar13);
          *plVar21 = (longlong)plVar14;
          (**(code **)(*plVar14 + 0x88))(plVar14,*plVar23);
          FUN_143a03870(param_1,param_2,param_4);
          return;
        }
        if ((longlong *)*plVar21 == (longlong *)0x0) {
          return;
        }
        lVar15 = *(longlong *)*plVar21;
        uVar13 = (**(code **)(*param_2 + 0x20))(param_2);
        plVar14 = (longlong *)(**(code **)(lVar15 + 0x10))(*plVar21,uVar13);
        *plVar23 = (longlong)plVar14;
        (**(code **)(*plVar14 + 0x88))(plVar14,*plVar21);
        FUN_143a03870(param_1,param_3,param_4);
        return;
      }
      break;
    default:
      uVar13 = FUN_1439eeb00(local_88,3,
                             "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                             ,0x1c7);
      iVar10 = FUN_143a009a0(param_4);
      uVar2 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar10 * 4);
      uVar13 = FUN_1439eef00(uVar13,"Unimplemented type: ");
      uVar13 = FUN_1439eed20(uVar13,uVar2);
      FUN_1439eec50(local_98,uVar13);
      goto LAB_143a09d8e;
    }
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar13 = *(undefined8 *)((ulonglong)uVar12 + (longlong)param_2);
    *(undefined8 *)((ulonglong)uVar12 + (longlong)param_2) =
         *(undefined8 *)((ulonglong)uVar11 + (longlong)param_3);
    *(undefined8 *)((ulonglong)uVar11 + (longlong)param_3) = uVar13;
    return;
  }
  iVar10 = FUN_143a009a0(param_4);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar10 * 4)) {
  case 1:
  case 8:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    FUN_1439f24e0((ulonglong)uVar12 + (longlong)param_2,(longlong)param_3 + (ulonglong)uVar11);
    break;
  case 2:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    FUN_1439f2650((ulonglong)uVar12 + (longlong)param_2,(longlong)param_3 + (ulonglong)uVar11);
    break;
  case 3:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    FUN_1439f24e0((ulonglong)uVar12 + (longlong)param_2,(longlong)param_3 + (ulonglong)uVar11);
    break;
  case 4:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    FUN_1439f2650((ulonglong)uVar12 + (longlong)param_2,(longlong)param_3 + (ulonglong)uVar11);
    break;
  case 5:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    FUN_1439f2650((ulonglong)uVar12 + (longlong)param_2,(longlong)param_3 + (ulonglong)uVar11);
    break;
  case 6:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    FUN_1439f24e0((ulonglong)uVar12 + (longlong)param_2,(longlong)param_3 + (ulonglong)uVar11);
    break;
  case 7:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar12 = FUN_143a046b0(param_1 + 0x10,param_4);
    FUN_1439f27c0((ulonglong)uVar12 + (longlong)param_2,(longlong)param_3 + (ulonglong)uVar11);
    break;
  case 9:
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    param_3 = (longlong *)((ulonglong)uVar11 + (longlong)param_3);
    uVar11 = FUN_143a046b0(param_1 + 0x10,param_4);
    param_2 = (longlong *)((ulonglong)uVar11 + (longlong)param_2);
    if (*param_3 != *param_2) {
      FUN_143a00ff0(param_2,param_3);
      return;
    }
    goto LAB_143a0989c;
  case 10:
    cVar9 = FUN_143a061d0(param_4);
    param_1 = param_1 + 0x10;
    if (cVar9 != '\0') {
      uVar11 = FUN_143a046b0(param_1,param_4);
      uVar12 = FUN_143a046b0(param_1,param_4);
      (**(code **)(*(longlong *)((ulonglong)uVar11 + (longlong)param_2) + 0x40))
                ((longlong *)((ulonglong)uVar11 + (longlong)param_2),
                 (ulonglong)uVar12 + (longlong)param_3);
      return;
    }
    uVar11 = FUN_143a046b0(param_1,param_4);
    param_3 = (longlong *)((ulonglong)uVar11 + (longlong)param_3);
    uVar11 = FUN_143a046b0(param_1,param_4);
    param_2 = (longlong *)((ulonglong)uVar11 + (longlong)param_2);
    if (*param_3 != *param_2) {
      FUN_1439fcc90(param_2,param_3);
      return;
    }
LAB_143a0989c:
    lVar15 = param_2[2];
    param_2[2] = param_3[2];
    param_3[2] = lVar15;
    lVar15 = param_2[1];
    *(int *)(param_2 + 1) = (int)param_3[1];
    *(int *)(param_3 + 1) = (int)lVar15;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar2;
    break;
  default:
    uVar13 = FUN_1439eeb00(local_88,3,
                           "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                           ,0x178);
    iVar10 = FUN_143a009a0(param_4);
    uVar2 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar10 * 4);
    uVar13 = FUN_1439eef00(uVar13,"Unimplemented type: ");
    uVar13 = FUN_1439eed20(uVar13,uVar2);
    FUN_1439eec50(local_98,uVar13);
LAB_143a09d8e:
    DsDevice::~DsDevice(local_88);
  }
  return;
}



// FUNCTION 143a09e10 FUN_143a09e10 body=1142 status=ok
// SIG undefined FUN_143a09e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a09e10(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_d8 [4];
  uint local_d4;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  longlong local_c0 [2];
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [56];
  ulonglong local_58;
  
  if (param_2 != param_3) {
    local_a8 = 0xfffffffffffffffe;
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    local_d4 = 0;
    local_b0 = param_4;
    lVar7 = (**(code **)(*param_2 + 0xb8))(param_2,local_c0);
    bVar20 = *(longlong *)(lVar7 + 8) != param_1;
    if (bVar20) {
      uVar8 = FUN_1439eeb00(local_90,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x294);
      local_d4 = 1;
      uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      plVar9 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_c0);
      uVar10 = *(undefined8 *)(*plVar9 + 8);
      uVar8 = FUN_1439eef00(uVar8,"CHECK failed: (message1->GetReflection()) == (this): ");
      uVar8 = FUN_1439eef00(uVar8,"First argument to SwapFields() (of type \"");
      uVar10 = FUN_1439eecf0(uVar8,uVar10);
      uVar10 = FUN_1439eef00(uVar10,
                             "\") is not compatible with this reflection object (which is for type \""
                            );
      uVar11 = FUN_1439eecf0(uVar10,uVar11);
      uVar11 = FUN_1439eef00(uVar11,
                             "\").  Note that the exact same class is required; not just the same descriptor."
                            );
      FUN_1439eec50(local_d8,uVar11);
    }
    uVar19 = (uint)bVar20;
    if (bVar20) {
      uVar19 = 0;
      DsDevice::~DsDevice(local_90);
    }
    lVar7 = (**(code **)(*param_3 + 0xb8))(param_3,local_c0);
    if (*(longlong *)(lVar7 + 8) != param_1) {
      uVar8 = FUN_1439eeb00(local_90,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x29b);
      uVar19 = uVar19 | 2;
      uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      local_d4 = uVar19;
      plVar9 = (longlong *)(**(code **)(*param_3 + 0xb8))(param_3,local_c0);
      uVar10 = *(undefined8 *)(*plVar9 + 8);
      uVar8 = FUN_1439eef00(uVar8,"CHECK failed: (message2->GetReflection()) == (this): ");
      uVar8 = FUN_1439eef00(uVar8,"Second argument to SwapFields() (of type \"");
      uVar10 = FUN_1439eecf0(uVar8,uVar10);
      uVar10 = FUN_1439eef00(uVar10,
                             "\") is not compatible with this reflection object (which is for type \""
                            );
      uVar11 = FUN_1439eecf0(uVar10,uVar11);
      uVar11 = FUN_1439eef00(uVar11,
                             "\").  Note that the exact same class is required; not just the same descriptor."
                            );
      FUN_1439eec50(local_d8,uVar11);
    }
    if ((uVar19 & 2) != 0) {
      DsDevice::~DsDevice(local_90);
    }
    local_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    puVar12 = (undefined8 *)FUN_143a0ab70(&local_d0);
    iVar15 = (int)(local_b0[1] - *local_b0 >> 3);
    lVar7 = (longlong)iVar15;
    local_d0 = puVar12;
    local_c0[0] = lVar7;
    if (0 < iVar15) {
      lVar18 = 0;
      do {
        lVar2 = *(longlong *)(*local_b0 + lVar18 * 8);
        if (*(char *)(lVar2 + 0x42) == '\0') {
          lVar3 = *(longlong *)(lVar2 + 0x58);
          if (lVar3 == 0) {
            if ((*(int *)(lVar2 + 0x3c) != 3) && (*(int *)(param_1 + 0x28) != -1)) {
              cVar5 = FUN_143a05bd0(param_1,param_2,lVar2);
              cVar6 = FUN_143a05bd0(param_1,param_3,lVar2);
              if (cVar6 == '\0') {
                FUN_143a037f0(param_1,param_2,lVar2);
              }
              else {
                uVar19 = *(uint *)(param_1 + 0x28);
                if (uVar19 != 0xffffffff) {
                  if (*(char *)(lVar2 + 0x42) == '\0') {
                    lVar7 = lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x28);
                  }
                  else if (*(longlong *)(lVar2 + 0x60) == 0) {
                    lVar7 = lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x80);
                  }
                  else {
                    lVar7 = lVar2 - *(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x50);
                  }
                  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) +
                                   (longlong)(int)(lVar7 / 0x98) * 4);
                  uVar17 = (ulonglong)(uVar1 >> 5);
                  *(uint *)((longlong)param_2 + uVar17 * 4 + (ulonglong)uVar19) =
                       *(uint *)((longlong)param_2 + uVar17 * 4 + (ulonglong)uVar19) |
                       1 << (uVar1 & 0x1f);
                }
              }
              if (cVar5 == '\0') {
                FUN_143a037f0(param_1,param_3,lVar2);
                lVar7 = local_c0[0];
              }
              else {
                FUN_143a076c0();
                lVar7 = local_c0[0];
              }
            }
            FUN_143a09650(param_1,param_2,param_3,lVar2);
            puVar12 = local_d0;
          }
          else {
            local_d4 = (uint)((lVar3 - *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30)) / 0x30);
            puVar13 = (undefined8 *)puVar12[1];
            puVar16 = puVar12;
            if (*(char *)((longlong)puVar12[1] + 0x19) == '\0') {
              do {
                if (*(int *)((longlong)puVar13 + 0x1c) < (int)local_d4) {
                  puVar14 = (undefined8 *)puVar13[2];
                }
                else {
                  puVar14 = (undefined8 *)*puVar13;
                  puVar16 = puVar13;
                }
                puVar13 = puVar14;
              } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
              if ((puVar16 != puVar12) && (*(int *)((longlong)puVar16 + 0x1c) <= (int)local_d4))
              goto LAB_143a0a1e9;
            }
            local_e8 = local_d8[0];
            FUN_143a01870(&local_d0,local_a0,0,&local_d4);
            FUN_143a0a290(param_1,param_2,param_3,*(undefined8 *)(lVar2 + 0x58));
            puVar12 = local_d0;
          }
        }
        else {
          FUN_143a57df0((ulonglong)*(uint *)(param_1 + 0x30) + (longlong)param_2,
                        (ulonglong)*(uint *)(param_1 + 0x30) + (longlong)param_3,
                        *(undefined4 *)(lVar2 + 0x44));
          puVar12 = local_d0;
        }
LAB_143a0a1e9:
        lVar18 = lVar18 + 1;
      } while (lVar18 < lVar7);
    }
    cVar5 = *(char *)((longlong)puVar12[1] + 0x19);
    plVar9 = (longlong *)puVar12[1];
    puVar13 = puVar12;
    while (cVar5 == '\0') {
      std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>_>::_Erase
                (&local_d0,plVar9[2]);
      plVar4 = (longlong *)*plVar9;
      FMemory::operator_delete(plVar9,0x20);
      plVar9 = plVar4;
      puVar13 = local_d0;
      cVar5 = *(char *)((longlong)plVar4 + 0x19);
    }
    puVar13[1] = puVar12;
    *local_d0 = puVar12;
    local_d0[2] = puVar12;
    uStack_c8 = 0;
    FMemory::operator_delete(local_d0,0x20);
  }
  return;
}



// FUNCTION 143a0a290 FUN_143a0a290 body=1729 status=ok
// SIG undefined FUN_143a0a290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a0a290(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d7 [7];
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  longlong local_88 [3];
  ulonglong local_70;
  ulonglong local_50;
  
  local_b0 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar12 = (ulonglong)
           (uint)(*(int *)(param_1 + 0x34) +
                 (int)((param_4 - *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30)) / 0x30) * 4);
  local_c0 = *(int *)(param_2 + uVar12);
  iVar3 = *(int *)(param_3 + uVar12);
  uVar4 = 0;
  local_b8 = 0;
  local_98 = 0;
  uStack_90 = 0xf;
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_d0 = param_4;
  if (local_c0 != 0) {
    uVar4 = FUN_143a3f1b0(*(undefined8 *)(param_1 + 8),local_c0);
    iVar2 = FUN_143a009a0(uVar4);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4)) {
    case 1:
    case 8:
      puVar5 = (undefined4 *)FUN_143a00ae0(param_1,param_2,uVar4);
      local_c8 = CONCAT44(local_c8._4_4_,*puVar5);
      break;
    case 2:
      puVar6 = (undefined8 *)FUN_143a00ae0(param_1,param_2,uVar4);
      local_c8 = *puVar6;
      break;
    case 3:
      puVar5 = (undefined4 *)FUN_143a00ae0(param_1,param_2,uVar4);
      local_c8 = CONCAT44(local_c8._4_4_,*puVar5);
      break;
    case 4:
      puVar6 = (undefined8 *)FUN_143a00ae0(param_1,param_2,uVar4);
      local_c8 = *puVar6;
      break;
    case 5:
      puVar6 = (undefined8 *)FUN_143a00ae0(param_1,param_2,uVar4);
      local_c8 = *puVar6;
      break;
    case 6:
      puVar5 = (undefined4 *)FUN_143a00ae0(param_1,param_2,uVar4);
      local_c8 = CONCAT44(local_c8._4_4_,*puVar5);
      break;
    case 7:
      puVar7 = (undefined1 *)FUN_143a00ae0(param_1,param_2,uVar4);
      local_d8 = *puVar7;
      break;
    case 9:
      puVar8 = (ulonglong *)FUN_143a05860(param_1,local_88,param_2,uVar4);
      if (&local_a8 != puVar8) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (&local_a8);
        local_a8 = *puVar8;
        uStack_a0 = puVar8[1];
        local_98 = puVar8[2];
        uStack_90 = puVar8[3];
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        *(undefined1 *)puVar8 = 0;
      }
      param_4 = local_d0;
      if (0xf < local_70) {
        uVar12 = local_70 + 1;
        lVar11 = local_88[0];
        if (0xfff < uVar12) {
          uVar12 = local_70 + 0x28;
          lVar11 = *(longlong *)(local_88[0] + -8);
          if (0x1f < (local_88[0] - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar11,uVar12);
        param_4 = local_d0;
      }
      break;
    case 10:
      local_b8 = FUN_143a06cd0(param_1,param_2,uVar4,0);
      break;
    default:
      uVar9 = FUN_1439eeb00(local_88,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x1fb);
      iVar2 = FUN_143a009a0(uVar4);
      uVar1 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4);
      uVar9 = FUN_1439eef00(uVar9,"Unimplemented type: ");
      uVar9 = FUN_1439eed20(uVar9,uVar1);
      FUN_1439eec50(&local_d8,uVar9);
      DsDevice::~DsDevice(local_88);
      param_4 = local_d0;
    }
  }
  if (iVar3 == 0) {
    FUN_143a03d30(param_1,param_2,param_4);
  }
  else {
    uVar9 = FUN_143a3f1b0(*(undefined8 *)(param_1 + 8),iVar3);
    iVar3 = FUN_143a009a0(uVar9);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4)) {
    case 1:
    case 8:
      uVar10 = FUN_143a00ae0(param_1,param_3,uVar9);
      FUN_143a00d20(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      break;
    case 2:
      uVar10 = FUN_143a00ae0(param_1,param_3,uVar9);
      FUN_143a00e10(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      break;
    case 3:
      uVar10 = FUN_143a00ae0(param_1,param_3,uVar9);
      FUN_143a00d20(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      break;
    case 4:
      uVar10 = FUN_143a00ae0(param_1,param_3,uVar9);
      FUN_143a00e10(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      break;
    case 5:
      uVar10 = FUN_143a00ae0(param_1,param_3,uVar9);
      FUN_143a00e10(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      break;
    case 6:
      uVar10 = FUN_143a00ae0(param_1,param_3,uVar9);
      FUN_143a00d20(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      break;
    case 7:
      uVar10 = FUN_143a00ae0(param_1,param_3,uVar9);
      FUN_143a00f00(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      break;
    case 9:
      uVar10 = FUN_143a05860(param_1,local_88,param_3,uVar9);
      FUN_143a08790(param_1,param_2,uVar9,uVar10);
      param_4 = local_d0;
      if (0xf < local_70) {
        uVar12 = local_70 + 1;
        lVar11 = local_88[0];
        if (0xfff < uVar12) {
          uVar12 = local_70 + 0x28;
          lVar11 = *(longlong *)(local_88[0] + -8);
          if (0x1f < (local_88[0] - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar11,uVar12);
        param_4 = local_d0;
      }
      break;
    case 10:
      uVar10 = FUN_143a06cd0(param_1,param_3,uVar9,0);
      FUN_143a075f0(param_1,param_2,uVar10,uVar9);
      param_4 = local_d0;
      break;
    default:
      uVar10 = FUN_1439eeb00(local_88,3,
                             "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                             ,0x21d);
      iVar3 = FUN_143a009a0(uVar9);
      uVar1 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4);
      uVar9 = FUN_1439eef00(uVar10,"Unimplemented type: ");
      uVar9 = FUN_1439eed20(uVar9,uVar1);
      FUN_1439eec50(local_d7,uVar9);
      DsDevice::~DsDevice(local_88);
      param_4 = local_d0;
    }
  }
  if (local_c0 == 0) {
    FUN_143a03d30(param_1,param_3,param_4);
  }
  else {
    iVar3 = FUN_143a009a0(uVar4);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4)) {
    case 1:
    case 8:
      FUN_143a00d20(param_1,param_3,uVar4,&local_c8);
      break;
    case 2:
      FUN_143a00e10(param_1,param_3,uVar4,&local_c8);
      break;
    case 3:
      FUN_143a00d20(param_1,param_3,uVar4,&local_c8);
      break;
    case 4:
      FUN_143a00e10(param_1,param_3,uVar4,&local_c8);
      break;
    case 5:
      FUN_143a00e10(param_1,param_3,uVar4,&local_c8);
      break;
    case 6:
      FUN_143a00d20(param_1,param_3,uVar4,&local_c8);
      break;
    case 7:
      FUN_143a00f00(param_1,param_3,uVar4,&local_d8);
      break;
    case 9:
      FUN_143a08790(param_1,param_3,uVar4,&local_a8);
      break;
    case 10:
      FUN_143a075f0(param_1,param_3,local_b8,uVar4);
      break;
    default:
      uVar9 = FUN_1439eeb00(local_88,3,
                            "c:\\dev\\protobuf\\src\\google\\protobuf\\generated_message_reflection.cc"
                            ,0x23d);
      iVar3 = FUN_143a009a0(uVar4);
      uVar1 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4);
      uVar4 = FUN_1439eef00(uVar9,"Unimplemented type: ");
      uVar4 = FUN_1439eed20(uVar4,uVar1);
      FUN_1439eec50(local_d7,uVar4);
      DsDevice::~DsDevice(local_88);
    }
  }
  if (0xf < uStack_90) {
    uVar13 = uStack_90 + 1;
    uVar12 = local_a8;
    if (0xfff < uVar13) {
      uVar13 = uStack_90 + 0x28;
      uVar12 = *(ulonglong *)(local_a8 - 8);
      if (0x1f < (local_a8 - uVar12) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar12,uVar13);
  }
  return;
}



// FUNCTION 143a0a9d0 FUN_143a0a9d0 body=408 status=ok
// SIG undefined FUN_143a0a9d0(void)

void FUN_143a0a9d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_4 + 0x50) != *(longlong *)(param_1 + 8)) {
    FUN_143a073c0(*(longlong *)(param_1 + 8),param_4,"SetAllocatedMessage",
                  "Field does not match message type.");
  }
  if (*(int *)(param_4 + 0x3c) == 3) {
    FUN_143a073c0(*(undefined8 *)(param_1 + 8),param_4,"SetAllocatedMessage",
                  "Field is repeated; the method requires a singular field.");
  }
  iVar3 = FUN_143a009a0(param_4);
  if (*(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) != 10) {
    FUN_143a074b0(*(undefined8 *)(param_1 + 8),param_4,"SetAllocatedMessage",10);
  }
  if (*(char *)(param_4 + 0x42) != '\0') {
    uVar1 = *(undefined4 *)(param_4 + 0x44);
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar4 = FUN_143a009a0(param_4);
    FUN_143a57fc0((ulonglong)uVar5 + param_2,uVar1,uVar4,param_4,param_3);
    return;
  }
  if (*(longlong *)(param_4 + 0x58) == 0) {
    if (param_3 == 0) {
      FUN_143a037f0();
    }
    else {
      FUN_143a076c0(param_1,param_2,param_4);
    }
    uVar5 = FUN_143a046b0(param_1 + 0x10,param_4);
    uVar6 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 0xfffffffffffffffe;
    if ((*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_2) & 1) != 0) {
      uVar6 = *(ulonglong *)(uVar6 + 0x18);
    }
    if ((uVar6 == 0) &&
       (puVar2 = *(undefined8 **)((ulonglong)uVar5 + param_2), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(longlong *)((ulonglong)uVar5 + param_2) = param_3;
  }
  else {
    FUN_143a03d30();
    if (param_3 != 0) {
      uVar5 = FUN_143a046b0(param_1 + 0x10,param_4);
      *(longlong *)((ulonglong)uVar5 + param_2) = param_3;
      *(undefined4 *)
       ((ulonglong)
        (uint)(*(int *)(param_1 + 0x34) +
              (int)((*(longlong *)(param_4 + 0x58) -
                    *(longlong *)(*(longlong *)(*(longlong *)(param_4 + 0x58) + 0x10) + 0x30)) /
                   0x30) * 4) + param_2) = *(undefined4 *)(param_4 + 0x44);
      return;
    }
  }
  return;
}



// FUNCTION 143a0ab70 FUN_143a0ab70 body=55 status=ok
// SIG undefined FUN_143a0ab70(void)

void FUN_143a0ab70(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 143a0abb0 FUN_143a0abb0 body=63 status=ok
// SIG undefined FUN_143a0abb0(void)

void FUN_143a0abb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}



// FUNCTION 143a0abf0 _Change_array body=135 status=ok
// SIG undefined _Change_array(void)

void std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
     _Change_array(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
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
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 143a0ac80 _Erase body=85 status=ok
// SIG undefined _Erase(void)

void std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>_>::_Erase
               (undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2,0x20);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a0ace0 FUN_143a0ace0 body=13 status=ok
// SIG undefined FUN_143a0ace0(void)

void FUN_143a0ace0(undefined8 param_1,undefined8 param_2)

{
  FMemory::operator_delete(param_2,0x20);
  return;
}



// FUNCTION 143a0acf0 _Reallocate_exactly body=111 status=ok
// SIG undefined _Reallocate_exactly(void)

void std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
     _Reallocate_exactly(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  _Dst = (void *)allocator<userCommands::BaseCommand_*>::allocate();
  ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,param_1[1] - *param_1);
  _Change_array(param_1,_Dst,lVar1 - lVar2 >> 3,param_2);
  return;
}



// FUNCTION 143a0ad60 _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> body=132 status=ok
// SIG undefined _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(void)

void std::
     _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
               (longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    uVar1 = param_1[3];
    if (0xf < uVar1) {
      lVar2 = *param_1;
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
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 4;
  } while( true );
}



// FUNCTION 143a0adf0 FUN_143a0adf0 body=520 status=ok
// SIG undefined FUN_143a0adf0(void)

longlong FUN_143a0adf0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  
  uVar16 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  lVar10 = param_1[1] - lVar8 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar11 = lVar10 + 1;
  uVar6 = param_1[2] - lVar8 >> 5;
  uVar5 = uVar11;
  if ((uVar6 <= 0x7ffffffffffffff - (uVar6 >> 1)) && (uVar5 = (uVar6 >> 1) + uVar6, uVar5 < uVar11))
  {
    uVar5 = uVar11;
  }
  uVar13 = uVar5 * 0x20;
  uVar6 = uVar5;
  if (uVar5 < 0x800000000000000) {
    if (uVar13 < 0x1000) {
      if (uVar13 == 0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)operator_new(uVar13);
      }
      goto LAB_143a0aeef;
    }
  }
  else {
    uVar13 = 0xffffffffffffffff;
  }
  uVar7 = uVar13 + 0x27;
  if (uVar7 <= uVar13) {
    uVar7 = 0xffffffffffffffff;
  }
  lVar10 = operator_new(uVar7);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar9 = (undefined4 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)(puVar9 + -2) = lVar10;
LAB_143a0aeef:
  uVar13 = param_2 - lVar8 & 0xffffffffffffffe0;
  puVar14 = (undefined4 *)(uVar13 + (longlong)puVar9);
  puVar1 = puVar14 + 8;
  *(undefined8 *)(puVar14 + 4) = 0;
  *(undefined8 *)(puVar14 + 6) = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *puVar14 = *param_3;
  puVar14[1] = uVar2;
  puVar14[2] = uVar3;
  puVar14[3] = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  puVar14[4] = param_3[4];
  puVar14[5] = uVar2;
  puVar14[6] = uVar3;
  puVar14[7] = uVar4;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  lVar8 = param_1[1];
  lVar10 = *param_1;
  puVar12 = puVar9;
  puVar15 = puVar1;
  if (param_2 != lVar8) {
    std::
    _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              (*param_1,param_2,puVar9,param_1,puVar14,uVar6,puVar1,uVar16);
    lVar8 = param_1[1];
    lVar10 = param_2;
    puVar12 = puVar1;
    puVar14 = puVar9;
  }
  std::
  _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (lVar10,lVar8,puVar12,param_1,puVar14,uVar6,puVar15,uVar16);
  if (*param_1 != 0) {
    std::
    _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              (*param_1,param_1[1],param_1);
    lVar8 = *param_1;
    uVar6 = param_1[2] - lVar8 & 0xffffffffffffffe0;
    lVar10 = lVar8;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar10 = *(longlong *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar10,uVar6);
  }
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + uVar11 * 8);
  param_1[2] = (longlong)(puVar9 + uVar5 * 8);
  return *param_1 + uVar13;
}



// FUNCTION 143a0b000 _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_> body=114 status=ok
// SIG undefined _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>(void)

undefined4 *
std::
_Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          (undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    lVar5 = (longlong)param_3 - (longlong)param_1;
    puVar6 = param_1 + 3;
    do {
      *(undefined8 *)(lVar5 + -8 + (longlong)puVar6) = 0;
      *(undefined8 *)(lVar5 + (longlong)puVar6) = 0;
      uVar2 = *(undefined4 *)((longlong)puVar6 + -0x14);
      uVar3 = *(undefined4 *)(puVar6 + -2);
      uVar4 = *(undefined4 *)((longlong)puVar6 + -0xc);
      puVar1 = puVar6 + 1;
      *param_3 = *(undefined4 *)(puVar6 + -3);
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar6 + -4);
      uVar3 = *(undefined4 *)puVar6;
      uVar4 = *(undefined4 *)((longlong)puVar6 + 4);
      param_3[4] = *(undefined4 *)(puVar6 + -1);
      param_3[5] = uVar2;
      param_3[6] = uVar3;
      param_3[7] = uVar4;
      puVar6[-1] = 0;
      param_3 = param_3 + 8;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -3) = 0;
      puVar6 = puVar6 + 4;
    } while (puVar1 != param_2);
  }
  _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (param_3,param_3,param_4);
  return param_3;
}



// FUNCTION 143a0b080 FUN_143a0b080 body=276 status=ok
// SIG undefined FUN_143a0b080(void)

void FUN_143a0b080(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_20;
  longlong lStack_18;
  longlong local_10;
  
  uVar6 = 0xfffffffffffffffe;
  plVar1 = (longlong *)FUN_143a0bbb0();
  local_20 = 0;
  lStack_18 = 0;
  uVar5 = 0;
  local_10 = 0;
  (**(code **)(*plVar1 + 0x78))(plVar1,param_1,&local_20,*plVar1,uVar6);
  uVar3 = uVar5;
  if (lStack_18 - local_20 >> 3 != 0) {
    do {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1,*(undefined8 *)(uVar3 + local_20));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(lStack_18 - local_20 >> 3));
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  if (*plVar1 != plVar1[1]) {
    FUN_1439fbee0(plVar1);
  }
  if (local_20 != 0) {
    uVar3 = local_10 - local_20 & 0xfffffffffffffff8;
    lVar2 = local_20;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(local_20 + -8);
      if (0x1f < (local_20 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
  }
  return;
}



// FUNCTION 143a0b1a0 FUN_143a0b1a0 body=309 status=ok
// SIG undefined FUN_143a0b1a0(void)

void FUN_143a0b1a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_20;
  longlong lStack_18;
  longlong local_10;
  
  if (param_1 != param_2) {
    uVar6 = 0xfffffffffffffffe;
    plVar1 = (longlong *)FUN_143a0bbb0(param_2);
    local_20 = 0;
    lStack_18 = 0;
    uVar5 = 0;
    local_10 = 0;
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2,&local_20,*plVar1,uVar6);
    uVar3 = uVar5;
    if (lStack_18 - local_20 >> 3 != 0) {
      do {
        (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(undefined8 *)(uVar3 + local_20));
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = uVar3 + 8;
      } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(lStack_18 - local_20 >> 3));
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if (*plVar1 != plVar1[1]) {
      FUN_1439fbee0(plVar1);
    }
    if (local_20 != 0) {
      uVar3 = local_10 - local_20 & 0xfffffffffffffff8;
      lVar2 = local_20;
      if (0xfff < uVar3) {
        uVar3 = uVar3 + 0x27;
        lVar2 = *(longlong *)(local_20 + -8);
        if (0x1f < (local_20 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar2,uVar3);
    }
    FUN_143a0c580(param_1,param_2);
  }
  return;
}



// FUNCTION 143a0b2e0 FUN_143a0b2e0 body=1015 status=ok
// SIG undefined FUN_143a0b2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a0b2e0(undefined8 param_1)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [16];
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [32];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)FUN_143a0bbb0();
  local_a8 = plVar5;
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,param_1);
  if (*plVar6 != plVar6[1]) {
    FUN_1439fbee0(plVar6);
  }
  local_f0 = 0;
  lStack_e8 = 0;
  local_e0 = 0;
  (**(code **)(*plVar5 + 0x78))(plVar5,param_1,&local_f0);
  iVar11 = 0;
  if (lStack_e8 - local_f0 >> 3 != 0) {
    lVar12 = 0;
    do {
      lVar1 = *(longlong *)(local_f0 + lVar12);
      iVar4 = FUN_143a009a0(lVar1);
      if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 10) {
        if (*(int *)(lVar1 + 0x3c) == 3) {
          iVar4 = FUN_143a009a0(lVar1);
          if ((iVar4 == 0xb) && (cVar3 = FUN_143a4f8d0(lVar1), cVar3 != '\0')) {
            lVar7 = FUN_143a4f9e0(lVar1);
            iVar4 = FUN_143a009a0(*(longlong *)(lVar7 + 0x28) + 0x98);
            if (*(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 10) {
              plVar6 = (longlong *)(**(code **)(*plVar5 + 0x2d0))(plVar5,param_1,lVar1);
              cVar3 = FUN_143a11340(plVar6);
              if (cVar3 == '\0') goto LAB_143a0b634;
              FUN_1439fd820(local_d8,param_1,lVar1);
              FUN_1439fd820(local_a0,param_1,lVar1);
              (**(code **)(*plVar6 + 0x28))(plVar6,local_d8);
              (**(code **)(*plVar6 + 0x30))(plVar6,local_a0);
              cVar3 = (**(code **)(*local_d0 + 0x20))(local_d0,local_d8,local_a0);
              while (cVar3 == '\0') {
                FUN_143a124c0(local_d0);
                iVar4 = FUN_143a0d230(local_b8);
                if (iVar4 != 10) {
                  uVar8 = FUN_1439eeb00(local_68,3,
                                        "c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
                  iVar4 = FUN_143a0d230(local_b8);
                  puVar2 = (&PTR_s_ERROR_145cbee00)[iVar4];
                  uVar8 = FUN_1439eef00(uVar8,"Protocol Buffer map usage error:\n");
                  uVar8 = FUN_1439eef00(uVar8,"MapValueRef::MutableMessageValue");
                  uVar8 = FUN_1439eef00(uVar8," type does not match\n");
                  uVar8 = FUN_1439eef00(uVar8,"  Expected : ");
                  uVar8 = FUN_1439eef00(uVar8,"message");
                  uVar8 = FUN_1439eef00(uVar8,&DAT_143fc48d8);
                  uVar8 = FUN_1439eef00(uVar8,"  Actual   : ");
                  uVar8 = FUN_1439eef00(uVar8,puVar2);
                  FUN_1439eec50(local_f8,uVar8);
                  DsDevice::~DsDevice(local_68);
                }
                (**(code **)(*local_b8[0] + 0x98))();
                (**(code **)(*local_d0 + 0x88))(local_d0,local_d8);
                cVar3 = (**(code **)(*local_d0 + 0x20))(local_d0,local_d8,local_a0);
                plVar5 = local_a8;
              }
              (**(code **)(*local_98 + 0x78))(local_98,local_a0);
              FUN_1439fdc40(local_90);
              (**(code **)(*local_d0 + 0x78))(local_d0,local_d8);
              FUN_1439fdc40(local_c8);
            }
          }
          else {
LAB_143a0b634:
            iVar4 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1,lVar1);
            iVar10 = 0;
            if (0 < iVar4) {
              do {
                plVar6 = (longlong *)(**(code **)(*plVar5 + 0x1f8))(plVar5,param_1,lVar1);
                (**(code **)(*plVar6 + 0x98))(plVar6);
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar4);
            }
          }
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar5 + 0x130))(plVar5,param_1,lVar1,0);
          (**(code **)(*plVar6 + 0x98))(plVar6);
        }
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((ulonglong)(longlong)iVar11 < (ulonglong)(lStack_e8 - local_f0 >> 3));
  }
  if (local_f0 != 0) {
    uVar9 = local_e0 - local_f0 & 0xfffffffffffffff8;
    lVar12 = local_f0;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      lVar12 = *(longlong *)(local_f0 + -8);
      if (0x1f < (local_f0 - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar12,uVar9);
  }
  return;
}



// FUNCTION 143a0b6e0 FUN_143a0b6e0 body=1227 status=ok
// SIG undefined FUN_143a0b6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a0b6e0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  size_t *psVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *pvVar12;
  uint *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *_Src;
  undefined8 *_Src_00;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_f8 [32];
  size_t local_d8;
  int local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_80 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8 = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b0 = param_3;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_78);
  lVar17 = *plVar7;
  local_a8 = lVar17;
  plVar7 = (longlong *)FUN_143a0bbb0(param_1);
  iVar16 = 0;
  local_a0 = plVar7;
  if (0 < *(int *)(lVar17 + 0x68)) {
    lVar18 = 0;
    do {
      if ((*(int *)(lVar18 + 0x3c + *(longlong *)(lVar17 + 0x28)) == 2) &&
         (cVar5 = (**(code **)(*plVar7 + 0x20))
                            (plVar7,local_c0,(longlong)iVar16 * 0x98 + *(longlong *)(lVar17 + 0x28))
         , cVar5 == '\0')) {
        _Src = *(undefined8 **)(lVar18 + *(longlong *)(lVar17 + 0x28));
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = local_68 & 0xffffff00;
        local_c8 = 1;
        psVar1 = _Src + 2;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
                  (&local_68,*psVar1 + param_2[2]);
        _Src_00 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          _Src_00 = (undefined8 *)*param_2;
        }
        sVar2 = param_2[2];
        if (uStack_50 - local_58 < sVar2) {
          local_d8 = sVar2;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (&local_68,sVar2,0);
        }
        else {
          puVar13 = &local_68;
          if (0xf < uStack_50) {
            puVar13 = (uint *)CONCAT44(uStack_64,local_68);
          }
          pvVar12 = (void *)((longlong)puVar13 + local_58);
          local_58 = sVar2 + local_58;
          _guard_xfg_dispatch_icall_nop(pvVar12,_Src_00,sVar2);
          *(undefined1 *)((longlong)pvVar12 + sVar2) = 0;
        }
        if (0xf < (ulonglong)_Src[3]) {
          _Src = (undefined8 *)*_Src;
        }
        sVar2 = *psVar1;
        if (uStack_50 - local_58 < sVar2) {
          local_d8 = sVar2;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                    (&local_68,sVar2,0,_Src);
        }
        else {
          puVar13 = &local_68;
          if (0xf < uStack_50) {
            puVar13 = (uint *)CONCAT44(uStack_64,local_68);
          }
          pvVar12 = (void *)((longlong)puVar13 + local_58);
          local_58 = sVar2 + local_58;
          _guard_xfg_dispatch_icall_nop(pvVar12,_Src,sVar2);
          *(undefined1 *)((longlong)pvVar12 + sVar2) = 0;
        }
        param_3 = local_b0;
        puVar13 = *(uint **)(local_b0 + 8);
        if (*(uint **)(local_b0 + 0x10) == puVar13) {
          FUN_143a0adf0(local_b0,puVar13,&local_68);
        }
        else {
          puVar13[4] = 0;
          puVar13[5] = 0;
          puVar13[6] = 0;
          puVar13[7] = 0;
          *puVar13 = local_68;
          puVar13[1] = uStack_64;
          puVar13[2] = uStack_60;
          puVar13[3] = uStack_5c;
          *(longlong *)(puVar13 + 4) = local_58;
          *(ulonglong *)(puVar13 + 6) = uStack_50;
          local_58 = 0;
          uStack_50 = 0xf;
          local_68 = local_68 & 0xffffff00;
          *(longlong *)(local_b0 + 8) = *(longlong *)(local_b0 + 8) + 0x20;
        }
        lVar17 = local_a8;
        param_2 = local_b8;
        plVar7 = local_a0;
        if (0xf < uStack_50) {
          uVar11 = uStack_50 + 1;
          lVar3 = CONCAT44(uStack_64,local_68);
          lVar17 = lVar3;
          if (0xfff < uVar11) {
            uVar11 = uStack_50 + 0x28;
            lVar17 = *(longlong *)(lVar3 + -8);
            if (0x1f < (lVar3 - lVar17) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar17,uVar11);
          lVar17 = local_a8;
          param_2 = local_b8;
          plVar7 = local_a0;
        }
      }
      iVar16 = iVar16 + 1;
      lVar18 = lVar18 + 0x98;
    } while (iVar16 < *(int *)(lVar17 + 0x68));
  }
  plVar14 = local_c0;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  (**(code **)(*plVar7 + 0x78))(plVar7,local_c0,&local_98);
  local_c8 = 0;
  if (lStack_90 - local_98 >> 3 != 0) {
    lVar17 = 0;
    do {
      iVar16 = local_c8;
      lVar18 = *(longlong *)(lVar17 + local_98);
      iVar6 = FUN_143a009a0(lVar18);
      if (*(int *)(&DAT_145cbed10 + (longlong)iVar6 * 4) == 10) {
        if (*(int *)(lVar18 + 0x3c) == 3) {
          iVar6 = (**(code **)(*plVar7 + 0x28))();
          lVar3 = local_b0;
          iVar15 = 0;
          if (0 < iVar6) {
            do {
              uVar8 = (**(code **)(*plVar7 + 0x198))(plVar7,plVar14,lVar18,iVar15);
              uVar9 = FUN_143a0cea0(&local_68,local_b8,lVar18);
              FUN_143a0b6e0(uVar8,uVar9,lVar3);
              if (0xf < uStack_50) {
                uVar11 = uStack_50 + 1;
                lVar4 = CONCAT44(uStack_64,local_68);
                lVar10 = lVar4;
                if (0xfff < uVar11) {
                  uVar11 = uStack_50 + 0x28;
                  lVar10 = *(longlong *)(lVar4 + -8);
                  if (0x1f < (lVar4 - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FMemory::operator_delete(lVar10,uVar11);
              }
              iVar15 = iVar15 + 1;
              plVar14 = local_c0;
              iVar16 = local_c8;
            } while (iVar15 < iVar6);
          }
        }
        else {
          uVar8 = (**(code **)(*plVar7 + 0xd0))(plVar7,plVar14,lVar18,0);
          uVar9 = FUN_143a0cea0(&local_68,local_b8,lVar18);
          FUN_143a0b6e0(uVar8,uVar9,param_3);
          plVar14 = local_c0;
          if (0xf < uStack_50) {
            uVar11 = uStack_50 + 1;
            lVar3 = CONCAT44(uStack_64,local_68);
            lVar18 = lVar3;
            if (0xfff < uVar11) {
              uVar11 = uStack_50 + 0x28;
              lVar18 = *(longlong *)(lVar3 + -8);
              if (0x1f < (lVar3 - lVar18) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar18,uVar11);
            plVar14 = local_c0;
          }
        }
      }
      local_c8 = iVar16 + 1;
      lVar17 = lVar17 + 8;
      param_3 = local_b0;
    } while ((ulonglong)(longlong)local_c8 < (ulonglong)(lStack_90 - local_98 >> 3));
  }
  if (local_98 != 0) {
    uVar11 = local_88 - local_98 & 0xfffffffffffffff8;
    lVar17 = local_98;
    if (0xfff < uVar11) {
      uVar11 = uVar11 + 0x27;
      lVar17 = *(longlong *)(local_98 + -8);
      if (0x1f < (local_98 - lVar17) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar17,uVar11);
  }
  return;
}



// FUNCTION 143a0bbb0 FUN_143a0bbb0 body=565 status=ok
// SIG undefined FUN_143a0bbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a0bbb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  uint local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong uStack_38;
  longlong local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_94 = 0;
  lVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_88);
  lVar2 = *(longlong *)(lVar2 + 8);
  if (lVar2 == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,&local_88);
    if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
      local_78 = 0;
      uStack_70 = 0xf;
      local_88 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_88,"unknown",7);
      puVar4 = &local_88;
      uVar8 = 2;
    }
    else {
      puVar4 = (undefined1 *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (&local_50,*(undefined8 *)*plVar3);
      uVar8 = 1;
    }
    local_94 = uVar8;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30,puVar4);
    if ((uVar8 & 2) != 0) {
      uVar8 = uVar8 & 0xfffffffd;
      if (0xf < uStack_70) {
        uVar7 = uStack_70 + 1;
        lVar1 = CONCAT71(uStack_87,local_88);
        lVar6 = lVar1;
        if (0xfff < uVar7) {
          uVar7 = uStack_70 + 0x28;
          lVar6 = *(longlong *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar6,uVar7);
      }
    }
    if ((uVar8 & 1) != 0) {
      if (0xf < uStack_38) {
        uVar7 = uStack_38 + 1;
        lVar1 = CONCAT71(uStack_4f,local_50);
        lVar6 = lVar1;
        if (0xfff < uVar7) {
          uVar7 = uStack_38 + 0x28;
          lVar6 = *(longlong *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar6,uVar7);
      }
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = 0;
    }
    uVar5 = FUN_1439eeb00(&local_88,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_ops.cc")
    ;
    uVar5 = FUN_1439eef00(uVar5,"Message does not support reflection (type ");
    uVar5 = FUN_1439eecf0(uVar5,local_30);
    uVar5 = FUN_1439eef00(uVar5,&DAT_145cbd994);
    FUN_1439eec50(local_98,uVar5);
    DsDevice::~DsDevice(&local_88);
    if (0xf < local_18) {
      uVar7 = local_18 + 1;
      lVar6 = local_30[0];
      if (0xfff < uVar7) {
        uVar7 = local_18 + 0x28;
        lVar6 = *(longlong *)(local_30[0] + -8);
        if (0x1f < (local_30[0] - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar7);
    }
  }
  return lVar2;
}



// FUNCTION 143a0bdf0 FUN_143a0bdf0 body=1924 status=ok
// SIG undefined FUN_143a0bdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a0bdf0(longlong *param_1)

{
  undefined *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [8];
  undefined4 local_138;
  longlong *local_130;
  undefined4 local_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f8 [8];
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_d8 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_d0);
  lVar8 = *plVar4;
  plVar4 = (longlong *)FUN_143a0bbb0(param_1);
  iVar11 = 0;
  if (0 < *(int *)(lVar8 + 0x68)) {
    lVar13 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x28) + 0x3c + lVar13) == 2) &&
         (uVar5 = (**(code **)(*plVar4 + 0x20))
                            (plVar4,param_1,(longlong)iVar11 * 0x98 + *(longlong *)(lVar8 + 0x28)),
         (char)uVar5 == '\0')) {
        return uVar5 & 0xffffffffffffff00;
      }
      iVar11 = iVar11 + 1;
      lVar13 = lVar13 + 0x98;
    } while (iVar11 < *(int *)(lVar8 + 0x68));
  }
  local_120 = 0;
  lStack_118 = 0;
  uVar10 = 0;
  local_110 = 0;
  (**(code **)(*plVar4 + 0x78))(plVar4,param_1,&local_120);
  uVar5 = uVar10;
  if (lStack_118 - local_120 >> 3 != 0) {
    do {
      lVar8 = *(longlong *)(local_120 + uVar5);
      iVar11 = FUN_143a009a0(lVar8);
      if (*(int *)(&DAT_145cbed10 + (longlong)iVar11 * 4) == 10) {
        iVar11 = FUN_143a009a0(lVar8);
        if ((iVar11 == 0xb) && (cVar3 = FUN_143a4f8d0(lVar8), cVar3 != '\0')) {
          lVar13 = FUN_143a4f9e0(lVar8);
          iVar11 = FUN_143a009a0(*(longlong *)(lVar13 + 0x28) + 0x98);
          if (*(int *)(&DAT_145cbed10 + (longlong)iVar11 * 4) == 10) {
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0x2d8))(plVar4,param_1,lVar8);
            cVar3 = FUN_143a11340(plVar6);
            if (cVar3 == '\0') goto LAB_143a0c41c;
            local_138 = 0;
            local_130 = (longlong *)0x0;
            local_128 = 0;
            lVar13 = (**(code **)(*param_1 + 0xb8))(param_1,local_d0);
            local_148 = (longlong *)
                        (**(code **)(**(longlong **)(lVar13 + 8) + 0x2d0))
                                  (*(longlong **)(lVar13 + 8),param_1,lVar8);
            local_a0 = 0;
            local_98 = 0xf;
            local_b0 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_b0,&DAT_144044650,3);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&local_b0);
            iVar11 = FUN_143a009a0(uVar7);
            FUN_141514070(local_140,*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4));
            if (0xf < local_98) {
              uVar9 = local_98 + 1;
              lVar2 = CONCAT71(uStack_af,local_b0);
              lVar13 = lVar2;
              if (0xfff < uVar9) {
                uVar9 = local_98 + 0x28;
                lVar13 = *(longlong *)(lVar2 + -8);
                if (0x1f < (lVar2 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar13,uVar9);
            }
            local_a0 = 0;
            local_98 = 0xf;
            local_b0 = 0;
            local_80 = 0;
            local_78 = 0xf;
            local_90 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_90,"value",5);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&local_90);
            iVar11 = FUN_143a009a0(uVar7);
            local_128 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4);
            if (0xf < local_78) {
              uVar9 = local_78 + 1;
              lVar2 = CONCAT71(uStack_8f,local_90);
              lVar13 = lVar2;
              if (0xfff < uVar9) {
                uVar9 = local_78 + 0x28;
                lVar13 = *(longlong *)(lVar2 + -8);
                if (0x1f < (lVar2 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar13,uVar9);
            }
            local_80 = 0;
            local_78 = 0xf;
            local_90 = 0;
            (**(code **)(*local_148 + 0x70))(local_148,local_150);
            local_f0 = 0;
            local_e8 = 0;
            local_e0 = 0;
            lVar13 = (**(code **)(*param_1 + 0xb8))(param_1,local_c0);
            local_100 = (longlong *)
                        (**(code **)(**(longlong **)(lVar13 + 8) + 0x2d0))
                                  (*(longlong **)(lVar13 + 8),param_1,lVar8);
            local_80 = 0;
            local_78 = 0xf;
            local_90 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_90,&DAT_144044650,3);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&local_90);
            iVar11 = FUN_143a009a0(uVar7);
            FUN_141514070(local_f8,*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4));
            if (0xf < local_78) {
              uVar9 = local_78 + 1;
              lVar2 = CONCAT71(uStack_8f,local_90);
              lVar13 = lVar2;
              if (0xfff < uVar9) {
                uVar9 = local_78 + 0x28;
                lVar13 = *(longlong *)(lVar2 + -8);
                if (0x1f < (lVar2 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar13,uVar9);
            }
            local_80 = 0;
            local_78 = 0xf;
            local_90 = 0;
            local_a0 = 0;
            local_98 = 0xf;
            local_b0 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (&local_b0,"value",5);
            uVar7 = FUN_143a4f9e0(lVar8);
            uVar7 = FUN_143a3f170(uVar7,&local_b0);
            iVar11 = FUN_143a009a0(uVar7);
            local_e0 = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar11 * 4);
            if (0xf < local_98) {
              uVar9 = local_98 + 1;
              lVar13 = CONCAT71(uStack_af,local_b0);
              lVar8 = lVar13;
              if (0xfff < uVar9) {
                uVar9 = local_98 + 0x28;
                lVar8 = *(longlong *)(lVar13 + -8);
                if (0x1f < (lVar13 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar8,uVar9);
            }
            local_a0 = 0;
            local_98 = 0xf;
            local_b0 = 0;
            (**(code **)(*local_100 + 0x70))(local_100,local_108);
            (**(code **)(*plVar6 + 0x28))(plVar6,local_150);
            (**(code **)(*plVar6 + 0x30))(plVar6,local_108);
            cVar3 = (**(code **)(*local_148 + 0x20))(local_148,local_150,local_108);
            while (cVar3 == '\0') {
              iVar11 = FUN_143a0d230(&local_130);
              if (iVar11 != 10) {
                uVar7 = FUN_1439eeb00(local_70,3,
                                      "c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
                iVar11 = FUN_143a0d230(&local_130);
                puVar1 = (&PTR_s_ERROR_145cbee00)[iVar11];
                uVar7 = FUN_1439eef00(uVar7,"Protocol Buffer map usage error:\n");
                uVar7 = FUN_1439eef00(uVar7,"MapValueRef::GetMessageValue");
                uVar7 = FUN_1439eef00(uVar7," type does not match\n");
                uVar7 = FUN_1439eef00(uVar7,"  Expected : ");
                uVar7 = FUN_1439eef00(uVar7,"message");
                uVar7 = FUN_1439eef00(uVar7,&DAT_143fc48d8);
                uVar7 = FUN_1439eef00(uVar7,"  Actual   : ");
                uVar7 = FUN_1439eef00(uVar7,puVar1);
                FUN_1439eec50(local_158,uVar7);
                DsDevice::~DsDevice(local_70);
              }
              cVar3 = (**(code **)(*local_130 + 0x38))();
              if (cVar3 == '\0') {
                (**(code **)(*local_100 + 0x78))(local_100,local_108);
                FUN_1439fdc40(local_f8);
                (**(code **)(*local_148 + 0x78))(local_148,local_150);
                FUN_1439fdc40(local_140);
                goto LAB_143a0c4fd;
              }
              (**(code **)(*local_148 + 0x88))(local_148,local_150);
              cVar3 = (**(code **)(*local_148 + 0x20))(local_148,local_150,local_108);
            }
            (**(code **)(*local_100 + 0x78))(local_100,local_108);
            FUN_1439fdc40(local_f8);
            (**(code **)(*local_148 + 0x78))(local_148,local_150);
            FUN_1439fdc40(local_140);
          }
        }
        else {
LAB_143a0c41c:
          if (*(int *)(lVar8 + 0x3c) == 3) {
            iVar11 = (**(code **)(*plVar4 + 0x28))();
            iVar12 = 0;
            if (0 < iVar11) {
              do {
                plVar6 = (longlong *)(**(code **)(*plVar4 + 0x198))(plVar4,param_1,lVar8);
                cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
                if (cVar3 == '\0') goto LAB_143a0c4fd;
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar11);
            }
          }
          else {
            plVar6 = (longlong *)(**(code **)(*plVar4 + 0xd0))(plVar4,param_1,lVar8,0);
            cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
            if (cVar3 == '\0') {
LAB_143a0c4fd:
              uVar5 = 0;
              goto LAB_143a0c508;
            }
          }
        }
      }
      uVar14 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar14;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar14 < (ulonglong)(lStack_118 - local_120 >> 3));
  }
  uVar5 = 1;
LAB_143a0c508:
  if (local_120 != 0) {
    uVar10 = local_110 - local_120 & 0xfffffffffffffff8;
    lVar8 = local_120;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar8 = *(longlong *)(local_120 + -8);
      if (0x1f < (local_120 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar8,uVar10);
  }
  return uVar5;
}



// FUNCTION 143a0c580 FUN_143a0c580 body=2252 status=ok
// SIG undefined FUN_143a0c580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a0c580(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  bool bVar15;
  char cVar16;
  undefined4 uVar17;
  undefined1 auStack_128 [32];
  int local_108;
  char local_f8;
  char local_f7 [3];
  uint local_f4;
  longlong *local_f0;
  int local_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong local_c8 [2];
  undefined8 local_b8;
  longlong local_b0 [3];
  ulonglong local_98;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_b8 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_f4 = 0;
  bVar15 = param_1 == param_2;
  local_f0 = param_2;
  if (bVar15) {
    uVar4 = FUN_1439eeb00(local_b0,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_ops.cc",
                          0x47);
    local_f4 = 1;
    uVar4 = FUN_1439eef00(uVar4,"CHECK failed: (&from) != (to): ");
    FUN_1439eec50(local_f7,uVar4);
  }
  uVar14 = (uint)bVar15;
  if (bVar15) {
    uVar14 = 0;
    DsDevice::~DsDevice(local_b0);
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_c8);
  lVar9 = *plVar5;
  plVar5 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_b0);
  if (*plVar5 != lVar9) {
    uVar6 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\reflection_ops.cc");
    uVar14 = uVar14 | 2;
    local_f4 = uVar14;
    plVar5 = (longlong *)(**(code **)(*local_f0 + 0xb8))(local_f0,local_b0);
    uVar4 = *(undefined8 *)(*plVar5 + 8);
    uVar7 = *(undefined8 *)(lVar9 + 8);
    uVar6 = FUN_1439eef00(uVar6,"CHECK failed: (to->GetDescriptor()) == (descriptor): ");
    uVar6 = FUN_1439eef00(uVar6,"Tried to merge messages of different types ");
    uVar6 = FUN_1439eef00(uVar6,"(merge ");
    uVar7 = FUN_1439eecf0(uVar6,uVar7);
    uVar7 = FUN_1439eef00(uVar7,&DAT_145cbda28);
    uVar4 = FUN_1439eecf0(uVar7,uVar4);
    uVar4 = FUN_1439eef00(uVar4,&DAT_144025e14);
    FUN_1439eec50(local_f7,uVar4);
    param_2 = local_f0;
  }
  if ((uVar14 & 2) != 0) {
    DsDevice::~DsDevice(local_78);
  }
  plVar5 = (longlong *)FUN_143a0bbb0(param_1);
  plVar8 = (longlong *)FUN_143a0bbb0(param_2);
  lVar9 = (**(code **)(*plVar5 + 0x278))(plVar5);
  lVar10 = thunk_FUN_143a00840();
  cVar16 = lVar9 == lVar10;
  local_f8 = cVar16;
  lVar9 = (**(code **)(*plVar8 + 0x278))(plVar8);
  lVar10 = thunk_FUN_143a00840();
  local_e0 = 0;
  lStack_d8 = 0;
  local_d0 = 0;
  local_f7[0] = lVar9 == lVar10;
  (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
  local_f4 = 0;
  if (lStack_d8 - local_e0 >> 3 != 0) {
    local_c8[0] = 0;
    cVar13 = lVar9 == lVar10;
    do {
      lVar9 = *(longlong *)(local_c8[0] + local_e0);
      if (*(int *)(lVar9 + 0x3c) == 3) {
        if (((cVar16 == cVar13) && (iVar2 = FUN_143a009a0(lVar9), iVar2 == 0xb)) &&
           (cVar16 = FUN_143a4f8d0(lVar9), cVar16 != '\0')) {
          uVar4 = (**(code **)(*plVar5 + 0x2d8))(plVar5,param_1,lVar9);
          plVar11 = (longlong *)(**(code **)(*plVar8 + 0x2d0))(plVar8,param_2,lVar9);
          cVar16 = FUN_143a11340(plVar11);
          if ((cVar16 != '\0') && (cVar16 = FUN_143a11340(uVar4), cVar16 != '\0')) {
            (**(code **)(*plVar11 + 0x38))(plVar11,uVar4);
            cVar16 = local_f8;
            goto switchD_143a0cb76_default;
          }
        }
        local_e8 = (**(code **)(*plVar5 + 0x28))(plVar5,param_1,lVar9);
        iVar2 = 0;
        cVar16 = local_f8;
        if (0 < local_e8) {
          do {
            iVar3 = FUN_143a009a0(lVar9);
            switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar3 * 4)) {
            case 1:
              lVar10 = *plVar8;
              (**(code **)(*plVar5 + 0x148))(plVar5,param_1,lVar9,iVar2);
              (**(code **)(lVar10 + 0x200))(plVar8,param_2,lVar9);
              break;
            case 2:
              lVar10 = *plVar8;
              (**(code **)(*plVar5 + 0x150))(plVar5,param_1,lVar9,iVar2);
              (**(code **)(lVar10 + 0x208))(plVar8,param_2,lVar9);
              break;
            case 3:
              lVar10 = *plVar8;
              (**(code **)(*plVar5 + 0x158))(plVar5,param_1,lVar9,iVar2);
              (**(code **)(lVar10 + 0x210))(plVar8,param_2,lVar9);
              break;
            case 4:
              lVar10 = *plVar8;
              (**(code **)(*plVar5 + 0x160))(plVar5,param_1,lVar9,iVar2);
              (**(code **)(lVar10 + 0x218))(plVar8,param_2,lVar9);
              break;
            case 5:
              lVar10 = *plVar8;
              uVar17 = (**(code **)(*plVar5 + 0x170))(plVar5,param_1,lVar9);
              (**(code **)(lVar10 + 0x228))(plVar8,param_2,lVar9,uVar17);
              break;
            case 6:
              lVar10 = *plVar8;
              uVar17 = (**(code **)(*plVar5 + 0x168))(plVar5,param_1,lVar9);
              (**(code **)(lVar10 + 0x220))(plVar8,param_2,lVar9,uVar17);
              break;
            case 7:
              lVar10 = *plVar8;
              (**(code **)(*plVar5 + 0x178))(plVar5,param_1,lVar9,iVar2);
              (**(code **)(lVar10 + 0x230))(plVar8,param_2,lVar9);
              break;
            case 8:
              lVar10 = *plVar8;
              (**(code **)(*plVar5 + 0x188))(plVar5,param_1,lVar9,iVar2);
              (**(code **)(lVar10 + 0x240))(plVar8,param_2,lVar9);
              break;
            case 9:
              local_108 = iVar2;
              (**(code **)(*plVar5 + 0x180))(plVar5,local_b0,param_1,lVar9);
              (**(code **)(*plVar8 + 0x238))(plVar8,param_2,lVar9);
              if (0xf < local_98) {
                uVar12 = local_98 + 1;
                lVar10 = local_b0[0];
                if (0xfff < uVar12) {
                  uVar12 = local_98 + 0x28;
                  lVar10 = *(longlong *)(local_b0[0] + -8);
                  if (0x1f < (local_b0[0] - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FMemory::operator_delete(lVar10,uVar12);
              }
              break;
            case 10:
              plVar11 = (longlong *)(**(code **)(*plVar8 + 0x250))(plVar8,param_2,lVar9,0);
              lVar10 = *plVar11;
              uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,param_1,lVar9);
              (**(code **)(lVar10 + 0x90))(plVar11,uVar4);
              param_2 = local_f0;
            }
            iVar2 = iVar2 + 1;
            cVar16 = local_f8;
          } while (iVar2 < local_e8);
        }
      }
      else {
        iVar2 = FUN_143a009a0(lVar9);
        switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4)) {
        case 1:
          lVar10 = *plVar8;
          uVar17 = (**(code **)(*plVar5 + 0x80))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0xe0))(plVar8,param_2,lVar9,uVar17);
          break;
        case 2:
          lVar10 = *plVar8;
          uVar4 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0xe8))(plVar8,param_2,lVar9,uVar4);
          break;
        case 3:
          lVar10 = *plVar8;
          uVar17 = (**(code **)(*plVar5 + 0x90))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0xf0))(plVar8,param_2,lVar9,uVar17);
          break;
        case 4:
          lVar10 = *plVar8;
          uVar4 = (**(code **)(*plVar5 + 0x98))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0xf8))(plVar8,param_2,lVar9,uVar4);
          break;
        case 5:
          lVar10 = *plVar8;
          uVar17 = (**(code **)(*plVar5 + 0xa8))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0x108))(plVar8,param_2,lVar9,uVar17);
          break;
        case 6:
          lVar10 = *plVar8;
          uVar17 = (**(code **)(*plVar5 + 0xa0))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0x100))(plVar8,param_2,lVar9,uVar17);
          break;
        case 7:
          lVar10 = *plVar8;
          uVar1 = (**(code **)(*plVar5 + 0xb0))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0x110))(plVar8,param_2,lVar9,uVar1);
          break;
        case 8:
          lVar10 = *plVar8;
          uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5,param_1,lVar9);
          (**(code **)(lVar10 + 0x120))(plVar8,param_2,lVar9,uVar4);
          break;
        case 9:
          uVar4 = (**(code **)(*plVar5 + 0xb8))(plVar5,local_b0,param_1,lVar9);
          (**(code **)(*plVar8 + 0x118))(plVar8,param_2,lVar9,uVar4);
          if (0xf < local_98) {
            uVar12 = local_98 + 1;
            lVar9 = local_b0[0];
            if (0xfff < uVar12) {
              uVar12 = local_98 + 0x28;
              lVar9 = *(longlong *)(local_b0[0] + -8);
              if (0x1f < (local_b0[0] - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar9,uVar12);
          }
          break;
        case 10:
          plVar11 = (longlong *)(**(code **)(*plVar8 + 0x130))(plVar8,param_2,lVar9,0);
          lVar10 = *plVar11;
          uVar4 = (**(code **)(*plVar5 + 0xd0))(plVar5,param_1,lVar9,0);
          (**(code **)(lVar10 + 0x90))(plVar11,uVar4);
        }
      }
switchD_143a0cb76_default:
      local_f4 = local_f4 + 1;
      local_c8[0] = local_c8[0] + 8;
      param_2 = local_f0;
      cVar13 = local_f7[0];
    } while ((ulonglong)(longlong)(int)local_f4 < (ulonglong)(lStack_d8 - local_e0 >> 3));
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_1);
  uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,param_2);
  FUN_1439fc150(uVar7,uVar4);
  if (local_e0 != 0) {
    uVar12 = local_d0 - local_e0 & 0xfffffffffffffff8;
    lVar9 = local_e0;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      lVar9 = *(longlong *)(local_e0 + -8);
      if (0x1f < (local_e0 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar9,uVar12);
  }
  return;
}



// FUNCTION 143a0cea0 FUN_143a0cea0 body=877 status=ok
// SIG undefined FUN_143a0cea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143a0cea0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined1 *local_60;
  longlong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_90 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  local_88 = param_1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>();
  local_98 = 1;
  if (*(char *)((longlong)param_3 + 0x42) == '\0') {
    plVar1 = (longlong *)*param_3;
    plVar5 = plVar1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar5 = (longlong *)*plVar1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,plVar5,plVar1[2]);
  }
  else {
    uVar7 = param_1[2];
    if (param_1[3] == uVar7) {
      local_a8 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (param_1,1,0,&DAT_145cbda30);
    }
    else {
      param_1[2] = uVar7 + 1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + uVar7),&DAT_145cbda30,1);
      *(undefined1 *)((longlong)((longlong)puVar3 + uVar7) + 1) = 0;
    }
    plVar1 = (longlong *)param_3[1];
    plVar5 = plVar1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar5 = (longlong *)*plVar1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,plVar5,plVar1[2]);
    uVar7 = param_1[2];
    if (param_1[3] == uVar7) {
      local_a8 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (param_1,1,0,&DAT_144025e14);
    }
    else {
      param_1[2] = uVar7 + 1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + uVar7),&DAT_144025e14,1);
      *(undefined1 *)((longlong)((longlong)puVar3 + uVar7) + 1) = 0;
    }
  }
  if (param_4 != -1) {
    uVar7 = param_1[2];
    if (param_1[3] == uVar7) {
      local_a8 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (param_1,1,0,&DAT_145cbda34);
    }
    else {
      param_1[2] = uVar7 + 1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + uVar7),&DAT_145cbda34,1);
      *(undefined1 *)((longlong)((longlong)puVar3 + uVar7) + 1) = 0;
    }
    local_60 = local_50;
    local_58 = FUN_143a596d0(param_4,local_50);
    local_58 = local_58 + (-0x10 - (longlong)&local_60);
    local_70 = 0;
    uStack_68 = 0xf;
    local_80 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_80,local_60)
    ;
    local_98 = 3;
    puVar6 = &local_80;
    if (0xf < uStack_68) {
      puVar6 = (undefined1 *)CONCAT71(uStack_7f,local_80);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,puVar6,local_70);
    if (0xf < uStack_68) {
      uVar7 = uStack_68 + 1;
      lVar2 = CONCAT71(uStack_7f,local_80);
      lVar4 = lVar2;
      if (0xfff < uVar7) {
        uVar7 = uStack_68 + 0x28;
        lVar4 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar7);
    }
    uVar7 = param_1[2];
    if (param_1[3] == uVar7) {
      local_a8 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (param_1,1,0,&DAT_145cbda38);
    }
    else {
      param_1[2] = uVar7 + 1;
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + uVar7),&DAT_145cbda38,1);
      *(undefined1 *)((longlong)((longlong)puVar3 + uVar7) + 1) = 0;
    }
  }
  uVar7 = param_1[2];
  if (param_1[3] == uVar7) {
    local_a8 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
              (param_1,1,0,&DAT_143f47cc0);
  }
  else {
    param_1[2] = uVar7 + 1;
    puVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar3 + uVar7),&DAT_143f47cc0,1);
    *(undefined1 *)((longlong)((longlong)puVar3 + uVar7) + 1) = 0;
  }
  return param_1;
}



// FUNCTION 143a0d210 _Destroy body=20 status=ok
// SIG undefined _Destroy(void)

void std::
     vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
     ::_Destroy(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (param_2,param_3,param_1);
  return;
}



// FUNCTION 143a0d230 FUN_143a0d230 body=151 status=ok
// SIG undefined FUN_143a0d230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143a0d230(longlong *param_1)

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
  iVar1 = (int)param_1[1];
  if ((iVar1 == 0) || (*param_1 == 0)) {
    uVar2 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",699);
    uVar2 = FUN_1439eef00(uVar2,"Protocol Buffer map usage error:\n");
    uVar2 = FUN_1439eef00(uVar2,"MapValueRef::type MapValueRef is not initialized.");
    FUN_1439eec50(local_58,uVar2);
    DsDevice::~DsDevice(local_48);
    iVar1 = (int)param_1[1];
  }
  return iVar1;
}



// FUNCTION 143a0d2d0 FUN_143a0d2d0 body=225 status=ok
// SIG undefined FUN_143a0d2d0(void)

undefined8 * FUN_143a0d2d0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  *param_1 = *param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = FUN_143a14340();
  param_1[1] = lVar6;
  uVar7 = FUN_143a0d440(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar6,
                        (ulonglong)param_1 & 0xff,uVar7);
  *(undefined8 *)(lVar6 + 8) = uVar7;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  plVar2 = (longlong *)param_1[1];
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar5 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *plVar2 = (longlong)plVar3;
    lVar6 = *(longlong *)(param_1[1] + 8);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar6 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(longlong *)(param_1[1] + 0x10) = lVar6;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(undefined8 *)(param_1[1] + 0x10) = param_1[1];
  }
  return param_1;
}



// FUNCTION 143a0d3c0 FUN_143a0d3c0 body=18 status=ok
// SIG undefined FUN_143a0d3c0(void)

void FUN_143a0d3c0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1439efb50(param_1,param_2,thunk_FUN_1439fdc40);
    return;
  }
  return;
}



// FUNCTION 143a0d3e0 FUN_143a0d3e0 body=18 status=ok
// SIG undefined FUN_143a0d3e0(void)

void FUN_143a0d3e0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1439efb50(param_1,param_2,_guard_xfg_dispatch_icall_nop);
    return;
  }
  return;
}



// FUNCTION 143a0d400 FUN_143a0d400 body=51 status=ok
// SIG undefined FUN_143a0d400(void)

void FUN_143a0d400(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143a143b0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  return;
}



// FUNCTION 143a0d440 FUN_143a0d440 body=156 status=ok
// SIG undefined FUN_143a0d440(void)

undefined8 *
FUN_143a0d440(longlong param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_143a0d400(param_1,param_2 + 4,param_3,param_4,0xfffffffffffffffe);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = FUN_143a0d440(param_1,*param_2,puVar1,param_4 & 0xff);
    *puVar1 = uVar2;
    uVar2 = FUN_143a0d440(param_1,param_2[2],puVar1,param_4 & 0xff);
    puVar1[2] = uVar2;
  }
  return puVar3;
}



// FUNCTION 143a0d4e0 FUN_143a0d4e0 body=1028 status=ok
// SIG undefined FUN_143a0d4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a0d4e0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  byte extraout_var;
  byte extraout_var_00;
  byte extraout_var_01;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115 [5];
  undefined8 *local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [56];
  undefined1 local_b8 [56];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_f8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  puVar8 = *(undefined8 **)(param_1 + 8);
  cVar1 = *(char *)((longlong)puVar8[1] + 0x19);
  puVar9 = puVar8;
  local_110 = puVar8;
  puVar7 = (undefined8 *)puVar8[1];
  local_100 = param_2;
  local_108 = param_1;
  while (cVar1 == '\0') {
    puVar2 = (ulonglong *)*param_3;
    puVar3 = (ulonglong *)puVar7[4];
    if ((uint)puVar3[1] != (uint)puVar2[1]) {
      uVar5 = FUN_1439eeb00(local_f0,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1c8
                           );
      uVar5 = FUN_1439eef00(uVar5,"Unsupported: type mismatch");
      FUN_1439eec50(&local_116,uVar5);
      DsDevice::~DsDevice(local_f0);
    }
    uVar4 = FUN_141515ef0(puVar3);
    switch(uVar4) {
    case 1:
      bVar10 = (int)(uint)*puVar3 < (int)(uint)*puVar2;
      break;
    case 2:
      bVar10 = (longlong)*puVar3 < (longlong)*puVar2;
      break;
    case 3:
      bVar10 = (uint)*puVar3 < (uint)*puVar2;
      break;
    case 4:
      bVar10 = *puVar3 < *puVar2;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
      uVar5 = FUN_1439eeb00(local_b8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1cf
                           );
      uVar5 = FUN_1439eef00(uVar5,"Unsupported");
      FUN_1439eec50(local_115,uVar5);
      DsDevice::~DsDevice(local_b8);
      goto switchD_143a0d5bf_default;
    case 7:
      bVar10 = (byte)*puVar3 < (byte)*puVar2;
      break;
    case 9:
      FUN_143925de0(*puVar3,*puVar2);
      bVar10 = (bool)(extraout_var >> 7);
      break;
    default:
      goto switchD_143a0d5bf_default;
    }
    if (bVar10 != false) {
      puVar6 = (undefined8 *)puVar7[2];
      goto LAB_143a0d758;
    }
switchD_143a0d5bf_default:
    if (*(char *)((longlong)puVar9 + 0x19) == '\0') goto switchD_143a0d681_default;
    puVar2 = (ulonglong *)puVar7[4];
    puVar3 = (ulonglong *)*param_3;
    if ((uint)puVar3[1] != (uint)puVar2[1]) {
      uVar5 = FUN_1439eeb00(local_f0,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1c8
                           );
      uVar5 = FUN_1439eef00(uVar5,"Unsupported: type mismatch");
      FUN_1439eec50(&local_118,uVar5);
      DsDevice::~DsDevice(local_f0);
    }
    uVar4 = FUN_141515ef0(puVar3);
    switch(uVar4) {
    case 1:
      bVar10 = (int)(uint)*puVar3 < (int)(uint)*puVar2;
      break;
    case 2:
      bVar10 = (longlong)*puVar3 < (longlong)*puVar2;
      break;
    case 3:
      bVar10 = (uint)*puVar3 < (uint)*puVar2;
      break;
    case 4:
      bVar10 = *puVar3 < *puVar2;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
      uVar5 = FUN_1439eeb00(local_80,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1cf
                           );
      uVar5 = FUN_1439eef00(uVar5,"Unsupported");
      FUN_1439eec50(&local_117,uVar5);
      DsDevice::~DsDevice(local_80);
      goto switchD_143a0d681_default;
    case 7:
      bVar10 = (byte)*puVar3 < (byte)*puVar2;
      break;
    case 9:
      FUN_143925de0(*puVar3,*puVar2);
      bVar10 = (bool)(extraout_var_00 >> 7);
      break;
    default:
      goto switchD_143a0d681_default;
    }
    if (bVar10 != false) {
      puVar9 = puVar7;
    }
switchD_143a0d681_default:
    puVar6 = (undefined8 *)*puVar7;
    puVar8 = puVar7;
LAB_143a0d758:
    puVar7 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x19);
  }
  puVar7 = puVar9;
  if (*(char *)((longlong)puVar9 + 0x19) != '\0') {
    puVar7 = (undefined8 *)(*(longlong *)(local_108 + 8) + 8);
  }
  cVar1 = *(char *)((longlong)*puVar7 + 0x19);
  puVar7 = (undefined8 *)*puVar7;
  local_110 = puVar8;
  do {
    puVar8 = puVar7;
    if (cVar1 != '\0') {
      *local_100 = (longlong)local_110;
      local_100[1] = (longlong)puVar9;
      return;
    }
    puVar2 = (ulonglong *)puVar8[4];
    puVar3 = (ulonglong *)*param_3;
    if ((uint)puVar3[1] != (uint)puVar2[1]) {
      uVar5 = FUN_1439eeb00(local_80,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1c8
                           );
      uVar5 = FUN_1439eef00(uVar5,"Unsupported: type mismatch");
      FUN_1439eec50(&local_117,uVar5);
      DsDevice::~DsDevice(local_80);
    }
    uVar4 = FUN_141515ef0(puVar3);
    switch(uVar4) {
    case 1:
      bVar10 = (int)(uint)*puVar3 < (int)(uint)*puVar2;
      break;
    case 2:
      bVar10 = (longlong)*puVar3 < (longlong)*puVar2;
      break;
    case 3:
      bVar10 = (uint)*puVar3 < (uint)*puVar2;
      break;
    case 4:
      bVar10 = *puVar3 < *puVar2;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
      uVar5 = FUN_1439eeb00(local_b8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1cf
                           );
      uVar5 = FUN_1439eef00(uVar5,"Unsupported");
      FUN_1439eec50(&local_118,uVar5);
      DsDevice::~DsDevice(local_b8);
      goto switchD_143a0d80d_default;
    case 7:
      bVar10 = (byte)*puVar3 < (byte)*puVar2;
      break;
    case 9:
      FUN_143925de0(*puVar3,*puVar2);
      bVar10 = (bool)(extraout_var_01 >> 7);
      break;
    default:
      goto switchD_143a0d80d_default;
    }
    if (bVar10 == false) {
switchD_143a0d80d_default:
      puVar7 = (undefined8 *)puVar8[2];
      puVar8 = puVar9;
    }
    else {
      puVar7 = (undefined8 *)*puVar8;
    }
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
    puVar9 = puVar8;
  } while( true );
}



// FUNCTION 143a0d960 FUN_143a0d960 body=639 status=ok
// SIG undefined FUN_143a0d960(void)

undefined8 *
FUN_143a0d960(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (0xfffffffffffffffd < *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  plVar6 = (longlong *)FUN_143a0d400(param_1,param_5);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  plVar6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*plVar1) {
    ((undefined8 *)*plVar1)[1] = plVar6;
    *(longlong **)*plVar1 = plVar6;
    *(longlong **)(*plVar1 + 0x10) = plVar6;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar6;
    if (param_4 == *(undefined8 **)(*plVar1 + 0x10)) {
      *(longlong **)(*plVar1 + 0x10) = plVar6;
    }
  }
  else {
    *param_4 = plVar6;
    if (param_4 == *(undefined8 **)*plVar1) {
      *(longlong **)*plVar1 = plVar6;
    }
  }
  cVar2 = *(char *)(plVar6[1] + 0x18);
  plVar11 = plVar6;
  do {
    if (cVar2 != '\0') {
      lVar8 = *(longlong *)(*plVar1 + 8);
      *param_2 = plVar6;
      *(undefined1 *)(lVar8 + 0x18) = 1;
      return param_2;
    }
    plVar3 = (longlong *)plVar11[1];
    plVar9 = plVar11 + 1;
    plVar10 = plVar3 + 1;
    lVar8 = *(longlong *)plVar3[1];
    if (plVar3 == (longlong *)lVar8) {
      lVar8 = ((longlong *)plVar3[1])[2];
      if (*(char *)(lVar8 + 0x18) != '\0') {
        plVar4 = (longlong *)plVar3[2];
        plVar7 = plVar3;
        if (plVar11 == plVar4) {
          plVar3[2] = *plVar4;
          if (*(char *)(*plVar4 + 0x19) == '\0') {
            *(longlong **)(*plVar4 + 8) = plVar3;
          }
          plVar4[1] = *plVar10;
          plVar7 = plVar4;
          plVar9 = plVar10;
          if (plVar3 == (longlong *)*(longlong *)(*plVar1 + 8)) {
            *(longlong **)(*plVar1 + 8) = plVar4;
            *plVar4 = (longlong)plVar3;
            *plVar10 = (longlong)plVar4;
            plVar11 = plVar3;
          }
          else {
            plVar11 = (longlong *)*plVar10;
            if (plVar3 == (longlong *)*plVar11) {
              *plVar11 = (longlong)plVar4;
              *plVar4 = (longlong)plVar3;
              *plVar10 = (longlong)plVar4;
              plVar11 = plVar3;
            }
            else {
              plVar11[2] = (longlong)plVar4;
              *plVar4 = (longlong)plVar3;
              *plVar10 = (longlong)plVar4;
              plVar11 = plVar3;
            }
          }
        }
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*plVar9 + 8);
        plVar10 = (longlong *)*plVar9;
        *plVar9 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*plVar1 + 8)) {
          *(longlong **)(*plVar1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar9;
        }
        else {
          plVar3 = (longlong *)plVar9[1];
          if (plVar9 == (longlong *)plVar3[2]) {
            plVar3[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
          else {
            *plVar3 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
        }
        goto LAB_143a0db95;
      }
LAB_143a0db06:
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(lVar8 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
      plVar11 = *(longlong **)(*plVar9 + 8);
    }
    else {
      if (*(char *)(lVar8 + 0x18) == '\0') goto LAB_143a0db06;
      if (plVar11 == (longlong *)*plVar3) {
        std::
        _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
        ::_Rrotate(plVar1,plVar3);
        plVar11 = plVar3;
      }
      *(undefined1 *)(plVar11[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar11[1] + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(plVar11[1] + 8);
      plVar10 = (longlong *)plVar9[2];
      plVar9[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar9;
      }
      plVar10[1] = plVar9[1];
      if (plVar9 == *(longlong **)(*plVar1 + 8)) {
        *(longlong **)(*plVar1 + 8) = plVar10;
      }
      else {
        puVar5 = (undefined8 *)plVar9[1];
        if (plVar9 == (longlong *)*puVar5) {
          *puVar5 = plVar10;
        }
        else {
          puVar5[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar9;
LAB_143a0db95:
      plVar9[1] = (longlong)plVar10;
    }
    cVar2 = *(char *)(plVar11[1] + 0x18);
  } while( true );
}



// FUNCTION 143a0dbe0 FUN_143a0dbe0 body=1025 status=ok
// SIG undefined FUN_143a0dbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143a0dbe0(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined1 param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte extraout_var;
  byte extraout_var_00;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 local_110;
  char local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104 [4];
  longlong local_100 [2];
  undefined1 local_f0 [56];
  undefined1 local_b8 [56];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_100[1] = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  bVar10 = true;
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 8))[1];
  puVar11 = *(undefined8 **)(param_1 + 8);
  local_108 = param_3;
  local_100[0] = param_1;
  while (lVar5 = local_100[0], *(char *)((longlong)puVar9 + 0x19) == '\0') {
    if (local_108 == '\0') {
      puVar1 = (ulonglong *)puVar9[4];
      puVar2 = (ulonglong *)*param_4;
      if ((uint)puVar2[1] != (uint)puVar1[1]) {
        uVar8 = FUN_1439eeb00(local_f0,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",
                              0x1c8);
        uVar8 = FUN_1439eef00(uVar8,"Unsupported: type mismatch");
        FUN_1439eec50(&local_105,uVar8);
        DsDevice::~DsDevice(local_f0);
      }
      uVar7 = FUN_141515ef0(puVar2);
      switch(uVar7) {
      case 1:
        bVar10 = (int)(uint)*puVar2 < (int)(uint)*puVar1;
        break;
      case 2:
        bVar10 = (longlong)*puVar2 < (longlong)*puVar1;
        break;
      case 3:
        bVar10 = (uint)*puVar2 < (uint)*puVar1;
        break;
      case 4:
        bVar10 = *puVar2 < *puVar1;
        break;
      case 5:
      case 6:
      case 8:
      case 10:
        uVar8 = FUN_1439eeb00(local_80,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",
                              0x1cf);
        uVar8 = FUN_1439eef00(uVar8,"Unsupported");
        FUN_1439eec50(local_104,uVar8);
        DsDevice::~DsDevice(local_80);
      default:
        bVar10 = false;
        break;
      case 7:
        bVar10 = (byte)*puVar2 < (byte)*puVar1;
        break;
      case 9:
        FUN_143925de0(*puVar2,*puVar1);
        bVar10 = (bool)(extraout_var_00 >> 7);
      }
    }
    else {
      puVar1 = (ulonglong *)*param_4;
      puVar2 = (ulonglong *)puVar9[4];
      if ((uint)puVar2[1] != (uint)puVar1[1]) {
        uVar8 = FUN_1439eeb00(local_f0,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",
                              0x1c8);
        uVar8 = FUN_1439eef00(uVar8,"Unsupported: type mismatch");
        FUN_1439eec50(&local_107,uVar8);
        DsDevice::~DsDevice(local_f0);
      }
      uVar7 = FUN_141515ef0(puVar2);
      switch(uVar7) {
      case 1:
        bVar10 = (int)(uint)*puVar1 <= (int)(uint)*puVar2;
        break;
      case 2:
        bVar10 = (longlong)*puVar1 <= (longlong)*puVar2;
        break;
      case 3:
        bVar10 = (uint)*puVar1 <= (uint)*puVar2;
        break;
      case 4:
        bVar10 = *puVar1 <= *puVar2;
        break;
      case 5:
      case 6:
      case 8:
      case 10:
        uVar8 = FUN_1439eeb00(local_b8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",
                              0x1cf);
        uVar8 = FUN_1439eef00(uVar8,"Unsupported");
        FUN_1439eec50(&local_106,uVar8);
        DsDevice::~DsDevice(local_b8);
      default:
        bVar10 = true;
        break;
      case 7:
        bVar10 = (byte)*puVar1 <= (byte)*puVar2;
        break;
      case 9:
        FUN_143925de0(*puVar2,*puVar1);
        bVar10 = (bool)(extraout_var >> 7 ^ 1);
      }
    }
    puVar11 = puVar9;
    if (bVar10 == false) {
      puVar9 = (undefined8 *)puVar9[2];
    }
    else {
      puVar9 = (undefined8 *)*puVar9;
    }
  }
  puVar9 = puVar11;
  local_118 = param_4;
  if (bVar10 != false) {
    if (puVar11 == (undefined8 *)**(undefined8 **)(local_100[0] + 8)) {
      local_110 = param_5;
      puVar9 = (undefined8 *)FUN_143a0d960(local_100[0],local_100,1,puVar11);
      *param_2 = *puVar9;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
      puVar9 = (undefined8 *)*puVar11;
      if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
        cVar6 = *(char *)((longlong)puVar9[2] + 0x19);
        puVar3 = (undefined8 *)puVar9[2];
        while (cVar6 == '\0') {
          cVar6 = *(char *)((longlong)puVar3[2] + 0x19);
          puVar9 = puVar3;
          puVar3 = (undefined8 *)puVar3[2];
        }
      }
      else {
        cVar6 = *(char *)((longlong)puVar11[1] + 0x19);
        puVar3 = (undefined8 *)puVar11[1];
        puVar9 = puVar11;
        while ((puVar4 = puVar3, cVar6 == '\0' && (puVar9 == (undefined8 *)*puVar4))) {
          cVar6 = *(char *)((longlong)puVar4[1] + 0x19);
          puVar3 = (undefined8 *)puVar4[1];
          puVar9 = puVar4;
        }
        if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
          puVar9 = puVar4;
        }
      }
    }
    else {
      puVar9 = (undefined8 *)puVar11[2];
    }
  }
  cVar6 = FUN_143a0efe0(local_100[0],puVar9[4],*param_4);
  if (cVar6 == '\0') {
    *param_2 = puVar9;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    local_110 = param_5;
    puVar9 = (undefined8 *)FUN_143a0d960(lVar5,local_100,bVar10,puVar11);
    *param_2 = *puVar9;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



// FUNCTION 143a0e040 FUN_143a0e040 body=65 status=ok
// SIG undefined FUN_143a0e040(void)

void FUN_143a0e040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_143a149f0();
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FMemory::operator_delete
                (*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 8) * 8,param_3,param_4,
                 uVar1);
    }
  }
  return;
}



// FUNCTION 143a0e090 thunk_FUN_1439fdc40 body=5 status=ok
// SIG undefined thunk_FUN_1439fdc40(void)

void thunk_FUN_1439fdc40(void)

{
  FUN_1439fdc40();
  return;
}



// FUNCTION 143a0e0a0 FUN_143a0e0a0 body=939 status=ok
// SIG undefined FUN_143a0e0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143a0e1d0) */
/* WARNING: Removing unreachable block (ram,0x000143a0e1f1) */

void FUN_143a0e0a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong local_e0;
  undefined1 local_d8 [32];
  longlong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_48;
  
  local_100 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = (longlong *)((ulonglong)local_118 & 0xffffffff00000000);
  lVar12 = *param_2;
  uVar3 = param_2[1];
  uVar11 = param_2[2];
  lVar14 = *param_3;
  local_110 = param_1;
  local_108 = lVar14;
  local_b8 = lVar12;
  uStack_b0 = uVar3;
  local_a8 = uVar11;
  if (lVar12 == lVar14) {
    return;
  }
LAB_143a0e120:
  FUN_143a0fc30(param_1[2],&local_b8,*(undefined8 *)(lVar12 + 0x10),0);
  if (local_b8 == 0) {
    lVar14 = *(longlong *)(lVar12 + 0x10);
    lVar13 = param_1[2];
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    FUN_143a0f7a0(&local_b8,lVar14);
    local_a8 = 0;
    plVar9 = (longlong *)FUN_143a14ff0(lVar13,local_d8,&local_b8);
    lVar13 = *plVar9;
    FUN_1439fdc40(&local_b8);
    lVar10 = *(longlong *)(lVar13 + 0x10);
    if (lVar10 == 0) {
      lVar10 = *local_110;
      if (lVar10 == 0) {
        lVar10 = operator_new(0x20);
        local_f8 = lVar10;
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          *(undefined4 *)(lVar10 + 8) = 0;
          FUN_143a0f7a0(lVar10,lVar14);
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *(undefined4 *)(lVar10 + 0x18) = 0;
        }
      }
      else {
        if (lVar10 == 0) {
          lVar10 = operator_new(0x20);
        }
        else {
          if (*(longlong *)(lVar10 + 0x70) != 0) {
            FUN_1439f01b0(lVar10,&.E::RTTI_Type_Descriptor,0x20);
          }
          lVar10 = FUN_1439efd10(lVar10,0x20);
        }
        lVar2 = *local_110;
        *(undefined4 *)(lVar10 + 8) = 0;
        FUN_143a0d3c0(lVar2,lVar10);
        *(undefined8 *)(lVar10 + 0x10) = 0;
        *(undefined4 *)(lVar10 + 0x18) = 0;
        FUN_143a0f7a0(lVar10,lVar14);
      }
      *(longlong *)(lVar13 + 0x10) = lVar10;
    }
    uVar4 = *(undefined4 *)(lVar14 + 0x14);
    uVar5 = *(undefined4 *)(lVar14 + 0x18);
    uVar6 = *(undefined4 *)(lVar14 + 0x1c);
    *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar14 + 0x10);
    *(undefined4 *)(lVar10 + 0x14) = uVar4;
    *(undefined4 *)(lVar10 + 0x18) = uVar5;
    *(undefined4 *)(lVar10 + 0x1c) = uVar6;
    param_1 = local_110;
    lVar14 = local_108;
  }
  lVar13 = *(longlong *)(lVar12 + 0x18);
  if (lVar13 == 0) {
    local_118 = (longlong *)0x0;
    uVar11 = *(longlong *)(uVar3 + 8) - 1U & uVar11;
    lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x20) + uVar11 * 8);
    if (lVar13 == lVar12) {
LAB_143a0e3cc:
      lVar13 = 0;
      uVar11 = uVar11 + 1;
      if (uVar11 < *(ulonglong *)(uVar3 + 8)) {
        lVar12 = *(longlong *)(uVar3 + 0x20);
        plVar9 = (longlong *)(lVar12 + uVar11 * 8);
        do {
          lVar10 = *plVar9;
          if (lVar10 != 0) {
            if (lVar10 != *(longlong *)(lVar12 + (uVar11 ^ 1) * 8)) goto LAB_143a0e3b5;
            if ((lVar10 != 0) && (lVar10 == *(longlong *)(lVar12 + (uVar11 ^ 1) * 8)))
            goto LAB_143a0e3bb;
          }
          uVar11 = uVar11 + 1;
          plVar9 = plVar9 + 1;
        } while (uVar11 < *(ulonglong *)(uVar3 + 8));
      }
      goto LAB_143a0e41b;
    }
    if ((lVar13 != 0) && (lVar13 != *(longlong *)(*(longlong *)(uVar3 + 0x20) + (uVar11 ^ 1) * 8)))
    {
      for (lVar13 = *(longlong *)(lVar13 + 0x18); lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x18)
          ) {
        if (lVar13 == lVar12) goto LAB_143a0e3cc;
      }
    }
    lVar12 = FUN_143a0fc30(uVar3,local_d8,lVar12,&local_118);
    uVar11 = *(ulonglong *)(lVar12 + 0x10);
    lVar12 = *(longlong *)(uVar3 + 0x20);
    lVar13 = *(longlong *)(lVar12 + uVar11 * 8);
    local_e0 = uVar11;
    if ((lVar13 == 0) || (lVar13 != *(longlong *)(lVar12 + (uVar11 ^ 1) * 8))) goto LAB_143a0e3cc;
    plVar9 = (longlong *)local_118[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x19);
      plVar7 = (longlong *)*plVar9;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar9 = plVar7;
        plVar7 = (longlong *)*plVar7;
      }
    }
    else {
      cVar1 = *(char *)(local_118[1] + 0x19);
      plVar8 = (longlong *)local_118[1];
      plVar7 = local_118;
      while ((plVar9 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)plVar9[2]))) {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar8 = (longlong *)plVar9[1];
        plVar7 = plVar9;
      }
    }
    if (plVar9 == *(longlong **)(lVar13 + 8)) {
      uVar11 = uVar11 + 2;
      lVar13 = 0;
      if (uVar11 < *(ulonglong *)(uVar3 + 8)) {
        plVar9 = (longlong *)(lVar12 + uVar11 * 8);
        do {
          lVar13 = *plVar9;
          if (lVar13 != 0) {
            if (lVar13 != *(longlong *)(lVar12 + (uVar11 ^ 1) * 8)) goto LAB_143a0e3b5;
            if ((lVar13 != 0) && (lVar13 == *(longlong *)(lVar12 + (uVar11 ^ 1) * 8)))
            goto LAB_143a0e3bb;
          }
          uVar11 = uVar11 + 1;
          plVar9 = plVar9 + 1;
          lVar13 = 0;
        } while (uVar11 < *(ulonglong *)(uVar3 + 8));
      }
      goto LAB_143a0e41b;
    }
    goto LAB_143a0e3c6;
  }
  goto LAB_143a0e41b;
LAB_143a0e3b5:
  lVar13 = *(longlong *)(lVar12 + uVar11 * 8);
  goto LAB_143a0e41b;
LAB_143a0e3bb:
  plVar9 = (longlong *)**(undefined8 **)(*(longlong *)(lVar12 + uVar11 * 8) + 8);
LAB_143a0e3c6:
  lVar13 = plVar9[4];
LAB_143a0e41b:
  lVar12 = lVar13;
  if (lVar13 == lVar14) {
    return;
  }
  goto LAB_143a0e120;
}



// FUNCTION 143a0e450 FUN_143a0e450 body=121 status=ok
// SIG undefined FUN_143a0e450(void)

undefined8 *
FUN_143a0e450(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = google::protobuf::internal::MapFieldBase::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 3,2,param_3,param_4,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = google::protobuf::internal::DynamicMapField::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_143a10eb0();
  param_1[0x11] = param_2;
  return param_1;
}



// FUNCTION 143a0e4d0 FUN_143a0e4d0 body=163 status=ok
// SIG undefined FUN_143a0e4d0(void)

undefined8 *
FUN_143a0e4d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = google::protobuf::internal::MapFieldBase::vftable;
  param_1[1] = param_3;
  param_1[2] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 3,2,param_3,param_4,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_143a0d3e0(param_3,param_1 + 3);
  *param_1 = google::protobuf::internal::DynamicMapField::vftable;
  param_1[0xe] = param_3;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_143a10eb0();
  param_1[0x11] = param_2;
  return param_1;
}



// FUNCTION 143a0e580 FUN_143a0e580 body=153 status=ok
// SIG undefined FUN_143a0e580(void)

undefined8 *
FUN_143a0e580(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  size_t _Size;
  void *_Dst;
  
  param_1[2] = param_1;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = param_4;
  if (param_2 < 8) {
    param_2 = 8;
  }
  _Size = param_2 * 8;
  if (param_4 == 0) {
    _Dst = (void *)operator_new(_Size);
  }
  else {
    if (*(longlong *)(param_4 + 0x70) != 0) {
      FUN_1439f01b0(param_4,&.E::RTTI_Type_Descriptor,_Size);
    }
    _Dst = (void *)FUN_1439efd10(param_4);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  param_1[4] = _Dst;
  param_1[3] = param_2;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 143a0e620 FUN_143a0e620 body=108 status=ok
// SIG undefined FUN_143a0e620(void)

void FUN_143a0e620(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143a148f0();
  if ((*param_1 == 0) && (lVar1 = param_1[2], lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      FUN_143a149f0(lVar1);
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        FMemory::operator_delete
                  (*(undefined8 *)(lVar1 + 0x20),*(longlong *)(lVar1 + 8) * 8,param_3,param_4,uVar2)
        ;
      }
    }
    FMemory::operator_delete(lVar1,0x30);
    return;
  }
  return;
}



// FUNCTION 143a0e690 FUN_143a0e690 body=59 status=ok
// SIG undefined FUN_143a0e690(void)

void FUN_143a0e690(undefined8 *param_1)

{
  *param_1 = google::protobuf::internal::MapFieldBase::vftable;
  if ((param_1[2] != 0) && (param_1[1] == 0)) {
    FUN_143a0f160(param_1[2],1);
  }
  _guard_xfg_dispatch_icall_nop(param_1 + 3);
  return;
}



// FUNCTION 143a0e6f0 FUN_143a0e6f0 body=66 status=ok
// SIG undefined FUN_143a0e6f0(void)

void FUN_143a0e6f0(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143a14c20(param_1,local_res8,*(undefined8 *)param_1[1],(undefined8 *)param_1[1],
                0xfffffffffffffffe);
  if (*param_1 == 0) {
    FMemory::operator_delete(param_1[1],0x28);
  }
  return;
}



// FUNCTION 143a0e740 FUN_143a0e740 body=177 status=ok
// SIG undefined FUN_143a0e740(void)

longlong FUN_143a0e740(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (param_1 != param_2) {
    FUN_143a148f0();
    local_18 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    puVar1 = (undefined8 *)FUN_143a14840(*(undefined8 *)(param_2 + 0x10),&local_28);
    local_18 = puVar1[2];
    local_68 = (undefined4)*puVar1;
    uStack_64 = (undefined4)((ulonglong)*puVar1 >> 0x20);
    uStack_60 = (undefined4)puVar1[1];
    uStack_5c = (undefined4)((ulonglong)puVar1[1] >> 0x20);
    local_28 = local_68;
    uStack_24 = uStack_64;
    uStack_20 = uStack_60;
    uStack_1c = uStack_5c;
    FUN_143a0e0a0(param_1,&local_28,&local_48);
  }
  return param_1;
}



// FUNCTION 143a0e800 FUN_143a0e800 body=409 status=ok
// SIG undefined FUN_143a0e800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a0e800(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != (int)param_2[1]) {
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1e4);
    uVar4 = FUN_1439eef00(uVar4,"Unsupported: type mismatch");
    FUN_1439eec50(local_58,uVar4);
    DsDevice::~DsDevice(local_48);
  }
  uVar2 = FUN_141515ef0(param_1);
  switch(uVar2) {
  case 1:
  case 3:
    uVar6 = (ulonglong)CONCAT31((int3)((uint)(int)*param_2 >> 8),(int)*param_1 == (int)*param_2);
    break;
  case 2:
  case 4:
    uVar6 = CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 == *param_2);
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1eb);
    uVar4 = FUN_1439eef00(uVar4,"Unsupported");
    FUN_1439eec50(local_58,uVar4);
    DsDevice::~DsDevice(local_48);
  default:
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1fa);
    uVar4 = FUN_1439eef00(uVar4,"Can\'t get here.");
    FUN_1439eec50(local_58,uVar4);
    puVar5 = (undefined8 *)DsDevice::~DsDevice(local_48);
LAB_143a0e924:
    uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
    break;
  case 7:
    uVar6 = (ulonglong)((char)*param_1 == (char)*param_2);
    break;
  case 9:
    puVar5 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)*param_2;
    _Buf2 = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      _Buf2 = (undefined8 *)*puVar1;
    }
    _Buf1 = puVar5;
    if (0xf < (ulonglong)puVar5[3]) {
      _Buf1 = (undefined8 *)*puVar5;
    }
    if (puVar5[2] == puVar1[2]) {
      iVar3 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,puVar5[2]);
      puVar5 = (undefined8 *)CONCAT44(extraout_var,iVar3);
      if (iVar3 == 0) {
        return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
      }
    }
    goto LAB_143a0e924;
  }
  return uVar6;
}



// FUNCTION 143a0e9d0 FUN_143a0e9d0 body=282 status=ok
// SIG undefined FUN_143a0e9d0(void)

longlong FUN_143a0e9d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40 [40];
  
  local_50 = 0xfffffffffffffffe;
  lVar1 = param_1[2];
  lVar4 = 0;
  local_60 = 0;
  FUN_143a0f7a0(local_68);
  local_58 = 0;
  plVar2 = (longlong *)FUN_143a14ff0(lVar1,local_40,local_68);
  lVar1 = *plVar2;
  FUN_1439fdc40(local_68);
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      lVar3 = operator_new(0x20);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 8) = 0;
        local_48 = lVar3;
        FUN_143a0f7a0(lVar3,param_2);
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x18) = 0;
        lVar4 = lVar3;
      }
      *(longlong *)(lVar1 + 0x10) = lVar4;
      lVar4 = lVar4 + 0x10;
    }
    else {
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        FUN_1439f01b0(lVar3,&.E::RTTI_Type_Descriptor,0x20);
      }
      lVar4 = FUN_1439efd10(lVar3,0x20);
      lVar3 = *param_1;
      *(undefined4 *)(lVar4 + 8) = 0;
      FUN_143a0d3c0(lVar3,lVar4);
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      FUN_143a0f7a0(lVar4,param_2);
      *(longlong *)(lVar1 + 0x10) = lVar4;
      lVar4 = lVar4 + 0x10;
    }
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x10) + 0x10;
  }
  return lVar4;
}



// FUNCTION 143a0eaf0 FUN_143a0eaf0 body=218 status=ok
// SIG undefined FUN_143a0eaf0(void)

longlong * FUN_143a0eaf0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *local_18 [2];
  
  local_18[0] = *(longlong **)(*param_1 + 0x18);
  if (local_18[0] != (longlong *)0x0) {
    *param_1 = (longlong)local_18[0];
    return param_1;
  }
  cVar3 = FUN_143a15190(param_1,local_18);
  if (cVar3 == '\0') {
    plVar4 = (longlong *)local_18[0][2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar4 + 0x19);
      plVar1 = (longlong *)*plVar4;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar1 + 0x19);
        plVar4 = plVar1;
        plVar1 = (longlong *)*plVar1;
      }
    }
    else {
      cVar3 = *(char *)(local_18[0][1] + 0x19);
      plVar2 = (longlong *)local_18[0][1];
      plVar1 = local_18[0];
      while ((plVar4 = plVar2, cVar3 == '\0' && (plVar1 == (longlong *)plVar4[2]))) {
        cVar3 = *(char *)(plVar4[1] + 0x19);
        plVar2 = (longlong *)plVar4[1];
        plVar1 = plVar4;
      }
    }
    if (plVar4 != *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[1] + 0x20) + param_1[2] * 8) + 8)) {
      *param_1 = plVar4[4];
      return param_1;
    }
    FUN_143a12460(param_1,param_1[2] + 2);
    return param_1;
  }
  FUN_143a12460(param_1,param_1[2] + 1);
  return param_1;
}



// FUNCTION 143a0ebd0 FUN_143a0ebd0 body=335 status=ok
// SIG undefined FUN_143a0ebd0(void)

longlong * FUN_143a0ebd0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_48 [3];
  ulonglong local_30;
  undefined1 local_28 [32];
  
  lVar7 = *param_1;
  local_48[0] = *(longlong **)(lVar7 + 0x18);
  if (local_48[0] != (longlong *)0x0) {
    *param_1 = (longlong)local_48[0];
    return param_1;
  }
  lVar2 = param_1[1];
  uVar6 = *(longlong *)(lVar2 + 8) - 1U & param_1[2];
  param_1[2] = uVar6;
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 8);
  if (lVar3 != lVar7) {
    if ((lVar3 != 0) && (lVar3 != *(longlong *)(*(longlong *)(lVar2 + 0x20) + (uVar6 ^ 1) * 8))) {
      for (lVar3 = *(longlong *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
        if (lVar3 == lVar7) goto LAB_143a0ecfb;
      }
    }
    lVar7 = FUN_143a0fc30(lVar2,local_28,lVar7,local_48);
    local_30 = *(ulonglong *)(lVar7 + 0x10);
    param_1[2] = local_30;
    lVar7 = *(longlong *)(*(longlong *)(param_1[1] + 0x20) + local_30 * 8);
    if ((lVar7 != 0) &&
       (lVar7 == *(longlong *)(*(longlong *)(param_1[1] + 0x20) + (local_30 ^ 1) * 8))) {
      plVar8 = (longlong *)local_48[0][2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = (longlong *)*plVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar8 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(local_48[0][1] + 0x19);
        plVar5 = (longlong *)local_48[0][1];
        plVar4 = local_48[0];
        while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar5 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
      }
      if (plVar8 != *(longlong **)(lVar7 + 8)) {
        *param_1 = plVar8[4];
        return param_1;
      }
      FUN_143a12460(param_1,local_30 + 2);
      return param_1;
    }
  }
LAB_143a0ecfb:
  FUN_143a12460(param_1,param_1[2] + 1);
  return param_1;
}



// FUNCTION 143a0ed20 FUN_143a0ed20 body=652 status=ok
// SIG undefined FUN_143a0ed20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a0ed20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [33];
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_58 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar3 = FUN_141515ef0(param_2);
  switch(uVar3) {
  case 1:
    uVar4 = FUN_143a10380(param_2);
    goto LAB_143a0eecc;
  case 2:
    uVar7 = FUN_143a105e0(param_2);
    uVar7 = (((uVar7 >> 0x28 & 0xff ^
              (((((uVar7 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar7 >> 8 & 0xff) *
                 0x100000001b3 ^ uVar7 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar7 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar7 >> 0x20 & 0xff) * 0x100000001b3) * 0x100000001b3 ^
             uVar7 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar7 >> 0x38) * 0x100000001b3;
    break;
  case 3:
    uVar4 = FUN_141529b00(param_2);
LAB_143a0eecc:
    bStack_67 = (byte)(uVar4 >> 8);
    bStack_66 = (byte)(uVar4 >> 0x10);
    bStack_65 = (byte)(uVar4 >> 0x18);
    uVar7 = ((((ulonglong)bStack_67 ^
              ((ulonglong)(uVar4 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
             (ulonglong)bStack_66) * 0x100000001b3 ^ (ulonglong)bStack_65) * 0x100000001b3;
    break;
  case 4:
    uVar7 = FUN_143a10c10(param_2);
    uVar7 = (((uVar7 >> 0x28 & 0xff ^
              (((((uVar7 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar7 >> 8 & 0xff) *
                 0x100000001b3 ^ uVar7 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar7 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar7 >> 0x20 & 0xff) * 0x100000001b3) * 0x100000001b3 ^
             uVar7 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar7 >> 0x38) * 0x100000001b3;
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    uVar5 = FUN_1439eeb00(local_50,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x33a);
    uVar5 = FUN_1439eef00(uVar5,"Unsupported");
    FUN_1439eec50(local_60,uVar5);
    DsDevice::~DsDevice(local_50);
  default:
    uVar5 = FUN_1439eeb00(local_50,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x349);
    uVar5 = FUN_1439eef00(uVar5,"Can\'t get here.");
    FUN_1439eec50(local_60,uVar5);
    DsDevice::~DsDevice(local_50);
    uVar7 = 0;
    break;
  case 7:
    bVar2 = FUN_143a0fd90(param_2);
    uVar7 = (ulonglong)bVar2;
    break;
  case 9:
    pcVar6 = (char *)FUN_1415060c0(param_2);
    if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
      pcVar6 = *(char **)pcVar6;
    }
    uVar7 = 0;
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      uVar7 = uVar7 * 5 + (longlong)cVar1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
  }
  return uVar7;
}



// FUNCTION 143a0efe0 FUN_143a0efe0 body=333 status=ok
// SIG undefined FUN_143a0efe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a0efe0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_97 [7];
  undefined8 local_90;
  undefined1 local_88 [56];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_90 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((uint)param_2[1] != (uint)param_3[1]) {
    uVar3 = FUN_1439eeb00(local_88,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1c8);
    uVar3 = FUN_1439eef00(uVar3,"Unsupported: type mismatch");
    FUN_1439eec50(&local_98,uVar3);
    DsDevice::~DsDevice(local_88);
  }
  iVar1 = FUN_141515ef0(param_2);
  uVar4 = (ulonglong)(iVar1 - 1U);
  switch(iVar1 - 1U) {
  case 0:
    uVar4 = (ulonglong)
            CONCAT31((int3)((uint)*param_3 >> 8),(int)(uint)*param_2 < (int)(uint)*param_3);
    break;
  case 1:
    uVar4 = CONCAT71((int7)(*param_3 >> 8),(longlong)*param_2 < (longlong)*param_3);
    break;
  case 2:
    uVar4 = (ulonglong)CONCAT31((int3)((uint)*param_3 >> 8),(uint)*param_2 < (uint)*param_3);
    break;
  case 3:
    uVar4 = CONCAT71((int7)(*param_3 >> 8),*param_2 < *param_3);
    break;
  case 4:
  case 5:
  case 7:
  case 9:
    uVar3 = FUN_1439eeb00(local_50,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1cf);
    uVar3 = FUN_1439eef00(uVar3,"Unsupported");
    FUN_1439eec50(local_97,uVar3);
    uVar4 = DsDevice::~DsDevice(local_50);
  default:
    uVar4 = uVar4 & 0xffffffffffffff00;
    break;
  case 6:
    uVar4 = (ulonglong)((byte)*param_2 < (byte)*param_3);
    break;
  case 8:
    uVar2 = FUN_143925de0(*param_2,*param_3);
    uVar4 = (ulonglong)(uVar2 >> 0x1f);
  }
  return uVar4;
}



// FUNCTION 143a0f160 FUN_143a0f160 body=168 status=ok
// SIG undefined FUN_143a0f160(void)

longlong * FUN_143a0f160(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  
  piVar3 = (int *)param_1[2];
  if ((piVar3 != (int *)0x0) && (*param_1 == 0)) {
    iVar1 = *piVar3;
    if (0 < (longlong)iVar1) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(piVar3 + lVar4 * 2 + 2);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar1);
      piVar3 = (int *)param_1[2];
    }
    FMemory::operator_delete(piVar3,(longlong)*(int *)((longlong)param_1 + 0xc) * 8 + 8);
  }
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143a0f210 FUN_143a0f210 body=365 status=ok
// SIG undefined FUN_143a0f210(void)

undefined8 * FUN_143a0f210(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  undefined1 local_28 [32];
  
  *param_1 = google::protobuf::internal::DynamicMapField::vftable;
  plVar3 = (longlong *)FUN_143a14840(param_1[0x10],local_28,param_3,param_4,0xfffffffffffffffe);
  local_40 = *plVar3;
  lStack_38 = plVar3[1];
  local_30 = plVar3[2];
  while (local_40 != 0) {
    lVar1 = *(longlong *)(local_40 + 0x10);
    switch(*(undefined4 *)(lVar1 + 0x18)) {
    case 1:
    case 3:
    case 6:
    case 8:
      FMemory::operator_delete(*(undefined8 *)(lVar1 + 0x10),4);
      break;
    case 2:
    case 4:
    case 5:
      FMemory::operator_delete(*(undefined8 *)(lVar1 + 0x10),8);
      break;
    case 7:
      FMemory::operator_delete(*(undefined8 *)(lVar1 + 0x10),1);
      break;
    case 9:
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _scalar_deleting_destructor_(*(longlong *)(lVar1 + 0x10),1);
      }
      break;
    case 10:
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_143a0eaf0(&local_40);
  }
  FUN_143a148f0(param_1 + 0xe);
  FUN_143a0e620(param_1 + 0xe);
  *param_1 = google::protobuf::internal::MapFieldBase::vftable;
  if ((param_1[2] != 0) && (param_1[1] == 0)) {
    FUN_143a0f160(param_1[2],1);
  }
  _guard_xfg_dispatch_icall_nop(param_1 + 3);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143a0f3b0 FUN_143a0f3b0 body=493 status=ok
// SIG undefined FUN_143a0f3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a0f3b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_68 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_30 = 0;
  uStack_28 = 0xf;
  local_40 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_40,"value",5);
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                     (*(longlong **)(param_1 + 0x88),local_60);
  uVar4 = FUN_143a3f170(*puVar3,&local_40);
  if (0xf < uStack_28) {
    uVar8 = uStack_28 + 1;
    lVar1 = CONCAT71(uStack_3f,local_40);
    lVar6 = lVar1;
    if (0xfff < uVar8) {
      uVar8 = uStack_28 + 0x28;
      lVar6 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar6,uVar8);
  }
  local_30 = 0;
  uStack_28 = 0xf;
  local_40 = 0;
  iVar2 = FUN_143a009a0(uVar4);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4);
  iVar2 = FUN_143a009a0(uVar4);
  switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar2 * 4)) {
  case 1:
  case 3:
  case 6:
  case 8:
    puVar3 = (undefined8 *)operator_new();
    if (puVar3 == (undefined8 *)0x0) {
LAB_143a0f4e4:
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)puVar3 = 0;
    }
    break;
  case 2:
  case 4:
  case 5:
    puVar3 = (undefined8 *)operator_new();
    if (puVar3 == (undefined8 *)0x0) goto LAB_143a0f4e4;
    *puVar3 = 0;
    break;
  case 7:
    puVar3 = (undefined8 *)operator_new();
    if (puVar3 == (undefined8 *)0x0) goto LAB_143a0f4e4;
    *(undefined1 *)puVar3 = 0;
    break;
  case 9:
    puVar5 = (undefined1 *)operator_new(0x20);
    if (puVar5 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0xf;
      *puVar5 = 0;
      *param_2 = puVar5;
      return;
    }
    *param_2 = 0;
    return;
  case 10:
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                      (*(longlong **)(param_1 + 0x88),local_50);
    plVar7 = (longlong *)
             (**(code **)(**(longlong **)(lVar6 + 8) + 0xd0))
                       (*(longlong **)(lVar6 + 8),*(undefined8 *)(param_1 + 0x88),uVar4,0);
    puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7);
    break;
  default:
    goto switchD_143a0f4ca_default;
  }
  *param_2 = puVar3;
switchD_143a0f4ca_default:
  return;
}



// FUNCTION 143a0f5d0 FUN_143a0f5d0 body=359 status=ok
// SIG undefined FUN_143a0f5d0(void)

void FUN_143a0f5d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  plVar3 = (longlong *)FUN_143a14840(*(undefined8 *)(param_1 + 0x80),local_20);
  local_28 = plVar3[2];
  local_38 = *plVar3;
  lStack_30 = plVar3[1];
  while (local_38 != 0) {
    lVar1 = *(longlong *)(local_38 + 0x10);
    switch(*(undefined4 *)(lVar1 + 0x18)) {
    case 1:
    case 3:
    case 6:
    case 8:
      FMemory::operator_delete(*(undefined8 *)(lVar1 + 0x10),4);
      break;
    case 2:
    case 4:
    case 5:
      FMemory::operator_delete(*(undefined8 *)(lVar1 + 0x10),8);
      break;
    case 7:
      FMemory::operator_delete(*(undefined8 *)(lVar1 + 0x10),1);
      break;
    case 9:
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _scalar_deleting_destructor_(*(longlong *)(lVar1 + 0x10),1);
      }
      break;
    case 10:
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_143a0eaf0(&local_38);
  }
  FUN_143a148f0(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1439fca10();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 143a0f760 FUN_143a0f760 body=53 status=ok
// SIG undefined FUN_143a0f760(void)

bool FUN_143a0f760(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong local_28 [4];
  
  lVar1 = (**(code **)(*param_1 + 0x90))();
  FUN_143a0fc30(*(undefined8 *)(lVar1 + 0x10),local_28,param_2,0);
  return local_28[0] != 0;
}



// FUNCTION 143a0f7a0 FUN_143a0f7a0 body=222 status=ok
// SIG undefined FUN_143a0f7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a0f7a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_141515ef0(param_2);
  FUN_141514070(param_1,uVar1);
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
  case 3:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    break;
  case 2:
  case 4:
    *param_1 = *param_2;
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    uVar2 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x205);
    uVar2 = FUN_1439eef00(uVar2,"Unsupported");
    FUN_1439eec50(local_58,uVar2);
    DsDevice::~DsDevice(local_48);
    break;
  case 7:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    break;
  case 9:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (*param_1,*param_2);
  }
  return;
}



// FUNCTION 143a0f8b0 FUN_143a0f8b0 body=105 status=ok
// SIG undefined FUN_143a0f8b0(void)

void FUN_143a0f8b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)*param_2;
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar5 = FUN_141515ef0(param_3 + 2);
  FUN_141514070(param_2 + 2,uVar5);
  *(int *)(param_2 + 5) = (int)param_3[5];
                    /* WARNING: Could not recover jumptable at 0x000143a0f912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 143a0f920 FUN_143a0f920 body=118 status=ok
// SIG undefined FUN_143a0f920(void)

longlong FUN_143a0f920(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 local_28 [16];
  
  lVar3 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + param_2 * 8);
  while (lVar2 != 0) {
    local_res8 = lVar2;
    FUN_143a0dbe0(param_3,local_28,0,&local_res8);
    plVar1 = (longlong *)(lVar2 + 0x18);
    lVar3 = lVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = 0;
  }
  return lVar3;
}



// FUNCTION 143a0f9a0 FUN_143a0f9a0 body=109 status=ok
// SIG undefined FUN_143a0f9a0(void)

void FUN_143a0f9a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  switch((int)param_1[1]) {
  case 1:
  case 3:
  case 6:
  case 8:
    FMemory::operator_delete(*param_1,4);
    return;
  case 2:
  case 4:
  case 5:
    FMemory::operator_delete(*param_1,8);
    return;
  case 7:
    FMemory::operator_delete(*param_1,1);
    return;
  case 9:
    if (*param_1 != 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _scalar_deleting_destructor_(*param_1,1);
      return;
    }
    break;
  case 10:
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0fa09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a0fa40 FUN_143a0fa40 body=13 status=ok
// SIG undefined FUN_143a0fa40(void)

void FUN_143a0fa40(undefined8 param_1,undefined8 *param_2)

{
  FMemory::operator_delete(*param_2,0x18);
  return;
}



// FUNCTION 143a0fa50 FUN_143a0fa50 body=291 status=ok
// SIG undefined FUN_143a0fa50(void)

undefined8 FUN_143a0fa50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_143a12920();
  FUN_143a0fc30(*(undefined8 *)(param_1 + 0x80),&local_78,param_2,0);
  uStack_b0 = local_70;
  local_a8 = local_68;
  uVar2 = 0;
  local_b8 = local_78;
  local_88 = 0;
  local_48 = local_68;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_58 = local_78;
  uStack_50 = local_70;
  if (local_78 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_143a0f9a0(*(longlong *)(local_78 + 0x10) + 0x10);
    local_b8 = local_78;
    uStack_b0 = local_70;
    local_a8 = local_68;
    if ((*(longlong *)(param_1 + 0x70) == 0) && (lVar1 = *(longlong *)(local_78 + 0x10), lVar1 != 0)
       ) {
      FUN_1439fdc40(lVar1);
      FMemory::operator_delete(lVar1,0x20);
    }
    FUN_143a0eaf0(&local_b8);
    local_98 = local_78;
    uStack_90 = local_70;
    local_88 = local_68;
    FUN_143a14dd0(*(undefined8 *)(param_1 + 0x80),&local_98);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143a0fb80 FUN_143a0fb80 body=98 status=ok
// SIG undefined FUN_143a0fb80(void)

void FUN_143a0fb80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_143a14c20(param_2,local_res8,*(undefined8 *)param_2[1],(undefined8 *)param_2[1],
                0xfffffffffffffffe);
  if (*param_2 == 0) {
    FMemory::operator_delete(param_2[1],0x28);
  }
  if (lVar1 == 0) {
    FMemory::operator_delete(param_2,0x18);
  }
  return;
}



// FUNCTION 143a0fbf0 FUN_143a0fbf0 body=16 status=ok
// SIG undefined FUN_143a0fbf0(void)

undefined8 FUN_143a0fbf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  return CONCAT71((int7)((ulonglong)*param_3 >> 8),*(longlong *)*param_2 == *(longlong *)*param_3);
}



// FUNCTION 143a0fc00 FUN_143a0fc00 body=45 status=ok
// SIG undefined FUN_143a0fc00(void)

longlong FUN_143a0fc00(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_2) {
    return *(longlong *)(param_3 + 0x18);
  }
  uVar1 = FUN_143a0fc00();
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  return param_3;
}



// FUNCTION 143a0fc30 FUN_143a0fc30 body=349 status=ok
// SIG undefined FUN_143a0fc30(void)

longlong * FUN_143a0fc30(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong local_68;
  
  lVar3 = FUN_143a0ed20(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar6 = *(longlong *)(param_1 + 0x10) + lVar3 & *(longlong *)(param_1 + 8) - 1U;
  local_68 = *(longlong *)(lVar1 + uVar6 * 8);
  if (local_68 != 0) {
    if (local_68 == *(longlong *)(lVar1 + (uVar6 ^ 1) * 8)) {
      if ((local_68 != 0) && (local_68 == *(longlong *)(lVar1 + (uVar6 ^ 1) * 8))) {
        uVar6 = uVar6 & 0xfffffffffffffffe;
        lVar1 = *(longlong *)(lVar1 + uVar6 * 8);
        puVar4 = *(undefined8 **)(lVar1 + 8);
        puVar5 = puVar4;
        puVar7 = (undefined8 *)puVar4[1];
        if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
          do {
            puVar5 = puVar7;
            cVar2 = FUN_143a0efe0(lVar1,puVar5[4],param_3);
            if (cVar2 == '\0') {
              puVar7 = (undefined8 *)*puVar5;
            }
            else {
              puVar7 = (undefined8 *)puVar5[2];
              puVar5 = puVar4;
            }
            puVar4 = puVar5;
          } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
          puVar4 = *(undefined8 **)(lVar1 + 8);
        }
        if (puVar5 == puVar4) {
LAB_143a0fd6a:
          puVar5 = puVar4;
        }
        else {
          cVar2 = FUN_143a0efe0(lVar1,param_3,puVar5[4]);
          puVar4 = *(undefined8 **)(lVar1 + 8);
          if (cVar2 != '\0') goto LAB_143a0fd6a;
        }
        if (puVar5 != puVar4) {
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar5;
          }
          local_68 = puVar5[4];
LAB_143a0fcce:
          *param_2 = local_68;
          param_2[1] = param_1;
          param_2[2] = uVar6;
          goto LAB_143a0fcb2;
        }
      }
    }
    else {
      do {
        cVar2 = FUN_143a0e800(local_68,param_3);
        if (cVar2 != '\0') goto LAB_143a0fcce;
        local_68 = *(longlong *)(local_68 + 0x18);
      } while (local_68 != 0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_143a0fcb2:
  param_2[3] = uVar6;
  return param_2;
}



// FUNCTION 143a0fd90 FUN_143a0fd90 body=297 status=ok
// SIG undefined FUN_143a0fd90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143a0fd90(undefined1 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_141515ef0();
  if (iVar2 != 7) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1bb);
    iVar2 = FUN_141515ef0(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapKey::GetBoolValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,&DAT_145cbec70);
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *param_1;
}



// FUNCTION 143a0fec0 FUN_143a0fec0 body=299 status=ok
// SIG undefined FUN_143a0fec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143a0fec0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 7) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x285);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetBoolValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,&DAT_145cbec70);
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined1 *)*param_1;
}



// FUNCTION 143a0fff0 FUN_143a0fff0 body=300 status=ok
// SIG undefined FUN_143a0fff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a0fff0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 5) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x299);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetDoubleValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"double");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined8 *)*param_1;
}



// FUNCTION 143a10120 FUN_143a10120 body=298 status=ok
// SIG undefined FUN_143a10120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a10120(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 8) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x28a);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetEnumValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,&DAT_145cbeca0);
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined4 *)*param_1;
}



// FUNCTION 143a10250 FUN_143a10250 body=300 status=ok
// SIG undefined FUN_143a10250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a10250(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 6) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x294);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetFloatValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"float");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined4 *)*param_1;
}



// FUNCTION 143a10380 FUN_143a10380 body=296 status=ok
// SIG undefined FUN_143a10380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a10380(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_141515ef0();
  if (iVar2 != 1) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1b1);
    iVar2 = FUN_141515ef0(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapKey::GetInt32Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"int32");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *param_1;
}



// FUNCTION 143a104b0 FUN_143a104b0 body=298 status=ok
// SIG undefined FUN_143a104b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a104b0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 1) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x27b);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetInt32Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"int32");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined4 *)*param_1;
}



// FUNCTION 143a105e0 FUN_143a105e0 body=296 status=ok
// SIG undefined FUN_143a105e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a105e0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_141515ef0();
  if (iVar2 != 2) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1a7);
    iVar2 = FUN_141515ef0(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapKey::GetInt64Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"int64");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *param_1;
}



// FUNCTION 143a10710 FUN_143a10710 body=299 status=ok
// SIG undefined FUN_143a10710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a10710(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 2) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x271);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetInt64Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"int64");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined8 *)*param_1;
}



// FUNCTION 143a10840 FUN_143a10840 body=24 status=ok
// SIG undefined FUN_143a10840(void)

longlong FUN_143a10840(longlong param_1)

{
  FUN_143a12920();
  return param_1 + 0x70;
}



// FUNCTION 143a10860 FUN_143a10860 body=296 status=ok
// SIG undefined FUN_143a10860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a10860(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 10) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x29f);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetMessageValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"message");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *param_1;
}



// FUNCTION 143a10990 FUN_143a10990 body=24 status=ok
// SIG undefined FUN_143a10990(void)

undefined8 FUN_143a10990(longlong param_1)

{
  FUN_143a13410();
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 143a109b0 FUN_143a109b0 body=296 status=ok
// SIG undefined FUN_143a109b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a109b0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 9) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x28f);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetStringValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"string");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *param_1;
}



// FUNCTION 143a10ae0 FUN_143a10ae0 body=298 status=ok
// SIG undefined FUN_143a10ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143a10ae0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 3) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x280);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetUInt32Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"uint32");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined4 *)*param_1;
}



// FUNCTION 143a10c10 FUN_143a10c10 body=296 status=ok
// SIG undefined FUN_143a10c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a10c10(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_141515ef0();
  if (iVar2 != 4) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x1ac);
    iVar2 = FUN_141515ef0(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapKey::GetUInt64Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"uint64");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *param_1;
}



// FUNCTION 143a10d40 FUN_143a10d40 body=299 status=ok
// SIG undefined FUN_143a10d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a10d40(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_143a0d230();
  if (iVar2 != 4) {
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x276);
    iVar2 = FUN_143a0d230(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapValueRef::GetUInt64Value");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"uint64");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
  }
  return *(undefined8 *)*param_1;
}



// FUNCTION 143a10e70 FUN_143a10e70 body=50 status=ok
// SIG undefined FUN_143a10e70(void)

void FUN_143a10e70(longlong *param_1,undefined8 *param_2)

{
  FUN_143a0ebd0(*param_2);
                    /* WARNING: Could not recover jumptable at 0x000143a10e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 143a10eb0 FUN_143a10eb0 body=166 status=ok
// SIG undefined FUN_143a10eb0(void)

void FUN_143a10eb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    uVar1 = operator_new(0x30);
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = FUN_143a0e580(uVar1,0,uVar1 & 0xff,0);
    }
    param_1[2] = lVar2;
    return;
  }
  if (*(longlong *)(lVar2 + 0x70) != 0) {
    FUN_1439f01b0(lVar2,&google::protobuf::
                         Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::
                         RTTI_Type_Descriptor,0x30,param_4,0xfffffffffffffffe);
  }
  uVar3 = FUN_1439efdc0(lVar2,0x30,FUN_143a0e040);
  lVar2 = FUN_143a0e580(uVar3,0,local_res8,lVar2);
  param_1[2] = lVar2;
  return;
}



// FUNCTION 143a10f60 FUN_143a10f60 body=202 status=ok
// SIG undefined FUN_143a10f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a10f60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_58 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)0x0;
  local_60 = (undefined8 *)((ulonglong)local_60 & 0xffffffff00000000);
  local_60 = (undefined8 *)operator_new(0x18);
  if (local_60 != (undefined8 *)0x0) {
    *local_60 = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    puVar1 = local_60;
  }
  *param_2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = FUN_1439eeb00(local_50,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field_inl.h",
                          0x8e);
    local_60 = (undefined8 *)CONCAT44(local_60._4_4_,1);
    uVar2 = FUN_1439eef00(uVar2,"CHECK failed: map_iter->iter_ != NULL: ");
    FUN_1439eec50(local_68,uVar2);
    DsDevice::~DsDevice(local_50);
  }
  return;
}



// FUNCTION 143a11030 FUN_143a11030 body=154 status=ok
// SIG undefined FUN_143a11030(void)

ulonglong FUN_143a11030(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong local_28 [4];
  
  lVar2 = (**(code **)(*param_1 + 0x98))();
  FUN_143a0fc30(*(undefined8 *)(lVar2 + 0x10),local_28,param_2,0);
  if (local_28[0] == 0) {
    puVar3 = (ulonglong *)FUN_143a0e9d0(param_1 + 0xe,param_2);
    FUN_143a0f3b0(param_1,puVar3);
    *(int *)(param_3 + 1) = (int)puVar3[1];
    uVar1 = *puVar3;
    *param_3 = uVar1;
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  lVar2 = *(longlong *)(local_28[0] + 0x10);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar2 + 0x18);
  uVar1 = *(ulonglong *)(lVar2 + 0x10);
  *param_3 = uVar1;
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143a110d0 FUN_143a110d0 body=484 status=ok
// SIG undefined FUN_143a110d0(void)

longlong * FUN_143a110d0(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48 [2];
  
  local_48[1] = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8);
  if (lVar1 == 0) {
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8) = param_4;
    local_68 = param_4;
  }
  else {
    uVar5 = param_3 ^ 1;
    if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar5 * 8)) {
      FUN_143a112c0(param_1,param_2);
      return param_2;
    }
    uVar4 = 0;
    lVar2 = lVar1;
    do {
      uVar4 = uVar4 + 1;
      lVar2 = *(longlong *)(lVar2 + 0x18);
    } while (lVar2 != 0);
    if (uVar4 < 8) {
      *(longlong *)(param_4 + 0x18) = lVar1;
      *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8) = param_4;
      *param_2 = param_4;
      param_2[1] = param_1;
      param_2[2] = param_3;
      return param_2;
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 == 0) {
      uVar3 = operator_new(0x18);
    }
    else {
      if (*(longlong *)(lVar1 + 0x70) != 0) {
        FUN_1439f01b0(lVar1,&.E::RTTI_Type_Descriptor,0x18);
      }
      uVar3 = FUN_1439efd10(lVar1,0x18);
    }
    local_68 = *(longlong *)(param_1 + 0x28);
    puStack_60 = (undefined8 *)0x0;
    local_58 = 0;
    puStack_60 = (undefined8 *)FUN_143a14340(&local_68);
    local_48[0] = local_68;
    FUN_143a0d2d0(uVar3,&local_68,local_48);
    FUN_143a14c20(&local_68,local_48,*puStack_60,puStack_60);
    if (local_68 == 0) {
      FMemory::operator_delete(puStack_60,0x28);
    }
    FUN_143a0f920(param_1,uVar5,uVar3);
    FUN_143a0f920(param_1,param_3,uVar3);
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar5 * 8) = uVar3;
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_3 * 8) = uVar3;
    *(undefined8 *)(param_4 + 0x18) = 0;
    local_48[0] = param_4;
    FUN_143a0dbe0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_3 * 8),&local_68,0,local_48,
                  local_50);
    local_68 = *(longlong *)(local_68 + 0x20);
    param_3 = param_3 & 0xfffffffffffffffe;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x18);
  if (param_3 < *(ulonglong *)(param_1 + 0x18)) {
    uVar5 = param_3;
  }
  *(ulonglong *)(param_1 + 0x18) = uVar5;
  *param_2 = local_68;
  param_2[1] = param_1;
  param_2[2] = param_3;
  return param_2;
}



// FUNCTION 143a112c0 FUN_143a112c0 body=128 status=ok
// SIG undefined FUN_143a112c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143a112c0(longlong param_1,undefined8 *param_2,ulonglong param_3,longlong param_4)

{
  undefined1 auStack_78 [56];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_4 + 0x18) = 0;
  local_40 = param_4;
  FUN_143a0dbe0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_3 * 8),local_38,0,&local_40);
  *param_2 = *(undefined8 *)(local_38[0] + 0x20);
  param_2[1] = param_1;
  param_2[2] = param_3 & 0xfffffffffffffffe;
  return param_2;
}



// FUNCTION 143a11340 FUN_143a11340 body=10 status=ok
// SIG undefined FUN_143a11340(void)

undefined4 FUN_143a11340(longlong param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x68) >> 8),*(int *)(param_1 + 0x68) != 1);
}



// FUNCTION 143a11350 FUN_143a11350 body=9 status=ok
// SIG undefined FUN_143a11350(void)

undefined4 FUN_143a11350(longlong param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x68) >> 8),*(int *)(param_1 + 0x68) != 0);
}



// FUNCTION 143a11360 FUN_143a11360 body=131 status=ok
// SIG undefined FUN_143a11360(void)

void FUN_143a11360(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_28 [32];
  
  lVar3 = (**(code **)(*param_1 + 0x90))();
  puVar4 = (undefined8 *)FUN_143a14840(*(undefined8 *)(lVar3 + 0x10),local_28);
  uVar1 = puVar4[2];
  puVar2 = (undefined4 *)*param_2;
  local_58 = (undefined4)*puVar4;
  uStack_54 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  uStack_50 = (undefined4)puVar4[1];
  uStack_4c = (undefined4)((ulonglong)puVar4[1] >> 0x20);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = uStack_50;
  puVar2[3] = uStack_4c;
  *(undefined8 *)(puVar2 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000143a113dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 143a113f0 FUN_143a113f0 body=53 status=ok
// SIG undefined FUN_143a113f0(void)

void FUN_143a113f0(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x90))();
  param_2 = (undefined8 *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 143a11430 FUN_143a11430 body=3728 status=ok
// SIG undefined FUN_143a11430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a11430(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong *plVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 local_18e;
  undefined1 local_18d;
  undefined1 local_18c;
  undefined1 local_18b;
  undefined1 local_18a;
  undefined1 local_189;
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  longlong *local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ulonglong local_160;
  undefined1 local_158 [16];
  ulonglong local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  ulonglong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118 [32];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined1 local_c0 [56];
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_128 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_184 = 0;
  local_180 = (longlong *)((ulonglong)local_180 & 0xffffffff00000000);
  local_198 = param_1;
  lVar9 = (**(code **)(*param_1 + 0x98))();
  local_178 = lVar9;
  puVar10 = (undefined8 *)FUN_143a14840(*(undefined8 *)(param_2 + 0x80),local_158);
  plVar11 = (longlong *)*puVar10;
  uVar13 = puVar10[1];
  uVar14 = puVar10[2];
  local_170._0_4_ = SUB84(plVar11,0);
  local_170._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
  uStack_168._0_4_ = (undefined4)uVar13;
  uStack_168._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_160 = uVar14;
  local_148 = uVar14;
  local_130 = uVar14;
  uVar19 = 0;
  plVar3 = plVar11;
  local_140 = (undefined4)local_170;
  uStack_13c = local_170._4_4_;
  uStack_138 = (undefined4)uStack_168;
  uStack_134 = uStack_168._4_4_;
joined_r0x000143a114e7:
  do {
    uStack_168 = uVar13;
    local_170 = plVar3;
    plVar5 = plVar11;
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    FUN_143a0fc30(*(undefined8 *)(lVar9 + 0x10),&local_f8,plVar5[2],0);
    if (CONCAT71(uStack_f7,local_f8) == 0) {
      lVar9 = plVar5[2];
      lVar15 = param_1[0x10];
      local_f0 = 0;
      FUN_143a0f7a0(&local_f8,lVar9);
      local_e8 = 0;
      plVar11 = (longlong *)FUN_143a14ff0(lVar15,local_118,&local_f8);
      lVar15 = *plVar11;
      FUN_1439fdc40(&local_f8);
      lVar12 = *(longlong *)(lVar15 + 0x10);
      if (lVar12 == 0) {
        lVar12 = param_1[0xe];
        if (lVar12 == 0) {
          lVar12 = operator_new(0x20);
          local_120 = lVar12;
          if (lVar12 == 0) {
            lVar12 = 0;
          }
          else {
            *(undefined4 *)(lVar12 + 8) = 0;
            FUN_143a0f7a0(lVar12,lVar9);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            *(undefined4 *)(lVar12 + 0x18) = 0;
          }
        }
        else {
          if ((char)uVar19 < '\0') {
            uVar19 = uVar19 & 0xffffff7f;
            local_184 = uVar19;
            DsDevice::~DsDevice(local_c0);
          }
          if (lVar12 == 0) {
            lVar12 = operator_new(0x20);
          }
          else {
            if ((uVar19 >> 8 & 1) != 0) {
              local_184 = uVar19 & 0xfffffeff;
              DsDevice::~DsDevice(local_88);
            }
            if (*(longlong *)(lVar12 + 0x70) != 0) {
              FUN_1439f01b0(lVar12,&.E::RTTI_Type_Descriptor,0x20);
            }
            lVar12 = FUN_1439efd10(lVar12,0x20);
          }
          lVar2 = param_1[0xe];
          *(undefined4 *)(lVar12 + 8) = 0;
          FUN_143a0d3c0(lVar2,lVar12);
          *(undefined8 *)(lVar12 + 0x10) = 0;
          *(undefined4 *)(lVar12 + 0x18) = 0;
          FUN_143a0f7a0(lVar12,lVar9);
        }
        *(longlong *)(lVar15 + 0x10) = lVar12;
      }
      plVar11 = (longlong *)(lVar12 + 0x10);
      FUN_143a0f3b0(param_1,plVar11);
    }
    else {
      plVar11 = (longlong *)(*(longlong *)(CONCAT71(uStack_f7,local_f8) + 0x10) + 0x10);
    }
    local_e8 = 0;
    local_e0 = 0xf;
    local_f8 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_f8,"value",5);
    puVar10 = (undefined8 *)
              (**(code **)(*(longlong *)param_1[0x11] + 0xb8))((longlong *)param_1[0x11],&local_170)
    ;
    uVar13 = FUN_143a3f170(*puVar10,&local_f8);
    if (0xf < local_e0) {
      uVar17 = local_e0 + 1;
      lVar15 = CONCAT71(uStack_f7,local_f8);
      lVar9 = lVar15;
      if (0xfff < uVar17) {
        uVar17 = local_e0 + 0x28;
        lVar9 = *(longlong *)(lVar15 + -8);
        if (0x1f < (lVar15 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar9,uVar17);
    }
    local_e8 = 0;
    local_e0 = 0xf;
    local_f8 = 0;
    iVar7 = FUN_143a009a0(uVar13);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar7 * 4)) {
    case 1:
      uVar8 = FUN_143a104b0(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 1) {
        uVar13 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar13 = FUN_1439eef00(uVar13,"Protocol Buffer map usage error:\n");
        uVar13 = FUN_1439eef00(uVar13,"MapValueRef::SetInt32Value");
        uVar13 = FUN_1439eef00(uVar13," type does not match\n");
        uVar13 = FUN_1439eef00(uVar13,"  Expected : ");
        uVar13 = FUN_1439eef00(uVar13,"int32");
        uVar13 = FUN_1439eef00(uVar13,&DAT_143fc48d8);
        uVar13 = FUN_1439eef00(uVar13,"  Actual   : ");
        uVar13 = FUN_1439eef00(uVar13,puVar4);
        FUN_1439eec50(&local_190,uVar13);
LAB_143a11801:
        DsDevice::~DsDevice(&local_f8);
      }
      goto LAB_143a11811;
    case 2:
      uVar13 = FUN_143a10710(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 2) {
        uVar16 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar16 = FUN_1439eef00(uVar16,"Protocol Buffer map usage error:\n");
        uVar16 = FUN_1439eef00(uVar16,"MapValueRef::SetInt64Value");
        uVar16 = FUN_1439eef00(uVar16," type does not match\n");
        uVar16 = FUN_1439eef00(uVar16,"  Expected : ");
        uVar16 = FUN_1439eef00(uVar16,"int64");
        uVar16 = FUN_1439eef00(uVar16,&DAT_143fc48d8);
        uVar16 = FUN_1439eef00(uVar16,"  Actual   : ");
        uVar16 = FUN_1439eef00(uVar16,puVar4);
        FUN_1439eec50(&local_18f,uVar16);
        DsDevice::~DsDevice(&local_f8);
      }
LAB_143a119f3:
      *(undefined8 *)*plVar11 = uVar13;
      param_1 = local_198;
      break;
    case 3:
      uVar8 = FUN_143a10ae0(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 3) {
        uVar13 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar13 = FUN_1439eef00(uVar13,"Protocol Buffer map usage error:\n");
        uVar13 = FUN_1439eef00(uVar13,"MapValueRef::SetUInt32Value");
        uVar13 = FUN_1439eef00(uVar13," type does not match\n");
        uVar13 = FUN_1439eef00(uVar13,"  Expected : ");
        uVar13 = FUN_1439eef00(uVar13,"uint32");
        uVar13 = FUN_1439eef00(uVar13,&DAT_143fc48d8);
        uVar13 = FUN_1439eef00(uVar13,"  Actual   : ");
        uVar13 = FUN_1439eef00(uVar13,puVar4);
        FUN_1439eec50(&local_18e,uVar13);
        goto LAB_143a11801;
      }
      goto LAB_143a11811;
    case 4:
      uVar13 = FUN_143a10d40(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 == 4) goto LAB_143a119f3;
      uVar16 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
      iVar7 = FUN_143a0d230(plVar11);
      puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
      uVar16 = FUN_1439eef00(uVar16,"Protocol Buffer map usage error:\n");
      uVar16 = FUN_1439eef00(uVar16,"MapValueRef::SetUInt64Value");
      uVar16 = FUN_1439eef00(uVar16," type does not match\n");
      uVar16 = FUN_1439eef00(uVar16,"  Expected : ");
      uVar16 = FUN_1439eef00(uVar16,"uint64");
      uVar16 = FUN_1439eef00(uVar16,&DAT_143fc48d8);
      uVar16 = FUN_1439eef00(uVar16,"  Actual   : ");
      uVar16 = FUN_1439eef00(uVar16,puVar4);
      FUN_1439eec50(&local_18d,uVar16);
      DsDevice::~DsDevice(&local_f8);
      *(undefined8 *)*plVar11 = uVar13;
      param_1 = local_198;
      break;
    case 5:
      uVar13 = FUN_143a0fff0(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 5) {
        uVar16 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar16 = FUN_1439eef00(uVar16,"Protocol Buffer map usage error:\n");
        uVar16 = FUN_1439eef00(uVar16,"MapValueRef::SetDoubleValue");
        uVar16 = FUN_1439eef00(uVar16," type does not match\n");
        uVar16 = FUN_1439eef00(uVar16,"  Expected : ");
        uVar16 = FUN_1439eef00(uVar16,"double");
        uVar16 = FUN_1439eef00(uVar16,&DAT_143fc48d8);
        uVar16 = FUN_1439eef00(uVar16,"  Actual   : ");
        uVar16 = FUN_1439eef00(uVar16,puVar4);
        FUN_1439eec50(&local_18b,uVar16);
        DsDevice::~DsDevice(&local_f8);
      }
      *(undefined8 *)*plVar11 = uVar13;
      break;
    case 6:
      uVar8 = FUN_143a10250(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 6) {
        uVar13 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar13 = FUN_1439eef00(uVar13,"Protocol Buffer map usage error:\n");
        uVar13 = FUN_1439eef00(uVar13,"MapValueRef::SetFloatValue");
        uVar13 = FUN_1439eef00(uVar13," type does not match\n");
        uVar13 = FUN_1439eef00(uVar13,"  Expected : ");
        uVar13 = FUN_1439eef00(uVar13,"float");
        uVar13 = FUN_1439eef00(uVar13,&DAT_143fc48d8);
        uVar13 = FUN_1439eef00(uVar13,"  Actual   : ");
        uVar13 = FUN_1439eef00(uVar13,puVar4);
        FUN_1439eec50(&local_18c,uVar13);
        DsDevice::~DsDevice(&local_f8);
      }
      *(undefined4 *)*plVar11 = uVar8;
      break;
    case 7:
      uVar6 = FUN_143a0fec0(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 7) {
        uVar13 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar13 = FUN_1439eef00(uVar13,"Protocol Buffer map usage error:\n");
        uVar13 = FUN_1439eef00(uVar13,"MapValueRef::SetBoolValue");
        uVar13 = FUN_1439eef00(uVar13," type does not match\n");
        uVar13 = FUN_1439eef00(uVar13,"  Expected : ");
        uVar13 = FUN_1439eef00(uVar13,&DAT_145cbec70);
        uVar13 = FUN_1439eef00(uVar13,&DAT_143fc48d8);
        uVar13 = FUN_1439eef00(uVar13,"  Actual   : ");
        uVar13 = FUN_1439eef00(uVar13,puVar4);
        FUN_1439eec50(&local_18a,uVar13);
        DsDevice::~DsDevice(&local_f8);
      }
      *(undefined1 *)*plVar11 = uVar6;
      param_1 = local_198;
      break;
    case 8:
      uVar8 = FUN_143a10120(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 8) {
        uVar13 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar13 = FUN_1439eef00(uVar13,"Protocol Buffer map usage error:\n");
        uVar13 = FUN_1439eef00(uVar13,"MapValueRef::SetEnumValue");
        uVar13 = FUN_1439eef00(uVar13," type does not match\n");
        uVar13 = FUN_1439eef00(uVar13,"  Expected : ");
        uVar13 = FUN_1439eef00(uVar13,&DAT_145cbeca0);
        uVar13 = FUN_1439eef00(uVar13,&DAT_143fc48d8);
        uVar13 = FUN_1439eef00(uVar13,"  Actual   : ");
        uVar13 = FUN_1439eef00(uVar13,puVar4);
        FUN_1439eec50(&local_188,uVar13);
        goto LAB_143a11801;
      }
LAB_143a11811:
      *(undefined4 *)*plVar11 = uVar8;
      param_1 = local_198;
      break;
    case 9:
      puVar10 = (undefined8 *)FUN_143a109b0(plVar5[2] + 0x10);
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 9) {
        uVar13 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar13 = FUN_1439eef00(uVar13,"Protocol Buffer map usage error:\n");
        uVar13 = FUN_1439eef00(uVar13,"MapValueRef::SetStringValue");
        uVar13 = FUN_1439eef00(uVar13," type does not match\n");
        uVar13 = FUN_1439eef00(uVar13,"  Expected : ");
        uVar13 = FUN_1439eef00(uVar13,"string");
        uVar13 = FUN_1439eef00(uVar13,&DAT_143fc48d8);
        uVar13 = FUN_1439eef00(uVar13,"  Actual   : ");
        uVar13 = FUN_1439eef00(uVar13,puVar4);
        FUN_1439eec50(&local_189,uVar13);
        DsDevice::~DsDevice(&local_f8);
      }
      param_1 = local_198;
      if ((undefined8 *)*plVar11 != puVar10) {
        puVar18 = puVar10;
        if (0xf < (ulonglong)puVar10[3]) {
          puVar18 = (undefined8 *)*puVar10;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((undefined8 *)*plVar11,puVar18,puVar10[2]);
        param_1 = local_198;
      }
      break;
    case 10:
      iVar7 = FUN_143a0d230(plVar11);
      if (iVar7 != 10) {
        uVar13 = FUN_1439eeb00(&local_f8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h");
        iVar7 = FUN_143a0d230(plVar11);
        puVar4 = (&PTR_s_ERROR_145cbee00)[iVar7];
        uVar13 = FUN_1439eef00(uVar13,"Protocol Buffer map usage error:\n");
        uVar13 = FUN_1439eef00(uVar13,"MapValueRef::MutableMessageValue");
        uVar13 = FUN_1439eef00(uVar13," type does not match\n");
        uVar13 = FUN_1439eef00(uVar13,"  Expected : ");
        uVar13 = FUN_1439eef00(uVar13,"message");
        uVar13 = FUN_1439eef00(uVar13,&DAT_143fc48d8);
        uVar13 = FUN_1439eef00(uVar13,"  Actual   : ");
        uVar13 = FUN_1439eef00(uVar13,puVar4);
        FUN_1439eec50(local_187,uVar13);
        DsDevice::~DsDevice(&local_f8);
      }
      plVar11 = (longlong *)*plVar11;
      lVar9 = *plVar11;
      uVar13 = FUN_143a10860(plVar5[2] + 0x10);
      (**(code **)(lVar9 + 0x88))(plVar11,uVar13);
    }
    plVar11 = (longlong *)plVar5[3];
    lVar9 = local_178;
    uVar19 = local_184;
    plVar3 = local_170;
    uVar13 = uStack_168;
  } while (plVar11 != (longlong *)0x0);
  lVar9 = CONCAT44(uStack_134,uStack_138);
  uVar14 = *(longlong *)(lVar9 + 8) - 1U & uVar14;
  plVar3 = *(longlong **)(*(longlong *)(lVar9 + 0x20) + uVar14 * 8);
  local_180 = plVar11;
  if (plVar3 == plVar5) {
LAB_143a12247:
    uVar14 = uVar14 + 1;
    if (*(ulonglong *)(lVar9 + 8) <= uVar14) {
      return;
    }
    lVar15 = *(longlong *)(lVar9 + 0x20);
    plVar11 = (longlong *)(lVar15 + uVar14 * 8);
    do {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        if (lVar12 != *(longlong *)(lVar15 + (uVar14 ^ 1) * 8)) goto LAB_143a12299;
        if ((lVar12 != 0) && (lVar12 == *(longlong *)(lVar15 + (uVar14 ^ 1) * 8)))
        goto LAB_143a12236;
      }
      uVar14 = uVar14 + 1;
      plVar11 = plVar11 + 1;
      if (*(ulonglong *)(lVar9 + 8) <= uVar14) {
        return;
      }
    } while( true );
  }
  if ((plVar3 != (longlong *)0x0) &&
     (plVar3 != *(longlong **)(*(longlong *)(lVar9 + 0x20) + (uVar14 ^ 1) * 8))) {
    for (plVar11 = (longlong *)plVar3[3]; plVar11 != (longlong *)0x0;
        plVar11 = (longlong *)plVar11[3]) {
      if (plVar11 == plVar5) goto LAB_143a12247;
    }
  }
  lVar15 = FUN_143a0fc30(lVar9,&local_f8,plVar5,&local_180);
  uVar14 = *(ulonglong *)(lVar15 + 0x10);
  lVar15 = *(longlong *)(lVar9 + 0x20);
  lVar12 = *(longlong *)(lVar15 + uVar14 * 8);
  local_148 = uVar14;
  if ((lVar12 == 0) || (lVar12 != *(longlong *)(lVar15 + (uVar14 ^ 1) * 8))) goto LAB_143a12247;
  plVar11 = (longlong *)local_180[2];
  if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar11 + 0x19);
    plVar3 = (longlong *)*plVar11;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar11 = plVar3;
      plVar3 = (longlong *)*plVar3;
    }
  }
  else {
    cVar1 = *(char *)(local_180[1] + 0x19);
    plVar5 = (longlong *)local_180[1];
    plVar3 = local_180;
    while ((plVar11 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar11[2]))) {
      cVar1 = *(char *)(plVar11[1] + 0x19);
      plVar5 = (longlong *)plVar11[1];
      plVar3 = plVar11;
    }
  }
  if (plVar11 == *(longlong **)(lVar12 + 8)) {
    uVar14 = uVar14 + 2;
    if (*(ulonglong *)(lVar9 + 8) <= uVar14) {
      return;
    }
    plVar11 = (longlong *)(lVar15 + uVar14 * 8);
    do {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        if (lVar12 != *(longlong *)(lVar15 + (uVar14 ^ 1) * 8)) goto LAB_143a12299;
        if ((lVar12 != 0) && (lVar12 == *(longlong *)(lVar15 + (uVar14 ^ 1) * 8)))
        goto LAB_143a12236;
      }
      uVar14 = uVar14 + 1;
      plVar11 = plVar11 + 1;
      if (*(ulonglong *)(lVar9 + 8) <= uVar14) {
        return;
      }
    } while( true );
  }
  goto LAB_143a12241;
LAB_143a12299:
  lVar9 = local_178;
  uVar19 = local_184;
  plVar11 = *(longlong **)(lVar15 + uVar14 * 8);
  plVar3 = local_170;
  uVar13 = uStack_168;
  goto joined_r0x000143a114e7;
LAB_143a12236:
  plVar11 = (longlong *)**(undefined8 **)(*(longlong *)(lVar15 + uVar14 * 8) + 8);
LAB_143a12241:
  lVar9 = local_178;
  uVar19 = local_184;
  plVar11 = (longlong *)plVar11[4];
  plVar3 = local_170;
  uVar13 = uStack_168;
  goto joined_r0x000143a114e7;
}



// FUNCTION 143a122f0 FUN_143a122f0 body=33 status=ok
// SIG undefined FUN_143a122f0(void)

longlong FUN_143a122f0(longlong param_1)

{
  FUN_143a12920();
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_1 + 0x70;
}



// FUNCTION 143a12320 FUN_143a12320 body=39 status=ok
// SIG undefined FUN_143a12320(void)

undefined8 FUN_143a12320(longlong param_1)

{
  FUN_143a13410();
  *(undefined4 *)(param_1 + 0x68) = 1;
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 143a12350 FUN_143a12350 body=260 status=ok
// SIG undefined FUN_143a12350(void)

void FUN_143a12350(longlong param_1,longlong param_2)

{
  size_t _Size;
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  _Size = param_2 * 8;
  uVar2 = *(ulonglong *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(longlong *)(param_1 + 8) = param_2;
  if (lVar1 == 0) {
    _Dst = (void *)operator_new(_Size);
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,&.E::RTTI_Type_Descriptor,_Size);
    }
    _Dst = (void *)FUN_1439efd10(lVar1);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  *(void **)(param_1 + 0x20) = _Dst;
  uVar4 = *(ulonglong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  for (; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    lVar1 = *(longlong *)(lVar3 + uVar4 * 8);
    if (lVar1 != 0) {
      if (lVar1 == *(longlong *)(lVar3 + (uVar4 ^ 1) * 8)) {
        if ((lVar1 != 0) && (lVar1 == *(longlong *)(lVar3 + (uVar4 ^ 1) * 8))) {
          FUN_143a13fd0(param_1,lVar3,uVar4);
          uVar4 = uVar4 + 1;
        }
      }
      else {
        FUN_143a13d00(param_1,lVar3,uVar4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FMemory::operator_delete(lVar3,uVar2 * 8);
  }
  return;
}



// FUNCTION 143a12460 FUN_143a12460 body=85 status=ok
// SIG undefined FUN_143a12460(void)

void FUN_143a12460(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[2] = param_2;
  do {
    if (*(ulonglong *)(param_1[1] + 8) <= param_2) {
      return;
    }
    lVar1 = *(longlong *)(param_1[1] + 0x20);
    lVar2 = *(longlong *)(lVar1 + param_2 * 8);
    if (lVar2 != 0) {
      if (lVar2 != *(longlong *)(lVar1 + (param_2 ^ 1) * 8)) {
LAB_143a124b1:
        *param_1 = lVar2;
        return;
      }
      if ((lVar2 != 0) && (lVar2 == *(longlong *)(lVar1 + (param_2 ^ 1) * 8))) {
        lVar2 = *(longlong *)(**(longlong **)(lVar2 + 8) + 0x20);
        goto LAB_143a124b1;
      }
    }
    param_2 = param_2 + 1;
    param_1[2] = param_2;
  } while( true );
}



// FUNCTION 143a124c0 FUN_143a124c0 body=8 status=ok
// SIG undefined FUN_143a124c0(void)

void FUN_143a124c0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 143a124d0 FUN_143a124d0 body=66 status=ok
// SIG undefined FUN_143a124d0(void)

void FUN_143a124d0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_2;
  if (lVar1 != 0) {
    FUN_143a0f7a0(param_2 + 2,*(undefined8 *)(lVar1 + 0x10));
    lVar1 = *(longlong *)(lVar1 + 0x10);
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar1 + 0x18);
    param_2[4] = *(undefined8 *)(lVar1 + 0x10);
  }
  return;
}



// FUNCTION 143a12520 FUN_143a12520 body=81 status=ok
// SIG undefined FUN_143a12520(void)

undefined8 FUN_143a12520(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 3);
  if (iVar1 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar1);
  }
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 3);
  if (iVar1 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar1);
  }
  return uVar2;
}



// FUNCTION 143a12580 FUN_143a12580 body=410 status=ok
// SIG undefined FUN_143a12580(void)

longlong FUN_143a12580(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar5 = FUN_141541080();
  }
  lVar5 = lVar5 + 0x18;
  lVar7 = **(longlong **)(param_1 + 0x80);
  if (lVar7 != 0) {
    plVar6 = (longlong *)FUN_143a14840(*(longlong **)(param_1 + 0x80),&local_20);
    lVar8 = lVar7 * 0x20;
    lVar5 = lVar5 + lVar8;
    lVar1 = *plVar6;
    lVar2 = plVar6[1];
    local_28 = plVar6[2];
    local_38._0_4_ = (undefined4)lVar1;
    local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_30._0_4_ = (undefined4)lVar2;
    uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
    local_20 = (undefined4)local_38;
    uStack_1c = local_38._4_4_;
    uStack_18 = (undefined4)uStack_30;
    uStack_14 = uStack_30._4_4_;
    local_38 = lVar1;
    uStack_30 = lVar2;
    local_10 = local_28;
    iVar3 = FUN_141515ef0(*(undefined8 *)(lVar1 + 0x10));
    if (iVar3 == 9) {
      lVar5 = lVar5 + lVar8;
    }
    uVar4 = FUN_143a0d230(*(longlong *)(lVar1 + 0x10) + 0x10);
    switch(uVar4) {
    case 1:
    case 3:
    case 6:
    case 8:
      return lVar5 + lVar7 * 4;
    case 2:
    case 4:
    case 5:
      return lVar5 + lVar7 * 8;
    case 7:
      return lVar5 + lVar7;
    case 9:
      return lVar5 + lVar8;
    case 10:
      lVar7 = CONCAT44(uStack_1c,local_20);
      do {
        plVar6 = (longlong *)FUN_143a10860(*(longlong *)(lVar7 + 0x10) + 0x10);
        lVar7 = (**(code **)(*plVar6 + 0xb8))(plVar6,&local_38);
        lVar7 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x18))(*(longlong **)(lVar7 + 8),plVar6);
        lVar5 = lVar5 + lVar7;
        FUN_143a0ebd0(&local_20);
        lVar7 = CONCAT44(uStack_1c,local_20);
      } while (lVar7 != 0);
    }
  }
  return lVar5;
}



// FUNCTION 143a12750 FUN_143a12750 body=16 status=ok
// SIG undefined FUN_143a12750(void)

longlong FUN_143a12750(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(lVar1 + 0x10);
  lVar4 = (longlong)*(int *)(lVar1 + 0xc) << 3;
  if (piVar2 == (int *)0x0) {
    return lVar4;
  }
  iVar6 = 0;
  if (0 < *piVar2) {
    lVar5 = 0;
    do {
      lVar3 = (**(code **)(**(longlong **)(lVar5 + 8 + (longlong)piVar2) + 0xa0))();
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + lVar3;
      piVar2 = *(int **)(lVar1 + 0x10);
    } while (iVar6 < *piVar2);
  }
  return lVar4 + 8;
}



// FUNCTION 143a12760 FUN_143a12760 body=433 status=ok
// SIG undefined FUN_143a12760(void)

void FUN_143a12760(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_a0 = 0xfffffffffffffffe;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  if (*(longlong *)(param_1 + 0x70) == *(longlong *)(param_2 + 0x70)) {
    uVar1 = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_2 + 0x78) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = uVar2;
  }
  else {
    local_f8 = 0;
    local_f0 = *(undefined4 *)(param_1 + 0x78);
    FUN_143a10eb0(&local_f8);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_c8 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    puVar3 = (undefined8 *)FUN_143a14840(*(undefined8 *)(param_1 + 0x80),local_40);
    local_90 = *puVar3;
    uStack_88 = puVar3[1];
    local_c8 = puVar3[2];
    local_b8._0_4_ = (undefined4)local_90;
    local_b8._4_4_ = (undefined4)((ulonglong)local_90 >> 0x20);
    uStack_b0._0_4_ = (undefined4)uStack_88;
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_88 >> 0x20);
    local_d8 = (undefined4)local_b8;
    uStack_d4 = local_b8._4_4_;
    uStack_d0 = (undefined4)uStack_b0;
    uStack_cc = uStack_b0._4_4_;
    local_b8 = local_90;
    uStack_b0 = uStack_88;
    local_a8 = local_c8;
    local_80 = local_c8;
    FUN_143a0e0a0(&local_f8,&local_d8,&local_78);
    FUN_143a0e740(param_1 + 0x70,param_2 + 0x70);
    FUN_143a0e740(param_2 + 0x70,&local_f8);
    FUN_143a148f0(&local_f8);
    if ((local_f8 == 0) && (local_e8 != 0)) {
      if (*(longlong *)(local_e8 + 0x20) != 0) {
        FUN_143a149f0(local_e8);
        if (*(longlong *)(local_e8 + 0x28) == 0) {
          FMemory::operator_delete(*(undefined8 *)(local_e8 + 0x20),*(longlong *)(local_e8 + 8) * 8)
          ;
        }
      }
      FMemory::operator_delete(local_e8,0x30);
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 143a12920 FUN_143a12920 body=102 status=ok
// SIG undefined FUN_143a12920(void)

void FUN_143a12920(longlong *param_1)

{
  int iVar1;
  
  if ((int)param_1[0xd] == 1) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 3);
    if (iVar1 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar1);
    }
    if ((int)param_1[0xd] == 1) {
      (**(code **)(*param_1 + 0x68))(param_1);
      *(undefined4 *)(param_1 + 0xd) = 2;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 3);
    if (iVar1 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143a12990 FUN_143a12990 body=2516 status=ok
// SIG undefined FUN_143a12990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143a12f90) */
/* WARNING: Removing unreachable block (ram,0x000143a12fb2) */

void FUN_143a12990(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  longlong *local_190;
  int local_188;
  ulonglong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  longlong local_120;
  ulonglong uStack_118;
  longlong local_110;
  ulonglong local_108;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_160 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_178 = local_178 & 0xffffffff00000000;
  plVar1 = (longlong *)(param_1 + 0x70);
  local_168 = param_1;
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                    (*(longlong **)(param_1 + 0x88),local_150);
  plVar2 = *(longlong **)(lVar7 + 8);
  local_d8 = 0;
  uStack_d0 = 0xf;
  local_e8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_e8,&DAT_144044650,3);
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                     (*(longlong **)(param_1 + 0x88),local_140);
  uVar9 = FUN_143a3f170(*puVar8,&local_e8);
  local_170 = uVar9;
  if (0xf < uStack_d0) {
    uVar15 = uStack_d0 + 1;
    lVar14 = CONCAT71(uStack_e7,local_e8);
    lVar7 = lVar14;
    if (0xfff < uVar15) {
      uVar15 = uStack_d0 + 0x28;
      lVar7 = *(longlong *)(lVar14 + -8);
      if (0x1f < (lVar14 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar7,uVar15);
  }
  local_d8 = 0;
  uStack_d0 = 0xf;
  local_e8 = 0;
  local_b8 = 0;
  uStack_b0 = 0xf;
  local_c8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_c8,0,5);
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                     (*(longlong **)(param_1 + 0x88),local_130);
  local_178 = FUN_143a3f170(*puVar8,&local_c8);
  if (0xf < uStack_b0) {
    uVar15 = uStack_b0 + 1;
    lVar14 = CONCAT71(uStack_c7,local_c8);
    lVar7 = lVar14;
    if (0xfff < uVar15) {
      uVar15 = uStack_b0 + 0x28;
      lVar7 = *(longlong *)(lVar14 + -8);
      if (0x1f < (lVar14 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar7,uVar15);
  }
  local_b8 = 0;
  uStack_b0 = 0xf;
  local_c8 = 0;
  plVar10 = (longlong *)FUN_143a14840(*(undefined8 *)(param_1 + 0x80),&local_190);
  local_120 = *plVar10;
  uStack_118 = plVar10[1];
  local_110 = plVar10[2];
  while (local_120 != 0) {
    lVar7 = *(longlong *)(local_120 + 0x10);
    switch(*(undefined4 *)(lVar7 + 0x18)) {
    case 1:
    case 3:
    case 6:
    case 8:
      FMemory::operator_delete(*(undefined8 *)(lVar7 + 0x10),4);
      break;
    case 2:
    case 4:
    case 5:
      FMemory::operator_delete(*(undefined8 *)(lVar7 + 0x10),8);
      break;
    case 7:
      FMemory::operator_delete(*(undefined8 *)(lVar7 + 0x10),1);
      break;
    case 9:
      if (*(longlong *)(lVar7 + 0x10) != 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _scalar_deleting_destructor_(*(longlong *)(lVar7 + 0x10),1);
      }
      break;
    case 10:
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
    FUN_143a0eaf0(&local_120);
  }
  FUN_143a148f0(plVar1);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  plVar10 = (longlong *)(lVar7 + 8);
  lVar14 = param_1;
  if (lVar7 == 0) {
    plVar10 = (longlong *)0x0;
  }
  do {
    plVar13 = (longlong *)0x0;
    lVar7 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x10);
    plVar11 = (longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
      plVar11 = plVar13;
    }
    if (plVar10 == plVar11 + *(int *)(*(longlong *)(lVar14 + 0x10) + 8)) {
      return;
    }
    local_188 = 0;
    iVar5 = FUN_143a009a0(uVar9);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar5 * 4)) {
    case 1:
      uVar6 = (**(code **)(*plVar2 + 0x80))(plVar2,*plVar10,uVar9);
      local_188 = 1;
      local_190 = (longlong *)CONCAT44(local_190._4_4_,uVar6);
      break;
    case 2:
      local_190 = (longlong *)(**(code **)(*plVar2 + 0x88))(plVar2,*plVar10,uVar9);
      local_188 = 2;
      break;
    case 3:
      uVar6 = (**(code **)(*plVar2 + 0x90))(plVar2,*plVar10,uVar9);
      local_188 = 3;
      local_190 = (longlong *)CONCAT44(local_190._4_4_,uVar6);
      break;
    case 4:
      local_190 = (longlong *)(**(code **)(*plVar2 + 0x98))(plVar2,*plVar10,uVar9);
      local_188 = 4;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
      uVar9 = FUN_1439eeb00(local_a8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.cc",
                            0x1ea);
      uVar9 = FUN_1439eef00(uVar9,"Can\'t get here.");
      FUN_1439eec50(local_198,uVar9);
      DsDevice::~DsDevice(local_a8);
      break;
    case 7:
      uVar4 = (**(code **)(*plVar2 + 0xb0))(plVar2,*plVar10,uVar9);
      local_188 = 7;
      local_190 = (longlong *)CONCAT71(local_190._1_7_,uVar4);
      break;
    case 9:
      plVar11 = (longlong *)(**(code **)(*plVar2 + 0xb8))(plVar2,&local_120,*plVar10,uVar9);
      local_188 = 9;
      plVar12 = (longlong *)operator_new(0x20);
      if (plVar12 != (longlong *)0x0) {
        plVar12[2] = 0;
        plVar12[3] = 0xf;
        *(undefined1 *)plVar12 = 0;
        plVar13 = plVar12;
      }
      local_190 = plVar13;
      if (plVar13 != plVar11) {
        plVar12 = plVar11;
        if (0xf < (ulonglong)plVar11[3]) {
          plVar12 = (longlong *)*plVar11;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (plVar13,plVar12,plVar11[2]);
      }
      if (0xf < local_108) {
        uVar15 = local_108 + 1;
        lVar7 = local_120;
        if (0xfff < uVar15) {
          uVar15 = local_108 + 0x28;
          lVar7 = *(longlong *)(local_120 + -8);
          if (0x1f < (local_120 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar15);
      }
    }
    FUN_143a0fc30(*(undefined8 *)(param_1 + 0x80),&local_120,&local_190,0);
    if (local_120 != 0) {
      lVar7 = *(longlong *)(local_120 + 0x10);
      switch(*(undefined4 *)(lVar7 + 0x18)) {
      case 1:
      case 3:
      case 6:
      case 8:
        FMemory::operator_delete(*(undefined8 *)(lVar7 + 0x10),4);
        break;
      case 2:
      case 4:
      case 5:
        FMemory::operator_delete(*(undefined8 *)(lVar7 + 0x10),8);
        break;
      case 7:
        FMemory::operator_delete(*(undefined8 *)(lVar7 + 0x10),1);
        break;
      case 9:
        plVar13 = *(longlong **)(lVar7 + 0x10);
        if (plVar13 != (longlong *)0x0) {
          uVar15 = plVar13[3];
          if (0xf < uVar15) {
            lVar7 = *plVar13;
            uVar16 = uVar15 + 1;
            lVar14 = lVar7;
            if (0xfff < uVar16) {
              uVar16 = uVar15 + 0x28;
              lVar14 = *(longlong *)(lVar7 + -8);
              if (0x1f < (lVar7 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar14,uVar16);
          }
          plVar13[2] = 0;
          plVar13[3] = 0xf;
          *(undefined1 *)plVar13 = 0;
          FMemory::operator_delete(plVar13,0x20);
        }
        break;
      case 10:
        puVar8 = *(undefined8 **)(lVar7 + 0x10);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    uStack_118 = uStack_118 & 0xffffffff00000000;
    FUN_143a0f7a0(&local_120,&local_190);
    local_110 = 0;
    plVar13 = (longlong *)FUN_143a14ff0(uVar9,local_a8,&local_120);
    lVar7 = *plVar13;
    FUN_1439fdc40(&local_120);
    lVar14 = *(longlong *)(lVar7 + 0x10);
    if (lVar14 == 0) {
      lVar14 = *plVar1;
      if (lVar14 == 0) {
        lVar14 = operator_new(0x20);
        local_158 = lVar14;
        if (lVar14 == 0) {
          lVar14 = 0;
        }
        else {
          *(undefined4 *)(lVar14 + 8) = 0;
          FUN_143a0f7a0(lVar14,&local_190);
          *(undefined8 *)(lVar14 + 0x10) = 0;
          *(undefined4 *)(lVar14 + 0x18) = 0;
        }
      }
      else {
        if (lVar14 == 0) {
          lVar14 = operator_new(0x20);
        }
        else {
          if (*(longlong *)(lVar14 + 0x70) != 0) {
            FUN_1439f01b0(lVar14,&.E::RTTI_Type_Descriptor,0x20);
          }
          lVar14 = FUN_1439efd10(lVar14,0x20);
        }
        lVar3 = *plVar1;
        *(undefined4 *)(lVar14 + 8) = 0;
        FUN_143a0d3c0(lVar3,lVar14);
        *(undefined8 *)(lVar14 + 0x10) = 0;
        *(undefined4 *)(lVar14 + 0x18) = 0;
        FUN_143a0f7a0(lVar14,&local_190);
      }
      *(longlong *)(lVar7 + 0x10) = lVar14;
    }
    uVar15 = local_178;
    iVar5 = FUN_143a009a0(local_178);
    *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(&DAT_145cbed10 + (longlong)iVar5 * 4);
    iVar5 = FUN_143a009a0(uVar15);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar5 * 4)) {
    case 1:
      plVar11 = (longlong *)operator_new(4);
      uVar6 = (**(code **)(*plVar2 + 0x80))(plVar2,*plVar10,uVar15);
      *(undefined4 *)plVar11 = uVar6;
      break;
    case 2:
      plVar11 = (longlong *)operator_new(8);
      lVar7 = (**(code **)(*plVar2 + 0x88))(plVar2,*plVar10,uVar15);
      *plVar11 = lVar7;
      break;
    case 3:
      plVar11 = (longlong *)operator_new(4);
      uVar6 = (**(code **)(*plVar2 + 0x90))(plVar2,*plVar10,uVar15);
      *(undefined4 *)plVar11 = uVar6;
      break;
    case 4:
      plVar11 = (longlong *)operator_new(8);
      lVar7 = (**(code **)(*plVar2 + 0x98))(plVar2,*plVar10,uVar15);
      *plVar11 = lVar7;
      break;
    case 5:
      plVar11 = (longlong *)operator_new(8);
      lVar7 = (**(code **)(*plVar2 + 0xa8))(plVar2,*plVar10,uVar15);
      *plVar11 = lVar7;
      break;
    case 6:
      plVar11 = (longlong *)operator_new(4);
      uVar6 = (**(code **)(*plVar2 + 0xa0))(plVar2,*plVar10,uVar15);
      *(undefined4 *)plVar11 = uVar6;
      break;
    case 7:
      plVar11 = (longlong *)operator_new(1);
      uVar4 = (**(code **)(*plVar2 + 0xb0))(plVar2,*plVar10,uVar15);
      *(undefined1 *)plVar11 = uVar4;
      break;
    case 8:
      plVar11 = (longlong *)operator_new(4);
      uVar6 = (**(code **)(*plVar2 + 200))(plVar2,*plVar10,uVar15);
      *(undefined4 *)plVar11 = uVar6;
      break;
    case 9:
      plVar11 = (longlong *)operator_new(0x20);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11[2] = 0;
        plVar11[3] = 0xf;
        *(undefined1 *)plVar11 = 0;
      }
      plVar13 = (longlong *)(**(code **)(*plVar2 + 0xb8))(plVar2,&local_120,*plVar10);
      if (plVar11 != plVar13) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (plVar11);
        lVar7 = plVar13[1];
        *plVar11 = *plVar13;
        plVar11[1] = lVar7;
        lVar7 = plVar13[3];
        plVar11[2] = plVar13[2];
        plVar11[3] = lVar7;
        plVar13[2] = 0;
        plVar13[3] = 0xf;
        *(undefined1 *)plVar13 = 0;
      }
      if (0xf < local_108) {
        uVar15 = local_108 + 1;
        lVar7 = local_120;
        if (0xfff < uVar15) {
          uVar15 = local_108 + 0x28;
          lVar7 = *(longlong *)(local_120 + -8);
          if (0x1f < (local_120 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar15);
      }
      break;
    case 10:
      plVar13 = (longlong *)(**(code **)(*plVar2 + 0xd0))(plVar2,*plVar10,uVar15);
      plVar11 = (longlong *)(**(code **)(*plVar13 + 0x18))(plVar13);
      (**(code **)(*plVar11 + 0x88))(plVar11,plVar13);
      break;
    default:
      goto switchD_143a13060_default;
    }
    *(longlong **)(lVar14 + 0x10) = plVar11;
switchD_143a13060_default:
    plVar13 = local_190;
    if ((local_188 == 9) && (local_190 != (longlong *)0x0)) {
      uVar15 = local_190[3];
      if (0xf < uVar15) {
        uVar16 = uVar15 + 1;
        lVar7 = *local_190;
        lVar14 = lVar7;
        if (0xfff < uVar16) {
          uVar16 = uVar15 + 0x28;
          lVar14 = *(longlong *)(lVar7 + -8);
          if (0x1f < (lVar7 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar14,uVar16);
      }
      plVar13[2] = 0;
      plVar13[3] = 0xf;
      *(undefined1 *)plVar13 = 0;
      FMemory::operator_delete(plVar13,0x20);
      plVar10 = plVar10 + 1;
      lVar14 = local_168;
      uVar9 = local_170;
    }
    else {
      plVar10 = plVar10 + 1;
      lVar14 = local_168;
      uVar9 = local_170;
    }
  } while( true );
}



// FUNCTION 143a13410 FUN_143a13410 body=204 status=ok
// SIG undefined FUN_143a13410(void)

void FUN_143a13410(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((int)param_1[0xd] == 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 3);
    if (iVar1 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar1);
    }
    if ((int)param_1[0xd] != 0) goto LAB_143a134bd;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  else {
    if ((int)param_1[0xd] != 2) {
      return;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 3);
    if (iVar1 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar1);
    }
    if ((int)param_1[0xd] != 2) goto LAB_143a134bd;
    if (param_1[2] == 0) {
      if (param_1[1] == 0) {
        puVar2 = (undefined8 *)operator_new();
        if (puVar2 == (undefined8 *)0x0) {
          param_1[2] = 0;
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          param_1[2] = (longlong)puVar2;
        }
      }
      else {
        lVar3 = FUN_141519ac0();
        param_1[2] = lVar3;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 2;
LAB_143a134bd:
  iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 3);
  if (iVar1 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar1);
  }
  return;
}



// FUNCTION 143a134e0 FUN_143a134e0 body=1948 status=ok
// SIG undefined FUN_143a134e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a134e0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  longlong lStack_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 *local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_30;
  
  local_e0 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_e8 = param_1;
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                    (*(longlong **)(param_1 + 0x88),local_d8);
  plVar12 = *(longlong **)(lVar8 + 8);
  local_98 = 0;
  uStack_90 = 0xf;
  local_a8 = 0;
  local_128 = plVar12;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_a8,&DAT_144044650,3);
  puVar9 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                     (*(longlong **)(param_1 + 0x88),local_c8);
  local_110 = FUN_143a3f170(*puVar9,&local_a8);
  if (0xf < uStack_90) {
    uVar13 = uStack_90 + 1;
    lVar14 = CONCAT71(uStack_a7,local_a8);
    lVar8 = lVar14;
    if (0xfff < uVar13) {
      uVar13 = uStack_90 + 0x28;
      lVar8 = *(longlong *)(lVar14 + -8);
      if (0x1f < (lVar14 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar8,uVar13);
  }
  local_98 = 0;
  uStack_90 = 0xf;
  local_a8 = 0;
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_88,0,5);
  puVar9 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x88) + 0xb8))
                     (*(longlong **)(param_1 + 0x88),local_b8);
  local_118 = FUN_143a3f170(*puVar9,&local_88);
  if (0xf < uStack_70) {
    uVar13 = uStack_70 + 1;
    lVar14 = CONCAT71(uStack_87,local_88);
    lVar8 = lVar14;
    if (0xfff < uVar13) {
      uVar13 = uStack_70 + 0x28;
      lVar8 = *(longlong *)(lVar14 + -8);
      if (0x1f < (lVar14 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar8,uVar13);
  }
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      local_108 = (undefined8 *)operator_new(0x18);
      if (local_108 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        puVar9 = (undefined8 *)0x0;
      }
      else {
        *local_108 = 0;
        local_108[1] = 0;
        local_108[2] = 0;
        *(undefined8 **)(param_1 + 0x10) = local_108;
        puVar9 = local_108;
      }
    }
    else {
      puVar9 = (undefined8 *)FUN_141519ac0();
      *(undefined8 **)(param_1 + 0x10) = puVar9;
    }
  }
  FUN_1439fca10(puVar9);
  puVar9 = (undefined8 *)FUN_143a14840(*(undefined8 *)(param_1 + 0x80),&local_100);
  local_100 = (undefined8 *)*puVar9;
  lVar8 = puVar9[1];
  uVar13 = puVar9[2];
  local_f0 = uVar13;
  local_58 = uVar13;
  puVar9 = local_100;
  local_68 = local_100;
  lStack_f8 = lVar8;
  lStack_60 = lVar8;
joined_r0x000143a13717:
  do {
    puVar4 = puVar9;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
    FUN_1439fc8b0(*(undefined8 *)(param_1 + 0x10),uVar10,local_120[0]);
    uVar11 = puVar4[2];
    iVar6 = FUN_143a009a0(local_110);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar6 * 4)) {
    case 1:
      lVar14 = *plVar12;
      uVar7 = FUN_143a10380(uVar11);
      (**(code **)(lVar14 + 0xe0))(local_128,uVar10,local_110,uVar7);
      plVar12 = local_128;
      break;
    case 2:
      lVar14 = *plVar12;
      uVar11 = FUN_143a105e0(uVar11);
      (**(code **)(lVar14 + 0xe8))(local_128,uVar10,local_110,uVar11);
      plVar12 = local_128;
      break;
    case 3:
      lVar14 = *plVar12;
      uVar7 = FUN_141529b00(uVar11);
      (**(code **)(lVar14 + 0xf0))(local_128,uVar10,local_110,uVar7);
      plVar12 = local_128;
      break;
    case 4:
      lVar14 = *plVar12;
      uVar11 = FUN_143a10c10(uVar11);
      (**(code **)(lVar14 + 0xf8))(local_128,uVar10,local_110,uVar11);
      plVar12 = local_128;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
      uVar11 = FUN_1439eeb00(&local_68,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.cc",
                             0x198);
      uVar11 = FUN_1439eef00(uVar11,"Can\'t get here.");
      FUN_1439eec50(local_120,uVar11);
      DsDevice::~DsDevice(&local_68);
      break;
    case 7:
      lVar14 = *plVar12;
      uVar5 = FUN_143a0fd90(uVar11);
      (**(code **)(lVar14 + 0x110))(local_128,uVar10,local_110,uVar5);
      plVar12 = local_128;
      break;
    case 9:
      lVar14 = *plVar12;
      uVar11 = FUN_1415060c0(uVar11);
      (**(code **)(lVar14 + 0x118))(local_128,uVar10,local_110,uVar11);
      plVar12 = local_128;
    }
    lVar14 = puVar4[2] + 0x10;
    iVar6 = FUN_143a009a0(local_118);
    switch(*(undefined4 *)(&DAT_145cbed10 + (longlong)iVar6 * 4)) {
    case 1:
      lVar3 = *plVar12;
      FUN_143a104b0(lVar14);
      (**(code **)(lVar3 + 0xe0))(local_128,uVar10,local_118);
      break;
    case 2:
      lVar3 = *plVar12;
      FUN_143a10710(lVar14);
      (**(code **)(lVar3 + 0xe8))(local_128,uVar10,local_118);
      break;
    case 3:
      lVar3 = *plVar12;
      FUN_143a10ae0(lVar14);
      (**(code **)(lVar3 + 0xf0))(local_128,uVar10,local_118);
      break;
    case 4:
      lVar3 = *plVar12;
      FUN_143a10d40(lVar14);
      (**(code **)(lVar3 + 0xf8))(local_128,uVar10,local_118);
      break;
    case 5:
      lVar3 = *plVar12;
      uVar7 = FUN_143a0fff0(lVar14);
      (**(code **)(lVar3 + 0x108))(local_128,uVar10,local_118,uVar7);
      break;
    case 6:
      lVar3 = *plVar12;
      uVar7 = FUN_143a10250(lVar14);
      (**(code **)(lVar3 + 0x100))(local_128,uVar10,local_118,uVar7);
      break;
    case 7:
      lVar3 = *plVar12;
      FUN_143a0fec0(lVar14);
      (**(code **)(lVar3 + 0x110))(local_128,uVar10,local_118);
      break;
    case 8:
      lVar3 = *plVar12;
      FUN_143a10120(lVar14);
      (**(code **)(lVar3 + 0x128))(local_128,uVar10,local_118);
      break;
    case 9:
      lVar3 = *plVar12;
      FUN_143a109b0(lVar14);
      (**(code **)(lVar3 + 0x118))(local_128,uVar10,local_118);
      break;
    case 10:
      uVar11 = FUN_143a10860(lVar14);
      plVar12 = (longlong *)(**(code **)(*local_128 + 0x130))(local_128,uVar10,local_118,0);
      (**(code **)(*plVar12 + 0x88))(plVar12,uVar11);
    }
    puVar9 = (undefined8 *)puVar4[3];
    plVar12 = local_128;
    param_1 = local_e8;
  } while (puVar9 != (undefined8 *)0x0);
  uVar13 = *(longlong *)(lVar8 + 8) - 1U & uVar13;
  puVar2 = *(undefined8 **)(*(longlong *)(lVar8 + 0x20) + uVar13 * 8);
  local_108 = puVar9;
  if (puVar2 == puVar4) {
LAB_143a13bea:
    uVar13 = uVar13 + 1;
    if (*(ulonglong *)(lVar8 + 8) <= uVar13) {
      return;
    }
    lVar14 = *(longlong *)(lVar8 + 0x20);
    plVar12 = (longlong *)(lVar14 + uVar13 * 8);
    do {
      lVar3 = *plVar12;
      if (lVar3 != 0) {
        if (lVar3 != *(longlong *)(lVar14 + (uVar13 ^ 1) * 8)) goto LAB_143a13c35;
        if ((lVar3 != 0) && (lVar3 == *(longlong *)(lVar14 + (uVar13 ^ 1) * 8))) goto LAB_143a13bd9;
      }
      uVar13 = uVar13 + 1;
      plVar12 = plVar12 + 1;
      if (*(ulonglong *)(lVar8 + 8) <= uVar13) {
        return;
      }
    } while( true );
  }
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar2 != *(undefined8 **)(*(longlong *)(lVar8 + 0x20) + (uVar13 ^ 1) * 8))) {
    for (puVar9 = (undefined8 *)puVar2[3]; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)puVar9[3]) {
      if (puVar9 == puVar4) goto LAB_143a13bea;
    }
  }
  lVar14 = FUN_143a0fc30(lVar8,&local_68,puVar4,&local_108);
  uVar13 = *(ulonglong *)(lVar14 + 0x10);
  lVar14 = *(longlong *)(lVar8 + 0x20);
  lVar3 = *(longlong *)(lVar14 + uVar13 * 8);
  local_f0 = uVar13;
  if ((lVar3 == 0) || (lVar3 != *(longlong *)(lVar14 + (uVar13 ^ 1) * 8))) goto LAB_143a13bea;
  puVar9 = (undefined8 *)local_108[2];
  if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
    cVar1 = *(char *)((longlong)*puVar9 + 0x19);
    puVar4 = (undefined8 *)*puVar9;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((longlong)*puVar4 + 0x19);
      puVar9 = puVar4;
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  else {
    cVar1 = *(char *)((longlong)local_108[1] + 0x19);
    puVar2 = (undefined8 *)local_108[1];
    puVar4 = local_108;
    while ((puVar9 = puVar2, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar9[2]))) {
      cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
      puVar2 = (undefined8 *)puVar9[1];
      puVar4 = puVar9;
    }
  }
  if (puVar9 == *(undefined8 **)(lVar3 + 8)) {
    uVar13 = uVar13 + 2;
    if (*(ulonglong *)(lVar8 + 8) <= uVar13) {
      return;
    }
    plVar12 = (longlong *)(lVar14 + uVar13 * 8);
    do {
      lVar3 = *plVar12;
      if (lVar3 != 0) {
        if (lVar3 != *(longlong *)(lVar14 + (uVar13 ^ 1) * 8)) goto LAB_143a13c35;
        if ((lVar3 != 0) && (lVar3 == *(longlong *)(lVar14 + (uVar13 ^ 1) * 8))) goto LAB_143a13bd9;
      }
      uVar13 = uVar13 + 1;
      plVar12 = plVar12 + 1;
      if (*(ulonglong *)(lVar8 + 8) <= uVar13) {
        return;
      }
    } while( true );
  }
  goto LAB_143a13be4;
LAB_143a13c35:
  plVar12 = local_128;
  param_1 = local_e8;
  puVar9 = *(undefined8 **)(lVar14 + uVar13 * 8);
  goto joined_r0x000143a13717;
LAB_143a13bd9:
  puVar9 = (undefined8 *)**(undefined8 **)(*(longlong *)(lVar14 + uVar13 * 8) + 8);
LAB_143a13be4:
  plVar12 = local_128;
  param_1 = local_e8;
  puVar9 = (undefined8 *)puVar9[4];
  goto joined_r0x000143a13717;
}



// FUNCTION 143a13cd0 FUN_143a13cd0 body=35 status=ok
// SIG undefined FUN_143a13cd0(void)

void FUN_143a13cd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_141519ac0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 143a13d00 FUN_143a13d00 body=709 status=ok
// SIG undefined FUN_143a13d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143a13dff) */
/* WARNING: Removing unreachable block (ram,0x000143a13e11) */

void FUN_143a13d00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_168 [56];
  ulonglong local_130;
  undefined8 *local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong local_d0 [2];
  undefined1 local_c0 [128];
  ulonglong local_40;
  
  local_e0 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_108 = local_108 & 0xffffffff00000000;
  uVar6 = *(ulonglong *)(param_2 + param_3 * 8);
  do {
    uVar7 = *(ulonglong *)(uVar6 + 0x18);
    local_110 = uVar7;
    lVar2 = FUN_143a0ed20(param_1,uVar6);
    uVar8 = *(longlong *)(param_1 + 0x10) + lVar2 & *(longlong *)(param_1 + 8) - 1U;
    lVar2 = uVar8 * 8;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
    if (lVar1 == 0) {
      *(undefined8 *)(uVar6 + 0x18) = 0;
      *(ulonglong *)(lVar2 + *(longlong *)(param_1 + 0x20)) = uVar6;
      local_110 = uVar7;
      local_130 = uVar6;
LAB_143a13f31:
      uVar6 = *(ulonglong *)(param_1 + 0x18);
      if (uVar8 < *(ulonglong *)(param_1 + 0x18)) {
        uVar6 = uVar8;
      }
      *(ulonglong *)(param_1 + 0x18) = uVar6;
      uVar7 = local_110;
      local_128 = (undefined8 *)param_1;
      local_120 = uVar8;
      local_e8 = uVar8;
    }
    else {
      local_100 = uVar8 ^ 1;
      local_118 = local_100 * 8;
      if (lVar1 == *(longlong *)(local_118 + *(longlong *)(param_1 + 0x20))) {
        *(undefined8 *)(uVar6 + 0x18) = 0;
        local_110 = uVar6;
        FUN_143a0dbe0(*(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x20)),local_c0,0,&local_110);
      }
      else {
        uVar5 = 0;
        lVar3 = lVar1;
        do {
          uVar5 = uVar5 + 1;
          lVar3 = *(longlong *)(lVar3 + 0x18);
        } while (lVar3 != 0);
        if (7 < uVar5) {
          lVar2 = *(longlong *)(param_1 + 0x28);
          if (lVar2 == 0) {
            uVar4 = operator_new(0x18);
          }
          else {
            if (*(longlong *)(lVar2 + 0x70) != 0) {
              FUN_1439f01b0(lVar2,&.E::RTTI_Type_Descriptor,0x18);
            }
            uVar4 = FUN_1439efd10(lVar2,0x18);
          }
          local_130 = *(ulonglong *)(param_1 + 0x28);
          local_128 = (undefined8 *)0x0;
          local_120 = 0;
          local_128 = (undefined8 *)FUN_143a14340(&local_130);
          local_108 = local_130;
          FUN_143a0d2d0(uVar4,&local_130,&local_108);
          FUN_143a14c20(&local_130,local_d8,*local_128,local_128);
          if (local_130 == 0) {
            FMemory::operator_delete(local_128,0x28);
          }
          FUN_143a0f920(param_1,local_100,uVar4);
          FUN_143a0f920(param_1,uVar8);
          *(undefined8 *)(local_118 + *(longlong *)(param_1 + 0x20)) = uVar4;
          *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8) = uVar4;
          *(undefined8 *)(uVar6 + 0x18) = 0;
          local_118 = uVar6;
          FUN_143a0dbe0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8),local_d0,0,
                        &local_118);
          local_130 = *(ulonglong *)(local_d0[0] + 0x20);
          uVar8 = uVar8 & 0xfffffffffffffffe;
          goto LAB_143a13f31;
        }
        *(longlong *)(uVar6 + 0x18) = lVar1;
        *(ulonglong *)(lVar2 + *(longlong *)(param_1 + 0x20)) = uVar6;
      }
    }
    uVar6 = uVar7;
    if (uVar7 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 143a13fd0 FUN_143a13fd0 body=875 status=ok
// SIG undefined FUN_143a13fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a13fd0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_168 [52];
  uint local_134;
  ulonglong local_130;
  undefined8 *local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong *local_100;
  undefined1 local_f8 [24];
  ulonglong local_e0;
  undefined8 local_d8;
  longlong local_d0 [2];
  undefined1 local_c0 [16];
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_d8 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_134 = 0;
  local_110 = local_110 & 0xffffffff00000000;
  plVar12 = *(longlong **)(param_2 + param_3 * 8);
  plVar11 = *(longlong **)plVar12[1];
  local_100 = plVar12;
  do {
    uVar10 = plVar11[4];
    lVar6 = FUN_143a0ed20(param_1,uVar10);
    uVar13 = *(longlong *)(param_1 + 0x10) + lVar6 & *(longlong *)(param_1 + 8) - 1U;
    lVar6 = uVar13 * 8;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar6);
    if (lVar2 == 0) {
      *(undefined8 *)(uVar10 + 0x18) = 0;
      *(ulonglong *)(lVar6 + *(longlong *)(param_1 + 0x20)) = uVar10;
      local_130 = uVar10;
LAB_143a14210:
      uVar10 = *(ulonglong *)(param_1 + 0x18);
      if (uVar13 < *(ulonglong *)(param_1 + 0x18)) {
        uVar10 = uVar13;
      }
      *(ulonglong *)(param_1 + 0x18) = uVar10;
      local_128 = (undefined8 *)param_1;
      local_120 = uVar13;
      local_e0 = uVar13;
    }
    else {
      local_108 = uVar13 ^ 1;
      local_118 = local_108 * 8;
      if (lVar2 == *(longlong *)(local_118 + *(longlong *)(param_1 + 0x20))) {
        *(undefined8 *)(uVar10 + 0x18) = 0;
        local_118 = uVar10;
        FUN_143a0dbe0(*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x20)),local_c0,0,&local_118);
      }
      else {
        uVar9 = 0;
        lVar7 = lVar2;
        do {
          uVar9 = uVar9 + 1;
          lVar7 = *(longlong *)(lVar7 + 0x18);
        } while (lVar7 != 0);
        if (7 < uVar9) {
          lVar6 = *(longlong *)(param_1 + 0x28);
          if (lVar6 == 0) {
            uVar8 = operator_new(0x18);
          }
          else {
            if ((local_134 & 0x40) != 0) {
              local_134 = local_134 & 0xffffffbf;
              DsDevice::~DsDevice(local_b0);
            }
            if ((char)local_134 < '\0') {
              local_134 = local_134 & 0xffffff7f;
              DsDevice::~DsDevice(local_78);
            }
            if (*(longlong *)(lVar6 + 0x70) != 0) {
              FUN_1439f01b0(lVar6,&.E::RTTI_Type_Descriptor,0x18);
            }
            uVar8 = FUN_1439efd10(lVar6,0x18);
          }
          local_130 = *(ulonglong *)(param_1 + 0x28);
          local_128 = (undefined8 *)0x0;
          local_120 = 0;
          local_128 = (undefined8 *)FUN_143a14340(&local_130);
          local_110 = local_130;
          FUN_143a0d2d0(uVar8,&local_130,&local_110);
          FUN_143a14c20(&local_130,local_f8,*local_128,local_128);
          if (local_130 == 0) {
            FMemory::operator_delete(local_128,0x28);
          }
          FUN_143a0f920(param_1,local_108,uVar8);
          FUN_143a0f920(param_1,uVar13,uVar8);
          *(undefined8 *)(local_118 + *(longlong *)(param_1 + 0x20)) = uVar8;
          *(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar13 * 8) = uVar8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          local_118 = uVar10;
          FUN_143a0dbe0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar13 * 8),local_d0,0,
                        &local_118);
          local_130 = *(ulonglong *)(local_d0[0] + 0x20);
          uVar13 = uVar13 & 0xfffffffffffffffe;
          plVar12 = local_100;
          goto LAB_143a14210;
        }
        *(longlong *)(uVar10 + 0x18) = lVar2;
        *(ulonglong *)(lVar6 + *(longlong *)(param_1 + 0x20)) = uVar10;
      }
    }
    plVar3 = (longlong *)plVar12[1];
    plVar4 = (longlong *)plVar11[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar11 = plVar4;
      plVar4 = (longlong *)*plVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar11 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar1 = *(char *)(plVar11[1] + 0x19);
      plVar5 = (longlong *)plVar11[1];
      plVar4 = plVar11;
      while ((plVar11 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
        cVar1 = *(char *)(plVar11[1] + 0x19);
        plVar5 = (longlong *)plVar11[1];
        plVar4 = plVar11;
      }
    }
    if (plVar11 == plVar3) {
      lVar6 = *(longlong *)(param_1 + 0x28);
      FUN_143a14c20(plVar12,local_f8,*plVar3,plVar3);
      if (*plVar12 == 0) {
        FMemory::operator_delete(plVar12[1],0x28);
      }
      if (lVar6 == 0) {
        FMemory::operator_delete(plVar12,0x18);
      }
      return;
    }
  } while( true );
}



// FUNCTION 143a14340 FUN_143a14340 body=107 status=ok
// SIG undefined FUN_143a14340(void)

void FUN_143a14340(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = operator_new(0x28);
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,&.E::RTTI_Type_Descriptor,0x28);
    }
    lVar1 = FUN_1439efd10(lVar1,0x28);
  }
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 143a143b0 FUN_143a143b0 body=132 status=ok
// SIG undefined FUN_143a143b0(void)

longlong * FUN_143a143b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    plVar2 = (longlong *)operator_new(0x28);
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,&.E::RTTI_Type_Descriptor,0x28);
    }
    plVar2 = (longlong *)FUN_1439efd10(lVar1,0x28);
  }
  *plVar2 = param_1[1];
  plVar2[1] = param_1[1];
  plVar2[2] = param_1[1];
  return plVar2;
}



// FUNCTION 143a14440 FUN_143a14440 body=91 status=ok
// SIG undefined FUN_143a14440(void)

void FUN_143a14440(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_143a14440(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (*param_1 == 0) {
      FMemory::operator_delete(param_2,0x28);
    }
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143a144a0 _Extract body=853 status=ok
// SIG undefined _Extract(void)

longlong *
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
::_Extract(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar7 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar5 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar5 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar8 = (longlong *)plVar5[1];
      plVar7 = plVar5;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar5[2], plVar5 != param_2)) {
    plVar7[1] = (longlong)plVar5;
    *plVar5 = *param_2;
    plVar7 = plVar5;
    if (plVar5 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar5[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar5;
    }
    else {
      puVar3 = (undefined8 *)param_2[1];
      if ((longlong *)*puVar3 == param_2) {
        *puVar3 = plVar5;
      }
      else {
        puVar3[2] = plVar5;
      }
    }
    plVar5[1] = param_2[1];
    lVar2 = plVar5[3];
    *(char *)(plVar5 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar5 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar4 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar6 = plVar4;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar6 = (longlong *)plVar8[2];
        plVar5 = plVar8;
        while (plVar4 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar4[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar5 = plVar4;
        }
        *(longlong **)(lVar2 + 0x10) = plVar5;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar7;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar5 = (longlong *)*plVar6;
        if (plVar8 == plVar5) {
          plVar5 = (longlong *)plVar6[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar6;
            }
            plVar5[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
            }
            else {
              puVar3 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar3) {
                *puVar3 = plVar5;
              }
              else {
                puVar3[2] = plVar5;
              }
            }
            *plVar5 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar5;
            plVar5 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                *(undefined1 *)(plVar5 + 3) = 0;
                _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
                ::_Rrotate(param_1,plVar5);
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              _Lrotate(param_1,plVar6);
              break;
            }
LAB_143a1476d:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(plVar6 + 3) = 0;
            _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
            ::_Rrotate(param_1,plVar6);
            plVar5 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) == '\x01') && (*(char *)(*plVar5 + 0x18) == '\x01'))
            goto LAB_143a1476d;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              *(undefined1 *)(plVar5 + 3) = 0;
              _Lrotate(param_1,plVar5);
              plVar5 = (longlong *)*plVar6;
            }
            *(char *)(plVar5 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar5 + 0x18) = 1;
            _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
            ::_Rrotate(param_1,plVar6);
            break;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



// FUNCTION 143a14800 FUN_143a14800 body=23 status=ok
// SIG undefined FUN_143a14800(void)

void FUN_143a14800(longlong *param_1,undefined8 param_2)

{
  if (*param_1 == 0) {
    FMemory::operator_delete(param_2,0x28);
    return;
  }
  return;
}



// FUNCTION 143a14820 FUN_143a14820 body=29 status=ok
// SIG undefined FUN_143a14820(void)

void FUN_143a14820(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143a14c20(param_1,local_res8,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
  return;
}



// FUNCTION 143a14840 FUN_143a14840 body=170 status=ok
// SIG undefined FUN_143a14840(void)

longlong * FUN_143a14840(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  param_2[1] = param_1;
  uVar4 = *(ulonglong *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = 0;
  if (*(ulonglong *)(param_1 + 8) <= uVar4) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  do {
    lVar2 = *plVar1;
    lVar3 = *(longlong *)(uVar4 * 8 + lVar2);
    if (lVar3 != 0) {
      if (lVar3 != *(longlong *)(lVar2 + (uVar4 ^ 1) * 8)) {
        *param_2 = lVar3;
        return param_2;
      }
      if ((lVar3 != 0) && (lVar3 == *(longlong *)(lVar2 + (uVar4 ^ 1) * 8))) {
        *param_2 = *(longlong *)
                    (**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + 8) +
                    0x20);
        return param_2;
      }
    }
    uVar4 = uVar4 + 1;
    param_2[2] = uVar4;
    param_1 = param_2[1];
    if (*(ulonglong *)(param_1 + 8) <= uVar4) {
      return param_2;
    }
  } while( true );
}



// FUNCTION 143a148f0 FUN_143a148f0 body=243 status=ok
// SIG undefined FUN_143a148f0(void)

void FUN_143a148f0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [2] [16];
  
  pauVar4 = (undefined1 (*) [16])FUN_143a14840(param_1[2],local_28);
  auVar1 = *pauVar4;
  local_68 = auVar1._0_4_;
  uStack_64 = auVar1._4_4_;
  uStack_60 = auVar1._8_4_;
  uStack_5c = auVar1._12_4_;
  lVar2 = auVar1._0_8_;
  uVar3 = *(undefined8 *)pauVar4[1];
  while (lVar2 != 0) {
    local_58 = uVar3;
    if ((*param_1 == 0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) {
      FUN_1439fdc40(lVar2);
      FMemory::operator_delete(lVar2,0x20);
    }
    FUN_143a0eaf0(&local_68);
    local_78 = auVar1._0_4_;
    uStack_74 = auVar1._4_4_;
    uStack_70 = auVar1._8_4_;
    uStack_6c = auVar1._12_4_;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_38 = uVar3;
    FUN_143a14dd0(param_1[2],&local_48);
    lVar2 = CONCAT44(uStack_64,local_68);
    auVar1._8_4_ = uStack_60;
    auVar1._0_8_ = lVar2;
    auVar1._12_4_ = uStack_5c;
    uVar3 = local_58;
    local_28[0] = auVar1;
  }
  return;
}



// FUNCTION 143a149f0 FUN_143a149f0 body=520 status=ok
// SIG undefined FUN_143a149f0(void)

void FUN_143a149f0(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 local_30 [8];
  
  uVar11 = 0;
  if (param_1[1] != 0) {
    do {
      lVar2 = param_1[4];
      plVar9 = *(longlong **)(lVar2 + uVar11 * 8);
      if (plVar9 != (longlong *)0x0) {
        if (plVar9 == *(longlong **)(lVar2 + (uVar11 ^ 1) * 8)) {
          if ((plVar9 != (longlong *)0x0) && (plVar9 == *(longlong **)(lVar2 + (uVar11 ^ 1) * 8))) {
            *(undefined8 *)(lVar2 + 8 + uVar11 * 8) = 0;
            *(undefined8 *)(param_1[4] + uVar11 * 8) = 0;
            plVar7 = *(longlong **)plVar9[1];
            do {
              lVar2 = plVar7[4];
              plVar3 = (longlong *)plVar7[2];
              if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar3 + 0x19);
                plVar8 = plVar3;
                plVar4 = (longlong *)*plVar3;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar4 + 0x19);
                  plVar8 = plVar4;
                  plVar4 = (longlong *)*plVar4;
                }
              }
              else {
                cVar1 = *(char *)(plVar7[1] + 0x19);
                plVar5 = (longlong *)plVar7[1];
                plVar4 = plVar7;
                while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
                  cVar1 = *(char *)(plVar8[1] + 0x19);
                  plVar5 = (longlong *)plVar8[1];
                  plVar4 = plVar8;
                }
              }
              if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
                plVar3 = (longlong *)*plVar3;
                cVar1 = *(char *)((longlong)plVar3 + 0x19);
                while (cVar1 == '\0') {
                  plVar3 = (longlong *)*plVar3;
                  cVar1 = *(char *)((longlong)plVar3 + 0x19);
                }
              }
              else {
                cVar1 = *(char *)(plVar7[1] + 0x19);
                plVar3 = (longlong *)plVar7[1];
                while ((plVar4 = plVar3, cVar1 == '\0' && (plVar7 == (longlong *)plVar4[2]))) {
                  cVar1 = *(char *)(plVar4[1] + 0x19);
                  plVar3 = (longlong *)plVar4[1];
                  plVar7 = plVar4;
                }
              }
              uVar6 = std::
                      _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
                      ::_Extract(plVar9 + 1);
              if (*plVar9 == 0) {
                FMemory::operator_delete(uVar6,0x28);
              }
              FUN_1439fdc40(lVar2);
              lVar10 = param_1[5];
              if (lVar10 == 0) {
                FMemory::operator_delete(lVar2,0x20);
                lVar10 = param_1[5];
              }
              plVar3 = (longlong *)plVar9[1];
              plVar7 = plVar8;
            } while (plVar8 != plVar3);
            FUN_143a14c20(plVar9,local_30,*plVar3,plVar3);
            if (*plVar9 == 0) {
              FMemory::operator_delete(plVar9[1],0x28);
            }
            if (lVar10 == 0) {
              FMemory::operator_delete(plVar9,0x18);
            }
            uVar11 = uVar11 + 1;
          }
        }
        else {
          *(undefined8 *)(lVar2 + uVar11 * 8) = 0;
          do {
            plVar7 = (longlong *)plVar9[3];
            FUN_1439fdc40(plVar9);
            if (param_1[5] == 0) {
              FMemory::operator_delete(plVar9,0x20);
            }
            plVar9 = plVar7;
          } while (plVar7 != (longlong *)0x0);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)param_1[1]);
  }
  *param_1 = 0;
  param_1[3] = param_1[1];
  return;
}



// FUNCTION 143a14c00 FUN_143a14c00 body=26 status=ok
// SIG undefined FUN_143a14c00(void)

void FUN_143a14c00(longlong *param_1,undefined8 param_2,longlong param_3)

{
  if (*param_1 == 0) {
    FMemory::operator_delete(param_2,param_3 * 0x28);
    return;
  }
  return;
}



// FUNCTION 143a14c20 FUN_143a14c20 body=417 status=ok
// SIG undefined FUN_143a14c20(void)

undefined8 *
FUN_143a14c20(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)param_1[1];
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    plVar4 = plVar2;
    plVar6 = (longlong *)plVar2[1];
    if (*(char *)(plVar2[1] + 0x19) == '\0') {
      do {
        FUN_143a14440(param_1,plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        if (*param_1 == 0) {
          FMemory::operator_delete(plVar6,0x28);
        }
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      plVar4 = (longlong *)param_1[1];
    }
    plVar4[1] = (longlong)plVar2;
    *(longlong **)param_1[1] = plVar2;
    *(longlong **)(param_1[1] + 0x10) = plVar2;
    param_1[2] = 0;
    *param_2 = *(undefined8 *)param_1[1];
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
              ::_Extract(param_1 + 1);
      param_3 = plVar4;
      if (*param_1 == 0) {
        FMemory::operator_delete(uVar5,0x28);
      }
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143a14dd0 FUN_143a14dd0 body=534 status=ok
// SIG undefined FUN_143a14dd0(void)

void FUN_143a14dd0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_40;
  undefined1 local_38 [32];
  
  local_58 = 0xfffffffffffffffe;
  local_68 = (longlong *)0x0;
  lVar2 = param_2[1];
  uVar7 = *(longlong *)(lVar2 + 8) - 1U & param_2[2];
  param_2[2] = uVar7;
  lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar7 * 8);
  lVar3 = *param_2;
  if (lVar8 == lVar3) {
LAB_143a14e1a:
    bVar5 = true;
  }
  else {
    if ((lVar8 != 0) && (lVar8 != *(longlong *)(*(longlong *)(lVar2 + 0x20) + (uVar7 ^ 1) * 8))) {
      for (lVar8 = *(longlong *)(lVar8 + 0x18); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
        if (lVar8 == lVar3) goto LAB_143a14e1a;
      }
    }
    lVar8 = FUN_143a0fc30(lVar2,local_38,lVar3,&local_68);
    local_40 = *(ulonglong *)(lVar8 + 0x10);
    param_2[2] = local_40;
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + local_40 * 8);
    if ((lVar8 == 0) || (lVar8 != *(longlong *)(*(longlong *)(lVar2 + 0x20) + (local_40 ^ 1) * 8)))
    {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  uVar7 = param_2[2];
  lVar2 = *(longlong *)(param_1[4] + uVar7 * 8);
  if (bVar5) {
    if (lVar2 == lVar3) {
      *(undefined8 *)(param_1[4] + uVar7 * 8) = *(undefined8 *)(lVar2 + 0x18);
    }
    else {
      uVar9 = FUN_143a0fc00(param_1,lVar3,*(undefined8 *)(lVar2 + 0x18));
      *(undefined8 *)(lVar2 + 0x18) = uVar9;
      *(longlong *)(param_1[4] + uVar7 * 8) = lVar2;
    }
  }
  else {
    FUN_143a0d4e0(lVar2,&local_68,local_68 + 4);
    plVar11 = local_68;
    while (plVar11 != local_60) {
      plVar4 = (longlong *)plVar11[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar11 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar11 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(plVar11[1] + 0x19);
        plVar6 = (longlong *)plVar11[1];
        plVar4 = plVar11;
        while ((plVar11 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
          cVar1 = *(char *)(plVar11[1] + 0x19);
          plVar6 = (longlong *)plVar11[1];
          plVar4 = plVar11;
        }
      }
    }
    FUN_143a14c20(lVar2,&local_68);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      uVar7 = uVar7 & 0xfffffffffffffffe;
      FUN_143a0fb80(param_1,lVar2);
      *(undefined8 *)(param_1[4] + 8 + uVar7 * 8) = 0;
      *(undefined8 *)(param_1[4] + uVar7 * 8) = 0;
    }
  }
  FUN_1439fdc40(lVar3);
  if (param_1[5] == 0) {
    FMemory::operator_delete(lVar3,0x20);
  }
  *param_1 = *param_1 + -1;
  uVar10 = param_1[3];
  if ((uVar7 == uVar10) && (uVar10 < (ulonglong)param_1[1])) {
    plVar11 = (longlong *)(param_1[4] + uVar10 * 8);
    do {
      if (*plVar11 != 0) {
        return;
      }
      uVar10 = uVar10 + 1;
      param_1[3] = uVar10;
      plVar11 = plVar11 + 1;
    } while (uVar10 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 143a14ff0 FUN_143a14ff0 body=401 status=ok
// SIG undefined FUN_143a14ff0(void)

longlong * FUN_143a14ff0(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  FUN_143a0fc30(param_1,&local_50,param_3,0);
  if (local_50 != 0) {
    lStack_60 = local_48;
    local_58 = local_40;
    local_68 = local_50;
    *(undefined1 *)(param_2 + 3) = 0;
    goto LAB_143a15162;
  }
  uVar1 = param_1[1];
  uVar2 = *param_1 + 1;
  uVar3 = uVar1 * 3 & 0x3fffffffffffffff;
  uVar6 = uVar3 >> 2;
  if (uVar2 < uVar6) {
    if ((uVar2 <= uVar3 >> 4) && (8 < uVar1)) {
      bVar5 = 1;
      lVar4 = (uVar2 * 5 >> 2) + 1;
      uVar3 = lVar4 * 2;
      while (uVar3 < uVar6) {
        bVar5 = bVar5 + 1;
        uVar3 = lVar4 << (bVar5 & 0x3f);
      }
      uVar2 = uVar1 >> (bVar5 & 0x3f);
      uVar3 = 8;
      if (8 < uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 != uVar1) goto LAB_143a150c5;
    }
  }
  else if (uVar1 < 0x800000000000001) {
    uVar3 = uVar1 * 2;
LAB_143a150c5:
    FUN_143a12350(param_1,uVar3);
    FUN_143a0fc30(param_1,&local_50,param_3,0);
  }
  lVar4 = param_1[5];
  if (lVar4 == 0) {
    lVar4 = operator_new(0x20);
  }
  else {
    if (*(longlong *)(lVar4 + 0x70) != 0) {
      FUN_1439f01b0(lVar4,&.E::RTTI_Type_Descriptor,0x20);
    }
    lVar4 = FUN_1439efd10(lVar4,0x20);
  }
  *(undefined4 *)(lVar4 + 8) = 0;
  FUN_143a0f7a0(lVar4,param_3);
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  FUN_143a110d0(param_1,&local_68,local_38,lVar4);
  *param_1 = *param_1 + 1;
  *(undefined1 *)(param_2 + 3) = 1;
LAB_143a15162:
  *param_2 = local_68;
  param_2[1] = lStack_60;
  param_2[2] = local_58;
  return param_2;
}



// FUNCTION 143a15190 FUN_143a15190 body=161 status=ok
// SIG undefined FUN_143a15190(void)

ulonglong FUN_143a15190(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 local_30 [40];
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = *(longlong *)(uVar1 + 8) - 1U & param_1[2];
  param_1[2] = uVar4;
  uVar3 = *(ulonglong *)(*(longlong *)(uVar1 + 0x20) + uVar4 * 8);
  if (uVar3 != uVar2) {
    if ((uVar3 != 0) && (uVar3 != *(ulonglong *)(*(longlong *)(uVar1 + 0x20) + (uVar4 ^ 1) * 8))) {
      for (uVar4 = *(ulonglong *)(uVar3 + 0x18); uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x18)) {
        if (uVar4 == uVar2) goto LAB_143a15229;
      }
    }
    lVar5 = FUN_143a0fc30(uVar1,local_30,uVar2,param_2);
    uVar1 = *(ulonglong *)(lVar5 + 0x10);
    param_1[2] = uVar1;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1[1] + 0x20) + uVar1 * 8);
    if ((uVar4 != 0) &&
       (uVar4 == *(ulonglong *)(*(longlong *)(param_1[1] + 0x20) + (uVar1 ^ 1) * 8))) {
      return uVar4 & 0xffffffffffffff00;
    }
  }
LAB_143a15229:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 143a15240 FUN_143a15240 body=24 status=ok
// SIG undefined FUN_143a15240(void)

undefined4 FUN_143a15240(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x90))();
  return **(undefined4 **)(lVar1 + 0x10);
}



// FUNCTION 143a15260 FUN_143a15260 body=42 status=ok
// SIG undefined FUN_143a15260(void)

longlong FUN_143a15260(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x58))();
  uVar3 = (uint)lVar2 | 1;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (ulonglong)(iVar1 * 9 + 0x49U >> 6) + lVar2;
}



// FUNCTION 143a15290 FUN_143a15290 body=1471 status=ok
// SIG undefined FUN_143a15290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a15290(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong _Size;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_158;
  undefined1 local_157 [7];
  undefined4 local_150;
  int local_14c;
  byte *local_148;
  byte *local_140;
  undefined8 local_138;
  int local_130;
  undefined8 local_12c;
  undefined2 local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  byte local_d0;
  undefined7 uStack_cf;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_f8 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar14 = 0;
  local_c0 = 0;
  local_b8 = 0xf;
  local_d0 = 0;
  uVar12 = uVar14;
LAB_143a152e2:
  do {
    while( true ) {
      pbVar13 = (byte *)*param_1;
      uVar10 = uVar14;
      if ((pbVar13 < (byte *)param_1[1]) && (uVar10 = (ulonglong)*pbVar13, *pbVar13 < 0x80)) {
        *param_1 = pbVar13 + 1;
      }
      else {
        uVar6 = FUN_1439f8c60(param_1,uVar10);
        uVar10 = (ulonglong)uVar6;
      }
      iVar5 = (int)uVar10;
      if (iVar5 == 0) goto LAB_143a15335;
      if (iVar5 == 0xc) {
        uVar9 = 1;
        goto LAB_143a15337;
      }
      if (iVar5 == 0x10) break;
      if (iVar5 == 0x1a) {
        if ((int)uVar12 == 0) {
          pbVar13 = (byte *)*param_1;
          uVar10 = uVar14;
          if (pbVar13 < (byte *)param_1[1]) {
            bVar1 = *pbVar13;
            uVar10 = (ulonglong)bVar1;
            uVar6 = (uint)bVar1;
            if (0x7f < bVar1) goto LAB_143a153a4;
            *param_1 = pbVar13 + 1;
          }
          else {
LAB_143a153a4:
            lVar7 = FUN_1439f8e20(param_1,uVar10);
            uVar6 = (uint)lVar7;
            if (lVar7 < 0) goto LAB_143a15335;
          }
          if ((int)uVar6 < 0) goto LAB_143a15335;
          iVar5 = 0x1f;
          if ((uVar6 | 1) != 0) {
            for (; (uVar6 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          uVar10 = (ulonglong)((iVar5 * 9 + 0x49U >> 6) + uVar6);
          if (local_c0 < uVar10) {
            _Size = uVar10 - local_c0;
            if (local_b8 - local_c0 < _Size) {
              local_168 = 0;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned___int64,char>
                        (&local_d0,_Size,0,_Size);
            }
            else {
              pbVar13 = &local_d0;
              if (0xf < local_b8) {
                pbVar13 = (byte *)CONCAT71(uStack_cf,local_d0);
              }
              pbVar13 = pbVar13 + local_c0;
              local_c0 = uVar10;
              _guard_xfg_dispatch_icall_nop(pbVar13,0,_Size);
              pbVar13[_Size] = 0;
            }
          }
          else {
            pbVar13 = &local_d0;
            if (0xf < local_b8) {
              pbVar13 = (byte *)CONCAT71(uStack_cf,local_d0);
            }
            local_c0 = uVar10;
            pbVar13[uVar10] = 0;
          }
          pbVar13 = &local_d0;
          if (0xf < local_b8) {
            pbVar13 = (byte *)CONCAT71(uStack_cf,local_d0);
          }
          uVar10 = (ulonglong)uVar6;
          uVar4 = uVar6;
          while (0x7f < uVar4) {
            *pbVar13 = (byte)uVar10 | 0x80;
            uVar10 = uVar10 >> 7;
            pbVar13 = pbVar13 + 1;
            uVar4 = (uint)uVar10;
          }
          *pbVar13 = (byte)uVar10;
          cVar3 = thunk_FUN_1439f8580(param_1,pbVar13 + 1,uVar6);
        }
        else {
          lVar7 = (**(code **)(*(longlong *)*param_2 + 0x268))
                            ((longlong *)*param_2,uVar12 & 0xffffffff);
          plVar11 = (longlong *)param_2[1];
          lVar8 = (**(code **)(*plVar11 + 0xb8))(plVar11,local_f0);
          plVar2 = *(longlong **)(lVar8 + 8);
          if (lVar7 == 0) {
            uVar9 = (**(code **)(*plVar2 + 0x10))(plVar2,plVar11);
            pbVar13 = (byte *)*param_1;
            uVar10 = uVar14;
            if ((pbVar13 < (byte *)param_1[1]) && (uVar10 = (ulonglong)*pbVar13, *pbVar13 < 0x80)) {
              *param_1 = pbVar13 + 1;
            }
            else {
              uVar10 = FUN_1439f8e20(param_1,uVar10);
              if ((longlong)uVar10 < 0) {
                cVar3 = '\0';
                goto joined_r0x000143a15497;
              }
            }
            uVar9 = FUN_1439fbd10(uVar9,uVar12 & 0xffffffff);
            cVar3 = google::protobuf::io::CodedInputStream::ReadString
                              (param_1,uVar9,uVar10 & 0xffffffff);
          }
          else {
            if ((*(int *)(lVar7 + 0x3c) == 3) || (iVar5 = FUN_143a009a0(lVar7), iVar5 != 0xb)) {
              uVar9 = FUN_1439eeb00(local_b0,2,
                                    "c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",0x1d3
                                   );
              uVar9 = FUN_1439eef00(uVar9,"Extensions of MessageSets must be optional messages.");
              FUN_1439eec50(&local_158,uVar9);
              DsDevice::~DsDevice(local_b0);
              goto LAB_143a15335;
            }
            uVar9 = (**(code **)(*plVar2 + 0x130))(plVar2,plVar11,lVar7,param_1[9]);
            cVar3 = FUN_143a15850(param_1,uVar9);
          }
        }
      }
      else {
        cVar3 = FUN_143a1e1e0(param_1,uVar10,0);
      }
joined_r0x000143a15497:
      if (cVar3 == '\0') {
LAB_143a15335:
        uVar9 = 0;
LAB_143a15337:
        if (0xf < local_b8) {
          uVar12 = local_b8 + 1;
          lVar8 = CONCAT71(uStack_cf,local_d0);
          lVar7 = lVar8;
          if (0xfff < uVar12) {
            uVar12 = local_b8 + 0x28;
            lVar7 = *(longlong *)(lVar8 + -8);
            if (0x1f < (lVar8 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar7,uVar12);
        }
        return uVar9;
      }
    }
    pbVar13 = (byte *)*param_1;
    uVar12 = uVar14;
    if ((pbVar13 < (byte *)param_1[1]) && (uVar12 = (ulonglong)*pbVar13, *pbVar13 < 0x80)) {
      *param_1 = pbVar13 + 1;
    }
    else {
      uVar12 = FUN_1439f8e20(param_1,uVar12);
      if ((longlong)uVar12 < 0) goto LAB_143a15335;
    }
  } while (local_c0 == 0);
  local_148 = &local_d0;
  if (0xf < local_b8) {
    local_148 = (byte *)CONCAT71(uStack_cf,local_d0);
  }
  local_140 = local_148 + (int)local_c0;
  local_138 = 0;
  local_130 = (int)local_c0;
  local_12c = 0;
  local_124 = 0;
  local_120 = (int)local_c0;
  local_11c = 0;
  local_118 = 0x7fffffff;
  local_114 = DAT_1468322e0;
  local_110 = DAT_1468322e0;
  local_108 = 0;
  uStack_100 = 0;
  lVar7 = (**(code **)(*(longlong *)*param_2 + 0x268))((longlong *)*param_2,uVar12 & 0xffffffff);
  plVar11 = (longlong *)param_2[1];
  lVar8 = (**(code **)(*plVar11 + 0xb8))(plVar11,local_e0);
  plVar2 = *(longlong **)(lVar8 + 8);
  if (lVar7 == 0) {
    uVar9 = (**(code **)(*plVar2 + 0x10))(plVar2,plVar11);
    uVar10 = uVar14;
    if ((local_148 < local_140) && (uVar10 = (ulonglong)*local_148, *local_148 < 0x80)) {
      local_148 = local_148 + 1;
    }
    else {
      uVar10 = FUN_1439f8e20(&local_148,uVar10);
      if ((longlong)uVar10 < 0) {
LAB_143a15753:
        cVar3 = '\0';
        goto LAB_143a15755;
      }
    }
    uVar9 = FUN_1439fbd10(uVar9,uVar12 & 0xffffffff);
    cVar3 = google::protobuf::io::CodedInputStream::ReadString(&local_148,uVar9,uVar10 & 0xffffffff)
    ;
LAB_143a15755:
    if (cVar3 != '\0') {
      local_c0 = 0;
      pbVar13 = &local_d0;
      if (0xf < local_b8) {
        pbVar13 = (byte *)CONCAT71(uStack_cf,local_d0);
      }
      *pbVar13 = 0;
      FUN_1439f83f0(&local_148);
      goto LAB_143a152e2;
    }
  }
  else {
    if ((*(int *)(lVar7 + 0x3c) != 3) && (iVar5 = FUN_143a009a0(lVar7), iVar5 == 0xb)) {
      plVar11 = (longlong *)(**(code **)(*plVar2 + 0x130))(plVar2,plVar11,lVar7,uStack_100);
      if ((local_148 < local_140) && (uVar6 = (uint)*local_148, *local_148 < 0x80)) {
        local_148 = local_148 + 1;
      }
      else {
        uVar6 = FUN_1439f98b0(&local_148);
        if ((int)uVar6 < 0) goto LAB_143a15753;
      }
      FUN_1439f8500(&local_148,&local_150,uVar6);
      if ((local_14c < 0) ||
         (cVar3 = (**(code **)(*plVar11 + 0x50))(plVar11,&local_148), cVar3 == '\0'))
      goto LAB_143a15753;
      cVar3 = FUN_1439f84b0(&local_148,local_150);
      goto LAB_143a15755;
    }
    uVar9 = FUN_1439eeb00(local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                          0x1d3);
    uVar9 = FUN_1439eef00(uVar9,"Extensions of MessageSets must be optional messages.");
    FUN_1439eec50(local_157,uVar9);
    DsDevice::~DsDevice(local_78);
  }
  FUN_1439f83f0(&local_148);
  goto LAB_143a15335;
}



// FUNCTION 143a15850 FUN_143a15850 body=130 status=ok
// SIG undefined FUN_143a15850(void)

ulonglong FUN_143a15850(undefined8 *param_1,longlong *param_2)

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
    if ((int)uVar2 < 0) goto LAB_143a158c5;
  }
  uVar2 = FUN_1439f8500(param_1,&local_res8,uVar3);
  if (-1 < local_resc) {
    uVar2 = (**(code **)(*param_2 + 0x50))(param_2,param_1);
    if ((char)uVar2 != '\0') {
      uVar3 = FUN_1439f84b0(param_1,local_res8);
      return uVar3;
    }
  }
LAB_143a158c5:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143a158e0 FUN_143a158e0 body=445 status=ok
// SIG undefined FUN_143a158e0(void)

void FUN_143a158e0(undefined8 param_1,void *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,void *param_6,longlong param_7,undefined8 param_8,void *param_9
                  ,void *param_10,longlong param_11,longlong param_12)

{
  size_t _Size;
  void *_Dst;
  
  param_4 = param_4 - param_11;
  _Dst = param_10;
  if ((param_4 != 0) && (_Dst = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        _Dst = param_10;
        if ((param_9 != param_2) && (_Dst = param_9, param_2 != param_10)) {
          __std_reverse_trivially_swappable_8(param_9);
          __std_reverse_trivially_swappable_8(param_2,param_10);
          __std_reverse_trivially_swappable_8(param_9,param_10);
          _Dst = (void *)((longlong)param_9 + ((longlong)param_10 - (longlong)param_2 >> 3) * 8);
        }
      }
      else {
        _Size = (longlong)param_10 - (longlong)param_2;
        _guard_xfg_dispatch_icall_nop(param_6,param_2,_Size);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_10 - ((longlong)param_2 - (longlong)param_9)),param_9,
                   (longlong)param_2 - (longlong)param_9);
        _guard_xfg_dispatch_icall_nop(param_9,param_6,_Size);
        _Dst = (void *)(_Size + (longlong)param_9);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(param_6,param_9,(longlong)param_2 - (longlong)param_9);
      _guard_xfg_dispatch_icall_nop(param_9,param_2,(longlong)param_10 - (longlong)param_2);
      _Dst = (void *)(((longlong)param_10 - (longlong)param_2) + (longlong)param_9);
      _guard_xfg_dispatch_icall_nop(_Dst,param_6,(longlong)param_2 - (longlong)param_9);
    }
  }
  FUN_143a15aa0(param_1,param_9,_Dst,param_11,param_12,param_6,param_7,param_8);
  FUN_143a15aa0(_Dst,param_10,param_3,param_4);
  return;
}



// FUNCTION 143a15aa0 FUN_143a15aa0 body=315 status=ok
// SIG undefined FUN_143a15aa0(void)

void FUN_143a15aa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while (cVar2 = FUN_143a19670(&param_8,*param_2,*param_1), cVar2 == '\0') {
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
      cVar2 = FUN_143a19670(&param_8,*param_3,param_2[-1]);
      param_5 = lVar3 + -1;
    } while (cVar2 == '\0');
    if (param_4 == 1) {
      uVar1 = *param_1;
      _guard_xfg_dispatch_icall_nop(param_1,param_2,(longlong)puVar4 - (longlong)param_2);
      *(undefined8 *)(((longlong)puVar4 - (longlong)param_2) + (longlong)param_1) = uVar1;
    }
    else {
      FUN_143a15be0(param_1,param_2,puVar4,param_4,lVar3,param_6,param_7,param_8);
    }
  }
  return;
}



// FUNCTION 143a15be0 FUN_143a15be0 body=677 status=ok
// SIG undefined FUN_143a15be0(void)

void FUN_143a15be0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
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
        puVar5 = (undefined8 *)FUN_143a190e0(param_1,param_2,puVar4,param_8);
        lVar8 = (longlong)puVar5 - (longlong)param_1 >> 3;
      }
      else {
        lVar8 = param_4 >> 1;
        puVar5 = param_1 + lVar8;
        puVar4 = (undefined8 *)FUN_143a18d10(param_2,param_3,puVar5);
        lVar6 = (longlong)puVar4 - (longlong)param_2 >> 3;
      }
      FUN_143a158e0(param_1,param_2,param_3,param_4,lVar2,param_6,param_7,uVar1,puVar5,puVar4,lVar8,
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
          cVar3 = FUN_143a19670(&param_5,*puVar7,*puVar9);
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
        cVar3 = FUN_143a19670(&param_5,*param_2,*puVar4);
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



// FUNCTION 143a15e90 FUN_143a15e90 body=906 status=ok
// SIG undefined FUN_143a15e90(void)

void FUN_143a15e90(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
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
      puVar6 = (undefined8 *)FUN_143a16620(puVar6,puVar6 + 0x20,param_5);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_143a16620(puVar6,param_2,param_5);
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
        cVar5 = FUN_143a19670(&local_60,*puVar8,*puVar6);
        if (cVar5 == '\0') break;
        uVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar13 = uVar4;
        puVar13 = puVar1;
        if (puVar8 == puVar3) {
          sVar7 = (longlong)puVar2 - (longlong)puVar6;
          _guard_xfg_dispatch_icall_nop(puVar1,puVar6,sVar7);
          goto LAB_143a15fba;
        }
      }
      uVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar13 = uVar4;
      puVar13 = puVar1;
    } while (puVar6 != puVar2);
    sVar7 = (longlong)puVar3 - (longlong)puVar8;
    _guard_xfg_dispatch_icall_nop(puVar1,puVar8,sVar7);
LAB_143a15fba:
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
              cVar5 = FUN_143a19670(local_58,*puVar8,*puVar6);
              if (cVar5 == '\0') break;
              uVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              *puVar13 = uVar4;
              puVar13 = puVar1;
              if (puVar8 == puVar3) {
                sVar7 = (longlong)puVar2 - (longlong)puVar6;
                _guard_xfg_dispatch_icall_nop(puVar1,puVar6,sVar7);
                goto LAB_143a160ca;
              }
            }
            uVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar13 = uVar4;
            puVar13 = puVar1;
          } while (puVar6 != puVar2);
          sVar7 = (longlong)puVar3 - (longlong)puVar8;
          _guard_xfg_dispatch_icall_nop(puVar1,puVar8,sVar7);
LAB_143a160ca:
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
              cVar5 = FUN_143a19670(local_58,*puVar8,*puVar6);
              if (cVar5 == '\0') break;
              uVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              *puVar13 = uVar4;
              puVar13 = puVar1;
              if (puVar8 == puVar3) {
                sVar7 = (longlong)puVar2 - (longlong)puVar6;
                _guard_xfg_dispatch_icall_nop(puVar1,puVar6,sVar7);
                goto LAB_143a161ca;
              }
            }
            uVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar13 = uVar4;
            puVar13 = puVar1;
          } while (puVar6 != puVar2);
          sVar7 = (longlong)puVar3 - (longlong)puVar8;
          _guard_xfg_dispatch_icall_nop(puVar1,puVar8,sVar7);
LAB_143a161ca:
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



// FUNCTION 143a16220 FUN_143a16220 body=589 status=ok
// SIG undefined FUN_143a16220(void)

longlong FUN_143a16220(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  
  uVar7 = *param_1;
  lVar1 = (longlong)(param_1[1] - uVar7) >> 4;
  if (lVar1 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar9 = lVar1 + 1;
  uVar3 = (longlong)(param_1[2] - uVar7) >> 4;
  uVar8 = uVar9;
  if ((uVar3 <= 0xfffffffffffffff - (uVar3 >> 1)) && (uVar8 = (uVar3 >> 1) + uVar3, uVar8 < uVar9))
  {
    uVar8 = uVar9;
  }
  uVar2 = uVar8 << 4;
  uVar3 = uVar8;
  puVar10 = param_1;
  if (uVar8 < 0x1000000000000000) {
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = operator_new(uVar2);
      }
      goto LAB_143a16315;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  uVar4 = uVar2 + 0x27;
  if (uVar4 <= uVar2) {
    uVar4 = 0xffffffffffffffff;
  }
  lVar1 = operator_new(uVar4);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar2 - 8) = lVar1;
LAB_143a16315:
  uVar5 = param_2 - uVar7 & 0xfffffffffffffff0;
  lVar6 = uVar5 + uVar2;
  *(undefined4 *)(lVar6 + 8) = 0;
  lVar1 = lVar6 + 0x10;
  uVar4 = uVar2;
  FUN_143a0f7a0(lVar6,param_3);
  uVar7 = param_1[1];
  if (param_2 == uVar7) {
    uVar4 = uVar2;
    for (uVar3 = *param_1; uVar3 != uVar7; uVar3 = uVar3 + 0x10) {
      *(undefined4 *)(uVar4 + 8) = 0;
      FUN_143a0f7a0(uVar4,uVar3);
      uVar4 = uVar4 + 0x10;
    }
  }
  else {
    FUN_143a1e930(param_1,*param_1,param_2,uVar2,uVar3,uVar9,uVar5,lVar1,uVar4,puVar10);
    FUN_143a1e930(param_1,param_2,param_1[1],lVar6 + 0x10);
  }
  uVar7 = *param_1;
  if (uVar7 != 0) {
    uVar3 = param_1[1];
    if (uVar7 != uVar3) {
      do {
        FUN_1439fdc40(uVar7);
        uVar7 = uVar7 + 0x10;
      } while (uVar7 != uVar3);
      uVar7 = *param_1;
    }
    uVar4 = param_1[2] - uVar7 & 0xfffffffffffffff0;
    uVar3 = uVar7;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      uVar3 = *(ulonglong *)(uVar7 - 8);
      if (0x1f < (uVar7 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3,uVar4);
  }
  *param_1 = uVar2;
  param_1[1] = uVar9 * 0x10 + uVar2;
  param_1[2] = uVar8 * 0x10 + uVar2;
  return *param_1 + uVar5;
}



// FUNCTION 143a16470 FUN_143a16470 body=420 status=ok
// SIG undefined FUN_143a16470(void)

longlong FUN_143a16470(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Dst;
  ulonglong uVar6;
  void *_Dst_00;
  longlong lVar7;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar7 = (longlong)param_2 - lVar3 >> 3;
  lVar2 = param_1[1] - lVar3 >> 3;
  if (lVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar1 = lVar2 + 1;
  uVar4 = param_1[2] - lVar3 >> 3;
  uVar6 = uVar1;
  if ((uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) && (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  uVar4 = uVar6 * 8;
  if (uVar6 < 0x2000000000000000) {
    uVar6 = uVar4;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        _Dst_00 = (void *)0x0;
      }
      else {
        _Dst_00 = (void *)operator_new(uVar4);
      }
      goto LAB_143a16563;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  uVar5 = uVar6 + 0x27;
  if (uVar5 <= uVar6) {
    uVar5 = 0xffffffffffffffff;
  }
  lVar3 = operator_new(uVar5);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst_00 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst_00 - 8) = lVar3;
LAB_143a16563:
  *(undefined8 *)((longlong)_Dst_00 + lVar7 * 8) = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = _Dst_00;
    param_2 = _Src;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = (void *)((longlong)_Dst_00 + (lVar7 + 1) * 8);
    _Size = param_1[1] - (longlong)param_2;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar6 = param_1[2] - lVar3 & 0xfffffffffffffff8;
    lVar2 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar2 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar6);
  }
  *param_1 = (longlong)_Dst_00;
  param_1[1] = (longlong)((longlong)_Dst_00 + uVar1 * 8);
  param_1[2] = (longlong)(uVar4 + (longlong)_Dst_00);
  return *param_1 + lVar7 * 8;
}



// FUNCTION 143a16620 FUN_143a16620 body=979 status=ok
// SIG undefined FUN_143a16620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143a16620(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
      cVar4 = FUN_143a19670(local_res18,plVar1,*param_1);
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
                                   "c:\\dev\\protobuf\\src\\google\\protobuf\\dynamic_message.h",
                                   0xe2);
            uVar14 = FUN_1439eef00(uVar14,"Invalid key for map field.");
            FUN_1439eec50(local_f8,uVar14);
            DsDevice::~DsDevice(local_78);
            goto LAB_143a169ae;
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
LAB_143a169ae:
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



// FUNCTION 143a16a20 FUN_143a16a20 body=1126 status=ok
// SIG undefined FUN_143a16a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a16a20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte extraout_var;
  longlong lVar11;
  ulonglong uVar12;
  byte extraout_var_00;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  int local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5 [5];
  undefined8 local_b0;
  undefined1 local_a8 [56];
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_b0 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = param_1;
  if (param_1 != param_2) {
    while (lVar1 = lVar1 + 0x10, lVar1 != param_2) {
      local_c0 = 0;
      FUN_143a0f7a0(&local_c8,lVar1);
      iVar5 = local_c0;
      if (local_c0 == 0) {
        uVar9 = FUN_1439eeb00(local_a8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",
                              0x184);
        uVar9 = FUN_1439eef00(uVar9,"Protocol Buffer map usage error:\n");
        uVar9 = FUN_1439eef00(uVar9,"MapKey::type MapKey is not initialized. ");
        uVar9 = FUN_1439eef00(uVar9,"Call set methods to initialize MapKey.");
        FUN_1439eec50(&local_b8,uVar9);
        DsDevice::~DsDevice(local_a8);
      }
      lVar16 = lVar1;
      switch(iVar5) {
      case 1:
        iVar5 = FUN_143a10380(param_1);
        iVar6 = FUN_143a10380(&local_c8);
        bVar17 = iVar6 < iVar5;
        break;
      case 2:
        lVar15 = FUN_143a105e0(param_1);
        lVar11 = FUN_143a105e0(&local_c8);
        bVar17 = lVar11 < lVar15;
        break;
      case 3:
        uVar7 = FUN_141529b00(param_1);
        uVar8 = FUN_141529b00(&local_c8);
        bVar17 = uVar8 < uVar7;
        break;
      case 4:
        uVar12 = FUN_143a10c10(param_1);
        uVar14 = FUN_143a10c10(&local_c8);
        bVar17 = uVar14 < uVar12;
        break;
      default:
        uVar9 = FUN_1439eeb00(local_70,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                              0x35a);
        uVar9 = FUN_1439eef00(uVar9,"Invalid key for map field.");
        FUN_1439eec50(local_b5,uVar9);
        DsDevice::~DsDevice(local_70);
        goto joined_r0x000143a16daf;
      case 7:
        bVar3 = FUN_143a0fd90(param_1);
        bVar4 = FUN_143a0fd90(&local_c8);
        bVar17 = bVar4 < bVar3;
        break;
      case 9:
        uVar9 = FUN_1415060c0(param_1);
        uVar10 = FUN_1415060c0(&local_c8);
        FUN_143925de0(uVar10,uVar9);
        bVar17 = (bool)(extraout_var >> 7);
      }
      iVar5 = local_c0;
      if (bVar17 == false) {
LAB_143a16bc3:
        while( true ) {
          lVar15 = lVar16 + -0x10;
          if (iVar5 == 0) {
            uVar9 = FUN_1439eeb00(local_a8,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h"
                                  ,0x184);
            uVar9 = FUN_1439eef00(uVar9,"Protocol Buffer map usage error:\n");
            uVar9 = FUN_1439eef00(uVar9,"MapKey::type MapKey is not initialized. ");
            uVar9 = FUN_1439eef00(uVar9,"Call set methods to initialize MapKey.");
            FUN_1439eec50(&local_b7,uVar9);
            DsDevice::~DsDevice(local_a8);
          }
          switch(iVar5) {
          case 1:
            iVar5 = FUN_143a10380(lVar15);
            iVar6 = FUN_143a10380(&local_c8);
            bVar17 = iVar6 < iVar5;
            break;
          case 2:
            lVar11 = FUN_143a105e0(lVar15);
            lVar13 = FUN_143a105e0(&local_c8);
            bVar17 = lVar13 < lVar11;
            break;
          case 3:
            uVar7 = FUN_141529b00(lVar15);
            uVar8 = FUN_141529b00(&local_c8);
            bVar17 = uVar8 < uVar7;
            break;
          case 4:
            uVar12 = FUN_143a10c10(lVar15);
            uVar14 = FUN_143a10c10(&local_c8);
            bVar17 = uVar14 < uVar12;
            break;
          default:
            goto switchD_143a16c41_caseD_5;
          case 7:
            bVar3 = FUN_143a0fd90(lVar15);
            bVar4 = FUN_143a0fd90(&local_c8);
            bVar17 = bVar4 < bVar3;
            break;
          case 9:
            uVar9 = FUN_1415060c0(lVar15);
            uVar10 = FUN_1415060c0(&local_c8);
            FUN_143925de0(uVar10,uVar9);
            bVar17 = (bool)(extraout_var_00 >> 7);
          }
          iVar5 = local_c0;
          if (bVar17 == false) break;
          FUN_143a0f7a0(lVar16,lVar15);
          lVar16 = lVar15;
        }
        FUN_143a0f7a0(lVar16,&local_c8);
      }
      else {
joined_r0x000143a16daf:
        while (lVar16 != param_1) {
          FUN_143a0f7a0(lVar16,lVar16 + -0x10);
          lVar16 = lVar16 + -0x10;
        }
        FUN_143a0f7a0(param_1,&local_c8);
      }
      plVar2 = local_c8;
      if ((local_c0 == 9) && (local_c8 != (longlong *)0x0)) {
        uVar12 = local_c8[3];
        if (0xf < uVar12) {
          uVar14 = uVar12 + 1;
          lVar16 = *local_c8;
          lVar15 = lVar16;
          if (0xfff < uVar14) {
            uVar14 = uVar12 + 0x28;
            lVar15 = *(longlong *)(lVar16 + -8);
            if (0x1f < (lVar16 - lVar15) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar15,uVar14);
        }
        plVar2[2] = 0;
        plVar2[3] = 0xf;
        *(undefined1 *)plVar2 = 0;
        FMemory::operator_delete(plVar2,0x20);
      }
    }
  }
  return param_2;
switchD_143a16c41_caseD_5:
  uVar9 = FUN_1439eeb00(local_70,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",0x35a)
  ;
  uVar9 = FUN_1439eef00(uVar9,"Invalid key for map field.");
  FUN_1439eec50(&local_b6,uVar9);
  DsDevice::~DsDevice(local_70);
  FUN_143a0f7a0(lVar16,lVar15);
  lVar16 = lVar15;
  goto LAB_143a16bc3;
}



// FUNCTION 143a16ed0 FUN_143a16ed0 body=1063 status=ok
// SIG undefined FUN_143a16ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a16ed0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

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
      cVar3 = FUN_143a19670(&local_res20,plVar15,*param_2);
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
                                   "c:\\dev\\protobuf\\src\\google\\protobuf\\dynamic_message.h",
                                   0xe2);
            uVar10 = FUN_1439eef00(uVar10,"Invalid key for map field.");
            FUN_1439eec50(local_e8,uVar10);
            DsDevice::~DsDevice(local_80);
            goto LAB_143a172d8;
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
LAB_143a172d8:
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



// FUNCTION 143a17320 FUN_143a17320 body=130 status=ok
// SIG undefined FUN_143a17320(void)

void FUN_143a17320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_res20 [8];
  
  cVar1 = FUN_143a199a0(local_res20,param_2,param_1);
  if (cVar1 != '\0') {
    FUN_143a18c40(param_2,param_1);
  }
  cVar1 = FUN_143a199a0(local_res20,param_3,param_2);
  if (cVar1 != '\0') {
    FUN_143a18c40(param_3,param_2);
    cVar1 = FUN_143a199a0(local_res20,param_2,param_1);
    if (cVar1 != '\0') {
      FUN_143a18c40(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 143a173b0 FUN_143a173b0 body=3897 status=ok
// SIG undefined FUN_143a173b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a173b0(ulonglong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte extraout_var_00;
  byte extraout_var_01;
  byte extraout_var_02;
  byte extraout_var_03;
  byte extraout_var_04;
  byte extraout_var_05;
  byte extraout_var_06;
  undefined8 uVar8;
  byte extraout_var;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115 [5];
  longlong *local_110;
  longlong *local_108;
  int local_100;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  ulonglong *local_98;
  undefined8 local_90;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_90 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar17 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 5) * 2;
  plVar15 = param_3 + -2;
  lVar13 = (longlong)plVar15 - (longlong)param_2 >> 4;
  local_110 = param_3;
  local_108 = param_2;
  local_98 = param_1;
  if (lVar13 < 0x29) {
    FUN_143a17320(param_2,plVar17,plVar15);
  }
  else {
    lVar13 = lVar13 + 1 >> 3;
    FUN_143a17320(param_2,param_2 + lVar13 * 2,param_2 + lVar13 * 4);
    FUN_143a17320(plVar17 + lVar13 * -2,plVar17,plVar17 + lVar13 * 2,param_4);
    FUN_143a17320(plVar15 + lVar13 * -4,plVar15 + lVar13 * -2,plVar15,param_4);
    FUN_143a17320(param_2 + lVar13 * 2,plVar17,plVar15 + lVar13 * -2,param_4);
    param_2 = local_108;
  }
  local_108 = plVar17 + 2;
  if (param_2 < plVar17) {
    while( true ) {
      plVar15 = plVar17 + -2;
      uVar3 = FUN_141515ef0(plVar15);
      switch(uVar3) {
      case 1:
        iVar4 = FUN_143a10380(plVar17);
        iVar5 = FUN_143a10380(plVar15);
        bVar20 = iVar5 < iVar4;
        break;
      case 2:
        lVar13 = FUN_143a105e0(plVar17);
        lVar9 = FUN_143a105e0(plVar15);
        bVar20 = lVar9 < lVar13;
        break;
      case 3:
        uVar6 = FUN_141529b00(plVar17);
        uVar7 = FUN_141529b00(plVar15);
        bVar20 = uVar7 < uVar6;
        break;
      case 4:
        uVar10 = FUN_143a10c10(plVar17);
        uVar12 = FUN_143a10c10(plVar15);
        bVar20 = uVar12 < uVar10;
        break;
      default:
        uVar11 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc"
                               ,0x35a);
        uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
        FUN_1439eec50(&local_118,uVar11);
        DsDevice::~DsDevice(local_88);
        bVar20 = true;
        break;
      case 7:
        bVar1 = FUN_143a0fd90(plVar17);
        bVar2 = FUN_143a0fd90(plVar15);
        bVar20 = bVar2 < bVar1;
        break;
      case 9:
        uVar11 = FUN_1415060c0(plVar17);
        uVar8 = FUN_1415060c0(plVar15);
        FUN_143925de0(uVar8,uVar11);
        bVar20 = (bool)(extraout_var >> 7);
      }
      if (bVar20 != false) break;
      uVar3 = FUN_141515ef0(plVar17);
      switch(uVar3) {
      case 1:
        iVar4 = FUN_143a10380(plVar15);
        iVar5 = FUN_143a10380(plVar17);
        bVar20 = iVar5 < iVar4;
        break;
      case 2:
        lVar13 = FUN_143a105e0(plVar15);
        lVar9 = FUN_143a105e0(plVar17);
        bVar20 = lVar9 < lVar13;
        break;
      case 3:
        uVar6 = FUN_141529b00(plVar15);
        uVar7 = FUN_141529b00(plVar17);
        bVar20 = uVar7 < uVar6;
        break;
      case 4:
        uVar10 = FUN_143a10c10(plVar15);
        uVar12 = FUN_143a10c10(plVar17);
        bVar20 = uVar12 < uVar10;
        break;
      default:
        uVar11 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc"
                               ,0x35a);
        uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
        FUN_1439eec50(&local_117,uVar11);
        DsDevice::~DsDevice(local_88);
        bVar20 = true;
        break;
      case 7:
        bVar1 = FUN_143a0fd90(plVar15);
        bVar2 = FUN_143a0fd90(plVar17);
        bVar20 = bVar2 < bVar1;
        break;
      case 9:
        uVar11 = FUN_1415060c0(plVar15);
        uVar8 = FUN_1415060c0(plVar17);
        FUN_143925de0(uVar8,uVar11);
        bVar20 = (bool)(extraout_var_00 >> 7);
      }
      if ((bVar20 != false) || (plVar17 = plVar15, plVar15 <= param_2)) break;
    }
  }
  plVar15 = local_110;
  plVar16 = local_108;
  plVar18 = plVar17;
  plVar19 = local_108;
  if (local_108 < local_110) {
    while( true ) {
      uVar3 = FUN_141515ef0(plVar16);
      switch(uVar3) {
      case 1:
        iVar4 = FUN_143a10380(plVar17);
        iVar5 = FUN_143a10380(plVar16);
        bVar20 = iVar5 < iVar4;
        break;
      case 2:
        lVar13 = FUN_143a105e0(plVar17);
        lVar9 = FUN_143a105e0(plVar16);
        bVar20 = lVar9 < lVar13;
        break;
      case 3:
        uVar6 = FUN_141529b00(plVar17);
        uVar7 = FUN_141529b00(plVar16);
        bVar20 = uVar7 < uVar6;
        break;
      case 4:
        uVar10 = FUN_143a10c10(plVar17);
        uVar12 = FUN_143a10c10(plVar16);
        bVar20 = uVar12 < uVar10;
        break;
      default:
        uVar11 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc"
                               ,0x35a);
        uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
        FUN_1439eec50(&local_117,uVar11);
        DsDevice::~DsDevice(local_88);
        bVar20 = true;
        break;
      case 7:
        bVar1 = FUN_143a0fd90(plVar17);
        bVar2 = FUN_143a0fd90(plVar16);
        bVar20 = bVar2 < bVar1;
        break;
      case 9:
        uVar11 = FUN_1415060c0(plVar17);
        uVar8 = FUN_1415060c0(plVar16);
        FUN_143925de0(uVar8,uVar11);
        bVar20 = (bool)(extraout_var_01 >> 7);
      }
      plVar19 = plVar16;
      if (bVar20 != false) break;
      uVar3 = FUN_141515ef0(plVar17);
      switch(uVar3) {
      case 1:
        iVar4 = FUN_143a10380(plVar17);
        iVar5 = FUN_143a10380(plVar16);
        bVar20 = iVar4 < iVar5;
        break;
      case 2:
        lVar13 = FUN_143a105e0(plVar17);
        lVar9 = FUN_143a105e0(plVar16);
        bVar20 = lVar13 < lVar9;
        break;
      case 3:
        uVar6 = FUN_141529b00(plVar17);
        uVar7 = FUN_141529b00(plVar16);
        bVar20 = uVar6 < uVar7;
        break;
      case 4:
        uVar10 = FUN_143a10c10(plVar17);
        uVar12 = FUN_143a10c10(plVar16);
        bVar20 = uVar10 < uVar12;
        break;
      default:
        uVar11 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc"
                               ,0x35a);
        uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
        FUN_1439eec50(&local_118,uVar11);
        DsDevice::~DsDevice(local_88);
        bVar20 = true;
        break;
      case 7:
        bVar1 = FUN_143a0fd90(plVar17);
        bVar2 = FUN_143a0fd90(plVar16);
        bVar20 = bVar1 < bVar2;
        break;
      case 9:
        uVar11 = FUN_1415060c0(plVar16);
        uVar8 = FUN_1415060c0(plVar17);
        FUN_143925de0(uVar8,uVar11);
        bVar20 = (bool)(extraout_var_02 >> 7);
      }
      if ((bVar20 != false) || (plVar16 = plVar16 + 2, plVar19 = plVar16, plVar15 <= plVar16))
      break;
    }
  }
LAB_143a17972:
  plVar14 = plVar18;
  if (plVar16 < plVar15) {
    uVar3 = FUN_141515ef0(plVar17);
    switch(uVar3) {
    case 1:
      iVar4 = FUN_143a10380(plVar16);
      iVar5 = FUN_143a10380(plVar17);
      bVar20 = iVar5 < iVar4;
      break;
    case 2:
      lVar13 = FUN_143a105e0(plVar16);
      lVar9 = FUN_143a105e0(plVar17);
      bVar20 = lVar9 < lVar13;
      break;
    case 3:
      uVar6 = FUN_141529b00(plVar16);
      uVar7 = FUN_141529b00(plVar17);
      bVar20 = uVar7 < uVar6;
      break;
    case 4:
      uVar10 = FUN_143a10c10(plVar16);
      uVar12 = FUN_143a10c10(plVar17);
      bVar20 = uVar12 < uVar10;
      break;
    default:
      goto switchD_143a179a1_caseD_5;
    case 7:
      bVar1 = FUN_143a0fd90(plVar16);
      bVar2 = FUN_143a0fd90(plVar17);
      bVar20 = bVar2 < bVar1;
      break;
    case 9:
      uVar11 = FUN_1415060c0(plVar16);
      uVar8 = FUN_1415060c0(plVar17);
      FUN_143925de0(uVar8,uVar11);
      bVar20 = (bool)(extraout_var_03 >> 7);
    }
    if (bVar20 == false) {
      uVar3 = FUN_141515ef0(plVar16);
      switch(uVar3) {
      case 1:
        iVar4 = FUN_143a10380(plVar16);
        iVar5 = FUN_143a10380(plVar17);
        bVar20 = iVar4 < iVar5;
        break;
      case 2:
        lVar13 = FUN_143a105e0(plVar16);
        lVar9 = FUN_143a105e0(plVar17);
        bVar20 = lVar13 < lVar9;
        break;
      case 3:
        uVar6 = FUN_141529b00(plVar16);
        uVar7 = FUN_141529b00(plVar17);
        bVar20 = uVar6 < uVar7;
        break;
      case 4:
        uVar10 = FUN_143a10c10(plVar16);
        uVar12 = FUN_143a10c10(plVar17);
        bVar20 = uVar10 < uVar12;
        break;
      default:
        uVar11 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc"
                               ,0x35a);
        uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
        FUN_1439eec50(&local_118,uVar11);
        DsDevice::~DsDevice(local_88);
        goto joined_r0x000143a17c55;
      case 7:
        bVar1 = FUN_143a0fd90(plVar16);
        bVar2 = FUN_143a0fd90(plVar17);
        bVar20 = bVar1 < bVar2;
        break;
      case 9:
        uVar11 = FUN_1415060c0(plVar17);
        uVar8 = FUN_1415060c0(plVar16);
        FUN_143925de0(uVar8,uVar11);
        bVar20 = (bool)(extraout_var_04 >> 7);
      }
      if (bVar20 != false) goto joined_r0x000143a17c55;
      if (plVar19 != plVar16) {
        local_100 = 0;
        FUN_143a0f7a0(&local_108,plVar19);
        FUN_143a0f7a0(plVar19,plVar16);
        FUN_143a0f7a0(plVar16,&local_108);
        plVar14 = local_108;
        if ((local_100 == 9) && (local_108 != (longlong *)0x0)) {
          uVar10 = local_108[3];
          if (0xf < uVar10) {
            lVar13 = *local_108;
            uVar12 = uVar10 + 1;
            lVar9 = lVar13;
            if (0xfff < uVar12) {
              uVar12 = uVar10 + 0x28;
              lVar9 = *(longlong *)(lVar13 + -8);
              if (0x1f < (lVar13 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar9,uVar12);
          }
          plVar14[2] = 0;
          plVar14[3] = 0xf;
          *(undefined1 *)plVar14 = 0;
          FMemory::operator_delete(plVar14,0x20);
        }
      }
      plVar16 = plVar16 + 2;
      plVar19 = plVar19 + 2;
      goto LAB_143a17972;
    }
  }
  else {
joined_r0x000143a17c55:
    for (; param_2 < plVar18; plVar18 = plVar18 + -2) {
      plVar14 = plVar14 + -2;
      uVar3 = FUN_141515ef0(plVar14);
      switch(uVar3) {
      case 1:
        iVar4 = FUN_143a10380(plVar14);
        iVar5 = FUN_143a10380(plVar17);
        bVar20 = iVar4 < iVar5;
        break;
      case 2:
        lVar13 = FUN_143a105e0(plVar14);
        lVar9 = FUN_143a105e0(plVar17);
        bVar20 = lVar13 < lVar9;
        break;
      case 3:
        uVar6 = FUN_141529b00(plVar14);
        uVar7 = FUN_141529b00(plVar17);
        bVar20 = uVar6 < uVar7;
        break;
      case 4:
        uVar10 = FUN_143a10c10(plVar14);
        uVar12 = FUN_143a10c10(plVar17);
        bVar20 = uVar10 < uVar12;
        break;
      default:
        uVar11 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc"
                               ,0x35a);
        uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
        FUN_1439eec50(&local_116,uVar11);
        DsDevice::~DsDevice(local_88);
        goto LAB_143a17eed;
      case 7:
        bVar1 = FUN_143a0fd90(plVar14);
        bVar2 = FUN_143a0fd90(plVar17);
        bVar20 = bVar1 < bVar2;
        break;
      case 9:
        uVar11 = FUN_1415060c0(plVar17);
        uVar8 = FUN_1415060c0(plVar14);
        FUN_143925de0(uVar8,uVar11);
        bVar20 = (bool)(extraout_var_05 >> 7);
      }
      if (bVar20 == false) {
        uVar3 = FUN_141515ef0(plVar17);
        switch(uVar3) {
        case 1:
          iVar4 = FUN_143a10380(plVar14);
          iVar5 = FUN_143a10380(plVar17);
          bVar20 = iVar5 < iVar4;
          break;
        case 2:
          lVar13 = FUN_143a105e0(plVar14);
          lVar9 = FUN_143a105e0(plVar17);
          bVar20 = lVar9 < lVar13;
          break;
        case 3:
          uVar6 = FUN_141529b00(plVar14);
          uVar7 = FUN_141529b00(plVar17);
          bVar20 = uVar7 < uVar6;
          break;
        case 4:
          uVar10 = FUN_143a10c10(plVar14);
          uVar12 = FUN_143a10c10(plVar17);
          bVar20 = uVar12 < uVar10;
          break;
        default:
          uVar11 = FUN_1439eeb00(local_88,2,
                                 "c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",0x35a);
          uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
          FUN_1439eec50(local_115,uVar11);
          DsDevice::~DsDevice(local_88);
          plVar15 = local_110;
          goto LAB_143a17f49;
        case 7:
          bVar1 = FUN_143a0fd90(plVar14);
          bVar2 = FUN_143a0fd90(plVar17);
          bVar20 = bVar2 < bVar1;
          break;
        case 9:
          uVar11 = FUN_1415060c0(plVar14);
          uVar8 = FUN_1415060c0(plVar17);
          FUN_143925de0(uVar8,uVar11);
          bVar20 = (bool)(extraout_var_06 >> 7);
        }
        plVar15 = local_110;
        if (bVar20 != false) break;
        plVar17 = plVar17 + -2;
        if (plVar17 != plVar14) {
          local_f0 = 0;
          FUN_143a0f7a0(&local_f8,plVar17);
          FUN_143a0f7a0(plVar17,plVar14);
          FUN_143a0f7a0(plVar14,&local_f8);
          plVar15 = local_f8;
          if ((local_f0 == 9) && (local_f8 != (longlong *)0x0)) {
            uVar10 = local_f8[3];
            if (0xf < uVar10) {
              lVar13 = *local_f8;
              uVar12 = uVar10 + 1;
              lVar9 = lVar13;
              if (0xfff < uVar12) {
                uVar12 = uVar10 + 0x28;
                lVar9 = *(longlong *)(lVar13 + -8);
                if (0x1f < (lVar13 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FMemory::operator_delete(lVar9,uVar12);
            }
            plVar15[2] = 0;
            plVar15[3] = 0xf;
            *(undefined1 *)plVar15 = 0;
            FMemory::operator_delete(plVar15,0x20);
          }
        }
      }
LAB_143a17eed:
      plVar15 = local_110;
    }
LAB_143a17f49:
    if (plVar18 == param_2) {
      if (plVar16 == plVar15) {
        *local_98 = (ulonglong)plVar17;
        local_98[1] = (ulonglong)plVar19;
        return;
      }
      if (plVar19 != plVar16) {
        local_e0 = 0;
        FUN_143a0f7a0(&local_e8,plVar17);
        FUN_143a0f7a0(plVar17,plVar19);
        FUN_143a0f7a0(plVar19,&local_e8);
        plVar14 = local_e8;
        if ((local_e0 == 9) && (local_e8 != (longlong *)0x0)) {
          uVar10 = local_e8[3];
          if (0xf < uVar10) {
            lVar13 = *local_e8;
            uVar12 = uVar10 + 1;
            lVar9 = lVar13;
            if (0xfff < uVar12) {
              uVar12 = uVar10 + 0x28;
              lVar9 = *(longlong *)(lVar13 + -8);
              if (0x1f < (lVar13 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar9,uVar12);
          }
          plVar14[2] = 0;
          plVar14[3] = 0xf;
          *(undefined1 *)plVar14 = 0;
          FMemory::operator_delete(plVar14,0x20);
        }
      }
      local_d0 = 0;
      FUN_143a0f7a0(&local_d8,plVar17);
      FUN_143a0f7a0(plVar17,plVar16);
      FUN_143a0f7a0(plVar16,&local_d8);
      plVar14 = local_d8;
      if ((local_d0 == 9) && (local_d8 != (longlong *)0x0)) {
        uVar10 = local_d8[3];
        if (0xf < uVar10) {
          uVar12 = uVar10 + 1;
          lVar13 = *local_d8;
          lVar9 = lVar13;
          if (0xfff < uVar12) {
            uVar12 = uVar10 + 0x28;
            lVar9 = *(longlong *)(lVar13 + -8);
            if (0x1f < (lVar13 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar9,uVar12);
        }
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        FMemory::operator_delete(plVar14,0x20);
      }
      plVar17 = plVar17 + 2;
      plVar16 = plVar16 + 2;
      plVar19 = plVar19 + 2;
      goto LAB_143a17972;
    }
    plVar18 = plVar18 + -2;
    if (plVar16 == plVar15) {
      plVar17 = plVar17 + -2;
      if (plVar18 != plVar17) {
        local_c0 = 0;
        FUN_143a0f7a0(&local_c8,plVar18);
        FUN_143a0f7a0(plVar18,plVar17);
        FUN_143a0f7a0(plVar17,&local_c8);
        plVar14 = local_c8;
        if ((local_c0 == 9) && (local_c8 != (longlong *)0x0)) {
          uVar10 = local_c8[3];
          if (0xf < uVar10) {
            lVar13 = *local_c8;
            uVar12 = uVar10 + 1;
            lVar9 = lVar13;
            if (0xfff < uVar12) {
              uVar12 = uVar10 + 0x28;
              lVar9 = *(longlong *)(lVar13 + -8);
              if (0x1f < (lVar13 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar9,uVar12);
          }
          plVar14[2] = 0;
          plVar14[3] = 0xf;
          *(undefined1 *)plVar14 = 0;
          FMemory::operator_delete(plVar14,0x20);
        }
      }
      plVar19 = plVar19 + -2;
      local_b0 = 0;
      FUN_143a0f7a0(&local_b8,plVar17);
      FUN_143a0f7a0(plVar17,plVar19);
      FUN_143a0f7a0(plVar19,&local_b8);
      plVar14 = local_b8;
      if ((local_b0 == 9) && (local_b8 != (longlong *)0x0)) {
        uVar10 = local_b8[3];
        if (0xf < uVar10) {
          uVar12 = uVar10 + 1;
          lVar13 = *local_b8;
          lVar9 = lVar13;
          if (0xfff < uVar12) {
            uVar12 = uVar10 + 0x28;
            lVar9 = *(longlong *)(lVar13 + -8);
            if (0x1f < (lVar13 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar9,uVar12);
        }
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        FMemory::operator_delete(plVar14,0x20);
      }
      goto LAB_143a17972;
    }
    local_a0 = 0;
    FUN_143a0f7a0(&local_a8,plVar16);
    FUN_143a0f7a0(plVar16,plVar18);
    FUN_143a0f7a0(plVar18,&local_a8);
    plVar14 = local_a8;
    if ((local_a0 == 9) && (local_a8 != (longlong *)0x0)) {
      uVar10 = local_a8[3];
      if (0xf < uVar10) {
        uVar12 = uVar10 + 1;
        lVar13 = *local_a8;
        lVar9 = lVar13;
        if (0xfff < uVar12) {
          uVar12 = uVar10 + 0x28;
          lVar9 = *(longlong *)(lVar13 + -8);
          if (0x1f < (lVar13 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar9,uVar12);
      }
      plVar14[2] = 0;
      plVar14[3] = 0xf;
      *(undefined1 *)plVar14 = 0;
      FMemory::operator_delete(plVar14,0x20);
    }
  }
  plVar16 = plVar16 + 2;
  goto LAB_143a17972;
switchD_143a179a1_caseD_5:
  uVar11 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",0x35a
                        );
  uVar11 = FUN_1439eef00(uVar11,"Invalid key for map field.");
  FUN_1439eec50(&local_117,uVar11);
  DsDevice::~DsDevice(local_88);
  plVar16 = plVar16 + 2;
  goto LAB_143a17972;
}



// FUNCTION 143a18410 FUN_143a18410 body=584 status=ok
// SIG undefined FUN_143a18410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a18410(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  byte extraout_var;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_90 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar16 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_3 - 1;
  local_b0 = param_3;
  lVar14 = param_2;
  do {
    local_a8 = lVar1;
    local_a0 = param_4;
    local_98 = param_2;
    if (lVar16 <= lVar14) {
      if ((lVar14 == lVar16) && ((local_b0 & 1) == 0)) {
        FUN_143a0f7a0(lVar14 * 0x10 + param_1,param_1 + -0x10 + local_b0 * 0x10);
        lVar14 = lVar1;
      }
      local_c8 = param_5;
      FUN_143a18680(param_1,lVar14,param_2,param_4);
      return;
    }
    lVar1 = lVar14 * 2;
    lVar15 = lVar1 + 2;
    lVar17 = (lVar1 + 2) * 0x10 + param_1;
    uVar4 = FUN_141515ef0(lVar17);
    switch(uVar4) {
    case 1:
      iVar5 = FUN_143a10380(lVar17);
      iVar6 = FUN_143a10380(lVar17 + -0x10);
      bVar18 = iVar5 < iVar6;
      break;
    case 2:
      lVar10 = FUN_143a105e0(lVar17);
      lVar17 = FUN_143a105e0(lVar17 + -0x10);
      bVar18 = lVar10 < lVar17;
      break;
    case 3:
      uVar7 = FUN_141529b00(lVar17);
      uVar8 = FUN_141529b00(lVar17 + -0x10);
      bVar18 = uVar7 < uVar8;
      break;
    case 4:
      uVar11 = FUN_143a10c10(lVar17);
      uVar12 = FUN_143a10c10(lVar17 + -0x10);
      bVar18 = uVar11 < uVar12;
      break;
    default:
      uVar13 = FUN_1439eeb00(local_88,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                             0x35a);
      uVar13 = FUN_1439eef00(uVar13,"Invalid key for map field.");
      FUN_1439eec50(local_b8,uVar13);
      DsDevice::~DsDevice(local_88);
      goto LAB_143a185a5;
    case 7:
      bVar2 = FUN_143a0fd90(lVar17);
      bVar3 = FUN_143a0fd90(lVar17 + -0x10);
      bVar18 = bVar2 < bVar3;
      break;
    case 9:
      uVar13 = FUN_1415060c0(lVar17 + -0x10);
      uVar9 = FUN_1415060c0(lVar17);
      FUN_143925de0(uVar9,uVar13);
      bVar18 = (bool)(extraout_var >> 7);
    }
    if (bVar18 != false) {
LAB_143a185a5:
      lVar15 = lVar1 + 1;
    }
    FUN_143a0f7a0(lVar14 * 0x10 + param_1,lVar15 * 0x10 + param_1);
    lVar1 = local_a8;
    param_4 = local_a0;
    lVar14 = lVar15;
    param_2 = local_98;
  } while( true );
}



// FUNCTION 143a18680 FUN_143a18680 body=442 status=ok
// SIG undefined FUN_143a18680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a18680(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  byte extraout_var;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_80 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  while (param_3 < param_2) {
    lVar15 = param_2 + -1 >> 1;
    lVar14 = lVar15 * 0x10 + param_1;
    uVar3 = FUN_141515ef0(lVar14);
    switch(uVar3) {
    case 1:
      iVar4 = FUN_143a10380(param_4);
      iVar5 = FUN_143a10380(lVar14);
      bVar16 = iVar5 < iVar4;
      break;
    case 2:
      lVar9 = FUN_143a105e0(param_4);
      lVar10 = FUN_143a105e0(lVar14);
      bVar16 = lVar10 < lVar9;
      break;
    case 3:
      uVar6 = FUN_141529b00(param_4);
      uVar7 = FUN_141529b00(lVar14);
      bVar16 = uVar7 < uVar6;
      break;
    case 4:
      uVar11 = FUN_143a10c10(param_4);
      uVar12 = FUN_143a10c10(lVar14);
      bVar16 = uVar12 < uVar11;
      break;
    default:
      uVar13 = FUN_1439eeb00(local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                             0x35a);
      uVar13 = FUN_1439eef00(uVar13,"Invalid key for map field.");
      FUN_1439eec50(local_88,uVar13);
      DsDevice::~DsDevice(local_78);
      goto LAB_143a187eb;
    case 7:
      bVar1 = FUN_143a0fd90(param_4);
      bVar2 = FUN_143a0fd90(lVar14);
      bVar16 = bVar2 < bVar1;
      break;
    case 9:
      uVar13 = FUN_1415060c0(param_4);
      uVar8 = FUN_1415060c0(lVar14);
      FUN_143925de0(uVar8,uVar13);
      bVar16 = (bool)(extraout_var >> 7);
    }
    if (bVar16 == false) break;
LAB_143a187eb:
    FUN_143a0f7a0(param_1 + param_2 * 0x10,lVar14);
    param_2 = lVar15;
  }
  FUN_143a0f7a0(param_1 + param_2 * 0x10,param_4);
  return;
}



// FUNCTION 143a18860 FUN_143a18860 body=707 status=ok
// SIG undefined FUN_143a18860(void)

void FUN_143a18860(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_40;
  int local_38;
  undefined4 uStack_34;
  
  lVar3 = (longlong)param_2 - param_1;
  do {
    lVar3 = lVar3 >> 4;
    if (lVar3 < 0x21) {
LAB_143a1892b:
      if (1 < lVar3) {
        FUN_143a16a20(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        lVar3 = (longlong)param_2 - param_1 >> 4;
        lVar8 = (longlong)param_2 - param_1 >> 5;
        if (0 < lVar8) {
          lVar7 = lVar8 * 0x10 + param_1;
          do {
            lVar8 = lVar8 + -1;
            lVar7 = lVar7 + -0x10;
            local_38 = 0;
            FUN_143a0f7a0(&local_40,lVar7);
            FUN_143a18410(param_1,lVar8,lVar3,&local_40,param_4);
            plVar6 = local_40;
            if ((local_38 == 9) && (local_40 != (longlong *)0x0)) {
              uVar1 = local_40[3];
              if (0xf < uVar1) {
                lVar2 = *local_40;
                uVar5 = uVar1 + 1;
                lVar4 = lVar2;
                if (0xfff < uVar5) {
                  uVar5 = uVar1 + 0x28;
                  lVar4 = *(longlong *)(lVar2 + -8);
                  if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FMemory::operator_delete(lVar4,uVar5);
              }
              plVar6[2] = 0;
              plVar6[3] = 0xf;
              *(undefined1 *)plVar6 = 0;
              FMemory::operator_delete(plVar6,0x20);
            }
          } while (0 < lVar8);
        }
        if (lVar3 < 2) {
          return;
        }
        param_2 = param_2 + -2;
        do {
          if (1 < lVar3) {
            local_38 = 0;
            FUN_143a0f7a0(&local_40,param_2);
            FUN_143a0f7a0(param_2,param_1);
            FUN_143a18410(param_1,0,(longlong)param_2 - param_1 >> 4,&local_40,param_4);
            plVar6 = local_40;
            if ((local_38 == 9) && (local_40 != (longlong *)0x0)) {
              uVar1 = local_40[3];
              if (0xf < uVar1) {
                uVar5 = uVar1 + 1;
                lVar3 = *local_40;
                lVar8 = lVar3;
                if (0xfff < uVar5) {
                  uVar5 = uVar1 + 0x28;
                  lVar8 = *(longlong *)(lVar3 + -8);
                  if (0x1f < (lVar3 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FMemory::operator_delete(lVar8,uVar5);
              }
              plVar6[2] = 0;
              plVar6[3] = 0xf;
              *(undefined1 *)plVar6 = 0;
              FMemory::operator_delete(plVar6,0x20);
            }
          }
          param_2 = param_2 + -2;
          lVar3 = (longlong)((0x10 - param_1) + (longlong)param_2) >> 4;
        } while (1 < lVar3);
        return;
      }
      goto LAB_143a1892b;
    }
    FUN_143a173b0(&local_40,param_1,param_2,param_4);
    plVar6 = local_40;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar3 = CONCAT44(uStack_34,local_38);
    if ((longlong)((longlong)local_40 - param_1 & 0xfffffffffffffff0U) <
        (longlong)((longlong)param_2 - lVar3 & 0xfffffffffffffff0U)) {
      FUN_143a18860(param_1,local_40,param_3,param_4);
      plVar6 = param_2;
      param_1 = lVar3;
    }
    else {
      FUN_143a18860(lVar3,param_2,param_3,param_4);
    }
    lVar3 = (longlong)plVar6 - param_1;
    param_2 = plVar6;
  } while( true );
}



// FUNCTION 143a18b30 _Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_> body=262 status=ok
// SIG undefined _Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>(void)

void std::_Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 < 0x21) {
    FUN_143a16620(param_1,param_2,param_6);
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
    FUN_143a15e90();
    FUN_143a15e90(lVar1,param_2,lVar2,param_4,param_6);
  }
  FUN_143a15aa0(param_1,lVar1,param_2,param_3,lVar2,param_4,param_5,param_6);
  return;
}



// FUNCTION 143a18c40 FUN_143a18c40 body=193 status=ok
// SIG undefined FUN_143a18c40(void)

void FUN_143a18c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *local_20;
  int local_18;
  
  local_18 = 0;
  FUN_143a0f7a0(&local_20,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_143a0f7a0(param_1,param_2);
  FUN_143a0f7a0(param_2,&local_20);
  if ((local_18 == 9) && (local_20 != (longlong *)0x0)) {
    uVar1 = local_20[3];
    if (0xf < uVar1) {
      uVar4 = uVar1 + 1;
      lVar2 = *local_20;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        uVar4 = uVar1 + 0x28;
        lVar3 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar3,uVar4);
    }
    local_20[2] = 0;
    local_20[3] = 0xf;
    *(undefined1 *)local_20 = 0;
    FMemory::operator_delete(local_20,0x20);
  }
  return;
}



// FUNCTION 143a18d10 FUN_143a18d10 body=926 status=ok
// SIG undefined FUN_143a18d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143a18d10(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

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
        uVar13 = FUN_1439eeb00(local_78,2,
                               "c:\\dev\\protobuf\\src\\google\\protobuf\\dynamic_message.h",0xe2);
        uVar13 = FUN_1439eef00(uVar13,"Invalid key for map field.");
        FUN_1439eec50(local_e0,uVar13);
        DsDevice::~DsDevice(local_78);
        goto LAB_143a19059;
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
LAB_143a19059:
    param_1 = param_1 + lVar17 + 1;
    lVar17 = lVar3 + (-1 - lVar17);
  } while( true );
}



// FUNCTION 143a190e0 FUN_143a190e0 body=922 status=ok
// SIG undefined FUN_143a190e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143a190e0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

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
joined_r0x000143a19133:
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
      goto switchD_143a1919b_caseD_5;
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
switchD_143a1919b_caseD_5:
  uVar12 = FUN_1439eeb00(local_80,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\dynamic_message.h",
                         0xe2);
  uVar12 = FUN_1439eef00(uVar12,"Invalid key for map field.");
  FUN_1439eec50(local_f8,uVar12);
  DsDevice::~DsDevice(local_80);
  goto joined_r0x000143a19133;
}



// FUNCTION 143a194a0 FUN_143a194a0 body=217 status=ok
// SIG undefined FUN_143a194a0(void)

ulonglong * FUN_143a194a0(ulonglong *param_1,ulonglong param_2)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::vector<int,std::allocator<int>_>::_Xlength();
    }
    param_2 = param_2 * 8;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = operator_new(param_2);
      }
    }
    else {
      uVar2 = param_2 + 0x27;
      if (uVar2 <= param_2) {
        uVar2 = 0xffffffffffffffff;
      }
      lVar1 = operator_new(uVar2);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
    }
    *param_1 = uVar2;
    param_1[1] = uVar2;
    _Dst = (void *)*param_1;
    param_1[2] = (ulonglong)(param_2 + (longlong)_Dst);
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_2);
    param_1[1] = (ulonglong)(param_2 + (longlong)_Dst);
  }
  return param_1;
}



// FUNCTION 143a19580 FUN_143a19580 body=19 status=ok
// SIG undefined FUN_143a19580(void)

void FUN_143a19580(undefined8 *param_1)

{
  if (0x200 < (ulonglong)param_1[1]) {
    FMemory::operator_delete(*param_1);
    return;
  }
  return;
}



// FUNCTION 143a195a0 FUN_143a195a0 body=50 status=ok
// SIG undefined FUN_143a195a0(void)

void FUN_143a195a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_1439fdc40(lVar2);
  }
  return;
}



// FUNCTION 143a195e0 FUN_143a195e0 body=142 status=ok
// SIG undefined FUN_143a195e0(void)

void FUN_143a195e0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      do {
        FUN_1439fdc40(lVar2);
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    uVar1 = param_1[2] - lVar2 & 0xfffffffffffffff0;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar1 = uVar1 + 0x27;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143a19670 FUN_143a19670 body=774 status=ok
// SIG undefined FUN_143a19670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143a19670(undefined8 *param_1,longlong *param_2,undefined8 param_3)

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
    uVar11 = FUN_1439eeb00(&local_78,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\dynamic_message.h"
                           ,0xe2);
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



// FUNCTION 143a199a0 FUN_143a199a0 body=355 status=ok
// SIG undefined FUN_143a199a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143a199a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar3 = FUN_141515ef0(param_2);
  switch(uVar3) {
  case 1:
    iVar5 = FUN_143a10380(param_3);
    iVar6 = FUN_143a10380(param_2);
    uVar4 = (uint)(iVar6 < iVar5);
    break;
  case 2:
    lVar9 = FUN_143a105e0(param_3);
    lVar10 = FUN_143a105e0(param_2);
    uVar4 = (uint)(lVar10 < lVar9);
    break;
  case 3:
    uVar4 = FUN_141529b00(param_3);
    uVar7 = FUN_141529b00(param_2);
    uVar4 = (uint)(uVar7 < uVar4);
    break;
  case 4:
    uVar11 = FUN_143a10c10(param_3);
    uVar12 = FUN_143a10c10(param_2);
    uVar4 = (uint)(uVar12 < uVar11);
    break;
  default:
    uVar13 = FUN_1439eeb00(local_48,2,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                           0x35a);
    uVar13 = FUN_1439eef00(uVar13,"Invalid key for map field.");
    FUN_1439eec50(local_58,uVar13);
    DsDevice::~DsDevice(local_48);
    uVar4 = 1;
    break;
  case 7:
    bVar1 = FUN_143a0fd90(param_3);
    bVar2 = FUN_143a0fd90(param_2);
    uVar4 = (uint)(bVar2 < bVar1);
    break;
  case 9:
    uVar13 = FUN_1415060c0(param_3);
    uVar8 = FUN_1415060c0(param_2);
    uVar4 = FUN_143925de0(uVar8,uVar13);
    uVar4 = uVar4 >> 0x1f;
  }
  return uVar4;
}



// FUNCTION 143a19b30 FUN_143a19b30 body=582 status=ok
// SIG undefined FUN_143a19b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a19b30(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong local_60 [2];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_60[1] = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_50);
  lVar8 = *plVar3;
  lVar4 = (**(code **)(*param_1 + 0xb8))(param_1,local_40);
  plVar3 = *(longlong **)(lVar4 + 8);
  uVar14 = 0;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  if (*(char *)(*(longlong *)(lVar8 + 0x20) + 0x4b) == '\0') {
    (**(code **)(*plVar3 + 0x78))(plVar3,param_1,&local_78);
  }
  else {
    uVar7 = uVar14;
    if (0 < *(int *)(lVar8 + 0x68)) {
      do {
        local_60[0] = (longlong)(int)uVar7 * 0x98 + *(longlong *)(lVar8 + 0x28);
        if (local_68 == plStack_70) {
          FUN_143a16470(&local_78,plStack_70,local_60);
        }
        else {
          *plStack_70 = local_60[0];
          plStack_70 = plStack_70 + 1;
        }
        uVar9 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(lVar8 + 0x68));
    }
  }
  uVar7 = uVar14;
  uVar10 = uVar14;
  uVar11 = uVar14;
  if ((longlong)plStack_70 - local_78 >> 3 != 0) {
    do {
      lVar4 = FUN_143a19f40(*(undefined8 *)(local_78 + uVar7),param_1);
      uVar10 = uVar10 + lVar4;
      uVar9 = (int)uVar11 + 1;
      uVar7 = uVar7 + 8;
      uVar11 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)((longlong)plStack_70 - local_78 >> 3));
  }
  if (*(char *)(*(longlong *)(lVar8 + 0x20) + 0x48) == '\0') {
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,param_1);
    uVar14 = FUN_143a19d80(uVar6);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 8))();
    puVar13 = (uint *)*puVar5;
    uVar7 = puVar5[1] - (longlong)puVar13 >> 4;
    if (0 < (int)uVar7) {
      uVar7 = uVar7 & 0xffffffff;
      do {
        if (puVar13[1] == 3) {
          iVar1 = 0x1f;
          if ((*puVar13 | 1) != 0) {
            for (; (*puVar13 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          uVar12 = (uint)*(undefined8 *)(*(longlong *)(puVar13 + 2) + 0x10);
          uVar9 = uVar12 | 1;
          iVar2 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar14 = uVar14 + (longlong)(int)uVar12 +
                            (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 4 +
                            (ulonglong)(iVar2 * 9 + 0x49U >> 6);
        }
        puVar13 = puVar13 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  if (local_78 != 0) {
    uVar7 = (longlong)local_68 - local_78 & 0xfffffffffffffff8;
    lVar8 = local_78;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      lVar8 = *(longlong *)(local_78 + -8);
      if (0x1f < (local_78 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar8,uVar7);
  }
  return uVar10 + uVar14;
}



// FUNCTION 143a19d80 FUN_143a19d80 body=435 status=ok
// SIG undefined FUN_143a19d80(void)

ulonglong FUN_143a19d80(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar7 = *param_1;
  uVar8 = 0;
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (0 < (int)(param_1[1] - lVar7 >> 4)) {
    do {
      iVar2 = *(int *)(uVar10 + 4 + lVar7);
      piVar1 = (int *)(uVar10 + lVar7);
      if (iVar2 == 0) {
        uVar4 = *piVar1 << 3 | 1;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        lVar5 = 0x3f;
        if ((*(ulonglong *)(piVar1 + 2) | 1) != 0) {
          for (; (*(ulonglong *)(piVar1 + 2) | 1) >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar6 = (ulonglong)((int)lVar5 * 9 + 0x49U >> 6);
        uVar9 = uVar9 + (iVar2 * 9 + 0x49U >> 6);
LAB_143a19ef6:
        uVar9 = uVar9 + uVar6;
      }
      else if (iVar2 == 1) {
        uVar4 = *piVar1 << 3 | 5;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar9 = uVar9 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 4;
      }
      else if (iVar2 == 2) {
        uVar4 = *piVar1 << 3 | 1;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar9 = uVar9 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 8;
      }
      else {
        if (iVar2 == 3) {
          uVar4 = *piVar1 << 3 | 3;
          iVar2 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar4 = *(uint *)(*(longlong *)(piVar1 + 2) + 0x10) | 1;
          iVar3 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          uVar6 = (ulonglong)(iVar3 * 9 + 0x49U >> 6) + (ulonglong)(iVar2 * 9 + 0x49U >> 6) +
                  *(longlong *)(*(longlong *)(piVar1 + 2) + 0x10);
          goto LAB_143a19ef6;
        }
        if (iVar2 == 4) {
          uVar4 = *piVar1 << 3 | 3;
          iVar2 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          lVar5 = FUN_143a19d80(*(undefined8 *)(piVar1 + 2));
          lVar7 = *param_1;
          uVar4 = *piVar1 << 3 | 5;
          iVar3 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          uVar9 = uVar9 + (iVar2 * 9 + 0x49U >> 6) + lVar5 + (ulonglong)(iVar3 * 9 + 0x49U >> 6);
        }
      }
      uVar4 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar4;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar4 < (int)(param_1[1] - lVar7 >> 4));
  }
  return uVar9;
}



// FUNCTION 143a19f40 FUN_143a19f40 body=481 status=ok
// SIG undefined FUN_143a19f40(void)

longlong FUN_143a19f40(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_18 [16];
  
  lVar5 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar6 = *(longlong **)(lVar5 + 8);
  if ((((*(char *)(param_1 + 0x42) != '\0') &&
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x20) + 0x48) != '\0')) &&
      (iVar3 = FUN_143a009a0(param_1), *(int *)(&DAT_145cbed10 + (longlong)iVar3 * 4) == 10)) &&
     (*(int *)(param_1 + 0x3c) != 3)) {
    lVar5 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    uVar4 = *(uint *)(param_1 + 0x44) | 1;
    iVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)(lVar5 + 8) + 0xd0))
                       (*(longlong **)(lVar5 + 8),param_2,param_1,0);
    lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6);
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return (ulonglong)(iVar1 * 9 + 0x49U >> 6) + lVar5 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 4;
  }
  if (*(int *)(param_1 + 0x3c) == 3) {
    uVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_1);
    uVar8 = (ulonglong)uVar4;
  }
  else if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    cVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,param_2,param_1);
    uVar8 = (ulonglong)(cVar2 != '\0');
  }
  else {
    uVar8 = 1;
  }
  lVar5 = FUN_143a1a130(param_1,param_2);
  cVar2 = FUN_143a4f8e0(param_1);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 0x44) << 3 | 1;
    iVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar7 = (ulonglong)(iVar3 * 9 + 0x49U >> 6);
    iVar3 = FUN_143a009a0(param_1);
    if (iVar3 == 10) {
      uVar7 = uVar7 * 2;
    }
    lVar5 = lVar5 + uVar7 * uVar8;
  }
  else if (lVar5 != 0) {
    uVar4 = *(int *)(param_1 + 0x44) << 3 | 1;
    iVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar4 = (uint)lVar5 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + (ulonglong)(iVar1 * 9 + 0x49U >> 6);
  }
  return lVar5;
}



// FUNCTION 143a1a130 FUN_143a1a130 body=1905 status=ok
// SIG undefined FUN_143a1a130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a1a130(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70;
  undefined7 uStack_6f;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_88 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar4 = (**(code **)(*param_2 + 0xb8))(param_2,local_80);
  plVar8 = *(longlong **)(lVar4 + 8);
  uVar13 = 0;
  uVar12 = 0;
  iVar2 = FUN_143a009a0(param_1);
  if ((iVar2 == 0xb) && (cVar1 = FUN_143a4f8d0(param_1), cVar1 != '\0')) {
    plVar5 = (longlong *)(**(code **)(*plVar8 + 0x2d8))(plVar8,param_2,param_1);
    cVar1 = FUN_143a11340(plVar5);
    if (cVar1 != '\0') {
      FUN_1439fd820(&local_70,param_2,param_1);
      FUN_1439fd820(local_b8,param_2,param_1);
      lVar4 = FUN_143a4f9e0(param_1);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      lVar4 = FUN_143a4f9e0(param_1);
      lVar4 = *(longlong *)(lVar4 + 0x28);
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_70);
      (**(code **)(*plVar5 + 0x30))(plVar5,local_b8);
      cVar1 = (**(code **)(*local_68 + 0x20))(local_68,&local_70,local_b8);
      while (cVar1 == '\0') {
        lVar6 = FUN_143a1a8f0(uVar9,&local_60);
        lVar7 = FUN_143a1ab90(lVar4 + 0x98,local_50);
        lVar7 = lVar6 + 2 + lVar7;
        uVar10 = (uint)lVar7 | 1;
        iVar2 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar13 = uVar13 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + lVar7;
        (**(code **)(*local_68 + 0x88))(local_68,&local_70);
        cVar1 = (**(code **)(*local_68 + 0x20))(local_68,&local_70,local_b8);
      }
      (**(code **)(*local_b0 + 0x78))(local_b0,local_b8);
      FUN_1439fdc40(local_a8);
      (**(code **)(*local_68 + 0x78))(local_68,&local_70);
      FUN_1439fdc40(&local_60);
      return uVar13;
    }
  }
  if (*(int *)(param_1 + 0x3c) == 3) {
    uVar10 = (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_1);
    uVar14 = (ulonglong)uVar10;
  }
  else if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    cVar1 = (**(code **)(*plVar8 + 0x20))(plVar8,param_2,param_1);
    uVar14 = (ulonglong)(cVar1 != '\0');
  }
  else {
    uVar14 = 1;
  }
  uVar3 = FUN_143a009a0(param_1);
  uVar11 = uVar13;
  switch(uVar3) {
  case 1:
  case 6:
  case 0x10:
    uVar11 = uVar14 * 8;
    break;
  case 2:
  case 7:
  case 0xf:
    uVar11 = uVar14 * 4;
    break;
  case 3:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          uVar11 = (**(code **)(*plVar8 + 0x150))(plVar8,param_2,param_1,uVar13);
          lVar4 = 0x3f;
          if ((uVar11 | 1) != 0) {
            for (; (uVar11 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uVar12 = uVar12 + ((int)lVar4 * 9 + 0x49U >> 6);
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
        return uVar12;
      }
      return 0;
    }
    uVar13 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2,param_1);
    goto LAB_143a1a42b;
  case 4:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          uVar11 = (**(code **)(*plVar8 + 0x160))(plVar8,param_2,param_1,uVar13);
          lVar4 = 0x3f;
          if ((uVar11 | 1) != 0) {
            for (; (uVar11 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uVar12 = uVar12 + ((int)lVar4 * 9 + 0x49U >> 6);
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
        return uVar12;
      }
      return 0;
    }
    uVar13 = (**(code **)(*plVar8 + 0x98))(plVar8,param_2,param_1);
LAB_143a1a42b:
    lVar4 = 0x3f;
    if ((uVar13 | 1) != 0) {
      for (; (uVar13 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = (ulonglong)((int)lVar4 * 9 + 0x49);
    goto LAB_143a1a4ba;
  case 5:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          uVar10 = (**(code **)(*plVar8 + 0x148))(plVar8,param_2,param_1,uVar13);
          if ((int)uVar10 < 0) {
            uVar11 = 10;
          }
          else {
            iVar2 = 0x1f;
            if ((uVar10 | 1) != 0) {
              for (; (uVar10 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            uVar11 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
          }
          uVar12 = uVar12 + uVar11;
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
        return uVar12;
      }
      return 0;
    }
    uVar10 = (**(code **)(*plVar8 + 0x80))(plVar8,param_2,param_1);
    if ((int)uVar10 < 0) {
      return 10;
    }
    iVar2 = 0x1f;
    if ((uVar10 | 1) != 0) {
      for (; (uVar10 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    goto LAB_143a1a4b1;
  case 8:
    uVar11 = uVar14;
    break;
  case 9:
  case 0xc:
    uVar11 = uVar12;
    uVar12 = uVar13;
    if (uVar14 != 0) {
      do {
        local_60 = 0;
        local_58 = 0xf;
        local_70 = 0;
        if (*(int *)(param_1 + 0x3c) == 3) {
          local_c8 = &local_70;
          lVar4 = (**(code **)(*plVar8 + 0x1a0))(plVar8,param_2,param_1,uVar12);
        }
        else {
          lVar4 = (**(code **)(*plVar8 + 0xd8))(plVar8,param_2,param_1,&local_70);
        }
        uVar10 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
        iVar2 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar13 = uVar13 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
        if (0xf < local_58) {
          uVar11 = local_58 + 1;
          lVar6 = CONCAT71(uStack_6f,local_70);
          lVar4 = lVar6;
          if (0xfff < uVar11) {
            uVar11 = local_58 + 0x28;
            lVar4 = *(longlong *)(lVar6 + -8);
            if (0x1f < (lVar6 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar4,uVar11);
        }
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        uVar11 = uVar13;
      } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar11 = uVar12;
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          plVar5 = (longlong *)(**(code **)(*plVar8 + 0x198))(plVar8,param_2,param_1,uVar13);
          lVar4 = (**(code **)(*plVar5 + 0x58))(plVar5);
          uVar11 = uVar12 + lVar4;
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
          uVar12 = uVar11;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
      }
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0xd0))(plVar8,param_2,param_1,0);
      uVar11 = (**(code **)(*plVar8 + 0x58))(plVar8);
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar11 = uVar12;
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          uVar9 = (**(code **)(*plVar8 + 0x198))(plVar8,param_2,param_1,uVar13);
          lVar4 = FUN_143a15260(uVar9);
          uVar11 = uVar12 + lVar4;
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
          uVar12 = uVar11;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
      }
    }
    else {
      uVar9 = (**(code **)(*plVar8 + 0xd0))(plVar8,param_2,param_1,0);
      uVar11 = FUN_143a15260(uVar9);
    }
    break;
  case 0xd:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          uVar10 = (**(code **)(*plVar8 + 0x158))(plVar8,param_2,param_1,uVar13);
          iVar2 = 0x1f;
          if ((uVar10 | 1) != 0) {
            for (; (uVar10 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar12 = uVar12 + (iVar2 * 9 + 0x49U >> 6);
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
        return uVar12;
      }
      return 0;
    }
    uVar10 = (**(code **)(*plVar8 + 0x90))(plVar8,param_2,param_1);
    iVar2 = 0x1f;
    if ((uVar10 | 1) != 0) {
      for (; (uVar10 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar13 = (ulonglong)(iVar2 * 9 + 0x49);
    goto LAB_143a1a4ba;
  case 0xe:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          lVar4 = (**(code **)(*plVar8 + 0x188))(plVar8,param_2,param_1,uVar13);
          if ((int)*(uint *)(lVar4 + 0x10) < 0) {
            uVar11 = 10;
          }
          else {
            uVar10 = *(uint *)(lVar4 + 0x10) | 1;
            iVar2 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            uVar11 = (ulonglong)(iVar2 * 9 + 0x49U >> 6);
          }
          uVar12 = uVar12 + uVar11;
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
        return uVar12;
      }
      return 0;
    }
    lVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8,param_2,param_1);
    uVar10 = *(uint *)(lVar4 + 0x10);
    if ((int)uVar10 < 0) {
      return 10;
    }
    goto LAB_143a1a4ab;
  case 0x11:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          iVar2 = (**(code **)(*plVar8 + 0x148))(plVar8,param_2,param_1,uVar13);
          uVar10 = iVar2 >> 0x1f ^ iVar2 * 2 | 1;
          iVar2 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar12 = uVar12 + (iVar2 * 9 + 0x49U >> 6);
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
        return uVar12;
      }
      return 0;
    }
    iVar2 = (**(code **)(*plVar8 + 0x80))(plVar8,param_2,param_1);
    uVar10 = iVar2 >> 0x1f ^ iVar2 * 2;
LAB_143a1a4ab:
    iVar2 = 0x1f;
    if ((uVar10 | 1) != 0) {
      for (; (uVar10 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    goto LAB_143a1a4b1;
  case 0x12:
    if (*(int *)(param_1 + 0x3c) == 3) {
      uVar12 = uVar13;
      if (uVar14 != 0) {
        do {
          lVar4 = (**(code **)(*plVar8 + 0x150))(plVar8,param_2,param_1,uVar13);
          uVar11 = lVar4 >> 0x3f ^ lVar4 * 2 | 1;
          lVar4 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uVar12 = uVar12 + ((int)lVar4 * 9 + 0x49U >> 6);
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while ((ulonglong)(longlong)(int)uVar10 < uVar14);
        return uVar12;
      }
      return 0;
    }
    lVar4 = (**(code **)(*plVar8 + 0x88))(plVar8,param_2,param_1);
    uVar13 = lVar4 >> 0x3f ^ lVar4 * 2 | 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar2 = (int)lVar4;
LAB_143a1a4b1:
    uVar13 = (ulonglong)(iVar2 * 9 + 0x49);
LAB_143a1a4ba:
    uVar11 = uVar13 >> 6;
  }
  return uVar11;
}



// FUNCTION 143a1a8f0 FUN_143a1a8f0 body=595 status=ok
// SIG undefined FUN_143a1a8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a1a8f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_143a009a0();
  switch(uVar1) {
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                          0x48f);
    uVar4 = FUN_1439eef00(uVar4,"Unsupported");
    FUN_1439eec50(local_58,uVar4);
    goto LAB_143a1ab24;
  case 3:
    uVar6 = FUN_143a105e0(param_2);
    break;
  case 4:
    uVar6 = FUN_143a10c10(param_2);
    break;
  case 5:
    uVar5 = FUN_143a10380(param_2);
    if (-1 < (int)uVar5) {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      return (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    return 10;
  case 6:
  case 0x10:
    return 8;
  case 7:
  case 0xf:
    return 4;
  case 8:
    return 1;
  case 9:
    lVar3 = FUN_1415060c0(param_2);
    uVar5 = (uint)*(longlong *)(lVar3 + 0x10) | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    return (ulonglong)(iVar2 * 9 + 0x49U >> 6) + *(longlong *)(lVar3 + 0x10);
  case 0xd:
    uVar5 = FUN_141529b00(param_2);
    iVar2 = 0x1f;
    if ((uVar5 | 1) != 0) {
      for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    return (ulonglong)(iVar2 * 9 + 0x49U >> 6);
  case 0x11:
    iVar2 = FUN_143a10380(param_2);
    uVar5 = iVar2 >> 0x1f ^ iVar2 * 2 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar6 = (ulonglong)(iVar2 * 9 + 0x49);
    goto LAB_143a1a9d5;
  case 0x12:
    lVar3 = FUN_143a105e0(param_2);
    uVar6 = lVar3 >> 0x3f ^ lVar3 * 2 | 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar6 = (ulonglong)((int)lVar3 * 9 + 0x49);
    goto LAB_143a1a9d5;
  default:
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                          0x4aa);
    uVar4 = FUN_1439eef00(uVar4,"Cannot get here");
    FUN_1439eec50(local_58,uVar4);
LAB_143a1ab24:
    DsDevice::~DsDevice(local_48);
    return 0;
  }
  lVar3 = 0x3f;
  if ((uVar6 | 1) != 0) {
    for (; (uVar6 | 1) >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar6 = (ulonglong)((int)lVar3 * 9 + 0x49);
LAB_143a1a9d5:
  return uVar6 >> 6;
}



// FUNCTION 143a1ab90 FUN_143a1ab90 body=643 status=ok
// SIG undefined FUN_143a1ab90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143a1ab90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_143a009a0();
  switch(uVar1) {
  case 1:
  case 6:
  case 0x10:
    return 8;
  case 2:
  case 7:
  case 0xf:
    return 4;
  case 3:
    uVar6 = FUN_143a10710(param_2);
    break;
  case 4:
    uVar6 = FUN_143a10d40(param_2);
    break;
  case 5:
    uVar5 = FUN_143a104b0(param_2);
    goto LAB_143a1ac1d;
  case 8:
    return 1;
  case 9:
  case 0xc:
    lVar3 = FUN_143a109b0(param_2);
    uVar5 = (uint)*(longlong *)(lVar3 + 0x10) | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    return (ulonglong)(iVar2 * 9 + 0x49U >> 6) + *(longlong *)(lVar3 + 0x10);
  case 10:
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                          0x4b2);
    uVar4 = FUN_1439eef00(uVar4,"Unsupported");
    FUN_1439eec50(local_58,uVar4);
    goto LAB_143a1adf4;
  case 0xb:
    uVar4 = FUN_143a10860(param_2);
    uVar6 = FUN_143a15260(uVar4);
    return uVar6;
  case 0xd:
    uVar5 = FUN_143a10ae0(param_2);
    iVar2 = 0x1f;
    if ((uVar5 | 1) != 0) {
      for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    return (ulonglong)(iVar2 * 9 + 0x49U >> 6);
  case 0xe:
    uVar5 = FUN_143a10120(param_2);
LAB_143a1ac1d:
    if (-1 < (int)uVar5) {
      iVar2 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      return (ulonglong)(iVar2 * 9 + 0x49U >> 6);
    }
    return 10;
  case 0x11:
    iVar2 = FUN_143a104b0(param_2);
    uVar5 = iVar2 >> 0x1f ^ iVar2 * 2 | 1;
    iVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar6 = (ulonglong)(iVar2 * 9 + 0x49);
    goto LAB_143a1ac75;
  case 0x12:
    lVar3 = FUN_143a10710(param_2);
    uVar6 = lVar3 >> 0x3f ^ lVar3 * 2 | 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar6 = (ulonglong)((int)lVar3 * 9 + 0x49);
    goto LAB_143a1ac75;
  default:
    uVar4 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                          0x4d2);
    uVar4 = FUN_1439eef00(uVar4,"Cannot get here");
    FUN_1439eec50(local_58,uVar4);
LAB_143a1adf4:
    DsDevice::~DsDevice(local_48);
    return 0;
  }
  lVar3 = 0x3f;
  if ((uVar6 | 1) != 0) {
    for (; (uVar6 | 1) >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar6 = (ulonglong)((int)lVar3 * 9 + 0x49);
LAB_143a1ac75:
  return uVar6 >> 6;
}



// FUNCTION 143a1ae60 FUN_143a1ae60 body=3786 status=ok
// SIG undefined FUN_143a1ae60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_143a1ae60(uint param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  undefined8 *******pppppppuVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  char local_a0;
  ulonglong local_98 [2];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 *******local_70;
  char local_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_88 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar15 = (ulonglong)param_1;
  local_a8 = CONCAT44(local_a8._4_4_,param_1);
  lVar7 = (**(code **)(*param_3 + 0xb8))(param_3,local_80);
  plVar10 = *(longlong **)(lVar7 + 8);
  if (param_2 == 0) goto LAB_143a1bcf5;
  iVar5 = FUN_143a009a0(param_2);
  if ((param_1 & 7) != *(uint *)(&DAT_145cbad40 + (longlong)iVar5 * 4)) {
    if (*(int *)(param_2 + 0x3c) != 3) {
LAB_143a1bcf5:
      uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
      uVar4 = FUN_143a1e1e0(param_4,uVar15,uVar11);
      return uVar4;
    }
    iVar5 = FUN_143a009a0(param_2);
    if ((iVar5 - 9U < 4) || ((param_1 & 7) != 2)) goto LAB_143a1bcf5;
    uVar13 = 0;
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (uVar13 = (uint)*pbVar2, *pbVar2 < 0x80)) {
      *param_4 = (longlong)(pbVar2 + 1);
    }
    else {
      lVar7 = FUN_1439f8e20(param_4,uVar13);
      uVar13 = (uint)lVar7;
      if (lVar7 < 0) {
        return 0;
      }
    }
    uVar6 = FUN_1439f89d0(param_4,uVar13);
    local_70 = (undefined8 *******)CONCAT44(local_70._4_4_,uVar6);
    uVar6 = FUN_143a009a0(param_2);
    switch(uVar6) {
    case 1:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        if ((int)param_4[1] - (int)*param_4 < 8) {
          cVar3 = FUN_1439f8a80(param_4,&local_a8);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        else {
          local_a8 = *(ulonglong *)*param_4;
          *param_4 = (longlong)((ulonglong *)*param_4 + 1);
        }
        local_98[0] = local_a8;
        (**(code **)(*plVar10 + 0x228))(plVar10,param_3,param_2,local_a8);
      }
      break;
    case 2:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        if ((int)param_4[1] - (int)*param_4 < 4) {
          cVar3 = FUN_1439f8a20(param_4,local_98);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar6 = (uint)local_98[0];
        }
        else {
          uVar6 = *(undefined4 *)*param_4;
          local_98[0] = CONCAT44(local_98[0]._4_4_,uVar6);
          *param_4 = (longlong)((undefined4 *)*param_4 + 1);
        }
        local_a8 = CONCAT44(local_a8._4_4_,uVar6);
        (**(code **)(*plVar10 + 0x220))(plVar10,param_3,param_2,uVar6);
      }
      break;
    case 3:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        pbVar2 = (byte *)*param_4;
        if ((pbVar2 < (byte *)param_4[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
          *param_4 = (longlong)(pbVar2 + 1);
          uVar15 = (ulonglong)bVar12;
        }
        else {
          FUN_1439f8f00(param_4,&local_a8);
          uVar15 = local_a8;
          if (local_a0 == '\0') {
            return 0;
          }
        }
        (**(code **)(*plVar10 + 0x208))(plVar10,param_3,param_2,uVar15);
      }
      break;
    case 4:
      iVar5 = FUN_1439f8490(param_4);
      if (0 < iVar5) {
        do {
          pbVar2 = (byte *)*param_4;
          if ((pbVar2 < (byte *)param_4[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
            *param_4 = (longlong)(pbVar2 + 1);
            uVar15 = (ulonglong)bVar12;
          }
          else {
            FUN_1439f8f00(param_4,&local_a8);
            uVar15 = local_a8;
            if (local_a0 == '\0') {
              return 0;
            }
          }
          (**(code **)(*plVar10 + 0x218))(plVar10,param_3,param_2,uVar15);
          iVar5 = FUN_1439f8490(param_4);
        } while (0 < iVar5);
        FUN_1439f8990(param_4,(ulonglong)local_70 & 0xffffffff);
        return 1;
      }
      break;
    case 5:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        bVar12 = 0;
        pbVar2 = (byte *)*param_4;
        if (pbVar2 < (byte *)param_4[1]) {
          bVar12 = *pbVar2;
          uVar13 = (uint)bVar12;
          if (0x7f < bVar12) goto LAB_143a1afa4;
          *param_4 = (longlong)(pbVar2 + 1);
        }
        else {
LAB_143a1afa4:
          lVar7 = FUN_1439f8e20(param_4,bVar12);
          uVar13 = (uint)lVar7;
          if (lVar7 < 0) {
            return 0;
          }
        }
        (**(code **)(*plVar10 + 0x200))(plVar10,param_3,param_2,uVar13);
      }
      break;
    case 6:
      iVar5 = FUN_1439f8490(param_4);
      if (0 < iVar5) {
        do {
          if ((int)param_4[1] - (int)*param_4 < 8) {
            cVar3 = FUN_1439f8a80(param_4,&local_a8);
            if (cVar3 == '\0') {
              return 0;
            }
          }
          else {
            local_a8 = *(ulonglong *)*param_4;
            *param_4 = (longlong)((ulonglong *)*param_4 + 1);
          }
          (**(code **)(*plVar10 + 0x218))(plVar10,param_3,param_2,local_a8);
          iVar5 = FUN_1439f8490(param_4);
        } while (0 < iVar5);
        FUN_1439f8990(param_4,(ulonglong)local_70 & 0xffffffff);
        return 1;
      }
      break;
    case 7:
      iVar5 = FUN_1439f8490(param_4);
      if (0 < iVar5) {
        do {
          if ((int)param_4[1] - (int)*param_4 < 4) {
            cVar3 = FUN_1439f8a20(param_4,local_98);
            if (cVar3 == '\0') {
              return 0;
            }
            uVar6 = (uint)local_98[0];
          }
          else {
            uVar6 = *(undefined4 *)*param_4;
            local_98[0] = CONCAT44(local_98[0]._4_4_,uVar6);
            *param_4 = (longlong)((undefined4 *)*param_4 + 1);
          }
          (**(code **)(*plVar10 + 0x210))(plVar10,param_3,param_2,uVar6);
          iVar5 = FUN_1439f8490(param_4);
        } while (0 < iVar5);
        FUN_1439f8990(param_4,(ulonglong)local_70 & 0xffffffff);
        return 1;
      }
      break;
    case 8:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        pbVar2 = (byte *)*param_4;
        if ((pbVar2 < (byte *)param_4[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
          *param_4 = (longlong)(pbVar2 + 1);
          uVar15 = (ulonglong)bVar12;
        }
        else {
          FUN_1439f8f00(param_4,&local_a8);
          uVar15 = local_a8;
          if (local_a0 == '\0') {
            return 0;
          }
        }
        (**(code **)(*plVar10 + 0x230))(plVar10,param_3,param_2,uVar15 != 0);
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      goto switchD_143a1af73_caseD_9;
    case 0xd:
      iVar5 = FUN_1439f8490(param_4);
      while (0 < iVar5) {
        bVar12 = 0;
        pbVar2 = (byte *)*param_4;
        if (pbVar2 < (byte *)param_4[1]) {
          bVar12 = *pbVar2;
          uVar13 = (uint)bVar12;
          if (0x7f < bVar12) goto LAB_143a1b12f;
          *param_4 = (longlong)(pbVar2 + 1);
        }
        else {
LAB_143a1b12f:
          lVar7 = FUN_1439f8e20(param_4,bVar12);
          uVar13 = (uint)lVar7;
          if (lVar7 < 0) {
            return 0;
          }
        }
        (**(code **)(*plVar10 + 0x210))(plVar10,param_3,param_2,uVar13);
        iVar5 = FUN_1439f8490(param_4);
      }
      break;
    case 0xe:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        bVar12 = 0;
        pbVar2 = (byte *)*param_4;
        if (pbVar2 < (byte *)param_4[1]) {
          bVar12 = *pbVar2;
          uVar13 = (uint)bVar12;
          if (0x7f < bVar12) goto LAB_143a1b4dc;
          *param_4 = (longlong)(pbVar2 + 1);
        }
        else {
LAB_143a1b4dc:
          lVar7 = FUN_1439f8e20(param_4,bVar12);
          uVar13 = (uint)lVar7;
          if (lVar7 < 0) {
            return 0;
          }
        }
        plVar8 = (longlong *)(**(code **)(*param_3 + 0xb8))(param_3,local_98);
        if (*(int *)(*(longlong *)(*plVar8 + 0x10) + 0x3c) == 3) {
          (**(code **)(*plVar10 + 0x248))(plVar10,param_3,param_2,uVar13);
        }
        else {
          uVar11 = FUN_143a4dfa0(param_2);
          lVar7 = FUN_143a3fad0(uVar11,uVar13);
          if (lVar7 == 0) {
            uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
            FUN_1439fbd90(uVar11,uVar15 >> 3,(longlong)(int)uVar13);
            uVar15 = local_a8 & 0xffffffff;
          }
          else {
            (**(code **)(*plVar10 + 0x240))(plVar10,param_3,param_2,lVar7);
          }
        }
      }
      break;
    case 0xf:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        if ((int)param_4[1] - (int)*param_4 < 4) {
          cVar3 = FUN_1439f8a20(param_4,local_98);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar6 = (uint)local_98[0];
        }
        else {
          uVar6 = *(undefined4 *)*param_4;
          local_98[0] = CONCAT44(local_98[0]._4_4_,uVar6);
          *param_4 = (longlong)((undefined4 *)*param_4 + 1);
        }
        (**(code **)(*plVar10 + 0x200))(plVar10,param_3,param_2,uVar6);
      }
      break;
    case 0x10:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        if ((int)param_4[1] - (int)*param_4 < 8) {
          cVar3 = FUN_1439f8a80(param_4,&local_a8);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        else {
          local_a8 = *(ulonglong *)*param_4;
          *param_4 = (longlong)((ulonglong *)*param_4 + 1);
        }
        (**(code **)(*plVar10 + 0x208))(plVar10,param_3,param_2,local_a8);
      }
      break;
    case 0x11:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        uVar13 = 0;
        pbVar2 = (byte *)*param_4;
        if ((pbVar2 < (byte *)param_4[1]) && (uVar13 = (uint)*pbVar2, *pbVar2 < 0x80)) {
          *param_4 = (longlong)(pbVar2 + 1);
        }
        else {
          lVar7 = FUN_1439f8e20(param_4,uVar13);
          uVar13 = (uint)lVar7;
          if (lVar7 < 0) {
            return 0;
          }
        }
        (**(code **)(*plVar10 + 0x200))(plVar10,param_3,param_2,~(uVar13 & 1) + 1 ^ uVar13 >> 1);
      }
      break;
    case 0x12:
      while (iVar5 = FUN_1439f8490(param_4), 0 < iVar5) {
        pbVar2 = (byte *)*param_4;
        if ((pbVar2 < (byte *)param_4[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
          *param_4 = (longlong)(pbVar2 + 1);
          uVar15 = (ulonglong)bVar12;
        }
        else {
          FUN_1439f8f00(param_4,&local_a8);
          uVar15 = local_a8;
          if (local_a0 == '\0') {
            return 0;
          }
        }
        (**(code **)(*plVar10 + 0x208))
                  (plVar10,param_3,param_2,~(ulonglong)((uint)uVar15 & 1) + 1 ^ uVar15 >> 1);
      }
    }
    FUN_1439f8990(param_4,(ulonglong)local_70 & 0xffffffff);
    return 1;
  }
  iVar5 = FUN_143a009a0(param_2);
  switch(iVar5 + -1) {
  case 0:
    if ((int)param_4[1] - (int)*param_4 < 8) {
      cVar3 = FUN_1439f8a80(param_4,&local_70);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_70 = *(undefined8 ********)*param_4;
      *param_4 = (longlong)((ulonglong *)*param_4 + 1);
    }
    if (*(int *)(param_2 + 0x3c) != 3) {
      (**(code **)(*plVar10 + 0x108))(plVar10,param_3,param_2,local_70);
      return 1;
    }
    (**(code **)(*plVar10 + 0x228))();
    return 1;
  case 1:
    if ((int)param_4[1] - (int)*param_4 < 4) {
      cVar3 = FUN_1439f8a20(param_4,&local_70);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_70._0_4_ = *(undefined4 *)*param_4;
      *param_4 = (longlong)((undefined4 *)*param_4 + 1);
    }
    local_98[0] = CONCAT44(local_98[0]._4_4_,local_70._0_4_);
    if (*(int *)(param_2 + 0x3c) != 3) {
      (**(code **)(*plVar10 + 0x100))(plVar10,param_3,param_2,local_70._0_4_);
      return 1;
    }
    (**(code **)(*plVar10 + 0x220))();
    return 1;
  case 2:
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (*pbVar2 < 0x80)) {
      local_70 = (undefined8 *******)(ulonglong)*pbVar2;
      *param_4 = (longlong)(pbVar2 + 1);
      goto LAB_143a1b6e2;
    }
    FUN_1439f8f00(param_4,&local_70);
    goto joined_r0x000143a1b8d7;
  case 3:
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (bVar12 = *pbVar2, bVar12 < 0x80)) {
      *param_4 = (longlong)(pbVar2 + 1);
      pppppppuVar14 = (undefined8 *******)(ulonglong)bVar12;
    }
    else {
      FUN_1439f8f00(param_4,&local_70);
      pppppppuVar14 = local_70;
      if (local_68 == '\0') {
        return 0;
      }
    }
    goto LAB_143a1b84a;
  case 4:
    uVar15 = 0;
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (uVar15 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
      *param_4 = (longlong)(pbVar2 + 1);
    }
    else {
      uVar9 = FUN_1439f8e20(param_4,uVar15);
      uVar15 = uVar9 & 0xffffffff;
      if ((longlong)uVar9 < 0) {
        return 0;
      }
    }
    lVar7 = *plVar10;
    break;
  case 5:
    if ((int)param_4[1] - (int)*param_4 < 8) {
      cVar3 = FUN_1439f8a80(param_4,&local_70);
      pppppppuVar14 = local_70;
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_70 = *(undefined8 ********)*param_4;
      *param_4 = (longlong)((ulonglong *)*param_4 + 1);
      pppppppuVar14 = local_70;
    }
LAB_143a1b84a:
    if (*(int *)(param_2 + 0x3c) != 3) {
      (**(code **)(*plVar10 + 0xf8))(plVar10,param_3,param_2,pppppppuVar14);
      return 1;
    }
    (**(code **)(*plVar10 + 0x218))();
    return 1;
  case 6:
    if ((int)param_4[1] - (int)*param_4 < 4) {
      cVar3 = FUN_1439f8a20(param_4,local_98);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar13 = (uint)local_98[0];
    }
    else {
      uVar13 = *(uint *)*param_4;
      local_98[0] = CONCAT44(local_98[0]._4_4_,uVar13);
      *param_4 = (longlong)((uint *)*param_4 + 1);
    }
    uVar15 = (ulonglong)uVar13;
    lVar7 = *plVar10;
    if (*(int *)(param_2 + 0x3c) == 3) {
      (**(code **)(lVar7 + 0x210))();
      return 1;
    }
    goto LAB_143a1b761;
  case 7:
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (*pbVar2 < 0x80)) {
      local_70 = (undefined8 *******)(ulonglong)*pbVar2;
      *param_4 = (longlong)(pbVar2 + 1);
    }
    else {
      FUN_1439f8f00(param_4,&local_70);
      if (local_68 == '\0') {
        return 0;
      }
    }
    if (*(int *)(param_2 + 0x3c) != 3) {
      (**(code **)(*plVar10 + 0x110))(plVar10,param_3,param_2,local_70 != (undefined8 *******)0x0);
      return 1;
    }
    (**(code **)(*plVar10 + 0x230))();
    return 1;
  case 8:
    iVar5 = *(int *)(*(longlong *)(param_2 + 0x28) + 0x3c);
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = (undefined8 *******)((ulonglong)local_70._1_7_ << 8);
    cVar3 = thunk_FUN_1439fa490(param_4,&local_70);
    if (cVar3 == '\0') {
LAB_143a1bb50:
      if (uStack_58 < 0x10) {
        return 0;
      }
      uVar15 = uStack_58 + 1;
      pppppppuVar14 = local_70;
      if (0xfff < uVar15) {
        uVar15 = uStack_58 + 0x28;
        pppppppuVar14 = (undefined8 *******)local_70[-1];
        if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pppppppuVar14))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_143a1bb8d:
      FMemory::operator_delete(pppppppuVar14,uVar15);
      return 0;
    }
    if (iVar5 == 3) {
      plVar8 = *(longlong **)(param_2 + 8);
      if (0xf < (ulonglong)plVar8[3]) {
        plVar8 = (longlong *)*plVar8;
      }
      pppppppuVar14 = &local_70;
      if (0xf < uStack_58) {
        pppppppuVar14 = local_70;
      }
      cVar3 = FUN_1439fa7f0(pppppppuVar14,local_60 & 0xffffffff,0,plVar8);
      if (cVar3 == '\0') goto LAB_143a1bb50;
    }
    if (*(int *)(param_2 + 0x3c) == 3) {
      (**(code **)(*plVar10 + 0x238))();
    }
    else {
      (**(code **)(*plVar10 + 0x118))(plVar10,param_3,param_2,&local_70);
    }
    if (uStack_58 < 0x10) {
      return 1;
    }
    uVar15 = uStack_58 + 1;
    pppppppuVar14 = local_70;
    if (0xfff < uVar15) {
      uVar15 = uStack_58 + 0x28;
      pppppppuVar14 = (undefined8 *******)local_70[-1];
      if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pppppppuVar14))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_143a1bb44:
    FMemory::operator_delete(pppppppuVar14,uVar15);
    return 1;
  case 9:
    if (*(int *)(param_2 + 0x3c) == 3) {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x250))();
    }
    else {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x130))(plVar10,param_3,param_2,param_4[9]);
    }
    piVar1 = (int *)((longlong)param_4 + 0x34);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return 0;
    }
    cVar3 = (**(code **)(*plVar10 + 0x50))(plVar10,param_4);
    if (cVar3 == '\0') {
      return 0;
    }
    *(int *)((longlong)param_4 + 0x34) = *(int *)((longlong)param_4 + 0x34) + 1;
    if (*(uint *)(param_4 + 4) == (param_1 & 0xfffffffc | 4)) {
      return 1;
    }
    return 0;
  case 10:
    if (*(int *)(param_2 + 0x3c) == 3) {
      uVar11 = (**(code **)(*plVar10 + 0x250))();
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x130))(plVar10,param_3,param_2,param_4[9]);
    }
    cVar3 = FUN_143a15850(param_4,uVar11);
    if (cVar3 != '\0') {
      return 1;
    }
    return 0;
  case 0xb:
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = (undefined8 *******)((ulonglong)local_70._1_7_ << 8);
    cVar3 = thunk_FUN_1439fa490(param_4,&local_70);
    if (cVar3 != '\0') {
      if (*(int *)(param_2 + 0x3c) == 3) {
        (**(code **)(*plVar10 + 0x238))();
      }
      else {
        (**(code **)(*plVar10 + 0x118))(plVar10,param_3,param_2,&local_70);
      }
      if (uStack_58 < 0x10) {
        return 1;
      }
      uVar15 = uStack_58 + 1;
      pppppppuVar14 = local_70;
      if (0xfff < uVar15) {
        uVar15 = uStack_58 + 0x28;
        pppppppuVar14 = (undefined8 *******)local_70[-1];
        if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)local_70[-1]))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_143a1bb44;
    }
    if (uStack_58 < 0x10) {
      return 0;
    }
    uVar15 = uStack_58 + 1;
    pppppppuVar14 = local_70;
    if (0xfff < uVar15) {
      uVar15 = uStack_58 + 0x28;
      pppppppuVar14 = (undefined8 *******)local_70[-1];
      if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)local_70[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    goto LAB_143a1bb8d;
  case 0xc:
    uVar15 = 0;
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (uVar15 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
      *param_4 = (longlong)(pbVar2 + 1);
    }
    else {
      uVar9 = FUN_1439f8e20(param_4,uVar15);
      uVar15 = uVar9 & 0xffffffff;
      if ((longlong)uVar9 < 0) {
        return 0;
      }
    }
    lVar7 = *plVar10;
    if (*(int *)(param_2 + 0x3c) == 3) {
      (**(code **)(lVar7 + 0x210))(plVar10,param_3,param_2,uVar15);
      return 1;
    }
LAB_143a1b761:
    (**(code **)(lVar7 + 0xf0))(plVar10,param_3,param_2,uVar15);
    return 1;
  case 0xd:
    uVar15 = 0;
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (uVar15 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
      *param_4 = (longlong)(pbVar2 + 1);
    }
    else {
      uVar9 = FUN_1439f8e20(param_4,uVar15);
      uVar15 = uVar9 & 0xffffffff;
      if ((longlong)uVar9 < 0) {
        return 0;
      }
    }
    if (*(int *)(param_2 + 0x3c) != 3) {
      (**(code **)(*plVar10 + 0x128))(plVar10,param_3,param_2,uVar15);
      return 1;
    }
    (**(code **)(*plVar10 + 0x248))();
    return 1;
  case 0xe:
    if ((int)param_4[1] - (int)*param_4 < 4) {
      cVar3 = FUN_1439f8a20(param_4,&local_70);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar15 = (ulonglong)local_70 & 0xffffffff;
      lVar7 = *plVar10;
    }
    else {
      uVar15 = (ulonglong)*(uint *)*param_4;
      *param_4 = (longlong)((uint *)*param_4 + 1);
      lVar7 = *plVar10;
    }
    break;
  case 0xf:
    if (7 < (int)param_4[1] - (int)*param_4) {
      local_70 = *(undefined8 ********)*param_4;
      *param_4 = (longlong)((ulonglong *)*param_4 + 1);
      goto LAB_143a1b6e2;
    }
    local_68 = FUN_1439f8a80(param_4,&local_70);
joined_r0x000143a1b8d7:
    if (local_68 == '\0') {
switchD_143a1af73_caseD_9:
      return 0;
    }
LAB_143a1b6e2:
    if (*(int *)(param_2 + 0x3c) != 3) {
      (**(code **)(*plVar10 + 0xe8))(plVar10,param_3,param_2,local_70);
      return 1;
    }
    (**(code **)(*plVar10 + 0x208))();
    return 1;
  case 0x10:
    bVar12 = 0;
    pbVar2 = (byte *)*param_4;
    if (pbVar2 < (byte *)param_4[1]) {
      bVar12 = *pbVar2;
      uVar13 = (uint)bVar12;
      if (0x7f < bVar12) goto LAB_143a1b66b;
      *param_4 = (longlong)(pbVar2 + 1);
    }
    else {
LAB_143a1b66b:
      lVar7 = FUN_1439f8e20(param_4,bVar12);
      uVar13 = (uint)lVar7;
      if (lVar7 < 0) {
        return 0;
      }
    }
    uVar15 = (ulonglong)(~(uVar13 & 1) + 1 ^ uVar13 >> 1);
    lVar7 = *plVar10;
    break;
  case 0x11:
    pbVar2 = (byte *)*param_4;
    if ((pbVar2 < (byte *)param_4[1]) && (*pbVar2 < 0x80)) {
      local_70 = (undefined8 *******)(ulonglong)*pbVar2;
      *param_4 = (longlong)(pbVar2 + 1);
    }
    else {
      FUN_1439f8f00(param_4,&local_70);
      if (local_68 == '\0') {
        return 0;
      }
    }
    local_70 = (undefined8 *******)(~(ulonglong)((uint)local_70 & 1) + 1 ^ (ulonglong)local_70 >> 1)
    ;
    goto LAB_143a1b6e2;
  default:
    goto switchD_143a1b596_default;
  }
  if (*(int *)(param_2 + 0x3c) != 3) {
    (**(code **)(lVar7 + 0xe0))(plVar10,param_3,param_2,uVar15);
    return 1;
  }
  (**(code **)(lVar7 + 0x200))();
switchD_143a1b596_default:
  return 1;
}



// FUNCTION 143a1bdc0 FUN_143a1bdc0 body=385 status=ok
// SIG undefined FUN_143a1bdc0(void)

undefined1 FUN_143a1bdc0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  plVar5 = (longlong *)(**(code **)(*param_2 + 0xb8))(param_2,local_48);
  lVar1 = *plVar5;
  lVar6 = (**(code **)(*param_2 + 0xb8))(param_2,local_38);
  plVar5 = *(longlong **)(lVar6 + 8);
  do {
    pbVar2 = (byte *)*param_1;
    uVar7 = 0;
    if ((pbVar2 < (byte *)param_1[1]) && (uVar7 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
      *param_1 = pbVar2 + 1;
    }
    else {
      uVar7 = FUN_1439f8c60(param_1,uVar7);
      uVar7 = uVar7 & 0xffffffff;
    }
    iVar9 = (int)uVar7;
    *(int *)(param_1 + 4) = iVar9;
    if ((iVar9 == 0) || (((byte)uVar7 & 7) == 4)) {
      return 1;
    }
    lVar6 = 0;
    if (lVar1 == 0) {
LAB_143a1befe:
      cVar4 = FUN_143a1ae60(uVar7,lVar6,param_2,param_1);
    }
    else {
      uVar3 = uVar7 >> 3;
      lVar6 = FUN_143a3f1b0(lVar1,uVar3);
      if (lVar6 != 0) goto LAB_143a1befe;
      lVar8 = FUN_143a3f010(lVar1,uVar3);
      if (lVar8 != 0) {
        if (param_1[8] == 0) {
          lVar6 = (**(code **)(*plVar5 + 0x268))(plVar5,uVar3);
        }
        else {
          lVar6 = FUN_143a3ee10(param_1[8],lVar1,uVar3);
        }
        if (lVar6 != 0) goto LAB_143a1befe;
      }
      if ((*(char *)(*(longlong *)(lVar1 + 0x20) + 0x48) == '\0') || (iVar9 != 0xb))
      goto LAB_143a1befe;
      lVar6 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
      local_68 = (undefined4)*(undefined8 *)(lVar6 + 8);
      uStack_64 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 8) >> 0x20);
      uStack_60 = SUB84(param_2,0);
      uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      cVar4 = FUN_143a15290(param_1,&local_58);
    }
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 143a1bf50 FUN_143a1bf50 body=3570 status=ok
// SIG undefined FUN_143a1bf50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_143a1bf50(undefined8 ****param_1,longlong *param_2,longlong param_3)

{
  once_flag *poVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  undefined1 auStack_138 [32];
  undefined8 ****local_118;
  char local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *aplStack_e0 [4];
  undefined8 ***local_c0;
  undefined4 local_b8;
  undefined8 ****local_b0;
  undefined1 *local_a8;
  longlong local_a0 [2];
  undefined8 local_90;
  undefined8 ****local_78;
  undefined8 *****local_70;
  undefined1 **local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = (**(code **)(*param_2 + 0xb8))(param_2);
  plVar11 = *(longlong **)(lVar7 + 8);
  if ((((*(char *)((longlong)param_1 + 0x42) != '\0') && (*(char *)(param_1[10][4] + 9) != '\0')) &&
      (iVar4 = FUN_143a009a0(param_1), *(int *)(&DAT_145cbed10 + (longlong)iVar4 * 4) == 10)) &&
     (*(int *)((longlong)param_1 + 0x3c) != 3)) {
    FUN_143a1d630(param_1,param_2,param_3);
    return;
  }
  iVar4 = FUN_143a009a0(param_1);
  if ((iVar4 == 0xb) && (cVar2 = FUN_143a4f8d0(param_1), cVar2 != '\0')) {
    uVar8 = (**(code **)(*plVar11 + 0x2d8))(plVar11,param_2,param_1);
    cVar2 = FUN_143a11340(uVar8);
    if (cVar2 != '\0') {
      if (*(char *)(param_3 + 0x1a) == '\0') {
        (**(code **)(*plVar11 + 0x2b8))(plVar11,&local_78,param_2,param_1);
        uVar8 = (**(code **)(*plVar11 + 0x2c0))(plVar11,&local_f0,param_2,param_1);
        cVar2 = (*(code *)(*local_70)[4])(local_70,&local_78,uVar8);
        (**(code **)(*local_e8 + 0x78))(local_e8,&local_f0);
        FUN_1439fdc40(aplStack_e0);
        while (cVar2 == '\0') {
          FUN_143a1cda0(param_1,&local_68,local_58,param_3);
          (*(code *)(*local_70)[0x11])(local_70,&local_78);
          uVar8 = (**(code **)(*plVar11 + 0x2c0))(plVar11,&local_f0,param_2,param_1);
          cVar2 = (*(code *)(*local_70)[4])(local_70,&local_78,uVar8);
          (**(code **)(*local_e8 + 0x78))(local_e8,&local_f0);
          FUN_1439fdc40(aplStack_e0);
        }
        (*(code *)(*local_70)[0xf])(local_70,&local_78);
        FUN_1439fdc40(&local_68);
        return;
      }
      FUN_143a1e6d0(&local_f0,param_2,plVar11);
      plVar17 = local_f0;
      if (local_f0 != local_e8) {
        do {
          local_c0 = (undefined8 ***)0x0;
          local_b8 = 0;
          local_118 = &local_c0;
          (**(code **)(*plVar11 + 0x2a8))(plVar11,param_2,param_1,plVar17);
          FUN_143a1cda0(param_1,plVar17,&local_c0,param_3);
          plVar17 = plVar17 + 2;
        } while (plVar17 != local_e8);
      }
      plVar17 = local_e8;
      plVar11 = local_f0;
      if (local_f0 == (longlong *)0x0) {
        return;
      }
      for (; plVar11 != plVar17; plVar11 = plVar11 + 2) {
        FUN_1439fdc40(plVar11);
      }
      uVar16 = (longlong)aplStack_e0[0] - (longlong)local_f0 & 0xfffffffffffffff0;
      plVar11 = local_f0;
      if (0xfff < uVar16) {
        uVar16 = uVar16 + 0x27;
        plVar11 = (longlong *)local_f0[-1];
        if (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)plVar11))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_143a1c10d;
    }
  }
  if (*(int *)((longlong)param_1 + 0x3c) == 3) {
    iVar4 = (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_1);
  }
  else if (*(char *)((longlong)param_1[10][4] + 0x4b) == '\0') {
    cVar2 = (**(code **)(*plVar11 + 0x20))(plVar11,param_2,param_1);
    iVar4 = 0;
    if (cVar2 != '\0') {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 1;
  }
  local_f0 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  aplStack_e0[0] = (longlong *)0x0;
  if (((iVar4 < 2) || (iVar5 = FUN_143a009a0(param_1), iVar5 != 0xb)) ||
     ((cVar2 = FUN_143a4f8d0(param_1), cVar2 == '\0' || (*(char *)(param_3 + 0x1a) == '\0')))) {
    local_f8 = local_e8;
    plVar17 = (longlong *)0x0;
  }
  else {
    local_118 = param_1;
    pplVar9 = (longlong **)FUN_143a1e4b0(&local_78,param_2,iVar4,plVar11);
    if (&local_f0 != pplVar9) {
      std::vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
      ::~vector<Chaos::Pair<float,unsigned_int>,std::allocator<Chaos::Pair<float,unsigned_int>_>_>
                (&local_f0);
      local_f0 = *pplVar9;
      local_e8 = pplVar9[1];
      aplStack_e0[0] = pplVar9[2];
      *pplVar9 = (longlong *)0x0;
      pplVar9[1] = (longlong *)0x0;
      pplVar9[2] = (longlong *)0x0;
    }
    plVar17 = local_f0;
    local_f8 = local_e8;
    if (local_78 != (undefined8 ****)0x0) {
      if ((0xfff < (ulonglong)(((longlong)local_68 - (longlong)local_78 >> 3) * 8)) &&
         (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)local_78[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FMemory::operator_delete();
      plVar17 = local_f0;
    }
  }
  local_108 = FUN_143a4f8e0(param_1);
  if ((local_108 != '\0') && (0 < iVar4)) {
    uVar15 = *(int *)((longlong)param_1 + 0x44) * 8 | 2;
    uVar16 = (ulonglong)uVar15;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_1439f9e60(param_3);
    }
    else {
      pbVar18 = *(byte **)(param_3 + 8);
      pbVar12 = pbVar18;
      while (0x7f < uVar15) {
        *pbVar12 = (byte)uVar16 | 0x80;
        uVar16 = uVar16 >> 7;
        pbVar12 = pbVar12 + 1;
        uVar15 = (uint)uVar16;
      }
      *pbVar12 = (byte)uVar16;
      iVar5 = ((int)pbVar12 + 1) - (int)pbVar18;
      *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar5;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar5;
    }
    FUN_143a1a130(param_1,param_2);
    FUN_141514f80(param_3);
  }
  iVar5 = 0;
  if (0 < iVar4) {
    local_a0[0] = (longlong)iVar4;
    local_100 = 0;
    do {
      poVar1 = (once_flag *)param_1[6];
      if (poVar1 != (once_flag *)0x0) {
        local_a8 = &LAB_143a48e80;
        local_b0 = param_1;
        _guard_xfg_dispatch_icall_nop(&local_c0);
        local_78 = &local_c0;
        local_70 = &local_b0;
        local_68 = &local_a8;
        iVar4 = std::_guard_xfg_dispatch_icall_nop(poVar1,FUN_1439fce30,&local_78);
        if (iVar4 == 0) {
          bVar3 = _guard_xfg_dispatch_icall_nop(&local_c0);
          if (bVar3) {
            uVar8 = std::exception_ptr::exception_ptr(local_a0,&local_c0);
                    /* WARNING: Subroutine does not return */
            FUN_143a00820(uVar8);
          }
                    /* WARNING: Subroutine does not return */
          std::_guard_xfg_dispatch_icall_nop();
        }
        _guard_xfg_dispatch_icall_nop(&local_c0);
      }
      switch(*(undefined4 *)(param_1 + 7)) {
      case 1:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          puVar19 = (undefined1 *)(**(code **)(*plVar11 + 0x170))();
        }
        else {
          puVar19 = (undefined1 *)(**(code **)(*plVar11 + 0xa8))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fac10(*(undefined4 *)((longlong)param_1 + 0x44),(int)puVar19,param_3);
        }
        else {
          local_a8 = puVar19;
          FUN_1439f9cd0(param_3,puVar19);
        }
        break;
      case 2:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar6 = (**(code **)(*plVar11 + 0x168))();
        }
        else {
          uVar6 = (**(code **)(*plVar11 + 0xa0))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fae60(*(undefined4 *)((longlong)param_1 + 0x44),uVar6,param_3);
        }
        else {
          local_b0 = (undefined8 ****)CONCAT44(local_b0._4_4_,uVar6);
          FUN_1439f9c90(param_3,uVar6);
        }
        break;
      case 3:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar16 = (**(code **)(*plVar11 + 0x150))();
        }
        else {
          uVar16 = (**(code **)(*plVar11 + 0x88))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fafd0(*(undefined4 *)((longlong)param_1 + 0x44),uVar16,param_3);
        }
        else {
          if (9 < *(int *)(param_3 + 0x10)) {
            pbVar18 = *(byte **)(param_3 + 8);
            pbVar12 = pbVar18;
            for (; 0x7f < uVar16; uVar16 = uVar16 >> 7) {
              *pbVar12 = (byte)uVar16 | 0x80;
              pbVar12 = pbVar12 + 1;
            }
            goto LAB_143a1c4f7;
          }
LAB_143a1c50f:
          FUN_1439f9ec0(param_3);
        }
        break;
      case 4:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar16 = (**(code **)(*plVar11 + 0x160))();
        }
        else {
          uVar16 = (**(code **)(*plVar11 + 0x98))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fafd0(*(undefined4 *)((longlong)param_1 + 0x44),uVar16,param_3);
        }
        else {
          if (*(int *)(param_3 + 0x10) < 10) goto LAB_143a1c50f;
          pbVar18 = *(byte **)(param_3 + 8);
          pbVar12 = pbVar18;
          for (; 0x7f < uVar16; uVar16 = uVar16 >> 7) {
            *pbVar12 = (byte)uVar16 | 0x80;
            pbVar12 = pbVar12 + 1;
          }
LAB_143a1c4f7:
          *pbVar12 = (byte)uVar16;
          iVar4 = ((int)pbVar12 + 1) - (int)pbVar18;
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar4;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
        }
        break;
      case 5:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          iVar4 = (**(code **)(*plVar11 + 0x148))();
        }
        else {
          iVar4 = (**(code **)(*plVar11 + 0x80))(plVar11,param_2,param_1);
        }
        if (local_108 != '\0') {
          uVar16 = (ulonglong)iVar4;
          if (*(int *)(param_3 + 0x10) < 10) goto LAB_143a1c50f;
          pbVar18 = *(byte **)(param_3 + 8);
          pbVar12 = pbVar18;
          for (; 0x7f < uVar16; uVar16 = uVar16 >> 7) {
            *pbVar12 = (byte)uVar16 | 0x80;
            pbVar12 = pbVar12 + 1;
          }
          goto LAB_143a1c4f7;
        }
        FUN_1439fac90(*(undefined4 *)((longlong)param_1 + 0x44),iVar4,param_3);
        break;
      case 6:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar8 = (**(code **)(*plVar11 + 0x160))();
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0x98))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fade0(*(undefined4 *)((longlong)param_1 + 0x44),uVar8,param_3);
        }
        else {
          FUN_1439f9cd0(param_3);
        }
        break;
      case 7:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar6 = (**(code **)(*plVar11 + 0x158))();
        }
        else {
          uVar6 = (**(code **)(*plVar11 + 0x90))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fad60(*(undefined4 *)((longlong)param_1 + 0x44),uVar6,param_3);
        }
        else {
          FUN_1439f9c90(param_3);
        }
        break;
      case 8:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          cVar2 = (**(code **)(*plVar11 + 0x178))();
        }
        else {
          cVar2 = (**(code **)(*plVar11 + 0xb0))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fa860(*(undefined4 *)((longlong)param_1 + 0x44),cVar2,param_3);
        }
        else if (*(int *)(param_3 + 0x10) < 5) {
LAB_143a1c60a:
          FUN_1439f9e60(param_3);
        }
        else {
          *(bool *)*(undefined8 *)(param_3 + 8) = cVar2 != '\0';
          *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 1;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
        }
        break;
      case 9:
        iVar4 = *(int *)((longlong)param_1[5] + 0x3c);
        local_68 = (undefined1 **)0x0;
        local_60 = 0xf;
        local_78 = (undefined8 ****)((ulonglong)local_78._1_7_ << 8);
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          local_118 = &local_78;
          puVar10 = (undefined8 *)(**(code **)(*plVar11 + 0x1a0))(plVar11);
        }
        else {
          puVar10 = (undefined8 *)(**(code **)(*plVar11 + 0xd8))(plVar11,param_2,param_1);
        }
        if (iVar4 == 3) {
          puVar13 = puVar10;
          if (0xf < (ulonglong)puVar10[3]) {
            puVar13 = (undefined8 *)*puVar10;
          }
          FUN_1439fa7f0(puVar13,*(undefined4 *)(puVar10 + 2),1);
        }
        FUN_1439fb440(*(undefined4 *)((longlong)param_1 + 0x44),puVar10,param_3);
        if (0xf < local_60) {
          uVar16 = local_60 + 1;
          ppppuVar14 = local_78;
          if (0xfff < uVar16) {
            uVar16 = local_60 + 0x28;
            ppppuVar14 = (undefined8 ****)local_78[-1];
            if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar14))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
LAB_143a1cca7:
          FMemory::operator_delete(ppppuVar14,uVar16);
        }
        break;
      case 10:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          if (plVar17 == local_f8) {
            uVar8 = (**(code **)(*plVar11 + 0x198))(plVar11,param_2,param_1);
            FUN_1439faee0(*(undefined4 *)((longlong)param_1 + 0x44),uVar8,param_3);
          }
          else {
            FUN_1439faee0(*(undefined4 *)((longlong)param_1 + 0x44),plVar17[local_100],param_3);
          }
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0xd0))(plVar11,param_2,param_1);
          FUN_1439faee0(*(undefined4 *)((longlong)param_1 + 0x44),uVar8,param_3);
        }
        break;
      case 0xb:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          if (plVar17 == local_f8) {
            uVar8 = (**(code **)(*plVar11 + 0x198))(plVar11,param_2,param_1);
            FUN_1439fb0a0(*(undefined4 *)((longlong)param_1 + 0x44),uVar8,param_3);
          }
          else {
            FUN_1439fb0a0(*(undefined4 *)((longlong)param_1 + 0x44),plVar17[local_100],param_3);
          }
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0xd0))(plVar11,param_2,param_1,0);
          FUN_1439fb0a0(*(undefined4 *)((longlong)param_1 + 0x44),uVar8,param_3);
        }
        break;
      case 0xc:
        local_68 = (undefined1 **)0x0;
        local_60 = 0xf;
        local_78 = (undefined8 ****)((ulonglong)local_78._1_7_ << 8);
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          local_118 = &local_78;
          uVar8 = (**(code **)(*plVar11 + 0x1a0))(plVar11,param_2,param_1,iVar5);
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0xd8))(plVar11,param_2,param_1,&local_78);
        }
        FUN_1439fa930(*(undefined4 *)((longlong)param_1 + 0x44),uVar8,param_3);
        if (0xf < local_60) {
          uVar16 = local_60 + 1;
          ppppuVar14 = local_78;
          if (0xfff < uVar16) {
            uVar16 = local_60 + 0x28;
            ppppuVar14 = (undefined8 ****)local_78[-1];
            if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)local_78[-1]))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_143a1cca7;
        }
        break;
      case 0xd:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar15 = (**(code **)(*plVar11 + 0x158))(plVar11,param_2,param_1,iVar5);
        }
        else {
          uVar15 = (**(code **)(*plVar11 + 0x90))(plVar11,param_2,param_1);
        }
        uVar16 = (ulonglong)uVar15;
        if (local_108 != '\0') {
          if (*(int *)(param_3 + 0x10) < 5) goto LAB_143a1c60a;
          pbVar18 = *(byte **)(param_3 + 8);
          pbVar12 = pbVar18;
          while (0x7f < uVar15) {
            *pbVar12 = (byte)uVar16 | 0x80;
            uVar16 = uVar16 >> 7;
            pbVar12 = pbVar12 + 1;
            uVar15 = (uint)uVar16;
          }
          goto LAB_143a1c4f7;
        }
        FUN_1439fb720(*(undefined4 *)((longlong)param_1 + 0x44),uVar16,param_3);
        break;
      case 0xe:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          lVar7 = (**(code **)(*plVar11 + 0x188))(plVar11,param_2,param_1,iVar5);
        }
        else {
          lVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11,param_2,param_1);
        }
        if (local_108 != '\0') {
          uVar16 = (ulonglong)*(int *)(lVar7 + 0x10);
          if (*(int *)(param_3 + 0x10) < 10) goto LAB_143a1c50f;
          pbVar18 = *(byte **)(param_3 + 8);
          pbVar12 = pbVar18;
          for (; 0x7f < uVar16; uVar16 = uVar16 >> 7) {
            *pbVar12 = (byte)uVar16 | 0x80;
            pbVar12 = pbVar12 + 1;
          }
          goto LAB_143a1c4f7;
        }
        FUN_1439fac90(*(undefined4 *)((longlong)param_1 + 0x44),*(undefined4 *)(lVar7 + 0x10),
                      param_3);
        break;
      case 0xf:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar6 = (**(code **)(*plVar11 + 0x148))(plVar11,param_2,param_1,iVar5);
        }
        else {
          uVar6 = (**(code **)(*plVar11 + 0x80))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fad60(*(undefined4 *)((longlong)param_1 + 0x44),uVar6,param_3);
        }
        else {
          FUN_1439f9c90(param_3);
        }
        break;
      case 0x10:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          uVar8 = (**(code **)(*plVar11 + 0x150))(plVar11,param_2,param_1,iVar5);
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0x88))(plVar11,param_2,param_1);
        }
        if (local_108 == '\0') {
          FUN_1439fade0(*(undefined4 *)((longlong)param_1 + 0x44),uVar8,param_3);
        }
        else {
          FUN_1439f9cd0(param_3);
        }
        break;
      case 0x11:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          iVar4 = (**(code **)(*plVar11 + 0x148))(plVar11,param_2,param_1,iVar5);
        }
        else {
          iVar4 = (**(code **)(*plVar11 + 0x80))(plVar11,param_2,param_1);
        }
        if (local_108 != '\0') {
          uVar15 = iVar4 >> 0x1f ^ iVar4 * 2;
          uVar16 = (ulonglong)uVar15;
          if (*(int *)(param_3 + 0x10) < 5) goto LAB_143a1c60a;
          pbVar18 = *(byte **)(param_3 + 8);
          pbVar12 = pbVar18;
          while (0x7f < uVar15) {
            *pbVar12 = (byte)uVar16 | 0x80;
            uVar16 = uVar16 >> 7;
            pbVar12 = pbVar12 + 1;
            uVar15 = (uint)uVar16;
          }
          goto LAB_143a1c4f7;
        }
        FUN_1439fb290(*(undefined4 *)((longlong)param_1 + 0x44),iVar4,param_3);
        break;
      case 0x12:
        if (*(int *)((longlong)param_1 + 0x3c) == 3) {
          lVar7 = (**(code **)(*plVar11 + 0x150))(plVar11,param_2,param_1,iVar5);
        }
        else {
          lVar7 = (**(code **)(*plVar11 + 0x88))(plVar11,param_2,param_1);
        }
        if (local_108 != '\0') {
          uVar16 = lVar7 >> 0x3f ^ lVar7 * 2;
          if (*(int *)(param_3 + 0x10) < 10) goto LAB_143a1c50f;
          pbVar18 = *(byte **)(param_3 + 8);
          pbVar12 = pbVar18;
          for (; 0x7f < uVar16; uVar16 = uVar16 >> 7) {
            *pbVar12 = (byte)uVar16 | 0x80;
            pbVar12 = pbVar12 + 1;
          }
          goto LAB_143a1c4f7;
        }
        FUN_1439fb360(*(undefined4 *)((longlong)param_1 + 0x44),lVar7,param_3);
      }
      iVar5 = iVar5 + 1;
      local_100 = local_100 + 1;
      plVar17 = local_f0;
    } while (local_100 < local_a0[0]);
  }
  if (local_f0 == (longlong *)0x0) {
    return;
  }
  uVar16 = (longlong)aplStack_e0[0] - (longlong)local_f0 & 0xfffffffffffffff8;
  plVar11 = local_f0;
  if (0xfff < uVar16) {
    uVar16 = uVar16 + 0x27;
    plVar11 = (longlong *)local_f0[-1];
    if (0x1f < (ulonglong)((longlong)local_f0 + (-8 - local_f0[-1]))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
LAB_143a1c10d:
  FMemory::operator_delete(plVar11,uVar16);
  return;
}



// FUNCTION 143a1cda0 FUN_143a1cda0 body=314 status=ok
// SIG undefined FUN_143a1cda0(void)

void FUN_143a1cda0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  
  lVar3 = FUN_143a4f9e0();
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  lVar3 = FUN_143a4f9e0(param_1);
  uVar10 = *(int *)(param_1 + 0x44) << 3 | 2;
  uVar8 = (ulonglong)uVar10;
  lVar3 = *(longlong *)(lVar3 + 0x28);
  if (*(int *)(param_4 + 0x10) < 5) {
    FUN_1439f9e60(param_4);
  }
  else {
    pbVar2 = *(byte **)(param_4 + 8);
    pbVar7 = pbVar2;
    while (bVar9 = (byte)uVar8, 0x7f < uVar10) {
      uVar8 = uVar8 >> 7;
      *pbVar7 = bVar9 | 0x80;
      pbVar7 = pbVar7 + 1;
      uVar10 = (uint)uVar8;
    }
    *pbVar7 = bVar9;
    iVar6 = ((int)pbVar7 - (int)pbVar2) + 1;
    *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar6;
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar6;
  }
  lVar4 = FUN_143a1a8f0(uVar1,param_2);
  lVar5 = FUN_143a1ab90(lVar3 + 0x98,param_3);
  uVar8 = lVar5 + lVar4 + 2;
  uVar10 = (uint)uVar8;
  if (*(int *)(param_4 + 0x10) < 5) {
    FUN_1439f9e60(param_4,uVar8 & 0xffffffff);
  }
  else {
    pbVar2 = *(byte **)(param_4 + 8);
    pbVar7 = pbVar2;
    while (bVar9 = (byte)uVar8, 0x7f < uVar10) {
      uVar8 = uVar8 >> 7 & 0x1ffffff;
      *pbVar7 = bVar9 | 0x80;
      pbVar7 = pbVar7 + 1;
      uVar10 = (uint)uVar8;
    }
    *pbVar7 = bVar9;
    iVar6 = ((int)pbVar7 - (int)pbVar2) + 1;
    *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + (longlong)iVar6;
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) - iVar6;
  }
  FUN_143a1cee0(uVar1,param_2,param_4);
  FUN_143a1d120(lVar3 + 0x98,param_3,param_4);
  return;
}



// FUNCTION 143a1cee0 FUN_143a1cee0 body=504 status=ok
// SIG undefined FUN_143a1cee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a1cee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar2 = FUN_143a009a0();
  switch(uVar2) {
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    uVar3 = FUN_1439eeb00(local_48,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                          0x300);
    uVar3 = FUN_1439eef00(uVar3,"Unsupported");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_48);
    break;
  case 3:
    uVar3 = FUN_143a105e0(param_2);
    FUN_1439fafd0(1,uVar3,param_3);
    break;
  case 4:
    uVar3 = FUN_143a10c10(param_2);
    FUN_1439fafd0(1,uVar3,param_3);
    break;
  case 5:
    uVar2 = FUN_143a10380(param_2);
    FUN_1439fac90(1,uVar2,param_3);
    break;
  case 6:
    uVar3 = FUN_143a10c10(param_2);
    FUN_1439fade0(1,uVar3,param_3);
    break;
  case 7:
    uVar2 = FUN_141529b00(param_2);
    FUN_1439fad60(1,uVar2,param_3);
    break;
  case 8:
    uVar1 = FUN_143a0fd90(param_2);
    FUN_1439fa860(1,uVar1,param_3);
    break;
  case 9:
    uVar3 = FUN_1415060c0(param_2);
    FUN_1439fb440(1,uVar3,param_3);
    break;
  case 0xd:
    uVar2 = FUN_141529b00(param_2);
    FUN_1439fb720(1,uVar2,param_3);
    break;
  case 0xf:
    uVar2 = FUN_143a10380(param_2);
    FUN_1439fad60(1,uVar2,param_3);
    break;
  case 0x10:
    uVar3 = FUN_143a105e0(param_2);
    FUN_1439fade0(1,uVar3,param_3);
    break;
  case 0x11:
    uVar2 = FUN_143a10380(param_2);
    FUN_1439fb290(1,uVar2,param_3);
    break;
  case 0x12:
    uVar3 = FUN_143a105e0(param_2);
    FUN_1439fb360(1,uVar3,param_3);
  }
  return;
}



// FUNCTION 143a1d120 FUN_143a1d120 body=1218 status=ok
// SIG undefined FUN_143a1d120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a1d120(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_70 = 0xfffffffffffffffe;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar2 = FUN_143a009a0();
  switch(uVar2) {
  case 1:
    iVar3 = FUN_143a0d230(param_2);
    if (iVar3 != 5) {
      uVar4 = FUN_1439eeb00(local_68,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x299
                           );
      iVar3 = FUN_143a0d230(param_2);
      puVar1 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar4 = FUN_1439eef00(uVar4,"Protocol Buffer map usage error:\n");
      uVar4 = FUN_1439eef00(uVar4,"MapValueRef::GetDoubleValue");
      uVar4 = FUN_1439eef00(uVar4," type does not match\n");
      uVar4 = FUN_1439eef00(uVar4,"  Expected : ");
      uVar4 = FUN_1439eef00(uVar4,"double");
      uVar4 = FUN_1439eef00(uVar4,&DAT_143fc48d8);
      uVar4 = FUN_1439eef00(uVar4,"  Actual   : ");
      uVar4 = FUN_1439eef00(uVar4,puVar1);
      FUN_1439eec50(local_78,uVar4);
      DsDevice::~DsDevice(local_68);
    }
    FUN_1439fac10(2,*(undefined8 *)*param_2,param_3);
    break;
  case 2:
    iVar3 = FUN_143a0d230(param_2);
    if (iVar3 != 6) {
      uVar4 = FUN_1439eeb00(local_68,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x294
                           );
      iVar3 = FUN_143a0d230(param_2);
      puVar1 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar4 = FUN_1439eef00(uVar4,"Protocol Buffer map usage error:\n");
      uVar4 = FUN_1439eef00(uVar4,"MapValueRef::GetFloatValue");
      uVar4 = FUN_1439eef00(uVar4," type does not match\n");
      uVar4 = FUN_1439eef00(uVar4,"  Expected : ");
      uVar4 = FUN_1439eef00(uVar4,"float");
      uVar4 = FUN_1439eef00(uVar4,&DAT_143fc48d8);
      uVar4 = FUN_1439eef00(uVar4,"  Actual   : ");
      uVar4 = FUN_1439eef00(uVar4,puVar1);
      FUN_1439eec50(local_78,uVar4);
      DsDevice::~DsDevice(local_68);
    }
    FUN_1439fae60(2,*(undefined4 *)*param_2,param_3);
    break;
  case 3:
    uVar4 = FUN_143a10710(param_2);
    FUN_1439fafd0(2,uVar4,param_3);
    break;
  case 4:
    uVar4 = FUN_143a10d40(param_2);
    FUN_1439fafd0(2,uVar4,param_3);
    break;
  case 5:
    uVar2 = FUN_143a104b0(param_2);
    FUN_1439fac90(2,uVar2,param_3);
    break;
  case 6:
    uVar4 = FUN_143a10d40(param_2);
    FUN_1439fade0(2,uVar4,param_3);
    break;
  case 7:
    uVar2 = FUN_143a10ae0(param_2);
    FUN_1439fad60(2,uVar2,param_3);
    break;
  case 8:
    iVar3 = FUN_143a0d230(param_2);
    if (iVar3 != 7) {
      uVar4 = FUN_1439eeb00(local_68,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\map_field.h",0x285
                           );
      iVar3 = FUN_143a0d230(param_2);
      puVar1 = (&PTR_s_ERROR_145cbee00)[iVar3];
      uVar4 = FUN_1439eef00(uVar4,"Protocol Buffer map usage error:\n");
      uVar4 = FUN_1439eef00(uVar4,"MapValueRef::GetBoolValue");
      uVar4 = FUN_1439eef00(uVar4," type does not match\n");
      uVar4 = FUN_1439eef00(uVar4,"  Expected : ");
      uVar4 = FUN_1439eef00(uVar4,&DAT_145cbec70);
      uVar4 = FUN_1439eef00(uVar4,&DAT_143fc48d8);
      uVar4 = FUN_1439eef00(uVar4,"  Actual   : ");
      uVar4 = FUN_1439eef00(uVar4,puVar1);
      FUN_1439eec50(local_78,uVar4);
      DsDevice::~DsDevice(local_68);
    }
    FUN_1439fa860(2,*(undefined1 *)*param_2,param_3);
    break;
  case 9:
    uVar4 = FUN_143a109b0(param_2);
    FUN_1439fb440(2,uVar4,param_3);
    break;
  case 10:
    uVar4 = FUN_143a10860(param_2);
    FUN_1439faee0(2,uVar4,param_3);
    break;
  case 0xb:
    uVar4 = FUN_143a10860(param_2);
    FUN_1439fb0a0(2,uVar4,param_3);
    break;
  case 0xc:
    uVar4 = FUN_143a109b0(param_2);
    FUN_1439fa930(2,uVar4,param_3);
    break;
  case 0xd:
    uVar2 = FUN_143a10ae0(param_2);
    FUN_1439fb720(2,uVar2,param_3);
    break;
  case 0xe:
    uVar2 = FUN_143a10120(param_2);
    FUN_1439fac90(2,uVar2,param_3);
    break;
  case 0xf:
    uVar2 = FUN_143a104b0(param_2);
    FUN_1439fad60(2,uVar2,param_3);
    break;
  case 0x10:
    uVar4 = FUN_143a10710(param_2);
    FUN_1439fade0(2,uVar4,param_3);
    break;
  case 0x11:
    uVar2 = FUN_143a104b0(param_2);
    FUN_1439fb290(2,uVar2,param_3);
    break;
  case 0x12:
    uVar4 = FUN_143a10710(param_2);
    FUN_1439fb360(2,uVar4,param_3);
  }
  return;
}



// FUNCTION 143a1d630 FUN_143a1d630 body=447 status=ok
// SIG undefined FUN_143a1d630(void)

void FUN_143a1d630(longlong param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 local_18 [16];
  
  lVar4 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar5 = *(longlong **)(lVar4 + 8);
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,0xb);
  }
  else {
    **(undefined1 **)(param_3 + 8) = 0xb;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 1;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  }
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,0x10);
  }
  else {
    **(undefined1 **)(param_3 + 8) = 0x10;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 1;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  uVar6 = (ulonglong)uVar3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar8 = pbVar1;
    while (bVar2 = (byte)uVar6, 0x7f < uVar3) {
      uVar6 = uVar6 >> 7;
      *pbVar8 = bVar2 | 0x80;
      pbVar8 = pbVar8 + 1;
      uVar3 = (uint)uVar6;
    }
    *pbVar8 = bVar2;
    iVar7 = ((int)pbVar8 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar7;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar7;
  }
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,0x1a);
  }
  else {
    **(undefined1 **)(param_3 + 8) = 0x1a;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 1;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0xd0))(plVar5,param_2,param_1,0);
  uVar6 = (**(code **)(*plVar5 + 0x70))(plVar5);
  uVar3 = (uint)uVar6;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,uVar6 & 0xffffffff);
  }
  else {
    pbVar1 = *(byte **)(param_3 + 8);
    pbVar8 = pbVar1;
    while (bVar2 = (byte)uVar6, 0x7f < uVar3) {
      uVar6 = uVar6 >> 7 & 0x1ffffff;
      *pbVar8 = bVar2 | 0x80;
      pbVar8 = pbVar8 + 1;
      uVar3 = (uint)uVar6;
    }
    *pbVar8 = bVar2;
    iVar7 = ((int)pbVar8 - (int)pbVar1) + 1;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar7;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar7;
  }
  (**(code **)(*plVar5 + 0x60))(plVar5,param_3);
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3,0xc);
  }
  else {
    **(undefined1 **)(param_3 + 8) = 0xc;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + 1;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  }
  return;
}



// FUNCTION 143a1d7f0 FUN_143a1d7f0 body=937 status=ok
// SIG undefined FUN_143a1d7f0(void)

void FUN_143a1d7f0(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  
  lVar10 = *param_1;
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < (int)(param_1[1] - lVar10 >> 4)) {
    do {
      iVar2 = *(int *)(lVar10 + 4 + uVar8);
      if (iVar2 == 0) {
        uVar5 = *(int *)(lVar10 + uVar8) << 3;
        uVar7 = (ulonglong)uVar5;
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2);
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          while (bVar4 = (byte)uVar7, 0x7f < uVar5) {
            uVar7 = uVar7 >> 7;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          *pbVar3 = bVar4;
          iVar2 = ((int)pbVar3 - (int)pbVar11) + 1;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
        }
        uVar7 = *(ulonglong *)(lVar10 + 8 + uVar8);
        if (*(int *)(param_2 + 0x10) < 10) {
          FUN_1439f9ec0(param_2);
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *pbVar3 = (byte)uVar7 | 0x80;
            pbVar3 = pbVar3 + 1;
          }
LAB_143a1db47:
          *pbVar3 = (byte)uVar7;
          iVar2 = ((int)pbVar3 - (int)pbVar11) + 1;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
        }
      }
      else if (iVar2 == 1) {
        uVar5 = *(int *)(lVar10 + uVar8) << 3 | 5;
        uVar7 = (ulonglong)uVar5;
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2);
          FUN_1439f9c90(param_2,*(undefined4 *)(lVar10 + 8 + uVar8));
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          while (bVar4 = (byte)uVar7, 0x7f < uVar5) {
            uVar7 = uVar7 >> 7;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          *pbVar3 = bVar4;
          iVar2 = ((int)pbVar3 - (int)pbVar11) + 1;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          FUN_1439f9c90(param_2,*(undefined4 *)(lVar10 + 8 + uVar8));
        }
      }
      else if (iVar2 == 2) {
        uVar5 = *(int *)(lVar10 + uVar8) << 3 | 1;
        uVar7 = (ulonglong)uVar5;
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2);
          FUN_1439f9cd0(param_2,*(undefined8 *)(lVar10 + 8 + uVar8));
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          while (bVar4 = (byte)uVar7, 0x7f < uVar5) {
            uVar7 = uVar7 >> 7;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          *pbVar3 = bVar4;
          iVar2 = ((int)pbVar3 - (int)pbVar11) + 1;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          FUN_1439f9cd0(param_2,*(undefined8 *)(lVar10 + 8 + uVar8));
        }
      }
      else if (iVar2 == 3) {
        uVar5 = *(int *)(lVar10 + uVar8) << 3 | 2;
        uVar7 = (ulonglong)uVar5;
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2);
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          while (bVar4 = (byte)uVar7, 0x7f < uVar5) {
            uVar7 = uVar7 >> 7;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          *pbVar3 = bVar4;
          iVar2 = ((int)pbVar3 - (int)pbVar11) + 1;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
        }
        uVar7 = *(ulonglong *)(*(longlong *)(lVar10 + 8 + uVar8) + 0x10);
        uVar5 = (uint)uVar7;
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2,uVar7 & 0xffffffff);
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          while (bVar4 = (byte)uVar7, 0x7f < uVar5) {
            uVar7 = uVar7 >> 7 & 0x1ffffff;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          *pbVar3 = bVar4;
          iVar2 = ((int)pbVar3 - (int)pbVar11) + 1;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
        }
        plVar6 = *(longlong **)(lVar10 + 8 + uVar8);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        if (*(char *)(param_2 + 0x19) == '\0') {
          FUN_1439f9d40(param_2,plVar6,*puVar1 & 0xffffffff);
        }
        else {
          FUN_1439f9c00();
        }
      }
      else if (iVar2 == 4) {
        uVar5 = *(int *)(lVar10 + uVar8) << 3 | 3;
        uVar7 = (ulonglong)uVar5;
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2);
        }
        else {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          while (bVar4 = (byte)uVar7, 0x7f < uVar5) {
            uVar7 = uVar7 >> 7;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          *pbVar3 = bVar4;
          iVar2 = ((int)pbVar3 - (int)pbVar11) + 1;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
        }
        FUN_143a1d7f0(*(undefined8 *)(lVar10 + 8 + uVar8),param_2);
        uVar5 = *(int *)(lVar10 + uVar8) << 3 | 4;
        uVar7 = (ulonglong)uVar5;
        if (4 < *(int *)(param_2 + 0x10)) {
          pbVar11 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar11;
          while (0x7f < uVar5) {
            bVar4 = (byte)uVar7;
            uVar7 = uVar7 >> 7;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          goto LAB_143a1db47;
        }
        FUN_1439f9e60(param_2);
      }
      lVar10 = *param_1;
      uVar5 = (int)uVar9 + 1;
      uVar8 = uVar8 + 0x10;
      uVar9 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)(param_1[1] - lVar10 >> 4));
  }
  return;
}



// FUNCTION 143a1dba0 FUN_143a1dba0 body=563 status=ok
// SIG undefined FUN_143a1dba0(void)

byte * FUN_143a1dba0(longlong *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  
  lVar5 = *param_1;
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < (int)(param_1[1] - lVar5 >> 4)) {
    do {
      iVar1 = *(int *)(uVar6 + 4 + lVar5);
      if (iVar1 == 0) {
        uVar9 = *(ulonglong *)(uVar6 + 8 + lVar5);
        for (uVar4 = *(int *)(uVar6 + lVar5) << 3; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        while( true ) {
          param_2 = param_2 + 1;
          bVar8 = (byte)uVar9;
          if (uVar9 < 0x80) break;
          uVar9 = uVar9 >> 7;
          *param_2 = bVar8 | 0x80;
        }
        *param_2 = bVar8;
        param_2 = param_2 + 1;
      }
      else if (iVar1 == 1) {
        uVar2 = *(undefined4 *)(uVar6 + 8 + lVar5);
        for (uVar4 = *(int *)(uVar6 + lVar5) << 3 | 5; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        *(undefined4 *)(param_2 + 1) = uVar2;
        param_2 = param_2 + 5;
      }
      else if (iVar1 == 2) {
        uVar3 = *(undefined8 *)(uVar6 + 8 + lVar5);
        for (uVar4 = *(int *)(uVar6 + lVar5) << 3 | 1; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        *(undefined8 *)(param_2 + 1) = uVar3;
        param_2 = param_2 + 9;
      }
      else if (iVar1 == 3) {
        uVar3 = *(undefined8 *)(uVar6 + 8 + lVar5);
        uVar4 = *(int *)(uVar6 + lVar5) << 3 | 2;
        uVar9 = (ulonglong)uVar4;
        while (bVar8 = (byte)uVar9, 0x7f < uVar4) {
          uVar9 = uVar9 >> 7;
          *param_2 = bVar8 | 0x80;
          param_2 = param_2 + 1;
          uVar4 = (uint)uVar9;
        }
        *param_2 = bVar8;
        param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
      }
      else if (iVar1 == 4) {
        for (uVar4 = *(int *)(uVar6 + lVar5) << 3 | 3; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        param_2 = (byte *)FUN_143a1dba0(*(undefined8 *)(uVar6 + 8 + lVar5),param_2 + 1);
        for (uVar4 = *(int *)(uVar6 + lVar5) << 3 | 4; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
          *param_2 = (byte)uVar4 | 0x80;
          param_2 = param_2 + 1;
        }
        *param_2 = (byte)uVar4;
        param_2 = param_2 + 1;
      }
      lVar5 = *param_1;
      uVar4 = (int)uVar7 + 1;
      uVar6 = uVar6 + 0x10;
      uVar7 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)(param_1[1] - lVar5 >> 4));
  }
  return param_2;
}



// FUNCTION 143a1dde0 FUN_143a1dde0 body=381 status=ok
// SIG undefined FUN_143a1dde0(void)

void FUN_143a1dde0(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar6 = *param_1;
  iVar8 = 0;
  if (0 < (int)(param_1[1] - lVar6 >> 4)) {
    lVar9 = 0;
    do {
      if (*(int *)(lVar9 + 4 + lVar6) == 3) {
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2,0xb);
        }
        else {
          **(undefined1 **)(param_2 + 8) = 0xb;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
        }
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2,0x10);
        }
        else {
          **(undefined1 **)(param_2 + 8) = 0x10;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
        }
        uVar5 = *(uint *)(lVar9 + lVar6);
        uVar7 = (ulonglong)uVar5;
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2);
        }
        else {
          pbVar1 = *(byte **)(param_2 + 8);
          pbVar3 = pbVar1;
          while (bVar4 = (byte)uVar7, 0x7f < uVar5) {
            uVar7 = uVar7 >> 7;
            *pbVar3 = bVar4 | 0x80;
            pbVar3 = pbVar3 + 1;
            uVar5 = (uint)uVar7;
          }
          *pbVar3 = bVar4;
          iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - iVar2;
        }
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2,0x1a);
        }
        else {
          **(undefined1 **)(param_2 + 8) = 0x1a;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
        }
        FUN_1439fc480((uint *)(lVar9 + lVar6),param_2);
        if (*(int *)(param_2 + 0x10) < 5) {
          FUN_1439f9e60(param_2,0xc);
        }
        else {
          **(undefined1 **)(param_2 + 8) = 0xc;
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
        }
      }
      lVar6 = *param_1;
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar8 < (int)(param_1[1] - lVar6 >> 4));
  }
  return;
}



// FUNCTION 143a1df60 FUN_143a1df60 body=595 status=ok
// SIG undefined FUN_143a1df60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a1df60(longlong *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  int local_c4;
  longlong local_c0;
  longlong *plStack_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  ulonglong local_40;
  ulonglong uVar7;
  
  local_a8[1] = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar5 = 0;
  local_c4 = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1,local_98);
  lVar4 = *plVar1;
  lVar2 = (**(code **)(*param_1 + 0xb8))(param_1,local_88);
  plVar1 = *(longlong **)(lVar2 + 8);
  local_c4 = (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10)) + param_2;
  local_c0 = 0;
  plStack_b8 = (longlong *)0x0;
  local_b0 = (longlong *)0x0;
  if (*(char *)(*(longlong *)(lVar4 + 0x20) + 0x4b) == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_1,&local_c0);
  }
  else {
    uVar7 = uVar5;
    if (0 < *(int *)(lVar4 + 0x68)) {
      do {
        local_a8[0] = (longlong)(int)uVar7 * 0x98 + *(longlong *)(lVar4 + 0x28);
        if (local_b0 == plStack_b8) {
          FUN_143a16470(&local_c0,plStack_b8,local_a8);
        }
        else {
          *plStack_b8 = local_a8[0];
          plStack_b8 = plStack_b8 + 1;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(lVar4 + 0x68));
    }
  }
  uVar7 = uVar5;
  if ((longlong)plStack_b8 - local_c0 >> 3 != 0) {
    do {
      FUN_143a1bf50(*(undefined8 *)(uVar5 + local_c0),param_1,param_3);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 < (ulonglong)((longlong)plStack_b8 - local_c0 >> 3));
  }
  if (*(char *)(*(longlong *)(lVar4 + 0x20) + 0x48) == '\0') {
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
    FUN_143a1d7f0(uVar3,param_3);
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 8))();
    FUN_143a1dde0(uVar3,param_3);
  }
  if (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10) != local_c4) {
    uVar3 = FUN_1439eeb00(local_78,3,"c:\\dev\\protobuf\\src\\google\\protobuf\\wire_format.cc",
                          0x2f0);
    local_c4 = 1;
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: (output->ByteCount()) == (expected_endpoint): ");
    uVar3 = FUN_1439eef00(uVar3,
                          ": Protocol message serialized to a size different from what was originally expected.  Perhaps it was modified by another thread during serialization?"
                         );
    FUN_1439eec50(local_c8,uVar3);
    DsDevice::~DsDevice(local_78);
  }
  if (local_c0 != 0) {
    uVar5 = (longlong)local_b0 - local_c0 & 0xfffffffffffffff8;
    lVar4 = local_c0;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      lVar4 = *(longlong *)(local_c0 + -8);
      if (0x1f < (local_c0 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar4,uVar5);
  }
  return;
}



// FUNCTION 143a1e1c0 FUN_143a1e1c0 body=20 status=ok
// SIG undefined FUN_143a1e1c0(void)

void FUN_143a1e1c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143a1e1e0(param_2,param_3,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143a1e1e0 FUN_143a1e1e0 body=531 status=ok
// SIG undefined FUN_143a1e1e0(void)

undefined8 FUN_143a1e1e0(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  ulonglong local_28;
  char local_20;
  
  uVar8 = param_2 >> 3;
  if (param_2 >> 3 == 0) {
    return 0;
  }
  switch(param_2 & 7) {
  case 0:
    pbVar2 = (byte *)*param_1;
    if ((pbVar2 < (byte *)param_1[1]) && (*pbVar2 < 0x80)) {
      local_28 = (ulonglong)*pbVar2;
      *param_1 = (longlong)(pbVar2 + 1);
    }
    else {
      FUN_1439f8f00(param_1,&local_28);
      if (local_20 == '\0') {
        return 0;
      }
    }
    if (param_3 != 0) {
      FUN_1439fbd90(param_3,uVar8,local_28);
      return 1;
    }
    break;
  case 1:
    if ((int)param_1[1] - (int)*param_1 < 8) {
      cVar3 = FUN_1439f8a80(param_1,&local_res20);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_res20 = *(undefined8 *)*param_1;
      *param_1 = (longlong)((undefined8 *)*param_1 + 1);
    }
    if (param_3 != 0) {
      FUN_1439fbc50(param_3,uVar8,local_res20);
      return 1;
    }
    break;
  case 2:
    pbVar2 = (byte *)*param_1;
    bVar6 = 0;
    if (pbVar2 < (byte *)param_1[1]) {
      bVar6 = *pbVar2;
      uVar7 = (uint)bVar6;
      if (0x7f < bVar6) goto LAB_143a1e2ec;
      *param_1 = (longlong)(pbVar2 + 1);
    }
    else {
LAB_143a1e2ec:
      lVar4 = FUN_1439f8e20(param_1,bVar6);
      uVar7 = (uint)lVar4;
      if (lVar4 < 0) {
        return 0;
      }
    }
    if (param_3 == 0) {
      if ((int)uVar7 < 0) {
        return 0;
      }
      if ((int)uVar7 <= (int)param_1[1] - (int)*param_1) {
        *param_1 = *param_1 + (longlong)(int)uVar7;
        return 1;
      }
      cVar3 = FUN_1439f9b60(param_1,uVar7);
    }
    else {
      uVar5 = FUN_1439fbd10(param_3,uVar8);
      cVar3 = google::protobuf::io::CodedInputStream::ReadString(param_1,uVar5,uVar7);
    }
    if (cVar3 == '\0') {
      return 0;
    }
    break;
  case 3:
    piVar1 = (int *)((longlong)param_1 + 0x34);
    *piVar1 = *piVar1 + -1;
    if (-1 < *piVar1) {
      if (param_3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1439fbc90(param_3,uVar8);
      }
      cVar3 = FUN_143a1e420(param_1,uVar5);
      if (cVar3 != '\0') {
        if (*(int *)((longlong)param_1 + 0x34) < (int)param_1[7]) {
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        }
        if (*(uint *)(param_1 + 4) == (param_2 & 0xfffffffc | 4)) {
          return 1;
        }
      }
    }
  default:
    return 0;
  case 5:
    if ((int)param_1[1] - (int)*param_1 < 4) {
      cVar3 = FUN_1439f8a20(param_1,local_res10);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      local_res10[0] = *(undefined4 *)*param_1;
      *param_1 = (longlong)((undefined4 *)*param_1 + 1);
    }
    if (param_3 != 0) {
      FUN_1439fbc10(param_3,uVar8,local_res10[0]);
    }
  }
  return 1;
}



// FUNCTION 143a1e410 FUN_143a1e410 body=15 status=ok
// SIG undefined FUN_143a1e410(void)

void FUN_143a1e410(longlong param_1,undefined8 param_2)

{
  FUN_143a1e420(param_2,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143a1e420 FUN_143a1e420 body=113 status=ok
// SIG undefined FUN_143a1e420(void)

undefined1 FUN_143a1e420(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  
  while( true ) {
    pbVar1 = (byte *)*param_1;
    uVar3 = 0;
    if ((pbVar1 < (byte *)param_1[1]) && (uVar3 = (uint)*pbVar1, *pbVar1 < 0x80)) {
      *param_1 = pbVar1 + 1;
    }
    else {
      uVar3 = FUN_1439f8c60(param_1,uVar3);
    }
    *(uint *)(param_1 + 4) = uVar3;
    if ((uVar3 == 0) || (((byte)uVar3 & 7) == 4)) break;
    cVar2 = FUN_143a1e1e0(param_1,uVar3,param_2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143a1e4a0 FUN_143a1e4a0 body=12 status=ok
// SIG undefined FUN_143a1e4a0(void)

void FUN_143a1e4a0(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1439fbd90(*(undefined8 *)(param_1 + 8),param_2,(longlong)param_3);
  return;
}



// FUNCTION 143a1e4b0 FUN_143a1e4b0 body=528 status=ok
// SIG undefined FUN_143a1e4b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_143a1e4b0(longlong *param_1,undefined8 param_2,int param_3,longlong *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_10a8 [32];
  ulonglong local_1088;
  undefined8 local_1080;
  undefined1 local_1078 [4];
  undefined4 local_1074;
  undefined8 local_1070;
  longlong *local_1068;
  undefined1 local_1060 [8];
  undefined8 *local_1058;
  ulonglong local_1050;
  undefined8 local_1048 [512];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143a1e4c5;
  local_1070 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_10a8;
  puVar5 = (undefined8 *)0x0;
  local_1074 = 0;
  local_1068 = param_1;
  FUN_143a194a0(param_1,(longlong)param_3,local_1078);
  local_1074 = 1;
  local_1080 = 0;
  local_1088 = CONCAT44(local_1088._4_4_,0xffffffff);
  lVar3 = (**(code **)(*param_4 + 0x288))(param_4,param_2,param_5,10);
  puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8);
  puVar10 = puVar5;
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    puVar6 = puVar5;
  }
  while( true ) {
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      puVar7 = puVar5;
    }
    if (puVar6 == puVar7 + *(int *)(lVar3 + 8)) break;
    *(undefined8 *)((longlong)puVar10 + *param_1) = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  lVar3 = FUN_143a4f9e0(param_5);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  lVar3 = param_1[1];
  lVar2 = *param_1;
  lVar8 = lVar3 - lVar2 >> 3;
  if (lVar8 < 0x21) {
    if (1 < lVar8) {
      FUN_143a16ed0(local_1060,lVar2,lVar3,uVar1);
    }
  }
  else {
    uVar9 = lVar8 - (lVar3 - lVar2 >> 4);
    uVar4 = 0x7fffffffffffffff;
    if ((longlong)uVar9 < 0x7fffffffffffffff) {
      uVar4 = uVar9;
    }
    if (0x200 < uVar9) {
      uVar9 = uVar4;
      if (uVar4 < 0x2000000000000000) {
        for (; 0 < (longlong)uVar9; uVar9 = (longlong)uVar9 / 2) {
          local_1058 = (undefined8 *)operator_new(uVar9 * 8,&DAT_146bcbba8);
          if (local_1058 != (undefined8 *)0x0) {
            puVar5 = local_1058;
            if (0x200 < uVar9) goto LAB_143a1e655;
            break;
          }
        }
      }
      FMemory::operator_delete(puVar5);
      uVar9 = 0x200;
    }
    local_1058 = local_1048;
LAB_143a1e655:
    local_1088 = uVar9;
    local_1080 = uVar1;
    local_1050 = uVar9;
    std::_Stable_sort_unchecked<double_*,std::_Ref_fn<Array_obj<double>::Sorter>_>
              (lVar2,lVar3,lVar8,local_1058);
    if (0x200 < local_1050) {
      FMemory::operator_delete(local_1058);
    }
  }
  return param_1;
}



// FUNCTION 143a1e6d0 FUN_143a1e6d0 body=400 status=ok
// SIG undefined FUN_143a1e6d0(void)

longlong * FUN_143a1e6d0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(*param_3 + 0x2b8))(param_3,local_88,param_2,param_4,1,0xfffffffffffffffe);
  uVar3 = (**(code **)(*param_3 + 0x2c0))(param_3,local_58,param_2,param_4);
  cVar2 = (**(code **)(*local_80 + 0x20))(local_80,local_88,uVar3);
  (**(code **)(*local_50 + 0x78))(local_50,local_58);
  FUN_1439fdc40(local_48);
  while (cVar2 == '\0') {
    lVar1 = param_1[1];
    if (param_1[2] == lVar1) {
      FUN_143a16220(param_1,lVar1,local_78);
    }
    else {
      *(undefined4 *)(lVar1 + 8) = 0;
      FUN_143a0f7a0(lVar1,local_78);
      param_1[1] = param_1[1] + 0x10;
    }
    (**(code **)(*local_80 + 0x88))(local_80,local_88);
    uVar3 = (**(code **)(*param_3 + 0x2c0))(param_3,local_58,param_2,param_4);
    cVar2 = (**(code **)(*local_80 + 0x20))(local_80,local_88,uVar3);
    (**(code **)(*local_50 + 0x78))(local_50,local_58);
    FUN_1439fdc40(local_48);
  }
  (**(code **)(*local_80 + 0x78))(local_80,local_88);
  FUN_1439fdc40(local_78);
  FUN_143a18860(*param_1,param_1[1],param_1[1] - *param_1 >> 4,(ulonglong)param_1 & 0xff);
  return param_1;
}



// FUNCTION 143a1e870 FUN_143a1e870 body=51 status=ok
// SIG undefined FUN_143a1e870(void)

byte * FUN_143a1e870(int param_1,undefined4 param_2,byte *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 5; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  *(undefined4 *)(param_3 + 1) = param_2;
  return param_3 + 5;
}



// FUNCTION 143a1e8b0 FUN_143a1e8b0 body=51 status=ok
// SIG undefined FUN_143a1e8b0(void)

byte * FUN_143a1e8b0(int param_1,undefined8 param_2,byte *param_3)

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



// FUNCTION 143a1e8f0 _Destroy body=49 status=ok
// SIG undefined _Destroy(void)

void std::
     vector<nlohmann::basic_json<std::map,std::vector,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,__int64,unsigned___int64,double,std::allocator,nlohmann::adl_serializer>,std::allocator<nlohmann::basic_json<std::map,std::vector,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,__int64,unsigned___int64,double,std::allocator,nlohmann::adl_serializer>_>_>
     ::_Destroy(undefined8 param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_1439fdc40(param_2);
  }
  return;
}



// FUNCTION 143a1e930 FUN_143a1e930 body=120 status=ok
// SIG undefined FUN_143a1e930(void)

longlong FUN_143a1e930(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    *(undefined4 *)(param_4 + 8) = 0;
    FUN_143a0f7a0(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



// FUNCTION 143a1e9d0 FUN_143a1e9d0 body=64 status=ok
// SIG undefined FUN_143a1e9d0(void)

void FUN_143a1e9d0(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_143a4f390(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1);
    FMemory::operator_delete(*param_1,0x40);
    FMemory::operator_delete(param_1,0x10);
  }
  return;
}



// FUNCTION 143a1ea10 FUN_143a1ea10 body=421 status=ok
// SIG undefined FUN_143a1ea10(void)

undefined1 * FUN_143a1ea10(undefined1 *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 local_res20 [2];
  longlong local_30;
  undefined4 *local_28;
  undefined4 *puStack_20;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xf;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)param_4;
  param_1[0x72] = param_4[2];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1 + 0x78,param_3,param_3,param_4,0xfffffffffffffffe);
  if (*param_4 != '\0') {
    local_30 = 0;
    local_28 = (undefined4 *)0x0;
    puStack_20 = (undefined4 *)0x0;
    plVar1 = (longlong *)(param_2 + 0x18);
    FUN_143a405a0(*plVar1,&local_30);
    if (puStack_20 == local_28) {
      std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                (&local_30,local_28,&DAT_145cc0dfc);
    }
    else {
      *local_28 = 2;
      local_28 = local_28 + 1;
    }
    local_res20[0] = (undefined4)((param_2 - *(longlong *)(*plVar1 + 0x30)) / 0x28);
    if (puStack_20 == local_28) {
      std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                (&local_30,local_28,local_res20);
    }
    else {
      *local_28 = local_res20[0];
      local_28 = local_28 + 1;
    }
    cVar2 = FUN_143a407a0(*(undefined8 *)(*plVar1 + 0x10),&local_30,param_1 + 8);
    if (local_30 != 0) {
      uVar4 = ((longlong)puStack_20 - local_30 >> 2) * 4;
      lVar5 = local_30;
      if (0xfff < uVar4) {
        uVar4 = uVar4 + 0x27;
        lVar5 = *(longlong *)(local_30 + -8);
        if (0x1f < (local_30 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar5,uVar4);
    }
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_143a1eb9e;
    }
  }
  uVar3 = 0;
LAB_143a1eb9e:
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 143a1ebc0 FUN_143a1ebc0 body=421 status=ok
// SIG undefined FUN_143a1ebc0(void)

undefined1 * FUN_143a1ebc0(undefined1 *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 local_res20 [2];
  longlong local_30;
  undefined4 *local_28;
  undefined4 *puStack_20;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xf;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)param_4;
  param_1[0x72] = param_4[2];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1 + 0x78,param_3,param_3,param_4,0xfffffffffffffffe);
  if (*param_4 != '\0') {
    local_30 = 0;
    local_28 = (undefined4 *)0x0;
    puStack_20 = (undefined4 *)0x0;
    plVar1 = (longlong *)(param_2 + 0x10);
    FUN_143a404c0(*plVar1,&local_30);
    if (puStack_20 == local_28) {
      std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                (&local_30,local_28,&DAT_145cc0df8);
    }
    else {
      *local_28 = 8;
      local_28 = local_28 + 1;
    }
    local_res20[0] = (undefined4)((param_2 - *(longlong *)(*plVar1 + 0x30)) / 0x30);
    if (puStack_20 == local_28) {
      std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                (&local_30,local_28,local_res20);
    }
    else {
      *local_28 = local_res20[0];
      local_28 = local_28 + 1;
    }
    cVar2 = FUN_143a407a0(*(undefined8 *)(*plVar1 + 0x10),&local_30,param_1 + 8);
    if (local_30 != 0) {
      uVar4 = ((longlong)puStack_20 - local_30 >> 2) * 4;
      lVar5 = local_30;
      if (0xfff < uVar4) {
        uVar4 = uVar4 + 0x27;
        lVar5 = *(longlong *)(local_30 + -8);
        if (0x1f < (local_30 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar5,uVar4);
    }
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_143a1ed4e;
    }
  }
  uVar3 = 0;
LAB_143a1ed4e:
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 143a1ed70 FUN_143a1ed70 body=69 status=ok
// SIG undefined FUN_143a1ed70(void)

ulonglong FUN_143a1ed70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 *_Buf2;
  undefined8 *_Buf1;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  if (param_1[2] == param_2[2]) {
    iVar1 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,param_1[2]);
    _Buf1 = (undefined8 *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)((ulonglong)_Buf1 >> 8),1);
    }
  }
  return (ulonglong)_Buf1 & 0xffffffffffffff00;
}



// FUNCTION 143a1edc0 operator!=<char,std::char_traits<char>,std::allocator<char>_> body=67 status=ok
// SIG undefined operator!=<char,std::char_traits<char>,std::allocator<char>_>(void)

undefined4
std::operator!=<char,std::char_traits<char>,std::allocator<char>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  if (param_1[2] == param_2[2]) {
    iVar1 = ::_guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,param_1[2]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143a1ee10 FUN_143a1ee10 body=142 status=ok
// SIG undefined FUN_143a1ee10(void)

undefined8 * FUN_143a1ee10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (((ulonglong)(param_2[3] - param_2[2]) < (ulonglong)param_3[2]) &&
     ((ulonglong)param_2[2] <= (ulonglong)(param_3[3] - param_3[2]))) {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar2 = (undefined8 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert
                       (param_3,0,param_2);
  }
  else {
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    puVar2 = (undefined8 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (param_2,param_3);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(undefined1 *)puVar2 = 0;
  return param_1;
}



// FUNCTION 143a1eea0 operator+<char,std::char_traits<char>,std::allocator<char>_> body=84 status=ok
// SIG undefined operator+<char,std::char_traits<char>,std::allocator<char>_>(void)

undefined8 *
std::operator+<char,std::char_traits<char>,std::allocator<char>_>
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  puVar2 = (undefined8 *)
           basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                     (param_2,puVar2,param_3[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(undefined1 *)puVar2 = 0;
  return param_1;
}



// FUNCTION 143a1ef00 FUN_143a1ef00 body=174 status=ok
// SIG undefined FUN_143a1ef00(void)

undefined1 *
FUN_143a1ef00(undefined1 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  plVar1 = param_2 + 2;
  lVar3 = -1;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_3 + lVar2) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
            (param_1,lVar2 + *plVar1,param_3,param_4,1,0xfffffffffffffffe);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_2,*plVar1);
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_3,lVar3);
  return param_1;
}



// FUNCTION 143a1efb0 FUN_143a1efb0 body=171 status=ok
// SIG undefined FUN_143a1efb0(void)

undefined1 *
FUN_143a1efb0(undefined1 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  plVar1 = param_3 + 2;
  lVar3 = -1;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
            (param_1,lVar2 + *plVar1,param_3,param_4,1,0xfffffffffffffffe);
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_2,lVar3);
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_3,*plVar1);
  return param_1;
}



// FUNCTION 143a1f060 FUN_143a1f060 body=93 status=ok
// SIG undefined FUN_143a1f060(void)

undefined8 FUN_143a1f060(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_res18 [2];
  
  if (param_2 * 4 == 0) {
    return 0;
  }
  local_res18[0] = operator_new((longlong)(param_2 * 4));
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (*(undefined8 **)(param_1 + 0x148) != puVar1) {
    *puVar1 = local_res18[0];
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 8;
    return local_res18[0];
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_1 + 0x138,puVar1,local_res18);
  return local_res18[0];
}



// FUNCTION 143a1f0c0 FUN_143a1f0c0 body=93 status=ok
// SIG undefined FUN_143a1f0c0(void)

undefined8 FUN_143a1f0c0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_res18 [2];
  
  if (param_2 * 8 == 0) {
    return 0;
  }
  local_res18[0] = operator_new((longlong)(param_2 * 8));
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (*(undefined8 **)(param_1 + 0x148) != puVar1) {
    *puVar1 = local_res18[0];
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 8;
    return local_res18[0];
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_1 + 0x138,puVar1,local_res18);
  return local_res18[0];
}



// FUNCTION 143a1f120 FUN_143a1f120 body=126 status=ok
// SIG undefined FUN_143a1f120(void)

void FUN_143a1f120(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((param_2 * 9 & 0xfffffffU) == 0) {
    *param_3 = 0;
    return;
  }
  local_res8 = operator_new((longlong)(param_2 * 0x90));
  puVar2 = *(undefined8 **)(lVar1 + 0x140);
  if (*(undefined8 **)(lVar1 + 0x148) != puVar2) {
    *puVar2 = local_res8;
    *(longlong *)(lVar1 + 0x140) = *(longlong *)(lVar1 + 0x140) + 8;
    *param_3 = local_res8;
    return;
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar1 + 0x138,puVar2,&local_res8);
  *param_3 = local_res8;
  return;
}



// FUNCTION 143a1f1a0 FUN_143a1f1a0 body=92 status=ok
// SIG undefined FUN_143a1f1a0(void)

undefined8 FUN_143a1f1a0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_res18 [2];
  
  if ((param_2 * 9 & 0xfffffffU) == 0) {
    return 0;
  }
  local_res18[0] = operator_new((longlong)(param_2 * 0x90));
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (*(undefined8 **)(param_1 + 0x148) != puVar1) {
    *puVar1 = local_res18[0];
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 8;
    return local_res18[0];
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_1 + 0x138,puVar1,local_res18);
  return local_res18[0];
}



// FUNCTION 143a1f200 FUN_143a1f200 body=126 status=ok
// SIG undefined FUN_143a1f200(void)

void FUN_143a1f200(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((param_2 * 5 & 0xfffffffU) == 0) {
    *param_3 = 0;
    return;
  }
  local_res8 = operator_new((longlong)(param_2 * 0x50));
  puVar2 = *(undefined8 **)(lVar1 + 0x140);
  if (*(undefined8 **)(lVar1 + 0x148) != puVar2) {
    *puVar2 = local_res8;
    *(longlong *)(lVar1 + 0x140) = *(longlong *)(lVar1 + 0x140) + 8;
    *param_3 = local_res8;
    return;
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar1 + 0x138,puVar2,&local_res8);
  *param_3 = local_res8;
  return;
}



// FUNCTION 143a1f280 FUN_143a1f280 body=92 status=ok
// SIG undefined FUN_143a1f280(void)

undefined8 FUN_143a1f280(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_res18 [2];
  
  if ((param_2 * 5 & 0xfffffffU) == 0) {
    return 0;
  }
  local_res18[0] = operator_new((longlong)(param_2 * 0x50));
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (*(undefined8 **)(param_1 + 0x148) != puVar1) {
    *puVar1 = local_res18[0];
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 8;
    return local_res18[0];
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_1 + 0x138,puVar1,local_res18);
  return local_res18[0];
}



// FUNCTION 143a1f2e0 FUN_143a1f2e0 body=92 status=ok
// SIG undefined FUN_143a1f2e0(void)

undefined8 FUN_143a1f2e0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_res18 [2];
  
  if ((param_2 * 5 & 0x1fffffffU) == 0) {
    return 0;
  }
  local_res18[0] = operator_new((longlong)(param_2 * 0x28));
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  if (*(undefined8 **)(param_1 + 0x148) != puVar1) {
    *puVar1 = local_res18[0];
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 8;
    return local_res18[0];
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(param_1 + 0x138,puVar1,local_res18);
  return local_res18[0];
}



// FUNCTION 143a1f340 FUN_143a1f340 body=126 status=ok
// SIG undefined FUN_143a1f340(void)

void FUN_143a1f340(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (param_2 * 0x98 == 0) {
    *param_3 = 0;
    return;
  }
  local_res8 = operator_new((longlong)(param_2 * 0x98));
  puVar2 = *(undefined8 **)(lVar1 + 0x140);
  if (*(undefined8 **)(lVar1 + 0x148) != puVar2) {
    *puVar2 = local_res8;
    *(longlong *)(lVar1 + 0x140) = *(longlong *)(lVar1 + 0x140) + 8;
    *param_3 = local_res8;
    return;
  }
  std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
  _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar1 + 0x138,puVar2,&local_res8);
  *param_3 = local_res8;
  return;
}



// FUNCTION 143a1f3c0 FUN_143a1f3c0 body=456 status=ok
// SIG undefined FUN_143a1f3c0(void)

void FUN_143a1f3c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_40;
  undefined4 *local_38;
  undefined4 *puStack_30;
  
  local_40 = 0;
  local_38 = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_res20[0] = param_4;
  std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
            (&local_40,0,&DAT_145cc0dd4);
  local_res18[0] = (undefined4)((lVar1 - *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x78)) / 0x30);
  if (puStack_30 == local_38) {
    std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
              (&local_40,local_38,local_res18);
  }
  else {
    *local_38 = local_res18[0];
    local_38 = local_38 + 1;
  }
  if (puStack_30 == local_38) {
    std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
              (&local_40,local_38,&DAT_145cc0e00);
  }
  else {
    *local_38 = 2;
    local_38 = local_38 + 1;
  }
  local_res18[0] =
       (undefined4)((param_3 - *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20)) / 0x68);
  if (puStack_30 == local_38) {
    std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
              (&local_40,local_38,local_res18);
  }
  else {
    *local_38 = local_res18[0];
    local_38 = local_38 + 1;
  }
  if (puStack_30 == local_38) {
    std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
              (&local_40,local_38,local_res20);
  }
  else {
    *local_38 = param_4;
    local_38 = local_38 + 1;
  }
  FUN_143a20d90(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 8),param_2,param_3,
                &local_40);
  if (local_40 != 0) {
    uVar2 = (longlong)puStack_30 - local_40 & 0xfffffffffffffffc;
    lVar1 = local_40;
    if (0xfff < uVar2) {
      uVar2 = uVar2 + 0x27;
      lVar1 = *(longlong *)(local_40 + -8);
      if (0x1f < (local_40 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar1,uVar2);
  }
  return;
}



// FUNCTION 143a1f590 FUN_143a1f590 body=1011 status=ok
// SIG undefined FUN_143a1f590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a1f590(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x48);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a6fdf0(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 8) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a1f990 FUN_143a1f990 body=1011 status=ok
// SIG undefined FUN_143a1f990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a1f990(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x50);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a701c0(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x20) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a1fd90 FUN_143a1fd90 body=1011 status=ok
// SIG undefined FUN_143a1fd90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a1fd90(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x50);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a6fcb0(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x20) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a20190 FUN_143a20190 body=1011 status=ok
// SIG undefined FUN_143a20190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a20190(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x50);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a6fd80(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x20) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a20590 FUN_143a20590 body=1011 status=ok
// SIG undefined FUN_143a20590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a20590(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x58);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a6fee0(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x78) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a20990 FUN_143a20990 body=1014 status=ok
// SIG undefined FUN_143a20990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a20990(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0xa8);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a70090(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x88) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a20d90 FUN_143a20d90 body=1011 status=ok
// SIG undefined FUN_143a20d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a20d90(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x50);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a702a0(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x58) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a21190 FUN_143a21190 body=1011 status=ok
// SIG undefined FUN_143a21190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a21190(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x48);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a70370(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x28) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a21590 FUN_143a21590 body=1011 status=ok
// SIG undefined FUN_143a21590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a21590(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  size_t *psVar1;
  size_t _Size;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_130;
  undefined7 uStack_12f;
  ulonglong local_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_138 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_140 = param_6;
  local_148 = local_148 & 0xffffffff00000000;
  lVar6 = *(longlong *)(param_1 + 8);
  local_148 = operator_new(0x50);
  if (local_148 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143a70450(local_148);
  }
  puVar4 = *(ulonglong **)(lVar6 + 0xf8);
  local_148 = uVar3;
  if (*(ulonglong **)(lVar6 + 0x100) == puVar4) {
    std::vector<userCommands::BaseCommand_*,std::allocator<userCommands::BaseCommand_*>_>::
    _Emplace_reallocate<userCommands::BaseCommand_*_const_&>(lVar6 + 0xf0,puVar4,&local_148);
  }
  else {
    *puVar4 = uVar3;
    *(longlong *)(lVar6 + 0xf8) = *(longlong *)(lVar6 + 0xf8) + 8;
  }
  local_130 = FUN_143a790d0(param_4);
  if (local_130 == '\0') {
    local_120 = 0;
    uStack_118 = 0xf;
    local_148 = CONCAT44(local_148._4_4_,1);
    psVar1 = param_2 + 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve
              (&local_130,*psVar1 + 1);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    _Size = *psVar1;
    if (uStack_118 - local_120 < _Size) {
      local_158 = (undefined1 *)_Size;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,_Size,0,param_2);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + _Size;
      _guard_xfg_dispatch_icall_nop(pcVar9,param_2,_Size);
      pcVar9[_Size] = '\0';
    }
    if (uStack_118 == local_120) {
      local_158 = (undefined1 *)0x1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                (&local_130,1,0,&DAT_143f47cc0);
    }
    else {
      pcVar9 = &local_130;
      if (0xf < uStack_118) {
        pcVar9 = (char *)CONCAT71(uStack_12f,local_130);
      }
      pcVar9 = pcVar9 + local_120;
      local_120 = local_120 + 1;
      _guard_xfg_dispatch_icall_nop(pcVar9,&DAT_143f47cc0,1);
      pcVar9[1] = '\0';
    }
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    puVar4 = (ulonglong *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                       (&local_130,puVar7,param_3[2]);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = CONCAT44(local_148._4_4_,3);
    local_100 = 0;
    uStack_f8 = 0xf;
    local_110 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_110,"Uninterpreted option is missing name or value.",0x2e);
    local_158 = &local_110;
    FUN_143a2a760(param_1,&local_f0,param_4,7);
    if (0xf < uStack_f8) {
      uVar3 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar3) {
        uVar3 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar3);
    }
    if (0xf < uStack_d8) {
      uVar8 = uStack_d8 + 1;
      uVar3 = local_f0;
      if (0xfff < uVar8) {
        uVar8 = uStack_d8 + 0x28;
        uVar3 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3,uVar8);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
    if (0xf < uStack_118) {
      uVar3 = uStack_118 + 1;
      if (0xfff < uVar3) {
        uVar3 = uStack_118 + 0x28;
        if (0x1f < (CONCAT71(uStack_12f,local_130) -
                   *(longlong *)(CONCAT71(uStack_12f,local_130) + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(0,uVar3);
    }
  }
  else {
    uVar5 = FUN_1439f0f10(param_4,&local_110);
    FUN_1439f0e20(uVar3,uVar5);
    if (0xf < uStack_f8) {
      uVar8 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,local_110);
      lVar6 = lVar2;
      if (0xfff < uVar8) {
        uVar8 = uStack_f8 + 0x28;
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar6,uVar8);
    }
    *(ulonglong *)(param_5 + 0x18) = uVar3;
    if (0 < *(int *)(uVar3 + 0x38)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8,param_2);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8,param_3);
      FUN_143a28210(local_88,local_140);
      local_70 = param_4;
      local_68 = uVar3;
      FUN_143a4fa90(param_1 + 0x18,local_c8);
      FUN_143a29800(local_c8);
    }
  }
  return;
}



// FUNCTION 143a21990 FUN_143a21990 body=94 status=ok
// SIG undefined FUN_143a21990(void)

void FUN_143a21990(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    do {
      FUN_143a75080(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 143a219f0 FUN_143a219f0 body=282 status=ok
// SIG undefined FUN_143a219f0(void)

undefined8 FUN_143a219f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  
  pcVar11 = (char *)param_2[1];
  uVar8 = 0;
  cVar1 = *pcVar11;
  pcVar7 = pcVar11;
  while (cVar1 != '\0') {
    uVar8 = uVar8 * 5 + (longlong)cVar1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  lVar9 = *(longlong *)(param_1 + 0x18);
  uVar8 = (*param_2 * 0x1000193 ^ uVar8) & *(ulonglong *)(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(lVar9 + uVar8 * 0x10);
  do {
    puVar6 = puVar3;
    if (*(undefined8 **)(lVar9 + uVar8 * 0x10) != puVar3) {
      puVar6 = (undefined8 *)**(undefined8 **)(lVar9 + uVar8 * 0x10 + 8);
    }
    puVar5 = puVar3;
    if (puVar4 == puVar6) goto LAB_143a21adf;
    if (puVar4[2] == *param_2) {
      pcVar7 = (char *)puVar4[3];
      lVar10 = (longlong)pcVar11 - (longlong)pcVar7;
      do {
        cVar1 = *pcVar7;
        cVar2 = pcVar7[lVar10];
        if (cVar1 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) break;
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
  lVar9 = puVar4[3] - (longlong)pcVar11;
  do {
    cVar1 = *pcVar11;
    cVar2 = pcVar11[lVar9];
    if (cVar1 != cVar2) break;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  puVar5 = puVar4;
  if (cVar1 != cVar2) {
    puVar5 = puVar3;
  }
LAB_143a21adf:
  if (puVar5 == puVar3) {
    return 0;
  }
  return puVar5[4];
}



// FUNCTION 143a21b10 FUN_143a21b10 body=196 status=ok
// SIG undefined FUN_143a21b10(void)

void FUN_143a21b10(undefined8 *param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

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
      uVar3 = FUN_143a6dec0(uVar1);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar2,uVar3);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143a21be0 FUN_143a21be0 body=174 status=ok
// SIG undefined FUN_143a21be0(void)

void FUN_143a21be0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  do {
    do {
      if (param_1 == param_2) {
        return;
      }
      plVar1 = (longlong *)*param_1;
      param_1 = param_1 + 1;
    } while (plVar1 == (longlong *)0x0);
    uVar2 = plVar1[3];
    if (0xf < uVar2) {
      lVar3 = *plVar1;
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
    plVar1[2] = 0;
    plVar1[3] = 0xf;
    *(undefined1 *)plVar1 = 0;
    FMemory::operator_delete(plVar1,0x20);
  } while( true );
}



// FUNCTION 143a21c90 FUN_143a21c90 body=262 status=ok
// SIG undefined FUN_143a21c90(void)

void FUN_143a21c90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  while (param_1 != param_2) {
    lVar1 = *param_1;
    param_1 = param_1 + 1;
    if (lVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(lVar1 + 0x1e8);
      std::
      _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
      ::
      ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                (lVar1 + 0x1a8);
      std::
      _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
      ::
      ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                (lVar1 + 0x160);
      std::
      _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
      ::
      ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                (lVar1 + 0x120);
      std::
      _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
      ::
      ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                (lVar1 + 0xe0);
      lVar2 = *(longlong *)(lVar1 + 0xd0);
      if (lVar2 != 0) {
        std::
        _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
        ::
        ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                  (lVar2);
        FMemory::operator_delete(lVar2,0x40);
      }
      std::
      _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
      ::
      ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                (lVar1 + 0x90);
      lVar2 = *(longlong *)(lVar1 + 0x80);
      if (lVar2 != 0) {
        std::
        _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
        ::
        ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                  (lVar2);
        FMemory::operator_delete(lVar2,0x40);
      }
      std::
      _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
      ::
      ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                (lVar1 + 0x40);
      std::
      _Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
      ::
      ~_Hash<std::_Uset_traits<rF2::AssetFinderImpl::AssetEntry,std::_Uhash_compare<rF2::AssetFinderImpl::AssetEntry,rF2::AssetFinderImpl::AssetHash,rF2::AssetFinderImpl::AssetEqual>,std::allocator<rF2::AssetFinderImpl::AssetEntry>,0>_>
                (lVar1);
      FMemory::operator_delete(lVar1,0x238);
    }
  }
  return;
}



// FUNCTION 143a21da0 FUN_143a21da0 body=51 status=ok
// SIG undefined FUN_143a21da0(void)

void FUN_143a21da0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143a4cab0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  return;
}



// FUNCTION 143a21de0 FUN_143a21de0 body=55 status=ok
// SIG undefined FUN_143a21de0(void)

void FUN_143a21de0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *in_R9;
  
  lVar2 = FUN_143a4c8c0();
  uVar1 = in_R9[1];
  *(undefined8 *)(lVar2 + 0x10) = *in_R9;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = in_R9[2];
  return;
}



// FUNCTION 143a21e20 FUN_143a21e20 body=61 status=ok
// SIG undefined FUN_143a21e20(void)

void FUN_143a21e20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = std::
          _Tree_comp_alloc<std::_Tmap_traits<String,hx::ObjectPtr<hx::Class_obj>,std::less<String>,std::allocator<std::pair<String_const_,hx::ObjectPtr<hx::Class_obj>_>_>,0>_>
          ::_Buynode0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = param_2[2];
  return;
}



// FUNCTION 143a21e60 FUN_143a21e60 body=53 status=ok
// SIG undefined FUN_143a21e60(void)

void FUN_143a21e60(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *in_R9;
  
  lVar2 = FUN_143a4c910();
  uVar1 = in_R9[1];
  *(undefined8 *)(lVar2 + 0x10) = *in_R9;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  uVar1 = in_R9[3];
  *(undefined8 *)(lVar2 + 0x20) = in_R9[2];
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}



// FUNCTION 143a21ea0 _Buynode<std::piecewise_construct_t_const_&,std::tuple<int_const_&>,std::tuple<>_> body=77 status=ok
// SIG undefined _Buynode<std::piecewise_construct_t_const_&,std::tuple<int_const_&>,std::tuple<>_>(void)

void std::
     _Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
     ::_Buynode<std::piecewise_construct_t_const_&,std::tuple<int_const_&>,std::tuple<>_>
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = _Buynode0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_3;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0xf;
  *(undefined1 *)(lVar1 + 0x28) = 0;
  return;
}



// FUNCTION 143a21ef0 FUN_143a21ef0 body=89 status=ok
// SIG undefined FUN_143a21ef0(void)

void FUN_143a21ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = std::
          _List_alloc<std::_List_base_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>_>_>
          ::_Buynode0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  param_5 = (undefined8 *)*param_5;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  uVar1 = param_5[1];
  *(undefined8 *)(lVar2 + 0x10) = *param_5;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  uVar1 = param_5[3];
  *(undefined8 *)(lVar2 + 0x20) = param_5[2];
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  param_5[2] = 0;
  param_5[3] = 0xf;
  *(undefined1 *)param_5 = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  return;
}



// FUNCTION 143a21f50 FUN_143a21f50 body=95 status=ok
// SIG undefined FUN_143a21f50(void)

longlong FUN_143a21f50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = std::
          _Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
          ::_Buynode0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(lVar1 + 0x20,*param_3);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  return lVar1;
}



// FUNCTION 143a21fb0 FUN_143a21fb0 body=94 status=ok
// SIG undefined FUN_143a21fb0(void)

longlong FUN_143a21fb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = std::
          _Tree_comp_alloc<std::_Tmap_traits<FKey,enum_EAuraSDKKeyboardKey::Type,std::less<FKey>,std::allocator<std::pair<FKey_const_,enum_EAuraSDKKeyboardKey::Type>_>,0>_>
          ::_Buynode0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_143a28210(lVar1 + 0x20,*param_3);
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return lVar1;
}



// FUNCTION 143a22010 FUN_143a22010 body=101 status=ok
// SIG undefined FUN_143a22010(void)

longlong FUN_143a22010(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = std::
          _Tree_comp_alloc<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,nlohmann::basic_json<std::map,std::vector,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,__int64,unsigned___int64,double,std::allocator,nlohmann::adl_serializer>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,nlohmann::basic_json<std::map,std::vector,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool,__int64,unsigned___int64,double,std::allocator,nlohmann::adl_serializer>_>_>,0>_>
          ::_Buynode0();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_143a28210(lVar1 + 0x20,*param_3);
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  return lVar1;
}



// FUNCTION 143a22080 FUN_143a22080 body=67 status=ok
// SIG undefined FUN_143a22080(void)

longlong FUN_143a22080(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  lVar1 = FUN_143a4c910();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(lVar1 + 0x10,in_R9);
  return lVar1;
}



// FUNCTION 143a220d0 FUN_143a220d0 body=97 status=ok
// SIG undefined FUN_143a220d0(void)

longlong FUN_143a220d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = std::
          _Tree_comp_alloc<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
          ::_Buynode0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(lVar2 + 0x30) = param_2[2];
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)(lVar2 + 0x40) = param_2[4];
  return lVar2;
}



// FUNCTION 143a22140 FUN_143a22140 body=83 status=ok
// SIG undefined FUN_143a22140(void)

void FUN_143a22140(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = std::
          _Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          ::_Buynode0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(lVar2 + 0x30) = param_2[2];
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}



// FUNCTION 143a221a0 FUN_143a221a0 body=127 status=ok
// SIG undefined FUN_143a221a0(void)

longlong FUN_143a221a0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*param_1;
      if ((longlong *)param_3 != plVar1) {
        plVar2 = plVar1;
        if (0xf < (ulonglong)plVar1[3]) {
          plVar2 = (longlong *)*plVar1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_3,plVar2,plVar1[2]);
      }
      param_3 = param_3 + 0x20;
      param_1 = param_1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return param_3;
}



// FUNCTION 143a22220 FUN_143a22220 body=334 status=ok
// SIG undefined FUN_143a22220(void)

longlong FUN_143a22220(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar10 = *param_1;
  lVar6 = param_1[1] - lVar10 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar1 = lVar6 + 1;
  uVar7 = param_1[2] - lVar10 >> 4;
  uVar11 = uVar1;
  if ((uVar7 <= 0xfffffffffffffff - (uVar7 >> 1)) && (uVar11 = (uVar7 >> 1) + uVar7, uVar11 < uVar1)
     ) {
    uVar11 = uVar1;
  }
  lVar6 = FUN_1439fc780(param_1,uVar11,param_3,param_4,0xfffffffffffffffe);
  uVar7 = (longlong)param_2 - lVar10 & 0xfffffffffffffff0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar9 = (undefined4 *)(uVar7 + lVar6);
  *puVar9 = *param_3;
  puVar9[1] = uVar3;
  puVar9[2] = uVar4;
  puVar9[3] = uVar5;
  puVar9 = (undefined4 *)param_1[1];
  puVar8 = (undefined4 *)*param_1;
  if (param_2 == puVar9) {
    if (puVar8 != puVar9) {
      lVar10 = lVar6 - (longlong)puVar8;
      do {
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        puVar2 = (undefined4 *)(lVar10 + (longlong)puVar8);
        *puVar2 = *puVar8;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar8 = puVar8 + 4;
      } while (puVar8 != puVar9);
    }
  }
  else {
    if (puVar8 != param_2) {
      lVar10 = lVar6 - (longlong)puVar8;
      do {
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        puVar9 = (undefined4 *)(lVar10 + (longlong)puVar8);
        *puVar9 = *puVar8;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar8 = puVar8 + 4;
      } while (puVar8 != param_2);
      puVar9 = (undefined4 *)param_1[1];
    }
    if (param_2 != puVar9) {
      lVar10 = (uVar7 + 0x10 + lVar6) - (longlong)param_2;
      do {
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        puVar8 = (undefined4 *)(lVar10 + (longlong)param_2);
        *puVar8 = *param_2;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        param_2 = param_2 + 4;
      } while (param_2 != puVar9);
    }
  }
  FUN_1439fc5f0(param_1,lVar6,uVar1,uVar11);
  return *param_1 + uVar7;
}



// FUNCTION 143a22370 _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&> body=383 status=ok
// SIG undefined _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>(void)

longlong std::
         vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
         ::
         _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&>
                   (longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  lVar10 = *param_1;
  lVar7 = param_1[1] - lVar10 >> 5;
  if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    vector<int,std::allocator<int>_>::_Xlength();
  }
  uVar8 = lVar7 + 1;
  uVar2 = param_1[2] - lVar10 >> 5;
  uVar9 = uVar8;
  if ((uVar2 <= 0x7ffffffffffffff - (uVar2 >> 1)) && (uVar9 = (uVar2 >> 1) + uVar2, uVar9 < uVar8))
  {
    uVar9 = uVar8;
  }
  lVar3 = allocator<CefRect>::allocate(param_1,uVar9);
  uVar2 = param_2 - lVar10 & 0xffffffffffffffe0;
  lVar1 = uVar2 + lVar3;
  lVar10 = lVar1 + 0x20;
  lVar11 = lVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(lVar1,param_3);
  lVar5 = param_1[1];
  lVar4 = *param_1;
  lVar7 = lVar3;
  if (param_2 != lVar5) {
    _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              (*param_1,param_2,lVar3,param_1,lVar10,lVar11,uVar12);
    lVar7 = lVar1 + 0x20;
    lVar5 = param_1[1];
    lVar4 = param_2;
  }
  _Uninitialized_move<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (lVar4,lVar5,lVar7,param_1,lVar10,lVar11,uVar12);
  if (*param_1 != 0) {
    _Destroy_range<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              (*param_1,param_1[1],param_1);
    lVar10 = *param_1;
    uVar6 = param_1[2] - lVar10 & 0xffffffffffffffe0;
    lVar7 = lVar10;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar7 = *(longlong *)(lVar10 + -8);
      if (0x1f < (lVar10 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar7,uVar6);
  }
  *param_1 = lVar3;
  param_1[1] = uVar8 * 0x20 + lVar3;
  param_1[2] = uVar9 * 0x20 + lVar3;
  return *param_1 + uVar2;
}



// FUNCTION 143a22500 FUN_143a22500 body=536 status=ok
// SIG undefined FUN_143a22500(void)

longlong FUN_143a22500(ulonglong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4
                      )

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = *param_1;
  lVar6 = (longlong)(param_1[1] - uVar14) >> 5;
  if (lVar6 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<int,std::allocator<int>_>::_Xlength
              (param_1,uVar14,0x7ffffffffffffff,param_4,0xfffffffffffffffe);
  }
  uVar1 = lVar6 + 1;
  uVar8 = (longlong)(param_1[2] - uVar14) >> 5;
  uVar13 = uVar1;
  if ((uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) && (uVar13 = (uVar8 >> 1) + uVar8, uVar13 < uVar1)
     ) {
    uVar13 = uVar1;
  }
  uVar8 = uVar13 * 0x20;
  if (uVar13 < 0x800000000000000) {
    uVar13 = uVar8;
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = operator_new(uVar8);
      }
      goto LAB_143a225ee;
    }
  }
  else {
    uVar13 = 0xffffffffffffffff;
  }
  uVar9 = uVar13 + 0x27;
  if (uVar9 <= uVar13) {
    uVar9 = 0xffffffffffffffff;
  }
  lVar6 = operator_new(uVar9);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar13 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar13 - 8) = lVar6;
LAB_143a225ee:
  uVar14 = (longlong)param_2 - uVar14 & 0xffffffffffffffe0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar10 = (undefined4 *)(uVar14 + uVar13);
  *puVar10 = *param_3;
  puVar10[1] = uVar3;
  puVar10[2] = uVar4;
  puVar10[3] = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  puVar10 = (undefined4 *)(uVar14 + 0x10 + uVar13);
  *puVar10 = param_3[4];
  puVar10[1] = uVar3;
  puVar10[2] = uVar4;
  puVar10[3] = uVar5;
  puVar10 = (undefined4 *)param_1[1];
  puVar7 = (undefined4 *)*param_1;
  if (param_2 == puVar10) {
    if (puVar7 != puVar10) {
      lVar6 = uVar13 - (longlong)puVar7;
      do {
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        uVar5 = puVar7[3];
        puVar2 = (undefined4 *)((longlong)puVar7 + lVar6);
        *puVar2 = *puVar7;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = puVar7[5];
        uVar4 = puVar7[6];
        uVar5 = puVar7[7];
        puVar2 = (undefined4 *)((longlong)puVar7 + lVar6 + 0x10);
        *puVar2 = puVar7[4];
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar7 = puVar7 + 8;
      } while (puVar7 != puVar10);
    }
  }
  else {
    if (puVar7 != param_2) {
      lVar6 = uVar13 - (longlong)puVar7;
      do {
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        uVar5 = puVar7[3];
        puVar10 = (undefined4 *)((longlong)puVar7 + lVar6);
        *puVar10 = *puVar7;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar3 = puVar7[5];
        uVar4 = puVar7[6];
        uVar5 = puVar7[7];
        puVar10 = (undefined4 *)((longlong)puVar7 + lVar6 + 0x10);
        *puVar10 = puVar7[4];
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar7 = puVar7 + 8;
      } while (puVar7 != param_2);
      puVar10 = (undefined4 *)param_1[1];
    }
    if (param_2 != puVar10) {
      lVar6 = (uVar14 + 0x20 + uVar13) - (longlong)param_2;
      do {
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        puVar7 = (undefined4 *)((longlong)param_2 + lVar6);
        *puVar7 = *param_2;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        uVar3 = param_2[5];
        uVar4 = param_2[6];
        uVar5 = param_2[7];
        puVar7 = (undefined4 *)((longlong)param_2 + lVar6 + 0x10);
        *puVar7 = param_2[4];
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        param_2 = param_2 + 8;
      } while (param_2 != puVar10);
    }
  }
  uVar9 = *param_1;
  if (uVar9 != 0) {
    uVar12 = param_1[2] - uVar9 & 0xffffffffffffffe0;
    uVar11 = uVar9;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      uVar11 = *(ulonglong *)(uVar9 - 8);
      if (0x1f < (uVar9 - uVar11) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar11,uVar12);
  }
  *param_1 = uVar13;
  param_1[1] = uVar1 * 0x20 + uVar13;
  param_1[2] = uVar13 + uVar8;
  return *param_1 + uVar14;
}



// FUNCTION 143a22720 FUN_143a22720 body=718 status=ok
// SIG undefined FUN_143a22720(void)

longlong FUN_143a22720(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  
  uVar18 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  lVar16 = param_2 - lVar8;
  lVar11 = (param_1[1] - lVar8) / 0x68;
  if (lVar11 == 0x276276276276276) {
    FUN_143a4d9f0();
    pcVar3 = (code *)swi(3);
    lVar8 = (*pcVar3)();
    return lVar8;
  }
  uVar1 = lVar11 + 1;
  uVar9 = (param_1[2] - lVar8) / 0x68;
  uVar13 = uVar1;
  if ((uVar9 <= 0x276276276276276 - (uVar9 >> 1)) && (uVar13 = uVar9 + (uVar9 >> 1), uVar13 < uVar1)
     ) {
    uVar13 = uVar1;
  }
  uVar9 = uVar13 * 0x68;
  if (uVar13 < 0x276276276276277) {
    uVar12 = uVar9;
    if (uVar9 < 0x1000) {
      if (uVar9 == 0) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        puVar14 = (undefined8 *)operator_new(uVar9,uVar9,0x276276276276276,lVar16,uVar13);
      }
      goto LAB_143a22850;
    }
  }
  else {
    uVar12 = 0xffffffffffffffff;
  }
  uVar10 = uVar12 + 0x27;
  if (uVar10 <= uVar12) {
    uVar10 = 0xffffffffffffffff;
  }
  lVar8 = operator_new(uVar10,uVar12,0x276276276276276,lVar16,uVar13);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar14 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
  puVar14[-1] = lVar8;
LAB_143a22850:
  puVar15 = puVar14 + (lVar16 / 0x68) * 0xd;
  puVar2 = puVar15 + 0xd;
  puVar15[2] = 0;
  puVar15[3] = 0;
  uVar7 = param_3[1];
  *puVar15 = *param_3;
  puVar15[1] = uVar7;
  uVar7 = param_3[3];
  puVar15[2] = param_3[2];
  puVar15[3] = uVar7;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar4;
  *(undefined4 *)(puVar15 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar5 = *(undefined4 *)(param_3 + 7);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar15 + 0x34) = uVar4;
  *(undefined4 *)(puVar15 + 7) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar6;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar15[8] = param_3[8];
  puVar15[9] = param_3[9];
  puVar15[10] = param_3[10];
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  puVar15[0xb] = param_3[0xb];
  puVar15[0xc] = param_3[0xc];
  lVar8 = param_1[1];
  lVar11 = *param_1;
  puVar15 = puVar14;
  puVar17 = puVar2;
  if (param_2 != lVar8) {
    FUN_143a27690(*param_1,param_2,puVar14,param_1,uVar13,uVar9,puVar2,uVar18);
    lVar8 = param_1[1];
    lVar11 = param_2;
    puVar15 = puVar2;
  }
  FUN_143a27690(lVar11,lVar8,puVar15,param_1,uVar13,uVar9,puVar17,uVar18);
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar11 = param_1[1];
    if (lVar8 != lVar11) {
      do {
        FUN_143a29800(lVar8);
        lVar8 = lVar8 + 0x68;
      } while (lVar8 != lVar11);
      lVar8 = *param_1;
    }
    uVar13 = ((param_1[2] - lVar8) / 0x68) * 0x68;
    lVar11 = lVar8;
    if (0xfff < uVar13) {
      uVar13 = uVar13 + 0x27;
      lVar11 = *(longlong *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar11,uVar13);
  }
  *param_1 = (longlong)puVar14;
  param_1[1] = (longlong)(puVar14 + uVar1 * 0xd);
  param_1[2] = uVar9 + (longlong)puVar14;
  return *param_1 + (lVar16 / 0x68) * 0x68;
}



// FUNCTION 143a229f0 FUN_143a229f0 body=327 status=ok
// SIG undefined FUN_143a229f0(void)

longlong * FUN_143a229f0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = ((longlong)(int)param_3[1] * 0x1000193 ^ *param_3 * 0x100011b) &
          *(ulonglong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 8);
  plVar6 = (longlong *)(uVar4 * 0x10 + *(longlong *)(param_1 + 0x18));
  lVar5 = *plVar6;
  if (lVar3 == lVar5) {
LAB_143a22a99:
    lVar5 = *param_4;
    if (lVar3 != lVar5) {
      *(longlong *)param_4[1] = lVar5;
      **(longlong **)(lVar5 + 8) = lVar3;
      **(undefined8 **)(lVar3 + 8) = param_4;
      lVar1 = *(longlong *)(lVar3 + 8);
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar5 + 8);
      *(longlong *)(lVar5 + 8) = param_4[1];
      param_4[1] = lVar1;
    }
    lVar5 = uVar4 * 0x10;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar5);
    if (*plVar6 == *(longlong *)(param_1 + 8)) {
      *plVar6 = (longlong)param_4;
      *(longlong **)(lVar5 + 8 + *(longlong *)(param_1 + 0x18)) = param_4;
    }
    else if (*plVar6 == lVar3) {
      *plVar6 = (longlong)param_4;
    }
    else {
      plVar2 = *(longlong **)plVar6[1];
      plVar6[1] = (longlong)plVar2;
      if (plVar2 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar5) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar5) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar3 = *(longlong *)plVar6[1];
    do {
      if (lVar3 == lVar5) goto LAB_143a22a99;
      lVar3 = *(longlong *)(lVar3 + 8);
    } while ((*param_3 != *(longlong *)(lVar3 + 0x10)) ||
            ((int)param_3[1] != *(int *)(lVar3 + 0x18)));
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x28,uVar4,param_1,0xfffffffffffffffe);
    *param_2 = lVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a22b40 FUN_143a22b40 body=396 status=ok
// SIG undefined FUN_143a22b40(void)

longlong * FUN_143a22b40(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  pcVar5 = (char *)param_3[1];
  uVar8 = 0;
  cVar1 = *pcVar5;
  while (cVar1 != '\0') {
    uVar8 = uVar8 * 5 + (longlong)cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  lVar7 = *(longlong *)(param_1 + 8);
  lVar10 = ((*param_3 * 0x1000193 ^ uVar8) & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10);
  if (lVar7 == lVar3) {
LAB_143a22c2e:
    lVar3 = *param_4;
    if (lVar7 != lVar3) {
      *(longlong *)param_4[1] = lVar3;
      **(longlong **)(lVar3 + 8) = lVar7;
      **(undefined8 **)(lVar7 + 8) = param_4;
      lVar9 = *(longlong *)(lVar7 + 8);
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar3 + 8);
      *(longlong *)(lVar3 + 8) = param_4[1];
      param_4[1] = lVar9;
    }
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar10);
    if (*plVar6 == *(longlong *)(param_1 + 8)) {
      *plVar6 = (longlong)param_4;
      *(longlong **)(lVar10 + 8 + *(longlong *)(param_1 + 0x18)) = param_4;
    }
    else if (*plVar6 == lVar7) {
      *plVar6 = (longlong)param_4;
    }
    else {
      plVar4 = *(longlong **)plVar6[1];
      plVar6[1] = (longlong)plVar4;
      if (plVar4 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar7 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar10);
    do {
      do {
        if (lVar7 == lVar3) goto LAB_143a22c2e;
        lVar7 = *(longlong *)(lVar7 + 8);
      } while (*param_3 != *(longlong *)(lVar7 + 0x10));
      pcVar5 = (char *)param_3[1];
      lVar9 = *(longlong *)(lVar7 + 0x18) - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar9];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x28,0,lVar9,0xfffffffffffffffe);
    *param_2 = lVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a22cd0 FUN_143a22cd0 body=396 status=ok
// SIG undefined FUN_143a22cd0(void)

longlong * FUN_143a22cd0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  pcVar5 = (char *)param_3[1];
  uVar8 = 0;
  cVar1 = *pcVar5;
  while (cVar1 != '\0') {
    uVar8 = uVar8 * 5 + (longlong)cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  lVar7 = *(longlong *)(param_1 + 8);
  lVar10 = ((*param_3 * 0x1000193 ^ uVar8) & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10);
  if (lVar7 == lVar3) {
LAB_143a22dbe:
    lVar3 = *param_4;
    if (lVar7 != lVar3) {
      *(longlong *)param_4[1] = lVar3;
      **(longlong **)(lVar3 + 8) = lVar7;
      **(undefined8 **)(lVar7 + 8) = param_4;
      lVar9 = *(longlong *)(lVar7 + 8);
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar3 + 8);
      *(longlong *)(lVar3 + 8) = param_4[1];
      param_4[1] = lVar9;
    }
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar10);
    if (*plVar6 == *(longlong *)(param_1 + 8)) {
      *plVar6 = (longlong)param_4;
      *(longlong **)(lVar10 + 8 + *(longlong *)(param_1 + 0x18)) = param_4;
    }
    else if (*plVar6 == lVar7) {
      *plVar6 = (longlong)param_4;
    }
    else {
      plVar4 = *(longlong **)plVar6[1];
      plVar6[1] = (longlong)plVar4;
      if (plVar4 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar7 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar10);
    do {
      do {
        if (lVar7 == lVar3) goto LAB_143a22dbe;
        lVar7 = *(longlong *)(lVar7 + 8);
      } while (*param_3 != *(longlong *)(lVar7 + 0x10));
      pcVar5 = (char *)param_3[1];
      lVar9 = *(longlong *)(lVar7 + 0x18) - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar9];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x30,0,lVar9,0xfffffffffffffffe);
    *param_2 = lVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a22e60 FUN_143a22e60 body=540 status=ok
// SIG undefined FUN_143a22e60(void)

longlong * FUN_143a22e60(float *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  void *_Buf2;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  uVar8 = param_3[2];
  uVar10 = param_3[3];
  puVar6 = param_3;
  if (0xf < uVar10) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (uVar8 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar6)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar8);
  }
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  lVar9 = *(longlong *)(param_1 + 2);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 6) + uVar7 * 0x10);
  if (lVar9 == lVar1) {
LAB_143a22f69:
    lVar1 = *param_4;
    if (lVar9 != lVar1) {
      *(longlong *)param_4[1] = lVar1;
      **(longlong **)(lVar1 + 8) = lVar9;
      **(undefined8 **)(lVar9 + 8) = param_4;
      lVar2 = *(longlong *)(lVar9 + 8);
      *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(lVar1 + 8) = param_4[1];
      param_4[1] = lVar2;
    }
    lVar1 = *(longlong *)(param_1 + 6);
    lVar2 = *(longlong *)(lVar1 + uVar7 * 0x10);
    if (lVar2 == *(longlong *)(param_1 + 2)) {
      *(longlong **)(lVar1 + uVar7 * 0x10) = param_4;
      *(longlong **)(*(longlong *)(param_1 + 6) + 8 + uVar7 * 0x10) = param_4;
    }
    else if (lVar2 == lVar9) {
      *(longlong **)(lVar1 + uVar7 * 0x10) = param_4;
    }
    else {
      plVar3 = (longlong *)**(undefined8 **)(lVar1 + 8 + uVar7 * 0x10);
      *(longlong **)(lVar1 + 8 + uVar7 * 0x10) = plVar3;
      if (plVar3 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 6) + 8 + uVar7 * 0x10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 6) + 8 + uVar7 * 0x10) + 8);
      }
    }
    uVar8 = *(ulonglong *)(param_1 + 0xe);
    fVar11 = (float)*(longlong *)(param_1 + 4);
    if (*(longlong *)(param_1 + 4) < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    fVar12 = (float)(longlong)uVar8;
    if ((longlong)uVar8 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    if (*param_1 <= fVar11 / fVar12 && fVar11 / fVar12 != *param_1) {
      if (uVar8 < 0x200) {
        uVar8 = uVar8 * 8;
      }
      else if (uVar8 < 0xfffffffffffffff) {
        uVar8 = uVar8 * 2;
      }
      std::
      _Hash<std::_Umap_traits<hx::Object_*,int,std::_Uhash_compare<hx::Object_*,std::hash<hx::Object_*>,std::equal_to<hx::Object_*>_>,std::allocator<std::pair<hx::Object_*_const,int>_>,0>_>
      ::_Init(param_1,uVar8,fVar12,uVar10,uVar13);
      std::
      _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
      ::_Reinsert(param_1);
    }
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar9 = **(longlong **)(*(longlong *)(param_1 + 6) + 8 + uVar7 * 0x10);
    do {
      do {
        if (lVar9 == lVar1) goto LAB_143a22f69;
        lVar9 = *(longlong *)(lVar9 + 8);
        _Buf2 = (void *)(lVar9 + 0x10);
        if (0xf < *(ulonglong *)(lVar9 + 0x28)) {
          _Buf2 = *(void **)(lVar9 + 0x10);
        }
        puVar6 = param_3;
        if (0xf < uVar10) {
          puVar6 = (undefined8 *)*param_3;
        }
      } while (uVar8 != *(ulonglong *)(lVar9 + 0x20));
      iVar4 = _guard_xfg_dispatch_icall_nop(puVar6,_Buf2,uVar8);
      uVar10 = param_3[3];
    } while (iVar4 != 0);
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + -1;
    std::
    _List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,unsigned_int>_>_>
    ::_Freenode(param_1 + 2,param_4);
    *param_2 = lVar9;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a23080 FUN_143a23080 body=398 status=ok
// SIG undefined FUN_143a23080(void)

longlong * FUN_143a23080(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  pcVar3 = (char *)*param_3;
  uVar9 = 0;
  cVar1 = *pcVar3;
  pcVar6 = pcVar3;
  while (cVar1 != '\0') {
    uVar9 = uVar9 * 5 + (longlong)cVar1;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  lVar8 = *(longlong *)(param_1 + 8);
  lVar11 = (*(ulonglong *)(param_1 + 0x30) & uVar9) * 0x10;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
  if (lVar8 == lVar4) {
LAB_143a2316e:
    lVar4 = *param_4;
    if (lVar8 != lVar4) {
      *(longlong *)param_4[1] = lVar4;
      **(longlong **)(lVar4 + 8) = lVar8;
      **(undefined8 **)(lVar8 + 8) = param_4;
      lVar10 = *(longlong *)(lVar8 + 8);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar4 + 8);
      *(longlong *)(lVar4 + 8) = param_4[1];
      param_4[1] = lVar10;
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
    if (*plVar7 == *(longlong *)(param_1 + 8)) {
      *plVar7 = (longlong)param_4;
      *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) = param_4;
    }
    else if (*plVar7 == lVar8) {
      *plVar7 = (longlong)param_4;
    }
    else {
      plVar5 = *(longlong **)plVar7[1];
      plVar7[1] = (longlong)plVar5;
      if (plVar5 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar8 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11);
    do {
      if (lVar8 == lVar4) goto LAB_143a2316e;
      lVar8 = *(longlong *)(lVar8 + 8);
      lVar10 = *(longlong *)(lVar8 + 0x10) - (longlong)pcVar3;
      pcVar6 = pcVar3;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar10];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x20,0,lVar10,0xfffffffffffffffe);
    *param_2 = lVar8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a23210 FUN_143a23210 body=398 status=ok
// SIG undefined FUN_143a23210(void)

longlong * FUN_143a23210(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  pcVar3 = (char *)*param_3;
  uVar9 = 0;
  cVar1 = *pcVar3;
  pcVar6 = pcVar3;
  while (cVar1 != '\0') {
    uVar9 = uVar9 * 5 + (longlong)cVar1;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  lVar8 = *(longlong *)(param_1 + 8);
  lVar11 = (*(ulonglong *)(param_1 + 0x30) & uVar9) * 0x10;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
  if (lVar8 == lVar4) {
LAB_143a232fe:
    lVar4 = *param_4;
    if (lVar8 != lVar4) {
      *(longlong *)param_4[1] = lVar4;
      **(longlong **)(lVar4 + 8) = lVar8;
      **(undefined8 **)(lVar8 + 8) = param_4;
      lVar10 = *(longlong *)(lVar8 + 8);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar4 + 8);
      *(longlong *)(lVar4 + 8) = param_4[1];
      param_4[1] = lVar10;
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
    if (*plVar7 == *(longlong *)(param_1 + 8)) {
      *plVar7 = (longlong)param_4;
      *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) = param_4;
    }
    else if (*plVar7 == lVar8) {
      *plVar7 = (longlong)param_4;
    }
    else {
      plVar5 = *(longlong **)plVar7[1];
      plVar7[1] = (longlong)plVar5;
      if (plVar5 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar8 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11);
    do {
      if (lVar8 == lVar4) goto LAB_143a232fe;
      lVar8 = *(longlong *)(lVar8 + 8);
      lVar10 = *(longlong *)(lVar8 + 0x10) - (longlong)pcVar3;
      pcVar6 = pcVar3;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar10];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x28,0,lVar10,0xfffffffffffffffe);
    *param_2 = lVar8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a233a0 FUN_143a233a0 body=433 status=ok
// SIG undefined FUN_143a233a0(void)

longlong * FUN_143a233a0(longlong param_1,longlong *param_2,byte *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  uVar6 = *(ulonglong *)(param_1 + 0x30) & uVar5;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar6 * 0x10);
  if (lVar4 == lVar7) {
LAB_143a234ab:
    lVar7 = *param_4;
    if (lVar4 != lVar7) {
      *(longlong *)param_4[1] = lVar7;
      **(longlong **)(lVar7 + 8) = lVar4;
      **(undefined8 **)(lVar4 + 8) = param_4;
      lVar1 = *(longlong *)(lVar4 + 8);
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
      *(longlong *)(lVar7 + 8) = param_4[1];
      param_4[1] = lVar1;
    }
    lVar7 = uVar6 * 0x10;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar7);
    if (*plVar3 == *(longlong *)(param_1 + 8)) {
      *plVar3 = (longlong)param_4;
      *(longlong **)(lVar7 + 8 + *(longlong *)(param_1 + 0x18)) = param_4;
    }
    else if (*plVar3 == lVar4) {
      *plVar3 = (longlong)param_4;
    }
    else {
      plVar2 = *(longlong **)plVar3[1];
      plVar3[1] = (longlong)plVar2;
      if (plVar2 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar7) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar7) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + uVar6 * 0x10);
    do {
      if (lVar4 == lVar7) goto LAB_143a234ab;
      lVar4 = *(longlong *)(lVar4 + 8);
    } while (*(longlong *)param_3 != *(longlong *)(lVar4 + 0x10));
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FMemory::operator_delete(param_4,0x18,param_3,uVar5,0xfffffffffffffffe);
    *param_2 = lVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a23560 FUN_143a23560 body=418 status=ok
// SIG undefined FUN_143a23560(void)

longlong * FUN_143a23560(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar9 = ((longlong)(int)param_3[1] * 0x1000193 ^ *param_3 * 0x100011b) &
          *(ulonglong *)(param_1 + 0x30);
  plVar5 = *(longlong **)(param_1 + 8);
  plVar7 = (longlong *)(uVar9 * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar1 = (longlong *)*plVar7;
  plVar8 = plVar5;
  if (plVar1 != plVar5) {
    plVar8 = *(longlong **)plVar7[1];
  }
  do {
    if (plVar8 == plVar1) {
      lVar10 = *plVar5;
      puVar2 = *(undefined8 **)(lVar10 + 8);
      uVar4 = FUN_143a21de0(param_1 + 8,lVar10,puVar2,param_3,0xfffffffffffffffe);
      if (*(longlong *)(param_1 + 0x10) != 0x666666666666665) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *(undefined8 *)(lVar10 + 8) = uVar4;
        *puVar2 = uVar4;
        plVar5 = *(longlong **)(param_1 + 8);
        puVar2 = (undefined8 *)*plVar5;
        plVar1 = (longlong *)*puVar2;
        if (plVar8 != plVar1) {
          *(longlong **)puVar2[1] = plVar1;
          *(longlong **)plVar1[1] = plVar8;
          *(undefined8 **)plVar8[1] = puVar2;
          lVar10 = plVar8[1];
          plVar8[1] = plVar1[1];
          plVar1[1] = puVar2[1];
          puVar2[1] = lVar10;
          plVar5 = *(longlong **)(param_1 + 8);
        }
        lVar10 = uVar9 * 0x10;
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar10);
        if ((longlong *)*puVar6 == plVar5) {
          *puVar6 = puVar2;
          *(undefined8 **)(lVar10 + 8 + *(longlong *)(param_1 + 0x18)) = puVar2;
        }
        else if ((longlong *)*puVar6 == plVar8) {
          *puVar6 = puVar2;
        }
        else {
          puVar3 = *(undefined8 **)puVar6[1];
          puVar6[1] = puVar3;
          if (puVar3 != puVar2) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) =
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) + 8);
          }
        }
        std::
        _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
        ::_Check_size(param_1);
        *param_2 = (longlong)puVar2;
        *(undefined1 *)(param_2 + 1) = 1;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    plVar8 = (longlong *)plVar8[1];
  } while ((*param_3 != plVar8[2]) || ((int)param_3[1] != (int)plVar8[3]));
  *param_2 = (longlong)plVar8;
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 143a23710 FUN_143a23710 body=472 status=ok
// SIG undefined FUN_143a23710(void)

longlong * FUN_143a23710(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  pcVar5 = (char *)param_3[1];
  uVar9 = 0;
  cVar1 = *pcVar5;
  while (cVar1 != '\0') {
    uVar9 = uVar9 * 5 + (longlong)cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar11 = ((*param_3 * 0x1000193 ^ uVar9) & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar11);
  if (plVar8 == plVar6) {
LAB_143a237d9:
    lVar10 = **(longlong **)(param_1 + 8);
    puVar3 = *(undefined8 **)(lVar10 + 8);
    uVar4 = FUN_143a21de0(param_1 + 8,lVar10,puVar3,param_3,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 0x10) == 0x666666666666665) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *(undefined8 *)(lVar10 + 8) = uVar4;
    *puVar3 = uVar4;
    plVar6 = *(longlong **)(param_1 + 8);
    puVar3 = (undefined8 *)*plVar6;
    plVar7 = (longlong *)*puVar3;
    if (plVar8 != plVar7) {
      *(longlong **)puVar3[1] = plVar7;
      *(longlong **)plVar7[1] = plVar8;
      *(undefined8 **)plVar8[1] = puVar3;
      lVar10 = plVar8[1];
      plVar8[1] = plVar7[1];
      plVar7[1] = puVar3[1];
      puVar3[1] = lVar10;
      plVar6 = *(longlong **)(param_1 + 8);
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
    if ((longlong *)*plVar7 == plVar6) {
      *plVar7 = (longlong)puVar3;
      *(undefined8 **)(lVar11 + 8 + *(longlong *)(param_1 + 0x18)) = puVar3;
    }
    else if ((longlong *)*plVar7 == plVar8) {
      *plVar7 = (longlong)puVar3;
    }
    else {
      lVar10 = *(longlong *)plVar7[1];
      plVar7[1] = lVar10;
      if ((undefined8 *)lVar10 != puVar3) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    plVar8 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11);
    do {
      do {
        if (plVar8 == plVar6) goto LAB_143a237d9;
        plVar8 = (longlong *)plVar8[1];
      } while (*param_3 != plVar8[2]);
      pcVar5 = (char *)param_3[1];
      lVar10 = plVar8[3] - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar10];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *param_2 = (longlong)plVar8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a238f0 FUN_143a238f0 body=472 status=ok
// SIG undefined FUN_143a238f0(void)

longlong * FUN_143a238f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  pcVar5 = (char *)param_3[1];
  uVar9 = 0;
  cVar1 = *pcVar5;
  while (cVar1 != '\0') {
    uVar9 = uVar9 * 5 + (longlong)cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar11 = ((*param_3 * 0x1000193 ^ uVar9) & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar11);
  if (plVar8 == plVar6) {
LAB_143a239b9:
    lVar10 = **(longlong **)(param_1 + 8);
    puVar3 = *(undefined8 **)(lVar10 + 8);
    uVar4 = FUN_143a21e60(param_1 + 8,lVar10,puVar3,param_3,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 0x10) == 0x555555555555554) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *(undefined8 *)(lVar10 + 8) = uVar4;
    *puVar3 = uVar4;
    plVar6 = *(longlong **)(param_1 + 8);
    puVar3 = (undefined8 *)*plVar6;
    plVar7 = (longlong *)*puVar3;
    if (plVar8 != plVar7) {
      *(longlong **)puVar3[1] = plVar7;
      *(longlong **)plVar7[1] = plVar8;
      *(undefined8 **)plVar8[1] = puVar3;
      lVar10 = plVar8[1];
      plVar8[1] = plVar7[1];
      plVar7[1] = puVar3[1];
      puVar3[1] = lVar10;
      plVar6 = *(longlong **)(param_1 + 8);
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar11);
    if ((longlong *)*plVar7 == plVar6) {
      *plVar7 = (longlong)puVar3;
      *(undefined8 **)(lVar11 + 8 + *(longlong *)(param_1 + 0x18)) = puVar3;
    }
    else if ((longlong *)*plVar7 == plVar8) {
      *plVar7 = (longlong)puVar3;
    }
    else {
      lVar10 = *(longlong *)plVar7[1];
      plVar7[1] = lVar10;
      if ((undefined8 *)lVar10 != puVar3) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    plVar8 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + lVar11);
    do {
      do {
        if (plVar8 == plVar6) goto LAB_143a239b9;
        plVar8 = (longlong *)plVar8[1];
      } while (*param_3 != plVar8[2]);
      pcVar5 = (char *)param_3[1];
      lVar10 = plVar8[3] - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar10];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *param_2 = (longlong)plVar8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a23ad0 FUN_143a23ad0 body=474 status=ok
// SIG undefined FUN_143a23ad0(void)

longlong * FUN_143a23ad0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  pcVar3 = (char *)*param_3;
  uVar11 = 0;
  cVar1 = *pcVar3;
  pcVar7 = pcVar3;
  while (cVar1 != '\0') {
    uVar11 = uVar11 * 5 + (longlong)cVar1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  plVar10 = *(longlong **)(param_1 + 8);
  lVar12 = (*(ulonglong *)(param_1 + 0x30) & uVar11) * 0x10;
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar12);
  if (plVar10 == plVar8) {
LAB_143a23b99:
    lVar4 = **(longlong **)(param_1 + 8);
    puVar5 = *(undefined8 **)(lVar4 + 8);
    uVar6 = FUN_1439fce00(param_1 + 8,lVar4,puVar5,param_3,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 0x10) == 0x7fffffffffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *(undefined8 *)(lVar4 + 8) = uVar6;
    *puVar5 = uVar6;
    plVar8 = *(longlong **)(param_1 + 8);
    puVar5 = (undefined8 *)*plVar8;
    plVar9 = (longlong *)*puVar5;
    if (plVar10 != plVar9) {
      *(longlong **)puVar5[1] = plVar9;
      *(longlong **)plVar9[1] = plVar10;
      *(undefined8 **)plVar10[1] = puVar5;
      lVar4 = plVar10[1];
      plVar10[1] = plVar9[1];
      plVar9[1] = puVar5[1];
      puVar5[1] = lVar4;
      plVar8 = *(longlong **)(param_1 + 8);
    }
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar12);
    if ((longlong *)*plVar9 == plVar8) {
      *plVar9 = (longlong)puVar5;
      *(undefined8 **)(lVar12 + 8 + *(longlong *)(param_1 + 0x18)) = puVar5;
    }
    else if ((longlong *)*plVar9 == plVar10) {
      *plVar9 = (longlong)puVar5;
    }
    else {
      lVar4 = *(longlong *)plVar9[1];
      plVar9[1] = lVar4;
      if ((undefined8 *)lVar4 != puVar5) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    plVar10 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + lVar12);
    do {
      if (plVar10 == plVar8) goto LAB_143a23b99;
      plVar10 = (longlong *)plVar10[1];
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = pcVar7[plVar10[2] - (longlong)pcVar3];
        if (cVar1 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *param_2 = (longlong)plVar10;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a23cb0 FUN_143a23cb0 body=474 status=ok
// SIG undefined FUN_143a23cb0(void)

longlong * FUN_143a23cb0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  pcVar3 = (char *)*param_3;
  uVar11 = 0;
  cVar1 = *pcVar3;
  pcVar7 = pcVar3;
  while (cVar1 != '\0') {
    uVar11 = uVar11 * 5 + (longlong)cVar1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  plVar10 = *(longlong **)(param_1 + 8);
  lVar12 = (*(ulonglong *)(param_1 + 0x30) & uVar11) * 0x10;
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar12);
  if (plVar10 == plVar8) {
LAB_143a23d79:
    lVar4 = **(longlong **)(param_1 + 8);
    puVar5 = *(undefined8 **)(lVar4 + 8);
    uVar6 = FUN_143a21de0(param_1 + 8,lVar4,puVar5,param_3,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 0x10) == 0x666666666666665) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *(undefined8 *)(lVar4 + 8) = uVar6;
    *puVar5 = uVar6;
    plVar8 = *(longlong **)(param_1 + 8);
    puVar5 = (undefined8 *)*plVar8;
    plVar9 = (longlong *)*puVar5;
    if (plVar10 != plVar9) {
      *(longlong **)puVar5[1] = plVar9;
      *(longlong **)plVar9[1] = plVar10;
      *(undefined8 **)plVar10[1] = puVar5;
      lVar4 = plVar10[1];
      plVar10[1] = plVar9[1];
      plVar9[1] = puVar5[1];
      puVar5[1] = lVar4;
      plVar8 = *(longlong **)(param_1 + 8);
    }
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar12);
    if ((longlong *)*plVar9 == plVar8) {
      *plVar9 = (longlong)puVar5;
      *(undefined8 **)(lVar12 + 8 + *(longlong *)(param_1 + 0x18)) = puVar5;
    }
    else if ((longlong *)*plVar9 == plVar10) {
      *plVar9 = (longlong)puVar5;
    }
    else {
      lVar4 = *(longlong *)plVar9[1];
      plVar9[1] = lVar4;
      if ((undefined8 *)lVar4 != puVar5) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar12) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    plVar10 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 8 + lVar12);
    do {
      if (plVar10 == plVar8) goto LAB_143a23d79;
      plVar10 = (longlong *)plVar10[1];
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = pcVar7[plVar10[2] - (longlong)pcVar3];
        if (cVar1 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
    } while (cVar1 != cVar2);
    *param_2 = (longlong)plVar10;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a23e90 FUN_143a23e90 body=507 status=ok
// SIG undefined FUN_143a23e90(void)

longlong * FUN_143a23e90(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong _Size;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  _Size = param_3[2];
  uVar9 = param_3[3];
  puVar4 = param_3;
  if (0xf < uVar9) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar3 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (_Size != 0) {
    do {
      uVar3 = (uVar3 ^ *(byte *)(uVar6 + (longlong)puVar4)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < _Size);
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar10 = (*(ulonglong *)(param_1 + 0x30) & uVar3) * 0x10;
  plVar5 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x18));
  if (plVar8 == plVar5) {
LAB_143a23f72:
    lVar1 = **(longlong **)(param_1 + 8);
    puVar4 = *(undefined8 **)(lVar1 + 8);
    uVar11 = FUN_143a22080(param_1 + 8,lVar1,puVar4,param_3,uVar11);
    if (*(longlong *)(param_1 + 0x10) == 0x555555555555554) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop("list<T> too long");
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *(undefined8 *)(lVar1 + 8) = uVar11;
    *puVar4 = uVar11;
    plVar5 = *(longlong **)(param_1 + 8);
    puVar4 = (undefined8 *)*plVar5;
    plVar7 = (longlong *)*puVar4;
    if (plVar8 != plVar7) {
      *(longlong **)puVar4[1] = plVar7;
      *(longlong **)plVar7[1] = plVar8;
      *(undefined8 **)plVar8[1] = puVar4;
      lVar1 = plVar8[1];
      plVar8[1] = plVar7[1];
      plVar7[1] = puVar4[1];
      puVar4[1] = lVar1;
      plVar5 = *(longlong **)(param_1 + 8);
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar10);
    if ((longlong *)*plVar7 == plVar5) {
      *plVar7 = (longlong)puVar4;
      *(undefined8 **)(lVar10 + 8 + *(longlong *)(param_1 + 0x18)) = puVar4;
    }
    else if ((longlong *)*plVar7 == plVar8) {
      *plVar7 = (longlong)puVar4;
    }
    else {
      lVar1 = *(longlong *)plVar7[1];
      plVar7[1] = lVar1;
      if ((undefined8 *)lVar1 != puVar4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    plVar8 = (longlong *)**(undefined8 **)(lVar10 + 8 + *(longlong *)(param_1 + 0x18));
    do {
      do {
        if (plVar8 == plVar5) goto LAB_143a23f72;
        plVar8 = (longlong *)plVar8[1];
        plVar7 = plVar8 + 2;
        if (0xf < (ulonglong)plVar8[5]) {
          plVar7 = (longlong *)plVar8[2];
        }
        puVar4 = param_3;
        if (0xf < uVar9) {
          puVar4 = (undefined8 *)*param_3;
        }
      } while (_Size != plVar8[4]);
      iVar2 = _guard_xfg_dispatch_icall_nop(puVar4,plVar7,_Size);
      uVar9 = param_3[3];
    } while (iVar2 != 0);
    *param_2 = (longlong)plVar8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a24090 FUN_143a24090 body=446 status=ok
// SIG undefined FUN_143a24090(void)

longlong * FUN_143a24090(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong _Size;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  void *_Buf2;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  _Size = param_3[2];
  uVar11 = param_3[3];
  puVar6 = param_3;
  if (0xf < uVar11) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (_Size != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar6)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < _Size);
  }
  lVar9 = *(longlong *)(param_1 + 8);
  lVar10 = (*(ulonglong *)(param_1 + 0x30) & uVar7) * 0x10;
  lVar1 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x18));
  if (lVar9 == lVar1) {
LAB_143a241a1:
    lVar1 = *param_4;
    if (lVar9 != lVar1) {
      *(longlong *)param_4[1] = lVar1;
      **(longlong **)(lVar1 + 8) = lVar9;
      **(undefined8 **)(lVar9 + 8) = param_4;
      lVar2 = *(longlong *)(lVar9 + 8);
      *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(lVar1 + 8) = param_4[1];
      param_4[1] = lVar2;
    }
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar10);
    if (*plVar8 == *(longlong *)(param_1 + 8)) {
      *plVar8 = (longlong)param_4;
      *(longlong **)(lVar10 + 8 + *(longlong *)(param_1 + 0x18)) = param_4;
    }
    else if (*plVar8 == lVar9) {
      *plVar8 = (longlong)param_4;
    }
    else {
      plVar3 = *(longlong **)plVar8[1];
      plVar8[1] = (longlong)plVar3;
      if (plVar3 != param_4) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar10) + 8);
      }
    }
    std::
    _Hash<std::_Umap_traits<sw::Vec3,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>,std::_Uhash_compare<sw::Vec3,sw::Vec3Hasher,std::equal_to<sw::Vec3>_>,std::allocator<std::pair<sw::Vec3_const_,std::vector<sw::Boid_*___ptr64,std::allocator<sw::Boid_*___ptr64>_>_>_>,0>_>
    ::_Check_size(param_1);
    *param_2 = (longlong)param_4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar9 = **(longlong **)(lVar10 + 8 + *(longlong *)(param_1 + 0x18));
    do {
      do {
        if (lVar9 == lVar1) goto LAB_143a241a1;
        lVar9 = *(longlong *)(lVar9 + 8);
        _Buf2 = (void *)(lVar9 + 0x10);
        if (0xf < *(ulonglong *)(lVar9 + 0x28)) {
          _Buf2 = *(void **)(lVar9 + 0x10);
        }
        puVar6 = param_3;
        if (0xf < uVar11) {
          puVar6 = (undefined8 *)*param_3;
        }
      } while (_Size != *(ulonglong *)(lVar9 + 0x20));
      iVar4 = _guard_xfg_dispatch_icall_nop(puVar6,_Buf2,_Size);
      uVar11 = param_3[3];
    } while (iVar4 != 0);
    *(longlong *)param_4[1] = *param_4;
    *(longlong *)(*param_4 + 8) = param_4[1];
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    FUN_143a4d580(param_1 + 8,param_4);
    *param_2 = lVar9;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143a24250 _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*> body=631 status=ok
// SIG undefined _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
::
_Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
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
  
  if (0x38e38e38e38e38c < (ulonglong)param_1[1]) {
    _Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,TClassFunctionData_*,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,TClassFunctionData_*>_>_>_*>_>,0>_>
    ::_Destroy_if_node(param_1,param_6);
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
      goto LAB_143a242cf;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_143a242cf;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_143a242cf:
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
        goto LAB_143a24475;
      }
LAB_143a243e6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_143a243e6;
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
LAB_143a24475:
      plVar7[1] = (longlong)plVar8;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}



// FUNCTION 143a244d0 _Insert_at<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_&,std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void_*>_*> body=631 status=ok
// SIG undefined _Insert_at<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_&,std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void_*>_*>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_>,0>_>
::
_Insert_at<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>_&,std::_Tree_node<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,int>,void_*>_*>
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
  
  if (0x38e38e38e38e38c < (ulonglong)param_1[1]) {
    _Destroy_if_node(param_1,param_6);
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
      goto LAB_143a2454f;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_143a2454f;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_143a2454f:
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
        goto LAB_143a246f5;
      }
LAB_143a24666:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_143a24666;
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
LAB_143a246f5:
      plVar7[1] = (longlong)plVar8;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}



// FUNCTION 143a24750 _Insert_at<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>_&,std::_Tree_node<std::pair<FKey_const_,enum_EChromaSDKKeyboardKey::Type>,void_*>_*> body=631 status=ok
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
    FUN_143a4d120(param_1,param_6);
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
      goto LAB_143a247cf;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_143a247cf;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_143a247cf:
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
        goto LAB_143a24975;
      }
LAB_143a248e6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_143a248e6;
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
LAB_143a24975:
      plVar7[1] = (longlong)plVar8;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}



// FUNCTION 143a249d0 _Insert_at<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_&,std::_Tree_node<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>,void_*>_*> body=631 status=ok
// SIG undefined _Insert_at<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_&,std::_Tree_node<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>,void_*>_*>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<CefStringBase<CefStringTraitsUTF16>,CefStringBase<CefStringTraitsUTF16>,std::less<CefStringBase<CefStringTraitsUTF16>_>,std::allocator<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>,1>_>
::
_Insert_at<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_&,std::_Tree_node<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>,void_*>_*>
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
  
  if (0x333333333333331 < (ulonglong)param_1[1]) {
    FUN_143a4d190(param_1,param_6);
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
      goto LAB_143a24a4f;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_143a24a4f;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_143a24a4f:
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
        goto LAB_143a24bf5;
      }
LAB_143a24b66:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_143a24b66;
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
LAB_143a24bf5:
      plVar7[1] = (longlong)plVar8;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}



// FUNCTION 143a24c50 FUN_143a24c50 body=655 status=ok
// SIG undefined FUN_143a24c50(void)

undefined8 *
FUN_143a24c50(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x666666666666664 < (ulonglong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  plVar5 = (longlong *)FUN_143a21da0(param_1,param_5);
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
        goto LAB_143a24e95;
      }
LAB_143a24e06:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_143a24e06;
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
LAB_143a24e95:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}



// FUNCTION 143a24ee0 FUN_143a24ee0 body=655 status=ok
// SIG undefined FUN_143a24ee0(void)

undefined8 *
FUN_143a24ee0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x492492492492490 < (ulonglong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  plVar5 = (longlong *)FUN_143a21e20(param_1,param_5);
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
        goto LAB_143a25125;
      }
LAB_143a25096:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_143a25096;
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
LAB_143a25125:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}



// FUNCTION 143a25170 FUN_143a25170 body=655 status=ok
// SIG undefined FUN_143a25170(void)

undefined8 *
FUN_143a25170(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  plVar5 = (longlong *)
           std::
           _Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
           ::
           _Buynode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64>
                     (param_1,param_5);
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
        goto LAB_143a253b5;
      }
LAB_143a25326:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_143a25326;
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
LAB_143a253b5:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}



// FUNCTION 143a25400 FUN_143a25400 body=655 status=ok
// SIG undefined FUN_143a25400(void)

undefined8 *
FUN_143a25400(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  plVar5 = (longlong *)FUN_143a22140(param_1,param_5);
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
        goto LAB_143a25645;
      }
LAB_143a255b6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_143a255b6;
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
LAB_143a25645:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}



// FUNCTION 143a25690 _Insert_hint<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*> body=488 status=ok
// SIG undefined _Insert_hint<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::less<int>,std::allocator<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>,0>_>
::
_Insert_hint<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
          (longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  if (param_1[1] == 0) {
    _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
              (param_1,param_2,1,*param_1,param_4,param_5);
  }
  else {
    plVar2 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar2) {
      if (*param_4 < (int)param_3[4]) {
        _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
                  (param_1,param_2,1,param_3,param_4,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar2) {
      if (*(int *)(plVar2[2] + 0x20) < *param_4) {
        _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
                  (param_1,param_2,0,plVar2[2],param_4,param_5);
        return param_2;
      }
    }
    else {
      iVar1 = *param_4;
      if ((iVar1 < (int)param_3[4]) &&
         (local_38 = param_3,
         plVar3 = (longlong *)
                  _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>
                  ::operator--(&local_38), *(int *)(*plVar3 + 0x20) < iVar1)) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
                    (param_1,param_2,0,local_38,param_4,param_5);
          return param_2;
        }
        _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
                  (param_1,param_2,1,param_3,param_4,param_5);
        return param_2;
      }
      if (((int)param_3[4] < iVar1) &&
         ((local_38 = param_3,
          puVar4 = (undefined8 *)
                   _Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>_>
                   ::operator++(&local_38), (longlong *)*puVar4 == plVar2 ||
          (iVar1 < (int)local_38[4])))) {
        if (*(char *)(param_3[2] + 0x19) != '\0') {
          _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
                    (param_1,param_2,0,param_3,param_4,param_5);
          return param_2;
        }
        _Insert_at<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_&,std::_Tree_node<std::pair<int_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,void_*>_*>
                  (param_1,param_2,1,local_38,param_4,param_5);
        return param_2;
      }
    }
    puVar4 = (undefined8 *)FUN_143a25fa0(param_1,local_28,0,param_4,param_5);
    *param_2 = *puVar4;
  }
  return param_2;
}


